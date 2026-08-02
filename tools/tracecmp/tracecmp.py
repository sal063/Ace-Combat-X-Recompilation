#!/usr/bin/env python3
"""
tools/tracecmp -- RECOMP_PLAN Phase 9.1, "differential trace vs an oracle".

The plan calls this "the single highest-value debugging tool -- build it early,
not late", and it is: a recompiler bug shows up as one wrong register at one
address, thousands of instructions before the crash it eventually causes.

Inputs
------
oracle   A PPSSPP instruction trace of the same title. Format (v1):

             # psp-recomp trace v1 oracle=ppsspp target=... start_pc=0x...
             # init r0=0x... r1=0x... ... fcr31=0x... f0=0x... v0=0x...
             <n> pc=0x08804128 op=0x27bdfff0 r29=0x09fffe80
             <n> pc=0x0880412c op=0x3c030207 r3=0x02070000

         One line per retired instruction; the trailing assignments are the
         writes that instruction performed. Registers PPSSPP could not know
         the reset value of are seeded with 0xDEADBEEF, and any register still
         holding its seed is treated as unknown and never compared.

ours     A pspreco function-entry trace, from `python build.py --trace`:

             # pspreco trace v1 granularity=function-entry
             pc=0x08804128 r1=0x... r2=0x... ... r31=0x...

How the comparison works
------------------------
Replay the oracle, maintaining the register file. Whenever the pc of the line
about to execute is a recompiled function entry, that is a record: the pc plus
the register file as it stands *before* the instruction runs -- exactly what
pspreco logs on entry. Zip the two streams and stop at the first mismatch.

The function-entry set comes from docs/coverage.json, so the two sides agree
on what a function is by construction.

Usage:
    python tracecmp.py ORACLE OURS [--coverage docs/coverage.json]
                       [--limit N] [--context N] [--verbose]
"""

from __future__ import annotations

import argparse
import json
import re
import sys
from pathlib import Path

sys.stdout.reconfigure(encoding="utf-8", errors="replace")

HERE = Path(__file__).resolve().parent
DEFAULT_COVERAGE = HERE.parents[1] / "data" / "coverage.json"

# PPSSPP seeds registers whose reset value it cannot know. A register still
# holding the seed has never been written, so its value is not a fact.
UNKNOWN = 0xDEADBEEF

RE_PC = re.compile(r"pc=0x([0-9a-fA-F]{8})")
RE_REG = re.compile(r"\br(\d{1,2})=0x([0-9a-fA-F]{1,8})")

# Which registers are worth comparing at a function entry.
#
# `all` is the honest ideal but it is unusable in practice: pspreco does not
# execute the kernel, it calls an HLE handler instead, so every caller-saved
# register the kernel happened to leave behind ($at, $v0/$v1, $t0-$t9) differs
# from ours by definition and says nothing about our correctness. o32 makes no
# promise about them across a call either.
#
# `abi` keeps exactly the registers whose value at a function entry is
# architecturally defined: the arguments, the callee-saved file, and the four
# pointers. A recompiler bug -- a wrong immediate, a mispaired HI16/LO16, a
# botched delay slot, a branch-likely that nullified the wrong instruction --
# reaches one of these within a handful of calls.
REG_SETS = {
    "abi": sorted({4, 5, 6, 7}                      # a0-a3
                  | set(range(16, 24))              # s0-s7
                  | {26, 28, 29, 30, 31}),          # k0, gp, sp, fp, ra
    "callee": sorted(set(range(16, 24)) | {26, 28, 29, 30, 31}),
    "all": list(range(1, 32)),
}

# Caller-saved registers are only meaningful at a function entry if the caller
# actually set them for this call. `$a0-$a3` usually are -- which is how the
# HI16/LO16 relocation bug surfaced, as a wrong `$a0` -- but they also survive
# untouched across calls that never read them, and then they hold whatever the
# previous unrelated code left. Ours and the oracle's leftovers legitimately
# differ, because pspreco runs an HLE handler where hardware runs kernel code
# that clobbers them.
#
# So: a caller-saved register is compared only when the oracle wrote it since
# the previous compared record. That keeps every real argument mismatch and
# drops the stale ones. Callee-saved registers and the four pointers are
# always compared -- the ABI guarantees them regardless of history.
CALLER_SAVED = frozenset({1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15,
                          24, 25})


def load_entries(coverage: Path) -> set[int]:
    d = json.loads(coverage.read_text(encoding="utf-8"))
    return {int(f["start"], 16) for f in d["functions"]["list"]}


class OracleReplay:
    """Streams an oracle trace, yielding (pc, regs, line_no, fresh) at every
    recompiled function entry.

    The oracle is one interleaved stream of instructions from every thread, so
    the reconstructed register file has to be per context or one thread's
    values leak into another's records. `classify(sp) -> context` splits it.
    A register is reported as `fresh` for a context only if that context is
    the one that last wrote it, and wrote it since its own previous record --
    everything else is either stale or somebody else's."""

    def __init__(self, path: Path, entries: set[int], classify):
        self.path = path
        self.entries = entries
        self.classify = classify
        self.regs = [UNKNOWN] * 32       # global: tracks $sp for classifying
        self.regs[0] = 0
        self.lines = 0

    def __iter__(self):
        owner = [None] * 32              # context that last wrote each reg
        fresh: dict[object, set[int]] = {}
        with self.path.open("r", encoding="utf-8", errors="replace") as fh:
            for line in fh:
                self.lines += 1
                if line.startswith("#"):
                    if line.startswith("# init"):
                        for m in RE_REG.finditer(line):
                            self.regs[int(m.group(1))] = int(m.group(2), 16)
                        self.regs[0] = 0
                    continue
                m = RE_PC.search(line)
                if not m:
                    continue
                pc = int(m.group(1), 16)
                ctx = self.classify(self.regs[29])
                if pc in self.entries:
                    mine = fresh.get(ctx, set())
                    owned = frozenset(r for r in range(1, 32)
                                      if owner[r] == ctx)
                    yield (pc, list(self.regs), self.lines,
                           frozenset(r for r in mine if owner[r] == ctx),
                           owned)
                    fresh[ctx] = set()
                # Apply this instruction's register writes. `op=` is not a
                # register and RE_REG only matches rNN, so it cannot collide.
                #
                # Writes are credited to the context the instruction leaves us
                # in, not the one it started in. Almost always the same -- but
                # the kernel's thread-switch loads $sp and $k0 in one
                # instruction, and those values belong to the thread being
                # switched TO. Crediting them to the outgoing thread made a
                # switch record's $k0 look like the incoming thread's own, and
                # produced a phantom divergence on every thread after the
                # second.
                writes = [(int(w.group(1)), int(w.group(2), 16))
                          for w in RE_REG.finditer(line, m.end())
                          if int(w.group(1))]
                for n, v in writes:
                    self.regs[n] = v
                ctx_after = self.classify(self.regs[29])
                # An instruction that lands us in a different context is the
                # kernel's thread switch, and its writes are RESTORES: it
                # re-establishes registers saved when that thread was last
                # preempted, arbitrarily far back. A restored caller-saved
                # register is not new information and no code reads it across
                # a call, so it must not count as freshly written -- otherwise
                # every thread switch makes $a0-$a3 and $t0-$t9 look
                # comparable when they are just the tail of a scheduling slice
                # we deliberately do not model instruction for instruction.
                #
                # Ownership still transfers, and callee-saved registers are
                # still compared: if a thread's $s0-$s7 come back wrong, that
                # is real.
                restore = (ctx_after != ctx)
                for n, _v in writes:
                    owner[n] = ctx_after
                    if not (restore and n in CALLER_SAVED):
                        fresh.setdefault(ctx_after, set()).add(n)


RE_TID = re.compile(r"\btid=(-?\d+)")


def read_ours(path: Path):
    with path.open("r", encoding="utf-8", errors="replace") as fh:
        for lineno, line in enumerate(fh, 1):
            if line.startswith("#"):
                continue
            m = RE_PC.search(line)
            if not m:
                continue
            t = RE_TID.search(line)
            tid = int(t.group(1)) if t else -1
            regs = [0] * 32
            for w in RE_REG.finditer(line, m.end()):
                regs[int(w.group(1))] = int(w.group(2), 16)
            yield tid, int(m.group(1), 16), regs, lineno


# --- separating the streams by thread ------------------------------------
#
# Hardware preempts; pspreco's scheduler is cooperative (RECOMP_PLAN §4b chose
# one host thread for determinism). Once more than one guest thread is
# runnable the two traces interleave differently, and that is legitimate --
# it says nothing about whether the recompiled code is right.
#
# So compare per thread. Our trace carries `tid=` directly. The oracle has no
# thread id, but it does have `$sp`, and by this point our stack addresses are
# verified identical to hardware's for tens of thousands of records. So: learn
# each thread's stack range from OUR trace, then classify each oracle record
# by which range its `$sp` falls in. A record whose sp matches no known range
# belongs to a thread we never ran, and is skipped rather than guessed at.

RE_CONTEXT = re.compile(
    r"^# context tid=(-?\d+) stack=0x([0-9a-f]{8})\.\.0x([0-9a-f]{8})"
    r"(?: name=(.*))?$")


def thread_stack_ranges(path: Path):
    """Allocated stack bounds per context, as the runtime declared them.

    Falls back to observed $sp bounds for a trace produced before the runtime
    emitted `# context` lines -- narrower, and it can misattribute records
    where the oracle's stack goes deeper than ours did, but it is better than
    refusing to run."""
    ranges: dict[int, tuple[int, int]] = {}
    names: dict[int, str] = {}
    with path.open("r", encoding="utf-8", errors="replace") as fh:
        for line in fh:
            if not line.startswith("#"):
                continue
            m = RE_CONTEXT.match(line.rstrip("\n"))
            if m:
                tid = int(m.group(1))
                ranges[tid] = (int(m.group(2), 16), int(m.group(3), 16))
                names[tid] = (m.group(4) or "").strip()
    if ranges:
        return ranges, names

    lo: dict[int, int] = {}
    hi: dict[int, int] = {}
    for tid, _pc, regs, _ln in read_ours(path):
        sp = regs[29]
        if not sp:
            continue
        if tid not in lo or sp < lo[tid]: lo[tid] = sp
        if tid not in hi or sp > hi[tid]: hi[tid] = sp
    return {t: (lo[t], hi[t]) for t in lo}, {}


def classifier(ranges: dict[int, tuple[int, int]]):
    """sp -> tid, or None when no thread we ran owns that stack."""
    ordered = sorted(ranges.items(), key=lambda kv: kv[1][0])

    def classify(sp: int):
        for tid, (a, b) in ordered:
            if a <= sp <= b:
                return tid
        return None
    return classify


def main(argv: list[str]) -> int:
    ap = argparse.ArgumentParser()
    ap.add_argument("oracle", type=Path)
    ap.add_argument("ours", type=Path)
    ap.add_argument("--coverage", type=Path, default=DEFAULT_COVERAGE)
    ap.add_argument("--limit", type=int, default=0,
                    help="stop after N compared records (0 = no limit)")
    ap.add_argument("--context", type=int, default=8,
                    help="records of matching history to print before a "
                         "divergence")
    ap.add_argument("--regs", choices=sorted(REG_SETS), default="abi",
                    help="which registers to compare (default abi)")
    ap.add_argument("--resync", type=int, default=4000,
                    help="how far to look ahead in the oracle to resynchronise "
                         "after a thread-interleaving difference (0 disables)")
    ap.add_argument("-v", "--verbose", action="count", default=0)
    a = ap.parse_args(argv)

    for p in (a.oracle, a.ours, a.coverage):
        if not p.exists():
            print(f"error: {p} missing", file=sys.stderr)
            return 2

    entries = load_entries(a.coverage)
    compare_regs = REG_SETS[a.regs]
    print(f"function entries : {len(entries):,}  (from {a.coverage.name})")
    print(f"registers        : {a.regs} "
          f"({', '.join('r' + str(i) for i in compare_regs)})")

    ranges, names = thread_stack_ranges(a.ours)
    classify = classifier(ranges)
    print(f"contexts         : {len(ranges)}")
    for t, (lo, hi) in sorted(ranges.items()):
        print(f"    t{t:<5} {lo:#010x}..{hi:#010x}  {names.get(t, '')}")

    oracle = OracleReplay(a.oracle, entries, classify)
    o_it = iter(oracle)
    m_it = read_ours(a.ours)

    # Per-thread queues of oracle records we have read but not yet consumed.
    pending: dict[int, list] = {}
    oracle_done = False
    unclassified = 0

    def next_oracle_for(tid: int):
        """The next oracle record belonging to `tid`, reading ahead as needed
        and parking other threads' records for later."""
        nonlocal oracle_done, unclassified
        q = pending.get(tid)
        if q:
            return q.pop(0)
        while not oracle_done:
            rec = next(o_it, None)
            if rec is None:
                oracle_done = True
                break
            other = classify(rec[1][29])
            if other is None:
                unclassified += 1
                continue
            if other == tid:
                return rec
            pending.setdefault(other, []).append(rec)
        return None

    history: list[str] = []
    compared = 0
    unknown_skipped = 0
    stale_skipped = 0

    m = None
    o = None
    while True:
        m = next(m_it, None)
        if m is None:
            break
        m_tid, m_pc, m_regs, m_line = m
        o = next_oracle_for(m_tid)
        if o is None:
            break

        o_pc, o_regs, o_line, fresh, owned = o
        compared += 1

        if o_pc != m_pc:
            print(f"\nDIVERGENCE at compared record {compared:,}: "
                  f"control flow on thread {m_tid}")
            for h in history[-a.context:]:
                print("   " + h)
            print(f"  oracle {a.oracle.name}:{o_line} enters {o_pc:#010x}")
            print(f"  ours   {a.ours.name}:{m_line} enters {m_pc:#010x}")
            return 1

        bad = []
        for i in compare_regs:
            if o_regs[i] == UNKNOWN:
                unknown_skipped += 1
                continue
            if i not in owned:            # another context wrote it last
                stale_skipped += 1
                continue
            if i in CALLER_SAVED and i not in fresh:
                stale_skipped += 1
                continue
            if o_regs[i] != m_regs[i]:
                bad.append(i)
        if bad:
            print(f"\nDIVERGENCE at compared record {compared:,}: registers "
                  f"on thread {m_tid}")
            for h in history[-a.context:]:
                print("   " + h)
            print(f"  at {o_pc:#010x}  (oracle line {o_line:,}, "
                  f"ours line {m_line:,})")
            print(f"  oracle $sp {o_regs[29]:#010x} -> context "
                  f"t{classify(o_regs[29])};  ours $sp {m_regs[29]:#010x}")
            for i in bad:
                print(f"    r{i:<2} oracle={o_regs[i]:#010x} "
                      f"ours={m_regs[i]:#010x} "
                      f"(delta {(m_regs[i] - o_regs[i]) & 0xFFFFFFFF:#010x})")
            return 1

        history.append(f"{compared:>8}  t{m_tid} {o_pc:#010x}")
        if a.verbose and compared % 1000 == 0:
            print(f"  ... {compared:,} records match "
                  f"(oracle line {o_line:,})")
        if a.limit and compared >= a.limit:
            break

    print(f"\ncompared         : {compared:,} function entries")
    print(f"oracle lines read: {oracle.lines:,}")
    print(f"unknown regs skipped (0xDEADBEEF in oracle): {unknown_skipped:,}")
    print(f"stale caller-saved regs skipped: {stale_skipped:,}")
    print(f"oracle records on threads we never ran: {unclassified:,}")
    print("oracle records read ahead and not consumed: "
          + ", ".join(f"t{t}={len(q):,}" for t, q in sorted(pending.items())
                      if q))
    if m is None:
        print("our trace ended first -- we stopped before the oracle did.")
    elif o is None:
        print(f"the oracle ran out of records for thread {m[0]} "
              f"-- it is shorter than our run on that thread")
    print("\nNO DIVERGENCE in the compared prefix")
    return 0


if __name__ == "__main__":
    raise SystemExit(main(sys.argv[1:]))
