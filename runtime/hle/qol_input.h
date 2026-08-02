/* qol_input.h -- controls the PSP did not have, driven through engine code
 * that already exists.  See qol_input.c for the reverse engineering. */
#ifndef PSPRECO_QOL_INPUT_H
#define PSPRECO_QOL_INPUT_H

#include "pspreco.h"

/* Called from recomp_lookup for every indirect guest call.  Returns a
 * replacement for `addr`, or NULL to use the original.
 *
 * `orig` is how the override layer learns the real function pointer: the
 * lookup that asks whether an address is overridden also supplies what it
 * would otherwise have returned, so nothing here needs access to the
 * recompiled function tables.  Must stay cheap -- this is on the path of
 * every indirect call in the game. */
RecompFn qol_override(u32 addr, RecompFn orig);

/* Runtime configuration.  Defaults are set from the environment on first use;
 * the F4 menu writes these directly. */
typedef struct {
    int   rstick_cam;    /* right stick moves the camera */
    int   rstick_invert; /* invert its vertical axis */
    int   rstick_sens;   /* percent, 100 = the engine's own free-look rate */
    int   analog_yaw;    /* LT/RT give proportional rudder */
    int   r3_view;       /* R3 cycles the view */
} QolCfg;

extern QolCfg g_qol;

void qol_input_init(void);

#endif
