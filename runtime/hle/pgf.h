/* PGF firmware font reader/rasteriser. C port of PPSSPP's Core/Font/PGF.cpp
 * (GPL2), serving sceLibFont. The font files are PPSSPP's freely-licensed
 * flash0 replacements (ltn0.pgf / jpn0.pgf), not Sony's. */
#ifndef PSPRECO_PGF_H
#define PSPRECO_PGF_H

#include <stdint.h>

typedef struct PGF PGF;

/* Load and parse a .pgf file from the host filesystem. Returns NULL on failure. */
PGF *pgf_open(const char *path);

/* True if the font has a real glyph for this Unicode code point. */
int pgf_has_char(const PGF *p, int charCode);

/* Write a PGFFontInfo (PPSSPP layout) to guest address `gfi`. */
void pgf_get_font_info(uint8_t *ram, const PGF *p, uint32_t gfi);

/* Fill a PGFCharInfo (0x3c bytes, PPSSPP layout) at guest address `gci` for `charCode`, falling
 * back to `altCharCode`. Returns 1 if a glyph was found, 0 otherwise (charInfo zeroed). */
int pgf_get_char_info(uint8_t *ram, const PGF *p, int charCode, int altCharCode, uint32_t gci);

/* Read a GlyphImage (PPSSPP layout) from guest address `ggi` and rasterise the glyph for
 * `charCode` (or `altCharCode`) into its buffer. Returns 1 if drawn. */
int pgf_draw_glyph(uint8_t *ram, const PGF *p, int charCode, int altCharCode, uint32_t ggi);

#endif
