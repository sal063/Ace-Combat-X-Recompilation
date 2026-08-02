/* qol_input.c -- a right stick, analog rudder, and R3 to change view.
 *
 * None of this is a rebind.  The engine already contains the code for all
 * three; it was simply never reachable on hardware that had one stick, no
 * trigger travel and no stick clicks.  What follows drives that existing code
 * with the inputs a modern pad actually has, so the behaviour, the ranges,
 * the smoothing and the per-view limits are the game's own.
 *
 * WHERE IT ATTACHES, AND WHY THERE
 * --------------------------------
 * recomp_lookup only sees INDIRECT calls.  A direct call in the recompiled C
 * is a direct C call and cannot be intercepted, so an override is only
 * possible at a function the engine reaches through a table.  Checked in IDA:
 *
 *   sub_62DA0  camera message handler   0 code xrefs, 2 data  -> hookable
 *   sub_79DD8  action 9  (yaw left)     0 code xrefs, 1 data  -> hookable
 *   sub_79EC0  action 10 (yaw right)    0 code xrefs, 1 data  -> hookable
 *
 *   sub_78C30  input mask builder       called directly from sub_7834C
 *   sub_62C50  per-view update          called directly from sub_62DA0
 *   sub_1D4008 pad sampler              called directly from sub_C24
 *
 * The first three are enough for all three features, which is why none of the
 * last three are reimplemented here.  Everything below wraps the original and
 * calls it -- there is no copied engine logic to drift out of sync.
 *
 * 1. CAMERA (sub_62DA0, message 1 = update)
 *
 * The engine has a free-look mode: when the camera's mode byte is 4 it reads
 * the stick, scales it by a per-view maximum angle, and smooths the result
 * into two deltas the view code consumes.  In normal flight the mode is not 4,
 * so that block instead zeroes both deltas -- the plumbing runs every frame
 * and is handed nothing.
 *
 * We let the original run untouched and then write the deltas ourselves from
 * the right stick, reusing its own angle limits and its own smoothing.
 *
 * CAUTION, and the reason the camera did not work on the first attempt: which
 * function CONSUMES cam+28/+32 is not yet established.  It is not sub_62C50 or
 * its view-0/1/2 tail sub_6272C (that one returns immediately while the mode
 * byte is 0, and never reads either field), and it is not sub_5EEE0, which
 * builds the view matrix from the position and target vectors at entity+8 and
 * entity+12.  The remaining candidate is sub_622E0, the rebuild that both
 * sub_623BC and sub_6272C call.  Until that is pinned down, writing the deltas
 * is necessary but may not be sufficient.
 *
 * 2. RUDDER (sub_79DD8 / sub_79EC0, actions 9 and 10)
 *
 * Yaw is a single float at flight+180, range [-1,+1].  The two handlers ramp
 * it digitally: 0.05 per frame toward the edge while held, 0.1 per frame back
 * to centre when released, so a full boot takes 20 frames.  With a trigger
 * deflected we write the float directly and the aircraft yaws by as much as
 * the trigger is pressed; with the triggers idle the original runs and the
 * bumpers and keyboard behave exactly as they always did.
 *
 * 3. VIEW (R3 -> sub_7A528, action 16)
 *
 * The engine already cycles view 0 -> 1 -> 2 -> 0, with the wide chase views
 * at 0 and 2 and the restricted cockpit at 1, and does the surrounding
 * bookkeeping (transition style, the two control-suppression flags) that a
 * bare view assignment would skip.  It is action 16 in the handler table and
 * needs the same (player, flight) pair the yaw handlers are given.
 *
 * So R3 is serviced from inside the yaw override.  That is not a hack for
 * want of a better site: sub_7834C runs a release pass over actions 8..16
 * every frame, calling each handler that did not fire with a zero flag, so
 * actions 9 and 10 are guaranteed to be dispatched once per frame whatever
 * the player is doing and whatever the control config maps where.  It is a
 * reliable per-frame hook that arrives holding precisely the two arguments
 * the view cycle wants.
 */
#include "pspreco.h"
#include "qol_input.h"
#include "../host/present.h"

#include <math.h>
#include <stdlib.h>
#include <string.h>

/* Guest addresses.  IDA + 0x08804000; see scratchpad/input-notes.md. */
#define G_CAMERA_MSG  0x08866DA0u   /* sub_62DA0  camera message handler   */
#define G_YAW_L       0x0887DDD8u   /* sub_79DD8  action 9,  yaw left      */
#define G_YAW_R       0x0887DEC0u   /* sub_79EC0  action 10, yaw right     */
#define G_VIEW_CYCLE  0x0887E528u   /* sub_7A528  action 16, cycle view    */
#define G_CFG         0x08A80AF4u   /* unk_27CAF4 config object            */

#define CFG_VIEW      322u          /* s8, current view 0..5               */

/* Camera state lives at entity+224 (sub_62DA0 computes exactly that). */
#define CAM_BASE      224u
#define CAM_FLAGS      20u          /* u16: bit0 rebuild.  DO NOT WRITE --
                                     * sub_7834C reads this byte and can zero
                                     * the rudder off the back of it. */
#define CAM_MODE       24u          /* u8:  4 == engine free look          */
#define CAM_PITCH      28u          /* f32: smoothed pitch delta           */
#define CAM_YAW        32u          /* f32: smoothed yaw delta             */


/* The engine's own limits, from the free-look block in sub_62DA0.  Radians of
 * travel at full deflection; the sign is the engine's. */
#define LOOK_YAW_WIDE   (-2.9670596f)   /* 170 deg, chase views     */
#define LOOK_YAW_TIGHT  (-1.3962634f)   /*  80 deg, cockpit         */
#define LOOK_PITCH      (-1.5533431f)   /*  89 deg                  */

QolCfg g_qol = { 1, 0, 100, 1, 1 };

/* The F4 menu and pspreco.toml own these settings; gfx_settings_touch() in
 * settings.c pushes them into g_qol, which is the one place every change goes
 * through.  This is the escape hatch on top of that -- one switch turns the
 * lot off without touching a config file, matching SR_GPU_SERIAL and friends.
 * Re-applied after every push, so it wins over the menu. */
void qol_input_init(void)
{
    static int off = -1;
    if (off < 0) off = getenv("SR_QOL_OFF") ? 1 : 0;
    if (!off) return;
    memset(&g_qol, 0, sizeof g_qol);
    g_qol.rstick_sens = 100;
}

/* ---- calling back into the guest ---------------------------------------- */

/* Same shape as libmpeg.c's call_guest3: run a guest function as a nested
 * call on the caller's own stack, which is what hardware would do.  Keeping
 * sp/fp/gp is load-bearing -- a scratch stack was tried once and was wrong. */
static u32 call_guest3(CpuCtx *c, u8 *ram, u32 fn, u32 a0, u32 a1, u32 a2)
{
    RecompFn f = recomp_lookup(fn);
    CpuCtx save;
    u32 ret;
    if (!f) return 0;
    memcpy(&save, c, sizeof save);
    c->r[R_A0] = a0;
    c->r[R_A1] = a1;
    c->r[R_A2] = a2;
    c->r[R_RA] = 0;
    f(c, ram);
    ret = c->r[R_V0];
    memcpy(c, &save, sizeof save);
    return ret;
}

/* ---- 3. R3 cycles the view ---------------------------------------------- */

/* Fired from whichever yaw handler runs first this frame.  Latching on the
 * edge is what keeps it to once per press: both handlers are dispatched every
 * frame, so the flag is set before the call and the second one finds it
 * already set.  R3 only changes between host polls, i.e. once a frame. */
static int s_r3_held;

static void qol_view_cycle(CpuCtx *c, u8 *ram, u32 player, u32 flight)
{
    int down;
    if (!g_qol.r3_view) return;
    down = (present_aux() & PRESENT_AUX_R3) != 0;
    if (!down) { s_r3_held = 0; return; }
    if (s_r3_held) return;
    s_r3_held = 1;
    /* a3 != 0 is the trigger; sub_7A528 returns immediately without it. */
    call_guest3(c, ram, G_VIEW_CYCLE, player, flight, 1);
}

/* ---- 2. analog rudder --------------------------------------------------- */


static void yaw_common(CpuCtx *c, u8 *ram, RecompFn orig)
{
    u32 player = c->r[R_A0];
    u32 flight = c->r[R_A1];

    /* We do NOT touch flight+180 any more.  It was identified as the rudder
     * from its shape alone -- a float in [-1,+1] that the two handlers ramp at
     * 0.05 per frame and recentre at 0.1 -- and that was wrong.  It is the
     * BRAKE/THRUST axis: negative brakes, positive is thrust, and the ramp is
     * an engine spooling up rather than a rudder deflecting.  Actions 9 and 10
     * are what the L and R buttons drive in this game.
     *
     * The tell is that none of the other handlers in off_24F9B4 write a float
     * at all -- 11..15 set command bits in flight+17 (weapon, fire, autopilot)
     * and 8 suppresses the flight controls after fifteen held frames.  A lone
     * analog axis in a table of bit-setters should have been read as the one
     * thing the aircraft has that is analog besides the stick: the throttle.
     *
     * So this override now only passes through, and exists for the R3 hook
     * below.  Where the rudder actually lives is not yet established. */
    (void)player;
    (void)flight;
    if (orig) orig(c, ram);

    /* R3 is serviced from here because sub_7834C dispatches actions 8..16
     * every frame in its release pass, whatever the player does and whatever
     * the control config maps where -- and the arguments arriving here are
     * exactly the (player, flight) pair the view cycle needs. */
    qol_view_cycle(c, ram, player, flight);
}

/* ---- 1. right stick moves the camera ------------------------------------ */

static float stick_axis(u8 raw)
{
    float v = ((float)raw - 128.0f) / 127.0f;
    if (v < -1.0f) v = -1.0f;
    if (v >  1.0f) v =  1.0f;
    return v;
}

/* Smoothing state, held here rather than in the guest fields.
 *
 * It has to be.  The handler we run after zeroes cam+28 and cam+32 on every
 * frame that free look is off, which is every frame of normal flight -- so
 * reading the previous value back out of guest memory always yields zero, and
 * a quarter-of-the-remaining-distance step from zero would leave the camera
 * permanently at a quarter deflection instead of easing to full.  Keeping the
 * accumulator on this side reproduces what the engine does with its own
 * persistent copy in free-look mode. */
static float s_look_yaw, s_look_pitch;
static int   s_look_view = -1;

static void look_reset(void)
{
    s_look_yaw = s_look_pitch = 0.0f;
    s_look_view = -1;
}

static void camera_after(u8 *ram, u32 entity)
{
    u32 cam = entity + CAM_BASE;
    int view = (int)(s8)(u8)mem_r8(ram, G_CFG + CFG_VIEW);
    u8 rx = 128, ry = 128;
    float ax, ay, yaw, pitch, sens;

    /* Views 3..5 are the scripted and replay cameras; they own the frame and
     * are not ours to nudge.  Mode 4 is the engine's own free look, already
     * driving these same fields from the left stick -- leave it alone. */
    if (view < 0 || view >= 3 || mem_r8(ram, cam + CAM_MODE) == 4u) {
        look_reset();
        return;
    }
    /* A view change is a cut, not a pan: start the new one centred rather
     * than sliding in from wherever the old one was pointing. */
    if (view != s_look_view) {
        s_look_yaw = s_look_pitch = 0.0f;
        s_look_view = view;
    }

    present_analog2(&rx, &ry);
    ax = stick_axis(rx);
    ay = stick_axis(ry);
    if (!g_qol.rstick_invert) ay = -ay;   /* engine divides by -127 */

    sens = (float)g_qol.rstick_sens / 100.0f;
    yaw   = ax * (view == 1 ? LOOK_YAW_TIGHT : LOOK_YAW_WIDE) * sens;
    pitch = ay * LOOK_PITCH * sens;
    /* The cockpit view never looks above the horizon.  Same guard as the
     * engine's, applied to the same sign of the same field. */
    if (view == 1 && pitch < 0.0f) pitch = 0.0f;

    /* The engine's smoothing: a quarter of the remaining distance per frame. */
    s_look_pitch += (pitch - s_look_pitch) / 4.0f;
    s_look_yaw   += (yaw   - s_look_yaw)   / 4.0f;

    /* Nothing being asked for and nothing left to settle: leave the frame
     * exactly as the engine wrote it.  A player who never touches the right
     * stick should not be able to tell this code is compiled in.  The
     * threshold is a thousandth of a degree, well under a pixel of pan. */
    if (ax == 0.0f && ay == 0.0f
        && fabsf(s_look_yaw) < 1.0e-4f && fabsf(s_look_pitch) < 1.0e-4f) {
        s_look_yaw = s_look_pitch = 0.0f;
        return;
    }

    mem_wf32(ram, cam + CAM_PITCH, s_look_pitch);
    mem_wf32(ram, cam + CAM_YAW,   s_look_yaw);

    /* Setting flag bit 2 here was wrong and actively harmful.  sub_7834C
     * inspects this same byte in its tail and, on one branch, zeroes the
     * rudder at flight+180 along with pitch, roll and flight+256 -- so
     * touching it to enable a look that was never gated on it took the
     * analog rudder out with it.  Left alone. */
}

/* ---- the override table ------------------------------------------------- */

static RecompFn s_orig_cam, s_orig_yaw_l, s_orig_yaw_r;

static void ov_camera(CpuCtx *c, u8 *ram)
{
    u32 entity = c->r[R_A0];
    u32 msg    = c->r[R_A1] & 0xFFu;
    if (s_orig_cam) s_orig_cam(c, ram);   /* may clobber a0/a1, hence above */
    if (msg != 1u || !entity) return;
    if (g_qol.rstick_cam) camera_after(ram, entity);
    else                  look_reset();   /* so switching it back on recentres */
}

static void ov_yaw_l(CpuCtx *c, u8 *ram) { yaw_common(c, ram, s_orig_yaw_l); }
static void ov_yaw_r(CpuCtx *c, u8 *ram) { yaw_common(c, ram, s_orig_yaw_r); }

RecompFn qol_override(u32 addr, RecompFn orig)
{
    RecompFn ov;
    switch (addr) {
    case G_CAMERA_MSG: s_orig_cam   = orig; ov = ov_camera; break;
    case G_YAW_L:      s_orig_yaw_l = orig; ov = ov_yaw_l;  break;
    case G_YAW_R:      s_orig_yaw_r = orig; ov = ov_yaw_r;  break;
    default:           return NULL;   /* the overwhelmingly common case */
    }
    qol_input_init();
    return ov;
}
