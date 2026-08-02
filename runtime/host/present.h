/* runtime/host/present.h -- window and input. Implemented by present_sdl3vk.c
 * (-DPSPRECO_SDL3) or present_null.c (default, so verify gates run headless).
 */
#ifndef PSPRECO_PRESENT_H
#define PSPRECO_PRESENT_H

#include "pspreco.h"

/* 1 if a window was opened. 0 means run headless; not an error. */
int  present_init(const char *title);

/* 1 while a window is open. The frame pacer keys off this: a windowed run is
 * held to the PSP's 59.94 Hz, a headless one runs flat out. */
int  present_is_active(void);

/* Show one frame. `addr` is the guest display frame buffer, `stride` its width
 * in pixels, `fpf` its SCE_GE_FPF_* pixel format, w/h the visible area.
 * Returns 0 when the user has closed the window. */
int  present_frame(u8 *ram, u32 addr, u32 stride, int fpf, int w, int h);

/* The PSP button mask and analog stick, as sceCtrl reports them.
 * REF: include/ctrlsvc.h:57-76 for the SCE_CTRL_* bits. */
u32  present_buttons(void);
void present_analog(u8 *lx, u8 *ly);

/* Inputs the PSP hardware does not have, which the game nonetheless carries
 * code for: a second analog stick (sceCtrl's X2/Y2 slots, which the engine
 * conditions and derives four button bits from, then zeroes because there was
 * never a stick behind them), analog shoulder travel, and the stick clicks.
 *
 * Conventions match present_analog deliberately, so the guest's own axis
 * handling can process the right stick with no special case: 0..255 with 128
 * at centre. Triggers are 0..1, already deadzoned.
 *
 * These do NOT travel through sceCtrl -- SceCtrlData has no room for them and
 * inventing fields there would be a lie about the hardware. They reach the
 * guest through runtime/hle/qol_input.c, which drives the engine's own
 * unfed code paths. */
void present_analog2(u8 *rx, u8 *ry);
void present_triggers(float *lt, float *rt);

#define PRESENT_AUX_L3  (1u << 0)   /* left stick click  */
#define PRESENT_AUX_R3  (1u << 1)   /* right stick click */
u32  present_aux(void);

void present_shutdown(void);

/* The SDL3+Vulkan build shares its device with ge_gpu_vk.c; the null
 * presenter answers 0 to both, keeping the backend off. Handles are void*
 * (the real VkInstance etc.) so this header stays vulkan.h-free. */
typedef struct PresentVkInfo {
    void *instance, *physical, *device, *queue;
    u32   queue_family;
} PresentVkInfo;
int  present_get_vk(PresentVkInfo *out);

/* Present a 512x272 RGBA8 VkImage in TRANSFER_SRC_OPTIMAL layout; the
 * visible 480x272 region is letterboxed like present_frame. Returns 0 when
 * the user closed the window, 1 otherwise. */
/* Present a backend-owned image. src_w/src_h are the VISIBLE extent of that
 * image in its own pixels: the GE target is 512 wide but only 480 is shown,
 * and at internal-resolution scale N both are N times bigger. Passing the
 * wrong values crops the picture instead of scaling it. */
int  present_image(void *vk_image, int src_w, int src_h);

#endif
