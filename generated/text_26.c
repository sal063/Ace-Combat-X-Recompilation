#include "pspreco.h"
#include "symbols.h"
#include <math.h>

/* func_08805f3c  0x08805f3c..0x08806088  332 bytes, source=sweep */
void func_08805f3c(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08805f3cu);
    c->r[29] = c->r[29] + 0xffffffc0u;
    mem_w32(ram, c->r[29] + 0x00000034u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000030u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[5]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = c->r[2] & 0x0001u;
    c->r[2] = c->r[2] & 0x00ffu;
    { int _c = (c->r[2] == 0u); if (_c) goto L_08805f74; }
    c->r[2] = 0u + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000024u, c->r[2]); goto L_08805f78; }
L_08805f74:
    mem_w32(ram, c->r[30] + 0x00000024u, 0u);
L_08805f78:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000024u);
    mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = c->r[2] >> 1;
    c->r[2] = c->r[2] & 0x0001u;
    mem_w32(ram, c->r[30] + 0x0000001cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = c->r[2] >> 2;
    c->r[2] = c->r[2] & 0x0001u;
    mem_w32(ram, c->r[30] + 0x00000020u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = c->r[2] & 0x0010u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_08805fec; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[7] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[8] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[5] = mem_r32(ram, c->r[2] + 0x00000018u);
    c->r[6] = mem_r32(ram, c->r[3] + 0x00000048u);
    c->r[7] = mem_r32(ram, c->r[7] + 0x0000004cu);
    c->r[8] = mem_r32(ram, c->r[8] + 0x00000050u);
    c->r[9] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[10] = mem_r32(ram, c->r[30] + 0x0000001cu);
    { c->r[31] = 0x08805fe4u; c->r[11] = mem_r32(ram, c->r[30] + 0x00000020u); func_0880616c(c, ram); }
    { goto L_08806074; }
L_08805fec:
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[6] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[7] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[4] = mem_r32(ram, c->r[2] + 0x00000030u);
    c->r[2] = mem_r32(ram, c->r[3] + 0x00000028u);
    c->r[2] = c->r[4] - c->r[2];
    c->r[8] = c->r[2] + 0x00000001u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[4] = mem_r32(ram, c->r[2] + 0x00000034u);
    c->r[2] = mem_r32(ram, c->r[3] + 0x0000002cu);
    c->r[2] = c->r[4] - c->r[2];
    c->r[3] = c->r[2] + 0x00000001u;
    c->r[10] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[11] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000050u);
    mem_w32(ram, c->r[29] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    mem_w32(ram, c->r[29] + 0x00000004u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    mem_w32(ram, c->r[29] + 0x00000008u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    mem_w32(ram, c->r[29] + 0x0000000cu, c->r[2]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[5] = mem_r32(ram, c->r[5] + 0x00000018u);
    c->r[6] = mem_r32(ram, c->r[6] + 0x00000028u);
    c->r[7] = mem_r32(ram, c->r[7] + 0x0000002cu);
    c->r[9] = c->r[3] + 0u;
    c->r[10] = mem_r32(ram, c->r[10] + 0x00000048u);
    { c->r[31] = 0x08806074u; c->r[11] = mem_r32(ram, c->r[11] + 0x0000004cu); func_08806528(c, ram); }
L_08806074:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000034u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000030u);
    { c->r[29] = c->r[29] + 0x00000040u; return; }
    return; /* fell out of func_08805f3c */
}

/* func_088072e8  0x088072e8..0x08807358  112 bytes, source=sweep */
void func_088072e8(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x088072e8u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_0880731c; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = 0u + 0x00000001u;
    { mem_w32(ram, c->r[3] + 0x00000060u, c->r[2]); goto L_08807324; }
L_0880731c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    mem_w32(ram, c->r[2] + 0x00000060u, 0u);
L_08807324:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[7] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = mem_r32(ram, c->r[2] + 0x00000064u);
    c->r[6] = mem_r32(ram, c->r[3] + 0x00000068u);
    { c->r[31] = 0x08807344u; c->r[7] = mem_r32(ram, c->r[7] + 0x00000060u); func_08807358(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_088072e8 */
}

/* func_088081bc  0x088081bc..0x08808240  132 bytes, source=sweep */
void func_088081bc(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x088081bcu);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000030u;
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]);
    c->r[2] = 0u + 0x00000005u;
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0u + 0xffffffffu;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_0880822c; }
L_088081fc:
    { c->r[31] = 0x08808204u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000008u); func_08808240(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[2] + 0x00000010u;
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0xffffffffu;
    c->r[3] = c->r[2] + 0u;
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[3]);
    c->r[2] = 0u + 0xffffffffu;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_088081fc; }
L_0880822c:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_088081bc */
}

/* func_0880abac  0x0880abac..0x0880abfc  80 bytes, source=sweep */
void func_0880abac(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0880abacu);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[2] = 0u + 0xffffffffu;
    c->r[1] = 0x08a50000u;
    mem_w32(ram, c->r[1] + 0x00001eecu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[1] = 0x08a80000u;
    mem_w32(ram, c->r[1] + 0x00003c6cu, c->r[2]);
    c->r[1] = 0x08a80000u;
    mem_w8(ram, c->r[1] + 0x00003c71u, 0u);
    c->r[2] = 0x08810000u;
    c->r[2] = c->r[2] + 0xffffabfcu;
    c->r[1] = 0x08a70000u;
    mem_w32(ram, c->r[1] + 0xffffb680u, c->r[2]);
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_0880abac */
}

/* func_0880d410  0x0880d410..0x0880d438  40 bytes, source=sweep */
void func_0880d410(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0880d410u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x0000014au);
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_0880d410 */
}

/* func_0880e5b0  0x0880e5b0..0x0880e628  120 bytes, source=fde */
void func_0880e5b0(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0880e5b0u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_0880e5f0; }
    c->r[4] = 0x08a40000u;
    c->r[4] = c->r[4] + 0xffffeed8u;
    c->r[5] = 0u + 0x000015a8u;
    { c->r[31] = 0x0880e5e8u; c->r[6] = 0u + 0x00000001u; func_08928cb8(c, ram); }
    { goto L_0880e614; }
L_0880e5f0:
    { c->r[31] = 0x0880e5f8u; c->r[4] = 0u + 0x00000001u; func_089c5e18(c, ram); }
    { int _c = (c->r[2] == 0u); if (_c) goto L_0880e614; }
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00003ca0u;
    c->r[5] = 0x08810000u;
    { c->r[31] = 0x0880e614u; c->r[5] = c->r[5] + 0xffffe628u; func_0880f03c(c, ram); }
L_0880e614:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_0880e5b0 */
}

/* func_0881143c  0x0881143c..0x08811550  276 bytes, source=fde */
void func_0881143c(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0881143cu);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000008u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_088114c8; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000004u);
    c->r[1] = 0x08a80000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00002e40u);
    c->f[0] = c->f[1] + c->f[0];
    mem_wf32(ram, c->r[3] + 0x00000004u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000004u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xfffff004u);
    alx_c_cond_s(c, 14, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_088114a8; }
    { goto L_0881153c; }
L_088114a8:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xfffff004u);
    mem_wf32(ram, c->r[2] + 0x00000004u, c->f[0]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = 0u + 0x00000001u;
    { mem_w8(ram, c->r[3] + 0x00000008u, c->r[2]); goto L_0881153c; }
L_088114c8:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000008u);
    c->r[2] = 0u + 0x00000002u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_0881153c; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000004u);
    c->r[1] = 0x08a80000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00002e40u);
    c->f[0] = c->f[1] - c->f[0];
    mem_wf32(ram, c->r[3] + 0x00000004u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000004u);
    c->f[0] = u2f(0u);
    alx_c_cond_s(c, 12, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_0881151c; }
    { goto L_0881153c; }
L_0881151c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    mem_w32(ram, c->r[2] + 0x00000004u, 0u);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[30] + 0x00000004u);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00002e04u;
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x0881153cu; c->r[6] = 0u + 0u; func_08813280(c, ram); }
L_0881153c:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_0881143c */
}

/* func_0881456c  0x0881456c..0x088145a8  60 bytes, source=sweep */
void func_0881456c(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0881456cu);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[6]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = c->r[3] + c->r[2];
    c->r[2] = mem_r8(ram, c->r[30] + 0x00000008u);
    mem_w8(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_0881456c */
}

/* func_088195c4  0x088195c4..0x08819694  208 bytes, source=sweep */
void func_088195c4(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x088195c4u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x00000008u);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[8] = 0x3c000000u;
    mem_w32(ram, c->r[3] + 0x00000000u, c->r[8]);
    c->r[8] = 0x3d000000u;
    c->r[9] = 0x3d000000u;
    c->r[10] = 0x3d000000u;
    c->r[8] = mem_lwr(ram, c->r[4] + 0x00000001u, c->r[8]);
    c->r[9] = mem_lwr(ram, c->r[4] + 0x00000005u, c->r[9]);
    c->r[10] = mem_lwr(ram, c->r[4] + 0x00000009u, c->r[10]);
    mem_w32(ram, c->r[3] + 0x00000004u, c->r[8]);
    mem_w32(ram, c->r[3] + 0x00000008u, c->r[9]);
    mem_w32(ram, c->r[3] + 0x0000000cu, c->r[10]);
    c->r[8] = 0x3d000000u;
    c->r[9] = 0x3d000000u;
    c->r[10] = 0x3d000000u;
    c->r[8] = mem_lwr(ram, c->r[4] + 0x00000011u, c->r[8]);
    c->r[9] = mem_lwr(ram, c->r[4] + 0x00000015u, c->r[9]);
    c->r[10] = mem_lwr(ram, c->r[4] + 0x00000019u, c->r[10]);
    mem_w32(ram, c->r[3] + 0x00000010u, c->r[8]);
    mem_w32(ram, c->r[3] + 0x00000014u, c->r[9]);
    mem_w32(ram, c->r[3] + 0x00000018u, c->r[10]);
    c->r[8] = 0x3d000000u;
    c->r[9] = 0x3d000000u;
    c->r[10] = 0x3d000000u;
    c->r[8] = mem_lwr(ram, c->r[4] + 0x00000021u, c->r[8]);
    c->r[9] = mem_lwr(ram, c->r[4] + 0x00000025u, c->r[9]);
    c->r[10] = mem_lwr(ram, c->r[4] + 0x00000029u, c->r[10]);
    mem_w32(ram, c->r[3] + 0x0000001cu, c->r[8]);
    mem_w32(ram, c->r[3] + 0x00000020u, c->r[9]);
    mem_w32(ram, c->r[3] + 0x00000024u, c->r[10]);
    c->r[8] = 0x3d000000u;
    c->r[9] = 0x3d000000u;
    c->r[10] = 0x3d000000u;
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
    return; /* fell out of func_088195c4 */
}

/* func_0881dc58  0x0881dc58..0x0881dd0c  180 bytes, source=fde */
void func_0881dc58(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0881dc58u);
    c->r[29] = c->r[29] + 0xffffffd0u;
    mem_w32(ram, c->r[29] + 0x00000024u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000020u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    mem_w32(ram, c->r[30] + 0x00000008u, 0u);
    mem_w32(ram, c->r[30] + 0x0000000cu, 0u);
L_0881dc78:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000006u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_0881dc90; }
    { goto L_0881dcec; }
L_0881dc90:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = c->r[2] << 2;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000ac8u;
    { c->r[31] = 0x0881dcb4u; c->r[5] = c->r[2] + 0u; func_089cb820(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_0881dcdc; }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x0881dcd0u; c->r[5] = mem_r32(ram, c->r[30] + 0x00000010u); func_088204a8(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[2] + 0x00000001u;
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]);
L_0881dcdc:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]); goto L_0881dc78; }
L_0881dcec:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[2] ^ 0x0000u;
    c->r[2] = (c->r[2] < 0x00000001u) ? 1u : 0u;
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000024u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000020u);
    { c->r[29] = c->r[29] + 0x00000030u; return; }
    return; /* fell out of func_0881dc58 */
}

/* func_08820f7c  0x08820f7c..0x088216f8  1916 bytes, source=fde */
void func_08820f7c(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08820f7cu);
    c->r[29] = c->r[29] + 0xffffff70u;
    mem_w32(ram, c->r[29] + 0x00000088u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000084u, c->r[30]);
    mem_w32(ram, c->r[29] + 0x00000080u, c->r[16]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[2] = c->r[5] + 0u;
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[6]);
    mem_w8(ram, c->r[30] + 0x00000004u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x000000e0u;
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
    c->r[2] = c->r[30] + 0x00000010u;
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xfffff8b8u);
    c->r[1] = 0x08a40000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0xfffff8b8u);
    c->r[1] = 0x08a40000u;
    c->f[2] = mem_rf32(ram, c->r[1] + 0xfffff8b8u);
    c->r[1] = 0x08a40000u;
    c->f[3] = mem_rf32(ram, c->r[1] + 0xfffff8b8u);
    c->r[4] = c->r[2] + 0u;
    c->f[12] = c->f[0];
    c->f[13] = c->f[1];
    c->f[14] = c->f[2];
    { c->r[31] = 0x08820fe8u; c->f[15] = c->f[3]; func_0880d140(c, ram); }
    c->r[2] = mem_r8(ram, c->r[30] + 0x00000004u);
    mem_w32(ram, c->r[30] + 0x00000074u, c->r[2]);
    c->r[2] = 0u + 0x00000001u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000074u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_08821424; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000074u);
    c->r[2] = ((s32)c->r[3] < (s32)0x00000002u) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_08821024; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000074u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_0882103c; }
    { goto L_088216e0; }
L_08821024:
    c->r[2] = 0u + 0x00000002u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000074u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_088216b8; }
    { goto L_088216e0; }
L_0882103c:
    { c->r[31] = 0x08821044u; func_0880b360(c, ram); }
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x08821050u; c->r[4] = c->r[4] + 0x00000af4u; func_0880d380(c, ram); }
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x0882105cu; c->r[5] = 0u + 0u; func_0880b24c(c, ram); }
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x08821068u; c->r[4] = c->r[4] + 0x00000af4u; func_089c9050(c, ram); }
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000af4u;
    { c->r[31] = 0x08821078u; c->r[5] = 0u + 0u; func_0882172c(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    mem_w8(ram, c->r[2] + 0x0000000cu, 0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    mem_w32(ram, c->r[2] + 0x00000004u, 0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[16] = c->r[2] + 0x00000008u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000ac8u;
    { c->r[31] = 0x088210a4u; c->r[5] = mem_r32(ram, c->r[2] + 0x00000004u); func_089cb780(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000020u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    mem_w32(ram, c->r[16] + 0x00000000u, c->r[2]);
    { c->r[31] = 0x088210b8u; c->r[4] = 0u + 0x00000003u; func_08924620(c, ram); }
    { c->r[31] = 0x088210c0u; func_088bf634(c, ram); }
    { c->r[31] = 0x088210c8u; func_088c4e64(c, ram); }
    c->r[2] = c->r[30] + 0x00000030u;
    mem_w32(ram, c->r[30] + 0x00000050u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000050u);
    mem_w32(ram, c->r[30] + 0x00000054u, c->r[2]);
    c->r[2] = 0u + 0x00000001u;
    mem_w32(ram, c->r[30] + 0x00000058u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000058u);
    c->r[2] = 0u + 0xffffffffu;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_08821120; }
L_088210f0:
    { c->r[31] = 0x088210f8u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000054u); func_08808240(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000054u);
    c->r[2] = c->r[2] + 0x00000010u;
    mem_w32(ram, c->r[30] + 0x00000054u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000058u);
    c->r[2] = c->r[2] + 0xffffffffu;
    c->r[3] = c->r[2] + 0u;
    mem_w32(ram, c->r[30] + 0x00000058u, c->r[3]);
    c->r[2] = 0u + 0xffffffffu;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_088210f0; }
L_08821120:
    { c->r[31] = 0x08821128u; func_08966c64(c, ram); }
    { int _c = (c->r[2] != 0u); if (_c) goto L_088211d0; }
    c->r[2] = c->r[30] + 0x00000060u;
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xfffff8bcu);
    c->r[1] = 0x08a40000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0xfffff8bcu);
    c->r[4] = c->r[2] + 0u;
    c->f[12] = c->f[0];
    c->f[13] = u2f(0u);
    c->f[14] = c->f[1];
    c->f[15] = u2f(0u);
    { c->r[31] = 0x08821160u; func_0880d140(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000060u);
    mem_w32(ram, c->r[30] + 0x00000030u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000064u);
    mem_w32(ram, c->r[30] + 0x00000034u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000068u);
    mem_w32(ram, c->r[30] + 0x00000038u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000006cu);
    mem_w32(ram, c->r[30] + 0x0000003cu, c->r[2]);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xfffff8c0u);
    mem_wf32(ram, c->r[30] + 0x00000034u, c->f[0]);
    c->r[2] = c->r[30] + 0x00000060u;
    c->r[4] = c->r[2] + 0u;
    c->f[12] = u2f(0u);
    c->f[13] = u2f(0u);
    c->f[14] = u2f(0u);
    c->f[15] = u2f(0u);
    { c->r[31] = 0x088211acu; func_0880d140(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000060u);
    mem_w32(ram, c->r[30] + 0x00000040u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000064u);
    mem_w32(ram, c->r[30] + 0x00000044u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000068u);
    mem_w32(ram, c->r[30] + 0x00000048u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000006cu);
    { mem_w32(ram, c->r[30] + 0x0000004cu, c->r[2]); goto L_088212b8; }
L_088211d0:
    c->r[2] = 0x08aa0000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x000052ecu);
    mem_w32(ram, c->r[30] + 0x00000058u, c->r[2]);
    c->r[2] = c->r[30] + 0x00000060u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000058u);
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000058u);
    c->r[6] = mem_r32(ram, c->r[30] + 0x00000058u);
    c->r[4] = c->r[2] + 0u;
    c->f[12] = mem_rf32(ram, c->r[3] + 0x00000004u);
    c->f[13] = mem_rf32(ram, c->r[5] + 0x00000008u);
    c->f[14] = mem_rf32(ram, c->r[6] + 0x0000000cu);
    c->f[15] = u2f(0u);
    { c->r[31] = 0x08821208u; func_0880d140(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000060u);
    mem_w32(ram, c->r[30] + 0x00000030u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000064u);
    mem_w32(ram, c->r[30] + 0x00000034u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000068u);
    mem_w32(ram, c->r[30] + 0x00000038u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000006cu);
    mem_w32(ram, c->r[30] + 0x0000003cu, c->r[2]);
    c->r[2] = c->r[30] + 0x00000060u;
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xfffff8bcu);
    c->r[1] = 0x08a40000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0xfffff8bcu);
    c->r[4] = c->r[2] + 0u;
    c->f[12] = c->f[0];
    c->f[13] = u2f(0u);
    c->f[14] = c->f[1];
    c->f[15] = u2f(0u);
    { c->r[31] = 0x08821258u; func_0880d140(c, ram); }
    c->r[3] = c->r[30] + 0x00000060u;
    c->r[2] = c->r[30] + 0x00000030u;
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x0882126cu; c->r[5] = c->r[3] + 0u; func_0880d1a0(c, ram); }
    c->r[2] = c->r[30] + 0x00000060u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000058u);
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000058u);
    c->r[6] = mem_r32(ram, c->r[30] + 0x00000058u);
    c->r[4] = c->r[2] + 0u;
    c->f[12] = mem_rf32(ram, c->r[3] + 0x00000010u);
    c->f[13] = mem_rf32(ram, c->r[5] + 0x00000014u);
    c->f[14] = mem_rf32(ram, c->r[6] + 0x00000018u);
    c->f[15] = u2f(0u);
    { c->r[31] = 0x08821298u; func_0880d140(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000060u);
    mem_w32(ram, c->r[30] + 0x00000040u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000064u);
    mem_w32(ram, c->r[30] + 0x00000044u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000068u);
    mem_w32(ram, c->r[30] + 0x00000048u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000006cu);
    mem_w32(ram, c->r[30] + 0x0000004cu, c->r[2]);
L_088212b8:
    c->r[4] = 0u + 0x0000003eu;
    c->r[5] = 0u + 0u;
    c->r[6] = 0u + 0u;
    c->r[7] = 0u + 0u;
    c->r[8] = 0u + 0u;
    { c->r[31] = 0x088212d4u; c->r[9] = 0u + 0u; func_089c6bec(c, ram); }
    c->r[2] = c->r[30] + 0x00000030u;
    c->r[4] = 0u + 0x00000026u;
    c->r[5] = 0u + 0x00000002u;
    c->r[6] = 0u + 0u;
    c->r[7] = 0u + 0u;
    c->r[8] = 0u + 0u;
    { c->r[31] = 0x088212f4u; c->r[9] = c->r[2] + 0u; func_089c6bec(c, ram); }
    c->r[4] = 0u + 0x00000027u;
    c->r[5] = 0u + 0u;
    c->r[6] = 0u + 0u;
    c->r[7] = 0u + 0u;
    c->r[8] = 0u + 0u;
    { c->r[31] = 0x08821310u; c->r[9] = 0u + 0u; func_089c6bec(c, ram); }
    c->r[4] = 0u + 0x00000028u;
    c->r[5] = 0u + 0u;
    c->r[6] = 0u + 0u;
    c->r[7] = 0u + 0u;
    c->r[8] = 0u + 0u;
    { c->r[31] = 0x0882132cu; c->r[9] = 0u + 0u; func_089c6bec(c, ram); }
    c->r[4] = 0u + 0x0000002au;
    c->r[5] = 0u + 0u;
    c->r[6] = 0u + 0u;
    c->r[7] = 0u + 0u;
    c->r[8] = 0u + 0u;
    { c->r[31] = 0x08821348u; c->r[9] = 0u + 0u; func_089c6bec(c, ram); }
    c->r[4] = 0u + 0x00000049u;
    c->r[5] = 0u + 0u;
    c->r[6] = 0u + 0u;
    c->r[7] = 0u + 0u;
    c->r[8] = 0u + 0u;
    { c->r[31] = 0x08821364u; c->r[9] = 0u + 0u; func_089c6bec(c, ram); }
    c->r[16] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[4] = 0u + 0x00000068u;
    c->r[5] = 0u + 0u;
    c->r[6] = 0u + 0u;
    c->r[7] = 0u + 0u;
    c->r[8] = 0u + 0u;
    { c->r[31] = 0x08821384u; c->r[9] = 0u + 0u; func_089c6bec(c, ram); }
    { c->r[31] = 0x0882138cu; mem_w32(ram, c->r[16] + 0x00000000u, c->r[2]); func_0880b1dc(c, ram); }
    c->r[4] = 0u + 0x00000069u;
    c->r[5] = 0u + 0u;
    c->r[6] = 0u + 0u;
    c->r[7] = 0u + 0u;
    c->r[8] = 0u + 0u;
    { c->r[31] = 0x088213a8u; c->r[9] = 0u + 0u; func_089c6bec(c, ram); }
    { c->r[31] = 0x088213b0u; func_0884dee8(c, ram); }
    c->r[4] = 0u + 0x00000067u;
    c->r[5] = 0u + 0u;
    c->r[6] = 0u + 0u;
    c->r[7] = 0u + 0u;
    c->r[8] = 0u + 0u;
    { c->r[31] = 0x088213ccu; c->r[9] = 0u + 0u; func_089c6bec(c, ram); }
    c->r[4] = 0x08a90000u;
    { c->r[31] = 0x088213d8u; c->r[4] = c->r[4] + 0xffff9720u; func_0885b4b0(c, ram); }
    c->r[4] = 0x08a90000u;
    { c->r[31] = 0x088213e4u; c->r[4] = c->r[4] + 0xffff9720u; func_0880d6d4(c, ram); }
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x088213f0u; c->r[4] = c->r[4] + 0x00000af4u; func_0880d4fc(c, ram); }
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000af4u;
    { c->r[31] = 0x08821400u; c->r[5] = 0u + 0x00000001u; func_0880d524(c, ram); }
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000af4u;
    { c->r[31] = 0x08821410u; c->r[5] = 0u + 0u; func_088216f8(c, ram); }
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x0882141cu; c->r[4] = c->r[4] + 0x00000af4u; func_089ca0e0(c, ram); }
    { goto L_088216e0; }
L_08821424:
    c->r[16] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x00000008u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000ac8u;
    { c->r[31] = 0x08821444u; c->r[5] = c->r[2] + 0u; func_089cb820(c, ram); }
    { c->r[31] = 0x0882144cu; mem_w32(ram, c->r[16] + 0x00000004u, c->r[2]); func_089c3a94(c, ram); }
    { int _c = (c->r[2] != 0u); if (_c) goto L_08821460; }
    c->r[4] = 0x08a90000u;
    { c->r[31] = 0x08821460u; c->r[4] = c->r[4] + 0xffff9720u; func_0885b96c(c, ram); }
L_08821460:
    { c->r[31] = 0x08821468u; func_089c3a94(c, ram); }
    { int _c = (c->r[2] != 0u); if (_c) goto L_08821508; }
    c->r[4] = 0x08a70000u;
    c->r[4] = c->r[4] + 0xffffb34cu;
    c->r[5] = 0u + 0u;
    c->r[6] = 0u + 0u;
    { c->r[31] = 0x08821488u; c->r[7] = 0u + 0u; func_089d87d4(c, ram); }
    c->r[16] = c->r[2] + 0u;
    c->r[4] = 0x08a70000u;
    { c->r[31] = 0x08821498u; c->r[4] = c->r[4] + 0xffffb34cu; func_0880d238(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = mem_r32(ram, c->r[16] + 0x00000004u);
    c->r[2] = c->r[3] & c->r[2];
    c->r[2] = c->r[2] & 0x0008u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_08821508; }
    c->r[3] = 0x08aa0000u;
    c->r[3] = mem_r8(ram, c->r[3] + 0x00004960u);
    c->r[2] = 0u + 0x00000001u;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_08821508; }
    c->r[3] = 0x08aa0000u;
    c->r[3] = mem_r8(ram, c->r[3] + 0x00004960u);
    c->r[2] = 0u + 0x00000003u;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_08821508; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000004u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_08821508; }
    c->r[4] = 0x08a90000u;
    { c->r[31] = 0x088214f4u; c->r[4] = c->r[4] + 0xffff9720u; func_08821760(c, ram); }
    { c->r[31] = 0x088214fcu; c->r[4] = 0u + 0x00000001u; func_089c3618(c, ram); }
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0u + 0x00000001u;
    mem_w8(ram, c->r[3] + 0x0000000cu, c->r[2]);
L_08821508:
    { c->r[31] = 0x08821510u; func_08847338(c, ram); }
    c->r[1] = 0x08aa0000u;
    mem_w8(ram, c->r[1] + 0x000049c9u, c->r[2]);
    c->r[3] = 0x08aa0000u;
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[3] + 0x000049c9u);
    c->r[2] = 0u + 0x00000002u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_08821550; }
    { c->r[31] = 0x08821534u; func_0893443c(c, ram); }
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xfffff8c4u);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00003c30u;
    c->r[5] = 0u + 0x00000002u;
    { c->r[31] = 0x08821550u; c->f[12] = c->f[0]; func_089b3514(c, ram); }
L_08821550:
    c->r[3] = 0x08a90000u;
    c->r[3] = (u32)(s32)(s16)mem_r16(ram, c->r[3] + 0xffffb9fcu);
    c->r[2] = 0u + 0x00000001u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_0882156c; }
    { c->r[31] = 0x0882156cu; func_0884dfd8(c, ram); }
L_0882156c:
    c->r[3] = 0x08aa0000u;
    c->r[3] = (u32)(s32)(s16)mem_r16(ram, c->r[3] + 0x000049aau);
    c->r[2] = 0u + 0x00000096u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_08821588; }
    { c->r[31] = 0x08821588u; func_0884dfd8(c, ram); }
L_08821588:
    c->r[2] = c->r[30] + 0x00000060u;
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00002e04u;
    { c->r[31] = 0x0882159cu; c->r[5] = c->r[2] + 0u; func_08813174(c, ram); }
    { c->r[31] = 0x088215a4u; func_0895b58c(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000058u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000058u);
    c->r[2] = c->r[2] & 0x1400u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_088215e8; }
    c->r[2] = 0u + 0x00000002u;
    mem_w8(ram, c->r[30] + 0x00000060u, c->r[2]);
    c->r[2] = 0u + 0x0000001bu;
    mem_w8(ram, c->r[30] + 0x00000064u, c->r[2]);
    c->r[2] = c->r[30] + 0x00000060u;
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00002e04u;
    c->r[5] = 0u + 0x00000014u;
    { c->r[31] = 0x088215e0u; c->r[6] = c->r[2] + 0u; func_08813280(c, ram); }
    { goto L_088216e0; }
L_088215e8:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000058u);
    c->r[2] = c->r[2] & 0x3e00u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_08821614; }
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00002e04u;
    c->r[5] = 0u + 0x0000001bu;
    { c->r[31] = 0x0882160cu; c->r[6] = 0u + 0u; func_08813280(c, ram); }
    { goto L_088216e0; }
L_08821614:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000058u);
    c->r[2] = c->r[2] & 0x0100u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_08821640; }
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00002e04u;
    c->r[5] = 0u + 0x00000014u;
    { c->r[31] = 0x08821638u; c->r[6] = 0u + 0u; func_08813280(c, ram); }
    { goto L_088216e0; }
L_08821640:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x0000000cu);
    c->r[2] = 0u + 0x00000001u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_088216ac; }
    c->r[2] = 0u + 0x00000001u;
    mem_w32(ram, c->r[30] + 0x00000054u, c->r[2]);
    c->r[16] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[30] + 0x00000054u;
    c->r[4] = 0u + 0x00000010u;
    c->r[5] = 0u + 0u;
    c->r[6] = 0u + 0u;
    c->r[7] = 0u + 0u;
    c->r[8] = 0u + 0u;
    { c->r[31] = 0x08821680u; c->r[9] = c->r[2] + 0u; func_089c6bec(c, ram); }
    mem_w32(ram, c->r[16] + 0x00000004u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[16] = c->r[2] + 0x00000008u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000ac8u;
    { c->r[31] = 0x088216a0u; c->r[5] = mem_r32(ram, c->r[2] + 0x00000004u); func_089cb780(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000070u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000070u);
    mem_w32(ram, c->r[16] + 0x00000000u, c->r[2]);
L_088216ac:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    { mem_w8(ram, c->r[2] + 0x0000000cu, 0u); goto L_088216e0; }
L_088216b8:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_088216d8; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[4] = mem_r32(ram, c->r[2] + 0x00000000u);
    { c->r[31] = 0x088216d8u; c->r[5] = 0u + 0x00000002u; func_0880d260(c, ram); }
L_088216d8:
    { c->r[31] = 0x088216e0u; func_0884dfd8(c, ram); }
L_088216e0:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000088u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000084u);
    c->r[16] = mem_r32(ram, c->r[29] + 0x00000080u);
    { c->r[29] = c->r[29] + 0x00000090u; return; }
    return; /* fell out of func_08820f7c */
}

/* func_08826b80  0x08826b80..0x08826bb4  52 bytes, source=sweep */
void func_08826b80(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08826b80u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[2] = c->r[5] + 0u;
    mem_w8(ram, c->r[30] + 0x00000004u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r8(ram, c->r[30] + 0x00000004u);
    mem_w8(ram, c->r[3] + 0x00001b8eu, c->r[2]);
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_08826b80 */
}

/* func_08828a14  0x08828a14..0x08828b94  384 bytes, source=fde */
void func_08828a14(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08828a14u);
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
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_08828ac8; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = ((s32)c->r[3] < (s32)0x00000002u) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_08828a70; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    { int _c = (c->r[2] == 0u); if (_c) goto L_08828a98; }
    { goto L_08828b80; }
L_08828a70:
    c->r[2] = 0u + 0x00000002u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_08828b80; }
    c->r[2] = 0u + 0x00000019u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_08828b1c; }
    { goto L_08828b80; }
L_08828a98:
    { c->r[31] = 0x08828aa0u; func_0880f27c(c, ram); }
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00003eb4u;
    c->r[5] = 0x08830000u;
    { c->r[31] = 0x08828ab4u; c->r[5] = c->r[5] + 0xffff94a4u; func_0880f094(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000010u);
    c->r[1] = 0x08a80000u;
    { mem_w32(ram, c->r[1] + 0x00003ed4u, c->r[2]); goto L_08828b80; }
L_08828ac8:
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x08828ad4u; c->r[4] = c->r[4] + 0x00003eb4u; func_0880f104(c, ram); }
    { int _c = (c->r[2] == 0u); if (_c) goto L_08828b80; }
    c->r[2] = 0x08a80000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00003ed4u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_08828b08; }
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00002e04u;
    c->r[5] = 0u + 0x00000007u;
    { c->r[31] = 0x08828b00u; c->r[6] = 0u + 0u; func_08813280(c, ram); }
    { goto L_08828b80; }
L_08828b08:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x08828b14u; c->r[5] = 0u + 0x00000002u; func_0880d260(c, ram); }
    { goto L_08828b80; }
L_08828b1c:
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xfffffc3cu);
    c->r[4] = 0x08a70000u;
    c->r[4] = c->r[4] + 0xffffb640u;
    { c->r[31] = 0x08828b34u; c->f[12] = c->f[0]; func_089f1210(c, ram); }
    c->r[2] = 0x08a80000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00003ed4u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_08828b58; }
    { c->r[31] = 0x08828b4cu; func_08902ea0(c, ram); }
    c->r[1] = 0x08a80000u;
    { c->r[31] = 0x08828b58u; c->f[12] = mem_rf32(ram, c->r[1] + 0x00003f1cu); func_08903058(c, ram); }
L_08828b58:
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00003eb4u;
    { c->r[31] = 0x08828b68u; c->r[5] = 0u + 0x00000001u; func_0882adfc(c, ram); }
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x08828b74u; c->r[4] = c->r[4] + 0x00003eb4u; func_0880f188(c, ram); }
    c->r[4] = 0x08a70000u;
    { c->r[31] = 0x08828b80u; c->r[4] = c->r[4] + 0xffffb640u; func_089f147c(c, ram); }
L_08828b80:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_08828a14 */
}

/* func_0882c35c  0x0882c35c..0x0882c604  680 bytes, source=fde */
void func_0882c35c(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0882c35cu);
    c->r[29] = c->r[29] + 0xffffffd0u;
    mem_w32(ram, c->r[29] + 0x00000028u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000024u, c->r[30]);
    mem_w32(ram, c->r[29] + 0x00000020u, c->r[16]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x000000e0u;
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[2]);
    mem_w32(ram, c->r[30] + 0x00000008u, 0u);
L_0882c384:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = ((s32)c->r[2] < (s32)0x0000000bu) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_0882c39c; }
    { goto L_0882c3ec; }
L_0882c39c:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08a80000u;
    c->r[2] = c->r[2] + 0x0000448cu;
    c->r[2] = c->r[3] + c->r[2];
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0u + 0x00000043u;
    c->r[6] = 0u + 0xffffffffu;
    c->r[7] = 0u + 0x00000007u;
    c->r[8] = 0u + 0u;
    c->r[9] = 0u + 0u;
    { c->r[31] = 0x0882c3dcu; c->r[10] = 0u + 0u; func_0882bbf4(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]); goto L_0882c384; }
L_0882c3ec:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = 0u + 0x00000043u;
    c->r[6] = 0u + 0xffffffffu;
    c->r[7] = 0u + 0xffffffffu;
    c->r[8] = 0u + 0u;
    c->r[9] = 0x08a80000u;
    c->r[9] = c->r[9] + 0x0000448cu;
    { c->r[31] = 0x0882c410u; c->r[10] = 0u + 0u; func_0892fcac(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[16] = c->r[2] + 0x0000000cu;
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000ac8u;
    { c->r[31] = 0x0882c42cu; c->r[5] = mem_r32(ram, c->r[30] + 0x00000008u); func_089cb780(c, ram); }
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    mem_w32(ram, c->r[16] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_0882c5ec; }
    mem_w32(ram, c->r[30] + 0x00000010u, 0u);
L_0882c448:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = ((s32)c->r[2] < (s32)0x0000000au) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_0882c460; }
    { goto L_0882c51c; }
L_0882c460:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[3] = c->r[2] << 4;
    c->r[2] = 0x08a80000u;
    c->r[2] = c->r[2] + 0x0000456cu;
    c->r[3] = c->r[3] + c->r[2];
    c->r[2] = 0x08a50000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00002cbcu);
    mem_w32(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[3] = c->r[2] << 4;
    c->r[2] = 0x08a80000u;
    c->r[2] = c->r[2] + 0x00004568u;
    c->r[3] = c->r[3] + c->r[2];
    c->r[2] = 0u + 0x0000003du;
    mem_w16(ram, c->r[3] + 0x00000002u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[3] = c->r[2] << 4;
    c->r[2] = 0x08a80000u;
    c->r[2] = c->r[2] + 0x00004568u;
    c->r[3] = c->r[3] + c->r[2];
    c->r[2] = 0u + 0x00001000u;
    mem_w16(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[3] = c->r[2] << 4;
    c->r[2] = 0x08a80000u;
    c->r[2] = c->r[2] + 0x00004574u;
    c->r[3] = c->r[3] + c->r[2];
    c->r[2] = 0x08a50000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00002cc0u);
    mem_w32(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[3] = c->r[2] << 4;
    c->r[2] = 0x08a80000u;
    c->r[2] = c->r[2] + 0x00004570u;
    c->r[2] = c->r[3] + c->r[2];
    mem_w16(ram, c->r[2] + 0x00000002u, 0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[3] = c->r[2] << 4;
    c->r[2] = 0x08a80000u;
    c->r[2] = c->r[2] + 0x00004570u;
    c->r[3] = c->r[3] + c->r[2];
    c->r[2] = 0u + 0x00001001u;
    mem_w16(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]); goto L_0882c448; }
L_0882c51c:
    mem_w32(ram, c->r[30] + 0x00000010u, 0u);
L_0882c520:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000009u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_0882c538; }
    { goto L_0882c59c; }
L_0882c538:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08a80000u;
    c->r[2] = c->r[2] + 0x0000448cu;
    c->r[4] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[3] = c->r[2] << 4;
    c->r[2] = 0x08a80000u;
    c->r[2] = c->r[2] + 0x00004568u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[5] = 0u + 0x00000043u;
    c->r[6] = 0u + 0xffffffffu;
    c->r[7] = 0x08a50000u;
    c->r[7] = mem_r32(ram, c->r[7] + 0x00002cb8u);
    c->r[8] = 0x00420000u;
    c->r[9] = 0u + 0x00000002u;
    { c->r[31] = 0x0882c58cu; c->r[10] = c->r[2] + 0u; func_0882bbf4(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]); goto L_0882c520; }
L_0882c59c:
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00004540u;
    c->r[5] = 0u + 0x00000043u;
    c->r[6] = 0u + 0xffffffffu;
    c->r[7] = 0u + 0x00000007u;
    c->r[8] = 0u + 0u;
    c->r[9] = 0u + 0u;
    { c->r[31] = 0x0882c5c0u; c->r[10] = 0u + 0u; func_0882bbf4(c, ram); }
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00004554u;
    c->r[5] = 0u + 0x00000043u;
    c->r[6] = 0u + 0xffffffffu;
    c->r[7] = 0x08a50000u;
    c->r[7] = mem_r32(ram, c->r[7] + 0x00002cb8u);
    c->r[8] = 0x00420000u;
    c->r[9] = 0u + 0x00000002u;
    c->r[10] = 0x08a80000u;
    { c->r[31] = 0x0882c5ecu; c->r[10] = c->r[10] + 0x000045f8u; func_0882bbf4(c, ram); }
L_0882c5ec:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000028u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000024u);
    c->r[16] = mem_r32(ram, c->r[29] + 0x00000020u);
    { c->r[29] = c->r[29] + 0x00000030u; return; }
    return; /* fell out of func_0882c35c */
}

/* func_08831230  0x08831230..0x0883138c  348 bytes, source=fde */
void func_08831230(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08831230u);
    c->r[29] = c->r[29] + 0xffffffc0u;
    mem_w32(ram, c->r[29] + 0x00000034u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000030u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[5]);
    mem_w32(ram, c->r[30] + 0x00000018u, c->r[6]);
    mem_w32(ram, c->r[30] + 0x0000001cu, c->r[7]);
    mem_w32(ram, c->r[30] + 0x00000020u, 0u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08a50000u;
    c->r[2] = c->r[2] + 0x00002decu;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000003u);
    mem_w16(ram, c->r[30] + 0x00000024u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08a50000u;
    c->r[2] = c->r[2] + 0x00002decu;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000004u);
    mem_w16(ram, c->r[30] + 0x00000026u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x0000000cu);
    c->r[2] = 0u + 0x0000000eu;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_088312c4; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[2] = c->r[2] | 0x0001u;
    mem_w32(ram, c->r[30] + 0x00000020u, c->r[2]);
L_088312c4:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x0000000cu);
    c->r[2] = 0u + 0x00000011u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_088312e4; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[2] = c->r[2] | 0x0001u;
    mem_w32(ram, c->r[30] + 0x00000020u, c->r[2]);
L_088312e4:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[2] = c->r[2] | 0x0004u;
    mem_w32(ram, c->r[30] + 0x00000020u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[2] = c->r[2] | 0x0002u;
    mem_w32(ram, c->r[30] + 0x00000020u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[3] = c->r[2] + 0x00000008u;
    c->r[9] = (u32)(s32)(s16)mem_r16(ram, c->r[30] + 0x00000024u);
    c->r[10] = (u32)(s32)(s16)mem_r16(ram, c->r[30] + 0x00000026u);
    c->r[2] = 0u + 0xffffffffu;
    mem_w32(ram, c->r[29] + 0x00000000u, c->r[2]);
    c->r[4] = c->r[3] + 0u;
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[6] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[7] = 0xff000000u;
    c->r[8] = mem_r32(ram, c->r[30] + 0x00000020u);
    { c->r[31] = 0x08831330u; c->r[11] = 0u + 0xffffffffu; func_08938f94(c, ram); }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[2] = 0u + 0xfffffffdu;
    c->r[2] = c->r[3] & c->r[2];
    mem_w32(ram, c->r[30] + 0x00000020u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[3] = c->r[2] + 0x00000008u;
    c->r[9] = (u32)(s32)(s16)mem_r16(ram, c->r[30] + 0x00000024u);
    c->r[10] = (u32)(s32)(s16)mem_r16(ram, c->r[30] + 0x00000026u);
    c->r[2] = 0u + 0xffffffffu;
    mem_w32(ram, c->r[29] + 0x00000000u, c->r[2]);
    c->r[4] = c->r[3] + 0u;
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[6] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[7] = 0xff1c0000u;
    c->r[7] = c->r[7] | 0x1c67u;
    c->r[8] = mem_r32(ram, c->r[30] + 0x00000020u);
    { c->r[31] = 0x08831378u; c->r[11] = 0u + 0xffffffffu; func_08938f94(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000034u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000030u);
    { c->r[29] = c->r[29] + 0x00000040u; return; }
    return; /* fell out of func_08831230 */
}

/* func_08832d58  0x08832d58..0x08832f0c  436 bytes, source=fde */
void func_08832d58(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08832d58u);
    c->r[29] = c->r[29] + 0xffffffc0u;
    mem_w32(ram, c->r[29] + 0x00000034u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000030u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[4]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000014u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000010u) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_08832db0; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000014u);
    c->f[0] = (f32)(s32)f2u(c->f[0]);
    mem_wf32(ram, c->r[30] + 0x00000018u, c->f[0]);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00001944u);
    mem_wf32(ram, c->r[30] + 0x0000001cu, c->f[0]);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000018u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x0000001cu);
    c->f[0] = c->f[1] / c->f[0];
    { mem_wf32(ram, c->r[30] + 0x00000014u, c->f[0]); goto L_08832dbc; }
L_08832db0:
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00001948u);
    mem_wf32(ram, c->r[30] + 0x00000014u, c->f[0]);
L_08832dbc:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000014u);
    mem_wf32(ram, c->r[2] + 0x00000020u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = c->r[2] + 0x00000008u;
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x08832ddcu; c->r[5] = 0u + 0x00000002u; func_0893b904(c, ram); }
    c->r[2] = 0xff360000u;
    c->r[2] = c->r[2] | 0x5e7fu;
    mem_w32(ram, c->r[30] + 0x00000020u, c->r[2]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000020u);
    { c->r[31] = 0x08832df4u; c->f[12] = mem_rf32(ram, c->r[30] + 0x00000014u); func_08903b2c(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000020u, c->r[2]);
    c->r[4] = 0x08a40000u;
    { c->r[31] = 0x08832e04u; c->r[4] = c->r[4] + 0x00001934u; func_089c6f64(c, ram); }
    c->r[4] = 0x08a70000u;
    c->r[4] = c->r[4] + 0xffffb640u;
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x08832e18u; c->r[6] = 0u + 0u; func_089e0bd8(c, ram); }
    { c->r[31] = 0x08832e20u; func_089d2008(c, ram); }
    c->r[4] = 0x08a70000u;
    c->r[4] = c->r[4] + 0xffffb640u;
    c->r[5] = 0u + 0x00000002u;
    { c->r[31] = 0x08832e34u; c->r[6] = 0u + 0x00000006u; func_089df7a0(c, ram); }
    { c->r[31] = 0x08832e3cu; c->r[4] = 0u + 0x0000002fu; func_089241c8(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000024u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    mem_w32(ram, c->r[29] + 0x00000000u, c->r[2]);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00002dfcu;
    c->r[5] = 0u + 0x00000003u;
    c->r[6] = mem_r32(ram, c->r[30] + 0x00000024u);
    c->r[7] = 0u + 0x00000001u;
    c->r[8] = 0u + 0x000000d0u;
    c->r[9] = 0u + 0x000000b2u;
    c->r[10] = 0u + 0u;
    { c->r[31] = 0x08832e70u; c->r[11] = 0u + 0x00000001u; func_089ce998(c, ram); }
    { c->r[31] = 0x08832e78u; c->r[4] = 0u + 0x00000030u; func_089241c8(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000024u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    mem_w32(ram, c->r[29] + 0x00000000u, c->r[2]);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00002dfcu;
    c->r[5] = 0u + 0x00000003u;
    c->r[6] = mem_r32(ram, c->r[30] + 0x00000024u);
    c->r[7] = 0u + 0x00000001u;
    c->r[8] = 0u + 0x00000124u;
    c->r[9] = 0u + 0x00000070u;
    c->r[10] = 0u + 0u;
    { c->r[31] = 0x08832eacu; c->r[11] = 0u + 0x00000001u; func_089ce998(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000014u);
    c->r[2] = ((s32)c->r[2] < (s32)0x0000001fu) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_08832ef8; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000014u);
    c->r[2] = c->r[2] + 0xffffffe2u;
    c->r[4] = 0x08a50000u;
    c->r[4] = c->r[4] + 0x00002eacu;
    { c->r[31] = 0x08832edcu; c->r[5] = c->r[2] + 0u; func_08937aec(c, ram); }
    { int _c = (c->r[2] != 0u); if (_c) goto L_08832ef8; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = c->r[2] + 0x00000008u;
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x08832ef8u; c->r[5] = 0u + 0x00000002u; func_08937a50(c, ram); }
L_08832ef8:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000034u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000030u);
    { c->r[29] = c->r[29] + 0x00000040u; return; }
    return; /* fell out of func_08832d58 */
}

/* func_08835128  0x08835128..0x08835214  236 bytes, source=fde */
void func_08835128(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08835128u);
    c->r[29] = c->r[29] + 0xffffffd0u;
    mem_w32(ram, c->r[29] + 0x00000024u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000020u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000008u;
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x08835150u; c->r[5] = 0u + 0u; func_0893b904(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000008u;
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x08835164u; c->r[5] = 0u + 0u; func_089385f4(c, ram); }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x08835170u; c->r[5] = 0u + 0u; func_0882f514(c, ram); }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x0883517cu; c->r[5] = 0u + 0u; func_0882f538(c, ram); }
    { c->r[31] = 0x08835184u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u); func_08831578(c, ram); }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x08835190u; c->r[5] = 0u + 0u; func_0882f778(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000008u;
    { c->r[31] = 0x088351a0u; c->r[4] = c->r[2] + 0u; func_08938064(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000008u;
    { c->r[31] = 0x088351b0u; c->r[4] = c->r[2] + 0u; func_08938218(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = c->r[2] + 0x00000008u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x0000002au);
    c->r[4] = c->r[3] + 0u;
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x088351d0u; c->r[6] = 0u + 0u; func_0893a73c(c, ram); }
    { c->r[31] = 0x088351d8u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u); func_08830474(c, ram); }
    c->r[2] = c->r[30] + 0x00000010u;
    { c->r[31] = 0x088351e4u; c->r[4] = c->r[2] + 0u; func_0893a590(c, ram); }
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[30] + 0x00000010u);
    c->r[3] = (u32)(s32)(s16)mem_r16(ram, c->r[30] + 0x00000012u);
    c->r[4] = c->r[2] + 0u;
    c->r[5] = c->r[3] + 0u;
    c->r[6] = 0x00120000u;
    { c->r[31] = 0x08835200u; c->r[6] = c->r[6] | 0x0800u; func_0892566c(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000024u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000020u);
    { c->r[29] = c->r[29] + 0x00000030u; return; }
    return; /* fell out of func_08835128 */
}

/* func_08838d34  0x08838d34..0x08838e58  292 bytes, source=fde */
void func_08838d34(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08838d34u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000020u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00001ba0u);
    c->f[0] = c->f[1] - c->f[0];
    mem_wf32(ram, c->r[3] + 0x00000020u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000020u);
    c->f[0] = u2f(0u);
    alx_c_cond_s(c, 12, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_08838d8c; }
    { goto L_08838e44; }
L_08838d8c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    mem_w32(ram, c->r[2] + 0x00000020u, 0u);
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x08838da0u; c->r[4] = c->r[4] + 0x00000af4u; func_088145dc(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x0000002bu);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08a50000u;
    c->r[2] = c->r[2] + 0x000035b8u;
    c->r[4] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x0000002cu);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 2;
    c->r[2] = mem_r32(ram, c->r[4] + 0x00000000u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r16(ram, c->r[2] + 0x0000000au);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000af4u;
    { c->r[31] = 0x08838df8u; c->r[5] = c->r[2] + 0u; func_08836a10(c, ram); }
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00002e04u;
    c->r[5] = 0u + 0x0000000au;
    { c->r[31] = 0x08838e0cu; c->r[6] = 0u + 0u; func_08813280(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x0000002bu);
    { c->r[31] = 0x08838e1cu; c->r[4] = c->r[2] + 0u; func_089691c4(c, ram); }
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000af4u;
    { c->r[31] = 0x08838e2cu; c->r[5] = c->r[2] + 0u; func_0880d3a8(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x0000002du);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000af4u;
    { c->r[31] = 0x08838e44u; c->r[5] = c->r[2] + 0u; func_0880d3dc(c, ram); }
L_08838e44:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_08838d34 */
}

/* func_0883c078  0x0883c078..0x0883c1f8  384 bytes, source=fde */
void func_0883c078(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0883c078u);
    c->r[29] = c->r[29] + 0xffffffd0u;
    mem_w32(ram, c->r[29] + 0x00000024u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000020u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    c->r[2] = c->r[4] + 0u;
    c->r[3] = c->r[5] + 0u;
    c->r[4] = c->r[6] + 0u;
    c->r[5] = c->r[7] + 0u;
    mem_wf32(ram, c->r[30] + 0x00000008u, c->f[12]);
    mem_w16(ram, c->r[30] + 0x00000000u, c->r[2]);
    mem_w16(ram, c->r[30] + 0x00000002u, c->r[3]);
    mem_w16(ram, c->r[30] + 0x00000004u, c->r[4]);
    mem_w16(ram, c->r[30] + 0x00000006u, c->r[5]);
    c->r[3] = mem_r16(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r16(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[3] - c->r[2];
    mem_w16(ram, c->r[30] + 0x00000004u, c->r[2]);
    c->r[3] = mem_r16(ram, c->r[30] + 0x00000006u);
    c->r[2] = mem_r16(ram, c->r[30] + 0x00000002u);
    c->r[2] = c->r[3] - c->r[2];
    mem_w16(ram, c->r[30] + 0x00000006u, c->r[2]);
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[30] + 0x00000000u);
    c->f[0] = u2f(c->r[2]);
    c->f[2] = (f32)(s32)f2u(c->f[0]);
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[30] + 0x00000004u);
    c->f[0] = u2f(c->r[2]);
    c->f[1] = (f32)(s32)f2u(c->f[0]);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00001d1cu);
    c->f[0] = c->f[1] * c->f[0];
    c->f[0] = c->f[2] + c->f[0];
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    c->r[2] = f2u(c->f[0]);
    mem_w16(ram, c->r[30] + 0x0000000cu, c->r[2]);
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[30] + 0x00000002u);
    c->f[0] = u2f(c->r[2]);
    c->f[2] = (f32)(s32)f2u(c->f[0]);
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[30] + 0x00000006u);
    c->f[0] = u2f(c->r[2]);
    c->f[1] = (f32)(s32)f2u(c->f[0]);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00001d1cu);
    c->f[0] = c->f[1] * c->f[0];
    c->f[0] = c->f[2] + c->f[0];
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    c->r[2] = f2u(c->f[0]);
    mem_w16(ram, c->r[30] + 0x0000000eu, c->r[2]);
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[30] + 0x00000004u);
    c->f[0] = u2f(c->r[2]);
    c->f[1] = (f32)(s32)f2u(c->f[0]);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00001d1cu);
    c->f[1] = c->f[1] * c->f[0];
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000008u);
    c->f[0] = c->f[1] * c->f[0];
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    c->r[2] = f2u(c->f[0]);
    mem_w16(ram, c->r[30] + 0x00000010u, c->r[2]);
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[30] + 0x00000006u);
    c->f[0] = u2f(c->r[2]);
    c->f[1] = (f32)(s32)f2u(c->f[0]);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00001d1cu);
    c->f[1] = c->f[1] * c->f[0];
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000008u);
    c->f[0] = c->f[1] * c->f[0];
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    c->r[2] = f2u(c->f[0]);
    mem_w16(ram, c->r[30] + 0x00000012u, c->r[2]);
    c->r[3] = mem_r16(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r16(ram, c->r[30] + 0x00000010u);
    c->r[2] = c->r[3] - c->r[2];
    c->r[2] = c->r[2] << 16;
    c->r[4] = (u32)((s32)c->r[2] >> 16);
    c->r[3] = mem_r16(ram, c->r[30] + 0x0000000eu);
    c->r[2] = mem_r16(ram, c->r[30] + 0x00000012u);
    c->r[2] = c->r[3] - c->r[2];
    c->r[2] = c->r[2] << 16;
    c->r[5] = (u32)((s32)c->r[2] >> 16);
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[30] + 0x00000010u);
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] << 16;
    c->r[3] = (u32)((s32)c->r[2] >> 16);
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[30] + 0x00000012u);
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] << 16;
    c->r[2] = (u32)((s32)c->r[2] >> 16);
    c->r[6] = c->r[3] + 0u;
    c->r[7] = c->r[2] + 0u;
    { c->r[31] = 0x0883c1e4u; c->r[8] = 0u + 0u; func_08929da0(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000024u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000020u);
    { c->r[29] = c->r[29] + 0x00000030u; return; }
    return; /* fell out of func_0883c078 */
}

/* func_08845724  0x08845724..0x0884585c  312 bytes, source=sweep */
void func_08845724(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08845724u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[2] = c->r[5] + 0u;
    c->r[3] = c->r[6] + 0u;
    mem_w8(ram, c->r[30] + 0x00000004u, c->r[2]);
    mem_w8(ram, c->r[30] + 0x00000005u, c->r[3]);
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[30] + 0x00000004u);
    c->r[2] = 0u + 0x00000188u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[3] = c->lo;
    c->r[2] = 0x08a80000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00003e34u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000174u);
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[30] + 0x00000005u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_08845790; }
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[30] + 0x00000004u);
    c->r[2] = 0u + 0x0000000bu;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_08845790; }
    { goto L_0884579c; }
L_08845790:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    { mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]); goto L_08845844; }
L_0884579c:
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[30] + 0x00000004u);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000af4u;
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x088457b4u; c->r[6] = 0u + 0x00000100u; func_08820e5c(c, ram); }
    { int _c = (c->r[2] == 0u); if (_c) goto L_088457ec; }
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[30] + 0x00000004u);
    c->r[2] = 0u + 0x00000188u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[3] = c->lo;
    c->r[2] = 0x08a80000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00003e34u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = c->r[2] + 0x0000014cu;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[2] = c->r[3] + c->r[2];
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]);
L_088457ec:
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[30] + 0x00000004u);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000af4u;
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x08845804u; c->r[6] = 0u + 0x00000200u; func_08820e5c(c, ram); }
    { int _c = (c->r[2] == 0u); if (_c) goto L_0884583c; }
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[30] + 0x00000004u);
    c->r[2] = 0u + 0x00000188u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[3] = c->lo;
    c->r[2] = 0x08a80000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00003e34u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = c->r[2] + 0x00000154u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[2] = c->r[3] + c->r[2];
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]);
L_0884583c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
L_08845844:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_08845724 */
}

/* func_08847558  0x08847558..0x0884757c  36 bytes, source=sweep */
void func_08847558(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08847558u);
    c->r[29] = c->r[29] + 0xfffffff0u;
    mem_w32(ram, c->r[29] + 0x00000000u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    c->r[2] = 0x08a80000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00004f20u);
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000000u);
    { c->r[29] = c->r[29] + 0x00000010u; return; }
    return; /* fell out of func_08847558 */
}

/* func_0884c73c  0x0884c73c..0x0884c7c0  132 bytes, source=sweep */
void func_0884c73c(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0884c73cu);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    vfpu_exec(c, ram, 0xd8470000u); /* lv.q */
    vfpu_exec(c, ram, 0xdc0c001bu); /* vpfxs */
    vfpu_exec(c, ram, 0xd0008784u); /* vmov.q */
    vfpu_exec(c, ram, 0xdc09004eu); /* vpfxs */
    vfpu_exec(c, ram, 0xd0008785u); /* vmov.q */
    vfpu_exec(c, ram, 0xdc0a00b1u); /* vpfxs */
    vfpu_exec(c, ram, 0xd0008786u); /* vmov.q */
    vfpu_exec(c, ram, 0xdc04001bu); /* vpfxs */
    vfpu_exec(c, ram, 0xd0008788u); /* vmov.q */
    vfpu_exec(c, ram, 0xdc01004eu); /* vpfxs */
    vfpu_exec(c, ram, 0xd0008789u); /* vmov.q */
    vfpu_exec(c, ram, 0xdc0200b1u); /* vpfxs */
    vfpu_exec(c, ram, 0xd000878au); /* vmov.q */
    vfpu_exec(c, ram, 0xdc0700e4u); /* vpfxs */
    vfpu_exec(c, ram, 0xd000878bu); /* vmov.q */
    vfpu_exec(c, ram, 0xf02884a0u); /* vmmul.q */
    vfpu_exec(c, ram, 0xd00380a3u); /* vidt.q */
    vfpu_exec(c, ram, 0xd0038083u); /* vidt.q */
    vfpu_exec(c, ram, 0xf8600000u); /* sv.q */
    vfpu_exec(c, ram, 0xf8610010u); /* sv.q */
    vfpu_exec(c, ram, 0xf8620020u); /* sv.q */
    vfpu_exec(c, ram, 0xf8630030u); /* sv.q */
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_0884c73c */
}

/* func_0884dfd8  0x0884dfd8..0x0884e03c  100 bytes, source=sweep */
void func_0884dfd8(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0884dfd8u);
    c->r[29] = c->r[29] + 0xfffffff0u;
    mem_w32(ram, c->r[29] + 0x00000004u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000000u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    c->r[2] = 0x08a90000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0xffff8b30u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_0884e028; }
    c->r[1] = 0x08a90000u;
    mem_w32(ram, c->r[1] + 0xffff8b30u, 0u);
    c->r[4] = 0x08a90000u;
    { c->r[31] = 0x0884e00cu; c->r[4] = c->r[4] + 0xffff8e58u; func_0885a72c(c, ram); }
    c->r[1] = 0x08a90000u;
    mem_w32(ram, c->r[1] + 0xffff8b38u, c->r[2]);
    c->r[4] = 0x08a90000u;
    { c->r[31] = 0x0884e020u; c->r[4] = c->r[4] + 0xffff8e58u; func_0885a7a4(c, ram); }
    c->r[1] = 0x08a90000u;
    mem_w32(ram, c->r[1] + 0xffff8b44u, c->r[2]);
L_0884e028:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000004u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000000u);
    { c->r[29] = c->r[29] + 0x00000010u; return; }
    return; /* fell out of func_0884dfd8 */
}

/* func_088540d4  0x088540d4..0x08854238  356 bytes, source=fde */
void func_088540d4(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x088540d4u);
    c->r[29] = c->r[29] + 0xffffff90u;
    mem_w32(ram, c->r[29] + 0x00000064u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000060u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[2] = c->r[5] + 0u;
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[6]);
    mem_w8(ram, c->r[30] + 0x00000004u, c->r[2]);
    c->r[3] = mem_r8(ram, c->r[30] + 0x00000004u);
    c->r[2] = 0u + 0x00000001u;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_0885410c; }
    { goto L_08854224; }
L_0885410c:
    c->r[2] = 0x08a40000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00002948u);
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]);
    c->r[2] = 0x08a40000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000294cu);
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
    c->r[2] = 0x08a40000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00002950u);
    mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]);
    c->r[2] = 0x08a40000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00002954u);
    mem_w32(ram, c->r[30] + 0x0000001cu, c->r[2]);
    c->r[2] = 0x08a40000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00002958u);
    mem_w32(ram, c->r[30] + 0x00000020u, c->r[2]);
    c->r[2] = 0x08a40000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000295cu);
    mem_w32(ram, c->r[30] + 0x00000024u, c->r[2]);
    c->r[2] = 0x08a40000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00002960u);
    mem_w32(ram, c->r[30] + 0x00000028u, c->r[2]);
    mem_w32(ram, c->r[30] + 0x00000030u, 0u);
L_08854164:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000030u);
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[30];
    c->r[2] = c->r[2] + 0x00000010u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_08854188; }
    { goto L_08854224; }
L_08854188:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000030u);
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[30];
    c->r[2] = c->r[2] + 0x00000010u;
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x088541a4u; c->r[5] = mem_r32(ram, c->r[2] + 0x00000000u); func_089b9864(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000034u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000034u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000000u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_08854214; }
    c->r[2] = c->r[30] + 0x00000040u;
    { c->r[31] = 0x088541c4u; c->r[4] = c->r[2] + 0u; func_08808240(c, ram); }
    c->r[3] = c->r[30] + 0x00000040u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000030u);
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[30];
    c->r[2] = c->r[2] + 0x00000020u;
    c->r[4] = c->r[3] + 0u;
    c->f[12] = mem_rf32(ram, c->r[2] + 0x00000000u);
    c->f[13] = u2f(0u);
    c->f[14] = u2f(0u);
    { c->r[31] = 0x088541f0u; func_0884c4f4(c, ram); }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x088541fcu; c->r[5] = mem_r32(ram, c->r[30] + 0x00000034u); func_089b9be8(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000050u, c->r[2]);
    c->r[2] = c->r[30] + 0x00000040u;
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000050u);
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000050u);
    { c->r[31] = 0x08854214u; c->r[6] = c->r[2] + 0u; func_0884c314(c, ram); }
L_08854214:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000030u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000030u, c->r[2]); goto L_08854164; }
L_08854224:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000064u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000060u);
    { c->r[29] = c->r[29] + 0x00000070u; return; }
    return; /* fell out of func_088540d4 */
}

/* func_08858920  0x08858920..0x08858a1c  252 bytes, source=fde */
void func_08858920(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08858920u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[2]);
    c->r[2] = 0u + 0x00000001u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_08858980; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = ((s32)c->r[3] < (s32)0x00000002u) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_08858968; }
    { goto L_08858a08; }
L_08858968:
    c->r[2] = 0u + 0x00000002u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_088589d0; }
    { goto L_08858a08; }
L_08858980:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = 0u + 0x00000002u;
    mem_w32(ram, c->r[2] + 0x00000000u, c->r[3]);
    c->r[2] = 0u + 0x00000001u;
    c->r[1] = 0x08a80000u;
    mem_w32(ram, c->r[1] + 0x00002eacu, c->r[2]);
    { c->r[31] = 0x088589a0u; c->r[4] = 0u + 0x00000002u; func_08924620(c, ram); }
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x088589acu; c->r[4] = c->r[4] + 0xffffc930u; func_089f7a08(c, ram); }
    { c->r[31] = 0x088589b4u; func_0880f27c(c, ram); }
    c->r[4] = 0x08a90000u;
    c->r[4] = c->r[4] + 0xffff9230u;
    c->r[5] = 0x08860000u;
    { c->r[31] = 0x088589c8u; c->r[5] = c->r[5] + 0xffff8aa8u; func_0880f094(c, ram); }
    { goto L_08858a08; }
L_088589d0:
    c->r[4] = 0x08a90000u;
    { c->r[31] = 0x088589dcu; c->r[4] = c->r[4] + 0xffff9230u; func_0880f104(c, ram); }
    { int _c = (c->r[2] == 0u); if (_c) goto L_08858a08; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    mem_w32(ram, c->r[2] + 0x00000000u, 0u);
    c->r[1] = 0x08a80000u;
    mem_w32(ram, c->r[1] + 0x00002eacu, 0u);
    { c->r[31] = 0x088589fcu; c->r[4] = 0u + 0x00000003u; func_08924620(c, ram); }
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x08858a08u; c->r[4] = c->r[4] + 0xffffc930u; func_089f7af4(c, ram); }
L_08858a08:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_08858920 */
}

/* func_0885a77c  0x0885a77c..0x0885a7a4  40 bytes, source=sweep */
void func_0885a77c(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0885a77cu);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000010u);
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_0885a77c */
}

/* func_0885b4b0  0x0885b4b0..0x0885b700  592 bytes, source=fde */
void func_0885b4b0(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0885b4b0u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[4] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[5] = 0u + 0u;
    c->r[6] = 0x000d0000u;
    { c->r[31] = 0x0885b4dcu; c->r[6] = c->r[6] | 0x8000u; func_08a19ec4(c, ram); }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    mem_w32(ram, c->r[3] + 0x00000004u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000004u);
    mem_w32(ram, c->r[3] + 0x00000008u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = 0x000d0000u;
    c->r[2] = c->r[2] | 0x7ffcu;
    mem_w32(ram, c->r[3] + 0x00000028u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    mem_w32(ram, c->r[2] + 0x00000024u, 0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    mem_w16(ram, c->r[2] + 0x0000002cu, 0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    mem_w16(ram, c->r[2] + 0x0000002eu, 0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    mem_w32(ram, c->r[2] + 0x000014acu, 0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000034u;
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0u + 0u;
    { c->r[31] = 0x0885b544u; c->r[6] = 0u + 0x00000404u; func_08a19ec4(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x0000063au;
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0u + 0u;
    { c->r[31] = 0x0885b55cu; c->r[6] = 0u + 0x00000808u; func_08a19ec4(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x0000146cu;
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0u + 0u;
    { c->r[31] = 0x0885b574u; c->r[6] = 0u + 0x00000014u; func_08a19ec4(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00001480u;
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0u + 0u;
    { c->r[31] = 0x0885b58cu; c->r[6] = 0u + 0x0000000au; func_08a19ec4(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x000014b0u;
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0u + 0u;
    { c->r[31] = 0x0885b5a4u; c->r[6] = 0u + 0x00000808u; func_08a19ec4(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00001cb8u;
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0u + 0u;
    { c->r[31] = 0x0885b5bcu; c->r[6] = 0u + 0x00000014u; func_08a19ec4(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00001cccu;
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0u + 0u;
    { c->r[31] = 0x0885b5d4u; c->r[6] = 0u + 0x0000000au; func_08a19ec4(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000539u;
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0u + 0u;
    { c->r[31] = 0x0885b5ecu; c->r[6] = 0u + 0x00000101u; func_08a19ec4(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000438u;
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0u + 0u;
    { c->r[31] = 0x0885b604u; c->r[6] = 0u + 0x00000101u; func_08a19ec4(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000e42u;
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0u + 0u;
    { c->r[31] = 0x0885b61cu; c->r[6] = 0u + 0x00000200u; func_08a19ec4(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00001444u;
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0u + 0u;
    { c->r[31] = 0x0885b634u; c->r[6] = 0u + 0x00000028u; func_08a19ec4(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00001044u;
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0u + 0u;
    { c->r[31] = 0x0885b64cu; c->r[6] = 0u + 0x00000400u; func_08a19ec4(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x0000148au;
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0u + 0u;
    { c->r[31] = 0x0885b664u; c->r[6] = 0u + 0x00000014u; func_08a19ec4(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x0000149eu;
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0u + 0u;
    { c->r[31] = 0x0885b67cu; c->r[6] = 0u + 0x0000000au; func_08a19ec4(c, ram); }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x00000018u);
    c->r[2] = 0x00010000u;
    c->r[2] = c->r[2] | 0x6080u;
    c->r[2] = c->r[3] + c->r[2];
    mem_w32(ram, c->r[4] + 0x0000001cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[2] = 0x000d0000u;
    c->r[2] = c->r[2] | 0x7ffcu;
    c->r[2] = c->r[3] + c->r[2];
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = 0u + 0xffffffffu;
    mem_w32(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    mem_w32(ram, c->r[3] + 0x0000000cu, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    mem_w32(ram, c->r[3] + 0x00000010u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    mem_w32(ram, c->r[3] + 0x00000014u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    mem_w32(ram, c->r[2] + 0x000014a8u, 0u);
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_0885b4b0 */
}

/* func_08861394  0x08861394..0x088614d0  316 bytes, source=sweep */
void func_08861394(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08861394u);
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
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_088613ec; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = 0x00ff0000u;
    c->r[2] = c->r[2] | 0xffffu;
    c->r[3] = c->r[3] & c->r[2];
    c->r[2] = 0x12000000u;
    c->r[2] = c->r[3] | c->r[2];
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x088613ecu; c->r[5] = c->r[2] + 0u; func_08861028(c, ram); }
L_088613ec:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_08861440; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = c->r[2] >> 24;
    c->r[2] = c->r[2] & 0x000fu;
    c->r[3] = c->r[2] << 16;
    c->r[2] = 0x10000000u;
    c->r[2] = c->r[3] | c->r[2];
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x0886141cu; c->r[5] = c->r[2] + 0u; func_08861028(c, ram); }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = 0x00ff0000u;
    c->r[2] = c->r[2] | 0xffffu;
    c->r[3] = c->r[3] & c->r[2];
    c->r[2] = 0x02000000u;
    c->r[2] = c->r[3] | c->r[2];
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x08861440u; c->r[5] = c->r[2] + 0u; func_08861028(c, ram); }
L_08861440:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_08861494; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = c->r[2] >> 24;
    c->r[2] = c->r[2] & 0x000fu;
    c->r[3] = c->r[2] << 16;
    c->r[2] = 0x10000000u;
    c->r[2] = c->r[3] | c->r[2];
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x08861470u; c->r[5] = c->r[2] + 0u; func_08861028(c, ram); }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = 0x00ff0000u;
    c->r[2] = c->r[2] | 0xffffu;
    c->r[3] = c->r[3] & c->r[2];
    c->r[2] = 0x01000000u;
    c->r[2] = c->r[3] | c->r[2];
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x08861494u; c->r[5] = c->r[2] + 0u; func_08861028(c, ram); }
L_08861494:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[2] & 0x0007u;
    c->r[3] = c->r[2] << 16;
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = c->r[3] | c->r[2];
    c->r[2] = 0x04000000u;
    c->r[2] = c->r[3] | c->r[2];
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x088614bcu; c->r[5] = c->r[2] + 0u; func_08861028(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000024u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000020u);
    { c->r[29] = c->r[29] + 0x00000030u; return; }
    return; /* fell out of func_08861394 */
}

/* func_08862344  0x08862344..0x08862420  220 bytes, source=sweep */
void func_08862344(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08862344u);
    c->r[29] = c->r[29] + 0xffffffc0u;
    mem_w32(ram, c->r[29] + 0x00000038u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000034u, c->r[30]);
    mem_w32(ram, c->r[29] + 0x00000030u, c->r[16]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    c->r[16] = c->r[30] + 0x00000010u;
    c->r[2] = c->r[30] + 0x00000020u;
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00002fe8u);
    c->r[1] = 0x08a40000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0x00002fe8u);
    c->r[4] = c->r[2] + 0u;
    c->f[12] = c->f[0];
    c->f[13] = u2f(0u);
    c->f[14] = c->f[1];
    c->f[15] = u2f(0u);
    { c->r[31] = 0x08862394u; func_0880d140(c, ram); }
    c->r[2] = c->r[30] + 0x00000020u;
    c->r[4] = c->r[16] + 0u;
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000004u);
    { c->r[31] = 0x088623a8u; c->r[6] = c->r[2] + 0u; func_0884c07c(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000010u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00002fecu);
    c->f[0] = c->f[1] * c->f[0];
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    c->r[3] = f2u(c->f[0]);
    mem_w16(ram, c->r[2] + 0x00000000u, c->r[3]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000014u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00002fecu);
    c->f[0] = c->f[1] * c->f[0];
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    c->r[3] = f2u(c->f[0]);
    mem_w16(ram, c->r[2] + 0x00000002u, c->r[3]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000018u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00002fecu);
    c->f[0] = c->f[1] * c->f[0];
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    c->r[3] = f2u(c->f[0]);
    mem_w16(ram, c->r[2] + 0x00000004u, c->r[3]);
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000038u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000034u);
    c->r[16] = mem_r32(ram, c->r[29] + 0x00000030u);
    { c->r[29] = c->r[29] + 0x00000040u; return; }
    return; /* fell out of func_08862344 */
}

/* func_088669d0  0x088669d0..0x08866a00  48 bytes, source=fde */
void func_088669d0(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x088669d0u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    { c->r[31] = 0x088669ecu; c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u); func_0886672c(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_088669d0 */
}

/* func_0886e214  0x0886e214..0x0886e3dc  456 bytes, source=fde */
void func_0886e214(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0886e214u);
    c->r[29] = c->r[29] + 0xffffffd0u;
    mem_w32(ram, c->r[29] + 0x00000028u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000024u, c->r[30]);
    mem_w32(ram, c->r[29] + 0x00000020u, c->r[16]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_0886e258; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000004u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
L_0886e258:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = 0u + 0u;
    { c->r[31] = 0x0886e268u; c->r[6] = 0u + 0x00000034u; func_08a19ec4(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = 0u + 0x00000003u;
    mem_w8(ram, c->r[2] + 0x00000010u, c->r[3]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_0886e29c; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    mem_w32(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = c->r[2] + 0x00000004u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    mem_w32(ram, c->r[3] + 0x00000000u, c->r[2]);
L_0886e29c:
    mem_w32(ram, c->r[30] + 0x00000010u, 0u);
L_0886e2a0:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = ((s32)c->r[2] < (s32)0x0000000fu) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_0886e2b8; }
    { goto L_0886e2e4; }
L_0886e2b8:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08a90000u;
    c->r[2] = c->r[2] + 0xffffbdb0u;
    c->r[3] = c->r[3] + c->r[2];
    c->r[2] = 0u + 0xffffffffu;
    mem_w32(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]); goto L_0886e2a0; }
L_0886e2e4:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = 0u + 0xffffffffu;
    mem_w16(ram, c->r[3] + 0x00000018u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = 0u + 0xffffffffu;
    mem_w16(ram, c->r[3] + 0x0000001au, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    mem_w8(ram, c->r[2] + 0x00000014u, 0u);
    c->r[16] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x0886e314u; c->r[4] = c->r[4] + 0x00000af4u; func_08826a78(c, ram); }
    mem_w8(ram, c->r[16] + 0x00000013u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = 0u + 0x00000258u;
    mem_w16(ram, c->r[3] + 0x00000016u, c->r[2]);
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x0886e330u; c->r[4] = c->r[4] + 0x00000af4u; func_0880810c(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = 0u + 0x00000002u;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_0886e364; }
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x0886e34cu; c->r[4] = c->r[4] + 0x00000af4u; func_0880810c(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = 0u + 0x00000004u;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_0886e364; }
    { goto L_0886e370; }
L_0886e364:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    { mem_w8(ram, c->r[2] + 0x00000012u, 0u); goto L_0886e3bc; }
L_0886e370:
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x0886e37cu; c->r[4] = c->r[4] + 0x00000af4u; func_0880810c(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = 0u + 0x00000003u;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_0886e3b0; }
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x0886e398u; c->r[4] = c->r[4] + 0x00000af4u; func_0880810c(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = 0u + 0x00000005u;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_0886e3b0; }
    { goto L_0886e3bc; }
L_0886e3b0:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = 0u + 0x00000001u;
    mem_w8(ram, c->r[3] + 0x00000012u, c->r[2]);
L_0886e3bc:
    { c->r[31] = 0x0886e3c4u; func_0887e70c(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000028u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000024u);
    c->r[16] = mem_r32(ram, c->r[29] + 0x00000020u);
    { c->r[29] = c->r[29] + 0x00000030u; return; }
    return; /* fell out of func_0886e214 */
}

/* func_0887211c  0x0887211c..0x088722ac  400 bytes, source=fde */
void func_0887211c(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0887211cu);
    c->r[29] = c->r[29] + 0xffffffd0u;
    mem_w32(ram, c->r[29] + 0x00000028u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000024u, c->r[30]);
    mem_w32(ram, c->r[29] + 0x00000020u, c->r[16]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[6]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000100u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000036e4u);
    c->f[1] = c->f[1] * c->f[0];
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000036e8u);
    c->f[0] = c->f[1] * c->f[0];
    { c->r[31] = 0x08872164u; c->f[12] = c->f[0]; func_08a0f760(c, ram); }
    c->f[1] = c->f[0];
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x000000d4u);
    c->f[0] = c->f[1] * c->f[0];
    mem_wf32(ram, c->r[30] + 0x0000000cu, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x0000000cu);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000050u);
    c->f[2] = c->f[1] * c->f[0];
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x000000f4u);
    c->f[1] = (f32)fabsf(c->f[0]);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000036ecu);
    c->f[0] = c->f[0] - c->f[1];
    c->f[0] = c->f[2] * c->f[0];
    mem_wf32(ram, c->r[30] + 0x00000010u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x0000000cu);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000060u);
    c->f[1] = c->f[1] * c->f[0];
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x000000f4u);
    c->f[0] = c->f[1] * c->f[0];
    mem_wf32(ram, c->r[30] + 0x00000014u, c->f[0]);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000010u);
    c->f[0] = u2f(0u);
    alx_c_cond_s(c, 12, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_088721e8; }
    { goto L_088721fc; }
L_088721e8:
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000010u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000014u);
    c->f[1] = c->f[1] - c->f[0];
    { mem_wf32(ram, c->r[30] + 0x00000018u, c->f[1]); goto L_0887220c; }
L_088721fc:
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000010u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000014u);
    c->f[1] = c->f[1] + c->f[0];
    mem_wf32(ram, c->r[30] + 0x00000018u, c->f[1]);
L_0887220c:
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000018u);
    mem_wf32(ram, c->r[30] + 0x00000010u, c->f[0]);
    c->r[16] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->f[12] = mem_rf32(ram, c->r[30] + 0x00000010u);
    c->f[13] = mem_rf32(ram, c->r[2] + 0x000000e0u);
    c->f[14] = mem_rf32(ram, c->r[3] + 0x00000054u);
    c->f[15] = mem_rf32(ram, c->r[4] + 0x00000058u);
    { c->r[31] = 0x0887223cu; c->r[4] = 0u + 0u; func_0887b998(c, ram); }
    mem_wf32(ram, c->r[16] + 0x000000e0u, c->f[0]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x000000e0u);
    mem_wf32(ram, c->r[3] + 0x00000134u, c->f[0]);
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000060u);
    c->f[0] = mem_rf32(ram, c->r[3] + 0x000000f4u);
    c->f[1] = c->f[1] * c->f[0];
    c->f[0] = mem_rf32(ram, c->r[4] + 0x00000134u);
    c->f[0] = c->f[0] - c->f[1];
    mem_wf32(ram, c->r[5] + 0x00000134u, c->f[0]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000134u);
    c->r[1] = 0x08a80000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00002e40u);
    c->f[0] = c->f[1] * c->f[0];
    mem_wf32(ram, c->r[3] + 0x00000134u, c->f[0]);
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000028u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000024u);
    c->r[16] = mem_r32(ram, c->r[29] + 0x00000020u);
    { c->r[29] = c->r[29] + 0x00000030u; return; }
    return; /* fell out of func_0887211c */
}

/* func_0887bf60  0x0887bf60..0x0887bf90  48 bytes, source=sweep */
void func_0887bf60(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0887bf60u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x00000218u);
    c->r[2] = 0x10000000u;
    c->r[2] = c->r[3] & c->r[2];
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_0887bf60 */
}

/* func_08880b84  0x08880b84..0x08880bfc  120 bytes, source=fde */
void func_08880b84(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08880b84u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    c->r[2] = c->r[6] + 0u;
    mem_w16(ram, c->r[30] + 0x00000008u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    { int _c = ((s32)c->r[2] < 0); if (_c) goto L_08880be8; }
    c->r[2] = 0x08a80000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00002ed8u);
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x000000b0u);
    { int _c = ((s32)c->r[2] <= 0); if (_c) goto L_08880be8; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = 0u + 0x0000012cu;
    mem_w16(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[30] + 0x00000008u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000001u) ? 1u : 0u;
    c->r[2] = c->r[2] ^ 0x0001u;
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x08880be8u; c->r[5] = c->r[2] + 0u; func_08934848(c, ram); }
L_08880be8:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_08880b84 */
}

/* func_088833dc  0x088833dc..0x08883400  36 bytes, source=residue */
void func_088833dc(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x088833dcu);
    c->r[29] = c->r[29] + 0xfffffff0u;
    mem_w32(ram, c->r[29] + 0x00000000u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    c->r[2] = 0x08a90000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0xffffe6c0u);
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000000u);
    { c->r[29] = c->r[29] + 0x00000010u; return; }
    return; /* fell out of func_088833dc */
}

/* func_0888b858  0x0888b858..0x0888b894  60 bytes, source=sweep */
void func_0888b858(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0888b858u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000004u);
    { c->r[31] = 0x0888b880u; c->r[6] = 0u + 0x00000001u; func_0888be64(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_0888b858 */
}

/* func_0888c4a4  0x0888c4a4..0x0888c4e8  68 bytes, source=sweep */
void func_0888c4a4(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0888c4a4u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = 0x1f000000u;
    c->r[2] = c->r[2] | c->r[3];
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x0888c4d4u; c->r[5] = c->r[2] + 0u; func_0888b984(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_0888c4a4 */
}

/* func_0888d108  0x0888d108..0x0888d13c  52 bytes, source=sweep */
void func_0888d108(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0888d108u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x0888d128u; c->r[5] = 0xcc000000u; func_0888b984(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_0888d108 */
}

/* func_0888f638  0x0888f638..0x0888fa80  1096 bytes, source=fde */
void func_0888f638(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0888f638u);
    c->r[29] = c->r[29] + 0xffffff60u;
    mem_w32(ram, c->r[29] + 0x00000094u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000090u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[6]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    mem_w32(ram, c->r[3] + 0x00000098u, c->r[2]);
    c->r[4] = 0x08a70000u;
    { c->r[31] = 0x0888f66cu; c->r[4] = c->r[4] + 0xffffb660u; func_0888d9b8(c, ram); }
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
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
    c->r[2] = 0xcf000000u;
    c->r[2] = c->r[3] | c->r[2];
    { c->r[31] = 0x0888f6ccu; c->r[5] = c->r[2] + 0u; func_0888b984(c, ram); }
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
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x0888f718u; c->r[5] = mem_r32(ram, c->r[3] + 0x00000064u); func_0888b6b4(c, ram); }
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
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x0888f764u; c->r[5] = mem_r32(ram, c->r[3] + 0x00000070u); func_0888b6b4(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000010u, 0u);
L_0888f768:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000090u);
    c->r[2] = (c->r[3] < c->r[2]) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_0888f788; }
    { goto L_0888fa20; }
L_0888f788:
    mem_w32(ram, c->r[30] + 0x00000014u, 0u);
    c->r[2] = c->r[30] + 0x00000020u;
    mem_w32(ram, c->r[30] + 0x00000060u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000060u);
    mem_w32(ram, c->r[30] + 0x00000064u, c->r[2]);
    c->r[2] = 0u + 0x00000003u;
    mem_w32(ram, c->r[30] + 0x00000068u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000068u);
    c->r[2] = 0u + 0xffffffffu;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_0888f7e4; }
L_0888f7b4:
    { c->r[31] = 0x0888f7bcu; c->r[4] = mem_r32(ram, c->r[30] + 0x00000064u); func_08808240(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000064u);
    c->r[2] = c->r[2] + 0x00000010u;
    mem_w32(ram, c->r[30] + 0x00000064u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000068u);
    c->r[2] = c->r[2] + 0xffffffffu;
    c->r[3] = c->r[2] + 0u;
    mem_w32(ram, c->r[30] + 0x00000068u, c->r[3]);
    c->r[2] = 0u + 0xffffffffu;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_0888f7b4; }
L_0888f7e4:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[3] = c->r[2] << 3;
    c->r[2] = mem_r32(ram, c->r[4] + 0x00000094u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    mem_w32(ram, c->r[30] + 0x00000068u, c->r[2]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x0888f80cu; c->r[5] = mem_r32(ram, c->r[30] + 0x00000068u); func_08892a4c(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000064u, 0u);
L_0888f810:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000064u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000004u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_0888f828; }
    { goto L_0888f988; }
L_0888f828:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000068u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000064u);
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[3];
    c->r[2] = c->r[2] + 0x00000020u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    mem_w32(ram, c->r[30] + 0x00000060u, c->r[2]);
    c->r[2] = c->r[30] + 0x00000080u;
    { c->r[31] = 0x0888f850u; c->r[4] = c->r[2] + 0u; func_08808240(c, ram); }
    c->r[2] = c->r[30] + 0x00000080u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[4] = c->r[2] + 0u;
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000060u);
    { c->r[31] = 0x0888f868u; c->r[6] = mem_r32(ram, c->r[3] + 0x00000098u); func_08820ca4(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000060u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000002cu);
    { int _c = (c->r[2] == 0u); if (_c) goto L_0888f978; }
    c->r[3] = c->r[30] + 0x00000080u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000060u);
    c->r[2] = c->r[2] + 0x00000010u;
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = c->r[3] + 0u;
    { c->r[31] = 0x0888f894u; c->r[6] = c->r[2] + 0u; func_08892c24(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = 0u + 0xffffffffu;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_0888f978; }
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
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000060u);
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x0888f8f0u; c->r[5] = mem_r32(ram, c->r[3] + 0x0000002cu); func_0888b6b4(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_0888f978; }
    c->r[3] = c->r[30] + 0x00000080u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000060u);
    c->r[2] = c->r[2] + 0x00000010u;
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = c->r[3] + 0u;
    { c->r[31] = 0x0888f918u; c->r[6] = c->r[2] + 0u; func_08892d48(c, ram); }
    { int _c = (c->r[2] != 0u); if (_c) goto L_0888f978; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = c->r[2] << 4;
    c->r[2] = c->r[2] + c->r[30];
    c->r[3] = c->r[2] + 0x00000020u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000080u);
    mem_w32(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000084u);
    mem_w32(ram, c->r[3] + 0x00000004u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000088u);
    mem_w32(ram, c->r[3] + 0x00000008u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000008cu);
    mem_w32(ram, c->r[3] + 0x0000000cu, c->r[2]);
    c->r[5] = c->r[30] + 0x00000014u;
    c->r[3] = mem_r32(ram, c->r[5] + 0x00000000u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[30];
    c->r[4] = c->r[2] + 0x00000070u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000060u);
    mem_w32(ram, c->r[4] + 0x00000000u, c->r[2]);
    c->r[3] = c->r[3] + 0x00000001u;
    mem_w32(ram, c->r[5] + 0x00000000u, c->r[3]);
L_0888f978:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000064u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000064u, c->r[2]); goto L_0888f810; }
L_0888f988:
    mem_w32(ram, c->r[30] + 0x00000064u, 0u);
L_0888f98c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000064u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = ((s32)c->r[2] < (s32)c->r[3]) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_0888f9a8; }
    { goto L_0888fa10; }
L_0888f9a8:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000064u);
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[30];
    c->r[5] = c->r[2] + 0x00000070u;
    c->r[3] = c->r[30] + 0x00000020u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000064u);
    c->r[2] = c->r[2] << 4;
    c->r[3] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000064u);
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[30];
    c->r[2] = c->r[2] + 0x00000070u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000010u;
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = mem_r32(ram, c->r[5] + 0x00000000u);
    c->r[6] = c->r[3] + 0u;
    c->r[7] = c->r[2] + 0u;
    c->r[8] = 0u + 0u;
    c->r[9] = 0u + 0u;
    { c->r[31] = 0x0888fa00u; c->r[10] = 0u + 0x00000004u; func_08892f00(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000064u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000064u, c->r[2]); goto L_0888f98c; }
L_0888fa10:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]); goto L_0888f768; }
L_0888fa20:
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
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x0888fa6cu; c->r[5] = mem_r32(ram, c->r[3] + 0x0000006cu); func_0888b6b4(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000094u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000090u);
    { c->r[29] = c->r[29] + 0x000000a0u; return; }
    return; /* fell out of func_0888f638 */
}

/* func_08893a80  0x08893a80..0x08893af8  120 bytes, source=sweep */
void func_08893a80(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08893a80u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[6]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[2] + 0x00000004u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[2] = c->r[2] << 8;
    mem_w32(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = c->r[2] + 0x00000004u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[2] + 0x00000008u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[2] = c->r[2] << 8;
    mem_w32(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = c->r[2] + 0x00000008u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[2] + 0x0000000cu;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[2] = c->r[2] << 8;
    mem_w32(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_08893a80 */
}

/* func_088998c8  0x088998c8..0x0889990c  68 bytes, source=sweep */
void func_088998c8(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x088998c8u);
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
    return; /* fell out of func_088998c8 */
}

/* func_0889a6c4  0x0889a6c4..0x0889a728  100 bytes, source=sweep */
void func_0889a6c4(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0889a6c4u);
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
    { c->r[31] = 0x0889a714u; c->r[5] = c->r[2] + 0u; func_088998c8(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_0889a6c4 */
}

/* func_0889f050  0x0889f050..0x0889f150  256 bytes, source=sweep */
void func_0889f050(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0889f050u);
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
    return; /* fell out of func_0889f050 */
}

/* func_0889ff5c  0x0889ff5c..0x088a0088  300 bytes, source=fde */
void func_0889ff5c(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0889ff5cu);
    c->r[29] = c->r[29] + 0xffffffa0u;
    mem_w32(ram, c->r[29] + 0x00000054u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000050u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    mem_wf32(ram, c->r[30] + 0x00000008u, c->f[12]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000004u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_088a0074; }
    c->r[4] = 0x08a70000u;
    c->r[4] = c->r[4] + 0xffffb640u;
    c->r[5] = 0u + 0x00000003u;
    { c->r[31] = 0x0889ff9cu; c->r[6] = 0u + 0x00000006u; func_089df7a0(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[4] = 0x08a70000u;
    c->r[4] = c->r[4] + 0xffffb640u;
    c->r[5] = mem_r32(ram, c->r[2] + 0x00000000u);
    { c->r[31] = 0x0889ffb4u; c->r[6] = 0u + 0u; func_089e0bd8(c, ram); }
    c->r[2] = c->r[30] + 0x00000010u;
    { c->r[31] = 0x0889ffc0u; c->r[4] = c->r[2] + 0u; func_08808260(c, ram); }
    c->r[2] = c->r[30] + 0x00000010u;
    c->r[4] = c->r[2] + 0u;
    c->f[12] = u2f(0u);
    c->f[13] = mem_rf32(ram, c->r[30] + 0x00000008u);
    c->f[14] = u2f(0u);
    { c->r[31] = 0x0889ffdcu; func_088a00e0(c, ram); }
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
    c->r[3] = c->r[30] + 0x00000010u;
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x088a0028u; c->r[5] = c->r[3] + 0u; func_0889f220(c, ram); }
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
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x088a0074u; c->r[5] = mem_r32(ram, c->r[3] + 0x0000000cu); func_0889ebb4(c, ram); }
L_088a0074:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000054u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000050u);
    { c->r[29] = c->r[29] + 0x00000060u; return; }
    return; /* fell out of func_0889ff5c */
}

/* func_088a41ec  0x088a41ec..0x088a4230  68 bytes, source=sweep */
void func_088a41ec(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x088a41ecu);
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
    { c->r[31] = 0x088a421cu; c->r[5] = c->r[2] + 0u; func_088a3304(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_088a41ec */
}

/* func_088adb14  0x088adb14..0x088adb58  68 bytes, source=sweep */
void func_088adb14(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x088adb14u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = 0x23000000u;
    c->r[2] = c->r[2] | c->r[3];
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x088adb44u; c->r[5] = c->r[2] + 0u; func_088ad160(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_088adb14 */
}

/* func_088b1e5c  0x088b1e5c..0x088b1ee0  132 bytes, source=sweep */
void func_088b1e5c(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x088b1e5cu);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = 0u | 0xffffu;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_088b1ea0; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = 0u + 0x00000001u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_088b1ea0; }
    c->r[4] = 0x08aa0000u;
    { c->r[31] = 0x088b1ea0u; c->r[4] = c->r[4] + 0xffff8bd0u; func_08808260(c, ram); }
L_088b1ea0:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = 0u | 0xffffu;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_088b1ecc; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = 0u + 0x00000001u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_088b1ecc; }
    c->r[4] = 0x08aa0000u;
    { c->r[31] = 0x088b1eccu; c->r[4] = c->r[4] + 0xffff8c10u; func_08808260(c, ram); }
L_088b1ecc:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_088b1e5c */
}

/* func_088b2c74  0x088b2c74..0x088b2cb8  68 bytes, source=sweep */
void func_088b2c74(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x088b2c74u);
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
    { c->r[31] = 0x088b2ca4u; c->r[5] = c->r[2] + 0u; func_088b1ee0(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_088b2c74 */
}

/* func_088b9bd0  0x088b9bd0..0x088b9d6c  412 bytes, source=fde */
void func_088b9bd0(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x088b9bd0u);
    c->r[29] = c->r[29] + 0xffffffb0u;
    mem_w32(ram, c->r[29] + 0x00000044u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000040u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    mem_wf32(ram, c->r[30] + 0x00000008u, c->f[12]);
    mem_wf32(ram, c->r[30] + 0x0000000cu, c->f[13]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000084u);
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]);
    c->r[2] = 0u + 0x00000002u;
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x0000000cu);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00004a64u);
    alx_c_cond_s(c, 12, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_088b9c28; }
    { goto L_088b9c30; }
L_088b9c28:
    { mem_w32(ram, c->r[30] + 0x00000014u, 0u); goto L_088b9c5c; }
L_088b9c30:
    c->f[1] = mem_rf32(ram, c->r[30] + 0x0000000cu);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00004a68u);
    alx_c_cond_s(c, 12, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_088b9c54; }
    { goto L_088b9c5c; }
L_088b9c54:
    c->r[2] = 0u + 0x00000001u;
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
L_088b9c5c:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = 0u + 0x000000b0u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[3] = c->lo;
    c->r[2] = 0x08a50000u;
    c->r[2] = c->r[2] + 0x00006c14u;
    c->r[2] = c->r[2] + c->r[3];
    mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000005u) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_088b9cbc; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = (u32)((s32)c->r[3] >> 31);
    c->r[2] = c->r[2] >> 31;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = (u32)((s32)c->r[2] >> 1);
    c->r[2] = c->r[2] << 1;
    c->r[3] = c->r[3] - c->r[2];
    c->r[2] = 0u + 0x00000001u;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_088b9cbc; }
    { goto L_088b9cd4; }
L_088b9cbc:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = 0u + 0x0000000bu;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_088b9cd4; }
    { goto L_088b9d58; }
L_088b9cd4:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000034u);
    mem_wf32(ram, c->r[30] + 0x00000020u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[2] + 0x00000010u;
    mem_w32(ram, c->r[30] + 0x00000024u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[2] + 0x00000089u;
    mem_w32(ram, c->r[30] + 0x00000028u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = c->r[2] + 0x00000028u;
    mem_w32(ram, c->r[30] + 0x0000002cu, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = 0u + 0x000000b0u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[4] = c->lo;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[3];
    c->r[2] = c->r[2] << 3;
    c->r[3] = c->r[4] + c->r[2];
    c->r[2] = 0x08a50000u;
    c->r[2] = c->r[2] + 0x00006c4cu;
    c->r[2] = c->r[3] + c->r[2];
    mem_w32(ram, c->r[30] + 0x00000030u, c->r[2]);
    c->r[2] = c->r[30] + 0x00000020u;
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[6] = c->r[2] + 0u;
    c->r[7] = mem_r32(ram, c->r[30] + 0x00000014u);
    { c->r[31] = 0x088b9d58u; c->f[12] = mem_rf32(ram, c->r[30] + 0x00000008u); func_088b94f4(c, ram); }
L_088b9d58:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000044u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000040u);
    { c->r[29] = c->r[29] + 0x00000050u; return; }
    return; /* fell out of func_088b9bd0 */
}

/* func_088be794  0x088be794..0x088be7d4  64 bytes, source=residue */
void func_088be794(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x088be794u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[6]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000004u);
    { c->r[31] = 0x088be7c0u; c->r[6] = mem_r32(ram, c->r[30] + 0x00000008u); func_088bf0cc(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_088be794 */
}

/* func_088bf3d0  0x088bf3d0..0x088bf47c  172 bytes, source=sweep */
void func_088bf3d0(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x088bf3d0u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_088bf430; }
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
    { c->r[31] = 0x088bf428u; c->r[8] = mem_r32(ram, c->r[8] + 0x00000034u); func_088bf550(c, ram); }
    { goto L_088bf468; }
L_088bf430:
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
    { c->r[31] = 0x088bf468u; c->r[8] = c->r[2] + 0u; func_088bf550(c, ram); }
L_088bf468:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_088bf3d0 */
}

/* func_088c2498  0x088c2498..0x088c24e0  72 bytes, source=sweep */
void func_088c2498(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x088c2498u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x0000021cu);
    c->r[2] = 0x01000000u;
    c->r[2] = c->r[3] | c->r[2];
    mem_w32(ram, c->r[4] + 0x0000021cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00004eacu);
    mem_wf32(ram, c->r[2] + 0x00000244u, c->f[0]);
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_088c2498 */
}

/* func_088c8834  0x088c8834..0x088c8870  60 bytes, source=sweep */
void func_088c8834(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x088c8834u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000004u);
    { c->r[31] = 0x088c885cu; c->r[6] = 0u + 0x00000001u; func_088c8b5c(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_088c8834 */
}

/* func_088c964c  0x088c964c..0x088c9698  76 bytes, source=sweep */
void func_088c964c(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x088c964cu);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[6]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    vfpu_exec(c, ram, 0xd8610000u); /* lv.q */
    vfpu_exec(c, ram, 0xd8420000u); /* lv.q */
    vfpu_exec(c, ram, 0x60828100u); /* vsub.t */
    vfpu_exec(c, ram, 0xe8800004u); /* sv.s */
    vfpu_exec(c, ram, 0xe8800009u); /* sv.s */
    vfpu_exec(c, ram, 0xe880000eu); /* sv.s */
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_088c964c */
}

/* func_088d14f0  0x088d14f0..0x088d1658  360 bytes, source=fde */
void func_088d14f0(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x088d14f0u);
    c->r[29] = c->r[29] + 0xffffffd0u;
    mem_w32(ram, c->r[29] + 0x00000024u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000020u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000058u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_088d1524; }
    c->r[2] = 0u + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]); goto L_088d1640; }
L_088d1524:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x0000002cu);
    c->r[2] = 0x00020000u;
    c->r[2] = c->r[3] & c->r[2];
    { int _c = (c->r[2] == 0u); if (_c) goto L_088d1544; }
    { mem_w32(ram, c->r[30] + 0x00000014u, 0u); goto L_088d1640; }
L_088d1544:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x0000005au);
    { int _c = (c->r[2] == 0u); if (_c) goto L_088d1638; }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x088d1560u; c->r[5] = mem_r32(ram, c->r[30] + 0x00000004u); func_088c0414(c, ram); }
    { c->r[31] = 0x088d1568u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u); func_089c35d4(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]);
    mem_w32(ram, c->r[30] + 0x0000000cu, 0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_088d15a4; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000008cu);
    c->r[2] = c->r[2] & 0x0002u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_088d159c; }
    c->r[2] = 0u + 0x0000000du;
    { mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]); goto L_088d15a4; }
L_088d159c:
    c->r[2] = 0u + 0x0000000au;
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
L_088d15a4:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[2] + 0x00000028u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000ac8u;
    { c->r[31] = 0x088d15c0u; c->r[5] = c->r[2] + 0u; func_089cb820(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_088d1614; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x0000008cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[3] & c->r[2];
    { int _c = (c->r[2] == 0u); if (_c) goto L_088d1614; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x0000004eu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000055u);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[6] = c->r[3] + 0u;
    { c->r[31] = 0x088d160cu; c->r[7] = c->r[2] + 0u; func_088c099c(c, ram); }
    { goto L_088d1628; }
L_088d1614:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = c->r[2] + 0x00000028u;
    c->r[2] = 0u + 0xffffffffu;
    mem_w32(ram, c->r[3] + 0x00000000u, c->r[2]);
    mem_w32(ram, c->r[30] + 0x00000010u, 0u);
L_088d1628:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000010u);
    { c->r[31] = 0x088d1638u; c->r[6] = mem_r32(ram, c->r[30] + 0x0000000cu); func_088d1054(c, ram); }
L_088d1638:
    c->r[2] = 0u + 0x00000001u;
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
L_088d1640:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000024u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000020u);
    { c->r[29] = c->r[29] + 0x00000030u; return; }
    return; /* fell out of func_088d14f0 */
}

/* func_088d4264  0x088d4264..0x088d4444  480 bytes, source=fde */
void func_088d4264(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x088d4264u);
    c->r[29] = c->r[29] + 0xffffff80u;
    mem_w32(ram, c->r[29] + 0x00000074u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000070u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000005cu);
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000003u);
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = 0u + 0x000000feu;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_088d42dc; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = 0u + 0x00000004u;
    mem_w8(ram, c->r[3] + 0x00000098u, c->r[2]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x0000008cu);
    c->r[2] = 0x00100000u;
    c->r[2] = c->r[3] | c->r[2];
    mem_w32(ram, c->r[4] + 0x0000008cu, c->r[2]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x0000008cu);
    c->r[2] = 0x00800000u;
    c->r[2] = c->r[3] | c->r[2];
    { mem_w32(ram, c->r[4] + 0x0000008cu, c->r[2]); goto L_088d441c; }
L_088d42dc:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = 0u + 0x000000ffu;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_088d435c; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = 0u + 0x00000003u;
    mem_w8(ram, c->r[3] + 0x00000098u, c->r[2]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x0000008cu);
    c->r[2] = 0x00100000u;
    c->r[2] = c->r[3] | c->r[2];
    mem_w32(ram, c->r[4] + 0x0000008cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000054u);
    c->r[3] = mem_r8(ram, c->r[2] + 0x00000000u);
    c->r[2] = 0u + 0x00000009u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_088d441c; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000060u);
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x0000000bu);
    c->r[2] = 0u + 0x00000002u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_088d441c; }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x0000008cu);
    c->r[2] = 0x00800000u;
    c->r[2] = c->r[3] | c->r[2];
    { mem_w32(ram, c->r[4] + 0x0000008cu, c->r[2]); goto L_088d441c; }
L_088d435c:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = 0u + 0x00000003u;
    mem_w8(ram, c->r[3] + 0x00000098u, c->r[2]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x0000008cu);
    c->r[2] = 0x00100000u;
    c->r[2] = c->r[3] | c->r[2];
    mem_w32(ram, c->r[4] + 0x0000008cu, c->r[2]);
    c->r[2] = 0u + 0x00000041u;
    mem_w8(ram, c->r[30] + 0x00000050u, c->r[2]);
    mem_w8(ram, c->r[30] + 0x00000051u, 0u);
    c->r[2] = 0u + 0x00000001u;
    mem_w32(ram, c->r[30] + 0x00000060u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000005cu);
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000002u);
    mem_w16(ram, c->r[30] + 0x00000064u, c->r[2]);
    c->r[4] = c->r[30] + 0x00000010u;
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[30] + 0x00000064u);
    c->r[3] = c->r[2] << 3;
    c->r[2] = 0x08aa0000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x000053c8u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[3] = c->r[30] + 0x00000050u;
    c->r[5] = 0x08a40000u;
    c->r[5] = c->r[5] + 0x000058a8u;
    c->r[6] = c->r[2] + 0u;
    c->r[7] = c->r[3] + 0u;
    { c->r[31] = 0x088d43d8u; c->r[8] = mem_r32(ram, c->r[30] + 0x00000060u); func_08a1ad34(c, ram); }
    c->r[4] = c->r[30] + 0x00000030u;
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[30] + 0x00000064u);
    c->r[3] = c->r[2] << 3;
    c->r[2] = 0x08aa0000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x000053c8u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[5] = 0x08a40000u;
    c->r[5] = c->r[5] + 0x000058b4u;
    c->r[6] = c->r[2] + 0u;
    { c->r[31] = 0x088d4404u; c->r[7] = mem_r32(ram, c->r[30] + 0x00000060u); func_08a1ad34(c, ram); }
    c->r[2] = c->r[30] + 0x00000010u;
    c->r[3] = c->r[30] + 0x00000030u;
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x088d441cu; c->r[6] = c->r[3] + 0u; func_089b7c54(c, ram); }
L_088d441c:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000008cu);
    c->r[2] = c->r[2] | 0x8000u;
    mem_w32(ram, c->r[3] + 0x0000008cu, c->r[2]);
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000074u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000070u);
    { c->r[29] = c->r[29] + 0x00000080u; return; }
    return; /* fell out of func_088d4264 */
}

/* func_088d98a8  0x088d98a8..0x088d98fc  84 bytes, source=sweep */
void func_088d98a8(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x088d98a8u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    mem_w16(ram, c->r[2] + 0x00000000u, 0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    mem_w16(ram, c->r[2] + 0x00000002u, 0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    mem_w8(ram, c->r[2] + 0x00000004u, 0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    mem_w8(ram, c->r[2] + 0x00000005u, 0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    mem_w8(ram, c->r[2] + 0x00000006u, 0u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = 0u + 0x00000064u;
    mem_w8(ram, c->r[3] + 0x00000007u, c->r[2]);
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_088d98a8 */
}

/* func_088de570  0x088de570..0x088de660  240 bytes, source=sweep */
void func_088de570(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x088de570u);
    c->r[29] = c->r[29] + 0xffffffc0u;
    mem_w32(ram, c->r[29] + 0x0000003cu, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000038u, c->r[30]);
    mem_w32(ram, c->r[29] + 0x00000034u, c->r[17]);
    mem_w32(ram, c->r[29] + 0x00000030u, c->r[16]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[2] = 0x08aa0000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0xffffed00u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_088de610; }
    c->r[16] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[17] = c->r[30] + 0x00000010u;
    c->r[3] = c->r[30] + 0x00000020u;
    c->r[2] = 0x08a80000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00002ed8u);
    c->r[2] = c->r[2] + 0x00000030u;
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00005b74u);
    c->r[4] = c->r[3] + 0u;
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x088de5ccu; c->f[12] = c->f[0]; func_0884c120(c, ram); }
    c->r[3] = c->r[30] + 0x00000020u;
    c->r[2] = 0x08a80000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00002ed8u);
    c->r[2] = c->r[2] + 0x00000020u;
    c->r[4] = c->r[17] + 0u;
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x088de5ecu; c->r[6] = c->r[3] + 0u; func_08859f30(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    mem_w32(ram, c->r[16] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    mem_w32(ram, c->r[16] + 0x00000004u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    mem_w32(ram, c->r[16] + 0x00000008u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    { mem_w32(ram, c->r[16] + 0x0000000cu, c->r[2]); goto L_088de644; }
L_088de610:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = 0x08aa0000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0xffffed00u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000014u);
    c->r[3] = c->r[2] + 0x00000060u;
    c->r[2] = mem_r32(ram, c->r[3] + 0x00000000u);
    mem_w32(ram, c->r[4] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[3] + 0x00000004u);
    mem_w32(ram, c->r[4] + 0x00000004u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[3] + 0x00000008u);
    mem_w32(ram, c->r[4] + 0x00000008u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[3] + 0x0000000cu);
    mem_w32(ram, c->r[4] + 0x0000000cu, c->r[2]);
L_088de644:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x0000003cu);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000038u);
    c->r[17] = mem_r32(ram, c->r[29] + 0x00000034u);
    c->r[16] = mem_r32(ram, c->r[29] + 0x00000030u);
    { c->r[29] = c->r[29] + 0x00000040u; return; }
    return; /* fell out of func_088de570 */
}

/* func_088df45c  0x088df45c..0x088df4cc  112 bytes, source=sweep */
void func_088df45c(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x088df45cu);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[2] = 0x08aa0000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0xffffed00u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_088df488; }
    { goto L_088df4b8; }
L_088df488:
    c->r[2] = 0x08aa0000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0xffffed00u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000014u);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->f[12] = mem_rf32(ram, c->r[2] + 0x00000004u);
    c->f[13] = mem_rf32(ram, c->r[3] + 0x00000000u);
    { c->r[31] = 0x088df4b8u; c->f[14] = mem_rf32(ram, c->r[5] + 0x00000008u); func_0885a0b8(c, ram); }
L_088df4b8:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_088df45c */
}

/* func_088e5290  0x088e5290..0x088e54e4  596 bytes, source=sweep */
void func_088e5290(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x088e5290u);
    c->r[29] = c->r[29] + 0xffffffc0u;
    mem_w32(ram, c->r[29] + 0x00000038u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000034u, c->r[30]);
    mem_w32(ram, c->r[29] + 0x00000030u, c->r[16]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[6]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000030u);
    mem_w32(ram, c->r[30] + 0x00000020u, c->r[2]);
    c->r[2] = 0u + 0x00000004u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000020u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_088e5448; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[2] = ((s32)c->r[3] < (s32)0x00000005u) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_088e52f4; }
    c->r[2] = 0u + 0x00000003u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000020u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_088e530c; }
    { goto L_088e54cc; }
L_088e52f4:
    c->r[2] = 0u + 0x00000005u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000020u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_088e5498; }
    { goto L_088e54cc; }
L_088e530c:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000001cu);
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x00000002u);
    c->f[0] = u2f(c->r[2]);
    c->f[1] = (f32)(s32)f2u(c->f[0]);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00005d20u);
    c->f[0] = c->f[1] * c->f[0];
    mem_wf32(ram, c->r[3] + 0x00000038u, c->f[0]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000001cu);
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x00000004u);
    c->f[0] = u2f(c->r[2]);
    c->f[1] = (f32)(s32)f2u(c->f[0]);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00005d24u);
    c->f[0] = c->f[1] * c->f[0];
    mem_wf32(ram, c->r[3] + 0x0000003cu, c->f[0]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000001cu);
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x00000006u);
    c->f[0] = u2f(c->r[2]);
    c->f[1] = (f32)(s32)f2u(c->f[0]);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00005d24u);
    c->f[0] = c->f[1] * c->f[0];
    mem_wf32(ram, c->r[3] + 0x00000040u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    mem_w32(ram, c->r[2] + 0x00000044u, 0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[16] = c->r[2] + 0x00000020u;
    c->r[4] = c->r[30] + 0x00000010u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000038u);
    c->f[0] = mem_rf32(ram, c->r[3] + 0x00000048u);
    c->f[0] = c->f[1] - c->f[0];
    c->f[12] = u2f(0u);
    c->f[13] = u2f(0u);
    c->f[14] = c->f[0];
    c->f[15] = u2f(0u);
    { c->r[31] = 0x088e53c4u; func_0880d140(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    mem_w32(ram, c->r[16] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    mem_w32(ram, c->r[16] + 0x00000004u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    mem_w32(ram, c->r[16] + 0x00000008u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    mem_w32(ram, c->r[16] + 0x0000000cu, c->r[2]);
    c->r[16] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[30] + 0x00000010u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00005d28u);
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[4] = c->r[2] + 0u;
    c->f[12] = mem_rf32(ram, c->r[3] + 0x00000040u);
    c->f[13] = c->f[0];
    c->f[14] = mem_rf32(ram, c->r[5] + 0x0000003cu);
    c->f[15] = u2f(0u);
    { c->r[31] = 0x088e5418u; func_0880d140(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    mem_w32(ram, c->r[16] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    mem_w32(ram, c->r[16] + 0x00000004u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    mem_w32(ram, c->r[16] + 0x00000008u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    mem_w32(ram, c->r[16] + 0x0000000cu, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = 0u + 0x00000004u;
    { mem_w8(ram, c->r[3] + 0x00000030u, c->r[2]); goto L_088e54cc; }
L_088e5448:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000028u);
    c->f[0] = u2f(0u);
    alx_c_cond_s(c, 2, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_088e546c; }
    { goto L_088e54cc; }
L_088e546c:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[1] = 0x08a40000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0x00005d2cu);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000040u);
    c->f[0] = c->f[1] - c->f[0];
    mem_wf32(ram, c->r[3] + 0x00000020u, c->f[0]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = 0u + 0x00000005u;
    { mem_w8(ram, c->r[3] + 0x00000030u, c->r[2]); goto L_088e54cc; }
L_088e5498:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000020u);
    c->f[0] = u2f(0u);
    alx_c_cond_s(c, 14, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_088e54bc; }
    { goto L_088e54cc; }
L_088e54bc:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    mem_w8(ram, c->r[2] + 0x00000030u, 0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    mem_w16(ram, c->r[2] + 0x00000034u, 0u);
L_088e54cc:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000038u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000034u);
    c->r[16] = mem_r32(ram, c->r[29] + 0x00000030u);
    { c->r[29] = c->r[29] + 0x00000040u; return; }
    return; /* fell out of func_088e5290 */
}

/* func_088ea628  0x088ea628..0x088ea718  240 bytes, source=fde */
void func_088ea628(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x088ea628u);
    c->r[29] = c->r[29] + 0xffffffc0u;
    mem_w32(ram, c->r[29] + 0x00000034u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000030u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[6]);
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[7]);
    c->r[2] = c->r[30] + 0x00000010u;
    { c->r[31] = 0x088ea654u; c->r[4] = c->r[2] + 0u; func_08808240(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x000000a5u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_088ea66c; }
    { goto L_088ea6ec; }
L_088ea66c:
    c->r[3] = c->r[30] + 0x00000020u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000004u);
    c->f[2] = (f32)(s32)f2u(c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000008u);
    c->f[1] = (f32)(s32)f2u(c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x0000000cu);
    c->f[0] = (f32)(s32)f2u(c->f[0]);
    c->r[4] = c->r[3] + 0u;
    c->f[12] = c->f[2];
    c->f[13] = c->f[1];
    c->f[14] = c->f[0];
    c->f[15] = u2f(0u);
    { c->r[31] = 0x088ea6b0u; func_0880d140(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000024u);
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000028u);
    mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000002cu);
    mem_w32(ram, c->r[30] + 0x0000001cu, c->r[2]);
    c->r[3] = c->r[30] + 0x00000010u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000020u;
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[5] = c->r[3] + 0u;
    { c->r[31] = 0x088ea6ecu; c->r[6] = c->r[2] + 0u; func_08859fd4(c, ram); }
L_088ea6ec:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[6] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[7] = mem_r32(ram, c->r[30] + 0x0000000cu);
    { c->r[31] = 0x088ea704u; c->r[8] = mem_r32(ram, c->r[30] + 0x00000004u); func_088e9d94(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000034u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000030u);
    { c->r[29] = c->r[29] + 0x00000040u; return; }
    return; /* fell out of func_088ea628 */
}

/* func_088efd20  0x088efd20..0x088f05d8  2232 bytes, source=fde */
void func_088efd20(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x088efd20u);
    c->r[29] = c->r[29] + 0xffffffc0u;
    mem_w32(ram, c->r[29] + 0x00000034u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000030u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[6]);
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[7]);
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[8]);
    { c->r[31] = 0x088efd4cu; c->r[4] = mem_r32(ram, c->r[30] + 0x0000000cu); func_08820c6c(c, ram); }
    mem_wf32(ram, c->r[30] + 0x0000001cu, c->f[0]);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x0000001cu);
    c->f[0] = u2f(0u);
    alx_c_cond_s(c, 2, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_088efd70; }
    { goto L_088efd7c; }
L_088efd70:
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000060acu);
    mem_wf32(ram, c->r[30] + 0x0000001cu, c->f[0]);
L_088efd7c:
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000008u);
    c->f[0] = -c->f[0];
    c->f[12] = mem_rf32(ram, c->r[3] + 0x00000000u);
    { c->r[31] = 0x088efd98u; c->f[13] = c->f[0]; func_088ef254(c, ram); }
    c->f[1] = -c->f[0];
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000004u);
    c->f[0] = c->f[1] - c->f[0];
    mem_wf32(ram, c->r[30] + 0x00000018u, c->f[0]);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000018u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000060b0u);
    alx_c_cond_s(c, 12, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_088efdd0; }
    { goto L_088efde4; }
L_088efdd0:
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000018u);
    c->r[1] = 0x08a40000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0x000060b4u);
    c->f[0] = c->f[0] - c->f[1];
    mem_wf32(ram, c->r[30] + 0x00000018u, c->f[0]);
L_088efde4:
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000018u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000060b8u);
    alx_c_cond_s(c, 12, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_088efe08; }
    { goto L_088efe1c; }
L_088efe08:
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000018u);
    c->r[1] = 0x08a40000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0x000060b4u);
    c->f[0] = c->f[0] + c->f[1];
    mem_wf32(ram, c->r[30] + 0x00000018u, c->f[0]);
L_088efe1c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000004u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000060bcu);
    alx_c_cond_s(c, 12, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_088efe64; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000004u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000060c0u);
    alx_c_cond_s(c, 12, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_088efe64; }
    { goto L_088f0040; }
L_088efe64:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000008u);
    c->f[0] = -c->f[0];
    mem_wf32(ram, c->r[3] + 0x00000008u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000004u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x0000001cu);
    c->f[0] = c->f[1] / c->f[0];
    mem_wf32(ram, c->r[30] + 0x00000020u, c->f[0]);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000020u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000060acu);
    alx_c_cond_s(c, 12, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_088efeb0; }
    { goto L_088efebc; }
L_088efeb0:
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000060acu);
    mem_wf32(ram, c->r[30] + 0x00000020u, c->f[0]);
L_088efebc:
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000020u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000060c4u);
    alx_c_cond_s(c, 12, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_088efee0; }
    { goto L_088efeec; }
L_088efee0:
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000060c4u);
    mem_wf32(ram, c->r[30] + 0x00000020u, c->f[0]);
L_088efeec:
    { c->r[31] = 0x088efef4u; c->f[12] = mem_rf32(ram, c->r[30] + 0x00000020u); func_08a0fb24(c, ram); }
    mem_wf32(ram, c->r[30] + 0x00000014u, c->f[0]);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000014u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000060c8u);
    alx_c_cond_s(c, 12, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_088eff1c; }
    { goto L_088eff3c; }
L_088eff1c:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[1] = 0x08a40000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0x000060c8u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000000u);
    c->f[0] = c->f[1] - c->f[0];
    { mem_wf32(ram, c->r[3] + 0x00000000u, c->f[0]); goto L_088eff98; }
L_088eff3c:
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000014u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000060ccu);
    alx_c_cond_s(c, 12, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_088eff60; }
    { goto L_088eff80; }
L_088eff60:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[1] = 0x08a40000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0x000060ccu);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000000u);
    c->f[0] = c->f[1] - c->f[0];
    { mem_wf32(ram, c->r[3] + 0x00000000u, c->f[0]); goto L_088eff98; }
L_088eff80:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000014u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000000u);
    c->f[0] = c->f[1] - c->f[0];
    mem_wf32(ram, c->r[3] + 0x00000000u, c->f[0]);
L_088eff98:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000018u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000040u);
    alx_c_cond_s(c, 12, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_088effbc; }
    { goto L_088effdc; }
L_088effbc:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000004u);
    c->f[0] = mem_rf32(ram, c->r[3] + 0x00000040u);
    c->f[0] = c->f[1] + c->f[0];
    { mem_wf32(ram, c->r[4] + 0x00000004u, c->f[0]); goto L_088f0420; }
L_088effdc:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000040u);
    c->f[1] = -c->f[0];
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000018u);
    alx_c_cond_s(c, 12, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_088f0004; }
    { goto L_088f0024; }
L_088f0004:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000004u);
    c->f[0] = mem_rf32(ram, c->r[3] + 0x00000040u);
    c->f[0] = c->f[1] - c->f[0];
    { mem_wf32(ram, c->r[4] + 0x00000004u, c->f[0]); goto L_088f0420; }
L_088f0024:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000004u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000018u);
    c->f[0] = c->f[1] + c->f[0];
    { mem_wf32(ram, c->r[3] + 0x00000004u, c->f[0]); goto L_088f0420; }
L_088f0040:
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000018u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000060d0u);
    alx_c_cond_s(c, 12, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_088f0064; }
    { goto L_088f0144; }
L_088f0064:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[1] = 0x08a40000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0x000060d4u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000008u);
    c->f[0] = c->f[1] - c->f[0];
    mem_wf32(ram, c->r[3] + 0x00000008u, c->f[0]);
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000008u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000060d4u);
    c->f[1] = c->f[1] / c->f[0];
    c->f[0] = mem_rf32(ram, c->r[3] + 0x0000002cu);
    c->f[1] = c->f[1] * c->f[0];
    c->f[0] = mem_rf32(ram, c->r[4] + 0x00000004u);
    c->f[0] = c->f[0] + c->f[1];
    mem_wf32(ram, c->r[5] + 0x00000004u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000000u);
    c->f[0] = mem_rf32(ram, c->r[3] + 0x00000030u);
    alx_c_cond_s(c, 12, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_088f00dc; }
    { goto L_088f00fc; }
L_088f00dc:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000000u);
    c->f[0] = mem_rf32(ram, c->r[3] + 0x00000030u);
    c->f[0] = c->f[1] + c->f[0];
    { mem_wf32(ram, c->r[4] + 0x00000000u, c->f[0]); goto L_088f0420; }
L_088f00fc:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000000u);
    c->f[0] = mem_rf32(ram, c->r[3] + 0x0000002cu);
    alx_c_cond_s(c, 12, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_088f0124; }
    { goto L_088f0420; }
L_088f0124:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000000u);
    c->f[0] = mem_rf32(ram, c->r[3] + 0x0000002cu);
    c->f[0] = c->f[1] + c->f[0];
    { mem_wf32(ram, c->r[4] + 0x00000000u, c->f[0]); goto L_088f0420; }
L_088f0144:
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000018u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000060d8u);
    alx_c_cond_s(c, 12, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_088f0168; }
    { goto L_088f0248; }
L_088f0168:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[1] = 0x08a40000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0x000060dcu);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000008u);
    c->f[0] = c->f[1] - c->f[0];
    mem_wf32(ram, c->r[3] + 0x00000008u, c->f[0]);
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000008u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000060dcu);
    c->f[1] = c->f[1] / c->f[0];
    c->f[0] = mem_rf32(ram, c->r[3] + 0x0000002cu);
    c->f[1] = c->f[1] * c->f[0];
    c->f[0] = mem_rf32(ram, c->r[4] + 0x00000004u);
    c->f[0] = c->f[0] - c->f[1];
    mem_wf32(ram, c->r[5] + 0x00000004u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000000u);
    c->f[0] = mem_rf32(ram, c->r[3] + 0x00000030u);
    alx_c_cond_s(c, 12, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_088f01e0; }
    { goto L_088f0200; }
L_088f01e0:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000000u);
    c->f[0] = mem_rf32(ram, c->r[3] + 0x00000030u);
    c->f[0] = c->f[1] + c->f[0];
    { mem_wf32(ram, c->r[4] + 0x00000000u, c->f[0]); goto L_088f0420; }
L_088f0200:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000000u);
    c->f[0] = mem_rf32(ram, c->r[3] + 0x0000002cu);
    alx_c_cond_s(c, 12, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_088f0228; }
    { goto L_088f0420; }
L_088f0228:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000000u);
    c->f[0] = mem_rf32(ram, c->r[3] + 0x0000002cu);
    c->f[0] = c->f[1] + c->f[0];
    { mem_wf32(ram, c->r[4] + 0x00000000u, c->f[0]); goto L_088f0420; }
L_088f0248:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000008u);
    c->f[0] = -c->f[0];
    mem_wf32(ram, c->r[3] + 0x00000008u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000004u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x0000001cu);
    c->f[0] = c->f[1] / c->f[0];
    mem_wf32(ram, c->r[30] + 0x00000020u, c->f[0]);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000020u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000060acu);
    alx_c_cond_s(c, 12, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_088f0294; }
    { goto L_088f02a0; }
L_088f0294:
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000060acu);
    mem_wf32(ram, c->r[30] + 0x00000020u, c->f[0]);
L_088f02a0:
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000020u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000060c4u);
    alx_c_cond_s(c, 12, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_088f02c4; }
    { goto L_088f02d0; }
L_088f02c4:
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000060c4u);
    mem_wf32(ram, c->r[30] + 0x00000020u, c->f[0]);
L_088f02d0:
    { c->r[31] = 0x088f02d8u; c->f[12] = mem_rf32(ram, c->r[30] + 0x00000020u); func_08a0fb24(c, ram); }
    mem_wf32(ram, c->r[30] + 0x00000014u, c->f[0]);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000014u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000060c8u);
    alx_c_cond_s(c, 12, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_088f0300; }
    { goto L_088f0320; }
L_088f0300:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[1] = 0x08a40000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0x000060c8u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000000u);
    c->f[0] = c->f[1] - c->f[0];
    { mem_wf32(ram, c->r[3] + 0x00000000u, c->f[0]); goto L_088f037c; }
L_088f0320:
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000014u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000060ccu);
    alx_c_cond_s(c, 12, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_088f0344; }
    { goto L_088f0364; }
L_088f0344:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[1] = 0x08a40000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0x000060ccu);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000000u);
    c->f[0] = c->f[1] - c->f[0];
    { mem_wf32(ram, c->r[3] + 0x00000000u, c->f[0]); goto L_088f037c; }
L_088f0364:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000014u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000000u);
    c->f[0] = c->f[1] - c->f[0];
    mem_wf32(ram, c->r[3] + 0x00000000u, c->f[0]);
L_088f037c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000018u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000040u);
    alx_c_cond_s(c, 12, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_088f03a0; }
    { goto L_088f03c0; }
L_088f03a0:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000004u);
    c->f[0] = mem_rf32(ram, c->r[3] + 0x00000040u);
    c->f[0] = c->f[1] + c->f[0];
    { mem_wf32(ram, c->r[4] + 0x00000004u, c->f[0]); goto L_088f0420; }
L_088f03c0:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000040u);
    c->f[1] = -c->f[0];
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000018u);
    alx_c_cond_s(c, 12, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_088f03e8; }
    { goto L_088f0408; }
L_088f03e8:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000004u);
    c->f[0] = mem_rf32(ram, c->r[3] + 0x00000040u);
    c->f[0] = c->f[1] - c->f[0];
    { mem_wf32(ram, c->r[4] + 0x00000004u, c->f[0]); goto L_088f0420; }
L_088f0408:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000004u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000018u);
    c->f[0] = c->f[1] + c->f[0];
    mem_wf32(ram, c->r[3] + 0x00000004u, c->f[0]);
L_088f0420:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000000u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000060acu);
    alx_c_cond_s(c, 12, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_088f0448; }
    { goto L_088f0468; }
L_088f0448:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000000u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000060acu);
    c->f[0] = c->f[1] + c->f[0];
    { mem_wf32(ram, c->r[3] + 0x00000000u, c->f[0]); goto L_088f04ac; }
L_088f0468:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000000u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000060c4u);
    alx_c_cond_s(c, 12, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_088f0490; }
    { goto L_088f04ac; }
L_088f0490:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000000u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000060acu);
    c->f[0] = c->f[1] - c->f[0];
    mem_wf32(ram, c->r[3] + 0x00000000u, c->f[0]);
L_088f04ac:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000004u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000060acu);
    alx_c_cond_s(c, 12, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_088f04d4; }
    { goto L_088f04f4; }
L_088f04d4:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000004u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000060acu);
    c->f[0] = c->f[1] + c->f[0];
    { mem_wf32(ram, c->r[3] + 0x00000004u, c->f[0]); goto L_088f0538; }
L_088f04f4:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000004u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000060c4u);
    alx_c_cond_s(c, 12, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_088f051c; }
    { goto L_088f0538; }
L_088f051c:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000004u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000060acu);
    c->f[0] = c->f[1] - c->f[0];
    mem_wf32(ram, c->r[3] + 0x00000004u, c->f[0]);
L_088f0538:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000008u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000060acu);
    alx_c_cond_s(c, 12, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_088f0560; }
    { goto L_088f0580; }
L_088f0560:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000008u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000060acu);
    c->f[0] = c->f[1] + c->f[0];
    { mem_wf32(ram, c->r[3] + 0x00000008u, c->f[0]); goto L_088f05c4; }
L_088f0580:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000008u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000060c4u);
    alx_c_cond_s(c, 12, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_088f05a8; }
    { goto L_088f05c4; }
L_088f05a8:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000008u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000060acu);
    c->f[0] = c->f[1] - c->f[0];
    mem_wf32(ram, c->r[3] + 0x00000008u, c->f[0]);
L_088f05c4:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000034u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000030u);
    { c->r[29] = c->r[29] + 0x00000040u; return; }
    return; /* fell out of func_088efd20 */
}

/* func_088f4f98  0x088f4f98..0x088f4fdc  68 bytes, source=fde */
void func_088f4f98(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x088f4f98u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    { c->r[31] = 0x088f4fb8u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u); func_088f4f28(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000008u);
    { c->r[31] = 0x088f4fc8u; c->r[5] = mem_r32(ram, c->r[30] + 0x00000004u); func_08960280(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_088f4f98 */
}

/* func_088fa43c  0x088fa43c..0x088fa45c  32 bytes, source=sweep */
void func_088fa43c(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x088fa43cu);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_088fa43c */
}

/* func_089009c0  0x089009c0..0x08900a04  68 bytes, source=sweep */
void func_089009c0(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089009c0u);
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
    return; /* fell out of func_089009c0 */
}

/* func_089032d8  0x089032d8..0x08903344  108 bytes, source=sweep */
void func_089032d8(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089032d8u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = 0x00ff0000u;
    c->r[2] = c->r[2] | 0xffffu;
    c->r[3] = c->r[3] & c->r[2];
    c->r[2] = 0x55000000u;
    c->r[2] = c->r[3] | c->r[2];
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x08903314u; c->r[5] = c->r[2] + 0u; func_0890325c(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = c->r[2] >> 24;
    c->r[2] = 0x58000000u;
    c->r[2] = c->r[3] | c->r[2];
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x08903330u; c->r[5] = c->r[2] + 0u; func_0890325c(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_089032d8 */
}

/* func_08906d9c  0x08906d9c..0x08906eb4  280 bytes, source=fde */
void func_08906d9c(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08906d9cu);
    c->r[29] = c->r[29] + 0xfffffeb0u;
    mem_w32(ram, c->r[29] + 0x00000144u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000140u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[2] = c->r[2] & 0x0001u;
    c->r[2] = c->r[2] & 0x00ffu;
    { int _c = (c->r[2] == 0u); if (_c) goto L_08906dd0; }
    { goto L_08906ea0; }
L_08906dd0:
    c->r[2] = 0x08a80000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00002ed8u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000044u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x0000668cu);
    c->f[1] = c->f[1] / c->f[0];
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00006690u);
    c->f[0] = c->f[1] * c->f[0];
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    mem_wf32(ram, c->r[30] + 0x00000110u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000110u);
    { int _c = ((s32)c->r[2] >= 0); if (_c) goto L_08906e14; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000110u);
    c->r[2] = c->r[2] + 0x00000168u;
    mem_w32(ram, c->r[30] + 0x00000110u, c->r[2]);
L_08906e14:
    c->r[3] = 0u + 0x00000168u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000110u);
    c->r[3] = c->r[3] - c->r[2];
    c->r[2] = 0xb60b0000u;
    c->r[2] = c->r[2] | 0x60b7u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[2] = c->hi;
    c->r[2] = c->r[2] + c->r[3];
    c->r[4] = (u32)((s32)c->r[2] >> 8);
    c->r[2] = (u32)((s32)c->r[3] >> 31);
    c->r[4] = c->r[4] - c->r[2];
    c->r[2] = 0u + 0x00000168u;
    alx_mult(c, c->r[4], c->r[2]);
    c->r[2] = c->lo;
    c->r[2] = c->r[3] - c->r[2];
    mem_w32(ram, c->r[30] + 0x00000110u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r16(ram, c->r[2] + 0x0000000cu);
    c->r[2] = 0u - c->r[2];
    mem_w16(ram, c->r[30] + 0x00000130u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r16(ram, c->r[2] + 0x0000000eu);
    c->r[2] = 0u - c->r[2];
    mem_w16(ram, c->r[30] + 0x00000132u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000130u);
    mem_w32(ram, c->r[30] + 0x00000120u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = c->r[30] + 0x00000120u;
    c->r[4] = 0u + 0x0000001bu;
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000110u);
    c->r[6] = mem_r32(ram, c->r[2] + 0x00000008u);
    c->r[7] = 0u + 0x00000001u;
    c->r[8] = 0u + 0u;
    { c->r[31] = 0x08906ea0u; c->r[9] = c->r[3] + 0u; func_0890438c(c, ram); }
L_08906ea0:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000144u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000140u);
    { c->r[29] = c->r[29] + 0x00000150u; return; }
    return; /* fell out of func_08906d9c */
}

/* func_0890fd24  0x0890fd24..0x08910010  748 bytes, source=sweep */
void func_0890fd24(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0890fd24u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    c->r[4] = 0x08aa0000u;
    c->r[4] = (u32)(s32)(s8)mem_r8(ram, c->r[4] + 0xfffff56cu);
    c->r[2] = 0x55550000u;
    c->r[2] = c->r[2] | 0x5556u;
    alx_mult(c, c->r[4], c->r[2]);
    c->r[3] = c->hi;
    c->r[2] = (u32)((s32)c->r[4] >> 31);
    c->r[3] = c->r[3] - c->r[2];
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[2] = c->r[4] - c->r[2];
    c->r[2] = c->r[2] << 24;
    c->r[2] = (u32)((s32)c->r[2] >> 24);
    { int _c = (c->r[2] != 0u); if (_c) goto L_0890fd7c; }
    { goto L_0890fffc; }
L_0890fd7c:
    c->r[4] = 0x7f0c0000u;
    { c->r[31] = 0x0890fd88u; c->r[4] = c->r[4] | 0x1400u; func_089035ac(c, ram); }
    c->r[4] = 0u + 0x00000140u;
    { c->r[31] = 0x0890fd94u; c->r[5] = 0u + 0x00000010u; func_0881a1d4(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[2]);
    mem_w32(ram, c->r[30] + 0x00000008u, 0u);
L_0890fda4:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000004u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_0890fdbc; }
    { goto L_0890fef8; }
L_0890fdbc:
    mem_w32(ram, c->r[30] + 0x0000000cu, 0u);
L_0890fdc0:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000004u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_0890fdd8; }
    { goto L_0890fee8; }
L_0890fdd8:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[2] << 5;
    c->r[2] = c->r[2] + 0x00000008u;
    mem_w16(ram, c->r[3] + 0x00000004u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] << 5;
    c->r[2] = c->r[2] + 0x00000088u;
    mem_w16(ram, c->r[3] + 0x00000006u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = c->r[2] + 0x0000000au;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r16(ram, c->r[2] + 0x00000004u);
    c->r[2] = c->r[2] + 0x00000020u;
    mem_w16(ram, c->r[3] + 0x00000004u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = c->r[2] + 0x0000000au;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r16(ram, c->r[2] + 0x00000006u);
    c->r[2] = c->r[2] + 0x00000020u;
    mem_w16(ram, c->r[3] + 0x00000006u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = 0u + 0x000000a0u;
    mem_w16(ram, c->r[3] + 0x00000002u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = c->r[2] + 0x0000000au;
    c->r[2] = 0u + 0x000000c0u;
    mem_w16(ram, c->r[3] + 0x00000002u, c->r[2]);
    c->r[4] = 0x08aa0000u;
    c->r[4] = (u32)(s32)(s8)mem_r8(ram, c->r[4] + 0xfffff56cu);
    c->r[2] = 0x55550000u;
    c->r[2] = c->r[2] | 0x5556u;
    alx_mult(c, c->r[4], c->r[2]);
    c->r[3] = c->hi;
    c->r[2] = (u32)((s32)c->r[4] >> 31);
    c->r[3] = c->r[3] - c->r[2];
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[2] = c->r[4] - c->r[2];
    c->r[2] = c->r[2] << 24;
    c->r[3] = (u32)((s32)c->r[2] >> 24);
    c->r[2] = 0u + 0x00000001u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_0890feb0; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = 0u + 0x00000030u;
    mem_w16(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = c->r[2] + 0x0000000au;
    c->r[2] = 0u + 0x00000050u;
    { mem_w16(ram, c->r[3] + 0x00000000u, c->r[2]); goto L_0890fecc; }
L_0890feb0:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = 0u + 0x00000050u;
    mem_w16(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = c->r[2] + 0x0000000au;
    c->r[2] = 0u + 0x00000030u;
    mem_w16(ram, c->r[3] + 0x00000000u, c->r[2]);
L_0890fecc:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[2] + 0x00000014u;
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]); goto L_0890fdc0; }
L_0890fee8:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]); goto L_0890fda4; }
L_0890fef8:
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
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] >> 24;
    c->r[2] = c->r[2] & 0x000fu;
    c->r[3] = c->r[2] << 16;
    c->r[2] = 0x10000000u;
    c->r[2] = c->r[3] | c->r[2];
    { c->r[31] = 0x0890ff54u; c->r[5] = c->r[2] + 0u; func_089207f8(c, ram); }
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
    c->r[2] = 0x00ff0000u;
    c->r[2] = c->r[2] | 0xffffu;
    c->r[3] = c->r[3] & c->r[2];
    c->r[2] = 0x01000000u;
    c->r[2] = c->r[3] | c->r[2];
    { c->r[31] = 0x0890ffb0u; c->r[5] = c->r[2] + 0u; func_089207f8(c, ram); }
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
    c->r[5] = 0x04060000u;
    { c->r[31] = 0x0890fffcu; c->r[5] = c->r[5] | 0x0020u; func_089207f8(c, ram); }
L_0890fffc:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_0890fd24 */
}

/* func_0891cfec  0x0891cfec..0x0891d018  44 bytes, source=sweep */
void func_0891cfec(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0891cfecu);
    c->r[29] = c->r[29] + 0xfffffff0u;
    mem_w32(ram, c->r[29] + 0x00000000u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    c->r[1] = 0x08aa0000u;
    mem_w32(ram, c->r[1] + 0xfffff9b4u, 0u);
    c->r[1] = 0x08aa0000u;
    mem_w32(ram, c->r[1] + 0xfffff9b8u, 0u);
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000000u);
    { c->r[29] = c->r[29] + 0x00000010u; return; }
    return; /* fell out of func_0891cfec */
}

/* func_08921320  0x08921320..0x08921364  68 bytes, source=sweep */
void func_08921320(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08921320u);
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
    { c->r[31] = 0x08921350u; c->r[5] = c->r[2] + 0u; func_089207f8(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_08921320 */
}

/* func_08922114  0x08922114..0x089221bc  168 bytes, source=sweep */
void func_08922114(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08922114u);
    c->r[29] = c->r[29] + 0xffffff60u;
    mem_w32(ram, c->r[29] + 0x00000094u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000090u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[6]);
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[7]);
    c->r[2] = c->r[30] + 0x00000010u;
    { c->r[31] = 0x08922140u; c->r[4] = c->r[2] + 0u; func_08808260(c, ram); }
    c->r[2] = c->r[30] + 0x00000050u;
    { c->r[31] = 0x0892214cu; c->r[4] = c->r[2] + 0u; func_08808260(c, ram); }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[3] + 0x00000000u);
    mem_w32(ram, c->r[4] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[3] + 0x00000004u);
    mem_w32(ram, c->r[4] + 0x00000004u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[3] + 0x00000008u);
    mem_w32(ram, c->r[4] + 0x00000008u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[3] + 0x0000000cu);
    mem_w32(ram, c->r[4] + 0x0000000cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_0892218c; }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x0892218cu; c->r[5] = mem_r32(ram, c->r[30] + 0x00000008u); func_0880d1a0(c, ram); }
L_0892218c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    { int _c = (c->r[2] == 0u); if (_c) goto L_089221a8; }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x089221a8u; c->r[6] = mem_r32(ram, c->r[30] + 0x0000000cu); func_0884c26c(c, ram); }
L_089221a8:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000094u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000090u);
    { c->r[29] = c->r[29] + 0x000000a0u; return; }
    return; /* fell out of func_08922114 */
}

/* func_08925598  0x08925598..0x0892566c  212 bytes, source=sweep */
void func_08925598(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08925598u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    c->r[3] = 0x08aa0000u;
    c->r[3] = (u32)(s32)(s16)mem_r16(ram, c->r[3] + 0xfffff9e8u);
    c->r[2] = 0x08aa0000u;
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0xfffff9ecu);
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_089255dc; }
    c->r[3] = 0x08aa0000u;
    c->r[3] = (u32)(s32)(s16)mem_r16(ram, c->r[3] + 0xfffff9eau);
    c->r[2] = 0x08aa0000u;
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0xfffff9eeu);
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_089255dc; }
    { goto L_0892565c; }
L_089255dc:
    c->r[2] = 0x08aa0000u;
    c->r[2] = mem_r16(ram, c->r[2] + 0xfffff9ecu);
    c->r[1] = 0x08aa0000u;
    mem_w16(ram, c->r[1] + 0xfffff9e8u, c->r[2]);
    c->r[2] = 0x08aa0000u;
    c->r[2] = mem_r16(ram, c->r[2] + 0xfffff9eeu);
    c->r[1] = 0x08aa0000u;
    mem_w16(ram, c->r[1] + 0xfffff9eau, c->r[2]);
    mem_w32(ram, c->r[30] + 0x00000000u, 0u);
L_08925600:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000006u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_08925618; }
    { goto L_08925640; }
L_08925618:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08aa0000u;
    c->r[2] = c->r[2] + 0xfffff9ccu;
    c->r[2] = c->r[3] + c->r[2];
    mem_w32(ram, c->r[2] + 0x00000000u, 0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000000u, c->r[2]); goto L_08925600; }
L_08925640:
    c->r[2] = 0x08aa0000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0xfffff9e4u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000006u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_0892565c; }
    c->r[1] = 0x08aa0000u;
    mem_w32(ram, c->r[1] + 0xfffff9e4u, 0u);
L_0892565c:
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_08925598 */
}

/* func_08926550  0x08926550..0x08926618  200 bytes, source=sweep */
void func_08926550(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08926550u);
    c->r[29] = c->r[29] + 0xffffffc0u;
    mem_w32(ram, c->r[29] + 0x00000034u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000030u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[5]);
    mem_w32(ram, c->r[30] + 0x00000018u, c->r[6]);
    mem_w32(ram, c->r[30] + 0x00000024u, 0u);
L_08926570:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000010u);
    { c->r[31] = 0x0892657cu; c->r[5] = mem_r32(ram, c->r[30] + 0x00000018u); func_0880f2cc(c, ram); }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000024u);
    c->r[2] = ((s32)c->r[3] < (s32)c->r[2]) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_08926594; }
    { goto L_08926604; }
L_08926594:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000018u);
    { c->r[31] = 0x089265a4u; c->r[6] = mem_r32(ram, c->r[30] + 0x00000024u); func_0880ef80(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000028u, c->r[2]);
    c->r[2] = c->r[30] + 0x0000001cu;
    c->r[3] = c->r[30] + 0x00000020u;
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[6] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[7] = c->r[2] + 0u;
    { c->r[31] = 0x089265c8u; c->r[8] = c->r[3] + 0u; func_08926618(c, ram); }
    mem_w32(ram, c->r[29] + 0x00000000u, 0u);
    mem_w32(ram, c->r[29] + 0x00000004u, 0u);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000028u);
    c->r[6] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[7] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[8] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[9] = 0u + 0u;
    c->r[10] = 0u + 0u;
    { c->r[31] = 0x089265f4u; c->r[11] = 0u + 0u; func_08926770(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000024u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000024u, c->r[2]); goto L_08926570; }
L_08926604:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000034u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000030u);
    { c->r[29] = c->r[29] + 0x00000040u; return; }
    return; /* fell out of func_08926550 */
}

/* func_0892a504  0x0892a504..0x0892a7c4  704 bytes, source=fde */
void func_0892a504(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0892a504u);
    c->r[29] = c->r[29] + 0xffffffd0u;
    mem_w32(ram, c->r[29] + 0x00000024u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000020u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    c->r[2] = c->r[4] + 0u;
    c->r[3] = c->r[5] + 0u;
    c->r[4] = c->r[6] + 0u;
    c->r[5] = c->r[7] + 0u;
    c->r[6] = c->r[8] + 0u;
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[9]);
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[10]);
    mem_w16(ram, c->r[30] + 0x00000000u, c->r[2]);
    mem_w16(ram, c->r[30] + 0x00000002u, c->r[3]);
    mem_w16(ram, c->r[30] + 0x00000004u, c->r[4]);
    mem_w16(ram, c->r[30] + 0x00000006u, c->r[5]);
    mem_w8(ram, c->r[30] + 0x00000008u, c->r[6]);
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
    c->r[5] = 0x12800000u;
    { c->r[31] = 0x0892a590u; c->r[5] = c->r[5] | 0x0102u; func_0893365c(c, ram); }
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[30] + 0x00000008u);
    c->r[2] = 0u + 0xffffffffu;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_0892a5ac; }
    c->r[2] = mem_r16(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[2] + 0xfffffff8u;
    mem_w16(ram, c->r[30] + 0x00000004u, c->r[2]);
L_0892a5ac:
    c->r[2] = c->r[30] + 0x0000000cu;
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000010u);
    { c->r[31] = 0x0892a5bcu; c->r[5] = c->r[2] + 0u; func_08933804(c, ram); }
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
    { c->r[31] = 0x0892a604u; c->r[5] = mem_r32(ram, c->r[30] + 0x0000000cu); func_089336a0(c, ram); }
    c->r[4] = 0x08a70000u;
    c->r[4] = c->r[4] + 0xffffb640u;
    c->r[5] = 0u + 0x00000002u;
    { c->r[31] = 0x0892a618u; c->r[6] = 0u + 0x00000006u; func_089df7a0(c, ram); }
    c->r[4] = 0x08a70000u;
    c->r[4] = c->r[4] + 0xffffb640u;
    c->r[5] = 0u + 0x00000200u;
    { c->r[31] = 0x0892a62cu; c->r[6] = 0u + 0u; func_089e0bd8(c, ram); }
    c->r[4] = 0u + 0x00000014u;
    { c->r[31] = 0x0892a638u; c->r[5] = 0u + 0x00000010u; func_0881a1d4(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = mem_r16(ram, c->r[30] + 0x00000000u);
    mem_w16(ram, c->r[3] + 0x00000004u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = mem_r16(ram, c->r[30] + 0x00000002u);
    mem_w16(ram, c->r[3] + 0x00000006u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    mem_w16(ram, c->r[2] + 0x00000000u, 0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    mem_w16(ram, c->r[2] + 0x00000002u, 0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[4] = c->r[2] + 0x0000000au;
    c->r[3] = mem_r16(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r16(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[3] + c->r[2];
    mem_w16(ram, c->r[4] + 0x00000004u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[4] = c->r[2] + 0x0000000au;
    c->r[3] = mem_r16(ram, c->r[30] + 0x00000002u);
    c->r[2] = mem_r16(ram, c->r[30] + 0x00000006u);
    c->r[2] = c->r[3] + c->r[2];
    mem_w16(ram, c->r[4] + 0x00000006u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = c->r[2] + 0x0000000au;
    mem_w16(ram, c->r[2] + 0x00000000u, 0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = c->r[2] + 0x0000000au;
    mem_w16(ram, c->r[2] + 0x00000002u, 0u);
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
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = c->r[2] >> 24;
    c->r[2] = c->r[2] & 0x000fu;
    c->r[3] = c->r[2] << 16;
    c->r[2] = 0x10000000u;
    c->r[2] = c->r[3] | c->r[2];
    { c->r[31] = 0x0892a708u; c->r[5] = c->r[2] + 0u; func_0893365c(c, ram); }
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
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = 0x00ff0000u;
    c->r[2] = c->r[2] | 0xffffu;
    c->r[3] = c->r[3] & c->r[2];
    c->r[2] = 0x01000000u;
    c->r[2] = c->r[3] | c->r[2];
    { c->r[31] = 0x0892a764u; c->r[5] = c->r[2] + 0u; func_0893365c(c, ram); }
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
    c->r[5] = 0x04060000u;
    { c->r[31] = 0x0892a7b0u; c->r[5] = c->r[5] | 0x0002u; func_0893365c(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000024u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000020u);
    { c->r[29] = c->r[29] + 0x00000030u; return; }
    return; /* fell out of func_0892a504 */
}

/* func_0893029c  0x0893029c..0x089302fc  96 bytes, source=sweep */
void func_0893029c(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0893029cu);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_089302e4; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x000000e0u;
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000000cu);
    { int _c = (c->r[2] == 0u); if (_c) goto L_089302e4; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000000cu);
    { mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]); goto L_089302e8; }
L_089302e4:
    mem_w32(ram, c->r[30] + 0x00000008u, 0u);
L_089302e8:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_0893029c */
}

/* func_08932fb4  0x08932fb4..0x0893303c  136 bytes, source=sweep */
void func_08932fb4(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08932fb4u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[2] = c->r[5] + 0u;
    c->r[3] = c->r[6] + 0u;
    mem_w16(ram, c->r[30] + 0x00000004u, c->r[2]);
    mem_w16(ram, c->r[30] + 0x00000006u, c->r[3]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_08932fe8; }
    { goto L_0893302c; }
L_08932fe8:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x000000e0u;
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]);
    c->r[3] = (u32)(s32)(s16)mem_r16(ram, c->r[30] + 0x00000004u);
    c->r[2] = 0u + 0xffffffffu;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_08933010; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = mem_r16(ram, c->r[30] + 0x00000004u);
    mem_w16(ram, c->r[3] + 0x00000024u, c->r[2]);
L_08933010:
    c->r[3] = (u32)(s32)(s16)mem_r16(ram, c->r[30] + 0x00000006u);
    c->r[2] = 0u + 0xffffffffu;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_0893302c; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = mem_r16(ram, c->r[30] + 0x00000006u);
    mem_w16(ram, c->r[3] + 0x00000026u, c->r[2]);
L_0893302c:
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_08932fb4 */
}

/* func_08935944  0x08935944..0x089359f0  172 bytes, source=residue */
void func_08935944(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08935944u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    c->r[2] = c->r[4] + 0u;
    mem_w8(ram, c->r[30] + 0x00000000u, c->r[2]);
    mem_w32(ram, c->r[30] + 0x00000004u, 0u);
L_0893595c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000010u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_08935974; }
    { goto L_089359d8; }
L_08935974:
    c->r[4] = 0x08aa0000u;
    c->r[4] = mem_r32(ram, c->r[4] + 0xfffffa94u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = c->r[2] << 4;
    c->r[2] = mem_r32(ram, c->r[4] + 0x00000004u);
    c->r[2] = c->r[2] + c->r[3];
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[3] = mem_r8(ram, c->r[2] + 0x00000002u);
    c->r[2] = mem_r8(ram, c->r[30] + 0x00000000u);
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_089359c8; }
    c->r[2] = 0x08aa0000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0xfffffa94u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000010u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_089359c8; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    { mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]); goto L_089359dc; }
L_089359c8:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000004u, c->r[2]); goto L_0893595c; }
L_089359d8:
    mem_w32(ram, c->r[30] + 0x0000000cu, 0u);
L_089359dc:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_08935944 */
}

/* func_0893b704  0x0893b704..0x0893b904  512 bytes, source=fde */
void func_0893b704(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0893b704u);
    c->r[29] = c->r[29] + 0xffffffd0u;
    mem_w32(ram, c->r[29] + 0x00000024u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000020u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    c->r[4] = 0x08a70000u;
    c->r[4] = c->r[4] + 0xffffb640u;
    { c->r[31] = 0x0893b72cu; c->r[5] = 0u + 0x00000001u; func_089dfe30(c, ram); }
    c->r[4] = 0x08a70000u;
    c->r[4] = c->r[4] + 0xffffb640u;
    { c->r[31] = 0x0893b73cu; c->r[5] = 0u + 0u; func_089dfeb4(c, ram); }
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
    c->r[5] = 0x12800000u;
    { c->r[31] = 0x0893b788u; c->r[5] = c->r[5] | 0x0102u; func_0893bf80(c, ram); }
    c->r[4] = 0x08a70000u;
    c->r[4] = c->r[4] + 0xffffb640u;
    c->r[5] = 0u + 0x00000002u;
    { c->r[31] = 0x0893b79cu; c->r[6] = 0u + 0x00000006u; func_089df7a0(c, ram); }
    c->r[2] = 0xff7f0000u;
    c->r[2] = c->r[2] | 0x7f7fu;
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000010u);
    { c->r[31] = 0x0893b7b8u; c->f[12] = mem_rf32(ram, c->r[2] + 0x00000018u); func_08903b2c(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]);
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
    { c->r[31] = 0x0893b804u; c->r[5] = mem_r32(ram, c->r[30] + 0x00000010u); func_0893c01c(c, ram); }
    c->r[4] = 0x08a40000u;
    { c->r[31] = 0x0893b810u; c->r[4] = c->r[4] + 0x00007490u; func_089c6f64(c, ram); }
    c->r[4] = 0x08a70000u;
    c->r[4] = c->r[4] + 0xffffb640u;
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x0893b824u; c->r[6] = 0u + 0u; func_089e0bd8(c, ram); }
    c->r[4] = 0x08aa0000u;
    c->r[4] = c->r[4] + 0xfffffa98u;
    c->r[5] = 0u + 0x00000035u;
    { c->r[31] = 0x0893b838u; c->r[6] = 0u + 0xffffffffu; func_089234b0(c, ram); }
    c->r[4] = 0x08a40000u;
    { c->r[31] = 0x0893b844u; c->r[4] = c->r[4] + 0x00007428u; func_089c6f64(c, ram); }
    c->r[4] = 0x08a70000u;
    c->r[4] = c->r[4] + 0xffffb640u;
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x0893b858u; c->r[6] = 0u + 0u; func_089e0bd8(c, ram); }
    { c->r[31] = 0x0893b860u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000004u); func_08968e10(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
    mem_w32(ram, c->r[30] + 0x00000008u, 0u);
L_0893b868:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = ((s32)c->r[2] < (s32)c->r[3]) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_0893b884; }
    { goto L_0893b8a8; }
L_0893b884:
    c->r[4] = 0x08aa0000u;
    c->r[4] = c->r[4] + 0xfffffa98u;
    c->r[5] = 0u + 0x00000036u;
    { c->r[31] = 0x0893b898u; c->r[6] = mem_r32(ram, c->r[30] + 0x00000008u); func_089234b0(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]); goto L_0893b868; }
L_0893b8a8:
    c->r[2] = 0x08a80000u;
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000e44u);
    c->r[2] = c->r[2] & 0x0004u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_0893b8d0; }
    c->r[4] = 0x08aa0000u;
    c->r[4] = c->r[4] + 0xfffffa98u;
    c->r[5] = 0u + 0x00000036u;
    { c->r[31] = 0x0893b8d0u; c->r[6] = 0u + 0x0000000fu; func_089234b0(c, ram); }
L_0893b8d0:
    c->r[4] = 0x08a70000u;
    c->r[4] = c->r[4] + 0xffffb640u;
    { c->r[31] = 0x0893b8e0u; c->r[5] = 0u + 0u; func_089dfe30(c, ram); }
    c->r[4] = 0x08a70000u;
    c->r[4] = c->r[4] + 0xffffb640u;
    { c->r[31] = 0x0893b8f0u; c->r[5] = 0u + 0x00000001u; func_089dfeb4(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000024u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000020u);
    { c->r[29] = c->r[29] + 0x00000030u; return; }
    return; /* fell out of func_0893b704 */
}

/* func_0893cb00  0x0893cb00..0x0893cb64  100 bytes, source=sweep */
void func_0893cb00(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0893cb00u);
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
    { c->r[31] = 0x0893cb50u; c->r[5] = c->r[2] + 0u; func_0893bf80(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_0893cb00 */
}

/* func_0893dfb0  0x0893dfb0..0x0893e010  96 bytes, source=fde */
void func_0893dfb0(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0893dfb0u);
    c->r[29] = c->r[29] + 0xfffffff0u;
    mem_w32(ram, c->r[29] + 0x00000004u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000000u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    c->r[4] = 0x08aa0000u;
    c->r[4] = c->r[4] + 0xfffffadcu;
    c->r[5] = 0u + 0u;
    { c->r[31] = 0x0893dfd4u; c->r[6] = 0u + 0x00000400u; func_08a19ec4(c, ram); }
    c->r[4] = 0x08aa0000u;
    c->r[4] = c->r[4] + 0xfffffedcu;
    c->r[5] = 0u + 0xffffffffu;
    { c->r[31] = 0x0893dfe8u; c->r[6] = 0u + 0x00000100u; func_08a19ec4(c, ram); }
    c->r[4] = 0x08aa0000u;
    c->r[4] = c->r[4] + 0xffffffdcu;
    c->r[5] = 0u + 0x000000ffu;
    { c->r[31] = 0x0893dffcu; c->r[6] = 0u + 0x00000100u; func_08a19ec4(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000004u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000000u);
    { c->r[29] = c->r[29] + 0x00000010u; return; }
    return; /* fell out of func_0893dfb0 */
}

/* func_08940414  0x08940414..0x08940458  68 bytes, source=sweep */
void func_08940414(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08940414u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = 0x1c000000u;
    c->r[2] = c->r[2] | c->r[3];
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x08940444u; c->r[5] = c->r[2] + 0u; func_0893f9e4(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_08940414 */
}

/* func_089458dc  0x089458dc..0x08945940  100 bytes, source=fde */
void func_089458dc(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089458dcu);
    c->r[29] = c->r[29] + 0xffffffd0u;
    mem_w32(ram, c->r[29] + 0x00000024u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000020u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[6]);
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[7]);
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[8]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = (u32)((s32)c->r[2] >> 8);
    c->r[2] = c->r[2] & 0x0001u;
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[6] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[7] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[8] = mem_r32(ram, c->r[30] + 0x0000000cu);
    { c->r[31] = 0x0894592cu; c->r[9] = mem_r32(ram, c->r[30] + 0x00000010u); func_089459ac(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000024u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000020u);
    { c->r[29] = c->r[29] + 0x00000030u; return; }
    return; /* fell out of func_089458dc */
}

/* func_089466f8  0x089466f8..0x08946728  48 bytes, source=sweep */
void func_089466f8(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089466f8u);
    c->r[29] = c->r[29] + 0xfffffff0u;
    mem_w32(ram, c->r[29] + 0x00000004u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000000u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    c->r[4] = 0u + 0x00000001u;
    { c->r[31] = 0x08946714u; c->r[5] = 0u | 0xffffu; func_0894559c(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000004u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000000u);
    { c->r[29] = c->r[29] + 0x00000010u; return; }
    return; /* fell out of func_089466f8 */
}

/* func_0894c200  0x0894c200..0x0894c244  68 bytes, source=sweep */
void func_0894c200(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0894c200u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = 0x17000000u;
    c->r[2] = c->r[2] | c->r[3];
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x0894c230u; c->r[5] = c->r[2] + 0u; func_0894b6a0(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_0894c200 */
}

/* func_08953448  0x08953448..0x08953480  56 bytes, source=sweep */
void func_08953448(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08953448u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x0895346cu; c->r[5] = mem_r32(ram, c->r[30] + 0x00000004u); func_0895355c(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_08953448 */
}

/* func_089557d8  0x089557d8..0x0895581c  68 bytes, source=sweep */
void func_089557d8(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089557d8u);
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
    { c->r[31] = 0x08955808u; c->r[5] = c->r[2] + 0u; func_08954fd0(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_089557d8 */
}

/* func_08958590  0x08958590..0x089585d4  68 bytes, source=sweep */
void func_08958590(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08958590u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = 0x17000000u;
    c->r[2] = c->r[2] | c->r[3];
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x089585c0u; c->r[5] = c->r[2] + 0u; func_08957fc8(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_08958590 */
}

/* func_0895b15c  0x0895b15c..0x0895b184  40 bytes, source=sweep */
void func_0895b15c(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0895b15cu);
    c->r[29] = c->r[29] + 0xfffffff0u;
    mem_w32(ram, c->r[29] + 0x00000000u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    c->r[2] = 0x08aa0000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00004964u);
    c->r[2] = c->r[2] & 0x000fu;
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000000u);
    { c->r[29] = c->r[29] + 0x00000010u; return; }
    return; /* fell out of func_0895b15c */
}

/* func_0895e390  0x0895e390..0x0895e4ac  284 bytes, source=fde */
void func_0895e390(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0895e390u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    mem_w32(ram, c->r[30] + 0x00000008u, 0u);
L_0895e3ac:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000018u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_0895e3c4; }
    { goto L_0895e498; }
L_0895e3c4:
    mem_w32(ram, c->r[30] + 0x0000000cu, 0u);
    c->r[3] = 0u + 0x00000001u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[3] << (c->r[2] & 31u);
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x00000014u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[3] & c->r[2];
    { int _c = (c->r[2] == 0u); if (_c) goto L_0895e488; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[4] = c->r[2] + 0x00000010u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[2] = c->r[2] + 0x00000010u;
    c->r[2] = mem_r16(ram, c->r[2] + 0x00000008u);
    c->r[2] = c->r[2] + 0x00000001u;
    mem_w16(ram, c->r[4] + 0x00000008u, c->r[2]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x0895e430u; c->r[5] = mem_r32(ram, c->r[30] + 0x00000004u); func_089624cc(c, ram); }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[2] = c->r[2] + 0x00000010u;
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x00000008u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00007531u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_0895e488; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[2] = c->r[2] + 0x00000010u;
    mem_w16(ram, c->r[2] + 0x00000008u, 0u);
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = ~(0u | c->r[2]);
    c->r[2] = mem_r32(ram, c->r[4] + 0x00000014u);
    c->r[2] = c->r[2] & c->r[3];
    mem_w32(ram, c->r[5] + 0x00000014u, c->r[2]);
L_0895e488:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]); goto L_0895e3ac; }
L_0895e498:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_0895e390 */
}

/* func_08961050  0x08961050..0x0896110c  188 bytes, source=fde */
void func_08961050(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08961050u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000000u);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[2]);
    { c->r[31] = 0x08961078u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000004u); func_088d3790(c, ram); }
    { int _c = (c->r[2] != 0u); if (_c) goto L_08961088; }
    { goto L_089610f8; }
L_08961088:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = c->r[2] << 3;
    c->r[2] = 0x08aa0000u;
    c->r[2] = c->r[2] + 0x000049e0u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[4] = mem_r32(ram, c->r[2] + 0x000000d4u);
    c->r[2] = mem_r32(ram, c->r[3] + 0x00000004u);
    c->r[2] = c->r[4] & c->r[2];
    { int _c = (c->r[2] == 0u); if (_c) goto L_089610dc; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r8(ram, c->r[2] + 0x00000008u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000009u);
    c->r[4] = c->r[3] + 0u;
    { c->r[31] = 0x089610d4u; c->r[5] = c->r[2] + 0u; func_089616d4(c, ram); }
    { goto L_089610f8; }
L_089610dc:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r8(ram, c->r[2] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r8(ram, c->r[2] + 0x0000000du);
    c->r[4] = c->r[3] + 0u;
    { c->r[31] = 0x089610f8u; c->r[5] = c->r[2] + 0u; func_089616d4(c, ram); }
L_089610f8:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_08961050 */
}

/* func_08963da0  0x08963da0..0x08963e88  232 bytes, source=sweep */
void func_08963da0(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08963da0u);
    c->r[29] = c->r[29] + 0xffffffd0u;
    mem_w32(ram, c->r[29] + 0x00000020u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[6]);
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[7]);
    mem_w32(ram, c->r[30] + 0x00000010u, 0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x000000dcu);
    mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x000000dcu);
    mem_w32(ram, c->r[30] + 0x0000001cu, c->r[2]);
    mem_w32(ram, c->r[30] + 0x00000014u, 0u);
L_08963de0:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = ((s32)c->r[2] < (s32)c->r[3]) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_08963dfc; }
    { goto L_08963e78; }
L_08963dfc:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 2;
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = c->r[3] + c->r[2];
    c->r[3] = mem_r8(ram, c->r[2] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_08963e68; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_08963e5c; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 2;
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = c->r[3] + c->r[2];
    { mem_w8(ram, c->r[2] + 0x00000001u, 0u); goto L_08963e78; }
L_08963e5c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = c->r[2] + 0x00000001u;
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]);
L_08963e68:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]); goto L_08963de0; }
L_08963e78:
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000020u);
    { c->r[29] = c->r[29] + 0x00000030u; return; }
    return; /* fell out of func_08963da0 */
}

/* func_08966cbc  0x08966cbc..0x08966d6c  176 bytes, source=fde */
void func_08966cbc(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08966cbcu);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[1] = 0x08aa0000u;
    mem_w32(ram, c->r[1] + 0x000052e8u, 0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_08966cf8; }
    c->r[4] = 0x08a50000u;
    { c->r[31] = 0x08966cf0u; c->r[4] = c->r[4] + 0xffff83e4u; func_089c6f64(c, ram); }
    { mem_w32(ram, c->r[30] + 0x00000004u, c->r[2]); goto L_08966d08; }
L_08966cf8:
    c->r[4] = 0x08a50000u;
    { c->r[31] = 0x08966d04u; c->r[4] = c->r[4] + 0xffff83f0u; func_089c6f64(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[2]);
L_08966d08:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[5] = 0x08aa0000u;
    { c->r[31] = 0x08966d18u; c->r[5] = c->r[5] + 0x000052e8u; func_08965914(c, ram); }
    c->r[4] = 0x08a50000u;
    { c->r[31] = 0x08966d24u; c->r[4] = c->r[4] + 0xffff83f8u; func_089c6f64(c, ram); }
    c->r[1] = 0x08aa0000u;
    mem_w32(ram, c->r[1] + 0x000053c0u, c->r[2]);
    c->r[4] = 0x08a50000u;
    { c->r[31] = 0x08966d38u; c->r[4] = c->r[4] + 0xffff8404u; func_089c6f64(c, ram); }
    c->r[1] = 0x08aa0000u;
    mem_w32(ram, c->r[1] + 0x000053c4u, c->r[2]);
    c->r[4] = 0x08a50000u;
    { c->r[31] = 0x08966d4cu; c->r[4] = c->r[4] + 0xffff8410u; func_089c6f64(c, ram); }
    c->r[1] = 0x08aa0000u;
    mem_w32(ram, c->r[1] + 0x000053c8u, c->r[2]);
    c->r[2] = 0u + 0x00000001u;
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_08966cbc */
}

/* func_0896955c  0x0896955c..0x08969658  252 bytes, source=fde */
void func_0896955c(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0896955cu);
    c->r[29] = c->r[29] + 0xffffffd0u;
    mem_w32(ram, c->r[29] + 0x00000024u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000020u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    c->r[2] = 0u + 0xffffffffu;
    c->r[1] = 0x08aa0000u;
    mem_w8(ram, c->r[1] + 0x000053ccu, c->r[2]);
    { c->r[31] = 0x08969588u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u); func_08968f28(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]);
    c->r[2] = 0u + 0xffffffffu;
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_089695c0; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[3] = c->r[2] << 4;
    c->r[2] = 0x08a60000u;
    c->r[2] = c->r[2] + 0xffff986cu;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x0000000cu);
    { mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]); goto L_089695ec; }
L_089695c0:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = 0u + 0x00000001u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_089695ec; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[3] = c->r[2] << 4;
    c->r[2] = 0x08a60000u;
    c->r[2] = c->r[2] + 0xffff986cu;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x0000000du);
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
L_089695ec:
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0u + 0xffffffffu;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_08969608; }
    c->r[2] = 0u + 0xffffffffu;
    { mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]); goto L_08969640; }
L_08969608:
    { c->r[31] = 0x08969610u; c->r[4] = mem_r32(ram, c->r[30] + 0x0000000cu); func_08969b2c(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_0896962c; }
    c->r[2] = 0u + 0xffffffffu;
    { mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]); goto L_08969640; }
L_0896962c:
    c->r[2] = mem_r8(ram, c->r[30] + 0x0000000cu);
    c->r[1] = 0x08aa0000u;
    mem_w8(ram, c->r[1] + 0x000053ccu, c->r[2]);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[30] + 0x0000000cu);
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
L_08969640:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000024u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000020u);
    { c->r[29] = c->r[29] + 0x00000030u; return; }
    return; /* fell out of func_0896955c */
}

/* func_0896a2e0  0x0896a2e0..0x0896a318  56 bytes, source=sweep */
void func_0896a2e0(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0896a2e0u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08a60000u;
    c->r[2] = c->r[2] + 0xffff9db4u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_0896a2e0 */
}

/* func_0896ccf0  0x0896ccf0..0x0896cdf8  264 bytes, source=sweep */
void func_0896ccf0(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0896ccf0u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000018u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[30]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[16]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[2] = c->r[5] + 0u;
    mem_w16(ram, c->r[30] + 0x00000004u, c->r[2]);
    { c->r[31] = 0x0896cd18u; c->r[16] = mem_r32(ram, c->r[30] + 0x00000000u); func_0896a3e4(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = 0u + 0x00000001u;
    c->r[2] = c->r[2] << (c->r[3] & 31u);
    mem_w8(ram, c->r[16] + 0x000009c3u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r16(ram, c->r[30] + 0x00000004u);
    mem_w16(ram, c->r[3] + 0x000009c0u, c->r[2]);
    mem_w32(ram, c->r[30] + 0x00000008u, 0u);
L_0896cd38:
    { c->r[31] = 0x0896cd40u; func_0896a3c0(c, ram); }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[2] = ((s32)c->r[3] < (s32)c->r[2]) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_0896cd5c; }
    { goto L_0896cde0; }
L_0896cd5c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x000009c2u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    { int _c = (c->r[2] != c->r[3]); if (_c) goto L_0896cd78; }
    { goto L_0896cdd0; }
L_0896cd78:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 5;
    c->r[2] = c->r[2] + c->r[3];
    c->r[2] = c->r[2] << 4;
    c->r[2] = c->r[2] + c->r[4];
    c->r[2] = c->r[2] + 0x00000280u;
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x0000000eu);
    c->r[2] = 0u + 0x00000001u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_0896cdd0; }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 5;
    c->r[2] = c->r[2] + c->r[3];
    c->r[2] = c->r[2] << 4;
    c->r[2] = c->r[2] + c->r[4];
    c->r[3] = c->r[2] + 0x00000280u;
    c->r[2] = 0u + 0x00000001u;
    mem_w8(ram, c->r[3] + 0x0000000fu, c->r[2]);
L_0896cdd0:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]); goto L_0896cd38; }
L_0896cde0:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000018u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[16] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_0896ccf0 */
}

/* func_0896e40c  0x0896e40c..0x0896e438  44 bytes, source=sweep */
void func_0896e40c(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0896e40cu);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = 0u + 0x00000001u;
    mem_w8(ram, c->r[3] + 0x00000055u, c->r[2]);
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_0896e40c */
}

/* func_0896f3dc  0x0896f3dc..0x0896f400  36 bytes, source=sweep */
void func_0896f3dc(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0896f3dcu);
    c->r[29] = c->r[29] + 0xfffffff0u;
    mem_w32(ram, c->r[29] + 0x00000000u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    c->r[2] = 0x08aa0000u;
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x00006868u);
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000000u);
    { c->r[29] = c->r[29] + 0x00000010u; return; }
    return; /* fell out of func_0896f3dc */
}

/* func_08970f6c  0x08970f6c..0x089710e0  372 bytes, source=fde */
void func_08970f6c(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08970f6cu);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, 0u);
    mem_w32(ram, c->r[30] + 0x00000008u, 0u);
    mem_w32(ram, c->r[30] + 0x0000000cu, 0u);
L_08970f8c:
    { c->r[31] = 0x08970f94u; func_0896a3c0(c, ram); }
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[2] = ((s32)c->r[3] < (s32)c->r[2]) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_08970fb0; }
    { goto L_08971084; }
L_08970fb0:
    { c->r[31] = 0x08970fb8u; c->r[4] = mem_r32(ram, c->r[30] + 0x0000000cu); func_0896dbc0(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_08971074; }
    { c->r[31] = 0x08970fd0u; func_0896a3c0(c, ram); }
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[2] = ((s32)c->r[3] < (s32)c->r[2]) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_08971038; }
    { c->r[31] = 0x08970fecu; func_0896a3e4(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    { int _c = (c->r[2] == c->r[3]); if (_c) goto L_08971038; }
    { c->r[31] = 0x08971004u; func_0896a3c0(c, ram); }
    c->r[4] = c->r[2] + 0u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 3;
    c->r[2] = c->r[2] + c->r[3];
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[4];
    c->r[2] = c->r[2] + 0x00000020u;
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000004u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_08971038; }
    { goto L_08971074; }
L_08971038:
    { c->r[31] = 0x08971040u; c->r[4] = mem_r32(ram, c->r[30] + 0x0000000cu); func_08970efc(c, ram); }
    { int _c = (c->r[2] == 0u); if (_c) goto L_08971074; }
    { c->r[31] = 0x08971050u; func_0896a3e4(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    { int _c = (c->r[2] != c->r[3]); if (_c) goto L_08971068; }
    c->r[2] = 0u + 0x00000001u;
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]);
L_08971068:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[2] + 0x00000001u;
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[2]);
L_08971074:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]); goto L_08970f8c; }
L_08971084:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    { int _c = ((s32)c->r[2] <= 0); if (_c) goto L_089710cc; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_089710cc; }
    c->r[3] = 0u + 0x00000258u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    alx_div(c, c->r[3], c->r[2]);
    c->r[3] = c->lo;
    if (c->r[2] == 0u) { recomp_break(c, ram, 0x089710b0u, 0x7u); goto L_089710b4; }
L_089710b4:
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[3]);
    { c->r[31] = 0x089710c0u; func_0896a3e4(c, ram); }
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x089710ccu; c->r[5] = mem_r32(ram, c->r[30] + 0x0000000cu); func_0896fc10(c, ram); }
L_089710cc:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_08970f6c */
}

/* func_08974a10  0x08974a10..0x08974ae8  216 bytes, source=residue */
void func_08974a10(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08974a10u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[3];
    c->r[4] = c->r[2] << 4;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[3];
    c->r[2] = c->r[2] << 2;
    c->r[3] = c->r[4] + c->r[2];
    c->r[2] = 0x08a60000u;
    c->r[2] = c->r[2] + 0xffff9f18u;
    c->r[2] = c->r[3] + c->r[2];
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]);
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[4] = c->r[2] << 5;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[2] = c->r[2] << 3;
    c->r[3] = c->r[4] + c->r[2];
    c->r[2] = 0x08aa0000u;
    c->r[2] = c->r[2] + 0x000069c4u;
    c->r[2] = c->r[3] + c->r[2];
    mem_w32(ram, c->r[5] + 0x00000000u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[4] = c->r[2] << 5;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[2] = c->r[2] << 3;
    c->r[2] = c->r[4] + c->r[2];
    c->r[3] = 0x08aa0000u;
    c->r[3] = c->r[3] + 0x000069c4u;
    c->r[2] = c->r[2] + c->r[3];
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_08974a10 */
}

/* func_08976260  0x08976260..0x0897629c  60 bytes, source=fde */
void func_08976260(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08976260u);
    c->r[29] = c->r[29] + 0xfffffff0u;
    mem_w32(ram, c->r[29] + 0x00000004u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000000u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x0897627cu; c->r[4] = c->r[4] + 0x000027dcu; func_089d3a80(c, ram); }
    c->r[4] = 0x08aa0000u;
    { c->r[31] = 0x08976288u; c->r[4] = c->r[4] + 0x00006ea8u; func_089d4720(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000004u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000000u);
    { c->r[29] = c->r[29] + 0x00000010u; return; }
    return; /* fell out of func_08976260 */
}

/* func_08979948  0x08979948..0x08979c78  816 bytes, source=sweep */
void func_08979948(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08979948u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[2] = 0x08ab0000u;
    c->r[2] = mem_r8(ram, c->r[2] + 0xffff907au);
    c->r[1] = 0x08ab0000u;
    mem_w8(ram, c->r[1] + 0xffff9116u, c->r[2]);
    c->r[2] = 0x08ab0000u;
    c->r[2] = mem_r8(ram, c->r[2] + 0xffff907bu);
    c->r[1] = 0x08ab0000u;
    mem_w8(ram, c->r[1] + 0xffff9117u, c->r[2]);
    c->r[2] = 0x08ab0000u;
    c->r[2] = mem_r8(ram, c->r[2] + 0xffff907cu);
    c->r[1] = 0x08ab0000u;
    mem_w8(ram, c->r[1] + 0xffff9118u, c->r[2]);
    c->r[2] = 0x08ab0000u;
    c->r[2] = mem_r8(ram, c->r[2] + 0xffff907eu);
    c->r[1] = 0x08ab0000u;
    mem_w8(ram, c->r[1] + 0xffff911au, c->r[2]);
    c->r[2] = 0x08ab0000u;
    c->r[2] = mem_r8(ram, c->r[2] + 0xffff9081u);
    c->r[1] = 0x08ab0000u;
    mem_w8(ram, c->r[1] + 0xffff911du, c->r[2]);
    c->r[2] = 0x08ab0000u;
    c->r[2] = mem_r8(ram, c->r[2] + 0xffff9084u);
    c->r[1] = 0x08ab0000u;
    mem_w8(ram, c->r[1] + 0xffff9120u, c->r[2]);
    c->r[2] = 0x08ab0000u;
    c->r[2] = mem_r8(ram, c->r[2] + 0xffff9083u);
    c->r[1] = 0x08ab0000u;
    mem_w8(ram, c->r[1] + 0xffff911fu, c->r[2]);
    c->r[2] = 0x08ab0000u;
    c->r[2] = mem_r8(ram, c->r[2] + 0xffff9085u);
    c->r[1] = 0x08ab0000u;
    mem_w8(ram, c->r[1] + 0xffff9121u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = (c->r[2] < 0x00000006u) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_08979c68; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08a50000u;
    c->r[2] = c->r[2] + 0xffff8b4cu;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    { u32 _t = c->r[2]; switch (_t) { case 0x08979a08u: goto L_08979a08; case 0x08979a88u: goto L_08979a88; case 0x08979b00u: goto L_08979b00; case 0x08979b48u: goto L_08979b48; case 0x08979bc8u: goto L_08979bc8; case 0x08979c04u: goto L_08979c04; default: recomp_trap_unknown_indirect(c, ram, 0x08979a00u, _t); return; } }
L_08979a08:
    c->r[2] = 0x08ab0000u;
    c->r[2] = mem_r8(ram, c->r[2] + 0xffff907du);
    c->r[1] = 0x08ab0000u;
    mem_w8(ram, c->r[1] + 0xffff9119u, c->r[2]);
    c->r[2] = 0x08ab0000u;
    c->r[2] = mem_r8(ram, c->r[2] + 0xffff9079u);
    c->r[1] = 0x08ab0000u;
    mem_w8(ram, c->r[1] + 0xffff9115u, c->r[2]);
    c->r[3] = 0x08ab0000u;
    c->r[3] = mem_r8(ram, c->r[3] + 0xffff9082u);
    c->r[2] = 0u + 0x00000009u;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_08979a50; }
    c->r[2] = 0x08ab0000u;
    c->r[2] = mem_r8(ram, c->r[2] + 0xffff9082u);
    c->r[2] = c->r[2] + 0xffffffffu;
    { mem_w8(ram, c->r[30] + 0x00000004u, c->r[2]); goto L_08979a58; }
L_08979a50:
    c->r[2] = 0u + 0x00000003u;
    mem_w8(ram, c->r[30] + 0x00000004u, c->r[2]);
L_08979a58:
    c->r[2] = mem_r8(ram, c->r[30] + 0x00000004u);
    c->r[1] = 0x08ab0000u;
    mem_w8(ram, c->r[1] + 0xffff911eu, c->r[2]);
    c->r[2] = 0x08ab0000u;
    c->r[2] = mem_r8(ram, c->r[2] + 0xffff907fu);
    c->r[1] = 0x08ab0000u;
    mem_w8(ram, c->r[1] + 0xffff911bu, c->r[2]);
    c->r[2] = 0x08ab0000u;
    c->r[2] = mem_r8(ram, c->r[2] + 0xffff9080u);
    c->r[1] = 0x08ab0000u;
    { mem_w8(ram, c->r[1] + 0xffff911cu, c->r[2]); goto L_08979c68; }
L_08979a88:
    c->r[1] = 0x08ab0000u;
    mem_w8(ram, c->r[1] + 0xffff9119u, 0u);
    c->r[2] = 0x08ab0000u;
    c->r[2] = mem_r8(ram, c->r[2] + 0xffff9079u);
    c->r[1] = 0x08ab0000u;
    mem_w8(ram, c->r[1] + 0xffff9115u, c->r[2]);
    c->r[3] = 0x08ab0000u;
    c->r[3] = mem_r8(ram, c->r[3] + 0xffff9082u);
    c->r[2] = 0u + 0x00000009u;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_08979ac8; }
    c->r[2] = 0x08ab0000u;
    c->r[2] = mem_r8(ram, c->r[2] + 0xffff9082u);
    c->r[2] = c->r[2] + 0xffffffffu;
    { mem_w8(ram, c->r[30] + 0x00000005u, c->r[2]); goto L_08979ad0; }
L_08979ac8:
    c->r[2] = 0u + 0x00000003u;
    mem_w8(ram, c->r[30] + 0x00000005u, c->r[2]);
L_08979ad0:
    c->r[2] = mem_r8(ram, c->r[30] + 0x00000005u);
    c->r[1] = 0x08ab0000u;
    mem_w8(ram, c->r[1] + 0xffff911eu, c->r[2]);
    c->r[2] = 0x08ab0000u;
    c->r[2] = mem_r8(ram, c->r[2] + 0xffff907fu);
    c->r[1] = 0x08ab0000u;
    mem_w8(ram, c->r[1] + 0xffff911bu, c->r[2]);
    c->r[2] = 0x08ab0000u;
    c->r[2] = mem_r8(ram, c->r[2] + 0xffff9080u);
    c->r[1] = 0x08ab0000u;
    { mem_w8(ram, c->r[1] + 0xffff911cu, c->r[2]); goto L_08979c68; }
L_08979b00:
    c->r[2] = 0x08ab0000u;
    c->r[2] = mem_r8(ram, c->r[2] + 0xffff907du);
    c->r[1] = 0x08ab0000u;
    mem_w8(ram, c->r[1] + 0xffff9119u, c->r[2]);
    c->r[1] = 0x08ab0000u;
    mem_w8(ram, c->r[1] + 0xffff9115u, 0u);
    c->r[1] = 0x08ab0000u;
    mem_w8(ram, c->r[1] + 0xffff911eu, 0u);
    c->r[2] = 0x08ab0000u;
    c->r[2] = mem_r8(ram, c->r[2] + 0xffff907fu);
    c->r[2] = c->r[2] + 0xffffffffu;
    c->r[1] = 0x08ab0000u;
    mem_w8(ram, c->r[1] + 0xffff911bu, c->r[2]);
    c->r[2] = 0x08ab0000u;
    c->r[2] = mem_r8(ram, c->r[2] + 0xffff9080u);
    c->r[1] = 0x08ab0000u;
    { mem_w8(ram, c->r[1] + 0xffff911cu, c->r[2]); goto L_08979c68; }
L_08979b48:
    c->r[2] = 0x08ab0000u;
    c->r[2] = mem_r8(ram, c->r[2] + 0xffff907du);
    c->r[1] = 0x08ab0000u;
    mem_w8(ram, c->r[1] + 0xffff9119u, c->r[2]);
    c->r[2] = 0x08ab0000u;
    c->r[2] = mem_r8(ram, c->r[2] + 0xffff9079u);
    c->r[1] = 0x08ab0000u;
    mem_w8(ram, c->r[1] + 0xffff9115u, c->r[2]);
    c->r[3] = 0x08ab0000u;
    c->r[3] = mem_r8(ram, c->r[3] + 0xffff9082u);
    c->r[2] = 0u + 0x00000009u;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_08979b90; }
    c->r[2] = 0x08ab0000u;
    c->r[2] = mem_r8(ram, c->r[2] + 0xffff9082u);
    c->r[2] = c->r[2] + 0xfffffffcu;
    { mem_w8(ram, c->r[30] + 0x00000006u, c->r[2]); goto L_08979b98; }
L_08979b90:
    c->r[2] = 0u + 0x00000002u;
    mem_w8(ram, c->r[30] + 0x00000006u, c->r[2]);
L_08979b98:
    c->r[2] = mem_r8(ram, c->r[30] + 0x00000006u);
    c->r[1] = 0x08ab0000u;
    mem_w8(ram, c->r[1] + 0xffff911eu, c->r[2]);
    c->r[2] = 0x08ab0000u;
    c->r[2] = mem_r8(ram, c->r[2] + 0xffff907fu);
    c->r[1] = 0x08ab0000u;
    mem_w8(ram, c->r[1] + 0xffff911bu, c->r[2]);
    c->r[2] = 0x08ab0000u;
    c->r[2] = mem_r8(ram, c->r[2] + 0xffff9080u);
    c->r[1] = 0x08ab0000u;
    { mem_w8(ram, c->r[1] + 0xffff911cu, c->r[2]); goto L_08979c68; }
L_08979bc8:
    c->r[2] = 0x08ab0000u;
    c->r[2] = mem_r8(ram, c->r[2] + 0xffff907du);
    c->r[1] = 0x08ab0000u;
    mem_w8(ram, c->r[1] + 0xffff9119u, c->r[2]);
    c->r[1] = 0x08ab0000u;
    mem_w8(ram, c->r[1] + 0xffff9115u, 0u);
    c->r[1] = 0x08ab0000u;
    mem_w8(ram, c->r[1] + 0xffff911eu, 0u);
    c->r[2] = 0x08ab0000u;
    c->r[2] = mem_r8(ram, c->r[2] + 0xffff907fu);
    c->r[1] = 0x08ab0000u;
    mem_w8(ram, c->r[1] + 0xffff911bu, c->r[2]);
    c->r[1] = 0x08ab0000u;
    { mem_w8(ram, c->r[1] + 0xffff911cu, 0u); goto L_08979c68; }
L_08979c04:
    c->r[2] = 0x08ab0000u;
    c->r[2] = mem_r8(ram, c->r[2] + 0xffff907du);
    c->r[1] = 0x08ab0000u;
    mem_w8(ram, c->r[1] + 0xffff9119u, c->r[2]);
    c->r[1] = 0x08ab0000u;
    mem_w8(ram, c->r[1] + 0xffff9115u, 0u);
    c->r[3] = 0x08ab0000u;
    c->r[3] = mem_r8(ram, c->r[3] + 0xffff9082u);
    c->r[2] = 0u + 0x00000009u;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_08979c44; }
    c->r[2] = 0x08ab0000u;
    c->r[2] = mem_r8(ram, c->r[2] + 0xffff9082u);
    c->r[2] = c->r[2] + 0xfffffffau;
    { mem_w8(ram, c->r[30] + 0x00000007u, c->r[2]); goto L_08979c4c; }
L_08979c44:
    c->r[2] = 0u + 0x00000002u;
    mem_w8(ram, c->r[30] + 0x00000007u, c->r[2]);
L_08979c4c:
    c->r[2] = mem_r8(ram, c->r[30] + 0x00000007u);
    c->r[1] = 0x08ab0000u;
    mem_w8(ram, c->r[1] + 0xffff911eu, c->r[2]);
    c->r[1] = 0x08ab0000u;
    mem_w8(ram, c->r[1] + 0xffff911bu, 0u);
    c->r[1] = 0x08ab0000u;
    mem_w8(ram, c->r[1] + 0xffff911cu, 0u);
L_08979c68:
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_08979948 */
}

/* func_08983398  0x08983398..0x08984cd4  6460 bytes, source=fde */
void func_08983398(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08983398u);
L_08983398:
    c->r[29] = c->r[29] + 0xffffff90u;
    mem_w32(ram, c->r[29] + 0x0000006cu, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000068u, c->r[30]);
    mem_w32(ram, c->r[29] + 0x00000064u, c->r[17]);
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
    mem_w32(ram, c->r[30] + 0x0000005cu, c->r[2]);
    c->r[2] = 0u + 0x00000019u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000005cu);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_08984a48; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000005cu);
    c->r[2] = ((s32)c->r[3] < (s32)0x0000001au) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_08983418; }
    c->r[2] = 0u + 0x00000001u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000005cu);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_08983430; }
    { goto L_08984cb4; }
L_08983418:
    c->r[2] = 0u + 0x00000020u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000005cu);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_08984c5c; }
    { goto L_08984cb4; }
L_08983430:
    { c->r[31] = 0x08983438u; func_08981bd0(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = 0u + 0xffffffffu;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_08983584; }
    { c->r[31] = 0x08983454u; func_08973e38(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000018u, 0u);
L_08983458:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000006u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_08983470; }
    { goto L_089834c4; }
L_08983470:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[3] = c->r[2] << 2;
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = c->r[2] + 0x00000014u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000ac8u;
    { c->r[31] = 0x08983498u; c->r[5] = c->r[2] + 0u; func_089cb820(c, ram); }
    mem_w32(ram, c->r[30] + 0x0000001cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    { int _c = (c->r[2] == 0u); if (_c) goto L_089834b4; }
    c->r[4] = mem_r32(ram, c->r[30] + 0x0000001cu);
    { c->r[31] = 0x089834b4u; c->r[5] = 0u + 0x00000002u; func_0880d260(c, ram); }
L_089834b4:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]); goto L_08983458; }
L_089834c4:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = c->r[2] + 0x00000004u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000ac8u;
    { c->r[31] = 0x089834e0u; c->r[5] = c->r[2] + 0u; func_089cb820(c, ram); }
    mem_w32(ram, c->r[30] + 0x0000001cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    { int _c = (c->r[2] == 0u); if (_c) goto L_089834fc; }
    c->r[4] = mem_r32(ram, c->r[30] + 0x0000001cu);
    { c->r[31] = 0x089834fcu; c->r[5] = 0u + 0x00000002u; func_0880d260(c, ram); }
L_089834fc:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x0000002cu;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000ac8u;
    { c->r[31] = 0x08983518u; c->r[5] = c->r[2] + 0u; func_089cb820(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_08983534; }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000018u);
    { c->r[31] = 0x08983534u; c->r[5] = 0u + 0x00000002u; func_0880d260(c, ram); }
L_08983534:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x00000030u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000ac8u;
    { c->r[31] = 0x08983550u; c->r[5] = c->r[2] + 0u; func_089cb820(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000020u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_0898356c; }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000020u);
    { c->r[31] = 0x0898356cu; c->r[5] = 0u + 0x00000002u; func_0880d260(c, ram); }
L_0898356c:
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0u + 0x00000003u;
    mem_w32(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x08983584u; c->r[5] = 0u + 0x00000033u; func_0896a7b8(c, ram); }
L_08983584:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r8(ram, c->r[2] + 0x0000000eu);
    mem_w32(ram, c->r[30] + 0x00000054u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000054u);
    c->r[2] = (c->r[3] < 0x0000002cu) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_08984a0c; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000054u);
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08a50000u;
    c->r[2] = c->r[2] + 0xffff9138u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    { u32 _t = c->r[2]; switch (_t) { case 0x08983398u: goto L_08983398; case 0x089835c0u: goto L_089835c0; case 0x089837a8u: goto L_089837a8; case 0x089837c8u: goto L_089837c8; case 0x08983d34u: goto L_08983d34; case 0x08983f88u: goto L_08983f88; case 0x089840acu: goto L_089840ac; case 0x08984230u: goto L_08984230; case 0x08984588u: goto L_08984588; case 0x0898464cu: goto L_0898464c; case 0x089846a4u: goto L_089846a4; case 0x08984800u: goto L_08984800; case 0x08984918u: goto L_08984918; case 0x089849f4u: goto L_089849f4; case 0x08984a0cu: goto L_08984a0c; case 0x08984a84u: goto L_08984a84; case 0x08984b3cu: goto L_08984b3c; case 0x08984b7cu: goto L_08984b7c; case 0x08984bccu: goto L_08984bcc; case 0x08984c1cu: goto L_08984c1c; case 0x08984cb4u: goto L_08984cb4; default: recomp_trap_unknown_indirect(c, ram, 0x089835b8u, _t); return; } }
L_089835c0:
    { c->r[31] = 0x089835c8u; c->r[4] = mem_r32(ram, c->r[30] + 0x0000000cu); func_0896e3dc(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x0000002cu;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000ac8u;
    { c->r[31] = 0x089835e4u; c->r[5] = c->r[2] + 0u; func_089cb820(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000020u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_08983638; }
    c->r[4] = 0u + 0x00000036u;
    c->r[5] = 0u + 0u;
    c->r[6] = 0u + 0u;
    c->r[7] = 0u + 0u;
    c->r[8] = 0u + 0u;
    { c->r[31] = 0x08983610u; c->r[9] = 0u + 0u; func_089c6bec(c, ram); }
    mem_w32(ram, c->r[30] + 0x0000001cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[16] = c->r[2] + 0x0000002cu;
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000ac8u;
    { c->r[31] = 0x0898362cu; c->r[5] = mem_r32(ram, c->r[30] + 0x0000001cu); func_089cb780(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000024u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000024u);
    mem_w32(ram, c->r[16] + 0x00000000u, c->r[2]);
L_08983638:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x00000030u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000ac8u;
    { c->r[31] = 0x08983654u; c->r[5] = c->r[2] + 0u; func_089cb820(c, ram); }
    mem_w32(ram, c->r[30] + 0x0000001cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    { int _c = (c->r[2] != 0u); if (_c) goto L_089836a8; }
    c->r[4] = 0u + 0x00000037u;
    c->r[5] = 0u + 0u;
    c->r[6] = 0u + 0u;
    c->r[7] = 0u + 0u;
    c->r[8] = 0u + 0u;
    { c->r[31] = 0x08983680u; c->r[9] = 0u + 0u; func_089c6bec(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[16] = c->r[2] + 0x00000030u;
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000ac8u;
    { c->r[31] = 0x0898369cu; c->r[5] = mem_r32(ram, c->r[30] + 0x00000018u); func_089cb780(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000028u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000028u);
    mem_w32(ram, c->r[16] + 0x00000000u, c->r[2]);
L_089836a8:
    { c->r[31] = 0x089836b0u; c->r[4] = 0u + 0x00000003u; func_08924620(c, ram); }
    c->r[2] = 0u + 0x00000001u;
    c->r[1] = 0x08ab0000u;
    { c->r[31] = 0x089836c0u; mem_w8(ram, c->r[1] + 0xffff9226u, c->r[2]); func_089794c4(c, ram); }
    c->r[3] = mem_r8(ram, c->r[2] + 0x00000004u);
    c->r[2] = 0u + 0x00000002u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_08983708; }
    { c->r[31] = 0x089836d8u; func_089794c4(c, ram); }
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000005u);
    c->r[2] = c->r[2] + 0x00000001u;
    c->r[1] = 0x08ab0000u;
    mem_w8(ram, c->r[1] + 0xffff9226u, c->r[2]);
    c->r[2] = 0x08ab0000u;
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0xffff9226u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000005u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_08983708; }
    c->r[2] = 0u + 0x00000004u;
    c->r[1] = 0x08ab0000u;
    mem_w8(ram, c->r[1] + 0xffff9226u, c->r[2]);
L_08983708:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_0898372c; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000045u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_0898372c; }
    { c->r[31] = 0x0898372cu; func_089810d8(c, ram); }
L_0898372c:
    { c->r[31] = 0x08983734u; func_089814c0(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    mem_w8(ram, c->r[2] + 0x00000040u, 0u);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = 0x08ab0000u;
    { c->r[31] = 0x0898374cu; c->r[5] = c->r[5] + 0xffff91f0u; func_08973bdc(c, ram); }
    { c->r[31] = 0x08983754u; func_0896a3e4(c, ram); }
    c->r[1] = 0x08ab0000u;
    mem_w8(ram, c->r[1] + 0xffff923au, c->r[2]);
    c->r[1] = 0x08ab0000u;
    mem_w8(ram, c->r[1] + 0xffff923bu, 0u);
    c->r[2] = 0u + 0xffffffffu;
    c->r[1] = 0x08ab0000u;
    mem_w8(ram, c->r[1] + 0xffff923cu, c->r[2]);
    c->r[1] = 0x08ab0000u;
    mem_w8(ram, c->r[1] + 0xffff923du, 0u);
    c->r[1] = 0x08ab0000u;
    { c->r[31] = 0x08983784u; mem_w16(ram, c->r[1] + 0xffff923eu, 0u); func_0896a284(c, ram); }
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x08983790u; c->r[5] = 0u + 0x00000096u; func_0896ccf0(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    mem_w8(ram, c->r[2] + 0x00000010u, 0u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0u + 0x00000012u;
    { mem_w8(ram, c->r[3] + 0x0000000eu, c->r[2]); goto L_08984a0c; }
L_089837a8:
    { c->r[31] = 0x089837b0u; func_08973f28(c, ram); }
    { int _c = (c->r[2] == 0u); if (_c) goto L_08984a0c; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0u + 0x00000002u;
    { mem_w8(ram, c->r[3] + 0x0000000eu, c->r[2]); goto L_08984a0c; }
L_089837c8:
    { c->r[31] = 0x089837d0u; func_0896a3e4(c, ram); }
    c->r[1] = 0x08ab0000u;
    mem_w8(ram, c->r[1] + 0xffff9218u, c->r[2]);
    c->r[1] = 0x08ab0000u;
    mem_w8(ram, c->r[1] + 0xffff9219u, 0u);
    c->r[4] = 0x08a70000u;
    c->r[4] = c->r[4] + 0xffffb34cu;
    c->r[5] = 0u + 0u;
    c->r[6] = 0u + 0u;
    { c->r[31] = 0x089837f8u; c->r[7] = 0u + 0u; func_089d87d4(c, ram); }
    c->r[16] = c->r[2] + 0u;
    c->r[4] = 0x08a70000u;
    { c->r[31] = 0x08983808u; c->r[4] = c->r[4] + 0xffffb34cu; func_0880d238(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = mem_r32(ram, c->r[16] + 0x00000004u);
    c->r[2] = c->r[3] & c->r[2];
    c->r[2] = c->r[2] & 0x0008u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_08983850; }
    c->r[1] = 0x08ab0000u;
    { c->r[31] = 0x0898382cu; mem_w16(ram, c->r[1] + 0xffff923eu, 0u); func_0896a3e4(c, ram); }
    c->r[1] = 0x08ab0000u;
    mem_w8(ram, c->r[1] + 0xffff9218u, c->r[2]);
    c->r[2] = 0u + 0x00000004u;
    c->r[1] = 0x08ab0000u;
    mem_w8(ram, c->r[1] + 0xffff9219u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0u + 0x00000015u;
    { mem_w8(ram, c->r[3] + 0x0000000eu, c->r[2]); goto L_08983c30; }
L_08983850:
    { c->r[31] = 0x08983858u; c->r[4] = 0u + 0x00000001u; func_089c5e18(c, ram); }
    { int _c = (c->r[2] == 0u); if (_c) goto L_08983968; }
    c->r[1] = 0x08ab0000u;
    mem_w16(ram, c->r[1] + 0xffff923eu, 0u);
    c->r[2] = 0x08ab0000u;
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0xffff923bu);
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08ab0000u;
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0xffff923au);
    c->r[2] = c->r[3] + c->r[2];
    { c->r[31] = 0x08983888u; mem_w32(ram, c->r[30] + 0x00000020u, c->r[2]); func_0896a3e4(c, ram); }
    { c->r[31] = 0x08983890u; c->r[4] = c->r[2] + 0u; func_0896dbc0(c, ram); }
    mem_w8(ram, c->r[30] + 0x0000002cu, c->r[2]);
    { c->r[31] = 0x0898389cu; c->r[4] = mem_r32(ram, c->r[30] + 0x00000020u); func_0896dbc0(c, ram); }
    { c->r[31] = 0x089838a4u; mem_w8(ram, c->r[30] + 0x0000002du, c->r[2]); func_0896a3c0(c, ram); }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[2] = ((s32)c->r[3] < (s32)c->r[2]) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_089838d8; }
    { c->r[31] = 0x089838c0u; func_0896a3e4(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    { int _c = (c->r[2] == c->r[3]); if (_c) goto L_089838d8; }
    { goto L_08983c30; }
L_089838d8:
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[30] + 0x0000002cu);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[30] + 0x0000002du);
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_08983c30; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x00000014u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000ac8u;
    { c->r[31] = 0x08983904u; c->r[5] = c->r[2] + 0u; func_089cb820(c, ram); }
    mem_w32(ram, c->r[30] + 0x0000001cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    { int _c = (c->r[2] != 0u); if (_c) goto L_08983c30; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[3] = c->r[2] << 1;
    c->r[2] = 0x08ab0000u;
    c->r[2] = c->r[2] + 0xffff9180u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000001u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_08983c30; }
    c->r[2] = mem_r8(ram, c->r[30] + 0x00000020u);
    c->r[1] = 0x08ab0000u;
    mem_w8(ram, c->r[1] + 0xffff9218u, c->r[2]);
    c->r[2] = 0u + 0x00000002u;
    c->r[1] = 0x08ab0000u;
    mem_w8(ram, c->r[1] + 0xffff9219u, c->r[2]);
    c->r[2] = mem_r8(ram, c->r[30] + 0x00000020u);
    c->r[1] = 0x08ab0000u;
    mem_w8(ram, c->r[1] + 0xffff923cu, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0u + 0x00000013u;
    { mem_w8(ram, c->r[3] + 0x0000000eu, c->r[2]); goto L_08983c30; }
L_08983968:
    c->r[4] = 0x08a70000u;
    c->r[4] = c->r[4] + 0xffffb34cu;
    c->r[5] = 0u + 0u;
    c->r[6] = 0u + 0u;
    { c->r[31] = 0x08983980u; c->r[7] = 0u + 0u; func_089d87d4(c, ram); }
    c->r[16] = c->r[2] + 0u;
    c->r[4] = 0x08a70000u;
    { c->r[31] = 0x08983990u; c->r[4] = c->r[4] + 0xffffb34cu; func_0880d238(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = mem_r32(ram, c->r[16] + 0x00000004u);
    c->r[2] = c->r[3] & c->r[2];
    c->r[2] = c->r[2] & 0x0080u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_08983a10; }
    c->r[1] = 0x08ab0000u;
    mem_w16(ram, c->r[1] + 0xffff923eu, 0u);
    c->r[2] = 0x08ab0000u;
    c->r[2] = mem_r8(ram, c->r[2] + 0xffff923au);
    c->r[2] = c->r[2] + 0xffffffffu;
    c->r[1] = 0x08ab0000u;
    mem_w8(ram, c->r[1] + 0xffff923au, c->r[2]);
    c->r[2] = 0x08ab0000u;
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0xffff923au);
    { int _c = ((s32)c->r[2] >= 0); if (_c) goto L_089839e0; }
    c->r[2] = 0u + 0x00000003u;
    c->r[1] = 0x08ab0000u;
    mem_w8(ram, c->r[1] + 0xffff923au, c->r[2]);
L_089839e0:
    { c->r[31] = 0x089839e8u; func_08925598(c, ram); }
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0xffffc930u;
    c->r[5] = 0x04000000u;
    c->r[5] = c->r[5] | 0x0001u;
    c->r[6] = 0u + 0u;
    c->r[7] = 0u + 0u;
    { c->r[31] = 0x08983a08u; c->r[8] = 0u + 0u; func_089f6924(c, ram); }
    { goto L_08983c30; }
L_08983a10:
    c->r[4] = 0x08a70000u;
    c->r[4] = c->r[4] + 0xffffb34cu;
    c->r[5] = 0u + 0u;
    c->r[6] = 0u + 0u;
    { c->r[31] = 0x08983a28u; c->r[7] = 0u + 0u; func_089d87d4(c, ram); }
    c->r[16] = c->r[2] + 0u;
    c->r[4] = 0x08a70000u;
    { c->r[31] = 0x08983a38u; c->r[4] = c->r[4] + 0xffffb34cu; func_0880d238(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = mem_r32(ram, c->r[16] + 0x00000004u);
    c->r[2] = c->r[3] & c->r[2];
    c->r[2] = c->r[2] & 0x0020u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_08983ab8; }
    c->r[1] = 0x08ab0000u;
    mem_w16(ram, c->r[1] + 0xffff923eu, 0u);
    c->r[2] = 0x08ab0000u;
    c->r[2] = mem_r8(ram, c->r[2] + 0xffff923au);
    c->r[2] = c->r[2] + 0x00000001u;
    c->r[1] = 0x08ab0000u;
    mem_w8(ram, c->r[1] + 0xffff923au, c->r[2]);
    c->r[2] = 0x08ab0000u;
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0xffff923au);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000004u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_08983a88; }
    c->r[1] = 0x08ab0000u;
    mem_w8(ram, c->r[1] + 0xffff923au, 0u);
L_08983a88:
    { c->r[31] = 0x08983a90u; func_08925598(c, ram); }
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0xffffc930u;
    c->r[5] = 0x04000000u;
    c->r[5] = c->r[5] | 0x0001u;
    c->r[6] = 0u + 0u;
    c->r[7] = 0u + 0u;
    { c->r[31] = 0x08983ab0u; c->r[8] = 0u + 0u; func_089f6924(c, ram); }
    { goto L_08983c30; }
L_08983ab8:
    c->r[4] = 0x08a70000u;
    c->r[4] = c->r[4] + 0xffffb34cu;
    c->r[5] = 0u + 0u;
    c->r[6] = 0u + 0u;
    { c->r[31] = 0x08983ad0u; c->r[7] = 0u + 0u; func_089d87d4(c, ram); }
    c->r[16] = c->r[2] + 0u;
    c->r[4] = 0x08a70000u;
    { c->r[31] = 0x08983ae0u; c->r[4] = c->r[4] + 0xffffb34cu; func_0880d238(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = mem_r32(ram, c->r[16] + 0x00000004u);
    c->r[2] = c->r[3] & c->r[2];
    c->r[2] = c->r[2] & 0x0010u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_08983b78; }
    { c->r[31] = 0x08983b00u; func_089794c4(c, ram); }
    c->r[3] = mem_r8(ram, c->r[2] + 0x00000001u);
    c->r[2] = 0u + 0x00000001u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_08983c30; }
    c->r[1] = 0x08ab0000u;
    mem_w16(ram, c->r[1] + 0xffff923eu, 0u);
    c->r[2] = 0x08ab0000u;
    c->r[2] = mem_r8(ram, c->r[2] + 0xffff923bu);
    c->r[2] = c->r[2] + 0xffffffffu;
    c->r[1] = 0x08ab0000u;
    mem_w8(ram, c->r[1] + 0xffff923bu, c->r[2]);
    c->r[2] = 0x08ab0000u;
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0xffff923bu);
    { int _c = ((s32)c->r[2] >= 0); if (_c) goto L_08983b48; }
    c->r[2] = 0u + 0x00000001u;
    c->r[1] = 0x08ab0000u;
    mem_w8(ram, c->r[1] + 0xffff923bu, c->r[2]);
L_08983b48:
    { c->r[31] = 0x08983b50u; func_08925598(c, ram); }
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0xffffc930u;
    c->r[5] = 0x04000000u;
    c->r[5] = c->r[5] | 0x0001u;
    c->r[6] = 0u + 0u;
    c->r[7] = 0u + 0u;
    { c->r[31] = 0x08983b70u; c->r[8] = 0u + 0u; func_089f6924(c, ram); }
    { goto L_08983c30; }
L_08983b78:
    c->r[4] = 0x08a70000u;
    c->r[4] = c->r[4] + 0xffffb34cu;
    c->r[5] = 0u + 0u;
    c->r[6] = 0u + 0u;
    { c->r[31] = 0x08983b90u; c->r[7] = 0u + 0u; func_089d87d4(c, ram); }
    c->r[16] = c->r[2] + 0u;
    c->r[4] = 0x08a70000u;
    { c->r[31] = 0x08983ba0u; c->r[4] = c->r[4] + 0xffffb34cu; func_0880d238(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = mem_r32(ram, c->r[16] + 0x00000004u);
    c->r[2] = c->r[3] & c->r[2];
    c->r[2] = c->r[2] & 0x0040u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_08983c30; }
    { c->r[31] = 0x08983bc0u; func_089794c4(c, ram); }
    c->r[3] = mem_r8(ram, c->r[2] + 0x00000001u);
    c->r[2] = 0u + 0x00000001u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_08983c30; }
    c->r[1] = 0x08ab0000u;
    mem_w16(ram, c->r[1] + 0xffff923eu, 0u);
    c->r[2] = 0x08ab0000u;
    c->r[2] = mem_r8(ram, c->r[2] + 0xffff923bu);
    c->r[2] = c->r[2] + 0x00000001u;
    c->r[1] = 0x08ab0000u;
    mem_w8(ram, c->r[1] + 0xffff923bu, c->r[2]);
    c->r[2] = 0x08ab0000u;
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0xffff923bu);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000002u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_08983c08; }
    c->r[1] = 0x08ab0000u;
    mem_w8(ram, c->r[1] + 0xffff923bu, 0u);
L_08983c08:
    { c->r[31] = 0x08983c10u; func_08925598(c, ram); }
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0xffffc930u;
    c->r[5] = 0x04000000u;
    c->r[5] = c->r[5] | 0x0001u;
    c->r[6] = 0u + 0u;
    c->r[7] = 0u + 0u;
    { c->r[31] = 0x08983c30u; c->r[8] = 0u + 0u; func_089f6924(c, ram); }
L_08983c30:
    c->r[2] = 0x08ab0000u;
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0xffff923eu);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000096u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_08983c70; }
    c->r[1] = 0x08ab0000u;
    { c->r[31] = 0x08983c50u; mem_w16(ram, c->r[1] + 0xffff923eu, 0u); func_0896a3e4(c, ram); }
    c->r[1] = 0x08ab0000u;
    mem_w8(ram, c->r[1] + 0xffff9218u, c->r[2]);
    c->r[2] = 0u + 0x00000004u;
    c->r[1] = 0x08ab0000u;
    mem_w8(ram, c->r[1] + 0xffff9219u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0u + 0x00000015u;
    mem_w8(ram, c->r[3] + 0x0000000eu, c->r[2]);
L_08983c70:
    c->r[2] = 0x08ab0000u;
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0xffff923eu);
    c->r[2] = ((s32)c->r[2] < (s32)0x0000001fu) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_08983cac; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x0000001cu;
    c->r[3] = 0x08ab0000u;
    c->r[3] = (u32)(s32)(s16)mem_r16(ram, c->r[3] + 0xffff923eu);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x08983ca4u; c->r[6] = c->r[3] + 0u; func_089737f8(c, ram); }
    { goto L_08983cbc; }
L_08983cac:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x0000001cu;
    { c->r[31] = 0x08983cbcu; c->r[4] = c->r[2] + 0u; func_089738a4(c, ram); }
L_08983cbc:
    c->r[2] = 0x08ab0000u;
    c->r[2] = mem_r16(ram, c->r[2] + 0xffff923eu);
    c->r[2] = c->r[2] + 0x00000001u;
    c->r[1] = 0x08ab0000u;
    mem_w16(ram, c->r[1] + 0xffff923eu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = mem_r8(ram, c->r[2] + 0x0000000eu);
    c->r[2] = 0u + 0x00000002u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_08984a0c; }
    c->r[2] = 0x08ab0000u;
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0xffff923bu);
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08ab0000u;
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0xffff923au);
    c->r[2] = c->r[3] + c->r[2];
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0u + 0u;
    { c->r[31] = 0x08983d0cu; c->r[6] = 0u + 0u; func_08974ae8(c, ram); }
    { c->r[31] = 0x08983d14u; func_0896a3e4(c, ram); }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = 0x08ab0000u;
    c->r[5] = c->r[5] + 0xffff9180u;
    c->r[6] = c->r[2] + 0u;
    { c->r[31] = 0x08983d2cu; c->r[7] = 0u + 0u; func_089740f4(c, ram); }
    { goto L_08984a0c; }
L_08983d34:
    c->r[2] = 0x08ab0000u;
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0xffff923cu);
    c->r[3] = c->r[2] << 1;
    c->r[2] = 0x08ab0000u;
    c->r[2] = c->r[2] + 0xffff9180u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[3] = mem_r8(ram, c->r[2] + 0x00000001u);
    c->r[2] = 0u + 0x00000001u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_08983f68; }
    c->r[2] = 0x08ab0000u;
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0xffff923cu);
    c->r[3] = c->r[2] << 1;
    c->r[2] = 0x08ab0000u;
    c->r[2] = c->r[2] + 0xffff9180u;
    c->r[2] = c->r[3] + c->r[2];
    { c->r[31] = 0x08983d7cu; c->r[16] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000000u); func_0896a3e4(c, ram); }
    { int _c = (c->r[16] != c->r[2]); if (_c) goto L_08983f58; }
    c->r[3] = 0x08ab0000u;
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[3] + 0xffff923cu);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08ab0000u;
    c->r[2] = c->r[2] + 0xffff9190u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000000u);
    c->r[1] = 0x08ab0000u;
    mem_w8(ram, c->r[1] + 0xffff923du, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    mem_w8(ram, c->r[2] + 0x00000040u, 0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = c->r[2] + 0x00000004u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000ac8u;
    { c->r[31] = 0x08983dd8u; c->r[5] = c->r[2] + 0u; func_089cb820(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000020u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_08984a0c; }
    c->r[3] = 0x08ab0000u;
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[3] + 0xffff923cu);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08ab0000u;
    c->r[2] = c->r[2] + 0xffff9190u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[4] = 0x08ab0000u;
    c->r[4] = c->r[4] + 0xffff921au;
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x08983e20u; c->r[6] = 0u + 0x0000000cu; func_08a19db8(c, ram); }
    { c->r[31] = 0x08983e28u; func_0896a3e4(c, ram); }
    c->r[5] = c->r[2] + 0u;
    c->r[2] = 0x08ab0000u;
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0xffff923cu);
    c->r[3] = c->r[2] << 1;
    c->r[2] = 0x08ab0000u;
    c->r[2] = c->r[2] + 0xffff9180u;
    c->r[2] = c->r[3] + c->r[2];
    { c->r[31] = 0x08983e4cu; c->r[4] = c->r[2] + 0u; func_08980e68(c, ram); }
    c->r[3] = 0x08ab0000u;
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[3] + 0xffff923cu);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08ab0000u;
    c->r[2] = c->r[2] + 0xffff9190u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[4] = 0x08ab0000u;
    c->r[4] = c->r[4] + 0xffff9228u;
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x08983e84u; c->r[6] = 0u + 0x0000000cu; func_08a19db8(c, ram); }
    c->r[2] = 0x08ab0000u;
    c->r[2] = mem_r8(ram, c->r[2] + 0xffff922cu);
    c->r[2] = c->r[2] & 0x0003u;
    c->r[1] = 0x08ab0000u;
    mem_w8(ram, c->r[1] + 0xffff922cu, c->r[2]);
    c->r[2] = 0x08ab0000u;
    c->r[2] = mem_r8(ram, c->r[2] + 0xffff922du);
    c->r[2] = c->r[2] & 0x0003u;
    c->r[1] = 0x08ab0000u;
    mem_w8(ram, c->r[1] + 0xffff922du, c->r[2]);
    c->r[2] = 0x08ab0000u;
    c->r[2] = mem_r8(ram, c->r[2] + 0xffff922eu);
    c->r[2] = c->r[2] & 0x0003u;
    c->r[1] = 0x08ab0000u;
    mem_w8(ram, c->r[1] + 0xffff922eu, c->r[2]);
    c->r[2] = 0x08ab0000u;
    c->r[2] = mem_r8(ram, c->r[2] + 0xffff922fu);
    c->r[2] = c->r[2] & 0x0003u;
    c->r[1] = 0x08ab0000u;
    mem_w8(ram, c->r[1] + 0xffff922fu, c->r[2]);
    c->r[2] = 0x08ab0000u;
    c->r[2] = mem_r8(ram, c->r[2] + 0xffff9230u);
    c->r[2] = c->r[2] & 0x0003u;
    c->r[1] = 0x08ab0000u;
    mem_w8(ram, c->r[1] + 0xffff9230u, c->r[2]);
    c->r[2] = 0x08ab0000u;
    c->r[2] = mem_r8(ram, c->r[2] + 0xffff9231u);
    c->r[2] = c->r[2] & 0x0003u;
    c->r[1] = 0x08ab0000u;
    mem_w8(ram, c->r[1] + 0xffff9231u, c->r[2]);
    c->r[2] = 0x08ab0000u;
    c->r[2] = mem_r8(ram, c->r[2] + 0xffff9232u);
    c->r[2] = c->r[2] & 0x0003u;
    c->r[1] = 0x08ab0000u;
    mem_w8(ram, c->r[1] + 0xffff9232u, c->r[2]);
    c->r[2] = 0x08ab0000u;
    c->r[2] = mem_r8(ram, c->r[2] + 0xffff9233u);
    c->r[2] = c->r[2] & 0x0003u;
    c->r[1] = 0x08ab0000u;
    mem_w8(ram, c->r[1] + 0xffff9233u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0u + 0x00000001u;
    { c->r[31] = 0x08983f34u; mem_w8(ram, c->r[3] + 0x00000040u, c->r[2]); func_08973e38(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = c->r[2] + 0x00000004u;
    mem_w32(ram, c->r[2] + 0x00000000u, 0u);
    c->r[1] = 0x08ab0000u;
    mem_w8(ram, c->r[1] + 0xffff9227u, 0u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0u + 0x0000000au;
    { mem_w8(ram, c->r[3] + 0x0000000eu, c->r[2]); goto L_08984a0c; }
L_08983f58:
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0u + 0x00000002u;
    { mem_w8(ram, c->r[3] + 0x0000000eu, c->r[2]); goto L_08984a0c; }
L_08983f68:
    c->r[2] = 0x08ab0000u;
    c->r[2] = mem_r8(ram, c->r[2] + 0xffff923cu);
    c->r[1] = 0x08ab0000u;
    mem_w8(ram, c->r[1] + 0xffff9218u, c->r[2]);
    c->r[2] = 0u + 0x00000002u;
    c->r[1] = 0x08ab0000u;
    { mem_w8(ram, c->r[1] + 0xffff9219u, c->r[2]); goto L_08984a0c; }
L_08983f88:
    { c->r[31] = 0x08983f90u; func_08973f98(c, ram); }
    { int _c = (c->r[2] == 0u); if (_c) goto L_08984a0c; }
    c->r[2] = 0x08ab0000u;
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0xffff9227u);
    c->r[1] = 0x08ab0000u;
    c->r[1] = c->r[1] + c->r[2];
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[1] + 0xffff9228u);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000af4u;
    { c->r[31] = 0x08983fbcu; c->r[5] = c->r[2] + 0u; func_0880d438(c, ram); }
    c->r[2] = 0x08ab0000u;
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0xffff9227u);
    c->r[1] = 0x08ab0000u;
    c->r[1] = c->r[1] + c->r[2];
    c->r[2] = mem_r8(ram, c->r[1] + 0xffff922cu);
    c->r[2] = c->r[2] & 0x0003u;
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000af4u;
    { c->r[31] = 0x08983fe4u; c->r[5] = c->r[2] + 0u; func_0880d46c(c, ram); }
    c->r[2] = 0x08ab0000u;
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0xffff9227u);
    c->r[1] = 0x08ab0000u;
    c->r[1] = c->r[1] + c->r[2];
    c->r[2] = mem_r8(ram, c->r[1] + 0xffff9230u);
    c->r[2] = c->r[2] & 0x0003u;
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000af4u;
    { c->r[31] = 0x0898400cu; c->r[5] = c->r[2] + 0u; func_0880d4c8(c, ram); }
    c->r[2] = 0x08a50000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0xffff8fb4u);
    mem_w32(ram, c->r[30] + 0x00000030u, c->r[2]);
    c->r[2] = 0x08a50000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0xffff8fb8u);
    mem_w32(ram, c->r[30] + 0x00000034u, c->r[2]);
    c->r[16] = 0x08ab0000u;
    { c->r[31] = 0x08984030u; c->r[16] = (u32)(s32)(s8)mem_r8(ram, c->r[16] + 0xffff923cu); func_0896a3c0(c, ram); }
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[2] = ((s32)c->r[16] < (s32)c->r[2]) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_08984048; }
    c->r[2] = 0u + 0x00000001u;
    mem_w32(ram, c->r[30] + 0x00000034u, c->r[2]);
L_08984048:
    c->r[2] = c->r[30] + 0x00000030u;
    c->r[4] = 0u + 0x0000000bu;
    c->r[5] = 0u + 0u;
    c->r[6] = 0u + 0u;
    c->r[7] = 0u + 0u;
    c->r[8] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x08984068u; c->r[9] = c->r[2] + 0u; func_089c6bec(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000020u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_0898409c; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[16] = c->r[2] + 0x00000004u;
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000ac8u;
    { c->r[31] = 0x08984090u; c->r[5] = mem_r32(ram, c->r[30] + 0x00000020u); func_089cb780(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000040u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000040u);
    mem_w32(ram, c->r[16] + 0x00000000u, c->r[2]);
L_0898409c:
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0u + 0x0000000bu;
    { mem_w8(ram, c->r[3] + 0x0000000eu, c->r[2]); goto L_08984a0c; }
L_089840ac:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = c->r[2] + 0x00000004u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000ac8u;
    { c->r[31] = 0x089840c8u; c->r[5] = c->r[2] + 0u; func_089cb820(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000020u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_08984210; }
    c->r[16] = 0x08ab0000u;
    c->r[16] = (u32)(s32)(s8)mem_r8(ram, c->r[16] + 0xffff9227u);
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x089840ecu; c->r[4] = c->r[4] + 0x00000af4u; func_0880d410(c, ram); }
    c->r[1] = 0x08ab0000u;
    c->r[1] = c->r[1] + c->r[16];
    mem_w8(ram, c->r[1] + 0xffff9228u, c->r[2]);
    c->r[16] = 0x08ab0000u;
    c->r[16] = (u32)(s32)(s8)mem_r8(ram, c->r[16] + 0xffff9227u);
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x0898410cu; c->r[4] = c->r[4] + 0x00000af4u; func_08813c28(c, ram); }
    c->r[1] = 0x08ab0000u;
    c->r[1] = c->r[1] + c->r[16];
    mem_w8(ram, c->r[1] + 0xffff922cu, c->r[2]);
    c->r[16] = 0x08ab0000u;
    c->r[16] = (u32)(s32)(s8)mem_r8(ram, c->r[16] + 0xffff9227u);
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x0898412cu; c->r[4] = c->r[4] + 0x00000af4u; func_08813c50(c, ram); }
    c->r[1] = 0x08ab0000u;
    c->r[1] = c->r[1] + c->r[16];
    mem_w8(ram, c->r[1] + 0xffff9230u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000040u);
    c->r[2] = 0u + 0xffffffffu;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_089841a8; }
    c->r[2] = 0x08ab0000u;
    c->r[2] = mem_r8(ram, c->r[2] + 0xffff9227u);
    c->r[2] = c->r[2] + 0xffffffffu;
    c->r[1] = 0x08ab0000u;
    mem_w8(ram, c->r[1] + 0xffff9227u, c->r[2]);
    c->r[2] = 0x08ab0000u;
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0xffff9227u);
    { int _c = ((s32)c->r[2] >= 0); if (_c) goto L_0898418c; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0u + 0xffffffffu;
    mem_w8(ram, c->r[3] + 0x00000040u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0u + 0x00000003u;
    { mem_w8(ram, c->r[3] + 0x0000000eu, c->r[2]); goto L_08984a0c; }
L_0898418c:
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0u + 0x00000001u;
    mem_w8(ram, c->r[3] + 0x00000040u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0u + 0x0000000au;
    { mem_w8(ram, c->r[3] + 0x0000000eu, c->r[2]); goto L_08984a0c; }
L_089841a8:
    c->r[2] = 0x08ab0000u;
    c->r[2] = mem_r8(ram, c->r[2] + 0xffff9227u);
    c->r[2] = c->r[2] + 0x00000001u;
    c->r[1] = 0x08ab0000u;
    mem_w8(ram, c->r[1] + 0xffff9227u, c->r[2]);
    c->r[3] = 0x08ab0000u;
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[3] + 0xffff9227u);
    c->r[2] = 0x08ab0000u;
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0xffff9226u);
    c->r[2] = ((s32)c->r[3] < (s32)c->r[2]) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_089841f4; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0u + 0x00000001u;
    mem_w8(ram, c->r[3] + 0x00000040u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0u + 0x00000003u;
    { mem_w8(ram, c->r[3] + 0x0000000eu, c->r[2]); goto L_08984a0c; }
L_089841f4:
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0u + 0x00000001u;
    mem_w8(ram, c->r[3] + 0x00000040u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0u + 0x0000000au;
    { mem_w8(ram, c->r[3] + 0x0000000eu, c->r[2]); goto L_08984a0c; }
L_08984210:
    c->r[2] = 0x08ab0000u;
    c->r[2] = mem_r8(ram, c->r[2] + 0xffff923cu);
    c->r[1] = 0x08ab0000u;
    mem_w8(ram, c->r[1] + 0xffff9218u, c->r[2]);
    c->r[2] = 0u + 0x00000001u;
    c->r[1] = 0x08ab0000u;
    { mem_w8(ram, c->r[1] + 0xffff9219u, c->r[2]); goto L_08984a0c; }
L_08984230:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000040u);
    c->r[2] = 0u + 0x00000001u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_089844fc; }
    c->r[2] = 0x08ab0000u;
    c->r[2] = mem_r8(ram, c->r[2] + 0xffff923cu);
    c->r[1] = 0x08ab0000u;
    mem_w8(ram, c->r[1] + 0xffff9218u, c->r[2]);
    c->r[2] = 0u + 0x00000003u;
    c->r[1] = 0x08ab0000u;
    mem_w8(ram, c->r[1] + 0xffff9219u, c->r[2]);
    c->r[4] = 0x08ab0000u;
    c->r[4] = c->r[4] + 0xffff921au;
    c->r[5] = 0x08ab0000u;
    c->r[5] = c->r[5] + 0xffff9228u;
    { c->r[31] = 0x08984278u; c->r[6] = 0u + 0x0000000cu; func_08a19db8(c, ram); }
    c->r[16] = 0x08ab0000u;
    { c->r[31] = 0x08984284u; c->r[16] = (u32)(s32)(s8)mem_r8(ram, c->r[16] + 0xffff923cu); func_0896a3e4(c, ram); }
    { int _c = (c->r[16] != c->r[2]); if (_c) goto L_089844d0; }
    mem_w32(ram, c->r[30] + 0x00000020u, 0u);
L_08984290:
    c->r[2] = 0x08ab0000u;
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0xffff9226u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[2] = ((s32)c->r[3] < (s32)c->r[2]) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_089842b0; }
    { goto L_089844d0; }
L_089842b0:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[2] = 0x08ab0000u;
    c->r[2] = c->r[2] + 0xffff9218u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000002u);
    mem_w32(ram, c->r[30] + 0x0000001cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000018u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_089844c0; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = ((s32)c->r[2] < (s32)0x0000001fu) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_089844c0; }
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000af4u;
    c->r[5] = mem_r32(ram, c->r[30] + 0x0000001cu);
    { c->r[31] = 0x089842fcu; c->r[6] = 0u + 0x00000002u; func_08985d08(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000044u, c->r[2]);
    c->r[2] = 0u + 0x00000004u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000044u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_08984380; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000044u);
    c->r[2] = ((s32)c->r[3] < (s32)0x00000005u) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_08984338; }
    c->r[2] = 0u + 0x00000002u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000044u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_08984350; }
    { goto L_089843dc; }
L_08984338:
    c->r[2] = 0u + 0x0000000cu;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000044u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_089843b0; }
    { goto L_089843dc; }
L_08984350:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[2] = 0x08ab0000u;
    c->r[2] = c->r[2] + 0xffff9218u;
    c->r[4] = c->r[3] + c->r[2];
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[2] = 0x08ab0000u;
    c->r[2] = c->r[2] + 0xffff9218u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000006u);
    c->r[2] = c->r[2] | 0x0010u;
    { mem_w8(ram, c->r[4] + 0x00000006u, c->r[2]); goto L_089843dc; }
L_08984380:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[2] = 0x08ab0000u;
    c->r[2] = c->r[2] + 0xffff9218u;
    c->r[4] = c->r[3] + c->r[2];
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[2] = 0x08ab0000u;
    c->r[2] = c->r[2] + 0xffff9218u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000006u);
    c->r[2] = c->r[2] | 0x0020u;
    { mem_w8(ram, c->r[4] + 0x00000006u, c->r[2]); goto L_089843dc; }
L_089843b0:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[2] = 0x08ab0000u;
    c->r[2] = c->r[2] + 0xffff9218u;
    c->r[4] = c->r[3] + c->r[2];
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[2] = 0x08ab0000u;
    c->r[2] = c->r[2] + 0xffff9218u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000006u);
    c->r[2] = c->r[2] | 0x0030u;
    mem_w8(ram, c->r[4] + 0x00000006u, c->r[2]);
L_089843dc:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[2] = 0x08ab0000u;
    c->r[2] = c->r[2] + 0xffff9218u;
    c->r[17] = c->r[3] + c->r[2];
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[2] = 0x08ab0000u;
    c->r[2] = c->r[2] + 0xffff9218u;
    c->r[16] = c->r[3] + c->r[2];
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000af4u;
    c->r[5] = mem_r32(ram, c->r[30] + 0x0000001cu);
    { c->r[31] = 0x08984410u; c->r[6] = 0u + 0x00000003u; func_08985d08(c, ram); }
    c->r[2] = c->r[2] << 4;
    c->r[3] = mem_r8(ram, c->r[16] + 0x0000000au);
    c->r[2] = c->r[3] | c->r[2];
    mem_w8(ram, c->r[17] + 0x0000000au, c->r[2]);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000af4u;
    c->r[5] = mem_r32(ram, c->r[30] + 0x0000001cu);
    { c->r[31] = 0x08984434u; c->r[6] = 0u + 0x00000004u; func_08985d08(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000048u, c->r[2]);
    c->r[2] = 0u + 0x00000007u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000048u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_08984460; }
    c->r[2] = 0u + 0x0000000cu;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000048u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_08984490; }
    { goto L_089844c0; }
L_08984460:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[2] = 0x08ab0000u;
    c->r[2] = c->r[2] + 0xffff9218u;
    c->r[4] = c->r[3] + c->r[2];
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[2] = 0x08ab0000u;
    c->r[2] = c->r[2] + 0xffff9218u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000006u);
    c->r[2] = c->r[2] | 0x0040u;
    { mem_w8(ram, c->r[4] + 0x00000006u, c->r[2]); goto L_089844c0; }
L_08984490:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[2] = 0x08ab0000u;
    c->r[2] = c->r[2] + 0xffff9218u;
    c->r[4] = c->r[3] + c->r[2];
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[2] = 0x08ab0000u;
    c->r[2] = c->r[2] + 0xffff9218u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[3] = 0u + 0xffffff80u;
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000006u);
    c->r[2] = c->r[2] | c->r[3];
    mem_w8(ram, c->r[4] + 0x00000006u, c->r[2]);
L_089844c0:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000020u, c->r[2]); goto L_08984290; }
L_089844d0:
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0u + 0x00000001u;
    mem_w8(ram, c->r[3] + 0x00000040u, c->r[2]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = 0x08ab0000u;
    { c->r[31] = 0x089844ecu; c->r[5] = c->r[5] + 0xffff91f0u; func_08973bdc(c, ram); }
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0u + 0x00000014u;
    { mem_w8(ram, c->r[3] + 0x0000000eu, c->r[2]); goto L_08984a0c; }
L_089844fc:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000040u);
    c->r[2] = 0u + 0xffffffffu;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_08984558; }
    c->r[2] = 0x08ab0000u;
    c->r[2] = mem_r8(ram, c->r[2] + 0xffff923cu);
    c->r[1] = 0x08ab0000u;
    mem_w8(ram, c->r[1] + 0xffff9218u, c->r[2]);
    c->r[2] = 0u + 0x00000003u;
    c->r[1] = 0x08ab0000u;
    mem_w8(ram, c->r[1] + 0xffff9219u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0u + 0x00000001u;
    mem_w8(ram, c->r[3] + 0x00000040u, c->r[2]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = 0x08ab0000u;
    { c->r[31] = 0x08984548u; c->r[5] = c->r[5] + 0xffff91f0u; func_08973bdc(c, ram); }
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0u + 0x00000014u;
    { mem_w8(ram, c->r[3] + 0x0000000eu, c->r[2]); goto L_08984a0c; }
L_08984558:
    c->r[2] = 0x08ab0000u;
    c->r[2] = mem_r8(ram, c->r[2] + 0xffff923cu);
    c->r[1] = 0x08ab0000u;
    mem_w8(ram, c->r[1] + 0xffff9218u, c->r[2]);
    c->r[2] = 0u + 0x00000001u;
    c->r[1] = 0x08ab0000u;
    mem_w8(ram, c->r[1] + 0xffff9219u, c->r[2]);
    c->r[2] = 0x08ab0000u;
    c->r[2] = mem_r8(ram, c->r[2] + 0xffff923du);
    c->r[1] = 0x08ab0000u;
    { mem_w8(ram, c->r[1] + 0xffff921au, c->r[2]); goto L_08984a0c; }
L_08984588:
    mem_w32(ram, c->r[30] + 0x00000020u, 0u);
    c->r[2] = 0x08ab0000u;
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0xffff923cu);
    c->r[3] = c->r[2] << 1;
    c->r[2] = 0x08ab0000u;
    c->r[2] = c->r[2] + 0xffff9180u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[3] = mem_r8(ram, c->r[2] + 0x00000001u);
    c->r[2] = 0u + 0x00000001u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_08984600; }
    c->r[2] = 0x08ab0000u;
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0xffff923cu);
    c->r[3] = c->r[2] << 1;
    c->r[2] = 0x08ab0000u;
    c->r[2] = c->r[2] + 0xffff9180u;
    c->r[2] = c->r[3] + c->r[2];
    { c->r[31] = 0x089845d4u; c->r[16] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000000u); func_0896a3e4(c, ram); }
    { int _c = (c->r[16] != c->r[2]); if (_c) goto L_08984600; }
    c->r[2] = 0x08ab0000u;
    c->r[2] = mem_r8(ram, c->r[2] + 0xffff923cu);
    c->r[1] = 0x08ab0000u;
    mem_w8(ram, c->r[1] + 0xffff9218u, c->r[2]);
    c->r[2] = 0u + 0x00000003u;
    c->r[1] = 0x08ab0000u;
    mem_w8(ram, c->r[1] + 0xffff9219u, c->r[2]);
    c->r[2] = 0u + 0x00000001u;
    mem_w32(ram, c->r[30] + 0x00000020u, c->r[2]);
L_08984600:
    { c->r[31] = 0x08984608u; func_08973f28(c, ram); }
    { int _c = (c->r[2] == 0u); if (_c) goto L_08984a0c; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_08984a0c; }
    { c->r[31] = 0x08984624u; func_0896a3e4(c, ram); }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = 0x08ab0000u;
    c->r[5] = c->r[5] + 0xffff9180u;
    c->r[6] = c->r[2] + 0u;
    { c->r[31] = 0x0898463cu; c->r[7] = 0u + 0u; func_089740f4(c, ram); }
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0u + 0x00000002u;
    { mem_w8(ram, c->r[3] + 0x0000000eu, c->r[2]); goto L_08984a0c; }
L_0898464c:
    { c->r[31] = 0x08984654u; func_0896a3e4(c, ram); }
    c->r[3] = c->r[2] << 1;
    c->r[2] = 0x08ab0000u;
    c->r[2] = c->r[2] + 0xffff9180u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[3] = mem_r8(ram, c->r[2] + 0x00000001u);
    c->r[2] = 0u + 0x00000005u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_08984684; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0u + 0x00000004u;
    { mem_w8(ram, c->r[3] + 0x0000000eu, c->r[2]); goto L_08984a0c; }
L_08984684:
    { c->r[31] = 0x0898468cu; func_0896a3e4(c, ram); }
    c->r[1] = 0x08ab0000u;
    mem_w8(ram, c->r[1] + 0xffff9218u, c->r[2]);
    c->r[2] = 0u + 0x00000004u;
    c->r[1] = 0x08ab0000u;
    { mem_w8(ram, c->r[1] + 0xffff9219u, c->r[2]); goto L_08984a0c; }
L_089846a4:
    c->r[2] = 0u + 0x00000001u;
    mem_w32(ram, c->r[30] + 0x00000020u, c->r[2]);
    mem_w32(ram, c->r[30] + 0x0000001cu, 0u);
L_089846b0:
    { c->r[31] = 0x089846b8u; func_0896a3c0(c, ram); }
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[2] = ((s32)c->r[3] < (s32)c->r[2]) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_089846d4; }
    { goto L_08984730; }
L_089846d4:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[3] = c->r[2] << 1;
    c->r[2] = 0x08ab0000u;
    c->r[2] = c->r[2] + 0xffff9180u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[3] = mem_r8(ram, c->r[2] + 0x00000001u);
    c->r[2] = 0u + 0x00000005u;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_08984720; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[3] = c->r[2] << 1;
    c->r[2] = 0x08ab0000u;
    c->r[2] = c->r[2] + 0xffff9180u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[3] = mem_r8(ram, c->r[2] + 0x00000001u);
    c->r[2] = 0u + 0x00000006u;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_08984720; }
    mem_w32(ram, c->r[30] + 0x00000020u, 0u);
L_08984720:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x0000001cu, c->r[2]); goto L_089846b0; }
L_08984730:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[2] = 0u + 0x00000001u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_08984780; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0u + 0xffffff80u;
    mem_w8(ram, c->r[3] + 0x00000010u, c->r[2]);
    c->r[4] = 0u + 0xffffffffu;
    c->r[5] = 0u + 0u;
    { c->r[31] = 0x0898475cu; c->r[6] = 0u + 0u; func_08974ae8(c, ram); }
    { c->r[31] = 0x08984764u; func_0896a284(c, ram); }
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x08984770u; c->r[5] = 0u + 0xffffffffu; func_0896ccf0(c, ram); }
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0u + 0x00000016u;
    { mem_w8(ram, c->r[3] + 0x0000000eu, c->r[2]); goto L_089847d8; }
L_08984780:
    { c->r[31] = 0x08984788u; c->r[4] = 0u + 0x00000001u; func_089c5f10(c, ram); }
    { int _c = (c->r[2] == 0u); if (_c) goto L_089847bc; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    { c->r[31] = 0x0898479cu; mem_w8(ram, c->r[2] + 0x00000010u, 0u); func_0896a3e4(c, ram); }
    c->r[1] = 0x08ab0000u;
    mem_w8(ram, c->r[1] + 0xffff9218u, c->r[2]);
    c->r[1] = 0x08ab0000u;
    mem_w8(ram, c->r[1] + 0xffff9219u, 0u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0u + 0x00000002u;
    { mem_w8(ram, c->r[3] + 0x0000000eu, c->r[2]); goto L_089847d8; }
L_089847bc:
    { c->r[31] = 0x089847c4u; func_0896a3e4(c, ram); }
    c->r[1] = 0x08ab0000u;
    mem_w8(ram, c->r[1] + 0xffff9218u, c->r[2]);
    c->r[2] = 0u + 0x00000005u;
    c->r[1] = 0x08ab0000u;
    mem_w8(ram, c->r[1] + 0xffff9219u, c->r[2]);
L_089847d8:
    { c->r[31] = 0x089847e0u; func_0896a3e4(c, ram); }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = 0x08ab0000u;
    c->r[5] = c->r[5] + 0xffff9180u;
    c->r[6] = c->r[2] + 0u;
    { c->r[31] = 0x089847f8u; c->r[7] = 0u + 0u; func_089740f4(c, ram); }
    { goto L_08984a0c; }
L_08984800:
    { c->r[31] = 0x08984808u; func_0896a284(c, ram); }
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0u + 0x00000008u;
    c->r[6] = 0u + 0x00000003u;
    { c->r[31] = 0x0898481cu; c->r[7] = 0u + 0x00000004u; func_0896d22c(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000020u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    mem_w32(ram, c->r[30] + 0x0000004cu, c->r[2]);
    c->r[2] = 0u + 0x00000001u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000004cu);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_08984878; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000004cu);
    c->r[2] = ((s32)c->r[3] < (s32)0x00000002u) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_08984860; }
    c->r[2] = 0u + 0xffffffffu;
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000004cu);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_089848d0; }
    { goto L_089848f0; }
L_08984860:
    c->r[2] = 0u + 0x00000002u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000004cu);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_089848a4; }
    { goto L_089848f0; }
L_08984878:
    { c->r[31] = 0x08984880u; func_08973e38(c, ram); }
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0u + 0x00000006u;
    mem_w32(ram, c->r[3] + 0x00000004u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    mem_w8(ram, c->r[2] + 0x00000010u, 0u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0u + 0x00000017u;
    { mem_w8(ram, c->r[3] + 0x0000000eu, c->r[2]); goto L_08984a0c; }
L_089848a4:
    { c->r[31] = 0x089848acu; func_0896a284(c, ram); }
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x089848b8u; c->r[5] = 0u + 0x00000096u; func_0896ccf0(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    mem_w8(ram, c->r[2] + 0x00000010u, 0u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0u + 0x00000002u;
    { mem_w8(ram, c->r[3] + 0x0000000eu, c->r[2]); goto L_08984a0c; }
L_089848d0:
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0u + 0x00000003u;
    mem_w32(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x089848e8u; c->r[5] = 0u + 0x00000033u; func_0896a7b8(c, ram); }
    { goto L_08984a0c; }
L_089848f0:
    { c->r[31] = 0x089848f8u; func_0896a3e4(c, ram); }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = 0x08ab0000u;
    c->r[5] = c->r[5] + 0xffff9180u;
    c->r[6] = c->r[2] + 0u;
    { c->r[31] = 0x08984910u; c->r[7] = 0u + 0u; func_089740f4(c, ram); }
    { goto L_08984a0c; }
L_08984918:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000004u);
    { int _c = ((s32)c->r[2] > 0); if (_c) goto L_089849dc; }
    { c->r[31] = 0x08984930u; func_0896a284(c, ram); }
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x0898493cu; c->r[5] = 0u + 0xffffffffu; func_0896ccf0(c, ram); }
    { c->r[31] = 0x08984944u; func_089794c4(c, ram); }
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000006u);
    mem_w32(ram, c->r[30] + 0x00000050u, c->r[2]);
    c->r[2] = 0u + 0x00000001u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000050u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_089849b4; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000050u);
    c->r[2] = ((s32)c->r[3] < (s32)0x00000002u) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_08984980; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000050u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_08984998; }
    { goto L_08984a0c; }
L_08984980:
    c->r[2] = 0u + 0x00000002u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000050u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_089849c8; }
    { goto L_08984a0c; }
L_08984998:
    { c->r[31] = 0x089849a0u; func_08986220(c, ram); }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x089849acu; c->r[5] = 0u + 0x0000001eu; func_0896a7b8(c, ram); }
    { goto L_08984a0c; }
L_089849b4:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x089849c0u; c->r[5] = 0u + 0x0000001au; func_0896a7b8(c, ram); }
    { goto L_08984a0c; }
L_089849c8:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x089849d4u; c->r[5] = 0u + 0x0000001cu; func_0896a7b8(c, ram); }
    { goto L_08984a0c; }
L_089849dc:
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000004u);
    c->r[2] = c->r[2] + 0xffffffffu;
    { mem_w32(ram, c->r[3] + 0x00000004u, c->r[2]); goto L_08984a0c; }
L_089849f4:
    { c->r[31] = 0x089849fcu; func_08973f98(c, ram); }
    { int _c = (c->r[2] == 0u); if (_c) goto L_08984a0c; }
    { c->r[31] = 0x08984a0cu; c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u); func_0896a824(c, ram); }
L_08984a0c:
    { c->r[31] = 0x08984a14u; func_0896a284(c, ram); }
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = mem_r8(ram, c->r[3] + 0x00000010u);
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0u + 0x00000008u;
    c->r[6] = c->r[3] + 0u;
    c->r[7] = 0u + 0x0000000eu;
    c->r[8] = 0x08ab0000u;
    { c->r[31] = 0x08984a38u; c->r[8] = c->r[8] + 0xffff9218u; func_0896cc50(c, ram); }
    { c->r[31] = 0x08984a40u; func_08974fb4(c, ram); }
    { goto L_08984cb4; }
L_08984a48:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r8(ram, c->r[2] + 0x0000000eu);
    mem_w32(ram, c->r[30] + 0x00000058u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000058u);
    c->r[2] = (c->r[3] < 0x0000002cu) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_08984cb4; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000058u);
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08a50000u;
    c->r[2] = c->r[2] + 0xffff91e8u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    { u32 _t = c->r[2]; switch (_t) { case 0x08983398u: goto L_08983398; case 0x089835c0u: goto L_089835c0; case 0x089837a8u: goto L_089837a8; case 0x089837c8u: goto L_089837c8; case 0x08983d34u: goto L_08983d34; case 0x08983f88u: goto L_08983f88; case 0x089840acu: goto L_089840ac; case 0x08984230u: goto L_08984230; case 0x08984588u: goto L_08984588; case 0x0898464cu: goto L_0898464c; case 0x089846a4u: goto L_089846a4; case 0x08984800u: goto L_08984800; case 0x08984918u: goto L_08984918; case 0x089849f4u: goto L_089849f4; case 0x08984a0cu: goto L_08984a0c; case 0x08984a84u: goto L_08984a84; case 0x08984b3cu: goto L_08984b3c; case 0x08984b7cu: goto L_08984b7c; case 0x08984bccu: goto L_08984bcc; case 0x08984c1cu: goto L_08984c1c; case 0x08984cb4u: goto L_08984cb4; default: recomp_trap_unknown_indirect(c, ram, 0x08984a7cu, _t); return; } }
L_08984a84:
    c->r[1] = 0x08a50000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffff9130u);
    c->r[4] = 0x08a70000u;
    c->r[4] = c->r[4] + 0xffffb640u;
    { c->r[31] = 0x08984a9cu; c->f[12] = c->f[0]; func_089f1210(c, ram); }
    c->r[4] = 0x08a50000u;
    c->r[4] = c->r[4] + 0xffff8fbcu;
    c->r[5] = 0u + 0x00001540u;
    { c->r[31] = 0x08984ab0u; c->r[6] = 0u + 0u; func_08928cb8(c, ram); }
    c->r[4] = 0x08a70000u;
    { c->r[31] = 0x08984abcu; c->r[4] = c->r[4] + 0xffffb640u; func_089f147c(c, ram); }
    c->r[1] = 0x08a50000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffff9134u);
    c->r[4] = 0x08a70000u;
    c->r[4] = c->r[4] + 0xffffb640u;
    { c->r[31] = 0x08984ad4u; c->f[12] = c->f[0]; func_089f1210(c, ram); }
    c->r[3] = 0x08ab0000u;
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[3] + 0xffff923au);
    c->r[2] = 0u + 0x00000073u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[2] = c->lo;
    c->r[2] = c->r[2] + 0x00000043u;
    mem_w32(ram, c->r[30] + 0x00000020u, c->r[2]);
    c->r[3] = 0x08ab0000u;
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[3] + 0xffff923bu);
    c->r[2] = 0u + 0x00000058u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[2] = c->lo;
    c->r[2] = c->r[2] + 0x00000035u;
    mem_w32(ram, c->r[30] + 0x0000001cu, c->r[2]);
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[30] + 0x00000020u);
    c->r[3] = (u32)(s32)(s16)mem_r16(ram, c->r[30] + 0x0000001cu);
    c->r[4] = c->r[2] + 0u;
    c->r[5] = c->r[3] + 0u;
    c->r[6] = 0x00120000u;
    { c->r[31] = 0x08984b28u; c->r[6] = c->r[6] | 0x0800u; func_0892566c(c, ram); }
    c->r[4] = 0x08a70000u;
    { c->r[31] = 0x08984b34u; c->r[4] = c->r[4] + 0xffffb640u; func_089f147c(c, ram); }
    { goto L_08984cb4; }
L_08984b3c:
    c->r[1] = 0x08a50000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffff9130u);
    c->r[4] = 0x08a70000u;
    c->r[4] = c->r[4] + 0xffffb640u;
    { c->r[31] = 0x08984b54u; c->f[12] = c->f[0]; func_089f1210(c, ram); }
    c->r[4] = 0x08a50000u;
    c->r[4] = c->r[4] + 0xffff8fbcu;
    c->r[5] = 0u + 0u;
    { c->r[31] = 0x08984b68u; c->r[6] = 0u + 0xffffffffu; func_08928cb8(c, ram); }
    c->r[4] = 0x08a70000u;
    { c->r[31] = 0x08984b74u; c->r[4] = c->r[4] + 0xffffb640u; func_089f147c(c, ram); }
    { goto L_08984cb4; }
L_08984b7c:
    c->r[1] = 0x08a50000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffff9130u);
    c->r[4] = 0x08a70000u;
    c->r[4] = c->r[4] + 0xffffb640u;
    { c->r[31] = 0x08984b94u; c->f[12] = c->f[0]; func_089f1210(c, ram); }
    { c->r[31] = 0x08984b9cu; c->r[4] = 0u + 0x00000004u; func_08928c60(c, ram); }
    c->r[4] = 0x08a50000u;
    c->r[4] = c->r[4] + 0xffff8fbcu;
    c->r[5] = 0u + 0x00001504u;
    { c->r[31] = 0x08984bb0u; c->r[6] = 0u + 0u; func_08928cb8(c, ram); }
    { c->r[31] = 0x08984bb8u; c->r[4] = 0u + 0x00000001u; func_08928c60(c, ram); }
    c->r[4] = 0x08a70000u;
    { c->r[31] = 0x08984bc4u; c->r[4] = c->r[4] + 0xffffb640u; func_089f147c(c, ram); }
    { goto L_08984cb4; }
L_08984bcc:
    c->r[1] = 0x08a50000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffff9130u);
    c->r[4] = 0x08a70000u;
    c->r[4] = c->r[4] + 0xffffb640u;
    { c->r[31] = 0x08984be4u; c->f[12] = c->f[0]; func_089f1210(c, ram); }
    { c->r[31] = 0x08984becu; c->r[4] = 0u + 0x00000004u; func_08928c60(c, ram); }
    c->r[4] = 0x08a50000u;
    c->r[4] = c->r[4] + 0xffff8fbcu;
    c->r[5] = 0u + 0x00001584u;
    { c->r[31] = 0x08984c00u; c->r[6] = 0u + 0u; func_08928cb8(c, ram); }
    { c->r[31] = 0x08984c08u; c->r[4] = 0u + 0x00000001u; func_08928c60(c, ram); }
    c->r[4] = 0x08a70000u;
    { c->r[31] = 0x08984c14u; c->r[4] = c->r[4] + 0xffffb640u; func_089f147c(c, ram); }
    { goto L_08984cb4; }
L_08984c1c:
    c->r[1] = 0x08a50000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffff9130u);
    c->r[4] = 0x08a70000u;
    c->r[4] = c->r[4] + 0xffffb640u;
    { c->r[31] = 0x08984c34u; c->f[12] = c->f[0]; func_089f1210(c, ram); }
    c->r[4] = 0x08a50000u;
    c->r[4] = c->r[4] + 0xffff8fbcu;
    c->r[5] = 0u + 0xffffffffu;
    { c->r[31] = 0x08984c48u; c->r[6] = 0u + 0xffffffffu; func_08928cb8(c, ram); }
    c->r[4] = 0x08a70000u;
    { c->r[31] = 0x08984c54u; c->r[4] = c->r[4] + 0xffffb640u; func_089f147c(c, ram); }
    { goto L_08984cb4; }
L_08984c5c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_08984cb4; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    mem_w32(ram, c->r[30] + 0x00000020u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x00000004u);
    c->r[2] = 0u + 0x00000002u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_08984c94; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0u + 0x00000001u;
    { mem_w8(ram, c->r[3] + 0x00000040u, c->r[2]); goto L_08984cb4; }
L_08984c94:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x00000004u);
    c->r[2] = 0u + 0x00000003u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_08984cb4; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0u + 0xffffffffu;
    mem_w8(ram, c->r[3] + 0x00000040u, c->r[2]);
L_08984cb4:
    c->r[2] = 0u + 0u;
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x0000006cu);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000068u);
    c->r[17] = mem_r32(ram, c->r[29] + 0x00000064u);
    c->r[16] = mem_r32(ram, c->r[29] + 0x00000060u);
    { c->r[29] = c->r[29] + 0x00000070u; return; }
    return; /* fell out of func_08983398 */
}

/* func_0898f328  0x0898f328..0x0898ff24  3068 bytes, source=fde */
void func_0898f328(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0898f328u);
    c->r[29] = c->r[29] + 0xffffff70u;
    mem_w32(ram, c->r[29] + 0x00000088u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000084u, c->r[30]);
    mem_w32(ram, c->r[29] + 0x00000080u, c->r[16]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x000000e0u;
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[2]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = 0u + 0x0000007au;
    c->r[6] = 0u + 0xffffffffu;
    c->r[7] = 0u + 0xffffffffu;
    c->r[8] = 0u + 0u;
    c->r[9] = 0x08ab0000u;
    c->r[9] = c->r[9] + 0xffff94f4u;
    { c->r[31] = 0x0898f370u; c->r[10] = 0u + 0u; func_0892fcac(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[16] = c->r[2] + 0x00000014u;
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000ac8u;
    { c->r[31] = 0x0898f38cu; c->r[5] = mem_r32(ram, c->r[30] + 0x00000008u); func_089cb780(c, ram); }
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    mem_w32(ram, c->r[16] + 0x00000000u, c->r[2]);
    c->r[4] = 0x08ab0000u;
    c->r[4] = c->r[4] + 0xffff9544u;
    c->r[5] = 0u + 0x00000070u;
    c->r[6] = 0u + 0xffffffffu;
    c->r[7] = 0u + 0x00000007u;
    c->r[8] = 0u + 0u;
    c->r[9] = 0u + 0u;
    { c->r[31] = 0x0898f3bcu; c->r[10] = 0u + 0u; func_0898f2a0(c, ram); }
    c->r[4] = 0x08ab0000u;
    c->r[4] = c->r[4] + 0xffff9558u;
    c->r[5] = 0u + 0x00000070u;
    c->r[6] = 0u + 0xffffffffu;
    c->r[7] = 0u + 0x000003c5u;
    c->r[8] = 0u + 0u;
    c->r[9] = 0u + 0u;
    { c->r[31] = 0x0898f3e0u; c->r[10] = 0u + 0u; func_0898f2a0(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000050u, 0u);
    mem_w32(ram, c->r[30] + 0x00000054u, 0u);
    mem_w32(ram, c->r[30] + 0x00000058u, 0u);
    mem_w32(ram, c->r[30] + 0x00000060u, 0u);
    mem_w32(ram, c->r[30] + 0x00000064u, 0u);
L_0898f3f4:
    { c->r[31] = 0x0898f3fcu; func_0896a3c0(c, ram); }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000064u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[2] = ((s32)c->r[3] < (s32)c->r[2]) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_0898f418; }
    { goto L_0898f5f8; }
L_0898f418:
    { c->r[31] = 0x0898f420u; func_0896a3e4(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000064u);
    { int _c = (c->r[2] != c->r[3]); if (_c) goto L_0898f438; }
    { goto L_0898f5e8; }
L_0898f438:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000060u);
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[30];
    c->r[16] = c->r[2] + 0x00000010u;
    { c->r[31] = 0x0898f450u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000064u); func_0896fdd0(c, ram); }
    mem_w32(ram, c->r[16] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000060u);
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[30];
    c->r[16] = c->r[2] + 0x00000020u;
    { c->r[31] = 0x0898f46cu; c->r[4] = mem_r32(ram, c->r[30] + 0x00000064u); func_0896fe08(c, ram); }
    mem_w32(ram, c->r[16] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000060u);
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[30];
    c->r[16] = c->r[2] + 0x00000030u;
    { c->r[31] = 0x0898f488u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000064u); func_0896f424(c, ram); }
    mem_w32(ram, c->r[16] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000060u);
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[30];
    c->r[16] = c->r[2] + 0x00000040u;
    { c->r[31] = 0x0898f4a4u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000064u); func_0896f45c(c, ram); }
    mem_w32(ram, c->r[16] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000060u);
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[30];
    { c->r[31] = 0x0898f4bcu; c->r[16] = c->r[2] + 0x00000050u; func_0896a3c0(c, ram); }
    c->r[4] = c->r[2] + 0u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000064u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 3;
    c->r[2] = c->r[2] + c->r[3];
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[4] + c->r[2];
    c->r[2] = c->r[2] + 0x00000004u;
    c->r[2] = c->r[2] + 0x00000014u;
    mem_w32(ram, c->r[16] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000060u);
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[30];
    c->r[2] = c->r[2] + 0x00000010u;
    c->r[3] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[2] = 0x00010000u;
    c->r[2] = c->r[2] | 0x869fu;
    c->r[2] = ((s32)c->r[2] < (s32)c->r[3]) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_0898f528; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000060u);
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[30];
    c->r[3] = c->r[2] + 0x00000010u;
    c->r[2] = 0x00010000u;
    c->r[2] = c->r[2] | 0x869fu;
    mem_w32(ram, c->r[3] + 0x00000000u, c->r[2]);
L_0898f528:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000060u);
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[30];
    c->r[2] = c->r[2] + 0x00000020u;
    c->r[3] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[2] = 0xfffe0000u;
    c->r[2] = c->r[2] | 0x7961u;
    c->r[2] = ((s32)c->r[3] < (s32)c->r[2]) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_0898f56c; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000060u);
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[30];
    c->r[3] = c->r[2] + 0x00000020u;
    c->r[2] = 0xfffe0000u;
    c->r[2] = c->r[2] | 0x7961u;
    mem_w32(ram, c->r[3] + 0x00000000u, c->r[2]);
L_0898f56c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000060u);
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[30];
    c->r[2] = c->r[2] + 0x00000030u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000064u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_0898f5a4; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000060u);
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[30];
    c->r[3] = c->r[2] + 0x00000030u;
    c->r[2] = 0u + 0x00000063u;
    mem_w32(ram, c->r[3] + 0x00000000u, c->r[2]);
L_0898f5a4:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000060u);
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[30];
    c->r[2] = c->r[2] + 0x00000040u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000064u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_0898f5dc; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000060u);
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[30];
    c->r[3] = c->r[2] + 0x00000040u;
    c->r[2] = 0u + 0x00000063u;
    mem_w32(ram, c->r[3] + 0x00000000u, c->r[2]);
L_0898f5dc:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000060u);
    c->r[2] = c->r[2] + 0x00000001u;
    mem_w32(ram, c->r[30] + 0x00000060u, c->r[2]);
L_0898f5e8:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000064u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000064u, c->r[2]); goto L_0898f3f4; }
L_0898f5f8:
    mem_w32(ram, c->r[30] + 0x0000001cu, 0u);
    mem_w32(ram, c->r[30] + 0x0000002cu, 0u);
    mem_w32(ram, c->r[30] + 0x0000003cu, 0u);
    mem_w32(ram, c->r[30] + 0x0000004cu, 0u);
    { c->r[31] = 0x0898f610u; mem_w32(ram, c->r[30] + 0x00000064u, 0u); func_0896a3c0(c, ram); }
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    mem_w32(ram, c->r[30] + 0x00000068u, c->r[2]);
L_0898f618:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000068u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000009u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_0898f630; }
    { goto L_0898f6d4; }
L_0898f630:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000068u);
    c->r[2] = 0u + 0x00000008u;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_0898f658; }
    { c->r[31] = 0x0898f648u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000068u); func_0896dbc0(c, ram); }
    { int _c = ((s32)c->r[2] >= 0); if (_c) goto L_0898f658; }
    { goto L_0898f6c4; }
L_0898f658:
    { c->r[31] = 0x0898f660u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000068u); func_0896fdd0(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = c->r[2] + c->r[3];
    mem_w32(ram, c->r[30] + 0x0000001cu, c->r[2]);
    { c->r[31] = 0x0898f678u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000068u); func_0896fe08(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000002cu);
    c->r[2] = c->r[2] + c->r[3];
    mem_w32(ram, c->r[30] + 0x0000002cu, c->r[2]);
    { c->r[31] = 0x0898f690u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000068u); func_0896f424(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000003cu);
    c->r[2] = c->r[2] + c->r[3];
    mem_w32(ram, c->r[30] + 0x0000003cu, c->r[2]);
    { c->r[31] = 0x0898f6a8u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000068u); func_0896f45c(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000004cu);
    c->r[2] = c->r[2] + c->r[3];
    mem_w32(ram, c->r[30] + 0x0000004cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000064u);
    c->r[2] = c->r[2] + 0x00000001u;
    mem_w32(ram, c->r[30] + 0x00000064u, c->r[2]);
L_0898f6c4:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000068u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000068u, c->r[2]); goto L_0898f618; }
L_0898f6d4:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[3] = 0x00010000u;
    c->r[3] = c->r[3] | 0x869fu;
    c->r[2] = ((s32)c->r[3] < (s32)c->r[2]) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_0898f6f8; }
    c->r[2] = 0x00010000u;
    c->r[2] = c->r[2] | 0x869fu;
    mem_w32(ram, c->r[30] + 0x0000001cu, c->r[2]);
L_0898f6f8:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000002cu);
    c->r[3] = 0xfffe0000u;
    c->r[3] = c->r[3] | 0x7961u;
    c->r[2] = ((s32)c->r[2] < (s32)c->r[3]) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_0898f71c; }
    c->r[2] = 0xfffe0000u;
    c->r[2] = c->r[2] | 0x7961u;
    mem_w32(ram, c->r[30] + 0x0000002cu, c->r[2]);
L_0898f71c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000003cu);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000064u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_0898f734; }
    c->r[2] = 0u + 0x00000063u;
    mem_w32(ram, c->r[30] + 0x0000003cu, c->r[2]);
L_0898f734:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000004cu);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000064u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_0898f74c; }
    c->r[2] = 0u + 0x00000063u;
    mem_w32(ram, c->r[30] + 0x0000004cu, c->r[2]);
L_0898f74c:
    mem_w32(ram, c->r[30] + 0x00000068u, 0u);
L_0898f750:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000068u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000004u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_0898f768; }
    { goto L_0898fb2c; }
L_0898f768:
    c->r[2] = 0x00400000u;
    mem_w32(ram, c->r[30] + 0x0000006cu, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000068u);
    c->r[2] = 0u + 0x00000003u;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_0898f948; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000006cu);
    c->r[2] = 0x00020000u;
    c->r[2] = c->r[3] | c->r[2];
    mem_w32(ram, c->r[30] + 0x0000006cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000068u);
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[30];
    c->r[2] = c->r[2] + 0x00000050u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_0898f868; }
    c->r[2] = 0x08a60000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0xffffa588u);
    mem_w32(ram, c->r[30] + 0x00000070u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000068u);
    c->r[3] = c->r[2] << 4;
    c->r[2] = 0x08ab0000u;
    c->r[2] = c->r[2] + 0xffff95bcu;
    c->r[3] = c->r[3] + c->r[2];
    c->r[2] = 0u + 0x00001000u;
    mem_w16(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000068u);
    c->r[3] = c->r[2] << 4;
    c->r[2] = 0x08ab0000u;
    c->r[2] = c->r[2] + 0xffff95bcu;
    c->r[3] = c->r[3] + c->r[2];
    c->r[2] = 0u + 0x00000038u;
    mem_w16(ram, c->r[3] + 0x00000002u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000068u);
    c->r[3] = c->r[2] << 4;
    c->r[2] = 0x08ab0000u;
    c->r[2] = c->r[2] + 0xffff95c0u;
    c->r[3] = c->r[3] + c->r[2];
    c->r[2] = 0x08a60000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0xffffa58cu);
    mem_w32(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000068u);
    c->r[3] = c->r[2] << 4;
    c->r[2] = 0x08ab0000u;
    c->r[2] = c->r[2] + 0xffff95c4u;
    c->r[3] = c->r[3] + c->r[2];
    c->r[2] = 0u + 0x00001001u;
    mem_w16(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000068u);
    c->r[3] = c->r[2] << 4;
    c->r[2] = 0x08ab0000u;
    c->r[2] = c->r[2] + 0xffff95c4u;
    c->r[2] = c->r[3] + c->r[2];
    mem_w16(ram, c->r[2] + 0x00000002u, 0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000068u);
    c->r[3] = c->r[2] << 4;
    c->r[2] = 0x08ab0000u;
    c->r[2] = c->r[2] + 0xffff95c8u;
    c->r[3] = c->r[3] + c->r[2];
    c->r[2] = 0x08a60000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0xffffa590u);
    { mem_w32(ram, c->r[3] + 0x00000000u, c->r[2]); goto L_0898facc; }
L_0898f868:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000068u);
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[30];
    c->r[2] = c->r[2] + 0x00000050u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    mem_w32(ram, c->r[30] + 0x00000070u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000068u);
    c->r[3] = c->r[2] << 4;
    c->r[2] = 0x08ab0000u;
    c->r[2] = c->r[2] + 0xffff95bcu;
    c->r[3] = c->r[3] + c->r[2];
    c->r[2] = 0u + 0x00004000u;
    mem_w16(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000068u);
    c->r[3] = c->r[2] << 4;
    c->r[2] = 0x08ab0000u;
    c->r[2] = c->r[2] + 0xffff95bcu;
    c->r[3] = c->r[3] + c->r[2];
    c->r[2] = 0u + 0x00000038u;
    mem_w16(ram, c->r[3] + 0x00000002u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000068u);
    c->r[3] = c->r[2] << 4;
    c->r[2] = 0x08ab0000u;
    c->r[2] = c->r[2] + 0xffff95c0u;
    c->r[3] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000068u);
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[30];
    c->r[2] = c->r[2] + 0x00000030u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    mem_w32(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000068u);
    c->r[3] = c->r[2] << 4;
    c->r[2] = 0x08ab0000u;
    c->r[2] = c->r[2] + 0xffff95c4u;
    c->r[3] = c->r[3] + c->r[2];
    c->r[2] = 0u + 0x00003001u;
    mem_w16(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000068u);
    c->r[3] = c->r[2] << 4;
    c->r[2] = 0x08ab0000u;
    c->r[2] = c->r[2] + 0xffff95c4u;
    c->r[2] = c->r[3] + c->r[2];
    mem_w16(ram, c->r[2] + 0x00000002u, 0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000068u);
    c->r[3] = c->r[2] << 4;
    c->r[2] = 0x08ab0000u;
    c->r[2] = c->r[2] + 0xffff95c8u;
    c->r[3] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000068u);
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[30];
    c->r[2] = c->r[2] + 0x00000010u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    { mem_w32(ram, c->r[3] + 0x00000000u, c->r[2]); goto L_0898facc; }
L_0898f948:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000064u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_0898fa20; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000006cu);
    c->r[2] = 0x00020000u;
    c->r[2] = c->r[3] | c->r[2];
    mem_w32(ram, c->r[30] + 0x0000006cu, c->r[2]);
    c->r[2] = 0x08a60000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0xffffa588u);
    mem_w32(ram, c->r[30] + 0x00000070u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000068u);
    c->r[3] = c->r[2] << 4;
    c->r[2] = 0x08ab0000u;
    c->r[2] = c->r[2] + 0xffff95bcu;
    c->r[3] = c->r[3] + c->r[2];
    c->r[2] = 0u + 0x00001000u;
    mem_w16(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000068u);
    c->r[3] = c->r[2] << 4;
    c->r[2] = 0x08ab0000u;
    c->r[2] = c->r[2] + 0xffff95bcu;
    c->r[3] = c->r[3] + c->r[2];
    c->r[2] = 0u + 0x00000038u;
    mem_w16(ram, c->r[3] + 0x00000002u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000068u);
    c->r[3] = c->r[2] << 4;
    c->r[2] = 0x08ab0000u;
    c->r[2] = c->r[2] + 0xffff95c0u;
    c->r[3] = c->r[3] + c->r[2];
    c->r[2] = 0x08a60000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0xffffa58cu);
    mem_w32(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000068u);
    c->r[3] = c->r[2] << 4;
    c->r[2] = 0x08ab0000u;
    c->r[2] = c->r[2] + 0xffff95c4u;
    c->r[3] = c->r[3] + c->r[2];
    c->r[2] = 0u + 0x00001001u;
    mem_w16(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000068u);
    c->r[3] = c->r[2] << 4;
    c->r[2] = 0x08ab0000u;
    c->r[2] = c->r[2] + 0xffff95c4u;
    c->r[2] = c->r[3] + c->r[2];
    mem_w16(ram, c->r[2] + 0x00000002u, 0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000068u);
    c->r[3] = c->r[2] << 4;
    c->r[2] = 0x08ab0000u;
    c->r[2] = c->r[2] + 0xffff95c8u;
    c->r[3] = c->r[3] + c->r[2];
    c->r[2] = 0x08a60000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0xffffa590u);
    { mem_w32(ram, c->r[3] + 0x00000000u, c->r[2]); goto L_0898facc; }
L_0898fa20:
    c->r[2] = 0u + 0x000003c6u;
    mem_w32(ram, c->r[30] + 0x00000070u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000068u);
    c->r[3] = c->r[2] << 4;
    c->r[2] = 0x08ab0000u;
    c->r[2] = c->r[2] + 0xffff95bcu;
    c->r[3] = c->r[3] + c->r[2];
    c->r[2] = 0u + 0x00004000u;
    mem_w16(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000068u);
    c->r[3] = c->r[2] << 4;
    c->r[2] = 0x08ab0000u;
    c->r[2] = c->r[2] + 0xffff95bcu;
    c->r[3] = c->r[3] + c->r[2];
    c->r[2] = 0u + 0x00000038u;
    mem_w16(ram, c->r[3] + 0x00000002u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000068u);
    c->r[3] = c->r[2] << 4;
    c->r[2] = 0x08ab0000u;
    c->r[2] = c->r[2] + 0xffff95c0u;
    c->r[3] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000003cu);
    mem_w32(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000068u);
    c->r[3] = c->r[2] << 4;
    c->r[2] = 0x08ab0000u;
    c->r[2] = c->r[2] + 0xffff95c4u;
    c->r[3] = c->r[3] + c->r[2];
    c->r[2] = 0u + 0x00003001u;
    mem_w16(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000068u);
    c->r[3] = c->r[2] << 4;
    c->r[2] = 0x08ab0000u;
    c->r[2] = c->r[2] + 0xffff95c4u;
    c->r[2] = c->r[3] + c->r[2];
    mem_w16(ram, c->r[2] + 0x00000002u, 0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000068u);
    c->r[3] = c->r[2] << 4;
    c->r[2] = 0x08ab0000u;
    c->r[2] = c->r[2] + 0xffff95c8u;
    c->r[3] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    mem_w32(ram, c->r[3] + 0x00000000u, c->r[2]);
L_0898facc:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000068u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08ab0000u;
    c->r[2] = c->r[2] + 0xffff94f4u;
    c->r[4] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000068u);
    c->r[3] = c->r[2] << 4;
    c->r[2] = 0x08ab0000u;
    c->r[2] = c->r[2] + 0xffff95bcu;
    c->r[2] = c->r[3] + c->r[2];
    c->r[5] = 0u + 0x00000070u;
    c->r[6] = 0u + 0xffffffffu;
    c->r[7] = mem_r32(ram, c->r[30] + 0x00000070u);
    c->r[8] = mem_r32(ram, c->r[30] + 0x0000006cu);
    c->r[9] = 0u + 0x00000002u;
    { c->r[31] = 0x0898fb1cu; c->r[10] = c->r[2] + 0u; func_0898f2a0(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000068u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000068u, c->r[2]); goto L_0898f750; }
L_0898fb2c:
    mem_w32(ram, c->r[30] + 0x00000070u, 0u);
L_0898fb30:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000070u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000004u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_0898fb48; }
    { goto L_0898ff0c; }
L_0898fb48:
    c->r[2] = 0x00400000u;
    mem_w32(ram, c->r[30] + 0x0000006cu, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000070u);
    c->r[2] = 0u + 0x00000003u;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_0898fd28; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000006cu);
    c->r[2] = 0x00020000u;
    c->r[2] = c->r[3] | c->r[2];
    mem_w32(ram, c->r[30] + 0x0000006cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000070u);
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[30];
    c->r[2] = c->r[2] + 0x00000050u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_0898fc48; }
    c->r[2] = 0x08a60000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0xffffa588u);
    mem_w32(ram, c->r[30] + 0x00000068u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000070u);
    c->r[3] = c->r[2] << 4;
    c->r[2] = 0x08ab0000u;
    c->r[2] = c->r[2] + 0xffff95fcu;
    c->r[3] = c->r[3] + c->r[2];
    c->r[2] = 0u + 0x00001000u;
    mem_w16(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000070u);
    c->r[3] = c->r[2] << 4;
    c->r[2] = 0x08ab0000u;
    c->r[2] = c->r[2] + 0xffff95fcu;
    c->r[3] = c->r[3] + c->r[2];
    c->r[2] = 0u + 0x00000038u;
    mem_w16(ram, c->r[3] + 0x00000002u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000070u);
    c->r[3] = c->r[2] << 4;
    c->r[2] = 0x08ab0000u;
    c->r[2] = c->r[2] + 0xffff9600u;
    c->r[3] = c->r[3] + c->r[2];
    c->r[2] = 0x08a60000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0xffffa58cu);
    mem_w32(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000070u);
    c->r[3] = c->r[2] << 4;
    c->r[2] = 0x08ab0000u;
    c->r[2] = c->r[2] + 0xffff9604u;
    c->r[3] = c->r[3] + c->r[2];
    c->r[2] = 0u + 0x00001001u;
    mem_w16(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000070u);
    c->r[3] = c->r[2] << 4;
    c->r[2] = 0x08ab0000u;
    c->r[2] = c->r[2] + 0xffff9604u;
    c->r[2] = c->r[3] + c->r[2];
    mem_w16(ram, c->r[2] + 0x00000002u, 0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000070u);
    c->r[3] = c->r[2] << 4;
    c->r[2] = 0x08ab0000u;
    c->r[2] = c->r[2] + 0xffff9608u;
    c->r[3] = c->r[3] + c->r[2];
    c->r[2] = 0x08a60000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0xffffa590u);
    { mem_w32(ram, c->r[3] + 0x00000000u, c->r[2]); goto L_0898feac; }
L_0898fc48:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000070u);
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[30];
    c->r[2] = c->r[2] + 0x00000050u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    mem_w32(ram, c->r[30] + 0x00000068u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000070u);
    c->r[3] = c->r[2] << 4;
    c->r[2] = 0x08ab0000u;
    c->r[2] = c->r[2] + 0xffff95fcu;
    c->r[3] = c->r[3] + c->r[2];
    c->r[2] = 0u + 0x00004000u;
    mem_w16(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000070u);
    c->r[3] = c->r[2] << 4;
    c->r[2] = 0x08ab0000u;
    c->r[2] = c->r[2] + 0xffff95fcu;
    c->r[3] = c->r[3] + c->r[2];
    c->r[2] = 0u + 0x00000038u;
    mem_w16(ram, c->r[3] + 0x00000002u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000070u);
    c->r[3] = c->r[2] << 4;
    c->r[2] = 0x08ab0000u;
    c->r[2] = c->r[2] + 0xffff9600u;
    c->r[3] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000070u);
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[30];
    c->r[2] = c->r[2] + 0x00000040u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    mem_w32(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000070u);
    c->r[3] = c->r[2] << 4;
    c->r[2] = 0x08ab0000u;
    c->r[2] = c->r[2] + 0xffff9604u;
    c->r[3] = c->r[3] + c->r[2];
    c->r[2] = 0u + 0x00003001u;
    mem_w16(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000070u);
    c->r[3] = c->r[2] << 4;
    c->r[2] = 0x08ab0000u;
    c->r[2] = c->r[2] + 0xffff9604u;
    c->r[2] = c->r[3] + c->r[2];
    mem_w16(ram, c->r[2] + 0x00000002u, 0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000070u);
    c->r[3] = c->r[2] << 4;
    c->r[2] = 0x08ab0000u;
    c->r[2] = c->r[2] + 0xffff9608u;
    c->r[3] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000070u);
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[30];
    c->r[2] = c->r[2] + 0x00000020u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    { mem_w32(ram, c->r[3] + 0x00000000u, c->r[2]); goto L_0898feac; }
L_0898fd28:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000064u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_0898fe00; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000006cu);
    c->r[2] = 0x00020000u;
    c->r[2] = c->r[3] | c->r[2];
    mem_w32(ram, c->r[30] + 0x0000006cu, c->r[2]);
    c->r[2] = 0x08a60000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0xffffa588u);
    mem_w32(ram, c->r[30] + 0x00000068u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000070u);
    c->r[3] = c->r[2] << 4;
    c->r[2] = 0x08ab0000u;
    c->r[2] = c->r[2] + 0xffff95fcu;
    c->r[3] = c->r[3] + c->r[2];
    c->r[2] = 0u + 0x00001000u;
    mem_w16(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000070u);
    c->r[3] = c->r[2] << 4;
    c->r[2] = 0x08ab0000u;
    c->r[2] = c->r[2] + 0xffff95fcu;
    c->r[3] = c->r[3] + c->r[2];
    c->r[2] = 0u + 0x00000038u;
    mem_w16(ram, c->r[3] + 0x00000002u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000070u);
    c->r[3] = c->r[2] << 4;
    c->r[2] = 0x08ab0000u;
    c->r[2] = c->r[2] + 0xffff9600u;
    c->r[3] = c->r[3] + c->r[2];
    c->r[2] = 0x08a60000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0xffffa58cu);
    mem_w32(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000070u);
    c->r[3] = c->r[2] << 4;
    c->r[2] = 0x08ab0000u;
    c->r[2] = c->r[2] + 0xffff9604u;
    c->r[3] = c->r[3] + c->r[2];
    c->r[2] = 0u + 0x00001001u;
    mem_w16(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000070u);
    c->r[3] = c->r[2] << 4;
    c->r[2] = 0x08ab0000u;
    c->r[2] = c->r[2] + 0xffff9604u;
    c->r[2] = c->r[3] + c->r[2];
    mem_w16(ram, c->r[2] + 0x00000002u, 0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000070u);
    c->r[3] = c->r[2] << 4;
    c->r[2] = 0x08ab0000u;
    c->r[2] = c->r[2] + 0xffff9608u;
    c->r[3] = c->r[3] + c->r[2];
    c->r[2] = 0x08a60000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0xffffa590u);
    { mem_w32(ram, c->r[3] + 0x00000000u, c->r[2]); goto L_0898feac; }
L_0898fe00:
    c->r[2] = 0u + 0x000003c6u;
    mem_w32(ram, c->r[30] + 0x00000068u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000070u);
    c->r[3] = c->r[2] << 4;
    c->r[2] = 0x08ab0000u;
    c->r[2] = c->r[2] + 0xffff95fcu;
    c->r[3] = c->r[3] + c->r[2];
    c->r[2] = 0u + 0x00004000u;
    mem_w16(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000070u);
    c->r[3] = c->r[2] << 4;
    c->r[2] = 0x08ab0000u;
    c->r[2] = c->r[2] + 0xffff95fcu;
    c->r[3] = c->r[3] + c->r[2];
    c->r[2] = 0u + 0x00000038u;
    mem_w16(ram, c->r[3] + 0x00000002u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000070u);
    c->r[3] = c->r[2] << 4;
    c->r[2] = 0x08ab0000u;
    c->r[2] = c->r[2] + 0xffff9600u;
    c->r[3] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000004cu);
    mem_w32(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000070u);
    c->r[3] = c->r[2] << 4;
    c->r[2] = 0x08ab0000u;
    c->r[2] = c->r[2] + 0xffff9604u;
    c->r[3] = c->r[3] + c->r[2];
    c->r[2] = 0u + 0x00003001u;
    mem_w16(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000070u);
    c->r[3] = c->r[2] << 4;
    c->r[2] = 0x08ab0000u;
    c->r[2] = c->r[2] + 0xffff9604u;
    c->r[2] = c->r[3] + c->r[2];
    mem_w16(ram, c->r[2] + 0x00000002u, 0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000070u);
    c->r[3] = c->r[2] << 4;
    c->r[2] = 0x08ab0000u;
    c->r[2] = c->r[2] + 0xffff9608u;
    c->r[3] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000002cu);
    mem_w32(ram, c->r[3] + 0x00000000u, c->r[2]);
L_0898feac:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000070u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08ab0000u;
    c->r[2] = c->r[2] + 0xffff956cu;
    c->r[4] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000070u);
    c->r[3] = c->r[2] << 4;
    c->r[2] = 0x08ab0000u;
    c->r[2] = c->r[2] + 0xffff95fcu;
    c->r[2] = c->r[3] + c->r[2];
    c->r[5] = 0u + 0x00000070u;
    c->r[6] = 0u + 0xffffffffu;
    c->r[7] = mem_r32(ram, c->r[30] + 0x00000068u);
    c->r[8] = mem_r32(ram, c->r[30] + 0x0000006cu);
    c->r[9] = 0u + 0x00000002u;
    { c->r[31] = 0x0898fefcu; c->r[10] = c->r[2] + 0u; func_0898f2a0(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000070u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000070u, c->r[2]); goto L_0898fb30; }
L_0898ff0c:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000088u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000084u);
    c->r[16] = mem_r32(ram, c->r[29] + 0x00000080u);
    { c->r[29] = c->r[29] + 0x00000090u; return; }
    return; /* fell out of func_0898f328 */
}

/* func_089987d0  0x089987d0..0x08998808  56 bytes, source=sweep */
void func_089987d0(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089987d0u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08ab0000u;
    c->r[2] = c->r[2] + 0xffff9a68u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_089987d0 */
}

/* func_0899900c  0x0899900c..0x08999048  60 bytes, source=sweep */
void func_0899900c(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0899900cu);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = 0x08ab0000u;
    c->r[2] = c->r[2] + 0x00002b84u;
    c->r[3] = c->r[3] + c->r[2];
    c->r[2] = mem_r8(ram, c->r[30] + 0x00000004u);
    mem_w8(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_0899900c */
}

/* func_0899cc54  0x0899cc54..0x0899ce8c  568 bytes, source=fde */
void func_0899cc54(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0899cc54u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x0000001cu, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000018u, c->r[30]);
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[17]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[16]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_0899cc84; }
    { mem_w32(ram, c->r[30] + 0x0000000cu, 0u); goto L_0899ce6c; }
L_0899cc84:
    { c->r[31] = 0x0899cc8cu; func_089794c4(c, ram); }
    c->r[3] = mem_r8(ram, c->r[2] + 0x00000004u);
    c->r[2] = 0u + 0x00000002u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_0899cdb8; }
    { c->r[31] = 0x0899cca4u; func_089794c4(c, ram); }
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000005u);
    c->r[2] = c->r[2] + 0x00000001u;
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000005u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_0899ccc8; }
    c->r[2] = 0u + 0x00000004u;
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[2]);
L_0899ccc8:
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x0899ccd4u; c->r[4] = c->r[4] + 0x00000af4u; func_089a1b30(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    alx_div(c, c->r[3], c->r[2]);
    c->r[3] = c->hi;
    if (c->r[2] == 0u) { recomp_break(c, ram, 0x0899cce8u, 0x7u); goto L_0899ccec; }
L_0899ccec:
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[3]);
    { c->r[31] = 0x0899ccf8u; c->r[17] = mem_r32(ram, c->r[30] + 0x00000000u); func_08980edc(c, ram); }
    { c->r[31] = 0x0899cd00u; c->r[16] = c->r[2] + 0u; func_0896a3e4(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[2] = c->r[2] << 2;
    c->r[3] = c->r[2] + c->r[16];
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = c->r[2] + 0x00000010u;
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000000u);
    mem_w8(ram, c->r[17] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x0899cd38u; c->r[17] = c->r[2] + 0x00000001u; func_08980edc(c, ram); }
    { c->r[31] = 0x0899cd40u; c->r[16] = c->r[2] + 0u; func_0896a3e4(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[2] = c->r[2] << 2;
    c->r[3] = c->r[2] + c->r[16];
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = c->r[2] + 0x00000010u;
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000004u);
    c->r[2] = c->r[2] & 0x0003u;
    mem_w8(ram, c->r[17] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x0899cd7cu; c->r[17] = c->r[2] + 0x00000002u; func_08980edc(c, ram); }
    { c->r[31] = 0x0899cd84u; c->r[16] = c->r[2] + 0u; func_0896a3e4(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[2] = c->r[2] << 2;
    c->r[3] = c->r[2] + c->r[16];
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = c->r[2] + 0x00000010u;
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000008u);
    c->r[2] = c->r[2] & 0x0003u;
    { mem_w8(ram, c->r[17] + 0x00000000u, c->r[2]); goto L_0899ce64; }
L_0899cdb8:
    { c->r[31] = 0x0899cdc0u; c->r[17] = mem_r32(ram, c->r[30] + 0x00000000u); func_08980edc(c, ram); }
    { c->r[31] = 0x0899cdc8u; c->r[16] = c->r[2] + 0u; func_0896a3e4(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[16];
    c->r[2] = c->r[2] + 0x00000010u;
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000000u);
    mem_w8(ram, c->r[17] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x0899cdf8u; c->r[17] = c->r[2] + 0x00000001u; func_08980edc(c, ram); }
    { c->r[31] = 0x0899ce00u; c->r[16] = c->r[2] + 0u; func_0896a3e4(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[16];
    c->r[2] = c->r[2] + 0x00000010u;
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000004u);
    c->r[2] = c->r[2] & 0x0003u;
    mem_w8(ram, c->r[17] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x0899ce34u; c->r[17] = c->r[2] + 0x00000002u; func_08980edc(c, ram); }
    { c->r[31] = 0x0899ce3cu; c->r[16] = c->r[2] + 0u; func_0896a3e4(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[16];
    c->r[2] = c->r[2] + 0x00000010u;
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000008u);
    c->r[2] = c->r[2] & 0x0003u;
    mem_w8(ram, c->r[17] + 0x00000000u, c->r[2]);
L_0899ce64:
    c->r[2] = 0u + 0x00000001u;
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
L_0899ce6c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x0000001cu);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000018u);
    c->r[17] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[16] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_0899cc54 */
}

/* func_089a0d08  0x089a0d08..0x089a0e68  352 bytes, source=fde */
void func_089a0d08(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089a0d08u);
    c->r[29] = c->r[29] + 0xffffffd0u;
    mem_w32(ram, c->r[29] + 0x00000024u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000020u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x000000e0u;
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000070u;
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r8(ram, c->r[2] + 0x0000000eu);
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]);
    c->r[2] = 0u + 0x00000002u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000010u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_089a0de0; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = ((s32)c->r[3] < (s32)0x00000003u) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_089a0d78; }
    c->r[2] = 0u + 0x00000001u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000010u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_089a0d90; }
    { goto L_089a0e54; }
L_089a0d78:
    c->r[2] = 0u + 0x00000019u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000010u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_089a0d90; }
    { goto L_089a0e54; }
L_089a0d90:
    c->r[1] = 0x08a50000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffffa69cu);
    c->r[4] = 0x08a70000u;
    c->r[4] = c->r[4] + 0xffffb640u;
    { c->r[31] = 0x089a0da8u; c->f[12] = c->f[0]; func_089f1210(c, ram); }
    { c->r[31] = 0x089a0db0u; c->r[4] = 0u + 0x00000003u; func_08928c60(c, ram); }
    c->r[4] = 0x08a50000u;
    c->r[4] = c->r[4] + 0xffffa300u;
    c->r[5] = 0u + 0x00001706u;
    { c->r[31] = 0x089a0dc4u; c->r[6] = 0u + 0x00000001u; func_08928cb8(c, ram); }
    { c->r[31] = 0x089a0dccu; c->r[4] = 0u + 0x00000001u; func_08928c60(c, ram); }
    c->r[4] = 0x08a70000u;
    { c->r[31] = 0x089a0dd8u; c->r[4] = c->r[4] + 0xffffb640u; func_089f147c(c, ram); }
    { goto L_089a0e54; }
L_089a0de0:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[2] + 0x0000000cu;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000ac8u;
    { c->r[31] = 0x089a0dfcu; c->r[5] = c->r[2] + 0u; func_089cb820(c, ram); }
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    { int _c = (c->r[2] == 0u); if (_c) goto L_089a0e14; }
    { goto L_089a0e54; }
L_089a0e14:
    { c->r[31] = 0x089a0e1cu; c->r[4] = 0u + 0x00000004u; func_08924620(c, ram); }
    c->r[1] = 0x08a50000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffffa69cu);
    c->r[4] = 0x08a70000u;
    c->r[4] = c->r[4] + 0xffffb640u;
    { c->r[31] = 0x089a0e34u; c->f[12] = c->f[0]; func_089f1210(c, ram); }
    c->r[4] = 0x08a50000u;
    c->r[4] = c->r[4] + 0xffffa300u;
    c->r[5] = 0u + 0x00001550u;
    { c->r[31] = 0x089a0e48u; c->r[6] = 0u + 0x00000001u; func_08928cb8(c, ram); }
    c->r[4] = 0x08a70000u;
    { c->r[31] = 0x089a0e54u; c->r[4] = c->r[4] + 0xffffb640u; func_089f147c(c, ram); }
L_089a0e54:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000024u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000020u);
    { c->r[29] = c->r[29] + 0x00000030u; return; }
    return; /* fell out of func_089a0d08 */
}

/* func_089a4c9c  0x089a4c9c..0x089a4ee0  580 bytes, source=sweep */
void func_089a4c9c(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089a4c9cu);
    c->r[29] = c->r[29] + 0xffffffc0u;
    mem_w32(ram, c->r[29] + 0x00000030u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    c->r[2] = c->r[4] + 0u;
    mem_w8(ram, c->r[30] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r8(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] & 0x0003u;
    mem_w8(ram, c->r[30] + 0x00000010u, c->r[2]);
    c->r[2] = mem_r8(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] & 0x0030u;
    c->r[2] = (u32)((s32)c->r[2] >> 4);
    mem_w8(ram, c->r[30] + 0x00000011u, c->r[2]);
    c->r[2] = mem_r8(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] & 0x0008u;
    c->r[2] = (u32)((s32)c->r[2] >> 3);
    c->r[3] = 0x08ab0000u;
    c->r[3] = mem_r8(ram, c->r[3] + 0x00002e00u);
    c->r[2] = c->r[3] | c->r[2];
    c->r[1] = 0x08ab0000u;
    mem_w8(ram, c->r[1] + 0x00002e00u, c->r[2]);
    c->r[2] = mem_r8(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] & 0x0080u;
    c->r[2] = (u32)((s32)c->r[2] >> 7);
    c->r[3] = 0x08ab0000u;
    c->r[3] = mem_r8(ram, c->r[3] + 0x00002e01u);
    c->r[2] = c->r[3] | c->r[2];
    c->r[1] = 0x08ab0000u;
    mem_w8(ram, c->r[1] + 0x00002e01u, c->r[2]);
    mem_w32(ram, c->r[30] + 0x00000020u, 0u);
L_089a4d10:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000002u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_089a4d28; }
    { goto L_089a4ed0; }
L_089a4d28:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[2] = 0x08ab0000u;
    c->r[2] = c->r[2] + 0x00002de8u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[3] = mem_r8(ram, c->r[2] + 0x00000000u);
    c->r[2] = 0u + 0x00000002u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_089a4dac; }
    c->r[3] = c->r[30] + 0x00000010u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000000u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_089a4d74; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[3] = 0x08ab0000u;
    c->r[3] = c->r[3] + 0x00002decu;
    c->r[2] = c->r[2] + c->r[3];
    mem_w8(ram, c->r[2] + 0x00000000u, 0u);
L_089a4d74:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[2] = 0x08ab0000u;
    c->r[2] = c->r[2] + 0x00002decu;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000000u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_089a4ec0; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[2] = 0x08ab0000u;
    c->r[2] = c->r[2] + 0x00002decu;
    c->r[3] = c->r[3] + c->r[2];
    c->r[2] = 0u + 0x00000002u;
    { mem_w8(ram, c->r[3] + 0x00000000u, c->r[2]); goto L_089a4ec0; }
L_089a4dac:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[2] = 0x08ab0000u;
    c->r[2] = c->r[2] + 0x00002de8u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000000u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_089a4e34; }
    c->r[3] = c->r[30] + 0x00000010u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[3] = mem_r8(ram, c->r[2] + 0x00000000u);
    c->r[2] = 0u + 0x00000001u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_089a4dfc; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[2] = 0x08ab0000u;
    c->r[2] = c->r[2] + 0x00002decu;
    c->r[3] = c->r[3] + c->r[2];
    c->r[2] = 0u + 0x00000001u;
    mem_w8(ram, c->r[3] + 0x00000000u, c->r[2]);
L_089a4dfc:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[2] = 0x08ab0000u;
    c->r[2] = c->r[2] + 0x00002decu;
    c->r[2] = c->r[3] + c->r[2];
    c->r[3] = mem_r8(ram, c->r[2] + 0x00000000u);
    c->r[2] = 0u + 0x00000001u;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_089a4ec0; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[3] = 0x08ab0000u;
    c->r[3] = c->r[3] + 0x00002decu;
    c->r[2] = c->r[2] + c->r[3];
    { mem_w8(ram, c->r[2] + 0x00000000u, 0u); goto L_089a4ec0; }
L_089a4e34:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[2] = 0x08ab0000u;
    c->r[2] = c->r[2] + 0x00002de8u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[3] = mem_r8(ram, c->r[2] + 0x00000000u);
    c->r[2] = 0u + 0x00000001u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_089a4ec0; }
    c->r[3] = c->r[30] + 0x00000010u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[3] = mem_r8(ram, c->r[2] + 0x00000000u);
    c->r[2] = 0u + 0x00000002u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_089a4e88; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[2] = 0x08ab0000u;
    c->r[2] = c->r[2] + 0x00002decu;
    c->r[3] = c->r[3] + c->r[2];
    c->r[2] = 0u + 0x00000002u;
    mem_w8(ram, c->r[3] + 0x00000000u, c->r[2]);
L_089a4e88:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[2] = 0x08ab0000u;
    c->r[2] = c->r[2] + 0x00002decu;
    c->r[2] = c->r[3] + c->r[2];
    c->r[3] = mem_r8(ram, c->r[2] + 0x00000000u);
    c->r[2] = 0u + 0x00000002u;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_089a4ec0; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[2] = 0x08ab0000u;
    c->r[2] = c->r[2] + 0x00002decu;
    c->r[3] = c->r[3] + c->r[2];
    c->r[2] = 0u + 0x00000001u;
    mem_w8(ram, c->r[3] + 0x00000000u, c->r[2]);
L_089a4ec0:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000020u, c->r[2]); goto L_089a4d10; }
L_089a4ed0:
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000030u);
    { c->r[29] = c->r[29] + 0x00000040u; return; }
    return; /* fell out of func_089a4c9c */
}

/* func_089aa2c4  0x089aa2c4..0x089aa6f8  1076 bytes, source=fde */
void func_089aa2c4(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089aa2c4u);
L_089aa2c4:
    c->r[29] = c->r[29] + 0xffffffd0u;
    mem_w32(ram, c->r[29] + 0x00000024u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000020u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[2] = c->r[5] + 0u;
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[6]);
    mem_w8(ram, c->r[30] + 0x00000004u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x000000e0u;
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
    c->r[2] = mem_r8(ram, c->r[30] + 0x00000004u);
    mem_w32(ram, c->r[30] + 0x0000001cu, c->r[2]);
    c->r[2] = 0u + 0x00000007u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000001cu);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_089aa684; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = ((s32)c->r[3] < (s32)0x00000008u) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_089aa330; }
    c->r[2] = 0u + 0x00000001u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000001cu);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_089aa348; }
    { goto L_089aa6e0; }
L_089aa330:
    c->r[2] = 0u + 0x00000019u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000001cu);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_089aa6d8; }
    { goto L_089aa6e0; }
L_089aa348:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r8(ram, c->r[2] + 0x0000000eu);
    mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = (c->r[3] < 0x0000002cu) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_089aa674; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08a50000u;
    c->r[2] = c->r[2] + 0xffffae24u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    { u32 _t = c->r[2]; switch (_t) { case 0x089aa2c4u: goto L_089aa2c4; case 0x089aa384u: goto L_089aa384; case 0x089aa40cu: goto L_089aa40c; case 0x089aa4f0u: goto L_089aa4f0; case 0x089aa554u: goto L_089aa554; case 0x089aa65cu: goto L_089aa65c; case 0x089aa674u: goto L_089aa674; default: recomp_trap_unknown_indirect(c, ram, 0x089aa37cu, _t); return; } }
L_089aa384:
    { c->r[31] = 0x089aa38cu; c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u); func_0899f8d0(c, ram); }
    { c->r[31] = 0x089aa394u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u); func_0899b088(c, ram); }
    { c->r[31] = 0x089aa39cu; func_089a9b94(c, ram); }
    { c->r[31] = 0x089aa3a4u; func_089794c4(c, ram); }
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000001u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_089aa3c0; }
    { c->r[31] = 0x089aa3b8u; func_0899bdac(c, ram); }
    { goto L_089aa3c8; }
L_089aa3c0:
    { c->r[31] = 0x089aa3c8u; func_0899c07c(c, ram); }
L_089aa3c8:
    { c->r[31] = 0x089aa3d0u; func_0899d820(c, ram); }
    { c->r[31] = 0x089aa3d8u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u); func_0896ec90(c, ram); }
    { c->r[31] = 0x089aa3e0u; func_0896a284(c, ram); }
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x089aa3ecu; c->r[5] = 0u + 0x00000384u; func_0896ccf0(c, ram); }
    { c->r[31] = 0x089aa3f4u; func_0896a284(c, ram); }
    { c->r[31] = 0x089aa3fcu; c->r[4] = c->r[2] + 0u; func_0896cdf8(c, ram); }
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0u + 0x00000019u;
    { mem_w8(ram, c->r[3] + 0x0000000eu, c->r[2]); goto L_089aa6e0; }
L_089aa40c:
    { c->r[31] = 0x089aa414u; func_0896a284(c, ram); }
    { c->r[31] = 0x089aa41cu; c->r[4] = c->r[2] + 0u; func_0896c89c(c, ram); }
    { c->r[31] = 0x089aa424u; func_0896a284(c, ram); }
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0u + 0x0000000cu;
    c->r[6] = 0u + 0x000000ffu;
    { c->r[31] = 0x089aa438u; c->r[7] = 0u + 0x000000feu; func_0896ce9c(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
    c->r[2] = 0u + 0xffffffffu;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000014u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_089aa46c; }
    c->r[2] = 0u + 0x00000001u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000014u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_089aa4a8; }
    { goto L_089aa6e0; }
L_089aa46c:
    { c->r[31] = 0x089aa474u; c->r[4] = 0u + 0u; func_089c3618(c, ram); }
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0u + 0x00000003u;
    mem_w32(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x089aa48cu; c->r[5] = 0u + 0x00000033u; func_0896a7b8(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x00000028u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    { c->r[31] = 0x089aa4a0u; c->r[4] = c->r[2] + 0u; func_0896e7c0(c, ram); }
    { goto L_089aa6e0; }
L_089aa4a8:
    { c->r[31] = 0x089aa4b0u; c->r[4] = mem_r32(ram, c->r[30] + 0x0000000cu); func_0896e3a0(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x00000028u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    { c->r[31] = 0x089aa4c4u; c->r[4] = c->r[2] + 0u; func_0896e7c0(c, ram); }
    c->r[1] = 0x08a50000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffffae18u);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00003c30u;
    c->r[5] = 0u + 0x00000001u;
    { c->r[31] = 0x089aa4e0u; c->f[12] = c->f[0]; func_089b3514(c, ram); }
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0u + 0x00000017u;
    { mem_w8(ram, c->r[3] + 0x0000000eu, c->r[2]); goto L_089aa6e0; }
L_089aa4f0:
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x089aa4fcu; c->r[4] = c->r[4] + 0x00003c30u; func_089b384c(c, ram); }
    { int _c = (c->r[2] == 0u); if (_c) goto L_089aa50c; }
    { goto L_089aa6e0; }
L_089aa50c:
    { c->r[31] = 0x089aa514u; c->r[4] = 0u + 0u; func_089c3618(c, ram); }
    { c->r[31] = 0x089aa51cu; c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u); func_0899f9e0(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    { c->r[31] = 0x089aa528u; mem_w32(ram, c->r[2] + 0x00000008u, 0u); func_08979698(c, ram); }
    { c->r[31] = 0x089aa530u; c->r[4] = c->r[2] + 0u; func_0899907c(c, ram); }
    c->r[4] = 0x08ab0000u;
    c->r[4] = c->r[4] + 0x00002ff0u;
    c->r[5] = 0u + 0u;
    { c->r[31] = 0x089aa544u; c->r[6] = 0u + 0x00000004u; func_08a19ec4(c, ram); }
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0u + 0x0000000au;
    { mem_w8(ram, c->r[3] + 0x0000000eu, c->r[2]); goto L_089aa6e0; }
L_089aa554:
    c->r[2] = 0x08a80000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00002ed8u);
    c->r[2] = c->r[2] + 0x00000020u;
    { c->r[31] = 0x089aa568u; c->r[4] = c->r[2] + 0u; func_089a99f4(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_089aa620; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000008u);
    c->r[1] = 0x08a80000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00002e40u);
    c->f[0] = c->f[1] + c->f[0];
    mem_wf32(ram, c->r[3] + 0x00000008u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000008u);
    c->r[1] = 0x08a50000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffffae1cu);
    alx_c_cond_s(c, 14, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_089aa5bc; }
    { goto L_089aa5fc; }
L_089aa5bc:
    c->r[1] = 0x08a50000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffffae20u);
    { c->r[31] = 0x089aa5ccu; c->f[12] = c->f[0]; func_08998ebc(c, ram); }
    { c->r[31] = 0x089aa5d4u; func_0896a3e4(c, ram); }
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x089aa5e0u; c->r[5] = 0u + 0x00000005u; func_0896fc10(c, ram); }
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000008u);
    c->r[1] = 0x08a50000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffffae1cu);
    c->f[0] = c->f[1] - c->f[0];
    mem_wf32(ram, c->r[3] + 0x00000008u, c->f[0]);
L_089aa5fc:
    { c->r[31] = 0x089aa604u; c->r[4] = 0u + 0x00000001u; func_08999258(c, ram); }
    { c->r[31] = 0x089aa60cu; func_0896a3e4(c, ram); }
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x089aa618u; c->r[5] = 0u + 0x00000001u; func_08998a30(c, ram); }
    { goto L_089aa644; }
L_089aa620:
    { c->r[31] = 0x089aa628u; c->r[4] = 0u + 0u; func_08999258(c, ram); }
    { c->r[31] = 0x089aa630u; func_0896a3e4(c, ram); }
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x089aa63cu; c->r[5] = 0u + 0u; func_08998a30(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    mem_w32(ram, c->r[2] + 0x00000008u, 0u);
L_089aa644:
    { c->r[31] = 0x089aa64cu; c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u); func_089a02b8(c, ram); }
    { c->r[31] = 0x089aa654u; func_089a9cd8(c, ram); }
    { goto L_089aa6e0; }
L_089aa65c:
    { c->r[31] = 0x089aa664u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u); func_0899fb14(c, ram); }
    { c->r[31] = 0x089aa66cu; c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u); func_0896a824(c, ram); }
    { goto L_089aa6e0; }
L_089aa674:
    { c->r[31] = 0x089aa67cu; c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u); func_089a09a0(c, ram); }
    { goto L_089aa6e0; }
L_089aa684:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = mem_r8(ram, c->r[2] + 0x0000000eu);
    c->r[2] = 0u + 0x0000000au;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_089aa6c8; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = mem_r8(ram, c->r[2] + 0x0000000eu);
    c->r[2] = 0u + 0x00000012u;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_089aa6c8; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = mem_r8(ram, c->r[2] + 0x0000000eu);
    c->r[2] = 0u + 0x00000013u;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_089aa6c8; }
    { goto L_089aa6e0; }
L_089aa6c8:
    { c->r[31] = 0x089aa6d0u; func_0899dcf4(c, ram); }
    { goto L_089aa6e0; }
L_089aa6d8:
    { c->r[31] = 0x089aa6e0u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u); func_089a0e68(c, ram); }
L_089aa6e0:
    c->r[2] = 0u + 0u;
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000024u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000020u);
    { c->r[29] = c->r[29] + 0x00000030u; return; }
    return; /* fell out of func_089aa2c4 */
}

/* func_089afd70  0x089afd70..0x089b01b8  1096 bytes, source=fde */
void func_089afd70(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089afd70u);
    c->r[29] = c->r[29] + 0xffffffd0u;
    mem_w32(ram, c->r[29] + 0x00000028u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000024u, c->r[30]);
    mem_w32(ram, c->r[29] + 0x00000020u, c->r[16]);
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
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    mem_w8(ram, c->r[2] + 0x00000032u, 0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    mem_w8(ram, c->r[2] + 0x00000033u, 0u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = 0u + 0x00000008u;
    { c->r[31] = 0x089afde0u; mem_w8(ram, c->r[3] + 0x00000030u, c->r[2]); func_0896a3e4(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[3] = c->r[2] << 1;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000031u);
    c->r[3] = c->r[3] + c->r[2];
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[3]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08ab0000u;
    c->r[2] = c->r[2] + 0x000030acu;
    c->r[3] = c->r[3] + c->r[2];
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[3]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000031u);
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08ab0000u;
    c->r[2] = c->r[2] + 0x000030ecu;
    c->r[2] = c->r[3] + c->r[2];
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[4] = mem_lwl(ram, c->r[2] + 0x00000003u, c->r[4]);
    c->r[4] = mem_lwr(ram, c->r[2] + 0x00000000u, c->r[4]);
    mem_swl(ram, c->r[3] + 0x00000003u, c->r[4]);
    { c->r[31] = 0x089afe44u; mem_swr(ram, c->r[3] + 0x00000000u, c->r[4]); func_0896a3e4(c, ram); }
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
    c->r[2] = 0u + 0x00000008u;
    mem_w8(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[16] = c->r[2] + 0x00000010u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000031u);
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08ab0000u;
    c->r[2] = c->r[2] + 0x000030ecu;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000001u);
    { c->r[31] = 0x089afea0u; c->r[4] = c->r[2] + 0u; func_08998808(c, ram); }
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    mem_w32(ram, c->r[16] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[2] + 0x00000010u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000ac8u;
    { c->r[31] = 0x089afec8u; c->r[5] = c->r[2] + 0u; func_089cb820(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = 0x08a80000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00002ed8u);
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_089affd4; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    mem_w32(ram, c->r[2] + 0x00000020u, 0u);
    c->r[3] = 0x08a90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0xffffbbdcu);
    c->r[2] = 0x04000000u;
    c->r[2] = c->r[3] & c->r[2];
    { int _c = (c->r[2] == 0u); if (_c) goto L_089aff1c; }
    c->r[2] = 0x08a90000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0xffffbbdcu);
    c->r[3] = 0xfbff0000u;
    c->r[3] = c->r[3] | 0xffffu;
    c->r[2] = c->r[2] & c->r[3];
    c->r[1] = 0x08a90000u;
    mem_w32(ram, c->r[1] + 0xffffbbdcu, c->r[2]);
L_089aff1c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000037u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_089b007c; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000031u);
    c->r[2] = 0u + 0x00000001u;
    c->r[4] = c->r[2] - c->r[3];
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000031u);
    c->r[2] = 0u + 0x00000001u;
    c->r[2] = c->r[2] - c->r[3];
    c->r[1] = 0x08ab0000u;
    c->r[1] = c->r[1] + c->r[2];
    c->r[2] = mem_r8(ram, c->r[1] + 0x000030f4u);
    c->r[2] = c->r[2] + 0x00000001u;
    c->r[1] = 0x08ab0000u;
    c->r[1] = c->r[1] + c->r[4];
    { c->r[31] = 0x089aff6cu; mem_w8(ram, c->r[1] + 0x000030f4u, c->r[2]); func_0896a3e4(c, ram); }
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x089aff78u; c->r[5] = 0u + 0x000003e8u; func_0896fc10(c, ram); }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = 0u + 0x00000001u;
    { c->r[31] = 0x089aff88u; mem_w8(ram, c->r[3] + 0x00000037u, c->r[2]); func_08998f58(c, ram); }
    { c->r[31] = 0x089aff90u; func_0896a3e4(c, ram); }
    { c->r[31] = 0x089aff98u; c->r[4] = c->r[2] + 0u; func_08998fc0(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000031u);
    c->r[4] = 0x08a90000u;
    c->r[4] = c->r[4] + 0xffffb9c0u;
    { c->r[31] = 0x089affb0u; c->r[5] = c->r[2] + 0u; func_089b28c0(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000031u);
    c->r[2] = c->r[2] + 0x00000019u;
    c->r[2] = c->r[2] & 0x00ffu;
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x089affccu; c->r[5] = 0u + 0u; func_089226dc(c, ram); }
    { goto L_089b007c; }
L_089affd4:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000037u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_089b007c; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000031u);
    c->r[2] = 0u + 0x00000001u;
    c->r[4] = c->r[2] - c->r[3];
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000031u);
    c->r[2] = 0u + 0x00000001u;
    c->r[2] = c->r[2] - c->r[3];
    c->r[1] = 0x08ab0000u;
    c->r[1] = c->r[1] + c->r[2];
    c->r[2] = mem_r8(ram, c->r[1] + 0x000030f4u);
    c->r[2] = c->r[2] + 0x00000001u;
    c->r[1] = 0x08ab0000u;
    c->r[1] = c->r[1] + c->r[4];
    mem_w8(ram, c->r[1] + 0x000030f4u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = 0u + 0x00000001u;
    mem_w8(ram, c->r[3] + 0x00000037u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    { c->r[31] = 0x089b0038u; c->r[16] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000031u); func_0896dc4c(c, ram); }
    { int _c = (c->r[16] == c->r[2]); if (_c) goto L_089b0048; }
    { c->r[31] = 0x089b0048u; func_08998f58(c, ram); }
L_089b0048:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000031u);
    c->r[4] = 0x08a90000u;
    c->r[4] = c->r[4] + 0xffffb9c0u;
    { c->r[31] = 0x089b0060u; c->r[5] = c->r[2] + 0u; func_089b28c0(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000031u);
    c->r[2] = c->r[2] + 0x00000019u;
    c->r[2] = c->r[2] & 0x00ffu;
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x089b007cu; c->r[5] = 0u + 0u; func_089226dc(c, ram); }
L_089b007c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000038u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_089b00a4; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000038u);
    c->r[2] = c->r[2] + 0xffffffffu;
    { mem_w8(ram, c->r[3] + 0x00000038u, c->r[2]); goto L_089b0174; }
L_089b00a4:
    { c->r[31] = 0x089b00acu; func_0896a3e4(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[3] = c->r[2] << 1;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000031u);
    c->r[3] = c->r[3] + c->r[2];
    mem_w32(ram, c->r[30] + 0x00000018u, c->r[3]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08ab0000u;
    c->r[2] = c->r[2] + 0x000030acu;
    c->r[3] = c->r[3] + c->r[2];
    mem_w32(ram, c->r[30] + 0x00000018u, c->r[3]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000031u);
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08ab0000u;
    c->r[2] = c->r[2] + 0x000030ecu;
    c->r[2] = c->r[3] + c->r[2];
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[4] = mem_lwl(ram, c->r[2] + 0x00000003u, c->r[4]);
    c->r[4] = mem_lwr(ram, c->r[2] + 0x00000000u, c->r[4]);
    mem_swl(ram, c->r[3] + 0x00000003u, c->r[4]);
    { c->r[31] = 0x089b0110u; mem_swr(ram, c->r[3] + 0x00000000u, c->r[4]); func_0896a3e4(c, ram); }
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
    { c->r[31] = 0x089b0144u; mem_w8(ram, c->r[3] + 0x00000000u, c->r[2]); func_0896a3e4(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[4] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000031u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[4];
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08ab0000u;
    c->r[2] = c->r[2] + 0x000030acu;
    { c->r[31] = 0x089b0170u; c->r[16] = c->r[3] + c->r[2]; func_0896a3e4(c, ram); }
    mem_w8(ram, c->r[16] + 0x00000001u, c->r[2]);
L_089b0174:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000031u);
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08ab0000u;
    c->r[2] = c->r[2] + 0x00003100u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[1] = 0x08a50000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffffb0ccu);
    mem_wf32(ram, c->r[2] + 0x00000000u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    mem_w8(ram, c->r[2] + 0x00000039u, 0u);
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000028u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000024u);
    c->r[16] = mem_r32(ram, c->r[29] + 0x00000020u);
    { c->r[29] = c->r[29] + 0x00000030u; return; }
    return; /* fell out of func_089afd70 */
}

/* func_089b30ac  0x089b30ac..0x089b30f0  68 bytes, source=sweep */
void func_089b30ac(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089b30acu);
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
    { c->r[31] = 0x089b30dcu; c->r[5] = c->r[2] + 0u; func_089b27cc(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_089b30ac */
}

/* func_089b49d4  0x089b49d4..0x089b4d18  836 bytes, source=fde */
void func_089b49d4(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089b49d4u);
    c->r[29] = c->r[29] + 0xfffffdc0u;
    mem_w32(ram, c->r[29] + 0x00000238u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000234u, c->r[30]);
    mem_w32(ram, c->r[29] + 0x00000230u, c->r[16]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    mem_wf32(ram, c->r[30] + 0x00000008u, c->f[12]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    mem_w32(ram, c->r[3] + 0x00000014u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000008u);
    mem_wf32(ram, c->r[2] + 0x0000000cu, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    mem_w32(ram, c->r[2] + 0x00000010u, 0u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000014u);
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000014u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000014u);
    c->r[2] = c->r[3] + c->r[2];
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000014u);
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000014u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000018u);
    c->r[2] = c->r[3] + c->r[2];
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000014u);
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000014u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000001cu);
    c->r[2] = c->r[3] + c->r[2];
    mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000004u);
    mem_w32(ram, c->r[30] + 0x00000220u, c->r[2]);
    mem_w32(ram, c->r[30] + 0x00000224u, 0u);
L_089b4a78:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000220u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_089b4a8c; }
    { goto L_089b4ac0; }
L_089b4a8c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000224u);
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[30];
    c->r[3] = c->r[2] + 0x00000020u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000220u);
    mem_w32(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000220u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    mem_w32(ram, c->r[30] + 0x00000220u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000224u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000224u, c->r[2]); goto L_089b4a78; }
L_089b4ac0:
    mem_w32(ram, c->r[30] + 0x0000000cu, 0u);
L_089b4ac4:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[2] = ((s32)c->r[3] < (s32)c->r[2]) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_089b4ae4; }
    { goto L_089b4d00; }
L_089b4ae4:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[30];
    c->r[2] = c->r[2] + 0x00000020u;
    c->r[16] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[2] = c->r[30] + 0x00000010u;
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = c->r[2] + 0u;
    c->r[6] = 0u + 0x00000005u;
    c->f[12] = u2f(0u);
    { c->r[31] = 0x089b4b14u; func_089b65dc(c, ram); }
    mem_w32(ram, c->r[16] + 0x00000004u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[30];
    c->r[2] = c->r[2] + 0x00000020u;
    c->r[16] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[2] = c->r[30] + 0x00000014u;
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = c->r[2] + 0u;
    c->r[6] = 0u + 0x00000007u;
    c->f[12] = u2f(0u);
    { c->r[31] = 0x089b4b48u; func_089b65dc(c, ram); }
    mem_w32(ram, c->r[16] + 0x00000008u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[30];
    c->r[2] = c->r[2] + 0x00000020u;
    c->r[16] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[2] = c->r[30] + 0x00000018u;
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = c->r[2] + 0u;
    c->r[6] = 0u + 0x00000007u;
    c->f[12] = u2f(0u);
    { c->r[31] = 0x089b4b7cu; func_089b65dc(c, ram); }
    mem_w32(ram, c->r[16] + 0x0000000cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[30];
    c->r[2] = c->r[2] + 0x00000020u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[2] = mem_r8(ram, c->r[2] + 0x000000a6u);
    mem_w8(ram, c->r[30] + 0x00000228u, c->r[2]);
    c->r[2] = mem_r8(ram, c->r[30] + 0x00000228u);
    c->r[2] = c->r[2] & 0x0002u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_089b4c00; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[30];
    c->r[2] = c->r[2] + 0x00000020u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000070u;
    { c->r[31] = 0x089b4bccu; c->r[4] = c->r[2] + 0u; func_0884bfd0(c, ram); }
    c->r[7] = c->r[2] + 0u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[30];
    c->r[2] = c->r[2] + 0x00000020u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000004u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = c->r[2] + 0u;
    c->r[6] = 0u + 0x00000005u;
    { c->r[31] = 0x089b4c00u; c->f[12] = mem_rf32(ram, c->r[3] + 0x0000000cu); func_089b6710(c, ram); }
L_089b4c00:
    c->r[2] = mem_r8(ram, c->r[30] + 0x00000228u);
    c->r[2] = c->r[2] & 0x0004u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_089b4c64; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[30];
    c->r[2] = c->r[2] + 0x00000020u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000080u;
    { c->r[31] = 0x089b4c30u; c->r[4] = c->r[2] + 0u; func_0884bfd0(c, ram); }
    c->r[7] = c->r[2] + 0u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[30];
    c->r[2] = c->r[2] + 0x00000020u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000008u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = c->r[2] + 0u;
    c->r[6] = 0u + 0x00000007u;
    { c->r[31] = 0x089b4c64u; c->f[12] = mem_rf32(ram, c->r[3] + 0x0000000cu); func_089b6710(c, ram); }
L_089b4c64:
    c->r[2] = mem_r8(ram, c->r[30] + 0x00000228u);
    c->r[2] = c->r[2] ^ 0x0001u;
    c->r[2] = c->r[2] & 0x0001u;
    c->r[2] = c->r[2] & 0x00ffu;
    { int _c = (c->r[2] == 0u); if (_c) goto L_089b4cd0; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[30];
    c->r[2] = c->r[2] + 0x00000020u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000090u;
    { c->r[31] = 0x089b4c9cu; c->r[4] = c->r[2] + 0u; func_0884bfd0(c, ram); }
    c->r[7] = c->r[2] + 0u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[30];
    c->r[2] = c->r[2] + 0x00000020u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[2] = c->r[2] + 0x0000000cu;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = c->r[2] + 0u;
    c->r[6] = 0u + 0x00000007u;
    { c->r[31] = 0x089b4cd0u; c->f[12] = mem_rf32(ram, c->r[3] + 0x0000000cu); func_089b6710(c, ram); }
L_089b4cd0:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[30];
    c->r[2] = c->r[2] + 0x00000020u;
    c->r[3] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x0000000cu);
    mem_wf32(ram, c->r[3] + 0x000000a0u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]); goto L_089b4ac4; }
L_089b4d00:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000238u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000234u);
    c->r[16] = mem_r32(ram, c->r[29] + 0x00000230u);
    { c->r[29] = c->r[29] + 0x00000240u; return; }
    return; /* fell out of func_089b49d4 */
}

/* func_089b7430  0x089b7430..0x089b7544  276 bytes, source=fde */
void func_089b7430(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089b7430u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[1] = 0x08a50000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffffb248u);
    mem_wf32(ram, c->r[2] + 0x00000030u, c->f[0]);
    mem_wf32(ram, c->r[3] + 0x00000020u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    mem_w8(ram, c->r[2] + 0x000000b4u, 0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    mem_w8(ram, c->r[2] + 0x000000b5u, 0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    mem_w32(ram, c->r[2] + 0x00000088u, 0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    mem_w32(ram, c->r[2] + 0x00000064u, 0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    mem_w32(ram, c->r[2] + 0x00000094u, 0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    mem_w32(ram, c->r[2] + 0x00000098u, 0u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = 0u + 0xffffffffu;
    mem_w16(ram, c->r[3] + 0x000000b2u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = 0u + 0xffffffffu;
    mem_w8(ram, c->r[3] + 0x00000085u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = 0u + 0xffffffffu;
    mem_w8(ram, c->r[3] + 0x00000086u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    mem_w32(ram, c->r[2] + 0x0000008cu, 0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    mem_w32(ram, c->r[2] + 0x00000080u, 0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    mem_w32(ram, c->r[2] + 0x000000c0u, 0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    mem_w8(ram, c->r[2] + 0x00000087u, 0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    mem_w8(ram, c->r[2] + 0x000000c9u, 0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    mem_w8(ram, c->r[2] + 0x00000084u, 0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    mem_w32(ram, c->r[2] + 0x000000d0u, 0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    mem_w8(ram, c->r[2] + 0x000000d4u, 0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    mem_w16(ram, c->r[2] + 0x000000a8u, 0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    mem_w16(ram, c->r[2] + 0x000000aau, 0u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = 0u + 0xffffffffu;
    mem_w16(ram, c->r[3] + 0x00000068u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = 0u + 0xffffffffu;
    mem_w16(ram, c->r[3] + 0x0000006au, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x000000e0u;
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0u + 0u;
    { c->r[31] = 0x089b7530u; c->r[6] = 0u + 0x00000060u; func_08a19ec4(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_089b7430 */
}

/* func_089b8b50  0x089b8b50..0x089b8ff4  1188 bytes, source=fde */
void func_089b8b50(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089b8b50u);
    c->r[29] = c->r[29] + 0xffffffd0u;
    mem_w32(ram, c->r[29] + 0x00000028u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000024u, c->r[30]);
    mem_w32(ram, c->r[29] + 0x00000020u, c->r[16]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[6]);
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[7]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x00000088u);
    c->r[2] = 0x00020000u;
    c->r[2] = c->r[3] & c->r[2];
    { int _c = (c->r[2] != 0u); if (_c) goto L_089b8b94; }
    { mem_w32(ram, c->r[30] + 0x00000018u, 0u); goto L_089b8fd8; }
L_089b8b94:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000009cu);
    { int _c = (c->r[2] == 0u); if (_c) goto L_089b8bb4; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000009cu);
    { mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]); goto L_089b8fd8; }
L_089b8bb4:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000088u);
    c->r[2] = c->r[2] & 0x0060u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_089b8bd0; }
    { mem_w32(ram, c->r[30] + 0x00000018u, 0u); goto L_089b8fd8; }
L_089b8bd0:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r16(ram, c->r[2] + 0x000000a8u);
    c->r[2] = 0u + 0x0000006cu;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[3] = c->lo;
    c->r[2] = 0x08a70000u;
    c->r[2] = c->r[2] + 0xffffb688u;
    c->r[2] = c->r[3] + c->r[2];
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x0000001cu);
    mem_wf32(ram, c->r[30] + 0x00000014u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000088u);
    c->r[2] = c->r[2] & 0x0200u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_089b8c2c; }
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000014u);
    c->r[1] = 0x08a50000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0xffffb288u);
    c->f[0] = c->f[0] + c->f[1];
    mem_wf32(ram, c->r[30] + 0x00000014u, c->f[0]);
L_089b8c2c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x00000088u);
    c->r[2] = 0x00080000u;
    c->r[2] = c->r[3] & c->r[2];
    { int _c = (c->r[2] == 0u); if (_c) goto L_089b8c58; }
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000014u);
    c->r[1] = 0x08a50000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0xffffb288u);
    c->f[0] = c->f[0] + c->f[1];
    mem_wf32(ram, c->r[30] + 0x00000014u, c->f[0]);
L_089b8c58:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    { int _c = (c->r[2] != 0u); if (_c) goto L_089b8c88; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[2] + 0x00000030u;
    c->r[4] = 0x08a70000u;
    c->r[4] = c->r[4] + 0xffffb640u;
    c->r[5] = c->r[2] + 0u;
    c->f[12] = mem_rf32(ram, c->r[30] + 0x00000014u);
    { c->r[31] = 0x089b8c84u; c->r[6] = mem_r32(ram, c->r[30] + 0x00000008u); func_089ef4bc(c, ram); }
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
L_089b8c88:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    { int _c = (c->r[2] == 0u); if (_c) goto L_089b8fd0; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000088u);
    c->r[2] = c->r[2] & 0x0020u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_089b8cb4; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0u + 0x00000001u;
    mem_w16(ram, c->r[3] + 0x00000014u, c->r[2]);
L_089b8cb4:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000088u);
    c->r[2] = c->r[2] & 0x0040u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_089b8cdc; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r16(ram, c->r[2] + 0x00000014u);
    c->r[2] = c->r[2] | 0x1000u;
    mem_w16(ram, c->r[3] + 0x00000014u, c->r[2]);
L_089b8cdc:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x00000088u);
    c->r[2] = 0x00080000u;
    c->r[2] = c->r[3] & c->r[2];
    { int _c = (c->r[2] == 0u); if (_c) goto L_089b8d08; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r16(ram, c->r[2] + 0x00000014u);
    c->r[2] = c->r[2] | 0x0010u;
    mem_w16(ram, c->r[3] + 0x00000014u, c->r[2]);
L_089b8d08:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x00000088u);
    c->r[2] = 0x00200000u;
    c->r[2] = c->r[3] & c->r[2];
    { int _c = (c->r[2] == 0u); if (_c) goto L_089b8d34; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r16(ram, c->r[2] + 0x00000014u);
    c->r[2] = c->r[2] | 0x0020u;
    mem_w16(ram, c->r[3] + 0x00000014u, c->r[2]);
L_089b8d34:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x00000088u);
    c->r[2] = 0x00400000u;
    c->r[2] = c->r[3] & c->r[2];
    { int _c = (c->r[2] == 0u); if (_c) goto L_089b8d60; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r16(ram, c->r[2] + 0x00000014u);
    c->r[2] = c->r[2] | 0x0100u;
    mem_w16(ram, c->r[3] + 0x00000014u, c->r[2]);
L_089b8d60:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x00000088u);
    c->r[2] = 0x00800000u;
    c->r[2] = c->r[3] & c->r[2];
    { int _c = (c->r[2] == 0u); if (_c) goto L_089b8d8c; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r16(ram, c->r[2] + 0x00000014u);
    c->r[2] = c->r[2] | 0x0040u;
    mem_w16(ram, c->r[3] + 0x00000014u, c->r[2]);
L_089b8d8c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000088u);
    c->r[2] = c->r[2] & 0x4000u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_089b8db4; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r16(ram, c->r[2] + 0x00000014u);
    c->r[2] = c->r[2] | 0x0200u;
    mem_w16(ram, c->r[3] + 0x00000014u, c->r[2]);
L_089b8db4:
    c->r[4] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r8(ram, c->r[2] + 0x00000085u);
    c->r[2] = 0x08a60000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0xffffa978u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000000u);
    c->r[2] = c->r[2] >> 1;
    mem_w8(ram, c->r[4] + 0x0000003du, c->r[2]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r8(ram, c->r[2] + 0x00000086u);
    c->r[2] = 0x08a60000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0xffffa97cu);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000000u);
    c->r[2] = c->r[2] >> 1;
    mem_w8(ram, c->r[4] + 0x0000003eu, c->r[2]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r8(ram, c->r[2] + 0x00000086u);
    c->r[2] = 0x08a60000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0xffffa97cu);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000000u);
    c->r[2] = c->r[2] >> 1;
    mem_w8(ram, c->r[4] + 0x0000003fu, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    mem_w32(ram, c->r[3] + 0x00000018u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r16(ram, c->r[2] + 0x000000a8u);
    mem_w16(ram, c->r[3] + 0x00000030u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r16(ram, c->r[2] + 0x000000aau);
    mem_w16(ram, c->r[3] + 0x00000032u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r8(ram, c->r[2] + 0x000000b4u);
    mem_w8(ram, c->r[3] + 0x00000016u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x00000088u);
    c->r[2] = 0x02000000u;
    c->r[2] = c->r[3] & c->r[2];
    { int _c = (c->r[2] == 0u); if (_c) goto L_089b8ee4; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x000000d0u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_089b8ed0; }
    c->r[16] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r8(ram, c->r[2] + 0x000000b4u);
    c->r[2] = c->r[2] << 6;
    c->r[4] = 0x08a70000u;
    c->r[4] = c->r[4] + 0xffffb640u;
    { c->r[31] = 0x089b8ea4u; c->r[5] = c->r[2] + 0u; func_089ef638(c, ram); }
    mem_w32(ram, c->r[16] + 0x000000d0u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = c->r[2] + 0x00000050u;
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r8(ram, c->r[2] + 0x000000b4u);
    c->r[4] = c->r[3] + 0u;
    c->r[5] = mem_r32(ram, c->r[5] + 0x000000d0u);
    c->r[6] = mem_r32(ram, c->r[30] + 0x00000004u);
    { c->r[31] = 0x089b8ed0u; c->r[7] = c->r[2] + 0u; func_089b62b8(c, ram); }
L_089b8ed0:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r32(ram, c->r[3] + 0x000000d0u);
    { mem_w32(ram, c->r[2] + 0x00000034u, c->r[3]); goto L_089b8f30; }
L_089b8ee4:
    c->r[16] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r8(ram, c->r[2] + 0x000000b4u);
    c->r[2] = c->r[2] << 6;
    c->r[4] = 0x08a70000u;
    c->r[4] = c->r[4] + 0xffffb640u;
    { c->r[31] = 0x089b8f04u; c->r[5] = c->r[2] + 0u; func_089ef5ac(c, ram); }
    mem_w32(ram, c->r[16] + 0x00000034u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = c->r[2] + 0x00000050u;
    c->r[5] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r8(ram, c->r[2] + 0x000000b4u);
    c->r[4] = c->r[3] + 0u;
    c->r[5] = mem_r32(ram, c->r[5] + 0x00000034u);
    c->r[6] = mem_r32(ram, c->r[30] + 0x00000004u);
    { c->r[31] = 0x089b8f30u; c->r[7] = c->r[2] + 0u; func_089b62b8(c, ram); }
L_089b8f30:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    mem_w32(ram, c->r[3] + 0x0000009cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r16(ram, c->r[2] + 0x00000014u);
    c->r[2] = c->r[2] & 0x0040u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_089b8fc4; }
    c->r[16] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[4] = 0x08a50000u;
    { c->r[31] = 0x089b8f60u; c->r[4] = c->r[4] + 0xffffb264u; func_089c6f64(c, ram); }
    mem_w16(ram, c->r[16] + 0x00000038u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r8(ram, c->r[2] + 0x000000c8u);
    mem_w8(ram, c->r[3] + 0x0000003cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r16(ram, c->r[2] + 0x00000038u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_089b8fb0; }
    c->r[16] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[4] = 0x08a50000u;
    { c->r[31] = 0x089b8f94u; c->r[4] = c->r[4] + 0xffffb270u; func_089c6f64(c, ram); }
    mem_w16(ram, c->r[16] + 0x0000003au, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r16(ram, c->r[2] + 0x00000014u);
    c->r[2] = c->r[2] | 0x0080u;
    { mem_w16(ram, c->r[3] + 0x00000014u, c->r[2]); goto L_089b8fc4; }
L_089b8fb0:
    c->r[16] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[4] = 0x08a50000u;
    { c->r[31] = 0x089b8fc0u; c->r[4] = c->r[4] + 0xffffb27cu; func_089c6f64(c, ram); }
    mem_w16(ram, c->r[16] + 0x00000038u, c->r[2]);
L_089b8fc4:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x089b8fd0u; c->r[5] = mem_r32(ram, c->r[30] + 0x00000004u); func_089b9160(c, ram); }
L_089b8fd0:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]);
L_089b8fd8:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000028u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000024u);
    c->r[16] = mem_r32(ram, c->r[29] + 0x00000020u);
    { c->r[29] = c->r[29] + 0x00000030u; return; }
    return; /* fell out of func_089b8b50 */
}

/* func_089c27fc  0x089c27fc..0x089c2c24  1064 bytes, source=fde */
void func_089c27fc(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089c27fcu);
    c->r[29] = c->r[29] + 0xfffffec0u;
    mem_w32(ram, c->r[29] + 0x00000134u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000130u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[6]);
    c->r[2] = c->r[30] + 0x00000010u;
    { c->r[31] = 0x089c2824u; c->r[4] = c->r[2] + 0u; func_08808260(c, ram); }
    c->r[2] = c->r[30] + 0x00000010u;
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0u + 0u;
    { c->r[31] = 0x089c2838u; c->r[6] = mem_r32(ram, c->r[30] + 0x00000004u); func_0884c668(c, ram); }
    c->r[2] = c->r[30] + 0x00000050u;
    { c->r[31] = 0x089c2844u; c->r[4] = c->r[2] + 0u; func_08808240(c, ram); }
    c->r[2] = c->r[30] + 0x00000060u;
    { c->r[31] = 0x089c2850u; c->r[4] = c->r[2] + 0u; func_08808240(c, ram); }
    c->r[2] = c->r[30] + 0x00000050u;
    c->r[3] = c->r[30] + 0x00000010u;
    c->r[4] = c->r[2] + 0u;
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000008u);
    { c->r[31] = 0x089c2868u; c->r[6] = c->r[3] + 0u; func_0884c2bc(c, ram); }
    c->r[4] = c->r[30] + 0x00000060u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[2] + 0x00000010u;
    c->r[3] = c->r[30] + 0x00000010u;
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x089c2884u; c->r[6] = c->r[3] + 0u; func_0884c2bc(c, ram); }
    c->r[2] = c->r[30] + 0x00000070u;
    { c->r[31] = 0x089c2890u; c->r[4] = c->r[2] + 0u; func_08808240(c, ram); }
    c->r[2] = c->r[30] + 0x00000070u;
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x089c28a0u; c->r[5] = mem_r32(ram, c->r[30] + 0x00000000u); func_089c660c(c, ram); }
    c->r[2] = c->r[30] + 0x00000050u;
    c->r[3] = c->r[30] + 0x00000050u;
    c->r[6] = c->r[30] + 0x00000070u;
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x089c28b8u; c->r[5] = c->r[3] + 0u; func_089c65c8(c, ram); }
    c->r[2] = c->r[30] + 0x00000060u;
    c->r[3] = c->r[30] + 0x00000060u;
    c->r[6] = c->r[30] + 0x00000070u;
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x089c28d0u; c->r[5] = c->r[3] + 0u; func_089c65c8(c, ram); }
    c->r[2] = c->r[30] + 0x00000080u;
    { c->r[31] = 0x089c28dcu; c->r[4] = c->r[2] + 0u; func_08808240(c, ram); }
    c->r[2] = c->r[30] + 0x00000080u;
    c->r[3] = c->r[30] + 0x00000060u;
    c->r[6] = c->r[30] + 0x00000050u;
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x089c28f4u; c->r[5] = c->r[3] + 0u; func_08820ca4(c, ram); }
    c->r[2] = c->r[30] + 0x00000080u;
    { c->r[31] = 0x089c2900u; c->r[4] = c->r[2] + 0u; func_088bf600(c, ram); }
    mem_wf32(ram, c->r[30] + 0x00000090u, c->f[0]);
    c->r[2] = c->r[30] + 0x000000a0u;
    { c->r[31] = 0x089c2910u; c->r[4] = c->r[2] + 0u; func_08808240(c, ram); }
    c->r[2] = c->r[30] + 0x000000a0u;
    c->r[3] = c->r[30] + 0x00000080u;
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x089c2924u; c->r[5] = c->r[3] + 0u; func_0884c1d8(c, ram); }
    c->r[2] = c->r[30] + 0x00000050u;
    { c->r[31] = 0x089c2930u; c->r[4] = c->r[2] + 0u; func_088bf600(c, ram); }
    mem_wf32(ram, c->r[30] + 0x000000b0u, c->f[0]);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x000000b0u);
    c->r[1] = 0x08a50000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffffb2c4u);
    alx_c_cond_s(c, 12, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_089c2958; }
    { goto L_089c2960; }
L_089c2958:
    { mem_w32(ram, c->r[30] + 0x00000124u, 0u); goto L_089c2c0c; }
L_089c2960:
    c->r[2] = c->r[30] + 0x000000c0u;
    { c->r[31] = 0x089c296cu; c->r[4] = c->r[2] + 0u; func_08808240(c, ram); }
    c->r[2] = c->r[30] + 0x000000c0u;
    c->r[3] = c->r[30] + 0x00000050u;
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x089c2980u; c->r[5] = c->r[3] + 0u; func_0884c1d8(c, ram); }
    c->r[2] = c->r[30] + 0x000000c0u;
    c->r[3] = c->r[30] + 0x000000c0u;
    c->r[1] = 0x08a50000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffffb2c8u);
    c->r[4] = c->r[2] + 0u;
    c->r[5] = c->r[3] + 0u;
    { c->r[31] = 0x089c29a0u; c->f[12] = c->f[0]; func_0884c224(c, ram); }
    c->r[2] = c->r[30] + 0x000000c0u;
    c->r[3] = c->r[30] + 0x000000a0u;
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x089c29b4u; c->r[5] = c->r[3] + 0u; func_0885a018(c, ram); }
    mem_wf32(ram, c->r[30] + 0x000000d0u, c->f[0]);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x000000d0u);
    c->f[0] = u2f(0u);
    alx_c_cond_s(c, 12, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_089c29d8; }
    { goto L_089c29e0; }
L_089c29d8:
    { mem_w32(ram, c->r[30] + 0x00000124u, 0u); goto L_089c2c0c; }
L_089c29e0:
    c->f[1] = mem_rf32(ram, c->r[30] + 0x000000d0u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x000000d0u);
    c->f[1] = c->f[1] * c->f[0];
    c->f[0] = mem_rf32(ram, c->r[30] + 0x000000b0u);
    c->f[0] = c->f[1] * c->f[0];
    mem_wf32(ram, c->r[30] + 0x000000d4u, c->f[0]);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x000000b0u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x000000d4u);
    c->f[0] = c->f[1] - c->f[0];
    mem_wf32(ram, c->r[30] + 0x000000d8u, c->f[0]);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x000000d8u);
    c->r[1] = 0x08a50000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffffb2c4u);
    alx_c_cond_s(c, 12, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_089c2a2c; }
    { goto L_089c2a34; }
L_089c2a2c:
    { mem_w32(ram, c->r[30] + 0x00000124u, 0u); goto L_089c2c0c; }
L_089c2a34:
    c->r[1] = 0x08a50000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0xffffb2c4u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x000000d8u);
    c->f[0] = c->f[1] - c->f[0];
    mem_wf32(ram, c->r[30] + 0x000000dcu, c->f[0]);
    { c->r[31] = 0x089c2a50u; c->f[12] = mem_rf32(ram, c->r[30] + 0x000000d4u); func_08a104b4(c, ram); }
    mem_wf32(ram, c->r[30] + 0x000000e0u, c->f[0]);
    { c->r[31] = 0x089c2a5cu; c->f[12] = mem_rf32(ram, c->r[30] + 0x000000dcu); func_08a104b4(c, ram); }
    mem_wf32(ram, c->r[30] + 0x000000e4u, c->f[0]);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x000000e0u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x000000e4u);
    c->f[0] = c->f[1] - c->f[0];
    mem_wf32(ram, c->r[30] + 0x000000e8u, c->f[0]);
    { c->r[31] = 0x089c2a78u; c->f[12] = mem_rf32(ram, c->r[30] + 0x00000090u); func_08a104b4(c, ram); }
    mem_wf32(ram, c->r[30] + 0x000000ecu, c->f[0]);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x000000e8u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x000000ecu);
    alx_c_cond_s(c, 12, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_089c2a9c; }
    { goto L_089c2aa4; }
L_089c2a9c:
    { mem_w32(ram, c->r[30] + 0x00000124u, 0u); goto L_089c2c0c; }
L_089c2aa4:
    c->r[2] = c->r[30] + 0x000000f0u;
    { c->r[31] = 0x089c2ab0u; c->r[4] = c->r[2] + 0u; func_08808240(c, ram); }
    c->r[2] = c->r[30] + 0x000000f0u;
    c->r[3] = c->r[30] + 0x000000a0u;
    c->r[4] = c->r[2] + 0u;
    c->r[5] = c->r[3] + 0u;
    { c->r[31] = 0x089c2ac8u; c->f[12] = mem_rf32(ram, c->r[30] + 0x000000e8u); func_0884c224(c, ram); }
    c->r[2] = c->r[30] + 0x000000f0u;
    c->r[3] = c->r[30] + 0x000000f0u;
    c->r[6] = c->r[30] + 0x00000050u;
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x089c2ae0u; c->r[5] = c->r[3] + 0u; func_08859fd4(c, ram); }
    c->r[2] = c->r[30] + 0x000000f0u;
    c->r[3] = c->r[30] + 0x000000f0u;
    c->r[4] = c->r[2] + 0u;
    c->r[5] = c->r[3] + 0u;
    { c->r[31] = 0x089c2af8u; c->r[6] = mem_r32(ram, c->r[30] + 0x00000000u); func_089c65c8(c, ram); }
    c->r[2] = c->r[30] + 0x00000100u;
    { c->r[31] = 0x089c2b04u; c->r[4] = c->r[2] + 0u; func_08808240(c, ram); }
    c->r[2] = c->r[30] + 0x00000100u;
    c->r[3] = c->r[30] + 0x000000f0u;
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x089c2b18u; c->r[5] = c->r[3] + 0u; func_0884c1d8(c, ram); }
    c->r[2] = c->r[30] + 0x000000f0u;
    c->r[3] = c->r[30] + 0x000000f0u;
    c->r[4] = c->r[2] + 0u;
    c->r[5] = c->r[3] + 0u;
    { c->r[31] = 0x089c2b30u; c->r[6] = mem_r32(ram, c->r[30] + 0x00000004u); func_0884c2bc(c, ram); }
    c->r[2] = c->r[30] + 0x00000100u;
    c->r[3] = c->r[30] + 0x00000100u;
    c->r[4] = c->r[2] + 0u;
    c->r[5] = c->r[3] + 0u;
    { c->r[31] = 0x089c2b48u; c->r[6] = mem_r32(ram, c->r[30] + 0x00000004u); func_0889a7d8(c, ram); }
    c->r[2] = c->r[30] + 0x00000110u;
    { c->r[31] = 0x089c2b54u; c->r[4] = c->r[2] + 0u; func_08808240(c, ram); }
    c->r[2] = c->r[30] + 0x00000110u;
    c->r[3] = c->r[30] + 0x000000f0u;
    c->r[4] = c->r[2] + 0u;
    c->r[5] = c->r[3] + 0u;
    { c->r[31] = 0x089c2b6cu; c->r[6] = mem_r32(ram, c->r[30] + 0x00000008u); func_08820ca4(c, ram); }
    c->r[2] = c->r[30] + 0x00000110u;
    { c->r[31] = 0x089c2b78u; c->r[4] = c->r[2] + 0u; func_08820c6c(c, ram); }
    mem_wf32(ram, c->r[30] + 0x00000120u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000120u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000068u);
    alx_c_cond_s(c, 12, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_089c2ba0; }
    { goto L_089c2ba8; }
L_089c2ba0:
    { mem_w32(ram, c->r[30] + 0x00000124u, 0u); goto L_089c2c0c; }
L_089c2ba8:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000120u);
    mem_wf32(ram, c->r[2] + 0x00000068u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[3] = c->r[2] + 0x00000040u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000f0u);
    mem_w32(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000f4u);
    mem_w32(ram, c->r[3] + 0x00000004u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000f8u);
    mem_w32(ram, c->r[3] + 0x00000008u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000fcu);
    mem_w32(ram, c->r[3] + 0x0000000cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[3] = c->r[2] + 0x00000050u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000100u);
    mem_w32(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000104u);
    mem_w32(ram, c->r[3] + 0x00000004u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000108u);
    mem_w32(ram, c->r[3] + 0x00000008u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000010cu);
    mem_w32(ram, c->r[3] + 0x0000000cu, c->r[2]);
    c->r[2] = 0u + 0x00000001u;
    mem_w32(ram, c->r[30] + 0x00000124u, c->r[2]);
L_089c2c0c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000124u);
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000134u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000130u);
    { c->r[29] = c->r[29] + 0x00000140u; return; }
    return; /* fell out of func_089c27fc */
}

/* func_089c6330  0x089c6330..0x089c6360  48 bytes, source=sweep */
void func_089c6330(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089c6330u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    { c->r[31] = 0x089c634cu; c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u); func_08808240(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_089c6330 */
}

/* func_089c8b60  0x089c8b60..0x089c8b88  40 bytes, source=sweep */
void func_089c8b60(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089c8b60u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000019u);
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_089c8b60 */
}

/* func_089caae8  0x089caae8..0x089cab10  40 bytes, source=sweep */
void func_089caae8(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089caae8u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    mem_w32(ram, c->r[2] + 0x0000012cu, 0u);
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_089caae8 */
}

/* func_089cd600  0x089cd600..0x089cd654  84 bytes, source=sweep */
void func_089cd600(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089cd600u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x0000001du);
    c->r[2] = 0u + 0x00000001u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_089cd644; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000038u);
    c->r[1] = 0x08a80000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00002e44u);
    c->f[0] = c->f[1] - c->f[0];
    mem_wf32(ram, c->r[3] + 0x00000038u, c->f[0]);
L_089cd644:
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_089cd600 */
}

/* func_089d2354  0x089d2354..0x089d2394  64 bytes, source=sweep */
void func_089d2354(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089d2354u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[6]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000004u);
    { c->r[31] = 0x089d2380u; c->r[6] = mem_r32(ram, c->r[30] + 0x00000008u); func_089d2a0c(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_089d2354 */
}

/* func_089d3268  0x089d3268..0x089d32cc  100 bytes, source=sweep */
void func_089d3268(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089d3268u);
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
    { c->r[31] = 0x089d32b8u; c->r[5] = c->r[2] + 0u; func_089d20f0(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_089d3268 */
}

/* func_089d4b18  0x089d4b18..0x089d4c48  304 bytes, source=fde */
void func_089d4b18(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089d4b18u);
    c->r[29] = c->r[29] + 0xffffffb0u;
    mem_w32(ram, c->r[29] + 0x00000044u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000040u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[2] = c->r[5] + 0u;
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[6]);
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[7]);
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[8]);
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[9]);
    mem_w16(ram, c->r[30] + 0x00000004u, c->r[2]);
    c->r[2] = c->r[30] + 0x00000020u;
    { c->r[31] = 0x089d4b50u; c->r[4] = c->r[2] + 0u; hle_dispatch_stub(c, ram, 0x08a24b3cu); /* sceNetGetLocalEtherAddr */ }
    mem_w32(ram, c->r[30] + 0x00000030u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000030u);
    { int _c = ((s32)c->r[2] >= 0); if (_c) goto L_089d4b68; }
    { goto L_089d4c34; }
L_089d4b68:
    c->r[2] = c->r[30] + 0x00000020u;
    c->r[3] = mem_r16(ram, c->r[30] + 0x00000004u);
    c->r[4] = c->r[2] + 0u;
    c->r[5] = c->r[3] + 0u;
    c->r[6] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[7] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[8] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[9] = mem_r32(ram, c->r[30] + 0x00000014u);
    { c->r[31] = 0x089d4b90u; c->r[10] = 0u + 0u; hle_dispatch_stub(c, ram, 0x08a24bb4u); /* sceNetAdhocPtpListen */ }
    mem_w32(ram, c->r[30] + 0x00000030u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000030u);
    { int _c = ((s32)c->r[2] >= 0); if (_c) goto L_089d4ba8; }
    { goto L_089d4c34; }
L_089d4ba8:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000024u;
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0u + 0u;
    { c->r[31] = 0x089d4bc0u; c->r[6] = 0u + 0x0000001cu; func_08a19ec4(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000040u;
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0u + 0u;
    { c->r[31] = 0x089d4bd8u; c->r[6] = 0u + 0x00000007u; func_08a19ec4(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000048u;
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0u + 0u;
    { c->r[31] = 0x089d4bf0u; c->r[6] = 0u + 0x0000001cu; func_08a19ec4(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000064u;
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0u + 0u;
    { c->r[31] = 0x089d4c08u; c->r[6] = 0u + 0x00000007u; func_08a19ec4(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x0000006bu;
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0u + 0u;
    { c->r[31] = 0x089d4c20u; c->r[6] = 0u + 0x00000700u; func_08a19ec4(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    mem_w32(ram, c->r[2] + 0x00000020u, 0u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000030u);
    mem_w32(ram, c->r[3] + 0x0000001cu, c->r[2]);
L_089d4c34:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000044u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000040u);
    { c->r[29] = c->r[29] + 0x00000050u; return; }
    return; /* fell out of func_089d4b18 */
}

/* func_089d5ee0  0x089d5ee0..0x089d5f80  160 bytes, source=sweep */
void func_089d5ee0(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089d5ee0u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[6]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    mem_w32(ram, c->r[3] + 0x000060d4u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    mem_w32(ram, c->r[3] + 0x000060d8u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[4] = mem_r32(ram, c->r[2] + 0x000060d4u);
    c->r[2] = mem_r32(ram, c->r[3] + 0x000060d8u);
    c->r[2] = c->r[4] + c->r[2];
    c->r[1] = 0x08b90000u;
    mem_w32(ram, c->r[1] + 0x00000540u, c->r[2]);
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000540u);
    c->r[2] = 0xffff0000u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[1] = 0x08b90000u;
    mem_w32(ram, c->r[1] + 0x00000540u, c->r[2]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x000060d8u);
    c->r[2] = 0xffff0000u;
    c->r[2] = c->r[3] + c->r[2];
    mem_w32(ram, c->r[4] + 0x000060d8u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[3] + c->r[2];
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_089d5ee0 */
}

/* func_089d7cf0  0x089d7cf0..0x089d7d14  36 bytes, source=residue */
void func_089d7cf0(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089d7cf0u);
    c->r[29] = c->r[29] + 0xfffffff0u;
    mem_w32(ram, c->r[29] + 0x00000000u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    c->r[2] = 0x08b90000u;
    c->r[2] = c->r[2] + 0x00000544u;
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000000u);
    { c->r[29] = c->r[29] + 0x00000010u; return; }
    return; /* fell out of func_089d7cf0 */
}

/* func_089d93d0  0x089d93d0..0x089d9468  152 bytes, source=sweep */
void func_089d93d0(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089d93d0u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[6]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[3];
    c->r[2] = c->r[2] + 0x0000001cu;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    mem_w32(ram, c->r[4] + 0x00000000u, c->r[2]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[3];
    c->r[2] = c->r[2] + 0x00000008u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    mem_w32(ram, c->r[4] + 0x00000004u, c->r[2]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[3];
    c->r[2] = c->r[2] + 0x00000008u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    mem_w32(ram, c->r[4] + 0x00000008u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_089d9458; }
L_089d9458:
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_089d93d0 */
}

/* func_089da31c  0x089da31c..0x089da36c  80 bytes, source=sweep */
void func_089da31c(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089da31cu);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[2] = 0u + 0x00000002u;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_089da34c; }
    c->r[2] = 0u + 0xffffffffu;
    { mem_w32(ram, c->r[30] + 0x00000004u, c->r[2]); goto L_089da358; }
L_089da34c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000030u);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[2]);
L_089da358:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_089da31c */
}

/* func_089db98c  0x089db98c..0x089db9c8  60 bytes, source=sweep */
void func_089db98c(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089db98cu);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000004u);
    { c->r[31] = 0x089db9b4u; c->r[6] = 0u + 0x00000001u; func_089dbd58(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_089db98c */
}

/* func_089dd064  0x089dd064..0x089dd138  212 bytes, source=fde */
void func_089dd064(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089dd064u);
    c->r[29] = c->r[29] + 0xffffffd0u;
    mem_w32(ram, c->r[29] + 0x00000024u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000020u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[6]);
    c->r[2] = 0u + 0x00000800u;
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    alx_mult(c, c->r[3], c->r[2]);
    c->r[2] = c->lo;
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x089dd0b0u; c->r[6] = c->r[2] + 0u; func_089ddc50(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = 0x80210000u;
    c->r[2] = c->r[2] | 0x0003u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_089dd0d0; }
    { mem_w32(ram, c->r[30] + 0x00000018u, 0u); goto L_089dd120; }
L_089dd0d0:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    alx_div(c, c->r[2], c->r[3]);
    c->r[2] = c->hi;
    if (c->r[3] == 0u) { recomp_break(c, ram, 0x089dd0e4u, 0x7u); goto L_089dd0e8; }
L_089dd0e8:
    { int _c = (c->r[2] == 0u); if (_c) goto L_089dd0fc; }
    c->r[2] = 0u + 0xffffffffu;
    { mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]); goto L_089dd120; }
L_089dd0fc:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    alx_div(c, c->r[3], c->r[2]);
    c->r[3] = c->lo;
    if (c->r[2] == 0u) { recomp_break(c, ram, 0x089dd110u, 0x7u); goto L_089dd114; }
L_089dd114:
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[3]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]);
L_089dd120:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000024u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000020u);
    { c->r[29] = c->r[29] + 0x00000030u; return; }
    return; /* fell out of func_089dd064 */
}

/* func_089de884  0x089de884..0x089de8d4  80 bytes, source=fde */
void func_089de884(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089de884u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[5] = mem_r32(ram, c->r[30] + 0x0000000cu);
    { c->r[31] = 0x089de8c0u; c->f[12] = mem_rf32(ram, c->r[2] + 0x00000014u); func_089f23b0(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_089de884 */
}

/* func_089e1bb0  0x089e1bb0..0x089e1bf0  64 bytes, source=sweep */
void func_089e1bb0(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089e1bb0u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[6]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000004u);
    { c->r[31] = 0x089e1bdcu; c->r[6] = mem_r32(ram, c->r[30] + 0x00000008u); func_089e29bc(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_089e1bb0 */
}

/* func_089e26cc  0x089e26cc..0x089e2708  60 bytes, source=sweep */
void func_089e26cc(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089e26ccu);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = 0u + 0x00000007u;
    { c->r[31] = 0x089e26f4u; c->r[6] = mem_r32(ram, c->r[30] + 0x00000004u); func_089e4564(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_089e26cc */
}

/* func_089e38bc  0x089e38bc..0x089e3924  104 bytes, source=sweep */
void func_089e38bc(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089e38bcu);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_wf32(ram, c->r[30] + 0x00000004u, c->f[12]);
    mem_wf32(ram, c->r[30] + 0x00000008u, c->f[13]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = c->r[2] >> 8;
    c->r[2] = 0x48000000u;
    c->r[2] = c->r[3] | c->r[2];
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x089e38f4u; c->r[5] = c->r[2] + 0u; func_089e1908(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[3] = c->r[2] >> 8;
    c->r[2] = 0x49000000u;
    c->r[2] = c->r[3] | c->r[2];
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x089e3910u; c->r[5] = c->r[2] + 0u; func_089e1908(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_089e38bc */
}

/* func_089e4a2c  0x089e4a2c..0x089e4a70  68 bytes, source=sweep */
void func_089e4a2c(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089e4a2cu);
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
    { c->r[31] = 0x089e4a5cu; c->r[5] = c->r[2] + 0u; func_089e1908(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_089e4a2c */
}

/* func_089ea080  0x089ea080..0x089ea0e4  100 bytes, source=sweep */
void func_089ea080(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089ea080u);
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
    { c->r[31] = 0x089ea0d0u; c->r[5] = c->r[2] + 0u; func_089ea03c(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_089ea080 */
}

/* func_089eafb8  0x089eafb8..0x089eaffc  68 bytes, source=sweep */
void func_089eafb8(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089eafb8u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = 0x1f000000u;
    c->r[2] = c->r[2] | c->r[3];
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x089eafe8u; c->r[5] = c->r[2] + 0u; func_089ea03c(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_089eafb8 */
}

/* func_089eefec  0x089eefec..0x089ef030  68 bytes, source=sweep */
void func_089eefec(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089eefecu);
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
    return; /* fell out of func_089eefec */
}

/* func_089f0c04  0x089f0c04..0x089f0c48  68 bytes, source=sweep */
void func_089f0c04(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089f0c04u);
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
    { c->r[31] = 0x089f0c34u; c->r[5] = c->r[2] + 0u; func_089f0338(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_089f0c04 */
}

/* func_089f23b0  0x089f23b0..0x089f24ac  252 bytes, source=sweep */
void func_089f23b0(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089f23b0u);
    c->r[29] = c->r[29] + 0xffffffd0u;
    mem_w32(ram, c->r[29] + 0x00000024u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000020u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    mem_wf32(ram, c->r[30] + 0x00000008u, c->f[12]);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000008u);
    c->r[1] = 0x08a50000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffffc54cu);
    alx_c_cond_s(c, 14, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_089f23f0; }
    { goto L_089f23f8; }
L_089f23f0:
    { mem_w32(ram, c->r[30] + 0x00000014u, 0u); goto L_089f2494; }
L_089f23f8:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000004u);
    { c->r[31] = 0x089f2404u; c->r[5] = mem_r32(ram, c->r[30] + 0x00000000u); func_0884d0b0(c, ram); }
    mem_wf32(ram, c->r[30] + 0x0000000cu, c->f[0]);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x0000000cu);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000008u);
    c->f[1] = c->f[1] - c->f[0];
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000058u);
    alx_c_cond_s(c, 12, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_089f2434; }
    { goto L_089f2440; }
L_089f2434:
    c->r[2] = 0u + 0x00000002u;
    { mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]); goto L_089f2494; }
L_089f2440:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000400u;
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->f[12] = mem_rf32(ram, c->r[30] + 0x00000008u);
    { c->r[31] = 0x089f2458u; c->r[5] = c->r[2] + 0u; func_089f2a20(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_089f2470; }
    { mem_w32(ram, c->r[30] + 0x00000014u, 0u); goto L_089f2494; }
L_089f2470:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = 0u + 0xffffffffu;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_089f248c; }
    c->r[2] = 0u + 0x00000002u;
    { mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]); goto L_089f2494; }
L_089f248c:
    c->r[2] = 0u + 0x00000001u;
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
L_089f2494:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000024u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000020u);
    { c->r[29] = c->r[29] + 0x00000030u; return; }
    return; /* fell out of func_089f23b0 */
}

/* func_089f5690  0x089f5690..0x089f56b0  32 bytes, source=sweep */
void func_089f5690(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089f5690u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_089f5690 */
}

/* func_089f8068  0x089f8068..0x089f8108  160 bytes, source=sweep */
void func_089f8068(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089f8068u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r8(ram, c->r[2] + 0x0000000du);
    { int _c = (c->r[2] != 0u); if (_c) goto L_089f80ec; }
    mem_w32(ram, c->r[30] + 0x00000004u, 0u);
L_089f808c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000016u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_089f80a4; }
    { goto L_089f80ec; }
L_089f80a4:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 5;
    c->r[2] = mem_r32(ram, c->r[4] + 0x000039f0u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000095u);
    { int _c = ((s32)c->r[2] > 0); if (_c) goto L_089f80dc; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    { mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]); goto L_089f80f4; }
L_089f80dc:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000004u, c->r[2]); goto L_089f808c; }
L_089f80ec:
    c->r[2] = 0u + 0xffffffffu;
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]);
L_089f80f4:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_089f8068 */
}

/* func_089f921c  0x089f921c..0x089f9224  8 bytes, source=residue */
void func_089f921c(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089f921cu);
    { c->r[2] = 0u + 0u; return; }
    return; /* fell out of func_089f921c */
}

/* func_089fa0b8  0x089fa0b8..0x089fa0e4  44 bytes, source=sweep */
void func_089fa0b8(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089fa0b8u);
    c->r[6] = c->r[4] + 0u;
    c->r[7] = 0u + 0u;
L_089fa0c0:
    c->r[2] = mem_r8(ram, c->r[6] + 0x00000000u);
    c->r[3] = c->r[5] + c->r[7];
    c->r[7] = c->r[7] + 0x00000001u;
    c->r[4] = ((s32)c->r[7] < (s32)0x00000020u) ? 1u : 0u;
    mem_w8(ram, c->r[3] + 0x00000000u, c->r[2]);
    { int _c = (c->r[4] != 0u); c->r[6] = c->r[6] + 0x0000004cu; if (_c) goto L_089fa0c0; }
    { return; }
    return; /* fell out of func_089fa0b8 */
}

/* func_089fa95c  0x089fa95c..0x089fa9dc  128 bytes, source=sweep */
void func_089fa95c(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089fa95cu);
    c->r[5] = c->r[4] + 0x000002f4u;
    c->r[9] = 0u + 0u;
    c->r[7] = 0u + 0x0000003fu;
    c->r[8] = 0u + 0xffffffffu;
    c->r[6] = c->r[5] + 0u;
L_089fa970:
    c->r[2] = mem_r32(ram, c->r[5] + 0x00000000u);
    { int _c = (c->r[2] != c->r[8]); c->r[5] = c->r[5] + 0xfffffff4u; if (_c) goto L_089fa9c8; }
    c->r[7] = c->r[7] + 0xffffffffu;
    { int _c = ((s32)c->r[7] >= 0); c->r[6] = c->r[6] + 0xfffffff4u; if (_c) goto L_089fa970; }
L_089fa988:
    c->r[3] = 0x80000000u;
    c->r[2] = 0u + 0xffffffffu;
    { int _c = (c->r[7] == c->r[2]); c->r[3] = c->r[3] | 0x001du; if (_c) goto L_089fa9c0; }
    c->r[2] = 0u | 0x8000u;
    c->r[4] = c->r[4] + c->r[2];
    c->r[3] = mem_r32(ram, c->r[4] + 0x00004700u);
    { int _c = ((s32)c->r[3] <= 0); c->r[3] = 0u + 0u; if (_c) goto L_089fa9c0; }
    c->r[3] = mem_r32(ram, c->r[9] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[4] + 0x00004704u);
    c->r[2] = c->r[2] - c->r[3];
    mem_w32(ram, c->r[4] + 0x00004704u, c->r[2]);
    c->r[3] = 0u + 0u;
L_089fa9c0:
    { c->r[2] = c->r[3] + 0u; return; }
L_089fa9c8:
    c->r[9] = mem_r32(ram, c->r[6] + 0x00000008u);
    mem_w32(ram, c->r[6] + 0x00000000u, c->r[8]);
    mem_w32(ram, c->r[6] + 0x00000008u, 0u);
    { mem_w32(ram, c->r[6] + 0x00000004u, 0u); goto L_089fa988; }
    return; /* fell out of func_089fa95c */
}

/* func_089fb264  0x089fb264..0x089fb34c  232 bytes, source=fde */
void func_089fb264(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089fb264u);
    c->r[29] = c->r[29] + 0xffffffd0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[21]);
    c->r[2] = 0x08a50000u;
    c->r[21] = 0u + 0xffffffffu;
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[20]);
    mem_w32(ram, c->r[29] + 0x0000000cu, c->r[19]);
    c->r[19] = 0u + 0u;
    mem_w32(ram, c->r[29] + 0x00000008u, c->r[18]);
    c->r[18] = c->r[5] + 0u;
    mem_w32(ram, c->r[29] + 0x00000004u, c->r[17]);
    c->r[17] = alx_seh(c->r[4]);
    mem_w32(ram, c->r[29] + 0x00000018u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000000u, c->r[16]);
    mem_wf32(ram, c->r[29] + 0x00000020u, c->f[20]);
    mem_w16(ram, c->r[5] + 0x00000006u, 0u);
    c->f[20] = mem_rf32(ram, c->r[2] + 0xffffd188u);
    c->r[2] = 0x08b90000u;
    c->r[20] = c->r[2] + 0x00006594u;
L_089fb2ac:
    c->r[2] = c->r[17] << 5;
    c->r[4] = c->r[17] + 0u;
    { c->r[31] = 0x089fb2bcu; c->r[16] = c->r[2] + c->r[20]; func_089fb3b8(c, ram); }
    c->r[3] = 0x80000000u;
    { int _c = (c->r[2] == 0u); c->r[3] = c->r[3] | 0x0007u; if (_c) goto L_089fb320; }
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[16] + 0x0000000au);
    if (c->r[2] == c->r[21]) { c->r[2] = mem_r32(ram, c->r[16] + 0x00000000u); goto L_089fb2f8; }
    c->r[2] = mem_r16(ram, c->r[18] + 0x00000006u);
    c->r[4] = mem_r8(ram, c->r[16] + 0x0000000au);
    c->r[3] = c->r[2] & 0xffffu;
    c->r[3] = c->r[18] + c->r[3];
    c->r[2] = c->r[2] + 0x00000001u;
    mem_w8(ram, c->r[3] + 0x00000028u, c->r[17]);
    mem_w8(ram, c->r[3] + 0x00000008u, c->r[4]);
    mem_w16(ram, c->r[18] + 0x00000006u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[16] + 0x00000000u);
L_089fb2f8:
    c->r[3] = (u32)(s32)(s16)mem_r16(ram, c->r[16] + 0x00000008u);
    c->f[0] = mem_rf32(ram, c->r[16] + 0x00000004u);
    c->r[17] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x00000004u);
    c->r[3] = c->r[19] + c->r[3];
    c->f[20] = c->f[20] * c->f[0];
    { int _c = ((s32)c->r[17] >= 0); c->r[19] = c->r[3] + 0xffffffc0u; if (_c) goto L_089fb2ac; }
    mem_wf32(ram, c->r[18] + 0x00000000u, c->f[20]);
    mem_w16(ram, c->r[18] + 0x00000004u, c->r[3]);
    c->r[3] = 0u + 0u;
L_089fb320:
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000018u);
    c->r[21] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[20] = mem_r32(ram, c->r[29] + 0x00000010u);
    c->r[19] = mem_r32(ram, c->r[29] + 0x0000000cu);
    c->r[18] = mem_r32(ram, c->r[29] + 0x00000008u);
    c->r[17] = mem_r32(ram, c->r[29] + 0x00000004u);
    c->r[16] = mem_r32(ram, c->r[29] + 0x00000000u);
    c->f[20] = mem_rf32(ram, c->r[29] + 0x00000020u);
    c->r[2] = c->r[3] + 0u;
    { c->r[29] = c->r[29] + 0x00000030u; return; }
    return; /* fell out of func_089fb264 */
}

/* func_089fbfcc  0x089fbfcc..0x089fbfec  32 bytes, source=sweep */
void func_089fbfcc(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089fbfccu);
    c->r[29] = c->r[29] + 0xfffffff0u;
    c->r[4] = 0u + 0x00000001u;
    mem_w32(ram, c->r[29] + 0x00000000u, c->r[31]);
    { c->r[31] = 0x089fbfe0u; c->r[5] = 0u | 0xffffu; func_089fbf88(c, ram); }
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000000u);
    { c->r[29] = c->r[29] + 0x00000010u; return; }
    return; /* fell out of func_089fbfcc */
}

/* func_089fceb0  0x089fceb0..0x089fcf68  184 bytes, source=sweep */
void func_089fceb0(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089fceb0u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    c->r[5] = c->r[4] + 0u;
    mem_w32(ram, c->r[29] + 0x00000004u, c->r[17]);
    c->r[17] = c->r[4] + 0u;
    c->r[4] = 0u + 0u;
    mem_w32(ram, c->r[29] + 0x00000008u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000000u, c->r[16]);
    mem_wf32(ram, c->r[29] + 0x00000014u, c->f[21]);
    c->f[21] = c->f[12];
    { c->r[31] = 0x089fcedcu; mem_wf32(ram, c->r[29] + 0x00000010u, c->f[20]); func_089fa398(c, ram); }
    c->r[16] = c->r[2] + 0u;
    c->r[2] = mem_r16(ram, c->r[2] + 0x0000001cu);
    c->r[4] = mem_r16(ram, c->r[16] + 0x0000002au);
    mem_wf32(ram, c->r[16] + 0x00000030u, c->f[21]);
    c->f[0] = u2f(c->r[2]);
    c->r[2] = mem_r16(ram, c->r[16] + 0x0000003au);
    c->f[20] = (f32)(s32)f2u(c->f[0]);
    c->r[4] = c->r[4] + c->r[2];
    { c->r[31] = 0x089fcf04u; c->r[4] = alx_seh(c->r[4]); func_089fcc88(c, ram); }
    c->f[20] = c->f[20] * c->f[21];
    c->r[2] = 0x08a50000u;
    c->f[0] = c->f[20] * c->f[0];
    c->f[20] = mem_rf32(ram, c->r[2] + 0xffffd26cu);
    alx_c_cond_s(c, 14, c->f[20], c->f[0]);
    if ((c->fcr31 & FCR31_C) != 0u) { c->f[0] = c->f[0] - c->f[20]; goto L_089fcf54; }
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    c->r[3] = f2u(c->f[0]);
L_089fcf2c:
    mem_w16(ram, c->r[16] + 0x00000048u, c->r[3]);
    { c->r[31] = 0x089fcf38u; c->r[4] = c->r[17] + 0u; func_089fa460(c, ram); }
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000008u);
    c->r[17] = mem_r32(ram, c->r[29] + 0x00000004u);
    c->r[16] = mem_r32(ram, c->r[29] + 0x00000000u);
    c->f[21] = mem_rf32(ram, c->r[29] + 0x00000014u);
    c->f[20] = mem_rf32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
L_089fcf54:
    c->r[2] = 0x80000000u;
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    c->r[3] = f2u(c->f[0]);
    { c->r[3] = c->r[3] | c->r[2]; goto L_089fcf2c; }
    return; /* fell out of func_089fceb0 */
}

/* func_089fe13c  0x089fe13c..0x089fe178  60 bytes, source=sweep */
void func_089fe13c(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089fe13cu);
    c->r[29] = c->r[29] + 0xfffffff0u;
    mem_w32(ram, c->r[29] + 0x00000000u, c->r[31]);
    c->r[2] = 0x08ba0000u;
    c->r[9] = c->r[4] + 0u;
    c->r[4] = mem_r32(ram, c->r[2] + 0xffff92dcu);
    c->r[3] = c->r[5] + 0u;
    c->r[2] = c->r[6] + 0u;
    c->r[8] = c->r[7] + 0u;
    c->r[5] = c->r[9] + 0u;
    c->r[6] = c->r[3] + 0u;
    { c->r[31] = 0x089fe16cu; c->r[7] = c->r[2] + 0u; func_089fdfc0(c, ram); }
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000000u);
    { c->r[29] = c->r[29] + 0x00000010u; return; }
    return; /* fell out of func_089fe13c */
}

/* func_089fefd0  0x089fefd0..0x089ff110  320 bytes, source=residue */
void func_089fefd0(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089fefd0u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    c->r[7] = 0u + 0xffffffffu;
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x0000000cu, c->r[19]);
    mem_w32(ram, c->r[29] + 0x00000008u, c->r[18]);
    mem_w32(ram, c->r[29] + 0x00000004u, c->r[17]);
    { int _c = (c->r[4] == c->r[7]); mem_w32(ram, c->r[29] + 0x00000000u, c->r[16]); if (_c) goto L_089ff0bc; }
    c->r[2] = c->r[4] << 3;
    c->r[2] = c->r[2] - c->r[4];
    c->r[3] = 0x08ba0000u;
    c->r[2] = c->r[2] << 5;
    c->r[3] = c->r[3] + 0x0000008cu;
    c->r[16] = c->r[2] + c->r[3];
    c->r[3] = mem_r16(ram, c->r[16] + 0x00000010u);
    c->r[2] = c->r[3] + 0xffffffffu;
    c->r[2] = c->r[2] & 0xffffu;
    c->r[2] = (c->r[2] < 0x00000002u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); c->r[2] = c->r[3] + 0xfffffffdu; if (_c) goto L_089ff0a0; }
    c->r[2] = c->r[2] & 0xffffu;
    c->r[3] = 0x80000000u;
    c->r[2] = (c->r[2] < 0x00000002u) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); c->r[3] = c->r[3] | 0x000cu; if (_c) goto L_089ff080; }
    c->f[0] = u2f(c->r[5]);
    c->f[2] = mem_rf32(ram, c->r[16] + 0x000000bcu);
    c->r[3] = c->r[4] << 2;
    c->f[1] = (f32)(s32)f2u(c->f[0]);
    c->f[0] = u2f(0u);
    c->r[3] = c->r[3] + c->r[4];
    c->r[2] = 0x08ba0000u;
    c->f[0] = c->f[0] - c->f[2];
    c->r[3] = c->r[3] << 2;
    c->r[2] = c->r[2] + 0x00000170u;
    c->r[3] = c->r[3] + c->r[2];
    c->f[0] = c->f[0] / c->f[1];
    c->r[4] = 0u + 0x00000001u;
    mem_w32(ram, c->r[3] + 0x00000010u, c->r[4]);
    mem_w32(ram, c->r[3] + 0x00000008u, c->r[5]);
    mem_w32(ram, c->r[3] + 0x0000000cu, c->r[7]);
    mem_wf32(ram, c->r[3] + 0x00000000u, c->f[2]);
    mem_wf32(ram, c->r[3] + 0x00000004u, c->f[0]);
L_089ff07c:
    c->r[3] = 0u + 0u;
L_089ff080:
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000010u);
    c->r[19] = mem_r32(ram, c->r[29] + 0x0000000cu);
    c->r[18] = mem_r32(ram, c->r[29] + 0x00000008u);
    c->r[17] = mem_r32(ram, c->r[29] + 0x00000004u);
    c->r[16] = mem_r32(ram, c->r[29] + 0x00000000u);
    c->r[2] = c->r[3] + 0u;
    { c->r[29] = c->r[29] + 0x00000020u; return; }
L_089ff0a0:
    { c->r[31] = 0x089ff0a8u; func_089fe454(c, ram); }
    c->r[3] = 0x80000000u;
    c->r[2] = 0u + 0x00000005u;
    c->r[3] = c->r[3] | 0x000cu;
    { mem_w16(ram, c->r[16] + 0x00000010u, c->r[2]); goto L_089ff080; }
L_089ff0bc:
    c->r[19] = 0x08ba0000u;
    c->r[2] = mem_r32(ram, c->r[19] + 0x0000016cu);
    { int _c = ((s32)c->r[2] <= 0); c->r[17] = 0u + 0u; if (_c) goto L_089ff07c; }
    c->r[2] = 0x08ba0000u;
    c->r[2] = c->r[2] + 0x0000008cu;
    c->r[16] = c->r[2] + 0x00000010u;
    c->r[18] = 0u + 0x00000002u;
    c->r[2] = mem_r16(ram, c->r[16] + 0x00000000u);
L_089ff0e0:
    c->r[4] = c->r[17] + 0u;
    c->r[16] = c->r[16] + 0x000000e0u;
    { int _c = (c->r[2] == c->r[18]); c->r[17] = c->r[17] + 0x00000001u; if (_c) goto L_089ff0f8; }
    { c->r[31] = 0x089ff0f8u; func_089fe454(c, ram); }
L_089ff0f8:
    c->r[2] = mem_r32(ram, c->r[19] + 0x0000016cu);
    c->r[2] = ((s32)c->r[17] < (s32)c->r[2]) ? 1u : 0u;
    if (c->r[2] != 0u) { c->r[2] = mem_r16(ram, c->r[16] + 0x00000000u); goto L_089ff0e0; }
    { c->r[3] = 0u + 0u; goto L_089ff080; }
    return; /* fell out of func_089fefd0 */
}

/* func_08a0181c  0x08a0181c..0x08a0183c  32 bytes, source=residue */
void func_08a0181c(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08a0181cu);
    c->r[3] = 0u + 0x00000094u;
    alx_mult(c, c->r[4], c->r[3]);
    c->r[2] = 0x08ba0000u;
    c->r[2] = c->r[2] + 0x00000184u;
    c->r[4] = c->lo;
    c->r[4] = c->r[4] + c->r[2];
    { c->r[2] = mem_r32(ram, c->r[4] + 0x00000048u); return; }
    return; /* fell out of func_08a0181c */
}

/* func_08a02cf8  0x08a02cf8..0x08a02d9c  164 bytes, source=fde */
void func_08a02cf8(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08a02cf8u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[20]);
    c->r[20] = c->r[6] + 0u;
    mem_w32(ram, c->r[29] + 0x0000000cu, c->r[19]);
    c->r[19] = c->r[5] + 0u;
    mem_w32(ram, c->r[29] + 0x00000008u, c->r[18]);
    c->r[18] = c->r[4] + 0x00000008u;
    mem_w32(ram, c->r[29] + 0x00000000u, c->r[16]);
    c->r[16] = c->r[4] + 0u;
    c->r[4] = c->r[5] + 0u;
    c->r[5] = c->r[6] + 0u;
    c->r[6] = c->r[7] + 0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[21]);
    mem_w32(ram, c->r[29] + 0x00000004u, c->r[17]);
    mem_w32(ram, c->r[29] + 0x00000018u, c->r[31]);
    { c->r[31] = 0x08a02d3cu; c->r[21] = c->r[7] + 0u; hle_dispatch_stub(c, ram, 0x08a246f4u); /* sceIoOpenAsync */ }
    c->r[17] = c->r[2] + 0u;
    c->r[6] = 0u + 0x00000080u;
    c->r[4] = c->r[18] + 0u;
    { int _c = ((s32)c->r[2] < 0); c->r[5] = 0u + 0u; if (_c) goto L_08a02d74; }
    c->r[2] = 0u + 0x00000001u;
    { c->r[31] = 0x08a02d5cu; mem_w32(ram, c->r[16] + 0x00000000u, c->r[2]); func_08a19ec4(c, ram); }
    c->r[4] = c->r[18] + 0u;
    { c->r[31] = 0x08a02d68u; c->r[5] = c->r[19] + 0u; func_08a1af70(c, ram); }
    mem_w32(ram, c->r[16] + 0x00000088u, c->r[20]);
    mem_w32(ram, c->r[16] + 0x0000008cu, c->r[21]);
    mem_w32(ram, c->r[16] + 0x00000004u, 0u);
L_08a02d74:
    c->r[2] = c->r[17] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000018u);
    c->r[21] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[20] = mem_r32(ram, c->r[29] + 0x00000010u);
    c->r[19] = mem_r32(ram, c->r[29] + 0x0000000cu);
    c->r[18] = mem_r32(ram, c->r[29] + 0x00000008u);
    c->r[17] = mem_r32(ram, c->r[29] + 0x00000004u);
    c->r[16] = mem_r32(ram, c->r[29] + 0x00000000u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_08a02cf8 */
}

/* func_08a038a8  0x08a038a8..0x08a038d0  40 bytes, source=sweep */
void func_08a038a8(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08a038a8u);
    c->r[2] = c->r[4] + 0u;
    vfpu_exec(c, ram, 0xd8b00000u); /* lv.q */
    vfpu_exec(c, ram, 0x64909011u); /* vdot.t */
    vfpu_exec(c, ram, 0xd0111131u); /* vrsq.s */
    vfpu_exec(c, ram, 0xd8920000u); /* lv.q */
    vfpu_exec(c, ram, 0x65319012u); /* vscl.t */
    vfpu_exec(c, ram, 0xe8920000u); /* sv.s */
    vfpu_exec(c, ram, 0xe8920005u); /* sv.s */
    { vfpu_exec(c, ram, 0xe892000au); /* sv.s */ return; }
    return; /* fell out of func_08a038a8 */
}

/* func_08a0490c  0x08a0490c..0x08a049b0  164 bytes, source=sweep */
void func_08a0490c(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08a0490cu);
    c->r[29] = c->r[29] + 0xfffffff0u;
    mem_w32(ram, c->r[29] + 0x00000000u, c->r[16]);
    c->r[5] = 0x08a50000u;
    c->r[16] = c->r[4] + 0u;
    c->r[2] = 0x08a00000u;
    c->r[4] = c->r[5] + 0xffffd764u;
    c->r[7] = 0u + 0x00001000u;
    c->r[5] = c->r[2] + 0x000049b0u;
    c->r[6] = c->r[16] + 0u;
    c->r[10] = 0x08ba0000u;
    c->r[8] = 0u + 0u;
    c->r[9] = 0u + 0u;
    mem_w32(ram, c->r[29] + 0x00000004u, c->r[31]);
    { c->r[31] = 0x08a04948u; mem_w32(ram, c->r[10] + 0xffff9bf4u, 0u); hle_dispatch_stub(c, ram, 0x08a2485cu); /* sceKernelCreateThread */ }
    c->r[6] = 0x08ba0000u;
    c->r[3] = 0x80440000u;
    c->r[7] = c->r[3] | 0x0003u;
    c->r[3] = c->r[6] + 0xffffaf38u;
    mem_w32(ram, c->r[6] + 0xffffaf38u, c->r[2]);
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0u + 0x0000000cu;
    { int _c = ((s32)c->r[2] < 0); c->r[6] = c->r[3] + 0u; if (_c) goto L_08a0499c; }
    { c->r[31] = 0x08a04974u; mem_w32(ram, c->r[3] + 0x00000008u, c->r[16]); hle_dispatch_stub(c, ram, 0x08a2480cu); /* sceKernelStartThread */ }
    c->r[6] = 0x80440000u;
    c->r[4] = 0u + 0x00002710u;
    { int _c = (c->r[2] != 0u); c->r[7] = c->r[6] | 0x0003u; if (_c) goto L_08a0499c; }
    { c->r[31] = 0x08a0498cu; hle_dispatch_stub(c, ram, 0x08a247d4u); /* sceKernelDelayThread */ }
    c->r[7] = 0u + 0x00000003u;
    c->r[4] = 0x08ba0000u;
    mem_w32(ram, c->r[4] + 0xffff9bf0u, c->r[7]);
    c->r[7] = 0u + 0u;
L_08a0499c:
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000004u);
    c->r[16] = mem_r32(ram, c->r[29] + 0x00000000u);
    c->r[2] = c->r[7] + 0u;
    { c->r[29] = c->r[29] + 0x00000010u; return; }
    return; /* fell out of func_08a0490c */
}

/* func_08a06144  0x08a06144..0x08a061b0  108 bytes, source=sweep */
void func_08a06144(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08a06144u);
    c->r[2] = mem_r32(ram, c->r[4] + 0x00000000u);
    c->r[6] = mem_r16(ram, c->r[2] + 0x00000000u);
    c->r[5] = c->r[2] + 0x00000002u;
    c->r[3] = c->r[6] + 0x00002800u;
    c->r[8] = c->r[6] + 0x00002400u;
    c->r[7] = c->r[3] & 0xffffu;
    c->r[10] = c->r[8] & 0xffffu;
    c->r[9] = (c->r[7] < 0x00000400u) ? 1u : 0u;
    c->r[8] = c->r[6] << 16;
    { int _c = (c->r[9] == 0u); c->r[7] = (c->r[10] < 0x00000400u) ? 1u : 0u; if (_c) goto L_08a061a0; }
    c->r[9] = mem_r16(ram, c->r[5] + 0x00000000u);
    c->r[5] = c->r[5] + 0x00000002u;
    c->r[12] = c->r[9] + 0x00002400u;
    c->r[11] = c->r[12] & 0xffffu;
    c->r[6] = (c->r[11] < 0x00000400u) ? 1u : 0u;
    { int _c = (c->r[6] != 0u); c->r[3] = c->r[8] | c->r[9]; if (_c) goto L_08a06194; }
    c->r[13] = 0x08ba0000u;
L_08a06190:
    c->r[3] = mem_r32(ram, c->r[13] + 0xffffbe08u);
L_08a06194:
    c->r[2] = c->r[3] + 0u;
    { mem_w32(ram, c->r[4] + 0x00000000u, c->r[5]); return; }
L_08a061a0:
    { int _c = (c->r[7] == 0u); c->r[3] = c->r[6] + 0u; if (_c) goto L_08a06194; }
    { c->r[13] = 0x08ba0000u; goto L_08a06190; }
    return; /* fell out of func_08a06144 */
}

/* func_08a074a0  0x08a074a0..0x08a09e30  10640 bytes, source=sweep */
void func_08a074a0(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08a074a0u);
    c->r[29] = c->r[29] + 0xffffff40u;
    mem_w32(ram, c->r[29] + 0x000000bcu, c->r[31]);
    mem_w32(ram, c->r[29] + 0x000000b8u, c->r[30]);
    mem_w32(ram, c->r[29] + 0x000000b4u, c->r[17]);
    mem_w32(ram, c->r[29] + 0x000000b0u, c->r[16]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_08a07514; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000001cu);
    { int _c = (c->r[2] == 0u); if (_c) goto L_08a07514; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000000cu);
    { int _c = (c->r[2] == 0u); if (_c) goto L_08a07514; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_08a07520; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000004u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_08a07514; }
    { goto L_08a07520; }
L_08a07514:
    c->r[2] = 0u + 0xfffffffeu;
    { mem_w32(ram, c->r[30] + 0x00000080u, c->r[2]); goto L_08a09e10; }
L_08a07520:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000001cu);
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[2] = 0u + 0x0000000bu;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_08a0754c; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = 0u + 0x0000000cu;
    mem_w32(ram, c->r[3] + 0x00000000u, c->r[2]);
L_08a0754c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000000cu);
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000010u);
    mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000004u);
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000030u);
    mem_w32(ram, c->r[30] + 0x0000001cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000034u);
    mem_w32(ram, c->r[30] + 0x00000020u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    mem_w32(ram, c->r[30] + 0x00000024u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    mem_w32(ram, c->r[30] + 0x00000028u, c->r[2]);
    mem_w32(ram, c->r[30] + 0x00000064u, 0u);
L_08a075a8:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    mem_w32(ram, c->r[30] + 0x000000a0u, c->r[3]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x000000a0u);
    c->r[2] = mem_r32(ram, c->r[4] + 0x00000000u);
    c->r[2] = (c->r[2] < 0x0000001eu) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_08a09bac; }
    c->r[5] = mem_r32(ram, c->r[30] + 0x000000a0u);
    c->r[2] = mem_r32(ram, c->r[5] + 0x00000000u);
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08a50000u;
    c->r[2] = c->r[2] + 0xffffe208u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    { u32 _t = c->r[2]; switch (_t) { case 0x08a075e8u: goto L_08a075e8; case 0x08a0788cu: goto L_08a0788c; case 0x08a079d4u: goto L_08a079d4; case 0x08a07abcu: goto L_08a07abc; case 0x08a07b8cu: goto L_08a07b8c; case 0x08a07c7cu: goto L_08a07c7c; case 0x08a07d50u: goto L_08a07d50; case 0x08a07e30u: goto L_08a07e30; case 0x08a07f10u: goto L_08a07f10; case 0x08a0800cu: goto L_08a0800c; case 0x08a080e0u: goto L_08a080e0; case 0x08a08174u: goto L_08a08174; case 0x08a0818cu: goto L_08a0818c; case 0x08a08334u: goto L_08a08334; case 0x08a08430u: goto L_08a08430; case 0x08a08510u: goto L_08a08510; case 0x08a0866cu: goto L_08a0866c; case 0x08a08874u: goto L_08a08874; case 0x08a08eecu: goto L_08a08eec; case 0x08a09234u: goto L_08a09234; case 0x08a09324u: goto L_08a09324; case 0x08a09564u: goto L_08a09564; case 0x08a096a0u: goto L_08a096a0; case 0x08a0984cu: goto L_08a0984c; case 0x08a0989cu: goto L_08a0989c; case 0x08a09aacu: goto L_08a09aac; case 0x08a09b88u: goto L_08a09b88; case 0x08a09b94u: goto L_08a09b94; case 0x08a09ba0u: goto L_08a09ba0; case 0x08a09bacu: goto L_08a09bac; default: recomp_trap_unknown_indirect(c, ram, 0x08a075e0u, _t); return; } }
L_08a075e8:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000008u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_08a07608; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = 0u + 0x0000000cu;
    { mem_w32(ram, c->r[3] + 0x00000000u, c->r[2]); goto L_08a075a8; }
L_08a07608:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[2] = (c->r[2] < 0x00000010u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_08a07620; }
    { goto L_08a0767c; }
L_08a07620:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_08a07634; }
    { goto L_08a09bb8; }
L_08a07634:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = c->r[2] + 0xffffffffu;
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
    c->r[5] = c->r[30] + 0x0000000cu;
    c->r[3] = mem_r32(ram, c->r[5] + 0x00000000u);
    c->r[2] = c->r[3] + 0u;
    c->r[4] = mem_r8(ram, c->r[2] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[4] = c->r[4] << (c->r[2] & 31u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = c->r[2] + c->r[4];
    mem_w32(ram, c->r[30] + 0x0000001cu, c->r[2]);
    c->r[3] = c->r[3] + 0x00000001u;
    mem_w32(ram, c->r[5] + 0x00000000u, c->r[3]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[2] = c->r[2] + 0x00000008u;
    { mem_w32(ram, c->r[30] + 0x00000020u, c->r[2]); goto L_08a07608; }
L_08a0767c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000008u);
    c->r[2] = c->r[2] & 0x0002u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_08a07704; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = 0u | 0x8b1fu;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_08a07704; }
    c->r[16] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[4] = 0u + 0u;
    c->r[5] = 0u + 0u;
    { c->r[31] = 0x08a076b4u; c->r[6] = 0u + 0u; func_08a0b65c(c, ram); }
    mem_w32(ram, c->r[16] + 0x00000014u, c->r[2]);
    c->r[2] = mem_r8(ram, c->r[30] + 0x0000001cu);
    mem_w8(ram, c->r[30] + 0x00000070u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = c->r[2] >> 8;
    mem_w8(ram, c->r[30] + 0x00000071u, c->r[2]);
    c->r[16] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[3] = c->r[30] + 0x00000070u;
    c->r[4] = mem_r32(ram, c->r[2] + 0x00000014u);
    c->r[5] = c->r[3] + 0u;
    { c->r[31] = 0x08a076e8u; c->r[6] = 0u + 0x00000002u; func_08a0b65c(c, ram); }
    mem_w32(ram, c->r[16] + 0x00000014u, c->r[2]);
    mem_w32(ram, c->r[30] + 0x0000001cu, 0u);
    mem_w32(ram, c->r[30] + 0x00000020u, 0u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = 0u + 0x00000001u;
    { mem_w32(ram, c->r[3] + 0x00000000u, c->r[2]); goto L_08a075a8; }
L_08a07704:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    mem_w32(ram, c->r[2] + 0x00000010u, 0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000008u);
    c->r[2] = c->r[2] & 0x0001u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_08a07778; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = c->r[2] & 0x00ffu;
    c->r[3] = c->r[2] << 8;
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = c->r[2] >> 8;
    c->r[4] = c->r[3] + c->r[2];
    c->r[2] = 0x08420000u;
    c->r[2] = c->r[2] | 0x1085u;
    alx_multu(c, c->r[4], c->r[2]);
    c->r[3] = c->hi;
    c->r[2] = c->r[4] - c->r[3];
    c->r[2] = c->r[2] >> 1;
    c->r[2] = c->r[3] + c->r[2];
    c->r[3] = c->r[2] >> 4;
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 5;
    c->r[2] = c->r[2] - c->r[3];
    c->r[2] = c->r[4] - c->r[2];
    { int _c = (c->r[2] != 0u); if (_c) goto L_08a07778; }
    { goto L_08a07798; }
L_08a07778:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = 0x08a50000u;
    c->r[2] = c->r[2] + 0xffffe048u;
    mem_w32(ram, c->r[3] + 0x00000018u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = 0u + 0x0000001bu;
    { mem_w32(ram, c->r[3] + 0x00000000u, c->r[2]); goto L_08a075a8; }
L_08a07798:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[3] = c->r[2] & 0x000fu;
    c->r[2] = 0u + 0x00000008u;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_08a077cc; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = 0x08a50000u;
    c->r[2] = c->r[2] + 0xffffe060u;
    mem_w32(ram, c->r[3] + 0x00000018u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = 0u + 0x0000001bu;
    { mem_w32(ram, c->r[3] + 0x00000000u, c->r[2]); goto L_08a075a8; }
L_08a077cc:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = c->r[2] >> 4;
    mem_w32(ram, c->r[30] + 0x0000001cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[2] = c->r[2] + 0xfffffffcu;
    mem_w32(ram, c->r[30] + 0x00000020u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = c->r[2] & 0x000fu;
    c->r[3] = c->r[2] + 0x00000008u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000001cu);
    c->r[2] = (c->r[2] < c->r[3]) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_08a07824; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = 0x08a50000u;
    c->r[2] = c->r[2] + 0xffffe07cu;
    mem_w32(ram, c->r[3] + 0x00000018u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = 0u + 0x0000001bu;
    { mem_w32(ram, c->r[3] + 0x00000000u, c->r[2]); goto L_08a075a8; }
L_08a07824:
    c->r[17] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[16] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[4] = 0u + 0u;
    c->r[5] = 0u + 0u;
    { c->r[31] = 0x08a0783cu; c->r[6] = 0u + 0u; func_08a0b204(c, ram); }
    mem_w32(ram, c->r[16] + 0x00000014u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[16] + 0x00000014u);
    mem_w32(ram, c->r[17] + 0x00000030u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    mem_w32(ram, c->r[30] + 0x00000084u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = c->r[2] & 0x0200u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_08a0786c; }
    c->r[3] = 0u + 0x00000009u;
    { mem_w32(ram, c->r[30] + 0x00000088u, c->r[3]); goto L_08a07874; }
L_08a0786c:
    c->r[4] = 0u + 0x0000000bu;
    mem_w32(ram, c->r[30] + 0x00000088u, c->r[4]);
L_08a07874:
    c->r[6] = mem_r32(ram, c->r[30] + 0x00000088u);
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000084u);
    mem_w32(ram, c->r[5] + 0x00000000u, c->r[6]);
    mem_w32(ram, c->r[30] + 0x0000001cu, 0u);
    { mem_w32(ram, c->r[30] + 0x00000020u, 0u); goto L_08a075a8; }
L_08a0788c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[2] = (c->r[2] < 0x00000010u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_08a078a4; }
    { goto L_08a07900; }
L_08a078a4:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_08a078b8; }
    { goto L_08a09bb8; }
L_08a078b8:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = c->r[2] + 0xffffffffu;
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
    c->r[5] = c->r[30] + 0x0000000cu;
    c->r[3] = mem_r32(ram, c->r[5] + 0x00000000u);
    c->r[2] = c->r[3] + 0u;
    c->r[4] = mem_r8(ram, c->r[2] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[4] = c->r[4] << (c->r[2] & 31u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = c->r[2] + c->r[4];
    mem_w32(ram, c->r[30] + 0x0000001cu, c->r[2]);
    c->r[3] = c->r[3] + 0x00000001u;
    mem_w32(ram, c->r[5] + 0x00000000u, c->r[3]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[2] = c->r[2] + 0x00000008u;
    { mem_w32(ram, c->r[30] + 0x00000020u, c->r[2]); goto L_08a0788c; }
L_08a07900:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    mem_w32(ram, c->r[3] + 0x00000010u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000010u);
    c->r[3] = c->r[2] & 0x00ffu;
    c->r[2] = 0u + 0x00000008u;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_08a07944; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = 0x08a50000u;
    c->r[2] = c->r[2] + 0xffffe060u;
    mem_w32(ram, c->r[3] + 0x00000018u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = 0u + 0x0000001bu;
    { mem_w32(ram, c->r[3] + 0x00000000u, c->r[2]); goto L_08a075a8; }
L_08a07944:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000010u);
    c->r[2] = c->r[2] & 0xe000u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_08a07978; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = 0x08a50000u;
    c->r[2] = c->r[2] + 0xffffe090u;
    mem_w32(ram, c->r[3] + 0x00000018u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = 0u + 0x0000001bu;
    { mem_w32(ram, c->r[3] + 0x00000000u, c->r[2]); goto L_08a075a8; }
L_08a07978:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000010u);
    c->r[2] = c->r[2] & 0x0200u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_08a079c0; }
    c->r[2] = mem_r8(ram, c->r[30] + 0x0000001cu);
    mem_w8(ram, c->r[30] + 0x00000070u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = c->r[2] >> 8;
    mem_w8(ram, c->r[30] + 0x00000071u, c->r[2]);
    c->r[16] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[3] = c->r[30] + 0x00000070u;
    c->r[4] = mem_r32(ram, c->r[2] + 0x00000014u);
    c->r[5] = c->r[3] + 0u;
    { c->r[31] = 0x08a079bcu; c->r[6] = 0u + 0x00000002u; func_08a0b65c(c, ram); }
    mem_w32(ram, c->r[16] + 0x00000014u, c->r[2]);
L_08a079c0:
    mem_w32(ram, c->r[30] + 0x0000001cu, 0u);
    mem_w32(ram, c->r[30] + 0x00000020u, 0u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = 0u + 0x00000002u;
    mem_w32(ram, c->r[3] + 0x00000000u, c->r[2]);
L_08a079d4:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[2] = (c->r[2] < 0x00000020u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_08a079ec; }
    { goto L_08a07a48; }
L_08a079ec:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_08a07a00; }
    { goto L_08a09bb8; }
L_08a07a00:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = c->r[2] + 0xffffffffu;
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
    c->r[5] = c->r[30] + 0x0000000cu;
    c->r[3] = mem_r32(ram, c->r[5] + 0x00000000u);
    c->r[2] = c->r[3] + 0u;
    c->r[4] = mem_r8(ram, c->r[2] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[4] = c->r[4] << (c->r[2] & 31u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = c->r[2] + c->r[4];
    mem_w32(ram, c->r[30] + 0x0000001cu, c->r[2]);
    c->r[3] = c->r[3] + 0x00000001u;
    mem_w32(ram, c->r[5] + 0x00000000u, c->r[3]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[2] = c->r[2] + 0x00000008u;
    { mem_w32(ram, c->r[30] + 0x00000020u, c->r[2]); goto L_08a079d4; }
L_08a07a48:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000010u);
    c->r[2] = c->r[2] & 0x0200u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_08a07aa8; }
    c->r[2] = mem_r8(ram, c->r[30] + 0x0000001cu);
    mem_w8(ram, c->r[30] + 0x00000070u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = c->r[2] >> 8;
    mem_w8(ram, c->r[30] + 0x00000071u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = c->r[2] >> 16;
    mem_w8(ram, c->r[30] + 0x00000072u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = c->r[2] >> 24;
    mem_w8(ram, c->r[30] + 0x00000073u, c->r[2]);
    c->r[16] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[3] = c->r[30] + 0x00000070u;
    c->r[4] = mem_r32(ram, c->r[2] + 0x00000014u);
    c->r[5] = c->r[3] + 0u;
    { c->r[31] = 0x08a07aa4u; c->r[6] = 0u + 0x00000004u; func_08a0b65c(c, ram); }
    mem_w32(ram, c->r[16] + 0x00000014u, c->r[2]);
L_08a07aa8:
    mem_w32(ram, c->r[30] + 0x0000001cu, 0u);
    mem_w32(ram, c->r[30] + 0x00000020u, 0u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = 0u + 0x00000003u;
    mem_w32(ram, c->r[3] + 0x00000000u, c->r[2]);
L_08a07abc:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[2] = (c->r[2] < 0x00000010u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_08a07ad4; }
    { goto L_08a07b30; }
L_08a07ad4:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_08a07ae8; }
    { goto L_08a09bb8; }
L_08a07ae8:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = c->r[2] + 0xffffffffu;
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
    c->r[5] = c->r[30] + 0x0000000cu;
    c->r[3] = mem_r32(ram, c->r[5] + 0x00000000u);
    c->r[2] = c->r[3] + 0u;
    c->r[4] = mem_r8(ram, c->r[2] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[4] = c->r[4] << (c->r[2] & 31u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = c->r[2] + c->r[4];
    mem_w32(ram, c->r[30] + 0x0000001cu, c->r[2]);
    c->r[3] = c->r[3] + 0x00000001u;
    mem_w32(ram, c->r[5] + 0x00000000u, c->r[3]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[2] = c->r[2] + 0x00000008u;
    { mem_w32(ram, c->r[30] + 0x00000020u, c->r[2]); goto L_08a07abc; }
L_08a07b30:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000010u);
    c->r[2] = c->r[2] & 0x0200u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_08a07b78; }
    c->r[2] = mem_r8(ram, c->r[30] + 0x0000001cu);
    mem_w8(ram, c->r[30] + 0x00000070u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = c->r[2] >> 8;
    mem_w8(ram, c->r[30] + 0x00000071u, c->r[2]);
    c->r[16] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[3] = c->r[30] + 0x00000070u;
    c->r[4] = mem_r32(ram, c->r[2] + 0x00000014u);
    c->r[5] = c->r[3] + 0u;
    { c->r[31] = 0x08a07b74u; c->r[6] = 0u + 0x00000002u; func_08a0b65c(c, ram); }
    mem_w32(ram, c->r[16] + 0x00000014u, c->r[2]);
L_08a07b78:
    mem_w32(ram, c->r[30] + 0x0000001cu, 0u);
    mem_w32(ram, c->r[30] + 0x00000020u, 0u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = 0u + 0x00000004u;
    mem_w32(ram, c->r[3] + 0x00000000u, c->r[2]);
L_08a07b8c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000010u);
    c->r[2] = c->r[2] & 0x0400u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_08a07c70; }
L_08a07ba0:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[2] = (c->r[2] < 0x00000010u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_08a07bb8; }
    { goto L_08a07c14; }
L_08a07bb8:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_08a07bcc; }
    { goto L_08a09bb8; }
L_08a07bcc:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = c->r[2] + 0xffffffffu;
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
    c->r[5] = c->r[30] + 0x0000000cu;
    c->r[3] = mem_r32(ram, c->r[5] + 0x00000000u);
    c->r[2] = c->r[3] + 0u;
    c->r[4] = mem_r8(ram, c->r[2] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[4] = c->r[4] << (c->r[2] & 31u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = c->r[2] + c->r[4];
    mem_w32(ram, c->r[30] + 0x0000001cu, c->r[2]);
    c->r[3] = c->r[3] + 0x00000001u;
    mem_w32(ram, c->r[5] + 0x00000000u, c->r[3]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[2] = c->r[2] + 0x00000008u;
    { mem_w32(ram, c->r[30] + 0x00000020u, c->r[2]); goto L_08a07ba0; }
L_08a07c14:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    mem_w32(ram, c->r[3] + 0x00000038u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000010u);
    c->r[2] = c->r[2] & 0x0200u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_08a07c68; }
    c->r[2] = mem_r8(ram, c->r[30] + 0x0000001cu);
    mem_w8(ram, c->r[30] + 0x00000070u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = c->r[2] >> 8;
    mem_w8(ram, c->r[30] + 0x00000071u, c->r[2]);
    c->r[16] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[3] = c->r[30] + 0x00000070u;
    c->r[4] = mem_r32(ram, c->r[2] + 0x00000014u);
    c->r[5] = c->r[3] + 0u;
    { c->r[31] = 0x08a07c64u; c->r[6] = 0u + 0x00000002u; func_08a0b65c(c, ram); }
    mem_w32(ram, c->r[16] + 0x00000014u, c->r[2]);
L_08a07c68:
    mem_w32(ram, c->r[30] + 0x0000001cu, 0u);
    mem_w32(ram, c->r[30] + 0x00000020u, 0u);
L_08a07c70:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = 0u + 0x00000005u;
    mem_w32(ram, c->r[3] + 0x00000000u, c->r[2]);
L_08a07c7c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000010u);
    c->r[2] = c->r[2] & 0x0400u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_08a07d44; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000038u);
    mem_w32(ram, c->r[30] + 0x0000002cu, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000002cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = (c->r[2] < c->r[3]) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_08a07cb8; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    mem_w32(ram, c->r[30] + 0x0000002cu, c->r[2]);
L_08a07cb8:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000002cu);
    { int _c = (c->r[2] == 0u); if (_c) goto L_08a07d2c; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000010u);
    c->r[2] = c->r[2] & 0x0200u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_08a07cf4; }
    c->r[16] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[4] = mem_r32(ram, c->r[2] + 0x00000014u);
    c->r[5] = mem_r32(ram, c->r[30] + 0x0000000cu);
    { c->r[31] = 0x08a07cf0u; c->r[6] = mem_r32(ram, c->r[30] + 0x0000002cu); func_08a0b65c(c, ram); }
    mem_w32(ram, c->r[16] + 0x00000014u, c->r[2]);
L_08a07cf4:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000002cu);
    c->r[2] = c->r[3] - c->r[2];
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000002cu);
    c->r[2] = c->r[3] + c->r[2];
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x00000038u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000002cu);
    c->r[2] = c->r[3] - c->r[2];
    mem_w32(ram, c->r[4] + 0x00000038u, c->r[2]);
L_08a07d2c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000038u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_08a07d44; }
    { goto L_08a09bb8; }
L_08a07d44:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = 0u + 0x00000006u;
    mem_w32(ram, c->r[3] + 0x00000000u, c->r[2]);
L_08a07d50:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000010u);
    c->r[2] = c->r[2] & 0x0800u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_08a07e24; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_08a07d78; }
    { goto L_08a09bb8; }
L_08a07d78:
    mem_w32(ram, c->r[30] + 0x0000002cu, 0u);
L_08a07d7c:
    c->r[5] = c->r[30] + 0x0000002cu;
    c->r[3] = mem_r32(ram, c->r[5] + 0x00000000u);
    c->r[4] = c->r[3] + 0u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[4] + c->r[2];
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000000u);
    mem_w32(ram, c->r[30] + 0x00000060u, c->r[2]);
    c->r[3] = c->r[3] + 0x00000001u;
    mem_w32(ram, c->r[5] + 0x00000000u, c->r[3]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000060u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_08a07dc0; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000002cu);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = (c->r[2] < c->r[3]) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_08a07d7c; }
L_08a07dc0:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000010u);
    c->r[2] = c->r[2] & 0x2000u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_08a07df0; }
    c->r[16] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[4] = mem_r32(ram, c->r[2] + 0x00000014u);
    c->r[5] = mem_r32(ram, c->r[30] + 0x0000000cu);
    { c->r[31] = 0x08a07decu; c->r[6] = mem_r32(ram, c->r[30] + 0x0000002cu); func_08a0b65c(c, ram); }
    mem_w32(ram, c->r[16] + 0x00000014u, c->r[2]);
L_08a07df0:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000002cu);
    c->r[2] = c->r[3] - c->r[2];
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000002cu);
    c->r[2] = c->r[3] + c->r[2];
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000060u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_08a07e24; }
    { goto L_08a09bb8; }
L_08a07e24:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = 0u + 0x00000007u;
    mem_w32(ram, c->r[3] + 0x00000000u, c->r[2]);
L_08a07e30:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000010u);
    c->r[2] = c->r[2] & 0x1000u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_08a07f04; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_08a07e58; }
    { goto L_08a09bb8; }
L_08a07e58:
    mem_w32(ram, c->r[30] + 0x0000002cu, 0u);
L_08a07e5c:
    c->r[5] = c->r[30] + 0x0000002cu;
    c->r[3] = mem_r32(ram, c->r[5] + 0x00000000u);
    c->r[4] = c->r[3] + 0u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[4] + c->r[2];
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000000u);
    mem_w32(ram, c->r[30] + 0x00000060u, c->r[2]);
    c->r[3] = c->r[3] + 0x00000001u;
    mem_w32(ram, c->r[5] + 0x00000000u, c->r[3]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000060u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_08a07ea0; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000002cu);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = (c->r[2] < c->r[3]) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_08a07e5c; }
L_08a07ea0:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000010u);
    c->r[2] = c->r[2] & 0x2000u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_08a07ed0; }
    c->r[16] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[4] = mem_r32(ram, c->r[2] + 0x00000014u);
    c->r[5] = mem_r32(ram, c->r[30] + 0x0000000cu);
    { c->r[31] = 0x08a07eccu; c->r[6] = mem_r32(ram, c->r[30] + 0x0000002cu); func_08a0b65c(c, ram); }
    mem_w32(ram, c->r[16] + 0x00000014u, c->r[2]);
L_08a07ed0:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000002cu);
    c->r[2] = c->r[3] - c->r[2];
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000002cu);
    c->r[2] = c->r[3] + c->r[2];
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000060u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_08a07f04; }
    { goto L_08a09bb8; }
L_08a07f04:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = 0u + 0x00000008u;
    mem_w32(ram, c->r[3] + 0x00000000u, c->r[2]);
L_08a07f10:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000010u);
    c->r[2] = c->r[2] & 0x0200u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_08a07fd8; }
L_08a07f24:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[2] = (c->r[2] < 0x00000010u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_08a07f3c; }
    { goto L_08a07f98; }
L_08a07f3c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_08a07f50; }
    { goto L_08a09bb8; }
L_08a07f50:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = c->r[2] + 0xffffffffu;
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
    c->r[5] = c->r[30] + 0x0000000cu;
    c->r[3] = mem_r32(ram, c->r[5] + 0x00000000u);
    c->r[2] = c->r[3] + 0u;
    c->r[4] = mem_r8(ram, c->r[2] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[4] = c->r[4] << (c->r[2] & 31u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = c->r[2] + c->r[4];
    mem_w32(ram, c->r[30] + 0x0000001cu, c->r[2]);
    c->r[3] = c->r[3] + 0x00000001u;
    mem_w32(ram, c->r[5] + 0x00000000u, c->r[3]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[2] = c->r[2] + 0x00000008u;
    { mem_w32(ram, c->r[30] + 0x00000020u, c->r[2]); goto L_08a07f24; }
L_08a07f98:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000014u);
    c->r[3] = c->r[2] & 0xffffu;
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    { int _c = (c->r[2] == c->r[3]); if (_c) goto L_08a07fd0; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = 0x08a50000u;
    c->r[2] = c->r[2] + 0xffffe0acu;
    mem_w32(ram, c->r[3] + 0x00000018u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = 0u + 0x0000001bu;
    { mem_w32(ram, c->r[3] + 0x00000000u, c->r[2]); goto L_08a075a8; }
L_08a07fd0:
    mem_w32(ram, c->r[30] + 0x0000001cu, 0u);
    mem_w32(ram, c->r[30] + 0x00000020u, 0u);
L_08a07fd8:
    c->r[17] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[16] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[4] = 0u + 0u;
    c->r[5] = 0u + 0u;
    { c->r[31] = 0x08a07ff0u; c->r[6] = 0u + 0u; func_08a0b65c(c, ram); }
    mem_w32(ram, c->r[16] + 0x00000014u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[16] + 0x00000014u);
    mem_w32(ram, c->r[17] + 0x00000030u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = 0u + 0x0000000bu;
    { mem_w32(ram, c->r[3] + 0x00000000u, c->r[2]); goto L_08a075a8; }
L_08a0800c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[2] = (c->r[2] < 0x00000020u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_08a08024; }
    { goto L_08a08080; }
L_08a08024:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_08a08038; }
    { goto L_08a09bb8; }
L_08a08038:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = c->r[2] + 0xffffffffu;
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
    c->r[5] = c->r[30] + 0x0000000cu;
    c->r[3] = mem_r32(ram, c->r[5] + 0x00000000u);
    c->r[2] = c->r[3] + 0u;
    c->r[4] = mem_r8(ram, c->r[2] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[4] = c->r[4] << (c->r[2] & 31u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = c->r[2] + c->r[4];
    mem_w32(ram, c->r[30] + 0x0000001cu, c->r[2]);
    c->r[3] = c->r[3] + 0x00000001u;
    mem_w32(ram, c->r[5] + 0x00000000u, c->r[3]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[2] = c->r[2] + 0x00000008u;
    { mem_w32(ram, c->r[30] + 0x00000020u, c->r[2]); goto L_08a0800c; }
L_08a08080:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = c->r[2] >> 24;
    c->r[3] = c->r[2] & 0x00ffu;
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = c->r[2] >> 8;
    c->r[2] = c->r[2] & 0xff00u;
    c->r[3] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = c->r[2] & 0xff00u;
    c->r[2] = c->r[2] << 8;
    c->r[3] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = c->r[2] & 0x00ffu;
    c->r[2] = c->r[2] << 24;
    c->r[2] = c->r[3] + c->r[2];
    mem_w32(ram, c->r[5] + 0x00000014u, c->r[2]);
    mem_w32(ram, c->r[4] + 0x00000030u, c->r[2]);
    mem_w32(ram, c->r[30] + 0x0000001cu, 0u);
    mem_w32(ram, c->r[30] + 0x00000020u, 0u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = 0u + 0x0000000au;
    mem_w32(ram, c->r[3] + 0x00000000u, c->r[2]);
L_08a080e0:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000000cu);
    { int _c = (c->r[2] != 0u); if (_c) goto L_08a08144; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    mem_w32(ram, c->r[3] + 0x0000000cu, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    mem_w32(ram, c->r[3] + 0x00000010u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    mem_w32(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    mem_w32(ram, c->r[3] + 0x00000004u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    mem_w32(ram, c->r[3] + 0x00000030u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    mem_w32(ram, c->r[3] + 0x00000034u, c->r[2]);
    c->r[7] = 0u + 0x00000002u;
    { mem_w32(ram, c->r[30] + 0x00000080u, c->r[7]); goto L_08a09e10; }
L_08a08144:
    c->r[17] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[16] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[4] = 0u + 0u;
    c->r[5] = 0u + 0u;
    { c->r[31] = 0x08a0815cu; c->r[6] = 0u + 0u; func_08a0b204(c, ram); }
    mem_w32(ram, c->r[16] + 0x00000014u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[16] + 0x00000014u);
    mem_w32(ram, c->r[17] + 0x00000030u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = 0u + 0x0000000bu;
    mem_w32(ram, c->r[3] + 0x00000000u, c->r[2]);
L_08a08174:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = 0u + 0x00000005u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_08a0818c; }
    { goto L_08a09bb8; }
L_08a0818c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000004u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_08a081d4; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[3] = c->r[2] & 0x0007u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = c->r[2] >> (c->r[3] & 31u);
    mem_w32(ram, c->r[30] + 0x0000001cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[3] = c->r[2] & 0x0007u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[2] = c->r[2] - c->r[3];
    mem_w32(ram, c->r[30] + 0x00000020u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = 0u + 0x00000018u;
    { mem_w32(ram, c->r[3] + 0x00000000u, c->r[2]); goto L_08a075a8; }
L_08a081d4:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[2] = (c->r[2] < 0x00000003u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_08a081ec; }
    { goto L_08a08248; }
L_08a081ec:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_08a08200; }
    { goto L_08a09bb8; }
L_08a08200:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = c->r[2] + 0xffffffffu;
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
    c->r[5] = c->r[30] + 0x0000000cu;
    c->r[3] = mem_r32(ram, c->r[5] + 0x00000000u);
    c->r[2] = c->r[3] + 0u;
    c->r[4] = mem_r8(ram, c->r[2] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[4] = c->r[4] << (c->r[2] & 31u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = c->r[2] + c->r[4];
    mem_w32(ram, c->r[30] + 0x0000001cu, c->r[2]);
    c->r[3] = c->r[3] + 0x00000001u;
    mem_w32(ram, c->r[5] + 0x00000000u, c->r[3]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[2] = c->r[2] + 0x00000008u;
    { mem_w32(ram, c->r[30] + 0x00000020u, c->r[2]); goto L_08a081d4; }
L_08a08248:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = c->r[2] & 0x0001u;
    mem_w32(ram, c->r[3] + 0x00000004u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = c->r[2] >> 1;
    mem_w32(ram, c->r[30] + 0x0000001cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[2] = c->r[2] + 0xffffffffu;
    mem_w32(ram, c->r[30] + 0x00000020u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = c->r[2] & 0x0003u;
    mem_w32(ram, c->r[30] + 0x0000008cu, c->r[2]);
    c->r[2] = 0u + 0x00000001u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000008cu);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_08a082d4; }
    c->r[4] = mem_r32(ram, c->r[30] + 0x0000008cu);
    c->r[2] = (c->r[4] < 0x00000001u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_08a082c4; }
    c->r[2] = 0u + 0x00000002u;
    c->r[5] = mem_r32(ram, c->r[30] + 0x0000008cu);
    { int _c = (c->r[5] == c->r[2]); if (_c) goto L_08a082ec; }
    c->r[2] = 0u + 0x00000003u;
    c->r[6] = mem_r32(ram, c->r[30] + 0x0000008cu);
    { int _c = (c->r[6] == c->r[2]); if (_c) goto L_08a082fc; }
    { goto L_08a08318; }
L_08a082c4:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = 0u + 0x0000000du;
    { mem_w32(ram, c->r[3] + 0x00000000u, c->r[2]); goto L_08a08318; }
L_08a082d4:
    { c->r[31] = 0x08a082dcu; c->r[4] = mem_r32(ram, c->r[30] + 0x00000008u); func_08a071c4(c, ram); }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = 0u + 0x00000012u;
    { mem_w32(ram, c->r[3] + 0x00000000u, c->r[2]); goto L_08a08318; }
L_08a082ec:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = 0u + 0x0000000fu;
    { mem_w32(ram, c->r[3] + 0x00000000u, c->r[2]); goto L_08a08318; }
L_08a082fc:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = 0x08a50000u;
    c->r[2] = c->r[2] + 0xffffe0c0u;
    mem_w32(ram, c->r[3] + 0x00000018u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = 0u + 0x0000001bu;
    mem_w32(ram, c->r[3] + 0x00000000u, c->r[2]);
L_08a08318:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = c->r[2] >> 2;
    mem_w32(ram, c->r[30] + 0x0000001cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[2] = c->r[2] + 0xfffffffeu;
    { mem_w32(ram, c->r[30] + 0x00000020u, c->r[2]); goto L_08a075a8; }
L_08a08334:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[3] = c->r[2] & 0x0007u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = c->r[2] >> (c->r[3] & 31u);
    mem_w32(ram, c->r[30] + 0x0000001cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[3] = c->r[2] & 0x0007u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[2] = c->r[2] - c->r[3];
    mem_w32(ram, c->r[30] + 0x00000020u, c->r[2]);
L_08a0835c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[2] = (c->r[2] < 0x00000020u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_08a08374; }
    { goto L_08a083d0; }
L_08a08374:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_08a08388; }
    { goto L_08a09bb8; }
L_08a08388:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = c->r[2] + 0xffffffffu;
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
    c->r[5] = c->r[30] + 0x0000000cu;
    c->r[3] = mem_r32(ram, c->r[5] + 0x00000000u);
    c->r[2] = c->r[3] + 0u;
    c->r[4] = mem_r8(ram, c->r[2] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[4] = c->r[4] << (c->r[2] & 31u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = c->r[2] + c->r[4];
    mem_w32(ram, c->r[30] + 0x0000001cu, c->r[2]);
    c->r[3] = c->r[3] + 0x00000001u;
    mem_w32(ram, c->r[5] + 0x00000000u, c->r[3]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[2] = c->r[2] + 0x00000008u;
    { mem_w32(ram, c->r[30] + 0x00000020u, c->r[2]); goto L_08a0835c; }
L_08a083d0:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[3] = c->r[2] & 0xffffu;
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = c->r[2] >> 16;
    c->r[2] = c->r[2] ^ 0xffffu;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_08a0840c; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = 0x08a50000u;
    c->r[2] = c->r[2] + 0xffffe0d4u;
    mem_w32(ram, c->r[3] + 0x00000018u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = 0u + 0x0000001bu;
    { mem_w32(ram, c->r[3] + 0x00000000u, c->r[2]); goto L_08a075a8; }
L_08a0840c:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = c->r[2] & 0xffffu;
    mem_w32(ram, c->r[3] + 0x00000038u, c->r[2]);
    mem_w32(ram, c->r[30] + 0x0000001cu, 0u);
    mem_w32(ram, c->r[30] + 0x00000020u, 0u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = 0u + 0x0000000eu;
    mem_w32(ram, c->r[3] + 0x00000000u, c->r[2]);
L_08a08430:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000038u);
    mem_w32(ram, c->r[30] + 0x0000002cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000002cu);
    { int _c = (c->r[2] == 0u); if (_c) goto L_08a08500; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000002cu);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = (c->r[3] < c->r[2]) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_08a08464; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    mem_w32(ram, c->r[30] + 0x0000002cu, c->r[2]);
L_08a08464:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000002cu);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = (c->r[3] < c->r[2]) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_08a08480; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    mem_w32(ram, c->r[30] + 0x0000002cu, c->r[2]);
L_08a08480:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000002cu);
    { int _c = (c->r[2] != 0u); if (_c) goto L_08a08494; }
    { goto L_08a09bb8; }
L_08a08494:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[5] = mem_r32(ram, c->r[30] + 0x0000000cu);
    { c->r[31] = 0x08a084a4u; c->r[6] = mem_r32(ram, c->r[30] + 0x0000002cu); func_08a19db8(c, ram); }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000002cu);
    c->r[2] = c->r[3] - c->r[2];
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000002cu);
    c->r[2] = c->r[3] + c->r[2];
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000002cu);
    c->r[2] = c->r[3] - c->r[2];
    mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000002cu);
    c->r[2] = c->r[3] + c->r[2];
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x00000038u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000002cu);
    c->r[2] = c->r[3] - c->r[2];
    { mem_w32(ram, c->r[4] + 0x00000038u, c->r[2]); goto L_08a075a8; }
L_08a08500:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = 0u + 0x0000000bu;
    { mem_w32(ram, c->r[3] + 0x00000000u, c->r[2]); goto L_08a075a8; }
L_08a08510:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[2] = (c->r[2] < 0x0000000eu) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_08a08528; }
    { goto L_08a08584; }
L_08a08528:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_08a0853c; }
    { goto L_08a09bb8; }
L_08a0853c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = c->r[2] + 0xffffffffu;
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
    c->r[5] = c->r[30] + 0x0000000cu;
    c->r[3] = mem_r32(ram, c->r[5] + 0x00000000u);
    c->r[2] = c->r[3] + 0u;
    c->r[4] = mem_r8(ram, c->r[2] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[4] = c->r[4] << (c->r[2] & 31u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = c->r[2] + c->r[4];
    mem_w32(ram, c->r[30] + 0x0000001cu, c->r[2]);
    c->r[3] = c->r[3] + 0x00000001u;
    mem_w32(ram, c->r[5] + 0x00000000u, c->r[3]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[2] = c->r[2] + 0x00000008u;
    { mem_w32(ram, c->r[30] + 0x00000020u, c->r[2]); goto L_08a08510; }
L_08a08584:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = c->r[2] & 0x001fu;
    c->r[2] = c->r[2] + 0x00000101u;
    mem_w32(ram, c->r[3] + 0x00000058u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = c->r[2] >> 5;
    mem_w32(ram, c->r[30] + 0x0000001cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[2] = c->r[2] + 0xfffffffbu;
    mem_w32(ram, c->r[30] + 0x00000020u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = c->r[2] & 0x001fu;
    c->r[2] = c->r[2] + 0x00000001u;
    mem_w32(ram, c->r[3] + 0x0000005cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = c->r[2] >> 5;
    mem_w32(ram, c->r[30] + 0x0000001cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[2] = c->r[2] + 0xfffffffbu;
    mem_w32(ram, c->r[30] + 0x00000020u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = c->r[2] & 0x000fu;
    c->r[2] = c->r[2] + 0x00000004u;
    mem_w32(ram, c->r[3] + 0x00000054u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = c->r[2] >> 4;
    mem_w32(ram, c->r[30] + 0x0000001cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[2] = c->r[2] + 0xfffffffcu;
    mem_w32(ram, c->r[30] + 0x00000020u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000058u);
    c->r[2] = (c->r[2] < 0x0000011fu) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_08a08638; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000005cu);
    c->r[2] = (c->r[2] < 0x0000001fu) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_08a08638; }
    { goto L_08a08658; }
L_08a08638:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = 0x08a50000u;
    c->r[2] = c->r[2] + 0xffffe0f4u;
    mem_w32(ram, c->r[3] + 0x00000018u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = 0u + 0x0000001bu;
    { mem_w32(ram, c->r[3] + 0x00000000u, c->r[2]); goto L_08a075a8; }
L_08a08658:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    mem_w32(ram, c->r[2] + 0x00000060u, 0u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = 0u + 0x00000010u;
    mem_w32(ram, c->r[3] + 0x00000000u, c->r[2]);
L_08a0866c:
L_08a08670:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[4] = mem_r32(ram, c->r[2] + 0x00000060u);
    c->r[2] = mem_r32(ram, c->r[3] + 0x00000054u);
    c->r[2] = (c->r[4] < c->r[2]) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_08a08694; }
    { goto L_08a0876c; }
L_08a08694:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[2] = (c->r[2] < 0x00000003u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_08a086ac; }
    { goto L_08a08708; }
L_08a086ac:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_08a086c0; }
    { goto L_08a09bb8; }
L_08a086c0:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = c->r[2] + 0xffffffffu;
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
    c->r[5] = c->r[30] + 0x0000000cu;
    c->r[3] = mem_r32(ram, c->r[5] + 0x00000000u);
    c->r[2] = c->r[3] + 0u;
    c->r[4] = mem_r8(ram, c->r[2] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[4] = c->r[4] << (c->r[2] & 31u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = c->r[2] + c->r[4];
    mem_w32(ram, c->r[30] + 0x0000001cu, c->r[2]);
    c->r[3] = c->r[3] + 0x00000001u;
    mem_w32(ram, c->r[5] + 0x00000000u, c->r[3]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[2] = c->r[2] + 0x00000008u;
    { mem_w32(ram, c->r[30] + 0x00000020u, c->r[2]); goto L_08a08694; }
L_08a08708:
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[6] = c->r[2] + 0x00000060u;
    c->r[4] = mem_r32(ram, c->r[6] + 0x00000000u);
    c->r[2] = c->r[4] + 0u;
    c->r[3] = c->r[2] << 1;
    c->r[2] = 0x08a50000u;
    c->r[2] = c->r[2] + 0xffffe020u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r16(ram, c->r[2] + 0x00000000u);
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[5];
    c->r[3] = c->r[2] + 0x00000060u;
    c->r[2] = mem_r16(ram, c->r[30] + 0x0000001cu);
    c->r[2] = c->r[2] & 0x0007u;
    mem_w16(ram, c->r[3] + 0x00000008u, c->r[2]);
    c->r[4] = c->r[4] + 0x00000001u;
    mem_w32(ram, c->r[6] + 0x00000000u, c->r[4]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = c->r[2] >> 3;
    mem_w32(ram, c->r[30] + 0x0000001cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[2] = c->r[2] + 0xfffffffdu;
    { mem_w32(ram, c->r[30] + 0x00000020u, c->r[2]); goto L_08a08670; }
L_08a0876c:
L_08a08770:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000060u);
    c->r[2] = (c->r[2] < 0x00000013u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_08a0878c; }
    { goto L_08a087d0; }
L_08a0878c:
    c->r[6] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[5] = c->r[2] + 0x00000060u;
    c->r[4] = mem_r32(ram, c->r[5] + 0x00000000u);
    c->r[2] = c->r[4] + 0u;
    c->r[3] = c->r[2] << 1;
    c->r[2] = 0x08a50000u;
    c->r[2] = c->r[2] + 0xffffe020u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r16(ram, c->r[2] + 0x00000000u);
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[6];
    c->r[2] = c->r[2] + 0x00000060u;
    mem_w16(ram, c->r[2] + 0x00000008u, 0u);
    c->r[4] = c->r[4] + 0x00000001u;
    { mem_w32(ram, c->r[5] + 0x00000000u, c->r[4]); goto L_08a08770; }
L_08a087d0:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[2] + 0x00000528u;
    mem_w32(ram, c->r[3] + 0x00000064u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000064u);
    mem_w32(ram, c->r[3] + 0x00000044u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = 0u + 0x00000007u;
    mem_w32(ram, c->r[3] + 0x0000004cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[3] = c->r[2] + 0x00000068u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[7] = c->r[2] + 0x00000064u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[8] = c->r[2] + 0x0000004cu;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[2] + 0x000002e8u;
    c->r[4] = 0u + 0u;
    c->r[5] = c->r[3] + 0u;
    c->r[6] = 0u + 0x00000013u;
    { c->r[31] = 0x08a08830u; c->r[9] = c->r[2] + 0u; func_08a0a6a8(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000064u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000064u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_08a08860; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = 0x08a50000u;
    c->r[2] = c->r[2] + 0xffffe118u;
    mem_w32(ram, c->r[3] + 0x00000018u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = 0u + 0x0000001bu;
    { mem_w32(ram, c->r[3] + 0x00000000u, c->r[2]); goto L_08a075a8; }
L_08a08860:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    mem_w32(ram, c->r[2] + 0x00000060u, 0u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = 0u + 0x00000011u;
    mem_w32(ram, c->r[3] + 0x00000000u, c->r[2]);
L_08a08874:
L_08a08878:
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[4] = mem_r32(ram, c->r[2] + 0x00000058u);
    c->r[2] = mem_r32(ram, c->r[3] + 0x0000005cu);
    c->r[3] = c->r[4] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[5] + 0x00000060u);
    c->r[2] = (c->r[2] < c->r[3]) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_08a088a8; }
    { goto L_08a08db8; }
L_08a088a8:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[3] = 0u + 0x00000001u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000004cu);
    c->r[2] = c->r[3] << (c->r[2] & 31u);
    c->r[3] = c->r[2] + 0xffffffffu;
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = c->r[3] & c->r[2];
    c->r[3] = c->r[2] << 2;
    c->r[2] = mem_r32(ram, c->r[4] + 0x00000044u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[3] = c->r[30] + 0x00000040u;
    c->r[7] = mem_lwl(ram, c->r[2] + 0x00000003u, c->r[7]);
    c->r[7] = mem_lwr(ram, c->r[2] + 0x00000000u, c->r[7]);
    mem_swl(ram, c->r[3] + 0x00000003u, c->r[7]);
    mem_swr(ram, c->r[3] + 0x00000000u, c->r[7]);
    c->r[3] = mem_r8(ram, c->r[30] + 0x00000041u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[2] = (c->r[2] < c->r[3]) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_08a08904; }
    { goto L_08a08960; }
L_08a08904:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_08a08918; }
    { goto L_08a09bb8; }
L_08a08918:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = c->r[2] + 0xffffffffu;
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
    c->r[5] = c->r[30] + 0x0000000cu;
    c->r[3] = mem_r32(ram, c->r[5] + 0x00000000u);
    c->r[2] = c->r[3] + 0u;
    c->r[4] = mem_r8(ram, c->r[2] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[4] = c->r[4] << (c->r[2] & 31u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = c->r[2] + c->r[4];
    mem_w32(ram, c->r[30] + 0x0000001cu, c->r[2]);
    c->r[3] = c->r[3] + 0x00000001u;
    mem_w32(ram, c->r[5] + 0x00000000u, c->r[3]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[2] = c->r[2] + 0x00000008u;
    { mem_w32(ram, c->r[30] + 0x00000020u, c->r[2]); goto L_08a088a8; }
L_08a08960:
    c->r[2] = mem_r16(ram, c->r[30] + 0x00000042u);
    c->r[2] = (c->r[2] < 0x00000010u) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_08a08a3c; }
L_08a08970:
    c->r[2] = mem_r8(ram, c->r[30] + 0x00000041u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[2] = (c->r[3] < c->r[2]) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_08a0898c; }
    { goto L_08a089e8; }
L_08a0898c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_08a089a0; }
    { goto L_08a09bb8; }
L_08a089a0:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = c->r[2] + 0xffffffffu;
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
    c->r[5] = c->r[30] + 0x0000000cu;
    c->r[3] = mem_r32(ram, c->r[5] + 0x00000000u);
    c->r[2] = c->r[3] + 0u;
    c->r[4] = mem_r8(ram, c->r[2] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[4] = c->r[4] << (c->r[2] & 31u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = c->r[2] + c->r[4];
    mem_w32(ram, c->r[30] + 0x0000001cu, c->r[2]);
    c->r[3] = c->r[3] + 0x00000001u;
    mem_w32(ram, c->r[5] + 0x00000000u, c->r[3]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[2] = c->r[2] + 0x00000008u;
    { mem_w32(ram, c->r[30] + 0x00000020u, c->r[2]); goto L_08a08970; }
L_08a089e8:
    c->r[3] = mem_r8(ram, c->r[30] + 0x00000041u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = c->r[2] >> (c->r[3] & 31u);
    mem_w32(ram, c->r[30] + 0x0000001cu, c->r[2]);
    c->r[3] = mem_r8(ram, c->r[30] + 0x00000041u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[2] = c->r[2] - c->r[3];
    mem_w32(ram, c->r[30] + 0x00000020u, c->r[2]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[5] = c->r[2] + 0x00000060u;
    c->r[3] = mem_r32(ram, c->r[5] + 0x00000000u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[4];
    c->r[4] = c->r[2] + 0x00000060u;
    c->r[2] = mem_r16(ram, c->r[30] + 0x00000042u);
    mem_w16(ram, c->r[4] + 0x00000008u, c->r[2]);
    c->r[3] = c->r[3] + 0x00000001u;
    { mem_w32(ram, c->r[5] + 0x00000000u, c->r[3]); goto L_08a08878; }
L_08a08a3c:
    c->r[3] = mem_r16(ram, c->r[30] + 0x00000042u);
    c->r[2] = 0u + 0x00000010u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_08a08b68; }
L_08a08a4c:
    c->r[2] = mem_r8(ram, c->r[30] + 0x00000041u);
    c->r[3] = c->r[2] + 0x00000002u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[2] = (c->r[2] < c->r[3]) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_08a08a6c; }
    { goto L_08a08ac8; }
L_08a08a6c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_08a08a80; }
    { goto L_08a09bb8; }
L_08a08a80:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = c->r[2] + 0xffffffffu;
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
    c->r[5] = c->r[30] + 0x0000000cu;
    c->r[3] = mem_r32(ram, c->r[5] + 0x00000000u);
    c->r[2] = c->r[3] + 0u;
    c->r[4] = mem_r8(ram, c->r[2] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[4] = c->r[4] << (c->r[2] & 31u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = c->r[2] + c->r[4];
    mem_w32(ram, c->r[30] + 0x0000001cu, c->r[2]);
    c->r[3] = c->r[3] + 0x00000001u;
    mem_w32(ram, c->r[5] + 0x00000000u, c->r[3]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[2] = c->r[2] + 0x00000008u;
    { mem_w32(ram, c->r[30] + 0x00000020u, c->r[2]); goto L_08a08a4c; }
L_08a08ac8:
    c->r[3] = mem_r8(ram, c->r[30] + 0x00000041u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = c->r[2] >> (c->r[3] & 31u);
    mem_w32(ram, c->r[30] + 0x0000001cu, c->r[2]);
    c->r[3] = mem_r8(ram, c->r[30] + 0x00000041u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[2] = c->r[2] - c->r[3];
    mem_w32(ram, c->r[30] + 0x00000020u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000060u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_08a08b18; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = 0x08a50000u;
    c->r[2] = c->r[2] + 0xffffe134u;
    mem_w32(ram, c->r[3] + 0x00000018u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = 0u + 0x0000001bu;
    { mem_w32(ram, c->r[3] + 0x00000000u, c->r[2]); goto L_08a08db8; }
L_08a08b18:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000060u);
    c->r[3] = 0u + 0x0000005eu;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[4];
    c->r[2] = c->r[2] + c->r[3];
    c->r[2] = mem_r16(ram, c->r[2] + 0x00000008u);
    mem_w32(ram, c->r[30] + 0x00000060u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = c->r[2] & 0x0003u;
    c->r[2] = c->r[2] + 0x00000003u;
    mem_w32(ram, c->r[30] + 0x0000002cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = c->r[2] >> 2;
    mem_w32(ram, c->r[30] + 0x0000001cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[2] = c->r[2] + 0xfffffffeu;
    { mem_w32(ram, c->r[30] + 0x00000020u, c->r[2]); goto L_08a08d0c; }
L_08a08b68:
    c->r[3] = mem_r16(ram, c->r[30] + 0x00000042u);
    c->r[2] = 0u + 0x00000011u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_08a08c44; }
L_08a08b78:
    c->r[2] = mem_r8(ram, c->r[30] + 0x00000041u);
    c->r[3] = c->r[2] + 0x00000003u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[2] = (c->r[2] < c->r[3]) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_08a08b98; }
    { goto L_08a08bf4; }
L_08a08b98:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_08a08bac; }
    { goto L_08a09bb8; }
L_08a08bac:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = c->r[2] + 0xffffffffu;
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
    c->r[5] = c->r[30] + 0x0000000cu;
    c->r[3] = mem_r32(ram, c->r[5] + 0x00000000u);
    c->r[2] = c->r[3] + 0u;
    c->r[4] = mem_r8(ram, c->r[2] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[4] = c->r[4] << (c->r[2] & 31u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = c->r[2] + c->r[4];
    mem_w32(ram, c->r[30] + 0x0000001cu, c->r[2]);
    c->r[3] = c->r[3] + 0x00000001u;
    mem_w32(ram, c->r[5] + 0x00000000u, c->r[3]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[2] = c->r[2] + 0x00000008u;
    { mem_w32(ram, c->r[30] + 0x00000020u, c->r[2]); goto L_08a08b78; }
L_08a08bf4:
    c->r[3] = mem_r8(ram, c->r[30] + 0x00000041u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = c->r[2] >> (c->r[3] & 31u);
    mem_w32(ram, c->r[30] + 0x0000001cu, c->r[2]);
    c->r[3] = mem_r8(ram, c->r[30] + 0x00000041u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[2] = c->r[2] - c->r[3];
    mem_w32(ram, c->r[30] + 0x00000020u, c->r[2]);
    mem_w32(ram, c->r[30] + 0x00000060u, 0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = c->r[2] & 0x0007u;
    c->r[2] = c->r[2] + 0x00000003u;
    mem_w32(ram, c->r[30] + 0x0000002cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = c->r[2] >> 3;
    mem_w32(ram, c->r[30] + 0x0000001cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[2] = c->r[2] + 0xfffffffdu;
    { mem_w32(ram, c->r[30] + 0x00000020u, c->r[2]); goto L_08a08d0c; }
L_08a08c44:
    c->r[2] = mem_r8(ram, c->r[30] + 0x00000041u);
    c->r[3] = c->r[2] + 0x00000007u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[2] = (c->r[2] < c->r[3]) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_08a08c64; }
    { goto L_08a08cc0; }
L_08a08c64:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_08a08c78; }
    { goto L_08a09bb8; }
L_08a08c78:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = c->r[2] + 0xffffffffu;
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
    c->r[5] = c->r[30] + 0x0000000cu;
    c->r[3] = mem_r32(ram, c->r[5] + 0x00000000u);
    c->r[2] = c->r[3] + 0u;
    c->r[4] = mem_r8(ram, c->r[2] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[4] = c->r[4] << (c->r[2] & 31u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = c->r[2] + c->r[4];
    mem_w32(ram, c->r[30] + 0x0000001cu, c->r[2]);
    c->r[3] = c->r[3] + 0x00000001u;
    mem_w32(ram, c->r[5] + 0x00000000u, c->r[3]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[2] = c->r[2] + 0x00000008u;
    { mem_w32(ram, c->r[30] + 0x00000020u, c->r[2]); goto L_08a08c44; }
L_08a08cc0:
    c->r[3] = mem_r8(ram, c->r[30] + 0x00000041u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = c->r[2] >> (c->r[3] & 31u);
    mem_w32(ram, c->r[30] + 0x0000001cu, c->r[2]);
    c->r[3] = mem_r8(ram, c->r[30] + 0x00000041u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[2] = c->r[2] - c->r[3];
    mem_w32(ram, c->r[30] + 0x00000020u, c->r[2]);
    mem_w32(ram, c->r[30] + 0x00000060u, 0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = c->r[2] & 0x007fu;
    c->r[2] = c->r[2] + 0x0000000bu;
    mem_w32(ram, c->r[30] + 0x0000002cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = c->r[2] >> 7;
    mem_w32(ram, c->r[30] + 0x0000001cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[2] = c->r[2] + 0xfffffff9u;
    mem_w32(ram, c->r[30] + 0x00000020u, c->r[2]);
L_08a08d0c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x00000060u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000002cu);
    c->r[5] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[4] = mem_r32(ram, c->r[2] + 0x00000058u);
    c->r[2] = mem_r32(ram, c->r[3] + 0x0000005cu);
    c->r[2] = c->r[4] + c->r[2];
    c->r[2] = (c->r[2] < c->r[5]) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_08a08d5c; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = 0x08a50000u;
    c->r[2] = c->r[2] + 0xffffe134u;
    mem_w32(ram, c->r[3] + 0x00000018u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = 0u + 0x0000001bu;
    { mem_w32(ram, c->r[3] + 0x00000000u, c->r[2]); goto L_08a08db8; }
L_08a08d5c:
L_08a08d60:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000002cu);
    c->r[2] = c->r[2] + 0xffffffffu;
    c->r[3] = c->r[2] + 0u;
    mem_w32(ram, c->r[30] + 0x0000002cu, c->r[3]);
    c->r[2] = 0u + 0xffffffffu;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_08a08d84; }
    { goto L_08a08878; }
L_08a08d84:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[5] = c->r[2] + 0x00000060u;
    c->r[3] = mem_r32(ram, c->r[5] + 0x00000000u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[4];
    c->r[4] = c->r[2] + 0x00000060u;
    c->r[2] = mem_r16(ram, c->r[30] + 0x00000060u);
    mem_w16(ram, c->r[4] + 0x00000008u, c->r[2]);
    c->r[3] = c->r[3] + 0x00000001u;
    { mem_w32(ram, c->r[5] + 0x00000000u, c->r[3]); goto L_08a08d60; }
L_08a08db8:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[2] + 0x00000528u;
    mem_w32(ram, c->r[3] + 0x00000064u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000064u);
    mem_w32(ram, c->r[3] + 0x00000044u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = 0u + 0x00000009u;
    mem_w32(ram, c->r[3] + 0x0000004cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[3] = c->r[2] + 0x00000068u;
    c->r[6] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[7] = c->r[2] + 0x00000064u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[8] = c->r[2] + 0x0000004cu;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[2] + 0x000002e8u;
    c->r[4] = 0u + 0x00000001u;
    c->r[5] = c->r[3] + 0u;
    c->r[6] = mem_r32(ram, c->r[6] + 0x00000058u);
    { c->r[31] = 0x08a08e1cu; c->r[9] = c->r[2] + 0u; func_08a0a6a8(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000064u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000064u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_08a08e4c; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = 0x08a50000u;
    c->r[2] = c->r[2] + 0xffffe150u;
    mem_w32(ram, c->r[3] + 0x00000018u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = 0u + 0x0000001bu;
    { mem_w32(ram, c->r[3] + 0x00000000u, c->r[2]); goto L_08a075a8; }
L_08a08e4c:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000064u);
    mem_w32(ram, c->r[3] + 0x00000048u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = 0u + 0x00000006u;
    mem_w32(ram, c->r[3] + 0x00000050u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000058u);
    c->r[3] = c->r[2] << 1;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[3] = c->r[2] + 0x00000068u;
    c->r[6] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[7] = c->r[2] + 0x00000064u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[8] = c->r[2] + 0x00000050u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[2] + 0x000002e8u;
    c->r[4] = 0u + 0x00000002u;
    c->r[5] = c->r[3] + 0u;
    c->r[6] = mem_r32(ram, c->r[6] + 0x0000005cu);
    { c->r[31] = 0x08a08eb0u; c->r[9] = c->r[2] + 0u; func_08a0a6a8(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000064u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000064u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_08a08ee0; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = 0x08a50000u;
    c->r[2] = c->r[2] + 0xffffe16cu;
    mem_w32(ram, c->r[3] + 0x00000018u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = 0u + 0x0000001bu;
    { mem_w32(ram, c->r[3] + 0x00000000u, c->r[2]); goto L_08a075a8; }
L_08a08ee0:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = 0u + 0x00000012u;
    mem_w32(ram, c->r[3] + 0x00000000u, c->r[2]);
L_08a08eec:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = (c->r[2] < 0x00000006u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_08a08fac; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = (c->r[2] < 0x00000102u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_08a08fac; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    mem_w32(ram, c->r[3] + 0x0000000cu, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    mem_w32(ram, c->r[3] + 0x00000010u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    mem_w32(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    mem_w32(ram, c->r[3] + 0x00000004u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    mem_w32(ram, c->r[3] + 0x00000030u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    mem_w32(ram, c->r[3] + 0x00000034u, c->r[2]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x08a08f60u; c->r[5] = mem_r32(ram, c->r[30] + 0x00000028u); func_08a0c66c(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000000cu);
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000010u);
    mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000004u);
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000030u);
    mem_w32(ram, c->r[30] + 0x0000001cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000034u);
    { mem_w32(ram, c->r[30] + 0x00000020u, c->r[2]); goto L_08a075a8; }
L_08a08fac:
L_08a08fb0:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[3] = 0u + 0x00000001u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000004cu);
    c->r[2] = c->r[3] << (c->r[2] & 31u);
    c->r[3] = c->r[2] + 0xffffffffu;
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = c->r[3] & c->r[2];
    c->r[3] = c->r[2] << 2;
    c->r[2] = mem_r32(ram, c->r[4] + 0x00000044u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[3] = c->r[30] + 0x00000040u;
    c->r[7] = mem_lwl(ram, c->r[2] + 0x00000003u, c->r[7]);
    c->r[7] = mem_lwr(ram, c->r[2] + 0x00000000u, c->r[7]);
    mem_swl(ram, c->r[3] + 0x00000003u, c->r[7]);
    mem_swr(ram, c->r[3] + 0x00000000u, c->r[7]);
    c->r[3] = mem_r8(ram, c->r[30] + 0x00000041u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[2] = (c->r[2] < c->r[3]) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_08a0900c; }
    { goto L_08a09068; }
L_08a0900c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_08a09020; }
    { goto L_08a09bb8; }
L_08a09020:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = c->r[2] + 0xffffffffu;
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
    c->r[5] = c->r[30] + 0x0000000cu;
    c->r[3] = mem_r32(ram, c->r[5] + 0x00000000u);
    c->r[2] = c->r[3] + 0u;
    c->r[4] = mem_r8(ram, c->r[2] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[4] = c->r[4] << (c->r[2] & 31u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = c->r[2] + c->r[4];
    mem_w32(ram, c->r[30] + 0x0000001cu, c->r[2]);
    c->r[3] = c->r[3] + 0x00000001u;
    mem_w32(ram, c->r[5] + 0x00000000u, c->r[3]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[2] = c->r[2] + 0x00000008u;
    { mem_w32(ram, c->r[30] + 0x00000020u, c->r[2]); goto L_08a08fb0; }
L_08a09068:
    c->r[2] = mem_r8(ram, c->r[30] + 0x00000040u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_08a09180; }
    c->r[2] = mem_r8(ram, c->r[30] + 0x00000040u);
    c->r[2] = c->r[2] & 0x00f0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_08a09180; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000040u);
    mem_w32(ram, c->r[30] + 0x00000050u, c->r[2]);
L_08a0908c:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[5] = mem_r16(ram, c->r[30] + 0x00000052u);
    c->r[3] = mem_r8(ram, c->r[30] + 0x00000051u);
    c->r[2] = mem_r8(ram, c->r[30] + 0x00000050u);
    c->r[3] = c->r[3] + c->r[2];
    c->r[2] = 0u + 0x00000001u;
    c->r[2] = c->r[2] << (c->r[3] & 31u);
    c->r[3] = c->r[2] + 0xffffffffu;
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[3] = c->r[3] & c->r[2];
    c->r[2] = mem_r8(ram, c->r[30] + 0x00000051u);
    c->r[2] = c->r[3] >> (c->r[2] & 31u);
    c->r[2] = c->r[5] + c->r[2];
    c->r[3] = c->r[2] << 2;
    c->r[2] = mem_r32(ram, c->r[4] + 0x00000044u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[3] = c->r[30] + 0x00000040u;
    c->r[7] = mem_lwl(ram, c->r[2] + 0x00000003u, c->r[7]);
    c->r[7] = mem_lwr(ram, c->r[2] + 0x00000000u, c->r[7]);
    mem_swl(ram, c->r[3] + 0x00000003u, c->r[7]);
    mem_swr(ram, c->r[3] + 0x00000000u, c->r[7]);
    c->r[3] = mem_r8(ram, c->r[30] + 0x00000051u);
    c->r[2] = mem_r8(ram, c->r[30] + 0x00000041u);
    c->r[3] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[2] = (c->r[2] < c->r[3]) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_08a09104; }
    { goto L_08a09160; }
L_08a09104:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_08a09118; }
    { goto L_08a09bb8; }
L_08a09118:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = c->r[2] + 0xffffffffu;
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
    c->r[5] = c->r[30] + 0x0000000cu;
    c->r[3] = mem_r32(ram, c->r[5] + 0x00000000u);
    c->r[2] = c->r[3] + 0u;
    c->r[4] = mem_r8(ram, c->r[2] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[4] = c->r[4] << (c->r[2] & 31u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = c->r[2] + c->r[4];
    mem_w32(ram, c->r[30] + 0x0000001cu, c->r[2]);
    c->r[3] = c->r[3] + 0x00000001u;
    mem_w32(ram, c->r[5] + 0x00000000u, c->r[3]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[2] = c->r[2] + 0x00000008u;
    { mem_w32(ram, c->r[30] + 0x00000020u, c->r[2]); goto L_08a0908c; }
L_08a09160:
    c->r[3] = mem_r8(ram, c->r[30] + 0x00000051u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = c->r[2] >> (c->r[3] & 31u);
    mem_w32(ram, c->r[30] + 0x0000001cu, c->r[2]);
    c->r[3] = mem_r8(ram, c->r[30] + 0x00000051u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[2] = c->r[2] - c->r[3];
    mem_w32(ram, c->r[30] + 0x00000020u, c->r[2]);
L_08a09180:
    c->r[3] = mem_r8(ram, c->r[30] + 0x00000041u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = c->r[2] >> (c->r[3] & 31u);
    mem_w32(ram, c->r[30] + 0x0000001cu, c->r[2]);
    c->r[3] = mem_r8(ram, c->r[30] + 0x00000041u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[2] = c->r[2] - c->r[3];
    mem_w32(ram, c->r[30] + 0x00000020u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = mem_r16(ram, c->r[30] + 0x00000042u);
    mem_w32(ram, c->r[3] + 0x00000038u, c->r[2]);
    c->r[2] = mem_r8(ram, c->r[30] + 0x00000040u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_08a091c8; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = 0u + 0x00000017u;
    { mem_w32(ram, c->r[3] + 0x00000000u, c->r[2]); goto L_08a075a8; }
L_08a091c8:
    c->r[2] = mem_r8(ram, c->r[30] + 0x00000040u);
    c->r[2] = c->r[2] & 0x0020u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_08a091e8; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = 0u + 0x0000000bu;
    { mem_w32(ram, c->r[3] + 0x00000000u, c->r[2]); goto L_08a075a8; }
L_08a091e8:
    c->r[2] = mem_r8(ram, c->r[30] + 0x00000040u);
    c->r[2] = c->r[2] & 0x0040u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_08a09218; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = 0x08a50000u;
    c->r[2] = c->r[2] + 0xffffe184u;
    mem_w32(ram, c->r[3] + 0x00000018u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = 0u + 0x0000001bu;
    { mem_w32(ram, c->r[3] + 0x00000000u, c->r[2]); goto L_08a075a8; }
L_08a09218:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = mem_r8(ram, c->r[30] + 0x00000040u);
    c->r[2] = c->r[2] & 0x000fu;
    mem_w32(ram, c->r[3] + 0x00000040u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = 0u + 0x00000013u;
    mem_w32(ram, c->r[3] + 0x00000000u, c->r[2]);
L_08a09234:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000040u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_08a09318; }
L_08a09244:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000040u);
    c->r[2] = (c->r[3] < c->r[2]) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_08a09264; }
    { goto L_08a092c0; }
L_08a09264:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_08a09278; }
    { goto L_08a09bb8; }
L_08a09278:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = c->r[2] + 0xffffffffu;
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
    c->r[5] = c->r[30] + 0x0000000cu;
    c->r[3] = mem_r32(ram, c->r[5] + 0x00000000u);
    c->r[2] = c->r[3] + 0u;
    c->r[4] = mem_r8(ram, c->r[2] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[4] = c->r[4] << (c->r[2] & 31u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = c->r[2] + c->r[4];
    mem_w32(ram, c->r[30] + 0x0000001cu, c->r[2]);
    c->r[3] = c->r[3] + 0x00000001u;
    mem_w32(ram, c->r[5] + 0x00000000u, c->r[3]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[2] = c->r[2] + 0x00000008u;
    { mem_w32(ram, c->r[30] + 0x00000020u, c->r[2]); goto L_08a09244; }
L_08a092c0:
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[3] = 0u + 0x00000001u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000040u);
    c->r[2] = c->r[3] << (c->r[2] & 31u);
    c->r[3] = c->r[2] + 0xffffffffu;
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[3] = c->r[3] & c->r[2];
    c->r[2] = mem_r32(ram, c->r[4] + 0x00000038u);
    c->r[2] = c->r[2] + c->r[3];
    mem_w32(ram, c->r[5] + 0x00000038u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000040u);
    c->r[2] = c->r[3] >> (c->r[2] & 31u);
    mem_w32(ram, c->r[30] + 0x0000001cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000040u);
    c->r[2] = c->r[3] - c->r[2];
    mem_w32(ram, c->r[30] + 0x00000020u, c->r[2]);
L_08a09318:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = 0u + 0x00000014u;
    mem_w32(ram, c->r[3] + 0x00000000u, c->r[2]);
L_08a09324:
L_08a09328:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[3] = 0u + 0x00000001u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000050u);
    c->r[2] = c->r[3] << (c->r[2] & 31u);
    c->r[3] = c->r[2] + 0xffffffffu;
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = c->r[3] & c->r[2];
    c->r[3] = c->r[2] << 2;
    c->r[2] = mem_r32(ram, c->r[4] + 0x00000048u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[3] = c->r[30] + 0x00000040u;
    c->r[7] = mem_lwl(ram, c->r[2] + 0x00000003u, c->r[7]);
    c->r[7] = mem_lwr(ram, c->r[2] + 0x00000000u, c->r[7]);
    mem_swl(ram, c->r[3] + 0x00000003u, c->r[7]);
    mem_swr(ram, c->r[3] + 0x00000000u, c->r[7]);
    c->r[3] = mem_r8(ram, c->r[30] + 0x00000041u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[2] = (c->r[2] < c->r[3]) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_08a09384; }
    { goto L_08a093e0; }
L_08a09384:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_08a09398; }
    { goto L_08a09bb8; }
L_08a09398:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = c->r[2] + 0xffffffffu;
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
    c->r[5] = c->r[30] + 0x0000000cu;
    c->r[3] = mem_r32(ram, c->r[5] + 0x00000000u);
    c->r[2] = c->r[3] + 0u;
    c->r[4] = mem_r8(ram, c->r[2] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[4] = c->r[4] << (c->r[2] & 31u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = c->r[2] + c->r[4];
    mem_w32(ram, c->r[30] + 0x0000001cu, c->r[2]);
    c->r[3] = c->r[3] + 0x00000001u;
    mem_w32(ram, c->r[5] + 0x00000000u, c->r[3]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[2] = c->r[2] + 0x00000008u;
    { mem_w32(ram, c->r[30] + 0x00000020u, c->r[2]); goto L_08a09328; }
L_08a093e0:
    c->r[2] = mem_r8(ram, c->r[30] + 0x00000040u);
    c->r[2] = c->r[2] & 0x00f0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_08a094ec; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000040u);
    mem_w32(ram, c->r[30] + 0x00000050u, c->r[2]);
L_08a093f8:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[5] = mem_r16(ram, c->r[30] + 0x00000052u);
    c->r[3] = mem_r8(ram, c->r[30] + 0x00000051u);
    c->r[2] = mem_r8(ram, c->r[30] + 0x00000050u);
    c->r[3] = c->r[3] + c->r[2];
    c->r[2] = 0u + 0x00000001u;
    c->r[2] = c->r[2] << (c->r[3] & 31u);
    c->r[3] = c->r[2] + 0xffffffffu;
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[3] = c->r[3] & c->r[2];
    c->r[2] = mem_r8(ram, c->r[30] + 0x00000051u);
    c->r[2] = c->r[3] >> (c->r[2] & 31u);
    c->r[2] = c->r[5] + c->r[2];
    c->r[3] = c->r[2] << 2;
    c->r[2] = mem_r32(ram, c->r[4] + 0x00000048u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[3] = c->r[30] + 0x00000040u;
    c->r[7] = mem_lwl(ram, c->r[2] + 0x00000003u, c->r[7]);
    c->r[7] = mem_lwr(ram, c->r[2] + 0x00000000u, c->r[7]);
    mem_swl(ram, c->r[3] + 0x00000003u, c->r[7]);
    mem_swr(ram, c->r[3] + 0x00000000u, c->r[7]);
    c->r[3] = mem_r8(ram, c->r[30] + 0x00000051u);
    c->r[2] = mem_r8(ram, c->r[30] + 0x00000041u);
    c->r[3] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[2] = (c->r[2] < c->r[3]) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_08a09470; }
    { goto L_08a094cc; }
L_08a09470:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_08a09484; }
    { goto L_08a09bb8; }
L_08a09484:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = c->r[2] + 0xffffffffu;
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
    c->r[5] = c->r[30] + 0x0000000cu;
    c->r[3] = mem_r32(ram, c->r[5] + 0x00000000u);
    c->r[2] = c->r[3] + 0u;
    c->r[4] = mem_r8(ram, c->r[2] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[4] = c->r[4] << (c->r[2] & 31u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = c->r[2] + c->r[4];
    mem_w32(ram, c->r[30] + 0x0000001cu, c->r[2]);
    c->r[3] = c->r[3] + 0x00000001u;
    mem_w32(ram, c->r[5] + 0x00000000u, c->r[3]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[2] = c->r[2] + 0x00000008u;
    { mem_w32(ram, c->r[30] + 0x00000020u, c->r[2]); goto L_08a093f8; }
L_08a094cc:
    c->r[3] = mem_r8(ram, c->r[30] + 0x00000051u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = c->r[2] >> (c->r[3] & 31u);
    mem_w32(ram, c->r[30] + 0x0000001cu, c->r[2]);
    c->r[3] = mem_r8(ram, c->r[30] + 0x00000051u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[2] = c->r[2] - c->r[3];
    mem_w32(ram, c->r[30] + 0x00000020u, c->r[2]);
L_08a094ec:
    c->r[3] = mem_r8(ram, c->r[30] + 0x00000041u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = c->r[2] >> (c->r[3] & 31u);
    mem_w32(ram, c->r[30] + 0x0000001cu, c->r[2]);
    c->r[3] = mem_r8(ram, c->r[30] + 0x00000041u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[2] = c->r[2] - c->r[3];
    mem_w32(ram, c->r[30] + 0x00000020u, c->r[2]);
    c->r[2] = mem_r8(ram, c->r[30] + 0x00000040u);
    c->r[2] = c->r[2] & 0x0040u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_08a0953c; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = 0x08a50000u;
    c->r[2] = c->r[2] + 0xffffe1a0u;
    mem_w32(ram, c->r[3] + 0x00000018u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = 0u + 0x0000001bu;
    { mem_w32(ram, c->r[3] + 0x00000000u, c->r[2]); goto L_08a075a8; }
L_08a0953c:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = mem_r16(ram, c->r[30] + 0x00000042u);
    mem_w32(ram, c->r[3] + 0x0000003cu, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = mem_r8(ram, c->r[30] + 0x00000040u);
    c->r[2] = c->r[2] & 0x000fu;
    mem_w32(ram, c->r[3] + 0x00000040u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = 0u + 0x00000015u;
    mem_w32(ram, c->r[3] + 0x00000000u, c->r[2]);
L_08a09564:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000040u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_08a09648; }
L_08a09574:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000040u);
    c->r[2] = (c->r[3] < c->r[2]) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_08a09594; }
    { goto L_08a095f0; }
L_08a09594:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_08a095a8; }
    { goto L_08a09bb8; }
L_08a095a8:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = c->r[2] + 0xffffffffu;
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
    c->r[5] = c->r[30] + 0x0000000cu;
    c->r[3] = mem_r32(ram, c->r[5] + 0x00000000u);
    c->r[2] = c->r[3] + 0u;
    c->r[4] = mem_r8(ram, c->r[2] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[4] = c->r[4] << (c->r[2] & 31u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = c->r[2] + c->r[4];
    mem_w32(ram, c->r[30] + 0x0000001cu, c->r[2]);
    c->r[3] = c->r[3] + 0x00000001u;
    mem_w32(ram, c->r[5] + 0x00000000u, c->r[3]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[2] = c->r[2] + 0x00000008u;
    { mem_w32(ram, c->r[30] + 0x00000020u, c->r[2]); goto L_08a09574; }
L_08a095f0:
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[3] = 0u + 0x00000001u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000040u);
    c->r[2] = c->r[3] << (c->r[2] & 31u);
    c->r[3] = c->r[2] + 0xffffffffu;
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[3] = c->r[3] & c->r[2];
    c->r[2] = mem_r32(ram, c->r[4] + 0x0000003cu);
    c->r[2] = c->r[2] + c->r[3];
    mem_w32(ram, c->r[5] + 0x0000003cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000040u);
    c->r[2] = c->r[3] >> (c->r[2] & 31u);
    mem_w32(ram, c->r[30] + 0x0000001cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000040u);
    c->r[2] = c->r[3] - c->r[2];
    mem_w32(ram, c->r[30] + 0x00000020u, c->r[2]);
L_08a09648:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x00000024u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000028u);
    c->r[3] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[3] = c->r[3] - c->r[2];
    c->r[2] = mem_r32(ram, c->r[4] + 0x0000003cu);
    c->r[2] = (c->r[3] < c->r[2]) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_08a09694; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = 0x08a50000u;
    c->r[2] = c->r[2] + 0xffffe1b8u;
    mem_w32(ram, c->r[3] + 0x00000018u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = 0u + 0x0000001bu;
    { mem_w32(ram, c->r[3] + 0x00000000u, c->r[2]); goto L_08a075a8; }
L_08a09694:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = 0u + 0x00000016u;
    mem_w32(ram, c->r[3] + 0x00000000u, c->r[2]);
L_08a096a0:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_08a096b4; }
    { goto L_08a09bb8; }
L_08a096b4:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000028u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = c->r[3] - c->r[2];
    mem_w32(ram, c->r[30] + 0x0000002cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x0000003cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000002cu);
    c->r[2] = (c->r[2] < c->r[3]) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_08a09788; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x0000003cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000002cu);
    c->r[2] = c->r[3] - c->r[2];
    mem_w32(ram, c->r[30] + 0x0000002cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000002cu);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000028u);
    c->r[2] = (c->r[2] < c->r[3]) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_08a09740; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000002cu);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000028u);
    c->r[2] = c->r[3] - c->r[2];
    mem_w32(ram, c->r[30] + 0x0000002cu, c->r[2]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x00000020u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000002cu);
    c->r[3] = c->r[3] - c->r[2];
    c->r[2] = mem_r32(ram, c->r[4] + 0x0000002cu);
    c->r[2] = c->r[2] + c->r[3];
    { mem_w32(ram, c->r[30] + 0x00000030u, c->r[2]); goto L_08a09760; }
L_08a09740:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x00000028u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000002cu);
    c->r[3] = c->r[3] - c->r[2];
    c->r[2] = mem_r32(ram, c->r[4] + 0x0000002cu);
    c->r[2] = c->r[2] + c->r[3];
    mem_w32(ram, c->r[30] + 0x00000030u, c->r[2]);
L_08a09760:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000002cu);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000038u);
    c->r[2] = (c->r[2] < c->r[3]) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_08a097a8; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000038u);
    { mem_w32(ram, c->r[30] + 0x0000002cu, c->r[2]); goto L_08a097a8; }
L_08a09788:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000003cu);
    c->r[2] = c->r[3] - c->r[2];
    mem_w32(ram, c->r[30] + 0x00000030u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000038u);
    mem_w32(ram, c->r[30] + 0x0000002cu, c->r[2]);
L_08a097a8:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000002cu);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = (c->r[3] < c->r[2]) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_08a097c4; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    mem_w32(ram, c->r[30] + 0x0000002cu, c->r[2]);
L_08a097c4:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000002cu);
    c->r[2] = c->r[3] - c->r[2];
    mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x00000038u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000002cu);
    c->r[2] = c->r[3] - c->r[2];
    mem_w32(ram, c->r[4] + 0x00000038u, c->r[2]);
L_08a097ec:
    c->r[7] = c->r[30] + 0x00000010u;
    c->r[4] = mem_r32(ram, c->r[7] + 0x00000000u);
    c->r[6] = c->r[30] + 0x00000030u;
    c->r[3] = mem_r32(ram, c->r[6] + 0x00000000u);
    c->r[5] = c->r[4] + 0u;
    c->r[2] = c->r[3] + 0u;
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000000u);
    mem_w8(ram, c->r[5] + 0x00000000u, c->r[2]);
    c->r[3] = c->r[3] + 0x00000001u;
    mem_w32(ram, c->r[6] + 0x00000000u, c->r[3]);
    c->r[4] = c->r[4] + 0x00000001u;
    mem_w32(ram, c->r[7] + 0x00000000u, c->r[4]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000002cu);
    c->r[2] = c->r[2] + 0xffffffffu;
    { int _c = (c->r[2] != 0u); mem_w32(ram, c->r[30] + 0x0000002cu, c->r[2]); if (_c) goto L_08a097ec; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000038u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_08a075a8; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = 0u + 0x00000012u;
    { mem_w32(ram, c->r[3] + 0x00000000u, c->r[2]); goto L_08a075a8; }
L_08a0984c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_08a09860; }
    { goto L_08a09bb8; }
L_08a09860:
    c->r[5] = c->r[30] + 0x00000010u;
    c->r[3] = mem_r32(ram, c->r[5] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[4] = mem_r8(ram, c->r[2] + 0x00000038u);
    c->r[2] = c->r[3] + 0u;
    mem_w8(ram, c->r[2] + 0x00000000u, c->r[4]);
    c->r[3] = c->r[3] + 0x00000001u;
    mem_w32(ram, c->r[5] + 0x00000000u, c->r[3]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = c->r[2] + 0xffffffffu;
    mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = 0u + 0x00000012u;
    { mem_w32(ram, c->r[3] + 0x00000000u, c->r[2]); goto L_08a075a8; }
L_08a0989c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000008u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_08a09aa0; }
L_08a098ac:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[2] = (c->r[2] < 0x00000020u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_08a098c4; }
    { goto L_08a09920; }
L_08a098c4:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_08a098d8; }
    { goto L_08a09bb8; }
L_08a098d8:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = c->r[2] + 0xffffffffu;
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
    c->r[5] = c->r[30] + 0x0000000cu;
    c->r[3] = mem_r32(ram, c->r[5] + 0x00000000u);
    c->r[2] = c->r[3] + 0u;
    c->r[4] = mem_r8(ram, c->r[2] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[4] = c->r[4] << (c->r[2] & 31u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = c->r[2] + c->r[4];
    mem_w32(ram, c->r[30] + 0x0000001cu, c->r[2]);
    c->r[3] = c->r[3] + 0x00000001u;
    mem_w32(ram, c->r[5] + 0x00000000u, c->r[3]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[2] = c->r[2] + 0x00000008u;
    { mem_w32(ram, c->r[30] + 0x00000020u, c->r[2]); goto L_08a098ac; }
L_08a09920:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000028u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = c->r[3] - c->r[2];
    mem_w32(ram, c->r[30] + 0x00000028u, c->r[2]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x00000014u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000028u);
    c->r[2] = c->r[3] + c->r[2];
    mem_w32(ram, c->r[4] + 0x00000014u, c->r[2]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x00000018u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000028u);
    c->r[2] = c->r[3] + c->r[2];
    mem_w32(ram, c->r[4] + 0x00000018u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000028u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_08a099ec; }
    c->r[7] = mem_r32(ram, c->r[30] + 0x00000000u);
    mem_w32(ram, c->r[30] + 0x00000090u, c->r[7]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    mem_w32(ram, c->r[30] + 0x00000094u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000010u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_08a099b4; }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000028u);
    c->r[2] = c->r[3] - c->r[2];
    c->r[4] = mem_r32(ram, c->r[4] + 0x00000014u);
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x08a099acu; c->r[6] = mem_r32(ram, c->r[30] + 0x00000028u); func_08a0b65c(c, ram); }
    { mem_w32(ram, c->r[30] + 0x00000098u, c->r[2]); goto L_08a099d8; }
L_08a099b4:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000028u);
    c->r[2] = c->r[3] - c->r[2];
    c->r[4] = mem_r32(ram, c->r[4] + 0x00000014u);
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x08a099d4u; c->r[6] = mem_r32(ram, c->r[30] + 0x00000028u); func_08a0b204(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000098u, c->r[2]);
L_08a099d8:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000098u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000094u);
    mem_w32(ram, c->r[3] + 0x00000014u, c->r[2]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000090u);
    mem_w32(ram, c->r[4] + 0x00000030u, c->r[2]);
L_08a099ec:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    mem_w32(ram, c->r[30] + 0x00000028u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000014u);
    mem_w32(ram, c->r[30] + 0x0000009cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000010u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_08a09a60; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = c->r[2] >> 24;
    c->r[3] = c->r[2] & 0x00ffu;
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = c->r[2] >> 8;
    c->r[2] = c->r[2] & 0xff00u;
    c->r[3] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = c->r[2] & 0xff00u;
    c->r[2] = c->r[2] << 8;
    c->r[3] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = c->r[2] & 0x00ffu;
    c->r[2] = c->r[2] << 24;
    c->r[2] = c->r[3] + c->r[2];
    c->r[5] = mem_r32(ram, c->r[30] + 0x0000009cu);
    { int _c = (c->r[2] != c->r[5]); if (_c) goto L_08a09a78; }
    { goto L_08a09a98; }
L_08a09a60:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[6] = mem_r32(ram, c->r[30] + 0x0000009cu);
    { int _c = (c->r[2] != c->r[6]); if (_c) goto L_08a09a78; }
    { goto L_08a09a98; }
L_08a09a78:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = 0x08a50000u;
    c->r[2] = c->r[2] + 0xffffe1d8u;
    mem_w32(ram, c->r[3] + 0x00000018u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = 0u + 0x0000001bu;
    { mem_w32(ram, c->r[3] + 0x00000000u, c->r[2]); goto L_08a075a8; }
L_08a09a98:
    mem_w32(ram, c->r[30] + 0x0000001cu, 0u);
    mem_w32(ram, c->r[30] + 0x00000020u, 0u);
L_08a09aa0:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = 0u + 0x00000019u;
    mem_w32(ram, c->r[3] + 0x00000000u, c->r[2]);
L_08a09aac:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000008u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_08a09b7c; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000010u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_08a09b7c; }
L_08a09acc:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[2] = (c->r[2] < 0x00000020u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_08a09ae4; }
    { goto L_08a09b40; }
L_08a09ae4:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_08a09af8; }
    { goto L_08a09bb8; }
L_08a09af8:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = c->r[2] + 0xffffffffu;
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
    c->r[5] = c->r[30] + 0x0000000cu;
    c->r[3] = mem_r32(ram, c->r[5] + 0x00000000u);
    c->r[2] = c->r[3] + 0u;
    c->r[4] = mem_r8(ram, c->r[2] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[4] = c->r[4] << (c->r[2] & 31u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = c->r[2] + c->r[4];
    mem_w32(ram, c->r[30] + 0x0000001cu, c->r[2]);
    c->r[3] = c->r[3] + 0x00000001u;
    mem_w32(ram, c->r[5] + 0x00000000u, c->r[3]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[2] = c->r[2] + 0x00000008u;
    { mem_w32(ram, c->r[30] + 0x00000020u, c->r[2]); goto L_08a09acc; }
L_08a09b40:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000018u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_08a09b74; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = 0x08a50000u;
    c->r[2] = c->r[2] + 0xffffe1f0u;
    mem_w32(ram, c->r[3] + 0x00000018u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = 0u + 0x0000001bu;
    { mem_w32(ram, c->r[3] + 0x00000000u, c->r[2]); goto L_08a075a8; }
L_08a09b74:
    mem_w32(ram, c->r[30] + 0x0000001cu, 0u);
    mem_w32(ram, c->r[30] + 0x00000020u, 0u);
L_08a09b7c:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = 0u + 0x0000001au;
    mem_w32(ram, c->r[3] + 0x00000000u, c->r[2]);
L_08a09b88:
    c->r[2] = 0u + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000064u, c->r[2]); goto L_08a09bb8; }
L_08a09b94:
    c->r[2] = 0u + 0xfffffffdu;
    { mem_w32(ram, c->r[30] + 0x00000064u, c->r[2]); goto L_08a09bb8; }
L_08a09ba0:
    c->r[7] = 0u + 0xfffffffcu;
    { mem_w32(ram, c->r[30] + 0x00000080u, c->r[7]); goto L_08a09e10; }
L_08a09bac:
    c->r[2] = 0u + 0xfffffffeu;
    { mem_w32(ram, c->r[30] + 0x00000080u, c->r[2]); goto L_08a09e10; }
L_08a09bb8:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    mem_w32(ram, c->r[3] + 0x0000000cu, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    mem_w32(ram, c->r[3] + 0x00000010u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    mem_w32(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    mem_w32(ram, c->r[3] + 0x00000004u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    mem_w32(ram, c->r[3] + 0x00000030u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    mem_w32(ram, c->r[3] + 0x00000034u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000020u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_08a09c40; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[2] = (c->r[2] < 0x00000018u) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_08a09c6c; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000028u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000010u);
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_08a09c40; }
    { goto L_08a09c6c; }
L_08a09c40:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x08a09c4cu; c->r[5] = mem_r32(ram, c->r[30] + 0x00000028u); func_08a0721c(c, ram); }
    { int _c = (c->r[2] == 0u); if (_c) goto L_08a09c6c; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = 0u + 0x0000001cu;
    mem_w32(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[3] = 0u + 0xfffffffcu;
    { mem_w32(ram, c->r[30] + 0x00000080u, c->r[3]); goto L_08a09e10; }
L_08a09c6c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000024u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000004u);
    c->r[2] = c->r[3] - c->r[2];
    mem_w32(ram, c->r[30] + 0x00000024u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000028u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000010u);
    c->r[2] = c->r[3] - c->r[2];
    mem_w32(ram, c->r[30] + 0x00000028u, c->r[2]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x00000008u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000024u);
    c->r[2] = c->r[3] + c->r[2];
    mem_w32(ram, c->r[4] + 0x00000008u, c->r[2]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x00000014u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000028u);
    c->r[2] = c->r[3] + c->r[2];
    mem_w32(ram, c->r[4] + 0x00000014u, c->r[2]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x00000018u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000028u);
    c->r[2] = c->r[3] + c->r[2];
    mem_w32(ram, c->r[4] + 0x00000018u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000008u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_08a09d80; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000028u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_08a09d80; }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    mem_w32(ram, c->r[30] + 0x000000a4u, c->r[4]);
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000008u);
    mem_w32(ram, c->r[30] + 0x000000a8u, c->r[5]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000010u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_08a09d44; }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000028u);
    c->r[2] = c->r[3] - c->r[2];
    c->r[4] = mem_r32(ram, c->r[4] + 0x00000014u);
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x08a09d3cu; c->r[6] = mem_r32(ram, c->r[30] + 0x00000028u); func_08a0b65c(c, ram); }
    { mem_w32(ram, c->r[30] + 0x000000acu, c->r[2]); goto L_08a09d6c; }
L_08a09d44:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000028u);
    c->r[2] = c->r[3] - c->r[2];
    c->r[4] = mem_r32(ram, c->r[4] + 0x00000014u);
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x08a09d68u; c->r[6] = mem_r32(ram, c->r[30] + 0x00000028u); func_08a0b204(c, ram); }
    mem_w32(ram, c->r[30] + 0x000000acu, c->r[2]);
L_08a09d6c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000acu);
    c->r[6] = mem_r32(ram, c->r[30] + 0x000000a8u);
    mem_w32(ram, c->r[6] + 0x00000014u, c->r[2]);
    c->r[7] = mem_r32(ram, c->r[30] + 0x000000a4u);
    mem_w32(ram, c->r[7] + 0x00000030u, c->r[2]);
L_08a09d80:
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[4] = mem_r32(ram, c->r[2] + 0x00000034u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000004u);
    c->r[3] = (0u < c->r[2]) ? 1u : 0u;
    c->r[3] = c->r[3] << 6;
    c->r[3] = c->r[3] + c->r[4];
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[2] = c->r[2] ^ 0x000bu;
    c->r[2] = (c->r[2] < 0x00000001u) ? 1u : 0u;
    c->r[2] = c->r[2] << 7;
    c->r[2] = c->r[2] + c->r[3];
    mem_w32(ram, c->r[5] + 0x0000002cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000024u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_08a09ddc; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000028u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_08a09ddc; }
    { goto L_08a09df4; }
L_08a09ddc:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = 0u + 0x00000004u;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_08a09df4; }
    { goto L_08a09e08; }
L_08a09df4:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000064u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_08a09e08; }
    c->r[2] = 0u + 0xfffffffbu;
    mem_w32(ram, c->r[30] + 0x00000064u, c->r[2]);
L_08a09e08:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000064u);
    mem_w32(ram, c->r[30] + 0x00000080u, c->r[2]);
L_08a09e10:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000080u);
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x000000bcu);
    c->r[30] = mem_r32(ram, c->r[29] + 0x000000b8u);
    c->r[17] = mem_r32(ram, c->r[29] + 0x000000b4u);
    c->r[16] = mem_r32(ram, c->r[29] + 0x000000b0u);
    { c->r[29] = c->r[29] + 0x000000c0u; return; }
    return; /* fell out of func_08a074a0 */
}

/* func_08a0dd9c  0x08a0dd9c..0x08a0ddc4  40 bytes, source=fde */
void func_08a0dd9c(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08a0dd9cu);
    c->r[29] = c->r[29] + 0xfffffff0u;
    mem_w32(ram, c->r[29] + 0x00000000u, c->r[31]);
    { u32 _t = c->r[4]; c->r[31] = 0x08a0ddacu; recomp_call_indirect(c, ram, 0x08a0dda4u, _t); }
L_08a0ddac:
    { c->r[31] = 0x08a0ddb4u; func_08a19084(c, ram); }
    { c->r[31] = 0x08a0ddbcu; func_08a0e188(c, ram); }
    { goto L_08a0ddac; }
    return; /* fell out of func_08a0dd9c */
}

/* func_08a0e56c  0x08a0e56c..0x08a0e57c  16 bytes, source=indirect */
void func_08a0e56c(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08a0e56cu);
    c->r[2] = 0x08a50000u;
    c->r[2] = c->r[2] + 0x00000660u;
    { mem_w32(ram, c->r[4] + 0x00000000u, c->r[2]); return; }
    return; /* fell out of func_08a0e56c */
}

/* func_08a0f3a0  0x08a0f3a0..0x08a0f4ec  332 bytes, source=fde */
void func_08a0f3a0(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08a0f3a0u);
    c->r[29] = c->r[29] + 0xffffffc0u;
    mem_w32(ram, c->r[29] + 0x0000002cu, c->r[19]);
    c->r[2] = 0u + 0x00000010u;
    c->r[19] = c->r[5] + 0u;
    mem_w32(ram, c->r[29] + 0x00000028u, c->r[18]);
    c->r[18] = c->r[6] + 0u;
    c->r[5] = c->r[7] + 0u;
    mem_w32(ram, c->r[29] + 0x00000024u, c->r[17]);
    c->r[6] = 0u + 0x00000006u;
    c->r[17] = c->r[7] + 0u;
    mem_w32(ram, c->r[29] + 0x00000020u, c->r[16]);
    c->r[16] = c->r[4] + 0u;
    c->r[7] = c->r[18] + 0u;
    mem_w32(ram, c->r[29] + 0x00000030u, c->r[31]);
    c->r[9] = c->r[19] + 0u;
    c->r[10] = c->r[16] + 0u;
    c->r[3] = mem_r32(ram, c->r[4] + 0x00000000u);
    mem_w32(ram, c->r[29] + 0x00000004u, 0u);
    c->r[11] = c->r[29] + 0u;
    c->r[4] = mem_r32(ram, c->r[3] + 0xfffffffcu);
    c->r[8] = mem_r32(ram, c->r[3] + 0xfffffff8u);
    mem_w32(ram, c->r[29] + 0x00000000u, 0u);
    c->r[3] = mem_r32(ram, c->r[4] + 0x00000000u);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[2]);
    mem_w32(ram, c->r[29] + 0x00000008u, 0u);
    mem_w32(ram, c->r[29] + 0x0000000cu, 0u);
    c->r[2] = mem_r32(ram, c->r[3] + 0x0000001cu);
    { u32 _t = c->r[2]; c->r[31] = 0x08a0f414u; c->r[8] = c->r[16] + c->r[8]; recomp_call_indirect(c, ram, 0x08a0f40cu, _t); }
    c->r[6] = mem_r32(ram, c->r[29] + 0x00000000u);
    { int _c = (c->r[6] == 0u); c->r[4] = 0u + 0u; if (_c) goto L_08a0f49c; }
    c->r[3] = mem_r32(ram, c->r[29] + 0x0000000cu);
    c->r[2] = c->r[3] & 0x0006u;
    c->r[2] = c->r[2] ^ 0x0006u;
    { int _c = (c->r[2] == 0u); c->r[4] = c->r[6] + 0u; if (_c) goto L_08a0f49c; }
    c->r[5] = mem_r32(ram, c->r[29] + 0x00000008u);
    c->r[2] = mem_r32(ram, c->r[29] + 0x00000004u);
    c->r[2] = c->r[5] & c->r[2];
    c->r[2] = c->r[2] & 0x0006u;
    c->r[2] = c->r[2] ^ 0x0006u;
    { int _c = (c->r[2] == 0u); c->r[31] = mem_r32(ram, c->r[29] + 0x00000030u); if (_c) goto L_08a0f4a0; }
    c->r[2] = c->r[5] & 0x0005u;
    c->r[2] = c->r[2] ^ 0x0004u;
    { int _c = (c->r[2] == 0u); c->r[4] = 0u + 0u; if (_c) goto L_08a0f4a0; }
    { int _c = (c->r[3] != 0u); c->r[2] = c->r[3] & 0x0006u; if (_c) goto L_08a0f48c; }
    { int _c = ((s32)c->r[17] < 0); c->r[2] = c->r[6] + c->r[17]; if (_c) goto L_08a0f4bc; }
    c->r[2] = c->r[2] ^ c->r[16];
    c->r[4] = 0u + 0x00000006u;
    c->r[3] = 0u + 0x00000001u;
    if (c->r[2] != 0u) c->r[4] = c->r[3];
L_08a0f480:
    mem_w32(ram, c->r[29] + 0x0000000cu, c->r[4]);
    c->r[3] = c->r[4] + 0u;
    c->r[2] = c->r[3] & 0x0006u;
L_08a0f48c:
    c->r[3] = mem_r32(ram, c->r[29] + 0x00000000u);
    c->r[2] = c->r[2] ^ 0x0006u;
    c->r[4] = 0u + 0u;
    if (c->r[2] == 0u) c->r[4] = c->r[3];
L_08a0f49c:
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000030u);
L_08a0f4a0:
    c->r[19] = mem_r32(ram, c->r[29] + 0x0000002cu);
    c->r[18] = mem_r32(ram, c->r[29] + 0x00000028u);
    c->r[17] = mem_r32(ram, c->r[29] + 0x00000024u);
    c->r[16] = mem_r32(ram, c->r[29] + 0x00000020u);
    c->r[2] = c->r[4] + 0u;
    { c->r[29] = c->r[29] + 0x00000040u; return; }
L_08a0f4bc:
    c->r[2] = 0u + 0xfffffffeu;
    { int _c = (c->r[17] == c->r[2]); c->r[4] = 0u + 0x00000001u; if (_c) goto L_08a0f480; }
    c->r[3] = mem_r32(ram, c->r[18] + 0x00000000u);
    c->r[4] = c->r[18] + 0u;
    c->r[5] = c->r[17] + 0u;
    c->r[2] = mem_r32(ram, c->r[3] + 0x00000020u);
    c->r[7] = c->r[19] + 0u;
    { u32 _t = c->r[2]; c->r[31] = 0x08a0f4e4u; c->r[8] = c->r[16] + 0u; recomp_call_indirect(c, ram, 0x08a0f4dcu, _t); }
    { c->r[4] = c->r[2] + 0u; goto L_08a0f480; }
    return; /* fell out of func_08a0f3a0 */
}

/* func_08a1304c  0x08a1304c..0x08a13164  280 bytes, source=sweep */
void func_08a1304c(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08a1304cu);
    c->r[3] = f2u(c->f[12]);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000000u, c->r[31]);
    c->r[3] = alx_ins(c->r[3], 0u, 31u, 31u);
    c->f[0] = c->f[12];
    mem_wf32(ram, c->r[29] + 0x00000010u, c->f[20]);
    c->r[5] = f2u(c->f[12]);
    { int _c = (c->r[3] == 0u); c->r[6] = c->r[3] >> 23; if (_c) goto L_08a13088; }
    c->r[2] = 0x7f7f0000u;
    c->r[2] = c->r[2] | 0xffffu;
    c->r[2] = (c->r[2] < c->r[3]) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); c->r[2] = 0x007f0000u; if (_c) goto L_08a13098; }
    c->f[0] = c->f[12] + c->f[12];
L_08a13088:
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000000u);
L_08a1308c:
    c->f[20] = mem_rf32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
L_08a13098:
    c->r[2] = c->r[2] | 0xffffu;
    c->r[2] = (c->r[2] < c->r[3]) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); c->r[6] = c->r[6] + c->r[4]; if (_c) goto L_08a130e4; }
    c->r[2] = 0x08a50000u;
    c->f[0] = mem_rf32(ram, c->r[2] + 0x0000106cu);
    c->r[3] = 0xffff0000u;
    c->r[3] = c->r[3] | 0x3cb0u;
    c->f[12] = c->f[12] * c->f[0];
    c->r[3] = ((s32)c->r[4] < (s32)c->r[3]) ? 1u : 0u;
    c->r[5] = f2u(c->f[12]);
    c->r[2] = alx_ext(c->r[5], 23u, 7u);
    { int _c = (c->r[3] == 0u); c->r[6] = c->r[2] + 0xffffffe7u; if (_c) goto L_08a130e0; }
    c->r[2] = 0x08a50000u;
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00001070u);
L_08a130d8:
    { c->f[0] = c->f[12] * c->f[0]; goto L_08a13088; }
L_08a130e0:
    c->r[6] = c->r[6] + c->r[4];
L_08a130e4:
    c->r[2] = ((s32)c->r[6] < (s32)0x000000ffu) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); c->r[2] = c->r[6] << 23; if (_c) goto L_08a13124; }
    c->r[3] = c->r[5] + 0u;
    c->r[3] = alx_ins(c->r[3], 0u, 23u, 30u);
    c->r[3] = c->r[3] | c->r[2];
    c->f[0] = u2f(c->r[3]);
    { int _c = ((s32)c->r[6] > 0); c->r[31] = mem_r32(ram, c->r[29] + 0x00000000u); if (_c) goto L_08a1308c; }
    c->r[2] = ((s32)c->r[6] < (s32)0xffffffeau) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); c->r[6] = c->r[6] + 0x00000019u; if (_c) goto L_08a13148; }
    c->r[2] = 0u | 0xc350u;
    c->r[2] = ((s32)c->r[2] < (s32)c->r[4]) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); c->r[2] = 0x08a50000u; if (_c) goto L_08a13140; }
L_08a13124:
    c->r[2] = 0x08a50000u;
    c->f[20] = mem_rf32(ram, c->r[2] + 0x00001074u);
L_08a1312c:
    c->f[13] = c->f[12];
    { c->r[31] = 0x08a13138u; c->f[12] = c->f[20]; func_08a13164(c, ram); }
    { c->f[0] = c->f[0] * c->f[20]; goto L_08a13088; }
L_08a13140:
    { c->f[20] = mem_rf32(ram, c->r[2] + 0x00001070u); goto L_08a1312c; }
L_08a13148:
    c->r[2] = c->r[6] << 23;
    c->r[5] = alx_ins(c->r[5], 0u, 23u, 30u);
    c->r[5] = c->r[5] | c->r[2];
    c->r[3] = 0x08a50000u;
    c->f[12] = u2f(c->r[5]);
    { c->f[0] = mem_rf32(ram, c->r[3] + 0x00001078u); goto L_08a130d8; }
    return; /* fell out of func_08a1304c */
}

/* func_08a154c8  0x08a154c8..0x08a1564c  388 bytes, source=fde */
void func_08a154c8(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08a154c8u);
    c->r[29] = c->r[29] + 0xffffffc0u;
    mem_w32(ram, c->r[29] + 0x00000020u, c->r[20]);
    c->r[6] = 0u + 0x000006c4u;
    c->r[20] = c->r[5] + 0u;
    mem_w32(ram, c->r[29] + 0x00000018u, c->r[18]);
    c->r[18] = c->r[4] + 0u;
    c->r[4] = c->r[5] + 0u;
    c->r[5] = 0u + 0u;
    mem_w32(ram, c->r[29] + 0x00000030u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x0000002cu, c->r[23]);
    mem_w32(ram, c->r[29] + 0x00000028u, c->r[22]);
    mem_w32(ram, c->r[29] + 0x00000024u, c->r[21]);
    mem_w32(ram, c->r[29] + 0x0000001cu, c->r[19]);
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[17]);
    { c->r[31] = 0x08a15508u; mem_w32(ram, c->r[29] + 0x00000010u, c->r[16]); func_08a19ec4(c, ram); }
    c->r[5] = c->r[18] + 0x00000358u;
    c->r[3] = mem_r32(ram, c->r[18] + 0x00000350u);
    mem_w32(ram, c->r[18] + 0x00000364u, 0u);
    c->r[2] = 0u + 0x00000005u;
    c->r[4] = c->r[3] + 0xffffffffu;
    { int _c = (c->r[3] == 0u); mem_w32(ram, c->r[18] + 0x00000354u, 0u); if (_c) goto L_08a15608; }
    { c->r[31] = 0x08a1552cu; func_08a17d58(c, ram); }
    c->r[21] = c->r[2] + 0u;
    c->r[6] = c->r[20] + 0u;
    c->r[5] = c->r[18] + 0u;
    { int _c = (c->r[21] == 0u); c->r[2] = 0u + 0x00000005u; if (_c) goto L_08a15608; }
    c->r[3] = mem_r32(ram, c->r[18] + 0x00000360u);
    c->r[2] = mem_r32(ram, c->r[21] + 0x00000004u);
    c->r[19] = c->r[21] + 0x00000008u;
    mem_w32(ram, c->r[20] + 0x000006acu, c->r[3]);
    c->r[16] = c->r[21] - c->r[2];
    c->r[22] = c->r[16] + 0x00000004u;
    { c->r[31] = 0x08a15560u; c->r[4] = c->r[22] + 0u; func_08a1493c(c, ram); }
    c->r[17] = c->r[2] + 0u;
    c->r[4] = c->r[2] + 0u;
    c->r[6] = c->r[18] + 0u;
    c->r[7] = c->r[20] + 0u;
    { int _c = (c->r[17] == 0u); c->r[2] = 0u + 0x00000003u; if (_c) goto L_08a15608; }
    c->r[2] = mem_r32(ram, c->r[16] + 0x00000004u);
    c->r[23] = c->r[18] + 0x00000354u;
    c->r[17] = 0u + 0u;
    c->r[2] = c->r[22] + c->r[2];
    { c->r[31] = 0x08a15590u; c->r[5] = c->r[2] + 0x00000004u; func_08a14fbc(c, ram); }
    { c->r[31] = 0x08a15598u; c->r[4] = mem_r8(ram, c->r[20] + 0x000006bdu); func_08a14600(c, ram); }
    c->r[3] = mem_r8(ram, c->r[20] + 0x000006bfu);
    c->r[2] = c->r[2] << 1;
    c->r[19] = c->r[19] + c->r[2];
    c->r[5] = c->r[29] + 0u;
    { int _c = (c->r[3] != 0u); c->r[4] = c->r[19] + 0u; if (_c) goto L_08a15634; }
L_08a155b0:
    c->r[16] = mem_r8(ram, c->r[20] + 0x000006beu);
    c->r[2] = 0u + 0x000000ffu;
    c->r[5] = c->r[18] + 0u;
    { int _c = (c->r[16] == c->r[2]); c->r[4] = c->r[16] + 0u; if (_c) goto L_08a155e4; }
    { c->r[31] = 0x08a155ccu; func_08a14670(c, ram); }
    c->r[5] = c->r[2] + 0u;
    c->r[6] = c->r[19] + 0u;
    c->r[4] = c->r[16] + 0u;
    { c->r[31] = 0x08a155e0u; c->r[7] = c->r[23] + 0u; func_08a147a4(c, ram); }
    c->r[19] = c->r[2] + 0u;
L_08a155e4:
    c->r[2] = mem_r32(ram, c->r[21] + 0x00000000u);
    if (c->r[17] == 0u) c->r[17] = c->r[19];
    c->r[6] = c->r[18] + 0u;
    c->r[2] = c->r[21] + c->r[2];
    c->r[5] = c->r[2] + 0x00000004u;
    c->r[7] = c->r[20] + 0u;
    { c->r[31] = 0x08a15604u; c->r[4] = c->r[17] + 0u; func_08a14fbc(c, ram); }
    c->r[2] = 0u + 0u;
L_08a15608:
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000030u);
    c->r[23] = mem_r32(ram, c->r[29] + 0x0000002cu);
    c->r[22] = mem_r32(ram, c->r[29] + 0x00000028u);
    c->r[21] = mem_r32(ram, c->r[29] + 0x00000024u);
    c->r[20] = mem_r32(ram, c->r[29] + 0x00000020u);
    c->r[19] = mem_r32(ram, c->r[29] + 0x0000001cu);
    c->r[18] = mem_r32(ram, c->r[29] + 0x00000018u);
    c->r[17] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[16] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000040u; return; }
L_08a15634:
    { c->r[31] = 0x08a1563cu; func_08a14718(c, ram); }
    c->r[19] = c->r[2] + 0u;
    c->r[2] = mem_r32(ram, c->r[29] + 0x00000000u);
    { c->r[17] = c->r[19] + c->r[2]; goto L_08a155b0; }
    return; /* fell out of func_08a154c8 */
}

/* func_08a170ec  0x08a170ec..0x08a17160  116 bytes, source=sweep */
void func_08a170ec(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08a170ecu);
    c->r[29] = c->r[29] + 0xfffffff0u;
    c->r[4] = c->r[4] & 0x00ffu;
    c->r[2] = 0u + 0x000000ffu;
    mem_w32(ram, c->r[29] + 0x00000000u, c->r[31]);
    { int _c = (c->r[4] == c->r[2]); c->r[3] = 0u + 0u; if (_c) goto L_08a17128; }
    c->r[4] = c->r[4] & 0x0070u;
    c->r[2] = 0u + 0x00000020u;
    { int _c = (c->r[4] == c->r[2]); c->r[2] = ((s32)c->r[4] < (s32)0x00000021u) ? 1u : 0u; if (_c) goto L_08a17158; }
    { int _c = (c->r[2] == 0u); c->r[2] = 0u + 0x00000030u; if (_c) goto L_08a17148; }
    { int _c = (c->r[4] != 0u); c->r[2] = 0u + 0x00000010u; if (_c) goto L_08a17138; }
    c->r[3] = 0u + 0u;
L_08a17128:
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000000u);
    c->r[2] = c->r[3] + 0u;
    { c->r[29] = c->r[29] + 0x00000010u; return; }
L_08a17138:
    { int _c = (c->r[4] == c->r[2]); c->r[3] = 0u + 0u; if (_c) goto L_08a17128; }
    { c->r[31] = 0x08a17148u; func_08a19084(c, ram); }
L_08a17148:
    { int _c = (c->r[4] != c->r[2]); c->r[2] = 0u + 0x00000050u; if (_c) goto L_08a17138; }
    { c->r[3] = mem_r32(ram, c->r[5] + 0x00000008u); goto L_08a17128; }
L_08a17158:
    { c->r[3] = mem_r32(ram, c->r[5] + 0x00000004u); goto L_08a17128; }
    return; /* fell out of func_08a170ec */
}

/* func_08a18fa4  0x08a18fa4..0x08a18fac  8 bytes, source=residue */
void func_08a18fa4(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08a18fa4u);
    { c->r[2] = 0u + 0xffffffffu; return; }
    return; /* fell out of func_08a18fa4 */
}

/* func_08a19f7c  0x08a19f7c..0x08a19fb8  60 bytes, source=sweep */
void func_08a19f7c(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08a19f7cu);
    c->r[29] = c->r[29] + 0xfffffff0u;
    mem_w32(ram, c->r[29] + 0x00000000u, c->r[31]);
    { c->r[31] = 0x08a19f8cu; hle_dispatch_stub(c, ram, 0x08a2472cu); /* sceKernelCpuSuspendIntr */ }
    c->r[5] = 0x08ba0000u;
    c->r[4] = c->r[2] + 0u;
    c->r[2] = mem_r32(ram, c->r[5] + 0xffffff70u);
    { int _c = (c->r[2] != 0u); c->r[3] = c->r[2] + 0x00000001u; if (_c) goto L_08a19fa8; }
    c->r[2] = 0x08ba0000u;
    mem_w32(ram, c->r[2] + 0xffffff74u, c->r[4]);
L_08a19fa8:
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000000u);
    mem_w32(ram, c->r[5] + 0xffffff70u, c->r[3]);
    { c->r[29] = c->r[29] + 0x00000010u; return; }
    return; /* fell out of func_08a19f7c */
}

/* func_08a1b020  0x08a1b020..0x08a1b13c  284 bytes, source=sweep */
void func_08a1b020(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08a1b020u);
    { int _c = (c->r[6] == 0u); c->r[2] = 0u + 0u; if (_c) goto L_08a1b090; }
    c->r[2] = c->r[4] | c->r[5];
    c->r[2] = c->r[2] & 0x0003u;
    { int _c = (c->r[2] != 0u); c->r[2] = c->r[6] + 0u; if (_c) goto L_08a1b064; }
    c->r[2] = (c->r[6] < 0x00000004u) ? 1u : 0u;
    c->r[7] = c->r[4] + 0u;
    { int _c = (c->r[2] != 0u); c->r[8] = c->r[5] + 0u; if (_c) goto L_08a1b058; }
    c->r[3] = mem_r32(ram, c->r[4] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[5] + 0x00000000u);
    { int _c = (c->r[3] == c->r[2]); c->r[9] = 0xfefe0000u; if (_c) goto L_08a1b0e4; }
L_08a1b058:
    c->r[4] = c->r[7] + 0u;
L_08a1b05c:
    c->r[5] = c->r[8] + 0u;
    c->r[2] = c->r[6] + 0u;
L_08a1b064:
    { int _c = (c->r[2] == 0u); c->r[6] = c->r[6] + 0xffffffffu; if (_c) goto L_08a1b0d8; }
    c->r[7] = mem_r8(ram, c->r[4] + 0x00000000u);
    c->r[8] = mem_r8(ram, c->r[5] + 0x00000000u);
    c->r[3] = alx_seb(c->r[7]);
    c->r[2] = alx_seb(c->r[8]);
    { int _c = (c->r[3] == c->r[2]); c->r[9] = c->r[7] + 0u; if (_c) goto L_08a1b098; }
L_08a1b084:
    c->r[3] = c->r[7] & 0x00ffu;
L_08a1b088:
    c->r[2] = c->r[8] & 0x00ffu;
    c->r[2] = c->r[3] - c->r[2];
L_08a1b090:
    { return; }
L_08a1b098:
    c->r[4] = c->r[4] + 0x00000001u;
    c->r[5] = c->r[5] + 0x00000001u;
    { int _c = (c->r[6] == 0u); c->r[2] = alx_seb(c->r[9]); if (_c) goto L_08a1b0d0; }
    { int _c = (c->r[2] == 0u); c->r[6] = c->r[6] + 0xffffffffu; if (_c) goto L_08a1b0d0; }
    c->r[7] = mem_r8(ram, c->r[4] + 0x00000000u);
    c->r[8] = mem_r8(ram, c->r[5] + 0x00000000u);
    c->r[3] = alx_seb(c->r[7]);
    c->r[2] = alx_seb(c->r[8]);
    { int _c = (c->r[3] == c->r[2]); c->r[9] = c->r[7] + 0u; if (_c) goto L_08a1b098; }
    { c->r[3] = c->r[7] & 0x00ffu; goto L_08a1b088; }
L_08a1b0d0:
    { c->r[2] = 0u + 0u; return; }
L_08a1b0d8:
    c->r[7] = mem_r8(ram, c->r[4] + 0x00000000u);
    { c->r[8] = mem_r8(ram, c->r[5] + 0x00000000u); goto L_08a1b084; }
L_08a1b0e4:
    c->r[5] = 0x80800000u;
    c->r[9] = c->r[9] | 0xfeffu;
    c->r[5] = c->r[5] | 0x8080u;
    c->r[6] = c->r[6] + 0xfffffffcu;
L_08a1b0f4:
    { int _c = (c->r[6] == 0u); c->r[4] = (c->r[6] < 0x00000004u) ? 1u : 0u; if (_c) goto L_08a1b0d0; }
    c->r[2] = mem_r32(ram, c->r[7] + 0x00000000u);
    c->r[8] = c->r[8] + 0x00000004u;
    c->r[3] = ~(0u | c->r[2]);
    c->r[2] = c->r[2] + c->r[9];
    c->r[2] = c->r[2] & c->r[3];
    c->r[2] = c->r[2] & c->r[5];
    { int _c = (c->r[2] != 0u); c->r[7] = c->r[7] + 0x00000004u; if (_c) goto L_08a1b0d0; }
    if (c->r[4] != 0u) { c->r[4] = c->r[7] + 0u; goto L_08a1b05c; }
    c->r[3] = mem_r32(ram, c->r[7] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[8] + 0x00000000u);
    if (c->r[3] == c->r[2]) { c->r[6] = c->r[6] + 0xfffffffcu; goto L_08a1b0f4; }
    { c->r[4] = c->r[7] + 0u; goto L_08a1b05c; }
    return; /* fell out of func_08a1b020 */
}

/* func_08a214e4  0x08a214e4..0x08a215c8  228 bytes, source=residue */
void func_08a214e4(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08a214e4u);
    c->r[29] = c->r[29] + 0xfffffff0u;
    mem_w32(ram, c->r[29] + 0x00000004u, c->r[17]);
    mem_w32(ram, c->r[29] + 0x00000000u, c->r[16]);
    c->r[16] = 0x08a60000u;
    mem_w32(ram, c->r[29] + 0x00000008u, c->r[31]);
    c->r[3] = mem_r32(ram, c->r[16] + 0x00004dd8u);
    c->r[2] = mem_r32(ram, c->r[3] + 0x00000038u);
    { int _c = (c->r[2] == 0u); c->r[17] = c->r[4] + 0u; if (_c) goto L_08a215b8; }
L_08a21508:
    c->r[16] = c->r[3] + 0x0000025cu;
L_08a2150c:
    c->r[3] = mem_r32(ram, c->r[16] + 0x00000004u);
    c->r[3] = c->r[3] + 0xffffffffu;
    { int _c = ((s32)c->r[3] < 0); c->r[4] = mem_r32(ram, c->r[16] + 0x00000008u); if (_c) goto L_08a21530; }
L_08a2151c:
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[4] + 0x0000000cu);
    { int _c = (c->r[2] == 0u); c->r[3] = c->r[3] + 0xffffffffu; if (_c) goto L_08a21578; }
    { int _c = ((s32)c->r[3] >= 0); c->r[4] = c->r[4] + 0x0000005cu; if (_c) goto L_08a2151c; }
L_08a21530:
    c->r[2] = mem_r32(ram, c->r[16] + 0x00000000u);
    { int _c = (c->r[2] == 0u); c->r[4] = c->r[17] + 0u; if (_c) goto L_08a21544; }
L_08a2153c:
    { c->r[16] = c->r[2] + 0u; goto L_08a2150c; }
L_08a21544:
    { c->r[31] = 0x08a2154cu; c->r[5] = 0u + 0x00000004u; func_08a21470(c, ram); }
    { int _c = (c->r[2] != 0u); mem_w32(ram, c->r[16] + 0x00000000u, c->r[2]); if (_c) goto L_08a2153c; }
    c->r[2] = 0u + 0x0000000cu;
    c->r[3] = 0u + 0u;
    mem_w32(ram, c->r[17] + 0x00000000u, c->r[2]);
L_08a21560:
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000008u);
    c->r[17] = mem_r32(ram, c->r[29] + 0x00000004u);
    c->r[16] = mem_r32(ram, c->r[29] + 0x00000000u);
    c->r[2] = c->r[3] + 0u;
    { c->r[29] = c->r[29] + 0x00000010u; return; }
L_08a21578:
    c->r[2] = 0u + 0x00000001u;
    mem_w16(ram, c->r[4] + 0x0000000cu, c->r[2]);
    c->r[2] = 0u + 0xffffffffu;
    c->r[3] = c->r[4] + 0u;
    mem_w16(ram, c->r[4] + 0x0000000eu, c->r[2]);
    mem_w32(ram, c->r[4] + 0x00000000u, 0u);
    mem_w32(ram, c->r[4] + 0x00000008u, 0u);
    mem_w32(ram, c->r[4] + 0x00000004u, 0u);
    mem_w32(ram, c->r[4] + 0x00000010u, 0u);
    mem_w32(ram, c->r[4] + 0x00000014u, 0u);
    mem_w32(ram, c->r[4] + 0x00000018u, 0u);
    mem_w32(ram, c->r[4] + 0x00000030u, 0u);
    mem_w32(ram, c->r[4] + 0x00000034u, 0u);
    mem_w32(ram, c->r[4] + 0x00000044u, 0u);
    { mem_w32(ram, c->r[4] + 0x00000048u, 0u); goto L_08a21560; }
L_08a215b8:
    { c->r[31] = 0x08a215c0u; c->r[4] = c->r[3] + 0u; func_08a2160c(c, ram); }
    { c->r[3] = mem_r32(ram, c->r[16] + 0x00004dd8u); goto L_08a21508; }
    return; /* fell out of func_08a214e4 */
}

/* func_08a2342c  0x08a2342c..0x08a234cc  160 bytes, source=residue */
void func_08a2342c(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08a2342cu);
    c->r[29] = c->r[29] + 0xfffffff0u;
    c->r[2] = ((s32)c->r[4] < (s32)0x00000018u) ? 1u : 0u;
    mem_w32(ram, c->r[29] + 0x00000000u, c->r[16]);
    c->r[16] = c->r[4] + 0u;
    mem_w32(ram, c->r[29] + 0x0000000cu, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000008u, c->r[19]);
    mem_w32(ram, c->r[29] + 0x00000004u, c->r[18]);
    c->r[4] = 0x08a50000u;
    c->r[4] = mem_r32(ram, c->r[4] + 0x00001e70u);
    c->r[5] = 0x08a50000u;
    c->r[5] = mem_r32(ram, c->r[5] + 0x00001e74u);
    { int _c = (c->r[2] == 0u); c->r[2] = 0x08a50000u; if (_c) goto L_08a2348c; }
    c->r[2] = c->r[2] + 0x00001d58u;
    c->r[3] = c->r[16] << 3;
    c->r[3] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[3] + 0x00000000u);
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000004u);
L_08a23474:
    c->r[31] = mem_r32(ram, c->r[29] + 0x0000000cu);
    c->r[19] = mem_r32(ram, c->r[29] + 0x00000008u);
    c->r[18] = mem_r32(ram, c->r[29] + 0x00000004u);
    c->r[16] = mem_r32(ram, c->r[29] + 0x00000000u);
    { c->r[29] = c->r[29] + 0x00000010u; return; }
L_08a2348c:
    { int _c = ((s32)c->r[16] <= 0); c->r[2] = c->r[4] + 0u; if (_c) goto L_08a234c4; }
    c->r[18] = 0x08a50000u;
    c->r[18] = mem_r32(ram, c->r[18] + 0x00001e78u);
    c->r[19] = 0x08a50000u;
    c->r[19] = mem_r32(ram, c->r[19] + 0x00001e7cu);
L_08a234a4:
    c->r[6] = c->r[18] + 0u;
    { c->r[31] = 0x08a234b0u; c->r[7] = c->r[19] + 0u; func_08a13b68(c, ram); }
    c->r[16] = c->r[16] + 0xffffffffu;
    c->r[4] = c->r[2] + 0u;
    { int _c = ((s32)c->r[16] > 0); c->r[5] = c->r[3] + 0u; if (_c) goto L_08a234a4; }
    c->r[2] = c->r[4] + 0u;
L_08a234c4:
    { c->r[3] = c->r[5] + 0u; goto L_08a23474; }
    return; /* fell out of func_08a2342c */
}
