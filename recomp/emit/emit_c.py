#!/usr/bin/env python3
"""
recomp/emit/emit_c.py -- RECOMP_PLAN Phase 3, "Code Generation".

Translates every Allegrex instruction in `.text` into C, one C function per
guest function, and emits bundles into generated/.

Design notes (see docs/DECISIONS.md ADR-0006):

  * Registers live in CpuCtx, and both pointers are `restrict`. That lets the
    optimiser keep them in machine registers across a function without us
    hand-rolling the load/spill dance the plan sketches -- same effect, far
    less that can go wrong.

  * Delay slots are emitted in a form that is correct by construction rather
    than by case analysis. A MIPS branch reads its operands BEFORE the delay
    slot runs, so every conditional branch becomes:

        { int _c = <condition>; <delay slot>; if (_c) goto L; }

    which is right whether or not the slot writes a register the branch reads
    (408 such sites in this binary). Branch-likely nullifies the slot when not
    taken, so it becomes:

        if (<condition>) { <delay slot>; goto L; }

    REF: ALLEGREX-Users_Manual-English.pdf p.42 (delay slots),
             p.26 (branch-likely nullification)
    All eight branch-likely forms are handled, not just the four RECOMP_PLAN
    §1.3 lists -- see docs/PLAN_DELTAS.md D11.

  * `jal` to a known function is a direct call. `jal` into `.sceStub.text` is
    an HLE call. `jalr` and non-`$ra` `jr` go through a dispatcher that traps
    loudly on an unknown target rather than crashing (plan §Phase 2.3).

  * `jr` used as a jump table becomes a `switch` over the recovered target set
    when every target lies inside the same function.

Usage:
    python emit_c.py [EBOOT.elf] [--out ../../generated] [--bundles 32]
"""

from __future__ import annotations

import argparse
import os
import bisect
import struct
import sys
from collections import Counter
from pathlib import Path

HERE = Path(__file__).resolve().parent
sys.path.insert(0, str(HERE.parents[1] / "recomp" / "analyze"))
sys.path.insert(0, str(HERE.parents[0] / "analyze"))
sys.path.insert(0, str(HERE.parents[1] / "tools" / "prxload"))
sys.path.insert(0, str(HERE.parents[1] / "tools" / "pspdisasm"))

from analyze import Analysis, op, rs, rt, rd, funct, simm, is_jr, is_jr_ra, \
    is_jalr, branch_target, jump_target, is_likely, OP_J, OP_JAL   # noqa: E402
from pspdisasm import decode                                       # noqa: E402
import vfpu                                                        # noqa: E402

DEFAULT_ELF = Path(os.environ.get("PSPRECO_EBOOT",
                                  str(HERE.parents[1] / "EBOOT.elf")))
DEFAULT_OUT = HERE.parents[1] / "generated"


def sa(w: int) -> int:
    return (w >> 6) & 0x1F


def uimm(w: int) -> int:
    return w & 0xFFFF


def fs(w: int) -> int:
    return (w >> 11) & 0x1F


def ft(w: int) -> int:
    return (w >> 16) & 0x1F


def fd(w: int) -> int:
    return (w >> 6) & 0x1F


def R(n: int) -> str:
    return "0u" if n == 0 else f"c->r[{n}]"


def F(n: int) -> str:
    return f"c->f[{n}]"


class Unsupported(Exception):
    pass


# ---------------------------------------------------------------------------
# One instruction -> a list of C statements (no control flow)
# ---------------------------------------------------------------------------

_ARITH = {
    "addu": "{d} = {s} + {t};",
    "add":  "{d} = {s} + {t};",           # GCC 3.3 emits addu almost always;
    "subu": "{d} = {s} - {t};",           # the trapping form is handled below
    "sub":  "{d} = {s} - {t};",
    "and":  "{d} = {s} & {t};",
    "or":   "{d} = {s} | {t};",
    "xor":  "{d} = {s} ^ {t};",
    "nor":  "{d} = ~({s} | {t});",
    "slt":  "{d} = ((s32){s} < (s32){t}) ? 1u : 0u;",
    "sltu": "{d} = ({s} < {t}) ? 1u : 0u;",
    "max":  "{d} = alx_max({s}, {t});",
    "min":  "{d} = alx_min({s}, {t});",
}

_SHIFT_IMM = {
    "sll": "{d} = {t} << {a};",
    "srl": "{d} = {t} >> {a};",
    "sra": "{d} = (u32)((s32){t} >> {a});",
    "rotr": "{d} = alx_rotr({t}, {a});",
}

_SHIFT_VAR = {
    "sllv": "{d} = {t} << ({s} & 31u);",
    "srlv": "{d} = {t} >> ({s} & 31u);",
    "srav": "{d} = (u32)((s32){t} >> ({s} & 31u));",
    "rotrv": "{d} = alx_rotr({t}, {s});",
}

_IMM_ALU = {
    "addiu": "{t} = {s} + {i}u;",
    "addi":  "{t} = {s} + {i}u;",
    "slti":  "{t} = ((s32){s} < (s32){i}u) ? 1u : 0u;",
    "sltiu": "{t} = ({s} < {i}u) ? 1u : 0u;",
    "andi":  "{t} = {s} & {u}u;",
    "ori":   "{t} = {s} | {u}u;",
    "xori":  "{t} = {s} ^ {u}u;",
}

_LOAD = {
    "lb":  "{t} = (u32)(s32)(s8)mem_r8(ram, {ea});",
    "lbu": "{t} = mem_r8(ram, {ea});",
    "lh":  "{t} = (u32)(s32)(s16)mem_r16(ram, {ea});",
    "lhu": "{t} = mem_r16(ram, {ea});",
    "lw":  "{t} = mem_r32(ram, {ea});",
    "ll":  "{t} = mem_r32(ram, {ea});",
}

_STORE = {
    "sb": "mem_w8(ram, {ea}, {t});",
    "sh": "mem_w16(ram, {ea}, {t});",
    "sw": "mem_w32(ram, {ea}, {t});",
}

_FP3 = {"add.s": "+", "sub.s": "-", "mul.s": "*", "div.s": "/"}
_FP2 = {
    "sqrt.s": "{d} = (f32)sqrtf({s});",
    "abs.s":  "{d} = (f32)fabsf({s});",
    "mov.s":  "{d} = {s};",
    "neg.s":  "{d} = -{s};",
    "round.w.s": "{d} = u2f((u32)alx_round_w_s({s}));",
    "trunc.w.s": "{d} = u2f((u32)alx_trunc_w_s({s}));",
    "ceil.w.s":  "{d} = u2f((u32)alx_ceil_w_s({s}));",
    "floor.w.s": "{d} = u2f((u32)alx_floor_w_s({s}));",
    "cvt.w.s":   "{d} = u2f((u32)alx_cvt_w_s(c, {s}));",
    "cvt.s.w":   "{d} = (f32)(s32)f2u({s});",
}
_FCONDS = ["f", "un", "eq", "ueq", "olt", "ult", "ole", "ule",
           "sf", "ngle", "seq", "ngl", "lt", "nge", "le", "ngt"]


def emit_insn(pc: int, w: int, name: str) -> list[str]:
    """Statements for a non-control-flow instruction."""
    if w == 0:
        return []                                    # nop
    d, s, t = R(rd(w)), R(rs(w)), R(rt(w))
    dst_d, dst_t = f"c->r[{rd(w)}]", f"c->r[{rt(w)}]"

    if name in _ARITH:
        if rd(w) == 0:
            return []
        return [_ARITH[name].format(d=dst_d, s=s, t=t)]
    if name in _SHIFT_IMM:
        if rd(w) == 0:
            return []
        return [_SHIFT_IMM[name].format(d=dst_d, t=t, a=sa(w))]
    if name in _SHIFT_VAR:
        if rd(w) == 0:
            return []
        return [_SHIFT_VAR[name].format(d=dst_d, t=t, s=s)]
    if name in _IMM_ALU:
        if rt(w) == 0:
            return []
        return [_IMM_ALU[name].format(t=dst_t, s=s,
                                      i=f"0x{simm(w) & 0xFFFFFFFF:08x}",
                                      u=f"0x{uimm(w):04x}")]
    if name == "lui":
        if rt(w) == 0:
            return []
        return [f"{dst_t} = 0x{(uimm(w) << 16) & 0xFFFFFFFF:08x}u;"]

    if name in _LOAD:
        if rt(w) == 0:
            return [f"(void)mem_r32(ram, {s} + 0x{simm(w) & 0xFFFFFFFF:08x}u);"]
        return [_LOAD[name].format(
            t=dst_t, ea=f"{s} + 0x{simm(w) & 0xFFFFFFFF:08x}u")]
    if name in _STORE:
        return [_STORE[name].format(
            ea=f"{s} + 0x{simm(w) & 0xFFFFFFFF:08x}u", t=t)]
    if name == "sc":
        # PSP has no real LL/SC contention; the store always succeeds.
        return [f"mem_w32(ram, {s} + 0x{simm(w) & 0xFFFFFFFF:08x}u, {t});",
                *( [] if rt(w) == 0 else [f"{dst_t} = 1u;"] )]
    if name in ("lwl", "lwr"):
        if rt(w) == 0:
            return []
        fn = "mem_lwl" if name == "lwl" else "mem_lwr"
        return [f"{dst_t} = {fn}(ram, {s} + 0x{simm(w) & 0xFFFFFFFF:08x}u, {t});"]
    if name in ("swl", "swr"):
        fn = "mem_swl" if name == "swl" else "mem_swr"
        return [f"{fn}(ram, {s} + 0x{simm(w) & 0xFFFFFFFF:08x}u, {t});"]

    # Allegrex bit ops
    if name == "ext":
        return [] if rt(w) == 0 else \
            [f"{dst_t} = alx_ext({s}, {sa(w)}u, {fs(w)}u);"]
    if name == "ins":
        return [] if rt(w) == 0 else \
            [f"{dst_t} = alx_ins({t}, {s}, {sa(w)}u, {fs(w)}u);"]
    if name in ("wsbh", "wsbw", "seb", "seh", "bitrev"):
        return [] if rd(w) == 0 else [f"{dst_d} = alx_{name}({t});"]
    if name in ("clz", "clo"):
        return [] if rd(w) == 0 else [f"{dst_d} = alx_{name}({s});"]

    # hi/lo
    if name == "mfhi":
        return [] if rd(w) == 0 else [f"{dst_d} = c->hi;"]
    if name == "mflo":
        return [] if rd(w) == 0 else [f"{dst_d} = c->lo;"]
    if name == "mthi":
        return [f"c->hi = {s};"]
    if name == "mtlo":
        return [f"c->lo = {s};"]
    if name in ("mult", "multu", "div", "divu", "madd", "maddu",
                "msub", "msubu"):
        return [f"alx_{name}(c, {s}, {t});"]

    # conditional moves
    if name == "movz":
        return [] if rd(w) == 0 else [f"if ({t} == 0u) {dst_d} = {s};"]
    if name == "movn":
        return [] if rd(w) == 0 else [f"if ({t} != 0u) {dst_d} = {s};"]

    # COP1
    if name in _FP3:
        return [f"{F(fd(w))} = {F(fs(w))} {_FP3[name]} {F(ft(w))};"]
    if name in _FP2:
        return [_FP2[name].format(d=F(fd(w)), s=F(fs(w)))]
    if name.startswith("c.") and name.endswith(".s"):
        cond = _FCONDS.index(name[2:-2])
        return [f"alx_c_cond_s(c, {cond}, {F(fs(w))}, {F(ft(w))});"]
    if name == "mfc1":
        return [] if rt(w) == 0 else [f"{dst_t} = f2u({F(fs(w))});"]
    if name == "mtc1":
        return [f"{F(fs(w))} = u2f({t});"]
    if name == "cfc1":
        return [] if rt(w) == 0 else [f"{dst_t} = c->fcr31;"]
    if name == "ctc1":
        return [f"c->fcr31 = {t};"]
    if name == "lwc1":
        return [f"{F(ft(w))} = mem_rf32(ram, {s} + "
                f"0x{simm(w) & 0xFFFFFFFF:08x}u);"]
    if name == "swc1":
        return [f"mem_wf32(ram, {s} + 0x{simm(w) & 0xFFFFFFFF:08x}u, "
                f"{F(ft(w))});"]

    # misc
    if name in ("sync", "cache"):
        # No SMC in this title (docs/coverage.json), and the host has coherent
        # caches, so both are no-ops. REF: include/allegrex.h:63-76
        return []
    if name == "break":
        return [f"recomp_break(c, ram, 0x{pc:08x}u, 0x{(w >> 6) & 0xFFFFF:x}u);"]
    if name == "syscall":
        return [f"recomp_trap_unimplemented(c, ram, 0x{pc:08x}u, \"syscall\");"]
    if name in ("mfc0", "mtc0"):
        return [f"recomp_trap_unimplemented(c, ram, 0x{pc:08x}u, \"{name}\");"]
    if name in ("teq", "tne"):
        cmp_ = "==" if name == "teq" else "!=";
        return [f"if ({s} {cmp_} {t}) recomp_break(c, ram, 0x{pc:08x}u, 0u);"]

    # VFPU: one seam into runtime/cpu/vfpu.c. See ADR-0006 -- 606 instructions
    # in this title, so a word-dispatched helper costs nothing measurable and
    # keeps the (stateful, prefix-driven) semantics in one auditable place.
    if vfpu.owns_mnemonic(name):
        return [f"vfpu_exec(c, ram, 0x{w:08x}u); /* {name} */"]

    raise Unsupported(f"{pc:08x}: {name} ({w:08x})")


# ---------------------------------------------------------------------------
# Function emission
# ---------------------------------------------------------------------------

_COND = {
    "beq":  "{s} == {t}",
    "bne":  "{s} != {t}",
    "beql": "{s} == {t}",
    "bnel": "{s} != {t}",
    "blez": "(s32){s} <= 0",
    "bgtz": "(s32){s} > 0",
    "blezl": "(s32){s} <= 0",
    "bgtzl": "(s32){s} > 0",
    "bltz": "(s32){s} < 0",
    "bgez": "(s32){s} >= 0",
    "bltzl": "(s32){s} < 0",
    "bgezl": "(s32){s} >= 0",
    "bltzal": "(s32){s} < 0",
    "bgezal": "(s32){s} >= 0",
    "bltzall": "(s32){s} < 0",
    "bgezall": "(s32){s} >= 0",
    "bc1f":  "(c->fcr31 & FCR31_C) == 0u",
    "bc1t":  "(c->fcr31 & FCR31_C) != 0u",
    "bc1fl": "(c->fcr31 & FCR31_C) == 0u",
    "bc1tl": "(c->fcr31 & FCR31_C) != 0u",
}
_LINK_BRANCH = {"bltzal", "bgezal", "bltzall", "bgezall"}


class Emitter:
    def __init__(self, an: Analysis, funcs, stub_names: dict[int, str]):
        self.an = an
        self.funcs = funcs
        self.starts = sorted(f.start for f in funcs)
        self.entry = {f.start for f in funcs}
        self.stub_names = stub_names
        self.stats: Counter[str] = Counter()
        self.unsupported: list[str] = []

    def fname(self, a: int) -> str:
        return f"func_{a:08x}"

    def emit_function(self, f) -> str:
        an = self.an
        lo, hi = f.start, f.end
        body: list[str] = []

        # --- collect labels ------------------------------------------------
        labels: set[int] = set()
        pc = lo
        while pc < hi:
            w = an.w(pc)
            bt = branch_target(pc, w)
            if bt is not None and lo <= bt < hi:
                labels.add(bt)
            jt = jump_target(pc, w)
            if jt is not None and op(w) == OP_J and lo <= jt < hi:
                labels.add(jt)
            pc += 4
        # jump-table / address-taken destinations inside this function
        inner_targets = [a for a in an.code_pointers if lo <= a < hi]
        labels.update(inner_targets)

        # --- walk ----------------------------------------------------------
        delay_slots: set[int] = set()
        pc = lo
        while pc < hi:
            w = an.w(pc)
            if branch_target(pc, w) is not None or jump_target(pc, w) is not None \
                    or is_jr(w) or is_jalr(w):
                if pc + 4 < hi:
                    delay_slots.add(pc + 4)
            pc += 4

        pc = lo
        body.append(f"L_{lo:08x}:")
        while pc < hi:
            if pc in delay_slots:
                # A branch target can land on a delay slot: the instruction is
                # already emitted inside the preceding branch's block, so
                # jumping here must run it once and then fall through. Emit a
                # second copy behind a label that normal flow jumps over.
                if pc in labels:
                    w = an.w(pc)
                    stmts = self.slot_copy(pc, w)
                    body.append(f"goto A_{pc:08x};")
                    body.append(f"L_{pc:08x}:")
                    body.extend(stmts)
                    body.append(f"A_{pc:08x}: ;")
                pc += 4
                continue
            if pc in labels and pc != lo:
                body.append(f"L_{pc:08x}:")
            w = an.w(pc)
            body.extend(self.emit_at(f, pc, w, hi, inner_targets))
            step = 8 if (pc + 4) in delay_slots else 4
            pc += step

        body.append(f"return; /* fell out of {self.fname(lo)} */")

        # Drop labels nothing jumps to (-Wunused-label). Cheap and exact:
        # a label is live iff some emitted statement mentions `goto <name>`.
        joined = "\n".join(b for b in body if not b.endswith(":"))
        body = [b for b in body
                if not (b.endswith(":") and b[:-1].strip().isidentifier()
                        and f"goto {b[:-1].strip()};" not in joined)]

        lines = [
            f"/* {self.fname(lo)}  {lo:#010x}..{hi:#010x}"
            f"  {f.size} bytes, source={f.source} */",
            f"void {self.fname(lo)}(CpuCtx *restrict c, u8 *restrict ram)",
            "{",
            "    (void)c; (void)ram;",
            # RECOMP_PLAN §9.1's differential oracle. Compiled out entirely
            # unless -DPSPRECO_TRACE, so the shipping build pays nothing.
            f"    RECOMP_TRACE_ENTER(0x{lo:08x}u);",
        ]
        lines += ["    " + b if not b.endswith(":") else b for b in body]
        lines.append("}")
        return "\n".join(lines)

    # -- one control-flow site ------------------------------------------
    def emit_at(self, f, pc: int, w: int, hi: int,
                inner_targets: list[int]) -> list[str]:
        an = self.an
        dec = decode(w)
        name = dec[0].name if dec else None
        if name is None:
            vt = vfpu.disassemble(w, pc)
            name = vt.split(None, 1)[0] if vt else None
        if name is None:
            self.unsupported.append(f"{pc:08x}: undecodable {w:08x}")
            return [f"recomp_trap_unimplemented(c, ram, 0x{pc:08x}u, "
                    f"\"undecodable {w:08x}\");"]
        self.stats[name] += 1

        slot_pc = pc + 4
        slot_w = an.w(slot_pc) if slot_pc < hi else 0

        def slot() -> list[str]:
            if slot_pc >= hi or slot_w == 0:
                return []
            sd = decode(slot_w)
            sname = sd[0].name if sd else None
            if sname is None:
                st = vfpu.disassemble(slot_w, slot_pc)
                sname = st.split(None, 1)[0] if st else None
            if sname is None:
                return [f"recomp_trap_unimplemented(c, ram, "
                        f"0x{slot_pc:08x}u, \"undecodable slot\");"]
            self.stats[sname] += 1
            try:
                return emit_insn(slot_pc, slot_w, sname)
            except Unsupported as exc:
                self.unsupported.append(str(exc))
                return [f"recomp_trap_unimplemented(c, ram, 0x{slot_pc:08x}u, "
                        f"\"{sname}\");"]

        def block(stmts: list[str]) -> list[str]:
            return ["{ " + " ".join(stmts) + " }"] if stmts else []

        # --- conditional branches ------------------------------------------
        bt = branch_target(pc, w)
        if bt is not None and name in _COND:
            cond = _COND[name].format(s=R(rs(w)), t=R(rt(w)))
            tgt = (f"goto L_{bt:08x};" if f.start <= bt < hi
                   else self.tail_jump(pc, bt))
            pre = []
            if name in _LINK_BRANCH:
                pre = [f"c->r[31] = 0x{pc + 8:08x}u;"]
            if is_likely(w):
                inner = pre + slot() + [tgt]
                return [f"if ({cond}) {{ " + " ".join(inner) + " }"]
            return ["{ int _c = (" + cond + ");"
                    + "".join(" " + s for s in pre + slot())
                    + f" if (_c) {tgt} }}"]

        # --- j / jal ---------------------------------------------------------
        jt = jump_target(pc, w)
        if jt is not None:
            if op(w) == OP_JAL:
                stmts = [f"c->r[31] = 0x{pc + 8:08x}u;"] + slot() \
                        + [self.call_to(pc, jt)]
                return block(stmts)
            # plain j: intra-function goto, or a tail call
            if f.start <= jt < hi:
                return block(slot() + [f"goto L_{jt:08x};"])
            return block(slot() + [self.tail_jump(pc, jt)])

        # --- jr / jalr -------------------------------------------------------
        if is_jr_ra(w):
            return block(slot() + ["return;"])
        if is_jr(w):
            reg = R(rs(w))
            targets = [a for a in inner_targets if f.start <= a < hi]
            if targets:
                # recovered jump table: every entry is a label in this function
                cases = " ".join(
                    f"case 0x{a:08x}u: goto L_{a:08x};" for a in sorted(targets))
                return ["{ u32 _t = " + reg + ";"
                        + "".join(" " + s for s in slot())
                        + f" switch (_t) {{ {cases} "
                        + f"default: recomp_trap_unknown_indirect(c, ram, "
                        f"0x{pc:08x}u, _t); return; }} }}"]
            return ["{ u32 _t = " + reg + ";"
                    + "".join(" " + s for s in slot())
                    + f" recomp_call_indirect(c, ram, 0x{pc:08x}u, _t);"
                    " return; }"]
        if is_jalr(w):
            link = rd(w) if rd(w) else 31
            return ["{ u32 _t = " + R(rs(w)) + ";"
                    + f" c->r[{link}] = 0x{pc + 8:08x}u;"
                    + "".join(" " + s for s in slot())
                    + f" recomp_call_indirect(c, ram, 0x{pc:08x}u, _t); }}"]

        # --- ordinary instruction --------------------------------------------
        try:
            return emit_insn(pc, w, name)
        except Unsupported as exc:
            self.unsupported.append(str(exc))
            return [f"recomp_trap_unimplemented(c, ram, 0x{pc:08x}u, "
                    f"\"{name}\");"]

    def slot_copy(self, pc: int, w: int) -> list[str]:
        """A standalone copy of a delay-slot instruction, for the rare case
        where the slot address is itself a branch target."""
        if w == 0:
            return []
        d = decode(w)
        name = d[0].name if d else None
        if name is None:
            t = vfpu.disassemble(w, pc)
            name = t.split(None, 1)[0] if t else None
        if name is None:
            return [f"recomp_trap_unimplemented(c, ram, 0x{pc:08x}u, "
                    f"\"undecodable slot\");"]
        try:
            return emit_insn(pc, w, name)
        except Unsupported as exc:
            self.unsupported.append(str(exc))
            return [f"recomp_trap_unimplemented(c, ram, 0x{pc:08x}u, "
                    f"\"{name}\");"]

    def call_to(self, pc: int, target: int) -> str:
        if target in self.stub_names:
            return (f"hle_dispatch_stub(c, ram, 0x{target:08x}u);"
                    f" /* {self.stub_names[target]} */")
        if target in self.entry:
            return f"{self.fname(target)}(c, ram);"
        return f"recomp_call_indirect(c, ram, 0x{pc:08x}u, 0x{target:08x}u);"

    def tail_jump(self, pc: int, target: int) -> str:
        if target in self.stub_names:
            return (f"hle_dispatch_stub(c, ram, 0x{target:08x}u); return;"
                    f" /* {self.stub_names[target]} */")
        if target in self.entry:
            return f"{self.fname(target)}(c, ram); return;"
        return (f"recomp_call_indirect(c, ram, 0x{pc:08x}u, "
                f"0x{target:08x}u); return;")


# ---------------------------------------------------------------------------

def load_stub_names(an: Analysis) -> dict[int, str]:
    import json
    db_path = HERE.parents[1] / "data" / "NID_DATABASE.json"
    db = json.loads(db_path.read_text(encoding="utf-8"))["nids"] \
        if db_path.exists() else {}
    out: dict[int, str] = {}
    for lib in an.mod.imports:
        for n, stub in zip(lib.func_nids, lib.func_stubs):
            rec = db.get(f"{n:08X}")
            out[stub + an.base] = rec["name"] if rec else f"nid_{n:08X}"
    return out


def main(argv: list[str]) -> int:
    ap = argparse.ArgumentParser()
    ap.add_argument("elf", type=Path, nargs="?", default=DEFAULT_ELF)
    ap.add_argument("--out", type=Path, default=DEFAULT_OUT)
    ap.add_argument("--bundles", type=int, default=32)
    ap.add_argument("--limit", type=int, default=0,
                    help="emit only the first N functions (smoke testing)")
    a = ap.parse_args(argv)

    an = Analysis(a.elf)
    fdes = an.collect_fdes()
    seeds = an.collect_seeds()
    funcs = an.build_functions(seeds, fdes)
    if a.limit:
        funcs = funcs[:a.limit]
    stub_names = load_stub_names(an)
    em = Emitter(an, funcs, stub_names)

    a.out.mkdir(parents=True, exist_ok=True)
    for old in a.out.glob("*.c"):
        old.unlink()
    for old in a.out.glob("*.h"):
        old.unlink()

    # generated/ was just emptied, and the VFPU decoder lives there too. It is
    # derived from docs/vfpu_table.json rather than from this module, so it is
    # a separate generator -- but it has to run here, or a fresh emit leaves
    # the tree unbuildable.
    sys.path.insert(0, str(HERE.parents[1] / "tools" / "pspdisasm"))
    import gen_vfpu_decode                                   # noqa: E402
    if gen_vfpu_decode.main(["--out", str(a.out)]) != 0:
        return 1

    bundles: list[list[str]] = [[] for _ in range(a.bundles)]
    for i, f in enumerate(funcs):
        bundles[i % a.bundles].append(em.emit_function(f))

    header = ('#include "pspreco.h"\n'
              '#include "symbols.h"\n'
              '#include <math.h>\n\n')
    for bi, chunk in enumerate(bundles):
        p = a.out / f"text_{bi:02d}.c"
        p.write_text(header + "\n\n".join(chunk) + "\n", encoding="utf-8")

    # symbols.h -- every recompiled function, plus the VFPU seam
    decls = "\n".join(f"void {em.fname(f.start)}(CpuCtx *restrict c, "
                      f"u8 *restrict ram);" for f in funcs)
    (a.out / "symbols.h").write_text(
        "/* generated by recomp/emit/emit_c.py -- do not edit */\n"
        "#ifndef PSPRECO_SYMBOLS_H\n#define PSPRECO_SYMBOLS_H\n"
        '#include "pspreco.h"\n\n'
        "void vfpu_exec(CpuCtx *c, u8 *ram, u32 word);\n\n"
        + decls +
        "\n\n#define PSPRECO_FUNC_COUNT " + str(len(funcs)) +
        "\nextern const u32      g_func_addr[PSPRECO_FUNC_COUNT];"
        "\nextern const RecompFn g_func_ptr [PSPRECO_FUNC_COUNT];\n"
        "\n#endif\n", encoding="utf-8")

    # dispatch.c -- sorted address table for recomp_lookup()
    addrs = ",\n    ".join(f"0x{f.start:08x}u" for f in funcs)
    ptrs = ",\n    ".join(em.fname(f.start) for f in funcs)
    (a.out / "dispatch.c").write_text(
        '/* generated by recomp/emit/emit_c.py -- do not edit */\n'
        '#include "pspreco.h"\n#include "symbols.h"\n\n'
        "const u32 g_func_addr[PSPRECO_FUNC_COUNT] = {\n    "
        + addrs + "\n};\n\n"
        "const RecompFn g_func_ptr[PSPRECO_FUNC_COUNT] = {\n    "
        + ptrs + "\n};\n", encoding="utf-8")

    # stubs.c -- the import thunk table, so an HLE miss can name the function
    # it was asked for instead of printing an address (plan §6.6).
    rows = []
    for lib in an.mod.imports:
        for n, stub in zip(lib.func_nids, lib.func_stubs):
            addr = stub + an.base
            rows.append((addr, n, lib.name,
                         stub_names.get(addr, f"nid_{n:08X}")))
    rows.sort()
    stub_rows = ",\n    ".join(
        f'{{ 0x{addr:08x}u, 0x{nid:08x}u, "{mod}", "{nm}" }}'
        for addr, nid, mod, nm in rows)
    (a.out / "stubs.c").write_text(
        '/* generated by recomp/emit/emit_c.py -- do not edit */\n'
        '#include "pspreco.h"\n#include "stubs.h"\n\n'
        f"const HleStub g_hle_stubs[{len(rows)}] = {{\n    "
        + stub_rows + "\n};\n"
        f"const unsigned g_hle_stub_count = {len(rows)};\n",
        encoding="utf-8")
    (a.out / "stubs.h").write_text(
        '/* generated by recomp/emit/emit_c.py -- do not edit */\n'
        "#ifndef PSPRECO_STUBS_H\n#define PSPRECO_STUBS_H\n"
        '#include "pspreco.h"\n\n'
        "/* One row per imported function, from the module's .lib.stub table.\n"
        " * `addr` is the 8-byte thunk in .sceStub.text that the recompiled\n"
        " * code calls; `nid` is what binds it to an HLE implementation. */\n"
        "typedef struct { u32 addr; u32 nid; const char *module;\n"
        "                 const char *name; } HleStub;\n"
        "extern const HleStub g_hle_stubs[];\n"
        "extern const unsigned g_hle_stub_count;\n#endif\n",
        encoding="utf-8")

    total_c = sum((a.out / f"text_{i:02d}.c").stat().st_size
                  for i in range(a.bundles))
    print(f"functions emitted : {len(funcs):,}")
    print(f"instructions      : {sum(em.stats.values()):,}")
    print(f"bundles           : {a.bundles} "
          f"({total_c:,} B of C, {total_c / max(len(funcs), 1):.0f} B/function)")
    print(f"distinct mnemonics: {len(em.stats)}")
    if em.unsupported:
        print(f"UNSUPPORTED       : {len(em.unsupported)}")
        for u in em.unsupported[:15]:
            print("   " + u)
    else:
        print("UNSUPPORTED       : 0")
    print(f"wrote {a.out}")
    return 1 if em.unsupported else 0


if __name__ == "__main__":
    raise SystemExit(main(sys.argv[1:]))
