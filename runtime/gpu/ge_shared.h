/* Shared GE state + GPU-backend hook API.
 *
 * GeState/GeVtx live here so the optional GPU rasterizer can read the live GE state.
 * ge.c remains the only writer and the arbiter of GE semantics; behaviour is unchanged
 * when no hooks are registered.
 */
#ifndef GE_SHARED_H
#define GE_SHARED_H

#include <stdint.h>

typedef struct {
    uint32_t base, offset;    /* GE_BASE raw data and GE_OFFSETADDR << 8 */
    uint32_t fbp, fbw, fbfmt; /* framebuffer ptr/stride/format (0=5650,1=5551,2=4444,3=8888) */
    uint32_t zbp, zbw;
    uint32_t vaddr, iaddr;
    uint32_t vtype;           /* vertex type bits */
    int scis_x1, scis_y1, scis_x2, scis_y2;
    int ztest_enable, zwrite_disable, cull_enable;
    uint32_t ztest, cull, minz, maxz;
    /* GE_CLIPENABLE (0x1C), per PPSSPP. OFF: any vertex outside the 4096x4096x65536 grid,
     * or with z/w past +-1, drops the WHOLE triangle. ON: z clamps; only all-3-outside-
     * same-side drops. */
    uint32_t depth_clip;
    /* Matrices: column-major. World/View are 4×3 (12 floats), Proj is 4×4 (16 floats).
     * *_num is the auto-increment write cursor set by *MATRIXNUMBER commands. */
    float world[12], view[12], proj[16];
    int world_num, view_num, proj_num;
    float bone[96];                          /* 8 bone matrices, 4x3 each (skinning) */
    int bone_num;
    /* Viewport: raw 24-bit float mantissa words from VIEWPORTXSCALE..VIEWPORTZCENTER. */
    uint32_t viewport_raw[6];   /* [0]=XS [1]=YS [2]=ZS [3]=XC [4]=YC [5]=ZC */
    uint32_t offsetx, offsety;  /* sub-pixel offset (pixels = (raw&0xFFFF)/16.0) */
    uint32_t material;        /* flat material/ambient colour (0x00BBGGRR) */
    int material_alpha, material_alpha_set, material_set;
    int tex_enable, tex_swizzle, clear;
    uint32_t clear_mode;
    int blend_enable;
    uint32_t blend_mode, blend_fixa, blend_fixb;
    uint32_t tex_addr, tex_bufw, tex_fmt;   /* level-0 texture base / stride(texels) / PSM */
    uint32_t tex_wrap, tex_func, tex_env, tex_filter;
    int tex_w, tex_h;                        /* texture dimensions (from TEXSIZE log2) */
    uint32_t clut_addr, clut_fmt;            /* palette base and format word */
    /* Internal CLUT RAM, captured at GE_LOADCLUT like the hardware (games reuse the
     * staging buffer right after LOADCLUT). */
    uint8_t clutram[2048];
    /* Texture coordinate transform (transform-mode only; through-mode UV are raw texels). */
    float tex_scale_u, tex_scale_v, tex_off_u, tex_off_v;
    uint32_t tex_map_mode;                   /* bits0-1: 0=UV 1=tex matrix 2=envmap; bits8-9: proj source */
    uint32_t tex_shade_ls;                   /* envmap: light indices (bits0-1, 8-9) */
    float tgen[12];                          /* texgen matrix, 4x3 column-major like world/view */
    int tgen_num;
    /* Alpha test: atest = func | ref<<8 | mask<<16 (funcs match ztest_px order). */
    int atest_enable; uint32_t atest;
    /* Fog: colour = mix(fog_color, frag, clamp01((view_z + fog_end) * fog_slope)). */
    int fog_enable; float fog_end, fog_slope; uint32_t fog_color;
    /* Shading: 1 = gouraud (default), 0 = flat (provoking vertex = last). */
    int shade_gouraud;
    /* Lighting (transform-mode, per-vertex). Lights are in world space. */
    int lighting_enable, light_on[4], reverse_normal, light_mode;
    uint32_t light_type[4];                  /* bits0-1 comp, bits8-9 type */
    float light_pos[4][3], light_dir[4][3], light_att[4][3];
    float light_spot_exp[4], light_spot_cut[4];
    uint32_t light_acol[4], light_dcol[4], light_scol[4];
    uint32_t amb_color; int amb_alpha;
    uint32_t mat_emissive, mat_diffuse, mat_specular, mat_update;
    float spec_coef;
    /* Dither: 4x4 signed offsets applied to RGB before packing to 16-bit formats. */
    int dither_enable; int8_t dith[4][4];
    /* Write masks: bits set = write-disabled (per PSP semantics). */
    uint32_t mask_rgb; int mask_alpha;
    /* Bumped on every GE_LOADCLUT: lets the GPU backend detect palette changes. */
    uint32_t clut_gen;
    /* Block transfer (GE_TRANSFER*): raw command words, decoded at GE_TRANSFERSTART. */
    uint32_t xf_src, xf_srcw, xf_dst, xf_dstw, xf_spos, xf_dpos, xf_size;
} GeState;

/* A rasterized vertex: screen position, reciprocal clip-w (for persp-correct interp), UV,
 * colour, and per-vertex fog factor (1 = no fog). In transform mode u/v are stored
 * pre-multiplied by rw (texel coords over w). */
typedef struct GeVtx { float x, y, z, rw; float u, v; float fog; int r, g, b, a; } GeVtx;

/* GPU rasterizer hooks. The primitive hooks return 1 when the primitive was taken by
 * the GPU backend (the software rasterizer is skipped) — in the full GPU renderer they
 * always take it. flush(reason) is called at GE sync points ("listend", "loadclut");
 * the backend decides what each requires. vram_dirty(addr,bytes) tells the backend the
 * CPU wrote guest memory directly (movie decode, DMA) so any GPU framebuffer caching
 * that range must be invalidated. */
typedef struct GeGpuHooks {
    int  (*tri)(const GeVtx *a, const GeVtx *b, const GeVtx *c, int persp);
    int  (*sprite)(const GeVtx *p0, const GeVtx *p1, int persp);
    int  (*line)(const GeVtx *a, const GeVtx *b, int persp);
    int  (*point)(const GeVtx *a, int persp);
    void (*flush)(const char *reason);
    void (*vram_dirty)(uint32_t addr, uint32_t bytes);
    /* GE block transfer (state in xf_*): returns 1 when the copy was performed GPU-side
     * (guest VRAM intentionally left stale). 0 = not representable: caller runs the CPU
     * copy, preceded by flush("xfersrc") and followed by vram_dirty on the destination. */
    int  (*xfer)(uint32_t startdata);
} GeGpuHooks;

/* Implemented in ge.c. (CPU-side writes that may alias GPU-cached
 * framebuffers go through ge_gpu_vram_dirty, declared in ge.h.) */
void      ge_set_gpu_hooks(const GeGpuHooks *h);
GeState  *ge_state_ptr(void);
uint16_t *ge_zbuf_ptr(void);        /* 272*512 entries, row stride = ge_zbuf_stride() */
uint32_t  ge_zbuf_stride(void);
/* Decode the CURRENT texture (ge.tex_addr, tex_w x tex_h) to RGBA8 through the exact
 * sampler path the software rasterizer uses (swizzle + CLUT + format). out must hold
 * tex_w*tex_h words; layout is row-major, r|g<<8|b<<16|a<<24. */
void      ge_decode_tex_rgba(uint32_t *out);

#endif /* GE_SHARED_H */
