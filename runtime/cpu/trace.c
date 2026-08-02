/* runtime/cpu/trace.c -- differential-trace logging (built with
 * -DPSPRECO_TRACE, build.py --trace). Each recompiled function logs its entry
 * GPRs; tools/tracecmp/tracecmp.py diffs the stream against a PPSSPP trace.
 * $zero and the FPU/VFPU files are omitted: a divergence reaches the GPRs
 * first, since every float result eventually reaches a branch through one. */

#include "pspreco.h"
#include "../hle/threadman.h"

#include <stdio.h>
#include <stdlib.h>

static FILE *g_trace;
static unsigned long long g_records;
/* A busy-waiting guest writes GBs of identical records; the comparator only
 * reads a prefix, so cap the log. PSPRECO_TRACE_MAX=0 removes the cap. */
static unsigned long long g_max_records = 400000ull;

void recomp_trace_open(const char *path)
{
    const char *cap = getenv("PSPRECO_TRACE_MAX");
    if (g_trace) return;
    if (cap) g_max_records = strtoull(cap, NULL, 10);
    g_trace = fopen(path, "wb");
    if (!g_trace) {
        fprintf(stderr, "[pspreco] cannot open trace file %s\n", path);
        exit(1);
    }
    /* Big buffer: the hot path of a traced run. */
    setvbuf(g_trace, NULL, _IOFBF, 1u << 22);
    fprintf(g_trace, "# pspreco trace v1 granularity=function-entry\n");
}

/* Declare a context's stack so the comparator can attribute tid-less oracle
 * records by $sp. ALLOCATED bounds, not observed: the oracle goes deeper in
 * places, and an observed range would misattribute those records. */
void recomp_trace_context(int tid, u32 stack_lo, u32 stack_hi,
                          const char *name)
{
    if (!g_trace) return;
    fprintf(g_trace, "# context tid=%d stack=0x%08x..0x%08x name=%s\n",
            tid, stack_lo, stack_hi, name ? name : "");
}

void recomp_trace_close(void)
{
    if (!g_trace) return;
    fprintf(g_trace, "# %llu records\n", g_records);
    fclose(g_trace);
    g_trace = NULL;
}

void recomp_trace_enter(u32 pc, const CpuCtx *c)
{
    int i;
    if (!g_trace) return;
    if (g_max_records && g_records >= g_max_records) {
        fprintf(g_trace, "# capped at %llu records "
                "(raise PSPRECO_TRACE_MAX to record more)\n", g_max_records);
        fclose(g_trace);
        g_trace = NULL;
        return;
    }
    g_records++;
    /* The thread id makes the stream separable: the cooperative scheduler
     * interleaves threads differently than hardware -- legitimately -- so the
     * comparator must split per thread first. */
    fprintf(g_trace, "tid=%d pc=0x%08x", threadman_trace_context(), pc);
    for (i = 1; i < 32; i++)
        fprintf(g_trace, " r%d=0x%08x", i, c->r[i]);
    fputc('\n', g_trace);
}
