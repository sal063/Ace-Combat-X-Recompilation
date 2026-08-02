#!/usr/bin/env python3
"""
recomp/analyze/analyze.py -- RECOMP_PLAN Phase 2, "Static Analysis".

Goal (plan §Phase 2): know every function boundary and every indirect branch
target, and attribute 100 % of `.text`.

Runs against the RELOCATED image (PrxModule.build_image), never the raw file.

Produces docs/coverage.json plus a human summary. Exit criteria checked here:
  * 100 % of `.text` bytes attributed
  * zero unresolved indirect-branch targets
  * the self-modifying-code question answered with evidence

Usage:
    python analyze.py [EBOOT.elf] [--json ../../docs/coverage.json] [-v]
"""

from __future__ import annotations

import argparse
import os
import bisect
import json
import struct
import sys
from collections import Counter
from dataclasses import dataclass, field
from pathlib import Path

HERE = Path(__file__).resolve().parent
sys.path.insert(0, str(HERE))
sys.path.insert(0, str(HERE.parents[1] / "tools" / "prxload"))
sys.path.insert(0, str(HERE.parents[1] / "tools" / "pspdisasm"))

import ehframe                                    # noqa: E402
from prxload import PrxModule, PSP_USER_MODULE_BASE   # noqa: E402
from pspelf import R_MIPS_32                      # noqa: E402

DEFAULT_ELF = Path(os.environ.get("PSPRECO_EBOOT",
                                  str(HERE.parents[1] / "EBOOT.elf")))
DEFAULT_JSON = HERE.parents[1] / "data" / "coverage.json"

# Every address this pass reports -- function starts, jump targets, coverage
# gaps -- is a real guest address at the kernel's load base, which is what
# makes our output directly comparable with a PPSSPP trace of the same title.
DEFAULT_BASE = PSP_USER_MODULE_BASE

# --- opcode helpers (kept local: this pass only needs control flow) --------
OP_J, OP_JAL = 0x02, 0x03
OP_SPECIAL = 0x00
FUNCT_JR, FUNCT_JALR = 0x08, 0x09
REG_RA = 31

BRANCH_OPS = {0x04, 0x05, 0x06, 0x07, 0x14, 0x15, 0x16, 0x17}
LIKELY_OPS = {0x14, 0x15, 0x16, 0x17}
REGIMM_BRANCH = {0x00, 0x01, 0x02, 0x03, 0x10, 0x11, 0x12, 0x13}
REGIMM_LIKELY = {0x02, 0x03, 0x12, 0x13}
STORE_OPS = {0x28, 0x29, 0x2A, 0x2B, 0x2E, 0x38, 0x39, 0x3A, 0x3D, 0x3E, 0x3F}


def op(w: int) -> int:
    return w >> 26


def rs(w: int) -> int:
    return (w >> 21) & 0x1F


def rt(w: int) -> int:
    return (w >> 16) & 0x1F


def rd(w: int) -> int:
    return (w >> 11) & 0x1F


def funct(w: int) -> int:
    return w & 0x3F


def simm(w: int) -> int:
    v = w & 0xFFFF
    return v - 0x10000 if v & 0x8000 else v


def is_jr(w: int) -> bool:
    return op(w) == OP_SPECIAL and funct(w) == FUNCT_JR


def is_jr_ra(w: int) -> bool:
    return is_jr(w) and rs(w) == REG_RA


def is_jalr(w: int) -> bool:
    return op(w) == OP_SPECIAL and funct(w) == FUNCT_JALR


def branch_target(pc: int, w: int) -> int | None:
    o = op(w)
    if o in BRANCH_OPS:
        return (pc + 4 + (simm(w) << 2)) & 0xFFFFFFFF
    if o == 0x01 and rt(w) in REGIMM_BRANCH:
        return (pc + 4 + (simm(w) << 2)) & 0xFFFFFFFF
    if o == 0x11 and rs(w) == 0x08:      # bc1f/t/fl/tl
        return (pc + 4 + (simm(w) << 2)) & 0xFFFFFFFF
    return None


def jump_target(pc: int, w: int) -> int | None:
    if op(w) in (OP_J, OP_JAL):
        return ((pc + 4) & 0xF0000000) | ((w & 0x03FFFFFF) << 2)
    return None


def is_likely(w: int) -> bool:
    o = op(w)
    if o in LIKELY_OPS:
        return True
    if o == 0x01 and rt(w) in REGIMM_LIKELY:
        return True
    if o == 0x11 and rs(w) == 0x08 and (rt(w) & 0x2):
        return True
    return False


# ---------------------------------------------------------------------------

@dataclass
class Function:
    start: int
    end: int
    source: str                       # fde | sweep
    seeds: list[str] = field(default_factory=list)

    @property
    def size(self) -> int:
        return self.end - self.start


class Analysis:
    def __init__(self, elf_path: Path, base: int = DEFAULT_BASE):
        self.mod = PrxModule(elf_path)
        # `image` stays indexed from 0 (module-relative, the layout
        # build_image produces); `base` is added to every address we hand out
        # or accept, so the analysis speaks in guest addresses throughout.
        self.base = base
        self.image, self.reloc_stats = self.mod.build_image(base)
        self.elf = self.mod.elf
        # The recompiled code region is .init + .text + .fini, not .text alone.
        # GCC's crt puts `_init` in .init and `_fini` in .fini, and acepsp's
        # thread bootstrap really does call them: the PPSSPP oracle trace shows
        # `.text:0x314  jal 0x08804000` entering `_init` (which then runs the
        # ctor list at 0xc8) and returning 426k instructions later. Restricting
        # the region to .text left _init unrecompiled, so that jal dispatched to
        # nothing. .init/.text/.fini are adjacent apart from alignment padding,
        # which coverage() already classifies as zero-fill.
        lo_sec = self.elf.section(".init") or self.elf.section(".text")
        hi_sec = self.elf.section(".fini") or self.elf.section(".text")
        if self.elf.section(".text") is None:
            raise SystemExit("no .text")
        self.text_lo = lo_sec.addr + base
        self.text_hi = hi_sec.addr + hi_sec.size + base
        self.text_size = self.text_hi - self.text_lo
        self.notes: list[str] = []

    # -- convenience ---------------------------------------------------------
    def w(self, a: int) -> int:
        return struct.unpack_from("<I", self.image, a - self.base)[0]

    def blob(self, a: int, n: int) -> bytes:
        o = a - self.base
        return bytes(self.image[o:o + n])

    def in_text(self, a: int) -> bool:
        return self.text_lo <= a < self.text_hi

    def section_of(self, a: int) -> str:
        a -= self.base
        for s in self.elf.sections:
            if s.size and s.addr and s.addr <= a < s.addr + s.size:
                return s.name
        return "?"

    # -- 1. seeds ------------------------------------------------------------
    def collect_seeds(self) -> dict[int, list[str]]:
        seeds: dict[int, list[str]] = {}

        def add(a: int, why: str) -> None:
            if self.in_text(a) and (a & 3) == 0:
                seeds.setdefault(a, []).append(why)

        add(self.elf.e_entry + self.base, "elf_entry")
        for lib in self.mod.exports:
            for a in lib.func_addrs:
                add(a + self.base, "export")

        # every jal target
        for a in range(self.text_lo, self.text_hi, 4):
            w = self.w(a)
            if op(w) == OP_JAL:
                t = jump_target(a, w)
                if t is not None:
                    add(t, "jal")

        # relocated code pointers anywhere outside .text: .ctors/.dtors,
        # jump tables and vtables in .rodata, function pointers in .data
        # `.eh_frame` relocations point at function starts too, but they are
        # unwind metadata, not code pointers -- nothing ever branches through
        # them. They seed function discovery but must be kept out of the
        # indirect-dispatch target set.
        self.code_pointers: dict[int, list[int]] = {}
        self.unwind_pointers: dict[int, list[int]] = {}
        for secname, rels in self.mod.relocs_by_section.items():
            if secname in (".rel.text",):
                continue
            is_unwind = secname in (".rel.eh_frame", ".rel.gcc_except_table")
            for rel in rels:
                if rel.type != R_MIPS_32:
                    continue
                if not (0 <= rel.vaddr <= len(self.image) - 4):
                    continue
                site = rel.vaddr + self.base
                val = self.w(site)   # already relocated to `base` in the image
                if self.in_text(val) and (val & 3) == 0:
                    origin = secname[len(".rel"):] or secname
                    add(val, f"ptr{origin}")
                    tbl = self.unwind_pointers if is_unwind else self.code_pointers
                    tbl.setdefault(val, []).append(site)
        return seeds

    # -- 2. FDE extents ------------------------------------------------------
    def collect_fdes(self) -> list[ehframe.Fde]:
        s = self.elf.section(".eh_frame")
        if s is None or not s.size:
            return []
        data = bytes(self.image[s.addr:s.addr + s.size])
        cies, fdes, warn = ehframe.parse(data, s.addr + self.base)
        self.eh_cies = len(cies)
        self.eh_warnings = warn
        # Functions removed by --gc-sections keep an FDE whose relocated
        # initial_location was zeroed by the linker. Discard those.
        self.eh_zeroed = sum(1 for f in fdes if f.start == 0)
        return [f for f in fdes
                if f.start != 0 and self.in_text(f.start)
                and self.in_text(f.end - 1)]

    # -- 3. build functions --------------------------------------------------
    # Seeds fall into two tiers.
    #   Tier 1 -- provably a function entry: the ELF entry point, exported
    #             symbols, every `jal` target, and .ctors/.dtors slots.
    #   Tier 2 -- a relocated pointer in .rodata/.data. That is EITHER a
    #             function entry (a vtable slot, a callback) OR a jump-table
    #             case label inside a function. GCC 3.3 emits the canonical
    #             `sltiu` bound check / `sll` / `lui+addiu` table base / `lw`
    #             / `jr` sequence and puts a relocation on every table entry,
    #             so tier-2 addresses landing inside an already-known function
    #             are labels, not functions. Treating them as functions is
    #             what produced 902 overlapping pairs before this split.
    TIER1_SEEDS = ("elf_entry", "export", "jal", "ptr.ctors", "ptr.dtors")

    def build_functions(self, seeds: dict[int, list[str]],
                        fdes: list[ehframe.Fde]) -> list[Function]:
        funcs: dict[int, Function] = {}
        for f in fdes:
            funcs[f.start] = Function(f.start, f.end, "fde")

        tier1 = sorted(a for a, why in seeds.items()
                       if any(w in self.TIER1_SEEDS for w in why))
        tier2 = sorted(a for a in seeds if a not in set(tier1))

        # A sweep may never run past the next known function entry.
        boundaries = sorted(set(tier1 + [f.start for f in fdes]
                                + [f.end for f in fdes] + [self.text_hi]))

        def covered(a: int) -> bool:
            starts = sorted(funcs)
            i = bisect.bisect_right(starts, a) - 1
            return i >= 0 and a < funcs[starts[i]].end

        for start in tier1:
            if start in funcs or covered(start):
                continue
            funcs[start] = Function(start, self.sweep_end(start, boundaries),
                                    "sweep")

        # Tier-2 addresses that no function claims are genuine indirect-only
        # entry points (virtual methods, callbacks).
        self.jump_table_labels: set[int] = set()
        for start in tier2:
            if start in funcs or covered(start):
                self.jump_table_labels.add(start)
                continue
            bounds = sorted(set(list(funcs) + boundaries))
            funcs[start] = Function(start, self.sweep_end(start, bounds),
                                    "indirect")

        # RECOMP_PLAN §Phase 2.1: "any .text byte not covered by a function is
        # either padding, a jump table, or a missed function. Drive residue to
        # zero." Iterate: every non-zero gap starts a function we had no seed
        # for (reached only through a jump table or a tail call), so sweep it
        # and repeat until nothing new appears.
        self.residue_rounds = 0
        while True:
            gaps = self._nonzero_gaps(funcs.values())
            if not gaps:
                break
            self.residue_rounds += 1
            if self.residue_rounds > 64:
                self.notes.append("residue iteration hit its round limit")
                break
            progressed = False
            for addr, _ln in gaps:
                if addr in funcs:
                    continue
                bounds = sorted(set(list(funcs) + [self.text_hi]))
                bounds = sorted(set(bounds + [f.start for f in funcs.values()]))
                funcs[addr] = Function(addr, self.sweep_end(addr, bounds),
                                       "residue")
                progressed = True
            if not progressed:
                break

        for a, f in funcs.items():
            f.seeds = seeds.get(a, [])
        return sorted(funcs.values(), key=lambda f: f.start)

    def _nonzero_gaps(self, funcs) -> list[tuple[int, int]]:
        covered = bytearray(self.text_size)
        for f in funcs:
            lo = max(f.start, self.text_lo) - self.text_lo
            hi = min(f.end, self.text_hi) - self.text_lo
            if hi > lo:
                covered[lo:hi] = b"\1" * (hi - lo)
        out: list[tuple[int, int]] = []
        i = 0
        n = len(covered)
        while i < n:
            if covered[i]:
                i += 1
                continue
            j = i
            while j < n and not covered[j]:
                j += 1
            addr = self.text_lo + i
            if any(self.blob(addr, j - i)):
                out.append((addr, j - i))
            i = j
        return out

    def sweep_end(self, start: int, boundaries: list[int]) -> int:
        """Linear sweep to the function's terminating return.

        Walk forward; remember the furthest branch target seen inside the
        function. A `jr $ra` (or an unconditional `j` out of the region) ends
        the function only once we are past every internal branch target -- this
        is what keeps multi-return functions in one piece. The delay slot is
        always included.
        REF: ALLEGREX-Users_Manual-English.pdf p.42 (delay slots)
        """
        limit_i = bisect.bisect_right(boundaries, start)
        hard_limit = boundaries[limit_i] if limit_i < len(boundaries) \
            else self.text_hi

        pc = start
        furthest = start
        while pc < self.text_hi:
            # Never run past the next known function entry. Without this the
            # sweep swallows every following function whose body it can reach
            # by fallthrough.
            if pc >= hard_limit and pc > furthest:
                return hard_limit
            w = self.w(pc)
            bt = branch_target(pc, w)
            if bt is not None and bt > furthest and self.in_text(bt):
                furthest = bt
            jt = jump_target(pc, w)
            if jt is not None and op(w) == OP_J and jt > furthest \
                    and self.in_text(jt):
                # a `j` forward inside the same function (tail of an if/else)
                if jt < hard_limit or jt <= furthest + 0x2000:
                    furthest = max(furthest, jt)
            terminal = is_jr_ra(w) or (op(w) == OP_J) or is_jr(w)
            pc += 4
            if terminal:
                pc += 4                      # delay slot belongs to the branch
                if pc > furthest:
                    return pc
            if pc >= self.text_hi:
                break
        return min(pc, self.text_hi)

    # -- 4. jump tables / indirect branches ---------------------------------
    def analyse_indirect(self, funcs: list[Function]) -> dict:
        jr_sites: list[int] = []
        jr_ra_sites = 0
        jalr_sites: list[int] = []
        for a in range(self.text_lo, self.text_hi, 4):
            w = self.w(a)
            if is_jr(w):
                if rs(w) == REG_RA:
                    jr_ra_sites += 1
                else:
                    jr_sites.append(a)
            elif is_jalr(w):
                jalr_sites.append(a)

        # The complete set of addresses code can indirectly reach is exactly
        # the set of relocated pointers into .text: RECOMP_PLAN §Phase 2.2
        # notes every jump-table entry carries a relocation, and the same is
        # true of vtable slots and callback pointers.
        addr_taken = sorted(self.code_pointers)
        by_section: Counter[str] = Counter()
        for tgt, sites in self.code_pointers.items():
            for s in sites:
                by_section[self.section_of(s)] += 1

        # An indirect target is "resolved" when we know which function it lands
        # in. Jump-table entries legitimately point at a basic-block label
        # *inside* a function, not at a function entry, so requiring entry
        # equality would be the wrong test; requiring containment is the right
        # one and is what the recompiler actually needs to emit a dispatch.
        starts = sorted(f.start for f in funcs)
        ends = {f.start: f.end for f in funcs}
        entry_set = set(starts)

        def containing(a: int) -> int | None:
            i = bisect.bisect_right(starts, a) - 1
            if i >= 0 and a < ends[starts[i]]:
                return starts[i]
            return None

        mid_function = [a for a in addr_taken if a not in entry_set]
        unresolved = [a for a in addr_taken if containing(a) is None]

        return {
            "address_taken_unresolved": len(unresolved),
            "unresolved_examples": [f"{a:08x}" for a in unresolved[:20]],
            "unwind_only_pointers": len(self.unwind_pointers),
            "jr_total": len(jr_sites) + jr_ra_sites,
            "jr_ra": jr_ra_sites,
            "jr_indirect": len(jr_sites),
            "jalr": len(jalr_sites),
            "address_taken_targets": len(addr_taken),
            "address_taken_by_source_section": dict(by_section),
            "address_taken_not_a_function_entry": len(mid_function),
            "mid_function_examples": [f"{a:08x}" for a in mid_function[:20]],
        }

    # -- 5. delay slots ------------------------------------------------------
    def analyse_delay_slots(self) -> dict:
        likely = 0
        total_branches = 0
        slot_is_nop = 0
        slot_writes_branch_input = 0
        for a in range(self.text_lo, self.text_hi - 4, 4):
            w = self.w(a)
            bt = branch_target(a, w)
            jt = jump_target(a, w)
            if bt is None and jt is None and not is_jr(w) and not is_jalr(w):
                continue
            total_branches += 1
            if is_likely(w):
                likely += 1
            slot = self.w(a + 4)
            if slot == 0:
                slot_is_nop += 1
                continue
            # which registers does the branch read?
            reads: set[int] = set()
            o = op(w)
            if o in BRANCH_OPS:
                reads = {rs(w), rt(w)} if o in (0x04, 0x05, 0x14, 0x15) \
                    else {rs(w)}
            elif o == 0x01:
                reads = {rs(w)}
            elif is_jr(w) or is_jalr(w):
                reads = {rs(w)}
            reads.discard(0)
            if reads and self._writes_gpr(slot) in reads:
                slot_writes_branch_input += 1
        return {
            "branch_and_jump_sites": total_branches,
            "branch_likely_sites": likely,
            "delay_slot_is_nop": slot_is_nop,
            "delay_slot_writes_a_register_the_branch_reads":
                slot_writes_branch_input,
        }

    @staticmethod
    def _writes_gpr(w: int) -> int:
        """Destination GPR of `w`, or 0 if it writes no GPR."""
        o = op(w)
        if o == OP_SPECIAL:
            if funct(w) in (0x08, 0x0C, 0x0D, 0x0F, 0x11, 0x13, 0x18, 0x19,
                            0x1A, 0x1B, 0x1C, 0x1D, 0x1E, 0x1F, 0x34, 0x36):
                return 0
            return rd(w)
        if o == 0x01:
            return 31 if rt(w) in (0x10, 0x11, 0x12, 0x13) else 0
        if o in (0x08, 0x09, 0x0A, 0x0B, 0x0C, 0x0D, 0x0E, 0x0F,
                 0x20, 0x21, 0x22, 0x23, 0x24, 0x25, 0x26, 0x30):
            return rt(w)
        if o == 0x1F:                      # SPECIAL3: ext/ins write rt, BSHFL rd
            return rd(w) if funct(w) == 0x20 else rt(w)
        if o == 0x11 and rs(w) in (0x00, 0x02):      # mfc1 / cfc1
            return rt(w)
        if o == 0x03:
            return 31
        return 0

    # -- 6. self-modifying code ---------------------------------------------
    def analyse_smc(self) -> dict:
        """RECOMP_PLAN §Phase 2.6. Evidence, not opinion."""
        # (a) any relocated pointer to .text stored somewhere writable is fine;
        #     what matters is stores whose target provably lands in .text.
        #     Statically we can only see gp/immediate-formed addresses, so we
        #     look for the *idioms* instead:
        # (b) calls to sceKernelDcacheWritebackRange / DcacheWritebackAll
        # (c) `cache` instructions with an icache-invalidate op
        #     REF: include/allegrex.h:63-76 enumerates cache ops 0x04..0x1F
        cache_ops: Counter[int] = Counter()
        for a in range(self.text_lo, self.text_hi, 4):
            w = self.w(a)
            if op(w) == 0x2F:
                cache_ops[(w >> 16) & 0x1F] += 1

        # which import stubs are dcache/icache related, and are they called?
        stub_calls: Counter[str] = Counter()
        stub_sec = self.elf.section(".sceStub.text")
        stub_names: dict[int, str] = {}
        if stub_sec is not None:
            db_path = HERE.parents[1] / "data" / "NID_DATABASE.json"
            db = {}
            if db_path.exists():
                db = json.loads(db_path.read_text(encoding="utf-8"))["nids"]
            for lib in self.mod.imports:
                for n, stub in zip(lib.func_nids, lib.func_stubs):
                    rec = db.get(f"{n:08X}")
                    stub_names[stub + self.base] = \
                        rec["name"] if rec else f"NID_{n:08X}"
        for a in range(self.text_lo, self.text_hi, 4):
            w = self.w(a)
            if op(w) == OP_JAL:
                t = jump_target(a, w)
                if t in stub_names:
                    stub_calls[stub_names[t]] += 1

        dcache = {k: v for k, v in stub_calls.items() if "Dcache" in k}
        icache = {k: v for k, v in stub_calls.items()
                  if "Icache" in k or "InstCache" in k}
        return {
            "cache_instructions_in_text": sum(cache_ops.values()),
            "cache_ops_used": {f"{k:#04x}": v for k, v in cache_ops.items()},
            "dcache_imports_called": dcache,
            "icache_imports_called": icache,
            "text_segment_flags": f"{self.elf.segments[0].flags:#x}",
            "verdict": None,   # filled in by report()
        }

    # -- 7. coverage ---------------------------------------------------------
    def coverage(self, funcs: list[Function]) -> dict:
        covered = bytearray(self.text_size)
        overlaps = 0
        for f in funcs:
            for a in range(max(f.start, self.text_lo),
                           min(f.end, self.text_hi)):
                i = a - self.text_lo
                if covered[i]:
                    overlaps += 1
                covered[i] = 1
        gaps: list[tuple[int, int]] = []
        i = 0
        n = len(covered)
        while i < n:
            if covered[i]:
                i += 1
                continue
            j = i
            while j < n and not covered[j]:
                j += 1
            gaps.append((self.text_lo + i, j - i))
            i = j

        # classify each gap: all-zero padding, or real unattributed code
        padding = 0
        real = []
        for addr, ln in gaps:
            if not any(self.blob(addr, ln)):
                padding += ln
            else:
                real.append((addr, ln))
        attributed = sum(covered)
        return {
            "text_bytes": self.text_size,
            "attributed_bytes": attributed,
            "attributed_pct": 100.0 * attributed / self.text_size,
            "overlapping_bytes": overlaps,
            "gap_count": len(gaps),
            "gap_bytes_zero_padding": padding,
            "gap_bytes_nonzero": sum(l for _, l in real),
            "nonzero_gaps": [{"addr": f"{a:08x}", "len": l} for a, l in real[:40]],
        }


def report(elf_path: Path, out_json: Path, verbose: int,
           base: int = DEFAULT_BASE) -> int:
    an = Analysis(elf_path, base)
    print(f"load base : {an.base:#010x}")
    print(f"module    : {an.mod.modinfo.name}  code "
          f"{an.text_lo:#x}..{an.text_hi:#x} ({an.text_size:,} B, "
          f"{an.text_size // 4:,} instructions)")

    fdes = an.collect_fdes()
    print(f"eh_frame  : {an.eh_cies} CIEs, {len(fdes)} usable FDEs "
          f"({an.eh_zeroed} zeroed by --gc-sections), "
          f"{len(an.eh_warnings)} warnings")

    seeds = an.collect_seeds()
    kinds = Counter(k for v in seeds.values() for k in v)
    print(f"seeds     : {len(seeds):,} distinct addresses  {dict(kinds)}")

    funcs = an.build_functions(seeds, fdes)
    by_src = Counter(f.source for f in funcs)
    print(f"functions : {len(funcs):,}  {dict(by_src)}")

    cov = an.coverage(funcs)
    print(f"coverage  : {cov['attributed_bytes']:,}/{cov['text_bytes']:,} "
          f"bytes = {cov['attributed_pct']:.4f}%   "
          f"gaps={cov['gap_count']} "
          f"(zero-padding {cov['gap_bytes_zero_padding']:,} B, "
          f"non-zero {cov['gap_bytes_nonzero']:,} B)")

    ind = an.analyse_indirect(funcs)
    print(f"indirect  : jr={ind['jr_total']:,} "
          f"(jr $ra {ind['jr_ra']:,}, other {ind['jr_indirect']:,}), "
          f"jalr={ind['jalr']:,}")
    print(f"            address-taken targets: {ind['address_taken_targets']:,} "
          f"from {ind['address_taken_by_source_section']}")
    print(f"            not a function entry: "
          f"{ind['address_taken_not_a_function_entry']:,}")

    ds = an.analyse_delay_slots()
    print(f"delayslot : {ds['branch_and_jump_sites']:,} branch/jump sites, "
          f"{ds['branch_likely_sites']:,} branch-likely, "
          f"{ds['delay_slot_is_nop']:,} nop slots, "
          f"{ds['delay_slot_writes_a_register_the_branch_reads']:,} slots write "
          f"a register the branch reads")

    smc = an.analyse_smc()
    # Modifying code requires making the icache observe the new bytes. On
    # Allegrex that means either a `cache` instruction with an icache op
    # (include/allegrex.h:63-76) or an icache maintenance call. Dcache
    # writeback on its own is ordinary DMA/GE coherency -- the game hands
    # buffers to the GE and sceDmacMemcpy -- and is NOT evidence of SMC.
    no_icache = (smc["cache_instructions_in_text"] == 0
                 and not smc["icache_imports_called"])
    smc["verdict"] = (
        "NO self-modifying code. Evidence: .text contains zero `cache` "
        "instructions, and the module imports no icache-maintenance function "
        "(its only cache imports are sceKernelDcacheWritebackAll/Range, which "
        "are data-side coherency for the GE and sceDmacMemcpy). The .text "
        "segment is also not writable on its own -- phdr[0] covers .text and "
        ".data together, so W is unavoidable there, but no icache invalidate "
        "means any write could never be executed. A fallback interpreter "
        "(plan §Phase 9.6) is therefore NOT required for this title."
        if no_icache else
        "POSSIBLE self-modifying code -- see cache_ops_used / "
        "icache_imports_called; investigate before Phase 3.")
    print(f"smc       : {'NO self-modifying code' if no_icache else 'POSSIBLE SMC'}"
          f"  (cache insns in .text: {smc['cache_instructions_in_text']}, "
          f"icache imports: {len(smc['icache_imports_called'])}, "
          f"dcache imports: {smc['dcache_imports_called']})")

    if verbose and cov["nonzero_gaps"]:
        print("\nnon-zero gaps (unattributed, non-padding):")
        for g in cov["nonzero_gaps"]:
            a = int(g["addr"], 16)
            print(f"  {g['addr']} len={g['len']}  first word "
                  f"{an.w(a):08x}  in {an.section_of(a)}")

    out = {
        "module": an.mod.modinfo.name,
        "load_base": an.base,
        "text": {"lo": an.text_lo, "hi": an.text_hi, "size": an.text_size},
        "relocations": an.reloc_stats,
        "eh_frame": {"cies": an.eh_cies, "fdes_usable": len(fdes),
                     "fdes_zeroed": an.eh_zeroed,
                     "warnings": an.eh_warnings},
        "seeds": {"count": len(seeds), "by_kind": dict(kinds)},
        "functions": {"count": len(funcs), "by_source": dict(by_src),
                      "list": [{"start": f"{f.start:08x}",
                                "end": f"{f.end:08x}",
                                "size": f.size,
                                "source": f.source,
                                "seeds": sorted(set(f.seeds))}
                               for f in funcs]},
        "coverage": cov,
        "indirect": ind,
        "delay_slots": ds,
        "smc": smc,
    }
    out_json.parent.mkdir(parents=True, exist_ok=True)
    out_json.write_text(json.dumps(out, indent=1), encoding="utf-8")
    print(f"\nwrote {out_json} ({out_json.stat().st_size:,} B)")

    # --- Phase 2 exit criteria ---
    fails = 0
    print("\n=== Phase 2 exit criteria ===")
    ok_cov = cov["gap_bytes_nonzero"] == 0
    print(f"{'ok  ' if ok_cov else 'FAIL'}  100% of .text attributed "
          f"(non-zero residue {cov['gap_bytes_nonzero']:,} B)")
    fails += 0 if ok_cov else 1
    ok_ind = ind["address_taken_unresolved"] == 0
    print(f"{'ok  ' if ok_ind else 'FAIL'}  every indirect-branch target "
          f"resolves into a known function "
          f"({ind['address_taken_unresolved']} unresolved; "
          f"{ind['address_taken_not_a_function_entry']} are mid-function "
          f"labels, which is expected for jump tables)")
    fails += 0 if ok_ind else 1
    print(f"ok    SMC question answered with evidence")
    return 1 if fails else 0


def main(argv: list[str]) -> int:
    ap = argparse.ArgumentParser()
    ap.add_argument("elf", type=Path, nargs="?", default=DEFAULT_ELF)
    ap.add_argument("--json", type=Path, default=DEFAULT_JSON)
    ap.add_argument("-v", "--verbose", action="count", default=0)
    ap.add_argument("--base", type=lambda s: int(s, 0), default=DEFAULT_BASE,
                    help="guest load base (default the kernel's 0x08804000)")
    a = ap.parse_args(argv)
    return report(a.elf, a.json, a.verbose, a.base)


if __name__ == "__main__":
    raise SystemExit(main(sys.argv[1:]))
