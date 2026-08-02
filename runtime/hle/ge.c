/* runtime/hle/ge.c  <-  include/geman.h (+ gecmd.h)
 *
 * sceGe_user. Runs the display list's CONTROL FLOW only -- BASE, JUMP, BJUMP,
 * CALL, RET, END, FINISH, SIGNAL -- maintains list state, and raises the
 * finish interrupt whose callback drives the game's frame loop.
 * Rasterisation lives in runtime/gpu/.
 */

#include "hle.h"
#include "sce_errors.h"
#include "threadman.h"
#include "../gpu/ge.h"

#include <stdio.h>

/* eDRAM: 2 MB at 0x04000000, as sceGeEdramGetAddr returns on hardware. */
#define PSP_EDRAM_ADDR 0x04000000u
#define PSP_EDRAM_SIZE 0x00200000u

/* --- command ids (gecmd.h) ---------------------------------------------- */
#define GE_CMD_NOP     0x00
#define GE_CMD_PRIM    0x04
#define GE_CMD_JUMP    0x08
#define GE_CMD_BJUMP   0x09
#define GE_CMD_CALL    0x0A
#define GE_CMD_RET     0x0B
#define GE_CMD_END     0x0C
#define GE_CMD_SIGNAL  0x0E
#define GE_CMD_FINISH  0x0F
#define GE_CMD_BASE    0x10
#define GE_CMD_ORIGIN  0x14

/* Command word: [31:24] id, [23:0] payload. An address payload is the low 24
 * bits of the target; BASE supplies bits [27:24] from its payload bits
 * [19:16]. */
#define GE_ADDR24(w)   ((w) & 0x00FFFFFCu)
#define GE_BASE_OF(w)  ((((w) >> 16) & 0x0Fu) << 24)

/* --- list states (geman.h) ---------------------------------------------- */
#define SCE_GE_LIST_COMPLETED 0
#define SCE_GE_LIST_QUEUED    1
#define SCE_GE_LIST_DRAWING   2
#define SCE_GE_LIST_STALLING  3
#define SCE_GE_LIST_PAUSED    4

/* --- callback registration ---------------------------------------------- */
typedef struct {
    int used;
    int id;
    u32 signal_func, signal_cookie;
    u32 finish_func, finish_cookie;
} GeCallback;

#define MAX_GE_CB 4
static GeCallback g_ge_cb[MAX_GE_CB];
static int g_next_cb_id = 1;

static GeCallback *ge_cb_by_id(int id)
{
    int i;
    for (i = 0; i < MAX_GE_CB; i++)
        if (g_ge_cb[i].used && g_ge_cb[i].id == id) return &g_ge_cb[i];
    return NULL;
}

/* --- lists -------------------------------------------------------------- */
typedef struct {
    int used;
    int id;
    int state;
    int cbid;
    u32 madr;          /* where the list started */
    u32 stall;
    u32 pc;            /* where execution stopped, for a stalled list */
    int finish_code;   /* FINISH's 24-bit payload, -1 if it never finished */
} GeList;

#define MAX_GE_LIST 64
static GeList g_lists[MAX_GE_LIST];
static int g_next_list_id = 0x10;
static int g_first_list_reported;

static GeList *list_by_id(int id)
{
    int i;
    for (i = 0; i < MAX_GE_LIST; i++)
        if (g_lists[i].used && g_lists[i].id == id) return &g_lists[i];
    return NULL;
}

/* --- pending interrupts ------------------------------------------------- */
/* Lists run synchronously inside sceGeListEnQueue, so finish/signal callbacks
 * are queued here and delivered from interrupt context at the next vblank --
 * never inline from inside the game's own call, which hardware never does. */
typedef struct { int used; u32 func, cookie; int code; u32 madr; } GeIntr;

#define MAX_GE_INTR 16
static GeIntr g_ge_intr[MAX_GE_INTR];

static void queue_ge_intr(u32 func, u32 cookie, int code, u32 madr)
{
    int i;
    if (!func) return;
    for (i = 0; i < MAX_GE_INTR; i++) {
        if (g_ge_intr[i].used) continue;
        g_ge_intr[i].used = 1;
        g_ge_intr[i].func = func;
        g_ge_intr[i].cookie = cookie;
        g_ge_intr[i].code = code;
        g_ge_intr[i].madr = madr;
        return;
    }
    hle_log("[ge] interrupt queue full, dropping a callback for %08x", func);
}

/* Both callbacks: void (*)(int intrcode, void *cookie, const void *madr).
 * Called from interrupt context by the vblank pump. */
int ge_deliver_interrupts(CpuCtx *c, u8 *ram)
{
    int i, n = 0;
    for (i = 0; i < MAX_GE_INTR; i++) {
        GeIntr *g = &g_ge_intr[i];
        RecompFn fn;
        CpuCtx saved;
        if (!g->used) continue;
        g->used = 0;
        fn = recomp_lookup(g->func);
        if (!fn) {
            recomp_trap_unknown_indirect(c, ram, c->r[R_RA], g->func);
            continue;
        }
        saved = *c;
        c->r[R_A0] = (u32)g->code;
        c->r[R_A1] = g->cookie;
        c->r[R_A2] = g->madr;
        c->r[R_RA] = 0;
        fn(c, ram);
        *c = saved;
        n++;
    }
    return n;
}

/* --- the list processor -------------------------------------------------- */
/* Non-control-flow commands set GE state. Bounded two ways -- a command
 * budget and a CALL stack depth -- so a malformed or self-jumping list says
 * so rather than wedging the emulator. */
#define GE_MAX_COMMANDS 2000000u
#define GE_STACK_DEPTH  32

/* Every command id the title has ever issued; reported at shutdown as the
 * measured work list for rasterisation. */
static unsigned g_cmd_seen[256];
/* Of those, the ones runtime/gpu/ge_raster.c does not model yet. */
static unsigned g_cmd_unmodelled[256];

void ge_report_command_usage(void)
{
    int i, n = 0, un = 0;
    for (i = 0; i < 256; i++) {
        if (g_cmd_seen[i]) n++;
        if (g_cmd_unmodelled[i]) un++;
    }
    if (!n) return;
    printf("[ge] %d distinct GE command ids issued, %d of them not modelled "
           "yet:\n", n, un);
    for (i = 0; i < 256; i++)
        if (g_cmd_seen[i])
            printf("[ge]   %02x  x%-6u %s\n", i, g_cmd_seen[i],
                   g_cmd_unmodelled[i] ? "unmodelled" : "");
    printf("[ge] (pipe this through a GE command-name table to see the "
           "command names)\n");
}

typedef struct {
    unsigned commands;
    unsigned prims;
    int      hit_limit;
    unsigned by_cmd[256];      /* which command ids the list actually uses */
} GeStats;

static void run_list(u8 *ram, GeList *l, GeStats *st)
{
    u32 stack[GE_STACK_DEPTH];
    int sp = 0;
    u32 pc = l->madr;
    u32 base = 0;
    unsigned n = 0;

    {
        int i;
        for (i = 0; i < 256; i++) st->by_cmd[i] = 0;
    }
    st->commands = 0;
    st->prims = 0;
    st->hit_limit = 0;
    l->finish_code = -1;
    l->state = SCE_GE_LIST_DRAWING;

    for (;;) {
        u32 w, cmd, payload;

        /* pSadr is the stall address: stop there and wait for the list to be
         * extended; 0 means "run to the end". */
        if (l->stall && pc == l->stall) {
            l->state = SCE_GE_LIST_STALLING;
            break;
        }
        if (n >= GE_MAX_COMMANDS) {
            st->hit_limit = 1;
            hle_log("[ge] list %d ran past %u commands without ending -- "
                    "stopping", l->id, GE_MAX_COMMANDS);
            l->state = SCE_GE_LIST_COMPLETED;
            break;
        }

        w = mem_r32(ram, pc);
        cmd = w >> 24;
        payload = w & 0x00FFFFFFu;
        pc += 4;
        n++;
        st->by_cmd[cmd]++;
        g_cmd_seen[cmd]++;

        switch (cmd) {
        case GE_CMD_NOP:
            break;
        case GE_CMD_PRIM:
            st->prims++;
            ge_draw_prim(ram, w);
            break;
        case GE_CMD_BASE:
            base = GE_BASE_OF(w);
            break;
        case GE_CMD_JUMP:
            pc = base | GE_ADDR24(w);
            break;
        case GE_CMD_BJUMP:
            /* Bounding-box conditional jump; without the geometry test, not
             * taking it is conservative: draws everything, never skips. */
            break;
        case GE_CMD_CALL:
            if (sp >= GE_STACK_DEPTH) {
                st->hit_limit = 1;
                hle_log("[ge] list %d nested CALL past depth %d -- stopping",
                        l->id, GE_STACK_DEPTH);
                l->state = SCE_GE_LIST_COMPLETED;
                return;
            }
            stack[sp++] = pc;
            pc = base | GE_ADDR24(w);
            break;
        case GE_CMD_RET:
            if (sp <= 0) {
                hle_log("[ge] list %d: RET with an empty call stack", l->id);
                l->state = SCE_GE_LIST_COMPLETED;
                return;
            }
            pc = stack[--sp];
            break;
        case GE_CMD_SIGNAL:
            /* Raises the signal interrupt with this payload. */
            {
                GeCallback *cb = ge_cb_by_id(l->cbid);
                if (cb)
                    queue_ge_intr(cb->signal_func, cb->signal_cookie,
                                  (int)payload, l->madr);
            }
            break;
        case GE_CMD_FINISH:
            /* Marks end of drawing; the finish interrupt carries this
             * payload as its intrcode. The following END stops the list. */
            l->finish_code = (int)payload;
            break;
        case GE_CMD_END:
            l->state = SCE_GE_LIST_COMPLETED;
            l->pc = pc;
            st->commands = n;
            /* End of list: the GPU backend's batched work must become
             * observable here. */
            ge_gpu_flush("listend");
            return;
        default:
            /* State-setting command; runtime/gpu/ge.c models what
             * rasterisation needs and reports what it did not recognise. */
            if (!ge_state_command(ram, w, base)) g_cmd_unmodelled[cmd]++;
            break;
        }
    }
    l->pc = pc;
    st->commands = n;
}

static void report_first_list(const GeList *l, const GeStats *st)
{
    printf("\n===== the game submitted its first GE display list =====\n"
           "list %d at %08x: %u commands, %u primitives, %s\n"
           "GE control flow is executed; rasterisation is not implemented,\n"
           "so nothing is drawn -- see runtime/hle/ge.c.\n",
           l->id, l->madr, st->commands, st->prims,
           l->state == SCE_GE_LIST_COMPLETED ? "ended with END"
                                             : "stopped at the stall address");
    /* The measured command set the title needs for rasterisation. */
    {
        int i;
        printf("command ids used:");
        for (i = 0; i < 256; i++)
            if (st->by_cmd[i]) printf(" %02x(x%u)", i, st->by_cmd[i]);
        printf("\n=======================================================\n\n");
    }
}

/* --- entry points -------------------------------------------------------- */

void hle_sceGeEdramGetAddr(CpuCtx *c, u8 *ram)
{
    (void)ram;
    HLE_RET(PSP_EDRAM_ADDR);
}

void hle_sceGeEdramGetSize(CpuCtx *c, u8 *ram)
{
    (void)ram;
    HLE_RET(PSP_EDRAM_SIZE);
}

/* SceGeCbParam: { pSignalFunc, pSignalCookie, pFinishFunc, pFinishCookie } */
void hle_sceGeSetCallback(CpuCtx *c, u8 *ram)
{
    u32 p = HLE_A0;
    int i, slot = -1;

    if (!p) { HLE_RET(SCE_KERNEL_ERROR_ILLEGAL_ARGUMENT); return; }
    for (i = 0; i < MAX_GE_CB; i++) if (!g_ge_cb[i].used) { slot = i; break; }
    if (slot < 0) { HLE_RET(SCE_KERNEL_ERROR_NO_MEMORY); return; }

    g_ge_cb[slot].used = 1;
    g_ge_cb[slot].id = g_next_cb_id++;
    g_ge_cb[slot].signal_func   = mem_r32(ram, p + 0);
    g_ge_cb[slot].signal_cookie = mem_r32(ram, p + 4);
    g_ge_cb[slot].finish_func   = mem_r32(ram, p + 8);
    g_ge_cb[slot].finish_cookie = mem_r32(ram, p + 12);
    hle_log("[hle] sceGeSetCallback(signal=%08x/%08x, finish=%08x/%08x) -> %d",
            g_ge_cb[slot].signal_func, g_ge_cb[slot].signal_cookie,
            g_ge_cb[slot].finish_func, g_ge_cb[slot].finish_cookie,
            g_ge_cb[slot].id);
    HLE_RET(g_ge_cb[slot].id);
}

void hle_sceGeUnsetCallback(CpuCtx *c, u8 *ram)
{
    GeCallback *cb = ge_cb_by_id((int)HLE_A0);
    (void)ram;
    if (!cb) { HLE_RET(SCE_KERNEL_ERROR_ERROR); return; }
    cb->used = 0;
    HLE_RET(0);
}

/* Microsecond host clock for the GE budget split. Measured once per list, so
 * the query cost does not matter; resolution does, which rules out clock(). */
#if defined(_WIN32)
#  define WIN32_LEAN_AND_MEAN
#  include <windows.h>
static u64 ge_time_us(void)
{
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
#else
#  include <time.h>
static u64 ge_time_us(void)
{
    struct timespec ts;
    clock_gettime(CLOCK_MONOTONIC, &ts);
    return (u64)ts.tv_sec * 1000000u + (u64)(ts.tv_nsec / 1000);
}
#endif

/* Accumulated in runtime/gpu/ge_render.c, reported by the [fps] line. */
extern unsigned long g_ge_us_acc;

void hle_sceGeListEnQueue(CpuCtx *c, u8 *ram)
{
    u32 madr  = HLE_A0;
    u32 stall = HLE_A1;
    int cbid  = (int)HLE_A2;
    GeStats st;
    GeList *l = NULL;
    int i;

    /* Reuse a completed slot before taking a fresh one: a frame loop queues
     * one list per frame forever, and the table must not fill up. */
    for (i = 0; i < MAX_GE_LIST; i++)
        if (!g_lists[i].used) { l = &g_lists[i]; break; }
    if (!l)
        for (i = 0; i < MAX_GE_LIST; i++)
            if (g_lists[i].state == SCE_GE_LIST_COMPLETED) {
                l = &g_lists[i];
                break;
            }
    if (!l) {
        hle_log("[hle] sceGeListEnQueue: all %d list slots are busy",
                MAX_GE_LIST);
        HLE_RET(SCE_KERNEL_ERROR_NO_MEMORY);
        return;
    }

    l->used = 1;
    l->id = g_next_list_id++;
    l->cbid = cbid;
    l->madr = madr;
    l->stall = stall;
    l->state = SCE_GE_LIST_QUEUED;

    {   /* Once per list (about four a frame), so the measurement is free. */
        u64 t0 = ge_time_us();
        run_list(ram, l, &st);
        g_ge_us_acc += (unsigned long)(ge_time_us() - t0);
    }

    if (l->state == SCE_GE_LIST_COMPLETED && l->finish_code >= 0) {
        GeCallback *cb = ge_cb_by_id(cbid);
        if (cb)
            queue_ge_intr(cb->finish_func, cb->finish_cookie,
                          l->finish_code, l->madr);
    }

    if (!g_first_list_reported) {
        g_first_list_reported = 1;
        report_first_list(l, &st);
    }
    hle_log("[hle] sceGeListEnQueue(list=%08x, stall=%08x, cbid=%d) -> id=%d "
            "(%u commands, %u prims)",
            madr, stall, cbid, l->id, st.commands, st.prims);
    if (st.prims) ge_raster_probe(ram, "after list");
    HLE_RET(l->id);
}

/* Extending a stalled list resumes it from where the read pointer stopped. */
void hle_sceGeListUpdateStallAddr(CpuCtx *c, u8 *ram)
{
    GeList *l = list_by_id((int)HLE_A0);
    GeStats st;

    if (!l) { HLE_RET(SCE_KERNEL_ERROR_ERROR); return; }
    l->stall = HLE_A1;
    if (l->state == SCE_GE_LIST_STALLING) {
        u32 resume = l->pc;
        l->madr = resume;
        {   /* Once per list (about four a frame), so the measurement is free. */
        u64 t0 = ge_time_us();
        run_list(ram, l, &st);
        g_ge_us_acc += (unsigned long)(ge_time_us() - t0);
    }
        if (l->state == SCE_GE_LIST_COMPLETED && l->finish_code >= 0) {
            GeCallback *cb = ge_cb_by_id(l->cbid);
            if (cb)
                queue_ge_intr(cb->finish_func, cb->finish_cookie,
                              l->finish_code, l->madr);
        }
    }
    HLE_RET(0);
}

/* Lists run to completion inside EnQueue, so a list is either COMPLETED or
 * STALLING. */
void hle_sceGeListSync(CpuCtx *c, u8 *ram)
{
    GeList *l = list_by_id((int)HLE_A0);
    (void)ram;
    if (!l) { HLE_RET(SCE_KERNEL_ERROR_ERROR); return; }
    HLE_RET(l->state);
}

/* Every list has already run, but the finish interrupt may not have been
 * delivered yet; deliver here as well as at vblank so state read after
 * DrawSync is never stale -- on hardware the interrupt has certainly been
 * raised by the time the queue drains. */
void hle_sceGeDrawSync(CpuCtx *c, u8 *ram)
{
    ge_deliver_interrupts(c, ram);
    HLE_RET(0);
}
