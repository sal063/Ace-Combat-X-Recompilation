#!/usr/bin/env python3
"""
tools/isotool -- read the game's UMD image from the host side.

RECOMP_PLAN §1.4 establishes that the disc is one EBOOT plus one 1.07 GB
archive; the runtime already mounts the ISO itself (runtime/hle/iso9660.c),
but the recompiler pipeline needs host-side access too: `sceKernelLoadModule`
loads USRDIR/LIBFONT.PRX from the disc, and that PRX has to be pulled out and
run through prxload/analyze/emit like the EBOOT.

ISO 9660 only -- no Joliet, no UDF. That is all a PSP UMD data track needs.
  * 2048-byte logical sectors
  * Primary Volume Descriptor at sector 16 (offset 0x8000), magic "CD001"
  * PVD+156 is the root directory record
  * a directory record is: len, ext_attr_len, LBA (both-endian), size
    (both-endian), 7-byte date, flags at +25, ..., name length at +32

Usage:
    python isotool.py IMAGE.iso --list
    python isotool.py IMAGE.iso --extract /PSP_GAME/USRDIR/LIBFONT.PRX OUT
"""

from __future__ import annotations

import argparse
import struct
import sys
from dataclasses import dataclass
from pathlib import Path

SECTOR = 2048
PVD_SECTOR = 16
FLAG_DIRECTORY = 0x02


@dataclass
class Entry:
    name: str
    lba: int
    size: int
    is_dir: bool


class Iso:
    def __init__(self, path: Path):
        self.fh = path.open("rb")
        self.fh.seek(PVD_SECTOR * SECTOR)
        pvd = self.fh.read(SECTOR)
        if pvd[1:6] != b"CD001":
            raise SystemExit(f"{path}: no ISO 9660 primary volume descriptor")
        self.volume = pvd[40:72].decode("ascii", "replace").strip()
        self.root = self._record(pvd, 156)[0]

    def sector(self, lba: int, count: int = 1) -> bytes:
        self.fh.seek(lba * SECTOR)
        return self.fh.read(count * SECTOR)

    @staticmethod
    def _record(buf: bytes, off: int) -> tuple[Entry | None, int]:
        ln = buf[off]
        if ln == 0:
            return None, 0
        lba = struct.unpack_from("<I", buf, off + 2)[0]
        size = struct.unpack_from("<I", buf, off + 10)[0]
        flags = buf[off + 25]
        nlen = buf[off + 32]
        raw = buf[off + 33:off + 33 + nlen]
        if nlen == 1 and raw in (b"\x00", b"\x01"):
            name = "." if raw == b"\x00" else ".."
        else:
            name = raw.decode("ascii", "replace").split(";")[0]
        return Entry(name, lba, size, bool(flags & FLAG_DIRECTORY)), ln

    def listdir(self, d: Entry) -> list[Entry]:
        data = self.sector(d.lba, (d.size + SECTOR - 1) // SECTOR)
        out: list[Entry] = []
        off = 0
        while off < d.size:
            if off % SECTOR > SECTOR - 33:      # padding to the next sector
                off = (off // SECTOR + 1) * SECTOR
                continue
            e, ln = self._record(data, off)
            if e is None:                        # rest of the sector is pad
                off = (off // SECTOR + 1) * SECTOR
                continue
            if e.name not in (".", ".."):
                out.append(e)
            off += ln
        return out

    def find(self, path: str) -> Entry | None:
        cur = self.root
        for part in [p for p in path.replace("\\", "/").split("/") if p]:
            nxt = None
            for e in self.listdir(cur):
                if e.name.upper() == part.upper():
                    nxt = e
                    break
            if nxt is None:
                return None
            cur = nxt
        return cur

    def read(self, e: Entry) -> bytes:
        return self.sector(e.lba, (e.size + SECTOR - 1) // SECTOR)[:e.size]

    def walk(self, d: Entry, prefix: str = ""):
        for e in sorted(self.listdir(d), key=lambda x: x.name):
            p = f"{prefix}/{e.name}"
            yield p, e
            if e.is_dir:
                yield from self.walk(e, p)


def main(argv: list[str]) -> int:
    ap = argparse.ArgumentParser()
    ap.add_argument("iso", type=Path)
    ap.add_argument("--list", action="store_true")
    ap.add_argument("--extract", nargs=2, metavar=("PATH", "OUT"))
    a = ap.parse_args(argv)

    iso = Iso(a.iso)
    print(f"volume: {iso.volume}")

    if a.list:
        for p, e in iso.walk(iso.root):
            kind = "dir " if e.is_dir else "file"
            print(f"  {kind} {e.size:>12,}  lba={e.lba:<8} {p}")

    if a.extract:
        src, dst = a.extract
        e = iso.find(src)
        if e is None or e.is_dir:
            print(f"error: {src} not found on the disc", file=sys.stderr)
            return 1
        data = iso.read(e)
        Path(dst).parent.mkdir(parents=True, exist_ok=True)
        Path(dst).write_bytes(data)
        print(f"wrote {dst} ({len(data):,} B)  magic={data[:4]!r}")
    return 0


if __name__ == "__main__":
    raise SystemExit(main(sys.argv[1:]))
