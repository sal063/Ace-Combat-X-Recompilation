#!/usr/bin/env python3
"""
tools/pspdisasm/histogram.py -- opcode census of a PSP module's .text.

Run before/while building the disassembler so effort goes where the target
actually spends its encoding space (RECOMP_PLAN §1.3 quotes a partial census;
this reproduces and refines it).
"""

from __future__ import annotations

import argparse
import struct
import sys
from collections import Counter
from pathlib import Path

sys.path.insert(0, str(Path(__file__).resolve().parents[1] / "prxload"))
from pspelf import Elf32  # noqa: E402

OP_NAMES = {
    0x00: "SPECIAL", 0x01: "REGIMM", 0x02: "j", 0x03: "jal",
    0x04: "beq", 0x05: "bne", 0x06: "blez", 0x07: "bgtz",
    0x08: "addi", 0x09: "addiu", 0x0A: "slti", 0x0B: "sltiu",
    0x0C: "andi", 0x0D: "ori", 0x0E: "xori", 0x0F: "lui",
    0x10: "COP0", 0x11: "COP1", 0x12: "COP2/VFPU", 0x13: "VFPU3",
    0x14: "beql", 0x15: "bnel", 0x16: "blezl", 0x17: "bgtzl",
    0x18: "VFPU0", 0x19: "VFPU1", 0x1A: "VFPU2?", 0x1B: "VFPU3b?",
    0x1C: "SPECIAL2", 0x1D: "VFPU4/5", 0x1E: "?", 0x1F: "SPECIAL3",
    0x20: "lb", 0x21: "lh", 0x22: "lwl", 0x23: "lw",
    0x24: "lbu", 0x25: "lhu", 0x26: "lwr", 0x27: "?",
    0x28: "sb", 0x29: "sh", 0x2A: "swl", 0x2B: "sw",
    0x2C: "?", 0x2D: "?", 0x2E: "swr", 0x2F: "cache",
    0x30: "ll", 0x31: "lwc1", 0x32: "lv.s", 0x33: "?",
    0x34: "?", 0x35: "lv.q", 0x36: "VFPU6/7", 0x37: "vwb.q?",
    0x38: "sc", 0x39: "swc1", 0x3A: "sv.s", 0x3B: "?",
    0x3C: "?", 0x3D: "sv.q", 0x3E: "VFPU-store?", 0x3F: "?",
}

SPECIAL_NAMES = {
    0x00: "sll", 0x01: "MOVCI/sllv?", 0x02: "srl/rotr", 0x03: "sra",
    0x04: "sllv", 0x06: "srlv/rotrv", 0x07: "srav",
    0x08: "jr", 0x09: "jalr", 0x0A: "movz", 0x0B: "movn",
    0x0C: "syscall", 0x0D: "break", 0x0F: "sync",
    0x10: "mfhi", 0x11: "mthi", 0x12: "mflo", 0x13: "mtlo",
    0x18: "mult", 0x19: "multu", 0x1A: "div", 0x1B: "divu",
    0x1C: "madd", 0x1D: "maddu", 0x1E: "msub", 0x1F: "msubu",
    0x20: "add", 0x21: "addu", 0x22: "sub", 0x23: "subu",
    0x24: "and", 0x25: "or", 0x26: "xor", 0x27: "nor",
    0x28: "max", 0x29: "min", 0x2A: "slt", 0x2B: "sltu",
    0x2C: "?", 0x2D: "?", 0x2E: "?", 0x2F: "?",
    0x34: "teq", 0x36: "tne",
}


def main(argv: list[str]) -> int:
    ap = argparse.ArgumentParser()
    ap.add_argument("elf", type=Path)
    ap.add_argument("--section", default=".text")
    a = ap.parse_args(argv)

    elf = Elf32(a.elf.read_bytes(), str(a.elf))
    sec = elf.section(a.section)
    if sec is None:
        print(f"no section {a.section}", file=sys.stderr)
        return 2
    blob = elf.section_data(sec)
    words = struct.unpack(f"<{len(blob) // 4}I", blob)
    print(f"{a.section}: vaddr={sec.addr:#x} size={sec.size:#x} "
          f"instructions={len(words):,}\n")

    prim = Counter(w >> 26 for w in words)
    print("=== primary opcode ===")
    for op, n in prim.most_common():
        print(f"  {op:#04x} {OP_NAMES.get(op, '?'):<12} {n:>8,} "
              f"({100 * n / len(words):5.2f}%)")

    spec = Counter(w & 0x3F for w in words if (w >> 26) == 0)
    print("\n=== SPECIAL (op=0) funct ===")
    for f, n in spec.most_common():
        print(f"  {f:#04x} {SPECIAL_NAMES.get(f, '?'):<12} {n:>8,}")

    sp3 = Counter(w & 0x3F for w in words if (w >> 26) == 0x1F)
    if sp3:
        print("\n=== SPECIAL3 (op=0x1f) funct ===")
        for f, n in sp3.most_common():
            print(f"  {f:#04x} {n:>8,}")

    regimm = Counter((w >> 16) & 0x1F for w in words if (w >> 26) == 1)
    if regimm:
        print("\n=== REGIMM rt ===")
        for f, n in regimm.most_common():
            print(f"  {f:#04x} {n:>8,}")

    cop1 = Counter((w >> 21) & 0x1F for w in words if (w >> 26) == 0x11)
    if cop1:
        print("\n=== COP1 rs/fmt ===")
        for f, n in cop1.most_common():
            print(f"  {f:#04x} {n:>8,}")
    cop1s = Counter(w & 0x3F for w in words
                    if (w >> 26) == 0x11 and ((w >> 21) & 0x1F) == 0x10)
    if cop1s:
        print("\n=== COP1 fmt=S funct ===")
        for f, n in cop1s.most_common():
            print(f"  {f:#04x} {n:>8,}")

    vfpu_ops = [0x12, 0x13, 0x18, 0x19, 0x1A, 0x1B, 0x1D, 0x1E,
                0x32, 0x35, 0x36, 0x37, 0x3A, 0x3D, 0x3E, 0x3F]
    tot = sum(prim.get(o, 0) for o in vfpu_ops)
    print(f"\nVFPU-space instructions: {tot:,} "
          f"({100 * tot / len(words):.3f}%)")
    return 0


if __name__ == "__main__":
    raise SystemExit(main(sys.argv[1:]))
