/* runtime/host/present_null.c -- headless presenter (the default build). */

#include "present.h"

int present_init(const char *title)
{
    (void)title;
    return 0;
}

int present_frame(u8 *ram, u32 addr, u32 stride, int fpf, int w, int h)
{
    (void)ram; (void)addr; (void)stride; (void)fpf; (void)w; (void)h;
    return 1;
}

u32 present_buttons(void) { return 0u; }

void present_analog(u8 *lx, u8 *ly)
{
    /* ctrlsvc.h:116-119: the analog axes are 0..255 with 128 at centre. */
    if (lx) *lx = 128u;
    if (ly) *ly = 128u;
}

void present_analog2(u8 *rx, u8 *ry)
{
    if (rx) *rx = 128u;
    if (ry) *ry = 128u;
}

void present_triggers(float *lt, float *rt)
{
    if (lt) *lt = 0.0f;
    if (rt) *rt = 0.0f;
}

u32 present_aux(void) { return 0u; }

void present_shutdown(void) { }

int present_is_active(void) { return 0; }

int present_get_vk(PresentVkInfo *out) { (void)out; return 0; }

int present_image(void *vk_image, int src_w, int src_h)
{ (void)vk_image; (void)src_w; (void)src_h; return 1; }

int present_gpu_init(void) { return 0; }
