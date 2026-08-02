/* runtime/gpu/framedump.h -- write the display frame buffer to a BMP.
 * See runtime/gpu/framedump.c. */
#ifndef PSPRECO_FRAMEDUMP_H
#define PSPRECO_FRAMEDUMP_H

#include "pspreco.h"

int  framedump_enabled(void);
void framedump_frame(u8 *ram, u32 addr, u32 stride, int fpf, int w, int h);

#endif
