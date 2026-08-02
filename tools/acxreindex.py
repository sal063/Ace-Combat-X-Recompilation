#!/usr/bin/env python3
"""acxreindex.py -- rewrite the game's index so assets can change size.

    python tools/acxreindex.py verify  game
    python tools/acxreindex.py plan    game
    python tools/acxreindex.py apply   game
    python tools/acxreindex.py extract game MAIN/MENU.bin BR_GRAPH.CSD out.csd
    python tools/acxreindex.py replace game MAIN/MENU.bin BR_GRAPH.CSD new.csd
    python tools/acxreindex.py add     game MAIN/MENU.bin MYSTUFF.PDW mine.pdw
    python tools/acxreindex.py remove  game MAIN/MENU.bin BR_MAP00.CSD

WHY THIS EXISTS
---------------
The game never opens a file by name. It reads absolute disc sectors, and the
name -> sector step is an index baked into the data: `_raw/table.bin`, the
first 128 KB of REGFILE.CDI. Every asset's position is written down there, so
until now an edited asset had to keep its exact byte length -- one byte longer
and everything after it moved while the index still described the old disc.

Nothing about that is fundamental. The index is data. This rewrites it.

`apply` reads the region files as they now are on disk, lays them back out end
to end at sector alignment, and writes the new positions into all three places
that record them:

    game/cdi/_raw/table.bin   the game's own index   (offset +40, size +44)
    game/cdi/cdi.manifest     the emulator's archive map
    game/disc.manifest        the archive's own length, and the image length

After that a region may be any size. Edit an asset, run `apply`, play.

WHAT STILL CANNOT MOVE
----------------------
Three things are wired into the executable rather than the data, and this tool
checks all three rather than letting them fail as a frozen loading screen:

  * The index is read as exactly 0x20000 bytes at archive offset 0
    (sub_1D3314). So `_raw/table.bin` stays first, stays 131,072 bytes, and
    holds at most (0x20000 - 32) / 48 = 2730 entries.
  * Regions are read with `disc0:/sce_lbn0x%X_size0x%X` built from
    offset / 2048 (CDI_ReadByLBN), so every region offset must be
    sector-aligned. That is why regions are padded up to 2048 here.
  * A region is memcpy'd into the 4 MB volatile block at 0x08400000, whose top
    64 KB is reserved (sub_1D1EE0), so a region above 4,128,768 bytes is
    refused. Compressed chunks inflate outside it and are only warned about.

`_raw/streams.bin` stays last: header +0x08 is its offset and the streamed
audio and movies (`.NPS`, `.PMF`) are addressed relative to it.
"""

from __future__ import annotations

import argparse
import struct
import sys
import zlib
from pathlib import Path

SECTOR = 2048
HDR = 0x20                      # RGF. header length
ENTRY = 0x30                    # index entry stride
CHUNK_HDR = 0x10
TERM = b"STED"
INDEX_BYTES = 0x20000           # sub_1D3314 reads exactly this at offset 0
MAX_ENTRIES = (INDEX_BYTES - HDR) // ENTRY      # 2730
VOLATILE = 4 << 20              # sceKernelVolatileMemLock: 4 MB at 0x08400000
VOLATILE_RESERVED = 0x10000     # sub_1D1EE0 keeps the top 64 KB
REGION_MAX = VOLATILE - VOLATILE_RESERVED
RID_DONTCARE = 0x3FFF           # what 1,498 stock chunks already use

TABLE = "_raw/table.bin"
STREAMS = "_raw/streams.bin"
REGFILE = "PSP_GAME/USRDIR/REGFILE.CDI"

# byte 0x0D of a chunk header, precomputed from the extension by the game's own
# CDI_RegisterResource_entry24 and baked in ahead of time.
RTYPE = {"MDZ": 0, "PMD": 0, "HIT": 0, "IMG": 1, "PDW": 1}


def align(n, to=SECTOR):
    return (n + to - 1) // to * to


class Fail(Exception):
    """Something that would produce a frozen loading screen. Say so and stop."""


# --------------------------------------------------------------------------
# chunk container
#
# A region is a flat chain: 16-byte header, then a body of [u32 size][payload]
# where size counts itself, so the next chunk is at start + 16 + size. The
# chain ends with a header whose name is `STED`.
# --------------------------------------------------------------------------

class Chunk:
    __slots__ = ("head", "body")

    def __init__(self, head, body):
        self.head = bytes(head)     # 16 bytes, exactly as on disk
        self.body = bytes(body)     # size bytes, starting with that size

    @property
    def name(self):
        return self.head[:13].split(b"\0")[0].decode("latin-1")

    @property
    def rtype(self):
        return self.head[13]

    @property
    def rid(self):
        return struct.unpack_from("<H", self.head, 14)[0]

    @property
    def compressed(self):
        return self.body[4:8] == b"DEF."

    def payload(self):
        """The asset as the game registers it: past the size dword, inflated."""
        if self.compressed:
            csize, dsize = struct.unpack_from("<II", self.body, 8)
            out = zlib.decompress(self.body[0x14:0x14 + csize])
            if len(out) != dsize:
                raise Fail(f"{self.name} inflates to {len(out)}, its header "
                           f"says {dsize}")
            return out
        return self.body[4:]

    def raw(self):
        return self.head + self.body


def walk(data, region=""):
    """The chunks of one region, plus whatever follows the last one.

    Returns (chunks, tail). `tail` is everything from the STED header on: the
    16-byte terminator and then the zero padding up to the sector boundary,
    which every one of the 1,782 stock regions has and which `build_region`
    drops so it does not accumulate across edits.
    """
    chunks, off = [], 0
    while off + CHUNK_HDR <= len(data):
        head = data[off:off + CHUNK_HDR]
        name = head[:13].split(b"\0")[0]
        if name.startswith(TERM) or not name:
            break
        if off + CHUNK_HDR + 4 > len(data):
            break
        size = struct.unpack_from("<I", data, off + CHUNK_HDR)[0]
        if size < 4 or off + CHUNK_HDR + size > len(data):
            break
        chunks.append(Chunk(head, data[off + CHUNK_HDR:off + CHUNK_HDR + size]))
        off += CHUNK_HDR + size
    return chunks, data[off:]


def build_body(payload, compress, level=9):
    """[u32 size][payload], padded so size is a multiple of 16."""
    if compress:
        z = zlib.compress(payload, level)
        inner = b"DEF." + struct.pack("<III", len(z), len(payload), 0) + z
    else:
        inner = payload
    inner += b"\0" * (-(4 + len(inner)) % 16)
    return struct.pack("<I", 4 + len(inner)) + inner


def build_region(chunks, tail):
    """Re-emit a region: its chunks, then the terminator, and nothing after.

    The sector padding a region carries is left off here and put back by
    `apply`, which is the only part that knows where the sector boundary now
    is. Carrying it through instead would grow the region by a sector on every
    edit, since the padding walks into the next tail each time.
    """
    end = tail[:CHUNK_HDR] if tail[:4] == TERM else (TERM + b"\0" * 12)
    if any(tail[CHUNK_HDR:]):
        end = tail                  # not padding after all; keep it verbatim
    out = bytearray()
    for c in chunks:
        out += c.raw()
    return bytes(out + end)


# --------------------------------------------------------------------------
# manifests
# --------------------------------------------------------------------------

def _is_hex(s):
    return s and all(c in "0123456789abcdefABCDEF" for c in s)


class DiscManifest:
    """game/disc.manifest, edited in place so its comments survive."""

    def __init__(self, path):
        self.path = Path(path)
        if not self.path.is_file():
            raise Fail(f"{self.path} is not there -- point this at a directory "
                       f"made by tools/isoextract.py")
        self.lines = self.path.read_text(encoding="utf-8").splitlines()
        self.image_size = None
        self.image_line = None
        self.files = []                  # [line_no, lba, size, rel]
        for i, line in enumerate(self.lines):
            s = line.strip()
            if not s or s.startswith("#"):
                continue
            if s.startswith("image-size"):
                self.image_size = int(s.split()[1])
                self.image_line = i
                continue
            parts = s.split(None, 2)
            if len(parts) == 3 and _is_hex(parts[0]):
                self.files.append([i, int(parts[0], 16), int(parts[1]),
                                   parts[2].strip()])
        if not self.files:
            raise Fail(f"{self.path} lists no files")

    def find(self, rel):
        key = rel.replace("\\", "/").upper()
        for f in self.files:
            if f[3].replace("\\", "/").upper() == key:
                return f
        return None

    def write(self, regfile_size, image_size):
        f = self.find(REGFILE)
        f[2] = regfile_size
        self.lines[f[0]] = f"{f[1]:x} {f[2]} {f[3]}"
        if self.image_line is None:
            self.lines.insert(0, f"image-size {image_size}")
        else:
            self.lines[self.image_line] = f"image-size {image_size}"
        self.path.write_text("\n".join(self.lines) + "\n",
                             encoding="utf-8", newline="\n")


CDI_HEADER = """\
# pspreco cdi manifest v1
#
# Regions of the archive this replaces, covering every
# byte of it. Offsets are absolute inside the archive.
#
# A file may be any size. Edit it, then run
#     python tools/acxreindex.py apply <discdir>
# which re-lays out the archive and rewrites this file,
# _raw/table.bin and disc.manifest together. All three
# have to agree, so do not edit one of them by hand.
#
source {source}
size {size}
# <offset hex> <size decimal> <path under this directory>
"""


def read_cdi_manifest(cdidir):
    path = Path(cdidir) / "cdi.manifest"
    if not path.is_file():
        raise Fail(f"{path} is not there -- run tools/cdiextract.py first")
    source, total, regions = None, None, []
    for line in path.read_text(encoding="utf-8").splitlines():
        s = line.strip()
        if not s or s.startswith("#"):
            continue
        if s.startswith("source "):
            source = s.split(None, 1)[1].strip()
            continue
        if s.startswith("size "):
            total = int(s.split()[1])
            continue
        parts = s.split(None, 2)
        if len(parts) == 3 and _is_hex(parts[0]):
            regions.append((int(parts[0], 16), int(parts[1]), parts[2].strip()))
    if not regions or not source:
        raise Fail(f"{path} has no regions or no source line")
    regions.sort()
    return source, total, regions


def write_cdi_manifest(cdidir, source, total, regions):
    path = Path(cdidir) / "cdi.manifest"
    body = "".join(f"{o:x} {s} {p}\n" for o, s, p in regions)
    path.write_text(CDI_HEADER.format(source=source, size=total) + body,
                    encoding="utf-8", newline="\n")


# --------------------------------------------------------------------------
# the index
# --------------------------------------------------------------------------

class Index:
    """_raw/table.bin -- the game's own name -> (offset, size) table.

    Kept as the original bytes with fields patched in place, so the columns
    nobody has decoded yet (0x0C..0x25) survive untouched.
    """

    def __init__(self, cdidir):
        self.path = Path(cdidir) / TABLE
        if not self.path.is_file():
            raise Fail(f"{self.path} is not there -- run tools/cdiextract.py")
        self.data = bytearray(self.path.read_bytes())
        if self.data[:4] != b"RGF.":
            raise Fail(f"{self.path} starts {bytes(self.data[:4])!r}, not b'RGF.'")
        if len(self.data) != INDEX_BYTES:
            raise Fail(f"{self.path} is {len(self.data)} bytes; the game reads "
                       f"exactly {INDEX_BYTES} at archive offset 0, so it has "
                       f"to stay that length")
        self.total, self.indexed_end, self.count, self.version = \
            struct.unpack_from("<IIII", self.data, 4)
        if self.count > MAX_ENTRIES:
            raise Fail(f"{self.count} entries will not fit in {INDEX_BYTES} "
                       f"bytes (the limit is {MAX_ENTRIES})")
        self.paths = self._paths()

    def _paths(self):
        stack, out = {}, []
        for i in range(self.count):
            e = HDR + i * ENTRY
            name = self.data[e:e + 10].split(b"\0")[0].decode("latin-1")
            depth = struct.unpack_from("<H", self.data, e + 0x0A)[0]
            stack[depth] = name
            out.append("/".join(stack[k] for k in sorted(stack) if k <= depth))
        return out

    def entry(self, i):
        e = HDR + i * ENTRY
        nchunks = struct.unpack_from("<H", self.data, e + 0x26)[0]
        off, size = struct.unpack_from("<II", self.data, e + 0x28)
        return nchunks, off, size

    def set_entry(self, i, off, size, nchunks=None):
        e = HDR + i * ENTRY
        struct.pack_into("<II", self.data, e + 0x28, off, size)
        if nchunks is not None:
            struct.pack_into("<H", self.data, e + 0x26, nchunks)

    def set_header(self, total, indexed_end):
        struct.pack_into("<II", self.data, 4, total, indexed_end)
        self.total, self.indexed_end = total, indexed_end

    def files(self):
        """(index, region-relative path) for every entry that has data."""
        for i in range(self.count):
            _n, _o, size = self.entry(i)
            if size:
                yield i, self.paths[i] + ".bin"

    def write(self):
        self.path.write_bytes(bytes(self.data))


# --------------------------------------------------------------------------
# layout
# --------------------------------------------------------------------------

class Layout:
    def __init__(self, discdir):
        self.discdir = Path(discdir)
        self.cdidir = self.discdir / "cdi"
        self.disc = DiscManifest(self.discdir / "disc.manifest")
        self.source, self.old_total, self.regions = read_cdi_manifest(self.cdidir)
        self.index = Index(self.cdidir)

        self.regfile = self.disc.find(REGFILE)
        if not self.regfile:
            raise Fail(f"disc.manifest has no {REGFILE} line. It has to stay "
                       f"even after the archive itself is deleted -- it is what "
                       f"says where the archive sat on the disc.")

        self.paths = [p for _o, _s, p in self.regions]
        if self.paths[0] != TABLE:
            raise Fail(f"the first region is {self.paths[0]}, not {TABLE}")
        if STREAMS in self.paths and self.paths[-1] != STREAMS:
            raise Fail(f"{STREAMS} has to be the last region; it is at "
                       f"{self.paths.index(STREAMS)} of {len(self.paths)}")

        # The two orders have to agree or one of them is describing a disc that
        # does not exist. They do today: both are ascending by offset.
        indexed = [p for _i, p in self.index.files()]
        listed = [p for p in self.paths if not p.startswith("_raw/")]
        if indexed != listed:
            only_idx = set(indexed) - set(listed)
            only_man = set(listed) - set(indexed)
            detail = ""
            if only_idx:
                detail += f"\n  in the index only: {sorted(only_idx)[:5]}"
            if only_man:
                detail += f"\n  in the manifest only: {sorted(only_man)[:5]}"
            if not detail:
                detail = "\n  same regions, different order"
            raise Fail("_raw/table.bin and cdi.manifest do not describe the "
                       "same archive." + detail)

    def actual(self, path):
        f = self.cdidir / path
        if not f.is_file():
            raise Fail(f"{f} is missing")
        return f.stat().st_size

    def compute(self):
        """The new tiling. Returns (regions, changes, warnings)."""
        out, changes, warn = [], [], []
        pos = 0
        for old_off, old_size, path in self.regions:
            actual = self.actual(path)
            if path == TABLE and actual != INDEX_BYTES:
                raise Fail(f"{path} is {actual} bytes; it has to stay "
                           f"{INDEX_BYTES}")
            size = align(actual)
            if path not in ("_raw/streams.bin",) and size > REGION_MAX:
                raise Fail(
                    f"{path} would be {size:,} bytes. A region is memcpy'd into "
                    f"the 4 MB volatile block whose top 64 KB is reserved, so "
                    f"{REGION_MAX:,} is the ceiling. Split it across regions or "
                    f"compress its chunks.")
            if actual != old_size or pos != old_off:
                changes.append((path, old_off, old_size, pos, size))
            if size != actual:
                warn.append(f"{path}: padding {actual:,} -> {size:,} "
                            f"(offsets have to be sector-aligned)")
            out.append((pos, size, path))
            pos += size
        return out, changes, warn

    def pad_files(self, regions, dry=False):
        """Zero-pad every region up to its declared size on disk.

        The manifest declares the padded length, and the emulator refuses the
        archive when a region file is not exactly its declared length, so the
        padding has to be real bytes rather than an understanding.
        """
        padded = []
        for _off, size, path in regions:
            f = self.cdidir / path
            actual = f.stat().st_size
            if actual == size:
                continue
            padded.append((path, actual, size))
            if not dry:
                with f.open("r+b") as fp:
                    fp.seek(0, 2)
                    fp.write(b"\0" * (size - actual))
        return padded


def region_chunk_count(layout, path, old):
    """How many chunks the region actually holds, for index field +0x26.

    CDI_OpenDirEntry iterates exactly this many, so it is not documentation.
    A region that walks to nothing keeps whatever it claimed -- five stock
    placeholder regions are like that and rewriting them to 0 would be a change
    this tool has no reason to make.
    """
    data = (layout.cdidir / path).read_bytes()
    chunks, _tail = walk(data, path)
    return len(chunks) if chunks else old


# --------------------------------------------------------------------------
# commands
# --------------------------------------------------------------------------

def cmd_verify(args):
    lay = Layout(args.discdir)
    bad = 0
    pos = 0
    for off, size, path in lay.regions:
        if off != pos:
            print(f"  gap/overlap at {off:#x}: expected {pos:#x} ({path})")
            bad += 1
        actual = lay.actual(path)
        if actual != size:
            print(f"  {path} is {actual:,} bytes, cdi.manifest says {size:,}")
            bad += 1
        pos = off + size
    if pos != lay.old_total:
        print(f"  cdi.manifest covers {pos:,}, its size line says "
              f"{lay.old_total:,}")
        bad += 1

    by_path = {p: (o, s) for o, s, p in lay.regions}
    for i, path in lay.index.files():
        nchunks, off, size = lay.index.entry(i)
        moff, msize = by_path[path]
        if (off, size) != (moff, msize):
            print(f"  {path}: the index says {off:#x}+{size:,}, "
                  f"cdi.manifest says {moff:#x}+{msize:,}")
            bad += 1
        want = region_chunk_count(lay, path, nchunks)
        if want != nchunks:
            print(f"  {path}: the index claims {nchunks} chunks, it holds "
                  f"{want}")
            bad += 1

    if lay.index.total != lay.old_total:
        print(f"  table.bin header says the archive is {lay.index.total:,}, "
              f"cdi.manifest says {lay.old_total:,}")
        bad += 1
    if STREAMS in by_path and lay.index.indexed_end != by_path[STREAMS][0]:
        print(f"  table.bin header puts the streams at "
              f"{lay.index.indexed_end:#x}, cdi.manifest puts them at "
              f"{by_path[STREAMS][0]:#x}")
        bad += 1
    if lay.regfile[2] != lay.old_total:
        print(f"  disc.manifest says the archive is {lay.regfile[2]:,}, "
              f"cdi.manifest says {lay.old_total:,}")
        bad += 1
    end = lay.regfile[1] * SECTOR + align(lay.old_total)
    if lay.disc.image_size < end:
        print(f"  disc.manifest image-size {lay.disc.image_size:,} is short of "
              f"the archive's end at {end:,}; raw sector reads are range-checked "
              f"against it")
        bad += 1

    if bad:
        print(f"\n{bad} problem(s). Run `apply` to rebuild the index from the "
              f"region files as they are.")
        return 1
    print(f"{len(lay.regions)} regions, {lay.old_total:,} bytes tiled exactly; "
          f"table.bin, cdi.manifest and disc.manifest all agree")
    return 0


def _apply(args, dry):
    lay = Layout(args.discdir)
    regions, changes, warn = lay.compute()
    total = regions[-1][0] + regions[-1][1]
    by_path = {p: (o, s) for o, s, p in regions}
    indexed_end = by_path[STREAMS][0] if STREAMS in by_path else total

    delta = total - lay.regfile[2]
    disc_off = lay.regfile[1] * SECTOR
    after = [f for f in lay.disc.files
             if f[1] * SECTOR >= disc_off + align(lay.regfile[2]) and f[3] != REGFILE]
    if after and delta > 0:
        raise Fail("the archive would grow by {:,} bytes but {} is on the disc "
                   "after it, and moving a disc file means renumbering an LBA, "
                   "which this tool will not do."
                   .format(delta, after[0][3]))
    image_size = max(lay.disc.image_size + delta, disc_off + align(total))

    for w in warn:
        print(f"  {w}")
    padding = lay.pad_files(regions, dry=True)

    if dry:
        print(f"{len(changes)} region(s) would move or resize")
        for path, oo, os_, no, ns in changes[:20]:
            note = "" if os_ == ns else f"  size {os_:,} -> {ns:,}"
            print(f"  {path}: {oo:#x} -> {no:#x}{note}")
        if len(changes) > 20:
            print(f"  ... and {len(changes) - 20} more")
        for path, a, s in padding[:20]:
            print(f"  pad {path}: {a:,} -> {s:,} bytes on disk")
        print(f"archive {lay.regfile[2]:,} -> {total:,} bytes "
              f"({delta:+,}), image {lay.disc.image_size:,} -> {image_size:,}")
        print("nothing written; run `apply` to do it")
        return 0

    lay.pad_files(regions)

    for i, path in lay.index.files():
        nchunks, _off, _size = lay.index.entry(i)
        off, size = by_path[path]
        lay.index.set_entry(i, off, size,
                            region_chunk_count(lay, path, nchunks))
    # A directory entry has size 0 and carries the offset where its subtree's
    # data begins -- which is the next entry that has any. Walking backwards
    # gets that in one pass.
    nxt = indexed_end
    for i in range(lay.index.count - 1, -1, -1):
        _n, off, size = lay.index.entry(i)
        if size:
            nxt = by_path[lay.index.paths[i] + ".bin"][0]
        else:
            lay.index.set_entry(i, nxt, 0)
    lay.index.set_header(total, indexed_end)
    lay.index.write()

    write_cdi_manifest(lay.cdidir, lay.source, total, regions)
    lay.disc.write(total, image_size)

    print(f"{len(regions)} regions, {total:,} bytes ({delta:+,})")
    if padding:
        print(f"padded {len(padding)} region(s) up to a sector boundary")
    print(f"rewrote {lay.index.path}, {lay.cdidir / 'cdi.manifest'} and "
          f"{lay.disc.path}")
    return 0


def cmd_plan(args):
    return _apply(args, dry=True)


def cmd_apply(args):
    return _apply(args, dry=False)


def _load_region(discdir, region):
    path = Path(discdir) / "cdi" / region
    if not path.is_file():
        raise Fail(f"{path} is not there")
    chunks, tail = walk(path.read_bytes(), region)
    if not chunks:
        raise Fail(f"{region} holds no walkable chunks")
    return path, chunks, tail


def _save_region(path, chunks, tail, discdir, quiet=False):
    data = build_region(chunks, tail)
    path.write_bytes(data)
    if not quiet:
        print(f"{path}: {len(chunks)} chunks, {len(data):,} bytes")
    return data


def _report_inflated(chunks):
    biggest = 0
    for c in chunks:
        if c.compressed:
            biggest = max(biggest, struct.unpack_from("<I", c.body, 12)[0])
    if biggest > REGION_MAX:
        print(f"  warning: a chunk inflates to {biggest:,} bytes, more than "
              f"the {REGION_MAX:,} the volatile block holds")


def cmd_replace(args):
    path, chunks, tail = _load_region(args.discdir, args.region)
    hit = [c for c in chunks if c.name.upper() == args.asset.upper()]
    if not hit:
        raise Fail(f"{args.region} has no {args.asset}. It holds: "
                   + ", ".join(c.name for c in chunks[:12])
                   + (" ..." if len(chunks) > 12 else ""))
    old = hit[0]
    payload = Path(args.file).read_bytes()
    comp = old.compressed if args.compress == "same" else args.compress == "yes"
    new = Chunk(old.head, build_body(payload, comp, args.level))
    chunks[chunks.index(old)] = new
    print(f"{args.asset}: {len(old.payload()):,} -> {len(payload):,} bytes"
          f"{' (deflated)' if comp else ''}")
    _save_region(path, chunks, tail, args.discdir)
    _report_inflated(chunks)
    return _apply(args, dry=False)


def cmd_add(args):
    path, chunks, tail = _load_region(args.discdir, args.region)
    name = args.asset.upper()
    if any(c.name.upper() == name for c in chunks):
        raise Fail(f"{args.region} already has {name}; use `replace`")
    if len(name.encode("latin-1")) > 12:
        raise Fail(f"{name} is longer than the 12 characters plus NUL a chunk "
                   f"header has room for")
    ext = name.rsplit(".", 1)[-1] if "." in name else ""
    rtype = RTYPE.get(ext, 0xFF)
    rid = args.rid if args.rid is not None else RID_DONTCARE
    head = name.encode("latin-1").ljust(13, b"\0") + bytes([rtype]) \
        + struct.pack("<H", rid)
    payload = Path(args.file).read_bytes()
    chunks.append(Chunk(head, build_body(payload, args.compress == "yes",
                                         args.level)))
    print(f"{name}: {len(payload):,} bytes, type {rtype:#04x}, rid {rid:#x}"
          f"{' (deflated)' if args.compress == 'yes' else ''}")
    if rid == RID_DONTCARE:
        print("  rid 0x3fff is the slot 1,498 stock chunks share -- fine for an "
              "asset nothing in the game looks up by id")
    _save_region(path, chunks, tail, args.discdir)
    _report_inflated(chunks)
    return _apply(args, dry=False)


def cmd_remove(args):
    path, chunks, tail = _load_region(args.discdir, args.region)
    keep = [c for c in chunks if c.name.upper() != args.asset.upper()]
    if len(keep) == len(chunks):
        raise Fail(f"{args.region} has no {args.asset}")
    print(f"{args.asset}: removed ({len(chunks)} -> {len(keep)} chunks)")
    print("  the game looks assets up by name and will hang on a load that "
          "wants this one; remove only something you know is unused")
    _save_region(path, keep, tail, args.discdir)
    return _apply(args, dry=False)


def cmd_extract(args):
    _path, chunks, _tail = _load_region(args.discdir, args.region)
    hit = [c for c in chunks if c.name.upper() == args.asset.upper()]
    if not hit:
        raise Fail(f"{args.region} has no {args.asset}")
    payload = hit[0].payload()
    out = args.file or Path(hit[0].name)
    Path(out).write_bytes(payload)
    print(f"{out}: {len(payload):,} bytes"
          f"{' (inflated)' if hit[0].compressed else ''}")
    return 0


def cmd_chunks(args):
    _path, chunks, _tail = _load_region(args.discdir, args.region)
    for c in chunks:
        size = len(c.payload()) if c.compressed else len(c.body) - 4
        print(f"  {c.name:<14} rid={c.rid:#06x} type={c.rtype:#04x} "
              f"{'DEF ' if c.compressed else '    '}{size:>10,}")
    print(f"{len(chunks)} chunks")
    return 0


def main(argv=None):
    ap = argparse.ArgumentParser(
        description=__doc__,
        formatter_class=argparse.RawDescriptionHelpFormatter)
    sub = ap.add_subparsers(dest="cmd", required=True)

    def common(p):
        p.add_argument("discdir", type=Path,
                       help="a disc directory made by tools/isoextract.py")
        return p

    common(sub.add_parser("verify", help="check that all three agree")
           ).set_defaults(fn=cmd_verify)
    common(sub.add_parser("plan", help="what apply would change")
           ).set_defaults(fn=cmd_plan)
    common(sub.add_parser("apply", help="re-lay out and rewrite the index")
           ).set_defaults(fn=cmd_apply)

    p = common(sub.add_parser("chunks", help="list a region's assets"))
    p.add_argument("region", help="e.g. MAIN/MENU.bin")
    p.set_defaults(fn=cmd_chunks)

    p = common(sub.add_parser("extract", help="write one asset out, inflated"))
    p.add_argument("region")
    p.add_argument("asset")
    p.add_argument("file", type=Path, nargs="?", default=None)
    p.set_defaults(fn=cmd_extract)

    p = common(sub.add_parser("replace", help="swap an asset, any size"))
    p.add_argument("region")
    p.add_argument("asset")
    p.add_argument("file", type=Path)
    p.add_argument("--compress", choices=("same", "yes", "no"), default="same",
                   help="default: whatever the asset it replaces was")
    p.add_argument("--level", type=int, default=9)
    p.set_defaults(fn=cmd_replace)

    p = common(sub.add_parser("add", help="add a new asset to a region"))
    p.add_argument("region")
    p.add_argument("asset", help="the name the game will see, e.g. MINE.PDW")
    p.add_argument("file", type=Path)
    p.add_argument("--compress", choices=("yes", "no"), default="no")
    p.add_argument("--level", type=int, default=9)
    p.add_argument("--rid", type=lambda s: int(s, 0), default=None)
    p.set_defaults(fn=cmd_add)

    p = common(sub.add_parser("remove", help="drop an asset from a region"))
    p.add_argument("region")
    p.add_argument("asset")
    p.set_defaults(fn=cmd_remove)

    args = ap.parse_args(argv)
    try:
        return args.fn(args)
    except Fail as e:
        print(f"error: {e}", file=sys.stderr)
        return 2


if __name__ == "__main__":
    raise SystemExit(main())
