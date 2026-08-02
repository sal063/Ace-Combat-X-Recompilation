/* runtime/hle/display.c  <-  include/displaysvc.h
 *
 * sceDisplay. sceDisplayWaitVblankStart drives the whole frame loop: it is
 * where the scheduler advances time and where the GPU presents.
 */

#include "hle.h"
#include "sce_errors.h"
#include "threadman.h"
#include "../gpu/framedump.h"
#include "../gpu/ge.h"
#include "../host/present.h"
#include "../host/settings.h"

#include <stdio.h>

/* GE list execution time, accumulated in ge_render.c / ge.c. */
extern unsigned long g_ge_us_acc;
/* SR_GEPROF=1 only; see runtime/gpu/ge_render.c. Ticks, converted below. */
extern unsigned long long g_prof_xform_tk, g_prof_gpu_tk;
extern unsigned long g_prof_on;
extern unsigned long long g_prof_wait_tk;
extern unsigned long g_prof_wait_n;
u64 ge_prof_now_tk(void);

/* PSP video timing: 59.94 Hz progressive, 480x272 visible, 286 total lines
 * per frame. */
#define PSP_REFRESH_MILLIHZ 59940u
#define PSP_FRAME_US        (1000000000u / PSP_REFRESH_MILLIHZ)  /* 16683 us */
#define PSP_LINES_PER_FRAME 286u

static int g_mode, g_width = 480, g_height = 272;
static u32 g_framebuf, g_bufwidth, g_pixfmt, g_sync;
static u32 g_vcount;
static u64 g_accumulated_hcount;
/* The game's own swap rate, which is NOT the vblank rate: the engine waits two
 * vblanks per frame, so it swaps at 30. The overlay reads this to show the
 * rate the game is actually producing. */
static unsigned g_game_frames;

u32 display_vcount(void) { return g_vcount; }
unsigned display_game_frames(void) { return g_game_frames; }

/* --- frame pacing --------------------------------------------------------
 * Hold each emulated vblank to its 59.94 Hz wall-clock duration, but only
 * when a window is open: headless runs go as fast as the host allows.
 * PSPRECO_UNTHROTTLED=1 unlocks the windowed build too (turbo). */
#if defined(_WIN32)
#  include <windows.h>
static u64 pace_now_us(void)
{
    /* The frequency is fixed for the life of the process; querying it per call
     * is a needless round trip on a path that runs every frame. */
    static double inv_freq;
    LARGE_INTEGER t;
    if (inv_freq == 0.0) {
        LARGE_INTEGER f;
        QueryPerformanceFrequency(&f);
        inv_freq = 1000000.0 / (double)f.QuadPart;
    }
    QueryPerformanceCounter(&t);
    return (u64)((double)t.QuadPart * inv_freq);
}

/* Windows' default timer resolution is 15.6 ms, so an unqualified Sleep(11)
 * routinely returns after 15.6. At a 16.68 ms frame budget that alone caps the
 * frame rate somewhere in the forties no matter how fast the renderer is --
 * which is exactly the "stable 45 at every graphics setting, on every machine"
 * the playtesters reported. timeBeginPeriod(1) asks for 1 ms granularity;
 * winmm is already linked for the audio backend.
 *
 * The margin is still spun rather than slept, because even at 1 ms a sleep may
 * overshoot, and overshooting the vblank is what costs a frame. */
static void pace_sleep_us(u64 us)
{
    static int period_set;
    if (!period_set) {
        period_set = 1;
        if (timeBeginPeriod(1) != TIMERR_NOERROR)
            period_set = -1;            /* denied: the spin below still works */
    }
    if (us > 2000) Sleep((DWORD)((us - 1000) / 1000));  /* coarse, then spin */
}
#else
#  include <time.h>
static u64 pace_now_us(void)
{
    struct timespec ts;
    clock_gettime(CLOCK_MONOTONIC, &ts);
    return (u64)ts.tv_sec * 1000000u + (u64)(ts.tv_nsec / 1000);
}
static void pace_sleep_us(u64 us)
{
    struct timespec ts;
    if (us <= 2000) return;
    ts.tv_sec = (time_t)((us - 1000) / 1000000u);
    ts.tv_nsec = (long)(((us - 1000) % 1000000u) * 1000u);
    nanosleep(&ts, NULL);
}
#endif

static void pace_frame(void)
{
    static int checked, env_off;
    static u64 next_us;
    u64 now, frame_us;

    if (!checked) {
        const char *e = getenv("PSPRECO_UNTHROTTLED");
        checked = 1;
        env_off = (e && e[0] == '1');
    }
    if (!present_is_active() || env_off || !g_gfx.throttle) return;

    /* Speed scales the frame budget: 200% halves it, 50% doubles it. */
    frame_us = (u64)PSP_FRAME_US * 100u
             / (u32)(g_gfx.speed_percent > 0 ? g_gfx.speed_percent : 100);
    if (!frame_us) frame_us = 1;

    now = pace_now_us();
    if (!next_us || now > next_us + 4u * frame_us)
        next_us = now;                  /* first frame, or fell far behind */
    if (next_us > now) {
        pace_sleep_us(next_us - now);
        while (pace_now_us() < next_us) { /* spin the last millisecond */ }
    }
    next_us += frame_us;
}

void hle_sceDisplaySetMode(CpuCtx *c, u8 *ram)
{
    (void)ram;
    g_mode = (int)HLE_A0;
    g_width = (int)HLE_A1;
    g_height = (int)HLE_A2;
    hle_log("[hle] sceDisplaySetMode(mode=%d, %dx%d)", g_mode, g_width, g_height);
    HLE_RET(0);
}

void hle_sceDisplaySetFrameBuf(CpuCtx *c, u8 *ram)
{
    (void)ram;
    g_framebuf = HLE_A0;
    g_bufwidth = HLE_A1;
    g_pixfmt   = HLE_A2;
    g_sync     = HLE_A3;
    g_game_frames++;
    hle_log("[hle] sceDisplaySetFrameBuf(addr=%08x, bufw=%u, fmt=%u, sync=%u)",
            g_framebuf, g_bufwidth, g_pixfmt, g_sync);
    HLE_RET(0);
}

void hle_sceDisplayGetFrameBuf(CpuCtx *c, u8 *ram)
{
    if (HLE_A0) mem_w32(ram, HLE_A0, g_framebuf);
    if (HLE_A1) mem_w32(ram, HLE_A1, g_bufwidth);
    if (HLE_A2) mem_w32(ram, HLE_A2, g_pixfmt);
    HLE_RET(0);
}

/* Called by the scheduler when the emulated clock crosses a frame boundary:
 * vcount advances and every enabled vblank sub-interrupt handler runs. */
void display_vblank(CpuCtx *c, u8 *ram)
{
    g_vcount++;
    g_accumulated_hcount += PSP_LINES_PER_FRAME;
    ge_set_frame(g_vcount);             /* drives the renderer's statistics */
    pace_frame();                       /* hold this vblank to 59.94 Hz     */
    /* Present from the GPU backend's image when it owns the buffer, else
     * from guest VRAM (early boot, CPU-written frames). The frame dump
     * always reads guest VRAM. */
    if (framedump_enabled())
        framedump_frame(ram, g_framebuf, g_bufwidth, (int)g_pixfmt,
                        g_width, g_height);
    {
        /* Frame skip drops the presentation, not the GE work: the emulated
         * clock and the game's own pacing are unaffected. Frame 0 of each
         * group is the one that reaches the window. */
        static unsigned skip_phase;
        int present_this = 1;
        if (g_gfx.frameskip > 0) {
            present_this = (skip_phase == 0);
            skip_phase = (skip_phase + 1) % (unsigned)(g_gfx.frameskip + 1);
        } else {
            skip_phase = 0;
        }
        if (present_this) {
            int shown = -1;
            if (ge_gpu_present_fn)
                shown = ge_gpu_present_fn(g_framebuf, (int)g_pixfmt, g_bufwidth);
            if (shown == 0)
                threadman_request_exit();   /* the user closed the window */
            else if (shown < 0
                     && !present_frame(ram, g_framebuf, g_bufwidth, (int)g_pixfmt,
                                       g_width, g_height))
                threadman_request_exit();
        }
    }
    /* Once every 60 emulated vblanks, against the WALL CLOCK.
     *
     * The previous version of this line compared game frames to emulated
     * vblanks and so could only ever print 60/60 -- both sides come from the
     * same counter. It told three playtesters nothing while they were all
     * sitting at 45. What matters is how long an emulated second actually
     * takes: `real` below is the frame rate a player sees, and `budget` is
     * where the time went relative to the 1000 ms it should have cost. */
    {
        static u32 last_v;
        static unsigned last_g;
        static u64 last_wall;
        if (g_vcount - last_v >= 60u) {
            u64 now = pace_now_us();
            if (last_wall) {
                u64 dt = now - last_wall;
                unsigned games = g_game_frames - last_g;
                double secs = (double)dt / 1000000.0;
                /* The budget split: `ge` is our renderer (GE list execution,
                 * vertex transform, batching); the remainder is recompiled
                 * guest code plus HLE. Which one dominates decides where any
                 * optimisation should go, and guessing it wrong is expensive. */
                unsigned long ge_us = g_ge_us_acc;
                char prof[96];
                g_ge_us_acc = 0;
                prof[0] = 0;
                if (g_prof_on) {
                    /* Ticks -> ms via the tick total over this same interval,
                     * so the CPU's clock rate never has to be known. */
                    static u64 last_tk;
                    u64 tk_now = ge_prof_now_tk();
                    u64 span = last_tk ? tk_now - last_tk : 0;
                    double ms = (double)(dt / 1000u);
                    if (span)
                        snprintf(prof, sizeof prof,
                                 " [xform=%.0fms gpuhook=%.0fms "
                                 "gpuwait=%.0fms/%lu]",
                                 (double)g_prof_xform_tk / (double)span * ms,
                                 (double)g_prof_gpu_tk / (double)span * ms,
                                 (double)g_prof_wait_tk / (double)span * ms,
                                 g_prof_wait_n);
                    last_tk = tk_now;
                    g_prof_xform_tk = g_prof_gpu_tk = g_prof_wait_tk = 0;
                    g_prof_wait_n = 0;
                }
                hle_log("[fps] real=%.1f game=%u vblank=%u wall=%llums "
                        "(budget %.0f%%) ge=%lums (%.0f%% of wall) guest=%lums%s",
                        secs > 0.0 ? (double)games / secs : 0.0,
                        games, g_vcount - last_v,
                        (unsigned long long)(dt / 1000u),
                        secs > 0.0 ? 100.0 * secs : 0.0,
                        ge_us / 1000u,
                        dt ? 100.0 * (double)ge_us / (double)dt : 0.0,
                        (unsigned long)((dt > ge_us ? dt - ge_us : 0) / 1000u),
                        prof);
            }
            last_wall = now;
            last_v = g_vcount;
            last_g = g_game_frames;
        }
    }
    /* GE finish/signal interrupts are delivered on this interrupt context. */
    ge_deliver_interrupts(c, ram);
    intrman_dispatch(c, ram, (u32)intrman_vblank_intr());
}

u32 display_frame_us(void) { return PSP_FRAME_US; }

/* BLOCKS until the start of the next vblank. It must not merely yield: under
 * strict priority a yielding thread is re-picked at once and nothing below it
 * ever runs. */
void hle_sceDisplayWaitVblankStart(CpuCtx *c, u8 *ram)
{
    (void)ram;
    HLE_RET(0);
    threadman_wait_vblank();
}

void hle_sceDisplayIsVblank(CpuCtx *c, u8 *ram)
{
    (void)ram;
    HLE_RET(0);
}

/* The movie player paces frames by polling this in a tight loop (topping the
 * mpeg ring up between polls), and the loop only ends when the vcount ticks.
 * The poll therefore has to cost emulated time: it is the highest-priority
 * runnable thread, so a free poll freezes the clock, the vblank never fires
 * and the loop never ends. Hardware charges a syscall round trip here; block
 * for a slice of one, which also hands the scheduler back so it can pump the
 * vblank. */
#define VCOUNT_POLL_US 100u

void hle_sceDisplayGetVcount(CpuCtx *c, u8 *ram)
{
    (void)ram;
    HLE_RET(g_vcount);
    threadman_block_us(VCOUNT_POLL_US);
}

void hle_sceDisplayGetCurrentHcount(CpuCtx *c, u8 *ram)
{
    u64 into_frame = threadman_now_us() % PSP_FRAME_US;
    (void)ram;
    HLE_RET((u32)(into_frame * PSP_LINES_PER_FRAME / PSP_FRAME_US));
}

void hle_sceDisplayGetAccumulatedHcount(CpuCtx *c, u8 *ram)
{
    (void)ram;
    HLE_RET((u32)g_accumulated_hcount);
}

/* A float return comes back in $f0, not $v0. */
void hle_sceDisplayGetFramePerSec(CpuCtx *c, u8 *ram)
{
    (void)ram;
    c->f[0] = 59.940059f;
    HLE_RET(0);
}
