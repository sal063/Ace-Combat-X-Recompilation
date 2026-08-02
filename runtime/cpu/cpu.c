/* runtime/cpu/cpu.c -- scalar CPU support for the recompiled code. */

#include "pspreco.h"

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "../../generated/symbols.h"

/* ------------------------------------------------------------------ */
/* Host FPU mode                                                       */
/* ------------------------------------------------------------------ */
/* Allegrex flushes denormals to zero; without FTZ+DAZ on the host, the
 * game's physics drifts. */
#if defined(__x86_64__) || defined(_M_X64) || defined(__i386__) || defined(_M_IX86)
#  include <xmmintrin.h>
#  include <pmmintrin.h>
void cpu_set_host_fpu_mode(void)
{
    _MM_SET_FLUSH_ZERO_MODE(_MM_FLUSH_ZERO_ON);
    _MM_SET_DENORMALS_ZERO_MODE(_MM_DENORMALS_ZERO_ON);
    _MM_SET_ROUNDING_MODE(_MM_ROUND_NEAREST);
}
#elif defined(__aarch64__)
void cpu_set_host_fpu_mode(void)
{
    uint64_t fpcr;
    __asm__ __volatile__("mrs %0, fpcr" : "=r"(fpcr));
    fpcr |= (1u << 24);                 /* FZ */
    __asm__ __volatile__("msr fpcr, %0" : : "r"(fpcr));
}
#else
void cpu_set_host_fpu_mode(void) { }
#endif

/* ------------------------------------------------------------------ */
/* COP1 conversions                                                    */
/* ------------------------------------------------------------------ */
/* MIPS conversion to word saturates to 0x7FFFFFFF on overflow/NaN rather
 * than wrapping, which is what C's cast would do. */
static s32 clamp_w(double v)
{
    if (!(v >= -2147483648.0 && v <= 2147483647.0))
        return (s32)0x7FFFFFFF;
    return (s32)v;
}

s32 alx_trunc_w_s(f32 v) { return clamp_w(trunc((double)v)); }
s32 alx_round_w_s(f32 v) { return clamp_w(nearbyint((double)v)); }
s32 alx_ceil_w_s (f32 v) { return clamp_w(ceil((double)v)); }
s32 alx_floor_w_s(f32 v) { return clamp_w(floor((double)v)); }

s32 alx_cvt_w_s(CpuCtx *c, f32 v)
{
    switch (c->fcr31 & 3u) {
    case 0: return alx_round_w_s(v);   /* RN -- to nearest       */
    case 1: return alx_trunc_w_s(v);   /* RZ -- toward zero      */
    case 2: return alx_ceil_w_s(v);    /* RP -- toward +infinity */
    default: return alx_floor_w_s(v);  /* RM -- toward -infinity */
    }
}

/* c.cond.s writes the FCR31 condition bit. MIPS condition numbering:
 * bit0 unordered, bit1 equal, bit2 less-than, bit3 signals on NaN. */
void alx_c_cond_s(CpuCtx *c, int cond, f32 a, f32 b)
{
    int unordered = (isnan(a) || isnan(b));
    int less, equal, result;

    if (unordered) {
        less = 0;
        equal = 0;
    } else {
        less = (a < b);
        equal = (a == b);
    }
    result = (((cond & 4) && less)
              || ((cond & 2) && equal)
              || ((cond & 1) && unordered));

    if (result) c->fcr31 |= FCR31_C;
    else        c->fcr31 &= ~FCR31_C;
}

/* ------------------------------------------------------------------ */
/* Dispatch                                                            */
/* ------------------------------------------------------------------ */

/* g_func_addr holds real guest addresses (recomp runs at the kernel's load
 * base), so no translation happens here. */
RecompFn recomp_lookup(u32 addr)
{
    size_t lo = 0, hi = PSPRECO_FUNC_COUNT;

    /* Nothing the recompiler emitted lives below the module, so one range
     * test keeps a bad target off the binary search and out of the hot path. */
    if (addr < PSPRECO_MODULE_BASE)
        return NULL;

    while (lo < hi) {
        size_t mid = lo + (hi - lo) / 2;
        if (g_func_addr[mid] < addr) lo = mid + 1;
        else hi = mid;
    }
    if (lo < PSPRECO_FUNC_COUNT && g_func_addr[lo] == addr) {
        RecompFn fn = g_func_ptr[lo];
        /* Only indirect calls come through here, which is exactly why the
         * QOL input overrides attach to table-dispatched functions.  The
         * override learns the original from this same call. */
        RecompFn ov = qol_override(addr, fn);
        return ov ? ov : fn;
    }
    return NULL;
}

void recomp_call_indirect(CpuCtx *c, u8 *ram, u32 pc, u32 target)
{
    RecompFn fn = recomp_lookup(target);
    if (fn) { fn(c, ram); return; }
    recomp_trap_unknown_indirect(c, ram, pc, target);
}

/* ------------------------------------------------------------------ */
/* Traps                                                               */
/* ------------------------------------------------------------------ */
/* abort() flushes no stdio, and a traced run's whole value is the log tail
 * right before the trap: close the trace first. */
static void trace_flush_before_abort(void)
{
#ifdef PSPRECO_TRACE
    recomp_trace_close();
#endif
}

/* Trap loudly rather than crash; never silently stub anything. */

void recomp_break(CpuCtx *c, u8 *ram, u32 pc, u32 code)
{
    (void)c; (void)ram;
    fprintf(stderr, "[pspreco] BREAK at %08x, code %05x\n", pc, code);
    trace_flush_before_abort();
    abort();
}

void recomp_trap_unknown_indirect(CpuCtx *c, u8 *ram, u32 pc, u32 target)
{
    (void)c; (void)ram;
    fprintf(stderr,
            "[pspreco] UNKNOWN INDIRECT TARGET %08x from %08x\n", target, pc);
    trace_flush_before_abort();
    abort();
}

void recomp_trap_unimplemented(CpuCtx *c, u8 *ram, u32 pc, const char *what)
{
    (void)c; (void)ram;
    fprintf(stderr, "[pspreco] UNIMPLEMENTED %s at %08x\n", what, pc);
    trace_flush_before_abort();
    abort();
}
