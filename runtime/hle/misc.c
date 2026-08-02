/* runtime/hle/misc.c -- the small modules: impose, dmac, wlan, suspend,
 * stdio, utils, Kernel_Library, LoadExecForUser, scePower, sceRtc,
 * sceUmdUser (mediaman.h), sceCtrl (ctrlsvc.h).
 */

#include "hle.h"
#include "sce_errors.h"
#include "threadman.h"
#include "../gpu/ge.h"
#include "../host/present.h"

#include <stdlib.h>
#include <string.h>
#include <time.h>

/* --- Kernel_Library -- critical sections -------------------------------- */
/* A counter that blocks the scheduler; returns the previous state, which the
 * caller passes back to Resume. */
void hle_sceKernelCpuSuspendIntr(CpuCtx *c, u8 *ram)
{
    (void)ram;
    threadman_suspend_intr();
    HLE_RET(1);
}

void hle_sceKernelCpuResumeIntr(CpuCtx *c, u8 *ram)
{
    (void)ram;
    threadman_resume_intr();
    HLE_RET(0);
}

/* --- UtilsForUser -------------------------------------------------------- */
/* Dcache writeback: no-op -- host caches are coherent and this title has no
 * self-modifying code. */
void hle_sceKernelDcacheWritebackAll(CpuCtx *c, u8 *ram)
{
    (void)ram; HLE_RET(0);
}
void hle_sceKernelDcacheWritebackRange(CpuCtx *c, u8 *ram)
{
    (void)ram; HLE_RET(0);
}
void hle_sceKernelSetGPO(CpuCtx *c, u8 *ram) { (void)ram; HLE_RET(0); }

/* libc bridges use the emulated clock, never host wall time, so runs stay
 * reproducible. */
void hle_sceKernelLibcClock(CpuCtx *c, u8 *ram)
{
    (void)ram;
    HLE_RET((u32)threadman_now_us());
}

void hle_sceKernelLibcTime(CpuCtx *c, u8 *ram)
{
    /* Fixed epoch (2006-10-26, the title's NA release date) keeps traces
     * deterministic. */
    u32 t = 1161820800u + (u32)(threadman_now_us() / 1000000u);
    if (HLE_A0) mem_w32(ram, HLE_A0, t);
    HLE_RET(t);
}

void hle_sceKernelLibcGettimeofday(CpuCtx *c, u8 *ram)
{
    u64 us = threadman_now_us();
    if (HLE_A0) {
        mem_w32(ram, HLE_A0 + 0, 1161820800u + (u32)(us / 1000000u));
        mem_w32(ram, HLE_A0 + 4, (u32)(us % 1000000u));
    }
    HLE_RET(0);
}

/* --- sceSuspendForUser --------------------------------------------------- */
void hle_sceKernelPowerLock(CpuCtx *c, u8 *ram)   { (void)ram; HLE_RET(0); }
void hle_sceKernelPowerUnlock(CpuCtx *c, u8 *ram) { (void)ram; HLE_RET(0); }
void hle_sceKernelPowerTick(CpuCtx *c, u8 *ram)   { (void)ram; HLE_RET(0); }

/* The 4 MB volatile block at 0x08400000, as on hardware. */
void hle_sceKernelVolatileMemLock(CpuCtx *c, u8 *ram)
{
    if (HLE_A1) mem_w32(ram, HLE_A1, PSP_VOLATILE_BASE);
    if (HLE_A2) mem_w32(ram, HLE_A2, PSP_VOLATILE_SIZE);
    HLE_RET(0);
}
void hle_sceKernelVolatileMemUnlock(CpuCtx *c, u8 *ram)
{
    (void)ram; HLE_RET(0);
}

/* --- scePower / sceImpose / sceWlanDrv / sceDmac / LoadExec -------------- */
/* Reported power state: on external power, battery present, full. */
#define SCE_POWER_CALLBACKARG_BATTERYEXIST 0x00000080u
#define SCE_POWER_CALLBACKARG_POWERONLINE  0x00001000u
#define PSPRECO_BATTERY_PERCENT            100u   /* fits BATTERY_CAP's 0..100 */
#define PSPRECO_POWER_STATE (SCE_POWER_CALLBACKARG_POWERONLINE      \
                             | SCE_POWER_CALLBACKARG_BATTERYEXIST   \
                             | PSPRECO_BATTERY_PERCENT)

/* Registration queues a notification of the current power state for the new
 * callback, delivered at the next callback point -- acepsp's boot depends on
 * receiving it. */
void hle_scePowerRegisterCallback(CpuCtx *c, u8 *ram)
{
    int cbid = (int)HLE_A1;
    (void)ram;
    hle_log("[hle] scePowerRegisterCallback(slot=%d, cbid=%d)",
            (int)HLE_A0, cbid);
    threadman_notify_callback(cbid, 1u, PSPRECO_POWER_STATE);
    HLE_RET(0);
}

void hle_sceImposeSetLanguageMode(CpuCtx *c, u8 *ram)
{
    (void)ram;
    hle_log("[hle] sceImposeSetLanguageMode(lang=%d, button_assign=%d)",
            (int)HLE_A0, (int)HLE_A1);
    HLE_RET(0);
}

/* Stable synthetic MAC: savedata stamps saves with it, so it must never
 * change across runs. */
static const u8 k_ether[6] = { 0x02, 0x50, 0x53, 0x50, 0x00, 0x01 };

void hle_sceWlanGetEtherAddr(CpuCtx *c, u8 *ram)
{
    int i;
    for (i = 0; i < 6; i++) mem_w8(ram, HLE_A0 + i, k_ether[i]);
    HLE_RET(0);
}

/* The movie player displays a decoded frame by DMA-ing it straight into the
 * framebuffer, so the copy has to invalidate any GPU-resident target over the
 * destination -- otherwise the backend keeps presenting its own image and the
 * movie is invisible (black screen, audio fine). */
void hle_sceDmacMemcpy(CpuCtx *c, u8 *ram)
{
    u32 dst = HLE_A0, src = HLE_A1, n = HLE_A2, i;
    static unsigned logged;
    for (i = 0; i < n; i++) mem_w8(ram, dst + i, (u8)mem_r8(ram, src + i));
    ge_gpu_vram_dirty(dst, n);
    if (logged < 4) {
        logged++;
        hle_log("[hle] sceDmacMemcpy(dst=%08x, src=%08x, %u bytes)", dst, src, n);
    }
    HLE_RET(0);
}

void hle_sceKernelExitGame(CpuCtx *c, u8 *ram)
{
    (void)ram;
    hle_log("[hle] sceKernelExitGame()");
    threadman_request_exit();
    HLE_RET(0);
}

void hle_sceKernelRegisterExitCallback(CpuCtx *c, u8 *ram)
{
    (void)ram;
    hle_log("[hle] sceKernelRegisterExitCallback(cbid=%d)", (int)HLE_A0);
    HLE_RET(0);
}

/* --- sceRtc  <- include/rtcsvc.h ----------------------------------------- */
/* PSP ticks are microseconds. */
void hle_sceRtcGetTickResolution(CpuCtx *c, u8 *ram)
{
    (void)ram;
    HLE_RET(1000000u);
}

/* SceRtcTick is a 64-bit microsecond count since 0001-01-01; a wrong epoch
 * corrupts save timestamps. */
#define RTC_EPOCH_TO_UNIX_US 62135596800000000ull

void hle_sceRtcGetCurrentTick(CpuCtx *c, u8 *ram)
{
    u64 tick = RTC_EPOCH_TO_UNIX_US + 1161820800000000ull + threadman_now_us();
    if (HLE_A0) {
        mem_w32(ram, HLE_A0 + 0, (u32)(tick & 0xFFFFFFFFu));
        mem_w32(ram, HLE_A0 + 4, (u32)(tick >> 32));
    }
    HLE_RET(0);
}

/* ScePspDateTime: u16 year, month, day, hour, minute, second; u32 microsecond */
void hle_sceRtcGetCurrentClockLocalTime(CpuCtx *c, u8 *ram)
{
    u32 p = HLE_A0;
    if (p) {
        mem_w16(ram, p + 0, 2006);
        mem_w16(ram, p + 2, 10);
        mem_w16(ram, p + 4, 26);
        mem_w16(ram, p + 6, 12);
        mem_w16(ram, p + 8, 0);
        mem_w16(ram, p + 10, (u16)((threadman_now_us() / 1000000u) % 60u));
        mem_w32(ram, p + 12, (u32)(threadman_now_us() % 1000000u));
    }
    HLE_RET(0);
}

/* Broken-down date -> 64-bit microsecond tick. This title only feeds it dates
 * from this module, so a proleptic-Gregorian day count is enough. */
void hle_sceRtcGetTick(CpuCtx *c, u8 *ram)
{
    u32 dt = HLE_A0, out = HLE_A1;
    if (dt && out) {
        u64 y = mem_r16(ram, dt + 0), mo = mem_r16(ram, dt + 2);
        u64 d = mem_r16(ram, dt + 4), h = mem_r16(ram, dt + 6);
        u64 mi = mem_r16(ram, dt + 8), s = mem_r16(ram, dt + 10);
        u64 us = mem_r32(ram, dt + 12);
        static const unsigned mdays[13] =
            { 0, 0, 31, 59, 90, 120, 151, 181, 212, 243, 273, 304, 334 };
        u64 yy = y ? y - 1 : 0;
        u64 days = yy * 365u + yy / 4u - yy / 100u + yy / 400u;
        if (mo >= 1 && mo <= 12) {
            days += mdays[mo];
            int leap = (y % 4 == 0 && y % 100 != 0) || (y % 400 == 0);
            if (mo > 2 && leap) days += 1;
        }
        if (d) days += d - 1;
        {
            u64 tick = ((days * 24u + h) * 60u + mi) * 60u + s;
            tick = tick * 1000000ull + us;
            mem_w32(ram, out + 0, (u32)(tick & 0xFFFFFFFFu));
            mem_w32(ram, out + 4, (u32)(tick >> 32));
        }
    }
    HLE_RET(0);
}

/* sceRtcGetWin32FileTime: 100 ns units since 1601-01-01. */
void hle_sceRtcGetWin32FileTime(CpuCtx *c, u8 *ram)
{
    u64 ft = (11644473600ull + 1161820800ull) * 10000000ull
             + threadman_now_us() * 10ull;
    if (HLE_A1) {
        mem_w32(ram, HLE_A1 + 0, (u32)(ft & 0xFFFFFFFFu));
        mem_w32(ram, HLE_A1 + 4, (u32)(ft >> 32));
    }
    HLE_RET(0);
}

/* --- sceUmdUser  <- include/mediaman.h ----------------------------------- */
#define SCE_UMD_MEDIA_IN  0x02u
#define SCE_UMD_READY     0x10u
#define SCE_UMD_READABLE  0x20u
#define UMD_STAT_ALL_GOOD (SCE_UMD_MEDIA_IN | SCE_UMD_READY | SCE_UMD_READABLE)

/* 1 == disc present */
void hle_sceUmdCheckMedium(CpuCtx *c, u8 *ram) { (void)ram; HLE_RET(1); }

void hle_sceUmdActivate(CpuCtx *c, u8 *ram)
{
    hle_log("[hle] sceUmdActivate(mode=%d, alias=\"%s\")",
            (int)HLE_A0, hle_cstr(ram, HLE_A1));
    HLE_RET(0);
}

void hle_sceUmdGetDriveStat(CpuCtx *c, u8 *ram)
{
    (void)ram; HLE_RET(UMD_STAT_ALL_GOOD);
}

/* The drive is always ready, so waits return immediately. */
void hle_sceUmdWaitDriveStat(CpuCtx *c, u8 *ram) { (void)ram; HLE_RET(0); }
void hle_sceUmdCancelWaitDriveStat(CpuCtx *c, u8 *ram) { (void)ram; HLE_RET(0); }

void hle_sceUmdRegisterUMDCallBack(CpuCtx *c, u8 *ram)
{
    (void)ram;
    hle_log("[hle] sceUmdRegisterUMDCallBack(cbid=%d)", (int)HLE_A0);
    HLE_RET(0);
}

/* --- sceCtrl  <- include/ctrlsvc.h --------------------------------------- */
static u32 g_ctrl_mode;

/* 0 = DIGITALONLY, 1 = DIGITALANALOG */
void hle_sceCtrlSetSamplingMode(CpuCtx *c, u8 *ram)
{
    (void)ram;
    g_ctrl_mode = HLE_A0;
    hle_log("[hle] sceCtrlSetSamplingMode(%u /* %s */)", g_ctrl_mode,
            g_ctrl_mode ? "DIGITALANALOG" : "DIGITALONLY");
    HLE_RET(0);
}

/* Scripted input, so a headless run can walk past "press X" prompts:
 *   PSPRECO_AUTOPRESS=cross,start        pulse these
 *   PSPRECO_AUTOPRESS_EVERY=60           once per this many frames (default)
 *   PSPRECO_AUTOPRESS_HOLD=4             frames held per pulse (default)
 * The pulse is held then released, because a game watching for a button EDGE
 * sees nothing in a mask that is always set. */
static u32 autopress_mask(void)
{
    static const struct { const char *name; u32 bit; } kNames[] = {
        { "select",   1u << 0  }, { "start",    1u << 3  },
        { "up",       1u << 4  }, { "right",    1u << 5  },
        { "down",     1u << 6  }, { "left",     1u << 7  },
        { "l",        1u << 8  }, { "r",        1u << 9  },
        { "triangle", 1u << 12 }, { "circle",   1u << 13 },
        { "cross",    1u << 14 }, { "square",   1u << 15 },
    };
    static int checked;
    static u32 mask;
    static unsigned every = 60, hold = 4;

    if (!checked) {
        const char *e = getenv("PSPRECO_AUTOPRESS");
        const char *p = getenv("PSPRECO_AUTOPRESS_EVERY");
        const char *h = getenv("PSPRECO_AUTOPRESS_HOLD");
        checked = 1;
        if (p) { unsigned long v = strtoul(p, NULL, 10); if (v) every = (unsigned)v; }
        if (h) { unsigned long v = strtoul(h, NULL, 10); if (v) hold = (unsigned)v; }
        while (e && *e) {
            size_t n = strcspn(e, ",");
            size_t i;
            for (i = 0; i < sizeof kNames / sizeof kNames[0]; i++)
                if (strlen(kNames[i].name) == n
                    && strncmp(e, kNames[i].name, n) == 0)
                    mask |= kNames[i].bit;
            e += n;
            if (*e == ',') e++;
        }
        if (mask)
            hle_log("[hle] PSPRECO_AUTOPRESS: pulsing %08x for %u frames "
                    "every %u", mask, hold, every);
    }
    if (!mask) return 0u;
    if (hold >= every) return mask;
    return (threadman_vblank_count() % every) < hold ? mask : 0u;
}

/* SceCtrlData: u32 TimeStamp, u32 Buttons, u8 Lx, u8 Ly, u8 Rsrv[6] -- 16
 * bytes per sample. This BLOCKS until the next sampling tick (it is a
 * frame-pacing primitive, not just input): advance to the next vblank and
 * yield. */
/* Hardware samples the pad once per vblank into a 64-entry ring, and this call
 * hands back only the samples that have accumulated since the last read,
 * blocking when there are none yet.
 *
 * That count is not cosmetic: the engine drives its button state machines once
 * per SAMPLE (guest sub_1D46A0 edge latch, sub_1D4714 auto-repeat -- 24 ticks
 * of delay then a repeat every 8). Returning `n` copies of the current state,
 * as this used to, made every one of those timers run at `n` ticks per frame
 * and therefore scale with the frame rate. It was already several times too
 * fast at 30, and doubled again the moment the game reached 60. Counting real
 * vblanks makes menu timing identical at either rate, which is what the
 * hardware does. */
#define CTRL_RING_SAMPLES 64

void hle_sceCtrlReadBufferPositive(CpuCtx *c, u8 *ram)
{
    static u64 consumed_vblank;
    u32 p = HLE_A0;
    int n = (int)HLE_A1, i, count;
    u64 now, avail;
    u32 buttons;
    u8 lx = 128, ly = 128;

    if (n <= 0) { HLE_RET(0); return; }

    now = threadman_vblank_count();
    if (now <= consumed_vblank) {           /* no new sample yet: wait for one */
        threadman_wait_vblank();
        now = threadman_vblank_count();
    }
    avail = now - consumed_vblank;
    if (avail > CTRL_RING_SAMPLES) {        /* nobody read for a while */
        consumed_vblank = now - CTRL_RING_SAMPLES;
        avail = CTRL_RING_SAMPLES;
    }
    count = (n < (int)avail) ? n : (int)avail;

    /* One host poll for all of them: the window only has the state it has. The
     * samples still carry distinct timestamps, one frame apart, as on hardware. */
    buttons = present_buttons() | autopress_mask();
    present_analog(&lx, &ly);

    for (i = 0; i < count && p; i++) {
        u32 e = p + (u32)i * 16u;
        mem_w32(ram, e + 0,
                (u32)((consumed_vblank + (u64)i + 1u) * display_frame_us()));
        mem_w32(ram, e + 4, buttons);
        mem_w8(ram, e + 8, lx);           /* 128 = centre */
        mem_w8(ram, e + 9, ly);
    }
    consumed_vblank += (u64)count;        /* leave the rest for the next read */
    HLE_RET(count);
}

void hle_sceCtrlSetIdleCancelThreshold(CpuCtx *c, u8 *ram)
{
    (void)ram; HLE_RET(0);
}
void hle_sceCtrlGetIdleCancelThreshold(CpuCtx *c, u8 *ram)
{
    if (HLE_A0) mem_w32(ram, HLE_A0, 0u);
    if (HLE_A1) mem_w32(ram, HLE_A1, 0u);
    HLE_RET(0);
}
