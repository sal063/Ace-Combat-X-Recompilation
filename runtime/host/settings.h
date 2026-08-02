/* runtime/host/settings.h -- the graphics settings the F4 overlay edits.
 *
 * One plain struct, read directly by the renderer, the presenter and the
 * frame pacer. Every field here is honoured somewhere: nothing in this file
 * is decorative. Persisted as TOML next to the executable (pspreco.toml).
 */
#ifndef PSPRECO_SETTINGS_H
#define PSPRECO_SETTINGS_H

#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Tri-state overrides: the game's own choice, or forced one way. */
enum { OVR_GAME = 0, OVR_OFF = 1, OVR_ON = 2 };
/* Texture filter */
enum { TEXF_GAME = 0, TEXF_LINEAR = 1, TEXF_NEAREST = 2 };
/* Letterboxing */
enum { ASPECT_KEEP = 0, ASPECT_INTEGER = 1, ASPECT_STRETCH = 2, ASPECT_4_3 = 3 };
/* Swapchain present mode */
enum { PRESENT_FIFO = 0, PRESENT_MAILBOX = 1, PRESENT_IMMEDIATE = 2 };
/* Shading */
enum { SHADE_GAME = 0, SHADE_FLAT = 1, SHADE_GOURAUD = 2 };

typedef struct {
    /* ---- output ------------------------------------------------------- */
    int   fullscreen;        /* borderless desktop fullscreen */
    int   window_scale;      /* 1..6, windowed only (480x272 * scale) */
    int   aspect_mode;       /* ASPECT_* */
    int   present_filter;    /* 0 nearest, 1 linear */
    int   present_mode;      /* PRESENT_* (applied on swapchain rebuild) */
    float letterbox[3];      /* RGB of the bars */

    /* ---- frame pacing -------------------------------------------------- */
    /* The engine waits two vblanks per frame, so the game runs at 30 and that
     * is stock timing; nothing here changes it. */
    int   throttle;          /* hold each vblank to 59.94 Hz */
    int   speed_percent;     /* 25..800, scales the target frame time */
    int   frameskip;         /* 0..5 GE frames dropped between presents */
    int   show_fps;
    int   show_stats;        /* GE counters in the overlay corner */

    /* ---- renderer ------------------------------------------------------ */
    int   res_scale;         /* 1..4: supersample the GE render targets */
    int   tex_filter;        /* TEXF_* */
    /* The GE itself only ever names level 0, but the game's textures are often
     * stored larger than they are drawn, so the backend builds the reduced
     * levels itself; without them a 2:1 draw skips every other texel. */
    int   mipmaps_on;
    int   anisotropy;        /* 1..16 (1 = off) */
    int   rtt;               /* render-to-texture targets on the GPU */

    /* ---- GE feature overrides ------------------------------------------ */
    int   fog;               /* OVR_* */
    int   lighting;          /* OVR_* */
    int   culling;           /* OVR_* */
    int   alpha_test;        /* OVR_* */
    int   dither;            /* OVR_* */
    int   depth_test;        /* OVR_* */
    int   depth_write;       /* OVR_* */
    int   blending;          /* OVR_* */
    int   texturing;         /* OVR_* (OFF draws untextured) */
    int   shading;           /* SHADE_* */

    /* ---- engine hacks --------------------------------------------------- */
    /* The engine parameterises fog as (near, far) and hands the GE
     * end = far, slope = 1/(far - near)  [engine sub_1DFAC4 / guest 0x089e3ac4].
     * These scale that pair in its own space; see ge_render.c. */
    float fog_distance;      /* 0.25..4.0, scales the far plane */
    float fog_start;         /* 0.25..4.0, scales where the haze begins */
    int   fog_color_force;
    float fog_color[3];
    int   skip_lines, skip_points;

    /* ---- input ----------------------------------------------------------
     * Controls the PSP hardware did not have, driven through engine code that
     * was already there but unreachable.  See runtime/hle/qol_input.c. */
    int   rstick_cam;        /* right stick moves the camera */
    int   rstick_invert;     /* invert its vertical axis */
    int   rstick_sens;       /* 10..400, percent of the engine's own look rate */
    int   analog_yaw;        /* LT/RT give proportional rudder, not on/off */
    int   r3_view;           /* R3 cycles the view */

    /* ---- colour (applied while converting the frame for presentation) --- */
    float brightness;        /* -0.5..0.5 */
    float contrast;          /* 0.5..2.0 */
    float saturation;        /* 0..2 */
    float gamma;             /* 0.5..2.5 */

    /* ---- debug ---------------------------------------------------------- */
    int   ge_stats_log;      /* per-second GE counters to the log */
    int   ge_cmd_log;        /* GPU backend chatter */
    int   frame_dump_every;  /* 0 = off, else dump a BMP every N frames */
    int   tex_dump;
} GfxSettings;

extern GfxSettings g_gfx;

/* Presets, strongest first; gfx_preset_apply(0..3) overwrites the visual
 * fields and leaves window/debug preferences alone. */
enum { PRESET_ULTRA = 0, PRESET_HIGH = 1, PRESET_MEDIUM = 2, PRESET_LOW = 3 };
const char *gfx_preset_name(int preset);
void        gfx_preset_apply(int preset);
/* Index of the preset the current settings match, or -1 for "custom". */
int         gfx_preset_current(void);

void gfx_settings_defaults(void);
/* pspreco.toml next to the exe; both are no-ops on failure (defaults stand). */
int  gfx_settings_load(void);
int  gfx_settings_save(void);
const char *gfx_settings_path(void);

/* Bumped whenever something the renderer caches (res scale, filtering,
 * anisotropy) changes, so backends can rebuild lazily. */
extern unsigned g_gfx_generation;
void gfx_settings_touch(void);

#ifdef __cplusplus
}
#endif

#endif /* PSPRECO_SETTINGS_H */
