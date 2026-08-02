#include "pspreco.h"
#include "symbols.h"
#include <math.h>

/* func_0880597c  0x0880597c..0x08805a0c  144 bytes, source=fde */
void func_0880597c(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0880597cu);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    { c->r[31] = 0x08805998u; mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]); func_08804528(c, ram); }
    { c->r[31] = 0x088059a0u; func_08804668(c, ram); }
    { c->r[31] = 0x088059a8u; func_0880481c(c, ram); }
    c->r[4] = 0x08a70000u;
    c->r[4] = c->r[4] + 0xffffb640u;
    c->r[5] = 0u + 0u;
    c->r[6] = 0x08800000u;
    { c->r[31] = 0x088059c0u; c->r[6] = c->r[6] + 0x00004bdcu; func_089df744(c, ram); }
    c->r[4] = 0u + 0u;
    c->r[5] = 0x08800000u;
    c->r[5] = c->r[5] + 0x00004b40u;
    { c->r[31] = 0x088059d4u; c->r[6] = 0u + 0u; func_08a060dc(c, ram); }
L_088059d4:
    { c->r[31] = 0x088059dcu; func_08805834(c, ram); }
    c->r[2] = 0x08a80000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00002fa0u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_088059d4; }
    { c->r[31] = 0x088059f4u; func_08805910(c, ram); }
    c->r[2] = 0u + 0u;
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_0880597c */
}

/* func_08806ff0  0x08806ff0..0x08807034  68 bytes, source=sweep */
void func_08806ff0(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08806ff0u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = 0x25000000u;
    c->r[2] = c->r[2] | c->r[3];
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x08807020u; c->r[5] = c->r[2] + 0u; func_08806b6c(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_08806ff0 */
}

/* func_088080dc  0x088080dc..0x0880810c  48 bytes, source=sweep */
void func_088080dc(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x088080dcu);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    mem_w32(ram, c->r[3] + 0x00000020u, c->r[2]);
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_088080dc */
}

/* func_0880a700  0x0880a700..0x0880a770  112 bytes, source=fde */
void func_0880a700(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0880a700u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_0880a728; }
    { goto L_0880a75c; }
L_0880a728:
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x0880a734u; c->r[4] = c->r[4] + 0x00000af4u; func_089c8ddc(c, ram); }
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x0880a740u; c->r[4] = c->r[4] + 0x00002e04u; func_0881302c(c, ram); }
    c->r[4] = 0x08a60000u;
    c->r[4] = c->r[4] + 0x00005260u;
    { c->r[31] = 0x0880a750u; c->r[5] = 0u + 0x00000002u; func_089d7194(c, ram); }
    c->r[2] = 0u + 0x00000010u;
    c->r[1] = 0x08a80000u;
    mem_w32(ram, c->r[1] + 0x00003c40u, c->r[2]);
L_0880a75c:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_0880a700 */
}

/* func_0880d2f0  0x0880d2f0..0x0880d318  40 bytes, source=sweep */
void func_0880d2f0(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0880d2f0u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00001b93u);
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_0880d2f0 */
}

/* func_0880df08  0x0880df08..0x0880e048  320 bytes, source=fde */
void func_0880df08(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0880df08u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[2] = c->r[5] + 0u;
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[6]);
    mem_w8(ram, c->r[30] + 0x00000004u, c->r[2]);
    c->r[2] = mem_r8(ram, c->r[30] + 0x00000004u);
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
    c->r[2] = 0u + 0x00000001u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_0880dfcc; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = ((s32)c->r[3] < (s32)0x00000002u) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_0880df64; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    { int _c = (c->r[2] == 0u); if (_c) goto L_0880df8c; }
    { goto L_0880e034; }
L_0880df64:
    c->r[2] = 0u + 0x00000002u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_0880e034; }
    c->r[2] = 0u + 0x00000019u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_0880e004; }
    { goto L_0880e034; }
L_0880df8c:
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00002e74u;
    c->r[5] = 0u + 0u;
    { c->r[31] = 0x0880dfa0u; c->r[6] = 0u + 0x00000038u; func_08a19ec4(c, ram); }
    { c->r[31] = 0x0880dfa8u; c->r[4] = 0u + 0u; func_08928c60(c, ram); }
    { c->r[31] = 0x0880dfb0u; func_0880f27c(c, ram); }
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00003ca0u;
    c->r[5] = 0x08810000u;
    { c->r[31] = 0x0880dfc4u; c->r[5] = c->r[5] + 0xffffe048u; func_0880f094(c, ram); }
    { goto L_0880e034; }
L_0880dfcc:
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x0880dfd8u; c->r[4] = c->r[4] + 0x00003ca0u; func_0880f104(c, ram); }
    { int _c = (c->r[2] == 0u); if (_c) goto L_0880e034; }
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00002e04u;
    c->r[5] = 0u + 0x00000005u;
    { c->r[31] = 0x0880dff4u; c->r[6] = 0u + 0u; func_08813280(c, ram); }
    { c->r[31] = 0x0880dffcu; c->r[4] = 0u + 0x00000001u; func_08928c60(c, ram); }
    { goto L_0880e034; }
L_0880e004:
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffffeed4u);
    c->r[4] = 0x08a70000u;
    c->r[4] = c->r[4] + 0xffffb640u;
    { c->r[31] = 0x0880e01cu; c->f[12] = c->f[0]; func_089f1210(c, ram); }
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x0880e028u; c->r[4] = c->r[4] + 0x00003ca0u; func_0880f188(c, ram); }
    c->r[4] = 0x08a70000u;
    { c->r[31] = 0x0880e034u; c->r[4] = c->r[4] + 0xffffb640u; func_089f147c(c, ram); }
L_0880e034:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_0880df08 */
}

/* func_08811288  0x08811288..0x088112b8  48 bytes, source=sweep */
void func_08811288(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08811288u);
    c->r[29] = c->r[29] + 0xfffffff0u;
    mem_w32(ram, c->r[29] + 0x00000004u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000000u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    c->r[4] = 0u + 0x00000001u;
    { c->r[31] = 0x088112a4u; c->r[5] = 0u | 0xffffu; func_08811120(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000004u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000000u);
    { c->r[29] = c->r[29] + 0x00000010u; return; }
    return; /* fell out of func_08811288 */
}

/* func_08813c00  0x08813c00..0x08813c28  40 bytes, source=sweep */
void func_08813c00(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08813c00u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000147u);
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_08813c00 */
}

/* func_08819244  0x08819244..0x08819280  60 bytes, source=sweep */
void func_08819244(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08819244u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000004u);
    { c->r[31] = 0x0881926cu; c->r[6] = 0u + 0x00000001u; func_08819834(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_08819244 */
}

/* func_0881a1d4  0x0881a1d4..0x0881a2a4  208 bytes, source=sweep */
void func_0881a1d4(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0881a1d4u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000700u);
    c->r[2] = 0u + 0x000002e8u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[4] = c->lo;
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000704u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 5;
    c->r[2] = c->r[2] - c->r[3];
    c->r[2] = c->r[2] << 3;
    c->r[3] = c->r[4] + c->r[2];
    c->r[2] = 0x08b90000u;
    c->r[2] = c->r[2] + 0x00000cf0u;
    c->r[4] = c->r[3] + c->r[2];
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[3] + c->r[2];
    { c->r[31] = 0x0881a23cu; c->r[5] = c->r[2] + 0u; func_08819398(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    alx_div(c, c->r[3], c->r[2]);
    c->r[3] = c->hi;
    if (c->r[2] == 0u) { recomp_break(c, ram, 0x0881a254u, 0x7u); goto L_0881a258; }
L_0881a258:
    { int _c = (c->r[3] == 0u); if (_c) goto L_0881a28c; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    alx_div(c, c->r[3], c->r[2]);
    c->r[3] = c->hi;
    if (c->r[2] == 0u) { recomp_break(c, ram, 0x0881a274u, 0x7u); goto L_0881a278; }
L_0881a278:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = c->r[2] - c->r[3];
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[2] + c->r[3];
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]);
L_0881a28c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_0881a1d4 */
}

/* func_08820d98  0x08820d98..0x08820df8  96 bytes, source=sweep */
void func_08820d98(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08820d98u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[6]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[4] = c->r[2] + 0x00000350u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[2] = c->r[2] + 0x00000350u;
    c->r[3] = mem_r16(ram, c->r[2] + 0x00000002u);
    c->r[2] = mem_r16(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[3] | c->r[2];
    mem_w16(ram, c->r[4] + 0x00000002u, c->r[2]);
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_08820d98 */
}

/* func_08826a78  0x08826a78..0x08826aa0  40 bytes, source=sweep */
void func_08826a78(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08826a78u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000142u);
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_08826a78 */
}

/* func_08828580  0x08828580..0x08828610  144 bytes, source=fde */
void func_08828580(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08828580u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, 0u);
L_08828594:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000005u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_088285ac; }
    { goto L_088285fc; }
L_088285ac:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08a80000u;
    c->r[2] = c->r[2] + 0x00003ef4u;
    c->r[6] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08a80000u;
    c->r[2] = c->r[2] + 0x00003f08u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000330u;
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[6] = mem_r32(ram, c->r[6] + 0x00000000u);
    { c->r[31] = 0x088285ecu; c->r[7] = mem_r32(ram, c->r[2] + 0x00000000u); func_089d96c4(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000000u, c->r[2]); goto L_08828594; }
L_088285fc:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_08828580 */
}

/* func_0882b860  0x0882b860..0x0882b8cc  108 bytes, source=sweep */
void func_0882b860(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0882b860u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
L_0882b874:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r16(ram, c->r[2] + 0x00000000u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_0882b88c; }
    { goto L_0882b8bc; }
L_0882b88c:
    c->r[6] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r32(ram, c->r[6] + 0x00000000u);
    c->r[4] = c->r[30] + 0x00000004u;
    c->r[2] = mem_r32(ram, c->r[4] + 0x00000000u);
    c->r[5] = mem_r16(ram, c->r[2] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000002u;
    mem_w32(ram, c->r[4] + 0x00000000u, c->r[2]);
    c->r[2] = c->r[3] + 0u;
    mem_w16(ram, c->r[2] + 0x00000000u, c->r[5]);
    c->r[3] = c->r[3] + 0x00000002u;
    { mem_w32(ram, c->r[6] + 0x00000000u, c->r[3]); goto L_0882b874; }
L_0882b8bc:
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_0882b860 */
}

/* func_088307d4  0x088307d4..0x08830940  364 bytes, source=fde */
void func_088307d4(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x088307d4u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[2] + 0x00000038u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000ac8u;
    { c->r[31] = 0x08830808u; c->r[5] = c->r[2] + 0u; func_089cb820(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_0883082c; }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[6] = 0u + 0x00000021u;
    { c->r[31] = 0x0883082cu; c->r[7] = 0u + 0u; func_089c34ac(c, ram); }
L_0883082c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[2] + 0x0000003cu;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000ac8u;
    { c->r[31] = 0x08830848u; c->r[5] = c->r[2] + 0u; func_089cb820(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_0883086c; }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[6] = 0u + 0x00000021u;
    { c->r[31] = 0x0883086cu; c->r[7] = 0u + 0u; func_089c34ac(c, ram); }
L_0883086c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[2] + 0x00000040u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000ac8u;
    { c->r[31] = 0x08830888u; c->r[5] = c->r[2] + 0u; func_089cb820(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_088308ac; }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[6] = 0u + 0x00000021u;
    { c->r[31] = 0x088308acu; c->r[7] = 0u + 0u; func_089c34ac(c, ram); }
L_088308ac:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[2] + 0x00000044u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000ac8u;
    { c->r[31] = 0x088308c8u; c->r[5] = c->r[2] + 0u; func_089cb820(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_088308ec; }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[6] = 0u + 0x00000021u;
    { c->r[31] = 0x088308ecu; c->r[7] = 0u + 0u; func_089c34ac(c, ram); }
L_088308ec:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[2] + 0x00000048u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000ac8u;
    { c->r[31] = 0x08830908u; c->r[5] = c->r[2] + 0u; func_089cb820(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_0883092c; }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[6] = 0u + 0x00000021u;
    { c->r[31] = 0x0883092cu; c->r[7] = 0u + 0u; func_089c34ac(c, ram); }
L_0883092c:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_088307d4 */
}

/* func_088328f8  0x088328f8..0x08832ab8  448 bytes, source=fde */
void func_088328f8(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x088328f8u);
    c->r[29] = c->r[29] + 0xffffffd0u;
    mem_w32(ram, c->r[29] + 0x00000024u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000020u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x0000002cu);
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_08832948; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000014u);
    { int _c = ((s32)c->r[3] < 0); if (_c) goto L_08832a98; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = ((s32)c->r[3] < (s32)0x00000003u) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_08832a98; }
    { goto L_08832a10; }
L_08832948:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = 0u + 0x00000001u;
    { c->r[31] = 0x08832958u; c->r[6] = 0u + 0x0000001eu; func_08831d98(c, ram); }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = 0u + 0x00000007u;
    c->r[6] = 0u + 0x0000000cu;
    { c->r[31] = 0x0883296cu; c->r[7] = 0u + 0x0000001eu; func_08831ef4(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[2]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = 0u + 0x00000009u;
    c->r[6] = 0u + 0x0000000bu;
    c->r[7] = 0u + 0x00000002u;
    { c->r[31] = 0x08832988u; c->r[8] = 0u + 0x0000001eu; func_0883212c(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = 0u + 0x0000000au;
    c->r[6] = 0u + 0x0000000bu;
    c->r[7] = 0u + 0xffffffffu;
    { c->r[31] = 0x088329a4u; c->r[8] = 0u + 0x0000001eu; func_0883212c(c, ram); }
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = 0u + 0x00000008u;
    { c->r[31] = 0x088329b8u; c->r[6] = 0u + 0x00000009u; func_08831690(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_088329cc; }
    { mem_w32(ram, c->r[30] + 0x00000010u, 0u); goto L_08832aa0; }
L_088329cc:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_088329e0; }
    { mem_w32(ram, c->r[30] + 0x00000010u, 0u); goto L_08832aa0; }
L_088329e0:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    { int _c = (c->r[2] != 0u); if (_c) goto L_088329f4; }
    { mem_w32(ram, c->r[30] + 0x00000010u, 0u); goto L_08832aa0; }
L_088329f4:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = 0u + 0x00000001u;
    mem_w8(ram, c->r[2] + 0x0000002cu, c->r[3]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    mem_w32(ram, c->r[2] + 0x00000014u, 0u);
    { mem_w32(ram, c->r[30] + 0x00000010u, 0u); goto L_08832aa0; }
L_08832a10:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = 0u + 0x00000009u;
    c->r[6] = 0u + 0x0000000bu;
    c->r[7] = 0u + 0x00000002u;
    c->r[8] = 0u + 0x00000002u;
    { c->r[31] = 0x08832a2cu; c->r[9] = 0u + 0x0000003cu; func_08831aac(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[2]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = 0u + 0x0000000au;
    { c->r[31] = 0x08832a40u; c->r[6] = 0u + 0x0000000bu; func_08831690(c, ram); }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = 0u + 0x00000008u;
    { c->r[31] = 0x08832a50u; c->r[6] = 0u + 0x00000009u; func_08831690(c, ram); }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = 0u + 0x0000000fu;
    c->r[6] = 0u + 0x00000009u;
    c->r[7] = 0u + 0x00000001u;
    c->r[8] = 0u + 0xffffffffu;
    { c->r[31] = 0x08832a6cu; c->r[9] = 0u + 0x0000003cu; func_08831aac(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_08832a84; }
    { mem_w32(ram, c->r[30] + 0x00000010u, 0u); goto L_08832aa0; }
L_08832a84:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_08832a98; }
    { mem_w32(ram, c->r[30] + 0x00000010u, 0u); goto L_08832aa0; }
L_08832a98:
    c->r[2] = 0u + 0x00000001u;
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]);
L_08832aa0:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000024u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000020u);
    { c->r[29] = c->r[29] + 0x00000030u; return; }
    return; /* fell out of func_088328f8 */
}

/* func_08834984  0x08834984..0x08834ac8  324 bytes, source=fde */
void func_08834984(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08834984u);
    c->r[29] = c->r[29] + 0xffffffd0u;
    mem_w32(ram, c->r[29] + 0x00000028u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000024u, c->r[30]);
    mem_w32(ram, c->r[29] + 0x00000020u, c->r[16]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000029u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 3;
    c->r[2] = 0x08a50000u;
    c->r[2] = c->r[2] + 0x00002f08u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    mem_w32(ram, c->r[4] + 0x00000024u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[16] = c->r[2] + 0x0000003cu;
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = 0u + 0x00000007u;
    c->r[6] = 0u + 0xffffffffu;
    c->r[7] = 0u + 0xffffffffu;
    c->r[8] = 0u + 0u;
    c->r[9] = 0u + 0u;
    { c->r[31] = 0x088349f8u; c->r[10] = 0u + 0u; func_0892fcac(c, ram); }
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000ac8u;
    { c->r[31] = 0x08834a08u; c->r[5] = c->r[2] + 0u; func_089cb780(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    mem_w32(ram, c->r[16] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[16] = c->r[2] + 0x00000040u;
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = 0u + 0x00000008u;
    c->r[6] = 0u + 0xffffffffu;
    c->r[7] = 0u + 0xffffffffu;
    c->r[8] = 0u + 0u;
    c->r[9] = 0u + 0u;
    { c->r[31] = 0x08834a3cu; c->r[10] = 0u + 0u; func_0892fcac(c, ram); }
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000ac8u;
    { c->r[31] = 0x08834a4cu; c->r[5] = c->r[2] + 0u; func_089cb780(c, ram); }
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    mem_w32(ram, c->r[16] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[16] = c->r[2] + 0x00000044u;
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = 0u + 0x00000009u;
    c->r[6] = 0u + 0xffffffffu;
    c->r[7] = 0u + 0xffffffffu;
    c->r[8] = 0u + 0u;
    c->r[9] = 0u + 0u;
    { c->r[31] = 0x08834a80u; c->r[10] = 0u + 0u; func_0892fcac(c, ram); }
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000ac8u;
    { c->r[31] = 0x08834a90u; c->r[5] = c->r[2] + 0u; func_089cb780(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    mem_w32(ram, c->r[16] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[2] + 0x00000008u;
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x08834ab0u; c->r[5] = 0u + 0x0000000eu; func_08937a50(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000028u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000024u);
    c->r[16] = mem_r32(ram, c->r[29] + 0x00000020u);
    { c->r[29] = c->r[29] + 0x00000030u; return; }
    return; /* fell out of func_08834984 */
}

/* func_08837ba4  0x08837ba4..0x08838018  1140 bytes, source=fde */
void func_08837ba4(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08837ba4u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000018u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[30]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[16]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x0000002bu);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08a50000u;
    c->r[2] = c->r[2] + 0x000035b0u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000005u);
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x0000002bu);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08a50000u;
    c->r[2] = c->r[2] + 0x000035b0u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000004u);
    c->r[3] = c->r[2] << 4;
    c->r[2] = 0x08a50000u;
    c->r[2] = c->r[2] + 0x00002ec4u;
    c->r[2] = c->r[2] + c->r[3];
    mem_w32(ram, c->r[4] + 0x00000024u, c->r[2]);
    { c->r[31] = 0x08837c34u; c->r[4] = 0u + 0x00000001u; func_089c5e18(c, ram); }
    { int _c = (c->r[2] == 0u); if (_c) goto L_08837d64; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[2] + 0x00000038u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000ac8u;
    { c->r[31] = 0x08837c58u; c->r[5] = c->r[2] + 0u; func_089cb820(c, ram); }
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    { int _c = (c->r[2] == 0u); if (_c) goto L_08837c7c; }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[6] = 0u + 0x00000021u;
    { c->r[31] = 0x08837c7cu; c->r[7] = 0u + 0u; func_089c34ac(c, ram); }
L_08837c7c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[2] + 0x0000003cu;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000ac8u;
    { c->r[31] = 0x08837c98u; c->r[5] = c->r[2] + 0u; func_089cb820(c, ram); }
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    { int _c = (c->r[2] == 0u); if (_c) goto L_08837cbc; }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[6] = 0u + 0x00000021u;
    { c->r[31] = 0x08837cbcu; c->r[7] = 0u + 0u; func_089c34ac(c, ram); }
L_08837cbc:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[2] + 0x00000040u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000ac8u;
    { c->r[31] = 0x08837cd8u; c->r[5] = c->r[2] + 0u; func_089cb820(c, ram); }
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    { int _c = (c->r[2] == 0u); if (_c) goto L_08837cfc; }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[6] = 0u + 0x00000021u;
    { c->r[31] = 0x08837cfcu; c->r[7] = 0u + 0u; func_089c34ac(c, ram); }
L_08837cfc:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[2] + 0x00000044u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000ac8u;
    { c->r[31] = 0x08837d18u; c->r[5] = c->r[2] + 0u; func_089cb820(c, ram); }
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    { int _c = (c->r[2] == 0u); if (_c) goto L_08837d3c; }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[6] = 0u + 0x00000021u;
    { c->r[31] = 0x08837d3cu; c->r[7] = 0u + 0u; func_089c34ac(c, ram); }
L_08837d3c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[2] + 0x00000008u;
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x08837d50u; c->r[5] = 0u + 0x00000008u; func_08937a50(c, ram); }
    { c->r[31] = 0x08837d58u; func_08925598(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    { mem_w32(ram, c->r[2] + 0x00000014u, 0u); goto L_08838000; }
L_08837d64:
    { c->r[31] = 0x08837d6cu; c->r[4] = 0u + 0x00000001u; func_089c5f10(c, ram); }
    { int _c = (c->r[2] == 0u); if (_c) goto L_08837e9c; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[2] + 0x00000038u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000ac8u;
    { c->r[31] = 0x08837d90u; c->r[5] = c->r[2] + 0u; func_089cb820(c, ram); }
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    { int _c = (c->r[2] == 0u); if (_c) goto L_08837db4; }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[6] = 0u + 0x00000021u;
    { c->r[31] = 0x08837db4u; c->r[7] = 0u + 0u; func_089c34ac(c, ram); }
L_08837db4:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[2] + 0x0000003cu;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000ac8u;
    { c->r[31] = 0x08837dd0u; c->r[5] = c->r[2] + 0u; func_089cb820(c, ram); }
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    { int _c = (c->r[2] == 0u); if (_c) goto L_08837df4; }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[6] = 0u + 0x00000021u;
    { c->r[31] = 0x08837df4u; c->r[7] = 0u + 0u; func_089c34ac(c, ram); }
L_08837df4:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[2] + 0x00000040u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000ac8u;
    { c->r[31] = 0x08837e10u; c->r[5] = c->r[2] + 0u; func_089cb820(c, ram); }
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    { int _c = (c->r[2] == 0u); if (_c) goto L_08837e34; }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[6] = 0u + 0x00000021u;
    { c->r[31] = 0x08837e34u; c->r[7] = 0u + 0u; func_089c34ac(c, ram); }
L_08837e34:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[2] + 0x00000044u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000ac8u;
    { c->r[31] = 0x08837e50u; c->r[5] = c->r[2] + 0u; func_089cb820(c, ram); }
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    { int _c = (c->r[2] == 0u); if (_c) goto L_08837e74; }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[6] = 0u + 0x00000021u;
    { c->r[31] = 0x08837e74u; c->r[7] = 0u + 0u; func_089c34ac(c, ram); }
L_08837e74:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[2] + 0x00000008u;
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x08837e88u; c->r[5] = 0u + 0x00000007u; func_08937a50(c, ram); }
    { c->r[31] = 0x08837e90u; func_08925598(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    { mem_w32(ram, c->r[2] + 0x00000014u, 0u); goto L_08838000; }
L_08837e9c:
    c->r[4] = 0x08a70000u;
    c->r[4] = c->r[4] + 0xffffb34cu;
    c->r[5] = 0u + 0u;
    c->r[6] = 0u + 0u;
    { c->r[31] = 0x08837eb4u; c->r[7] = 0u + 0u; func_089d87d4(c, ram); }
    c->r[16] = c->r[2] + 0u;
    c->r[4] = 0x08a70000u;
    { c->r[31] = 0x08837ec4u; c->r[4] = c->r[4] + 0xffffb34cu; func_0880d238(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = mem_r32(ram, c->r[16] + 0x00000004u);
    c->r[2] = c->r[3] & c->r[2];
    c->r[2] = c->r[2] & 0x0020u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_08837f50; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000002u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_08838000; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r8(ram, c->r[2] + 0x0000002cu);
    c->r[2] = c->r[2] + 0x00000001u;
    mem_w8(ram, c->r[3] + 0x0000002cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x0000002cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_08837f1c; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    mem_w8(ram, c->r[2] + 0x0000002cu, 0u);
L_08837f1c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    { c->r[31] = 0x08837f28u; mem_w32(ram, c->r[2] + 0x00000014u, 0u); func_08925598(c, ram); }
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0xffffc930u;
    c->r[5] = 0x04000000u;
    c->r[5] = c->r[5] | 0x0001u;
    c->r[6] = 0u + 0u;
    c->r[7] = 0u + 0u;
    { c->r[31] = 0x08837f48u; c->r[8] = 0u + 0u; func_089f6924(c, ram); }
    { goto L_08838000; }
L_08837f50:
    c->r[4] = 0x08a70000u;
    c->r[4] = c->r[4] + 0xffffb34cu;
    c->r[5] = 0u + 0u;
    c->r[6] = 0u + 0u;
    { c->r[31] = 0x08837f68u; c->r[7] = 0u + 0u; func_089d87d4(c, ram); }
    c->r[16] = c->r[2] + 0u;
    c->r[4] = 0x08a70000u;
    { c->r[31] = 0x08837f78u; c->r[4] = c->r[4] + 0xffffb34cu; func_0880d238(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = mem_r32(ram, c->r[16] + 0x00000004u);
    c->r[2] = c->r[3] & c->r[2];
    c->r[2] = c->r[2] & 0x0080u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_08838000; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000002u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_08838000; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r8(ram, c->r[2] + 0x0000002cu);
    c->r[2] = c->r[2] + 0xffffffffu;
    mem_w8(ram, c->r[3] + 0x0000002cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x0000002cu);
    { int _c = ((s32)c->r[2] >= 0); if (_c) goto L_08837fd4; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = mem_r8(ram, c->r[30] + 0x00000008u);
    c->r[3] = c->r[3] + 0xffffffffu;
    mem_w8(ram, c->r[2] + 0x0000002cu, c->r[3]);
L_08837fd4:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    { c->r[31] = 0x08837fe0u; mem_w32(ram, c->r[2] + 0x00000014u, 0u); func_08925598(c, ram); }
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0xffffc930u;
    c->r[5] = 0x04000000u;
    c->r[5] = c->r[5] | 0x0001u;
    c->r[6] = 0u + 0u;
    c->r[7] = 0u + 0u;
    { c->r[31] = 0x08838000u; c->r[8] = 0u + 0u; func_089f6924(c, ram); }
L_08838000:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000018u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[16] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_08837ba4 */
}

/* func_0883bb20  0x0883bb20..0x0883bbb4  148 bytes, source=fde */
void func_0883bb20(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0883bb20u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_0883bb4c; }
    { goto L_0883bba0; }
L_0883bb4c:
    c->r[3] = 0x08a80000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00004874u);
    c->r[2] = 0u + 0x00000001u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_0883bb6c; }
    c->r[2] = 0u + 0x00000005u;
    c->r[1] = 0x08a80000u;
    mem_w32(ram, c->r[1] + 0x0000488cu, c->r[2]);
L_0883bb6c:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x0883bb78u; c->r[5] = 0u + 0u; func_08901e54(c, ram); }
    c->r[3] = 0x08a80000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00004878u);
    c->r[2] = 0u + 0x00000002u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_0883bba0; }
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00004874u;
    c->r[5] = 0x08900000u;
    { c->r[31] = 0x0883bba0u; c->r[5] = c->r[5] + 0x00002cacu; func_0880f03c(c, ram); }
L_0883bba0:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_0883bb20 */
}

/* func_08844f30  0x08844f30..0x08844fb8  136 bytes, source=sweep */
void func_08844f30(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08844f30u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000013u);
    c->r[2] = 0u + 0x00000006u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_08844f64; }
    { goto L_08844fa4; }
L_08844f64:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = 0u + 0xffffffffu;
    mem_w8(ram, c->r[3] + 0x00000011u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    mem_w8(ram, c->r[2] + 0x00000010u, 0u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = 0u + 0x0000000fu;
    mem_w8(ram, c->r[3] + 0x00000012u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_08844f98; }
    { goto L_08844fa4; }
L_08844f98:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x08844fa4u; c->r[5] = 0u + 0x00000002u; func_0880d260(c, ram); }
L_08844fa4:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_08844f30 */
}

/* func_0884708c  0x0884708c..0x088471b0  292 bytes, source=fde */
void func_0884708c(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0884708cu);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[2] = c->r[5] + 0u;
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[6]);
    mem_w8(ram, c->r[30] + 0x00000004u, c->r[2]);
    c->r[2] = mem_r8(ram, c->r[30] + 0x00000004u);
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
    c->r[2] = 0u + 0x00000001u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_08847134; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = ((s32)c->r[3] < (s32)0x00000002u) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_088470e8; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    { int _c = (c->r[2] == 0u); if (_c) goto L_08847110; }
    { goto L_0884719c; }
L_088470e8:
    c->r[2] = 0u + 0x00000002u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_0884719c; }
    c->r[2] = 0u + 0x00000019u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_08847164; }
    { goto L_0884719c; }
L_08847110:
    { c->r[31] = 0x08847118u; func_0880f27c(c, ram); }
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00004ea4u;
    c->r[5] = 0x08840000u;
    { c->r[31] = 0x0884712cu; c->r[5] = c->r[5] + 0x000071b0u; func_0880f094(c, ram); }
    { goto L_0884719c; }
L_08847134:
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x08847140u; c->r[4] = c->r[4] + 0x00004ea4u; func_0880f104(c, ram); }
    { int _c = (c->r[2] == 0u); if (_c) goto L_0884719c; }
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00002e04u;
    c->r[5] = 0u + 0x00000007u;
    { c->r[31] = 0x0884715cu; c->r[6] = 0u + 0u; func_08813280(c, ram); }
    { goto L_0884719c; }
L_08847164:
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00001fe4u);
    c->r[4] = 0x08a70000u;
    c->r[4] = c->r[4] + 0xffffb640u;
    { c->r[31] = 0x0884717cu; c->f[12] = c->f[0]; func_089f1210(c, ram); }
    { c->r[31] = 0x08847184u; func_08902ea0(c, ram); }
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x08847190u; c->r[4] = c->r[4] + 0x00004ea4u; func_0880f188(c, ram); }
    c->r[4] = 0x08a70000u;
    { c->r[31] = 0x0884719cu; c->r[4] = c->r[4] + 0xffffb640u; func_089f147c(c, ram); }
L_0884719c:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_0884708c */
}

/* func_0884c26c  0x0884c26c..0x0884c2bc  80 bytes, source=sweep */
void func_0884c26c(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0884c26cu);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[6]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    vfpu_exec(c, ram, 0xd8640000u); /* lv.q */
    vfpu_exec(c, ram, 0xd8650010u); /* lv.q */
    vfpu_exec(c, ram, 0xd8660020u); /* lv.q */
    vfpu_exec(c, ram, 0xd8670030u); /* lv.q */
    vfpu_exec(c, ram, 0xd8480000u); /* lv.q */
    vfpu_exec(c, ram, 0xf188a480u); /* vtfm4.q */
    vfpu_exec(c, ram, 0xf8800000u); /* sv.q */
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_0884c26c */
}

/* func_0884d7c8  0x0884d7c8..0x0884d850  136 bytes, source=fde */
void func_0884d7c8(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0884d7c8u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, 0u);
L_0884d7dc:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000080u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_0884d7f4; }
    { goto L_0884d83c; }
L_0884d7f4:
    { c->r[31] = 0x0884d7fcu; c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u); func_0884d790(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = 0u + 0xffffffffu;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_0884d82c; }
    { c->r[31] = 0x0884d814u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u); func_0884d790(c, ram); }
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0xffffc930u;
    { c->r[31] = 0x0884d824u; c->r[5] = c->r[2] + 0u; func_089f73a0(c, ram); }
    { c->r[31] = 0x0884d82cu; c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u); func_0884d714(c, ram); }
L_0884d82c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000000u, c->r[2]); goto L_0884d7dc; }
L_0884d83c:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_0884d7c8 */
}

/* func_08853448  0x08853448..0x08853648  512 bytes, source=fde */
void func_08853448(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08853448u);
    c->r[29] = c->r[29] + 0xffffffd0u;
    mem_w32(ram, c->r[29] + 0x00000028u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000024u, c->r[30]);
    mem_w32(ram, c->r[29] + 0x00000020u, c->r[16]);
    c->r[30] = c->r[29] + 0u;
    c->r[2] = c->r[4] + 0u;
    mem_w16(ram, c->r[30] + 0x00000000u, c->r[2]);
    c->r[2] = c->r[30] + 0x00000008u;
    c->r[3] = c->r[30] + 0x0000000cu;
    c->r[6] = (u32)(s32)(s16)mem_r16(ram, c->r[30] + 0x00000000u);
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x0885347cu; c->r[5] = c->r[3] + 0u; func_0885af24(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000ac8u;
    { c->r[31] = 0x08853494u; c->r[5] = c->r[2] + 0u; func_089cb820(c, ram); }
    { int _c = (c->r[2] != 0u); mem_w32(ram, c->r[30] + 0x00000004u, c->r[2]); if (_c) goto L_0885362c; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000000u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_088534c0; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x00000010u;
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000000u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_08853520; }
L_088534c0:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r8(ram, c->r[2] + 0x0000003cu);
    c->r[2] = c->r[2] + 0xfffffff7u;
    c->r[2] = (c->r[2] < 0x00000002u) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_088534f8; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000020u);
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0u + 0u;
    { c->r[31] = 0x088534f0u; c->r[6] = 0u + 0xffffffffu; func_088954a8(c, ram); }
    { mem_w32(ram, c->r[30] + 0x00000004u, c->r[2]); goto L_08853580; }
L_088534f8:
    mem_w16(ram, c->r[30] + 0x00000002u, 0u);
    c->r[2] = mem_r16(ram, c->r[30] + 0x00000002u);
    c->r[4] = 0u + 0x00000001u;
    c->r[5] = c->r[2] + 0u;
    c->r[6] = 0u + 0x00000001u;
    c->r[7] = 0u + 0u;
    { c->r[31] = 0x08853518u; c->r[8] = 0u + 0u; func_089c6b7c(c, ram); }
    { mem_w32(ram, c->r[30] + 0x00000004u, c->r[2]); goto L_08853580; }
L_08853520:
    c->r[2] = 0u + 0x00001000u;
    mem_w16(ram, c->r[30] + 0x00000002u, c->r[2]);
    c->r[2] = mem_r16(ram, c->r[30] + 0x00000002u);
    c->r[4] = 0u + 0x00000001u;
    c->r[5] = c->r[2] + 0u;
    c->r[6] = 0u + 0x00000001u;
    c->r[7] = 0u + 0u;
    { c->r[31] = 0x08853544u; c->r[8] = 0u + 0u; func_089c6b7c(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = c->r[2] + 0x00000010u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x00000020u;
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[5] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[6] = c->r[3] + 0u;
    c->r[7] = c->r[2] + 0u;
    { c->r[31] = 0x08853570u; c->r[8] = 0u + 0u; func_089b75f8(c, ram); }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[5] = 0x00200000u;
    { c->r[31] = 0x08853580u; c->r[5] = c->r[5] | 0x0020u; func_0884d1b0(c, ram); }
L_08853580:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r8(ram, c->r[2] + 0x0000003cu);
    mem_w8(ram, c->r[3] + 0x000000c9u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000040u);
    mem_w8(ram, c->r[3] + 0x00000087u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000030u);
    mem_wf32(ram, c->r[3] + 0x00000020u, c->f[0]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000034u);
    mem_wf32(ram, c->r[3] + 0x00000024u, c->f[0]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000038u);
    mem_wf32(ram, c->r[3] + 0x00000028u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[2] + 0x00000030u;
    c->r[4] = c->r[2] + 0u;
    c->f[12] = u2f(0u);
    { c->r[31] = 0x088535e8u; func_0884bff4(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[2] + 0x00000040u;
    c->r[4] = c->r[2] + 0u;
    c->f[12] = u2f(0u);
    { c->r[31] = 0x08853600u; func_0884bff4(c, ram); }
    c->r[16] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000ac8u;
    { c->r[31] = 0x08853614u; c->r[5] = mem_r32(ram, c->r[30] + 0x00000004u); func_089cb780(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    mem_w32(ram, c->r[16] + 0x00000000u, c->r[2]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000004u);
    { c->r[31] = 0x0885362cu; c->r[5] = mem_r32(ram, c->r[30] + 0x0000000cu); func_0885367c(c, ram); }
L_0885362c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000028u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000024u);
    c->r[16] = mem_r32(ram, c->r[29] + 0x00000020u);
    { c->r[29] = c->r[29] + 0x00000030u; return; }
    return; /* fell out of func_08853448 */
}

/* func_0885848c  0x0885848c..0x0885851c  144 bytes, source=fde */
void func_0885848c(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0885848cu);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, 0u);
L_088584a0:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000005u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_088584b8; }
    { goto L_08858508; }
L_088584b8:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08a90000u;
    c->r[2] = c->r[2] + 0xffff9270u;
    c->r[6] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08a90000u;
    c->r[2] = c->r[2] + 0xffff9284u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000330u;
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[6] = mem_r32(ram, c->r[6] + 0x00000000u);
    { c->r[31] = 0x088584f8u; c->r[7] = mem_r32(ram, c->r[2] + 0x00000000u); func_089d96c4(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000000u, c->r[2]); goto L_088584a0; }
L_08858508:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_0885848c */
}

/* func_0885a3c8  0x0885a3c8..0x0885a44c  132 bytes, source=sweep */
void func_0885a3c8(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0885a3c8u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    mem_w32(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000004u);
    mem_w32(ram, c->r[3] + 0x00000004u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000008u);
    mem_w32(ram, c->r[3] + 0x00000008u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000000cu);
    mem_w32(ram, c->r[3] + 0x0000000cu, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000010u);
    mem_w32(ram, c->r[3] + 0x00000010u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000014u);
    mem_w32(ram, c->r[3] + 0x00000014u, c->r[2]);
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_0885a3c8 */
}

/* func_0885b240  0x0885b240..0x0885b2a8  104 bytes, source=sweep */
void func_0885b240(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0885b240u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000014u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_0885b280; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000004u);
    { mem_w32(ram, c->r[2] + 0x00000014u, c->r[3]); goto L_0885b298; }
L_0885b280:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x00000014u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[3] + c->r[2];
    mem_w32(ram, c->r[4] + 0x00000014u, c->r[2]);
L_0885b298:
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_0885b240 */
}

/* func_088610c4  0x088610c4..0x0886111c  88 bytes, source=fde */
void func_088610c4(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x088610c4u);
    c->r[29] = c->r[29] + 0xffffffd0u;
    mem_w32(ram, c->r[29] + 0x00000024u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000020u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[6]);
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[7]);
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[8]);
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[9]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[6] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[7] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[8] = mem_r32(ram, c->r[30] + 0x00000010u);
    { c->r[31] = 0x08861108u; c->r[9] = mem_r32(ram, c->r[30] + 0x00000014u); func_08861568(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000024u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000020u);
    { c->r[29] = c->r[29] + 0x00000030u; return; }
    return; /* fell out of func_088610c4 */
}

/* func_088620b4  0x088620b4..0x08862160  172 bytes, source=sweep */
void func_088620b4(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x088620b4u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_08862114; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = 0u + 0x00000001u;
    mem_w32(ram, c->r[3] + 0x00000024u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[7] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[8] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = mem_r32(ram, c->r[2] + 0x00000028u);
    c->r[6] = mem_r32(ram, c->r[3] + 0x0000002cu);
    c->r[7] = mem_r32(ram, c->r[7] + 0x00000030u);
    { c->r[31] = 0x0886210cu; c->r[8] = mem_r32(ram, c->r[8] + 0x00000034u); func_08862234(c, ram); }
    { goto L_0886214c; }
L_08862114:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    mem_w32(ram, c->r[2] + 0x00000024u, 0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000001cu);
    c->r[3] = c->r[2] + 0xffffffffu;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000020u);
    c->r[2] = c->r[2] + 0xffffffffu;
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = 0u + 0u;
    c->r[6] = 0u + 0u;
    c->r[7] = c->r[3] + 0u;
    { c->r[31] = 0x0886214cu; c->r[8] = c->r[2] + 0u; func_08862234(c, ram); }
L_0886214c:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_088620b4 */
}

/* func_08865f60  0x08865f60..0x08866264  772 bytes, source=fde */
void func_08865f60(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08865f60u);
    c->r[29] = c->r[29] + 0xffffffa0u;
    mem_w32(ram, c->r[29] + 0x00000058u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000054u, c->r[30]);
    mem_w32(ram, c->r[29] + 0x00000050u, c->r[16]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r16(ram, c->r[2] + 0x00000014u);
    c->r[2] = c->r[2] & 0x0002u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_08866008; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000004u);
    c->r[2] = c->r[2] + 0x00000030u;
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[5] = mem_r32(ram, c->r[3] + 0x00000004u);
    { c->r[31] = 0x08865fb0u; c->r[6] = c->r[2] + 0u; func_08865e8c(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000004u);
    c->r[3] = c->r[2] + 0x00000010u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000004u);
    c->r[2] = c->r[2] + 0x00000040u;
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[5] = c->r[3] + 0u;
    { c->r[31] = 0x08865fd8u; c->r[6] = c->r[2] + 0u; func_08865e8c(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000004u);
    c->r[3] = c->r[2] + 0x00000020u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000004u);
    c->r[2] = c->r[2] + 0x00000050u;
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[5] = c->r[3] + 0u;
    { c->r[31] = 0x08866000u; c->r[6] = c->r[2] + 0u; func_08865e8c(c, ram); }
    { goto L_088660ac; }
L_08866008:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[4] = mem_r32(ram, c->r[2] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000004u);
    c->r[3] = c->r[2] + 0x00000030u;
    c->r[2] = mem_r32(ram, c->r[3] + 0x00000000u);
    mem_w32(ram, c->r[4] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[3] + 0x00000004u);
    mem_w32(ram, c->r[4] + 0x00000004u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[3] + 0x00000008u);
    mem_w32(ram, c->r[4] + 0x00000008u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[3] + 0x0000000cu);
    mem_w32(ram, c->r[4] + 0x0000000cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000004u);
    c->r[4] = c->r[2] + 0x00000010u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000004u);
    c->r[3] = c->r[2] + 0x00000040u;
    c->r[2] = mem_r32(ram, c->r[3] + 0x00000000u);
    mem_w32(ram, c->r[4] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[3] + 0x00000004u);
    mem_w32(ram, c->r[4] + 0x00000004u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[3] + 0x00000008u);
    mem_w32(ram, c->r[4] + 0x00000008u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[3] + 0x0000000cu);
    mem_w32(ram, c->r[4] + 0x0000000cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000004u);
    c->r[4] = c->r[2] + 0x00000020u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000004u);
    c->r[3] = c->r[2] + 0x00000050u;
    c->r[2] = mem_r32(ram, c->r[3] + 0x00000000u);
    mem_w32(ram, c->r[4] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[3] + 0x00000004u);
    mem_w32(ram, c->r[4] + 0x00000004u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[3] + 0x00000008u);
    mem_w32(ram, c->r[4] + 0x00000008u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[3] + 0x0000000cu);
    mem_w32(ram, c->r[4] + 0x0000000cu, c->r[2]);
L_088660ac:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[16] = c->r[2] + 0x00000020u;
    c->r[4] = c->r[30] + 0x00000010u;
    c->r[2] = 0x08a80000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00002ed8u);
    c->r[2] = c->r[2] + 0x00000020u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x088660d4u; c->r[6] = mem_r32(ram, c->r[3] + 0x00000004u); func_08859f30(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    mem_w32(ram, c->r[16] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    mem_w32(ram, c->r[16] + 0x00000004u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    mem_w32(ram, c->r[16] + 0x00000008u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    mem_w32(ram, c->r[16] + 0x0000000cu, c->r[2]);
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x08866100u; c->r[4] = c->r[4] + 0x00000af4u; func_08826a78(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = 0u + 0x00000004u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_088661dc; }
    c->r[2] = 0x08a80000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00002ed8u);
    c->r[3] = c->r[2] + 0x00000020u;
    c->r[2] = mem_r32(ram, c->r[3] + 0x00000000u);
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[3] + 0x00000004u);
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[3] + 0x00000008u);
    mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[3] + 0x0000000cu);
    mem_w32(ram, c->r[30] + 0x0000001cu, c->r[2]);
    c->r[2] = c->r[30] + 0x00000010u;
    { c->r[31] = 0x08866148u; c->r[4] = c->r[2] + 0u; func_08886934(c, ram); }
    c->f[1] = c->f[0];
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00003188u);
    c->f[0] = c->f[1] + c->f[0];
    mem_wf32(ram, c->r[30] + 0x00000020u, c->f[0]);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000014u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000020u);
    alx_c_cond_s(c, 12, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_0886617c; }
    { goto L_08866188; }
L_0886617c:
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000014u);
    { mem_wf32(ram, c->r[30] + 0x00000040u, c->f[0]); goto L_08866190; }
L_08866188:
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000020u);
    mem_wf32(ram, c->r[30] + 0x00000040u, c->f[0]);
L_08866190:
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000040u);
    mem_wf32(ram, c->r[30] + 0x00000014u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[16] = c->r[2] + 0x00000020u;
    c->r[2] = c->r[30] + 0x00000030u;
    c->r[3] = c->r[30] + 0x00000010u;
    c->r[6] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[4] = c->r[2] + 0u;
    c->r[5] = c->r[3] + 0u;
    { c->r[31] = 0x088661bcu; c->r[6] = mem_r32(ram, c->r[6] + 0x00000004u); func_08859f30(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000030u);
    mem_w32(ram, c->r[16] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000034u);
    mem_w32(ram, c->r[16] + 0x00000004u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000038u);
    mem_w32(ram, c->r[16] + 0x00000008u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000003cu);
    mem_w32(ram, c->r[16] + 0x0000000cu, c->r[2]);
L_088661dc:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[16] = c->r[2] + 0x00000030u;
    c->r[4] = c->r[30] + 0x00000030u;
    c->r[2] = 0x08a80000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00002ed8u);
    c->r[3] = c->r[2] + 0x00000020u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000004u);
    c->r[2] = c->r[2] + 0x00000010u;
    c->r[5] = c->r[3] + 0u;
    { c->r[31] = 0x0886620cu; c->r[6] = c->r[2] + 0u; func_08859f30(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000030u);
    mem_w32(ram, c->r[16] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000034u);
    mem_w32(ram, c->r[16] + 0x00000004u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000038u);
    mem_w32(ram, c->r[16] + 0x00000008u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000003cu);
    mem_w32(ram, c->r[16] + 0x0000000cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = c->r[2] + 0x00000040u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000004u);
    c->r[2] = c->r[2] + 0x00000020u;
    c->r[4] = c->r[3] + 0u;
    { c->r[31] = 0x0886624cu; c->r[5] = c->r[2] + 0u; func_0884c1d8(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000058u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000054u);
    c->r[16] = mem_r32(ram, c->r[29] + 0x00000050u);
    { c->r[29] = c->r[29] + 0x00000060u; return; }
    return; /* fell out of func_08865f60 */
}

/* func_0886b5f4  0x0886b5f4..0x0886b688  148 bytes, source=sweep */
void func_0886b5f4(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0886b5f4u);
    c->r[29] = c->r[29] + 0xffffffd0u;
    mem_w32(ram, c->r[29] + 0x00000024u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000020u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[6]);
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[7]);
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[8]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x0000008cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[3] | c->r[2];
    mem_w32(ram, c->r[4] + 0x0000008cu, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = 0u + 0x00000001u;
    mem_w8(ram, c->r[3] + 0x000000c9u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = 0u + 0x0000000cu;
    mem_w8(ram, c->r[3] + 0x00000087u, c->r[2]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x0886b654u; c->r[5] = mem_r32(ram, c->r[30] + 0x00000008u); func_0884d1b0(c, ram); }
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[30] + 0x0000000cu);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x0886b664u; c->r[5] = c->r[2] + 0u; func_088679d4(c, ram); }
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[30] + 0x00000010u);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x0886b674u; c->r[5] = c->r[2] + 0u; func_088679a0(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000024u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000020u);
    { c->r[29] = c->r[29] + 0x00000030u; return; }
    return; /* fell out of func_0886b5f4 */
}

/* func_08870c98  0x08870c98..0x08870ee8  592 bytes, source=fde */
void func_08870c98(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08870c98u);
    c->r[29] = c->r[29] + 0xffffffc0u;
    mem_w32(ram, c->r[29] + 0x00000038u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000034u, c->r[30]);
    mem_w32(ram, c->r[29] + 0x00000030u, c->r[16]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000021cu);
    c->r[2] = c->r[2] & 0x0080u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_08870ed0; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000021cu);
    c->r[2] = c->r[2] & 0x0020u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_08870ed0; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x0000003cu);
    { int _c = (c->r[2] != 0u); if (_c) goto L_08870dd0; }
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x08870cf8u; c->r[4] = c->r[4] + 0x00000af4u; func_0880d294(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = 0u + 0x00000002u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_08870d18; }
    { c->r[31] = 0x08870d10u; func_0896f56c(c, ram); }
    { c->r[31] = 0x08870d18u; func_08970ab8(c, ram); }
L_08870d18:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    mem_w16(ram, c->r[2] + 0x000000b0u, 0u);
    c->r[16] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x08870d30u; c->r[4] = c->r[4] + 0x00000af4u; func_08826a78(c, ram); }
    mem_w8(ram, c->r[16] + 0x00000002u, c->r[2]);
    c->r[4] = 0u + 0x00000004u;
    { c->r[31] = 0x08870d40u; c->r[5] = 0u + 0u; func_088663bc(c, ram); }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = mem_r8(ram, c->r[2] + 0x00000011u);
    c->r[2] = 0u + 0xffffffdfu;
    c->r[2] = c->r[3] & c->r[2];
    mem_w8(ram, c->r[4] + 0x00000011u, c->r[2]);
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x08870d64u; c->r[4] = c->r[4] + 0x00000af4u; func_0887c318(c, ram); }
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x08870d70u; c->r[4] = c->r[4] + 0x00000af4u; func_0880d294(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = 0u + 0x00000002u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_08870d90; }
    { c->r[31] = 0x08870d88u; func_0896a3e4(c, ram); }
    { c->r[31] = 0x08870d90u; c->r[4] = c->r[2] + 0u; func_0896f78c(c, ram); }
L_08870d90:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x0000021cu);
    c->r[2] = 0u + 0xfffff0ffu;
    c->r[2] = c->r[3] & c->r[2];
    mem_w32(ram, c->r[4] + 0x0000021cu, c->r[2]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = 0u + 0x0000001bu;
    c->r[6] = 0u + 0u;
    { c->r[31] = 0x08870dbcu; c->r[7] = 0u + 0u; func_0884f888(c, ram); }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = 0u + 0x000000a1u;
    mem_w16(ram, c->r[3] + 0x0000003cu, c->r[2]);
    c->r[1] = 0x08a90000u;
    mem_w32(ram, c->r[1] + 0xffffbe70u, 0u);
L_08870dd0:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x0000003cu);
    c->r[2] = 0u + 0x00000001u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_08870ebc; }
    c->r[2] = 0x08a90000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0xffffbe70u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_08870ed0; }
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x08870e00u; c->r[4] = c->r[4] + 0x00000af4u; func_0880d294(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = 0u + 0x00000002u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_08870e30; }
    c->r[2] = c->r[30] + 0x00000010u;
    { c->r[31] = 0x08870e1cu; c->r[4] = c->r[2] + 0u; func_0899cc54(c, ram); }
    c->r[2] = c->r[30] + 0x00000010u;
    { c->r[31] = 0x08870e28u; c->r[4] = c->r[2] + 0u; func_0886f2f0(c, ram); }
    { goto L_08870e7c; }
L_08870e30:
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x08870e3cu; c->r[4] = c->r[4] + 0x00000af4u; func_0880d410(c, ram); }
    mem_w8(ram, c->r[30] + 0x00000020u, c->r[2]);
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x08870e4cu; c->r[4] = c->r[4] + 0x00000af4u; func_08813c28(c, ram); }
    mem_w8(ram, c->r[30] + 0x00000021u, c->r[2]);
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x08870e5cu; c->r[4] = c->r[4] + 0x00000af4u; func_08813c50(c, ram); }
    mem_w8(ram, c->r[30] + 0x00000022u, c->r[2]);
    c->r[2] = mem_r16(ram, c->r[30] + 0x00000020u);
    mem_w16(ram, c->r[30] + 0x00000010u, c->r[2]);
    c->r[2] = mem_r8(ram, c->r[30] + 0x00000022u);
    mem_w8(ram, c->r[30] + 0x00000012u, c->r[2]);
    c->r[2] = c->r[30] + 0x00000010u;
    { c->r[31] = 0x08870e7cu; c->r[4] = c->r[2] + 0u; func_0886f2f0(c, ram); }
L_08870e7c:
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x08870e88u; c->r[4] = c->r[4] + 0x00000af4u; func_08826aa0(c, ram); }
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000af4u;
    { c->r[31] = 0x08870e98u; c->r[5] = c->r[2] + 0u; func_08867a08(c, ram); }
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x08870ea4u; c->r[4] = c->r[4] + 0x00000af4u; func_08826a78(c, ram); }
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x08870eb0u; c->r[5] = 0u + 0u; func_088663bc(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    { mem_w16(ram, c->r[2] + 0x0000003cu, 0u); goto L_08870ed0; }
L_08870ebc:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r16(ram, c->r[2] + 0x0000003cu);
    c->r[2] = c->r[2] + 0xffffffffu;
    mem_w16(ram, c->r[3] + 0x0000003cu, c->r[2]);
L_08870ed0:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000038u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000034u);
    c->r[16] = mem_r32(ram, c->r[29] + 0x00000030u);
    { c->r[29] = c->r[29] + 0x00000040u; return; }
    return; /* fell out of func_08870c98 */
}

/* func_0887adc8  0x0887adc8..0x0887b3f8  1584 bytes, source=fde */
void func_0887adc8(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0887adc8u);
    c->r[29] = c->r[29] + 0xffffff70u;
    mem_w32(ram, c->r[29] + 0x00000084u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000080u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[6]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000004u);
    { c->r[31] = 0x0887adf0u; c->r[5] = mem_r32(ram, c->r[30] + 0x00000008u); func_0887a320(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x0000390cu);
    mem_wf32(ram, c->r[2] + 0x000000ccu, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x0000390cu);
    mem_wf32(ram, c->r[2] + 0x000000d0u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x0000390cu);
    mem_wf32(ram, c->r[2] + 0x000000d4u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    mem_w32(ram, c->r[2] + 0x000000d8u, 0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    mem_w32(ram, c->r[2] + 0x000000e8u, 0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    mem_w32(ram, c->r[2] + 0x000000ecu, 0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    mem_w32(ram, c->r[2] + 0x000000f0u, 0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    mem_w32(ram, c->r[2] + 0x000000f4u, 0u);
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x0887ae54u; c->r[4] = c->r[4] + 0x00000af4u; func_0880810c(c, ram); }
    c->r[2] = ((s32)c->r[2] < (s32)0x00000004u) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_0887aec4; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x000000a4u);
    c->f[0] = mem_rf32(ram, c->r[3] + 0x00000018u);
    alx_c_cond_s(c, 14, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_0887aea4; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x000000f8u);
    c->f[0] = u2f(0u);
    alx_c_cond_s(c, 12, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_0887aea4; }
    { goto L_0887aeac; }
L_0887aea4:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    mem_w32(ram, c->r[2] + 0x000000f8u, 0u);
L_0887aeac:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = 0x08a90000u;
    c->r[5] = c->r[5] + 0xffffb9c0u;
    c->r[6] = 0x08a90000u;
    { c->r[31] = 0x0887aec4u; c->r[6] = mem_r32(ram, c->r[6] + 0xffffbda0u); func_08871a4c(c, ram); }
L_0887aec4:
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x0887aed0u; c->r[4] = c->r[4] + 0x00000af4u; func_08826cc8(c, ram); }
    { int _c = (c->r[2] != 0u); if (_c) goto L_0887aeec; }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x0887aee4u; c->r[5] = mem_r32(ram, c->r[30] + 0x00000004u); func_08873408(c, ram); }
    { goto L_0887af24; }
L_0887aeec:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x000003e0u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000184u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00003910u);
    c->f[1] = c->f[1] * c->f[0];
    c->f[0] = mem_rf32(ram, c->r[3] + 0x00000040u);
    c->f[0] = c->f[0] - c->f[1];
    mem_wf32(ram, c->r[4] + 0x00000040u, c->f[0]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x0887af24u; c->r[5] = mem_r32(ram, c->r[30] + 0x00000004u); func_088735b0(c, ram); }
L_0887af24:
    c->r[2] = c->r[30] + 0x00000010u;
    { c->r[31] = 0x0887af30u; c->r[4] = c->r[2] + 0u; func_08808260(c, ram); }
    { c->r[31] = 0x0887af38u; func_08867ab8(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = c->r[30] + 0x00000010u;
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0u + 0u;
    { c->r[31] = 0x0887af50u; c->r[6] = c->r[3] + 0u; func_0884c668(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = c->r[2] + 0x00000140u;
    c->r[2] = mem_r32(ram, c->r[3] + 0x00000000u);
    mem_w32(ram, c->r[30] + 0x00000050u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[3] + 0x00000004u);
    mem_w32(ram, c->r[30] + 0x00000054u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[3] + 0x00000008u);
    mem_w32(ram, c->r[30] + 0x00000058u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[3] + 0x0000000cu);
    mem_w32(ram, c->r[30] + 0x0000005cu, c->r[2]);
    c->r[2] = c->r[30] + 0x00000050u;
    c->r[3] = c->r[30] + 0x00000050u;
    c->r[6] = c->r[30] + 0x00000010u;
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x0887af90u; c->r[5] = c->r[3] + 0u; func_0884c26c(c, ram); }
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000050u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00003914u);
    c->f[0] = c->f[1] * c->f[0];
    mem_wf32(ram, c->r[30] + 0x00000050u, c->f[0]);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000054u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00003914u);
    c->f[0] = c->f[1] * c->f[0];
    mem_wf32(ram, c->r[30] + 0x00000054u, c->f[0]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x0000021cu);
    c->r[2] = 0u + 0xfffffff7u;
    c->r[2] = c->r[3] & c->r[2];
    mem_w32(ram, c->r[4] + 0x0000021cu, c->r[2]);
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x0887afdcu; c->r[4] = c->r[4] + 0x00000af4u; func_0880810c(c, ram); }
    c->r[2] = ((s32)c->r[2] < (s32)0x00000004u) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_0887b12c; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x000000b4u);
    mem_wf32(ram, c->r[30] + 0x00000060u, c->f[0]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000004u);
    { c->r[31] = 0x0887b004u; c->f[12] = mem_rf32(ram, c->r[30] + 0x00000060u); func_0887b3f8(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x000000b4u);
    mem_wf32(ram, c->r[30] + 0x00000064u, c->f[0]);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000064u);
    c->f[0] = u2f(0u);
    alx_c_cond_s(c, 12, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_0887b030; }
    { goto L_0887b058; }
L_0887b030:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000064u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000024u);
    c->f[1] = c->f[1] * c->f[0];
    c->f[0] = mem_rf32(ram, c->r[3] + 0x000000a4u);
    c->f[0] = c->f[0] + c->f[1];
    { mem_wf32(ram, c->r[4] + 0x000000a4u, c->f[0]); goto L_0887b07c; }
L_0887b058:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000064u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000028u);
    c->f[1] = c->f[1] * c->f[0];
    c->f[0] = mem_rf32(ram, c->r[3] + 0x000000a4u);
    c->f[0] = c->f[0] + c->f[1];
    mem_wf32(ram, c->r[4] + 0x000000a4u, c->f[0]);
L_0887b07c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x000000a4u);
    c->f[0] = u2f(0u);
    alx_c_cond_s(c, 12, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_0887b0a0; }
    { goto L_0887b0ac; }
L_0887b0a0:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    { mem_w32(ram, c->r[2] + 0x000000a4u, 0u); goto L_0887b0e4; }
L_0887b0ac:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x000000a4u);
    c->f[0] = mem_rf32(ram, c->r[3] + 0x00000010u);
    alx_c_cond_s(c, 12, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_0887b0d4; }
    { goto L_0887b0e4; }
L_0887b0d4:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->f[0] = mem_rf32(ram, c->r[3] + 0x00000010u);
    mem_wf32(ram, c->r[2] + 0x000000a4u, c->f[0]);
L_0887b0e4:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[6] = mem_r32(ram, c->r[2] + 0x000003e0u);
    c->f[12] = u2f(0u);
    { c->r[31] = 0x0887b100u; func_08873bb4(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000068u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000068u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_0887b33c; }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x0000021cu);
    c->r[2] = 0u + 0xffffffefu;
    c->r[2] = c->r[3] & c->r[2];
    { mem_w32(ram, c->r[4] + 0x0000021cu, c->r[2]); goto L_0887b33c; }
L_0887b12c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x000000b4u);
    c->f[0] = u2f(0u);
    alx_c_cond_s(c, 12, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_0887b150; }
    { goto L_0887b160; }
L_0887b150:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x000000b4u);
    { mem_wf32(ram, c->r[30] + 0x00000060u, c->f[0]); goto L_0887b164; }
L_0887b160:
    mem_w32(ram, c->r[30] + 0x00000060u, 0u);
L_0887b164:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000004u);
    { c->r[31] = 0x0887b174u; c->f[12] = mem_rf32(ram, c->r[30] + 0x00000060u); func_0887b3f8(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x000000a4u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00003918u);
    alx_c_cond_s(c, 14, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_0887b19c; }
    { goto L_0887b1d8; }
L_0887b19c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x000000bcu);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x0000390cu);
    alx_c_cond_s(c, 14, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_0887b1c4; }
    { goto L_0887b2ac; }
L_0887b1c4:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->f[0] = mem_rf32(ram, c->r[3] + 0x00000014u);
    { mem_wf32(ram, c->r[2] + 0x000000a4u, c->f[0]); goto L_0887b2ac; }
L_0887b1d8:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x000000b4u);
    c->f[0] = u2f(0u);
    alx_c_cond_s(c, 12, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_0887b1fc; }
    { goto L_0887b240; }
L_0887b1fc:
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x000000b4u);
    c->f[0] = mem_rf32(ram, c->r[3] + 0x00000024u);
    c->f[1] = c->f[1] * c->f[0];
    c->r[1] = 0x08a80000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00002e40u);
    c->f[1] = c->f[1] * c->f[0];
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x0000391cu);
    c->f[1] = c->f[1] * c->f[0];
    c->f[0] = mem_rf32(ram, c->r[4] + 0x000000a4u);
    c->f[0] = c->f[0] + c->f[1];
    { mem_wf32(ram, c->r[5] + 0x000000a4u, c->f[0]); goto L_0887b280; }
L_0887b240:
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x000000b4u);
    c->f[0] = mem_rf32(ram, c->r[3] + 0x00000028u);
    c->f[1] = c->f[1] * c->f[0];
    c->r[1] = 0x08a80000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00002e40u);
    c->f[1] = c->f[1] * c->f[0];
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x0000391cu);
    c->f[1] = c->f[1] * c->f[0];
    c->f[0] = mem_rf32(ram, c->r[4] + 0x000000a4u);
    c->f[0] = c->f[0] + c->f[1];
    mem_wf32(ram, c->r[5] + 0x000000a4u, c->f[0]);
L_0887b280:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x000000a4u);
    c->f[0] = u2f(0u);
    alx_c_cond_s(c, 12, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_0887b2a4; }
    { goto L_0887b2ac; }
L_0887b2a4:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    mem_w32(ram, c->r[2] + 0x000000a4u, 0u);
L_0887b2ac:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = c->r[30] + 0x0000006cu;
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[6] = mem_r32(ram, c->r[2] + 0x000003e0u);
    { c->r[31] = 0x0887b2c8u; c->r[7] = c->r[3] + 0u; func_08873988(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = 0u + 0x00000001u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_0887b2f0; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x0000006cu);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000180u);
    c->f[0] = c->f[1] + c->f[0];
    mem_wf32(ram, c->r[3] + 0x00000024u, c->f[0]);
L_0887b2f0:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[6] = mem_r32(ram, c->r[2] + 0x000003e0u);
    c->f[12] = u2f(0u);
    { c->r[31] = 0x0887b30cu; func_08873bb4(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000068u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000068u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_0887b334; }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x0000021cu);
    c->r[2] = 0u + 0xffffffefu;
    c->r[2] = c->r[3] & c->r[2];
    mem_w32(ram, c->r[4] + 0x0000021cu, c->r[2]);
L_0887b334:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    mem_w32(ram, c->r[2] + 0x00000144u, 0u);
L_0887b33c:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = 0x08a90000u;
    { c->r[31] = 0x0887b34cu; c->r[5] = c->r[5] + 0xffffb9c0u; func_088747c8(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x000000a4u);
    c->f[0] = -c->f[0];
    { c->r[31] = 0x0887b360u; mem_wf32(ram, c->r[30] + 0x00000058u, c->f[0]); func_08867ab8(c, ram); }
    c->r[6] = c->r[2] + 0u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[2] + 0x00000140u;
    c->r[3] = c->r[30] + 0x00000050u;
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x0887b37cu; c->r[5] = c->r[3] + 0u; func_0884c26c(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000004u);
    { c->r[31] = 0x0887b390u; c->r[6] = mem_r32(ram, c->r[2] + 0x00000004u); func_08875418(c, ram); }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x0887b39cu; c->r[5] = mem_r32(ram, c->r[30] + 0x00000004u); func_088756cc(c, ram); }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = 0x08a90000u;
    c->r[5] = c->r[5] + 0xffffb9c0u;
    c->r[6] = 0x08a90000u;
    { c->r[31] = 0x0887b3b4u; c->r[6] = mem_r32(ram, c->r[6] + 0xffffbda0u); func_08878994(c, ram); }
    { c->r[31] = 0x0887b3bcu; c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u); func_089b934c(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000021cu);
    c->r[2] = c->r[2] & 0x0010u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_0887b3dc; }
    c->r[2] = 0u + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000070u, c->r[2]); goto L_0887b3e0; }
L_0887b3dc:
    mem_w32(ram, c->r[30] + 0x00000070u, 0u);
L_0887b3e0:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000070u);
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000084u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000080u);
    { c->r[29] = c->r[29] + 0x00000090u; return; }
    return; /* fell out of func_0887adc8 */
}

/* func_0887e654  0x0887e654..0x0887e6d0  124 bytes, source=sweep */
void func_0887e654(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0887e654u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x0887e674u; c->r[4] = c->r[4] + 0x00000af4u; func_08826ddc(c, ram); }
    { int _c = (c->r[2] == 0u); if (_c) goto L_0887e6b8; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000004u) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_0887e69c; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000004u;
    { mem_w32(ram, c->r[30] + 0x00000000u, c->r[2]); goto L_0887e6b8; }
L_0887e69c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000008u) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_0887e6b8; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0xfffffffcu;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[2]);
L_0887e6b8:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_0887e654 */
}

/* func_088832e0  0x088832e0..0x08883304  36 bytes, source=sweep */
void func_088832e0(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x088832e0u);
    c->r[29] = c->r[29] + 0xfffffff0u;
    mem_w32(ram, c->r[29] + 0x00000000u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    c->r[2] = 0x08a90000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0xffffe670u);
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000000u);
    { c->r[29] = c->r[29] + 0x00000010u; return; }
    return; /* fell out of func_088832e0 */
}

/* func_0888b5e0  0x0888b5e0..0x0888b6b4  212 bytes, source=fde */
void func_0888b5e0(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0888b5e0u);
    c->r[29] = c->r[29] + 0xffffffd0u;
    mem_w32(ram, c->r[29] + 0x00000024u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000020u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = 0u | 0xffffu;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_0888b674; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = 0u + 0x00000001u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_0888b674; }
    c->r[2] = 0x08a90000u;
    c->r[2] = c->r[2] + 0xffffbf40u;
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
    c->r[2] = 0u + 0x00000018u;
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = 0u + 0xffffffffu;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_0888b674; }
L_0888b644:
    { c->r[31] = 0x0888b64cu; c->r[4] = mem_r32(ram, c->r[30] + 0x0000000cu); func_088903c4(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x00000160u;
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = c->r[2] + 0xffffffffu;
    c->r[3] = c->r[2] + 0u;
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[3]);
    c->r[2] = 0u + 0xffffffffu;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_0888b644; }
L_0888b674:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = 0u | 0xffffu;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_0888b6a0; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = 0u + 0x00000001u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_0888b6a0; }
    c->r[4] = 0x08a90000u;
    { c->r[31] = 0x0888b6a0u; c->r[4] = c->r[4] + 0xffffe820u; func_0888dd78(c, ram); }
L_0888b6a0:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000024u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000020u);
    { c->r[29] = c->r[29] + 0x00000030u; return; }
    return; /* fell out of func_0888b5e0 */
}

/* func_0888c30c  0x0888c30c..0x0888c350  68 bytes, source=sweep */
void func_0888c30c(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0888c30cu);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = 0x24000000u;
    c->r[2] = c->r[2] | c->r[3];
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x0888c33cu; c->r[5] = c->r[2] + 0u; func_0888b984(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_0888c30c */
}

/* func_0888ce34  0x0888ce34..0x0888cee0  172 bytes, source=sweep */
void func_0888ce34(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0888ce34u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_0888ce94; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = 0u + 0x00000001u;
    mem_w32(ram, c->r[3] + 0x00000024u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[7] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[8] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = mem_r32(ram, c->r[2] + 0x00000028u);
    c->r[6] = mem_r32(ram, c->r[3] + 0x0000002cu);
    c->r[7] = mem_r32(ram, c->r[7] + 0x00000030u);
    { c->r[31] = 0x0888ce8cu; c->r[8] = mem_r32(ram, c->r[8] + 0x00000034u); func_0888d3e4(c, ram); }
    { goto L_0888cecc; }
L_0888ce94:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    mem_w32(ram, c->r[2] + 0x00000024u, 0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000001cu);
    c->r[3] = c->r[2] + 0xffffffffu;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000020u);
    c->r[2] = c->r[2] + 0xffffffffu;
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = 0u + 0u;
    c->r[6] = 0u + 0u;
    c->r[7] = c->r[3] + 0u;
    { c->r[31] = 0x0888ceccu; c->r[8] = c->r[2] + 0u; func_0888d3e4(c, ram); }
L_0888cecc:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_0888ce34 */
}

/* func_0888e628  0x0888e628..0x0888e694  108 bytes, source=fde */
void func_0888e628(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0888e628u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_wf32(ram, c->r[30] + 0x00000004u, c->f[12]);
    mem_wf32(ram, c->r[30] + 0x00000008u, c->f[13]);
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[5]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000004u);
    mem_wf32(ram, c->r[2] + 0x00000048u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000008u);
    mem_wf32(ram, c->r[2] + 0x00000050u, c->f[0]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    mem_w32(ram, c->r[3] + 0x00000058u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = mem_r32(ram, c->r[2] + 0x00000068u);
    { c->r[31] = 0x0888e680u; c->r[6] = 0u + 0x00000001u; func_08890f54(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_0888e628 */
}

/* func_08892c24  0x08892c24..0x08892d48  292 bytes, source=sweep */
void func_08892c24(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08892c24u);
    c->r[29] = c->r[29] + 0xffffffd0u;
    mem_w32(ram, c->r[29] + 0x00000020u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[6]);
    mem_w32(ram, c->r[30] + 0x00000014u, 0u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    vfpu_exec(c, ram, 0xd8600000u); /* lv.q */
    vfpu_exec(c, ram, 0xd8410000u); /* lv.q */
    vfpu_exec(c, ram, 0xdfe03c00u); /* vfim.s */
    mem_w32(ram, c->r[30] + 0x00000018u, 0u);
L_08892c58:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000006u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_08892c70; }
    { goto L_08892d2c; }
L_08892c70:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[3] = c->r[2] << 4;
    c->r[2] = mem_r32(ram, c->r[4] + 0x0000009cu);
    c->r[3] = c->r[3] + c->r[2];
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[4] = c->r[2] << 4;
    c->r[2] = mem_r32(ram, c->r[5] + 0x000000a0u);
    c->r[2] = c->r[4] + c->r[2];
    vfpu_exec(c, ram, 0xd8640000u); /* lv.q */
    vfpu_exec(c, ram, 0xd8450000u); /* lv.q */
    vfpu_exec(c, ram, 0x64848082u); /* vdot.q */
    vfpu_exec(c, ram, 0x64858122u); /* vdot.t */
    vfpu_exec(c, ram, 0x60220242u); /* vadd.s */
    vfpu_exec(c, ram, 0x60a20262u); /* vsub.s */
    vfpu_exec(c, ram, 0xebc2000eu); /* sv.s */
    vfpu_exec(c, ram, 0xebc20013u); /* sv.s */
    c->f[1] = mem_rf32(ram, c->r[30] + 0x0000000cu);
    c->f[0] = u2f(0u);
    alx_c_cond_s(c, 12, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_08892cd8; }
    { goto L_08892ce4; }
L_08892cd8:
    c->r[2] = 0u + 0xffffffffu;
    { mem_w32(ram, c->r[30] + 0x0000001cu, c->r[2]); goto L_08892d34; }
L_08892ce4:
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000010u);
    c->f[0] = u2f(0u);
    alx_c_cond_s(c, 12, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_08892d04; }
    { goto L_08892d1c; }
L_08892d04:
    c->r[3] = 0u + 0x00000001u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[3] = c->r[3] << (c->r[2] & 31u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = c->r[2] | c->r[3];
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
L_08892d1c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]); goto L_08892c58; }
L_08892d2c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    mem_w32(ram, c->r[30] + 0x0000001cu, c->r[2]);
L_08892d34:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000020u);
    { c->r[29] = c->r[29] + 0x00000030u; return; }
    return; /* fell out of func_08892c24 */
}

/* func_088994f0  0x088994f0..0x08899524  52 bytes, source=sweep */
void func_088994f0(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x088994f0u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x000000e0u;
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x00000020u);
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_088994f0 */
}

/* func_0889a498  0x0889a498..0x0889a4dc  68 bytes, source=sweep */
void func_0889a498(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0889a498u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = 0x25000000u;
    c->r[2] = c->r[2] | c->r[3];
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x0889a4c8u; c->r[5] = c->r[2] + 0u; func_088998c8(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_0889a498 */
}

/* func_0889edd0  0x0889edd0..0x0889ee04  52 bytes, source=sweep */
void func_0889edd0(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0889edd0u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x0889edf0u; c->r[5] = 0x9b000000u; func_0889eb70(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_0889edd0 */
}

/* func_0889fc54  0x0889fc54..0x0889fcc4  112 bytes, source=sweep */
void func_0889fc54(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0889fc54u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_0889fc88; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = 0u + 0x00000001u;
    { mem_w32(ram, c->r[3] + 0x00000060u, c->r[2]); goto L_0889fc90; }
L_0889fc88:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    mem_w32(ram, c->r[2] + 0x00000060u, 0u);
L_0889fc90:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[7] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = mem_r32(ram, c->r[2] + 0x00000064u);
    c->r[6] = mem_r32(ram, c->r[3] + 0x00000068u);
    { c->r[31] = 0x0889fcb0u; c->r[7] = mem_r32(ram, c->r[7] + 0x00000060u); func_0889fcc4(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_0889fc54 */
}

/* func_088a4054  0x088a4054..0x088a4098  68 bytes, source=sweep */
void func_088a4054(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x088a4054u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = 0x28000000u;
    c->r[2] = c->r[2] | c->r[3];
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x088a4084u; c->r[5] = c->r[2] + 0u; func_088a3304(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_088a4054 */
}

/* func_088ad540  0x088ad540..0x088ad640  256 bytes, source=sweep */
void func_088ad540(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x088ad540u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x00000008u);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[8] = 0x3e000000u;
    mem_w32(ram, c->r[3] + 0x00000000u, c->r[8]);
    c->r[8] = 0x3f000000u;
    c->r[9] = 0x3f000000u;
    c->r[10] = 0x3f000000u;
    c->r[11] = 0x3f000000u;
    c->r[8] = mem_lwr(ram, c->r[4] + 0x00000001u, c->r[8]);
    c->r[9] = mem_lwr(ram, c->r[4] + 0x00000005u, c->r[9]);
    c->r[10] = mem_lwr(ram, c->r[4] + 0x00000009u, c->r[10]);
    c->r[11] = mem_lwr(ram, c->r[4] + 0x0000000du, c->r[11]);
    mem_w32(ram, c->r[3] + 0x00000004u, c->r[8]);
    mem_w32(ram, c->r[3] + 0x00000008u, c->r[9]);
    mem_w32(ram, c->r[3] + 0x0000000cu, c->r[10]);
    mem_w32(ram, c->r[3] + 0x00000010u, c->r[11]);
    c->r[8] = 0x3f000000u;
    c->r[9] = 0x3f000000u;
    c->r[10] = 0x3f000000u;
    c->r[11] = 0x3f000000u;
    c->r[8] = mem_lwr(ram, c->r[4] + 0x00000011u, c->r[8]);
    c->r[9] = mem_lwr(ram, c->r[4] + 0x00000015u, c->r[9]);
    c->r[10] = mem_lwr(ram, c->r[4] + 0x00000019u, c->r[10]);
    c->r[11] = mem_lwr(ram, c->r[4] + 0x0000001du, c->r[11]);
    mem_w32(ram, c->r[3] + 0x00000014u, c->r[8]);
    mem_w32(ram, c->r[3] + 0x00000018u, c->r[9]);
    mem_w32(ram, c->r[3] + 0x0000001cu, c->r[10]);
    mem_w32(ram, c->r[3] + 0x00000020u, c->r[11]);
    c->r[8] = 0x3f000000u;
    c->r[9] = 0x3f000000u;
    c->r[10] = 0x3f000000u;
    c->r[11] = 0x3f000000u;
    c->r[8] = mem_lwr(ram, c->r[4] + 0x00000021u, c->r[8]);
    c->r[9] = mem_lwr(ram, c->r[4] + 0x00000025u, c->r[9]);
    c->r[10] = mem_lwr(ram, c->r[4] + 0x00000029u, c->r[10]);
    c->r[11] = mem_lwr(ram, c->r[4] + 0x0000002du, c->r[11]);
    mem_w32(ram, c->r[3] + 0x00000024u, c->r[8]);
    mem_w32(ram, c->r[3] + 0x00000028u, c->r[9]);
    mem_w32(ram, c->r[3] + 0x0000002cu, c->r[10]);
    mem_w32(ram, c->r[3] + 0x00000030u, c->r[11]);
    c->r[8] = 0x3f000000u;
    c->r[9] = 0x3f000000u;
    c->r[10] = 0x3f000000u;
    c->r[11] = 0x3f000000u;
    c->r[8] = mem_lwr(ram, c->r[4] + 0x00000031u, c->r[8]);
    c->r[9] = mem_lwr(ram, c->r[4] + 0x00000035u, c->r[9]);
    c->r[10] = mem_lwr(ram, c->r[4] + 0x00000039u, c->r[10]);
    c->r[11] = mem_lwr(ram, c->r[4] + 0x0000003du, c->r[11]);
    mem_w32(ram, c->r[3] + 0x00000034u, c->r[8]);
    mem_w32(ram, c->r[3] + 0x00000038u, c->r[9]);
    mem_w32(ram, c->r[3] + 0x0000003cu, c->r[10]);
    mem_w32(ram, c->r[3] + 0x00000040u, c->r[11]);
    c->r[3] = c->r[3] + 0x00000044u;
    mem_w32(ram, c->r[2] + 0x00000008u, c->r[3]);
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_088ad540 */
}

/* func_088ae478  0x088ae478..0x088aea1c  1444 bytes, source=fde */
void func_088ae478(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x088ae478u);
L_088ae478:
    c->r[29] = c->r[29] + 0xffffff80u;
    mem_w32(ram, c->r[29] + 0x00000074u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000070u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[2] = c->r[5] + 0u;
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[6]);
    mem_w8(ram, c->r[30] + 0x00000004u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x000000e0u;
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
    c->r[2] = mem_r8(ram, c->r[30] + 0x00000004u);
    mem_w32(ram, c->r[30] + 0x00000060u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000060u);
    c->r[2] = (c->r[3] < 0x0000001au) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_088aea08; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000060u);
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08a40000u;
    c->r[2] = c->r[2] + 0x00004758u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    { u32 _t = c->r[2]; switch (_t) { case 0x088ae478u: goto L_088ae478; case 0x088ae4dcu: goto L_088ae4dc; case 0x088ae884u: goto L_088ae884; case 0x088ae8b0u: goto L_088ae8b0; case 0x088ae9d8u: goto L_088ae9d8; case 0x088ae9e8u: goto L_088ae9e8; case 0x088aea08u: goto L_088aea08; default: recomp_trap_unknown_indirect(c, ram, 0x088ae4d4u, _t); return; } }
L_088ae4dc:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000010u);
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x088ae4f4u; c->r[5] = 0u + 0u; func_088679a0(c, ram); }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x088ae500u; c->r[5] = 0u + 0u; func_088679d4(c, ram); }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x088ae50cu; c->r[5] = 0u + 0x00000020u; func_0884d1b0(c, ram); }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = 0x08a40000u;
    { c->r[31] = 0x088ae51cu; c->r[5] = c->r[5] + 0x000046f8u; func_089c35a0(c, ram); }
    c->r[1] = 0x08aa0000u;
    mem_w32(ram, c->r[1] + 0xffff8bc0u, c->r[2]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = 0x08a40000u;
    { c->r[31] = 0x088ae534u; c->r[5] = c->r[5] + 0x00004700u; func_089c35a0(c, ram); }
    c->r[1] = 0x08aa0000u;
    mem_w32(ram, c->r[1] + 0xffff8c50u, c->r[2]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = 0x08a40000u;
    { c->r[31] = 0x088ae54cu; c->r[5] = c->r[5] + 0x0000470cu; func_089c35a0(c, ram); }
    c->r[1] = 0x08aa0000u;
    mem_w32(ram, c->r[1] + 0xffff8c54u, c->r[2]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = 0x08a40000u;
    { c->r[31] = 0x088ae564u; c->r[5] = c->r[5] + 0x00004718u; func_089c35a0(c, ram); }
    c->r[1] = 0x08aa0000u;
    mem_w32(ram, c->r[1] + 0xffff8c58u, c->r[2]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = 0x08a40000u;
    { c->r[31] = 0x088ae57cu; c->r[5] = c->r[5] + 0x00004724u; func_089c35a0(c, ram); }
    c->r[1] = 0x08aa0000u;
    mem_w32(ram, c->r[1] + 0xffff8c5cu, c->r[2]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = 0x08a40000u;
    { c->r[31] = 0x088ae594u; c->r[5] = c->r[5] + 0x00004730u; func_089c35a0(c, ram); }
    c->r[1] = 0x08aa0000u;
    mem_w32(ram, c->r[1] + 0xffff8c60u, c->r[2]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = 0x08a40000u;
    { c->r[31] = 0x088ae5acu; c->r[5] = c->r[5] + 0x0000473cu; func_089c35a0(c, ram); }
    c->r[1] = 0x08aa0000u;
    mem_w32(ram, c->r[1] + 0xffff8c64u, c->r[2]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = 0x08a40000u;
    { c->r[31] = 0x088ae5c4u; c->r[5] = c->r[5] + 0x00004748u; func_089c35a0(c, ram); }
    c->r[1] = 0x08aa0000u;
    mem_w32(ram, c->r[1] + 0xffff8bc8u, c->r[2]);
    c->r[2] = 0x08aa0000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0xffff8bc0u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_088ae878; }
    c->r[2] = 0x08aa0000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0xffff8bc0u);
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
    c->r[4] = 0x08a70000u;
    { c->r[31] = 0x088ae5f4u; c->r[4] = c->r[4] + 0xffffb640u; func_0888da7c(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[3] = 0x08aa0000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0xffff8bc0u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000001cu);
    c->r[2] = c->r[3] + c->r[2];
    mem_w32(ram, c->r[30] + 0x0000001cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[3] = mem_r16(ram, c->r[2] + 0x0000000eu);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[3];
    c->r[2] = c->r[2] << 2;
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[5] = mem_r32(ram, c->r[30] + 0x0000001cu);
    { c->r[31] = 0x088ae638u; c->r[6] = c->r[2] + 0u; func_08a19db8(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[1] = 0x08aa0000u;
    mem_w32(ram, c->r[1] + 0xffff8bc4u, c->r[2]);
    c->r[2] = 0x08aa0000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0xffff8bc0u);
    c->r[2] = c->r[2] + 0x00000020u;
    mem_w32(ram, c->r[30] + 0x00000020u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[3] = mem_r16(ram, c->r[2] + 0x00000012u);
    c->r[2] = 0x08aa0000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0xffff8bc0u);
    c->r[2] = c->r[2] + c->r[3];
    mem_w32(ram, c->r[30] + 0x00000024u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[3] = 0x08aa0000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0xffff8bc0u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000014u);
    c->r[2] = c->r[3] + c->r[2];
    mem_w32(ram, c->r[30] + 0x00000028u, c->r[2]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000028u);
    c->r[2] = c->r[2] + 0x00000002u;
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x00000000u);
    c->r[3] = c->r[2] << 5;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000024u);
    c->r[2] = c->r[2] + c->r[3];
    mem_w32(ram, c->r[4] + 0x00000000u, c->r[2]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[3] = 0x08aa0000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0xffff8bc0u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000000cu);
    c->r[2] = c->r[3] + c->r[2];
    mem_w32(ram, c->r[4] + 0x00000008u, c->r[2]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[3] = 0x08aa0000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0xffff8bc0u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000001cu);
    c->r[2] = c->r[3] + c->r[2];
    mem_w32(ram, c->r[4] + 0x00000010u, c->r[2]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000008u);
    c->r[3] = 0x08aa0000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0xffff8bc4u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[2] = c->r[3] + c->r[2];
    mem_w32(ram, c->r[4] + 0x00000018u, c->r[2]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[3] = 0x08aa0000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0xffff8bc0u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000018u);
    c->r[3] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000010u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[2] = c->r[3] + c->r[2];
    mem_w32(ram, c->r[4] + 0x00000014u, c->r[2]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000028u);
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x00000000u);
    c->r[3] = c->r[2] << 5;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000024u);
    c->r[2] = c->r[2] + c->r[3];
    mem_w32(ram, c->r[4] + 0x00000004u, c->r[2]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000004u);
    c->r[3] = 0x08aa0000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0xffff8bc0u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000000cu);
    c->r[2] = c->r[3] + c->r[2];
    mem_w32(ram, c->r[4] + 0x0000000cu, c->r[2]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000000cu);
    c->r[3] = 0x08aa0000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0xffff8bc4u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[2] = c->r[3] + c->r[2];
    mem_w32(ram, c->r[4] + 0x0000001cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000000cu);
    c->r[2] = mem_r16(ram, c->r[2] + 0x00000006u);
    c->r[4] = c->r[2] << 2;
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000000cu);
    c->r[3] = mem_r16(ram, c->r[2] + 0x00000004u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[2] = c->r[4] + c->r[2];
    mem_w32(ram, c->r[30] + 0x0000002cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000001cu);
    mem_w32(ram, c->r[30] + 0x00000030u, c->r[2]);
    mem_w32(ram, c->r[30] + 0x00000034u, 0u);
L_088ae7cc:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000034u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000002cu);
    c->r[2] = ((s32)c->r[2] < (s32)c->r[3]) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_088ae7e8; }
    { goto L_088ae81c; }
L_088ae7e8:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000030u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000030u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x00000004u);
    c->r[2] = 0xff000000u;
    c->r[2] = c->r[3] | c->r[2];
    mem_w32(ram, c->r[4] + 0x00000004u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000030u);
    c->r[2] = c->r[2] + 0x00000014u;
    mem_w32(ram, c->r[30] + 0x00000030u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000034u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000034u, c->r[2]); goto L_088ae7cc; }
L_088ae81c:
    c->r[4] = 0x08aa0000u;
    { c->r[31] = 0x088ae828u; c->r[4] = c->r[4] + 0xffff8bd0u; func_08808280(c, ram); }
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00004754u);
    c->r[1] = 0x08a40000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0x00004754u);
    c->r[1] = 0x08a40000u;
    c->f[2] = mem_rf32(ram, c->r[1] + 0x00004754u);
    c->r[4] = 0x08aa0000u;
    c->r[4] = c->r[4] + 0xffff8bd0u;
    c->f[12] = c->f[0];
    c->f[13] = c->f[1];
    { c->r[31] = 0x088ae858u; c->f[14] = c->f[2]; func_0881a114(c, ram); }
    c->r[2] = 0x08aa0000u;
    c->r[2] = c->r[2] + 0xffff8c10u;
    c->r[3] = 0x08aa0000u;
    c->r[3] = c->r[3] + 0xffff8bd0u;
    c->r[4] = c->r[2] + 0u;
    c->r[5] = c->r[3] + 0u;
    { c->r[31] = 0x088ae878u; c->r[6] = 0u + 0x00000040u; func_08a19db8(c, ram); }
L_088ae878:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    { mem_w32(ram, c->r[2] + 0x00000020u, 0u); goto L_088aea08; }
L_088ae884:
    c->r[2] = 0x08a90000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0xffffbf20u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_088ae8a4; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0u + 0x00000002u;
    { mem_w32(ram, c->r[3] + 0x00000020u, c->r[2]); goto L_088aea08; }
L_088ae8a4:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    { mem_w32(ram, c->r[2] + 0x00000020u, 0u); goto L_088aea08; }
L_088ae8b0:
    c->r[3] = c->r[30] + 0x00000040u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000000u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00004754u);
    c->f[3] = c->f[1] * c->f[0];
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000004u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00004754u);
    c->f[2] = c->f[1] * c->f[0];
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000008u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00004754u);
    c->f[0] = c->f[1] * c->f[0];
    c->r[4] = c->r[3] + 0u;
    c->f[12] = c->f[3];
    c->f[13] = c->f[2];
    c->f[14] = c->f[0];
    c->f[15] = u2f(0u);
    { c->r[31] = 0x088ae918u; func_0880d140(c, ram); }
    c->r[2] = 0x08aa0000u;
    c->r[2] = c->r[2] + 0xffff8c00u;
    { c->r[31] = 0x088ae928u; mem_w32(ram, c->r[30] + 0x00000034u, c->r[2]); func_088820b0(c, ram); }
    c->r[3] = c->r[2] + 0x00000020u;
    c->r[2] = c->r[30] + 0x00000040u;
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000034u);
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x088ae940u; c->r[6] = c->r[3] + 0u; func_08820ca4(c, ram); }
    c->r[3] = c->r[30] + 0x00000050u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000004u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000000u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00004754u);
    c->f[3] = c->f[1] * c->f[0];
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000004u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000004u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00004754u);
    c->f[2] = c->f[1] * c->f[0];
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000004u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000008u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00004754u);
    c->f[0] = c->f[1] * c->f[0];
    c->r[4] = c->r[3] + 0u;
    c->f[12] = c->f[3];
    c->f[13] = c->f[2];
    c->f[14] = c->f[0];
    c->f[15] = u2f(0u);
    { c->r[31] = 0x088ae9a8u; func_0880d140(c, ram); }
    c->r[2] = 0x08aa0000u;
    c->r[2] = c->r[2] + 0xffff8c40u;
    { c->r[31] = 0x088ae9b8u; mem_w32(ram, c->r[30] + 0x00000030u, c->r[2]); func_088820b0(c, ram); }
    c->r[3] = c->r[2] + 0x00000020u;
    c->r[2] = c->r[30] + 0x00000050u;
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000030u);
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x088ae9d0u; c->r[6] = c->r[3] + 0u; func_08820ca4(c, ram); }
    { goto L_088aea08; }
L_088ae9d8:
    { c->r[31] = 0x088ae9e0u; func_088b1664(c, ram); }
    { goto L_088aea08; }
L_088ae9e8:
    { c->r[31] = 0x088ae9f0u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u); func_088aea1c(c, ram); }
    { c->r[31] = 0x088ae9f8u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u); func_088aea3c(c, ram); }
    { c->r[31] = 0x088aea00u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u); func_088b0d88(c, ram); }
    { c->r[31] = 0x088aea08u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u); func_088aede4(c, ram); }
L_088aea08:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000074u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000070u);
    { c->r[29] = c->r[29] + 0x00000080u; return; }
    return; /* fell out of func_088ae478 */
}

/* func_088b2ad0  0x088b2ad0..0x088b2b14  68 bytes, source=sweep */
void func_088b2ad0(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x088b2ad0u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = 0x1e000000u;
    c->r[2] = c->r[2] | c->r[3];
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x088b2b00u; c->r[5] = c->r[2] + 0u; func_088b1ee0(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_088b2ad0 */
}

/* func_088b75fc  0x088b75fc..0x088b7820  548 bytes, source=fde */
void func_088b75fc(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x088b75fcu);
    c->r[29] = c->r[29] + 0xffffffc0u;
    mem_w32(ram, c->r[29] + 0x00000038u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000034u, c->r[30]);
    mem_w32(ram, c->r[29] + 0x00000030u, c->r[16]);
    c->r[30] = c->r[29] + 0u;
    c->r[2] = c->r[4] + 0u;
    mem_w8(ram, c->r[30] + 0x00000000u, c->r[2]);
    c->r[2] = 0x08aa0000u;
    c->r[2] = c->r[2] + 0xffff9370u;
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[2]);
    mem_w32(ram, c->r[30] + 0x00000008u, 0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[2] + 0x00000080u;
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]);
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 3;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 4;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[2] + c->r[3];
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[4] + 0x00000030u);
    c->r[3] = 0u + 0u;
    c->r[2] = alx_ins(c->r[2], c->r[3], 12u, 31u);
    mem_w32(ram, c->r[4] + 0x00000030u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x00000010u;
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x00000020u;
    mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[2] = 0u + 0xffffffffu;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_088b76b8; }
    c->r[16] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0xffffc930u;
    { c->r[31] = 0x088b76b4u; c->r[5] = mem_r32(ram, c->r[2] + 0x00000000u); func_089f73a0(c, ram); }
    mem_w32(ram, c->r[16] + 0x00000000u, c->r[2]);
L_088b76b8:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[2] = 0u + 0xffffffffu;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_088b76e8; }
    c->r[16] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0xffffc930u;
    { c->r[31] = 0x088b76e4u; c->r[5] = mem_r32(ram, c->r[2] + 0x00000000u); func_089f73a0(c, ram); }
    mem_w32(ram, c->r[16] + 0x00000000u, c->r[2]);
L_088b76e8:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[2] = 0u + 0xffffffffu;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_088b7718; }
    c->r[16] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0xffffc930u;
    { c->r[31] = 0x088b7714u; c->r[5] = mem_r32(ram, c->r[2] + 0x00000000u); func_089f73a0(c, ram); }
    mem_w32(ram, c->r[16] + 0x00000000u, c->r[2]);
L_088b7718:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[2] + 0x00000590u;
    mem_w32(ram, c->r[30] + 0x0000001cu, c->r[2]);
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 4;
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = c->r[2] + c->r[3];
    mem_w32(ram, c->r[30] + 0x00000020u, c->r[2]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[2] = mem_r32(ram, c->r[4] + 0x00000030u);
    c->r[3] = 0u + 0u;
    c->r[2] = alx_ins(c->r[2], c->r[3], 12u, 31u);
    mem_w32(ram, c->r[4] + 0x00000030u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    mem_w32(ram, c->r[30] + 0x00000024u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[2] = c->r[2] + 0x00000010u;
    mem_w32(ram, c->r[30] + 0x00000028u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[2] = c->r[2] + 0x00000020u;
    mem_w32(ram, c->r[30] + 0x0000002cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000024u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[2] = 0u + 0xffffffffu;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_088b77a8; }
    c->r[16] = mem_r32(ram, c->r[30] + 0x00000024u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000024u);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0xffffc930u;
    { c->r[31] = 0x088b77a4u; c->r[5] = mem_r32(ram, c->r[2] + 0x00000000u); func_089f73a0(c, ram); }
    mem_w32(ram, c->r[16] + 0x00000000u, c->r[2]);
L_088b77a8:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000028u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[2] = 0u + 0xffffffffu;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_088b77d8; }
    c->r[16] = mem_r32(ram, c->r[30] + 0x00000028u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000028u);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0xffffc930u;
    { c->r[31] = 0x088b77d4u; c->r[5] = mem_r32(ram, c->r[2] + 0x00000000u); func_089f73a0(c, ram); }
    mem_w32(ram, c->r[16] + 0x00000000u, c->r[2]);
L_088b77d8:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000002cu);
    c->r[3] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[2] = 0u + 0xffffffffu;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_088b7808; }
    c->r[16] = mem_r32(ram, c->r[30] + 0x0000002cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000002cu);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0xffffc930u;
    { c->r[31] = 0x088b7804u; c->r[5] = mem_r32(ram, c->r[2] + 0x00000000u); func_089f73a0(c, ram); }
    mem_w32(ram, c->r[16] + 0x00000000u, c->r[2]);
L_088b7808:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000038u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000034u);
    c->r[16] = mem_r32(ram, c->r[29] + 0x00000030u);
    { c->r[29] = c->r[29] + 0x00000040u; return; }
    return; /* fell out of func_088b75fc */
}

/* func_088be3c8  0x088be3c8..0x088be488  192 bytes, source=residue */
void func_088be3c8(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x088be3c8u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000008u);
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[2] + 0x00000003u;
    c->r[2] = c->r[2] >> 2;
    c->r[3] = c->r[2] << 2;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = c->r[2] + 0x00000008u;
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    mem_w32(ram, c->r[3] + 0x00000008u, c->r[2]);
    c->r[5] = c->r[30] + 0x00000008u;
    c->r[4] = mem_r32(ram, c->r[5] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] >> 24;
    c->r[2] = c->r[2] & 0x000fu;
    c->r[2] = c->r[2] << 16;
    c->r[3] = 0x10000000u;
    c->r[2] = c->r[2] | c->r[3];
    c->r[3] = c->r[4] + 0u;
    mem_w32(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[4] = c->r[4] + 0x00000004u;
    mem_w32(ram, c->r[5] + 0x00000000u, c->r[4]);
    c->r[5] = c->r[30] + 0x00000008u;
    c->r[4] = mem_r32(ram, c->r[5] + 0x00000000u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0x00ff0000u;
    c->r[2] = c->r[2] | 0xffffu;
    c->r[2] = c->r[3] & c->r[2];
    c->r[3] = 0x08000000u;
    c->r[2] = c->r[2] | c->r[3];
    c->r[3] = c->r[4] + 0u;
    mem_w32(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[4] = c->r[4] + 0x00000004u;
    mem_w32(ram, c->r[5] + 0x00000000u, c->r[4]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_088be3c8 */
}

/* func_088bf0cc  0x088bf0cc..0x088bf120  84 bytes, source=sweep */
void func_088bf0cc(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x088bf0ccu);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[6]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[3] = c->r[2] << 8;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = c->r[3] | c->r[2];
    c->r[2] = 0xc6000000u;
    c->r[2] = c->r[3] | c->r[2];
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x088bf10cu; c->r[5] = c->r[2] + 0u; func_088be14c(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_088bf0cc */
}

/* func_088c0cd4  0x088c0cd4..0x088c1794  2752 bytes, source=fde */
void func_088c0cd4(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x088c0cd4u);
    c->r[29] = c->r[29] + 0xffffffa0u;
    mem_w32(ram, c->r[29] + 0x00000054u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000050u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[2] = c->r[5] + 0u;
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[6]);
    mem_w8(ram, c->r[30] + 0x00000004u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x000000e0u;
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    mem_w32(ram, c->r[2] + 0x0000002cu, 0u);
    { c->r[31] = 0x088c0d10u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u); func_089c35d4(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_088c0d64; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000008cu);
    c->r[2] = c->r[2] & 0x0002u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_088c0d4c; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000002cu);
    c->r[2] = c->r[2] | 0x000du;
    { mem_w32(ram, c->r[3] + 0x0000002cu, c->r[2]); goto L_088c0d78; }
L_088c0d4c:
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000002cu);
    c->r[2] = c->r[2] | 0x0002u;
    { mem_w32(ram, c->r[3] + 0x0000002cu, c->r[2]); goto L_088c0d78; }
L_088c0d64:
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000002cu);
    c->r[2] = c->r[2] | 0x000fu;
    mem_w32(ram, c->r[3] + 0x0000002cu, c->r[2]);
L_088c0d78:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000010u);
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000000u);
    c->r[2] = 0u - c->r[3];
    c->r[2] = alx_max(c->r[3], c->r[2]);
    mem_w8(ram, c->r[4] + 0x00000055u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000003u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_088c0dc4; }
    c->r[4] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = mem_r32(ram, c->r[2] + 0x0000002cu);
    c->r[2] = 0x00020000u;
    c->r[2] = c->r[3] | c->r[2];
    mem_w32(ram, c->r[4] + 0x0000002cu, c->r[2]);
L_088c0dc4:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000000u);
    { int _c = ((s32)c->r[2] >= 0); if (_c) goto L_088c0e04; }
    c->r[4] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = mem_r32(ram, c->r[2] + 0x0000002cu);
    c->r[2] = 0x00010000u;
    c->r[2] = c->r[3] | c->r[2];
    mem_w32(ram, c->r[4] + 0x0000002cu, c->r[2]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x0000008cu);
    c->r[2] = 0x00800000u;
    c->r[2] = c->r[3] | c->r[2];
    mem_w32(ram, c->r[4] + 0x0000008cu, c->r[2]);
L_088c0e04:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    mem_w8(ram, c->r[2] + 0x00000057u, 0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    mem_w8(ram, c->r[2] + 0x0000005cu, 0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    mem_w8(ram, c->r[2] + 0x00000058u, 0u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0u + 0x0000002du;
    mem_w8(ram, c->r[3] + 0x00000059u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0u + 0x00000001u;
    mem_w8(ram, c->r[3] + 0x0000005bu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    mem_w8(ram, c->r[2] + 0x0000005du, 0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000055u);
    c->r[2] = 0u + 0x0000002cu;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[3] = c->lo;
    c->r[2] = 0x08aa0000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0xffff9a94u);
    c->r[2] = c->r[2] + c->r[3];
    mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    mem_w32(ram, c->r[3] + 0x00000020u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x0000000cu);
    mem_wf32(ram, c->r[3] + 0x0000003cu, c->f[0]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000008u);
    mem_wf32(ram, c->r[3] + 0x00000040u, c->f[0]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = mem_r16(ram, c->r[2] + 0x00000018u);
    mem_w16(ram, c->r[3] + 0x0000004cu, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = mem_r16(ram, c->r[2] + 0x0000001au);
    mem_w16(ram, c->r[3] + 0x0000004eu, c->r[2]);
    c->r[2] = 0u + 0x00000001u;
    mem_w32(ram, c->r[30] + 0x0000001cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000001u);
    { int _c = ((s32)c->r[2] < 0); if (_c) goto L_088c0f1c; }
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x088c0ed0u; c->r[4] = c->r[4] + 0x00000af4u; func_0880d294(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = 0u + 0x00000002u;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_088c0f10; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000001u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_088c0f1c; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000055u);
    c->r[2] = ((s32)c->r[2] < (s32)0x0000000au) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_088c0f1c; }
    c->r[2] = 0u + 0x00000002u;
    { mem_w32(ram, c->r[30] + 0x0000001cu, c->r[2]); goto L_088c0f1c; }
L_088c0f10:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000001u);
    mem_w32(ram, c->r[30] + 0x0000001cu, c->r[2]);
L_088c0f1c:
    c->r[5] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[4] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08a50000u;
    c->r[2] = c->r[2] + 0x000074a0u;
    c->r[2] = c->r[3] + c->r[2];
    c->f[1] = mem_rf32(ram, c->r[4] + 0x0000003cu);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000000u);
    c->f[0] = c->f[1] + c->f[0];
    mem_wf32(ram, c->r[5] + 0x0000003cu, c->f[0]);
    c->r[5] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[4] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08a50000u;
    c->r[2] = c->r[2] + 0x000074a0u;
    c->r[2] = c->r[3] + c->r[2];
    c->f[1] = mem_rf32(ram, c->r[4] + 0x00000040u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000000u);
    c->f[0] = c->f[1] + c->f[0];
    mem_wf32(ram, c->r[5] + 0x00000040u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000002u);
    { int _c = ((s32)c->r[2] <= 0); if (_c) goto L_088c13d4; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000002u);
    c->r[2] = 0u + 0x000000ecu;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[3] = c->lo;
    c->r[2] = 0x08aa0000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0xffff9a98u);
    c->r[2] = c->r[2] + c->r[3];
    mem_w32(ram, c->r[30] + 0x00000020u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000055u);
    c->r[2] = ((s32)c->r[2] < (s32)0x0000000au) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_088c1090; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x000000b8u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000003u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_088c1000; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x000000b8u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000007u) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_088c1000; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x000000b8u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x088c1000u; c->f[12] = mem_rf32(ram, c->r[3] + 0x000000bcu); func_088c0bb8(c, ram); }
L_088c1000:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x000000c0u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000003u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_088c1044; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x000000c0u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000007u) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_088c1044; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x000000c0u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x088c1044u; c->f[12] = mem_rf32(ram, c->r[3] + 0x000000c4u); func_088c0bb8(c, ram); }
L_088c1044:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x000000c8u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000003u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_088c13d4; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x000000c8u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000007u) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_088c13d4; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x000000c8u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x088c1088u; c->f[12] = mem_rf32(ram, c->r[3] + 0x000000ccu); func_088c0bb8(c, ram); }
    { goto L_088c13d4; }
L_088c1090:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000055u);
    c->r[2] = ((s32)c->r[2] < (s32)0x0000000au) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_088c10b8; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000055u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000010u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_088c10fc; }
L_088c10b8:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000055u);
    c->r[2] = 0u + 0x00000013u;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_088c10fc; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000055u);
    c->r[2] = 0u + 0x00000014u;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_088c10fc; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000055u);
    c->r[2] = 0u + 0x0000001au;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_088c10fc; }
    { goto L_088c1194; }
L_088c10fc:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x000000b8u);
    c->r[2] = 0u + 0x00000007u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_088c112c; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x000000b8u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x088c112cu; c->f[12] = mem_rf32(ram, c->r[3] + 0x000000bcu); func_088c0bb8(c, ram); }
L_088c112c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x000000c0u);
    c->r[2] = 0u + 0x00000007u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_088c115c; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x000000c0u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x088c115cu; c->f[12] = mem_rf32(ram, c->r[3] + 0x000000c4u); func_088c0bb8(c, ram); }
L_088c115c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x000000c8u);
    c->r[2] = 0u + 0x00000007u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_088c13d4; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x000000c8u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x088c118cu; c->f[12] = mem_rf32(ram, c->r[3] + 0x000000ccu); func_088c0bb8(c, ram); }
    { goto L_088c13d4; }
L_088c1194:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000055u);
    c->r[2] = 0u + 0x0000001cu;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_088c1240; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x000000b8u);
    c->r[2] = 0u + 0x00000008u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_088c11d8; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x000000b8u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x088c11d8u; c->f[12] = mem_rf32(ram, c->r[3] + 0x000000bcu); func_088c0bb8(c, ram); }
L_088c11d8:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x000000c0u);
    c->r[2] = 0u + 0x00000008u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_088c1208; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x000000c0u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x088c1208u; c->f[12] = mem_rf32(ram, c->r[3] + 0x000000c4u); func_088c0bb8(c, ram); }
L_088c1208:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x000000c8u);
    c->r[2] = 0u + 0x00000008u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_088c13d4; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x000000c8u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x088c1238u; c->f[12] = mem_rf32(ram, c->r[3] + 0x000000ccu); func_088c0bb8(c, ram); }
    { goto L_088c13d4; }
L_088c1240:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000055u);
    c->r[2] = 0u + 0x00000011u;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_088c1298; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000055u);
    c->r[2] = 0u + 0x00000012u;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_088c1298; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000055u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000015u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_088c1330; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000055u);
    c->r[2] = ((s32)c->r[2] < (s32)0x0000001au) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_088c1298; }
    { goto L_088c1330; }
L_088c1298:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x000000b8u);
    c->r[2] = 0u + 0x00000015u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_088c12c8; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x000000b8u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x088c12c8u; c->f[12] = mem_rf32(ram, c->r[3] + 0x000000bcu); func_088c0bb8(c, ram); }
L_088c12c8:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x000000c0u);
    c->r[2] = 0u + 0x00000015u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_088c12f8; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x000000c0u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x088c12f8u; c->f[12] = mem_rf32(ram, c->r[3] + 0x000000c4u); func_088c0bb8(c, ram); }
L_088c12f8:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x000000c8u);
    c->r[2] = 0u + 0x00000015u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_088c13d4; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x000000c8u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x088c1328u; c->f[12] = mem_rf32(ram, c->r[3] + 0x000000ccu); func_088c0bb8(c, ram); }
    { goto L_088c13d4; }
L_088c1330:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000055u);
    c->r[2] = 0u + 0x0000001bu;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_088c13d4; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x000000b8u);
    c->r[2] = 0u + 0x00000016u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_088c1374; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x000000b8u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x088c1374u; c->f[12] = mem_rf32(ram, c->r[3] + 0x000000bcu); func_088c0bb8(c, ram); }
L_088c1374:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x000000c0u);
    c->r[2] = 0u + 0x00000016u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_088c13a4; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x000000c0u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x088c13a4u; c->f[12] = mem_rf32(ram, c->r[3] + 0x000000c4u); func_088c0bb8(c, ram); }
L_088c13a4:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x000000c8u);
    c->r[2] = 0u + 0x00000016u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_088c13d4; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x000000c8u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x088c13d4u; c->f[12] = mem_rf32(ram, c->r[3] + 0x000000ccu); func_088c0bb8(c, ram); }
L_088c13d4:
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x0000003cu);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00004d8cu);
    c->f[1] = c->f[1] * c->f[0];
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00004d90u);
    c->f[1] = c->f[1] / c->f[0];
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00004d94u);
    c->f[0] = c->f[1] * c->f[0];
    mem_wf32(ram, c->r[3] + 0x0000003cu, c->f[0]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000040u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00004d8cu);
    c->f[1] = c->f[1] * c->f[0];
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00004d90u);
    c->f[0] = c->f[1] / c->f[0];
    mem_wf32(ram, c->r[3] + 0x00000040u, c->f[0]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = 0x00200000u;
    { c->r[31] = 0x088c1440u; c->r[5] = c->r[5] | 0x0020u; func_0884d1b0(c, ram); }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x088c144cu; c->r[5] = 0u + 0x00000003u; func_088679a0(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000055u);
    c->r[2] = 0u + 0x0000000fu;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_088c1594; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000055u);
    c->r[2] = 0u + 0x00000010u;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_088c1594; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000055u);
    c->r[2] = 0u + 0x0000001bu;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_088c1594; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000055u);
    c->r[2] = 0u + 0x0000001cu;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_088c1594; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000055u);
    c->r[2] = 0u + 0x0000005eu;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_088c1594; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000055u);
    c->r[2] = 0u + 0x00000060u;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_088c1594; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000055u);
    mem_w32(ram, c->r[30] + 0x00000020u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000055u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000028u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_088c1500; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000055u);
    c->r[2] = ((s32)c->r[2] < (s32)0x0000003cu) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_088c1500; }
    c->r[2] = 0u + 0x00000063u;
    mem_w32(ram, c->r[30] + 0x00000020u, c->r[2]);
L_088c1500:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x088c150cu; c->r[5] = 0u + 0x00000001u; func_088679d4(c, ram); }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = 0u + 0x00000003u;
    mem_w8(ram, c->r[3] + 0x000000c9u, c->r[2]);
    c->r[2] = 0u + 0x00000041u;
    mem_w8(ram, c->r[30] + 0x00000030u, c->r[2]);
    mem_w8(ram, c->r[30] + 0x00000031u, 0u);
    c->r[2] = c->r[30] + 0x00000030u;
    c->r[4] = 0x08aa0000u;
    c->r[4] = c->r[4] + 0xffff9ae4u;
    c->r[5] = 0x08a40000u;
    c->r[5] = c->r[5] + 0x00004d0cu;
    c->r[6] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[7] = c->r[2] + 0u;
    { c->r[31] = 0x088c1548u; c->r[8] = 0u + 0u; func_08a1ad34(c, ram); }
    c->r[2] = c->r[30] + 0x00000030u;
    c->r[4] = 0x08aa0000u;
    c->r[4] = c->r[4] + 0xffff9b04u;
    c->r[5] = 0x08a40000u;
    c->r[5] = c->r[5] + 0x00004d1cu;
    c->r[6] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[7] = c->r[2] + 0u;
    { c->r[31] = 0x088c156cu; c->r[8] = 0u + 0u; func_08a1ad34(c, ram); }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = 0x08aa0000u;
    c->r[5] = c->r[5] + 0xffff9ae4u;
    c->r[6] = 0x08aa0000u;
    c->r[6] = c->r[6] + 0xffff9b04u;
    c->r[7] = 0u + 0u;
    { c->r[31] = 0x088c158cu; c->r[8] = 0u + 0u; func_089b75f8(c, ram); }
    { goto L_088c1634; }
L_088c1594:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000055u);
    c->r[2] = 0u + 0x0000000fu;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_088c15ec; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000055u);
    c->r[2] = 0u + 0x0000001cu;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_088c15ec; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000055u);
    c->r[2] = 0u + 0x0000005eu;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_088c15ec; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000055u);
    c->r[2] = 0u + 0x00000060u;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_088c15ec; }
    { goto L_088c1614; }
L_088c15ec:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x088c15f8u; c->r[5] = 0u + 0u; func_088679d4(c, ram); }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x088c1604u; c->r[5] = 0u + 0u; func_088679a0(c, ram); }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = 0u + 0x00000003u;
    { mem_w8(ram, c->r[3] + 0x000000c9u, c->r[2]); goto L_088c1634; }
L_088c1614:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x088c1620u; c->r[5] = 0u + 0u; func_088679d4(c, ram); }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x088c162cu; c->r[5] = 0u + 0u; func_088679a0(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    mem_w8(ram, c->r[2] + 0x000000c9u, 0u);
L_088c1634:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000055u);
    c->r[2] = 0u + 0x00000062u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_088c1668; }
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000ac8u;
    { c->r[31] = 0x088c1658u; c->r[5] = mem_r32(ram, c->r[30] + 0x00000000u); func_089cb780(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000040u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000040u);
    c->r[1] = 0x08aa0000u;
    mem_w32(ram, c->r[1] + 0xffff9a90u, c->r[2]);
L_088c1668:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000020u);
    c->r[3] = mem_r8(ram, c->r[2] + 0x0000001cu);
    c->r[2] = 0u + 0x00000001u;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_088c1700; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000020u);
    c->r[3] = mem_r8(ram, c->r[2] + 0x0000001cu);
    c->r[2] = 0u + 0x00000002u;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_088c1700; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000020u);
    c->r[3] = mem_r8(ram, c->r[2] + 0x0000001cu);
    c->r[2] = 0u + 0x00000004u;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_088c1700; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000020u);
    c->r[3] = mem_r8(ram, c->r[2] + 0x0000001cu);
    c->r[2] = 0u + 0x00000005u;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_088c1700; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000020u);
    c->r[3] = mem_r8(ram, c->r[2] + 0x0000001cu);
    c->r[2] = 0u + 0x00000006u;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_088c1700; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000020u);
    c->r[3] = mem_r8(ram, c->r[2] + 0x0000001cu);
    c->r[2] = 0u + 0x0000000cu;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_088c1700; }
    { goto L_088c170c; }
L_088c1700:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = 0u + 0x00000008u;
    mem_w8(ram, c->r[3] + 0x00000087u, c->r[2]);
L_088c170c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_088c1748; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[4] = c->r[2] + 0x00000040u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[3] = c->r[2] + 0x00000040u;
    c->r[2] = mem_r32(ram, c->r[3] + 0x00000000u);
    mem_w32(ram, c->r[4] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[3] + 0x00000004u);
    mem_w32(ram, c->r[4] + 0x00000004u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[3] + 0x00000008u);
    mem_w32(ram, c->r[4] + 0x00000008u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[3] + 0x0000000cu);
    mem_w32(ram, c->r[4] + 0x0000000cu, c->r[2]);
L_088c1748:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    mem_w16(ram, c->r[2] + 0x00000050u, 0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = c->r[2] + 0x00000028u;
    c->r[2] = 0u + 0xffffffffu;
    mem_w32(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    mem_w8(ram, c->r[2] + 0x00000054u, 0u);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x0000008cu);
    c->r[2] = 0x00100000u;
    c->r[2] = c->r[3] | c->r[2];
    mem_w32(ram, c->r[4] + 0x0000008cu, c->r[2]);
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000054u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000050u);
    { c->r[29] = c->r[29] + 0x00000060u; return; }
    return; /* fell out of func_088c0cd4 */
}

/* func_088c4f80  0x088c4f80..0x088c6bf8  7288 bytes, source=fde */
void func_088c4f80(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x088c4f80u);
    c->r[29] = c->r[29] + 0xffffff50u;
    mem_w32(ram, c->r[29] + 0x000000a4u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x000000a0u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[2] = c->r[5] + 0u;
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[6]);
    mem_w8(ram, c->r[30] + 0x00000004u, c->r[2]);
    c->r[2] = mem_r8(ram, c->r[30] + 0x00000004u);
    mem_w32(ram, c->r[30] + 0x00000094u, c->r[2]);
    c->r[2] = 0u + 0x00000001u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000094u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_088c5018; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000094u);
    c->r[2] = ((s32)c->r[3] < (s32)0x00000002u) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_088c4fdc; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000094u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_088c5004; }
    { goto L_088c6be4; }
L_088c4fdc:
    c->r[2] = 0u + 0x00000002u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000094u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_088c6be4; }
    c->r[2] = 0u + 0x0000000au;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000094u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_088c5094; }
    { goto L_088c6be4; }
L_088c5004:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x088c5010u; c->r[5] = 0u + 0u; func_088679a0(c, ram); }
    { goto L_088c6be4; }
L_088c5018:
    mem_w32(ram, c->r[30] + 0x00000010u, 0u);
    mem_w16(ram, c->r[30] + 0x0000000cu, 0u);
L_088c5020:
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[30] + 0x0000000cu);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000100u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_088c5038; }
    { goto L_088c6be4; }
L_088c5038:
    c->r[3] = (u32)(s32)(s16)mem_r16(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 4;
    c->r[2] = 0x08aa0000u;
    c->r[2] = c->r[2] + 0xffff9ba0u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000008u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_088c506c; }
    { goto L_088c5084; }
L_088c506c:
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[30] + 0x0000000cu);
    { c->r[31] = 0x088c5078u; c->r[4] = c->r[2] + 0u; func_088c3918(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = c->r[2] + 0x00000001u;
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]);
L_088c5084:
    c->r[2] = mem_r16(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w16(ram, c->r[30] + 0x0000000cu, c->r[2]); goto L_088c5020; }
L_088c5094:
    c->r[2] = 0x08aa0000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0xffffcba4u);
    c->r[2] = c->r[2] + 0x00000040u;
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000004u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00004f6cu);
    c->f[0] = c->f[1] * c->f[0];
    { c->r[31] = 0x088c50b8u; mem_wf32(ram, c->r[30] + 0x00000014u, c->f[0]); func_08820f58(c, ram); }
    c->r[2] = c->r[2] + 0x00000020u;
    { c->r[31] = 0x088c50c4u; c->r[4] = c->r[2] + 0u; func_088c9698(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000010u, 0u);
    mem_w32(ram, c->r[30] + 0x00000018u, 0u);
    mem_w32(ram, c->r[30] + 0x0000001cu, 0u);
    mem_w32(ram, c->r[30] + 0x00000020u, 0u);
    mem_w32(ram, c->r[30] + 0x00000024u, 0u);
L_088c50d8:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000024u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000100u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_088c50f0; }
    { goto L_088c52d4; }
L_088c50f0:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000024u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 4;
    c->r[2] = 0x08aa0000u;
    c->r[2] = c->r[2] + 0xffff9ba0u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000008u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_088c5144; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000024u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 4;
    c->r[2] = 0x08aa0000u;
    c->r[2] = c->r[2] + 0xffff9ba0u;
    c->r[2] = c->r[3] + c->r[2];
    { mem_w8(ram, c->r[2] + 0x00000009u, 0u); goto L_088c52c4; }
L_088c5144:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000024u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 4;
    c->r[2] = 0x08aa0000u;
    c->r[2] = c->r[2] + 0xffff9bb0u;
    c->r[2] = c->r[3] + c->r[2];
    { c->r[31] = 0x088c516cu; c->r[4] = c->r[2] + 0u; func_088c96c0(c, ram); }
    mem_wf32(ram, c->r[30] + 0x00000028u, c->f[0]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000024u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 4;
    c->r[2] = 0x08aa0000u;
    c->r[2] = c->r[2] + 0xffff9ba0u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000006u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000002u) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_088c5234; }
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000028u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00004f70u);
    alx_c_cond_s(c, 12, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_088c51c4; }
    { goto L_088c51fc; }
L_088c51c4:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000024u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 4;
    c->r[2] = 0x08aa0000u;
    c->r[2] = c->r[2] + 0xffff9ba0u;
    c->r[3] = c->r[3] + c->r[2];
    c->r[2] = 0u + 0x00000001u;
    mem_w8(ram, c->r[3] + 0x00000009u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]); goto L_088c52c4; }
L_088c51fc:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000024u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 4;
    c->r[2] = 0x08aa0000u;
    c->r[2] = c->r[2] + 0xffff9ba0u;
    c->r[3] = c->r[3] + c->r[2];
    c->r[2] = 0u + 0x00000002u;
    mem_w8(ram, c->r[3] + 0x00000009u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]); goto L_088c52c4; }
L_088c5234:
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000028u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00004f70u);
    alx_c_cond_s(c, 12, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_088c5258; }
    { goto L_088c5290; }
L_088c5258:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000024u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 4;
    c->r[2] = 0x08aa0000u;
    c->r[2] = c->r[2] + 0xffff9ba0u;
    c->r[3] = c->r[3] + c->r[2];
    c->r[2] = 0u + 0x00000003u;
    mem_w8(ram, c->r[3] + 0x00000009u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x0000001cu, c->r[2]); goto L_088c52c4; }
L_088c5290:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000024u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 4;
    c->r[2] = 0x08aa0000u;
    c->r[2] = c->r[2] + 0xffff9ba0u;
    c->r[3] = c->r[3] + c->r[2];
    c->r[2] = 0u + 0x00000004u;
    mem_w8(ram, c->r[3] + 0x00000009u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[2] = c->r[2] + 0x00000001u;
    mem_w32(ram, c->r[30] + 0x00000020u, c->r[2]);
L_088c52c4:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000024u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000024u, c->r[2]); goto L_088c50d8; }
L_088c52d4:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    { int _c = ((s32)c->r[2] <= 0); if (_c) goto L_088c58d0; }
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00004f74u);
    c->r[4] = 0x08a70000u;
    c->r[4] = c->r[4] + 0xffffb640u;
    { c->r[31] = 0x088c52f8u; c->f[12] = c->f[0]; func_089f1210(c, ram); }
    c->r[4] = 0x08a70000u;
    c->r[4] = c->r[4] + 0xffffb640u;
    c->r[5] = 0u + 0x00000003u;
    { c->r[31] = 0x088c530cu; c->r[6] = 0u + 0x00000007u; func_089df7a0(c, ram); }
    c->r[4] = 0x08a70000u;
    c->r[4] = c->r[4] + 0xffffb640u;
    { c->r[31] = 0x088c531cu; c->r[5] = 0u + 0x00000001u; func_089dfe30(c, ram); }
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000700u);
    c->r[2] = 0u + 0x000002e8u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[4] = c->lo;
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000704u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 5;
    c->r[2] = c->r[2] - c->r[3];
    c->r[2] = c->r[2] << 3;
    c->r[3] = c->r[4] + c->r[2];
    c->r[2] = 0x08b90000u;
    c->r[2] = c->r[2] + 0x00000cf0u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x088c5364u; c->r[5] = 0u + 0xffffffffu; func_088c87fc(c, ram); }
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000700u);
    c->r[2] = 0u + 0x000002e8u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[4] = c->lo;
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000704u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 5;
    c->r[2] = c->r[2] - c->r[3];
    c->r[2] = c->r[2] << 3;
    c->r[3] = c->r[4] + c->r[2];
    c->r[2] = 0x08b90000u;
    c->r[2] = c->r[2] + 0x00000cf0u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x088c53acu; c->r[5] = 0u + 0x00000005u; func_088c8870(c, ram); }
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000700u);
    c->r[2] = 0u + 0x000002e8u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[4] = c->lo;
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000704u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 5;
    c->r[2] = c->r[2] - c->r[3];
    c->r[2] = c->r[2] << 3;
    c->r[3] = c->r[4] + c->r[2];
    c->r[2] = 0x08b90000u;
    c->r[2] = c->r[2] + 0x00000cf0u;
    c->r[4] = c->r[3] + c->r[2];
    c->r[2] = 0x08b90000u;
    c->r[2] = c->r[2] + 0x000052c0u;
    c->r[2] = c->r[2] >> 24;
    c->r[2] = c->r[2] & 0x000fu;
    c->r[3] = c->r[2] << 16;
    c->r[2] = 0x10000000u;
    c->r[2] = c->r[3] | c->r[2];
    { c->r[31] = 0x088c540cu; c->r[5] = c->r[2] + 0u; func_088c8760(c, ram); }
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000700u);
    c->r[2] = 0u + 0x000002e8u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[4] = c->lo;
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000704u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 5;
    c->r[2] = c->r[2] - c->r[3];
    c->r[2] = c->r[2] << 3;
    c->r[3] = c->r[4] + c->r[2];
    c->r[2] = 0x08b90000u;
    c->r[2] = c->r[2] + 0x00000cf0u;
    c->r[4] = c->r[3] + c->r[2];
    c->r[3] = 0x08b90000u;
    c->r[3] = c->r[3] + 0x000052c0u;
    c->r[2] = 0x00ff0000u;
    c->r[2] = c->r[2] | 0xffffu;
    c->r[3] = c->r[3] & c->r[2];
    c->r[2] = 0x0a000000u;
    c->r[2] = c->r[3] | c->r[2];
    { c->r[31] = 0x088c546cu; c->r[5] = c->r[2] + 0u; func_088c8760(c, ram); }
    c->r[2] = 0x08aa0000u;
    c->r[2] = mem_r16(ram, c->r[2] + 0xffff9b70u);
    c->r[4] = 0x08a70000u;
    c->r[4] = c->r[4] + 0xffffb640u;
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x088c5488u; c->r[6] = 0u + 0u; func_089e0bd8(c, ram); }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[2] = c->r[2] << 4;
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x088c54a8u; c->r[5] = 0u + 0x00000010u; func_0881a1d4(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000024u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000024u);
    mem_w32(ram, c->r[30] + 0x0000002cu, c->r[2]);
    mem_w32(ram, c->r[30] + 0x00000030u, 0u);
    mem_w32(ram, c->r[30] + 0x00000034u, 0u);
L_088c54bc:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000034u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000100u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_088c54d4; }
    { goto L_088c5808; }
L_088c54d4:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000034u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 4;
    c->r[2] = 0x08aa0000u;
    c->r[2] = c->r[2] + 0xffff9ba0u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000009u);
    c->r[2] = 0u + 0x00000001u;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_088c550c; }
    { goto L_088c57f8; }
L_088c550c:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000034u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 4;
    c->r[2] = 0x08aa0000u;
    c->r[2] = c->r[2] + 0xffff9bc0u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0x08a80000u;
    { c->r[31] = 0x088c553cu; c->r[5] = c->r[5] + 0xffffbf40u; func_0885a018(c, ram); }
    mem_wf32(ram, c->r[30] + 0x00000028u, c->f[0]);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000028u);
    c->f[1] = (f32)fabsf(c->f[0]);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00004f78u);
    alx_c_cond_s(c, 12, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_088c57f8; }
    c->r[2] = c->r[30] + 0x00000040u;
    { c->r[31] = 0x088c556cu; c->r[4] = c->r[2] + 0u; func_08808240(c, ram); }
    { c->r[31] = 0x088c5574u; func_08820f58(c, ram); }
    c->r[6] = c->r[2] + 0x00000020u;
    c->r[4] = c->r[30] + 0x00000040u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000034u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 4;
    c->r[2] = 0x08aa0000u;
    c->r[2] = c->r[2] + 0xffff9bb0u;
    c->r[2] = c->r[3] + c->r[2];
    { c->r[31] = 0x088c55a4u; c->r[5] = c->r[2] + 0u; func_0888d510(c, ram); }
    mem_w32(ram, c->r[30] + 0x0000004cu, 0u);
    c->r[2] = c->r[30] + 0x00000050u;
    { c->r[31] = 0x088c55b4u; c->r[4] = c->r[2] + 0u; func_08808240(c, ram); }
    c->r[4] = c->r[30] + 0x00000050u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000034u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 4;
    c->r[2] = 0x08aa0000u;
    c->r[2] = c->r[2] + 0xffff9bc0u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[3] = c->r[30] + 0x00000040u;
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x088c55e8u; c->r[6] = c->r[3] + 0u; func_0884d26c(c, ram); }
    c->r[2] = c->r[30] + 0x00000050u;
    c->r[3] = c->r[30] + 0x00000050u;
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x088c55fcu; c->r[5] = c->r[3] + 0u; func_0884c1d8(c, ram); }
    c->r[4] = c->r[30] + 0x00000050u;
    c->r[5] = c->r[30] + 0x00000050u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000034u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 4;
    c->r[2] = 0x08aa0000u;
    c->r[2] = c->r[2] + 0xffff9ba0u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000006u);
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08a50000u;
    c->r[2] = c->r[2] + 0x000074dcu;
    c->r[2] = c->r[3] + c->r[2];
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000000u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00004f7cu);
    c->f[0] = c->f[1] * c->f[0];
    { c->r[31] = 0x088c5650u; c->f[12] = c->f[0]; func_088ae204(c, ram); }
    c->r[2] = c->r[30] + 0x00000060u;
    { c->r[31] = 0x088c565cu; c->r[4] = c->r[2] + 0u; func_08808240(c, ram); }
    c->r[4] = c->r[30] + 0x00000060u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000034u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 4;
    c->r[2] = 0x08aa0000u;
    c->r[2] = c->r[2] + 0xffff9bc0u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00004f80u);
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x088c5694u; c->f[12] = c->f[0]; func_088ae204(c, ram); }
    c->r[2] = c->r[30] + 0x00000070u;
    { c->r[31] = 0x088c56a0u; c->r[4] = c->r[2] + 0u; func_08808240(c, ram); }
    c->r[4] = c->r[30] + 0x00000070u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000034u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 4;
    c->r[2] = 0x08aa0000u;
    c->r[2] = c->r[2] + 0xffff9bb0u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[3] = c->r[30] + 0x00000060u;
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x088c56d4u; c->r[6] = c->r[3] + 0u; func_088ae1c0(c, ram); }
    c->r[2] = c->r[30] + 0x00000080u;
    { c->r[31] = 0x088c56e0u; c->r[4] = c->r[2] + 0u; func_08808240(c, ram); }
    c->r[2] = c->r[30] + 0x00000080u;
    c->r[3] = c->r[30] + 0x00000070u;
    c->r[6] = c->r[30] + 0x00000060u;
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x088c56f8u; c->r[5] = c->r[3] + 0u; func_0888d510(c, ram); }
    { c->r[31] = 0x088c5700u; func_08820f58(c, ram); }
    c->r[3] = c->r[2] + 0x00000020u;
    c->r[2] = c->r[30] + 0x00000080u;
    c->r[4] = mem_r32(ram, c->r[30] + 0x0000002cu);
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x088c5718u; c->r[6] = c->r[3] + 0u; func_088c964c(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000002cu);
    mem_w16(ram, c->r[2] + 0x00000000u, 0u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000002cu);
    c->r[2] = 0u + 0x00003fffu;
    mem_w16(ram, c->r[3] + 0x00000002u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000002cu);
    c->r[2] = c->r[2] + 0x00000010u;
    mem_w32(ram, c->r[30] + 0x0000002cu, c->r[2]);
    c->r[2] = c->r[30] + 0x00000080u;
    c->r[3] = c->r[30] + 0x00000070u;
    c->r[6] = c->r[30] + 0x00000050u;
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x088c5750u; c->r[5] = c->r[3] + 0u; func_088ae1c0(c, ram); }
    { c->r[31] = 0x088c5758u; func_08820f58(c, ram); }
    c->r[3] = c->r[2] + 0x00000020u;
    c->r[2] = c->r[30] + 0x00000080u;
    c->r[4] = mem_r32(ram, c->r[30] + 0x0000002cu);
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x088c5770u; c->r[6] = c->r[3] + 0u; func_088c964c(c, ram); }
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000002cu);
    c->r[2] = 0u + 0x00007fffu;
    mem_w16(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000002cu);
    mem_w16(ram, c->r[2] + 0x00000002u, 0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000002cu);
    c->r[2] = c->r[2] + 0x00000010u;
    mem_w32(ram, c->r[30] + 0x0000002cu, c->r[2]);
    c->r[2] = c->r[30] + 0x00000080u;
    c->r[3] = c->r[30] + 0x00000070u;
    c->r[6] = c->r[30] + 0x00000050u;
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x088c57a8u; c->r[5] = c->r[3] + 0u; func_0888d510(c, ram); }
    { c->r[31] = 0x088c57b0u; func_08820f58(c, ram); }
    c->r[3] = c->r[2] + 0x00000020u;
    c->r[2] = c->r[30] + 0x00000080u;
    c->r[4] = mem_r32(ram, c->r[30] + 0x0000002cu);
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x088c57c8u; c->r[6] = c->r[3] + 0u; func_088c964c(c, ram); }
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000002cu);
    c->r[2] = 0u + 0x00007fffu;
    mem_w16(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000002cu);
    c->r[2] = 0u + 0x00007fffu;
    mem_w16(ram, c->r[3] + 0x00000002u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000002cu);
    c->r[2] = c->r[2] + 0x00000010u;
    mem_w32(ram, c->r[30] + 0x0000002cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000030u);
    c->r[2] = c->r[2] + 0x00000001u;
    mem_w32(ram, c->r[30] + 0x00000030u, c->r[2]);
L_088c57f8:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000034u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000034u, c->r[2]); goto L_088c54bc; }
L_088c5808:
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000700u);
    c->r[2] = 0u + 0x000002e8u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[4] = c->lo;
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000704u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 5;
    c->r[2] = c->r[2] - c->r[3];
    c->r[2] = c->r[2] << 3;
    c->r[3] = c->r[4] + c->r[2];
    c->r[2] = 0x08b90000u;
    c->r[2] = c->r[2] + 0x00000cf0u;
    c->r[4] = c->r[3] + c->r[2];
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000030u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[5] = 0u + 0x00000003u;
    c->r[6] = 0u + 0x00000182u;
    c->r[7] = c->r[2] + 0u;
    c->r[8] = 0u + 0u;
    { c->r[31] = 0x088c586cu; c->r[9] = mem_r32(ram, c->r[30] + 0x00000024u); func_088c87a4(c, ram); }
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000700u);
    c->r[2] = 0u + 0x000002e8u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[4] = c->lo;
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000704u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 5;
    c->r[2] = c->r[2] - c->r[3];
    c->r[2] = c->r[2] << 3;
    c->r[3] = c->r[4] + c->r[2];
    c->r[2] = 0x08b90000u;
    c->r[2] = c->r[2] + 0x00000cf0u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x088c58b4u; c->r[5] = 0u + 0x00000005u; func_088c8834(c, ram); }
    c->r[4] = 0x08a70000u;
    c->r[4] = c->r[4] + 0xffffb640u;
    { c->r[31] = 0x088c58c4u; c->r[5] = 0u + 0u; func_089dfe30(c, ram); }
    c->r[4] = 0x08a70000u;
    { c->r[31] = 0x088c58d0u; c->r[4] = c->r[4] + 0xffffb640u; func_089f147c(c, ram); }
L_088c58d0:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    { int _c = ((s32)c->r[2] <= 0); if (_c) goto L_088c5f5c; }
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00004f74u);
    c->r[4] = 0x08a70000u;
    c->r[4] = c->r[4] + 0xffffb640u;
    { c->r[31] = 0x088c58f4u; c->f[12] = c->f[0]; func_089f1210(c, ram); }
    c->r[4] = 0x08a70000u;
    c->r[4] = c->r[4] + 0xffffb640u;
    c->r[5] = 0u + 0x00000003u;
    { c->r[31] = 0x088c5908u; c->r[6] = 0u + 0x00000007u; func_089df7a0(c, ram); }
    c->r[4] = 0x08a70000u;
    c->r[4] = c->r[4] + 0xffffb640u;
    { c->r[31] = 0x088c5918u; c->r[5] = 0u + 0x00000001u; func_089dfe30(c, ram); }
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000700u);
    c->r[2] = 0u + 0x000002e8u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[4] = c->lo;
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000704u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 5;
    c->r[2] = c->r[2] - c->r[3];
    c->r[2] = c->r[2] << 3;
    c->r[3] = c->r[4] + c->r[2];
    c->r[2] = 0x08b90000u;
    c->r[2] = c->r[2] + 0x00000cf0u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0x7f7f0000u;
    { c->r[31] = 0x088c5964u; c->r[5] = c->r[5] | 0x7f7fu; func_088c87fc(c, ram); }
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000700u);
    c->r[2] = 0u + 0x000002e8u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[4] = c->lo;
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000704u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 5;
    c->r[2] = c->r[2] - c->r[3];
    c->r[2] = c->r[2] << 3;
    c->r[3] = c->r[4] + c->r[2];
    c->r[2] = 0x08b90000u;
    c->r[2] = c->r[2] + 0x00000cf0u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x088c59acu; c->r[5] = 0u + 0x00000005u; func_088c8870(c, ram); }
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000700u);
    c->r[2] = 0u + 0x000002e8u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[4] = c->lo;
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000704u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 5;
    c->r[2] = c->r[2] - c->r[3];
    c->r[2] = c->r[2] << 3;
    c->r[3] = c->r[4] + c->r[2];
    c->r[2] = 0x08b90000u;
    c->r[2] = c->r[2] + 0x00000cf0u;
    c->r[4] = c->r[3] + c->r[2];
    c->r[2] = 0x08b90000u;
    c->r[2] = c->r[2] + 0x000052c0u;
    c->r[2] = c->r[2] >> 24;
    c->r[2] = c->r[2] & 0x000fu;
    c->r[3] = c->r[2] << 16;
    c->r[2] = 0x10000000u;
    c->r[2] = c->r[3] | c->r[2];
    { c->r[31] = 0x088c5a0cu; c->r[5] = c->r[2] + 0u; func_088c8760(c, ram); }
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000700u);
    c->r[2] = 0u + 0x000002e8u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[4] = c->lo;
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000704u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 5;
    c->r[2] = c->r[2] - c->r[3];
    c->r[2] = c->r[2] << 3;
    c->r[3] = c->r[4] + c->r[2];
    c->r[2] = 0x08b90000u;
    c->r[2] = c->r[2] + 0x00000cf0u;
    c->r[4] = c->r[3] + c->r[2];
    c->r[3] = 0x08b90000u;
    c->r[3] = c->r[3] + 0x000052c0u;
    c->r[2] = 0x00ff0000u;
    c->r[2] = c->r[2] | 0xffffu;
    c->r[3] = c->r[3] & c->r[2];
    c->r[2] = 0x0a000000u;
    c->r[2] = c->r[3] | c->r[2];
    { c->r[31] = 0x088c5a6cu; c->r[5] = c->r[2] + 0u; func_088c8760(c, ram); }
    c->r[2] = 0x08aa0000u;
    c->r[2] = mem_r16(ram, c->r[2] + 0xffff9b72u);
    c->r[4] = 0x08a70000u;
    c->r[4] = c->r[4] + 0xffffb640u;
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x088c5a88u; c->r[6] = 0u + 0u; func_089e0bd8(c, ram); }
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[2] = c->r[2] << 4;
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x088c5aa8u; c->r[5] = 0u + 0x00000010u; func_0881a1d4(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000034u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000034u);
    mem_w32(ram, c->r[30] + 0x00000030u, c->r[2]);
    mem_w32(ram, c->r[30] + 0x0000002cu, 0u);
    mem_w32(ram, c->r[30] + 0x00000024u, 0u);
L_088c5abc:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000024u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000100u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_088c5ad4; }
    { goto L_088c5e94; }
L_088c5ad4:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000024u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 4;
    c->r[2] = 0x08aa0000u;
    c->r[2] = c->r[2] + 0xffff9ba0u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000009u);
    c->r[2] = 0u + 0x00000003u;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_088c5b0c; }
    { goto L_088c5e84; }
L_088c5b0c:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000024u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 4;
    c->r[2] = 0x08aa0000u;
    c->r[2] = c->r[2] + 0xffff9bc0u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0x08a80000u;
    { c->r[31] = 0x088c5b3cu; c->r[5] = c->r[5] + 0xffffbf40u; func_0885a018(c, ram); }
    mem_wf32(ram, c->r[30] + 0x00000028u, c->f[0]);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000028u);
    c->f[1] = (f32)fabsf(c->f[0]);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00004f78u);
    alx_c_cond_s(c, 12, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_088c5e84; }
    c->r[2] = c->r[30] + 0x00000080u;
    { c->r[31] = 0x088c5b6cu; c->r[4] = c->r[2] + 0u; func_08808240(c, ram); }
    { c->r[31] = 0x088c5b74u; func_08820f58(c, ram); }
    c->r[6] = c->r[2] + 0x00000020u;
    c->r[4] = c->r[30] + 0x00000080u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000024u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 4;
    c->r[2] = 0x08aa0000u;
    c->r[2] = c->r[2] + 0xffff9bb0u;
    c->r[2] = c->r[3] + c->r[2];
    { c->r[31] = 0x088c5ba4u; c->r[5] = c->r[2] + 0u; func_0888d510(c, ram); }
    mem_w32(ram, c->r[30] + 0x0000008cu, 0u);
    c->r[2] = c->r[30] + 0x00000070u;
    { c->r[31] = 0x088c5bb4u; c->r[4] = c->r[2] + 0u; func_08808240(c, ram); }
    c->r[4] = c->r[30] + 0x00000070u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000024u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 4;
    c->r[2] = 0x08aa0000u;
    c->r[2] = c->r[2] + 0xffff9bc0u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[3] = c->r[30] + 0x00000080u;
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x088c5be8u; c->r[6] = c->r[3] + 0u; func_0884d26c(c, ram); }
    c->r[2] = c->r[30] + 0x00000070u;
    c->r[3] = c->r[30] + 0x00000070u;
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x088c5bfcu; c->r[5] = c->r[3] + 0u; func_0884c1d8(c, ram); }
    c->r[4] = c->r[30] + 0x00000070u;
    c->r[5] = c->r[30] + 0x00000070u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000024u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 4;
    c->r[2] = 0x08aa0000u;
    c->r[2] = c->r[2] + 0xffff9ba0u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000006u);
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08a50000u;
    c->r[2] = c->r[2] + 0x000074dcu;
    c->r[2] = c->r[3] + c->r[2];
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000000u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00004f7cu);
    c->f[0] = c->f[1] * c->f[0];
    { c->r[31] = 0x088c5c50u; c->f[12] = c->f[0]; func_088ae204(c, ram); }
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00004f84u);
    mem_wf32(ram, c->r[30] + 0x00000090u, c->f[0]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000024u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 4;
    c->r[2] = 0x08aa0000u;
    c->r[2] = c->r[2] + 0xffff9bc0u;
    c->r[2] = c->r[3] + c->r[2];
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000014u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00004f84u);
    c->f[1] = c->f[1] - c->f[0];
    c->f[0] = mem_rf32(ram, c->r[2] + 0x0000000cu);
    alx_c_cond_s(c, 12, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_088c5ca8; }
    { goto L_088c5ce4; }
L_088c5ca8:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000024u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 4;
    c->r[2] = 0x08aa0000u;
    c->r[2] = c->r[2] + 0xffff9bc0u;
    c->r[2] = c->r[3] + c->r[2];
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000014u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x0000000cu);
    c->f[1] = c->f[1] - c->f[0];
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00004f88u);
    c->f[0] = c->f[1] + c->f[0];
    mem_wf32(ram, c->r[30] + 0x00000090u, c->f[0]);
L_088c5ce4:
    c->r[2] = c->r[30] + 0x00000060u;
    { c->r[31] = 0x088c5cf0u; c->r[4] = c->r[2] + 0u; func_08808240(c, ram); }
    c->r[4] = c->r[30] + 0x00000060u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000024u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 4;
    c->r[2] = 0x08aa0000u;
    c->r[2] = c->r[2] + 0xffff9bc0u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x088c5d20u; c->f[12] = mem_rf32(ram, c->r[30] + 0x00000090u); func_088ae204(c, ram); }
    c->r[2] = c->r[30] + 0x00000050u;
    { c->r[31] = 0x088c5d2cu; c->r[4] = c->r[2] + 0u; func_08808240(c, ram); }
    c->r[4] = c->r[30] + 0x00000050u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000024u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 4;
    c->r[2] = 0x08aa0000u;
    c->r[2] = c->r[2] + 0xffff9bb0u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[3] = c->r[30] + 0x00000060u;
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x088c5d60u; c->r[6] = c->r[3] + 0u; func_088ae1c0(c, ram); }
    c->r[2] = c->r[30] + 0x00000040u;
    { c->r[31] = 0x088c5d6cu; c->r[4] = c->r[2] + 0u; func_08808240(c, ram); }
    c->r[2] = c->r[30] + 0x00000040u;
    c->r[3] = c->r[30] + 0x00000050u;
    c->r[6] = c->r[30] + 0x00000060u;
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x088c5d84u; c->r[5] = c->r[3] + 0u; func_0888d510(c, ram); }
    { c->r[31] = 0x088c5d8cu; func_08820f58(c, ram); }
    c->r[3] = c->r[2] + 0x00000020u;
    c->r[2] = c->r[30] + 0x00000040u;
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000030u);
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x088c5da4u; c->r[6] = c->r[3] + 0u; func_088c964c(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000030u);
    mem_w16(ram, c->r[2] + 0x00000000u, 0u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000030u);
    c->r[2] = 0u + 0x00003fffu;
    mem_w16(ram, c->r[3] + 0x00000002u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000030u);
    c->r[2] = c->r[2] + 0x00000010u;
    mem_w32(ram, c->r[30] + 0x00000030u, c->r[2]);
    c->r[2] = c->r[30] + 0x00000040u;
    c->r[3] = c->r[30] + 0x00000050u;
    c->r[6] = c->r[30] + 0x00000070u;
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x088c5ddcu; c->r[5] = c->r[3] + 0u; func_088ae1c0(c, ram); }
    { c->r[31] = 0x088c5de4u; func_08820f58(c, ram); }
    c->r[3] = c->r[2] + 0x00000020u;
    c->r[2] = c->r[30] + 0x00000040u;
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000030u);
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x088c5dfcu; c->r[6] = c->r[3] + 0u; func_088c964c(c, ram); }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000030u);
    c->r[2] = 0u + 0x00007fffu;
    mem_w16(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000030u);
    mem_w16(ram, c->r[2] + 0x00000002u, 0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000030u);
    c->r[2] = c->r[2] + 0x00000010u;
    mem_w32(ram, c->r[30] + 0x00000030u, c->r[2]);
    c->r[2] = c->r[30] + 0x00000040u;
    c->r[3] = c->r[30] + 0x00000050u;
    c->r[6] = c->r[30] + 0x00000070u;
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x088c5e34u; c->r[5] = c->r[3] + 0u; func_0888d510(c, ram); }
    { c->r[31] = 0x088c5e3cu; func_08820f58(c, ram); }
    c->r[3] = c->r[2] + 0x00000020u;
    c->r[2] = c->r[30] + 0x00000040u;
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000030u);
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x088c5e54u; c->r[6] = c->r[3] + 0u; func_088c964c(c, ram); }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000030u);
    c->r[2] = 0u + 0x00007fffu;
    mem_w16(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000030u);
    c->r[2] = 0u + 0x00007fffu;
    mem_w16(ram, c->r[3] + 0x00000002u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000030u);
    c->r[2] = c->r[2] + 0x00000010u;
    mem_w32(ram, c->r[30] + 0x00000030u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000002cu);
    c->r[2] = c->r[2] + 0x00000001u;
    mem_w32(ram, c->r[30] + 0x0000002cu, c->r[2]);
L_088c5e84:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000024u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000024u, c->r[2]); goto L_088c5abc; }
L_088c5e94:
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000700u);
    c->r[2] = 0u + 0x000002e8u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[4] = c->lo;
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000704u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 5;
    c->r[2] = c->r[2] - c->r[3];
    c->r[2] = c->r[2] << 3;
    c->r[3] = c->r[4] + c->r[2];
    c->r[2] = 0x08b90000u;
    c->r[2] = c->r[2] + 0x00000cf0u;
    c->r[4] = c->r[3] + c->r[2];
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000002cu);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[5] = 0u + 0x00000003u;
    c->r[6] = 0u + 0x00000182u;
    c->r[7] = c->r[2] + 0u;
    c->r[8] = 0u + 0u;
    { c->r[31] = 0x088c5ef8u; c->r[9] = mem_r32(ram, c->r[30] + 0x00000034u); func_088c87a4(c, ram); }
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000700u);
    c->r[2] = 0u + 0x000002e8u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[4] = c->lo;
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000704u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 5;
    c->r[2] = c->r[2] - c->r[3];
    c->r[2] = c->r[2] << 3;
    c->r[3] = c->r[4] + c->r[2];
    c->r[2] = 0x08b90000u;
    c->r[2] = c->r[2] + 0x00000cf0u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x088c5f40u; c->r[5] = 0u + 0x00000005u; func_088c8834(c, ram); }
    c->r[4] = 0x08a70000u;
    c->r[4] = c->r[4] + 0xffffb640u;
    { c->r[31] = 0x088c5f50u; c->r[5] = 0u + 0u; func_089dfe30(c, ram); }
    c->r[4] = 0x08a70000u;
    { c->r[31] = 0x088c5f5cu; c->r[4] = c->r[4] + 0xffffb640u; func_089f147c(c, ram); }
L_088c5f5c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    { int _c = ((s32)c->r[2] <= 0); if (_c) goto L_088c6558; }
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00004f8cu);
    c->r[4] = 0x08a70000u;
    c->r[4] = c->r[4] + 0xffffb640u;
    { c->r[31] = 0x088c5f80u; c->f[12] = c->f[0]; func_089f1210(c, ram); }
    c->r[4] = 0x08a70000u;
    c->r[4] = c->r[4] + 0xffffb640u;
    c->r[5] = 0u + 0x00000003u;
    { c->r[31] = 0x088c5f94u; c->r[6] = 0u + 0x00000007u; func_089df7a0(c, ram); }
    c->r[4] = 0x08a70000u;
    c->r[4] = c->r[4] + 0xffffb640u;
    { c->r[31] = 0x088c5fa4u; c->r[5] = 0u + 0x00000001u; func_089dfe30(c, ram); }
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000700u);
    c->r[2] = 0u + 0x000002e8u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[4] = c->lo;
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000704u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 5;
    c->r[2] = c->r[2] - c->r[3];
    c->r[2] = c->r[2] << 3;
    c->r[3] = c->r[4] + c->r[2];
    c->r[2] = 0x08b90000u;
    c->r[2] = c->r[2] + 0x00000cf0u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x088c5fecu; c->r[5] = 0u + 0xffffffffu; func_088c87fc(c, ram); }
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000700u);
    c->r[2] = 0u + 0x000002e8u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[4] = c->lo;
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000704u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 5;
    c->r[2] = c->r[2] - c->r[3];
    c->r[2] = c->r[2] << 3;
    c->r[3] = c->r[4] + c->r[2];
    c->r[2] = 0x08b90000u;
    c->r[2] = c->r[2] + 0x00000cf0u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x088c6034u; c->r[5] = 0u + 0x00000005u; func_088c8870(c, ram); }
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000700u);
    c->r[2] = 0u + 0x000002e8u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[4] = c->lo;
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000704u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 5;
    c->r[2] = c->r[2] - c->r[3];
    c->r[2] = c->r[2] << 3;
    c->r[3] = c->r[4] + c->r[2];
    c->r[2] = 0x08b90000u;
    c->r[2] = c->r[2] + 0x00000cf0u;
    c->r[4] = c->r[3] + c->r[2];
    c->r[2] = 0x08b90000u;
    c->r[2] = c->r[2] + 0x000052c0u;
    c->r[2] = c->r[2] >> 24;
    c->r[2] = c->r[2] & 0x000fu;
    c->r[3] = c->r[2] << 16;
    c->r[2] = 0x10000000u;
    c->r[2] = c->r[3] | c->r[2];
    { c->r[31] = 0x088c6094u; c->r[5] = c->r[2] + 0u; func_088c8760(c, ram); }
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000700u);
    c->r[2] = 0u + 0x000002e8u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[4] = c->lo;
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000704u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 5;
    c->r[2] = c->r[2] - c->r[3];
    c->r[2] = c->r[2] << 3;
    c->r[3] = c->r[4] + c->r[2];
    c->r[2] = 0x08b90000u;
    c->r[2] = c->r[2] + 0x00000cf0u;
    c->r[4] = c->r[3] + c->r[2];
    c->r[3] = 0x08b90000u;
    c->r[3] = c->r[3] + 0x000052c0u;
    c->r[2] = 0x00ff0000u;
    c->r[2] = c->r[2] | 0xffffu;
    c->r[3] = c->r[3] & c->r[2];
    c->r[2] = 0x0a000000u;
    c->r[2] = c->r[3] | c->r[2];
    { c->r[31] = 0x088c60f4u; c->r[5] = c->r[2] + 0u; func_088c8760(c, ram); }
    c->r[2] = 0x08aa0000u;
    c->r[2] = mem_r16(ram, c->r[2] + 0xffff9b70u);
    c->r[4] = 0x08a70000u;
    c->r[4] = c->r[4] + 0xffffb640u;
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x088c6110u; c->r[6] = 0u + 0u; func_089e0bd8(c, ram); }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[2] = c->r[2] << 4;
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x088c6130u; c->r[5] = 0u + 0x00000010u; func_0881a1d4(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000034u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000034u);
    mem_w32(ram, c->r[30] + 0x00000030u, c->r[2]);
    mem_w32(ram, c->r[30] + 0x0000002cu, 0u);
    mem_w32(ram, c->r[30] + 0x00000024u, 0u);
L_088c6144:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000024u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000100u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_088c615c; }
    { goto L_088c6490; }
L_088c615c:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000024u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 4;
    c->r[2] = 0x08aa0000u;
    c->r[2] = c->r[2] + 0xffff9ba0u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000009u);
    c->r[2] = 0u + 0x00000002u;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_088c6194; }
    { goto L_088c6480; }
L_088c6194:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000024u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 4;
    c->r[2] = 0x08aa0000u;
    c->r[2] = c->r[2] + 0xffff9bc0u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0x08a80000u;
    { c->r[31] = 0x088c61c4u; c->r[5] = c->r[5] + 0xffffbf40u; func_0885a018(c, ram); }
    mem_wf32(ram, c->r[30] + 0x00000090u, c->f[0]);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000090u);
    c->f[1] = (f32)fabsf(c->f[0]);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00004f78u);
    alx_c_cond_s(c, 12, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_088c6480; }
    c->r[2] = c->r[30] + 0x00000080u;
    { c->r[31] = 0x088c61f4u; c->r[4] = c->r[2] + 0u; func_08808240(c, ram); }
    { c->r[31] = 0x088c61fcu; func_08820f58(c, ram); }
    c->r[6] = c->r[2] + 0x00000020u;
    c->r[4] = c->r[30] + 0x00000080u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000024u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 4;
    c->r[2] = 0x08aa0000u;
    c->r[2] = c->r[2] + 0xffff9bb0u;
    c->r[2] = c->r[3] + c->r[2];
    { c->r[31] = 0x088c622cu; c->r[5] = c->r[2] + 0u; func_0888d510(c, ram); }
    mem_w32(ram, c->r[30] + 0x0000008cu, 0u);
    c->r[2] = c->r[30] + 0x00000070u;
    { c->r[31] = 0x088c623cu; c->r[4] = c->r[2] + 0u; func_08808240(c, ram); }
    c->r[4] = c->r[30] + 0x00000070u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000024u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 4;
    c->r[2] = 0x08aa0000u;
    c->r[2] = c->r[2] + 0xffff9bc0u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[3] = c->r[30] + 0x00000080u;
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x088c6270u; c->r[6] = c->r[3] + 0u; func_0884d26c(c, ram); }
    c->r[2] = c->r[30] + 0x00000070u;
    c->r[3] = c->r[30] + 0x00000070u;
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x088c6284u; c->r[5] = c->r[3] + 0u; func_0884c1d8(c, ram); }
    c->r[4] = c->r[30] + 0x00000070u;
    c->r[5] = c->r[30] + 0x00000070u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000024u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 4;
    c->r[2] = 0x08aa0000u;
    c->r[2] = c->r[2] + 0xffff9ba0u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000006u);
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08a50000u;
    c->r[2] = c->r[2] + 0x000074dcu;
    c->r[2] = c->r[3] + c->r[2];
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000000u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00004f7cu);
    c->f[0] = c->f[1] * c->f[0];
    { c->r[31] = 0x088c62d8u; c->f[12] = c->f[0]; func_088ae204(c, ram); }
    c->r[2] = c->r[30] + 0x00000060u;
    { c->r[31] = 0x088c62e4u; c->r[4] = c->r[2] + 0u; func_08808240(c, ram); }
    c->r[4] = c->r[30] + 0x00000060u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000024u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 4;
    c->r[2] = 0x08aa0000u;
    c->r[2] = c->r[2] + 0xffff9bc0u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00004f80u);
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x088c631cu; c->f[12] = c->f[0]; func_088ae204(c, ram); }
    c->r[2] = c->r[30] + 0x00000050u;
    { c->r[31] = 0x088c6328u; c->r[4] = c->r[2] + 0u; func_08808240(c, ram); }
    c->r[4] = c->r[30] + 0x00000050u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000024u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 4;
    c->r[2] = 0x08aa0000u;
    c->r[2] = c->r[2] + 0xffff9bb0u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[3] = c->r[30] + 0x00000060u;
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x088c635cu; c->r[6] = c->r[3] + 0u; func_088ae1c0(c, ram); }
    c->r[2] = c->r[30] + 0x00000040u;
    { c->r[31] = 0x088c6368u; c->r[4] = c->r[2] + 0u; func_08808240(c, ram); }
    c->r[2] = c->r[30] + 0x00000040u;
    c->r[3] = c->r[30] + 0x00000050u;
    c->r[6] = c->r[30] + 0x00000060u;
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x088c6380u; c->r[5] = c->r[3] + 0u; func_0888d510(c, ram); }
    { c->r[31] = 0x088c6388u; func_08820f58(c, ram); }
    c->r[3] = c->r[2] + 0x00000020u;
    c->r[2] = c->r[30] + 0x00000040u;
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000030u);
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x088c63a0u; c->r[6] = c->r[3] + 0u; func_088c964c(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000030u);
    mem_w16(ram, c->r[2] + 0x00000000u, 0u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000030u);
    c->r[2] = 0u + 0x00003fffu;
    mem_w16(ram, c->r[3] + 0x00000002u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000030u);
    c->r[2] = c->r[2] + 0x00000010u;
    mem_w32(ram, c->r[30] + 0x00000030u, c->r[2]);
    c->r[2] = c->r[30] + 0x00000040u;
    c->r[3] = c->r[30] + 0x00000050u;
    c->r[6] = c->r[30] + 0x00000070u;
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x088c63d8u; c->r[5] = c->r[3] + 0u; func_088ae1c0(c, ram); }
    { c->r[31] = 0x088c63e0u; func_08820f58(c, ram); }
    c->r[3] = c->r[2] + 0x00000020u;
    c->r[2] = c->r[30] + 0x00000040u;
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000030u);
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x088c63f8u; c->r[6] = c->r[3] + 0u; func_088c964c(c, ram); }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000030u);
    c->r[2] = 0u + 0x00007fffu;
    mem_w16(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000030u);
    mem_w16(ram, c->r[2] + 0x00000002u, 0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000030u);
    c->r[2] = c->r[2] + 0x00000010u;
    mem_w32(ram, c->r[30] + 0x00000030u, c->r[2]);
    c->r[2] = c->r[30] + 0x00000040u;
    c->r[3] = c->r[30] + 0x00000050u;
    c->r[6] = c->r[30] + 0x00000070u;
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x088c6430u; c->r[5] = c->r[3] + 0u; func_0888d510(c, ram); }
    { c->r[31] = 0x088c6438u; func_08820f58(c, ram); }
    c->r[3] = c->r[2] + 0x00000020u;
    c->r[2] = c->r[30] + 0x00000040u;
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000030u);
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x088c6450u; c->r[6] = c->r[3] + 0u; func_088c964c(c, ram); }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000030u);
    c->r[2] = 0u + 0x00007fffu;
    mem_w16(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000030u);
    c->r[2] = 0u + 0x00007fffu;
    mem_w16(ram, c->r[3] + 0x00000002u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000030u);
    c->r[2] = c->r[2] + 0x00000010u;
    mem_w32(ram, c->r[30] + 0x00000030u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000002cu);
    c->r[2] = c->r[2] + 0x00000001u;
    mem_w32(ram, c->r[30] + 0x0000002cu, c->r[2]);
L_088c6480:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000024u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000024u, c->r[2]); goto L_088c6144; }
L_088c6490:
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000700u);
    c->r[2] = 0u + 0x000002e8u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[4] = c->lo;
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000704u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 5;
    c->r[2] = c->r[2] - c->r[3];
    c->r[2] = c->r[2] << 3;
    c->r[3] = c->r[4] + c->r[2];
    c->r[2] = 0x08b90000u;
    c->r[2] = c->r[2] + 0x00000cf0u;
    c->r[4] = c->r[3] + c->r[2];
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000002cu);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[5] = 0u + 0x00000003u;
    c->r[6] = 0u + 0x00000182u;
    c->r[7] = c->r[2] + 0u;
    c->r[8] = 0u + 0u;
    { c->r[31] = 0x088c64f4u; c->r[9] = mem_r32(ram, c->r[30] + 0x00000034u); func_088c87a4(c, ram); }
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000700u);
    c->r[2] = 0u + 0x000002e8u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[4] = c->lo;
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000704u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 5;
    c->r[2] = c->r[2] - c->r[3];
    c->r[2] = c->r[2] << 3;
    c->r[3] = c->r[4] + c->r[2];
    c->r[2] = 0x08b90000u;
    c->r[2] = c->r[2] + 0x00000cf0u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x088c653cu; c->r[5] = 0u + 0x00000005u; func_088c8834(c, ram); }
    c->r[4] = 0x08a70000u;
    c->r[4] = c->r[4] + 0xffffb640u;
    { c->r[31] = 0x088c654cu; c->r[5] = 0u + 0u; func_089dfe30(c, ram); }
    c->r[4] = 0x08a70000u;
    { c->r[31] = 0x088c6558u; c->r[4] = c->r[4] + 0xffffb640u; func_089f147c(c, ram); }
L_088c6558:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    { int _c = ((s32)c->r[2] <= 0); if (_c) goto L_088c6be4; }
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00004f8cu);
    c->r[4] = 0x08a70000u;
    c->r[4] = c->r[4] + 0xffffb640u;
    { c->r[31] = 0x088c657cu; c->f[12] = c->f[0]; func_089f1210(c, ram); }
    c->r[4] = 0x08a70000u;
    c->r[4] = c->r[4] + 0xffffb640u;
    c->r[5] = 0u + 0x00000003u;
    { c->r[31] = 0x088c6590u; c->r[6] = 0u + 0x00000007u; func_089df7a0(c, ram); }
    c->r[4] = 0x08a70000u;
    c->r[4] = c->r[4] + 0xffffb640u;
    { c->r[31] = 0x088c65a0u; c->r[5] = 0u + 0x00000001u; func_089dfe30(c, ram); }
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000700u);
    c->r[2] = 0u + 0x000002e8u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[4] = c->lo;
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000704u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 5;
    c->r[2] = c->r[2] - c->r[3];
    c->r[2] = c->r[2] << 3;
    c->r[3] = c->r[4] + c->r[2];
    c->r[2] = 0x08b90000u;
    c->r[2] = c->r[2] + 0x00000cf0u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0x7f7f0000u;
    { c->r[31] = 0x088c65ecu; c->r[5] = c->r[5] | 0x7f7fu; func_088c87fc(c, ram); }
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000700u);
    c->r[2] = 0u + 0x000002e8u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[4] = c->lo;
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000704u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 5;
    c->r[2] = c->r[2] - c->r[3];
    c->r[2] = c->r[2] << 3;
    c->r[3] = c->r[4] + c->r[2];
    c->r[2] = 0x08b90000u;
    c->r[2] = c->r[2] + 0x00000cf0u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x088c6634u; c->r[5] = 0u + 0x00000005u; func_088c8870(c, ram); }
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000700u);
    c->r[2] = 0u + 0x000002e8u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[4] = c->lo;
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000704u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 5;
    c->r[2] = c->r[2] - c->r[3];
    c->r[2] = c->r[2] << 3;
    c->r[3] = c->r[4] + c->r[2];
    c->r[2] = 0x08b90000u;
    c->r[2] = c->r[2] + 0x00000cf0u;
    c->r[4] = c->r[3] + c->r[2];
    c->r[2] = 0x08b90000u;
    c->r[2] = c->r[2] + 0x000052c0u;
    c->r[2] = c->r[2] >> 24;
    c->r[2] = c->r[2] & 0x000fu;
    c->r[3] = c->r[2] << 16;
    c->r[2] = 0x10000000u;
    c->r[2] = c->r[3] | c->r[2];
    { c->r[31] = 0x088c6694u; c->r[5] = c->r[2] + 0u; func_088c8760(c, ram); }
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000700u);
    c->r[2] = 0u + 0x000002e8u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[4] = c->lo;
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000704u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 5;
    c->r[2] = c->r[2] - c->r[3];
    c->r[2] = c->r[2] << 3;
    c->r[3] = c->r[4] + c->r[2];
    c->r[2] = 0x08b90000u;
    c->r[2] = c->r[2] + 0x00000cf0u;
    c->r[4] = c->r[3] + c->r[2];
    c->r[3] = 0x08b90000u;
    c->r[3] = c->r[3] + 0x000052c0u;
    c->r[2] = 0x00ff0000u;
    c->r[2] = c->r[2] | 0xffffu;
    c->r[3] = c->r[3] & c->r[2];
    c->r[2] = 0x0a000000u;
    c->r[2] = c->r[3] | c->r[2];
    { c->r[31] = 0x088c66f4u; c->r[5] = c->r[2] + 0u; func_088c8760(c, ram); }
    c->r[2] = 0x08aa0000u;
    c->r[2] = mem_r16(ram, c->r[2] + 0xffff9b72u);
    c->r[4] = 0x08a70000u;
    c->r[4] = c->r[4] + 0xffffb640u;
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x088c6710u; c->r[6] = 0u + 0u; func_089e0bd8(c, ram); }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[2] = c->r[2] << 4;
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x088c6730u; c->r[5] = 0u + 0x00000010u; func_0881a1d4(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000034u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000034u);
    mem_w32(ram, c->r[30] + 0x00000030u, c->r[2]);
    mem_w32(ram, c->r[30] + 0x0000002cu, 0u);
    mem_w32(ram, c->r[30] + 0x00000024u, 0u);
L_088c6744:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000024u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000100u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_088c675c; }
    { goto L_088c6b1c; }
L_088c675c:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000024u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 4;
    c->r[2] = 0x08aa0000u;
    c->r[2] = c->r[2] + 0xffff9ba0u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000009u);
    c->r[2] = 0u + 0x00000004u;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_088c6794; }
    { goto L_088c6b0c; }
L_088c6794:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000024u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 4;
    c->r[2] = 0x08aa0000u;
    c->r[2] = c->r[2] + 0xffff9bc0u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0x08a80000u;
    { c->r[31] = 0x088c67c4u; c->r[5] = c->r[5] + 0xffffbf40u; func_0885a018(c, ram); }
    mem_wf32(ram, c->r[30] + 0x00000090u, c->f[0]);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000090u);
    c->f[1] = (f32)fabsf(c->f[0]);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00004f78u);
    alx_c_cond_s(c, 12, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_088c6b0c; }
    c->r[2] = c->r[30] + 0x00000080u;
    { c->r[31] = 0x088c67f4u; c->r[4] = c->r[2] + 0u; func_08808240(c, ram); }
    { c->r[31] = 0x088c67fcu; func_08820f58(c, ram); }
    c->r[6] = c->r[2] + 0x00000020u;
    c->r[4] = c->r[30] + 0x00000080u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000024u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 4;
    c->r[2] = 0x08aa0000u;
    c->r[2] = c->r[2] + 0xffff9bb0u;
    c->r[2] = c->r[3] + c->r[2];
    { c->r[31] = 0x088c682cu; c->r[5] = c->r[2] + 0u; func_0888d510(c, ram); }
    mem_w32(ram, c->r[30] + 0x0000008cu, 0u);
    c->r[2] = c->r[30] + 0x00000070u;
    { c->r[31] = 0x088c683cu; c->r[4] = c->r[2] + 0u; func_08808240(c, ram); }
    c->r[4] = c->r[30] + 0x00000070u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000024u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 4;
    c->r[2] = 0x08aa0000u;
    c->r[2] = c->r[2] + 0xffff9bc0u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[3] = c->r[30] + 0x00000080u;
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x088c6870u; c->r[6] = c->r[3] + 0u; func_0884d26c(c, ram); }
    c->r[2] = c->r[30] + 0x00000070u;
    c->r[3] = c->r[30] + 0x00000070u;
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x088c6884u; c->r[5] = c->r[3] + 0u; func_0884c1d8(c, ram); }
    c->r[4] = c->r[30] + 0x00000070u;
    c->r[5] = c->r[30] + 0x00000070u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000024u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 4;
    c->r[2] = 0x08aa0000u;
    c->r[2] = c->r[2] + 0xffff9ba0u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000006u);
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08a50000u;
    c->r[2] = c->r[2] + 0x000074dcu;
    c->r[2] = c->r[3] + c->r[2];
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000000u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00004f7cu);
    c->f[0] = c->f[1] * c->f[0];
    { c->r[31] = 0x088c68d8u; c->f[12] = c->f[0]; func_088ae204(c, ram); }
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00004f84u);
    mem_wf32(ram, c->r[30] + 0x00000028u, c->f[0]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000024u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 4;
    c->r[2] = 0x08aa0000u;
    c->r[2] = c->r[2] + 0xffff9bc0u;
    c->r[2] = c->r[3] + c->r[2];
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000014u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00004f84u);
    c->f[1] = c->f[1] - c->f[0];
    c->f[0] = mem_rf32(ram, c->r[2] + 0x0000000cu);
    alx_c_cond_s(c, 12, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_088c6930; }
    { goto L_088c696c; }
L_088c6930:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000024u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 4;
    c->r[2] = 0x08aa0000u;
    c->r[2] = c->r[2] + 0xffff9bc0u;
    c->r[2] = c->r[3] + c->r[2];
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000014u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x0000000cu);
    c->f[1] = c->f[1] - c->f[0];
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00004f88u);
    c->f[0] = c->f[1] + c->f[0];
    mem_wf32(ram, c->r[30] + 0x00000028u, c->f[0]);
L_088c696c:
    c->r[2] = c->r[30] + 0x00000060u;
    { c->r[31] = 0x088c6978u; c->r[4] = c->r[2] + 0u; func_08808240(c, ram); }
    c->r[4] = c->r[30] + 0x00000060u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000024u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 4;
    c->r[2] = 0x08aa0000u;
    c->r[2] = c->r[2] + 0xffff9bc0u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x088c69a8u; c->f[12] = mem_rf32(ram, c->r[30] + 0x00000028u); func_088ae204(c, ram); }
    c->r[2] = c->r[30] + 0x00000050u;
    { c->r[31] = 0x088c69b4u; c->r[4] = c->r[2] + 0u; func_08808240(c, ram); }
    c->r[4] = c->r[30] + 0x00000050u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000024u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 4;
    c->r[2] = 0x08aa0000u;
    c->r[2] = c->r[2] + 0xffff9bb0u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[3] = c->r[30] + 0x00000060u;
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x088c69e8u; c->r[6] = c->r[3] + 0u; func_088ae1c0(c, ram); }
    c->r[2] = c->r[30] + 0x00000040u;
    { c->r[31] = 0x088c69f4u; c->r[4] = c->r[2] + 0u; func_08808240(c, ram); }
    c->r[2] = c->r[30] + 0x00000040u;
    c->r[3] = c->r[30] + 0x00000050u;
    c->r[6] = c->r[30] + 0x00000060u;
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x088c6a0cu; c->r[5] = c->r[3] + 0u; func_0888d510(c, ram); }
    { c->r[31] = 0x088c6a14u; func_08820f58(c, ram); }
    c->r[3] = c->r[2] + 0x00000020u;
    c->r[2] = c->r[30] + 0x00000040u;
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000030u);
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x088c6a2cu; c->r[6] = c->r[3] + 0u; func_088c964c(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000030u);
    mem_w16(ram, c->r[2] + 0x00000000u, 0u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000030u);
    c->r[2] = 0u + 0x00003fffu;
    mem_w16(ram, c->r[3] + 0x00000002u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000030u);
    c->r[2] = c->r[2] + 0x00000010u;
    mem_w32(ram, c->r[30] + 0x00000030u, c->r[2]);
    c->r[2] = c->r[30] + 0x00000040u;
    c->r[3] = c->r[30] + 0x00000050u;
    c->r[6] = c->r[30] + 0x00000070u;
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x088c6a64u; c->r[5] = c->r[3] + 0u; func_088ae1c0(c, ram); }
    { c->r[31] = 0x088c6a6cu; func_08820f58(c, ram); }
    c->r[3] = c->r[2] + 0x00000020u;
    c->r[2] = c->r[30] + 0x00000040u;
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000030u);
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x088c6a84u; c->r[6] = c->r[3] + 0u; func_088c964c(c, ram); }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000030u);
    c->r[2] = 0u + 0x00007fffu;
    mem_w16(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000030u);
    mem_w16(ram, c->r[2] + 0x00000002u, 0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000030u);
    c->r[2] = c->r[2] + 0x00000010u;
    mem_w32(ram, c->r[30] + 0x00000030u, c->r[2]);
    c->r[2] = c->r[30] + 0x00000040u;
    c->r[3] = c->r[30] + 0x00000050u;
    c->r[6] = c->r[30] + 0x00000070u;
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x088c6abcu; c->r[5] = c->r[3] + 0u; func_0888d510(c, ram); }
    { c->r[31] = 0x088c6ac4u; func_08820f58(c, ram); }
    c->r[3] = c->r[2] + 0x00000020u;
    c->r[2] = c->r[30] + 0x00000040u;
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000030u);
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x088c6adcu; c->r[6] = c->r[3] + 0u; func_088c964c(c, ram); }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000030u);
    c->r[2] = 0u + 0x00007fffu;
    mem_w16(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000030u);
    c->r[2] = 0u + 0x00007fffu;
    mem_w16(ram, c->r[3] + 0x00000002u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000030u);
    c->r[2] = c->r[2] + 0x00000010u;
    mem_w32(ram, c->r[30] + 0x00000030u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000002cu);
    c->r[2] = c->r[2] + 0x00000001u;
    mem_w32(ram, c->r[30] + 0x0000002cu, c->r[2]);
L_088c6b0c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000024u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000024u, c->r[2]); goto L_088c6744; }
L_088c6b1c:
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000700u);
    c->r[2] = 0u + 0x000002e8u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[4] = c->lo;
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000704u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 5;
    c->r[2] = c->r[2] - c->r[3];
    c->r[2] = c->r[2] << 3;
    c->r[3] = c->r[4] + c->r[2];
    c->r[2] = 0x08b90000u;
    c->r[2] = c->r[2] + 0x00000cf0u;
    c->r[4] = c->r[3] + c->r[2];
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000002cu);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[5] = 0u + 0x00000003u;
    c->r[6] = 0u + 0x00000182u;
    c->r[7] = c->r[2] + 0u;
    c->r[8] = 0u + 0u;
    { c->r[31] = 0x088c6b80u; c->r[9] = mem_r32(ram, c->r[30] + 0x00000034u); func_088c87a4(c, ram); }
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000700u);
    c->r[2] = 0u + 0x000002e8u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[4] = c->lo;
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000704u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 5;
    c->r[2] = c->r[2] - c->r[3];
    c->r[2] = c->r[2] << 3;
    c->r[3] = c->r[4] + c->r[2];
    c->r[2] = 0x08b90000u;
    c->r[2] = c->r[2] + 0x00000cf0u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x088c6bc8u; c->r[5] = 0u + 0x00000005u; func_088c8834(c, ram); }
    c->r[4] = 0x08a70000u;
    c->r[4] = c->r[4] + 0xffffb640u;
    { c->r[31] = 0x088c6bd8u; c->r[5] = 0u + 0u; func_089dfe30(c, ram); }
    c->r[4] = 0x08a70000u;
    { c->r[31] = 0x088c6be4u; c->r[4] = c->r[4] + 0xffffb640u; func_089f147c(c, ram); }
L_088c6be4:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x000000a4u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x000000a0u);
    { c->r[29] = c->r[29] + 0x000000b0u; return; }
    return; /* fell out of func_088c4f80 */
}

/* func_088c9328  0x088c9328..0x088c938c  100 bytes, source=sweep */
void func_088c9328(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x088c9328u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[6]);
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[7]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = c->r[2] << 16;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[2] << 8;
    c->r[3] = c->r[3] | c->r[2];
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = c->r[3] | c->r[2];
    c->r[2] = 0xc9000000u;
    c->r[2] = c->r[3] | c->r[2];
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x088c9378u; c->r[5] = c->r[2] + 0u; func_088c8760(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_088c9328 */
}

/* func_088d0148  0x088d0148..0x088d0cc8  2944 bytes, source=fde */
void func_088d0148(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x088d0148u);
L_088d0148:
    c->r[29] = c->r[29] + 0xfffffcd0u;
    mem_w32(ram, c->r[29] + 0x00000328u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000324u, c->r[30]);
    mem_w32(ram, c->r[29] + 0x00000320u, c->r[16]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[2] = c->r[5] + 0u;
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[6]);
    mem_w8(ram, c->r[30] + 0x00000004u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x000000e0u;
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
    c->r[2] = mem_r8(ram, c->r[30] + 0x00000004u);
    mem_w32(ram, c->r[30] + 0x00000310u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000310u);
    c->r[2] = (c->r[3] < 0x0000001fu) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_088d0cb0; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000310u);
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08a40000u;
    c->r[2] = c->r[2] + 0x00005230u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    { u32 _t = c->r[2]; switch (_t) { case 0x088d0148u: goto L_088d0148; case 0x088d01b0u: goto L_088d01b0; case 0x088d0548u: goto L_088d0548; case 0x088d0b70u: goto L_088d0b70; case 0x088d0c78u: goto L_088d0c78; case 0x088d0cb0u: goto L_088d0cb0; default: recomp_trap_unknown_indirect(c, ram, 0x088d01a8u, _t); return; } }
L_088d01b0:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000010u);
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = 0x00200000u;
    { c->r[31] = 0x088d01ccu; c->r[5] = c->r[5] | 0x0020u; func_0884d1b0(c, ram); }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x088d01d8u; c->r[5] = 0u + 0u; func_088679a0(c, ram); }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x088d01e4u; c->r[5] = 0u + 0x00000001u; func_088679d4(c, ram); }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = 0u + 0x00000003u;
    mem_w8(ram, c->r[3] + 0x000000c9u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = 0x00100000u;
    c->r[2] = c->r[2] | 0x0040u;
    mem_w32(ram, c->r[3] + 0x0000008cu, c->r[2]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = 0x08a40000u;
    c->r[5] = c->r[5] + 0x000051f4u;
    c->r[6] = 0x08a40000u;
    c->r[6] = c->r[6] + 0x00005200u;
    c->r[7] = 0u + 0u;
    { c->r[31] = 0x088d0220u; c->r[8] = 0u + 0u; func_089b75f8(c, ram); }
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0u + 0x00000010u;
    mem_w8(ram, c->r[3] + 0x00000055u, c->r[2]);
    { c->r[31] = 0x088d0234u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u); func_089c35d4(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_088d0534; }
    c->r[2] = c->r[30] + 0x00000020u;
    { c->r[31] = 0x088d0250u; c->r[4] = c->r[2] + 0u; func_08808260(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[4] = c->r[2] + 0x00000020u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[3] = c->r[2] + 0x00000020u;
    c->r[2] = mem_r32(ram, c->r[3] + 0x00000000u);
    mem_w32(ram, c->r[4] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[3] + 0x00000004u);
    mem_w32(ram, c->r[4] + 0x00000004u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[3] + 0x00000008u);
    mem_w32(ram, c->r[4] + 0x00000008u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[3] + 0x0000000cu);
    mem_w32(ram, c->r[4] + 0x0000000cu, c->r[2]);
    c->r[2] = c->r[30] + 0x00000060u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0x08a40000u;
    c->r[5] = c->r[5] + 0x0000520cu;
    { c->r[31] = 0x088d029cu; c->r[6] = mem_r32(ram, c->r[3] + 0x00000000u); func_08a1ad34(c, ram); }
    c->r[2] = c->r[30] + 0x00000060u;
    c->r[3] = c->r[30] + 0x00000020u;
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x088d02b4u; c->r[6] = c->r[3] + 0u; func_089b9940(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000160u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000160u);
    { int _c = ((s32)c->r[2] < 0); if (_c) goto L_088d02ec; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = c->r[2] + 0x00000020u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000050u);
    mem_w32(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000054u);
    mem_w32(ram, c->r[3] + 0x00000004u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000058u);
    mem_w32(ram, c->r[3] + 0x00000008u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000005cu);
    mem_w32(ram, c->r[3] + 0x0000000cu, c->r[2]);
L_088d02ec:
    c->r[2] = c->r[30] + 0x00000170u;
    { c->r[31] = 0x088d02f8u; c->r[4] = c->r[2] + 0u; func_08808260(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[3] = c->r[2] + 0x00000040u;
    c->r[2] = mem_r32(ram, c->r[3] + 0x00000000u);
    mem_w32(ram, c->r[30] + 0x000001b0u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[3] + 0x00000004u);
    mem_w32(ram, c->r[30] + 0x000001b4u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[3] + 0x00000008u);
    mem_w32(ram, c->r[30] + 0x000001b8u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[3] + 0x0000000cu);
    { c->r[31] = 0x088d0324u; mem_w32(ram, c->r[30] + 0x000001bcu, c->r[2]); func_0884d22c(c, ram); }
    c->f[1] = c->f[0];
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00005218u);
    c->f[1] = c->f[1] - c->f[0];
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x0000521cu);
    c->f[1] = c->f[1] * c->f[0];
    c->f[0] = mem_rf32(ram, c->r[30] + 0x000001b0u);
    c->f[0] = c->f[0] + c->f[1];
    { c->r[31] = 0x088d0350u; mem_wf32(ram, c->r[30] + 0x000001b0u, c->f[0]); func_0884d22c(c, ram); }
    c->f[1] = c->f[0];
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00005218u);
    c->f[1] = c->f[1] - c->f[0];
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x0000521cu);
    c->f[1] = c->f[1] * c->f[0];
    c->f[0] = mem_rf32(ram, c->r[30] + 0x000001b4u);
    c->f[0] = c->f[0] + c->f[1];
    mem_wf32(ram, c->r[30] + 0x000001b4u, c->f[0]);
    c->r[2] = c->r[30] + 0x00000170u;
    c->r[3] = c->r[30] + 0x000001b0u;
    c->r[4] = c->r[2] + 0u;
    c->r[5] = c->r[3] + 0u;
    { c->r[31] = 0x088d0390u; c->r[6] = 0u + 0u; func_0885a194(c, ram); }
    c->r[2] = c->r[30] + 0x00000170u;
    c->r[3] = c->r[2] + 0x00000020u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = c->r[2] + 0x00000030u;
    c->r[4] = c->r[3] + 0u;
    { c->r[31] = 0x088d03acu; c->r[5] = c->r[2] + 0u; func_0885a018(c, ram); }
    mem_wf32(ram, c->r[30] + 0x000001c0u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = c->r[2] + 0x00000030u;
    c->r[2] = c->r[30] + 0x00000170u;
    c->r[2] = c->r[2] + 0x00000020u;
    c->r[4] = c->r[3] + 0u;
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x088d03d0u; c->f[12] = mem_rf32(ram, c->r[30] + 0x000001c0u); func_0884c224(c, ram); }
    { c->r[31] = 0x088d03d8u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u); func_088ca870(c, ram); }
    c->r[2] = c->r[30] + 0x000001d0u;
    { c->r[31] = 0x088d03e4u; c->r[4] = c->r[2] + 0u; func_08808240(c, ram); }
    c->r[3] = c->r[30] + 0x000001d0u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000030u;
    c->r[4] = c->r[3] + 0u;
    { c->r[31] = 0x088d03fcu; c->r[5] = c->r[2] + 0u; func_0884c1d8(c, ram); }
    c->r[2] = c->r[30] + 0x000001d0u;
    c->r[3] = c->r[30] + 0x000001d0u;
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00005220u);
    c->r[4] = c->r[2] + 0u;
    c->r[5] = c->r[3] + 0u;
    { c->r[31] = 0x088d041cu; c->f[12] = c->f[0]; func_0884c224(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[4] = c->r[2] + 0x00000030u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = c->r[2] + 0x00000030u;
    c->r[3] = c->r[30] + 0x000001d0u;
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x088d043cu; c->r[6] = c->r[3] + 0u; func_08859fd4(c, ram); }
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000000u);
    mem_w8(ram, c->r[3] + 0x0000005bu, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = c->r[2] + 0x00000004u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    mem_w32(ram, c->r[3] + 0x00000020u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = c->r[2] + 0x00000008u;
    c->r[2] = mem_r16(ram, c->r[2] + 0x00000000u);
    mem_w16(ram, c->r[3] + 0x0000004eu, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = c->r[2] + 0x0000000cu;
    c->r[2] = mem_r16(ram, c->r[2] + 0x00000000u);
    mem_w16(ram, c->r[3] + 0x00000052u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = c->r[2] + 0x00000010u;
    c->r[2] = mem_r16(ram, c->r[2] + 0x00000000u);
    mem_w16(ram, c->r[3] + 0x0000004cu, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0u + 0x00000001u;
    mem_w8(ram, c->r[3] + 0x00000054u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x00000030u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000ac8u;
    { c->r[31] = 0x088d04c4u; c->r[5] = c->r[2] + 0u; func_089cb820(c, ram); }
    mem_w32(ram, c->r[30] + 0x000001e0u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x000001e0u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_088d0cb0; }
    c->r[4] = 0u + 0x0000004au;
    c->r[5] = 0u + 0u;
    c->r[6] = 0u + 0u;
    c->r[7] = 0u + 0u;
    c->r[8] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x088d04f0u; c->r[9] = 0u + 0x00000005u; func_089c6bec(c, ram); }
    mem_w32(ram, c->r[30] + 0x000001e4u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[16] = c->r[2] + 0x00000030u;
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000ac8u;
    { c->r[31] = 0x088d050cu; c->r[5] = mem_r32(ram, c->r[30] + 0x000001e4u); func_089cb780(c, ram); }
    mem_w32(ram, c->r[30] + 0x000001e8u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x000001e8u);
    mem_w32(ram, c->r[16] + 0x00000000u, c->r[2]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = 0u + 0x0000000du;
    c->r[6] = 0u + 0u;
    { c->r[31] = 0x088d052cu; c->r[7] = 0u + 0u; func_0884f888(c, ram); }
    { goto L_088d0cb0; }
L_088d0534:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x088d0540u; c->r[5] = 0u + 0x00000002u; func_0880d260(c, ram); }
    { goto L_088d0cb0; }
L_088d0548:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000054u);
    c->r[2] = 0u + 0x00000001u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_088d0aec; }
    c->r[3] = c->r[30] + 0x000001d0u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000030u;
    c->r[4] = c->r[3] + 0u;
    c->r[5] = c->r[2] + 0u;
    c->r[1] = 0x08a80000u;
    { c->r[31] = 0x088d057cu; c->f[12] = mem_rf32(ram, c->r[1] + 0x00002e40u); func_0884c120(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = c->r[2] + 0x00000020u;
    c->r[2] = mem_r32(ram, c->r[3] + 0x00000000u);
    mem_w32(ram, c->r[30] + 0x000001b0u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[3] + 0x00000004u);
    mem_w32(ram, c->r[30] + 0x000001b4u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[3] + 0x00000008u);
    mem_w32(ram, c->r[30] + 0x000001b8u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[3] + 0x0000000cu);
    mem_w32(ram, c->r[30] + 0x000001bcu, c->r[2]);
    c->r[4] = c->r[30] + 0x00000170u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000020u;
    c->r[3] = c->r[30] + 0x000001d0u;
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x088d05c0u; c->r[6] = c->r[3] + 0u; func_08859f30(c, ram); }
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00005224u);
    mem_wf32(ram, c->r[30] + 0x000001c0u, c->f[0]);
    c->r[2] = c->r[30] + 0x000001c0u;
    c->r[3] = c->r[30] + 0x000001b0u;
    c->r[7] = c->r[30] + 0x00000170u;
    c->r[4] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x088d05e8u; c->r[6] = c->r[3] + 0u; func_08886dbc(c, ram); }
    mem_w32(ram, c->r[30] + 0x000001e4u, c->r[2]);
    { c->r[31] = 0x088d05f4u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u); func_089c35d4(c, ram); }
    mem_w32(ram, c->r[30] + 0x000001e0u, c->r[2]);
    mem_w32(ram, c->r[30] + 0x00000160u, 0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x000001e0u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_088d0630; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x000001e0u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000008cu);
    c->r[2] = c->r[2] & 0x0002u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_088d0628; }
    c->r[2] = 0u + 0x0000000du;
    { mem_w32(ram, c->r[30] + 0x00000160u, c->r[2]); goto L_088d0630; }
L_088d0628:
    c->r[2] = 0u + 0x0000000au;
    mem_w32(ram, c->r[30] + 0x00000160u, c->r[2]);
L_088d0630:
    c->r[2] = c->r[30] + 0x00000060u;
    { c->r[31] = 0x088d063cu; c->r[4] = c->r[2] + 0u; func_0885a2b8(c, ram); }
    c->r[2] = c->r[30] + 0x00000060u;
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0u + 0u;
    { c->r[31] = 0x088d0650u; c->r[6] = 0u + 0x00000080u; func_08a19ec4(c, ram); }
    c->f[0] = mem_rf32(ram, c->r[30] + 0x000001c0u);
    mem_wf32(ram, c->r[30] + 0x000000c8u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x000001b0u);
    mem_w32(ram, c->r[30] + 0x00000060u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x000001b4u);
    mem_w32(ram, c->r[30] + 0x00000064u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x000001b8u);
    mem_w32(ram, c->r[30] + 0x00000068u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x000001bcu);
    mem_w32(ram, c->r[30] + 0x0000006cu, c->r[2]);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00005228u);
    mem_wf32(ram, c->r[30] + 0x0000006cu, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000170u);
    mem_w32(ram, c->r[30] + 0x00000070u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000174u);
    mem_w32(ram, c->r[30] + 0x00000074u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000178u);
    mem_w32(ram, c->r[30] + 0x00000078u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000017cu);
    mem_w32(ram, c->r[30] + 0x0000007cu, c->r[2]);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00005228u);
    mem_wf32(ram, c->r[30] + 0x0000007cu, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x000001d0u);
    mem_w32(ram, c->r[30] + 0x00000080u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x000001d4u);
    mem_w32(ram, c->r[30] + 0x00000084u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x000001d8u);
    mem_w32(ram, c->r[30] + 0x00000088u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x000001dcu);
    mem_w32(ram, c->r[30] + 0x0000008cu, c->r[2]);
    c->r[2] = c->r[30] + 0x00000060u;
    c->r[3] = c->r[2] + 0x00000030u;
    c->r[2] = c->r[30] + 0x00000060u;
    c->r[2] = c->r[2] + 0x00000020u;
    c->r[4] = c->r[3] + 0u;
    { c->r[31] = 0x088d06ecu; c->r[5] = c->r[2] + 0u; func_0884c1d8(c, ram); }
    c->r[2] = c->r[30] + 0x00000060u;
    c->r[2] = c->r[2] + 0x00000020u;
    { c->r[31] = 0x088d06fcu; c->r[4] = c->r[2] + 0u; func_08820c6c(c, ram); }
    mem_wf32(ram, c->r[30] + 0x000000c4u, c->f[0]);
    c->r[2] = c->r[30] + 0x00000020u;
    mem_w32(ram, c->r[30] + 0x000000c0u, c->r[2]);
    mem_w8(ram, c->r[30] + 0x000000d1u, 0u);
    c->r[2] = c->r[30] + 0x00000060u;
    c->r[4] = c->r[2] + 0u;
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000160u);
    { c->r[31] = 0x088d0720u; c->r[6] = 0u + 0u; func_089c1990(c, ram); }
    c->r[2] = mem_r8(ram, c->r[30] + 0x000000d0u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_088d07c0; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000a0u);
    mem_w32(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000a4u);
    mem_w32(ram, c->r[3] + 0x00000004u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000a8u);
    mem_w32(ram, c->r[3] + 0x00000008u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000acu);
    mem_w32(ram, c->r[3] + 0x0000000cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[16] = c->r[2] + 0x00000028u;
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000ac8u;
    { c->r[31] = 0x088d0768u; c->r[5] = mem_r32(ram, c->r[30] + 0x000000ccu); func_089cb780(c, ram); }
    mem_w32(ram, c->r[30] + 0x000001ecu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x000001ecu);
    mem_w32(ram, c->r[16] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r8(ram, c->r[30] + 0x000000d0u);
    c->r[2] = c->r[2] & 0x0020u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_088d07b8; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = c->r[2] + 0x00000010u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000b0u);
    mem_w32(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000b4u);
    mem_w32(ram, c->r[3] + 0x00000004u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000b8u);
    mem_w32(ram, c->r[3] + 0x00000008u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000bcu);
    mem_w32(ram, c->r[3] + 0x0000000cu, c->r[2]);
    c->r[2] = 0u + 0x00000004u;
    { mem_w32(ram, c->r[30] + 0x000001e4u, c->r[2]); goto L_088d07c0; }
L_088d07b8:
    c->r[2] = 0u + 0x00000003u;
    mem_w32(ram, c->r[30] + 0x000001e4u, c->r[2]);
L_088d07c0:
    c->r[2] = mem_r32(ram, c->r[30] + 0x000001e4u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_088d0a60; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r8(ram, c->r[30] + 0x000001e4u);
    mem_w8(ram, c->r[3] + 0x0000005au, c->r[2]);
    { c->r[31] = 0x088d07e0u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u); func_089c35d4(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = 0x08a80000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00002ed8u);
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_088d0a0c; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x00000052u);
    { int _c = ((s32)c->r[2] < 0); if (_c) goto L_088d081c; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000052u);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x088d081cu; c->r[6] = 0u + 0x00000010u; func_0899ec9c(c, ram); }
L_088d081c:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x088d0828u; c->r[5] = mem_r32(ram, c->r[30] + 0x0000000cu); func_088c0414(c, ram); }
    { c->r[31] = 0x088d0830u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u); func_089c35d4(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
    mem_w32(ram, c->r[30] + 0x00000010u, 0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_088d086c; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000008cu);
    c->r[2] = c->r[2] & 0x0002u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_088d0864; }
    c->r[2] = 0u + 0x0000000du;
    { mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]); goto L_088d086c; }
L_088d0864:
    c->r[2] = 0u + 0x0000000au;
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]);
L_088d086c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = mem_r32(ram, c->r[2] + 0x00000020u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000020u);
    c->f[1] = mem_rf32(ram, c->r[3] + 0x00000004u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000004u);
    c->f[0] = c->f[1] * c->f[0];
    mem_wf32(ram, c->r[30] + 0x000001f0u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r16(ram, c->r[2] + 0x0000004eu);
    mem_w16(ram, c->r[30] + 0x000001f4u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x00000028u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000ac8u;
    { c->r[31] = 0x088d08b4u; c->r[5] = c->r[2] + 0u; func_089cb820(c, ram); }
    mem_w32(ram, c->r[30] + 0x000001f8u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x000001f8u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_088d08dc; }
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[30] + 0x000001f4u);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = mem_r32(ram, c->r[30] + 0x000001f8u);
    c->r[6] = c->r[2] + 0u;
    { c->r[31] = 0x088d08dcu; c->r[7] = 0u + 0x00000010u; func_088c099c(c, ram); }
L_088d08dc:
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x088d08e8u; c->r[4] = c->r[4] + 0x00000ac8u; func_089cb8ac(c, ram); }
    mem_w32(ram, c->r[30] + 0x000001fcu, c->r[2]);
L_088d08ec:
    c->r[2] = mem_r32(ram, c->r[30] + 0x000001fcu);
    { int _c = (c->r[2] != 0u); if (_c) goto L_088d0900; }
    { goto L_088d0a0c; }
L_088d0900:
    c->r[2] = mem_r32(ram, c->r[30] + 0x000001fcu);
    mem_w32(ram, c->r[30] + 0x00000200u, c->r[2]);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000ac8u;
    { c->r[31] = 0x088d0918u; c->r[5] = mem_r32(ram, c->r[30] + 0x00000200u); func_089cb8e8(c, ram); }
    mem_w32(ram, c->r[30] + 0x000001fcu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000200u);
    c->r[3] = mem_r16(ram, c->r[2] + 0x0000001au);
    c->r[2] = 0u + 0x00000003u;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_088d094c; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000200u);
    c->r[3] = mem_r16(ram, c->r[2] + 0x0000001au);
    c->r[2] = 0u + 0x00000005u;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_088d094c; }
    { goto L_088d08ec; }
L_088d094c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000200u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x0000008cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = c->r[3] & c->r[2];
    { int _c = (c->r[2] != 0u); if (_c) goto L_088d096c; }
    { goto L_088d08ec; }
L_088d096c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000200u);
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x000000b0u);
    { int _c = ((s32)c->r[2] > 0); if (_c) goto L_088d0984; }
    { goto L_088d08ec; }
L_088d0984:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000200u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x000001f8u);
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_088d099c; }
    { goto L_088d08ec; }
L_088d099c:
    c->r[2] = c->r[30] + 0x00000180u;
    { c->r[31] = 0x088d09a8u; c->r[4] = c->r[2] + 0u; func_08808240(c, ram); }
    c->r[3] = c->r[30] + 0x00000180u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000200u);
    c->r[2] = c->r[2] + 0x00000020u;
    c->r[4] = c->r[3] + 0u;
    c->r[5] = mem_r32(ram, c->r[30] + 0x0000000cu);
    { c->r[31] = 0x088d09c4u; c->r[6] = c->r[2] + 0u; func_08820ca4(c, ram); }
    c->r[2] = c->r[30] + 0x00000180u;
    { c->r[31] = 0x088d09d0u; c->r[4] = c->r[2] + 0u; func_088bf600(c, ram); }
    mem_wf32(ram, c->r[30] + 0x00000204u, c->f[0]);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000204u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x000001f0u);
    alx_c_cond_s(c, 12, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_088d08ec; }
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[30] + 0x000001f4u);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000200u);
    c->r[6] = c->r[2] + 0u;
    { c->r[31] = 0x088d0a04u; c->r[7] = 0u + 0x00000010u; func_088c099c(c, ram); }
    { goto L_088d08ec; }
L_088d0a0c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x00000030u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000ac8u;
    { c->r[31] = 0x088d0a28u; c->r[5] = c->r[2] + 0u; func_089cb820(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000200u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000200u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_088d0a44; }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000200u);
    { c->r[31] = 0x088d0a44u; c->r[5] = 0u + 0x00000002u; func_0880d260(c, ram); }
L_088d0a44:
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0u + 0x00000002u;
    mem_w8(ram, c->r[3] + 0x00000054u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0u + 0x0000003cu;
    { mem_w16(ram, c->r[3] + 0x00000050u, c->r[2]); goto L_088d0ab4; }
L_088d0a60:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000034u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x0000522cu);
    c->f[0] = c->f[1] - c->f[0];
    mem_wf32(ram, c->r[3] + 0x00000034u, c->f[0]);
    c->r[3] = c->r[30] + 0x00000180u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000030u;
    c->r[4] = c->r[3] + 0u;
    c->r[5] = c->r[2] + 0u;
    c->r[1] = 0x08a80000u;
    { c->r[31] = 0x088d0a9cu; c->f[12] = mem_rf32(ram, c->r[1] + 0x00002e40u); func_0884c120(c, ram); }
    c->r[3] = c->r[30] + 0x00000180u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000020u;
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x088d0ab4u; c->r[5] = c->r[3] + 0u; func_0880d1a0(c, ram); }
L_088d0ab4:
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r16(ram, c->r[2] + 0x0000004cu);
    c->r[2] = c->r[2] + 0xffffffffu;
    mem_w16(ram, c->r[3] + 0x0000004cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x0000004cu);
    { int _c = ((s32)c->r[2] > 0); if (_c) goto L_088d0cb0; }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x088d0ae4u; c->r[5] = 0u + 0x00000002u; func_0880d260(c, ram); }
    { goto L_088d0cb0; }
L_088d0aec:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000054u);
    c->r[2] = 0u + 0x00000002u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_088d0cb0; }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x088d0b0cu; c->r[5] = 0u + 0u; func_088679d4(c, ram); }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x0000008cu);
    c->r[2] = 0x00800000u;
    c->r[2] = c->r[3] | c->r[2];
    mem_w32(ram, c->r[4] + 0x0000008cu, c->r[2]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x0000008cu);
    c->r[2] = 0u + 0xffffffbfu;
    c->r[2] = c->r[3] & c->r[2];
    mem_w32(ram, c->r[4] + 0x0000008cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x00000050u);
    { int _c = ((s32)c->r[2] > 0); if (_c) goto L_088d0b58; }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x088d0b58u; c->r[5] = 0u + 0x00000002u; func_0880d260(c, ram); }
L_088d0b58:
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r16(ram, c->r[2] + 0x00000050u);
    c->r[2] = c->r[2] + 0xffffffffu;
    { mem_w16(ram, c->r[3] + 0x00000050u, c->r[2]); goto L_088d0cb0; }
L_088d0b70:
    { c->r[31] = 0x088d0b78u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u); func_089c35d4(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000200u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x00000034u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000ac8u;
    { c->r[31] = 0x088d0b98u; c->r[5] = c->r[2] + 0u; func_089cb820(c, ram); }
    mem_w32(ram, c->r[30] + 0x000001fcu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x000001fcu);
    { int _c = (c->r[2] == 0u); if (_c) goto L_088d0cb0; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000200u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_088d0c64; }
    c->r[2] = c->r[30] + 0x00000020u;
    { c->r[31] = 0x088d0bc0u; c->r[4] = c->r[2] + 0u; func_08808260(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x000001fcu);
    c->r[4] = c->r[2] + 0x00000020u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000200u);
    c->r[3] = c->r[2] + 0x00000020u;
    c->r[2] = mem_r32(ram, c->r[3] + 0x00000000u);
    mem_w32(ram, c->r[4] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[3] + 0x00000004u);
    mem_w32(ram, c->r[4] + 0x00000004u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[3] + 0x00000008u);
    mem_w32(ram, c->r[4] + 0x00000008u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[3] + 0x0000000cu);
    mem_w32(ram, c->r[4] + 0x0000000cu, c->r[2]);
    c->r[3] = c->r[30] + 0x00000210u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x0000005bu);
    c->r[4] = c->r[3] + 0u;
    c->r[5] = 0x08a40000u;
    c->r[5] = c->r[5] + 0x0000520cu;
    { c->r[31] = 0x088d0c10u; c->r[6] = c->r[2] + 0u; func_08a1ad34(c, ram); }
    c->r[2] = c->r[30] + 0x00000210u;
    c->r[3] = c->r[30] + 0x00000020u;
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000200u);
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x088d0c28u; c->r[6] = c->r[3] + 0u; func_089b9940(c, ram); }
    mem_w32(ram, c->r[30] + 0x000001f8u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x000001f8u);
    { int _c = ((s32)c->r[2] < 0); if (_c) goto L_088d0cb0; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x000001fcu);
    c->r[3] = c->r[2] + 0x00000020u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000050u);
    mem_w32(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000054u);
    mem_w32(ram, c->r[3] + 0x00000004u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000058u);
    mem_w32(ram, c->r[3] + 0x00000008u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000005cu);
    { mem_w32(ram, c->r[3] + 0x0000000cu, c->r[2]); goto L_088d0cb0; }
L_088d0c64:
    c->r[4] = mem_r32(ram, c->r[30] + 0x000001fcu);
    { c->r[31] = 0x088d0c70u; c->r[5] = 0u + 0x00000002u; func_0880d260(c, ram); }
    { goto L_088d0cb0; }
L_088d0c78:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x00000030u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000ac8u;
    { c->r[31] = 0x088d0c94u; c->r[5] = c->r[2] + 0u; func_089cb820(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000200u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000200u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_088d0cb0; }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000200u);
    { c->r[31] = 0x088d0cb0u; c->r[5] = 0u + 0x00000002u; func_0880d260(c, ram); }
L_088d0cb0:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000328u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000324u);
    c->r[16] = mem_r32(ram, c->r[29] + 0x00000320u);
    { c->r[29] = c->r[29] + 0x00000330u; return; }
    return; /* fell out of func_088d0148 */
}

/* func_088d3c78  0x088d3c78..0x088d3cd8  96 bytes, source=sweep */
void func_088d3c78(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x088d3c78u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x000000b2u);
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[3] = c->r[2] << 3;
    c->r[2] = 0x08aa0000u;
    c->r[2] = c->r[2] + 0x000049dcu;
    c->r[2] = c->r[3] + c->r[2];
    mem_w32(ram, c->r[2] + 0x00000000u, 0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[3] = c->r[2] << 3;
    c->r[2] = 0x08aa0000u;
    c->r[2] = c->r[2] + 0x000049e0u;
    c->r[2] = c->r[3] + c->r[2];
    mem_w32(ram, c->r[2] + 0x00000000u, 0u);
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_088d3c78 */
}

/* func_088d8e4c  0x088d8e4c..0x088d8e94  72 bytes, source=sweep */
void func_088d8e4c(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x088d8e4cu);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_088d8e74; }
    { goto L_088d8e84; }
L_088d8e74:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = mem_r32(ram, c->r[3] + 0x000000d4u);
    mem_w32(ram, c->r[2] + 0x000000d8u, c->r[3]);
L_088d8e84:
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_088d8e4c */
}

/* func_088de328  0x088de328..0x088de358  48 bytes, source=sweep */
void func_088de328(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x088de328u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[3] = 0x08aa0000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0xffffed00u);
    c->r[2] = mem_r8(ram, c->r[30] + 0x00000000u);
    mem_w8(ram, c->r[3] + 0x00000019u, c->r[2]);
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_088de328 */
}

/* func_088df24c  0x088df24c..0x088df29c  80 bytes, source=sweep */
void func_088df24c(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x088df24cu);
    c->r[29] = c->r[29] + 0xfffffff0u;
    mem_w32(ram, c->r[29] + 0x00000000u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    c->r[2] = 0x08aa0000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0xffffed00u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_088df270; }
    { goto L_088df28c; }
L_088df270:
    c->r[3] = 0x08aa0000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0xffffed00u);
    c->r[2] = 0x08aa0000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0xffffed00u);
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000023u);
    c->r[2] = c->r[2] + 0x00000001u;
    mem_w8(ram, c->r[3] + 0x00000023u, c->r[2]);
L_088df28c:
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000000u);
    { c->r[29] = c->r[29] + 0x00000010u; return; }
    return; /* fell out of func_088df24c */
}

/* func_088e4560  0x088e4560..0x088e45a4  68 bytes, source=fde */
void func_088e4560(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x088e4560u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[6]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[6] = mem_r32(ram, c->r[30] + 0x00000008u);
    { c->r[31] = 0x088e4590u; c->r[7] = 0u + 0x00000004u; func_088e3c90(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_088e4560 */
}

/* func_088e9aec  0x088e9aec..0x088e9d94  680 bytes, source=fde */
void func_088e9aec(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x088e9aecu);
    c->r[29] = c->r[29] + 0xffffffc0u;
    mem_w32(ram, c->r[29] + 0x00000038u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000034u, c->r[30]);
    mem_w32(ram, c->r[29] + 0x00000030u, c->r[16]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[6]);
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[7]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x000000a5u);
    mem_w32(ram, c->r[30] + 0x00000028u, c->r[2]);
    c->r[2] = 0u + 0x00000001u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000028u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_088e9b78; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000028u);
    c->r[2] = ((s32)c->r[3] < (s32)0x00000002u) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_088e9b50; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000028u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_088e9b68; }
    { goto L_088e9d7c; }
L_088e9b50:
    c->r[2] = 0u + 0x00000002u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000028u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_088e9c38; }
    { goto L_088e9d7c; }
L_088e9b68:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000004u);
    mem_w32(ram, c->r[2] + 0x000000a0u, c->r[3]);
L_088e9b78:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = 0u + 0x00000002u;
    mem_w8(ram, c->r[3] + 0x000000a5u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = 0u + 0xffffffffu;
    mem_w8(ram, c->r[3] + 0x000000acu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[16] = c->r[2] + 0x00000010u;
    c->r[3] = c->r[30] + 0x00000010u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000008u);
    c->f[2] = (f32)(s32)f2u(c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x0000000cu);
    c->f[1] = (f32)(s32)f2u(c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000010u);
    c->f[0] = (f32)(s32)f2u(c->f[0]);
    c->r[4] = c->r[3] + 0u;
    c->f[12] = c->f[2];
    c->f[13] = c->f[1];
    c->f[14] = c->f[0];
    c->f[15] = u2f(0u);
    { c->r[31] = 0x088e9bdcu; func_0880d140(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    mem_w32(ram, c->r[16] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    mem_w32(ram, c->r[16] + 0x00000004u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    mem_w32(ram, c->r[16] + 0x00000008u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    mem_w32(ram, c->r[16] + 0x0000000cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = c->r[2] + 0x00000010u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[2] + 0x00000010u;
    c->r[4] = c->r[3] + 0u;
    c->r[5] = c->r[2] + 0u;
    c->r[6] = 0x08aa0000u;
    { c->r[31] = 0x088e9c20u; c->r[6] = c->r[6] + 0xffffebd0u; func_08859fd4(c, ram); }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000014u);
    c->f[0] = (f32)(s32)f2u(c->f[0]);
    { mem_wf32(ram, c->r[3] + 0x000000b0u, c->f[0]); goto L_088e9d7c; }
L_088e9c38:
    c->r[2] = c->r[30] + 0x00000010u;
    { c->r[31] = 0x088e9c44u; c->r[4] = c->r[2] + 0u; func_08808240(c, ram); }
    c->r[4] = c->r[30] + 0x00000010u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = c->r[2] + 0x00000010u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000020u;
    c->r[5] = c->r[3] + 0u;
    { c->r[31] = 0x088e9c64u; c->r[6] = c->r[2] + 0u; func_08820ca4(c, ram); }
    c->r[2] = c->r[30] + 0x00000010u;
    { c->r[31] = 0x088e9c70u; c->r[4] = c->r[2] + 0u; func_08820c6c(c, ram); }
    mem_wf32(ram, c->r[30] + 0x00000020u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000020u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x000000b0u);
    alx_c_cond_s(c, 12, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_088e9c98; }
    { goto L_088e9cb0; }
L_088e9c98:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000004u);
    { c->r[31] = 0x088e9ca8u; c->r[6] = mem_r32(ram, c->r[30] + 0x00000008u); func_088e9658(c, ram); }
    { goto L_088e9cc8; }
L_088e9cb0:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[2] + 0x00000010u;
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000004u);
    { c->r[31] = 0x088e9cc8u; c->r[6] = c->r[2] + 0u; func_088d6f10(c, ram); }
L_088e9cc8:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000001u);
    mem_w32(ram, c->r[30] + 0x00000024u, c->r[2]);
    c->r[2] = 0u + 0x00000001u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000024u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_088e9cfc; }
    c->r[2] = 0u + 0x00000002u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000024u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_088e9d34; }
    { goto L_088e9d7c; }
L_088e9cfc:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x000000a0u);
    c->r[2] = c->r[2] + 0xffffffffu;
    mem_w32(ram, c->r[3] + 0x000000a0u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x000000a0u);
    { int _c = ((s32)c->r[2] >= 0); if (_c) goto L_088e9d7c; }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x088e9d2cu; c->r[5] = mem_r32(ram, c->r[30] + 0x00000004u); func_088d3bfc(c, ram); }
    { goto L_088e9d7c; }
L_088e9d34:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = c->r[2] + 0x00000010u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000060u);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[6] = c->r[3] + 0u;
    { c->r[31] = 0x088e9d58u; c->f[12] = mem_rf32(ram, c->r[2] + 0x0000000cu); func_088d3a1c(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x000000a0u);
    c->r[2] = ((s32)c->r[3] < (s32)c->r[2]) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_088e9d7c; }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x088e9d7cu; c->r[5] = mem_r32(ram, c->r[30] + 0x00000004u); func_088d3bfc(c, ram); }
L_088e9d7c:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000038u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000034u);
    c->r[16] = mem_r32(ram, c->r[29] + 0x00000030u);
    { c->r[29] = c->r[29] + 0x00000040u; return; }
    return; /* fell out of func_088e9aec */
}

/* func_088ef6ac  0x088ef6ac..0x088ef73c  144 bytes, source=sweep */
void func_088ef6ac(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x088ef6acu);
    c->r[29] = c->r[29] + 0xffffffc0u;
    mem_w32(ram, c->r[29] + 0x00000034u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000030u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    mem_wf32(ram, c->r[30] + 0x00000008u, c->f[12]);
    c->r[2] = c->r[30] + 0x00000010u;
    { c->r[31] = 0x088ef6d4u; c->r[4] = c->r[2] + 0u; func_08808240(c, ram); }
    c->r[2] = c->r[30] + 0x00000010u;
    c->r[4] = c->r[2] + 0u;
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000004u);
    { c->r[31] = 0x088ef6e8u; c->r[6] = mem_r32(ram, c->r[30] + 0x00000000u); func_08820ca4(c, ram); }
    c->r[2] = c->r[30] + 0x00000010u;
    { c->r[31] = 0x088ef6f4u; c->r[4] = c->r[2] + 0u; func_08820c6c(c, ram); }
    c->f[1] = c->f[0];
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000008u);
    alx_c_cond_s(c, 12, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_088ef714; }
    { goto L_088ef720; }
L_088ef714:
    c->r[2] = 0u + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000020u, c->r[2]); goto L_088ef724; }
L_088ef720:
    mem_w32(ram, c->r[30] + 0x00000020u, 0u);
L_088ef724:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000034u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000030u);
    { c->r[29] = c->r[29] + 0x00000040u; return; }
    return; /* fell out of func_088ef6ac */
}

/* func_088f4d68  0x088f4d68..0x088f4d8c  36 bytes, source=sweep */
void func_088f4d68(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x088f4d68u);
    c->r[29] = c->r[29] + 0xfffffff0u;
    mem_w32(ram, c->r[29] + 0x00000000u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    c->r[1] = 0x08aa0000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffffedd0u);
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000000u);
    { c->r[29] = c->r[29] + 0x00000010u; return; }
    return; /* fell out of func_088f4d68 */
}

/* func_088f98e8  0x088f98e8..0x088f9f14  1580 bytes, source=fde */
void func_088f98e8(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x088f98e8u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    c->r[3] = 0x08aa0000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00004968u);
    c->r[2] = 0u + 0x00000001u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_088f9950; }
    c->r[2] = 0u + 0xffffffffu;
    c->r[1] = 0x08aa0000u;
    mem_w32(ram, c->r[1] + 0xffffee10u, c->r[2]);
    c->r[2] = 0u + 0xffffffffu;
    c->r[1] = 0x08aa0000u;
    mem_w32(ram, c->r[1] + 0xffffee14u, c->r[2]);
    c->r[2] = 0u + 0xffffffffu;
    c->r[1] = 0x08aa0000u;
    mem_w32(ram, c->r[1] + 0xffffee18u, c->r[2]);
    c->r[2] = 0u + 0xffffffffu;
    c->r[1] = 0x08aa0000u;
    mem_w32(ram, c->r[1] + 0xffffee1cu, c->r[2]);
    c->r[2] = 0u + 0xffffffffu;
    c->r[1] = 0x08aa0000u;
    mem_w32(ram, c->r[1] + 0xffffee20u, c->r[2]);
L_088f9950:
    c->r[2] = 0x08aa0000u;
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00004962u);
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]);
    c->r[2] = 0u + 0x00000003u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_088f9d34; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = ((s32)c->r[3] < (s32)0x00000004u) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_088f9994; }
    c->r[2] = 0u + 0x00000002u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_088f9b94; }
    { goto L_088f9f00; }
L_088f9994:
    c->r[2] = 0u + 0x00000010u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_088f99ac; }
    { goto L_088f9f00; }
L_088f99ac:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000005cu);
    c->r[3] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x00000000u);
    c->r[2] = 0u + 0x000000ccu;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_088f99e4; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000005cu);
    c->r[3] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x00000000u);
    c->r[2] = 0u + 0x000000cau;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_088f99e4; }
    { goto L_088f9a5c; }
L_088f99e4:
    c->r[3] = 0x08aa0000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00004968u);
    c->r[2] = 0u + 0x0000000au;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_088f9a5c; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000020u;
    c->r[4] = 0x02000000u;
    c->r[5] = c->r[2] + 0u;
    c->r[6] = 0u + 0u;
    c->r[7] = 0u + 0u;
    c->f[12] = u2f(0u);
    c->f[13] = u2f(0u);
    { c->r[31] = 0x088f9a20u; c->r[8] = 0u + 0xffffffffu; func_0884fcb4(c, ram); }
    c->r[1] = 0x08aa0000u;
    mem_w32(ram, c->r[1] + 0xffffee10u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000020u;
    c->r[4] = 0x02000000u;
    c->r[4] = c->r[4] | 0x0001u;
    c->r[5] = c->r[2] + 0u;
    c->r[6] = 0u + 0u;
    c->r[7] = 0u + 0u;
    c->f[12] = u2f(0u);
    c->f[13] = u2f(0u);
    { c->r[31] = 0x088f9a54u; c->r[8] = 0u + 0xffffffffu; func_0884fcb4(c, ram); }
    c->r[1] = 0x08aa0000u;
    mem_w32(ram, c->r[1] + 0xffffee14u, c->r[2]);
L_088f9a5c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000005cu);
    c->r[3] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x00000000u);
    c->r[2] = 0u + 0x000000cbu;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_088f9b24; }
    c->r[3] = 0x08aa0000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0xffffee20u);
    c->r[2] = 0u + 0xffffffffu;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_088f9b24; }
    c->r[3] = 0x08aa0000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0xffffee10u);
    c->r[2] = 0u + 0xffffffffu;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_088f9acc; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000020u;
    c->r[4] = 0x02000000u;
    c->r[5] = c->r[2] + 0u;
    c->r[6] = 0u + 0u;
    c->r[7] = 0u + 0u;
    c->f[12] = u2f(0u);
    c->f[13] = u2f(0u);
    { c->r[31] = 0x088f9ac4u; c->r[8] = 0u + 0xffffffffu; func_0884fcb4(c, ram); }
    c->r[1] = 0x08aa0000u;
    mem_w32(ram, c->r[1] + 0xffffee10u, c->r[2]);
L_088f9acc:
    c->r[4] = 0x08aa0000u;
    { c->r[31] = 0x088f9ad8u; c->r[4] = mem_r32(ram, c->r[4] + 0xffffee14u); func_0885028c(c, ram); }
    c->r[2] = 0u + 0xffffffffu;
    c->r[1] = 0x08aa0000u;
    mem_w32(ram, c->r[1] + 0xffffee14u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000020u;
    c->r[4] = 0x02000000u;
    c->r[4] = c->r[4] | 0x0002u;
    c->r[5] = c->r[2] + 0u;
    c->r[6] = 0u + 0u;
    c->r[7] = 0u + 0u;
    c->f[12] = u2f(0u);
    c->f[13] = u2f(0u);
    { c->r[31] = 0x088f9b10u; c->r[8] = 0u + 0xffffffffu; func_0884fcb4(c, ram); }
    c->r[1] = 0x08aa0000u;
    mem_w32(ram, c->r[1] + 0xffffee14u, c->r[2]);
    c->r[2] = 0u + 0x00000001u;
    c->r[1] = 0x08aa0000u;
    mem_w32(ram, c->r[1] + 0xffffee20u, c->r[2]);
L_088f9b24:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000020u;
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000062ccu);
    c->r[4] = 0x08aa0000u;
    c->r[4] = mem_r32(ram, c->r[4] + 0xffffee10u);
    c->r[5] = c->r[2] + 0u;
    c->r[6] = 0u + 0u;
    c->r[7] = 0u + 0u;
    c->f[12] = c->f[0];
    c->r[8] = 0u + 0u;
    { c->r[31] = 0x088f9b58u; c->r[9] = 0u + 0u; func_0885005c(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000020u;
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000062ccu);
    c->r[4] = 0x08aa0000u;
    c->r[4] = mem_r32(ram, c->r[4] + 0xffffee14u);
    c->r[5] = c->r[2] + 0u;
    c->r[6] = 0u + 0u;
    c->r[7] = 0u + 0u;
    c->f[12] = c->f[0];
    c->r[8] = 0u + 0u;
    { c->r[31] = 0x088f9b8cu; c->r[9] = 0u + 0u; func_0885005c(c, ram); }
    { goto L_088f9f00; }
L_088f9b94:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000005cu);
    c->r[3] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x00000000u);
    c->r[2] = 0u + 0x000000b4u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_088f9f00; }
    c->r[3] = 0x08aa0000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00004968u);
    c->r[2] = 0u + 0x0000000au;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_088f9c28; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000020u;
    c->r[4] = 0x02000000u;
    c->r[5] = c->r[2] + 0u;
    c->r[6] = 0u + 0u;
    c->r[7] = 0u + 0u;
    c->f[12] = u2f(0u);
    c->f[13] = u2f(0u);
    { c->r[31] = 0x088f9be8u; c->r[8] = 0u + 0xffffffffu; func_0884fcb4(c, ram); }
    c->r[1] = 0x08aa0000u;
    mem_w32(ram, c->r[1] + 0xffffee10u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000020u;
    c->r[4] = 0x02000000u;
    c->r[4] = c->r[4] | 0x0001u;
    c->r[5] = c->r[2] + 0u;
    c->r[6] = 0u + 0u;
    c->r[7] = 0u + 0u;
    c->f[12] = u2f(0u);
    c->f[13] = u2f(0u);
    { c->r[31] = 0x088f9c1cu; c->r[8] = 0u + 0xffffffffu; func_0884fcb4(c, ram); }
    c->r[1] = 0x08aa0000u;
    { mem_w32(ram, c->r[1] + 0xffffee14u, c->r[2]); goto L_088f9f00; }
L_088f9c28:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000020u;
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000062ccu);
    c->r[4] = 0x08aa0000u;
    c->r[4] = mem_r32(ram, c->r[4] + 0xffffee10u);
    c->r[5] = c->r[2] + 0u;
    c->r[6] = 0u + 0u;
    c->r[7] = 0u + 0u;
    c->f[12] = c->f[0];
    c->r[8] = 0u + 0u;
    { c->r[31] = 0x088f9c5cu; c->r[9] = 0u + 0u; func_0885005c(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000020u;
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000062ccu);
    c->r[4] = 0x08aa0000u;
    c->r[4] = mem_r32(ram, c->r[4] + 0xffffee14u);
    c->r[5] = c->r[2] + 0u;
    c->r[6] = 0u + 0u;
    c->r[7] = 0u + 0u;
    c->f[12] = c->f[0];
    c->r[8] = 0u + 0u;
    { c->r[31] = 0x088f9c90u; c->r[9] = 0u + 0u; func_0885005c(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000020u;
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000062ccu);
    c->r[4] = 0x08aa0000u;
    c->r[4] = mem_r32(ram, c->r[4] + 0xffffee18u);
    c->r[5] = c->r[2] + 0u;
    c->r[6] = 0u + 0u;
    c->r[7] = 0u + 0u;
    c->f[12] = c->f[0];
    c->r[8] = 0u + 0u;
    { c->r[31] = 0x088f9cc4u; c->r[9] = 0u + 0u; func_0885005c(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000020u;
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000062ccu);
    c->r[4] = 0x08aa0000u;
    c->r[4] = mem_r32(ram, c->r[4] + 0xffffee1cu);
    c->r[5] = c->r[2] + 0u;
    c->r[6] = 0u + 0u;
    c->r[7] = 0u + 0u;
    c->f[12] = c->f[0];
    c->r[8] = 0u + 0u;
    { c->r[31] = 0x088f9cf8u; c->r[9] = 0u + 0u; func_0885005c(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000020u;
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000062ccu);
    c->r[4] = 0x08aa0000u;
    c->r[4] = mem_r32(ram, c->r[4] + 0xffffee20u);
    c->r[5] = c->r[2] + 0u;
    c->r[6] = 0u + 0u;
    c->r[7] = 0u + 0u;
    c->f[12] = c->f[0];
    c->r[8] = 0u + 0u;
    { c->r[31] = 0x088f9d2cu; c->r[9] = 0u + 0u; func_0885005c(c, ram); }
    { goto L_088f9f00; }
L_088f9d34:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000005cu);
    c->r[3] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x00000000u);
    c->r[2] = 0u + 0x0000003du;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_088f9d6c; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000005cu);
    c->r[3] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x00000000u);
    c->r[2] = 0u + 0x000000b4u;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_088f9d6c; }
    { goto L_088f9f00; }
L_088f9d6c:
    c->r[3] = 0x08aa0000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00004968u);
    c->r[2] = 0u + 0x0000000au;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_088f9de8; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000020u;
    c->r[4] = 0x02000000u;
    c->r[5] = c->r[2] + 0u;
    c->r[6] = 0u + 0u;
    c->r[7] = 0u + 0u;
    c->f[12] = u2f(0u);
    c->f[13] = u2f(0u);
    { c->r[31] = 0x088f9da8u; c->r[8] = 0u + 0xffffffffu; func_0884fcb4(c, ram); }
    c->r[1] = 0x08aa0000u;
    mem_w32(ram, c->r[1] + 0xffffee10u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000020u;
    c->r[4] = 0x02000000u;
    c->r[4] = c->r[4] | 0x0001u;
    c->r[5] = c->r[2] + 0u;
    c->r[6] = 0u + 0u;
    c->r[7] = 0u + 0u;
    c->f[12] = u2f(0u);
    c->f[13] = u2f(0u);
    { c->r[31] = 0x088f9ddcu; c->r[8] = 0u + 0xffffffffu; func_0884fcb4(c, ram); }
    c->r[1] = 0x08aa0000u;
    { mem_w32(ram, c->r[1] + 0xffffee14u, c->r[2]); goto L_088f9f00; }
L_088f9de8:
    c->r[3] = 0x08aa0000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x0000496cu);
    c->r[2] = 0u + 0x0000000au;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_088f9e98; }
    c->r[4] = 0x08aa0000u;
    { c->r[31] = 0x088f9e08u; c->r[4] = mem_r32(ram, c->r[4] + 0xffffee10u); func_0885028c(c, ram); }
    c->r[2] = 0u + 0xffffffffu;
    c->r[1] = 0x08aa0000u;
    mem_w32(ram, c->r[1] + 0xffffee10u, c->r[2]);
    c->r[4] = 0x08aa0000u;
    { c->r[31] = 0x088f9e20u; c->r[4] = mem_r32(ram, c->r[4] + 0xffffee14u); func_0885028c(c, ram); }
    c->r[2] = 0u + 0xffffffffu;
    c->r[1] = 0x08aa0000u;
    mem_w32(ram, c->r[1] + 0xffffee14u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000020u;
    c->r[4] = 0x02000000u;
    c->r[4] = c->r[4] | 0x0002u;
    c->r[5] = c->r[2] + 0u;
    c->r[6] = 0u + 0u;
    c->r[7] = 0u + 0u;
    c->f[12] = u2f(0u);
    c->f[13] = u2f(0u);
    { c->r[31] = 0x088f9e58u; c->r[8] = 0u + 0xffffffffu; func_0884fcb4(c, ram); }
    c->r[1] = 0x08aa0000u;
    mem_w32(ram, c->r[1] + 0xffffee10u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000020u;
    c->r[4] = 0x02000000u;
    c->r[4] = c->r[4] | 0x0004u;
    c->r[5] = c->r[2] + 0u;
    c->r[6] = 0u + 0u;
    c->r[7] = 0u + 0u;
    c->f[12] = u2f(0u);
    c->f[13] = u2f(0u);
    { c->r[31] = 0x088f9e8cu; c->r[8] = 0u + 0xffffffffu; func_0884fcb4(c, ram); }
    c->r[1] = 0x08aa0000u;
    { mem_w32(ram, c->r[1] + 0xffffee14u, c->r[2]); goto L_088f9f00; }
L_088f9e98:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000020u;
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000062ccu);
    c->r[4] = 0x08aa0000u;
    c->r[4] = mem_r32(ram, c->r[4] + 0xffffee10u);
    c->r[5] = c->r[2] + 0u;
    c->r[6] = 0u + 0u;
    c->r[7] = 0u + 0u;
    c->f[12] = c->f[0];
    c->r[8] = 0u + 0u;
    { c->r[31] = 0x088f9eccu; c->r[9] = 0u + 0u; func_0885005c(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000020u;
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000062ccu);
    c->r[4] = 0x08aa0000u;
    c->r[4] = mem_r32(ram, c->r[4] + 0xffffee14u);
    c->r[5] = c->r[2] + 0u;
    c->r[6] = 0u + 0u;
    c->r[7] = 0u + 0u;
    c->f[12] = c->f[0];
    c->r[8] = 0u + 0u;
    { c->r[31] = 0x088f9f00u; c->r[9] = 0u + 0u; func_0885005c(c, ram); }
L_088f9f00:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_088f98e8 */
}

/* func_08900234  0x08900234..0x08900384  336 bytes, source=fde */
void func_08900234(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08900234u);
    c->r[29] = c->r[29] + 0xffffffd0u;
    mem_w32(ram, c->r[29] + 0x00000024u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000020u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x000000e0u;
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[2] + 0x0000000cu;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000ac8u;
    { c->r[31] = 0x08900270u; c->r[5] = c->r[2] + 0u; func_089cb820(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]);
    { c->r[31] = 0x0890027cu; c->r[4] = 0u + 0x0000001au; func_089c6f04(c, ram); }
    c->r[4] = 0x08aa0000u;
    c->r[4] = c->r[4] + 0xfffff498u;
    { c->r[31] = 0x0890028cu; c->r[5] = c->r[2] + 0u; func_08811340(c, ram); }
    { c->r[31] = 0x08900294u; c->r[4] = 0u + 0x0000004fu; func_089c6f04(c, ram); }
    c->r[1] = 0x08aa0000u;
    mem_w16(ram, c->r[1] + 0xfffff4bcu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_08900370; }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[5] = 0x00700000u;
    { c->r[31] = 0x089002b8u; c->r[6] = 0u + 0u; func_08930208(c, ram); }
    c->r[2] = 0x08a80000u;
    c->r[2] = mem_r8(ram, c->r[2] + 0x00002664u);
    c->r[2] = c->r[2] + 0x00000478u;
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[5] = mem_r32(ram, c->r[30] + 0x0000000cu);
    { c->r[31] = 0x089002d8u; c->r[6] = 0u + 0x00000001u; func_0893009c(c, ram); }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[5] = 0x00700000u;
    { c->r[31] = 0x089002e8u; c->r[6] = 0u + 0x00000002u; func_08930208(c, ram); }
    c->r[2] = 0x08a80000u;
    c->r[2] = mem_r8(ram, c->r[2] + 0x00002664u);
    { c->r[31] = 0x089002f8u; c->r[4] = c->r[2] + 0u; func_0896ed64(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    { int _c = ((s32)c->r[2] <= 0); if (_c) goto L_08900330; }
    c->r[4] = 0x08aa0000u;
    c->r[4] = c->r[4] + 0xfffff480u;
    c->r[5] = 0x08a40000u;
    c->r[5] = c->r[5] + 0x00006450u;
    c->r[6] = 0x08a80000u;
    c->r[6] = mem_r32(ram, c->r[6] + 0x00002660u);
    { c->r[31] = 0x08900328u; c->r[7] = mem_r32(ram, c->r[30] + 0x00000010u); func_08a1ad34(c, ram); }
    { goto L_0890034c; }
L_08900330:
    c->r[4] = 0x08aa0000u;
    c->r[4] = c->r[4] + 0xfffff480u;
    c->r[5] = 0x08a40000u;
    c->r[5] = c->r[5] + 0x00006458u;
    c->r[6] = 0x08a80000u;
    { c->r[31] = 0x0890034cu; c->r[6] = mem_r32(ram, c->r[6] + 0x00002660u); func_08a1ad34(c, ram); }
L_0890034c:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[5] = 0x00020000u;
    { c->r[31] = 0x0890035cu; c->r[6] = 0u + 0x00000003u; func_08930178(c, ram); }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[5] = 0x08aa0000u;
    c->r[5] = c->r[5] + 0xfffff480u;
    { c->r[31] = 0x08900370u; c->r[6] = 0u + 0x00000003u; func_0893009c(c, ram); }
L_08900370:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000024u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000020u);
    { c->r[29] = c->r[29] + 0x00000030u; return; }
    return; /* fell out of func_08900234 */
}

/* func_08902cf4  0x08902cf4..0x08902e18  292 bytes, source=fde */
void func_08902cf4(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08902cf4u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x08902d14u; c->r[4] = c->r[4] + 0x00000330u; func_089d9cec(c, ram); }
    c->r[2] = c->r[2] + 0x00001000u;
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000df4u;
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x08902d2cu; c->r[6] = 0u + 0x000019e8u; func_08a19db8(c, ram); }
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x08902d38u; c->r[4] = c->r[4] + 0x00000330u; func_089d9c58(c, ram); }
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00002e74u;
    { c->r[31] = 0x08902d48u; c->r[5] = c->r[2] + 0u; func_08a1af70(c, ram); }
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00002e84u;
    c->r[5] = 0x08a80000u;
    c->r[5] = c->r[5] + 0x00000e00u;
    { c->r[31] = 0x08902d60u; c->r[6] = 0u + 0x00000008u; func_08a19db8(c, ram); }
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00002e8cu;
    c->r[5] = 0x08a80000u;
    c->r[5] = c->r[5] + 0x00000e08u;
    { c->r[31] = 0x08902d78u; c->r[6] = 0u + 0x00000014u; func_08a19db8(c, ram); }
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00002ea0u;
    c->r[5] = 0x08a80000u;
    c->r[5] = c->r[5] + 0x00000e1cu;
    { c->r[31] = 0x08902d90u; c->r[6] = 0u + 0x0000000cu; func_08a19db8(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_08902de0; }
    c->r[3] = 0x08a80000u;
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[3] + 0x00000e29u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 5;
    c->r[2] = 0x08a80000u;
    c->r[2] = c->r[2] + 0x000026bcu;
    c->r[2] = c->r[3] + c->r[2];
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[2]);
    c->r[2] = 0x08a80000u;
    c->r[2] = c->r[2] + 0x00000cccu;
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000004u);
    { c->r[31] = 0x08902de0u; c->r[6] = 0u + 0x00000060u; func_08a19db8(c, ram); }
L_08902de0:
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x08902decu; c->r[4] = c->r[4] + 0xffffc810u; func_089f8bf8(c, ram); }
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x08902df8u; c->r[4] = c->r[4] + 0xffffc930u; func_089f7798(c, ram); }
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x08902e04u; c->r[4] = c->r[4] + 0xffffc930u; func_089f7724(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_08902cf4 */
}

/* func_089057b8  0x089057b8..0x08905a80  712 bytes, source=sweep */
void func_089057b8(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089057b8u);
    c->r[29] = c->r[29] + 0xffffffd0u;
    mem_w32(ram, c->r[29] + 0x00000024u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000020u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[2] = c->r[2] & 0x0001u;
    c->r[2] = c->r[2] & 0x00ffu;
    { int _c = (c->r[2] == 0u); if (_c) goto L_089057ec; }
    { goto L_08905a6c; }
L_089057ec:
    c->r[4] = 0x08aa0000u;
    c->r[4] = c->r[4] + 0xfffff540u;
    { c->r[31] = 0x089057fcu; c->r[5] = 0u + 0x0000000cu; func_0880f2cc(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[3];
    c->r[2] = c->r[2] << 2;
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x08905820u; c->r[5] = 0u + 0x00000010u; func_0881a1d4(c, ram); }
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]);
    mem_w32(ram, c->r[30] + 0x00000014u, 0u);
L_08905830:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = ((s32)c->r[2] < (s32)c->r[3]) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_0890584c; }
    { goto L_08905960; }
L_0890584c:
    c->r[4] = 0x08aa0000u;
    c->r[4] = c->r[4] + 0xfffff540u;
    c->r[5] = 0u + 0x0000000cu;
    { c->r[31] = 0x08905860u; c->r[6] = mem_r32(ram, c->r[30] + 0x00000014u); func_0880ef80(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[2]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000000u);
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    c->r[3] = f2u(c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r16(ram, c->r[2] + 0x0000000cu);
    c->r[2] = c->r[3] - c->r[2];
    mem_w16(ram, c->r[4] + 0x00000004u, c->r[2]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000004u);
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    c->r[3] = f2u(c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r16(ram, c->r[2] + 0x0000000eu);
    c->r[2] = c->r[3] - c->r[2];
    mem_w16(ram, c->r[4] + 0x00000006u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r16(ram, c->r[2] + 0x00000008u);
    mem_w16(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r16(ram, c->r[2] + 0x0000000au);
    mem_w16(ram, c->r[3] + 0x00000002u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[4] = c->r[2] + 0x0000000au;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000020u);
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    c->r[3] = f2u(c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r16(ram, c->r[2] + 0x0000000cu);
    c->r[2] = c->r[3] - c->r[2];
    mem_w16(ram, c->r[4] + 0x00000004u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[4] = c->r[2] + 0x0000000au;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000024u);
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    c->r[3] = f2u(c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r16(ram, c->r[2] + 0x0000000eu);
    c->r[2] = c->r[3] - c->r[2];
    mem_w16(ram, c->r[4] + 0x00000006u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[3] = c->r[2] + 0x0000000au;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r16(ram, c->r[2] + 0x00000028u);
    mem_w16(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[3] = c->r[2] + 0x0000000au;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r16(ram, c->r[2] + 0x0000002au);
    mem_w16(ram, c->r[3] + 0x00000002u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = c->r[2] + 0x00000014u;
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]); goto L_08905830; }
L_08905960:
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000700u);
    c->r[2] = 0u + 0x000002e8u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[4] = c->lo;
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000704u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 5;
    c->r[2] = c->r[2] - c->r[3];
    c->r[2] = c->r[2] << 3;
    c->r[3] = c->r[4] + c->r[2];
    c->r[2] = 0x08b90000u;
    c->r[2] = c->r[2] + 0x00000cf0u;
    c->r[4] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] >> 24;
    c->r[2] = c->r[2] & 0x000fu;
    c->r[3] = c->r[2] << 16;
    c->r[2] = 0x10000000u;
    c->r[2] = c->r[3] | c->r[2];
    { c->r[31] = 0x089059bcu; c->r[5] = c->r[2] + 0u; func_089207f8(c, ram); }
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000700u);
    c->r[2] = 0u + 0x000002e8u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[4] = c->lo;
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000704u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 5;
    c->r[2] = c->r[2] - c->r[3];
    c->r[2] = c->r[2] << 3;
    c->r[3] = c->r[4] + c->r[2];
    c->r[2] = 0x08b90000u;
    c->r[2] = c->r[2] + 0x00000cf0u;
    c->r[4] = c->r[3] + c->r[2];
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0x00ff0000u;
    c->r[2] = c->r[2] | 0xffffu;
    c->r[3] = c->r[3] & c->r[2];
    c->r[2] = 0x01000000u;
    c->r[2] = c->r[3] | c->r[2];
    { c->r[31] = 0x08905a18u; c->r[5] = c->r[2] + 0u; func_089207f8(c, ram); }
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000700u);
    c->r[2] = 0u + 0x000002e8u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[4] = c->lo;
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000704u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 5;
    c->r[2] = c->r[2] - c->r[3];
    c->r[2] = c->r[2] << 3;
    c->r[3] = c->r[4] + c->r[2];
    c->r[2] = 0x08b90000u;
    c->r[2] = c->r[2] + 0x00000cf0u;
    c->r[4] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[3] = c->r[2] << 1;
    c->r[2] = 0x04060000u;
    c->r[2] = c->r[3] | c->r[2];
    { c->r[31] = 0x08905a6cu; c->r[5] = c->r[2] + 0u; func_089207f8(c, ram); }
L_08905a6c:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000024u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000020u);
    { c->r[29] = c->r[29] + 0x00000030u; return; }
    return; /* fell out of func_089057b8 */
}

/* func_0890f390  0x0890f390..0x0890f424  148 bytes, source=fde */
void func_0890f390(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0890f390u);
    c->r[29] = c->r[29] + 0xffffffc0u;
    mem_w32(ram, c->r[29] + 0x00000034u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000030u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[2] = c->r[2] & 0x0001u;
    c->r[2] = c->r[2] & 0x00ffu;
    { int _c = (c->r[2] == 0u); if (_c) goto L_0890f3c4; }
    { goto L_0890f410; }
L_0890f3c4:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r16(ram, c->r[2] + 0x0000000cu);
    c->r[2] = 0u - c->r[2];
    mem_w16(ram, c->r[30] + 0x00000020u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r16(ram, c->r[2] + 0x0000000eu);
    c->r[2] = 0u - c->r[2];
    mem_w16(ram, c->r[30] + 0x00000022u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[9] = c->r[30] + 0x00000010u;
    c->r[4] = 0u + 0x00000018u;
    c->r[5] = mem_r32(ram, c->r[2] + 0x00000004u);
    c->r[6] = mem_r32(ram, c->r[3] + 0x00000008u);
    c->r[7] = 0u + 0u;
    { c->r[31] = 0x0890f410u; c->r[8] = 0u + 0u; func_0890438c(c, ram); }
L_0890f410:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000034u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000030u);
    { c->r[29] = c->r[29] + 0x00000040u; return; }
    return; /* fell out of func_0890f390 */
}

/* func_0891bd3c  0x0891bd3c..0x0891c300  1476 bytes, source=fde */
void func_0891bd3c(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0891bd3cu);
    c->r[29] = c->r[29] + 0xfffffee0u;
    mem_w32(ram, c->r[29] + 0x00000118u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000114u, c->r[30]);
    mem_w32(ram, c->r[29] + 0x00000110u, c->r[16]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x0891bd60u; c->r[4] = c->r[4] + 0x00000af4u; func_0880d294(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = 0u + 0x00000002u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_0891c2e8; }
    { c->r[31] = 0x0891bd78u; func_089794c4(c, ram); }
    c->r[3] = mem_r8(ram, c->r[2] + 0x00000001u);
    c->r[2] = 0u + 0x00000001u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_0891c2e8; }
    mem_w16(ram, c->r[30] + 0x00000010u, 0u);
    mem_w16(ram, c->r[30] + 0x00000012u, 0u);
    mem_w16(ram, c->r[30] + 0x00000014u, 0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000032u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 5;
    c->r[2] = c->r[2] - c->r[3];
    c->r[2] = c->r[2] + 0x00000012u;
    { c->r[31] = 0x0891bdb4u; mem_w16(ram, c->r[30] + 0x00000016u, c->r[2]); func_0896dc4c(c, ram); }
    { c->r[31] = 0x0891bdbcu; mem_w32(ram, c->r[30] + 0x000000f0u, c->r[2]); func_0896dc4c(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = 0u + 0x00000001u;
    c->r[2] = c->r[2] - c->r[3];
    mem_w32(ram, c->r[30] + 0x000000f4u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000f0u);
    mem_w32(ram, c->r[30] + 0x000000e0u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000f4u);
    mem_w32(ram, c->r[30] + 0x000000e4u, c->r[2]);
    { c->r[31] = 0x0891bde4u; c->r[4] = mem_r32(ram, c->r[30] + 0x000000e0u); func_08998c08(c, ram); }
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    mem_w32(ram, c->r[30] + 0x000000f0u, c->r[2]);
    { c->r[31] = 0x0891bdf4u; c->r[4] = mem_r32(ram, c->r[30] + 0x000000e4u); func_08998c08(c, ram); }
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    { c->r[31] = 0x0891be00u; mem_w32(ram, c->r[30] + 0x000000f4u, c->r[2]); func_089794c4(c, ram); }
    c->r[3] = mem_r8(ram, c->r[2] + 0x00000003u);
    c->r[2] = 0u + 0x00000005u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_0891be4c; }
    c->r[2] = c->r[30] + 0x00000060u;
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0x08a40000u;
    c->r[5] = c->r[5] + 0x0000682cu;
    { c->r[31] = 0x0891be28u; c->r[6] = mem_r32(ram, c->r[30] + 0x000000f0u); func_08a1ad34(c, ram); }
    c->r[2] = c->r[30] + 0x00000060u;
    c->r[2] = c->r[2] + 0x00000020u;
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0x08a40000u;
    c->r[5] = c->r[5] + 0x0000682cu;
    { c->r[31] = 0x0891be44u; c->r[6] = mem_r32(ram, c->r[30] + 0x000000f4u); func_08a1ad34(c, ram); }
    { goto L_0891bf9c; }
L_0891be4c:
    { c->r[31] = 0x0891be54u; func_089795dc(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = c->r[30] + 0x00000060u;
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0x08a40000u;
    c->r[5] = c->r[5] + 0x00006b28u;
    c->r[6] = mem_r32(ram, c->r[30] + 0x000000f0u);
    { c->r[31] = 0x0891be74u; c->r[7] = c->r[3] + 0u; func_08a1ad34(c, ram); }
    { c->r[31] = 0x0891be7cu; func_089795dc(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = c->r[30] + 0x00000060u;
    c->r[2] = c->r[2] + 0x00000020u;
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0x08a40000u;
    c->r[5] = c->r[5] + 0x00006b28u;
    c->r[6] = mem_r32(ram, c->r[30] + 0x000000f4u);
    { c->r[31] = 0x0891bea0u; c->r[7] = c->r[3] + 0u; func_08a1ad34(c, ram); }
    { c->r[31] = 0x0891bea8u; func_08998788(c, ram); }
    { int _c = (c->r[2] != 0u); if (_c) goto L_0891bf9c; }
    { c->r[31] = 0x0891beb8u; func_08998dcc(c, ram); }
    c->r[2] = c->r[2] & 0x0020u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_0891bf9c; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x0000002fu);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000005u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_0891bf9c; }
    { c->r[31] = 0x0891bee0u; func_08998dcc(c, ram); }
    c->r[2] = c->r[2] & 0x0001u;
    c->r[2] = c->r[2] & 0x00ffu;
    { int _c = (c->r[2] == 0u); if (_c) goto L_0891bf3c; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000e0u);
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[30];
    c->r[16] = c->r[2] + 0x00000010u;
    c->r[3] = c->r[30] + 0x00000060u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000e0u);
    c->r[2] = c->r[2] << 5;
    c->r[2] = c->r[3] + c->r[2];
    c->r[4] = 0u + 0x00000014u;
    c->r[5] = 0u + 0u;
    { c->r[31] = 0x0891bf20u; c->r[6] = c->r[2] + 0u; func_089042ac(c, ram); }
    c->r[2] = c->r[2] + 0x00000001u;
    mem_w16(ram, c->r[16] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000e0u);
    c->r[2] = c->r[2] << 5;
    c->r[2] = c->r[2] + c->r[30];
    c->r[2] = c->r[2] + 0x00000060u;
    mem_w8(ram, c->r[2] + 0x00000000u, 0u);
L_0891bf3c:
    { c->r[31] = 0x0891bf44u; func_08998dcc(c, ram); }
    c->r[2] = c->r[2] & 0x0002u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_0891bf9c; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000e4u);
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[30];
    c->r[16] = c->r[2] + 0x00000010u;
    c->r[3] = c->r[30] + 0x00000060u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000e4u);
    c->r[2] = c->r[2] << 5;
    c->r[2] = c->r[3] + c->r[2];
    c->r[4] = 0u + 0x00000014u;
    c->r[5] = 0u + 0u;
    { c->r[31] = 0x0891bf80u; c->r[6] = c->r[2] + 0u; func_089042ac(c, ram); }
    c->r[2] = c->r[2] + 0x00000001u;
    mem_w16(ram, c->r[16] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000e4u);
    c->r[2] = c->r[2] << 5;
    c->r[2] = c->r[2] + c->r[30];
    c->r[2] = c->r[2] + 0x00000060u;
    mem_w8(ram, c->r[2] + 0x00000000u, 0u);
L_0891bf9c:
    { c->r[31] = 0x0891bfa4u; func_089a1054(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = 0u + 0xffffffffu;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_0891c20c; }
    { c->r[31] = 0x0891bfbcu; c->r[4] = mem_r32(ram, c->r[30] + 0x000000e0u); func_089a10e8(c, ram); }
    { c->r[31] = 0x0891bfc4u; c->r[16] = c->r[2] + 0u; func_089a1054(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = c->r[30] + 0x000000a0u;
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0x08a40000u;
    c->r[5] = c->r[5] + 0x00006830u;
    c->r[6] = c->r[16] + 0u;
    { c->r[31] = 0x0891bfe4u; c->r[7] = c->r[3] + 0u; func_08a1ad34(c, ram); }
    { c->r[31] = 0x0891bfecu; c->r[4] = mem_r32(ram, c->r[30] + 0x000000e4u); func_089a10e8(c, ram); }
    { c->r[31] = 0x0891bff4u; c->r[16] = c->r[2] + 0u; func_089a1054(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = c->r[30] + 0x000000a0u;
    c->r[2] = c->r[2] + 0x00000020u;
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0x08a40000u;
    c->r[5] = c->r[5] + 0x00006830u;
    c->r[6] = c->r[16] + 0u;
    { c->r[31] = 0x0891c018u; c->r[7] = c->r[3] + 0u; func_08a1ad34(c, ram); }
    { c->r[31] = 0x0891c020u; func_08998788(c, ram); }
    { int _c = (c->r[2] != 0u); if (_c) goto L_0891c0a8; }
    { c->r[31] = 0x0891c030u; func_08998dcc(c, ram); }
    c->r[2] = c->r[2] & 0x0040u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_0891c0a8; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x0000002fu);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000005u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_0891c1b8; }
    { c->r[31] = 0x0891c058u; func_08998dcc(c, ram); }
    c->r[2] = c->r[2] & 0x0001u;
    c->r[2] = c->r[2] & 0x00ffu;
    { int _c = (c->r[2] == 0u); if (_c) goto L_0891c07c; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000e0u);
    c->r[2] = c->r[2] << 5;
    c->r[2] = c->r[2] + c->r[30];
    c->r[2] = c->r[2] + 0x000000a0u;
    mem_w8(ram, c->r[2] + 0x00000000u, 0u);
L_0891c07c:
    { c->r[31] = 0x0891c084u; func_08998dcc(c, ram); }
    c->r[2] = c->r[2] & 0x0002u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_0891c1b8; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000e4u);
    c->r[2] = c->r[2] << 5;
    c->r[2] = c->r[2] + c->r[30];
    c->r[2] = c->r[2] + 0x000000a0u;
    { mem_w8(ram, c->r[2] + 0x00000000u, 0u); goto L_0891c1b8; }
L_0891c0a8:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r8(ram, c->r[2] + 0x0000002fu);
    c->r[2] = c->r[2] & 0x0003u;
    c->r[2] = ((s32)c->r[2] < (s32)0x00000003u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_0891c1b8; }
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x0891c0ccu; c->r[4] = c->r[4] + 0x00000af4u; func_0880d380(c, ram); }
    { int _c = (c->r[2] != 0u); if (_c) goto L_0891c130; }
    c->r[2] = 0x08a90000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0xffffbbdcu);
    c->r[3] = 0x20000000u;
    c->r[2] = c->r[2] & c->r[3];
    { int _c = (c->r[2] == 0u); if (_c) goto L_0891c100; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000e0u);
    c->r[2] = c->r[2] << 5;
    c->r[2] = c->r[2] + c->r[30];
    c->r[2] = c->r[2] + 0x000000a0u;
    mem_w8(ram, c->r[2] + 0x00000000u, 0u);
L_0891c100:
    c->r[2] = 0x08a90000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0xffffbbdcu);
    c->r[3] = 0x10000000u;
    c->r[2] = c->r[2] & c->r[3];
    { int _c = (c->r[2] == 0u); if (_c) goto L_0891c1b8; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000e4u);
    c->r[2] = c->r[2] << 5;
    c->r[2] = c->r[2] + c->r[30];
    c->r[2] = c->r[2] + 0x000000a0u;
    { mem_w8(ram, c->r[2] + 0x00000000u, 0u); goto L_0891c1b8; }
L_0891c130:
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x0891c13cu; c->r[4] = c->r[4] + 0x00000af4u; func_0880d380(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = 0u + 0x00000006u;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_0891c170; }
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x0891c158u; c->r[4] = c->r[4] + 0x00000af4u; func_0880d380(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = 0u + 0x00000007u;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_0891c170; }
    { goto L_0891c1b8; }
L_0891c170:
    { c->r[31] = 0x0891c178u; c->r[4] = 0u + 0u; func_089a646c(c, ram); }
    { int _c = (c->r[2] == 0u); if (_c) goto L_0891c194; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000e0u);
    c->r[2] = c->r[2] << 5;
    c->r[2] = c->r[2] + c->r[30];
    c->r[2] = c->r[2] + 0x000000a0u;
    mem_w8(ram, c->r[2] + 0x00000000u, 0u);
L_0891c194:
    { c->r[31] = 0x0891c19cu; c->r[4] = 0u + 0x00000001u; func_089a646c(c, ram); }
    { int _c = (c->r[2] == 0u); if (_c) goto L_0891c1b8; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000e4u);
    c->r[2] = c->r[2] << 5;
    c->r[2] = c->r[2] + c->r[30];
    c->r[2] = c->r[2] + 0x000000a0u;
    mem_w8(ram, c->r[2] + 0x00000000u, 0u);
L_0891c1b8:
    c->r[2] = c->r[30] + 0x00000020u;
    c->r[3] = c->r[30] + 0x00000060u;
    c->r[7] = c->r[30] + 0x000000a0u;
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0x08a40000u;
    c->r[5] = c->r[5] + 0x00006838u;
    { c->r[31] = 0x0891c1d8u; c->r[6] = c->r[3] + 0u; func_08a1ad34(c, ram); }
    c->r[2] = c->r[30] + 0x00000020u;
    c->r[3] = c->r[2] + 0x00000020u;
    c->r[2] = c->r[30] + 0x00000060u;
    c->r[6] = c->r[2] + 0x00000020u;
    c->r[2] = c->r[30] + 0x000000a0u;
    c->r[2] = c->r[2] + 0x00000020u;
    c->r[4] = c->r[3] + 0u;
    c->r[5] = 0x08a40000u;
    c->r[5] = c->r[5] + 0x00006838u;
    { c->r[31] = 0x0891c204u; c->r[7] = c->r[2] + 0u; func_08a1ad34(c, ram); }
    { goto L_0891c24c; }
L_0891c20c:
    c->r[2] = c->r[30] + 0x00000020u;
    c->r[3] = c->r[30] + 0x00000060u;
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0x08a40000u;
    c->r[5] = c->r[5] + 0x00006b30u;
    { c->r[31] = 0x0891c228u; c->r[6] = c->r[3] + 0u; func_08a1ad34(c, ram); }
    c->r[2] = c->r[30] + 0x00000020u;
    c->r[3] = c->r[2] + 0x00000020u;
    c->r[2] = c->r[30] + 0x00000060u;
    c->r[2] = c->r[2] + 0x00000020u;
    c->r[4] = c->r[3] + 0u;
    c->r[5] = 0x08a40000u;
    c->r[5] = c->r[5] + 0x00006b30u;
    { c->r[31] = 0x0891c24cu; c->r[6] = c->r[2] + 0u; func_08a1ad34(c, ram); }
L_0891c24c:
    c->r[2] = 0x08a40000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00006b20u);
    mem_w32(ram, c->r[30] + 0x00000100u, c->r[2]);
    c->r[2] = 0x08a40000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00006b24u);
    { c->r[31] = 0x0891c268u; mem_w32(ram, c->r[30] + 0x00000104u, c->r[2]); func_0896dc4c(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = 0u + 0x00000001u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_0891c290; }
    c->r[2] = 0x7f7f0000u;
    c->r[2] = c->r[2] | 0x1000u;
    mem_w32(ram, c->r[30] + 0x00000100u, c->r[2]);
    c->r[2] = 0x7f170000u;
    c->r[2] = c->r[2] | 0x177fu;
    mem_w32(ram, c->r[30] + 0x00000104u, c->r[2]);
L_0891c290:
    c->r[2] = c->r[30] + 0x00000020u;
    c->r[3] = c->r[30] + 0x00000010u;
    c->r[4] = 0u + 0x00000014u;
    c->r[5] = c->r[2] + 0u;
    c->r[6] = mem_r32(ram, c->r[30] + 0x00000100u);
    c->r[7] = 0u + 0u;
    c->r[8] = 0u + 0u;
    c->r[9] = c->r[3] + 0u;
    { c->r[31] = 0x0891c2b8u; c->r[10] = 0u + 0u; func_08903f2c(c, ram); }
    c->r[2] = c->r[30] + 0x00000020u;
    c->r[3] = c->r[2] + 0x00000020u;
    c->r[2] = c->r[30] + 0x00000010u;
    c->r[2] = c->r[2] + 0x00000004u;
    c->r[4] = 0u + 0x00000014u;
    c->r[5] = c->r[3] + 0u;
    c->r[6] = mem_r32(ram, c->r[30] + 0x00000104u);
    c->r[7] = 0u + 0u;
    c->r[8] = 0u + 0u;
    c->r[9] = c->r[2] + 0u;
    { c->r[31] = 0x0891c2e8u; c->r[10] = 0u + 0u; func_08903f2c(c, ram); }
L_0891c2e8:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000118u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000114u);
    c->r[16] = mem_r32(ram, c->r[29] + 0x00000110u);
    { c->r[29] = c->r[29] + 0x00000120u; return; }
    return; /* fell out of func_0891bd3c */
}

/* func_08920e58  0x08920e58..0x08920f5c  260 bytes, source=sweep */
void func_08920e58(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08920e58u);
    c->r[29] = c->r[29] + 0xffffffc0u;
    mem_w32(ram, c->r[29] + 0x00000034u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000030u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[6]);
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[7]);
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[8]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = (u32)((s32)c->r[3] >> 31);
    c->r[2] = c->r[2] >> 31;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = (u32)((s32)c->r[2] >> 1);
    c->f[0] = u2f(c->r[2]);
    c->f[0] = (f32)(s32)f2u(c->f[0]);
    mem_wf32(ram, c->r[30] + 0x00000014u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[3] = 0u - c->r[2];
    c->r[2] = (u32)((s32)c->r[3] >> 31);
    c->r[2] = c->r[2] >> 31;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = (u32)((s32)c->r[2] >> 1);
    c->f[0] = u2f(c->r[2]);
    c->f[0] = (f32)(s32)f2u(c->f[0]);
    mem_wf32(ram, c->r[30] + 0x00000018u, c->f[0]);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000004u);
    c->f[0] = (f32)(s32)f2u(c->f[0]);
    mem_wf32(ram, c->r[30] + 0x0000001cu, c->f[0]);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000008u);
    c->f[0] = (f32)(s32)f2u(c->f[0]);
    mem_wf32(ram, c->r[30] + 0x00000020u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[3] = c->r[2] >> 8;
    c->r[2] = 0x42000000u;
    c->r[2] = c->r[3] | c->r[2];
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x08920ef4u; c->r[5] = c->r[2] + 0u; func_089207f8(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[3] = c->r[2] >> 8;
    c->r[2] = 0x43000000u;
    c->r[2] = c->r[3] | c->r[2];
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x08920f10u; c->r[5] = c->r[2] + 0u; func_089207f8(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[3] = c->r[2] >> 8;
    c->r[2] = 0x45000000u;
    c->r[2] = c->r[3] | c->r[2];
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x08920f2cu; c->r[5] = c->r[2] + 0u; func_089207f8(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[3] = c->r[2] >> 8;
    c->r[2] = 0x46000000u;
    c->r[2] = c->r[3] | c->r[2];
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x08920f48u; c->r[5] = c->r[2] + 0u; func_089207f8(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000034u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000030u);
    { c->r[29] = c->r[29] + 0x00000040u; return; }
    return; /* fell out of func_08920e58 */
}

/* func_08921a68  0x08921a68..0x08921dd4  876 bytes, source=sweep */
void func_08921a68(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08921a68u);
    c->r[29] = c->r[29] + 0xffffff80u;
    mem_w32(ram, c->r[29] + 0x00000064u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000060u, c->r[30]);
    mem_wf32(ram, c->r[29] + 0x00000070u, c->f[20]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[6]);
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[7]);
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[8]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[5] = mem_r32(ram, c->r[30] + 0x0000000cu);
    { c->r[31] = 0x08921aa0u; c->r[6] = mem_r32(ram, c->r[30] + 0x00000010u); func_0892254c(c, ram); }
    mem_wf32(ram, c->r[30] + 0x00000014u, c->f[0]);
    c->r[2] = c->r[30] + 0x00000020u;
    { c->r[31] = 0x08921ab0u; c->r[4] = c->r[2] + 0u; func_08808260(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->f[12] = mem_rf32(ram, c->r[2] + 0x00000030u);
    c->f[13] = mem_rf32(ram, c->r[3] + 0x00000030u);
    { c->r[31] = 0x08921ac8u; c->f[14] = mem_rf32(ram, c->r[30] + 0x00000014u); func_089225d4(c, ram); }
    c->f[20] = -c->f[0];
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->f[12] = mem_rf32(ram, c->r[2] + 0x00000034u);
    c->f[13] = mem_rf32(ram, c->r[3] + 0x00000034u);
    { c->r[31] = 0x08921ae4u; c->f[14] = mem_rf32(ram, c->r[30] + 0x00000014u); func_089225d4(c, ram); }
    c->f[0] = -c->f[0];
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->f[12] = c->f[20];
    c->f[13] = c->f[0];
    c->f[14] = u2f(0u);
    { c->r[31] = 0x08921b00u; func_088a00e0(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000010u);
    c->r[2] = c->r[2] & 0x0002u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_08921b44; }
    c->r[2] = c->r[30] + 0x00000020u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00006d68u);
    c->r[4] = c->r[2] + 0u;
    c->f[12] = mem_rf32(ram, c->r[3] + 0x00000014u);
    c->f[13] = mem_rf32(ram, c->r[5] + 0x00000018u);
    { c->r[31] = 0x08921b3cu; c->f[14] = c->f[0]; func_0881a114(c, ram); }
    { goto L_08921be0; }
L_08921b44:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r8(ram, c->r[2] + 0x0000003cu);
    c->r[2] = c->r[2] & 0x0004u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_08921bb8; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->f[12] = mem_rf32(ram, c->r[2] + 0x00000018u);
    c->f[13] = mem_rf32(ram, c->r[3] + 0x00000018u);
    { c->r[31] = 0x08921b70u; c->f[14] = mem_rf32(ram, c->r[30] + 0x00000014u); func_089225d4(c, ram); }
    c->f[20] = c->f[0];
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->f[12] = mem_rf32(ram, c->r[2] + 0x0000001cu);
    c->f[13] = mem_rf32(ram, c->r[3] + 0x0000001cu);
    { c->r[31] = 0x08921b8cu; c->f[14] = mem_rf32(ram, c->r[30] + 0x00000014u); func_089225d4(c, ram); }
    c->f[1] = c->f[0];
    c->r[2] = c->r[30] + 0x00000020u;
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00006d68u);
    c->r[4] = c->r[2] + 0u;
    c->f[12] = c->f[20];
    c->f[13] = c->f[1];
    { c->r[31] = 0x08921bb0u; c->f[14] = c->f[0]; func_0881a114(c, ram); }
    { goto L_08921be0; }
L_08921bb8:
    c->r[2] = c->r[30] + 0x00000020u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[5] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00006d68u);
    c->r[4] = c->r[2] + 0u;
    c->f[12] = mem_rf32(ram, c->r[3] + 0x00000018u);
    c->f[13] = mem_rf32(ram, c->r[5] + 0x0000001cu);
    { c->r[31] = 0x08921be0u; c->f[14] = c->f[0]; func_0881a114(c, ram); }
L_08921be0:
    c->r[2] = c->r[30] + 0x00000020u;
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000004u);
    { c->r[31] = 0x08921bf4u; c->r[6] = c->r[2] + 0u; func_0884c6d4(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000010u);
    c->r[2] = c->r[2] & 0x0004u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_08921c24; }
    c->r[2] = c->r[30] + 0x00000020u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x08921c1cu; c->f[12] = mem_rf32(ram, c->r[3] + 0x0000001cu); func_0884c8f0(c, ram); }
    { goto L_08921c9c; }
L_08921c24:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r8(ram, c->r[2] + 0x0000003cu);
    c->r[2] = c->r[2] & 0x0008u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_08921c78; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->f[12] = mem_rf32(ram, c->r[2] + 0x00000038u);
    c->f[13] = mem_rf32(ram, c->r[3] + 0x00000038u);
    { c->r[31] = 0x08921c50u; c->f[14] = mem_rf32(ram, c->r[30] + 0x00000014u); func_089225d4(c, ram); }
    c->f[1] = c->f[0];
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00006d6cu);
    c->f[0] = c->f[1] * c->f[0];
    c->r[2] = c->r[30] + 0x00000020u;
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x08921c70u; c->f[12] = c->f[0]; func_0884c8f0(c, ram); }
    { goto L_08921c9c; }
L_08921c78:
    c->r[3] = c->r[30] + 0x00000020u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000038u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00006d6cu);
    c->f[0] = c->f[1] * c->f[0];
    c->r[4] = c->r[3] + 0u;
    { c->r[31] = 0x08921c9cu; c->f[12] = c->f[0]; func_0884c8f0(c, ram); }
L_08921c9c:
    c->r[2] = c->r[30] + 0x00000020u;
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000004u);
    { c->r[31] = 0x08921cb0u; c->r[6] = c->r[2] + 0u; func_0884c6d4(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->f[12] = mem_rf32(ram, c->r[2] + 0x00000030u);
    c->f[13] = mem_rf32(ram, c->r[3] + 0x00000030u);
    { c->r[31] = 0x08921cc8u; c->f[14] = mem_rf32(ram, c->r[30] + 0x00000014u); func_089225d4(c, ram); }
    c->f[20] = c->f[0];
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->f[12] = mem_rf32(ram, c->r[2] + 0x00000034u);
    c->f[13] = mem_rf32(ram, c->r[3] + 0x00000034u);
    { c->r[31] = 0x08921ce4u; c->f[14] = mem_rf32(ram, c->r[30] + 0x00000014u); func_089225d4(c, ram); }
    c->r[2] = c->r[30] + 0x00000020u;
    c->r[4] = c->r[2] + 0u;
    c->f[12] = c->f[20];
    c->f[13] = c->f[0];
    c->f[14] = u2f(0u);
    { c->r[31] = 0x08921d00u; func_088a00e0(c, ram); }
    c->r[2] = c->r[30] + 0x00000020u;
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000004u);
    { c->r[31] = 0x08921d14u; c->r[6] = c->r[2] + 0u; func_0884c6d4(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r8(ram, c->r[2] + 0x0000003cu);
    c->r[2] = c->r[2] & 0x0001u;
    c->r[2] = c->r[2] & 0x00ffu;
    { int _c = (c->r[2] == 0u); if (_c) goto L_08921d84; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->f[12] = mem_rf32(ram, c->r[2] + 0x00000010u);
    c->f[13] = mem_rf32(ram, c->r[3] + 0x00000010u);
    { c->r[31] = 0x08921d44u; c->f[14] = mem_rf32(ram, c->r[30] + 0x00000014u); func_089225d4(c, ram); }
    c->f[20] = c->f[0];
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->f[12] = mem_rf32(ram, c->r[2] + 0x00000014u);
    c->f[13] = mem_rf32(ram, c->r[3] + 0x00000014u);
    { c->r[31] = 0x08921d60u; c->f[14] = mem_rf32(ram, c->r[30] + 0x00000014u); func_089225d4(c, ram); }
    c->r[2] = c->r[30] + 0x00000020u;
    c->r[4] = c->r[2] + 0u;
    c->f[12] = c->f[20];
    c->f[13] = c->f[0];
    c->f[14] = u2f(0u);
    { c->r[31] = 0x08921d7cu; func_088a00e0(c, ram); }
    { goto L_08921da8; }
L_08921d84:
    c->r[2] = c->r[30] + 0x00000020u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[5] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[4] = c->r[2] + 0u;
    c->f[12] = mem_rf32(ram, c->r[3] + 0x00000010u);
    c->f[13] = mem_rf32(ram, c->r[5] + 0x00000014u);
    c->f[14] = u2f(0u);
    { c->r[31] = 0x08921da8u; func_088a00e0(c, ram); }
L_08921da8:
    c->r[2] = c->r[30] + 0x00000020u;
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000004u);
    { c->r[31] = 0x08921dbcu; c->r[6] = c->r[2] + 0u; func_0884c6d4(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000064u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000060u);
    c->f[20] = mem_rf32(ram, c->r[29] + 0x00000070u);
    { c->r[29] = c->r[29] + 0x00000080u; return; }
    return; /* fell out of func_08921a68 */
}

/* func_089246b8  0x089246b8..0x08924710  88 bytes, source=sweep */
void func_089246b8(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089246b8u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    c->r[2] = 0x08aa0000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0xfffff9c8u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_089246e0; }
    c->r[2] = 0u + 0x00000003u;
    { mem_w32(ram, c->r[30] + 0x00000004u, c->r[2]); goto L_089246fc; }
L_089246e0:
    c->r[2] = 0x08aa0000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0xfffff9c8u);
    c->r[2] = c->r[2] + 0x000000e0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x0000003au);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[2]);
L_089246fc:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_089246b8 */
}

/* func_089261a0  0x089261a0..0x089261e4  68 bytes, source=sweep */
void func_089261a0(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089261a0u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = 0x38000000u;
    c->r[2] = c->r[2] | c->r[3];
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x089261d0u; c->r[5] = c->r[2] + 0u; func_089258bc(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_089261a0 */
}

/* func_08929174  0x08929174..0x08929208  148 bytes, source=fde */
void func_08929174(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08929174u);
    c->r[29] = c->r[29] + 0xffffffd0u;
    mem_w32(ram, c->r[29] + 0x00000024u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000020u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[4] = c->r[5] + 0u;
    c->r[5] = c->r[6] + 0u;
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[7]);
    c->r[2] = c->r[8] + 0u;
    c->r[3] = c->r[9] + 0u;
    mem_w8(ram, c->r[30] + 0x00000004u, c->r[4]);
    mem_w8(ram, c->r[30] + 0x00000005u, c->r[5]);
    mem_w8(ram, c->r[30] + 0x0000000cu, c->r[2]);
    mem_w8(ram, c->r[30] + 0x0000000du, c->r[3]);
    c->r[2] = mem_r8(ram, c->r[30] + 0x00000004u);
    mem_w8(ram, c->r[30] + 0x00000014u, c->r[2]);
    c->r[2] = mem_r8(ram, c->r[30] + 0x00000005u);
    mem_w8(ram, c->r[30] + 0x00000015u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]);
    c->r[2] = mem_r8(ram, c->r[30] + 0x0000000cu);
    mem_w8(ram, c->r[30] + 0x00000016u, c->r[2]);
    c->r[2] = mem_r8(ram, c->r[30] + 0x0000000du);
    mem_w8(ram, c->r[30] + 0x00000017u, c->r[2]);
    c->r[2] = c->r[30] + 0x00000010u;
    c->r[4] = 0u + 0x0000006au;
    c->r[5] = 0u + 0u;
    c->r[6] = 0u + 0u;
    c->r[7] = 0u + 0u;
    c->r[8] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x089291f4u; c->r[9] = c->r[2] + 0u; func_089c6bec(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000024u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000020u);
    { c->r[29] = c->r[29] + 0x00000030u; return; }
    return; /* fell out of func_08929174 */
}

/* func_0892ffa8  0x0892ffa8..0x08930000  88 bytes, source=sweep */
void func_0892ffa8(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0892ffa8u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_0892fff0; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x000000e0u;
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]);
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = ~(0u | c->r[2]);
    c->r[2] = mem_r32(ram, c->r[4] + 0x00000010u);
    c->r[2] = c->r[2] & c->r[3];
    mem_w32(ram, c->r[5] + 0x00000010u, c->r[2]);
L_0892fff0:
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_0892ffa8 */
}

/* func_08932be4  0x08932be4..0x08932c38  84 bytes, source=sweep */
void func_08932be4(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08932be4u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_08932c0c; }
    c->r[2] = 0u + 0xffffffffu;
    { mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]); goto L_08932c24; }
L_08932c0c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x000000e0u;
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x00000022u);
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]);
L_08932c24:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_08932be4 */
}

/* func_08934848  0x08934848..0x089348e8  160 bytes, source=fde */
void func_08934848(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08934848u);
    c->r[29] = c->r[29] + 0xffffffd0u;
    mem_w32(ram, c->r[29] + 0x00000024u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000020u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[5]);
    c->r[2] = 0x08aa0000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0xfffffa94u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_08934878; }
    { goto L_089348d4; }
L_08934878:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_089348c0; }
    { c->r[31] = 0x0893488cu; func_089343a0(c, ram); }
    c->r[2] = 0u + 0x00000001u;
    mem_w32(ram, c->r[29] + 0x00000000u, c->r[2]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[5] = 0u + 0x00000006u;
    c->r[6] = 0u + 0x00000007u;
    c->r[7] = 0u + 0u;
    c->r[8] = 0u + 0x00000096u;
    c->r[9] = 0u + 0x000000f0u;
    c->r[10] = 0u + 0x00000015u;
    { c->r[31] = 0x089348b8u; c->r[11] = 0u + 0x0000005fu; func_08935f8c(c, ram); }
    { goto L_089348d4; }
L_089348c0:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[5] = 0u + 0x00000006u;
    c->r[6] = 0u + 0x00000001u;
    { c->r[31] = 0x089348d4u; c->r[7] = 0u + 0u; func_08935750(c, ram); }
L_089348d4:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000024u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000020u);
    { c->r[29] = c->r[29] + 0x00000030u; return; }
    return; /* fell out of func_08934848 */
}

/* func_0893a64c  0x0893a64c..0x0893a73c  240 bytes, source=sweep */
void func_0893a64c(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0893a64cu);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[6]);
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[7]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000018u);
    c->f[0] = u2f(0u);
    alx_c_cond_s(c, 2, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) == 0u); if (_c) goto L_0893a690; }
    { goto L_0893a6e0; }
L_0893a690:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[7] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[3] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x00000002u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[9] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x00000010u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x00000012u);
    c->r[11] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[4] = 0x08aa0000u;
    c->r[4] = c->r[4] + 0xfffffa98u;
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[6] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[8] = c->r[3] + 0u;
    c->r[10] = c->r[2] + 0u;
    c->f[12] = mem_rf32(ram, c->r[11] + 0x00000014u);
    { c->r[31] = 0x0893a6d8u; c->r[11] = 0u + 0x00000001u; func_0893a274(c, ram); }
    { goto L_0893a728; }
L_0893a6e0:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[7] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[3] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x00000002u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[9] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x00000010u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x00000012u);
    c->r[11] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[4] = 0x08aa0000u;
    c->r[4] = c->r[4] + 0xfffffa98u;
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[6] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[8] = c->r[3] + 0u;
    c->r[10] = c->r[2] + 0u;
    c->f[12] = mem_rf32(ram, c->r[11] + 0x00000014u);
    { c->r[31] = 0x0893a728u; c->r[11] = 0u + 0u; func_0893a274(c, ram); }
L_0893a728:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_0893a64c */
}

/* func_0893c8d4  0x0893c8d4..0x0893c918  68 bytes, source=sweep */
void func_0893c8d4(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0893c8d4u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = 0x25000000u;
    c->r[2] = c->r[2] | c->r[3];
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x0893c904u; c->r[5] = c->r[2] + 0u; func_0893bf80(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_0893c8d4 */
}

/* func_0893dcf8  0x0893dcf8..0x0893dd3c  68 bytes, source=sweep */
void func_0893dcf8(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0893dcf8u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = 0x51000000u;
    c->r[2] = c->r[2] | c->r[3];
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x0893dd28u; c->r[5] = c->r[2] + 0u; func_0893d560(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_0893dcf8 */
}

/* func_0894027c  0x0894027c..0x089402c0  68 bytes, source=sweep */
void func_0894027c(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0894027cu);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = 0x27000000u;
    c->r[2] = c->r[2] | c->r[3];
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x089402acu; c->r[5] = c->r[2] + 0u; func_0893f9e4(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_0894027c */
}

/* func_08945748  0x08945748..0x089457a0  88 bytes, source=fde */
void func_08945748(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08945748u);
    c->r[29] = c->r[29] + 0xffffffd0u;
    mem_w32(ram, c->r[29] + 0x00000024u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000020u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[6]);
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[7]);
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[8]);
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[9]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[6] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[7] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[8] = mem_r32(ram, c->r[30] + 0x00000010u);
    { c->r[31] = 0x0894578cu; c->r[9] = mem_r32(ram, c->r[30] + 0x00000014u); func_08945a98(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000024u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000020u);
    { c->r[29] = c->r[29] + 0x00000030u; return; }
    return; /* fell out of func_08945748 */
}

/* func_08946440  0x08946440..0x08946484  68 bytes, source=sweep */
void func_08946440(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08946440u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = 0x51000000u;
    c->r[2] = c->r[2] | c->r[3];
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x08946470u; c->r[5] = c->r[2] + 0u; func_0894568c(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_08946440 */
}

/* func_0894c068  0x0894c068..0x0894c0ac  68 bytes, source=sweep */
void func_0894c068(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0894c068u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = 0x21000000u;
    c->r[2] = c->r[2] | c->r[3];
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x0894c098u; c->r[5] = c->r[2] + 0u; func_0894b6a0(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_0894c068 */
}

/* func_08951108  0x08951108..0x0895114c  68 bytes, source=sweep */
void func_08951108(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08951108u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = c->r[2] + 0x00000008u;
    c->r[2] = mem_r32(ram, c->r[5] + 0x00000000u);
    c->r[4] = c->r[2] + 0u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    mem_w32(ram, c->r[4] + 0x00000000u, c->r[3]);
    c->r[2] = c->r[2] + 0x00000004u;
    mem_w32(ram, c->r[5] + 0x00000000u, c->r[2]);
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_08951108 */
}

/* func_08955640  0x08955640..0x08955684  68 bytes, source=sweep */
void func_08955640(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08955640u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = 0x28000000u;
    c->r[2] = c->r[2] | c->r[3];
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x08955670u; c->r[5] = c->r[2] + 0u; func_08954fd0(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_08955640 */
}

/* func_089583f8  0x089583f8..0x0895843c  68 bytes, source=sweep */
void func_089583f8(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089583f8u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = 0x21000000u;
    c->r[2] = c->r[2] | c->r[3];
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x08958428u; c->r[5] = c->r[2] + 0u; func_08957fc8(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_089583f8 */
}

/* func_0895ab04  0x0895ab04..0x0895abd4  208 bytes, source=sweep */
void func_0895ab04(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0895ab04u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x00000008u);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[8] = 0x40000000u;
    mem_w32(ram, c->r[3] + 0x00000000u, c->r[8]);
    c->r[8] = 0x41000000u;
    c->r[9] = 0x41000000u;
    c->r[10] = 0x41000000u;
    c->r[8] = mem_lwr(ram, c->r[4] + 0x00000001u, c->r[8]);
    c->r[9] = mem_lwr(ram, c->r[4] + 0x00000005u, c->r[9]);
    c->r[10] = mem_lwr(ram, c->r[4] + 0x00000009u, c->r[10]);
    mem_w32(ram, c->r[3] + 0x00000004u, c->r[8]);
    mem_w32(ram, c->r[3] + 0x00000008u, c->r[9]);
    mem_w32(ram, c->r[3] + 0x0000000cu, c->r[10]);
    c->r[8] = 0x41000000u;
    c->r[9] = 0x41000000u;
    c->r[10] = 0x41000000u;
    c->r[8] = mem_lwr(ram, c->r[4] + 0x00000011u, c->r[8]);
    c->r[9] = mem_lwr(ram, c->r[4] + 0x00000015u, c->r[9]);
    c->r[10] = mem_lwr(ram, c->r[4] + 0x00000019u, c->r[10]);
    mem_w32(ram, c->r[3] + 0x00000010u, c->r[8]);
    mem_w32(ram, c->r[3] + 0x00000014u, c->r[9]);
    mem_w32(ram, c->r[3] + 0x00000018u, c->r[10]);
    c->r[8] = 0x41000000u;
    c->r[9] = 0x41000000u;
    c->r[10] = 0x41000000u;
    c->r[8] = mem_lwr(ram, c->r[4] + 0x00000021u, c->r[8]);
    c->r[9] = mem_lwr(ram, c->r[4] + 0x00000025u, c->r[9]);
    c->r[10] = mem_lwr(ram, c->r[4] + 0x00000029u, c->r[10]);
    mem_w32(ram, c->r[3] + 0x0000001cu, c->r[8]);
    mem_w32(ram, c->r[3] + 0x00000020u, c->r[9]);
    mem_w32(ram, c->r[3] + 0x00000024u, c->r[10]);
    c->r[8] = 0x41000000u;
    c->r[9] = 0x41000000u;
    c->r[10] = 0x41000000u;
    c->r[8] = mem_lwr(ram, c->r[4] + 0x00000031u, c->r[8]);
    c->r[9] = mem_lwr(ram, c->r[4] + 0x00000035u, c->r[9]);
    c->r[10] = mem_lwr(ram, c->r[4] + 0x00000039u, c->r[10]);
    mem_w32(ram, c->r[3] + 0x00000028u, c->r[8]);
    mem_w32(ram, c->r[3] + 0x0000002cu, c->r[9]);
    mem_w32(ram, c->r[3] + 0x00000030u, c->r[10]);
    c->r[3] = c->r[3] + 0x00000034u;
    mem_w32(ram, c->r[2] + 0x00000008u, c->r[3]);
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_0895ab04 */
}

/* func_0895ce34  0x0895ce34..0x0895cef0  188 bytes, source=fde */
void func_0895ce34(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0895ce34u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    { int _c = ((s32)c->r[2] >= 0); if (_c) goto L_0895ce64; }
    { c->r[31] = 0x0895ce5cu; func_0893443c(c, ram); }
    { goto L_0895cedc; }
L_0895ce64:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000013u) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_0895ce80; }
    c->r[2] = 0u + 0x00000008u;
    { mem_w32(ram, c->r[30] + 0x00000004u, c->r[2]); goto L_0895ce88; }
L_0895ce80:
    c->r[2] = 0u + 0x00000009u;
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[2]);
L_0895ce88:
    c->r[4] = 0x08a60000u;
    c->r[4] = c->r[4] + 0x00005260u;
    { c->r[31] = 0x0895ce98u; c->r[5] = mem_r32(ram, c->r[30] + 0x00000004u); func_089d7208(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08a60000u;
    c->r[2] = c->r[2] + 0xffff9b9cu;
    c->r[2] = c->r[3] + c->r[2];
    { c->r[31] = 0x0895ceb4u; c->r[4] = mem_r32(ram, c->r[2] + 0x00000000u); func_0895cc24(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[2] + 0x00000001u;
    c->r[4] = 0x08a60000u;
    c->r[4] = c->r[4] + 0x00005260u;
    { c->r[31] = 0x0895ceccu; c->r[5] = c->r[2] + 0u; func_089d7194(c, ram); }
    { c->r[31] = 0x0895ced4u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u); func_08935ce8(c, ram); }
    { c->r[31] = 0x0895cedcu; c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u); func_08847290(c, ram); }
L_0895cedc:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_0895ce34 */
}

/* func_08960b1c  0x08960b1c..0x08960bdc  192 bytes, source=fde */
void func_08960b1c(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08960b1cu);
    c->r[29] = c->r[29] + 0xffffffc0u;
    mem_w32(ram, c->r[29] + 0x00000034u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000030u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[6]);
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[7]);
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[8]);
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[9]);
    mem_w32(ram, c->r[30] + 0x00000018u, c->r[10]);
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x08960b54u; c->r[4] = c->r[4] + 0x00000af4u; func_08921a18(c, ram); }
    mem_w32(ram, c->r[30] + 0x0000001cu, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_08960b7c; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    mem_w32(ram, c->r[30] + 0x00000020u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    { mem_w32(ram, c->r[30] + 0x00000024u, c->r[2]); goto L_08960bb4; }
L_08960b7c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = ((s32)c->r[3] < (s32)c->r[2]) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_08960ba4; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    mem_w32(ram, c->r[30] + 0x00000020u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    { mem_w32(ram, c->r[30] + 0x00000024u, c->r[2]); goto L_08960bb4; }
L_08960ba4:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    mem_w32(ram, c->r[30] + 0x00000020u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    mem_w32(ram, c->r[30] + 0x00000024u, c->r[2]);
L_08960bb4:
    c->r[2] = mem_r8(ram, c->r[30] + 0x00000020u);
    c->r[3] = mem_r8(ram, c->r[30] + 0x00000024u);
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x08960bc8u; c->r[5] = c->r[3] + 0u; func_089616d4(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000034u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000030u);
    { c->r[29] = c->r[29] + 0x00000040u; return; }
    return; /* fell out of func_08960b1c */
}

/* func_0896344c  0x0896344c..0x08963534  232 bytes, source=sweep */
void func_0896344c(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0896344cu);
    c->r[29] = c->r[29] + 0xffffffd0u;
    mem_w32(ram, c->r[29] + 0x00000020u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[6]);
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[7]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x000000d0u);
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x000000d0u);
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
    mem_w32(ram, c->r[30] + 0x0000001cu, 0u);
    mem_w32(ram, c->r[30] + 0x00000018u, 0u);
L_0896348c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = ((s32)c->r[2] < (s32)c->r[3]) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_089634a8; }
    { goto L_08963524; }
L_089634a8:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 2;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[3] = mem_r8(ram, c->r[2] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_08963514; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_08963508; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 2;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = c->r[3] + c->r[2];
    { mem_w8(ram, c->r[2] + 0x00000001u, 0u); goto L_08963524; }
L_08963508:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = c->r[2] + 0x00000001u;
    mem_w32(ram, c->r[30] + 0x0000001cu, c->r[2]);
L_08963514:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]); goto L_0896348c; }
L_08963524:
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000020u);
    { c->r[29] = c->r[29] + 0x00000030u; return; }
    return; /* fell out of func_0896344c */
}

/* func_08965a9c  0x08965a9c..0x08965c08  364 bytes, source=sweep */
void func_08965a9c(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08965a9cu);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    mem_w32(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x00000006u);
    c->r[3] = c->r[2] << 2;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + c->r[3];
    mem_w32(ram, c->r[4] + 0x00000004u, c->r[2]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x0000000au);
    c->r[3] = c->r[2] << 2;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + c->r[3];
    mem_w32(ram, c->r[4] + 0x00000008u, c->r[2]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x0000000eu);
    c->r[3] = c->r[2] << 2;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + c->r[3];
    mem_w32(ram, c->r[4] + 0x0000000cu, c->r[2]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x00000012u);
    c->r[3] = c->r[2] << 2;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + c->r[3];
    mem_w32(ram, c->r[4] + 0x00000010u, c->r[2]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x00000016u);
    c->r[3] = c->r[2] << 2;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + c->r[3];
    mem_w32(ram, c->r[4] + 0x00000014u, c->r[2]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x0000001au);
    c->r[3] = c->r[2] << 2;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + c->r[3];
    mem_w32(ram, c->r[4] + 0x00000018u, c->r[2]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x0000001eu);
    c->r[3] = c->r[2] << 2;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + c->r[3];
    mem_w32(ram, c->r[4] + 0x0000001cu, c->r[2]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x00000022u);
    c->r[3] = c->r[2] << 2;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + c->r[3];
    mem_w32(ram, c->r[4] + 0x00000020u, c->r[2]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x00000026u);
    c->r[3] = c->r[2] << 2;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + c->r[3];
    mem_w32(ram, c->r[4] + 0x00000024u, c->r[2]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x0000002au);
    c->r[3] = c->r[2] << 2;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + c->r[3];
    mem_w32(ram, c->r[4] + 0x00000028u, c->r[2]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x0000002eu);
    c->r[3] = c->r[2] << 2;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + c->r[3];
    mem_w32(ram, c->r[4] + 0x0000002cu, c->r[2]);
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_08965a9c */
}

/* func_08969180  0x08969180..0x089691c4  68 bytes, source=residue */
void func_08969180(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08969180u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08a60000u;
    c->r[2] = c->r[2] + 0xffff9a5fu;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000008u);
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_08969180 */
}

/* func_0896a168  0x0896a168..0x0896a190  40 bytes, source=sweep */
void func_0896a168(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0896a168u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    mem_w16(ram, c->r[2] + 0x0000011eu, 0u);
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_0896a168 */
}

/* func_0896c488  0x0896c488..0x0896c670  488 bytes, source=fde */
void func_0896c488(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0896c488u);
    c->r[29] = c->r[29] + 0xffffffc0u;
    mem_w32(ram, c->r[29] + 0x00000034u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000030u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[2] = c->r[30] + 0x00000010u;
    { c->r[31] = 0x0896c4a8u; c->r[4] = c->r[2] + 0u; hle_dispatch_stub(c, ram, 0x08a24b3cu); /* sceNetGetLocalEtherAddr */ }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = 0u + 0xffffffffu;
    mem_w8(ram, c->r[3] + 0x000009c2u, c->r[2]);
    mem_w32(ram, c->r[30] + 0x00000020u, 0u);
L_0896c4b8:
    { c->r[31] = 0x0896c4c0u; func_0896a3c0(c, ram); }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[2] = ((s32)c->r[3] < (s32)c->r[2]) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_0896c4dc; }
    { goto L_0896c648; }
L_0896c4dc:
    { c->r[31] = 0x0896c4e4u; func_0896a3c0(c, ram); }
    c->r[4] = c->r[2] + 0u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 3;
    c->r[2] = c->r[2] + c->r[3];
    c->r[2] = c->r[2] << 2;
    c->r[6] = c->r[4] + c->r[2];
    c->r[6] = c->r[6] + 0x00000004u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 3;
    c->r[2] = c->r[2] - c->r[3];
    c->r[3] = c->r[2] << 2;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[4] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[5] = c->r[2] + 0x00000010u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 5;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 4;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[7] = c->r[2] + 0x00000084u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 5;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 4;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = c->r[2] + 0x00000184u;
    c->r[8] = c->r[2] + 0u;
    { c->r[31] = 0x0896c574u; c->r[9] = 0u + 0x00000100u; func_089d43b8(c, ram); }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 5;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 4;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[4] = c->r[2] + 0x00000080u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 3;
    c->r[2] = c->r[2] - c->r[3];
    c->r[3] = c->r[2] << 2;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[3] + c->r[2];
    { c->r[31] = 0x0896c5b8u; c->r[5] = c->r[2] + 0u; func_0896e044(c, ram); }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[3];
    c->r[4] = c->r[2] + 0x00000070u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 3;
    c->r[2] = c->r[2] - c->r[3];
    c->r[3] = c->r[2] << 2;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + c->r[3];
    { c->r[31] = 0x0896c5f0u; mem_w32(ram, c->r[4] + 0x00000000u, c->r[2]); func_0896a3c0(c, ram); }
    c->r[4] = c->r[2] + 0u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 3;
    c->r[2] = c->r[2] + c->r[3];
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[4] + c->r[2];
    c->r[2] = c->r[2] + 0x00000004u;
    c->r[3] = c->r[30] + 0x00000010u;
    c->r[4] = c->r[3] + 0u;
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x0896c624u; c->r[6] = 0u + 0x00000006u; func_08a19d34(c, ram); }
    { int _c = (c->r[2] != 0u); if (_c) goto L_0896c638; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r8(ram, c->r[30] + 0x00000020u);
    mem_w8(ram, c->r[3] + 0x000009c2u, c->r[2]);
L_0896c638:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000020u, c->r[2]); goto L_0896c4b8; }
L_0896c648:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r8(ram, c->r[2] + 0x000009c5u);
    c->r[2] = c->r[2] | 0x0001u;
    mem_w8(ram, c->r[3] + 0x000009c5u, c->r[2]);
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000034u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000030u);
    { c->r[29] = c->r[29] + 0x00000040u; return; }
    return; /* fell out of func_0896c488 */
}

/* func_0896e128  0x0896e128..0x0896e2f8  464 bytes, source=fde */
void func_0896e128(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0896e128u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, 0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    mem_w8(ram, c->r[2] + 0x0000020bu, 0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x0896e154u; c->r[4] = mem_r32(ram, c->r[2] + 0x00000000u); func_089d4150(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_0896e26c; }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[3] = c->r[2] << 8;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = c->r[2] + 0xffffff04u;
    mem_w32(ram, c->r[4] + 0x00000204u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000204u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[4] = mem_r8(ram, c->r[2] + 0x00000001u);
    c->r[2] = mem_r8(ram, c->r[3] + 0x0000020au);
    { int _c = (c->r[4] == c->r[2]); if (_c) goto L_0896e26c; }
    c->r[2] = 0u + 0x00000001u;
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000204u);
    c->r[3] = mem_r8(ram, c->r[3] + 0x0000020au);
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000001u);
    c->r[2] = (c->r[2] < c->r[3]) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_0896e1f0; }
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000204u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[4] = mem_r8(ram, c->r[2] + 0x00000001u);
    c->r[2] = mem_r8(ram, c->r[3] + 0x0000020au);
    c->r[2] = c->r[4] - c->r[2];
    c->r[3] = 0u + 0xffffffffu;
    c->r[2] = c->r[2] + c->r[3];
    { mem_w8(ram, c->r[5] + 0x0000020cu, c->r[2]); goto L_0896e214; }
L_0896e1f0:
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000204u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[4] = mem_r8(ram, c->r[2] + 0x00000001u);
    c->r[2] = mem_r8(ram, c->r[3] + 0x0000020au);
    c->r[2] = c->r[4] - c->r[2];
    c->r[2] = c->r[2] + 0xffffffffu;
    mem_w8(ram, c->r[5] + 0x0000020cu, c->r[2]);
L_0896e214:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000204u);
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000001u);
    mem_w8(ram, c->r[3] + 0x0000020au, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = 0u + 0x00000001u;
    mem_w8(ram, c->r[3] + 0x0000020bu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    mem_w16(ram, c->r[2] + 0x00000208u, 0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000204u);
    c->r[3] = mem_r8(ram, c->r[2] + 0x00000002u);
    c->r[2] = 0u + 0x000000ffu;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_0896e26c; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = 0u + 0x00000001u;
    mem_w8(ram, c->r[3] + 0x0000020eu, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = 0u + 0x00000001u;
    mem_w8(ram, c->r[3] + 0x0000020fu, c->r[2]);
L_0896e26c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x00000208u);
    c->r[2] = ((s32)c->r[2] < (s32)0x0000001fu) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_0896e290; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = 0u + 0x00000001u;
    { mem_w8(ram, c->r[3] + 0x0000020du, c->r[2]); goto L_0896e298; }
L_0896e290:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    mem_w8(ram, c->r[2] + 0x0000020du, 0u);
L_0896e298:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x00000208u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000096u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_0896e2b8; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = 0u + 0x00000001u;
    mem_w8(ram, c->r[3] + 0x0000020eu, c->r[2]);
L_0896e2b8:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x00000208u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000096u) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_0896e2e0; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r16(ram, c->r[2] + 0x00000208u);
    c->r[2] = c->r[2] + 0x00000001u;
    mem_w16(ram, c->r[3] + 0x00000208u, c->r[2]);
L_0896e2e0:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_0896e128 */
}

/* func_0896f134  0x0896f134..0x0896f1ac  120 bytes, source=sweep */
void func_0896f134(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0896f134u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = c->r[2] << 2;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08a60000u;
    c->r[2] = c->r[2] + 0xffff9ebcu;
    c->r[2] = c->r[3] + c->r[2];
    c->r[1] = 0x08a60000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffff9dd0u);
    c->f[1] = (f32)(s32)f2u(c->f[0]);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000000u);
    c->f[0] = c->f[0] * c->f[1];
    mem_wf32(ram, c->r[30] + 0x00000008u, c->f[0]);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000008u);
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    c->r[1] = 0x08a60000u;
    { c->r[31] = 0x0896f198u; mem_wf32(ram, c->r[1] + 0xffff9dd0u, c->f[0]); func_0896f0e8(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_0896f134 */
}

/* func_089702a0  0x089702a0..0x08970788  1256 bytes, source=fde */
void func_089702a0(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089702a0u);
    c->r[29] = c->r[29] + 0xffffffd0u;
    mem_w32(ram, c->r[29] + 0x00000028u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000024u, c->r[30]);
    mem_w32(ram, c->r[29] + 0x00000020u, c->r[16]);
    c->r[30] = c->r[29] + 0u;
    c->r[2] = c->r[4] + 0u;
    c->r[3] = c->r[5] + 0u;
    c->r[4] = c->r[6] + 0u;
    c->r[5] = c->r[7] + 0u;
    mem_w16(ram, c->r[30] + 0x00000000u, c->r[2]);
    mem_w16(ram, c->r[30] + 0x00000002u, c->r[3]);
    mem_w16(ram, c->r[30] + 0x00000004u, c->r[4]);
    { c->r[31] = 0x089702d8u; mem_w16(ram, c->r[30] + 0x00000006u, c->r[5]); func_08998788(c, ram); }
    { int _c = (c->r[2] != 0u); if (_c) goto L_089702e8; }
    { goto L_08970770; }
L_089702e8:
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[30] + 0x00000000u);
    c->r[3] = c->r[2] << 3;
    c->r[2] = 0x08aa0000u;
    c->r[2] = c->r[2] + 0x000049e0u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]);
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[30] + 0x00000004u);
    c->r[3] = c->r[2] << 3;
    c->r[2] = 0x08aa0000u;
    c->r[2] = c->r[2] + 0x000049e0u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
    mem_w16(ram, c->r[30] + 0x00000010u, 0u);
    mem_w16(ram, c->r[30] + 0x00000012u, 0u);
    c->r[3] = (u32)(s32)(s16)mem_r16(ram, c->r[30] + 0x00000002u);
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[30] + 0x00000006u);
    c->r[2] = ((s32)c->r[2] < (s32)c->r[3]) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_08970348; }
    c->r[2] = mem_r16(ram, c->r[30] + 0x00000006u);
    { mem_w16(ram, c->r[30] + 0x00000010u, c->r[2]); goto L_08970364; }
L_08970348:
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[30] + 0x00000002u);
    { int _c = ((s32)c->r[2] <= 0); if (_c) goto L_08970770; }
    c->r[2] = mem_r16(ram, c->r[30] + 0x00000002u);
    mem_w16(ram, c->r[30] + 0x00000010u, c->r[2]);
    c->r[2] = 0u + 0x0000012cu;
    mem_w16(ram, c->r[30] + 0x00000012u, c->r[2]);
L_08970364:
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[30] + 0x00000000u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000004u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_08970568; }
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[30] + 0x00000000u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000010u) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_08970568; }
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[30] + 0x00000004u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000004u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_08970424; }
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[30] + 0x00000004u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000010u) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_08970424; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    { int _c = (c->r[2] == 0u); if (_c) goto L_089703e0; }
    c->r[4] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = (u32)(s32)(s16)mem_r16(ram, c->r[30] + 0x00000010u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x000000ccu);
    c->r[2] = c->r[2] + c->r[3];
    mem_w32(ram, c->r[4] + 0x000000ccu, c->r[2]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = (u32)(s32)(s16)mem_r16(ram, c->r[30] + 0x00000012u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x000000ccu);
    c->r[2] = c->r[2] + c->r[3];
    mem_w32(ram, c->r[4] + 0x000000ccu, c->r[2]);
L_089703e0:
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[30] + 0x00000004u);
    { c->r[31] = 0x089703ecu; c->r[4] = c->r[2] + 0u; func_089992dc(c, ram); }
    c->r[3] = (u32)(s32)(s16)mem_r16(ram, c->r[30] + 0x00000010u);
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x089703fcu; c->r[5] = c->r[3] + 0u; func_0896fc10(c, ram); }
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[30] + 0x00000012u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_089704f8; }
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[30] + 0x00000004u);
    { c->r[31] = 0x08970414u; c->r[4] = c->r[2] + 0u; func_089992dc(c, ram); }
    { c->r[31] = 0x0897041cu; c->r[4] = c->r[2] + 0u; func_0896f680(c, ram); }
    { goto L_089704f8; }
L_08970424:
    { c->r[31] = 0x0897042cu; c->r[16] = (u32)(s32)(s16)mem_r16(ram, c->r[30] + 0x00000004u); func_0896a3e4(c, ram); }
    { int _c = (c->r[16] != c->r[2]); if (_c) goto L_089704f0; }
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[30] + 0x00000000u);
    c->r[3] = c->r[2] << 3;
    c->r[2] = 0x08aa0000u;
    c->r[2] = c->r[2] + 0x000049dcu;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000008cu);
    c->r[2] = c->r[2] & 0x0004u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_089704f8; }
    { c->r[31] = 0x08970464u; func_0896a3e4(c, ram); }
    c->r[4] = c->r[2] + 0u;
    c->r[3] = (u32)(s32)(s16)mem_r16(ram, c->r[30] + 0x00000010u);
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[30] + 0x00000012u);
    c->r[2] = c->r[3] + c->r[2];
    { c->r[31] = 0x0897047cu; c->r[5] = c->r[2] + 0u; func_0896fc10(c, ram); }
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x08970488u; c->r[4] = c->r[2] + 0u; func_089992dc(c, ram); }
    c->r[4] = c->r[2] + 0u;
    c->r[3] = (u32)(s32)(s16)mem_r16(ram, c->r[30] + 0x00000010u);
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[30] + 0x00000012u);
    c->r[2] = c->r[3] + c->r[2];
    { c->r[31] = 0x089704a0u; c->r[5] = c->r[2] + 0u; func_0896fac8(c, ram); }
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[30] + 0x00000012u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_089704f8; }
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[30] + 0x00000004u);
    { c->r[31] = 0x089704b8u; c->r[4] = c->r[2] + 0u; func_0896f680(c, ram); }
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x089704c4u; c->r[4] = c->r[2] + 0u; func_089992dc(c, ram); }
    { c->r[31] = 0x089704ccu; c->r[4] = c->r[2] + 0u; func_0896f2b4(c, ram); }
    { c->r[31] = 0x089704d4u; func_0896f500(c, ram); }
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x089704e0u; c->r[4] = c->r[2] + 0u; func_089992dc(c, ram); }
    { c->r[31] = 0x089704e8u; c->r[4] = c->r[2] + 0u; func_0896ef9c(c, ram); }
    { goto L_089704f8; }
L_089704f0:
    { c->r[31] = 0x089704f8u; func_0896a3c0(c, ram); }
L_089704f8:
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[30] + 0x00000012u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_08970518; }
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x08970510u; c->r[4] = c->r[2] + 0u; func_089992dc(c, ram); }
    { c->r[31] = 0x08970518u; c->r[4] = c->r[2] + 0u; func_0896f78c(c, ram); }
L_08970518:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_0897053c; }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[3] = (u32)(s32)(s16)mem_r16(ram, c->r[30] + 0x00000010u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x000000ccu);
    c->r[2] = c->r[2] - c->r[3];
    mem_w32(ram, c->r[4] + 0x000000ccu, c->r[2]);
L_0897053c:
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x08970548u; c->r[4] = c->r[2] + 0u; func_089992dc(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[30] + 0x00000010u);
    c->r[2] = 0u - c->r[2];
    c->r[4] = c->r[3] + 0u;
    { c->r[31] = 0x08970560u; c->r[5] = c->r[2] + 0u; func_0896fc10(c, ram); }
    { goto L_08970770; }
L_08970568:
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[30] + 0x00000000u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000010u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_08970770; }
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[30] + 0x00000000u);
    c->r[2] = ((s32)c->r[2] < (s32)0x0000005eu) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_08970770; }
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[30] + 0x00000004u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000004u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_089705f0; }
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[30] + 0x00000004u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000010u) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_089705f0; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    { int _c = (c->r[2] == 0u); if (_c) goto L_089705cc; }
    c->r[4] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = (u32)(s32)(s16)mem_r16(ram, c->r[30] + 0x00000010u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x000000ccu);
    c->r[2] = c->r[2] + c->r[3];
    mem_w32(ram, c->r[4] + 0x000000ccu, c->r[2]);
L_089705cc:
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[30] + 0x00000004u);
    { c->r[31] = 0x089705d8u; c->r[4] = c->r[2] + 0u; func_089992dc(c, ram); }
    c->r[3] = (u32)(s32)(s16)mem_r16(ram, c->r[30] + 0x00000010u);
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x089705e8u; c->r[5] = c->r[3] + 0u; func_0896fc10(c, ram); }
    { goto L_089706c8; }
L_089705f0:
    { c->r[31] = 0x089705f8u; c->r[16] = (u32)(s32)(s16)mem_r16(ram, c->r[30] + 0x00000004u); func_0896a3e4(c, ram); }
    { int _c = (c->r[16] != c->r[2]); if (_c) goto L_089706c8; }
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[30] + 0x00000000u);
    c->r[3] = c->r[2] << 3;
    c->r[2] = 0x08aa0000u;
    c->r[2] = c->r[2] + 0x000049dcu;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000008cu);
    c->r[2] = c->r[2] & 0x0004u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_0897067c; }
    { c->r[31] = 0x08970630u; func_0896a3e4(c, ram); }
    c->r[3] = (u32)(s32)(s16)mem_r16(ram, c->r[30] + 0x00000010u);
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x08970640u; c->r[5] = c->r[3] + 0u; func_0896fc10(c, ram); }
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[30] + 0x00000010u);
    c->r[4] = 0u + 0x00000008u;
    { c->r[31] = 0x08970650u; c->r[5] = c->r[2] + 0u; func_0896fac8(c, ram); }
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[30] + 0x00000012u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_089706c8; }
    { c->r[31] = 0x08970664u; c->r[4] = 0u + 0x00000008u; func_0896f2b4(c, ram); }
    { c->r[31] = 0x0897066cu; func_0896f500(c, ram); }
    { c->r[31] = 0x08970674u; c->r[4] = 0u + 0x00000008u; func_0896ef9c(c, ram); }
    { goto L_089706c8; }
L_0897067c:
    { c->r[31] = 0x08970684u; func_089794c4(c, ram); }
    c->r[3] = mem_r8(ram, c->r[2] + 0x0000000eu);
    c->r[2] = 0u + 0x00000005u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_089706c8; }
    { c->r[31] = 0x0897069cu; func_0896a3e4(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[30] + 0x00000010u);
    c->r[2] = 0u - c->r[2];
    c->r[4] = c->r[3] + 0u;
    { c->r[31] = 0x089706b4u; c->r[5] = c->r[2] + 0u; func_0896fc10(c, ram); }
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[30] + 0x00000010u);
    c->r[2] = 0u - c->r[2];
    c->r[4] = 0u + 0x00000008u;
    { c->r[31] = 0x089706c8u; c->r[5] = c->r[2] + 0u; func_0896fac8(c, ram); }
L_089706c8:
    { c->r[31] = 0x089706d0u; func_089794c4(c, ram); }
    c->r[3] = mem_r8(ram, c->r[2] + 0x0000000eu);
    c->r[2] = 0u + 0x00000005u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_08970770; }
    { c->r[31] = 0x089706e8u; func_089794c4(c, ram); }
    c->r[3] = mem_r8(ram, c->r[2] + 0x00000010u);
    c->r[2] = 0u + 0x00000006u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_08970738; }
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[30] + 0x00000000u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000010u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_08970728; }
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[30] + 0x00000000u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000037u) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_08970728; }
    { c->r[31] = 0x08970720u; c->r[4] = 0u + 0u; func_089a6430(c, ram); }
    { goto L_08970770; }
L_08970728:
    { c->r[31] = 0x08970730u; c->r[4] = 0u + 0x00000001u; func_089a6430(c, ram); }
    { goto L_08970770; }
L_08970738:
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[30] + 0x00000000u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000010u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_08970768; }
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[30] + 0x00000000u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000024u) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_08970768; }
    { c->r[31] = 0x08970760u; c->r[4] = 0u + 0u; func_089a6430(c, ram); }
    { goto L_08970770; }
L_08970768:
    { c->r[31] = 0x08970770u; c->r[4] = 0u + 0x00000001u; func_089a6430(c, ram); }
L_08970770:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000028u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000024u);
    c->r[16] = mem_r32(ram, c->r[29] + 0x00000020u);
    { c->r[29] = c->r[29] + 0x00000030u; return; }
    return; /* fell out of func_089702a0 */
}

/* func_08973e38  0x08973e38..0x08973f28  240 bytes, source=fde */
void func_08973e38(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08973e38u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, 0u);
L_08973e4c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000008u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_08973e64; }
    { goto L_08973f14; }
L_08973e64:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08aa0000u;
    c->r[2] = c->r[2] + 0x00006984u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000ac8u;
    { c->r[31] = 0x08973e8cu; c->r[5] = c->r[2] + 0u; func_089cb820(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_08973eb4; }
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000ac8u;
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[6] = 0u + 0x00000021u;
    { c->r[31] = 0x08973eb4u; c->r[7] = 0u + 0u; func_089cb5e4(c, ram); }
L_08973eb4:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08aa0000u;
    c->r[2] = c->r[2] + 0x000069a4u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000ac8u;
    { c->r[31] = 0x08973edcu; c->r[5] = c->r[2] + 0u; func_089cb820(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_08973f04; }
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000ac8u;
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[6] = 0u + 0x00000021u;
    { c->r[31] = 0x08973f04u; c->r[7] = 0u + 0u; func_089cb5e4(c, ram); }
L_08973f04:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000000u, c->r[2]); goto L_08973e4c; }
L_08973f14:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_08973e38 */
}

/* func_08976050  0x08976050..0x0897608c  60 bytes, source=sweep */
void func_08976050(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08976050u);
    c->r[29] = c->r[29] + 0xffffffd0u;
    mem_w32(ram, c->r[29] + 0x00000020u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[6]);
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[7]);
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[8]);
    c->r[2] = 0u + 0x00000007u;
    c->r[1] = 0x08aa0000u;
    mem_w32(ram, c->r[1] + 0x00006d88u, c->r[2]);
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000020u);
    { c->r[29] = c->r[29] + 0x00000030u; return; }
    return; /* fell out of func_08976050 */
}

/* func_089795a0  0x089795a0..0x089795dc  60 bytes, source=sweep */
void func_089795a0(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089795a0u);
    c->r[29] = c->r[29] + 0xfffffff0u;
    mem_w32(ram, c->r[29] + 0x00000004u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000000u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    { c->r[31] = 0x089795b8u; func_089794c4(c, ram); }
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000005u);
    c->r[1] = 0x08a60000u;
    c->r[1] = c->r[1] + c->r[2];
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[1] + 0xffffa288u);
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000004u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000000u);
    { c->r[29] = c->r[29] + 0x00000010u; return; }
    return; /* fell out of func_089795a0 */
}

/* func_089812fc  0x089812fc..0x089814c0  452 bytes, source=fde */
void func_089812fc(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089812fcu);
    c->r[29] = c->r[29] + 0xffffffb0u;
    mem_w32(ram, c->r[29] + 0x00000048u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000044u, c->r[30]);
    mem_w32(ram, c->r[29] + 0x00000040u, c->r[16]);
    c->r[30] = c->r[29] + 0u;
    { c->r[31] = 0x08981318u; func_089794c4(c, ram); }
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000001u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_0898132c; }
    { goto L_089814a8; }
L_0898132c:
    mem_w32(ram, c->r[30] + 0x00000030u, 0u);
    mem_w32(ram, c->r[30] + 0x00000034u, 0u);
L_08981334:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000034u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000028u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_0898134c; }
    { goto L_08981390; }
L_0898134c:
    { c->r[31] = 0x08981354u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000034u); func_0896dd64(c, ram); }
    { int _c = (c->r[2] != 0u); if (_c) goto L_08981364; }
    { goto L_08981380; }
L_08981364:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000030u);
    c->r[3] = c->r[30] + c->r[2];
    c->r[2] = mem_r8(ram, c->r[30] + 0x00000034u);
    mem_w8(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000030u);
    c->r[2] = c->r[2] + 0x00000001u;
    mem_w32(ram, c->r[30] + 0x00000030u, c->r[2]);
L_08981380:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000034u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000034u, c->r[2]); goto L_08981334; }
L_08981390:
    { c->r[31] = 0x08981398u; func_0896a3c0(c, ram); }
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    mem_w32(ram, c->r[30] + 0x00000034u, c->r[2]);
L_089813a0:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000034u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000008u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_089813b8; }
    { goto L_089814a8; }
L_089813b8:
    { c->r[31] = 0x089813c0u; func_0897de00(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000034u);
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[2] = c->r[2] + 0x00000010u;
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000000u);
    c->r[3] = c->r[2] & 0x00c0u;
    c->r[2] = 0u + 0x00000080u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_089813f0; }
    { goto L_08981498; }
L_089813f0:
    { c->r[31] = 0x089813f8u; func_0897de00(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000034u);
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[2] = c->r[2] + 0x00000010u;
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000000u);
    c->r[2] = c->r[2] & 0x0010u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_08981424; }
    { goto L_08981498; }
L_08981424:
    mem_w32(ram, c->r[30] + 0x00000038u, 0u);
L_08981428:
    c->r[2] = 0x08ab0000u;
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0xffff9226u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000038u);
    c->r[2] = ((s32)c->r[3] < (s32)c->r[2]) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_08981448; }
    { goto L_08981498; }
L_08981448:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000034u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 2;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000038u);
    c->r[3] = c->r[3] + c->r[2];
    c->r[2] = 0x08ab0000u;
    c->r[2] = c->r[2] + 0xffff9190u;
    c->r[16] = c->r[3] + c->r[2];
    c->r[4] = 0u + 0u;
    { c->r[31] = 0x0898147cu; c->r[5] = mem_r32(ram, c->r[30] + 0x00000030u); func_0883a204(c, ram); }
    c->r[2] = c->r[30] + c->r[2];
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000000u);
    mem_w8(ram, c->r[16] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000038u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000038u, c->r[2]); goto L_08981428; }
L_08981498:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000034u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000034u, c->r[2]); goto L_089813a0; }
L_089814a8:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000048u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000044u);
    c->r[16] = mem_r32(ram, c->r[29] + 0x00000040u);
    { c->r[29] = c->r[29] + 0x00000050u; return; }
    return; /* fell out of func_089812fc */
}

/* func_0898b938  0x0898b938..0x0898bad4  412 bytes, source=fde */
void func_0898b938(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0898b938u);
    c->r[29] = c->r[29] + 0xffffffb0u;
    mem_w32(ram, c->r[29] + 0x00000048u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000044u, c->r[30]);
    mem_w32(ram, c->r[29] + 0x00000040u, c->r[16]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x000000e0u;
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[2]);
    c->r[2] = 0x08a50000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0xffff9a20u);
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]);
    c->r[2] = 0x08a50000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0xffff9a24u);
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
    c->r[2] = 0x08a50000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0xffff9a28u);
    mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]);
    c->r[2] = 0x08a50000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0xffff9a2cu);
    mem_w32(ram, c->r[30] + 0x0000001cu, c->r[2]);
    c->r[2] = 0x08a50000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0xffff9a30u);
    mem_w32(ram, c->r[30] + 0x00000020u, c->r[2]);
    mem_w32(ram, c->r[30] + 0x00000030u, 0u);
L_0898b99c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000030u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000009u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_0898b9b4; }
    { goto L_0898b9f8; }
L_0898b9b4:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000030u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08a60000u;
    c->r[2] = c->r[2] + 0xffffa4c4u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[3] = c->r[30] + 0x00000010u;
    c->r[4] = c->r[2] + 0u;
    c->r[5] = c->r[3] + 0u;
    { c->r[31] = 0x0898b9e8u; c->r[6] = 0u + 0x00000014u; func_08a19db8(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000030u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000030u, c->r[2]); goto L_0898b99c; }
L_0898b9f8:
    c->r[3] = 0x08a60000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0xffffa4ccu);
    c->r[2] = 0u + 0xffffcfffu;
    c->r[2] = c->r[3] & c->r[2];
    c->r[1] = 0x08a60000u;
    mem_w32(ram, c->r[1] + 0xffffa4ccu, c->r[2]);
    c->r[2] = 0x00400000u;
    c->r[1] = 0x08a60000u;
    mem_w32(ram, c->r[1] + 0xffffa4ccu, c->r[2]);
    c->r[2] = 0u + 0x00000008u;
    c->r[1] = 0x08a60000u;
    mem_w32(ram, c->r[1] + 0xffffa4d0u, c->r[2]);
    c->r[2] = 0x08ab0000u;
    c->r[2] = c->r[2] + 0xffff92a4u;
    c->r[1] = 0x08a60000u;
    { c->r[31] = 0x0898ba3cu; mem_w32(ram, c->r[1] + 0xffffa4d4u, c->r[2]); func_0898aaf4(c, ram); }
    { c->r[31] = 0x0898ba44u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u); func_0898b640(c, ram); }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = 0u + 0x00000075u;
    c->r[6] = 0u + 0xffffffffu;
    c->r[7] = 0u + 0xffffffffu;
    c->r[8] = 0u + 0u;
    c->r[9] = 0x08a60000u;
    c->r[9] = c->r[9] + 0xffffa4c4u;
    { c->r[31] = 0x0898ba68u; c->r[10] = 0u + 0x00000009u; func_0892fcac(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000030u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000030u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_0898babc; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[16] = c->r[2] + 0x00000014u;
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000ac8u;
    { c->r[31] = 0x0898ba90u; c->r[5] = mem_r32(ram, c->r[30] + 0x00000030u); func_089cb780(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000034u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000034u);
    mem_w32(ram, c->r[16] + 0x00000000u, c->r[2]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000030u);
    c->r[5] = 0x07000000u;
    { c->r[31] = 0x0898baacu; c->r[5] = c->r[5] | 0x0008u; func_0892ff54(c, ram); }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000030u);
    c->f[12] = u2f(0u);
    { c->r[31] = 0x0898babcu; func_08932528(c, ram); }
L_0898babc:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000048u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000044u);
    c->r[16] = mem_r32(ram, c->r[29] + 0x00000040u);
    { c->r[29] = c->r[29] + 0x00000050u; return; }
    return; /* fell out of func_0898b938 */
}

/* func_08995498  0x08995498..0x08996c64  6092 bytes, source=fde */
void func_08995498(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08995498u);
L_08995498:
    c->r[29] = c->r[29] + 0xffffff90u;
    mem_w32(ram, c->r[29] + 0x00000068u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000064u, c->r[30]);
    mem_w32(ram, c->r[29] + 0x00000060u, c->r[16]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[2] = c->r[5] + 0u;
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[6]);
    mem_w8(ram, c->r[30] + 0x00000004u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x000000e0u;
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000070u;
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]);
    c->r[2] = mem_r8(ram, c->r[30] + 0x00000004u);
    mem_w32(ram, c->r[30] + 0x00000058u, c->r[2]);
    c->r[2] = 0u + 0x00000001u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000058u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_08995504; }
    c->r[2] = 0u + 0x00000019u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000058u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_08996930; }
    { goto L_08996c48; }
L_08995504:
    { c->r[31] = 0x0899550cu; func_0885d884(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r8(ram, c->r[2] + 0x0000000eu);
    mem_w32(ram, c->r[30] + 0x00000044u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000044u);
    c->r[2] = (c->r[3] < 0x0000002cu) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_08996920; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000044u);
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08a50000u;
    c->r[2] = c->r[2] + 0xffff9f0cu;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    { u32 _t = c->r[2]; switch (_t) { case 0x08995498u: goto L_08995498; case 0x08995548u: goto L_08995548; case 0x0899568cu: goto L_0899568c; case 0x08995938u: goto L_08995938; case 0x089959c0u: goto L_089959c0; case 0x08995a14u: goto L_08995a14; case 0x08995b08u: goto L_08995b08; case 0x08995b70u: goto L_08995b70; case 0x08995cf0u: goto L_08995cf0; case 0x08995d8cu: goto L_08995d8c; case 0x08995e54u: goto L_08995e54; case 0x08995f84u: goto L_08995f84; case 0x089960b8u: goto L_089960b8; case 0x08996158u: goto L_08996158; case 0x08996368u: goto L_08996368; case 0x0899646cu: goto L_0899646c; case 0x089964d8u: goto L_089964d8; case 0x089965bcu: goto L_089965bc; case 0x089967c4u: goto L_089967c4; case 0x08996818u: goto L_08996818; case 0x08996868u: goto L_08996868; case 0x089968f4u: goto L_089968f4; case 0x08996920u: goto L_08996920; case 0x08996984u: goto L_08996984; case 0x089969f4u: goto L_089969f4; case 0x08996a10u: goto L_08996a10; case 0x08996a2cu: goto L_08996a2c; case 0x08996ad8u: goto L_08996ad8; case 0x08996b48u: goto L_08996b48; case 0x08996b64u: goto L_08996b64; case 0x08996b80u: goto L_08996b80; case 0x08996b9cu: goto L_08996b9c; case 0x08996bb0u: goto L_08996bb0; default: recomp_trap_unknown_indirect(c, ram, 0x08995540u, _t); return; } }
L_08995548:
    { c->r[31] = 0x08995550u; c->r[4] = mem_r32(ram, c->r[30] + 0x0000000cu); func_0896e3a0(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    mem_w32(ram, c->r[2] + 0x00000000u, 0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    mem_w8(ram, c->r[2] + 0x00000010u, 0u);
    mem_w32(ram, c->r[30] + 0x00000014u, 0u);
L_08995564:
    { c->r[31] = 0x0899556cu; func_0896a3c0(c, ram); }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[2] = ((s32)c->r[3] < (s32)c->r[2]) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_08995588; }
    { goto L_08995628; }
L_08995588:
    { c->r[31] = 0x08995590u; func_0896a3c0(c, ram); }
    c->r[4] = c->r[2] + 0u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 3;
    c->r[2] = c->r[2] + c->r[3];
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[4];
    c->r[2] = c->r[2] + 0x00000020u;
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000005u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_089955e8; }
    { c->r[31] = 0x089955c4u; func_0896a284(c, ram); }
    c->r[4] = c->r[2] + 0u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 5;
    c->r[2] = c->r[2] + c->r[3];
    c->r[2] = c->r[2] << 4;
    c->r[2] = c->r[2] + c->r[4];
    c->r[2] = c->r[2] + 0x00000280u;
    mem_w8(ram, c->r[2] + 0x0000000fu, 0u);
L_089955e8:
    { c->r[31] = 0x089955f0u; func_0896a3c0(c, ram); }
    c->r[4] = c->r[2] + 0u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 3;
    c->r[2] = c->r[2] + c->r[3];
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[4];
    c->r[3] = c->r[2] + 0x00000020u;
    c->r[2] = 0u + 0x00000001u;
    mem_w8(ram, c->r[3] + 0x00000005u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]); goto L_08995564; }
L_08995628:
    { c->r[31] = 0x08995630u; func_0896a3c0(c, ram); }
    mem_w8(ram, c->r[2] + 0x00000025u, 0u);
    { c->r[31] = 0x0899563cu; c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u); func_08992cb4(c, ram); }
    { c->r[31] = 0x08995644u; c->r[4] = 0u + 0u; func_0880b1a0(c, ram); }
    { c->r[31] = 0x0899564cu; func_0883b080(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_0899567c; }
    c->r[16] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000ac8u;
    { c->r[31] = 0x08995670u; c->r[5] = mem_r32(ram, c->r[30] + 0x00000014u); func_089cb780(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    mem_w32(ram, c->r[16] + 0x00000000u, c->r[2]);
L_0899567c:
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0u + 0x0000000au;
    { mem_w8(ram, c->r[3] + 0x0000000eu, c->r[2]); goto L_08996920; }
L_0899568c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000ac8u;
    { c->r[31] = 0x089956a4u; c->r[5] = c->r[2] + 0u; func_089cb820(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_089956bc; }
    { goto L_08996920; }
L_089956bc:
    { c->r[31] = 0x089956c4u; c->r[4] = 0u + 0x00000002u; func_0880b118(c, ram); }
    c->r[2] = 0x08a80000u;
    c->r[2] = c->r[2] + 0x00000e00u;
    mem_w32(ram, c->r[30] + 0x0000001cu, c->r[2]);
    c->r[2] = 0x08a80000u;
    c->r[2] = c->r[2] + 0x00000df8u;
    { c->r[31] = 0x089956e0u; mem_w32(ram, c->r[30] + 0x00000020u, c->r[2]); func_0896a3c0(c, ram); }
    { c->r[31] = 0x089956e8u; c->r[16] = c->r[2] + 0u; func_0896a3e4(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 3;
    c->r[2] = c->r[2] + c->r[3];
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[16] + c->r[2];
    c->r[2] = c->r[2] + 0x00000004u;
    c->r[2] = c->r[2] + 0x00000006u;
    c->r[4] = c->r[2] + 0u;
    c->r[5] = mem_r32(ram, c->r[30] + 0x0000001cu);
    { c->r[31] = 0x08995718u; c->r[6] = 0u + 0x00000008u; func_08a19db8(c, ram); }
    { c->r[31] = 0x08995720u; func_0896a3c0(c, ram); }
    { c->r[31] = 0x08995728u; c->r[16] = c->r[2] + 0u; func_0896a3e4(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 3;
    c->r[2] = c->r[2] + c->r[3];
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[16] + c->r[2];
    c->r[2] = c->r[2] + 0x00000004u;
    c->r[2] = c->r[2] + 0x0000000eu;
    c->r[4] = c->r[2] + 0u;
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000020u);
    { c->r[31] = 0x08995758u; c->r[6] = 0u + 0x00000006u; func_08a19db8(c, ram); }
    { c->r[31] = 0x08995760u; func_0896a3c0(c, ram); }
    { c->r[31] = 0x08995768u; c->r[16] = c->r[2] + 0u; func_0896a3e4(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 3;
    c->r[2] = c->r[2] + c->r[3];
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[16] + c->r[2];
    c->r[2] = c->r[2] + 0x00000004u;
    { c->r[31] = 0x0899578cu; c->r[16] = c->r[2] + 0x00000014u; func_0896a260(c, ram); }
    c->r[4] = c->r[16] + 0u;
    { c->r[31] = 0x08995798u; c->r[5] = c->r[2] + 0u; func_08a1af70(c, ram); }
    { c->r[31] = 0x089957a0u; func_0896a3c0(c, ram); }
    { c->r[31] = 0x089957a8u; c->r[16] = c->r[2] + 0u; func_0896a3e4(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 3;
    c->r[2] = c->r[2] + c->r[3];
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[16];
    c->r[3] = c->r[2] + 0x00000010u;
    c->r[2] = 0x08a80000u;
    c->r[2] = mem_r8(ram, c->r[2] + 0x00002664u);
    mem_w8(ram, c->r[3] + 0x00000011u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0u + 0x0000000fu;
    mem_w32(ram, c->r[3] + 0x00000004u, c->r[2]);
    mem_w32(ram, c->r[30] + 0x00000024u, 0u);
    mem_w32(ram, c->r[30] + 0x00000028u, 0u);
L_089957e4:
    { c->r[31] = 0x089957ecu; func_0896a3c0(c, ram); }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000028u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[2] = ((s32)c->r[3] < (s32)c->r[2]) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_08995808; }
    { goto L_08995878; }
L_08995808:
    { c->r[31] = 0x08995810u; func_0896a3e4(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000028u);
    { int _c = (c->r[2] != c->r[3]); if (_c) goto L_08995828; }
    { goto L_08995868; }
L_08995828:
    { c->r[31] = 0x08995830u; func_0896a3c0(c, ram); }
    c->r[4] = c->r[2] + 0u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000028u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 3;
    c->r[2] = c->r[2] + c->r[3];
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[4];
    c->r[2] = c->r[2] + 0x00000020u;
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000004u);
    c->r[2] = 0u + 0x00000001u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_08995868; }
    c->r[2] = 0u + 0x00000001u;
    mem_w32(ram, c->r[30] + 0x00000024u, c->r[2]);
L_08995868:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000028u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000028u, c->r[2]); goto L_089957e4; }
L_08995878:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000024u);
    c->r[2] = 0u + 0x00000001u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_08995898; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0u + 0x00000008u;
    { mem_w8(ram, c->r[3] + 0x0000000eu, c->r[2]); goto L_08996920; }
L_08995898:
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0u + 0x00000012u;
    mem_w8(ram, c->r[3] + 0x0000000eu, c->r[2]);
    mem_w32(ram, c->r[30] + 0x00000028u, 0u);
L_089958a8:
    { c->r[31] = 0x089958b0u; func_0896a3c0(c, ram); }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000028u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[2] = ((s32)c->r[3] < (s32)c->r[2]) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_089958cc; }
    { goto L_08996920; }
L_089958cc:
    { c->r[31] = 0x089958d4u; func_0896a284(c, ram); }
    c->r[4] = c->r[2] + 0u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000028u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 5;
    c->r[2] = c->r[2] + c->r[3];
    c->r[2] = c->r[2] << 4;
    c->r[2] = c->r[4] + c->r[2];
    c->r[2] = c->r[2] + 0x00000080u;
    { c->r[31] = 0x089958fcu; c->r[4] = c->r[2] + 0u; func_08998748(c, ram); }
    { c->r[31] = 0x08995904u; func_0896a284(c, ram); }
    c->r[4] = c->r[2] + 0u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000028u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 5;
    c->r[2] = c->r[2] + c->r[3];
    c->r[2] = c->r[2] << 4;
    c->r[2] = c->r[2] + c->r[4];
    c->r[2] = c->r[2] + 0x00000280u;
    mem_w8(ram, c->r[2] + 0x0000000fu, 0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000028u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000028u, c->r[2]); goto L_089958a8; }
L_08995938:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000004u);
    { int _c = ((s32)c->r[2] > 0); if (_c) goto L_089959a8; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x00000014u;
    c->r[4] = c->r[2] + 0u;
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[6] = 0u + 0x0000007bu;
    c->r[7] = 0u + 0xffffffffu;
    c->r[8] = 0u + 0xffffffffu;
    c->r[9] = 0u + 0u;
    c->r[10] = 0u + 0u;
    { c->r[31] = 0x08995974u; c->r[11] = 0u + 0u; func_0896e6d0(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000028u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000028u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_08996920; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    mem_w8(ram, c->r[2] + 0x00000040u, 0u);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000028u);
    { c->r[31] = 0x08995998u; c->r[5] = 0x01000000u; func_0892ff54(c, ram); }
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0u + 0x00000013u;
    { mem_w8(ram, c->r[3] + 0x0000000eu, c->r[2]); goto L_08996920; }
L_089959a8:
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000004u);
    c->r[2] = c->r[2] + 0xffffffffu;
    { mem_w32(ram, c->r[3] + 0x00000004u, c->r[2]); goto L_08996920; }
L_089959c0:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x00000014u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    { c->r[31] = 0x089959d4u; c->r[4] = c->r[2] + 0u; func_0896e87c(c, ram); }
    { int _c = (c->r[2] == 0u); if (_c) goto L_089959e4; }
    { goto L_08996920; }
L_089959e4:
    { c->r[31] = 0x089959ecu; func_0896a284(c, ram); }
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0u + 0x0000000fu;
    c->r[6] = 0u + 0x0000000au;
    c->r[7] = 0u + 0u;
    { c->r[31] = 0x08995a04u; c->r[8] = 0u + 0u; func_0896cc50(c, ram); }
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0u + 0x00000002u;
    { mem_w8(ram, c->r[3] + 0x0000000eu, c->r[2]); goto L_08996920; }
L_08995a14:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x00000014u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    { c->r[31] = 0x08995a28u; c->r[4] = c->r[2] + 0u; func_0896e8f8(c, ram); }
    { int _c = (c->r[2] != 0u); if (_c) goto L_08996920; }
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000af4u;
    { c->r[31] = 0x08995a40u; c->r[5] = 0u + 0x0000007bu; func_088145a8(c, ram); }
    mem_w32(ram, c->r[30] + 0x0000002cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000002cu);
    { int _c = (c->r[2] == 0u); if (_c) goto L_08995a68; }
    c->r[2] = 0u + 0x00000001u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000002cu);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_08995af0; }
    { goto L_08995afc; }
L_08995a68:
    { c->r[31] = 0x08995a70u; c->r[4] = mem_r32(ram, c->r[30] + 0x0000000cu); func_0896e3dc(c, ram); }
    { c->r[31] = 0x08995a78u; func_089950d4(c, ram); }
    { c->r[31] = 0x08995a80u; func_0896a284(c, ram); }
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0u + 0x0000000fu;
    c->r[6] = 0u + 0x00000080u;
    c->r[7] = 0u + 0x00000060u;
    c->r[8] = 0x08ab0000u;
    { c->r[31] = 0x08995a9cu; c->r[8] = c->r[8] + 0xffff9908u; func_0896cc50(c, ram); }
    { c->r[31] = 0x08995aa4u; func_0896a284(c, ram); }
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x08995ab0u; c->r[5] = 0u + 0xffffffffu; func_0896ccf0(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x0000001cu;
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x08995ac4u; c->r[5] = c->r[2] + 0u; func_08972758(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000028u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000028u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_08995ae0; }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000028u);
    { c->r[31] = 0x08995ae0u; c->r[5] = 0x07000000u; func_0892ff54(c, ram); }
L_08995ae0:
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0u + 0x0000000bu;
    { mem_w8(ram, c->r[3] + 0x0000000eu, c->r[2]); goto L_08995afc; }
L_08995af0:
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0u + 0x00000003u;
    mem_w8(ram, c->r[3] + 0x0000000eu, c->r[2]);
L_08995afc:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    { mem_w8(ram, c->r[2] + 0x00000010u, 0u); goto L_08996920; }
L_08995b08:
    { c->r[31] = 0x08995b10u; c->r[4] = 0u + 0x00000001u; func_089c5e18(c, ram); }
    { int _c = (c->r[2] == 0u); if (_c) goto L_08995b50; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0u + 0x00000006u;
    { c->r[31] = 0x08995b28u; mem_w32(ram, c->r[3] + 0x00000004u, c->r[2]); func_0896a284(c, ram); }
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0u + 0x0000000fu;
    c->r[6] = 0u + 0x00000008u;
    c->r[7] = 0u + 0u;
    { c->r[31] = 0x08995b40u; c->r[8] = 0u + 0u; func_0896cc50(c, ram); }
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0u + 0x00000019u;
    { mem_w8(ram, c->r[3] + 0x0000000eu, c->r[2]); goto L_08996920; }
L_08995b50:
    { c->r[31] = 0x08995b58u; c->r[4] = 0u + 0x00000001u; func_089c5f10(c, ram); }
    { int _c = (c->r[2] == 0u); if (_c) goto L_08996920; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0u + 0x00000012u;
    { mem_w8(ram, c->r[3] + 0x0000000eu, c->r[2]); goto L_08996920; }
L_08995b70:
    mem_w32(ram, c->r[30] + 0x00000028u, 0u);
    { c->r[31] = 0x08995b7cu; mem_w32(ram, c->r[30] + 0x00000024u, 0u); func_0896a284(c, ram); }
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0u + 0x0000000fu;
    c->r[6] = 0u + 0x00000003u;
    { c->r[31] = 0x08995b90u; c->r[7] = 0u + 0x000000ffu; func_0896ce9c(c, ram); }
    { c->r[31] = 0x08995b98u; mem_w32(ram, c->r[30] + 0x00000020u, c->r[2]); func_089950d4(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    mem_w32(ram, c->r[30] + 0x00000030u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000030u);
    { int _c = (c->r[3] == 0u); if (_c) goto L_08995c60; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000030u);
    { int _c = ((s32)c->r[2] > 0); if (_c) goto L_08995bd0; }
    c->r[2] = 0u + 0xffffffffu;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000030u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_08995be8; }
    { goto L_08995c78; }
L_08995bd0:
    c->r[2] = 0u + 0x00000001u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000030u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_08995c54; }
    { goto L_08995c78; }
L_08995be8:
    mem_w32(ram, c->r[30] + 0x0000001cu, 0u);
L_08995bec:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000006u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_08995c04; }
    { goto L_08995c34; }
L_08995c04:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[3] = c->r[2] << 2;
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = c->r[2] + 0x00000014u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    { c->r[31] = 0x08995c24u; c->r[4] = c->r[2] + 0u; func_0896e7c0(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x0000001cu, c->r[2]); goto L_08995bec; }
L_08995c34:
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0u + 0x00000002u;
    mem_w32(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x08995c4cu; c->r[5] = 0u + 0x00000033u; func_0896a7b8(c, ram); }
    { goto L_08995c78; }
L_08995c54:
    c->r[2] = 0u + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000028u, c->r[2]); goto L_08995c78; }
L_08995c60:
    { c->r[31] = 0x08995c68u; c->r[4] = 0u + 0x00000001u; func_089c5e18(c, ram); }
    { int _c = (c->r[2] == 0u); if (_c) goto L_08995c78; }
    c->r[2] = 0u + 0x00000001u;
    mem_w32(ram, c->r[30] + 0x00000028u, c->r[2]);
L_08995c78:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = mem_r8(ram, c->r[30] + 0x00000024u);
    mem_w8(ram, c->r[2] + 0x00000010u, c->r[3]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000028u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_08995cc4; }
    { c->r[31] = 0x08995c98u; func_0896a284(c, ram); }
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0u + 0x0000000fu;
    c->r[6] = 0u + 0x00000003u;
    c->r[7] = 0u + 0x00000060u;
    c->r[8] = 0x08ab0000u;
    { c->r[31] = 0x08995cb4u; c->r[8] = c->r[8] + 0xffff9908u; func_0896cc50(c, ram); }
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0u + 0x0000000cu;
    { mem_w8(ram, c->r[3] + 0x0000000eu, c->r[2]); goto L_08996920; }
L_08995cc4:
    { c->r[31] = 0x08995cccu; func_0896a284(c, ram); }
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0u + 0x0000000fu;
    c->r[6] = 0u + 0x00000080u;
    c->r[7] = 0u + 0x00000060u;
    c->r[8] = 0x08ab0000u;
    { c->r[31] = 0x08995ce8u; c->r[8] = c->r[8] + 0xffff9908u; func_0896cc50(c, ram); }
    { goto L_08996920; }
L_08995cf0:
    { c->r[31] = 0x08995cf8u; mem_w32(ram, c->r[30] + 0x00000028u, 0u); func_089950d4(c, ram); }
    { c->r[31] = 0x08995d00u; c->r[4] = 0u + 0x00000001u; func_089c5e18(c, ram); }
    { int _c = (c->r[2] == 0u); if (_c) goto L_08995d40; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0u + 0x00000006u;
    { c->r[31] = 0x08995d18u; mem_w32(ram, c->r[3] + 0x00000004u, c->r[2]); func_0896a284(c, ram); }
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0u + 0x0000000fu;
    c->r[6] = 0u + 0x00000008u;
    c->r[7] = 0u + 0u;
    { c->r[31] = 0x08995d30u; c->r[8] = 0u + 0u; func_0896cc50(c, ram); }
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0u + 0x00000019u;
    { mem_w8(ram, c->r[3] + 0x0000000eu, c->r[2]); goto L_08996920; }
L_08995d40:
    { c->r[31] = 0x08995d48u; c->r[4] = 0u + 0x00000001u; func_089c5f10(c, ram); }
    { int _c = (c->r[2] == 0u); if (_c) goto L_08995d60; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0u + 0x0000000bu;
    { mem_w8(ram, c->r[3] + 0x0000000eu, c->r[2]); goto L_08996920; }
L_08995d60:
    { c->r[31] = 0x08995d68u; func_0896a284(c, ram); }
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0u + 0x0000000fu;
    c->r[6] = 0u + 0x00000080u;
    c->r[7] = 0u + 0x00000060u;
    c->r[8] = 0x08ab0000u;
    { c->r[31] = 0x08995d84u; c->r[8] = c->r[8] + 0xffff9908u; func_0896cc50(c, ram); }
    { goto L_08996920; }
L_08995d8c:
    { c->r[31] = 0x08995d94u; func_0896a284(c, ram); }
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0u + 0x0000000fu;
    { c->r[31] = 0x08995da4u; c->r[6] = 0u + 0x0000000bu; func_0896d35c(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000028u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000028u);
    mem_w32(ram, c->r[30] + 0x00000034u, c->r[2]);
    c->r[2] = 0u + 0xffffffffu;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000034u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_08995dd8; }
    c->r[2] = 0u + 0x00000001u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000034u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_08995e44; }
    { goto L_08996920; }
L_08995dd8:
    mem_w32(ram, c->r[30] + 0x00000024u, 0u);
L_08995ddc:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000024u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000006u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_08995df4; }
    { goto L_08995e24; }
L_08995df4:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000024u);
    c->r[3] = c->r[2] << 2;
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = c->r[2] + 0x00000014u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    { c->r[31] = 0x08995e14u; c->r[4] = c->r[2] + 0u; func_0896e7c0(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000024u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000024u, c->r[2]); goto L_08995ddc; }
L_08995e24:
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0u + 0x00000002u;
    mem_w32(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x08995e3cu; c->r[5] = 0u + 0x00000033u; func_0896a7b8(c, ram); }
    { goto L_08996920; }
L_08995e44:
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0u + 0x0000000cu;
    { mem_w8(ram, c->r[3] + 0x0000000eu, c->r[2]); goto L_08996920; }
L_08995e54:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x00000014u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    { c->r[31] = 0x08995e68u; c->r[4] = c->r[2] + 0u; func_0896e8f8(c, ram); }
    { int _c = (c->r[2] == 0u); if (_c) goto L_08995e78; }
    { goto L_08996920; }
L_08995e78:
    { c->r[31] = 0x08995e80u; func_08994598(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000028u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000028u);
    mem_w32(ram, c->r[30] + 0x00000038u, c->r[2]);
    c->r[2] = 0u + 0x00000001u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000038u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_08995ee8; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000038u);
    c->r[2] = ((s32)c->r[3] < (s32)0x00000002u) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_08995ec0; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000038u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_08995ed8; }
    { goto L_08996920; }
L_08995ec0:
    c->r[2] = 0u + 0x00000002u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000038u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_08995ef8; }
    { goto L_08996920; }
L_08995ed8:
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0u + 0x00000005u;
    { mem_w8(ram, c->r[3] + 0x0000000eu, c->r[2]); goto L_08996920; }
L_08995ee8:
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0u + 0x00000009u;
    { mem_w8(ram, c->r[3] + 0x0000000eu, c->r[2]); goto L_08996920; }
L_08995ef8:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x00000018u;
    c->r[4] = c->r[2] + 0u;
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[6] = 0u + 0x0000007cu;
    c->r[7] = 0u + 0xffffffffu;
    c->r[8] = 0u + 0xffffffffu;
    c->r[9] = 0u + 0u;
    c->r[10] = 0u + 0u;
    { c->r[31] = 0x08995f24u; c->r[11] = 0u + 0u; func_0896e6d0(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000024u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000024u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_08996920; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    mem_w8(ram, c->r[2] + 0x00000040u, 0u);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000024u);
    { c->r[31] = 0x08995f48u; c->r[5] = 0x01000000u; func_0892ff54(c, ram); }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000024u);
    c->r[5] = 0u + 0x00000004u;
    { c->r[31] = 0x08995f58u; c->r[6] = 0u + 0u; func_08930208(c, ram); }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000024u);
    c->r[5] = 0u + 0x00000004u;
    { c->r[31] = 0x08995f68u; c->r[6] = 0u + 0x00000001u; func_08930208(c, ram); }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000024u);
    { c->r[31] = 0x08995f74u; c->r[5] = 0u + 0u; func_08932484(c, ram); }
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0u + 0x00000004u;
    { mem_w8(ram, c->r[3] + 0x0000000eu, c->r[2]); goto L_08996920; }
L_08995f84:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x00000018u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    { c->r[31] = 0x08995f98u; c->r[4] = c->r[2] + 0u; func_0896e8f8(c, ram); }
    { int _c = (c->r[2] != 0u); if (_c) goto L_08996084; }
    c->r[2] = 0u + 0x00000001u;
    mem_w32(ram, c->r[30] + 0x00000028u, c->r[2]);
L_08995fa8:
    { c->r[31] = 0x08995fb0u; func_0896a3c0(c, ram); }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000028u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[2] = ((s32)c->r[3] < (s32)c->r[2]) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_08995fcc; }
    { goto L_0899601c; }
L_08995fcc:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000028u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 3;
    c->r[2] = 0x08ab0000u;
    c->r[2] = c->r[2] + 0xffff9918u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000007u);
    { int _c = ((s32)c->r[2] >= 0); if (_c) goto L_0899600c; }
    { c->r[31] = 0x08996000u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000028u); func_0896a458(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = 0u + 0x00000001u;
    mem_w8(ram, c->r[3] + 0x0000020fu, c->r[2]);
L_0899600c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000028u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000028u, c->r[2]); goto L_08995fa8; }
L_0899601c:
    c->r[16] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000af4u;
    { c->r[31] = 0x08996030u; c->r[5] = 0u + 0x0000007cu; func_088145a8(c, ram); }
    c->r[2] = c->r[2] + 0x00000006u;
    { c->r[31] = 0x0899603cu; mem_w8(ram, c->r[16] + 0x00000010u, c->r[2]); func_0896a284(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x00000010u;
    c->r[4] = c->r[3] + 0u;
    c->r[5] = 0u + 0x0000000fu;
    c->r[6] = 0u + 0x00000001u;
    c->r[7] = 0u + 0x00000001u;
    { c->r[31] = 0x08996060u; c->r[8] = c->r[2] + 0u; func_0896cc50(c, ram); }
    { c->r[31] = 0x08996068u; func_0896a284(c, ram); }
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x08996074u; c->r[5] = 0u + 0x0000000fu; func_0896ccf0(c, ram); }
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0u + 0x00000018u;
    { mem_w8(ram, c->r[3] + 0x0000000eu, c->r[2]); goto L_08996920; }
L_08996084:
    { c->r[31] = 0x0899608cu; func_089950d4(c, ram); }
    { c->r[31] = 0x08996094u; func_0896a284(c, ram); }
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0u + 0x0000000fu;
    c->r[6] = 0u + 0x00000003u;
    c->r[7] = 0u + 0x00000060u;
    c->r[8] = 0x08ab0000u;
    { c->r[31] = 0x089960b0u; c->r[8] = c->r[8] + 0xffff9908u; func_0896cc50(c, ram); }
    { goto L_08996920; }
L_089960b8:
    { c->r[31] = 0x089960c0u; c->r[4] = 0u + 0x00000001u; func_089c5e18(c, ram); }
    { int _c = (c->r[2] == 0u); if (_c) goto L_08996100; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0u + 0x00000006u;
    { c->r[31] = 0x089960d8u; mem_w32(ram, c->r[3] + 0x00000004u, c->r[2]); func_0896a284(c, ram); }
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0u + 0x0000000fu;
    c->r[6] = 0u + 0x00000008u;
    c->r[7] = 0u + 0u;
    { c->r[31] = 0x089960f0u; c->r[8] = 0u + 0u; func_0896cc50(c, ram); }
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0u + 0x00000019u;
    { mem_w8(ram, c->r[3] + 0x0000000eu, c->r[2]); goto L_08996920; }
L_08996100:
    { c->r[31] = 0x08996108u; c->r[4] = 0u + 0x00000001u; func_089c5f10(c, ram); }
    { int _c = (c->r[2] == 0u); if (_c) goto L_08996920; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x00000018u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000ac8u;
    { c->r[31] = 0x0899612cu; c->r[5] = c->r[2] + 0u; func_089cb820(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000028u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000028u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_08996148; }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000028u);
    { c->r[31] = 0x08996148u; c->r[5] = 0x04000000u; func_0892ffa8(c, ram); }
L_08996148:
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0u + 0x00000004u;
    { mem_w8(ram, c->r[3] + 0x0000000eu, c->r[2]); goto L_08996920; }
L_08996158:
    { c->r[31] = 0x08996160u; func_0896a284(c, ram); }
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0u + 0x0000000fu;
    { c->r[31] = 0x08996170u; c->r[6] = 0u + 0x0000000cu; func_0896d35c(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000028u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000028u);
    mem_w32(ram, c->r[30] + 0x0000003cu, c->r[2]);
    c->r[2] = 0u + 0xffffffffu;
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000003cu);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_089961a4; }
    c->r[2] = 0u + 0x00000001u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000003cu);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_08996210; }
    { goto L_08996920; }
L_089961a4:
    mem_w32(ram, c->r[30] + 0x00000024u, 0u);
L_089961a8:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000024u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000006u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_089961c0; }
    { goto L_089961f0; }
L_089961c0:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000024u);
    c->r[3] = c->r[2] << 2;
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = c->r[2] + 0x00000014u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    { c->r[31] = 0x089961e0u; c->r[4] = c->r[2] + 0u; func_0896e7c0(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000024u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000024u, c->r[2]); goto L_089961a8; }
L_089961f0:
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0u + 0x00000002u;
    mem_w32(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x08996208u; c->r[5] = 0u + 0x00000033u; func_0896a7b8(c, ram); }
    { goto L_08996920; }
L_08996210:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = 0u + 0x00000001u;
    mem_w8(ram, c->r[2] + 0x00000011u, c->r[3]);
    c->r[2] = 0u + 0x00000001u;
    mem_w32(ram, c->r[30] + 0x00000024u, c->r[2]);
L_08996224:
    { c->r[31] = 0x0899622cu; func_0896a3c0(c, ram); }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000024u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[2] = ((s32)c->r[3] < (s32)c->r[2]) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_08996248; }
    { goto L_08996318; }
L_08996248:
    { c->r[31] = 0x08996250u; func_0896a3c0(c, ram); }
    c->r[4] = c->r[2] + 0u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000024u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 3;
    c->r[2] = c->r[2] + c->r[3];
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[4];
    c->r[2] = c->r[2] + 0x00000020u;
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000005u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_089962b4; }
    { c->r[31] = 0x08996284u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000024u); func_0896a458(c, ram); }
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x0000020eu);
    c->r[2] = 0u + 0x00000001u;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_089962b4; }
    { c->r[31] = 0x0899629cu; c->r[4] = mem_r32(ram, c->r[30] + 0x00000024u); func_0896a458(c, ram); }
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x0000020fu);
    c->r[2] = 0u + 0x00000001u;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_089962b4; }
    { goto L_089962e8; }
L_089962b4:
    { c->r[31] = 0x089962bcu; func_0896a3c0(c, ram); }
    c->r[4] = c->r[2] + 0u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000024u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 3;
    c->r[2] = c->r[2] + c->r[3];
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[4];
    c->r[3] = c->r[2] + 0x00000020u;
    c->r[2] = 0u + 0x00000001u;
    { mem_w8(ram, c->r[3] + 0x00000005u, c->r[2]); goto L_08996308; }
L_089962e8:
    c->r[5] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[4] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = 0u + 0x00000001u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000024u);
    c->r[2] = c->r[3] << (c->r[2] & 31u);
    c->r[3] = mem_r8(ram, c->r[4] + 0x00000011u);
    c->r[2] = c->r[3] | c->r[2];
    mem_w8(ram, c->r[5] + 0x00000011u, c->r[2]);
L_08996308:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000024u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000024u, c->r[2]); goto L_08996224; }
L_08996318:
    { c->r[31] = 0x08996320u; func_0896a284(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x00000011u;
    c->r[4] = c->r[3] + 0u;
    c->r[5] = 0u + 0x0000000fu;
    c->r[6] = 0u + 0x00000009u;
    c->r[7] = 0u + 0x00000001u;
    { c->r[31] = 0x08996344u; c->r[8] = c->r[2] + 0u; func_0896cc50(c, ram); }
    { c->r[31] = 0x0899634cu; func_0896a284(c, ram); }
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x08996358u; c->r[5] = 0u + 0x0000000fu; func_0896ccf0(c, ram); }
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0u + 0x00000015u;
    { mem_w8(ram, c->r[3] + 0x0000000eu, c->r[2]); goto L_08996920; }
L_08996368:
    { c->r[31] = 0x08996370u; c->r[4] = 0u + 0x00000001u; func_089c5e18(c, ram); }
    { int _c = (c->r[2] == 0u); if (_c) goto L_0899644c; }
    c->r[2] = 0u + 0x00000001u;
    mem_w32(ram, c->r[30] + 0x00000028u, c->r[2]);
L_08996380:
    { c->r[31] = 0x08996388u; func_0896a3c0(c, ram); }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000028u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[2] = ((s32)c->r[3] < (s32)c->r[2]) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_089963a4; }
    { goto L_089963f4; }
L_089963a4:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000028u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 3;
    c->r[2] = 0x08ab0000u;
    c->r[2] = c->r[2] + 0xffff9918u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000007u);
    { int _c = ((s32)c->r[2] >= 0); if (_c) goto L_089963e4; }
    { c->r[31] = 0x089963d8u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000028u); func_0896a458(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = 0u + 0x00000001u;
    mem_w8(ram, c->r[3] + 0x0000020fu, c->r[2]);
L_089963e4:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000028u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000028u, c->r[2]); goto L_08996380; }
L_089963f4:
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0u + 0x00000007u;
    { c->r[31] = 0x08996404u; mem_w8(ram, c->r[3] + 0x00000010u, c->r[2]); func_0896a284(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x00000010u;
    c->r[4] = c->r[3] + 0u;
    c->r[5] = 0u + 0x0000000fu;
    c->r[6] = 0u + 0x00000001u;
    c->r[7] = 0u + 0x00000001u;
    { c->r[31] = 0x08996428u; c->r[8] = c->r[2] + 0u; func_0896cc50(c, ram); }
    { c->r[31] = 0x08996430u; func_0896a284(c, ram); }
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x0899643cu; c->r[5] = 0u + 0x0000000fu; func_0896ccf0(c, ram); }
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0u + 0x00000018u;
    { mem_w8(ram, c->r[3] + 0x0000000eu, c->r[2]); goto L_08996920; }
L_0899644c:
    { c->r[31] = 0x08996454u; c->r[4] = 0u + 0x00000001u; func_089c5f10(c, ram); }
    { int _c = (c->r[2] == 0u); if (_c) goto L_08996920; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0u + 0x0000000bu;
    { mem_w8(ram, c->r[3] + 0x0000000eu, c->r[2]); goto L_08996920; }
L_0899646c:
    { c->r[31] = 0x08996474u; c->r[4] = 0u + 0x00000001u; func_089c5e18(c, ram); }
    { int _c = (c->r[2] == 0u); if (_c) goto L_089964b8; }
    { c->r[31] = 0x08996484u; func_0896a284(c, ram); }
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0u + 0x0000000fu;
    c->r[6] = 0u + 0x00000008u;
    c->r[7] = 0u + 0u;
    { c->r[31] = 0x0899649cu; c->r[8] = 0u + 0u; func_0896cc50(c, ram); }
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0u + 0x00000006u;
    mem_w32(ram, c->r[3] + 0x00000004u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0u + 0x00000019u;
    { mem_w8(ram, c->r[3] + 0x0000000eu, c->r[2]); goto L_08996920; }
L_089964b8:
    { c->r[31] = 0x089964c0u; c->r[4] = 0u + 0x00000001u; func_089c5f10(c, ram); }
    { int _c = (c->r[2] == 0u); if (_c) goto L_08996920; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0u + 0x0000000bu;
    { mem_w8(ram, c->r[3] + 0x0000000eu, c->r[2]); goto L_08996920; }
L_089964d8:
    { c->r[31] = 0x089964e0u; func_0896a284(c, ram); }
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0u + 0x0000000fu;
    { c->r[31] = 0x089964f0u; c->r[6] = 0u + 0x0000000du; func_0896d35c(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000028u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000028u);
    mem_w32(ram, c->r[30] + 0x00000040u, c->r[2]);
    c->r[2] = 0u + 0xffffffffu;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000040u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_08996524; }
    c->r[2] = 0u + 0x00000001u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000040u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_08996590; }
    { goto L_08996920; }
L_08996524:
    mem_w32(ram, c->r[30] + 0x00000024u, 0u);
L_08996528:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000024u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000006u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_08996540; }
    { goto L_08996570; }
L_08996540:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000024u);
    c->r[3] = c->r[2] << 2;
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = c->r[2] + 0x00000014u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    { c->r[31] = 0x08996560u; c->r[4] = c->r[2] + 0u; func_0896e7c0(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000024u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000024u, c->r[2]); goto L_08996528; }
L_08996570:
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0u + 0x00000002u;
    mem_w32(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x08996588u; c->r[5] = 0u + 0x00000033u; func_0896a7b8(c, ram); }
    { goto L_08996920; }
L_08996590:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x0000001cu;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    { c->r[31] = 0x089965a4u; c->r[4] = c->r[2] + 0u; func_0896e7c0(c, ram); }
    { c->r[31] = 0x089965acu; c->r[4] = 0u + 0u; func_0880b1a0(c, ram); }
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0u + 0x00000016u;
    { mem_w8(ram, c->r[3] + 0x0000000eu, c->r[2]); goto L_08996920; }
L_089965bc:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x0000001cu;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000ac8u;
    { c->r[31] = 0x089965d8u; c->r[5] = c->r[2] + 0u; func_089cb820(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000028u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000028u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_089965f0; }
    { goto L_08996920; }
L_089965f0:
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x089965fcu; c->r[4] = c->r[4] + 0xffffc810u; func_089f8f14(c, ram); }
    { int _c = (c->r[2] != 0u); if (_c) goto L_0899660c; }
    { goto L_08996920; }
L_0899660c:
    mem_w32(ram, c->r[30] + 0x00000024u, 0u);
L_08996610:
    { c->r[31] = 0x08996618u; func_0896a3c0(c, ram); }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000024u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[2] = ((s32)c->r[3] < (s32)c->r[2]) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_08996634; }
    { goto L_08996644; }
L_08996634:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000024u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000024u, c->r[2]); goto L_08996610; }
L_08996644:
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0u + 0x00000001u;
    { c->r[31] = 0x08996654u; mem_w8(ram, c->r[3] + 0x00000058u, c->r[2]); func_0885d97c(c, ram); }
    { c->r[31] = 0x0899665cu; c->r[4] = 0u + 0x00000001u; func_089c6e0c(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = mem_r8(ram, c->r[2] + 0x00000010u);
    c->r[2] = 0u + 0x00000006u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_08996798; }
    c->r[4] = 0x08a60000u;
    c->r[4] = c->r[4] + 0x00005260u;
    { c->r[31] = 0x08996680u; c->r[5] = 0u + 0x00000005u; func_089d7208(c, ram); }
    { c->r[31] = 0x08996688u; func_089794c4(c, ram); }
    c->r[2] = mem_r8(ram, c->r[2] + 0x0000000fu);
    { c->r[31] = 0x08996694u; c->r[4] = c->r[2] + 0u; func_0880b0d4(c, ram); }
    c->r[4] = 0x08a60000u;
    c->r[4] = c->r[4] + 0x00005260u;
    { c->r[31] = 0x089966a4u; c->r[5] = 0u + 0x00000006u; func_089d7194(c, ram); }
    c->r[2] = 0u + 0x00000001u;
    mem_w32(ram, c->r[30] + 0x00000024u, c->r[2]);
L_089966ac:
    { c->r[31] = 0x089966b4u; func_0896a3c0(c, ram); }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000024u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[2] = ((s32)c->r[3] < (s32)c->r[2]) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_089966d0; }
    { goto L_08996748; }
L_089966d0:
    { c->r[31] = 0x089966d8u; func_0896a3c0(c, ram); }
    c->r[4] = c->r[2] + 0u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000024u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 3;
    c->r[2] = c->r[2] + c->r[3];
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[4];
    c->r[2] = c->r[2] + 0x00000020u;
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000005u);
    c->r[2] = 0u + 0x00000001u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_08996738; }
    { c->r[31] = 0x08996710u; func_0896a284(c, ram); }
    c->r[4] = c->r[2] + 0u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000024u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 5;
    c->r[2] = c->r[2] + c->r[3];
    c->r[2] = c->r[2] << 4;
    c->r[2] = c->r[2] + c->r[4];
    c->r[3] = c->r[2] + 0x00000280u;
    c->r[2] = 0u + 0x00000001u;
    mem_w8(ram, c->r[3] + 0x0000000fu, c->r[2]);
L_08996738:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000024u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000024u, c->r[2]); goto L_089966ac; }
L_08996748:
    { c->r[31] = 0x08996750u; func_089794c4(c, ram); }
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x0000000eu);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000af4u;
    { c->r[31] = 0x08996764u; c->r[5] = c->r[2] + 0u; func_0896df68(c, ram); }
    { c->r[31] = 0x0899676cu; func_089794c4(c, ram); }
    c->r[2] = mem_r8(ram, c->r[2] + 0x0000000eu);
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08a60000u;
    c->r[2] = c->r[2] + 0xffffa5b0u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000000u);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x08996790u; c->r[5] = c->r[2] + 0u; func_0896a7b8(c, ram); }
    { goto L_08996920; }
L_08996798:
    { c->r[31] = 0x089967a0u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u); func_089750b4(c, ram); }
    { c->r[31] = 0x089967a8u; c->r[4] = 0u + 0u; func_0880b118(c, ram); }
    { c->r[31] = 0x089967b0u; func_08994730(c, ram); }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x089967bcu; c->r[5] = 0u + 0x00000011u; func_0896a7b8(c, ram); }
    { goto L_08996920; }
L_089967c4:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000004u);
    { int _c = ((s32)c->r[2] > 0); if (_c) goto L_08996800; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x0000001cu;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    { c->r[31] = 0x089967e8u; c->r[4] = c->r[2] + 0u; func_0896e7c0(c, ram); }
    { c->r[31] = 0x089967f0u; c->r[4] = 0u + 0u; func_0880b1a0(c, ram); }
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0u + 0x00000017u;
    { mem_w8(ram, c->r[3] + 0x0000000eu, c->r[2]); goto L_08996920; }
L_08996800:
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000004u);
    c->r[2] = c->r[2] + 0xffffffffu;
    { mem_w32(ram, c->r[3] + 0x00000004u, c->r[2]); goto L_08996920; }
L_08996818:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000004u);
    { int _c = ((s32)c->r[2] > 0); if (_c) goto L_08996850; }
    { c->r[31] = 0x08996830u; c->r[4] = 0u + 0x00000001u; func_089c5e18(c, ram); }
    { int _c = (c->r[2] == 0u); if (_c) goto L_08996920; }
    { c->r[31] = 0x08996840u; c->r[4] = 0u + 0u; func_0880b1a0(c, ram); }
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0u + 0x00000017u;
    { mem_w8(ram, c->r[3] + 0x0000000eu, c->r[2]); goto L_08996920; }
L_08996850:
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000004u);
    c->r[2] = c->r[2] + 0xffffffffu;
    { mem_w32(ram, c->r[3] + 0x00000004u, c->r[2]); goto L_08996920; }
L_08996868:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x0000001cu;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000ac8u;
    { c->r[31] = 0x08996884u; c->r[5] = c->r[2] + 0u; func_089cb820(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000028u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000028u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_0899689c; }
    { goto L_08996920; }
L_0899689c:
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x089968a8u; c->r[4] = c->r[4] + 0xffffc810u; func_089f8f14(c, ram); }
    { int _c = (c->r[2] != 0u); if (_c) goto L_089968b8; }
    { goto L_08996920; }
L_089968b8:
    { c->r[31] = 0x089968c0u; func_0885d97c(c, ram); }
    { c->r[31] = 0x089968c8u; c->r[4] = 0u + 0x00000001u; func_089c6e0c(c, ram); }
    { c->r[31] = 0x089968d0u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u); func_089750b4(c, ram); }
    { c->r[31] = 0x089968d8u; func_0896a284(c, ram); }
    { c->r[31] = 0x089968e0u; c->r[4] = c->r[2] + 0u; func_0896cb9c(c, ram); }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x089968ecu; c->r[5] = 0u + 0x00000002u; func_0896a7b8(c, ram); }
    { goto L_08996920; }
L_089968f4:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x0000001cu;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    { c->r[31] = 0x08996908u; c->r[4] = c->r[2] + 0u; func_0896e8f8(c, ram); }
    { int _c = (c->r[2] == 0u); if (_c) goto L_08996918; }
    { goto L_08996920; }
L_08996918:
    { c->r[31] = 0x08996920u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u); func_0896a824(c, ram); }
L_08996920:
    { c->r[31] = 0x08996928u; func_08972d0c(c, ram); }
    { goto L_08996c48; }
L_08996930:
    c->r[1] = 0x08a50000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffff9f04u);
    c->r[4] = 0x08a70000u;
    c->r[4] = c->r[4] + 0xffffb640u;
    { c->r[31] = 0x08996948u; c->f[12] = c->f[0]; func_089f1210(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r8(ram, c->r[2] + 0x0000000eu);
    mem_w32(ram, c->r[30] + 0x00000054u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000054u);
    c->r[2] = (c->r[3] < 0x0000002cu) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_08996bb0; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000054u);
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08a50000u;
    c->r[2] = c->r[2] + 0xffff9fbcu;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    { u32 _t = c->r[2]; switch (_t) { case 0x08995498u: goto L_08995498; case 0x08995548u: goto L_08995548; case 0x0899568cu: goto L_0899568c; case 0x08995938u: goto L_08995938; case 0x089959c0u: goto L_089959c0; case 0x08995a14u: goto L_08995a14; case 0x08995b08u: goto L_08995b08; case 0x08995b70u: goto L_08995b70; case 0x08995cf0u: goto L_08995cf0; case 0x08995d8cu: goto L_08995d8c; case 0x08995e54u: goto L_08995e54; case 0x08995f84u: goto L_08995f84; case 0x089960b8u: goto L_089960b8; case 0x08996158u: goto L_08996158; case 0x08996368u: goto L_08996368; case 0x0899646cu: goto L_0899646c; case 0x089964d8u: goto L_089964d8; case 0x089965bcu: goto L_089965bc; case 0x089967c4u: goto L_089967c4; case 0x08996818u: goto L_08996818; case 0x08996868u: goto L_08996868; case 0x089968f4u: goto L_089968f4; case 0x08996920u: goto L_08996920; case 0x08996984u: goto L_08996984; case 0x089969f4u: goto L_089969f4; case 0x08996a10u: goto L_08996a10; case 0x08996a2cu: goto L_08996a2c; case 0x08996ad8u: goto L_08996ad8; case 0x08996b48u: goto L_08996b48; case 0x08996b64u: goto L_08996b64; case 0x08996b80u: goto L_08996b80; case 0x08996b9cu: goto L_08996b9c; case 0x08996bb0u: goto L_08996bb0; default: recomp_trap_unknown_indirect(c, ram, 0x0899697cu, _t); return; } }
L_08996984:
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000af4u;
    { c->r[31] = 0x08996994u; c->r[5] = 0u + 0x0000007bu; func_088145a8(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000048u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000048u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_089969bc; }
    c->r[2] = 0u + 0x00000001u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000048u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_089969d8; }
    { goto L_08996bb0; }
L_089969bc:
    c->r[4] = 0x08a50000u;
    c->r[4] = c->r[4] + 0xffff9ef8u;
    c->r[5] = 0u + 0x00001557u;
    { c->r[31] = 0x089969d0u; c->r[6] = 0u + 0u; func_08928cb8(c, ram); }
    { goto L_08996bb0; }
L_089969d8:
    c->r[4] = 0x08a50000u;
    c->r[4] = c->r[4] + 0xffff9ef8u;
    c->r[5] = 0u + 0x00001558u;
    { c->r[31] = 0x089969ecu; c->r[6] = 0u + 0u; func_08928cb8(c, ram); }
    { goto L_08996bb0; }
L_089969f4:
    c->r[4] = 0x08a50000u;
    c->r[4] = c->r[4] + 0xffff9ef8u;
    c->r[5] = 0u + 0x00001539u;
    { c->r[31] = 0x08996a08u; c->r[6] = 0u + 0u; func_08928cb8(c, ram); }
    { goto L_08996bb0; }
L_08996a10:
    c->r[4] = 0x08a50000u;
    c->r[4] = c->r[4] + 0xffff9ef8u;
    c->r[5] = 0u + 0x00001539u;
    { c->r[31] = 0x08996a24u; c->r[6] = 0u + 0u; func_08928cb8(c, ram); }
    { goto L_08996bb0; }
L_08996a2c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000010u);
    mem_w32(ram, c->r[30] + 0x0000004cu, c->r[2]);
    c->r[2] = 0u + 0x00000001u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000004cu);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_08996aa0; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000004cu);
    c->r[2] = ((s32)c->r[3] < (s32)0x00000002u) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_08996a6c; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000004cu);
    { int _c = (c->r[2] == 0u); if (_c) goto L_08996a84; }
    { goto L_08996bb0; }
L_08996a6c:
    c->r[2] = 0u + 0x00000002u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000004cu);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_08996abc; }
    { goto L_08996bb0; }
L_08996a84:
    c->r[4] = 0x08a50000u;
    c->r[4] = c->r[4] + 0xffff9ef8u;
    c->r[5] = 0u + 0x0000161bu;
    { c->r[31] = 0x08996a98u; c->r[6] = 0u + 0u; func_08928cb8(c, ram); }
    { goto L_08996bb0; }
L_08996aa0:
    c->r[4] = 0x08a50000u;
    c->r[4] = c->r[4] + 0xffff9ef8u;
    c->r[5] = 0u + 0x0000161cu;
    { c->r[31] = 0x08996ab4u; c->r[6] = 0u + 0u; func_08928cb8(c, ram); }
    { goto L_08996bb0; }
L_08996abc:
    c->r[4] = 0x08a50000u;
    c->r[4] = c->r[4] + 0xffff9ef8u;
    c->r[5] = 0u + 0x0000161du;
    { c->r[31] = 0x08996ad0u; c->r[6] = 0u + 0u; func_08928cb8(c, ram); }
    { goto L_08996bb0; }
L_08996ad8:
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000af4u;
    { c->r[31] = 0x08996ae8u; c->r[5] = 0u + 0x0000007cu; func_088145a8(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000050u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000050u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_08996b10; }
    c->r[2] = 0u + 0x00000001u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000050u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_08996b2c; }
    { goto L_08996bb0; }
L_08996b10:
    c->r[4] = 0x08a50000u;
    c->r[4] = c->r[4] + 0xffff9ef8u;
    c->r[5] = 0u + 0x00001559u;
    { c->r[31] = 0x08996b24u; c->r[6] = 0u + 0u; func_08928cb8(c, ram); }
    { goto L_08996bb0; }
L_08996b2c:
    c->r[4] = 0x08a50000u;
    c->r[4] = c->r[4] + 0xffff9ef8u;
    c->r[5] = 0u + 0x0000155bu;
    { c->r[31] = 0x08996b40u; c->r[6] = 0u + 0u; func_08928cb8(c, ram); }
    { goto L_08996bb0; }
L_08996b48:
    c->r[4] = 0x08a50000u;
    c->r[4] = c->r[4] + 0xffff9ef8u;
    c->r[5] = 0u + 0x00001528u;
    { c->r[31] = 0x08996b5cu; c->r[6] = 0u + 0u; func_08928cb8(c, ram); }
    { goto L_08996bb0; }
L_08996b64:
    c->r[4] = 0x08a50000u;
    c->r[4] = c->r[4] + 0xffff9ef8u;
    c->r[5] = 0u + 0x0000155du;
    { c->r[31] = 0x08996b78u; c->r[6] = 0u + 0u; func_08928cb8(c, ram); }
    { goto L_08996bb0; }
L_08996b80:
    c->r[4] = 0x08a50000u;
    c->r[4] = c->r[4] + 0xffff9ef8u;
    c->r[5] = 0u + 0x00001529u;
    { c->r[31] = 0x08996b94u; c->r[6] = 0u + 0u; func_08928cb8(c, ram); }
    { goto L_08996bb0; }
L_08996b9c:
    c->r[4] = 0x08a50000u;
    c->r[4] = c->r[4] + 0xffff9ef8u;
    c->r[5] = 0u + 0u;
    { c->r[31] = 0x08996bb0u; c->r[6] = 0u + 0xffffffffu; func_08928cb8(c, ram); }
L_08996bb0:
    c->r[4] = 0x08a70000u;
    { c->r[31] = 0x08996bbcu; c->r[4] = c->r[4] + 0xffffb640u; func_089f147c(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x0000001cu;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000ac8u;
    { c->r[31] = 0x08996bd8u; c->r[5] = c->r[2] + 0u; func_089cb820(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000028u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000028u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_08996c48; }
    { c->r[31] = 0x08996bf0u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000028u); func_08930048(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000024u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000024u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000002u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_08996c48; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000024u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000006u) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_08996c48; }
    c->r[1] = 0x08a50000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffff9f08u);
    c->r[4] = 0x08a70000u;
    c->r[4] = c->r[4] + 0xffffb640u;
    { c->r[31] = 0x08996c2cu; c->f[12] = c->f[0]; func_089f1210(c, ram); }
    { c->r[31] = 0x08996c34u; c->r[4] = mem_r32(ram, c->r[30] + 0x0000000cu); func_0896e48c(c, ram); }
    { c->r[31] = 0x08996c3cu; c->r[4] = c->r[2] + 0u; func_089734b4(c, ram); }
    c->r[4] = 0x08a70000u;
    { c->r[31] = 0x08996c48u; c->r[4] = c->r[4] + 0xffffb640u; func_089f147c(c, ram); }
L_08996c48:
    c->r[2] = 0u + 0u;
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000068u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000064u);
    c->r[16] = mem_r32(ram, c->r[29] + 0x00000060u);
    { c->r[29] = c->r[29] + 0x00000070u; return; }
    return; /* fell out of func_08995498 */
}

/* func_08998ebc  0x08998ebc..0x08998ef4  56 bytes, source=sweep */
void func_08998ebc(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08998ebcu);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_wf32(ram, c->r[30] + 0x00000000u, c->f[12]);
    c->r[1] = 0x08ab0000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00002b80u);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000000u);
    c->f[0] = c->f[0] + c->f[1];
    c->r[1] = 0x08ab0000u;
    mem_wf32(ram, c->r[1] + 0x00002b80u, c->f[0]);
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_08998ebc */
}

/* func_08999d98  0x08999d98..0x0899a064  716 bytes, source=fde */
void func_08999d98(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08999d98u);
L_08999d98:
    c->r[29] = c->r[29] + 0xffffffc0u;
    mem_w32(ram, c->r[29] + 0x00000034u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000030u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[2] = c->r[5] + 0u;
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[6]);
    mem_w8(ram, c->r[30] + 0x00000004u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x000000e0u;
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
    c->r[2] = mem_r8(ram, c->r[30] + 0x00000004u);
    mem_w32(ram, c->r[30] + 0x00000020u, c->r[2]);
    c->r[2] = 0u + 0x00000007u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000020u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_0899a04c; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[2] = ((s32)c->r[3] < (s32)0x00000008u) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_08999e04; }
    c->r[2] = 0u + 0x00000001u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000020u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_08999e0c; }
    { goto L_0899a04c; }
L_08999e04:
    { goto L_0899a04c; }
L_08999e0c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r8(ram, c->r[2] + 0x0000000eu);
    mem_w32(ram, c->r[30] + 0x0000001cu, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = (c->r[3] < 0x0000002cu) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_0899a04c; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08a50000u;
    c->r[2] = c->r[2] + 0xffffa47cu;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    { u32 _t = c->r[2]; switch (_t) { case 0x08999d98u: goto L_08999d98; case 0x08999e48u: goto L_08999e48; case 0x08999e80u: goto L_08999e80; case 0x08999f6cu: goto L_08999f6c; case 0x08999fccu: goto L_08999fcc; case 0x0899a020u: goto L_0899a020; case 0x0899a04cu: goto L_0899a04c; default: recomp_trap_unknown_indirect(c, ram, 0x08999e40u, _t); return; } }
L_08999e48:
    { c->r[31] = 0x08999e50u; c->r[4] = mem_r32(ram, c->r[30] + 0x0000000cu); func_0896e3a0(c, ram); }
    { c->r[31] = 0x08999e58u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u); func_0899e5dc(c, ram); }
    { c->r[31] = 0x08999e60u; c->r[4] = 0u + 0x000000abu; func_089991b0(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    mem_w8(ram, c->r[2] + 0x00000010u, 0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    mem_w8(ram, c->r[2] + 0x00000011u, 0u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0u + 0x00000012u;
    { mem_w8(ram, c->r[3] + 0x0000000eu, c->r[2]); goto L_0899a04c; }
L_08999e80:
    { c->r[31] = 0x08999e88u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u); func_0899e5dc(c, ram); }
    { c->r[31] = 0x08999e90u; c->r[4] = 0u + 0x000000abu; func_089991b0(c, ram); }
    c->r[2] = 0u + 0x00000001u;
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]);
    mem_w32(ram, c->r[30] + 0x00000014u, 0u);
L_08999e9c:
    { c->r[31] = 0x08999ea4u; func_0896a3c0(c, ram); }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[2] = ((s32)c->r[3] < (s32)c->r[2]) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_08999ec0; }
    { goto L_08999f40; }
L_08999ec0:
    { c->r[31] = 0x08999ec8u; func_0896a3e4(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    { int _c = (c->r[2] != c->r[3]); if (_c) goto L_08999ee0; }
    { goto L_08999f30; }
L_08999ee0:
    { c->r[31] = 0x08999ee8u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000014u); func_0896a458(c, ram); }
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x0000020eu);
    c->r[2] = 0u + 0x00000001u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_08999f00; }
    { goto L_08999f30; }
L_08999f00:
    { c->r[31] = 0x08999f08u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000014u); func_0896a458(c, ram); }
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000204u);
    c->r[2] = c->r[2] + 0x00000008u;
    mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[3] = mem_r8(ram, c->r[2] + 0x00000001u);
    c->r[2] = 0u + 0x000000abu;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_08999f30; }
    { mem_w32(ram, c->r[30] + 0x00000010u, 0u); goto L_08999f40; }
L_08999f30:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]); goto L_08999e9c; }
L_08999f40:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = 0u + 0x00000001u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_0899a04c; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0u + 0x0000000au;
    mem_w32(ram, c->r[3] + 0x00000004u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0u + 0x00000013u;
    { mem_w8(ram, c->r[3] + 0x0000000eu, c->r[2]); goto L_0899a04c; }
L_08999f6c:
    { c->r[31] = 0x08999f74u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u); func_0899e5dc(c, ram); }
    { c->r[31] = 0x08999f7cu; c->r[4] = 0u + 0x000000abu; func_089991b0(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000004u);
    { int _c = ((s32)c->r[2] > 0); if (_c) goto L_08999fb4; }
    { c->r[31] = 0x08999f94u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u); func_0899f550(c, ram); }
    { c->r[31] = 0x08999f9cu; func_0899d924(c, ram); }
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0u + 0x00000004u;
    mem_w32(ram, c->r[3] + 0x00000004u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0u + 0x00000014u;
    mem_w8(ram, c->r[3] + 0x0000000eu, c->r[2]);
L_08999fb4:
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000004u);
    c->r[2] = c->r[2] + 0xffffffffu;
    { mem_w32(ram, c->r[3] + 0x00000004u, c->r[2]); goto L_0899a04c; }
L_08999fcc:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000004u);
    { int _c = ((s32)c->r[2] > 0); if (_c) goto L_0899a008; }
    { c->r[31] = 0x08999fe4u; c->r[4] = 0u + 0x00000002u; func_08924620(c, ram); }
    { c->r[31] = 0x08999fecu; c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u); func_0899fb14(c, ram); }
    { c->r[31] = 0x08999ff4u; func_0896a284(c, ram); }
    { c->r[31] = 0x08999ffcu; c->r[4] = c->r[2] + 0u; func_0896cb9c(c, ram); }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x0899a008u; c->r[5] = 0u + 0x00000002u; func_0896a7b8(c, ram); }
L_0899a008:
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000004u);
    c->r[2] = c->r[2] + 0xffffffffu;
    { mem_w32(ram, c->r[3] + 0x00000004u, c->r[2]); goto L_0899a04c; }
L_0899a020:
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x0899a02cu; c->r[4] = c->r[4] + 0xffffc810u; func_089f8f14(c, ram); }
    { int _c = (c->r[2] != 0u); if (_c) goto L_0899a03c; }
    { goto L_0899a04c; }
L_0899a03c:
    { c->r[31] = 0x0899a044u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u); func_089750b4(c, ram); }
    { c->r[31] = 0x0899a04cu; c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u); func_0896a824(c, ram); }
L_0899a04c:
    c->r[2] = 0u + 0u;
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000034u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000030u);
    { c->r[29] = c->r[29] + 0x00000040u; return; }
    return; /* fell out of func_08999d98 */
}

/* func_0899fc08  0x0899fc08..0x0899fe44  572 bytes, source=fde */
void func_0899fc08(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0899fc08u);
    c->r[29] = c->r[29] + 0xffffffc0u;
    mem_w32(ram, c->r[29] + 0x00000034u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000030u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[2] = 0u + 0x00000001u;
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[2]);
    mem_w8(ram, c->r[30] + 0x00000008u, 0u);
    mem_w32(ram, c->r[30] + 0x0000000cu, 0u);
    mem_w32(ram, c->r[30] + 0x00000010u, 0u);
L_0899fc30:
    { c->r[31] = 0x0899fc38u; func_0896a3c0(c, ram); }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[2] = ((s32)c->r[3] < (s32)c->r[2]) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_0899fc54; }
    { goto L_0899fd30; }
L_0899fc54:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_0899fc90; }
    { c->r[31] = 0x0899fc68u; func_0896a3c0(c, ram); }
    c->r[4] = c->r[2] + 0u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 3;
    c->r[2] = c->r[2] + c->r[3];
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[4];
    c->r[2] = c->r[2] + 0x00000020u;
    { mem_w8(ram, c->r[2] + 0x00000004u, 0u); goto L_0899fd20; }
L_0899fc90:
    { c->r[31] = 0x0899fc98u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000010u); func_0896a458(c, ram); }
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x0000020eu);
    c->r[2] = 0u + 0x00000001u;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_0899fcc8; }
    { c->r[31] = 0x0899fcb0u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000010u); func_0896a458(c, ram); }
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x0000020fu);
    c->r[2] = 0u + 0x00000001u;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_0899fcc8; }
    { goto L_0899fd14; }
L_0899fcc8:
    { c->r[31] = 0x0899fcd0u; func_0896a3c0(c, ram); }
    c->r[4] = c->r[2] + 0u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 3;
    c->r[2] = c->r[2] + c->r[3];
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[4];
    c->r[3] = c->r[2] + 0x00000020u;
    c->r[2] = 0u + 0x00000001u;
    mem_w8(ram, c->r[3] + 0x00000004u, c->r[2]);
    c->r[3] = 0u + 0x00000001u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = c->r[3] << (c->r[2] & 31u);
    c->r[3] = mem_r8(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[3] | c->r[2];
    { mem_w8(ram, c->r[30] + 0x00000008u, c->r[2]); goto L_0899fd20; }
L_0899fd14:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x00000001u;
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
L_0899fd20:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]); goto L_0899fc30; }
L_0899fd30:
    { c->r[31] = 0x0899fd38u; func_089794c4(c, ram); }
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000001u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_0899fd58; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    { int _c = (c->r[2] != 0u); if (_c) goto L_0899fe20; }
    { mem_w32(ram, c->r[30] + 0x00000004u, 0u); goto L_0899fe20; }
L_0899fd58:
    mem_w32(ram, c->r[30] + 0x00000020u, 0u);
    mem_w32(ram, c->r[30] + 0x00000024u, 0u);
    mem_w32(ram, c->r[30] + 0x00000010u, 0u);
L_0899fd64:
    { c->r[31] = 0x0899fd6cu; func_0896a3c0(c, ram); }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[2] = ((s32)c->r[3] < (s32)c->r[2]) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_0899fd88; }
    { goto L_0899fe04; }
L_0899fd88:
    { c->r[31] = 0x0899fd90u; func_0896a3c0(c, ram); }
    c->r[4] = c->r[2] + 0u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 3;
    c->r[2] = c->r[2] + c->r[3];
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[4];
    c->r[2] = c->r[2] + 0x00000020u;
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000004u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_0899fdf4; }
    { c->r[31] = 0x0899fdc4u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000010u); func_0896dbc0(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[30];
    c->r[4] = c->r[2] + 0x00000020u;
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[30];
    c->r[2] = c->r[2] + 0x00000020u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000001u;
    mem_w32(ram, c->r[4] + 0x00000000u, c->r[2]);
L_0899fdf4:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]); goto L_0899fd64; }
L_0899fe04:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_0899fe1c; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000024u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_0899fe20; }
L_0899fe1c:
    mem_w32(ram, c->r[30] + 0x00000004u, 0u);
L_0899fe20:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r8(ram, c->r[30] + 0x00000008u);
    mem_w8(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000034u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000030u);
    { c->r[29] = c->r[29] + 0x00000040u; return; }
    return; /* fell out of func_0899fc08 */
}

/* func_089a39fc  0x089a39fc..0x089a3b48  332 bytes, source=fde */
void func_089a39fc(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089a39fcu);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    { c->r[31] = 0x089a3a14u; func_0896dc4c(c, ram); }
    { c->r[31] = 0x089a3a1cu; mem_w32(ram, c->r[30] + 0x00000000u, c->r[2]); func_0896dc4c(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = 0u + 0x00000001u;
    c->r[2] = c->r[2] - c->r[3];
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[2]);
    mem_w32(ram, c->r[30] + 0x00000008u, 0u);
L_089a3a30:
    { c->r[31] = 0x089a3a38u; func_089794c4(c, ram); }
    c->r[3] = mem_r8(ram, c->r[2] + 0x00000012u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = ((s32)c->r[2] < (s32)c->r[3]) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_089a3a54; }
    { goto L_089a3b34; }
L_089a3a54:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + 0x00000012u;
    c->r[4] = c->r[2] + 0u;
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x089a3a70u; c->r[6] = 0u + 0x00000001u; func_088f4fdc(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + 0x00000013u;
    c->r[4] = c->r[2] + 0u;
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x089a3a8cu; c->r[6] = 0u + 0x00000001u; func_088f4fdc(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + 0x00000018u;
    c->r[4] = c->r[2] + 0u;
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000004u);
    { c->r[31] = 0x089a3aa8u; c->r[6] = 0u + 0x00000001u; func_088f4fdc(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + 0x00000019u;
    c->r[4] = c->r[2] + 0u;
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000004u);
    { c->r[31] = 0x089a3ac4u; c->r[6] = 0u + 0x00000001u; func_088f4fdc(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + 0x00000012u;
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x089a3adcu; c->r[5] = 0u + 0x00000001u; func_088f49b8(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + 0x00000013u;
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x089a3af4u; c->r[5] = 0u + 0x00000001u; func_088f49b8(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + 0x00000018u;
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x089a3b0cu; c->r[5] = 0u + 0x00000001u; func_088f49b8(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + 0x00000019u;
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x089a3b24u; c->r[5] = 0u + 0x00000001u; func_088f49b8(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]); goto L_089a3a30; }
L_089a3b34:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_089a39fc */
}

/* func_089a96dc  0x089a96dc..0x089a9980  676 bytes, source=fde */
void func_089a96dc(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089a96dcu);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000018u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[30]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[16]);
    c->r[30] = c->r[29] + 0u;
    { c->r[31] = 0x089a96f8u; mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]); func_089710e0(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000004u, 0u);
L_089a96fc:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000002u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_089a9714; }
    { goto L_089a9798; }
L_089a9714:
    { c->r[31] = 0x089a971cu; c->r[4] = mem_r32(ram, c->r[30] + 0x00000004u); func_08998c08(c, ram); }
    c->r[3] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[2] = 0x00980000u;
    c->r[2] = c->r[2] | 0x967fu;
    c->r[2] = ((s32)c->r[2] < (s32)c->r[3]) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_089a9750; }
    { c->r[31] = 0x089a973cu; c->r[4] = mem_r32(ram, c->r[30] + 0x00000004u); func_08998c08(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = 0x00980000u;
    c->r[2] = c->r[2] | 0x967fu;
    { mem_w32(ram, c->r[3] + 0x00000000u, c->r[2]); goto L_089a9788; }
L_089a9750:
    { c->r[31] = 0x089a9758u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000004u); func_08998c08(c, ram); }
    c->r[3] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[2] = 0xff670000u;
    c->r[2] = c->r[2] | 0x6981u;
    c->r[2] = ((s32)c->r[3] < (s32)c->r[2]) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_089a9788; }
    { c->r[31] = 0x089a9778u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000004u); func_08998c08(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = 0xff670000u;
    c->r[2] = c->r[2] | 0x6981u;
    mem_w32(ram, c->r[3] + 0x00000000u, c->r[2]);
L_089a9788:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000004u, c->r[2]); goto L_089a96fc; }
L_089a9798:
    { c->r[31] = 0x089a97a0u; c->r[4] = 0u + 0u; func_08971434(c, ram); }
    { c->r[31] = 0x089a97a8u; c->r[16] = c->r[2] + 0u; func_089795dc(c, ram); }
    c->r[2] = ((s32)c->r[16] < (s32)c->r[2]) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_089a97d8; }
    { c->r[31] = 0x089a97bcu; c->r[4] = 0u + 0x00000001u; func_08971434(c, ram); }
    { c->r[31] = 0x089a97c4u; c->r[16] = c->r[2] + 0u; func_089795dc(c, ram); }
    c->r[2] = ((s32)c->r[16] < (s32)c->r[2]) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_089a97d8; }
    { goto L_089a97f8; }
L_089a97d8:
    { c->r[31] = 0x089a97e0u; func_0897154c(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    mem_w8(ram, c->r[2] + 0x00000000u, c->r[3]);
    c->r[2] = 0u + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]); goto L_089a9964; }
L_089a97f8:
    { c->r[31] = 0x089a9800u; c->r[4] = 0u + 0u; func_089714dc(c, ram); }
    { int _c = (c->r[2] != 0u); if (_c) goto L_089a9848; }
    { c->r[31] = 0x089a9810u; c->r[4] = 0u + 0x00000001u; func_089714dc(c, ram); }
    { int _c = (c->r[2] != 0u); if (_c) goto L_089a9830; }
    { c->r[31] = 0x089a9820u; func_0897154c(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    { mem_w8(ram, c->r[2] + 0x00000000u, c->r[3]); goto L_089a983c; }
L_089a9830:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = 0u + 0x00000002u;
    mem_w8(ram, c->r[3] + 0x00000000u, c->r[2]);
L_089a983c:
    c->r[2] = 0u + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]); goto L_089a9964; }
L_089a9848:
    { c->r[31] = 0x089a9850u; c->r[4] = 0u + 0x00000001u; func_089714dc(c, ram); }
    { int _c = (c->r[2] != 0u); if (_c) goto L_089a9870; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = 0u + 0x00000001u;
    mem_w8(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[2] = 0u + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]); goto L_089a9964; }
L_089a9870:
    { c->r[31] = 0x089a9878u; c->r[4] = 0u + 0u; func_08971514(c, ram); }
    { int _c = (c->r[2] != 0u); if (_c) goto L_089a98c8; }
    { c->r[31] = 0x089a9888u; c->r[4] = 0u + 0x00000001u; func_08971514(c, ram); }
    { int _c = (c->r[2] != 0u); if (_c) goto L_089a98b0; }
    { c->r[31] = 0x089a9898u; func_0897154c(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    mem_w8(ram, c->r[2] + 0x00000000u, c->r[3]);
    c->r[2] = 0u + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]); goto L_089a9964; }
L_089a98b0:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = 0u + 0x00000002u;
    mem_w8(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[2] = 0u + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]); goto L_089a9964; }
L_089a98c8:
    { c->r[31] = 0x089a98d0u; c->r[4] = 0u + 0x00000001u; func_08971514(c, ram); }
    { int _c = (c->r[2] != 0u); if (_c) goto L_089a98f0; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = 0u + 0x00000001u;
    mem_w8(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[2] = 0u + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]); goto L_089a9964; }
L_089a98f0:
    { c->r[31] = 0x089a98f8u; func_089990dc(c, ram); }
    { int _c = (c->r[2] == 0u); if (_c) goto L_089a9938; }
    { c->r[31] = 0x089a9908u; func_0897154c(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    mem_w8(ram, c->r[2] + 0x00000000u, c->r[3]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r8(ram, c->r[2] + 0x00000000u);
    c->r[2] = 0u + 0xffffff80u;
    c->r[2] = c->r[3] | c->r[2];
    mem_w8(ram, c->r[4] + 0x00000000u, c->r[2]);
    c->r[2] = 0u + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]); goto L_089a9964; }
L_089a9938:
    { c->r[31] = 0x089a9940u; func_0897154c(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    mem_w8(ram, c->r[2] + 0x00000000u, c->r[3]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000000u);
    c->r[2] = c->r[2] & 0x000fu;
    mem_w8(ram, c->r[3] + 0x00000000u, c->r[2]);
    mem_w32(ram, c->r[30] + 0x00000008u, 0u);
L_089a9964:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000018u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[16] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_089a96dc */
}

/* func_089ae11c  0x089ae11c..0x089ae6a0  1412 bytes, source=fde */
void func_089ae11c(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089ae11cu);
    c->r[29] = c->r[29] + 0xffffffa0u;
    mem_w32(ram, c->r[29] + 0x00000058u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000054u, c->r[30]);
    mem_w32(ram, c->r[29] + 0x00000050u, c->r[16]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x000000e0u;
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000031u);
    c->r[2] = 0u + 0x00000001u;
    c->r[2] = c->r[2] - c->r[3];
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08ab0000u;
    c->r[2] = c->r[2] + 0x0000309cu;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[2] = c->r[2] + 0x000000e0u;
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = 0u + 0x00000001u;
    mem_w8(ram, c->r[3] + 0x00000032u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = 0u + 0x00000001u;
    mem_w8(ram, c->r[3] + 0x00000033u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = 0u + 0x00000002u;
    { c->r[31] = 0x089ae194u; mem_w8(ram, c->r[3] + 0x00000030u, c->r[2]); func_0896a3e4(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000044u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000044u);
    c->r[3] = c->r[2] << 1;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000031u);
    c->r[3] = c->r[3] + c->r[2];
    mem_w32(ram, c->r[30] + 0x00000044u, c->r[3]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000044u);
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08ab0000u;
    c->r[2] = c->r[2] + 0x000030acu;
    c->r[3] = c->r[3] + c->r[2];
    mem_w32(ram, c->r[30] + 0x00000044u, c->r[3]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000031u);
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08ab0000u;
    c->r[2] = c->r[2] + 0x000030ecu;
    c->r[2] = c->r[3] + c->r[2];
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000044u);
    c->r[4] = mem_lwl(ram, c->r[2] + 0x00000003u, c->r[4]);
    c->r[4] = mem_lwr(ram, c->r[2] + 0x00000000u, c->r[4]);
    mem_swl(ram, c->r[3] + 0x00000003u, c->r[4]);
    { c->r[31] = 0x089ae1f8u; mem_swr(ram, c->r[3] + 0x00000000u, c->r[4]); func_0896a3e4(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[4] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000031u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[4];
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08ab0000u;
    c->r[2] = c->r[2] + 0x000030acu;
    c->r[3] = c->r[3] + c->r[2];
    c->r[2] = 0u + 0x00000002u;
    { c->r[31] = 0x089ae22cu; mem_w8(ram, c->r[3] + 0x00000000u, c->r[2]); func_0896a3e4(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[4] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000031u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[4];
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08ab0000u;
    c->r[2] = c->r[2] + 0x000030acu;
    c->r[2] = c->r[3] + c->r[2];
    { c->r[31] = 0x089ae25cu; mem_w8(ram, c->r[2] + 0x00000001u, 0u); func_0896a3e4(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[4] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000031u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[4];
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08ab0000u;
    c->r[2] = c->r[2] + 0x000030acu;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000002u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_089ae400; }
    { c->r[31] = 0x089ae298u; func_0896a3e4(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[4] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000031u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[4];
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08ab0000u;
    c->r[2] = c->r[2] + 0x000030acu;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000003u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_089ae400; }
    { c->r[31] = 0x089ae2d4u; c->r[16] = mem_r32(ram, c->r[30] + 0x00000000u); func_0896a3e4(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[4] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000031u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[4];
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08ab0000u;
    c->r[2] = c->r[2] + 0x000030acu;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000002u);
    mem_w16(ram, c->r[16] + 0x00000068u, c->r[2]);
    { c->r[31] = 0x089ae30cu; c->r[16] = mem_r32(ram, c->r[30] + 0x00000000u); func_0896a3e4(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[4] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000031u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[4];
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08ab0000u;
    c->r[2] = c->r[2] + 0x000030acu;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000003u);
    mem_w16(ram, c->r[16] + 0x0000006au, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = c->r[2] + 0x00000068u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000020u;
    c->r[4] = c->r[3] + 0u;
    { c->r[31] = 0x089ae358u; c->r[5] = c->r[2] + 0u; func_089b3320(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = c->r[2] + 0x00000020u;
    c->r[2] = mem_r32(ram, c->r[3] + 0x00000000u);
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[3] + 0x00000004u);
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[3] + 0x00000008u);
    mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[3] + 0x0000000cu);
    mem_w32(ram, c->r[30] + 0x0000001cu, c->r[2]);
    c->r[1] = 0x08a50000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffffb078u);
    mem_wf32(ram, c->r[30] + 0x00000014u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = c->r[2] + 0x00000020u;
    c->r[2] = mem_r32(ram, c->r[3] + 0x00000000u);
    mem_w32(ram, c->r[30] + 0x00000020u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[3] + 0x00000004u);
    mem_w32(ram, c->r[30] + 0x00000024u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[3] + 0x00000008u);
    mem_w32(ram, c->r[30] + 0x00000028u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[3] + 0x0000000cu);
    mem_w32(ram, c->r[30] + 0x0000002cu, c->r[2]);
    c->r[1] = 0x08a50000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffffb07cu);
    mem_wf32(ram, c->r[30] + 0x00000024u, c->f[0]);
    c->r[2] = c->r[30] + 0x00000030u;
    { c->r[31] = 0x089ae3ccu; c->r[4] = c->r[2] + 0u; func_08808240(c, ram); }
    c->r[1] = 0x08a50000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffffb080u);
    mem_wf32(ram, c->r[30] + 0x00000040u, c->f[0]);
    c->r[2] = c->r[30] + 0x00000030u;
    c->r[3] = c->r[30] + 0x00000040u;
    c->r[6] = c->r[30] + 0x00000010u;
    c->r[7] = c->r[30] + 0x00000020u;
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x089ae3f4u; c->r[5] = c->r[3] + 0u; func_08886dbc(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000034u);
    mem_wf32(ram, c->r[2] + 0x00000024u, c->f[0]);
L_089ae400:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000031u);
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08ab0000u;
    c->r[2] = c->r[2] + 0x00003100u;
    c->r[4] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000031u);
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08ab0000u;
    c->r[2] = c->r[2] + 0x00003100u;
    c->r[2] = c->r[3] + c->r[2];
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000000u);
    c->r[1] = 0x08a80000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00002e40u);
    c->f[0] = c->f[1] - c->f[0];
    mem_wf32(ram, c->r[4] + 0x00000000u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000031u);
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08ab0000u;
    c->r[2] = c->r[2] + 0x00003100u;
    c->r[2] = c->r[3] + c->r[2];
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000000u);
    c->f[0] = u2f(0u);
    alx_c_cond_s(c, 14, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_089ae47c; }
    { goto L_089ae580; }
L_089ae47c:
    { c->r[31] = 0x089ae484u; func_0896a3e4(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[4] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000031u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[4];
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08ab0000u;
    c->r[2] = c->r[2] + 0x000030acu;
    c->r[3] = c->r[3] + c->r[2];
    c->r[2] = 0u + 0x00000001u;
    { c->r[31] = 0x089ae4b8u; mem_w8(ram, c->r[3] + 0x00000000u, c->r[2]); func_0896a3e4(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[4] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000031u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[4];
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08ab0000u;
    c->r[2] = c->r[2] + 0x000030acu;
    c->r[2] = c->r[3] + c->r[2];
    { c->r[31] = 0x089ae4e8u; mem_w8(ram, c->r[2] + 0x00000001u, 0u); func_0896a3e4(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[4] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000031u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[4];
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08ab0000u;
    c->r[2] = c->r[2] + 0x000030acu;
    c->r[3] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000014u);
    { c->r[31] = 0x089ae520u; mem_w8(ram, c->r[3] + 0x00000002u, c->r[2]); func_0896a3e4(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[4] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000031u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[4];
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08ab0000u;
    c->r[2] = c->r[2] + 0x000030acu;
    c->r[3] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000016u);
    mem_w8(ram, c->r[3] + 0x00000003u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = 0u + 0x00000001u;
    mem_w8(ram, c->r[3] + 0x00000030u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000031u);
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08ab0000u;
    c->r[2] = c->r[2] + 0x00003100u;
    c->r[2] = c->r[3] + c->r[2];
    { mem_w32(ram, c->r[2] + 0x00000000u, 0u); goto L_089ae688; }
L_089ae580:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000031u);
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08ab0000u;
    c->r[2] = c->r[2] + 0x00003100u;
    c->r[2] = c->r[3] + c->r[2];
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000000u);
    c->r[1] = 0x08a50000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffffb084u);
    alx_c_cond_s(c, 14, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_089ae5bc; }
    { goto L_089ae688; }
L_089ae5bc:
    c->r[2] = 0x08a80000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00002ed8u);
    c->r[3] = c->r[2] + 0x00000068u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000068u;
    c->r[4] = c->r[3] + 0u;
    { c->r[31] = 0x089ae5dcu; c->r[5] = c->r[2] + 0u; func_089b3464(c, ram); }
    { int _c = (c->r[2] == 0u); if (_c) goto L_089ae688; }
    c->r[2] = 0x08a80000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00002ed8u);
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x000000b0u);
    { int _c = ((s32)c->r[2] <= 0); if (_c) goto L_089ae688; }
    { c->r[31] = 0x089ae600u; func_0896dc4c(c, ram); }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[3] + 0x00000031u);
    { int _c = (c->r[2] == c->r[3]); if (_c) goto L_089ae688; }
    { c->r[31] = 0x089ae618u; func_0896a3e4(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[4] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000031u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[4];
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08ab0000u;
    c->r[2] = c->r[2] + 0x000030acu;
    c->r[3] = c->r[3] + c->r[2];
    c->r[2] = 0u + 0x0000000bu;
    { c->r[31] = 0x089ae64cu; mem_w8(ram, c->r[3] + 0x00000000u, c->r[2]); func_0896a3e4(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[4] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000031u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[4];
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08ab0000u;
    c->r[2] = c->r[2] + 0x000030acu;
    { c->r[31] = 0x089ae678u; c->r[16] = c->r[3] + c->r[2]; func_0896a3e4(c, ram); }
    mem_w8(ram, c->r[16] + 0x00000001u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = 0u + 0x00000001u;
    mem_w8(ram, c->r[3] + 0x00000039u, c->r[2]);
L_089ae688:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000058u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000054u);
    c->r[16] = mem_r32(ram, c->r[29] + 0x00000050u);
    { c->r[29] = c->r[29] + 0x00000060u; return; }
    return; /* fell out of func_089ae11c */
}

/* func_089b2f08  0x089b2f08..0x089b2f4c  68 bytes, source=sweep */
void func_089b2f08(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089b2f08u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = 0x1e000000u;
    c->r[2] = c->r[2] | c->r[3];
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x089b2f38u; c->r[5] = c->r[2] + 0u; func_089b27cc(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_089b2f08 */
}

/* func_089b41dc  0x089b41dc..0x089b42f8  284 bytes, source=sweep */
void func_089b41dc(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089b41dcu);
    c->r[29] = c->r[29] + 0xffffffd0u;
    mem_w32(ram, c->r[29] + 0x00000020u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_089b4204; }
    c->r[2] = 0u + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]); goto L_089b42e4; }
L_089b4204:
    c->r[2] = 0x08ab0000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00003118u);
    c->r[2] = c->r[2] + 0x00000001u;
    c->r[1] = 0x08ab0000u;
    mem_w32(ram, c->r[1] + 0x00003118u, c->r[2]);
    c->r[2] = 0x08ab0000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00003118u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000801u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_089b425c; }
    mem_w32(ram, c->r[30] + 0x00000004u, 0u);
    c->r[2] = 0u + 0x00000001u;
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    alx_div(c, c->r[3], c->r[2]);
    c->r[3] = c->lo;
    if (c->r[2] == 0u) { recomp_break(c, ram, 0x089b424cu, 0x7u); goto L_089b4250; }
L_089b4250:
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[3]);
    { mem_w32(ram, c->r[30] + 0x00000010u, 0u); goto L_089b42e4; }
L_089b425c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = 0x08b10000u;
    c->r[3] = c->r[3] + 0xffffd120u;
    c->r[2] = (c->r[2] < c->r[3]) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_089b4294; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = 0x08b40000u;
    c->r[3] = c->r[3] + 0xffffd120u;
    c->r[2] = (c->r[2] < c->r[3]) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_089b4294; }
    { goto L_089b42bc; }
L_089b4294:
    mem_w32(ram, c->r[30] + 0x0000000cu, 0u);
    c->r[2] = 0u + 0x00000001u;
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    alx_div(c, c->r[3], c->r[2]);
    c->r[3] = c->lo;
    if (c->r[2] == 0u) { recomp_break(c, ram, 0x089b42b4u, 0x7u); goto L_089b42b8; }
L_089b42b8:
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[3]);
L_089b42bc:
    c->r[5] = 0x08ab0000u;
    c->r[5] = c->r[5] + 0x0000311cu;
    c->r[2] = mem_r32(ram, c->r[5] + 0x00000000u);
    c->r[4] = c->r[2] + 0u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    mem_w32(ram, c->r[4] + 0x00000000u, c->r[3]);
    c->r[2] = c->r[2] + 0x00000004u;
    mem_w32(ram, c->r[5] + 0x00000000u, c->r[2]);
    c->r[2] = 0u + 0x00000001u;
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]);
L_089b42e4:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000020u);
    { c->r[29] = c->r[29] + 0x00000030u; return; }
    return; /* fell out of func_089b41dc */
}

/* func_089b727c  0x089b727c..0x089b72cc  80 bytes, source=fde */
void func_089b727c(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089b727cu);
    c->r[29] = c->r[29] + 0xffffffd0u;
    mem_w32(ram, c->r[29] + 0x00000024u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000020u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[6]);
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[7]);
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[8]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[6] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[7] = mem_r32(ram, c->r[30] + 0x0000000cu);
    { c->r[31] = 0x089b72b8u; c->r[8] = mem_r32(ram, c->r[30] + 0x00000010u); func_089c1670(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000024u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000020u);
    { c->r[29] = c->r[29] + 0x00000030u; return; }
    return; /* fell out of func_089b727c */
}

/* func_089b87f0  0x089b87f0..0x089b8810  32 bytes, source=residue */
void func_089b87f0(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089b87f0u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_089b87f0 */
}

/* func_089c177c  0x089c177c..0x089c1990  532 bytes, source=fde */
void func_089c177c(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089c177cu);
    c->r[29] = c->r[29] + 0xfffffee0u;
    mem_w32(ram, c->r[29] + 0x00000114u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000110u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[6]);
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[7]);
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[8]);
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[9]);
    mem_w32(ram, c->r[30] + 0x00000018u, c->r[10]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    { int _c = (c->r[2] == 0u); if (_c) goto L_089c17c0; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_089c17c8; }
L_089c17c0:
    { mem_w32(ram, c->r[30] + 0x00000100u, 0u); goto L_089c1978; }
L_089c17c8:
    c->r[1] = 0x08a50000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffffb2b4u);
    mem_wf32(ram, c->r[30] + 0x0000001cu, c->f[0]);
    c->r[2] = c->r[30] + 0x00000020u;
    c->r[4] = c->r[2] + 0u;
    c->f[12] = u2f(0u);
    c->f[13] = u2f(0u);
    c->f[14] = u2f(0u);
    c->f[15] = u2f(0u);
    { c->r[31] = 0x089c17f4u; func_0880d140(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000030u, 0u);
    c->r[2] = c->r[30] + 0x00000040u;
    { c->r[31] = 0x089c1804u; c->r[4] = c->r[2] + 0u; func_0885a2b8(c, ram); }
    c->r[2] = c->r[30] + 0x00000040u;
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0u + 0u;
    { c->r[31] = 0x089c1818u; c->r[6] = 0u + 0x00000080u; func_08a19ec4(c, ram); }
    c->r[1] = 0x08a50000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffffb2b4u);
    mem_wf32(ram, c->r[30] + 0x000000a8u, c->f[0]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[3] + 0x00000000u);
    mem_w32(ram, c->r[30] + 0x00000040u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[3] + 0x00000004u);
    mem_w32(ram, c->r[30] + 0x00000044u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[3] + 0x00000008u);
    mem_w32(ram, c->r[30] + 0x00000048u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[3] + 0x0000000cu);
    mem_w32(ram, c->r[30] + 0x0000004cu, c->r[2]);
    c->r[1] = 0x08a50000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffffb2b8u);
    mem_wf32(ram, c->r[30] + 0x0000004cu, c->f[0]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = mem_r32(ram, c->r[3] + 0x00000000u);
    mem_w32(ram, c->r[30] + 0x00000050u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[3] + 0x00000004u);
    mem_w32(ram, c->r[30] + 0x00000054u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[3] + 0x00000008u);
    mem_w32(ram, c->r[30] + 0x00000058u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[3] + 0x0000000cu);
    mem_w32(ram, c->r[30] + 0x0000005cu, c->r[2]);
    c->r[1] = 0x08a50000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffffb2b8u);
    mem_wf32(ram, c->r[30] + 0x0000005cu, c->f[0]);
    c->r[2] = c->r[30] + 0x00000040u;
    c->r[2] = c->r[2] + 0x00000020u;
    c->r[4] = c->r[2] + 0u;
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000010u);
    { c->r[31] = 0x089c189cu; c->r[6] = mem_r32(ram, c->r[30] + 0x0000000cu); func_08820ca4(c, ram); }
    c->r[2] = c->r[30] + 0x00000040u;
    c->r[3] = c->r[2] + 0x00000030u;
    c->r[2] = c->r[30] + 0x00000040u;
    c->r[2] = c->r[2] + 0x00000020u;
    c->r[4] = c->r[3] + 0u;
    { c->r[31] = 0x089c18b8u; c->r[5] = c->r[2] + 0u; func_0884c1d8(c, ram); }
    c->r[2] = c->r[30] + 0x00000040u;
    c->r[2] = c->r[2] + 0x00000020u;
    { c->r[31] = 0x089c18c8u; c->r[4] = c->r[2] + 0u; func_08820c6c(c, ram); }
    mem_wf32(ram, c->r[30] + 0x000000a4u, c->f[0]);
    c->r[2] = c->r[30] + 0x000000c0u;
    mem_w32(ram, c->r[30] + 0x000000a0u, c->r[2]);
    mem_w8(ram, c->r[30] + 0x000000b1u, 0u);
    c->r[2] = c->r[30] + 0x00000040u;
    c->r[4] = c->r[2] + 0u;
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000014u);
    { c->r[31] = 0x089c18ecu; c->r[6] = mem_r32(ram, c->r[30] + 0x00000018u); func_089c1990(c, ram); }
    c->r[2] = mem_r8(ram, c->r[30] + 0x000000b0u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_089c1970; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_089c1928; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000080u);
    mem_w32(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000084u);
    mem_w32(ram, c->r[3] + 0x00000004u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000088u);
    mem_w32(ram, c->r[3] + 0x00000008u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000008cu);
    mem_w32(ram, c->r[3] + 0x0000000cu, c->r[2]);
L_089c1928:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_089c1958; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000090u);
    mem_w32(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000094u);
    mem_w32(ram, c->r[3] + 0x00000004u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000098u);
    mem_w32(ram, c->r[3] + 0x00000008u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000009cu);
    mem_w32(ram, c->r[3] + 0x0000000cu, c->r[2]);
L_089c1958:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_089c1970; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x000000a8u);
    mem_wf32(ram, c->r[2] + 0x00000000u, c->f[0]);
L_089c1970:
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000acu);
    mem_w32(ram, c->r[30] + 0x00000100u, c->r[2]);
L_089c1978:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000100u);
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000114u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000110u);
    { c->r[29] = c->r[29] + 0x00000120u; return; }
    return; /* fell out of func_089c177c */
}

/* func_089c6108  0x089c6108..0x089c612c  36 bytes, source=sweep */
void func_089c6108(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089c6108u);
    c->r[29] = c->r[29] + 0xfffffff0u;
    mem_w32(ram, c->r[29] + 0x00000000u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    c->r[1] = 0x08b80000u;
    mem_w32(ram, c->r[1] + 0xfffff1b8u, 0u);
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000000u);
    { c->r[29] = c->r[29] + 0x00000010u; return; }
    return; /* fell out of func_089c6108 */
}

/* func_089c7b68  0x089c7b68..0x089c88c8  3424 bytes, source=fde */
void func_089c7b68(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089c7b68u);
    c->r[29] = c->r[29] + 0xffffff40u;
    mem_w32(ram, c->r[29] + 0x000000b8u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x000000b4u, c->r[30]);
    mem_w32(ram, c->r[29] + 0x000000b0u, c->r[16]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[2] = c->r[5] + 0u;
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[6]);
    mem_w8(ram, c->r[30] + 0x00000004u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000018u);
    c->r[2] = 0u + 0x00000003u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_089c7ba8; }
    { goto L_089c88b0; }
L_089c7ba8:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000088u);
    { int _c = ((s32)c->r[2] >= 0); if (_c) goto L_089c7c40; }
    { c->r[31] = 0x089c7bc0u; func_089c3a94(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = 0u + 0x00000001u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_089c88b0; }
    c->r[3] = mem_r8(ram, c->r[30] + 0x00000004u);
    c->r[2] = 0u + 0x00000001u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_089c7c40; }
    c->r[2] = mem_r8(ram, c->r[30] + 0x00000004u);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x089c7bf4u; c->r[6] = mem_r32(ram, c->r[30] + 0x00000008u); func_089c7a5c(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r16(ram, c->r[2] + 0x0000001au);
    c->r[2] = 0u + 0x00000003u;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_089c7c24; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r16(ram, c->r[2] + 0x0000001au);
    c->r[2] = 0u + 0x00000005u;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_089c7c24; }
    { goto L_089c88b0; }
L_089c7c24:
    c->r[2] = mem_r8(ram, c->r[30] + 0x00000004u);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x089c7c38u; c->r[6] = mem_r32(ram, c->r[30] + 0x00000008u); func_089c7aac(c, ram); }
    { goto L_089c88b0; }
L_089c7c40:
    c->r[2] = mem_r8(ram, c->r[30] + 0x00000004u);
    mem_w32(ram, c->r[30] + 0x000000a4u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x000000a4u);
    c->r[2] = (c->r[3] < 0x0000000du) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_089c8894; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000a4u);
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08a50000u;
    c->r[2] = c->r[2] + 0xffffb3d8u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    { u32 _t = c->r[2]; switch (_t) { case 0x089c7c78u: goto L_089c7c78; case 0x089c7dfcu: goto L_089c7dfc; case 0x089c7e10u: goto L_089c7e10; case 0x089c7f84u: goto L_089c7f84; case 0x089c82e8u: goto L_089c82e8; case 0x089c84b8u: goto L_089c84b8; case 0x089c8554u: goto L_089c8554; case 0x089c8894u: goto L_089c8894; default: recomp_trap_unknown_indirect(c, ram, 0x089c7c70u, _t); return; } }
L_089c7c78:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000000cu);
    c->r[2] = (c->r[2] < 0x00000002u) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_089c7c9c; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = 0x089c0000u;
    c->r[2] = c->r[2] + 0x00007b3cu;
    mem_w32(ram, c->r[3] + 0x0000000cu, c->r[2]);
L_089c7c9c:
    { c->r[31] = 0x089c7ca4u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u); func_089b7430(c, ram); }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r16(ram, c->r[2] + 0x0000001au);
    c->r[2] = c->r[2] >> 12;
    mem_w8(ram, c->r[3] + 0x000000b5u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r16(ram, c->r[2] + 0x0000001au);
    c->r[2] = c->r[2] & 0x0fffu;
    mem_w16(ram, c->r[3] + 0x0000001au, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r8(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000000cu);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = c->r[3] + 0u;
    { u32 _t = c->r[2]; c->r[31] = 0x089c7ce8u; c->r[6] = mem_r32(ram, c->r[30] + 0x00000008u); recomp_call_indirect(c, ram, 0x089c7ce0u, _t); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r8(ram, c->r[2] + 0x000000b5u);
    c->r[2] = 0u + 0x00000001u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_089c7d14; }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = 0u + 0u;
    { c->r[31] = 0x089c7d0cu; c->r[6] = 0u + 0u; func_089b75d0(c, ram); }
    { goto L_089c7f60; }
L_089c7d14:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r8(ram, c->r[2] + 0x000000b5u);
    c->r[2] = 0u + 0x00000002u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_089c7f60; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x000000e0u;
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
    c->r[2] = c->r[30] + 0x00000010u;
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x089c7d44u; c->r[5] = 0u + 0u; func_089c8bcc(c, ram); }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = 0u + 0x00000004u;
    { c->r[31] = 0x089c7d54u; func_089c356c(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = c->r[30] + 0x00000010u;
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x089c7d68u; c->r[5] = c->r[3] + 0u; func_089c8b88(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r16(ram, c->r[2] + 0x0000001au);
    c->r[2] = c->r[2] + 0xfffffc00u;
    mem_w32(ram, c->r[30] + 0x00000020u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    mem_w32(ram, c->r[30] + 0x00000090u, c->r[2]);
    c->r[2] = c->r[30] + 0x00000010u;
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x089c7d90u; c->r[5] = mem_r32(ram, c->r[30] + 0x00000020u); func_089c8c24(c, ram); }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000090u);
    mem_w32(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000090u);
    c->r[2] = mem_r32(ram, c->r[3] + 0x00000000u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_089c7db4; }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x089c7db4u; c->r[5] = 0u + 0x00000002u; func_0880d260(c, ram); }
L_089c7db4:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    { c->r[31] = 0x089c7dc0u; c->r[4] = mem_r32(ram, c->r[2] + 0x00000000u); func_089c6fd8(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[2] = c->r[2] + 0xffffffc2u;
    mem_w32(ram, c->r[30] + 0x00000094u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000094u);
    c->r[2] = (c->r[3] < 0x00000018u) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_089c7e10; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000094u);
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08a50000u;
    c->r[2] = c->r[2] + 0xffffb40cu;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    { u32 _t = c->r[2]; switch (_t) { case 0x089c7c78u: goto L_089c7c78; case 0x089c7dfcu: goto L_089c7dfc; case 0x089c7e10u: goto L_089c7e10; case 0x089c7f84u: goto L_089c7f84; case 0x089c82e8u: goto L_089c82e8; case 0x089c84b8u: goto L_089c84b8; case 0x089c8554u: goto L_089c8554; case 0x089c8894u: goto L_089c8894; default: recomp_trap_unknown_indirect(c, ram, 0x089c7df4u, _t); return; } }
L_089c7dfc:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[1] = 0x08a50000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffffb3bcu);
    { mem_wf32(ram, c->r[2] + 0x00000058u, c->f[0]); goto L_089c7e20; }
L_089c7e10:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[1] = 0x08a50000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffffb3c0u);
    mem_wf32(ram, c->r[2] + 0x00000058u, c->f[0]);
L_089c7e20:
    { c->r[31] = 0x089c7e28u; c->r[16] = mem_r32(ram, c->r[30] + 0x0000000cu); func_0883a25c(c, ram); }
    c->r[2] = c->r[2] & 0x000fu;
    mem_w8(ram, c->r[16] + 0x0000005cu, c->r[2]);
    c->r[1] = 0x08a50000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffffb3c4u);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x089c7e44u; c->f[12] = c->f[0]; func_089c77b8(c, ram); }
    c->r[1] = 0x08a50000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffffb3c4u);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x089c7e58u; c->f[12] = c->f[0]; func_089c77f4(c, ram); }
    c->r[1] = 0x08a50000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffffb3c4u);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x089c7e6cu; c->f[12] = c->f[0]; func_089c7830(c, ram); }
    c->r[4] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x00000004u);
    c->r[3] = c->r[2] << 4;
    c->r[2] = mem_r32(ram, c->r[4] + 0x00000000u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = c->r[2] + 0x00000010u;
    { c->r[31] = 0x089c7e94u; mem_w32(ram, c->r[30] + 0x00000024u, c->r[2]); func_0884d22c(c, ram); }
    c->f[1] = c->f[0];
    c->r[1] = 0x08a50000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffffb3c4u);
    c->f[0] = c->f[1] + c->f[0];
    mem_wf32(ram, c->r[30] + 0x00000028u, c->f[0]);
    mem_w32(ram, c->r[30] + 0x0000002cu, 0u);
L_089c7eac:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000024u);
    c->r[3] = mem_r8(ram, c->r[2] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000002cu);
    c->r[2] = ((s32)c->r[2] < (s32)c->r[3]) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_089c7ecc; }
    { goto L_089c7f54; }
L_089c7ecc:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000024u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000002cu);
    c->r[2] = c->r[2] << 7;
    c->r[2] = c->r[2] + c->r[3];
    c->r[2] = c->r[2] + 0x00000064u;
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000000u);
    c->r[1] = 0x08a50000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffffb3c8u);
    alx_c_cond_s(c, 2, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_089c7f04; }
    { goto L_089c7f20; }
L_089c7f04:
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000002cu);
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[3];
    c->r[2] = c->r[2] + 0x00000010u;
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000028u);
    mem_wf32(ram, c->r[2] + 0x00000000u, c->f[0]);
L_089c7f20:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000002cu);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x0000002cu, c->r[2]); goto L_089c7eac; }
    mem_w32(ram, c->r[30] + 0x00000098u, c->r[4]);
    c->r[16] = mem_r32(ram, c->r[30] + 0x00000098u);
    c->r[2] = c->r[30] + 0x00000010u;
    { c->r[31] = 0x089c7f44u; c->r[4] = c->r[2] + 0u; func_089c8c04(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000098u, c->r[16]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000098u);
    { c->r[31] = 0x089c7f54u; func_08a163b0(c, ram); }
L_089c7f54:
    c->r[2] = c->r[30] + 0x00000010u;
    { c->r[31] = 0x089c7f60u; c->r[4] = c->r[2] + 0u; func_089c8c04(c, ram); }
L_089c7f60:
    { c->r[31] = 0x089c7f68u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u); func_089c8b60(c, ram); }
    { int _c = (c->r[2] != 0u); if (_c) goto L_089c88b0; }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x089c7f7cu; c->r[5] = 0u + 0x00000001u; func_0880d260(c, ram); }
    { goto L_089c88b0; }
L_089c7f84:
    c->r[2] = mem_r8(ram, c->r[30] + 0x00000004u);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x089c7f98u; c->r[6] = mem_r32(ram, c->r[30] + 0x00000008u); func_089c7a5c(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r8(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000000cu);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = c->r[3] + 0u;
    { u32 _t = c->r[2]; c->r[31] = 0x089c7fb4u; c->r[6] = mem_r32(ram, c->r[30] + 0x00000008u); recomp_call_indirect(c, ram, 0x089c7facu, _t); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r16(ram, c->r[2] + 0x0000001au);
    c->r[2] = 0u + 0x00000003u;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_089c7fe4; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r16(ram, c->r[2] + 0x0000001au);
    c->r[2] = 0u + 0x00000005u;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_089c7fe4; }
    { goto L_089c7ff8; }
L_089c7fe4:
    c->r[2] = mem_r8(ram, c->r[30] + 0x00000004u);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x089c7ff8u; c->r[6] = mem_r32(ram, c->r[30] + 0x00000008u); func_089c7aac(c, ram); }
L_089c7ff8:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r8(ram, c->r[2] + 0x000000b5u);
    c->r[2] = 0u + 0x00000001u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_089c801c; }
    { c->r[31] = 0x089c8014u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u); func_089c4010(c, ram); }
    { goto L_089c88b0; }
L_089c801c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r8(ram, c->r[2] + 0x000000b5u);
    c->r[2] = 0u + 0x00000002u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_089c88b0; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x000000e0u;
    mem_w32(ram, c->r[30] + 0x0000002cu, c->r[2]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x0000002cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000002cu);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x00000004u);
    c->r[3] = c->r[2] << 4;
    c->r[2] = mem_r32(ram, c->r[4] + 0x00000000u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = c->r[2] + 0x00000010u;
    mem_w32(ram, c->r[30] + 0x00000024u, c->r[2]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x0000002cu);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000002cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000002cu);
    c->r[1] = 0x08a80000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0x00002e40u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000050u);
    c->f[1] = c->f[1] * c->f[0];
    c->f[0] = mem_rf32(ram, c->r[3] + 0x0000004cu);
    c->f[0] = c->f[0] - c->f[1];
    mem_wf32(ram, c->r[4] + 0x0000004cu, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000002cu);
    mem_w32(ram, c->r[30] + 0x0000009cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000002cu);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x0000004cu);
    c->f[0] = u2f(0u);
    alx_c_cond_s(c, 12, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_089c80b4; }
    { goto L_089c80c4; }
L_089c80b4:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000002cu);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x0000004cu);
    { mem_wf32(ram, c->r[30] + 0x000000a0u, c->f[0]); goto L_089c80c8; }
L_089c80c4:
    mem_w32(ram, c->r[30] + 0x000000a0u, 0u);
L_089c80c8:
    c->f[0] = mem_rf32(ram, c->r[30] + 0x000000a0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000009cu);
    mem_wf32(ram, c->r[2] + 0x0000004cu, c->f[0]);
    mem_w32(ram, c->r[30] + 0x00000020u, 0u);
    mem_w32(ram, c->r[30] + 0x0000000cu, 0u);
L_089c80dc:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000024u);
    c->r[3] = mem_r8(ram, c->r[2] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = ((s32)c->r[2] < (s32)c->r[3]) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_089c80fc; }
    { goto L_089c829c; }
L_089c80fc:
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000002cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[3];
    c->r[5] = c->r[2] + 0x00000010u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000002cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[3];
    c->r[6] = c->r[2] + 0x00000010u;
    c->r[4] = mem_r32(ram, c->r[30] + 0x0000002cu);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000024u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] << 7;
    c->r[2] = c->r[2] + c->r[3];
    c->r[2] = c->r[2] + 0x00000080u;
    c->f[1] = mem_rf32(ram, c->r[4] + 0x00000004u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000000u);
    c->f[0] = c->f[1] * c->f[0];
    c->f[1] = c->f[0] + c->f[0];
    c->f[0] = mem_rf32(ram, c->r[6] + 0x00000000u);
    c->f[0] = c->f[0] + c->f[1];
    mem_wf32(ram, c->r[5] + 0x00000000u, c->f[0]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000002cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[3];
    c->r[4] = c->r[2] + 0x00000010u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000024u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] << 7;
    c->r[2] = c->r[2] + c->r[3];
    c->r[2] = c->r[2] + 0x00000080u;
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000009u);
    c->f[12] = mem_rf32(ram, c->r[4] + 0x00000000u);
    { c->r[31] = 0x089c8190u; c->r[4] = c->r[2] + 0u; func_089c8a18(c, ram); }
    mem_wf32(ram, c->r[30] + 0x00000028u, c->f[0]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000024u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] << 7;
    c->r[2] = c->r[2] + c->r[3];
    c->r[2] = c->r[2] + 0x00000064u;
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000000u);
    c->r[1] = 0x08a50000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffffb3c4u);
    c->f[1] = c->f[1] + c->f[0];
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000028u);
    alx_c_cond_s(c, 14, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_089c81d4; }
    { goto L_089c81e0; }
L_089c81d4:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[2] = c->r[2] + 0x00000001u;
    mem_w32(ram, c->r[30] + 0x00000020u, c->r[2]);
L_089c81e0:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000024u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] << 7;
    c->r[2] = c->r[2] + c->r[3];
    c->r[2] = c->r[2] + 0x00000064u;
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000000u);
    c->r[1] = 0x08a50000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffffb3ccu);
    alx_c_cond_s(c, 14, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_089c8218; }
    { goto L_089c828c; }
L_089c8218:
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000002cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[3];
    c->r[2] = c->r[2] + 0x00000010u;
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000000u);
    c->r[1] = 0x08a50000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffffb3d0u);
    alx_c_cond_s(c, 12, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_089c8250; }
    { goto L_089c828c; }
L_089c8250:
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000002cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[3];
    c->r[4] = c->r[2] + 0x00000010u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000002cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[3];
    c->r[2] = c->r[2] + 0x00000010u;
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000000u);
    c->r[1] = 0x08a50000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffffb3c4u);
    c->f[0] = c->f[1] - c->f[0];
    mem_wf32(ram, c->r[4] + 0x00000000u, c->f[0]);
L_089c828c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]); goto L_089c80dc; }
L_089c829c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000024u);
    c->r[3] = mem_r8(ram, c->r[2] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    { int _c = (c->r[2] != c->r[3]); if (_c) goto L_089c88b0; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000002cu);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x0000004cu);
    c->f[0] = u2f(0u);
    alx_c_cond_s(c, 2, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_089c82d4; }
    { goto L_089c88b0; }
L_089c82d4:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x089c82e0u; c->r[5] = 0u + 0x00000002u; func_0880d260(c, ram); }
    { goto L_089c88b0; }
L_089c82e8:
    c->r[2] = c->r[30] + 0x00000030u;
    { c->r[31] = 0x089c82f4u; c->r[4] = c->r[2] + 0u; func_089c89e8(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000088u);
    c->r[2] = c->r[2] & 0x8000u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_089c8310; }
    { goto L_089c88b0; }
L_089c8310:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r8(ram, c->r[2] + 0x000000b5u);
    c->r[2] = 0u + 0x00000001u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_089c837c; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000009cu);
    { int _c = (c->r[2] == 0u); if (_c) goto L_089c8340; }
    c->r[2] = 0u + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000074u, c->r[2]); goto L_089c837c; }
L_089c8340:
    mem_w32(ram, c->r[30] + 0x00000074u, 0u);
    c->r[2] = 0u + 0xffffffffu;
    mem_w32(ram, c->r[30] + 0x00000070u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r16(ram, c->r[2] + 0x0000001au);
    c->r[2] = 0u + 0x00000002u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_089c837c; }
    c->r[2] = 0u + 0x00000003u;
    { c->r[31] = 0x089c836cu; mem_w32(ram, c->r[30] + 0x00000070u, c->r[2]); func_08862cb4(c, ram); }
    c->r[2] = c->r[2] & 0x0002u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_089c837c; }
    mem_w32(ram, c->r[30] + 0x00000070u, 0u);
L_089c837c:
    c->r[2] = c->r[30] + 0x00000030u;
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r8(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000000cu);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = c->r[3] + 0u;
    { u32 _t = c->r[2]; c->r[31] = 0x089c83a0u; c->r[6] = mem_r32(ram, c->r[30] + 0x00000008u); recomp_call_indirect(c, ram, 0x089c8398u, _t); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000009cu);
    { int _c = (c->r[2] == 0u); if (_c) goto L_089c83b8; }
    { goto L_089c88b0; }
L_089c83b8:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r16(ram, c->r[2] + 0x0000001au);
    c->r[2] = 0u + 0x00000003u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_089c83f4; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000008cu);
    { int _c = ((s32)c->r[2] < 0); if (_c) goto L_089c88b0; }
    { c->r[31] = 0x089c83e4u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u); func_089b8830(c, ram); }
    { int _c = (c->r[2] != 0u); if (_c) goto L_089c83f4; }
    { goto L_089c88b0; }
L_089c83f4:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r8(ram, c->r[2] + 0x000000b5u);
    c->r[2] = 0u + 0x00000001u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_089c88b0; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000074u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_089c8428; }
    c->r[2] = c->r[30] + 0x00000030u;
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x089c8428u; c->r[6] = 0u + 0x00000001u; func_089b8a34(c, ram); }
L_089c8428:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000070u);
    c->r[2] = 0u + 0xffffffffu;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_089c8498; }
    c->r[1] = 0x08a80000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffffbf80u);
    { c->r[31] = 0x089c8448u; mem_wf32(ram, c->r[30] + 0x00000028u, c->f[0]); func_08820f58(c, ram); }
    c->r[3] = c->r[2] + 0x00000020u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000020u;
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x089c8460u; c->r[5] = c->r[3] + 0u; func_0884d0b0(c, ram); }
    mem_wf32(ram, c->r[30] + 0x00000080u, c->f[0]);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000080u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000028u);
    alx_c_cond_s(c, 12, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_089c8484; }
    { goto L_089c8490; }
L_089c8484:
    c->r[2] = 0u + 0x00000003u;
    { mem_w32(ram, c->r[30] + 0x00000070u, c->r[2]); goto L_089c8498; }
L_089c8490:
    c->r[2] = 0u + 0x00000002u;
    mem_w32(ram, c->r[30] + 0x00000070u, c->r[2]);
L_089c8498:
    c->r[2] = c->r[30] + 0x00000030u;
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = c->r[2] + 0u;
    c->r[6] = mem_r32(ram, c->r[30] + 0x00000070u);
    { c->r[31] = 0x089c84b0u; c->r[7] = 0u + 0u; func_089b8b50(c, ram); }
    { mem_w32(ram, c->r[30] + 0x0000002cu, c->r[2]); goto L_089c88b0; }
L_089c84b8:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r8(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000000cu);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = c->r[3] + 0u;
    { u32 _t = c->r[2]; c->r[31] = 0x089c84d4u; c->r[6] = mem_r32(ram, c->r[30] + 0x00000008u); recomp_call_indirect(c, ram, 0x089c84ccu, _t); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000018u);
    c->r[2] = 0u + 0x00000003u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_089c84f0; }
    { goto L_089c88b0; }
L_089c84f0:
    { c->r[31] = 0x089c84f8u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u); func_089b7544(c, ram); }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = 0u + 0u;
    c->r[6] = 0u + 0u;
    { c->r[31] = 0x089c850cu; c->r[7] = 0u + 0u; func_0884f888(c, ram); }
    c->r[2] = 0x08b40000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0xfffff120u);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000ac8u;
    { c->r[31] = 0x089c8524u; c->r[5] = c->r[2] + 0u; func_089cb820(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[3] ^ c->r[2];
    c->r[2] = (c->r[2] < 0x00000001u) ? 1u : 0u;
    c->r[2] = c->r[2] & 0x00ffu;
    { int _c = (c->r[2] == 0u); if (_c) goto L_089c8548; }
    c->r[1] = 0x08b40000u;
    mem_w32(ram, c->r[1] + 0xfffff124u, 0u);
L_089c8548:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    { mem_w32(ram, c->r[2] + 0x00000088u, 0u); goto L_089c88b0; }
L_089c8554:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r8(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000000cu);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = c->r[3] + 0u;
    { u32 _t = c->r[2]; c->r[31] = 0x089c8570u; c->r[6] = mem_r32(ram, c->r[30] + 0x00000008u); recomp_call_indirect(c, ram, 0x089c8568u, _t); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r8(ram, c->r[2] + 0x000000b5u);
    c->r[2] = 0u + 0x00000002u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_089c88b0; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x000000e0u;
    mem_w32(ram, c->r[30] + 0x0000002cu, c->r[2]);
    c->r[2] = c->r[30] + 0x00000030u;
    { c->r[31] = 0x089c859cu; c->r[4] = c->r[2] + 0u; func_08808240(c, ram); }
    { c->r[31] = 0x089c85a4u; func_08820f58(c, ram); }
    c->r[6] = c->r[2] + 0x00000020u;
    c->r[3] = c->r[30] + 0x00000030u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000020u;
    c->r[4] = c->r[3] + 0u;
    { c->r[31] = 0x089c85c0u; c->r[5] = c->r[2] + 0u; func_08820ca4(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000002cu);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000002cu);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x0000000cu);
    c->f[0] = mem_rf32(ram, c->r[3] + 0x00000008u);
    c->f[0] = c->f[1] * c->f[0];
    mem_wf32(ram, c->r[30] + 0x00000080u, c->f[0]);
    c->r[2] = c->r[30] + 0x00000030u;
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0xffffbf30u;
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x089c85f4u; c->f[12] = mem_rf32(ram, c->r[30] + 0x00000080u); func_089f23b0(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = 0u + 0x00000002u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_089c860c; }
    { goto L_089c88b0; }
L_089c860c:
    c->r[2] = c->r[30] + 0x00000030u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000002cu);
    c->r[1] = 0x08a50000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffffb3d4u);
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0u + 0u;
    c->f[12] = mem_rf32(ram, c->r[3] + 0x00000058u);
    { c->r[31] = 0x089c8630u; c->f[13] = c->f[0]; func_089c7938(c, ram); }
    mem_wf32(ram, c->r[30] + 0x00000028u, c->f[0]);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000028u);
    c->f[0] = u2f(0u);
    alx_c_cond_s(c, 12, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_089c8654; }
    { goto L_089c88b0; }
L_089c8654:
    c->r[2] = 0u + 0xffffffffu;
    mem_w8(ram, c->r[30] + 0x00000084u, c->r[2]);
    c->r[2] = 0u + 0xffffffffu;
    mem_w16(ram, c->r[30] + 0x00000086u, c->r[2]);
    c->r[2] = c->r[30] + 0x00000040u;
    { c->r[31] = 0x089c8670u; c->r[4] = c->r[2] + 0u; func_08808260(c, ram); }
    c->r[4] = c->r[30] + 0x00000040u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000040u;
    c->r[3] = c->r[30] + 0x00000030u;
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x089c868cu; c->r[6] = c->r[3] + 0u; func_0885a194(c, ram); }
    c->r[4] = mem_r32(ram, c->r[30] + 0x0000002cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000002cu);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x00000004u);
    c->r[3] = c->r[2] << 4;
    c->r[2] = mem_r32(ram, c->r[4] + 0x00000000u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = c->r[2] + 0x00000010u;
    mem_w32(ram, c->r[30] + 0x00000024u, c->r[2]);
    c->r[2] = c->r[30] + 0x00000030u;
    c->r[4] = 0x08a70000u;
    c->r[4] = c->r[4] + 0xffffb640u;
    { c->r[31] = 0x089c86c4u; c->r[5] = c->r[2] + 0u; func_089f1418(c, ram); }
    mem_wf32(ram, c->r[30] + 0x00000088u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000002cu);
    c->r[2] = mem_r8(ram, c->r[2] + 0x0000005cu);
    mem_w8(ram, c->r[30] + 0x0000008cu, c->r[2]);
    c->r[4] = 0x08a70000u;
    { c->r[31] = 0x089c86e0u; c->r[4] = c->r[4] + 0xffffb640u; func_089ee680(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000020u, 0u);
L_089c86e4:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000024u);
    c->r[3] = mem_r8(ram, c->r[2] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[2] = ((s32)c->r[2] < (s32)c->r[3]) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_089c8704; }
    { goto L_089c8874; }
L_089c8704:
    c->r[4] = (u32)(s32)(s8)mem_r8(ram, c->r[30] + 0x00000084u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000024u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[2] = c->r[2] << 7;
    c->r[2] = c->r[2] + c->r[3];
    c->r[2] = c->r[2] + 0x00000080u;
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000008u);
    { int _c = (c->r[4] == c->r[2]); if (_c) goto L_089c875c; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000024u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[2] = c->r[2] << 7;
    c->r[2] = c->r[2] + c->r[3];
    c->r[2] = c->r[2] + 0x00000080u;
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000008u);
    mem_w8(ram, c->r[30] + 0x00000084u, c->r[2]);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[30] + 0x00000084u);
    c->r[4] = 0x08a70000u;
    c->r[4] = c->r[4] + 0xffffb640u;
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x089c875cu; c->r[6] = 0u + 0x00000007u; func_089df7a0(c, ram); }
L_089c875c:
    c->r[4] = (u32)(s32)(s16)mem_r16(ram, c->r[30] + 0x00000086u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000024u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[2] = c->r[2] << 7;
    c->r[2] = c->r[2] + c->r[3];
    c->r[2] = c->r[2] + 0x00000080u;
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x00000004u);
    { int _c = (c->r[4] == c->r[2]); if (_c) goto L_089c87b4; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000024u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[2] = c->r[2] << 7;
    c->r[2] = c->r[2] + c->r[3];
    c->r[2] = c->r[2] + 0x00000080u;
    c->r[2] = mem_r16(ram, c->r[2] + 0x00000004u);
    mem_w16(ram, c->r[30] + 0x00000086u, c->r[2]);
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[30] + 0x00000086u);
    c->r[4] = 0x08a70000u;
    c->r[4] = c->r[4] + 0xffffb640u;
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x089c87b4u; c->r[6] = 0u + 0u; func_089e0bd8(c, ram); }
L_089c87b4:
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[30] + 0x0000008cu);
    c->r[4] = 0x08a70000u;
    c->r[4] = c->r[4] + 0xffffb640u;
    { c->r[31] = 0x089c87c8u; c->r[5] = c->r[2] + 0u; func_089e0008(c, ram); }
    c->r[2] = mem_r8(ram, c->r[30] + 0x0000008cu);
    c->r[2] = c->r[2] + 0x00000001u;
    c->r[2] = c->r[2] & 0x000fu;
    mem_w8(ram, c->r[30] + 0x0000008cu, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000002cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[3];
    c->r[4] = c->r[2] + 0x00000010u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000024u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[2] = c->r[2] << 7;
    c->r[2] = c->r[2] + c->r[3];
    c->r[2] = c->r[2] + 0x00000080u;
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000009u);
    c->f[12] = mem_rf32(ram, c->r[4] + 0x00000000u);
    { c->r[31] = 0x089c8810u; c->r[4] = c->r[2] + 0u; func_089c8a18(c, ram); }
    mem_wf32(ram, c->r[30] + 0x00000080u, c->f[0]);
    c->r[5] = mem_r32(ram, c->r[30] + 0x0000002cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000002cu);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x0000000cu);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000028u);
    c->f[0] = c->f[1] * c->f[0];
    c->r[6] = c->r[30] + 0x00000040u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[3] = c->r[2] << 7;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000024u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = c->r[2] + 0x00000010u;
    c->r[4] = 0x08a70000u;
    c->r[4] = c->r[4] + 0xffffb640u;
    c->f[12] = mem_rf32(ram, c->r[30] + 0x00000080u);
    c->f[13] = mem_rf32(ram, c->r[5] + 0x00000008u);
    c->f[14] = c->f[0];
    c->f[15] = mem_rf32(ram, c->r[30] + 0x00000088u);
    c->r[5] = c->r[6] + 0u;
    { c->r[31] = 0x089c8864u; c->r[6] = c->r[2] + 0u; func_089ed5c0(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000020u, c->r[2]); goto L_089c86e4; }
L_089c8874:
    c->r[4] = 0x08a70000u;
    { c->r[31] = 0x089c8880u; c->r[4] = c->r[4] + 0xffffb640u; func_089ee6f4(c, ram); }
    c->r[4] = 0x08a70000u;
    { c->r[31] = 0x089c888cu; c->r[4] = c->r[4] + 0xffffb640u; func_089f147c(c, ram); }
    { goto L_089c88b0; }
L_089c8894:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r8(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000000cu);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = c->r[3] + 0u;
    { u32 _t = c->r[2]; c->r[31] = 0x089c88b0u; c->r[6] = mem_r32(ram, c->r[30] + 0x00000008u); recomp_call_indirect(c, ram, 0x089c88a8u, _t); }
L_089c88b0:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x000000b8u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x000000b4u);
    c->r[16] = mem_r32(ram, c->r[29] + 0x000000b0u);
    { c->r[29] = c->r[29] + 0x000000c0u; return; }
    return; /* fell out of func_089c7b68 */
}

/* func_089ca9f4  0x089ca9f4..0x089caa1c  40 bytes, source=sweep */
void func_089ca9f4(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089ca9f4u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    mem_w16(ram, c->r[2] + 0x0000011cu, 0u);
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_089ca9f4 */
}

/* func_089ccd7c  0x089ccd7c..0x089cd1f4  1144 bytes, source=fde */
void func_089ccd7c(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089ccd7cu);
    c->r[29] = c->r[29] + 0xfffffd30u;
    mem_w32(ram, c->r[29] + 0x000002c8u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x000002c4u, c->r[30]);
    mem_w32(ram, c->r[29] + 0x000002c0u, c->r[16]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[6]);
    { c->r[31] = 0x089ccda4u; c->r[4] = 0u + 0u; func_089cbbec(c, ram); }
    { c->r[31] = 0x089ccdacu; hle_dispatch_stub(c, ram, 0x08a2483cu); /* sceKernelGetSystemTimeLow */ }
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_089ccdcc; }
    { goto L_089cd1dc; }
L_089ccdcc:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = c->r[2] + 0x00000008u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = c->r[2] + 0x0000000cu;
    mem_w32(ram, c->r[30] + 0x00000220u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[1] = 0x08b80000u;
    mem_w32(ram, c->r[1] + 0xfffff45cu, c->r[2]);
    c->r[4] = 0x08b80000u;
    c->r[4] = mem_r32(ram, c->r[4] + 0xfffff45cu);
    c->r[5] = 0u + 0u;
    { c->r[31] = 0x089cce08u; c->r[6] = 0x00040000u; func_08a19ec4(c, ram); }
    c->r[2] = c->r[30] + 0x00000230u;
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0u + 0u;
    { c->r[31] = 0x089cce1cu; c->r[6] = 0u + 0x00000018u; func_08a19ec4(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000230u, 0u);
    c->r[2] = 0u + 0x00000020u;
    mem_w16(ram, c->r[30] + 0x0000023cu, c->r[2]);
    c->r[2] = 0u + 0x00000020u;
    mem_w16(ram, c->r[30] + 0x0000023eu, c->r[2]);
    c->r[2] = 0u + 0x00000010u;
    mem_w16(ram, c->r[30] + 0x00000240u, c->r[2]);
    c->r[2] = c->r[30] + 0x00000020u;
    mem_w32(ram, c->r[30] + 0x00000244u, c->r[2]);
    mem_w32(ram, c->r[30] + 0x00000250u, 0u);
L_089cce44:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000250u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = ((s32)c->r[2] < (s32)c->r[3]) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_089cce60; }
    { goto L_089cd1c8; }
L_089cce60:
    { c->r[31] = 0x089cce68u; c->r[4] = 0u + 0u; func_089cbbac(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000254u, 0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000220u);
    c->r[2] = mem_r16(ram, c->r[2] + 0x00000000u);
    c->r[2] = (c->r[2] < 0x00003131u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_089cce9c; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000220u);
    c->r[2] = mem_r16(ram, c->r[2] + 0x00000000u);
    c->r[2] = (c->r[2] < 0x0000318fu) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_089cce9c; }
    c->r[2] = 0u + 0x00000001u;
    mem_w32(ram, c->r[30] + 0x00000254u, c->r[2]);
L_089cce9c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000220u);
    c->r[2] = mem_r16(ram, c->r[2] + 0x00000000u);
    c->r[2] = (c->r[2] < 0x00003200u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_089ccecc; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000220u);
    c->r[2] = mem_r16(ram, c->r[2] + 0x00000000u);
    c->r[2] = (c->r[2] < 0x0000321du) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_089ccecc; }
    c->r[2] = 0u + 0x00000001u;
    mem_w32(ram, c->r[30] + 0x00000254u, c->r[2]);
L_089ccecc:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000220u);
    c->r[2] = mem_r16(ram, c->r[2] + 0x00000000u);
    c->r[2] = (c->r[2] < 0x00003260u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_089ccefc; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000220u);
    c->r[2] = mem_r16(ram, c->r[2] + 0x00000000u);
    c->r[2] = (c->r[2] < 0x0000327cu) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_089ccefc; }
    c->r[2] = 0u + 0x00000001u;
    mem_w32(ram, c->r[30] + 0x00000254u, c->r[2]);
L_089ccefc:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000220u);
    c->r[3] = mem_r16(ram, c->r[2] + 0x00000000u);
    c->r[2] = 0u | 0xabffu;
    c->r[2] = (c->r[2] < c->r[3]) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_089ccf34; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000220u);
    c->r[3] = mem_r16(ram, c->r[2] + 0x00000000u);
    c->r[2] = 0u | 0xd7a3u;
    c->r[2] = (c->r[2] < c->r[3]) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_089ccf34; }
    c->r[2] = 0u + 0x00000001u;
    mem_w32(ram, c->r[30] + 0x00000254u, c->r[2]);
L_089ccf34:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000220u);
    c->r[3] = mem_r16(ram, c->r[2] + 0x00000000u);
    c->r[2] = 0u + 0x0000327fu;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_089ccf50; }
    c->r[2] = 0u + 0x00000001u;
    mem_w32(ram, c->r[30] + 0x00000254u, c->r[2]);
L_089ccf50:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000220u);
    c->r[3] = mem_r16(ram, c->r[2] + 0x00000000u);
    c->r[2] = 0u | 0xffe6u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_089ccf6c; }
    c->r[2] = 0u + 0x00000001u;
    mem_w32(ram, c->r[30] + 0x00000254u, c->r[2]);
L_089ccf6c:
    mem_w32(ram, c->r[30] + 0x00000258u, 0u);
    mem_w32(ram, c->r[30] + 0x0000025cu, 0u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000254u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 5;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 3;
    c->r[2] = 0x08b80000u;
    c->r[2] = c->r[2] + 0xfffff254u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    mem_w32(ram, c->r[30] + 0x00000260u, c->r[2]);
    c->r[2] = c->r[30] + 0x00000020u;
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0u + 0u;
    { c->r[31] = 0x089ccfb0u; c->r[6] = 0u + 0x00000200u; func_08a19ec4(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000254u);
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08b80000u;
    c->r[2] = c->r[2] + 0xfffff244u;
    c->r[4] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000220u);
    c->r[2] = mem_r16(ram, c->r[2] + 0x00000000u);
    c->r[3] = c->r[30] + 0x00000270u;
    c->r[4] = mem_r32(ram, c->r[4] + 0x00000000u);
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x089ccfe0u; c->r[6] = c->r[3] + 0u; hle_dispatch_stub(c, ram, 0x08a24a6cu); /* sceFontGetCharInfo */ }
    mem_w32(ram, c->r[30] + 0x00000264u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000220u);
    c->r[2] = mem_r16(ram, c->r[2] + 0x00000000u);
    c->r[2] = c->r[2] + 0xffffff76u;
    mem_w32(ram, c->r[30] + 0x000002b4u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x000002b4u);
    c->r[2] = (c->r[3] < 0x00000055u) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_089cd038; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x000002b4u);
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08a50000u;
    c->r[2] = c->r[2] + 0xffffb4fcu;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    { u32 _t = c->r[2]; switch (_t) { case 0x089cd024u: goto L_089cd024; case 0x089cd038u: goto L_089cd038; default: recomp_trap_unknown_indirect(c, ram, 0x089cd01cu, _t); return; } }
L_089cd024:
    c->r[2] = 0u + 0x00000001u;
    mem_w32(ram, c->r[30] + 0x00000258u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000027cu);
    c->r[2] = c->r[2] + 0xfffffffdu;
    mem_w32(ram, c->r[30] + 0x0000027cu, c->r[2]);
L_089cd038:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000278u);
    c->r[3] = c->r[2] << 6;
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000025cu);
    c->r[2] = c->r[2] + c->r[3];
    mem_w32(ram, c->r[30] + 0x00000234u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000027cu);
    c->r[3] = c->r[2] << 6;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000260u);
    c->r[2] = c->r[2] - c->r[3];
    mem_w32(ram, c->r[30] + 0x00000238u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000254u);
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08b80000u;
    c->r[2] = c->r[2] + 0xfffff244u;
    c->r[4] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000220u);
    c->r[2] = mem_r16(ram, c->r[2] + 0x00000000u);
    c->r[3] = c->r[30] + 0x00000230u;
    c->r[4] = mem_r32(ram, c->r[4] + 0x00000000u);
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x089cd090u; c->r[6] = c->r[3] + 0u; hle_dispatch_stub(c, ram, 0x08a24a5cu); /* sceFontGetCharGlyphImage */ }
    mem_w32(ram, c->r[30] + 0x00000264u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000220u);
    c->r[2] = mem_r16(ram, c->r[2] + 0x00000000u);
    c->r[2] = c->r[2] & 0xff00u;
    c->r[2] = (0u < c->r[2]) ? 1u : 0u;
    mem_w32(ram, c->r[30] + 0x000002b0u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000250u);
    c->r[2] = 0x08b80000u;
    c->r[2] = c->r[2] + 0xfffff460u;
    c->r[16] = c->r[3] + c->r[2];
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[30] + 0x00000250u);
    { c->r[31] = 0x089cd0c4u; c->r[4] = c->r[2] + 0u; func_089d337c(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000250u);
    c->r[2] = c->r[2] & 0x0001u;
    c->r[2] = c->r[2] << 3;
    c->r[2] = c->r[3] + c->r[2];
    c->r[3] = c->r[30] + 0x00000020u;
    c->r[4] = c->r[2] + 0u;
    c->r[5] = c->r[3] + 0u;
    { c->r[31] = 0x089cd0ecu; c->r[6] = mem_r32(ram, c->r[30] + 0x000002b0u); func_089cbf1c(c, ram); }
    mem_w8(ram, c->r[16] + 0x00000000u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000250u);
    c->r[2] = 0x08b80000u;
    c->r[2] = c->r[2] + 0xfffff460u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000000u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_089cd124; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000250u);
    c->r[2] = 0x08b80000u;
    c->r[2] = c->r[2] + 0xfffff460u;
    c->r[3] = c->r[3] + c->r[2];
    c->r[2] = 0u + 0x00000008u;
    mem_w8(ram, c->r[3] + 0x00000000u, c->r[2]);
L_089cd124:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000250u);
    c->r[2] = 0x08b80000u;
    c->r[2] = c->r[2] + 0xfffff460u;
    c->r[4] = c->r[3] + c->r[2];
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000250u);
    c->r[2] = 0x08b80000u;
    c->r[2] = c->r[2] + 0xfffff460u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x000002b0u);
    c->r[2] = c->r[2] ^ 0x0000u;
    c->r[2] = (c->r[2] < 0x00000001u) ? 1u : 0u;
    c->r[2] = c->r[2] << 7;
    c->r[2] = c->r[2] | c->r[3];
    mem_w8(ram, c->r[4] + 0x00000000u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000250u);
    c->r[2] = 0x08b80000u;
    c->r[2] = c->r[2] + 0xfffff460u;
    c->r[4] = c->r[3] + c->r[2];
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000250u);
    c->r[2] = 0x08b80000u;
    c->r[2] = c->r[2] + 0xfffff460u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000258u);
    c->r[2] = (0u < c->r[2]) ? 1u : 0u;
    c->r[2] = c->r[2] << 6;
    c->r[2] = c->r[2] | c->r[3];
    mem_w8(ram, c->r[4] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_089cd1ac; }
    { c->r[31] = 0x089cd1acu; c->r[4] = 0u + 0x00000014u; hle_dispatch_stub(c, ram, 0x08a247d4u); /* sceKernelDelayThread */ }
L_089cd1ac:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000250u);
    c->r[2] = c->r[2] + 0x00000001u;
    mem_w32(ram, c->r[30] + 0x00000250u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000220u);
    c->r[2] = c->r[2] + 0x00000002u;
    { mem_w32(ram, c->r[30] + 0x00000220u, c->r[2]); goto L_089cce44; }
L_089cd1c8:
    { c->r[31] = 0x089cd1d0u; hle_dispatch_stub(c, ram, 0x08a2483cu); /* sceKernelGetSystemTimeLow */ }
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] - c->r[3];
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
L_089cd1dc:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x000002c8u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x000002c4u);
    c->r[16] = mem_r32(ram, c->r[29] + 0x000002c0u);
    { c->r[29] = c->r[29] + 0x000002d0u; return; }
    return; /* fell out of func_089ccd7c */
}

/* func_089d2164  0x089d2164..0x089d21d8  116 bytes, source=sweep */
void func_089d2164(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089d2164u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[2] >> 24;
    c->r[2] = c->r[2] & 0x000fu;
    c->r[3] = c->r[2] << 16;
    c->r[2] = 0x10000000u;
    c->r[2] = c->r[3] | c->r[2];
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x089d21a0u; c->r[5] = c->r[2] + 0u; func_089d20f0(c, ram); }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = 0x00ff0000u;
    c->r[2] = c->r[2] | 0xffffu;
    c->r[3] = c->r[3] & c->r[2];
    c->r[2] = 0x0a000000u;
    c->r[2] = c->r[3] | c->r[2];
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x089d21c4u; c->r[5] = c->r[2] + 0u; func_089d20f0(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_089d2164 */
}

/* func_089d303c  0x089d303c..0x089d3080  68 bytes, source=sweep */
void func_089d303c(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089d303cu);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = 0x25000000u;
    c->r[2] = c->r[2] | c->r[3];
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x089d306cu; c->r[5] = c->r[2] + 0u; func_089d20f0(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_089d303c */
}

/* func_089d45b0  0x089d45b0..0x089d46d0  288 bytes, source=fde */
void func_089d45b0(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089d45b0u);
    c->r[29] = c->r[29] + 0xffffffc0u;
    mem_w32(ram, c->r[29] + 0x00000034u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000030u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    c->r[2] = c->r[6] + 0u;
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[7]);
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[8]);
    mem_w8(ram, c->r[30] + 0x00000008u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    { int _c = ((s32)c->r[2] < 0); if (_c) goto L_089d45f0; }
    { goto L_089d46bc; }
L_089d45f0:
    c->r[2] = c->r[30] + 0x00000020u;
    { c->r[31] = 0x089d45fcu; c->r[4] = c->r[2] + 0u; hle_dispatch_stub(c, ram, 0x08a24b3cu); /* sceNetGetLocalEtherAddr */ }
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    { int _c = ((s32)c->r[2] >= 0); if (_c) goto L_089d4634; }
    c->r[2] = 0x08a50000u;
    c->r[2] = c->r[2] + 0xffffb870u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_089d4634; }
    c->r[4] = 0x08a50000u;
    c->r[4] = c->r[4] + 0xffffb894u;
    c->r[5] = 0u + 0x000002acu;
    c->r[6] = 0x08a50000u;
    { c->r[31] = 0x089d4634u; c->r[6] = c->r[6] + 0xffffb8b4u; func_08a1909c(c, ram); }
L_089d4634:
    c->r[2] = c->r[30] + 0x00000020u;
    c->r[3] = mem_r16(ram, c->r[30] + 0x00000004u);
    c->r[4] = c->r[2] + 0u;
    c->r[5] = c->r[3] + 0u;
    c->r[6] = mem_r32(ram, c->r[30] + 0x00000010u);
    { c->r[31] = 0x089d4650u; c->r[7] = 0u + 0u; hle_dispatch_stub(c, ram, 0x08a24b64u); /* sceNetAdhocPdpCreate */ }
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    { int _c = ((s32)c->r[2] >= 0); if (_c) goto L_089d4678; }
    c->r[4] = 0x08a50000u;
    c->r[4] = c->r[4] + 0xffffb894u;
    c->r[5] = 0u + 0x000002b6u;
    c->r[6] = 0x08a50000u;
    { c->r[31] = 0x089d4678u; c->r[6] = c->r[6] + 0xffffb91cu; func_08a1909c(c, ram); }
L_089d4678:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    mem_w32(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    mem_w32(ram, c->r[3] + 0x00000004u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    mem_w32(ram, c->r[3] + 0x0000000cu, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    mem_w32(ram, c->r[3] + 0x00000010u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r8(ram, c->r[30] + 0x00000008u);
    mem_w8(ram, c->r[3] + 0x00000025u, c->r[2]);
    { c->r[31] = 0x089d46bcu; c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u); func_089d46d0(c, ram); }
L_089d46bc:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000034u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000030u);
    { c->r[29] = c->r[29] + 0x00000040u; return; }
    return; /* fell out of func_089d45b0 */
}

/* func_089d5b1c  0x089d5b1c..0x089d5b6c  80 bytes, source=fde */
void func_089d5b1c(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089d5b1cu);
    c->r[29] = c->r[29] + 0xffffffd0u;
    mem_w32(ram, c->r[29] + 0x00000024u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000020u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[6]);
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[7]);
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[8]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[6] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[7] = mem_r32(ram, c->r[30] + 0x0000000cu);
    { c->r[31] = 0x089d5b58u; c->r[8] = mem_r32(ram, c->r[30] + 0x00000010u); func_089761b8(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000024u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000020u);
    { c->r[29] = c->r[29] + 0x00000030u; return; }
    return; /* fell out of func_089d5b1c */
}

/* func_089d76e0  0x089d76e0..0x089d7a68  904 bytes, source=fde */
void func_089d76e0(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089d76e0u);
    c->r[29] = c->r[29] + 0xffffffa0u;
    mem_w32(ram, c->r[29] + 0x00000058u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000054u, c->r[30]);
    mem_w32(ram, c->r[29] + 0x00000050u, c->r[16]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[6]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_089d7718; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_089d7724; }
L_089d7718:
    c->r[2] = 0u + 0xffffffffu;
    { mem_w32(ram, c->r[30] + 0x00000044u, c->r[2]); goto L_089d7a4c; }
L_089d7724:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000008u);
    { c->r[31] = 0x089d7734u; func_089d705c(c, ram); }
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    { int _c = (c->r[2] != 0u); if (_c) goto L_089d7750; }
    c->r[2] = 0u + 0xffffffffu;
    { mem_w32(ram, c->r[30] + 0x00000044u, c->r[2]); goto L_089d7a4c; }
L_089d7750:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[3] + 0x00000000u);
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[3] + 0x00000004u);
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[3] + 0x00000008u);
    mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]);
    c->r[2] = c->r[30] + 0x00000020u;
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x089d7780u; c->r[5] = 0u + 0u; func_089d7d58(c, ram); }
    c->r[2] = c->r[30] + 0x00000020u;
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0x08b90000u;
    { c->r[31] = 0x089d7794u; c->r[5] = mem_r32(ram, c->r[5] + 0x00000534u); func_089d7d14(c, ram); }
    c->r[2] = c->r[30] + 0x00000020u;
    c->r[4] = c->r[2] + 0u;
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000004u);
    { c->r[31] = 0x089d77a8u; func_089d7db0(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000030u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000030u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_089d77d0; }
    c->r[2] = c->r[30] + 0x00000020u;
    { c->r[31] = 0x089d77c4u; c->r[4] = c->r[2] + 0u; func_089d7d90(c, ram); }
    c->r[2] = 0u + 0xffffffffu;
    { mem_w32(ram, c->r[30] + 0x00000044u, c->r[2]); goto L_089d7a4c; }
L_089d77d0:
    c->r[4] = 0x08b90000u;
    c->r[4] = mem_r32(ram, c->r[4] + 0x00000538u);
    c->r[5] = 0u + 0u;
    { c->r[31] = 0x089d77e4u; c->r[6] = 0u + 0x00000004u; func_08a19ec4(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000030u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000002cu);
    { int _c = (c->r[2] == 0u); if (_c) goto L_089d7820; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000030u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000030u);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = 0x08a50000u;
    c->r[5] = c->r[5] + 0xffffbaa8u;
    c->r[6] = 0x08b90000u;
    c->r[6] = mem_r32(ram, c->r[6] + 0x00000538u);
    c->r[7] = mem_r32(ram, c->r[2] + 0x00000028u);
    c->r[8] = mem_r32(ram, c->r[3] + 0x0000002cu);
    { c->r[31] = 0x089d7820u; c->r[9] = 0u + 0u; func_089d62f8(c, ram); }
L_089d7820:
    mem_w32(ram, c->r[30] + 0x00000034u, 0u);
    mem_w32(ram, c->r[30] + 0x00000038u, 0u);
    mem_w32(ram, c->r[30] + 0x0000003cu, 0u);
    mem_w32(ram, c->r[30] + 0x00000040u, 0u);
L_089d7830:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000030u);
    c->r[3] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x00000026u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000040u);
    c->r[2] = ((s32)c->r[2] < (s32)c->r[3]) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_089d7850; }
    { goto L_089d78a0; }
L_089d7850:
    c->r[2] = c->r[30] + 0x00000020u;
    c->r[3] = c->r[30] + 0x00000038u;
    c->r[6] = c->r[30] + 0x00000034u;
    c->r[4] = c->r[2] + 0u;
    c->r[5] = c->r[3] + 0u;
    c->r[7] = 0x08b90000u;
    { c->r[31] = 0x089d7870u; c->r[7] = mem_r32(ram, c->r[7] + 0x00000538u); func_089d7e78(c, ram); }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000038u);
    { c->r[31] = 0x089d787cu; c->r[5] = mem_r32(ram, c->r[30] + 0x00000008u); func_08a1aefc(c, ram); }
    { int _c = (c->r[2] != 0u); if (_c) goto L_089d7890; }
    c->r[2] = 0u + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x0000003cu, c->r[2]); goto L_089d78a0; }
L_089d7890:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000040u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000040u, c->r[2]); goto L_089d7830; }
L_089d78a0:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000003cu);
    { int _c = (c->r[2] != 0u); if (_c) goto L_089d78c4; }
    c->r[2] = c->r[30] + 0x00000020u;
    { c->r[31] = 0x089d78b8u; c->r[4] = c->r[2] + 0u; func_089d7d90(c, ram); }
    c->r[2] = 0u + 0xffffffffu;
    { mem_w32(ram, c->r[30] + 0x00000044u, c->r[2]); goto L_089d7a4c; }
L_089d78c4:
    mem_w32(ram, c->r[30] + 0x00000040u, 0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000034u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_089d7940; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000000cu);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000034u);
    c->r[6] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[7] = 0u + 0u;
    c->r[8] = 0u + 0u;
    { c->r[31] = 0x089d78f8u; c->r[9] = 0u + 0x00000001u; func_089d62f8(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000040u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000040u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_089d7978; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    mem_w32(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    mem_w32(ram, c->r[3] + 0x00000004u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    mem_w32(ram, c->r[3] + 0x00000008u, c->r[2]);
    c->r[2] = c->r[30] + 0x00000020u;
    { c->r[31] = 0x089d7934u; c->r[4] = c->r[2] + 0u; func_089d7d90(c, ram); }
    c->r[2] = 0u + 0xffffffffu;
    { mem_w32(ram, c->r[30] + 0x00000044u, c->r[2]); goto L_089d7a4c; }
L_089d7940:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    mem_w32(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    mem_w32(ram, c->r[3] + 0x00000004u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    mem_w32(ram, c->r[3] + 0x00000008u, c->r[2]);
    c->r[2] = c->r[30] + 0x00000020u;
    { c->r[31] = 0x089d796cu; c->r[4] = c->r[2] + 0u; func_089d7d90(c, ram); }
    c->r[2] = 0u + 0xffffffffu;
    { mem_w32(ram, c->r[30] + 0x00000044u, c->r[2]); goto L_089d7a4c; }
L_089d7978:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000040u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000014u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_089d79c4; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    mem_w32(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    mem_w32(ram, c->r[3] + 0x00000004u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    mem_w32(ram, c->r[3] + 0x00000008u, c->r[2]);
    c->r[2] = c->r[30] + 0x00000020u;
    { c->r[31] = 0x089d79b8u; c->r[4] = c->r[2] + 0u; func_089d7d90(c, ram); }
    c->r[2] = 0u + 0xffffffffu;
    { mem_w32(ram, c->r[30] + 0x00000044u, c->r[2]); goto L_089d7a4c; }
L_089d79c4:
    c->r[4] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000000cu);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[4] = mem_r32(ram, c->r[4] + 0x00000010u);
    c->r[5] = mem_r32(ram, c->r[2] + 0x00000000u);
    { c->r[31] = 0x089d79e4u; c->r[6] = mem_r32(ram, c->r[3] + 0x00000014u); func_08a19db8(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    mem_w32(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    mem_w32(ram, c->r[3] + 0x00000004u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    mem_w32(ram, c->r[3] + 0x00000008u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000000cu);
    c->r[16] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x00000004u);
    c->r[16] = c->r[16] + 0xffffffffu;
    c->r[2] = c->r[30] + 0x00000020u;
    { c->r[31] = 0x089d7a20u; c->r[4] = c->r[2] + 0u; func_089d7d90(c, ram); }
    { mem_w32(ram, c->r[30] + 0x00000044u, c->r[16]); goto L_089d7a4c; }
    mem_w32(ram, c->r[30] + 0x00000048u, c->r[4]);
    c->r[16] = mem_r32(ram, c->r[30] + 0x00000048u);
    c->r[2] = c->r[30] + 0x00000020u;
    { c->r[31] = 0x089d7a3cu; c->r[4] = c->r[2] + 0u; func_089d7d90(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000048u, c->r[16]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000048u);
    { c->r[31] = 0x089d7a4cu; func_08a163b0(c, ram); }
L_089d7a4c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000044u);
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000058u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000054u);
    c->r[16] = mem_r32(ram, c->r[29] + 0x00000050u);
    { c->r[29] = c->r[29] + 0x00000060u; return; }
    return; /* fell out of func_089d76e0 */
}

/* func_089d8dfc  0x089d8dfc..0x089d8e68  108 bytes, source=fde */
void func_089d8dfc(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089d8dfcu);
    c->r[29] = c->r[29] + 0xffffffd0u;
    mem_w32(ram, c->r[29] + 0x00000024u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000020u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[6]);
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[7]);
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[8]);
    c->r[2] = 0u + 0x00000004u;
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[6] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[7] = mem_r32(ram, c->r[30] + 0x00000008u);
    { c->r[31] = 0x089d8e40u; c->r[8] = mem_r32(ram, c->r[30] + 0x00000010u); func_089d9034(c, ram); }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x089d8e4cu; c->r[5] = mem_r32(ram, c->r[30] + 0x0000000cu); func_089d9468(c, ram); }
    { c->r[31] = 0x089d8e54u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u); func_089d9524(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000024u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000020u);
    { c->r[29] = c->r[29] + 0x00000030u; return; }
    return; /* fell out of func_089d8dfc */
}

/* func_089d9ec8  0x089d9ec8..0x089d9f08  64 bytes, source=fde */
void func_089d9ec8(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089d9ec8u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x089d9eecu; c->r[5] = mem_r32(ram, c->r[30] + 0x00000004u); func_089d9f08(c, ram); }
    { c->r[31] = 0x089d9ef4u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u); func_089da1f0(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_089d9ec8 */
}

/* func_089db3ac  0x089db3ac..0x089db424  120 bytes, source=fde */
void func_089db3ac(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089db3acu);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[4] = 0x08b90000u;
    c->r[4] = mem_r32(ram, c->r[4] + 0x000006b4u);
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[6] = 0x00080000u;
    { c->r[31] = 0x089db3d8u; c->r[6] = c->r[6] | 0x8000u; hle_dispatch_stub(c, ram, 0x08a24a04u); /* sceDmacMemcpy */ }
    c->r[2] = 0u + 0x00000001u;
    c->r[1] = 0x08b90000u;
    mem_w32(ram, c->r[1] + 0x000006b0u, c->r[2]);
    c->r[2] = 0x08b90000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x000006b4u);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[2]);
    c->r[2] = 0x08b90000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x000006b8u);
    c->r[1] = 0x08b90000u;
    mem_w32(ram, c->r[1] + 0x000006b4u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[1] = 0x08b90000u;
    mem_w32(ram, c->r[1] + 0x000006b8u, c->r[2]);
    c->r[2] = 0u + 0u;
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_089db3ac */
}

/* func_089dc408  0x089dc408..0x089dc4b4  172 bytes, source=sweep */
void func_089dc408(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089dc408u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_089dc468; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = 0u + 0x00000001u;
    mem_w32(ram, c->r[3] + 0x00000024u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[7] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[8] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = mem_r32(ram, c->r[2] + 0x00000028u);
    c->r[6] = mem_r32(ram, c->r[3] + 0x0000002cu);
    c->r[7] = mem_r32(ram, c->r[7] + 0x00000030u);
    { c->r[31] = 0x089dc460u; c->r[8] = mem_r32(ram, c->r[8] + 0x00000034u); func_089dc588(c, ram); }
    { goto L_089dc4a0; }
L_089dc468:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    mem_w32(ram, c->r[2] + 0x00000024u, 0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000001cu);
    c->r[3] = c->r[2] + 0xffffffffu;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000020u);
    c->r[2] = c->r[2] + 0xffffffffu;
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = 0u + 0u;
    c->r[6] = 0u + 0u;
    c->r[7] = c->r[3] + 0u;
    { c->r[31] = 0x089dc4a0u; c->r[8] = c->r[2] + 0u; func_089dc588(c, ram); }
L_089dc4a0:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_089dc408 */
}

/* func_089de50c  0x089de50c..0x089de564  88 bytes, source=fde */
void func_089de50c(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089de50cu);
    c->r[29] = c->r[29] + 0xffffffa0u;
    mem_w32(ram, c->r[29] + 0x00000054u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000050u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    c->r[2] = 0u + 0x00000034u;
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = c->r[30] + 0x00000010u;
    c->r[4] = mem_r32(ram, c->r[2] + 0x00000004u);
    { c->r[31] = 0x089de540u; c->r[5] = c->r[3] + 0u; hle_dispatch_stub(c, ram, 0x08a248bcu); /* sceKernelReferEventFlagStatus */ }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000003cu);
    mem_w32(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[2] = 0u + 0u;
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000054u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000050u);
    { c->r[29] = c->r[29] + 0x00000060u; return; }
    return; /* fell out of func_089de50c */
}

/* func_089e1908  0x089e1908..0x089e194c  68 bytes, source=sweep */
void func_089e1908(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089e1908u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = c->r[2] + 0x00000008u;
    c->r[2] = mem_r32(ram, c->r[5] + 0x00000000u);
    c->r[4] = c->r[2] + 0u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    mem_w32(ram, c->r[4] + 0x00000000u, c->r[3]);
    c->r[2] = c->r[2] + 0x00000004u;
    mem_w32(ram, c->r[5] + 0x00000000u, c->r[2]);
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_089e1908 */
}

/* func_089e23dc  0x089e23dc..0x089e2418  60 bytes, source=sweep */
void func_089e23dc(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089e23dcu);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = 0x00ff0000u;
    c->r[2] = c->r[2] | 0xffffu;
    c->r[2] = c->r[3] & c->r[2];
    mem_w32(ram, c->r[4] + 0x00000048u, c->r[2]);
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_089e23dc */
}

/* func_089e3630  0x089e3630..0x089e3694  100 bytes, source=sweep */
void func_089e3630(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089e3630u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[6]);
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[7]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = c->r[2] << 16;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[2] << 8;
    c->r[3] = c->r[3] | c->r[2];
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = c->r[3] | c->r[2];
    c->r[2] = 0xc9000000u;
    c->r[2] = c->r[3] | c->r[2];
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x089e3680u; c->r[5] = c->r[2] + 0u; func_089e1908(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_089e3630 */
}

/* func_089e4888  0x089e4888..0x089e48cc  68 bytes, source=sweep */
void func_089e4888(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089e4888u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = 0x20000000u;
    c->r[2] = c->r[2] | c->r[3];
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x089e48b8u; c->r[5] = c->r[2] + 0u; func_089e1908(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_089e4888 */
}

/* func_089e8e08  0x089e8e08..0x089e90a8  672 bytes, source=fde */
void func_089e8e08(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089e8e08u);
    c->r[29] = c->r[29] + 0xffffffc0u;
    mem_w32(ram, c->r[29] + 0x00000034u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000030u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000700u);
    c->r[2] = 0u + 0x000002e8u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[4] = c->lo;
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000704u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 5;
    c->r[2] = c->r[2] - c->r[3];
    c->r[2] = c->r[2] << 3;
    c->r[3] = c->r[4] + c->r[2];
    c->r[2] = 0x08b90000u;
    c->r[2] = c->r[2] + 0x00000cf0u;
    c->r[4] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000004u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = c->r[2] >> 24;
    c->r[2] = c->r[2] & 0x000fu;
    c->r[3] = c->r[2] << 16;
    c->r[2] = 0x10000000u;
    c->r[2] = c->r[3] | c->r[2];
    { c->r[31] = 0x089e8e88u; c->r[5] = c->r[2] + 0u; func_089ea03c(c, ram); }
    c->r[2] = 0u + 0xffffffffu;
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]);
    c->r[2] = c->r[30] + 0x00000010u;
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0u + 0xffffffffu;
    { c->r[31] = 0x089e8ea4u; c->r[6] = 0u + 0x00000008u; func_08a19ec4(c, ram); }
L_089e8ea4:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000004u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_089e8ebc; }
    { goto L_089e9094; }
L_089e8ebc:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[2] + 0x00000020u;
    mem_w32(ram, c->r[30] + 0x00000020u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000004u);
    c->r[2] = c->r[3] + c->r[2];
    mem_w32(ram, c->r[30] + 0x00000024u, c->r[2]);
    mem_w32(ram, c->r[30] + 0x00000028u, 0u);
L_089e8ee0:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000028u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000008u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_089e8ef8; }
    { goto L_089e8fec; }
L_089e8ef8:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000028u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = c->r[2] + 0x00000010u;
    c->r[3] = mem_r8(ram, c->r[2] + 0x00000003u);
    c->r[2] = 0u + 0x000000ffu;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_089e8f20; }
    { goto L_089e8fec; }
L_089e8f20:
    c->r[3] = c->r[30] + 0x00000010u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000028u);
    c->r[4] = c->r[3] + c->r[2];
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000028u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = c->r[2] + 0x00000010u;
    c->r[3] = mem_r8(ram, c->r[4] + 0x00000000u);
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000003u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_089e8fdc; }
    c->r[3] = c->r[30] + 0x00000010u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000028u);
    c->r[4] = c->r[3] + c->r[2];
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000028u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = c->r[2] + 0x00000010u;
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000003u);
    mem_w8(ram, c->r[4] + 0x00000000u, c->r[2]);
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000700u);
    c->r[2] = 0u + 0x000002e8u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[4] = c->lo;
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000704u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 5;
    c->r[2] = c->r[2] - c->r[3];
    c->r[2] = c->r[2] << 3;
    c->r[3] = c->r[4] + c->r[2];
    c->r[2] = 0x08b90000u;
    c->r[2] = c->r[2] + 0x00000cf0u;
    c->r[4] = c->r[3] + c->r[2];
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000028u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = c->r[2] + 0x00000010u;
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000003u);
    c->r[3] = c->r[2] << 6;
    c->r[2] = 0x08b90000u;
    c->r[2] = c->r[2] + 0x000012c0u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000028u);
    { c->r[31] = 0x089e8fdcu; c->r[6] = c->r[2] + 0u; func_089ea1a4(c, ram); }
L_089e8fdc:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000028u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000028u, c->r[2]); goto L_089e8ee0; }
L_089e8fec:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_089e9068; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]);
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000700u);
    c->r[2] = 0u + 0x000002e8u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[4] = c->lo;
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000704u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 5;
    c->r[2] = c->r[2] - c->r[3];
    c->r[2] = c->r[2] << 3;
    c->r[3] = c->r[4] + c->r[2];
    c->r[2] = 0x08b90000u;
    c->r[2] = c->r[2] + 0x00000cf0u;
    c->r[4] = c->r[3] + c->r[2];
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = 0x00ff0000u;
    c->r[2] = c->r[2] | 0xffffu;
    c->r[3] = c->r[3] & c->r[2];
    c->r[2] = 0x12000000u;
    c->r[2] = c->r[3] | c->r[2];
    { c->r[31] = 0x089e9068u; c->r[5] = c->r[2] + 0u; func_089ea03c(c, ram); }
L_089e9068:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[6] = mem_r32(ram, c->r[30] + 0x00000020u);
    { c->r[31] = 0x089e907cu; c->r[7] = mem_r32(ram, c->r[30] + 0x00000024u); func_089eb728(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000008u);
    c->r[2] = c->r[3] + c->r[2];
    { mem_w32(ram, c->r[30] + 0x00000004u, c->r[2]); goto L_089e8ea4; }
L_089e9094:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000034u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000030u);
    { c->r[29] = c->r[29] + 0x00000040u; return; }
    return; /* fell out of func_089e8e08 */
}

/* func_089eae20  0x089eae20..0x089eae64  68 bytes, source=sweep */
void func_089eae20(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089eae20u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = 0x24000000u;
    c->r[2] = c->r[2] | c->r[3];
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x089eae50u; c->r[5] = c->r[2] + 0u; func_089ea03c(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_089eae20 */
}

/* func_089ed5c0  0x089ed5c0..0x089ee680  4288 bytes, source=fde */
void func_089ed5c0(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089ed5c0u);
    c->r[29] = c->r[29] + 0xfffffe90u;
    mem_w32(ram, c->r[29] + 0x00000164u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000160u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_wf32(ram, c->r[30] + 0x00000004u, c->f[12]);
    mem_wf32(ram, c->r[30] + 0x00000008u, c->f[13]);
    mem_wf32(ram, c->r[30] + 0x0000000cu, c->f[14]);
    mem_wf32(ram, c->r[30] + 0x00000010u, c->f[15]);
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[5]);
    mem_w32(ram, c->r[30] + 0x00000018u, c->r[6]);
    mem_w32(ram, c->r[30] + 0x0000001cu, 0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000054u);
    c->f[0] = mem_rf32(ram, c->r[3] + 0x00000050u);
    c->f[0] = c->f[1] - c->f[0];
    mem_wf32(ram, c->r[30] + 0x00000020u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000004u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000050u);
    c->f[0] = c->f[1] - c->f[0];
    mem_wf32(ram, c->r[30] + 0x00000024u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x0000006cu);
    c->f[1] = (f32)(s32)f2u(c->f[0]);
    c->r[1] = 0x08a50000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffffc44cu);
    c->f[1] = c->f[0] / c->f[1];
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x0000002cu);
    c->f[0] = c->f[1] * c->f[0];
    mem_wf32(ram, c->r[30] + 0x00000028u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[1] = 0x08a50000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0xffffc44cu);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000064u);
    c->f[0] = c->f[1] / c->f[0];
    mem_wf32(ram, c->r[30] + 0x0000002cu, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000068u);
    c->f[0] = mem_rf32(ram, c->r[3] + 0x00000064u);
    c->f[0] = c->f[1] * c->f[0];
    mem_wf32(ram, c->r[30] + 0x00000030u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000060u);
    mem_wf32(ram, c->r[30] + 0x00000034u, c->f[0]);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000034u);
    c->f[0] = u2f(0u);
    alx_c_cond_s(c, 2, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_089ed6a0; }
    { goto L_089ed6ac; }
L_089ed6a0:
    c->r[1] = 0x08a50000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffffc450u);
    mem_wf32(ram, c->r[30] + 0x00000034u, c->f[0]);
L_089ed6ac:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000077u);
    c->r[3] = c->r[2] << 10;
    c->r[2] = 0x08a60000u;
    c->r[2] = c->r[2] + 0xffffdb40u;
    c->r[2] = c->r[2] + c->r[3];
    mem_w32(ram, c->r[30] + 0x00000038u, c->r[2]);
    c->r[2] = 0x08a60000u;
    c->r[2] = c->r[2] + 0x00004340u;
    mem_w32(ram, c->r[30] + 0x0000003cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000079u);
    c->r[2] = c->r[2] & 0x0020u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_089ed6f4; }
    c->r[2] = 0x08a60000u;
    c->r[2] = c->r[2] + 0x00003f40u;
    mem_w32(ram, c->r[30] + 0x00000038u, c->r[2]);
L_089ed6f4:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000079u);
    c->r[2] = c->r[2] & 0x0010u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_089ed714; }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x089ed714u; c->r[5] = 0u + 0u; func_089dff38(c, ram); }
L_089ed714:
    c->r[2] = c->r[30] + 0x00000040u;
    { c->r[31] = 0x089ed720u; c->r[4] = c->r[2] + 0u; func_08808260(c, ram); }
    c->r[3] = c->r[30] + 0x00000040u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x0000005cu);
    c->r[1] = 0x08a50000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffffc454u);
    c->f[2] = c->f[1] * c->f[0];
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000058u);
    c->r[1] = 0x08a50000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffffc454u);
    c->f[0] = c->f[1] * c->f[0];
    c->r[4] = c->r[3] + 0u;
    c->f[12] = c->f[2];
    c->f[13] = c->f[0];
    c->f[14] = u2f(0u);
    { c->r[31] = 0x089ed764u; func_0885a0b8(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000000u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000008u);
    c->f[0] = c->f[1] * c->f[0];
    mem_wf32(ram, c->r[30] + 0x00000070u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000004u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000008u);
    c->f[0] = c->f[1] * c->f[0];
    mem_wf32(ram, c->r[30] + 0x00000074u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000008u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000008u);
    c->f[0] = c->f[1] * c->f[0];
    mem_wf32(ram, c->r[30] + 0x00000078u, c->f[0]);
    c->r[1] = 0x08a50000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffffc44cu);
    mem_wf32(ram, c->r[30] + 0x0000007cu, c->f[0]);
    c->r[2] = c->r[30] + 0x00000040u;
    c->r[3] = c->r[30] + 0x00000040u;
    c->r[4] = c->r[2] + 0u;
    c->r[5] = c->r[3] + 0u;
    { c->r[31] = 0x089ed7c4u; c->r[6] = mem_r32(ram, c->r[30] + 0x00000014u); func_0884c6d4(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000079u);
    c->r[2] = c->r[2] & 0x0010u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_089ed7e4; }
    c->r[2] = c->r[30] + 0x00000040u;
    { mem_w32(ram, c->r[30] + 0x000000fcu, c->r[2]); goto L_089ed7f4; }
L_089ed7e4:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000044u);
    c->r[2] = c->r[2] + 0x000001a0u;
    mem_w32(ram, c->r[30] + 0x000000fcu, c->r[2]);
L_089ed7f4:
    c->r[3] = mem_r32(ram, c->r[30] + 0x000000fcu);
    mem_w32(ram, c->r[30] + 0x00000080u, c->r[3]);
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000700u);
    c->r[2] = 0u + 0x000002e8u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[4] = c->lo;
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000704u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 5;
    c->r[2] = c->r[2] - c->r[3];
    c->r[2] = c->r[2] << 3;
    c->r[3] = c->r[4] + c->r[2];
    c->r[2] = 0x08b90000u;
    c->r[2] = c->r[2] + 0x00000cf0u;
    c->r[4] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000002cu);
    c->r[3] = c->r[2] >> 8;
    c->r[2] = 0x48000000u;
    c->r[2] = c->r[3] | c->r[2];
    { c->r[31] = 0x089ed850u; c->r[5] = c->r[2] + 0u; func_089eefec(c, ram); }
    c->f[1] = mem_rf32(ram, c->r[30] + 0x0000002cu);
    c->r[1] = 0x08a50000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffffc44cu);
    alx_c_cond_s(c, 2, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_089ed874; }
    { goto L_089ed8cc; }
L_089ed874:
    mem_w32(ram, c->r[30] + 0x00000084u, 0u);
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000700u);
    c->r[2] = 0u + 0x000002e8u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[4] = c->lo;
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000704u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 5;
    c->r[2] = c->r[2] - c->r[3];
    c->r[2] = c->r[2] << 3;
    c->r[3] = c->r[4] + c->r[2];
    c->r[2] = 0x08b90000u;
    c->r[2] = c->r[2] + 0x00000cf0u;
    c->r[4] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000084u);
    c->r[3] = c->r[2] >> 8;
    c->r[2] = 0x4a000000u;
    c->r[2] = c->r[3] | c->r[2];
    { c->r[31] = 0x089ed8ccu; c->r[5] = c->r[2] + 0u; func_089eefec(c, ram); }
L_089ed8cc:
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000700u);
    c->r[2] = 0u + 0x000002e8u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[4] = c->lo;
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000704u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 5;
    c->r[2] = c->r[2] - c->r[3];
    c->r[2] = c->r[2] << 3;
    c->r[3] = c->r[4] + c->r[2];
    c->r[2] = 0x08b90000u;
    c->r[2] = c->r[2] + 0x00000cf0u;
    c->r[4] = c->r[3] + c->r[2];
    c->r[2] = 0x08a60000u;
    c->r[2] = c->r[2] + 0x00004740u;
    c->r[2] = c->r[2] >> 24;
    c->r[2] = c->r[2] & 0x000fu;
    c->r[3] = c->r[2] << 16;
    c->r[2] = 0x10000000u;
    c->r[2] = c->r[3] | c->r[2];
    { c->r[31] = 0x089ed92cu; c->r[5] = c->r[2] + 0u; func_089eefec(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000020u);
    c->r[1] = 0x08a50000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffffc458u);
    c->f[1] = c->f[1] * c->f[0];
    mem_wf32(ram, c->r[30] + 0x00000100u, c->f[1]);
    c->r[1] = 0x08a50000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffffc45cu);
    mem_wf32(ram, c->r[30] + 0x00000108u, c->f[0]);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000100u);
    c->f[2] = mem_rf32(ram, c->r[30] + 0x00000108u);
    alx_c_cond_s(c, 14, c->f[2], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_089ed978; }
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000100u);
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    { mem_wf32(ram, c->r[30] + 0x00000104u, c->f[0]); goto L_089ed99c; }
L_089ed978:
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000100u);
    c->f[2] = mem_rf32(ram, c->r[30] + 0x00000108u);
    c->f[0] = c->f[1] - c->f[2];
    c->r[2] = 0x80000000u;
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    mem_wf32(ram, c->r[30] + 0x00000104u, c->f[0]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000104u);
    c->r[3] = c->r[3] | c->r[2];
    mem_w32(ram, c->r[30] + 0x00000104u, c->r[3]);
L_089ed99c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000104u);
    mem_w32(ram, c->r[30] + 0x00000088u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000024u);
    c->r[1] = 0x08a50000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffffc458u);
    c->f[1] = c->f[1] * c->f[0];
    mem_wf32(ram, c->r[30] + 0x0000010cu, c->f[1]);
    c->r[1] = 0x08a50000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffffc45cu);
    mem_wf32(ram, c->r[30] + 0x00000114u, c->f[0]);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x0000010cu);
    c->f[2] = mem_rf32(ram, c->r[30] + 0x00000114u);
    alx_c_cond_s(c, 14, c->f[2], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_089ed9f0; }
    c->f[0] = mem_rf32(ram, c->r[30] + 0x0000010cu);
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    { mem_wf32(ram, c->r[30] + 0x00000110u, c->f[0]); goto L_089eda14; }
L_089ed9f0:
    c->f[1] = mem_rf32(ram, c->r[30] + 0x0000010cu);
    c->f[2] = mem_rf32(ram, c->r[30] + 0x00000114u);
    c->f[0] = c->f[1] - c->f[2];
    c->r[2] = 0x80000000u;
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    mem_wf32(ram, c->r[30] + 0x00000110u, c->f[0]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000110u);
    c->r[3] = c->r[3] | c->r[2];
    mem_w32(ram, c->r[30] + 0x00000110u, c->r[3]);
L_089eda14:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000110u);
    c->r[3] = c->r[2] << 8;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000088u);
    c->r[2] = c->r[2] | c->r[3];
    mem_w32(ram, c->r[30] + 0x00000088u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000028u);
    c->r[1] = 0x08a50000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffffc458u);
    c->f[1] = c->f[1] * c->f[0];
    mem_wf32(ram, c->r[30] + 0x00000118u, c->f[1]);
    c->r[1] = 0x08a50000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffffc45cu);
    mem_wf32(ram, c->r[30] + 0x00000120u, c->f[0]);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000118u);
    c->f[2] = mem_rf32(ram, c->r[30] + 0x00000120u);
    alx_c_cond_s(c, 14, c->f[2], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_089eda74; }
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000118u);
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    { mem_wf32(ram, c->r[30] + 0x0000011cu, c->f[0]); goto L_089eda98; }
L_089eda74:
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000118u);
    c->f[2] = mem_rf32(ram, c->r[30] + 0x00000120u);
    c->f[0] = c->f[1] - c->f[2];
    c->r[2] = 0x80000000u;
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    mem_wf32(ram, c->r[30] + 0x0000011cu, c->f[0]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000011cu);
    c->r[3] = c->r[3] | c->r[2];
    mem_w32(ram, c->r[30] + 0x0000011cu, c->r[3]);
L_089eda98:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000011cu);
    c->r[3] = c->r[2] << 16;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000088u);
    c->r[2] = c->r[2] | c->r[3];
    mem_w32(ram, c->r[30] + 0x00000088u, c->r[2]);
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000700u);
    c->r[2] = 0u + 0x000002e8u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[4] = c->lo;
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000704u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 5;
    c->r[2] = c->r[2] - c->r[3];
    c->r[2] = c->r[2] << 3;
    c->r[3] = c->r[4] + c->r[2];
    c->r[2] = 0x08b90000u;
    c->r[2] = c->r[2] + 0x00000cf0u;
    c->r[4] = c->r[3] + c->r[2];
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000088u);
    c->r[2] = 0xff000000u;
    c->r[2] = c->r[3] | c->r[2];
    { c->r[31] = 0x089edafcu; c->r[5] = c->r[2] + 0u; func_089ef088(c, ram); }
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[4] = c->r[2] + 0x00000010u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[3] = c->r[2] + 0x00000030u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = c->r[2] + 0x00000040u;
    vfpu_exec(c, ram, 0xd8a00000u); /* lv.q */
    vfpu_exec(c, ram, 0xd8810000u); /* lv.q */
    vfpu_exec(c, ram, 0xd8620000u); /* lv.q */
    vfpu_exec(c, ram, 0xd8430000u); /* lv.q */
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000080u);
    vfpu_exec(c, ram, 0xdbc40040u); /* lv.q */
    vfpu_exec(c, ram, 0xdbc50050u); /* lv.q */
    vfpu_exec(c, ram, 0xdbc60060u); /* lv.q */
    vfpu_exec(c, ram, 0xdbc70070u); /* lv.q */
    vfpu_exec(c, ram, 0xd8480000u); /* lv.q */
    vfpu_exec(c, ram, 0xd8490010u); /* lv.q */
    vfpu_exec(c, ram, 0xd84a0020u); /* lv.q */
    vfpu_exec(c, ram, 0xd84b0030u); /* lv.q */
    mem_w32(ram, c->r[30] + 0x0000008cu, 0u);
L_089edb50:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000008cu);
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000006cu);
    c->r[2] = ((s32)c->r[3] < (s32)c->r[2]) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_089edb70; }
    { goto L_089ee64c; }
L_089edb70:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    { int _c = (c->r[2] == 0u); if (_c) goto L_089edba4; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000008cu);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000001cu);
    alx_div(c, c->r[2], c->r[3]);
    c->r[2] = c->hi;
    if (c->r[3] == 0u) { recomp_break(c, ram, 0x089edb90u, 0x7u); goto L_089edb94; }
L_089edb94:
    { int _c = (c->r[2] == 0u); if (_c) goto L_089edba4; }
    { goto L_089ee62c; }
L_089edba4:
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000024u);
    c->f[0] = u2f(0u);
    alx_c_cond_s(c, 12, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_089ee62c; }
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000024u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000020u);
    alx_c_cond_s(c, 12, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_089ee62c; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[3] = mem_r8(ram, c->r[2] + 0x00000076u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000008cu);
    c->r[3] = c->r[3] + c->r[2];
    c->r[2] = (u32)((s32)c->r[3] >> 31);
    c->r[2] = c->r[2] >> 26;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = (u32)((s32)c->r[2] >> 6);
    c->r[2] = c->r[2] << 6;
    c->r[2] = c->r[3] - c->r[2];
    mem_w32(ram, c->r[30] + 0x00000090u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000090u);
    c->r[3] = c->r[2] << 4;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000038u);
    c->r[2] = c->r[2] + c->r[3];
    mem_w32(ram, c->r[30] + 0x00000094u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000090u);
    c->r[3] = c->r[2] << 4;
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000003cu);
    c->r[2] = c->r[2] + c->r[3];
    mem_w32(ram, c->r[30] + 0x00000098u, c->r[2]);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000024u);
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    c->f[1] = (f32)(s32)f2u(c->f[0]);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000024u);
    c->f[0] = c->f[0] - c->f[1];
    mem_wf32(ram, c->r[30] + 0x00000084u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000094u);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000084u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x0000000cu);
    c->f[0] = c->f[1] * c->f[0];
    mem_wf32(ram, c->r[30] + 0x0000009cu, c->f[0]);
    c->r[2] = c->r[30] + 0x000000a0u;
    { c->r[31] = 0x089edc60u; c->r[4] = c->r[2] + 0u; func_08808240(c, ram); }
    c->r[2] = c->r[30] + 0x000000b0u;
    { c->r[31] = 0x089edc6cu; c->r[4] = c->r[2] + 0u; func_08808260(c, ram); }
    c->f[2] = mem_rf32(ram, c->r[30] + 0x00000084u);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000008u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x0000009cu);
    c->r[8] = f2u(c->f[2]);
    c->r[9] = f2u(c->f[1]);
    c->r[10] = f2u(c->f[0]);
    vfpu_exec(c, ram, 0x48e8000cu); /* mtv */
    vfpu_exec(c, ram, 0x48e9002cu); /* mtv */
    vfpu_exec(c, ram, 0x48ea004cu); /* mtv */
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000094u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000098u);
    vfpu_exec(c, ram, 0xd8700000u); /* lv.q */
    vfpu_exec(c, ram, 0xd8510000u); /* lv.q */
    vfpu_exec(c, ram, 0x65609092u); /* vscl.q */
    vfpu_exec(c, ram, 0x650c9292u); /* vscl.q */
    vfpu_exec(c, ram, 0x64019193u); /* vmul.q */
    vfpu_exec(c, ram, 0x60129393u); /* vadd.q */
    vfpu_exec(c, ram, 0x652c9393u); /* vscl.q */
    vfpu_exec(c, ram, 0xf113a414u); /* vtfm3.t */
    vfpu_exec(c, ram, 0x60079414u); /* vadd.t */
    vfpu_exec(c, ram, 0x644c4c15u); /* vmul.s */
    vfpu_exec(c, ram, 0x64611515u); /* vmul.s */
    vfpu_exec(c, ram, 0x642c1515u); /* vmul.s */
    vfpu_exec(c, ram, 0x60153434u); /* vadd.s */
    vfpu_exec(c, ram, 0xfbd400a0u); /* sv.q */
    vfpu_exec(c, ram, 0x60828310u); /* vsub.t */
    vfpu_exec(c, ram, 0x654c9010u); /* vscl.t */
    vfpu_exec(c, ram, 0x60108210u); /* vadd.t */
    vfpu_exec(c, ram, 0xf38380b4u); /* vmidt.q */
    vfpu_exec(c, ram, 0x642c1014u); /* vmul.s */
    vfpu_exec(c, ram, 0x642c3035u); /* vmul.s */
    vfpu_exec(c, ram, 0xd0650070u); /* vcst.s */
    vfpu_exec(c, ram, 0x64705050u); /* vmul.s */
    vfpu_exec(c, ram, 0xf38380b8u); /* vmidt.q */
    vfpu_exec(c, ram, 0xf3a45098u); /* vrot.p */
    vfpu_exec(c, ram, 0xf3b15099u); /* vrot.p */
    vfpu_exec(c, ram, 0xf03894bcu); /* vmmul.q */
    vfpu_exec(c, ram, 0xf0289cb4u); /* vmmul.q */
    vfpu_exec(c, ram, 0xfbd400b0u); /* sv.q */
    vfpu_exec(c, ram, 0xfbd500c0u); /* sv.q */
    vfpu_exec(c, ram, 0xfbd600d0u); /* sv.q */
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000700u);
    c->r[2] = 0u + 0x000002e8u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[4] = c->lo;
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000704u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 5;
    c->r[2] = c->r[2] - c->r[3];
    c->r[2] = c->r[2] << 3;
    c->r[3] = c->r[4] + c->r[2];
    c->r[2] = 0x08b90000u;
    c->r[2] = c->r[2] + 0x00000cf0u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x089edd58u; c->r[5] = 0x3a000000u; func_089eefec(c, ram); }
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000700u);
    c->r[2] = 0u + 0x000002e8u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[4] = c->lo;
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000704u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 5;
    c->r[2] = c->r[2] - c->r[3];
    c->r[2] = c->r[2] << 3;
    c->r[3] = c->r[4] + c->r[2];
    c->r[2] = 0x08b90000u;
    c->r[2] = c->r[2] + 0x00000cf0u;
    c->r[4] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000b0u);
    c->r[3] = c->r[2] >> 8;
    c->r[2] = 0x3b000000u;
    c->r[2] = c->r[3] | c->r[2];
    { c->r[31] = 0x089eddacu; c->r[5] = c->r[2] + 0u; func_089eefec(c, ram); }
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000700u);
    c->r[2] = 0u + 0x000002e8u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[4] = c->lo;
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000704u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 5;
    c->r[2] = c->r[2] - c->r[3];
    c->r[2] = c->r[2] << 3;
    c->r[3] = c->r[4] + c->r[2];
    c->r[2] = 0x08b90000u;
    c->r[2] = c->r[2] + 0x00000cf0u;
    c->r[4] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000b4u);
    c->r[3] = c->r[2] >> 8;
    c->r[2] = 0x3b000000u;
    c->r[2] = c->r[3] | c->r[2];
    { c->r[31] = 0x089ede00u; c->r[5] = c->r[2] + 0u; func_089eefec(c, ram); }
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000700u);
    c->r[2] = 0u + 0x000002e8u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[4] = c->lo;
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000704u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 5;
    c->r[2] = c->r[2] - c->r[3];
    c->r[2] = c->r[2] << 3;
    c->r[3] = c->r[4] + c->r[2];
    c->r[2] = 0x08b90000u;
    c->r[2] = c->r[2] + 0x00000cf0u;
    c->r[4] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000b8u);
    c->r[3] = c->r[2] >> 8;
    c->r[2] = 0x3b000000u;
    c->r[2] = c->r[3] | c->r[2];
    { c->r[31] = 0x089ede54u; c->r[5] = c->r[2] + 0u; func_089eefec(c, ram); }
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000700u);
    c->r[2] = 0u + 0x000002e8u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[4] = c->lo;
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000704u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 5;
    c->r[2] = c->r[2] - c->r[3];
    c->r[2] = c->r[2] << 3;
    c->r[3] = c->r[4] + c->r[2];
    c->r[2] = 0x08b90000u;
    c->r[2] = c->r[2] + 0x00000cf0u;
    c->r[4] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000c0u);
    c->r[3] = c->r[2] >> 8;
    c->r[2] = 0x3b000000u;
    c->r[2] = c->r[3] | c->r[2];
    { c->r[31] = 0x089edea8u; c->r[5] = c->r[2] + 0u; func_089eefec(c, ram); }
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000700u);
    c->r[2] = 0u + 0x000002e8u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[4] = c->lo;
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000704u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 5;
    c->r[2] = c->r[2] - c->r[3];
    c->r[2] = c->r[2] << 3;
    c->r[3] = c->r[4] + c->r[2];
    c->r[2] = 0x08b90000u;
    c->r[2] = c->r[2] + 0x00000cf0u;
    c->r[4] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000c4u);
    c->r[3] = c->r[2] >> 8;
    c->r[2] = 0x3b000000u;
    c->r[2] = c->r[3] | c->r[2];
    { c->r[31] = 0x089edefcu; c->r[5] = c->r[2] + 0u; func_089eefec(c, ram); }
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000700u);
    c->r[2] = 0u + 0x000002e8u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[4] = c->lo;
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000704u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 5;
    c->r[2] = c->r[2] - c->r[3];
    c->r[2] = c->r[2] << 3;
    c->r[3] = c->r[4] + c->r[2];
    c->r[2] = 0x08b90000u;
    c->r[2] = c->r[2] + 0x00000cf0u;
    c->r[4] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000c8u);
    c->r[3] = c->r[2] >> 8;
    c->r[2] = 0x3b000000u;
    c->r[2] = c->r[3] | c->r[2];
    { c->r[31] = 0x089edf50u; c->r[5] = c->r[2] + 0u; func_089eefec(c, ram); }
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000700u);
    c->r[2] = 0u + 0x000002e8u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[4] = c->lo;
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000704u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 5;
    c->r[2] = c->r[2] - c->r[3];
    c->r[2] = c->r[2] << 3;
    c->r[3] = c->r[4] + c->r[2];
    c->r[2] = 0x08b90000u;
    c->r[2] = c->r[2] + 0x00000cf0u;
    c->r[4] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000d0u);
    c->r[3] = c->r[2] >> 8;
    c->r[2] = 0x3b000000u;
    c->r[2] = c->r[3] | c->r[2];
    { c->r[31] = 0x089edfa4u; c->r[5] = c->r[2] + 0u; func_089eefec(c, ram); }
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000700u);
    c->r[2] = 0u + 0x000002e8u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[4] = c->lo;
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000704u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 5;
    c->r[2] = c->r[2] - c->r[3];
    c->r[2] = c->r[2] << 3;
    c->r[3] = c->r[4] + c->r[2];
    c->r[2] = 0x08b90000u;
    c->r[2] = c->r[2] + 0x00000cf0u;
    c->r[4] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000d4u);
    c->r[3] = c->r[2] >> 8;
    c->r[2] = 0x3b000000u;
    c->r[2] = c->r[3] | c->r[2];
    { c->r[31] = 0x089edff8u; c->r[5] = c->r[2] + 0u; func_089eefec(c, ram); }
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000700u);
    c->r[2] = 0u + 0x000002e8u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[4] = c->lo;
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000704u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 5;
    c->r[2] = c->r[2] - c->r[3];
    c->r[2] = c->r[2] << 3;
    c->r[3] = c->r[4] + c->r[2];
    c->r[2] = 0x08b90000u;
    c->r[2] = c->r[2] + 0x00000cf0u;
    c->r[4] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000d8u);
    c->r[3] = c->r[2] >> 8;
    c->r[2] = 0x3b000000u;
    c->r[2] = c->r[3] | c->r[2];
    { c->r[31] = 0x089ee04cu; c->r[5] = c->r[2] + 0u; func_089eefec(c, ram); }
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000700u);
    c->r[2] = 0u + 0x000002e8u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[4] = c->lo;
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000704u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 5;
    c->r[2] = c->r[2] - c->r[3];
    c->r[2] = c->r[2] << 3;
    c->r[3] = c->r[4] + c->r[2];
    c->r[2] = 0x08b90000u;
    c->r[2] = c->r[2] + 0x00000cf0u;
    c->r[4] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000a0u);
    c->r[3] = c->r[2] >> 8;
    c->r[2] = 0x3b000000u;
    c->r[2] = c->r[3] | c->r[2];
    { c->r[31] = 0x089ee0a0u; c->r[5] = c->r[2] + 0u; func_089eefec(c, ram); }
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000700u);
    c->r[2] = 0u + 0x000002e8u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[4] = c->lo;
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000704u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 5;
    c->r[2] = c->r[2] - c->r[3];
    c->r[2] = c->r[2] << 3;
    c->r[3] = c->r[4] + c->r[2];
    c->r[2] = 0x08b90000u;
    c->r[2] = c->r[2] + 0x00000cf0u;
    c->r[4] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000a4u);
    c->r[3] = c->r[2] >> 8;
    c->r[2] = 0x3b000000u;
    c->r[2] = c->r[3] | c->r[2];
    { c->r[31] = 0x089ee0f4u; c->r[5] = c->r[2] + 0u; func_089eefec(c, ram); }
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000700u);
    c->r[2] = 0u + 0x000002e8u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[4] = c->lo;
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000704u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 5;
    c->r[2] = c->r[2] - c->r[3];
    c->r[2] = c->r[2] << 3;
    c->r[3] = c->r[4] + c->r[2];
    c->r[2] = 0x08b90000u;
    c->r[2] = c->r[2] + 0x00000cf0u;
    c->r[4] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000a8u);
    c->r[3] = c->r[2] >> 8;
    c->r[2] = 0x3b000000u;
    c->r[2] = c->r[3] | c->r[2];
    { c->r[31] = 0x089ee148u; c->r[5] = c->r[2] + 0u; func_089eefec(c, ram); }
    c->f[1] = mem_rf32(ram, c->r[30] + 0x0000002cu);
    c->r[1] = 0x08a50000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffffc44cu);
    alx_c_cond_s(c, 12, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_089ee16c; }
    { goto L_089ee1f8; }
L_089ee16c:
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000030u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000084u);
    c->f[0] = c->f[1] * c->f[0];
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    c->f[1] = (f32)(s32)f2u(c->f[0]);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x0000002cu);
    c->f[0] = c->f[0] * c->f[1];
    mem_wf32(ram, c->r[30] + 0x000000f0u, c->f[0]);
    c->r[1] = 0x08a50000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffffc44cu);
    c->f[12] = mem_rf32(ram, c->r[30] + 0x000000f0u);
    { c->r[31] = 0x089ee1a0u; c->f[13] = c->f[0]; func_08a0fd88(c, ram); }
    mem_wf32(ram, c->r[30] + 0x000000f0u, c->f[0]);
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000700u);
    c->r[2] = 0u + 0x000002e8u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[4] = c->lo;
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000704u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 5;
    c->r[2] = c->r[2] - c->r[3];
    c->r[2] = c->r[2] << 3;
    c->r[3] = c->r[4] + c->r[2];
    c->r[2] = 0x08b90000u;
    c->r[2] = c->r[2] + 0x00000cf0u;
    c->r[4] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000f0u);
    c->r[3] = c->r[2] >> 8;
    c->r[2] = 0x4a000000u;
    c->r[2] = c->r[3] | c->r[2];
    { c->r[31] = 0x089ee1f8u; c->r[5] = c->r[2] + 0u; func_089eefec(c, ram); }
L_089ee1f8:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[1] = 0x08a50000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0xffffc44cu);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000084u);
    c->f[1] = c->f[1] - c->f[0];
    c->f[0] = mem_rf32(ram, c->r[2] + 0x0000003cu);
    c->f[2] = c->f[1] * c->f[0];
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x0000004cu);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000084u);
    c->f[0] = c->f[1] * c->f[0];
    c->f[0] = c->f[2] + c->f[0];
    mem_wf32(ram, c->r[30] + 0x000000f0u, c->f[0]);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x000000f0u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x0000000cu);
    c->f[0] = c->f[1] * c->f[0];
    mem_wf32(ram, c->r[30] + 0x000000f0u, c->f[0]);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000084u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000034u);
    c->f[0] = c->f[1] * c->f[0];
    mem_wf32(ram, c->r[30] + 0x000000f8u, c->f[0]);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x000000f8u);
    c->r[1] = 0x08a50000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffffc44cu);
    alx_c_cond_s(c, 12, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_089ee270; }
    { goto L_089ee290; }
L_089ee270:
    c->f[1] = mem_rf32(ram, c->r[30] + 0x000000f8u);
    c->r[1] = 0x08a50000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffffc458u);
    c->f[1] = c->f[1] * c->f[0];
    c->f[0] = mem_rf32(ram, c->r[30] + 0x000000f0u);
    c->f[1] = c->f[1] * c->f[0];
    { mem_wf32(ram, c->r[30] + 0x00000124u, c->f[1]); goto L_089ee2a4; }
L_089ee290:
    c->f[1] = mem_rf32(ram, c->r[30] + 0x000000f0u);
    c->r[1] = 0x08a50000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffffc458u);
    c->f[1] = c->f[1] * c->f[0];
    mem_wf32(ram, c->r[30] + 0x00000124u, c->f[1]);
L_089ee2a4:
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000124u);
    mem_wf32(ram, c->r[30] + 0x000000f0u, c->f[0]);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x000000f0u);
    c->r[1] = 0x08a50000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffffc458u);
    alx_c_cond_s(c, 12, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_089ee2d0; }
    { goto L_089ee2dc; }
L_089ee2d0:
    c->r[1] = 0x08a50000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffffc458u);
    mem_wf32(ram, c->r[30] + 0x000000f0u, c->f[0]);
L_089ee2dc:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[3] = mem_r8(ram, c->r[2] + 0x00000078u);
    c->r[2] = 0u + 0x00000002u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_089ee3b0; }
    c->f[1] = mem_rf32(ram, c->r[30] + 0x000000f0u);
    mem_wf32(ram, c->r[30] + 0x00000128u, c->f[1]);
    c->r[1] = 0x08a50000u;
    c->f[2] = mem_rf32(ram, c->r[1] + 0xffffc45cu);
    mem_wf32(ram, c->r[30] + 0x00000130u, c->f[2]);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000128u);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000130u);
    alx_c_cond_s(c, 14, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_089ee32c; }
    c->f[2] = mem_rf32(ram, c->r[30] + 0x00000128u);
    c->f[2] = u2f((u32)alx_trunc_w_s(c->f[2]));
    { mem_wf32(ram, c->r[30] + 0x0000012cu, c->f[2]); goto L_089ee350; }
L_089ee32c:
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000128u);
    c->f[2] = mem_rf32(ram, c->r[30] + 0x00000130u);
    c->f[0] = c->f[1] - c->f[2];
    c->r[2] = 0x80000000u;
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    mem_wf32(ram, c->r[30] + 0x0000012cu, c->f[0]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000012cu);
    c->r[3] = c->r[3] | c->r[2];
    mem_w32(ram, c->r[30] + 0x0000012cu, c->r[3]);
L_089ee350:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000012cu);
    mem_w32(ram, c->r[30] + 0x000000f4u, c->r[2]);
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000700u);
    c->r[2] = 0u + 0x000002e8u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[4] = c->lo;
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000704u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 5;
    c->r[2] = c->r[2] - c->r[3];
    c->r[2] = c->r[2] << 3;
    c->r[3] = c->r[4] + c->r[2];
    c->r[2] = 0x08b90000u;
    c->r[2] = c->r[2] + 0x00000cf0u;
    c->r[4] = c->r[3] + c->r[2];
    c->r[3] = mem_r32(ram, c->r[30] + 0x000000f4u);
    c->r[2] = 0x58000000u;
    c->r[2] = c->r[3] | c->r[2];
    { c->r[31] = 0x089ee3a8u; c->r[5] = c->r[2] + 0u; func_089eefec(c, ram); }
    { goto L_089ee580; }
L_089ee3b0:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x000000f0u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000020u);
    c->f[1] = c->f[1] * c->f[0];
    mem_wf32(ram, c->r[30] + 0x00000134u, c->f[1]);
    c->r[1] = 0x08a50000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffffc45cu);
    mem_wf32(ram, c->r[30] + 0x0000013cu, c->f[0]);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000134u);
    c->f[2] = mem_rf32(ram, c->r[30] + 0x0000013cu);
    alx_c_cond_s(c, 14, c->f[2], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_089ee3f8; }
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000134u);
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    { mem_wf32(ram, c->r[30] + 0x00000138u, c->f[0]); goto L_089ee41c; }
L_089ee3f8:
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000134u);
    c->f[2] = mem_rf32(ram, c->r[30] + 0x0000013cu);
    c->f[0] = c->f[1] - c->f[2];
    c->r[2] = 0x80000000u;
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    mem_wf32(ram, c->r[30] + 0x00000138u, c->f[0]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000138u);
    c->r[3] = c->r[3] | c->r[2];
    mem_w32(ram, c->r[30] + 0x00000138u, c->r[3]);
L_089ee41c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000138u);
    mem_w32(ram, c->r[30] + 0x000000f4u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x000000f0u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000024u);
    c->f[1] = c->f[1] * c->f[0];
    mem_wf32(ram, c->r[30] + 0x00000140u, c->f[1]);
    c->r[1] = 0x08a50000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffffc45cu);
    mem_wf32(ram, c->r[30] + 0x00000148u, c->f[0]);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000140u);
    c->f[2] = mem_rf32(ram, c->r[30] + 0x00000148u);
    alx_c_cond_s(c, 14, c->f[2], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_089ee46c; }
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000140u);
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    { mem_wf32(ram, c->r[30] + 0x00000144u, c->f[0]); goto L_089ee490; }
L_089ee46c:
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000140u);
    c->f[2] = mem_rf32(ram, c->r[30] + 0x00000148u);
    c->f[0] = c->f[1] - c->f[2];
    c->r[2] = 0x80000000u;
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    mem_wf32(ram, c->r[30] + 0x00000144u, c->f[0]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000144u);
    c->r[3] = c->r[3] | c->r[2];
    mem_w32(ram, c->r[30] + 0x00000144u, c->r[3]);
L_089ee490:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000144u);
    c->r[3] = c->r[2] << 8;
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000f4u);
    c->r[2] = c->r[2] | c->r[3];
    mem_w32(ram, c->r[30] + 0x000000f4u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x000000f0u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000028u);
    c->f[1] = c->f[1] * c->f[0];
    mem_wf32(ram, c->r[30] + 0x0000014cu, c->f[1]);
    c->r[1] = 0x08a50000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffffc45cu);
    mem_wf32(ram, c->r[30] + 0x00000154u, c->f[0]);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x0000014cu);
    c->f[2] = mem_rf32(ram, c->r[30] + 0x00000154u);
    alx_c_cond_s(c, 14, c->f[2], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_089ee4ec; }
    c->f[0] = mem_rf32(ram, c->r[30] + 0x0000014cu);
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    { mem_wf32(ram, c->r[30] + 0x00000150u, c->f[0]); goto L_089ee510; }
L_089ee4ec:
    c->f[1] = mem_rf32(ram, c->r[30] + 0x0000014cu);
    c->f[2] = mem_rf32(ram, c->r[30] + 0x00000154u);
    c->f[0] = c->f[1] - c->f[2];
    c->r[2] = 0x80000000u;
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    mem_wf32(ram, c->r[30] + 0x00000150u, c->f[0]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000150u);
    c->r[3] = c->r[3] | c->r[2];
    mem_w32(ram, c->r[30] + 0x00000150u, c->r[3]);
L_089ee510:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000150u);
    c->r[3] = c->r[2] << 16;
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000f4u);
    c->r[2] = c->r[2] | c->r[3];
    mem_w32(ram, c->r[30] + 0x000000f4u, c->r[2]);
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000700u);
    c->r[2] = 0u + 0x000002e8u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[4] = c->lo;
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000704u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 5;
    c->r[2] = c->r[2] - c->r[3];
    c->r[2] = c->r[2] << 3;
    c->r[3] = c->r[4] + c->r[2];
    c->r[2] = 0x08b90000u;
    c->r[2] = c->r[2] + 0x00000cf0u;
    c->r[4] = c->r[3] + c->r[2];
    c->r[3] = mem_r32(ram, c->r[30] + 0x000000f4u);
    c->r[2] = 0x00ff0000u;
    c->r[2] = c->r[2] | 0xffffu;
    c->r[3] = c->r[3] & c->r[2];
    c->r[2] = 0x55000000u;
    c->r[2] = c->r[3] | c->r[2];
    { c->r[31] = 0x089ee580u; c->r[5] = c->r[2] + 0u; func_089eefec(c, ram); }
L_089ee580:
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000700u);
    c->r[2] = 0u + 0x000002e8u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[4] = c->lo;
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000704u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 5;
    c->r[2] = c->r[2] - c->r[3];
    c->r[2] = c->r[2] << 3;
    c->r[3] = c->r[4] + c->r[2];
    c->r[2] = 0x08b90000u;
    c->r[2] = c->r[2] + 0x00000cf0u;
    c->r[4] = c->r[3] + c->r[2];
    c->r[3] = 0x08a60000u;
    c->r[3] = c->r[3] + 0x00004740u;
    c->r[2] = 0x00ff0000u;
    c->r[2] = c->r[2] | 0xffffu;
    c->r[3] = c->r[3] & c->r[2];
    c->r[2] = 0x01000000u;
    c->r[2] = c->r[3] | c->r[2];
    { c->r[31] = 0x089ee5e0u; c->r[5] = c->r[2] + 0u; func_089eefec(c, ram); }
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000700u);
    c->r[2] = 0u + 0x000002e8u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[4] = c->lo;
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000704u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 5;
    c->r[2] = c->r[2] - c->r[3];
    c->r[2] = c->r[2] << 3;
    c->r[3] = c->r[4] + c->r[2];
    c->r[2] = 0x08b90000u;
    c->r[2] = c->r[2] + 0x00000cf0u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0x04050000u;
    { c->r[31] = 0x089ee62cu; c->r[5] = c->r[5] | 0x0004u; func_089eefec(c, ram); }
L_089ee62c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000008cu);
    c->r[2] = c->r[2] + 0x00000001u;
    mem_w32(ram, c->r[30] + 0x0000008cu, c->r[2]);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000024u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000028u);
    c->f[0] = c->f[1] - c->f[0];
    { mem_wf32(ram, c->r[30] + 0x00000024u, c->f[0]); goto L_089edb50; }
L_089ee64c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000079u);
    c->r[2] = c->r[2] & 0x0010u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_089ee66c; }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x089ee66cu; c->r[5] = 0u + 0x00000001u; func_089dff38(c, ram); }
L_089ee66c:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000164u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000160u);
    { c->r[29] = c->r[29] + 0x00000170u; return; }
    return; /* fell out of func_089ed5c0 */
}

/* func_089f0890  0x089f0890..0x089f0ab0  544 bytes, source=sweep */
void func_089f0890(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089f0890u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[6]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = (c->r[2] < 0x00000016u) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_089f0a9c; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08a50000u;
    c->r[2] = c->r[2] + 0xffffc4a8u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    { u32 _t = c->r[2]; switch (_t) { case 0x089f08dcu: goto L_089f08dc; case 0x089f08f0u: goto L_089f08f0; case 0x089f0904u: goto L_089f0904; case 0x089f0918u: goto L_089f0918; case 0x089f092cu: goto L_089f092c; case 0x089f0940u: goto L_089f0940; case 0x089f0954u: goto L_089f0954; case 0x089f0968u: goto L_089f0968; case 0x089f097cu: goto L_089f097c; case 0x089f0990u: goto L_089f0990; case 0x089f09a4u: goto L_089f09a4; case 0x089f09b8u: goto L_089f09b8; case 0x089f09ccu: goto L_089f09cc; case 0x089f09e0u: goto L_089f09e0; case 0x089f09f8u: goto L_089f09f8; case 0x089f0a10u: goto L_089f0a10; case 0x089f0a28u: goto L_089f0a28; case 0x089f0a40u: goto L_089f0a40; case 0x089f0a54u: goto L_089f0a54; case 0x089f0a68u: goto L_089f0a68; case 0x089f0a7cu: goto L_089f0a7c; case 0x089f0a90u: goto L_089f0a90; default: recomp_trap_unknown_indirect(c, ram, 0x089f08d4u, _t); return; } }
L_089f08dc:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x089f08e8u; c->r[5] = mem_r32(ram, c->r[30] + 0x00000008u); func_089f0ab0(c, ram); }
    { goto L_089f0a9c; }
L_089f08f0:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x089f08fcu; c->r[5] = mem_r32(ram, c->r[30] + 0x00000008u); func_089f0af4(c, ram); }
    { goto L_089f0a9c; }
L_089f0904:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x089f0910u; c->r[5] = mem_r32(ram, c->r[30] + 0x00000008u); func_089f0f40(c, ram); }
    { goto L_089f0a9c; }
L_089f0918:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x089f0924u; c->r[5] = mem_r32(ram, c->r[30] + 0x00000008u); func_089f0b38(c, ram); }
    { goto L_089f0a9c; }
L_089f092c:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x089f0938u; c->r[5] = mem_r32(ram, c->r[30] + 0x00000008u); func_089f0b7c(c, ram); }
    { goto L_089f0a9c; }
L_089f0940:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x089f094cu; c->r[5] = mem_r32(ram, c->r[30] + 0x00000008u); func_089f0bc0(c, ram); }
    { goto L_089f0a9c; }
L_089f0954:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x089f0960u; c->r[5] = mem_r32(ram, c->r[30] + 0x00000008u); func_089f0c04(c, ram); }
    { goto L_089f0a9c; }
L_089f0968:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x089f0974u; c->r[5] = mem_r32(ram, c->r[30] + 0x00000008u); func_089f0c48(c, ram); }
    { goto L_089f0a9c; }
L_089f097c:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x089f0988u; c->r[5] = mem_r32(ram, c->r[30] + 0x00000008u); func_089f0c8c(c, ram); }
    { goto L_089f0a9c; }
L_089f0990:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x089f099cu; c->r[5] = mem_r32(ram, c->r[30] + 0x00000008u); func_089f0cd0(c, ram); }
    { goto L_089f0a9c; }
L_089f09a4:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x089f09b0u; c->r[5] = mem_r32(ram, c->r[30] + 0x00000008u); func_089f0d14(c, ram); }
    { goto L_089f0a9c; }
L_089f09b8:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x089f09c4u; c->r[5] = mem_r32(ram, c->r[30] + 0x00000008u); func_089f0d58(c, ram); }
    { goto L_089f0a9c; }
L_089f09cc:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x089f09d8u; c->r[5] = mem_r32(ram, c->r[30] + 0x00000008u); func_089f0d9c(c, ram); }
    { goto L_089f0a9c; }
L_089f09e0:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = 0u + 0u;
    { c->r[31] = 0x089f09f0u; c->r[6] = mem_r32(ram, c->r[30] + 0x00000008u); func_089f0de0(c, ram); }
    { goto L_089f0a9c; }
L_089f09f8:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = 0u + 0x00000001u;
    { c->r[31] = 0x089f0a08u; c->r[6] = mem_r32(ram, c->r[30] + 0x00000008u); func_089f0de0(c, ram); }
    { goto L_089f0a9c; }
L_089f0a10:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = 0u + 0x00000002u;
    { c->r[31] = 0x089f0a20u; c->r[6] = mem_r32(ram, c->r[30] + 0x00000008u); func_089f0de0(c, ram); }
    { goto L_089f0a9c; }
L_089f0a28:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = 0u + 0x00000003u;
    { c->r[31] = 0x089f0a38u; c->r[6] = mem_r32(ram, c->r[30] + 0x00000008u); func_089f0de0(c, ram); }
    { goto L_089f0a9c; }
L_089f0a40:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x089f0a4cu; c->r[5] = mem_r32(ram, c->r[30] + 0x00000008u); func_089f0e30(c, ram); }
    { goto L_089f0a9c; }
L_089f0a54:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x089f0a60u; c->r[5] = mem_r32(ram, c->r[30] + 0x00000008u); func_089f0e74(c, ram); }
    { goto L_089f0a9c; }
L_089f0a68:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x089f0a74u; c->r[5] = mem_r32(ram, c->r[30] + 0x00000008u); func_089f0eb8(c, ram); }
    { goto L_089f0a9c; }
L_089f0a7c:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x089f0a88u; c->r[5] = mem_r32(ram, c->r[30] + 0x00000008u); func_089f0efc(c, ram); }
    { goto L_089f0a9c; }
L_089f0a90:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x089f0a9cu; c->r[5] = mem_r32(ram, c->r[30] + 0x00000008u); func_089f0fec(c, ram); }
L_089f0a9c:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_089f0890 */
}

/* func_089f1afc  0x089f1afc..0x089f1b40  68 bytes, source=sweep */
void func_089f1afc(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089f1afcu);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = c->r[2] + 0x00000008u;
    c->r[2] = mem_r32(ram, c->r[5] + 0x00000000u);
    c->r[4] = c->r[2] + 0u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    mem_w32(ram, c->r[4] + 0x00000000u, c->r[3]);
    c->r[2] = c->r[2] + 0x00000004u;
    mem_w32(ram, c->r[5] + 0x00000000u, c->r[2]);
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_089f1afc */
}

/* func_089f5550  0x089f5550..0x089f5584  52 bytes, source=residue */
void func_089f5550(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089f5550u);
    c->r[29] = c->r[29] + 0xffffffd0u;
    mem_w32(ram, c->r[29] + 0x00000020u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[6]);
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[7]);
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[8]);
    c->r[2] = 0u + 0u;
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000020u);
    { c->r[29] = c->r[29] + 0x00000030u; return; }
    return; /* fell out of func_089f5550 */
}

/* func_089f7798  0x089f7798..0x089f77f0  88 bytes, source=fde */
void func_089f7798(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089f7798u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x089f77b8u; c->r[4] = c->r[4] + 0x00000af4u; func_08826be8(c, ram); }
    c->f[0] = u2f(c->r[2]);
    c->f[1] = (f32)(s32)f2u(c->f[0]);
    c->r[1] = 0x08a50000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffffd0fcu);
    c->f[0] = c->f[1] / c->f[0];
    mem_wf32(ram, c->r[30] + 0x00000004u, c->f[0]);
    c->r[4] = 0u + 0x00000007u;
    { c->r[31] = 0x089f77dcu; c->f[12] = mem_rf32(ram, c->r[30] + 0x00000004u); func_089fb0b0(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_089f7798 */
}

/* func_089f9134  0x089f9134..0x089f9144  16 bytes, source=sweep */
void func_089f9134(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089f9134u);
    c->r[2] = 0x08b90000u;
    mem_w32(ram, c->r[2] + 0x00006588u, c->r[4]);
    { c->r[2] = 0u + 0u; return; }
    return; /* fell out of func_089f9134 */
}

/* func_089f9c40  0x089f9c40..0x089f9c48  8 bytes, source=sweep */
void func_089f9c40(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089f9c40u);
    { return; }
    return; /* fell out of func_089f9c40 */
}

/* func_089fa5b4  0x089fa5b4..0x089fa618  100 bytes, source=sweep */
void func_089fa5b4(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089fa5b4u);
    c->r[4] = c->r[4] & 0xffffu;
    c->r[29] = c->r[29] + 0xfffffff0u;
    c->r[3] = 0x80000000u;
    c->r[2] = (c->r[4] < 0x00000040u) ? 1u : 0u;
    mem_w32(ram, c->r[29] + 0x00000000u, c->r[16]);
    c->r[3] = c->r[3] | 0x001fu;
    c->r[16] = c->r[5] + 0u;
    { int _c = (c->r[2] == 0u); mem_w32(ram, c->r[29] + 0x00000004u, c->r[31]); if (_c) goto L_089fa5fc; }
    c->r[3] = 0x80000000u;
    { int _c = (c->r[5] == 0u); c->r[3] = c->r[3] | 0x0024u; if (_c) goto L_089fa5fc; }
    { c->r[31] = 0x089fa5ecu; func_089facc8(c, ram); }
    { int _c = (c->r[2] == 0u); c->r[2] = 0u + 0x00000003u; if (_c) goto L_089fa610; }
    mem_w16(ram, c->r[16] + 0x00000000u, 0u);
L_089fa5f8:
    c->r[3] = 0u + 0u;
L_089fa5fc:
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000004u);
    c->r[16] = mem_r32(ram, c->r[29] + 0x00000000u);
    c->r[2] = c->r[3] + 0u;
    { c->r[29] = c->r[29] + 0x00000010u; return; }
L_089fa610:
    { mem_w16(ram, c->r[16] + 0x00000000u, c->r[2]); goto L_089fa5f8; }
    return; /* fell out of func_089fa5b4 */
}

/* func_089fb028  0x089fb028..0x089fb044  28 bytes, source=sweep */
void func_089fb028(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089fb028u);
    c->r[2] = 0x08b90000u;
    c->r[2] = c->r[2] + 0x00006594u;
    c->r[4] = c->r[4] << 5;
    c->r[4] = c->r[4] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[4] + 0x0000001cu);
    { mem_w32(ram, c->r[4] + 0x0000001cu, 0u); return; }
    return; /* fell out of func_089fb028 */
}

/* func_089fbdc0  0x089fbdc0..0x089fbef8  312 bytes, source=fde */
void func_089fbdc0(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089fbdc0u);
    c->r[29] = c->r[29] + 0xffffffa0u;
    mem_w32(ram, c->r[29] + 0x0000004cu, c->r[19]);
    c->r[19] = 0x80000000u;
    mem_w32(ram, c->r[29] + 0x00000044u, c->r[17]);
    c->r[17] = c->r[5] + 0u;
    mem_w32(ram, c->r[29] + 0x00000040u, c->r[16]);
    c->r[16] = c->r[4] + 0u;
    mem_w32(ram, c->r[29] + 0x00000050u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000048u, c->r[18]);
    c->r[2] = mem_r32(ram, c->r[5] + 0x00000000u);
    c->r[3] = c->r[2] ^ 0x00ffu;
    c->r[2] = ~(0u | c->r[2]);
    c->r[2] = (0u < c->r[2]) ? 1u : 0u;
    c->r[3] = (0u < c->r[3]) ? 1u : 0u;
    c->r[2] = c->r[2] & c->r[3];
    { int _c = (c->r[2] == 0u); c->r[4] = c->r[6] + 0u; if (_c) goto L_089fbe28; }
    c->r[3] = mem_r32(ram, c->r[5] + 0x00000004u);
    c->r[6] = c->r[29] + 0u;
    { int _c = (c->r[3] == 0u); c->r[18] = 0x08ba0000u; if (_c) goto L_089fbe48; }
    { int _c = (c->r[4] != 0u); c->r[2] = 0u + 0x00000002u; if (_c) goto L_089fbe20; }
    c->r[2] = 0u + 0x00000003u;
L_089fbe20:
    if (c->r[3] == c->r[2]) { c->r[11] = mem_r16(ram, c->r[17] + 0x00000000u); goto L_089fbe4c; }
L_089fbe28:
    c->r[2] = c->r[19] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000050u);
    c->r[19] = mem_r32(ram, c->r[29] + 0x0000004cu);
    c->r[18] = mem_r32(ram, c->r[29] + 0x00000048u);
    c->r[17] = mem_r32(ram, c->r[29] + 0x00000044u);
    c->r[16] = mem_r32(ram, c->r[29] + 0x00000040u);
    { c->r[29] = c->r[29] + 0x00000060u; return; }
L_089fbe48:
    c->r[11] = mem_r16(ram, c->r[17] + 0x00000000u);
L_089fbe4c:
    c->r[10] = mem_r16(ram, c->r[16] + 0x00000006u);
    c->r[9] = mem_r32(ram, c->r[17] + 0x00000008u);
    c->r[3] = mem_r16(ram, c->r[16] + 0x0000001cu);
    c->f[0] = mem_rf32(ram, c->r[16] + 0x00000010u);
    c->r[7] = mem_r32(ram, c->r[16] + 0x0000000cu);
    c->r[8] = mem_r32(ram, c->r[16] + 0x00000008u);
    c->r[2] = mem_r16(ram, c->r[16] + 0x00000014u);
    c->r[4] = c->r[10] + 0u;
    c->r[5] = c->r[11] + 0u;
    mem_w16(ram, c->r[29] + 0x0000001cu, c->r[3]);
    mem_wf32(ram, c->r[29] + 0x00000010u, c->f[0]);
    mem_w32(ram, c->r[29] + 0x0000000cu, c->r[7]);
    mem_w32(ram, c->r[29] + 0x00000008u, c->r[8]);
    mem_w32(ram, c->r[29] + 0x00000018u, c->r[9]);
    mem_w16(ram, c->r[29] + 0x00000006u, c->r[10]);
    mem_w16(ram, c->r[29] + 0x00000004u, c->r[11]);
    { c->r[31] = 0x089fbe94u; mem_w16(ram, c->r[29] + 0x00000014u, c->r[2]); func_089fd678(c, ram); }
    c->r[6] = c->r[29] + 0x00000030u;
    c->r[4] = mem_r16(ram, c->r[16] + 0x00000006u);
    { c->r[31] = 0x089fbea4u; c->r[5] = mem_r16(ram, c->r[16] + 0x00000004u); func_089fd704(c, ram); }
    c->r[4] = mem_r32(ram, c->r[18] + 0xffff88b4u);
    c->r[2] = mem_r32(ram, c->r[29] + 0x00000018u);
    c->r[3] = mem_r32(ram, c->r[29] + 0x00000038u);
    c->r[4] = c->r[4] + 0x00000001u;
    c->r[5] = ((s32)c->r[4] < (s32)0x00000010u) ? 1u : 0u;
    c->r[2] = c->r[2] - c->r[3];
    c->r[6] = c->r[29] + 0u;
    mem_w32(ram, c->r[29] + 0x00000018u, c->r[2]);
    { int _c = (c->r[5] != 0u); mem_w32(ram, c->r[18] + 0xffff88b4u, c->r[4]); if (_c) goto L_089fbedc; }
L_089fbecc:
    c->r[2] = mem_r32(ram, c->r[18] + 0xffff88b4u);
    c->r[2] = c->r[2] + 0xffffffffu;
    { mem_w32(ram, c->r[18] + 0xffff88b4u, c->r[2]); goto L_089fbe28; }
L_089fbedc:
    c->r[5] = mem_r16(ram, c->r[17] + 0x00000000u);
    { c->r[31] = 0x089fbee8u; c->r[4] = mem_r16(ram, c->r[16] + 0x00000006u); func_089fd7d4(c, ram); }
    c->r[19] = c->r[2] + 0u;
    c->r[2] = mem_r32(ram, c->r[29] + 0x0000000cu);
    { mem_w32(ram, c->r[16] + 0x0000000cu, c->r[2]); goto L_089fbecc; }
    return; /* fell out of func_089fbdc0 */
}

/* func_089fcc3c  0x089fcc3c..0x089fcc88  76 bytes, source=sweep */
void func_089fcc3c(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089fcc3cu);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[17]);
    c->r[4] = c->r[4] & 0xffffu;
    c->r[17] = c->r[6] + 0u;
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[16]);
    c->r[6] = c->r[29] + 0u;
    c->r[16] = c->r[7] + 0u;
    mem_w32(ram, c->r[29] + 0x00000018u, c->r[31]);
    { c->r[31] = 0x089fcc64u; c->r[5] = c->r[5] & 0xffffu; func_089fd704(c, ram); }
    c->r[4] = c->r[16] + 0u;
    c->r[6] = c->r[17] + 0u;
    { c->r[31] = 0x089fcc74u; c->r[5] = c->r[29] + 0u; func_089fbdc0(c, ram); }
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000018u);
    c->r[17] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[16] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_089fcc3c */
}

/* func_089fe024  0x089fe024..0x089fe070  76 bytes, source=residue */
void func_089fe024(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089fe024u);
    c->r[29] = c->r[29] + 0xfffffff0u;
    mem_w32(ram, c->r[29] + 0x00000000u, c->r[16]);
    c->r[16] = 0x08ba0000u;
    c->r[4] = mem_r32(ram, c->r[16] + 0xffff92dcu);
    mem_w32(ram, c->r[29] + 0x00000004u, c->r[31]);
    { c->r[31] = 0x089fe040u; func_089fdb24(c, ram); }
    c->r[2] = mem_r32(ram, c->r[16] + 0xffff92dcu);
    { int _c = (c->r[2] != 0u); c->r[4] = c->r[2] + 0u; if (_c) goto L_089fe060; }
    mem_w32(ram, c->r[16] + 0xffff92dcu, 0u);
L_089fe050:
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000004u);
    c->r[16] = mem_r32(ram, c->r[29] + 0x00000000u);
    { c->r[29] = c->r[29] + 0x00000010u; return; }
L_089fe060:
    { c->r[31] = 0x089fe068u; func_08a0d214(c, ram); }
    { mem_w32(ram, c->r[16] + 0xffff92dcu, 0u); goto L_089fe050; }
    return; /* fell out of func_089fe024 */
}

/* func_089fee78  0x089fee78..0x089feeb4  60 bytes, source=residue */
void func_089fee78(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089fee78u);
    c->r[6] = 0x08ba0000u;
    c->r[3] = 0x80000000u;
    c->r[5] = c->r[6] + 0x00000170u;
    { int _c = (c->r[4] != 0u); c->r[3] = c->r[3] | 0x000au; if (_c) goto L_089feeac; }
    c->r[2] = 0u + 0x00000001u;
    mem_w32(ram, c->r[5] + 0x00000010u, c->r[2]);
    c->r[2] = 0u + 0xffffffffu;
    c->r[3] = 0u + 0u;
    mem_w32(ram, c->r[6] + 0x00000170u, 0u);
    mem_w32(ram, c->r[5] + 0x0000000cu, c->r[2]);
    mem_w32(ram, c->r[5] + 0x00000004u, 0u);
    mem_w32(ram, c->r[5] + 0x00000008u, 0u);
L_089feeac:
    { c->r[2] = c->r[3] + 0u; return; }
    return; /* fell out of func_089fee78 */
}

/* func_08a0163c  0x08a0163c..0x08a0167c  64 bytes, source=residue */
void func_08a0163c(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08a0163cu);
    c->r[2] = 0u + 0x00000094u;
    alx_mult(c, c->r[4], c->r[2]);
    c->r[2] = 0x08ba0000u;
    c->r[2] = c->r[2] + 0x00000184u;
    c->r[4] = c->lo;
    c->r[4] = c->r[4] + c->r[2];
    c->r[3] = mem_r32(ram, c->r[4] + 0x00000000u);
    c->r[3] = c->r[3] + 0xffffffffu;
    c->r[3] = (c->r[3] < 0x00000002u) ? 1u : 0u;
    { int _c = (c->r[3] == 0u); c->r[5] = 0x80000000u; if (_c) goto L_08a01674; }
    c->r[2] = 0u + 0x00000002u;
    mem_w32(ram, c->r[4] + 0x00000030u, c->r[2]);
    c->r[5] = 0u + 0u;
L_08a01674:
    { c->r[2] = c->r[5] + 0u; return; }
    return; /* fell out of func_08a0163c */
}

/* func_08a02adc  0x08a02adc..0x08a02b40  100 bytes, source=sweep */
void func_08a02adc(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08a02adcu);
    c->f[2] = mem_rf32(ram, c->r[5] + 0x00000008u);
    c->f[0] = mem_rf32(ram, c->r[5] + 0x00000000u);
    c->f[1] = mem_rf32(ram, c->r[5] + 0x00000004u);
    mem_wf32(ram, c->r[4] + 0x00000108u, c->f[2]);
    mem_wf32(ram, c->r[4] + 0x00000100u, c->f[0]);
    mem_wf32(ram, c->r[4] + 0x00000104u, c->f[1]);
    c->f[0] = mem_rf32(ram, c->r[6] + 0x00000008u);
    c->f[1] = mem_rf32(ram, c->r[6] + 0x00000000u);
    c->f[2] = mem_rf32(ram, c->r[6] + 0x00000004u);
    mem_wf32(ram, c->r[4] + 0x00000118u, c->f[0]);
    mem_wf32(ram, c->r[4] + 0x00000110u, c->f[1]);
    mem_wf32(ram, c->r[4] + 0x00000114u, c->f[2]);
    c->f[0] = mem_rf32(ram, c->r[7] + 0x00000008u);
    c->f[1] = mem_rf32(ram, c->r[7] + 0x00000000u);
    c->f[2] = mem_rf32(ram, c->r[7] + 0x00000004u);
    mem_wf32(ram, c->r[4] + 0x00000128u, c->f[0]);
    mem_wf32(ram, c->r[4] + 0x00000120u, c->f[1]);
    mem_wf32(ram, c->r[4] + 0x00000124u, c->f[2]);
    c->f[0] = mem_rf32(ram, c->r[8] + 0x00000008u);
    c->f[1] = mem_rf32(ram, c->r[8] + 0x00000000u);
    c->f[2] = mem_rf32(ram, c->r[8] + 0x00000004u);
    mem_wf32(ram, c->r[4] + 0x00000138u, c->f[0]);
    mem_wf32(ram, c->r[4] + 0x00000130u, c->f[1]);
    { mem_wf32(ram, c->r[4] + 0x00000134u, c->f[2]); return; }
    return; /* fell out of func_08a02adc */
}

/* func_08a03544  0x08a03544..0x08a03660  284 bytes, source=sweep */
void func_08a03544(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08a03544u);
    mem_w8(ram, c->r[7] + 0x00000000u, 0u);
    { int _c = ((s32)c->r[6] < 0); c->r[12] = 0u + 0u; if (_c) goto L_08a03614; }
    c->r[8] = mem_r8(ram, c->r[5] + 0x00000000u);
    c->r[14] = 0u + 0x0000002cu;
    c->r[15] = 0u + 0x0000000au;
    c->r[24] = 0u + 0x0000000du;
    c->r[13] = 0u + 0x0000002fu;
L_08a03564:
    c->r[4] = alx_seb(c->r[8]);
L_08a03568:
    c->r[3] = c->r[4] ^ 0x0009u;
    c->r[2] = c->r[4] ^ 0x0020u;
    c->r[3] = (c->r[3] < 0x00000001u) ? 1u : 0u;
    c->r[2] = (c->r[2] < 0x00000001u) ? 1u : 0u;
    c->r[3] = c->r[3] | c->r[2];
    if (c->r[3] != 0u) { c->r[3] = c->r[4] ^ 0x000au; goto L_08a03630; }
    if (c->r[4] == c->r[14]) { c->r[3] = c->r[4] ^ 0x000au; goto L_08a03630; }
    if (c->r[4] == c->r[15]) { c->r[3] = c->r[4] ^ 0x000au; goto L_08a03630; }
    { int _c = (c->r[4] == c->r[24]); c->r[11] = 0u + 0x0000002cu; if (_c) goto L_08a03628; }
    c->r[10] = 0u + 0x0000000du;
    { int _c = (c->r[4] == c->r[13]); c->r[9] = 0u + 0x0000000au; if (_c) goto L_08a03628; }
L_08a035a8:
    c->r[4] = alx_seb(c->r[8]);
    c->r[3] = c->r[4] ^ 0x0009u;
    c->r[2] = c->r[4] ^ 0x0020u;
    c->r[3] = (0u < c->r[3]) ? 1u : 0u;
    c->r[2] = (0u < c->r[2]) ? 1u : 0u;
    c->r[3] = c->r[3] & c->r[2];
    { int _c = (c->r[3] == 0u); if (_c) goto L_08a03600; }
    { int _c = (c->r[4] == c->r[11]); if (_c) goto L_08a03600; }
    { int _c = (c->r[4] == c->r[10]); if (_c) goto L_08a03600; }
    { int _c = (c->r[4] == c->r[9]); if (_c) goto L_08a03600; }
    if (c->r[12] == c->r[6]) { mem_w8(ram, c->r[7] + 0x00000000u, c->r[8]); goto L_08a035f4; }
    c->r[5] = c->r[5] + 0x00000001u;
L_08a035ec:
    { c->r[8] = mem_r8(ram, c->r[5] + 0x00000000u); goto L_08a035a8; }
L_08a035f4:
    c->r[5] = c->r[5] + 0x00000001u;
    { c->r[7] = c->r[7] + 0x00000001u; goto L_08a035ec; }
L_08a03600:
    { int _c = (c->r[12] == c->r[6]); c->r[12] = c->r[12] + 0x00000001u; if (_c) goto L_08a0361c; }
    c->r[2] = ((s32)c->r[6] < (s32)c->r[12]) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); c->r[4] = alx_seb(c->r[8]); if (_c) goto L_08a03568; }
L_08a03614:
    { c->r[2] = 0u + 0u; return; }
L_08a0361c:
    c->r[2] = 0u + 0x00000001u;
    { mem_w8(ram, c->r[7] + 0x00000000u, 0u); return; }
L_08a03628:
    c->r[4] = alx_seb(c->r[8]);
    c->r[3] = c->r[4] ^ 0x000au;
L_08a03630:
    c->r[2] = c->r[4] ^ 0x000du;
    c->r[3] = (c->r[3] < 0x00000001u) ? 1u : 0u;
    c->r[2] = (c->r[2] < 0x00000001u) ? 1u : 0u;
    c->r[3] = c->r[3] | c->r[2];
    { int _c = (c->r[3] != 0u); if (_c) goto L_08a03658; }
    { int _c = (c->r[4] == c->r[13]); c->r[5] = c->r[5] + 0x00000001u; if (_c) goto L_08a03658; }
    { c->r[8] = mem_r8(ram, c->r[5] + 0x00000000u); goto L_08a03564; }
L_08a03658:
    { c->r[2] = 0u + 0u; return; }
    return; /* fell out of func_08a03544 */
}

/* func_08a04760  0x08a04760..0x08a047b8  88 bytes, source=residue */
void func_08a04760(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08a04760u);
    c->r[6] = c->r[5] + 0xffffffffu;
    c->r[3] = 0x80440000u;
    c->r[7] = (c->r[4] < 0x00000008u) ? 1u : 0u;
    c->r[2] = (c->r[6] < 0x00000002u) ? 1u : 0u;
    { int _c = (c->r[7] == 0u); c->r[6] = c->r[3] | 0x0005u; if (_c) goto L_08a047b0; }
    c->r[7] = 0x80440000u;
    { int _c = (c->r[2] == 0u); c->r[6] = c->r[7] | 0x0008u; if (_c) goto L_08a047b0; }
    c->r[12] = 0u + 0x0000004cu;
    alx_mult(c, c->r[4], c->r[12]);
    c->r[11] = 0x08ba0000u;
    c->r[2] = c->r[11] + 0xffffaa78u;
    c->r[6] = 0u + 0u;
    c->r[4] = c->lo;
    c->r[8] = c->r[4] + c->r[2];
    c->r[10] = mem_r32(ram, c->r[8] + 0x00000018u);
    c->r[10] = alx_ins(c->r[10], 0u, 0u, 7u);
    c->r[9] = c->r[10] | c->r[5];
    mem_w32(ram, c->r[8] + 0x00000018u, c->r[9]);
L_08a047b0:
    { c->r[2] = c->r[6] + 0u; return; }
    return; /* fell out of func_08a04760 */
}

/* func_08a05fc4  0x08a05fc4..0x08a06010  76 bytes, source=sweep */
void func_08a05fc4(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08a05fc4u);
    c->r[6] = 0x08ba0000u;
    c->r[8] = mem_r32(ram, c->r[6] + 0xffffaf80u);
    c->r[7] = c->r[4] + 0u;
    c->r[29] = c->r[29] + 0xfffffff0u;
    c->r[3] = 0x80420000u;
    c->r[2] = 0x08ba0000u;
    c->r[6] = c->r[5] + 0u;
    mem_w32(ram, c->r[29] + 0x00000000u, c->r[31]);
    c->r[5] = c->r[7] + 0u;
    c->r[4] = c->r[2] + 0xffffafc0u;
    { int _c = (c->r[8] == 0u); c->r[7] = c->r[3] | 0x0100u; if (_c) goto L_08a06000; }
    { c->r[31] = 0x08a05ffcu; hle_dispatch_stub(c, ram, 0x08a24d0cu); /* __sceSasRevEVOL */ }
    c->r[7] = c->r[2] + 0u;
L_08a06000:
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000000u);
    c->r[2] = c->r[7] + 0u;
    { c->r[29] = c->r[29] + 0x00000010u; return; }
    return; /* fell out of func_08a05fc4 */
}

/* func_08a06e9c  0x08a06e9c..0x08a06ebc  32 bytes, source=residue */
void func_08a06e9c(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08a06e9cu);
    c->r[6] = 0x08ba0000u;
    c->r[7] = mem_r32(ram, c->r[6] + 0xffffbe0cu);
    c->r[3] = c->r[4] & 0xffffu;
    c->r[2] = c->r[3] << 1;
    c->r[6] = c->r[2] + c->r[7];
    c->r[2] = mem_r16(ram, c->r[6] + 0x00000000u);
    { if (c->r[2] == 0u) c->r[2] = c->r[5]; return; }
    return; /* fell out of func_08a06e9c */
}

/* func_08a0d61c  0x08a0d61c..0x08a0d674  88 bytes, source=sweep */
void func_08a0d61c(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08a0d61cu);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000018u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[17]);
    c->r[17] = c->r[5] + 0u;
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[16]);
    c->r[16] = c->r[4] + 0u;
    { c->r[31] = 0x08a0d63cu; c->r[4] = mem_r8(ram, c->r[4] + 0x00000014u); func_08a0d234(c, ram); }
    alx_mult(c, c->r[17], c->r[2]);
    c->r[6] = mem_r32(ram, c->r[16] + 0x0000000cu);
    c->r[4] = mem_r8(ram, c->r[16] + 0x00000014u);
    c->r[5] = mem_r32(ram, c->r[16] + 0x00000008u);
    c->r[7] = c->r[29] + 0u;
    c->r[17] = c->lo;
    { c->r[31] = 0x08a0d65cu; c->r[6] = c->r[6] - c->r[17]; func_08a0d3d8(c, ram); }
    c->r[2] = mem_r32(ram, c->r[29] + 0x00000000u);
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000018u);
    c->r[17] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[16] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_08a0d61c */
}

/* func_08a0e464  0x08a0e464..0x08a0e4c4  96 bytes, source=fde */
void func_08a0e464(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08a0e464u);
    c->r[29] = c->r[29] + 0xfffffff0u;
    mem_w32(ram, c->r[29] + 0x00000000u, c->r[16]);
    c->r[16] = 0x08a60000u;
    c->r[2] = 0x08ba0000u;
    c->r[3] = mem_r32(ram, c->r[16] + 0x00004a54u);
    mem_w32(ram, c->r[29] + 0x00000004u, c->r[31]);
    { int _c = (c->r[3] == 0u); c->r[2] = c->r[2] + 0xfffffe30u; if (_c) goto L_08a0e4b4; }
    { int _c = ((s32)c->r[3] < 0); if (_c) goto L_08a0e49c; }
L_08a0e48c:
    { c->r[31] = 0x08a0e494u; c->r[4] = 0u + 0x00000008u; func_08a19564(c, ram); }
    { c->r[31] = 0x08a0e49cu; func_08a0ddc4(c, ram); }
L_08a0e49c:
    { c->r[31] = 0x08a0e4a4u; func_08a0e414(c, ram); }
    c->r[3] = mem_r32(ram, c->r[16] + 0x00004a54u);
    c->r[2] = 0x08ba0000u;
    { int _c = (c->r[3] != 0u); c->r[2] = c->r[2] + 0xfffffe30u; if (_c) goto L_08a0e48c; }
L_08a0e4b4:
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000004u);
    c->r[16] = mem_r32(ram, c->r[29] + 0x00000000u);
    { c->r[29] = c->r[29] + 0x00000010u; return; }
    return; /* fell out of func_08a0e464 */
}

/* func_08a0ead4  0x08a0ead4..0x08a0eb14  64 bytes, source=indirect */
void func_08a0ead4(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08a0ead4u);
    { int _c = (c->r[8] == c->r[10]); c->r[4] = mem_r32(ram, c->r[4] + 0x00000004u); if (_c) goto L_08a0eb00; }
    c->r[2] = mem_r32(ram, c->r[7] + 0x00000004u);
L_08a0eae0:
    { int _c = (c->r[4] != c->r[2]); if (_c) goto L_08a0eaf8; }
    c->r[2] = 0u + 0x00000001u;
    mem_w32(ram, c->r[11] + 0x0000000cu, c->r[2]);
    mem_w32(ram, c->r[11] + 0x00000000u, c->r[8]);
    mem_w32(ram, c->r[11] + 0x00000004u, c->r[6]);
L_08a0eaf8:
    { c->r[2] = 0u + 0u; return; }
L_08a0eb00:
    c->r[2] = mem_r32(ram, c->r[9] + 0x00000004u);
    if (c->r[4] != c->r[2]) { c->r[2] = mem_r32(ram, c->r[7] + 0x00000004u); goto L_08a0eae0; }
    { mem_w32(ram, c->r[11] + 0x00000008u, c->r[6]); goto L_08a0eaf8; }
    return; /* fell out of func_08a0ead4 */
}

/* func_08a12b50  0x08a12b50..0x08a12b58  8 bytes, source=sweep */
void func_08a12b50(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08a12b50u);
    { c->r[2] = 0u + 0u; return; }
    return; /* fell out of func_08a12b50 */
}

/* func_08a14900  0x08a14900..0x08a1492c  44 bytes, source=fde */
void func_08a14900(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08a14900u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    c->r[4] = c->r[4] + 0xffffffffu;
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[31]);
    { c->r[31] = 0x08a14914u; c->r[5] = c->r[29] + 0u; func_08a17d58(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = mem_r32(ram, c->r[29] + 0x00000008u);
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000010u);
    if (c->r[3] == 0u) c->r[2] = 0u;
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_08a14900 */
}

/* func_08a16eec  0x08a16eec..0x08a16f4c  96 bytes, source=fde */
void func_08a16eec(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08a16eecu);
    c->r[2] = 0u + 0xffffffffu;
    mem_w32(ram, c->r[5] + 0x00000000u, c->r[2]);
    c->r[2] = 0u + 0x000007fau;
    c->r[29] = c->r[29] + 0xfffffff0u;
    mem_w32(ram, c->r[5] + 0x00000008u, c->r[7]);
    mem_w32(ram, c->r[5] + 0x00000004u, c->r[6]);
    mem_w32(ram, c->r[5] + 0x0000000cu, c->r[4]);
    mem_w32(ram, c->r[5] + 0x00000010u, c->r[2]);
    mem_w32(ram, c->r[29] + 0x00000004u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000000u, c->r[16]);
    { c->r[31] = 0x08a16f1cu; c->r[16] = c->r[5] + 0u; hle_dispatch_stub(c, ram, 0x08a2472cu); /* sceKernelCpuSuspendIntr */ }
    c->r[5] = 0x08ba0000u;
    c->r[6] = mem_r32(ram, c->r[5] + 0xffffff24u);
    c->r[3] = 0x08ba0000u;
    c->r[4] = c->r[2] + 0u;
    mem_w32(ram, c->r[16] + 0x00000014u, c->r[6]);
    mem_w32(ram, c->r[3] + 0xffffff1cu, c->r[2]);
    { c->r[31] = 0x08a16f3cu; mem_w32(ram, c->r[5] + 0xffffff24u, c->r[16]); hle_dispatch_stub(c, ram, 0x08a24734u); /* sceKernelCpuResumeIntr */ }
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000004u);
    c->r[16] = mem_r32(ram, c->r[29] + 0x00000000u);
    { c->r[29] = c->r[29] + 0x00000010u; return; }
    return; /* fell out of func_08a16eec */
}

/* func_08a18f58  0x08a18f58..0x08a18f68  16 bytes, source=sweep */
void func_08a18f58(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08a18f58u);
    c->r[3] = 0u + 0x00002000u;
    c->r[2] = 0u + 0u;
    { mem_w32(ram, c->r[5] + 0x00000004u, c->r[3]); return; }
    return; /* fell out of func_08a18f58 */
}

/* func_08a19594  0x08a19594..0x08a195c4  48 bytes, source=sweep */
void func_08a19594(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08a19594u);
    c->r[29] = c->r[29] + 0xfffffff0u;
    mem_w32(ram, c->r[29] + 0x00000004u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000000u, c->r[16]);
    { c->r[31] = 0x08a195a8u; c->r[16] = c->r[4] + 0u; func_08a19374(c, ram); }
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x08a195b4u; c->r[5] = c->r[16] + 0u; func_08a21690(c, ram); }
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000004u);
    c->r[16] = mem_r32(ram, c->r[29] + 0x00000000u);
    { c->r[29] = c->r[29] + 0x00000010u; return; }
    return; /* fell out of func_08a19594 */
}

/* func_08a1ad34  0x08a1ad34..0x08a1adb4  128 bytes, source=sweep */
void func_08a1ad34(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08a1ad34u);
    c->r[29] = c->r[29] + 0xffffff70u;
    c->r[2] = 0u + 0x00000208u;
    c->r[3] = 0x7fff0000u;
    c->r[3] = c->r[3] | 0xffffu;
    mem_w16(ram, c->r[29] + 0x0000000cu, c->r[2]);
    c->r[2] = 0u + 0xffffffffu;
    mem_w32(ram, c->r[29] + 0x00000064u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[3]);
    mem_w32(ram, c->r[29] + 0x00000008u, c->r[3]);
    mem_w32(ram, c->r[29] + 0x00000060u, c->r[16]);
    c->r[16] = c->r[5] + 0u;
    mem_w32(ram, c->r[29] + 0x00000080u, c->r[8]);
    mem_w32(ram, c->r[29] + 0x00000084u, c->r[9]);
    mem_w32(ram, c->r[29] + 0x00000088u, c->r[10]);
    mem_w32(ram, c->r[29] + 0x0000008cu, c->r[11]);
    mem_w32(ram, c->r[29] + 0x00000078u, c->r[6]);
    mem_w32(ram, c->r[29] + 0x0000007cu, c->r[7]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[4]);
    mem_w32(ram, c->r[29] + 0x00000000u, c->r[4]);
    { c->r[31] = 0x08a1ad88u; mem_w16(ram, c->r[29] + 0x0000000eu, c->r[2]); func_08a19374(c, ram); }
    c->r[4] = c->r[2] + 0u;
    c->r[6] = c->r[16] + 0u;
    c->r[5] = c->r[29] + 0u;
    { c->r[31] = 0x08a1ad9cu; c->r[7] = c->r[29] + 0x00000078u; func_08a1d758(c, ram); }
    c->r[3] = mem_r32(ram, c->r[29] + 0x00000000u);
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000064u);
    c->r[16] = mem_r32(ram, c->r[29] + 0x00000060u);
    mem_w8(ram, c->r[3] + 0x00000000u, 0u);
    { c->r[29] = c->r[29] + 0x00000090u; return; }
    return; /* fell out of func_08a1ad34 */
}

/* func_08a1fb68  0x08a1fb68..0x08a1fc88  288 bytes, source=sweep */
void func_08a1fb68(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08a1fb68u);
    c->r[29] = c->r[29] + 0xfffffff0u;
    mem_w32(ram, c->r[29] + 0x00000000u, c->r[16]);
    mem_w32(ram, c->r[29] + 0x00000004u, c->r[31]);
    { c->r[31] = 0x08a1fb7cu; c->r[16] = c->r[4] + 0u; func_08a19374(c, ram); }
    c->r[3] = mem_r32(ram, c->r[2] + 0x00000038u);
    { int _c = (c->r[3] == 0u); if (_c) goto L_08a1fc70; }
    c->r[5] = mem_r16(ram, c->r[16] + 0x0000000cu);
L_08a1fb8c:
    c->r[3] = c->r[5] & 0xffffu;
    c->r[2] = c->r[3] & 0x0008u;
    if (c->r[2] != 0u) { c->r[3] = mem_r32(ram, c->r[16] + 0x00000010u); goto L_08a1fc0c; }
    c->r[2] = c->r[3] & 0x0010u;
    { int _c = (c->r[2] == 0u); c->r[4] = 0u + 0xffffffffu; if (_c) goto L_08a1fc38; }
    c->r[2] = c->r[3] & 0x0004u;
    if (c->r[2] == 0u) { c->r[3] = mem_r32(ram, c->r[16] + 0x00000010u); goto L_08a1fc04; }
    c->r[3] = mem_r32(ram, c->r[16] + 0x00000030u);
    if (c->r[3] == 0u) { c->r[3] = mem_r32(ram, c->r[16] + 0x00000010u); goto L_08a1fbec; }
    c->r[2] = c->r[16] + 0x00000040u;
    if (c->r[3] == c->r[2]) { mem_w32(ram, c->r[16] + 0x00000030u, 0u); goto L_08a1fbe8; }
    { c->r[31] = 0x08a1fbd4u; func_08a19374(c, ram); }
    c->r[5] = mem_r32(ram, c->r[16] + 0x00000030u);
    { c->r[31] = 0x08a1fbe0u; c->r[4] = c->r[2] + 0u; func_08a21690(c, ram); }
    c->r[5] = mem_r16(ram, c->r[16] + 0x0000000cu);
    mem_w32(ram, c->r[16] + 0x00000030u, 0u);
L_08a1fbe8:
    c->r[3] = mem_r32(ram, c->r[16] + 0x00000010u);
L_08a1fbec:
    c->r[2] = 0u + 0xffffffdbu;
    c->r[2] = c->r[5] & c->r[2];
    c->r[5] = c->r[2] + 0u;
    mem_w16(ram, c->r[16] + 0x0000000cu, c->r[2]);
    mem_w32(ram, c->r[16] + 0x00000004u, 0u);
    mem_w32(ram, c->r[16] + 0x00000000u, c->r[3]);
L_08a1fc04:
    c->r[2] = c->r[5] | 0x0008u;
    mem_w16(ram, c->r[16] + 0x0000000cu, c->r[2]);
L_08a1fc0c:
    { int _c = (c->r[3] == 0u); if (_c) goto L_08a1fc60; }
    c->r[3] = mem_r16(ram, c->r[16] + 0x0000000cu);
L_08a1fc18:
    c->r[2] = c->r[3] & 0x0001u;
    { int _c = (c->r[2] == 0u); c->r[2] = c->r[3] & 0x0002u; if (_c) goto L_08a1fc4c; }
    c->r[2] = mem_r32(ram, c->r[16] + 0x00000014u);
    mem_w32(ram, c->r[16] + 0x00000008u, 0u);
    c->r[2] = 0u - c->r[2];
    mem_w32(ram, c->r[16] + 0x00000018u, c->r[2]);
L_08a1fc34:
    c->r[4] = 0u + 0u;
L_08a1fc38:
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000004u);
    c->r[16] = mem_r32(ram, c->r[29] + 0x00000000u);
    c->r[2] = c->r[4] + 0u;
    { c->r[29] = c->r[29] + 0x00000010u; return; }
L_08a1fc4c:
    { int _c = (c->r[2] != 0u); c->r[3] = 0u + 0u; if (_c) goto L_08a1fc58; }
    c->r[3] = mem_r32(ram, c->r[16] + 0x00000014u);
L_08a1fc58:
    { mem_w32(ram, c->r[16] + 0x00000008u, c->r[3]); goto L_08a1fc34; }
L_08a1fc60:
    { c->r[31] = 0x08a1fc68u; c->r[4] = c->r[16] + 0u; func_08a22040(c, ram); }
    { c->r[3] = mem_r16(ram, c->r[16] + 0x0000000cu); goto L_08a1fc18; }
L_08a1fc70:
    { c->r[31] = 0x08a1fc78u; func_08a19374(c, ram); }
    { c->r[31] = 0x08a1fc80u; c->r[4] = c->r[2] + 0u; func_08a2160c(c, ram); }
    { c->r[5] = mem_r16(ram, c->r[16] + 0x0000000cu); goto L_08a1fb8c; }
    return; /* fell out of func_08a1fb68 */
}

/* func_08a22eb0  0x08a22eb0..0x08a22f18  104 bytes, source=sweep */
void func_08a22eb0(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08a22eb0u);
    c->r[2] = mem_r32(ram, c->r[4] + 0x00000010u);
    c->r[3] = mem_r32(ram, c->r[5] + 0x00000010u);
    c->r[2] = c->r[2] - c->r[3];
    { int _c = (c->r[2] != 0u); c->r[6] = c->r[2] + 0u; if (_c) goto L_08a22efc; }
    c->r[3] = c->r[3] << 2;
    c->r[4] = c->r[4] + 0x00000014u;
    c->r[2] = c->r[5] + 0x00000014u;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[4] + c->r[3];
    c->r[3] = c->r[3] + 0xfffffffcu;
L_08a22edc:
    c->r[2] = c->r[2] + 0xfffffffcu;
    c->r[7] = mem_r32(ram, c->r[3] + 0x00000000u);
    c->r[5] = mem_r32(ram, c->r[2] + 0x00000000u);
    { int _c = (c->r[7] != c->r[5]); c->r[6] = (c->r[4] < c->r[3]) ? 1u : 0u; if (_c) goto L_08a22f04; }
    if (c->r[6] != 0u) { c->r[3] = c->r[3] + 0xfffffffcu; goto L_08a22edc; }
    c->r[6] = 0u + 0u;
L_08a22efc:
    { c->r[2] = c->r[6] + 0u; return; }
L_08a22f04:
    c->r[3] = (c->r[7] < c->r[5]) ? 1u : 0u;
    c->r[6] = 0u + 0xffffffffu;
    c->r[2] = 0u + 0x00000001u;
    { if (c->r[3] == 0u) c->r[6] = c->r[2]; goto L_08a22efc; }
    return; /* fell out of func_08a22eb0 */
}
