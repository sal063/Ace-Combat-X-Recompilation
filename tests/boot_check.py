#!/usr/bin/env python3
"""
tests/boot_check.py -- run the recompiled module and record the boot trace.

RECOMP_PLAN milestone M3: "Generated C compiles & links; runs to first HLE
call." This runs the built executable against the relocated image and asserts
it gets there, then checks the trace against tests/golden/boot_trace.txt so a
regression in the recompiler shows up as a diff rather than as silence.

Regenerate the golden file with --update after an intentional change.
"""

from __future__ import annotations

import argparse
import subprocess
import sys
from pathlib import Path

ROOT = Path(__file__).resolve().parents[1]
EXE = ROOT / "build" / ("pspreco.exe" if sys.platform == "win32" else "pspreco")
IMAGE = ROOT / "generated" / "image.bin"
GOLDEN = ROOT / "tests" / "golden" / "boot_trace.txt"

# The first kernel call acepsp makes. Its argument is the toolchain version the
# title was built with: 0x02070010 == 2.7.0.16, which independently
# confirms docs/PLAN_DELTAS.md D5 -- this binary predates 6.6.0's
# renumbering of sceKernelSetCompiledSdkVersion from 7591C7DB to 358CA1BB.
EXPECT_FIRST_HLE = "sceKernelSetCompiledSdkVersion"
EXPECT_ARG = "sceKernelSetCompiledSdkVersion(0x02070010)"

# Phase 4 is partially landed: the boot now runs well past the first kernel
# call, into the C runtime's start-up. These are the milestones reached so
# far; each is a regression guard, not a claim that Phase 4 is finished.
EXPECT_MILESTONES = [
    ("compiler version is GCC 3.3.6",   "sceKernelSetCompilerVersion(0x00030306)"),
    ("initial thread created",          'sceKernelCreateThread("user_main"'),
    ("initial thread started",          "sceKernelStartThread(256"),
    ("scheduler entered",               "entering scheduler"),
    ("libc heap allocated",             '"UserSbrk"'),
    ("UMD mounted",                     "mounted UMD"),
    # _init/.ctors run: the thread bootstrap's `jal _init` at .text:0x314 used
    # to dispatch to nothing because .init was outside the recompiled region.
    ("C++ static constructors ran",     'sceKernelCreateCallback("ExitCallback"'),
    ("system params queried",           "sceUtilityGetSystemParamInt"),
    ("MainThread started",              'sceKernelCreateThread("MainThread"'),
    ("UMD activated",                   "sceUmdActivate"),
    ("LIBFONT.PRX resolved to HLE",     "sceKernelStartModule(275)"),
    ("audio channels reserved",         "sceAudioChReserve"),
    ("SAS synthesizer initialised",     "__sceSasInit"),
    ("SasCore thread started",          '"SasCore thread"'),
    ("vblank interrupt registered",     "sceKernelEnableSubIntr(intr=30"),
    ("display mode set",                "sceDisplaySetMode(mode=0, 480x272)"),
    ("raw-sector disc read",            "sce_lbn"),
    ("M4: GE display list submitted",   "sceGeListEnQueue"),
    ("frame buffer presented",          "sceDisplaySetFrameBuf"),
    ("reached the frame limit cleanly", "reached the 120-frame limit"),
    ("scheduler exited cleanly",        "scheduler idle after"),
]

# The game now runs a real frame loop, so the run has to be bounded. Bound it
# in EMULATED FRAMES, not wall time: how far a wall-clock-bounded run gets
# depends on how fast the host is, and a golden trace has to be reproducible.
# The watchdog stays as a backstop only.
BOOT_MAX_FRAMES = "120"
BOOT_WATCHDOG_SECONDS = "120"


# Lines that legitimately differ between hosts/runs: the UMD path the user
# passed, the build stamp, and the wall-clock FPS report.
_VOLATILE = ("[pspreco] mounted UMD:", "[pspreco] build ", "[fps] ")


def _normalise(text: str) -> str:
    return "\n".join(l for l in text.strip().splitlines()
                     if not l.startswith(_VOLATILE))


def main(argv: list[str]) -> int:
    ap = argparse.ArgumentParser()
    ap.add_argument("--update", action="store_true")
    a = ap.parse_args(argv)

    for p, how in ((EXE, "python build.py"),
                   (IMAGE, "python tools/prxload/prxload.py <ELF> "
                           "--emit-image generated/image.bin")):
        if not p.exists():
            print(f"error: {p} missing -- build it with: {how}", file=sys.stderr)
            return 2

    import os
    env = dict(os.environ,
               PSPRECO_MAX_FRAMES=BOOT_MAX_FRAMES,
               PSPRECO_WATCHDOG_S=BOOT_WATCHDOG_SECONDS)
    proc = subprocess.run([str(EXE), str(IMAGE)], capture_output=True,
                          text=True, encoding="utf-8", errors="replace",
                          timeout=300, env=env)
    trace = (proc.stdout or "") + (proc.stderr or "")
    print(trace.strip())

    fails = 0

    def chk(label: str, ok: bool) -> None:
        nonlocal fails
        if not ok:
            fails += 1
        print(f"{'ok  ' if ok else 'FAIL'}  {label}")

    print()
    chk("image loaded", "loaded" in trace)
    chk("entered the module", "entering module at 08804128" in trace)
    chk(f"reached first HLE call ({EXPECT_FIRST_HLE})",
        EXPECT_FIRST_HLE in trace)
    chk(f"first HLE argument is the toolchain version ({EXPECT_ARG})",
        EXPECT_ARG in trace)
    for label, needle in EXPECT_MILESTONES:
        chk(label, needle in trace)
    chk("no undecodable instruction executed",
        "UNIMPLEMENTED undecodable" not in trace)
    chk("no unimplemented VFPU reached",
        "UNIMPLEMENTED VFPU" not in trace)

    # Known open blocker, tracked in docs/PHASE4_STATUS.md. Assert it is still
    # the SAME blocker so a change of failure mode shows up as a diff.
    chk("no unimplemented HLE call reached",
        "UNIMPLEMENTED" not in trace)
    chk("the jal-0 blocker stays fixed",
        "UNKNOWN INDIRECT TARGET" not in trace)
    chk("the run was bounded by frames, not by the watchdog",
        "WATCHDOG" not in trace)

    GOLDEN.parent.mkdir(parents=True, exist_ok=True)
    if a.update or not GOLDEN.exists():
        GOLDEN.write_text(_normalise(trace) + "\n", encoding="utf-8")
        print(f"\nwrote {GOLDEN}")
    else:
        want = GOLDEN.read_text(encoding="utf-8")
        chk("boot trace matches tests/golden/boot_trace.txt",
            _normalise(want) == _normalise(trace))

    return 1 if fails else 0


if __name__ == "__main__":
    raise SystemExit(main(sys.argv[1:]))
