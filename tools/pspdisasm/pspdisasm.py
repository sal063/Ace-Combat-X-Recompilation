#!/usr/bin/env python3
"""
tools/pspdisasm -- Phase 1, Task 4 of RECOMP_PLAN.md

Allegrex disassembler + assembler. Both directions are driven by the single
table in isa.py, and the exit criterion is a textual round-trip:

    word -> decode -> text -> assemble -> word'      require word == word'

Going through the *text* (not just re-emitting fields) is what makes this a
real test: it exercises the printer, the operand order, and the immediate
formatting, not only the bit extraction.

Usage:
    python pspdisasm.py EBOOT.elf --dump 0x40 40
    python pspdisasm.py EBOOT.elf --roundtrip
    python pspdisasm.py EBOOT.elf --coverage docs/ISA_COVERAGE.md
"""

from __future__ import annotations

import argparse
import re
import struct
import sys
from collections import Counter
from pathlib import Path

sys.path.insert(0, str(Path(__file__).resolve().parent))
sys.path.insert(0, str(Path(__file__).resolve().parents[1] / "prxload"))

from isa import (  # noqa: E402
    TABLE, GPR, GPR_INDEX, FPR_INDEX, Insn, Field,
    selftest_bitcoverage, selftest_uniqueness,
)
from pspelf import Elf32  # noqa: E402

try:
    import vfpu  # optional: VFPU decoding layer
except ImportError:  # pragma: no cover
    vfpu = None


# ---------------------------------------------------------------------------
# Dispatch: bucket the table by primary opcode for speed
# ---------------------------------------------------------------------------

_BY_OP: dict[int, list[Insn]] = {}
_WILD: list[Insn] = []
for _insn in TABLE:
    if (_insn.mask >> 26) == 0x3F:
        _BY_OP.setdefault(_insn.match >> 26, []).append(_insn)
    else:
        _WILD.append(_insn)
# Longest (most specific) mask first, so e.g. `rotr` beats `srl`.
for _lst in _BY_OP.values():
    _lst.sort(key=lambda i: bin(i.mask).count("1"), reverse=True)
_WILD.sort(key=lambda i: bin(i.mask).count("1"), reverse=True)


class DecodeError(Exception):
    pass


def decode(word: int) -> tuple[Insn, list[int]] | None:
    """Return (insn, raw field values) or None if unrecognised."""
    for insn in _BY_OP.get(word >> 26, ()):
        if (word & insn.mask) == insn.match:
            return insn, [f.extract(word) for f in insn.fields]
    for insn in _WILD:
        if (word & insn.mask) == insn.match:
            return insn, [f.extract(word) for f in insn.fields]
    return None


# ---------------------------------------------------------------------------
# Printing
# ---------------------------------------------------------------------------

def _sext16(v: int) -> int:
    return v - 0x10000 if v & 0x8000 else v


def render_operand(f: Field, v: int, pc: int) -> str:
    if f.kind == "gpr":
        return "$" + GPR[v]
    if f.kind == "fpr":
        return f"$f{v}"
    if f.kind == "simm":
        return str(_sext16(v))
    if f.kind == "uimm":
        return f"0x{v:x}"
    if f.kind == "shift":
        return str(v)
    if f.kind == "branch":
        return f"0x{(pc + 4 + (_sext16(v) << 2)) & 0xFFFFFFFF:08x}"
    if f.kind == "target":
        return f"0x{((pc + 4) & 0xF0000000) | (v << 2):08x}"
    return f"0x{v:x}"


def format_insn(insn: Insn, vals: list[int], pc: int) -> str:
    if not insn.fmt:
        return insn.name
    parts: list[str] = []
    for token in insn.fmt.split(","):
        if token == "o(b)":
            # by convention the offset field precedes the base field
            oi = len(insn.fields) - 2
            bi = len(insn.fields) - 1
            off = _sext16(vals[oi])
            parts.append(f"{off}($" + GPR[vals[bi]] + ")")
        else:
            i = int(token)
            parts.append(render_operand(insn.fields[i], vals[i], pc))
    return f"{insn.name} {', '.join(parts)}"


def disassemble(word: int, pc: int) -> str:
    d = decode(word)
    if d is None:
        if vfpu is not None:
            t = vfpu.disassemble(word, pc)
            if t is not None:
                return t
        return f".word 0x{word:08x}"
    return format_insn(*d, pc)


# ---------------------------------------------------------------------------
# Assembling (the round-trip's second half)
# ---------------------------------------------------------------------------

_SPLIT_RE = re.compile(r"[\s,]+")
_MEMREF_RE = re.compile(r"^(-?(?:0x)?[0-9a-fA-F]+)\((\$\w+)\)$")

_BY_NAME: dict[str, Insn] = {}
for _insn in TABLE:
    _BY_NAME.setdefault(_insn.name, _insn)


def _parse_int(tok: str) -> int:
    tok = tok.strip()
    neg = tok.startswith("-")
    if neg:
        tok = tok[1:]
    v = int(tok, 16) if tok.lower().startswith("0x") else int(tok, 10)
    return -v if neg else v


def _parse_gpr(tok: str) -> int:
    t = tok.lstrip("$")
    if t not in GPR_INDEX:
        raise DecodeError(f"bad GPR {tok!r}")
    return GPR_INDEX[t]


def assemble(text: str, pc: int) -> int:
    text = text.strip()
    if text.startswith(".word"):
        return _parse_int(text.split(None, 1)[1]) & 0xFFFFFFFF
    if vfpu is not None and vfpu.owns_mnemonic(text.split(None, 1)[0]):
        return vfpu.assemble(text, pc)

    head, _, tail = text.partition(" ")
    insn = _BY_NAME.get(head)
    if insn is None:
        raise DecodeError(f"unknown mnemonic {head!r}")
    ops = [t for t in _SPLIT_RE.split(tail.strip()) if t] if tail.strip() else []

    word = insn.match
    tokens = insn.fmt.split(",") if insn.fmt else []
    # `o(b)` consumes one textual operand but fills two fields
    oi = 0
    for token in tokens:
        if token == "o(b)":
            m = _MEMREF_RE.match(ops[oi])
            if not m:
                raise DecodeError(f"bad memory operand {ops[oi]!r}")
            off = _parse_int(m.group(1))
            base = _parse_gpr(m.group(2))
            word |= insn.fields[-2].insert(off)
            word |= insn.fields[-1].insert(base)
            oi += 1
            continue
        idx = int(token)
        f = insn.fields[idx]
        tok = ops[oi]
        oi += 1
        if f.kind == "gpr":
            word |= f.insert(_parse_gpr(tok))
        elif f.kind == "fpr":
            t = tok.lstrip("$")
            if t not in FPR_INDEX:
                raise DecodeError(f"bad FPR {tok!r}")
            word |= f.insert(FPR_INDEX[t])
        elif f.kind == "branch":
            dest = _parse_int(tok)
            delta = (dest - (pc + 4)) >> 2
            word |= f.insert(delta)
        elif f.kind == "target":
            dest = _parse_int(tok)
            word |= f.insert((dest >> 2) & 0x03FFFFFF)
        else:
            word |= f.insert(_parse_int(tok))
    return word & 0xFFFFFFFF


# ---------------------------------------------------------------------------
# Harness
# ---------------------------------------------------------------------------

def load_text_section(path: Path, name: str = ".text"):
    elf = Elf32(path.read_bytes(), str(path))
    sec = elf.section(name)
    if sec is None:
        raise SystemExit(f"no section {name} in {path}")
    blob = elf.section_data(sec)
    words = struct.unpack(f"<{len(blob) // 4}I", blob)
    return sec.addr, words


def cmd_dump(path: Path, start: int, count: int) -> int:
    base, words = load_text_section(path)
    i0 = (start - base) // 4
    for i in range(i0, min(i0 + count, len(words))):
        pc = base + i * 4
        print(f"{pc:08x}: {words[i]:08x}  {disassemble(words[i], pc)}")
    return 0


def cmd_roundtrip(path: Path, verbose: int) -> int:
    base, words = load_text_section(path)
    total = len(words)
    ok = 0
    undecoded: Counter[int] = Counter()
    mismatches: list[tuple[int, int, int, str]] = []
    used: Counter[str] = Counter()
    asm_errors: Counter[str] = Counter()

    for i, w in enumerate(words):
        pc = base + i * 4
        text = disassemble(w, pc)
        mnem = text.split(None, 1)[0]
        if mnem == ".word":
            undecoded[(w >> 26)] += 1
            continue
        used[mnem] += 1
        try:
            back = assemble(text, pc)
        except Exception as exc:
            asm_errors[f"{mnem}: {exc}"] += 1
            continue
        if back == w:
            ok += 1
        elif len(mismatches) < 40:
            mismatches.append((pc, w, back, text))

    decoded = total - sum(undecoded.values())
    print(f"instructions      : {total:,}")
    print(f"decoded           : {decoded:,} ({100 * decoded / total:.4f}%)")
    print(f"round-tripped     : {ok:,} ({100 * ok / total:.4f}% of all, "
          f"{100 * ok / max(decoded, 1):.4f}% of decoded)")
    print(f"distinct mnemonics: {len(used)}")

    if undecoded:
        print(f"\nundecoded by primary opcode ({sum(undecoded.values()):,} words):")
        for op, n in undecoded.most_common():
            print(f"  op={op:#04x}  {n:>7,}")
    if asm_errors:
        print(f"\nassembler errors ({sum(asm_errors.values()):,}):")
        for k, n in asm_errors.most_common(15):
            print(f"  {n:>7,}  {k}")
    if mismatches:
        print(f"\nround-trip mismatches (first {len(mismatches)}):")
        for pc, w, back, text in mismatches:
            print(f"  {pc:08x}: {w:08x} -> {text!r} -> {back:08x} "
                  f"(diff {w ^ back:08x})")

    if verbose:
        print("\nmnemonic histogram:")
        for m, n in used.most_common():
            print(f"  {m:<12} {n:>8,}")

    return 0 if (ok == total) else 1


def cmd_coverage(path: Path, out: Path) -> int:
    base, words = load_text_section(path)
    used: Counter[str] = Counter()
    undec = 0
    for i, w in enumerate(words):
        t = disassemble(w, base + i * 4)
        m = t.split(None, 1)[0]
        if m == ".word":
            undec += 1
        used[m] += 1

    implemented = {i.name for i in TABLE}
    if vfpu is not None:
        implemented |= vfpu.mnemonics()

    out.parent.mkdir(parents=True, exist_ok=True)
    with open(out, "w", encoding="utf-8", newline="\n") as fh:
        fh.write("# ISA_COVERAGE\n\n")
        fh.write("Generated by `tools/pspdisasm/pspdisasm.py --coverage`. "
                 "Do not edit by hand.\n\n")
        fh.write(f"- Target: `{path}` `.text` @ `{base:#x}`, "
                 f"**{len(words):,}** instructions\n")
        fh.write(f"- Instruction forms in the table: **{len(implemented)}**\n")
        fh.write(f"- Distinct forms used by the target: "
                 f"**{len([m for m in used if m != '.word'])}**\n")
        fh.write(f"- Words the disassembler cannot decode: **{undec:,}**\n\n")
        fh.write("## Forms used by the target\n\n")
        fh.write("| Mnemonic | Count | Status |\n|---|---:|---|\n")
        for m, n in used.most_common():
            status = "UNDECODED" if m == ".word" else "implemented"
            fh.write(f"| `{m}` | {n:,} | {status} |\n")
        unused = sorted(implemented - set(used))
        fh.write(f"\n## Implemented but unused by this target ({len(unused)})\n\n")
        fh.write(", ".join(f"`{m}`" for m in unused) + "\n")
    print(f"wrote {out}")
    return 0


def main(argv: list[str]) -> int:
    ap = argparse.ArgumentParser()
    ap.add_argument("elf", type=Path)
    ap.add_argument("--dump", nargs=2, metavar=("ADDR", "COUNT"))
    ap.add_argument("--roundtrip", action="store_true")
    ap.add_argument("--coverage", type=Path)
    ap.add_argument("-v", "--verbose", action="count", default=0)
    a = ap.parse_args(argv)

    problems = selftest_bitcoverage() + selftest_uniqueness()
    if problems:
        print("ISA TABLE PROBLEMS:", file=sys.stderr)
        for p in problems:
            print("  " + p, file=sys.stderr)
        return 2

    if a.dump:
        return cmd_dump(a.elf, int(a.dump[0], 0), int(a.dump[1], 0))
    if a.coverage:
        return cmd_coverage(a.elf, a.coverage)
    return cmd_roundtrip(a.elf, a.verbose)


if __name__ == "__main__":
    raise SystemExit(main(sys.argv[1:]))
