#!/usr/bin/env python3
"""
tools/prxload -- Phase 1, Task 1 of RECOMP_PLAN.md

PSP ELF/PRX front-end: module info, import/export tables, PRX relocations.

REF: include/moduleexport.h:297-307   _sceModuleInfo
REF: include/moduleexport.h:40        SCE_MODULE_NAME_LEN = 27
REF: include/moduleexport.h:43-46     section-name constants
         (.rodata.sceModuleInfo / .rodata.sceResident / .sceStub.text /
          .rodata.sceVstub)

NOT DOCUMENTED: the on-disk layout of a `.lib.stub` / `.lib.ent` table entry is not
declared in any public 6.6.0 header (only the section *names* are, at
moduleexport.h:43-46). The layouts below were derived from the stub archives.

Usage:
    python prxload.py EBOOT.elf                 # summary
    python prxload.py EBOOT.elf --imports       # imports, named via NID DB
    python prxload.py EBOOT.elf --check-plan    # assert RECOMP_PLAN §1.3
    python prxload.py EBOOT.elf --json out.json
"""

from __future__ import annotations

import argparse
import json
import re
import struct
import subprocess
import sys
from dataclasses import dataclass, field, asdict
from pathlib import Path

sys.path.insert(0, str(Path(__file__).resolve().parent))
from pspelf import (  # noqa: E402
    Elf32, ElfError, ET_PSP_PRX, EM_MIPS, SHT_PRXRELOC, SHT_PRXRELOC_FW5,
    SHT_NOBITS, PT_LOAD, MIPS_RELOC_NAMES, R_MIPS_HI16, R_MIPS_LO16,
    R_MIPS_26, R_MIPS_32, _cstr,
)

DEFAULT_NID_DB = Path(__file__).resolve().parents[2] / "data" / "NID_DATABASE.json"

SCE_MODULE_NAME_LEN = 27          # moduleexport.h:40
MODINFO_SECTION = ".rodata.sceModuleInfo"   # moduleexport.h:43

# Where the kernel loads a user module. NOT DOCUMENTED: no public 6.6.0 header
# states the user-module load address. Measured: a PPSSPP trace of ULUS10176
# starts at pc 0x08804128 for an ELF whose e_entry is 0x128, and its initial
# $gp is 0x08A6D200 against a module-relative gp of 0x00269200 -- both give
# 0x08804000. See docs/PLAN_DELTAS.md D12.
PSP_USER_MODULE_BASE = 0x08804000


# ---------------------------------------------------------------------------
# Structures
# ---------------------------------------------------------------------------

@dataclass
class ModuleInfo:
    attribute: int
    version_minor: int
    version_major: int
    name: str
    gp_value: int
    ent_top: int
    ent_end: int
    stub_top: int
    stub_end: int

    @property
    def version(self) -> str:
        return f"{self.version_major}.{self.version_minor}"


@dataclass
class ImportLib:
    name: str
    version: int
    attribute: int
    entry_size: int          # in words
    var_count: int
    func_count: int
    nid_table: int
    stub_table: int
    func_nids: list[int] = field(default_factory=list)
    func_stubs: list[int] = field(default_factory=list)
    var_nids: list[int] = field(default_factory=list)
    var_refs: list[int] = field(default_factory=list)


@dataclass
class ExportLib:
    name: str
    version: int
    attribute: int
    entry_size: int
    var_count: int
    func_count: int
    table: int
    func_nids: list[int] = field(default_factory=list)
    func_addrs: list[int] = field(default_factory=list)
    var_nids: list[int] = field(default_factory=list)
    var_addrs: list[int] = field(default_factory=list)


@dataclass
class Reloc:
    """A decoded PRX relocation (SHT_PRXRELOC, type 0x700000A0)."""
    section: str
    offset: int          # r_offset, relative to the OFS_BASE segment
    type: int
    ofs_base: int        # program-header index supplying the offset base
    addr_base: int       # program-header index supplying the value base
    vaddr: int           # resolved virtual address of the patched word


class PrxModule:
    def __init__(self, path: Path):
        self.path = path
        self.elf = Elf32(path.read_bytes(), str(path))
        self.modinfo = self._read_modinfo()
        self.imports = self._read_imports()
        self.exports = self._read_exports()
        self.relocs_by_section, self.reloc_type_counts = self._read_relocs()
        self.gp_value_relocated = self._relocate_gp()

    def _relocate_gp(self) -> int:
        """`gp_value` in .rodata.sceModuleInfo is a *relocatable pointer*: the
        stored word is a segment-relative offset and an R_MIPS_32 relocation in
        .rel.rodata.sceModuleInfo names the segment to add. The reference tool
        reports the relocated value, so we must too.

        For acepsp: stored 0x0001b380 + phdr[1].vaddr 0x0024de80 = 0x00269200,
        which lands in .sdata/.sbss as GCC's -G small-data model requires.
        RECOMP_PLAN §1.3/§2 quote the *unrelocated* 0x0001b380 -- see
        docs/PLAN_DELTAS.md.
        """
        gp_field_va = self._modinfo_vaddr() + 4 + SCE_MODULE_NAME_LEN + 1
        for rel in self.relocs_by_section.get(".rel.rodata.sceModuleInfo", []):
            if rel.vaddr == gp_field_va and rel.type == R_MIPS_32:
                segs = self.elf.segments
                base = segs[rel.addr_base].vaddr if rel.addr_base < len(segs) else 0
                return (self.modinfo.gp_value + base) & 0xFFFFFFFF
        return self.modinfo.gp_value

    # -- module info ---------------------------------------------------------
    def _modinfo_vaddr(self) -> int:
        sec = self.elf.section(MODINFO_SECTION)
        if sec is not None and sec.size:
            return sec.addr
        # PRX convention: phdr[0].paddr points at the module info when the
        # section headers have been stripped.
        if self.elf.segments:
            return self.elf.segments[0].paddr & 0x7FFFFFFF
        raise ElfError("no .rodata.sceModuleInfo and no phdr[0].paddr")

    def _read_modinfo(self) -> ModuleInfo:
        va = self._modinfo_vaddr()
        blob = self.elf.read_at_vaddr(va, 4 + SCE_MODULE_NAME_LEN + 1 + 20)
        if len(blob) < 52:
            raise ElfError(f"module info truncated at {va:#x}")
        attribute, minor, major = struct.unpack_from("<HBB", blob, 0)
        name = _cstr(blob, 4)
        gp, ent_top, ent_end, stub_top, stub_end = struct.unpack_from(
            "<5I", blob, 4 + SCE_MODULE_NAME_LEN + 1)
        return ModuleInfo(attribute, minor, major, name, gp,
                          ent_top, ent_end, stub_top, stub_end)

    # -- import / export tables ---------------------------------------------
    def _u32v(self, vaddr: int, count: int) -> list[int]:
        blob = self.elf.read_at_vaddr(vaddr, count * 4)
        if len(blob) < count * 4:
            return list(struct.unpack_from(f"<{len(blob) // 4}I", blob, 0))
        return list(struct.unpack_from(f"<{count}I", blob, 0))

    def _read_imports(self) -> list[ImportLib]:
        out: list[ImportLib] = []
        top, end = self.modinfo.stub_top, self.modinfo.stub_end
        if not top or end <= top:
            return out
        blob = self.elf.read_at_vaddr(top, end - top)
        ENTRY = 20
        for off in range(0, len(blob) - ENTRY + 1, ENTRY):
            (name_ptr, version, attribute, entry_size, var_count,
             func_count, nid_table, stub_table) = struct.unpack_from(
                "<IHHBBHII", blob, off)
            lib = ImportLib(
                name=self.elf.cstr_at_vaddr(name_ptr) if name_ptr else "",
                version=version, attribute=attribute, entry_size=entry_size,
                var_count=var_count, func_count=func_count,
                nid_table=nid_table, stub_table=stub_table)
            lib.func_nids = self._u32v(nid_table, func_count)
            lib.func_stubs = [stub_table + 8 * i for i in range(func_count)]
            if var_count:
                # variable NIDs follow the function NIDs in the same table
                vs = self._u32v(nid_table + 4 * func_count, var_count * 2)
                lib.var_nids = vs[1::2] if len(vs) >= 2 else []
                lib.var_refs = vs[0::2] if len(vs) >= 2 else []
            out.append(lib)
        return out

    def _read_exports(self) -> list[ExportLib]:
        out: list[ExportLib] = []
        top, end = self.modinfo.ent_top, self.modinfo.ent_end
        if not top or end <= top:
            return out
        blob = self.elf.read_at_vaddr(top, end - top)
        ENTRY = 16
        for off in range(0, len(blob) - ENTRY + 1, ENTRY):
            (name_ptr, version, attribute, entry_size, var_count,
             func_count, table) = struct.unpack_from("<IHHBBHI", blob, off)
            lib = ExportLib(
                name=self.elf.cstr_at_vaddr(name_ptr) if name_ptr else "<Module>",
                version=version, attribute=attribute, entry_size=entry_size,
                var_count=var_count, func_count=func_count, table=table)
            n = func_count + var_count
            words = self._u32v(table, n * 2)
            nids, addrs = words[:n], words[n:n + n]
            lib.func_nids = nids[:func_count]
            lib.func_addrs = addrs[:func_count]
            lib.var_nids = nids[func_count:]
            lib.var_addrs = addrs[func_count:]
            out.append(lib)
        return out

    # -- relocations ---------------------------------------------------------
    def _read_relocs(self) -> tuple[dict[str, list[Reloc]], dict[str, int]]:
        by_sec: dict[str, list[Reloc]] = {}
        counts: dict[str, int] = {}
        segs = self.elf.segments
        for sec in self.elf.sections:
            if sec.sh_type not in (SHT_PRXRELOC, SHT_PRXRELOC_FW5):
                continue
            blob = self.elf.section_data(sec)
            lst: list[Reloc] = []
            for i in range(len(blob) // 8):
                r_offset, r_info = struct.unpack_from("<II", blob, i * 8)
                rtype = r_info & 0xFF
                ofs_base = (r_info >> 8) & 0xFF
                addr_base = (r_info >> 16) & 0xFF
                base = segs[ofs_base].vaddr if ofs_base < len(segs) else 0
                lst.append(Reloc(sec.name, r_offset, rtype, ofs_base,
                                 addr_base, base + r_offset))
                key = MIPS_RELOC_NAMES.get(rtype, f"type_{rtype}")
                counts[key] = counts.get(key, 0) + 1
            by_sec[sec.name] = lst
        return by_sec, counts

    # -- relocation application ---------------------------------------------
    def image_size(self) -> int:
        return max((s.vaddr + s.memsz) for s in self.elf.segments)

    def build_image(self, rebase: int = 0) -> tuple[bytearray, dict]:
        """Materialise the module as one flat buffer with all PRX relocations
        applied, optionally rebased by `rebase` bytes.

        PSP PRX relocation semantics (SHT_PRXRELOC, 0x700000A0):
          * `r_offset` is relative to program header `OFS_BASE`;
          * the value added is the runtime base of program header `ADDR_BASE`,
            i.e. `phdr[ADDR_BASE].vaddr + rebase`;
          * entries are REL (no explicit addend) -- the addend lives in the
            instruction/data field being patched.

        HI16/LO16 pairing follows the relocation STREAM, not addresses, and
        the rule is a queue:

          * an R_MIPS_HI16 is pushed onto a queue and patched later;
          * the next R_MIPS_LO16 resolves every HI16 on the queue with its
            own 16-bit addend, and CLEARS the queue -- several HI16 sharing
            one LO16 is normal and happens 23 times in acepsp's .rel.text;
          * a further LO16 before the next HI16 is a second reference to a
            symbol whose HI16 is already resolved. It must be patched on its
            own and must NOT re-patch the queue: its ADDR_BASE can differ,
            and letting it through put 0x08C7 where 0x08A2 belonged at
            .text:0xD0, silently corrupting the pointer `_init` hands to
            __register_frame_info. 228 relocations are of this kind.

        RECOMP_PLAN §Phase 1.1 flags re-pairing heuristically as the classic
        trap; we do not re-pair, we follow the stream.
        """
        size = self.image_size()
        buf = bytearray(size)
        for seg in self.elf.segments:
            if seg.p_type != PT_LOAD:
                continue
            data = self.elf.data[seg.offset:seg.offset + seg.filesz]
            buf[seg.vaddr:seg.vaddr + len(data)] = data

        segs = self.elf.segments

        def base_of(idx: int) -> int:
            return (segs[idx].vaddr + rebase) if idx < len(segs) else rebase

        def rd(a: int) -> int:
            return int.from_bytes(buf[a:a + 4], "little")

        def wr(a: int, v: int) -> None:
            buf[a:a + 4] = (v & 0xFFFFFFFF).to_bytes(4, "little")

        stats = {"applied": 0, "by_type": {}, "skipped_oob": 0,
                 "standalone_lo16": 0, "unknown_type": {}}

        # relocation sections must be processed in file order
        for sec in self.elf.sections:
            if sec.sh_type not in (SHT_PRXRELOC, SHT_PRXRELOC_FW5):
                continue
            rels = self.relocs_by_section.get(sec.name, [])

            pending_hi: list[tuple[int, int]] = []   # (addr, original hi field)
            last_hi: list[tuple[int, int]] = []

            for rel in rels:
                addr = base_of(rel.ofs_base) - rebase + rel.offset
                # `addr` indexes the un-rebased buffer; the value added is the
                # rebased ADDR_BASE.
                S = base_of(rel.addr_base)
                if not (0 <= addr <= size - 4):
                    stats["skipped_oob"] += 1
                    continue
                key = MIPS_RELOC_NAMES.get(rel.type, f"type_{rel.type}")
                stats["by_type"][key] = stats["by_type"].get(key, 0) + 1

                w = rd(addr)
                if rel.type == R_MIPS_32:
                    wr(addr, w + S)
                elif rel.type == R_MIPS_26:
                    # The 26-bit field is a word address within the aligned
                    # 256 MB region containing the instruction.
                    tgt = ((w & 0x03FFFFFF) << 2) + S
                    wr(addr, (w & 0xFC000000) | ((tgt >> 2) & 0x03FFFFFF))
                elif rel.type == R_MIPS_HI16:
                    pending_hi.append((addr, w & 0xFFFF))
                    continue
                elif rel.type == R_MIPS_LO16:
                    lo = w & 0xFFFF
                    lo_s = lo - 0x10000 if lo & 0x8000 else lo
                    # A LO16 resolves the queue of HI16s standing before it,
                    # and CLEARS it. Any further LO16 before the next HI16 is
                    # an extra reference to the same symbol whose own HI16 was
                    # already resolved -- it must not re-patch those HI16s.
                    # (Doing so is what put 0x08C7 where 0x08A2 belonged at
                    # .text:0xd0: the run HI@0xd0, LO@0xa8, LO@0xb0 let the
                    # third entry, which has a different ADDR_BASE, overwrite
                    # the HI the second entry had already resolved correctly.)
                    for hi_addr, hi_orig in pending_hi:
                        value = ((hi_orig << 16) + lo_s + S) & 0xFFFFFFFF
                        hw = rd(hi_addr)
                        wr(hi_addr, (hw & 0xFFFF0000)
                           | (((value + 0x8000) >> 16) & 0xFFFF))
                    if pending_hi:
                        last_hi = pending_hi
                        pending_hi = []
                    else:
                        stats["standalone_lo16"] += 1
                    # The low half never depends on the HI16's addend:
                    # ((AHI << 16) + ALO + S) & 0xFFFF == (ALO + S) & 0xFFFF,
                    # so one expression serves both cases.
                    wr(addr, (w & 0xFFFF0000) | ((lo_s + S) & 0xFFFF))
                else:
                    stats["unknown_type"][key] = \
                        stats["unknown_type"].get(key, 0) + 1
                    continue
                stats["applied"] += 1

            stats["applied"] += 0
        return buf, stats

    # -- helpers -------------------------------------------------------------
    @property
    def total_relocs(self) -> int:
        return sum(len(v) for v in self.relocs_by_section.values())

    def section_summary(self) -> list[dict]:
        return [
            {"name": s.name, "vaddr": s.addr, "size": s.size,
             "type": s.sh_type, "flags": s.flags}
            for s in self.elf.sections if s.name
        ]


# ---------------------------------------------------------------------------
# NID resolution
# ---------------------------------------------------------------------------

def load_nid_db(path: Path) -> dict[str, dict]:
    if not path.exists():
        return {}
    return json.loads(path.read_text(encoding="utf-8")).get("nids", {})


def resolve(db: dict[str, dict], nid_value: int, module: str) -> dict | None:
    rec = db.get(f"{nid_value:08X}")
    if rec is None:
        return None
    # prefer a record that also claims this module
    if module and rec.get("modules") and module not in rec["modules"]:
        rec = dict(rec)
        rec["module_mismatch"] = True
    return rec


# ---------------------------------------------------------------------------
# Verification
# ---------------------------------------------------------------------------

PLAN_FACTS = {
    "e_type": 0xFFA0,
    "e_machine": 8,
    "e_flags": 0x10A23001,
    "e_entry": 0x00000128,
    "phnum": 2,
    "module_name": "acepsp",
    "module_version": "1.1",
    "module_attribute": 0x0000,
    "ent": (0x00220DE4, 0x00220DF4),
    "stub": (0x00220DFC, 0x00221040),
    "text": (0x40, 0x220650),
    "rodata": (0x23A5C0, 0x138C0),
    "data": (0x24DE80, 0x13388),
    "bss": (0x261240, 0x13B070),
    "rel_text": 112030,
    "import_modules": 29,
    "import_functions": 230,
}


def check_plan(m: PrxModule) -> int:
    """Assert every RECOMP_PLAN §1.3 claim. Returns the number of failures."""
    fails = 0

    def chk(label: str, got, want) -> None:
        nonlocal fails
        ok = got == want
        if not ok:
            fails += 1
        gs = f"{got:#x}" if isinstance(got, int) else repr(got)
        ws = f"{want:#x}" if isinstance(want, int) else repr(want)
        print(f"{'ok  ' if ok else 'FAIL'}  {label:<28} {gs}"
              + ("" if ok else f"   (plan says {ws})"))

    e, mi = m.elf, m.modinfo
    chk("e_type", e.e_type, PLAN_FACTS["e_type"])
    chk("e_machine", e.e_machine, PLAN_FACTS["e_machine"])
    chk("e_flags", e.e_flags, PLAN_FACTS["e_flags"])
    chk("e_entry", e.e_entry, PLAN_FACTS["e_entry"])
    chk("program headers", len(e.segments), PLAN_FACTS["phnum"])
    chk("module name", mi.name, PLAN_FACTS["module_name"])
    chk("module version", mi.version, PLAN_FACTS["module_version"])
    chk("module attribute", mi.attribute, PLAN_FACTS["module_attribute"])
    chk(".lib.ent range", (mi.ent_top, mi.ent_end), PLAN_FACTS["ent"])
    chk(".lib.stub range", (mi.stub_top, mi.stub_end), PLAN_FACTS["stub"])

    for nm, key in ((".text", "text"), (".rodata", "rodata"),
                    (".data", "data"), (".bss", "bss")):
        s = e.section(nm)
        chk(f"{nm} (vaddr,size)",
            (s.addr, s.size) if s else None, PLAN_FACTS[key])

    chk(".rel.text count", len(m.relocs_by_section.get(".rel.text", [])),
        PLAN_FACTS["rel_text"])
    chk("import modules", len(m.imports), PLAN_FACTS["import_modules"])
    chk("import functions", sum(l.func_count for l in m.imports),
        PLAN_FACTS["import_functions"])

    # gp_value: the plan claims 0x0001B380; report what the binary says.
    print(f"note  gp_value                   {mi.gp_value:#010x}"
          f"   (plan §1.3 says 0x0001b380)")
    return fails


def check_relocations(m: PrxModule, rebase: int = 0) -> int:
    """Apply every relocation and check the result is self-consistent."""
    import struct as _struct

    fails = 0

    def chk(label: str, ok: bool, detail: str = "") -> None:
        nonlocal fails
        if not ok:
            fails += 1
        print(f"{'ok  ' if ok else 'FAIL'}  {label:<40} {detail}")

    buf, stats = m.build_image(rebase)
    total = m.total_relocs
    print(f"relocs in file: {total:,}   applied: {stats['applied']:,}   "
          f"by type: {stats['by_type']}")
    chk("no out-of-bounds relocations", stats["skipped_oob"] == 0,
        f"{stats['skipped_oob']} skipped")
    chk("no unknown relocation types", not stats["unknown_type"],
        str(stats["unknown_type"]))
    # A LO16 with no HI16 queued in front of it is normal: it is a second
    # reference to a symbol whose HI16 was already consumed. Its low half is
    # independent of the HI16's addend, so it needs no pairing.
    print(f"note  standalone LO16 (HI already resolved) "
          f"{stats['standalone_lo16']:,}")

    # gp: the R_MIPS_32 in .rel.rodata.sceModuleInfo must now read as the value
    # the reference tool reports.
    gp_field = m._modinfo_vaddr() + 4 + SCE_MODULE_NAME_LEN + 1
    gp_now = _struct.unpack_from("<I", buf, gp_field)[0]
    chk("relocated gp", gp_now == m.gp_value_relocated + rebase,
        f"{gp_now:#010x} (expected {m.gp_value_relocated + rebase:#010x})")

    # Every j/jal target must land in an executable section. `.sceStub.text`
    # is a legitimate destination: it holds the 8-byte import thunks the
    # loader patches, so calls to imported kernel functions land there.
    text = m.elf.section(".text")
    exec_secs = [s for s in m.elf.sections
                 if s.name in (".text", ".sceStub.text", ".init", ".fini")
                 and s.size]

    def where(t: int) -> str:
        # Two `jal 0` sites (.text:0x114 and .text:0x354 module-relative) carry
        # no relocation at all: the linker resolved an undefined weak symbol to
        # zero, which is the documented C semantics for one. Both sit on error
        # arms newlib's start-up never takes -- the PPSSPP oracle trace of this
        # title reaches neither. They are not a relocation failure.
        if t == 0:
            return "NULL (unresolved weak symbol)"
        for s in exec_secs:
            if s.addr + rebase <= t < s.addr + s.size + rebase:
                return s.name
        return "OUTSIDE"

    j_targets: set[int] = set()
    jal_targets: set[int] = set()
    for i in range(text.addr, text.addr + text.size, 4):
        w = _struct.unpack_from("<I", buf, i)[0]
        op = w >> 26
        if op in (2, 3):
            t = ((i + rebase + 4) & 0xF0000000) | ((w & 0x03FFFFFF) << 2)
            (jal_targets if op == 3 else j_targets).add(t)

    hist: dict[str, int] = {}
    for t in j_targets | jal_targets:
        k = where(t)
        hist[k] = hist.get(k, 0) + 1
    chk("all j/jal targets in executable sections", hist.get("OUTSIDE", 0) == 0,
        str(hist))
    print(f"note  unique jal targets                 {len(jal_targets):,}"
          f"  (in .text: "
          f"{sum(1 for t in jal_targets if where(t) == '.text'):,}, "
          f"in .sceStub.text: "
          f"{sum(1 for t in jal_targets if where(t) == '.sceStub.text'):,})")
    print(f"note  unique j targets                   {len(j_targets):,}")

    # spot-check the very first HI16/LO16 pair: .text:0x48/0x4c should resolve
    # to the start of .bss.
    bss = m.elf.section(".bss")
    if bss is not None:
        w48 = _struct.unpack_from("<I", buf, 0x48)[0]
        w4c = _struct.unpack_from("<I", buf, 0x4C)[0]
        lo16 = w4c & 0xFFFF
        resolved = ((w48 & 0xFFFF) << 16) + (lo16 - 0x10000 if lo16 & 0x8000
                                             else lo16)
        chk("first HI16/LO16 pair resolves", resolved == bss.addr + rebase,
            f"{resolved:#010x} (.bss is {bss.addr + rebase:#010x})")
    return fails


# ---------------------------------------------------------------------------
# CLI
# ---------------------------------------------------------------------------

def print_summary(m: PrxModule) -> None:
    e, mi = m.elf, m.modinfo
    print(f"file            : {m.path}")
    print(f"e_type          : {e.e_type:#06x}"
          + ("  (PSP PRX)" if e.e_type == ET_PSP_PRX else ""))
    print(f"e_machine       : {e.e_machine}"
          + ("  (EM_MIPS)" if e.e_machine == EM_MIPS else ""))
    print(f"e_flags         : {e.e_flags:#010x}")
    print(f"entry           : {e.e_entry:#010x}")
    print(f"module          : {mi.name} v{mi.version} attr={mi.attribute:#06x}")
    print(f"gp_value        : {mi.gp_value:#010x}")
    print(f".lib.ent        : {mi.ent_top:#010x}..{mi.ent_end:#010x}")
    print(f".lib.stub       : {mi.stub_top:#010x}..{mi.stub_end:#010x}")
    print("segments:")
    for s in e.segments:
        print(f"  [{s.index}] type={s.p_type} vaddr={s.vaddr:#010x} "
              f"filesz={s.filesz:#x} memsz={s.memsz:#x} flags={s.flags:#x}")
    print(f"sections        : {len(e.sections)}")
    for nm in (".text", ".rodata", ".data", ".bss", ".eh_frame",
               ".gcc_except_table", ".ctors", ".dtors", ".sceStub.text"):
        s = e.section(nm)
        if s:
            print(f"  {nm:<20} vaddr={s.addr:#010x} size={s.size:#x} "
                  f"({s.size:,} B)")
    t = e.section(".text")
    if t:
        print(f"  .text instructions : {t.size // 4:,}")
    print(f"relocations     : {m.total_relocs:,}")
    for nm, lst in sorted(m.relocs_by_section.items()):
        print(f"  {nm:<20} {len(lst):,}")
    print(f"  by type: {m.reloc_type_counts}")
    print(f"imports         : {len(m.imports)} modules, "
          f"{sum(l.func_count for l in m.imports)} functions, "
          f"{sum(l.var_count for l in m.imports)} variables")
    print(f"exports         : {len(m.exports)} libs, "
          f"{sum(l.func_count for l in m.exports)} functions, "
          f"{sum(l.var_count for l in m.exports)} variables")


def print_imports(m: PrxModule, db: dict[str, dict]) -> int:
    unresolved = 0
    total = 0
    for lib in sorted(m.imports, key=lambda l: -l.func_count):
        print(f"\n{lib.name}  ({lib.func_count} funcs, {lib.var_count} vars, "
              f"version={lib.version:#06x}, attr={lib.attribute:#06x})")
        for n, stub in zip(lib.func_nids, lib.func_stubs):
            total += 1
            rec = resolve(db, n, lib.name)
            if rec:
                flag = "!" if rec.get("module_mismatch") else " "
                ref = rec.get("manual_ref") or "(no header decl)"
                print(f"  {n:08X} @{stub:08x} {flag}{rec['name']:<44} {ref}")
            else:
                unresolved += 1
                print(f"  {n:08X} @{stub:08x}  *** UNRESOLVED ***")
        for n in lib.var_nids:
            rec = resolve(db, n, lib.name)
            nm = rec["name"] if rec else "*** UNRESOLVED ***"
            print(f"  {n:08X}  (var)     {nm}")
    print(f"\nresolved {total - unresolved}/{total} imported functions")
    return unresolved


def main(argv: list[str]) -> int:
    ap = argparse.ArgumentParser()
    ap.add_argument("elf", type=Path)
    ap.add_argument("--imports", action="store_true")
    ap.add_argument("--check-plan", action="store_true")
    ap.add_argument("--nid-db", type=Path, default=DEFAULT_NID_DB)
    ap.add_argument("--json", type=Path)
    ap.add_argument("--check-reloc", action="store_true",
                    help="apply all relocations and sanity-check the result")
    ap.add_argument("--emit-image", type=Path,
                    help="write the relocated flat image to a file")
    ap.add_argument("--rebase", type=lambda s: int(s, 0),
                    default=PSP_USER_MODULE_BASE,
                    help="guest load base for --emit-image / --check-reloc "
                         f"(default {PSP_USER_MODULE_BASE:#010x}, where the "
                         "kernel puts a user module)")
    a = ap.parse_args(argv)

    m = PrxModule(a.elf)
    rc = 0

    if a.check_plan:
        print("=== RECOMP_PLAN §1.3 verification ===")
        rc |= 1 if check_plan(m) else 0
        print()
    if a.check_reloc or a.emit_image:
        print("=== relocation application ===")
        rc |= 8 if check_relocations(m, a.rebase) else 0
        if a.emit_image:
            buf, _ = m.build_image(a.rebase)
            a.emit_image.parent.mkdir(parents=True, exist_ok=True)
            a.emit_image.write_bytes(buf)
            print(f"wrote {a.emit_image} ({len(buf):,} B)")
        print()
    if a.imports:
        db = load_nid_db(a.nid_db)
        if not db:
            print(f"warning: NID DB {a.nid_db} missing/empty", file=sys.stderr)
        rc |= 4 if print_imports(m, db) else 0
    if not (a.check_plan or a.imports):
        print_summary(m)

    if a.json:
        db = load_nid_db(a.nid_db)
        out = {
            "path": str(a.elf),
            "elf": {"type": m.elf.e_type, "machine": m.elf.e_machine,
                    "flags": m.elf.e_flags, "entry": m.elf.e_entry},
            "module_info": asdict(m.modinfo),
            "sections": m.section_summary(),
            "segments": [asdict(s) for s in m.elf.segments],
            "reloc_counts": {k: len(v) for k, v in m.relocs_by_section.items()},
            "reloc_type_counts": m.reloc_type_counts,
            "imports": [
                {**{k: v for k, v in asdict(l).items()},
                 "names": [(db.get(f"{n:08X}") or {}).get("name")
                           for n in l.func_nids]}
                for l in m.imports
            ],
            "exports": [asdict(l) for l in m.exports],
        }
        a.json.parent.mkdir(parents=True, exist_ok=True)
        a.json.write_text(json.dumps(out, indent=1), encoding="utf-8")
        print(f"wrote {a.json}")

    return rc


if __name__ == "__main__":
    raise SystemExit(main(sys.argv[1:]))
