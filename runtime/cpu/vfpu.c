/* runtime/cpu/vfpu.c -- the VFPU. One word-dispatched entry point keeps the
 * prefix state machine (the #1 source of VFPU bugs) in one auditable place.
 *
 * Decode comes from generated/vfpu_decode.c (built from docs/vfpu_table.json),
 * so runtime and disassembler cannot disagree. Semantics port the VFPU users
 * manual's reference C literally. Per the manual, the prefix stack is one
 * entry deep, popped after decorating one instruction, and NOT consumed by
 * branch/mfv/mtv/lv/sv/vpfx/vsync/vnop/vflush/vsync2 -- that scope is what
 * makes `vpfxs` / `lv.q` / `vadd.q` work.
 */

#include "pspreco.h"
#include "../../generated/vfpu_ops.h"

#include <math.h>
#include <stdio.h>
#include <stdlib.h>

/* ------------------------------------------------------------------ */
/* Word fields                                                         */
/* ------------------------------------------------------------------ */
#define VD(w)    ((int)((w) >> 0) & 0x7F)
#define VS(w)    ((int)((w) >> 8) & 0x7F)
#define VT(w)    ((int)((w) >> 16) & 0x7F)
#define RS(w)    ((int)(((w) >> 21) & 0x1F))
#define RT(w)    ((int)(((w) >> 16) & 0x1F))
#define IMM16(w) ((int)((s16)(u16)((w) & 0xFFFF)))
#define IMM5(w)  ((int)(((w) >> 16) & 0x1F))
#define IMM3(w)  ((int)(((w) >> 18) & 0x07))

/* vt for lv.q/sv.q is 7 bits split: [6:0] = bits 16..20 plus bit 0. */
#define VT_LSQ(w) ((int)((((w) >> 16) & 0x1F) | (((w) & 1) << 5)))

typedef enum {
    SZ_SINGLE = 0, SZ_PAIR, SZ_TRIPLE, SZ_QUAD,
    SZ_PXP, SZ_TXT, SZ_QXQ
} DataSize;

/* ------------------------------------------------------------------ */
/* ReadMatrix / WriteMatrix -- ported literally from the users manual  */
/* ------------------------------------------------------------------ */
/* MRF[] is CpuCtx.v[], held as u32 so NaN payloads survive copies; only
 * the arithmetic paths reinterpret it as float. */

static void mrf_shape(DataSize size, int code,
                      int *mtx, int *idx, int *rxc, int *fsl, int *r, int *c)
{
    *mtx = (code >> 2) & 7;
    switch (size) {
    case SZ_SINGLE:
        *rxc = 0; *idx = (code >> 0) & 3; *fsl = (code >> 5) & 3;
        *r = 1; *c = 1; break;
    case SZ_PAIR:
        *rxc = (code >> 5) & 1; *idx = (code >> 0) & 3;
        *fsl = (code >> 5) & 2;
        *r = (*rxc == 0) ? 2 : 1; *c = (*rxc != 0) ? 2 : 1; break;
    case SZ_TRIPLE:
        *rxc = (code >> 5) & 1; *idx = (code >> 0) & 3;
        *fsl = (code >> 6) & 1;
        *r = (*rxc == 0) ? 3 : 1; *c = (*rxc != 0) ? 3 : 1; break;
    case SZ_QUAD:
        *rxc = (code >> 5) & 1; *idx = (code >> 0) & 3;
        *fsl = (code >> 5) & 2;
        *r = (*rxc == 0) ? 4 : 1; *c = (*rxc != 0) ? 4 : 1; break;
    case SZ_PXP:
        *rxc = ((code >> 5) & 1) ^ 1; *fsl = (code >> 0) & 3;
        *idx = (code >> 5) & 2; *r = 2; *c = 2; break;
    case SZ_TXT:
        *rxc = ((code >> 5) & 1) ^ 1; *fsl = (code >> 0) & 3;
        *idx = (code >> 6) & 1; *r = 3; *c = 3; break;
    default: /* SZ_QXQ */
        *rxc = ((code >> 5) & 1) ^ 1; *fsl = (code >> 0) & 3;
        *idx = (code >> 5) & 2; *r = 4; *c = 4; break;
    }
}

/* MRF index for element (i, j); factored out of the manual's two loop bodies. */
static int mrf_at(int rxc, int mtx, int idx, int fsl, int i, int j)
{
    if (rxc)
        return mtx * 4 + ((fsl + j) % 4) + ((idx + i) % 4) * 32;
    return mtx * 4 + ((idx + j) % 4) + ((fsl + i) % 4) * 32;
}

/* `rd` is a 16-slot buffer; rows are 4 apart, as in the manual. */
static void read_matrix(const CpuCtx *c, u32 *rd, DataSize size, int code)
{
    int mtx, idx, rxc, fsl, r, cc, i, j, k = 0;
    mrf_shape(size, code, &mtx, &idx, &rxc, &fsl, &r, &cc);
    if (rxc) {
        for (i = 0; i < r; i++) {
            for (j = 0; j < cc; j++)
                rd[k + j] = c->v[mrf_at(1, mtx, idx, fsl, i, j)];
            k += 4;
        }
    } else {
        for (j = 0; j < cc; j++) {
            for (i = 0; i < r; i++)
                rd[k + i] = c->v[mrf_at(0, mtx, idx, fsl, i, j)];
            k += 4;
        }
    }
}

/* `wm` is the write mask: non-zero suppresses the write. The manual's own
 * listing indexes wd[k+j] in BOTH loops -- a documentation defect; the column
 * loop must use wd[k+i] (matching the read side) or a column write of a 4D
 * vector stores element 0 four times. */
static void write_matrix(CpuCtx *c, const u32 *wd, const int *wm,
                         DataSize size, int code)
{
    int mtx, idx, rxc, fsl, r, cc, i, j, k = 0;
    mrf_shape(size, code, &mtx, &idx, &rxc, &fsl, &r, &cc);
    if (rxc) {
        for (i = 0; i < r; i++) {
            for (j = 0; j < cc; j++) {
                int e = mrf_at(1, mtx, idx, fsl, i, j);
                if (!wm[k + j]) c->v[e] = wd[k + j];
            }
            k += 4;
        }
    } else {
        for (j = 0; j < cc; j++) {
            for (i = 0; i < r; i++) {
                int e = mrf_at(0, mtx, idx, fsl, i, j);
                if (!wm[k + i]) c->v[e] = wd[k + i];
            }
            k += 4;
        }
    }
}

/* ------------------------------------------------------------------ */
/* Prefixes                                                            */
/* ------------------------------------------------------------------ */
/* Source/target prefix word: per element i, swz = (imm >> 2i) & 3, abs bit
 * 8+i, cst bit 12+i, neg bit 16+i; PrefixCST's constant-table selector is
 * (cst << 3) | (abs << 2) | swz. Destination word: sat = (imm >> 2i) & 3,
 * msk bit 8+i. */

/* prefix constant table */
static const f32 k_cst[8] = {
    0.0f, 1.0f, 2.0f, 1.0f / 2.0f, 3.0f, 1.0f / 3.0f, 1.0f / 4.0f, 1.0f / 6.0f
};

static void apply_src_prefix(u32 *val, int n, u32 pfx)
{
    u32 in[4];
    int i;
    for (i = 0; i < 4; i++) in[i] = (i < n) ? val[i] : 0u;
    for (i = 0; i < n; i++) {
        int swz = (int)((pfx >> (2 * i)) & 3u);
        int abs = (int)((pfx >> (8 + i)) & 1u);
        int cst = (int)((pfx >> (12 + i)) & 1u);
        int neg = (int)((pfx >> (16 + i)) & 1u);
        f32 x;
        if (cst) {
            x = k_cst[((abs << 2) | swz) & 7];
        } else {
            x = u2f(in[swz]);
            if (abs) x = fabsf(x);
        }
        if (neg) x = -x;
        val[i] = f2u(x);
    }
}

/* Saturation codes 0, 1 and 3; 2 is undefined and leaves the value alone. */
static void apply_dst_prefix(u32 *val, int *msk, int n, u32 pfx)
{
    int i;
    for (i = 0; i < n; i++) {
        int sat = (int)((pfx >> (2 * i)) & 3u);
        f32 x = u2f(val[i]);
        if (sat == 1)      x = (x > 1.0f) ? 1.0f : (x < 0.0f) ? 0.0f : x;
        else if (sat == 3) x = (x > 1.0f) ? 1.0f : (x < -1.0f) ? -1.0f : x;
        if (sat == 1 || sat == 3) val[i] = f2u(x);
        msk[i] = (int)((pfx >> (8 + i)) & 1u);
    }
    for (; i < 16; i++) msk[i] = 0;
}

/* Identity source prefix 0xE4 = swizzle x,y,z,w with no abs/cst/neg; also
 * the reset value the kernel restores on a context switch. */
#define PFX_IDENTITY_ST 0x000E4u
#define PFX_IDENTITY_D  0x00000u

/* ------------------------------------------------------------------ */
/* Helpers                                                             */
/* ------------------------------------------------------------------ */

static int size_elems(DataSize s)
{
    switch (s) {
    case SZ_SINGLE: return 1;
    case SZ_PAIR:   return 2;
    case SZ_TRIPLE: return 3;
    case SZ_QUAD:   return 4;
    default:        return 0;      /* matrix forms handle their own shape */
    }
}

/* Read a source/target operand with its prefix applied. */
static void read_src(CpuCtx *c, u32 *dst, DataSize sz, int code, u32 pfx)
{
    read_matrix(c, dst, sz, code);
    apply_src_prefix(dst, size_elems(sz), pfx);
}

/* Write a result with the destination prefix applied. All three prefix
 * stacks are cleared even when unused by this form. */
static void write_dst(CpuCtx *c, u32 *val, DataSize sz, int code)
{
    int msk[16];
    apply_dst_prefix(val, msk, size_elems(sz), c->vpfxd);
    write_matrix(c, val, msk, sz, code);
}

static void pop_prefixes(CpuCtx *c)
{
    c->vpfxs = PFX_IDENTITY_ST;
    c->vpfxt = PFX_IDENTITY_ST;
    c->vpfxd = PFX_IDENTITY_D;
}

void vfpu_reset(CpuCtx *c)
{
    int i;
    for (i = 0; i < 128; i++) c->v[i] = 0u;
    c->vfpu_cc = 0u;
    pop_prefixes(c);
}

static void vfpu_unimplemented(CpuCtx *c, u32 word, VfpuOp op)
{
    (void)c;
    fprintf(stderr,
            "[pspreco] UNIMPLEMENTED VFPU %s (word %08x)\n"
            "          decode is complete (docs/vfpu_table.json); this form's "
            "semantics are not written yet.\n",
            vfpu_op_name(op), word);
    abort();
}

/* ------------------------------------------------------------------ */
/* Elementwise and reduction kernels                                   */
/* ------------------------------------------------------------------ */
/* The host FPU runs FTZ+DAZ to match Allegrex (cpu_set_host_fpu_mode), so
 * plain C float arithmetic is the right primitive. */

typedef enum { OP_ADD, OP_SUB, OP_MUL, OP_DIV, OP_MIN, OP_MAX } BinOp;

static f32 bin_apply(BinOp op, f32 a, f32 b)
{
    switch (op) {
    case OP_ADD: return a + b;
    case OP_SUB: return a - b;
    case OP_MUL: return a * b;
    case OP_DIV: return a / b;
    case OP_MIN: return (a < b) ? a : b;
    default:     return (a > b) ? a : b;
    }
}

static void do_binary(CpuCtx *c, u32 w, DataSize sz, BinOp op)
{
    u32 s[16], t[16], d[16];
    int n = size_elems(sz), i;
    read_src(c, s, sz, VS(w), c->vpfxs);
    read_src(c, t, sz, VT(w), c->vpfxt);
    for (i = 0; i < n; i++)
        d[i] = f2u(bin_apply(op, u2f(s[i]), u2f(t[i])));
    write_dst(c, d, sz, VD(w));
}

/* vscl.* : every element of the vector times the scalar in vt. */
static void do_scale(CpuCtx *c, u32 w, DataSize sz)
{
    u32 s[16], t[16], d[16];
    int n = size_elems(sz), i;
    f32 k;
    read_src(c, s, sz, VS(w), c->vpfxs);
    read_src(c, t, SZ_SINGLE, VT(w), c->vpfxt);
    k = u2f(t[0]);
    for (i = 0; i < n; i++) d[i] = f2u(u2f(s[i]) * k);
    write_dst(c, d, sz, VD(w));
}

/* vdot.* : sum of products, written as a single element. */
static void do_dot(CpuCtx *c, u32 w, DataSize sz)
{
    u32 s[16], t[16], d[16];
    int n = size_elems(sz), i;
    f32 acc = 0.0f;
    read_src(c, s, sz, VS(w), c->vpfxs);
    read_src(c, t, sz, VT(w), c->vpfxt);
    for (i = 0; i < n; i++) acc += u2f(s[i]) * u2f(t[i]);
    d[0] = f2u(acc);
    write_dst(c, d, SZ_SINGLE, VD(w));
}

typedef enum {
    UN_MOV, UN_ABS, UN_NEG, UN_RCP, UN_RSQ, UN_SIN, UN_COS, UN_SQRT,
    UN_SAT0, UN_SAT1, UN_OCP
} UnOp;

/* vsin/vcos take HALF-REVOLUTIONS, not radians: the operand is multiplied
 * by pi/2. */
#define VFPU_HALF_PI 1.57079632679489661923f

static f32 un_apply(UnOp op, f32 x)
{
    switch (op) {
    case UN_MOV:  return x;
    case UN_ABS:  return fabsf(x);
    case UN_NEG:  return -x;
    case UN_RCP:  return 1.0f / x;
    case UN_RSQ:  return 1.0f / sqrtf(x);
    case UN_SIN:  return sinf(x * VFPU_HALF_PI);
    case UN_COS:  return cosf(x * VFPU_HALF_PI);
    case UN_SQRT: return sqrtf(x);
    case UN_SAT0: return (x > 1.0f) ? 1.0f : (x < 0.0f) ? 0.0f : x;
    case UN_SAT1: return (x > 1.0f) ? 1.0f : (x < -1.0f) ? -1.0f : x;
    default:      return 1.0f - x;                  /* UN_OCP: one's complement */
    }
}

static void do_unary(CpuCtx *c, u32 w, DataSize sz, UnOp op)
{
    u32 s[16], d[16];
    int n = size_elems(sz), i;
    read_src(c, s, sz, VS(w), c->vpfxs);
    for (i = 0; i < n; i++) d[i] = f2u(un_apply(op, u2f(s[i])));
    write_dst(c, d, sz, VD(w));
}

/* Constant generators: vzero/vone/vidt/vmidt/vmzero. */
static void do_fill(CpuCtx *c, u32 w, DataSize sz, f32 k)
{
    u32 d[16];
    int n = size_elems(sz), i;
    for (i = 0; i < n; i++) d[i] = f2u(k);
    write_dst(c, d, sz, VD(w));
}

/* vidt.* : the identity vector -- 1.0 in the element the operand's `idx`
 * selects, 0.0 elsewhere. */
static void do_vidt(CpuCtx *c, u32 w, DataSize sz)
{
    u32 d[16];
    int n = size_elems(sz), i;
    int one = VD(w) & (n - 1);
    for (i = 0; i < n; i++) d[i] = f2u((i == one) ? 1.0f : 0.0f);
    write_dst(c, d, sz, VD(w));
}

/* Matrix fill: vmidt.q writes the 4x4 identity, vmzero.q writes zeros. */
static void do_matrix_fill(CpuCtx *c, u32 w, int n, int identity)
{
    DataSize sz = (n == 4) ? SZ_QXQ : (n == 3) ? SZ_TXT : SZ_PXP;
    u32 d[16];
    int msk[16];
    int i, j;
    for (i = 0; i < 16; i++) { d[i] = f2u(0.0f); msk[i] = 0; }
    for (i = 0; i < n; i++)
        for (j = 0; j < n; j++)
            d[i * 4 + j] = f2u((identity && i == j) ? 1.0f : 0.0f);
    write_matrix(c, d, msk, sz, VD(w));
}

/* Matrix-operand element address for the vmmul/vtfm family (fuzz-verified
 * against hardware traces): element (row r, col c) of matrix m lives at
 * v[m*4 + c + r*32]. `j` walks columns, `i` rows; the transpose bit swaps
 * their roles. */
static int mreg_at(int reg, int side, int j, int i)
{
    int mtx = (reg >> 2) & 7, col = reg & 3, transpose = (reg >> 5) & 1, row;
    if (side == 3) row = (reg >> 6) & 1;
    else row = (reg >> 5) & 2;
    if (transpose)
        return mtx * 4 + ((row + i) & 3) + ((col + j) & 3) * 32;
    return mtx * 4 + ((col + j) & 3) + ((row + i) & 3) * 32;
}

/* Vector-operand element address (same mapping). */
static int vreg_at(int reg, int size, int k)
{
    int mtx = (reg >> 2) & 7, col = reg & 3, transpose = (reg >> 5) & 1, row;
    if (size == 1) { transpose = 0; row = (reg >> 5) & 3; }
    else if (size == 3) row = (reg >> 6) & 1;
    else row = (reg >> 5) & 2;
    if (transpose)
        return mtx * 4 + ((row + k) & 3) + col * 32;
    return mtx * 4 + col + ((row + k) & 3) * 32;
}

/* vmmul : D = S^T * T -- the hardware multiplies the vs operand TRANSPOSED
 * (fuzz-verified): dot columns of S with columns of T. */
static void do_vmmul(CpuCtx *c, u32 w, int n)
{
    u32 r[16];
    int a, b, k;
    for (a = 0; a < n; a++)
        for (b = 0; b < n; b++) {
            f32 acc = 0.0f;
            for (k = 0; k < n; k++)
                acc += u2f(c->v[mreg_at(VS(w), n, b, k)])
                     * u2f(c->v[mreg_at(VT(w), n, a, k)]);
            r[a * 4 + b] = f2u(acc);
        }
    for (a = 0; a < n; a++)
        for (b = 0; b < n; b++)
            c->v[mreg_at(VD(w), n, a, b)] = r[a * 4 + b];
}

/* vtfm2/3/4, vhtfm2/3/4 : vector-by-matrix transform; `ins` = matrix side
 * minus one. In the vhtfm forms the vector is one element short and the
 * missing element is an implied 1.0 (the matrix's last column is added in). */
static void do_vtfm(CpuCtx *c, u32 w, int ins)
{
    int n = (int)(((w >> 7) & 1u) | ((w >> 14) & 2u)) + 1;   /* vector size */
    int side = ins + 1;
    int tn = (n < side) ? n : side;
    u32 r[4];
    int i, k;
    for (i = 0; i < side; i++) {
        f32 acc = 0.0f;
        for (k = 0; k < tn; k++)
            acc += u2f(c->v[mreg_at(VS(w), side, i, k)])
                 * u2f(c->v[vreg_at(VT(w), side, k)]);
        if (ins >= n)
            acc += u2f(c->v[mreg_at(VS(w), side, i, ins)]);
        r[i] = f2u(acc);
    }
    for (i = 0; i < side; i++)
        c->v[vreg_at(VD(w), side, i)] = r[i];
}

/* vcrsp.t : the 3D cross product. */
static void do_vcrsp(CpuCtx *c, u32 w)
{
    u32 s[16], t[16], d[16];
    f32 sx, sy, sz_, tx, ty, tz;
    read_src(c, s, SZ_TRIPLE, VS(w), c->vpfxs);
    read_src(c, t, SZ_TRIPLE, VT(w), c->vpfxt);
    sx = u2f(s[0]); sy = u2f(s[1]); sz_ = u2f(s[2]);
    tx = u2f(t[0]); ty = u2f(t[1]); tz = u2f(t[2]);
    d[0] = f2u(sy * tz - sz_ * ty);
    d[1] = f2u(sz_ * tx - sx * tz);
    d[2] = f2u(sx * ty - sy * tx);
    write_dst(c, d, SZ_TRIPLE, VD(w));
}

/* vrot.p/.t/.q : imm5 bits [3:2] pick the SINE lane, bits [1:0] the COSINE
 * lane, bit 4 negates the sine; when the two lanes coincide EVERY lane gets
 * the sine (the cosine then overwrites the shared lane). vd/vs overlap quirk:
 * if the angle register is a destination register, the cosine is recomputed
 * from the just-written sine value. */
static void do_vrot(CpuCtx *c, u32 w, DataSize sz)
{
    u32 s[16], d[16];
    int n = size_elems(sz), i;
    int imm = IMM5(w);
    int sl = (imm >> 2) & 3, cl = imm & 3;
    int vd = VD(w), vs = VS(w);
    f32 a, sv, cv;

    read_src(c, s, SZ_SINGLE, vs, c->vpfxs);
    a = u2f(s[0]) * VFPU_HALF_PI;
    sv = sinf(a);
    cv = cosf(a);
    if (imm & 0x10) sv = -sv;
    for (i = 0; i < n; i++) d[i] = f2u(0.0f);
    if (sl == cl) {
        for (i = 0; i < n; i++) d[i] = f2u(sv);
    } else {
        d[sl] = f2u(sv);
    }
    d[cl] = f2u(cv);
    if (((vd >> 2) & 7) == ((vs >> 2) & 7)) {
        /* Overlap compares register NUMBERS, not physical indices. */
        int mtx = (vd >> 2) & 7, col = vd & 3, row;
        if (n == 3) row = (vd >> 6) & 1;
        else row = (vd >> 5) & 2;
        for (i = 0; i < n; i++) {
            int r = (mtx << 2) | col | (((row + i) & 3) << 5);
            if (vs == r) {
                d[cl] = f2u(cosf(u2f(d[i]) * VFPU_HALF_PI));
                break;
            }
        }
    }
    write_dst(c, d, sz, VD(w));
}

/* vcmp.* : VFPU_CC gets one bit per element, bit 4 the OR, bit 5 the AND. */
static void do_vcmp(CpuCtx *c, u32 w, DataSize sz)
{
    u32 s[16], t[16];
    int n = size_elems(sz), i;
    int cond = (int)(w & 0xF);
    u32 cc = 0;
    int all = 1, any = 0;

    read_src(c, s, sz, VS(w), c->vpfxs);
    read_src(c, t, sz, VT(w), c->vpfxt);
    for (i = 0; i < n; i++) {
        f32 a = u2f(s[i]), b = u2f(t[i]);
        int r;
        switch (cond) {
        case 0:  r = 0;                          break;  /* FL */
        case 1:  r = (a == b);                   break;  /* EQ */
        case 2:  r = (a < b);                    break;  /* LT */
        case 3:  r = (a <= b);                   break;  /* LE */
        case 4:  r = 1;                          break;  /* TR */
        case 5:  r = (a != b);                   break;  /* NE */
        case 6:  r = (a >= b);                   break;  /* GE */
        case 7:  r = (a > b);                    break;  /* GT */
        /* Unary forms test vs only. */
        case 8:  r = (a == 0.0f);                break;  /* EZ */
        case 9:  r = isnan(a);                   break;  /* EN */
        case 10: r = isinf(a);                   break;  /* EI */
        case 11: r = isnan(a) || isinf(a);       break;  /* ES */
        case 12: r = (a != 0.0f);                break;  /* NZ */
        case 13: r = !isnan(a);                  break;  /* NN */
        case 14: r = !isinf(a);                  break;  /* NI */
        default: r = !(isnan(a) || isinf(a));    break;  /* NS */
        }
        if (r) { cc |= (1u << i); any = 1; } else { all = 0; }
    }
    if (any) cc |= (1u << 4);
    if (all) cc |= (1u << 5);
    /* Only the touched lanes plus the OR/AND bits update; the other CC bits
     * keep their previous values. */
    {
        u32 aff = (u32)((1u << n) - 1u) | (1u << 4) | (1u << 5);
        c->vfpu_cc = (c->vfpu_cc & ~aff) | (cc & aff);
    }
}

/* vcmovt.s / vcmovf.s : conditional move driven by VFPU_CC. imm3 == 6 means
 * "use each element's own bit"; otherwise it names one bit for all of them. */
static void do_vcmov(CpuCtx *c, u32 w, DataSize sz, int want)
{
    u32 s[16], d[16];
    int n = size_elems(sz), i;
    int sel = IMM3(w);
    read_src(c, s, sz, VS(w), c->vpfxs);
    read_matrix(c, d, sz, VD(w));
    for (i = 0; i < n; i++) {
        int bit = (sel == 6) ? (int)((c->vfpu_cc >> i) & 1u)
                             : (int)((c->vfpu_cc >> sel) & 1u);
        if (bit == want) d[i] = s[i];
    }
    write_dst(c, d, sz, VD(w));
}

/* ------------------------------------------------------------------ */
/* Loads and stores                                                    */
/* ------------------------------------------------------------------ */
/* The load and store forms never consume a prefix. */

/* lv.s/sv.s: the register is the 5-bit vt field plus the offset's low TWO
 * bits as the high (row) bits; the displacement is imm16 with those bits
 * cleared. The plain 7-bit vt field is wrong twice: it drops the row bits
 * and swallows base-register bits. */
#define VT_LSS(w) ((int)((((w) >> 16) & 0x1F) | (((w) & 3) << 5)))

static void do_lv_s(CpuCtx *c, u8 *ram, u32 w)
{
    u32 addr = c->r[RS(w)] + (u32)(IMM16(w) & ~3);
    c->v[VT_LSS(w)] = mem_r32(ram, addr);
}

static void do_sv_s(CpuCtx *c, u8 *ram, u32 w)
{
    u32 addr = c->r[RS(w)] + (u32)(IMM16(w) & ~3);
    mem_w32(ram, addr, c->v[VT_LSS(w)]);
}

/* lv.q/sv.q: displacement is (imm16 & ~3); the register number carries a
 * sixth bit in word bit 0. */
static void do_lv_q(CpuCtx *c, u8 *ram, u32 w)
{
    u32 addr = c->r[RS(w)] + (u32)(IMM16(w) & ~3);
    u32 d[16];
    int msk[16];
    int i;
    for (i = 0; i < 4; i++) { d[i] = mem_r32(ram, addr + 4u * (u32)i); msk[i] = 0; }
    write_matrix(c, d, msk, SZ_QUAD, VT_LSQ(w));
}

static void do_sv_q(CpuCtx *c, u8 *ram, u32 w)
{
    u32 addr = c->r[RS(w)] + (u32)(IMM16(w) & ~3);
    u32 s[16];
    int i;
    read_matrix(c, s, SZ_QUAD, VT_LSQ(w));
    for (i = 0; i < 4; i++) mem_w32(ram, addr + 4u * (u32)i, s[i]);
}

/* ------------------------------------------------------------------ */
/* Dispatch                                                            */
/* ------------------------------------------------------------------ */

void vfpu_exec(CpuCtx *c, u8 *ram, u32 word)
{
    VfpuOp op = vfpu_decode(word);
    int consumes_prefix = 1;

    switch (op) {

    /* -- prefix pushes: do not consume the stacks -------------------- */
    case VOP_VPFXS: c->vpfxs = word & 0x00FFFFFFu; consumes_prefix = 0; break;
    case VOP_VPFXT: c->vpfxt = word & 0x00FFFFFFu; consumes_prefix = 0; break;
    case VOP_VPFXD: c->vpfxd = word & 0x00FFFFFFu; consumes_prefix = 0; break;

    /* -- loads and stores: likewise ---------------------------------- */
    case VOP_LV_S: do_lv_s(c, ram, word); consumes_prefix = 0; break;
    case VOP_SV_S: do_sv_s(c, ram, word); consumes_prefix = 0; break;
    case VOP_LV_Q: do_lv_q(c, ram, word); consumes_prefix = 0; break;
    case VOP_SV_Q: do_sv_q(c, ram, word); consumes_prefix = 0; break;

    /* -- CPU <-> VFPU transfer: likewise ----------------------------- */
    case VOP_MTV: c->v[VD(word) & 0x7F] = c->r[RT(word)];
                  consumes_prefix = 0; break;
    case VOP_MFV: c->r[RT(word)] = c->v[VD(word) & 0x7F];
                  consumes_prefix = 0; break;

    /* -- arithmetic -------------------------------------------------- */
    case VOP_VADD_S: do_binary(c, word, SZ_SINGLE, OP_ADD); break;
    case VOP_VADD_P: do_binary(c, word, SZ_PAIR,   OP_ADD); break;
    case VOP_VADD_T: do_binary(c, word, SZ_TRIPLE, OP_ADD); break;
    case VOP_VADD_Q: do_binary(c, word, SZ_QUAD,   OP_ADD); break;
    case VOP_VSUB_S: do_binary(c, word, SZ_SINGLE, OP_SUB); break;
    case VOP_VSUB_P: do_binary(c, word, SZ_PAIR,   OP_SUB); break;
    case VOP_VSUB_T: do_binary(c, word, SZ_TRIPLE, OP_SUB); break;
    case VOP_VSUB_Q: do_binary(c, word, SZ_QUAD,   OP_SUB); break;
    case VOP_VMUL_S: do_binary(c, word, SZ_SINGLE, OP_MUL); break;
    case VOP_VMUL_P: do_binary(c, word, SZ_PAIR,   OP_MUL); break;
    case VOP_VMUL_T: do_binary(c, word, SZ_TRIPLE, OP_MUL); break;
    case VOP_VMUL_Q: do_binary(c, word, SZ_QUAD,   OP_MUL); break;
    /* vdiv exists in scalar form only. */
    case VOP_VDIV_S: do_binary(c, word, SZ_SINGLE, OP_DIV); break;
    case VOP_VMIN_S: do_binary(c, word, SZ_SINGLE, OP_MIN); break;
    case VOP_VMIN_P: do_binary(c, word, SZ_PAIR,   OP_MIN); break;
    case VOP_VMIN_T: do_binary(c, word, SZ_TRIPLE, OP_MIN); break;
    case VOP_VMIN_Q: do_binary(c, word, SZ_QUAD,   OP_MIN); break;
    case VOP_VMAX_S: do_binary(c, word, SZ_SINGLE, OP_MAX); break;
    case VOP_VMAX_P: do_binary(c, word, SZ_PAIR,   OP_MAX); break;
    case VOP_VMAX_T: do_binary(c, word, SZ_TRIPLE, OP_MAX); break;
    case VOP_VMAX_Q: do_binary(c, word, SZ_QUAD,   OP_MAX); break;

    case VOP_VSCL_P: do_scale(c, word, SZ_PAIR);   break;
    case VOP_VSCL_T: do_scale(c, word, SZ_TRIPLE); break;
    case VOP_VSCL_Q: do_scale(c, word, SZ_QUAD);   break;

    case VOP_VDOT_P: do_dot(c, word, SZ_PAIR);   break;
    case VOP_VDOT_T: do_dot(c, word, SZ_TRIPLE); break;
    case VOP_VDOT_Q: do_dot(c, word, SZ_QUAD);   break;

    /* -- unary ------------------------------------------------------- */
    case VOP_VMOV_S: do_unary(c, word, SZ_SINGLE, UN_MOV); break;
    case VOP_VMOV_P: do_unary(c, word, SZ_PAIR,   UN_MOV); break;
    case VOP_VMOV_T: do_unary(c, word, SZ_TRIPLE, UN_MOV); break;
    case VOP_VMOV_Q: do_unary(c, word, SZ_QUAD,   UN_MOV); break;
    case VOP_VABS_S: do_unary(c, word, SZ_SINGLE, UN_ABS); break;
    case VOP_VABS_P: do_unary(c, word, SZ_PAIR,   UN_ABS); break;
    case VOP_VABS_T: do_unary(c, word, SZ_TRIPLE, UN_ABS); break;
    case VOP_VABS_Q: do_unary(c, word, SZ_QUAD,   UN_ABS); break;
    case VOP_VNEG_S: do_unary(c, word, SZ_SINGLE, UN_NEG); break;
    case VOP_VNEG_P: do_unary(c, word, SZ_PAIR,   UN_NEG); break;
    case VOP_VNEG_T: do_unary(c, word, SZ_TRIPLE, UN_NEG); break;
    case VOP_VNEG_Q: do_unary(c, word, SZ_QUAD,   UN_NEG); break;
    case VOP_VRCP_S: do_unary(c, word, SZ_SINGLE, UN_RCP); break;
    case VOP_VRCP_P: do_unary(c, word, SZ_PAIR,   UN_RCP); break;
    case VOP_VRCP_T: do_unary(c, word, SZ_TRIPLE, UN_RCP); break;
    case VOP_VRCP_Q: do_unary(c, word, SZ_QUAD,   UN_RCP); break;
    case VOP_VRSQ_S: do_unary(c, word, SZ_SINGLE, UN_RSQ); break;
    case VOP_VRSQ_P: do_unary(c, word, SZ_PAIR,   UN_RSQ); break;
    case VOP_VRSQ_T: do_unary(c, word, SZ_TRIPLE, UN_RSQ); break;
    case VOP_VRSQ_Q: do_unary(c, word, SZ_QUAD,   UN_RSQ); break;
    case VOP_VSIN_S: do_unary(c, word, SZ_SINGLE, UN_SIN); break;
    case VOP_VSIN_P: do_unary(c, word, SZ_PAIR,   UN_SIN); break;
    case VOP_VSIN_T: do_unary(c, word, SZ_TRIPLE, UN_SIN); break;
    case VOP_VSIN_Q: do_unary(c, word, SZ_QUAD,   UN_SIN); break;
    case VOP_VCOS_S: do_unary(c, word, SZ_SINGLE, UN_COS); break;
    case VOP_VCOS_P: do_unary(c, word, SZ_PAIR,   UN_COS); break;
    case VOP_VCOS_T: do_unary(c, word, SZ_TRIPLE, UN_COS); break;
    case VOP_VCOS_Q: do_unary(c, word, SZ_QUAD,   UN_COS); break;
    case VOP_VSQRT_S: do_unary(c, word, SZ_SINGLE, UN_SQRT); break;
    case VOP_VSQRT_P: do_unary(c, word, SZ_PAIR,   UN_SQRT); break;
    case VOP_VSQRT_T: do_unary(c, word, SZ_TRIPLE, UN_SQRT); break;
    case VOP_VSQRT_Q: do_unary(c, word, SZ_QUAD,   UN_SQRT); break;
    case VOP_VSAT0_S: do_unary(c, word, SZ_SINGLE, UN_SAT0); break;
    case VOP_VSAT0_P: do_unary(c, word, SZ_PAIR,   UN_SAT0); break;
    case VOP_VSAT0_T: do_unary(c, word, SZ_TRIPLE, UN_SAT0); break;
    case VOP_VSAT0_Q: do_unary(c, word, SZ_QUAD,   UN_SAT0); break;
    case VOP_VSAT1_S: do_unary(c, word, SZ_SINGLE, UN_SAT1); break;
    case VOP_VSAT1_P: do_unary(c, word, SZ_PAIR,   UN_SAT1); break;
    case VOP_VSAT1_T: do_unary(c, word, SZ_TRIPLE, UN_SAT1); break;
    case VOP_VSAT1_Q: do_unary(c, word, SZ_QUAD,   UN_SAT1); break;
    case VOP_VOCP_S: do_unary(c, word, SZ_SINGLE, UN_OCP); break;
    case VOP_VOCP_P: do_unary(c, word, SZ_PAIR,   UN_OCP); break;
    case VOP_VOCP_T: do_unary(c, word, SZ_TRIPLE, UN_OCP); break;
    case VOP_VOCP_Q: do_unary(c, word, SZ_QUAD,   UN_OCP); break;

    /* -- constants --------------------------------------------------- */
    case VOP_VZERO_S: do_fill(c, word, SZ_SINGLE, 0.0f); break;
    case VOP_VZERO_P: do_fill(c, word, SZ_PAIR,   0.0f); break;
    case VOP_VZERO_T: do_fill(c, word, SZ_TRIPLE, 0.0f); break;
    case VOP_VZERO_Q: do_fill(c, word, SZ_QUAD,   0.0f); break;
    case VOP_VONE_S:  do_fill(c, word, SZ_SINGLE, 1.0f); break;
    case VOP_VONE_P:  do_fill(c, word, SZ_PAIR,   1.0f); break;
    case VOP_VONE_T:  do_fill(c, word, SZ_TRIPLE, 1.0f); break;
    case VOP_VONE_Q:  do_fill(c, word, SZ_QUAD,   1.0f); break;
    case VOP_VIDT_P:  do_vidt(c, word, SZ_PAIR); break;
    case VOP_VIDT_Q:  do_vidt(c, word, SZ_QUAD); break;

    /* vcst.*: the full 5-bit hardware constant table -- NOT the 8-entry
     * prefix table. Indices 20..31 read 0.0. */
    case VOP_VCST_S: case VOP_VCST_P: case VOP_VCST_T: case VOP_VCST_Q: {
        static const f32 vcst[32] = {
            0.0f,                       /*  0                        */
            3.4028234663852886e38f,     /*  1 VFPU_HUGE (FLT_MAX)    */
            1.41421356f,                /*  2 sqrt(2)                */
            0.707106781f,               /*  3 sqrt(1/2)              */
            1.12837923f,                /*  4 2/sqrt(pi)             */
            0.636619747f,               /*  5 2/pi                   */
            0.318309873f,               /*  6 1/pi                   */
            0.785398185f,               /*  7 pi/4                   */
            1.57079637f,                /*  8 pi/2                   */
            3.14159274f,                /*  9 pi                     */
            2.71828175f,                /* 10 e                      */
            1.44269502f,                /* 11 log2(e)                */
            0.434294492f,               /* 12 log10(e)               */
            0.693147182f,               /* 13 ln(2)                  */
            2.30258512f,                /* 14 ln(10)                 */
            6.28318548f,                /* 15 2*pi                   */
            0.523598790f,               /* 16 pi/6                   */
            0.301029992f,               /* 17 log10(2)               */
            3.32192802f,                /* 18 log2(10)               */
            0.866025388f,               /* 19 sqrt(3)/2              */
            0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
            0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f
        };
        DataSize sz = (op == VOP_VCST_S) ? SZ_SINGLE
                    : (op == VOP_VCST_P) ? SZ_PAIR
                    : (op == VOP_VCST_T) ? SZ_TRIPLE : SZ_QUAD;
        do_fill(c, word, sz, vcst[IMM5(word) & 31]);
        break;
    }

    /* vfim.s: a 16-bit half (1 sign, 5 exponent bias 15, 10 mantissa)
     * widened to single. The destination is the VT field, not VD -- bits 0-6
     * are part of the immediate. */
    case VOP_VFIM_S: {
        u32 h = (u32)(word & 0xFFFFu);
        u32 sign = (h >> 15) & 1u, e = (h >> 10) & 0x1Fu, m = h & 0x3FFu;
        u32 bits;
        if (e == 0) {
            bits = m ? ((sign << 31) | ((127u - 15u + 1u) << 23)
                        | (m << 13))            /* subnormal, approximated */
                     : (sign << 31);
        } else if (e == 31) {
            bits = (sign << 31) | 0x7F800000u | (m << 13);
        } else {
            bits = (sign << 31) | ((e - 15u + 127u) << 23) | (m << 13);
        }
        { u32 d[16]; d[0] = bits; write_dst(c, d, SZ_SINGLE, VT(word)); }
        break;
    }

    /* viim.s: signed 16-bit integer immediate converted to float; same VT
     * destination as vfim.s. */
    case VOP_VIIM_S: {
        u32 d[16];
        d[0] = f2u((f32)IMM16(word));
        write_dst(c, d, SZ_SINGLE, VT(word));
        break;
    }

    /* -- matrix ------------------------------------------------------ */
    case VOP_VMIDT_P:  do_matrix_fill(c, word, 2, 1); break;
    case VOP_VMIDT_T:  do_matrix_fill(c, word, 3, 1); break;
    case VOP_VMIDT_Q:  do_matrix_fill(c, word, 4, 1); break;
    case VOP_VMZERO_P: do_matrix_fill(c, word, 2, 0); break;
    case VOP_VMZERO_T: do_matrix_fill(c, word, 3, 0); break;
    case VOP_VMZERO_Q: do_matrix_fill(c, word, 4, 0); break;
    case VOP_VMMUL_P:  do_vmmul(c, word, 2); break;
    case VOP_VMMUL_T:  do_vmmul(c, word, 3); break;
    case VOP_VMMUL_Q:  do_vmmul(c, word, 4); break;
    case VOP_VTFM2_P:  case VOP_VHTFM2_P: do_vtfm(c, word, 1); break;
    case VOP_VTFM3_T:  case VOP_VHTFM3_T: do_vtfm(c, word, 2); break;
    case VOP_VTFM4_Q:  case VOP_VHTFM4_Q: do_vtfm(c, word, 3); break;
    case VOP_VCRSP_T:  do_vcrsp(c, word); break;

    /* -- rotation, compare, conditional move ------------------------- */
    case VOP_VROT_P: do_vrot(c, word, SZ_PAIR);   break;
    case VOP_VROT_T: do_vrot(c, word, SZ_TRIPLE); break;
    case VOP_VROT_Q: do_vrot(c, word, SZ_QUAD);   break;

    case VOP_VCMP_S: do_vcmp(c, word, SZ_SINGLE); break;
    case VOP_VCMP_P: do_vcmp(c, word, SZ_PAIR);   break;
    case VOP_VCMP_T: do_vcmp(c, word, SZ_TRIPLE); break;
    case VOP_VCMP_Q: do_vcmp(c, word, SZ_QUAD);   break;

    case VOP_VCMOVT_S: do_vcmov(c, word, SZ_SINGLE, 1); break;
    case VOP_VCMOVT_P: do_vcmov(c, word, SZ_PAIR,   1); break;
    case VOP_VCMOVT_T: do_vcmov(c, word, SZ_TRIPLE, 1); break;
    case VOP_VCMOVT_Q: do_vcmov(c, word, SZ_QUAD,   1); break;
    case VOP_VCMOVF_S: do_vcmov(c, word, SZ_SINGLE, 0); break;
    case VOP_VCMOVF_P: do_vcmov(c, word, SZ_PAIR,   0); break;
    case VOP_VCMOVF_T: do_vcmov(c, word, SZ_TRIPLE, 0); break;
    case VOP_VCMOVF_Q: do_vcmov(c, word, SZ_QUAD,   0); break;

    /* -- no-ops: vsync/vflush order the pipeline against the CPU, but
     * execution here is inline and in order, so doing nothing IS correct --- */
    case VOP_VNOP: case VOP_VSYNC: case VOP_VFLUSH:
        consumes_prefix = 0;
        break;

    default:
        vfpu_unimplemented(c, word, op);
        return;
    }

    if (consumes_prefix) pop_prefixes(c);
}
