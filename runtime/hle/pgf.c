/* PGF firmware font reader/rasteriser. C port of PPSSPP Core/Font/PGF.cpp (GPL2), trimmed to the
 * char-glyph path ACX needs: parse the font, report metrics, and rasterise glyph bitmaps into the
 * guest buffer the game uploads as a GE texture. See pgf.h. */

#ifndef _CRT_SECURE_NO_WARNINGS
#define _CRT_SECURE_NO_WARNINGS
#endif
#include "hle.h"
#include "pgf.h"

#include <stdint.h>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/* Glyph metric flags (PPSSPP PGF.h). */
enum {
    FONT_PGF_BMP_H_ROWS = 0x01,
    FONT_PGF_BMP_V_ROWS = 0x02,
    FONT_PGF_BMP_OVERLAY = 0x03,
    FONT_PGF_METRIC_DIMENSION_INDEX = 0x04,
    FONT_PGF_METRIC_BEARING_X_INDEX = 0x08,
    FONT_PGF_METRIC_BEARING_Y_INDEX = 0x10,
    FONT_PGF_METRIC_ADVANCE_INDEX = 0x20,
    FONT_PGF_CHARGLYPH = 0x20,
};

#pragma pack(push, 1)
typedef struct {
    uint16_t headerOffset, headerSize;
    char     PGFMagic[4];
    int32_t  revision, version;
    int32_t  charMapLength, charPointerLength, charMapBpe, charPointerBpe;
    uint8_t  pad1[2]; uint8_t bpp; uint8_t pad2[1];
    int32_t  hSize, vSize, hResolution, vResolution;
    uint8_t  pad3[1];
    char     fontName[64]; char fontType[64];
    uint8_t  pad4[1];
    uint16_t firstGlyph, lastGlyph;
    uint8_t  pad5[26];
    int32_t  maxAscender, maxDescender, maxLeftXAdjust, maxBaseYAdjust, minCenterXAdjust, maxTopYAdjust;
    int32_t  maxAdvance[2], maxSize[2];
    uint16_t maxGlyphWidth, maxGlyphHeight;
    uint8_t  pad6[2];
    uint8_t  dimTableLength, xAdjustTableLength, yAdjustTableLength, advanceTableLength;
    uint8_t  pad7[102];
    int32_t  shadowMapLength, shadowMapBpe;
    float    unknown1;
    int32_t  shadowScale[2];
    uint8_t  pad8[8];
} PGFHeader;
#pragma pack(pop)

typedef struct {
    int w, h, left, top, flags, shadowFlags, shadowID, advanceH, advanceV;
    int dimW, dimH, xAdjH, xAdjV, yAdjH, yAdjV;
    uint32_t ptr;   /* byte offset into fontData */
} PGFGlyph;

struct PGF {
    uint8_t *file;
    size_t   fileSize;
    PGFHeader header;
    int *dim0, *dim1, dimLen;
    int *xa0, *xa1, xaLen;
    int *ya0, *ya1, yaLen;
    int *adv0, *adv1, advLen;
    int *charmap, charMapLen;
    int  firstGlyph;
    PGFGlyph *glyphs;
    int  nGlyphs;
    const uint8_t *fontData;
    size_t fontDataSize;
};

/* LSB-first bit reader over a byte stream (PPSSPP's u32-word getBits is bit-identical to this on
 * little-endian input). */
static int pgf_getBits(int numBits, const uint8_t *buf, size_t pos) {
    int v = 0;
    for (int i = 0; i < numBits; i++) {
        size_t bit = pos + (size_t)i;
        int b = (buf[bit >> 3] >> (bit & 7)) & 1;
        v |= b << i;
    }
    return v;
}
static int pgf_consume(int numBits, const uint8_t *buf, size_t *pos) {
    int v = pgf_getBits(numBits, buf, *pos);
    *pos += (size_t)numBits;
    return v;
}
static uint32_t rd32(const uint8_t *p) {
    return (uint32_t)p[0] | ((uint32_t)p[1] << 8) | ((uint32_t)p[2] << 16) | ((uint32_t)p[3] << 24);
}

static void read_char_glyph(PGF *p, size_t charPtr, PGFGlyph *g) {
    const uint8_t *fd = p->fontData;
    charPtr += 14;                          /* skip size field */
    g->w = pgf_consume(7, fd, &charPtr);
    g->h = pgf_consume(7, fd, &charPtr);
    g->left = pgf_consume(7, fd, &charPtr); if (g->left >= 64) g->left -= 128;
    g->top  = pgf_consume(7, fd, &charPtr); if (g->top  >= 64) g->top  -= 128;
    g->flags = pgf_consume(6, fd, &charPtr);
    g->shadowFlags  = pgf_consume(2, fd, &charPtr) << (2 + 3);
    g->shadowFlags |= pgf_consume(2, fd, &charPtr) << 3;
    g->shadowFlags |= pgf_consume(3, fd, &charPtr);
    g->shadowID = pgf_consume(9, fd, &charPtr);

    if ((g->flags & FONT_PGF_METRIC_DIMENSION_INDEX) == FONT_PGF_METRIC_DIMENSION_INDEX) {
        int i = pgf_consume(8, fd, &charPtr);
        if (i < p->dimLen) { g->dimW = p->dim0[i]; g->dimH = p->dim1[i]; }
    } else { g->dimW = pgf_consume(32, fd, &charPtr); g->dimH = pgf_consume(32, fd, &charPtr); }

    if ((g->flags & FONT_PGF_METRIC_BEARING_X_INDEX) == FONT_PGF_METRIC_BEARING_X_INDEX) {
        int i = pgf_consume(8, fd, &charPtr);
        if (i < p->xaLen) { g->xAdjH = p->xa0[i]; g->xAdjV = p->xa1[i]; }
    } else { g->xAdjH = pgf_consume(32, fd, &charPtr); g->xAdjV = pgf_consume(32, fd, &charPtr); }

    if ((g->flags & FONT_PGF_METRIC_BEARING_Y_INDEX) == FONT_PGF_METRIC_BEARING_Y_INDEX) {
        int i = pgf_consume(8, fd, &charPtr);
        if (i < p->yaLen) { g->yAdjH = p->ya0[i]; g->yAdjV = p->ya1[i]; }
    } else { g->yAdjH = pgf_consume(32, fd, &charPtr); g->yAdjV = pgf_consume(32, fd, &charPtr); }

    if ((g->flags & FONT_PGF_METRIC_ADVANCE_INDEX) == FONT_PGF_METRIC_ADVANCE_INDEX) {
        int i = pgf_consume(8, fd, &charPtr);
        if (i < p->advLen) { g->advanceH = p->adv0[i]; g->advanceV = p->adv1[i]; }
    } else { g->advanceH = pgf_consume(32, fd, &charPtr); g->advanceV = pgf_consume(32, fd, &charPtr); }

    g->ptr = (uint32_t)(charPtr / 8);
}

PGF *pgf_open(const char *path) {
    FILE *f = fopen(path, "rb");
    if (!f) return NULL;
    fseek(f, 0, SEEK_END); long sz = ftell(f); fseek(f, 0, SEEK_SET);
    if (sz < (long)sizeof(PGFHeader)) { fclose(f); return NULL; }
    PGF *p = (PGF *)calloc(1, sizeof(PGF));
    p->fileSize = (size_t)sz;
    p->file = (uint8_t *)calloc(1, p->fileSize + 64);   /* pad so the bit reader never overruns */
    if (fread(p->file, 1, p->fileSize, f) != p->fileSize) { fclose(f); free(p->file); free(p); return NULL; }
    fclose(f);

    memcpy(&p->header, p->file, sizeof(PGFHeader));
    if (memcmp(p->header.PGFMagic, "PGF0", 4) != 0) { free(p->file); free(p); return NULL; }

    const uint8_t *ptr = p->file + sizeof(PGFHeader);
    int compLen1 = 0, compLen2 = 0;
    if (p->header.revision == 3) {
        compLen1 = (int)(rd32(ptr + 4) & 0xFFFF);
        compLen2 = (int)(rd32(ptr + 12) & 0xFFFF);
        ptr += 20;   /* PGFHeaderRev3Extra */
    }

    /* dimension / xAdjust / yAdjust / advance tables: len pairs of u32. */
    #define RDTBL(a0, a1, len) do { \
        int n = (len); a0 = (int*)calloc((size_t)(n > 0 ? n : 1), sizeof(int)); a1 = (int*)calloc((size_t)(n > 0 ? n : 1), sizeof(int)); \
        for (int i = 0; i < n; i++) { a0[i] = (int)rd32(ptr); ptr += 4; a1[i] = (int)rd32(ptr); ptr += 4; } } while (0)
    p->dimLen = p->header.dimTableLength;          RDTBL(p->dim0, p->dim1, p->dimLen);
    p->xaLen  = p->header.xAdjustTableLength;       RDTBL(p->xa0, p->xa1, p->xaLen);
    p->yaLen  = p->header.yAdjustTableLength;       RDTBL(p->ya0, p->ya1, p->yaLen);
    p->advLen = p->header.advanceTableLength;       RDTBL(p->adv0, p->adv1, p->advLen);
    #undef RDTBL

    int shadowCharMapSize = (int)((((size_t)p->header.shadowMapLength * (size_t)p->header.shadowMapBpe + 31) & ~(size_t)31) / 8);
    ptr += shadowCharMapSize;                       /* shadow charmap (unused here) */

    if (p->header.revision == 3) ptr += (size_t)compLen1 * 4 + (size_t)compLen2 * 4;  /* comp charmap tables */

    int charMapSize = (int)((((size_t)p->header.charMapLength * (size_t)p->header.charMapBpe + 31) & ~(size_t)31) / 8);
    const uint8_t *charMap = ptr; ptr += charMapSize;
    int charPtrSize = (int)((((size_t)p->header.charPointerLength * (size_t)p->header.charPointerBpe + 31) & ~(size_t)31) / 8);
    const uint8_t *charPtrTable = ptr; ptr += charPtrSize;

    if (ptr < p->file || ptr >= p->file + p->fileSize) { /* leave fontData empty */ }
    p->fontData = ptr;
    p->fontDataSize = (size_t)(p->file + p->fileSize - ptr);

    p->charMapLen = p->header.charMapLength;
    p->charmap = (int *)calloc((size_t)(p->charMapLen > 0 ? p->charMapLen : 1), sizeof(int));
    for (int i = 0; i < p->charMapLen; i++) {
        int c = pgf_getBits(p->header.charMapBpe, charMap, (size_t)i * p->header.charMapBpe);
        if (c >= p->header.charPointerLength) c = 65535;
        p->charmap[i] = c;
    }

    p->nGlyphs = p->header.charPointerLength;
    p->glyphs = (PGFGlyph *)calloc((size_t)(p->nGlyphs > 0 ? p->nGlyphs : 1), sizeof(PGFGlyph));
    p->firstGlyph = p->header.firstGlyph;
    for (int i = 0; i < p->nGlyphs; i++) {
        int cp = pgf_getBits(p->header.charPointerBpe, charPtrTable, (size_t)i * p->header.charPointerBpe);
        read_char_glyph(p, (size_t)cp * 4 * 8, &p->glyphs[i]);
    }
    return p;
}

static int get_char_glyph(const PGF *p, int charCode, PGFGlyph *out) {
    if (charCode < p->firstGlyph) return 0;
    charCode -= p->firstGlyph;
    if (charCode < p->charMapLen) charCode = p->charmap[charCode];
    if (charCode < 0 || charCode >= p->nGlyphs) return 0;
    *out = p->glyphs[charCode];
    return 1;
}

int pgf_has_char(const PGF *p, int charCode) {
    PGFGlyph g;
    if (!p) return 0;
    if (!get_char_glyph(p, charCode, &g)) return 0;
    return g.w > 0 && g.h > 0;
}

void pgf_get_font_info(uint8_t *ram, const PGF *p, uint32_t fi) {
    if (!p || !fi) return;
    const PGFHeader *h = &p->header;
    mem_w32(ram, fi + 0,  (uint32_t)h->maxSize[0]);
    mem_w32(ram, fi + 4,  (uint32_t)h->maxSize[1]);
    mem_w32(ram, fi + 8,  (uint32_t)h->maxAscender);
    mem_w32(ram, fi + 12, (uint32_t)h->maxDescender);
    mem_w32(ram, fi + 16, (uint32_t)h->maxLeftXAdjust);
    mem_w32(ram, fi + 20, (uint32_t)h->maxBaseYAdjust);
    mem_w32(ram, fi + 24, (uint32_t)h->minCenterXAdjust);
    mem_w32(ram, fi + 28, (uint32_t)h->maxTopYAdjust);
    mem_w32(ram, fi + 32, (uint32_t)h->maxAdvance[0]);
    mem_w32(ram, fi + 36, (uint32_t)h->maxAdvance[1]);
    /* float replicas at +40..+76 */
    float ff[10]; ff[0]=(float)h->maxSize[0]/64.f; ff[1]=(float)h->maxSize[1]/64.f;
    ff[2]=(float)h->maxAscender/64.f; ff[3]=(float)h->maxDescender/64.f;
    ff[4]=(float)h->maxLeftXAdjust/64.f; ff[5]=(float)h->maxBaseYAdjust/64.f;
    ff[6]=(float)h->minCenterXAdjust/64.f; ff[7]=(float)h->maxTopYAdjust/64.f;
    ff[8]=(float)h->maxAdvance[0]/64.f; ff[9]=(float)h->maxAdvance[1]/64.f;
    for (int i = 0; i < 10; i++) { uint32_t w; memcpy(&w, &ff[i], 4); mem_w32(ram, fi + 40 + (uint32_t)i * 4, w); }
    mem_w16(ram, fi + 80, (uint16_t)h->maxGlyphWidth);
    mem_w16(ram, fi + 82, (uint16_t)h->maxGlyphHeight);
    mem_w32(ram, fi + 84, (uint32_t)h->charPointerLength);  /* numGlyphs */
    mem_w32(ram, fi + 88, 0);                               /* shadowMapLength */
    mem_w8(ram, fi + 90 + 64 + 64 + 16 - 4, h->bpp);        /* BPP near end of fontStyle block; best-effort */
}

int pgf_get_char_info(uint8_t *ram, const PGF *p, int charCode, int altCharCode, uint32_t ci) {
    if (!ci) return 0;
    for (int i = 0; i < 0x3c; i++) mem_w8(ram, ci + (uint32_t)i, 0);
    PGFGlyph g;
    if (!p || !get_char_glyph(p, charCode, &g)) {
        if (!p || charCode < p->firstGlyph) return 0;
        if (!get_char_glyph(p, altCharCode, &g)) return 0;
    }
    mem_w32(ram, ci + 0,  (uint32_t)g.w);
    mem_w32(ram, ci + 4,  (uint32_t)g.h);
    mem_w32(ram, ci + 8,  (uint32_t)g.left);
    mem_w32(ram, ci + 12, (uint32_t)g.top);
    mem_w32(ram, ci + 16, (uint32_t)g.dimW);
    mem_w32(ram, ci + 20, (uint32_t)g.dimH);
    mem_w32(ram, ci + 24, (uint32_t)g.yAdjH);                          /* ascender */
    mem_w32(ram, ci + 28, (uint32_t)(g.yAdjH - g.dimH));               /* descender */
    mem_w32(ram, ci + 32, (uint32_t)g.xAdjH);
    mem_w32(ram, ci + 36, (uint32_t)g.yAdjH);
    mem_w32(ram, ci + 40, (uint32_t)g.xAdjV);
    mem_w32(ram, ci + 44, (uint32_t)g.yAdjV);
    mem_w32(ram, ci + 48, (uint32_t)g.advanceH);
    mem_w32(ram, ci + 52, (uint32_t)g.advanceV);
    mem_w16(ram, ci + 56, (uint16_t)g.shadowFlags);
    mem_w16(ram, ci + 58, (uint16_t)g.shadowID);
    return 1;
}

static void set_font_pixel(uint8_t *ram, uint32_t base, int bpl, int bufW, int bufH, int x, int y, uint8_t pix, int fmt) {
    if (x < 0 || x >= bufW || y < 0 || y >= bufH) return;
    static const int pxBytes[5] = { 0, 0, 1, 3, 4 };
    if (fmt < 0 || fmt > 4) return;
    int pb = pxBytes[fmt];
    int bufMaxW = (pb == 0) ? bpl * 2 : bpl / pb;
    if (x >= bufMaxW) return;
    uint32_t a = base + (uint32_t)(y * bpl) + (uint32_t)(pb == 0 ? x / 2 : x * pb);
    switch (fmt) {
        case 0: case 1: {
            uint8_t p4 = pix >> 4;
            uint8_t old = (uint8_t)mem_r8(ram, a);
            if ((x & 1) != fmt) mem_w8(ram, a, (uint8_t)((p4 << 4) | (old & 0x0F)));
            else                mem_w8(ram, a, (uint8_t)((old & 0xF0) | p4));
            break;
        }
        case 2: mem_w8(ram, a, pix); break;
        case 3: mem_w8(ram, a, pix); mem_w8(ram, a + 1, pix); mem_w8(ram, a + 2, pix); break;
        case 4: { uint32_t v = pix; v |= v << 8; v |= v << 16; mem_w32(ram, a, v); break; }
    }
}

int pgf_draw_glyph(uint8_t *ram, const PGF *p, int charCode, int altCharCode, uint32_t gi) {
    if (!p || !gi) return 0;
    PGFGlyph g;
    if (!get_char_glyph(p, charCode, &g)) {
        if (charCode < p->firstGlyph) return 0;
        if (!get_char_glyph(p, altCharCode, &g)) return 0;
    }
    if (g.w <= 0 || g.h <= 0) return 0;
    int dir = g.flags & FONT_PGF_BMP_OVERLAY;
    if (dir != FONT_PGF_BMP_H_ROWS && dir != FONT_PGF_BMP_V_ROWS) return 0;

    int fmt   = (int)mem_r32(ram, gi + 0);
    int xPos  = (int)mem_r32(ram, gi + 4);
    int yPos  = (int)mem_r32(ram, gi + 8);
    int bufW  = (int)mem_r16(ram, gi + 12);
    int bufH  = (int)mem_r16(ram, gi + 14);
    int bpl   = (int)mem_r16(ram, gi + 16);
    uint32_t base = mem_r32(ram, gi + 20);
    int x = xPos >> 6, y = yPos >> 6;
    int xFrac = xPos & 0x3F, yFrac = yPos & 0x3F;

    int n = g.w * g.h;
    if (n <= 0 || n > 256 * 256) return 0;
    uint8_t *px = (uint8_t *)calloc((size_t)n, 1);
    size_t bitPtr = (size_t)g.ptr * 8;
    int idx = 0;
    while (idx < n && bitPtr + 8 < p->fontDataSize * 8) {
        int nib = pgf_consume(4, p->fontData, &bitPtr);
        int count, value = 0;
        if (nib < 8) { value = pgf_consume(4, p->fontData, &bitPtr); count = nib + 1; }
        else         { count = 16 - nib; }
        for (int i = 0; i < count && idx < n; i++) {
            if (nib >= 8) value = pgf_consume(4, p->fontData, &bitPtr);
            px[idx++] = (uint8_t)(value | (value << 4));
        }
    }

    #define SAMPLE(xx, yy) ( ((xx) < 0 || (yy) < 0 || (xx) >= g.w || (yy) >= g.h) ? 0 : \
        px[(dir == FONT_PGF_BMP_H_ROWS) ? ((yy) * g.w + (xx)) : ((xx) * g.h + (yy))] )

    if (xFrac == 0 && yFrac == 0) {
        for (int yy = 0; yy < g.h; yy++) for (int xx = 0; xx < g.w; xx++)
            set_font_pixel(ram, base, bpl, bufW, bufH, x + xx, y + yy, SAMPLE(xx, yy), fmt);
    } else {
        int w2 = g.w + (xFrac > 0 ? 1 : 0), h2 = g.h + (yFrac > 0 ? 1 : 0);
        for (int yy = 0; yy < h2; yy++) for (int xx = 0; xx < w2; xx++) {
            uint32_t h1 = (uint32_t)SAMPLE(xx - 1, yy - 1) * xFrac + (uint32_t)SAMPLE(xx, yy - 1) * (64 - xFrac);
            uint32_t hh = (uint32_t)SAMPLE(xx - 1, yy)     * xFrac + (uint32_t)SAMPLE(xx, yy)     * (64 - xFrac);
            uint32_t blended = h1 * yFrac + hh * (64 - yFrac);
            set_font_pixel(ram, base, bpl, bufW, bufH, x + xx, y + yy, (uint8_t)(blended >> 12), fmt);
        }
    }
    #undef SAMPLE
    free(px);
    return 1;
}
