/* runtime/hle/threadman.c -- ThreadManForUser: threads, semaphores, event
 * flags, callbacks, and the scheduler.
 *
 * Strict priority 1..127 (LOWER number = HIGHER priority), round-robin within
 * a priority, cooperative: a thread runs until it blocks, yields, or a
 * higher-priority thread becomes ready. Guest threads are FIBERS on one host
 * thread -- host threads would destroy determinism. Callbacks fire only
 * inside the ...CB wait variants. The clock is an emulated microsecond
 * counter, never host wall time, so traces are reproducible. */

#include "hle.h"
#include "sce_errors.h"
#include "threadman.h"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#if defined(_WIN32)
#  define WIN32_LEAN_AND_MEAN
#  include <windows.h>
#else
#  include <ucontext.h>
#endif

/* SceKernelThreadInfo.status values */
#define TH_RUNNING  0x00000001
#define TH_READY    0x00000002
#define TH_WAITING  0x00000004
#define TH_SUSPEND  0x00000008
#define TH_STOPPED  0x00000010
#define TH_KILLED   0x00000020

/* Kernel hand-off geometry, measured from hardware traces; no public header
 * describes it. */
#define THREAD_ENTRY_FRAME     0x40u        /* sp .. argument block */
#define KERNEL_CALLBACK_FRAME  0x80u        /* dispatcher's own frame */
#define KERNEL_CALLBACK_RETURN 0x08000018u  /* $ra it installs */

typedef enum {
    WAIT_NONE = 0, WAIT_SLEEP, WAIT_DELAY, WAIT_SEMA, WAIT_EVENTFLAG,
    WAIT_THREAD_END, WAIT_VBLANK
} WaitKind;

typedef struct Thread {
    int      used;
    int      uid;
    char     name[32];
    u32      entry;
    int      init_priority;
    int      priority;
    u32      attr;
    u32      stack_size;
    u32      stack_base;      /* guest address of the lowest stack byte */
    u32      tcb;             /* per-thread block the guest reaches via $k0 */
    int      status;
    CpuCtx   ctx;

    /* scheduling */
    WaitKind wait;
    int      wait_cb;         /* the ...CB variant was used */
    u64      wake_us;         /* for WAIT_DELAY */
    u64      wait_vblank;     /* for WAIT_VBLANK: the count when we blocked */
    int      wakeup_count;    /* sceKernelWakeupThread accumulates */
    int      sema_uid, sema_need;
    int      evf_uid, evf_mode;
    u32      evf_bits, evf_resultpat;
    int      join_uid;
    int      exit_status;
    u32      wait_timeout_ptr;
    int      timed_out;
    int      order;           /* round-robin tiebreak within a priority */
    int      zombie;          /* deleted itself; the scheduler reaps the slot */

    /* startup */
    u32      arg_size, arg_block;
    int      started;

#if defined(_WIN32)
    void    *fiber;
#else
    ucontext_t uctx;
    char      *host_stack;
#endif
} Thread;

#define MAX_THREADS 128
#define MAX_SEMA    256
#define MAX_EVF     256
#define MAX_CB      128

typedef struct { int used, uid, count, max_count; char name[32]; u32 attr; } Sema;
typedef struct { int used, uid; u32 pattern, attr; char name[32]; } EventFlag;
typedef struct { int used, uid; u32 func, common; int notify_count, notify_arg;
                 int owner; char name[32]; } Callback;

static Thread    g_threads[MAX_THREADS];
static Sema      g_semas[MAX_SEMA];
static EventFlag g_evfs[MAX_EVF];
static Callback  g_cbs[MAX_CB];

static int  g_next_uid = 0x100;
static int  g_order;
static int  g_current = -1;        /* index into g_threads */
static u64  g_clock_us;            /* emulated microseconds since boot */
static u8  *g_ram;
static int  g_intr_disable_depth;
static int  g_exit_requested;

/* vertical blank */
/* The scheduler owns vblank: it fires exactly once per frame boundary the
 * emulated clock crosses, regardless of which thread (or none) is running --
 * otherwise the frame rate depends on scheduling. */
static u64    g_vblank_count;
static u64    g_next_vblank_us;
/* PSPRECO_MAX_FRAMES: stop after this many emulated frames (0 = forever).
 * Frame limits are reproducible; wall-clock limits are not. */
static u64    g_max_frames;
static CpuCtx g_intr_ctx;          /* the context interrupt handlers run on */
static int    g_in_vblank;         /* re-entrancy guard */

#if defined(_WIN32)
static void *g_sched_fiber;
#else
static ucontext_t g_sched_uctx;
#endif

/* clock */
u64 threadman_now_us(void)          { return g_clock_us; }
void threadman_advance_us(u64 usec) { g_clock_us += usec; }
int  threadman_current_uid(void)
{
    return (g_current >= 0) ? g_threads[g_current].uid : 0;
}

/* Execution-context id for the differential trace. Non-thread contexts need
 * distinct negative ids: the comparator splits the stream by stack range. */
int threadman_trace_context(void)
{
    if (g_in_vblank) return -2;                 /* interrupt context */
    if (g_current >= 0) return g_threads[g_current].uid;
    return -1;                                  /* boot / module_start */
}
void threadman_suspend_intr(void)   { g_intr_disable_depth++; }
void threadman_resume_intr(void)
{
    if (g_intr_disable_depth > 0) g_intr_disable_depth--;
}
void threadman_request_exit(void)   { g_exit_requested = 1; }

/* lookup */
static Thread *thread_by_uid(int uid)
{
    int i;
    if (uid == 0 && g_current >= 0) return &g_threads[g_current];  /* TH_SELF */
    for (i = 0; i < MAX_THREADS; i++)
        if (g_threads[i].used && g_threads[i].uid == uid)
            return &g_threads[i];
    return NULL;
}
static Sema *sema_by_uid(int uid)
{
    int i;
    for (i = 0; i < MAX_SEMA; i++)
        if (g_semas[i].used && g_semas[i].uid == uid) return &g_semas[i];
    return NULL;
}
static EventFlag *evf_by_uid(int uid)
{
    int i;
    for (i = 0; i < MAX_EVF; i++)
        if (g_evfs[i].used && g_evfs[i].uid == uid) return &g_evfs[i];
    return NULL;
}

/* wait predicates */
/* SCE_KERNEL_EW_AND / OR / CLEAR_ALL / CLEAR_PAT */
#define EW_AND       0x00u
#define EW_OR        0x01u
#define EW_CLEAR_ALL 0x10u
#define EW_CLEAR_PAT 0x20u

static int evf_satisfied(u32 pattern, u32 bits, int mode)
{
    if ((mode & 1) == EW_OR) return (pattern & bits) != 0u;
    return (pattern & bits) == bits;
}

static int try_unblock(Thread *t)
{
    switch (t->wait) {
    case WAIT_NONE:
        return 1;
    case WAIT_DELAY:
        if (g_clock_us >= t->wake_us) { t->wait = WAIT_NONE; return 1; }
        return 0;
    case WAIT_SLEEP:
        if (t->wakeup_count > 0) {
            t->wakeup_count--;
            t->wait = WAIT_NONE;
            return 1;
        }
        return 0;
    case WAIT_SEMA: {
        Sema *s = sema_by_uid(t->sema_uid);
        if (!s) { t->wait = WAIT_NONE; t->ctx.r[R_V0] =
                      SCE_KERNEL_ERROR_UNKNOWN_UID; return 1; }
        if (s->count >= t->sema_need) {
            s->count -= t->sema_need;
            t->wait = WAIT_NONE;
            t->ctx.r[R_V0] = 0;
            return 1;
        }
        return 0;
    }
    case WAIT_EVENTFLAG: {
        EventFlag *e = evf_by_uid(t->evf_uid);
        if (!e) { t->wait = WAIT_NONE; t->ctx.r[R_V0] =
                      SCE_KERNEL_ERROR_UNKNOWN_UID; return 1; }
        if (evf_satisfied(e->pattern, t->evf_bits, t->evf_mode)) {
            if (t->evf_resultpat)
                mem_w32(g_ram, t->evf_resultpat, e->pattern);
            if ((u32)t->evf_mode & EW_CLEAR_ALL) e->pattern = 0u;
            else if ((u32)t->evf_mode & EW_CLEAR_PAT) e->pattern &= ~t->evf_bits;
            t->wait = WAIT_NONE;
            t->ctx.r[R_V0] = 0;
            return 1;
        }
        return 0;
    }
    case WAIT_VBLANK:
        if (g_vblank_count > t->wait_vblank) {
            t->wait = WAIT_NONE;
            t->ctx.r[R_V0] = 0;
            return 1;
        }
        return 0;
    case WAIT_THREAD_END: {
        Thread *o = thread_by_uid(t->join_uid);
        if (!o || o->status == TH_STOPPED || o->status == TH_KILLED) {
            t->wait = WAIT_NONE;
            t->ctx.r[R_V0] = 0;
            return 1;
        }
        return 0;
    }
    default:
        return 0;
    }
}

/* scheduler: strict priority, round-robin within a priority, lower wins */
static int pick_next(void)
{
    int i, best = -1;
    for (i = 0; i < MAX_THREADS; i++) {
        Thread *t = &g_threads[i];
        if (!t->used) continue;
        if (t->status == TH_STOPPED || t->status == TH_KILLED
            || t->status == TH_SUSPEND) continue;
        if (t->status == TH_WAITING && !try_unblock(t)) continue;
        if (t->wait == WAIT_NONE) t->status = TH_READY;
        if (t->status != TH_READY && t->status != TH_RUNNING) continue;
        if (best < 0
            || t->priority < g_threads[best].priority
            || (t->priority == g_threads[best].priority
                && t->order < g_threads[best].order))
            best = i;
    }
    return best;
}

/* Earliest timer deadline among blocked threads; when idle the clock jumps
 * to it (never to host wall time). */
static int earliest_deadline(u64 *out)
{
    int i, found = 0;
    u64 earliest = 0;
    for (i = 0; i < MAX_THREADS; i++) {
        Thread *t = &g_threads[i];
        if (!t->used || t->status != TH_WAITING || t->wait != WAIT_DELAY)
            continue;
        if (!found || t->wake_us < earliest) { earliest = t->wake_us; found = 1; }
    }
    if (found) *out = earliest;
    return found;
}

/* Guest polling loops that never block: a loop like the movie player's frame
 * pacer (poll sceDisplayGetVcount, top the mpeg ring up, repeat) only ever
 * calls HLE that costs no emulated time. Under strict priority the poller is
 * the thread that keeps running, so the clock stands still, the vblank that
 * would end the loop never fires, and the process livelocks with nothing
 * logged. Charge a slice after a long unbroken run of calls -- blocking hands
 * the scheduler back, which is what pumps vblank. Deliberately far above any
 * legitimate burst (GE list building) so normal play never trips it. */
#define HLE_SPIN_CALLS 2048u
#define HLE_SPIN_US    500u

static unsigned g_calls_since_switch;

void threadman_note_hle_call(void)
{
    static int reported;
    if (g_current < 0) return;                  /* interrupt context */
    if (++g_calls_since_switch < HLE_SPIN_CALLS) return;
    if (!reported) {
        reported = 1;
        hle_log("[hle] spin guard: \"%s\" made %u HLE calls without blocking; "
                "charging %u us so the clock can move",
                g_threads[g_current].name, HLE_SPIN_CALLS, HLE_SPIN_US);
    }
    threadman_block_us(HLE_SPIN_US);
}

static int any_waiting_on_vblank(void)
{
    int i;
    for (i = 0; i < MAX_THREADS; i++)
        if (g_threads[i].used && g_threads[i].status == TH_WAITING
            && g_threads[i].wait == WAIT_VBLANK)
            return 1;
    return 0;
}

/* Give the slot back: the host fiber, the guest stack, and the entry itself.
 *
 * Never call this from the thread's own fiber -- DeleteFiber on the running
 * fiber terminates the process. sceKernelExitDeleteThread is exactly that
 * case, so it parks itself as a zombie and reap_zombies() does this once the
 * scheduler is back on its own fiber. */
static void thread_release(Thread *t)
{
    if (!t->used) return;
#if defined(_WIN32)
    if (t->fiber) { DeleteFiber(t->fiber); t->fiber = NULL; }
#else
    free(t->host_stack); t->host_stack = NULL;
#endif
    if (t->stack_base) sysmem_free_at(t->stack_base);
    t->used = 0;
    t->zombie = 0;
}

static void reap_zombies(void)
{
    int i;
    for (i = 0; i < MAX_THREADS; i++)
        if (g_threads[i].used && g_threads[i].zombie)
            thread_release(&g_threads[i]);
}

static void switch_to_scheduler(void)
{
    g_calls_since_switch = 0;
#if defined(_WIN32)
    SwitchToFiber(g_sched_fiber);
#else
    swapcontext(&g_threads[g_current].uctx, &g_sched_uctx);
#endif
}

static void block_current(WaitKind kind)
{
    Thread *t = &g_threads[g_current];
    t->wait = kind;
    t->status = TH_WAITING;
    switch_to_scheduler();
}

void threadman_yield(void)
{
    if (g_current < 0) return;
    g_threads[g_current].status = TH_READY;
    g_threads[g_current].order = ++g_order;
    switch_to_scheduler();
}

/* Block the caller for `usec` of emulated time (the sceKernelDelayThread
 * wait). Blocking HLE calls must use this, not threadman_yield(): a yielding
 * thread is still READY and under strict priority gets re-picked at once, so
 * nothing below its priority ever runs. Yielding is not blocking. */
void threadman_block_us(u64 usec)
{
    Thread *t;
    if (g_current < 0) return;
    t = &g_threads[g_current];
    t->wake_us = g_clock_us + usec;
    block_current(WAIT_DELAY);
}

#if defined(_WIN32)
static void CALLBACK fiber_trampoline(void *param)
#else
static void fiber_trampoline(void)
#endif
{
#if defined(_WIN32)
    Thread *t = (Thread *)param;
#else
    Thread *t = &g_threads[g_current];
#endif
    RecompFn fn = recomp_lookup(t->entry);
    if (!fn) {
        fprintf(stderr, "[hle] thread \"%s\": no recompiled function at %08x\n",
                t->name, t->entry);
        abort();
    }
    fn(&t->ctx, g_ram);
    /* Falling off the end is an implicit sceKernelExitThread($v0). */
    t->exit_status = (int)t->ctx.r[R_V0];
    t->status = TH_STOPPED;
    t->wait = WAIT_NONE;
    for (;;) switch_to_scheduler();
}

u32 sysmem_alloc_raw(const char *name, u32 size);    /* sysmem.c */
u32 sysmem_alloc_high(const char *name, u32 size);   /* sysmem.c */

/* The module-start thread (never scheduled; main() runs it directly) owns
 * the topmost stack block; reserving it keeps guest stack addresses matching
 * hardware. 0x400 is the measured gap between its k0 and user_main's. */
#define MODULE_START_STACK_SIZE 0x400u

/* Interrupt handlers run on the kernel's own stack. It must NOT come out of
 * the user partition (that shifts every game thread's stack), and it must not
 * come out of the volatile block either: sceKernelVolatileMemLock hands all
 * 4 MB of that to the game, and the asset loader stages whole CHPAK archives
 * across it. This stack used to sit at 0x08700000, three megabytes into that
 * block, so every vblank scribbled a stack frame into the middle of any
 * archive larger than 3 MB; the game's zlib pump then got Z_DATA_ERROR from
 * inflate and, because it only ever breaks on Z_STREAM_END, span forever.
 * So: low kernel space, below the volatile block, clear of the kernel
 * trampolines at 0x08000000..0x08000040. */
#define INTR_STACK_BASE 0x08300000u
#define INTR_STACK_SIZE 0x1000u

#if INTR_STACK_BASE + INTR_STACK_SIZE > PSP_VOLATILE_BASE
#error "interrupt stack overlaps the volatile block handed to the game"
#endif

void threadman_init(u8 *ram, const CpuCtx *boot)
{
    g_ram = ram;
    sysmem_alloc_high("root", MODULE_START_STACK_SIZE);

    memset(&g_intr_ctx, 0, sizeof g_intr_ctx);
    g_intr_ctx.r[R_GP] = boot->r[R_GP];
    g_intr_ctx.r[R_SP] = (INTR_STACK_BASE + INTR_STACK_SIZE - 0x40u) & ~0xFu;
    g_intr_ctx.r[R_FP] = g_intr_ctx.r[R_SP];
    g_intr_ctx.r[R_K0] = INTR_STACK_BASE + INTR_STACK_SIZE;
    g_intr_ctx.fcr31 = BOOT_FCR31;
    g_next_vblank_us = display_frame_us();
    {
        const char *s = getenv("PSPRECO_MAX_FRAMES");
        if (s) g_max_frames = strtoull(s, NULL, 10);
    }
    RECOMP_TRACE_CONTEXT(-2, INTR_STACK_BASE,
                         INTR_STACK_BASE + INTR_STACK_SIZE, "interrupt");
    /* The module-start context runs on the kernel's own stack, above every
     * thread the game creates. */
    RECOMP_TRACE_CONTEXT(-1, boot->r[R_SP] - 0x1000u, boot->r[R_K0], "boot");
#if defined(_WIN32)
    g_sched_fiber = ConvertThreadToFiber(NULL);
    if (!g_sched_fiber) {
        fprintf(stderr, "[hle] ConvertThreadToFiber failed\n");
        exit(1);
    }
#endif
}

/* Bound vblank catch-up so a large clock jump delivers a few handler calls,
 * not thousands. */
#define VBLANK_MAX_CATCHUP 4

u64 threadman_vblank_count(void) { return g_vblank_count; }

/* PSPRECO_WATCH_U32=addr[,addr...]: report the named guest words whenever
 * they change across frames. */
#define WATCH_MAX 8
static void watch_u32_report(void)
{
    static int checked;
    static unsigned count;
    static u32 addr[WATCH_MAX], last[WATCH_MAX];
    unsigned i;

    if (!checked) {
        const char *e = getenv("PSPRECO_WATCH_U32");
        checked = 1;
        while (e && *e && count < WATCH_MAX) {
            char *end;
            addr[count] = (u32)strtoul(e, &end, 0);
            if (end == e) break;
            last[count] = ~0u;          /* force a first report */
            count++;
            e = (*end == ',') ? end + 1 : end;
        }
    }
    for (i = 0; i < count; i++) {
        u32 v = mem_r32(g_ram, addr[i]);
        if (v == last[i]) continue;
        last[i] = v;
        hle_log("[watch] frame %llu  %08x = %08x (%d)",
                (unsigned long long)g_vblank_count, addr[i], v, (int)v);
    }
}

/* PSPRECO_THREADDUMP=N: every N frames, print each live thread's status and
 * the object it waits on. */
static void thread_dump_report(void)
{
    static int checked;
    static unsigned every;
    static const char *wait_name[] = {
        "none", "sleep", "delay", "sema", "evf", "join", "vblank"
    };
    int i;

    if (!checked) {
        const char *e = getenv("PSPRECO_THREADDUMP");
        checked = 1;
        if (e) every = (unsigned)strtoul(e, NULL, 10);
    }
    if (!every || (g_vblank_count % every) != 0) return;
    hle_log("[thr] ---- frame %llu, clock %llu us ----",
            (unsigned long long)g_vblank_count,
            (unsigned long long)g_clock_us);
    for (i = 0; i < MAX_THREADS; i++) {
        Thread *t = &g_threads[i];
        char detail[128];
        if (!t->used) continue;
        detail[0] = '\0';
        if (t->status == TH_WAITING) {
            switch (t->wait) {
            case WAIT_SEMA: {
                Sema *s = sema_by_uid(t->sema_uid);
                snprintf(detail, sizeof detail,
                         " sema=%d(\"%s\" count=%d) need=%d cb=%d",
                         t->sema_uid, s ? s->name : "?", s ? s->count : -1,
                         t->sema_need, t->wait_cb);
                break;
            }
            case WAIT_EVENTFLAG: {
                EventFlag *e2 = evf_by_uid(t->evf_uid);
                snprintf(detail, sizeof detail,
                         " evf=%d(\"%s\" pat=%08x) want=%08x mode=%02x cb=%d",
                         t->evf_uid, e2 ? e2->name : "?",
                         e2 ? e2->pattern : 0u, t->evf_bits,
                         (unsigned)t->evf_mode, t->wait_cb);
                break;
            }
            case WAIT_DELAY:
                snprintf(detail, sizeof detail, " wake_us=%llu (in %lld us)",
                         (unsigned long long)t->wake_us,
                         (long long)(t->wake_us - g_clock_us));
                break;
            case WAIT_THREAD_END:
                snprintf(detail, sizeof detail, " join=%d", t->join_uid);
                break;
            default: break;
            }
        }
        hle_log("[thr]  uid=%d \"%s\" prio=%d status=%02x wait=%s%s pc=%08x",
                t->uid, t->name, t->priority, (unsigned)t->status,
                wait_name[t->wait], detail, t->ctx.pc);
    }
}

static void pump_vblank(void)
{
    int n = 0;
    if (g_in_vblank) return;
    g_in_vblank = 1;
    while (g_clock_us >= g_next_vblank_us && n < VBLANK_MAX_CATCHUP) {
        g_next_vblank_us += display_frame_us();
        g_vblank_count++;
        display_vblank(&g_intr_ctx, g_ram);
        watch_u32_report();
        thread_dump_report();
        n++;
    }
    if (g_clock_us >= g_next_vblank_us)          /* we fell far behind */
        g_next_vblank_us = g_clock_us + display_frame_us();
    g_in_vblank = 0;

    if (g_max_frames && g_vblank_count >= g_max_frames && !g_exit_requested) {
        hle_log("[hle] reached the %llu-frame limit (PSPRECO_MAX_FRAMES); "
                "stopping", (unsigned long long)g_max_frames);
        g_exit_requested = 1;
    }
}

/* Block until the next vertical blank. */
void threadman_wait_vblank(void)
{
    Thread *t;
    if (g_current < 0) return;
    t = &g_threads[g_current];
    t->wait_vblank = g_vblank_count;
    block_current(WAIT_VBLANK);
}

/* Run until nothing is runnable. */
void threadman_run(void)
{
    for (;;) {
        int next;
        pump_vblank();
        next = pick_next();
        if (next < 0) {
            /* Nobody is runnable. Advance to whichever comes first, the
             * earliest timer deadline or the next frame boundary; a thread
             * blocked only on vblank must not deadlock the clock. */
            u64 deadline = 0;
            int have = earliest_deadline(&deadline);
            if (any_waiting_on_vblank()
                && (!have || g_next_vblank_us < deadline)) {
                deadline = g_next_vblank_us;
                have = 1;
            }
            if (have && deadline > g_clock_us) { g_clock_us = deadline; continue; }
            if (have) continue;
            return;                     /* deadlock or everything finished */
        }
        if (g_exit_requested) return;

        g_current = next;
        g_threads[next].status = TH_RUNNING;
#if defined(_WIN32)
        SwitchToFiber(g_threads[next].fiber);
#else
        swapcontext(&g_sched_uctx, &g_threads[next].uctx);
#endif
        g_current = -1;
        reap_zombies();     /* safe here and only here: off their fibers */
    }
}

/* creation */
void hle_sceKernelCreateThread(CpuCtx *c, u8 *ram)
{
    const char *name = hle_cstr(ram, HLE_A0);
    u32 entry = HLE_A1;
    int prio  = (int)HLE_A2;
    u32 stack = HLE_A3;
    u32 attr  = hle_arg(c, ram, 0);
    int i, slot = -1;
    Thread *t;

    for (i = 0; i < MAX_THREADS; i++)
        if (!g_threads[i].used) { slot = i; break; }
    if (slot < 0) {
        hle_log("[hle] sceKernelCreateThread(\"%s\"): no free thread slot "
                "(MAX_THREADS=%d)", name, MAX_THREADS);
        HLE_RET(SCE_KERNEL_ERROR_NO_MEMORY);
        return;
    }
    if (prio < 1 || prio > 127) {
        hle_log("[hle] sceKernelCreateThread(\"%s\"): bad priority %d",
                name, prio);
        HLE_RET(SCE_KERNEL_ERROR_ILLEGAL_PRIORITY);
        return;
    }

    t = &g_threads[slot];
    memset(t, 0, sizeof *t);
    t->used = 1;
    t->uid = g_next_uid++;
    snprintf(t->name, sizeof t->name, "%s", name);
    t->entry = entry;
    t->init_priority = t->priority = prio;
    t->attr = attr;
    t->stack_size = stack ? stack : 0x10000u;
    t->status = TH_STOPPED;             /* dormant until StartThread */
    /* Thread stacks come off the TOP of the user partition, downward, in
     * creation order (SMEM_High) -- matches the hardware layout. */
    t->stack_base = sysmem_alloc_high(t->name, t->stack_size);
    if (!t->stack_base) {
        hle_log("[hle] sceKernelCreateThread(\"%s\"): cannot allocate a "
                "%u-byte stack high in the user partition", name,
                t->stack_size);
        t->used = 0;
        HLE_RET(SCE_KERNEL_ERROR_NO_MEMORY);
        return;
    }
    hle_log("[hle] sceKernelCreateThread(\"%s\", entry=%08x, prio=%d, "
            "stack=%u, attr=%08x) -> uid=%d (guest stack %08x..%08x)",
            name, entry, prio, t->stack_size, attr, t->uid,
            t->stack_base, t->stack_base + t->stack_size);
    HLE_RET(t->uid);
}

/* The argument block is copied onto the new thread's stack and passed as
 * (argSize, argPointer) in $a0/$a1, per the firmware thread-entry convention. */
void hle_sceKernelStartThread(CpuCtx *c, u8 *ram)
{
    Thread *t = thread_by_uid((int)HLE_A0);
    u32 arg_size = HLE_A1;
    u32 arg_ptr  = HLE_A2;
    u32 sp;

    if (!t) {
        hle_log("[hle] sceKernelStartThread(%d): no such thread",
                (int)HLE_A0);
        HLE_RET(SCE_KERNEL_ERROR_UNKNOWN_THID);
        return;
    }
    if (t->started) {
        /* An exited/terminated thread is DORMANT and may be restarted
         * (games rely on this). Only a still-live thread refuses. The old
         * fiber is parked in the ExitThread spin; tear it down and restart. */
        if (t->status == TH_STOPPED || t->status == TH_KILLED) {
#if defined(_WIN32)
            if (t->fiber) { DeleteFiber(t->fiber); t->fiber = NULL; }
#else
            free(t->host_stack); t->host_stack = NULL;
#endif
            t->started = 0;
        } else {
            hle_log("[hle] sceKernelStartThread(%d /* %s */): not dormant",
                    t->uid, t->name);
            HLE_RET(SCE_KERNEL_ERROR_NOT_DORMANT);
            return;
        }
    }

    /* Entry state (measured; no public header describes the k0 region):
     *   k0 = top of this thread's stack (per-thread control region)
     *   sp = k0 - 0x40 - roundup16(argSize),  fp = ra = sp
     *   a0 = argSize, a1 = sp + 0x40 (copied arg block) or 0 if no args */
    t->tcb = t->stack_base + t->stack_size;
    sp = t->tcb - THREAD_ENTRY_FRAME - ((arg_size + 15u) & ~15u);
    if (arg_size && arg_ptr) {
        u32 i;
        for (i = 0; i < arg_size; i++)
            mem_w8(ram, sp + THREAD_ENTRY_FRAME + i,
                   (u8)mem_r8(ram, arg_ptr + i));
        t->ctx.r[R_A1] = sp + THREAD_ENTRY_FRAME;
    } else {
        t->ctx.r[R_A1] = 0u;
    }
    t->ctx.r[R_A0] = arg_size;
    t->ctx.r[R_SP] = sp;
    t->ctx.r[R_FP] = sp;
    t->ctx.r[R_GP] = c->r[R_GP];
    t->ctx.r[R_RA] = sp;
    t->ctx.r[R_K0] = t->tcb;
    t->ctx.fcr31 = BOOT_FCR31;
    RECOMP_TRACE_CONTEXT(t->uid, t->stack_base,
                         t->stack_base + t->stack_size, t->name);
    t->arg_size = arg_size;
    t->started = 1;
    t->status = TH_READY;
    t->order = ++g_order;
    /* Stale wait state must not leak into a restarted thread: a leftover
     * wakeup would satisfy its first sleep immediately. */
    t->wait = WAIT_NONE;
    t->wait_cb = 0;
    t->wakeup_count = 0;
    t->timed_out = 0;
    t->priority = t->init_priority;

    /* Host stacks must absorb the deepest guest call chain PLUS host-side
     * work done inside HLE handlers on the same stack (the sceMpeg ring-fill
     * callback re-enters guest code, and the H.264 decoder runs under
     * AvcDecode). 256 KB overflowed there -- and a fiber stack overflow
     * kills the process before any crash handler can even run. */
#if defined(_WIN32)
    t->fiber = CreateFiberEx(1024 * 1024, 8 * 1024 * 1024, 0,
                             fiber_trampoline, t);
    if (!t->fiber) { HLE_RET(SCE_KERNEL_ERROR_NO_MEMORY); return; }
#else
    t->host_stack = (char *)malloc(8 * 1024 * 1024);
    getcontext(&t->uctx);
    t->uctx.uc_stack.ss_sp = t->host_stack;
    t->uctx.uc_stack.ss_size = 8 * 1024 * 1024;
    t->uctx.uc_link = &g_sched_uctx;
    makecontext(&t->uctx, fiber_trampoline, 0);
#endif

    hle_log("[hle] sceKernelStartThread(%d /* %s */, argSize=%u) sp=%08x",
            t->uid, t->name, arg_size, t->ctx.r[R_SP]);
    HLE_RET(0);

    /* A newly started thread preempts us if it is higher priority. */
    if (g_current >= 0 && t->priority < g_threads[g_current].priority)
        threadman_yield();
}

void hle_sceKernelExitThread(CpuCtx *c, u8 *ram)
{
    Thread *t = (g_current >= 0) ? &g_threads[g_current] : NULL;
    (void)ram;
    if (!t) { HLE_RET(0); return; }
    t->exit_status = (int)HLE_A0;
    t->status = TH_STOPPED;
    t->wait = WAIT_NONE;
    hle_log("[hle] sceKernelExitThread(%d) from \"%s\"", t->exit_status, t->name);
    for (;;) switch_to_scheduler();
}

void hle_sceKernelExitDeleteThread(CpuCtx *c, u8 *ram)
{
    Thread *t = (g_current >= 0) ? &g_threads[g_current] : NULL;
    (void)ram;
    if (!t) { HLE_RET(0); return; }
    t->exit_status = (int)HLE_A0;
    t->status = TH_KILLED;
    t->wait = WAIT_NONE;
    /* The slot cannot be freed here -- we are standing on this thread's own
     * fiber. Mark it and let the scheduler reap it, or the slot and its guest
     * stack leak: the game creates a ThreadLoadMain per load and exits it this
     * way, so 128 loads used to end in "no free thread slot" and a loading
     * screen that never finishes. */
    t->zombie = 1;
    hle_log("[hle] sceKernelExitDeleteThread(%d) from \"%s\"",
            t->exit_status, t->name);
    for (;;) switch_to_scheduler();
}

void hle_sceKernelDeleteThread(CpuCtx *c, u8 *ram)
{
    Thread *t = thread_by_uid((int)HLE_A0);
    (void)ram;
    if (!t) { HLE_RET(SCE_KERNEL_ERROR_UNKNOWN_THID); return; }
    if (t->status == TH_RUNNING) { HLE_RET(SCE_KERNEL_ERROR_NOT_DORMANT); return; }
    hle_log("[hle] sceKernelDeleteThread(%d /* %s */)", t->uid, t->name);
    thread_release(t);
    HLE_RET(0);
}

void hle_sceKernelTerminateDeleteThread(CpuCtx *c, u8 *ram)
{
    Thread *t = thread_by_uid((int)HLE_A0);
    (void)ram;
    if (!t) { HLE_RET(SCE_KERNEL_ERROR_UNKNOWN_THID); return; }
    hle_log("[hle] sceKernelTerminateDeleteThread(%d /* %s */)", t->uid, t->name);
    t->status = TH_KILLED;
    t->wait = WAIT_NONE;
    /* Terminating yourself is legal; that one has to be deferred like
     * sceKernelExitDeleteThread, for the same fiber reason. */
    if (g_current >= 0 && t == &g_threads[g_current]) t->zombie = 1;
    else thread_release(t);
    HLE_RET(0);
}

void hle_sceKernelDelayThread(CpuCtx *c, u8 *ram)
{
    Thread *t = (g_current >= 0) ? &g_threads[g_current] : NULL;
    (void)ram;
    if (!t) { HLE_RET(0); return; }
    t->wake_us = g_clock_us + HLE_A0;
    HLE_RET(0);
    block_current(WAIT_DELAY);
}

void hle_sceKernelDelayThreadCB(CpuCtx *c, u8 *ram)
{
    threadman_deliver_callbacks(c, ram);
    if (g_current >= 0) g_threads[g_current].wait_cb = 1;
    hle_sceKernelDelayThread(c, ram);
}

void hle_sceKernelSleepThread(CpuCtx *c, u8 *ram)
{
    Thread *t = (g_current >= 0) ? &g_threads[g_current] : NULL;
    (void)ram;
    if (!t) { HLE_RET(0); return; }
    HLE_RET(0);
    if (t->wakeup_count > 0) { t->wakeup_count--; return; }
    block_current(WAIT_SLEEP);
}

void hle_sceKernelSleepThreadCB(CpuCtx *c, u8 *ram)
{
    threadman_deliver_callbacks(c, ram);
    if (g_current >= 0) g_threads[g_current].wait_cb = 1;
    hle_sceKernelSleepThread(c, ram);
}

void hle_sceKernelWakeupThread(CpuCtx *c, u8 *ram)
{
    Thread *t = thread_by_uid((int)HLE_A0);
    (void)ram;
    if (!t) { HLE_RET(SCE_KERNEL_ERROR_UNKNOWN_THID); return; }
    t->wakeup_count++;
    HLE_RET(0);
}

void hle_sceKernelCancelWakeupThread(CpuCtx *c, u8 *ram)
{
    Thread *t = thread_by_uid((int)HLE_A0);
    (void)ram;
    if (!t) { HLE_RET(SCE_KERNEL_ERROR_UNKNOWN_THID); return; }
    HLE_RET(t->wakeup_count);
    t->wakeup_count = 0;
}

void hle_sceKernelWaitThreadEnd(CpuCtx *c, u8 *ram)
{
    Thread *self = (g_current >= 0) ? &g_threads[g_current] : NULL;
    Thread *o = thread_by_uid((int)HLE_A0);
    (void)ram;
    if (!o) { HLE_RET(SCE_KERNEL_ERROR_UNKNOWN_THID); return; }
    if (!self) { HLE_RET(0); return; }
    if (o->status == TH_STOPPED || o->status == TH_KILLED) { HLE_RET(0); return; }
    self->join_uid = o->uid;
    HLE_RET(0);
    block_current(WAIT_THREAD_END);
}

void hle_sceKernelGetThreadId(CpuCtx *c, u8 *ram)
{
    (void)ram;
    HLE_RET(threadman_current_uid());
}

void hle_sceKernelChangeThreadPriority(CpuCtx *c, u8 *ram)
{
    Thread *t = thread_by_uid((int)HLE_A0);
    int prio = (int)HLE_A1;
    (void)ram;
    if (!t) { HLE_RET(SCE_KERNEL_ERROR_UNKNOWN_THID); return; }
    if (prio < 1 || prio > 127) {
        HLE_RET(SCE_KERNEL_ERROR_ILLEGAL_PRIORITY);
        return;
    }
    t->priority = prio;
    t->order = ++g_order;
    HLE_RET(0);
}

void hle_sceKernelGetThreadCurrentPriority(CpuCtx *c, u8 *ram)
{
    (void)ram;
    HLE_RET(g_current >= 0 ? (u32)g_threads[g_current].priority : 0u);
}

/* semaphores */
void hle_sceKernelCreateSema(CpuCtx *c, u8 *ram)
{
    const char *name = hle_cstr(ram, HLE_A0);
    int i, slot = -1;
    for (i = 0; i < MAX_SEMA; i++) if (!g_semas[i].used) { slot = i; break; }
    if (slot < 0) { HLE_RET(SCE_KERNEL_ERROR_NO_MEMORY); return; }
    g_semas[slot].used = 1;
    g_semas[slot].uid = g_next_uid++;
    g_semas[slot].attr = HLE_A1;
    g_semas[slot].count = (int)HLE_A2;
    g_semas[slot].max_count = (int)HLE_A3;
    snprintf(g_semas[slot].name, sizeof g_semas[slot].name, "%s", name);
    hle_log("[hle] sceKernelCreateSema(\"%s\", init=%d, max=%d) -> %d",
            name, g_semas[slot].count, g_semas[slot].max_count,
            g_semas[slot].uid);
    HLE_RET(g_semas[slot].uid);
}

void hle_sceKernelDeleteSema(CpuCtx *c, u8 *ram)
{
    Sema *s = sema_by_uid((int)HLE_A0);
    (void)ram;
    if (!s) { HLE_RET(SCE_KERNEL_ERROR_UNKNOWN_UID); return; }
    s->used = 0;
    HLE_RET(0);
}

void hle_sceKernelSignalSema(CpuCtx *c, u8 *ram)
{
    Sema *s = sema_by_uid((int)HLE_A0);
    int n = (int)HLE_A1;
    (void)ram;
    if (!s) { HLE_RET(SCE_KERNEL_ERROR_UNKNOWN_UID); return; }
    s->count += n;
    if (s->max_count > 0 && s->count > s->max_count) s->count = s->max_count;
    HLE_RET(0);
}

static void wait_sema_common(CpuCtx *c, u8 *ram, int with_cb)
{
    Thread *t = (g_current >= 0) ? &g_threads[g_current] : NULL;
    Sema *s = sema_by_uid((int)HLE_A0);
    int need = (int)HLE_A1;
    if (with_cb) threadman_deliver_callbacks(c, ram);
    if (!s) { HLE_RET(SCE_KERNEL_ERROR_UNKNOWN_UID); return; }
    if (s->count >= need) { s->count -= need; HLE_RET(0); return; }
    if (!t) { HLE_RET(SCE_KERNEL_ERROR_UNKNOWN_UID); return; }
    t->sema_uid = s->uid;
    t->sema_need = need;
    t->wait_cb = with_cb;
    HLE_RET(0);
    block_current(WAIT_SEMA);
}

void hle_sceKernelWaitSema(CpuCtx *c, u8 *ram)   { wait_sema_common(c, ram, 0); }
void hle_sceKernelWaitSemaCB(CpuCtx *c, u8 *ram) { wait_sema_common(c, ram, 1); }

/* event flags */
void hle_sceKernelCreateEventFlag(CpuCtx *c, u8 *ram)
{
    const char *name = hle_cstr(ram, HLE_A0);
    int i, slot = -1;
    for (i = 0; i < MAX_EVF; i++) if (!g_evfs[i].used) { slot = i; break; }
    if (slot < 0) { HLE_RET(SCE_KERNEL_ERROR_NO_MEMORY); return; }
    g_evfs[slot].used = 1;
    g_evfs[slot].uid = g_next_uid++;
    g_evfs[slot].attr = HLE_A1;
    g_evfs[slot].pattern = HLE_A2;
    snprintf(g_evfs[slot].name, sizeof g_evfs[slot].name, "%s", name);
    hle_log("[hle] sceKernelCreateEventFlag(\"%s\", init=%08x) -> %d",
            name, g_evfs[slot].pattern, g_evfs[slot].uid);
    HLE_RET(g_evfs[slot].uid);
}

void hle_sceKernelDeleteEventFlag(CpuCtx *c, u8 *ram)
{
    EventFlag *e = evf_by_uid((int)HLE_A0);
    (void)ram;
    if (!e) { HLE_RET(SCE_KERNEL_ERROR_UNKNOWN_UID); return; }
    e->used = 0;
    HLE_RET(0);
}

void hle_sceKernelSetEventFlag(CpuCtx *c, u8 *ram)
{
    EventFlag *e = evf_by_uid((int)HLE_A0);
    (void)ram;
    if (!e) { HLE_RET(SCE_KERNEL_ERROR_UNKNOWN_UID); return; }
    e->pattern |= HLE_A1;
    HLE_RET(0);
}

void hle_sceKernelClearEventFlag(CpuCtx *c, u8 *ram)
{
    EventFlag *e = evf_by_uid((int)HLE_A0);
    (void)ram;
    if (!e) { HLE_RET(SCE_KERNEL_ERROR_UNKNOWN_UID); return; }
    e->pattern &= HLE_A1;
    HLE_RET(0);
}

static void wait_evf_common(CpuCtx *c, u8 *ram, int with_cb)
{
    Thread *t = (g_current >= 0) ? &g_threads[g_current] : NULL;
    EventFlag *e = evf_by_uid((int)HLE_A0);
    u32 bits = HLE_A1;
    int mode = (int)HLE_A2;
    u32 resultpat = HLE_A3;

    if (with_cb) threadman_deliver_callbacks(c, ram);
    if (!e) { HLE_RET(SCE_KERNEL_ERROR_UNKNOWN_UID); return; }
    if (evf_satisfied(e->pattern, bits, mode)) {
        if (resultpat) mem_w32(ram, resultpat, e->pattern);
        if ((u32)mode & EW_CLEAR_ALL) e->pattern = 0u;
        else if ((u32)mode & EW_CLEAR_PAT) e->pattern &= ~bits;
        HLE_RET(0);
        return;
    }
    if (!t) { HLE_RET(SCE_KERNEL_ERROR_UNKNOWN_UID); return; }
    t->evf_uid = e->uid;
    t->evf_bits = bits;
    t->evf_mode = mode;
    t->evf_resultpat = resultpat;
    t->wait_cb = with_cb;
    HLE_RET(0);
    block_current(WAIT_EVENTFLAG);
}

void hle_sceKernelWaitEventFlag(CpuCtx *c, u8 *ram)   { wait_evf_common(c, ram, 0); }
void hle_sceKernelWaitEventFlagCB(CpuCtx *c, u8 *ram) { wait_evf_common(c, ram, 1); }

void hle_sceKernelReferEventFlagStatus(CpuCtx *c, u8 *ram)
{
    EventFlag *e = evf_by_uid((int)HLE_A0);
    u32 info = HLE_A1;
    if (!e) { HLE_RET(SCE_KERNEL_ERROR_UNKNOWN_UID); return; }
    /* SceKernelEventFlagInfo: size, name[32], attr, initPattern,
     * currentPattern, numWaitThreads. */
    if (info) {
        mem_w32(ram, info + 0, 52u);
        mem_w32(ram, info + 36, e->attr);
        mem_w32(ram, info + 40, e->pattern);
        mem_w32(ram, info + 44, e->pattern);
        mem_w32(ram, info + 48, 0u);
    }
    HLE_RET(0);
}

/* callbacks */
void hle_sceKernelCreateCallback(CpuCtx *c, u8 *ram)
{
    const char *name = hle_cstr(ram, HLE_A0);
    int i, slot = -1;
    for (i = 0; i < MAX_CB; i++) if (!g_cbs[i].used) { slot = i; break; }
    if (slot < 0) { HLE_RET(SCE_KERNEL_ERROR_NO_MEMORY); return; }
    g_cbs[slot].used = 1;
    g_cbs[slot].uid = g_next_uid++;
    g_cbs[slot].func = HLE_A1;
    g_cbs[slot].common = HLE_A2;
    g_cbs[slot].owner = threadman_current_uid();
    snprintf(g_cbs[slot].name, sizeof g_cbs[slot].name, "%s", name);
    hle_log("[hle] sceKernelCreateCallback(\"%s\", func=%08x) -> %d",
            name, g_cbs[slot].func, g_cbs[slot].uid);
    HLE_RET(g_cbs[slot].uid);
}

/* Guest signature: int cb(int arg1, int arg2, void *common). The kernel runs
 * a callback inline on the registering thread, with the caller's context
 * saved and restored around it. */
/* Pending notifications, delivered at the next callback point. */
#define MAX_PENDING_CB 32
typedef struct { int used; int cbid; u32 a1, a2; } PendingCb;
static PendingCb g_pending_cb[MAX_PENDING_CB];

void threadman_notify_callback(int cbid, u32 a1, u32 a2)
{
    int i;
    for (i = 0; i < MAX_PENDING_CB; i++) {
        if (g_pending_cb[i].used) continue;
        g_pending_cb[i].used = 1;
        g_pending_cb[i].cbid = cbid;
        g_pending_cb[i].a1 = a1;
        g_pending_cb[i].a2 = a2;
        return;
    }
    hle_log("[hle] callback queue full, dropping notification for cbid=%d",
            cbid);
}

/* A callback fires only at a callback point (inside the ...CB wait
 * variants), never at the moment it is registered. */
int threadman_deliver_callbacks(CpuCtx *c, u8 *ram)
{
    int i, n = 0;
    for (i = 0; i < MAX_PENDING_CB; i++) {
        if (!g_pending_cb[i].used) continue;
        g_pending_cb[i].used = 0;
        n += threadman_invoke_callback(c, ram, g_pending_cb[i].cbid,
                                       g_pending_cb[i].a1,
                                       g_pending_cb[i].a2);
    }
    return n;
}

int threadman_invoke_callback(CpuCtx *c, u8 *ram, int cbid, u32 a1, u32 a2)
{
    Callback *cb = NULL;
    RecompFn fn;
    CpuCtx saved;
    int i;

    for (i = 0; i < MAX_CB; i++)
        if (g_cbs[i].used && g_cbs[i].uid == cbid) { cb = &g_cbs[i]; break; }
    if (!cb) return 0;

    fn = recomp_lookup(cb->func);
    if (!fn) {
        recomp_trap_unknown_indirect(c, ram, c->r[R_RA], cb->func);
        return 0;
    }
    /* The kernel dispatcher spends 0x80 bytes of the interrupted thread's
     * stack and installs $ra = 0x08000018 (measured); matching both keeps
     * our stack addresses identical to hardware's. */
    saved = *c;
    c->r[R_SP] = saved.r[R_SP] - KERNEL_CALLBACK_FRAME;
    c->r[R_RA] = KERNEL_CALLBACK_RETURN;
    c->r[R_A0] = a1;
    c->r[R_A1] = a2;
    c->r[R_A2] = cb->common;
    hle_log("[hle] callback \"%s\" (cbid=%d) -> %08x(%d, %08x, %08x)",
            cb->name, cbid, cb->func, (int)a1, a2, cb->common);
    fn(c, ram);
    *c = saved;
    return 1;
}

/* system time */
void hle_sceKernelGetSystemTime(CpuCtx *c, u8 *ram)
{
    u32 p = HLE_A0;
    if (p) {                       /* SceKernelSysClock is a 64-bit usec count */
        mem_w32(ram, p + 0, (u32)(g_clock_us & 0xFFFFFFFFu));
        mem_w32(ram, p + 4, (u32)(g_clock_us >> 32));
    }
    HLE_RET(0);
}

void hle_sceKernelGetSystemTimeWide(CpuCtx *c, u8 *ram)
{
    (void)ram;
    HLE_RET64(g_clock_us);
}

void hle_sceKernelGetSystemTimeLow(CpuCtx *c, u8 *ram)
{
    (void)ram;
    HLE_RET((u32)(g_clock_us & 0xFFFFFFFFu));
}

/* thread status */
void hle_sceKernelReferThreadRunStatus(CpuCtx *c, u8 *ram)
{
    Thread *t = thread_by_uid((int)HLE_A0);
    u32 info = HLE_A1;
    if (!t) { HLE_RET(SCE_KERNEL_ERROR_UNKNOWN_THID); return; }
    if (info) {
        mem_w32(ram, info + 0, 40u);          /* size            */
        mem_w32(ram, info + 4, (u32)t->status);
        mem_w32(ram, info + 8, (u32)t->priority);
        mem_w32(ram, info + 12, (u32)t->wait);
        mem_w32(ram, info + 16, 0u);          /* waitId          */
        mem_w32(ram, info + 20, 0u);          /* exitStatus      */
        mem_w32(ram, info + 24, 0u);          /* runClocks lo    */
        mem_w32(ram, info + 28, 0u);          /* runClocks hi    */
        mem_w32(ram, info + 32, 0u);          /* intrPreemptCount*/
        mem_w32(ram, info + 36, 0u);          /* threadPreemptCount */
    }
    HLE_RET(0);
}
