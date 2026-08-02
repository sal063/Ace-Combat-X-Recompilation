/* sceLibFont HLE (LIBFONT.PRX is an encrypted SCE module, so the library is
 * reimplemented from its public header contract). Glyphs rasterise from
 * PPSSPP's freely-licensed flash0 PGF fonts (ltn0/jpn0, via pgf.c) when
 * present; otherwise synthetic Latin metrics apply and glyphs draw blank. */

#include "hle.h"
#include "sce_errors.h"
#include "pgf.h"

#include <stdlib.h>
#include <stdio.h>

/* --- error codes ------------------------------------------------------- */
#define SCE_FONT_ERR_NOMEMORY       0x80460001u
#define SCE_FONT_ERR_LIBID          0x80460002u
#define SCE_FONT_ERR_ARG            0x80460003u
#define SCE_FONT_ERR_TOOMANYOPENED  0x80460009u
#define SCE_FONT_NOERROR            0u

/* --- limits and enums -------------------------------------------------- */
#define SCE_FONT_MAX_OPEN            9
#define SCE_FONT_FONTNAME_LENGTH     64
#define SCE_FONT_FONTFILENAME_LENGTH 64
#define SCE_FONT_FAMILY_SANSERIF     1
#define SCE_FONT_STYLE_REGULAR       1
#define SCE_FONT_LANGUAGE_LATIN      2
#define SCE_FONT_GENERIC_REGION_CODE 0
#define SCE_FONT_COUNTRY_USA         2

/* --- guest structure layouts (o32, natural alignment) ------------------ */

/* SceFont_t_iGlyphMetricsInfo -- ten 32-bit fields. */
#define IGM_WIDTH64               0
#define IGM_HEIGHT64              4
#define IGM_ASCENDER64            8
#define IGM_DESCENDER64          12
#define IGM_H_BEARING_X64        16
#define IGM_H_BEARING_Y64        20
#define IGM_V_BEARING_X64        24
#define IGM_V_BEARING_Y64        28
#define IGM_H_ADVANCE64          32
#define IGM_V_ADVANCE64          36
#define IGM_SIZE                 40

/* SceFont_t_fGlyphMetricsInfo -- the same ten as f32. */
#define FGM_SIZE                 40

/* SceFont_t_charInfo */
#define CI_BITMAP_WIDTH           0
#define CI_BITMAP_HEIGHT          4
#define CI_BITMAP_LEFT            8
#define CI_BITMAP_TOP            12
#define CI_GLYPH_METRICS         16
#define CI_SIZE                  60

/* SceFont_t_fontStyleInfo */
#define FSI_H_SIZE                0
#define FSI_V_SIZE                4
#define FSI_H_RESOLUTION          8
#define FSI_V_RESOLUTION         12
#define FSI_WEIGHT               16
#define FSI_FAMILY_CODE          20      /* u16 */
#define FSI_STYLE                22      /* u16 */
#define FSI_SUB_STYLE            24      /* u16 */
#define FSI_LANGUAGE_CODE        26      /* u16 */
#define FSI_REGION_CODE          28      /* u16 */
#define FSI_COUNTRY_CODE         30      /* u16 */
#define FSI_FONT_NAME            32      /* u8[64] */
#define FSI_FILE_NAME            96      /* u8[64] */
#define FSI_EXTRA_ATTRIBUTES    160
#define FSI_EXPIRE_DATE         164
#define FSI_SIZE                168

/* SceFont_t_fontInfo */
#define FI_MAX_I_GLYPH_METRICS    0
#define FI_MAX_F_GLYPH_METRICS   40
#define FI_MAX_BITMAP_WIDTH      80      /* u16 */
#define FI_MAX_BITMAP_HEIGHT     82      /* u16 */
#define FI_NUM_CHARS             84
#define FI_NUM_SUB_CHARS         88
#define FI_FONT_STYLE_INFO       92
#define FI_PIXEL_DEPTH          260      /* u8 */
#define FI_SIZE                 264

/* SceFont_t_userImageBufferRec */
#define UIB_PIXEL_FORMAT          0
#define UIB_X_POS64               4
#define UIB_Y_POS64               8
#define UIB_RECT_WIDTH           12      /* u16 */
#define UIB_RECT_HEIGHT          14      /* u16 */
#define UIB_BYTES_PER_LINE       16      /* u16 */
#define UIB_BUFFER               20
#define UIB_SIZE                 24

/* --- synthetic fallback font ------------------------------------------- */
/* 16x20 4bpp Latin face, 8-pixel advance. i-variant metrics are 26.6 fixed
 * point, so a pixel is 64. */
#define FONT_PIXEL_DEPTH          4
#define FONT_MAX_BITMAP_W        16
#define FONT_MAX_BITMAP_H        20
#define FONT_ASCENDER_PX         16
#define FONT_DESCENDER_PX         4
#define FONT_ADVANCE_PX           8
#define FONT_NUM_CHARS          256
#define PX64(n)                 ((u32)((n) * 64))

/* --- handles ----------------------------------------------------------- */
/* Opaque to the guest; values sit outside guest address space so a stray
 * dereference faults loudly. */
#define LIB_HANDLE_BASE   0xF0000100u
#define FONT_HANDLE_BASE  0xF0000200u

typedef struct { int used; u32 handle; int open_count; } FontLib;
typedef struct { int used; u32 handle; u32 lib; int index; } FontInst;

#define MAX_LIBS 4
static FontLib  g_libs[MAX_LIBS];
static FontInst g_fonts[SCE_FONT_MAX_OPEN];
static u32      g_next_handle = 1;
static int      g_reported_blank;

/* --- real PGF fonts ----------------------------------------------------- */
/* ltn0.pgf covers Latin/punctuation; jpn0.pgf is the CJK fallback. */
static PGF *s_pgf_ltn = NULL, *s_pgf_jpn = NULL;
static int  s_pgf_tried = 0;

static void font_load(void)
{
    char path[600];
    const char *dir;

    if (s_pgf_tried) return;
    s_pgf_tried = 1;
    dir = getenv("PSPRECO_FONTDIR");
    if (dir) { snprintf(path, sizeof path, "%s/ltn0.pgf", dir); s_pgf_ltn = pgf_open(path); }
    if (!s_pgf_ltn) s_pgf_ltn = pgf_open("third_party/ppsspp/assets/flash0/font/ltn0.pgf");
    if (!s_pgf_ltn) s_pgf_ltn = pgf_open("build/ltn0.pgf");
    if (dir) { snprintf(path, sizeof path, "%s/jpn0.pgf", dir); s_pgf_jpn = pgf_open(path); }
    if (!s_pgf_jpn) s_pgf_jpn = pgf_open("third_party/ppsspp/assets/flash0/font/jpn0.pgf");
    if (!s_pgf_jpn) s_pgf_jpn = pgf_open("build/jpn0.pgf");
    hle_log("[hle] libfont: PGF fonts ltn0=%s jpn0=%s",
            s_pgf_ltn ? "loaded" : "MISSING",
            s_pgf_jpn ? "loaded" : "MISSING");
}

/* Font with a glyph for `cc` (Latin first, then CJK), or NULL. */
static const PGF *font_for(int cc)
{
    font_load();
    if (s_pgf_ltn && pgf_has_char(s_pgf_ltn, cc)) return s_pgf_ltn;
    if (s_pgf_jpn && pgf_has_char(s_pgf_jpn, cc)) return s_pgf_jpn;
    return NULL;
}

static FontLib *lib_by_handle(u32 h)
{
    int i;
    for (i = 0; i < MAX_LIBS; i++)
        if (g_libs[i].used && g_libs[i].handle == h) return &g_libs[i];
    return NULL;
}

static FontInst *font_by_handle(u32 h)
{
    int i;
    for (i = 0; i < SCE_FONT_MAX_OPEN; i++)
        if (g_fonts[i].used && g_fonts[i].handle == h) return &g_fonts[i];
    return NULL;
}

static void set_err(u8 *ram, u32 errp, u32 code)
{
    if (errp) mem_w32(ram, errp, code);
}

/* sceFontNewLib(initRec, err). The initRec's alloc/open callbacks go unused:
 * state lives on the host and nothing is allocated in guest memory. */
void hle_sceFontNewLib(CpuCtx *c, u8 *ram)
{
    u32 initrec = HLE_A0;
    u32 errp    = HLE_A1;
    int i, slot = -1;

    if (!initrec) {
        set_err(ram, errp, SCE_FONT_ERR_ARG);
        hle_log("[hle] sceFontNewLib(NULL) -> ERR_ARG");
        HLE_RET(0);
        return;
    }
    for (i = 0; i < MAX_LIBS; i++) if (!g_libs[i].used) { slot = i; break; }
    if (slot < 0) {
        set_err(ram, errp, SCE_FONT_ERR_NOMEMORY);
        hle_log("[hle] sceFontNewLib: no free library slot (max %d)",
                MAX_LIBS);
        HLE_RET(0);
        return;
    }
    g_libs[slot].used = 1;
    g_libs[slot].handle = LIB_HANDLE_BASE + g_next_handle++;
    g_libs[slot].open_count = 0;
    set_err(ram, errp, SCE_FONT_NOERROR);
    hle_log("[hle] sceFontNewLib(initRec=%08x) -> lib %08x",
            initrec, g_libs[slot].handle);
    HLE_RET(g_libs[slot].handle);
}

void hle_sceFontDoneLib(CpuCtx *c, u8 *ram)
{
    FontLib *l = lib_by_handle(HLE_A0);
    int i;
    (void)ram;
    if (!l) {
        hle_log("[hle] sceFontDoneLib(%08x) -> ERR_LIBID", HLE_A0);
        HLE_RET(SCE_FONT_ERR_LIBID);
        return;
    }
    for (i = 0; i < SCE_FONT_MAX_OPEN; i++)
        if (g_fonts[i].used && g_fonts[i].lib == l->handle)
            g_fonts[i].used = 0;
    l->used = 0;
    hle_log("[hle] sceFontDoneLib(%08x)", HLE_A0);
    HLE_RET(SCE_FONT_NOERROR);
}

/* "Optimum" over a one-font system is index 0, the system default font. */
void hle_sceFontFindOptimumFont(CpuCtx *c, u8 *ram)
{
    FontLib *l = lib_by_handle(HLE_A0);
    u32 style = HLE_A1;
    u32 errp  = HLE_A2;

    if (!l) {
        set_err(ram, errp, SCE_FONT_ERR_LIBID);
        hle_log("[hle] sceFontFindOptimumFont(%08x) -> ERR_LIBID", HLE_A0);
        HLE_RET(-1);
        return;
    }
    if (!style) {
        set_err(ram, errp, SCE_FONT_ERR_ARG);
        HLE_RET(-1);
        return;
    }
    set_err(ram, errp, SCE_FONT_NOERROR);
    hle_log("[hle] sceFontFindOptimumFont(lib=%08x, style=%08x) -> index 0 "
            "(the system default font)", HLE_A0, style);
    HLE_RET(0);
}

void hle_sceFontOpen(CpuCtx *c, u8 *ram)
{
    FontLib *l = lib_by_handle(HLE_A0);
    int index  = (int)HLE_A1;
    u32 mode   = HLE_A2;
    u32 errp   = HLE_A3;
    int i, slot = -1;

    if (!l) {
        set_err(ram, errp, SCE_FONT_ERR_LIBID);
        hle_log("[hle] sceFontOpen(%08x) -> ERR_LIBID", HLE_A0);
        HLE_RET(0);
        return;
    }
    for (i = 0; i < SCE_FONT_MAX_OPEN; i++)
        if (!g_fonts[i].used) { slot = i; break; }
    if (slot < 0) {
        set_err(ram, errp, SCE_FONT_ERR_TOOMANYOPENED);
        hle_log("[hle] sceFontOpen: %d fonts already open (libfont.h:40)",
                SCE_FONT_MAX_OPEN);
        HLE_RET(0);
        return;
    }
    g_fonts[slot].used = 1;
    g_fonts[slot].handle = FONT_HANDLE_BASE + g_next_handle++;
    g_fonts[slot].lib = l->handle;
    g_fonts[slot].index = index;
    l->open_count++;
    set_err(ram, errp, SCE_FONT_NOERROR);
    hle_log("[hle] sceFontOpen(lib=%08x, index=%d, mode=%u) -> font %08x",
            HLE_A0, index, mode, g_fonts[slot].handle);
    HLE_RET(g_fonts[slot].handle);
}

void hle_sceFontClose(CpuCtx *c, u8 *ram)
{
    FontInst *f = font_by_handle(HLE_A0);
    FontLib *l;
    (void)ram;
    if (!f) {
        hle_log("[hle] sceFontClose(%08x) -> ERR_ARG", HLE_A0);
        HLE_RET(SCE_FONT_ERR_ARG);
        return;
    }
    l = lib_by_handle(f->lib);
    if (l && l->open_count > 0) l->open_count--;
    f->used = 0;
    hle_log("[hle] sceFontClose(%08x)", HLE_A0);
    HLE_RET(SCE_FONT_NOERROR);
}

/* Fill a SceFont_t_iGlyphMetricsInfo at `p`. */
static void write_iglyph_metrics(u8 *ram, u32 p, u32 w_px, u32 h_px)
{
    mem_w32(ram, p + IGM_WIDTH64,        PX64(w_px));
    mem_w32(ram, p + IGM_HEIGHT64,       PX64(h_px));
    mem_w32(ram, p + IGM_ASCENDER64,     PX64(FONT_ASCENDER_PX));
    mem_w32(ram, p + IGM_DESCENDER64,    (u32)(-(s32)PX64(FONT_DESCENDER_PX)));
    mem_w32(ram, p + IGM_H_BEARING_X64,  0u);
    mem_w32(ram, p + IGM_H_BEARING_Y64,  PX64(FONT_ASCENDER_PX));
    mem_w32(ram, p + IGM_V_BEARING_X64,  0u);
    mem_w32(ram, p + IGM_V_BEARING_Y64,  PX64(FONT_ASCENDER_PX));
    mem_w32(ram, p + IGM_H_ADVANCE64,    PX64(FONT_ADVANCE_PX));
    mem_w32(ram, p + IGM_V_ADVANCE64,    PX64(FONT_MAX_BITMAP_H));
}

/* The float mirror of the same metrics. */
static void write_fglyph_metrics(u8 *ram, u32 p, u32 w_px, u32 h_px)
{
    f32 v[10];
    u32 i;
    v[0] = (f32)w_px;
    v[1] = (f32)h_px;
    v[2] = (f32)FONT_ASCENDER_PX;
    v[3] = -(f32)FONT_DESCENDER_PX;
    v[4] = 0.0f;
    v[5] = (f32)FONT_ASCENDER_PX;
    v[6] = 0.0f;
    v[7] = (f32)FONT_ASCENDER_PX;
    v[8] = (f32)FONT_ADVANCE_PX;
    v[9] = (f32)FONT_MAX_BITMAP_H;
    for (i = 0; i < 10u; i++)
        mem_w32(ram, p + 4u * i, f2u(v[i]));
}

void hle_sceFontGetFontInfo(CpuCtx *c, u8 *ram)
{
    FontInst *f = font_by_handle(HLE_A0);
    u32 out = HLE_A1;
    u32 si;
    static const char name[] = "pspreco-latin";

    if (!f || !out) {
        hle_log("[hle] sceFontGetFontInfo(%08x, %08x) -> ERR_ARG",
                HLE_A0, out);
        HLE_RET(SCE_FONT_ERR_ARG);
        return;
    }
    font_load();
    {
        const PGF *p = s_pgf_ltn ? s_pgf_ltn : s_pgf_jpn;
        if (p) {
            u32 i;
            for (i = 0; i < FI_SIZE; i += 4) mem_w32(ram, out + i, 0u);
            pgf_get_font_info(ram, p, out);
            hle_log("[hle] sceFontGetFontInfo(font=%08x) -> PGF metrics",
                    HLE_A0);
            HLE_RET(SCE_FONT_NOERROR);
            return;
        }
    }
    {
        u32 i;
        for (i = 0; i < FI_SIZE; i += 4) mem_w32(ram, out + i, 0u);
    }
    write_iglyph_metrics(ram, out + FI_MAX_I_GLYPH_METRICS,
                         FONT_MAX_BITMAP_W, FONT_MAX_BITMAP_H);
    write_fglyph_metrics(ram, out + FI_MAX_F_GLYPH_METRICS,
                         FONT_MAX_BITMAP_W, FONT_MAX_BITMAP_H);
    mem_w16(ram, out + FI_MAX_BITMAP_WIDTH,  FONT_MAX_BITMAP_W);
    mem_w16(ram, out + FI_MAX_BITMAP_HEIGHT, FONT_MAX_BITMAP_H);
    mem_w32(ram, out + FI_NUM_CHARS,     FONT_NUM_CHARS);
    mem_w32(ram, out + FI_NUM_SUB_CHARS, 0u);
    mem_w8 (ram, out + FI_PIXEL_DEPTH,   FONT_PIXEL_DEPTH);

    si = out + FI_FONT_STYLE_INFO;
    mem_w32(ram, si + FSI_H_SIZE,       f2u((f32)FONT_MAX_BITMAP_H));
    mem_w32(ram, si + FSI_V_SIZE,       f2u((f32)FONT_MAX_BITMAP_H));
    mem_w32(ram, si + FSI_H_RESOLUTION, f2u(128.0f));
    mem_w32(ram, si + FSI_V_RESOLUTION, f2u(128.0f));
    mem_w32(ram, si + FSI_WEIGHT,       f2u(0.0f));
    mem_w16(ram, si + FSI_FAMILY_CODE,   SCE_FONT_FAMILY_SANSERIF);
    mem_w16(ram, si + FSI_STYLE,         SCE_FONT_STYLE_REGULAR);
    mem_w16(ram, si + FSI_SUB_STYLE,     0);
    mem_w16(ram, si + FSI_LANGUAGE_CODE, SCE_FONT_LANGUAGE_LATIN);
    mem_w16(ram, si + FSI_REGION_CODE,   SCE_FONT_GENERIC_REGION_CODE);
    mem_w16(ram, si + FSI_COUNTRY_CODE,  SCE_FONT_COUNTRY_USA);
    {
        u32 i;
        for (i = 0; i < sizeof name; i++)
            mem_w8(ram, si + FSI_FONT_NAME + i, (u8)name[i]);
    }
    hle_log("[hle] sceFontGetFontInfo(font=%08x) -> %dx%d, %d bpp, %d chars",
            HLE_A0, FONT_MAX_BITMAP_W, FONT_MAX_BITMAP_H, FONT_PIXEL_DEPTH,
            FONT_NUM_CHARS);
    HLE_RET(SCE_FONT_NOERROR);
}

/* Per-glyph metrics from pgf.c when loaded; else a fixed monospaced box. */
void hle_sceFontGetCharInfo(CpuCtx *c, u8 *ram)
{
    FontInst *f = font_by_handle(HLE_A0);
    u32 code = HLE_A1 & 0xFFFFu;
    u32 out  = HLE_A2;
    u32 i;

    if (!f || !out) {
        hle_log("[hle] sceFontGetCharInfo(%08x, U+%04X, %08x) -> ERR_ARG",
                HLE_A0, code, out);
        HLE_RET(SCE_FONT_ERR_ARG);
        return;
    }
    {
        const PGF *p = font_for((int)code);
        if (p) {
            pgf_get_char_info(ram, p, (int)code, 0, out);
            HLE_RET(SCE_FONT_NOERROR);
            return;
        }
    }
    /* No PGF covers this code point: synthetic monospaced fallback. */
    for (i = 0; i < CI_SIZE; i += 4) mem_w32(ram, out + i, 0u);
    mem_w32(ram, out + CI_BITMAP_WIDTH,  FONT_ADVANCE_PX);
    mem_w32(ram, out + CI_BITMAP_HEIGHT, FONT_MAX_BITMAP_H);
    mem_w32(ram, out + CI_BITMAP_LEFT,   0u);
    mem_w32(ram, out + CI_BITMAP_TOP,    FONT_ASCENDER_PX);
    write_iglyph_metrics(ram, out + CI_GLYPH_METRICS,
                         FONT_ADVANCE_PX, FONT_MAX_BITMAP_H);
    HLE_RET(SCE_FONT_NOERROR);
}

/* Rasterise the glyph into the caller's userImageBufferRec via pgf.c; with
 * no font data the call succeeds, writes nothing, and logs that once. */
void hle_sceFontGetCharGlyphImage(CpuCtx *c, u8 *ram)
{
    FontInst *f = font_by_handle(HLE_A0);
    u32 code = HLE_A1 & 0xFFFFu;
    u32 img  = HLE_A2;

    if (!f || !img) {
        hle_log("[hle] sceFontGetCharGlyphImage(%08x, U+%04X, %08x) -> "
                "ERR_ARG", HLE_A0, code, img);
        HLE_RET(SCE_FONT_ERR_ARG);
        return;
    }
    /* Space and controls (<= 32) never carry pixels. */
    if (code > 32) {
        const PGF *p = font_for((int)code);
        if (p) {
            pgf_draw_glyph(ram, p, (int)code, 0, img);
            HLE_RET(SCE_FONT_NOERROR);
            return;
        }
    }
    font_load();
    if (!g_reported_blank && !s_pgf_ltn && !s_pgf_jpn) {
        g_reported_blank = 1;
        hle_log("[hle] sceFontGetCharGlyphImage: pspreco has no font data -- "
                "the PSP's system fonts live in console flash and are not "
                "ours to ship. Text will lay out correctly and draw blank. "
                "First call: U+%04X into buffer %08x (fmt=%u, %ux%u, "
                "stride=%u, pen=%d.%02d,%d.%02d)",
                code, mem_r32(ram, img + UIB_BUFFER),
                mem_r32(ram, img + UIB_PIXEL_FORMAT),
                mem_r16(ram, img + UIB_RECT_WIDTH),
                mem_r16(ram, img + UIB_RECT_HEIGHT),
                mem_r16(ram, img + UIB_BYTES_PER_LINE),
                (s32)mem_r32(ram, img + UIB_X_POS64) / 64,
                ((s32)mem_r32(ram, img + UIB_X_POS64) % 64) * 100 / 64,
                (s32)mem_r32(ram, img + UIB_Y_POS64) / 64,
                ((s32)mem_r32(ram, img + UIB_Y_POS64) % 64) * 100 / 64);
    }
    HLE_RET(SCE_FONT_NOERROR);
}
