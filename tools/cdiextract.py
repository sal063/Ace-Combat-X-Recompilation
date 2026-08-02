#!/usr/bin/env python3
"""cdiextract.py -- unpack REGFILE.CDI into named assets the game can run from.

    python tools/cdiextract.py game            (game/ = an extracted disc)

Writes game/cdi/ : one file per asset, under its real name, plus cdi.manifest.
Once that exists the runtime reads assets from it instead of the archive, so
editing an asset is editing a file.

THE FORMAT
----------
`RGF.` container. 0x20-byte header, then a flat depth-first array of 0x30-byte
entries:

    +0x00  char[10]  name
    +0x0a  u16       depth (0 = root, so the path is a stack over this)
    +0x26  u16       child count
    +0x28  u32       offset, absolute within the CDI
    +0x2c  u32       size

Header: `RGF.`, +0x04 total size, +0x08 end of the indexed region,
+0x0c entry count.

For this disc: 1803 entries, 1783 with data, covering 0x20000..0x14c10800
contiguously with no overlaps and no gaps, every size a multiple of 2048.

WHAT THE TABLE DOES NOT COVER, WHICH IS MOST OF IT
--------------------------------------------------
The indexed region ends at 0x14c10800 and the file runs to 0x3fd85000 -- the
last 722 MB, 67% of the archive, is streamed audio (`NPSF`) and movies
(`PSMF`), indexed some other way and read by absolute sector. An extractor that
walked only the entry table would silently drop two thirds of the game.

So the manifest describes EVERY byte: the table region, the named assets, and
the unindexed tail as one blob. Nothing is inferred at load time and nothing is
lost, which is what lets the archive itself be deleted afterwards.
"""

from __future__ import annotations

import argparse
import struct
import sys
from pathlib import Path

ENTRY = 0x30
HDR = 0x20
CHUNK = 1 << 22


def parse_entries(head: bytes):
    if head[:4] != b"RGF.":
        raise ValueError(f"not an RGF container (magic {head[:4]!r})")
    total, indexed_end, count = struct.unpack_from("<III", head, 4)
    out = []
    stack: dict[int, str] = {}
    for i in range(count):
        o = HDR + i * ENTRY
        e = head[o:o + ENTRY]
        if len(e) < ENTRY:
            raise ValueError(f"entry {i} runs past the table")
        name = e[:10].split(b"\0")[0].decode("latin-1")
        depth = struct.unpack_from("<H", e, 0x0a)[0]
        off, size = struct.unpack_from("<II", e, 0x28)
        stack[depth] = name
        path = "/".join(stack[k] for k in sorted(stack) if k <= depth)
        out.append((off, size, path))
    return total, indexed_end, out


def main(argv: list[str]) -> int:
    ap = argparse.ArgumentParser(description=__doc__,
                                 formatter_class=argparse.RawDescriptionHelpFormatter)
    ap.add_argument("discdir", type=Path,
                    help="a disc directory made by tools/isoextract.py")
    ap.add_argument("--out", type=Path, default=None,
                    help="where to write (default: <discdir>/cdi)")
    ap.add_argument("--list", action="store_true", help="show and write nothing")
    a = ap.parse_args(argv)

    rel = "PSP_GAME/USRDIR/REGFILE.CDI"
    cdi = a.discdir / rel
    if not cdi.is_file():
        print(f"error: {cdi} not found -- point this at a directory made by "
              f"tools/isoextract.py", file=sys.stderr)
        return 2

    size_on_disk = cdi.stat().st_size
    with cdi.open("rb") as fp:
        head = fp.read(0x20000)
        try:
            total, indexed_end, ents = parse_entries(head)
        except ValueError as e:
            print(f"error: {e}", file=sys.stderr)
            return 2

        if total != size_on_disk:
            print(f"warning: header says {total:,} bytes, file is "
                  f"{size_on_disk:,}", file=sys.stderr)

        data = [(o, s, p) for o, s, p in ents if s > 0]
        data.sort()
        print(f"{len(ents)} entries, {len(data)} with data")
        print(f"indexed region ends at {indexed_end:#x}, "
              f"file is {size_on_disk:#x}")

        # Regions covering every byte: the table, the assets, the tail.
        first = data[0][0] if data else indexed_end
        regions: list[tuple[int, int, str]] = [(0, first, "_raw/table.bin")]
        regions += [(o, s, p + ".bin") for o, s, p in data]
        if indexed_end < size_on_disk:
            regions.append((indexed_end, size_on_disk - indexed_end,
                            "_raw/streams.bin"))

        # A gap would mean bytes with no home, and the archive could then not
        # be rebuilt or deleted. Refuse rather than lose them.
        pos = 0
        for off, sz, path in regions:
            if off != pos:
                print(f"error: {off - pos} bytes unaccounted for at {pos:#x} "
                      f"-- refusing to extract", file=sys.stderr)
                return 3
            pos = off + sz
        if pos != size_on_disk:
            print(f"error: regions cover {pos:#x}, file is {size_on_disk:#x}",
                  file=sys.stderr)
            return 3
        print(f"{len(regions)} regions cover all {size_on_disk:,} bytes")

        if a.list:
            for off, sz, path in regions[:20]:
                print(f"  {off:9x} {sz:11,}  {path}")
            print(f"  ... {len(regions)} total")
            return 0

        out = a.out or (a.discdir / "cdi")
        out.mkdir(parents=True, exist_ok=True)
        for i, (off, sz, path) in enumerate(regions):
            dest = out / path
            dest.parent.mkdir(parents=True, exist_ok=True)
            fp.seek(off)
            left = sz
            with dest.open("wb") as w:
                while left > 0:
                    b = fp.read(min(CHUNK, left))
                    if not b:
                        print(f"error: {path} ends early", file=sys.stderr)
                        return 3
                    w.write(b)
                    left -= len(b)
            if i % 200 == 0 or sz > (32 << 20):
                print(f"  {off:9x} {sz:11,}  {path}")

        man = out / "cdi.manifest"
        with man.open("w", encoding="utf-8", newline="\n") as m:
            m.write("# pspreco cdi manifest v1\n")
            m.write("#\n")
            m.write("# Regions of the archive this replaces, covering every\n")
            m.write("# byte of it. Offsets are absolute inside the archive.\n")
            m.write("#\n")
            m.write("# A file may be any size. Edit it, then run\n")
            m.write("#     python tools/acxreindex.py apply <discdir>\n")
            m.write("# which re-lays out the archive and rewrites this file,\n")
            m.write("# _raw/table.bin and disc.manifest together. All three\n")
            m.write("# have to agree, so do not edit one of them by hand.\n")
            m.write("#\n")
            m.write(f"source {rel}\n")
            m.write(f"size {size_on_disk}\n")
            m.write("# <offset hex> <size decimal> <path under this directory>\n")
            for off, sz, path in regions:
                m.write(f"{off:x} {sz} {path}\n")

    print(f"\nwrote {man}")
    print(f"{len(regions)} files under {out}")
    print("\nThe game now reads assets from there. Edit one and it takes")
    print("effect on the next run -- keep the file the same size.")
    print(f"\n{rel} is no longer read and can be deleted to save "
          f"{size_on_disk/1e9:.2f} GB.")
    return 0


if __name__ == "__main__":
    raise SystemExit(main(sys.argv[1:]))
