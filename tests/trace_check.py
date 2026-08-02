#!/usr/bin/env python3
"""
tests/trace_check.py -- RECOMP_PLAN Phase 9.1 as a standing gate.

Builds the tracing variant of the runtime, runs it, and diffs its
function-entry trace against a PPSSPP instruction trace of the same title.
Any recompiler or HLE regression shows up here as a divergence at a named
address instead of as a mysterious hang thousands of calls later.

The oracle is a large external file and is not part of the repo. Point
PSPRECO_ORACLE_TRACE at it, or drop it at the default path below. Without it
the gate reports SKIP rather than failing: a missing oracle is not a defect in
pspreco.
"""

from __future__ import annotations

import os
import subprocess
import sys
from pathlib import Path

ROOT = Path(__file__).resolve().parents[1]
PY = sys.executable

DEFAULT_ORACLE = Path(
    os.environ.get("PSPRECO_ORACLE_TRACE",
                   r"C:\ext\PSP_recomp\PSP_recomp\build\oracle\acx\o.trace"))
IMAGE = ROOT / "generated" / "image.bin"
OURS = ROOT / "generated" / "pspreco.trace"
EXE = ROOT / "build" / ("pspreco-trace.exe" if sys.platform == "win32"
                        else "pspreco-trace")

# How much of the run is verified against hardware. The gate compares only
# this prefix, because past it the two runs part company for a reason the
# comparison cannot see through: MainThread polls a flag that the loader
# thread sets when a disc read completes, and our modelled UMD latency is not
# hardware's, so the two escape the poll on different frames. That is a
# timing difference, not a defect -- see docs/PHASE4_STATUS.md, "The limit of
# the oracle".
#
# Both numbers ratchet UP. Lowering either means a regression, and needs a
# note in docs/PHASE4_STATUS.md saying why.
VERIFIED_PREFIX = 48_000
MIN_MATCHING_RECORDS = 48_000

# Frames of emulated time to run. Enough to cover the verified prefix with
# room to spare, and reproducible -- unlike a wall-clock bound.
TRACE_MAX_FRAMES = "40"


def run(cmd: list[str]) -> subprocess.CompletedProcess:
    return subprocess.run(cmd, capture_output=True, text=True,
                          encoding="utf-8", errors="replace")


def main() -> int:
    if not DEFAULT_ORACLE.exists():
        print(f"SKIP  no oracle trace at {DEFAULT_ORACLE}")
        print("      set PSPRECO_ORACLE_TRACE to a PPSSPP trace of ULUS10176")
        return 0
    if not IMAGE.exists():
        print(f"FAIL  {IMAGE} missing -- run tools/prxload/prxload.py "
              f"--emit-image first")
        return 1

    p = run([PY, str(ROOT / "build.py"), "--trace", "--warnings-as-errors"])
    if p.returncode != 0:
        print("FAIL  the tracing build did not compile")
        print(p.stdout[-4000:] + p.stderr[-4000:])
        return 1

    # Bound both the run and the log: the guest currently ends in a busy-wait
    # that would otherwise fill the disk with identical records.
    env = dict(os.environ,
               PSPRECO_TRACE_FILE=str(OURS),
               PSPRECO_MAX_FRAMES=TRACE_MAX_FRAMES,
               PSPRECO_WATCHDOG_S="120",
               PSPRECO_TRACE_MAX=str(VERIFIED_PREFIX * 2))
    subprocess.run([str(EXE), str(IMAGE)], capture_output=True, text=True,
                   encoding="utf-8", errors="replace", env=env, timeout=600)
    if not OURS.exists():
        print("FAIL  the traced run produced no trace")
        return 1

    p = run([PY, str(ROOT / "tools/tracecmp/tracecmp.py"),
             str(DEFAULT_ORACLE), str(OURS),
             "--limit", str(VERIFIED_PREFIX)])
    out = p.stdout + p.stderr
    print(out.strip())

    # "DIVERGENCE at" -- not the success line, "NO DIVERGENCE in the ...".
    if "DIVERGENCE at" in out:
        print("\nFAIL  our execution diverges from hardware")
        return 1

    matched = 0
    for line in out.splitlines():
        if line.startswith("compared"):
            matched = int(line.split(":")[1].strip().split()[0].replace(",", ""))
    ok = matched >= MIN_MATCHING_RECORDS
    print(f"\n{'ok  ' if ok else 'FAIL'}  {matched:,} function entries match "
          f"the oracle (floor {MIN_MATCHING_RECORDS:,})")
    return 0 if ok else 1


if __name__ == "__main__":
    raise SystemExit(main())
