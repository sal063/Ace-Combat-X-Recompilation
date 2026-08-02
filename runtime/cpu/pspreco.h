/* runtime/cpu/pspreco.h -- the contract the recompiled C compiles against.
 * Allegrex is little-endian, as are x86-64 and ARM64: no byte swapping anywhere. */

#ifndef PSPRECO_H
#define PSPRECO_H

#include <stdint.h>
#include <string.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef uint8_t  u8;
typedef uint16_t u16;
typedef uint32_t u32;
typedef uint64_t u64;
typedef int8_t   s8;
typedef int16_t  s16;
typedef int32_t  s32;
typedef int64_t  s64;
typedef float    f32;

/* ------------------------------------------------------------------ */
/* CPU state                                                           */
/* ------------------------------------------------------------------ */

/* Register numbering follows the o32 ABI. */
enum {
    R_ZERO = 0, R_AT, R_V0, R_V1, R_A0, R_A1, R_A2, R_A3,
    R_T0, R_T1, R_T2, R_T3, R_T4, R_T5, R_T6, R_T7,
    R_S0, R_S1, R_S2, R_S3, R_S4, R_S5, R_S6, R_S7,
    R_T8, R_T9, R_K0, R_K1, R_GP, R_SP, R_FP, R_RA
};

typedef struct CpuCtx {
    u32 r[32];        /* r[0] is hardwired zero; the emitter never writes it */
    u32 hi, lo;
    f32 f[32];        /* COP1 -- single precision only, PSP has no doubles   */
    u32 fcr31;
    u32 vfpu_cc;
    u32 v[128];       /* VFPU: 8 matrices of 4x4, kept bit-exact as u32      */
    u32 vpfxs, vpfxt, vpfxd;   /* prefix registers; see runtime/cpu/vfpu.c   */
    u32 pc;           /* only maintained at call and trap boundaries         */
} CpuCtx;

/* ------------------------------------------------------------------ */
/* Memory                                                              */
/* ------------------------------------------------------------------ */
/* Every guest address is masked with 0x1FFFFFFF into one flat host buffer,
 * collapsing the cached/uncached/kernel mirrors at one AND per access. */
#define PSP_ADDR_MASK 0x1FFFFFFFu
#define PSP_RAM_SIZE  0x20000000u   /* size of the flat window we allocate */
/* Where the kernel puts a user module, and so where the recompiled image
 * starts. Below it is the 16 KB gap the 60 FPS patch injects into. */
#define PSPRECO_MODULE_BASE 0x08804000u

#define MEM_U8(ram, a)   (*(u8  *)((ram) + ((a) & PSP_ADDR_MASK)))
#define MEM_U16(ram, a)  (*(u16 *)((ram) + ((a) & PSP_ADDR_MASK)))
#define MEM_U32(ram, a)  (*(u32 *)((ram) + ((a) & PSP_ADDR_MASK)))

static inline u32 mem_r8 (u8 *ram, u32 a) { return MEM_U8 (ram, a); }
static inline u32 mem_r16(u8 *ram, u32 a) { return MEM_U16(ram, a); }
static inline u32 mem_r32(u8 *ram, u32 a) { return MEM_U32(ram, a); }
static inline void mem_w8 (u8 *ram, u32 a, u32 v) { MEM_U8 (ram, a) = (u8)v; }
static inline void mem_w16(u8 *ram, u32 a, u32 v) { MEM_U16(ram, a) = (u16)v; }
static inline void mem_w32(u8 *ram, u32 a, u32 v) { MEM_U32(ram, a) = v; }

static inline f32 mem_rf32(u8 *ram, u32 a) {
    u32 t = MEM_U32(ram, a); f32 f; memcpy(&f, &t, 4); return f;
}
static inline void mem_wf32(u8 *ram, u32 a, f32 v) {
    u32 t; memcpy(&t, &v, 4); MEM_U32(ram, a) = t;
}

/* Unaligned lwl/lwr/swl/swr, little-endian MIPS semantics; centralized so the
 * shifting logic lives in one place. */
static inline u32 mem_lwl(u8 *ram, u32 a, u32 old) {
    u32 al = a & 3u, w = mem_r32(ram, a & ~3u);
    return (u32)((w << (8 * (3 - al))) | (old & ((1u << (8 * (3 - al))) - 1)));
}
static inline u32 mem_lwr(u8 *ram, u32 a, u32 old) {
    /* lwr replaces the LOW (4 - al) bytes and keeps the high `al`: keep-mask
     * is 0 at al == 0 and THREE bytes at al == 3. Getting the special case on
     * the wrong end shipped a bug that corrupted zlib inflate. */
    u32 al = a & 3u, w = mem_r32(ram, a & ~3u);
    u32 keep = (al == 0) ? 0u : (0xFFFFFFFFu << (8 * (4 - al)));
    return (w >> (8 * al)) | (old & keep);
}
static inline void mem_swl(u8 *ram, u32 a, u32 v) {
    u32 al = a & 3u, base = a & ~3u, w = mem_r32(ram, base);
    u32 keep = (al == 3) ? 0u : (0xFFFFFFFFu << (8 * (al + 1)));
    mem_w32(ram, base, (w & keep) | (v >> (8 * (3 - al))));
}
static inline void mem_swr(u8 *ram, u32 a, u32 v) {
    u32 al = a & 3u, base = a & ~3u, w = mem_r32(ram, base);
    u32 keep = (al == 0) ? 0u : ((1u << (8 * al)) - 1);
    mem_w32(ram, base, (w & keep) | (v << (8 * al)));
}

/* ------------------------------------------------------------------ */
/* Allegrex scalar extensions                                          */
/* ------------------------------------------------------------------ */
/* Ported from the Allegrex reference C (allegrex.h) rather than re-derived. */

static inline u32 alx_clz(u32 v) {
    u32 n = 0; if (!v) return 32;
    while (!(v & 0x80000000u)) { v <<= 1; n++; }
    return n;
}
static inline u32 alx_clo(u32 v) { return alx_clz(~v); }

static inline u32 alx_bitrev(u32 v) {
    v = ((v >> 1) & 0x55555555u) | ((v & 0x55555555u) << 1);
    v = ((v >> 2) & 0x33333333u) | ((v & 0x33333333u) << 2);
    v = ((v >> 4) & 0x0F0F0F0Fu) | ((v & 0x0F0F0F0Fu) << 4);
    v = ((v >> 8) & 0x00FF00FFu) | ((v & 0x00FF00FFu) << 8);
    return (v >> 16) | (v << 16);
}
/* wsbh: swap bytes within each halfword. */
static inline u32 alx_wsbh(u32 v) {
    return ((v & 0x00FF00FFu) << 8) | ((v >> 8) & 0x00FF00FFu);
}
/* wsbw: swap bytes within the word. */
static inline u32 alx_wsbw(u32 v) {
    return (v << 24) | ((v & 0xFF00u) << 8) | ((v >> 8) & 0xFF00u) | (v >> 24);
}
static inline u32 alx_seb(u32 v) { return (u32)(s32)(s8)(v & 0xFF); }
static inline u32 alx_seh(u32 v) { return (u32)(s32)(s16)(v & 0xFFFF); }

static inline u32 alx_rotr(u32 v, u32 s) {
    s &= 31u; return s ? ((v >> s) | (v << (32 - s))) : v;
}
/* max/min compare as SIGNED 32-bit. */
static inline u32 alx_max(u32 a, u32 b) { return ((s32)a < (s32)b) ? b : a; }
static inline u32 alx_min(u32 a, u32 b) { return ((s32)a < (s32)b) ? a : b; }

/* ext rt, rs, pos, size -- `msb` in the encoding is size-1. */
static inline u32 alx_ext(u32 rs_, u32 pos, u32 msb) {
    u32 size = msb + 1;
    if (size >= 32) return rs_ >> pos;
    return (rs_ >> pos) & ((1u << size) - 1u);
}
/* ins rt, rs, pos, size -- `msb` in the encoding is pos+size-1. */
static inline u32 alx_ins(u32 rt_, u32 rs_, u32 pos, u32 msb) {
    u32 size = (msb >= pos) ? (msb - pos + 1u) : 0u;
    u32 mask;
    if (!size) return rt_;
    mask = (size >= 32) ? 0xFFFFFFFFu : (((1u << size) - 1u) << pos);
    return (rt_ & ~mask) | ((rs_ << pos) & mask);
}

/* ------------------------------------------------------------------ */
/* Multiply / divide                                                   */
/* ------------------------------------------------------------------ */
/* div/divu by zero does not trap on Allegrex; HI/LO get the values real
 * hardware produces so traces stay comparable. */

static inline void alx_div(CpuCtx *c, u32 a, u32 b) {
    s32 x = (s32)a, y = (s32)b;
    if (y == 0) { c->lo = (x < 0) ? 1u : 0xFFFFFFFFu; c->hi = (u32)x; }
    else if (x == (s32)0x80000000 && y == -1) { c->lo = 0x80000000u; c->hi = 0; }
    else { c->lo = (u32)(x / y); c->hi = (u32)(x % y); }
}
static inline void alx_divu(CpuCtx *c, u32 a, u32 b) {
    if (b == 0) { c->lo = 0xFFFFFFFFu; c->hi = a; }
    else { c->lo = a / b; c->hi = a % b; }
}
static inline void alx_mult(CpuCtx *c, u32 a, u32 b) {
    s64 p = (s64)(s32)a * (s64)(s32)b;
    c->lo = (u32)p; c->hi = (u32)((u64)p >> 32);
}
static inline void alx_multu(CpuCtx *c, u32 a, u32 b) {
    u64 p = (u64)a * (u64)b;
    c->lo = (u32)p; c->hi = (u32)(p >> 32);
}
static inline void alx_madd(CpuCtx *c, u32 a, u32 b) {
    s64 acc = (s64)(((u64)c->hi << 32) | c->lo);
    acc += (s64)(s32)a * (s64)(s32)b;
    c->lo = (u32)acc; c->hi = (u32)((u64)acc >> 32);
}
static inline void alx_maddu(CpuCtx *c, u32 a, u32 b) {
    u64 acc = ((u64)c->hi << 32) | c->lo;
    acc += (u64)a * (u64)b;
    c->lo = (u32)acc; c->hi = (u32)(acc >> 32);
}
static inline void alx_msub(CpuCtx *c, u32 a, u32 b) {
    s64 acc = (s64)(((u64)c->hi << 32) | c->lo);
    acc -= (s64)(s32)a * (s64)(s32)b;
    c->lo = (u32)acc; c->hi = (u32)((u64)acc >> 32);
}
static inline void alx_msubu(CpuCtx *c, u32 a, u32 b) {
    u64 acc = ((u64)c->hi << 32) | c->lo;
    acc -= (u64)a * (u64)b;
    c->lo = (u32)acc; c->hi = (u32)(acc >> 32);
}

/* ------------------------------------------------------------------ */
/* COP1                                                                */
/* ------------------------------------------------------------------ */
#define FCR31_FS 0x01000000u   /* flush (denormals) bit */
#define FCR31_C  0x00800000u   /* condition bit         */

/* Thread-start value. No public SDK header states FCR31's reset value;
 * 0x00000E00 is what the PPSSPP oracle trace reports (low two bits 0 =
 * round-to-nearest, which is what alx_cvt_w_s cares about). */
#define BOOT_FCR31 0x00000E00u

static inline u32 f2u(f32 v) { u32 t; memcpy(&t, &v, 4); return t; }
static inline f32 u2f(u32 v) { f32 t; memcpy(&t, &v, 4); return t; }

void  cpu_set_host_fpu_mode(void);          /* installs FTZ + DAZ, RN */
s32   alx_cvt_w_s(CpuCtx *c, f32 v);        /* honours FCR31 rounding mode */
s32   alx_trunc_w_s(f32 v);
s32   alx_round_w_s(f32 v);
s32   alx_ceil_w_s(f32 v);
s32   alx_floor_w_s(f32 v);
void  alx_c_cond_s(CpuCtx *c, int cond, f32 a, f32 b);

/* ------------------------------------------------------------------ */
/* Traps, dispatch, HLE                                                */
/* ------------------------------------------------------------------ */
void recomp_break(CpuCtx *c, u8 *ram, u32 pc, u32 code);
void recomp_trap_unknown_indirect(CpuCtx *c, u8 *ram, u32 pc, u32 target);
void recomp_trap_unimplemented(CpuCtx *c, u8 *ram, u32 pc, const char *what);

typedef void (*RecompFn)(CpuCtx *c, u8 *ram);

/* Resolve a guest address to a recompiled function; traps loudly on a miss. */
RecompFn recomp_lookup(u32 addr);

/* runtime/hle/qol_input.c: wraps a few table-dispatched engine functions to
 * drive controls the PSP did not have.  Declared here rather than included
 * from cpu.c so the dispatcher keeps its function tables to itself; returns
 * NULL for every address that is not overridden, which is nearly all of them. */
RecompFn qol_override(u32 addr, RecompFn orig);
void     recomp_call_indirect(CpuCtx *c, u8 *ram, u32 pc, u32 target);

/* Import thunks live in .sceStub.text; a call to one becomes a call to the
 * HLE entry for that NID. */
void hle_dispatch_stub(CpuCtx *c, u8 *ram, u32 stub_addr);

/* ------------------------------------------------------------------ */
/* Differential trace                                                  */
/* ------------------------------------------------------------------ */
/* With -DPSPRECO_TRACE every recompiled function logs its entry state;
 * tools/tracecmp/tracecmp.py diffs the stream against a PPSSPP trace.
 * Function-entry granularity keeps logs MBs, not tens of GB. */
#ifdef PSPRECO_TRACE
void recomp_trace_enter(u32 pc, const CpuCtx *c);
void recomp_trace_open(const char *path);
void recomp_trace_close(void);
void recomp_trace_context(int tid, u32 stack_lo, u32 stack_hi,
                          const char *name);
#  define RECOMP_TRACE_ENTER(pc) recomp_trace_enter((pc), c)
#  define RECOMP_TRACE_CONTEXT(tid, lo, hi, nm) \
       recomp_trace_context((tid), (lo), (hi), (nm))
#else
#  define RECOMP_TRACE_ENTER(pc) ((void)0)
#  define RECOMP_TRACE_CONTEXT(tid, lo, hi, nm) ((void)0)
#endif

#ifdef __cplusplus
}
#endif
#endif /* PSPRECO_H */
