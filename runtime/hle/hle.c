/* runtime/hle/hle.c -- stub-address -> handler binding and the trap floor.
 * An unimplemented HLE call must abort loudly and name itself, never stub
 * silently. */

#include "hle.h"
#include "stubs.h"
#include "threadman.h"

#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

static HleFn  *g_bound;        /* parallel to g_hle_stubs */
static unsigned g_missing;

/* PSPRECO_QUIET=1 silences the HLE call log.
 *
 * It is not cosmetic. main.c makes stdout unbuffered (so a trap that ends in
 * abort() does not lose its last lines), and this log runs at roughly two
 * writes per GE list -- around 500 a second in a menu and more in a mission.
 * Unbuffered writes to a Windows CONSOLE are not like writes to a file: each
 * one is a syscall that conhost has to render and scroll. Redirect them to a
 * file and they cost nothing, which is exactly why play-debug.bat (which
 * redirects) measured FASTER than play.bat (which does not) -- the extra work
 * play-debug.bat does was dwarfed by the console it was avoiding.
 *
 * So play.bat sets this and gets no per-call log at all. Anything that
 * redirects to a file leaves it alone and keeps the full trace. */
static int trace_on(void)
{
    static int on = -1;
    if (on < 0) {
        const char *q = getenv("PSPRECO_QUIET");
        on = (q && q[0] && strcmp(q, "0") != 0) ? 0 : 1;
    }
    return on;
}

static int g_trace_override = -1;      /* hle_set_trace() wins when used */

void hle_set_trace(int on) { g_trace_override = on ? 1 : 0; }
int  hle_trace_enabled(void)
{
    return g_trace_override >= 0 ? g_trace_override : trace_on();
}

void hle_log(const char *fmt, ...)
{
    va_list ap;
    if (!hle_trace_enabled()) return;
    va_start(ap, fmt);
    vfprintf(stdout, fmt, ap);
    va_end(ap);
    fputc('\n', stdout);
}

const char *hle_cstr(u8 *ram, u32 addr)
{
    static char buf[512];
    unsigned i;
    if (!addr) return "(null)";
    for (i = 0; i + 1 < sizeof buf; i++) {
        char ch = (char)mem_r8(ram, addr + i);
        buf[i] = ch;
        if (!ch) break;
    }
    buf[sizeof buf - 1] = '\0';
    return buf;
}

static HleFn find_impl(u32 nid)
{
    unsigned i;
    for (i = 0; i < g_hle_impl_count; i++)
        if (g_hle_impl[i].nid == nid)
            return g_hle_impl[i].fn;
    return NULL;
}

void hle_init(void)
{
    unsigned i, bound = 0;

    g_bound = (HleFn *)calloc(g_hle_stub_count, sizeof *g_bound);
    if (!g_bound) { fprintf(stderr, "[hle] out of memory\n"); exit(1); }

    for (i = 0; i < g_hle_stub_count; i++) {
        g_bound[i] = find_impl(g_hle_stubs[i].nid);
        if (g_bound[i]) bound++;
    }
    g_missing = g_hle_stub_count - bound;
    printf("[hle] bound %u/%u imports (%u still unimplemented)\n",
           bound, g_hle_stub_count, g_missing);
}

static int stub_index(u32 addr)
{
    unsigned i;
    for (i = 0; i < g_hle_stub_count; i++)
        if (g_hle_stubs[i].addr == addr)
            return (int)i;
    return -1;
}

void hle_dispatch_stub(CpuCtx *c, u8 *ram, u32 stub_addr)
{
    int i = stub_index(stub_addr);
    if (i < 0) {
        fprintf(stderr, "[hle] call to unknown stub %08x from %08x\n",
                stub_addr, c->r[R_RA]);
        abort();
    }
    if (g_bound && g_bound[i]) {
        g_bound[i](c, ram);
        threadman_note_hle_call();
        return;
    }
    fprintf(stderr,
            "[pspreco] UNIMPLEMENTED %s::%s (NID %08X) called from %08X\n"
            "          a0=%08x a1=%08x a2=%08x a3=%08x\n",
            g_hle_stubs[i].module, g_hle_stubs[i].name, g_hle_stubs[i].nid,
            c->r[R_RA], c->r[R_A0], c->r[R_A1], c->r[R_A2], c->r[R_A3]);
    abort();
}
