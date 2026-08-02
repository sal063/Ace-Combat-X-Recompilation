#!/usr/bin/env python3
"""
tools/pspdisasm/isa.py -- Allegrex instruction table (base MIPS32r2 + Allegrex
scalar extensions + COP1). VFPU lives in vfpu.py.

Design: ONE table drives both decoding and encoding. Each entry declares
  - a fixed-bit mask/match pair, and
  - the operand fields, each of which owns a disjoint bit range.
`selftest_bitcoverage()` asserts that for every entry
      mask | union(field bit ranges) == 0xFFFFFFFF
so no instruction can silently ignore part of a word. That invariant is what
makes the .text round-trip a real test rather than a tautology.

Encodings are transcribed from, and checked against, the hardware manual:
REF: document/hardware_manual/ALLEGREX/ALLEGREX-Instruction_Manual-English.pdf
         (e.g. ins p.107, bitrev p.110, wsbw p.114 -- each page carries the
          31..0 bit diagram)
REF: document/hardware_manual/ALLEGREX/ALLEGREX-Users_Manual-English.pdf
         (delay slots p.42, branch-likely nullification p.26)
REF: include/allegrex.h:199-347 (reference C for the Allegrex
         scalar ops) and allegrex.h:63-76 (cache op encodings)
Verify a transcription against the manual with:  python verify_isa.py
"""

from __future__ import annotations

from dataclasses import dataclass

# ---------------------------------------------------------------------------
# Register names
# ---------------------------------------------------------------------------
# REF: include/cpureg.h -- the o32 register conventions
GPR = [
    "zero", "at", "v0", "v1", "a0", "a1", "a2", "a3",
    "t0", "t1", "t2", "t3", "t4", "t5", "t6", "t7",
    "s0", "s1", "s2", "s3", "s4", "s5", "s6", "s7",
    "t8", "t9", "k0", "k1", "gp", "sp", "fp", "ra",
]
GPR_INDEX = {n: i for i, n in enumerate(GPR)}
GPR_INDEX.update({f"${i}": i for i in range(32)})
GPR_INDEX.update({f"r{i}": i for i in range(32)})
GPR_INDEX["s8"] = 30

FPR = [f"f{i}" for i in range(32)]
FPR_INDEX = {n: i for i, n in enumerate(FPR)}


# ---------------------------------------------------------------------------
# Operand fields
# ---------------------------------------------------------------------------

@dataclass(frozen=True)
class Field:
    kind: str        # gpr | fpr | uimm | simm | shift | target | branch | cc | ...
    shift: int
    bits: int
    adjust: int = 0  # value stored = value printed - adjust  (for pos+size-1)

    @property
    def mask(self) -> int:
        return ((1 << self.bits) - 1) << self.shift

    def extract(self, w: int) -> int:
        return (w >> self.shift) & ((1 << self.bits) - 1)

    def insert(self, v: int) -> int:
        return (v & ((1 << self.bits) - 1)) << self.shift


def F(kind: str, shift: int, bits: int, adjust: int = 0) -> Field:
    return Field(kind, shift, bits, adjust)


# Standard MIPS field positions
RS = F("gpr", 21, 5)
RT = F("gpr", 16, 5)
RD = F("gpr", 11, 5)
SA = F("shift", 6, 5)
BASE = F("gpr", 21, 5)
FT = F("fpr", 16, 5)
FS = F("fpr", 11, 5)
FD = F("fpr", 6, 5)
SIMM = F("simm", 0, 16)
UIMM = F("uimm", 0, 16)
OFFSET = F("simm", 0, 16)
BRANCH = F("branch", 0, 16)
TARGET = F("target", 0, 26)
CODE20 = F("uimm", 6, 20)
CODE10 = F("uimm", 6, 10)
STYPE = F("uimm", 6, 5)
CACHEOP = F("uimm", 16, 5)
POS = F("uimm", 6, 5)          # lsb
SIZE_M1 = F("uimm", 11, 5, 1)  # msb  = pos+size-1 (ext) / size-1 handled per-op
MSB = F("uimm", 11, 5)


@dataclass(frozen=True)
class Insn:
    name: str
    mask: int
    match: int
    fields: tuple[Field, ...]
    fmt: str                   # operand order, comma separated field indices
    flags: frozenset[str] = frozenset()


def _sp(funct: int) -> tuple[int, int]:
    """SPECIAL (op=0) with the given funct."""
    return (0xFC00003F, funct)


def _sp3(funct: int) -> tuple[int, int]:
    """SPECIAL3 (op=0x1F) with the given funct."""
    return (0xFC00003F, (0x1F << 26) | funct)


def _op(op: int) -> tuple[int, int]:
    return (0xFC000000, op << 26)


def I(name, mask, match, fields=(), fmt="", flags=()) -> Insn:
    return Insn(name, mask, match, tuple(fields), fmt, frozenset(flags))


# ---------------------------------------------------------------------------
# The table
# ---------------------------------------------------------------------------
# fmt is a comma-separated list of indices into `fields`, except:
#   "o(b)" renders fields[0] as an offset and fields[1] as a base register.

TABLE: list[Insn] = []


def add(*args, **kw) -> None:
    TABLE.append(I(*args, **kw))


# --- SPECIAL: shifts -------------------------------------------------------
add("sll",   0xFFE0003F, _sp(0x00)[1], (RD, RT, SA), "0,1,2")
add("srl",   0xFFE0003F, _sp(0x02)[1], (RD, RT, SA), "0,1,2")
add("rotr",  0xFFE0003F, _sp(0x02)[1] | (1 << 21), (RD, RT, SA), "0,1,2")
add("sra",   0xFFE0003F, _sp(0x03)[1], (RD, RT, SA), "0,1,2")
add("sllv",  0xFC0007FF, _sp(0x04)[1], (RD, RT, RS), "0,1,2")
add("srlv",  0xFC0007FF, _sp(0x06)[1], (RD, RT, RS), "0,1,2")
add("rotrv", 0xFC0007FF, _sp(0x06)[1] | (1 << 6), (RD, RT, RS), "0,1,2")
add("srav",  0xFC0007FF, _sp(0x07)[1], (RD, RT, RS), "0,1,2")

# --- SPECIAL: jumps --------------------------------------------------------
add("jr",    0xFC1FFFFF, _sp(0x08)[1], (RS,), "0", ("jump", "endblock"))
add("jalr",  0xFC1F07FF, _sp(0x09)[1], (RD, RS), "0,1", ("jump", "call"))
add("movz",  0xFC0007FF, _sp(0x0A)[1], (RD, RS, RT), "0,1,2")
add("movn",  0xFC0007FF, _sp(0x0B)[1], (RD, RS, RT), "0,1,2")
add("syscall", 0xFC00003F, _sp(0x0C)[1], (CODE20,), "0")
add("break", 0xFC00003F, _sp(0x0D)[1], (CODE20,), "0")
add("sync",  0xFFFFF83F, _sp(0x0F)[1], (STYPE,), "0")

# --- SPECIAL: hi/lo --------------------------------------------------------
add("mfhi",  0xFFFF07FF, _sp(0x10)[1], (RD,), "0")
add("mthi",  0xFC1FFFFF, _sp(0x11)[1], (RS,), "0")
add("mflo",  0xFFFF07FF, _sp(0x12)[1], (RD,), "0")
add("mtlo",  0xFC1FFFFF, _sp(0x13)[1], (RS,), "0")

# --- SPECIAL: mul/div ------------------------------------------------------
for _n, _f in (("mult", 0x18), ("multu", 0x19), ("div", 0x1A), ("divu", 0x1B),
               ("madd", 0x1C), ("maddu", 0x1D), ("msub", 0x1E), ("msubu", 0x1F)):
    add(_n, 0xFC00FFFF, _sp(_f)[1], (RS, RT), "0,1")

# --- SPECIAL: ALU ----------------------------------------------------------
for _n, _f in (("add", 0x20), ("addu", 0x21), ("sub", 0x22), ("subu", 0x23),
               ("and", 0x24), ("or", 0x25), ("xor", 0x26), ("nor", 0x27),
               ("slt", 0x2A), ("sltu", 0x2B),
               # Allegrex integer min/max.
               # REF: ALLEGREX-Instruction_Manual-English.pdf (max/min);
               # reference C at include/allegrex.h:199-347
               ("max", 0x2C), ("min", 0x2D)):
    add(_n, 0xFC0007FF, _sp(_f)[1], (RD, RS, RT), "0,1,2")

# Allegrex places clz/clo in SPECIAL (MIPS32 canonically puts them in SPECIAL2,
# which Allegrex does not implement) and fixes rt to 0 -- it does NOT use
# MIPS32's duplicated-rd encoding.
# REF: ALLEGREX-Instruction_Manual-English.pdf p.97 (clz, funct=0x16),
#          p.96 (clo, funct=0x17); both show rt = 00000 and sa = 00000.
add("clz",   0xFC1F07FF, _sp(0x16)[1], (RD, RS), "0,1")
add("clo",   0xFC1F07FF, _sp(0x17)[1], (RD, RS), "0,1")

add("teq",   0xFC00003F, _sp(0x34)[1], (RS, RT, CODE10), "0,1,2")
add("tne",   0xFC00003F, _sp(0x36)[1], (RS, RT, CODE10), "0,1,2")

# --- REGIMM (op=1) ---------------------------------------------------------
def _regimm(rt: int) -> int:
    return (0x01 << 26) | (rt << 16)


add("bltz",   0xFC1F0000, _regimm(0x00), (RS, BRANCH), "0,1", ("branch",))
add("bgez",   0xFC1F0000, _regimm(0x01), (RS, BRANCH), "0,1", ("branch",))
add("bltzl",  0xFC1F0000, _regimm(0x02), (RS, BRANCH), "0,1", ("branch", "likely"))
add("bgezl",  0xFC1F0000, _regimm(0x03), (RS, BRANCH), "0,1", ("branch", "likely"))
add("bltzal", 0xFC1F0000, _regimm(0x10), (RS, BRANCH), "0,1", ("branch", "call"))
add("bgezal", 0xFC1F0000, _regimm(0x11), (RS, BRANCH), "0,1", ("branch", "call"))
add("bltzall", 0xFC1F0000, _regimm(0x12), (RS, BRANCH), "0,1",
    ("branch", "call", "likely"))
add("bgezall", 0xFC1F0000, _regimm(0x13), (RS, BRANCH), "0,1",
    ("branch", "call", "likely"))
add("synci",  0xFC1F0000, _regimm(0x1F), (OFFSET, BASE), "o(b)")

# --- jumps / branches ------------------------------------------------------
add("j",     _op(0x02)[0], _op(0x02)[1], (TARGET,), "0", ("jump", "endblock"))
add("jal",   _op(0x03)[0], _op(0x03)[1], (TARGET,), "0", ("jump", "call"))
add("beq",   _op(0x04)[0], _op(0x04)[1], (RS, RT, BRANCH), "0,1,2", ("branch",))
add("bne",   _op(0x05)[0], _op(0x05)[1], (RS, RT, BRANCH), "0,1,2", ("branch",))
add("blez",  0xFC1F0000, _op(0x06)[1], (RS, BRANCH), "0,1", ("branch",))
add("bgtz",  0xFC1F0000, _op(0x07)[1], (RS, BRANCH), "0,1", ("branch",))
add("beql",  _op(0x14)[0], _op(0x14)[1], (RS, RT, BRANCH), "0,1,2",
    ("branch", "likely"))
add("bnel",  _op(0x15)[0], _op(0x15)[1], (RS, RT, BRANCH), "0,1,2",
    ("branch", "likely"))
add("blezl", 0xFC1F0000, _op(0x16)[1], (RS, BRANCH), "0,1", ("branch", "likely"))
add("bgtzl", 0xFC1F0000, _op(0x17)[1], (RS, BRANCH), "0,1", ("branch", "likely"))

# --- immediate ALU ---------------------------------------------------------
add("addi",  _op(0x08)[0], _op(0x08)[1], (RT, RS, SIMM), "0,1,2")
add("addiu", _op(0x09)[0], _op(0x09)[1], (RT, RS, SIMM), "0,1,2")
add("slti",  _op(0x0A)[0], _op(0x0A)[1], (RT, RS, SIMM), "0,1,2")
add("sltiu", _op(0x0B)[0], _op(0x0B)[1], (RT, RS, SIMM), "0,1,2")
add("andi",  _op(0x0C)[0], _op(0x0C)[1], (RT, RS, UIMM), "0,1,2")
add("ori",   _op(0x0D)[0], _op(0x0D)[1], (RT, RS, UIMM), "0,1,2")
add("xori",  _op(0x0E)[0], _op(0x0E)[1], (RT, RS, UIMM), "0,1,2")
add("lui",   0xFFE00000, _op(0x0F)[1], (RT, UIMM), "0,1")

# --- loads / stores --------------------------------------------------------
for _n, _o in (("lb", 0x20), ("lh", 0x21), ("lwl", 0x22), ("lw", 0x23),
               ("lbu", 0x24), ("lhu", 0x25), ("lwr", 0x26),
               ("sb", 0x28), ("sh", 0x29), ("swl", 0x2A), ("sw", 0x2B),
               ("swr", 0x2E), ("ll", 0x30), ("sc", 0x38)):
    add(_n, _op(_o)[0], _op(_o)[1], (RT, OFFSET, BASE), "0,o(b)")

# REF: include/allegrex.h:63-76 enumerates cache ops 0x04..0x1F
add("cache", _op(0x2F)[0], _op(0x2F)[1], (CACHEOP, OFFSET, BASE), "0,o(b)")

add("lwc1", _op(0x31)[0], _op(0x31)[1], (FT, OFFSET, BASE), "0,o(b)")
add("swc1", _op(0x39)[0], _op(0x39)[1], (FT, OFFSET, BASE), "0,o(b)")

# --- SPECIAL3: bit-field and byte-shuffle ----------------------------------
# REF: ALLEGREX-Instruction_Manual-English.pdf p.106 (ext), p.107 (ins)
add("ext", 0xFC00003F, _sp3(0x00)[1], (RT, RS, POS, MSB), "0,1,2,3")
add("ins", 0xFC00003F, _sp3(0x04)[1], (RT, RS, POS, MSB), "0,1,2,3")

# BSHFL, funct 0x20, discriminated by sa.
# REF: p.110 bitrev (sa=0x14), p.114 wsbw (sa=0x03), p.108 wsbh (sa=0x02)
def _bshfl(sa: int) -> tuple[int, int]:
    return (0xFFE007FF, _sp3(0x20)[1] | (sa << 6))


for _n, _sa in (("wsbh", 0x02), ("wsbw", 0x03), ("seb", 0x10),
                ("bitrev", 0x14), ("seh", 0x18)):
    add(_n, _bshfl(_sa)[0], _bshfl(_sa)[1], (RD, RT), "0,1")

# --- COP0 (op=0x10) --------------------------------------------------------
add("mfc0", 0xFFE007FF, (0x10 << 26) | (0x00 << 21), (RT, RD), "0,1")
add("mtc0", 0xFFE007FF, (0x10 << 26) | (0x04 << 21), (RT, RD), "0,1")

# --- COP1 (op=0x11) --------------------------------------------------------
def _cop1_rs(rs: int) -> tuple[int, int]:
    return (0xFFE007FF, (0x11 << 26) | (rs << 21))


add("mfc1", *_cop1_rs(0x00), (RT, FS), "0,1")
add("cfc1", *_cop1_rs(0x02), (RT, FS), "0,1")
add("mtc1", *_cop1_rs(0x04), (RT, FS), "0,1")
add("ctc1", *_cop1_rs(0x06), (RT, FS), "0,1")

# BC1: rs=0x08, discriminated by rt[1:0]
def _bc1(tf: int) -> tuple[int, int]:
    return (0xFFFF0000, (0x11 << 26) | (0x08 << 21) | (tf << 16))


add("bc1f",  *_bc1(0x0), (BRANCH,), "0", ("branch",))
add("bc1t",  *_bc1(0x1), (BRANCH,), "0", ("branch",))
add("bc1fl", *_bc1(0x2), (BRANCH,), "0", ("branch", "likely"))
add("bc1tl", *_bc1(0x3), (BRANCH,), "0", ("branch", "likely"))

# fmt=S (rs=0x10) arithmetic. PSP has NO double precision.
# REF: ALLEGREX FPU-Instruction_Manual-English.pdf
def _fps(funct: int) -> tuple[int, int]:
    return (0xFFE0003F, (0x11 << 26) | (0x10 << 21) | funct)


for _n, _f in (("add.s", 0x00), ("sub.s", 0x01), ("mul.s", 0x02),
               ("div.s", 0x03)):
    add(_n, *_fps(_f), (FD, FS, FT), "0,1,2")
for _n, _f in (("sqrt.s", 0x04), ("abs.s", 0x05), ("mov.s", 0x06),
               ("neg.s", 0x07), ("round.w.s", 0x0C), ("trunc.w.s", 0x0D),
               ("ceil.w.s", 0x0E), ("floor.w.s", 0x0F), ("cvt.w.s", 0x24)):
    add(_n, 0xFFFF003F, (0x11 << 26) | (0x10 << 21) | _f, (FD, FS), "0,1")

# fmt=W (rs=0x14): integer -> single
add("cvt.s.w", 0xFFFF003F, (0x11 << 26) | (0x14 << 21) | 0x20, (FD, FS), "0,1")

# c.cond.s -- 16 conditions, funct 0x30..0x3F, fmt=S
_FCOND = ["f", "un", "eq", "ueq", "olt", "ult", "ole", "ule",
          "sf", "ngle", "seq", "ngl", "lt", "nge", "le", "ngt"]
for _i, _c in enumerate(_FCOND):
    add(f"c.{_c}.s", 0xFFE007FF, (0x11 << 26) | (0x10 << 21) | (0x30 + _i),
        (FS, FT), "0,1")

# ---------------------------------------------------------------------------
# Validation
# ---------------------------------------------------------------------------


def selftest_bitcoverage() -> list[str]:
    """Every bit of a word must be either fixed by `mask` or owned by exactly
    one field. Returns a list of problems (empty == good)."""
    problems: list[str] = []
    for insn in TABLE:
        covered = insn.mask
        for f in insn.fields:
            if covered & f.mask:
                problems.append(
                    f"{insn.name}: field {f.kind}@{f.shift}:{f.bits} overlaps "
                    f"fixed bits or another field")
            covered |= f.mask
        if covered != 0xFFFFFFFF:
            missing = (~covered) & 0xFFFFFFFF
            problems.append(f"{insn.name}: bits {missing:#010x} unaccounted for")
        if insn.match & ~insn.mask:
            problems.append(f"{insn.name}: match has bits outside mask")
    return problems


def selftest_uniqueness(sample_limit: int = 0) -> list[str]:
    """No two entries may claim the same encoding. Checked pairwise on the
    fixed bits: two entries collide if their masks agree wherever they
    overlap."""
    problems: list[str] = []
    for i, a in enumerate(TABLE):
        for b in TABLE[i + 1:]:
            common = a.mask & b.mask
            if (a.match & common) == (b.match & common):
                problems.append(f"ambiguous: {a.name} vs {b.name}")
    return problems


if __name__ == "__main__":
    p = selftest_bitcoverage()
    q = selftest_uniqueness()
    print(f"table entries    : {len(TABLE)}")
    print(f"bit-coverage     : {'OK' if not p else f'{len(p)} PROBLEMS'}")
    for x in p[:20]:
        print("   ", x)
    print(f"uniqueness       : {'OK' if not q else f'{len(q)} PROBLEMS'}")
    for x in q[:20]:
        print("   ", x)
