/* sceGe renderer: state machine, T&L, and the software rasteriser.
 *
 * Ported from the previous project's GE; pixel rules derive from PPSSPP's
 * software renderer (GPLv2+). Display-list control flow (queueing, stall,
 * SIGNAL/FINISH) stays in runtime/hle/ge.c, which feeds each state word
 * through ge_state_command() and each PRIM through ge_draw_prim().
 *
 * Not emulated: stencil ops (PSP stencil lives in destination alpha), logic
 * ops, colour test, bezier/spline patches, mipmaps (level 0 only).
 *
 * Each GE command word is (cmd<<24)|data24.
 */

#include "pspreco.h"
#include "ge.h"
#include "ge_shared.h"
#include "../host/settings.h"

#include <stdint.h>
#include <string.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/* Guest memory: flat RAM window; the ported code's MEM_* macros map onto it. */
static u8 *s_ram;
#define MEM_R8(a)   mem_r8(s_ram, (a))
#define MEM_R16(a)  mem_r16(s_ram, (a))
#define MEM_R32(a)  mem_r32(s_ram, (a))
#define MEM_W16(a, v) mem_w16(s_ram, (a), (v))
#define MEM_W32(a, v) mem_w32(s_ram, (a), (v))
#define SR_HOST(a)  (s_ram + ((a) & PSP_ADDR_MASK))

/* Wall-clock ms (MinGW clock() is wall time with CLOCKS_PER_SEC=1000). */
static unsigned long wall_ms(void) { return (unsigned long)(clock() * 1000ull / CLOCKS_PER_SEC); }

/* ---- command numbers (subset) ---- */
enum {
    GE_NOP = 0x00, GE_VADDR = 0x01, GE_IADDR = 0x02, GE_PRIM = 0x04,
    GE_BEZIER = 0x05, GE_SPLINE = 0x06, GE_BOUNDINGBOX = 0x07,
    GE_JUMP = 0x08, GE_BJUMP = 0x09, GE_CALL = 0x0A, GE_RET = 0x0B,
    GE_END = 0x0C, GE_FINISH = 0x0F, GE_SIGNAL = 0x0E,
    GE_VERTEXTYPE = 0x12,
    GE_BASE = 0x10, GE_OFFSETADDR = 0x13, GE_ORIGIN = 0x14,
    GE_REGION1 = 0x15, GE_REGION2 = 0x16,
    GE_LIGHTINGENABLE = 0x17, GE_LIGHTENABLE0 = 0x18,
    GE_CLIPENABLE = 0x1C, GE_CULLFACEENABLE = 0x1D, GE_TEXTUREMAPENABLE = 0x1E,
    GE_FOGENABLE = 0x1F, GE_DITHERENABLE = 0x20, GE_ALPHABLENDENABLE = 0x21,
    GE_ALPHATESTENABLE = 0x22, GE_ZTESTENABLE = 0x23, GE_STENCILTESTENABLE = 0x24,
    GE_ANTIALIASENABLE = 0x25, GE_PATCHCULLENABLE = 0x26,
    GE_COLORTESTENABLE = 0x27, GE_LOGICOPENABLE = 0x28,
    GE_PATCHDIVISION = 0x36, GE_PATCHPRIMITIVE = 0x37, GE_PATCHFACING = 0x38,
    GE_WORLDMATRIXNUMBER = 0x3A, GE_WORLDMATRIXDATA = 0x3B,
    GE_VIEWMATRIXNUMBER  = 0x3C, GE_VIEWMATRIXDATA  = 0x3D,
    GE_PROJMATRIXNUMBER  = 0x3E, GE_PROJMATRIXDATA  = 0x3F,
    GE_TGENMATRIXNUMBER = 0x40, GE_TGENMATRIXDATA = 0x41,
    GE_VIEWPORTXSCALE = 0x42, GE_VIEWPORTYSCALE = 0x43, GE_VIEWPORTZSCALE = 0x44,
    GE_VIEWPORTXCENTER = 0x45, GE_VIEWPORTYCENTER = 0x46, GE_VIEWPORTZCENTER = 0x47,
    GE_TEXSCALEU = 0x48, GE_TEXSCALEV = 0x49, GE_TEXOFFSETU = 0x4A, GE_TEXOFFSETV = 0x4B,
    GE_OFFSETX = 0x4C, GE_OFFSETY = 0x4D,
    GE_SHADEMODE = 0x50, GE_REVERSENORMAL = 0x51, GE_MATERIALUPDATE = 0x53,
    GE_MATERIALEMISSIVE = 0x54, GE_MATERIALAMBIENT = 0x55, GE_MATERIALDIFFUSE = 0x56,
    GE_MATERIALSPECULAR = 0x57, GE_MATERIALALPHA = 0x58, GE_MATERIALSPECULARCOEF = 0x5B,
    GE_AMBIENTCOLOR = 0x5C, GE_AMBIENTALPHA = 0x5D, GE_LIGHTMODE = 0x5E,
    GE_LIGHTTYPE0 = 0x5F,                       /* ..0x62 */
    GE_LX0 = 0x63, GE_LDX0 = 0x6F, GE_LKA0 = 0x7B,   /* pos / dir / attenuation, 12 each */
    GE_LKS0 = 0x87, GE_LKO0 = 0x8B,                  /* spot exponent / cutoff, 4 each */
    GE_LAC0 = 0x8F,                                  /* light colours amb/diff/spec ×4 = 12 */
    GE_CULL = 0x9B,
    GE_FRAMEBUFPTR = 0x9C, GE_FRAMEBUFWIDTH = 0x9D, GE_ZBUFPTR = 0x9E, GE_ZBUFWIDTH = 0x9F,
    GE_TEXADDR0 = 0xA0, GE_TEXBUFWIDTH0 = 0xA8,
    GE_CLUTADDR = 0xB0, GE_CLUTADDRUPPER = 0xB1,
    GE_TEXSIZE0 = 0xB8,
    GE_TEXMAPMODE = 0xC0, GE_TEXSHADELS = 0xC1, GE_TEXMODE = 0xC2, GE_TEXFORMAT = 0xC3,
    GE_LOADCLUT = 0xC4, GE_CLUTFORMAT = 0xC5, GE_TEXFILTER = 0xC6, GE_TEXWRAP = 0xC7,
    GE_TEXLEVEL = 0xC8, GE_TEXFUNC = 0xC9, GE_TEXENVCOLOR = 0xCA,
    GE_TEXFLUSH = 0xCB, GE_TEXSYNC = 0xCC,
    GE_FOG1 = 0xCD, GE_FOG2 = 0xCE, GE_FOGCOLOR = 0xCF, GE_TEXLODSLOPE = 0xD0,
    GE_FRAMEBUFPIXFORMAT = 0xD2, GE_CLEARMODE = 0xD3,
    GE_SCISSOR1 = 0xD4, GE_SCISSOR2 = 0xD5,
    GE_MINZ = 0xD6, GE_MAXZ = 0xD7,
    GE_COLORTEST = 0xD8, GE_COLORREF = 0xD9, GE_COLORTESTMASK = 0xDA,
    GE_ALPHATEST = 0xDB, GE_STENCILTEST = 0xDC, GE_STENCILOP = 0xDD, GE_ZTEST = 0xDE,
    GE_BLENDMODE = 0xDF, GE_BLENDFIXEDA = 0xE0, GE_BLENDFIXEDB = 0xE1,
    GE_DITH0 = 0xE2, GE_DITH1 = 0xE3, GE_DITH2 = 0xE4, GE_DITH3 = 0xE5,
    GE_LOGICOP = 0xE6, GE_ZWRITEDISABLE = 0xE7,
    GE_MASKRGB = 0xE8, GE_MASKALPHA = 0xE9,
    GE_TRANSFERSRC = 0xB2, GE_TRANSFERSRCW = 0xB3,
    GE_TRANSFERDST = 0xB4, GE_TRANSFERDSTW = 0xB5,
    GE_TRANSFERSTART = 0xEA, GE_TRANSFERSRCPOS = 0xEB,
    GE_TRANSFERDSTPOS = 0xEC, GE_TRANSFERSIZE = 0xEE,
};

/* GeState lives in ge_shared.h (shared with the optional GPU backend). */
static GeState ge;
static int s_ge_inited = 0;

/* Optional GPU rasterizer hooks (ge_shared.h). NULL = pure software. */
static const GeGpuHooks *s_gpu = NULL;
void ge_set_gpu_hooks(const GeGpuHooks *h) { s_gpu = h; }
GeState *ge_state_ptr(void) { return &ge; }
void ge_gpu_vram_dirty(u32 addr, u32 bytes) {
    if (s_gpu && s_gpu->vram_dirty) s_gpu->vram_dirty(addr, bytes);
}
void ge_gpu_flush(const char *reason) {
    if (s_gpu && s_gpu->flush) s_gpu->flush(reason);
}
/* Registered by the GPU backend; NULL means present from guest VRAM. */
int (*ge_gpu_present_fn)(u32 fbaddr, int fmt, u32 stride) = NULL;

/* Decode a GE 24-bit float mantissa word to IEEE-754 float.
 * The GE stores floats as the upper 24 bits of a 32-bit float (mantissa only; exp+sign). */
static float decode_float24(uint32_t data) {
    uint32_t f = data << 8;
    float r; memcpy(&r, &f, 4); return r;
}

static void ge_state_init(void) {
    ge.scis_x2 = 479; ge.scis_y2 = 271;
    ge.maxz = 0xFFFF;
    ge.tex_scale_u = ge.tex_scale_v = 1.0f;
    ge.shade_gouraud = 1;
    ge.amb_alpha = 0xFF;   /* lit alpha multiplies by this; 0 would blank lit geometry pre-init */
    s_ge_inited = 1;
}

/* ---- Depth buffer ----
 * Software 16-bit depth buffer, one entry per pixel, max stride 512.
 * Only active when ge.ztest_enable is set. */
static uint16_t s_zbuf[272 * 512];

static uint32_t zbuf_stride(void) { return ge.zbw ? ge.zbw : (ge.fbw ? ge.fbw : 512); }

uint16_t *ge_zbuf_ptr(void) { return s_zbuf; }
uint32_t  ge_zbuf_stride(void) { return zbuf_stride(); }

static void zbuf_fill_rect(int x0, int y0, int x1, int y1, uint16_t z) {
    uint32_t stride = zbuf_stride();
    if (x0 < 0) x0 = 0;
    if (y0 < 0) y0 = 0;
    for (int y = y0; y <= y1; y++) {
        uint32_t base = (uint32_t)y * stride;
        for (int x = x0; x <= x1; x++) {
            uint32_t idx = base + (uint32_t)x;
            if (idx < 272u * 512u) s_zbuf[idx] = z;
        }
    }
}

static void stat_zfail(void);
static int ztest_px(int x, int y, uint16_t z) {
    if (!ge.ztest_enable) return 1;
    uint32_t idx = (uint32_t)(y * (int)zbuf_stride() + x);
    if (idx >= 272u * 512u) return 0;
    uint16_t cur = s_zbuf[idx];
    int pass;
    switch (ge.ztest & 7) {
        case 0: pass = 0; break;
        case 1: pass = 1; break;
        case 2: pass = (z == cur); break;
        case 3: pass = (z != cur); break;
        case 4: pass = (z < cur); break;
        case 5: pass = (z <= cur); break;
        case 6: pass = (z > cur); break;
        case 7: pass = (z >= cur); break;
        default: pass = 1;
    }
    if (pass && !ge.zwrite_disable) s_zbuf[idx] = z;
    if (!pass) stat_zfail();
    return pass;
}

/* Clamp interpolated depth to 16 bits. minz/maxz are NOT a clamp (see zrange_ok). */
static uint16_t clamp_z(float zf) {
    if (zf < 0.0f) zf = 0.0f; else if (zf > 65535.0f) zf = 65535.0f;
    return (uint16_t)zf;
}

/* PSP depth-range test (per PPSSPP): transform-mode pixels with z outside
 * [minz,maxz] are DISCARDED — even in clear mode, even with z-test disabled. */
static int zrange_ok(float zf, int persp) {
    if (!persp) return 1;
    int z = (int)zf;
    return z >= (int)ge.minz && z <= (int)ge.maxz;
}

/* Decode the vertex format. Supports 8/16/float texcoord, colour, normal, and position.
 * Returns the stride; fills offsets (-1 if absent). through=1 means screen-space (2D). */
typedef struct {
    int stride, tc_off, tc_fmt, col_off, col_fmt;
    int nrm_off, nrm_fmt;    /* normal (lighting; -1 if absent) */
    int pos_off, pos_fmt;
    int w_off, w_fmt, w_n;   /* skinning weights (w_n==0 if absent) */
    int through;
} VFmt;

static void decode_vtype(uint32_t vt, VFmt *v) {
    memset(v, 0, sizeof(*v));
    v->nrm_off = -1; v->tc_off = -1; v->col_off = -1;
    int tc = vt & 3, col = (vt >> 2) & 7, nrm = (vt >> 5) & 3, pos = (vt >> 7) & 3;
    int wt = (vt >> 9) & 3;   /* weight format (skinning) */
    int wc = (vt >> 14) & 7;  /* weight count */
    v->through = (vt >> 23) & 1;

    static const int csz[4] = { 0, 1, 2, 4 };               /* none/8-bit/16-bit/float */
    static const int colsz[8] = { 0, 0, 0, 0, 2, 2, 2, 4 }; /* 4=5650,5=5551,6=4444,7=8888 */
    int off = 0, maxa = 1;

    /* Skinning weights come first if present. The count field is n-1: wc==0 with a
     * nonzero format means ONE weight. */
    if (wt) {
        int a = csz[wt];
        off = (off + a - 1) & ~(a - 1);
        v->w_fmt = wt; v->w_n = wc + 1; v->w_off = off;
        off += a * (wc + 1);
        if (a > maxa) maxa = a;
    }

    v->tc_fmt = tc;
    if (tc) { int a = csz[tc]; off = (off+a-1)&~(a-1); v->tc_off = off; off += a*2; if (a>maxa) maxa=a; }

    v->col_fmt = col;
    if (col) { int a = colsz[col]; off = (off+a-1)&~(a-1); v->col_off = off; off += a; if (a>maxa) maxa=a; }

    v->nrm_fmt = nrm;
    if (nrm) { int a = csz[nrm]; off = (off+a-1)&~(a-1); v->nrm_off = off; off += a*3; if (a>maxa) maxa=a; }

    v->pos_fmt = pos;
    { int a = csz[pos ? pos : 3]; off = (off+a-1)&~(a-1); v->pos_off = off; off += a*3; if (a>maxa) maxa=a; }

    v->stride = (off + maxa - 1) & ~(maxa - 1);
}

/* Read position. Transform-mode fixed-point normalizes like the hardware: s8/128,
 * s16/32768. Through-mode keeps raw screen units (x/y signed, z unsigned 0..65535). */
static void read_pos(uint32_t addr, const VFmt *v, float *x, float *y, float *z) {
    uint32_t a = addr + (uint32_t)v->pos_off;
    if (v->pos_fmt == 3) {
        uint32_t xi = MEM_R32(a), yi = MEM_R32(a+4), zi = MEM_R32(a+8);
        memcpy(x, &xi, 4); memcpy(y, &yi, 4); memcpy(z, &zi, 4);
    } else if (v->pos_fmt == 2) {
        if (v->through) {
            *x = (float)(int16_t)MEM_R16(a);
            *y = (float)(int16_t)MEM_R16(a+2);
            *z = (float)(uint16_t)MEM_R16(a+4);
        } else {
            *x = (float)(int16_t)MEM_R16(a)   * (1.0f / 32768.0f);
            *y = (float)(int16_t)MEM_R16(a+2) * (1.0f / 32768.0f);
            *z = (float)(int16_t)MEM_R16(a+4) * (1.0f / 32768.0f);
        }
    } else {
        if (v->through) {
            *x = (float)(int8_t)MEM_R8(a);
            *y = (float)(int8_t)MEM_R8(a+1);
            *z = (float)(uint8_t)MEM_R8(a+2);
        } else {
            *x = (float)(int8_t)MEM_R8(a)   * (1.0f / 128.0f);
            *y = (float)(int8_t)MEM_R8(a+1) * (1.0f / 128.0f);
            *z = (float)(int8_t)MEM_R8(a+2) * (1.0f / 128.0f);
        }
    }
}

/* Read texcoords. Through-mode: absolute texels. Transform-mode: UNSIGNED u8/128
 * and u16/32768 (signed reads would flip UVs >= half range). */
static void read_tc(uint32_t addr, const VFmt *v, float *u, float *tv) {
    if (v->tc_off < 0) { *u = 0; *tv = 0; return; }
    uint32_t a = addr + (uint32_t)v->tc_off;
    if (v->tc_fmt == 3) {
        uint32_t ui = MEM_R32(a), vi = MEM_R32(a+4);
        memcpy(u, &ui, 4); memcpy(tv, &vi, 4);
    } else if (v->tc_fmt == 2) {
        if (v->through) {
            *u  = (float)(uint16_t)MEM_R16(a);
            *tv = (float)(uint16_t)MEM_R16(a+2);
        } else {
            *u  = (float)(uint16_t)MEM_R16(a)  * (1.0f / 32768.0f);
            *tv = (float)(uint16_t)MEM_R16(a+2) * (1.0f / 32768.0f);
        }
    } else {
        if (v->through) {
            *u  = (float)MEM_R8(a);
            *tv = (float)MEM_R8(a+1);
        } else {
            *u  = (float)MEM_R8(a)  * (1.0f / 128.0f);
            *tv = (float)MEM_R8(a+1) * (1.0f / 128.0f);
        }
    }
}

/* Read a vertex normal (model space). Defaults to +Z when absent. */
static void read_nrm(uint32_t addr, const VFmt *v, float *x, float *y, float *z) {
    if (v->nrm_off < 0) { *x = 0; *y = 0; *z = 1; return; }
    uint32_t a = addr + (uint32_t)v->nrm_off;
    if (v->nrm_fmt == 3) {
        uint32_t xi = MEM_R32(a), yi = MEM_R32(a+4), zi = MEM_R32(a+8);
        memcpy(x, &xi, 4); memcpy(y, &yi, 4); memcpy(z, &zi, 4);
    } else if (v->nrm_fmt == 2) {
        *x = (float)(int16_t)MEM_R16(a)   * (1.0f / 32768.0f);
        *y = (float)(int16_t)MEM_R16(a+2) * (1.0f / 32768.0f);
        *z = (float)(int16_t)MEM_R16(a+4) * (1.0f / 32768.0f);
    } else {
        *x = (float)(int8_t)MEM_R8(a)   * (1.0f / 128.0f);
        *y = (float)(int8_t)MEM_R8(a+1) * (1.0f / 128.0f);
        *z = (float)(int8_t)MEM_R8(a+2) * (1.0f / 128.0f);
    }
    if (ge.reverse_normal) { *x = -*x; *y = -*y; *z = -*z; }
}

/* Skinning weights: unsigned fixed-point, u8/128 and u16/32768; float raw. */
static void read_weights(uint32_t addr, const VFmt *v, float *w) {
    uint32_t a = addr + (uint32_t)v->w_off;
    for (int i = 0; i < v->w_n; i++) {
        if (v->w_fmt == 3) { uint32_t t = MEM_R32(a + 4u*(uint32_t)i); memcpy(&w[i], &t, 4); }
        else if (v->w_fmt == 2) w[i] = (float)MEM_R16(a + 2u*(uint32_t)i) * (1.0f / 32768.0f);
        else                    w[i] = (float)MEM_R8(a + (uint32_t)i)     * (1.0f / 128.0f);
    }
}

/* Convert a colour in PSP pixel format `psm` (0=5650,1=5551,2=4444,3=8888) read from `raw` into
 * 8-bit R,G,B,A. For 16-bit formats `raw` holds the 16-bit value; for 8888 the full 32 bits. */
static void unpack_color(uint32_t raw, int psm, int *r, int *g, int *b, int *a) {
    switch (psm & 3) {
        case 0: *r=(int)((raw&0x1F)*255/31); *g=(int)(((raw>>5)&0x3F)*255/63); *b=(int)(((raw>>11)&0x1F)*255/31); *a=255; break;
        case 1: *r=(int)((raw&0x1F)*255/31); *g=(int)(((raw>>5)&0x1F)*255/31); *b=(int)(((raw>>10)&0x1F)*255/31); *a=(raw&0x8000)?255:0; break;
        case 2: *r=(int)((raw&0xF)*17); *g=(int)(((raw>>4)&0xF)*17); *b=(int)(((raw>>8)&0xF)*17); *a=(int)(((raw>>12)&0xF)*17); break;
        default: *r=raw&0xFF; *g=(raw>>8)&0xFF; *b=(raw>>16)&0xFF; *a=(raw>>24)&0xFF; break;
    }
}

/* Read a vertex colour into 8-bit RGBA (col_fmt: 4=5650,5=5551,6=4444,7=8888). */
static void read_color(uint32_t addr, const VFmt *v, int *r, int *g, int *b, int *a) {
    if (v->col_off < 0) {
        if (ge.material_set || ge.material_alpha_set) {
            *r = ge.material_set ? (ge.material & 0xFF) : 255;
            *g = ge.material_set ? ((ge.material >> 8) & 0xFF) : 255;
            *b = ge.material_set ? ((ge.material >> 16) & 0xFF) : 255;
            *a = ge.material_alpha_set ? ge.material_alpha : 255;
        } else {
            *r=*g=*b=*a=255;
        }
        return;
    }
    uint32_t ca = addr + (uint32_t)v->col_off;
    if (v->col_fmt == 7) unpack_color(MEM_R32(ca), 3, r, g, b, a);
    else unpack_color(MEM_R16(ca), v->col_fmt - 4, r, g, b, a);
}

/* Look up a CLUT entry (palette index -> RGBA). */
static void clut_lookup(uint32_t index, int *r, int *g, int *b, int *a) {
    uint32_t shift = (ge.clut_fmt >> 2) & 0x1F;
    uint32_t mask  = (ge.clut_fmt >> 8) & 0xFF;
    uint32_t start = ((ge.clut_fmt >> 16) & 0x1F) << 4;
    uint32_t start_mask = (ge.clut_fmt & 3) == 3 ? 0xFFu : 0x1FFu;
    index = ((index >> shift) & mask) | (start & start_mask);
    int epsm = ge.clut_fmt & 3;
    if (epsm == 3) { uint32_t raw; memcpy(&raw, &ge.clutram[(index * 4) & 2047], 4); unpack_color(raw, 3, r, g, b, a); }
    else           { uint16_t raw; memcpy(&raw, &ge.clutram[(index * 2) & 2047], 2); unpack_color(raw, epsm, r, g, b, a); }
}

unsigned long g_tex_samples = 0, g_tex_nonzero = 0;
static uint32_t s_ge_frame = 0;

/* ---- Per-frame statistics (SR_GESTAT=1: print every 60 frames) ---- */
static struct {
    unsigned long tri2d, tri3d, spr2d, spr3d, cull, nearclip, zfail, afail, px2d, px3d, zrange;
    unsigned long mw_world, mw_view, mw_proj;   /* matrix data words captured */
    unsigned long xform;      /* vertex transforms actually performed */
    unsigned long blk3d;                        /* 3D pixels written with final RGB == 0 */
    uint32_t fbs[4]; unsigned long fbn[4];      /* distinct draw-buffer addrs hit + pixel counts */
    unsigned long fog0, fogfull, texa0;         /* full-fog pixels, no-fog pixels, alpha==0 texels */
    unsigned long skin, bonew;                  /* skinned (weighted) 3D prims, bone matrix writes */
    unsigned long deg3d;                        /* zero-area 3D triangles (zeroed/missing vertex data) */
    unsigned long line3d;                       /* 3D line segments submitted (wireframe map etc.) */
} s_stat;

/* SR_GEMATW=1: trace the first view/proj matrix register writes. */
static void trace_mtx_write(const char *name, int cursor, uint32_t data) {
    static int on = -1, n = 0;
    if (on < 0) on = getenv("SR_GEMATW") ? 1 : 0;
    if (!on || n >= 120) return;
    n++;
    fprintf(stderr, "GEMATW f=%u %s[%d] = 0x%06x (%g)\n",
            s_ge_frame, name, cursor, data, decode_float24(data));
}
static void ge_snapshot_plain(const char *path);   /* defined near ge_snapshot below */

static int s_stat_on = -1;
unsigned long g_ge_us_acc = 0;   /* us spent running GE lists; fed by ge.c */

/* SR_GEPROF=1 splits the GE budget by phase. Off by default: the timers sit on
 * a per-triangle path, so they cost a few percent when enabled and nothing at
 * all when not. Enabled, they answer "which part of the renderer is slow"
 * outright, which repeated guessing did not. */
/* These are CPU TICKS, not microseconds: display.c converts them using the
 * tick total over the same interval, so no calibration constant is needed.
 *
 * The clock is rdtsc (~20 cycles), not QueryPerformanceCounter (~60 ns). Two
 * QPC calls per triangle is 1.6M a second, which added ~100 ms of GE time to
 * the very measurement it was taking -- a fifth of the number being read. A
 * profiler that changes the answer by 20% is not much use for deciding what to
 * optimise next. */
unsigned long long g_prof_xform_tk, g_prof_gpu_tk;
/* GPU submit-and-wait stalls, accumulated by ge_gpu_vk.c. Defined here so
 * the headless build (which has no Vulkan backend) still links. */
unsigned long long g_prof_wait_tk;
unsigned long g_prof_wait_n;
unsigned long g_prof_on;

#if defined(__i386__) || defined(__x86_64__) || defined(_M_IX86) || defined(_M_X64)
#  if defined(_MSC_VER)
#    include <intrin.h>
#  else
#    include <x86intrin.h>
#  endif
static u64 prof_tk(void) { return (u64)__rdtsc(); }
#else
#  include <time.h>
static u64 prof_tk(void) {
    struct timespec ts; clock_gettime(CLOCK_MONOTONIC, &ts);
    return (u64)ts.tv_sec * 1000000000u + (u64)ts.tv_nsec;
}
#endif

u64 ge_prof_now_tk(void) { return prof_tk(); }
#define s_ge_ms_acc (g_ge_us_acc / 1000u)
static unsigned long s_wall_last = 0;   /* wall ms at end of previous stat window */
static int s_in3d = 0;   /* current raster path is transform-mode (for px2d/px3d split) */
static int s_ashade = 0; /* per-window budget for alpha-test failure dumps (SR_GESTAT) */
static int s_pixwho_n = 0; /* per-window budget for SR_PIXWHO pixel-ownership dumps */
static int s_pxpass = 0; /* per-window budget for passing-3D-pixel dumps (SR_GESTAT) */
static int s_pxc = 0;    /* per-window budget for centre-pixel write traces (SR_GESTAT) */
static int s_neardump = 0; /* per-window budget for fully-near-clipped primitive dumps (SR_GESTAT) */
static int s_ge3d = 0;     /* per-window budget for per-3D-draw GE3D lines (SR_GESTAT) */
static uint32_t s_ge3d_sigs[48];  /* distinct draw signatures already printed this window */

/* SR_RTRACE=1: per-draw (TRIDRW) and per-triangle (TRIDEC) render trace for the first
 * SR_RTRACE_FRAMES (default 2) 3D frames of each stat window. */
static int s_rtrace = -1;            /* env flag, lazy init */
static int s_rt_fbudget = 2;         /* frames traced per window (SR_RTRACE_FRAMES) */
static int s_rt_frames = 0;          /* frames traced so far this window */
static uint32_t s_rt_cur_frame = 0xFFFFFFFFu;
static int s_rt_active = 0;          /* tracing the current frame */
static uint32_t s_rt_draw = 0;       /* global 3D draw sequence number */
static int s_rt_draws_f = 0;         /* draws logged this frame (cap) */

/* Per-texture alpha-test outcome counters for transform-mode fragments (SR_GESTAT). */
#define ATEX_N 16
static struct { uint32_t addr; unsigned long fail, pass; } s_atex[ATEX_N];
static void atex_note(uint32_t addr, int pass) {
    for (int i = 0; i < ATEX_N; i++) {
        if (s_atex[i].addr == addr || (s_atex[i].fail | s_atex[i].pass) == 0) {
            s_atex[i].addr = addr;
            if (pass) s_atex[i].pass++; else s_atex[i].fail++;
            return;
        }
    }
}
static void stat_zfail(void) { s_stat.zfail++; }

/* Through-mode primitives honour the depth test like the hardware; SR_NO2DZ=1 disables. */
static int thru_ztest(void) {
    static int no2dz = -1;
    if (no2dz < 0) no2dz = getenv("SR_NO2DZ") ? 1 : 0;
    return ge.ztest_enable && !no2dz;
}

void ge_set_frame(uint32_t frame) {
    static int prof_checked;
    if (!prof_checked) { prof_checked = 1; g_prof_on = getenv("SR_GEPROF") ? 1 : 0; }
    s_ge_frame = frame;
    if (s_stat_on < 0) s_stat_on = getenv("SR_GESTAT") ? 1 : 0;
    if (s_stat_on && frame && (frame % 60) == 0) {
        unsigned long now = wall_ms();
        fprintf(stderr,
            "GESTAT f=%u wall=%lums ge=%lums tri2d=%lu tri3d=%lu spr2d=%lu spr3d=%lu cull=%lu near=%lu zfail=%lu afail=%lu px2d=%lu px3d=%lu mw=%lu/%lu/%lu\n",
            frame, now - s_wall_last, s_ge_ms_acc,
            s_stat.tri2d, s_stat.tri3d, s_stat.spr2d, s_stat.spr3d,
            s_stat.cull, s_stat.nearclip, s_stat.zfail, s_stat.afail, s_stat.px2d, s_stat.px3d,
            s_stat.mw_world, s_stat.mw_view, s_stat.mw_proj, s_stat.xform);
        s_wall_last = now;
        g_ge_us_acc = 0;
        fprintf(stderr,
            "GESTAT+ f=%u blk3d=%lu skin=%lu bonew=%lu deg3d=%lu line3d=%lu zrange=%lu zr=[%u,%u] fmt=%u zbp=0x%08x fb=[0x%08x:%lu 0x%08x:%lu 0x%08x:%lu 0x%08x:%lu]\n",
            frame, s_stat.blk3d, s_stat.skin, s_stat.bonew, s_stat.deg3d, s_stat.line3d,
            s_stat.zrange, ge.minz, ge.maxz, ge.fbfmt, ge.zbp,
            s_stat.fbs[0], s_stat.fbn[0], s_stat.fbs[1], s_stat.fbn[1],
            s_stat.fbs[2], s_stat.fbn[2], s_stat.fbs[3], s_stat.fbn[3]);
        fprintf(stderr,
            "GESTAT* f=%u fog0=%lu fogfull=%lu texa0=%lu/%lu atest=%d/0x%06x fogc=0x%06x fend=%g fslope=%g vp=(%.4g,%.4g,%.4g,%.4g) off=(%.4g,%.4g)\n",
            frame, s_stat.fog0, s_stat.fogfull, s_stat.texa0, g_tex_samples,
            ge.atest_enable, ge.atest, ge.fog_color, ge.fog_end, ge.fog_slope,
            decode_float24(ge.viewport_raw[0]), decode_float24(ge.viewport_raw[3]),
            decode_float24(ge.viewport_raw[1]), decode_float24(ge.viewport_raw[4]),
            (float)(ge.offsetx & 0xFFFF) / 16.0f, (float)(ge.offsety & 0xFFFF) / 16.0f);
        for (int i = 0; i < ATEX_N; i++) {
            if (s_atex[i].fail + s_atex[i].pass < 500) continue;
            fprintf(stderr, "ATEX f=%u addr=0x%08x fail=%lu pass=%lu\n",
                    frame, s_atex[i].addr, s_atex[i].fail, s_atex[i].pass);
        }
        memset(s_atex, 0, sizeof(s_atex));
        s_ashade = 0;
        s_pxpass = 0;
        s_pxc = 0;
        s_neardump = 0;
        s_ge3d = 0;
        s_pixwho_n = 0;
        s_rt_frames = 0;
        memset(&s_stat, 0, sizeof(s_stat));
        /* SR_FBSNAP=1: dump the GE framebuffer once per stat window (SR_FBSNAP=<n> caps
         * files; default 40). */
        {
            static int fbsnap = -1; static int nsnap = 0;
            if (fbsnap < 0) {
                const char *fs = getenv("SR_FBSNAP");
                fbsnap = 0;
                if (fs && fs[0]) { fbsnap = atoi(fs); if (fbsnap < 2) fbsnap = 40; }
            }
            if (fbsnap && nsnap < fbsnap) {
                char sp[96];
                snprintf(sp, sizeof(sp), "snap_f%05u.ppm", frame);
                ge_snapshot_plain(sp);
                nsnap++;
            }
        }
    }
}

static uint32_t texel_offset(uint32_t row_pitch_pixels, uint32_t u, uint32_t v, uint32_t texel_bits) {
    if (!ge.tex_swizzle)
        return v * ((row_pitch_pixels * texel_bits) >> 3) + ((u * texel_bits) >> 3);

    /* Swizzled offset, per PPSSPP. */
    const uint32_t tile_bits = 32, tiles_x = 4, tiles_y = 8;
    uint32_t texels_per_tile = tile_bits / texel_bits;
    uint32_t tile_u   = u / texels_per_tile;
    uint32_t tile_idx = (v % tiles_y) * tiles_x
        + (v / tiles_y) * ((row_pitch_pixels * texel_bits / tile_bits) * tiles_y)
        + (tile_u % tiles_x)
        + (tile_u / tiles_x) * (tiles_x * tiles_y);
    return tile_idx * (tile_bits >> 3) + (((u % texels_per_tile) * texel_bits) >> 3);
}

static int tex_coord(int v, int size, int clamp_mode) {
    if (size <= 0) return 0;
    if (clamp_mode) {
        if (v < 0) return 0;
        if (v >= size) return size - 1;
        return v;
    }
    return v & (size - 1) & 511;
}

/* ---- DXT -----------------------------------------------------------------
 * PSP DXT block layout differs from DDS; measured against the reference
 * imgconv.exe output:
 *
 *   DXT1, 8 bytes:   [colour indices 4][c0 c1 4]
 *   DXT3, 16 bytes:  [colour indices 4][c0 c1 4][alpha 8]
 *   DXT5, 16 bytes:  [colour indices 4][c0 c1 4][alpha indices 6][a0 a1]
 *
 * Within each field the bit layout is standard S3TC. Blocks are 4x4, row of
 * blocks strided by bufw. */

static uint32_t dxt_rgb565(uint32_t v) {
    uint32_t r = (v & 0x1F) << 3, g = ((v >> 5) & 0x3F) << 2, b = ((v >> 11) & 0x1F) << 3;
    r |= r >> 5; g |= g >> 6; b |= b >> 5;
    return 0xFF000000u | (b << 16) | (g << 8) | r;
}

static uint32_t dxt_mix(uint32_t a, uint32_t b, int wa, int wb, int div) {
    uint32_t out = 0xFF000000u;
    for (int i = 0; i < 3; i++) {
        uint32_t ca = (a >> (i*8)) & 0xFF, cb = (b >> (i*8)) & 0xFF;
        out |= ((((int)ca*wa + (int)cb*wb) / div) & 0xFFu) << (i*8);
    }
    return out;
}

/* One DXT texel as 0xAABBGGRR. */
static uint32_t dxt_texel(int s, int t) {
    uint32_t fmt = ge.tex_fmt;
    uint32_t bsz = (fmt == 8) ? 8u : 16u;
    uint32_t stride = ge.tex_bufw ? ge.tex_bufw : (uint32_t)ge.tex_w;
    uint32_t blocks_across = stride / 4u;
    uint32_t bx = (uint32_t)s / 4u, by = (uint32_t)t / 4u;
    uint32_t ix = (uint32_t)s % 4u, iy = (uint32_t)t % 4u;
    uint32_t base, idx, c0raw, c1raw, colour, alpha = 0xFFu;
    uint32_t pal[4];
    unsigned sel;

    if (!blocks_across) blocks_across = 1u;
    base = ge.tex_addr + (by * blocks_across + bx) * bsz;

    idx   = MEM_R32(base + 0);
    c0raw = MEM_R16(base + 4);
    c1raw = MEM_R16(base + 6);
    pal[0] = dxt_rgb565(c0raw);
    pal[1] = dxt_rgb565(c1raw);
    if (fmt == 8 && c0raw <= c1raw) {          /* 3-colour DXT1 variant */
        pal[2] = dxt_mix(pal[0], pal[1], 1, 1, 2);
        pal[3] = 0u;
    } else {
        pal[2] = dxt_mix(pal[0], pal[1], 2, 1, 3);
        pal[3] = dxt_mix(pal[0], pal[1], 1, 2, 3);
    }
    sel = (idx >> ((iy*4u + ix) * 2u)) & 3u;
    colour = pal[sel];

    if (fmt == 9) {                             /* DXT3: 4-bit alpha at +8 */
        uint32_t n = iy*4u + ix;
        uint32_t byte = MEM_R8(base + 8u + (n >> 1));
        alpha = ((n & 1u) ? (byte >> 4) : (byte & 0xFu)) * 17u;
    } else if (fmt == 10) {                     /* DXT5: 3-bit codes, a0/a1 at +14 */
        uint32_t a0 = MEM_R8(base + 14), a1 = MEM_R8(base + 15);
        uint32_t n = iy*4u + ix, bit = n * 3u;
        uint64_t bits = (uint64_t)MEM_R32(base + 8) | ((uint64_t)MEM_R16(base + 12) << 32);
        unsigned code = (unsigned)((bits >> bit) & 7u);
        if (code == 0)      alpha = a0;
        else if (code == 1) alpha = a1;
        else if (a0 > a1)   alpha = ((8u-code)*a0 + (code-1u)*a1) / 7u;
        else if (code == 6) alpha = 0u;
        else if (code == 7) alpha = 255u;
        else                alpha = ((6u-code)*a0 + (code-1u)*a1) / 5u;
    }
    if (fmt == 8 && colour == 0u) return 0u;    /* the transparent case */
    return (colour & 0x00FFFFFFu) | ((alpha & 0xFFu) << 24);
}

static void sample_tex(int tu, int tv, int *r, int *g, int *b, int *a) {
    g_tex_samples++;
    if (ge.tex_w > 0) {
        tu = tex_coord(tu, ge.tex_w, ge.tex_wrap & 1);
        tv = tex_coord(tv, ge.tex_h, (ge.tex_wrap >> 8) & 1);
    }
    uint32_t stride = ge.tex_bufw ? ge.tex_bufw : (uint32_t)ge.tex_w;
    uint32_t u = (uint32_t)tu, v = (uint32_t)tv;
    switch (ge.tex_fmt) {
        case 0: case 1: case 2:
            unpack_color(MEM_R16(ge.tex_addr + texel_offset(stride, u, v, 16)), ge.tex_fmt, r, g, b, a); break;
        case 3:
            unpack_color(MEM_R32(ge.tex_addr + texel_offset(stride, u, v, 32)), 3, r, g, b, a); break;
        case 4: {
            uint32_t off = texel_offset(stride, u, v, 4);
            uint8_t byte = MEM_R8(ge.tex_addr + off);
            int ni = (u & 1) ? (byte >> 4) : (byte & 0xF);
            clut_lookup((uint32_t)ni, r, g, b, a); break;
        }
        case 5: clut_lookup(MEM_R8(ge.tex_addr + texel_offset(stride, u, v, 8)), r, g, b, a); break;
        /* IDTEX16/IDTEX32: the CLUT transform truncates wide indices to a real entry. */
        case 6: clut_lookup(MEM_R16(ge.tex_addr + texel_offset(stride, u, v, 16)), r, g, b, a); break;
        case 7: clut_lookup(MEM_R32(ge.tex_addr + texel_offset(stride, u, v, 32)), r, g, b, a); break;
        case 8: case 9: case 10: {              /* DXT1/3/5 (grafted) */
            uint32_t px = dxt_texel((int)u, (int)v);
            *r = (int)(px & 0xFF); *g = (int)((px >> 8) & 0xFF);
            *b = (int)((px >> 16) & 0xFF); *a = (int)(px >> 24);
            break;
        }
        default: *r=*g=*b=*a=255; break;
    }
    if (*r | *g | *b) g_tex_nonzero++;
    if (s_stat_on > 0 && *a == 0) s_stat.texa0++;
}

static void sample_tex_f(float fu, float fv_coord, int *r, int *g, int *b, int *a) {
    static int nobil = -1; if (nobil < 0) nobil = getenv("SR_NOBILINEAR") ? 1 : 0;
    int use_linear = !nobil && ((ge.tex_filter & 1) || ((ge.tex_filter >> 8) & 1));
    if (!use_linear) { sample_tex((int)(fu + 0.5f), (int)(fv_coord + 0.5f), r, g, b, a); return; }
    /* An integer texel coordinate is that texel's CENTRE -- the same convention
     * the nearest branch above uses. Subtracting 0.5 here would put integers on
     * texel boundaries instead, which makes every pixel of a 1:1 blit (all the
     * HUD text) a 50/50 mix of two neighbouring texels. */
    int u0 = (int)floorf(fu), v0 = (int)floorf(fv_coord);
    int fx = (int)((fu - u0) * 256.0f), fy = (int)((fv_coord - v0) * 256.0f);
    if (fx < 0) fx = 0;
    if (fx > 256) fx = 256;
    if (fy < 0) fy = 0;
    if (fy > 256) fy = 256;
    int r0,g0,b0,a0, r1,g1,b1,a1, r2,g2,b2,a2, r3,g3,b3,a3;
    sample_tex(u0,   v0,   &r0,&g0,&b0,&a0);
    sample_tex(u0+1, v0,   &r1,&g1,&b1,&a1);
    sample_tex(u0,   v0+1, &r2,&g2,&b2,&a2);
    sample_tex(u0+1, v0+1, &r3,&g3,&b3,&a3);
#define LERP1(c0,c1,f) ((c0) + (((c1)-(c0))*(f)>>8))
    int tr=LERP1(r0,r1,fx), tg=LERP1(g0,g1,fx), tb=LERP1(b0,b1,fx), ta=LERP1(a0,a1,fx);
    int br=LERP1(r2,r3,fx), bg=LERP1(g2,g3,fx), bb=LERP1(b2,b3,fx), ba=LERP1(a2,a3,fx);
    *r=LERP1(tr,br,fy); *g=LERP1(tg,bg,fy); *b=LERP1(tb,bb,fy); *a=LERP1(ta,ba,fy);
#undef LERP1
}

/* SR_TEXDUMP=1: write each distinct 3D-draw texture once per run as .ppm (+alpha .pgm),
 * decoded through the exact sampler path. */
static void texdump_maybe(void) {
    static int on = -1;
    if (on < 0) on = getenv("SR_TEXDUMP") ? 1 : 0;
    if (!on || !ge.tex_enable || !ge.tex_addr) return;
    static uint32_t seen[32]; static int n = 0;
    for (int i = 0; i < n; i++) if (seen[i] == ge.tex_addr) return;
    if (n >= 32) return;
    seen[n++] = ge.tex_addr;
    int w = (int)ge.tex_w, h = (int)ge.tex_h;
    if (w <= 0 || h <= 0 || w > 512 || h > 512) return;
    char path[160];
    snprintf(path, sizeof(path), "tex_%08x_f%u_%dx%d.ppm", ge.tex_addr, ge.tex_fmt, w, h);
    FILE *fp = fopen(path, "wb");
    if (!fp) return;
    char patha[160];
    snprintf(patha, sizeof(patha), "tex_%08x_f%u_%dx%d_a.pgm", ge.tex_addr, ge.tex_fmt, w, h);
    FILE *fa = fopen(patha, "wb");
    fprintf(fp, "P6\n%d %d\n255\n", w, h);
    if (fa) fprintf(fa, "P5\n%d %d\n255\n", w, h);
    for (int v = 0; v < h; v++)
        for (int u = 0; u < w; u++) {
            int r, g, b, a;
            sample_tex(u, v, &r, &g, &b, &a);
            unsigned char px[3] = { (unsigned char)r, (unsigned char)g, (unsigned char)b };
            fwrite(px, 1, 3, fp);
            if (fa) { unsigned char pa = (unsigned char)a; fwrite(&pa, 1, 1, fa); }
        }
    fclose(fp);
    if (fa) fclose(fa);
    fprintf(stderr, "TEXDUMP f=%u wrote %s clut=0x%08x/0x%08x sw=%u bufw=%u filter=0x%03x\n",
            s_ge_frame, path, ge.clut_addr, ge.clut_fmt, ge.tex_swizzle, ge.tex_bufw, ge.tex_filter);
}

/* GPU backend texture decode via the exact sampler path above; linear direct-color
 * formats take a row-wise fast path. */
void ge_decode_tex_rgba(uint32_t *out) {
    if (!ge.tex_swizzle && ge.tex_fmt <= 3) {
        uint32_t stride = ge.tex_bufw ? ge.tex_bufw : (uint32_t)ge.tex_w;
        for (int v = 0; v < ge.tex_h; v++) {
            uint32_t *dst = out + (uint32_t)v * (uint32_t)ge.tex_w;
            if (ge.tex_fmt == 3) {
                const uint32_t *src = (const uint32_t *)SR_HOST(ge.tex_addr + (uint32_t)v * stride * 4);
                memcpy(dst, src, (size_t)ge.tex_w * 4);
            } else {
                const uint16_t *src = (const uint16_t *)SR_HOST(ge.tex_addr + (uint32_t)v * stride * 2);
                for (int u = 0; u < ge.tex_w; u++) {
                    int r, g, b, a;
                    unpack_color(src[u], (int)ge.tex_fmt, &r, &g, &b, &a);
                    dst[u] = (uint32_t)r | ((uint32_t)g << 8) | ((uint32_t)b << 16) | ((uint32_t)a << 24);
                }
            }
        }
        return;
    }
    for (int v = 0; v < ge.tex_h; v++)
        for (int u = 0; u < ge.tex_w; u++) {
            int r, g, b, a;
            sample_tex(u, v, &r, &g, &b, &a);
            out[v * ge.tex_w + u] = (uint32_t)(r & 0xFF) | ((uint32_t)(g & 0xFF) << 8) |
                                    ((uint32_t)(b & 0xFF) << 16) | ((uint32_t)(a & 0xFF) << 24);
        }
}

static uint16_t pack565(int r, int g, int b)           { return (uint16_t)(((r>>3)&0x1F)|(((g>>2)&0x3F)<<5)|(((b>>3)&0x1F)<<11)); }
static uint16_t pack5551(int r, int g, int b, int a)   { return (uint16_t)(((r>>3)&0x1F)|(((g>>3)&0x1F)<<5)|(((b>>3)&0x1F)<<10)|(a>=128?0x8000:0)); }
static uint16_t pack4444(int r, int g, int b, int a)   { return (uint16_t)(((r>>4)&0xF)|(((g>>4)&0xF)<<4)|(((b>>4)&0xF)<<8)|(((a>>4)&0xF)<<12)); }
static uint32_t pack8888(int r, int g, int b, int a)   { return (uint32_t)(r&0xFF)|((uint32_t)(g&0xFF)<<8)|((uint32_t)(b&0xFF)<<16)|((uint32_t)(a&0xFF)<<24); }
static uint32_t pack_fb(int r, int g, int b, int a) {
    switch (ge.fbfmt & 3) {
        case 1: return pack5551(r,g,b,a);
        case 2: return pack4444(r,g,b,a);
        case 3: return pack8888(r,g,b,a);
        default: return pack565(r,g,b);
    }
}

static uint32_t ge_rel_addr(uint32_t data) {
    uint32_t base_ext = ((ge.base & 0x000F0000u) << 8) | (data & 0x00FFFFFFu);
    return (ge.offset + base_ext) & 0x0FFFFFFFu;
}

static uint32_t ge_fb_addr(void) { return 0x04000000u | (ge.fbp & 0x001FFFFFu); }

unsigned long g_ge_pixels = 0;
static int clamp8(int v) { return v < 0 ? 0 : v > 255 ? 255 : v; }
static float clampf01(float v) { return v < 0.0f ? 0.0f : v > 1.0f ? 1.0f : v; }

static void read_fb_px(int x, int y, int *r, int *g, int *b, int *a) {
    uint32_t stride = ge.fbw ? ge.fbw : 512;
    uint32_t off = (uint32_t)(y*(int)stride + x);
    if ((ge.fbfmt & 3) == 3) unpack_color(MEM_R32(ge_fb_addr() + off*4), 3, r,g,b,a);
    else                     unpack_color(MEM_R16(ge_fb_addr() + off*2), ge.fbfmt&3, r,g,b,a);
}

static int factor_component(int f, int chan, int sr, int sg, int sb, int sa, int dr, int dg, int db, int da, int srcSide) {
    int sv = chan==0?sr:(chan==1?sg:sb), dv = chan==0?dr:(chan==1?dg:db);
    int fixedA = chan==0?(ge.blend_fixa&0xFF):(chan==1?((ge.blend_fixa>>8)&0xFF):((ge.blend_fixa>>16)&0xFF));
    int fixedB = chan==0?(ge.blend_fixb&0xFF):(chan==1?((ge.blend_fixb>>8)&0xFF):((ge.blend_fixb>>16)&0xFF));
    switch (f & 0xF) {
        case 0: return srcSide?dv:sv;    case 1: return 255-(srcSide?dv:sv);
        case 2: return sa;               case 3: return 255-sa;
        case 4: return da;               case 5: return 255-da;
        case 6: return clamp8(sa*2);     case 7: return clamp8(255-sa*2);
        case 8: return clamp8(da*2);     case 9: return clamp8(255-da*2);
        case 10: default: return srcSide?fixedA:fixedB;
    }
}

static int blend_chan(int s, int d, int sf, int df, int eq) {
    int sv=s*sf/255, dv=d*df/255;
    switch (eq&7) {
        case 1: return clamp8(sv-dv); case 2: return clamp8(dv-sv);
        case 3: return sv<dv?sv:dv;   case 4: return sv>dv?sv:dv;
        case 5: return abs(sv-dv);
        case 0: default: return clamp8(sv+dv);
    }
}

static void put_px_rgba(int x, int y, int r, int g, int b, int a) {
    if (x<0||x>=480||y<0||y>=272) return;
    if (x<ge.scis_x1||x>ge.scis_x2||y<ge.scis_y1||y>ge.scis_y2) return;
    if (s_stat_on > 0 && s_in3d && !ge.clear && s_pxpass < 6) {
        s_pxpass++;
        fprintf(stderr, "PXPASS f=%u xy=(%d,%d) rgba=(%d,%d,%d,%d) fbp=0x%08x blend=%d/%06x\n",
                s_ge_frame, x, y, r, g, b, a, ge.fbp, ge.blend_enable, ge.blend_mode);
    }
    /* Centre-pixel composition trace: every write to (240,136), in order. */
    if (s_stat_on > 0 && x == 240 && y == 136 && s_pxc < 32) {
        s_pxc++;
        fprintf(stderr, "PXC f=%u rgba=(%d,%d,%d,%d) clear=%d in3d=%d tex=%d blend=%d/%06x fixab=%06x/%06x vtype=0x%06x fbp=0x%08x\n",
                s_ge_frame, r, g, b, a, ge.clear, s_in3d, ge.tex_enable,
                ge.blend_enable, ge.blend_mode, ge.blend_fixa, ge.blend_fixb, ge.vtype, ge.fbp);
    }
    if (ge.clear) {
        int write_color = (ge.clear_mode & 0x100) != 0;
        int write_alpha = (ge.clear_mode & 0x200) != 0;
        if (!write_color && !write_alpha) return;
        if (!write_color || !write_alpha) {
            int dr,dg,db,da; read_fb_px(x,y,&dr,&dg,&db,&da);
            if (!write_color) { r=dr; g=dg; b=db; }
            if (!write_alpha) a=da;
        }
    } else {
        if (ge.blend_enable) {
            int dr,dg,db,da; read_fb_px(x,y,&dr,&dg,&db,&da);
            int eq=(int)((ge.blend_mode>>8)&7);
            int rfa=factor_component((int)(ge.blend_mode&0xF),   0,r,g,b,a,dr,dg,db,da,1);
            int gfa=factor_component((int)(ge.blend_mode&0xF),   1,r,g,b,a,dr,dg,db,da,1);
            int bfa=factor_component((int)(ge.blend_mode&0xF),   2,r,g,b,a,dr,dg,db,da,1);
            int rfb=factor_component((int)((ge.blend_mode>>4)&0xF),0,r,g,b,a,dr,dg,db,da,0);
            int gfb=factor_component((int)((ge.blend_mode>>4)&0xF),1,r,g,b,a,dr,dg,db,da,0);
            int bfb=factor_component((int)((ge.blend_mode>>4)&0xF),2,r,g,b,a,dr,dg,db,da,0);
            r=blend_chan(r,dr,rfa,rfb,eq); g=blend_chan(g,dg,gfa,gfb,eq); b=blend_chan(b,db,bfa,bfb,eq);
            a=clamp8(a+da);
        }
        if (ge.dither_enable && (ge.fbfmt & 3) != 3) {
            int d = ge.dith[y & 3][x & 3];
            r = clamp8(r + d); g = clamp8(g + d); b = clamp8(b + d);
        }
        if (ge.mask_rgb || ge.mask_alpha) {
            int dr,dg,db,da; read_fb_px(x,y,&dr,&dg,&db,&da);
            int mr=(int)(ge.mask_rgb&0xFF), mg=(int)((ge.mask_rgb>>8)&0xFF), mb=(int)((ge.mask_rgb>>16)&0xFF);
            r=(r&~mr)|(dr&mr); g=(g&~mg)|(dg&mg); b=(b&~mb)|(db&mb);
            a=(a&~ge.mask_alpha)|(da&ge.mask_alpha);
        }
    }
    uint32_t c = pack_fb(r,g,b,a);
    uint32_t stride = ge.fbw ? ge.fbw : 512;
    if ((ge.fbfmt&3)==3) MEM_W32(ge_fb_addr()+(uint32_t)(y*(int)stride+x)*4, c);
    else                 MEM_W16(ge_fb_addr()+(uint32_t)(y*(int)stride+x)*2, (uint16_t)c);
    g_ge_pixels++;
    if (s_in3d) s_stat.px3d++; else s_stat.px2d++;
    if (s_stat_on > 0) {
        if (s_in3d && r == 0 && g == 0 && b == 0) s_stat.blk3d++;
        uint32_t fba = ge_fb_addr();
        for (int i = 0; i < 4; i++) {
            if (s_stat.fbn[i] == 0 || s_stat.fbs[i] == fba) { s_stat.fbs[i] = fba; s_stat.fbn[i]++; break; }
        }
    }
    extern unsigned long g_list_writes, g_list_nonblack, g_list_clearpx;
    g_list_writes++;
    if (r | g | b) g_list_nonblack++;
    if (ge.clear) g_list_clearpx++;
}

/* put_px_rgba with depth test. */
static void put_px_rgba_z(int x, int y, uint16_t pz, int r, int g, int b, int a) {
    if (x<0||x>=480||y<0||y>=272) return;
    if (!ztest_px(x, y, pz)) return;
    put_px_rgba(x, y, r, g, b, a);
}

/* Rasterized vertex (GeVtx, ge_shared.h); in transform mode u/v are pre-multiplied by rw. */
typedef GeVtx Vtx;

static void load_vtx(uint32_t addr, const VFmt *vf, Vtx *o) {
    float pz; read_pos(addr, vf, &o->x, &o->y, &pz);
    o->z = pz; o->rw = 1.0f; o->fog = 1.0f;
    read_tc(addr, vf, &o->u, &o->v);
    read_color(addr, vf, &o->r, &o->g, &o->b, &o->a);
}

static uint32_t index_value(uint32_t ibase, int idxfmt, int i) {
    switch (idxfmt) {
        case 1: return MEM_R8(ibase+(uint32_t)i);
        case 2: return MEM_R16(ibase+(uint32_t)i*2);
        case 3: return MEM_R32(ibase+(uint32_t)i*4);
        default: return (uint32_t)i;
    }
}

static uint32_t prim_vtx_addr(uint32_t vbase, uint32_t ibase, int idxfmt, int i, int stride) {
    uint32_t vi = idxfmt ? index_value(ibase, idxfmt, i) : (uint32_t)i;
    return vbase + vi * (uint32_t)stride;
}

/* Programmable alpha test (ALPHATEST 0xDB: func | ref<<8 | mask<<16). */
static int alpha_test(int a) {
    if (!ge.atest_enable) return 1;
    static int noatest = -1;
    if (noatest < 0) noatest = getenv("SR_NOATEST") ? 1 : 0;
    if (noatest) return 1;
    int mask = (int)((ge.atest >> 16) & 0xFF);
    int ref  = (int)((ge.atest >> 8) & 0xFF) & mask;
    int av   = a & mask;
    int pass;
    switch (ge.atest & 7) {
        case 0: pass = 0; break;
        case 1: pass = 1; break;
        case 2: pass = (av == ref); break;
        case 3: pass = (av != ref); break;
        case 4: pass = (av <  ref); break;
        case 5: pass = (av <= ref); break;
        case 6: pass = (av >  ref); break;
        case 7: pass = (av >= ref); break;
        default: pass = 1;
    }
    if (!pass) s_stat.afail++;
    return pass;
}

/* Compute final pixel colour from interpolated texcoord+colour+fog.
 * `fog` is fixed-point 0..256 (256 = no fog). Returns 0 if the alpha test rejects. */
static int shade(float u, float fv, int fog, int vr, int vg, int vb, int va, int *or_, int *og, int *ob, int *oa) {
    int r, g, b, a;
    int dbg_ta = -1;
    if (ge.tex_enable && !ge.clear && ge.tex_addr) {
        int tr, tg, tb, ta;
        int rgba = (ge.tex_func & 0x100) != 0;
        int dbl  = (ge.tex_func & 0x10000) != 0;
        sample_tex_f(u, fv, &tr, &tg, &tb, &ta);
        dbg_ta = ta;
        switch (ge.tex_func & 7) {
            case 1: /* decal */
                if (rgba) {
                    int inva=255-ta, div=dbl?128:256;
                    r=((vr+1)*inva+(tr+1)*ta)/div; g=((vg+1)*inva+(tg+1)*ta)/div; b=((vb+1)*inva+(tb+1)*ta)/div;
                } else { r=dbl?tr*2:tr; g=dbl?tg*2:tg; b=dbl?tb*2:tb; }
                a=va; break;
            case 2: { /* blend */
                int er=ge.tex_env&0xFF, eg=(ge.tex_env>>8)&0xFF, eb=(ge.tex_env>>16)&0xFF, div=dbl?128:256;
                r=((255-tr)*vr+tr*er+255)/div; g=((255-tg)*vg+tg*eg+255)/div; b=((255-tb)*vb+tb*eb+255)/div;
                a=rgba?((va+1)*ta/256):va; break;
            }
            case 3: /* replace */
                r=dbl?tr*2:tr; g=dbl?tg*2:tg; b=dbl?tb*2:tb; a=rgba?ta:va; break;
            case 4: case 5: case 6: case 7: /* add */
                r=vr+tr; g=vg+tg; b=vb+tb;
                if (dbl){r*=2;g*=2;b*=2;}
                a=rgba?((va+1)*ta/256):va; break;
            case 0: default: /* modulate */
                r=(vr+1)*(dbl?tr*2:tr)/256; g=(vg+1)*(dbl?tg*2:tg)/256; b=(vb+1)*(dbl?tb*2:tb)/256;
                a=rgba?((va+1)*ta/256):va; break;
        }
        r=clamp8(r); g=clamp8(g); b=clamp8(b); a=clamp8(a);
    } else { r=vr; g=vg; b=vb; a=va; }
    if (!ge.clear) {
        if (!alpha_test(a)) {
            if (s_stat_on > 0 && s_in3d)
                atex_note((ge.tex_enable && ge.tex_addr) ? ge.tex_addr : 0, 0);
            if (s_stat_on > 0 && s_in3d && s_ashade < 8) {
                s_ashade++;
                /* For CLUT formats also show the sampled index byte and raw palette entry. */
                uint32_t rawidx = 0, rawpal = 0;
                if (ge.tex_fmt == 4 || ge.tex_fmt == 5) {
                    uint32_t stride2 = ge.tex_bufw ? ge.tex_bufw : (uint32_t)ge.tex_w;
                    uint32_t tu = (uint32_t)tex_coord((int)u, ge.tex_w, ge.tex_wrap & 1);
                    uint32_t tv = (uint32_t)tex_coord((int)fv, ge.tex_h, (ge.tex_wrap >> 8) & 1);
                    rawidx = MEM_R8(ge.tex_addr + texel_offset(stride2, tu, tv, ge.tex_fmt == 4 ? 4 : 8));
                    if (ge.tex_fmt == 4) rawidx = (tu & 1) ? (rawidx >> 4) : (rawidx & 0xF);
                    uint32_t shift2 = (ge.clut_fmt >> 2) & 0x1F, mask2 = (ge.clut_fmt >> 8) & 0xFF;
                    uint32_t cidx = ((rawidx >> shift2) & mask2);
                    if ((ge.clut_fmt & 3) == 3) memcpy(&rawpal, &ge.clutram[(cidx * 4) & 2047], 4);
                    else { uint16_t p16; memcpy(&p16, &ge.clutram[(cidx * 2) & 2047], 2); rawpal = p16; }
                }
                fprintf(stderr, "ASHADE f=%u va=%d ta=%d out_a=%d texfunc=0x%06x texfmt=%u clutfmt=0x%06x texaddr=0x%08x atest=0x%06x uv=(%.1f,%.1f) tmm=0x%03x vtype=0x%06x tsc=(%g,%g) toff=(%g,%g) tw=%d th=%d bufw=%u swz=%d idx=0x%02x pal=0x%08x lit=%d mupd=%d ama=%d ala=%d\n",
                        s_ge_frame, va, dbg_ta, a, ge.tex_func, ge.tex_fmt, ge.clut_fmt,
                        ge.tex_addr, ge.atest, u, fv, ge.tex_map_mode, ge.vtype,
                        ge.tex_scale_u, ge.tex_scale_v, ge.tex_off_u, ge.tex_off_v,
                        ge.tex_w, ge.tex_h, ge.tex_bufw, ge.tex_swizzle, rawidx, rawpal,
                        ge.lighting_enable, ge.mat_update,
                        ge.material_alpha_set ? ge.material_alpha : -1, ge.amb_alpha);
                /* Once per window: the first 16 CLUT entries and 16 raw texels. */
                if (s_ashade == 1 && (ge.tex_fmt == 4 || ge.tex_fmt == 5)) {
                    fprintf(stderr, "ACLUT f=%u addr=0x%08x pal0..15=", s_ge_frame, ge.clut_addr);
                    for (int ci = 0; ci < 16; ci++) {
                        uint32_t pv;
                        if ((ge.clut_fmt & 3) == 3) memcpy(&pv, &ge.clutram[(ci * 4) & 2047], 4);
                        else { uint16_t p16; memcpy(&p16, &ge.clutram[(ci * 2) & 2047], 2); pv = p16; }
                        fprintf(stderr, "%08x%s", pv, ci == 15 ? "" : ",");
                    }
                    fprintf(stderr, " tex0..15=");
                    for (int ti = 0; ti < 16; ti++)
                        fprintf(stderr, "%02x%s", MEM_R8(ge.tex_addr + (uint32_t)ti), ti == 15 ? "\n" : "");
                }
            }
            return 0;
        }
        if (s_stat_on > 0 && s_in3d) {
            atex_note((ge.tex_enable && ge.tex_addr) ? ge.tex_addr : 0, 1);
            if (fog == 0) s_stat.fog0++; else if (fog >= 256) s_stat.fogfull++;
        }
        if (fog < 256) {  /* mix toward fog colour; alpha unaffected */
            int fr=(int)(ge.fog_color&0xFF), fg=(int)((ge.fog_color>>8)&0xFF), fb=(int)((ge.fog_color>>16)&0xFF);
            r = fr + (((r - fr) * fog) >> 8);
            g = fg + (((g - fg) * fog) >> 8);
            b = fb + (((b - fb) * fog) >> 8);
        }
    }
    *or_=r; *og=g; *ob=b; *oa=a;
    return 1;
}

/* ---- Unified triangle rasterizer ----
 * Incremental edge functions, bbox pre-clipped to screen and scissor.
 * persp=1 (transform-mode): culling, perspective-correct UV, depth test, fog.
 * persp=0 (through-mode): affine UV; depth test only if the list enabled it. */
/* SR_PIXWHO=x,y probe pixel (shared by the triangle, sprite and clear paths). */
static int s_who_x = -2, s_who_y = -2;
static void who_init(void) {
    if (s_who_x != -2) return;
    const char *wp = getenv("SR_PIXWHO");
    s_who_x = s_who_y = -1;
    if (wp) sscanf(wp, "%d,%d", &s_who_x, &s_who_y);
}

static void raster_tri(const Vtx *A, const Vtx *B, const Vtx *C, int persp) {
    /* GPU capture seam: if the backend declines it has already flushed, so the
     * software path stays ordered against prior GPU work. */
    if (s_gpu && s_gpu->tri) {
        u64 gt0 = g_prof_on ? prof_tk() : 0;
        int done = s_gpu->tri(A, B, C, persp);
        if (g_prof_on) g_prof_gpu_tk += prof_tk() - gt0;
        if (done) return;
    }

    float area=(B->x-A->x)*(C->y-A->y)-(C->x-A->x)*(B->y-A->y);
    if (area == 0.0f) { if (persp) s_stat.deg3d++; return; }

    /* Back-face culling (per PPSSPP): only triangles whose SUBMITTED order has positive
     * cross product draw; the cull mode is realised by the caller's vertex order (see
     * draw_prim). Applies in BOTH transform and through mode. */
    static int nocull = -1;
    if (nocull < 0) nocull = getenv("SR_NOCULL") ? 1 : 0;
    if (ge.cull_enable && !ge.clear && !nocull) {
        if (area < 0.0f) { s_stat.cull++; return; }
    }
    if (persp) s_stat.tri3d++; else s_stat.tri2d++;

    int minx=(int)floorf(fminf(A->x,fminf(B->x,C->x))), maxx=(int)ceilf(fmaxf(A->x,fmaxf(B->x,C->x)));
    int miny=(int)floorf(fminf(A->y,fminf(B->y,C->y))), maxy=(int)ceilf(fmaxf(A->y,fmaxf(B->y,C->y)));
    int cx1 = ge.scis_x1 > 0 ? ge.scis_x1 : 0,   cy1 = ge.scis_y1 > 0 ? ge.scis_y1 : 0;
    int cx2 = ge.scis_x2 < 479 ? ge.scis_x2 : 479, cy2 = ge.scis_y2 < 271 ? ge.scis_y2 : 271;
    if (minx < cx1) minx = cx1;
    if (maxx > cx2) maxx = cx2;
    if (miny < cy1) miny = cy1;
    if (maxy > cy2) maxy = cy2;
    if (minx > maxx || miny > maxy) return;

    /* Coverage: exact integer edge functions on the PSP's 28.4 subpixel grid with a
     * top-left fill rule, so each shared-edge pixel lands in exactly one triangle.
     * Hardware rounding: (int)(x*16 + 0.375), per PPSSPP. */
    long long ax=(long long)floorf(A->x*16.0f+0.375f), ay=(long long)floorf(A->y*16.0f+0.375f);
    long long bx=(long long)floorf(B->x*16.0f+0.375f), by=(long long)floorf(B->y*16.0f+0.375f);
    long long cxx=(long long)floorf(C->x*16.0f+0.375f), cyy=(long long)floorf(C->y*16.0f+0.375f);
    long long area2 = (bx-ax)*(cyy-ay) - (cxx-ax)*(by-ay);
    if (area2 == 0) { if (persp) s_stat.deg3d++; return; }
    const Vtx *VA=A, *VB=B, *VC=C;
    if (area2 < 0) {  /* normalise winding so the interior is the positive side */
        const Vtx *t=VB; VB=VC; VC=t;
        long long tt; tt=bx; bx=cxx; cxx=tt; tt=by; by=cyy; cyy=tt;
        area2 = -area2;
    }

    float inv = 1.0f / (float)area2;

    int textured = ge.tex_enable && !ge.clear && ge.tex_addr;
    int gouraud  = ge.shade_gouraud;
    int use_z    = persp ? ge.ztest_enable : thru_ztest();
    int use_fog  = persp && ge.fog_enable && !ge.clear;
    s_in3d = persp;

    /* Attribute deltas relative to VC: attr = VCattr + w0*(VA-VC) + w1*(VB-VC), recomputed
     * per pixel from the integer weights (no incremental float drift). */
#define AT_SETUP(n, f) float n##_ac=(VA->f)-(VC->f), n##_bc=(VB->f)-(VC->f)
#define AT_PIX(n, f)   float n=(VC->f)+w0f*n##_ac+w1f*n##_bc
    AT_SETUP(iu, u); AT_SETUP(iv, v); AT_SETUP(irw, rw); AT_SETUP(iz, z); AT_SETUP(ifog, fog);
    AT_SETUP(ir, r); AT_SETUP(ig, g); AT_SETUP(ib, b); AT_SETUP(ia, a);

    /* Edge functions at pixel centres: e0 along VA->VB (weights VC), e1 along VB->VC
     * (weights VA), e2 along VC->VA (weights VB). Bias 0 keeps E==0 pixels only on
     * top (dy==0, dx>0) and left (dy<0) edges. */
    long long dx0=bx-ax,  dy0=by-ay;
    long long dx1=cxx-bx, dy1=cyy-by;
    long long dx2=ax-cxx, dy2=ay-cyy;
    long long bias0 = (dy0 < 0 || (dy0 == 0 && dx0 > 0)) ? 0 : -1;
    long long bias1 = (dy1 < 0 || (dy1 == 0 && dx1 > 0)) ? 0 : -1;
    long long bias2 = (dy2 < 0 || (dy2 == 0 && dx2 > 0)) ? 0 : -1;
    long long px0 = (long long)minx*16 + 8, py0 = (long long)miny*16 + 8;
    long long e0r = dx0*(py0-ay)  - dy0*(px0-ax);
    long long e1r = dx1*(py0-by)  - dy1*(px0-bx);
    long long e2r = dx2*(py0-cyy) - dy2*(px0-cxx);

    for (int y=miny; y<=maxy; y++, e0r+=dx0*16, e1r+=dx1*16, e2r+=dx2*16) {
        long long e0=e0r, e1=e1r, e2=e2r;
        for (int x=minx; x<=maxx; x++, e0-=dy0*16, e1-=dy1*16, e2-=dy2*16) {
            if ((e0+bias0) < 0 || (e1+bias1) < 0 || (e2+bias2) < 0) continue;
            float w0f = (float)e1*inv, w1f = (float)e2*inv;
            AT_PIX(irw, rw); AT_PIX(iz, z); AT_PIX(ifog, fog);
            if (!zrange_ok(iz, persp)) { if (s_stat_on > 0) s_stat.zrange++; continue; }

            /* Clear-mode triangles: depth (bit 10) writes unconditionally, no z-test. */
            if (ge.clear) {
                if (ge.clear_mode & 0x400) {
                    uint32_t zi = (uint32_t)(y * (int)zbuf_stride() + x);
                    if (zi < 272u*512u) s_zbuf[zi] = clamp_z(iz);
                }
                who_init();
                if (x == s_who_x && y == s_who_y && s_pixwho_n < 400) {
                    s_pixwho_n++;
                    fprintf(stderr, "PIXWHO f=%u CLEARTRI mode=0x%03x z=%.0f persp=%d rgba=(%d,%d,%d,%d)\n",
                            s_ge_frame, ge.clear_mode, iz, persp, C->r, C->g, C->b, C->a);
                }
                if (ge.clear_mode & 0x300)
                    put_px_rgba(x, y, C->r, C->g, C->b, C->a);
                continue;
            }

            float u = 0, fv = 0;
            if (textured) {
                AT_PIX(iu, u); AT_PIX(iv, v);
                if (persp) {
                    float inv_rw = (irw != 0.0f) ? 1.0f / irw : 1.0f;
                    u = iu * inv_rw; fv = iv * inv_rw;
                } else { u = iu; fv = iv; }
            }
            int r, g, b, a;
            if (gouraud) {
                AT_PIX(ir, r); AT_PIX(ig, g); AT_PIX(ib, b); AT_PIX(ia, a);
                r=(int)ir; g=(int)ig; b=(int)ib; a=(int)ia;
            }
            else         { r=C->r; g=C->g; b=C->b; a=C->a; }
            int fog = use_fog ? (int)(clampf01(ifog) * 256.0f) : 256;

            int sr,sg,sb,sa;
            if (!shade(u,fv,fog,r,g,b,a,&sr,&sg,&sb,&sa)) continue;

            /* SR_PIXWHO=x,y: log every triangle that writes the chosen pixel. */
            {
                who_init();
                if (x == s_who_x && y == s_who_y && s_pixwho_n < 400) {
                    s_pixwho_n++;
                    uint32_t zidx = (uint32_t)(y * (int)zbuf_stride() + x);
                    unsigned curz = zidx < 272u*512u ? s_zbuf[zidx] : 99999u;
                    /* zpass: the verdict the depth test will actually give this pixel. */
                    int zpass = 1;
                    if (use_z && zidx < 272u*512u) {
                        uint16_t zv = clamp_z(iz);
                        switch (ge.ztest & 7) {
                            case 0: zpass = 0; break;
                            case 2: zpass = (zv == curz); break;
                            case 3: zpass = (zv != curz); break;
                            case 4: zpass = (zv <  curz); break;
                            case 5: zpass = (zv <= curz); break;
                            case 6: zpass = (zv >  curz); break;
                            case 7: zpass = (zv >= curz); break;
                            default: zpass = 1;
                        }
                    }
                    fprintf(stderr, "PIXWHO f=%u d=%u persp=%d clear=%d vtype=0x%06x tex=%d/0x%08x vcol=(%d,%d,%d,%d) uv=(%.2f,%.2f) rgba=(%d,%d,%d,%d) fog=%d z=%.0f zt=%d/%d zcur=%u zpass=%d zw=%d zr=[%u,%u] blend=%d/%06x world_t=(%.4g,%.4g,%.4g) tri=A(%.1f,%.1f,%.0f)B(%.1f,%.1f,%.0f)C(%.1f,%.1f,%.0f)\n",
                            s_ge_frame, s_rt_draw, persp, ge.clear, ge.vtype, ge.tex_enable, ge.tex_addr,
                            r, g, b, a, u, fv,
                            sr, sg, sb, sa, fog, iz,
                            use_z ? (int)(ge.ztest & 7) : -1, ge.ztest_enable, curz, zpass,
                            !ge.zwrite_disable, ge.minz, ge.maxz,
                            ge.blend_enable, ge.blend_mode,
                            ge.world[9], ge.world[10], ge.world[11],
                            A->x, A->y, A->z, B->x, B->y, B->z, C->x, C->y, C->z);
                }
            }
            if (use_z) put_px_rgba_z(x,y,clamp_z(iz),sr,sg,sb,sa);
            else       put_px_rgba(x,y,sr,sg,sb,sa);
        }
    }
#undef AT_SETUP
#undef AT_PIX
}

/* Line rasterizer (DDA), used for prim types 1/2 in both modes. */
static void draw_line_vtx(const Vtx *A, const Vtx *B, int persp) {
    if (s_gpu && s_gpu->line && s_gpu->line(A, B, persp)) return;
    float dx=B->x-A->x, dy=B->y-A->y;
    float len=fmaxf(fabsf(dx),fabsf(dy));
    int steps=(int)len;
    if (steps<1) steps=1;
    if (steps>2048) steps=2048;
    int textured = ge.tex_enable && !ge.clear && ge.tex_addr;
    int use_z    = persp ? ge.ztest_enable : thru_ztest();
    int use_fog  = persp && ge.fog_enable && !ge.clear;
    s_in3d = persp;
    for (int i=0; i<=steps; i++) {
        float t=(float)i/(float)steps;
        int x=(int)(A->x+dx*t), y=(int)(A->y+dy*t);
        float u=0, fv=0;
        if (textured) {
            u  = A->u + (B->u - A->u)*t;
            fv = A->v + (B->v - A->v)*t;
            if (persp) {
                float rw = A->rw + (B->rw - A->rw)*t;
                if (rw != 0.0f) { u /= rw; fv /= rw; }
            }
        }
        int r=(int)(A->r+(B->r-A->r)*t), g=(int)(A->g+(B->g-A->g)*t);
        int b=(int)(A->b+(B->b-A->b)*t), a=(int)(A->a+(B->a-A->a)*t);
        if (!ge.shade_gouraud) { r=B->r; g=B->g; b=B->b; a=B->a; }
        float lz = A->z+(B->z-A->z)*t;
        if (!zrange_ok(lz, persp)) { if (s_stat_on > 0) s_stat.zrange++; continue; }
        int fog = use_fog ? (int)(clampf01(A->fog+(B->fog-A->fog)*t)*256.0f) : 256;
        int sr,sg,sb,sa;
        if (!shade(u,fv,fog,r,g,b,a,&sr,&sg,&sb,&sa)) continue;
        if (use_z) put_px_rgba_z(x,y,clamp_z(lz),sr,sg,sb,sa);
        else       put_px_rgba(x,y,sr,sg,sb,sa);
    }
}

static void draw_point_vtx(const Vtx *A, int persp) {
    if (s_gpu && s_gpu->point && s_gpu->point(A, persp)) return;
    if (!zrange_ok(A->z, persp)) { if (s_stat_on > 0) s_stat.zrange++; return; }
    int textured = ge.tex_enable && !ge.clear && ge.tex_addr;
    float u=0, fv=0;
    if (textured) {
        u=A->u; fv=A->v;
        if (persp && A->rw != 0.0f) { u/=A->rw; fv/=A->rw; }
    }
    int fog = (persp && ge.fog_enable && !ge.clear) ? (int)(clampf01(A->fog)*256.0f) : 256;
    s_in3d = persp;
    int sr,sg,sb,sa;
    if (!shade(u,fv,fog,A->r,A->g,A->b,A->a,&sr,&sg,&sb,&sa)) return;
    int use_z = persp ? ge.ztest_enable : thru_ztest();
    if (use_z) put_px_rgba_z((int)A->x,(int)A->y,clamp_z(A->z),sr,sg,sb,sa);
    else       put_px_rgba((int)A->x,(int)A->y,sr,sg,sb,sa);
}

/* ---- 3D T&L pipeline ---- */

/* Multiply 4×3 column-major matrix by vec3. Returns vec3. (World/View transforms) */
static void mat43_mul(const float *m, float ix, float iy, float iz, float *ox, float *oy, float *oz) {
    *ox = m[0]*ix + m[3]*iy + m[6]*iz + m[9];
    *oy = m[1]*ix + m[4]*iy + m[7]*iz + m[10];
    *oz = m[2]*ix + m[5]*iy + m[8]*iz + m[11];
}

/* Rotate a vec3 by the upper 3×3 of a 4×3 matrix (no translation; for normals). */
static void mat33_mul(const float *m, float ix, float iy, float iz, float *ox, float *oy, float *oz) {
    *ox = m[0]*ix + m[3]*iy + m[6]*iz;
    *oy = m[1]*ix + m[4]*iy + m[7]*iz;
    *oz = m[2]*ix + m[5]*iy + m[8]*iz;
}

/* Multiply 4×4 column-major matrix by vec3, returning vec4 (clip space). (Proj transform) */
static void mat44_mul(const float *m, float ix, float iy, float iz, float *ox, float *oy, float *oz, float *ow) {
    *ox = m[0]*ix + m[4]*iy + m[8]*iz  + m[12];
    *oy = m[1]*ix + m[5]*iy + m[9]*iz  + m[13];
    *oz = m[2]*ix + m[6]*iy + m[10]*iz + m[14];
    *ow = m[3]*ix + m[7]*iy + m[11]*iz + m[15];
}

static float c8f(uint32_t col, int chan) { return (float)((col >> (chan*8)) & 0xFF) * (1.0f/255.0f); }

/* Per-vertex lighting in world space: emissive + scene ambient, plus per-light
 * ambient/diffuse/specular for up to 4 directional/point lights (spot treated as point).
 * Material colours come from the registers or the vertex colour per MATERIALUPDATE bits. */
static void light_vertex(float wx, float wy, float wz, float nx, float ny, float nz,
                         int vr, int vg, int vb, int va, int *lr, int *lg, int *lb, int *la) {
    float vrf = vr*(1.0f/255.0f), vgf = vg*(1.0f/255.0f), vbf = vb*(1.0f/255.0f);
    /* Lit alpha = material-ambient alpha * scene-ambient alpha; diffuse/specular/emissive never
     * contribute to alpha (PPSSPP Software/Lighting.cpp). With MATERIALUPDATE bit 0 the vertex
     * colour (including its alpha) substitutes for the ambient material colour. */
    int maa = (ge.mat_update & 1) ? va : (ge.material_alpha_set ? ge.material_alpha : 255);
    *la = clamp8((maa * ge.amb_alpha + 127) / 255);
    float mar, mag, mab, mdr, mdg, mdb, msr, msg, msb;
    if (ge.mat_update & 1) { mar=vrf; mag=vgf; mab=vbf; }
    else { mar=c8f(ge.material,0); mag=c8f(ge.material,1); mab=c8f(ge.material,2); }
    if (ge.mat_update & 2) { mdr=vrf; mdg=vgf; mdb=vbf; }
    else { mdr=c8f(ge.mat_diffuse,0); mdg=c8f(ge.mat_diffuse,1); mdb=c8f(ge.mat_diffuse,2); }
    if (ge.mat_update & 4) { msr=vrf; msg=vgf; msb=vbf; }
    else { msr=c8f(ge.mat_specular,0); msg=c8f(ge.mat_specular,1); msb=c8f(ge.mat_specular,2); }

    float r = c8f(ge.mat_emissive,0) + c8f(ge.amb_color,0)*mar;
    float g = c8f(ge.mat_emissive,1) + c8f(ge.amb_color,1)*mag;
    float b = c8f(ge.mat_emissive,2) + c8f(ge.amb_color,2)*mab;

    for (int i = 0; i < 4; i++) {
        if (!ge.light_on[i]) continue;
        int comp = (int)(ge.light_type[i] & 3);
        int type = (int)((ge.light_type[i] >> 8) & 3);
        float lx = ge.light_pos[i][0], ly = ge.light_pos[i][1], lz = ge.light_pos[i][2];
        float att = 1.0f;
        if (type != 0) {  /* point/spot: light vector from vertex, distance attenuation */
            lx -= wx; ly -= wy; lz -= wz;
            float d2 = lx*lx + ly*ly + lz*lz;
            float d = sqrtf(d2);
            float den = ge.light_att[i][0] + ge.light_att[i][1]*d + ge.light_att[i][2]*d2;
            att = den > 0.0f ? clampf01(1.0f/den) : 1.0f;
            if (d > 0.0f) { lx/=d; ly/=d; lz/=d; }
        } else {          /* directional: position register holds the direction */
            float d = sqrtf(lx*lx + ly*ly + lz*lz);
            if (d > 0.0f) { lx/=d; ly/=d; lz/=d; }
        }
        float ndl = nx*lx + ny*ly + nz*lz;
        if (ndl < 0.0f) ndl = 0.0f;
        if (comp == 2 && ge.spec_coef > 0.0f) ndl = powf(ndl, ge.spec_coef);   /* powered diffuse */

        r += att*(c8f(ge.light_acol[i],0)*mar + c8f(ge.light_dcol[i],0)*mdr*ndl);
        g += att*(c8f(ge.light_acol[i],1)*mag + c8f(ge.light_dcol[i],1)*mdg*ndl);
        b += att*(c8f(ge.light_acol[i],2)*mab + c8f(ge.light_dcol[i],2)*mdb*ndl);

        if ((comp & 1) && ndl > 0.0f) {  /* specular, Blinn half-vector with eye (0,0,1) */
            float hx=lx, hy=ly, hz=lz+1.0f;
            float hd = sqrtf(hx*hx + hy*hy + hz*hz);
            if (hd > 0.0f) {
                float ndh = (nx*hx + ny*hy + nz*hz) / hd;
                if (ndh > 0.0f) {
                    float s = ge.spec_coef > 0.0f ? powf(ndh, ge.spec_coef) : ndh;
                    r += att*c8f(ge.light_scol[i],0)*msr*s;
                    g += att*c8f(ge.light_scol[i],1)*msg*s;
                    b += att*c8f(ge.light_scol[i],2)*msb*s;
                }
            }
        }
    }
    *lr = clamp8((int)(r*255.0f + 0.5f));
    *lg = clamp8((int)(g*255.0f + 0.5f));
    *lb = clamp8((int)(b*255.0f + 0.5f));
}

/* Clip-space vertex: position before the perspective divide plus raw (un-premultiplied)
 * texel UV and lit color, so near-plane clipping can interpolate linearly before
 * projecting. */
typedef struct {
    float cx, cy, cz, cw; float u, v; float fog; int r, g, b, a;
    /* PSP acceptance flags: oor = projected screen coords outside the GE's 4096-grid;
     * ozp/ozn = z/w beyond +-1. */
    int oor, ozp, ozn;
    /* Projected screen-grid coords (pre-offset) for SR_RTRACE logging; valid when cw != 0. */
    float sx, sy, sz;
} CVtx;

/* read_nrm + skinning blend: normals rotate through the bone matrices' 3x3 parts with
 * the same weights as positions. */
static void read_nrm_skinned(uint32_t addr, const VFmt *vf, const float *w, int skinned,
                             float *x, float *y, float *z) {
    read_nrm(addr, vf, x, y, z);
    if (!skinned) return;
    float px = 0, py = 0, pz = 0;
    for (int i = 0; i < vf->w_n; i++) {
        if (w[i] == 0.0f) continue;
        float tx, ty, tz;
        mat33_mul(ge.bone + 12*i, *x, *y, *z, &tx, &ty, &tz);
        px += tx*w[i]; py += ty*w[i]; pz += tz*w[i];
    }
    *x = px; *y = py; *z = pz;
}

static void transform_vtx_clip(uint32_t addr, const VFmt *vf, CVtx *o) {
    float mx, my, mz;
    u64 prof_t0 = g_prof_on ? prof_tk() : 0;
    s_stat.xform++;   /* against tri3d: the strip/fan cache's payoff */
    read_pos(addr, vf, &mx, &my, &mz);

    /* Skinning: blend through up to 8 bone matrices, then apply the world matrix. */
    float skw[8];
    int skinned = (!vf->through && vf->w_n) ? 1 : 0;
    if (skinned) {
        read_weights(addr, vf, skw);
        float px = 0, py = 0, pz = 0;
        for (int i = 0; i < vf->w_n; i++) {
            if (skw[i] == 0.0f) continue;
            float tx, ty, tz;
            mat43_mul(ge.bone + 12*i, mx, my, mz, &tx, &ty, &tz);
            px += tx*skw[i]; py += ty*skw[i]; pz += tz*skw[i];
        }
        mx = px; my = py; mz = pz;
    }

    /* World transform (model → world) */
    float wx, wy, wz;
    mat43_mul(ge.world, mx, my, mz, &wx, &wy, &wz);

    /* View transform (world → camera) */
    float cx, cy, cz;
    mat43_mul(ge.view, wx, wy, wz, &cx, &cy, &cz);

    /* Projection (camera → clip). The divisor is the real clip-space w from the proj
     * matrix W row: perspective gives clipw == -cz, orthographic gives clipw == 1. */
    mat44_mul(ge.proj, cx, cy, cz, &o->cx, &o->cy, &o->cz, &o->cw);

    /* Fog factor from view-space depth: 1 = no fog, 0 = full fog (PPSSPP convention);
     * linear in cz. SR_NOFOG=1 disables. */
    static int nofog = -1;
    if (nofog < 0) nofog = getenv("SR_NOFOG") ? 1 : 0;
    if (ge.fog_enable && !nofog) {
        /* Inf/NaN fog coefficients are VALID: they force a constant factor (per PPSSPP). */
        float fend = ge.fog_end, fslope = ge.fog_slope;
        if (isinf(fend) || isnan(fend)) {
            int sign = signbit(fend) ? 1 : 0;
            if (signbit(fslope)) sign = !sign;   /* the multiply would flip it */
            if (fslope == 0.0f) sign = 1;        /* *0 clamps to zero regardless of sign */
            o->fog = sign ? 0.0f : 1.0f;
        } else {
            if (isinf(fslope) || isnan(fslope))
                fslope = signbit(fslope) ? -262144.0f : 262144.0f;
            o->fog = clampf01((cz + fend) * fslope);
        }
    } else o->fog = 1.0f;

    /* Texcoords. Mode 0: vertex UVs with TEXSCALE/TEXOFFSET. Mode 1: texgen matrix on a
     * source picked by bits 8-9 (0=model pos, 1=vertex uv, 2=normalized normal, 3=raw
     * normal); scale/offset NOT applied. Mode 2: envmap from two light directions.
     * Result is in texel units; the 1/w premultiply happens at projection. */
    float u, fv;
    uint32_t tmm = ge.tex_map_mode & 3;
    if (tmm == 1) {
        float sx, sy, sz2;
        switch ((ge.tex_map_mode >> 8) & 3) {
        case 0:  sx = mx; sy = my; sz2 = mz; break;
        case 1:  read_tc(addr, vf, &sx, &sy); sz2 = 0.0f; break;
        default: {
            read_nrm_skinned(addr, vf, skw, skinned, &sx, &sy, &sz2);
            if (((ge.tex_map_mode >> 8) & 3) == 2) {
                float nl = sqrtf(sx*sx + sy*sy + sz2*sz2);
                if (nl > 0.0f) { sx /= nl; sy /= nl; sz2 /= nl; }
            }
            break;
        }
        }
        float ts, tt, tq;
        mat43_mul(ge.tgen, sx, sy, sz2, &ts, &tt, &tq);
        if (tq == 0.0f) tq = 1.0f;   /* affine texgen has q==... (z row unused) */
        u  = (ts / tq) * (float)ge.tex_w;
        fv = (tt / tq) * (float)ge.tex_h;
    } else if (tmm == 2) {
        /* env map: s/t = (1 + dot(normalize(lightpos[lsN]), worldnormal)) / 2 */
        float nx2, ny2, nz2, wnx2, wny2, wnz2;
        read_nrm_skinned(addr, vf, skw, skinned, &nx2, &ny2, &nz2);
        mat33_mul(ge.world, nx2, ny2, nz2, &wnx2, &wny2, &wnz2);
        float nl2 = sqrtf(wnx2*wnx2 + wny2*wny2 + wnz2*wnz2);
        if (nl2 > 0.0f) { wnx2 /= nl2; wny2 /= nl2; wnz2 /= nl2; }
        float st2[2];
        for (int li = 0; li < 2; li++) {
            int l = (int)((ge.tex_shade_ls >> (li * 8)) & 3);
            float lx = ge.light_pos[l][0], ly = ge.light_pos[l][1], lz = ge.light_pos[l][2];
            float ld = sqrtf(lx*lx + ly*ly + lz*lz);
            if (ld > 0.0f) { lx /= ld; ly /= ld; lz /= ld; }
            st2[li] = (1.0f + (lx*wnx2 + ly*wny2 + lz*wnz2)) * 0.5f;
        }
        u  = st2[0] * (float)ge.tex_w;
        fv = st2[1] * (float)ge.tex_h;
    } else {
        read_tc(addr, vf, &u, &fv);
        u  = (u  * ge.tex_scale_u + ge.tex_off_u) * (float)ge.tex_w;
        fv = (fv * ge.tex_scale_v + ge.tex_off_v) * (float)ge.tex_h;
    }
    o->u = u;
    o->v = fv;

    read_color(addr, vf, &o->r, &o->g, &o->b, &o->a);

    static int nolight = -1;
    if (nolight < 0) nolight = getenv("SR_NOLIGHT") ? 1 : 0;
    if (ge.lighting_enable && !nolight) {
        float nx, ny, nz;
        read_nrm_skinned(addr, vf, skw, skinned, &nx, &ny, &nz);
        float wnx, wny, wnz;
        mat33_mul(ge.world, nx, ny, nz, &wnx, &wny, &wnz);
        float nl = sqrtf(wnx*wnx + wny*wny + wnz*wnz);
        if (nl > 0.0f) { wnx/=nl; wny/=nl; wnz/=nl; }
        light_vertex(wx, wy, wz, wnx, wny, wnz, o->r, o->g, o->b, o->a, &o->r, &o->g, &o->b, &o->a);
    }

    /* PSP acceptance flags (per PPSSPP): the hardware does NOT rasterise primitives whose
     * vertices leave the valid screen grid or the z range. */
    o->oor = o->ozp = o->ozn = 0;
    {
        const float zoutside = 1.000030517578125f;
        float zw = o->cz / o->cw;
        if (zw >= zoutside) o->ozp = 1;
        else if (-zw >= zoutside) o->ozn = 1;
        float sx = o->cx * decode_float24(ge.viewport_raw[0]) / o->cw + decode_float24(ge.viewport_raw[3]);
        float sy = o->cy * decode_float24(ge.viewport_raw[1]) / o->cw + decode_float24(ge.viewport_raw[4]);
        float sz = o->cz * decode_float24(ge.viewport_raw[2]) / o->cw + decode_float24(ge.viewport_raw[5]);
        o->sx = sx; o->sy = sy; o->sz = sz;
        const float SB = 4095.0f + 15.5f / 16.0f;
        if (ge.depth_clip) {
            if (o->cz > -o->cw && (sx >= SB || sy >= SB || sx < 0.0f || sy < 0.0f)) o->oor = 1;
        } else {
            if (sx > SB || sy >= SB || sx < 0.0f || sy < 0.0f || sz < 0.0f || sz >= 65536.0f) o->oor = 1;
        }
    }
    if (g_prof_on) g_prof_xform_tk += prof_tk() - prof_t0;
}

/* Smallest clip-space w kept by the near clipper. */
#define NEAR_W 1e-3f

/* Perspective divide + viewport: clip-space vertex (cw > 0 required) → screen vertex. */
static void project_cvtx(const CVtx *c, Vtx *o) {
    float inv_w = 1.0f / c->cw;
    float ndcx = c->cx * inv_w, ndcy = c->cy * inv_w, ndcz = c->cz * inv_w;

    float vp_xs = decode_float24(ge.viewport_raw[0]);
    float vp_ys = decode_float24(ge.viewport_raw[1]);
    float vp_zs = decode_float24(ge.viewport_raw[2]);
    float vp_xc = decode_float24(ge.viewport_raw[3]);
    float vp_yc = decode_float24(ge.viewport_raw[4]);
    float vp_zc = decode_float24(ge.viewport_raw[5]);
    float off_x = (float)(ge.offsetx & 0xFFFF) / 16.0f;
    float off_y = (float)(ge.offsety & 0xFFFF) / 16.0f;

    o->x  = ndcx * vp_xs + vp_xc - off_x;
    o->y  = ndcy * vp_ys + vp_yc - off_y;
    float sz = ndcz * vp_zs + vp_zc;
    o->z  = sz < 0.0f ? 0.0f : sz > 65535.0f ? 65535.0f : sz;
    o->rw = inv_w;          /* 1/clipw for perspective-correct UV interpolation */
    o->u  = c->u * inv_w;
    o->v  = c->v * inv_w;
    o->fog = c->fog;
    o->r = c->r; o->g = c->g; o->b = c->b; o->a = c->a;
}

/* Compatibility wrapper for points/lines/sprites: reject behind-camera vertices. */
static int transform_vtx_3d(uint32_t addr, const VFmt *vf, Vtx *o) {
    CVtx c;
    transform_vtx_clip(addr, vf, &c);
    if (c.cw <= NEAR_W) { s_stat.nearclip++; return 0; }
    /* PSP point/sprite acceptance: out-of-range or out-of-z vertices are dropped whole
     * (rects do not clip against any plane, per PPSSPP). */
    if (c.oor) { s_stat.nearclip++; return 0; }
    if (!ge.depth_clip && (c.ozp || c.ozn)) { s_stat.nearclip++; return 0; }
    project_cvtx(&c, o);
    return 1;
}

static void clip_lerp_cvtx(const CVtx *a, const CVtx *b, float t, CVtx *o) {
    o->cx = a->cx + (b->cx - a->cx) * t;
    o->cy = a->cy + (b->cy - a->cy) * t;
    o->cz = a->cz + (b->cz - a->cz) * t;
    o->cw = a->cw + (b->cw - a->cw) * t;
    o->u  = a->u + (b->u - a->u) * t;
    o->v  = a->v + (b->v - a->v) * t;
    o->fog = a->fog + (b->fog - a->fog) * t;
    o->r = a->r + (int)((float)(b->r - a->r) * t);
    o->g = a->g + (int)((float)(b->g - a->g) * t);
    o->b = a->b + (int)((float)(b->b - a->b) * t);
    o->a = a->a + (int)((float)(b->a - a->a) * t);
    /* oor=2 marks a vertex CREATED by the near clip: it is re-projected and re-checked
     * against the screen grid (clip_vtx_out_of_range below). */
    o->oor = 2; o->ozp = o->ozn = 0;
    o->sx = o->sy = o->sz = 0.0f;
}

/* A vertex produced by the near-z clip is re-projected; if its screen position leaves
 * the 4096 grid it poisons every sub-triangle that references it (per PPSSPP). */
static int clip_vtx_out_of_range(CVtx *v) {
    if (v->oor != 2) return 0;        /* original vertex: transform-time verdict already passed */
    if (v->cw <= NEAR_W) return 1;    /* w ~ 0: projection blows up (PPSSPP gets inf coords) */
    float sx = v->cx * decode_float24(ge.viewport_raw[0]) / v->cw + decode_float24(ge.viewport_raw[3]);
    float sy = v->cy * decode_float24(ge.viewport_raw[1]) / v->cw + decode_float24(ge.viewport_raw[4]);
    float sz = v->cz * decode_float24(ge.viewport_raw[2]) / v->cw + decode_float24(ge.viewport_raw[5]);
    v->sx = sx; v->sy = sy; v->sz = sz;
    const float SB = 4095.0f + 15.5f / 16.0f;
    if (ge.depth_clip)
        return sx >= SB || sy >= SB || sx < 0.0f || sy < 0.0f;
    return sx > SB || sy >= SB || sx < 0.0f || sy < 0.0f || sz < 0.0f || sz >= 65536.0f;
}

/* Signed distance to the PSP's only clip plane: z >= -w. The PSP clips against negative
 * Z only, regardless of viewport (per PPSSPP). */
static float clip_d_nearz(const CVtx *v) { return v->cz + v->cw; }

/* Sutherland–Hodgman against z >= -w. in[] has n vertices (a triangle);
 * out[] receives up to n+1. Returns the clipped vertex count (0 if fully behind). */
static int clip_poly_near(const CVtx *in, int n, CVtx *out) {
    int m = 0;
    for (int i = 0; i < n; i++) {
        const CVtx *A = &in[i], *B = &in[(i + 1) % n];
        float da = clip_d_nearz(A), db = clip_d_nearz(B);
        int ain = da >= 0.0f, bin = db >= 0.0f;
        if (ain) out[m++] = *A;
        if (ain != bin) {
            float t = da / (da - db);
            clip_lerp_cvtx(A, B, t, &out[m++]);
        }
    }
    return m;
}

static int s_gelog = -1;
static int s_gewatch = -1, s_gewatch_after = -1, s_gewatch_limit = -1;

/* SR_GEMAT=1: dump the T&L state and the first vertex's full pipeline for the first 16
 * transform-mode PRIMs. */
static void dump_xform_debug(uint32_t vbase, uint32_t ibase, int idxfmt, const VFmt *vf,
                             int type, int count) {
    static int on = -1, n = 0;
    if (on < 0) on = getenv("SR_GEMAT") ? 1 : 0;
    if (!on || n >= 16) return;
    n++;
    fprintf(stderr, "GEMAT frame=%u prim type=%d count=%d vtype=0x%06x vaddr=0x%08x\n",
            s_ge_frame, type, count, ge.vtype, vbase);
    fprintf(stderr, "  world:"); for (int i=0;i<12;i++) fprintf(stderr, " %.5g", ge.world[i]); fprintf(stderr, "\n");
    fprintf(stderr, "  view :"); for (int i=0;i<12;i++) fprintf(stderr, " %.5g", ge.view[i]);  fprintf(stderr, "\n");
    fprintf(stderr, "  proj :"); for (int i=0;i<16;i++) fprintf(stderr, " %.5g", ge.proj[i]);  fprintf(stderr, "\n");
    fprintf(stderr, "  vp   : xs=%.4g ys=%.4g zs=%.4g xc=%.4g yc=%.4g zc=%.4g offx=%.4g offy=%.4g\n",
            decode_float24(ge.viewport_raw[0]), decode_float24(ge.viewport_raw[1]),
            decode_float24(ge.viewport_raw[2]), decode_float24(ge.viewport_raw[3]),
            decode_float24(ge.viewport_raw[4]), decode_float24(ge.viewport_raw[5]),
            (float)(ge.offsetx & 0xFFFF) / 16.0f, (float)(ge.offsety & 0xFFFF) / 16.0f);
    uint32_t a = prim_vtx_addr(vbase, ibase, idxfmt, 0, vf->stride);
    float mx,my,mz, wx,wy,wz, cx,cy,cz, X,Y,Z,W;
    read_pos(a, vf, &mx, &my, &mz);
    mat43_mul(ge.world, mx, my, mz, &wx, &wy, &wz);
    mat43_mul(ge.view,  wx, wy, wz, &cx, &cy, &cz);
    mat44_mul(ge.proj,  cx, cy, cz, &X, &Y, &Z, &W);
    fprintf(stderr, "  v0: model=(%.4g,%.4g,%.4g) world=(%.4g,%.4g,%.4g) view=(%.4g,%.4g,%.4g) clip=(%.4g,%.4g,%.4g) clipw=%.4g%s\n",
            mx,my,mz, wx,wy,wz, cx,cy,cz, X,Y,Z, W, W <= 0.0f ? "  << NEAR-REJECTED" : "");
}

/* Fast clear-mode rectangle fill: colour+alpha writes pack a constant value per row. */
static void fill_rect_clear_fast(int xa, int ya, int xb, int yb, int r, int g, int b, int a) {
    int cx1 = ge.scis_x1 > 0 ? ge.scis_x1 : 0,   cy1 = ge.scis_y1 > 0 ? ge.scis_y1 : 0;
    int cx2 = ge.scis_x2 < 479 ? ge.scis_x2 : 479, cy2 = ge.scis_y2 < 271 ? ge.scis_y2 : 271;
    if (xa < cx1) xa = cx1;
    if (xb > cx2 + 1) xb = cx2 + 1;
    if (ya < cy1) ya = cy1;
    if (yb > cy2 + 1) yb = cy2 + 1;
    if (xa >= xb || ya >= yb) return;
    if (s_stat_on > 0 && xa <= 240 && 240 < xb && ya <= 136 && 136 < yb && s_pxc < 32) {
        s_pxc++;
        fprintf(stderr, "PXC f=%u CLEARFILL rect=(%d,%d)-(%d,%d) rgba=(%d,%d,%d,%d) fbp=0x%08x\n",
                s_ge_frame, xa, ya, xb, yb, r, g, b, a, ge.fbp);
    }
    uint32_t c = pack_fb(r, g, b, a);
    uint32_t stride = ge.fbw ? ge.fbw : 512;
    uint32_t fb = ge_fb_addr();
    int wide = (ge.fbfmt & 3) == 3;
    for (int y = ya; y < yb; y++) {
        uint32_t row = fb + (uint32_t)(y * (int)stride) * (wide ? 4u : 2u);
        if (wide) for (int x = xa; x < xb; x++) MEM_W32(row + (uint32_t)x*4, c);
        else      for (int x = xa; x < xb; x++) MEM_W16(row + (uint32_t)x*2, (uint16_t)c);
    }
    g_ge_pixels += (unsigned long)(xb - xa) * (unsigned long)(yb - ya);
}

/* Rasterise a sprite (axis-aligned rect from two corner vertices). Used by both modes;
 * persp=1 recovers UV from the over-w storage and depth-tests with the second vertex's z. */
/* SR_SPRTRACE=<n>: dump the first n through-mode sprites of a frame with their
 * exact screen rect, texel rect and sampler state. Adjacent 2D sprites (text
 * runs, HUD panels) should tile with no gap and no overlap; this is what says
 * whether they do. Runs before the GPU hook, so it reports both renderers. */
static void sprtrace(const Vtx *p0, const Vtx *p1, int persp) {
    static int budget = -1, seen;
    static uint32_t frame = 0xFFFFFFFFu;
    if (budget < 0) { const char *e = getenv("SR_SPRTRACE"); budget = e ? atoi(e) : 0; }
    if (budget <= 0 || persp) return;
    if (frame != s_ge_frame) { frame = s_ge_frame; seen = 0; }
    if (seen >= budget) return;
    seen++;
    fprintf(stderr,
            "SPR f=%u x=[%.3f,%.3f] y=[%.3f,%.3f] w=%.3f u=[%.3f,%.3f] v=[%.3f,%.3f] "
            "tex=%d/0x%08x %dx%d fmt=%u filt=0x%04x wrap=0x%04x func=0x%06x "
            "blend=%d/0x%06x rgba=(%d,%d,%d,%d)\n",
            s_ge_frame, p0->x, p1->x, p0->y, p1->y, p1->x - p0->x,
            p0->u, p1->u, p0->v, p1->v,
            ge.tex_enable, ge.tex_addr, ge.tex_w, ge.tex_h, ge.tex_fmt,
            ge.tex_filter, ge.tex_wrap, ge.tex_func,
            ge.blend_enable, ge.blend_mode, p1->r, p1->g, p1->b, p1->a);
}

static void fill_sprite(const Vtx *p0, const Vtx *p1, int persp) {
    sprtrace(p0, p1, persp);
    if (s_gpu && s_gpu->sprite && s_gpu->sprite(p0, p1, persp)) return;

    int xa=(int)fminf(p0->x,p1->x), xb=(int)fmaxf(p0->x,p1->x);
    int ya=(int)fminf(p0->y,p1->y), yb=(int)fmaxf(p0->y,p1->y);

    if (ge.clear) {
        /* Clear-mode: bit 10 clears depth (to the sprite's z), bits 8/9 colour/alpha. */
        if (ge.clear_mode & 0x400)
            zbuf_fill_rect(xa, ya, xb - 1, yb - 1, (uint16_t)p1->z);
        who_init();
        if (s_who_x >= xa && s_who_x < xb && s_who_y >= ya && s_who_y < yb && s_pixwho_n < 400) {
            s_pixwho_n++;
            fprintf(stderr, "PIXWHO f=%u CLEARSPR mode=0x%03x z=%.0f rect=(%d,%d)-(%d,%d) rgba=(%d,%d,%d,%d)\n",
                    s_ge_frame, ge.clear_mode, p1->z, xa, ya, xb, yb, p1->r, p1->g, p1->b, p1->a);
        }
        int wc = (ge.clear_mode & 0x100) != 0, wa = (ge.clear_mode & 0x200) != 0;
        if (!wc && !wa) return;
        if (wc && wa) { fill_rect_clear_fast(xa, ya, xb, yb, p1->r, p1->g, p1->b, p1->a); return; }
        for (int y=ya; y<yb; y++) for (int x=xa; x<xb; x++)
            put_px_rgba(x, y, p1->r, p1->g, p1->b, p1->a);
        return;
    }

    float u0=p0->u, v0=p0->v, u1=p1->u, v1=p1->v;
    if (persp) {  /* UV stored over w; recover texel coords */
        u0 = p0->u / (p0->rw != 0.0f ? p0->rw : 1.0f);
        v0 = p0->v / (p0->rw != 0.0f ? p0->rw : 1.0f);
        u1 = p1->u / (p1->rw != 0.0f ? p1->rw : 1.0f);
        v1 = p1->v / (p1->rw != 0.0f ? p1->rw : 1.0f);
    }
    if (!zrange_ok(p1->z, persp)) { if (s_stat_on > 0) s_stat.zrange++; return; }
    uint16_t pz = clamp_z(p1->z);
    int use_z = persp ? ge.ztest_enable : thru_ztest();
    int fog = (persp && ge.fog_enable) ? (int)(clampf01(p1->fog)*256.0f) : 256;
    s_in3d = persp;
    if (persp) s_stat.spr3d++; else s_stat.spr2d++;
    float uw =(xb>xa)?(u1-u0)/(float)(xb-xa):0;
    float uvv=(yb>ya)?(v1-v0)/(float)(yb-ya):0;
    for (int y=ya; y<yb; y++) {
        float fv = v0 + (y-ya)*uvv;
        for (int x=xa; x<xb; x++) {
            float u = u0 + (x-xa)*uw;
            int r,g,b,a;
            if (!shade(u,fv,fog,p1->r,p1->g,p1->b,p1->a,&r,&g,&b,&a)) continue;
            if (use_z) put_px_rgba_z(x,y,pz,r,g,b,a);
            else       put_px_rgba(x,y,r,g,b,a);
        }
    }
}

/* Dump state when an entire 3D primitive lands behind the near plane (SR_GESTAT,
 * budgeted per stat window). */
static void near_dump(const char *what, uint32_t a0, const VFmt *vf, const CVtx *cv, int n) {
    if (s_stat_on <= 0 || s_neardump >= 3) return;
    s_neardump++;
    float mx, my, mz; read_pos(a0, vf, &mx, &my, &mz);
    fprintf(stderr, "NEARDUMP f=%u %s vtype=0x%06x raw=(%g,%g,%g) cw=(", s_ge_frame, what, ge.vtype, mx, my, mz);
    for (int i = 0; i < n; i++) fprintf(stderr, "%s%g", i ? "," : "", cv[i].cw);
    fprintf(stderr, ")\n  world=[%g %g %g; %g %g %g; %g %g %g; %g %g %g]\n",
            ge.world[0], ge.world[1], ge.world[2], ge.world[3], ge.world[4], ge.world[5],
            ge.world[6], ge.world[7], ge.world[8], ge.world[9], ge.world[10], ge.world[11]);
    fprintf(stderr, "  view =[%g %g %g; %g %g %g; %g %g %g; %g %g %g]\n",
            ge.view[0], ge.view[1], ge.view[2], ge.view[3], ge.view[4], ge.view[5],
            ge.view[6], ge.view[7], ge.view[8], ge.view[9], ge.view[10], ge.view[11]);
    fprintf(stderr, "  proj =[%g %g %g %g; %g %g %g %g; %g %g %g %g; %g %g %g %g]\n",
            ge.proj[0], ge.proj[1], ge.proj[2], ge.proj[3], ge.proj[4], ge.proj[5],
            ge.proj[6], ge.proj[7], ge.proj[8], ge.proj[9], ge.proj[10], ge.proj[11],
            ge.proj[12], ge.proj[13], ge.proj[14], ge.proj[15]);
}

static void draw_prim(uint32_t op) {
    int type = (op >> 16) & 7;
    int count = op & 0xFFFF;
    VFmt vf; decode_vtype(ge.vtype, &vf);
    if (s_gelog < 0) s_gelog = getenv("SR_GEDUMP") ? 1 : 0;
    if (s_gewatch < 0) s_gewatch = getenv("SR_GEWATCH") ? 1 : 0;
    if (s_gewatch_after < 0) { const char *p=getenv("SR_GEWATCH_AFTER"); s_gewatch_after=p?atoi(p):0; }
    if (s_gewatch_limit < 0) { const char *p=getenv("SR_GEWATCH_LIMIT"); s_gewatch_limit=p?atoi(p):240; if(s_gewatch_limit<=0)s_gewatch_limit=240; }
    int watch_now = s_gewatch && s_ge_frame >= (uint32_t)s_gewatch_after;
    int idxfmt = (ge.vtype >> 11) & 3;
    if (s_gelog) {
        static int n=0, nthrough=0, ntransform=0;
        if (vf.through) nthrough++; else ntransform++;
        if (n++ < 40 || (!vf.through && ntransform < 20))
            fprintf(stderr, "GE PRIM type=%d count=%d vtype=0x%06x through=%d idx=%d tex=%d fmt=%u fbp=0x%08x vaddr=0x%08x iaddr=0x%08x [thru=%d xform=%d]\n",
                type, count, ge.vtype, vf.through, idxfmt, ge.tex_enable, ge.tex_fmt, ge.fbp, ge.vaddr, ge.iaddr, nthrough, ntransform);
    }
    uint32_t vbase = ge.vaddr, ibase = ge.iaddr;
    /* Advance vertex/index pointer (PPSSPP GPUCommon::AdvanceVerts). */
    if (idxfmt) ge.iaddr += (uint32_t)(count << (idxfmt - 1));
    else        ge.vaddr += (uint32_t)(count * vf.stride);

    /* ---- THROUGH-MODE (2D, screen coords) ---- */
    if (vf.through) {
        if (type == 0) {           /* points */
            for (int i = 0; i < count; i++) {
                Vtx a; load_vtx(prim_vtx_addr(vbase,ibase,idxfmt,i,vf.stride),&vf,&a);
                draw_point_vtx(&a, 0);
            }
        } else if (type == 1 || type == 2) {   /* lines / line strip */
            for (int i = 1; i < count; i++) {
                if (type == 1 && (i & 1) == 0) continue;
                Vtx a, b;
                load_vtx(prim_vtx_addr(vbase,ibase,idxfmt,i-1,vf.stride),&vf,&a);
                load_vtx(prim_vtx_addr(vbase,ibase,idxfmt,i,  vf.stride),&vf,&b);
                draw_line_vtx(&a,&b,0);
            }
        } else if (type == 3 || type == 4 || type == 5) {
            for (int i = 2; i < count; i++) {
                int i0, i1, i2;
                if      (type == 3) { if (i%3!=2) continue; i0=i-2; i1=i-1; i2=i; }
                else if (type == 4) { i0=i-2; i1=i-1; i2=i; }
                else                { i0=0;   i1=i-1; i2=i; }
                Vtx a, b, c;
                load_vtx(prim_vtx_addr(vbase,ibase,idxfmt,i0,vf.stride),&vf,&a);
                load_vtx(prim_vtx_addr(vbase,ibase,idxfmt,i1,vf.stride),&vf,&b);
                load_vtx(prim_vtx_addr(vbase,ibase,idxfmt,i2,vf.stride),&vf,&c);
                /* Same submission-order culling as transform mode (the GE culls in
                 * through mode too); strips alternate, provoking vertex stays last. */
                if (ge.cull_enable && !ge.clear) {
                    int flip = ((ge.cull & 1) == 0) ^ ((type == 4) ? (i & 1) : 0);
                    if (flip) { Vtx t = a; a = b; b = t; }
                }
                raster_tri(&a,&b,&c,0);
            }
        } else if (type == 6) {   /* sprites */
            for (int i = 1; i < count; i += 2) {
                Vtx p0, p1;
                load_vtx(prim_vtx_addr(vbase,ibase,idxfmt,i-1,vf.stride),&vf,&p0);
                load_vtx(prim_vtx_addr(vbase,ibase,idxfmt,i,  vf.stride),&vf,&p1);
                if (watch_now) {
                    int xa=(int)fminf(p0.x,p1.x), xb=(int)fmaxf(p0.x,p1.x);
                    int ya=(int)fminf(p0.y,p1.y), yb=(int)fmaxf(p0.y,p1.y);
                    int area=(xb-xa)*(yb-ya);
                    if (idxfmt||area>=4096) {
                        static int wn=0;
                        if (wn++<s_gewatch_limit)
                            fprintf(stderr,"GEWATCH frame=%u spr idx=%d area=%d rect=(%d,%d)-(%d,%d) uv=(%.0f,%.0f)-(%.0f,%.0f) color0=%02x%02x%02x%02x color1=%02x%02x%02x%02x tex=%d/0x%08x %dx%d fmt=%u func=0x%06x blend=%d mode=0x%06x fix=%06x/%06x mat=%06x a=%d clear=0x%03x fbp=0x%08x vtype=0x%06x\n",
                                s_ge_frame,idxfmt,area,xa,ya,xb,yb,p0.u,p0.v,p1.u,p1.v,
                                p0.a,p0.b,p0.g,p0.r,p1.a,p1.b,p1.g,p1.r,
                                ge.tex_enable,ge.tex_addr,ge.tex_w,ge.tex_h,ge.tex_fmt,ge.tex_func,
                                ge.blend_enable,ge.blend_mode,ge.blend_fixa,ge.blend_fixb,
                                ge.material,ge.material_alpha_set?ge.material_alpha:-1,ge.clear_mode,
                                ge.fbp,ge.vtype);
                    }
                }
                if (s_gelog&&(ge.tex_enable&&!ge.clear)) { static int sn=0; if(sn++<12)
                    fprintf(stderr,"  texspr (%.0f,%.0f)-(%.0f,%.0f) uv(%.0f,%.0f)-(%.0f,%.0f) tex=0x%08x %dx%d fmt=%u bufw=%u\n",
                        p0.x,p0.y,p1.x,p1.y,p0.u,p0.v,p1.u,p1.v,ge.tex_addr,ge.tex_w,ge.tex_h,ge.tex_fmt,ge.tex_bufw); }
                fill_sprite(&p0,&p1,0);
            }
        }
        return;
    }

    /* ---- TRANSFORM-MODE (3D, full T&L) ---- */
    dump_xform_debug(vbase, ibase, idxfmt, &vf, type, count);
    if (s_rtrace < 0) {
        s_rtrace = getenv("SR_RTRACE") ? 1 : 0;
        const char *rf = getenv("SR_RTRACE_FRAMES");
        if (rf) { s_rt_fbudget = atoi(rf); if (s_rt_fbudget <= 0) s_rt_fbudget = 2; }
    }
    int rt = 0;
    if (s_rtrace) {
        if (s_ge_frame != s_rt_cur_frame) {
            s_rt_cur_frame = s_ge_frame;
            s_rt_active = s_rt_frames < s_rt_fbudget;
            if (s_rt_active) {
                s_rt_frames++;
                s_rt_draws_f = 0;
                who_init();
                fprintf(stderr, "RTRACE f=%u BEGIN fbp=0x%08x/%u fmt=%u zbp=0x%08x dclip=%u probe=(%d,%d)\n",
                        s_ge_frame, ge.fbp, ge.fbw, ge.fbfmt, ge.zbp, ge.depth_clip, s_who_x, s_who_y);
            }
        }
        rt = s_rt_active && s_rt_draws_f < 4000;
        if (rt) s_rt_draws_f++;
    }
    s_rt_draw++;
    texdump_maybe();
    if (s_stat_on > 0 && ((ge.vtype >> 9) & 3)) s_stat.skin++;   /* weighted (count field is n-1) */
    /* One line per DISTINCT transform-mode draw signature per stat window. */
    if (s_stat_on > 0 && s_ge3d < 48) {
        uint32_t sig = (uint32_t)type ^ ((uint32_t)count << 3) ^ (ge.vtype << 13) ^ ge.tex_addr ^ (ge.tex_enable ? 0x80000000u : 0);
        int seen = 0;
        for (int si = 0; si < s_ge3d; si++) if (s_ge3d_sigs[si] == sig) { seen = 1; break; }
        if (!seen) {
            s_ge3d_sigs[s_ge3d++] = sig;
            fprintf(stderr, "GE3D f=%u type=%d count=%d vtype=0x%06x tex=%d/0x%08x fmt=%u lit=%d atest=%d/0x%06x blend=%d/%06x world_t=(%.4g,%.4g,%.4g) fog=%d/%g/%g/0x%06x\n",
                    s_ge_frame, type, count, ge.vtype, ge.tex_enable, ge.tex_addr, ge.tex_fmt,
                    ge.lighting_enable, ge.atest_enable, ge.atest, ge.blend_enable, ge.blend_mode,
                    ge.world[9], ge.world[10], ge.world[11],
                    ge.fog_enable, ge.fog_end, ge.fog_slope, ge.fog_color);
            if (ge.lighting_enable)
                fprintf(stderr, "GE3D+ mupd=%d amb=0x%06x/%d mat_a=0x%06x mat_d=0x%06x mat_e=0x%06x texfunc=0x%06x L0=%d/0x%03x ac=0x%06x dc=0x%06x pos=(%.3g,%.3g,%.3g) L1=%d L2=%d L3=%d\n",
                        ge.mat_update, ge.amb_color, ge.amb_alpha, ge.material, ge.mat_diffuse,
                        ge.mat_emissive, ge.tex_func, ge.light_on[0], ge.light_type[0],
                        ge.light_acol[0], ge.light_dcol[0],
                        ge.light_pos[0][0], ge.light_pos[0][1], ge.light_pos[0][2],
                        ge.light_on[1], ge.light_on[2], ge.light_on[3]);
        }
    }
    if (watch_now) {
        static int xn=0;
        if (xn++<s_gewatch_limit)
            fprintf(stderr,"GEWATCH frame=%u xform type=%d count=%d vtype=0x%06x idx=%d vaddr=0x%08x iaddr=0x%08x\n",
                s_ge_frame,type,count,ge.vtype,idxfmt,vbase,ibase);
    }

    /* SR_VDUMP=1: dump raw vertex bytes and decoded attributes for the first 2
     * transform-mode draws of each distinct vtype. */
    {
        static int vdump = -1;
        if (vdump < 0) vdump = getenv("SR_VDUMP") ? 1 : 0;
        if (vdump) {
            static uint32_t seen_vt[16]; static int seen_n[16]; static int seen_cnt = 0;
            /* Re-arm once per stat window so later scenes get dumps too. */
            static uint32_t vd_win = 0;
            if (s_ge_frame / 60 != vd_win) {
                vd_win = s_ge_frame / 60;
                for (int si = 0; si < seen_cnt; si++) seen_n[si] = 0;
            }
            int slot = -1;
            for (int si = 0; si < seen_cnt; si++) if (seen_vt[si] == ge.vtype) { slot = si; break; }
            if (slot < 0 && seen_cnt < 16) { slot = seen_cnt++; seen_vt[slot] = ge.vtype; seen_n[slot] = 0; }
            if (slot >= 0 && seen_n[slot] < 2) {
                seen_n[slot]++;
                fprintf(stderr, "VDUMP f=%u type=%d count=%d vtype=0x%06x stride=%d offs[w=%d tc=%d col=%d nrm=%d pos=%d] lit=%d gouraud=%d fog=%d tmm=0x%03x\n",
                        s_ge_frame, type, count, ge.vtype, vf.stride, vf.w_n ? vf.w_off : -1,
                        vf.tc_off, vf.col_off, vf.nrm_off, vf.pos_off,
                        ge.lighting_enable, ge.shade_gouraud, ge.fog_enable, ge.tex_map_mode);
                if (vf.w_n)
                    fprintf(stderr, "  bone0=[%.3g %.3g %.3g; %.3g %.3g %.3g; %.3g %.3g %.3g; %.3g %.3g %.3g]\n",
                            ge.bone[0], ge.bone[1], ge.bone[2], ge.bone[3], ge.bone[4], ge.bone[5],
                            ge.bone[6], ge.bone[7], ge.bone[8], ge.bone[9], ge.bone[10], ge.bone[11]);
                int nv = count < 6 ? count : 6;
                for (int i = 0; i < nv; i++) {
                    uint32_t a = prim_vtx_addr(vbase, ibase, idxfmt, i, vf.stride);
                    char hex[3*32 + 1]; int hn = vf.stride < 32 ? vf.stride : 32;
                    for (int k = 0; k < hn; k++) sprintf(hex + 3*k, "%02x ", MEM_R8(a + (uint32_t)k));
                    hex[3*hn] = 0;
                    float px, py, pz, nx = 0, ny = 0, nz = 0, u = 0, tv = 0, w0 = 0;
                    int r, g, b, al;
                    read_pos(a, &vf, &px, &py, &pz);
                    read_color(a, &vf, &r, &g, &b, &al);
                    if (vf.nrm_off >= 0) read_nrm(a, &vf, &nx, &ny, &nz);
                    if (vf.tc_off >= 0) read_tc(a, &vf, &u, &tv);
                    if (vf.w_n) { float ws[8]; read_weights(a, &vf, ws); w0 = ws[0]; }
                    CVtx cv2; transform_vtx_clip(a, &vf, &cv2);
                    fprintf(stderr, "  v%d @0x%08x [%s] pos=(%.4g,%.4g,%.4g) uv=(%.3g,%.3g) col=%02x%02x%02x%02x nrm=(%.3g,%.3g,%.3g) w0=%.3g -> cw=%.4g lit=%02x%02x%02x%02x uvT=(%.3g,%.3g) fog=%.3g\n",
                            i, a, hex, px, py, pz, u, tv, r, g, b, al, nx, ny, nz, w0,
                            cv2.cw, cv2.r, cv2.g, cv2.b, cv2.a, cv2.u, cv2.v, cv2.fog);
                }
            }
        }
    }

    if (type == 0) {           /* points */
        for (int i = 0; i < count; i++) {
            Vtx a;
            if (!transform_vtx_3d(prim_vtx_addr(vbase,ibase,idxfmt,i,vf.stride),&vf,&a)) continue;
            draw_point_vtx(&a, 1);
        }
    } else if (type == 1 || type == 2) {   /* lines / line strip */
        if (s_stat_on > 0) s_stat.line3d += (unsigned long)(count > 0 ? count - 1 : 0);
        for (int i = 1; i < count; i++) {
            if (type == 1 && (i & 1) == 0) continue;
            CVtx ca, cb;
            transform_vtx_clip(prim_vtx_addr(vbase,ibase,idxfmt,i-1,vf.stride),&vf,&ca);
            transform_vtx_clip(prim_vtx_addr(vbase,ibase,idxfmt,i,  vf.stride),&vf,&cb);
            /* PSP line acceptance (PPSSPP Clipper::ProcessLine): same drop rules as triangles. */
            if (ca.oor || cb.oor) { s_stat.nearclip++; continue; }
            if (ca.cw < 0.0f && cb.cw < 0.0f) { s_stat.nearclip++; continue; }
            if (!ge.depth_clip && (ca.ozp + ca.ozn + cb.ozp + cb.ozn) > 0) { s_stat.nearclip++; continue; }
            if ((ca.ozp + cb.ozp) >= 2 || (ca.ozn + cb.ozn) >= 2) { s_stat.nearclip++; continue; }
            float da = clip_d_nearz(&ca), db2 = clip_d_nearz(&cb);
            if (da < 0.0f && db2 < 0.0f) {
                s_stat.nearclip++;
                CVtx both[2]; both[0] = ca; both[1] = cb;
                near_dump("line", prim_vtx_addr(vbase,ibase,idxfmt,i-1,vf.stride), &vf, both, 2);
                continue;
            }
            if (da < 0.0f)       { CVtx t; clip_lerp_cvtx(&ca,&cb, da/(da-db2), &t); ca=t; }
            else if (db2 < 0.0f) { CVtx t; clip_lerp_cvtx(&cb,&ca, db2/(db2-da), &t); cb=t; }
            if (ca.cw <= NEAR_W || cb.cw <= NEAR_W) { s_stat.nearclip++; continue; }
            /* PPSSPP ProcessLine: clip-created endpoints outside the screen grid kill the line. */
            if (clip_vtx_out_of_range(&ca) || clip_vtx_out_of_range(&cb)) { s_stat.nearclip++; continue; }
            Vtx a, b;
            project_cvtx(&ca,&a); project_cvtx(&cb,&b);
            draw_line_vtx(&a,&b,1);
        }
    } else if (type == 3 || type == 4 || type == 5) {
        /* SR_RTRACE per-draw bookkeeping for the TRIDRW+ summary line. */
        enum { D_DRAW, D_OOR, D_WNEG, D_ZOUT, D_ZSAME, D_NEARALL, D_CWLOW, D_CLIP };
        static const char *dec_name[8] =
            { "DRAW", "drop-oor", "drop-wneg", "drop-zout", "drop-zsame", "drop-nearall", "drop-cwlow", "CLIP" };
        unsigned long dcnt[8] = {0,0,0,0,0,0,0,0};
        struct { unsigned long tri3d, cull, zfail, afail, px3d, zrange, deg3d, blk3d; } st0;
        st0.tri3d = s_stat.tri3d; st0.cull = s_stat.cull; st0.zfail = s_stat.zfail;
        st0.afail = s_stat.afail; st0.px3d = s_stat.px3d; st0.zrange = s_stat.zrange;
        st0.deg3d = s_stat.deg3d; st0.blk3d = s_stat.blk3d;
        int tlogged = 0;
        float roffx = (float)(ge.offsetx & 0xFFFF) / 16.0f;
        float roffy = (float)(ge.offsety & 0xFFFF) / 16.0f;
        if (rt) {
            fprintf(stderr, "TRIDRW f=%u d=%u fbp=0x%08x/%u zbp=0x%08x/%u type=%d n=%d vtype=0x%06x idx=%d va=0x%08x ia=0x%08x "
                    "tex=%d/0x%08x %ux%u fmt=%u bufw=%u sw=%u tfunc=0x%06x tmm=0x%03x lit=%d gou=%d "
                    "zt=%d/%d zw=%d zr=[%u,%u] at=%d/0x%06x bl=%d/%06x/%06x/%06x cull=%d/%u clr=0x%03x "
                    "dclip=%u fog=%d vp=[%.4g,%.4g,%.4g|%.4g,%.4g,%.4g] off=(%.4g,%.4g) sc=(%d,%d)-(%d,%d) "
                    "wt=(%.4g,%.4g,%.4g) vt=(%.4g,%.4g,%.4g)\n",
                    s_ge_frame, s_rt_draw, ge.fbp, ge.fbw, ge.zbp, ge.zbw, type, count, ge.vtype, idxfmt, vbase, ibase,
                    ge.tex_enable, ge.tex_addr, ge.tex_w, ge.tex_h, ge.tex_fmt, ge.tex_bufw,
                    ge.tex_swizzle, ge.tex_func, ge.tex_map_mode, ge.lighting_enable, ge.shade_gouraud,
                    ge.ztest_enable, (int)(ge.ztest & 7), !ge.zwrite_disable, ge.minz, ge.maxz,
                    ge.atest_enable, ge.atest, ge.blend_enable, ge.blend_mode, ge.blend_fixa, ge.blend_fixb,
                    ge.cull_enable, ge.cull, ge.clear_mode, ge.depth_clip, ge.fog_enable,
                    decode_float24(ge.viewport_raw[0]), decode_float24(ge.viewport_raw[1]),
                    decode_float24(ge.viewport_raw[2]), decode_float24(ge.viewport_raw[3]),
                    decode_float24(ge.viewport_raw[4]), decode_float24(ge.viewport_raw[5]),
                    roffx, roffy, ge.scis_x1, ge.scis_y1, ge.scis_x2, ge.scis_y2,
                    ge.world[9], ge.world[10], ge.world[11], ge.view[9], ge.view[10], ge.view[11]);
        }
        /* Consecutive triangles in a strip share two vertices, and every triangle in
         * a fan shares the pivot, so transforming three vertices per triangle does
         * the same work up to three times over. The transform is the expensive part
         * of a frame here -- the GPU hook sits inside raster_tri, well after this --
         * so carry the shared results forward instead of recomputing them.
         *
         * The snapshot is taken BEFORE the culling swap below, which reorders cv[]
         * in place. Everything after that only reads it: clip_poly_near, clip_d_nearz
         * and project_cvtx all take const CVtx *. Triangle lists (type 3) share
         * nothing and are left alone. */
        CVtx keep_a, keep_b, fan_pivot;
        int have_keep = 0, have_pivot = 0;

        for (int i = 2; i < count; i++) {
            int i0, i1, i2;
            if      (type == 3) { if (i%3!=2) continue; i0=i-2; i1=i-1; i2=i; }
            else if (type == 4) { i0=i-2; i1=i-1; i2=i; }
            else                { i0=0;   i1=i-1; i2=i; }
            CVtx cv[3], cl[4];
            if (type == 4 && have_keep) {          /* strip: i-2 and i-1 are last go's */
                cv[0] = keep_a;
                cv[1] = keep_b;
            } else if (type == 5) {                /* fan: pivot, then last go's i-1 */
                if (!have_pivot) {
                    transform_vtx_clip(prim_vtx_addr(vbase,ibase,idxfmt,i0,vf.stride),&vf,&fan_pivot);
                    have_pivot = 1;
                }
                cv[0] = fan_pivot;
                if (have_keep) cv[1] = keep_b;
                else transform_vtx_clip(prim_vtx_addr(vbase,ibase,idxfmt,i1,vf.stride),&vf,&cv[1]);
            } else {
                transform_vtx_clip(prim_vtx_addr(vbase,ibase,idxfmt,i0,vf.stride),&vf,&cv[0]);
                transform_vtx_clip(prim_vtx_addr(vbase,ibase,idxfmt,i1,vf.stride),&vf,&cv[1]);
            }
            transform_vtx_clip(prim_vtx_addr(vbase,ibase,idxfmt,i2,vf.stride),&vf,&cv[2]);
            if (type == 4 || type == 5) { keep_a = cv[1]; keep_b = cv[2]; have_keep = 1; }

            /* Culling via submission order (per PPSSPP): the rasterizer keeps only
             * positive-winding triangles, so cull mode 0 reverses the order, and STRIPS
             * flip it again on every other triangle (strip winding alternates). The last
             * vertex (provoking, used for flat shading) stays in place. */
            if (ge.cull_enable && !ge.clear) {
                int flip = ((ge.cull & 1) == 0) ^ ((type == 4) ? (i & 1) : 0);
                if (flip) { CVtx t = cv[0]; cv[0] = cv[1]; cv[1] = t; }
            }

            /* PSP triangle acceptance (per PPSSPP): the hardware DROPS whole triangles
             * rather than clipping when vertices leave the screen grid or the z range;
             * games rely on it. */
            int dec = D_DRAW;
            if (cv[0].oor || cv[1].oor || cv[2].oor) dec = D_OOR;
            else if (cv[0].cw < 0.0f && cv[1].cw < 0.0f && cv[2].cw < 0.0f) dec = D_WNEG;
            else {
                int zp = cv[0].ozp + cv[1].ozp + cv[2].ozp;
                int zn = cv[0].ozn + cv[1].ozn + cv[2].ozn;
                if (!ge.depth_clip && zp + zn > 0) dec = D_ZOUT;
                else if (zp >= 3 || zn >= 3) dec = D_ZSAME;
            }
            if (dec == D_DRAW) {
                if (clip_d_nearz(&cv[0]) >= 0.0f && clip_d_nearz(&cv[1]) >= 0.0f && clip_d_nearz(&cv[2]) >= 0.0f) {
                    if (!(cv[0].cw > NEAR_W && cv[1].cw > NEAR_W && cv[2].cw > NEAR_W)) dec = D_CWLOW;
                } else if (clip_d_nearz(&cv[0]) < 0.0f && clip_d_nearz(&cv[1]) < 0.0f && clip_d_nearz(&cv[2]) < 0.0f) {
                    dec = D_NEARALL;
                } else {
                    dec = D_CLIP;   /* crosses the z >= -w plane: clip and fan */
                }
            }
            dcnt[dec]++;
            if (dec != D_DRAW) s_stat.nearclip++;

            /* TRIDEC: per-triangle decision log. First 12 per draw, plus every triangle
             * whose bbox covers the SR_PIXWHO probe pixel. */
            if (rt) {
                int probe = 0;
                if (s_who_x >= 0) {
                    float bx0 = 1e30f, bx1 = -1e30f, by0 = 1e30f, by1 = -1e30f;
                    int unbounded = 0;
                    for (int k = 0; k < 3; k++) {
                        if (cv[k].cw <= 0.0f) { unbounded = 1; continue; }
                        float px = cv[k].sx - roffx, py = cv[k].sy - roffy;
                        if (px < bx0) bx0 = px;
                        if (px > bx1) bx1 = px;
                        if (py < by0) by0 = py;
                        if (py > by1) by1 = py;
                    }
                    if (unbounded) probe = 1;
                    else probe = (bx0 <= (float)s_who_x + 1 && bx1 >= (float)s_who_x - 1 &&
                                  by0 <= (float)s_who_y + 1 && by1 >= (float)s_who_y - 1);
                }
                if (probe || tlogged < 12) {
                    tlogged++;
                    fprintf(stderr, "TRIDEC f=%u d=%u i=%d %s%s"
                            " v0[c=(%.4g,%.4g,%.4g,%.4g) s=(%.1f,%.1f,%.0f) f=%d%d%d rgba=%d,%d,%d,%d uv=(%.3g,%.3g)]"
                            " v1[c=(%.4g,%.4g,%.4g,%.4g) s=(%.1f,%.1f,%.0f) f=%d%d%d rgba=%d,%d,%d,%d uv=(%.3g,%.3g)]"
                            " v2[c=(%.4g,%.4g,%.4g,%.4g) s=(%.1f,%.1f,%.0f) f=%d%d%d rgba=%d,%d,%d,%d uv=(%.3g,%.3g)]\n",
                            s_ge_frame, s_rt_draw, i, dec_name[dec], probe ? " PROBE" : "",
                            cv[0].cx, cv[0].cy, cv[0].cz, cv[0].cw, cv[0].sx - roffx, cv[0].sy - roffy, cv[0].sz,
                            cv[0].oor, cv[0].ozp, cv[0].ozn, cv[0].r, cv[0].g, cv[0].b, cv[0].a, cv[0].u, cv[0].v,
                            cv[1].cx, cv[1].cy, cv[1].cz, cv[1].cw, cv[1].sx - roffx, cv[1].sy - roffy, cv[1].sz,
                            cv[1].oor, cv[1].ozp, cv[1].ozn, cv[1].r, cv[1].g, cv[1].b, cv[1].a, cv[1].u, cv[1].v,
                            cv[2].cx, cv[2].cy, cv[2].cz, cv[2].cw, cv[2].sx - roffx, cv[2].sy - roffy, cv[2].sz,
                            cv[2].oor, cv[2].ozp, cv[2].ozn, cv[2].r, cv[2].g, cv[2].b, cv[2].a, cv[2].u, cv[2].v);
                }
            }

            if (dec == D_DRAW) {
                Vtx a, b, c;
                project_cvtx(&cv[0],&a); project_cvtx(&cv[1],&b); project_cvtx(&cv[2],&c);
                raster_tri(&a,&b,&c,1);
            } else if (dec == D_CLIP) {
                int m = clip_poly_near(cv, 3, cl);
                if (m >= 3) {
                    /* Sub-triangles containing an out-of-range clip-created vertex are
                     * discarded; the rest of the fan still draws (per PPSSPP). */
                    Vtx p[4];
                    int bad[4];
                    for (int k = 0; k < m && k < 4; k++) {
                        bad[k] = (cl[k].cw <= NEAR_W) || clip_vtx_out_of_range(&cl[k]);
                        if (!bad[k]) project_cvtx(&cl[k], &p[k]);
                    }
                    if (rt && tlogged <= 13) {
                        char buf[640]; int bn = 0;
                        for (int k = 0; k < m && k < 4; k++)
                            bn += snprintf(buf + bn, sizeof(buf) - (size_t)bn,
                                           " p%d[c=(%.4g,%.4g,%.4g,%.4g)->(%.1f,%.1f,%.0f) bad=%d rgba=%d,%d,%d,%d]",
                                           k, cl[k].cx, cl[k].cy, cl[k].cz, cl[k].cw,
                                           bad[k] ? -1.0f : p[k].x, bad[k] ? -1.0f : p[k].y,
                                           bad[k] ? -1.0f : p[k].z, bad[k],
                                           cl[k].r, cl[k].g, cl[k].b, cl[k].a);
                        fprintf(stderr, "TRICLP f=%u d=%u i=%d m=%d%s\n",
                                s_ge_frame, s_rt_draw, i, m, buf);
                    }
                    for (int k = 2; k < m && k < 4; k++)
                        if (!bad[0] && !bad[k-1] && !bad[k])
                            raster_tri(&p[0], &p[k-1], &p[k], 1);
                }
            }
        }
        if (rt) {
            fprintf(stderr, "TRIDRW+ f=%u d=%u tris=%lu draw=%lu clip=%lu drop[oor=%lu wneg=%lu zout=%lu "
                    "zsame=%lu nearall=%lu cwlow=%lu] rast=%lu cull=%lu deg=%lu px=%lu zfail=%lu afail=%lu "
                    "zrange=%lu blk=%lu\n",
                    s_ge_frame, s_rt_draw,
                    dcnt[0]+dcnt[1]+dcnt[2]+dcnt[3]+dcnt[4]+dcnt[5]+dcnt[6]+dcnt[7],
                    dcnt[D_DRAW], dcnt[D_CLIP], dcnt[D_OOR], dcnt[D_WNEG], dcnt[D_ZOUT],
                    dcnt[D_ZSAME], dcnt[D_NEARALL], dcnt[D_CWLOW],
                    s_stat.tri3d - st0.tri3d, s_stat.cull - st0.cull, s_stat.deg3d - st0.deg3d,
                    s_stat.px3d - st0.px3d, s_stat.zfail - st0.zfail, s_stat.afail - st0.afail,
                    s_stat.zrange - st0.zrange, s_stat.blk3d - st0.blk3d);
        }
    } else if (type == 6) {
        /* Sprites in transform mode: two 3D corner vertices define an axis-aligned screen
         * rect; depth comes from the second vertex. */
        for (int i = 1; i < count; i += 2) {
            Vtx p0, p1;
            if (!transform_vtx_3d(prim_vtx_addr(vbase,ibase,idxfmt,i-1,vf.stride),&vf,&p0)) continue;
            if (!transform_vtx_3d(prim_vtx_addr(vbase,ibase,idxfmt,i,  vf.stride),&vf,&p1)) continue;
            fill_sprite(&p0,&p1,1);
        }
    }
}

/* Unconditional framebuffer snapshot (no "best frame" gating) for SR_FBSNAP. */
static void ge_snapshot_plain(const char *path) {
    uint32_t fb = ge_fb_addr(), stride = ge.fbw ? ge.fbw : 512;
    FILE *f = fopen(path, "wb");
    if (!f) return;
    fprintf(f, "P6\n480 272\n255\n");
    for (int y = 0; y < 272; y++)
        for (int x = 0; x < 480; x++) {
            int r, g, b, a;
            if ((ge.fbfmt & 3) == 3) unpack_color(MEM_R32(fb + (uint32_t)(y*(int)stride + x)*4), 3, &r, &g, &b, &a);
            else                     unpack_color(MEM_R16(fb + (uint32_t)(y*(int)stride + x)*2), ge.fbfmt & 3, &r, &g, &b, &a);
            unsigned char px[3] = { (unsigned char)r, (unsigned char)g, (unsigned char)b };
            fwrite(px, 1, 3, f);
        }
    fclose(f);
}

static const char *ge_cmd_name(uint32_t cmd) {
    switch (cmd) {
        case 0x05: return "BEZIER";           case 0x06: return "SPLINE";
        case 0x07: return "BOUNDINGBOX";
        case 0x2A: return "BONEMATRIXNUMBER"; case 0x2B: return "BONEMATRIXDATA";
        case 0x40: return "TGENMATRIXNUMBER"; case 0x41: return "TGENMATRIXDATA";
        case 0xB2: return "TRANSFERSRC";      case 0xB3: return "TRANSFERSRCW";
        case 0xB4: return "TRANSFERDST";      case 0xB5: return "TRANSFERDSTW";
        case 0xD8: return "COLORTEST";        case 0xD9: return "COLORREF";
        case 0xDA: return "COLORTESTMASK";    case 0xE6: return "LOGICOP";
        case 0xEA: return "TRANSFERSTART";    case 0xEB: return "TRANSFERSRCPOS";
        case 0xEC: return "TRANSFERDSTPOS";   case 0xEE: return "TRANSFERSIZE";
        default: return NULL;
    }
}

unsigned long g_ge_unhandled_mask[8];
static void ge_note_unhandled_cmd(uint32_t cmd, uint32_t op) {
    static int on=-1;
    if (on<0) { const char *e=getenv("SR_GEUNK"); on=(e&&e[0]=='0')?0:1; }
    cmd &= 0xFF;
    unsigned long bit = 1ul << (cmd & 31);
    if (g_ge_unhandled_mask[cmd>>5] & bit) return;
    g_ge_unhandled_mask[cmd>>5] |= bit;
    if (on) {
        const char *nm=ge_cmd_name(cmd);
        fprintf(stderr,"GE: unhandled command 0x%02x (%s) data=0x%06x [reported once]\n",
                cmd, nm?nm:"unknown", op&0xFFFFFF);
    }
}

unsigned long g_ge_list_sig=0, g_ge_prim_count=0;
/* Per-list write accounting for SR_GEWATCH. */
unsigned long g_list_writes=0, g_list_nonblack=0, g_list_clearpx=0;

/* ---- F4 overlay overrides -------------------------------------------------
 * The settings the player edits are GE state changes, so they are applied to
 * the live state for the duration of one primitive and put back afterwards:
 * the game keeps owning the state (a knob returned to "game" restores exactly
 * what the list asked for), and both the software rasterizer and the GPU
 * backend see the same picture because both read `ge`. */

typedef struct {
    int      fog_enable, lighting_enable, cull_enable, atest_enable;
    int      dither_enable, ztest_enable, zwrite_disable, blend_enable;
    int      tex_enable, shade_gouraud;
    uint32_t tex_filter, fog_color;
    float    fog_end, fog_slope;
} StateSave;

static int ovr_tri(int mode, int game_value) {
    return mode == OVR_OFF ? 0 : mode == OVR_ON ? 1 : game_value;
}

extern unsigned long g_ge_state_gen;

/* Returns 0 when the whole primitive is to be dropped. */
static int overrides_begin(StateSave *s, int prim_type) {
    const GfxSettings *g = &g_gfx;

    /* These write ge.* directly rather than through ge_state_command, so the
     * generation has to move here too or the GPU backend's state cache could
     * serve a pre-override snapshot. Two increments per primitive is nothing;
     * the cache's real win is the triangles inside one. */
    g_ge_state_gen++;

    if (g->skip_lines && (prim_type == 1 || prim_type == 2)) return 0;
    if (g->skip_points && prim_type == 0)                 return 0;

    s->fog_enable      = ge.fog_enable;
    s->lighting_enable = ge.lighting_enable;
    s->cull_enable     = ge.cull_enable;
    s->atest_enable    = ge.atest_enable;
    s->dither_enable   = ge.dither_enable;
    s->ztest_enable    = ge.ztest_enable;
    s->zwrite_disable  = ge.zwrite_disable;
    s->blend_enable    = ge.blend_enable;
    s->tex_enable      = ge.tex_enable;
    s->shade_gouraud   = ge.shade_gouraud;
    s->tex_filter      = ge.tex_filter;
    s->fog_end         = ge.fog_end;
    s->fog_slope       = ge.fog_slope;
    s->fog_color       = ge.fog_color;

    ge.fog_enable      = ovr_tri(g->fog,        ge.fog_enable);
    ge.lighting_enable = ovr_tri(g->lighting,   ge.lighting_enable);
    ge.cull_enable     = ovr_tri(g->culling,    ge.cull_enable);
    ge.atest_enable    = ovr_tri(g->alpha_test, ge.atest_enable);
    ge.dither_enable   = ovr_tri(g->dither,     ge.dither_enable);
    ge.ztest_enable    = ovr_tri(g->depth_test, ge.ztest_enable);
    ge.blend_enable    = ovr_tri(g->blending,   ge.blend_enable);
    ge.tex_enable      = ovr_tri(g->texturing,  ge.tex_enable);
    /* zwrite_disable is inverted: "depth write off" means set the disable. */
    if (g->depth_write == OVR_OFF)     ge.zwrite_disable = 1;
    else if (g->depth_write == OVR_ON) ge.zwrite_disable = 0;

    if (g->shading == SHADE_FLAT)         ge.shade_gouraud = 0;
    else if (g->shading == SHADE_GOURAUD) ge.shade_gouraud = 1;

    /* TEXFILTER: bits 0-2 minification, bits 8-9 magnification; 0 = nearest,
     * 1 = linear (the mipmap variants are never sampled here). */
    if (g->tex_filter == TEXF_LINEAR)       ge.tex_filter = 0x0101u;
    else if (g->tex_filter == TEXF_NEAREST) ge.tex_filter = 0x0000u;

    /* Fog in the engine's own terms. It stores a (near, far) pair and hands
     * the GE end = far, slope = 1/(far - near) (engine guest 0x089e3ac4), so
     * recovering near lets the two sliders mean what they say: move the far
     * plane without dragging the haze start along, and vice versa. Scaling
     * end and slope directly cannot express that. */
    if (ge.fog_enable
        && (g->fog_distance != 1.0f || g->fog_start != 1.0f)) {
        float band = (ge.fog_slope != 0.0f && isfinite(ge.fog_slope))
                   ? 1.0f / ge.fog_slope : 0.0f;
        if (isfinite(ge.fog_end) && band > 0.0f) {
            float far_ = ge.fog_end * g->fog_distance;
            float near_ = (ge.fog_end - band) * g->fog_start;
            /* Keep the band non-degenerate: a zero or negative span would
             * make the slope infinite and fog the whole scene. */
            if (far_ - near_ < 1e-3f) near_ = far_ - 1e-3f;
            ge.fog_end = far_;
            ge.fog_slope = 1.0f / (far_ - near_);
        }
    }
    if (ge.fog_enable) {
        if (g->fog_color_force)
            ge.fog_color = ((uint32_t)(g->fog_color[2] * 255.0f) << 16)
                         | ((uint32_t)(g->fog_color[1] * 255.0f) << 8)
                         |  (uint32_t)(g->fog_color[0] * 255.0f);
    }

    return 1;
}

static void overrides_end(const StateSave *s) {
    g_ge_state_gen++;
    ge.fog_enable      = s->fog_enable;
    ge.lighting_enable = s->lighting_enable;
    ge.cull_enable     = s->cull_enable;
    ge.atest_enable    = s->atest_enable;
    ge.dither_enable   = s->dither_enable;
    ge.ztest_enable    = s->ztest_enable;
    ge.zwrite_disable  = s->zwrite_disable;
    ge.blend_enable    = s->blend_enable;
    ge.tex_enable      = s->tex_enable;
    ge.shade_gouraud   = s->shade_gouraud;
    ge.tex_filter      = s->tex_filter;
    ge.fog_end         = s->fog_end;
    ge.fog_slope       = s->fog_slope;
    ge.fog_color       = s->fog_color;
}

/* PRIM entry point: runtime/hle/ge.c walks the list and calls this for every
 * SCE_GE_CMD_PRIM word. */
void ge_draw_prim(u8 *ram, u32 op) {
    /* No timing call here. This runs ~3200 times a frame; clock() twice per
     * primitive cost ~390k calls a second for a millisecond-resolution number
     * that cannot resolve a single primitive anyway. GE time is measured once
     * per list instead -- see ge_time_us in runtime/hle/ge.c. */
    StateSave save;
    VFmt vf;
    s_ram = ram;
    if (!s_ge_inited) ge_state_init();
    decode_vtype(ge.vtype, &vf);
    if (!overrides_begin(&save, (int)((op >> 16) & 7))) {
        /* Dropped, but the vertex/index cursor still has to advance or the
         * next primitive in the list reads the wrong vertices. */
        int count = (int)(op & 0xFFFF);
        int idxfmt = (int)((ge.vtype >> 11) & 3);
        if (idxfmt) ge.iaddr += (uint32_t)(count << (idxfmt - 1));
        else        ge.vaddr += (uint32_t)(count * vf.stride);
        return;
    }
    draw_prim(op);
    overrides_end(&save);
    g_ge_prim_count++;
}

/* GE block transfer: rectangle copy between guest buffers (decode masks per PPSSPP).
 * With a GPU backend, flush("xfersrc") writes GPU targets back first and the written
 * range is dirty-notified afterwards. */
static void ge_block_transfer(uint32_t startdata) {
    uint32_t srcBase = (ge.xf_src & 0xFFFFF0u) | ((ge.xf_srcw & 0xFF0000u) << 8);
    uint32_t dstBase = (ge.xf_dst & 0xFFFFF0u) | ((ge.xf_dstw & 0xFF0000u) << 8);
    uint32_t srcStride = ge.xf_srcw & 0x7F8u; if (srcStride > 0x400) srcStride = 0;
    uint32_t dstStride = ge.xf_dstw & 0x7F8u; if (dstStride > 0x400) dstStride = 0;
    uint32_t srcX = ge.xf_spos & 0x3FFu, srcY = (ge.xf_spos >> 10) & 0x3FFu;
    uint32_t dstX = ge.xf_dpos & 0x3FFu, dstY = (ge.xf_dpos >> 10) & 0x3FFu;
    uint32_t w = (ge.xf_size & 0x3FFu) + 1, h = ((ge.xf_size >> 10) & 0x3FFu) + 1;
    uint32_t bpp = (startdata & 1) ? 4 : 2;
    if (!srcStride || !dstStride) return;
    if (s_gpu && s_gpu->xfer && s_gpu->xfer(startdata)) return;   /* GPU-side blit */
    if (s_gpu && s_gpu->flush) s_gpu->flush("xfersrc");
    for (uint32_t y = 0; y < h; y++) {
        uint32_t so = srcBase + ((srcY + y) * srcStride + srcX) * bpp;
        uint32_t dofs = dstBase + ((dstY + y) * dstStride + dstX) * bpp;
        memmove(SR_HOST(dofs), SR_HOST(so), (size_t)w * bpp);
    }
    ge_gpu_vram_dirty(dstBase + (dstY * dstStride + dstX) * bpp,
                      ((h - 1) * dstStride + w) * bpp);
}

/* State entry point: runtime/hle/ge.c owns list control flow and hands every other word
 * here. `base` is the executor's tracked BASE in (bits 27..24 << 24) form. Returns 1
 * when the command was consumed, 0 when it is not modelled. */
/* Bumped by every GE state write. The GPU backend uses it to skip snapshotting
 * and comparing the whole GE state per triangle: no command executes while a
 * primitive's triangles are emitted, so they all share one state. */
unsigned long g_ge_state_gen = 1;

int ge_state_command(u8 *ram, u32 op, u32 base) {
    g_ge_state_gen++;
    s_ram = ram;
    if (!s_ge_inited) ge_state_init();
    ge.base = (base >> 8) & 0x000F0000u;
    {
        uint32_t cmd=op>>24, data=op&0xFFFFFF;
        switch (cmd) {
            case GE_NOP: case 0xFF: break;   /* 0xFF = GE_CMD_NOP_FF (padding, PPSSPP) */
            case GE_VADDR:    ge.vaddr=ge_rel_addr(data); break;
            case GE_IADDR:    ge.iaddr=ge_rel_addr(data); break;
            case GE_BASE:     break;         /* the list executor tracks BASE */
            case GE_OFFSETADDR: ge.offset=data<<8; break;
            /* ORIGIN makes later relative addresses list-PC-relative; the PC lives in
             * the executor, which does not forward it. Unused by this title. */
            case GE_ORIGIN:   ge.offset=0; break;
            case GE_VERTEXTYPE: ge.vtype=data; break;

            case GE_FRAMEBUFPTR:   ge.fbp=(ge.fbp&0xFF000000)|data;
                if (s_gelog>0) fprintf(stderr,"GE FRAMEBUFPTR data=0x%06x -> fbp=0x%08x\n",data,ge.fbp);
                break;
            case GE_FRAMEBUFWIDTH: ge.fbw=data&0xFFFF; ge.fbp=(ge.fbp&0x00FFFFFF)|((data&0xFF0000)<<8);
                if (s_gelog>0) fprintf(stderr,"GE FRAMEBUFWIDTH data=0x%06x -> fbw=%u fbp=0x%08x\n",data,ge.fbw,ge.fbp);
                break;
            case GE_FRAMEBUFPIXFORMAT: ge.fbfmt=data&3; break;

            case GE_ZBUFPTR:   ge.zbp=(ge.zbp&0xFF000000)|data; break;
            case GE_ZBUFWIDTH: ge.zbw=data&0xFFFF; ge.zbp=(ge.zbp&0x00FFFFFF)|((data&0xFF0000)<<8); break;

            /* Drawing region: the scissor (which the game also sets) bounds all writes. */
            case GE_REGION1: case GE_REGION2: break;

            case GE_SCISSOR1: ge.scis_x1=data&0x3FF; ge.scis_y1=(data>>10)&0x3FF; break;
            case GE_SCISSOR2: ge.scis_x2=data&0x3FF; ge.scis_y2=(data>>10)&0x3FF; break;

            /* ---- Depth / cull state ---- */
            case GE_ZTESTENABLE:   ge.ztest_enable  = data & 1; break;
            case GE_ZWRITEDISABLE: ge.zwrite_disable= data & 1; break;
            case GE_ZTEST:         ge.ztest         = data & 7; break;
            case GE_MINZ:          ge.minz          = data & 0xFFFF; break;
            case GE_MAXZ:          ge.maxz          = data & 0xFFFF; break;
            case GE_CULLFACEENABLE:ge.cull_enable   = data & 1; break;
            case GE_CULL:          ge.cull          = data & 1; break;
            case GE_CLIPENABLE:    ge.depth_clip = data & 1; break;

            /* ---- Fragment test / blend toggles ---- */
            case GE_ALPHATESTENABLE: ge.atest_enable = data & 1; break;
            case GE_ALPHATEST:       ge.atest        = data; break;
            case GE_ALPHABLENDENABLE: ge.blend_enable=data&1; break;
            case GE_FOGENABLE:  ge.fog_enable = data & 1; break;
            case GE_FOG1:       ge.fog_end   = decode_float24(data); break;
            case GE_FOG2:       ge.fog_slope = decode_float24(data); break;
            case GE_FOGCOLOR:   ge.fog_color = data; break;
            case GE_DITHERENABLE: ge.dither_enable = data & 1; break;
            case GE_DITH0: case GE_DITH1: case GE_DITH2: case GE_DITH3: {
                /* One row of the 4x4 dither matrix: 4 signed 4-bit values. */
                int row = (int)(cmd - GE_DITH0);
                for (int i = 0; i < 4; i++) {
                    int v = (int)((data >> (i*4)) & 0xF);
                    ge.dith[row][i] = (int8_t)(v >= 8 ? v - 16 : v);
                }
                break;
            }
            case GE_MASKRGB:   ge.mask_rgb   = data; break;
            case GE_MASKALPHA: ge.mask_alpha = (int)(data & 0xFF); break;
            /* Stencil lives in destination alpha on the PSP; not emulated. Logic ops and
             * colour test are rare and also skipped (state consumed so lists stay quiet). */
            case GE_STENCILTESTENABLE: case GE_STENCILTEST: case GE_STENCILOP: break;
            case GE_ANTIALIASENABLE: case GE_PATCHCULLENABLE: break;
            case GE_COLORTESTENABLE: case GE_LOGICOPENABLE: break;
            case GE_PATCHDIVISION: case GE_PATCHPRIMITIVE: case GE_PATCHFACING: break;

            /* ---- Matrix capture ----
             * *MATRIXNUMBER sets the write cursor; *MATRIXDATA writes one float24 and
             * advances. World/View are 4×3 (12 elements), Proj is 4×4 (16). */
            /* Bone matrices: 8 4x3 matrices in one 96-float array; NUMBER takes data&0x7F,
             * DATA writes land only while < 96. */
            case 0x2A: ge.bone_num = (int)(data & 0x7F); break;    /* BONEMATRIXNUMBER */
            case 0x2B:                                             /* BONEMATRIXDATA */
                if (s_stat_on > 0) s_stat.bonew++;
                if (ge.bone_num < 96) ge.bone[ge.bone_num] = decode_float24(data);
                ge.bone_num++;
                break;
            /* NUMBER takes the low 4 bits; DATA advances the cursor unconditionally but
             * excess words are DISCARDED, never wrapped (per PPSSPP; a wrapped 13th word
             * must not clobber element 0). */
            case GE_WORLDMATRIXNUMBER: ge.world_num = (int)(data & 0xF); break;
            case GE_WORLDMATRIXDATA:
                s_stat.mw_world++;
                if (ge.world_num < 12) ge.world[ge.world_num] = decode_float24(data);
                ge.world_num++;
                break;
            case GE_VIEWMATRIXNUMBER: ge.view_num = (int)(data & 0xF); break;
            case GE_VIEWMATRIXDATA:
                s_stat.mw_view++;
                trace_mtx_write("view", ge.view_num, data);
                if (ge.view_num < 12) ge.view[ge.view_num] = decode_float24(data);
                ge.view_num++;
                break;
            case GE_PROJMATRIXNUMBER: ge.proj_num = (int)(data & 0xF); break;
            case GE_PROJMATRIXDATA:
                s_stat.mw_proj++;
                trace_mtx_write("proj", ge.proj_num, data);
                if (ge.proj_num < 16) ge.proj[ge.proj_num] = decode_float24(data);
                ge.proj_num++;
                break;

            /* ---- Viewport / offset ---- */
            case GE_VIEWPORTXSCALE:  ge.viewport_raw[0]=data; break;
            case GE_VIEWPORTYSCALE:  ge.viewport_raw[1]=data; break;
            case GE_VIEWPORTZSCALE:  ge.viewport_raw[2]=data; break;
            case GE_VIEWPORTXCENTER: ge.viewport_raw[3]=data; break;
            case GE_VIEWPORTYCENTER: ge.viewport_raw[4]=data; break;
            case GE_VIEWPORTZCENTER: ge.viewport_raw[5]=data; break;
            case GE_OFFSETX:         ge.offsetx=data; break;
            case GE_OFFSETY:         ge.offsety=data; break;

            /* ---- Shading / material / lighting ---- */
            case GE_SHADEMODE:       ge.shade_gouraud = data & 1; break;
            case GE_REVERSENORMAL:   ge.reverse_normal = data & 1; break;
            case GE_MATERIALUPDATE:  ge.mat_update = data & 7; break;
            case GE_MATERIALEMISSIVE:ge.mat_emissive = data; break;
            case GE_MATERIALAMBIENT: ge.material=data; ge.material_set=1; break;
            case GE_MATERIALDIFFUSE: ge.mat_diffuse=data;
                /* Flat-colour fallback for colourless vertices also tracks diffuse. */
                ge.material=data; ge.material_set=1; break;
            case GE_MATERIALSPECULAR:ge.mat_specular = data; break;
            case GE_MATERIALALPHA:   ge.material_alpha=data&0xFF; ge.material_alpha_set=1; break;
            case GE_MATERIALSPECULARCOEF: ge.spec_coef = decode_float24(data); break;
            case GE_AMBIENTCOLOR:    ge.amb_color = data; break;
            case GE_AMBIENTALPHA:    ge.amb_alpha = (int)(data & 0xFF); break;
            case GE_LIGHTMODE:       ge.light_mode = data & 1; break;
            case GE_LIGHTINGENABLE:  ge.lighting_enable = data & 1; break;
            case GE_LIGHTENABLE0+0: case GE_LIGHTENABLE0+1:
            case GE_LIGHTENABLE0+2: case GE_LIGHTENABLE0+3:
                ge.light_on[cmd-GE_LIGHTENABLE0] = data & 1; break;
            case GE_LIGHTTYPE0+0: case GE_LIGHTTYPE0+1:
            case GE_LIGHTTYPE0+2: case GE_LIGHTTYPE0+3:
                ge.light_type[cmd-GE_LIGHTTYPE0] = data; break;
            case GE_LX0+0:  case GE_LX0+1:  case GE_LX0+2:  case GE_LX0+3:
            case GE_LX0+4:  case GE_LX0+5:  case GE_LX0+6:  case GE_LX0+7:
            case GE_LX0+8:  case GE_LX0+9:  case GE_LX0+10: case GE_LX0+11: {
                int k=(int)(cmd-GE_LX0); ge.light_pos[k/3][k%3]=decode_float24(data); break;
            }
            case GE_LDX0+0: case GE_LDX0+1: case GE_LDX0+2: case GE_LDX0+3:
            case GE_LDX0+4: case GE_LDX0+5: case GE_LDX0+6: case GE_LDX0+7:
            case GE_LDX0+8: case GE_LDX0+9: case GE_LDX0+10:case GE_LDX0+11: {
                int k=(int)(cmd-GE_LDX0); ge.light_dir[k/3][k%3]=decode_float24(data); break;
            }
            case GE_LKA0+0: case GE_LKA0+1: case GE_LKA0+2: case GE_LKA0+3:
            case GE_LKA0+4: case GE_LKA0+5: case GE_LKA0+6: case GE_LKA0+7:
            case GE_LKA0+8: case GE_LKA0+9: case GE_LKA0+10:case GE_LKA0+11: {
                int k=(int)(cmd-GE_LKA0); ge.light_att[k/3][k%3]=decode_float24(data); break;
            }
            case GE_LKS0+0: case GE_LKS0+1: case GE_LKS0+2: case GE_LKS0+3:
                ge.light_spot_exp[cmd-GE_LKS0]=decode_float24(data); break;
            case GE_LKO0+0: case GE_LKO0+1: case GE_LKO0+2: case GE_LKO0+3:
                ge.light_spot_cut[cmd-GE_LKO0]=decode_float24(data); break;
            case GE_LAC0+0: case GE_LAC0+1: case GE_LAC0+2: case GE_LAC0+3:
            case GE_LAC0+4: case GE_LAC0+5: case GE_LAC0+6: case GE_LAC0+7:
            case GE_LAC0+8: case GE_LAC0+9: case GE_LAC0+10:case GE_LAC0+11: {
                int k=(int)(cmd-GE_LAC0), li=k/3;
                if      (k%3==0) ge.light_acol[li]=data;
                else if (k%3==1) ge.light_dcol[li]=data;
                else             ge.light_scol[li]=data;
                break;
            }

            /* ---- Texturing ---- */
            case GE_TEXTUREMAPENABLE: ge.tex_enable=data&1; break;
            case GE_TEXADDR0:     ge.tex_addr=(ge.tex_addr&0xFF000000)|(data&0x00FFFFFF); break;
            case GE_TEXBUFWIDTH0: ge.tex_bufw=data&0xFFFF; ge.tex_addr=(ge.tex_addr&0x00FFFFFF)|((data&0xFF0000)<<8); break;
            case GE_TEXSIZE0:  ge.tex_w=1<<(data&0xF); ge.tex_h=1<<((data>>8)&0xF); break;
            /* Mip levels 1-7 (addr/bufwidth/size): only level 0 is sampled. */
            case GE_TEXADDR0+1: case GE_TEXADDR0+2: case GE_TEXADDR0+3: case GE_TEXADDR0+4:
            case GE_TEXADDR0+5: case GE_TEXADDR0+6: case GE_TEXADDR0+7:
            case GE_TEXBUFWIDTH0+1: case GE_TEXBUFWIDTH0+2: case GE_TEXBUFWIDTH0+3:
            case GE_TEXBUFWIDTH0+4: case GE_TEXBUFWIDTH0+5: case GE_TEXBUFWIDTH0+6:
            case GE_TEXBUFWIDTH0+7:
            case GE_TEXSIZE0+1: case GE_TEXSIZE0+2: case GE_TEXSIZE0+3: case GE_TEXSIZE0+4:
            case GE_TEXSIZE0+5: case GE_TEXSIZE0+6: case GE_TEXSIZE0+7: break;
            case GE_TEXMODE:   ge.tex_swizzle=data&1; break;
            case GE_TEXFORMAT: ge.tex_fmt=data&0xF; break;
            case GE_TEXFILTER: ge.tex_filter=data; break;
            case GE_TEXWRAP:   ge.tex_wrap=data; break;
            case GE_TEXFUNC:   ge.tex_func=data; break;
            case GE_TEXENVCOLOR: ge.tex_env=data; break;
            case GE_TEXSCALEU:  ge.tex_scale_u=decode_float24(data); break;
            case GE_TEXSCALEV:  ge.tex_scale_v=decode_float24(data); break;
            case GE_TEXOFFSETU: ge.tex_off_u=decode_float24(data); break;
            case GE_TEXOFFSETV: ge.tex_off_v=decode_float24(data); break;
            case GE_TEXMAPMODE: ge.tex_map_mode=data; break;
            case GE_TEXSHADELS: ge.tex_shade_ls=data; break;
            case GE_TGENMATRIXNUMBER: ge.tgen_num = (int)(data & 0xF); break;
            case GE_TGENMATRIXDATA:
                if (ge.tgen_num < 12) ge.tgen[ge.tgen_num] = decode_float24(data);
                ge.tgen_num++;
                break;
            case GE_TEXLEVEL: case GE_TEXLODSLOPE: break;     /* mipmaps not sampled */
            case GE_TEXFLUSH: case GE_TEXSYNC: break;         /* no texture cache to flush */
            case GE_LOADCLUT: {
                /* Copy (data&0x3F) 32-byte blocks from clut_addr into internal CLUT RAM,
                 * like the hardware. VRAM-sourced CLUTs need a GPU write-back first. */
                if (s_gpu && s_gpu->flush && (ge.clut_addr & 0x0F000000u) == 0x04000000u)
                    s_gpu->flush("loadclut");
                uint32_t bytes = (data & 0x3F) * 32;
                if (bytes > sizeof(ge.clutram)) bytes = sizeof(ge.clutram);
                for (uint32_t i = 0; i < bytes; i += 4) {
                    uint32_t w = MEM_R32(ge.clut_addr + i);
                    memcpy(&ge.clutram[i], &w, 4);
                }
                ge.clut_gen++;
                break;
            }
            case GE_CLUTADDR:      ge.clut_addr=(ge.clut_addr&0xFF000000)|(data&0x00FFFFFF); break;
            case GE_CLUTADDRUPPER: ge.clut_addr=(ge.clut_addr&0x00FFFFFF)|((data&0xFF0000)<<8); break;
            case GE_CLUTFORMAT: ge.clut_fmt=data; break;

            case GE_BLENDMODE:  ge.blend_mode=data; break;
            case GE_BLENDFIXEDA: ge.blend_fixa=data; break;
            case GE_BLENDFIXEDB: ge.blend_fixb=data; break;
            case GE_CLEARMODE:  ge.clear_mode=data; ge.clear=data&1; break;

            /* ---- Block transfer ---- */
            case GE_TRANSFERSRC:    ge.xf_src  = data; break;
            case GE_TRANSFERSRCW:   ge.xf_srcw = data; break;
            case GE_TRANSFERDST:    ge.xf_dst  = data; break;
            case GE_TRANSFERDSTW:   ge.xf_dstw = data; break;
            case GE_TRANSFERSRCPOS: ge.xf_spos = data; break;
            case GE_TRANSFERDSTPOS: ge.xf_dpos = data; break;
            case GE_TRANSFERSIZE:   ge.xf_size = data; break;
            case GE_TRANSFERSTART:  ge_block_transfer(data); break;

            /* Control flow never arrives here; the bounding-box test is not kept. */
            case GE_BJUMP: case GE_BOUNDINGBOX: break;
            default:
                ge_note_unhandled_cmd(cmd, op);
                return 0;
        }
    }
    return 1;
}

uint32_t ge_framebuffer(void) { return ge_fb_addr(); }

/* ---- pspreco API around the ported core -------------------------------- */

u32 ge_framebuffer_addr(void) { return ge_fb_addr(); }

/* 0xAABBGGRR from a raw frame-buffer pixel; the frame dump and the window
 * share this, so they cannot disagree about a format. */
u32 ge_unpack_pixel(int fpf, u32 v)
{
    int r, g, b, a;
    unpack_color(v, fpf & 3, &r, &g, &b, &a);
    return (u32)(unsigned)r | ((u32)(unsigned)g << 8)
         | ((u32)(unsigned)b << 16) | ((u32)(unsigned)a << 24);
}

void ge_raster_init(void)
{
    memset(&ge, 0, sizeof ge);
    memset(s_zbuf, 0, sizeof s_zbuf);
    s_ge_inited = 0;
    ge_state_init();
}

void ge_raster_report(void)
{
    if (!g_ge_prim_count && !g_ge_pixels) return;
    printf("[gpu] %lu PRIM commands, %lu pixels written\n",
           g_ge_prim_count, g_ge_pixels);
    printf("[gpu]   %lu texture samples, %lu of them non-black\n",
           g_tex_samples, g_tex_nonzero);
}

/* What the current render target holds, on demand. PSPRECO_GE_PROBE=1. */
void ge_raster_probe(u8 *ram, const char *when)
{
    static int checked, on;
    unsigned long n = 0;
    uint32_t stride;
    int x, y;

    if (!checked) { checked = 1; on = getenv("PSPRECO_GE_PROBE") != NULL; }
    if (!on) return;
    s_ram = ram;
    stride = ge.fbw ? ge.fbw : 512;
    for (y = 0; y < 272; y++)
        for (x = 0; x < 480; x++) {
            int r, g, b, a;
            if ((ge.fbfmt & 3) == 3)
                unpack_color(MEM_R32(ge_fb_addr() + (uint32_t)(y*(int)stride + x)*4), 3, &r,&g,&b,&a);
            else
                unpack_color(MEM_R16(ge_fb_addr() + (uint32_t)(y*(int)stride + x)*2), (int)(ge.fbfmt&3), &r,&g,&b,&a);
            if (r | g | b) n++;
        }
    printf("[gpu] %s: target %08x holds %lu non-black pixels\n",
           when, ge_fb_addr(), n);
}

/* ---- self-test ----------------------------------------------------------
 * Drives the ported rasteriser directly with known state and vertices and
 * checks the bytes it wrote, including the software depth buffer. Run with
 * `pspreco --selftest`; verify.py gates on it. */

static void st_cmd(u8 *ram, u32 word) { ge_state_command(ram, word, 0); }

static void st_vaddr(u8 *ram, u32 vbuf)
{
    ge_state_command(ram, (0x01u << 24) | (vbuf & 0x00FFFFFFu),
                     vbuf & 0xFF000000u);
}

static int st_expect(u8 *ram, u32 addr, u32 want, const char *what)
{
    u32 got = mem_r32(ram, addr);
    if (got == want) return 0;
    printf("FAIL  %s: [%08x] = %08x, expected %08x\n", what, addr, got, want);
    return 1;
}

static void st_target(u8 *ram, u32 fb)
{
    ge_raster_init();
    st_cmd(ram, (0x9Cu << 24) | (fb & 0x00FFFFFFu));       /* FBP           */
    st_cmd(ram, (0x9Du << 24) | 512u);                     /* FBW           */
    st_cmd(ram, (0xD2u << 24) | 3u);                       /* FPF 8888      */
    st_cmd(ram, (0x9Fu << 24) | 512u);                     /* ZBW           */
    st_cmd(ram, (0xD4u << 24));                            /* scissor 0,0   */
    st_cmd(ram, (0xD5u << 24) | (271u << 10) | 479u);      /* ..479,271     */
}

static void st_identity(u8 *ram)
{
    static const float i43[12] = { 1,0,0, 0,1,0, 0,0,1, 0,0,0 };
    static const float i44[16] = { 1,0,0,0, 0,1,0,0, 0,0,1,0, 0,0,0,1 };
    int i;
    st_cmd(ram, (0x3Au << 24));
    for (i = 0; i < 12; i++) st_cmd(ram, (0x3Bu << 24) | (f2u(i43[i]) >> 8));
    st_cmd(ram, (0x3Cu << 24));
    for (i = 0; i < 12; i++) st_cmd(ram, (0x3Du << 24) | (f2u(i43[i]) >> 8));
    st_cmd(ram, (0x3Eu << 24));
    for (i = 0; i < 16; i++) st_cmd(ram, (0x3Fu << 24) | (f2u(i44[i]) >> 8));
    st_cmd(ram, (0x42u << 24) | (f2u(240.0f) >> 8));       /* VP XS */
    st_cmd(ram, (0x43u << 24) | (f2u(136.0f) >> 8));       /* VP YS */
    st_cmd(ram, (0x44u << 24) | (f2u(32767.5f) >> 8));     /* VP ZS */
    st_cmd(ram, (0x45u << 24) | (f2u(240.0f) >> 8));       /* VP XC */
    st_cmd(ram, (0x46u << 24) | (f2u(136.0f) >> 8));       /* VP YC */
    st_cmd(ram, (0x47u << 24) | (f2u(32767.5f) >> 8));     /* VP ZC */
}

/* Through-mode vertex: 8888 colour then s16 x,y,z (+pad to 4-byte stride). */
static void st_vtx2d(u8 *ram, u32 at, u32 colour, int x, int y, int z)
{
    mem_w32(ram, at + 0, colour);
    mem_w16(ram, at + 4, (u32)(u16)(s16)x);
    mem_w16(ram, at + 6, (u32)(u16)(s16)y);
    mem_w16(ram, at + 8, (u32)(u16)z);
    mem_w16(ram, at + 10, 0);
}

static void st_vtx3d(u8 *ram, u32 at, u32 colour, float x, float y, float z)
{
    mem_w32(ram, at + 0, colour);
    mem_w32(ram, at + 4, f2u(x));
    mem_w32(ram, at + 8, f2u(y));
    mem_w32(ram, at + 12, f2u(z));
}

#define ST_VT2D ((1u << 23) | (2u << 7) | (7u << 2))   /* thru, s16 pos, 8888 */
#define ST_VT3D ((3u << 7) | (7u << 2))                /* float pos, 8888     */
#define ST_PRIM(kind, n) ((0x04u << 24) | ((u32)(kind) << 16) | (u32)(n))

static int st_through(u8 *ram, u32 fb)
{
    const u32 vb = 0x08500000u;
    int fails = 0;

    st_target(ram, fb);
    st_cmd(ram, (0x12u << 24) | ST_VT2D);
    st_vtx2d(ram, vb + 0,  0xFF0000FFu, 4, 4, 0);
    st_vtx2d(ram, vb + 12, 0xFF0000FFu, 14, 14, 0);
    st_vaddr(ram, vb);
    ge_draw_prim(ram, ST_PRIM(6, 2));                  /* sprite */

    fails += st_expect(ram, fb + (4u*512u + 4u)*4u, 0xFF0000FFu,
                       "through sprite top-left");
    fails += st_expect(ram, fb + (13u*512u + 13u)*4u, 0xFF0000FFu,
                       "through sprite bottom-right");
    fails += st_expect(ram, fb + (14u*512u + 14u)*4u, 0u,
                       "through sprite is half-open");
    fails += st_expect(ram, fb + (3u*512u + 3u)*4u, 0u,
                       "outside the through sprite");

    /* The scissor bounds it. */
    st_cmd(ram, (0xD5u << 24) | (7u << 10) | 7u);
    st_vtx2d(ram, vb + 0,  0xFF00FF00u, 4, 4, 0);
    st_vtx2d(ram, vb + 12, 0xFF00FF00u, 14, 14, 0);
    st_vaddr(ram, vb);
    ge_draw_prim(ram, ST_PRIM(6, 2));
    fails += st_expect(ram, fb + (5u*512u + 5u)*4u, 0xFF00FF00u,
                       "inside the scissor");
    fails += st_expect(ram, fb + (9u*512u + 9u)*4u, 0xFF0000FFu,
                       "outside the scissor is untouched");
    return fails;
}

static int st_transform(u8 *ram, u32 fb)
{
    const u32 vb = 0x08510000u;
    const u32 red = 0xFF0000FFu, green = 0xFF00FF00u, blue = 0xFFFF0000u;
    int fails = 0;
    u32 mid;

    st_target(ram, fb);
    st_identity(ram);
    st_cmd(ram, (0x12u << 24) | ST_VT3D);
    st_vtx3d(ram, vb + 0,  red,   -0.5f, -0.5f, 0.0f);
    st_vtx3d(ram, vb + 16, green,  0.5f, -0.5f, 0.0f);
    st_vtx3d(ram, vb + 32, blue,   0.0f,  0.5f, 0.0f);
    st_vaddr(ram, vb);
    ge_draw_prim(ram, ST_PRIM(3, 3));                  /* triangles */

    mid = mem_r32(ram, fb + (150u*512u + 240u)*4u);
    if (!(mid & 0x00FFFFFFu)) {
        printf("FAIL  transform triangle: centre pixel is black (%08x)\n", mid);
        fails++;
    }
    fails += st_expect(ram, fb + (2u*512u + 2u)*4u, 0u,
                       "outside the transformed triangle");
    {
        u32 l = mem_r32(ram, fb + (100u*512u + 170u)*4u);
        u32 r = mem_r32(ram, fb + (100u*512u + 310u)*4u);
        if (l == r) {
            printf("FAIL  Gouraud shading is flat: %08x == %08x\n", l, r);
            fails++;
        }
    }

    /* Back-face culling is by submission order: enable it and submit the
     * reversed order; the triangle must vanish. */
    memset(ram + (fb & PSP_ADDR_MASK), 0, 512u * 272u * 4u);
    st_target(ram, fb);
    st_identity(ram);
    st_cmd(ram, (0x12u << 24) | ST_VT3D);
    st_cmd(ram, (0x1Du << 24) | 1u);                   /* CULLFACEENABLE */
    st_cmd(ram, (0x9Bu << 24) | 1u);                   /* CULL = 1       */
    st_vtx3d(ram, vb + 0,  red,    0.5f, -0.5f, 0.0f);
    st_vtx3d(ram, vb + 16, green, -0.5f, -0.5f, 0.0f);
    st_vtx3d(ram, vb + 32, blue,   0.0f,  0.5f, 0.0f);
    st_vaddr(ram, vb);
    ge_draw_prim(ram, ST_PRIM(3, 3));
    fails += st_expect(ram, fb + (150u*512u + 240u)*4u, 0u,
                       "back-facing triangle is culled");
    return fails;
}

/* Strips and fans reuse transformed vertices between triangles (see the vertex
 * cache in ge_draw_prim). The cache must be invisible: drawing geometry as a
 * strip or a fan has to produce exactly what the equivalent list produces, and
 * a stale carried vertex would show up as a wrong or missing triangle. So draw
 * both and compare the framebuffers pixel for pixel.
 *
 * This exists because the rest of the self-test only ever submits type 3, which
 * is the one path the cache does not touch -- it would have passed unchanged
 * with the cache completely broken. */
static int st_strip_fan(u8 *ram, u32 fb)
{
    const u32 vb = 0x08530000u;
    const u32 shadow = 0x08540000u;      /* copy of the list-drawn frame */
    const u32 c0 = 0xFF0000FFu, c1 = 0xFF00FF00u, c2 = 0xFFFF0000u, c3 = 0xFFFFFF00u;
    const size_t bytes = 512u * 272u * 4u;
    int fails = 0;

    /* Four vertices -> two triangles. As a strip that is (0,1,2) and (1,2,3);
     * as a fan, (0,1,2) and (0,2,3). Both are expressed as explicit lists to
     * compare against, with the strip's odd-triangle winding flip written out. */
    struct { float x, y, z; u32 c; } v[4] = {
        { -0.6f, -0.5f, 0.0f, c0 },
        {  0.5f, -0.6f, 0.0f, c1 },
        { -0.5f,  0.5f, 0.0f, c2 },
        {  0.6f,  0.45f, 0.0f, c3 },
    };
    int strip_list[6] = { 0,1,2, 2,1,3 };   /* strip triangle 1 has flipped winding */
    int fan_list[6]   = { 0,1,2, 0,2,3 };
    int pass;

    for (pass = 0; pass < 2; pass++) {     /* 0 = strip, 1 = fan */
        const int *ref = pass ? fan_list : strip_list;
        int i;

        /* Reference: the same triangles as an explicit list. */
        memset(ram + (fb & PSP_ADDR_MASK), 0, bytes);
        st_target(ram, fb);
        st_identity(ram);
        st_cmd(ram, (0x12u << 24) | ST_VT3D);
        for (i = 0; i < 6; i++)
            st_vtx3d(ram, vb + (u32)i * 16u, v[ref[i]].c,
                     v[ref[i]].x, v[ref[i]].y, v[ref[i]].z);
        st_vaddr(ram, vb);
        ge_draw_prim(ram, ST_PRIM(3, 6));
        memcpy(ram + (shadow & PSP_ADDR_MASK), ram + (fb & PSP_ADDR_MASK), bytes);

        /* Same geometry through the cached path. */
        memset(ram + (fb & PSP_ADDR_MASK), 0, bytes);
        st_target(ram, fb);
        st_identity(ram);
        st_cmd(ram, (0x12u << 24) | ST_VT3D);
        for (i = 0; i < 4; i++)
            st_vtx3d(ram, vb + (u32)i * 16u, v[i].c, v[i].x, v[i].y, v[i].z);
        st_vaddr(ram, vb);
        ge_draw_prim(ram, ST_PRIM(pass ? 5 : 4, 4));

        if (memcmp(ram + (fb & PSP_ADDR_MASK),
                   ram + (shadow & PSP_ADDR_MASK), bytes) != 0) {
            u32 off;
            for (off = 0; off < bytes; off += 4)
                if (mem_r32(ram, fb + off) != mem_r32(ram, shadow + off)) break;
            printf("FAIL  %s does not match the equivalent triangle list "
                   "(first difference at pixel %u,%u: %08x vs %08x)\n",
                   pass ? "fan" : "strip",
                   (off / 4u) % 512u, (off / 4u) / 512u,
                   mem_r32(ram, fb + off), mem_r32(ram, shadow + off));
            fails++;
        }
    }

    /* A long strip is where the cache actually earns its keep, and where a
     * carried-forward vertex would drift: check one draws something at all. */
    memset(ram + (fb & PSP_ADDR_MASK), 0, bytes);
    st_target(ram, fb);
    st_identity(ram);
    st_cmd(ram, (0x12u << 24) | ST_VT3D);
    {
        int i;
        for (i = 0; i < 8; i++)
            st_vtx3d(ram, vb + (u32)i * 16u, (i & 1) ? c1 : c2,
                     -0.7f + 0.2f * (float)i, (i & 1) ? 0.4f : -0.4f, 0.0f);
        st_vaddr(ram, vb);
        ge_draw_prim(ram, ST_PRIM(4, 8));
    }
    {
        u32 mid = mem_r32(ram, fb + (136u*512u + 240u)*4u);
        if (!(mid & 0x00FFFFFFu)) {
            printf("FAIL  8-vertex strip drew nothing at the centre\n");
            fails++;
        }
    }
    return fails;
}

static int st_depth(u8 *ram, u32 fb)
{
    const u32 vb = 0x08520000u;
    uint16_t *zb = ge_zbuf_ptr();
    uint32_t zs;
    int fails = 0;

    st_target(ram, fb);
    zs = ge_zbuf_stride();
    st_cmd(ram, (0x23u << 24) | 1u);                   /* ZTESTENABLE */
    st_cmd(ram, (0xDEu << 24) | 4u);                   /* ZTEST LESS  */
    zb[20u * zs + 20u] = 100;

    st_cmd(ram, (0x12u << 24) | ST_VT2D);
    st_vtx2d(ram, vb + 0,  0xFF0000FFu, 20, 20, 50);
    st_vtx2d(ram, vb + 12, 0xFF0000FFu, 21, 21, 50);
    st_vaddr(ram, vb);
    ge_draw_prim(ram, ST_PRIM(6, 2));
    fails += st_expect(ram, fb + (20u*512u + 20u)*4u, 0xFF0000FFu,
                       "the nearer fragment passes the depth test");
    if (zb[20u * zs + 20u] != 50) {
        printf("FAIL  depth write: z = %u, expected 50\n",
               (unsigned)zb[20u * zs + 20u]);
        fails++;
    }

    st_vtx2d(ram, vb + 0,  0xFF00FF00u, 20, 20, 200);
    st_vtx2d(ram, vb + 12, 0xFF00FF00u, 21, 21, 200);
    st_vaddr(ram, vb);
    ge_draw_prim(ram, ST_PRIM(6, 2));
    fails += st_expect(ram, fb + (20u*512u + 20u)*4u, 0xFF0000FFu,
                       "the farther fragment fails the depth test");
    return fails;
}

static int st_clear(u8 *ram, u32 fb)
{
    const u32 vb = 0x08530000u;
    uint16_t *zb = ge_zbuf_ptr();
    uint32_t zs;
    int fails = 0;

    st_target(ram, fb);
    zs = ge_zbuf_stride();
    mem_w32(ram, fb + (30u*512u + 30u)*4u, 0xFF123456u);
    zb[30u * zs + 30u] = 4242;

    /* CLEAR with only the depth enable (bit 10): colour survives, z does not. */
    st_cmd(ram, (0xD3u << 24) | 1u | (1u << 10));
    st_cmd(ram, (0x12u << 24) | ST_VT2D);
    st_vtx2d(ram, vb + 0,  0xFFFFFFFFu, 30, 30, 7);
    st_vtx2d(ram, vb + 12, 0xFFFFFFFFu, 32, 32, 7);
    st_vaddr(ram, vb);
    ge_draw_prim(ram, ST_PRIM(6, 2));
    st_cmd(ram, (0xD3u << 24));

    fails += st_expect(ram, fb + (30u*512u + 30u)*4u, 0xFF123456u,
                       "a depth-only clear leaves the colour alone");
    if (zb[30u * zs + 30u] != 7) {
        printf("FAIL  depth-only clear: z = %u, expected 7\n",
               (unsigned)zb[30u * zs + 30u]);
        fails++;
    }
    return fails;
}

int ge_raster_selftest(u8 *ram)
{
    const u32 fb = 0x04100000u;
    int fails = 0;

    s_ram = ram;
    memset(ram + (fb & PSP_ADDR_MASK), 0, 512u * 272u * 4u);

    fails += st_through(ram, fb);
    fails += st_transform(ram, fb);
    fails += st_strip_fan(ram, fb);
    fails += st_depth(ram, fb);
    fails += st_clear(ram, fb);

    printf("%s  GE rasteriser self-test (%d checks failed)\n",
           fails ? "FAIL" : "ok  ", fails);
    return fails;
}
