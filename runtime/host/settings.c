/* runtime/host/settings.c -- defaults, presets and TOML persistence.
 *
 * One field table drives saving, loading and clamping, so adding a setting
 * means adding a struct field and one row here.
 */

#include "settings.h"
#include "../hle/qol_input.h"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stddef.h>

GfxSettings g_gfx;
unsigned    g_gfx_generation = 1;

void gfx_settings_touch(void)
{
    g_gfx_generation++;
    /* Push the input settings across to the layer that uses them.  Done here
     * because every change -- defaults, file load, preset, menu -- funnels
     * through this one function, and doing it here keeps runtime/hle from
     * depending on host settings just to read five integers. */
    g_qol.rstick_cam    = g_gfx.rstick_cam;
    g_qol.rstick_invert = g_gfx.rstick_invert;
    g_qol.rstick_sens   = g_gfx.rstick_sens;
    g_qol.analog_yaw    = g_gfx.analog_yaw;
    g_qol.r3_view       = g_gfx.r3_view;
    qol_input_init();   /* SR_QOL_OFF overrides the menu, so it goes last */
}

typedef enum { T_BOOL, T_INT, T_FLOAT, T_RGB } FType;

typedef struct {
    const char *sect, *key;
    FType       type;
    size_t      off;
    float       lo, hi;
} Field;

#define F(sect, key, type, member, lo, hi) \
    { sect, key, type, offsetof(GfxSettings, member), lo, hi }

static const Field k_fields[] = {
    F("output", "fullscreen",      T_BOOL,  fullscreen,       0, 1),
    F("output", "window_scale",    T_INT,   window_scale,     1, 6),
    F("output", "aspect_mode",     T_INT,   aspect_mode,      0, 3),
    F("output", "present_filter",  T_INT,   present_filter,   0, 1),
    F("output", "present_mode",    T_INT,   present_mode,     0, 2),
    F("output", "letterbox",       T_RGB,   letterbox,        0, 1),

    F("pacing", "throttle",        T_BOOL,  throttle,         0, 1),
    F("pacing", "speed_percent",   T_INT,   speed_percent,   25, 800),
    F("pacing", "frameskip",       T_INT,   frameskip,        0, 5),
    F("pacing", "show_fps",        T_BOOL,  show_fps,         0, 1),
    F("pacing", "show_stats",      T_BOOL,  show_stats,       0, 1),

    F("render", "res_scale",       T_INT,   res_scale,        1, 4),
    F("render", "tex_filter",      T_INT,   tex_filter,       0, 2),
    F("render", "mipmaps",         T_BOOL,  mipmaps_on,       0, 1),
    F("render", "anisotropy",      T_INT,   anisotropy,       1, 16),
    F("render", "rtt",             T_BOOL,  rtt,              0, 1),

    F("ge",     "fog",             T_INT,   fog,              0, 2),
    F("ge",     "lighting",        T_INT,   lighting,         0, 2),
    F("ge",     "culling",         T_INT,   culling,          0, 2),
    F("ge",     "alpha_test",      T_INT,   alpha_test,       0, 2),
    F("ge",     "dither",          T_INT,   dither,           0, 2),
    F("ge",     "depth_test",      T_INT,   depth_test,       0, 2),
    F("ge",     "depth_write",     T_INT,   depth_write,      0, 2),
    F("ge",     "blending",        T_INT,   blending,         0, 2),
    F("ge",     "texturing",       T_INT,   texturing,        0, 2),
    F("ge",     "shading",         T_INT,   shading,          0, 2),

    F("engine", "fog_distance",    T_FLOAT, fog_distance,   0.25f, 4.0f),
    F("engine", "fog_start",       T_FLOAT, fog_start,      0.25f, 4.0f),
    F("engine", "fog_color_force", T_BOOL,  fog_color_force,  0, 1),
    F("engine", "fog_color",       T_RGB,   fog_color,        0, 1),
    F("engine", "skip_lines",      T_BOOL,  skip_lines,       0, 1),
    F("engine", "skip_points",     T_BOOL,  skip_points,      0, 1),

    F("input",  "rstick_cam",      T_BOOL,  rstick_cam,       0, 1),
    F("input",  "rstick_invert",   T_BOOL,  rstick_invert,    0, 1),
    F("input",  "rstick_sens",     T_INT,   rstick_sens,     10, 400),
    F("input",  "analog_yaw",      T_BOOL,  analog_yaw,       0, 1),
    F("input",  "r3_view",         T_BOOL,  r3_view,          0, 1),

    F("colour", "brightness",      T_FLOAT, brightness,    -0.5f, 0.5f),
    F("colour", "contrast",        T_FLOAT, contrast,       0.5f, 2.0f),
    F("colour", "saturation",      T_FLOAT, saturation,     0.0f, 2.0f),
    F("colour", "gamma",           T_FLOAT, gamma,          0.5f, 2.5f),

    F("debug",  "ge_stats_log",    T_BOOL,  ge_stats_log,     0, 1),
    F("debug",  "ge_cmd_log",      T_BOOL,  ge_cmd_log,       0, 1),
    F("debug",  "frame_dump_every",T_INT,   frame_dump_every, 0, 100000),
    F("debug",  "tex_dump",        T_BOOL,  tex_dump,         0, 1),
};
#define NFIELDS ((int)(sizeof k_fields / sizeof k_fields[0]))

static int   *ip(const Field *f, GfxSettings *s) { return (int *)((char *)s + f->off); }
static float *fp(const Field *f, GfxSettings *s) { return (float *)((char *)s + f->off); }

static void clamp_field(const Field *f, GfxSettings *s)
{
    int i;
    switch (f->type) {
    case T_BOOL: *ip(f, s) = *ip(f, s) ? 1 : 0; break;
    case T_INT:
        if (*ip(f, s) < (int)f->lo) *ip(f, s) = (int)f->lo;
        if (*ip(f, s) > (int)f->hi) *ip(f, s) = (int)f->hi;
        break;
    case T_FLOAT:
        if (*fp(f, s) < f->lo) *fp(f, s) = f->lo;
        if (*fp(f, s) > f->hi) *fp(f, s) = f->hi;
        break;
    case T_RGB:
        for (i = 0; i < 3; i++) {
            float *v = fp(f, s) + i;
            if (*v < 0.0f) *v = 0.0f;
            if (*v > 1.0f) *v = 1.0f;
        }
        break;
    }
}

void gfx_settings_defaults(void)
{
    memset(&g_gfx, 0, sizeof g_gfx);
    g_gfx.window_scale   = 2;
    g_gfx.aspect_mode    = ASPECT_KEEP;
    g_gfx.present_filter = 1;
    /* Mailbox, not FIFO. We do our own frame pacing (pace_frame holds each
     * emulated vblank to 59.94 Hz), so all vsync adds is its quantisation: miss
     * a refresh deadline by a microsecond under FIFO and you wait a whole extra
     * refresh, which turns "just under target" into a stable fraction of it.
     * Mailbox has no tearing either and does not quantise. The swapchain falls
     * back to FIFO where the driver lacks it. */
    g_gfx.present_mode   = PRESENT_MAILBOX;
    g_gfx.throttle       = 1;
    g_gfx.speed_percent  = 100;
    g_gfx.res_scale      = 1;
    g_gfx.mipmaps_on     = 1;
    g_gfx.anisotropy     = 1;
    g_gfx.rtt            = 1;
    g_gfx.fog_distance   = 1.0f;
    g_gfx.fog_start      = 1.0f;
    g_gfx.contrast       = 1.0f;
    g_gfx.saturation     = 1.0f;
    g_gfx.gamma          = 1.0f;
    /* The extra controls are on by default: a pad has a right stick and the
     * engine has always had the code for it. */
    g_gfx.rstick_cam     = 1;
    g_gfx.rstick_sens    = 100;
    g_gfx.analog_yaw     = 1;
    g_gfx.r3_view        = 1;
    gfx_settings_touch();
}

/* ---- presets -------------------------------------------------------------
 * Only the visual fields move; window size, pacing preference and the debug
 * switches are the player's, not the preset's. */

const char *gfx_preset_name(int preset)
{
    switch (preset) {
    case PRESET_ULTRA:  return "Ultra";
    case PRESET_HIGH:   return "High";
    case PRESET_MEDIUM: return "Medium";
    case PRESET_LOW:    return "Low";
    default:            return "Custom";
    }
}

typedef struct {
    int res_scale, tex_filter, rtt, frameskip;
    int mipmaps_on, anisotropy;
    int fog, lighting, dither, shading;
} Preset;

/* What actually costs time here: the vertex transform, lighting and fog run
 * on the CPU in ge_render.c, and res_scale multiplies GPU fill. So Ultra
 * spends on supersampling and leaves every GE feature the game asked for
 * alone; Low drops the CPU-side per-vertex work (fog, lighting, gouraud),
 * turns off render-to-texture and skips every other frame.
 *
 * No preset overrides the texture filter. The game's UI textures pack glyph
 * cells edge to edge with no padding, so forcing linear on a surface the game
 * asked to point-sample bleeds the neighbouring cell in -- and where a cell
 * runs to the texture edge under REPEAT wrap it bleeds the far side in. Extra
 * quality comes from resolution and mip levels, not from second-guessing the
 * filter the game chose. */
static const Preset k_presets[4] = {
    /* res  filter      rtt skip mip aniso  fog       light     dither    shade */
    {  4, TEXF_GAME,  1, 0,  1, 16,  OVR_GAME, OVR_GAME, OVR_GAME, SHADE_GAME }, /* Ultra  */
    {  2, TEXF_GAME,  1, 0,  1,  8,  OVR_GAME, OVR_GAME, OVR_GAME, SHADE_GAME }, /* High   */
    {  1, TEXF_GAME,  1, 0,  1,  1,  OVR_GAME, OVR_GAME, OVR_GAME, SHADE_GAME }, /* Medium */
    {  1, TEXF_GAME,  0, 1,  0,  1,  OVR_OFF,  OVR_OFF,  OVR_OFF,  SHADE_FLAT }, /* Low    */
};

void gfx_preset_apply(int preset)
{
    const Preset *p;
    if (preset < 0 || preset > 3) return;
    p = &k_presets[preset];
    g_gfx.res_scale  = p->res_scale;
    g_gfx.tex_filter = p->tex_filter;
    g_gfx.rtt        = p->rtt;
    g_gfx.frameskip  = p->frameskip;
    g_gfx.mipmaps_on = p->mipmaps_on;
    g_gfx.anisotropy = p->anisotropy;
    g_gfx.fog        = p->fog;
    g_gfx.lighting   = p->lighting;
    g_gfx.dither     = p->dither;
    g_gfx.shading    = p->shading;
    /* A preset never leaves a debug view switched on. */
    g_gfx.texturing = g_gfx.alpha_test = OVR_GAME;
    g_gfx.skip_lines = g_gfx.skip_points = 0;
    gfx_settings_touch();
}

int gfx_preset_current(void)
{
    int i;
    for (i = 0; i < 4; i++) {
        const Preset *p = &k_presets[i];
        if (g_gfx.res_scale == p->res_scale && g_gfx.tex_filter == p->tex_filter
            && g_gfx.rtt == p->rtt && g_gfx.frameskip == p->frameskip
            && g_gfx.mipmaps_on == p->mipmaps_on && g_gfx.anisotropy == p->anisotropy
            && g_gfx.fog == p->fog && g_gfx.lighting == p->lighting
            && g_gfx.dither == p->dither && g_gfx.shading == p->shading
            && g_gfx.texturing == OVR_GAME && g_gfx.alpha_test == OVR_GAME)
            return i;
    }
    return -1;
}

/* ---- TOML ---------------------------------------------------------------- */

const char *gfx_settings_path(void)
{
    const char *e = getenv("PSPRECO_SETTINGS");
    return (e && e[0]) ? e : "pspreco.toml";
}

int gfx_settings_save(void)
{
    FILE *f = fopen(gfx_settings_path(), "w");
    const char *sect = "";
    int i;
    if (!f) return 0;
    fprintf(f, "# pspreco graphics settings -- written by the F4 overlay.\n"
               "# Delete this file to go back to defaults.\n");
    for (i = 0; i < NFIELDS; i++) {
        const Field *fd = &k_fields[i];
        if (strcmp(sect, fd->sect) != 0) {
            sect = fd->sect;
            fprintf(f, "\n[%s]\n", sect);
        }
        switch (fd->type) {
        case T_BOOL:
            fprintf(f, "%s = %s\n", fd->key, *ip(fd, &g_gfx) ? "true" : "false");
            break;
        case T_INT:
            fprintf(f, "%s = %d\n", fd->key, *ip(fd, &g_gfx));
            break;
        case T_FLOAT:
            fprintf(f, "%s = %.4f\n", fd->key, (double)*fp(fd, &g_gfx));
            break;
        case T_RGB: {
            const float *v = fp(fd, &g_gfx);
            fprintf(f, "%s = [%.4f, %.4f, %.4f]\n", fd->key,
                    (double)v[0], (double)v[1], (double)v[2]);
            break;
        }
        }
    }
    fclose(f);
    return 1;
}

static char *trim(char *s)
{
    char *e;
    while (*s == ' ' || *s == '\t') s++;
    e = s + strlen(s);
    while (e > s && (e[-1] == ' ' || e[-1] == '\t' || e[-1] == '\r' || e[-1] == '\n'))
        *--e = '\0';
    return s;
}

int gfx_settings_load(void)
{
    FILE *f = fopen(gfx_settings_path(), "r");
    char line[512], sect[64] = "";
    int i;

    gfx_settings_defaults();
    if (!f) return 0;

    while (fgets(line, sizeof line, f)) {
        char *s = trim(line), *eq, *key, *val;
        if (!*s || *s == '#') continue;
        if (*s == '[') {
            char *end = strchr(s, ']');
            if (!end) continue;
            *end = '\0';
            snprintf(sect, sizeof sect, "%s", s + 1);
            continue;
        }
        eq = strchr(s, '=');
        if (!eq) continue;
        *eq = '\0';
        key = trim(s);
        val = trim(eq + 1);

        for (i = 0; i < NFIELDS; i++) {
            const Field *fd = &k_fields[i];
            if (strcmp(fd->sect, sect) != 0 || strcmp(fd->key, key) != 0) continue;
            switch (fd->type) {
            case T_BOOL:
                *ip(fd, &g_gfx) = (strcmp(val, "true") == 0 || strcmp(val, "1") == 0);
                break;
            case T_INT:
                *ip(fd, &g_gfx) = (int)strtol(val, NULL, 10);
                break;
            case T_FLOAT:
                *fp(fd, &g_gfx) = (float)strtod(val, NULL);
                break;
            case T_RGB: {
                float *out = fp(fd, &g_gfx);
                char *p = val;
                int k;
                if (*p == '[') p++;
                for (k = 0; k < 3; k++) {
                    char *end;
                    out[k] = (float)strtod(p, &end);
                    if (end == p) break;
                    p = end;
                    while (*p == ',' || *p == ' ') p++;
                }
                break;
            }
            }
            clamp_field(fd, &g_gfx);
            break;
        }
    }
    fclose(f);
    gfx_settings_touch();
    return 1;
}
