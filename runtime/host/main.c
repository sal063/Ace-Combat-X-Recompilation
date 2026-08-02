/* runtime/host/main.c -- host harness: load the relocated image, enter it. */

#include "pspreco.h"
#include "../../generated/symbols.h"
#include "../hle/hle.h"
#include "../hle/threadman.h"
#include "../hle/iso9660.h"
#include "../gpu/ge.h"
#include "present.h"
#include "settings.h"
#include "audio_out.h"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#if defined(_WIN32)
#  include <windows.h>
#else
#  include <pthread.h>
#  include <unistd.h>
#endif

extern u8 *g_ram;

#if defined(_WIN32)
/* Last-words crash handler: a hard fault otherwise kills the process with an
 * empty log. Reports where relative to the module and the guest arena. */
static LONG WINAPI crash_filter(EXCEPTION_POINTERS *ep)
{
    void *addr = ep->ExceptionRecord->ExceptionAddress;
    void *fault = (ep->ExceptionRecord->NumberParameters >= 2)
                ? (void *)ep->ExceptionRecord->ExceptionInformation[1] : NULL;
    HMODULE base = GetModuleHandleW(NULL);
    fflush(stdout);
    fprintf(stderr,
            "[pspreco] CRASH: code=%08lx at %p (module+%llx) access=%p",
            (unsigned long)ep->ExceptionRecord->ExceptionCode, addr,
            (unsigned long long)((char *)addr - (char *)base), fault);
    if (g_ram && fault)
        fprintf(stderr, " (ram+%llx)",
                (unsigned long long)((char *)fault - (char *)g_ram));
    fputc('\n', stderr);
    fflush(stderr);
    return EXCEPTION_CONTINUE_SEARCH;
}

/* First-chance vectored reporter. The UEF above never fires for two fatal
 * classes: stack overflow (the filter's own fprintf needs stack and
 * double-faults) and fail-fast/heap-corruption terminations (which skip
 * exception dispatch entirely -- those only show in the exit code). This
 * handler runs before any frame-based handling, uses a fixed small stack
 * footprint and no CRT so it can speak even on EXCEPTION_STACK_OVERFLOW.
 * First-chance means a line here may be for an exception something later
 * handles; capped at 8 lines. */
static void vh_put_hex(char **pp, ULONG_PTR v, int digits)
{
    static const char h[] = "0123456789abcdef";
    char *p = *pp;
    int i;
    for (i = digits - 1; i >= 0; i--)
        *p++ = h[(v >> (i * 4)) & 0xF];
    *pp = p;
}

static LONG CALLBACK vh_first_chance(EXCEPTION_POINTERS *ep)
{
    static LONG count;
    DWORD code = ep->ExceptionRecord->ExceptionCode;
    ULONG_PTR addr = (ULONG_PTR)ep->ExceptionRecord->ExceptionAddress;
    ULONG_PTR base;
    char buf[128], *p = buf;
    DWORD wr;

    switch (code) {
    case 0xC0000005u:   /* access violation */
    case 0xC00000FDu:   /* stack overflow */
    case 0xC000001Du:   /* illegal instruction */
    case 0xC000008Cu:   /* array bounds exceeded */
    case 0xC0000374u:   /* heap corruption */
    case 0xC0000409u:   /* fail-fast / GS cookie */
        break;
    default:
        return EXCEPTION_CONTINUE_SEARCH;
    }
    if (InterlockedIncrement(&count) > 8)
        return EXCEPTION_CONTINUE_SEARCH;
    base = (ULONG_PTR)GetModuleHandleW(NULL);
    memcpy(p, "[pspreco] EXC code=", 19); p += 19;
    vh_put_hex(&p, code, 8);
    memcpy(p, " mod+", 5); p += 5;
    vh_put_hex(&p, addr - base, 12);
    memcpy(p, " tid=", 5); p += 5;
    vh_put_hex(&p, GetCurrentThreadId(), 6);
    if (code == 0xC0000005u && ep->ExceptionRecord->NumberParameters >= 2) {
        memcpy(p, " acc=", 5); p += 5;
        vh_put_hex(&p, ep->ExceptionRecord->ExceptionInformation[1], 12);
    }
    *p++ = '\n';
    WriteFile(GetStdHandle(STD_ERROR_HANDLE), buf, (DWORD)(p - buf), &wr,
              NULL);
    return EXCEPTION_CONTINUE_SEARCH;
}
#endif

/* Watchdog: a guest busy-wait never yields under the cooperative scheduler,
 * so a host thread bounds the hang. PSPRECO_WATCHDOG_S raises/disables (0). */
#define WATCHDOG_DEFAULT_SECONDS 20

static unsigned g_watchdog_seconds = WATCHDOG_DEFAULT_SECONDS;

static void watchdog_expired(void)
{
    fflush(stdout);
    fprintf(stderr,
            "[pspreco] WATCHDOG: %u s of wall time with the guest still "
            "running and no exit.\n"
            "          The most likely cause is a guest busy-wait on state "
            "only an unimplemented\n"
            "          HLE surface or interrupt would change; a cooperative "
            "scheduler cannot break\n"
            "          out of one. Set PSPRECO_WATCHDOG_S to raise or "
            "disable (0) the limit.\n",
            g_watchdog_seconds);
    fflush(stderr);
    _Exit(3);
}

#if defined(_WIN32)
static DWORD WINAPI watchdog_main(LPVOID unused)
{
    (void)unused;
    Sleep(g_watchdog_seconds * 1000u);
    watchdog_expired();
    return 0;
}
#else
static void *watchdog_main(void *unused)
{
    (void)unused;
    sleep(g_watchdog_seconds);
    watchdog_expired();
    return NULL;
}
#endif

static void watchdog_start(void)
{
    const char *s = getenv("PSPRECO_WATCHDOG_S");
    if (s) g_watchdog_seconds = (unsigned)strtoul(s, NULL, 10);
    if (!g_watchdog_seconds) return;
#if defined(_WIN32)
    {
        HANDLE h = CreateThread(NULL, 0, watchdog_main, NULL, 0, NULL);
        if (h) CloseHandle(h);
    }
#else
    {
        pthread_t t;
        if (pthread_create(&t, NULL, watchdog_main, NULL) == 0)
            pthread_detach(t);
    }
#endif
}

/* 0x00269200 is the RELOCATED gp for acepsp (the unrelocated 0x0001B380
 * would point into .text). ACEPSP_LOAD_BASE must equal prxload.py's
 * PSP_USER_MODULE_BASE, which is what --emit-image relocates to. */
#define ACEPSP_LOAD_BASE 0x08804000u
#define ACEPSP_ENTRY    (ACEPSP_LOAD_BASE + 0x00000128u)
#define ACEPSP_GP       (ACEPSP_LOAD_BASE + 0x00269200u)
/* Sibling thread stacks grow down from here, below the primary stack the
 * kernel puts just under 0x0A000000. */
#define GUEST_STACK_TOP 0x09F00000u

/* The kernel's hand-off state, from the oracle trace's init dump. */
#define BOOT_SP         0x09FFFE90u
#define BOOT_RA         0x08000030u   /* back into the kernel's loader */
#define BOOT_K0         0x09FFFF00u   /* primary thread's control region */
#define BOOT_ARGP_ADDR  0x09FFFED0u
#define BOOT_ARGP       "disc0:/PSP_GAME/SYSDIR/EBOOT.BIN"
/* BOOT_FCR31 lives in pspreco.h -- threadman.c needs the same value. */

/* Guest RAM window; non-static so ge_gpu_vk.c can read guest VRAM. */
u8 *g_ram;

int main(int argc, char **argv)
{
    const char *image_path = (argc > 1) ? argv[1] : "generated/image.bin";
    const char *env_iso = getenv("PSPRECO_ISO");
    const char *iso_path = (argc > 2) ? argv[2]
        : (env_iso && *env_iso) ? env_iso : "game.iso";
    FILE *fp;
    long sz;
    CpuCtx ctx;
    RecompFn entry;

    /* Traps end in abort(), which does not flush stdio; unbuffer both. */
    setvbuf(stdout, NULL, _IONBF, 0);
    setvbuf(stderr, NULL, _IONBF, 0);

    /* Graphics settings before anything opens a window or a renderer. */
    gfx_settings_load();

    /* Stamp the build and the settings that change how the game behaves. A
     * tester's log otherwise cannot be told apart from any other build's, and
     * guessing which one they ran has already cost a round trip. */
    printf("[pspreco] build %s %s (60 FPS patch in), settings %s: "
           "res_scale=%d frameskip=%d speed=%d%%\n",
           __DATE__, __TIME__, gfx_settings_path(),
           g_gfx.res_scale, g_gfx.frameskip, g_gfx.speed_percent);

    g_ram = (u8 *)calloc(1, PSP_RAM_SIZE);
    if (!g_ram) {
        fprintf(stderr, "[pspreco] cannot allocate %u bytes of guest RAM\n",
                (unsigned)PSP_RAM_SIZE);
        return 1;
    }

    /* Self-tests need only guest RAM -- no image, no disc. */
    if (argc > 1 && strcmp(argv[1], "--selftest") == 0)
        return ge_raster_selftest(g_ram) ? 1 : 0;

    fp = fopen(image_path, "rb");
    if (!fp) {
        fprintf(stderr, "[pspreco] cannot open image %s\n"
                "          generate it with:\n"
                "          python tools/prxload/prxload.py EBOOT.elf "
                "--emit-image generated/image.bin\n", image_path);
        return 1;
    }
    fseek(fp, 0, SEEK_END);
    sz = ftell(fp);
    fseek(fp, 0, SEEK_SET);
    if (sz <= 0 || (u32)sz > PSP_RAM_SIZE) {
        fprintf(stderr, "[pspreco] implausible image size %ld\n", sz);
        fclose(fp);
        return 1;
    }
    if (fread(g_ram + ACEPSP_LOAD_BASE, 1, (size_t)sz, fp) != (size_t)sz) {
        fprintf(stderr, "[pspreco] short read on %s\n", image_path);
        fclose(fp);
        return 1;
    }
    fclose(fp);
    printf("[pspreco] loaded %ld bytes at guest %#010x\n",
           sz, (unsigned)ACEPSP_LOAD_BASE);
    printf("[pspreco] %d recompiled functions\n", PSPRECO_FUNC_COUNT);

    if (iso_mount(iso_path))
        printf("[pspreco] mounted UMD: %s\n", iso_path);
    else
        printf("[pspreco] WARNING: no UMD mounted (%s); disc0: reads will "
               "fail\n", iso_path);

#ifdef PSPRECO_TRACE
    {
        const char *tp = getenv("PSPRECO_TRACE_FILE");
        recomp_trace_open(tp ? tp : "generated/pspreco.trace");
        printf("[pspreco] tracing function entries to %s\n",
               tp ? tp : "generated/pspreco.trace");
    }
#endif
#if defined(_WIN32)
    SetUnhandledExceptionFilter(crash_filter);
    AddVectoredExceptionHandler(1, vh_first_chance);
#endif
    watchdog_start();
    present_init("pspreco -- Ace Combat X");
    cpu_set_host_fpu_mode();
    ge_raster_init();
    /* Windowed: rasterise on the Vulkan device; headless or PSPRECO_GPU=0
     * stays on the software rasteriser. */
    present_gpu_init();
    hle_init();
    /* User partition starts above the module; image.bin includes .bss. */
    sysmem_set_partition_begin(ACEPSP_LOAD_BASE + (u32)sz);
    /* module_start state from the PPSSPP oracle init dump
     * (build/oracle/acx/o.trace line 2):
     *   a0 = 33, a1 = 0x09FFFED0, sp = 0x09FFFE90, ra = 0x08000030,
     *   k0 = 0x09FFFF00, gp = 0x08A6D200, fcr31 = 0x00000E00.
     * a0/a1 = (argSize, argp): the NUL-terminated load path. */
    memset(&ctx, 0, sizeof ctx);
    ctx.r[R_GP] = ACEPSP_GP;
    ctx.r[R_SP] = BOOT_SP;
    ctx.r[R_RA] = BOOT_RA;
    ctx.r[R_K0] = BOOT_K0;
    ctx.r[R_A0] = (u32)sizeof BOOT_ARGP;      /* includes the NUL */
    ctx.r[R_A1] = BOOT_ARGP_ADDR;
    memcpy(g_ram + BOOT_ARGP_ADDR, BOOT_ARGP, sizeof BOOT_ARGP);
    ctx.fcr31 = BOOT_FCR31;
    ctx.pc = ACEPSP_ENTRY;

    threadman_init(g_ram, &ctx);

    entry = recomp_lookup(ACEPSP_ENTRY);
    if (!entry) {
        fprintf(stderr, "[pspreco] no recompiled function at entry %08x\n",
                ACEPSP_ENTRY);
        return 1;
    }
    printf("[pspreco] entering module at %08x\n", ACEPSP_ENTRY);
    entry(&ctx, g_ram);
    printf("[pspreco] module_start returned %d; entering scheduler\n",
           (int)ctx.r[R_V0]);

    /* module_start only starts the initial thread; the rest runs under the
     * fiber scheduler. */
    threadman_run();
    printf("[pspreco] scheduler idle after %llu us of emulated time\n",
           (unsigned long long)threadman_now_us());
    ge_raster_report();
    ge_report_command_usage();
    audio_out_shutdown();
    present_shutdown();
#ifdef PSPRECO_TRACE
    recomp_trace_close();
#endif
    return 0;
}
