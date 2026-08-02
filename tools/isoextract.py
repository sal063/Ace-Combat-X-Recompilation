#!/usr/bin/env python3
"""isoextract.py -- unpack a PSP ISO into a directory the runtime can mount.

    python tools/isoextract.py "Ace Combat X.iso" game/

Writes the files, and `disc.manifest` beside them.

The manifest is the point. Ace Combat X opens its data by ABSOLUTE DISC SECTOR
(`disc0:/sce_lbn<lba>_size<bytes>`) and never by name, so a bare directory of
extracted files cannot serve it -- extraction throws away the one fact the game
depends on. The manifest records each file's original LBA, which is what lets
runtime/hle/iso9660.c answer a sector read out of a directory.

Format, one line per file, `#` for comments:

    <lba hex> <size decimal> <disc-relative path>

Hand-editable on purpose. If a modded file changes size, only its own line
needs to change; nothing is relocated, because the game addresses everything
from the original LBAs.
"""

from __future__ import annotations

import argparse
import struct
import sys
from pathlib import Path

SECTOR = 2048


def read_sector(fp, lba: int, count: int = 1) -> bytes:
    fp.seek(lba * SECTOR)
    return fp.read(SECTOR * count)


def walk(fp, extent: int, size: int, prefix: str, out: list):
    """Collect (lba, size, path) for every file under one directory extent."""
    fp.seek(extent * SECTOR)
    buf = fp.read(size)
    pos = 0
    while pos < size:
        length = buf[pos]
        if length == 0:
            # Directory records never straddle a sector; skip the padding.
            pos = ((pos // SECTOR) + 1) * SECTOR
            continue
        rec = buf[pos:pos + length]
        if len(rec) < 33:
            break
        child_extent = struct.unpack_from("<I", rec, 2)[0]
        child_size = struct.unpack_from("<I", rec, 10)[0]
        flags = rec[25]
        name_len = rec[32]
        name = rec[33:33 + name_len]
        pos += length
        # "\x00" and "\x01" are the . and .. entries.
        if name_len == 1 and name in (b"\x00", b"\x01"):
            continue
        nm = name.decode("latin-1").split(";")[0]
        path = f"{prefix}/{nm}" if prefix else nm
        if flags & 0x02:
            walk(fp, child_extent, child_size, path, out)
        else:
            out.append((child_extent, child_size, path))


def main(argv: list[str]) -> int:
    ap = argparse.ArgumentParser(description=__doc__,
                                 formatter_class=argparse.RawDescriptionHelpFormatter)
    ap.add_argument("iso", type=Path)
    ap.add_argument("outdir", type=Path, nargs="?",
                    help="where to extract (not needed with --list)")
    ap.add_argument("--list", action="store_true",
                    help="show the layout and write nothing")
    a = ap.parse_args(argv)

    if not a.iso.is_file():
        print(f"error: no such file: {a.iso}", file=sys.stderr)
        return 2
    if not a.list and a.outdir is None:
        ap.error("outdir is required unless --list is given")

    with a.iso.open("rb") as fp:
        pvd = read_sector(fp, 16)
        if pvd[0] != 1 or pvd[1:6] != b"CD001":
            print(f"error: {a.iso} has no ISO9660 primary volume descriptor "
                  f"at sector 16 -- is it really a disc image?", file=sys.stderr)
            return 2
        root = pvd[156:156 + 34]
        root_extent = struct.unpack_from("<I", root, 2)[0]
        root_size = struct.unpack_from("<I", root, 10)[0]

        files: list[tuple[int, int, str]] = []
        walk(fp, root_extent, root_size, "", files)
        files.sort()

        if a.list:
            print(f"{'lba':>8} {'size':>14}  path")
            for lba, size, path in files:
                print(f"{lba:8x} {size:14,}  {path}")
            print(f"\n{len(files)} files")
            return 0

        a.outdir.mkdir(parents=True, exist_ok=True)
        total = 0
        for lba, size, path in files:
            dest = a.outdir / path
            dest.parent.mkdir(parents=True, exist_ok=True)
            fp.seek(lba * SECTOR)
            remaining = size
            with dest.open("wb") as out:
                while remaining > 0:
                    chunk = fp.read(min(1 << 20, remaining))
                    if not chunk:
                        print(f"error: {path} ends early -- the image is "
                              f"truncated", file=sys.stderr)
                        return 3
                    out.write(chunk)
                    remaining -= len(chunk)
            total += size
            print(f"  {size:14,}  {path}")

        manifest = a.outdir / "disc.manifest"
        with manifest.open("w", encoding="utf-8", newline="\n") as m:
            m.write("# pspreco disc manifest v1\n")
            m.write(f"# extracted from {a.iso.name}\n")
            m.write("#\n")
            m.write("# The game reads its data by absolute disc sector, not by\n")
            m.write("# name, so these LBAs are load-bearing: they are how a\n")
            m.write("# sector read is turned back into a file. Do not renumber.\n")
            m.write("#\n")
            # The image is padded past the end of its last file. Nothing can
            # infer that from the extracted tree, and it is what range-checks
            # a raw sector path, so write it down.
            m.write(f"image-size {a.iso.stat().st_size}\n")
            m.write("# <lba hex> <size decimal> <disc-relative path>\n")
            for lba, size, path in files:
                m.write(f"{lba:x} {size} {path}\n")

    print(f"\n{len(files)} files, {total:,} bytes -> {a.outdir}")
    print(f"wrote {manifest}")
    print(f"\nRun it with:  pspreco-sdl3.exe data\\image.bin {a.outdir}")
    return 0


if __name__ == "__main__":
    raise SystemExit(main(sys.argv[1:]))
