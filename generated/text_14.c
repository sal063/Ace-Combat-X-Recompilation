#include "pspreco.h"
#include "symbols.h"
#include <math.h>

/* func_08804c24  0x08804c24..0x08804d48  292 bytes, source=fde */
void func_08804c24(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08804c24u);
    c->r[29] = c->r[29] + 0xfffffff0u;
    mem_w32(ram, c->r[29] + 0x00000004u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000000u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    { c->r[31] = 0x08804c3cu; c->r[4] = 0u + 0x00000002u; func_08807980(c, ram); }
    c->r[2] = 0u + 0x00000002u;
    c->r[1] = 0x08b90000u;
    { c->r[31] = 0x08804c4cu; mem_w32(ram, c->r[1] + 0x00000704u, c->r[2]); hle_dispatch_stub(c, ram, 0x08a249c4u); /* sceDisplayGetAccumulatedHcount */ }
    c->r[1] = 0x08b90000u;
    mem_w32(ram, c->r[1] + 0x00005428u, c->r[2]);
    c->r[4] = 0x08a70000u;
    c->r[4] = c->r[4] + 0xffffb640u;
    c->r[5] = 0u + 0x00000001u;
    { c->r[31] = 0x08804c68u; c->r[6] = 0u + 0u; func_089df7a0(c, ram); }
    c->r[4] = 0x08a70000u;
    { c->r[31] = 0x08804c74u; c->r[4] = c->r[4] + 0xffffb34cu; func_089d8008(c, ram); }
    c->r[4] = 0x08a70000u;
    { c->r[31] = 0x08804c80u; c->r[4] = c->r[4] + 0xffffb640u; func_089ef394(c, ram); }
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x08804c8cu; c->r[4] = c->r[4] + 0x00000af4u; func_089c9300(c, ram); }
    { c->r[31] = 0x08804c94u; func_08850c64(c, ram); }
    { c->r[31] = 0x08804c9cu; func_089c6108(c, ram); }
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000ac8u;
    c->r[5] = 0u + 0u;
    c->r[6] = 0u + 0x00000004u;
    { c->r[31] = 0x08804cb4u; c->r[7] = 0u + 0u; func_089cb2b4(c, ram); }
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000ac8u;
    c->r[1] = 0x08a80000u;
    { c->r[31] = 0x08804cc8u; c->f[12] = mem_rf32(ram, c->r[1] + 0x00002e40u); func_089cb49c(c, ram); }
    { c->r[31] = 0x08804cd0u; func_0884e0b4(c, ram); }
    { c->r[31] = 0x08804cd8u; func_089c61b8(c, ram); }
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0xffffbf30u;
    { c->r[31] = 0x08804ce8u; c->r[5] = 0u + 0u; func_089f1d70(c, ram); }
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000ac8u;
    c->r[5] = 0u + 0u;
    c->r[6] = 0u + 0x00000007u;
    { c->r[31] = 0x08804d00u; c->r[7] = 0u + 0u; func_089cb2b4(c, ram); }
    { c->r[31] = 0x08804d08u; func_08808154(c, ram); }
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x08804d14u; c->r[4] = c->r[4] + 0xffffc930u; func_089f77f0(c, ram); }
    { c->r[31] = 0x08804d1cu; hle_dispatch_stub(c, ram, 0x08a249c4u); /* sceDisplayGetAccumulatedHcount */ }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = 0x08b90000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00005428u);
    c->r[2] = c->r[3] - c->r[2];
    c->r[1] = 0x08a80000u;
    mem_w32(ram, c->r[1] + 0x00002fa8u, c->r[2]);
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000004u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000000u);
    { c->r[29] = c->r[29] + 0x00000010u; return; }
    return; /* fell out of func_08804c24 */
}

/* func_08806e4c  0x08806e4c..0x08806e90  68 bytes, source=sweep */
void func_08806e4c(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08806e4cu);
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
    { c->r[31] = 0x08806e7cu; c->r[5] = c->r[2] + 0u; func_08806b6c(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_08806e4c */
}

/* func_0880801c  0x0880801c..0x0880803c  32 bytes, source=sweep */
void func_0880801c(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0880801cu);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_0880801c */
}

/* func_0880a15c  0x0880a15c..0x0880a474  792 bytes, source=fde */
void func_0880a15c(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0880a15cu);
    c->r[29] = c->r[29] + 0xffffffa0u;
    mem_w32(ram, c->r[29] + 0x00000054u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000050u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[4]);
    c->r[2] = 0x08a80000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0xffffbf14u);
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
    c->r[2] = c->r[30] + 0x00000020u;
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffffe980u);
    c->r[1] = 0x08a40000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0xffffe984u);
    c->r[4] = c->r[2] + 0u;
    c->f[12] = u2f(0u);
    c->f[13] = u2f(0u);
    c->f[14] = c->f[0];
    { c->r[31] = 0x0880a1a8u; c->f[15] = c->f[1]; func_0880d140(c, ram); }
    c->r[2] = c->r[30] + 0x00000030u;
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffffe988u);
    c->r[1] = 0x08a40000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0xffffe988u);
    c->r[1] = 0x08a40000u;
    c->f[2] = mem_rf32(ram, c->r[1] + 0xffffe988u);
    c->r[1] = 0x08a40000u;
    c->f[3] = mem_rf32(ram, c->r[1] + 0xffffe988u);
    c->r[4] = c->r[2] + 0u;
    c->f[12] = c->f[0];
    c->f[13] = c->f[1];
    c->f[14] = c->f[2];
    { c->r[31] = 0x0880a1e4u; c->f[15] = c->f[3]; func_0880d140(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_0880a2d4; }
    c->r[3] = 0x08a80000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00003c44u);
    c->r[2] = 0x0fff0000u;
    c->r[2] = c->r[2] | 0xffffu;
    c->r[3] = c->r[3] & c->r[2];
    mem_w32(ram, c->r[30] + 0x00000040u, c->r[3]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000040u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_0880a460; }
    c->r[2] = 0u + 0x00000001u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000040u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_0880a22c; }
    { goto L_0880a268; }
L_0880a22c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    mem_w32(ram, c->r[29] + 0x00000000u, c->r[2]);
    c->r[4] = 0x08a70000u;
    c->r[4] = c->r[4] + 0xffffb640u;
    c->r[5] = 0x08b90000u;
    c->r[5] = mem_r32(ram, c->r[5] + 0x00005430u);
    c->r[6] = 0u + 0x00000200u;
    c->r[7] = 0u + 0x00000001u;
    c->r[8] = 0u + 0u;
    c->r[9] = 0u + 0u;
    c->r[10] = 0u + 0x00000200u;
    { c->r[31] = 0x0880a260u; c->r[11] = 0u + 0x00000200u; func_089e0fac(c, ram); }
    { goto L_0880a460; }
L_0880a268:
    mem_w32(ram, c->r[29] + 0x00000000u, 0u);
    mem_w32(ram, c->r[29] + 0x00000004u, 0u);
    c->r[4] = 0x08a70000u;
    c->r[4] = c->r[4] + 0xffffb640u;
    c->r[5] = 0u + 0u;
    c->r[6] = 0u + 0x00000200u;
    c->r[7] = 0u + 0x00000001u;
    c->r[8] = 0u + 0x00000200u;
    c->r[9] = 0u + 0x00000200u;
    c->r[10] = 0u + 0u;
    { c->r[31] = 0x0880a298u; c->r[11] = mem_r32(ram, c->r[30] + 0x00000014u); func_089e10c4(c, ram); }
    c->r[4] = 0x08a70000u;
    c->r[4] = c->r[4] + 0xffffb640u;
    c->r[5] = 0u + 0x00000001u;
    { c->r[31] = 0x0880a2acu; c->r[6] = 0u + 0x00000006u; func_089df7a0(c, ram); }
    c->r[2] = c->r[30] + 0x00000020u;
    c->r[3] = c->r[30] + 0x00000030u;
    c->r[7] = c->r[30] + 0x00000020u;
    c->r[4] = 0x08a70000u;
    c->r[4] = c->r[4] + 0xffffb640u;
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x0880a2ccu; c->r[6] = c->r[3] + 0u; func_089ec948(c, ram); }
    { goto L_0880a460; }
L_0880a2d4:
    c->r[2] = 0x08a80000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00003c44u);
    c->r[2] = c->r[2] + 0x00000001u;
    c->r[1] = 0x08a80000u;
    mem_w32(ram, c->r[1] + 0x00003c44u, c->r[2]);
    c->r[3] = 0x08a80000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00003c44u);
    c->r[2] = 0x0fff0000u;
    c->r[2] = c->r[2] | 0xffffu;
    c->r[3] = c->r[3] & c->r[2];
    mem_w32(ram, c->r[30] + 0x00000048u, c->r[3]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000048u);
    { int _c = ((s32)c->r[2] < 0); if (_c) goto L_0880a388; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000048u);
    c->r[2] = ((s32)c->r[3] < (s32)0x00000002u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_0880a460; }
    c->r[2] = 0u + 0x00000002u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000048u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_0880a334; }
    { goto L_0880a388; }
L_0880a334:
    c->r[4] = 0x08a80000u;
    c->r[4] = mem_r32(ram, c->r[4] + 0x00003c54u);
    { c->r[31] = 0x0880a344u; c->r[5] = 0u + 0x00000002u; func_0880d260(c, ram); }
    { c->r[31] = 0x0880a34cu; c->r[4] = 0u + 0x0000012cu; func_0880b09c(c, ram); }
    { c->r[31] = 0x0880a354u; c->r[4] = 0u + 0x00000001u; func_089c6e0c(c, ram); }
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000af4u;
    { c->r[31] = 0x0880a364u; c->r[5] = 0u + 0u; func_0880d318(c, ram); }
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffffe98cu);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00003c30u;
    c->r[5] = 0u + 0x00000001u;
    { c->r[31] = 0x0880a380u; c->f[12] = c->f[0]; func_089b3514(c, ram); }
    { goto L_0880a460; }
L_0880a388:
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x0880a394u; c->r[4] = c->r[4] + 0x00003c30u; func_089b384c(c, ram); }
    { int _c = (c->r[2] != 0u); if (_c) goto L_0880a460; }
    c->r[2] = 0x08a80000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00003c44u);
    c->r[3] = 0xf0000000u;
    c->r[2] = c->r[2] & c->r[3];
    mem_w32(ram, c->r[30] + 0x00000044u, c->r[2]);
    c->r[2] = 0x10000000u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000044u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_0880a410; }
    c->r[2] = 0x10000000u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000044u);
    c->r[2] = (c->r[2] < c->r[3]) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_0880a3e8; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000044u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_0880a400; }
    { goto L_0880a460; }
L_0880a3e8:
    c->r[2] = 0x20000000u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000044u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_0880a420; }
    { goto L_0880a460; }
L_0880a400:
    c->r[2] = 0u + 0x00000003u;
    c->r[1] = 0x08a80000u;
    { mem_w32(ram, c->r[1] + 0x00003c40u, c->r[2]); goto L_0880a460; }
L_0880a410:
    c->r[2] = 0u + 0x00000006u;
    c->r[1] = 0x08a80000u;
    { mem_w32(ram, c->r[1] + 0x00003c40u, c->r[2]); goto L_0880a460; }
L_0880a420:
    c->r[4] = 0x08a60000u;
    c->r[4] = c->r[4] + 0x00005260u;
    { c->r[31] = 0x0880a430u; c->r[5] = 0u + 0x00000001u; func_089d7208(c, ram); }
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffffe98cu);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00003c30u;
    c->r[5] = 0u + 0x00000002u;
    { c->r[31] = 0x0880a44cu; c->f[12] = c->f[0]; func_089b3514(c, ram); }
    { c->r[31] = 0x0880a454u; c->r[4] = 0u + 0x00000002u; func_08924620(c, ram); }
    c->r[2] = 0u + 0x0000000bu;
    c->r[1] = 0x08a80000u;
    mem_w32(ram, c->r[1] + 0x00003c40u, c->r[2]);
L_0880a460:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000054u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000050u);
    { c->r[29] = c->r[29] + 0x00000060u; return; }
    return; /* fell out of func_0880a15c */
}

/* func_0880d140  0x0880d140..0x0880d1a0  96 bytes, source=sweep */
void func_0880d140(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0880d140u);
    c->r[29] = c->r[29] + 0xffffffd0u;
    mem_w32(ram, c->r[29] + 0x00000020u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_wf32(ram, c->r[30] + 0x00000004u, c->f[12]);
    mem_wf32(ram, c->r[30] + 0x00000008u, c->f[13]);
    mem_wf32(ram, c->r[30] + 0x0000000cu, c->f[14]);
    mem_wf32(ram, c->r[30] + 0x00000010u, c->f[15]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000004u);
    mem_wf32(ram, c->r[2] + 0x00000000u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000008u);
    mem_wf32(ram, c->r[2] + 0x00000004u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x0000000cu);
    mem_wf32(ram, c->r[2] + 0x00000008u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000010u);
    mem_wf32(ram, c->r[2] + 0x0000000cu, c->f[0]);
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000020u);
    { c->r[29] = c->r[29] + 0x00000030u; return; }
    return; /* fell out of func_0880d140 */
}

/* func_0880da74  0x0880da74..0x0880db04  144 bytes, source=fde */
void func_0880da74(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0880da74u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, 0u);
L_0880da88:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000005u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_0880daa0; }
    { goto L_0880daf0; }
L_0880daa0:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08a80000u;
    c->r[2] = c->r[2] + 0x00003ce0u;
    c->r[6] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08a80000u;
    c->r[2] = c->r[2] + 0x00003cf4u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000330u;
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[6] = mem_r32(ram, c->r[6] + 0x00000000u);
    { c->r[31] = 0x0880dae0u; c->r[7] = mem_r32(ram, c->r[2] + 0x00000000u); func_089d96c4(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000000u, c->r[2]); goto L_0880da88; }
L_0880daf0:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_0880da74 */
}

/* func_088104fc  0x088104fc..0x08810d1c  2080 bytes, source=fde */
void func_088104fc(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x088104fcu);
    c->r[29] = c->r[29] + 0xffffff80u;
    mem_w32(ram, c->r[29] + 0x00000074u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000070u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[2] = c->r[30] + 0x00000010u;
    { c->r[31] = 0x0881051cu; c->r[4] = c->r[2] + 0u; func_08808240(c, ram); }
    c->r[2] = c->r[30] + 0x00000020u;
    { c->r[31] = 0x08810528u; c->r[4] = c->r[2] + 0u; func_08808240(c, ram); }
    c->r[2] = c->r[30] + 0x00000030u;
    { c->r[31] = 0x08810534u; c->r[4] = c->r[2] + 0u; func_08808240(c, ram); }
    c->r[4] = 0x08a70000u;
    c->r[4] = c->r[4] + 0xffffb640u;
    c->r[5] = 0u + 0x00000002u;
    { c->r[31] = 0x08810548u; c->r[6] = 0u + 0x00000006u; func_089df7a0(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    mem_w32(ram, c->r[30] + 0x00000060u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000060u);
    c->r[2] = mem_r8(ram, c->r[3] + 0x00000002u);
    c->r[2] = (c->r[2] < 0x00000005u) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_08810d08; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000060u);
    c->r[2] = mem_r8(ram, c->r[3] + 0x00000002u);
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08a40000u;
    c->r[2] = c->r[2] + 0xffffefacu;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    { u32 _t = c->r[2]; switch (_t) { case 0x08810588u: goto L_08810588; case 0x088106c0u: goto L_088106c0; case 0x088108dcu: goto L_088108dc; case 0x08810ae8u: goto L_08810ae8; case 0x08810d08u: goto L_08810d08; default: recomp_trap_unknown_indirect(c, ram, 0x08810580u, _t); return; } }
L_08810588:
    c->r[4] = 0x08a70000u;
    c->r[4] = c->r[4] + 0xffffb640u;
    c->r[5] = 0u + 0x00000200u;
    { c->r[31] = 0x0881059cu; c->r[6] = 0u + 0u; func_089e0bd8(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x00000000u);
    c->f[0] = u2f(c->r[2]);
    c->f[1] = (f32)(s32)f2u(c->f[0]);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffffef9cu);
    c->f[1] = c->f[1] * c->f[0];
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffffefa0u);
    c->f[0] = c->f[0] - c->f[1];
    mem_wf32(ram, c->r[30] + 0x00000004u, c->f[0]);
    c->r[2] = c->r[30] + 0x00000050u;
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffffefa4u);
    c->r[1] = 0x08a40000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0xffffefa8u);
    c->r[4] = c->r[2] + 0u;
    c->f[12] = u2f(0u);
    c->f[13] = u2f(0u);
    c->f[14] = c->f[0];
    { c->r[31] = 0x088105f4u; c->f[15] = c->f[1]; func_0880d140(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000050u);
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000054u);
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000058u);
    mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000005cu);
    mem_w32(ram, c->r[30] + 0x0000001cu, c->r[2]);
    c->r[2] = c->r[30] + 0x00000050u;
    c->r[4] = c->r[2] + 0u;
    c->f[12] = u2f(0u);
    c->f[13] = u2f(0u);
    c->f[14] = u2f(0u);
    { c->r[31] = 0x08810630u; c->f[15] = mem_rf32(ram, c->r[30] + 0x00000004u); func_0880d140(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000050u);
    mem_w32(ram, c->r[30] + 0x00000020u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000054u);
    mem_w32(ram, c->r[30] + 0x00000024u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000058u);
    mem_w32(ram, c->r[30] + 0x00000028u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000005cu);
    mem_w32(ram, c->r[30] + 0x0000002cu, c->r[2]);
    c->r[2] = c->r[30] + 0x00000050u;
    c->r[4] = c->r[2] + 0u;
    c->f[12] = u2f(0u);
    c->f[13] = u2f(0u);
    c->f[14] = u2f(0u);
    c->f[15] = u2f(0u);
    { c->r[31] = 0x08810670u; func_0880d140(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000050u);
    mem_w32(ram, c->r[30] + 0x00000030u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000054u);
    mem_w32(ram, c->r[30] + 0x00000034u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000058u);
    mem_w32(ram, c->r[30] + 0x00000038u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000005cu);
    mem_w32(ram, c->r[30] + 0x0000003cu, c->r[2]);
    c->r[2] = c->r[30] + 0x00000010u;
    c->r[3] = c->r[30] + 0x00000020u;
    c->r[7] = c->r[30] + 0x00000030u;
    c->r[4] = 0x08a70000u;
    c->r[4] = c->r[4] + 0xffffb640u;
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x088106b0u; c->r[6] = c->r[3] + 0u; func_089ec948(c, ram); }
    { c->r[31] = 0x088106b8u; c->r[4] = 0u + 0x00000002u; func_08924620(c, ram); }
    { goto L_08810d08; }
L_088106c0:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x00000000u);
    c->f[0] = u2f(c->r[2]);
    c->f[1] = (f32)(s32)f2u(c->f[0]);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffffef9cu);
    c->f[0] = c->f[1] * c->f[0];
    mem_wf32(ram, c->r[30] + 0x00000004u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x0000000au);
    c->r[4] = 0x08a70000u;
    c->r[4] = c->r[4] + 0xffffb640u;
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x088106fcu; c->r[6] = 0u + 0u; func_089e0bd8(c, ram); }
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
    { c->r[31] = 0x08810748u; c->r[5] = c->r[5] | 0x0102u; func_088111a0(c, ram); }
    c->r[4] = 0x08a70000u;
    c->r[4] = c->r[4] + 0xffffb640u;
    c->r[5] = 0u + 0x00000003u;
    { c->r[31] = 0x0881075cu; c->r[6] = 0u + 0x00000006u; func_089df7a0(c, ram); }
    c->r[4] = 0x7f400000u;
    c->r[4] = c->r[4] | 0x0505u;
    { c->r[31] = 0x0881076cu; c->f[12] = mem_rf32(ram, c->r[30] + 0x00000004u); func_08903b2c(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000040u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000040u);
    c->r[1] = 0x08b90000u;
    mem_w32(ram, c->r[1] + 0x00005420u, c->r[2]);
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
    { c->r[31] = 0x088107c4u; c->r[5] = mem_r32(ram, c->r[30] + 0x00000040u); func_088111e4(c, ram); }
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffffefa0u);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00003d08u;
    c->r[5] = 0u + 0u;
    c->r[6] = 0u + 0x00000002u;
    c->r[7] = 0u + 0u;
    c->r[8] = 0u + 0xffffffffu;
    c->f[12] = c->f[0];
    { c->r[31] = 0x088107f0u; c->r[9] = 0u + 0u; func_08923508(c, ram); }
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
    { c->r[31] = 0x0881083cu; c->r[5] = c->r[5] | 0x0102u; func_088111a0(c, ram); }
    c->r[4] = 0x08a70000u;
    c->r[4] = c->r[4] + 0xffffb640u;
    c->r[5] = 0u + 0x00000002u;
    { c->r[31] = 0x08810850u; c->r[6] = 0u + 0x00000006u; func_089df7a0(c, ram); }
    c->r[4] = 0xff120000u;
    c->r[4] = c->r[4] | 0x0800u;
    { c->r[31] = 0x08810860u; c->f[12] = mem_rf32(ram, c->r[30] + 0x00000004u); func_08903b2c(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000040u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000040u);
    c->r[1] = 0x08b90000u;
    mem_w32(ram, c->r[1] + 0x00005420u, c->r[2]);
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
    { c->r[31] = 0x088108b8u; c->r[5] = mem_r32(ram, c->r[30] + 0x00000040u); func_088111e4(c, ram); }
    { c->r[31] = 0x088108c0u; func_089d2008(c, ram); }
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00003d08u;
    c->r[5] = 0u + 0u;
    { c->r[31] = 0x088108d4u; c->r[6] = 0u + 0xffffffffu; func_089234b0(c, ram); }
    { goto L_08810d08; }
L_088108dc:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x0000000au);
    c->r[4] = 0x08a70000u;
    c->r[4] = c->r[4] + 0xffffb640u;
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x088108f8u; c->r[6] = 0u + 0u; func_089e0bd8(c, ram); }
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
    { c->r[31] = 0x08810944u; c->r[5] = c->r[5] | 0x0102u; func_088111a0(c, ram); }
    c->r[4] = 0x08a70000u;
    c->r[4] = c->r[4] + 0xffffb640u;
    c->r[5] = 0u + 0x00000003u;
    { c->r[31] = 0x08810958u; c->r[6] = 0u + 0x00000006u; func_089df7a0(c, ram); }
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffffefa0u);
    c->r[4] = 0x7f400000u;
    c->r[4] = c->r[4] | 0x0505u;
    { c->r[31] = 0x08810970u; c->f[12] = c->f[0]; func_08903b2c(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000040u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000040u);
    c->r[1] = 0x08b90000u;
    mem_w32(ram, c->r[1] + 0x00005420u, c->r[2]);
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
    { c->r[31] = 0x088109c8u; c->r[5] = mem_r32(ram, c->r[30] + 0x00000040u); func_088111e4(c, ram); }
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffffefa0u);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00003d08u;
    c->r[5] = 0u + 0u;
    c->r[6] = 0u + 0x00000002u;
    c->r[7] = 0u + 0u;
    c->r[8] = 0u + 0xffffffffu;
    c->f[12] = c->f[0];
    { c->r[31] = 0x088109f4u; c->r[9] = 0u + 0u; func_08923508(c, ram); }
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
    { c->r[31] = 0x08810a40u; c->r[5] = c->r[5] | 0x0102u; func_088111a0(c, ram); }
    c->r[4] = 0x08a70000u;
    c->r[4] = c->r[4] + 0xffffb640u;
    c->r[5] = 0u + 0x00000002u;
    { c->r[31] = 0x08810a54u; c->r[6] = 0u + 0x00000006u; func_089df7a0(c, ram); }
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffffefa0u);
    c->r[4] = 0xff120000u;
    c->r[4] = c->r[4] | 0x0800u;
    { c->r[31] = 0x08810a6cu; c->f[12] = c->f[0]; func_08903b2c(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000040u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000040u);
    c->r[1] = 0x08b90000u;
    mem_w32(ram, c->r[1] + 0x00005420u, c->r[2]);
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
    { c->r[31] = 0x08810ac4u; c->r[5] = mem_r32(ram, c->r[30] + 0x00000040u); func_088111e4(c, ram); }
    { c->r[31] = 0x08810accu; func_089d2008(c, ram); }
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00003d08u;
    c->r[5] = 0u + 0u;
    { c->r[31] = 0x08810ae0u; c->r[6] = 0u + 0xffffffffu; func_089234b0(c, ram); }
    { goto L_08810d08; }
L_08810ae8:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x00000000u);
    c->f[0] = u2f(c->r[2]);
    c->f[1] = (f32)(s32)f2u(c->f[0]);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffffef9cu);
    c->f[1] = c->f[1] * c->f[0];
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffffefa0u);
    c->f[0] = c->f[0] - c->f[1];
    mem_wf32(ram, c->r[30] + 0x00000004u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x0000000au);
    c->r[4] = 0x08a70000u;
    c->r[4] = c->r[4] + 0xffffb640u;
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x08810b30u; c->r[6] = 0u + 0u; func_089e0bd8(c, ram); }
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
    { c->r[31] = 0x08810b7cu; c->r[5] = c->r[5] | 0x0102u; func_088111a0(c, ram); }
    c->r[4] = 0x08a70000u;
    c->r[4] = c->r[4] + 0xffffb640u;
    c->r[5] = 0u + 0x00000003u;
    { c->r[31] = 0x08810b90u; c->r[6] = 0u + 0x00000006u; func_089df7a0(c, ram); }
    c->r[4] = 0x7f400000u;
    c->r[4] = c->r[4] | 0x0505u;
    { c->r[31] = 0x08810ba0u; c->f[12] = mem_rf32(ram, c->r[30] + 0x00000004u); func_08903b2c(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000040u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000040u);
    c->r[1] = 0x08b90000u;
    mem_w32(ram, c->r[1] + 0x00005420u, c->r[2]);
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
    { c->r[31] = 0x08810bf8u; c->r[5] = mem_r32(ram, c->r[30] + 0x00000040u); func_088111e4(c, ram); }
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffffefa0u);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00003d08u;
    c->r[5] = 0u + 0u;
    c->r[6] = 0u + 0x00000002u;
    c->r[7] = 0u + 0u;
    c->r[8] = 0u + 0xffffffffu;
    c->f[12] = c->f[0];
    { c->r[31] = 0x08810c24u; c->r[9] = 0u + 0u; func_08923508(c, ram); }
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
    { c->r[31] = 0x08810c70u; c->r[5] = c->r[5] | 0x0102u; func_088111a0(c, ram); }
    c->r[4] = 0x08a70000u;
    c->r[4] = c->r[4] + 0xffffb640u;
    c->r[5] = 0u + 0x00000002u;
    { c->r[31] = 0x08810c84u; c->r[6] = 0u + 0x00000006u; func_089df7a0(c, ram); }
    c->r[4] = 0xff120000u;
    c->r[4] = c->r[4] | 0x0800u;
    { c->r[31] = 0x08810c94u; c->f[12] = mem_rf32(ram, c->r[30] + 0x00000004u); func_08903b2c(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000040u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000040u);
    c->r[1] = 0x08b90000u;
    mem_w32(ram, c->r[1] + 0x00005420u, c->r[2]);
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
    { c->r[31] = 0x08810cecu; c->r[5] = mem_r32(ram, c->r[30] + 0x00000040u); func_088111e4(c, ram); }
    { c->r[31] = 0x08810cf4u; func_089d2008(c, ram); }
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00003d08u;
    c->r[5] = 0u + 0u;
    { c->r[31] = 0x08810d08u; c->r[6] = 0u + 0xffffffffu; func_089234b0(c, ram); }
L_08810d08:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000074u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000070u);
    { c->r[29] = c->r[29] + 0x00000080u; return; }
    return; /* fell out of func_088104fc */
}

/* func_0881302c  0x0881302c..0x08813174  328 bytes, source=fde */
void func_0881302c(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0881302cu);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = 0u + 0x00000004u;
    mem_w8(ram, c->r[3] + 0x00000004u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    mem_w8(ram, c->r[2] + 0x00000005u, 0u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = 0u + 0x00000001u;
    mem_w8(ram, c->r[3] + 0x00000006u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    mem_w8(ram, c->r[2] + 0x00000007u, 0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    mem_w32(ram, c->r[2] + 0x00000038u, 0u);
    mem_w32(ram, c->r[30] + 0x00000004u, 0u);
L_08813074:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000007u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_0881308c; }
    { goto L_08813100; }
L_0881308c:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[2] << 2;
    c->r[3] = c->r[2] + c->r[3];
    c->r[2] = 0u + 0xffffffffu;
    mem_w8(ram, c->r[3] + 0x00000008u, c->r[2]);
    mem_w32(ram, c->r[30] + 0x00000008u, 0u);
L_088130a8:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000003u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_088130c0; }
    { goto L_088130f0; }
L_088130c0:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[2] << 2;
    c->r[3] = c->r[2] + c->r[3];
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[3] = c->r[3] + c->r[2];
    c->r[2] = 0u + 0xffffffffu;
    mem_w8(ram, c->r[3] + 0x00000009u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]); goto L_088130a8; }
L_088130f0:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000004u, c->r[2]); goto L_08813074; }
L_08813100:
    mem_w32(ram, c->r[30] + 0x00000004u, 0u);
L_08813104:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000008u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_0881311c; }
    { goto L_08813144; }
L_0881311c:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[3] = c->r[2] + 0x00000020u;
    c->r[2] = 0u + 0x00000004u;
    mem_w8(ram, c->r[3] + 0x00000004u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000004u, c->r[2]); goto L_08813104; }
L_08813144:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    mem_w8(ram, c->r[2] + 0x0000002eu, 0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000030u;
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x08813160u; c->r[5] = c->r[2] + 0u; func_08813174(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_0881302c */
}

/* func_0881688c  0x0881688c..0x088168b0  36 bytes, source=sweep */
void func_0881688c(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0881688cu);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_0881688c */
}

/* func_08819ea0  0x08819ea0..0x08819ee4  68 bytes, source=sweep */
void func_08819ea0(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08819ea0u);
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
    { c->r[31] = 0x08819ed0u; c->r[5] = c->r[2] + 0u; func_088191c8(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_08819ea0 */
}

/* func_08820c6c  0x08820c6c..0x08820ca4  56 bytes, source=sweep */
void func_08820c6c(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08820c6cu);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    vfpu_exec(c, ram, 0xd8410000u); /* lv.q */
    vfpu_exec(c, ram, 0x64818100u); /* vdot.t */
    vfpu_exec(c, ram, 0xd0160000u); /* vsqrt.s */
    vfpu_exec(c, ram, 0xebc00004u); /* sv.s */
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000004u);
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_08820c6c */
}

/* func_08825edc  0x08825edc..0x08826908  2604 bytes, source=fde */
void func_08825edc(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08825edcu);
    c->r[29] = c->r[29] + 0xffffff90u;
    mem_w32(ram, c->r[29] + 0x00000068u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000064u, c->r[30]);
    mem_w32(ram, c->r[29] + 0x00000060u, c->r[16]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[6]);
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[7]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[1] = 0x08a80000u;
    mem_w32(ram, c->r[1] + 0x00003e5cu, c->r[2]);
    c->r[2] = 0x08a80000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00003e5cu);
    { int _c = (c->r[2] != 0u); if (_c) goto L_08825f2c; }
    c->r[2] = 0u + 0x00000001u;
    c->r[1] = 0x08a80000u;
    { c->r[31] = 0x08825f2cu; mem_w32(ram, c->r[1] + 0x00003e4cu, c->r[2]); func_08925510(c, ram); }
L_08825f2c:
    mem_w32(ram, c->r[30] + 0x00000010u, 0u);
    { c->r[31] = 0x08825f38u; c->r[4] = 0u + 0x00000001u; func_089c5e18(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]);
    { c->r[31] = 0x08825f44u; c->r[4] = 0u + 0x00000001u; func_089c5f10(c, ram); }
    mem_w32(ram, c->r[30] + 0x0000001cu, c->r[2]);
    c->r[2] = 0x08a80000u;
    c->r[2] = c->r[2] + 0x00003e50u;
    c->r[3] = c->r[2] + 0xffffffffu;
    c->r[2] = 0x08a80000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00003e4cu);
    c->r[2] = c->r[2] + c->r[3];
    mem_w32(ram, c->r[30] + 0x00000020u, c->r[2]);
    c->r[2] = 0x08a80000u;
    c->r[2] = c->r[2] + 0x00003e54u;
    c->r[3] = c->r[2] + 0xffffffffu;
    c->r[2] = 0x08a80000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00003e4cu);
    c->r[2] = c->r[2] + c->r[3];
    mem_w32(ram, c->r[30] + 0x00000024u, c->r[2]);
    c->r[2] = 0x08a80000u;
    c->r[2] = mem_r8(ram, c->r[2] + 0x00003e45u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_08825f9c; }
    c->r[2] = 0u + 0x00000009u;
    { mem_w8(ram, c->r[30] + 0x00000031u, c->r[2]); goto L_08825fa4; }
L_08825f9c:
    c->r[3] = 0u + 0x00000007u;
    mem_w8(ram, c->r[30] + 0x00000031u, c->r[3]);
L_08825fa4:
    c->r[2] = mem_r8(ram, c->r[30] + 0x00000031u);
    mem_w8(ram, c->r[30] + 0x00000028u, c->r[2]);
    c->r[3] = 0x08a80000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00003e4cu);
    c->r[2] = 0u + 0x00000001u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_08825fcc; }
    c->r[3] = 0u + 0x00000004u;
    { mem_w8(ram, c->r[30] + 0x00000032u, c->r[3]); goto L_08825fd4; }
L_08825fcc:
    c->r[2] = 0u + 0x00000002u;
    mem_w8(ram, c->r[30] + 0x00000032u, c->r[2]);
L_08825fd4:
    c->r[3] = mem_r8(ram, c->r[30] + 0x00000032u);
    mem_w8(ram, c->r[30] + 0x00000029u, c->r[3]);
    c->r[3] = 0x08a80000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00003e4cu);
    c->r[2] = 0u + 0x00000001u;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_08825ffc; }
    c->r[2] = mem_r8(ram, c->r[30] + 0x00000028u);
    { mem_w8(ram, c->r[30] + 0x00000033u, c->r[2]); goto L_08826004; }
L_08825ffc:
    c->r[3] = 0u + 0x00000004u;
    mem_w8(ram, c->r[30] + 0x00000033u, c->r[3]);
L_08826004:
    c->r[2] = mem_r8(ram, c->r[30] + 0x00000033u);
    mem_w8(ram, c->r[30] + 0x0000002au, c->r[2]);
    c->r[4] = 0x08a70000u;
    c->r[4] = c->r[4] + 0xffffb34cu;
    c->r[5] = 0u + 0u;
    c->r[6] = 0u + 0u;
    { c->r[31] = 0x08826024u; c->r[7] = 0u + 0u; func_089d87d4(c, ram); }
    c->r[16] = c->r[2] + 0u;
    c->r[4] = 0x08a70000u;
    { c->r[31] = 0x08826034u; c->r[4] = c->r[4] + 0xffffb34cu; func_0880d238(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = mem_r32(ram, c->r[16] + 0x00000004u);
    c->r[2] = c->r[3] & c->r[2];
    c->r[2] = c->r[2] & 0x0080u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_08826088; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000000u);
    c->r[2] = c->r[2] + 0xffffffffu;
    mem_w8(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[2] = 0u + 0x00000001u;
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0xffffc930u;
    c->r[5] = 0x04000000u;
    c->r[5] = c->r[5] | 0x0001u;
    c->r[6] = 0u + 0u;
    c->r[7] = 0u + 0u;
    { c->r[31] = 0x08826088u; c->r[8] = 0u + 0u; func_089f6924(c, ram); }
L_08826088:
    c->r[4] = 0x08a70000u;
    c->r[4] = c->r[4] + 0xffffb34cu;
    c->r[5] = 0u + 0u;
    c->r[6] = 0u + 0u;
    { c->r[31] = 0x088260a0u; c->r[7] = 0u + 0u; func_089d87d4(c, ram); }
    c->r[16] = c->r[2] + 0u;
    c->r[4] = 0x08a70000u;
    { c->r[31] = 0x088260b0u; c->r[4] = c->r[4] + 0xffffb34cu; func_0880d238(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = mem_r32(ram, c->r[16] + 0x00000004u);
    c->r[2] = c->r[3] & c->r[2];
    c->r[2] = c->r[2] & 0x0020u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_08826104; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000001u;
    mem_w8(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[2] = 0u + 0x00000001u;
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0xffffc930u;
    c->r[5] = 0x04000000u;
    c->r[5] = c->r[5] | 0x0001u;
    c->r[6] = 0u + 0u;
    c->r[7] = 0u + 0u;
    { c->r[31] = 0x08826104u; c->r[8] = 0u + 0u; func_089f6924(c, ram); }
L_08826104:
    c->r[4] = 0x08a70000u;
    c->r[4] = c->r[4] + 0xffffb34cu;
    c->r[5] = 0u + 0u;
    c->r[6] = 0u + 0u;
    { c->r[31] = 0x0882611cu; c->r[7] = 0u + 0u; func_089d87d4(c, ram); }
    c->r[16] = c->r[2] + 0u;
    c->r[4] = 0x08a70000u;
    { c->r[31] = 0x0882612cu; c->r[4] = c->r[4] + 0xffffb34cu; func_0880d238(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = mem_r32(ram, c->r[16] + 0x00000004u);
    c->r[2] = c->r[3] & c->r[2];
    c->r[2] = c->r[2] & 0x0010u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_08826180; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000024u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000024u);
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000000u);
    c->r[2] = c->r[2] + 0xffffffffu;
    mem_w8(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[2] = 0u + 0x00000001u;
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0xffffc930u;
    c->r[5] = 0x04000000u;
    c->r[5] = c->r[5] | 0x0001u;
    c->r[6] = 0u + 0u;
    c->r[7] = 0u + 0u;
    { c->r[31] = 0x08826180u; c->r[8] = 0u + 0u; func_089f6924(c, ram); }
L_08826180:
    c->r[4] = 0x08a70000u;
    c->r[4] = c->r[4] + 0xffffb34cu;
    c->r[5] = 0u + 0u;
    c->r[6] = 0u + 0u;
    { c->r[31] = 0x08826198u; c->r[7] = 0u + 0u; func_089d87d4(c, ram); }
    c->r[16] = c->r[2] + 0u;
    c->r[4] = 0x08a70000u;
    { c->r[31] = 0x088261a8u; c->r[4] = c->r[4] + 0xffffb34cu; func_0880d238(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = mem_r32(ram, c->r[16] + 0x00000004u);
    c->r[2] = c->r[3] & c->r[2];
    c->r[2] = c->r[2] & 0x0040u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_088261fc; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000024u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000024u);
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000001u;
    mem_w8(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[2] = 0u + 0x00000001u;
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0xffffc930u;
    c->r[5] = 0x04000000u;
    c->r[5] = c->r[5] | 0x0001u;
    c->r[6] = 0u + 0u;
    c->r[7] = 0u + 0u;
    { c->r[31] = 0x088261fcu; c->r[8] = 0u + 0u; func_089f6924(c, ram); }
L_088261fc:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000000u);
    { int _c = ((s32)c->r[2] >= 0); if (_c) goto L_08826224; }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[3] = mem_r8(ram, c->r[2] + 0x00000000u);
    c->r[2] = mem_r8(ram, c->r[30] + 0x00000029u);
    c->r[2] = c->r[3] + c->r[2];
    mem_w8(ram, c->r[4] + 0x00000000u, c->r[2]);
L_08826224:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000000u);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[30] + 0x00000029u);
    c->r[2] = ((s32)c->r[3] < (s32)c->r[2]) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_08826254; }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[3] = mem_r8(ram, c->r[2] + 0x00000000u);
    c->r[2] = mem_r8(ram, c->r[30] + 0x00000029u);
    c->r[2] = c->r[3] - c->r[2];
    mem_w8(ram, c->r[4] + 0x00000000u, c->r[2]);
L_08826254:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000024u);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000000u);
    { int _c = ((s32)c->r[2] >= 0); if (_c) goto L_0882627c; }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000024u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000024u);
    c->r[3] = mem_r8(ram, c->r[2] + 0x00000000u);
    c->r[2] = mem_r8(ram, c->r[30] + 0x0000002au);
    c->r[2] = c->r[3] + c->r[2];
    mem_w8(ram, c->r[4] + 0x00000000u, c->r[2]);
L_0882627c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000024u);
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000000u);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[30] + 0x0000002au);
    c->r[2] = ((s32)c->r[3] < (s32)c->r[2]) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_088262ac; }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000024u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000024u);
    c->r[3] = mem_r8(ram, c->r[2] + 0x00000000u);
    c->r[2] = mem_r8(ram, c->r[30] + 0x0000002au);
    c->r[2] = c->r[3] - c->r[2];
    mem_w8(ram, c->r[4] + 0x00000000u, c->r[2]);
L_088262ac:
    c->r[3] = 0x08a80000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00003e4cu);
    mem_w32(ram, c->r[30] + 0x00000050u, c->r[3]);
    c->r[2] = 0u + 0x00000002u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000050u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_0882673c; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000050u);
    c->r[2] = ((s32)c->r[3] < (s32)0x00000003u) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_088262f0; }
    c->r[2] = 0u + 0x00000001u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000050u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_08826308; }
    { goto L_088268f0; }
L_088262f0:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000050u);
    c->r[2] = ((s32)c->r[3] < (s32)0x00000005u) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_088268f0; }
    { goto L_08826894; }
L_08826308:
    c->r[2] = 0x08a80000u;
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00003e50u);
    c->r[2] = c->r[2] << 2;
    c->r[3] = c->r[2] + 0u;
    c->r[2] = 0x08a80000u;
    c->r[2] = mem_r8(ram, c->r[2] + 0x00003e54u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = c->r[2] << 24;
    c->r[2] = (u32)((s32)c->r[2] >> 24);
    { c->r[31] = 0x08826334u; c->r[4] = c->r[2] + 0u; func_08824d0c(c, ram); }
    mem_w8(ram, c->r[30] + 0x00000014u, c->r[2]);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[30] + 0x00000014u);
    c->r[1] = 0x08a80000u;
    c->r[1] = c->r[1] + c->r[2];
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[1] + 0x00003e60u);
    { c->r[31] = 0x08826350u; c->r[4] = c->r[2] + 0u; func_08824d44(c, ram); }
    mem_w8(ram, c->r[30] + 0x00000015u, c->r[2]);
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[3] = 0x08a80000u;
    c->r[3] = mem_r8(ram, c->r[3] + 0x00003e45u);
    c->r[4] = (u32)(s32)(s8)mem_r8(ram, c->r[30] + 0x00000015u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 3;
    c->r[2] = c->r[2] + c->r[3];
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[4];
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08a50000u;
    c->r[2] = c->r[2] + 0x0000218cu;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    mem_w32(ram, c->r[5] + 0x00000000u, c->r[2]);
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x0882639cu; c->r[4] = c->r[4] + 0x00000af4u; func_08826ca0(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = 0u + 0x00000001u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_08826420; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    { int _c = (c->r[2] != 0u); if (_c) goto L_0882640c; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    { int _c = (c->r[2] != 0u); if (_c) goto L_08826420; }
    c->r[4] = 0x08a70000u;
    c->r[4] = c->r[4] + 0xffffb34cu;
    c->r[5] = 0u + 0u;
    c->r[6] = 0u + 0u;
    { c->r[31] = 0x088263dcu; c->r[7] = 0u + 0u; func_089d87d4(c, ram); }
    c->r[16] = c->r[2] + 0u;
    c->r[4] = 0x08a70000u;
    { c->r[31] = 0x088263ecu; c->r[4] = c->r[4] + 0xffffb34cu; func_0880d238(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = mem_r32(ram, c->r[16] + 0x00000004u);
    c->r[2] = c->r[3] & c->r[2];
    c->r[2] = c->r[2] & 0x0008u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_0882640c; }
    { goto L_08826420; }
L_0882640c:
    c->r[2] = 0u + 0x00000001u;
    mem_w32(ram, c->r[30] + 0x0000001cu, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = 0u + 0xffffffffu;
    mem_w32(ram, c->r[3] + 0x00000000u, c->r[2]);
L_08826420:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_0882656c; }
    c->r[4] = (u32)(s32)(s8)mem_r8(ram, c->r[30] + 0x00000015u);
    c->r[2] = 0x38e30000u;
    c->r[2] = c->r[2] | 0x8e39u;
    alx_mult(c, c->r[4], c->r[2]);
    c->r[2] = c->hi;
    c->r[3] = (u32)((s32)c->r[2] >> 1);
    c->r[2] = (u32)((s32)c->r[4] >> 31);
    c->r[2] = c->r[3] - c->r[2];
    c->r[1] = 0x08a80000u;
    mem_w8(ram, c->r[1] + 0x00003e51u, c->r[2]);
    c->r[4] = (u32)(s32)(s8)mem_r8(ram, c->r[30] + 0x00000015u);
    c->r[2] = 0x38e30000u;
    c->r[2] = c->r[2] | 0x8e39u;
    alx_mult(c, c->r[4], c->r[2]);
    c->r[2] = c->hi;
    c->r[3] = (u32)((s32)c->r[2] >> 1);
    c->r[2] = (u32)((s32)c->r[4] >> 31);
    c->r[3] = c->r[3] - c->r[2];
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 3;
    c->r[2] = c->r[2] + c->r[3];
    c->r[2] = c->r[4] - c->r[2];
    c->r[1] = 0x08a80000u;
    mem_w8(ram, c->r[1] + 0x00003e55u, c->r[2]);
    c->r[2] = 0x08a80000u;
    c->r[2] = mem_r8(ram, c->r[2] + 0x00003e45u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_0882655c; }
    mem_w32(ram, c->r[30] + 0x0000002cu, 0u);
L_088264a0:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000002cu);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000012u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_088264b8; }
    { goto L_088264f4; }
L_088264b8:
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000002cu);
    c->r[2] = 0x08a50000u;
    c->r[2] = c->r[2] + 0x0000221cu;
    c->r[2] = c->r[3] + c->r[2];
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000000u);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[30] + 0x00000015u);
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_088264e4; }
    c->r[2] = mem_r8(ram, c->r[30] + 0x0000002cu);
    { mem_w8(ram, c->r[30] + 0x00000015u, c->r[2]); goto L_088264f4; }
L_088264e4:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000002cu);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x0000002cu, c->r[2]); goto L_088264a0; }
L_088264f4:
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[30] + 0x00000015u);
    c->r[2] = 0x92490000u;
    c->r[2] = c->r[2] | 0x2493u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[2] = c->hi;
    c->r[2] = c->r[2] + c->r[3];
    c->r[4] = (u32)((s32)c->r[2] >> 2);
    c->r[2] = (u32)((s32)c->r[3] >> 31);
    c->r[2] = c->r[4] - c->r[2];
    c->r[1] = 0x08a80000u;
    mem_w8(ram, c->r[1] + 0x00003e51u, c->r[2]);
    c->r[4] = (u32)(s32)(s8)mem_r8(ram, c->r[30] + 0x00000015u);
    c->r[2] = 0x92490000u;
    c->r[2] = c->r[2] | 0x2493u;
    alx_mult(c, c->r[4], c->r[2]);
    c->r[2] = c->hi;
    c->r[2] = c->r[2] + c->r[4];
    c->r[3] = (u32)((s32)c->r[2] >> 2);
    c->r[2] = (u32)((s32)c->r[4] >> 31);
    c->r[3] = c->r[3] - c->r[2];
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 3;
    c->r[2] = c->r[2] - c->r[3];
    c->r[2] = c->r[4] - c->r[2];
    c->r[1] = 0x08a80000u;
    mem_w8(ram, c->r[1] + 0x00003e55u, c->r[2]);
L_0882655c:
    c->r[2] = 0u + 0x00000002u;
    c->r[1] = 0x08a80000u;
    { mem_w32(ram, c->r[1] + 0x00003e4cu, c->r[2]); goto L_088268f0; }
L_0882656c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    { int _c = (c->r[2] == 0u); if (_c) goto L_0882658c; }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x08826584u; c->r[5] = 0u + 0x00000002u; func_0880d260(c, ram); }
    { goto L_088268f0; }
L_0882658c:
    c->r[4] = 0x08a70000u;
    c->r[4] = c->r[4] + 0xffffb34cu;
    c->r[5] = 0u + 0u;
    c->r[6] = 0u + 0u;
    { c->r[31] = 0x088265a4u; c->r[7] = 0u + 0u; func_089d87d4(c, ram); }
    c->r[16] = c->r[2] + 0u;
    c->r[4] = 0x08a70000u;
    { c->r[31] = 0x088265b4u; c->r[4] = c->r[4] + 0xffffb34cu; func_0880d238(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = mem_r32(ram, c->r[16] + 0x00000004u);
    c->r[2] = c->r[3] & c->r[2];
    c->r[2] = c->r[2] & 0x8000u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_08826680; }
    { c->r[31] = 0x088265d4u; func_08824e64(c, ram); }
    { int _c = (c->r[2] != 0u); if (_c) goto L_088265ec; }
    c->r[2] = 0u + 0x00000003u;
    c->r[1] = 0x08a80000u;
    { mem_w32(ram, c->r[1] + 0x00003e4cu, c->r[2]); goto L_088268f0; }
L_088265ec:
    { c->r[31] = 0x088265f4u; func_08824fa4(c, ram); }
    { int _c = (c->r[2] != 0u); if (_c) goto L_0882660c; }
    c->r[2] = 0u + 0x00000004u;
    c->r[1] = 0x08a80000u;
    { mem_w32(ram, c->r[1] + 0x00003e4cu, c->r[2]); goto L_088268f0; }
L_0882660c:
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000af4u;
    c->r[5] = 0u + 0x00000033u;
    { c->r[31] = 0x08826620u; c->r[6] = 0u + 0x00000003u; func_0881456c(c, ram); }
    c->r[2] = 0x08a80000u;
    c->r[2] = mem_r8(ram, c->r[2] + 0x00003e45u);
    c->r[3] = c->r[2] << 6;
    c->r[2] = 0x08a50000u;
    c->r[2] = c->r[2] + 0x0000213cu;
    c->r[2] = c->r[3] + c->r[2];
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0x08a80000u;
    c->r[5] = c->r[5] + 0x00003e60u;
    { c->r[31] = 0x0882664cu; c->r[6] = 0u + 0x00000010u; func_08a19db8(c, ram); }
    c->r[3] = 0x08a80000u;
    c->r[3] = mem_r8(ram, c->r[3] + 0x00003e45u);
    c->r[2] = 0x08a80000u;
    c->r[2] = mem_r8(ram, c->r[2] + 0x00003e46u);
    c->r[2] = c->r[2] | 0x0010u;
    c->r[1] = 0x08a80000u;
    c->r[1] = c->r[1] + c->r[3];
    mem_w8(ram, c->r[1] + 0x00003e70u, c->r[2]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x08826678u; c->r[5] = 0u + 0x00000002u; func_0880d260(c, ram); }
    { goto L_088268f0; }
L_08826680:
    c->r[4] = 0x08a70000u;
    c->r[4] = c->r[4] + 0xffffb34cu;
    c->r[5] = 0u + 0u;
    c->r[6] = 0u + 0u;
    { c->r[31] = 0x08826698u; c->r[7] = 0u + 0u; func_089d87d4(c, ram); }
    c->r[16] = c->r[2] + 0u;
    c->r[4] = 0x08a70000u;
    { c->r[31] = 0x088266a8u; c->r[4] = c->r[4] + 0xffffb34cu; func_0880d238(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = mem_r32(ram, c->r[16] + 0x00000004u);
    c->r[2] = c->r[3] & c->r[2];
    c->r[2] = c->r[2] & 0x0001u;
    c->r[2] = c->r[2] & 0x00ffu;
    { int _c = (c->r[2] == 0u); if (_c) goto L_08826720; }
    c->r[2] = 0x08a80000u;
    c->r[2] = mem_r8(ram, c->r[2] + 0x00003e45u);
    c->r[1] = 0x08a80000u;
    c->r[1] = c->r[1] + c->r[2];
    c->r[2] = mem_r8(ram, c->r[1] + 0x00003e70u);
    c->r[2] = c->r[2] & 0x000fu;
    mem_w8(ram, c->r[30] + 0x00000030u, c->r[2]);
    c->r[2] = 0x08a80000u;
    c->r[2] = mem_r8(ram, c->r[2] + 0x00003e45u);
    c->r[3] = c->r[2] << 2;
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[30] + 0x00000030u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[3] = c->r[2] << 4;
    c->r[2] = 0x08a50000u;
    c->r[2] = c->r[2] + 0x0000210cu;
    c->r[2] = c->r[3] + c->r[2];
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00003e60u;
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x08826718u; c->r[6] = 0u + 0x00000010u; func_08a19db8(c, ram); }
    { goto L_088268f0; }
L_08826720:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_088268f0; }
    { c->r[31] = 0x08826734u; func_08925598(c, ram); }
    { goto L_088268f0; }
L_0882673c:
    c->r[2] = 0x08a80000u;
    c->r[2] = mem_r8(ram, c->r[2] + 0x00003e45u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_0882677c; }
    c->r[3] = 0x08a80000u;
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[3] + 0x00003e51u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 3;
    c->r[2] = c->r[2] + c->r[3];
    mem_w8(ram, c->r[30] + 0x00000040u, c->r[2]);
    c->r[2] = 0x08a80000u;
    c->r[2] = mem_r8(ram, c->r[2] + 0x00003e55u);
    c->r[3] = mem_r8(ram, c->r[30] + 0x00000040u);
    c->r[2] = c->r[3] + c->r[2];
    { mem_w8(ram, c->r[30] + 0x00000040u, c->r[2]); goto L_088267b0; }
L_0882677c:
    c->r[3] = 0x08a80000u;
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[3] + 0x00003e51u);
    c->r[4] = 0x08a80000u;
    c->r[4] = (u32)(s32)(s8)mem_r8(ram, c->r[4] + 0x00003e55u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 3;
    c->r[2] = c->r[2] - c->r[3];
    c->r[3] = c->r[2] + c->r[4];
    c->r[2] = 0x08a50000u;
    c->r[2] = c->r[2] + 0x0000221cu;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000000u);
    mem_w8(ram, c->r[30] + 0x00000040u, c->r[2]);
L_088267b0:
    c->r[2] = mem_r8(ram, c->r[30] + 0x00000040u);
    mem_w8(ram, c->r[30] + 0x00000030u, c->r[2]);
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[3] = 0x08a80000u;
    c->r[3] = mem_r8(ram, c->r[3] + 0x00003e45u);
    c->r[4] = (u32)(s32)(s8)mem_r8(ram, c->r[30] + 0x00000030u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 3;
    c->r[2] = c->r[2] + c->r[3];
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[4];
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08a50000u;
    c->r[2] = c->r[2] + 0x0000218cu;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    mem_w32(ram, c->r[5] + 0x00000000u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[2] = c->r[2] + 0x0000001bu;
    mem_w32(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_08826878; }
    c->r[2] = 0x08a80000u;
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00003e50u);
    c->r[2] = c->r[2] << 2;
    c->r[3] = c->r[2] + 0u;
    c->r[2] = 0x08a80000u;
    c->r[2] = mem_r8(ram, c->r[2] + 0x00003e54u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = c->r[2] << 24;
    c->r[2] = (u32)((s32)c->r[2] >> 24);
    { c->r[31] = 0x08826840u; c->r[4] = c->r[2] + 0u; func_08824d0c(c, ram); }
    mem_w8(ram, c->r[30] + 0x00000014u, c->r[2]);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[30] + 0x00000030u);
    { c->r[31] = 0x08826850u; c->r[4] = c->r[2] + 0u; func_08824dd4(c, ram); }
    mem_w8(ram, c->r[30] + 0x00000016u, c->r[2]);
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[30] + 0x00000014u);
    c->r[2] = mem_r8(ram, c->r[30] + 0x00000016u);
    c->r[1] = 0x08a80000u;
    c->r[1] = c->r[1] + c->r[3];
    mem_w8(ram, c->r[1] + 0x00003e60u, c->r[2]);
    c->r[2] = 0u + 0x00000001u;
    c->r[1] = 0x08a80000u;
    { mem_w32(ram, c->r[1] + 0x00003e4cu, c->r[2]); goto L_088268f0; }
L_08826878:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    { int _c = (c->r[2] == 0u); if (_c) goto L_088268f0; }
    c->r[2] = 0u + 0x00000001u;
    c->r[1] = 0x08a80000u;
    { mem_w32(ram, c->r[1] + 0x00003e4cu, c->r[2]); goto L_088268f0; }
L_08826894:
    c->r[3] = 0x08a80000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00003e4cu);
    c->r[2] = 0u + 0x00000003u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_088268b8; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = 0u + 0x00001583u;
    { mem_w32(ram, c->r[3] + 0x00000000u, c->r[2]); goto L_088268c4; }
L_088268b8:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = 0u + 0x000014b8u;
    mem_w32(ram, c->r[3] + 0x00000000u, c->r[2]);
L_088268c4:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_088268d8; }
    { goto L_0882660c; }
L_088268d8:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    { int _c = (c->r[2] == 0u); if (_c) goto L_088268f0; }
    c->r[2] = 0u + 0x00000001u;
    c->r[1] = 0x08a80000u;
    mem_w32(ram, c->r[1] + 0x00003e4cu, c->r[2]);
L_088268f0:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000068u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000064u);
    c->r[16] = mem_r32(ram, c->r[29] + 0x00000060u);
    { c->r[29] = c->r[29] + 0x00000070u; return; }
    return; /* fell out of func_08825edc */
}

/* func_08826fb0  0x08826fb0..0x08826fd8  40 bytes, source=sweep */
void func_08826fb0(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08826fb0u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000151u);
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_08826fb0 */
}

/* func_0882b690  0x0882b690..0x0882b6d4  68 bytes, source=sweep */
void func_0882b690(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0882b690u);
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
    return; /* fell out of func_0882b690 */
}

/* func_0882f778  0x0882f778..0x0882f9f0  632 bytes, source=fde */
void func_0882f778(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0882f778u);
    c->r[29] = c->r[29] + 0xffffffb0u;
    mem_w32(ram, c->r[29] + 0x00000044u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000040u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[5]);
    mem_w32(ram, c->r[30] + 0x0000001cu, 0u);
L_0882f794:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000004u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_0882f7ac; }
    { goto L_0882f820; }
L_0882f7ac:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[3];
    c->r[2] = c->r[2] + 0x00000060u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    mem_w32(ram, c->r[30] + 0x00000020u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_0882f810; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[4] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000000u);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[3] + 0x00000029u);
    { int _c = (c->r[4] != c->r[2]); if (_c) goto L_0882f810; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[4] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000001u);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[3] + 0x0000002au);
    { int _c = (c->r[4] != c->r[2]); if (_c) goto L_0882f810; }
    { goto L_0882f820; }
L_0882f810:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x0000001cu, c->r[2]); goto L_0882f794; }
L_0882f820:
    mem_w32(ram, c->r[30] + 0x00000028u, 0u);
    mem_w32(ram, c->r[30] + 0x00000018u, 0u);
L_0882f828:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000004u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_0882f840; }
    { goto L_0882f9dc; }
L_0882f840:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = c->r[2] + 0x00000003u;
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000000u);
    mem_w32(ram, c->r[30] + 0x00000030u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = c->r[2] + 0x00000004u;
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000000u);
    mem_w32(ram, c->r[30] + 0x00000034u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000030u);
    c->r[2] = 0u + 0xffffffffu;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_0882f9dc; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000034u);
    c->r[2] = 0u + 0xffffffffu;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_0882f9dc; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = c->r[2] << 3;
    mem_w32(ram, c->r[30] + 0x00000038u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = 0u + 0x00000001u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_0882f8cc; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000038u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000014u);
    c->r[2] = ((s32)c->r[2] < (s32)c->r[3]) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_0882f8cc; }
    { goto L_0882f9dc; }
L_0882f8cc:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x00000014u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000038u);
    c->r[2] = c->r[3] - c->r[2];
    mem_w32(ram, c->r[30] + 0x0000002cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000002cu);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000008u) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_0882f90c; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = 0u + 0x00000001u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_0882f90c; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000028u);
    c->r[2] = c->r[2] | 0x0001u;
    mem_w32(ram, c->r[30] + 0x00000028u, c->r[2]);
L_0882f90c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000028u);
    c->r[2] = c->r[2] | 0x0002u;
    mem_w32(ram, c->r[30] + 0x00000028u, c->r[2]);
    c->r[2] = 0xff000000u;
    mem_w32(ram, c->r[30] + 0x00000024u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000024u);
    { c->r[31] = 0x0882f930u; c->f[12] = mem_rf32(ram, c->r[2] + 0x00000020u); func_08903b2c(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000024u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[3] = c->r[2] + 0x00000008u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000002cu);
    mem_w32(ram, c->r[29] + 0x00000000u, c->r[2]);
    c->r[4] = c->r[3] + 0u;
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000030u);
    c->r[6] = mem_r32(ram, c->r[30] + 0x00000034u);
    c->r[7] = mem_r32(ram, c->r[30] + 0x00000024u);
    c->r[8] = mem_r32(ram, c->r[30] + 0x00000028u);
    c->r[9] = 0u + 0u;
    c->r[10] = 0u + 0u;
    { c->r[31] = 0x0882f968u; c->r[11] = 0u + 0x00000008u; func_08938f94(c, ram); }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000028u);
    c->r[2] = 0u + 0xfffffffdu;
    c->r[2] = c->r[3] & c->r[2];
    mem_w32(ram, c->r[30] + 0x00000028u, c->r[2]);
    c->r[2] = 0xff0e0000u;
    c->r[2] = c->r[2] | 0x4a7bu;
    mem_w32(ram, c->r[30] + 0x00000024u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000024u);
    { c->r[31] = 0x0882f994u; c->f[12] = mem_rf32(ram, c->r[2] + 0x00000020u); func_08903b2c(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000024u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[3] = c->r[2] + 0x00000008u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000002cu);
    mem_w32(ram, c->r[29] + 0x00000000u, c->r[2]);
    c->r[4] = c->r[3] + 0u;
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000030u);
    c->r[6] = mem_r32(ram, c->r[30] + 0x00000034u);
    c->r[7] = mem_r32(ram, c->r[30] + 0x00000024u);
    c->r[8] = mem_r32(ram, c->r[30] + 0x00000028u);
    c->r[9] = 0u + 0u;
    c->r[10] = 0u + 0u;
    { c->r[31] = 0x0882f9ccu; c->r[11] = 0u + 0x00000008u; func_08938f94(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]); goto L_0882f828; }
L_0882f9dc:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000044u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000040u);
    { c->r[29] = c->r[29] + 0x00000050u; return; }
    return; /* fell out of func_0882f778 */
}

/* func_08832580  0x08832580..0x08832614  148 bytes, source=fde */
void func_08832580(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08832580u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = 0u + 0x00000001u;
    c->r[6] = 0u + 0x00000008u;
    { c->r[31] = 0x088325a8u; c->r[7] = 0u + 0x0000001eu; func_08831ef4(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[2]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = 0u + 0u;
    c->r[6] = 0u + 0x00000008u;
    c->r[7] = 0u + 0x00000001u;
    c->r[8] = 0u + 0xffffffffu;
    { c->r[31] = 0x088325c8u; c->r[9] = 0u + 0x0000003cu; func_08831aac(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_088325e0; }
    { mem_w32(ram, c->r[30] + 0x0000000cu, 0u); goto L_088325fc; }
L_088325e0:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_088325f4; }
    { mem_w32(ram, c->r[30] + 0x0000000cu, 0u); goto L_088325fc; }
L_088325f4:
    c->r[2] = 0u + 0x00000001u;
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
L_088325fc:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_08832580 */
}

/* func_088343ec  0x088343ec..0x088344fc  272 bytes, source=fde */
void func_088343ec(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x088343ecu);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000af4u;
    { c->r[31] = 0x08834410u; c->r[5] = 0u + 0x00000002u; func_088145a8(c, ram); }
    mem_w8(ram, c->r[30] + 0x00000004u, c->r[2]);
    c->r[2] = mem_r8(ram, c->r[30] + 0x00000004u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_08834434; }
    c->r[4] = 0x08a40000u;
    c->r[4] = c->r[4] + 0x0000197cu;
    c->r[5] = 0u + 0x00001404u;
    { c->r[31] = 0x08834434u; c->r[6] = 0u + 0x00000001u; func_08928cb8(c, ram); }
L_08834434:
    c->r[3] = mem_r8(ram, c->r[30] + 0x00000004u);
    c->r[2] = 0u + 0x00000001u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_08834458; }
    c->r[4] = 0x08a40000u;
    c->r[4] = c->r[4] + 0x0000197cu;
    c->r[5] = 0u + 0x00001407u;
    { c->r[31] = 0x08834458u; c->r[6] = 0u + 0x00000001u; func_08928cb8(c, ram); }
L_08834458:
    c->r[3] = mem_r8(ram, c->r[30] + 0x00000004u);
    c->r[2] = 0u + 0x00000002u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_0883447c; }
    c->r[4] = 0x08a40000u;
    c->r[4] = c->r[4] + 0x0000197cu;
    c->r[5] = 0u + 0x00001408u;
    { c->r[31] = 0x0883447cu; c->r[6] = 0u + 0x00000001u; func_08928cb8(c, ram); }
L_0883447c:
    c->r[3] = mem_r8(ram, c->r[30] + 0x00000004u);
    c->r[2] = 0u + 0x00000003u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_088344a0; }
    c->r[4] = 0x08a40000u;
    c->r[4] = c->r[4] + 0x0000197cu;
    c->r[5] = 0u + 0x000013feu;
    { c->r[31] = 0x088344a0u; c->r[6] = 0u + 0x00000001u; func_08928cb8(c, ram); }
L_088344a0:
    c->r[3] = mem_r8(ram, c->r[30] + 0x00000004u);
    c->r[2] = 0u + 0x00000004u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_088344c4; }
    c->r[4] = 0x08a40000u;
    c->r[4] = c->r[4] + 0x0000197cu;
    c->r[5] = 0u + 0x000013ffu;
    { c->r[31] = 0x088344c4u; c->r[6] = 0u + 0x00000001u; func_08928cb8(c, ram); }
L_088344c4:
    c->r[3] = mem_r8(ram, c->r[30] + 0x00000004u);
    c->r[2] = 0u + 0x00000005u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_088344e8; }
    c->r[4] = 0x08a40000u;
    c->r[4] = c->r[4] + 0x0000197cu;
    c->r[5] = 0u + 0x0000140bu;
    { c->r[31] = 0x088344e8u; c->r[6] = 0u + 0x00000001u; func_08928cb8(c, ram); }
L_088344e8:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_088343ec */
}

/* func_08837364  0x08837364..0x088373f4  144 bytes, source=fde */
void func_08837364(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08837364u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000034u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000ac8u;
    { c->r[31] = 0x08837394u; c->r[5] = c->r[2] + 0u; func_089cb820(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_088373c0; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x0000002du);
    c->r[2] = c->r[2] + 0x00000020u;
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x088373c0u; c->r[6] = 0u + 0u; func_0893009c(c, ram); }
L_088373c0:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x0000002bu);
    c->r[2] = c->r[2] + 0x000016abu;
    c->r[4] = 0x08a40000u;
    c->r[4] = c->r[4] + 0x00001b4cu;
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x088373e0u; c->r[6] = 0u + 0u; func_08928cb8(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_08837364 */
}

/* func_0883b17c  0x0883b17c..0x0883b4e4  872 bytes, source=fde */
void func_0883b17c(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0883b17cu);
    c->r[29] = c->r[29] + 0xfffffec0u;
    mem_w32(ram, c->r[29] + 0x00000134u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000130u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_0883b1bc; }
    c->r[4] = 0x08a40000u;
    c->r[4] = c->r[4] + 0x00001cd0u;
    c->r[5] = 0u + 0x0000158du;
    { c->r[31] = 0x0883b1b4u; c->r[6] = 0u + 0x00000001u; func_08928cb8(c, ram); }
    { goto L_0883b4d0; }
L_0883b1bc:
    c->r[3] = 0x08a80000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00004874u);
    c->r[2] = 0u + 0x00000001u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_0883b268; }
    { c->r[31] = 0x0883b1d8u; func_08902e18(c, ram); }
    { int _c = (c->r[2] == 0u); if (_c) goto L_0883b24c; }
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x0883b1ecu; c->r[4] = c->r[4] + 0x00000330u; func_089d9cec(c, ram); }
    c->r[2] = c->r[2] + 0x00001000u;
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0u + 0u;
    { c->r[31] = 0x0883b200u; c->r[6] = 0u + 0x000019e8u; func_08a19ec4(c, ram); }
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x0883b20cu; c->r[4] = c->r[4] + 0x00000330u; func_089d9cec(c, ram); }
    c->r[2] = c->r[2] + 0x00001000u;
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000330u;
    c->r[5] = 0u + 0x000019e8u;
    { c->r[31] = 0x0883b224u; c->r[6] = c->r[2] + 0u; func_089d9768(c, ram); }
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000330u;
    c->r[5] = 0u + 0x00000001u;
    c->r[6] = 0x08a80000u;
    c->r[6] = c->r[6] + 0x00002e74u;
    c->r[7] = 0x08a40000u;
    { c->r[31] = 0x0883b244u; c->r[7] = c->r[7] + 0x00001cdcu; func_089d8ae4(c, ram); }
    { goto L_0883b260; }
L_0883b24c:
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00004874u;
    c->r[5] = 0x08840000u;
    { c->r[31] = 0x0883b260u; c->r[5] = c->r[5] + 0xffffbbb4u; func_0880f03c(c, ram); }
L_0883b260:
    { c->r[31] = 0x0883b268u; func_0883b0c0(c, ram); }
L_0883b268:
    c->r[2] = 0x08a80000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00004874u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000002u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_0883b4d0; }
    mem_w32(ram, c->r[30] + 0x00000008u, 0u);
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x0883b28cu; c->r[4] = c->r[4] + 0x00000330u; func_089d98dc(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000120u, c->r[2]);
    c->r[2] = 0x80110000u;
    c->r[2] = c->r[2] | 0x0327u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000120u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_0883b308; }
    c->r[2] = 0x80110000u;
    c->r[2] = c->r[2] | 0x0327u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000120u);
    c->r[2] = ((s32)c->r[2] < (s32)c->r[3]) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_0883b2d8; }
    c->r[2] = 0x80110000u;
    c->r[2] = c->r[2] | 0x0326u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000120u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_0883b314; }
    { goto L_0883b320; }
L_0883b2d8:
    c->r[2] = 0u + 0xffffffffu;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000120u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_0883b33c; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000120u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_0883b2fc; }
    { goto L_0883b320; }
L_0883b2fc:
    c->r[2] = 0u + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]); goto L_0883b33c; }
L_0883b308:
    c->r[2] = 0u + 0x00000002u;
    { mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]); goto L_0883b33c; }
L_0883b314:
    c->r[2] = 0u + 0x00000003u;
    { mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]); goto L_0883b33c; }
L_0883b320:
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00004874u;
    c->r[5] = 0x08900000u;
    c->r[5] = c->r[5] + 0x00001a10u;
    c->r[6] = 0x08840000u;
    { c->r[31] = 0x0883b33cu; c->r[6] = c->r[6] + 0xffffbd04u; func_0880f1d4(c, ram); }
L_0883b33c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_0883b4d0; }
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x0883b354u; c->r[4] = c->r[4] + 0x00000330u; func_089d9cec(c, ram); }
    c->r[2] = c->r[2] + 0x00001004u;
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
    c->r[2] = 0x08a80000u;
    c->r[2] = c->r[2] + 0x00000df8u;
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000010u);
    { c->r[31] = 0x0883b378u; c->r[6] = 0u + 0x00000010u; func_08a19d34(c, ram); }
    { int _c = (c->r[2] != 0u); if (_c) goto L_0883b448; }
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x0883b38cu; c->r[4] = c->r[4] + 0x00000330u; func_089d98dc(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = 0x80110000u;
    c->r[2] = c->r[2] | 0x0326u;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_0883b448; }
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x0883b3acu; c->r[4] = c->r[4] + 0x00000330u; func_089d9c58(c, ram); }
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00002e74u;
    { c->r[31] = 0x0883b3bcu; c->r[5] = c->r[2] + 0u; func_08a1af70(c, ram); }
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x0883b3c8u; c->r[4] = c->r[4] + 0x00000330u; func_089d9cc4(c, ram); }
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x000048e0u;
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x0883b3dcu; c->r[6] = 0u + 0x00000400u; func_08a19db8(c, ram); }
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00004874u;
    c->r[5] = 0x08840000u;
    { c->r[31] = 0x0883b3f0u; c->r[5] = c->r[5] + 0xffffb4e4u; func_0880f03c(c, ram); }
    c->r[3] = 0x08a80000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00004894u);
    c->r[2] = 0u + 0x00000001u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_0883b418; }
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00004874u;
    c->r[5] = 0x08840000u;
    { c->r[31] = 0x0883b418u; c->r[5] = c->r[5] + 0xffffb668u; func_0880f03c(c, ram); }
L_0883b418:
    c->r[3] = 0x08a80000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00004894u);
    c->r[2] = 0u + 0x00000002u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_0883b4d0; }
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00004874u;
    c->r[5] = 0x08840000u;
    { c->r[31] = 0x0883b440u; c->r[5] = c->r[5] + 0xffffb5ccu; func_0880f03c(c, ram); }
    { goto L_0883b4d0; }
L_0883b448:
    c->r[2] = 0x08a80000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00004878u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000005u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_0883b478; }
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00004874u;
    c->r[5] = 0x08840000u;
    { c->r[31] = 0x0883b470u; c->r[5] = c->r[5] + 0xffffbc5cu; func_0880f03c(c, ram); }
    { goto L_0883b4d0; }
L_0883b478:
    c->r[4] = c->r[30] + 0x00000020u;
    c->r[3] = 0x08a80000u;
    c->r[3] = c->r[3] + 0x00004878u;
    c->r[2] = mem_r32(ram, c->r[3] + 0x00000000u);
    c->r[6] = c->r[2] + 0u;
    c->r[2] = c->r[2] + 0x00000001u;
    mem_w32(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[5] = 0x08a40000u;
    { c->r[31] = 0x0883b4a0u; c->r[5] = c->r[5] + 0x00001ce8u; func_08a1ad34(c, ram); }
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000330u;
    { c->r[31] = 0x0883b4b0u; c->r[5] = 0u + 0x00000001u; func_089d987c(c, ram); }
    c->r[2] = c->r[30] + 0x00000020u;
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000330u;
    c->r[5] = 0u + 0x00000001u;
    c->r[6] = c->r[2] + 0u;
    c->r[7] = 0x08a40000u;
    { c->r[31] = 0x0883b4d0u; c->r[7] = c->r[7] + 0x00001cdcu; func_089d8ae4(c, ram); }
L_0883b4d0:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000134u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000130u);
    { c->r[29] = c->r[29] + 0x00000140u; return; }
    return; /* fell out of func_0883b17c */
}

/* func_08842cb8  0x08842cb8..0x088446ec  6708 bytes, source=fde */
void func_08842cb8(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08842cb8u);
    c->r[29] = c->r[29] + 0xffffff70u;
    mem_w32(ram, c->r[29] + 0x0000008cu, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000088u, c->r[30]);
    mem_w32(ram, c->r[29] + 0x00000084u, c->r[17]);
    mem_w32(ram, c->r[29] + 0x00000080u, c->r[16]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    { c->r[31] = 0x08842ce0u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000004u); func_088455a8(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000006u);
    c->r[2] = c->r[2] + 0x00000001u;
    mem_w32(ram, c->r[30] + 0x00000070u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000070u);
    c->r[2] = c->r[3] & 0x00ffu;
    c->r[2] = (c->r[2] < 0x00000008u) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_08844604; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000070u);
    c->r[2] = c->r[3] & 0x00ffu;
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08a40000u;
    c->r[2] = c->r[2] + 0x00001f38u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    { u32 _t = c->r[2]; switch (_t) { case 0x08842d28u: goto L_08842d28; case 0x08842d90u: goto L_08842d90; case 0x08844004u: goto L_08844004; case 0x088442f4u: goto L_088442f4; case 0x08844604u: goto L_08844604; default: recomp_trap_unknown_indirect(c, ram, 0x08842d20u, _t); return; } }
L_08842d28:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x0000000eu);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000af4u;
    { c->r[31] = 0x08842d40u; c->r[5] = c->r[2] + 0u; func_0880d438(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x0000000fu);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000af4u;
    { c->r[31] = 0x08842d58u; c->r[5] = c->r[2] + 0u; func_0880d4c8(c, ram); }
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00001f2cu);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00003c30u;
    c->r[5] = 0u + 0x00000001u;
    { c->r[31] = 0x08842d74u; c->f[12] = c->f[0]; func_089b3514(c, ram); }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = 0u + 0x00000003u;
    mem_w8(ram, c->r[3] + 0x00000018u, c->r[2]);
    { c->r[31] = 0x08842d88u; c->r[4] = 0u + 0x0000000au; func_0880b1a0(c, ram); }
    { goto L_088446d0; }
L_08842d90:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000007u);
    c->r[2] = c->r[2] + 0x00000001u;
    mem_w8(ram, c->r[3] + 0x00000006u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000006u);
    mem_w16(ram, c->r[3] + 0x000000b0u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    mem_w8(ram, c->r[2] + 0x0000000bu, 0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000007u);
    mem_w32(ram, c->r[30] + 0x0000006cu, c->r[2]);
    c->r[2] = 0u + 0x00000001u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000006cu);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_088435e8; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000006cu);
    c->r[2] = ((s32)c->r[3] < (s32)0x00000002u) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_08842dfc; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000006cu);
    { int _c = (c->r[2] == 0u); if (_c) goto L_08842e14; }
    { goto L_088446d0; }
L_08842dfc:
    c->r[2] = 0u + 0x00000002u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000006cu);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_08843b6c; }
    { goto L_088446d0; }
L_08842e14:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = c->r[2] + 0x00000020u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000008u);
    c->r[2] = c->r[2] + 0x00000003u;
    c->r[2] = c->r[2] << 24;
    c->r[2] = (u32)((s32)c->r[2] >> 24);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = c->r[3] + 0u;
    { c->r[31] = 0x08842e40u; c->r[6] = c->r[2] + 0u; func_0881ced0(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000008u);
    c->r[2] = 0u + 0x00000002u;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_088432d8; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[2] + 0x00000020u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000ac8u;
    { c->r[31] = 0x08842e70u; c->r[5] = c->r[2] + 0u; func_089cb820(c, ram); }
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x08842e7cu; c->r[5] = 0x02000000u; func_0892ff54(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[2] + 0x00000020u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000ac8u;
    { c->r[31] = 0x08842e98u; c->r[5] = c->r[2] + 0u; func_089cb820(c, ram); }
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x08842ea4u; c->r[5] = 0x01000000u; func_0892ff54(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000008u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_08842ed8; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x0000000cu);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000af4u;
    c->r[5] = 0u + 0x0000000bu;
    { c->r[31] = 0x08842ed0u; c->r[6] = c->r[2] + 0u; func_0881456c(c, ram); }
    { goto L_08842f1c; }
L_08842ed8:
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x08842ee4u; c->r[4] = c->r[4] + 0x00000af4u; func_0880d410(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = 0u + 0x00000188u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[3] = c->lo;
    c->r[2] = 0x08a80000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00003e34u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000170u);
    c->r[2] = c->r[2] + 0xffffffffu;
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000af4u;
    c->r[5] = 0u + 0x0000000bu;
    { c->r[31] = 0x08842f1cu; c->r[6] = c->r[2] + 0u; func_0881456c(c, ram); }
L_08842f1c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r8(ram, c->r[2] + 0x0000000cu);
    c->r[1] = 0x08a80000u;
    mem_w8(ram, c->r[1] + 0x00003e2cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x0000000cu);
    c->r[4] = 0x08a80000u;
    c->r[4] = mem_r32(ram, c->r[4] + 0x00003e34u);
    { c->r[31] = 0x08842f44u; c->r[5] = c->r[2] + 0u; func_088204e8(c, ram); }
    c->r[2] = c->r[2] << 24;
    c->r[2] = (u32)((s32)c->r[2] >> 24);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000af4u;
    { c->r[31] = 0x08842f5cu; c->r[5] = c->r[2] + 0u; func_0880d438(c, ram); }
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000af4u;
    { c->r[31] = 0x08842f6cu; c->r[5] = 0u + 0u; func_0880d46c(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000008u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_088430b0; }
    c->r[2] = 0x08a80000u;
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00004e78u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_08842fbc; }
    c->r[16] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[4] = 0x08a80000u;
    c->r[4] = mem_r32(ram, c->r[4] + 0x00003e34u);
    c->r[5] = 0u + 0x00000001u;
    c->r[6] = 0u + 0x00000002u;
    c->r[7] = 0u + 0x0000000bu;
    { c->r[31] = 0x08842facu; c->r[8] = 0u + 0x00000001u; func_08845eac(c, ram); }
    mem_w8(ram, c->r[16] + 0x0000000cu, c->r[2]);
    c->r[2] = mem_r8(ram, c->r[16] + 0x0000000cu);
    c->r[1] = 0x08a80000u;
    mem_w8(ram, c->r[1] + 0x00003e2cu, c->r[2]);
L_08842fbc:
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x08842fc8u; c->r[4] = c->r[4] + 0x00000af4u; func_0880d410(c, ram); }
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000af4u;
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x08842fdcu; c->r[6] = 0u + 0x00000c00u; func_08820e5c(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000040u, c->r[2]);
    c->r[2] = 0u + 0x00000400u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000040u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_08843034; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000040u);
    c->r[2] = (c->r[3] < 0x00000401u) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_08843014; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000040u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_0884302c; }
    { goto L_08843048; }
L_08843014:
    c->r[2] = 0u + 0x00000800u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000040u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_08843040; }
    { goto L_08843048; }
L_0884302c:
    { mem_w8(ram, c->r[30] + 0x0000000cu, 0u); goto L_08843048; }
L_08843034:
    c->r[2] = 0u + 0x00000001u;
    { mem_w8(ram, c->r[30] + 0x0000000cu, c->r[2]); goto L_08843048; }
L_08843040:
    c->r[2] = 0u + 0x00000002u;
    mem_w8(ram, c->r[30] + 0x0000000cu, c->r[2]);
L_08843048:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[2] + 0x0000002cu;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000ac8u;
    { c->r[31] = 0x08843064u; c->r[5] = c->r[2] + 0u; func_089cb820(c, ram); }
    c->r[16] = c->r[2] + 0u;
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x08843074u; c->r[4] = c->r[4] + 0x00000af4u; func_0880d410(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = 0u + 0x00000188u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[3] = c->lo;
    c->r[2] = 0x08a80000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00003e34u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[30] + 0x0000000cu);
    c->r[4] = c->r[16] + 0u;
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x088430a4u; c->r[6] = c->r[3] + 0u; func_0881fa6c(c, ram); }
    c->r[1] = 0x08a80000u;
    { mem_w8(ram, c->r[1] + 0x00004e78u, 0u); goto L_08843134; }
L_088430b0:
    c->r[3] = 0x08a80000u;
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[3] + 0x00004e78u);
    c->r[2] = 0u + 0x00000001u;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_08843128; }
    c->r[4] = 0x08a80000u;
    c->r[4] = mem_r32(ram, c->r[4] + 0x00003e34u);
    { c->r[31] = 0x088430d4u; c->r[5] = 0u + 0u; func_08845d80(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000af4u;
    c->r[5] = 0u + 0x0000000bu;
    { c->r[31] = 0x088430ecu; c->r[6] = mem_r32(ram, c->r[30] + 0x00000008u); func_0881456c(c, ram); }
    c->r[16] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[4] = 0x08a80000u;
    c->r[4] = mem_r32(ram, c->r[4] + 0x00003e34u);
    { c->r[31] = 0x08843100u; c->r[5] = mem_r32(ram, c->r[30] + 0x00000008u); func_088204e8(c, ram); }
    mem_w8(ram, c->r[16] + 0x0000000cu, c->r[2]);
    c->r[2] = mem_r8(ram, c->r[16] + 0x0000000cu);
    c->r[1] = 0x08a80000u;
    mem_w8(ram, c->r[1] + 0x00003e2cu, c->r[2]);
    c->r[2] = 0x08a80000u;
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00003e2cu);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000af4u;
    { c->r[31] = 0x08843128u; c->r[5] = c->r[2] + 0u; func_0880d438(c, ram); }
L_08843128:
    c->r[2] = 0u + 0x00000001u;
    c->r[1] = 0x08a80000u;
    mem_w8(ram, c->r[1] + 0x00004e78u, c->r[2]);
L_08843134:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[2] + 0x00000028u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000ac8u;
    { c->r[31] = 0x08843150u; c->r[5] = c->r[2] + 0u; func_089cb820(c, ram); }
    c->r[17] = c->r[2] + 0u;
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x08843160u; c->r[4] = c->r[4] + 0x00000af4u; func_0880d410(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = 0u + 0x00000188u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[3] = c->lo;
    c->r[2] = 0x08a80000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00003e34u);
    c->r[16] = c->r[3] + c->r[2];
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x08843188u; c->r[4] = c->r[4] + 0x00000af4u; func_0880d410(c, ram); }
    c->r[4] = c->r[17] + 0u;
    c->r[5] = c->r[16] + 0u;
    c->r[6] = 0x08a80000u;
    c->r[6] = mem_r32(ram, c->r[6] + 0x00003e30u);
    { c->r[31] = 0x088431a0u; c->r[7] = c->r[2] + 0u; func_0884585c(c, ram); }
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x088431acu; c->r[4] = c->r[4] + 0x00000af4u; func_0880d410(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = 0u + 0x00000188u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[3] = c->lo;
    c->r[2] = 0x08a80000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00003e34u);
    c->r[3] = c->r[3] + c->r[2];
    mem_w32(ram, c->r[30] + 0x00000044u, c->r[3]);
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x088431d8u; c->r[4] = c->r[4] + 0x00000af4u; func_0880d410(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000048u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[2] + 0x00000020u;
    mem_w32(ram, c->r[30] + 0x0000004cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000008u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_08843204; }
    c->r[2] = 0u + 0x00000009u;
    { mem_w32(ram, c->r[30] + 0x00000050u, c->r[2]); goto L_0884320c; }
L_08843204:
    c->r[3] = 0u + 0x00000019u;
    mem_w32(ram, c->r[30] + 0x00000050u, c->r[3]);
L_0884320c:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000044u);
    c->r[5] = mem_r32(ram, c->r[30] + 0x0000004cu);
    c->r[6] = mem_r32(ram, c->r[30] + 0x00000048u);
    { c->r[31] = 0x08843220u; c->r[7] = mem_r32(ram, c->r[30] + 0x00000050u); func_0881ef98(c, ram); }
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x0884322cu; c->r[4] = c->r[4] + 0x00000af4u; func_0880d410(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = 0u + 0x00000188u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[3] = c->lo;
    c->r[2] = 0x08a80000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00003e34u);
    c->r[3] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[2] + 0x00000030u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[4] = mem_r32(ram, c->r[3] + 0x00000174u);
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x08843264u; c->r[6] = 0u + 0u; func_088446ec(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000008u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_088446d0; }
    mem_w32(ram, c->r[30] + 0x00000010u, 0u);
L_08843278:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000029u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_08843290; }
    { goto L_088446d0; }
L_08843290:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[2] + 0x00000020u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000ac8u;
    { c->r[31] = 0x088432acu; c->r[5] = c->r[2] + 0u; func_089cb820(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = c->r[2] + 0x00000001u;
    c->r[4] = c->r[3] + 0u;
    c->r[5] = 0u + 0x00000004u;
    { c->r[31] = 0x088432c8u; c->r[6] = c->r[2] + 0u; func_08930208(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]); goto L_08843278; }
L_088432d8:
    c->r[2] = 0u + 0x00000002u;
    c->r[1] = 0x08a80000u;
    mem_w8(ram, c->r[1] + 0x00004e78u, c->r[2]);
    mem_w32(ram, c->r[30] + 0x00000010u, 0u);
L_088432e8:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000005u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_08843300; }
    { goto L_08843494; }
L_08843300:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + 0x0000001fu;
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
    c->r[2] = 0u + 0x00000001u;
    mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]);
L_08843318:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = ((s32)c->r[2] < (s32)0x0000000du) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_08843330; }
    { goto L_08843484; }
L_08843330:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[2] = c->r[2] << 2;
    c->r[3] = c->r[2] + 0u;
    c->r[2] = mem_r8(ram, c->r[30] + 0x00000018u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = c->r[2] + 0xffffffffu;
    mem_w8(ram, c->r[30] + 0x0000000cu, c->r[2]);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[30] + 0x0000000cu);
    c->r[4] = 0x08a80000u;
    c->r[4] = mem_r32(ram, c->r[4] + 0x00003e30u);
    { c->r[31] = 0x0884336cu; c->r[5] = c->r[2] + 0u; func_08820588(c, ram); }
    mem_w8(ram, c->r[30] + 0x0000000cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000006u);
    c->r[2] = 0u + 0x00000001u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_088433fc; }
    c->r[5] = (u32)(s32)(s8)mem_r8(ram, c->r[30] + 0x00000010u);
    c->r[4] = (u32)(s32)(s8)mem_r8(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0x2aaa0000u;
    c->r[2] = c->r[2] | 0xaaabu;
    alx_mult(c, c->r[4], c->r[2]);
    c->r[2] = c->hi;
    c->r[3] = (u32)((s32)c->r[2] >> 1);
    c->r[2] = (u32)((s32)c->r[4] >> 31);
    c->r[3] = c->r[3] - c->r[2];
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[4] - c->r[2];
    c->r[2] = c->r[2] << 24;
    c->r[2] = (u32)((s32)c->r[2] >> 24);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000af4u;
    c->r[6] = c->r[2] + 0u;
    { c->r[31] = 0x088433d8u; c->r[7] = 0u + 0x00000001u; func_088463b4(c, ram); }
    { int _c = (c->r[2] == 0u); if (_c) goto L_08843474; }
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000af4u;
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000014u);
    { c->r[31] = 0x088433f4u; c->r[6] = mem_r32(ram, c->r[30] + 0x00000018u); func_0881456c(c, ram); }
    { goto L_08843484; }
L_088433fc:
    c->r[5] = (u32)(s32)(s8)mem_r8(ram, c->r[30] + 0x00000010u);
    c->r[4] = (u32)(s32)(s8)mem_r8(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0x2aaa0000u;
    c->r[2] = c->r[2] | 0xaaabu;
    alx_mult(c, c->r[4], c->r[2]);
    c->r[2] = c->hi;
    c->r[3] = (u32)((s32)c->r[2] >> 1);
    c->r[2] = (u32)((s32)c->r[4] >> 31);
    c->r[3] = c->r[3] - c->r[2];
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[4] - c->r[2];
    c->r[2] = c->r[2] << 24;
    c->r[2] = (u32)((s32)c->r[2] >> 24);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000af4u;
    c->r[6] = c->r[2] + 0u;
    { c->r[31] = 0x08843450u; c->r[7] = 0u + 0x00000002u; func_088463b4(c, ram); }
    { int _c = (c->r[2] == 0u); if (_c) goto L_08843474; }
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000af4u;
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000014u);
    { c->r[31] = 0x0884346cu; c->r[6] = mem_r32(ram, c->r[30] + 0x00000018u); func_0881456c(c, ram); }
    { goto L_08843484; }
L_08843474:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]); goto L_08843318; }
L_08843484:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]); goto L_088432e8; }
L_08843494:
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000af4u;
    { c->r[31] = 0x088434a4u; c->r[5] = 0u + 0xffffffffu; func_0880d438(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[2] + 0x00000020u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000ac8u;
    { c->r[31] = 0x088434c0u; c->r[5] = c->r[2] + 0u; func_089cb820(c, ram); }
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x088434ccu; c->r[5] = 0x02000000u; func_0892ff54(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000008u, 0u);
L_088434d0:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000005u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_088434e8; }
    { goto L_088446d0; }
L_088434e8:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000015u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = (u32)((s32)c->r[3] >> (c->r[2] & 31u));
    c->r[2] = c->r[2] & 0x0001u;
    c->r[2] = c->r[2] & 0x00ffu;
    { int _c = (c->r[2] == 0u); if (_c) goto L_0884353c; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[2] + 0x00000020u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000ac8u;
    { c->r[31] = 0x08843524u; c->r[5] = c->r[2] + 0u; func_089cb820(c, ram); }
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0u + 0x00000004u;
    { c->r[31] = 0x08843534u; c->r[6] = mem_r32(ram, c->r[30] + 0x00000008u); func_08930208(c, ram); }
    { goto L_088435d8; }
L_0884353c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[2] + 0x00000020u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000ac8u;
    { c->r[31] = 0x08843558u; c->r[5] = c->r[2] + 0u; func_089cb820(c, ram); }
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0u + 0x00000004u;
    { c->r[31] = 0x08843568u; c->r[6] = mem_r32(ram, c->r[30] + 0x00000008u); func_08930178(c, ram); }
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000af4u;
    { c->r[31] = 0x08843578u; c->r[5] = 0u + 0x0000001du; func_088145a8(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_088435d8; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[2] + 0x00000001u;
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000af4u;
    c->r[5] = 0u + 0x0000001du;
    { c->r[31] = 0x088435a4u; c->r[6] = c->r[2] + 0u; func_0881456c(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[2] + 0x00000020u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000ac8u;
    { c->r[31] = 0x088435c0u; c->r[5] = c->r[2] + 0u; func_089cb820(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[2] + 0x00000001u;
    c->r[4] = c->r[3] + 0u;
    { c->r[31] = 0x088435d8u; c->r[5] = c->r[2] + 0u; func_08932484(c, ram); }
L_088435d8:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]); goto L_088434d0; }
L_088435e8:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = c->r[2] + 0x00000020u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000008u);
    c->r[2] = c->r[2] + 0x00000003u;
    c->r[2] = c->r[2] << 24;
    c->r[2] = (u32)((s32)c->r[2] >> 24);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = c->r[3] + 0u;
    { c->r[31] = 0x08843614u; c->r[6] = c->r[2] + 0u; func_0881ced0(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000008u);
    c->r[2] = 0u + 0x00000002u;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_08843a10; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[2] + 0x00000020u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000ac8u;
    { c->r[31] = 0x08843644u; c->r[5] = c->r[2] + 0u; func_089cb820(c, ram); }
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x08843650u; c->r[5] = 0x02000000u; func_0892ff54(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[2] + 0x00000020u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000ac8u;
    { c->r[31] = 0x0884366cu; c->r[5] = c->r[2] + 0u; func_089cb820(c, ram); }
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x08843678u; c->r[5] = 0x01000000u; func_0892ff54(c, ram); }
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x08843684u; c->r[4] = c->r[4] + 0x00000af4u; func_0880d410(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = 0u + 0x00000188u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[3] = c->lo;
    c->r[2] = 0x08a80000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00003e34u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000170u);
    c->r[2] = c->r[2] + 0xffffffffu;
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000af4u;
    c->r[5] = 0u + 0x0000000bu;
    { c->r[31] = 0x088436bcu; c->r[6] = c->r[2] + 0u; func_0881456c(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x0000000cu);
    c->r[4] = 0x08a80000u;
    c->r[4] = mem_r32(ram, c->r[4] + 0x00003e34u);
    { c->r[31] = 0x088436d4u; c->r[5] = c->r[2] + 0u; func_088204e8(c, ram); }
    c->r[2] = c->r[2] << 24;
    c->r[2] = (u32)((s32)c->r[2] >> 24);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000af4u;
    { c->r[31] = 0x088436ecu; c->r[5] = c->r[2] + 0u; func_0880d438(c, ram); }
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000af4u;
    { c->r[31] = 0x088436fcu; c->r[5] = 0u + 0u; func_0880d46c(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000008u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_08843848; }
    c->r[3] = 0x08a80000u;
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[3] + 0x00004e78u);
    c->r[2] = 0u + 0x00000003u;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_08843750; }
    c->r[16] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[4] = 0x08a80000u;
    c->r[4] = mem_r32(ram, c->r[4] + 0x00003e34u);
    c->r[5] = 0u + 0x00000003u;
    c->r[6] = 0u + 0x000000ffu;
    c->r[7] = 0u + 0x0000000bu;
    { c->r[31] = 0x08843740u; c->r[8] = 0u + 0x00000001u; func_08845eac(c, ram); }
    mem_w8(ram, c->r[16] + 0x0000000cu, c->r[2]);
    c->r[2] = mem_r8(ram, c->r[16] + 0x0000000cu);
    c->r[1] = 0x08a80000u;
    mem_w8(ram, c->r[1] + 0x00003e2cu, c->r[2]);
L_08843750:
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x0884375cu; c->r[4] = c->r[4] + 0x00000af4u; func_0880d410(c, ram); }
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000af4u;
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x08843770u; c->r[6] = 0u + 0x00000c00u; func_08820e5c(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000054u, c->r[2]);
    c->r[2] = 0u + 0x00000400u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000054u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_088437c8; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000054u);
    c->r[2] = (c->r[3] < 0x00000401u) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_088437a8; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000054u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_088437c0; }
    { goto L_088437dc; }
L_088437a8:
    c->r[2] = 0u + 0x00000800u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000054u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_088437d4; }
    { goto L_088437dc; }
L_088437c0:
    { mem_w8(ram, c->r[30] + 0x0000000cu, 0u); goto L_088437dc; }
L_088437c8:
    c->r[2] = 0u + 0x00000001u;
    { mem_w8(ram, c->r[30] + 0x0000000cu, c->r[2]); goto L_088437dc; }
L_088437d4:
    c->r[2] = 0u + 0x00000002u;
    mem_w8(ram, c->r[30] + 0x0000000cu, c->r[2]);
L_088437dc:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[2] + 0x0000002cu;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000ac8u;
    { c->r[31] = 0x088437f8u; c->r[5] = c->r[2] + 0u; func_089cb820(c, ram); }
    c->r[16] = c->r[2] + 0u;
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x08843808u; c->r[4] = c->r[4] + 0x00000af4u; func_0880d410(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = 0u + 0x00000188u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[3] = c->lo;
    c->r[2] = 0x08a80000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00003e34u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[30] + 0x0000000cu);
    c->r[4] = c->r[16] + 0u;
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x08843838u; c->r[6] = c->r[3] + 0u; func_0881fa6c(c, ram); }
    c->r[2] = 0u + 0x00000003u;
    c->r[1] = 0x08a80000u;
    { mem_w8(ram, c->r[1] + 0x00004e78u, c->r[2]); goto L_088438cc; }
L_08843848:
    c->r[3] = 0x08a80000u;
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[3] + 0x00004e78u);
    c->r[2] = 0u + 0x00000004u;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_088438c0; }
    c->r[4] = 0x08a80000u;
    c->r[4] = mem_r32(ram, c->r[4] + 0x00003e34u);
    { c->r[31] = 0x0884386cu; c->r[5] = 0u + 0x00000001u; func_08845d80(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000af4u;
    c->r[5] = 0u + 0x0000000bu;
    { c->r[31] = 0x08843884u; c->r[6] = mem_r32(ram, c->r[30] + 0x00000008u); func_0881456c(c, ram); }
    c->r[16] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[4] = 0x08a80000u;
    c->r[4] = mem_r32(ram, c->r[4] + 0x00003e34u);
    { c->r[31] = 0x08843898u; c->r[5] = mem_r32(ram, c->r[30] + 0x00000008u); func_088204e8(c, ram); }
    mem_w8(ram, c->r[16] + 0x0000000cu, c->r[2]);
    c->r[2] = mem_r8(ram, c->r[16] + 0x0000000cu);
    c->r[1] = 0x08a80000u;
    mem_w8(ram, c->r[1] + 0x00003e2cu, c->r[2]);
    c->r[2] = 0x08a80000u;
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00003e2cu);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000af4u;
    { c->r[31] = 0x088438c0u; c->r[5] = c->r[2] + 0u; func_0880d438(c, ram); }
L_088438c0:
    c->r[2] = 0u + 0x00000004u;
    c->r[1] = 0x08a80000u;
    mem_w8(ram, c->r[1] + 0x00004e78u, c->r[2]);
L_088438cc:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[2] + 0x00000028u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000ac8u;
    { c->r[31] = 0x088438e8u; c->r[5] = c->r[2] + 0u; func_089cb820(c, ram); }
    c->r[17] = c->r[2] + 0u;
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x088438f8u; c->r[4] = c->r[4] + 0x00000af4u; func_0880d410(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = 0u + 0x00000188u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[3] = c->lo;
    c->r[2] = 0x08a80000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00003e34u);
    c->r[16] = c->r[3] + c->r[2];
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x08843920u; c->r[4] = c->r[4] + 0x00000af4u; func_0880d410(c, ram); }
    c->r[4] = c->r[17] + 0u;
    c->r[5] = c->r[16] + 0u;
    c->r[6] = 0x08a80000u;
    c->r[6] = mem_r32(ram, c->r[6] + 0x00003e30u);
    { c->r[31] = 0x08843938u; c->r[7] = c->r[2] + 0u; func_0884585c(c, ram); }
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x08843944u; c->r[4] = c->r[4] + 0x00000af4u; func_0880d410(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = 0u + 0x00000188u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[3] = c->lo;
    c->r[2] = 0x08a80000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00003e34u);
    c->r[3] = c->r[3] + c->r[2];
    mem_w32(ram, c->r[30] + 0x00000058u, c->r[3]);
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x08843970u; c->r[4] = c->r[4] + 0x00000af4u; func_0880d410(c, ram); }
    mem_w32(ram, c->r[30] + 0x0000005cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[2] + 0x00000020u;
    mem_w32(ram, c->r[30] + 0x00000060u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000008u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_0884399c; }
    c->r[2] = 0u + 0x00000009u;
    { mem_w32(ram, c->r[30] + 0x00000064u, c->r[2]); goto L_088439a4; }
L_0884399c:
    c->r[3] = 0u + 0x00000019u;
    mem_w32(ram, c->r[30] + 0x00000064u, c->r[3]);
L_088439a4:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000058u);
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000060u);
    c->r[6] = mem_r32(ram, c->r[30] + 0x0000005cu);
    { c->r[31] = 0x088439b8u; c->r[7] = mem_r32(ram, c->r[30] + 0x00000064u); func_0881ef98(c, ram); }
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x088439c4u; c->r[4] = c->r[4] + 0x00000af4u; func_0880d410(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000006u);
    c->r[2] = c->r[2] ^ 0x0002u;
    c->r[2] = (c->r[2] < 0x00000001u) ? 1u : 0u;
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[5] = c->r[3] + 0u;
    { c->r[31] = 0x088439e8u; c->r[6] = c->r[2] + 0u; func_08845724(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[2] + 0x00000030u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x08843a08u; c->r[6] = 0u + 0x00000001u; func_088446ec(c, ram); }
    { goto L_088446d0; }
L_08843a10:
    c->r[2] = 0u + 0x00000005u;
    c->r[1] = 0x08a80000u;
    mem_w8(ram, c->r[1] + 0x00004e78u, c->r[2]);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000af4u;
    c->r[5] = 0u + 0x0000001fu;
    { c->r[31] = 0x08843a30u; c->r[6] = 0u + 0x00000001u; func_0881456c(c, ram); }
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000af4u;
    c->r[5] = 0u + 0x00000021u;
    { c->r[31] = 0x08843a44u; c->r[6] = 0u + 0x00000001u; func_0881456c(c, ram); }
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000af4u;
    c->r[5] = 0u + 0x00000023u;
    { c->r[31] = 0x08843a58u; c->r[6] = 0u + 0x00000001u; func_0881456c(c, ram); }
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000af4u;
    c->r[5] = 0u + 0x00000025u;
    { c->r[31] = 0x08843a6cu; c->r[6] = 0u + 0x00000001u; func_0881456c(c, ram); }
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000af4u;
    c->r[5] = 0u + 0x00000027u;
    { c->r[31] = 0x08843a80u; c->r[6] = 0u + 0x00000001u; func_0881456c(c, ram); }
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000af4u;
    { c->r[31] = 0x08843a90u; c->r[5] = 0u + 0xffffffffu; func_0880d438(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000008u, 0u);
L_08843a94:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000005u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_08843aac; }
    { goto L_08843b3c; }
L_08843aac:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000016u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = (u32)((s32)c->r[3] >> (c->r[2] & 31u));
    c->r[2] = c->r[2] & 0x0001u;
    c->r[2] = c->r[2] & 0x00ffu;
    { int _c = (c->r[2] == 0u); if (_c) goto L_08843b00; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[2] + 0x00000020u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000ac8u;
    { c->r[31] = 0x08843ae8u; c->r[5] = c->r[2] + 0u; func_089cb820(c, ram); }
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0u + 0x00000004u;
    { c->r[31] = 0x08843af8u; c->r[6] = mem_r32(ram, c->r[30] + 0x00000008u); func_08930208(c, ram); }
    { goto L_08843b2c; }
L_08843b00:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[2] + 0x00000020u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000ac8u;
    { c->r[31] = 0x08843b1cu; c->r[5] = c->r[2] + 0u; func_089cb820(c, ram); }
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0u + 0x00000004u;
    { c->r[31] = 0x08843b2cu; c->r[6] = mem_r32(ram, c->r[30] + 0x00000008u); func_08930178(c, ram); }
L_08843b2c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]); goto L_08843a94; }
L_08843b3c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[2] + 0x00000020u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000ac8u;
    { c->r[31] = 0x08843b58u; c->r[5] = c->r[2] + 0u; func_089cb820(c, ram); }
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x08843b64u; c->r[5] = 0x02000000u; func_0892ff54(c, ram); }
    { goto L_088446d0; }
L_08843b6c:
    c->r[2] = 0u + 0x00000006u;
    c->r[1] = 0x08a80000u;
    mem_w8(ram, c->r[1] + 0x00004e78u, c->r[2]);
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x08843b84u; c->r[4] = c->r[4] + 0x00000af4u; func_0880d410(c, ram); }
    { int _c = ((s32)c->r[2] >= 0); if (_c) goto L_08843b9c; }
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000af4u;
    { c->r[31] = 0x08843b9cu; c->r[5] = 0u + 0x0000000bu; func_0880d438(c, ram); }
L_08843b9c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[2] + 0x00000020u;
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x08843bb4u; c->r[6] = 0u + 0x00000007u; func_0881ced0(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[2] + 0x00000020u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000ac8u;
    { c->r[31] = 0x08843bd4u; c->r[5] = c->r[2] + 0u; func_089cb820(c, ram); }
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x08843be0u; c->r[5] = 0x02000000u; func_0892ff54(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[2] + 0x00000020u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000ac8u;
    { c->r[31] = 0x08843bfcu; c->r[5] = c->r[2] + 0u; func_089cb820(c, ram); }
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x08843c08u; c->r[5] = 0x01000000u; func_0892ff54(c, ram); }
    c->r[16] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000af4u;
    { c->r[31] = 0x08843c1cu; c->r[5] = 0u + 0x0000000bu; func_088145a8(c, ram); }
    mem_w8(ram, c->r[16] + 0x0000000cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x0000000cu);
    c->r[4] = 0x08a80000u;
    c->r[4] = mem_r32(ram, c->r[4] + 0x00003e34u);
    { c->r[31] = 0x08843c38u; c->r[5] = c->r[2] + 0u; func_088204e8(c, ram); }
    c->r[2] = c->r[2] << 24;
    c->r[2] = (u32)((s32)c->r[2] >> 24);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000af4u;
    { c->r[31] = 0x08843c50u; c->r[5] = c->r[2] + 0u; func_0880d438(c, ram); }
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x08843c5cu; c->r[4] = c->r[4] + 0x00000af4u; func_0880d410(c, ram); }
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000af4u;
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x08843c70u; c->r[6] = 0u + 0x00007000u; func_08820e5c(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000068u, c->r[2]);
    c->r[2] = 0u + 0x00001000u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000068u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_08843ce8; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000068u);
    c->r[2] = (c->r[3] < 0x00001001u) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_08843ca8; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000068u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_08843cd0; }
    { goto L_08843d28; }
L_08843ca8:
    c->r[2] = 0u + 0x00002000u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000068u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_08843d00; }
    c->r[2] = 0u + 0x00004000u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000068u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_08843d18; }
    { goto L_08843d28; }
L_08843cd0:
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000af4u;
    { c->r[31] = 0x08843ce0u; c->r[5] = 0u + 0u; func_0880d46c(c, ram); }
    { goto L_08843d28; }
L_08843ce8:
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000af4u;
    { c->r[31] = 0x08843cf8u; c->r[5] = 0u + 0x00000001u; func_0880d46c(c, ram); }
    { goto L_08843d28; }
L_08843d00:
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000af4u;
    { c->r[31] = 0x08843d10u; c->r[5] = 0u + 0x00000002u; func_0880d46c(c, ram); }
    { goto L_08843d28; }
L_08843d18:
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000af4u;
    { c->r[31] = 0x08843d28u; c->r[5] = 0u + 0x00000003u; func_0880d46c(c, ram); }
L_08843d28:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[2] + 0x00000028u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000ac8u;
    { c->r[31] = 0x08843d44u; c->r[5] = c->r[2] + 0u; func_089cb820(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_08843dd4; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = 0u + 0xffffffffu;
    mem_w8(ram, c->r[3] + 0x0000000bu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[2] + 0x00000020u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000ac8u;
    { c->r[31] = 0x08843d7cu; c->r[5] = c->r[2] + 0u; func_089cb820(c, ram); }
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x08843d88u; c->r[5] = 0u + 0x00000008u; func_0892ff54(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000010u, 0u);
L_08843d8c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000006u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_08843da4; }
    { goto L_08843f58; }
L_08843da4:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[5] = 0u + 0xffffffffu;
    { c->r[31] = 0x08843db4u; c->r[6] = mem_r32(ram, c->r[30] + 0x00000010u); func_08933428(c, ram); }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[5] = 0x02000000u;
    { c->r[31] = 0x08843dc4u; c->r[6] = mem_r32(ram, c->r[30] + 0x00000010u); func_08930178(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]); goto L_08843d8c; }
L_08843dd4:
    mem_w32(ram, c->r[30] + 0x00000010u, 0u);
L_08843dd8:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000006u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_08843df0; }
    { goto L_08843f58; }
L_08843df0:
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x08843dfcu; c->r[4] = c->r[4] + 0x00000af4u; func_0880d410(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = 0u + 0x00000188u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[3] = c->lo;
    c->r[2] = 0x08a80000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00003e34u);
    c->r[3] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = c->r[2] + 0x00000178u;
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000000u);
    mem_w32(ram, c->r[30] + 0x0000001cu, c->r[2]);
    mem_w8(ram, c->r[30] + 0x0000000cu, 0u);
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x08843e3cu; c->r[4] = c->r[4] + 0x00000af4u; func_0880d410(c, ram); }
    c->r[2] = ((s32)c->r[2] < (s32)0x00000018u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_08843f18; }
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x08843e54u; c->r[4] = c->r[4] + 0x00000af4u; func_0880d410(c, ram); }
    c->r[2] = ((s32)c->r[2] < (s32)0x0000001fu) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_08843f18; }
    mem_w32(ram, c->r[30] + 0x00000020u, 0u);
L_08843e64:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000005u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_08843e7c; }
    { goto L_08843f18; }
L_08843e7c:
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x08843e88u; c->r[4] = c->r[4] + 0x00000af4u; func_0880d410(c, ram); }
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000af4u;
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x08843e9cu; c->r[6] = mem_r32(ram, c->r[30] + 0x00000020u); func_08820ea4(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000024u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000024u);
    { int _c = ((s32)c->r[2] <= 0); if (_c) goto L_08843f08; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 2;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000024u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = c->r[2] + 0xffffffffu;
    mem_w32(ram, c->r[30] + 0x00000024u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000024u);
    c->r[2] = 0u + 0x000000ecu;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[3] = c->lo;
    c->r[2] = 0x08a80000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00003e30u);
    c->r[3] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = c->r[2] + 0x000000dcu;
    c->r[3] = mem_r8(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000000u);
    c->r[2] = c->r[3] + c->r[2];
    mem_w8(ram, c->r[30] + 0x0000000cu, c->r[2]);
L_08843f08:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000020u, c->r[2]); goto L_08843e64; }
L_08843f18:
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = c->r[2] + c->r[3];
    mem_w32(ram, c->r[30] + 0x0000001cu, c->r[2]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[5] = mem_r32(ram, c->r[30] + 0x0000001cu);
    { c->r[31] = 0x08843f38u; c->r[6] = mem_r32(ram, c->r[30] + 0x00000010u); func_08933428(c, ram); }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[5] = 0x01000000u;
    { c->r[31] = 0x08843f48u; c->r[6] = mem_r32(ram, c->r[30] + 0x00000010u); func_08930178(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]); goto L_08843dd8; }
L_08843f58:
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x08843f64u; c->r[4] = c->r[4] + 0x00000af4u; func_0880d410(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = 0u + 0x00000188u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[3] = c->lo;
    c->r[2] = 0x08a80000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00003e34u);
    c->r[16] = c->r[3] + c->r[2];
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x08843f8cu; c->r[4] = c->r[4] + 0x00000af4u; func_0880d410(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[2] + 0x00000020u;
    c->r[4] = c->r[16] + 0u;
    c->r[5] = c->r[2] + 0u;
    c->r[6] = c->r[3] + 0u;
    { c->r[31] = 0x08843facu; c->r[7] = 0u + 0x00000019u; func_0881ef98(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000024u, 0u);
L_08843fb0:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000024u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000005u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_08843fc8; }
    { goto L_088446d0; }
L_08843fc8:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[2] + 0x0000002cu;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000ac8u;
    { c->r[31] = 0x08843fe4u; c->r[5] = c->r[2] + 0u; func_089cb820(c, ram); }
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0u + 0x00000f00u;
    { c->r[31] = 0x08843ff4u; c->r[6] = mem_r32(ram, c->r[30] + 0x00000024u); func_08930208(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000024u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000024u, c->r[2]); goto L_08843fb0; }
L_08844004:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[2] + 0x00000020u;
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x0884401cu; c->r[6] = 0u + 0x00000006u; func_0881ced0(c, ram); }
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x08844028u; c->r[4] = c->r[4] + 0x00000af4u; func_0880d410(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = 0x08a80000u;
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00004e79u);
    { int _c = (c->r[2] == c->r[3]); if (_c) goto L_08844060; }
    c->r[16] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000006u);
    c->r[2] = c->r[2] ^ 0x0005u;
    c->r[2] = (c->r[2] < 0x00000001u) ? 1u : 0u;
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x0884405cu; c->r[5] = 0u + 0x00000015u; func_08845c8c(c, ram); }
    mem_w8(ram, c->r[16] + 0x00000009u, c->r[2]);
L_08844060:
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x0884406cu; c->r[4] = c->r[4] + 0x00000af4u; func_0880d410(c, ram); }
    c->r[1] = 0x08a80000u;
    mem_w8(ram, c->r[1] + 0x00004e79u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000009u);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000af4u;
    c->r[5] = 0u + 0x00000015u;
    { c->r[31] = 0x08844090u; c->r[6] = c->r[2] + 0u; func_0881456c(c, ram); }
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x0884409cu; c->r[4] = c->r[4] + 0x00000af4u; func_0880d410(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = 0u + 0x00000188u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[3] = c->lo;
    c->r[2] = 0x08a80000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00003e34u);
    c->r[4] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = c->r[2] + 0x00000020u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000009u);
    c->r[5] = c->r[3] + 0u;
    { c->r[31] = 0x088440d4u; c->r[6] = c->r[2] + 0u; func_0881f914(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[2] + 0x00000034u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000ac8u;
    { c->r[31] = 0x088440f0u; c->r[5] = c->r[2] + 0u; func_089cb820(c, ram); }
    c->r[16] = c->r[2] + 0u;
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x08844100u; c->r[4] = c->r[4] + 0x00000af4u; func_0880d410(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = 0u + 0x00000188u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[3] = c->lo;
    c->r[2] = 0x08a80000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00003e34u);
    c->r[3] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000009u);
    c->r[4] = c->r[16] + 0u;
    c->r[5] = c->r[3] + 0u;
    { c->r[31] = 0x08844134u; c->r[6] = c->r[2] + 0u; func_0881fc98(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[2] + 0x00000020u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000ac8u;
    { c->r[31] = 0x08844150u; c->r[5] = c->r[2] + 0u; func_089cb820(c, ram); }
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x0884415cu; c->r[5] = 0x02000000u; func_0892ff54(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[2] + 0x00000020u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000ac8u;
    { c->r[31] = 0x08844178u; c->r[5] = c->r[2] + 0u; func_089cb820(c, ram); }
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x08844184u; c->r[5] = 0x01000000u; func_0892ff54(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000006u);
    c->r[2] = 0u + 0x00000004u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_08844200; }
    c->r[2] = 0u + 0x00000001u;
    mem_w32(ram, c->r[30] + 0x00000024u, c->r[2]);
L_088441a0:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000024u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000003u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_088441b8; }
    { goto L_08844200; }
L_088441b8:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[2] + 0x00000020u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000ac8u;
    { c->r[31] = 0x088441d4u; c->r[5] = c->r[2] + 0u; func_089cb820(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000024u);
    c->r[2] = c->r[2] + 0x00000001u;
    c->r[4] = c->r[3] + 0u;
    c->r[5] = 0u + 0x00000004u;
    { c->r[31] = 0x088441f0u; c->r[6] = c->r[2] + 0u; func_08930208(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000024u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000024u, c->r[2]); goto L_088441a0; }
L_08844200:
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x0884420cu; c->r[4] = c->r[4] + 0x00000af4u; func_0880d410(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = 0u + 0x00000188u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[3] = c->lo;
    c->r[2] = 0x08a80000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00003e34u);
    c->r[3] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000009u);
    c->r[2] = c->r[2] << 3;
    c->r[2] = c->r[2] + c->r[3];
    c->r[2] = c->r[2] + 0x00000144u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    mem_w32(ram, c->r[30] + 0x00000024u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[2] + 0x00000030u;
    c->r[3] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000006u);
    c->r[2] = c->r[2] ^ 0x0005u;
    c->r[2] = (c->r[2] < 0x00000001u) ? 1u : 0u;
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000024u);
    c->r[5] = c->r[3] + 0u;
    { c->r[31] = 0x08844270u; c->r[6] = c->r[2] + 0u; func_088446ec(c, ram); }
    c->r[2] = 0x08a90000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0xffffbf20u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_088446d0; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[16] = c->r[2] + 0x00000040u;
    c->r[3] = c->r[30] + 0x00000030u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000009u);
    c->f[0] = u2f(c->r[2]);
    c->f[1] = (f32)(s32)f2u(c->f[0]);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00001f30u);
    c->f[1] = c->f[1] * c->f[0];
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00001f34u);
    c->f[0] = c->f[0] - c->f[1];
    c->r[4] = c->r[3] + 0u;
    c->f[12] = c->f[0];
    c->f[13] = u2f(0u);
    c->f[14] = u2f(0u);
    c->f[15] = u2f(0u);
    { c->r[31] = 0x088442d0u; func_0880d140(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000030u);
    mem_w32(ram, c->r[16] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000034u);
    mem_w32(ram, c->r[16] + 0x00000004u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000038u);
    mem_w32(ram, c->r[16] + 0x00000008u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000003cu);
    { mem_w32(ram, c->r[16] + 0x0000000cu, c->r[2]); goto L_088446d0; }
L_088442f4:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[2] + 0x00000020u;
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x0884430cu; c->r[6] = 0u + 0x00000008u; func_0881ced0(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000024u, 0u);
L_08844310:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000024u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000004u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_08844328; }
    { goto L_08844384; }
L_08844328:
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x08844334u; c->r[4] = c->r[4] + 0x00000af4u; func_0880d410(c, ram); }
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000af4u;
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x08844348u; c->r[6] = mem_r32(ram, c->r[30] + 0x00000024u); func_08820ea4(c, ram); }
    { int _c = ((s32)c->r[2] > 0); if (_c) goto L_08844374; }
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x0884435cu; c->r[4] = c->r[4] + 0x00000af4u; func_0880d410(c, ram); }
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000af4u;
    c->r[5] = c->r[2] + 0u;
    c->r[6] = mem_r32(ram, c->r[30] + 0x00000024u);
    { c->r[31] = 0x08844374u; c->r[7] = 0u + 0u; func_08846208(c, ram); }
L_08844374:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000024u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000024u, c->r[2]); goto L_08844310; }
L_08844384:
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x08844390u; c->r[4] = c->r[4] + 0x00000af4u; func_0880d410(c, ram); }
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000af4u;
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x088443a4u; c->r[6] = 0u + 0u; func_08820ea4(c, ram); }
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000af4u;
    c->r[5] = 0u + 0x0000001fu;
    { c->r[31] = 0x088443b8u; c->r[6] = c->r[2] + 0u; func_0881456c(c, ram); }
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x088443c4u; c->r[4] = c->r[4] + 0x00000af4u; func_0880d410(c, ram); }
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000af4u;
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x088443d8u; c->r[6] = 0u + 0x00000001u; func_08820ea4(c, ram); }
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000af4u;
    c->r[5] = 0u + 0x00000021u;
    { c->r[31] = 0x088443ecu; c->r[6] = c->r[2] + 0u; func_0881456c(c, ram); }
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x088443f8u; c->r[4] = c->r[4] + 0x00000af4u; func_0880d410(c, ram); }
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000af4u;
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x0884440cu; c->r[6] = 0u + 0x00000002u; func_08820ea4(c, ram); }
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000af4u;
    c->r[5] = 0u + 0x00000023u;
    { c->r[31] = 0x08844420u; c->r[6] = c->r[2] + 0u; func_0881456c(c, ram); }
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x0884442cu; c->r[4] = c->r[4] + 0x00000af4u; func_0880d410(c, ram); }
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000af4u;
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x08844440u; c->r[6] = 0u + 0x00000003u; func_08820ea4(c, ram); }
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000af4u;
    c->r[5] = 0u + 0x00000025u;
    { c->r[31] = 0x08844454u; c->r[6] = c->r[2] + 0u; func_0881456c(c, ram); }
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x08844460u; c->r[4] = c->r[4] + 0x00000af4u; func_0880d410(c, ram); }
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000af4u;
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x08844474u; c->r[6] = 0u + 0x00000004u; func_08820ea4(c, ram); }
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000af4u;
    c->r[5] = 0u + 0x00000027u;
    { c->r[31] = 0x08844488u; c->r[6] = c->r[2] + 0u; func_0881456c(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[2] + 0x00000020u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000ac8u;
    { c->r[31] = 0x088444a4u; c->r[5] = c->r[2] + 0u; func_089cb820(c, ram); }
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x088444b0u; c->r[5] = 0x02000000u; func_0892ff54(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[2] + 0x00000020u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000ac8u;
    { c->r[31] = 0x088444ccu; c->r[5] = c->r[2] + 0u; func_089cb820(c, ram); }
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x088444d8u; c->r[5] = 0x01000000u; func_0892ff54(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000024u, 0u);
L_088444dc:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000024u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000005u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_088444f4; }
    { goto L_088445f4; }
L_088444f4:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000016u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000024u);
    c->r[2] = (u32)((s32)c->r[3] >> (c->r[2] & 31u));
    c->r[2] = c->r[2] & 0x0001u;
    c->r[2] = c->r[2] & 0x00ffu;
    { int _c = (c->r[2] == 0u); if (_c) goto L_08844548; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[2] + 0x00000020u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000ac8u;
    { c->r[31] = 0x08844530u; c->r[5] = c->r[2] + 0u; func_089cb820(c, ram); }
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0u + 0x00000004u;
    { c->r[31] = 0x08844540u; c->r[6] = mem_r32(ram, c->r[30] + 0x00000024u); func_08930208(c, ram); }
    { goto L_088445e4; }
L_08844548:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[2] + 0x00000020u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000ac8u;
    { c->r[31] = 0x08844564u; c->r[5] = c->r[2] + 0u; func_089cb820(c, ram); }
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0u + 0x00000004u;
    { c->r[31] = 0x08844574u; c->r[6] = mem_r32(ram, c->r[30] + 0x00000024u); func_08930178(c, ram); }
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000af4u;
    { c->r[31] = 0x08844584u; c->r[5] = 0u + 0x0000001du; func_088145a8(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000024u);
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_088445e4; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000024u);
    c->r[2] = c->r[2] + 0x00000001u;
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000af4u;
    c->r[5] = 0u + 0x0000001du;
    { c->r[31] = 0x088445b0u; c->r[6] = c->r[2] + 0u; func_0881456c(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[2] + 0x00000020u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000ac8u;
    { c->r[31] = 0x088445ccu; c->r[5] = c->r[2] + 0u; func_089cb820(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000024u);
    c->r[2] = c->r[2] + 0x00000001u;
    c->r[4] = c->r[3] + 0u;
    { c->r[31] = 0x088445e4u; c->r[5] = c->r[2] + 0u; func_08932484(c, ram); }
L_088445e4:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000024u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000024u, c->r[2]); goto L_088444dc; }
L_088445f4:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = 0u + 0x00000006u;
    { mem_w8(ram, c->r[3] + 0x00000006u, c->r[2]); goto L_088446d0; }
L_08844604:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[2] + 0x00000020u;
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x0884461cu; c->r[6] = 0u + 0x00000002u; func_0881ced0(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    mem_w8(ram, c->r[2] + 0x00000006u, 0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    mem_w8(ram, c->r[2] + 0x0000000bu, 0u);
    c->r[2] = 0u + 0xffffffffu;
    c->r[1] = 0x08a80000u;
    mem_w8(ram, c->r[1] + 0x00004e79u, c->r[2]);
    c->r[2] = 0u + 0x00000005u;
    mem_w32(ram, c->r[30] + 0x00000034u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000007u);
    mem_w16(ram, c->r[30] + 0x00000038u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000008u);
    mem_w16(ram, c->r[30] + 0x0000003au, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[2] + 0x00000020u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000ac8u;
    { c->r[31] = 0x08844674u; c->r[5] = c->r[2] + 0u; func_089cb820(c, ram); }
    c->r[3] = c->r[30] + 0x00000030u;
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = c->r[2] + 0u;
    c->r[6] = 0u + 0x00000020u;
    { c->r[31] = 0x0884468cu; c->r[7] = c->r[3] + 0u; func_089c34ac(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000007u);
    c->r[3] = c->r[2] + 0x0000001bu;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000008u);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000af4u;
    c->r[5] = c->r[3] + 0u;
    { c->r[31] = 0x088446b4u; c->r[6] = c->r[2] + 0u; func_0881456c(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000007u);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000af4u;
    c->r[5] = 0u + 0x0000001au;
    { c->r[31] = 0x088446d0u; c->r[6] = c->r[2] + 0u; func_0881456c(c, ram); }
L_088446d0:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x0000008cu);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000088u);
    c->r[17] = mem_r32(ram, c->r[29] + 0x00000084u);
    c->r[16] = mem_r32(ram, c->r[29] + 0x00000080u);
    { c->r[29] = c->r[29] + 0x00000090u; return; }
    return; /* fell out of func_08842cb8 */
}

/* func_08846bf8  0x08846bf8..0x08846c88  144 bytes, source=fde */
void func_08846bf8(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08846bf8u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, 0u);
L_08846c0c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000005u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_08846c24; }
    { goto L_08846c74; }
L_08846c24:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08a80000u;
    c->r[2] = c->r[2] + 0x00004ee4u;
    c->r[6] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08a80000u;
    c->r[2] = c->r[2] + 0x00004ef8u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000330u;
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[6] = mem_r32(ram, c->r[6] + 0x00000000u);
    { c->r[31] = 0x08846c64u; c->r[7] = mem_r32(ram, c->r[2] + 0x00000000u); func_089d96c4(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000000u, c->r[2]); goto L_08846c0c; }
L_08846c74:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_08846bf8 */
}

/* func_0884bff4  0x0884bff4..0x0884c07c  136 bytes, source=sweep */
void func_0884bff4(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0884bff4u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_wf32(ram, c->r[30] + 0x00000004u, c->f[12]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000000u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000004u);
    c->f[0] = c->f[1] * c->f[0];
    mem_wf32(ram, c->r[3] + 0x00000000u, c->f[0]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000004u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000004u);
    c->f[0] = c->f[1] * c->f[0];
    mem_wf32(ram, c->r[3] + 0x00000004u, c->f[0]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000008u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000004u);
    c->f[0] = c->f[1] * c->f[0];
    mem_wf32(ram, c->r[3] + 0x00000008u, c->f[0]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x0000000cu);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000004u);
    c->f[0] = c->f[1] * c->f[0];
    mem_wf32(ram, c->r[3] + 0x0000000cu, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_0884bff4 */
}

/* func_0884d4c0  0x0884d4c0..0x0884d640  384 bytes, source=fde */
void func_0884d4c0(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0884d4c0u);
    c->r[29] = c->r[29] + 0xfffffff0u;
    mem_w32(ram, c->r[29] + 0x00000004u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000000u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    c->r[2] = 0x08a90000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0xffff8e48u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000004u);
    c->r[1] = 0x08a90000u;
    mem_w32(ram, c->r[1] + 0xffff8b38u, c->r[2]);
    c->r[2] = 0x08a90000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0xffff8e48u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x00000008u);
    c->r[2] = 0x08a90000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0xffff8e48u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[1] = 0x08a90000u;
    mem_w32(ram, c->r[1] + 0xffff8b44u, c->r[2]);
    c->r[2] = 0x08a90000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0xffff8e48u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000110u);
    c->r[1] = 0x08a90000u;
    mem_w32(ram, c->r[1] + 0xffff8e74u, c->r[2]);
    c->r[2] = 0x08a90000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0xffff8e48u);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x0000000cu);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000af4u;
    { c->r[31] = 0x0884d534u; c->r[5] = c->r[2] + 0u; func_0880d34c(c, ram); }
    c->r[2] = 0x08a90000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0xffff8e48u);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x0000000du);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000af4u;
    { c->r[31] = 0x0884d550u; c->r[5] = c->r[2] + 0u; func_0880d3a8(c, ram); }
    c->r[2] = 0x08a90000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0xffff8e48u);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x0000000eu);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000af4u;
    { c->r[31] = 0x0884d56cu; c->r[5] = c->r[2] + 0u; func_0880d438(c, ram); }
    c->r[2] = 0x08a90000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0xffff8e48u);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x0000000fu);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000af4u;
    { c->r[31] = 0x0884d588u; c->r[5] = c->r[2] + 0u; func_0880d46c(c, ram); }
    c->r[2] = 0x08a90000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0xffff8e48u);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000114u);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000af4u;
    { c->r[31] = 0x0884d5a4u; c->r[5] = c->r[2] + 0u; func_0880d4c8(c, ram); }
    c->r[2] = 0x08a90000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0xffff8e48u);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000115u);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000af4u;
    { c->r[31] = 0x0884d5c0u; c->r[5] = c->r[2] + 0u; func_0880d3dc(c, ram); }
    c->r[2] = 0x08a90000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0xffff8e48u);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000116u);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000af4u;
    { c->r[31] = 0x0884d5dcu; c->r[5] = c->r[2] + 0u; func_0882172c(c, ram); }
    c->r[2] = 0x08a90000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0xffff8e48u);
    c->r[2] = c->r[2] + 0x00000010u;
    { c->r[31] = 0x0884d5f0u; c->r[4] = c->r[2] + 0u; func_08859b40(c, ram); }
    c->r[2] = 0x08a90000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0xffff8e48u);
    c->r[2] = mem_r8(ram, c->r[2] + 0x0000000eu);
    c->r[1] = 0x08a90000u;
    mem_w16(ram, c->r[1] + 0xffff8b3cu, c->r[2]);
    c->r[2] = 0x08a90000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0xffff8e48u);
    c->r[2] = mem_r8(ram, c->r[2] + 0x0000000fu);
    c->r[1] = 0x08a90000u;
    mem_w16(ram, c->r[1] + 0xffff8b3eu, c->r[2]);
    c->r[2] = 0x08a90000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0xffff8e48u);
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000114u);
    c->r[1] = 0x08a90000u;
    mem_w16(ram, c->r[1] + 0xffff8b40u, c->r[2]);
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000004u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000000u);
    { c->r[29] = c->r[29] + 0x00000010u; return; }
    return; /* fell out of func_0884d4c0 */
}

/* func_08850c64  0x08850c64..0x088513dc  1912 bytes, source=fde */
void func_08850c64(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08850c64u);
    c->r[29] = c->r[29] + 0xffffffb0u;
    mem_w32(ram, c->r[29] + 0x00000048u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000044u, c->r[30]);
    mem_w32(ram, c->r[29] + 0x00000040u, c->r[16]);
    c->r[30] = c->r[29] + 0u;
    c->r[2] = 0x08a90000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0xffff8b34u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_08850cac; }
    c->r[2] = 0x08a90000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0xffff8c84u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_08850cac; }
    c->r[4] = 0x08a90000u;
    { c->r[31] = 0x08850ca4u; c->r[4] = c->r[4] + 0xffff8c84u; func_08858920(c, ram); }
    { goto L_088513c4; }
L_08850cac:
    c->r[2] = 0x08a90000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0xffff8b34u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_088510e0; }
    c->r[4] = 0x08a70000u;
    c->r[4] = c->r[4] + 0xffffb34cu;
    c->r[5] = 0u + 0u;
    c->r[6] = 0u + 0u;
    { c->r[31] = 0x08850cd4u; c->r[7] = 0u + 0u; func_089d87d4(c, ram); }
    c->r[16] = c->r[2] + 0u;
    c->r[4] = 0x08a70000u;
    { c->r[31] = 0x08850ce4u; c->r[4] = c->r[4] + 0xffffb34cu; func_0880d238(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = mem_r32(ram, c->r[16] + 0x00000004u);
    c->r[2] = c->r[3] & c->r[2];
    c->r[2] = c->r[2] & 0x8000u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_08850d14; }
    c->r[2] = 0u + 0x00000001u;
    c->r[3] = 0x08a90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0xffff8cc4u);
    c->r[2] = c->r[2] - c->r[3];
    c->r[1] = 0x08a90000u;
    mem_w32(ram, c->r[1] + 0xffff8cc4u, c->r[2]);
L_08850d14:
    c->r[2] = 0x08a90000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0xffff8cc4u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_0885107c; }
    c->r[2] = 0x08a90000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0xffff8c70u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_0885107c; }
    c->r[2] = 0x08a90000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0xffff8cc8u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_08850db8; }
    c->r[4] = 0x08a70000u;
    c->r[4] = c->r[4] + 0xffffb34cu;
    c->r[5] = 0u + 0u;
    c->r[6] = 0u + 0u;
    { c->r[31] = 0x08850d5cu; c->r[7] = 0u + 0u; func_089d87d4(c, ram); }
    c->r[16] = c->r[2] + 0u;
    c->r[4] = 0x08a70000u;
    { c->r[31] = 0x08850d6cu; c->r[4] = c->r[4] + 0xffffb34cu; func_0880d238(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = mem_r32(ram, c->r[16] + 0x00000004u);
    c->r[2] = c->r[3] & c->r[2];
    c->r[2] = c->r[2] & 0x0008u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_08850db8; }
    c->r[2] = 0u + 0x00000001u;
    c->r[1] = 0x08a90000u;
    mem_w32(ram, c->r[1] + 0xffff8cc8u, c->r[2]);
    c->r[2] = 0u + 0x00000001u;
    c->r[1] = 0x08a90000u;
    mem_w32(ram, c->r[1] + 0xffff8c70u, c->r[2]);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00002748u);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00003c30u;
    c->r[5] = 0u + 0x00000001u;
    { c->r[31] = 0x08850db8u; c->f[12] = c->f[0]; func_089b3514(c, ram); }
L_08850db8:
    c->r[2] = 0x08a90000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0xffff8cc8u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_08850e6c; }
    c->r[2] = 0x08a90000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0xffff8c6cu);
    { int _c = (c->r[2] != 0u); if (_c) goto L_08850e6c; }
    c->r[4] = 0x08a70000u;
    c->r[4] = c->r[4] + 0xffffb34cu;
    c->r[5] = 0u + 0u;
    c->r[6] = 0u + 0u;
    { c->r[31] = 0x08850df0u; c->r[7] = 0u + 0u; func_089d87d4(c, ram); }
    c->r[16] = c->r[2] + 0u;
    c->r[4] = 0x08a70000u;
    { c->r[31] = 0x08850e00u; c->r[4] = c->r[4] + 0xffffb34cu; func_0880d238(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = mem_r32(ram, c->r[16] + 0x00000004u);
    c->r[2] = c->r[3] & c->r[2];
    c->r[2] = c->r[2] & 0x4000u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_08850e60; }
    c->r[4] = 0x08a70000u;
    c->r[4] = c->r[4] + 0xffffb34cu;
    c->r[5] = 0u + 0u;
    c->r[6] = 0u + 0u;
    { c->r[31] = 0x08850e30u; c->r[7] = 0u + 0u; func_089d87d4(c, ram); }
    c->r[16] = c->r[2] + 0u;
    c->r[4] = 0x08a70000u;
    { c->r[31] = 0x08850e40u; c->r[4] = c->r[4] + 0xffffb34cu; func_0880d238(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = mem_r32(ram, c->r[16] + 0x00000004u);
    c->r[2] = c->r[3] & c->r[2];
    c->r[2] = c->r[2] & 0x2000u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_08850e60; }
    { goto L_08850e6c; }
L_08850e60:
    c->r[2] = 0u + 0x00000001u;
    c->r[1] = 0x08a90000u;
    mem_w32(ram, c->r[1] + 0xffff8c84u, c->r[2]);
L_08850e6c:
    c->r[4] = 0x08a70000u;
    c->r[4] = c->r[4] + 0xffffb34cu;
    c->r[5] = 0u + 0u;
    c->r[6] = 0u + 0u;
    { c->r[31] = 0x08850e84u; c->r[7] = 0u + 0u; func_089d87d4(c, ram); }
    c->r[16] = c->r[2] + 0u;
    c->r[4] = 0x08a70000u;
    { c->r[31] = 0x08850e94u; c->r[4] = c->r[4] + 0xffffb34cu; func_0880d238(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = mem_r32(ram, c->r[16] + 0x00000004u);
    c->r[2] = c->r[3] & c->r[2];
    c->r[2] = c->r[2] & 0x0080u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_08850ec0; }
    c->r[2] = 0x08a90000u;
    c->r[2] = mem_r8(ram, c->r[2] + 0xffff8cc0u);
    c->r[2] = c->r[2] + 0xffffffffu;
    c->r[1] = 0x08a90000u;
    mem_w8(ram, c->r[1] + 0xffff8cc0u, c->r[2]);
L_08850ec0:
    c->r[4] = 0x08a70000u;
    c->r[4] = c->r[4] + 0xffffb34cu;
    c->r[5] = 0u + 0u;
    c->r[6] = 0u + 0u;
    { c->r[31] = 0x08850ed8u; c->r[7] = 0u + 0u; func_089d87d4(c, ram); }
    c->r[16] = c->r[2] + 0u;
    c->r[4] = 0x08a70000u;
    { c->r[31] = 0x08850ee8u; c->r[4] = c->r[4] + 0xffffb34cu; func_0880d238(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = mem_r32(ram, c->r[16] + 0x00000004u);
    c->r[2] = c->r[3] & c->r[2];
    c->r[2] = c->r[2] & 0x0020u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_08850f14; }
    c->r[2] = 0x08a90000u;
    c->r[2] = mem_r8(ram, c->r[2] + 0xffff8cc0u);
    c->r[2] = c->r[2] + 0x00000001u;
    c->r[1] = 0x08a90000u;
    mem_w8(ram, c->r[1] + 0xffff8cc0u, c->r[2]);
L_08850f14:
    c->r[4] = 0x08a70000u;
    c->r[4] = c->r[4] + 0xffffb34cu;
    c->r[5] = 0u + 0u;
    c->r[6] = 0u + 0u;
    { c->r[31] = 0x08850f2cu; c->r[7] = 0u + 0u; func_089d87d4(c, ram); }
    c->r[16] = c->r[2] + 0u;
    c->r[4] = 0x08a70000u;
    { c->r[31] = 0x08850f3cu; c->r[4] = c->r[4] + 0xffffb34cu; func_0880d238(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = mem_r32(ram, c->r[16] + 0x00000004u);
    c->r[2] = c->r[3] & c->r[2];
    c->r[2] = c->r[2] & 0x0010u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_08850f68; }
    c->r[2] = 0x08a90000u;
    c->r[2] = mem_r8(ram, c->r[2] + 0xffff8cc1u);
    c->r[2] = c->r[2] + 0xffffffffu;
    c->r[1] = 0x08a90000u;
    mem_w8(ram, c->r[1] + 0xffff8cc1u, c->r[2]);
L_08850f68:
    c->r[4] = 0x08a70000u;
    c->r[4] = c->r[4] + 0xffffb34cu;
    c->r[5] = 0u + 0u;
    c->r[6] = 0u + 0u;
    { c->r[31] = 0x08850f80u; c->r[7] = 0u + 0u; func_089d87d4(c, ram); }
    c->r[16] = c->r[2] + 0u;
    c->r[4] = 0x08a70000u;
    { c->r[31] = 0x08850f90u; c->r[4] = c->r[4] + 0xffffb34cu; func_0880d238(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = mem_r32(ram, c->r[16] + 0x00000004u);
    c->r[2] = c->r[3] & c->r[2];
    c->r[2] = c->r[2] & 0x0040u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_08850fbc; }
    c->r[2] = 0x08a90000u;
    c->r[2] = mem_r8(ram, c->r[2] + 0xffff8cc1u);
    c->r[2] = c->r[2] + 0x00000001u;
    c->r[1] = 0x08a90000u;
    mem_w8(ram, c->r[1] + 0xffff8cc1u, c->r[2]);
L_08850fbc:
    c->r[3] = c->r[30] + 0u;
    c->r[2] = 0x08a40000u;
    c->r[2] = c->r[2] + 0x00002744u;
    c->r[4] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000000u);
    c->r[5] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000001u);
    c->r[6] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000002u);
    mem_w8(ram, c->r[3] + 0x00000000u, c->r[4]);
    mem_w8(ram, c->r[3] + 0x00000001u, c->r[5]);
    mem_w8(ram, c->r[3] + 0x00000002u, c->r[6]);
    c->r[3] = 0x08a90000u;
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[3] + 0xffff8cc1u);
    c->r[2] = 0u + 0u;
    c->r[2] = alx_max(c->r[3], c->r[2]);
    c->r[1] = 0x08a90000u;
    mem_w8(ram, c->r[1] + 0xffff8cc1u, c->r[2]);
    c->r[3] = 0x08a90000u;
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[3] + 0xffff8cc1u);
    c->r[2] = 0u + 0x00000002u;
    c->r[2] = alx_min(c->r[3], c->r[2]);
    c->r[1] = 0x08a90000u;
    mem_w8(ram, c->r[1] + 0xffff8cc1u, c->r[2]);
    c->r[3] = 0x08a90000u;
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[3] + 0xffff8cc0u);
    c->r[2] = 0u + 0u;
    c->r[2] = alx_max(c->r[3], c->r[2]);
    c->r[1] = 0x08a90000u;
    mem_w8(ram, c->r[1] + 0xffff8cc0u, c->r[2]);
    c->r[3] = 0x08a90000u;
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[3] + 0xffff8cc0u);
    c->r[2] = 0x08a90000u;
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0xffff8cc1u);
    c->r[2] = c->r[30] + c->r[2];
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000000u);
    c->r[2] = ((s32)c->r[3] < (s32)c->r[2]) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_08851064; }
    c->r[2] = 0x08a90000u;
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0xffff8cc1u);
    c->r[2] = c->r[30] + c->r[2];
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000000u);
    { mem_w8(ram, c->r[30] + 0x00000038u, c->r[2]); goto L_08851070; }
L_08851064:
    c->r[2] = 0x08a90000u;
    c->r[2] = mem_r8(ram, c->r[2] + 0xffff8cc0u);
    mem_w8(ram, c->r[30] + 0x00000038u, c->r[2]);
L_08851070:
    c->r[4] = mem_r8(ram, c->r[30] + 0x00000038u);
    c->r[1] = 0x08a90000u;
    mem_w8(ram, c->r[1] + 0xffff8cc0u, c->r[4]);
L_0885107c:
    c->r[2] = 0x08a90000u;
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0xffff8cc0u);
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]);
    c->r[2] = 0x08a90000u;
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0xffff8cc1u);
    { int _c = ((s32)c->r[2] <= 0); if (_c) goto L_088510a4; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = c->r[2] + 0x00000002u;
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]);
L_088510a4:
    c->r[2] = 0x08a90000u;
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0xffff8cc1u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000002u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_088510c4; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = c->r[2] + 0x00000003u;
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]);
L_088510c4:
    c->r[3] = 0x08a90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0xffff8c58u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_088510e0; }
    { c->r[31] = 0x088510e0u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000010u); func_0885b108(c, ram); }
L_088510e0:
    c->r[2] = 0x08a90000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0xffff8b34u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_088513c4; }
    c->r[2] = c->r[30] + 0x00000010u;
    c->r[3] = c->r[30] + 0x00000014u;
    c->r[4] = 0x08a90000u;
    c->r[4] = c->r[4] + 0xffff8e58u;
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x0885110cu; c->r[6] = c->r[3] + 0u; func_0885a660(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]);
    c->r[3] = c->r[30] + 0x00000020u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = c->r[2] + 0x00000004u;
    c->r[4] = c->r[3] + 0u;
    { c->r[31] = 0x08851128u; c->r[5] = c->r[2] + 0u; func_0885a7fc(c, ram); }
    c->r[2] = c->r[30] + 0x00000020u;
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x08851138u; c->r[5] = 0u + 0x0000000cu; func_0885abe8(c, ram); }
    c->r[2] = c->r[30] + 0x00000020u;
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0x08a90000u;
    { c->r[31] = 0x0885114cu; c->r[5] = c->r[5] + 0xffff90b4u; func_0885aa48(c, ram); }
    c->r[1] = 0x08a90000u;
    mem_w32(ram, c->r[1] + 0xffff90b8u, 0u);
L_08851154:
    c->r[2] = c->r[30] + 0x00000020u;
    { c->r[31] = 0x08851160u; c->r[4] = c->r[2] + 0u; func_0885ac4c(c, ram); }
    c->r[3] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x00000000u);
    c->r[2] = 0u + 0xffffffffu;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_08851178; }
    { goto L_0885118c; }
L_08851178:
    c->r[2] = c->r[30] + 0x00000020u;
    { c->r[31] = 0x08851184u; c->r[4] = c->r[2] + 0u; func_0885171c(c, ram); }
    { goto L_08851154; }
L_0885118c:
    c->r[2] = c->r[30] + 0x00000020u;
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x0885119cu; c->r[5] = 0u + 0x00000002u; func_0885abe8(c, ram); }
L_0885119c:
    c->r[2] = c->r[30] + 0x00000020u;
    { c->r[31] = 0x088511a8u; c->r[4] = c->r[2] + 0u; func_0885ac4c(c, ram); }
    c->r[3] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x00000000u);
    c->r[2] = 0u + 0xffffffffu;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_088511c0; }
    { goto L_088511d4; }
L_088511c0:
    c->r[2] = c->r[30] + 0x00000020u;
    { c->r[31] = 0x088511ccu; c->r[4] = c->r[2] + 0u; func_088521e0(c, ram); }
    { goto L_0885119c; }
L_088511d4:
    c->r[2] = 0x08a90000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0xffff8cd0u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_08851208; }
    c->r[4] = 0u + 0x00000001u;
    c->r[5] = 0u + 0x00001000u;
    c->r[6] = 0x08850000u;
    c->r[6] = c->r[6] + 0x00003c34u;
    c->r[7] = 0u + 0u;
    { c->r[31] = 0x08851200u; c->r[8] = 0u + 0u; func_089c6b7c(c, ram); }
    c->r[1] = 0x08a90000u;
    mem_w32(ram, c->r[1] + 0xffff8cd0u, c->r[2]);
L_08851208:
    c->r[3] = 0x08a90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0xffff8c58u);
    c->r[2] = 0u + 0x00000008u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_088512bc; }
    c->r[1] = 0x08a90000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0xffff8c74u);
    c->f[0] = u2f(0u);
    alx_c_cond_s(c, 14, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_08851240; }
    { goto L_088512a8; }
L_08851240:
    mem_w32(ram, c->r[30] + 0x00000030u, 0u);
L_08851244:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000030u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000100u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_0885125c; }
    { goto L_088512a0; }
L_0885125c:
    c->r[4] = 0u + 0u;
    { c->r[31] = 0x08851268u; c->r[5] = 0u + 0x00000008u; func_0883a204(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000034u, c->r[2]);
    c->r[3] = 0x08a90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0xffff8c5cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000034u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_08851290; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000034u);
    c->r[1] = 0x08a90000u;
    { mem_w32(ram, c->r[1] + 0xffff8c5cu, c->r[2]); goto L_088512a0; }
L_08851290:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000030u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000030u, c->r[2]); goto L_08851244; }
L_088512a0:
    { c->r[31] = 0x088512a8u; func_0885b09c(c, ram); }
L_088512a8:
    c->r[4] = 0x08a90000u;
    { c->r[31] = 0x088512b4u; c->r[4] = mem_r32(ram, c->r[4] + 0xffff8c5cu); func_08854954(c, ram); }
    { goto L_088512c8; }
L_088512bc:
    c->r[4] = 0x08a90000u;
    { c->r[31] = 0x088512c8u; c->r[4] = mem_r32(ram, c->r[4] + 0xffff8c58u); func_08854954(c, ram); }
L_088512c8:
    c->r[1] = 0x08a90000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0xffff8c74u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x0000274cu);
    c->f[0] = c->f[1] - c->f[0];
    c->r[1] = 0x08a90000u;
    mem_wf32(ram, c->r[1] + 0xffff8c74u, c->f[0]);
    c->r[2] = 0x08a90000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0xffff8c78u);
    c->r[2] = c->r[2] + 0x00000001u;
    c->r[1] = 0x08a90000u;
    mem_w32(ram, c->r[1] + 0xffff8c78u, c->r[2]);
    c->r[2] = 0x08a90000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0xffff8b38u);
    c->r[3] = c->r[2] + 0xffffff9cu;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = (c->r[2] < c->r[3]) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_0885134c; }
    c->r[2] = 0x08a90000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0xffff8c70u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_0885134c; }
    c->r[2] = 0u + 0x00000001u;
    c->r[1] = 0x08a90000u;
    mem_w32(ram, c->r[1] + 0xffff8c70u, c->r[2]);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00002748u);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00003c30u;
    c->r[5] = 0u + 0x00000001u;
    { c->r[31] = 0x0885134cu; c->f[12] = c->f[0]; func_089b3514(c, ram); }
L_0885134c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[3] = 0x08a90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0xffff8b38u);
    c->r[2] = (c->r[2] < c->r[3]) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_08851380; }
    { c->r[31] = 0x0885136cu; c->r[4] = 0u + 0u; func_088509f8(c, ram); }
    c->r[4] = 0x08a90000u;
    c->r[4] = mem_r32(ram, c->r[4] + 0xffff8c6cu);
    c->r[5] = 0u + 0u;
    { c->r[31] = 0x08851380u; c->r[6] = 0u + 0x00000001u; func_08850614(c, ram); }
L_08851380:
    c->r[2] = 0x08a90000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0xffff8cc8u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_088513bc; }
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x0885139cu; c->r[4] = c->r[4] + 0x00003c30u; func_089b3824(c, ram); }
    c->r[2] = c->r[2] & 0x0004u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_088513bc; }
    { c->r[31] = 0x088513b0u; c->r[4] = 0u + 0x00000001u; func_088509f8(c, ram); }
    c->r[2] = 0u + 0x00000001u;
    c->r[1] = 0x08a90000u;
    mem_w32(ram, c->r[1] + 0xffff8cccu, c->r[2]);
L_088513bc:
    { c->r[31] = 0x088513c4u; c->r[4] = 0u + 0u; hle_dispatch_stub(c, ram, 0x08a24d1cu); /* sceKernelPowerTick */ }
L_088513c4:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000048u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000044u);
    c->r[16] = mem_r32(ram, c->r[29] + 0x00000040u);
    { c->r[29] = c->r[29] + 0x00000050u; return; }
    return; /* fell out of func_08850c64 */
}

/* func_08857638  0x08857638..0x08857860  552 bytes, source=sweep */
void func_08857638(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08857638u);
    c->r[29] = c->r[29] + 0xffffff70u;
    mem_w32(ram, c->r[29] + 0x00000084u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000080u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[6]);
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[7]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x0000008cu);
    c->r[2] = 0x00800000u;
    c->r[2] = c->r[3] & c->r[2];
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    mem_w32(ram, c->r[30] + 0x00000070u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000070u);
    c->r[2] = ((s32)c->r[3] < (s32)0x00000005u) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_088576ac; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000070u);
    c->r[2] = ((s32)c->r[3] < (s32)0x00000003u) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_08857718; }
    c->r[2] = 0u + 0x00000001u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000070u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_088576c4; }
    { goto L_0885776c; }
L_088576ac:
    c->r[2] = 0u + 0x00000006u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000070u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_088576c4; }
    { goto L_0885776c; }
L_088576c4:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[3] = c->r[2] + 0x00000020u;
    c->r[2] = mem_r32(ram, c->r[3] + 0x00000000u);
    mem_w32(ram, c->r[4] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[3] + 0x00000004u);
    mem_w32(ram, c->r[4] + 0x00000004u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[3] + 0x00000008u);
    mem_w32(ram, c->r[4] + 0x00000008u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[3] + 0x0000000cu);
    mem_w32(ram, c->r[4] + 0x0000000cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    mem_w32(ram, c->r[2] + 0x00000000u, 0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_0885784c; }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000008u);
    { c->r[31] = 0x08857710u; c->r[5] = 0u + 0x00000020u; func_0884d1ec(c, ram); }
    { goto L_0885784c; }
L_08857718:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[3] = c->r[2] + 0x00000020u;
    c->r[2] = mem_r32(ram, c->r[3] + 0x00000000u);
    mem_w32(ram, c->r[4] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[3] + 0x00000004u);
    mem_w32(ram, c->r[4] + 0x00000004u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[3] + 0x00000008u);
    mem_w32(ram, c->r[4] + 0x00000008u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[3] + 0x0000000cu);
    mem_w32(ram, c->r[4] + 0x0000000cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    mem_w32(ram, c->r[2] + 0x00000000u, 0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_0885784c; }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000008u);
    { c->r[31] = 0x08857764u; c->r[5] = 0u + 0x00000020u; func_0884d1b0(c, ram); }
    { goto L_0885784c; }
L_0885776c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[3] = mem_r16(ram, c->r[2] + 0x000000a8u);
    c->r[2] = 0u + 0x0000006cu;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[3] = c->lo;
    c->r[2] = 0x08a70000u;
    c->r[2] = c->r[2] + 0xffffb688u;
    c->r[2] = c->r[3] + c->r[2];
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
    { c->r[31] = 0x08857798u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000014u); func_08820d48(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]);
    c->r[2] = c->r[30] + 0x00000020u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[6] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[4] = c->r[2] + 0u;
    c->f[12] = mem_rf32(ram, c->r[3] + 0x00000010u);
    c->f[13] = mem_rf32(ram, c->r[5] + 0x00000014u);
    c->f[14] = mem_rf32(ram, c->r[6] + 0x00000018u);
    c->f[15] = u2f(0u);
    { c->r[31] = 0x088577c8u; func_0880d140(c, ram); }
    c->r[2] = c->r[30] + 0x00000030u;
    { c->r[31] = 0x088577d4u; c->r[4] = c->r[2] + 0u; func_08808260(c, ram); }
    c->r[3] = c->r[30] + 0x00000030u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[2] + 0x00000040u;
    c->r[4] = c->r[3] + 0u;
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x088577f0u; c->r[6] = 0u + 0u; func_0885a194(c, ram); }
    c->r[2] = c->r[30] + 0x00000020u;
    c->r[3] = c->r[30] + 0x00000020u;
    c->r[6] = c->r[30] + 0x00000030u;
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x08857808u; c->r[5] = c->r[3] + 0u; func_0884c26c(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[2] + 0x00000020u;
    c->r[3] = c->r[30] + 0x00000020u;
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x08857824u; c->r[6] = c->r[3] + 0u; func_08859fd4(c, ram); }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x0000001cu);
    mem_wf32(ram, c->r[3] + 0x00000000u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_0885784c; }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000008u);
    { c->r[31] = 0x0885784cu; c->r[5] = 0u + 0x00000020u; func_0884d1b0(c, ram); }
L_0885784c:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000084u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000080u);
    { c->r[29] = c->r[29] + 0x00000090u; return; }
    return; /* fell out of func_08857638 */
}

/* func_0885a0b8  0x0885a0b8..0x0885a194  220 bytes, source=sweep */
void func_0885a0b8(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0885a0b8u);
    c->r[29] = c->r[29] + 0xffffffd0u;
    mem_w32(ram, c->r[29] + 0x00000024u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000020u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_wf32(ram, c->r[30] + 0x00000004u, c->f[12]);
    mem_wf32(ram, c->r[30] + 0x00000008u, c->f[13]);
    mem_wf32(ram, c->r[30] + 0x0000000cu, c->f[14]);
    c->r[2] = c->r[30] + 0x00000010u;
    c->r[4] = c->r[2] + 0u;
    c->f[12] = mem_rf32(ram, c->r[30] + 0x00000008u);
    c->f[13] = mem_rf32(ram, c->r[30] + 0x00000004u);
    c->f[14] = mem_rf32(ram, c->r[30] + 0x0000000cu);
    c->f[15] = u2f(0u);
    { c->r[31] = 0x0885a0f8u; func_0880d140(c, ram); }
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00002df0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[8] = f2u(c->f[0]);
    vfpu_exec(c, ram, 0x48e80007u); /* mtv */
    vfpu_exec(c, ram, 0xdbd80010u); /* lv.q */
    vfpu_exec(c, ram, 0x65079884u); /* vscl.q */
    vfpu_exec(c, ram, 0xd0120405u); /* vsin.s */
    vfpu_exec(c, ram, 0xd0130406u); /* vcos.s */
    vfpu_exec(c, ram, 0xd0122425u); /* vsin.s */
    vfpu_exec(c, ram, 0xd0132426u); /* vcos.s */
    vfpu_exec(c, ram, 0xd0124445u); /* vsin.s */
    vfpu_exec(c, ram, 0xd0134446u); /* vcos.s */
    vfpu_exec(c, ram, 0xf38380b0u); /* vmidt.q */
    vfpu_exec(c, ram, 0xf38380a8u); /* vmidt.q */
    vfpu_exec(c, ram, 0xf38380acu); /* vmidt.q */
    vfpu_exec(c, ram, 0xd0004610u); /* vmov.s */
    vfpu_exec(c, ram, 0xd0004530u); /* vmov.s */
    vfpu_exec(c, ram, 0xd0024511u); /* vneg.s */
    vfpu_exec(c, ram, 0xd0004631u); /* vmov.s */
    vfpu_exec(c, ram, 0xd0000629u); /* vmov.s */
    vfpu_exec(c, ram, 0xd0000549u); /* vmov.s */
    vfpu_exec(c, ram, 0xd002052au); /* vneg.s */
    vfpu_exec(c, ram, 0xd000064au); /* vmov.s */
    vfpu_exec(c, ram, 0xd000260cu); /* vmov.s */
    vfpu_exec(c, ram, 0xd002254cu); /* vneg.s */
    vfpu_exec(c, ram, 0xd000250eu); /* vmov.s */
    vfpu_exec(c, ram, 0xd000264eu); /* vmov.s */
    vfpu_exec(c, ram, 0xf02890b4u); /* vmmul.q */
    vfpu_exec(c, ram, 0xf02c94a0u); /* vmmul.q */
    vfpu_exec(c, ram, 0xf8400000u); /* sv.q */
    vfpu_exec(c, ram, 0xf8410010u); /* sv.q */
    vfpu_exec(c, ram, 0xf8420020u); /* sv.q */
    vfpu_exec(c, ram, 0xf8430030u); /* sv.q */
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000024u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000020u);
    { c->r[29] = c->r[29] + 0x00000030u; return; }
    return; /* fell out of func_0885a0b8 */
}

/* func_0885aca8  0x0885aca8..0x0885adb8  272 bytes, source=sweep */
void func_0885aca8(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0885aca8u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[6]);
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[7]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000000u);
    mem_wf32(ram, c->r[3] + 0x00000000u, c->f[0]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000004u);
    mem_wf32(ram, c->r[3] + 0x00000004u, c->f[0]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000008u);
    mem_wf32(ram, c->r[3] + 0x00000008u, c->f[0]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000000u);
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    c->r[2] = f2u(c->f[0]);
    mem_w16(ram, c->r[3] + 0x0000000cu, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000004u);
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    c->r[2] = f2u(c->f[0]);
    mem_w16(ram, c->r[3] + 0x0000000eu, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000008u);
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    c->r[2] = f2u(c->f[0]);
    mem_w16(ram, c->r[3] + 0x00000010u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000000u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00002df8u);
    c->f[0] = c->f[1] * c->f[0];
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    c->r[2] = f2u(c->f[0]);
    mem_w16(ram, c->r[3] + 0x00000012u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000004u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00002df8u);
    c->f[0] = c->f[1] * c->f[0];
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    c->r[2] = f2u(c->f[0]);
    mem_w16(ram, c->r[3] + 0x00000014u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000008u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00002df8u);
    c->f[0] = c->f[1] * c->f[0];
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    c->r[2] = f2u(c->f[0]);
    mem_w16(ram, c->r[3] + 0x00000016u, c->r[2]);
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_0885aca8 */
}

/* func_0885da1c  0x0885da1c..0x0885f400  6628 bytes, source=fde */
void func_0885da1c(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0885da1cu);
L_0885da1c:
    c->r[29] = c->r[29] + 0xfffffed0u;
    mem_w32(ram, c->r[29] + 0x0000012cu, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000128u, c->r[30]);
    mem_w32(ram, c->r[29] + 0x00000124u, c->r[17]);
    mem_w32(ram, c->r[29] + 0x00000120u, c->r[16]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[2] = c->r[5] + 0u;
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[6]);
    mem_w8(ram, c->r[30] + 0x00000004u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x000000e0u;
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
    c->r[2] = mem_r8(ram, c->r[30] + 0x00000004u);
    mem_w32(ram, c->r[30] + 0x0000011cu, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000011cu);
    c->r[2] = (c->r[3] < 0x00000022u) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_0885f3e4; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000011cu);
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08a40000u;
    c->r[2] = c->r[2] + 0x00002e48u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    { u32 _t = c->r[2]; switch (_t) { case 0x0885da1cu: goto L_0885da1c; case 0x0885da88u: goto L_0885da88; case 0x0885db9cu: goto L_0885db9c; case 0x0885e638u: goto L_0885e638; case 0x0885e680u: goto L_0885e680; case 0x0885e6f8u: goto L_0885e6f8; case 0x0885f3e4u: goto L_0885f3e4; default: recomp_trap_unknown_indirect(c, ram, 0x0885da80u, _t); return; } }
L_0885da88:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000010u);
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    mem_w32(ram, c->r[3] + 0x0000001cu, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = c->r[2] + 0x00000004u;
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000000u);
    mem_w8(ram, c->r[3] + 0x0000002du, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = c->r[2] + 0x00000008u;
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000000u);
    mem_w8(ram, c->r[3] + 0x0000002eu, c->r[2]);
    c->r[16] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[4] = 0x08a90000u;
    { c->r[31] = 0x0885dadcu; c->r[4] = c->r[4] + 0xffff9720u; func_0885d4e8(c, ram); }
    mem_w32(ram, c->r[16] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_0885db04; }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x0885dafcu; c->r[5] = 0u + 0x00000002u; func_0880d260(c, ram); }
    { goto L_0885f3e4; }
L_0885db04:
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    mem_w32(ram, c->r[3] + 0x00000004u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    mem_w32(ram, c->r[3] + 0x00000008u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    mem_w32(ram, c->r[2] + 0x00000018u, 0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    mem_w32(ram, c->r[2] + 0x0000000cu, 0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    mem_w32(ram, c->r[2] + 0x00000014u, 0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    mem_w32(ram, c->r[2] + 0x00000010u, 0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x00000024u;
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0u + 0u;
    { c->r[31] = 0x0885db5cu; c->r[6] = 0u + 0x00000008u; func_08a19ec4(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[4] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[5] = 0u + 0u;
    { c->r[31] = 0x0885db70u; c->r[6] = 0u + 0x00000780u; func_08a19ec4(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    mem_w8(ram, c->r[2] + 0x0000002cu, 0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = mem_r32(ram, c->r[2] + 0x0000001cu);
    c->r[2] = 0u + 0x00000100u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_0885f3e4; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[1] = 0x08a90000u;
    { mem_w32(ram, c->r[1] + 0xffffb870u, c->r[2]); goto L_0885f3e4; }
L_0885db9c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[4] = 0x08a90000u;
    c->r[4] = c->r[4] + 0xffff9720u;
    { c->r[31] = 0x0885dbb0u; c->r[5] = mem_r32(ram, c->r[2] + 0x0000001cu); func_08862c2c(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x00000024u;
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x0885dbc8u; c->r[5] = c->r[3] + 0u; func_08862788(c, ram); }
    mem_w8(ram, c->r[30] + 0x00000014u, c->r[2]);
    c->r[2] = mem_r8(ram, c->r[30] + 0x00000014u);
    c->r[2] = c->r[2] & 0x000fu;
    { int _c = (c->r[2] == 0u); if (_c) goto L_0885e3a8; }
    c->r[3] = c->r[30] + 0x00000020u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000004u);
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x00000000u);
    c->f[0] = u2f(c->r[2]);
    c->f[1] = (f32)(s32)f2u(c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000004u);
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x00000002u);
    c->f[0] = u2f(c->r[2]);
    c->f[2] = (f32)(s32)f2u(c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000004u);
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x00000004u);
    c->f[0] = u2f(c->r[2]);
    c->f[0] = (f32)(s32)f2u(c->f[0]);
    c->r[4] = c->r[3] + 0u;
    c->f[12] = c->f[1];
    c->f[13] = c->f[2];
    c->f[14] = c->f[0];
    c->f[15] = u2f(0u);
    { c->r[31] = 0x0885dc38u; func_0880d140(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[16] = c->r[2] + 0x00000024u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[4] = 0x08a90000u;
    c->r[4] = c->r[4] + 0xffff9720u;
    { c->r[31] = 0x0885dc54u; c->r[5] = mem_r32(ram, c->r[2] + 0x0000001cu); func_08862c2c(c, ram); }
    c->r[3] = c->r[16] + 0u;
    c->r[4] = mem_lwl(ram, c->r[2] + 0x00000003u, c->r[4]);
    c->r[4] = mem_lwr(ram, c->r[2] + 0x00000000u, c->r[4]);
    c->r[5] = mem_lwl(ram, c->r[2] + 0x00000007u, c->r[5]);
    c->r[5] = mem_lwr(ram, c->r[2] + 0x00000004u, c->r[5]);
    mem_swl(ram, c->r[3] + 0x00000003u, c->r[4]);
    mem_swr(ram, c->r[3] + 0x00000000u, c->r[4]);
    mem_swl(ram, c->r[3] + 0x00000007u, c->r[5]);
    mem_swr(ram, c->r[3] + 0x00000004u, c->r[5]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000008u);
    mem_w16(ram, c->r[2] + 0x0000000cu, 0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000008u);
    mem_w16(ram, c->r[2] + 0x0000000eu, 0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = mem_r32(ram, c->r[2] + 0x00000008u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r16(ram, c->r[2] + 0x00000024u);
    mem_w16(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = mem_r32(ram, c->r[2] + 0x00000008u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r16(ram, c->r[2] + 0x00000026u);
    mem_w16(ram, c->r[3] + 0x00000002u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = mem_r32(ram, c->r[2] + 0x00000008u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r16(ram, c->r[2] + 0x00000028u);
    mem_w16(ram, c->r[3] + 0x00000004u, c->r[2]);
    c->r[3] = c->r[30] + 0x00000030u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000008u);
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x00000000u);
    c->f[0] = u2f(c->r[2]);
    c->f[1] = (f32)(s32)f2u(c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000008u);
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x00000002u);
    c->f[0] = u2f(c->r[2]);
    c->f[2] = (f32)(s32)f2u(c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000008u);
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x00000004u);
    c->f[0] = u2f(c->r[2]);
    c->f[0] = (f32)(s32)f2u(c->f[0]);
    c->r[4] = c->r[3] + 0u;
    c->f[12] = c->f[1];
    c->f[13] = c->f[2];
    c->f[14] = c->f[0];
    c->f[15] = u2f(0u);
    { c->r[31] = 0x0885dd28u; func_0880d140(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = c->r[2] + 0x00000020u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000030u);
    mem_w32(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000034u);
    mem_w32(ram, c->r[3] + 0x00000004u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000038u);
    mem_w32(ram, c->r[3] + 0x00000008u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000003cu);
    mem_w32(ram, c->r[3] + 0x0000000cu, c->r[2]);
    c->r[2] = mem_r8(ram, c->r[30] + 0x00000014u);
    c->r[2] = c->r[2] & 0x0008u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_0885e034; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x00000024u;
    { c->r[31] = 0x0885dd70u; c->r[4] = c->r[2] + 0u; func_08862594(c, ram); }
    mem_wf32(ram, c->r[30] + 0x00000040u, c->f[0]);
    c->r[2] = c->r[30] + 0x00000050u;
    { c->r[31] = 0x0885dd80u; c->r[4] = c->r[2] + 0u; func_08808260(c, ram); }
    c->r[2] = c->r[30] + 0x00000050u;
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x0885dd90u; c->f[12] = mem_rf32(ram, c->r[30] + 0x00000040u); func_0884c858(c, ram); }
    c->r[2] = c->r[30] + 0x00000050u;
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000008u);
    mem_w16(ram, c->r[2] + 0x0000000cu, 0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000008u);
    mem_w16(ram, c->r[2] + 0x0000000eu, 0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[5] = mem_r32(ram, c->r[2] + 0x00000008u);
    c->r[4] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = c->r[2] + 0x00000020u;
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000000u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00002e18u);
    c->f[0] = c->f[1] * c->f[0];
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    c->r[3] = f2u(c->f[0]);
    c->r[2] = mem_r16(ram, c->r[4] + 0x00000024u);
    c->r[2] = c->r[2] + c->r[3];
    mem_w16(ram, c->r[5] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[5] = mem_r32(ram, c->r[2] + 0x00000008u);
    c->r[4] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = c->r[2] + 0x00000020u;
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000004u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00002e18u);
    c->f[0] = c->f[1] * c->f[0];
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    c->r[3] = f2u(c->f[0]);
    c->r[2] = mem_r16(ram, c->r[4] + 0x00000026u);
    c->r[2] = c->r[2] + c->r[3];
    mem_w16(ram, c->r[5] + 0x00000002u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[5] = mem_r32(ram, c->r[2] + 0x00000008u);
    c->r[4] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = c->r[2] + 0x00000020u;
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000008u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00002e18u);
    c->f[0] = c->f[1] * c->f[0];
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    c->r[3] = f2u(c->f[0]);
    c->r[2] = mem_r16(ram, c->r[4] + 0x00000028u);
    c->r[2] = c->r[2] + c->r[3];
    mem_w16(ram, c->r[5] + 0x00000004u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = mem_r32(ram, c->r[2] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000000u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00002e1cu);
    c->f[0] = c->f[1] * c->f[0];
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    c->r[2] = f2u(c->f[0]);
    mem_w16(ram, c->r[3] + 0x00000006u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = mem_r32(ram, c->r[2] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000004u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00002e1cu);
    c->f[0] = c->f[1] * c->f[0];
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    c->r[4] = f2u(c->f[0]);
    mem_w16(ram, c->r[3] + 0x00000008u, c->r[4]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = mem_r32(ram, c->r[2] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000008u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00002e1cu);
    c->f[0] = c->f[1] * c->f[0];
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    c->r[5] = f2u(c->f[0]);
    mem_w16(ram, c->r[3] + 0x0000000au, c->r[5]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000008u);
    c->r[2] = c->r[2] + 0x00000010u;
    mem_w32(ram, c->r[3] + 0x00000008u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000014u);
    c->r[2] = c->r[2] + 0x00000001u;
    mem_w32(ram, c->r[3] + 0x00000014u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = mem_r32(ram, c->r[2] + 0x00000008u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r16(ram, c->r[2] + 0x00000024u);
    mem_w16(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = mem_r32(ram, c->r[2] + 0x00000008u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r16(ram, c->r[2] + 0x00000026u);
    mem_w16(ram, c->r[3] + 0x00000002u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = mem_r32(ram, c->r[2] + 0x00000008u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r16(ram, c->r[2] + 0x00000028u);
    mem_w16(ram, c->r[3] + 0x00000004u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = mem_r32(ram, c->r[2] + 0x00000008u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000000u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00002e1cu);
    c->f[0] = c->f[1] * c->f[0];
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    c->r[6] = f2u(c->f[0]);
    mem_w16(ram, c->r[3] + 0x00000006u, c->r[6]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = mem_r32(ram, c->r[2] + 0x00000008u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000004u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00002e1cu);
    c->f[0] = c->f[1] * c->f[0];
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    c->r[7] = f2u(c->f[0]);
    mem_w16(ram, c->r[3] + 0x00000008u, c->r[7]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = mem_r32(ram, c->r[2] + 0x00000008u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000008u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00002e1cu);
    c->f[0] = c->f[1] * c->f[0];
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    c->r[2] = f2u(c->f[0]);
    mem_w16(ram, c->r[3] + 0x0000000au, c->r[2]);
    c->r[3] = c->r[30] + 0x00000090u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000008u);
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x00000000u);
    c->f[0] = u2f(c->r[2]);
    c->f[1] = (f32)(s32)f2u(c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000008u);
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x00000002u);
    c->f[0] = u2f(c->r[2]);
    c->f[2] = (f32)(s32)f2u(c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000008u);
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x00000004u);
    c->f[0] = u2f(c->r[2]);
    c->f[0] = (f32)(s32)f2u(c->f[0]);
    c->r[4] = c->r[3] + 0u;
    c->f[12] = c->f[1];
    c->f[13] = c->f[2];
    c->f[14] = c->f[0];
    c->f[15] = u2f(0u);
    { c->r[31] = 0x0885e008u; func_0880d140(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = c->r[2] + 0x00000020u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000090u);
    mem_w32(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000094u);
    mem_w32(ram, c->r[3] + 0x00000004u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000098u);
    mem_w32(ram, c->r[3] + 0x00000008u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000009cu);
    { mem_w32(ram, c->r[3] + 0x0000000cu, c->r[2]); goto L_0885e2dc; }
L_0885e034:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x0000002cu);
    c->r[2] = 0u + 0x00000001u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_0885e2dc; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x00000024u;
    { c->r[31] = 0x0885e058u; c->r[4] = c->r[2] + 0u; func_08862594(c, ram); }
    mem_wf32(ram, c->r[30] + 0x00000040u, c->f[0]);
    c->r[2] = c->r[30] + 0x00000050u;
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00002e20u);
    c->r[4] = c->r[2] + 0u;
    c->f[12] = u2f(0u);
    c->f[13] = c->f[0];
    c->f[14] = u2f(0u);
    c->f[15] = u2f(0u);
    { c->r[31] = 0x0885e084u; func_0880d140(c, ram); }
    c->r[2] = c->r[30] + 0x00000060u;
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00002e20u);
    c->r[4] = c->r[2] + 0u;
    c->f[12] = c->f[0];
    c->f[13] = u2f(0u);
    c->f[14] = u2f(0u);
    c->f[15] = u2f(0u);
    { c->r[31] = 0x0885e0acu; func_0880d140(c, ram); }
    c->r[2] = c->r[30] + 0x00000070u;
    { c->r[31] = 0x0885e0b8u; c->r[4] = c->r[2] + 0u; func_08808240(c, ram); }
    c->r[2] = c->r[30] + 0x00000070u;
    c->r[3] = c->r[30] + 0x00000030u;
    c->r[6] = c->r[30] + 0x00000020u;
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x0885e0d0u; c->r[5] = c->r[3] + 0u; func_08820ca4(c, ram); }
    c->r[2] = c->r[30] + 0x00000070u;
    c->r[3] = c->r[30] + 0x00000070u;
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x0885e0e4u; c->r[5] = c->r[3] + 0u; func_0884c1d8(c, ram); }
    c->r[2] = c->r[30] + 0x00000070u;
    c->r[3] = c->r[30] + 0x00000050u;
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x0885e0f8u; c->r[5] = c->r[3] + 0u; func_0885a018(c, ram); }
    mem_wf32(ram, c->r[30] + 0x000000a0u, c->f[0]);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x000000a0u);
    c->f[1] = (f32)fabsf(c->f[0]);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00002e20u);
    alx_c_cond_s(c, 12, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_0885e124; }
    { goto L_0885e13c; }
L_0885e124:
    c->r[2] = c->r[30] + 0x00000060u;
    c->r[3] = c->r[30] + 0x00000070u;
    c->r[6] = c->r[30] + 0x00000050u;
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x0885e13cu; c->r[5] = c->r[3] + 0u; func_0884d26c(c, ram); }
L_0885e13c:
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00002e20u);
    mem_wf32(ram, c->r[30] + 0x0000006cu, c->f[0]);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000040u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00002e24u);
    c->f[0] = c->f[1] * c->f[0];
    { c->r[31] = 0x0885e160u; c->f[12] = c->f[0]; func_08a0f5bc(c, ram); }
    mem_wf32(ram, c->r[30] + 0x000000a4u, c->f[0]);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000040u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00002e24u);
    c->f[0] = c->f[1] * c->f[0];
    { c->r[31] = 0x0885e17cu; c->f[12] = c->f[0]; func_08a0f760(c, ram); }
    mem_wf32(ram, c->r[30] + 0x000000a8u, c->f[0]);
    c->r[2] = c->r[30] + 0x00000080u;
    { c->r[31] = 0x0885e18cu; c->r[4] = c->r[2] + 0u; func_08808240(c, ram); }
    c->r[2] = c->r[30] + 0x00000090u;
    c->r[3] = c->r[30] + 0x00000070u;
    c->r[4] = c->r[2] + 0u;
    c->r[5] = c->r[3] + 0u;
    { c->r[31] = 0x0885e1a4u; c->f[12] = mem_rf32(ram, c->r[30] + 0x000000a8u); func_0884c120(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000090u);
    mem_w32(ram, c->r[30] + 0x00000080u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000094u);
    mem_w32(ram, c->r[30] + 0x00000084u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000098u);
    mem_w32(ram, c->r[30] + 0x00000088u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000009cu);
    mem_w32(ram, c->r[30] + 0x0000008cu, c->r[2]);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x000000a4u);
    mem_wf32(ram, c->r[30] + 0x0000008cu, c->f[0]);
    c->r[2] = c->r[30] + 0x000000b0u;
    { c->r[31] = 0x0885e1d8u; c->r[4] = c->r[2] + 0u; func_08808260(c, ram); }
    c->r[2] = c->r[30] + 0x000000b0u;
    c->r[3] = c->r[30] + 0x00000080u;
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x0885e1ecu; c->r[5] = c->r[3] + 0u; func_0884c73c(c, ram); }
    c->r[2] = c->r[30] + 0x00000060u;
    c->r[3] = c->r[30] + 0x00000060u;
    c->r[6] = c->r[30] + 0x000000b0u;
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x0885e204u; c->r[5] = c->r[3] + 0u; func_0884c26c(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000008u);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000060u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00002e1cu);
    c->f[0] = c->f[1] * c->f[0];
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    c->r[3] = f2u(c->f[0]);
    mem_w16(ram, c->r[2] + 0x00000006u, c->r[3]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000008u);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000064u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00002e1cu);
    c->f[0] = c->f[1] * c->f[0];
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    c->r[4] = f2u(c->f[0]);
    mem_w16(ram, c->r[2] + 0x00000008u, c->r[4]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000008u);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000068u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00002e1cu);
    c->f[0] = c->f[1] * c->f[0];
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    c->r[5] = f2u(c->f[0]);
    mem_w16(ram, c->r[2] + 0x0000000au, c->r[5]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000004u);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000060u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00002e1cu);
    c->f[0] = c->f[1] * c->f[0];
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    c->r[6] = f2u(c->f[0]);
    mem_w16(ram, c->r[2] + 0x00000006u, c->r[6]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000004u);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000064u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00002e1cu);
    c->f[0] = c->f[1] * c->f[0];
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    c->r[7] = f2u(c->f[0]);
    mem_w16(ram, c->r[2] + 0x00000008u, c->r[7]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000004u);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000068u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00002e1cu);
    c->f[0] = c->f[1] * c->f[0];
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    c->r[3] = f2u(c->f[0]);
    mem_w16(ram, c->r[2] + 0x0000000au, c->r[3]);
L_0885e2dc:
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0u + 0x00000001u;
    mem_w8(ram, c->r[3] + 0x0000002cu, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x00000001u;
    mem_w32(ram, c->r[3] + 0x0000000cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000000cu);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000079u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_0885e31c; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0u + 0x00000078u;
    mem_w32(ram, c->r[3] + 0x0000000cu, c->r[2]);
L_0885e31c:
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000018u);
    c->r[2] = c->r[2] + 0x00000001u;
    mem_w32(ram, c->r[3] + 0x00000018u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000008u);
    mem_w32(ram, c->r[3] + 0x00000004u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000014u);
    mem_w32(ram, c->r[3] + 0x00000010u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000008u);
    c->r[2] = c->r[2] + 0x00000010u;
    mem_w32(ram, c->r[3] + 0x00000008u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000014u);
    c->r[2] = c->r[2] + 0x00000001u;
    mem_w32(ram, c->r[3] + 0x00000014u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000014u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000078u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_0885e3c4; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    mem_w32(ram, c->r[3] + 0x00000008u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    { mem_w32(ram, c->r[2] + 0x00000014u, 0u); goto L_0885e3c4; }
L_0885e3a8:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = mem_r32(ram, c->r[2] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000004u);
    c->r[2] = mem_r16(ram, c->r[2] + 0x0000000eu);
    c->r[2] = c->r[2] + 0x00000001u;
    mem_w16(ram, c->r[3] + 0x0000000eu, c->r[2]);
L_0885e3c4:
    c->r[2] = mem_r8(ram, c->r[30] + 0x00000014u);
    c->r[2] = c->r[2] & 0x0010u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_0885e5b0; }
    c->r[16] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[4] = 0x08a90000u;
    c->r[4] = c->r[4] + 0xffff9720u;
    { c->r[31] = 0x0885e3ecu; c->r[5] = mem_r32(ram, c->r[2] + 0x0000001cu); func_08862c2c(c, ram); }
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000007u);
    mem_w8(ram, c->r[16] + 0x0000002bu, c->r[2]);
    c->r[16] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[4] = 0x08a90000u;
    c->r[4] = c->r[4] + 0xffff9720u;
    { c->r[31] = 0x0885e40cu; c->r[5] = mem_r32(ram, c->r[2] + 0x0000001cu); func_08862c2c(c, ram); }
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000006u);
    mem_w8(ram, c->r[16] + 0x0000002au, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r8(ram, c->r[2] + 0x0000002bu);
    c->r[2] = c->r[2] & 0x0003u;
    mem_w8(ram, c->r[30] + 0x000000f0u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x0000002du);
    { int _c = (c->r[2] != 0u); if (_c) goto L_0885e494; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0xffff0000u;
    mem_w32(ram, c->r[3] + 0x00000020u, c->r[2]);
    c->r[4] = mem_r8(ram, c->r[30] + 0x000000f0u);
    mem_w32(ram, c->r[30] + 0x00000110u, c->r[4]);
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000110u);
    { int _c = (c->r[5] == 0u); if (_c) goto L_0885e480; }
    c->r[2] = 0u + 0x00000001u;
    c->r[6] = mem_r32(ram, c->r[30] + 0x00000110u);
    { int _c = (c->r[6] == c->r[2]); if (_c) goto L_0885e46c; }
    { goto L_0885e560; }
L_0885e46c:
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0xff000000u;
    c->r[2] = c->r[2] | 0x00ffu;
    { mem_w32(ram, c->r[3] + 0x00000020u, c->r[2]); goto L_0885e560; }
L_0885e480:
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0xffff0000u;
    c->r[2] = c->r[2] | 0x7f7fu;
    { mem_w32(ram, c->r[3] + 0x00000020u, c->r[2]); goto L_0885e560; }
L_0885e494:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x0000002eu);
    { int _c = (c->r[2] != 0u); if (_c) goto L_0885e504; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0xff000000u;
    c->r[2] = c->r[2] | 0x00ffu;
    mem_w32(ram, c->r[3] + 0x00000020u, c->r[2]);
    c->r[7] = mem_r8(ram, c->r[30] + 0x000000f0u);
    mem_w32(ram, c->r[30] + 0x00000114u, c->r[7]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000114u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_0885e4f0; }
    c->r[2] = 0u + 0x00000001u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000114u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_0885e4e0; }
    { goto L_0885e560; }
L_0885e4e0:
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0xffff0000u;
    { mem_w32(ram, c->r[3] + 0x00000020u, c->r[2]); goto L_0885e560; }
L_0885e4f0:
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0xff7f0000u;
    c->r[2] = c->r[2] | 0x7fffu;
    { mem_w32(ram, c->r[3] + 0x00000020u, c->r[2]); goto L_0885e560; }
L_0885e504:
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0xffff0000u;
    mem_w32(ram, c->r[3] + 0x00000020u, c->r[2]);
    c->r[4] = mem_r8(ram, c->r[30] + 0x000000f0u);
    mem_w32(ram, c->r[30] + 0x00000118u, c->r[4]);
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000118u);
    { int _c = (c->r[5] == 0u); if (_c) goto L_0885e550; }
    c->r[2] = 0u + 0x00000001u;
    c->r[6] = mem_r32(ram, c->r[30] + 0x00000118u);
    { int _c = (c->r[6] == c->r[2]); if (_c) goto L_0885e53c; }
    { goto L_0885e560; }
L_0885e53c:
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0xff000000u;
    c->r[2] = c->r[2] | 0x00ffu;
    { mem_w32(ram, c->r[3] + 0x00000020u, c->r[2]); goto L_0885e560; }
L_0885e550:
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0xffff0000u;
    c->r[2] = c->r[2] | 0x7f7fu;
    mem_w32(ram, c->r[3] + 0x00000020u, c->r[2]);
L_0885e560:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r8(ram, c->r[2] + 0x0000002bu);
    c->r[2] = c->r[2] & 0x0020u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_0885e584; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = 0u + 0xffffffffu;
    { mem_w16(ram, c->r[3] + 0x000000b0u, c->r[2]); goto L_0885e5b0; }
L_0885e584:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r8(ram, c->r[2] + 0x0000002bu);
    c->r[2] = c->r[2] & 0x0010u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_0885e5a4; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    { mem_w16(ram, c->r[2] + 0x000000b0u, 0u); goto L_0885e5b0; }
L_0885e5a4:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = 0u + 0x00000001u;
    mem_w16(ram, c->r[3] + 0x000000b0u, c->r[2]);
L_0885e5b0:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x000000b0u);
    { int _c = ((s32)c->r[2] > 0); if (_c) goto L_0885f3e4; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    mem_w32(ram, c->r[3] + 0x00000004u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    mem_w32(ram, c->r[3] + 0x00000008u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    mem_w32(ram, c->r[2] + 0x00000018u, 0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    mem_w32(ram, c->r[2] + 0x0000000cu, 0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    mem_w32(ram, c->r[2] + 0x00000010u, 0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    mem_w32(ram, c->r[2] + 0x00000014u, 0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x00000024u;
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0u + 0u;
    { c->r[31] = 0x0885e618u; c->r[6] = 0u + 0x00000008u; func_08a19ec4(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[4] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[5] = 0u + 0u;
    { c->r[31] = 0x0885e62cu; c->r[6] = 0u + 0x00000780u; func_08a19ec4(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    { mem_w8(ram, c->r[2] + 0x0000002cu, 0u); goto L_0885f3e4; }
L_0885e638:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = mem_r32(ram, c->r[2] + 0x0000001cu);
    c->r[2] = 0u + 0x00000100u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_0885e654; }
    c->r[1] = 0x08a90000u;
    mem_w32(ram, c->r[1] + 0xffffb870u, 0u);
L_0885e654:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_0885f3e4; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[4] = 0x08a90000u;
    c->r[4] = c->r[4] + 0xffff9720u;
    { c->r[31] = 0x0885e678u; c->r[5] = mem_r32(ram, c->r[2] + 0x00000000u); func_0885d558(c, ram); }
    { goto L_0885f3e4; }
L_0885e680:
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    mem_w32(ram, c->r[3] + 0x00000004u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    mem_w32(ram, c->r[3] + 0x00000008u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    mem_w32(ram, c->r[2] + 0x00000018u, 0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    mem_w32(ram, c->r[2] + 0x0000000cu, 0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    mem_w32(ram, c->r[2] + 0x00000010u, 0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    mem_w32(ram, c->r[2] + 0x00000014u, 0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x00000024u;
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0u + 0u;
    { c->r[31] = 0x0885e6d8u; c->r[6] = 0u + 0x00000008u; func_08a19ec4(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[4] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[5] = 0u + 0u;
    { c->r[31] = 0x0885e6ecu; c->r[6] = 0u + 0x00000780u; func_08a19ec4(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    { mem_w8(ram, c->r[2] + 0x0000002cu, 0u); goto L_0885f3e4; }
L_0885e6f8:
    c->r[2] = 0x08a50000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00003910u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_0885e710; }
    { goto L_0885f3e4; }
L_0885e710:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x000000b0u);
    { int _c = ((s32)c->r[2] <= 0); if (_c) goto L_0885f040; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000004u);
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000004u);
    mem_w32(ram, c->r[30] + 0x000000f4u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000010u);
    mem_w32(ram, c->r[30] + 0x000000f8u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000010u);
    mem_w32(ram, c->r[30] + 0x000000fcu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000000cu);
    mem_w32(ram, c->r[30] + 0x00000100u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000100u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000002u) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_0885e774; }
    { goto L_0885f3e4; }
L_0885e774:
    { c->r[31] = 0x0885e77cu; func_08820f58(c, ram); }
    { c->r[31] = 0x0885e784u; c->r[16] = c->r[2] + 0u; func_08820f58(c, ram); }
    { c->r[31] = 0x0885e78cu; c->r[17] = c->r[2] + 0u; func_08820f58(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = c->r[30] + 0x00000090u;
    c->r[4] = c->r[2] + 0u;
    c->f[12] = u2f(0u);
    c->f[13] = mem_rf32(ram, c->r[16] + 0x00000020u);
    c->f[14] = mem_rf32(ram, c->r[17] + 0x00000024u);
    { c->r[31] = 0x0885e7acu; c->f[15] = mem_rf32(ram, c->r[3] + 0x00000028u); func_0880d140(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000100u);
    c->r[2] = c->r[2] << 5;
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x0885e7c0u; c->r[5] = 0u + 0x00000010u; func_0881a1d4(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000104u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000104u);
    mem_w32(ram, c->r[30] + 0x00000108u, c->r[2]);
    c->r[2] = c->r[30] + 0x00000080u;
    { c->r[31] = 0x0885e7d8u; c->r[4] = c->r[2] + 0u; func_08808240(c, ram); }
    c->r[2] = c->r[30] + 0x00000070u;
    { c->r[31] = 0x0885e7e4u; c->r[4] = c->r[2] + 0u; func_08808240(c, ram); }
    c->r[2] = c->r[30] + 0x00000060u;
    { c->r[31] = 0x0885e7f0u; c->r[4] = c->r[2] + 0u; func_08808240(c, ram); }
    mem_w32(ram, c->r[30] + 0x0000010cu, 0u);
L_0885e7f4:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000010cu);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000100u);
    c->r[2] = ((s32)c->r[2] < (s32)c->r[3]) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_0885e810; }
    { goto L_0885e9f8; }
L_0885e810:
    c->r[3] = c->r[30] + 0x00000050u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x00000000u);
    c->f[0] = u2f(c->r[2]);
    c->f[1] = (f32)(s32)f2u(c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x00000002u);
    c->f[0] = u2f(c->r[2]);
    c->f[2] = (f32)(s32)f2u(c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x00000004u);
    c->f[0] = u2f(c->r[2]);
    c->f[0] = (f32)(s32)f2u(c->f[0]);
    c->r[4] = c->r[3] + 0u;
    c->f[12] = u2f(0u);
    c->f[13] = c->f[1];
    c->f[14] = c->f[2];
    { c->r[31] = 0x0885e85cu; c->f[15] = c->f[0]; func_0880d140(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000050u);
    mem_w32(ram, c->r[30] + 0x00000080u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000054u);
    mem_w32(ram, c->r[30] + 0x00000084u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000058u);
    mem_w32(ram, c->r[30] + 0x00000088u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000005cu);
    mem_w32(ram, c->r[30] + 0x0000008cu, c->r[2]);
    c->r[3] = c->r[30] + 0x00000050u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x00000006u);
    c->f[0] = u2f(c->r[2]);
    c->f[1] = (f32)(s32)f2u(c->f[0]);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00002e28u);
    c->f[3] = c->f[1] * c->f[0];
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x00000008u);
    c->f[0] = u2f(c->r[2]);
    c->f[1] = (f32)(s32)f2u(c->f[0]);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00002e28u);
    c->f[2] = c->f[1] * c->f[0];
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x0000000au);
    c->f[0] = u2f(c->r[2]);
    c->f[1] = (f32)(s32)f2u(c->f[0]);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00002e28u);
    c->f[0] = c->f[1] * c->f[0];
    c->r[4] = c->r[3] + 0u;
    c->f[12] = u2f(0u);
    c->f[13] = c->f[3];
    c->f[14] = c->f[2];
    { c->r[31] = 0x0885e8ecu; c->f[15] = c->f[0]; func_0880d140(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000050u);
    mem_w32(ram, c->r[30] + 0x00000070u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000054u);
    mem_w32(ram, c->r[30] + 0x00000074u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000058u);
    mem_w32(ram, c->r[30] + 0x00000078u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000005cu);
    mem_w32(ram, c->r[30] + 0x0000007cu, c->r[2]);
    c->r[2] = c->r[30] + 0x00000070u;
    c->r[3] = c->r[30] + 0x00000070u;
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00002e2cu);
    c->r[4] = c->r[2] + 0u;
    c->r[5] = c->r[3] + 0u;
    { c->r[31] = 0x0885e92cu; c->f[12] = c->f[0]; func_0884c224(c, ram); }
    c->r[2] = c->r[30] + 0x00000080u;
    c->r[3] = c->r[30] + 0x00000080u;
    c->r[6] = c->r[30] + 0x00000090u;
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x0885e944u; c->r[5] = c->r[3] + 0u; func_08820ca4(c, ram); }
    c->r[2] = c->r[30] + 0x00000080u;
    c->r[3] = c->r[30] + 0x00000070u;
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000108u);
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x0885e95cu; c->r[6] = c->r[3] + 0u; func_08859fd4(c, ram); }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000108u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000020u);
    mem_w32(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000108u);
    c->r[2] = c->r[2] + 0x00000010u;
    mem_w32(ram, c->r[30] + 0x00000108u, c->r[2]);
    c->r[2] = c->r[30] + 0x00000080u;
    c->r[3] = c->r[30] + 0x00000070u;
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000108u);
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x0885e990u; c->r[6] = c->r[3] + 0u; func_08820ca4(c, ram); }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000108u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000020u);
    mem_w32(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000108u);
    c->r[2] = c->r[2] + 0x00000010u;
    mem_w32(ram, c->r[30] + 0x00000108u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = c->r[2] + 0xfffffff0u;
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000f8u);
    c->r[2] = c->r[2] + 0xffffffffu;
    mem_w32(ram, c->r[30] + 0x000000f8u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000f8u);
    { int _c = ((s32)c->r[2] >= 0); if (_c) goto L_0885e9e8; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = c->r[2] + 0x00000780u;
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000f8u);
    c->r[2] = c->r[2] + 0x00000078u;
    mem_w32(ram, c->r[30] + 0x000000f8u, c->r[2]);
L_0885e9e8:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000010cu);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x0000010cu, c->r[2]); goto L_0885e7f4; }
L_0885e9f8:
    c->r[4] = 0u + 0x00000030u;
    { c->r[31] = 0x0885ea04u; c->r[5] = 0u + 0x00000010u; func_0881a1d4(c, ram); }
    mem_w32(ram, c->r[30] + 0x0000010cu, c->r[2]);
    c->r[2] = c->r[30] + 0x00000050u;
    { c->r[31] = 0x0885ea14u; c->r[4] = c->r[2] + 0u; func_08808240(c, ram); }
    c->r[2] = c->r[30] + 0x00000030u;
    { c->r[31] = 0x0885ea20u; c->r[4] = c->r[2] + 0u; func_08808240(c, ram); }
    c->r[2] = c->r[30] + 0x00000020u;
    { c->r[31] = 0x0885ea2cu; c->r[4] = c->r[2] + 0u; func_08808240(c, ram); }
    c->r[3] = c->r[30] + 0x000000b0u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000f4u);
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x00000000u);
    c->f[0] = u2f(c->r[2]);
    c->f[1] = (f32)(s32)f2u(c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000f4u);
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x00000002u);
    c->f[0] = u2f(c->r[2]);
    c->f[2] = (f32)(s32)f2u(c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000f4u);
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x00000004u);
    c->f[0] = u2f(c->r[2]);
    c->f[0] = (f32)(s32)f2u(c->f[0]);
    c->r[4] = c->r[3] + 0u;
    c->f[12] = u2f(0u);
    c->f[13] = c->f[1];
    c->f[14] = c->f[2];
    { c->r[31] = 0x0885ea78u; c->f[15] = c->f[0]; func_0880d140(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000b0u);
    mem_w32(ram, c->r[30] + 0x00000050u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000b4u);
    mem_w32(ram, c->r[30] + 0x00000054u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000b8u);
    mem_w32(ram, c->r[30] + 0x00000058u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000bcu);
    mem_w32(ram, c->r[30] + 0x0000005cu, c->r[2]);
    c->r[3] = c->r[30] + 0x000000b0u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000f4u);
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x00000006u);
    c->f[0] = u2f(c->r[2]);
    c->f[1] = (f32)(s32)f2u(c->f[0]);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00002e28u);
    c->f[3] = c->f[1] * c->f[0];
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000f4u);
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x00000008u);
    c->f[0] = u2f(c->r[2]);
    c->f[1] = (f32)(s32)f2u(c->f[0]);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00002e28u);
    c->f[2] = c->f[1] * c->f[0];
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000f4u);
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x0000000au);
    c->f[0] = u2f(c->r[2]);
    c->f[1] = (f32)(s32)f2u(c->f[0]);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00002e28u);
    c->f[0] = c->f[1] * c->f[0];
    c->r[4] = c->r[3] + 0u;
    c->f[12] = u2f(0u);
    c->f[13] = c->f[3];
    c->f[14] = c->f[2];
    { c->r[31] = 0x0885eb08u; c->f[15] = c->f[0]; func_0880d140(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000b0u);
    mem_w32(ram, c->r[30] + 0x00000030u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000b4u);
    mem_w32(ram, c->r[30] + 0x00000034u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000b8u);
    mem_w32(ram, c->r[30] + 0x00000038u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000bcu);
    mem_w32(ram, c->r[30] + 0x0000003cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000f4u);
    c->r[2] = c->r[2] + 0xfffffff0u;
    mem_w32(ram, c->r[30] + 0x000000f4u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000fcu);
    c->r[2] = c->r[2] + 0xffffffffu;
    mem_w32(ram, c->r[30] + 0x000000fcu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000fcu);
    { int _c = ((s32)c->r[2] >= 0); if (_c) goto L_0885eb64; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000f4u);
    c->r[2] = c->r[2] + 0x00000780u;
    mem_w32(ram, c->r[30] + 0x000000f4u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000fcu);
    c->r[2] = c->r[2] + 0x00000078u;
    mem_w32(ram, c->r[30] + 0x000000fcu, c->r[2]);
L_0885eb64:
    c->r[3] = c->r[30] + 0x000000b0u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000f4u);
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x00000000u);
    c->f[0] = u2f(c->r[2]);
    c->f[2] = (f32)(s32)f2u(c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000f4u);
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x00000002u);
    c->f[0] = u2f(c->r[2]);
    c->f[1] = (f32)(s32)f2u(c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000f4u);
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x00000004u);
    c->f[0] = u2f(c->r[2]);
    c->f[0] = (f32)(s32)f2u(c->f[0]);
    c->r[4] = c->r[3] + 0u;
    c->f[12] = u2f(0u);
    c->f[13] = c->f[2];
    c->f[14] = c->f[1];
    { c->r[31] = 0x0885ebb0u; c->f[15] = c->f[0]; func_0880d140(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000b0u);
    mem_w32(ram, c->r[30] + 0x00000020u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000b4u);
    mem_w32(ram, c->r[30] + 0x00000024u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000b8u);
    mem_w32(ram, c->r[30] + 0x00000028u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000bcu);
    mem_w32(ram, c->r[30] + 0x0000002cu, c->r[2]);
    c->r[2] = c->r[30] + 0x00000050u;
    c->r[3] = c->r[30] + 0x00000050u;
    c->r[6] = c->r[30] + 0x00000090u;
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x0885ebe8u; c->r[5] = c->r[3] + 0u; func_08820ca4(c, ram); }
    c->r[2] = c->r[30] + 0x00000020u;
    c->r[3] = c->r[30] + 0x00000020u;
    c->r[6] = c->r[30] + 0x00000090u;
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x0885ec00u; c->r[5] = c->r[3] + 0u; func_08820ca4(c, ram); }
    c->r[2] = c->r[30] + 0x000000b0u;
    { c->r[31] = 0x0885ec0cu; c->r[4] = c->r[2] + 0u; func_08808240(c, ram); }
    c->r[2] = c->r[30] + 0x000000b0u;
    c->r[3] = c->r[30] + 0x00000050u;
    c->r[6] = c->r[30] + 0x00000020u;
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x0885ec24u; c->r[5] = c->r[3] + 0u; func_08820ca4(c, ram); }
    c->r[2] = c->r[30] + 0x000000b0u;
    c->r[3] = c->r[30] + 0x000000b0u;
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x0885ec38u; c->r[5] = c->r[3] + 0u; func_0884c1d8(c, ram); }
    c->r[2] = c->r[30] + 0x000000c0u;
    { c->r[31] = 0x0885ec44u; c->r[4] = c->r[2] + 0u; func_08808240(c, ram); }
    c->r[2] = c->r[30] + 0x000000c0u;
    c->r[3] = c->r[30] + 0x000000b0u;
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00002e30u);
    c->r[4] = c->r[2] + 0u;
    c->r[5] = c->r[3] + 0u;
    { c->r[31] = 0x0885ec64u; c->f[12] = c->f[0]; func_0884c224(c, ram); }
    c->r[2] = c->r[30] + 0x00000050u;
    c->r[3] = c->r[30] + 0x00000050u;
    c->r[6] = c->r[30] + 0x000000c0u;
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x0885ec7cu; c->r[5] = c->r[3] + 0u; func_08820ca4(c, ram); }
    c->r[2] = c->r[30] + 0x000000b0u;
    c->r[3] = c->r[30] + 0x000000b0u;
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00002e34u);
    c->r[4] = c->r[2] + 0u;
    c->r[5] = c->r[3] + 0u;
    { c->r[31] = 0x0885ec9cu; c->f[12] = c->f[0]; func_0884c224(c, ram); }
    c->r[2] = c->r[30] + 0x00000030u;
    c->r[3] = c->r[30] + 0x00000030u;
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00002e38u);
    c->r[4] = c->r[2] + 0u;
    c->r[5] = c->r[3] + 0u;
    { c->r[31] = 0x0885ecbcu; c->f[12] = c->f[0]; func_0884c224(c, ram); }
    c->r[2] = c->r[30] + 0x00000050u;
    c->r[3] = c->r[30] + 0x000000b0u;
    c->r[4] = mem_r32(ram, c->r[30] + 0x0000010cu);
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x0885ecd4u; c->r[6] = c->r[3] + 0u; func_08859fd4(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000010cu);
    c->r[2] = c->r[2] + 0x00000010u;
    c->r[3] = c->r[30] + 0x00000050u;
    c->r[6] = c->r[30] + 0x00000030u;
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x0885ecf0u; c->r[5] = c->r[3] + 0u; func_08859fd4(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000010cu);
    c->r[2] = c->r[2] + 0x00000020u;
    c->r[3] = c->r[30] + 0x00000050u;
    c->r[6] = c->r[30] + 0x00000030u;
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x0885ed0cu; c->r[5] = c->r[3] + 0u; func_08820ca4(c, ram); }
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000010cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000020u);
    mem_w32(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000010cu);
    c->r[3] = c->r[2] + 0x00000010u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000020u);
    mem_w32(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000010cu);
    c->r[3] = c->r[2] + 0x00000020u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000020u);
    mem_w32(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00002e3cu);
    c->r[4] = 0x08a70000u;
    c->r[4] = c->r[4] + 0xffffb640u;
    { c->r[31] = 0x0885ed5cu; c->f[12] = c->f[0]; func_089f1210(c, ram); }
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
    { c->r[31] = 0x0885edbcu; c->r[5] = c->r[2] + 0u; func_08861028(c, ram); }
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
    { c->r[31] = 0x0885ee1cu; c->r[5] = c->r[2] + 0u; func_08861028(c, ram); }
    c->r[4] = 0x08a70000u;
    c->r[4] = c->r[4] + 0xffffb640u;
    c->r[5] = 0u + 0u;
    { c->r[31] = 0x0885ee30u; c->r[6] = 0u + 0u; func_089df7a0(c, ram); }
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00002e40u);
    c->r[1] = 0x08a40000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0x00002e44u);
    c->r[4] = 0x08a70000u;
    c->r[4] = c->r[4] + 0xffffb640u;
    c->f[12] = c->f[0];
    { c->r[31] = 0x0885ee54u; c->f[13] = c->f[1]; func_089dfcb8(c, ram); }
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
    { c->r[31] = 0x0885ee9cu; c->r[5] = 0u + 0x00000007u; func_08861158(c, ram); }
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
    { c->r[31] = 0x0885eee4u; c->r[5] = 0u + 0x00000009u; func_08861158(c, ram); }
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
    { c->r[31] = 0x0885ef2cu; c->r[5] = 0u + 0x0000000au; func_08861158(c, ram); }
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
    { c->r[31] = 0x0885ef74u; c->r[5] = 0u + 0x00000005u; func_08861158(c, ram); }
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
    c->r[3] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000100u);
    c->r[2] = c->r[2] << 1;
    c->r[4] = c->r[3] + 0u;
    c->r[5] = 0u + 0x00000004u;
    c->r[6] = 0u + 0x0000019cu;
    c->r[7] = c->r[2] + 0u;
    c->r[8] = 0u + 0u;
    { c->r[31] = 0x0885efd4u; c->r[9] = mem_r32(ram, c->r[30] + 0x00000104u); func_0886106c(c, ram); }
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
    c->r[5] = 0u + 0x00000003u;
    c->r[6] = 0u + 0x0000019cu;
    c->r[7] = 0u + 0x00000003u;
    c->r[8] = 0u + 0u;
    { c->r[31] = 0x0885f02cu; c->r[9] = mem_r32(ram, c->r[30] + 0x0000010cu); func_0886106c(c, ram); }
    c->r[4] = 0x08a70000u;
    { c->r[31] = 0x0885f038u; c->r[4] = c->r[4] + 0xffffb640u; func_089f147c(c, ram); }
    { goto L_0885f3e4; }
L_0885f040:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x000000b0u);
    { int _c = ((s32)c->r[2] >= 0); if (_c) goto L_0885f3e4; }
    { c->r[31] = 0x0885f058u; func_08820f58(c, ram); }
    { c->r[31] = 0x0885f060u; c->r[16] = c->r[2] + 0u; func_08820f58(c, ram); }
    { c->r[31] = 0x0885f068u; c->r[17] = c->r[2] + 0u; func_08820f58(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = c->r[30] + 0x000000c0u;
    c->r[4] = c->r[2] + 0u;
    c->f[12] = u2f(0u);
    c->f[13] = mem_rf32(ram, c->r[16] + 0x00000020u);
    c->f[14] = mem_rf32(ram, c->r[17] + 0x00000024u);
    { c->r[31] = 0x0885f088u; c->f[15] = mem_rf32(ram, c->r[3] + 0x00000028u); func_0880d140(c, ram); }
    c->r[2] = c->r[30] + 0x000000b0u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[6] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[4] = c->r[2] + 0u;
    c->f[12] = u2f(0u);
    c->f[13] = mem_rf32(ram, c->r[3] + 0x00000020u);
    c->f[14] = mem_rf32(ram, c->r[5] + 0x00000024u);
    { c->r[31] = 0x0885f0b0u; c->f[15] = mem_rf32(ram, c->r[6] + 0x00000028u); func_0880d140(c, ram); }
    c->r[2] = c->r[30] + 0x000000b0u;
    c->r[3] = c->r[30] + 0x000000b0u;
    c->r[6] = c->r[30] + 0x000000c0u;
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x0885f0c8u; c->r[5] = c->r[3] + 0u; func_08820ca4(c, ram); }
    c->r[4] = 0u + 0x00000040u;
    { c->r[31] = 0x0885f0d4u; c->r[5] = 0u + 0x00000010u; func_0881a1d4(c, ram); }
    mem_w32(ram, c->r[30] + 0x0000010cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000010cu);
    mem_w32(ram, c->r[30] + 0x00000108u, c->r[2]);
    mem_w32(ram, c->r[30] + 0x00000104u, 0u);
L_0885f0e4:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000104u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000004u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_0885f0fc; }
    { goto L_0885f150; }
L_0885f0fc:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000104u);
    c->r[3] = c->r[2] << 4;
    c->r[2] = 0x08a90000u;
    c->r[2] = c->r[2] + 0xffffb830u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[3] = c->r[30] + 0x000000b0u;
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000108u);
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x0885f124u; c->r[6] = c->r[3] + 0u; func_08859fd4(c, ram); }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000108u);
    c->r[2] = 0xff000000u;
    c->r[2] = c->r[2] | 0x00ffu;
    mem_w32(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000108u);
    c->r[2] = c->r[2] + 0x00000010u;
    mem_w32(ram, c->r[30] + 0x00000108u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000104u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000104u, c->r[2]); goto L_0885f0e4; }
L_0885f150:
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00002e3cu);
    c->r[4] = 0x08a70000u;
    c->r[4] = c->r[4] + 0xffffb640u;
    { c->r[31] = 0x0885f168u; c->f[12] = c->f[0]; func_089f1210(c, ram); }
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
    { c->r[31] = 0x0885f1c8u; c->r[5] = c->r[2] + 0u; func_08861028(c, ram); }
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
    { c->r[31] = 0x0885f228u; c->r[5] = c->r[2] + 0u; func_08861028(c, ram); }
    c->r[4] = 0x08a70000u;
    c->r[4] = c->r[4] + 0xffffb640u;
    c->r[5] = 0u + 0u;
    { c->r[31] = 0x0885f23cu; c->r[6] = 0u + 0u; func_089df7a0(c, ram); }
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00002e40u);
    c->r[1] = 0x08a40000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0x00002e44u);
    c->r[4] = 0x08a70000u;
    c->r[4] = c->r[4] + 0xffffb640u;
    c->f[12] = c->f[0];
    { c->r[31] = 0x0885f260u; c->f[13] = c->f[1]; func_089dfcb8(c, ram); }
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
    { c->r[31] = 0x0885f2a8u; c->r[5] = 0u + 0x00000007u; func_08861158(c, ram); }
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
    { c->r[31] = 0x0885f2f0u; c->r[5] = 0u + 0x00000009u; func_08861158(c, ram); }
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
    { c->r[31] = 0x0885f338u; c->r[5] = 0u + 0x0000000au; func_08861158(c, ram); }
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
    { c->r[31] = 0x0885f380u; c->r[5] = 0u + 0x00000005u; func_08861158(c, ram); }
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
    c->r[5] = 0u + 0x00000001u;
    c->r[6] = 0u + 0x0000019cu;
    c->r[7] = 0u + 0x00000004u;
    c->r[8] = 0u + 0u;
    { c->r[31] = 0x0885f3d8u; c->r[9] = mem_r32(ram, c->r[30] + 0x0000010cu); func_0886106c(c, ram); }
    c->r[4] = 0x08a70000u;
    { c->r[31] = 0x0885f3e4u; c->r[4] = c->r[4] + 0xffffb640u; func_089f147c(c, ram); }
L_0885f3e4:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x0000012cu);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000128u);
    c->r[17] = mem_r32(ram, c->r[29] + 0x00000124u);
    c->r[16] = mem_r32(ram, c->r[29] + 0x00000120u);
    { c->r[29] = c->r[29] + 0x00000130u; return; }
    return; /* fell out of func_0885da1c */
}

/* func_08861f10  0x08861f10..0x08861f54  68 bytes, source=sweep */
void func_08861f10(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08861f10u);
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
    { c->r[31] = 0x08861f40u; c->r[5] = c->r[2] + 0u; func_08861028(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_08861f10 */
}

/* func_08864f08  0x08864f08..0x08865094  396 bytes, source=sweep */
void func_08864f08(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08864f08u);
    c->r[29] = c->r[29] + 0xffffffd0u;
    mem_w32(ram, c->r[29] + 0x00000028u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000024u, c->r[30]);
    mem_w32(ram, c->r[29] + 0x00000020u, c->r[16]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = 0u + 0x00000001u;
    mem_w8(ram, c->r[3] + 0x00000018u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000004u);
    c->r[16] = c->r[2] + 0x00000030u;
    c->r[2] = c->r[30] + 0x00000010u;
    c->r[3] = 0x08a90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0xffffb944u);
    c->r[5] = 0x08a90000u;
    c->r[5] = mem_r32(ram, c->r[5] + 0xffffb944u);
    c->r[6] = 0x08a90000u;
    c->r[6] = mem_r32(ram, c->r[6] + 0xffffb944u);
    c->r[4] = c->r[2] + 0u;
    c->f[12] = mem_rf32(ram, c->r[3] + 0x0000008cu);
    c->f[13] = mem_rf32(ram, c->r[5] + 0x00000090u);
    c->f[14] = mem_rf32(ram, c->r[6] + 0x00000094u);
    c->f[15] = u2f(0u);
    { c->r[31] = 0x08864f74u; func_0880d140(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    mem_w32(ram, c->r[16] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    mem_w32(ram, c->r[16] + 0x00000004u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    mem_w32(ram, c->r[16] + 0x00000008u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    mem_w32(ram, c->r[16] + 0x0000000cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000004u);
    c->r[16] = c->r[2] + 0x00000040u;
    c->r[2] = c->r[30] + 0x00000010u;
    c->r[3] = 0x08a90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0xffffb944u);
    c->r[5] = 0x08a90000u;
    c->r[5] = mem_r32(ram, c->r[5] + 0xffffb944u);
    c->r[4] = c->r[2] + 0u;
    c->f[12] = u2f(0u);
    c->f[13] = mem_rf32(ram, c->r[3] + 0x00000090u);
    c->f[14] = mem_rf32(ram, c->r[5] + 0x000000a0u);
    c->f[15] = u2f(0u);
    { c->r[31] = 0x08864fd0u; func_0880d140(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    mem_w32(ram, c->r[16] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    mem_w32(ram, c->r[16] + 0x00000004u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    mem_w32(ram, c->r[16] + 0x00000008u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    mem_w32(ram, c->r[16] + 0x0000000cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000004u);
    c->r[16] = c->r[2] + 0x00000050u;
    c->r[2] = c->r[30] + 0x00000010u;
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000030e8u);
    c->r[4] = c->r[2] + 0u;
    c->f[12] = u2f(0u);
    c->f[13] = c->f[0];
    c->f[14] = u2f(0u);
    c->f[15] = u2f(0u);
    { c->r[31] = 0x08865024u; func_0880d140(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    mem_w32(ram, c->r[16] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    mem_w32(ram, c->r[16] + 0x00000004u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    mem_w32(ram, c->r[16] + 0x00000008u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    mem_w32(ram, c->r[16] + 0x0000000cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[4] = mem_r32(ram, c->r[2] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x00000016u);
    c->f[0] = u2f(c->r[2]);
    c->f[1] = (f32)(s32)f2u(c->f[0]);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000030ecu);
    c->f[1] = c->f[1] * c->f[0];
    c->f[0] = mem_rf32(ram, c->r[3] + 0x00000038u);
    c->f[0] = c->f[0] + c->f[1];
    mem_wf32(ram, c->r[4] + 0x00000038u, c->f[0]);
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000028u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000024u);
    c->r[16] = mem_r32(ram, c->r[29] + 0x00000020u);
    { c->r[29] = c->r[29] + 0x00000030u; return; }
    return; /* fell out of func_08864f08 */
}

/* func_08867ab8  0x08867ab8..0x08867adc  36 bytes, source=sweep */
void func_08867ab8(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08867ab8u);
    c->r[29] = c->r[29] + 0xfffffff0u;
    mem_w32(ram, c->r[29] + 0x00000000u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    c->r[2] = 0x08a90000u;
    c->r[2] = c->r[2] + 0xffffbe10u;
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000000u);
    { c->r[29] = c->r[29] + 0x00000010u; return; }
    return; /* fell out of func_08867ab8 */
}

/* func_0886fccc  0x0886fccc..0x0886fcf0  36 bytes, source=sweep */
void func_0886fccc(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0886fcccu);
    c->r[29] = c->r[29] + 0xfffffff0u;
    mem_w32(ram, c->r[29] + 0x00000000u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    c->r[2] = 0x08a90000u;
    c->r[2] = c->r[2] + 0xffffbe60u;
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000000u);
    { c->r[29] = c->r[29] + 0x00000010u; return; }
    return; /* fell out of func_0886fccc */
}

/* func_08878f20  0x08878f20..0x08878f90  112 bytes, source=sweep */
void func_08878f20(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08878f20u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    c->r[2] = 0x08a80000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00002ed8u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_08878f74; }
    c->r[2] = 0x08a80000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00002ed8u);
    c->r[2] = c->r[2] + 0x000000e0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000010u);
    c->r[2] = 0u + 0x00000003u;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_08878f6c; }
    c->r[2] = 0u + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000004u, c->r[2]); goto L_08878f7c; }
L_08878f6c:
    { mem_w32(ram, c->r[30] + 0x00000004u, 0u); goto L_08878f7c; }
L_08878f74:
    c->r[2] = 0u + 0xffffffffu;
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[2]);
L_08878f7c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_08878f20 */
}

/* func_0887dfa8  0x0887dfa8..0x0887e084  220 bytes, source=indirect */
void func_0887dfa8(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0887dfa8u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[6]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_0887e014; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r8(ram, c->r[2] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x00000001u;
    mem_w8(ram, c->r[3] + 0x0000000cu, c->r[2]);
    c->r[2] = c->r[2] & 0x00ffu;
    c->r[2] = (c->r[2] < 0x0000000au) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_0887e074; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000011u);
    c->r[2] = c->r[2] | 0x0008u;
    mem_w8(ram, c->r[3] + 0x00000011u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = 0u + 0x0000000au;
    { mem_w8(ram, c->r[3] + 0x0000000cu, c->r[2]); goto L_0887e074; }
L_0887e014:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r8(ram, c->r[2] + 0x0000000cu);
    c->r[2] = (c->r[2] < 0x0000000au) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_0887e054; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r8(ram, c->r[2] + 0x0000000cu);
    c->r[2] = (c->r[2] < 0x00000002u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_0887e054; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000011u);
    c->r[2] = c->r[2] | 0x0004u;
    { mem_w8(ram, c->r[3] + 0x00000011u, c->r[2]); goto L_0887e06c; }
L_0887e054:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = mem_r8(ram, c->r[2] + 0x00000011u);
    c->r[2] = 0u + 0xfffffff7u;
    c->r[2] = c->r[3] & c->r[2];
    mem_w8(ram, c->r[4] + 0x00000011u, c->r[2]);
L_0887e06c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    mem_w8(ram, c->r[2] + 0x0000000cu, 0u);
L_0887e074:
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_0887dfa8 */
}

/* func_088831bc  0x088831bc..0x088831e0  36 bytes, source=residue */
void func_088831bc(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x088831bcu);
    c->r[29] = c->r[29] + 0xfffffff0u;
    mem_w32(ram, c->r[29] + 0x00000000u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    c->r[2] = 0x08a90000u;
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0xffffe648u);
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000000u);
    { c->r[29] = c->r[29] + 0x00000010u; return; }
    return; /* fell out of func_088831bc */
}

/* func_088876fc  0x088876fc..0x088881f8  2812 bytes, source=sweep */
void func_088876fc(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x088876fcu);
    c->r[29] = c->r[29] + 0xfffffe70u;
    mem_w32(ram, c->r[29] + 0x00000184u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000180u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    { c->r[31] = 0x08887714u; mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]); func_088832bc(c, ram); }
    { c->r[31] = 0x0888771cu; mem_w32(ram, c->r[30] + 0x00000004u, c->r[2]); func_088832bc(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000008u);
    c->r[2] = c->r[3] + c->r[2];
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000000cu);
    c->r[2] = c->r[3] + c->r[2];
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
    mem_w32(ram, c->r[30] + 0x00000010u, 0u);
L_08887748:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r16(ram, c->r[2] + 0x00000008u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = ((s32)c->r[2] < (s32)c->r[3]) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_08887768; }
    { goto L_08887c2c; }
L_08887768:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
    c->r[2] = c->r[30] + 0x00000020u;
    mem_w32(ram, c->r[30] + 0x00000050u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000050u);
    mem_w32(ram, c->r[30] + 0x00000054u, c->r[2]);
    c->r[2] = 0u + 0x00000002u;
    mem_w32(ram, c->r[30] + 0x00000058u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000058u);
    c->r[2] = 0u + 0xffffffffu;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_088877c8; }
L_08887798:
    { c->r[31] = 0x088877a0u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000054u); func_08808240(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000054u);
    c->r[2] = c->r[2] + 0x00000010u;
    mem_w32(ram, c->r[30] + 0x00000054u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000058u);
    c->r[2] = c->r[2] + 0xffffffffu;
    c->r[3] = c->r[2] + 0u;
    mem_w32(ram, c->r[30] + 0x00000058u, c->r[3]);
    c->r[2] = 0u + 0xffffffffu;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_08887798; }
L_088877c8:
    c->r[2] = c->r[30] + 0x00000060u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[5] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[6] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[4] = c->r[2] + 0u;
    c->f[12] = mem_rf32(ram, c->r[3] + 0x00000008u);
    c->f[13] = mem_rf32(ram, c->r[5] + 0x0000000cu);
    c->f[14] = mem_rf32(ram, c->r[6] + 0x00000010u);
    c->f[15] = u2f(0u);
    { c->r[31] = 0x088877f4u; func_0880d140(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000060u);
    mem_w32(ram, c->r[30] + 0x00000020u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000064u);
    mem_w32(ram, c->r[30] + 0x00000024u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000068u);
    mem_w32(ram, c->r[30] + 0x00000028u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000006cu);
    mem_w32(ram, c->r[30] + 0x0000002cu, c->r[2]);
    c->r[4] = c->r[30] + 0x00000060u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[5] = c->r[2] + 0x00000014u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = c->r[2] + 0x00000014u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x00000014u;
    c->f[12] = mem_rf32(ram, c->r[5] + 0x00000008u);
    c->f[13] = mem_rf32(ram, c->r[3] + 0x0000000cu);
    c->f[14] = mem_rf32(ram, c->r[2] + 0x00000010u);
    c->f[15] = u2f(0u);
    { c->r[31] = 0x08887848u; func_0880d140(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000060u);
    mem_w32(ram, c->r[30] + 0x00000030u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000064u);
    mem_w32(ram, c->r[30] + 0x00000034u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000068u);
    mem_w32(ram, c->r[30] + 0x00000038u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000006cu);
    mem_w32(ram, c->r[30] + 0x0000003cu, c->r[2]);
    c->r[4] = c->r[30] + 0x00000060u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[5] = c->r[2] + 0x00000028u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = c->r[2] + 0x00000028u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x00000028u;
    c->f[12] = mem_rf32(ram, c->r[5] + 0x00000008u);
    c->f[13] = mem_rf32(ram, c->r[3] + 0x0000000cu);
    c->f[14] = mem_rf32(ram, c->r[2] + 0x00000010u);
    c->f[15] = u2f(0u);
    { c->r[31] = 0x0888789cu; func_0880d140(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000060u);
    mem_w32(ram, c->r[30] + 0x00000040u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000064u);
    mem_w32(ram, c->r[30] + 0x00000044u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000068u);
    mem_w32(ram, c->r[30] + 0x00000048u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000006cu);
    mem_w32(ram, c->r[30] + 0x0000004cu, c->r[2]);
    c->r[2] = c->r[30] + 0x00000070u;
    mem_w32(ram, c->r[30] + 0x00000058u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000058u);
    mem_w32(ram, c->r[30] + 0x00000054u, c->r[2]);
    c->r[2] = 0u + 0x00000002u;
    mem_w32(ram, c->r[30] + 0x00000050u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000050u);
    c->r[2] = 0u + 0xffffffffu;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_08887914; }
L_088878e4:
    { c->r[31] = 0x088878ecu; c->r[4] = mem_r32(ram, c->r[30] + 0x00000054u); func_08808240(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000054u);
    c->r[2] = c->r[2] + 0x00000010u;
    mem_w32(ram, c->r[30] + 0x00000054u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000050u);
    c->r[2] = c->r[2] + 0xffffffffu;
    c->r[3] = c->r[2] + 0u;
    mem_w32(ram, c->r[30] + 0x00000050u, c->r[3]);
    c->r[2] = 0u + 0xffffffffu;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_088878e4; }
L_08887914:
    c->r[4] = c->r[30] + 0x00000060u;
    c->r[2] = c->r[30] + 0x00000020u;
    c->r[2] = c->r[2] + 0x00000010u;
    c->r[3] = c->r[30] + 0x00000020u;
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x08887930u; c->r[6] = c->r[3] + 0u; func_0884c07c(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000060u);
    mem_w32(ram, c->r[30] + 0x00000070u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000064u);
    mem_w32(ram, c->r[30] + 0x00000074u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000068u);
    mem_w32(ram, c->r[30] + 0x00000078u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000006cu);
    mem_w32(ram, c->r[30] + 0x0000007cu, c->r[2]);
    c->r[4] = c->r[30] + 0x00000060u;
    c->r[2] = c->r[30] + 0x00000020u;
    c->r[2] = c->r[2] + 0x00000020u;
    c->r[3] = c->r[30] + 0x00000020u;
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x0888796cu; c->r[6] = c->r[3] + 0u; func_0884c07c(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000060u);
    mem_w32(ram, c->r[30] + 0x00000080u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000064u);
    mem_w32(ram, c->r[30] + 0x00000084u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000068u);
    mem_w32(ram, c->r[30] + 0x00000088u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000006cu);
    mem_w32(ram, c->r[30] + 0x0000008cu, c->r[2]);
    c->r[2] = c->r[30] + 0x000000a0u;
    mem_w32(ram, c->r[30] + 0x00000058u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000058u);
    mem_w32(ram, c->r[30] + 0x00000054u, c->r[2]);
    c->r[2] = 0u + 0x00000003u;
    mem_w32(ram, c->r[30] + 0x00000050u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000050u);
    c->r[2] = 0u + 0xffffffffu;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_088879e4; }
L_088879b4:
    { c->r[31] = 0x088879bcu; c->r[4] = mem_r32(ram, c->r[30] + 0x00000054u); func_08808240(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000054u);
    c->r[2] = c->r[2] + 0x00000010u;
    mem_w32(ram, c->r[30] + 0x00000054u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000050u);
    c->r[2] = c->r[2] + 0xffffffffu;
    c->r[3] = c->r[2] + 0u;
    mem_w32(ram, c->r[30] + 0x00000050u, c->r[3]);
    c->r[2] = 0u + 0xffffffffu;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_088879b4; }
L_088879e4:
    c->r[3] = c->r[30] + 0x000000a0u;
    c->r[5] = c->r[30] + 0x00000070u;
    c->r[2] = c->r[30] + 0x00000070u;
    c->r[2] = c->r[2] + 0x00000010u;
    c->r[4] = c->r[3] + 0u;
    { c->r[31] = 0x08887a00u; c->r[6] = c->r[2] + 0u; func_0884d26c(c, ram); }
    c->r[2] = c->r[30] + 0x000000a0u;
    c->r[3] = c->r[30] + 0x000000a0u;
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x08887a14u; c->r[5] = c->r[3] + 0u; func_0884c1d8(c, ram); }
    c->r[4] = c->r[30] + 0x00000060u;
    c->r[2] = c->r[30] + 0x00000020u;
    c->r[2] = c->r[2] + 0x00000010u;
    c->r[3] = c->r[30] + 0x00000020u;
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x08887a30u; c->r[6] = c->r[3] + 0u; func_0884c07c(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000060u);
    mem_w32(ram, c->r[30] + 0x00000070u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000064u);
    mem_w32(ram, c->r[30] + 0x00000074u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000068u);
    mem_w32(ram, c->r[30] + 0x00000078u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000006cu);
    mem_w32(ram, c->r[30] + 0x0000007cu, c->r[2]);
    c->r[4] = c->r[30] + 0x00000060u;
    c->r[2] = c->r[30] + 0x00000020u;
    c->r[3] = c->r[2] + 0x00000020u;
    c->r[2] = c->r[30] + 0x00000020u;
    c->r[2] = c->r[2] + 0x00000010u;
    c->r[5] = c->r[3] + 0u;
    { c->r[31] = 0x08887a70u; c->r[6] = c->r[2] + 0u; func_0884c07c(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000060u);
    mem_w32(ram, c->r[30] + 0x00000080u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000064u);
    mem_w32(ram, c->r[30] + 0x00000084u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000068u);
    mem_w32(ram, c->r[30] + 0x00000088u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000006cu);
    mem_w32(ram, c->r[30] + 0x0000008cu, c->r[2]);
    c->r[3] = c->r[30] + 0x00000060u;
    c->r[5] = c->r[30] + 0x00000020u;
    c->r[2] = c->r[30] + 0x00000020u;
    c->r[2] = c->r[2] + 0x00000020u;
    c->r[4] = c->r[3] + 0u;
    { c->r[31] = 0x08887aacu; c->r[6] = c->r[2] + 0u; func_0884c07c(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000060u);
    mem_w32(ram, c->r[30] + 0x00000090u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000064u);
    mem_w32(ram, c->r[30] + 0x00000094u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000068u);
    mem_w32(ram, c->r[30] + 0x00000098u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000006cu);
    mem_w32(ram, c->r[30] + 0x0000009cu, c->r[2]);
    c->r[2] = c->r[30] + 0x000000a0u;
    c->r[2] = c->r[2] + 0x00000010u;
    c->r[3] = c->r[30] + 0x000000a0u;
    c->r[6] = c->r[30] + 0x00000070u;
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x08887ae8u; c->r[5] = c->r[3] + 0u; func_0884d26c(c, ram); }
    c->r[2] = c->r[30] + 0x000000a0u;
    c->r[3] = c->r[2] + 0x00000010u;
    c->r[2] = c->r[30] + 0x000000a0u;
    c->r[2] = c->r[2] + 0x00000010u;
    c->r[4] = c->r[3] + 0u;
    { c->r[31] = 0x08887b04u; c->r[5] = c->r[2] + 0u; func_0884c1d8(c, ram); }
    c->r[2] = c->r[30] + 0x000000a0u;
    c->r[3] = c->r[2] + 0x00000020u;
    c->r[5] = c->r[30] + 0x000000a0u;
    c->r[2] = c->r[30] + 0x00000070u;
    c->r[2] = c->r[2] + 0x00000010u;
    c->r[4] = c->r[3] + 0u;
    { c->r[31] = 0x08887b24u; c->r[6] = c->r[2] + 0u; func_0884d26c(c, ram); }
    c->r[2] = c->r[30] + 0x000000a0u;
    c->r[3] = c->r[2] + 0x00000020u;
    c->r[2] = c->r[30] + 0x000000a0u;
    c->r[2] = c->r[2] + 0x00000020u;
    c->r[4] = c->r[3] + 0u;
    { c->r[31] = 0x08887b40u; c->r[5] = c->r[2] + 0u; func_0884c1d8(c, ram); }
    c->r[2] = c->r[30] + 0x000000a0u;
    c->r[3] = c->r[2] + 0x00000030u;
    c->r[5] = c->r[30] + 0x000000a0u;
    c->r[2] = c->r[30] + 0x00000070u;
    c->r[2] = c->r[2] + 0x00000020u;
    c->r[4] = c->r[3] + 0u;
    { c->r[31] = 0x08887b60u; c->r[6] = c->r[2] + 0u; func_0884d26c(c, ram); }
    c->r[2] = c->r[30] + 0x000000a0u;
    c->r[3] = c->r[2] + 0x00000030u;
    c->r[2] = c->r[30] + 0x000000a0u;
    c->r[2] = c->r[2] + 0x00000030u;
    c->r[4] = c->r[3] + 0u;
    { c->r[31] = 0x08887b7cu; c->r[5] = c->r[2] + 0u; func_0884c1d8(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000058u, 0u);
L_08887b80:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000058u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000004u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_08887b98; }
    { goto L_08887c10; }
L_08887b98:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000058u);
    c->r[2] = c->r[2] << 4;
    c->r[2] = c->r[2] + c->r[30];
    c->r[2] = c->r[2] + 0x000000a0u;
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000000u);
    mem_wf32(ram, c->r[3] + 0x00000000u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[3] = c->r[2] + 0x00000004u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000058u);
    c->r[2] = c->r[2] << 4;
    c->r[2] = c->r[2] + c->r[30];
    c->r[2] = c->r[2] + 0x000000a0u;
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000004u);
    mem_wf32(ram, c->r[3] + 0x00000000u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[3] = c->r[2] + 0x00000008u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000058u);
    c->r[2] = c->r[2] << 4;
    c->r[2] = c->r[2] + c->r[30];
    c->r[2] = c->r[2] + 0x000000a0u;
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000008u);
    mem_wf32(ram, c->r[3] + 0x00000000u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = c->r[2] + 0x0000000cu;
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000058u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000058u, c->r[2]); goto L_08887b80; }
L_08887c10:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x0000003cu;
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]); goto L_08887748; }
L_08887c2c:
    mem_w32(ram, c->r[30] + 0x00000058u, 0u);
L_08887c30:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r16(ram, c->r[2] + 0x0000000au);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000058u);
    c->r[2] = ((s32)c->r[2] < (s32)c->r[3]) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_08887c50; }
    { goto L_088881e4; }
L_08887c50:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    mem_w32(ram, c->r[30] + 0x00000054u, c->r[2]);
    c->r[2] = c->r[30] + 0x000000a0u;
    mem_w32(ram, c->r[30] + 0x00000050u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000050u);
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
    c->r[2] = 0u + 0x00000003u;
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = 0u + 0xffffffffu;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_08887cb0; }
L_08887c80:
    { c->r[31] = 0x08887c88u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000014u); func_08808240(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = c->r[2] + 0x00000010u;
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = c->r[2] + 0xffffffffu;
    c->r[3] = c->r[2] + 0u;
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[3]);
    c->r[2] = 0u + 0xffffffffu;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_08887c80; }
L_08887cb0:
    c->r[2] = c->r[30] + 0x00000060u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[5] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[6] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[4] = c->r[2] + 0u;
    c->f[12] = mem_rf32(ram, c->r[3] + 0x00000008u);
    c->f[13] = mem_rf32(ram, c->r[5] + 0x0000000cu);
    c->f[14] = mem_rf32(ram, c->r[6] + 0x00000010u);
    c->f[15] = u2f(0u);
    { c->r[31] = 0x08887cdcu; func_0880d140(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000060u);
    mem_w32(ram, c->r[30] + 0x000000a0u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000064u);
    mem_w32(ram, c->r[30] + 0x000000a4u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000068u);
    mem_w32(ram, c->r[30] + 0x000000a8u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000006cu);
    mem_w32(ram, c->r[30] + 0x000000acu, c->r[2]);
    c->r[4] = c->r[30] + 0x00000060u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[5] = c->r[2] + 0x00000014u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = c->r[2] + 0x00000014u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x00000014u;
    c->f[12] = mem_rf32(ram, c->r[5] + 0x00000008u);
    c->f[13] = mem_rf32(ram, c->r[3] + 0x0000000cu);
    c->f[14] = mem_rf32(ram, c->r[2] + 0x00000010u);
    c->f[15] = u2f(0u);
    { c->r[31] = 0x08887d30u; func_0880d140(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000060u);
    mem_w32(ram, c->r[30] + 0x000000b0u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000064u);
    mem_w32(ram, c->r[30] + 0x000000b4u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000068u);
    mem_w32(ram, c->r[30] + 0x000000b8u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000006cu);
    mem_w32(ram, c->r[30] + 0x000000bcu, c->r[2]);
    c->r[4] = c->r[30] + 0x00000060u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[5] = c->r[2] + 0x00000028u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = c->r[2] + 0x00000028u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x00000028u;
    c->f[12] = mem_rf32(ram, c->r[5] + 0x00000008u);
    c->f[13] = mem_rf32(ram, c->r[3] + 0x0000000cu);
    c->f[14] = mem_rf32(ram, c->r[2] + 0x00000010u);
    c->f[15] = u2f(0u);
    { c->r[31] = 0x08887d84u; func_0880d140(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000060u);
    mem_w32(ram, c->r[30] + 0x000000c0u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000064u);
    mem_w32(ram, c->r[30] + 0x000000c4u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000068u);
    mem_w32(ram, c->r[30] + 0x000000c8u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000006cu);
    mem_w32(ram, c->r[30] + 0x000000ccu, c->r[2]);
    c->r[4] = c->r[30] + 0x00000060u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[5] = c->r[2] + 0x0000003cu;
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = c->r[2] + 0x0000003cu;
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x0000003cu;
    c->f[12] = mem_rf32(ram, c->r[5] + 0x00000008u);
    c->f[13] = mem_rf32(ram, c->r[3] + 0x0000000cu);
    c->f[14] = mem_rf32(ram, c->r[2] + 0x00000010u);
    c->f[15] = u2f(0u);
    { c->r[31] = 0x08887dd8u; func_0880d140(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000060u);
    mem_w32(ram, c->r[30] + 0x000000d0u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000064u);
    mem_w32(ram, c->r[30] + 0x000000d4u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000068u);
    mem_w32(ram, c->r[30] + 0x000000d8u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000006cu);
    mem_w32(ram, c->r[30] + 0x000000dcu, c->r[2]);
    c->r[2] = c->r[30] + 0x000000e0u;
    mem_w32(ram, c->r[30] + 0x00000050u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000050u);
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
    c->r[2] = 0u + 0x00000003u;
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = 0u + 0xffffffffu;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_08887e50; }
L_08887e20:
    { c->r[31] = 0x08887e28u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000014u); func_08808240(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = c->r[2] + 0x00000010u;
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = c->r[2] + 0xffffffffu;
    c->r[3] = c->r[2] + 0u;
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[3]);
    c->r[2] = 0u + 0xffffffffu;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_08887e20; }
L_08887e50:
    c->r[4] = c->r[30] + 0x00000060u;
    c->r[2] = c->r[30] + 0x000000a0u;
    c->r[2] = c->r[2] + 0x00000010u;
    c->r[3] = c->r[30] + 0x000000a0u;
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x08887e6cu; c->r[6] = c->r[3] + 0u; func_0884c07c(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000060u);
    mem_w32(ram, c->r[30] + 0x000000e0u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000064u);
    mem_w32(ram, c->r[30] + 0x000000e4u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000068u);
    mem_w32(ram, c->r[30] + 0x000000e8u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000006cu);
    mem_w32(ram, c->r[30] + 0x000000ecu, c->r[2]);
    c->r[4] = c->r[30] + 0x00000060u;
    c->r[2] = c->r[30] + 0x000000a0u;
    c->r[2] = c->r[2] + 0x00000020u;
    c->r[3] = c->r[30] + 0x000000a0u;
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x08887ea8u; c->r[6] = c->r[3] + 0u; func_0884c07c(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000060u);
    mem_w32(ram, c->r[30] + 0x000000f0u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000064u);
    mem_w32(ram, c->r[30] + 0x000000f4u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000068u);
    mem_w32(ram, c->r[30] + 0x000000f8u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000006cu);
    mem_w32(ram, c->r[30] + 0x000000fcu, c->r[2]);
    c->r[2] = c->r[30] + 0x00000120u;
    mem_w32(ram, c->r[30] + 0x00000050u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000050u);
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
    c->r[2] = 0u + 0x00000005u;
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = 0u + 0xffffffffu;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_08887f20; }
L_08887ef0:
    { c->r[31] = 0x08887ef8u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000014u); func_08808240(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = c->r[2] + 0x00000010u;
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = c->r[2] + 0xffffffffu;
    c->r[3] = c->r[2] + 0u;
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[3]);
    c->r[2] = 0u + 0xffffffffu;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_08887ef0; }
L_08887f20:
    c->r[3] = c->r[30] + 0x00000120u;
    c->r[5] = c->r[30] + 0x000000e0u;
    c->r[2] = c->r[30] + 0x000000e0u;
    c->r[2] = c->r[2] + 0x00000010u;
    c->r[4] = c->r[3] + 0u;
    { c->r[31] = 0x08887f3cu; c->r[6] = c->r[2] + 0u; func_0884d26c(c, ram); }
    c->r[2] = c->r[30] + 0x00000120u;
    c->r[3] = c->r[30] + 0x00000120u;
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x08887f50u; c->r[5] = c->r[3] + 0u; func_0884c1d8(c, ram); }
    c->r[4] = c->r[30] + 0x00000060u;
    c->r[2] = c->r[30] + 0x000000a0u;
    c->r[2] = c->r[2] + 0x00000010u;
    c->r[3] = c->r[30] + 0x000000a0u;
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x08887f6cu; c->r[6] = c->r[3] + 0u; func_0884c07c(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000060u);
    mem_w32(ram, c->r[30] + 0x000000e0u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000064u);
    mem_w32(ram, c->r[30] + 0x000000e4u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000068u);
    mem_w32(ram, c->r[30] + 0x000000e8u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000006cu);
    mem_w32(ram, c->r[30] + 0x000000ecu, c->r[2]);
    c->r[4] = c->r[30] + 0x00000060u;
    c->r[2] = c->r[30] + 0x000000a0u;
    c->r[3] = c->r[2] + 0x00000020u;
    c->r[2] = c->r[30] + 0x000000a0u;
    c->r[2] = c->r[2] + 0x00000010u;
    c->r[5] = c->r[3] + 0u;
    { c->r[31] = 0x08887facu; c->r[6] = c->r[2] + 0u; func_0884c07c(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000060u);
    mem_w32(ram, c->r[30] + 0x000000f0u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000064u);
    mem_w32(ram, c->r[30] + 0x000000f4u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000068u);
    mem_w32(ram, c->r[30] + 0x000000f8u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000006cu);
    mem_w32(ram, c->r[30] + 0x000000fcu, c->r[2]);
    c->r[4] = c->r[30] + 0x00000060u;
    c->r[2] = c->r[30] + 0x000000a0u;
    c->r[3] = c->r[2] + 0x00000030u;
    c->r[2] = c->r[30] + 0x000000a0u;
    c->r[2] = c->r[2] + 0x00000020u;
    c->r[5] = c->r[3] + 0u;
    { c->r[31] = 0x08887fecu; c->r[6] = c->r[2] + 0u; func_0884c07c(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000060u);
    mem_w32(ram, c->r[30] + 0x00000100u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000064u);
    mem_w32(ram, c->r[30] + 0x00000104u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000068u);
    mem_w32(ram, c->r[30] + 0x00000108u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000006cu);
    mem_w32(ram, c->r[30] + 0x0000010cu, c->r[2]);
    c->r[3] = c->r[30] + 0x00000060u;
    c->r[5] = c->r[30] + 0x000000a0u;
    c->r[2] = c->r[30] + 0x000000a0u;
    c->r[2] = c->r[2] + 0x00000030u;
    c->r[4] = c->r[3] + 0u;
    { c->r[31] = 0x08888028u; c->r[6] = c->r[2] + 0u; func_0884c07c(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000060u);
    mem_w32(ram, c->r[30] + 0x00000110u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000064u);
    mem_w32(ram, c->r[30] + 0x00000114u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000068u);
    mem_w32(ram, c->r[30] + 0x00000118u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000006cu);
    mem_w32(ram, c->r[30] + 0x0000011cu, c->r[2]);
    c->r[2] = c->r[30] + 0x00000120u;
    c->r[2] = c->r[2] + 0x00000010u;
    c->r[3] = c->r[30] + 0x00000120u;
    c->r[6] = c->r[30] + 0x000000e0u;
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x08888064u; c->r[5] = c->r[3] + 0u; func_0884d26c(c, ram); }
    c->r[2] = c->r[30] + 0x00000120u;
    c->r[3] = c->r[2] + 0x00000010u;
    c->r[2] = c->r[30] + 0x00000120u;
    c->r[2] = c->r[2] + 0x00000010u;
    c->r[4] = c->r[3] + 0u;
    { c->r[31] = 0x08888080u; c->r[5] = c->r[2] + 0u; func_0884c1d8(c, ram); }
    c->r[2] = c->r[30] + 0x00000120u;
    c->r[3] = c->r[2] + 0x00000020u;
    c->r[5] = c->r[30] + 0x00000120u;
    c->r[2] = c->r[30] + 0x000000e0u;
    c->r[2] = c->r[2] + 0x00000010u;
    c->r[4] = c->r[3] + 0u;
    { c->r[31] = 0x088880a0u; c->r[6] = c->r[2] + 0u; func_0884d26c(c, ram); }
    c->r[2] = c->r[30] + 0x00000120u;
    c->r[3] = c->r[2] + 0x00000020u;
    c->r[2] = c->r[30] + 0x00000120u;
    c->r[2] = c->r[2] + 0x00000020u;
    c->r[4] = c->r[3] + 0u;
    { c->r[31] = 0x088880bcu; c->r[5] = c->r[2] + 0u; func_0884c1d8(c, ram); }
    c->r[2] = c->r[30] + 0x00000120u;
    c->r[3] = c->r[2] + 0x00000030u;
    c->r[5] = c->r[30] + 0x00000120u;
    c->r[2] = c->r[30] + 0x000000e0u;
    c->r[2] = c->r[2] + 0x00000020u;
    c->r[4] = c->r[3] + 0u;
    { c->r[31] = 0x088880dcu; c->r[6] = c->r[2] + 0u; func_0884d26c(c, ram); }
    c->r[2] = c->r[30] + 0x00000120u;
    c->r[3] = c->r[2] + 0x00000030u;
    c->r[2] = c->r[30] + 0x00000120u;
    c->r[2] = c->r[2] + 0x00000030u;
    c->r[4] = c->r[3] + 0u;
    { c->r[31] = 0x088880f8u; c->r[5] = c->r[2] + 0u; func_0884c1d8(c, ram); }
    c->r[2] = c->r[30] + 0x00000120u;
    c->r[3] = c->r[2] + 0x00000040u;
    c->r[5] = c->r[30] + 0x00000120u;
    c->r[2] = c->r[30] + 0x000000e0u;
    c->r[2] = c->r[2] + 0x00000030u;
    c->r[4] = c->r[3] + 0u;
    { c->r[31] = 0x08888118u; c->r[6] = c->r[2] + 0u; func_0884d26c(c, ram); }
    c->r[2] = c->r[30] + 0x00000120u;
    c->r[3] = c->r[2] + 0x00000040u;
    c->r[2] = c->r[30] + 0x00000120u;
    c->r[2] = c->r[2] + 0x00000040u;
    c->r[4] = c->r[3] + 0u;
    { c->r[31] = 0x08888134u; c->r[5] = c->r[2] + 0u; func_0884c1d8(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000050u, 0u);
L_08888138:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000050u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000005u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_08888150; }
    { goto L_088881c8; }
L_08888150:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000054u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000050u);
    c->r[2] = c->r[2] << 4;
    c->r[2] = c->r[2] + c->r[30];
    c->r[2] = c->r[2] + 0x00000120u;
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000000u);
    mem_wf32(ram, c->r[3] + 0x00000000u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000054u);
    c->r[3] = c->r[2] + 0x00000004u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000050u);
    c->r[2] = c->r[2] << 4;
    c->r[2] = c->r[2] + c->r[30];
    c->r[2] = c->r[2] + 0x00000120u;
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000004u);
    mem_wf32(ram, c->r[3] + 0x00000000u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000054u);
    c->r[3] = c->r[2] + 0x00000008u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000050u);
    c->r[2] = c->r[2] << 4;
    c->r[2] = c->r[2] + c->r[30];
    c->r[2] = c->r[2] + 0x00000120u;
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000008u);
    mem_wf32(ram, c->r[3] + 0x00000000u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000054u);
    c->r[2] = c->r[2] + 0x0000000cu;
    mem_w32(ram, c->r[30] + 0x00000054u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000050u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000050u, c->r[2]); goto L_08888138; }
L_088881c8:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x00000050u;
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000058u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000058u, c->r[2]); goto L_08887c30; }
L_088881e4:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000184u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000180u);
    { c->r[29] = c->r[29] + 0x00000190u; return; }
    return; /* fell out of func_088876fc */
}

/* func_0888c134  0x0888c134..0x0888c15c  40 bytes, source=sweep */
void func_0888c134(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0888c134u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000008u);
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_0888c134 */
}

/* func_0888ccb4  0x0888ccb4..0x0888ccec  56 bytes, source=sweep */
void func_0888ccb4(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0888ccb4u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_wf32(ram, c->r[30] + 0x00000004u, c->f[12]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x0888ccd8u; c->f[12] = mem_rf32(ram, c->r[30] + 0x00000004u); func_0888d1a4(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_0888ccb4 */
}

/* func_0888dad4  0x0888dad4..0x0888dafc  40 bytes, source=sweep */
void func_0888dad4(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0888dad4u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    mem_w32(ram, c->r[2] + 0x00000000u, 0u);
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_0888dad4 */
}

/* func_08891690  0x08891690..0x08891c28  1432 bytes, source=sweep */
void func_08891690(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08891690u);
    c->r[29] = c->r[29] + 0xfffffe60u;
    mem_w32(ram, c->r[29] + 0x00000194u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000190u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    c->r[2] = c->r[30] + 0x00000010u;
    c->r[4] = c->r[2] + 0u;
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000004u);
    { c->r[31] = 0x088916bcu; c->r[6] = 0x00010000u; func_0888c0e4(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000110u, 0u);
    mem_w32(ram, c->r[30] + 0x00000114u, 0u);
L_088916c4:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[3] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000114u);
    c->r[2] = ((s32)c->r[2] < (s32)c->r[3]) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_088916e8; }
    { goto L_08891c08; }
L_088916e8:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x00000008u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000114u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000000u);
    c->r[3] = c->r[2] << 9;
    c->r[2] = mem_r32(ram, c->r[4] + 0x0000000cu);
    c->r[2] = c->r[2] + c->r[3];
    mem_w32(ram, c->r[30] + 0x00000118u, c->r[2]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000114u);
    c->r[3] = c->r[2] << 9;
    c->r[2] = mem_r32(ram, c->r[4] + 0x00000014u);
    c->r[2] = c->r[2] + c->r[3];
    mem_w32(ram, c->r[30] + 0x0000011cu, c->r[2]);
    mem_w32(ram, c->r[30] + 0x00000120u, 0u);
L_0889172c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000120u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000004u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_08891744; }
    { goto L_08891bf8; }
L_08891744:
    c->r[2] = 0x08a40000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x000040f0u);
    mem_w32(ram, c->r[30] + 0x00000130u, c->r[2]);
    c->r[2] = 0x08a40000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x000040f4u);
    mem_w32(ram, c->r[30] + 0x00000134u, c->r[2]);
    c->r[2] = 0x08a40000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x000040f8u);
    mem_w32(ram, c->r[30] + 0x00000138u, c->r[2]);
    c->r[2] = 0x08a40000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x000040fcu);
    mem_w32(ram, c->r[30] + 0x0000013cu, c->r[2]);
    c->r[2] = 0u + 0x00000001u;
    mem_w32(ram, c->r[30] + 0x00000140u, c->r[2]);
    c->r[2] = 0u + 0x00000001u;
    mem_w32(ram, c->r[30] + 0x00000144u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000010u);
    mem_w32(ram, c->r[30] + 0x00000148u, c->r[2]);
    c->r[4] = c->r[30] + 0x00000010u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000148u);
    c->r[2] = c->r[2] >> 24;
    c->r[2] = c->r[2] & 0x000fu;
    c->r[3] = c->r[2] << 16;
    c->r[2] = 0x10000000u;
    c->r[2] = c->r[3] | c->r[2];
    { c->r[31] = 0x088917b4u; c->r[5] = c->r[2] + 0u; func_0888b984(c, ram); }
    mem_w32(ram, c->r[30] + 0x0000014cu, 0u);
L_088917b8:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000014cu);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000040u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_088917d0; }
    { goto L_08891b4c; }
L_088917d0:
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000014cu);
    c->r[2] = (u32)((s32)c->r[3] >> 31);
    c->r[2] = c->r[2] >> 29;
    c->r[2] = c->r[3] + c->r[2];
    c->r[5] = (u32)((s32)c->r[2] >> 3);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000014cu);
    c->r[2] = (u32)((s32)c->r[3] >> 31);
    c->r[2] = c->r[2] >> 29;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = (u32)((s32)c->r[2] >> 3);
    c->r[2] = c->r[2] << 3;
    c->r[3] = c->r[3] - c->r[2];
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000120u);
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[30];
    c->r[4] = c->r[2] + 0x00000130u;
    c->r[2] = c->r[5] + 0u;
    c->r[2] = c->r[2] << 4;
    c->r[3] = c->r[2] + c->r[3];
    c->r[2] = mem_r32(ram, c->r[4] + 0x00000000u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[3] = c->r[2] << 1;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000118u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r16(ram, c->r[2] + 0x00000000u);
    mem_w16(ram, c->r[30] + 0x00000150u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000014cu);
    c->r[2] = (u32)((s32)c->r[3] >> 31);
    c->r[2] = c->r[2] >> 29;
    c->r[2] = c->r[3] + c->r[2];
    c->r[5] = (u32)((s32)c->r[2] >> 3);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000014cu);
    c->r[2] = (u32)((s32)c->r[3] >> 31);
    c->r[2] = c->r[2] >> 29;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = (u32)((s32)c->r[2] >> 3);
    c->r[2] = c->r[2] << 3;
    c->r[3] = c->r[3] - c->r[2];
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000120u);
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[30];
    c->r[4] = c->r[2] + 0x00000130u;
    c->r[2] = c->r[5] + 0u;
    c->r[2] = c->r[2] << 4;
    c->r[3] = c->r[2] + c->r[3];
    c->r[2] = mem_r32(ram, c->r[4] + 0x00000000u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[3] = c->r[2] << 1;
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000011cu);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r16(ram, c->r[2] + 0x00000000u);
    mem_w16(ram, c->r[30] + 0x00000152u, c->r[2]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r16(ram, c->r[30] + 0x00000150u);
    c->r[3] = c->r[2] & 0x0fffu;
    c->r[2] = 0u + 0x00000118u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[3] = c->lo;
    c->r[2] = mem_r32(ram, c->r[4] + 0x00000010u);
    c->r[2] = c->r[2] + c->r[3];
    mem_w32(ram, c->r[30] + 0x00000154u, c->r[2]);
    c->r[4] = c->r[30] + 0x00000010u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000154u);
    c->r[2] = 0x00ff0000u;
    c->r[2] = c->r[2] | 0xffffu;
    c->r[3] = c->r[3] & c->r[2];
    c->r[2] = 0x01000000u;
    c->r[2] = c->r[3] | c->r[2];
    { c->r[31] = 0x088918e8u; c->r[5] = c->r[2] + 0u; func_0888b984(c, ram); }
    c->r[2] = mem_r16(ram, c->r[30] + 0x00000150u);
    c->r[2] = c->r[2] & 0x4000u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_08891940; }
L_088918f8:
    mem_w32(ram, c->r[30] + 0x00000144u, 0u);
    c->r[2] = c->r[30] + 0x00000010u;
    { c->r[31] = 0x08891908u; c->r[4] = c->r[2] + 0u; func_0888c21c(c, ram); }
    c->r[2] = c->r[30] + 0x00000010u;
    { c->r[31] = 0x08891914u; c->r[4] = c->r[2] + 0u; func_0888c21c(c, ram); }
    c->r[2] = c->r[30] + 0x00000010u;
    { c->r[31] = 0x08891920u; c->r[4] = c->r[2] + 0u; func_0888c21c(c, ram); }
    c->r[2] = c->r[30] + 0x00000010u;
    { c->r[31] = 0x0889192cu; c->r[4] = c->r[2] + 0u; func_0888c21c(c, ram); }
    c->r[2] = c->r[30] + 0x00000010u;
    { c->r[31] = 0x08891938u; c->r[4] = c->r[2] + 0u; func_0888c21c(c, ram); }
    { goto L_08891b3c; }
L_08891940:
    c->r[2] = mem_r16(ram, c->r[30] + 0x00000152u);
    c->r[2] = c->r[2] & 0x03ffu;
    mem_w32(ram, c->r[30] + 0x00000158u, c->r[2]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000158u);
    c->r[2] = (u32)((s32)c->r[3] >> 31);
    c->r[2] = c->r[2] >> 24;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = (u32)((s32)c->r[2] >> 8);
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[4];
    c->r[4] = c->r[2] + 0x00000010u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000158u);
    c->r[2] = (u32)((s32)c->r[3] >> 31);
    c->r[2] = c->r[2] >> 24;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = (u32)((s32)c->r[2] >> 8);
    c->r[2] = c->r[2] << 8;
    c->r[2] = c->r[3] - c->r[2];
    c->r[3] = c->r[2] << 12;
    c->r[2] = mem_r32(ram, c->r[4] + 0x0000000cu);
    c->r[2] = c->r[2] + c->r[3];
    mem_w32(ram, c->r[30] + 0x00000170u, c->r[2]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000158u);
    c->r[3] = c->r[2] << 10;
    c->r[2] = mem_r32(ram, c->r[4] + 0x0000002cu);
    c->r[2] = c->r[2] + c->r[3];
    mem_w32(ram, c->r[30] + 0x00000174u, c->r[2]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000158u);
    c->r[3] = c->r[2] << 8;
    c->r[2] = mem_r32(ram, c->r[4] + 0x00000030u);
    c->r[2] = c->r[2] + c->r[3];
    mem_w32(ram, c->r[30] + 0x00000178u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000170u);
    mem_w32(ram, c->r[30] + 0x00000160u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000174u);
    mem_w32(ram, c->r[30] + 0x00000164u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000178u);
    mem_w32(ram, c->r[30] + 0x00000168u, c->r[2]);
    mem_w32(ram, c->r[30] + 0x00000180u, 0u);
    mem_w32(ram, c->r[30] + 0x00000184u, 0u);
    mem_w32(ram, c->r[30] + 0x00000188u, 0u);
L_088919f0:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000188u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000400u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_08891a08; }
    { goto L_08891a84; }
L_08891a08:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000164u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000188u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000000u);
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + 0x00000003u;
    mem_w32(ram, c->r[30] + 0x0000018cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x00000018u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000018cu);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000000u);
    c->r[2] = (c->r[2] < 0x00000010u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_08891a4c; }
    c->r[2] = 0u + 0x00000001u;
    mem_w32(ram, c->r[30] + 0x00000180u, c->r[2]);
L_08891a4c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x00000018u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000018cu);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000000u);
    c->r[2] = (c->r[2] < 0x000000f0u) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_08891a74; }
    c->r[2] = 0u + 0x00000001u;
    mem_w32(ram, c->r[30] + 0x00000184u, c->r[2]);
L_08891a74:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000188u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000188u, c->r[2]); goto L_088919f0; }
L_08891a84:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000180u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_08891a98; }
    { goto L_088918f8; }
L_08891a98:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000184u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_08891aa8; }
    mem_w32(ram, c->r[30] + 0x00000144u, 0u);
L_08891aa8:
    mem_w32(ram, c->r[30] + 0x00000140u, 0u);
    c->r[4] = c->r[30] + 0x00000010u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000160u);
    c->r[2] = 0x00ff0000u;
    c->r[2] = c->r[2] | 0xffffu;
    c->r[3] = c->r[3] & c->r[2];
    c->r[2] = 0xa0000000u;
    c->r[2] = c->r[3] | c->r[2];
    { c->r[31] = 0x08891ad0u; c->r[5] = c->r[2] + 0u; func_0888b984(c, ram); }
    c->r[4] = c->r[30] + 0x00000010u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000164u);
    c->r[2] = 0x00ff0000u;
    c->r[2] = c->r[2] | 0xffffu;
    c->r[3] = c->r[3] & c->r[2];
    c->r[2] = 0xa1000000u;
    c->r[2] = c->r[3] | c->r[2];
    { c->r[31] = 0x08891af4u; c->r[5] = c->r[2] + 0u; func_0888b984(c, ram); }
    c->r[4] = c->r[30] + 0x00000010u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000168u);
    c->r[2] = 0x00ff0000u;
    c->r[2] = c->r[2] | 0xffffu;
    c->r[3] = c->r[3] & c->r[2];
    c->r[2] = 0xa2000000u;
    c->r[2] = c->r[3] | c->r[2];
    { c->r[31] = 0x08891b18u; c->r[5] = c->r[2] + 0u; func_0888b984(c, ram); }
    c->r[2] = c->r[30] + 0x00000010u;
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x08891b28u; c->r[5] = 0xcb000000u; func_0888b984(c, ram); }
    c->r[2] = c->r[30] + 0x00000010u;
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0x04050000u;
    { c->r[31] = 0x08891b3cu; c->r[5] = c->r[5] | 0x000au; func_0888b984(c, ram); }
L_08891b3c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000014cu);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x0000014cu, c->r[2]); goto L_088917b8; }
L_08891b4c:
    c->r[2] = c->r[30] + 0x00000010u;
    { c->r[31] = 0x08891b58u; c->r[4] = c->r[2] + 0u; func_0888c250(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x00000074u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000110u);
    c->r[2] = c->r[3] + c->r[2];
    mem_w8(ram, c->r[2] + 0x00000000u, 0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000140u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_08891ba4; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x00000074u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000110u);
    c->r[4] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x00000074u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000110u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000000u);
    c->r[2] = c->r[2] | 0x0001u;
    mem_w8(ram, c->r[4] + 0x00000000u, c->r[2]);
L_08891ba4:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000144u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_08891bdc; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x00000074u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000110u);
    c->r[4] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x00000074u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000110u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000000u);
    c->r[2] = c->r[2] | 0x0002u;
    mem_w8(ram, c->r[4] + 0x00000000u, c->r[2]);
L_08891bdc:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000110u);
    c->r[2] = c->r[2] + 0x00000001u;
    mem_w32(ram, c->r[30] + 0x00000110u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000120u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000120u, c->r[2]); goto L_0889172c; }
L_08891bf8:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000114u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000114u, c->r[2]); goto L_088916c4; }
L_08891c08:
    c->r[2] = c->r[30] + 0x00000010u;
    { c->r[31] = 0x08891c14u; c->r[4] = c->r[2] + 0u; func_0888c134(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000194u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000190u);
    { c->r[29] = c->r[29] + 0x000001a0u; return; }
    return; /* fell out of func_08891690 */
}

/* func_088981c4  0x088981c4..0x088984dc  792 bytes, source=indirect */
void func_088981c4(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x088981c4u);
L_088981c4:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000000u);
    { mem_wf32(ram, c->r[30] + 0x00000024u, c->f[0]); goto L_08898220; }
L_088981d4:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000000u);
    { mem_wf32(ram, c->r[30] + 0x00000024u, c->f[0]); goto L_08898220; }
L_088981e4:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000008u);
    { mem_wf32(ram, c->r[30] + 0x00000024u, c->f[0]); goto L_08898220; }
L_088981f4:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000008u);
    { mem_wf32(ram, c->r[30] + 0x00000024u, c->f[0]); goto L_08898220; }
L_08898204:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000004u);
    { mem_wf32(ram, c->r[30] + 0x00000024u, c->f[0]); goto L_08898220; }
L_08898214:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000004u);
    mem_wf32(ram, c->r[30] + 0x00000024u, c->f[0]);
L_08898220:
    c->r[4] = c->r[30] + 0x000000b0u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[3] = c->r[2] << 4;
    c->r[2] = 0x08a90000u;
    c->r[2] = c->r[2] + 0xffffed40u;
    c->r[2] = c->r[3] + c->r[2];
    { c->r[31] = 0x08898240u; c->r[5] = c->r[2] + 0u; func_0885a018(c, ram); }
    c->f[1] = c->f[0];
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000024u);
    c->f[0] = c->f[1] - c->f[0];
    mem_wf32(ram, c->r[30] + 0x00000030u, c->f[0]);
    c->r[4] = c->r[30] + 0x000000c0u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[3] = c->r[2] << 4;
    c->r[2] = 0x08a90000u;
    c->r[2] = c->r[2] + 0xffffed40u;
    c->r[2] = c->r[3] + c->r[2];
    { c->r[31] = 0x08898270u; c->r[5] = c->r[2] + 0u; func_0885a018(c, ram); }
    c->f[1] = c->f[0];
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000024u);
    c->f[0] = c->f[1] - c->f[0];
    mem_wf32(ram, c->r[30] + 0x00000034u, c->f[0]);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000030u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000034u);
    c->f[1] = c->f[1] * c->f[0];
    c->f[0] = u2f(0u);
    alx_c_cond_s(c, 14, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_088984b0; }
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000030u);
    c->f[1] = -c->f[0];
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000044u);
    c->f[0] = c->f[1] / c->f[0];
    mem_wf32(ram, c->r[30] + 0x00000040u, c->f[0]);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000014u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000040u);
    alx_c_cond_s(c, 12, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_088984b0; }
    c->r[2] = c->r[30] + 0x00000050u;
    c->r[3] = c->r[30] + 0x000000d0u;
    c->r[4] = c->r[2] + 0u;
    c->r[5] = c->r[3] + 0u;
    { c->r[31] = 0x088982e4u; c->f[12] = mem_rf32(ram, c->r[30] + 0x00000040u); func_0884c224(c, ram); }
    c->r[2] = c->r[30] + 0x00000050u;
    c->r[3] = c->r[30] + 0x00000050u;
    c->r[6] = c->r[30] + 0x000000b0u;
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x088982fcu; c->r[5] = c->r[3] + 0u; func_08859fd4(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = (c->r[2] < 0x00000006u) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_088984a4; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08a40000u;
    c->r[2] = c->r[2] + 0x00004224u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    { u32 _t = c->r[2]; switch (_t) { case 0x088981c4u: goto L_088981c4; case 0x088981d4u: goto L_088981d4; case 0x088981e4u: goto L_088981e4; case 0x088981f4u: goto L_088981f4; case 0x08898204u: goto L_08898204; case 0x08898214u: goto L_08898214; case 0x0889832cu: goto L_0889832c; case 0x088983acu: goto L_088983ac; case 0x0889842cu: goto L_0889842c; default: recomp_trap_unknown_indirect(c, ram, 0x08898324u, _t); return; } }
L_0889832c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000004u);
    c->f[1] = -c->f[0];
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000054u);
    alx_c_cond_s(c, 12, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_088984b0; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000054u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000004u);
    alx_c_cond_s(c, 12, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_088984b0; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000008u);
    c->f[1] = -c->f[0];
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000058u);
    alx_c_cond_s(c, 12, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_088984b0; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000058u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000008u);
    alx_c_cond_s(c, 12, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_088984b0; }
    { goto L_088984a4; }
L_088983ac:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000000u);
    c->f[1] = -c->f[0];
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000050u);
    alx_c_cond_s(c, 12, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_088984b0; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000050u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000000u);
    alx_c_cond_s(c, 12, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_088984b0; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000004u);
    c->f[1] = -c->f[0];
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000054u);
    alx_c_cond_s(c, 12, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_088984b0; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000054u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000004u);
    alx_c_cond_s(c, 12, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_088984b0; }
    { goto L_088984a4; }
L_0889842c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000000u);
    c->f[1] = -c->f[0];
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000050u);
    alx_c_cond_s(c, 12, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_088984b0; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000050u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000000u);
    alx_c_cond_s(c, 12, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_088984b0; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000008u);
    c->f[1] = -c->f[0];
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000058u);
    alx_c_cond_s(c, 12, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_088984b0; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000058u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000008u);
    alx_c_cond_s(c, 12, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_088984b0; }
L_088984a4:
    c->r[2] = 0u + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000128u, c->r[2]); goto L_088984c4; }
L_088984b0:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000020u, c->r[2]); recomp_call_indirect(c, ram, 0x088984b8u, 0x08898148u); return; }
    mem_w32(ram, c->r[30] + 0x00000128u, 0u);
L_088984c4:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000128u);
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000134u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000130u);
    { c->r[29] = c->r[29] + 0x00000140u; return; }
    return; /* fell out of func_088981c4 */
}

/* func_0889a2f4  0x0889a2f4..0x0889a338  68 bytes, source=sweep */
void func_0889a2f4(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0889a2f4u);
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
    { c->r[31] = 0x0889a324u; c->r[5] = c->r[2] + 0u; func_088998c8(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_0889a2f4 */
}

/* func_0889eabc  0x0889eabc..0x0889eb0c  80 bytes, source=sweep */
void func_0889eabc(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0889eabcu);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_0889eaf0; }
    { c->r[31] = 0x0889eae8u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u); func_0889ed98(c, ram); }
    { goto L_0889eaf8; }
L_0889eaf0:
    { c->r[31] = 0x0889eaf8u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u); func_0889edd0(c, ram); }
L_0889eaf8:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_0889eabc */
}

/* func_0889fa48  0x0889fa48..0x0889fa98  80 bytes, source=sweep */
void func_0889fa48(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0889fa48u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[6]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[2] + 0x00000018u;
    c->r[3] = c->r[2] << 24;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[3] | c->r[2];
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x0889fa84u; c->r[5] = c->r[2] + 0u; func_0889eb70(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_0889fa48 */
}

/* func_088a3c54  0x088a3c54..0x088a3d24  208 bytes, source=sweep */
void func_088a3c54(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x088a3c54u);
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
    return; /* fell out of func_088a3c54 */
}

/* func_088ad1ec  0x088ad1ec..0x088ad228  60 bytes, source=sweep */
void func_088ad1ec(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x088ad1ecu);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000004u);
    { c->r[31] = 0x088ad214u; c->r[6] = 0u + 0x00000001u; func_088ad8b0(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_088ad1ec */
}

/* func_088ae190  0x088ae190..0x088ae1c0  48 bytes, source=sweep */
void func_088ae190(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x088ae190u);
    c->r[29] = c->r[29] + 0xfffffff0u;
    mem_w32(ram, c->r[29] + 0x00000004u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000000u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    c->r[4] = 0u + 0x00000001u;
    { c->r[31] = 0x088ae1acu; c->r[5] = 0u | 0xffffu; func_088a8708(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000004u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000000u);
    { c->r[29] = c->r[29] + 0x00000010u; return; }
    return; /* fell out of func_088ae190 */
}

/* func_088b2938  0x088b2938..0x088b297c  68 bytes, source=sweep */
void func_088b2938(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x088b2938u);
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
    { c->r[31] = 0x088b2968u; c->r[5] = c->r[2] + 0u; func_088b1ee0(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_088b2938 */
}

/* func_088b6d08  0x088b6d08..0x088b6d70  104 bytes, source=sweep */
void func_088b6d08(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x088b6d08u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_wf32(ram, c->r[30] + 0x00000000u, c->f[12]);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000000u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000049fcu);
    alx_c_cond_s(c, 12, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_088b6d3c; }
    { goto L_088b6d4c; }
L_088b6d3c:
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000049fcu);
    { mem_wf32(ram, c->r[30] + 0x00000004u, c->f[0]); goto L_088b6d54; }
L_088b6d4c:
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000000u);
    mem_wf32(ram, c->r[30] + 0x00000004u, c->f[0]);
L_088b6d54:
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000004u);
    c->r[1] = 0x08a50000u;
    mem_wf32(ram, c->r[1] + 0x00006c10u, c->f[0]);
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_088b6d08 */
}

/* func_088bca84  0x088bca84..0x088be14c  5832 bytes, source=fde */
void func_088bca84(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x088bca84u);
    c->r[29] = c->r[29] + 0xfffffc20u;
    mem_w32(ram, c->r[29] + 0x000003d8u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x000003d4u, c->r[30]);
    mem_w32(ram, c->r[29] + 0x000003d0u, c->r[16]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x000000e0u;
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000020u;
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[3];
    c->r[2] = c->r[2] + 0x000000c0u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[4] = mem_r32(ram, c->r[2] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[3] + 0x0000000cu);
    c->r[2] = c->r[4] + c->r[2];
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
    c->r[2] = c->r[30] + 0x00000020u;
    { c->r[31] = 0x088bcafcu; c->r[4] = c->r[2] + 0u; func_08808260(c, ram); }
    c->r[2] = c->r[30] + 0x00000020u;
    c->r[4] = c->r[2] + 0u;
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x088bcb10u; c->r[6] = mem_r32(ram, c->r[30] + 0x00000004u); func_088bc998(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000004u);
    mem_w32(ram, c->r[30] + 0x00000060u, c->r[2]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = c->r[2] << 5;
    c->r[2] = mem_r32(ram, c->r[4] + 0x00000004u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = c->r[2] + 0x00000020u;
    mem_w32(ram, c->r[30] + 0x00000064u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000060u);
    c->r[4] = mem_r32(ram, c->r[2] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[3] + 0x0000001cu);
    c->r[3] = c->r[4] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[2] = c->r[3] + c->r[2];
    mem_w32(ram, c->r[30] + 0x00000068u, c->r[2]);
    c->r[2] = c->r[30] + 0x00000070u;
    { c->r[31] = 0x088bcb68u; c->r[4] = c->r[2] + 0u; func_08808260(c, ram); }
    c->r[2] = c->r[30] + 0x00000070u;
    { c->r[31] = 0x088bcb74u; c->r[4] = c->r[2] + 0u; func_08808280(c, ram); }
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
    c->r[3] = c->r[30] + 0x00000070u;
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0u + 0x00000002u;
    { c->r[31] = 0x088bcbc4u; c->r[6] = c->r[3] + 0u; func_088be29c(c, ram); }
    c->r[2] = c->r[30] + 0x000000b0u;
    mem_w32(ram, c->r[30] + 0x000001b0u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x000001b0u);
    mem_w32(ram, c->r[30] + 0x000001b4u, c->r[2]);
    c->r[2] = 0u + 0x0000000fu;
    mem_w32(ram, c->r[30] + 0x000001b8u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x000001b8u);
    c->r[2] = 0u + 0xffffffffu;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_088bcc1c; }
L_088bcbec:
    { c->r[31] = 0x088bcbf4u; c->r[4] = mem_r32(ram, c->r[30] + 0x000001b4u); func_08808240(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x000001b4u);
    c->r[2] = c->r[2] + 0x00000010u;
    mem_w32(ram, c->r[30] + 0x000001b4u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x000001b8u);
    c->r[2] = c->r[2] + 0xffffffffu;
    c->r[3] = c->r[2] + 0u;
    mem_w32(ram, c->r[30] + 0x000001b8u, c->r[3]);
    c->r[2] = 0u + 0xffffffffu;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_088bcbec; }
L_088bcc1c:
    c->r[2] = c->r[30] + 0x000001c0u;
    mem_w32(ram, c->r[30] + 0x000001b8u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x000001b8u);
    mem_w32(ram, c->r[30] + 0x000001b4u, c->r[2]);
    c->r[2] = 0u + 0x0000000fu;
    mem_w32(ram, c->r[30] + 0x000001b0u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x000001b0u);
    c->r[2] = 0u + 0xffffffffu;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_088bcc74; }
L_088bcc44:
    { c->r[31] = 0x088bcc4cu; c->r[4] = mem_r32(ram, c->r[30] + 0x000001b4u); func_08808240(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x000001b4u);
    c->r[2] = c->r[2] + 0x00000010u;
    mem_w32(ram, c->r[30] + 0x000001b4u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x000001b0u);
    c->r[2] = c->r[2] + 0xffffffffu;
    c->r[3] = c->r[2] + 0u;
    mem_w32(ram, c->r[30] + 0x000001b0u, c->r[3]);
    c->r[2] = 0u + 0xffffffffu;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_088bcc44; }
L_088bcc74:
    c->r[2] = c->r[30] + 0x000002c0u;
    mem_w32(ram, c->r[30] + 0x000001b8u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x000001b8u);
    mem_w32(ram, c->r[30] + 0x000001b4u, c->r[2]);
    c->r[2] = 0u + 0x0000000fu;
    mem_w32(ram, c->r[30] + 0x000001b0u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x000001b0u);
    c->r[2] = 0u + 0xffffffffu;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_088bcccc; }
L_088bcc9c:
    { c->r[31] = 0x088bcca4u; c->r[4] = mem_r32(ram, c->r[30] + 0x000001b4u); func_08808240(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x000001b4u);
    c->r[2] = c->r[2] + 0x00000010u;
    mem_w32(ram, c->r[30] + 0x000001b4u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x000001b0u);
    c->r[2] = c->r[2] + 0xffffffffu;
    c->r[3] = c->r[2] + 0u;
    mem_w32(ram, c->r[30] + 0x000001b0u, c->r[3]);
    c->r[2] = 0u + 0xffffffffu;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_088bcc9c; }
L_088bcccc:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = mem_r16(ram, c->r[2] + 0x00000004u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_088bd3ac; }
    mem_w32(ram, c->r[30] + 0x000001b8u, 0u);
L_088bcce0:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[3] = mem_r16(ram, c->r[2] + 0x00000004u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = mem_r32(ram, c->r[30] + 0x000001b8u);
    c->r[2] = ((s32)c->r[3] < (s32)c->r[2]) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_088bcd0c; }
    { goto L_088bd3ac; }
L_088bcd0c:
    c->r[3] = mem_r32(ram, c->r[30] + 0x000001b8u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 2;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000068u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = c->r[2] + 0x00000028u;
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000008u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000050u);
    c->f[0] = c->f[1] + c->f[0];
    mem_wf32(ram, c->r[30] + 0x000000b0u, c->f[0]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x000001b8u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 2;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000068u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = c->r[2] + 0x00000028u;
    c->f[1] = mem_rf32(ram, c->r[2] + 0x0000000cu);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000054u);
    c->f[0] = c->f[1] + c->f[0];
    mem_wf32(ram, c->r[30] + 0x000000b4u, c->f[0]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x000001b8u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 2;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000068u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = c->r[2] + 0x00000028u;
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000010u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000058u);
    c->f[0] = c->f[1] + c->f[0];
    mem_wf32(ram, c->r[30] + 0x000000b8u, c->f[0]);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00004bf4u);
    mem_wf32(ram, c->r[30] + 0x000000bcu, c->f[0]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x000001b8u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 2;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000068u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = c->r[2] + 0x00000014u;
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000008u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000050u);
    c->f[0] = c->f[1] + c->f[0];
    mem_wf32(ram, c->r[30] + 0x000000c0u, c->f[0]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x000001b8u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 2;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000068u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = c->r[2] + 0x00000014u;
    c->f[1] = mem_rf32(ram, c->r[2] + 0x0000000cu);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000054u);
    c->f[0] = c->f[1] + c->f[0];
    mem_wf32(ram, c->r[30] + 0x000000c4u, c->f[0]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x000001b8u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 2;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000068u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = c->r[2] + 0x00000014u;
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000010u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000058u);
    c->f[0] = c->f[1] + c->f[0];
    mem_wf32(ram, c->r[30] + 0x000000c8u, c->f[0]);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00004bf4u);
    mem_wf32(ram, c->r[30] + 0x000000ccu, c->f[0]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x000001b8u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 2;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000068u);
    c->r[2] = c->r[3] + c->r[2];
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000008u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000050u);
    c->f[0] = c->f[1] + c->f[0];
    mem_wf32(ram, c->r[30] + 0x000000d0u, c->f[0]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x000001b8u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 2;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000068u);
    c->r[2] = c->r[3] + c->r[2];
    c->f[1] = mem_rf32(ram, c->r[2] + 0x0000000cu);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000054u);
    c->f[0] = c->f[1] + c->f[0];
    mem_wf32(ram, c->r[30] + 0x000000d4u, c->f[0]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x000001b8u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 2;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000068u);
    c->r[2] = c->r[3] + c->r[2];
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000010u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000058u);
    c->f[0] = c->f[1] + c->f[0];
    mem_wf32(ram, c->r[30] + 0x000000d8u, c->f[0]);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00004bf4u);
    mem_wf32(ram, c->r[30] + 0x000000dcu, c->f[0]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x000001b8u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 2;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000068u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = c->r[2] + 0x00000028u;
    c->r[2] = mem_r16(ram, c->r[2] + 0x00000000u);
    c->f[0] = u2f(c->r[2]);
    c->f[1] = (f32)(s32)f2u(c->f[0]);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00004bf8u);
    c->f[0] = c->f[1] * c->f[0];
    mem_wf32(ram, c->r[30] + 0x000001c0u, c->f[0]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x000001b8u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 2;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000068u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = c->r[2] + 0x00000028u;
    c->r[2] = mem_r16(ram, c->r[2] + 0x00000002u);
    c->f[0] = u2f(c->r[2]);
    c->f[1] = (f32)(s32)f2u(c->f[0]);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00004bf8u);
    c->f[0] = c->f[1] * c->f[0];
    mem_wf32(ram, c->r[30] + 0x000001c4u, c->f[0]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x000001b8u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 2;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000068u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = c->r[2] + 0x00000014u;
    c->r[2] = mem_r16(ram, c->r[2] + 0x00000000u);
    c->f[0] = u2f(c->r[2]);
    c->f[1] = (f32)(s32)f2u(c->f[0]);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00004bf8u);
    c->f[0] = c->f[1] * c->f[0];
    mem_wf32(ram, c->r[30] + 0x000001d0u, c->f[0]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x000001b8u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 2;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000068u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = c->r[2] + 0x00000014u;
    c->r[2] = mem_r16(ram, c->r[2] + 0x00000002u);
    c->f[0] = u2f(c->r[2]);
    c->f[1] = (f32)(s32)f2u(c->f[0]);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00004bf8u);
    c->f[0] = c->f[1] * c->f[0];
    mem_wf32(ram, c->r[30] + 0x000001d4u, c->f[0]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x000001b8u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 2;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000068u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r16(ram, c->r[2] + 0x00000000u);
    c->f[0] = u2f(c->r[2]);
    c->f[1] = (f32)(s32)f2u(c->f[0]);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00004bf8u);
    c->f[0] = c->f[1] * c->f[0];
    mem_wf32(ram, c->r[30] + 0x000001e0u, c->f[0]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x000001b8u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 2;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000068u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r16(ram, c->r[2] + 0x00000002u);
    c->f[0] = u2f(c->r[2]);
    c->f[1] = (f32)(s32)f2u(c->f[0]);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00004bf8u);
    c->f[0] = c->f[1] * c->f[0];
    mem_wf32(ram, c->r[30] + 0x000001e4u, c->f[0]);
    c->r[4] = c->r[30] + 0x000002c0u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x000001b8u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 2;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000068u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = c->r[2] + 0x00000028u;
    { c->r[31] = 0x088bd060u; c->r[5] = mem_r32(ram, c->r[2] + 0x00000004u); func_088b2f18(c, ram); }
    c->r[2] = c->r[30] + 0x000002c0u;
    c->r[4] = c->r[2] + 0x00000010u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x000001b8u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 2;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000068u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = c->r[2] + 0x00000014u;
    { c->r[31] = 0x088bd090u; c->r[5] = mem_r32(ram, c->r[2] + 0x00000004u); func_088b2f18(c, ram); }
    c->r[2] = c->r[30] + 0x000002c0u;
    c->r[4] = c->r[2] + 0x00000020u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x000001b8u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 2;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000068u);
    c->r[2] = c->r[3] + c->r[2];
    { c->r[31] = 0x088bd0bcu; c->r[5] = mem_r32(ram, c->r[2] + 0x00000004u); func_088b2f18(c, ram); }
    c->r[2] = c->r[30] + 0x000000b0u;
    c->r[3] = c->r[30] + 0x000001c0u;
    c->r[6] = c->r[30] + 0x000002c0u;
    c->r[4] = c->r[2] + 0u;
    c->r[5] = c->r[3] + 0u;
    c->r[7] = 0u + 0x00000003u;
    c->r[8] = 0u + 0x0000003fu;
    { c->r[31] = 0x088bd0e0u; c->r[9] = 0u + 0x00000001u; func_089c492c(c, ram); }
    mem_w32(ram, c->r[30] + 0x000001b4u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x000001b4u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000003u) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_088bd0fc; }
    { goto L_088bd39c; }
L_088bd0fc:
    c->r[3] = mem_r32(ram, c->r[30] + 0x000001b4u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[2] = c->r[2] << 3;
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x088bd11cu; c->r[5] = 0u + 0x00000010u; func_0881a1d4(c, ram); }
    mem_w32(ram, c->r[30] + 0x000001b0u, c->r[2]);
    mem_w32(ram, c->r[30] + 0x000003c0u, 0u);
L_088bd124:
    c->r[2] = mem_r32(ram, c->r[30] + 0x000003c0u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x000001b4u);
    c->r[2] = ((s32)c->r[2] < (s32)c->r[3]) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_088bd140; }
    { goto L_088bd294; }
L_088bd140:
    c->r[3] = mem_r32(ram, c->r[30] + 0x000003c0u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 3;
    c->r[2] = mem_r32(ram, c->r[30] + 0x000001b0u);
    c->r[3] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[30] + 0x000003c0u);
    c->r[2] = c->r[2] << 4;
    c->r[2] = c->r[2] + c->r[30];
    c->r[2] = c->r[2] + 0x000000b0u;
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000000u);
    mem_wf32(ram, c->r[3] + 0x0000000cu, c->f[0]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x000003c0u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 3;
    c->r[2] = mem_r32(ram, c->r[30] + 0x000001b0u);
    c->r[3] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[30] + 0x000003c0u);
    c->r[2] = c->r[2] << 4;
    c->r[2] = c->r[2] + c->r[30];
    c->r[2] = c->r[2] + 0x000000b0u;
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000004u);
    mem_wf32(ram, c->r[3] + 0x00000010u, c->f[0]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x000003c0u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 3;
    c->r[2] = mem_r32(ram, c->r[30] + 0x000001b0u);
    c->r[3] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[30] + 0x000003c0u);
    c->r[2] = c->r[2] << 4;
    c->r[2] = c->r[2] + c->r[30];
    c->r[2] = c->r[2] + 0x000000b0u;
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000008u);
    mem_wf32(ram, c->r[3] + 0x00000014u, c->f[0]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x000003c0u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 3;
    c->r[2] = mem_r32(ram, c->r[30] + 0x000001b0u);
    c->r[3] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[30] + 0x000003c0u);
    c->r[2] = c->r[2] << 4;
    c->r[2] = c->r[2] + c->r[30];
    c->r[2] = c->r[2] + 0x000001c0u;
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000000u);
    c->f[0] = c->f[0] + c->f[0];
    mem_wf32(ram, c->r[3] + 0x00000000u, c->f[0]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x000003c0u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 3;
    c->r[2] = mem_r32(ram, c->r[30] + 0x000001b0u);
    c->r[3] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[30] + 0x000003c0u);
    c->r[2] = c->r[2] << 4;
    c->r[2] = c->r[2] + c->r[30];
    c->r[2] = c->r[2] + 0x000001c0u;
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000004u);
    c->f[0] = c->f[0] + c->f[0];
    mem_wf32(ram, c->r[3] + 0x00000004u, c->f[0]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x000003c0u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 3;
    c->r[2] = mem_r32(ram, c->r[30] + 0x000001b0u);
    c->r[16] = c->r[3] + c->r[2];
    c->r[3] = c->r[30] + 0x000002c0u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x000003c0u);
    c->r[2] = c->r[2] << 4;
    c->r[2] = c->r[3] + c->r[2];
    { c->r[31] = 0x088bd280u; c->r[4] = c->r[2] + 0u; func_0888d9b8(c, ram); }
    mem_w32(ram, c->r[16] + 0x00000008u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x000003c0u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x000003c0u, c->r[2]); goto L_088bd124; }
L_088bd294:
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
    c->r[2] = mem_r32(ram, c->r[30] + 0x000001b0u);
    c->r[2] = c->r[2] >> 24;
    c->r[2] = c->r[2] & 0x000fu;
    c->r[3] = c->r[2] << 16;
    c->r[2] = 0x10000000u;
    c->r[2] = c->r[3] | c->r[2];
    { c->r[31] = 0x088bd2f0u; c->r[5] = c->r[2] + 0u; func_088be14c(c, ram); }
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
    c->r[3] = mem_r32(ram, c->r[30] + 0x000001b0u);
    c->r[2] = 0x00ff0000u;
    c->r[2] = c->r[2] | 0xffffu;
    c->r[3] = c->r[3] & c->r[2];
    c->r[2] = 0x01000000u;
    c->r[2] = c->r[3] | c->r[2];
    { c->r[31] = 0x088bd34cu; c->r[5] = c->r[2] + 0u; func_088be14c(c, ram); }
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
    c->r[3] = mem_r32(ram, c->r[30] + 0x000001b4u);
    c->r[2] = 0x04050000u;
    c->r[2] = c->r[3] | c->r[2];
    { c->r[31] = 0x088bd39cu; c->r[5] = c->r[2] + 0u; func_088be14c(c, ram); }
L_088bd39c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x000001b8u);
    c->r[2] = c->r[2] + 0x00000003u;
    { mem_w32(ram, c->r[30] + 0x000001b8u, c->r[2]); goto L_088bcce0; }
L_088bd3ac:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[3] = mem_r16(ram, c->r[2] + 0x00000004u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 4;
    c->r[2] = c->r[2] - c->r[3];
    c->r[3] = c->r[2] << 2;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000068u);
    c->r[2] = c->r[2] + c->r[3];
    mem_w32(ram, c->r[30] + 0x00000068u, c->r[2]);
    mem_w32(ram, c->r[30] + 0x000003c0u, 0u);
    mem_w32(ram, c->r[30] + 0x000001b8u, 0u);
L_088bd3d8:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = mem_r16(ram, c->r[2] + 0x00000006u);
    c->r[3] = c->r[2] << 2;
    c->r[2] = mem_r32(ram, c->r[30] + 0x000001b8u);
    c->r[2] = ((s32)c->r[2] < (s32)c->r[3]) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_088bd3fc; }
    { goto L_088be134; }
L_088bd3fc:
    c->r[3] = mem_r32(ram, c->r[30] + 0x000001b8u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 2;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000068u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = c->r[2] + 0x00000028u;
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000008u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000050u);
    c->f[0] = c->f[1] + c->f[0];
    mem_wf32(ram, c->r[30] + 0x000000b0u, c->f[0]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x000001b8u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 2;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000068u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = c->r[2] + 0x00000028u;
    c->f[1] = mem_rf32(ram, c->r[2] + 0x0000000cu);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000054u);
    c->f[0] = c->f[1] + c->f[0];
    mem_wf32(ram, c->r[30] + 0x000000b4u, c->f[0]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x000001b8u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 2;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000068u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = c->r[2] + 0x00000028u;
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000010u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000058u);
    c->f[0] = c->f[1] + c->f[0];
    mem_wf32(ram, c->r[30] + 0x000000b8u, c->f[0]);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00004bf4u);
    mem_wf32(ram, c->r[30] + 0x000000bcu, c->f[0]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x000001b8u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 2;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000068u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = c->r[2] + 0x00000014u;
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000008u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000050u);
    c->f[0] = c->f[1] + c->f[0];
    mem_wf32(ram, c->r[30] + 0x000000c0u, c->f[0]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x000001b8u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 2;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000068u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = c->r[2] + 0x00000014u;
    c->f[1] = mem_rf32(ram, c->r[2] + 0x0000000cu);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000054u);
    c->f[0] = c->f[1] + c->f[0];
    mem_wf32(ram, c->r[30] + 0x000000c4u, c->f[0]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x000001b8u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 2;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000068u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = c->r[2] + 0x00000014u;
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000010u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000058u);
    c->f[0] = c->f[1] + c->f[0];
    mem_wf32(ram, c->r[30] + 0x000000c8u, c->f[0]);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00004bf4u);
    mem_wf32(ram, c->r[30] + 0x000000ccu, c->f[0]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x000001b8u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 2;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000068u);
    c->r[2] = c->r[3] + c->r[2];
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000008u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000050u);
    c->f[0] = c->f[1] + c->f[0];
    mem_wf32(ram, c->r[30] + 0x000000d0u, c->f[0]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x000001b8u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 2;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000068u);
    c->r[2] = c->r[3] + c->r[2];
    c->f[1] = mem_rf32(ram, c->r[2] + 0x0000000cu);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000054u);
    c->f[0] = c->f[1] + c->f[0];
    mem_wf32(ram, c->r[30] + 0x000000d4u, c->f[0]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x000001b8u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 2;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000068u);
    c->r[2] = c->r[3] + c->r[2];
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000010u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000058u);
    c->f[0] = c->f[1] + c->f[0];
    mem_wf32(ram, c->r[30] + 0x000000d8u, c->f[0]);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00004bf4u);
    mem_wf32(ram, c->r[30] + 0x000000dcu, c->f[0]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x000001b8u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 2;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000068u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = c->r[2] + 0x00000028u;
    c->r[2] = mem_r16(ram, c->r[2] + 0x00000000u);
    c->f[0] = u2f(c->r[2]);
    c->f[1] = (f32)(s32)f2u(c->f[0]);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00004bf8u);
    c->f[0] = c->f[1] * c->f[0];
    mem_wf32(ram, c->r[30] + 0x000001c0u, c->f[0]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x000001b8u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 2;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000068u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = c->r[2] + 0x00000028u;
    c->r[2] = mem_r16(ram, c->r[2] + 0x00000002u);
    c->f[0] = u2f(c->r[2]);
    c->f[1] = (f32)(s32)f2u(c->f[0]);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00004bf8u);
    c->f[0] = c->f[1] * c->f[0];
    mem_wf32(ram, c->r[30] + 0x000001c4u, c->f[0]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x000001b8u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 2;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000068u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = c->r[2] + 0x00000014u;
    c->r[2] = mem_r16(ram, c->r[2] + 0x00000000u);
    c->f[0] = u2f(c->r[2]);
    c->f[1] = (f32)(s32)f2u(c->f[0]);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00004bf8u);
    c->f[0] = c->f[1] * c->f[0];
    mem_wf32(ram, c->r[30] + 0x000001d0u, c->f[0]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x000001b8u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 2;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000068u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = c->r[2] + 0x00000014u;
    c->r[2] = mem_r16(ram, c->r[2] + 0x00000002u);
    c->f[0] = u2f(c->r[2]);
    c->f[1] = (f32)(s32)f2u(c->f[0]);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00004bf8u);
    c->f[0] = c->f[1] * c->f[0];
    mem_wf32(ram, c->r[30] + 0x000001d4u, c->f[0]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x000001b8u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 2;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000068u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r16(ram, c->r[2] + 0x00000000u);
    c->f[0] = u2f(c->r[2]);
    c->f[1] = (f32)(s32)f2u(c->f[0]);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00004bf8u);
    c->f[0] = c->f[1] * c->f[0];
    mem_wf32(ram, c->r[30] + 0x000001e0u, c->f[0]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x000001b8u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 2;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000068u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r16(ram, c->r[2] + 0x00000002u);
    c->f[0] = u2f(c->r[2]);
    c->f[1] = (f32)(s32)f2u(c->f[0]);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00004bf8u);
    c->f[0] = c->f[1] * c->f[0];
    mem_wf32(ram, c->r[30] + 0x000001e4u, c->f[0]);
    c->r[4] = c->r[30] + 0x000002c0u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x000001b8u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 2;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000068u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = c->r[2] + 0x00000028u;
    { c->r[31] = 0x088bd750u; c->r[5] = mem_r32(ram, c->r[2] + 0x00000004u); func_088b2f18(c, ram); }
    c->r[2] = c->r[30] + 0x000002c0u;
    c->r[4] = c->r[2] + 0x00000010u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x000001b8u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 2;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000068u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = c->r[2] + 0x00000014u;
    { c->r[31] = 0x088bd780u; c->r[5] = mem_r32(ram, c->r[2] + 0x00000004u); func_088b2f18(c, ram); }
    c->r[2] = c->r[30] + 0x000002c0u;
    c->r[4] = c->r[2] + 0x00000020u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x000001b8u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 2;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000068u);
    c->r[2] = c->r[3] + c->r[2];
    { c->r[31] = 0x088bd7acu; c->r[5] = mem_r32(ram, c->r[2] + 0x00000004u); func_088b2f18(c, ram); }
    c->r[2] = c->r[30] + 0x000000b0u;
    c->r[3] = c->r[30] + 0x000001c0u;
    c->r[6] = c->r[30] + 0x000002c0u;
    c->r[4] = c->r[2] + 0u;
    c->r[5] = c->r[3] + 0u;
    c->r[7] = 0u + 0x00000003u;
    c->r[8] = 0u + 0x0000003fu;
    { c->r[31] = 0x088bd7d0u; c->r[9] = 0u + 0x00000001u; func_089c492c(c, ram); }
    mem_w32(ram, c->r[30] + 0x000001b4u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x000001b4u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000003u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_088bda90; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x000001b4u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[2] = c->r[2] << 3;
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x088bd804u; c->r[5] = 0u + 0x00000010u; func_0881a1d4(c, ram); }
    mem_w32(ram, c->r[30] + 0x000001b0u, c->r[2]);
    mem_w32(ram, c->r[30] + 0x000003c4u, 0u);
L_088bd80c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x000003c4u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x000001b4u);
    c->r[2] = ((s32)c->r[2] < (s32)c->r[3]) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_088bd828; }
    { goto L_088bd97c; }
L_088bd828:
    c->r[3] = mem_r32(ram, c->r[30] + 0x000003c4u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 3;
    c->r[2] = mem_r32(ram, c->r[30] + 0x000001b0u);
    c->r[3] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[30] + 0x000003c4u);
    c->r[2] = c->r[2] << 4;
    c->r[2] = c->r[2] + c->r[30];
    c->r[2] = c->r[2] + 0x000000b0u;
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000000u);
    mem_wf32(ram, c->r[3] + 0x0000000cu, c->f[0]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x000003c4u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 3;
    c->r[2] = mem_r32(ram, c->r[30] + 0x000001b0u);
    c->r[3] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[30] + 0x000003c4u);
    c->r[2] = c->r[2] << 4;
    c->r[2] = c->r[2] + c->r[30];
    c->r[2] = c->r[2] + 0x000000b0u;
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000004u);
    mem_wf32(ram, c->r[3] + 0x00000010u, c->f[0]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x000003c4u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 3;
    c->r[2] = mem_r32(ram, c->r[30] + 0x000001b0u);
    c->r[3] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[30] + 0x000003c4u);
    c->r[2] = c->r[2] << 4;
    c->r[2] = c->r[2] + c->r[30];
    c->r[2] = c->r[2] + 0x000000b0u;
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000008u);
    mem_wf32(ram, c->r[3] + 0x00000014u, c->f[0]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x000003c4u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 3;
    c->r[2] = mem_r32(ram, c->r[30] + 0x000001b0u);
    c->r[3] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[30] + 0x000003c4u);
    c->r[2] = c->r[2] << 4;
    c->r[2] = c->r[2] + c->r[30];
    c->r[2] = c->r[2] + 0x000001c0u;
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000000u);
    c->f[0] = c->f[0] + c->f[0];
    mem_wf32(ram, c->r[3] + 0x00000000u, c->f[0]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x000003c4u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 3;
    c->r[2] = mem_r32(ram, c->r[30] + 0x000001b0u);
    c->r[3] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[30] + 0x000003c4u);
    c->r[2] = c->r[2] << 4;
    c->r[2] = c->r[2] + c->r[30];
    c->r[2] = c->r[2] + 0x000001c0u;
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000004u);
    c->f[0] = c->f[0] + c->f[0];
    mem_wf32(ram, c->r[3] + 0x00000004u, c->f[0]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x000003c4u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 3;
    c->r[2] = mem_r32(ram, c->r[30] + 0x000001b0u);
    c->r[16] = c->r[3] + c->r[2];
    c->r[3] = c->r[30] + 0x000002c0u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x000003c4u);
    c->r[2] = c->r[2] << 4;
    c->r[2] = c->r[3] + c->r[2];
    { c->r[31] = 0x088bd968u; c->r[4] = c->r[2] + 0u; func_0888d9b8(c, ram); }
    mem_w32(ram, c->r[16] + 0x00000008u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x000003c4u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x000003c4u, c->r[2]); goto L_088bd80c; }
L_088bd97c:
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
    c->r[2] = mem_r32(ram, c->r[30] + 0x000001b0u);
    c->r[2] = c->r[2] >> 24;
    c->r[2] = c->r[2] & 0x000fu;
    c->r[3] = c->r[2] << 16;
    c->r[2] = 0x10000000u;
    c->r[2] = c->r[3] | c->r[2];
    { c->r[31] = 0x088bd9d8u; c->r[5] = c->r[2] + 0u; func_088be14c(c, ram); }
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
    c->r[3] = mem_r32(ram, c->r[30] + 0x000001b0u);
    c->r[2] = 0x00ff0000u;
    c->r[2] = c->r[2] | 0xffffu;
    c->r[3] = c->r[3] & c->r[2];
    c->r[2] = 0x01000000u;
    c->r[2] = c->r[3] | c->r[2];
    { c->r[31] = 0x088bda34u; c->r[5] = c->r[2] + 0u; func_088be14c(c, ram); }
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
    c->r[3] = mem_r32(ram, c->r[30] + 0x000001b4u);
    c->r[2] = 0x04050000u;
    c->r[2] = c->r[3] | c->r[2];
    { c->r[31] = 0x088bda84u; c->r[5] = c->r[2] + 0u; func_088be14c(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x000003c0u);
    c->r[2] = c->r[2] + 0x00000001u;
    mem_w32(ram, c->r[30] + 0x000003c0u, c->r[2]);
L_088bda90:
    c->r[3] = mem_r32(ram, c->r[30] + 0x000001b8u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 2;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000068u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = c->r[2] + 0x0000003cu;
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000008u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000050u);
    c->f[0] = c->f[1] + c->f[0];
    mem_wf32(ram, c->r[30] + 0x000000b0u, c->f[0]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x000001b8u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 2;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000068u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = c->r[2] + 0x0000003cu;
    c->f[1] = mem_rf32(ram, c->r[2] + 0x0000000cu);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000054u);
    c->f[0] = c->f[1] + c->f[0];
    mem_wf32(ram, c->r[30] + 0x000000b4u, c->f[0]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x000001b8u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 2;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000068u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = c->r[2] + 0x0000003cu;
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000010u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000058u);
    c->f[0] = c->f[1] + c->f[0];
    mem_wf32(ram, c->r[30] + 0x000000b8u, c->f[0]);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00004bf4u);
    mem_wf32(ram, c->r[30] + 0x000000bcu, c->f[0]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x000001b8u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 2;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000068u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = c->r[2] + 0x00000028u;
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000008u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000050u);
    c->f[0] = c->f[1] + c->f[0];
    mem_wf32(ram, c->r[30] + 0x000000c0u, c->f[0]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x000001b8u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 2;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000068u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = c->r[2] + 0x00000028u;
    c->f[1] = mem_rf32(ram, c->r[2] + 0x0000000cu);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000054u);
    c->f[0] = c->f[1] + c->f[0];
    mem_wf32(ram, c->r[30] + 0x000000c4u, c->f[0]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x000001b8u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 2;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000068u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = c->r[2] + 0x00000028u;
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000010u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000058u);
    c->f[0] = c->f[1] + c->f[0];
    mem_wf32(ram, c->r[30] + 0x000000c8u, c->f[0]);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00004bf4u);
    mem_wf32(ram, c->r[30] + 0x000000ccu, c->f[0]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x000001b8u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 2;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000068u);
    c->r[2] = c->r[3] + c->r[2];
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000008u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000050u);
    c->f[0] = c->f[1] + c->f[0];
    mem_wf32(ram, c->r[30] + 0x000000d0u, c->f[0]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x000001b8u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 2;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000068u);
    c->r[2] = c->r[3] + c->r[2];
    c->f[1] = mem_rf32(ram, c->r[2] + 0x0000000cu);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000054u);
    c->f[0] = c->f[1] + c->f[0];
    mem_wf32(ram, c->r[30] + 0x000000d4u, c->f[0]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x000001b8u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 2;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000068u);
    c->r[2] = c->r[3] + c->r[2];
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000010u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000058u);
    c->f[0] = c->f[1] + c->f[0];
    mem_wf32(ram, c->r[30] + 0x000000d8u, c->f[0]);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00004bf4u);
    mem_wf32(ram, c->r[30] + 0x000000dcu, c->f[0]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x000001b8u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 2;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000068u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = c->r[2] + 0x0000003cu;
    c->r[2] = mem_r16(ram, c->r[2] + 0x00000000u);
    c->f[0] = u2f(c->r[2]);
    c->f[1] = (f32)(s32)f2u(c->f[0]);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00004bf8u);
    c->f[0] = c->f[1] * c->f[0];
    mem_wf32(ram, c->r[30] + 0x000001c0u, c->f[0]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x000001b8u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 2;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000068u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = c->r[2] + 0x0000003cu;
    c->r[2] = mem_r16(ram, c->r[2] + 0x00000002u);
    c->f[0] = u2f(c->r[2]);
    c->f[1] = (f32)(s32)f2u(c->f[0]);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00004bf8u);
    c->f[0] = c->f[1] * c->f[0];
    mem_wf32(ram, c->r[30] + 0x000001c4u, c->f[0]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x000001b8u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 2;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000068u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = c->r[2] + 0x00000028u;
    c->r[2] = mem_r16(ram, c->r[2] + 0x00000000u);
    c->f[0] = u2f(c->r[2]);
    c->f[1] = (f32)(s32)f2u(c->f[0]);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00004bf8u);
    c->f[0] = c->f[1] * c->f[0];
    mem_wf32(ram, c->r[30] + 0x000001d0u, c->f[0]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x000001b8u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 2;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000068u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = c->r[2] + 0x00000028u;
    c->r[2] = mem_r16(ram, c->r[2] + 0x00000002u);
    c->f[0] = u2f(c->r[2]);
    c->f[1] = (f32)(s32)f2u(c->f[0]);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00004bf8u);
    c->f[0] = c->f[1] * c->f[0];
    mem_wf32(ram, c->r[30] + 0x000001d4u, c->f[0]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x000001b8u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 2;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000068u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r16(ram, c->r[2] + 0x00000000u);
    c->f[0] = u2f(c->r[2]);
    c->f[1] = (f32)(s32)f2u(c->f[0]);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00004bf8u);
    c->f[0] = c->f[1] * c->f[0];
    mem_wf32(ram, c->r[30] + 0x000001e0u, c->f[0]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x000001b8u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 2;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000068u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r16(ram, c->r[2] + 0x00000002u);
    c->f[0] = u2f(c->r[2]);
    c->f[1] = (f32)(s32)f2u(c->f[0]);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00004bf8u);
    c->f[0] = c->f[1] * c->f[0];
    mem_wf32(ram, c->r[30] + 0x000001e4u, c->f[0]);
    c->r[4] = c->r[30] + 0x000002c0u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x000001b8u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 2;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000068u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = c->r[2] + 0x0000003cu;
    { c->r[31] = 0x088bdde4u; c->r[5] = mem_r32(ram, c->r[2] + 0x00000004u); func_088b2f18(c, ram); }
    c->r[2] = c->r[30] + 0x000002c0u;
    c->r[4] = c->r[2] + 0x00000010u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x000001b8u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 2;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000068u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = c->r[2] + 0x00000028u;
    { c->r[31] = 0x088bde14u; c->r[5] = mem_r32(ram, c->r[2] + 0x00000004u); func_088b2f18(c, ram); }
    c->r[2] = c->r[30] + 0x000002c0u;
    c->r[4] = c->r[2] + 0x00000020u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x000001b8u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 2;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000068u);
    c->r[2] = c->r[3] + c->r[2];
    { c->r[31] = 0x088bde40u; c->r[5] = mem_r32(ram, c->r[2] + 0x00000004u); func_088b2f18(c, ram); }
    c->r[2] = c->r[30] + 0x000000b0u;
    c->r[3] = c->r[30] + 0x000001c0u;
    c->r[6] = c->r[30] + 0x000002c0u;
    c->r[4] = c->r[2] + 0u;
    c->r[5] = c->r[3] + 0u;
    c->r[7] = 0u + 0x00000003u;
    c->r[8] = 0u + 0x0000003fu;
    { c->r[31] = 0x088bde64u; c->r[9] = 0u + 0x00000001u; func_089c492c(c, ram); }
    mem_w32(ram, c->r[30] + 0x000001b4u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x000001b4u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000003u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_088be124; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x000001b4u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[2] = c->r[2] << 3;
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x088bde98u; c->r[5] = 0u + 0x00000010u; func_0881a1d4(c, ram); }
    mem_w32(ram, c->r[30] + 0x000003c4u, c->r[2]);
    mem_w32(ram, c->r[30] + 0x000001b0u, 0u);
L_088bdea0:
    c->r[2] = mem_r32(ram, c->r[30] + 0x000001b0u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x000001b4u);
    c->r[2] = ((s32)c->r[2] < (s32)c->r[3]) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_088bdebc; }
    { goto L_088be010; }
L_088bdebc:
    c->r[3] = mem_r32(ram, c->r[30] + 0x000001b0u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 3;
    c->r[2] = mem_r32(ram, c->r[30] + 0x000003c4u);
    c->r[3] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[30] + 0x000001b0u);
    c->r[2] = c->r[2] << 4;
    c->r[2] = c->r[2] + c->r[30];
    c->r[2] = c->r[2] + 0x000000b0u;
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000000u);
    mem_wf32(ram, c->r[3] + 0x0000000cu, c->f[0]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x000001b0u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 3;
    c->r[2] = mem_r32(ram, c->r[30] + 0x000003c4u);
    c->r[3] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[30] + 0x000001b0u);
    c->r[2] = c->r[2] << 4;
    c->r[2] = c->r[2] + c->r[30];
    c->r[2] = c->r[2] + 0x000000b0u;
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000004u);
    mem_wf32(ram, c->r[3] + 0x00000010u, c->f[0]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x000001b0u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 3;
    c->r[2] = mem_r32(ram, c->r[30] + 0x000003c4u);
    c->r[3] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[30] + 0x000001b0u);
    c->r[2] = c->r[2] << 4;
    c->r[2] = c->r[2] + c->r[30];
    c->r[2] = c->r[2] + 0x000000b0u;
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000008u);
    mem_wf32(ram, c->r[3] + 0x00000014u, c->f[0]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x000001b0u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 3;
    c->r[2] = mem_r32(ram, c->r[30] + 0x000003c4u);
    c->r[3] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[30] + 0x000001b0u);
    c->r[2] = c->r[2] << 4;
    c->r[2] = c->r[2] + c->r[30];
    c->r[2] = c->r[2] + 0x000001c0u;
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000000u);
    c->f[0] = c->f[0] + c->f[0];
    mem_wf32(ram, c->r[3] + 0x00000000u, c->f[0]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x000001b0u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 3;
    c->r[2] = mem_r32(ram, c->r[30] + 0x000003c4u);
    c->r[3] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[30] + 0x000001b0u);
    c->r[2] = c->r[2] << 4;
    c->r[2] = c->r[2] + c->r[30];
    c->r[2] = c->r[2] + 0x000001c0u;
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000004u);
    c->f[0] = c->f[0] + c->f[0];
    mem_wf32(ram, c->r[3] + 0x00000004u, c->f[0]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x000001b0u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 3;
    c->r[2] = mem_r32(ram, c->r[30] + 0x000003c4u);
    c->r[16] = c->r[3] + c->r[2];
    c->r[3] = c->r[30] + 0x000002c0u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x000001b0u);
    c->r[2] = c->r[2] << 4;
    c->r[2] = c->r[3] + c->r[2];
    { c->r[31] = 0x088bdffcu; c->r[4] = c->r[2] + 0u; func_0888d9b8(c, ram); }
    mem_w32(ram, c->r[16] + 0x00000008u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x000001b0u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x000001b0u, c->r[2]); goto L_088bdea0; }
L_088be010:
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
    c->r[2] = mem_r32(ram, c->r[30] + 0x000003c4u);
    c->r[2] = c->r[2] >> 24;
    c->r[2] = c->r[2] & 0x000fu;
    c->r[3] = c->r[2] << 16;
    c->r[2] = 0x10000000u;
    c->r[2] = c->r[3] | c->r[2];
    { c->r[31] = 0x088be06cu; c->r[5] = c->r[2] + 0u; func_088be14c(c, ram); }
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
    c->r[3] = mem_r32(ram, c->r[30] + 0x000003c4u);
    c->r[2] = 0x00ff0000u;
    c->r[2] = c->r[2] | 0xffffu;
    c->r[3] = c->r[3] & c->r[2];
    c->r[2] = 0x01000000u;
    c->r[2] = c->r[3] | c->r[2];
    { c->r[31] = 0x088be0c8u; c->r[5] = c->r[2] + 0u; func_088be14c(c, ram); }
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
    c->r[3] = mem_r32(ram, c->r[30] + 0x000001b4u);
    c->r[2] = 0x04050000u;
    c->r[2] = c->r[3] | c->r[2];
    { c->r[31] = 0x088be118u; c->r[5] = c->r[2] + 0u; func_088be14c(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x000003c0u);
    c->r[2] = c->r[2] + 0x00000001u;
    mem_w32(ram, c->r[30] + 0x000003c0u, c->r[2]);
L_088be124:
    c->r[2] = mem_r32(ram, c->r[30] + 0x000001b8u);
    c->r[2] = c->r[2] + 0x00000004u;
    { mem_w32(ram, c->r[30] + 0x000001b8u, c->r[2]); goto L_088bd3d8; }
L_088be134:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x000003d8u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x000003d4u);
    c->r[16] = mem_r32(ram, c->r[29] + 0x000003d0u);
    { c->r[29] = c->r[29] + 0x000003e0u; return; }
    return; /* fell out of func_088bca84 */
}

/* func_088beed4  0x088beed4..0x088bef24  80 bytes, source=sweep */
void func_088beed4(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x088beed4u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[6]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[2] + 0x00000018u;
    c->r[3] = c->r[2] << 24;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[3] | c->r[2];
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x088bef10u; c->r[5] = c->r[2] + 0u; func_088be14c(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_088beed4 */
}

/* func_088c00b0  0x088c00b0..0x088c03dc  812 bytes, source=fde */
void func_088c00b0(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x088c00b0u);
    c->r[29] = c->r[29] + 0xffffff50u;
    mem_w32(ram, c->r[29] + 0x000000a4u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x000000a0u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[6]);
    c->r[2] = c->r[7] + 0u;
    c->r[3] = c->r[8] + 0u;
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[9]);
    mem_w16(ram, c->r[30] + 0x0000000cu, c->r[2]);
    mem_w8(ram, c->r[30] + 0x0000000eu, c->r[3]);
    c->r[2] = c->r[30] + 0x00000020u;
    { c->r[31] = 0x088c00ecu; c->r[4] = c->r[2] + 0u; func_08808240(c, ram); }
    c->r[2] = c->r[30] + 0x00000020u;
    c->r[4] = c->r[2] + 0u;
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000008u);
    { c->r[31] = 0x088c0100u; c->r[6] = mem_r32(ram, c->r[30] + 0x00000004u); func_08820ca4(c, ram); }
    c->r[2] = c->r[30] + 0x00000030u;
    c->r[4] = c->r[2] + 0u;
    c->f[12] = u2f(0u);
    c->f[13] = mem_rf32(ram, c->r[30] + 0x00000024u);
    c->f[14] = u2f(0u);
    c->f[15] = u2f(0u);
    { c->r[31] = 0x088c0120u; func_0880d140(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000024u, 0u);
    c->r[2] = c->r[30] + 0x00000020u;
    { c->r[31] = 0x088c0130u; c->r[4] = c->r[2] + 0u; func_08820c6c(c, ram); }
    mem_wf32(ram, c->r[30] + 0x00000040u, c->f[0]);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000034u);
    c->f[0] = (f32)fabsf(c->f[0]);
    mem_wf32(ram, c->r[30] + 0x00000044u, c->f[0]);
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[30] + 0x0000000cu);
    { int _c = ((s32)c->r[2] > 0); if (_c) goto L_088c0154; }
    { goto L_088c03c8; }
L_088c0154:
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[30] + 0x0000000cu);
    c->f[0] = u2f(c->r[2]);
    c->f[1] = (f32)(s32)f2u(c->f[0]);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000040u);
    c->f[0] = c->f[0] / c->f[1];
    mem_wf32(ram, c->r[30] + 0x00000048u, c->f[0]);
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[30] + 0x0000000cu);
    c->f[0] = u2f(c->r[2]);
    c->f[1] = (f32)(s32)f2u(c->f[0]);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000044u);
    c->f[2] = c->f[0] / c->f[1];
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[30] + 0x0000000cu);
    c->f[0] = u2f(c->r[2]);
    c->f[1] = (f32)(s32)f2u(c->f[0]);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00004d34u);
    c->f[0] = c->f[1] * c->f[0];
    c->f[0] = c->f[2] - c->f[0];
    mem_wf32(ram, c->r[30] + 0x0000004cu, c->f[0]);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000040u);
    c->f[0] = u2f(0u);
    alx_c_cond_s(c, 12, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_088c01c0; }
    { goto L_088c01f4; }
L_088c01c0:
    c->r[2] = c->r[30] + 0x00000020u;
    c->r[3] = c->r[30] + 0x00000020u;
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x088c01d4u; c->r[5] = c->r[3] + 0u; func_0884c1d8(c, ram); }
    c->r[2] = c->r[30] + 0x00000020u;
    c->r[3] = c->r[30] + 0x00000020u;
    c->r[4] = c->r[2] + 0u;
    c->r[5] = c->r[3] + 0u;
    { c->r[31] = 0x088c01ecu; c->f[12] = mem_rf32(ram, c->r[30] + 0x00000048u); func_0884c224(c, ram); }
    { goto L_088c0234; }
L_088c01f4:
    c->r[2] = c->r[30] + 0x00000050u;
    c->r[4] = c->r[2] + 0u;
    c->f[12] = u2f(0u);
    c->f[13] = u2f(0u);
    c->f[14] = u2f(0u);
    c->f[15] = u2f(0u);
    { c->r[31] = 0x088c0214u; func_0880d140(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000050u);
    mem_w32(ram, c->r[30] + 0x00000020u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000054u);
    mem_w32(ram, c->r[30] + 0x00000024u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000058u);
    mem_w32(ram, c->r[30] + 0x00000028u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000005cu);
    mem_w32(ram, c->r[30] + 0x0000002cu, c->r[2]);
L_088c0234:
    c->r[2] = c->r[30] + 0x00000050u;
    c->r[4] = c->r[2] + 0u;
    c->f[12] = u2f(0u);
    c->f[13] = mem_rf32(ram, c->r[30] + 0x0000004cu);
    c->f[14] = u2f(0u);
    c->f[15] = u2f(0u);
    { c->r[31] = 0x088c0254u; func_0880d140(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000050u);
    mem_w32(ram, c->r[30] + 0x00000030u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000054u);
    mem_w32(ram, c->r[30] + 0x00000034u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000058u);
    mem_w32(ram, c->r[30] + 0x00000038u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000005cu);
    mem_w32(ram, c->r[30] + 0x0000003cu, c->r[2]);
    c->r[2] = c->r[30] + 0x00000050u;
    { c->r[31] = 0x088c0280u; c->r[4] = c->r[2] + 0u; func_08808240(c, ram); }
    c->r[2] = c->r[30] + 0x00000050u;
    c->r[3] = c->r[30] + 0x00000020u;
    c->r[6] = c->r[30] + 0x00000030u;
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x088c0298u; c->r[5] = c->r[3] + 0u; func_08859fd4(c, ram); }
    c->r[2] = c->r[30] + 0x00000050u;
    { c->r[31] = 0x088c02a4u; c->r[4] = c->r[2] + 0u; func_08820c6c(c, ram); }
    mem_wf32(ram, c->r[30] + 0x00000060u, c->f[0]);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000060u);
    c->f[0] = u2f(0u);
    alx_c_cond_s(c, 12, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_088c02c8; }
    { goto L_088c02dc; }
L_088c02c8:
    c->r[2] = c->r[30] + 0x00000050u;
    c->r[3] = c->r[30] + 0x00000050u;
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x088c02dcu; c->r[5] = c->r[3] + 0u; func_0884c1d8(c, ram); }
L_088c02dc:
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[30] + 0x0000000eu);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = c->r[2] + 0u;
    c->r[6] = 0u + 0xffffffffu;
    c->r[7] = 0u + 0xffffffffu;
    { c->r[31] = 0x088c02f8u; c->r[8] = 0u + 0u; func_088bfe18(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000064u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000064u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_088c03c8; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000064u);
    c->r[2] = c->r[2] + 0x000000e0u;
    mem_w32(ram, c->r[30] + 0x00000068u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000064u);
    c->r[4] = c->r[2] + 0x00000020u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[3] + 0x00000000u);
    mem_w32(ram, c->r[4] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[3] + 0x00000004u);
    mem_w32(ram, c->r[4] + 0x00000004u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[3] + 0x00000008u);
    mem_w32(ram, c->r[4] + 0x00000008u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[3] + 0x0000000cu);
    mem_w32(ram, c->r[4] + 0x0000000cu, c->r[2]);
    c->r[2] = c->r[30] + 0x00000070u;
    { c->r[31] = 0x088c034cu; c->r[4] = c->r[2] + 0u; func_088c2460(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000070u, 0u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000060u);
    mem_wf32(ram, c->r[30] + 0x00000090u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000050u);
    mem_w32(ram, c->r[30] + 0x00000080u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000054u);
    mem_w32(ram, c->r[30] + 0x00000084u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000058u);
    mem_w32(ram, c->r[30] + 0x00000088u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000005cu);
    mem_w32(ram, c->r[30] + 0x0000008cu, c->r[2]);
    mem_w8(ram, c->r[30] + 0x00000097u, 0u);
    c->r[2] = mem_r16(ram, c->r[30] + 0x0000000cu);
    mem_w16(ram, c->r[30] + 0x00000094u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_088c03a8; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000068u);
    c->r[2] = mem_r16(ram, c->r[30] + 0x0000000cu);
    mem_w16(ram, c->r[3] + 0x0000004cu, c->r[2]);
    c->r[2] = mem_r16(ram, c->r[30] + 0x00000094u);
    c->r[2] = c->r[2] + 0x0000001eu;
    mem_w16(ram, c->r[30] + 0x00000094u, c->r[2]);
L_088c03a8:
    c->r[2] = c->r[30] + 0x00000070u;
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000064u);
    c->r[6] = 0u + 0x0000001eu;
    { c->r[31] = 0x088c03c0u; c->r[7] = c->r[2] + 0u; func_089c34ac(c, ram); }
    { c->r[31] = 0x088c03c8u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000064u); func_088bfba4(c, ram); }
L_088c03c8:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x000000a4u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x000000a0u);
    { c->r[29] = c->r[29] + 0x000000b0u; return; }
    return; /* fell out of func_088c00b0 */
}

/* func_088c46d0  0x088c46d0..0x088c4964  660 bytes, source=fde */
void func_088c46d0(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x088c46d0u);
    c->r[29] = c->r[29] + 0xffffff60u;
    mem_w32(ram, c->r[29] + 0x00000088u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000084u, c->r[30]);
    mem_w32(ram, c->r[29] + 0x00000080u, c->r[16]);
    mem_wf32(ram, c->r[29] + 0x00000090u, c->f[20]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[6]);
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[7]);
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[8]);
    c->r[2] = c->r[9] + 0u;
    mem_w8(ram, c->r[30] + 0x00000014u, c->r[2]);
    c->r[2] = c->r[30] + 0x00000020u;
    { c->r[31] = 0x088c4710u; c->r[4] = c->r[2] + 0u; func_08808240(c, ram); }
    c->r[2] = c->r[30] + 0x00000020u;
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x088c4720u; c->r[5] = mem_r32(ram, c->r[30] + 0x00000008u); func_0884c1d8(c, ram); }
    c->r[2] = c->r[30] + 0x00000020u;
    c->r[3] = c->r[30] + 0x00000020u;
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00004f28u);
    c->r[4] = c->r[2] + 0u;
    c->r[5] = c->r[3] + 0u;
    { c->r[31] = 0x088c4740u; c->f[12] = c->f[0]; func_0884c224(c, ram); }
    c->r[2] = c->r[30] + 0x00000020u;
    c->r[3] = c->r[30] + 0x00000020u;
    c->r[4] = c->r[2] + 0u;
    c->r[5] = c->r[3] + 0u;
    { c->r[31] = 0x088c4758u; c->r[6] = mem_r32(ram, c->r[30] + 0x00000008u); func_08859fd4(c, ram); }
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0u + 0x00000008u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_088c4788; }
    c->r[2] = c->r[30] + 0x00000020u;
    c->r[3] = c->r[30] + 0x00000020u;
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00004f2cu);
    c->r[4] = c->r[2] + 0u;
    c->r[5] = c->r[3] + 0u;
    { c->r[31] = 0x088c4788u; c->f[12] = c->f[0]; func_0884c224(c, ram); }
L_088c4788:
    mem_w32(ram, c->r[30] + 0x00000030u, 0u);
    c->r[2] = mem_r8(ram, c->r[30] + 0x00000014u);
    c->r[2] = c->r[2] + 0xfffffff7u;
    c->r[2] = (c->r[2] < 0x00000002u) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_088c47c8; }
    c->r[3] = mem_r8(ram, c->r[30] + 0x00000014u);
    c->r[2] = 0u + 0x000000ecu;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[3] = c->lo;
    c->r[2] = 0x08aa0000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0xffff9a98u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = c->r[2] + 0x00002044u;
    c->f[0] = mem_rf32(ram, c->r[2] + 0x000000c4u);
    mem_wf32(ram, c->r[30] + 0x00000030u, c->f[0]);
L_088c47c8:
    { c->r[31] = 0x088c47d0u; c->r[4] = mem_r32(ram, c->r[30] + 0x0000000cu); func_088c9618(c, ram); }
    c->r[16] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000001u);
    { c->r[31] = 0x088c47dcu; c->r[4] = mem_r32(ram, c->r[30] + 0x0000000cu); func_088c9618(c, ram); }
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000004u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000030u);
    c->f[1] = c->f[1] + c->f[0];
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00004f30u);
    c->f[20] = c->f[1] * c->f[0];
    { c->r[31] = 0x088c47fcu; c->r[4] = mem_r32(ram, c->r[30] + 0x0000000cu); func_088c9618(c, ram); }
    c->r[9] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000002u);
    c->r[3] = 0x08aa0000u;
    c->r[3] = mem_r8(ram, c->r[3] + 0xffffcba0u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 4;
    c->r[2] = 0x08aa0000u;
    c->r[2] = c->r[2] + 0xffff9ba0u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[3] = c->r[30] + 0x00000020u;
    c->r[10] = (u32)(s32)(s8)mem_r8(ram, c->r[30] + 0x00000010u);
    c->r[4] = c->r[2] + 0u;
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[6] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[7] = c->r[3] + 0u;
    c->r[8] = c->r[16] + 0u;
    { c->r[31] = 0x088c4848u; c->f[12] = c->f[20]; func_088c946c(c, ram); }
    c->r[2] = mem_r8(ram, c->r[30] + 0x0000000cu);
    mem_w8(ram, c->r[30] + 0x00000034u, c->r[2]);
    c->r[3] = mem_r8(ram, c->r[30] + 0x00000014u);
    c->r[2] = 0u + 0x00000009u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_088c4874; }
    c->r[2] = mem_r8(ram, c->r[30] + 0x00000034u);
    c->r[3] = 0u + 0xffffff80u;
    c->r[2] = c->r[2] | c->r[3];
    { mem_w8(ram, c->r[30] + 0x00000034u, c->r[2]); goto L_088c4890; }
L_088c4874:
    c->r[3] = mem_r8(ram, c->r[30] + 0x00000014u);
    c->r[2] = 0u + 0x0000000au;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_088c4890; }
    c->r[2] = mem_r8(ram, c->r[30] + 0x00000034u);
    c->r[2] = c->r[2] | 0x0040u;
    mem_w8(ram, c->r[30] + 0x00000034u, c->r[2]);
L_088c4890:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000000u);
    mem_wf32(ram, c->r[30] + 0x00000060u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000004u);
    mem_wf32(ram, c->r[30] + 0x00000064u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000008u);
    mem_wf32(ram, c->r[30] + 0x00000068u, c->f[0]);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000020u);
    mem_wf32(ram, c->r[30] + 0x0000006cu, c->f[0]);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000024u);
    mem_wf32(ram, c->r[30] + 0x00000070u, c->f[0]);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000028u);
    mem_wf32(ram, c->r[30] + 0x00000074u, c->f[0]);
    c->r[2] = mem_r8(ram, c->r[30] + 0x00000034u);
    mem_w8(ram, c->r[30] + 0x00000078u, c->r[2]);
    c->r[2] = 0x08aa0000u;
    c->r[2] = mem_r8(ram, c->r[2] + 0xffffcba0u);
    mem_w8(ram, c->r[30] + 0x00000079u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000060u);
    mem_w32(ram, c->r[30] + 0x00000040u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000064u);
    mem_w32(ram, c->r[30] + 0x00000044u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000068u);
    mem_w32(ram, c->r[30] + 0x00000048u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000006cu);
    mem_w32(ram, c->r[30] + 0x0000004cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000070u);
    mem_w32(ram, c->r[30] + 0x00000050u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000074u);
    mem_w32(ram, c->r[30] + 0x00000054u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000078u);
    mem_w32(ram, c->r[30] + 0x00000058u, c->r[2]);
    c->r[2] = c->r[30] + 0x00000040u;
    c->r[4] = 0x08a80000u;
    c->r[4] = mem_r32(ram, c->r[4] + 0x00002ed8u);
    c->r[5] = 0u + 0x00000004u;
    c->r[6] = c->r[2] + 0u;
    { c->r[31] = 0x088c4934u; c->r[7] = 0u + 0x0000001cu; func_0884f888(c, ram); }
    c->r[2] = 0x08aa0000u;
    c->r[2] = mem_r8(ram, c->r[2] + 0xffffcba0u);
    c->r[2] = c->r[2] + 0x00000001u;
    c->r[1] = 0x08aa0000u;
    mem_w8(ram, c->r[1] + 0xffffcba0u, c->r[2]);
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000088u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000084u);
    c->r[16] = mem_r32(ram, c->r[29] + 0x00000080u);
    c->f[20] = mem_rf32(ram, c->r[29] + 0x00000090u);
    { c->r[29] = c->r[29] + 0x000000a0u; return; }
    return; /* fell out of func_088c46d0 */
}

/* func_088c90fc  0x088c90fc..0x088c9140  68 bytes, source=sweep */
void func_088c90fc(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x088c90fcu);
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
    { c->r[31] = 0x088c912cu; c->r[5] = c->r[2] + 0u; func_088c8760(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_088c90fc */
}

/* func_088ce04c  0x088ce04c..0x088ce18c  320 bytes, source=fde */
void func_088ce04c(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x088ce04cu);
    c->r[29] = c->r[29] + 0xffffffd0u;
    mem_w32(ram, c->r[29] + 0x00000024u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000020u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_wf32(ram, c->r[30] + 0x00000000u, c->f[12]);
    mem_wf32(ram, c->r[30] + 0x00000004u, c->f[13]);
    mem_wf32(ram, c->r[30] + 0x00000008u, c->f[14]);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000000u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000004u);
    alx_c_cond_s(c, 12, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_088ce088; }
    { goto L_088ce0b8; }
L_088ce088:
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000008u);
    c->f[0] = u2f(0u);
    alx_c_cond_s(c, 14, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_088ce0a8; }
    { goto L_088ce0b8; }
L_088ce0a8:
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x0000518cu);
    { mem_wf32(ram, c->r[30] + 0x0000001cu, c->f[0]); goto L_088ce174; }
L_088ce0b8:
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000008u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00005190u);
    c->f[0] = c->f[1] / c->f[0];
    mem_wf32(ram, c->r[30] + 0x0000000cu, c->f[0]);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000008u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x0000000cu);
    c->f[0] = c->f[1] * c->f[0];
    mem_wf32(ram, c->r[30] + 0x00000010u, c->f[0]);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x0000000cu);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00005194u);
    c->f[1] = c->f[1] * c->f[0];
    c->f[0] = mem_rf32(ram, c->r[30] + 0x0000000cu);
    c->f[0] = c->f[1] * c->f[0];
    mem_wf32(ram, c->r[30] + 0x00000014u, c->f[0]);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000010u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000014u);
    c->f[1] = c->f[1] + c->f[0];
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000000u);
    c->f[0] = c->f[0] + c->f[1];
    mem_wf32(ram, c->r[30] + 0x00000000u, c->f[0]);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000004u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000000u);
    alx_c_cond_s(c, 12, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_088ce130; }
    { goto L_088ce140; }
L_088ce130:
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x0000518cu);
    { mem_wf32(ram, c->r[30] + 0x0000001cu, c->f[0]); goto L_088ce174; }
L_088ce140:
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000000u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000004u);
    c->f[1] = c->f[1] - c->f[0];
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00005198u);
    c->f[0] = c->f[1] / c->f[0];
    { c->r[31] = 0x088ce160u; c->f[12] = c->f[0]; func_08a104b4(c, ram); }
    mem_wf32(ram, c->r[30] + 0x00000018u, c->f[0]);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x0000000cu);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000018u);
    c->f[0] = c->f[1] + c->f[0];
    mem_wf32(ram, c->r[30] + 0x0000001cu, c->f[0]);
L_088ce174:
    c->f[0] = mem_rf32(ram, c->r[30] + 0x0000001cu);
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000024u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000020u);
    { c->r[29] = c->r[29] + 0x00000030u; return; }
    return; /* fell out of func_088ce04c */
}

/* func_088d3b10  0x088d3b10..0x088d3b40  48 bytes, source=sweep */
void func_088d3b10(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x088d3b10u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = 0u + 0x00000001u;
    mem_w8(ram, c->r[3] + 0x00000098u, c->r[2]);
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_088d3b10 */
}

/* func_088d75f0  0x088d75f0..0x088d8368  3448 bytes, source=fde */
void func_088d75f0(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x088d75f0u);
    c->r[29] = c->r[29] + 0xffffff90u;
    mem_w32(ram, c->r[29] + 0x00000064u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000060u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    mem_w32(ram, c->r[30] + 0x0000000cu, 0u);
    mem_w32(ram, c->r[30] + 0x00000010u, 0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000060u);
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000005u);
    mem_w8(ram, c->r[30] + 0x00000014u, c->r[2]);
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x088d762cu; c->r[4] = c->r[4] + 0x00000af4u; func_0880d294(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = 0u + 0x00000002u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_088d79ec; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = mem_r8(ram, c->r[2] + 0x000000acu);
    c->r[2] = 0u + 0x000000ffu;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_088d76a0; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r8(ram, c->r[2] + 0x000000acu);
    { c->r[31] = 0x088d7660u; c->r[4] = c->r[2] + 0u; func_088d6da4(c, ram); }
    { int _c = (c->r[2] == 0u); if (_c) goto L_088d76a0; }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r8(ram, c->r[2] + 0x000000acu);
    c->r[3] = c->r[2] << 3;
    c->r[2] = 0x08aa0000u;
    c->r[2] = c->r[2] + 0x000049dcu;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    mem_w32(ram, c->r[4] + 0x00000080u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r8(ram, c->r[2] + 0x000000acu);
    { mem_w8(ram, c->r[3] + 0x00000084u, c->r[2]); goto L_088d8354; }
L_088d76a0:
    mem_w32(ram, c->r[30] + 0x00000018u, 0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000084u);
    mem_w32(ram, c->r[30] + 0x0000001cu, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = 0u + 0x000000ffu;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_088d76c8; }
    c->r[2] = 0u + 0xffffffffu;
    mem_w32(ram, c->r[30] + 0x0000001cu, c->r[2]);
L_088d76c8:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    mem_w32(ram, c->r[2] + 0x00000080u, 0u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = 0u + 0xffffffffu;
    mem_w8(ram, c->r[3] + 0x00000084u, c->r[2]);
L_088d76dc:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = c->r[2] + 0x00000001u;
    mem_w32(ram, c->r[30] + 0x0000001cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = c->r[2] + 0x00000001u;
    mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]);
    c->r[2] = 0x08aa0000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0xffffebe0u);
    c->r[3] = c->r[2] << 1;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = ((s32)c->r[3] < (s32)c->r[2]) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_088d7728; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    mem_w32(ram, c->r[2] + 0x00000080u, 0u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = 0u + 0xffffffffu;
    { mem_w8(ram, c->r[3] + 0x00000084u, c->r[2]); goto L_088d8354; }
L_088d7728:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000004u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_088d773c; }
    mem_w32(ram, c->r[30] + 0x0000001cu, 0u);
L_088d773c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x000000b2u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_088d7760; }
    { goto L_088d76dc; }
L_088d7760:
    { c->r[31] = 0x088d7768u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000008u); func_088d3790(c, ram); }
    { int _c = (c->r[2] != 0u); if (_c) goto L_088d7778; }
    { goto L_088d76dc; }
L_088d7778:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[3] = c->r[2] << 3;
    c->r[2] = 0x08aa0000u;
    c->r[2] = c->r[2] + 0x000049dcu;
    c->r[4] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[3] = c->r[2] << 3;
    c->r[2] = 0x08aa0000u;
    c->r[2] = c->r[2] + 0x000049e0u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[4] = mem_r32(ram, c->r[4] + 0x00000000u);
    { c->r[31] = 0x088d77acu; c->r[5] = mem_r32(ram, c->r[2] + 0x00000000u); func_088d6ab8(c, ram); }
    { int _c = (c->r[2] == 0u); if (_c) goto L_088d77bc; }
    { goto L_088d76dc; }
L_088d77bc:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[3] = c->r[2] << 3;
    c->r[2] = 0x08aa0000u;
    c->r[2] = c->r[2] + 0x000049dcu;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x0000008cu);
    c->r[2] = 0x00100000u;
    c->r[2] = c->r[3] & c->r[2];
    { int _c = (c->r[2] == 0u); if (_c) goto L_088d77f0; }
    { goto L_088d76dc; }
L_088d77f0:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[3] = c->r[2] << 3;
    c->r[2] = 0x08aa0000u;
    c->r[2] = c->r[2] + 0x000049dcu;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x0000008cu);
    c->r[2] = 0x00400000u;
    c->r[2] = c->r[3] & c->r[2];
    { int _c = (c->r[2] == 0u); if (_c) goto L_088d7824; }
    { goto L_088d76dc; }
L_088d7824:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[3] = c->r[2] << 3;
    c->r[2] = 0x08aa0000u;
    c->r[2] = c->r[2] + 0x000049dcu;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x0000008cu);
    c->r[2] = 0x00800000u;
    c->r[2] = c->r[3] & c->r[2];
    { int _c = (c->r[2] == 0u); if (_c) goto L_088d7858; }
    { goto L_088d76dc; }
L_088d7858:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000008cu);
    c->r[2] = c->r[2] & 0x0004u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_088d789c; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[3] = c->r[2] << 3;
    c->r[2] = 0x08aa0000u;
    c->r[2] = c->r[2] + 0x000049dcu;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000008cu);
    c->r[2] = c->r[2] & 0x0004u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_088d789c; }
    { goto L_088d76dc; }
L_088d789c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000008cu);
    c->r[2] = c->r[2] & 0x0002u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_088d78e0; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[3] = c->r[2] << 3;
    c->r[2] = 0x08aa0000u;
    c->r[2] = c->r[2] + 0x000049dcu;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000008cu);
    c->r[2] = c->r[2] & 0x0002u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_088d78e0; }
    { goto L_088d76dc; }
L_088d78e0:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000008cu);
    c->r[2] = c->r[2] & 0x0008u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_088d7924; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[3] = c->r[2] << 3;
    c->r[2] = 0x08aa0000u;
    c->r[2] = c->r[2] + 0x000049dcu;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000008cu);
    c->r[2] = c->r[2] & 0x0008u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_088d7924; }
    { goto L_088d76dc; }
L_088d7924:
    c->r[2] = mem_r8(ram, c->r[30] + 0x00000014u);
    c->r[2] = c->r[2] & 0x0001u;
    c->r[2] = c->r[2] & 0x00ffu;
    { int _c = (c->r[2] == 0u); if (_c) goto L_088d7968; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[3] = c->r[2] << 3;
    c->r[2] = 0x08aa0000u;
    c->r[2] = c->r[2] + 0x000049dcu;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000008cu);
    c->r[2] = c->r[2] & 0x1000u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_088d7968; }
    c->r[2] = 0u + 0x00000001u;
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
L_088d7968:
    c->r[2] = mem_r8(ram, c->r[30] + 0x00000014u);
    c->r[2] = c->r[2] & 0x0002u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_088d79a8; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[3] = c->r[2] << 3;
    c->r[2] = 0x08aa0000u;
    c->r[2] = c->r[2] + 0x000049dcu;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000008cu);
    c->r[2] = c->r[2] & 0x1000u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_088d79a8; }
    c->r[2] = 0u + 0x00000001u;
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
L_088d79a8:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    { int _c = (c->r[2] != 0u); if (_c) goto L_088d79bc; }
    { goto L_088d76dc; }
L_088d79bc:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[3] = c->r[2] << 3;
    c->r[2] = 0x08aa0000u;
    c->r[2] = c->r[2] + 0x000049dcu;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    mem_w32(ram, c->r[4] + 0x00000080u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r8(ram, c->r[30] + 0x00000008u);
    { mem_w8(ram, c->r[3] + 0x00000084u, c->r[2]); goto L_088d8354; }
L_088d79ec:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000084u);
    mem_w32(ram, c->r[30] + 0x0000001cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    mem_w32(ram, c->r[2] + 0x00000080u, 0u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = 0u + 0xffffffffu;
    mem_w8(ram, c->r[3] + 0x00000084u, c->r[2]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x0000008cu);
    c->r[2] = 0u + 0xfffffffdu;
    c->r[2] = c->r[3] & c->r[2];
    mem_w32(ram, c->r[4] + 0x0000008cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = mem_r8(ram, c->r[2] + 0x000000acu);
    c->r[2] = 0u + 0x000000ffu;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_088d7c10; }
    c->r[2] = 0u + 0x00000001u;
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r8(ram, c->r[2] + 0x000000acu);
    { c->r[31] = 0x088d7a50u; c->r[4] = c->r[2] + 0u; func_088d3790(c, ram); }
    { int _c = (c->r[2] != 0u); if (_c) goto L_088d7a5c; }
    mem_w32(ram, c->r[30] + 0x00000010u, 0u);
L_088d7a5c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_088d7ab0; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r8(ram, c->r[2] + 0x000000acu);
    c->r[3] = c->r[2] << 3;
    c->r[2] = 0x08aa0000u;
    c->r[2] = c->r[2] + 0x000049dcu;
    c->r[4] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r8(ram, c->r[2] + 0x000000acu);
    c->r[3] = c->r[2] << 3;
    c->r[2] = 0x08aa0000u;
    c->r[2] = c->r[2] + 0x000049e0u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[4] = mem_r32(ram, c->r[4] + 0x00000000u);
    { c->r[31] = 0x088d7aa4u; c->r[5] = mem_r32(ram, c->r[2] + 0x00000000u); func_088d6ab8(c, ram); }
    { int _c = (c->r[2] == 0u); if (_c) goto L_088d7ab0; }
    mem_w32(ram, c->r[30] + 0x00000010u, 0u);
L_088d7ab0:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_088d7bcc; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000008cu);
    c->r[2] = c->r[2] & 0x0004u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_088d7b00; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r8(ram, c->r[2] + 0x000000acu);
    c->r[3] = c->r[2] << 3;
    c->r[2] = 0x08aa0000u;
    c->r[2] = c->r[2] + 0x000049dcu;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000008cu);
    c->r[2] = c->r[2] & 0x0004u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_088d7b00; }
    mem_w32(ram, c->r[30] + 0x00000010u, 0u);
L_088d7b00:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000008cu);
    c->r[2] = c->r[2] & 0x0002u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_088d7b44; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r8(ram, c->r[2] + 0x000000acu);
    c->r[3] = c->r[2] << 3;
    c->r[2] = 0x08aa0000u;
    c->r[2] = c->r[2] + 0x000049dcu;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000008cu);
    c->r[2] = c->r[2] & 0x0002u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_088d7b44; }
    mem_w32(ram, c->r[30] + 0x00000010u, 0u);
L_088d7b44:
    c->r[2] = mem_r8(ram, c->r[30] + 0x00000014u);
    c->r[2] = c->r[2] & 0x0001u;
    c->r[2] = c->r[2] & 0x00ffu;
    { int _c = (c->r[2] == 0u); if (_c) goto L_088d7b84; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r8(ram, c->r[2] + 0x000000acu);
    c->r[3] = c->r[2] << 3;
    c->r[2] = 0x08aa0000u;
    c->r[2] = c->r[2] + 0x000049dcu;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000008cu);
    c->r[2] = c->r[2] & 0x1000u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_088d7bcc; }
L_088d7b84:
    c->r[2] = mem_r8(ram, c->r[30] + 0x00000014u);
    c->r[2] = c->r[2] & 0x0002u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_088d7bc8; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r8(ram, c->r[2] + 0x000000acu);
    c->r[3] = c->r[2] << 3;
    c->r[2] = 0x08aa0000u;
    c->r[2] = c->r[2] + 0x000049dcu;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000008cu);
    c->r[2] = c->r[2] & 0x1000u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_088d7bc8; }
    { goto L_088d7bcc; }
L_088d7bc8:
    mem_w32(ram, c->r[30] + 0x00000010u, 0u);
L_088d7bcc:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_088d7c10; }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r8(ram, c->r[2] + 0x000000acu);
    c->r[3] = c->r[2] << 3;
    c->r[2] = 0x08aa0000u;
    c->r[2] = c->r[2] + 0x000049dcu;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    mem_w32(ram, c->r[4] + 0x00000080u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r8(ram, c->r[2] + 0x000000acu);
    { mem_w8(ram, c->r[3] + 0x00000084u, c->r[2]); goto L_088d8354; }
L_088d7c10:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000008cu);
    c->r[2] = c->r[2] & 0x0002u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_088d7dd4; }
    c->r[2] = mem_r8(ram, c->r[30] + 0x00000014u);
    c->r[2] = c->r[2] & 0x0001u;
    c->r[2] = c->r[2] & 0x00ffu;
    { int _c = (c->r[2] == 0u); if (_c) goto L_088d7dd4; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000060u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x0000000cu);
    mem_wf32(ram, c->r[30] + 0x00000020u, c->f[0]);
    c->r[2] = 0x08a80000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00002ed8u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x0000008cu);
    c->r[2] = 0x04000000u;
    c->r[2] = c->r[3] & c->r[2];
    { int _c = (c->r[2] == 0u); if (_c) goto L_088d7c70; }
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000059dcu);
    mem_wf32(ram, c->r[30] + 0x00000020u, c->f[0]);
L_088d7c70:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x000000b8u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000020u);
    alx_c_cond_s(c, 12, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_088d7c94; }
    { goto L_088d7dd4; }
L_088d7c94:
    c->r[2] = 0u + 0x00000002u;
    mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000073u);
    c->r[2] = (c->r[2] < 0x00000002u) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_088d7cb8; }
    c->r[2] = 0u + 0x00000001u;
    mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]);
L_088d7cb8:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x088d7cc4u; c->r[5] = 0u + 0u; func_088de9d0(c, ram); }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = ((s32)c->r[2] < (s32)c->r[3]) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_088d7dd4; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = 0x08a80000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00002ed8u);
    mem_w32(ram, c->r[3] + 0x00000080u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    mem_w8(ram, c->r[2] + 0x00000084u, 0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000073u);
    mem_w32(ram, c->r[30] + 0x00000024u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000024u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000002u) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_088d7d30; }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x088d7d14u; c->r[5] = 0u + 0u; func_088de9d0(c, ram); }
    { int _c = ((s32)c->r[2] <= 0); if (_c) goto L_088d7d30; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000008cu);
    c->r[2] = c->r[2] | 0x0002u;
    mem_w32(ram, c->r[3] + 0x0000008cu, c->r[2]);
L_088d7d30:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x088d7d3cu; c->r[5] = 0u + 0x0000001fu; func_088d26fc(c, ram); }
    { int _c = (c->r[2] == 0u); if (_c) goto L_088d8354; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000008cu);
    c->r[2] = c->r[2] & 0x1000u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_088d8354; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000054u);
    c->r[3] = mem_r8(ram, c->r[2] + 0x00000000u);
    c->r[2] = 0u + 0x00000001u;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_088d7d90; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000054u);
    c->r[3] = mem_r8(ram, c->r[2] + 0x00000000u);
    c->r[2] = 0u + 0x00000007u;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_088d7d90; }
    { goto L_088d8354; }
L_088d7d90:
    c->r[2] = c->r[30] + 0x00000030u;
    { c->r[31] = 0x088d7d9cu; c->r[4] = c->r[2] + 0u; func_08934b94(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000008cu);
    c->r[2] = c->r[2] & 0x8000u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_088d7dbc; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000030u);
    c->r[2] = c->r[2] | 0x0004u;
    mem_w32(ram, c->r[30] + 0x00000030u, c->r[2]);
L_088d7dbc:
    c->r[2] = c->r[30] + 0x00000030u;
    c->r[4] = 0u + 0x00000003u;
    { c->r[31] = 0x088d7dccu; c->r[5] = c->r[2] + 0u; func_08934bcc(c, ram); }
    { goto L_088d8354; }
L_088d7dd4:
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000059e0u);
    mem_wf32(ram, c->r[30] + 0x00000020u, c->f[0]);
    c->r[2] = 0u + 0x00000002u;
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]);
L_088d7de8:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[3] = 0x08aa0000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0xffffebe0u);
    c->r[2] = ((s32)c->r[2] < (s32)c->r[3]) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_088d7e08; }
    { goto L_088d82b8; }
L_088d7e08:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000008cu);
    c->r[2] = c->r[2] & 0x0002u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_088d7ecc; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000008cu);
    c->r[2] = c->r[2] & 0x1000u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_088d7ecc; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    { int _c = (c->r[2] == 0u); if (_c) goto L_088d7e88; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x00000086u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000259u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_088d7ecc; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = 0x08a80000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00002ed8u);
    mem_w32(ram, c->r[3] + 0x00000080u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    mem_w8(ram, c->r[2] + 0x00000084u, 0u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000008cu);
    c->r[2] = c->r[2] | 0x0002u;
    mem_w32(ram, c->r[3] + 0x0000008cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    { mem_w16(ram, c->r[2] + 0x00000086u, 0u); goto L_088d8354; }
L_088d7e88:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x00000086u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000a8cu) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_088d7ecc; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = 0x08a80000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00002ed8u);
    mem_w32(ram, c->r[3] + 0x00000080u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    mem_w8(ram, c->r[2] + 0x00000084u, 0u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000008cu);
    c->r[2] = c->r[2] | 0x0002u;
    { mem_w32(ram, c->r[3] + 0x0000008cu, c->r[2]); goto L_088d8354; }
L_088d7ecc:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x000000b2u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_088d7ee8; }
    { goto L_088d82a8; }
L_088d7ee8:
    { c->r[31] = 0x088d7ef0u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000008u); func_088d3790(c, ram); }
    { int _c = (c->r[2] != 0u); if (_c) goto L_088d7f00; }
    { goto L_088d82a8; }
L_088d7f00:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[3] = c->r[2] << 3;
    c->r[2] = 0x08aa0000u;
    c->r[2] = c->r[2] + 0x000049dcu;
    c->r[4] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[3] = c->r[2] << 3;
    c->r[2] = 0x08aa0000u;
    c->r[2] = c->r[2] + 0x000049e0u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[4] = mem_r32(ram, c->r[4] + 0x00000000u);
    { c->r[31] = 0x088d7f34u; c->r[5] = mem_r32(ram, c->r[2] + 0x00000000u); func_088d6ab8(c, ram); }
    { int _c = (c->r[2] == 0u); if (_c) goto L_088d7f44; }
    { goto L_088d82a8; }
L_088d7f44:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[3] = c->r[2] << 3;
    c->r[2] = 0x08aa0000u;
    c->r[2] = c->r[2] + 0x000049dcu;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x0000008cu);
    c->r[2] = 0x00100000u;
    c->r[2] = c->r[3] & c->r[2];
    { int _c = (c->r[2] == 0u); if (_c) goto L_088d7f78; }
    { goto L_088d82a8; }
L_088d7f78:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[3] = c->r[2] << 3;
    c->r[2] = 0x08aa0000u;
    c->r[2] = c->r[2] + 0x000049dcu;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x0000008cu);
    c->r[2] = 0x00400000u;
    c->r[2] = c->r[3] & c->r[2];
    { int _c = (c->r[2] == 0u); if (_c) goto L_088d7fac; }
    { goto L_088d82a8; }
L_088d7fac:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[3] = c->r[2] << 3;
    c->r[2] = 0x08aa0000u;
    c->r[2] = c->r[2] + 0x000049e0u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x000000d4u);
    c->r[2] = c->r[2] & 0x0040u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_088d7fdc; }
    { goto L_088d82a8; }
L_088d7fdc:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000008cu);
    c->r[2] = c->r[2] & 0x0004u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_088d8020; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[3] = c->r[2] << 3;
    c->r[2] = 0x08aa0000u;
    c->r[2] = c->r[2] + 0x000049dcu;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000008cu);
    c->r[2] = c->r[2] & 0x0004u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_088d8020; }
    { goto L_088d82a8; }
L_088d8020:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000008cu);
    c->r[2] = c->r[2] & 0x0002u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_088d8064; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[3] = c->r[2] << 3;
    c->r[2] = 0x08aa0000u;
    c->r[2] = c->r[2] + 0x000049dcu;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000008cu);
    c->r[2] = c->r[2] & 0x0002u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_088d8064; }
    { goto L_088d82a8; }
L_088d8064:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000008cu);
    c->r[2] = c->r[2] & 0x1000u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_088d80f0; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000008cu);
    c->r[2] = c->r[2] & 0x0004u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_088d80bc; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[3] = c->r[2] << 3;
    c->r[2] = 0x08aa0000u;
    c->r[2] = c->r[2] + 0x000049dcu;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x000000b0u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000096u) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_088d80bc; }
    { goto L_088d82a8; }
L_088d80bc:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000008cu);
    c->r[2] = c->r[2] & 0x1000u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_088d80f0; }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x088d80dcu; c->r[5] = mem_r32(ram, c->r[30] + 0x00000008u); func_088de9d0(c, ram); }
    c->r[2] = ((s32)c->r[2] < (s32)0x00000002u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_088d80f0; }
    { goto L_088d82a8; }
L_088d80f0:
    c->r[2] = mem_r8(ram, c->r[30] + 0x00000014u);
    c->r[2] = c->r[2] & 0x0001u;
    c->r[2] = c->r[2] & 0x00ffu;
    { int _c = (c->r[2] == 0u); if (_c) goto L_088d8134; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[3] = c->r[2] << 3;
    c->r[2] = 0x08aa0000u;
    c->r[2] = c->r[2] + 0x000049dcu;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000008cu);
    c->r[2] = c->r[2] & 0x1000u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_088d8134; }
    c->r[2] = 0u + 0x00000001u;
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
L_088d8134:
    c->r[2] = mem_r8(ram, c->r[30] + 0x00000014u);
    c->r[2] = c->r[2] & 0x0002u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_088d8174; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[3] = c->r[2] << 3;
    c->r[2] = 0x08aa0000u;
    c->r[2] = c->r[2] + 0x000049dcu;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000008cu);
    c->r[2] = c->r[2] & 0x1000u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_088d8174; }
    c->r[2] = 0u + 0x00000001u;
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
L_088d8174:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    { int _c = (c->r[2] != 0u); if (_c) goto L_088d8188; }
    { goto L_088d82a8; }
L_088d8188:
    c->r[2] = c->r[30] + 0x00000040u;
    { c->r[31] = 0x088d8194u; c->r[4] = c->r[2] + 0u; func_08808240(c, ram); }
    c->r[4] = c->r[30] + 0x00000040u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[3] = c->r[2] << 3;
    c->r[2] = 0x08aa0000u;
    c->r[2] = c->r[2] + 0x000049dcu;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[3] = c->r[2] + 0x00000020u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000020u;
    c->r[5] = c->r[3] + 0u;
    { c->r[31] = 0x088d81c8u; c->r[6] = c->r[2] + 0u; func_08820ca4(c, ram); }
    c->r[2] = c->r[30] + 0x00000040u;
    { c->r[31] = 0x088d81d4u; c->r[4] = c->r[2] + 0u; func_08820c6c(c, ram); }
    mem_wf32(ram, c->r[30] + 0x00000050u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000060u);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000050u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x0000000cu);
    alx_c_cond_s(c, 12, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_088d82a8; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x000000d4u);
    c->r[2] = 0x00200000u;
    c->r[2] = c->r[3] & c->r[2];
    { int _c = (c->r[2] == 0u); if (_c) goto L_088d8270; }
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000050u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000020u);
    alx_c_cond_s(c, 12, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_088d8230; }
    { goto L_088d82a8; }
L_088d8230:
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000050u);
    mem_wf32(ram, c->r[30] + 0x00000020u, c->f[0]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[3] = c->r[2] << 3;
    c->r[2] = 0x08aa0000u;
    c->r[2] = c->r[2] + 0x000049dcu;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    mem_w32(ram, c->r[4] + 0x00000080u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r8(ram, c->r[30] + 0x00000008u);
    mem_w8(ram, c->r[3] + 0x00000084u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    { mem_w16(ram, c->r[2] + 0x00000086u, 0u); goto L_088d82a8; }
L_088d8270:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[3] = c->r[2] << 3;
    c->r[2] = 0x08aa0000u;
    c->r[2] = c->r[2] + 0x000049dcu;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    mem_w32(ram, c->r[4] + 0x00000080u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r8(ram, c->r[30] + 0x00000008u);
    mem_w8(ram, c->r[3] + 0x00000084u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    { mem_w16(ram, c->r[2] + 0x00000086u, 0u); goto L_088d8354; }
L_088d82a8:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]); goto L_088d7de8; }
L_088d82b8:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x000000d4u);
    c->r[2] = 0x00200000u;
    c->r[2] = c->r[3] & c->r[2];
    { int _c = (c->r[2] == 0u); if (_c) goto L_088d82d8; }
    { goto L_088d8354; }
L_088d82d8:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000080u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_088d8340; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000008cu);
    c->r[2] = c->r[2] & 0x1000u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_088d8340; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000008cu);
    c->r[2] = c->r[2] & 0x0002u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_088d8340; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = 0x08a80000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00002ed8u);
    mem_w32(ram, c->r[3] + 0x00000080u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    mem_w8(ram, c->r[2] + 0x00000084u, 0u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000008cu);
    c->r[2] = c->r[2] | 0x0002u;
    { mem_w32(ram, c->r[3] + 0x0000008cu, c->r[2]); goto L_088d8354; }
L_088d8340:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    mem_w32(ram, c->r[2] + 0x00000080u, 0u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = 0u + 0xffffffffu;
    mem_w8(ram, c->r[3] + 0x00000084u, c->r[2]);
L_088d8354:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000064u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000060u);
    { c->r[29] = c->r[29] + 0x00000070u; return; }
    return; /* fell out of func_088d75f0 */
}

/* func_088dc068  0x088dc068..0x088dce48  3552 bytes, source=fde */
void func_088dc068(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x088dc068u);
    c->r[29] = c->r[29] + 0xffffff80u;
    mem_w32(ram, c->r[29] + 0x00000074u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000070u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[6]);
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[7]);
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x088dc094u; c->r[4] = c->r[4] + 0x00000af4u; func_0880d294(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = 0u + 0x00000002u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_088dc0c0; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000008cu);
    c->r[2] = c->r[2] & 0x0002u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_088dc0c0; }
    { goto L_088dce34; }
L_088dc0c0:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x0000000cu);
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000014u);
    c->f[0] = (f32)(s32)f2u(c->f[0]);
    mem_wf32(ram, c->r[30] + 0x00000018u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000008cu);
    c->r[2] = c->r[2] & 0x0002u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_088dc120; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000008cu);
    c->r[2] = c->r[2] & 0x8000u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_088dc120; }
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000018u);
    c->r[1] = 0x08a40000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0x00005af8u);
    c->f[0] = c->f[0] / c->f[1];
    mem_wf32(ram, c->r[30] + 0x00000018u, c->f[0]);
L_088dc120:
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x088dc12cu; c->r[4] = c->r[4] + 0x00000af4u; func_0880d294(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = 0u + 0x00000002u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_088dc148; }
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000014u);
    c->f[0] = (f32)(s32)f2u(c->f[0]);
    mem_wf32(ram, c->r[30] + 0x00000018u, c->f[0]);
L_088dc148:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000080u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x0000008cu);
    c->r[2] = 0x01000000u;
    c->r[2] = c->r[3] & c->r[2];
    { int _c = (c->r[2] == 0u); if (_c) goto L_088dc178; }
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000018u);
    c->r[1] = 0x08a40000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0x00005afcu);
    c->f[0] = c->f[0] * c->f[1];
    mem_wf32(ram, c->r[30] + 0x00000018u, c->f[0]);
L_088dc178:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000080u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x0000008cu);
    c->r[2] = 0x02000000u;
    c->r[2] = c->r[3] & c->r[2];
    { int _c = (c->r[2] == 0u); if (_c) goto L_088dc1a8; }
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000018u);
    c->r[1] = 0x08a40000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0x00005b00u);
    c->f[0] = c->f[0] * c->f[1];
    mem_wf32(ram, c->r[30] + 0x00000018u, c->f[0]);
L_088dc1a8:
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000018u);
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    mem_wf32(ram, c->r[30] + 0x00000014u, c->f[0]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = mem_r16(ram, c->r[2] + 0x00000004u);
    c->r[2] = c->r[2] + 0xffffffffu;
    mem_w16(ram, c->r[3] + 0x00000004u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x00000004u);
    { int _c = ((s32)c->r[2] >= 0); if (_c) goto L_088dc1e0; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    mem_w16(ram, c->r[2] + 0x00000004u, 0u);
L_088dc1e0:
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x088dc1ecu; c->r[4] = c->r[4] + 0x00000af4u; func_0880d294(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = 0u + 0x00000002u;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_088dc25c; }
    c->r[3] = 0x08aa0000u;
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[3] + 0x00004962u);
    c->r[2] = 0u + 0x00000001u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_088dc25c; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000008cu);
    c->r[2] = c->r[2] & 0x0004u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_088dc25c; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000008cu);
    c->r[2] = c->r[2] & 0x1000u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_088dc25c; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000080u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000008cu);
    c->r[2] = c->r[2] & 0x1000u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_088dc25c; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    { mem_w16(ram, c->r[2] + 0x00000006u, 0u); goto L_088dce34; }
L_088dc25c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000004u);
    mem_wf32(ram, c->r[30] + 0x0000001cu, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = c->r[2] + 0x00000020u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000080u);
    c->r[2] = c->r[2] + 0x00000020u;
    c->r[4] = c->r[3] + 0u;
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x088dc28cu; c->f[12] = mem_rf32(ram, c->r[30] + 0x0000001cu); func_088ef798(c, ram); }
    { int _c = (c->r[2] == 0u); if (_c) goto L_088dc2a0; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    { mem_w16(ram, c->r[2] + 0x00000006u, 0u); goto L_088dce34; }
L_088dc2a0:
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x088dc2acu; c->r[4] = c->r[4] + 0x00000af4u; func_0880d294(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = 0u + 0x00000002u;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_088dc35c; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0u + 0x00000005u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_088dc314; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000084u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_088dc35c; }
    c->r[3] = 0x08a80000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00002ed8u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000024u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00005b04u);
    c->f[1] = c->f[1] + c->f[0];
    c->f[0] = mem_rf32(ram, c->r[3] + 0x00000024u);
    alx_c_cond_s(c, 12, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_088dce34; }
    { goto L_088dc35c; }
L_088dc314:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000008cu);
    c->r[2] = c->r[2] & 0x0004u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_088dc35c; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000008cu);
    c->r[2] = c->r[2] & 0x1000u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_088dc35c; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000080u);
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x000000b0u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000096u) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_088dc35c; }
    { goto L_088dce34; }
L_088dc35c:
    c->r[2] = 0u + 0x00000001u;
    mem_w32(ram, c->r[30] + 0x00000020u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0u + 0x00000005u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_088dc378; }
    mem_w32(ram, c->r[30] + 0x00000020u, 0u);
L_088dc378:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000008cu);
    c->r[2] = c->r[2] & 0x0010u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_088dc390; }
    mem_w32(ram, c->r[30] + 0x00000020u, 0u);
L_088dc390:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000054u);
    c->r[3] = mem_r8(ram, c->r[2] + 0x00000000u);
    c->r[2] = 0u + 0x00000005u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_088dc3ac; }
    mem_w32(ram, c->r[30] + 0x00000020u, 0u);
L_088dc3ac:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000054u);
    c->r[3] = mem_r8(ram, c->r[2] + 0x00000000u);
    c->r[2] = 0u + 0x00000004u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_088dc3c8; }
    mem_w32(ram, c->r[30] + 0x00000020u, 0u);
L_088dc3c8:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x00000006u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_088dc3f0; }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x088dc3e4u; c->r[5] = 0u + 0x00000007u; func_088d26fc(c, ram); }
    { int _c = (c->r[2] != 0u); if (_c) goto L_088dc3f0; }
    mem_w32(ram, c->r[30] + 0x00000020u, 0u);
L_088dc3f0:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_088dc4cc; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000008u);
    mem_wf32(ram, c->r[30] + 0x00000024u, c->f[0]);
    c->r[2] = 0x08a90000u;
    c->r[2] = mem_r8(ram, c->r[2] + 0xffffb9d6u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_088dc488; }
    c->r[2] = 0x08a90000u;
    c->r[2] = mem_r8(ram, c->r[2] + 0xffffb9d6u);
    c->f[0] = u2f(c->r[2]);
    c->f[0] = (f32)(s32)f2u(c->f[0]);
    mem_wf32(ram, c->r[30] + 0x00000028u, c->f[0]);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000028u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00005b08u);
    c->f[0] = c->f[1] / c->f[0];
    mem_wf32(ram, c->r[30] + 0x00000028u, c->f[0]);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000028u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00005b0cu);
    c->f[0] = c->f[1] * c->f[0];
    mem_wf32(ram, c->r[30] + 0x00000028u, c->f[0]);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000024u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000028u);
    c->f[0] = c->f[1] - c->f[0];
    mem_wf32(ram, c->r[30] + 0x00000024u, c->f[0]);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000024u);
    c->f[0] = u2f(0u);
    alx_c_cond_s(c, 12, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_088dc484; }
    { goto L_088dc488; }
L_088dc484:
    mem_w32(ram, c->r[30] + 0x00000024u, 0u);
L_088dc488:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[4] = c->r[2] + 0x00000020u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000050u);
    c->r[3] = c->r[2] + 0x00000040u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000080u);
    c->r[2] = c->r[2] + 0x00000020u;
    c->r[5] = c->r[3] + 0u;
    c->r[6] = c->r[2] + 0u;
    { c->r[31] = 0x088dc4b8u; c->f[12] = mem_rf32(ram, c->r[30] + 0x00000024u); func_088ef958(c, ram); }
    { int _c = (c->r[2] != 0u); if (_c) goto L_088dc4cc; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    { mem_w16(ram, c->r[2] + 0x00000006u, 0u); goto L_088dce34; }
L_088dc4cc:
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x088dc4d8u; c->r[4] = c->r[4] + 0x00000af4u; func_0880d294(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = 0u + 0x00000002u;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_088dc5c4; }
    mem_w32(ram, c->r[30] + 0x0000002cu, 0u);
    c->r[3] = 0x08aa0000u;
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[3] + 0x00004962u);
    mem_w32(ram, c->r[30] + 0x00000064u, c->r[3]);
    c->r[2] = 0u + 0x00000001u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000064u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_088dc520; }
    c->r[2] = 0u + 0x0000001du;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000064u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_088dc544; }
    { goto L_088dc564; }
L_088dc520:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000005cu);
    c->r[3] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x00000000u);
    c->r[2] = 0u + 0x00000091u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_088dc564; }
    c->r[2] = 0u + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x0000002cu, c->r[2]); goto L_088dc564; }
L_088dc544:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000005cu);
    c->r[3] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x00000000u);
    c->r[2] = 0u + 0x00000138u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_088dc564; }
    c->r[2] = 0u + 0x00000001u;
    mem_w32(ram, c->r[30] + 0x0000002cu, c->r[2]);
L_088dc564:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x00000006u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_088dc598; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000002cu);
    { int _c = (c->r[2] == 0u); if (_c) goto L_088dc598; }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x088dc58cu; c->r[5] = 0u + 0x0000000fu; func_088d26fc(c, ram); }
    { int _c = (c->r[2] != 0u); if (_c) goto L_088dc598; }
    mem_w32(ram, c->r[30] + 0x0000002cu, 0u);
L_088dc598:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000002cu);
    { int _c = (c->r[2] == 0u); if (_c) goto L_088dc5c4; }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x088dc5b0u; c->r[5] = mem_r32(ram, c->r[30] + 0x00000004u); func_088db5f8(c, ram); }
    { int _c = (c->r[2] == 0u); if (_c) goto L_088dc5c4; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    { mem_w16(ram, c->r[2] + 0x00000006u, 0u); goto L_088dce34; }
L_088dc5c4:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = mem_r16(ram, c->r[2] + 0x00000006u);
    c->r[2] = c->r[2] + 0x00000001u;
    mem_w16(ram, c->r[3] + 0x00000006u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[3] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x00000006u);
    c->r[2] = 0u + 0x00000001u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_088dc718; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000084u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_088dc718; }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x088dc608u; c->r[5] = 0u + 0x0000001fu; func_088d26fc(c, ram); }
    { int _c = (c->r[2] == 0u); if (_c) goto L_088dc718; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000008cu);
    c->r[2] = c->r[2] & 0x0002u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_088dc718; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000008cu);
    c->r[2] = c->r[2] & 0x1000u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_088dc688; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000054u);
    c->r[3] = mem_r8(ram, c->r[2] + 0x00000000u);
    c->r[2] = 0u + 0x00000001u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_088dc65c; }
    c->r[4] = 0u + 0u;
    { c->r[31] = 0x088dc65cu; c->r[5] = 0u + 0u; func_08934bcc(c, ram); }
L_088dc65c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000054u);
    c->r[3] = mem_r8(ram, c->r[2] + 0x00000000u);
    c->r[2] = 0u + 0x00000007u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_088dc718; }
    c->r[4] = 0u + 0u;
    { c->r[31] = 0x088dc680u; c->r[5] = 0u + 0u; func_08934bcc(c, ram); }
    { goto L_088dc718; }
L_088dc688:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000054u);
    c->r[3] = mem_r8(ram, c->r[2] + 0x00000000u);
    c->r[2] = 0u + 0x00000003u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_088dc6ac; }
    c->r[4] = 0u + 0x00000001u;
    { c->r[31] = 0x088dc6acu; c->r[5] = 0u + 0u; func_08934bcc(c, ram); }
L_088dc6ac:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000054u);
    c->r[3] = mem_r8(ram, c->r[2] + 0x00000000u);
    c->r[2] = 0u + 0x00000004u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_088dc6d0; }
    c->r[4] = 0u + 0x00000001u;
    { c->r[31] = 0x088dc6d0u; c->r[5] = 0u + 0u; func_08934bcc(c, ram); }
L_088dc6d0:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000054u);
    c->r[3] = mem_r8(ram, c->r[2] + 0x00000000u);
    c->r[2] = 0u + 0x00000005u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_088dc6f4; }
    c->r[4] = 0u + 0x00000002u;
    { c->r[31] = 0x088dc6f4u; c->r[5] = 0u + 0u; func_08934bcc(c, ram); }
L_088dc6f4:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000054u);
    c->r[3] = mem_r8(ram, c->r[2] + 0x00000000u);
    c->r[2] = 0u + 0x00000006u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_088dc718; }
    c->r[4] = 0u + 0x00000002u;
    { c->r[31] = 0x088dc718u; c->r[5] = 0u + 0u; func_08934bcc(c, ram); }
L_088dc718:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x088dc724u; c->r[5] = mem_r32(ram, c->r[30] + 0x00000004u); func_088f8bdc(c, ram); }
    { int _c = (c->r[2] == 0u); if (_c) goto L_088dc754; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[3] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x00000006u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = c->r[2] + 0xffffffe2u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_088dc754; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x00000050u);
    c->r[2] = 0u + 0x00000001u;
    mem_w16(ram, c->r[3] + 0x000000e2u, c->r[2]);
L_088dc754:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = mem_r8(ram, c->r[2] + 0x0000000bu);
    c->r[2] = (c->r[2] < 0x00000002u) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_088dc7d4; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000080u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x0000008cu);
    c->r[2] = 0x00080000u;
    c->r[2] = c->r[3] & c->r[2];
    { int _c = (c->r[2] == 0u); if (_c) goto L_088dc7d4; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = mem_r8(ram, c->r[2] + 0x0000000bu);
    { int _c = (c->r[2] != 0u); if (_c) goto L_088dc79c; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    mem_w16(ram, c->r[2] + 0x00000006u, 0u);
L_088dc79c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[3] = mem_r8(ram, c->r[2] + 0x0000000bu);
    c->r[2] = 0u + 0x00000001u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_088dce34; }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[3] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x00000006u);
    c->r[2] = (u32)((s32)c->r[3] >> 31);
    c->r[2] = c->r[2] >> 31;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = (u32)((s32)c->r[2] >> 1);
    { mem_w16(ram, c->r[4] + 0x00000006u, c->r[2]); goto L_088dce34; }
L_088dc7d4:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[4] = mem_r32(ram, c->r[2] + 0x00000080u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000080u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x0000008cu);
    c->r[2] = 0x00040000u;
    c->r[2] = c->r[3] | c->r[2];
    mem_w32(ram, c->r[4] + 0x0000008cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x00000004u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_088dce34; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[3] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x00000006u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = ((s32)c->r[3] < (s32)c->r[2]) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_088dce34; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000008cu);
    c->r[2] = c->r[2] & 0x0002u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_088dc8fc; }
    c->r[2] = 0u + 0x00000001u;
    mem_w32(ram, c->r[30] + 0x0000002cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = mem_r8(ram, c->r[2] + 0x0000000bu);
    { int _c = (c->r[2] != 0u); if (_c) goto L_088dc860; }
    { c->r[31] = 0x088dc850u; func_0883a25c(c, ram); }
    c->r[2] = c->r[2] & 0x000fu;
    { int _c = (c->r[2] != 0u); if (_c) goto L_088dc860; }
    mem_w32(ram, c->r[30] + 0x0000002cu, 0u);
L_088dc860:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[3] = mem_r8(ram, c->r[2] + 0x0000000bu);
    c->r[2] = 0u + 0x00000001u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_088dc88c; }
    { c->r[31] = 0x088dc87cu; func_0883a25c(c, ram); }
    c->r[2] = c->r[2] & 0x0007u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_088dc88c; }
    mem_w32(ram, c->r[30] + 0x0000002cu, 0u);
L_088dc88c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[3] = mem_r8(ram, c->r[2] + 0x0000000bu);
    c->r[2] = 0u + 0x00000002u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_088dc8b8; }
    { c->r[31] = 0x088dc8a8u; func_0883a25c(c, ram); }
    c->r[2] = c->r[2] & 0x0003u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_088dc8b8; }
    mem_w32(ram, c->r[30] + 0x0000002cu, 0u);
L_088dc8b8:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[3] = mem_r8(ram, c->r[2] + 0x0000000bu);
    c->r[2] = 0u + 0x00000003u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_088dc8e4; }
    { c->r[31] = 0x088dc8d4u; func_0883a25c(c, ram); }
    c->r[2] = c->r[2] & 0x0001u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_088dc8e4; }
    mem_w32(ram, c->r[30] + 0x0000002cu, 0u);
L_088dc8e4:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000002cu);
    { int _c = (c->r[2] == 0u); if (_c) goto L_088dc8fc; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    { mem_w16(ram, c->r[2] + 0x00000006u, 0u); goto L_088dce34; }
L_088dc8fc:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x000000b4u);
    mem_wf32(ram, c->r[30] + 0x00000028u, c->f[0]);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000028u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00005b10u);
    alx_c_cond_s(c, 14, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_088dc92c; }
    { goto L_088dc938; }
L_088dc92c:
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00005b14u);
    mem_wf32(ram, c->r[30] + 0x00000028u, c->f[0]);
L_088dc938:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000002u);
    mem_w32(ram, c->r[30] + 0x0000002cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000002cu);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000028u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_088dc964; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000002cu);
    c->r[2] = ((s32)c->r[2] < (s32)0x0000003cu) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_088dc97c; }
L_088dc964:
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000002cu);
    c->r[2] = 0u + 0x00000063u;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_088dc97c; }
    c->r[2] = 0u + 0x00000063u;
    mem_w32(ram, c->r[30] + 0x0000002cu, c->r[2]);
L_088dc97c:
    mem_w32(ram, c->r[30] + 0x00000030u, 0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x000000d4u);
    c->r[2] = c->r[2] & 0x0200u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_088dc99c; }
    c->r[2] = 0u + 0x00000001u;
    mem_w32(ram, c->r[30] + 0x00000030u, c->r[2]);
L_088dc99c:
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x088dc9a8u; c->r[4] = c->r[4] + 0x00000af4u; func_0880d294(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = 0u + 0x00000002u;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_088dc9f4; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000005cu);
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x00000000u);
    c->r[3] = c->r[2] + 0xffffff98u;
    c->r[2] = 0u + 0xffffff98u;
    c->r[2] = c->r[2] + 0x0000006bu;
    c->r[2] = (c->r[2] < c->r[3]) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_088dc9f4; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000084u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_088dc9f4; }
    c->r[2] = 0u + 0x00000001u;
    mem_w32(ram, c->r[30] + 0x00000030u, c->r[2]);
L_088dc9f4:
    mem_w32(ram, c->r[30] + 0x00000024u, 0u);
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x088dca04u; c->r[4] = c->r[4] + 0x00000af4u; func_0880d294(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = 0u + 0x00000002u;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_088dca7c; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000008cu);
    c->r[2] = c->r[2] & 0x1000u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_088dca7c; }
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000024u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00005b18u);
    c->f[0] = c->f[1] + c->f[0];
    mem_wf32(ram, c->r[30] + 0x00000024u, c->f[0]);
    c->r[3] = 0x08aa0000u;
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[3] + 0x00004962u);
    c->r[2] = 0u + 0x00000001u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_088dca64; }
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000024u);
    c->r[1] = 0x08a40000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0x00005b18u);
    c->f[0] = c->f[0] + c->f[1];
    mem_wf32(ram, c->r[30] + 0x00000024u, c->f[0]);
L_088dca64:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000024u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000024u);
    c->f[0] = c->f[1] + c->f[0];
    mem_wf32(ram, c->r[3] + 0x00000024u, c->f[0]);
L_088dca7c:
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0u + 0x00000005u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_088dcb80; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000030u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_088dcb80; }
    c->r[2] = c->r[30] + 0x00000040u;
    { c->r[31] = 0x088dcaa4u; c->r[4] = c->r[2] + 0u; func_08808240(c, ram); }
    c->r[2] = c->r[30] + 0x00000050u;
    { c->r[31] = 0x088dcab0u; c->r[4] = c->r[2] + 0u; func_08808240(c, ram); }
    c->r[3] = c->r[30] + 0x00000050u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000080u);
    c->r[2] = c->r[2] + 0x00000030u;
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00005b1cu);
    c->r[4] = c->r[3] + 0u;
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x088dcad8u; c->f[12] = c->f[0]; func_0884c224(c, ram); }
    c->r[3] = c->r[30] + 0x00000050u;
    c->r[5] = c->r[30] + 0x00000050u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000080u);
    c->r[2] = c->r[2] + 0x00000020u;
    c->r[4] = c->r[3] + 0u;
    { c->r[31] = 0x088dcaf8u; c->r[6] = c->r[2] + 0u; func_08859fd4(c, ram); }
    c->r[3] = c->r[30] + 0x00000040u;
    c->r[5] = c->r[30] + 0x00000050u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000020u;
    c->r[4] = c->r[3] + 0u;
    { c->r[31] = 0x088dcb14u; c->r[6] = c->r[2] + 0u; func_08820ca4(c, ram); }
    c->r[2] = 0u + 0x00000032u;
    mem_w32(ram, c->r[30] + 0x0000002cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = mem_r8(ram, c->r[2] + 0x0000000bu);
    mem_w32(ram, c->r[30] + 0x00000060u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000020u;
    c->r[4] = 0x30000000u;
    c->r[4] = c->r[4] | 0x0092u;
    c->r[5] = c->r[2] + 0u;
    c->r[6] = 0u + 0u;
    c->r[7] = 0u + 0u;
    c->f[12] = u2f(0u);
    c->f[13] = u2f(0u);
    { c->r[31] = 0x088dcb54u; c->r[8] = 0u + 0xffffffffu; func_0884fcb4(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[30] + 0x0000002cu);
    c->r[7] = (u32)(s32)(s8)mem_r8(ram, c->r[30] + 0x00000060u);
    c->r[8] = c->r[30] + 0x00000040u;
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = mem_r32(ram, c->r[2] + 0x00000080u);
    c->f[12] = mem_rf32(ram, c->r[30] + 0x00000028u);
    { c->r[31] = 0x088dcb78u; c->r[6] = c->r[3] + 0u; func_088bff04(c, ram); }
    { goto L_088dccc4; }
L_088dcb80:
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x088dcb8cu; c->r[4] = c->r[4] + 0x00000af4u; func_0880d294(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = 0u + 0x00000002u;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_088dcbf8; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000008cu);
    c->r[2] = c->r[2] & 0x0004u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_088dcbf8; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000084u);
    c->r[3] = c->r[2] << 3;
    c->r[2] = 0x08aa0000u;
    c->r[2] = c->r[2] + 0x000049e0u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    mem_w32(ram, c->r[30] + 0x00000060u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000060u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_088dcbf8; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000060u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000054u);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000002u);
    { int _c = ((s32)c->r[2] >= 0); if (_c) goto L_088dcbf8; }
    c->r[2] = 0u + 0x00000032u;
    mem_w32(ram, c->r[30] + 0x0000002cu, c->r[2]);
L_088dcbf8:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000054u);
    c->r[3] = mem_r8(ram, c->r[2] + 0x00000000u);
    c->r[2] = 0u + 0x00000001u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_088dcc74; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000020u;
    c->r[4] = 0x30000000u;
    c->r[4] = c->r[4] | 0x009bu;
    c->r[5] = c->r[2] + 0u;
    c->r[6] = 0u + 0u;
    c->r[7] = 0u + 0u;
    c->f[12] = u2f(0u);
    c->f[13] = u2f(0u);
    { c->r[31] = 0x088dcc3cu; c->r[8] = 0u + 0xffffffffu; func_0884fcb4(c, ram); }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[6] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[7] = (u32)(s32)(s8)mem_r8(ram, c->r[30] + 0x0000002cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000030u;
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = mem_r32(ram, c->r[3] + 0x00000080u);
    c->f[12] = mem_rf32(ram, c->r[6] + 0x000000b4u);
    c->r[6] = c->r[7] + 0u;
    c->r[7] = 0u + 0xffffffffu;
    { c->r[31] = 0x088dcc6cu; c->r[8] = c->r[2] + 0u; func_088bff04(c, ram); }
    { goto L_088dccc4; }
L_088dcc74:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000020u;
    c->r[4] = 0x30000000u;
    c->r[4] = c->r[4] | 0x0092u;
    c->r[5] = c->r[2] + 0u;
    c->r[6] = 0u + 0u;
    c->r[7] = 0u + 0u;
    c->f[12] = u2f(0u);
    c->f[13] = u2f(0u);
    { c->r[31] = 0x088dcca0u; c->r[8] = 0u + 0xffffffffu; func_0884fcb4(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[30] + 0x0000002cu);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = mem_r32(ram, c->r[2] + 0x00000080u);
    c->f[12] = mem_rf32(ram, c->r[30] + 0x00000028u);
    c->r[6] = c->r[3] + 0u;
    c->r[7] = 0u + 0xffffffffu;
    { c->r[31] = 0x088dccc4u; c->r[8] = 0u + 0u; func_088bff04(c, ram); }
L_088dccc4:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000008cu);
    c->r[2] = c->r[2] & 0x1000u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_088dccf0; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000024u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000024u);
    c->f[0] = c->f[1] - c->f[0];
    mem_wf32(ram, c->r[3] + 0x00000024u, c->f[0]);
L_088dccf0:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = mem_r16(ram, c->r[2] + 0x0000000eu);
    mem_w16(ram, c->r[3] + 0x00000004u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    mem_w16(ram, c->r[2] + 0x00000006u, 0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000084u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_088dce34; }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x088dcd24u; c->r[5] = 0u + 0x0000001fu; func_088d26fc(c, ram); }
    { int _c = (c->r[2] == 0u); if (_c) goto L_088dce34; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000008cu);
    c->r[2] = c->r[2] & 0x0002u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_088dce34; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000008cu);
    c->r[2] = c->r[2] & 0x1000u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_088dcda4; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000054u);
    c->r[3] = mem_r8(ram, c->r[2] + 0x00000000u);
    c->r[2] = 0u + 0x00000001u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_088dcd78; }
    c->r[4] = 0u + 0x00000006u;
    { c->r[31] = 0x088dcd78u; c->r[5] = 0u + 0u; func_08934bcc(c, ram); }
L_088dcd78:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000054u);
    c->r[3] = mem_r8(ram, c->r[2] + 0x00000000u);
    c->r[2] = 0u + 0x00000007u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_088dce34; }
    c->r[4] = 0u + 0x00000006u;
    { c->r[31] = 0x088dcd9cu; c->r[5] = 0u + 0u; func_08934bcc(c, ram); }
    { goto L_088dce34; }
L_088dcda4:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000054u);
    c->r[3] = mem_r8(ram, c->r[2] + 0x00000000u);
    c->r[2] = 0u + 0x00000003u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_088dcdc8; }
    c->r[4] = 0u + 0x00000007u;
    { c->r[31] = 0x088dcdc8u; c->r[5] = 0u + 0u; func_08934bcc(c, ram); }
L_088dcdc8:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000054u);
    c->r[3] = mem_r8(ram, c->r[2] + 0x00000000u);
    c->r[2] = 0u + 0x00000004u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_088dcdec; }
    c->r[4] = 0u + 0x00000007u;
    { c->r[31] = 0x088dcdecu; c->r[5] = 0u + 0u; func_08934bcc(c, ram); }
L_088dcdec:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000054u);
    c->r[3] = mem_r8(ram, c->r[2] + 0x00000000u);
    c->r[2] = 0u + 0x00000005u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_088dce10; }
    c->r[4] = 0u + 0x00000008u;
    { c->r[31] = 0x088dce10u; c->r[5] = 0u + 0u; func_08934bcc(c, ram); }
L_088dce10:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000054u);
    c->r[3] = mem_r8(ram, c->r[2] + 0x00000000u);
    c->r[2] = 0u + 0x00000006u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_088dce34; }
    c->r[4] = 0u + 0x00000008u;
    { c->r[31] = 0x088dce34u; c->r[5] = 0u + 0u; func_08934bcc(c, ram); }
L_088dce34:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000074u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000070u);
    { c->r[29] = c->r[29] + 0x00000080u; return; }
    return; /* fell out of func_088dc068 */
}

/* func_088defec  0x088defec..0x088df08c  160 bytes, source=sweep */
void func_088defec(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x088defecu);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[2] = 0x08aa0000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0xffffed00u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_088df014; }
    { mem_w32(ram, c->r[30] + 0x00000008u, 0u); goto L_088df078; }
L_088df014:
    mem_w32(ram, c->r[30] + 0x00000004u, 0u);
L_088df018:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000004u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_088df030; }
    { goto L_088df074; }
L_088df030:
    c->r[3] = 0x08aa0000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0xffffed00u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[2] = c->r[2] + 0x00000020u;
    c->r[3] = mem_r8(ram, c->r[2] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_088df064; }
    c->r[2] = 0u + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]); goto L_088df078; }
L_088df064:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000004u, c->r[2]); goto L_088df018; }
L_088df074:
    mem_w32(ram, c->r[30] + 0x00000008u, 0u);
L_088df078:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_088defec */
}

/* func_088e2e10  0x088e2e10..0x088e3188  888 bytes, source=fde */
void func_088e2e10(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x088e2e10u);
    c->r[29] = c->r[29] + 0xffffffc0u;
    mem_w32(ram, c->r[29] + 0x00000038u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000034u, c->r[30]);
    mem_w32(ram, c->r[29] + 0x00000030u, c->r[16]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[6]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x0000009bu);
    mem_w32(ram, c->r[30] + 0x00000020u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_088e2e60; }
    c->r[2] = 0u + 0x00000002u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000020u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_088e3034; }
    { goto L_088e3170; }
L_088e2e60:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x088e2e6cu; c->r[5] = mem_r32(ram, c->r[30] + 0x00000004u); func_088d8368(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000080u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_088e2f58; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[4] = mem_r32(ram, c->r[2] + 0x00000080u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000080u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x0000008cu);
    c->r[2] = 0x00020000u;
    c->r[2] = c->r[3] | c->r[2];
    mem_w32(ram, c->r[4] + 0x0000008cu, c->r[2]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000080u);
    c->r[3] = c->r[2] + 0x00000020u;
    c->r[2] = mem_r32(ram, c->r[3] + 0x00000000u);
    mem_w32(ram, c->r[4] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[3] + 0x00000004u);
    mem_w32(ram, c->r[4] + 0x00000004u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[3] + 0x00000008u);
    mem_w32(ram, c->r[4] + 0x00000008u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[3] + 0x0000000cu);
    mem_w32(ram, c->r[4] + 0x0000000cu, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000004u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00005c74u);
    c->f[0] = c->f[1] + c->f[0];
    mem_wf32(ram, c->r[3] + 0x00000004u, c->f[0]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = 0u + 0x00000001u;
    mem_w8(ram, c->r[3] + 0x00000028u, c->r[2]);
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x088e2f00u; c->r[4] = c->r[4] + 0x00000af4u; func_0880d294(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = 0u + 0x00000002u;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_088e2f70; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000084u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_088e2f70; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x000000b8u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00005c78u);
    alx_c_cond_s(c, 12, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_088e2f48; }
    { goto L_088e2f70; }
L_088e2f48:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = 0u + 0x00000002u;
    { mem_w8(ram, c->r[3] + 0x00000028u, c->r[2]); goto L_088e2f70; }
L_088e2f58:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x088e2f64u; c->r[5] = mem_r32(ram, c->r[30] + 0x00000004u); func_088d721c(c, ram); }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = 0u + 0x00000003u;
    mem_w8(ram, c->r[3] + 0x00000028u, c->r[2]);
L_088e2f70:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = 0u + 0x00000002u;
    mem_w8(ram, c->r[3] + 0x0000009bu, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x000000b2u);
    c->r[2] = c->r[2] + 0x0000003cu;
    mem_w32(ram, c->r[3] + 0x0000009cu, c->r[2]);
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x088e2f9cu; c->r[4] = c->r[4] + 0x00000af4u; func_0880d294(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = 0u + 0x00000002u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_088e2fd0; }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x000000b2u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[3];
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + 0x00000708u;
    mem_w32(ram, c->r[4] + 0x0000009cu, c->r[2]);
L_088e2fd0:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[16] = c->r[2] + 0x00000020u;
    c->r[3] = c->r[30] + 0x00000010u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000040u);
    c->f[1] = -c->f[0];
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000048u);
    c->f[0] = -c->f[0];
    c->r[4] = c->r[3] + 0u;
    c->f[12] = c->f[1];
    c->f[13] = u2f(0u);
    c->f[14] = c->f[0];
    c->f[15] = u2f(0u);
    { c->r[31] = 0x088e3010u; func_0880d140(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    mem_w32(ram, c->r[16] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    mem_w32(ram, c->r[16] + 0x00000004u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    mem_w32(ram, c->r[16] + 0x00000008u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    { mem_w32(ram, c->r[16] + 0x0000000cu, c->r[2]); goto L_088e3170; }
L_088e3034:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000080u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_088e3118; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[4] = mem_r32(ram, c->r[2] + 0x00000080u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000080u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x0000008cu);
    c->r[2] = 0x00020000u;
    c->r[2] = c->r[3] | c->r[2];
    mem_w32(ram, c->r[4] + 0x0000008cu, c->r[2]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000080u);
    c->r[3] = c->r[2] + 0x00000020u;
    c->r[2] = mem_r32(ram, c->r[3] + 0x00000000u);
    mem_w32(ram, c->r[4] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[3] + 0x00000004u);
    mem_w32(ram, c->r[4] + 0x00000004u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[3] + 0x00000008u);
    mem_w32(ram, c->r[4] + 0x00000008u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[3] + 0x0000000cu);
    mem_w32(ram, c->r[4] + 0x0000000cu, c->r[2]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[6] = mem_r32(ram, c->r[30] + 0x00000008u);
    { c->r[31] = 0x088e30a8u; c->r[7] = mem_r32(ram, c->r[30] + 0x00000004u); func_088d7000(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = c->r[2] + 0x00000068u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000060u);
    c->r[7] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000010u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000060u);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000011u);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[6] = c->r[3] + 0u;
    { c->r[31] = 0x088e30dcu; c->r[8] = c->r[2] + 0u; func_088de104(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = c->r[2] + 0x00000074u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000060u);
    c->r[7] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000012u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000060u);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000013u);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[6] = c->r[3] + 0u;
    { c->r[31] = 0x088e3110u; c->r[8] = c->r[2] + 0u; func_088de104(c, ram); }
    { goto L_088e3144; }
L_088e3118:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x088e3124u; c->r[5] = mem_r32(ram, c->r[30] + 0x00000004u); func_088d721c(c, ram); }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[6] = mem_r32(ram, c->r[30] + 0x00000008u);
    { c->r[31] = 0x088e3138u; c->r[7] = mem_r32(ram, c->r[30] + 0x00000004u); func_088d7000(c, ram); }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = 0u + 0x00000003u;
    mem_w8(ram, c->r[3] + 0x00000028u, c->r[2]);
L_088e3144:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000009cu);
    c->r[2] = c->r[2] + 0xffffffffu;
    mem_w32(ram, c->r[3] + 0x0000009cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000009cu);
    { int _c = ((s32)c->r[2] > 0); if (_c) goto L_088e3170; }
    { c->r[31] = 0x088e3170u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000004u); func_088d9878(c, ram); }
L_088e3170:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000038u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000034u);
    c->r[16] = mem_r32(ram, c->r[29] + 0x00000030u);
    { c->r[29] = c->r[29] + 0x00000040u; return; }
    return; /* fell out of func_088e2e10 */
}

/* func_088e8ae0  0x088e8ae0..0x088e8b14  52 bytes, source=sweep */
void func_088e8ae0(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x088e8ae0u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r16(ram, c->r[2] + 0x00000120u);
    c->r[2] = c->r[2] + 0x00000001u;
    mem_w16(ram, c->r[3] + 0x00000120u, c->r[2]);
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_088e8ae0 */
}

/* func_088ed598  0x088ed598..0x088ed6e0  328 bytes, source=fde */
void func_088ed598(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x088ed598u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[6]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000054u);
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000000u);
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = (c->r[3] < 0x0000000au) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_088ed6cc; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08a40000u;
    c->r[2] = c->r[2] + 0x00005f38u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    { u32 _t = c->r[2]; switch (_t) { case 0x088ed5f4u: goto L_088ed5f4; case 0x088ed610u: goto L_088ed610; case 0x088ed62cu: goto L_088ed62c; case 0x088ed648u: goto L_088ed648; case 0x088ed664u: goto L_088ed664; case 0x088ed680u: goto L_088ed680; case 0x088ed69cu: goto L_088ed69c; case 0x088ed6b8u: goto L_088ed6b8; case 0x088ed6ccu: goto L_088ed6cc; default: recomp_trap_unknown_indirect(c, ram, 0x088ed5ecu, _t); return; } }
L_088ed5f4:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000004u);
    { c->r[31] = 0x088ed608u; c->r[6] = mem_r32(ram, c->r[2] + 0x00000000u); func_088ec530(c, ram); }
    { goto L_088ed6cc; }
L_088ed610:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000004u);
    { c->r[31] = 0x088ed624u; c->r[6] = mem_r32(ram, c->r[2] + 0x00000000u); func_088ec558(c, ram); }
    { goto L_088ed6cc; }
L_088ed62c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000004u);
    { c->r[31] = 0x088ed640u; c->r[6] = mem_r32(ram, c->r[2] + 0x00000000u); func_088ec5ec(c, ram); }
    { goto L_088ed6cc; }
L_088ed648:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000004u);
    { c->r[31] = 0x088ed65cu; c->r[6] = mem_r32(ram, c->r[2] + 0x00000000u); func_088ec9fc(c, ram); }
    { goto L_088ed6cc; }
L_088ed664:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000004u);
    { c->r[31] = 0x088ed678u; c->r[6] = mem_r32(ram, c->r[2] + 0x00000000u); func_088eca78(c, ram); }
    { goto L_088ed6cc; }
L_088ed680:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000004u);
    { c->r[31] = 0x088ed694u; c->r[6] = mem_r32(ram, c->r[2] + 0x00000000u); func_088ecf00(c, ram); }
    { goto L_088ed6cc; }
L_088ed69c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000004u);
    { c->r[31] = 0x088ed6b0u; c->r[6] = mem_r32(ram, c->r[2] + 0x00000000u); func_088ed138(c, ram); }
    { goto L_088ed6cc; }
L_088ed6b8:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000004u);
    { c->r[31] = 0x088ed6ccu; c->r[6] = mem_r32(ram, c->r[2] + 0x00000000u); func_088ed258(c, ram); }
L_088ed6cc:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_088ed598 */
}

/* func_088f4874  0x088f4874..0x088f4944  208 bytes, source=sweep */
void func_088f4874(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x088f4874u);
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
    return; /* fell out of func_088f4874 */
}

/* func_088f8bdc  0x088f8bdc..0x088f8ce0  260 bytes, source=sweep */
void func_088f8bdc(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x088f8bdcu);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    c->r[2] = 0x08aa0000u;
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00004962u);
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
    c->r[2] = 0u + 0x00000008u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_088f8ca4; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = ((s32)c->r[3] < (s32)0x00000009u) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_088f8c34; }
    c->r[2] = 0u + 0x00000003u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_088f8c5c; }
    { goto L_088f8cc8; }
L_088f8c34:
    c->r[2] = 0u + 0x00000009u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_088f8c80; }
    c->r[2] = 0u + 0x00000010u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_088f8c5c; }
    { goto L_088f8cc8; }
L_088f8c5c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000005cu);
    c->r[3] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x00000000u);
    c->r[2] = 0u + 0x000000e5u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_088f8cc8; }
    c->r[2] = 0u + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]); goto L_088f8ccc; }
L_088f8c80:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000005cu);
    c->r[3] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x00000000u);
    c->r[2] = 0u + 0x000000d7u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_088f8ca4; }
    c->r[3] = 0u + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000008u, c->r[3]); goto L_088f8ccc; }
L_088f8ca4:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000005cu);
    c->r[3] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x00000000u);
    c->r[2] = 0u + 0x000000adu;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_088f8cc8; }
    c->r[2] = 0u + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]); goto L_088f8ccc; }
L_088f8cc8:
    mem_w32(ram, c->r[30] + 0x00000008u, 0u);
L_088f8ccc:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_088f8bdc */
}

/* func_088fda28  0x088fda28..0x088fec64  4668 bytes, source=fde */
void func_088fda28(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x088fda28u);
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
    c->r[2] = 0x08a80000u;
    c->r[2] = c->r[2] + 0x00000ef8u;
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]);
    c->r[2] = mem_r8(ram, c->r[30] + 0x00000004u);
    mem_w32(ram, c->r[30] + 0x00000070u, c->r[2]);
    c->r[2] = 0u + 0x00000001u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000070u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_088feb28; }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000070u);
    c->r[2] = ((s32)c->r[4] < (s32)0x00000002u) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_088fdaa0; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000070u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_088fdac8; }
    { goto L_088fec4c; }
L_088fdaa0:
    c->r[2] = 0u + 0x00000002u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000070u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_088febb4; }
    c->r[2] = 0u + 0x00000019u;
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000070u);
    { int _c = (c->r[4] == c->r[2]); if (_c) goto L_088febc8; }
    { goto L_088fec4c; }
L_088fdac8:
    c->r[16] = mem_r32(ram, c->r[30] + 0x0000000cu);
    { c->r[31] = 0x088fdad4u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u); func_089b7394(c, ram); }
    mem_w32(ram, c->r[16] + 0x00000000u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000020u;
    mem_w32(ram, c->r[3] + 0x00000004u, c->r[2]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = 0u + 0x00000090u;
    c->r[6] = 0u + 0xffffffffu;
    c->r[7] = 0u + 0xffffffffu;
    c->r[8] = 0u + 0u;
    c->r[9] = 0u + 0u;
    { c->r[31] = 0x088fdb0cu; c->r[10] = 0u + 0u; func_0892fcac(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[16] = c->r[2] + 0x00000008u;
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000ac8u;
    { c->r[31] = 0x088fdb28u; c->r[5] = mem_r32(ram, c->r[30] + 0x00000014u); func_089cb780(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000028u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000028u);
    mem_w32(ram, c->r[16] + 0x00000000u, c->r[2]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = 0u + 0x00000091u;
    c->r[6] = 0u + 0xffffffffu;
    c->r[7] = 0u + 0xffffffffu;
    c->r[8] = 0u + 0u;
    c->r[9] = 0u + 0u;
    { c->r[31] = 0x088fdb54u; c->r[10] = 0u + 0u; func_0892fcac(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[16] = c->r[2] + 0x0000000cu;
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000ac8u;
    { c->r[31] = 0x088fdb70u; c->r[5] = mem_r32(ram, c->r[30] + 0x00000018u); func_089cb780(c, ram); }
    mem_w32(ram, c->r[30] + 0x0000002cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000002cu);
    mem_w32(ram, c->r[16] + 0x00000000u, c->r[2]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = 0u + 0x00000092u;
    c->r[6] = 0u + 0xffffffffu;
    c->r[7] = 0u + 0xffffffffu;
    c->r[8] = 0u + 0u;
    c->r[9] = 0u + 0u;
    { c->r[31] = 0x088fdb9cu; c->r[10] = 0u + 0u; func_0892fcac(c, ram); }
    mem_w32(ram, c->r[30] + 0x0000001cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[16] = c->r[2] + 0x00000010u;
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000ac8u;
    { c->r[31] = 0x088fdbb8u; c->r[5] = mem_r32(ram, c->r[30] + 0x0000001cu); func_089cb780(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000030u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000030u);
    mem_w32(ram, c->r[16] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x000013c0u);
    mem_w32(ram, c->r[30] + 0x00000034u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000034u);
    c->r[2] = 0x405f0000u;
    c->r[2] = c->r[2] | 0x7de2u;
    c->r[2] = ((s32)c->r[2] < (s32)c->r[3]) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_088fdbf4; }
    c->r[2] = 0x405f0000u;
    c->r[2] = c->r[2] | 0x7de2u;
    mem_w32(ram, c->r[30] + 0x00000034u, c->r[2]);
L_088fdbf4:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000034u);
    c->r[2] = 0x88880000u;
    c->r[2] = c->r[2] | 0x8889u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[2] = c->hi;
    c->r[2] = c->r[2] + c->r[3];
    c->r[4] = (u32)((s32)c->r[2] >> 4);
    c->r[2] = (u32)((s32)c->r[3] >> 31);
    c->r[2] = c->r[4] - c->r[2];
    mem_w32(ram, c->r[30] + 0x00000034u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000034u);
    c->r[2] = 0x91a20000u;
    c->r[2] = c->r[2] | 0xb3c5u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[2] = c->hi;
    c->r[2] = c->r[2] + c->r[3];
    c->r[4] = (u32)((s32)c->r[2] >> 11);
    c->r[2] = (u32)((s32)c->r[3] >> 31);
    c->r[2] = c->r[4] - c->r[2];
    mem_w32(ram, c->r[30] + 0x00000038u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000034u);
    c->r[2] = 0x88880000u;
    c->r[2] = c->r[2] | 0x8889u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[2] = c->hi;
    c->r[2] = c->r[2] + c->r[3];
    c->r[4] = (u32)((s32)c->r[2] >> 5);
    c->r[2] = (u32)((s32)c->r[3] >> 31);
    c->r[4] = c->r[4] - c->r[2];
    c->r[2] = 0x88880000u;
    c->r[2] = c->r[2] | 0x8889u;
    alx_mult(c, c->r[4], c->r[2]);
    c->r[2] = c->hi;
    c->r[2] = c->r[2] + c->r[4];
    c->r[3] = (u32)((s32)c->r[2] >> 5);
    c->r[2] = (u32)((s32)c->r[4] >> 31);
    c->r[3] = c->r[3] - c->r[2];
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 4;
    c->r[2] = c->r[2] - c->r[3];
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[4] - c->r[2];
    mem_w32(ram, c->r[30] + 0x0000003cu, c->r[2]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000034u);
    c->r[2] = 0x88880000u;
    c->r[2] = c->r[2] | 0x8889u;
    alx_mult(c, c->r[4], c->r[2]);
    c->r[2] = c->hi;
    c->r[2] = c->r[2] + c->r[4];
    c->r[3] = (u32)((s32)c->r[2] >> 5);
    c->r[2] = (u32)((s32)c->r[4] >> 31);
    c->r[3] = c->r[3] - c->r[2];
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 4;
    c->r[2] = c->r[2] - c->r[3];
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[4] - c->r[2];
    mem_w32(ram, c->r[30] + 0x00000040u, c->r[2]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[5] = 0x00020000u;
    { c->r[31] = 0x088fdcecu; c->r[6] = 0u + 0x00000001u; func_08930178(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[4] = mem_r32(ram, c->r[2] + 0x00000004u);
    c->r[5] = 0x08a40000u;
    c->r[5] = c->r[5] + 0x000063a0u;
    c->r[6] = mem_r32(ram, c->r[30] + 0x00000038u);
    c->r[7] = mem_r32(ram, c->r[30] + 0x0000003cu);
    { c->r[31] = 0x088fdd0cu; c->r[8] = mem_r32(ram, c->r[30] + 0x00000040u); func_08a1ad34(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[5] = mem_r32(ram, c->r[2] + 0x00000004u);
    { c->r[31] = 0x088fdd20u; c->r[6] = 0u + 0x00000001u; func_0893009c(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000040u, 0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x000013c8u);
    mem_w32(ram, c->r[30] + 0x00000040u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000040u);
    c->r[2] = 0x00010000u;
    c->r[2] = c->r[2] | 0x869fu;
    c->r[2] = ((s32)c->r[2] < (s32)c->r[3]) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_088fdd54; }
    c->r[2] = 0x00010000u;
    c->r[2] = c->r[2] | 0x869fu;
    mem_w32(ram, c->r[30] + 0x00000040u, c->r[2]);
L_088fdd54:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[5] = 0x00020000u;
    { c->r[31] = 0x088fdd64u; c->r[6] = 0u + 0x00000003u; func_08930178(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000004u);
    c->r[2] = c->r[2] + 0x00000010u;
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0x08a40000u;
    c->r[5] = c->r[5] + 0x000063b0u;
    { c->r[31] = 0x088fdd84u; c->r[6] = mem_r32(ram, c->r[30] + 0x00000040u); func_08a1ad34(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000004u);
    c->r[2] = c->r[2] + 0x00000010u;
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x088fdda0u; c->r[6] = 0u + 0x00000003u; func_0893009c(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000040u, 0u);
    mem_w32(ram, c->r[30] + 0x0000003cu, 0u);
    mem_w32(ram, c->r[30] + 0x00000038u, 0u);
    mem_w32(ram, c->r[30] + 0x00000020u, 0u);
L_088fddb0:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000028u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_088fddc8; }
    { goto L_088fdef8; }
L_088fddc8:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[2] = c->r[2] << 3;
    c->r[2] = c->r[2] + c->r[4];
    c->r[2] = c->r[2] + 0x00001004u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000040u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[2] = c->r[3] + c->r[2];
    mem_w32(ram, c->r[30] + 0x00000040u, c->r[2]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[2] = c->r[2] << 3;
    c->r[2] = c->r[2] + c->r[4];
    c->r[2] = c->r[2] + 0x00001004u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000003cu);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[2] = c->r[3] + c->r[2];
    mem_w32(ram, c->r[30] + 0x0000003cu, c->r[2]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[2] = c->r[2] << 3;
    c->r[2] = c->r[2] + c->r[4];
    c->r[2] = c->r[2] + 0x00001008u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000040u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[2] = c->r[3] + c->r[2];
    mem_w32(ram, c->r[30] + 0x00000040u, c->r[2]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[2] = c->r[2] << 3;
    c->r[2] = c->r[2] + c->r[4];
    c->r[2] = c->r[2] + 0x00001008u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000038u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[2] = c->r[3] + c->r[2];
    mem_w32(ram, c->r[30] + 0x00000038u, c->r[2]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[2] = c->r[2] << 3;
    c->r[2] = c->r[2] + c->r[4];
    c->r[2] = c->r[2] + 0x0000100cu;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000040u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[2] = c->r[3] + c->r[2];
    mem_w32(ram, c->r[30] + 0x00000040u, c->r[2]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[2] = c->r[2] << 3;
    c->r[2] = c->r[2] + c->r[4];
    c->r[2] = c->r[2] + 0x0000100cu;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000038u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[2] = c->r[3] + c->r[2];
    mem_w32(ram, c->r[30] + 0x00000038u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000020u, c->r[2]); goto L_088fddb0; }
L_088fdef8:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000040u);
    c->r[3] = 0x00010000u;
    c->r[3] = c->r[3] | 0x869fu;
    c->r[2] = ((s32)c->r[3] < (s32)c->r[2]) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_088fdf1c; }
    c->r[2] = 0x00010000u;
    c->r[2] = c->r[2] | 0x869fu;
    mem_w32(ram, c->r[30] + 0x00000040u, c->r[2]);
L_088fdf1c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000003cu);
    c->r[3] = 0x00010000u;
    c->r[3] = c->r[3] | 0x869fu;
    c->r[2] = ((s32)c->r[3] < (s32)c->r[2]) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_088fdf40; }
    c->r[2] = 0x00010000u;
    c->r[2] = c->r[2] | 0x869fu;
    mem_w32(ram, c->r[30] + 0x0000003cu, c->r[2]);
L_088fdf40:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000038u);
    c->r[3] = 0x00010000u;
    c->r[3] = c->r[3] | 0x869fu;
    c->r[2] = ((s32)c->r[3] < (s32)c->r[2]) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_088fdf64; }
    c->r[2] = 0x00010000u;
    c->r[2] = c->r[2] | 0x869fu;
    mem_w32(ram, c->r[30] + 0x00000038u, c->r[2]);
L_088fdf64:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[5] = 0x00020000u;
    { c->r[31] = 0x088fdf74u; c->r[6] = 0u + 0x00000005u; func_08930178(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000004u);
    c->r[2] = c->r[2] + 0x00000020u;
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0x08a40000u;
    c->r[5] = c->r[5] + 0x000063b0u;
    { c->r[31] = 0x088fdf94u; c->r[6] = mem_r32(ram, c->r[30] + 0x00000040u); func_08a1ad34(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000004u);
    c->r[2] = c->r[2] + 0x00000020u;
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x088fdfb0u; c->r[6] = 0u + 0x00000005u; func_0893009c(c, ram); }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[5] = 0x00020000u;
    { c->r[31] = 0x088fdfc0u; c->r[6] = 0u + 0x00000007u; func_08930178(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000004u);
    c->r[2] = c->r[2] + 0x00000030u;
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0x08a40000u;
    c->r[5] = c->r[5] + 0x000063b0u;
    { c->r[31] = 0x088fdfe0u; c->r[6] = mem_r32(ram, c->r[30] + 0x0000003cu); func_08a1ad34(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000004u);
    c->r[2] = c->r[2] + 0x00000030u;
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x088fdffcu; c->r[6] = 0u + 0x00000007u; func_0893009c(c, ram); }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[5] = 0x00020000u;
    { c->r[31] = 0x088fe00cu; c->r[6] = 0u + 0x00000009u; func_08930178(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000004u);
    c->r[2] = c->r[2] + 0x00000040u;
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0x08a40000u;
    c->r[5] = c->r[5] + 0x000063b0u;
    { c->r[31] = 0x088fe02cu; c->r[6] = mem_r32(ram, c->r[30] + 0x00000038u); func_08a1ad34(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000004u);
    c->r[2] = c->r[2] + 0x00000040u;
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x088fe048u; c->r[6] = 0u + 0x00000009u; func_0893009c(c, ram); }
    c->r[2] = 0x08a80000u;
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000e44u);
    c->r[2] = c->r[2] ^ 0x0001u;
    c->r[2] = c->r[2] & 0x0001u;
    c->r[2] = c->r[2] & 0x00ffu;
    { int _c = (c->r[2] == 0u); if (_c) goto L_088fe074; }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[5] = 0u + 0x00000007u;
    { c->r[31] = 0x088fe074u; c->r[6] = 0u + 0u; func_0893009c(c, ram); }
L_088fe074:
    mem_w32(ram, c->r[30] + 0x00000040u, 0u);
    mem_w32(ram, c->r[30] + 0x00000020u, 0u);
L_088fe07c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[2] = ((s32)c->r[2] < (s32)0x0000001eu) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_088fe094; }
    { goto L_088fe118; }
L_088fe094:
    mem_w32(ram, c->r[30] + 0x00000024u, 0u);
L_088fe098:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000024u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000004u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_088fe0b0; }
    { goto L_088fe108; }
L_088fe0b0:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000024u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 5;
    c->r[2] = c->r[2] - c->r[3];
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[2] = c->r[2] + c->r[3];
    c->r[2] = c->r[2] << 5;
    c->r[2] = c->r[2] + c->r[4];
    c->r[2] = c->r[2] + 0x00000010u;
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000008u);
    c->r[2] = 0u + 0x00000004u;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_088fe0f8; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000040u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000040u, c->r[2]); goto L_088fe108; }
L_088fe0f8:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000024u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000024u, c->r[2]); goto L_088fe098; }
L_088fe108:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000020u, c->r[2]); goto L_088fe07c; }
L_088fe118:
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000040u);
    c->f[1] = (f32)(s32)f2u(c->f[0]);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000063ecu);
    c->f[1] = c->f[1] / c->f[0];
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000063f0u);
    c->f[0] = c->f[1] * c->f[0];
    mem_wf32(ram, c->r[30] + 0x00000044u, c->f[0]);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000044u);
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    mem_wf32(ram, c->r[30] + 0x0000003cu, c->f[0]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[5] = 0x00020000u;
    { c->r[31] = 0x088fe158u; c->r[6] = 0u + 0x00000002u; func_08930178(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000004u);
    c->r[2] = c->r[2] + 0x00000050u;
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0x08a40000u;
    c->r[5] = c->r[5] + 0x000063b8u;
    c->r[6] = mem_r32(ram, c->r[30] + 0x00000040u);
    { c->r[31] = 0x088fe17cu; c->r[7] = mem_r32(ram, c->r[30] + 0x0000003cu); func_08a1ad34(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000004u);
    c->r[2] = c->r[2] + 0x00000050u;
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x088fe198u; c->r[6] = 0u + 0x00000002u; func_0893009c(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000040u, 0u);
    mem_w32(ram, c->r[30] + 0x0000003cu, 0u);
    mem_w32(ram, c->r[30] + 0x00000020u, 0u);
L_088fe1a4:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000028u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_088fe1bc; }
    { goto L_088fe230; }
L_088fe1bc:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[2] = c->r[2] << 3;
    c->r[2] = c->r[2] + c->r[4];
    c->r[2] = c->r[2] + 0x00001000u;
    c->r[3] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000003cu);
    c->r[2] = (c->r[2] < c->r[3]) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_088fe220; }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[2] = c->r[2] << 3;
    c->r[2] = c->r[2] + c->r[4];
    c->r[2] = c->r[2] + 0x00001000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    mem_w32(ram, c->r[30] + 0x0000003cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    mem_w32(ram, c->r[30] + 0x00000040u, c->r[2]);
L_088fe220:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000020u, c->r[2]); goto L_088fe1a4; }
L_088fe230:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000003cu);
    { int _c = (c->r[2] != 0u); if (_c) goto L_088fe244; }
    c->r[2] = 0u + 0x0000000bu;
    mem_w32(ram, c->r[30] + 0x00000040u, c->r[2]);
L_088fe244:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000040u);
    c->r[2] = c->r[2] + 0x0000015fu;
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x088fe25cu; c->r[6] = 0u + 0x00000004u; func_0893009c(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x000013d0u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_088fe3b0; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    mem_w32(ram, c->r[30] + 0x00000048u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000048u);
    c->r[2] = mem_r32(ram, c->r[3] + 0x000013d4u);
    { int _c = ((s32)c->r[2] < 0); if (_c) goto L_088fe298; }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000048u);
    c->f[0] = mem_rf32(ram, c->r[4] + 0x000013d4u);
    c->f[0] = (f32)(s32)f2u(c->f[0]);
    { mem_wf32(ram, c->r[30] + 0x0000004cu, c->f[0]); goto L_088fe2d0; }
L_088fe298:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000048u);
    c->r[2] = mem_r32(ram, c->r[3] + 0x000013d4u);
    c->r[2] = c->r[2] & 0x0001u;
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000048u);
    c->r[3] = mem_r32(ram, c->r[4] + 0x000013d4u);
    c->r[3] = c->r[3] >> 1;
    c->r[2] = c->r[2] | c->r[3];
    c->f[0] = u2f(c->r[2]);
    c->f[0] = (f32)(s32)f2u(c->f[0]);
    mem_wf32(ram, c->r[30] + 0x0000004cu, c->f[0]);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x0000004cu);
    c->f[2] = mem_rf32(ram, c->r[30] + 0x0000004cu);
    c->f[1] = c->f[1] + c->f[2];
    mem_wf32(ram, c->r[30] + 0x0000004cu, c->f[1]);
L_088fe2d0:
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000063f0u);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x0000004cu);
    c->f[0] = c->f[1] * c->f[0];
    mem_wf32(ram, c->r[30] + 0x00000050u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    mem_w32(ram, c->r[30] + 0x00000054u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000054u);
    c->r[2] = mem_r32(ram, c->r[3] + 0x000013d0u);
    { int _c = ((s32)c->r[2] < 0); if (_c) goto L_088fe310; }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000054u);
    c->f[0] = mem_rf32(ram, c->r[4] + 0x000013d0u);
    c->f[0] = (f32)(s32)f2u(c->f[0]);
    { mem_wf32(ram, c->r[30] + 0x00000058u, c->f[0]); goto L_088fe348; }
L_088fe310:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000054u);
    c->r[2] = mem_r32(ram, c->r[3] + 0x000013d0u);
    c->r[2] = c->r[2] & 0x0001u;
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000054u);
    c->r[3] = mem_r32(ram, c->r[4] + 0x000013d0u);
    c->r[3] = c->r[3] >> 1;
    c->r[2] = c->r[2] | c->r[3];
    c->f[0] = u2f(c->r[2]);
    c->f[0] = (f32)(s32)f2u(c->f[0]);
    mem_wf32(ram, c->r[30] + 0x00000058u, c->f[0]);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000058u);
    c->f[2] = mem_rf32(ram, c->r[30] + 0x00000058u);
    c->f[1] = c->f[1] + c->f[2];
    mem_wf32(ram, c->r[30] + 0x00000058u, c->f[1]);
L_088fe348:
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000050u);
    c->f[2] = mem_rf32(ram, c->r[30] + 0x00000058u);
    c->f[0] = c->f[1] / c->f[2];
    mem_wf32(ram, c->r[30] + 0x00000044u, c->f[0]);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000044u);
    c->f[0] = u2f(0u);
    alx_c_cond_s(c, 12, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_088fe378; }
    { goto L_088fe37c; }
L_088fe378:
    mem_w32(ram, c->r[30] + 0x00000044u, 0u);
L_088fe37c:
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000044u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000063f0u);
    alx_c_cond_s(c, 12, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_088fe3a0; }
    { goto L_088fe3b4; }
L_088fe3a0:
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000063f0u);
    { mem_wf32(ram, c->r[30] + 0x00000044u, c->f[0]); goto L_088fe3b4; }
L_088fe3b0:
    mem_w32(ram, c->r[30] + 0x00000044u, 0u);
L_088fe3b4:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[5] = 0x00020000u;
    { c->r[31] = 0x088fe3c4u; c->r[6] = 0u + 0x00000007u; func_08930178(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000004u);
    c->r[16] = c->r[2] + 0x00000060u;
    { c->r[31] = 0x088fe3d8u; c->f[12] = mem_rf32(ram, c->r[30] + 0x00000044u); func_08a136f8(c, ram); }
    c->r[4] = c->r[16] + 0u;
    c->r[5] = 0x08a40000u;
    c->r[5] = c->r[5] + 0x000063c8u;
    c->r[6] = c->r[2] + 0u;
    { c->r[31] = 0x088fe3f0u; c->r[7] = c->r[3] + 0u; func_08a1ad34(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000004u);
    c->r[2] = c->r[2] + 0x00000060u;
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x088fe40cu; c->r[6] = 0u + 0x00000007u; func_0893009c(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x000013d8u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_088fe574; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    mem_w32(ram, c->r[30] + 0x0000005cu, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000005cu);
    c->r[2] = mem_r32(ram, c->r[3] + 0x000013dcu);
    { int _c = ((s32)c->r[2] < 0); if (_c) goto L_088fe448; }
    c->r[4] = mem_r32(ram, c->r[30] + 0x0000005cu);
    c->f[0] = mem_rf32(ram, c->r[4] + 0x000013dcu);
    c->f[0] = (f32)(s32)f2u(c->f[0]);
    { mem_wf32(ram, c->r[30] + 0x00000060u, c->f[0]); goto L_088fe480; }
L_088fe448:
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000005cu);
    c->r[2] = mem_r32(ram, c->r[3] + 0x000013dcu);
    c->r[2] = c->r[2] & 0x0001u;
    c->r[4] = mem_r32(ram, c->r[30] + 0x0000005cu);
    c->r[3] = mem_r32(ram, c->r[4] + 0x000013dcu);
    c->r[3] = c->r[3] >> 1;
    c->r[2] = c->r[2] | c->r[3];
    c->f[0] = u2f(c->r[2]);
    c->f[0] = (f32)(s32)f2u(c->f[0]);
    mem_wf32(ram, c->r[30] + 0x00000060u, c->f[0]);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000060u);
    c->f[2] = mem_rf32(ram, c->r[30] + 0x00000060u);
    c->f[1] = c->f[1] + c->f[2];
    mem_wf32(ram, c->r[30] + 0x00000060u, c->f[1]);
L_088fe480:
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000063f0u);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000060u);
    c->f[0] = c->f[1] * c->f[0];
    mem_wf32(ram, c->r[30] + 0x00000064u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    mem_w32(ram, c->r[30] + 0x00000068u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000068u);
    c->r[2] = mem_r32(ram, c->r[3] + 0x000013d8u);
    { int _c = ((s32)c->r[2] < 0); if (_c) goto L_088fe4c0; }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000068u);
    c->f[0] = mem_rf32(ram, c->r[4] + 0x000013d8u);
    c->f[0] = (f32)(s32)f2u(c->f[0]);
    { mem_wf32(ram, c->r[30] + 0x0000006cu, c->f[0]); goto L_088fe4f8; }
L_088fe4c0:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000068u);
    c->r[2] = mem_r32(ram, c->r[3] + 0x000013d8u);
    c->r[2] = c->r[2] & 0x0001u;
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000068u);
    c->r[3] = mem_r32(ram, c->r[4] + 0x000013d8u);
    c->r[3] = c->r[3] >> 1;
    c->r[2] = c->r[2] | c->r[3];
    c->f[0] = u2f(c->r[2]);
    c->f[0] = (f32)(s32)f2u(c->f[0]);
    mem_wf32(ram, c->r[30] + 0x0000006cu, c->f[0]);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x0000006cu);
    c->f[2] = mem_rf32(ram, c->r[30] + 0x0000006cu);
    c->f[1] = c->f[1] + c->f[2];
    mem_wf32(ram, c->r[30] + 0x0000006cu, c->f[1]);
L_088fe4f8:
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000064u);
    c->f[2] = mem_rf32(ram, c->r[30] + 0x0000006cu);
    c->f[0] = c->f[1] / c->f[2];
    mem_wf32(ram, c->r[30] + 0x00000044u, c->f[0]);
    c->r[1] = 0x08a40000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0x000063f0u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000044u);
    c->f[0] = c->f[1] - c->f[0];
    mem_wf32(ram, c->r[30] + 0x00000044u, c->f[0]);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000044u);
    c->f[0] = u2f(0u);
    alx_c_cond_s(c, 12, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_088fe53c; }
    { goto L_088fe540; }
L_088fe53c:
    mem_w32(ram, c->r[30] + 0x00000044u, 0u);
L_088fe540:
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000044u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000063f0u);
    alx_c_cond_s(c, 12, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_088fe564; }
    { goto L_088fe580; }
L_088fe564:
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000063f0u);
    { mem_wf32(ram, c->r[30] + 0x00000044u, c->f[0]); goto L_088fe580; }
L_088fe574:
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000063f0u);
    mem_wf32(ram, c->r[30] + 0x00000044u, c->f[0]);
L_088fe580:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[5] = 0x00020000u;
    { c->r[31] = 0x088fe590u; c->r[6] = 0u + 0x00000009u; func_08930178(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000004u);
    c->r[16] = c->r[2] + 0x00000070u;
    { c->r[31] = 0x088fe5a4u; c->f[12] = mem_rf32(ram, c->r[30] + 0x00000044u); func_08a136f8(c, ram); }
    c->r[4] = c->r[16] + 0u;
    c->r[5] = 0x08a40000u;
    c->r[5] = c->r[5] + 0x000063c8u;
    c->r[6] = c->r[2] + 0u;
    { c->r[31] = 0x088fe5bcu; c->r[7] = c->r[3] + 0u; func_08a1ad34(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000004u);
    c->r[2] = c->r[2] + 0x00000070u;
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x088fe5d8u; c->r[6] = 0u + 0x00000009u; func_0893009c(c, ram); }
    c->r[2] = 0x08a80000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000e3cu);
    mem_w32(ram, c->r[30] + 0x00000040u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000040u);
    c->r[2] = 0x3b9a0000u;
    c->r[2] = c->r[2] | 0xc9ffu;
    c->r[2] = ((s32)c->r[2] < (s32)c->r[3]) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_088fe608; }
    c->r[2] = 0x3b9a0000u;
    c->r[2] = c->r[2] | 0xc9ffu;
    mem_w32(ram, c->r[30] + 0x00000040u, c->r[2]);
L_088fe608:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000040u);
    c->r[2] = 0x431b0000u;
    c->r[2] = c->r[2] | 0xde83u;
    alx_mult(c, c->r[4], c->r[2]);
    c->r[2] = c->hi;
    c->r[3] = (u32)((s32)c->r[2] >> 18);
    c->r[2] = (u32)((s32)c->r[4] >> 31);
    c->r[4] = c->r[3] - c->r[2];
    c->r[2] = 0x10620000u;
    c->r[2] = c->r[2] | 0x4dd3u;
    alx_mult(c, c->r[4], c->r[2]);
    c->r[2] = c->hi;
    c->r[3] = (u32)((s32)c->r[2] >> 6);
    c->r[2] = (u32)((s32)c->r[4] >> 31);
    c->r[3] = c->r[3] - c->r[2];
    c->r[2] = 0u + 0x000003e8u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[2] = c->lo;
    c->r[2] = c->r[4] - c->r[2];
    mem_w32(ram, c->r[30] + 0x0000003cu, c->r[2]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000040u);
    c->r[2] = 0x10620000u;
    c->r[2] = c->r[2] | 0x4dd3u;
    alx_mult(c, c->r[4], c->r[2]);
    c->r[2] = c->hi;
    c->r[3] = (u32)((s32)c->r[2] >> 6);
    c->r[2] = (u32)((s32)c->r[4] >> 31);
    c->r[4] = c->r[3] - c->r[2];
    c->r[2] = 0x10620000u;
    c->r[2] = c->r[2] | 0x4dd3u;
    alx_mult(c, c->r[4], c->r[2]);
    c->r[2] = c->hi;
    c->r[3] = (u32)((s32)c->r[2] >> 6);
    c->r[2] = (u32)((s32)c->r[4] >> 31);
    c->r[3] = c->r[3] - c->r[2];
    c->r[2] = 0u + 0x000003e8u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[2] = c->lo;
    c->r[2] = c->r[4] - c->r[2];
    mem_w32(ram, c->r[30] + 0x00000038u, c->r[2]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000040u);
    c->r[2] = 0x10620000u;
    c->r[2] = c->r[2] | 0x4dd3u;
    alx_mult(c, c->r[4], c->r[2]);
    c->r[2] = c->hi;
    c->r[3] = (u32)((s32)c->r[2] >> 6);
    c->r[2] = (u32)((s32)c->r[4] >> 31);
    c->r[3] = c->r[3] - c->r[2];
    c->r[2] = 0u + 0x000003e8u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[2] = c->lo;
    c->r[2] = c->r[4] - c->r[2];
    mem_w32(ram, c->r[30] + 0x00000034u, c->r[2]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[5] = 0x00020000u;
    { c->r[31] = 0x088fe6ecu; c->r[6] = 0u + 0x00000001u; func_08930178(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000004u);
    c->r[2] = c->r[2] + 0x00000080u;
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0x08a40000u;
    c->r[5] = c->r[5] + 0x000063d0u;
    c->r[6] = mem_r32(ram, c->r[30] + 0x0000003cu);
    c->r[7] = mem_r32(ram, c->r[30] + 0x00000038u);
    { c->r[31] = 0x088fe714u; c->r[8] = mem_r32(ram, c->r[30] + 0x00000034u); func_08a1ad34(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000004u);
    c->r[2] = c->r[2] + 0x00000080u;
    c->r[4] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x088fe730u; c->r[6] = 0u + 0x00000001u; func_0893009c(c, ram); }
    c->r[2] = 0x08a80000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000e38u);
    mem_w32(ram, c->r[30] + 0x00000040u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000040u);
    c->r[2] = 0x3b9a0000u;
    c->r[2] = c->r[2] | 0xc9ffu;
    c->r[2] = ((s32)c->r[2] < (s32)c->r[3]) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_088fe760; }
    c->r[2] = 0x3b9a0000u;
    c->r[2] = c->r[2] | 0xc9ffu;
    mem_w32(ram, c->r[30] + 0x00000040u, c->r[2]);
L_088fe760:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000040u);
    c->r[2] = 0x431b0000u;
    c->r[2] = c->r[2] | 0xde83u;
    alx_mult(c, c->r[4], c->r[2]);
    c->r[2] = c->hi;
    c->r[3] = (u32)((s32)c->r[2] >> 18);
    c->r[2] = (u32)((s32)c->r[4] >> 31);
    c->r[4] = c->r[3] - c->r[2];
    c->r[2] = 0x10620000u;
    c->r[2] = c->r[2] | 0x4dd3u;
    alx_mult(c, c->r[4], c->r[2]);
    c->r[2] = c->hi;
    c->r[3] = (u32)((s32)c->r[2] >> 6);
    c->r[2] = (u32)((s32)c->r[4] >> 31);
    c->r[3] = c->r[3] - c->r[2];
    c->r[2] = 0u + 0x000003e8u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[2] = c->lo;
    c->r[2] = c->r[4] - c->r[2];
    mem_w32(ram, c->r[30] + 0x0000003cu, c->r[2]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000040u);
    c->r[2] = 0x10620000u;
    c->r[2] = c->r[2] | 0x4dd3u;
    alx_mult(c, c->r[4], c->r[2]);
    c->r[2] = c->hi;
    c->r[3] = (u32)((s32)c->r[2] >> 6);
    c->r[2] = (u32)((s32)c->r[4] >> 31);
    c->r[4] = c->r[3] - c->r[2];
    c->r[2] = 0x10620000u;
    c->r[2] = c->r[2] | 0x4dd3u;
    alx_mult(c, c->r[4], c->r[2]);
    c->r[2] = c->hi;
    c->r[3] = (u32)((s32)c->r[2] >> 6);
    c->r[2] = (u32)((s32)c->r[4] >> 31);
    c->r[3] = c->r[3] - c->r[2];
    c->r[2] = 0u + 0x000003e8u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[2] = c->lo;
    c->r[2] = c->r[4] - c->r[2];
    mem_w32(ram, c->r[30] + 0x00000038u, c->r[2]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000040u);
    c->r[2] = 0x10620000u;
    c->r[2] = c->r[2] | 0x4dd3u;
    alx_mult(c, c->r[4], c->r[2]);
    c->r[2] = c->hi;
    c->r[3] = (u32)((s32)c->r[2] >> 6);
    c->r[2] = (u32)((s32)c->r[4] >> 31);
    c->r[3] = c->r[3] - c->r[2];
    c->r[2] = 0u + 0x000003e8u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[2] = c->lo;
    c->r[2] = c->r[4] - c->r[2];
    mem_w32(ram, c->r[30] + 0x00000034u, c->r[2]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[5] = 0x00020000u;
    { c->r[31] = 0x088fe844u; c->r[6] = 0u + 0x00000003u; func_08930178(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000004u);
    c->r[2] = c->r[2] + 0x00000090u;
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0x08a40000u;
    c->r[5] = c->r[5] + 0x000063d0u;
    c->r[6] = mem_r32(ram, c->r[30] + 0x0000003cu);
    c->r[7] = mem_r32(ram, c->r[30] + 0x00000038u);
    { c->r[31] = 0x088fe86cu; c->r[8] = mem_r32(ram, c->r[30] + 0x00000034u); func_08a1ad34(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000004u);
    c->r[2] = c->r[2] + 0x00000090u;
    c->r[4] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x088fe888u; c->r[6] = 0u + 0x00000003u; func_0893009c(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000040u, 0u);
    mem_w32(ram, c->r[30] + 0x00000020u, 0u);
L_088fe890:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000028u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_088fe8a8; }
    { goto L_088fe8e8; }
L_088fe8a8:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[3] = c->r[2] << 1;
    c->r[2] = 0x08a80000u;
    c->r[2] = c->r[2] + 0x00000e44u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r16(ram, c->r[2] + 0x00000002u);
    c->r[2] = c->r[2] & 0x0002u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_088fe8d8; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000040u);
    c->r[2] = c->r[2] + 0x00000001u;
    mem_w32(ram, c->r[30] + 0x00000040u, c->r[2]);
L_088fe8d8:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000020u, c->r[2]); goto L_088fe890; }
L_088fe8e8:
    c->r[4] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[5] = 0x00020000u;
    { c->r[31] = 0x088fe8f8u; c->r[6] = 0u + 0x00000005u; func_08930178(c, ram); }
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000040u);
    c->f[1] = (f32)(s32)f2u(c->f[0]);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000063f4u);
    c->f[1] = c->f[1] / c->f[0];
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000063f0u);
    c->f[0] = c->f[1] * c->f[0];
    mem_wf32(ram, c->r[30] + 0x00000044u, c->f[0]);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000044u);
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    mem_wf32(ram, c->r[30] + 0x0000003cu, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000004u);
    c->r[2] = c->r[2] + 0x000000a0u;
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0x08a40000u;
    c->r[5] = c->r[5] + 0x000063b8u;
    c->r[6] = mem_r32(ram, c->r[30] + 0x00000040u);
    { c->r[31] = 0x088fe94cu; c->r[7] = mem_r32(ram, c->r[30] + 0x0000003cu); func_08a1ad34(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000004u);
    c->r[2] = c->r[2] + 0x000000a0u;
    c->r[4] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x088fe968u; c->r[6] = 0u + 0x00000005u; func_0893009c(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000040u, 0u);
    mem_w32(ram, c->r[30] + 0x00000020u, 0u);
L_088fe970:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[2] = ((s32)c->r[2] < (s32)0x0000003cu) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_088fe988; }
    { goto L_088fe9c4; }
L_088fe988:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[2] = 0x08a80000u;
    c->r[2] = c->r[2] + 0x00000eb4u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000005u);
    c->r[2] = c->r[2] & 0x0002u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_088fe9b4; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000040u);
    c->r[2] = c->r[2] + 0x00000001u;
    mem_w32(ram, c->r[30] + 0x00000040u, c->r[2]);
L_088fe9b4:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000020u, c->r[2]); goto L_088fe970; }
L_088fe9c4:
    c->r[4] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[5] = 0x00020000u;
    { c->r[31] = 0x088fe9d4u; c->r[6] = 0u + 0x00000007u; func_08930178(c, ram); }
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000040u);
    c->f[1] = (f32)(s32)f2u(c->f[0]);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000063f8u);
    c->f[1] = c->f[1] / c->f[0];
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000063f0u);
    c->f[0] = c->f[1] * c->f[0];
    mem_wf32(ram, c->r[30] + 0x00000044u, c->f[0]);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000044u);
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    mem_wf32(ram, c->r[30] + 0x0000003cu, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000004u);
    c->r[2] = c->r[2] + 0x000000b0u;
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0x08a40000u;
    c->r[5] = c->r[5] + 0x000063b8u;
    c->r[6] = mem_r32(ram, c->r[30] + 0x00000040u);
    { c->r[31] = 0x088fea28u; c->r[7] = mem_r32(ram, c->r[30] + 0x0000003cu); func_08a1ad34(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000004u);
    c->r[2] = c->r[2] + 0x000000b0u;
    c->r[4] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x088fea44u; c->r[6] = 0u + 0x00000007u; func_0893009c(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000040u, 0u);
    mem_w32(ram, c->r[30] + 0x00000020u, 0u);
L_088fea4c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000012u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_088fea64; }
    { goto L_088feaa0; }
L_088fea64:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[3] = 0u + 0x00000001u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[3] = c->r[3] << (c->r[2] & 31u);
    c->r[2] = mem_r32(ram, c->r[4] + 0x000013c4u);
    c->r[2] = c->r[3] & c->r[2];
    { int _c = (c->r[2] == 0u); if (_c) goto L_088fea90; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000040u);
    c->r[2] = c->r[2] + 0x00000001u;
    mem_w32(ram, c->r[30] + 0x00000040u, c->r[2]);
L_088fea90:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000020u, c->r[2]); goto L_088fea4c; }
L_088feaa0:
    c->r[4] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[5] = 0x00020000u;
    { c->r[31] = 0x088feab0u; c->r[6] = 0u + 0x00000009u; func_08930178(c, ram); }
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000040u);
    c->f[1] = (f32)(s32)f2u(c->f[0]);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000063fcu);
    c->f[1] = c->f[1] / c->f[0];
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000063f0u);
    c->f[0] = c->f[1] * c->f[0];
    mem_wf32(ram, c->r[30] + 0x00000044u, c->f[0]);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000044u);
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    mem_wf32(ram, c->r[30] + 0x0000003cu, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000004u);
    c->r[2] = c->r[2] + 0x000000c0u;
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0x08a40000u;
    c->r[5] = c->r[5] + 0x000063b8u;
    c->r[6] = mem_r32(ram, c->r[30] + 0x00000040u);
    { c->r[31] = 0x088feb04u; c->r[7] = mem_r32(ram, c->r[30] + 0x0000003cu); func_08a1ad34(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000004u);
    c->r[2] = c->r[2] + 0x000000c0u;
    c->r[4] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x088feb20u; c->r[6] = 0u + 0x00000009u; func_0893009c(c, ram); }
    { goto L_088fec4c; }
L_088feb28:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x00000008u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000ac8u;
    { c->r[31] = 0x088feb44u; c->r[5] = c->r[2] + 0u; func_089cb820(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x0000000cu;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000ac8u;
    { c->r[31] = 0x088feb64u; c->r[5] = c->r[2] + 0u; func_089cb820(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x00000010u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000ac8u;
    { c->r[31] = 0x088feb84u; c->r[5] = c->r[2] + 0u; func_089cb820(c, ram); }
    mem_w32(ram, c->r[30] + 0x0000001cu, c->r[2]);
    { c->r[31] = 0x088feb90u; c->r[4] = 0u + 0x00000001u; func_089c5f10(c, ram); }
    { int _c = (c->r[2] == 0u); if (_c) goto L_088fec4c; }
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00002e04u;
    c->r[5] = 0u + 0x00000011u;
    { c->r[31] = 0x088febacu; c->r[6] = 0u + 0u; func_08813280(c, ram); }
    { goto L_088fec4c; }
L_088febb4:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    { c->r[31] = 0x088febc0u; c->r[4] = mem_r32(ram, c->r[2] + 0x00000000u); func_089b73e0(c, ram); }
    { goto L_088fec4c; }
L_088febc8:
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00006400u);
    c->r[4] = 0x08a70000u;
    c->r[4] = c->r[4] + 0xffffb640u;
    { c->r[31] = 0x088febe0u; c->f[12] = c->f[0]; func_089f1210(c, ram); }
    { c->r[31] = 0x088febe8u; func_08902ea0(c, ram); }
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x088febf4u; c->r[4] = c->r[4] + 0x00000cccu; func_08967acc(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000040u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000040u);
    c->r[2] = 0u + 0xffffffffu;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_088fec24; }
    c->r[4] = 0x08a40000u;
    c->r[4] = c->r[4] + 0x000063e0u;
    c->r[5] = 0u + 0x000013dfu;
    { c->r[31] = 0x088fec1cu; c->r[6] = 0u + 0x00000001u; func_08928cb8(c, ram); }
    { goto L_088fec40; }
L_088fec24:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000040u);
    c->r[2] = c->r[2] + 0x00001629u;
    c->r[4] = 0x08a40000u;
    c->r[4] = c->r[4] + 0x000063e0u;
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x088fec40u; c->r[6] = 0u + 0x00000001u; func_08928cb8(c, ram); }
L_088fec40:
    c->r[4] = 0x08a70000u;
    { c->r[31] = 0x088fec4cu; c->r[4] = c->r[4] + 0xffffb640u; func_089f147c(c, ram); }
L_088fec4c:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000088u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000084u);
    c->r[16] = mem_r32(ram, c->r[29] + 0x00000080u);
    { c->r[29] = c->r[29] + 0x00000090u; return; }
    return; /* fell out of func_088fda28 */
}

/* func_08901bc0  0x08901bc0..0x08901c4c  140 bytes, source=fde */
void func_08901bc0(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08901bc0u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_08901c00; }
    c->r[4] = 0x08a40000u;
    c->r[4] = c->r[4] + 0x00006524u;
    c->r[5] = 0u + 0x00001592u;
    { c->r[31] = 0x08901bf8u; c->r[6] = 0u + 0x00000001u; func_08928cb8(c, ram); }
    { goto L_08901c38; }
L_08901c00:
    { c->r[31] = 0x08901c08u; c->r[4] = 0u + 0x00000001u; func_089c5e18(c, ram); }
    { int _c = (c->r[2] == 0u); if (_c) goto L_08901c20; }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = 0x08900000u;
    { c->r[31] = 0x08901c20u; c->r[5] = c->r[5] + 0x00002cacu; func_0880f03c(c, ram); }
L_08901c20:
    { c->r[31] = 0x08901c28u; c->r[4] = 0u + 0x00000001u; func_089c5f10(c, ram); }
    { int _c = (c->r[2] == 0u); if (_c) goto L_08901c38; }
    { c->r[31] = 0x08901c38u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u); func_0880f21c(c, ram); }
L_08901c38:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_08901bc0 */
}

/* func_089046f4  0x089046f4..0x08904958  612 bytes, source=fde */
void func_089046f4(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089046f4u);
    c->r[29] = c->r[29] + 0xfffffed0u;
    mem_w32(ram, c->r[29] + 0x00000128u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000124u, c->r[30]);
    mem_w32(ram, c->r[29] + 0x00000120u, c->r[16]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x000000e0u;
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[2]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[5] = 0u + 0u;
    { c->r[31] = 0x08904728u; c->r[6] = 0u + 0x00000060u; func_08a19ec4(c, ram); }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x08904734u; c->r[5] = 0u + 0x00000006u; func_088679a0(c, ram); }
    { c->r[31] = 0x0890473cu; func_0892288c(c, ram); }
    { c->r[31] = 0x08904744u; c->r[4] = 0u + 0x0000001eu; func_089c6f04(c, ram); }
    c->r[4] = 0x08aa0000u;
    c->r[4] = c->r[4] + 0xfffff540u;
    { c->r[31] = 0x08904754u; c->r[5] = c->r[2] + 0u; func_08811340(c, ram); }
    { c->r[31] = 0x0890475cu; func_0891f708(c, ram); }
    c->r[16] = mem_r32(ram, c->r[30] + 0x00000004u);
    { c->r[31] = 0x08904768u; c->r[4] = 0u + 0x00000046u; func_089c6f04(c, ram); }
    mem_w16(ram, c->r[16] + 0x0000002au, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x0000002au);
    { int _c = (c->r[2] != 0u); if (_c) goto L_08904788; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = 0u + 0x00000200u;
    mem_w16(ram, c->r[3] + 0x0000002au, c->r[2]);
L_08904788:
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x08904794u; c->r[4] = c->r[4] + 0x00000af4u; func_08813c00(c, ram); }
    c->r[16] = c->r[2] + 0u;
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x089047a4u; c->r[4] = c->r[4] + 0x00000af4u; func_0880d380(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = c->r[30] + 0x00000010u;
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0x08a40000u;
    c->r[5] = c->r[5] + 0x00006618u;
    c->r[6] = c->r[16] + 0u;
    { c->r[31] = 0x089047c4u; c->r[7] = c->r[3] + 0u; func_08a1ad34(c, ram); }
    c->r[16] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[30] + 0x00000010u;
    { c->r[31] = 0x089047d4u; c->r[4] = c->r[2] + 0u; func_089c6f64(c, ram); }
    mem_w16(ram, c->r[16] + 0x00000028u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x00000028u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_089047f4; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = 0u + 0x00000200u;
    mem_w16(ram, c->r[3] + 0x00000028u, c->r[2]);
L_089047f4:
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x08904800u; c->r[4] = c->r[4] + 0x00000af4u; func_08813c00(c, ram); }
    c->r[16] = c->r[2] + 0u;
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x08904810u; c->r[4] = c->r[4] + 0x00000af4u; func_0880d380(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = c->r[30] + 0x00000010u;
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0x08a40000u;
    c->r[5] = c->r[5] + 0x00006628u;
    c->r[6] = c->r[16] + 0u;
    { c->r[31] = 0x08904830u; c->r[7] = c->r[3] + 0u; func_08a1ad34(c, ram); }
    c->r[16] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[30] + 0x00000010u;
    { c->r[31] = 0x08904840u; c->r[4] = c->r[2] + 0u; func_089c6f64(c, ram); }
    mem_w16(ram, c->r[16] + 0x0000002cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x0000002cu);
    { int _c = (c->r[2] != 0u); if (_c) goto L_08904860; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = 0u + 0x00000200u;
    mem_w16(ram, c->r[3] + 0x0000002cu, c->r[2]);
L_08904860:
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x0890486cu; c->r[4] = c->r[4] + 0x00000af4u; func_0880d294(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = 0u + 0x00000002u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_0890488c; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = 0u + 0x00000004u;
    { mem_w8(ram, c->r[3] + 0x0000002eu, c->r[2]); goto L_08904894; }
L_0890488c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    mem_w8(ram, c->r[2] + 0x0000002eu, 0u);
L_08904894:
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x089048a0u; c->r[4] = c->r[4] + 0x00000af4u; func_0880d294(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = 0u + 0x00000002u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_08904930; }
    { c->r[31] = 0x089048b8u; func_089794c4(c, ram); }
    c->r[3] = mem_r8(ram, c->r[2] + 0x00000001u);
    c->r[2] = 0u + 0x00000001u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_08904930; }
    { c->r[31] = 0x089048d0u; func_0896db64(c, ram); }
    mem_w8(ram, c->r[30] + 0x00000110u, c->r[2]);
    mem_w32(ram, c->r[30] + 0x00000114u, 0u);
L_089048d8:
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[30] + 0x00000110u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000114u);
    c->r[2] = ((s32)c->r[3] < (s32)c->r[2]) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_089048f4; }
    { goto L_08904930; }
L_089048f4:
    { c->r[31] = 0x089048fcu; c->r[4] = mem_r32(ram, c->r[30] + 0x00000114u); func_0896dbc0(c, ram); }
    { c->r[31] = 0x08904904u; c->r[16] = c->r[2] + 0u; func_0896dc4c(c, ram); }
    { int _c = (c->r[16] != c->r[2]); if (_c) goto L_08904920; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000032u);
    c->r[2] = c->r[2] + 0x00000001u;
    mem_w8(ram, c->r[3] + 0x00000032u, c->r[2]);
L_08904920:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000114u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000114u, c->r[2]); goto L_089048d8; }
L_08904930:
    { c->r[31] = 0x08904938u; func_0891cfec(c, ram); }
    c->r[1] = 0x08aa0000u;
    mem_w8(ram, c->r[1] + 0xfffff564u, 0u);
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000128u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000124u);
    c->r[16] = mem_r32(ram, c->r[29] + 0x00000120u);
    { c->r[29] = c->r[29] + 0x00000130u; return; }
    return; /* fell out of func_089046f4 */
}

/* func_0890dc30  0x0890dc30..0x0890de5c  556 bytes, source=fde */
void func_0890dc30(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0890dc30u);
    c->r[29] = c->r[29] + 0xffffff50u;
    mem_w32(ram, c->r[29] + 0x000000a4u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x000000a0u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    c->r[3] = 0x08a90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0xffffbbd8u);
    c->r[2] = 0u + 0xffffff7fu;
    c->r[2] = c->r[3] & c->r[2];
    c->r[1] = 0x08a90000u;
    mem_w32(ram, c->r[1] + 0xffffbbd8u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[2] = c->r[2] & 0x0001u;
    c->r[2] = c->r[2] & 0x00ffu;
    { int _c = (c->r[2] == 0u); if (_c) goto L_0890dc80; }
    { goto L_0890de48; }
L_0890dc80:
    c->r[2] = 0x08a80000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00002ed8u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000009cu);
    { int _c = (c->r[2] != 0u); if (_c) goto L_0890dc9c; }
    { goto L_0890de48; }
L_0890dc9c:
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x0890dca8u; c->r[4] = c->r[4] + 0x00000af4u; func_0880810c(c, ram); }
    { int _c = (c->r[2] == 0u); if (_c) goto L_0890dcb8; }
    { goto L_0890de48; }
L_0890dcb8:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_0890dccc; }
    { goto L_0890de48; }
L_0890dccc:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = 0x08a90000u;
    c->r[3] = (u32)(s32)(s16)mem_r16(ram, c->r[3] + 0xffffba02u);
    c->f[0] = u2f(c->r[3]);
    c->f[1] = (f32)(s32)f2u(c->f[0]);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x000000b8u);
    alx_c_cond_s(c, 12, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_0890de48; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x0000008cu);
    c->r[2] = 0x20000000u;
    c->r[2] = c->r[3] & c->r[2];
    { int _c = (c->r[2] != 0u); if (_c) goto L_0890dd14; }
    { goto L_0890de48; }
L_0890dd14:
    c->r[2] = c->r[30] + 0x00000010u;
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000067c8u);
    c->r[1] = 0x08a40000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0x000067ccu);
    c->r[4] = c->r[2] + 0u;
    c->f[12] = u2f(0u);
    c->f[13] = u2f(0u);
    c->f[14] = c->f[0];
    { c->r[31] = 0x0890dd40u; c->f[15] = c->f[1]; func_0880d140(c, ram); }
    c->r[2] = c->r[30] + 0x00000020u;
    { c->r[31] = 0x0890dd4cu; c->r[4] = c->r[2] + 0u; func_08808260(c, ram); }
    c->r[2] = c->r[30] + 0x00000060u;
    { c->r[31] = 0x0890dd58u; c->r[4] = c->r[2] + 0u; func_08808260(c, ram); }
    c->r[2] = c->r[30] + 0x00000020u;
    c->r[1] = 0x08a90000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffffba4cu);
    c->f[0] = -c->f[0];
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x0890dd74u; c->f[12] = c->f[0]; func_0884c7c0(c, ram); }
    c->r[2] = c->r[30] + 0x00000060u;
    c->r[4] = c->r[2] + 0u;
    c->r[1] = 0x08a90000u;
    { c->r[31] = 0x0890dd88u; c->f[12] = mem_rf32(ram, c->r[1] + 0xffffba60u); func_0884c858(c, ram); }
    c->r[2] = c->r[30] + 0x00000020u;
    c->r[3] = c->r[30] + 0x00000020u;
    c->r[6] = c->r[30] + 0x00000060u;
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x0890dda0u; c->r[5] = c->r[3] + 0u; func_0884c6d4(c, ram); }
    { c->r[31] = 0x0890dda8u; func_08867ab8(c, ram); }
    c->r[6] = c->r[2] + 0u;
    c->r[2] = c->r[30] + 0x00000020u;
    c->r[3] = c->r[30] + 0x00000020u;
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x0890ddc0u; c->r[5] = c->r[3] + 0u; func_0884c6d4(c, ram); }
    c->r[2] = c->r[30] + 0x00000020u;
    c->r[3] = c->r[30] + 0x00000020u;
    c->r[4] = c->r[2] + 0u;
    c->r[5] = c->r[3] + 0u;
    c->r[6] = 0x08b90000u;
    { c->r[31] = 0x0890dddcu; c->r[6] = c->r[6] + 0x000054c0u; func_0884c6d4(c, ram); }
    c->r[2] = c->r[30] + 0x00000010u;
    c->r[3] = c->r[30] + 0x00000010u;
    c->r[6] = c->r[30] + 0x00000020u;
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x0890ddf4u; c->r[5] = c->r[3] + 0u; func_0884c26c(c, ram); }
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000018u);
    c->f[0] = u2f(0u);
    alx_c_cond_s(c, 14, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_0890de48; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = c->r[2] + 0x00000040u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    mem_w32(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    mem_w32(ram, c->r[3] + 0x00000004u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    mem_w32(ram, c->r[3] + 0x00000008u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    mem_w32(ram, c->r[3] + 0x0000000cu, c->r[2]);
    c->r[2] = 0x08a90000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0xffffbbd8u);
    c->r[2] = c->r[2] | 0x0080u;
    c->r[1] = 0x08a90000u;
    mem_w32(ram, c->r[1] + 0xffffbbd8u, c->r[2]);
L_0890de48:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x000000a4u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x000000a0u);
    { c->r[29] = c->r[29] + 0x000000b0u; return; }
    return; /* fell out of func_0890dc30 */
}

/* func_0891ae30  0x0891ae30..0x0891b0b8  648 bytes, source=fde */
void func_0891ae30(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0891ae30u);
    c->r[29] = c->r[29] + 0xffffffa0u;
    mem_w32(ram, c->r[29] + 0x00000058u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000054u, c->r[30]);
    mem_w32(ram, c->r[29] + 0x00000050u, c->r[16]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    { c->r[31] = 0x0891ae54u; c->r[16] = c->r[30] + 0x00000010u; func_08820f58(c, ram); }
    c->r[3] = c->r[2] + 0x00000020u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[2] + 0x00000020u;
    c->r[4] = c->r[16] + 0u;
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x0891ae70u; c->r[6] = c->r[3] + 0u; func_0884c07c(c, ram); }
    c->r[2] = c->r[30] + 0x00000010u;
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0x08b90000u;
    { c->r[31] = 0x0891ae84u; c->r[5] = c->r[5] + 0x000054c0u; func_08921f64(c, ram); }
    { int _c = (c->r[2] == 0u); if (_c) goto L_0891b0a0; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000008cu);
    c->r[2] = c->r[2] & 0x0800u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_0891aebc; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x0000002fu);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000004u) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_0891aebc; }
    { goto L_0891b0a0; }
L_0891aebc:
    c->r[2] = 0x7f400000u;
    c->r[2] = c->r[2] | 0x6000u;
    mem_w32(ram, c->r[30] + 0x00000020u, c->r[2]);
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x0891aed4u; c->r[4] = c->r[4] + 0x00000af4u; func_0880d380(c, ram); }
    { int _c = (c->r[2] != 0u); if (_c) goto L_0891aeec; }
    c->r[2] = 0x7f400000u;
    c->r[2] = c->r[2] | 0x6000u;
    { mem_w32(ram, c->r[30] + 0x00000020u, c->r[2]); goto L_0891af1c; }
L_0891aeec:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000008cu);
    c->r[2] = c->r[2] & 0x0002u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_0891af10; }
    c->r[2] = 0x7f400000u;
    c->r[2] = c->r[2] | 0x6000u;
    { mem_w32(ram, c->r[30] + 0x00000020u, c->r[2]); goto L_0891af1c; }
L_0891af10:
    c->r[2] = 0x7f7f0000u;
    c->r[2] = c->r[2] | 0x1000u;
    mem_w32(ram, c->r[30] + 0x00000020u, c->r[2]);
L_0891af1c:
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000010u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00006ae0u);
    c->f[0] = c->f[1] - c->f[0];
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    c->r[2] = f2u(c->f[0]);
    mem_w16(ram, c->r[30] + 0x00000030u, c->r[2]);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000014u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00006ae4u);
    c->f[0] = c->f[1] - c->f[0];
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    c->r[2] = f2u(c->f[0]);
    mem_w16(ram, c->r[30] + 0x00000032u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x000000a4u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_0891af8c; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = c->r[30] + 0x00000030u;
    c->r[4] = 0u + 0x0000003cu;
    c->r[5] = mem_r32(ram, c->r[2] + 0x000000a4u);
    c->r[6] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[7] = 0u + 0u;
    c->r[8] = 0u + 0x00000001u;
    c->r[9] = c->r[3] + 0u;
    { c->r[31] = 0x0891af8cu; c->r[10] = 0u + 0u; func_08903f2c(c, ram); }
L_0891af8c:
    { c->r[31] = 0x0891af94u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000020u); func_089035ac(c, ram); }
    c->r[4] = 0u + 0x00000014u;
    { c->r[31] = 0x0891afa0u; c->r[5] = 0u + 0x00000010u; func_0881a1d4(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000040u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000040u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000010u);
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    c->r[2] = f2u(c->f[0]);
    c->r[2] = c->r[2] + 0xffffffecu;
    mem_w16(ram, c->r[3] + 0x00000004u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000040u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000014u);
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    c->r[2] = f2u(c->f[0]);
    c->r[2] = c->r[2] + 0xffffffecu;
    mem_w16(ram, c->r[3] + 0x00000006u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000040u);
    c->r[2] = 0u + 0x000000b8u;
    mem_w16(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000040u);
    c->r[2] = 0u + 0x000000d8u;
    mem_w16(ram, c->r[3] + 0x00000002u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000040u);
    c->r[3] = c->r[2] + 0x0000000au;
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000010u);
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    c->r[2] = f2u(c->f[0]);
    c->r[2] = c->r[2] + 0x00000014u;
    mem_w16(ram, c->r[3] + 0x00000004u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000040u);
    c->r[3] = c->r[2] + 0x0000000au;
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000014u);
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    c->r[2] = f2u(c->f[0]);
    c->r[2] = c->r[2] + 0x00000014u;
    mem_w16(ram, c->r[3] + 0x00000006u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000040u);
    c->r[3] = c->r[2] + 0x0000000au;
    c->r[2] = 0u + 0x000000e0u;
    mem_w16(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000040u);
    c->r[3] = c->r[2] + 0x0000000au;
    c->r[2] = 0u + 0x00000100u;
    mem_w16(ram, c->r[3] + 0x00000002u, c->r[2]);
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
    c->r[5] = 0u + 0x00000006u;
    c->r[6] = 0x00800000u;
    c->r[6] = c->r[6] | 0x0102u;
    c->r[7] = 0u + 0x00000002u;
    c->r[8] = 0u + 0u;
    { c->r[31] = 0x0891b0a0u; c->r[9] = mem_r32(ram, c->r[30] + 0x00000040u); func_0892083c(c, ram); }
L_0891b0a0:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000058u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000054u);
    c->r[16] = mem_r32(ram, c->r[29] + 0x00000050u);
    { c->r[29] = c->r[29] + 0x00000060u; return; }
    return; /* fell out of func_0891ae30 */
}

/* func_08920a44  0x08920a44..0x08920a80  60 bytes, source=sweep */
void func_08920a44(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08920a44u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000004u);
    { c->r[31] = 0x08920a6cu; c->r[6] = 0u + 0x00000001u; func_08921078(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_08920a44 */
}

/* func_08921908  0x08921908..0x08921954  76 bytes, source=sweep */
void func_08921908(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08921908u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    vfpu_exec(c, ram, 0xd8400000u); /* lv.q */
    vfpu_exec(c, ram, 0xd8410010u); /* lv.q */
    vfpu_exec(c, ram, 0xd8420020u); /* lv.q */
    vfpu_exec(c, ram, 0xd8430030u); /* lv.q */
    vfpu_exec(c, ram, 0xf8600001u); /* sv.q */
    vfpu_exec(c, ram, 0xf8610011u); /* sv.q */
    vfpu_exec(c, ram, 0xf8620021u); /* sv.q */
    vfpu_exec(c, ram, 0xf8630031u); /* sv.q */
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_08921908 */
}

/* func_089242a8  0x089242a8..0x08924300  88 bytes, source=fde */
void func_089242a8(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089242a8u);
    c->r[29] = c->r[29] + 0xfffffff0u;
    mem_w32(ram, c->r[29] + 0x00000004u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000000u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    c->r[2] = 0x08aa0000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0xfffff9c8u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_089242ec; }
    c->r[4] = 0u + 0x00000062u;
    c->r[5] = 0u + 0u;
    c->r[6] = 0u + 0u;
    c->r[7] = 0u + 0u;
    c->r[8] = 0u + 0u;
    { c->r[31] = 0x089242e4u; c->r[9] = 0u + 0u; func_089c6bec(c, ram); }
    c->r[1] = 0x08aa0000u;
    mem_w32(ram, c->r[1] + 0xfffff9c8u, c->r[2]);
L_089242ec:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000004u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000000u);
    { c->r[29] = c->r[29] + 0x00000010u; return; }
    return; /* fell out of func_089242a8 */
}

/* func_08925ffc  0x08925ffc..0x08926040  68 bytes, source=sweep */
void func_08925ffc(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08925ffcu);
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
    { c->r[31] = 0x0892602cu; c->r[5] = c->r[2] + 0u; func_089258bc(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_08925ffc */
}

/* func_08928c10  0x08928c10..0x08928c60  80 bytes, source=fde */
void func_08928c10(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08928c10u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = 0u + 0u;
    { c->r[31] = 0x08928c34u; c->r[6] = 0u + 0x00000014u; func_08a19ec4(c, ram); }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = 0u + 0xffffffffu;
    mem_w32(ram, c->r[3] + 0x00000004u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = 0u + 0x00000001u;
    mem_w32(ram, c->r[3] + 0x00000008u, c->r[2]);
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_08928c10 */
}

/* func_0892fcac  0x0892fcac..0x0892fd88  220 bytes, source=fde */
void func_0892fcac(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0892fcacu);
    c->r[29] = c->r[29] + 0xffffffa0u;
    mem_w32(ram, c->r[29] + 0x00000054u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000050u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    c->r[3] = c->r[6] + 0u;
    c->r[4] = c->r[7] + 0u;
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[8]);
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[9]);
    c->r[2] = c->r[10] + 0u;
    mem_w16(ram, c->r[30] + 0x00000008u, c->r[3]);
    mem_w16(ram, c->r[30] + 0x0000000au, c->r[4]);
    mem_w8(ram, c->r[30] + 0x00000014u, c->r[2]);
    c->r[2] = c->r[30] + 0x00000020u;
    c->r[3] = (u32)(s32)(s16)mem_r16(ram, c->r[30] + 0x00000008u);
    c->r[7] = (u32)(s32)(s16)mem_r16(ram, c->r[30] + 0x0000000au);
    c->r[4] = c->r[2] + 0u;
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000004u);
    { c->r[31] = 0x0892fd00u; c->r[6] = c->r[3] + 0u; func_08932598(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    { int _c = (c->r[2] == 0u); if (_c) goto L_0892fd14; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    mem_w32(ram, c->r[30] + 0x00000024u, c->r[2]);
L_0892fd14:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_0892fd28; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    mem_w32(ram, c->r[30] + 0x00000028u, c->r[2]);
L_0892fd28:
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[30] + 0x00000014u);
    { int _c = ((s32)c->r[2] <= 0); if (_c) goto L_0892fd3c; }
    c->r[2] = mem_r8(ram, c->r[30] + 0x00000014u);
    mem_w8(ram, c->r[30] + 0x00000038u, c->r[2]);
L_0892fd3c:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = 0u + 0x0000000eu;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_0892fd54; }
    c->r[2] = 0u + 0x00000008u;
    mem_w8(ram, c->r[30] + 0x0000003cu, c->r[2]);
L_0892fd54:
    c->r[2] = c->r[30] + 0x00000020u;
    c->r[4] = 0u + 0x00000064u;
    c->r[5] = 0u + 0u;
    c->r[6] = 0u + 0u;
    c->r[7] = 0u + 0u;
    c->r[8] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x0892fd74u; c->r[9] = c->r[2] + 0u; func_089c6bec(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000054u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000050u);
    { c->r[29] = c->r[29] + 0x00000060u; return; }
    return; /* fell out of func_0892fcac */
}

/* func_08932908  0x08932908..0x08932964  92 bytes, source=sweep */
void func_08932908(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08932908u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x000000e0u;
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[2]);
    c->r[2] = 0xc8120000u;
    c->r[2] = c->r[2] | 0x0800u;
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000010u);
    c->r[2] = c->r[2] & 0x0004u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_08932950; }
    c->r[2] = 0xff0c0000u;
    c->r[2] = c->r[2] | 0x094cu;
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]);
L_08932950:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_08932908 */
}

/* func_089344c4  0x089344c4..0x08934550  140 bytes, source=sweep */
void func_089344c4(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089344c4u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000004u, 0u);
    mem_w32(ram, c->r[30] + 0x00000000u, 0u);
L_089344d8:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000010u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_089344f0; }
    { goto L_0893453c; }
L_089344f0:
    c->r[4] = 0x08aa0000u;
    c->r[4] = mem_r32(ram, c->r[4] + 0xfffffa94u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = c->r[2] << 4;
    c->r[2] = mem_r32(ram, c->r[4] + 0x00000004u);
    c->r[2] = c->r[2] + c->r[3];
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000000u);
    c->r[2] = 0u + 0xffffffffu;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_0893452c; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[2] + 0x00000001u;
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[2]);
L_0893452c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000000u, c->r[2]); goto L_089344d8; }
L_0893453c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_089344c4 */
}

/* func_089385f4  0x089385f4..0x08938f94  2464 bytes, source=fde */
void func_089385f4(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089385f4u);
    c->r[29] = c->r[29] + 0xffffff80u;
    mem_w32(ram, c->r[29] + 0x0000007cu, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000078u, c->r[30]);
    mem_w32(ram, c->r[29] + 0x00000074u, c->r[17]);
    mem_w32(ram, c->r[29] + 0x00000070u, c->r[16]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x0000000cu);
    c->f[0] = (f32)(s32)f2u(c->f[0]);
    mem_wf32(ram, c->r[30] + 0x00000010u, c->f[0]);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00007438u);
    mem_wf32(ram, c->r[30] + 0x00000014u, c->f[0]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = 0u + 0x00000001u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_089386bc; }
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000010u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x0000743cu);
    c->f[0] = c->f[1] - c->f[0];
    mem_wf32(ram, c->r[30] + 0x00000010u, c->f[0]);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000010u);
    c->f[0] = u2f(0u);
    alx_c_cond_s(c, 12, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_08938674; }
    { goto L_08938678; }
L_08938674:
    mem_w32(ram, c->r[30] + 0x00000010u, 0u);
L_08938678:
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000010u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00007440u);
    c->f[0] = c->f[1] / c->f[0];
    mem_wf32(ram, c->r[30] + 0x00000014u, c->f[0]);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000014u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00007438u);
    alx_c_cond_s(c, 12, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_089386b0; }
    { goto L_089386bc; }
L_089386b0:
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00007438u);
    mem_wf32(ram, c->r[30] + 0x00000014u, c->f[0]);
L_089386bc:
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
    { c->r[31] = 0x08938708u; c->r[5] = c->r[5] | 0x0102u; func_0893bf80(c, ram); }
    c->r[4] = 0x08a70000u;
    c->r[4] = c->r[4] + 0xffffb640u;
    c->r[5] = 0u + 0x00000002u;
    { c->r[31] = 0x0893871cu; c->r[6] = 0u + 0x00000006u; func_089df7a0(c, ram); }
    c->r[4] = 0x08a40000u;
    { c->r[31] = 0x08938728u; c->r[4] = c->r[4] + 0x00007428u; func_089c6f64(c, ram); }
    c->r[4] = 0x08a70000u;
    c->r[4] = c->r[4] + 0xffffb640u;
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x0893873cu; c->r[6] = 0u + 0u; func_089e0bd8(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000008u, 0u);
L_08938740:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = ((s32)c->r[2] < (s32)0x0000000fu) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_08938758; }
    { goto L_08938f78; }
L_08938758:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000006u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_08938790; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 1;
    c->r[2] = 0x08a60000u;
    c->r[2] = c->r[2] + 0xffff804cu;
    c->r[2] = c->r[2] + c->r[3];
    { mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]); goto L_089387ec; }
L_08938790:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = 0u + 0x00000002u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_089387c8; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 1;
    c->r[2] = 0x08a60000u;
    c->r[2] = c->r[2] + 0xffff8050u;
    c->r[2] = c->r[3] + c->r[2];
    { mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]); goto L_089387ec; }
L_089387c8:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 1;
    c->r[2] = 0x08a60000u;
    c->r[2] = c->r[2] + 0xffff804cu;
    c->r[2] = c->r[2] + c->r[3];
    mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]);
L_089387ec:
    c->r[16] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000008u);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000008u);
    { c->r[31] = 0x08938804u; c->r[5] = c->r[2] + 0u; func_089690ec(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[16] + 0x00000008u);
    c->r[2] = ((s32)c->r[2] < (s32)c->r[3]) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_08938820; }
    { goto L_08938f68; }
L_08938820:
    mem_w32(ram, c->r[30] + 0x0000000cu, 0u);
L_08938824:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000004u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_0893883c; }
    { goto L_08938f68; }
L_0893883c:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000008u);
    { c->r[31] = 0x08938848u; c->r[5] = mem_r32(ram, c->r[30] + 0x0000000cu); func_08969658(c, ram); }
    mem_w8(ram, c->r[30] + 0x00000020u, c->r[2]);
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[30] + 0x00000020u);
    c->r[2] = 0u + 0xffffffffu;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_08938864; }
    { goto L_08938f58; }
L_08938864:
    c->r[16] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[30] + 0x00000020u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000008u);
    c->r[4] = c->r[3] + 0u;
    { c->r[31] = 0x08938880u; c->r[5] = c->r[2] + 0u; func_089690ec(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[16] + 0x00000008u);
    c->r[2] = ((s32)c->r[2] < (s32)c->r[3]) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_0893889c; }
    { goto L_08938f58; }
L_0893889c:
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[30] + 0x00000020u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = ((s32)c->r[2] < (s32)c->r[3]) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_089388b8; }
    { goto L_08938f58; }
L_089388b8:
    c->r[2] = 0xff7f0000u;
    c->r[2] = c->r[2] | 0x7f7fu;
    mem_w32(ram, c->r[30] + 0x00000024u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000006u);
    c->r[2] = 0u + 0x00000001u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_089388e8; }
    c->r[2] = 0x99690000u;
    c->r[2] = c->r[2] | 0x6969u;
    { mem_w32(ram, c->r[30] + 0x00000024u, c->r[2]); goto L_08938930; }
L_089388e8:
    c->r[16] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[30] + 0x00000020u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000008u);
    c->r[4] = c->r[3] + 0u;
    { c->r[31] = 0x08938904u; c->r[5] = c->r[2] + 0u; func_089690ec(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[16] + 0x00000008u);
    { int _c = (c->r[2] != c->r[3]); if (_c) goto L_08938924; }
    c->r[2] = 0x99690000u;
    c->r[2] = c->r[2] | 0x6969u;
    { mem_w32(ram, c->r[30] + 0x00000024u, c->r[2]); goto L_08938930; }
L_08938924:
    c->r[2] = 0x59690000u;
    c->r[2] = c->r[2] | 0x6969u;
    mem_w32(ram, c->r[30] + 0x00000024u, c->r[2]);
L_08938930:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000024u);
    { c->r[31] = 0x08938940u; c->f[12] = mem_rf32(ram, c->r[2] + 0x00000018u); func_08903b2c(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000024u, c->r[2]);
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
    { c->r[31] = 0x0893898cu; c->r[5] = mem_r32(ram, c->r[30] + 0x00000024u); func_0893c01c(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000006u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_089389c4; }
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[30] + 0x00000020u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 1;
    c->r[2] = 0x08a60000u;
    c->r[2] = c->r[2] + 0xffff804cu;
    c->r[2] = c->r[2] + c->r[3];
    { mem_w32(ram, c->r[30] + 0x0000001cu, c->r[2]); goto L_08938a20; }
L_089389c4:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = 0u + 0x00000002u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_089389fc; }
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[30] + 0x00000020u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 1;
    c->r[2] = 0x08a60000u;
    c->r[2] = c->r[2] + 0xffff8050u;
    c->r[2] = c->r[3] + c->r[2];
    { mem_w32(ram, c->r[30] + 0x0000001cu, c->r[2]); goto L_08938a20; }
L_089389fc:
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[30] + 0x00000020u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 1;
    c->r[2] = 0x08a60000u;
    c->r[2] = c->r[2] + 0xffff804cu;
    c->r[2] = c->r[2] + c->r[3];
    mem_w32(ram, c->r[30] + 0x0000001cu, c->r[2]);
L_08938a20:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x00000000u);
    c->f[0] = u2f(c->r[2]);
    c->f[1] = (f32)(s32)f2u(c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000014u);
    c->f[0] = c->f[1] * c->f[0];
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    c->r[3] = f2u(c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r16(ram, c->r[2] + 0x00000010u);
    c->r[2] = c->r[3] + c->r[2];
    mem_w16(ram, c->r[30] + 0x00000028u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x00000002u);
    c->f[0] = u2f(c->r[2]);
    c->f[1] = (f32)(s32)f2u(c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000014u);
    c->f[0] = c->f[1] * c->f[0];
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    c->r[3] = f2u(c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r16(ram, c->r[2] + 0x00000012u);
    c->r[2] = c->r[3] + c->r[2];
    mem_w16(ram, c->r[30] + 0x0000002au, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x00000000u);
    c->f[0] = u2f(c->r[2]);
    c->f[1] = (f32)(s32)f2u(c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000014u);
    c->f[0] = c->f[1] * c->f[0];
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    c->r[3] = f2u(c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r16(ram, c->r[2] + 0x00000010u);
    c->r[2] = c->r[3] + c->r[2];
    mem_w16(ram, c->r[30] + 0x0000002cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x00000002u);
    c->f[0] = u2f(c->r[2]);
    c->f[1] = (f32)(s32)f2u(c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000014u);
    c->f[0] = c->f[1] * c->f[0];
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    c->r[3] = f2u(c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r16(ram, c->r[2] + 0x00000012u);
    c->r[2] = c->r[3] + c->r[2];
    mem_w16(ram, c->r[30] + 0x0000002eu, c->r[2]);
    c->r[3] = mem_r16(ram, c->r[30] + 0x0000002cu);
    c->r[2] = mem_r16(ram, c->r[30] + 0x00000028u);
    c->r[2] = c->r[3] - c->r[2];
    mem_w16(ram, c->r[30] + 0x00000034u, c->r[2]);
    c->r[3] = mem_r16(ram, c->r[30] + 0x0000002eu);
    c->r[2] = mem_r16(ram, c->r[30] + 0x0000002au);
    c->r[2] = c->r[3] - c->r[2];
    mem_w16(ram, c->r[30] + 0x00000036u, c->r[2]);
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[30] + 0x00000036u);
    c->f[0] = u2f(c->r[2]);
    c->f[1] = (f32)(s32)f2u(c->f[0]);
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[30] + 0x00000034u);
    c->f[0] = u2f(c->r[2]);
    c->f[0] = (f32)(s32)f2u(c->f[0]);
    c->f[12] = c->f[1];
    { c->r[31] = 0x08938b34u; c->f[13] = c->f[0]; func_08a0fc44(c, ram); }
    mem_wf32(ram, c->r[30] + 0x00000038u, c->f[0]);
    c->r[3] = (u32)(s32)(s16)mem_r16(ram, c->r[30] + 0x00000034u);
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[30] + 0x00000034u);
    alx_mult(c, c->r[3], c->r[2]);
    c->r[4] = c->lo;
    c->r[3] = (u32)(s32)(s16)mem_r16(ram, c->r[30] + 0x00000036u);
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[30] + 0x00000036u);
    alx_mult(c, c->r[3], c->r[2]);
    c->r[2] = c->lo;
    c->r[2] = c->r[4] + c->r[2];
    { c->r[31] = 0x08938b64u; c->r[4] = c->r[2] + 0u; func_08a14434(c, ram); }
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x08938b70u; c->r[5] = c->r[3] + 0u; func_08a0f8a8(c, ram); }
    c->r[16] = c->r[2] + 0u;
    c->r[17] = c->r[3] + 0u;
    { c->r[31] = 0x08938b80u; c->f[12] = mem_rf32(ram, c->r[30] + 0x00000014u); func_08a136f8(c, ram); }
    c->r[4] = c->r[16] + 0u;
    c->r[5] = c->r[17] + 0u;
    c->r[6] = c->r[2] + 0u;
    { c->r[31] = 0x08938b94u; c->r[7] = c->r[3] + 0u; func_08a13b68(c, ram); }
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x08938ba0u; c->r[5] = c->r[3] + 0u; func_08a14588(c, ram); }
    mem_wf32(ram, c->r[30] + 0x0000003cu, c->f[0]);
    { c->r[31] = 0x08938bacu; c->f[12] = mem_rf32(ram, c->r[30] + 0x00000038u); func_08a0f760(c, ram); }
    mem_wf32(ram, c->r[30] + 0x00000040u, c->f[0]);
    { c->r[31] = 0x08938bb8u; c->f[12] = mem_rf32(ram, c->r[30] + 0x00000038u); func_08a0f5bc(c, ram); }
    mem_wf32(ram, c->r[30] + 0x00000044u, c->f[0]);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000040u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00007444u);
    c->f[2] = c->f[1] * c->f[0];
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000044u);
    c->f[0] = u2f(0u);
    c->f[0] = c->f[1] * c->f[0];
    c->f[0] = c->f[2] + c->f[0];
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    mem_wf32(ram, c->r[30] + 0x00000048u, c->f[0]);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000044u);
    c->f[2] = c->f[0] + c->f[0];
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000040u);
    c->f[0] = u2f(0u);
    c->f[0] = c->f[1] * c->f[0];
    c->f[0] = c->f[2] + c->f[0];
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    mem_wf32(ram, c->r[30] + 0x0000004cu, c->f[0]);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000040u);
    c->f[2] = c->f[0] + c->f[0];
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000044u);
    c->f[0] = u2f(0u);
    c->f[0] = c->f[1] * c->f[0];
    c->f[0] = c->f[2] + c->f[0];
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    mem_wf32(ram, c->r[30] + 0x00000050u, c->f[0]);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000044u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00007444u);
    c->f[2] = c->f[1] * c->f[0];
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000040u);
    c->f[0] = u2f(0u);
    c->f[0] = c->f[1] * c->f[0];
    c->f[0] = c->f[2] + c->f[0];
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    mem_wf32(ram, c->r[30] + 0x00000054u, c->f[0]);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000040u);
    c->f[2] = c->f[0] + c->f[0];
    c->f[1] = mem_rf32(ram, c->r[30] + 0x0000003cu);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000044u);
    c->f[0] = c->f[1] * c->f[0];
    c->f[0] = c->f[2] + c->f[0];
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    mem_wf32(ram, c->r[30] + 0x00000058u, c->f[0]);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000044u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00007444u);
    c->f[2] = c->f[1] * c->f[0];
    c->f[1] = mem_rf32(ram, c->r[30] + 0x0000003cu);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000040u);
    c->f[0] = c->f[1] * c->f[0];
    c->f[0] = c->f[2] + c->f[0];
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    mem_wf32(ram, c->r[30] + 0x0000005cu, c->f[0]);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000040u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00007444u);
    c->f[2] = c->f[1] * c->f[0];
    c->f[1] = mem_rf32(ram, c->r[30] + 0x0000003cu);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000044u);
    c->f[0] = c->f[1] * c->f[0];
    c->f[0] = c->f[2] + c->f[0];
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    mem_wf32(ram, c->r[30] + 0x00000060u, c->f[0]);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000044u);
    c->f[2] = c->f[0] + c->f[0];
    c->f[1] = mem_rf32(ram, c->r[30] + 0x0000003cu);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000040u);
    c->f[0] = c->f[1] * c->f[0];
    c->f[0] = c->f[2] + c->f[0];
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    mem_wf32(ram, c->r[30] + 0x00000064u, c->f[0]);
    c->r[4] = 0x08aa0000u;
    c->r[4] = c->r[4] + 0xfffffa98u;
    c->r[5] = 0u + 0x0000001au;
    { c->r[31] = 0x08938cf0u; c->r[6] = 0u + 0u; func_0880ef80(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000030u, c->r[2]);
    c->r[4] = 0u + 0x00000028u;
    { c->r[31] = 0x08938d00u; c->r[5] = 0u + 0x00000010u; func_0881a1d4(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000068u, c->r[2]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000068u);
    c->r[3] = mem_r16(ram, c->r[30] + 0x00000028u);
    c->r[2] = mem_r16(ram, c->r[30] + 0x00000048u);
    c->r[2] = c->r[3] + c->r[2];
    mem_w16(ram, c->r[4] + 0x00000004u, c->r[2]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000068u);
    c->r[3] = mem_r16(ram, c->r[30] + 0x0000002au);
    c->r[2] = mem_r16(ram, c->r[30] + 0x0000004cu);
    c->r[2] = c->r[3] + c->r[2];
    mem_w16(ram, c->r[4] + 0x00000006u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000068u);
    c->r[4] = c->r[2] + 0x0000000au;
    c->r[3] = mem_r16(ram, c->r[30] + 0x00000028u);
    c->r[2] = mem_r16(ram, c->r[30] + 0x00000050u);
    c->r[2] = c->r[3] + c->r[2];
    mem_w16(ram, c->r[4] + 0x00000004u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000068u);
    c->r[4] = c->r[2] + 0x0000000au;
    c->r[3] = mem_r16(ram, c->r[30] + 0x0000002au);
    c->r[2] = mem_r16(ram, c->r[30] + 0x00000054u);
    c->r[2] = c->r[3] + c->r[2];
    mem_w16(ram, c->r[4] + 0x00000006u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000068u);
    c->r[4] = c->r[2] + 0x00000014u;
    c->r[3] = mem_r16(ram, c->r[30] + 0x00000028u);
    c->r[2] = mem_r16(ram, c->r[30] + 0x00000058u);
    c->r[2] = c->r[3] + c->r[2];
    mem_w16(ram, c->r[4] + 0x00000004u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000068u);
    c->r[4] = c->r[2] + 0x00000014u;
    c->r[3] = mem_r16(ram, c->r[30] + 0x0000002au);
    c->r[2] = mem_r16(ram, c->r[30] + 0x0000005cu);
    c->r[2] = c->r[3] + c->r[2];
    mem_w16(ram, c->r[4] + 0x00000006u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000068u);
    c->r[4] = c->r[2] + 0x0000001eu;
    c->r[3] = mem_r16(ram, c->r[30] + 0x00000028u);
    c->r[2] = mem_r16(ram, c->r[30] + 0x00000060u);
    c->r[2] = c->r[3] + c->r[2];
    mem_w16(ram, c->r[4] + 0x00000004u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000068u);
    c->r[4] = c->r[2] + 0x0000001eu;
    c->r[3] = mem_r16(ram, c->r[30] + 0x0000002au);
    c->r[2] = mem_r16(ram, c->r[30] + 0x00000064u);
    c->r[2] = c->r[3] + c->r[2];
    mem_w16(ram, c->r[4] + 0x00000006u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000068u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000030u);
    c->r[2] = mem_r16(ram, c->r[2] + 0x00000008u);
    mem_w16(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000068u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000030u);
    c->r[2] = mem_r16(ram, c->r[2] + 0x0000000au);
    mem_w16(ram, c->r[3] + 0x00000002u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000068u);
    c->r[3] = c->r[2] + 0x0000000au;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000030u);
    c->r[2] = mem_r16(ram, c->r[2] + 0x00000018u);
    mem_w16(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000068u);
    c->r[3] = c->r[2] + 0x0000000au;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000030u);
    c->r[2] = mem_r16(ram, c->r[2] + 0x0000001au);
    mem_w16(ram, c->r[3] + 0x00000002u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000068u);
    c->r[3] = c->r[2] + 0x00000014u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000030u);
    c->r[2] = mem_r16(ram, c->r[2] + 0x00000028u);
    mem_w16(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000068u);
    c->r[3] = c->r[2] + 0x00000014u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000030u);
    c->r[2] = mem_r16(ram, c->r[2] + 0x0000002au);
    mem_w16(ram, c->r[3] + 0x00000002u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000068u);
    c->r[3] = c->r[2] + 0x0000001eu;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000030u);
    c->r[2] = mem_r16(ram, c->r[2] + 0x00000038u);
    mem_w16(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000068u);
    c->r[3] = c->r[2] + 0x0000001eu;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000030u);
    c->r[2] = mem_r16(ram, c->r[2] + 0x0000003au);
    mem_w16(ram, c->r[3] + 0x00000002u, c->r[2]);
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
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000068u);
    c->r[2] = c->r[2] >> 24;
    c->r[2] = c->r[2] & 0x000fu;
    c->r[3] = c->r[2] << 16;
    c->r[2] = 0x10000000u;
    c->r[2] = c->r[3] | c->r[2];
    { c->r[31] = 0x08938eb0u; c->r[5] = c->r[2] + 0u; func_0893bf80(c, ram); }
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
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000068u);
    c->r[2] = 0x00ff0000u;
    c->r[2] = c->r[2] | 0xffffu;
    c->r[3] = c->r[3] & c->r[2];
    c->r[2] = 0x01000000u;
    c->r[2] = c->r[3] | c->r[2];
    { c->r[31] = 0x08938f0cu; c->r[5] = c->r[2] + 0u; func_0893bf80(c, ram); }
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
    { c->r[31] = 0x08938f58u; c->r[5] = c->r[5] | 0x0004u; func_0893bf80(c, ram); }
L_08938f58:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]); goto L_08938824; }
L_08938f68:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]); goto L_08938740; }
L_08938f78:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x0000007cu);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000078u);
    c->r[17] = mem_r32(ram, c->r[29] + 0x00000074u);
    c->r[16] = mem_r32(ram, c->r[29] + 0x00000070u);
    { c->r[29] = c->r[29] + 0x00000080u; return; }
    return; /* fell out of func_089385f4 */
}

/* func_0893c730  0x0893c730..0x0893c774  68 bytes, source=sweep */
void func_0893c730(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0893c730u);
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
    { c->r[31] = 0x0893c760u; c->r[5] = c->r[2] + 0u; func_0893bf80(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_0893c730 */
}

/* func_0893db54  0x0893db54..0x0893db98  68 bytes, source=sweep */
void func_0893db54(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0893db54u);
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
    { c->r[31] = 0x0893db84u; c->r[5] = c->r[2] + 0u; func_0893d560(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_0893db54 */
}

/* func_0893fdf0  0x0893fdf0..0x0893fec0  208 bytes, source=sweep */
void func_0893fdf0(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0893fdf0u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x00000008u);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[8] = 0x3a000000u;
    mem_w32(ram, c->r[3] + 0x00000000u, c->r[8]);
    c->r[8] = 0x3b000000u;
    c->r[9] = 0x3b000000u;
    c->r[10] = 0x3b000000u;
    c->r[8] = mem_lwr(ram, c->r[4] + 0x00000001u, c->r[8]);
    c->r[9] = mem_lwr(ram, c->r[4] + 0x00000005u, c->r[9]);
    c->r[10] = mem_lwr(ram, c->r[4] + 0x00000009u, c->r[10]);
    mem_w32(ram, c->r[3] + 0x00000004u, c->r[8]);
    mem_w32(ram, c->r[3] + 0x00000008u, c->r[9]);
    mem_w32(ram, c->r[3] + 0x0000000cu, c->r[10]);
    c->r[8] = 0x3b000000u;
    c->r[9] = 0x3b000000u;
    c->r[10] = 0x3b000000u;
    c->r[8] = mem_lwr(ram, c->r[4] + 0x00000011u, c->r[8]);
    c->r[9] = mem_lwr(ram, c->r[4] + 0x00000015u, c->r[9]);
    c->r[10] = mem_lwr(ram, c->r[4] + 0x00000019u, c->r[10]);
    mem_w32(ram, c->r[3] + 0x00000010u, c->r[8]);
    mem_w32(ram, c->r[3] + 0x00000014u, c->r[9]);
    mem_w32(ram, c->r[3] + 0x00000018u, c->r[10]);
    c->r[8] = 0x3b000000u;
    c->r[9] = 0x3b000000u;
    c->r[10] = 0x3b000000u;
    c->r[8] = mem_lwr(ram, c->r[4] + 0x00000021u, c->r[8]);
    c->r[9] = mem_lwr(ram, c->r[4] + 0x00000025u, c->r[9]);
    c->r[10] = mem_lwr(ram, c->r[4] + 0x00000029u, c->r[10]);
    mem_w32(ram, c->r[3] + 0x0000001cu, c->r[8]);
    mem_w32(ram, c->r[3] + 0x00000020u, c->r[9]);
    mem_w32(ram, c->r[3] + 0x00000024u, c->r[10]);
    c->r[8] = 0x3b000000u;
    c->r[9] = 0x3b000000u;
    c->r[10] = 0x3b000000u;
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
    return; /* fell out of func_0893fdf0 */
}

/* func_089448a0  0x089448a0..0x08945084  2020 bytes, source=sweep */
void func_089448a0(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089448a0u);
    c->r[29] = c->r[29] + 0xffffff60u;
    mem_w32(ram, c->r[29] + 0x00000094u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000090u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[6]);
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[7]);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000004u);
    c->f[1] = (f32)(s32)f2u(c->f[0]);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000077c8u);
    c->f[0] = c->f[0] / c->f[1];
    mem_wf32(ram, c->r[30] + 0x00000010u, c->f[0]);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000004u);
    c->f[1] = (f32)(s32)f2u(c->f[0]);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000077ccu);
    c->f[0] = c->f[0] / c->f[1];
    mem_wf32(ram, c->r[30] + 0x00000014u, c->f[0]);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000004u);
    c->f[1] = (f32)(s32)f2u(c->f[0]);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000077d0u);
    c->f[0] = c->f[0] / c->f[1];
    mem_wf32(ram, c->r[30] + 0x00000018u, c->f[0]);
    mem_w32(ram, c->r[30] + 0x0000001cu, 0u);
L_0894490c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = ((s32)c->r[3] < (s32)c->r[2]) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_08944928; }
    { goto L_08945070; }
L_08944928:
    c->f[0] = mem_rf32(ram, c->r[30] + 0x0000001cu);
    c->f[1] = (f32)(s32)f2u(c->f[0]);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000004u);
    c->f[0] = (f32)(s32)f2u(c->f[0]);
    c->f[0] = c->f[1] / c->f[0];
    mem_wf32(ram, c->r[30] + 0x00000020u, c->f[0]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 2;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = c->r[3] + c->r[2];
    mem_w32(ram, c->r[30] + 0x00000030u, c->r[3]);
    c->r[1] = 0x08a40000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0x000077c8u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000020u);
    c->f[1] = c->f[1] - c->f[0];
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000077d4u);
    c->f[1] = c->f[1] * c->f[0];
    mem_wf32(ram, c->r[30] + 0x00000034u, c->f[1]);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000077d8u);
    mem_wf32(ram, c->r[30] + 0x0000003cu, c->f[0]);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000034u);
    c->f[2] = mem_rf32(ram, c->r[30] + 0x0000003cu);
    alx_c_cond_s(c, 14, c->f[2], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_089449b4; }
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000034u);
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    { mem_wf32(ram, c->r[30] + 0x00000038u, c->f[0]); goto L_089449d8; }
L_089449b4:
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000034u);
    c->f[2] = mem_rf32(ram, c->r[30] + 0x0000003cu);
    c->f[0] = c->f[1] - c->f[2];
    c->r[2] = 0x80000000u;
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    mem_wf32(ram, c->r[30] + 0x00000038u, c->f[0]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000038u);
    c->r[3] = c->r[3] | c->r[2];
    mem_w32(ram, c->r[30] + 0x00000038u, c->r[3]);
L_089449d8:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000038u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000030u);
    mem_w8(ram, c->r[2] + 0x00000000u, c->r[3]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 2;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = c->r[2] + 0x00000014u;
    mem_w32(ram, c->r[30] + 0x00000040u, c->r[2]);
    c->r[1] = 0x08a40000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0x000077c8u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000020u);
    c->f[1] = c->f[1] - c->f[0];
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000077d4u);
    c->f[1] = c->f[1] * c->f[0];
    mem_wf32(ram, c->r[30] + 0x00000044u, c->f[1]);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000077d8u);
    mem_wf32(ram, c->r[30] + 0x0000004cu, c->f[0]);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000044u);
    c->f[2] = mem_rf32(ram, c->r[30] + 0x0000004cu);
    alx_c_cond_s(c, 14, c->f[2], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_08944a5c; }
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000044u);
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    { mem_wf32(ram, c->r[30] + 0x00000048u, c->f[0]); goto L_08944a80; }
L_08944a5c:
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000044u);
    c->f[2] = mem_rf32(ram, c->r[30] + 0x0000004cu);
    c->f[0] = c->f[1] - c->f[2];
    c->r[2] = 0x80000000u;
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    mem_wf32(ram, c->r[30] + 0x00000048u, c->f[0]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000048u);
    c->r[3] = c->r[3] | c->r[2];
    mem_w32(ram, c->r[30] + 0x00000048u, c->r[3]);
L_08944a80:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000048u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000040u);
    mem_w8(ram, c->r[2] + 0x00000000u, c->r[3]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 2;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = c->r[3] + c->r[2];
    mem_w32(ram, c->r[30] + 0x00000050u, c->r[3]);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000020u);
    c->f[0] = u2f(0u);
    c->f[1] = c->f[1] + c->f[0];
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000077d4u);
    c->f[1] = c->f[1] * c->f[0];
    mem_wf32(ram, c->r[30] + 0x00000054u, c->f[1]);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000077d8u);
    mem_wf32(ram, c->r[30] + 0x0000005cu, c->f[0]);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000054u);
    c->f[2] = mem_rf32(ram, c->r[30] + 0x0000005cu);
    alx_c_cond_s(c, 14, c->f[2], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_08944afc; }
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000054u);
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    { mem_wf32(ram, c->r[30] + 0x00000058u, c->f[0]); goto L_08944b20; }
L_08944afc:
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000054u);
    c->f[2] = mem_rf32(ram, c->r[30] + 0x0000005cu);
    c->f[0] = c->f[1] - c->f[2];
    c->r[2] = 0x80000000u;
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    mem_wf32(ram, c->r[30] + 0x00000058u, c->f[0]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000058u);
    c->r[3] = c->r[3] | c->r[2];
    mem_w32(ram, c->r[30] + 0x00000058u, c->r[3]);
L_08944b20:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000058u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000050u);
    mem_w8(ram, c->r[2] + 0x00000001u, c->r[3]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 2;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = c->r[2] + 0x00000014u;
    mem_w32(ram, c->r[30] + 0x00000060u, c->r[2]);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000020u);
    c->f[0] = u2f(0u);
    c->f[1] = c->f[1] + c->f[0];
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000077d4u);
    c->f[1] = c->f[1] * c->f[0];
    mem_wf32(ram, c->r[30] + 0x00000064u, c->f[1]);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000077d8u);
    mem_wf32(ram, c->r[30] + 0x0000006cu, c->f[0]);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000064u);
    c->f[2] = mem_rf32(ram, c->r[30] + 0x0000006cu);
    alx_c_cond_s(c, 14, c->f[2], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_08944ba0; }
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000064u);
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    { mem_wf32(ram, c->r[30] + 0x00000068u, c->f[0]); goto L_08944bc4; }
L_08944ba0:
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000064u);
    c->f[2] = mem_rf32(ram, c->r[30] + 0x0000006cu);
    c->f[0] = c->f[1] - c->f[2];
    c->r[2] = 0x80000000u;
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    mem_wf32(ram, c->r[30] + 0x00000068u, c->f[0]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000068u);
    c->r[3] = c->r[3] | c->r[2];
    mem_w32(ram, c->r[30] + 0x00000068u, c->r[3]);
L_08944bc4:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000068u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000060u);
    mem_w8(ram, c->r[2] + 0x00000001u, c->r[3]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 2;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = c->r[3] + c->r[2];
    mem_w32(ram, c->r[30] + 0x00000070u, c->r[3]);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x0000001cu);
    c->f[1] = (f32)(s32)f2u(c->f[0]);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000010u);
    c->f[1] = c->f[1] * c->f[0];
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000077d4u);
    c->f[1] = c->f[1] * c->f[0];
    mem_wf32(ram, c->r[30] + 0x00000074u, c->f[1]);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000077d8u);
    mem_wf32(ram, c->r[30] + 0x0000007cu, c->f[0]);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000074u);
    c->f[2] = mem_rf32(ram, c->r[30] + 0x0000007cu);
    alx_c_cond_s(c, 14, c->f[2], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_08944c44; }
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000074u);
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    { mem_wf32(ram, c->r[30] + 0x00000078u, c->f[0]); goto L_08944c68; }
L_08944c44:
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000074u);
    c->f[2] = mem_rf32(ram, c->r[30] + 0x0000007cu);
    c->f[0] = c->f[1] - c->f[2];
    c->r[2] = 0x80000000u;
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    mem_wf32(ram, c->r[30] + 0x00000078u, c->f[0]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000078u);
    c->r[3] = c->r[3] | c->r[2];
    mem_w32(ram, c->r[30] + 0x00000078u, c->r[3]);
L_08944c68:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000078u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000070u);
    mem_w8(ram, c->r[2] + 0x00000002u, c->r[3]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 2;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = c->r[2] + 0x00000014u;
    mem_w32(ram, c->r[30] + 0x00000080u, c->r[2]);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x0000001cu);
    c->f[1] = (f32)(s32)f2u(c->f[0]);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000010u);
    c->f[1] = c->f[1] * c->f[0];
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000077d4u);
    c->f[1] = c->f[1] * c->f[0];
    mem_wf32(ram, c->r[30] + 0x00000084u, c->f[1]);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000077d8u);
    mem_wf32(ram, c->r[30] + 0x0000008cu, c->f[0]);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000084u);
    c->f[2] = mem_rf32(ram, c->r[30] + 0x0000008cu);
    alx_c_cond_s(c, 14, c->f[2], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_08944cec; }
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000084u);
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    { mem_wf32(ram, c->r[30] + 0x00000088u, c->f[0]); goto L_08944d10; }
L_08944cec:
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000084u);
    c->f[2] = mem_rf32(ram, c->r[30] + 0x0000008cu);
    c->f[0] = c->f[1] - c->f[2];
    c->r[2] = 0x80000000u;
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    mem_wf32(ram, c->r[30] + 0x00000088u, c->f[0]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000088u);
    c->r[3] = c->r[3] | c->r[2];
    mem_w32(ram, c->r[30] + 0x00000088u, c->r[3]);
L_08944d10:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000088u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000080u);
    mem_w8(ram, c->r[2] + 0x00000002u, c->r[3]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 2;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[3] + c->r[2];
    mem_w8(ram, c->r[2] + 0x00000003u, 0u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 2;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[3] = c->r[2] + 0x00000014u;
    c->r[2] = 0u + 0x0000007fu;
    mem_w8(ram, c->r[3] + 0x00000003u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 2;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000077dcu);
    mem_wf32(ram, c->r[2] + 0x00000008u, c->f[0]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 2;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = c->r[2] + 0x00000014u;
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000077e0u);
    mem_wf32(ram, c->r[2] + 0x00000008u, c->f[0]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 2;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[3] + c->r[2];
    mem_w32(ram, c->r[2] + 0x0000000cu, 0u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 2;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = c->r[2] + 0x00000014u;
    mem_w32(ram, c->r[2] + 0x0000000cu, 0u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 2;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[3] + c->r[2];
    c->f[0] = mem_rf32(ram, c->r[30] + 0x0000001cu);
    c->f[1] = (f32)(s32)f2u(c->f[0]);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000014u);
    c->f[0] = c->f[0] * c->f[1];
    mem_wf32(ram, c->r[2] + 0x00000010u, c->f[0]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 2;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = c->r[2] + 0x00000014u;
    c->f[0] = mem_rf32(ram, c->r[30] + 0x0000001cu);
    c->f[1] = (f32)(s32)f2u(c->f[0]);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000014u);
    c->f[0] = c->f[0] * c->f[1];
    mem_wf32(ram, c->r[2] + 0x00000010u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    { int _c = (c->r[2] == 0u); if (_c) goto L_08944fa0; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 2;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = c->r[3] + c->r[2];
    c->r[2] = 0u + 0x0000003fu;
    mem_w8(ram, c->r[3] + 0x00000002u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 2;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[3] = c->r[2] + 0x00000014u;
    c->r[2] = 0u + 0x0000003fu;
    mem_w8(ram, c->r[3] + 0x00000002u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 2;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[3] + c->r[2];
    mem_w8(ram, c->r[2] + 0x00000003u, 0u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 2;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[3] = c->r[2] + 0x00000014u;
    c->r[2] = 0u + 0x0000007fu;
    mem_w8(ram, c->r[3] + 0x00000003u, c->r[2]);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x0000001cu);
    c->f[1] = (f32)(s32)f2u(c->f[0]);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000018u);
    c->f[0] = c->f[1] * c->f[0];
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[3] = f2u(c->f[0]);
    c->r[2] = c->r[2] + c->r[3];
    mem_w32(ram, c->r[30] + 0x00000028u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000028u);
    c->r[2] = 0u + 0u;
    c->r[2] = alx_max(c->r[3], c->r[2]);
    mem_w32(ram, c->r[30] + 0x00000028u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000028u);
    c->r[2] = 0u + 0x0000000fu;
    c->r[2] = alx_min(c->r[3], c->r[2]);
    c->r[2] = c->r[2] << 2;
    mem_w32(ram, c->r[30] + 0x00000028u, c->r[2]);
    c->r[2] = 0xff000000u;
    mem_w32(ram, c->r[30] + 0x0000002cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000028u);
    c->r[3] = c->r[2] << 16;
    c->r[2] = 0x00ff0000u;
    c->r[3] = c->r[3] & c->r[2];
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000002cu);
    c->r[2] = c->r[2] | c->r[3];
    mem_w32(ram, c->r[30] + 0x0000002cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000028u);
    c->r[2] = c->r[2] << 6;
    c->r[3] = c->r[2] & 0xff00u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000002cu);
    c->r[2] = c->r[2] | c->r[3];
    mem_w32(ram, c->r[30] + 0x0000002cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000028u);
    c->r[2] = (u32)((s32)c->r[2] >> 1);
    c->r[3] = c->r[2] & 0x00ffu;
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000002cu);
    c->r[2] = c->r[2] | c->r[3];
    { mem_w32(ram, c->r[30] + 0x0000002cu, c->r[2]); goto L_08945018; }
L_08944fa0:
    c->f[0] = mem_rf32(ram, c->r[30] + 0x0000001cu);
    c->f[1] = (f32)(s32)f2u(c->f[0]);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000018u);
    c->f[0] = c->f[1] * c->f[0];
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[3] = f2u(c->f[0]);
    c->r[2] = c->r[2] + c->r[3];
    mem_w32(ram, c->r[30] + 0x00000024u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000024u);
    c->r[2] = 0u + 0u;
    c->r[2] = alx_max(c->r[3], c->r[2]);
    mem_w32(ram, c->r[30] + 0x00000024u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000024u);
    c->r[2] = 0u + 0x0000000fu;
    c->r[3] = alx_min(c->r[3], c->r[2]);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[3];
    c->r[2] = c->r[2] << 1;
    mem_w32(ram, c->r[30] + 0x00000024u, c->r[2]);
    c->r[4] = 0x08aa0000u;
    { c->r[31] = 0x08945000u; c->r[4] = c->r[4] + 0x000000f0u; func_0888d9b8(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000028u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000024u);
    c->r[3] = c->r[2] << 24;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000028u);
    c->r[2] = c->r[3] | c->r[2];
    mem_w32(ram, c->r[30] + 0x0000002cu, c->r[2]);
L_08945018:
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 2;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[4] = c->r[3] + c->r[2];
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 2;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[3] = c->r[2] + 0x00000014u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000002cu);
    mem_w32(ram, c->r[3] + 0x00000004u, c->r[2]);
    mem_w32(ram, c->r[4] + 0x00000004u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = c->r[2] + 0x00000002u;
    { mem_w32(ram, c->r[30] + 0x0000001cu, c->r[2]); goto L_0894490c; }
L_08945070:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000094u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000090u);
    { c->r[29] = c->r[29] + 0x000000a0u; return; }
    return; /* fell out of func_089448a0 */
}

/* func_0894629c  0x0894629c..0x089462e0  68 bytes, source=sweep */
void func_0894629c(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0894629cu);
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
    { c->r[31] = 0x089462ccu; c->r[5] = c->r[2] + 0u; func_0894568c(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_0894629c */
}

/* func_0894bcf4  0x0894bcf4..0x0894bf14  544 bytes, source=sweep */
void func_0894bcf4(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0894bcf4u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[6]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = (c->r[2] < 0x00000016u) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_0894bf00; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08a40000u;
    c->r[2] = c->r[2] + 0x00007aa0u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    { u32 _t = c->r[2]; switch (_t) { case 0x0894bd40u: goto L_0894bd40; case 0x0894bd54u: goto L_0894bd54; case 0x0894bd68u: goto L_0894bd68; case 0x0894bd7cu: goto L_0894bd7c; case 0x0894bd90u: goto L_0894bd90; case 0x0894bda4u: goto L_0894bda4; case 0x0894bdb8u: goto L_0894bdb8; case 0x0894bdccu: goto L_0894bdcc; case 0x0894bde0u: goto L_0894bde0; case 0x0894bdf4u: goto L_0894bdf4; case 0x0894be08u: goto L_0894be08; case 0x0894be1cu: goto L_0894be1c; case 0x0894be30u: goto L_0894be30; case 0x0894be44u: goto L_0894be44; case 0x0894be5cu: goto L_0894be5c; case 0x0894be74u: goto L_0894be74; case 0x0894be8cu: goto L_0894be8c; case 0x0894bea4u: goto L_0894bea4; case 0x0894beb8u: goto L_0894beb8; case 0x0894beccu: goto L_0894becc; case 0x0894bee0u: goto L_0894bee0; case 0x0894bef4u: goto L_0894bef4; default: recomp_trap_unknown_indirect(c, ram, 0x0894bd38u, _t); return; } }
L_0894bd40:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x0894bd4cu; c->r[5] = mem_r32(ram, c->r[30] + 0x00000008u); func_0894bf14(c, ram); }
    { goto L_0894bf00; }
L_0894bd54:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x0894bd60u; c->r[5] = mem_r32(ram, c->r[30] + 0x00000008u); func_0894bf58(c, ram); }
    { goto L_0894bf00; }
L_0894bd68:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x0894bd74u; c->r[5] = mem_r32(ram, c->r[30] + 0x00000008u); func_0894c3a4(c, ram); }
    { goto L_0894bf00; }
L_0894bd7c:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x0894bd88u; c->r[5] = mem_r32(ram, c->r[30] + 0x00000008u); func_0894bf9c(c, ram); }
    { goto L_0894bf00; }
L_0894bd90:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x0894bd9cu; c->r[5] = mem_r32(ram, c->r[30] + 0x00000008u); func_0894bfe0(c, ram); }
    { goto L_0894bf00; }
L_0894bda4:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x0894bdb0u; c->r[5] = mem_r32(ram, c->r[30] + 0x00000008u); func_0894c024(c, ram); }
    { goto L_0894bf00; }
L_0894bdb8:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x0894bdc4u; c->r[5] = mem_r32(ram, c->r[30] + 0x00000008u); func_0894c068(c, ram); }
    { goto L_0894bf00; }
L_0894bdcc:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x0894bdd8u; c->r[5] = mem_r32(ram, c->r[30] + 0x00000008u); func_0894c0ac(c, ram); }
    { goto L_0894bf00; }
L_0894bde0:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x0894bdecu; c->r[5] = mem_r32(ram, c->r[30] + 0x00000008u); func_0894c0f0(c, ram); }
    { goto L_0894bf00; }
L_0894bdf4:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x0894be00u; c->r[5] = mem_r32(ram, c->r[30] + 0x00000008u); func_0894c134(c, ram); }
    { goto L_0894bf00; }
L_0894be08:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x0894be14u; c->r[5] = mem_r32(ram, c->r[30] + 0x00000008u); func_0894c178(c, ram); }
    { goto L_0894bf00; }
L_0894be1c:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x0894be28u; c->r[5] = mem_r32(ram, c->r[30] + 0x00000008u); func_0894c1bc(c, ram); }
    { goto L_0894bf00; }
L_0894be30:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x0894be3cu; c->r[5] = mem_r32(ram, c->r[30] + 0x00000008u); func_0894c200(c, ram); }
    { goto L_0894bf00; }
L_0894be44:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = 0u + 0u;
    { c->r[31] = 0x0894be54u; c->r[6] = mem_r32(ram, c->r[30] + 0x00000008u); func_0894c244(c, ram); }
    { goto L_0894bf00; }
L_0894be5c:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = 0u + 0x00000001u;
    { c->r[31] = 0x0894be6cu; c->r[6] = mem_r32(ram, c->r[30] + 0x00000008u); func_0894c244(c, ram); }
    { goto L_0894bf00; }
L_0894be74:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = 0u + 0x00000002u;
    { c->r[31] = 0x0894be84u; c->r[6] = mem_r32(ram, c->r[30] + 0x00000008u); func_0894c244(c, ram); }
    { goto L_0894bf00; }
L_0894be8c:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = 0u + 0x00000003u;
    { c->r[31] = 0x0894be9cu; c->r[6] = mem_r32(ram, c->r[30] + 0x00000008u); func_0894c244(c, ram); }
    { goto L_0894bf00; }
L_0894bea4:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x0894beb0u; c->r[5] = mem_r32(ram, c->r[30] + 0x00000008u); func_0894c294(c, ram); }
    { goto L_0894bf00; }
L_0894beb8:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x0894bec4u; c->r[5] = mem_r32(ram, c->r[30] + 0x00000008u); func_0894c2d8(c, ram); }
    { goto L_0894bf00; }
L_0894becc:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x0894bed8u; c->r[5] = mem_r32(ram, c->r[30] + 0x00000008u); func_0894c31c(c, ram); }
    { goto L_0894bf00; }
L_0894bee0:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x0894beecu; c->r[5] = mem_r32(ram, c->r[30] + 0x00000008u); func_0894c360(c, ram); }
    { goto L_0894bf00; }
L_0894bef4:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x0894bf00u; c->r[5] = mem_r32(ram, c->r[30] + 0x00000008u); func_0894c450(c, ram); }
L_0894bf00:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_0894bcf4 */
}

/* func_0894e6c4  0x0894e6c4..0x0894f738  4212 bytes, source=fde */
void func_0894e6c4(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0894e6c4u);
    c->r[29] = c->r[29] + 0xfffffde0u;
    mem_w32(ram, c->r[29] + 0x00000208u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000204u, c->r[30]);
    mem_w32(ram, c->r[29] + 0x00000200u, c->r[16]);
    mem_wf32(ram, c->r[29] + 0x00000210u, c->f[20]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[2] = c->r[5] + 0u;
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[6]);
    mem_w8(ram, c->r[30] + 0x00000004u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x000000e0u;
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
    c->r[2] = mem_r8(ram, c->r[30] + 0x00000004u);
    mem_w32(ram, c->r[30] + 0x000001f4u, c->r[2]);
    c->r[2] = 0u + 0x00000001u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x000001f4u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_0894e808; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x000001f4u);
    c->r[2] = ((s32)c->r[3] < (s32)0x00000002u) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_0894e734; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x000001f4u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_0894e75c; }
    { goto L_0894f71c; }
L_0894e734:
    c->r[2] = 0u + 0x00000006u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x000001f4u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_0894eb84; }
    c->r[2] = 0u + 0x0000000cu;
    c->r[3] = mem_r32(ram, c->r[30] + 0x000001f4u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_0894ecd8; }
    { goto L_0894f71c; }
L_0894e75c:
    c->r[2] = 0x08aa0000u;
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x00003938u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_0894e784; }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = 0x08a40000u;
    { c->r[31] = 0x0894e77cu; c->r[5] = c->r[5] + 0x00007b9cu; func_089c35a0(c, ram); }
    c->r[1] = 0x08aa0000u;
    mem_w16(ram, c->r[1] + 0x00003938u, c->r[2]);
L_0894e784:
    c->r[2] = 0x08aa0000u;
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x0000393au);
    { int _c = (c->r[2] != 0u); if (_c) goto L_0894e7ac; }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = 0x08a40000u;
    { c->r[31] = 0x0894e7a4u; c->r[5] = c->r[5] + 0x00007ba8u; func_089c35a0(c, ram); }
    c->r[1] = 0x08aa0000u;
    mem_w16(ram, c->r[1] + 0x0000393au, c->r[2]);
L_0894e7ac:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x00000040u;
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00007bb4u);
    mem_wf32(ram, c->r[2] + 0x00000000u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000070u;
    { c->r[31] = 0x0894e7d0u; c->r[4] = c->r[2] + 0u; func_0884bfd0(c, ram); }
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00007bb4u);
    mem_wf32(ram, c->r[2] + 0x00000000u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000070u;
    { c->r[31] = 0x0894e7ecu; c->r[4] = c->r[2] + 0u; func_0884bfd0(c, ram); }
    mem_w32(ram, c->r[2] + 0x00000004u, 0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000070u;
    { c->r[31] = 0x0894e800u; c->r[4] = c->r[2] + 0u; func_0884bfd0(c, ram); }
    { mem_w32(ram, c->r[2] + 0x00000008u, 0u); goto L_0894f71c; }
L_0894e808:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x00000040u;
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000000u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00007bb4u);
    alx_c_cond_s(c, 2, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_0894e834; }
    { goto L_0894e994; }
L_0894e834:
    c->r[2] = c->r[30] + 0x00000010u;
    { c->r[31] = 0x0894e840u; c->r[4] = c->r[2] + 0u; func_08808240(c, ram); }
    c->r[4] = c->r[30] + 0x00000010u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = c->r[2] + 0x00000020u;
    c->r[2] = 0x08a80000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00002f90u);
    c->r[2] = c->r[2] + 0x00000020u;
    c->r[5] = c->r[3] + 0u;
    { c->r[31] = 0x0894e864u; c->r[6] = c->r[2] + 0u; func_08820ca4(c, ram); }
    c->r[2] = c->r[30] + 0x00000010u;
    { c->r[31] = 0x0894e870u; c->r[4] = c->r[2] + 0u; func_08820c6c(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x00000048u;
    mem_wf32(ram, c->r[2] + 0x00000000u, c->f[0]);
    c->r[2] = c->r[30] + 0x00000010u;
    c->r[3] = c->r[30] + 0x00000010u;
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x0894e890u; c->r[5] = c->r[3] + 0u; func_0884c1d8(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x00000044u;
    mem_w32(ram, c->r[30] + 0x000001d0u, c->r[2]);
    c->r[2] = c->r[30] + 0x00000010u;
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0x08a80000u;
    { c->r[31] = 0x0894e8b0u; c->r[5] = c->r[5] + 0xffffbf60u; func_0885a018(c, ram); }
    c->r[1] = 0x08a40000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0x00007bb8u);
    c->f[12] = c->f[0];
    { c->r[31] = 0x0894e8c4u; c->f[13] = c->f[1]; func_08a0ff08(c, ram); }
    c->f[1] = c->f[0];
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00007bbcu);
    alx_c_cond_s(c, 12, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_0894e8e8; }
    { goto L_0894e8f8; }
L_0894e8e8:
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00007bbcu);
    { mem_wf32(ram, c->r[30] + 0x000001d4u, c->f[0]); goto L_0894e924; }
L_0894e8f8:
    c->r[2] = c->r[30] + 0x00000010u;
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0x08a80000u;
    { c->r[31] = 0x0894e90cu; c->r[5] = c->r[5] + 0xffffbf60u; func_0885a018(c, ram); }
    c->r[1] = 0x08a40000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0x00007bb8u);
    c->f[12] = c->f[0];
    { c->r[31] = 0x0894e920u; c->f[13] = c->f[1]; func_08a0ff08(c, ram); }
    mem_wf32(ram, c->r[30] + 0x000001d4u, c->f[0]);
L_0894e924:
    c->f[0] = mem_rf32(ram, c->r[30] + 0x000001d4u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x000001d0u);
    mem_wf32(ram, c->r[2] + 0x00000000u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x00000044u;
    mem_w32(ram, c->r[30] + 0x000001d8u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x00000044u;
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000000u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00007bc0u);
    alx_c_cond_s(c, 12, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_0894e968; }
    { goto L_0894e978; }
L_0894e968:
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00007bc0u);
    { mem_wf32(ram, c->r[30] + 0x000001dcu, c->f[0]); goto L_0894e988; }
L_0894e978:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x00000044u;
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000000u);
    mem_wf32(ram, c->r[30] + 0x000001dcu, c->f[0]);
L_0894e988:
    c->f[0] = mem_rf32(ram, c->r[30] + 0x000001dcu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x000001d8u);
    mem_wf32(ram, c->r[2] + 0x00000000u, c->f[0]);
L_0894e994:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000070u;
    { c->r[31] = 0x0894e9a4u; c->r[4] = c->r[2] + 0u; func_0884bfd0(c, ram); }
    c->r[1] = 0x08a80000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0x00002e40u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00007bc4u);
    c->f[1] = c->f[1] * c->f[0];
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000004u);
    c->f[0] = c->f[0] + c->f[1];
    mem_wf32(ram, c->r[2] + 0x00000004u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000070u;
    { c->r[31] = 0x0894e9d4u; c->r[4] = c->r[2] + 0u; func_0884bfd0(c, ram); }
    c->r[1] = 0x08a80000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0x00002e40u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00007bc8u);
    c->f[1] = c->f[1] * c->f[0];
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000008u);
    c->f[0] = c->f[0] + c->f[1];
    mem_wf32(ram, c->r[2] + 0x00000008u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = c->r[2] + 0x00000048u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x00000048u;
    c->r[1] = 0x08a80000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0x00002e40u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00007bccu);
    c->f[1] = c->f[1] * c->f[0];
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000000u);
    c->f[0] = c->f[0] - c->f[1];
    mem_wf32(ram, c->r[3] + 0x00000000u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x00000048u;
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000000u);
    c->f[0] = u2f(0u);
    alx_c_cond_s(c, 14, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_0894ea4c; }
    { goto L_0894eaec; }
L_0894ea4c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000070u;
    { c->r[31] = 0x0894ea5cu; c->r[4] = c->r[2] + 0u; func_0884bfd0(c, ram); }
    c->r[1] = 0x08a80000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0x00002e40u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00007bc8u);
    c->f[1] = c->f[1] * c->f[0];
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000000u);
    c->f[0] = c->f[0] - c->f[1];
    mem_wf32(ram, c->r[2] + 0x00000000u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000070u;
    { c->r[31] = 0x0894ea8cu; c->r[4] = c->r[2] + 0u; func_0884bfd0(c, ram); }
    mem_w32(ram, c->r[30] + 0x000001e0u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000070u;
    { c->r[31] = 0x0894eaa0u; c->r[4] = c->r[2] + 0u; func_0884bfd0(c, ram); }
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000000u);
    c->f[0] = u2f(0u);
    alx_c_cond_s(c, 12, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_0894eac0; }
    { goto L_0894eadc; }
L_0894eac0:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000070u;
    { c->r[31] = 0x0894ead0u; c->r[4] = c->r[2] + 0u; func_0884bfd0(c, ram); }
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000000u);
    { mem_wf32(ram, c->r[30] + 0x000001e4u, c->f[0]); goto L_0894eae0; }
L_0894eadc:
    mem_w32(ram, c->r[30] + 0x000001e4u, 0u);
L_0894eae0:
    c->f[0] = mem_rf32(ram, c->r[30] + 0x000001e4u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x000001e0u);
    mem_wf32(ram, c->r[2] + 0x00000000u, c->f[0]);
L_0894eaec:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = c->r[2] + 0x00000040u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x00000040u;
    c->r[1] = 0x08a80000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0x00002e40u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00007bd0u);
    c->f[1] = c->f[1] / c->f[0];
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000000u);
    c->f[0] = c->f[0] - c->f[1];
    mem_wf32(ram, c->r[3] + 0x00000000u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x00000040u;
    mem_w32(ram, c->r[30] + 0x000001e8u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x00000040u;
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000000u);
    c->f[0] = u2f(0u);
    alx_c_cond_s(c, 12, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_0894eb50; }
    { goto L_0894eb64; }
L_0894eb50:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x00000040u;
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000000u);
    { mem_wf32(ram, c->r[30] + 0x000001ecu, c->f[0]); goto L_0894eb68; }
L_0894eb64:
    mem_w32(ram, c->r[30] + 0x000001ecu, 0u);
L_0894eb68:
    c->f[0] = mem_rf32(ram, c->r[30] + 0x000001ecu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x000001e8u);
    mem_wf32(ram, c->r[2] + 0x00000000u, c->f[0]);
    { c->r[31] = 0x0894eb7cu; c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u); func_089c612c(c, ram); }
    { goto L_0894f71c; }
L_0894eb84:
    { c->r[31] = 0x0894eb8cu; func_089c3a94(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = 0u + 0x00000001u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_0894eba4; }
    { goto L_0894f71c; }
L_0894eba4:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x00000048u;
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000000u);
    c->f[0] = u2f(0u);
    alx_c_cond_s(c, 14, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_0894ebcc; }
    { goto L_0894f71c; }
L_0894ebcc:
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00007bd4u);
    c->r[1] = 0x08a40000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0x00007bb4u);
    c->f[12] = c->f[0];
    { c->r[31] = 0x0894ebe8u; c->f[13] = c->f[1]; func_0884bf84(c, ram); }
    c->f[20] = c->f[0];
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000070u;
    { c->r[31] = 0x0894ebfcu; c->r[4] = c->r[2] + 0u; func_0884bfd0(c, ram); }
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000000u);
    c->f[1] = c->f[20] * c->f[0];
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00007bd8u);
    c->f[1] = c->f[1] * c->f[0];
    c->r[1] = 0x08a80000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffffbf40u);
    c->f[0] = c->f[0] + c->f[1];
    c->r[1] = 0x08a80000u;
    mem_wf32(ram, c->r[1] + 0xffffbf40u, c->f[0]);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00007bd4u);
    c->r[1] = 0x08a40000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0x00007bb4u);
    c->f[12] = c->f[0];
    { c->r[31] = 0x0894ec40u; c->f[13] = c->f[1]; func_0884bf84(c, ram); }
    c->f[20] = c->f[0];
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000070u;
    { c->r[31] = 0x0894ec54u; c->r[4] = c->r[2] + 0u; func_0884bfd0(c, ram); }
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000000u);
    c->f[1] = c->f[20] * c->f[0];
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00007bd8u);
    c->f[1] = c->f[1] * c->f[0];
    c->r[1] = 0x08a80000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffffbf44u);
    c->f[0] = c->f[0] + c->f[1];
    c->r[1] = 0x08a80000u;
    mem_wf32(ram, c->r[1] + 0xffffbf44u, c->f[0]);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00007bd4u);
    c->r[1] = 0x08a40000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0x00007bb4u);
    c->f[12] = c->f[0];
    { c->r[31] = 0x0894ec98u; c->f[13] = c->f[1]; func_0884bf84(c, ram); }
    c->f[20] = c->f[0];
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000070u;
    { c->r[31] = 0x0894ecacu; c->r[4] = c->r[2] + 0u; func_0884bfd0(c, ram); }
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000000u);
    c->f[1] = c->f[20] * c->f[0];
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00007bd8u);
    c->f[1] = c->f[1] * c->f[0];
    c->r[1] = 0x08a80000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffffbf48u);
    c->f[0] = c->f[0] + c->f[1];
    c->r[1] = 0x08a80000u;
    { mem_wf32(ram, c->r[1] + 0xffffbf48u, c->f[0]); goto L_0894f71c; }
L_0894ecd8:
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00007bdcu);
    c->r[4] = 0x08a70000u;
    c->r[4] = c->r[4] + 0xffffb640u;
    { c->r[31] = 0x0894ecf0u; c->f[12] = c->f[0]; func_089f1210(c, ram); }
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
    { c->r[31] = 0x0894ed50u; c->r[5] = c->r[2] + 0u; func_0894f738(c, ram); }
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
    { c->r[31] = 0x0894edb0u; c->r[5] = c->r[2] + 0u; func_0894f738(c, ram); }
    c->r[4] = 0x08a70000u;
    c->r[4] = c->r[4] + 0xffffb640u;
    { c->r[31] = 0x0894edc0u; c->r[5] = 0u + 0u; func_089e0008(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000020u, 0u);
L_0894edc4:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000002u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_0894eddc; }
    { goto L_0894f4a4; }
L_0894eddc:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_0894ee04; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000070u;
    { c->r[31] = 0x0894edf8u; c->r[4] = c->r[2] + 0u; func_0884bfd0(c, ram); }
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000004u);
    { mem_wf32(ram, c->r[30] + 0x000001f0u, c->f[0]); goto L_0894ee1c; }
L_0894ee04:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000070u;
    { c->r[31] = 0x0894ee14u; c->r[4] = c->r[2] + 0u; func_0884bfd0(c, ram); }
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000008u);
    mem_wf32(ram, c->r[30] + 0x000001f0u, c->f[0]);
L_0894ee1c:
    c->f[0] = mem_rf32(ram, c->r[30] + 0x000001f0u);
    mem_wf32(ram, c->r[30] + 0x00000024u, c->f[0]);
    c->r[1] = 0x08a40000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0x00007bb4u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000024u);
    c->f[1] = c->f[1] - c->f[0];
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00007be0u);
    c->f[0] = c->f[1] * c->f[0];
    mem_wf32(ram, c->r[30] + 0x00000028u, c->f[0]);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000028u);
    c->f[0] = u2f(0u);
    alx_c_cond_s(c, 12, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_0894ee64; }
    { goto L_0894f494; }
L_0894ee64:
    c->r[4] = 0x08a70000u;
    c->r[4] = c->r[4] + 0xffffb640u;
    { c->r[31] = 0x0894ee74u; c->r[5] = 0u + 0u; func_089dff38(c, ram); }
    c->r[4] = 0x08a70000u;
    c->r[4] = c->r[4] + 0xffffb640u;
    c->r[5] = 0u + 0x00000003u;
    { c->r[31] = 0x0894ee88u; c->r[6] = 0u + 0x00000007u; func_089df7a0(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_0894eeb8; }
    c->r[2] = 0x08aa0000u;
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x00003938u);
    c->r[4] = 0x08a70000u;
    c->r[4] = c->r[4] + 0xffffb640u;
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x0894eeb0u; c->r[6] = 0u + 0u; func_089e0bd8(c, ram); }
    { goto L_0894eed4; }
L_0894eeb8:
    c->r[2] = 0x08aa0000u;
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x0000393au);
    c->r[4] = 0x08a70000u;
    c->r[4] = c->r[4] + 0xffffb640u;
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x0894eed4u; c->r[6] = 0u + 0u; func_089e0bd8(c, ram); }
L_0894eed4:
    c->r[2] = c->r[30] + 0x00000030u;
    mem_w32(ram, c->r[30] + 0x000000b0u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000b0u);
    mem_w32(ram, c->r[30] + 0x000000b4u, c->r[2]);
    c->r[2] = 0u + 0x00000007u;
    mem_w32(ram, c->r[30] + 0x000000b8u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x000000b8u);
    c->r[2] = 0u + 0xffffffffu;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_0894ef2c; }
L_0894eefc:
    { c->r[31] = 0x0894ef04u; c->r[4] = mem_r32(ram, c->r[30] + 0x000000b4u); func_08808240(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000b4u);
    c->r[2] = c->r[2] + 0x00000010u;
    mem_w32(ram, c->r[30] + 0x000000b4u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000b8u);
    c->r[2] = c->r[2] + 0xffffffffu;
    c->r[3] = c->r[2] + 0u;
    mem_w32(ram, c->r[30] + 0x000000b8u, c->r[3]);
    c->r[2] = 0u + 0xffffffffu;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_0894eefc; }
L_0894ef2c:
    c->r[2] = c->r[30] + 0x000000c0u;
    mem_w32(ram, c->r[30] + 0x000000b8u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000b8u);
    mem_w32(ram, c->r[30] + 0x000000b4u, c->r[2]);
    c->r[2] = 0u + 0x00000007u;
    mem_w32(ram, c->r[30] + 0x000000b0u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x000000b0u);
    c->r[2] = 0u + 0xffffffffu;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_0894ef84; }
L_0894ef54:
    { c->r[31] = 0x0894ef5cu; c->r[4] = mem_r32(ram, c->r[30] + 0x000000b4u); func_08808240(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000b4u);
    c->r[2] = c->r[2] + 0x00000010u;
    mem_w32(ram, c->r[30] + 0x000000b4u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000b0u);
    c->r[2] = c->r[2] + 0xffffffffu;
    c->r[3] = c->r[2] + 0u;
    mem_w32(ram, c->r[30] + 0x000000b0u, c->r[3]);
    c->r[2] = 0u + 0xffffffffu;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_0894ef54; }
L_0894ef84:
    c->r[2] = c->r[30] + 0x00000140u;
    mem_w32(ram, c->r[30] + 0x000000b8u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000b8u);
    mem_w32(ram, c->r[30] + 0x000000b4u, c->r[2]);
    c->r[2] = 0u + 0x00000007u;
    mem_w32(ram, c->r[30] + 0x000000b0u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x000000b0u);
    c->r[2] = 0u + 0xffffffffu;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_0894efdc; }
L_0894efac:
    { c->r[31] = 0x0894efb4u; c->r[4] = mem_r32(ram, c->r[30] + 0x000000b4u); func_08808240(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000b4u);
    c->r[2] = c->r[2] + 0x00000010u;
    mem_w32(ram, c->r[30] + 0x000000b4u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000b0u);
    c->r[2] = c->r[2] + 0xffffffffu;
    c->r[3] = c->r[2] + 0u;
    mem_w32(ram, c->r[30] + 0x000000b0u, c->r[3]);
    c->r[2] = 0u + 0xffffffffu;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_0894efac; }
L_0894efdc:
    c->r[4] = c->r[30] + 0x00000030u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = c->r[2] + 0x00000020u;
    c->r[2] = 0x08a80000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00002f90u);
    c->r[2] = c->r[2] + 0x00000020u;
    c->r[5] = c->r[3] + 0u;
    { c->r[31] = 0x0894f000u; c->r[6] = c->r[2] + 0u; func_08820ca4(c, ram); }
    c->r[2] = c->r[30] + 0x00000030u;
    c->r[4] = c->r[2] + 0x00000010u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = c->r[2] + 0x00000020u;
    c->r[2] = 0x08a80000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00002f90u);
    c->r[2] = c->r[2] + 0x00000020u;
    c->r[5] = c->r[3] + 0u;
    { c->r[31] = 0x0894f028u; c->r[6] = c->r[2] + 0u; func_08820ca4(c, ram); }
    c->r[2] = c->r[30] + 0x00000030u;
    c->r[4] = c->r[2] + 0x00000020u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = c->r[2] + 0x00000020u;
    c->r[2] = 0x08a80000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00002f90u);
    c->r[2] = c->r[2] + 0x00000020u;
    c->r[5] = c->r[3] + 0u;
    { c->r[31] = 0x0894f050u; c->r[6] = c->r[2] + 0u; func_08820ca4(c, ram); }
    c->r[2] = c->r[30] + 0x00000030u;
    c->r[4] = c->r[2] + 0x00000030u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = c->r[2] + 0x00000020u;
    c->r[2] = 0x08a80000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00002f90u);
    c->r[2] = c->r[2] + 0x00000020u;
    c->r[5] = c->r[3] + 0u;
    { c->r[31] = 0x0894f078u; c->r[6] = c->r[2] + 0u; func_08820ca4(c, ram); }
    c->r[16] = c->r[30] + 0x00000010u;
    c->r[2] = c->r[30] + 0x000001c0u;
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00007be4u);
    c->r[1] = 0x08a40000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0x00007be8u);
    c->r[4] = c->r[2] + 0u;
    c->f[12] = c->f[0];
    c->f[13] = u2f(0u);
    c->f[14] = c->f[1];
    c->f[15] = u2f(0u);
    { c->r[31] = 0x0894f0acu; func_0880d140(c, ram); }
    c->r[2] = c->r[30] + 0x000001c0u;
    c->r[4] = c->r[16] + 0u;
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x0894f0c0u; c->f[12] = mem_rf32(ram, c->r[30] + 0x00000024u); func_0884c120(c, ram); }
    c->r[3] = c->r[30] + 0x00000010u;
    c->r[2] = c->r[30] + 0x00000030u;
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x0894f0d4u; c->r[5] = c->r[3] + 0u; func_0880d1a0(c, ram); }
    c->r[16] = c->r[30] + 0x000001c0u;
    c->r[2] = c->r[30] + 0x00000010u;
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00007be8u);
    c->r[1] = 0x08a40000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0x00007be8u);
    c->r[4] = c->r[2] + 0u;
    c->f[12] = c->f[0];
    c->f[13] = u2f(0u);
    c->f[14] = c->f[1];
    c->f[15] = u2f(0u);
    { c->r[31] = 0x0894f108u; func_0880d140(c, ram); }
    c->r[2] = c->r[30] + 0x00000010u;
    c->r[4] = c->r[16] + 0u;
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x0894f11cu; c->f[12] = mem_rf32(ram, c->r[30] + 0x00000024u); func_0884c120(c, ram); }
    c->r[3] = c->r[30] + 0x000001c0u;
    c->r[2] = c->r[30] + 0x00000030u;
    c->r[2] = c->r[2] + 0x00000010u;
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x0894f134u; c->r[5] = c->r[3] + 0u; func_0880d1a0(c, ram); }
    c->r[16] = c->r[30] + 0x000001c0u;
    c->r[2] = c->r[30] + 0x00000010u;
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00007be8u);
    c->r[1] = 0x08a40000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0x00007be4u);
    c->r[4] = c->r[2] + 0u;
    c->f[12] = c->f[0];
    c->f[13] = u2f(0u);
    c->f[14] = c->f[1];
    c->f[15] = u2f(0u);
    { c->r[31] = 0x0894f168u; func_0880d140(c, ram); }
    c->r[2] = c->r[30] + 0x00000010u;
    c->r[4] = c->r[16] + 0u;
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x0894f17cu; c->f[12] = mem_rf32(ram, c->r[30] + 0x00000024u); func_0884c120(c, ram); }
    c->r[3] = c->r[30] + 0x000001c0u;
    c->r[2] = c->r[30] + 0x00000030u;
    c->r[2] = c->r[2] + 0x00000020u;
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x0894f194u; c->r[5] = c->r[3] + 0u; func_0880d1a0(c, ram); }
    c->r[16] = c->r[30] + 0x000001c0u;
    c->r[2] = c->r[30] + 0x00000010u;
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00007be4u);
    c->r[1] = 0x08a40000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0x00007be4u);
    c->r[4] = c->r[2] + 0u;
    c->f[12] = c->f[0];
    c->f[13] = u2f(0u);
    c->f[14] = c->f[1];
    c->f[15] = u2f(0u);
    { c->r[31] = 0x0894f1c8u; func_0880d140(c, ram); }
    c->r[2] = c->r[30] + 0x00000010u;
    c->r[4] = c->r[16] + 0u;
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x0894f1dcu; c->f[12] = mem_rf32(ram, c->r[30] + 0x00000024u); func_0884c120(c, ram); }
    c->r[3] = c->r[30] + 0x000001c0u;
    c->r[2] = c->r[30] + 0x00000030u;
    c->r[2] = c->r[2] + 0x00000030u;
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x0894f1f4u; c->r[5] = c->r[3] + 0u; func_0880d1a0(c, ram); }
    c->r[2] = c->r[30] + 0x000001c0u;
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00007bb4u);
    c->r[4] = c->r[2] + 0u;
    c->f[12] = mem_rf32(ram, c->r[30] + 0x00000028u);
    c->f[13] = mem_rf32(ram, c->r[30] + 0x00000028u);
    c->f[14] = mem_rf32(ram, c->r[30] + 0x00000028u);
    { c->r[31] = 0x0894f218u; c->f[15] = c->f[0]; func_0880d140(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x000001c0u);
    mem_w32(ram, c->r[30] + 0x00000130u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x000001c4u);
    mem_w32(ram, c->r[30] + 0x00000134u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x000001c8u);
    mem_w32(ram, c->r[30] + 0x00000138u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x000001ccu);
    mem_w32(ram, c->r[30] + 0x0000013cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000130u);
    mem_w32(ram, c->r[30] + 0x00000120u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000134u);
    mem_w32(ram, c->r[30] + 0x00000124u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000138u);
    mem_w32(ram, c->r[30] + 0x00000128u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000013cu);
    mem_w32(ram, c->r[30] + 0x0000012cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000120u);
    mem_w32(ram, c->r[30] + 0x00000110u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000124u);
    mem_w32(ram, c->r[30] + 0x00000114u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000128u);
    mem_w32(ram, c->r[30] + 0x00000118u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000012cu);
    mem_w32(ram, c->r[30] + 0x0000011cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000110u);
    mem_w32(ram, c->r[30] + 0x00000100u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000114u);
    mem_w32(ram, c->r[30] + 0x00000104u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000118u);
    mem_w32(ram, c->r[30] + 0x00000108u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000011cu);
    mem_w32(ram, c->r[30] + 0x0000010cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000100u);
    mem_w32(ram, c->r[30] + 0x000000f0u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000104u);
    mem_w32(ram, c->r[30] + 0x000000f4u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000108u);
    mem_w32(ram, c->r[30] + 0x000000f8u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000010cu);
    mem_w32(ram, c->r[30] + 0x000000fcu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000f0u);
    mem_w32(ram, c->r[30] + 0x000000e0u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000f4u);
    mem_w32(ram, c->r[30] + 0x000000e4u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000f8u);
    mem_w32(ram, c->r[30] + 0x000000e8u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000fcu);
    mem_w32(ram, c->r[30] + 0x000000ecu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000e0u);
    mem_w32(ram, c->r[30] + 0x000000d0u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000e4u);
    mem_w32(ram, c->r[30] + 0x000000d4u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000e8u);
    mem_w32(ram, c->r[30] + 0x000000d8u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000ecu);
    mem_w32(ram, c->r[30] + 0x000000dcu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000d0u);
    mem_w32(ram, c->r[30] + 0x000000c0u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000d4u);
    mem_w32(ram, c->r[30] + 0x000000c4u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000d8u);
    mem_w32(ram, c->r[30] + 0x000000c8u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000dcu);
    mem_w32(ram, c->r[30] + 0x000000ccu, c->r[2]);
    c->r[2] = c->r[30] + 0x000001c0u;
    c->r[4] = c->r[2] + 0u;
    c->f[12] = u2f(0u);
    c->f[13] = u2f(0u);
    c->f[14] = u2f(0u);
    c->f[15] = u2f(0u);
    { c->r[31] = 0x0894f338u; func_0880d140(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x000001c0u);
    mem_w32(ram, c->r[30] + 0x00000140u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x000001c4u);
    mem_w32(ram, c->r[30] + 0x00000144u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x000001c8u);
    mem_w32(ram, c->r[30] + 0x00000148u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x000001ccu);
    mem_w32(ram, c->r[30] + 0x0000014cu, c->r[2]);
    c->r[2] = c->r[30] + 0x000001c0u;
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00007bb4u);
    c->r[4] = c->r[2] + 0u;
    c->f[12] = c->f[0];
    c->f[13] = u2f(0u);
    c->f[14] = u2f(0u);
    c->f[15] = u2f(0u);
    { c->r[31] = 0x0894f380u; func_0880d140(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x000001c0u);
    mem_w32(ram, c->r[30] + 0x00000150u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x000001c4u);
    mem_w32(ram, c->r[30] + 0x00000154u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x000001c8u);
    mem_w32(ram, c->r[30] + 0x00000158u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x000001ccu);
    mem_w32(ram, c->r[30] + 0x0000015cu, c->r[2]);
    c->r[2] = c->r[30] + 0x000001c0u;
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00007bb4u);
    c->r[1] = 0x08a40000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0x00007bb4u);
    c->r[4] = c->r[2] + 0u;
    c->f[12] = c->f[0];
    c->f[13] = c->f[1];
    c->f[14] = u2f(0u);
    c->f[15] = u2f(0u);
    { c->r[31] = 0x0894f3d0u; func_0880d140(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x000001c0u);
    mem_w32(ram, c->r[30] + 0x00000160u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x000001c4u);
    mem_w32(ram, c->r[30] + 0x00000164u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x000001c8u);
    mem_w32(ram, c->r[30] + 0x00000168u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x000001ccu);
    mem_w32(ram, c->r[30] + 0x0000016cu, c->r[2]);
    c->r[2] = c->r[30] + 0x000001c0u;
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00007bb4u);
    c->r[4] = c->r[2] + 0u;
    c->f[12] = u2f(0u);
    c->f[13] = c->f[0];
    c->f[14] = u2f(0u);
    c->f[15] = u2f(0u);
    { c->r[31] = 0x0894f418u; func_0880d140(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x000001c0u);
    mem_w32(ram, c->r[30] + 0x00000170u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x000001c4u);
    mem_w32(ram, c->r[30] + 0x00000174u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x000001c8u);
    mem_w32(ram, c->r[30] + 0x00000178u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x000001ccu);
    mem_w32(ram, c->r[30] + 0x0000017cu, c->r[2]);
    c->r[2] = c->r[30] + 0x00000030u;
    c->r[3] = c->r[30] + 0x00000140u;
    c->r[4] = c->r[2] + 0u;
    c->r[5] = c->r[3] + 0u;
    c->r[6] = 0u + 0x00000004u;
    c->r[7] = 0u + 0x0000003fu;
    { c->r[31] = 0x0894f458u; c->r[8] = 0u + 0x00000001u; func_089c42dc(c, ram); }
    mem_w32(ram, c->r[30] + 0x000000b8u, c->r[2]);
    c->r[2] = c->r[30] + 0x00000030u;
    c->r[3] = c->r[30] + 0x000000c0u;
    c->r[8] = c->r[30] + 0x00000140u;
    c->r[4] = 0x08a70000u;
    c->r[4] = c->r[4] + 0xffffb640u;
    c->r[5] = mem_r32(ram, c->r[30] + 0x000000b8u);
    c->r[6] = c->r[2] + 0u;
    c->r[7] = c->r[3] + 0u;
    { c->r[31] = 0x0894f484u; c->r[9] = 0u + 0x00000001u; func_089ebe90(c, ram); }
    c->r[4] = 0x08a70000u;
    c->r[4] = c->r[4] + 0xffffb640u;
    { c->r[31] = 0x0894f494u; c->r[5] = 0u + 0x00000001u; func_089dff38(c, ram); }
L_0894f494:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000020u, c->r[2]); goto L_0894edc4; }
L_0894f4a4:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x00000040u;
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000000u);
    c->f[0] = u2f(0u);
    alx_c_cond_s(c, 12, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_0894f4cc; }
    { goto L_0894f60c; }
L_0894f4cc:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x00000040u;
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000000u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00007becu);
    alx_c_cond_s(c, 12, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_0894f4f8; }
    { goto L_0894f534; }
L_0894f4f8:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = c->r[2] + 0x00000044u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x00000040u;
    c->r[1] = 0x08a40000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0x00007bb4u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000000u);
    c->f[1] = c->f[1] - c->f[0];
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00007bf0u);
    c->f[1] = c->f[1] / c->f[0];
    c->f[0] = mem_rf32(ram, c->r[3] + 0x00000000u);
    c->f[0] = c->f[0] * c->f[1];
    { mem_wf32(ram, c->r[30] + 0x00000028u, c->f[0]); goto L_0894f554; }
L_0894f534:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = c->r[2] + 0x00000044u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x00000040u;
    c->f[1] = mem_rf32(ram, c->r[3] + 0x00000000u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000000u);
    c->f[0] = c->f[1] * c->f[0];
    mem_wf32(ram, c->r[30] + 0x00000028u, c->f[0]);
L_0894f554:
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000028u);
    c->f[0] = u2f(0u);
    alx_c_cond_s(c, 12, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_0894f574; }
    { goto L_0894f60c; }
L_0894f574:
    c->r[2] = c->r[30] + 0x000001c0u;
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00007bf4u);
    c->r[1] = 0x08a40000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0x00007bf8u);
    c->r[4] = c->r[2] + 0u;
    c->f[12] = u2f(0u);
    c->f[13] = u2f(0u);
    c->f[14] = c->f[0];
    { c->r[31] = 0x0894f5a0u; c->f[15] = c->f[1]; func_0880d140(c, ram); }
    c->r[2] = c->r[30] + 0x00000010u;
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00007bb4u);
    c->r[4] = c->r[2] + 0u;
    c->f[12] = mem_rf32(ram, c->r[30] + 0x00000028u);
    c->f[13] = mem_rf32(ram, c->r[30] + 0x00000028u);
    c->f[14] = mem_rf32(ram, c->r[30] + 0x00000028u);
    { c->r[31] = 0x0894f5c4u; c->f[15] = c->f[0]; func_0880d140(c, ram); }
    c->r[4] = 0x08a70000u;
    c->r[4] = c->r[4] + 0xffffb640u;
    c->r[5] = 0u + 0x00000003u;
    { c->r[31] = 0x0894f5d8u; c->r[6] = 0u + 0x00000006u; func_089df7a0(c, ram); }
    c->r[4] = 0x08a70000u;
    c->r[4] = c->r[4] + 0xffffb640u;
    c->r[5] = 0u + 0x00000200u;
    { c->r[31] = 0x0894f5ecu; c->r[6] = 0u + 0u; func_089e0bd8(c, ram); }
    c->r[2] = c->r[30] + 0x000001c0u;
    c->r[3] = c->r[30] + 0x00000010u;
    c->r[4] = 0x08a70000u;
    c->r[4] = c->r[4] + 0xffffb640u;
    c->r[5] = c->r[2] + 0u;
    c->r[6] = c->r[3] + 0u;
    { c->r[31] = 0x0894f60cu; c->r[7] = 0u + 0u; func_089ec948(c, ram); }
L_0894f60c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x00000048u;
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000000u);
    c->f[0] = u2f(0u);
    alx_c_cond_s(c, 14, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_0894f634; }
    { goto L_0894f710; }
L_0894f634:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000070u;
    { c->r[31] = 0x0894f644u; c->r[4] = c->r[2] + 0u; func_0884bfd0(c, ram); }
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000000u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00007be0u);
    c->f[0] = c->f[1] * c->f[0];
    mem_wf32(ram, c->r[30] + 0x00000028u, c->f[0]);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000028u);
    c->f[0] = u2f(0u);
    alx_c_cond_s(c, 12, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_0894f678; }
    { goto L_0894f710; }
L_0894f678:
    c->r[2] = c->r[30] + 0x000001c0u;
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00007bf4u);
    c->r[1] = 0x08a40000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0x00007bf8u);
    c->r[4] = c->r[2] + 0u;
    c->f[12] = u2f(0u);
    c->f[13] = u2f(0u);
    c->f[14] = c->f[0];
    { c->r[31] = 0x0894f6a4u; c->f[15] = c->f[1]; func_0880d140(c, ram); }
    c->r[2] = c->r[30] + 0x00000010u;
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00007bb4u);
    c->r[4] = c->r[2] + 0u;
    c->f[12] = mem_rf32(ram, c->r[30] + 0x00000028u);
    c->f[13] = mem_rf32(ram, c->r[30] + 0x00000028u);
    c->f[14] = mem_rf32(ram, c->r[30] + 0x00000028u);
    { c->r[31] = 0x0894f6c8u; c->f[15] = c->f[0]; func_0880d140(c, ram); }
    c->r[4] = 0x08a70000u;
    c->r[4] = c->r[4] + 0xffffb640u;
    c->r[5] = 0u + 0x00000003u;
    { c->r[31] = 0x0894f6dcu; c->r[6] = 0u + 0x00000006u; func_089df7a0(c, ram); }
    c->r[4] = 0x08a70000u;
    c->r[4] = c->r[4] + 0xffffb640u;
    c->r[5] = 0u + 0x00000200u;
    { c->r[31] = 0x0894f6f0u; c->r[6] = 0u + 0u; func_089e0bd8(c, ram); }
    c->r[2] = c->r[30] + 0x000001c0u;
    c->r[3] = c->r[30] + 0x00000010u;
    c->r[4] = 0x08a70000u;
    c->r[4] = c->r[4] + 0xffffb640u;
    c->r[5] = c->r[2] + 0u;
    c->r[6] = c->r[3] + 0u;
    { c->r[31] = 0x0894f710u; c->r[7] = 0u + 0u; func_089ec948(c, ram); }
L_0894f710:
    c->r[4] = 0x08a70000u;
    { c->r[31] = 0x0894f71cu; c->r[4] = c->r[4] + 0xffffb640u; func_089f147c(c, ram); }
L_0894f71c:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000208u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000204u);
    c->r[16] = mem_r32(ram, c->r[29] + 0x00000200u);
    c->f[20] = mem_rf32(ram, c->r[29] + 0x00000210u);
    { c->r[29] = c->r[29] + 0x00000220u; return; }
    return; /* fell out of func_0894e6c4 */
}

/* func_0895521c  0x0895521c..0x08955310  244 bytes, source=sweep */
void func_0895521c(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0895521cu);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[6]);
    c->r[6] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[4] = mem_r32(ram, c->r[6] + 0x00000008u);
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x2a000000u;
    c->r[3] = c->r[3] | c->r[2];
    c->r[2] = 0xff000000u;
    mem_w32(ram, c->r[4] + 0x00000000u, c->r[2]);
    mem_w32(ram, c->r[4] + 0x00000004u, c->r[3]);
    c->r[8] = 0x2b000000u;
    c->r[9] = 0x2b000000u;
    c->r[10] = 0x2b000000u;
    c->r[8] = mem_lwr(ram, c->r[5] + 0x00000001u, c->r[8]);
    c->r[9] = mem_lwr(ram, c->r[5] + 0x00000005u, c->r[9]);
    c->r[10] = mem_lwr(ram, c->r[5] + 0x00000009u, c->r[10]);
    mem_w32(ram, c->r[4] + 0x00000008u, c->r[8]);
    mem_w32(ram, c->r[4] + 0x0000000cu, c->r[9]);
    mem_w32(ram, c->r[4] + 0x00000010u, c->r[10]);
    c->r[8] = 0x2b000000u;
    c->r[9] = 0x2b000000u;
    c->r[10] = 0x2b000000u;
    c->r[8] = mem_lwr(ram, c->r[5] + 0x00000011u, c->r[8]);
    c->r[9] = mem_lwr(ram, c->r[5] + 0x00000015u, c->r[9]);
    c->r[10] = mem_lwr(ram, c->r[5] + 0x00000019u, c->r[10]);
    mem_w32(ram, c->r[4] + 0x00000014u, c->r[8]);
    mem_w32(ram, c->r[4] + 0x00000018u, c->r[9]);
    mem_w32(ram, c->r[4] + 0x0000001cu, c->r[10]);
    c->r[8] = 0x2b000000u;
    c->r[9] = 0x2b000000u;
    c->r[10] = 0x2b000000u;
    c->r[8] = mem_lwr(ram, c->r[5] + 0x00000021u, c->r[8]);
    c->r[9] = mem_lwr(ram, c->r[5] + 0x00000025u, c->r[9]);
    c->r[10] = mem_lwr(ram, c->r[5] + 0x00000029u, c->r[10]);
    mem_w32(ram, c->r[4] + 0x00000020u, c->r[8]);
    mem_w32(ram, c->r[4] + 0x00000024u, c->r[9]);
    mem_w32(ram, c->r[4] + 0x00000028u, c->r[10]);
    c->r[8] = 0x2b000000u;
    c->r[9] = 0x2b000000u;
    c->r[10] = 0x2b000000u;
    c->r[8] = mem_lwr(ram, c->r[5] + 0x00000031u, c->r[8]);
    c->r[9] = mem_lwr(ram, c->r[5] + 0x00000035u, c->r[9]);
    c->r[10] = mem_lwr(ram, c->r[5] + 0x00000039u, c->r[10]);
    mem_w32(ram, c->r[4] + 0x0000002cu, c->r[8]);
    mem_w32(ram, c->r[4] + 0x00000030u, c->r[9]);
    mem_w32(ram, c->r[4] + 0x00000034u, c->r[10]);
    c->r[4] = c->r[4] + 0x00000038u;
    mem_w32(ram, c->r[6] + 0x00000008u, c->r[4]);
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_0895521c */
}

/* func_08958084  0x08958084..0x089582a4  544 bytes, source=sweep */
void func_08958084(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08958084u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[6]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = (c->r[2] < 0x00000016u) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_08958290; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08a40000u;
    c->r[2] = c->r[2] + 0x00007fb4u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    { u32 _t = c->r[2]; switch (_t) { case 0x089580d0u: goto L_089580d0; case 0x089580e4u: goto L_089580e4; case 0x089580f8u: goto L_089580f8; case 0x0895810cu: goto L_0895810c; case 0x08958120u: goto L_08958120; case 0x08958134u: goto L_08958134; case 0x08958148u: goto L_08958148; case 0x0895815cu: goto L_0895815c; case 0x08958170u: goto L_08958170; case 0x08958184u: goto L_08958184; case 0x08958198u: goto L_08958198; case 0x089581acu: goto L_089581ac; case 0x089581c0u: goto L_089581c0; case 0x089581d4u: goto L_089581d4; case 0x089581ecu: goto L_089581ec; case 0x08958204u: goto L_08958204; case 0x0895821cu: goto L_0895821c; case 0x08958234u: goto L_08958234; case 0x08958248u: goto L_08958248; case 0x0895825cu: goto L_0895825c; case 0x08958270u: goto L_08958270; case 0x08958284u: goto L_08958284; default: recomp_trap_unknown_indirect(c, ram, 0x089580c8u, _t); return; } }
L_089580d0:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x089580dcu; c->r[5] = mem_r32(ram, c->r[30] + 0x00000008u); func_089582a4(c, ram); }
    { goto L_08958290; }
L_089580e4:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x089580f0u; c->r[5] = mem_r32(ram, c->r[30] + 0x00000008u); func_089582e8(c, ram); }
    { goto L_08958290; }
L_089580f8:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x08958104u; c->r[5] = mem_r32(ram, c->r[30] + 0x00000008u); func_08958734(c, ram); }
    { goto L_08958290; }
L_0895810c:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x08958118u; c->r[5] = mem_r32(ram, c->r[30] + 0x00000008u); func_0895832c(c, ram); }
    { goto L_08958290; }
L_08958120:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x0895812cu; c->r[5] = mem_r32(ram, c->r[30] + 0x00000008u); func_08958370(c, ram); }
    { goto L_08958290; }
L_08958134:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x08958140u; c->r[5] = mem_r32(ram, c->r[30] + 0x00000008u); func_089583b4(c, ram); }
    { goto L_08958290; }
L_08958148:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x08958154u; c->r[5] = mem_r32(ram, c->r[30] + 0x00000008u); func_089583f8(c, ram); }
    { goto L_08958290; }
L_0895815c:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x08958168u; c->r[5] = mem_r32(ram, c->r[30] + 0x00000008u); func_0895843c(c, ram); }
    { goto L_08958290; }
L_08958170:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x0895817cu; c->r[5] = mem_r32(ram, c->r[30] + 0x00000008u); func_08958480(c, ram); }
    { goto L_08958290; }
L_08958184:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x08958190u; c->r[5] = mem_r32(ram, c->r[30] + 0x00000008u); func_089584c4(c, ram); }
    { goto L_08958290; }
L_08958198:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x089581a4u; c->r[5] = mem_r32(ram, c->r[30] + 0x00000008u); func_08958508(c, ram); }
    { goto L_08958290; }
L_089581ac:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x089581b8u; c->r[5] = mem_r32(ram, c->r[30] + 0x00000008u); func_0895854c(c, ram); }
    { goto L_08958290; }
L_089581c0:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x089581ccu; c->r[5] = mem_r32(ram, c->r[30] + 0x00000008u); func_08958590(c, ram); }
    { goto L_08958290; }
L_089581d4:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = 0u + 0u;
    { c->r[31] = 0x089581e4u; c->r[6] = mem_r32(ram, c->r[30] + 0x00000008u); func_089585d4(c, ram); }
    { goto L_08958290; }
L_089581ec:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = 0u + 0x00000001u;
    { c->r[31] = 0x089581fcu; c->r[6] = mem_r32(ram, c->r[30] + 0x00000008u); func_089585d4(c, ram); }
    { goto L_08958290; }
L_08958204:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = 0u + 0x00000002u;
    { c->r[31] = 0x08958214u; c->r[6] = mem_r32(ram, c->r[30] + 0x00000008u); func_089585d4(c, ram); }
    { goto L_08958290; }
L_0895821c:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = 0u + 0x00000003u;
    { c->r[31] = 0x0895822cu; c->r[6] = mem_r32(ram, c->r[30] + 0x00000008u); func_089585d4(c, ram); }
    { goto L_08958290; }
L_08958234:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x08958240u; c->r[5] = mem_r32(ram, c->r[30] + 0x00000008u); func_08958624(c, ram); }
    { goto L_08958290; }
L_08958248:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x08958254u; c->r[5] = mem_r32(ram, c->r[30] + 0x00000008u); func_08958668(c, ram); }
    { goto L_08958290; }
L_0895825c:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x08958268u; c->r[5] = mem_r32(ram, c->r[30] + 0x00000008u); func_089586ac(c, ram); }
    { goto L_08958290; }
L_08958270:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x0895827cu; c->r[5] = mem_r32(ram, c->r[30] + 0x00000008u); func_089586f0(c, ram); }
    { goto L_08958290; }
L_08958284:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x08958290u; c->r[5] = mem_r32(ram, c->r[30] + 0x00000008u); func_089587e0(c, ram); }
L_08958290:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_08958084 */
}

/* func_0895a6b4  0x0895a6b4..0x0895a790  220 bytes, source=sweep */
void func_0895a6b4(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0895a6b4u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[6]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
    c->r[2] = 0u + 0x00000001u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_0895a748; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = ((s32)c->r[3] < (s32)0x00000002u) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_0895a70c; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    { int _c = (c->r[2] == 0u); if (_c) goto L_0895a734; }
    { goto L_0895a77c; }
L_0895a70c:
    c->r[2] = 0u + 0x00000002u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_0895a75c; }
    c->r[2] = 0u + 0x00000003u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_0895a770; }
    { goto L_0895a77c; }
L_0895a734:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x0895a740u; c->r[5] = mem_r32(ram, c->r[30] + 0x00000008u); func_0895a864(c, ram); }
    { goto L_0895a77c; }
L_0895a748:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x0895a754u; c->r[5] = mem_r32(ram, c->r[30] + 0x00000008u); func_0895a964(c, ram); }
    { goto L_0895a77c; }
L_0895a75c:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x0895a768u; c->r[5] = mem_r32(ram, c->r[30] + 0x00000008u); func_0895aa34(c, ram); }
    { goto L_0895a77c; }
L_0895a770:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x0895a77cu; c->r[5] = mem_r32(ram, c->r[30] + 0x00000008u); func_0895ab04(c, ram); }
L_0895a77c:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_0895a6b4 */
}

/* func_0895c1d4  0x0895c1d4..0x0895c21c  72 bytes, source=fde */
void func_0895c1d4(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0895c1d4u);
    c->r[29] = c->r[29] + 0xfffffff0u;
    mem_w32(ram, c->r[29] + 0x00000004u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000000u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    { c->r[31] = 0x0895c1ecu; func_08966e98(c, ram); }
    { c->r[31] = 0x0895c1f4u; c->r[4] = 0u + 0x00000001u; func_0895c098(c, ram); }
    { c->r[31] = 0x0895c1fcu; c->r[4] = 0u + 0x00000001u; func_08966cbc(c, ram); }
    c->r[2] = 0u + 0x00000001u;
    c->r[1] = 0x08aa0000u;
    mem_w32(ram, c->r[1] + 0x000051f0u, c->r[2]);
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000004u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000000u);
    { c->r[29] = c->r[29] + 0x00000010u; return; }
    return; /* fell out of func_0895c1d4 */
}

/* func_089607b0  0x089607b0..0x08960928  376 bytes, source=fde */
void func_089607b0(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089607b0u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = c->r[2] << 3;
    c->r[2] = 0x08aa0000u;
    c->r[2] = c->r[2] + 0x000049dcu;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[4] = c->r[2] + 0x00000020u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = c->r[2] << 3;
    c->r[2] = 0x08aa0000u;
    c->r[2] = c->r[2] + 0x000049dcu;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[3] = c->r[2] + 0x00000020u;
    c->r[2] = mem_r32(ram, c->r[3] + 0x00000000u);
    mem_w32(ram, c->r[4] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[3] + 0x00000004u);
    mem_w32(ram, c->r[4] + 0x00000004u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[3] + 0x00000008u);
    mem_w32(ram, c->r[4] + 0x00000008u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[3] + 0x0000000cu);
    mem_w32(ram, c->r[4] + 0x0000000cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = c->r[2] << 3;
    c->r[2] = 0x08aa0000u;
    c->r[2] = c->r[2] + 0x000049dcu;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[4] = c->r[2] + 0x00000030u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = c->r[2] << 3;
    c->r[2] = 0x08aa0000u;
    c->r[2] = c->r[2] + 0x000049dcu;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[3] = c->r[2] + 0x00000030u;
    c->r[2] = mem_r32(ram, c->r[3] + 0x00000000u);
    mem_w32(ram, c->r[4] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[3] + 0x00000004u);
    mem_w32(ram, c->r[4] + 0x00000004u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[3] + 0x00000008u);
    mem_w32(ram, c->r[4] + 0x00000008u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[3] + 0x0000000cu);
    mem_w32(ram, c->r[4] + 0x0000000cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = c->r[2] << 3;
    c->r[2] = 0x08aa0000u;
    c->r[2] = c->r[2] + 0x000049dcu;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[4] = c->r[2] + 0x00000040u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = c->r[2] << 3;
    c->r[2] = 0x08aa0000u;
    c->r[2] = c->r[2] + 0x000049dcu;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
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
    c->r[3] = c->r[2] << 3;
    c->r[2] = 0x08aa0000u;
    c->r[2] = c->r[2] + 0x000049e0u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_0896090c; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = c->r[2] << 3;
    c->r[2] = 0x08aa0000u;
    c->r[2] = c->r[2] + 0x000049e0u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    mem_w8(ram, c->r[2] + 0x0000009au, 0u);
L_0896090c:
    { c->r[31] = 0x08960914u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000004u); func_088d68a0(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_089607b0 */
}

/* func_08962c7c  0x08962c7c..0x08962e1c  416 bytes, source=fde */
void func_08962c7c(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08962c7cu);
    c->r[29] = c->r[29] + 0xffffffd0u;
    mem_w32(ram, c->r[29] + 0x00000024u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000020u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    mem_wf32(ram, c->r[30] + 0x00000008u, c->f[12]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_08962cb8; }
    c->r[2] = 0x08a80000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00002ed8u);
    c->r[2] = c->r[2] + 0x00000020u;
    { mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]); goto L_08962d44; }
L_08962cb8:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = c->r[2] << 3;
    c->r[2] = 0x08aa0000u;
    c->r[2] = c->r[2] + 0x000049dcu;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_08962ce0; }
    { mem_w32(ram, c->r[30] + 0x00000014u, 0u); goto L_08962e04; }
L_08962ce0:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = c->r[2] << 3;
    c->r[2] = 0x08aa0000u;
    c->r[2] = c->r[2] + 0x000049dcu;
    c->r[4] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = c->r[2] << 3;
    c->r[2] = 0x08aa0000u;
    c->r[2] = c->r[2] + 0x000049e0u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[4] = mem_r32(ram, c->r[4] + 0x00000000u);
    { c->r[31] = 0x08962d14u; c->r[5] = mem_r32(ram, c->r[2] + 0x00000000u); func_088d6ab8(c, ram); }
    { int _c = (c->r[2] == 0u); if (_c) goto L_08962d24; }
    { mem_w32(ram, c->r[30] + 0x00000014u, 0u); goto L_08962e04; }
L_08962d24:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = c->r[2] << 3;
    c->r[2] = 0x08aa0000u;
    c->r[2] = c->r[2] + 0x000049dcu;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000020u;
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
L_08962d44:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_08962d64; }
    c->r[2] = 0x08a80000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00002ed8u);
    c->r[2] = c->r[2] + 0x00000020u;
    { mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]); goto L_08962df0; }
L_08962d64:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = c->r[2] << 3;
    c->r[2] = 0x08aa0000u;
    c->r[2] = c->r[2] + 0x000049dcu;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_08962d8c; }
    { mem_w32(ram, c->r[30] + 0x00000014u, 0u); goto L_08962e04; }
L_08962d8c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = c->r[2] << 3;
    c->r[2] = 0x08aa0000u;
    c->r[2] = c->r[2] + 0x000049dcu;
    c->r[4] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = c->r[2] << 3;
    c->r[2] = 0x08aa0000u;
    c->r[2] = c->r[2] + 0x000049e0u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[4] = mem_r32(ram, c->r[4] + 0x00000000u);
    { c->r[31] = 0x08962dc0u; c->r[5] = mem_r32(ram, c->r[2] + 0x00000000u); func_088d6ab8(c, ram); }
    { int _c = (c->r[2] == 0u); if (_c) goto L_08962dd0; }
    { mem_w32(ram, c->r[30] + 0x00000014u, 0u); goto L_08962e04; }
L_08962dd0:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = c->r[2] << 3;
    c->r[2] = 0x08aa0000u;
    c->r[2] = c->r[2] + 0x000049dcu;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000020u;
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]);
L_08962df0:
    c->r[4] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000010u);
    { c->r[31] = 0x08962e00u; c->f[12] = mem_rf32(ram, c->r[30] + 0x00000008u); func_088ef73c(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
L_08962e04:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000024u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000020u);
    { c->r[29] = c->r[29] + 0x00000030u; return; }
    return; /* fell out of func_08962c7c */
}

/* func_08965830  0x08965830..0x0896586c  60 bytes, source=sweep */
void func_08965830(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08965830u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r16(ram, c->r[2] + 0x0000011eu);
    c->r[2] = mem_r16(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[3] + c->r[2];
    mem_w16(ram, c->r[4] + 0x0000011eu, c->r[2]);
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_08965830 */
}

/* func_08968f28  0x08968f28..0x08968fac  132 bytes, source=sweep */
void func_08968f28(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08968f28u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, 0u);
L_08968f3c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = ((s32)c->r[2] < (s32)0x0000001fu) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_08968f54; }
    { goto L_08968f94; }
L_08968f54:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = c->r[2] << 4;
    c->r[2] = 0x08a60000u;
    c->r[2] = c->r[2] + 0xffff986cu;
    c->r[2] = c->r[3] + c->r[2];
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    { int _c = (c->r[2] != c->r[3]); if (_c) goto L_08968f84; }
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[30] + 0x00000004u);
    { mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]); goto L_08968f98; }
L_08968f84:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000004u, c->r[2]); goto L_08968f3c; }
L_08968f94:
    mem_w32(ram, c->r[30] + 0x00000008u, 0u);
L_08968f98:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_08968f28 */
}

/* func_08969e60  0x08969e60..0x08969f78  280 bytes, source=sweep */
void func_08969e60(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08969e60u);
    c->r[29] = c->r[29] + 0xffffffd0u;
    mem_w32(ram, c->r[29] + 0x00000020u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    c->r[2] = 0u + 0xffffffffu;
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = 0u + 0x00000001u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_08969e90; }
    mem_w32(ram, c->r[30] + 0x0000000cu, 0u);
L_08969e90:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = 0u + 0x00000003u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_08969ea8; }
    c->r[2] = 0u + 0x00000001u;
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
L_08969ea8:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = 0u + 0x00000005u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_08969ec0; }
    c->r[2] = 0u + 0x00000002u;
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
L_08969ec0:
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0u + 0xffffffffu;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_08969ed8; }
    { mem_w32(ram, c->r[30] + 0x00000010u, 0u); goto L_08969f64; }
L_08969ed8:
    mem_w32(ram, c->r[30] + 0x00000008u, 0u);
L_08969edc:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000004u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_08969ef4; }
    { goto L_08969f58; }
L_08969ef4:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[3] = c->r[2] << 2;
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[3] + c->r[2];
    c->r[3] = c->r[2] << 1;
    c->r[2] = 0x08a60000u;
    c->r[2] = c->r[2] + 0xffff9ca0u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[3] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = ((s32)c->r[3] < (s32)c->r[2]) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_08969f48; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[3] = c->r[2] << 3;
    c->r[2] = 0x08a60000u;
    c->r[2] = c->r[2] + 0xffff9ca0u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x00000006u);
    { mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]); goto L_08969f64; }
L_08969f48:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]); goto L_08969edc; }
L_08969f58:
    c->r[2] = 0x08a60000u;
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0xffff9cc6u);
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]);
L_08969f64:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000020u);
    { c->r[29] = c->r[29] + 0x00000030u; return; }
    return; /* fell out of func_08969e60 */
}

/* func_0896b638  0x0896b638..0x0896ba30  1016 bytes, source=fde */
void func_0896b638(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0896b638u);
L_0896b638:
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
    c->r[3] = mem_r8(ram, c->r[30] + 0x00000004u);
    c->r[2] = 0u + 0x00000001u;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_0896b67c; }
    { goto L_0896ba18; }
L_0896b67c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r8(ram, c->r[2] + 0x0000000eu);
    mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = (c->r[3] < 0x0000002cu) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_0896ba18; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08a50000u;
    c->r[2] = c->r[2] + 0xffff85e0u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    { u32 _t = c->r[2]; switch (_t) { case 0x0896b638u: goto L_0896b638; case 0x0896b6b8u: goto L_0896b6b8; case 0x0896b718u: goto L_0896b718; case 0x0896b7a0u: goto L_0896b7a0; case 0x0896b8a4u: goto L_0896b8a4; case 0x0896b9a8u: goto L_0896b9a8; case 0x0896b9e4u: goto L_0896b9e4; case 0x0896ba18u: goto L_0896ba18; default: recomp_trap_unknown_indirect(c, ram, 0x0896b6b0u, _t); return; } }
L_0896b6b8:
    { c->r[31] = 0x0896b6c0u; c->r[4] = mem_r32(ram, c->r[30] + 0x0000000cu); func_0896e3a0(c, ram); }
    { c->r[31] = 0x0896b6c8u; hle_dispatch_stub(c, ram, 0x08a2483cu); /* sceKernelGetSystemTimeLow */ }
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]);
    { c->r[31] = 0x0896b6d4u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000010u); func_08a1a510(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    mem_w8(ram, c->r[2] + 0x00000011u, 0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    mem_w8(ram, c->r[2] + 0x00000010u, 0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    mem_w32(ram, c->r[2] + 0x00000004u, 0u);
    c->r[4] = 0x08aa0000u;
    c->r[4] = c->r[4] + 0x00006854u;
    c->r[5] = 0u + 0u;
    { c->r[31] = 0x0896b700u; c->r[6] = 0u + 0x00000004u; func_08a19ec4(c, ram); }
    { c->r[31] = 0x0896b708u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u); func_0896ec90(c, ram); }
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0u + 0x00000012u;
    { mem_w8(ram, c->r[3] + 0x0000000eu, c->r[2]); goto L_0896ba18; }
L_0896b718:
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0u + 0x00000001u;
    mem_w8(ram, c->r[3] + 0x00000011u, c->r[2]);
    { c->r[31] = 0x0896b72cu; c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u); func_0896c2e4(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    { int _c = ((s32)c->r[2] >= 0); if (_c) goto L_0896b770; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x00000028u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    { c->r[31] = 0x0896b750u; c->r[4] = c->r[2] + 0u; func_0896e7c0(c, ram); }
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    mem_w32(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x0896b768u; c->r[5] = 0u + 0x00000033u; func_0896a7b8(c, ram); }
    { goto L_0896ba18; }
L_0896b770:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    { int _c = ((s32)c->r[2] <= 0); if (_c) goto L_0896b790; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    mem_w32(ram, c->r[2] + 0x00000004u, 0u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0u + 0x00000013u;
    mem_w8(ram, c->r[3] + 0x0000000eu, c->r[2]);
L_0896b790:
    { c->r[31] = 0x0896b798u; c->r[4] = mem_r32(ram, c->r[30] + 0x0000000cu); func_0896e2f8(c, ram); }
    { goto L_0896ba18; }
L_0896b7a0:
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0u + 0x00000002u;
    { c->r[31] = 0x0896b7b0u; mem_w8(ram, c->r[3] + 0x00000011u, c->r[2]); func_0896a3c0(c, ram); }
    c->r[2] = c->r[2] + 0x00000094u;
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x0896b7c0u; c->r[5] = c->r[2] + 0u; func_0896c1e0(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    { int _c = ((s32)c->r[2] >= 0); if (_c) goto L_0896b804; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x00000028u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    { c->r[31] = 0x0896b7e4u; c->r[4] = c->r[2] + 0u; func_0896e7c0(c, ram); }
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    mem_w32(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x0896b7fcu; c->r[5] = 0u + 0x00000033u; func_0896a7b8(c, ram); }
    { goto L_0896ba18; }
L_0896b804:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    { int _c = ((s32)c->r[2] <= 0); if (_c) goto L_0896b894; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    { c->r[31] = 0x0896b81cu; mem_w32(ram, c->r[2] + 0x00000004u, 0u); func_0896a284(c, ram); }
    { c->r[31] = 0x0896b824u; c->r[4] = c->r[2] + 0u; func_0896c408(c, ram); }
    { c->r[31] = 0x0896b82cu; func_0896a284(c, ram); }
    { c->r[31] = 0x0896b834u; c->r[4] = c->r[2] + 0u; func_0896c488(c, ram); }
    { c->r[31] = 0x0896b83cu; func_0896a284(c, ram); }
    { c->r[31] = 0x0896b844u; c->r[4] = c->r[2] + 0u; func_0896e668(c, ram); }
    { c->r[31] = 0x0896b84cu; func_0896a284(c, ram); }
    { c->r[31] = 0x0896b854u; c->r[4] = c->r[2] + 0u; func_0896e69c(c, ram); }
    { c->r[31] = 0x0896b85cu; func_0896a284(c, ram); }
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0u + 0x00000001u;
    c->r[6] = 0u + 0x00000080u;
    c->r[7] = 0u + 0u;
    { c->r[31] = 0x0896b874u; c->r[8] = 0u + 0u; func_0896cc50(c, ram); }
    { c->r[31] = 0x0896b87cu; func_0896a284(c, ram); }
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x0896b888u; c->r[5] = 0u + 0x0000012cu; func_0896ccf0(c, ram); }
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0u + 0x00000014u;
    mem_w8(ram, c->r[3] + 0x0000000eu, c->r[2]);
L_0896b894:
    { c->r[31] = 0x0896b89cu; c->r[4] = mem_r32(ram, c->r[30] + 0x0000000cu); func_0896e2f8(c, ram); }
    { goto L_0896ba18; }
L_0896b8a4:
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0u + 0x00000003u;
    { c->r[31] = 0x0896b8b4u; mem_w8(ram, c->r[3] + 0x00000011u, c->r[2]); func_0896a284(c, ram); }
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0u + 0x00000001u;
    c->r[6] = 0u + 0x00000080u;
    { c->r[31] = 0x0896b8c8u; c->r[7] = 0u + 0x000000ffu; func_0896ce9c(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
    c->r[2] = 0u + 0xffffffffu;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000014u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_0896b8fc; }
    c->r[2] = 0u + 0x00000001u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000014u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_0896b950; }
    { goto L_0896b998; }
L_0896b8fc:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x00000028u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    { c->r[31] = 0x0896b910u; c->r[4] = c->r[2] + 0u; func_0896e7c0(c, ram); }
    { c->r[31] = 0x0896b918u; func_0896a284(c, ram); }
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0u + 0x00000001u;
    c->r[6] = 0u + 0x00000004u;
    c->r[7] = 0u + 0u;
    { c->r[31] = 0x0896b930u; c->r[8] = 0u + 0u; func_0896cc50(c, ram); }
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0u + 0x00000002u;
    mem_w32(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x0896b948u; c->r[5] = 0u + 0x00000033u; func_0896a7b8(c, ram); }
    { goto L_0896b998; }
L_0896b950:
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0u + 0x00000004u;
    { c->r[31] = 0x0896b960u; mem_w32(ram, c->r[3] + 0x00000004u, c->r[2]); func_0896a284(c, ram); }
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0u + 0x00000001u;
    c->r[6] = 0u + 0x00000003u;
    c->r[7] = 0u + 0x00000001u;
    { c->r[31] = 0x0896b978u; c->r[8] = 0u + 0u; func_0896cc50(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x00000028u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    { c->r[31] = 0x0896b98cu; c->r[4] = c->r[2] + 0u; func_0896e7c0(c, ram); }
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0u + 0x00000015u;
    mem_w8(ram, c->r[3] + 0x0000000eu, c->r[2]);
L_0896b998:
    { c->r[31] = 0x0896b9a0u; c->r[4] = mem_r32(ram, c->r[30] + 0x0000000cu); func_0896e2f8(c, ram); }
    { goto L_0896ba18; }
L_0896b9a8:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000004u);
    { int _c = ((s32)c->r[2] > 0); if (_c) goto L_0896b9cc; }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x0896b9c4u; c->r[5] = 0u + 0x00000008u; func_0896a7b8(c, ram); }
    { goto L_0896ba18; }
L_0896b9cc:
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000004u);
    c->r[2] = c->r[2] + 0xffffffffu;
    { mem_w32(ram, c->r[3] + 0x00000004u, c->r[2]); goto L_0896ba18; }
L_0896b9e4:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x00000028u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000ac8u;
    { c->r[31] = 0x0896ba00u; c->r[5] = c->r[2] + 0u; func_089cb820(c, ram); }
    { int _c = (c->r[2] == 0u); if (_c) goto L_0896ba10; }
    { goto L_0896ba18; }
L_0896ba10:
    { c->r[31] = 0x0896ba18u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u); func_0896a824(c, ram); }
L_0896ba18:
    c->r[2] = 0u + 0u;
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000024u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000020u);
    { c->r[29] = c->r[29] + 0x00000030u; return; }
    return; /* fell out of func_0896b638 */
}

/* func_0896df68  0x0896df68..0x0896df9c  52 bytes, source=sweep */
void func_0896df68(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0896df68u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[2] = c->r[5] + 0u;
    mem_w8(ram, c->r[30] + 0x00000004u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r8(ram, c->r[30] + 0x00000004u);
    mem_w8(ram, c->r[3] + 0x00000141u, c->r[2]);
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_0896df68 */
}

/* func_0896ee58  0x0896ee58..0x0896eef8  160 bytes, source=sweep */
void func_0896ee58(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0896ee58u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, 0u);
    c->r[2] = 0u + 0x00000001u;
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]);
L_0896ee74:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000015u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_0896ee8c; }
    { goto L_0896eee4; }
L_0896ee8c:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08a60000u;
    c->r[2] = c->r[2] + 0xffff9dd4u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[2] = (c->r[3] < c->r[2]) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_0896eec8; }
    { goto L_0896eee4; }
L_0896eec8:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[2] + 0x00000001u;
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]); goto L_0896ee74; }
L_0896eee4:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_0896ee58 */
}

/* func_0896fd58  0x0896fd58..0x0896fdd0  120 bytes, source=fde */
void func_0896fd58(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0896fd58u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    { c->r[31] = 0x0896fd74u; mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]); func_0896a3c0(c, ram); }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[2] = ((s32)c->r[3] < (s32)c->r[2]) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_0896fdbc; }
    { c->r[31] = 0x0896fd90u; func_0896a3e4(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    { int _c = (c->r[2] == c->r[3]); if (_c) goto L_0896fdbc; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08aa0000u;
    c->r[2] = c->r[2] + 0x000068ccu;
    c->r[3] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    mem_w32(ram, c->r[3] + 0x00000000u, c->r[2]);
L_0896fdbc:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_0896fd58 */
}

/* func_089737f8  0x089737f8..0x089738a4  172 bytes, source=fde */
void func_089737f8(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089737f8u);
    c->r[29] = c->r[29] + 0xffffffd0u;
    mem_w32(ram, c->r[29] + 0x00000024u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000020u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[6]);
    c->r[3] = 0u + 0x00000096u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[3] = c->r[3] - c->r[2];
    c->r[2] = 0x88880000u;
    c->r[2] = c->r[2] | 0x8889u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[2] = c->hi;
    c->r[2] = c->r[2] + c->r[3];
    c->r[4] = (u32)((s32)c->r[2] >> 4);
    c->r[2] = (u32)((s32)c->r[3] >> 31);
    c->r[2] = c->r[4] - c->r[2];
    c->r[2] = c->r[2] + 0x00000001u;
    { c->r[31] = 0x0897384cu; mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]); func_0896a3e4(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = 0u + 0x00000073u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[2] = c->lo;
    c->r[2] = c->r[2] + 0x00000063u;
    mem_w16(ram, c->r[30] + 0x00000010u, c->r[2]);
    c->r[2] = 0u + 0x0000004cu;
    mem_w16(ram, c->r[30] + 0x00000012u, c->r[2]);
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[30] + 0x00000010u);
    c->r[3] = (u32)(s32)(s16)mem_r16(ram, c->r[30] + 0x00000012u);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[6] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[7] = c->r[2] + 0u;
    c->r[8] = c->r[3] + 0u;
    { c->r[31] = 0x08973890u; c->r[9] = 0u + 0u; func_089736e0(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000024u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000020u);
    { c->r[29] = c->r[29] + 0x00000030u; return; }
    return; /* fell out of func_089737f8 */
}

/* func_08975a68  0x08975a68..0x08975a98  48 bytes, source=sweep */
void func_08975a68(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08975a68u);
    c->r[29] = c->r[29] + 0xffffffd0u;
    mem_w32(ram, c->r[29] + 0x00000020u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[6]);
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[7]);
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[8]);
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000020u);
    { c->r[29] = c->r[29] + 0x00000030u; return; }
    return; /* fell out of func_08975a68 */
}

/* func_089791c0  0x089791c0..0x08979268  168 bytes, source=fde */
void func_089791c0(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089791c0u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x000000e0u);
    { int _c = ((s32)c->r[2] <= 0); if (_c) goto L_08979254; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x000000e0u);
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[3];
    c->r[2] = c->r[2] + 0x000000bcu;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_08979254; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x000000e0u);
    c->r[2] = c->r[2] + 0xffffffffu;
    mem_w32(ram, c->r[3] + 0x000000e0u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x000000e0u);
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[3];
    c->r[2] = c->r[2] + 0x000000c0u;
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = mem_r32(ram, c->r[2] + 0x00000000u);
    { c->r[31] = 0x08979244u; c->r[6] = 0u + 0x000000c0u; func_08a19db8(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    mem_w32(ram, c->r[2] + 0x000000e8u, 0u);
    { c->r[31] = 0x08979254u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u); func_08978db4(c, ram); }
L_08979254:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_089791c0 */
}

/* func_08980ea4  0x08980ea4..0x08980edc  56 bytes, source=sweep */
void func_08980ea4(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08980ea4u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = 0u + 0x00000005u;
    mem_w8(ram, c->r[3] + 0x00000001u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = 0u + 0xffffffffu;
    mem_w8(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_08980ea4 */
}

/* func_08987d88  0x08987d88..0x08989238  5296 bytes, source=fde */
void func_08987d88(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08987d88u);
L_08987d88:
    c->r[29] = c->r[29] + 0xffffffb0u;
    mem_w32(ram, c->r[29] + 0x00000048u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000044u, c->r[30]);
    mem_w32(ram, c->r[29] + 0x00000040u, c->r[16]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[2] = c->r[5] + 0u;
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[6]);
    mem_w8(ram, c->r[30] + 0x00000004u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x000000e0u;
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
    c->r[2] = mem_r8(ram, c->r[30] + 0x00000004u);
    mem_w32(ram, c->r[30] + 0x0000003cu, c->r[2]);
    c->r[2] = 0u + 0x00000019u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000003cu);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_08988f84; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000003cu);
    c->r[2] = ((s32)c->r[3] < (s32)0x0000001au) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_08987df8; }
    c->r[2] = 0u + 0x00000001u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000003cu);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_08987e10; }
    { goto L_0898921c; }
L_08987df8:
    c->r[2] = 0u + 0x00000020u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000003cu);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_089891c4; }
    { goto L_0898921c; }
L_08987e10:
    { c->r[31] = 0x08987e18u; func_08986994(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = 0u + 0xffffffffu;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_08987f2c; }
    { c->r[31] = 0x08987e34u; func_08973e38(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000014u, 0u);
L_08987e38:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000006u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_08987e50; }
    { goto L_08987ea4; }
L_08987e50:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[3] = c->r[2] << 2;
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = c->r[2] + 0x00000014u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000ac8u;
    { c->r[31] = 0x08987e78u; c->r[5] = c->r[2] + 0u; func_089cb820(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_08987e94; }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000018u);
    { c->r[31] = 0x08987e94u; c->r[5] = 0u + 0x00000002u; func_0880d260(c, ram); }
L_08987e94:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]); goto L_08987e38; }
L_08987ea4:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x0000002cu;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000ac8u;
    { c->r[31] = 0x08987ec0u; c->r[5] = c->r[2] + 0u; func_089cb820(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_08987edc; }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000018u);
    { c->r[31] = 0x08987edcu; c->r[5] = 0u + 0x00000002u; func_0880d260(c, ram); }
L_08987edc:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x00000030u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000ac8u;
    { c->r[31] = 0x08987ef8u; c->r[5] = c->r[2] + 0u; func_089cb820(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_08987f14; }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000014u);
    { c->r[31] = 0x08987f14u; c->r[5] = 0u + 0x00000002u; func_0880d260(c, ram); }
L_08987f14:
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0u + 0x00000003u;
    mem_w32(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x08987f2cu; c->r[5] = 0u + 0x00000033u; func_0896a7b8(c, ram); }
L_08987f2c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r8(ram, c->r[2] + 0x0000000eu);
    mem_w32(ram, c->r[30] + 0x00000034u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000034u);
    c->r[2] = (c->r[3] < 0x0000002cu) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_08988f48; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000034u);
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08a50000u;
    c->r[2] = c->r[2] + 0xffff95e8u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    { u32 _t = c->r[2]; switch (_t) { case 0x08987d88u: goto L_08987d88; case 0x08987f68u: goto L_08987f68; case 0x08988000u: goto L_08988000; case 0x08988020u: goto L_08988020; case 0x08988578u: goto L_08988578; case 0x089888f4u: goto L_089888f4; case 0x08988a9cu: goto L_08988a9c; case 0x08988b94u: goto L_08988b94; case 0x08988c20u: goto L_08988c20; case 0x08988d74u: goto L_08988d74; case 0x08988e8cu: goto L_08988e8c; case 0x08988ed8u: goto L_08988ed8; case 0x08988f28u: goto L_08988f28; case 0x08988f48u: goto L_08988f48; case 0x08988fc0u: goto L_08988fc0; case 0x08989078u: goto L_08989078; case 0x089890e4u: goto L_089890e4; case 0x08989134u: goto L_08989134; case 0x08989184u: goto L_08989184; case 0x0898921cu: goto L_0898921c; default: recomp_trap_unknown_indirect(c, ram, 0x08987f60u, _t); return; } }
L_08987f68:
    { c->r[31] = 0x08987f70u; c->r[4] = mem_r32(ram, c->r[30] + 0x0000000cu); func_0896e3dc(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_08987f94; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000045u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_08987f94; }
    { c->r[31] = 0x08987f94u; func_08986390(c, ram); }
L_08987f94:
    { c->r[31] = 0x08987f9cu; func_089863bc(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    mem_w8(ram, c->r[2] + 0x00000040u, 0u);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = 0x08ab0000u;
    { c->r[31] = 0x08987fb4u; c->r[5] = c->r[5] + 0xffff9270u; func_08973bdc(c, ram); }
    { c->r[31] = 0x08987fbcu; func_0896a3e4(c, ram); }
    c->r[1] = 0x08ab0000u;
    mem_w8(ram, c->r[1] + 0xffff929cu, c->r[2]);
    c->r[1] = 0x08ab0000u;
    mem_w8(ram, c->r[1] + 0xffff929du, 0u);
    c->r[2] = 0u + 0xffffffffu;
    c->r[1] = 0x08ab0000u;
    mem_w8(ram, c->r[1] + 0xffff929eu, c->r[2]);
    c->r[1] = 0x08ab0000u;
    { c->r[31] = 0x08987fe4u; mem_w16(ram, c->r[1] + 0xffff92a0u, 0u); func_0896a284(c, ram); }
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x08987ff0u; c->r[5] = 0u + 0xffffffffu; func_0896ccf0(c, ram); }
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0u + 0x00000012u;
    { mem_w8(ram, c->r[3] + 0x0000000eu, c->r[2]); goto L_08988f48; }
L_08988000:
    { c->r[31] = 0x08988008u; func_08973f28(c, ram); }
    { int _c = (c->r[2] == 0u); if (_c) goto L_08988f48; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0u + 0x00000002u;
    { mem_w8(ram, c->r[3] + 0x0000000eu, c->r[2]); goto L_08988f48; }
L_08988020:
    { c->r[31] = 0x08988028u; func_0896a3e4(c, ram); }
    c->r[1] = 0x08ab0000u;
    mem_w8(ram, c->r[1] + 0xffff9290u, c->r[2]);
    c->r[1] = 0x08ab0000u;
    mem_w8(ram, c->r[1] + 0xffff9291u, 0u);
    c->r[4] = 0x08a70000u;
    c->r[4] = c->r[4] + 0xffffb34cu;
    c->r[5] = 0u + 0u;
    c->r[6] = 0u + 0u;
    { c->r[31] = 0x08988050u; c->r[7] = 0u + 0u; func_089d87d4(c, ram); }
    c->r[16] = c->r[2] + 0u;
    c->r[4] = 0x08a70000u;
    { c->r[31] = 0x08988060u; c->r[4] = c->r[4] + 0xffffb34cu; func_0880d238(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = mem_r32(ram, c->r[16] + 0x00000004u);
    c->r[2] = c->r[3] & c->r[2];
    c->r[2] = c->r[2] & 0x0008u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_089880a8; }
    c->r[1] = 0x08ab0000u;
    { c->r[31] = 0x08988084u; mem_w16(ram, c->r[1] + 0xffff92a0u, 0u); func_0896a3e4(c, ram); }
    c->r[1] = 0x08ab0000u;
    mem_w8(ram, c->r[1] + 0xffff9290u, c->r[2]);
    c->r[2] = 0u + 0x00000004u;
    c->r[1] = 0x08ab0000u;
    mem_w8(ram, c->r[1] + 0xffff9291u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0u + 0x00000015u;
    { mem_w8(ram, c->r[3] + 0x0000000eu, c->r[2]); goto L_08988488; }
L_089880a8:
    { c->r[31] = 0x089880b0u; c->r[4] = 0u + 0x00000001u; func_089c5e18(c, ram); }
    { int _c = (c->r[2] == 0u); if (_c) goto L_089881c0; }
    c->r[1] = 0x08ab0000u;
    mem_w16(ram, c->r[1] + 0xffff92a0u, 0u);
    c->r[2] = 0x08ab0000u;
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0xffff929du);
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08ab0000u;
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0xffff929cu);
    c->r[2] = c->r[3] + c->r[2];
    { c->r[31] = 0x089880e0u; mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]); func_0896a3e4(c, ram); }
    { c->r[31] = 0x089880e8u; c->r[4] = c->r[2] + 0u; func_0896dbc0(c, ram); }
    mem_w8(ram, c->r[30] + 0x0000001cu, c->r[2]);
    { c->r[31] = 0x089880f4u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000018u); func_0896dbc0(c, ram); }
    { c->r[31] = 0x089880fcu; mem_w8(ram, c->r[30] + 0x0000001du, c->r[2]); func_0896a3c0(c, ram); }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[2] = ((s32)c->r[3] < (s32)c->r[2]) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_08988130; }
    { c->r[31] = 0x08988118u; func_0896a3e4(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    { int _c = (c->r[2] == c->r[3]); if (_c) goto L_08988130; }
    { goto L_08988488; }
L_08988130:
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[30] + 0x0000001cu);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[30] + 0x0000001du);
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_08988488; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x00000014u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000ac8u;
    { c->r[31] = 0x0898815cu; c->r[5] = c->r[2] + 0u; func_089cb820(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_08988488; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[3] = c->r[2] << 1;
    c->r[2] = 0x08ab0000u;
    c->r[2] = c->r[2] + 0xffff9240u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000001u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_08988488; }
    c->r[2] = mem_r8(ram, c->r[30] + 0x00000018u);
    c->r[1] = 0x08ab0000u;
    mem_w8(ram, c->r[1] + 0xffff9290u, c->r[2]);
    c->r[2] = 0u + 0x00000002u;
    c->r[1] = 0x08ab0000u;
    mem_w8(ram, c->r[1] + 0xffff9291u, c->r[2]);
    c->r[2] = mem_r8(ram, c->r[30] + 0x00000018u);
    c->r[1] = 0x08ab0000u;
    mem_w8(ram, c->r[1] + 0xffff929eu, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0u + 0x00000013u;
    { mem_w8(ram, c->r[3] + 0x0000000eu, c->r[2]); goto L_08988488; }
L_089881c0:
    c->r[4] = 0x08a70000u;
    c->r[4] = c->r[4] + 0xffffb34cu;
    c->r[5] = 0u + 0u;
    c->r[6] = 0u + 0u;
    { c->r[31] = 0x089881d8u; c->r[7] = 0u + 0u; func_089d87d4(c, ram); }
    c->r[16] = c->r[2] + 0u;
    c->r[4] = 0x08a70000u;
    { c->r[31] = 0x089881e8u; c->r[4] = c->r[4] + 0xffffb34cu; func_0880d238(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = mem_r32(ram, c->r[16] + 0x00000004u);
    c->r[2] = c->r[3] & c->r[2];
    c->r[2] = c->r[2] & 0x0080u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_08988268; }
    c->r[1] = 0x08ab0000u;
    mem_w16(ram, c->r[1] + 0xffff92a0u, 0u);
    c->r[2] = 0x08ab0000u;
    c->r[2] = mem_r8(ram, c->r[2] + 0xffff929cu);
    c->r[2] = c->r[2] + 0xffffffffu;
    c->r[1] = 0x08ab0000u;
    mem_w8(ram, c->r[1] + 0xffff929cu, c->r[2]);
    c->r[2] = 0x08ab0000u;
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0xffff929cu);
    { int _c = ((s32)c->r[2] >= 0); if (_c) goto L_08988238; }
    c->r[2] = 0u + 0x00000003u;
    c->r[1] = 0x08ab0000u;
    mem_w8(ram, c->r[1] + 0xffff929cu, c->r[2]);
L_08988238:
    { c->r[31] = 0x08988240u; func_08925598(c, ram); }
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0xffffc930u;
    c->r[5] = 0x04000000u;
    c->r[5] = c->r[5] | 0x0001u;
    c->r[6] = 0u + 0u;
    c->r[7] = 0u + 0u;
    { c->r[31] = 0x08988260u; c->r[8] = 0u + 0u; func_089f6924(c, ram); }
    { goto L_08988488; }
L_08988268:
    c->r[4] = 0x08a70000u;
    c->r[4] = c->r[4] + 0xffffb34cu;
    c->r[5] = 0u + 0u;
    c->r[6] = 0u + 0u;
    { c->r[31] = 0x08988280u; c->r[7] = 0u + 0u; func_089d87d4(c, ram); }
    c->r[16] = c->r[2] + 0u;
    c->r[4] = 0x08a70000u;
    { c->r[31] = 0x08988290u; c->r[4] = c->r[4] + 0xffffb34cu; func_0880d238(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = mem_r32(ram, c->r[16] + 0x00000004u);
    c->r[2] = c->r[3] & c->r[2];
    c->r[2] = c->r[2] & 0x0020u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_08988310; }
    c->r[1] = 0x08ab0000u;
    mem_w16(ram, c->r[1] + 0xffff92a0u, 0u);
    c->r[2] = 0x08ab0000u;
    c->r[2] = mem_r8(ram, c->r[2] + 0xffff929cu);
    c->r[2] = c->r[2] + 0x00000001u;
    c->r[1] = 0x08ab0000u;
    mem_w8(ram, c->r[1] + 0xffff929cu, c->r[2]);
    c->r[2] = 0x08ab0000u;
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0xffff929cu);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000004u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_089882e0; }
    c->r[1] = 0x08ab0000u;
    mem_w8(ram, c->r[1] + 0xffff929cu, 0u);
L_089882e0:
    { c->r[31] = 0x089882e8u; func_08925598(c, ram); }
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0xffffc930u;
    c->r[5] = 0x04000000u;
    c->r[5] = c->r[5] | 0x0001u;
    c->r[6] = 0u + 0u;
    c->r[7] = 0u + 0u;
    { c->r[31] = 0x08988308u; c->r[8] = 0u + 0u; func_089f6924(c, ram); }
    { goto L_08988488; }
L_08988310:
    c->r[4] = 0x08a70000u;
    c->r[4] = c->r[4] + 0xffffb34cu;
    c->r[5] = 0u + 0u;
    c->r[6] = 0u + 0u;
    { c->r[31] = 0x08988328u; c->r[7] = 0u + 0u; func_089d87d4(c, ram); }
    c->r[16] = c->r[2] + 0u;
    c->r[4] = 0x08a70000u;
    { c->r[31] = 0x08988338u; c->r[4] = c->r[4] + 0xffffb34cu; func_0880d238(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = mem_r32(ram, c->r[16] + 0x00000004u);
    c->r[2] = c->r[3] & c->r[2];
    c->r[2] = c->r[2] & 0x0010u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_089883d0; }
    { c->r[31] = 0x08988358u; func_089794c4(c, ram); }
    c->r[3] = mem_r8(ram, c->r[2] + 0x00000001u);
    c->r[2] = 0u + 0x00000001u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_08988488; }
    c->r[1] = 0x08ab0000u;
    mem_w16(ram, c->r[1] + 0xffff92a0u, 0u);
    c->r[2] = 0x08ab0000u;
    c->r[2] = mem_r8(ram, c->r[2] + 0xffff929du);
    c->r[2] = c->r[2] + 0xffffffffu;
    c->r[1] = 0x08ab0000u;
    mem_w8(ram, c->r[1] + 0xffff929du, c->r[2]);
    c->r[2] = 0x08ab0000u;
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0xffff929du);
    { int _c = ((s32)c->r[2] >= 0); if (_c) goto L_089883a0; }
    c->r[2] = 0u + 0x00000001u;
    c->r[1] = 0x08ab0000u;
    mem_w8(ram, c->r[1] + 0xffff929du, c->r[2]);
L_089883a0:
    { c->r[31] = 0x089883a8u; func_08925598(c, ram); }
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0xffffc930u;
    c->r[5] = 0x04000000u;
    c->r[5] = c->r[5] | 0x0001u;
    c->r[6] = 0u + 0u;
    c->r[7] = 0u + 0u;
    { c->r[31] = 0x089883c8u; c->r[8] = 0u + 0u; func_089f6924(c, ram); }
    { goto L_08988488; }
L_089883d0:
    c->r[4] = 0x08a70000u;
    c->r[4] = c->r[4] + 0xffffb34cu;
    c->r[5] = 0u + 0u;
    c->r[6] = 0u + 0u;
    { c->r[31] = 0x089883e8u; c->r[7] = 0u + 0u; func_089d87d4(c, ram); }
    c->r[16] = c->r[2] + 0u;
    c->r[4] = 0x08a70000u;
    { c->r[31] = 0x089883f8u; c->r[4] = c->r[4] + 0xffffb34cu; func_0880d238(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = mem_r32(ram, c->r[16] + 0x00000004u);
    c->r[2] = c->r[3] & c->r[2];
    c->r[2] = c->r[2] & 0x0040u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_08988488; }
    { c->r[31] = 0x08988418u; func_089794c4(c, ram); }
    c->r[3] = mem_r8(ram, c->r[2] + 0x00000001u);
    c->r[2] = 0u + 0x00000001u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_08988488; }
    c->r[1] = 0x08ab0000u;
    mem_w16(ram, c->r[1] + 0xffff92a0u, 0u);
    c->r[2] = 0x08ab0000u;
    c->r[2] = mem_r8(ram, c->r[2] + 0xffff929du);
    c->r[2] = c->r[2] + 0x00000001u;
    c->r[1] = 0x08ab0000u;
    mem_w8(ram, c->r[1] + 0xffff929du, c->r[2]);
    c->r[2] = 0x08ab0000u;
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0xffff929du);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000002u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_08988460; }
    c->r[1] = 0x08ab0000u;
    mem_w8(ram, c->r[1] + 0xffff929du, 0u);
L_08988460:
    { c->r[31] = 0x08988468u; func_08925598(c, ram); }
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0xffffc930u;
    c->r[5] = 0x04000000u;
    c->r[5] = c->r[5] | 0x0001u;
    c->r[6] = 0u + 0u;
    c->r[7] = 0u + 0u;
    { c->r[31] = 0x08988488u; c->r[8] = 0u + 0u; func_089f6924(c, ram); }
L_08988488:
    c->r[2] = 0x08ab0000u;
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0xffff92a0u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000096u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_089884c8; }
    c->r[1] = 0x08ab0000u;
    { c->r[31] = 0x089884a8u; mem_w16(ram, c->r[1] + 0xffff92a0u, 0u); func_0896a3e4(c, ram); }
    c->r[1] = 0x08ab0000u;
    mem_w8(ram, c->r[1] + 0xffff9290u, c->r[2]);
    c->r[2] = 0u + 0x00000004u;
    c->r[1] = 0x08ab0000u;
    mem_w8(ram, c->r[1] + 0xffff9291u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0u + 0x00000015u;
    mem_w8(ram, c->r[3] + 0x0000000eu, c->r[2]);
L_089884c8:
    c->r[2] = 0x08ab0000u;
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0xffff92a0u);
    c->r[2] = ((s32)c->r[2] < (s32)0x0000001fu) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_08988504; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x0000001cu;
    c->r[3] = 0x08ab0000u;
    c->r[3] = (u32)(s32)(s16)mem_r16(ram, c->r[3] + 0xffff92a0u);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x089884fcu; c->r[6] = c->r[3] + 0u; func_089737f8(c, ram); }
    { goto L_08988514; }
L_08988504:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x0000001cu;
    { c->r[31] = 0x08988514u; c->r[4] = c->r[2] + 0u; func_089738a4(c, ram); }
L_08988514:
    c->r[2] = 0x08ab0000u;
    c->r[2] = mem_r16(ram, c->r[2] + 0xffff92a0u);
    c->r[2] = c->r[2] + 0x00000001u;
    c->r[1] = 0x08ab0000u;
    mem_w16(ram, c->r[1] + 0xffff92a0u, c->r[2]);
    c->r[2] = 0x08ab0000u;
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0xffff929du);
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08ab0000u;
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0xffff929cu);
    c->r[2] = c->r[3] + c->r[2];
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0u + 0u;
    { c->r[31] = 0x08988550u; c->r[6] = 0u + 0u; func_08974ae8(c, ram); }
    { c->r[31] = 0x08988558u; func_0896a3e4(c, ram); }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = 0x08ab0000u;
    c->r[5] = c->r[5] + 0xffff9240u;
    c->r[6] = c->r[2] + 0u;
    { c->r[31] = 0x08988570u; c->r[7] = 0u + 0u; func_089740f4(c, ram); }
    { goto L_08988f48; }
L_08988578:
    c->r[2] = 0x08ab0000u;
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0xffff929eu);
    c->r[3] = c->r[2] << 1;
    c->r[2] = 0x08ab0000u;
    c->r[2] = c->r[2] + 0xffff9240u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[3] = mem_r8(ram, c->r[2] + 0x00000001u);
    c->r[2] = 0u + 0x00000001u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_08988898; }
    c->r[2] = 0x08ab0000u;
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0xffff929eu);
    c->r[3] = c->r[2] << 1;
    c->r[2] = 0x08ab0000u;
    c->r[2] = c->r[2] + 0xffff9240u;
    c->r[2] = c->r[3] + c->r[2];
    { c->r[31] = 0x089885c0u; c->r[16] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000000u); func_0896a3e4(c, ram); }
    { int _c = (c->r[16] != c->r[2]); if (_c) goto L_08988888; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    mem_w8(ram, c->r[2] + 0x00000040u, 0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x00000014u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000ac8u;
    { c->r[31] = 0x089885ecu; c->r[5] = c->r[2] + 0u; func_089cb820(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_089888b4; }
    c->r[2] = 0x08ab0000u;
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0xffff929eu);
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08ab0000u;
    c->r[2] = c->r[2] + 0xffff9270u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x00000014u;
    c->r[4] = c->r[2] + 0u;
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[6] = 0u + 0x00000073u;
    c->r[7] = 0u + 0xffffffffu;
    c->r[8] = 0u + 0xffffffffu;
    c->r[9] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[10] = 0u + 0u;
    { c->r[31] = 0x08988648u; c->r[11] = 0u + 0u; func_0896e6d0(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_089888b4; }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000018u);
    { c->r[31] = 0x08988664u; c->r[5] = 0x00080000u; func_0892ffa8(c, ram); }
    c->r[1] = 0x08a50000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffff95dcu);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000018u);
    { c->r[31] = 0x08988678u; c->f[12] = c->f[0]; func_08932528(c, ram); }
    c->r[16] = 0x08ab0000u;
    { c->r[31] = 0x08988684u; c->r[16] = (u32)(s32)(s8)mem_r8(ram, c->r[16] + 0xffff929eu); func_0896a3c0(c, ram); }
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[2] = ((s32)c->r[16] < (s32)c->r[2]) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_0898873c; }
    c->r[4] = 0u + 0x00000070u;
    c->r[5] = 0u + 0x00000006u;
    { c->r[31] = 0x089886a4u; c->r[6] = 0u + 0x00000001u; func_08932330(c, ram); }
    c->r[4] = 0u + 0x00000070u;
    c->r[5] = 0u + 0x00000006u;
    { c->r[31] = 0x089886b4u; c->r[6] = 0u + 0x00000002u; func_08932330(c, ram); }
    c->r[4] = 0u + 0x00000070u;
    c->r[5] = 0u + 0x00000006u;
    { c->r[31] = 0x089886c4u; c->r[6] = 0u + 0x00000003u; func_08932330(c, ram); }
    c->r[4] = 0u + 0x00000070u;
    c->r[5] = 0u + 0x00000006u;
    { c->r[31] = 0x089886d4u; c->r[6] = 0u + 0x00000004u; func_08932330(c, ram); }
    c->r[4] = 0u + 0x00000071u;
    c->r[5] = 0u + 0x00000006u;
    { c->r[31] = 0x089886e4u; c->r[6] = 0u + 0x00000001u; func_08932330(c, ram); }
    c->r[4] = 0u + 0x00000071u;
    c->r[5] = 0u + 0x00000006u;
    { c->r[31] = 0x089886f4u; c->r[6] = 0u + 0x00000002u; func_08932330(c, ram); }
    c->r[4] = 0u + 0x00000071u;
    c->r[5] = 0u + 0x00000006u;
    { c->r[31] = 0x08988704u; c->r[6] = 0u + 0x00000003u; func_08932330(c, ram); }
    c->r[4] = 0u + 0x00000071u;
    c->r[5] = 0u + 0x00000006u;
    { c->r[31] = 0x08988714u; c->r[6] = 0u + 0x00000004u; func_08932330(c, ram); }
    c->r[4] = 0u + 0x00000071u;
    c->r[5] = 0u + 0x00000006u;
    { c->r[31] = 0x08988724u; c->r[6] = 0u + 0x00000005u; func_08932330(c, ram); }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[5] = 0u + 0x00000004u;
    { c->r[31] = 0x08988734u; c->r[6] = 0u + 0x00000001u; func_08930178(c, ram); }
    { goto L_089887dc; }
L_0898873c:
    c->r[4] = 0u + 0x00000070u;
    c->r[5] = 0u + 0x00000006u;
    { c->r[31] = 0x0898874cu; c->r[6] = 0u + 0x00000001u; func_089323c0(c, ram); }
    c->r[4] = 0u + 0x00000070u;
    c->r[5] = 0u + 0x00000006u;
    { c->r[31] = 0x0898875cu; c->r[6] = 0u + 0x00000002u; func_089323c0(c, ram); }
    c->r[4] = 0u + 0x00000070u;
    c->r[5] = 0u + 0x00000006u;
    { c->r[31] = 0x0898876cu; c->r[6] = 0u + 0x00000003u; func_089323c0(c, ram); }
    c->r[4] = 0u + 0x00000070u;
    c->r[5] = 0u + 0x00000006u;
    { c->r[31] = 0x0898877cu; c->r[6] = 0u + 0x00000004u; func_089323c0(c, ram); }
    c->r[4] = 0u + 0x00000071u;
    c->r[5] = 0u + 0x00000006u;
    { c->r[31] = 0x0898878cu; c->r[6] = 0u + 0x00000001u; func_089323c0(c, ram); }
    c->r[4] = 0u + 0x00000071u;
    c->r[5] = 0u + 0x00000006u;
    { c->r[31] = 0x0898879cu; c->r[6] = 0u + 0x00000002u; func_089323c0(c, ram); }
    c->r[4] = 0u + 0x00000071u;
    c->r[5] = 0u + 0x00000006u;
    { c->r[31] = 0x089887acu; c->r[6] = 0u + 0x00000003u; func_089323c0(c, ram); }
    c->r[4] = 0u + 0x00000071u;
    c->r[5] = 0u + 0x00000006u;
    { c->r[31] = 0x089887bcu; c->r[6] = 0u + 0x00000004u; func_089323c0(c, ram); }
    c->r[4] = 0u + 0x00000071u;
    c->r[5] = 0u + 0x00000006u;
    { c->r[31] = 0x089887ccu; c->r[6] = 0u + 0x00000005u; func_089323c0(c, ram); }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[5] = 0u + 0x00000004u;
    { c->r[31] = 0x089887dcu; c->r[6] = 0u + 0x00000001u; func_08930208(c, ram); }
L_089887dc:
    c->r[2] = 0x08ab0000u;
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0xffff929eu);
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08ab0000u;
    c->r[2] = c->r[2] + 0xffff9250u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000000u);
    mem_w32(ram, c->r[30] + 0x00000020u, c->r[2]);
    c->r[2] = 0x08ab0000u;
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0xffff929eu);
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08ab0000u;
    c->r[2] = c->r[2] + 0xffff9250u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000001u);
    mem_w32(ram, c->r[30] + 0x00000024u, c->r[2]);
    c->r[2] = 0x08ab0000u;
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0xffff929eu);
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08ab0000u;
    c->r[2] = c->r[2] + 0xffff9250u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000002u);
    mem_w32(ram, c->r[30] + 0x00000028u, c->r[2]);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000af4u;
    c->r[5] = 0u + 0x00000070u;
    { c->r[31] = 0x08988850u; c->r[6] = mem_r32(ram, c->r[30] + 0x00000020u); func_0881456c(c, ram); }
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000af4u;
    c->r[5] = 0u + 0x00000071u;
    { c->r[31] = 0x08988864u; c->r[6] = mem_r32(ram, c->r[30] + 0x00000024u); func_0881456c(c, ram); }
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000af4u;
    c->r[5] = 0u + 0x00000072u;
    { c->r[31] = 0x08988878u; c->r[6] = mem_r32(ram, c->r[30] + 0x00000028u); func_0881456c(c, ram); }
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0u + 0x00000003u;
    { mem_w8(ram, c->r[3] + 0x0000000eu, c->r[2]); goto L_089888b4; }
L_08988888:
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0u + 0x00000002u;
    { mem_w8(ram, c->r[3] + 0x0000000eu, c->r[2]); goto L_089888b4; }
L_08988898:
    c->r[2] = 0x08ab0000u;
    c->r[2] = mem_r8(ram, c->r[2] + 0xffff929eu);
    c->r[1] = 0x08ab0000u;
    mem_w8(ram, c->r[1] + 0xffff9290u, c->r[2]);
    c->r[2] = 0u + 0x00000002u;
    c->r[1] = 0x08ab0000u;
    mem_w8(ram, c->r[1] + 0xffff9291u, c->r[2]);
L_089888b4:
    c->r[2] = 0x08ab0000u;
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0xffff929eu);
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0u + 0u;
    { c->r[31] = 0x089888ccu; c->r[6] = 0u + 0u; func_08974ae8(c, ram); }
    { c->r[31] = 0x089888d4u; func_0896a3e4(c, ram); }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = 0x08ab0000u;
    c->r[5] = c->r[5] + 0xffff9240u;
    c->r[6] = c->r[2] + 0u;
    { c->r[31] = 0x089888ecu; c->r[7] = 0u + 0u; func_089740f4(c, ram); }
    { goto L_08988f48; }
L_089888f4:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000040u);
    c->r[2] = 0u + 0x00000001u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_08988994; }
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000af4u;
    { c->r[31] = 0x08988918u; c->r[5] = 0u + 0x00000070u; func_088145a8(c, ram); }
    mem_w8(ram, c->r[30] + 0x0000001du, c->r[2]);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000af4u;
    { c->r[31] = 0x0898892cu; c->r[5] = 0u + 0x00000071u; func_088145a8(c, ram); }
    mem_w8(ram, c->r[30] + 0x0000001cu, c->r[2]);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000af4u;
    { c->r[31] = 0x08988940u; c->r[5] = 0u + 0x00000072u; func_088145a8(c, ram); }
    mem_w8(ram, c->r[30] + 0x0000002cu, c->r[2]);
    c->r[2] = mem_r8(ram, c->r[30] + 0x0000001du);
    c->r[1] = 0x08ab0000u;
    mem_w8(ram, c->r[1] + 0xffff9292u, c->r[2]);
    c->r[2] = mem_r8(ram, c->r[30] + 0x0000001cu);
    c->r[1] = 0x08ab0000u;
    mem_w8(ram, c->r[1] + 0xffff9293u, c->r[2]);
    c->r[2] = mem_r8(ram, c->r[30] + 0x0000002cu);
    c->r[1] = 0x08ab0000u;
    mem_w8(ram, c->r[1] + 0xffff9294u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    mem_w8(ram, c->r[2] + 0x00000040u, 0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x00000014u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    { c->r[31] = 0x08988984u; c->r[4] = c->r[2] + 0u; func_0896e7c0(c, ram); }
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0u + 0x00000014u;
    { mem_w8(ram, c->r[3] + 0x0000000eu, c->r[2]); goto L_08988a5c; }
L_08988994:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000040u);
    c->r[2] = 0u + 0xffffffffu;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_08988a40; }
    c->r[2] = 0x08ab0000u;
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0xffff929eu);
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08ab0000u;
    c->r[2] = c->r[2] + 0xffff9250u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000000u);
    c->r[1] = 0x08ab0000u;
    mem_w8(ram, c->r[1] + 0xffff9292u, c->r[2]);
    c->r[2] = 0x08ab0000u;
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0xffff929eu);
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08ab0000u;
    c->r[2] = c->r[2] + 0xffff9250u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000001u);
    c->r[1] = 0x08ab0000u;
    mem_w8(ram, c->r[1] + 0xffff9293u, c->r[2]);
    c->r[2] = 0x08ab0000u;
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0xffff929eu);
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08ab0000u;
    c->r[2] = c->r[2] + 0xffff9250u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000002u);
    c->r[1] = 0x08ab0000u;
    mem_w8(ram, c->r[1] + 0xffff9294u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    mem_w8(ram, c->r[2] + 0x00000040u, 0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x00000014u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    { c->r[31] = 0x08988a30u; c->r[4] = c->r[2] + 0u; func_0896e7c0(c, ram); }
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0u + 0x00000014u;
    { mem_w8(ram, c->r[3] + 0x0000000eu, c->r[2]); goto L_08988a5c; }
L_08988a40:
    c->r[2] = 0x08ab0000u;
    c->r[2] = mem_r8(ram, c->r[2] + 0xffff929eu);
    c->r[1] = 0x08ab0000u;
    mem_w8(ram, c->r[1] + 0xffff9290u, c->r[2]);
    c->r[2] = 0u + 0x00000001u;
    c->r[1] = 0x08ab0000u;
    mem_w8(ram, c->r[1] + 0xffff9291u, c->r[2]);
L_08988a5c:
    c->r[2] = 0x08ab0000u;
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0xffff929eu);
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0u + 0x00000001u;
    { c->r[31] = 0x08988a74u; c->r[6] = 0u + 0u; func_08974ae8(c, ram); }
    { c->r[31] = 0x08988a7cu; func_0896a3e4(c, ram); }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = 0x08ab0000u;
    c->r[5] = c->r[5] + 0xffff9240u;
    c->r[6] = c->r[2] + 0u;
    { c->r[31] = 0x08988a94u; c->r[7] = 0u + 0u; func_089740f4(c, ram); }
    { goto L_08988f48; }
L_08988a9c:
    mem_w32(ram, c->r[30] + 0x00000028u, 0u);
    c->r[2] = 0x08ab0000u;
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0xffff929eu);
    c->r[3] = c->r[2] << 1;
    c->r[2] = 0x08ab0000u;
    c->r[2] = c->r[2] + 0xffff9240u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[3] = mem_r8(ram, c->r[2] + 0x00000001u);
    c->r[2] = 0u + 0x00000001u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_08988b14; }
    c->r[2] = 0x08ab0000u;
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0xffff929eu);
    c->r[3] = c->r[2] << 1;
    c->r[2] = 0x08ab0000u;
    c->r[2] = c->r[2] + 0xffff9240u;
    c->r[2] = c->r[3] + c->r[2];
    { c->r[31] = 0x08988ae8u; c->r[16] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000000u); func_0896a3e4(c, ram); }
    { int _c = (c->r[16] != c->r[2]); if (_c) goto L_08988b14; }
    c->r[2] = 0x08ab0000u;
    c->r[2] = mem_r8(ram, c->r[2] + 0xffff929eu);
    c->r[1] = 0x08ab0000u;
    mem_w8(ram, c->r[1] + 0xffff9290u, c->r[2]);
    c->r[2] = 0u + 0x00000003u;
    c->r[1] = 0x08ab0000u;
    mem_w8(ram, c->r[1] + 0xffff9291u, c->r[2]);
    c->r[2] = 0u + 0x00000001u;
    mem_w32(ram, c->r[30] + 0x00000028u, c->r[2]);
L_08988b14:
    c->r[2] = 0x08ab0000u;
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0xffff929eu);
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0u + 0x00000001u;
    { c->r[31] = 0x08988b2cu; c->r[6] = 0u + 0u; func_08974ae8(c, ram); }
    { c->r[31] = 0x08988b34u; func_0896a3e4(c, ram); }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = 0x08ab0000u;
    c->r[5] = c->r[5] + 0xffff9240u;
    c->r[6] = c->r[2] + 0u;
    { c->r[31] = 0x08988b4cu; c->r[7] = 0u + 0u; func_089740f4(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x00000014u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000ac8u;
    { c->r[31] = 0x08988b68u; c->r[5] = c->r[2] + 0u; func_089cb820(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000024u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000024u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_08988f48; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000028u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_08988f48; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0u + 0x00000002u;
    { mem_w8(ram, c->r[3] + 0x0000000eu, c->r[2]); goto L_08988f48; }
L_08988b94:
    { c->r[31] = 0x08988b9cu; func_0896a3e4(c, ram); }
    c->r[3] = c->r[2] << 1;
    c->r[2] = 0x08ab0000u;
    c->r[2] = c->r[2] + 0xffff9240u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[3] = mem_r8(ram, c->r[2] + 0x00000001u);
    c->r[2] = 0u + 0x00000005u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_08988bcc; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0u + 0x00000004u;
    { mem_w8(ram, c->r[3] + 0x0000000eu, c->r[2]); goto L_08988be8; }
L_08988bcc:
    { c->r[31] = 0x08988bd4u; func_0896a3e4(c, ram); }
    c->r[1] = 0x08ab0000u;
    mem_w8(ram, c->r[1] + 0xffff9290u, c->r[2]);
    c->r[2] = 0u + 0x00000004u;
    c->r[1] = 0x08ab0000u;
    mem_w8(ram, c->r[1] + 0xffff9291u, c->r[2]);
L_08988be8:
    c->r[4] = 0u + 0xffffffffu;
    c->r[5] = 0u + 0u;
    { c->r[31] = 0x08988bf8u; c->r[6] = 0u + 0u; func_08974ae8(c, ram); }
    { c->r[31] = 0x08988c00u; func_0896a3e4(c, ram); }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = 0x08ab0000u;
    c->r[5] = c->r[5] + 0xffff9240u;
    c->r[6] = c->r[2] + 0u;
    { c->r[31] = 0x08988c18u; c->r[7] = 0u + 0u; func_089740f4(c, ram); }
    { goto L_08988f48; }
L_08988c20:
    c->r[2] = 0u + 0x00000001u;
    mem_w32(ram, c->r[30] + 0x00000028u, c->r[2]);
    mem_w32(ram, c->r[30] + 0x00000024u, 0u);
L_08988c2c:
    { c->r[31] = 0x08988c34u; func_0896a3c0(c, ram); }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000024u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[2] = ((s32)c->r[3] < (s32)c->r[2]) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_08988c50; }
    { goto L_08988cac; }
L_08988c50:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000024u);
    c->r[3] = c->r[2] << 1;
    c->r[2] = 0x08ab0000u;
    c->r[2] = c->r[2] + 0xffff9240u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[3] = mem_r8(ram, c->r[2] + 0x00000001u);
    c->r[2] = 0u + 0x00000005u;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_08988c9c; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000024u);
    c->r[3] = c->r[2] << 1;
    c->r[2] = 0x08ab0000u;
    c->r[2] = c->r[2] + 0xffff9240u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[3] = mem_r8(ram, c->r[2] + 0x00000001u);
    c->r[2] = 0u + 0x00000006u;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_08988c9c; }
    mem_w32(ram, c->r[30] + 0x00000028u, 0u);
L_08988c9c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000024u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000024u, c->r[2]); goto L_08988c2c; }
L_08988cac:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000028u);
    c->r[2] = 0u + 0x00000001u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_08988ce0; }
    { c->r[31] = 0x08988cc4u; func_0896a284(c, ram); }
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x08988cd0u; c->r[5] = 0u + 0xffffffffu; func_0896ccf0(c, ram); }
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0u + 0x00000016u;
    { mem_w8(ram, c->r[3] + 0x0000000eu, c->r[2]); goto L_08988d3c; }
L_08988ce0:
    { c->r[31] = 0x08988ce8u; c->r[4] = 0u + 0x00000001u; func_089c5f10(c, ram); }
    { int _c = (c->r[2] == 0u); if (_c) goto L_08988d20; }
    { c->r[31] = 0x08988cf8u; func_0896a3e4(c, ram); }
    c->r[1] = 0x08ab0000u;
    mem_w8(ram, c->r[1] + 0xffff9290u, c->r[2]);
    c->r[1] = 0x08ab0000u;
    mem_w8(ram, c->r[1] + 0xffff9291u, 0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    mem_w8(ram, c->r[2] + 0x00000010u, 0u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0u + 0x00000002u;
    { mem_w8(ram, c->r[3] + 0x0000000eu, c->r[2]); goto L_08988d3c; }
L_08988d20:
    { c->r[31] = 0x08988d28u; func_0896a3e4(c, ram); }
    c->r[1] = 0x08ab0000u;
    mem_w8(ram, c->r[1] + 0xffff9290u, c->r[2]);
    c->r[2] = 0u + 0x00000005u;
    c->r[1] = 0x08ab0000u;
    mem_w8(ram, c->r[1] + 0xffff9291u, c->r[2]);
L_08988d3c:
    c->r[4] = 0u + 0xffffffffu;
    c->r[5] = 0u + 0u;
    { c->r[31] = 0x08988d4cu; c->r[6] = 0u + 0u; func_08974ae8(c, ram); }
    { c->r[31] = 0x08988d54u; func_0896a3e4(c, ram); }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = 0x08ab0000u;
    c->r[5] = c->r[5] + 0xffff9240u;
    c->r[6] = c->r[2] + 0u;
    { c->r[31] = 0x08988d6cu; c->r[7] = 0u + 0u; func_089740f4(c, ram); }
    { goto L_08988f48; }
L_08988d74:
    { c->r[31] = 0x08988d7cu; func_0896a284(c, ram); }
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0u + 0x00000009u;
    c->r[6] = 0u + 0x00000003u;
    { c->r[31] = 0x08988d90u; c->r[7] = 0u + 0x00000004u; func_0896d22c(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000028u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000028u);
    mem_w32(ram, c->r[30] + 0x00000030u, c->r[2]);
    c->r[2] = 0u + 0x00000001u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000030u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_08988dec; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000030u);
    c->r[2] = ((s32)c->r[3] < (s32)0x00000002u) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_08988dd4; }
    c->r[2] = 0u + 0xffffffffu;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000030u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_08988e3c; }
    { goto L_08988e54; }
L_08988dd4:
    c->r[2] = 0u + 0x00000002u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000030u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_08988e18; }
    { goto L_08988e54; }
L_08988dec:
    { c->r[31] = 0x08988df4u; func_08973e38(c, ram); }
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0u + 0x00000006u;
    mem_w32(ram, c->r[3] + 0x00000004u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    mem_w8(ram, c->r[2] + 0x00000010u, 0u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0u + 0x00000018u;
    { mem_w8(ram, c->r[3] + 0x0000000eu, c->r[2]); goto L_08988e54; }
L_08988e18:
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0u + 0x00000006u;
    mem_w32(ram, c->r[3] + 0x00000004u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    mem_w8(ram, c->r[2] + 0x00000010u, 0u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0u + 0x00000017u;
    { mem_w8(ram, c->r[3] + 0x0000000eu, c->r[2]); goto L_08988e54; }
L_08988e3c:
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0u + 0x00000003u;
    mem_w32(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x08988e54u; c->r[5] = 0u + 0x00000033u; func_0896a7b8(c, ram); }
L_08988e54:
    c->r[4] = 0u + 0xffffffffu;
    c->r[5] = 0u + 0u;
    { c->r[31] = 0x08988e64u; c->r[6] = 0u + 0u; func_08974ae8(c, ram); }
    { c->r[31] = 0x08988e6cu; func_0896a3e4(c, ram); }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = 0x08ab0000u;
    c->r[5] = c->r[5] + 0xffff9240u;
    c->r[6] = c->r[2] + 0u;
    { c->r[31] = 0x08988e84u; c->r[7] = 0u + 0u; func_089740f4(c, ram); }
    { goto L_08988f48; }
L_08988e8c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000004u);
    { int _c = ((s32)c->r[2] > 0); if (_c) goto L_08988ec0; }
    { c->r[31] = 0x08988ea4u; func_0896a284(c, ram); }
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x08988eb0u; c->r[5] = 0u + 0x00000096u; func_0896ccf0(c, ram); }
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0u + 0x00000002u;
    { mem_w8(ram, c->r[3] + 0x0000000eu, c->r[2]); goto L_08988f48; }
L_08988ec0:
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000004u);
    c->r[2] = c->r[2] + 0xffffffffu;
    { mem_w32(ram, c->r[3] + 0x00000004u, c->r[2]); goto L_08988f48; }
L_08988ed8:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000004u);
    { int _c = ((s32)c->r[2] > 0); if (_c) goto L_08988f10; }
    { c->r[31] = 0x08988ef0u; func_0896a284(c, ram); }
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x08988efcu; c->r[5] = 0u + 0xffffffffu; func_0896ccf0(c, ram); }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x08988f08u; c->r[5] = 0u + 0x0000001eu; func_0896a7b8(c, ram); }
    { goto L_08988f48; }
L_08988f10:
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000004u);
    c->r[2] = c->r[2] + 0xffffffffu;
    { mem_w32(ram, c->r[3] + 0x00000004u, c->r[2]); goto L_08988f48; }
L_08988f28:
    { c->r[31] = 0x08988f30u; func_08973f98(c, ram); }
    { int _c = (c->r[2] != 0u); if (_c) goto L_08988f40; }
    { goto L_08988f48; }
L_08988f40:
    { c->r[31] = 0x08988f48u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u); func_0896a824(c, ram); }
L_08988f48:
    { c->r[31] = 0x08988f50u; func_0896a284(c, ram); }
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = mem_r8(ram, c->r[3] + 0x00000010u);
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0u + 0x00000009u;
    c->r[6] = c->r[3] + 0u;
    c->r[7] = 0u + 0x00000006u;
    c->r[8] = 0x08ab0000u;
    { c->r[31] = 0x08988f74u; c->r[8] = c->r[8] + 0xffff9290u; func_0896cc50(c, ram); }
    { c->r[31] = 0x08988f7cu; func_08974fb4(c, ram); }
    { goto L_0898921c; }
L_08988f84:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r8(ram, c->r[2] + 0x0000000eu);
    mem_w32(ram, c->r[30] + 0x00000038u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000038u);
    c->r[2] = (c->r[3] < 0x0000002cu) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_0898921c; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000038u);
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08a50000u;
    c->r[2] = c->r[2] + 0xffff9698u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    { u32 _t = c->r[2]; switch (_t) { case 0x08987d88u: goto L_08987d88; case 0x08987f68u: goto L_08987f68; case 0x08988000u: goto L_08988000; case 0x08988020u: goto L_08988020; case 0x08988578u: goto L_08988578; case 0x089888f4u: goto L_089888f4; case 0x08988a9cu: goto L_08988a9c; case 0x08988b94u: goto L_08988b94; case 0x08988c20u: goto L_08988c20; case 0x08988d74u: goto L_08988d74; case 0x08988e8cu: goto L_08988e8c; case 0x08988ed8u: goto L_08988ed8; case 0x08988f28u: goto L_08988f28; case 0x08988f48u: goto L_08988f48; case 0x08988fc0u: goto L_08988fc0; case 0x08989078u: goto L_08989078; case 0x089890e4u: goto L_089890e4; case 0x08989134u: goto L_08989134; case 0x08989184u: goto L_08989184; case 0x0898921cu: goto L_0898921c; default: recomp_trap_unknown_indirect(c, ram, 0x08988fb8u, _t); return; } }
L_08988fc0:
    c->r[1] = 0x08a50000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffff95e0u);
    c->r[4] = 0x08a70000u;
    c->r[4] = c->r[4] + 0xffffb640u;
    { c->r[31] = 0x08988fd8u; c->f[12] = c->f[0]; func_089f1210(c, ram); }
    c->r[4] = 0x08a50000u;
    c->r[4] = c->r[4] + 0xffff9464u;
    c->r[5] = 0u + 0x00001548u;
    { c->r[31] = 0x08988fecu; c->r[6] = 0u + 0u; func_08928cb8(c, ram); }
    c->r[4] = 0x08a70000u;
    { c->r[31] = 0x08988ff8u; c->r[4] = c->r[4] + 0xffffb640u; func_089f147c(c, ram); }
    c->r[1] = 0x08a50000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffff95e4u);
    c->r[4] = 0x08a70000u;
    c->r[4] = c->r[4] + 0xffffb640u;
    { c->r[31] = 0x08989010u; c->f[12] = c->f[0]; func_089f1210(c, ram); }
    c->r[3] = 0x08ab0000u;
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[3] + 0xffff929cu);
    c->r[2] = 0u + 0x00000073u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[2] = c->lo;
    c->r[2] = c->r[2] + 0x00000043u;
    mem_w32(ram, c->r[30] + 0x00000028u, c->r[2]);
    c->r[3] = 0x08ab0000u;
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[3] + 0xffff929du);
    c->r[2] = 0u + 0x00000058u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[2] = c->lo;
    c->r[2] = c->r[2] + 0x00000035u;
    mem_w32(ram, c->r[30] + 0x00000024u, c->r[2]);
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[30] + 0x00000028u);
    c->r[3] = (u32)(s32)(s16)mem_r16(ram, c->r[30] + 0x00000024u);
    c->r[4] = c->r[2] + 0u;
    c->r[5] = c->r[3] + 0u;
    c->r[6] = 0x00120000u;
    { c->r[31] = 0x08989064u; c->r[6] = c->r[6] | 0x0800u; func_0892566c(c, ram); }
    c->r[4] = 0x08a70000u;
    { c->r[31] = 0x08989070u; c->r[4] = c->r[4] + 0xffffb640u; func_089f147c(c, ram); }
    { goto L_0898921c; }
L_08989078:
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000af4u;
    { c->r[31] = 0x08989088u; c->r[5] = 0u + 0x00000073u; func_088145a8(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000028u, c->r[2]);
    c->r[1] = 0x08a50000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffff95e4u);
    c->r[4] = 0x08a70000u;
    c->r[4] = c->r[4] + 0xffffb640u;
    { c->r[31] = 0x089890a4u; c->f[12] = c->f[0]; func_089f1210(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000028u);
    c->r[3] = c->r[2] << 1;
    c->r[2] = 0x08a60000u;
    c->r[2] = c->r[2] + 0xffffa4a8u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r16(ram, c->r[2] + 0x00000000u);
    c->r[4] = 0x08a50000u;
    c->r[4] = c->r[4] + 0xffff9464u;
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x089890d0u; c->r[6] = 0u + 0u; func_08928cb8(c, ram); }
    c->r[4] = 0x08a70000u;
    { c->r[31] = 0x089890dcu; c->r[4] = c->r[4] + 0xffffb640u; func_089f147c(c, ram); }
    { goto L_0898921c; }
L_089890e4:
    c->r[1] = 0x08a50000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffff95e0u);
    c->r[4] = 0x08a70000u;
    c->r[4] = c->r[4] + 0xffffb640u;
    { c->r[31] = 0x089890fcu; c->f[12] = c->f[0]; func_089f1210(c, ram); }
    { c->r[31] = 0x08989104u; c->r[4] = 0u + 0x00000004u; func_08928c60(c, ram); }
    c->r[4] = 0x08a50000u;
    c->r[4] = c->r[4] + 0xffff9464u;
    c->r[5] = 0u + 0x00001504u;
    { c->r[31] = 0x08989118u; c->r[6] = 0u + 0u; func_08928cb8(c, ram); }
    { c->r[31] = 0x08989120u; c->r[4] = 0u + 0x00000001u; func_08928c60(c, ram); }
    c->r[4] = 0x08a70000u;
    { c->r[31] = 0x0898912cu; c->r[4] = c->r[4] + 0xffffb640u; func_089f147c(c, ram); }
    { goto L_0898921c; }
L_08989134:
    c->r[1] = 0x08a50000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffff95e0u);
    c->r[4] = 0x08a70000u;
    c->r[4] = c->r[4] + 0xffffb640u;
    { c->r[31] = 0x0898914cu; c->f[12] = c->f[0]; func_089f1210(c, ram); }
    { c->r[31] = 0x08989154u; c->r[4] = 0u + 0x00000004u; func_08928c60(c, ram); }
    c->r[4] = 0x08a50000u;
    c->r[4] = c->r[4] + 0xffff9464u;
    c->r[5] = 0u + 0x00001584u;
    { c->r[31] = 0x08989168u; c->r[6] = 0u + 0u; func_08928cb8(c, ram); }
    { c->r[31] = 0x08989170u; c->r[4] = 0u + 0x00000001u; func_08928c60(c, ram); }
    c->r[4] = 0x08a70000u;
    { c->r[31] = 0x0898917cu; c->r[4] = c->r[4] + 0xffffb640u; func_089f147c(c, ram); }
    { goto L_0898921c; }
L_08989184:
    c->r[1] = 0x08a50000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffff95e0u);
    c->r[4] = 0x08a70000u;
    c->r[4] = c->r[4] + 0xffffb640u;
    { c->r[31] = 0x0898919cu; c->f[12] = c->f[0]; func_089f1210(c, ram); }
    c->r[4] = 0x08a50000u;
    c->r[4] = c->r[4] + 0xffff9464u;
    c->r[5] = 0u + 0xffffffffu;
    { c->r[31] = 0x089891b0u; c->r[6] = 0u + 0xffffffffu; func_08928cb8(c, ram); }
    c->r[4] = 0x08a70000u;
    { c->r[31] = 0x089891bcu; c->r[4] = c->r[4] + 0xffffb640u; func_089f147c(c, ram); }
    { goto L_0898921c; }
L_089891c4:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_0898921c; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    mem_w32(ram, c->r[30] + 0x00000028u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000028u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x00000004u);
    c->r[2] = 0u + 0x00000002u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_089891fc; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0u + 0x00000001u;
    { mem_w8(ram, c->r[3] + 0x00000040u, c->r[2]); goto L_0898921c; }
L_089891fc:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000028u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x00000004u);
    c->r[2] = 0u + 0x00000003u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_0898921c; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0u + 0xffffffffu;
    mem_w8(ram, c->r[3] + 0x00000040u, c->r[2]);
L_0898921c:
    c->r[2] = 0u + 0u;
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000048u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000044u);
    c->r[16] = mem_r32(ram, c->r[29] + 0x00000040u);
    { c->r[29] = c->r[29] + 0x00000050u; return; }
    return; /* fell out of func_08987d88 */
}

/* func_089944cc  0x089944cc..0x08994538  108 bytes, source=sweep */
void func_089944cc(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089944ccu);
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
    { c->r[31] = 0x08994508u; c->r[5] = c->r[2] + 0u; func_08994450(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = c->r[2] >> 24;
    c->r[2] = 0x58000000u;
    c->r[2] = c->r[3] | c->r[2];
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x08994524u; c->r[5] = c->r[2] + 0u; func_08994450(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_089944cc */
}

/* func_08998dcc  0x08998dcc..0x08998df0  36 bytes, source=sweep */
void func_08998dcc(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08998dccu);
    c->r[29] = c->r[29] + 0xfffffff0u;
    mem_w32(ram, c->r[29] + 0x00000000u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    c->r[2] = 0x08ab0000u;
    c->r[2] = mem_r8(ram, c->r[2] + 0x00002a9eu);
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000000u);
    { c->r[29] = c->r[29] + 0x00000010u; return; }
    return; /* fell out of func_08998dcc */
}

/* func_089994e0  0x089994e0..0x08999528  72 bytes, source=residue */
void func_089994e0(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089994e0u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = 0x08ab0000u;
    c->r[2] = c->r[2] + 0x00002ae8u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000000u);
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08ab0000u;
    c->r[2] = c->r[2] + 0x00002ac8u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_089994e0 */
}

/* func_0899f5d0  0x0899f5d0..0x0899f744  372 bytes, source=fde */
void func_0899f5d0(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0899f5d0u);
    c->r[29] = c->r[29] + 0xffffffd0u;
    mem_w32(ram, c->r[29] + 0x00000028u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000024u, c->r[30]);
    mem_w32(ram, c->r[29] + 0x00000020u, c->r[16]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000070u;
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[2]);
    mem_w32(ram, c->r[30] + 0x00000008u, 0u);
    c->r[4] = 0x08a70000u;
    c->r[4] = c->r[4] + 0xffffb34cu;
    c->r[5] = 0u + 0u;
    c->r[6] = 0u + 0u;
    { c->r[31] = 0x0899f610u; c->r[7] = 0u + 0u; func_089d87d4(c, ram); }
    c->r[16] = c->r[2] + 0u;
    c->r[4] = 0x08a70000u;
    { c->r[31] = 0x0899f620u; c->r[4] = c->r[4] + 0xffffb34cu; func_0880d238(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = mem_r32(ram, c->r[16] + 0x00000004u);
    c->r[2] = c->r[3] & c->r[2];
    c->r[2] = c->r[2] & 0x0008u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_0899f6c4; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[2] + 0x0000000cu;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000ac8u;
    { c->r[31] = 0x0899f654u; c->r[5] = c->r[2] + 0u; func_089cb820(c, ram); }
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    { int _c = (c->r[2] != 0u); if (_c) goto L_0899f728; }
    c->r[2] = 0u + 0x00000001u;
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]);
    c->r[2] = c->r[30] + 0x00000010u;
    c->r[4] = 0u + 0x00000010u;
    c->r[5] = 0u + 0u;
    c->r[6] = 0u + 0u;
    c->r[7] = 0u + 0u;
    c->r[8] = 0u + 0u;
    { c->r[31] = 0x0899f68cu; c->r[9] = c->r[2] + 0u; func_089c6bec(c, ram); }
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[16] = c->r[2] + 0x0000000cu;
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000ac8u;
    { c->r[31] = 0x0899f6a8u; c->r[5] = mem_r32(ram, c->r[30] + 0x0000000cu); func_089cb780(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    mem_w32(ram, c->r[16] + 0x00000000u, c->r[2]);
    c->r[2] = 0u + 0x00000001u;
    c->r[1] = 0x08ab0000u;
    { mem_w8(ram, c->r[1] + 0x00002b89u, c->r[2]); goto L_0899f728; }
L_0899f6c4:
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x0899f6d0u; c->r[4] = c->r[4] + 0x00000af4u; func_08826fb0(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = 0u + 0x00000007u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_0899f704; }
    c->r[2] = 0u + 0x00000007u;
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000af4u;
    { c->r[31] = 0x0899f6f8u; c->r[5] = 0u + 0u; func_088216f8(c, ram); }
    c->r[1] = 0x08ab0000u;
    { mem_w8(ram, c->r[1] + 0x00002b89u, 0u); goto L_0899f728; }
L_0899f704:
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x0899f710u; c->r[4] = c->r[4] + 0x00000af4u; func_08826fb0(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = 0u + 0x00000001u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_0899f728; }
    c->r[1] = 0x08ab0000u;
    mem_w8(ram, c->r[1] + 0x00002b89u, 0u);
L_0899f728:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000028u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000024u);
    c->r[16] = mem_r32(ram, c->r[29] + 0x00000020u);
    { c->r[29] = c->r[29] + 0x00000030u; return; }
    return; /* fell out of func_0899f5d0 */
}

/* func_089a2bcc  0x089a2bcc..0x089a2d10  324 bytes, source=fde */
void func_089a2bcc(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089a2bccu);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, 0u);
L_089a2be0:
    { c->r[31] = 0x089a2be8u; func_089794c4(c, ram); }
    c->r[3] = mem_r8(ram, c->r[2] + 0x00000012u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = ((s32)c->r[2] < (s32)c->r[3]) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_089a2c04; }
    { goto L_089a2c6c; }
L_089a2c04:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000010u;
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0u + 0x00000002u;
    { c->r[31] = 0x089a2c1cu; c->r[6] = 0u + 0x00000001u; func_088f4fdc(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000016u;
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0u + 0x00000002u;
    { c->r[31] = 0x089a2c34u; c->r[6] = 0u + 0x00000001u; func_088f4fdc(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000010u;
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x089a2c48u; c->r[5] = 0u + 0x00000001u; func_088f49b8(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000016u;
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x089a2c5cu; c->r[5] = 0u + 0x00000001u; func_088f49b8(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000000u, c->r[2]); goto L_089a2be0; }
L_089a2c6c:
    mem_w32(ram, c->r[30] + 0x00000000u, 0u);
L_089a2c70:
    { c->r[31] = 0x089a2c78u; func_089794c4(c, ram); }
    c->r[3] = mem_r8(ram, c->r[2] + 0x00000011u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = ((s32)c->r[2] < (s32)c->r[3]) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_089a2c94; }
    { goto L_089a2cfc; }
L_089a2c94:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x0000001cu;
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0u + 0x00000002u;
    { c->r[31] = 0x089a2cacu; c->r[6] = 0u + 0x00000001u; func_088f4fdc(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000022u;
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0u + 0x00000002u;
    { c->r[31] = 0x089a2cc4u; c->r[6] = 0u + 0x00000001u; func_088f4fdc(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x0000001cu;
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x089a2cd8u; c->r[5] = 0u + 0x00000001u; func_088f49b8(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x0000001cu;
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x089a2cecu; c->r[5] = 0u + 0x00000001u; func_088f49b8(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000000u, c->r[2]); goto L_089a2c70; }
L_089a2cfc:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_089a2bcc */
}

/* func_089a8108  0x089a8108..0x089a8650  1352 bytes, source=fde */
void func_089a8108(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089a8108u);
    c->r[29] = c->r[29] + 0xffffffd0u;
    mem_w32(ram, c->r[29] + 0x00000028u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000024u, c->r[30]);
    mem_w32(ram, c->r[29] + 0x00000020u, c->r[16]);
    c->r[30] = c->r[29] + 0u;
    c->r[1] = 0x08ab0000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0x00002e94u);
    c->f[0] = u2f(0u);
    alx_c_cond_s(c, 14, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_089a8140; }
    { goto L_089a8180; }
L_089a8140:
    { c->r[31] = 0x089a8148u; func_0896dc4c(c, ram); }
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08ab0000u;
    c->r[2] = c->r[2] + 0x00002ea8u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_089a81c8; }
    { c->r[31] = 0x089a816cu; c->r[4] = 0u + 0x00002096u; func_089346e8(c, ram); }
    c->r[1] = 0x08a50000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffffab48u);
    c->r[1] = 0x08ab0000u;
    { mem_wf32(ram, c->r[1] + 0x00002e94u, c->f[0]); goto L_089a81c8; }
L_089a8180:
    c->r[1] = 0x08ab0000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0x00002e94u);
    c->r[1] = 0x08a80000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00002e40u);
    c->f[0] = c->f[1] - c->f[0];
    c->r[1] = 0x08ab0000u;
    mem_wf32(ram, c->r[1] + 0x00002e94u, c->f[0]);
    c->r[1] = 0x08ab0000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0x00002e94u);
    c->f[0] = u2f(0u);
    alx_c_cond_s(c, 12, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_089a81c0; }
    { goto L_089a81c8; }
L_089a81c0:
    c->r[1] = 0x08ab0000u;
    mem_w32(ram, c->r[1] + 0x00002e94u, 0u);
L_089a81c8:
    c->r[1] = 0x08ab0000u;
    mem_w32(ram, c->r[1] + 0x00002ea8u, 0u);
    c->r[1] = 0x08ab0000u;
    mem_w32(ram, c->r[1] + 0x00002eacu, 0u);
    c->r[1] = 0x08ab0000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0x00002e98u);
    c->f[0] = u2f(0u);
    alx_c_cond_s(c, 14, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_089a81fc; }
    { goto L_089a82b4; }
L_089a81fc:
    mem_w32(ram, c->r[30] + 0x00000000u, 0u);
L_089a8200:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000005u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_089a8218; }
    { goto L_089a82fc; }
L_089a8218:
    { c->r[31] = 0x089a8220u; func_0896dc4c(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08ab0000u;
    c->r[2] = c->r[2] + 0x00002e50u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000ac8u;
    { c->r[31] = 0x089a825cu; c->r[5] = c->r[2] + 0u; func_089cb820(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_089a8274; }
    { goto L_089a82a4; }
L_089a8274:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000008cu);
    c->r[2] = c->r[2] & 0x8000u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_089a82a4; }
    { c->r[31] = 0x089a8290u; c->r[4] = 0u + 0x00002097u; func_089346e8(c, ram); }
    c->r[1] = 0x08a50000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffffab48u);
    c->r[1] = 0x08ab0000u;
    { mem_wf32(ram, c->r[1] + 0x00002e98u, c->f[0]); goto L_089a82fc; }
L_089a82a4:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000000u, c->r[2]); goto L_089a8200; }
L_089a82b4:
    c->r[1] = 0x08ab0000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0x00002e98u);
    c->r[1] = 0x08a80000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00002e40u);
    c->f[0] = c->f[1] - c->f[0];
    c->r[1] = 0x08ab0000u;
    mem_wf32(ram, c->r[1] + 0x00002e98u, c->f[0]);
    c->r[1] = 0x08ab0000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0x00002e98u);
    c->f[0] = u2f(0u);
    alx_c_cond_s(c, 12, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_089a82f4; }
    { goto L_089a82fc; }
L_089a82f4:
    c->r[1] = 0x08ab0000u;
    mem_w32(ram, c->r[1] + 0x00002e98u, 0u);
L_089a82fc:
    c->r[1] = 0x08ab0000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0x00002e9cu);
    c->f[0] = u2f(0u);
    alx_c_cond_s(c, 14, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_089a8320; }
    { goto L_089a84a4; }
L_089a8320:
    { c->r[31] = 0x089a8328u; func_0896dc4c(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08ab0000u;
    c->r[2] = c->r[2] + 0x00002e50u;
    c->r[2] = c->r[2] + c->r[3];
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[2]);
    c->r[2] = 0x08ab0000u;
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00002e86u);
    c->r[3] = c->r[2] << 3;
    c->r[2] = 0x08a60000u;
    c->r[2] = c->r[2] + 0xffffa760u;
    c->r[4] = c->r[3] + c->r[2];
    c->r[2] = 0x08ab0000u;
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00002e86u);
    c->r[3] = c->r[2] << 3;
    c->r[2] = 0x08a60000u;
    c->r[2] = c->r[2] + 0xffffa764u;
    c->r[2] = c->r[3] + c->r[2];
    c->f[1] = mem_rf32(ram, c->r[4] + 0x00000000u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000000u);
    c->f[0] = c->f[1] - c->f[0];
    c->f[0] = (f32)fabsf(c->f[0]);
    mem_wf32(ram, c->r[30] + 0x00000008u, c->f[0]);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000008u);
    mem_wf32(ram, c->r[30] + 0x0000000cu, c->f[0]);
    mem_w32(ram, c->r[30] + 0x00000000u, 0u);
L_089a839c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000005u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_089a83b4; }
    { goto L_089a8464; }
L_089a83b4:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = c->r[2] << 2;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000ac8u;
    { c->r[31] = 0x089a83d8u; c->r[5] = c->r[2] + 0u; func_089cb820(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_089a8454; }
    c->r[16] = 0x08ab0000u;
    { c->r[31] = 0x089a83f4u; c->r[16] = (u32)(s32)(s8)mem_r8(ram, c->r[16] + 0x00002e86u); func_0896dc4c(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = c->r[16] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08a60000u;
    c->r[2] = c->r[2] + 0xffffa760u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000000u);
    c->f[0] = mem_rf32(ram, c->r[3] + 0x00000020u);
    c->f[0] = c->f[1] - c->f[0];
    c->f[0] = (f32)fabsf(c->f[0]);
    mem_wf32(ram, c->r[30] + 0x00000014u, c->f[0]);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000014u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x0000000cu);
    alx_c_cond_s(c, 12, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_089a844c; }
    { goto L_089a8454; }
L_089a844c:
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000014u);
    mem_wf32(ram, c->r[30] + 0x0000000cu, c->f[0]);
L_089a8454:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000000u, c->r[2]); goto L_089a839c; }
L_089a8464:
    c->f[1] = mem_rf32(ram, c->r[30] + 0x0000000cu);
    c->r[1] = 0x08a50000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffffab4cu);
    alx_c_cond_s(c, 12, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_089a8488; }
    { goto L_089a84ec; }
L_089a8488:
    { c->r[31] = 0x089a8490u; c->r[4] = 0u + 0x00002095u; func_089346e8(c, ram); }
    c->r[1] = 0x08a50000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffffab50u);
    c->r[1] = 0x08ab0000u;
    { mem_wf32(ram, c->r[1] + 0x00002e9cu, c->f[0]); goto L_089a84ec; }
L_089a84a4:
    c->r[1] = 0x08ab0000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0x00002e9cu);
    c->r[1] = 0x08a80000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00002e40u);
    c->f[0] = c->f[1] - c->f[0];
    c->r[1] = 0x08ab0000u;
    mem_wf32(ram, c->r[1] + 0x00002e9cu, c->f[0]);
    c->r[1] = 0x08ab0000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0x00002e9cu);
    c->f[0] = u2f(0u);
    alx_c_cond_s(c, 12, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_089a84e4; }
    { goto L_089a84ec; }
L_089a84e4:
    c->r[1] = 0x08ab0000u;
    mem_w32(ram, c->r[1] + 0x00002e9cu, 0u);
L_089a84ec:
    c->r[1] = 0x08ab0000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0x00002ea0u);
    c->f[0] = u2f(0u);
    alx_c_cond_s(c, 14, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_089a8510; }
    { goto L_089a85f0; }
L_089a8510:
    mem_w32(ram, c->r[30] + 0x00000010u, 0u);
    mem_w32(ram, c->r[30] + 0x00000004u, 0u);
L_089a8518:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000005u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_089a8530; }
    { goto L_089a85c4; }
L_089a8530:
    { c->r[31] = 0x089a8538u; func_0896dc4c(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08ab0000u;
    c->r[2] = c->r[2] + 0x00002e50u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000ac8u;
    { c->r[31] = 0x089a8574u; c->r[5] = c->r[2] + 0u; func_089cb820(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_089a858c; }
    { goto L_089a85b4; }
L_089a858c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000008cu);
    c->r[2] = c->r[2] & 0x8000u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_089a85a8; }
    { goto L_089a85b4; }
L_089a85a8:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = c->r[2] + 0x00000001u;
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]);
L_089a85b4:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000004u, c->r[2]); goto L_089a8518; }
L_089a85c4:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = 0u + 0x00000001u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_089a8638; }
    { c->r[31] = 0x089a85dcu; c->r[4] = 0u + 0x00002094u; func_089346e8(c, ram); }
    c->r[1] = 0x08a50000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffffab48u);
    c->r[1] = 0x08ab0000u;
    { mem_wf32(ram, c->r[1] + 0x00002ea0u, c->f[0]); goto L_089a8638; }
L_089a85f0:
    c->r[1] = 0x08ab0000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0x00002ea0u);
    c->r[1] = 0x08a80000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00002e40u);
    c->f[0] = c->f[1] - c->f[0];
    c->r[1] = 0x08ab0000u;
    mem_wf32(ram, c->r[1] + 0x00002ea0u, c->f[0]);
    c->r[1] = 0x08ab0000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0x00002ea0u);
    c->f[0] = u2f(0u);
    alx_c_cond_s(c, 12, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_089a8630; }
    { goto L_089a8638; }
L_089a8630:
    c->r[1] = 0x08ab0000u;
    mem_w32(ram, c->r[1] + 0x00002ea0u, 0u);
L_089a8638:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000028u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000024u);
    c->r[16] = mem_r32(ram, c->r[29] + 0x00000020u);
    { c->r[29] = c->r[29] + 0x00000030u; return; }
    return; /* fell out of func_089a8108 */
}

/* func_089ac96c  0x089ac96c..0x089ad018  1708 bytes, source=fde */
void func_089ac96c(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089ac96cu);
    c->r[29] = c->r[29] + 0xffffffd0u;
    mem_w32(ram, c->r[29] + 0x00000024u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000020u, c->r[30]);
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
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000030u);
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = (c->r[3] < 0x00000009u) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_089ad004; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08a50000u;
    c->r[2] = c->r[2] + 0xffffafdcu;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    { u32 _t = c->r[2]; switch (_t) { case 0x089ac9f4u: goto L_089ac9f4; case 0x089acb54u: goto L_089acb54; case 0x089accbcu: goto L_089accbc; case 0x089ace44u: goto L_089ace44; case 0x089ad004u: goto L_089ad004; default: recomp_trap_unknown_indirect(c, ram, 0x089ac9ecu, _t); return; } }
L_089ac9f4:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000008cu);
    c->r[2] = c->r[2] & 0x0002u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_089aca88; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000008cu);
    c->r[2] = c->r[2] | 0x0800u;
    mem_w32(ram, c->r[3] + 0x0000008cu, c->r[2]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x0000008cu);
    c->r[2] = 0xffbf0000u;
    c->r[2] = c->r[2] | 0xffffu;
    c->r[2] = c->r[3] & c->r[2];
    mem_w32(ram, c->r[4] + 0x0000008cu, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = 0u + 0x0000000au;
    mem_w16(ram, c->r[3] + 0x000000b0u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[4] = mem_r32(ram, c->r[2] + 0x0000001cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000001cu);
    c->r[3] = mem_r32(ram, c->r[2] + 0x0000008cu);
    c->r[2] = 0x00400000u;
    c->r[2] = c->r[3] | c->r[2];
    mem_w32(ram, c->r[4] + 0x0000008cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[4] = mem_r32(ram, c->r[2] + 0x0000001cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000001cu);
    c->r[3] = mem_r32(ram, c->r[2] + 0x0000008cu);
    c->r[2] = 0u + 0xfffff7ffu;
    c->r[2] = c->r[3] & c->r[2];
    { mem_w32(ram, c->r[4] + 0x0000008cu, c->r[2]); goto L_089acac8; }
L_089aca88:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x0000008cu);
    c->r[2] = 0x00400000u;
    c->r[2] = c->r[3] | c->r[2];
    mem_w32(ram, c->r[4] + 0x0000008cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    mem_w16(ram, c->r[2] + 0x000000b0u, 0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[4] = mem_r32(ram, c->r[2] + 0x0000001cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000001cu);
    c->r[3] = mem_r32(ram, c->r[2] + 0x0000008cu);
    c->r[2] = 0x00200000u;
    c->r[2] = c->r[3] | c->r[2];
    mem_w32(ram, c->r[4] + 0x0000008cu, c->r[2]);
L_089acac8:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[2] + 0x00000010u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000ac8u;
    { c->r[31] = 0x089acae4u; c->r[5] = c->r[2] + 0u; func_089cb820(c, ram); }
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    { int _c = (c->r[2] == 0u); if (_c) goto L_089acb24; }
    c->r[4] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = mem_r32(ram, c->r[2] + 0x0000008cu);
    c->r[2] = 0u + 0xfffffbffu;
    c->r[2] = c->r[3] & c->r[2];
    mem_w32(ram, c->r[4] + 0x0000008cu, c->r[2]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = mem_r32(ram, c->r[2] + 0x0000008cu);
    c->r[2] = 0u + 0xfffff7ffu;
    c->r[2] = c->r[3] & c->r[2];
    mem_w32(ram, c->r[4] + 0x0000008cu, c->r[2]);
L_089acb24:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000008cu);
    c->r[2] = c->r[2] & 0x0002u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_089acb48; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[1] = 0x08ab0000u;
    { mem_w32(ram, c->r[1] + 0x000030a4u, c->r[2]); goto L_089ad004; }
L_089acb48:
    c->r[1] = 0x08ab0000u;
    { mem_w32(ram, c->r[1] + 0x000030a8u, 0u); goto L_089ad004; }
L_089acb54:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000008cu);
    c->r[2] = c->r[2] & 0x0002u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_089acbe8; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000008cu);
    c->r[2] = c->r[2] | 0x0800u;
    mem_w32(ram, c->r[3] + 0x0000008cu, c->r[2]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x0000008cu);
    c->r[2] = 0xffbf0000u;
    c->r[2] = c->r[2] | 0xffffu;
    c->r[2] = c->r[3] & c->r[2];
    mem_w32(ram, c->r[4] + 0x0000008cu, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = 0u + 0x0000000au;
    mem_w16(ram, c->r[3] + 0x000000b0u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[4] = mem_r32(ram, c->r[2] + 0x0000001cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000001cu);
    c->r[3] = mem_r32(ram, c->r[2] + 0x0000008cu);
    c->r[2] = 0x00400000u;
    c->r[2] = c->r[3] | c->r[2];
    mem_w32(ram, c->r[4] + 0x0000008cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[4] = mem_r32(ram, c->r[2] + 0x0000001cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000001cu);
    c->r[3] = mem_r32(ram, c->r[2] + 0x0000008cu);
    c->r[2] = 0u + 0xfffff7ffu;
    c->r[2] = c->r[3] & c->r[2];
    { mem_w32(ram, c->r[4] + 0x0000008cu, c->r[2]); goto L_089acc30; }
L_089acbe8:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x0000008cu);
    c->r[2] = 0x00400000u;
    c->r[2] = c->r[3] | c->r[2];
    mem_w32(ram, c->r[4] + 0x0000008cu, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = 0u + 0x0000000au;
    mem_w16(ram, c->r[3] + 0x000000b0u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[4] = mem_r32(ram, c->r[2] + 0x0000001cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000001cu);
    c->r[3] = mem_r32(ram, c->r[2] + 0x0000008cu);
    c->r[2] = 0xffdf0000u;
    c->r[2] = c->r[2] | 0xffffu;
    c->r[2] = c->r[3] & c->r[2];
    mem_w32(ram, c->r[4] + 0x0000008cu, c->r[2]);
L_089acc30:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[2] + 0x00000010u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000ac8u;
    { c->r[31] = 0x089acc4cu; c->r[5] = c->r[2] + 0u; func_089cb820(c, ram); }
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    { int _c = (c->r[2] == 0u); if (_c) goto L_089acc8c; }
    c->r[4] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = mem_r32(ram, c->r[2] + 0x0000008cu);
    c->r[2] = 0u + 0xfffffbffu;
    c->r[2] = c->r[3] & c->r[2];
    mem_w32(ram, c->r[4] + 0x0000008cu, c->r[2]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = mem_r32(ram, c->r[2] + 0x0000008cu);
    c->r[2] = 0u + 0xfffff7ffu;
    c->r[2] = c->r[3] & c->r[2];
    mem_w32(ram, c->r[4] + 0x0000008cu, c->r[2]);
L_089acc8c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000008cu);
    c->r[2] = c->r[2] & 0x0002u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_089accb0; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[1] = 0x08ab0000u;
    { mem_w32(ram, c->r[1] + 0x000030a4u, c->r[2]); goto L_089ad004; }
L_089accb0:
    c->r[1] = 0x08ab0000u;
    { mem_w32(ram, c->r[1] + 0x000030a8u, 0u); goto L_089ad004; }
L_089accbc:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x0000008cu);
    c->r[2] = 0x00400000u;
    c->r[2] = c->r[3] | c->r[2];
    mem_w32(ram, c->r[4] + 0x0000008cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    mem_w16(ram, c->r[2] + 0x000000b0u, 0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000008cu);
    c->r[2] = c->r[2] & 0x0002u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_089acd34; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[4] = mem_r32(ram, c->r[2] + 0x0000001cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000001cu);
    c->r[3] = mem_r32(ram, c->r[2] + 0x0000008cu);
    c->r[2] = 0xffbf0000u;
    c->r[2] = c->r[2] | 0xffffu;
    c->r[2] = c->r[3] & c->r[2];
    mem_w32(ram, c->r[4] + 0x0000008cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x0000001cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000001cu);
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000008cu);
    c->r[2] = c->r[2] | 0x0800u;
    { mem_w32(ram, c->r[3] + 0x0000008cu, c->r[2]); goto L_089acd58; }
L_089acd34:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[4] = mem_r32(ram, c->r[2] + 0x0000001cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000001cu);
    c->r[3] = mem_r32(ram, c->r[2] + 0x0000008cu);
    c->r[2] = 0xffdf0000u;
    c->r[2] = c->r[2] | 0xffffu;
    c->r[2] = c->r[3] & c->r[2];
    mem_w32(ram, c->r[4] + 0x0000008cu, c->r[2]);
L_089acd58:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000008cu);
    c->r[2] = c->r[2] & 0x0002u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_089acdf8; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[2] + 0x00000010u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000ac8u;
    { c->r[31] = 0x089acd88u; c->r[5] = c->r[2] + 0u; func_089cb820(c, ram); }
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    { int _c = (c->r[2] == 0u); if (_c) goto L_089ad004; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0x08a80000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00002ed8u);
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_089acdc0; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000001cu);
    c->r[1] = 0x08ab0000u;
    { mem_w32(ram, c->r[1] + 0x000030a4u, c->r[2]); goto L_089ad004; }
L_089acdc0:
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000008cu);
    c->r[2] = c->r[2] | 0x0400u;
    mem_w32(ram, c->r[3] + 0x0000008cu, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000008cu);
    c->r[2] = c->r[2] | 0x0800u;
    mem_w32(ram, c->r[3] + 0x0000008cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[1] = 0x08ab0000u;
    { mem_w32(ram, c->r[1] + 0x000030a4u, c->r[2]); goto L_089ad004; }
L_089acdf8:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[2] + 0x00000010u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000ac8u;
    { c->r[31] = 0x089ace14u; c->r[5] = c->r[2] + 0u; func_089cb820(c, ram); }
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    { int _c = (c->r[2] == 0u); if (_c) goto L_089ad004; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000008cu);
    c->r[2] = c->r[2] | 0x0400u;
    mem_w32(ram, c->r[3] + 0x0000008cu, c->r[2]);
    c->r[1] = 0x08ab0000u;
    { mem_w32(ram, c->r[1] + 0x000030a8u, 0u); goto L_089ad004; }
L_089ace44:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000008cu);
    c->r[2] = c->r[2] | 0x0010u;
    mem_w32(ram, c->r[3] + 0x0000008cu, c->r[2]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x0000008cu);
    c->r[2] = 0x00400000u;
    c->r[2] = c->r[3] | c->r[2];
    mem_w32(ram, c->r[4] + 0x0000008cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    mem_w16(ram, c->r[2] + 0x000000b0u, 0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x0000001cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000001cu);
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000008cu);
    c->r[2] = c->r[2] | 0x0020u;
    mem_w32(ram, c->r[3] + 0x0000008cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[4] = mem_r32(ram, c->r[2] + 0x0000001cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000001cu);
    c->r[3] = mem_r32(ram, c->r[2] + 0x0000008cu);
    c->r[2] = 0xffdf0000u;
    c->r[2] = c->r[2] | 0xffffu;
    c->r[2] = c->r[3] & c->r[2];
    mem_w32(ram, c->r[4] + 0x0000008cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000008cu);
    c->r[2] = c->r[2] & 0x0002u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_089aceec; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[4] = mem_r32(ram, c->r[2] + 0x0000001cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000001cu);
    c->r[3] = mem_r32(ram, c->r[2] + 0x0000008cu);
    c->r[2] = 0u + 0xfffff7ffu;
    c->r[2] = c->r[3] & c->r[2];
    mem_w32(ram, c->r[4] + 0x0000008cu, c->r[2]);
L_089aceec:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000008cu);
    c->r[2] = c->r[2] & 0x0002u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_089acf74; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[2] + 0x00000010u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000ac8u;
    { c->r[31] = 0x089acf1cu; c->r[5] = c->r[2] + 0u; func_089cb820(c, ram); }
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    { int _c = (c->r[2] == 0u); if (_c) goto L_089acfd0; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0x08a80000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00002ed8u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_089acfd0; }
    c->r[4] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = mem_r32(ram, c->r[2] + 0x0000008cu);
    c->r[2] = 0u + 0xfffffbffu;
    c->r[2] = c->r[3] & c->r[2];
    mem_w32(ram, c->r[4] + 0x0000008cu, c->r[2]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = mem_r32(ram, c->r[2] + 0x0000008cu);
    c->r[2] = 0u + 0xfffff7ffu;
    c->r[2] = c->r[3] & c->r[2];
    { mem_w32(ram, c->r[4] + 0x0000008cu, c->r[2]); goto L_089acfd0; }
L_089acf74:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[2] + 0x00000010u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000ac8u;
    { c->r[31] = 0x089acf90u; c->r[5] = c->r[2] + 0u; func_089cb820(c, ram); }
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    { int _c = (c->r[2] == 0u); if (_c) goto L_089acfd0; }
    c->r[4] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = mem_r32(ram, c->r[2] + 0x0000008cu);
    c->r[2] = 0u + 0xfffffbffu;
    c->r[2] = c->r[3] & c->r[2];
    mem_w32(ram, c->r[4] + 0x0000008cu, c->r[2]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = mem_r32(ram, c->r[2] + 0x0000008cu);
    c->r[2] = 0u + 0xfffff7ffu;
    c->r[2] = c->r[3] & c->r[2];
    mem_w32(ram, c->r[4] + 0x0000008cu, c->r[2]);
L_089acfd0:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000008cu);
    c->r[2] = c->r[2] & 0x0002u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_089acff0; }
    c->r[2] = 0u + 0x00000004u;
    { mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]); goto L_089acff4; }
L_089acff0:
    mem_w32(ram, c->r[30] + 0x00000010u, 0u);
L_089acff4:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[1] = 0x08ab0000u;
    c->r[1] = c->r[1] + c->r[3];
    mem_w32(ram, c->r[1] + 0x000030a4u, 0u);
L_089ad004:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000024u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000020u);
    { c->r[29] = c->r[29] + 0x00000030u; return; }
    return; /* fell out of func_089ac96c */
}

/* func_089b2d70  0x089b2d70..0x089b2db4  68 bytes, source=sweep */
void func_089b2d70(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089b2d70u);
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
    { c->r[31] = 0x089b2da0u; c->r[5] = c->r[2] + 0u; func_089b27cc(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_089b2d70 */
}

/* func_089b3e84  0x089b3e84..0x089b3eb0  44 bytes, source=residue */
void func_089b3e84(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089b3e84u);
    c->r[29] = c->r[29] + 0xfffffff0u;
    mem_w32(ram, c->r[29] + 0x00000000u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    c->r[2] = 0x08ab0000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00003110u);
    c->r[2] = c->r[2] ^ 0x0800u;
    c->r[2] = (c->r[2] < 0x00000001u) ? 1u : 0u;
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000000u);
    { c->r[29] = c->r[29] + 0x00000010u; return; }
    return; /* fell out of func_089b3e84 */
}

/* func_089b6f80  0x089b6f80..0x089b6ff4  116 bytes, source=sweep */
void func_089b6f80(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089b6f80u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    mem_w32(ram, c->r[30] + 0x00000008u, 0u);
L_089b6f98:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_089b6fac; }
    { goto L_089b6fe4; }
L_089b6fac:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r8(ram, c->r[2] + 0x000000a4u);
    c->r[3] = c->r[2] << 2;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    mem_w32(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]); goto L_089b6f98; }
L_089b6fe4:
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_089b6f80 */
}

/* func_089b8504  0x089b8504..0x089b8534  48 bytes, source=residue */
void func_089b8504(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089b8504u);
    c->r[29] = c->r[29] + 0xffffffd0u;
    mem_w32(ram, c->r[29] + 0x00000020u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    mem_wf32(ram, c->r[30] + 0x00000008u, c->f[12]);
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[6]);
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[7]);
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000020u);
    { c->r[29] = c->r[29] + 0x00000030u; return; }
    return; /* fell out of func_089b8504 */
}

/* func_089b9f64  0x089b9f64..0x089bb69c  5944 bytes, source=residue */
void func_089b9f64(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089b9f64u);
    c->r[29] = c->r[29] + 0xffffffa0u;
    mem_w32(ram, c->r[29] + 0x00000054u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000050u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_089b9f8c; }
    { goto L_089bb688; }
L_089b9f8c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000060u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_089b9fa4; }
    { goto L_089bb688; }
L_089b9fa4:
    c->r[1] = 0x08b80000u;
    mem_w32(ram, c->r[1] + 0xfffff130u, 0u);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = 0x08b80000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0xfffff130u);
    c->r[3] = c->r[2] << 3;
    c->r[2] = mem_r32(ram, c->r[4] + 0x00000060u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x089b9fd0u; c->r[5] = mem_r32(ram, c->r[30] + 0x00000000u); func_0888d554(c, ram); }
    c->r[2] = 0x08b80000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0xfffff130u);
    c->r[2] = c->r[2] + 0x00000001u;
    c->r[1] = 0x08b80000u;
    mem_w32(ram, c->r[1] + 0xfffff130u, c->r[2]);
    c->r[2] = 0x08b80000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0xfffff12cu);
    { int _c = (c->r[2] != 0u); if (_c) goto L_089ba000; }
    c->r[2] = 0u + 0x00000001u;
    c->r[1] = 0x08b80000u;
    mem_w32(ram, c->r[1] + 0xfffff12cu, c->r[2]);
L_089ba000:
    c->r[3] = c->r[30] + 0x00000010u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000010u;
    c->r[4] = c->r[3] + 0u;
    { c->r[31] = 0x089ba018u; c->r[5] = c->r[2] + 0u; func_0888d554(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000000u);
    mem_wf32(ram, c->r[30] + 0x00000020u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000008u);
    mem_wf32(ram, c->r[30] + 0x00000024u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000060u);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000004u);
    c->f[0] = u2f(c->r[2]);
    c->f[1] = (f32)(s32)f2u(c->f[0]);
    c->r[1] = 0x08a50000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffffb28cu);
    c->f[2] = c->f[1] * c->f[0];
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000060u);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000006u);
    c->f[0] = u2f(c->r[2]);
    c->f[1] = (f32)(s32)f2u(c->f[0]);
    c->r[1] = 0x08a50000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffffb290u);
    c->f[0] = c->f[1] * c->f[0];
    c->f[0] = c->f[2] + c->f[0];
    mem_wf32(ram, c->r[30] + 0x00000028u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000060u);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000005u);
    c->f[0] = u2f(c->r[2]);
    c->f[1] = (f32)(s32)f2u(c->f[0]);
    c->r[1] = 0x08a50000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffffb28cu);
    c->f[2] = c->f[1] * c->f[0];
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000060u);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000007u);
    c->f[0] = u2f(c->r[2]);
    c->f[1] = (f32)(s32)f2u(c->f[0]);
    c->r[1] = 0x08a50000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffffb290u);
    c->f[0] = c->f[1] * c->f[0];
    c->f[0] = c->f[2] + c->f[0];
    mem_wf32(ram, c->r[30] + 0x0000002cu, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000030u);
    c->f[0] = u2f(0u);
    alx_c_cond_s(c, 12, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_089ba0e4; }
    { goto L_089ba0f8; }
L_089ba0e4:
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000028u);
    c->r[1] = 0x08a50000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0xffffb290u);
    c->f[0] = c->f[0] + c->f[1];
    mem_wf32(ram, c->r[30] + 0x00000028u, c->f[0]);
L_089ba0f8:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000038u);
    c->f[0] = u2f(0u);
    alx_c_cond_s(c, 12, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_089ba11c; }
    { goto L_089ba130; }
L_089ba11c:
    c->f[0] = mem_rf32(ram, c->r[30] + 0x0000002cu);
    c->r[1] = 0x08a50000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0xffffb290u);
    c->f[0] = c->f[0] + c->f[1];
    mem_wf32(ram, c->r[30] + 0x0000002cu, c->f[0]);
L_089ba130:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000030u);
    c->f[1] = (f32)fabsf(c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000038u);
    c->f[0] = (f32)fabsf(c->f[0]);
    alx_c_cond_s(c, 12, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_089ba160; }
    { goto L_089babd4; }
L_089ba160:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[1] = 0x08a50000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0xffffb294u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000030u);
    c->f[0] = c->f[1] / c->f[0];
    mem_wf32(ram, c->r[30] + 0x00000030u, c->f[0]);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000030u);
    c->r[1] = 0x08a50000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffffb290u);
    c->f[0] = c->f[1] * c->f[0];
    c->f[0] = (f32)fabsf(c->f[0]);
    mem_wf32(ram, c->r[30] + 0x00000034u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000034u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000038u);
    c->f[0] = c->f[1] * c->f[0];
    mem_wf32(ram, c->r[30] + 0x00000038u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000034u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000034u);
    c->f[0] = c->f[1] * c->f[0];
    mem_wf32(ram, c->r[30] + 0x0000003cu, c->f[0]);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000028u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000020u);
    c->f[1] = c->f[1] - c->f[0];
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000030u);
    c->f[0] = c->f[1] * c->f[0];
    mem_wf32(ram, c->r[30] + 0x00000040u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000038u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000040u);
    c->f[1] = c->f[1] * c->f[0];
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000008u);
    c->f[0] = c->f[1] + c->f[0];
    mem_wf32(ram, c->r[30] + 0x00000044u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000034u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000040u);
    c->f[1] = c->f[1] * c->f[0];
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000004u);
    c->f[0] = c->f[1] + c->f[0];
    mem_wf32(ram, c->r[30] + 0x00000048u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000030u);
    c->f[0] = u2f(0u);
    alx_c_cond_s(c, 12, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_089ba234; }
    { goto L_089ba704; }
L_089ba234:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000038u);
    c->f[0] = u2f(0u);
    alx_c_cond_s(c, 12, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_089ba258; }
    { goto L_089ba420; }
L_089ba258:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000028u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000010u);
    alx_c_cond_s(c, 12, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_089ba27c; }
    { goto L_089bb678; }
L_089ba27c:
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000048u);
    c->f[0] = u2f(0u);
    alx_c_cond_s(c, 14, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_089ba29c; }
    { goto L_089bb678; }
L_089ba29c:
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000044u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x0000002cu);
    alx_c_cond_s(c, 12, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_089ba2bc; }
    { goto L_089ba35c; }
L_089ba2bc:
    c->f[1] = mem_rf32(ram, c->r[30] + 0x0000002cu);
    c->r[1] = 0x08a50000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffffb290u);
    c->f[0] = c->f[1] + c->f[0];
    mem_wf32(ram, c->r[30] + 0x0000002cu, c->f[0]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = 0x08b80000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0xfffff130u);
    c->r[3] = c->r[2] << 3;
    c->r[2] = mem_r32(ram, c->r[4] + 0x00000060u);
    c->r[5] = c->r[3] + c->r[2];
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = 0x08b80000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0xfffff130u);
    c->r[3] = c->r[2] << 3;
    c->r[2] = mem_r32(ram, c->r[4] + 0x00000060u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = c->r[2] + 0xfffffff8u;
    c->r[3] = c->r[5] + 0u;
    c->r[4] = mem_lwl(ram, c->r[2] + 0x00000003u, c->r[4]);
    c->r[4] = mem_lwr(ram, c->r[2] + 0x00000000u, c->r[4]);
    c->r[5] = mem_lwl(ram, c->r[2] + 0x00000007u, c->r[5]);
    c->r[5] = mem_lwr(ram, c->r[2] + 0x00000004u, c->r[5]);
    mem_swl(ram, c->r[3] + 0x00000003u, c->r[4]);
    mem_swr(ram, c->r[3] + 0x00000000u, c->r[4]);
    mem_swl(ram, c->r[3] + 0x00000007u, c->r[5]);
    mem_swr(ram, c->r[3] + 0x00000004u, c->r[5]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = 0x08b80000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0xfffff130u);
    c->r[3] = c->r[2] << 3;
    c->r[2] = mem_r32(ram, c->r[4] + 0x00000060u);
    c->r[2] = c->r[3] + c->r[2];
    { c->r[31] = 0x089ba348u; c->r[4] = c->r[2] + 0u; func_0888d86c(c, ram); }
    c->r[2] = 0x08b80000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0xfffff130u);
    c->r[2] = c->r[2] + 0x00000001u;
    c->r[1] = 0x08b80000u;
    mem_w32(ram, c->r[1] + 0xfffff130u, c->r[2]);
L_089ba35c:
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000028u);
    c->r[1] = 0x08a50000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffffb290u);
    c->f[0] = c->f[1] + c->f[0];
    mem_wf32(ram, c->r[30] + 0x00000028u, c->f[0]);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000044u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000038u);
    c->f[0] = c->f[1] + c->f[0];
    mem_wf32(ram, c->r[30] + 0x00000044u, c->f[0]);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000048u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x0000003cu);
    c->f[0] = c->f[1] + c->f[0];
    mem_wf32(ram, c->r[30] + 0x00000048u, c->f[0]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = 0x08b80000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0xfffff130u);
    c->r[3] = c->r[2] << 3;
    c->r[2] = mem_r32(ram, c->r[4] + 0x00000060u);
    c->r[5] = c->r[3] + c->r[2];
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = 0x08b80000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0xfffff130u);
    c->r[3] = c->r[2] << 3;
    c->r[2] = mem_r32(ram, c->r[4] + 0x00000060u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = c->r[2] + 0xfffffff8u;
    c->r[3] = c->r[5] + 0u;
    c->r[4] = mem_lwl(ram, c->r[2] + 0x00000003u, c->r[4]);
    c->r[4] = mem_lwr(ram, c->r[2] + 0x00000000u, c->r[4]);
    c->r[5] = mem_lwl(ram, c->r[2] + 0x00000007u, c->r[5]);
    c->r[5] = mem_lwr(ram, c->r[2] + 0x00000004u, c->r[5]);
    mem_swl(ram, c->r[3] + 0x00000003u, c->r[4]);
    mem_swr(ram, c->r[3] + 0x00000000u, c->r[4]);
    mem_swl(ram, c->r[3] + 0x00000007u, c->r[5]);
    mem_swr(ram, c->r[3] + 0x00000004u, c->r[5]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = 0x08b80000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0xfffff130u);
    c->r[3] = c->r[2] << 3;
    c->r[2] = mem_r32(ram, c->r[4] + 0x00000060u);
    c->r[2] = c->r[3] + c->r[2];
    { c->r[31] = 0x089ba408u; c->r[4] = c->r[2] + 0u; func_0888d720(c, ram); }
    c->r[2] = 0x08b80000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0xfffff130u);
    c->r[2] = c->r[2] + 0x00000001u;
    c->r[1] = 0x08b80000u;
    { mem_w32(ram, c->r[1] + 0xfffff130u, c->r[2]); goto L_089ba258; }
L_089ba420:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000038u);
    c->f[0] = u2f(0u);
    alx_c_cond_s(c, 12, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_089ba444; }
    { goto L_089ba60c; }
L_089ba444:
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000048u);
    c->f[0] = u2f(0u);
    alx_c_cond_s(c, 14, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_089ba464; }
    { goto L_089ba60c; }
L_089ba464:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000028u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000010u);
    alx_c_cond_s(c, 12, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_089ba488; }
    { goto L_089bb678; }
L_089ba488:
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000044u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x0000002cu);
    alx_c_cond_s(c, 12, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_089ba4a8; }
    { goto L_089ba548; }
L_089ba4a8:
    c->f[1] = mem_rf32(ram, c->r[30] + 0x0000002cu);
    c->r[1] = 0x08a50000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffffb290u);
    c->f[0] = c->f[1] - c->f[0];
    mem_wf32(ram, c->r[30] + 0x0000002cu, c->f[0]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = 0x08b80000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0xfffff130u);
    c->r[3] = c->r[2] << 3;
    c->r[2] = mem_r32(ram, c->r[4] + 0x00000060u);
    c->r[5] = c->r[3] + c->r[2];
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = 0x08b80000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0xfffff130u);
    c->r[3] = c->r[2] << 3;
    c->r[2] = mem_r32(ram, c->r[4] + 0x00000060u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = c->r[2] + 0xfffffff8u;
    c->r[3] = c->r[5] + 0u;
    c->r[4] = mem_lwl(ram, c->r[2] + 0x00000003u, c->r[4]);
    c->r[4] = mem_lwr(ram, c->r[2] + 0x00000000u, c->r[4]);
    c->r[5] = mem_lwl(ram, c->r[2] + 0x00000007u, c->r[5]);
    c->r[5] = mem_lwr(ram, c->r[2] + 0x00000004u, c->r[5]);
    mem_swl(ram, c->r[3] + 0x00000003u, c->r[4]);
    mem_swr(ram, c->r[3] + 0x00000000u, c->r[4]);
    mem_swl(ram, c->r[3] + 0x00000007u, c->r[5]);
    mem_swr(ram, c->r[3] + 0x00000004u, c->r[5]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = 0x08b80000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0xfffff130u);
    c->r[3] = c->r[2] << 3;
    c->r[2] = mem_r32(ram, c->r[4] + 0x00000060u);
    c->r[2] = c->r[3] + c->r[2];
    { c->r[31] = 0x089ba534u; c->r[4] = c->r[2] + 0u; func_0888d910(c, ram); }
    c->r[2] = 0x08b80000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0xfffff130u);
    c->r[2] = c->r[2] + 0x00000001u;
    c->r[1] = 0x08b80000u;
    mem_w32(ram, c->r[1] + 0xfffff130u, c->r[2]);
L_089ba548:
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000028u);
    c->r[1] = 0x08a50000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffffb290u);
    c->f[0] = c->f[1] + c->f[0];
    mem_wf32(ram, c->r[30] + 0x00000028u, c->f[0]);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000044u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000038u);
    c->f[0] = c->f[1] + c->f[0];
    mem_wf32(ram, c->r[30] + 0x00000044u, c->f[0]);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000048u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x0000003cu);
    c->f[0] = c->f[1] + c->f[0];
    mem_wf32(ram, c->r[30] + 0x00000048u, c->f[0]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = 0x08b80000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0xfffff130u);
    c->r[3] = c->r[2] << 3;
    c->r[2] = mem_r32(ram, c->r[4] + 0x00000060u);
    c->r[5] = c->r[3] + c->r[2];
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = 0x08b80000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0xfffff130u);
    c->r[3] = c->r[2] << 3;
    c->r[2] = mem_r32(ram, c->r[4] + 0x00000060u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = c->r[2] + 0xfffffff8u;
    c->r[3] = c->r[5] + 0u;
    c->r[4] = mem_lwl(ram, c->r[2] + 0x00000003u, c->r[4]);
    c->r[4] = mem_lwr(ram, c->r[2] + 0x00000000u, c->r[4]);
    c->r[5] = mem_lwl(ram, c->r[2] + 0x00000007u, c->r[5]);
    c->r[5] = mem_lwr(ram, c->r[2] + 0x00000004u, c->r[5]);
    mem_swl(ram, c->r[3] + 0x00000003u, c->r[4]);
    mem_swr(ram, c->r[3] + 0x00000000u, c->r[4]);
    mem_swl(ram, c->r[3] + 0x00000007u, c->r[5]);
    mem_swr(ram, c->r[3] + 0x00000004u, c->r[5]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = 0x08b80000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0xfffff130u);
    c->r[3] = c->r[2] << 3;
    c->r[2] = mem_r32(ram, c->r[4] + 0x00000060u);
    c->r[2] = c->r[3] + c->r[2];
    { c->r[31] = 0x089ba5f4u; c->r[4] = c->r[2] + 0u; func_0888d720(c, ram); }
    c->r[2] = 0x08b80000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0xfffff130u);
    c->r[2] = c->r[2] + 0x00000001u;
    c->r[1] = 0x08b80000u;
    { mem_w32(ram, c->r[1] + 0xfffff130u, c->r[2]); goto L_089ba464; }
L_089ba60c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000028u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000010u);
    alx_c_cond_s(c, 12, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_089ba630; }
    { goto L_089bb678; }
L_089ba630:
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000048u);
    c->f[0] = u2f(0u);
    alx_c_cond_s(c, 14, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_089ba650; }
    { goto L_089bb678; }
L_089ba650:
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000028u);
    c->r[1] = 0x08a50000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffffb290u);
    c->f[0] = c->f[1] + c->f[0];
    mem_wf32(ram, c->r[30] + 0x00000028u, c->f[0]);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000048u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x0000003cu);
    c->f[0] = c->f[1] + c->f[0];
    mem_wf32(ram, c->r[30] + 0x00000048u, c->f[0]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = 0x08b80000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0xfffff130u);
    c->r[3] = c->r[2] << 3;
    c->r[2] = mem_r32(ram, c->r[4] + 0x00000060u);
    c->r[5] = c->r[3] + c->r[2];
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = 0x08b80000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0xfffff130u);
    c->r[3] = c->r[2] << 3;
    c->r[2] = mem_r32(ram, c->r[4] + 0x00000060u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = c->r[2] + 0xfffffff8u;
    c->r[3] = c->r[5] + 0u;
    c->r[4] = mem_lwl(ram, c->r[2] + 0x00000003u, c->r[4]);
    c->r[4] = mem_lwr(ram, c->r[2] + 0x00000000u, c->r[4]);
    c->r[5] = mem_lwl(ram, c->r[2] + 0x00000007u, c->r[5]);
    c->r[5] = mem_lwr(ram, c->r[2] + 0x00000004u, c->r[5]);
    mem_swl(ram, c->r[3] + 0x00000003u, c->r[4]);
    mem_swr(ram, c->r[3] + 0x00000000u, c->r[4]);
    mem_swl(ram, c->r[3] + 0x00000007u, c->r[5]);
    mem_swr(ram, c->r[3] + 0x00000004u, c->r[5]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = 0x08b80000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0xfffff130u);
    c->r[3] = c->r[2] << 3;
    c->r[2] = mem_r32(ram, c->r[4] + 0x00000060u);
    c->r[2] = c->r[3] + c->r[2];
    { c->r[31] = 0x089ba6ecu; c->r[4] = c->r[2] + 0u; func_0888d720(c, ram); }
    c->r[2] = 0x08b80000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0xfffff130u);
    c->r[2] = c->r[2] + 0x00000001u;
    c->r[1] = 0x08b80000u;
    { mem_w32(ram, c->r[1] + 0xfffff130u, c->r[2]); goto L_089ba60c; }
L_089ba704:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000038u);
    c->f[0] = u2f(0u);
    alx_c_cond_s(c, 12, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_089ba728; }
    { goto L_089ba8f0; }
L_089ba728:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000028u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000010u);
    alx_c_cond_s(c, 12, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_089ba74c; }
    { goto L_089bb678; }
L_089ba74c:
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000048u);
    c->f[0] = u2f(0u);
    alx_c_cond_s(c, 14, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_089ba76c; }
    { goto L_089bb678; }
L_089ba76c:
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000044u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x0000002cu);
    alx_c_cond_s(c, 12, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_089ba78c; }
    { goto L_089ba82c; }
L_089ba78c:
    c->f[1] = mem_rf32(ram, c->r[30] + 0x0000002cu);
    c->r[1] = 0x08a50000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffffb290u);
    c->f[0] = c->f[1] + c->f[0];
    mem_wf32(ram, c->r[30] + 0x0000002cu, c->f[0]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = 0x08b80000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0xfffff130u);
    c->r[3] = c->r[2] << 3;
    c->r[2] = mem_r32(ram, c->r[4] + 0x00000060u);
    c->r[5] = c->r[3] + c->r[2];
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = 0x08b80000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0xfffff130u);
    c->r[3] = c->r[2] << 3;
    c->r[2] = mem_r32(ram, c->r[4] + 0x00000060u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = c->r[2] + 0xfffffff8u;
    c->r[3] = c->r[5] + 0u;
    c->r[4] = mem_lwl(ram, c->r[2] + 0x00000003u, c->r[4]);
    c->r[4] = mem_lwr(ram, c->r[2] + 0x00000000u, c->r[4]);
    c->r[5] = mem_lwl(ram, c->r[2] + 0x00000007u, c->r[5]);
    c->r[5] = mem_lwr(ram, c->r[2] + 0x00000004u, c->r[5]);
    mem_swl(ram, c->r[3] + 0x00000003u, c->r[4]);
    mem_swr(ram, c->r[3] + 0x00000000u, c->r[4]);
    mem_swl(ram, c->r[3] + 0x00000007u, c->r[5]);
    mem_swr(ram, c->r[3] + 0x00000004u, c->r[5]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = 0x08b80000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0xfffff130u);
    c->r[3] = c->r[2] << 3;
    c->r[2] = mem_r32(ram, c->r[4] + 0x00000060u);
    c->r[2] = c->r[3] + c->r[2];
    { c->r[31] = 0x089ba818u; c->r[4] = c->r[2] + 0u; func_0888d86c(c, ram); }
    c->r[2] = 0x08b80000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0xfffff130u);
    c->r[2] = c->r[2] + 0x00000001u;
    c->r[1] = 0x08b80000u;
    mem_w32(ram, c->r[1] + 0xfffff130u, c->r[2]);
L_089ba82c:
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000028u);
    c->r[1] = 0x08a50000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffffb290u);
    c->f[0] = c->f[1] - c->f[0];
    mem_wf32(ram, c->r[30] + 0x00000028u, c->f[0]);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000044u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000038u);
    c->f[0] = c->f[1] + c->f[0];
    mem_wf32(ram, c->r[30] + 0x00000044u, c->f[0]);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000048u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x0000003cu);
    c->f[0] = c->f[1] + c->f[0];
    mem_wf32(ram, c->r[30] + 0x00000048u, c->f[0]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = 0x08b80000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0xfffff130u);
    c->r[3] = c->r[2] << 3;
    c->r[2] = mem_r32(ram, c->r[4] + 0x00000060u);
    c->r[5] = c->r[3] + c->r[2];
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = 0x08b80000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0xfffff130u);
    c->r[3] = c->r[2] << 3;
    c->r[2] = mem_r32(ram, c->r[4] + 0x00000060u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = c->r[2] + 0xfffffff8u;
    c->r[3] = c->r[5] + 0u;
    c->r[4] = mem_lwl(ram, c->r[2] + 0x00000003u, c->r[4]);
    c->r[4] = mem_lwr(ram, c->r[2] + 0x00000000u, c->r[4]);
    c->r[5] = mem_lwl(ram, c->r[2] + 0x00000007u, c->r[5]);
    c->r[5] = mem_lwr(ram, c->r[2] + 0x00000004u, c->r[5]);
    mem_swl(ram, c->r[3] + 0x00000003u, c->r[4]);
    mem_swr(ram, c->r[3] + 0x00000000u, c->r[4]);
    mem_swl(ram, c->r[3] + 0x00000007u, c->r[5]);
    mem_swr(ram, c->r[3] + 0x00000004u, c->r[5]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = 0x08b80000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0xfffff130u);
    c->r[3] = c->r[2] << 3;
    c->r[2] = mem_r32(ram, c->r[4] + 0x00000060u);
    c->r[2] = c->r[3] + c->r[2];
    { c->r[31] = 0x089ba8d8u; c->r[4] = c->r[2] + 0u; func_0888d7c4(c, ram); }
    c->r[2] = 0x08b80000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0xfffff130u);
    c->r[2] = c->r[2] + 0x00000001u;
    c->r[1] = 0x08b80000u;
    { mem_w32(ram, c->r[1] + 0xfffff130u, c->r[2]); goto L_089ba728; }
L_089ba8f0:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000038u);
    c->f[0] = u2f(0u);
    alx_c_cond_s(c, 12, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_089ba914; }
    { goto L_089baadc; }
L_089ba914:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000028u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000010u);
    alx_c_cond_s(c, 12, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_089ba938; }
    { goto L_089bb678; }
L_089ba938:
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000048u);
    c->f[0] = u2f(0u);
    alx_c_cond_s(c, 14, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_089ba958; }
    { goto L_089bb678; }
L_089ba958:
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000044u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x0000002cu);
    alx_c_cond_s(c, 12, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_089ba978; }
    { goto L_089baa18; }
L_089ba978:
    c->f[1] = mem_rf32(ram, c->r[30] + 0x0000002cu);
    c->r[1] = 0x08a50000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffffb290u);
    c->f[0] = c->f[1] - c->f[0];
    mem_wf32(ram, c->r[30] + 0x0000002cu, c->f[0]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = 0x08b80000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0xfffff130u);
    c->r[3] = c->r[2] << 3;
    c->r[2] = mem_r32(ram, c->r[4] + 0x00000060u);
    c->r[5] = c->r[3] + c->r[2];
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = 0x08b80000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0xfffff130u);
    c->r[3] = c->r[2] << 3;
    c->r[2] = mem_r32(ram, c->r[4] + 0x00000060u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = c->r[2] + 0xfffffff8u;
    c->r[3] = c->r[5] + 0u;
    c->r[4] = mem_lwl(ram, c->r[2] + 0x00000003u, c->r[4]);
    c->r[4] = mem_lwr(ram, c->r[2] + 0x00000000u, c->r[4]);
    c->r[5] = mem_lwl(ram, c->r[2] + 0x00000007u, c->r[5]);
    c->r[5] = mem_lwr(ram, c->r[2] + 0x00000004u, c->r[5]);
    mem_swl(ram, c->r[3] + 0x00000003u, c->r[4]);
    mem_swr(ram, c->r[3] + 0x00000000u, c->r[4]);
    mem_swl(ram, c->r[3] + 0x00000007u, c->r[5]);
    mem_swr(ram, c->r[3] + 0x00000004u, c->r[5]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = 0x08b80000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0xfffff130u);
    c->r[3] = c->r[2] << 3;
    c->r[2] = mem_r32(ram, c->r[4] + 0x00000060u);
    c->r[2] = c->r[3] + c->r[2];
    { c->r[31] = 0x089baa04u; c->r[4] = c->r[2] + 0u; func_0888d910(c, ram); }
    c->r[2] = 0x08b80000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0xfffff130u);
    c->r[2] = c->r[2] + 0x00000001u;
    c->r[1] = 0x08b80000u;
    mem_w32(ram, c->r[1] + 0xfffff130u, c->r[2]);
L_089baa18:
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000028u);
    c->r[1] = 0x08a50000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffffb290u);
    c->f[0] = c->f[1] - c->f[0];
    mem_wf32(ram, c->r[30] + 0x00000028u, c->f[0]);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000044u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000038u);
    c->f[0] = c->f[1] + c->f[0];
    mem_wf32(ram, c->r[30] + 0x00000044u, c->f[0]);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000048u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x0000003cu);
    c->f[0] = c->f[1] + c->f[0];
    mem_wf32(ram, c->r[30] + 0x00000048u, c->f[0]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = 0x08b80000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0xfffff130u);
    c->r[3] = c->r[2] << 3;
    c->r[2] = mem_r32(ram, c->r[4] + 0x00000060u);
    c->r[5] = c->r[3] + c->r[2];
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = 0x08b80000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0xfffff130u);
    c->r[3] = c->r[2] << 3;
    c->r[2] = mem_r32(ram, c->r[4] + 0x00000060u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = c->r[2] + 0xfffffff8u;
    c->r[3] = c->r[5] + 0u;
    c->r[4] = mem_lwl(ram, c->r[2] + 0x00000003u, c->r[4]);
    c->r[4] = mem_lwr(ram, c->r[2] + 0x00000000u, c->r[4]);
    c->r[5] = mem_lwl(ram, c->r[2] + 0x00000007u, c->r[5]);
    c->r[5] = mem_lwr(ram, c->r[2] + 0x00000004u, c->r[5]);
    mem_swl(ram, c->r[3] + 0x00000003u, c->r[4]);
    mem_swr(ram, c->r[3] + 0x00000000u, c->r[4]);
    mem_swl(ram, c->r[3] + 0x00000007u, c->r[5]);
    mem_swr(ram, c->r[3] + 0x00000004u, c->r[5]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = 0x08b80000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0xfffff130u);
    c->r[3] = c->r[2] << 3;
    c->r[2] = mem_r32(ram, c->r[4] + 0x00000060u);
    c->r[2] = c->r[3] + c->r[2];
    { c->r[31] = 0x089baac4u; c->r[4] = c->r[2] + 0u; func_0888d7c4(c, ram); }
    c->r[2] = 0x08b80000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0xfffff130u);
    c->r[2] = c->r[2] + 0x00000001u;
    c->r[1] = 0x08b80000u;
    { mem_w32(ram, c->r[1] + 0xfffff130u, c->r[2]); goto L_089ba914; }
L_089baadc:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000028u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000010u);
    alx_c_cond_s(c, 12, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_089bab00; }
    { goto L_089bb678; }
L_089bab00:
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000048u);
    c->f[0] = u2f(0u);
    alx_c_cond_s(c, 14, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_089bab20; }
    { goto L_089bb678; }
L_089bab20:
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000028u);
    c->r[1] = 0x08a50000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffffb290u);
    c->f[0] = c->f[1] - c->f[0];
    mem_wf32(ram, c->r[30] + 0x00000028u, c->f[0]);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000048u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x0000003cu);
    c->f[0] = c->f[1] + c->f[0];
    mem_wf32(ram, c->r[30] + 0x00000048u, c->f[0]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = 0x08b80000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0xfffff130u);
    c->r[3] = c->r[2] << 3;
    c->r[2] = mem_r32(ram, c->r[4] + 0x00000060u);
    c->r[5] = c->r[3] + c->r[2];
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = 0x08b80000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0xfffff130u);
    c->r[3] = c->r[2] << 3;
    c->r[2] = mem_r32(ram, c->r[4] + 0x00000060u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = c->r[2] + 0xfffffff8u;
    c->r[3] = c->r[5] + 0u;
    c->r[4] = mem_lwl(ram, c->r[2] + 0x00000003u, c->r[4]);
    c->r[4] = mem_lwr(ram, c->r[2] + 0x00000000u, c->r[4]);
    c->r[5] = mem_lwl(ram, c->r[2] + 0x00000007u, c->r[5]);
    c->r[5] = mem_lwr(ram, c->r[2] + 0x00000004u, c->r[5]);
    mem_swl(ram, c->r[3] + 0x00000003u, c->r[4]);
    mem_swr(ram, c->r[3] + 0x00000000u, c->r[4]);
    mem_swl(ram, c->r[3] + 0x00000007u, c->r[5]);
    mem_swr(ram, c->r[3] + 0x00000004u, c->r[5]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = 0x08b80000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0xfffff130u);
    c->r[3] = c->r[2] << 3;
    c->r[2] = mem_r32(ram, c->r[4] + 0x00000060u);
    c->r[2] = c->r[3] + c->r[2];
    { c->r[31] = 0x089babbcu; c->r[4] = c->r[2] + 0u; func_0888d7c4(c, ram); }
    c->r[2] = 0x08b80000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0xfffff130u);
    c->r[2] = c->r[2] + 0x00000001u;
    c->r[1] = 0x08b80000u;
    { mem_w32(ram, c->r[1] + 0xfffff130u, c->r[2]); goto L_089baadc; }
L_089babd4:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000030u);
    c->f[1] = (f32)fabsf(c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000038u);
    c->f[0] = (f32)fabsf(c->f[0]);
    alx_c_cond_s(c, 12, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_089bac04; }
    { goto L_089bb678; }
L_089bac04:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[1] = 0x08a50000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0xffffb294u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000038u);
    c->f[0] = c->f[1] / c->f[0];
    mem_wf32(ram, c->r[30] + 0x00000048u, c->f[0]);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000048u);
    c->r[1] = 0x08a50000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffffb290u);
    c->f[0] = c->f[1] * c->f[0];
    c->f[0] = (f32)fabsf(c->f[0]);
    mem_wf32(ram, c->r[30] + 0x00000044u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000044u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000030u);
    c->f[0] = c->f[1] * c->f[0];
    mem_wf32(ram, c->r[30] + 0x00000040u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000044u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000034u);
    c->f[0] = c->f[1] * c->f[0];
    mem_wf32(ram, c->r[30] + 0x0000003cu, c->f[0]);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x0000002cu);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000024u);
    c->f[1] = c->f[1] - c->f[0];
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000048u);
    c->f[0] = c->f[1] * c->f[0];
    mem_wf32(ram, c->r[30] + 0x00000038u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000030u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000038u);
    c->f[1] = c->f[1] * c->f[0];
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000000u);
    c->f[0] = c->f[1] + c->f[0];
    mem_wf32(ram, c->r[30] + 0x00000034u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000034u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000038u);
    c->f[1] = c->f[1] * c->f[0];
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000004u);
    c->f[0] = c->f[1] + c->f[0];
    mem_wf32(ram, c->r[30] + 0x00000030u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000038u);
    c->f[0] = u2f(0u);
    alx_c_cond_s(c, 12, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_089bacd8; }
    { goto L_089bb198; }
L_089bacd8:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000030u);
    c->f[0] = u2f(0u);
    alx_c_cond_s(c, 12, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_089bacfc; }
    { goto L_089baec4; }
L_089bacfc:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x0000002cu);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000018u);
    alx_c_cond_s(c, 12, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_089bad20; }
    { goto L_089bb678; }
L_089bad20:
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000030u);
    c->f[0] = u2f(0u);
    alx_c_cond_s(c, 14, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_089bad40; }
    { goto L_089bb678; }
L_089bad40:
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000034u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000028u);
    alx_c_cond_s(c, 12, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_089bad60; }
    { goto L_089bae00; }
L_089bad60:
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000028u);
    c->r[1] = 0x08a50000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffffb290u);
    c->f[0] = c->f[1] + c->f[0];
    mem_wf32(ram, c->r[30] + 0x00000028u, c->f[0]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = 0x08b80000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0xfffff130u);
    c->r[3] = c->r[2] << 3;
    c->r[2] = mem_r32(ram, c->r[4] + 0x00000060u);
    c->r[5] = c->r[3] + c->r[2];
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = 0x08b80000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0xfffff130u);
    c->r[3] = c->r[2] << 3;
    c->r[2] = mem_r32(ram, c->r[4] + 0x00000060u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = c->r[2] + 0xfffffff8u;
    c->r[3] = c->r[5] + 0u;
    c->r[4] = mem_lwl(ram, c->r[2] + 0x00000003u, c->r[4]);
    c->r[4] = mem_lwr(ram, c->r[2] + 0x00000000u, c->r[4]);
    c->r[5] = mem_lwl(ram, c->r[2] + 0x00000007u, c->r[5]);
    c->r[5] = mem_lwr(ram, c->r[2] + 0x00000004u, c->r[5]);
    mem_swl(ram, c->r[3] + 0x00000003u, c->r[4]);
    mem_swr(ram, c->r[3] + 0x00000000u, c->r[4]);
    mem_swl(ram, c->r[3] + 0x00000007u, c->r[5]);
    mem_swr(ram, c->r[3] + 0x00000004u, c->r[5]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = 0x08b80000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0xfffff130u);
    c->r[3] = c->r[2] << 3;
    c->r[2] = mem_r32(ram, c->r[4] + 0x00000060u);
    c->r[2] = c->r[3] + c->r[2];
    { c->r[31] = 0x089badecu; c->r[4] = c->r[2] + 0u; func_0888d720(c, ram); }
    c->r[2] = 0x08b80000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0xfffff130u);
    c->r[2] = c->r[2] + 0x00000001u;
    c->r[1] = 0x08b80000u;
    mem_w32(ram, c->r[1] + 0xfffff130u, c->r[2]);
L_089bae00:
    c->f[1] = mem_rf32(ram, c->r[30] + 0x0000002cu);
    c->r[1] = 0x08a50000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffffb290u);
    c->f[0] = c->f[1] + c->f[0];
    mem_wf32(ram, c->r[30] + 0x0000002cu, c->f[0]);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000034u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000040u);
    c->f[0] = c->f[1] + c->f[0];
    mem_wf32(ram, c->r[30] + 0x00000034u, c->f[0]);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000030u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x0000003cu);
    c->f[0] = c->f[1] + c->f[0];
    mem_wf32(ram, c->r[30] + 0x00000030u, c->f[0]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = 0x08b80000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0xfffff130u);
    c->r[3] = c->r[2] << 3;
    c->r[2] = mem_r32(ram, c->r[4] + 0x00000060u);
    c->r[5] = c->r[3] + c->r[2];
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = 0x08b80000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0xfffff130u);
    c->r[3] = c->r[2] << 3;
    c->r[2] = mem_r32(ram, c->r[4] + 0x00000060u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = c->r[2] + 0xfffffff8u;
    c->r[3] = c->r[5] + 0u;
    c->r[4] = mem_lwl(ram, c->r[2] + 0x00000003u, c->r[4]);
    c->r[4] = mem_lwr(ram, c->r[2] + 0x00000000u, c->r[4]);
    c->r[5] = mem_lwl(ram, c->r[2] + 0x00000007u, c->r[5]);
    c->r[5] = mem_lwr(ram, c->r[2] + 0x00000004u, c->r[5]);
    mem_swl(ram, c->r[3] + 0x00000003u, c->r[4]);
    mem_swr(ram, c->r[3] + 0x00000000u, c->r[4]);
    mem_swl(ram, c->r[3] + 0x00000007u, c->r[5]);
    mem_swr(ram, c->r[3] + 0x00000004u, c->r[5]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = 0x08b80000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0xfffff130u);
    c->r[3] = c->r[2] << 3;
    c->r[2] = mem_r32(ram, c->r[4] + 0x00000060u);
    c->r[2] = c->r[3] + c->r[2];
    { c->r[31] = 0x089baeacu; c->r[4] = c->r[2] + 0u; func_0888d86c(c, ram); }
    c->r[2] = 0x08b80000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0xfffff130u);
    c->r[2] = c->r[2] + 0x00000001u;
    c->r[1] = 0x08b80000u;
    { mem_w32(ram, c->r[1] + 0xfffff130u, c->r[2]); goto L_089bacfc; }
L_089baec4:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000030u);
    c->f[0] = u2f(0u);
    alx_c_cond_s(c, 12, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_089baee8; }
    { goto L_089bb0b0; }
L_089baee8:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x0000002cu);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000018u);
    alx_c_cond_s(c, 12, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_089baf0c; }
    { goto L_089bb678; }
L_089baf0c:
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000030u);
    c->f[0] = u2f(0u);
    alx_c_cond_s(c, 14, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_089baf2c; }
    { goto L_089bb678; }
L_089baf2c:
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000034u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000028u);
    alx_c_cond_s(c, 12, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_089baf4c; }
    { goto L_089bafec; }
L_089baf4c:
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000028u);
    c->r[1] = 0x08a50000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffffb290u);
    c->f[0] = c->f[1] - c->f[0];
    mem_wf32(ram, c->r[30] + 0x00000028u, c->f[0]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = 0x08b80000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0xfffff130u);
    c->r[3] = c->r[2] << 3;
    c->r[2] = mem_r32(ram, c->r[4] + 0x00000060u);
    c->r[5] = c->r[3] + c->r[2];
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = 0x08b80000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0xfffff130u);
    c->r[3] = c->r[2] << 3;
    c->r[2] = mem_r32(ram, c->r[4] + 0x00000060u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = c->r[2] + 0xfffffff8u;
    c->r[3] = c->r[5] + 0u;
    c->r[4] = mem_lwl(ram, c->r[2] + 0x00000003u, c->r[4]);
    c->r[4] = mem_lwr(ram, c->r[2] + 0x00000000u, c->r[4]);
    c->r[5] = mem_lwl(ram, c->r[2] + 0x00000007u, c->r[5]);
    c->r[5] = mem_lwr(ram, c->r[2] + 0x00000004u, c->r[5]);
    mem_swl(ram, c->r[3] + 0x00000003u, c->r[4]);
    mem_swr(ram, c->r[3] + 0x00000000u, c->r[4]);
    mem_swl(ram, c->r[3] + 0x00000007u, c->r[5]);
    mem_swr(ram, c->r[3] + 0x00000004u, c->r[5]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = 0x08b80000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0xfffff130u);
    c->r[3] = c->r[2] << 3;
    c->r[2] = mem_r32(ram, c->r[4] + 0x00000060u);
    c->r[2] = c->r[3] + c->r[2];
    { c->r[31] = 0x089bafd8u; c->r[4] = c->r[2] + 0u; func_0888d7c4(c, ram); }
    c->r[2] = 0x08b80000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0xfffff130u);
    c->r[2] = c->r[2] + 0x00000001u;
    c->r[1] = 0x08b80000u;
    mem_w32(ram, c->r[1] + 0xfffff130u, c->r[2]);
L_089bafec:
    c->f[1] = mem_rf32(ram, c->r[30] + 0x0000002cu);
    c->r[1] = 0x08a50000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffffb290u);
    c->f[0] = c->f[1] + c->f[0];
    mem_wf32(ram, c->r[30] + 0x0000002cu, c->f[0]);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000034u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000040u);
    c->f[0] = c->f[1] + c->f[0];
    mem_wf32(ram, c->r[30] + 0x00000034u, c->f[0]);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000030u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x0000003cu);
    c->f[0] = c->f[1] + c->f[0];
    mem_wf32(ram, c->r[30] + 0x00000030u, c->f[0]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = 0x08b80000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0xfffff130u);
    c->r[3] = c->r[2] << 3;
    c->r[2] = mem_r32(ram, c->r[4] + 0x00000060u);
    c->r[5] = c->r[3] + c->r[2];
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = 0x08b80000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0xfffff130u);
    c->r[3] = c->r[2] << 3;
    c->r[2] = mem_r32(ram, c->r[4] + 0x00000060u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = c->r[2] + 0xfffffff8u;
    c->r[3] = c->r[5] + 0u;
    c->r[4] = mem_lwl(ram, c->r[2] + 0x00000003u, c->r[4]);
    c->r[4] = mem_lwr(ram, c->r[2] + 0x00000000u, c->r[4]);
    c->r[5] = mem_lwl(ram, c->r[2] + 0x00000007u, c->r[5]);
    c->r[5] = mem_lwr(ram, c->r[2] + 0x00000004u, c->r[5]);
    mem_swl(ram, c->r[3] + 0x00000003u, c->r[4]);
    mem_swr(ram, c->r[3] + 0x00000000u, c->r[4]);
    mem_swl(ram, c->r[3] + 0x00000007u, c->r[5]);
    mem_swr(ram, c->r[3] + 0x00000004u, c->r[5]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = 0x08b80000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0xfffff130u);
    c->r[3] = c->r[2] << 3;
    c->r[2] = mem_r32(ram, c->r[4] + 0x00000060u);
    c->r[2] = c->r[3] + c->r[2];
    { c->r[31] = 0x089bb098u; c->r[4] = c->r[2] + 0u; func_0888d86c(c, ram); }
    c->r[2] = 0x08b80000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0xfffff130u);
    c->r[2] = c->r[2] + 0x00000001u;
    c->r[1] = 0x08b80000u;
    { mem_w32(ram, c->r[1] + 0xfffff130u, c->r[2]); goto L_089baee8; }
L_089bb0b0:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x0000002cu);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000018u);
    alx_c_cond_s(c, 12, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_089bb0d4; }
    { goto L_089bb678; }
L_089bb0d4:
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000030u);
    c->f[0] = u2f(0u);
    alx_c_cond_s(c, 14, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_089bb0f4; }
    { goto L_089bb678; }
L_089bb0f4:
    c->f[1] = mem_rf32(ram, c->r[30] + 0x0000002cu);
    c->r[1] = 0x08a50000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffffb290u);
    c->f[0] = c->f[1] + c->f[0];
    mem_wf32(ram, c->r[30] + 0x0000002cu, c->f[0]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = 0x08b80000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0xfffff130u);
    c->r[3] = c->r[2] << 3;
    c->r[2] = mem_r32(ram, c->r[4] + 0x00000060u);
    c->r[5] = c->r[3] + c->r[2];
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = 0x08b80000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0xfffff130u);
    c->r[3] = c->r[2] << 3;
    c->r[2] = mem_r32(ram, c->r[4] + 0x00000060u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = c->r[2] + 0xfffffff8u;
    c->r[3] = c->r[5] + 0u;
    c->r[4] = mem_lwl(ram, c->r[2] + 0x00000003u, c->r[4]);
    c->r[4] = mem_lwr(ram, c->r[2] + 0x00000000u, c->r[4]);
    c->r[5] = mem_lwl(ram, c->r[2] + 0x00000007u, c->r[5]);
    c->r[5] = mem_lwr(ram, c->r[2] + 0x00000004u, c->r[5]);
    mem_swl(ram, c->r[3] + 0x00000003u, c->r[4]);
    mem_swr(ram, c->r[3] + 0x00000000u, c->r[4]);
    mem_swl(ram, c->r[3] + 0x00000007u, c->r[5]);
    mem_swr(ram, c->r[3] + 0x00000004u, c->r[5]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = 0x08b80000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0xfffff130u);
    c->r[3] = c->r[2] << 3;
    c->r[2] = mem_r32(ram, c->r[4] + 0x00000060u);
    c->r[2] = c->r[3] + c->r[2];
    { c->r[31] = 0x089bb180u; c->r[4] = c->r[2] + 0u; func_0888d86c(c, ram); }
    c->r[2] = 0x08b80000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0xfffff130u);
    c->r[2] = c->r[2] + 0x00000001u;
    c->r[1] = 0x08b80000u;
    { mem_w32(ram, c->r[1] + 0xfffff130u, c->r[2]); goto L_089bb0b0; }
L_089bb198:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000030u);
    c->f[0] = u2f(0u);
    alx_c_cond_s(c, 12, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_089bb1bc; }
    { goto L_089bb384; }
L_089bb1bc:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x0000002cu);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000018u);
    alx_c_cond_s(c, 12, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_089bb1e0; }
    { goto L_089bb678; }
L_089bb1e0:
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000030u);
    c->f[0] = u2f(0u);
    alx_c_cond_s(c, 14, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_089bb200; }
    { goto L_089bb678; }
L_089bb200:
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000034u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000028u);
    alx_c_cond_s(c, 12, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_089bb220; }
    { goto L_089bb2c0; }
L_089bb220:
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000028u);
    c->r[1] = 0x08a50000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffffb290u);
    c->f[0] = c->f[1] + c->f[0];
    mem_wf32(ram, c->r[30] + 0x00000028u, c->f[0]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = 0x08b80000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0xfffff130u);
    c->r[3] = c->r[2] << 3;
    c->r[2] = mem_r32(ram, c->r[4] + 0x00000060u);
    c->r[5] = c->r[3] + c->r[2];
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = 0x08b80000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0xfffff130u);
    c->r[3] = c->r[2] << 3;
    c->r[2] = mem_r32(ram, c->r[4] + 0x00000060u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = c->r[2] + 0xfffffff8u;
    c->r[3] = c->r[5] + 0u;
    c->r[4] = mem_lwl(ram, c->r[2] + 0x00000003u, c->r[4]);
    c->r[4] = mem_lwr(ram, c->r[2] + 0x00000000u, c->r[4]);
    c->r[5] = mem_lwl(ram, c->r[2] + 0x00000007u, c->r[5]);
    c->r[5] = mem_lwr(ram, c->r[2] + 0x00000004u, c->r[5]);
    mem_swl(ram, c->r[3] + 0x00000003u, c->r[4]);
    mem_swr(ram, c->r[3] + 0x00000000u, c->r[4]);
    mem_swl(ram, c->r[3] + 0x00000007u, c->r[5]);
    mem_swr(ram, c->r[3] + 0x00000004u, c->r[5]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = 0x08b80000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0xfffff130u);
    c->r[3] = c->r[2] << 3;
    c->r[2] = mem_r32(ram, c->r[4] + 0x00000060u);
    c->r[2] = c->r[3] + c->r[2];
    { c->r[31] = 0x089bb2acu; c->r[4] = c->r[2] + 0u; func_0888d720(c, ram); }
    c->r[2] = 0x08b80000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0xfffff130u);
    c->r[2] = c->r[2] + 0x00000001u;
    c->r[1] = 0x08b80000u;
    mem_w32(ram, c->r[1] + 0xfffff130u, c->r[2]);
L_089bb2c0:
    c->f[1] = mem_rf32(ram, c->r[30] + 0x0000002cu);
    c->r[1] = 0x08a50000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffffb290u);
    c->f[0] = c->f[1] - c->f[0];
    mem_wf32(ram, c->r[30] + 0x0000002cu, c->f[0]);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000034u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000040u);
    c->f[0] = c->f[1] + c->f[0];
    mem_wf32(ram, c->r[30] + 0x00000034u, c->f[0]);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000030u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x0000003cu);
    c->f[0] = c->f[1] + c->f[0];
    mem_wf32(ram, c->r[30] + 0x00000030u, c->f[0]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = 0x08b80000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0xfffff130u);
    c->r[3] = c->r[2] << 3;
    c->r[2] = mem_r32(ram, c->r[4] + 0x00000060u);
    c->r[5] = c->r[3] + c->r[2];
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = 0x08b80000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0xfffff130u);
    c->r[3] = c->r[2] << 3;
    c->r[2] = mem_r32(ram, c->r[4] + 0x00000060u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = c->r[2] + 0xfffffff8u;
    c->r[3] = c->r[5] + 0u;
    c->r[4] = mem_lwl(ram, c->r[2] + 0x00000003u, c->r[4]);
    c->r[4] = mem_lwr(ram, c->r[2] + 0x00000000u, c->r[4]);
    c->r[5] = mem_lwl(ram, c->r[2] + 0x00000007u, c->r[5]);
    c->r[5] = mem_lwr(ram, c->r[2] + 0x00000004u, c->r[5]);
    mem_swl(ram, c->r[3] + 0x00000003u, c->r[4]);
    mem_swr(ram, c->r[3] + 0x00000000u, c->r[4]);
    mem_swl(ram, c->r[3] + 0x00000007u, c->r[5]);
    mem_swr(ram, c->r[3] + 0x00000004u, c->r[5]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = 0x08b80000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0xfffff130u);
    c->r[3] = c->r[2] << 3;
    c->r[2] = mem_r32(ram, c->r[4] + 0x00000060u);
    c->r[2] = c->r[3] + c->r[2];
    { c->r[31] = 0x089bb36cu; c->r[4] = c->r[2] + 0u; func_0888d910(c, ram); }
    c->r[2] = 0x08b80000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0xfffff130u);
    c->r[2] = c->r[2] + 0x00000001u;
    c->r[1] = 0x08b80000u;
    { mem_w32(ram, c->r[1] + 0xfffff130u, c->r[2]); goto L_089bb1bc; }
L_089bb384:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000038u);
    c->f[0] = u2f(0u);
    alx_c_cond_s(c, 12, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_089bb3a8; }
    { goto L_089bb590; }
L_089bb3a8:
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000030u);
    c->f[0] = u2f(0u);
    alx_c_cond_s(c, 14, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_089bb3c8; }
    { goto L_089bb590; }
L_089bb3c8:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x0000002cu);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000018u);
    alx_c_cond_s(c, 12, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_089bb3ec; }
    { goto L_089bb678; }
L_089bb3ec:
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000030u);
    c->f[0] = u2f(0u);
    alx_c_cond_s(c, 14, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_089bb40c; }
    { goto L_089bb678; }
L_089bb40c:
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000034u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000028u);
    alx_c_cond_s(c, 12, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_089bb42c; }
    { goto L_089bb4cc; }
L_089bb42c:
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000028u);
    c->r[1] = 0x08a50000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffffb290u);
    c->f[0] = c->f[1] - c->f[0];
    mem_wf32(ram, c->r[30] + 0x00000028u, c->f[0]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = 0x08b80000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0xfffff130u);
    c->r[3] = c->r[2] << 3;
    c->r[2] = mem_r32(ram, c->r[4] + 0x00000060u);
    c->r[5] = c->r[3] + c->r[2];
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = 0x08b80000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0xfffff130u);
    c->r[3] = c->r[2] << 3;
    c->r[2] = mem_r32(ram, c->r[4] + 0x00000060u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = c->r[2] + 0xfffffff8u;
    c->r[3] = c->r[5] + 0u;
    c->r[4] = mem_lwl(ram, c->r[2] + 0x00000003u, c->r[4]);
    c->r[4] = mem_lwr(ram, c->r[2] + 0x00000000u, c->r[4]);
    c->r[5] = mem_lwl(ram, c->r[2] + 0x00000007u, c->r[5]);
    c->r[5] = mem_lwr(ram, c->r[2] + 0x00000004u, c->r[5]);
    mem_swl(ram, c->r[3] + 0x00000003u, c->r[4]);
    mem_swr(ram, c->r[3] + 0x00000000u, c->r[4]);
    mem_swl(ram, c->r[3] + 0x00000007u, c->r[5]);
    mem_swr(ram, c->r[3] + 0x00000004u, c->r[5]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = 0x08b80000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0xfffff130u);
    c->r[3] = c->r[2] << 3;
    c->r[2] = mem_r32(ram, c->r[4] + 0x00000060u);
    c->r[2] = c->r[3] + c->r[2];
    { c->r[31] = 0x089bb4b8u; c->r[4] = c->r[2] + 0u; func_0888d7c4(c, ram); }
    c->r[2] = 0x08b80000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0xfffff130u);
    c->r[2] = c->r[2] + 0x00000001u;
    c->r[1] = 0x08b80000u;
    mem_w32(ram, c->r[1] + 0xfffff130u, c->r[2]);
L_089bb4cc:
    c->f[1] = mem_rf32(ram, c->r[30] + 0x0000002cu);
    c->r[1] = 0x08a50000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffffb290u);
    c->f[0] = c->f[1] - c->f[0];
    mem_wf32(ram, c->r[30] + 0x0000002cu, c->f[0]);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000034u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000040u);
    c->f[0] = c->f[1] + c->f[0];
    mem_wf32(ram, c->r[30] + 0x00000034u, c->f[0]);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000030u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x0000003cu);
    c->f[0] = c->f[1] + c->f[0];
    mem_wf32(ram, c->r[30] + 0x00000030u, c->f[0]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = 0x08b80000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0xfffff130u);
    c->r[3] = c->r[2] << 3;
    c->r[2] = mem_r32(ram, c->r[4] + 0x00000060u);
    c->r[5] = c->r[3] + c->r[2];
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = 0x08b80000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0xfffff130u);
    c->r[3] = c->r[2] << 3;
    c->r[2] = mem_r32(ram, c->r[4] + 0x00000060u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = c->r[2] + 0xfffffff8u;
    c->r[3] = c->r[5] + 0u;
    c->r[4] = mem_lwl(ram, c->r[2] + 0x00000003u, c->r[4]);
    c->r[4] = mem_lwr(ram, c->r[2] + 0x00000000u, c->r[4]);
    c->r[5] = mem_lwl(ram, c->r[2] + 0x00000007u, c->r[5]);
    c->r[5] = mem_lwr(ram, c->r[2] + 0x00000004u, c->r[5]);
    mem_swl(ram, c->r[3] + 0x00000003u, c->r[4]);
    mem_swr(ram, c->r[3] + 0x00000000u, c->r[4]);
    mem_swl(ram, c->r[3] + 0x00000007u, c->r[5]);
    mem_swr(ram, c->r[3] + 0x00000004u, c->r[5]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = 0x08b80000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0xfffff130u);
    c->r[3] = c->r[2] << 3;
    c->r[2] = mem_r32(ram, c->r[4] + 0x00000060u);
    c->r[2] = c->r[3] + c->r[2];
    { c->r[31] = 0x089bb578u; c->r[4] = c->r[2] + 0u; func_0888d910(c, ram); }
    c->r[2] = 0x08b80000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0xfffff130u);
    c->r[2] = c->r[2] + 0x00000001u;
    c->r[1] = 0x08b80000u;
    { mem_w32(ram, c->r[1] + 0xfffff130u, c->r[2]); goto L_089bb3c8; }
L_089bb590:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x0000002cu);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000018u);
    alx_c_cond_s(c, 12, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_089bb5b4; }
    { goto L_089bb678; }
L_089bb5b4:
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000030u);
    c->f[0] = u2f(0u);
    alx_c_cond_s(c, 14, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_089bb5d4; }
    { goto L_089bb678; }
L_089bb5d4:
    c->f[1] = mem_rf32(ram, c->r[30] + 0x0000002cu);
    c->r[1] = 0x08a50000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffffb290u);
    c->f[0] = c->f[1] - c->f[0];
    mem_wf32(ram, c->r[30] + 0x0000002cu, c->f[0]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = 0x08b80000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0xfffff130u);
    c->r[3] = c->r[2] << 3;
    c->r[2] = mem_r32(ram, c->r[4] + 0x00000060u);
    c->r[5] = c->r[3] + c->r[2];
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = 0x08b80000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0xfffff130u);
    c->r[3] = c->r[2] << 3;
    c->r[2] = mem_r32(ram, c->r[4] + 0x00000060u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = c->r[2] + 0xfffffff8u;
    c->r[3] = c->r[5] + 0u;
    c->r[4] = mem_lwl(ram, c->r[2] + 0x00000003u, c->r[4]);
    c->r[4] = mem_lwr(ram, c->r[2] + 0x00000000u, c->r[4]);
    c->r[5] = mem_lwl(ram, c->r[2] + 0x00000007u, c->r[5]);
    c->r[5] = mem_lwr(ram, c->r[2] + 0x00000004u, c->r[5]);
    mem_swl(ram, c->r[3] + 0x00000003u, c->r[4]);
    mem_swr(ram, c->r[3] + 0x00000000u, c->r[4]);
    mem_swl(ram, c->r[3] + 0x00000007u, c->r[5]);
    mem_swr(ram, c->r[3] + 0x00000004u, c->r[5]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = 0x08b80000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0xfffff130u);
    c->r[3] = c->r[2] << 3;
    c->r[2] = mem_r32(ram, c->r[4] + 0x00000060u);
    c->r[2] = c->r[3] + c->r[2];
    { c->r[31] = 0x089bb660u; c->r[4] = c->r[2] + 0u; func_0888d910(c, ram); }
    c->r[2] = 0x08b80000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0xfffff130u);
    c->r[2] = c->r[2] + 0x00000001u;
    c->r[1] = 0x08b80000u;
    { mem_w32(ram, c->r[1] + 0xfffff130u, c->r[2]); goto L_089bb590; }
L_089bb678:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = 0x08b80000u;
    c->r[2] = mem_r8(ram, c->r[2] + 0xfffff130u);
    mem_w8(ram, c->r[3] + 0x00000071u, c->r[2]);
L_089bb688:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000054u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000050u);
    { c->r[29] = c->r[29] + 0x00000060u; return; }
    return; /* fell out of func_089b9f64 */
}

/* func_089c492c  0x089c492c..0x089c510c  2016 bytes, source=fde */
void func_089c492c(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089c492cu);
    c->r[29] = c->r[29] + 0xfffffc30u;
    mem_w32(ram, c->r[29] + 0x000003c8u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x000003c4u, c->r[30]);
    mem_w32(ram, c->r[29] + 0x000003c0u, c->r[16]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[6]);
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[7]);
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[8]);
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[9]);
    mem_w32(ram, c->r[30] + 0x00000018u, 0u);
    c->r[2] = c->r[30] + 0x00000020u;
    mem_w32(ram, c->r[30] + 0x00000120u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000120u);
    mem_w32(ram, c->r[30] + 0x00000124u, c->r[2]);
    c->r[2] = 0u + 0x0000000fu;
    mem_w32(ram, c->r[30] + 0x00000128u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000128u);
    c->r[2] = 0u + 0xffffffffu;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_089c49b4; }
L_089c4984:
    { c->r[31] = 0x089c498cu; c->r[4] = mem_r32(ram, c->r[30] + 0x00000124u); func_08808240(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000124u);
    c->r[2] = c->r[2] + 0x00000010u;
    mem_w32(ram, c->r[30] + 0x00000124u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000128u);
    c->r[2] = c->r[2] + 0xffffffffu;
    c->r[3] = c->r[2] + 0u;
    mem_w32(ram, c->r[30] + 0x00000128u, c->r[3]);
    c->r[2] = 0u + 0xffffffffu;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_089c4984; }
L_089c49b4:
    c->r[2] = c->r[30] + 0x00000130u;
    mem_w32(ram, c->r[30] + 0x00000128u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000128u);
    mem_w32(ram, c->r[30] + 0x00000124u, c->r[2]);
    c->r[2] = 0u + 0x0000000fu;
    mem_w32(ram, c->r[30] + 0x00000120u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000120u);
    c->r[2] = 0u + 0xffffffffu;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_089c4a0c; }
L_089c49dc:
    { c->r[31] = 0x089c49e4u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000124u); func_08808240(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000124u);
    c->r[2] = c->r[2] + 0x00000010u;
    mem_w32(ram, c->r[30] + 0x00000124u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000120u);
    c->r[2] = c->r[2] + 0xffffffffu;
    c->r[3] = c->r[2] + 0u;
    mem_w32(ram, c->r[30] + 0x00000120u, c->r[3]);
    c->r[2] = 0u + 0xffffffffu;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_089c49dc; }
L_089c4a0c:
    c->r[2] = c->r[30] + 0x00000230u;
    mem_w32(ram, c->r[30] + 0x00000128u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000128u);
    mem_w32(ram, c->r[30] + 0x00000124u, c->r[2]);
    c->r[2] = 0u + 0x0000000fu;
    mem_w32(ram, c->r[30] + 0x00000120u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000120u);
    c->r[2] = 0u + 0xffffffffu;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_089c4a64; }
L_089c4a34:
    { c->r[31] = 0x089c4a3cu; c->r[4] = mem_r32(ram, c->r[30] + 0x00000124u); func_08808240(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000124u);
    c->r[2] = c->r[2] + 0x00000010u;
    mem_w32(ram, c->r[30] + 0x00000124u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000120u);
    c->r[2] = c->r[2] + 0xffffffffu;
    c->r[3] = c->r[2] + 0u;
    mem_w32(ram, c->r[30] + 0x00000120u, c->r[3]);
    c->r[2] = 0u + 0xffffffffu;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_089c4a34; }
L_089c4a64:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    mem_w32(ram, c->r[30] + 0x00000128u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    mem_w32(ram, c->r[30] + 0x00000124u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    mem_w32(ram, c->r[30] + 0x00000120u, c->r[2]);
    c->r[2] = c->r[30] + 0x00000020u;
    mem_w32(ram, c->r[30] + 0x00000330u, c->r[2]);
    c->r[2] = c->r[30] + 0x00000130u;
    mem_w32(ram, c->r[30] + 0x00000334u, c->r[2]);
    c->r[2] = c->r[30] + 0x00000230u;
    mem_w32(ram, c->r[30] + 0x00000338u, c->r[2]);
    mem_w32(ram, c->r[30] + 0x0000033cu, 0u);
L_089c4a98:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000033cu);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000006u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_089c4ab0; }
    { goto L_089c5088; }
L_089c4ab0:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000033cu);
    c->r[2] = (u32)((s32)c->r[3] >> (c->r[2] & 31u));
    c->r[2] = c->r[2] ^ 0x0001u;
    c->r[2] = c->r[2] & 0x0001u;
    c->r[2] = c->r[2] & 0x00ffu;
    { int _c = (c->r[2] == 0u); if (_c) goto L_089c4ad8; }
    { goto L_089c5078; }
L_089c4ad8:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 1;
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000033cu);
    c->r[2] = c->r[3] + c->r[2];
    c->r[3] = c->r[2] << 4;
    c->r[2] = 0x08a80000u;
    c->r[2] = c->r[2] + 0xffffc210u;
    c->r[2] = c->r[3] + c->r[2];
    mem_w32(ram, c->r[30] + 0x00000380u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000380u);
    vfpu_exec(c, ram, 0xd8400000u); /* lv.q */
    mem_w32(ram, c->r[30] + 0x00000384u, 0u);
L_089c4b14:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000384u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = ((s32)c->r[2] < (s32)c->r[3]) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_089c4b30; }
    { goto L_089c4b78; }
L_089c4b30:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000384u);
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[30];
    c->r[16] = c->r[2] + 0x00000340u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000384u);
    c->r[3] = c->r[2] << 4;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000128u);
    c->r[2] = c->r[3] + c->r[2];
    { c->r[31] = 0x089c4b58u; c->r[4] = c->r[2] + 0u; func_0884bfd0(c, ram); }
    vfpu_exec(c, ram, 0xd8410000u); /* lv.q */
    vfpu_exec(c, ram, 0x64808102u); /* vdot.t */
    vfpu_exec(c, ram, 0x60600202u); /* vadd.s */
    vfpu_exec(c, ram, 0xea020000u); /* sv.s */
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000384u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000384u, c->r[2]); goto L_089c4b14; }
L_089c4b78:
    mem_w32(ram, c->r[30] + 0x00000384u, 0u);
    mem_w32(ram, c->r[30] + 0x00000388u, 0u);
L_089c4b80:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000388u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = ((s32)c->r[2] < (s32)c->r[3]) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_089c4b9c; }
    { goto L_089c5008; }
L_089c4b9c:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000388u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    alx_div(c, c->r[3], c->r[2]);
    c->r[3] = c->hi;
    if (c->r[2] == 0u) { recomp_break(c, ram, 0x089c4bb0u, 0x7u); goto L_089c4bb4; }
L_089c4bb4:
    mem_w32(ram, c->r[30] + 0x0000038cu, c->r[3]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000388u);
    c->r[3] = c->r[2] + 0x00000001u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    alx_div(c, c->r[3], c->r[2]);
    c->r[3] = c->hi;
    if (c->r[2] == 0u) { recomp_break(c, ram, 0x089c4bd0u, 0x7u); goto L_089c4bd4; }
L_089c4bd4:
    mem_w32(ram, c->r[30] + 0x00000390u, c->r[3]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000038cu);
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[30];
    c->r[2] = c->r[2] + 0x00000340u;
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000000u);
    mem_wf32(ram, c->r[30] + 0x00000394u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000390u);
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[30];
    c->r[2] = c->r[2] + 0x00000340u;
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000000u);
    mem_wf32(ram, c->r[30] + 0x00000398u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000038cu);
    c->r[3] = c->r[2] << 4;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000128u);
    c->r[2] = c->r[2] + c->r[3];
    mem_w32(ram, c->r[30] + 0x0000039cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000390u);
    c->r[3] = c->r[2] << 4;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000128u);
    c->r[2] = c->r[2] + c->r[3];
    mem_w32(ram, c->r[30] + 0x000003a0u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000038cu);
    c->r[3] = c->r[2] << 4;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000124u);
    c->r[2] = c->r[2] + c->r[3];
    mem_w32(ram, c->r[30] + 0x000003a4u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000390u);
    c->r[3] = c->r[2] << 4;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000124u);
    c->r[2] = c->r[2] + c->r[3];
    mem_w32(ram, c->r[30] + 0x000003a8u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000038cu);
    c->r[3] = c->r[2] << 4;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000120u);
    c->r[2] = c->r[2] + c->r[3];
    mem_w32(ram, c->r[30] + 0x000003acu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000390u);
    c->r[3] = c->r[2] << 4;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000120u);
    c->r[2] = c->r[2] + c->r[3];
    mem_w32(ram, c->r[30] + 0x000003b0u, c->r[2]);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000394u);
    c->f[0] = u2f(0u);
    alx_c_cond_s(c, 14, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_089c4ca0; }
    { goto L_089c4d6c; }
L_089c4ca0:
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000398u);
    c->f[0] = u2f(0u);
    alx_c_cond_s(c, 14, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_089c4cc0; }
    { goto L_089c4d6c; }
L_089c4cc0:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000384u);
    c->r[3] = c->r[2] << 4;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000330u);
    c->r[4] = c->r[3] + c->r[2];
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000039cu);
    c->r[2] = mem_r32(ram, c->r[3] + 0x00000000u);
    mem_w32(ram, c->r[4] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[3] + 0x00000004u);
    mem_w32(ram, c->r[4] + 0x00000004u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[3] + 0x00000008u);
    mem_w32(ram, c->r[4] + 0x00000008u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[3] + 0x0000000cu);
    mem_w32(ram, c->r[4] + 0x0000000cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000384u);
    c->r[3] = c->r[2] << 4;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000334u);
    c->r[4] = c->r[3] + c->r[2];
    c->r[3] = mem_r32(ram, c->r[30] + 0x000003a4u);
    c->r[2] = mem_r32(ram, c->r[3] + 0x00000000u);
    mem_w32(ram, c->r[4] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[3] + 0x00000004u);
    mem_w32(ram, c->r[4] + 0x00000004u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[3] + 0x00000008u);
    mem_w32(ram, c->r[4] + 0x00000008u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[3] + 0x0000000cu);
    mem_w32(ram, c->r[4] + 0x0000000cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000384u);
    c->r[3] = c->r[2] << 4;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000338u);
    c->r[4] = c->r[3] + c->r[2];
    c->r[3] = mem_r32(ram, c->r[30] + 0x000003acu);
    c->r[2] = mem_r32(ram, c->r[3] + 0x00000000u);
    mem_w32(ram, c->r[4] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[3] + 0x00000004u);
    mem_w32(ram, c->r[4] + 0x00000004u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[3] + 0x00000008u);
    mem_w32(ram, c->r[4] + 0x00000008u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[3] + 0x0000000cu);
    mem_w32(ram, c->r[4] + 0x0000000cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000384u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000384u, c->r[2]); goto L_089c4ff8; }
L_089c4d6c:
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000394u);
    c->f[0] = u2f(0u);
    alx_c_cond_s(c, 14, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_089c4d8c; }
    { goto L_089c4f08; }
L_089c4d8c:
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000398u);
    c->f[0] = u2f(0u);
    alx_c_cond_s(c, 12, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_089c4dac; }
    { goto L_089c4f08; }
L_089c4dac:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000384u);
    c->r[3] = c->r[2] << 4;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000330u);
    c->r[4] = c->r[3] + c->r[2];
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000039cu);
    c->r[2] = mem_r32(ram, c->r[3] + 0x00000000u);
    mem_w32(ram, c->r[4] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[3] + 0x00000004u);
    mem_w32(ram, c->r[4] + 0x00000004u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[3] + 0x00000008u);
    mem_w32(ram, c->r[4] + 0x00000008u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[3] + 0x0000000cu);
    mem_w32(ram, c->r[4] + 0x0000000cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000384u);
    c->r[3] = c->r[2] << 4;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000334u);
    c->r[4] = c->r[3] + c->r[2];
    c->r[3] = mem_r32(ram, c->r[30] + 0x000003a4u);
    c->r[2] = mem_r32(ram, c->r[3] + 0x00000000u);
    mem_w32(ram, c->r[4] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[3] + 0x00000004u);
    mem_w32(ram, c->r[4] + 0x00000004u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[3] + 0x00000008u);
    mem_w32(ram, c->r[4] + 0x00000008u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[3] + 0x0000000cu);
    mem_w32(ram, c->r[4] + 0x0000000cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000384u);
    c->r[3] = c->r[2] << 4;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000338u);
    c->r[4] = c->r[3] + c->r[2];
    c->r[3] = mem_r32(ram, c->r[30] + 0x000003acu);
    c->r[2] = mem_r32(ram, c->r[3] + 0x00000000u);
    mem_w32(ram, c->r[4] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[3] + 0x00000004u);
    mem_w32(ram, c->r[4] + 0x00000004u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[3] + 0x00000008u);
    mem_w32(ram, c->r[4] + 0x00000008u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[3] + 0x0000000cu);
    mem_w32(ram, c->r[4] + 0x0000000cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000384u);
    c->r[2] = c->r[2] + 0x00000001u;
    mem_w32(ram, c->r[30] + 0x00000384u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000384u);
    c->r[3] = c->r[2] << 4;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000330u);
    c->r[9] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000384u);
    c->r[3] = c->r[2] << 4;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000334u);
    c->r[10] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000384u);
    c->r[3] = c->r[2] << 4;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000338u);
    c->r[8] = c->r[3] + c->r[2];
    c->r[7] = mem_r32(ram, c->r[30] + 0x000003a0u);
    c->r[6] = mem_r32(ram, c->r[30] + 0x0000039cu);
    c->r[5] = mem_r32(ram, c->r[30] + 0x000003a8u);
    c->r[4] = mem_r32(ram, c->r[30] + 0x000003a4u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x000003b0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x000003acu);
    vfpu_exec(c, ram, 0xcbc00398u); /* lv.s */
    vfpu_exec(c, ram, 0xcbc00395u); /* lv.s */
    vfpu_exec(c, ram, 0xd8e10000u); /* lv.q */
    vfpu_exec(c, ram, 0xd8c20000u); /* lv.q */
    vfpu_exec(c, ram, 0xd8a50000u); /* lv.q */
    vfpu_exec(c, ram, 0xd8860000u); /* lv.q */
    vfpu_exec(c, ram, 0xd8710000u); /* lv.q */
    vfpu_exec(c, ram, 0xd8520000u); /* lv.q */
    vfpu_exec(c, ram, 0xd0010008u); /* vabs.s */
    vfpu_exec(c, ram, 0x60802028u); /* vsub.s */
    vfpu_exec(c, ram, 0x63a80828u); /* vdiv.s */
    vfpu_exec(c, ram, 0x6081828cu); /* vsub.q */
    vfpu_exec(c, ram, 0x6085868du); /* vsub.q */
    vfpu_exec(c, ram, 0x6091928eu); /* vsub.q */
    vfpu_exec(c, ram, 0x65288c8cu); /* vscl.q */
    vfpu_exec(c, ram, 0x65288d8du); /* vscl.q */
    vfpu_exec(c, ram, 0x65288e8eu); /* vscl.q */
    vfpu_exec(c, ram, 0x60018c8cu); /* vadd.q */
    vfpu_exec(c, ram, 0x60058d8du); /* vadd.q */
    vfpu_exec(c, ram, 0x60118e8eu); /* vadd.q */
    vfpu_exec(c, ram, 0xf92c0000u); /* sv.q */
    vfpu_exec(c, ram, 0xf94d0000u); /* sv.q */
    vfpu_exec(c, ram, 0xf90e0000u); /* sv.q */
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000384u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000384u, c->r[2]); goto L_089c4ff8; }
L_089c4f08:
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000394u);
    c->f[0] = u2f(0u);
    alx_c_cond_s(c, 12, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_089c4f28; }
    { goto L_089c4ff8; }
L_089c4f28:
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000398u);
    c->f[0] = u2f(0u);
    alx_c_cond_s(c, 14, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_089c4f48; }
    { goto L_089c4ff8; }
L_089c4f48:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000384u);
    c->r[3] = c->r[2] << 4;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000330u);
    c->r[9] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000384u);
    c->r[3] = c->r[2] << 4;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000334u);
    c->r[10] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000384u);
    c->r[3] = c->r[2] << 4;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000338u);
    c->r[8] = c->r[3] + c->r[2];
    c->r[7] = mem_r32(ram, c->r[30] + 0x0000039cu);
    c->r[6] = mem_r32(ram, c->r[30] + 0x000003a0u);
    c->r[5] = mem_r32(ram, c->r[30] + 0x000003a4u);
    c->r[4] = mem_r32(ram, c->r[30] + 0x000003a8u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x000003acu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x000003b0u);
    vfpu_exec(c, ram, 0xcbc00394u); /* lv.s */
    vfpu_exec(c, ram, 0xcbc00399u); /* lv.s */
    vfpu_exec(c, ram, 0xd8e10000u); /* lv.q */
    vfpu_exec(c, ram, 0xd8c20000u); /* lv.q */
    vfpu_exec(c, ram, 0xd8a50000u); /* lv.q */
    vfpu_exec(c, ram, 0xd8860000u); /* lv.q */
    vfpu_exec(c, ram, 0xd8710000u); /* lv.q */
    vfpu_exec(c, ram, 0xd8520000u); /* lv.q */
    vfpu_exec(c, ram, 0xd0010008u); /* vabs.s */
    vfpu_exec(c, ram, 0x60802028u); /* vsub.s */
    vfpu_exec(c, ram, 0x63a80828u); /* vdiv.s */
    vfpu_exec(c, ram, 0x6081828cu); /* vsub.q */
    vfpu_exec(c, ram, 0x6085868du); /* vsub.q */
    vfpu_exec(c, ram, 0x6091928eu); /* vsub.q */
    vfpu_exec(c, ram, 0x65288c8cu); /* vscl.q */
    vfpu_exec(c, ram, 0x65288d8du); /* vscl.q */
    vfpu_exec(c, ram, 0x65288e8eu); /* vscl.q */
    vfpu_exec(c, ram, 0x60018c8cu); /* vadd.q */
    vfpu_exec(c, ram, 0x60058d8du); /* vadd.q */
    vfpu_exec(c, ram, 0x60118e8eu); /* vadd.q */
    vfpu_exec(c, ram, 0xf92c0000u); /* sv.q */
    vfpu_exec(c, ram, 0xf94d0000u); /* sv.q */
    vfpu_exec(c, ram, 0xf90e0000u); /* sv.q */
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000384u);
    c->r[2] = c->r[2] + 0x00000001u;
    mem_w32(ram, c->r[30] + 0x00000384u, c->r[2]);
L_089c4ff8:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000388u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000388u, c->r[2]); goto L_089c4b80; }
L_089c5008:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000384u);
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    { int _c = (c->r[2] != 0u); if (_c) goto L_089c5024; }
    { goto L_089c5088; }
L_089c5024:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000128u);
    mem_w32(ram, c->r[30] + 0x000003b0u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000330u);
    mem_w32(ram, c->r[30] + 0x00000128u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x000003b0u);
    mem_w32(ram, c->r[30] + 0x00000330u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000124u);
    mem_w32(ram, c->r[30] + 0x000003b0u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000334u);
    mem_w32(ram, c->r[30] + 0x00000124u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x000003b0u);
    mem_w32(ram, c->r[30] + 0x00000334u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000120u);
    mem_w32(ram, c->r[30] + 0x000003b0u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000338u);
    mem_w32(ram, c->r[30] + 0x00000120u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x000003b0u);
    mem_w32(ram, c->r[30] + 0x00000338u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = c->r[2] + 0x00000001u;
    mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]);
L_089c5078:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000033cu);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x0000033cu, c->r[2]); goto L_089c4a98; }
L_089c5088:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = c->r[2] & 0x0001u;
    c->r[2] = c->r[2] & 0x00ffu;
    { int _c = (c->r[2] == 0u); if (_c) goto L_089c50f0; }
    c->r[3] = c->r[30] + 0x00000020u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] << 4;
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = c->r[3] + 0u;
    { c->r[31] = 0x089c50b8u; c->r[6] = c->r[2] + 0u; func_08a19db8(c, ram); }
    c->r[3] = c->r[30] + 0x00000130u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] << 4;
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[5] = c->r[3] + 0u;
    { c->r[31] = 0x089c50d4u; c->r[6] = c->r[2] + 0u; func_08a19db8(c, ram); }
    c->r[3] = c->r[30] + 0x00000230u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] << 4;
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[5] = c->r[3] + 0u;
    { c->r[31] = 0x089c50f0u; c->r[6] = c->r[2] + 0u; func_08a19db8(c, ram); }
L_089c50f0:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x000003c8u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x000003c4u);
    c->r[16] = mem_r32(ram, c->r[29] + 0x000003c0u);
    { c->r[29] = c->r[29] + 0x000003d0u; return; }
    return; /* fell out of func_089c492c */
}

/* func_089c7830  0x089c7830..0x089c786c  60 bytes, source=sweep */
void func_089c7830(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089c7830u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_wf32(ram, c->r[30] + 0x00000004u, c->f[12]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x000000e0u;
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000004u);
    mem_wf32(ram, c->r[2] + 0x0000000cu, c->f[0]);
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_089c7830 */
}

/* func_089ca1d8  0x089ca1d8..0x089ca200  40 bytes, source=sweep */
void func_089ca1d8(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089ca1d8u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000155u);
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_089ca1d8 */
}

/* func_089cbbec  0x089cbbec..0x089cbc2c  64 bytes, source=sweep */
void func_089cbbec(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089cbbecu);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08b80000u;
    c->r[2] = c->r[2] + 0xfffffc68u;
    c->r[3] = c->r[3] + c->r[2];
    c->r[2] = 0x08b80000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0xfffffc64u);
    mem_w32(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_089cbbec */
}

/* func_089d1bf0  0x089d1bf0..0x089d1e14  548 bytes, source=fde */
void func_089d1bf0(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089d1bf0u);
    c->r[29] = c->r[29] + 0xffffffd0u;
    mem_w32(ram, c->r[29] + 0x00000024u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000020u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[2] = c->r[5] + 0u;
    c->r[3] = c->r[6] + 0u;
    c->r[4] = c->r[7] + 0u;
    mem_wf32(ram, c->r[30] + 0x0000000cu, c->f[12]);
    mem_w16(ram, c->r[30] + 0x00000004u, c->r[2]);
    mem_w16(ram, c->r[30] + 0x00000006u, c->r[3]);
    mem_w16(ram, c->r[30] + 0x00000008u, c->r[4]);
    c->r[2] = 0x08b80000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0xfffffc8cu);
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]);
    c->r[3] = (u32)(s32)(s16)mem_r16(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 2;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = c->r[2] + c->r[3];
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
    c->r[4] = 0u + 0x00000020u;
    { c->r[31] = 0x089d1c58u; c->r[5] = 0u + 0x00000010u; func_0881a1d4(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = mem_r16(ram, c->r[2] + 0x00000002u);
    mem_w16(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = mem_r16(ram, c->r[2] + 0x00000004u);
    mem_w16(ram, c->r[3] + 0x00000002u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[5] = c->r[2] + 0x00000010u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[4] = mem_r16(ram, c->r[2] + 0x00000002u);
    c->r[2] = mem_r16(ram, c->r[3] + 0x00000006u);
    c->r[2] = c->r[4] + c->r[2];
    mem_w16(ram, c->r[5] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[5] = c->r[2] + 0x00000010u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[4] = mem_r16(ram, c->r[2] + 0x00000004u);
    c->r[2] = mem_r16(ram, c->r[3] + 0x00000008u);
    c->r[2] = c->r[4] + c->r[2];
    mem_w16(ram, c->r[5] + 0x00000002u, c->r[2]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[3] = c->r[2] + 0x00000010u;
    c->r[2] = 0xff7f0000u;
    c->r[2] = c->r[2] | 0x7f7fu;
    mem_w32(ram, c->r[3] + 0x00000004u, c->r[2]);
    c->r[2] = 0xff7f0000u;
    c->r[2] = c->r[2] | 0x7f7fu;
    mem_w32(ram, c->r[4] + 0x00000004u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = mem_r16(ram, c->r[30] + 0x00000006u);
    mem_w16(ram, c->r[3] + 0x00000008u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = mem_r16(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[2] + 0xffffffffu;
    mem_w16(ram, c->r[3] + 0x0000000au, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[4] = c->r[2] + 0x00000010u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = mem_r16(ram, c->r[2] + 0x00000006u);
    c->f[0] = u2f(c->r[2]);
    c->f[1] = (f32)(s32)f2u(c->f[0]);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x0000000cu);
    c->f[0] = c->f[1] * c->f[0];
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    c->r[3] = f2u(c->f[0]);
    c->r[2] = mem_r16(ram, c->r[30] + 0x00000006u);
    c->r[2] = c->r[2] + c->r[3];
    mem_w16(ram, c->r[4] + 0x00000008u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[4] = c->r[2] + 0x00000010u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = mem_r16(ram, c->r[2] + 0x00000008u);
    c->f[0] = u2f(c->r[2]);
    c->f[1] = (f32)(s32)f2u(c->f[0]);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x0000000cu);
    c->f[0] = c->f[1] * c->f[0];
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    c->r[3] = f2u(c->f[0]);
    c->r[2] = mem_r16(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = c->r[2] + 0xffffffffu;
    mem_w16(ram, c->r[4] + 0x0000000au, c->r[2]);
    c->r[2] = 0x08b80000u;
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0xfffffc72u);
    c->r[4] = 0x08a70000u;
    c->r[4] = c->r[4] + 0xffffb640u;
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x089d1d84u; c->r[6] = 0u + 0u; func_089e0bd8(c, ram); }
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
    c->r[5] = 0u + 0x00000006u;
    c->r[6] = 0x00800000u;
    c->r[6] = c->r[6] | 0x011eu;
    c->r[7] = 0u + 0x00000002u;
    c->r[8] = 0u + 0u;
    { c->r[31] = 0x089d1de0u; c->r[9] = mem_r32(ram, c->r[30] + 0x00000018u); func_089d220c(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = mem_r16(ram, c->r[2] + 0x00000006u);
    c->f[0] = u2f(c->r[2]);
    c->f[1] = (f32)(s32)f2u(c->f[0]);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x0000000cu);
    c->f[0] = c->f[1] * c->f[0];
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    c->r[2] = f2u(c->f[0]);
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000024u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000020u);
    { c->r[29] = c->r[29] + 0x00000030u; return; }
    return; /* fell out of func_089d1bf0 */
}

/* func_089d2e98  0x089d2e98..0x089d2edc  68 bytes, source=sweep */
void func_089d2e98(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089d2e98u);
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
    { c->r[31] = 0x089d2ec8u; c->r[5] = c->r[2] + 0u; func_089d20f0(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_089d2e98 */
}

/* func_089d4150  0x089d4150..0x089d431c  460 bytes, source=fde */
void func_089d4150(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089d4150u);
    c->r[29] = c->r[29] + 0xfffffd20u;
    mem_w32(ram, c->r[29] + 0x000002d4u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x000002d0u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, 0u);
    mem_w32(ram, c->r[30] + 0x00000008u, 0u);
    c->r[2] = c->r[30] + 0x00000008u;
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x089d417cu; c->r[5] = 0u + 0u; hle_dispatch_stub(c, ram, 0x08a24ba4u); /* sceNetAdhocGetPdpStat */ }
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[2]);
    c->r[2] = c->r[30] + 0x00000008u;
    c->r[3] = c->r[30] + 0x00000010u;
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x089d4194u; c->r[5] = c->r[3] + 0u; hle_dispatch_stub(c, ram, 0x08a24ba4u); /* sceNetAdhocGetPdpStat */ }
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    { int _c = ((s32)c->r[2] >= 0); if (_c) goto L_089d41b0; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    { mem_w32(ram, c->r[30] + 0x000002c0u, c->r[2]); goto L_089d4304; }
L_089d41b0:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_089d41c4; }
    { mem_w32(ram, c->r[30] + 0x000002c0u, 0u); goto L_089d4304; }
L_089d41c4:
    mem_w32(ram, c->r[30] + 0x00000294u, 0u);
    c->r[2] = c->r[30] + 0x00000010u;
    mem_w32(ram, c->r[30] + 0x00000290u, c->r[2]);
L_089d41d0:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000290u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_089d41e4; }
    { goto L_089d4208; }
L_089d41e4:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000290u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000294u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000010u);
    c->r[2] = c->r[3] + c->r[2];
    mem_w32(ram, c->r[30] + 0x00000294u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000290u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    { mem_w32(ram, c->r[30] + 0x00000290u, c->r[2]); goto L_089d41d0; }
L_089d4208:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000294u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_089d421c; }
    { mem_w32(ram, c->r[30] + 0x000002c0u, 0u); goto L_089d4304; }
L_089d421c:
    mem_w32(ram, c->r[30] + 0x00000294u, 0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000016u);
    c->r[2] = c->r[2] + 0x00000001u;
    mem_w32(ram, c->r[30] + 0x000002b4u, c->r[2]);
    mem_w32(ram, c->r[30] + 0x000002b8u, 0u);
L_089d4234:
    c->r[2] = mem_r32(ram, c->r[30] + 0x000002b8u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_089d4248; }
    { goto L_089d42fc; }
L_089d4248:
    c->r[2] = 0u + 0x00000400u;
    mem_w32(ram, c->r[30] + 0x000002bcu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = c->r[30] + 0x000002a0u;
    c->r[6] = c->r[30] + 0x000002b0u;
    c->r[8] = c->r[30] + 0x000002bcu;
    c->r[4] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[5] = c->r[3] + 0u;
    c->r[7] = 0x08b90000u;
    c->r[7] = c->r[7] + 0xfffffd34u;
    c->r[9] = 0u + 0u;
    { c->r[31] = 0x089d427cu; c->r[10] = 0u + 0x00000001u; hle_dispatch_stub(c, ram, 0x08a24bacu); /* sceNetAdhocPdpRecv */ }
    mem_w32(ram, c->r[30] + 0x000002b8u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x000002b8u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_089d42e0; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000016u);
    c->r[2] = c->r[2] ^ 0x0001u;
    mem_w8(ram, c->r[3] + 0x00000016u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000016u);
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[3];
    c->r[2] = c->r[2] + 0x00000004u;
    c->r[4] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[5] = 0x08b90000u;
    c->r[5] = c->r[5] + 0xfffffd34u;
    { c->r[31] = 0x089d42ccu; c->r[6] = mem_r32(ram, c->r[30] + 0x000002bcu); func_08a19db8(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000016u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x000002b4u, c->r[2]); goto L_089d4234; }
L_089d42e0:
    c->r[3] = mem_r32(ram, c->r[30] + 0x000002b8u);
    c->r[2] = 0x80410000u;
    c->r[2] = c->r[2] | 0x0709u;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_089d4234; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x000002b8u);
    mem_w32(ram, c->r[30] + 0x000002b4u, c->r[2]);
L_089d42fc:
    c->r[2] = mem_r32(ram, c->r[30] + 0x000002b4u);
    mem_w32(ram, c->r[30] + 0x000002c0u, c->r[2]);
L_089d4304:
    c->r[2] = mem_r32(ram, c->r[30] + 0x000002c0u);
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x000002d4u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x000002d0u);
    { c->r[29] = c->r[29] + 0x000002e0u; return; }
    return; /* fell out of func_089d4150 */
}

/* func_089d5924  0x089d5924..0x089d5974  80 bytes, source=fde */
void func_089d5924(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089d5924u);
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
    { c->r[31] = 0x089d5960u; c->r[8] = mem_r32(ram, c->r[30] + 0x00000010u); func_08975a98(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000024u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000020u);
    { c->r[29] = c->r[29] + 0x00000030u; return; }
    return; /* fell out of func_089d5924 */
}

/* func_089d7208  0x089d7208..0x089d72c8  192 bytes, source=fde */
void func_089d7208(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089d7208u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[2] + 0x00000001u;
    mem_w32(ram, c->r[3] + 0x00000008u, c->r[2]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x00000008u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 2;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = c->r[2] + 0x00006010u;
    c->r[4] = mem_r32(ram, c->r[4] + 0x0000000cu);
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x089d7268u; c->r[6] = 0u + 0x0000000cu; func_08a19db8(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000008u);
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]);
L_089d7274:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000010u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_089d728c; }
    { goto L_089d72b4; }
L_089d728c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08a80000u;
    c->r[2] = c->r[2] + 0x00003bdcu;
    c->r[2] = c->r[3] + c->r[2];
    mem_w32(ram, c->r[2] + 0x00000000u, 0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]); goto L_089d7274; }
L_089d72b4:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_089d7208 */
}

/* func_089d8a88  0x089d8a88..0x089d8ae4  92 bytes, source=fde */
void func_089d8a88(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089d8a88u);
    c->r[29] = c->r[29] + 0xffffffd0u;
    mem_w32(ram, c->r[29] + 0x00000024u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000020u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[6]);
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[7]);
    c->r[2] = 0u + 0x00000011u;
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[6] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[7] = mem_r32(ram, c->r[30] + 0x00000008u);
    { c->r[31] = 0x089d8ac8u; c->r[8] = mem_r32(ram, c->r[30] + 0x0000000cu); func_089d9034(c, ram); }
    { c->r[31] = 0x089d8ad0u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u); func_089d9524(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000024u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000020u);
    { c->r[29] = c->r[29] + 0x00000030u; return; }
    return; /* fell out of func_089d8a88 */
}

/* func_089d9c80  0x089d9c80..0x089d9cc4  68 bytes, source=sweep */
void func_089d9c80(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089d9c80u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 3;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 3;
    c->r[2] = mem_r32(ram, c->r[4] + 0x0000065cu);
    c->r[2] = c->r[3] + c->r[2];
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_089d9c80 */
}

/* func_089db14c  0x089db14c..0x089db180  52 bytes, source=sweep */
void func_089db14c(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089db14cu);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[4] = mem_r32(ram, c->r[2] + 0x00000020u);
    c->r[2] = mem_r32(ram, c->r[3] + 0x0000001cu);
    c->r[2] = c->r[4] - c->r[2];
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_089db14c */
}

/* func_089dc264  0x089dc264..0x089dc2a8  68 bytes, source=sweep */
void func_089dc264(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089dc264u);
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
    { c->r[31] = 0x089dc294u; c->r[5] = c->r[2] + 0u; func_089db8b8(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_089dc264 */
}

/* func_089de31c  0x089de31c..0x089de398  124 bytes, source=sweep */
void func_089de31c(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089de31cu);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = 0u + 0xffffffffu;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_089de358; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x00000024u);
    c->r[2] = 0x08b90000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x000006dcu);
    c->r[2] = c->r[3] + c->r[2];
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[2]);
L_089de358:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    mem_w32(ram, c->r[3] + 0x00000024u, c->r[2]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000010u);
    c->r[3] = c->r[2] << 2;
    c->r[2] = mem_r32(ram, c->r[4] + 0x0000000cu);
    c->r[3] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    mem_w32(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[2] = 0u + 0u;
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_089de31c */
}

/* func_089e0fac  0x089e0fac..0x089e10c4  280 bytes, source=fde */
void func_089e0fac(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089e0facu);
    c->r[29] = c->r[29] + 0xffffffb0u;
    mem_w32(ram, c->r[29] + 0x00000044u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000040u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[5]);
    mem_w32(ram, c->r[30] + 0x00000018u, c->r[6]);
    mem_w32(ram, c->r[30] + 0x0000001cu, c->r[7]);
    mem_w32(ram, c->r[30] + 0x00000020u, c->r[8]);
    mem_w32(ram, c->r[30] + 0x00000024u, c->r[9]);
    mem_w32(ram, c->r[30] + 0x00000028u, c->r[10]);
    { c->r[31] = 0x089e0fe0u; mem_w32(ram, c->r[30] + 0x0000002cu, c->r[11]); hle_dispatch_stub(c, ram, 0x08a24a24u); /* sceGeEdramGetAddr */ }
    mem_w32(ram, c->r[30] + 0x00000030u, c->r[2]);
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
    { c->r[31] = 0x089e1028u; c->r[4] = c->r[2] + 0u; func_089e1e68(c, ram); }
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
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[3] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    mem_w32(ram, c->r[29] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000024u);
    mem_w32(ram, c->r[29] + 0x00000004u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000028u);
    mem_w32(ram, c->r[29] + 0x00000008u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000050u);
    mem_w32(ram, c->r[29] + 0x0000000cu, c->r[2]);
    c->r[5] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[6] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[7] = mem_r32(ram, c->r[30] + 0x00000024u);
    c->r[8] = mem_r32(ram, c->r[30] + 0x00000028u);
    c->r[9] = mem_r32(ram, c->r[30] + 0x0000002cu);
    c->r[10] = mem_r32(ram, c->r[30] + 0x00000018u);
    { c->r[31] = 0x089e10b0u; c->r[11] = c->r[3] + 0u; func_089e1c28(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000044u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000040u);
    { c->r[29] = c->r[29] + 0x00000050u; return; }
    return; /* fell out of func_089e0fac */
}

/* func_089e2100  0x089e2100..0x089e2158  88 bytes, source=sweep */
void func_089e2100(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089e2100u);
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
    { c->r[31] = 0x089e2144u; c->r[9] = mem_r32(ram, c->r[30] + 0x00000014u); func_089e3d84(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000024u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000020u);
    { c->r[29] = c->r[29] + 0x00000030u; return; }
    return; /* fell out of func_089e2100 */
}

/* func_089e345c  0x089e345c..0x089e3490  52 bytes, source=sweep */
void func_089e345c(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089e345cu);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x089e347cu; c->r[5] = 0x9b000000u; func_089e1908(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_089e345c */
}

/* func_089e46f0  0x089e46f0..0x089e4734  68 bytes, source=sweep */
void func_089e46f0(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089e46f0u);
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
    { c->r[31] = 0x089e4720u; c->r[5] = c->r[2] + 0u; func_089e1908(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_089e46f0 */
}

/* func_089e68e0  0x089e68e0..0x089e6a0c  300 bytes, source=sweep */
void func_089e68e0(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089e68e0u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000018u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[30]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[16]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[6]);
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[7]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = 0u | 0xe890u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x089e691cu; c->r[5] = mem_r32(ram, c->r[30] + 0x00000004u); func_0884c1d8(c, ram); }
    c->r[16] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x089e6928u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000008u); func_0888d9b8(c, ram); }
    c->r[1] = 0x00010000u;
    c->r[1] = c->r[1] + c->r[16];
    mem_w32(ram, c->r[1] + 0xffffe8a0u, c->r[2]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = 0x00010000u;
    c->r[3] = c->r[3] + c->r[2];
    c->r[3] = mem_r32(ram, c->r[3] + 0xffffe8a0u);
    c->r[2] = 0x00ff0000u;
    c->r[2] = c->r[2] | 0xffffu;
    c->r[2] = c->r[3] & c->r[2];
    c->r[1] = 0x00010000u;
    c->r[1] = c->r[1] + c->r[4];
    mem_w32(ram, c->r[1] + 0xffffe8a0u, c->r[2]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = 0x00010000u;
    c->r[3] = c->r[3] + c->r[2];
    c->r[3] = mem_r32(ram, c->r[3] + 0xffffe8a0u);
    c->r[2] = 0x7f000000u;
    c->r[2] = c->r[3] | c->r[2];
    c->r[1] = 0x00010000u;
    c->r[1] = c->r[1] + c->r[4];
    mem_w32(ram, c->r[1] + 0xffffe8a0u, c->r[2]);
    c->r[16] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x089e6994u; c->r[4] = mem_r32(ram, c->r[30] + 0x0000000cu); func_0888d9b8(c, ram); }
    c->r[1] = 0x00010000u;
    c->r[1] = c->r[1] + c->r[16];
    mem_w32(ram, c->r[1] + 0xffffe8a4u, c->r[2]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = 0x00010000u;
    c->r[3] = c->r[3] + c->r[2];
    c->r[3] = mem_r32(ram, c->r[3] + 0xffffe8a4u);
    c->r[2] = 0x00ff0000u;
    c->r[2] = c->r[2] | 0xffffu;
    c->r[2] = c->r[3] & c->r[2];
    c->r[1] = 0x00010000u;
    c->r[1] = c->r[1] + c->r[4];
    mem_w32(ram, c->r[1] + 0xffffe8a4u, c->r[2]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = 0x00010000u;
    c->r[3] = c->r[3] + c->r[2];
    c->r[3] = mem_r32(ram, c->r[3] + 0xffffe8a4u);
    c->r[2] = 0x7f000000u;
    c->r[2] = c->r[3] | c->r[2];
    c->r[1] = 0x00010000u;
    c->r[1] = c->r[1] + c->r[4];
    mem_w32(ram, c->r[1] + 0xffffe8a4u, c->r[2]);
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000018u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[16] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_089e68e0 */
}

/* func_089ea8e4  0x089ea8e4..0x089ea9b4  208 bytes, source=sweep */
void func_089ea8e4(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089ea8e4u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x00000008u);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[8] = 0x3a000000u;
    mem_w32(ram, c->r[3] + 0x00000000u, c->r[8]);
    c->r[8] = 0x3b000000u;
    c->r[9] = 0x3b000000u;
    c->r[10] = 0x3b000000u;
    c->r[8] = mem_lwr(ram, c->r[4] + 0x00000001u, c->r[8]);
    c->r[9] = mem_lwr(ram, c->r[4] + 0x00000005u, c->r[9]);
    c->r[10] = mem_lwr(ram, c->r[4] + 0x00000009u, c->r[10]);
    mem_w32(ram, c->r[3] + 0x00000004u, c->r[8]);
    mem_w32(ram, c->r[3] + 0x00000008u, c->r[9]);
    mem_w32(ram, c->r[3] + 0x0000000cu, c->r[10]);
    c->r[8] = 0x3b000000u;
    c->r[9] = 0x3b000000u;
    c->r[10] = 0x3b000000u;
    c->r[8] = mem_lwr(ram, c->r[4] + 0x00000011u, c->r[8]);
    c->r[9] = mem_lwr(ram, c->r[4] + 0x00000015u, c->r[9]);
    c->r[10] = mem_lwr(ram, c->r[4] + 0x00000019u, c->r[10]);
    mem_w32(ram, c->r[3] + 0x00000010u, c->r[8]);
    mem_w32(ram, c->r[3] + 0x00000014u, c->r[9]);
    mem_w32(ram, c->r[3] + 0x00000018u, c->r[10]);
    c->r[8] = 0x3b000000u;
    c->r[9] = 0x3b000000u;
    c->r[10] = 0x3b000000u;
    c->r[8] = mem_lwr(ram, c->r[4] + 0x00000021u, c->r[8]);
    c->r[9] = mem_lwr(ram, c->r[4] + 0x00000025u, c->r[9]);
    c->r[10] = mem_lwr(ram, c->r[4] + 0x00000029u, c->r[10]);
    mem_w32(ram, c->r[3] + 0x0000001cu, c->r[8]);
    mem_w32(ram, c->r[3] + 0x00000020u, c->r[9]);
    mem_w32(ram, c->r[3] + 0x00000024u, c->r[10]);
    c->r[8] = 0x3b000000u;
    c->r[9] = 0x3b000000u;
    c->r[10] = 0x3b000000u;
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
    return; /* fell out of func_089ea8e4 */
}

/* func_089ebe90  0x089ebe90..0x089ec130  672 bytes, source=sweep */
void func_089ebe90(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089ebe90u);
    c->r[29] = c->r[29] + 0xffffffc0u;
    mem_w32(ram, c->r[29] + 0x00000038u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000034u, c->r[30]);
    mem_w32(ram, c->r[29] + 0x00000030u, c->r[16]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[6]);
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[7]);
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[8]);
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[9]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[2] = c->r[2] << 3;
    mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000018u);
    { c->r[31] = 0x089ebee0u; c->r[5] = 0u + 0x00000010u; func_0881a1d4(c, ram); }
    mem_w32(ram, c->r[30] + 0x0000001cu, c->r[2]);
    mem_w32(ram, c->r[30] + 0x00000020u, 0u);
L_089ebee8:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = ((s32)c->r[2] < (s32)c->r[3]) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_089ebf04; }
    { goto L_089ec0b0; }
L_089ebf04:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_089ebf70; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 3;
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[3] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000000u);
    mem_wf32(ram, c->r[3] + 0x00000000u, c->f[0]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 3;
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[3] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000004u);
    mem_wf32(ram, c->r[3] + 0x00000004u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = c->r[2] + 0x00000010u;
    { mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]); goto L_089ebfb0; }
L_089ebf70:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 3;
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = c->r[3] + c->r[2];
    mem_w32(ram, c->r[2] + 0x00000000u, 0u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 3;
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = c->r[3] + c->r[2];
    mem_w32(ram, c->r[2] + 0x00000004u, 0u);
L_089ebfb0:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    { int _c = (c->r[2] == 0u); if (_c) goto L_089ebff4; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 3;
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[16] = c->r[3] + c->r[2];
    { c->r[31] = 0x089ebfe0u; c->r[4] = mem_r32(ram, c->r[30] + 0x0000000cu); func_0888d9b8(c, ram); }
    mem_w32(ram, c->r[16] + 0x00000008u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x00000010u;
    { mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]); goto L_089ec01c; }
L_089ebff4:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 3;
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[3] = c->r[3] + c->r[2];
    c->r[2] = 0xff800000u;
    c->r[2] = c->r[2] | 0x8080u;
    mem_w32(ram, c->r[3] + 0x00000008u, c->r[2]);
L_089ec01c:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 3;
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[3] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000000u);
    mem_wf32(ram, c->r[3] + 0x0000000cu, c->f[0]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 3;
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[3] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000004u);
    mem_wf32(ram, c->r[3] + 0x00000010u, c->f[0]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 3;
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[3] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000008u);
    mem_wf32(ram, c->r[3] + 0x00000014u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[2] = c->r[2] + 0x00000001u;
    mem_w32(ram, c->r[30] + 0x00000020u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[2] + 0x00000010u;
    { mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]); goto L_089ebee8; }
L_089ec0b0:
    c->r[2] = 0u + 0x00000005u;
    mem_w32(ram, c->r[30] + 0x00000020u, c->r[2]);
    c->r[2] = 0u + 0x0000019fu;
    mem_w32(ram, c->r[30] + 0x00000024u, c->r[2]);
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
    c->r[5] = 0u + 0x00000005u;
    c->r[6] = 0u + 0x0000019fu;
    c->r[7] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[8] = 0u + 0u;
    { c->r[31] = 0x089ec118u; c->r[9] = mem_r32(ram, c->r[30] + 0x0000001cu); func_089ef030(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000038u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000034u);
    c->r[16] = mem_r32(ram, c->r[29] + 0x00000030u);
    { c->r[29] = c->r[29] + 0x00000040u; return; }
    return; /* fell out of func_089ebe90 */
}

/* func_089f05b8  0x089f05b8..0x089f0624  108 bytes, source=sweep */
void func_089f05b8(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089f05b8u);
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
    { c->r[31] = 0x089f05f4u; c->r[5] = c->r[2] + 0u; func_089f0338(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = c->r[2] >> 24;
    c->r[2] = 0x58000000u;
    c->r[2] = c->r[3] | c->r[2];
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x089f0610u; c->r[5] = c->r[2] + 0u; func_089f0338(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_089f05b8 */
}

/* func_089f147c  0x089f147c..0x089f152c  176 bytes, source=sweep */
void func_089f147c(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089f147cu);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = 0u + 0x00000001u;
    c->r[1] = 0x00010000u;
    c->r[1] = c->r[1] + c->r[3];
    mem_w32(ram, c->r[1] + 0xffffe8c0u, c->r[2]);
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
    { c->r[31] = 0x089f14e8u; c->r[4] = c->r[2] + 0u; func_089f1ac8(c, ram); }
    c->r[2] = 0x08b90000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000070cu);
    c->r[2] = c->r[2] + 0xffffffffu;
    c->r[1] = 0x08b90000u;
    mem_w32(ram, c->r[1] + 0x0000070cu, c->r[2]);
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08b90000u;
    c->r[2] = c->r[2] + 0x00000710u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[1] = 0x08b90000u;
    mem_w32(ram, c->r[1] + 0x00000704u, c->r[2]);
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_089f147c */
}

/* func_089f5460  0x089f5460..0x089f5480  32 bytes, source=residue */
void func_089f5460(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089f5460u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_089f5460 */
}

/* func_089f73a0  0x089f73a0..0x089f742c  140 bytes, source=fde */
void func_089f73a0(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089f73a0u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    c->r[2] = c->r[30] + 0x00000008u;
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000004u);
    { c->r[31] = 0x089f73ccu; c->r[6] = c->r[2] + 0u; func_089f8254(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = 0u + 0xffffffffu;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_089f7414; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000048u);
    c->r[2] = c->r[2] + 0xfffffffcu;
    c->r[2] = (c->r[2] < 0x00000002u) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_089f7404; }
    { c->r[31] = 0x089f73fcu; c->r[4] = mem_r32(ram, c->r[30] + 0x00000008u); func_08a022ec(c, ram); }
    { goto L_089f740c; }
L_089f7404:
    { c->r[31] = 0x089f740cu; c->r[4] = mem_r32(ram, c->r[30] + 0x00000008u); func_089f97d4(c, ram); }
L_089f740c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    mem_w32(ram, c->r[2] + 0x00000090u, 0u);
L_089f7414:
    c->r[2] = 0u + 0xffffffffu;
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_089f73a0 */
}

/* func_089f8edc  0x089f8edc..0x089f8f14  56 bytes, source=fde */
void func_089f8edc(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089f8edcu);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    { c->r[31] = 0x089f8ef8u; c->r[4] = 0u + 0u; func_08a01700(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_089f8edc */
}

/* func_089f9a54  0x089f9a54..0x089f9ab0  92 bytes, source=sweep */
void func_089f9a54(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089f9a54u);
    c->r[29] = c->r[29] + 0xfffffff0u;
    mem_w32(ram, c->r[29] + 0x00000000u, c->r[16]);
    c->r[3] = c->r[4] + 0u;
    c->r[6] = 0x80000000u;
    mem_w32(ram, c->r[29] + 0x00000004u, c->r[31]);
    c->r[3] = alx_seh(c->r[3]);
    c->r[16] = c->r[5] + 0u;
    c->r[2] = mem_r32(ram, c->r[5] + 0x00000000u);
    c->r[6] = c->r[6] | 0x001au;
    c->r[4] = c->r[2] + 0u;
    c->r[2] = (c->r[2] < 0x00000020u) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); c->r[5] = c->r[3] + 0u; if (_c) goto L_089f9a9c; }
    { c->r[31] = 0x089f9a90u; mem_w16(ram, c->r[16] + 0x0000001cu, c->r[3]); func_089fcdf0(c, ram); }
    { c->r[31] = 0x089f9a98u; c->r[4] = c->r[16] + 0u; func_089fbef8(c, ram); }
    c->r[6] = 0u + 0u;
L_089f9a9c:
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000004u);
    c->r[16] = mem_r32(ram, c->r[29] + 0x00000000u);
    c->r[2] = c->r[6] + 0u;
    { c->r[29] = c->r[29] + 0x00000010u; return; }
    return; /* fell out of func_089f9a54 */
}

/* func_089fa4d4  0x089fa4d4..0x089fa4fc  40 bytes, source=sweep */
void func_089fa4d4(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089fa4d4u);
    c->r[2] = 0x08b90000u;
    c->r[5] = c->r[4] + 0u;
    c->r[4] = mem_r32(ram, c->r[2] + 0x0000658cu);
    c->r[29] = c->r[29] + 0xfffffff0u;
    mem_w32(ram, c->r[29] + 0x00000000u, c->r[31]);
    { c->r[31] = 0x089fa4f0u; func_089fa188(c, ram); }
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000000u);
    { c->r[29] = c->r[29] + 0x00000010u; return; }
    return; /* fell out of func_089fa4d4 */
}

/* func_089fadb4  0x089fadb4..0x089fadd4  32 bytes, source=residue */
void func_089fadb4(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089fadb4u);
    c->r[29] = c->r[29] + 0xfffffff0u;
    mem_w32(ram, c->r[29] + 0x00000000u, c->r[31]);
    { c->r[31] = 0x089fadc4u; func_089fabd4(c, ram); }
    c->r[2] = 0u + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000000u);
    { c->r[29] = c->r[29] + 0x00000010u; return; }
    return; /* fell out of func_089fadb4 */
}

/* func_089fbbf0  0x089fbbf0..0x089fbc80  144 bytes, source=sweep */
void func_089fbbf0(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089fbbf0u);
    c->r[6] = mem_r32(ram, c->r[4] + 0x00000a00u);
    c->r[10] = c->r[5] + 0u;
    { int _c = ((s32)c->r[6] <= 0); c->r[5] = 0u + 0u; if (_c) goto L_089fbc20; }
    c->r[8] = c->r[4] + 0u;
    c->r[4] = 0u + 0xffffffffu;
L_089fbc08:
    c->r[2] = mem_r32(ram, c->r[8] + 0x00000000u);
    c->r[5] = c->r[5] + 0x00000001u;
    { int _c = (c->r[2] == c->r[4]); c->r[3] = ((s32)c->r[5] < (s32)c->r[6]) ? 1u : 0u; if (_c) goto L_089fbc2c; }
    { int _c = (c->r[3] != 0u); c->r[8] = c->r[8] + 0x00000028u; if (_c) goto L_089fbc08; }
L_089fbc20:
    c->r[3] = 0u + 0xffffffffu;
L_089fbc24:
    { c->r[2] = c->r[3] + 0u; return; }
L_089fbc2c:
    c->r[6] = c->r[10] + 0u;
    c->r[7] = c->r[8] + 0u;
    c->r[9] = c->r[10] + 0x00000020u;
L_089fbc38:
    c->r[2] = mem_r32(ram, c->r[6] + 0x00000000u);
    c->r[3] = mem_r32(ram, c->r[6] + 0x00000004u);
    c->r[4] = mem_r32(ram, c->r[6] + 0x00000008u);
    c->r[5] = mem_r32(ram, c->r[6] + 0x0000000cu);
    mem_w32(ram, c->r[7] + 0x00000000u, c->r[2]);
    c->r[6] = c->r[6] + 0x00000010u;
    c->r[7] = c->r[7] + 0x00000010u;
    mem_w32(ram, c->r[7] + 0xfffffff4u, c->r[3]);
    mem_w32(ram, c->r[7] + 0xfffffff8u, c->r[4]);
    { int _c = (c->r[6] != c->r[9]); mem_w32(ram, c->r[7] + 0xfffffffcu, c->r[5]); if (_c) goto L_089fbc38; }
    c->r[2] = mem_r32(ram, c->r[6] + 0x00000000u);
    mem_w32(ram, c->r[7] + 0x00000000u, c->r[2]);
    c->r[3] = 0u + 0u;
    c->r[2] = mem_r32(ram, c->r[10] + 0x00000008u);
    mem_w32(ram, c->r[8] + 0x00000000u, 0u);
    { mem_w32(ram, c->r[8] + 0x00000024u, c->r[2]); goto L_089fbc24; }
    return; /* fell out of func_089fbbf0 */
}

/* func_089fc75c  0x089fc75c..0x089fc858  252 bytes, source=residue */
void func_089fc75c(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089fc75cu);
    c->r[29] = c->r[29] + 0xffffffd0u;
    mem_w32(ram, c->r[29] + 0x00000000u, 0u);
    mem_w32(ram, c->r[29] + 0x00000004u, 0u);
    mem_w32(ram, c->r[29] + 0x00000018u, c->r[18]);
    c->r[18] = 0x08ba0000u;
    c->r[2] = mem_r32(ram, c->r[18] + 0xffff8ac0u);
    mem_w32(ram, c->r[29] + 0x00000020u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x0000001cu, c->r[19]);
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[17]);
    { int _c = (c->r[2] == 0u); mem_w32(ram, c->r[29] + 0x00000010u, c->r[16]); if (_c) goto L_089fc7fc; }
    c->r[2] = 0x08ba0000u;
    c->r[17] = c->r[2] + 0xffff8ac8u;
    c->r[16] = 0x08ba0000u;
    c->r[19] = 0x08ba0000u;
L_089fc798:
    c->r[2] = mem_r32(ram, c->r[29] + 0x00000000u);
    c->r[3] = mem_r32(ram, c->r[29] + 0x00000004u);
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[17];
    c->r[4] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[3] = c->r[3] << 10;
    { c->r[31] = 0x089fc7b8u; c->r[4] = c->r[4] + c->r[3]; func_08a05918(c, ram); }
    c->r[3] = mem_r32(ram, c->r[16] + 0xffff92d0u);
    c->r[3] = c->r[3] + 0x00000001u;
    { c->r[31] = 0x089fc7c8u; mem_w32(ram, c->r[16] + 0xffff92d0u, c->r[3]); func_089fa43c(c, ram); }
    c->r[4] = 0u + 0u;
    c->r[3] = mem_r32(ram, c->r[29] + 0x00000004u);
    c->r[5] = 0u | 0x8000u;
    c->r[6] = 0u | 0x8000u;
    c->r[3] = c->r[3] + 0x00000001u;
    mem_w32(ram, c->r[29] + 0x00000004u, c->r[3]);
    c->r[2] = mem_r32(ram, c->r[29] + 0x00000004u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000003u) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_089fc824; }
L_089fc7f0:
    c->r[2] = mem_r32(ram, c->r[18] + 0xffff8ac0u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_089fc798; }
L_089fc7fc:
    { c->r[31] = 0x089fc804u; c->r[4] = 0u + 0u; hle_dispatch_stub(c, ram, 0x08a248c4u); /* sceKernelExitThread */ }
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000020u);
    c->r[19] = mem_r32(ram, c->r[29] + 0x0000001cu);
    c->r[18] = mem_r32(ram, c->r[29] + 0x00000018u);
    c->r[17] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[16] = mem_r32(ram, c->r[29] + 0x00000010u);
    c->r[2] = 0u + 0u;
    { c->r[29] = c->r[29] + 0x00000030u; return; }
L_089fc824:
    mem_w32(ram, c->r[29] + 0x00000004u, 0u);
    c->r[2] = mem_r32(ram, c->r[29] + 0x00000000u);
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[17];
    { c->r[31] = 0x089fc83cu; c->r[7] = mem_r32(ram, c->r[2] + 0x00000000u); func_08a04588(c, ram); }
    c->r[3] = mem_r32(ram, c->r[29] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[19] + 0xffff8ab8u);
    c->r[3] = c->r[3] ^ 0x0001u;
    c->r[2] = c->r[2] + 0x00000300u;
    mem_w32(ram, c->r[29] + 0x00000000u, c->r[3]);
    { mem_w32(ram, c->r[19] + 0xffff8ab8u, c->r[2]); goto L_089fc7f0; }
    return; /* fell out of func_089fc75c */
}

/* func_089fdc24  0x089fdc24..0x089fdd18  244 bytes, source=fde */
void func_089fdc24(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089fdc24u);
    c->r[29] = c->r[29] + 0xffffffd0u;
    c->r[2] = c->r[5] << 5;
    mem_w32(ram, c->r[29] + 0x0000000cu, c->r[19]);
    c->r[5] = c->r[2] + c->r[5];
    c->r[2] = c->r[5] << 3;
    mem_w32(ram, c->r[29] + 0x00000008u, c->r[18]);
    c->r[2] = c->r[2] + c->r[4];
    c->r[19] = c->r[4] + 0u;
    mem_w32(ram, c->r[29] + 0x00000020u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x0000001cu, c->r[23]);
    mem_w32(ram, c->r[29] + 0x00000018u, c->r[22]);
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[21]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[20]);
    mem_w32(ram, c->r[29] + 0x00000004u, c->r[17]);
    mem_w32(ram, c->r[29] + 0x00000000u, c->r[16]);
    c->r[3] = mem_r32(ram, c->r[2] + 0x00000000u);
    { int _c = ((s32)c->r[3] <= 0); c->r[18] = 0u + 0u; if (_c) goto L_089fdcec; }
    c->r[17] = c->r[5] + 0u;
    c->r[21] = c->r[2] + 0u;
    c->r[23] = 0u + 0xffffffffu;
    c->r[22] = 0u + 0x0000001eu;
    c->r[20] = c->r[5] + 0u;
L_089fdc80:
    c->r[2] = c->r[17] << 1;
    c->r[2] = c->r[2] + c->r[18];
    c->r[2] = c->r[2] << 2;
    c->r[16] = c->r[2] + c->r[19];
    c->r[5] = mem_r32(ram, c->r[16] + 0x00000008u);
    c->r[3] = ~(0u | c->r[5]);
    c->r[2] = c->r[5] ^ 0x001du;
    c->r[3] = (0u < c->r[3]) ? 1u : 0u;
    c->r[2] = (0u < c->r[2]) ? 1u : 0u;
    c->r[3] = c->r[3] & c->r[2];
    { int _c = (c->r[3] == 0u); c->r[18] = c->r[18] + 0x00000001u; if (_c) goto L_089fdcdc; }
    { int _c = (c->r[5] == c->r[22]); c->r[4] = c->r[5] + 0u; if (_c) goto L_089fdcdc; }
    { c->r[31] = 0x089fdcc0u; func_089fc8b4(c, ram); }
    c->r[3] = c->r[17] << 3;
    c->r[3] = c->r[3] + c->r[19];
    c->r[2] = mem_r32(ram, c->r[3] + 0x00000004u);
    mem_w32(ram, c->r[16] + 0x00000088u, c->r[23]);
    c->r[2] = c->r[2] + 0xffffffffu;
    mem_w32(ram, c->r[3] + 0x00000004u, c->r[2]);
    mem_w32(ram, c->r[16] + 0x00000008u, c->r[23]);
L_089fdcdc:
    c->r[2] = mem_r32(ram, c->r[21] + 0x00000000u);
    c->r[2] = ((s32)c->r[18] < (s32)c->r[2]) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); c->r[17] = c->r[20] + 0u; if (_c) goto L_089fdc80; }
L_089fdcec:
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000020u);
    c->r[23] = mem_r32(ram, c->r[29] + 0x0000001cu);
    c->r[22] = mem_r32(ram, c->r[29] + 0x00000018u);
    c->r[21] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[20] = mem_r32(ram, c->r[29] + 0x00000010u);
    c->r[19] = mem_r32(ram, c->r[29] + 0x0000000cu);
    c->r[18] = mem_r32(ram, c->r[29] + 0x00000008u);
    c->r[17] = mem_r32(ram, c->r[29] + 0x00000004u);
    c->r[16] = mem_r32(ram, c->r[29] + 0x00000000u);
    { c->r[29] = c->r[29] + 0x00000030u; return; }
    return; /* fell out of func_089fdc24 */
}

/* func_089feb4c  0x089feb4c..0x089feba8  92 bytes, source=residue */
void func_089feb4c(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089feb4cu);
    c->r[3] = 0x08ba0000u;
    c->r[2] = mem_r32(ram, c->r[3] + 0x0000016cu);
    c->r[3] = c->r[4] >> 31;
    c->r[6] = 0x80000000u;
    c->r[2] = ((s32)c->r[4] < (s32)c->r[2]) ? 1u : 0u;
    c->r[2] = c->r[2] ^ 0x0001u;
    c->r[2] = c->r[2] | c->r[3];
    c->r[3] = c->r[5] + 0x00000080u;
    c->r[7] = (c->r[3] < 0x00000101u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); c->r[6] = c->r[6] | 0x000au; if (_c) goto L_089feba0; }
    c->r[3] = c->r[4] << 3;
    c->r[3] = c->r[3] - c->r[4];
    c->r[2] = 0x08ba0000u;
    c->r[3] = c->r[3] << 5;
    c->r[2] = c->r[2] + 0x0000008cu;
    c->r[2] = c->r[3] + c->r[2];
    { int _c = (c->r[7] == 0u); c->r[6] = 0x80000000u; if (_c) goto L_089feba0; }
    mem_w32(ram, c->r[2] + 0x000000b8u, c->r[5]);
    c->r[6] = 0u + 0u;
L_089feba0:
    { c->r[2] = c->r[6] + 0u; return; }
    return; /* fell out of func_089feb4c */
}

/* func_08a01158  0x08a01158..0x08a0129c  324 bytes, source=residue */
void func_08a01158(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08a01158u);
    c->r[29] = c->r[29] + 0xffffffd0u;
    mem_w32(ram, c->r[29] + 0x00000018u, c->r[18]);
    c->r[18] = 0u + 0x00000094u;
    alx_mult(c, c->r[4], c->r[18]);
    mem_w32(ram, c->r[29] + 0x00000028u, c->r[22]);
    c->r[22] = 0x08ba0000u;
    mem_w32(ram, c->r[29] + 0x0000001cu, c->r[19]);
    c->r[3] = c->lo;
    c->r[19] = c->r[6] + 0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[17]);
    c->r[17] = c->r[22] + 0x00000184u;
    c->r[3] = c->r[3] + c->r[17];
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[16]);
    c->r[16] = c->r[5] + 0u;
    mem_w32(ram, c->r[29] + 0x0000002cu, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000024u, c->r[21]);
    mem_w32(ram, c->r[29] + 0x00000020u, c->r[20]);
    mem_w32(ram, c->r[29] + 0x00000000u, c->r[4]);
    c->r[2] = mem_r32(ram, c->r[3] + 0x00000000u);
    { int _c = (c->r[2] != 0u); c->r[5] = 0x80000000u; if (_c) goto L_08a0125c; }
    c->r[2] = mem_r32(ram, c->r[3] + 0x00000004u);
    c->r[4] = c->r[16] + 0u;
    c->r[20] = c->r[17] + 0x00000054u;
    { int _c = ((s32)c->r[2] <= 0); c->r[21] = 0u + 0x00000001u; if (_c) goto L_08a0125c; }
    { c->r[31] = 0x08a011c8u; func_08a1b008(c, ram); }
    c->r[4] = mem_r32(ram, c->r[29] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000001u;
    c->r[6] = c->r[2] + 0u;
    alx_mult(c, c->r[4], c->r[18]);
    c->r[5] = c->r[16] + 0u;
    c->r[4] = c->lo;
    { c->r[31] = 0x08a011e8u; c->r[4] = c->r[4] + c->r[20]; func_08a19db8(c, ram); }
    c->r[2] = mem_r32(ram, c->r[29] + 0x00000000u);
    c->r[5] = 0x08a50000u;
    c->r[5] = c->r[5] + 0xffffd320u;
    alx_mult(c, c->r[2], c->r[18]);
    c->r[6] = 0u + 0x00000002u;
    c->r[2] = c->lo;
    c->r[4] = c->r[2] + c->r[20];
    c->r[2] = c->r[2] + c->r[17];
    mem_w32(ram, c->r[2] + 0x00000044u, c->r[19]);
    mem_w32(ram, c->r[2] + 0x00000030u, 0u);
    mem_w32(ram, c->r[2] + 0x00000028u, 0u);
    { c->r[31] = 0x08a0121cu; mem_w32(ram, c->r[2] + 0x00000000u, c->r[21]); func_08a19d34(c, ram); }
    { int _c = (c->r[2] != 0u); c->r[4] = mem_r32(ram, c->r[29] + 0x00000000u); if (_c) goto L_08a01288; }
    alx_mult(c, c->r[4], c->r[18]);
    c->r[2] = c->lo;
    c->r[2] = c->r[2] + c->r[17];
    mem_w32(ram, c->r[2] + 0x00000040u, c->r[21]);
L_08a01234:
    c->r[2] = 0u + 0x00000094u;
    alx_mult(c, c->r[4], c->r[2]);
    c->r[3] = c->r[22] + 0x00000184u;
    c->r[5] = 0u + 0x00000004u;
    c->r[6] = c->r[29] + 0u;
    c->r[2] = c->lo;
    c->r[2] = c->r[2] + c->r[3];
    { c->r[31] = 0x08a01258u; c->r[4] = mem_r32(ram, c->r[2] + 0x00000034u); hle_dispatch_stub(c, ram, 0x08a2480cu); /* sceKernelStartThread */ }
    c->r[5] = c->r[2] + 0u;
L_08a0125c:
    c->r[31] = mem_r32(ram, c->r[29] + 0x0000002cu);
    c->r[22] = mem_r32(ram, c->r[29] + 0x00000028u);
    c->r[21] = mem_r32(ram, c->r[29] + 0x00000024u);
    c->r[20] = mem_r32(ram, c->r[29] + 0x00000020u);
    c->r[19] = mem_r32(ram, c->r[29] + 0x0000001cu);
    c->r[18] = mem_r32(ram, c->r[29] + 0x00000018u);
    c->r[17] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[16] = mem_r32(ram, c->r[29] + 0x00000010u);
    c->r[2] = c->r[5] + 0u;
    { c->r[29] = c->r[29] + 0x00000030u; return; }
L_08a01288:
    alx_mult(c, c->r[4], c->r[18]);
    c->r[2] = c->lo;
    c->r[2] = c->r[2] + c->r[17];
    { mem_w32(ram, c->r[2] + 0x00000040u, 0u); goto L_08a01234; }
    return; /* fell out of func_08a01158 */
}

/* func_08a02408  0x08a02408..0x08a0242c  36 bytes, source=fde */
void func_08a02408(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08a02408u);
    c->r[29] = c->r[29] + 0xfffffff0u;
    mem_w32(ram, c->r[29] + 0x00000000u, c->r[31]);
    c->r[2] = 0x08ba0000u;
    c->r[5] = c->r[4] + 0u;
    { c->r[31] = 0x08a02420u; c->r[4] = mem_r32(ram, c->r[2] + 0xffff9af0u); func_08a024f8(c, ram); }
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000000u);
    { c->r[29] = c->r[29] + 0x00000010u; return; }
    return; /* fell out of func_08a02408 */
}

/* func_08a032ac  0x08a032ac..0x08a032c8  28 bytes, source=fde */
void func_08a032ac(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08a032acu);
    c->r[29] = c->r[29] + 0xfffffff0u;
    mem_w32(ram, c->r[29] + 0x00000000u, c->r[31]);
    { c->r[31] = 0x08a032bcu; c->r[6] = 0u + 0xffffffffu; func_08a031c4(c, ram); }
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000000u);
    { c->r[29] = c->r[29] + 0x00000010u; return; }
    return; /* fell out of func_08a032ac */
}

/* func_08a044b8  0x08a044b8..0x08a04520  104 bytes, source=residue */
void func_08a044b8(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08a044b8u);
    c->r[29] = c->r[29] + 0xfffffff0u;
    c->r[9] = 0u | 0x8000u;
    c->r[2] = 0x80440000u;
    c->r[10] = (c->r[4] < 0x00000004u) ? 1u : 0u;
    mem_w32(ram, c->r[29] + 0x00000000u, c->r[31]);
    c->r[7] = c->r[2] | 0x0010u;
    { int _c = (c->r[10] == 0u); c->r[8] = (c->r[9] < c->r[5]) ? 1u : 0u; if (_c) goto L_08a04510; }
    c->r[10] = 0x80440000u;
    c->r[9] = (c->r[9] < c->r[6]) ? 1u : 0u;
    { int _c = (c->r[8] != 0u); c->r[7] = c->r[10] | 0x000au; if (_c) goto L_08a04510; }
    c->r[11] = 0x08ba0000u;
    c->r[7] = c->r[4] << 2;
    c->r[8] = c->r[11] + 0xffffaf4cu;
    c->r[4] = 0x80440000u;
    c->r[3] = c->r[7] + c->r[8];
    { int _c = (c->r[9] != 0u); c->r[7] = c->r[4] | 0x000au; if (_c) goto L_08a04510; }
    { c->r[31] = 0x08a0450cu; c->r[4] = mem_r32(ram, c->r[3] + 0x00000000u); hle_dispatch_stub(c, ram, 0x08a24984u); /* sceAudioChangeChannelVolume */ }
    c->r[7] = c->r[2] + 0u;
L_08a04510:
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000000u);
    c->r[2] = c->r[7] + 0u;
    { c->r[29] = c->r[29] + 0x00000010u; return; }
    return; /* fell out of func_08a044b8 */
}

/* func_08a05df4  0x08a05df4..0x08a05e60  108 bytes, source=residue */
void func_08a05df4(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08a05df4u);
    c->r[24] = 0x08ba0000u;
    c->r[13] = mem_r32(ram, c->r[24] + 0xffffaf80u);
    c->r[12] = c->r[5] + 0u;
    c->r[10] = c->r[6] + 0u;
    c->r[14] = c->r[4] + 0u;
    c->r[2] = c->r[7] + 0u;
    c->r[3] = c->r[8] + 0u;
    c->r[29] = c->r[29] + 0xfffffff0u;
    c->r[11] = 0x80420000u;
    c->r[15] = 0x08ba0000u;
    c->r[6] = c->r[12] + 0u;
    c->r[7] = c->r[10] + 0u;
    mem_w32(ram, c->r[29] + 0x00000000u, c->r[31]);
    c->r[10] = c->r[9] + 0u;
    c->r[4] = c->r[15] + 0xffffafc0u;
    c->r[5] = c->r[14] + 0u;
    c->r[8] = c->r[2] + 0u;
    c->r[9] = c->r[3] + 0u;
    { int _c = (c->r[13] == 0u); c->r[12] = c->r[11] | 0x0100u; if (_c) goto L_08a05e50; }
    { c->r[31] = 0x08a05e4cu; hle_dispatch_stub(c, ram, 0x08a24cdcu); /* __sceSasSetADSRmode */ }
    c->r[12] = c->r[2] + 0u;
L_08a05e50:
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000000u);
    c->r[2] = c->r[12] + 0u;
    { c->r[29] = c->r[29] + 0x00000010u; return; }
    return; /* fell out of func_08a05df4 */
}

/* func_08a06ce4  0x08a06ce4..0x08a06d14  48 bytes, source=residue */
void func_08a06ce4(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08a06ce4u);
    c->r[3] = 0x00100000u;
    c->r[8] = 0xffff0000u;
    c->r[7] = c->r[3] | 0xffffu;
    c->r[5] = c->r[8] | 0x2800u;
    c->r[6] = c->r[4] + c->r[5];
    c->r[5] = (c->r[7] < c->r[4]) ? 1u : 0u;
    c->r[3] = (c->r[6] < 0x00000800u) ? 1u : 0u;
    { int _c = (c->r[5] != 0u); c->r[4] = 0u + 0u; if (_c) goto L_08a06d0c; }
    c->r[4] = (c->r[3] < 0x00000001u) ? 1u : 0u;
L_08a06d0c:
    { c->r[2] = c->r[4] + 0u; return; }
    return; /* fell out of func_08a06ce4 */
}

/* func_08a0d234  0x08a0d234..0x08a0d2a4  112 bytes, source=sweep */
void func_08a0d234(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08a0d234u);
    c->r[29] = c->r[29] + 0xfffffff0u;
    c->r[4] = c->r[4] & 0x00ffu;
    c->r[2] = 0u + 0x000000ffu;
    mem_w32(ram, c->r[29] + 0x00000000u, c->r[31]);
    c->r[3] = c->r[4] & 0x0007u;
    { int _c = (c->r[4] == c->r[2]); c->r[5] = 0u + 0u; if (_c) goto L_08a0d278; }
    c->r[2] = 0u + 0x00000002u;
    c->r[4] = ((s32)c->r[3] < (s32)0x00000003u) ? 1u : 0u;
    { int _c = (c->r[3] == c->r[2]); c->r[5] = 0u + 0x00000002u; if (_c) goto L_08a0d278; }
    { int _c = (c->r[4] == 0u); c->r[5] = 0u + 0x00000004u; if (_c) goto L_08a0d288; }
    { int _c = (c->r[3] == 0u); c->r[31] = mem_r32(ram, c->r[29] + 0x00000000u); if (_c) goto L_08a0d27c; }
L_08a0d270:
    { c->r[31] = 0x08a0d278u; func_08a19084(c, ram); }
L_08a0d278:
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000000u);
L_08a0d27c:
    c->r[2] = c->r[5] + 0u;
    { c->r[29] = c->r[29] + 0x00000010u; return; }
L_08a0d288:
    c->r[2] = 0u + 0x00000003u;
    { int _c = (c->r[3] == c->r[2]); c->r[2] = 0u + 0x00000004u; if (_c) goto L_08a0d278; }
    { int _c = (c->r[3] != c->r[2]); c->r[5] = 0u + 0x00000008u; if (_c) goto L_08a0d270; }
    { c->r[31] = mem_r32(ram, c->r[29] + 0x00000000u); goto L_08a0d27c; }
    return; /* fell out of func_08a0d234 */
}

/* func_08a0e3a0  0x08a0e3a0..0x08a0e3d8  56 bytes, source=indirect */
void func_08a0e3a0(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08a0e3a0u);
    c->r[2] = 0x08a50000u;
    c->r[2] = c->r[2] + 0x000004f8u;
    mem_w32(ram, c->r[4] + 0x00000000u, c->r[2]);
    c->r[29] = c->r[29] + 0xfffffff0u;
    mem_w32(ram, c->r[29] + 0x00000000u, c->r[16]);
    mem_w32(ram, c->r[29] + 0x00000004u, c->r[31]);
    { c->r[31] = 0x08a0e3c0u; c->r[16] = c->r[4] + 0u; func_08a0e308(c, ram); }
    { c->r[31] = 0x08a0e3c8u; c->r[4] = c->r[16] + 0u; func_08a0d214(c, ram); }
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000004u);
    c->r[16] = mem_r32(ram, c->r[29] + 0x00000000u);
    { c->r[29] = c->r[29] + 0x00000010u; return; }
    return; /* fell out of func_08a0e3a0 */
}

/* func_08a0e840  0x08a0e840..0x08a0e878  56 bytes, source=indirect */
void func_08a0e840(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08a0e840u);
    c->r[2] = 0x08a50000u;
    c->r[2] = c->r[2] + 0x000005a0u;
    mem_w32(ram, c->r[4] + 0x00000000u, c->r[2]);
    c->r[29] = c->r[29] + 0xfffffff0u;
    mem_w32(ram, c->r[29] + 0x00000000u, c->r[16]);
    mem_w32(ram, c->r[29] + 0x00000004u, c->r[31]);
    { c->r[31] = 0x08a0e860u; c->r[16] = c->r[4] + 0u; func_08a0e6e0(c, ram); }
    { c->r[31] = 0x08a0e868u; c->r[4] = c->r[16] + 0u; func_08a0d214(c, ram); }
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000004u);
    c->r[16] = mem_r32(ram, c->r[29] + 0x00000000u);
    { c->r[29] = c->r[29] + 0x00000010u; return; }
    return; /* fell out of func_08a0e840 */
}

/* func_08a11df8  0x08a11df8..0x08a11f1c  292 bytes, source=sweep */
void func_08a11df8(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08a11df8u);
    c->r[3] = f2u(c->f[12]);
    c->r[2] = 0x7f7f0000u;
    c->r[2] = c->r[2] | 0xffffu;
    c->r[3] = alx_ins(c->r[3], 0u, 31u, 31u);
    c->r[2] = (c->r[2] < c->r[3]) ? 1u : 0u;
    c->r[5] = f2u(c->f[12]);
    { int _c = (c->r[2] == 0u); if (_c) goto L_08a11e24; }
    c->f[0] = c->f[12] * c->f[12];
    { c->f[0] = c->f[0] + c->f[12]; return; }
L_08a11e24:
    { int _c = (c->r[3] == 0u); c->f[0] = c->f[12]; if (_c) goto L_08a11f08; }
    { int _c = ((s32)c->r[5] < 0); c->r[2] = 0x007f0000u; if (_c) goto L_08a11f10; }
    c->r[2] = c->r[2] | 0xffffu;
    c->r[2] = (c->r[2] < c->r[3]) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); c->r[8] = (u32)((s32)c->r[5] >> 23); if (_c) goto L_08a11e70; }
    c->r[2] = 0x00800000u;
    c->r[2] = c->r[5] & c->r[2];
    { int _c = (c->r[2] != 0u); c->r[4] = 0u + 0u; if (_c) goto L_08a11e68; }
    c->r[3] = 0x00800000u;
L_08a11e58:
    c->r[5] = c->r[5] << 1;
    c->r[2] = c->r[5] & c->r[3];
    { int _c = (c->r[2] == 0u); c->r[4] = c->r[4] + 0x00000001u; if (_c) goto L_08a11e58; }
L_08a11e68:
    c->r[2] = c->r[8] - c->r[4];
    c->r[8] = c->r[2] + 0x00000001u;
L_08a11e70:
    c->r[2] = c->r[5] + 0u;
    c->r[8] = c->r[8] + 0xffffff81u;
    c->r[2] = alx_ins(c->r[2], 0u, 23u, 31u);
    c->r[3] = 0x00800000u;
    c->r[4] = c->r[8] & 0x0001u;
    c->r[5] = c->r[2] | c->r[3];
    c->r[5] = c->r[5] << (c->r[4] & 31u);
    c->r[8] = (u32)((s32)c->r[8] >> 1);
    c->r[5] = c->r[5] << 1;
    c->r[6] = 0u + 0u;
    c->r[7] = 0u + 0u;
    c->r[4] = 0x01000000u;
L_08a11ea0:
    c->r[3] = c->r[6] + c->r[4];
    c->r[2] = ((s32)c->r[5] < (s32)c->r[3]) ? 1u : 0u;
    if (c->r[2] != 0u) { c->r[4] = c->r[4] >> 1; goto L_08a11ec0; }
    c->r[5] = c->r[5] - c->r[3];
    c->r[6] = c->r[3] + c->r[4];
    c->r[7] = c->r[7] + c->r[4];
    c->r[4] = c->r[4] >> 1;
L_08a11ec0:
    { int _c = (c->r[4] != 0u); c->r[5] = c->r[5] << 1; if (_c) goto L_08a11ea0; }
    { int _c = (c->r[5] == 0u); c->r[2] = (u32)((s32)c->r[7] >> 1); if (_c) goto L_08a11ef4; }
    c->r[2] = 0x08a50000u;
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000e3cu);
    alx_c_cond_s(c, 14, c->f[0], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) == 0u); c->r[2] = (u32)((s32)c->r[7] >> 1); if (_c) goto L_08a11ef4; }
    c->r[2] = c->r[7] & 0x0001u;
    c->r[7] = c->r[7] + c->r[2];
    c->r[2] = (u32)((s32)c->r[7] >> 1);
L_08a11ef4:
    c->r[3] = 0x3f000000u;
    c->r[5] = c->r[2] + c->r[3];
    c->r[4] = c->r[8] << 23;
    c->r[5] = c->r[5] + c->r[4];
    c->f[0] = u2f(c->r[5]);
L_08a11f08:
    { return; }
L_08a11f10:
    c->f[0] = c->f[12] - c->f[12];
    { c->f[0] = c->f[0] / c->f[0]; return; }
    return; /* fell out of func_08a11df8 */
}

/* func_08a14670  0x08a14670..0x08a14718  168 bytes, source=fde */
void func_08a14670(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08a14670u);
    c->r[29] = c->r[29] + 0xfffffff0u;
    c->r[4] = c->r[4] & 0x00ffu;
    c->r[2] = 0u + 0x000000ffu;
    mem_w32(ram, c->r[29] + 0x00000000u, c->r[31]);
    { int _c = (c->r[4] == c->r[2]); c->r[3] = 0u + 0u; if (_c) goto L_08a146ac; }
    c->r[4] = c->r[4] & 0x0070u;
    c->r[2] = 0u + 0x00000020u;
    { int _c = (c->r[4] == c->r[2]); c->r[2] = ((s32)c->r[4] < (s32)0x00000021u) ? 1u : 0u; if (_c) goto L_08a14708; }
    { int _c = (c->r[2] == 0u); c->r[2] = 0u + 0x00000040u; if (_c) goto L_08a146cc; }
    { int _c = (c->r[4] != 0u); c->r[2] = 0u + 0x00000010u; if (_c) goto L_08a146bc; }
    c->r[3] = 0u + 0u;
L_08a146ac:
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000000u);
    c->r[2] = c->r[3] + 0u;
    { c->r[29] = c->r[29] + 0x00000010u; return; }
L_08a146bc:
    { int _c = (c->r[4] == c->r[2]); c->r[3] = 0u + 0u; if (_c) goto L_08a146ac; }
L_08a146c4:
    { c->r[31] = 0x08a146ccu; func_08a19084(c, ram); }
L_08a146cc:
    { int _c = (c->r[4] == c->r[2]); c->r[2] = ((s32)c->r[4] < (s32)0x00000041u) ? 1u : 0u; if (_c) goto L_08a146f8; }
    { int _c = (c->r[2] == 0u); c->r[2] = 0u + 0x00000050u; if (_c) goto L_08a146bc; }
    c->r[2] = 0u + 0x00000030u;
    { int _c = (c->r[4] != c->r[2]); if (_c) goto L_08a146c4; }
    { c->r[31] = 0x08a146f0u; c->r[4] = c->r[5] + 0u; func_08a1492c(c, ram); }
    { c->r[3] = c->r[2] + 0u; goto L_08a146ac; }
L_08a146f8:
    { c->r[31] = 0x08a14700u; c->r[4] = c->r[5] + 0u; func_08a148f8(c, ram); }
    { c->r[3] = c->r[2] + 0u; goto L_08a146ac; }
L_08a14708:
    { c->r[31] = 0x08a14710u; c->r[4] = c->r[5] + 0u; func_08a14934(c, ram); }
    { c->r[3] = c->r[2] + 0u; goto L_08a146ac; }
    return; /* fell out of func_08a14670 */
}

/* func_08a16c44  0x08a16c44..0x08a16c78  52 bytes, source=sweep */
void func_08a16c44(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08a16c44u);
    c->r[6] = 0u + 0u;
    c->r[7] = 0u + 0u;
L_08a16c4c:
    c->r[3] = mem_r8(ram, c->r[4] + 0x00000000u);
    c->r[4] = c->r[4] + 0x00000001u;
    c->r[2] = c->r[3] & 0x007fu;
    c->r[2] = c->r[2] << (c->r[6] & 31u);
    c->r[3] = alx_seb(c->r[3]);
    c->r[7] = c->r[7] | c->r[2];
    { int _c = ((s32)c->r[3] < 0); c->r[6] = c->r[6] + 0x00000007u; if (_c) goto L_08a16c4c; }
    c->r[2] = c->r[4] + 0u;
    { mem_w32(ram, c->r[5] + 0x00000000u, c->r[7]); return; }
    return; /* fell out of func_08a16c44 */
}

/* func_08a18aa4  0x08a18aa4..0x08a18bd4  304 bytes, source=sweep */
void func_08a18aa4(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08a18aa4u);
    c->r[29] = c->r[29] + 0xfffffff0u;
    c->r[3] = 0u + 0x00000001u;
    mem_w32(ram, c->r[29] + 0x00000008u, c->r[18]);
    c->r[18] = c->r[5] + 0u;
    mem_w32(ram, c->r[29] + 0x00000000u, c->r[16]);
    c->r[16] = c->r[6] + 0u;
    mem_w32(ram, c->r[29] + 0x0000000cu, c->r[31]);
    { int _c = (c->r[4] == c->r[3]); mem_w32(ram, c->r[29] + 0x00000004u, c->r[17]); if (_c) goto L_08a18bc4; }
    c->r[3] = ((s32)c->r[4] < (s32)0x00000002u) ? 1u : 0u;
    { int _c = (c->r[3] != 0u); c->r[5] = 0u + 0x00000002u; if (_c) goto L_08a18bac; }
    { int _c = (c->r[4] == c->r[5]); if (_c) goto L_08a18b9c; }
L_08a18adc:
    { int _c = ((s32)c->r[4] < 0); c->r[2] = 0u + 0xfffffff7u; if (_c) goto L_08a18b3c; }
    c->r[6] = 0u + 0x00000001u;
    { int _c = (c->r[16] == c->r[6]); c->r[17] = 0u + 0x00000001u; if (_c) goto L_08a18b08; }
    c->r[7] = ((s32)c->r[16] < (s32)0x00000002u) ? 1u : 0u;
    { int _c = (c->r[7] != 0u); c->r[8] = 0u + 0x00000002u; if (_c) goto L_08a18b8c; }
    { int _c = (c->r[16] == c->r[8]); c->r[17] = 0u + 0x00000002u; if (_c) goto L_08a18b08; }
    c->r[17] = c->r[16] + 0u;
L_08a18b08:
    c->r[9] = 0u + 0x00000001u;
    { int _c = (c->r[4] == c->r[9]); c->r[10] = ((s32)c->r[4] < (s32)0x00000002u) ? 1u : 0u; if (_c) goto L_08a18b7c; }
    { int _c = (c->r[10] != 0u); c->r[11] = 0u + 0x00000002u; if (_c) goto L_08a18b64; }
    { int _c = (c->r[4] == c->r[11]); if (_c) goto L_08a18b54; }
    c->r[2] = c->r[4] + 0u;
L_08a18b28:
    c->r[6] = c->r[18] + 0u;
L_08a18b2c:
    c->r[7] = (u32)((s32)c->r[18] >> 31);
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x08a18b3cu; c->r[8] = c->r[17] + 0u; hle_dispatch_stub(c, ram, 0x08a2471cu); /* sceIoLseek */ }
L_08a18b3c:
    c->r[31] = mem_r32(ram, c->r[29] + 0x0000000cu);
    c->r[18] = mem_r32(ram, c->r[29] + 0x00000008u);
    c->r[17] = mem_r32(ram, c->r[29] + 0x00000004u);
    c->r[16] = mem_r32(ram, c->r[29] + 0x00000000u);
    { c->r[29] = c->r[29] + 0x00000010u; return; }
L_08a18b54:
    { c->r[31] = 0x08a18b5cu; hle_dispatch_stub(c, ram, 0x08a24794u); /* sceKernelStderr */ }
    { c->r[6] = c->r[18] + 0u; goto L_08a18b2c; }
L_08a18b64:
    if (c->r[4] != 0u) { c->r[2] = c->r[4] + 0u; goto L_08a18b28; }
    { c->r[31] = 0x08a18b74u; hle_dispatch_stub(c, ram, 0x08a24784u); /* sceKernelStdin */ }
    { c->r[6] = c->r[18] + 0u; goto L_08a18b2c; }
L_08a18b7c:
    { c->r[31] = 0x08a18b84u; hle_dispatch_stub(c, ram, 0x08a2478cu); /* sceKernelStdout */ }
    { c->r[6] = c->r[18] + 0u; goto L_08a18b2c; }
L_08a18b8c:
    { int _c = (c->r[16] == 0u); c->r[17] = 0u + 0u; if (_c) goto L_08a18b08; }
    { c->r[17] = c->r[16] + 0u; goto L_08a18b08; }
L_08a18b9c:
    { c->r[31] = 0x08a18ba4u; hle_dispatch_stub(c, ram, 0x08a24794u); /* sceKernelStderr */ }
    { c->r[4] = c->r[2] + 0u; goto L_08a18adc; }
L_08a18bac:
    { int _c = (c->r[4] != 0u); if (_c) goto L_08a18adc; }
    { c->r[31] = 0x08a18bbcu; hle_dispatch_stub(c, ram, 0x08a24784u); /* sceKernelStdin */ }
    { c->r[4] = c->r[2] + 0u; goto L_08a18adc; }
L_08a18bc4:
    { c->r[31] = 0x08a18bccu; hle_dispatch_stub(c, ram, 0x08a2478cu); /* sceKernelStdout */ }
    { c->r[4] = c->r[2] + 0u; goto L_08a18adc; }
    return; /* fell out of func_08a18aa4 */
}

/* func_08a19240  0x08a19240..0x08a19340  256 bytes, source=sweep */
void func_08a19240(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08a19240u);
    c->r[29] = c->r[29] + 0xffffffd0u;
    mem_w32(ram, c->r[29] + 0x00000018u, c->r[22]);
    c->r[22] = c->r[4] + 0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[21]);
    mem_w32(ram, c->r[29] + 0x00000020u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x0000001cu, c->r[23]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[20]);
    mem_w32(ram, c->r[29] + 0x0000000cu, c->r[19]);
    mem_w32(ram, c->r[29] + 0x00000008u, c->r[18]);
    mem_w32(ram, c->r[29] + 0x00000004u, c->r[17]);
    { c->r[31] = 0x08a19270u; mem_w32(ram, c->r[29] + 0x00000000u, c->r[16]); func_08a1a000(c, ram); }
    c->r[21] = mem_r32(ram, c->r[2] + 0x00000148u);
    { int _c = (c->r[21] == 0u); c->r[23] = 0u + 0x00000001u; if (_c) goto L_08a1931c; }
    c->r[2] = mem_r32(ram, c->r[21] + 0x00000004u);
L_08a19280:
    c->r[19] = 0u + 0u;
    c->r[20] = c->r[21] + 0x00000088u;
    c->r[16] = c->r[2] + 0xffffffffu;
    c->r[3] = c->r[23] << (c->r[16] & 31u);
    c->r[2] = ((s32)c->r[16] < (s32)0x00000000u) ? 1u : 0u;
    { int _c = ((s32)c->r[16] < 0); if (c->r[2] == 0u) c->r[19] = c->r[3]; if (_c) goto L_08a192f4; }
    c->r[3] = c->r[16] << 2;
    c->r[2] = c->r[3] + c->r[21];
    c->r[17] = c->r[2] + 0x00000008u;
    c->r[18] = c->r[3] + 0u;
L_08a192c0:
    c->r[2] = mem_r32(ram, c->r[20] + 0x00000080u);
    c->r[5] = c->r[18] + c->r[20];
    c->r[2] = c->r[2] & c->r[19];
    { int _c = (c->r[2] == 0u); c->r[4] = c->r[22] + 0u; if (_c) goto L_08a19308; }
    c->r[2] = mem_r32(ram, c->r[17] + 0x00000000u);
    { u32 _t = c->r[2]; c->r[31] = 0x08a192e0u; c->r[5] = mem_r32(ram, c->r[5] + 0x00000000u); recomp_call_indirect(c, ram, 0x08a192d8u, _t); }
    c->r[16] = c->r[16] + 0xffffffffu;
    c->r[18] = c->r[18] + 0xfffffffcu;
L_08a192e8:
    c->r[17] = c->r[17] + 0xfffffffcu;
    { int _c = ((s32)c->r[16] >= 0); c->r[19] = (u32)((s32)c->r[19] >> 1); if (_c) goto L_08a192c0; }
L_08a192f4:
    c->r[21] = mem_r32(ram, c->r[21] + 0x00000000u);
    if (c->r[21] != 0u) { c->r[2] = mem_r32(ram, c->r[21] + 0x00000004u); goto L_08a19280; }
    { goto L_08a1931c; }
L_08a19308:
    c->r[2] = mem_r32(ram, c->r[17] + 0x00000000u);
    { u32 _t = c->r[2]; c->r[31] = 0x08a19314u; c->r[16] = c->r[16] + 0xffffffffu; recomp_call_indirect(c, ram, 0x08a1930cu, _t); }
    { c->r[18] = c->r[18] + 0xfffffffcu; goto L_08a192e8; }
L_08a1931c:
    { c->r[31] = 0x08a19324u; c->r[4] = c->r[22] + 0u; func_08a18bd4(c, ram); }
    return; /* fell out of func_08a19240 */
}

/* func_08a1abb8  0x08a1abb8..0x08a1abf8  64 bytes, source=residue */
void func_08a1abb8(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08a1abb8u);
    c->r[29] = c->r[29] + 0xfffffff0u;
    mem_w32(ram, c->r[29] + 0x00000008u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000004u, c->r[17]);
    c->r[17] = c->r[5] + 0u;
    mem_w32(ram, c->r[29] + 0x00000000u, c->r[16]);
    { c->r[31] = 0x08a1abd4u; c->r[16] = c->r[4] + 0u; func_08a19374(c, ram); }
    c->r[4] = c->r[2] + 0u;
    c->r[5] = c->r[16] + 0u;
    { c->r[31] = 0x08a1abe4u; c->r[6] = c->r[17] + 0u; func_08a1a9a0(c, ram); }
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000008u);
    c->r[17] = mem_r32(ram, c->r[29] + 0x00000004u);
    c->r[16] = mem_r32(ram, c->r[29] + 0x00000000u);
    { c->r[29] = c->r[29] + 0x00000010u; return; }
    return; /* fell out of func_08a1abb8 */
}

/* func_08a1f484  0x08a1f484..0x08a1f4d4  80 bytes, source=residue */
void func_08a1f484(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08a1f484u);
    c->r[29] = c->r[29] + 0xffffff90u;
    c->r[2] = 0u + 0x00000208u;
    c->r[3] = 0x7fff0000u;
    c->r[8] = c->r[5] + 0u;
    c->r[3] = c->r[3] | 0xffffu;
    mem_w16(ram, c->r[29] + 0x0000000cu, c->r[2]);
    c->r[5] = c->r[29] + 0u;
    c->r[2] = 0u + 0xffffffffu;
    mem_w32(ram, c->r[29] + 0x00000060u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[3]);
    mem_w32(ram, c->r[29] + 0x00000008u, c->r[3]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[8]);
    mem_w16(ram, c->r[29] + 0x0000000eu, c->r[2]);
    { c->r[31] = 0x08a1f4c0u; mem_w32(ram, c->r[29] + 0x00000000u, c->r[8]); func_08a1d758(c, ram); }
    c->r[3] = mem_r32(ram, c->r[29] + 0x00000000u);
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000060u);
    mem_w8(ram, c->r[3] + 0x00000000u, 0u);
    { c->r[29] = c->r[29] + 0x00000070u; return; }
    return; /* fell out of func_08a1f484 */
}

/* func_08a228d4  0x08a228d4..0x08a2295c  136 bytes, source=sweep */
void func_08a228d4(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08a228d4u);
    c->r[2] = c->r[4] + 0u;
    c->r[2] = alx_ins(c->r[2], 0u, 0u, 15u);
    { int _c = (c->r[2] != 0u); c->r[3] = 0u + 0u; if (_c) goto L_08a228ec; }
    c->r[3] = 0u + 0x00000010u;
    c->r[4] = c->r[4] << 16;
L_08a228ec:
    c->r[2] = c->r[4] + 0u;
    c->r[2] = alx_ins(c->r[2], 0u, 0u, 23u);
    { int _c = (c->r[2] != 0u); c->r[2] = c->r[4] + 0u; if (_c) goto L_08a22908; }
    c->r[3] = c->r[3] + 0x00000008u;
    c->r[4] = c->r[4] << 8;
    c->r[2] = c->r[4] + 0u;
L_08a22908:
    c->r[2] = alx_ins(c->r[2], 0u, 0u, 27u);
    { int _c = (c->r[2] != 0u); c->r[2] = c->r[4] + 0u; if (_c) goto L_08a22920; }
    c->r[3] = c->r[3] + 0x00000004u;
    c->r[4] = c->r[4] << 4;
    c->r[2] = c->r[4] + 0u;
L_08a22920:
    c->r[2] = alx_ins(c->r[2], 0u, 0u, 29u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_08a22934; }
    c->r[3] = c->r[3] + 0x00000002u;
    c->r[4] = c->r[4] << 2;
L_08a22934:
    if ((s32)c->r[4] < 0) { c->r[4] = c->r[3] + 0u; goto L_08a22954; }
    c->r[2] = 0x40000000u;
    c->r[2] = c->r[4] & c->r[2];
    c->r[3] = c->r[3] + 0x00000001u;
    { int _c = (c->r[2] == 0u); c->r[4] = 0u + 0x00000020u; if (_c) goto L_08a22954; }
    c->r[4] = c->r[3] + 0u;
L_08a22954:
    { c->r[2] = c->r[4] + 0u; return; }
    return; /* fell out of func_08a228d4 */
}
