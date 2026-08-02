#!/usr/bin/env python3
"""
recomp/analyze/ehframe.py -- .eh_frame reader.

RECOMP_PLAN §Phase 2.1 calls `.eh_frame` "a gift": for every function GCC
compiled with unwind info, the FDE records the exact [start, start+range)
extent, which is ground truth that N64 projects do not have. acepsp has
0x18CF0 bytes of it with 2,255 relocations.

The FDE `initial_location` fields are relocated (R_MIPS_32), so this must run
against the image produced by PrxModule.build_image(), never the raw file.

Format: DWARF CFI as used by GCC 3.3 (.eh_frame flavour, not .debug_frame):
  u32 length            -- 0 terminates
  u32 id                -- 0 => CIE, else byte offset back to the owning CIE
  CIE: u8 version, cstr augmentation, uleb code_align, sleb data_align,
       return-address register, and if augmentation starts with 'z' an
       augmentation block whose 'R' byte gives the FDE pointer encoding.
  FDE: initial_location, address_range (both per that encoding), ...
"""

from __future__ import annotations

import struct
from dataclasses import dataclass

DW_EH_PE_omit = 0xFF
DW_EH_PE_absptr = 0x00
DW_EH_PE_uleb128 = 0x01
DW_EH_PE_udata2 = 0x02
DW_EH_PE_udata4 = 0x03
DW_EH_PE_udata8 = 0x04
DW_EH_PE_sleb128 = 0x09
DW_EH_PE_sdata2 = 0x0A
DW_EH_PE_sdata4 = 0x0B
DW_EH_PE_sdata8 = 0x0C
DW_EH_PE_pcrel = 0x10
DW_EH_PE_datarel = 0x30


@dataclass
class Cie:
    offset: int
    version: int
    augmentation: str
    code_align: int
    data_align: int
    ra_register: int
    fde_encoding: int


@dataclass
class Fde:
    offset: int
    cie_offset: int
    start: int
    length: int

    @property
    def end(self) -> int:
        return self.start + self.length


class EhFrameError(Exception):
    pass


def _uleb(buf: bytes, p: int) -> tuple[int, int]:
    r = 0
    s = 0
    while True:
        b = buf[p]
        p += 1
        r |= (b & 0x7F) << s
        if not (b & 0x80):
            return r, p
        s += 7


def _sleb(buf: bytes, p: int) -> tuple[int, int]:
    r = 0
    s = 0
    while True:
        b = buf[p]
        p += 1
        r |= (b & 0x7F) << s
        s += 7
        if not (b & 0x80):
            if b & 0x40:
                r -= 1 << s
            return r, p


def _read_encoded(buf: bytes, p: int, enc: int, section_vaddr: int
                  ) -> tuple[int, int]:
    if enc == DW_EH_PE_omit:
        return 0, p
    base = 0
    if (enc & 0x70) == DW_EH_PE_pcrel:
        base = section_vaddr + p
    fmt = enc & 0x0F
    if fmt in (DW_EH_PE_absptr, DW_EH_PE_udata4):
        v = struct.unpack_from("<I", buf, p)[0]
        p += 4
    elif fmt == DW_EH_PE_sdata4:
        v = struct.unpack_from("<i", buf, p)[0]
        p += 4
    elif fmt == DW_EH_PE_udata2:
        v = struct.unpack_from("<H", buf, p)[0]
        p += 2
    elif fmt == DW_EH_PE_sdata2:
        v = struct.unpack_from("<h", buf, p)[0]
        p += 2
    elif fmt == DW_EH_PE_uleb128:
        v, p = _uleb(buf, p)
    elif fmt == DW_EH_PE_sleb128:
        v, p = _sleb(buf, p)
    else:
        raise EhFrameError(f"unsupported pointer encoding {enc:#04x}")
    return (base + v) & 0xFFFFFFFF, p


def parse(section: bytes, section_vaddr: int
          ) -> tuple[list[Cie], list[Fde], list[str]]:
    cies: dict[int, Cie] = {}
    fdes: list[Fde] = []
    warnings: list[str] = []
    p = 0
    n = len(section)

    while p + 4 <= n:
        entry_off = p
        length = struct.unpack_from("<I", section, p)[0]
        p += 4
        if length == 0:
            break                      # terminator
        if length == 0xFFFFFFFF:
            raise EhFrameError("64-bit DWARF not supported")
        end = p + length
        if end > n:
            warnings.append(f"entry at {entry_off:#x} runs past the section")
            break
        cie_id = struct.unpack_from("<I", section, p)[0]
        q = p + 4

        if cie_id == 0:
            version = section[q]
            q += 1
            z = section.index(b"\0", q)
            aug = section[q:z].decode("ascii", "replace")
            q = z + 1
            code_align, q = _uleb(section, q)
            data_align, q = _sleb(section, q)
            if version == 1:
                ra = section[q]
                q += 1
            else:
                ra, q = _uleb(section, q)
            fde_enc = DW_EH_PE_absptr
            if aug.startswith("z"):
                alen, q = _uleb(section, q)
                aend = q + alen
                for ch in aug[1:]:
                    if ch == "R":
                        fde_enc = section[q]
                        q += 1
                    elif ch == "L":
                        q += 1
                    elif ch == "P":
                        penc = section[q]
                        q += 1
                        _, q = _read_encoded(section, q, penc, section_vaddr)
                    else:
                        break
                q = aend
            cies[entry_off] = Cie(entry_off, version, aug, code_align,
                                  data_align, ra, fde_enc)
        else:
            cie_off = (q - 4) - cie_id
            cie = cies.get(cie_off)
            if cie is None:
                warnings.append(
                    f"FDE at {entry_off:#x} references unknown CIE {cie_off:#x}")
                p = end
                continue
            enc = cie.fde_encoding
            start, q = _read_encoded(section, q, enc, section_vaddr)
            # the range uses the same format but is never pc-relative
            rng, q = _read_encoded(section, q, enc & 0x0F, section_vaddr)
            fdes.append(Fde(entry_off, cie_off, start, rng))

        p = end

    fdes.sort(key=lambda f: f.start)
    return list(cies.values()), fdes, warnings
