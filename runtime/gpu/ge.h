/* runtime/gpu/ge.h -- the GE renderer's public surface.
 *
 * The renderer is ported from the previous project's GE; pixel rules derive
 * from PPSSPP's software renderer (GPLv2+). runtime/hle/ge.c owns display-list
 * control flow and feeds every state and PRIM command through here.
 *
 * An optional GPU backend (runtime/gpu/ge_gpu_vk.c, SDL3+Vulkan builds only)
 * takes screen-space primitives through the GeGpuHooks seam in ge_shared.h;
 * without it the software rasteriser writes guest VRAM.
 */
#ifndef PSPRECO_GE_H
#define PSPRECO_GE_H

#include "pspreco.h"

/* Apply one state-setting command word. `base` is the BASE the list executor
 * tracked, in its (bits 27..24 << 24) form. Returns 1 if consumed. */
int  ge_state_command(u8 *ram, u32 word, u32 base);
/* Execute a PRIM command word. */
void ge_draw_prim(u8 *ram, u32 word);

void ge_raster_init(void);
void ge_raster_report(void);
/* Diagnostic: report what the current render target holds. PSPRECO_GE_PROBE. */
void ge_raster_probe(u8 *ram, const char *when);
/* Drive the rasteriser directly and check the bytes. 0 if everything passed. */
int  ge_raster_selftest(u8 *ram);

/* Unpack a frame-buffer pixel in SCE_GE_FPF_* format `fpf` to 0xAABBGGRR.
 * Shared by the frame dump and the presenter so they cannot disagree. */
u32  ge_unpack_pixel(int fpf, u32 v);
/* The current render target's absolute address (eDRAM base + FBP). */
u32  ge_framebuffer_addr(void);

/* Frame counter for the renderer's periodic statistics (SR_GESTAT et al).
 * Called once per display flip. */
void ge_set_frame(u32 frame);

/* Raise the GPU backend's sync points from outside the renderer. No-ops
 * without a backend. */
void ge_gpu_flush(const char *reason);
void ge_gpu_vram_dirty(u32 addr, u32 bytes);

/* Present straight from the GPU backend's image for the buffer at fbaddr.
 * NULL, or a return of -1, means "not GPU-resident": present from guest VRAM
 * instead. Registered by the backend when it initialises. */
extern int (*ge_gpu_present_fn)(u32 fbaddr, int fmt, u32 stride);

/* Initialise the GPU backend if this build has one and the window is up.
 * Returns 1 when the backend took over rasterisation. */
int  present_gpu_init(void);

#endif
