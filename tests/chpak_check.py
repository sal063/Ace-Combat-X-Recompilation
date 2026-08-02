#!/usr/bin/env python3
"""chpak_check.py -- the CHPAK archives inflate, and would not if the volatile
block were disturbed.

    python tests/chpak_check.py "path\\to\\Ace Combat X.iso"

Missions load by staging a CHPAK archive in the 4 MB volatile block
(sceKernelVolatileMemLock, 0x08400000) and running the game's own zlib pump
over it. That pump leaves its loop only on Z_STREAM_END, so one wrong byte in
a staged archive hangs the loading screen forever rather than failing.

This runs every MS00_*CA archive on the disc through the recompiled guest zlib
twice:

  * untouched -- every member must reach Z_STREAM_END with total_out equal to
    the declared uncompressed size, and the same bytes host zlib produces;

  * with 0x08700000..0x08701000 overwritten -- the interrupt stack used to live
    there, three megabytes into the block, so a vblank frame landed in the
    middle of any archive over 3 MB. Every archive larger than 0x300000 must
    fail here and every smaller one must survive. That is the regression: if a
    future change puts something back inside the volatile block, the first list
    grows and this test says so.

Needs `python build.py` to have been run (it uses the objects in build/obj) and
clang on PATH.
"""

from __future__ import annotations

import struct
import subprocess
import sys
import tempfile
from pathlib import Path

ROOT = Path(__file__).resolve().parent.parent
OBJ = ROOT / "build" / "obj"
EXE = ROOT / "build" / "chpak_inflate.exe"

INTR_OLD_BASE = 0x08700000
INTR_OLD_SIZE = 0x1000
VME_BASE = 0x08400000
CUTOFF = INTR_OLD_BASE - VME_BASE            # 0x300000


# ---- ISO 9660 ------------------------------------------------------------

def iso_find(fp, path: str) -> tuple[int, int]:
    fp.seek(16 * 2048)
    pvd = fp.read(2048)
    if pvd[1:6] != b"CD001":
        raise SystemExit("not an ISO 9660 image (no CD001 at sector 16)")
    root = pvd[156:156 + 34]
    lba = struct.unpack_from("<I", root, 2)[0]
    size = struct.unpack_from("<I", root, 10)[0]
    for part in path.split("/"):
        fp.seek(lba * 2048)
        data = fp.read(size)
        i = 0
        found = None
        while i < len(data):
            ln = data[i]
            if ln == 0:
                i = (i // 2048 + 1) * 2048
                continue
            e = data[i:i + ln]
            nlen = e[32]
            name = e[33:33 + nlen].split(b";")[0].decode("latin-1")
            if name.upper() == part.upper():
                found = (struct.unpack_from("<I", e, 2)[0],
                         struct.unpack_from("<I", e, 10)[0])
                break
            i += ln
        if not found:
            raise SystemExit(f"{path}: no {part} on this disc")
        lba, size = found
    return lba, size


def rgf_entries(head: bytes):
    if head[:4] != b"RGF.":
        raise SystemExit("REGFILE.CDI is not an RGF container")
    count = struct.unpack_from("<I", head, 0x0c)[0]
    for i in range(count):
        o = 0x20 + i * 0x30
        e = head[o:o + 0x30]
        name = e[:10].split(b"\0")[0].decode("latin-1")
        off, size = struct.unpack_from("<II", e, 0x28)
        yield i, name, off, size


# ---- the harness ---------------------------------------------------------

def build_harness() -> None:
    objs = sorted(p for p in OBJ.glob("*.o") if p.name != "main.o")
    if not objs:
        raise SystemExit(f"{OBJ} is empty -- run `python build.py` first")
    obj = ROOT / "build" / "chpak.o"
    cc = ["clang", "-std=c11", "-O2", "-ffp-contract=off",
          "-fno-strict-aliasing", "-I", "runtime/cpu", "-I", "generated",
          "-I", "runtime/hle", "-I", "runtime/gpu", "-D_CRT_SECURE_NO_WARNINGS",
          "-c", "tests/chpak_inflate.c", "-o", str(obj)]
    subprocess.run(cc, cwd=ROOT, check=True)
    ld = (["clang", "-O2", str(obj)] + [str(p) for p in objs]
          + ["-o", str(EXE)])
    if sys.platform == "win32":
        ld += ["-lwinmm", "-luser32", "-lmfplat", "-lmfuuid", "-lole32"]
    subprocess.run(ld, cwd=ROOT, check=True)


def run(archive: Path, clobber: bool) -> bool:
    cmd = [str(EXE), str(archive)]
    if clobber:
        cmd += [f"{INTR_OLD_BASE:x}", f"{INTR_OLD_SIZE:x}"]
    r = subprocess.run(cmd, cwd=ROOT, capture_output=True, text=True)
    if r.returncode not in (0, 3):
        sys.stdout.write(r.stdout)
        sys.stderr.write(r.stderr)
        raise SystemExit(f"chpak_inflate failed ({r.returncode})")
    return r.returncode == 0


def main(argv: list[str]) -> int:
    if len(argv) != 1:
        print(__doc__)
        return 2
    iso = Path(argv[0])
    if not iso.is_file():
        print(f"error: {iso} not found", file=sys.stderr)
        return 2

    print("building tests/chpak_inflate.c")
    build_harness()

    with iso.open("rb") as fp:
        clba, _ = iso_find(fp, "PSP_GAME/USRDIR/REGFILE.CDI")
        fp.seek(clba * 2048)
        head = fp.read(0x20000)
        want = [(n, o, s) for _, n, o, s in rgf_entries(head)
                if n.startswith("MS00_") and n.endswith("CA") and s]
        want.sort(key=lambda t: t[2])
        print(f"REGFILE.CDI at LBA {clba:#x}, {len(want)} mission archives")

        bad = []
        with tempfile.TemporaryDirectory() as td:
            tmp = Path(td) / "a.bin"
            for name, off, size in want:
                fp.seek(clba * 2048 + off)
                tmp.write_bytes(fp.read(size))

                ok = run(tmp, clobber=False)
                hurt = not run(tmp, clobber=True)
                expect_hurt = size > CUTOFF
                verdict = "ok" if (ok and hurt == expect_hurt) else "FAIL"
                if verdict == "FAIL":
                    bad.append(name)
                print(f"  {name:10s} {size:#09x}  inflates={'y' if ok else 'N'}"
                      f"  clobber-sensitive={'y' if hurt else 'n'}"
                      f" (expected {'y' if expect_hurt else 'n'})  {verdict}")

    if bad:
        print(f"\nFAIL: {len(bad)} archive(s) wrong: {', '.join(bad)}")
        return 1
    print(f"\nOK: all {len(want)} archives inflate; only the ones crossing "
          f"{CUTOFF:#x} care about the old interrupt-stack window")
    return 0


if __name__ == "__main__":
    raise SystemExit(main(sys.argv[1:]))
