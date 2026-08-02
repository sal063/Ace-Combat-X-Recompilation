#!/usr/bin/env python3
"""
tools/prxload/pspelf.py -- ELF32 little-endian + `ar` archive reader.

Shared low-level layer used by tools/prxload (the PRX front-end) and
tools/nidgen (which mines the stub archives for authoritative
name <-> NID pairs).

No PSP-specific semantics live here; see prxload.py for PRX handling.
"""

from __future__ import annotations

import struct
from dataclasses import dataclass
from pathlib import Path

# --- ELF constants (generic) ----------------------------------------------
ELFMAG = b"\x7fELF"

ET_REL, ET_EXEC, ET_DYN = 1, 2, 3
ET_PSP_PRX = 0xFFA0          # PSP relocatable executable
EM_MIPS = 8

SHT_NULL = 0
SHT_PROGBITS = 1
SHT_SYMTAB = 2
SHT_STRTAB = 3
SHT_RELA = 4
SHT_HASH = 5
SHT_DYNAMIC = 6
SHT_NOTE = 7
SHT_NOBITS = 8
SHT_REL = 9
SHT_PRXRELOC = 0x700000A0    # PSP: packed relocations against the module
SHT_PRXRELOC_FW5 = 0x700000A1

SHN_UNDEF = 0

STB_LOCAL, STB_GLOBAL, STB_WEAK = 0, 1, 2
STT_NOTYPE, STT_OBJECT, STT_FUNC, STT_SECTION, STT_FILE = 0, 1, 2, 3, 4

PT_LOAD = 1

# --- MIPS relocation types -------------------------------------------------
R_MIPS_NONE = 0
R_MIPS_16 = 1
R_MIPS_32 = 2
R_MIPS_REL32 = 3
R_MIPS_26 = 4
R_MIPS_HI16 = 5
R_MIPS_LO16 = 6
R_MIPS_GPREL16 = 7

MIPS_RELOC_NAMES = {
    R_MIPS_NONE: "R_MIPS_NONE",
    R_MIPS_16: "R_MIPS_16",
    R_MIPS_32: "R_MIPS_32",
    R_MIPS_REL32: "R_MIPS_REL32",
    R_MIPS_26: "R_MIPS_26",
    R_MIPS_HI16: "R_MIPS_HI16",
    R_MIPS_LO16: "R_MIPS_LO16",
    R_MIPS_GPREL16: "R_MIPS_GPREL16",
}


@dataclass(frozen=True)
class Section:
    index: int
    name: str
    sh_type: int
    flags: int
    addr: int
    offset: int
    size: int
    link: int
    info: int
    addralign: int
    entsize: int


@dataclass(frozen=True)
class Segment:
    index: int
    p_type: int
    offset: int
    vaddr: int
    paddr: int
    filesz: int
    memsz: int
    flags: int
    align: int


@dataclass(frozen=True)
class Symbol:
    name: str
    value: int
    size: int
    info: int
    other: int
    shndx: int

    @property
    def bind(self) -> int:
        return self.info >> 4

    @property
    def type(self) -> int:
        return self.info & 0xF


class ElfError(Exception):
    pass


class Elf32:
    """Minimal ELF32-LE reader. Tolerates PSP's e_type 0xFFA0."""

    def __init__(self, data: bytes, source: str = "<memory>"):
        if len(data) < 52 or data[:4] != ELFMAG:
            raise ElfError(f"{source}: not an ELF file")
        if data[4] != 1:
            raise ElfError(f"{source}: not ELFCLASS32")
        if data[5] != 1:
            raise ElfError(f"{source}: not ELFDATA2LSB")

        self.data = data
        self.source = source
        (
            self.e_type, self.e_machine, self.e_version, self.e_entry,
            self.e_phoff, self.e_shoff, self.e_flags, self.e_ehsize,
            self.e_phentsize, self.e_phnum, self.e_shentsize,
            self.e_shnum, self.e_shstrndx,
        ) = struct.unpack_from("<HHIIIIIHHHHHH", data, 16)

        self.sections: list[Section] = self._read_sections()
        self._by_name: dict[str, Section] = {}
        for s in self.sections:
            self._by_name.setdefault(s.name, s)
        self.segments: list[Segment] = self._read_segments()

    # -- headers ------------------------------------------------------------
    def _read_sections(self) -> list[Section]:
        if not self.e_shoff or not self.e_shnum:
            return []
        raw: list[tuple] = []
        for i in range(self.e_shnum):
            off = self.e_shoff + i * self.e_shentsize
            raw.append(struct.unpack_from("<10I", self.data, off))

        # section-header string table
        if self.e_shstrndx < len(raw):
            _, _, _, _, stroff, strsize = raw[self.e_shstrndx][:6]
            strtab = self.data[stroff:stroff + strsize]
        else:
            strtab = b""

        out = []
        for i, r in enumerate(raw):
            (nameoff, sh_type, flags, addr, offset, size,
             link, info, addralign, entsize) = r
            out.append(Section(
                index=i, name=_cstr(strtab, nameoff), sh_type=sh_type,
                flags=flags, addr=addr, offset=offset, size=size, link=link,
                info=info, addralign=addralign, entsize=entsize))
        return out

    def _read_segments(self) -> list[Segment]:
        out = []
        for i in range(self.e_phnum):
            off = self.e_phoff + i * self.e_phentsize
            (p_type, p_off, vaddr, paddr, filesz, memsz,
             flags, align) = struct.unpack_from("<8I", self.data, off)
            out.append(Segment(i, p_type, p_off, vaddr, paddr,
                               filesz, memsz, flags, align))
        return out

    # -- accessors ----------------------------------------------------------
    def section(self, name: str) -> Section | None:
        return self._by_name.get(name)

    def section_data(self, s: Section | str | None) -> bytes:
        if isinstance(s, str):
            s = self.section(s)
        if s is None or s.sh_type == SHT_NOBITS:
            return b""
        return self.data[s.offset:s.offset + s.size]

    def symbols(self) -> list[Symbol]:
        out: list[Symbol] = []
        for sec in self.sections:
            if sec.sh_type != SHT_SYMTAB:
                continue
            strtab = self.section_data(self.sections[sec.link]) \
                if sec.link < len(self.sections) else b""
            blob = self.section_data(sec)
            n = len(blob) // 16
            for i in range(n):
                nameoff, value, size, info, other, shndx = \
                    struct.unpack_from("<IIIBBH", blob, i * 16)
                out.append(Symbol(_cstr(strtab, nameoff), value, size,
                                  info, other, shndx))
        return out

    def vaddr_to_off(self, vaddr: int) -> int | None:
        """Map a virtual address into a file offset via the program headers."""
        for seg in self.segments:
            if seg.p_type != PT_LOAD:
                continue
            if seg.vaddr <= vaddr < seg.vaddr + seg.filesz:
                return seg.offset + (vaddr - seg.vaddr)
        for s in self.sections:
            if s.sh_type == SHT_NOBITS or not s.addr:
                continue
            if s.addr <= vaddr < s.addr + s.size:
                return s.offset + (vaddr - s.addr)
        return None

    def read_at_vaddr(self, vaddr: int, length: int) -> bytes:
        off = self.vaddr_to_off(vaddr)
        if off is None:
            return b""
        return self.data[off:off + length]

    def cstr_at_vaddr(self, vaddr: int, limit: int = 256) -> str:
        return _cstr(self.read_at_vaddr(vaddr, limit), 0)


def _cstr(buf: bytes, off: int) -> str:
    if off >= len(buf):
        return ""
    end = buf.find(b"\0", off)
    if end < 0:
        end = len(buf)
    return buf[off:end].decode("utf-8", "replace")


# ---------------------------------------------------------------------------
# `ar` archives (the lib/*.a stub libraries)
# ---------------------------------------------------------------------------

AR_MAGIC = b"!<arch>\n"


@dataclass
class ArMember:
    name: str
    offset: int
    size: int
    data: bytes


def _longname(table: bytes, off: int) -> str:
    """GNU ar // entries are terminated by "/\\n" (or "\\n"), NOT by NUL."""
    if off >= len(table):
        return ""
    end = table.find(b"/\n", off)
    if end < 0:
        end = table.find(b"\n", off)
    if end < 0:
        end = len(table)
    return table[off:end].decode("latin-1").rstrip("/")


def read_archive(path: Path) -> list[ArMember]:
    """Parse a GNU `ar` archive, resolving the // long-name table."""
    blob = path.read_bytes()
    if not blob.startswith(AR_MAGIC):
        raise ElfError(f"{path}: not an ar archive")

    pos = len(AR_MAGIC)
    longnames = b""
    members: list[ArMember] = []

    while pos + 60 <= len(blob):
        hdr = blob[pos:pos + 60]
        if hdr[58:60] != b"`\n":
            # tolerate a stray alignment byte
            pos += 1
            continue
        raw_name = hdr[0:16].decode("latin-1").rstrip()
        try:
            size = int(hdr[48:58].decode("latin-1").strip() or "0")
        except ValueError:
            break
        body = blob[pos + 60:pos + 60 + size]

        if raw_name == "//":
            longnames = body
        elif raw_name in ("/", "/SYM64/"):
            pass  # symbol index; we read symbols from the objects instead
        else:
            if raw_name.startswith("/") and raw_name[1:].isdigit():
                name = _longname(longnames, int(raw_name[1:]))
            else:
                name = raw_name.rstrip("/")
            members.append(ArMember(name, pos + 60, size, body))

        pos += 60 + size + (size & 1)  # members are 2-byte aligned

    return members
