#include "pspreco.h"
#include "symbols.h"
#include <math.h>

/* func_08804040  0x08804040..0x088040c8  136 bytes, source=sweep */
void func_08804040(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08804040u);
    c->r[29] = c->r[29] + 0xfffffff0u;
    mem_w32(ram, c->r[29] + 0x00000004u, c->r[17]);
    c->r[17] = 0x08a60000u;
    c->r[2] = mem_r8(ram, c->r[17] + 0x00005240u);
    mem_w32(ram, c->r[29] + 0x00000008u, c->r[31]);
    { int _c = (c->r[2] != 0u); mem_w32(ram, c->r[29] + 0x00000000u, c->r[16]); if (_c) goto L_088040b4; }
    c->r[16] = 0x08a50000u;
    c->r[2] = mem_r32(ram, c->r[16] + 0x00001e84u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x00000000u);
    { int _c = (c->r[3] == 0u); c->r[2] = 0x08a10000u; if (_c) goto L_08804094; }
    c->r[2] = mem_r32(ram, c->r[16] + 0x00001e84u);
    c->r[2] = c->r[2] + 0x00000004u;
L_08804078:
    { u32 _t = c->r[3]; c->r[31] = 0x08804080u; mem_w32(ram, c->r[16] + 0x00001e84u, c->r[2]); recomp_call_indirect(c, ram, 0x08804078u, _t); }
    c->r[2] = mem_r32(ram, c->r[16] + 0x00001e84u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x00000000u);
    { int _c = (c->r[3] != 0u); c->r[2] = c->r[2] + 0x00000004u; if (_c) goto L_08804078; }
    c->r[2] = 0x08a10000u;
L_08804094:
    c->r[2] = c->r[2] + 0x00007098u;
    { int _c = (c->r[2] == 0u); c->r[2] = 0u + 0x00000001u; if (_c) goto L_088040b0; }
    c->r[4] = 0x08a20000u;
    { c->r[31] = 0x088040acu; c->r[4] = c->r[4] + 0x0000573cu; func_08a17098(c, ram); }
    c->r[2] = 0u + 0x00000001u;
L_088040b0:
    mem_w8(ram, c->r[17] + 0x00005240u, c->r[2]);
L_088040b4:
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000008u);
    c->r[17] = mem_r32(ram, c->r[29] + 0x00000004u);
    c->r[16] = mem_r32(ram, c->r[29] + 0x00000000u);
    { c->r[29] = c->r[29] + 0x00000010u; return; }
    return; /* fell out of func_08804040 */
}

/* func_088067a4  0x088067a4..0x088069c4  544 bytes, source=sweep */
void func_088067a4(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x088067a4u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[6]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = (c->r[2] < 0x00000016u) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_088069b0; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08a40000u;
    c->r[2] = c->r[2] + 0xffffe698u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    { u32 _t = c->r[2]; switch (_t) { case 0x088067f0u: goto L_088067f0; case 0x08806804u: goto L_08806804; case 0x08806818u: goto L_08806818; case 0x0880682cu: goto L_0880682c; case 0x08806840u: goto L_08806840; case 0x08806854u: goto L_08806854; case 0x08806868u: goto L_08806868; case 0x0880687cu: goto L_0880687c; case 0x08806890u: goto L_08806890; case 0x088068a4u: goto L_088068a4; case 0x088068b8u: goto L_088068b8; case 0x088068ccu: goto L_088068cc; case 0x088068e0u: goto L_088068e0; case 0x088068f4u: goto L_088068f4; case 0x0880690cu: goto L_0880690c; case 0x08806924u: goto L_08806924; case 0x0880693cu: goto L_0880693c; case 0x08806954u: goto L_08806954; case 0x08806968u: goto L_08806968; case 0x0880697cu: goto L_0880697c; case 0x08806990u: goto L_08806990; case 0x088069a4u: goto L_088069a4; default: recomp_trap_unknown_indirect(c, ram, 0x088067e8u, _t); return; } }
L_088067f0:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x088067fcu; c->r[5] = mem_r32(ram, c->r[30] + 0x00000008u); func_08806c70(c, ram); }
    { goto L_088069b0; }
L_08806804:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x08806810u; c->r[5] = mem_r32(ram, c->r[30] + 0x00000008u); func_08806cb4(c, ram); }
    { goto L_088069b0; }
L_08806818:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x08806824u; c->r[5] = mem_r32(ram, c->r[30] + 0x00000008u); func_0880723c(c, ram); }
    { goto L_088069b0; }
L_0880682c:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x08806838u; c->r[5] = mem_r32(ram, c->r[30] + 0x00000008u); func_08806cf8(c, ram); }
    { goto L_088069b0; }
L_08806840:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x0880684cu; c->r[5] = mem_r32(ram, c->r[30] + 0x00000008u); func_08806d3c(c, ram); }
    { goto L_088069b0; }
L_08806854:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x08806860u; c->r[5] = mem_r32(ram, c->r[30] + 0x00000008u); func_08806d80(c, ram); }
    { goto L_088069b0; }
L_08806868:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x08806874u; c->r[5] = mem_r32(ram, c->r[30] + 0x00000008u); func_08806dc4(c, ram); }
    { goto L_088069b0; }
L_0880687c:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x08806888u; c->r[5] = mem_r32(ram, c->r[30] + 0x00000008u); func_08806e08(c, ram); }
    { goto L_088069b0; }
L_08806890:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x0880689cu; c->r[5] = mem_r32(ram, c->r[30] + 0x00000008u); func_08806e4c(c, ram); }
    { goto L_088069b0; }
L_088068a4:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x088068b0u; c->r[5] = mem_r32(ram, c->r[30] + 0x00000008u); func_08806e90(c, ram); }
    { goto L_088069b0; }
L_088068b8:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x088068c4u; c->r[5] = mem_r32(ram, c->r[30] + 0x00000008u); func_08806ed4(c, ram); }
    { goto L_088069b0; }
L_088068cc:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x088068d8u; c->r[5] = mem_r32(ram, c->r[30] + 0x00000008u); func_08806f18(c, ram); }
    { goto L_088069b0; }
L_088068e0:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x088068ecu; c->r[5] = mem_r32(ram, c->r[30] + 0x00000008u); func_08806f5c(c, ram); }
    { goto L_088069b0; }
L_088068f4:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = 0u + 0u;
    { c->r[31] = 0x08806904u; c->r[6] = mem_r32(ram, c->r[30] + 0x00000008u); func_08806fa0(c, ram); }
    { goto L_088069b0; }
L_0880690c:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = 0u + 0x00000001u;
    { c->r[31] = 0x0880691cu; c->r[6] = mem_r32(ram, c->r[30] + 0x00000008u); func_08806fa0(c, ram); }
    { goto L_088069b0; }
L_08806924:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = 0u + 0x00000002u;
    { c->r[31] = 0x08806934u; c->r[6] = mem_r32(ram, c->r[30] + 0x00000008u); func_08806fa0(c, ram); }
    { goto L_088069b0; }
L_0880693c:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = 0u + 0x00000003u;
    { c->r[31] = 0x0880694cu; c->r[6] = mem_r32(ram, c->r[30] + 0x00000008u); func_08806fa0(c, ram); }
    { goto L_088069b0; }
L_08806954:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x08806960u; c->r[5] = mem_r32(ram, c->r[30] + 0x00000008u); func_08806ff0(c, ram); }
    { goto L_088069b0; }
L_08806968:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x08806974u; c->r[5] = mem_r32(ram, c->r[30] + 0x00000008u); func_08807034(c, ram); }
    { goto L_088069b0; }
L_0880697c:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x08806988u; c->r[5] = mem_r32(ram, c->r[30] + 0x00000008u); func_08807078(c, ram); }
    { goto L_088069b0; }
L_08806990:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x0880699cu; c->r[5] = mem_r32(ram, c->r[30] + 0x00000008u); func_088070bc(c, ram); }
    { goto L_088069b0; }
L_088069a4:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x088069b0u; c->r[5] = mem_r32(ram, c->r[30] + 0x00000008u); func_088072e8(c, ram); }
L_088069b0:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_088067a4 */
}

/* func_0880750c  0x0880750c..0x0880753c  48 bytes, source=sweep */
void func_0880750c(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0880750cu);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    mem_w32(ram, c->r[3] + 0x000060d0u, c->r[2]);
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_0880750c */
}

/* func_08808318  0x08808318..0x08808338  32 bytes, source=sweep */
void func_08808318(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08808318u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_08808318 */
}

/* func_0880b0d4  0x0880b0d4..0x0880b118  68 bytes, source=fde */
void func_0880b0d4(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0880b0d4u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08a50000u;
    c->r[2] = c->r[2] + 0x00001f40u;
    c->r[2] = c->r[3] + c->r[2];
    { c->r[31] = 0x0880b104u; c->r[4] = mem_r32(ram, c->r[2] + 0x00000000u); func_08808e2c(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_0880b0d4 */
}

/* func_0880d554  0x0880d554..0x0880d57c  40 bytes, source=sweep */
void func_0880d554(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0880d554u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000141u);
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_0880d554 */
}

/* func_0880ee64  0x0880ee64..0x0880ef80  284 bytes, source=fde */
void func_0880ee64(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0880ee64u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_0880ef50; }
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x0880ee94u; c->r[4] = c->r[4] + 0x00000330u; func_089d98dc(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]);
    c->r[2] = 0x80110000u;
    c->r[2] = c->r[2] | 0x0325u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_0880ef18; }
    c->r[2] = 0x80110000u;
    c->r[2] = c->r[2] | 0x0325u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = ((s32)c->r[2] < (s32)c->r[3]) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_0880eee0; }
    c->r[2] = 0x80110000u;
    c->r[2] = c->r[2] | 0x0321u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_0880eefc; }
    { goto L_0880ef6c; }
L_0880eee0:
    c->r[2] = 0x80110000u;
    c->r[2] = c->r[2] | 0x032au;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_0880ef34; }
    { goto L_0880ef6c; }
L_0880eefc:
    c->r[4] = 0x08a40000u;
    c->r[4] = c->r[4] + 0xffffeed8u;
    c->r[5] = 0u + 0x000015bcu;
    { c->r[31] = 0x0880ef10u; c->r[6] = 0u + 0x00000001u; func_08928cb8(c, ram); }
    { goto L_0880ef6c; }
L_0880ef18:
    c->r[4] = 0x08a40000u;
    c->r[4] = c->r[4] + 0xffffeed8u;
    c->r[5] = 0u + 0x0000159au;
    { c->r[31] = 0x0880ef2cu; c->r[6] = 0u + 0x00000001u; func_08928cb8(c, ram); }
    { goto L_0880ef6c; }
L_0880ef34:
    c->r[4] = 0x08a40000u;
    c->r[4] = c->r[4] + 0xffffeed8u;
    c->r[5] = 0u + 0x00001597u;
    { c->r[31] = 0x0880ef48u; c->r[6] = 0u + 0x00000001u; func_08928cb8(c, ram); }
    { goto L_0880ef6c; }
L_0880ef50:
    { c->r[31] = 0x0880ef58u; c->r[4] = 0u + 0x00000001u; func_089c5e18(c, ram); }
    { int _c = (c->r[2] == 0u); if (_c) goto L_0880ef6c; }
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x0880ef6cu; c->r[4] = c->r[4] + 0x00003ca0u; func_0880f21c(c, ram); }
L_0880ef6c:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_0880ee64 */
}

/* func_08812404  0x08812404..0x088124d4  208 bytes, source=fde */
void func_08812404(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08812404u);
    c->r[29] = c->r[29] + 0xfffffef0u;
    mem_w32(ram, c->r[29] + 0x0000010cu, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000108u, c->r[30]);
    mem_w32(ram, c->r[29] + 0x00000104u, c->r[17]);
    mem_w32(ram, c->r[29] + 0x00000100u, c->r[16]);
    c->r[30] = c->r[29] + 0u;
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x08812428u; c->r[4] = c->r[4] + 0x00000af4u; func_08813c00(c, ram); }
    c->r[16] = c->r[2] + 0u;
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x08812438u; c->r[4] = c->r[4] + 0x00000af4u; func_0880d380(c, ram); }
    c->r[4] = c->r[30] + 0u;
    c->r[5] = 0x08a40000u;
    c->r[5] = c->r[5] + 0xfffff108u;
    c->r[6] = c->r[16] + 0u;
    { c->r[31] = 0x08812450u; c->r[7] = c->r[2] + 0u; func_08a1ad34(c, ram); }
    { c->r[31] = 0x08812458u; c->r[4] = c->r[30] + 0u; func_08808e2c(c, ram); }
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x08812464u; c->r[4] = c->r[4] + 0x00000af4u; func_08813c00(c, ram); }
    c->r[16] = c->r[2] + 0u;
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x08812474u; c->r[4] = c->r[4] + 0x00000af4u; func_0880d380(c, ram); }
    c->r[17] = c->r[2] + 0u;
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x08812484u; c->r[4] = c->r[4] + 0x00000af4u; func_0880d4a0(c, ram); }
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08a50000u;
    c->r[2] = c->r[2] + 0x00001fb4u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[4] = c->r[30] + 0u;
    c->r[5] = 0x08a40000u;
    c->r[5] = c->r[5] + 0xfffff118u;
    c->r[6] = c->r[16] + 0u;
    c->r[7] = c->r[17] + 0u;
    { c->r[31] = 0x088124b0u; c->r[8] = mem_r32(ram, c->r[2] + 0x00000000u); func_08a1ad34(c, ram); }
    { c->r[31] = 0x088124b8u; c->r[4] = c->r[30] + 0u; func_08808e2c(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x0000010cu);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000108u);
    c->r[17] = mem_r32(ram, c->r[29] + 0x00000104u);
    c->r[16] = mem_r32(ram, c->r[29] + 0x00000100u);
    { c->r[29] = c->r[29] + 0x00000110u; return; }
    return; /* fell out of func_08812404 */
}

/* func_088149fc  0x088149fc..0x08814e78  1148 bytes, source=fde */
void func_088149fc(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x088149fcu);
    c->r[29] = c->r[29] + 0xffffffd0u;
    mem_w32(ram, c->r[29] + 0x00000024u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000020u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    c->r[2] = c->r[4] + 0u;
    c->r[3] = c->r[5] + 0u;
    c->r[4] = c->r[6] + 0u;
    c->r[5] = c->r[7] + 0u;
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[8]);
    mem_w16(ram, c->r[30] + 0x00000000u, c->r[2]);
    mem_w16(ram, c->r[30] + 0x00000002u, c->r[3]);
    mem_w16(ram, c->r[30] + 0x00000004u, c->r[4]);
    mem_w16(ram, c->r[30] + 0x00000006u, c->r[5]);
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
    { c->r[31] = 0x08814a7cu; c->r[5] = c->r[5] | 0x0100u; func_088191c8(c, ram); }
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
    c->r[2] = 0x7f000000u;
    c->r[2] = c->r[3] | c->r[2];
    { c->r[31] = 0x08814accu; c->r[5] = c->r[2] + 0u; func_0881920c(c, ram); }
    c->r[4] = 0x08a70000u;
    c->r[4] = c->r[4] + 0xffffb640u;
    c->r[5] = 0u + 0x00000002u;
    { c->r[31] = 0x08814ae0u; c->r[6] = 0u + 0x00000006u; func_089df7a0(c, ram); }
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
    { c->r[31] = 0x08814b28u; c->r[5] = 0u + 0x00000009u; func_08819280(c, ram); }
    c->r[4] = 0u + 0x00000030u;
    { c->r[31] = 0x08814b34u; c->r[5] = 0u + 0x00000010u; func_0881a1d4(c, ram); }
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
    c->r[3] = (u32)(s32)(s16)mem_r16(ram, c->r[30] + 0x00000004u);
    c->r[2] = (u32)((s32)c->r[3] >> 31);
    c->r[2] = c->r[2] >> 31;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = (u32)((s32)c->r[2] >> 1);
    c->r[3] = mem_r16(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[3] - c->r[2];
    mem_w16(ram, c->r[30] + 0x00000010u, c->r[2]);
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[30] + 0x00000010u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000010u) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_08814b70; }
    c->r[2] = 0u + 0x00000010u;
    mem_w16(ram, c->r[30] + 0x00000010u, c->r[2]);
L_08814b70:
    c->r[3] = (u32)(s32)(s16)mem_r16(ram, c->r[30] + 0x00000006u);
    c->r[2] = (u32)((s32)c->r[3] >> 31);
    c->r[2] = c->r[2] >> 31;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = (u32)((s32)c->r[2] >> 1);
    c->r[3] = mem_r16(ram, c->r[30] + 0x00000002u);
    c->r[2] = c->r[3] - c->r[2];
    mem_w16(ram, c->r[30] + 0x00000012u, c->r[2]);
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[30] + 0x00000012u);
    c->r[2] = ((s32)c->r[2] < (s32)0x0000005eu) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_08814ba8; }
    c->r[2] = 0u + 0x0000005eu;
    mem_w16(ram, c->r[30] + 0x00000012u, c->r[2]);
L_08814ba8:
    c->r[3] = (u32)(s32)(s16)mem_r16(ram, c->r[30] + 0x00000004u);
    c->r[2] = (u32)((s32)c->r[3] >> 31);
    c->r[2] = c->r[2] >> 31;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = (u32)((s32)c->r[2] >> 1);
    c->r[3] = mem_r16(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[3] + c->r[2];
    mem_w16(ram, c->r[30] + 0x00000014u, c->r[2]);
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[30] + 0x00000014u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000065u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_08814be0; }
    c->r[2] = 0u + 0x00000064u;
    mem_w16(ram, c->r[30] + 0x00000014u, c->r[2]);
L_08814be0:
    c->r[3] = (u32)(s32)(s16)mem_r16(ram, c->r[30] + 0x00000006u);
    c->r[2] = (u32)((s32)c->r[3] >> 31);
    c->r[2] = c->r[2] >> 31;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = (u32)((s32)c->r[2] >> 1);
    c->r[3] = mem_r16(ram, c->r[30] + 0x00000002u);
    c->r[2] = c->r[3] + c->r[2];
    mem_w16(ram, c->r[30] + 0x00000016u, c->r[2]);
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[30] + 0x00000016u);
    c->r[2] = ((s32)c->r[2] < (s32)0x000000bbu) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_08814c18; }
    c->r[2] = 0u + 0x000000bau;
    mem_w16(ram, c->r[30] + 0x00000016u, c->r[2]);
L_08814c18:
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r16(ram, c->r[30] + 0x00000010u);
    mem_w16(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r16(ram, c->r[30] + 0x00000012u);
    mem_w16(ram, c->r[3] + 0x00000002u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = c->r[2] + 0x00000006u;
    c->r[2] = mem_r16(ram, c->r[30] + 0x00000014u);
    mem_w16(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = c->r[2] + 0x00000006u;
    c->r[2] = mem_r16(ram, c->r[30] + 0x00000012u);
    mem_w16(ram, c->r[3] + 0x00000002u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = c->r[2] + 0x0000000cu;
    c->r[2] = mem_r16(ram, c->r[30] + 0x00000014u);
    mem_w16(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = c->r[2] + 0x0000000cu;
    c->r[2] = mem_r16(ram, c->r[30] + 0x00000012u);
    mem_w16(ram, c->r[3] + 0x00000002u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = c->r[2] + 0x00000012u;
    c->r[2] = mem_r16(ram, c->r[30] + 0x00000014u);
    mem_w16(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = c->r[2] + 0x00000012u;
    c->r[2] = mem_r16(ram, c->r[30] + 0x00000016u);
    c->r[2] = c->r[2] + 0x00000001u;
    mem_w16(ram, c->r[3] + 0x00000002u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = c->r[2] + 0x00000018u;
    c->r[2] = mem_r16(ram, c->r[30] + 0x00000010u);
    mem_w16(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = c->r[2] + 0x00000018u;
    c->r[2] = mem_r16(ram, c->r[30] + 0x00000016u);
    mem_w16(ram, c->r[3] + 0x00000002u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = c->r[2] + 0x0000001eu;
    c->r[2] = mem_r16(ram, c->r[30] + 0x00000014u);
    c->r[2] = c->r[2] + 0x00000001u;
    mem_w16(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = c->r[2] + 0x0000001eu;
    c->r[2] = mem_r16(ram, c->r[30] + 0x00000016u);
    mem_w16(ram, c->r[3] + 0x00000002u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = c->r[2] + 0x00000024u;
    c->r[2] = mem_r16(ram, c->r[30] + 0x00000010u);
    mem_w16(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = c->r[2] + 0x00000024u;
    c->r[2] = mem_r16(ram, c->r[30] + 0x00000012u);
    mem_w16(ram, c->r[3] + 0x00000002u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = c->r[2] + 0x0000002au;
    c->r[2] = mem_r16(ram, c->r[30] + 0x00000010u);
    mem_w16(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = c->r[2] + 0x0000002au;
    c->r[2] = mem_r16(ram, c->r[30] + 0x00000016u);
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
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] >> 24;
    c->r[2] = c->r[2] & 0x000fu;
    c->r[3] = c->r[2] << 16;
    c->r[2] = 0x10000000u;
    c->r[2] = c->r[3] | c->r[2];
    { c->r[31] = 0x08814d74u; c->r[5] = c->r[2] + 0u; func_088191c8(c, ram); }
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
    { c->r[31] = 0x08814dd0u; c->r[5] = c->r[2] + 0u; func_088191c8(c, ram); }
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
    c->r[5] = 0x04010000u;
    { c->r[31] = 0x08814e1cu; c->r[5] = c->r[5] | 0x0008u; func_088191c8(c, ram); }
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
    { c->r[31] = 0x08814e64u; c->r[5] = 0u + 0x00000009u; func_08819244(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000024u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000020u);
    { c->r[29] = c->r[29] + 0x00000030u; return; }
    return; /* fell out of func_088149fc */
}

/* func_08819b20  0x08819b20..0x08819b64  68 bytes, source=sweep */
void func_08819b20(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08819b20u);
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
    { c->r[31] = 0x08819b50u; c->r[5] = c->r[2] + 0u; func_088191c8(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_08819b20 */
}

/* func_0881ef98  0x0881ef98..0x0881f914  2428 bytes, source=fde */
void func_0881ef98(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0881ef98u);
    c->r[29] = c->r[29] + 0xffffffa0u;
    mem_w32(ram, c->r[29] + 0x00000054u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000050u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    c->r[2] = c->r[6] + 0u;
    c->r[3] = c->r[7] + 0u;
    mem_w8(ram, c->r[30] + 0x00000008u, c->r[2]);
    mem_w8(ram, c->r[30] + 0x00000009u, c->r[3]);
    mem_w32(ram, c->r[30] + 0x00000014u, 0u);
    c->r[2] = 0x08a40000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0xfffff870u);
    mem_w32(ram, c->r[30] + 0x00000020u, c->r[2]);
    c->r[2] = 0x08a40000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0xfffff874u);
    mem_w32(ram, c->r[30] + 0x00000024u, c->r[2]);
    mem_w32(ram, c->r[30] + 0x00000030u, 0u);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[30] + 0x00000008u);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000af4u;
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x0881eff8u; c->r[6] = 0u + 0x00000c00u; func_08820e5c(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000040u, c->r[2]);
    c->r[2] = 0u + 0x00000400u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000040u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_0881f050; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000040u);
    c->r[2] = (c->r[3] < 0x00000401u) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_0881f030; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000040u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_0881f048; }
    { goto L_0881f064; }
L_0881f030:
    c->r[2] = 0u + 0x00000800u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000040u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_0881f05c; }
    { goto L_0881f064; }
L_0881f048:
    { mem_w32(ram, c->r[30] + 0x00000030u, 0u); goto L_0881f064; }
L_0881f050:
    c->r[2] = 0u + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000030u, c->r[2]); goto L_0881f064; }
L_0881f05c:
    c->r[2] = 0u + 0x00000002u;
    mem_w32(ram, c->r[30] + 0x00000030u, c->r[2]);
L_0881f064:
    c->r[2] = mem_r8(ram, c->r[30] + 0x00000009u);
    c->r[2] = c->r[2] & 0x0008u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_0881f0ac; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[2] + 0x00000004u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000ac8u;
    { c->r[31] = 0x0881f090u; c->r[5] = c->r[2] + 0u; func_089cb820(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000034u, c->r[2]);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[2] + 0x0000015fu;
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000034u);
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x0881f0acu; c->r[6] = 0u + 0u; func_0893009c(c, ram); }
L_0881f0ac:
    c->r[2] = mem_r8(ram, c->r[30] + 0x00000009u);
    c->r[2] = c->r[2] & 0x0001u;
    c->r[2] = c->r[2] & 0x00ffu;
    { int _c = (c->r[2] == 0u); if (_c) goto L_0881f6f8; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[2] + 0x0000000cu;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000ac8u;
    { c->r[31] = 0x0881f0dcu; c->r[5] = c->r[2] + 0u; func_089cb820(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000034u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000034u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_0881f0f4; }
    { goto L_0881f900; }
L_0881f0f4:
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[30] + 0x00000008u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000018u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_0881f190; }
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[30] + 0x00000008u);
    c->r[2] = ((s32)c->r[2] < (s32)0x0000001fu) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_0881f190; }
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[30] + 0x00000008u);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000af4u;
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x0881f12cu; c->r[6] = 0u + 0x00000003u; func_08820ea4(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000038u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000038u);
    { int _c = ((s32)c->r[2] <= 0); if (_c) goto L_0881f190; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000038u);
    c->r[2] = c->r[2] + 0x00000023u;
    mem_w32(ram, c->r[30] + 0x00000038u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000038u);
    c->r[2] = 0u + 0x000000ecu;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[3] = c->lo;
    c->r[2] = 0x08a80000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00003e30u);
    c->r[2] = c->r[3] + c->r[2];
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000098u);
    mem_wf32(ram, c->r[30] + 0x00000020u, c->f[0]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000038u);
    c->r[2] = 0u + 0x000000ecu;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[3] = c->lo;
    c->r[2] = 0x08a80000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00003e30u);
    c->r[2] = c->r[3] + c->r[2];
    c->f[0] = mem_rf32(ram, c->r[2] + 0x000000a0u);
    mem_wf32(ram, c->r[30] + 0x00000024u, c->f[0]);
L_0881f190:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x0000013cu;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    mem_w32(ram, c->r[30] + 0x00000038u, c->r[2]);
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x0881f1acu; c->r[4] = c->r[4] + 0x00000af4u; func_0881a2a4(c, ram); }
    c->r[2] = ((s32)c->r[2] < (s32)0x00000002u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_0881f1f0; }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000034u);
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000038u);
    { c->r[31] = 0x0881f1c8u; c->r[6] = 0u + 0u; func_08933428(c, ram); }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000034u);
    c->r[5] = 0x00700000u;
    { c->r[31] = 0x0881f1d8u; c->r[6] = 0u + 0u; func_08930208(c, ram); }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000034u);
    c->r[5] = 0x00300000u;
    { c->r[31] = 0x0881f1e8u; c->r[6] = 0u + 0u; func_08930178(c, ram); }
    { goto L_0881f220; }
L_0881f1f0:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000034u);
    c->r[5] = 0u + 0x00000002u;
    { c->r[31] = 0x0881f200u; c->r[6] = 0u + 0u; func_08933428(c, ram); }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000034u);
    c->r[5] = 0x00700000u;
    { c->r[31] = 0x0881f210u; c->r[6] = 0u + 0u; func_08930208(c, ram); }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000034u);
    c->r[5] = 0x00100000u;
    { c->r[31] = 0x0881f220u; c->r[6] = 0u + 0u; func_08930178(c, ram); }
L_0881f220:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000139u;
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000000u);
    c->f[0] = u2f(c->r[2]);
    c->f[1] = (f32)(s32)f2u(c->f[0]);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000020u);
    c->f[0] = c->f[1] * c->f[0];
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    mem_wf32(ram, c->r[30] + 0x00000038u, c->f[0]);
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x0881f250u; c->r[4] = c->r[4] + 0x00000af4u; func_0881a2a4(c, ram); }
    { int _c = (c->r[2] != 0u); if (_c) goto L_0881f274; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000038u);
    c->r[3] = c->r[2] + 0x00000064u;
    c->r[2] = (u32)((s32)c->r[3] >> 31);
    c->r[2] = c->r[2] >> 31;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = (u32)((s32)c->r[2] >> 1);
    mem_w32(ram, c->r[30] + 0x00000038u, c->r[2]);
L_0881f274:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000038u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000064u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_0881f28c; }
    c->r[2] = 0u + 0x00000063u;
    mem_w32(ram, c->r[30] + 0x00000038u, c->r[2]);
L_0881f28c:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000034u);
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000038u);
    { c->r[31] = 0x0881f29cu; c->r[6] = 0u + 0x00000001u; func_08933428(c, ram); }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000034u);
    c->r[5] = 0x00300000u;
    { c->r[31] = 0x0881f2acu; c->r[6] = 0u + 0x00000001u; func_08930178(c, ram); }
    c->r[2] = mem_r8(ram, c->r[30] + 0x00000009u);
    c->r[2] = c->r[2] & 0x0002u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_0881f34c; }
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000020u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xfffff878u);
    alx_c_cond_s(c, 12, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_0881f2e0; }
    { goto L_0881f2f8; }
L_0881f2e0:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000034u);
    c->r[5] = 0u + 0x00000200u;
    { c->r[31] = 0x0881f2f0u; c->r[6] = 0u + 0x00000001u; func_08930178(c, ram); }
    { goto L_0881f35c; }
L_0881f2f8:
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000020u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xfffff878u);
    alx_c_cond_s(c, 12, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_0881f31c; }
    { goto L_0881f334; }
L_0881f31c:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000034u);
    c->r[5] = 0u + 0x00000800u;
    { c->r[31] = 0x0881f32cu; c->r[6] = 0u + 0x00000001u; func_08930178(c, ram); }
    { goto L_0881f35c; }
L_0881f334:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000034u);
    c->r[5] = 0u + 0x00000f00u;
    { c->r[31] = 0x0881f344u; c->r[6] = 0u + 0x00000001u; func_08930208(c, ram); }
    { goto L_0881f35c; }
L_0881f34c:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000034u);
    c->r[5] = 0u + 0x00000f00u;
    { c->r[31] = 0x0881f35cu; c->r[6] = 0u + 0x00000001u; func_08930208(c, ram); }
L_0881f35c:
    mem_w32(ram, c->r[30] + 0x0000000cu, 0u);
L_0881f360:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000005u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_0881f378; }
    { goto L_0881f6c8; }
L_0881f378:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x00000002u;
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000034u);
    c->r[5] = 0u + 0xffffffffu;
    { c->r[31] = 0x0881f390u; c->r[6] = c->r[2] + 0u; func_0893009c(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = c->r[2] << 3;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = c->r[2] + 0x00000140u;
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000000u);
    mem_w32(ram, c->r[30] + 0x00000038u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000038u);
    c->r[2] = 0u + 0xffffffffu;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_0881f6c8; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000038u);
    c->r[3] = c->r[2] + 0x00000180u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x00000002u;
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000034u);
    c->r[5] = c->r[3] + 0u;
    { c->r[31] = 0x0881f3dcu; c->r[6] = c->r[2] + 0u; func_0893009c(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = c->r[2] << 3;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = c->r[2] + 0x00000141u;
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000000u);
    c->f[0] = u2f(c->r[2]);
    c->f[1] = (f32)(s32)f2u(c->f[0]);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000024u);
    c->f[0] = c->f[1] * c->f[0];
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    mem_wf32(ram, c->r[30] + 0x00000038u, c->f[0]);
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x0881f418u; c->r[4] = c->r[4] + 0x00000af4u; func_08820d70(c, ram); }
    c->r[2] = c->r[2] & 0x0008u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_0881f4b4; }
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x0881f430u; c->r[4] = c->r[4] + 0x00002e04u; func_0880d5d0(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = 0u + 0x0000000bu;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_0881f49c; }
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x0881f44cu; c->r[4] = c->r[4] + 0x00002e04u; func_0880d5d0(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = 0u + 0x0000001bu;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_0881f49c; }
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x0881f468u; c->r[4] = c->r[4] + 0x00002e04u; func_0880d5d0(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = 0u + 0x00000013u;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_0881f49c; }
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x0881f484u; c->r[4] = c->r[4] + 0x00002e04u; func_0880d5d0(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = 0u + 0x0000000cu;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_0881f49c; }
    { goto L_0881f4b4; }
L_0881f49c:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000038u);
    c->r[2] = (u32)((s32)c->r[3] >> 31);
    c->r[2] = c->r[2] >> 31;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = (u32)((s32)c->r[2] >> 1);
    mem_w32(ram, c->r[30] + 0x00000038u, c->r[2]);
L_0881f4b4:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000038u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000064u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_0881f4cc; }
    c->r[2] = 0u + 0x00000063u;
    mem_w32(ram, c->r[30] + 0x00000038u, c->r[2]);
L_0881f4cc:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x00000002u;
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000034u);
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000038u);
    { c->r[31] = 0x0881f4e4u; c->r[6] = c->r[2] + 0u; func_08933428(c, ram); }
    c->r[2] = mem_r8(ram, c->r[30] + 0x00000009u);
    c->r[2] = c->r[2] & 0x0002u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_0881f59c; }
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000024u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xfffff878u);
    alx_c_cond_s(c, 12, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_0881f518; }
    { goto L_0881f538; }
L_0881f518:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x00000002u;
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000034u);
    c->r[5] = 0u + 0x00000200u;
    { c->r[31] = 0x0881f530u; c->r[6] = c->r[2] + 0u; func_08930178(c, ram); }
    { goto L_0881f5e4; }
L_0881f538:
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000024u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xfffff878u);
    alx_c_cond_s(c, 12, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_0881f55c; }
    { goto L_0881f57c; }
L_0881f55c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x00000002u;
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000034u);
    c->r[5] = 0u + 0x00000800u;
    { c->r[31] = 0x0881f574u; c->r[6] = c->r[2] + 0u; func_08930178(c, ram); }
    { goto L_0881f5e4; }
L_0881f57c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x00000002u;
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000034u);
    c->r[5] = 0u + 0x00000f00u;
    { c->r[31] = 0x0881f594u; c->r[6] = c->r[2] + 0u; func_08930208(c, ram); }
    { goto L_0881f5e4; }
L_0881f59c:
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000030u);
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_0881f5cc; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x00000002u;
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000034u);
    c->r[5] = 0u + 0x00000200u;
    { c->r[31] = 0x0881f5c4u; c->r[6] = c->r[2] + 0u; func_08930178(c, ram); }
    { goto L_0881f5e4; }
L_0881f5cc:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x00000002u;
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000034u);
    c->r[5] = 0u + 0x00000f00u;
    { c->r[31] = 0x0881f5e4u; c->r[6] = c->r[2] + 0u; func_08930208(c, ram); }
L_0881f5e4:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x00000002u;
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000034u);
    c->r[5] = 0x00100000u;
    { c->r[31] = 0x0881f5fcu; c->r[6] = c->r[2] + 0u; func_08930208(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x00000002u;
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000034u);
    c->r[5] = 0x00300000u;
    { c->r[31] = 0x0881f614u; c->r[6] = c->r[2] + 0u; func_08930178(c, ram); }
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x0881f620u; c->r[4] = c->r[4] + 0x00000af4u; func_0880d410(c, ram); }
    c->r[5] = c->r[2] + 0u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = c->r[2] + 0xffffffffu;
    c->r[2] = 0u + 0x00000100u;
    c->r[2] = c->r[2] << (c->r[3] & 31u);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000af4u;
    { c->r[31] = 0x0881f644u; c->r[6] = c->r[2] + 0u; func_08820e5c(c, ram); }
    { int _c = (c->r[2] != 0u); if (_c) goto L_0881f6b8; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    { int _c = (c->r[2] == 0u); if (_c) goto L_0881f6b8; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x00000002u;
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000034u);
    c->r[5] = 0u + 0x00000002u;
    { c->r[31] = 0x0881f670u; c->r[6] = c->r[2] + 0u; func_0893009c(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x00000002u;
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000034u);
    c->r[5] = 0u + 0x00000002u;
    { c->r[31] = 0x0881f688u; c->r[6] = c->r[2] + 0u; func_08933428(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x00000002u;
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000034u);
    c->r[5] = 0x00300000u;
    { c->r[31] = 0x0881f6a0u; c->r[6] = c->r[2] + 0u; func_08930208(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x00000002u;
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000034u);
    c->r[5] = 0x00100000u;
    { c->r[31] = 0x0881f6b8u; c->r[6] = c->r[2] + 0u; func_08930178(c, ram); }
L_0881f6b8:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]); goto L_0881f360; }
L_0881f6c8:
    c->r[2] = mem_r8(ram, c->r[30] + 0x00000009u);
    c->r[2] = c->r[2] & 0x0010u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_0881f6f8; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x00000002u;
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000034u);
    { c->r[31] = 0x0881f6ecu; c->r[5] = c->r[2] + 0u; func_08930000(c, ram); }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000034u);
    { c->r[31] = 0x0881f6f8u; c->r[5] = 0u + 0u; func_0893303c(c, ram); }
L_0881f6f8:
    c->r[2] = mem_r8(ram, c->r[30] + 0x00000009u);
    c->r[2] = c->r[2] & 0x0004u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_0881f900; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[2] + 0x00000008u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000ac8u;
    { c->r[31] = 0x0881f724u; c->r[5] = c->r[2] + 0u; func_089cb820(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000034u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000034u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_0881f73c; }
    { goto L_0881f900; }
L_0881f73c:
    mem_w32(ram, c->r[30] + 0x0000000cu, 0u);
L_0881f740:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000006u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_0881f758; }
    { goto L_0881f900; }
L_0881f758:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = c->r[2] + 0x00000178u;
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000000u);
    mem_w8(ram, c->r[30] + 0x0000003cu, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0u + 0x00000001u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_0881f7a8; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000030u);
    c->r[3] = c->r[2] << 3;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = c->r[2] + 0x00000142u;
    c->r[3] = mem_r8(ram, c->r[30] + 0x0000003cu);
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000000u);
    c->r[2] = c->r[3] + c->r[2];
    { mem_w8(ram, c->r[30] + 0x0000003cu, c->r[2]); goto L_0881f7dc; }
L_0881f7a8:
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0u + 0x00000002u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_0881f7dc; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000030u);
    c->r[3] = c->r[2] << 3;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = c->r[2] + 0x00000143u;
    c->r[3] = mem_r8(ram, c->r[30] + 0x0000003cu);
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000000u);
    c->r[2] = c->r[3] + c->r[2];
    mem_w8(ram, c->r[30] + 0x0000003cu, c->r[2]);
L_0881f7dc:
    mem_w32(ram, c->r[30] + 0x00000014u, 0u);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[30] + 0x00000008u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000018u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_0881f8b0; }
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[30] + 0x00000008u);
    c->r[2] = ((s32)c->r[2] < (s32)0x0000001fu) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_0881f8b0; }
    mem_w32(ram, c->r[30] + 0x00000010u, 0u);
L_0881f804:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000005u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_0881f81c; }
    { goto L_0881f8b0; }
L_0881f81c:
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[30] + 0x00000008u);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000af4u;
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x0881f834u; c->r[6] = mem_r32(ram, c->r[30] + 0x00000010u); func_08820ea4(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000038u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000038u);
    { int _c = ((s32)c->r[2] <= 0); if (_c) goto L_0881f8a0; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 2;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000038u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = c->r[2] + 0xffffffffu;
    mem_w32(ram, c->r[30] + 0x00000038u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000038u);
    c->r[2] = 0u + 0x000000ecu;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[3] = c->lo;
    c->r[2] = 0x08a80000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00003e30u);
    c->r[3] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = c->r[2] + 0x000000dcu;
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = c->r[2] + c->r[3];
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
L_0881f8a0:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]); goto L_0881f804; }
L_0881f8b0:
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[30] + 0x0000003cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = c->r[3] + c->r[2];
    mem_w32(ram, c->r[30] + 0x00000038u, c->r[2]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000034u);
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000038u);
    { c->r[31] = 0x0881f8d0u; c->r[6] = mem_r32(ram, c->r[30] + 0x0000000cu); func_08933428(c, ram); }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000034u);
    c->r[5] = 0u + 0u;
    { c->r[31] = 0x0881f8e0u; c->r[6] = mem_r32(ram, c->r[30] + 0x0000000cu); func_08933498(c, ram); }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000034u);
    c->r[5] = 0x01000000u;
    { c->r[31] = 0x0881f8f0u; c->r[6] = mem_r32(ram, c->r[30] + 0x0000000cu); func_08930178(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]); goto L_0881f740; }
L_0881f900:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000054u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000050u);
    { c->r[29] = c->r[29] + 0x00000060u; return; }
    return; /* fell out of func_0881ef98 */
}

/* func_08824acc  0x08824acc..0x08824b78  172 bytes, source=fde */
void func_08824acc(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08824accu);
    c->r[29] = c->r[29] + 0xffffffd0u;
    mem_w32(ram, c->r[29] + 0x00000028u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000024u, c->r[30]);
    mem_w32(ram, c->r[29] + 0x00000020u, c->r[16]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[6]);
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[7]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[6] = 0u + 0xffffffffu;
    c->r[7] = 0u + 0xffffffffu;
    c->r[8] = 0u + 0u;
    c->r[9] = 0u + 0u;
    { c->r[31] = 0x08824b10u; c->r[10] = 0u + 0u; func_0892fcac(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000af4u;
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000004u);
    { c->r[31] = 0x08824b28u; c->r[6] = mem_r32(ram, c->r[30] + 0x00000008u); func_0881456c(c, ram); }
    c->r[16] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000ac8u;
    { c->r[31] = 0x08824b3cu; c->r[5] = mem_r32(ram, c->r[30] + 0x00000010u); func_089cb780(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    mem_w32(ram, c->r[16] + 0x00000000u, c->r[2]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000010u);
    { c->r[31] = 0x08824b54u; c->r[5] = mem_r32(ram, c->r[30] + 0x00000008u); func_08932484(c, ram); }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000010u);
    { c->r[31] = 0x08824b60u; c->r[5] = 0x80000000u; func_0892ff54(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000028u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000024u);
    c->r[16] = mem_r32(ram, c->r[29] + 0x00000020u);
    { c->r[29] = c->r[29] + 0x00000030u; return; }
    return; /* fell out of func_08824acc */
}

/* func_08826cc8  0x08826cc8..0x08826cf0  40 bytes, source=sweep */
void func_08826cc8(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08826cc8u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00001b8fu);
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_08826cc8 */
}

/* func_08829c00  0x08829c00..0x08829d28  296 bytes, source=fde */
void func_08829c00(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08829c00u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_08829c2c; }
    { goto L_08829d14; }
L_08829c2c:
    c->r[3] = 0x08a80000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00003eb4u);
    c->r[2] = 0u + 0x00000001u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_08829c50; }
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00001650u);
    c->r[1] = 0x08a80000u;
    mem_wf32(ram, c->r[1] + 0x00003f1cu, c->f[0]);
L_08829c50:
    c->r[2] = 0x08a80000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00003eb4u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000002u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_08829d14; }
    c->r[1] = 0x08a80000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0x00002e40u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00001654u);
    c->f[1] = c->f[1] * c->f[0];
    c->r[1] = 0x08a80000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00003f1cu);
    c->f[0] = c->f[0] - c->f[1];
    c->r[1] = 0x08a80000u;
    mem_wf32(ram, c->r[1] + 0x00003f1cu, c->f[0]);
    c->r[1] = 0x08a80000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0x00003f1cu);
    c->f[0] = u2f(0u);
    alx_c_cond_s(c, 12, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_08829cb0; }
    { goto L_08829cc0; }
L_08829cb0:
    c->r[1] = 0x08a80000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00003f1cu);
    { mem_wf32(ram, c->r[30] + 0x00000008u, c->f[0]); goto L_08829cc4; }
L_08829cc0:
    mem_w32(ram, c->r[30] + 0x00000008u, 0u);
L_08829cc4:
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000008u);
    c->r[1] = 0x08a80000u;
    mem_wf32(ram, c->r[1] + 0x00003f1cu, c->f[0]);
    c->r[1] = 0x08a80000u;
    { c->r[31] = 0x08829cdcu; c->f[12] = mem_rf32(ram, c->r[1] + 0x00003f1cu); func_08a136f8(c, ram); }
    c->r[4] = c->r[2] + 0u;
    c->r[5] = c->r[3] + 0u;
    c->r[6] = 0u + 0u;
    { c->r[31] = 0x08829cf0u; c->r[7] = 0u + 0u; func_08a14104(c, ram); }
    { int _c = (c->r[2] == 0u); if (_c) goto L_08829d00; }
    { goto L_08829d14; }
L_08829d00:
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00003eb4u;
    c->r[5] = 0x08830000u;
    { c->r[31] = 0x08829d14u; c->r[5] = c->r[5] + 0xffff94a4u; func_0880f03c(c, ram); }
L_08829d14:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_08829c00 */
}

/* func_0882ea34  0x0882ea34..0x0882ea5c  40 bytes, source=sweep */
void func_0882ea34(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0882ea34u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x0000011cu);
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_0882ea34 */
}

/* func_088314ec  0x088314ec..0x0883153c  80 bytes, source=fde */
void func_088314ec(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x088314ecu);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = 0u + 0x0000000eu;
    c->r[6] = 0u + 0x0000000au;
    { c->r[31] = 0x08831514u; c->r[7] = 0u + 0x00000002u; func_088310d4(c, ram); }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = 0u + 0x0000000au;
    c->r[6] = 0u + 0x0000000bu;
    { c->r[31] = 0x08831528u; c->r[7] = 0u + 0x00000002u; func_08831230(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_088314ec */
}

/* func_088334a0  0x088334a0..0x0883353c  156 bytes, source=fde */
void func_088334a0(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x088334a0u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
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
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x0000002bu);
    c->r[2] = 0u + 0xffffffffu;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_08833514; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000008u;
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x0883350cu; c->r[5] = 0u + 0x00000009u; func_08937a50(c, ram); }
    { goto L_08833528; }
L_08833514:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000008u;
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x08833528u; c->r[5] = 0u + 0x00000006u; func_08937a50(c, ram); }
L_08833528:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_088334a0 */
}

/* func_088357ac  0x088357ac..0x08835898  236 bytes, source=fde */
void func_088357ac(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x088357acu);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x088357d0u; c->r[5] = mem_r32(ram, c->r[30] + 0x00000004u); func_08830940(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x0000002au);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000004u) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_08835868; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x0000002au);
    c->r[4] = mem_r32(ram, c->r[3] + 0x00000034u);
    c->r[5] = mem_r32(ram, c->r[5] + 0x00000000u);
    { c->r[31] = 0x08835804u; c->r[6] = c->r[2] + 0u; func_08968bc0(c, ram); }
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0u + 0x00000001u;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_08835850; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0u + 0x00000004u;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_08835850; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0u + 0x00000008u;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_08835850; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0u + 0x00000009u;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_08835850; }
    { goto L_0883585c; }
L_08835850:
    c->r[2] = 0u + 0x000014dau;
    { mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]); goto L_08835870; }
L_0883585c:
    c->r[2] = 0u + 0x000014a7u;
    { mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]); goto L_08835870; }
L_08835868:
    c->r[2] = 0u + 0x000014dau;
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]);
L_08835870:
    c->r[4] = 0x08a40000u;
    c->r[4] = c->r[4] + 0x0000197cu;
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000008u);
    { c->r[31] = 0x08835884u; c->r[6] = 0u + 0x00000001u; func_08928cb8(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_088357ac */
}

/* func_0883a5b4  0x0883a5b4..0x0883a6b4  256 bytes, source=fde */
void func_0883a5b4(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0883a5b4u);
    c->r[29] = c->r[29] + 0xffffffc0u;
    mem_w32(ram, c->r[29] + 0x00000034u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000030u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[5]);
    mem_w32(ram, c->r[30] + 0x00000018u, c->r[6]);
    c->r[2] = c->r[7] + 0u;
    c->r[3] = c->r[8] + 0u;
    c->r[4] = c->r[9] + 0u;
    c->r[5] = c->r[10] + 0u;
    c->r[6] = c->r[11] + 0u;
    mem_w8(ram, c->r[30] + 0x0000001cu, c->r[2]);
    mem_w16(ram, c->r[30] + 0x0000001eu, c->r[3]);
    mem_w16(ram, c->r[30] + 0x00000020u, c->r[4]);
    mem_w8(ram, c->r[30] + 0x00000022u, c->r[5]);
    mem_w8(ram, c->r[30] + 0x00000023u, c->r[6]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000014u);
    { c->r[31] = 0x0883a608u; c->r[6] = 0u + 0u; func_0880ef80(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000024u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000024u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000000u);
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    c->r[3] = f2u(c->f[0]);
    c->r[2] = mem_r16(ram, c->r[30] + 0x0000001eu);
    c->r[2] = c->r[2] + c->r[3];
    mem_w16(ram, c->r[30] + 0x0000001eu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000024u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000004u);
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    c->r[3] = f2u(c->f[0]);
    c->r[2] = mem_r16(ram, c->r[30] + 0x00000020u);
    c->r[2] = c->r[2] + c->r[3];
    mem_w16(ram, c->r[30] + 0x00000020u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = (c->r[2] < 0x000004dcu) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_0883a660; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    { mem_w32(ram, c->r[30] + 0x00000028u, c->r[2]); goto L_0883a66c; }
L_0883a660:
    { c->r[31] = 0x0883a668u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000018u); func_089241c8(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000028u, c->r[2]);
L_0883a66c:
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[30] + 0x0000001cu);
    c->r[8] = (u32)(s32)(s16)mem_r16(ram, c->r[30] + 0x0000001eu);
    c->r[9] = (u32)(s32)(s16)mem_r16(ram, c->r[30] + 0x00000020u);
    c->r[10] = mem_r8(ram, c->r[30] + 0x00000022u);
    c->r[11] = mem_r8(ram, c->r[30] + 0x00000023u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000040u);
    mem_w32(ram, c->r[29] + 0x00000000u, c->r[2]);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00002dfcu;
    c->r[5] = 0u + 0x00000001u;
    c->r[6] = mem_r32(ram, c->r[30] + 0x00000028u);
    { c->r[31] = 0x0883a6a0u; c->r[7] = c->r[3] + 0u; func_089ce998(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000034u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000030u);
    { c->r[29] = c->r[29] + 0x00000040u; return; }
    return; /* fell out of func_0883a5b4 */
}

/* func_0883c784  0x0883c784..0x0883c7e0  92 bytes, source=fde */
void func_0883c784(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0883c784u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000018u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[30]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[16]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    mem_w32(ram, c->r[2] + 0x00000000u, 0u);
    c->r[16] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000330u;
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x0883c7c4u; c->r[6] = 0u + 0x000019e8u; func_089d9d14(c, ram); }
    mem_w32(ram, c->r[16] + 0x00000000u, c->r[2]);
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000018u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[16] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_0883c784 */
}

/* func_0884607c  0x0884607c..0x0884613c  192 bytes, source=residue */
void func_0884607c(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0884607cu);
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
    return; /* fell out of func_0884607c */
}

/* func_08849d34  0x08849d34..0x08849de0  172 bytes, source=sweep */
void func_08849d34(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08849d34u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_08849d8c; }
L_08849d54:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000000u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000020u) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_08849d74; }
    { goto L_08849d8c; }
L_08849d74:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[3] + 0x00000000u, c->r[2]); goto L_08849d54; }
L_08849d8c:
L_08849d90:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000000u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000020u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_08849db0; }
    { goto L_08849dc8; }
L_08849db0:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[3] + 0x00000000u, c->r[2]); goto L_08849d90; }
L_08849dc8:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_08849d34 */
}

/* func_0884d0b0  0x0884d0b0..0x0884d0f8  72 bytes, source=sweep */
void func_0884d0b0(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0884d0b0u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    vfpu_exec(c, ram, 0xd8610000u); /* lv.q */
    vfpu_exec(c, ram, 0xd8420000u); /* lv.q */
    vfpu_exec(c, ram, 0x60828180u); /* vsub.q */
    vfpu_exec(c, ram, 0x64808001u); /* vdot.t */
    vfpu_exec(c, ram, 0xd0160101u); /* vsqrt.s */
    vfpu_exec(c, ram, 0xebc10008u); /* sv.s */
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000008u);
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_0884d0b0 */
}

/* func_0884f888  0x0884f888..0x0884f9d0  328 bytes, source=fde */
void func_0884f888(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0884f888u);
    c->r[29] = c->r[29] + 0xffffffd0u;
    mem_w32(ram, c->r[29] + 0x00000024u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000020u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[6]);
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[7]);
    c->r[2] = 0x08a90000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0xffff8b30u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_0884f9bc; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_0884f9bc; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r8(ram, c->r[2] + 0x000000c9u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_0884f9bc; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[2] + 0xffffffe9u;
    c->r[2] = (c->r[2] < 0x00000004u) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_0884f904; }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[6] = mem_r32(ram, c->r[30] + 0x00000008u);
    { c->r[31] = 0x0884f8fcu; c->r[7] = mem_r32(ram, c->r[30] + 0x0000000cu); func_0884f9d0(c, ram); }
    { goto L_0884f9bc; }
L_0884f904:
    { c->r[31] = 0x0884f90cu; c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u); func_0884eff0(c, ram); }
    mem_w16(ram, c->r[30] + 0x00000010u, c->r[2]);
    c->r[3] = (u32)(s32)(s16)mem_r16(ram, c->r[30] + 0x00000010u);
    c->r[2] = 0u + 0xffffffffu;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_0884f928; }
    { goto L_0884f9bc; }
L_0884f928:
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[30] + 0x00000010u);
    c->r[4] = 0x08a90000u;
    c->r[4] = c->r[4] + 0xffff8c4cu;
    { c->r[31] = 0x0884f93cu; c->r[5] = c->r[2] + 0u; func_0885a908(c, ram); }
    c->r[2] = mem_r8(ram, c->r[30] + 0x00000004u);
    c->r[4] = 0x08a90000u;
    c->r[4] = c->r[4] + 0xffff8c4cu;
    { c->r[31] = 0x0884f950u; c->r[5] = c->r[2] + 0u; func_0885a9a0(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_0884f97c; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    { int _c = (c->r[2] == 0u); if (_c) goto L_0884f97c; }
    c->r[4] = 0x08a90000u;
    c->r[4] = c->r[4] + 0xffff8c4cu;
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000008u);
    { c->r[31] = 0x0884f97cu; c->r[6] = mem_r32(ram, c->r[30] + 0x0000000cu); func_0885a864(c, ram); }
L_0884f97c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_0884f9ac; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r8(ram, c->r[2] + 0x000000c9u);
    c->r[2] = 0u + 0x00000003u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_0884f9ac; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000084u);
    { c->r[31] = 0x0884f9acu; c->r[4] = c->r[2] + 0u; func_088503bc(c, ram); }
L_0884f9ac:
    c->r[4] = 0x08a90000u;
    c->r[4] = c->r[4] + 0xffff8c4cu;
    { c->r[31] = 0x0884f9bcu; c->r[5] = 0u + 0x00000002u; func_0885ab78(c, ram); }
L_0884f9bc:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000024u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000020u);
    { c->r[29] = c->r[29] + 0x00000030u; return; }
    return; /* fell out of func_0884f888 */
}

/* func_08854c28  0x08854c28..0x08854c94  108 bytes, source=sweep */
void func_08854c28(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08854c28u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    c->r[2] = 0x08a90000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0xffff8c60u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_08854c50; }
    c->r[2] = 0u + 0x00000009u;
    { mem_w32(ram, c->r[30] + 0x00000000u, c->r[2]); goto L_08854c80; }
L_08854c50:
    c->r[3] = 0x08a90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0xffff8c58u);
    c->r[2] = 0u + 0x00000008u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_08854c74; }
    c->r[2] = 0x08a90000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0xffff8c5cu);
    { mem_w32(ram, c->r[30] + 0x00000000u, c->r[2]); goto L_08854c80; }
L_08854c74:
    c->r[2] = 0x08a90000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0xffff8c58u);
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[2]);
L_08854c80:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_08854c28 */
}

/* func_08859a20  0x08859a20..0x08859b40  288 bytes, source=fde */
void func_08859a20(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08859a20u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x08859a40u; c->r[4] = c->r[4] + 0x00000af4u; func_0880d294(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = 0u + 0x00000002u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_08859b1c; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = 0u + 0x00000055u;
    mem_w8(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[2] + 0x00000001u;
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = 0u + 0x00000053u;
    mem_w8(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[2] + 0x00000001u;
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = 0u + 0x00000045u;
    mem_w8(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[2] + 0x00000001u;
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = 0u + 0x0000002eu;
    mem_w8(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[2] + 0x00000001u;
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[2]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[5] = 0x08ab0000u;
    c->r[5] = c->r[5] + 0xffff9974u;
    { c->r[31] = 0x08859accu; c->r[6] = 0u + 0x00000018u; func_08a19db8(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[2] + 0x00000018u;
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[2]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[5] = 0x08ab0000u;
    c->r[5] = c->r[5] + 0xffff998cu;
    { c->r[31] = 0x08859aecu; c->r[6] = 0u + 0x000000a8u; func_08a19db8(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[2] + 0x000000a8u;
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[2]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[5] = 0x08ab0000u;
    c->r[5] = c->r[5] + 0xffff9a34u;
    { c->r[31] = 0x08859b0cu; c->r[6] = 0u + 0x00000020u; func_08a19db8(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[2] + 0x00000020u;
    { mem_w32(ram, c->r[30] + 0x00000004u, c->r[2]); goto L_08859b2c; }
L_08859b1c:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = 0u + 0u;
    { c->r[31] = 0x08859b2cu; c->r[6] = 0u + 0x00000100u; func_08a19ec4(c, ram); }
L_08859b2c:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_08859a20 */
}

/* func_0885a908  0x0885a908..0x0885a954  76 bytes, source=sweep */
void func_0885a908(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0885a908u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[2] = c->r[5] + 0u;
    mem_w16(ram, c->r[30] + 0x00000004u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x00000004u);
    c->r[2] = mem_r16(ram, c->r[30] + 0x00000004u);
    mem_w16(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000004u);
    c->r[2] = c->r[2] + 0x00000002u;
    mem_w32(ram, c->r[3] + 0x00000004u, c->r[2]);
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_0885a908 */
}

/* func_0885ccd8  0x0885ccd8..0x0885cf70  664 bytes, source=sweep */
void func_0885ccd8(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0885ccd8u);
    c->r[29] = c->r[29] + 0xffffffd0u;
    mem_w32(ram, c->r[29] + 0x00000024u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000020u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000000cu);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = mem_r8(ram, c->r[2] + 0x00000000u);
    c->r[2] = 0u + 0x000000ffu;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_0885cd5c; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[2] + 0x00000001u;
    c->r[3] = mem_r8(ram, c->r[2] + 0x00000000u);
    c->r[2] = 0u + 0x000000ffu;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_0885cd5c; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[2] + 0x00000002u;
    c->r[3] = mem_r8(ram, c->r[2] + 0x00000000u);
    c->r[2] = 0u + 0x000000ffu;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_0885cd5c; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[2] + 0x00000003u;
    c->r[3] = mem_r8(ram, c->r[2] + 0x00000000u);
    c->r[2] = 0u + 0x000000ffu;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_0885cd5c; }
    { mem_w32(ram, c->r[30] + 0x00000018u, 0u); goto L_0885cf58; }
L_0885cd5c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000000cu);
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000000cu);
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = c->r[2] + 0x00001cb0u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x00000006u;
    c->r[4] = mem_lwl(ram, c->r[2] + 0x00000003u, c->r[4]);
    c->r[4] = mem_lwr(ram, c->r[2] + 0x00000000u, c->r[4]);
    c->r[5] = mem_lwl(ram, c->r[2] + 0x00000007u, c->r[5]);
    c->r[5] = mem_lwr(ram, c->r[2] + 0x00000004u, c->r[5]);
    mem_swl(ram, c->r[3] + 0x00000003u, c->r[4]);
    mem_swr(ram, c->r[3] + 0x00000000u, c->r[4]);
    mem_swl(ram, c->r[3] + 0x00000007u, c->r[5]);
    mem_swr(ram, c->r[3] + 0x00000004u, c->r[5]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[2] + 0x0000000eu;
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]);
    mem_w32(ram, c->r[30] + 0x00000010u, 0u);
L_0885cdb4:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = mem_r8(ram, c->r[2] + 0x00000002u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = ((s32)c->r[2] < (s32)c->r[3]) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_0885cdd4; }
    { goto L_0885ce20; }
L_0885cdd4:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000000u);
    c->r[3] = c->r[2] << 3;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = c->r[2] + 0x000014b0u;
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x0885ce00u; c->r[5] = mem_r32(ram, c->r[30] + 0x00000008u); func_08862aec(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[2] + c->r[3];
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]); goto L_0885cdb4; }
L_0885ce20:
    mem_w32(ram, c->r[30] + 0x00000014u, 0u);
L_0885ce24:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = mem_r8(ram, c->r[2] + 0x00000003u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = ((s32)c->r[2] < (s32)c->r[3]) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_0885ce44; }
    { goto L_0885cee8; }
L_0885ce44:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000000u);
    c->r[2] = c->r[2] + c->r[3];
    c->r[5] = c->r[2] + 0x00001cc0u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000000u);
    c->r[2] = c->r[2] + c->r[3];
    c->r[2] = c->r[2] + 0x00001cc0u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[4] = mem_r8(ram, c->r[2] + 0x0000000cu);
    c->r[2] = mem_r8(ram, c->r[3] + 0x00000001u);
    c->r[2] = c->r[4] + c->r[2];
    mem_w8(ram, c->r[5] + 0x0000000cu, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000000u);
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[5] = c->r[2] + 0x00001cb0u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000000u);
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[2] = c->r[2] + 0x00001cb0u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[4] = mem_r16(ram, c->r[2] + 0x00000008u);
    c->r[2] = mem_r16(ram, c->r[3] + 0x00000002u);
    c->r[2] = c->r[4] + c->r[2];
    mem_w16(ram, c->r[5] + 0x00000008u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[2] + 0x00000004u;
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]); goto L_0885ce24; }
L_0885cee8:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000028u);
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = mem_r16(ram, c->r[2] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[4] + 0x00000028u);
    c->r[2] = c->r[2] + c->r[3];
    mem_w32(ram, c->r[5] + 0x00000028u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    mem_w32(ram, c->r[3] + 0x0000000cu, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    mem_w32(ram, c->r[3] + 0x00000010u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x000014acu);
    c->r[2] = c->r[2] + 0x00000006u;
    mem_w32(ram, c->r[3] + 0x000014acu, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r16(ram, c->r[2] + 0x0000002eu);
    c->r[2] = c->r[2] + 0xffffffffu;
    mem_w16(ram, c->r[3] + 0x0000002eu, c->r[2]);
    c->r[2] = 0u + 0x00000001u;
    mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]);
L_0885cf58:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000024u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000020u);
    { c->r[29] = c->r[29] + 0x00000030u; return; }
    return; /* fell out of func_0885ccd8 */
}

/* func_08861934  0x08861934..0x08861a04  208 bytes, source=sweep */
void func_08861934(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08861934u);
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
    return; /* fell out of func_08861934 */
}

/* func_08862c2c  0x08862c2c..0x08862c64  56 bytes, source=sweep */
void func_08862c2c(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08862c2cu);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = c->r[2] << 3;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = c->r[2] + 0x0000063au;
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_08862c2c */
}

/* func_08866d18  0x08866d18..0x08866da0  136 bytes, source=fde */
void func_08866d18(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08866d18u);
    c->r[29] = c->r[29] + 0xfffffff0u;
    mem_w32(ram, c->r[29] + 0x00000004u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000000u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    c->r[2] = 0x08a80000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00002f90u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_08866d40; }
    { goto L_08866d8c; }
L_08866d40:
    c->r[2] = 0x08a90000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0xffffb940u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_08866d58; }
    { goto L_08866d8c; }
L_08866d58:
    c->r[4] = 0x08a80000u;
    c->r[4] = mem_r32(ram, c->r[4] + 0x00002f90u);
    c->r[5] = 0x08a90000u;
    { c->r[31] = 0x08866d6cu; c->r[5] = mem_r32(ram, c->r[5] + 0xffffb940u); func_08865910(c, ram); }
    c->r[4] = 0x08a80000u;
    c->r[4] = mem_r32(ram, c->r[4] + 0x00002f90u);
    c->r[5] = 0x08a90000u;
    { c->r[31] = 0x08866d80u; c->r[5] = mem_r32(ram, c->r[5] + 0xffffb940u); func_08865f60(c, ram); }
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x08866d8cu; c->r[4] = mem_r32(ram, c->r[4] + 0x00002f90u); func_08862ee0(c, ram); }
L_08866d8c:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000004u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000000u);
    { c->r[29] = c->r[29] + 0x00000010u; return; }
    return; /* fell out of func_08866d18 */
}

/* func_0886eb68  0x0886eb68..0x0886ec48  224 bytes, source=residue */
void func_0886eb68(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0886eb68u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_wf32(ram, c->r[30] + 0x00000000u, c->f[12]);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000000u);
    c->f[0] = u2f(0u);
    alx_c_cond_s(c, 12, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_0886eb98; }
    { goto L_0886ebd8; }
L_0886eb98:
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000000u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000034fcu);
    c->f[1] = c->f[1] * c->f[0];
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00003500u);
    c->f[0] = c->f[1] + c->f[0];
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    mem_wf32(ram, c->r[30] + 0x00000004u, c->f[0]);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000004u);
    c->f[1] = (f32)(s32)f2u(c->f[0]);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00003504u);
    c->f[0] = c->f[1] * c->f[0];
    { mem_wf32(ram, c->r[30] + 0x00000000u, c->f[0]); goto L_0886ec34; }
L_0886ebd8:
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000000u);
    c->f[0] = u2f(0u);
    alx_c_cond_s(c, 12, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_0886ebf8; }
    { goto L_0886ec34; }
L_0886ebf8:
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000000u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000034fcu);
    c->f[1] = c->f[1] * c->f[0];
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00003500u);
    c->f[0] = c->f[1] - c->f[0];
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    mem_wf32(ram, c->r[30] + 0x00000004u, c->f[0]);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000004u);
    c->f[1] = (f32)(s32)f2u(c->f[0]);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00003504u);
    c->f[0] = c->f[1] * c->f[0];
    mem_wf32(ram, c->r[30] + 0x00000000u, c->f[0]);
L_0886ec34:
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000000u);
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_0886eb68 */
}

/* func_088735b0  0x088735b0..0x08873988  984 bytes, source=fde */
void func_088735b0(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x088735b0u);
    c->r[29] = c->r[29] + 0xffffffb0u;
    mem_w32(ram, c->r[29] + 0x00000048u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000044u, c->r[30]);
    mem_w32(ram, c->r[29] + 0x00000040u, c->r[16]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000134u);
    c->r[1] = 0x08a80000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00002e40u);
    c->f[0] = c->f[1] * c->f[0];
    mem_wf32(ram, c->r[30] + 0x00000008u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000138u);
    c->r[1] = 0x08a80000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00002e40u);
    c->f[0] = c->f[1] * c->f[0];
    mem_wf32(ram, c->r[30] + 0x0000000cu, c->f[0]);
    { c->r[31] = 0x08873604u; c->r[16] = c->r[30] + 0x00000010u; func_08867ab8(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000040u;
    c->r[4] = c->r[16] + 0u;
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x08873620u; c->r[6] = c->r[3] + 0u; func_0886ec48(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000048u);
    c->f[1] = (f32)fabsf(c->f[0]);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00003754u);
    alx_c_cond_s(c, 12, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_0887364c; }
    { goto L_08873684; }
L_0887364c:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000040u);
    c->f[0] = mem_rf32(ram, c->r[3] + 0x00000130u);
    c->f[0] = c->f[1] - c->f[0];
    mem_wf32(ram, c->r[4] + 0x00000040u, c->f[0]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000044u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000008u);
    c->f[0] = c->f[1] - c->f[0];
    { mem_wf32(ram, c->r[3] + 0x00000044u, c->f[0]); goto L_088736b8; }
L_08873684:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000040u);
    c->f[0] = mem_rf32(ram, c->r[3] + 0x00000130u);
    c->f[0] = c->f[1] + c->f[0];
    mem_wf32(ram, c->r[4] + 0x00000040u, c->f[0]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000044u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000008u);
    c->f[0] = c->f[1] + c->f[0];
    mem_wf32(ram, c->r[3] + 0x00000044u, c->f[0]);
L_088736b8:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000048u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x0000000cu);
    c->f[0] = c->f[1] + c->f[0];
    mem_wf32(ram, c->r[3] + 0x00000048u, c->f[0]);
    c->r[2] = c->r[30] + 0x00000010u;
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00003758u);
    c->r[1] = 0x08a40000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0x0000375cu);
    c->r[4] = c->r[2] + 0u;
    c->f[12] = u2f(0u);
    c->f[13] = c->f[0];
    c->f[14] = c->f[1];
    c->f[15] = u2f(0u);
    { c->r[31] = 0x08873700u; func_0880d140(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000040u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00003754u);
    alx_c_cond_s(c, 12, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_08873728; }
    { goto L_0887376c; }
L_08873728:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[1] = 0x08a40000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0x00003758u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000040u);
    c->f[0] = c->f[1] - c->f[0];
    mem_wf32(ram, c->r[3] + 0x00000040u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[4] = c->r[2] + 0x00000040u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000040u;
    c->r[3] = c->r[30] + 0x00000010u;
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x08873764u; c->r[6] = c->r[3] + 0u; func_08859fd4(c, ram); }
    { goto L_088737d0; }
L_0887376c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000040u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00003760u);
    alx_c_cond_s(c, 12, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_08873794; }
    { goto L_088737d0; }
L_08873794:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[1] = 0x08a40000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0x0000375cu);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000040u);
    c->f[0] = c->f[1] - c->f[0];
    mem_wf32(ram, c->r[3] + 0x00000040u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[4] = c->r[2] + 0x00000040u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000040u;
    c->r[3] = c->r[30] + 0x00000010u;
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x088737d0u; c->r[6] = c->r[3] + 0u; func_08859fd4(c, ram); }
L_088737d0:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000044u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00003758u);
    alx_c_cond_s(c, 12, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_088737f8; }
    { goto L_08873818; }
L_088737f8:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000044u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00003764u);
    c->f[0] = c->f[1] - c->f[0];
    { mem_wf32(ram, c->r[3] + 0x00000044u, c->f[0]); goto L_0887385c; }
L_08873818:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000044u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x0000375cu);
    alx_c_cond_s(c, 12, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_08873840; }
    { goto L_0887385c; }
L_08873840:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000044u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00003764u);
    c->f[0] = c->f[1] + c->f[0];
    mem_wf32(ram, c->r[3] + 0x00000044u, c->f[0]);
L_0887385c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000048u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00003758u);
    alx_c_cond_s(c, 12, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_08873884; }
    { goto L_088738a4; }
L_08873884:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000048u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00003764u);
    c->f[0] = c->f[1] - c->f[0];
    { mem_wf32(ram, c->r[3] + 0x00000048u, c->f[0]); goto L_088738e8; }
L_088738a4:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000048u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x0000375cu);
    alx_c_cond_s(c, 12, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_088738cc; }
    { goto L_088738e8; }
L_088738cc:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000048u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00003764u);
    c->f[0] = c->f[1] + c->f[0];
    mem_wf32(ram, c->r[3] + 0x00000048u, c->f[0]);
L_088738e8:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = c->r[2] + 0x00000040u;
    c->r[2] = mem_r32(ram, c->r[3] + 0x00000000u);
    mem_w32(ram, c->r[30] + 0x00000020u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[3] + 0x00000004u);
    mem_w32(ram, c->r[30] + 0x00000024u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[3] + 0x00000008u);
    mem_w32(ram, c->r[30] + 0x00000028u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[3] + 0x0000000cu);
    mem_w32(ram, c->r[30] + 0x0000002cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000048u);
    c->f[1] = (f32)fabsf(c->f[0]);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00003754u);
    alx_c_cond_s(c, 12, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_0887393c; }
    { goto L_0887394c; }
L_0887393c:
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00003758u);
    { mem_wf32(ram, c->r[30] + 0x00000030u, c->f[0]); goto L_08873950; }
L_0887394c:
    mem_w32(ram, c->r[30] + 0x00000030u, 0u);
L_08873950:
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000030u);
    { c->r[31] = 0x0887395cu; mem_wf32(ram, c->r[30] + 0x00000028u, c->f[0]); func_08867ab8(c, ram); }
    c->r[3] = c->r[30] + 0x00000020u;
    c->r[4] = c->r[2] + 0u;
    c->r[5] = c->r[3] + 0u;
    { c->r[31] = 0x08873970u; c->r[6] = 0u + 0u; func_0885a194(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000048u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000044u);
    c->r[16] = mem_r32(ram, c->r[29] + 0x00000040u);
    { c->r[29] = c->r[29] + 0x00000050u; return; }
    return; /* fell out of func_088735b0 */
}

/* func_0887cbf4  0x0887cbf4..0x0887cc30  60 bytes, source=sweep */
void func_0887cbf4(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0887cbf4u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    mem_w32(ram, c->r[2] + 0x000000f8u, 0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    mem_w32(ram, c->r[2] + 0x00000100u, 0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    mem_w32(ram, c->r[2] + 0x000000fcu, 0u);
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_0887cbf4 */
}

/* func_088818ec  0x088818ec..0x08881934  72 bytes, source=sweep */
void func_088818ec(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x088818ecu);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000030u;
    { c->r[31] = 0x08881910u; c->r[4] = c->r[2] + 0u; func_08808240(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000040u;
    { c->r[31] = 0x08881920u; c->r[4] = c->r[2] + 0u; func_08808240(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_088818ec */
}

/* func_088835ec  0x088835ec..0x08885aa8  9404 bytes, source=fde */
void func_088835ec(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x088835ecu);
L_088835ec:
    c->r[29] = c->r[29] + 0xfffffe80u;
    mem_w32(ram, c->r[29] + 0x00000170u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x0000016cu, c->r[30]);
    mem_w32(ram, c->r[29] + 0x00000168u, c->r[18]);
    mem_w32(ram, c->r[29] + 0x00000164u, c->r[17]);
    mem_w32(ram, c->r[29] + 0x00000160u, c->r[16]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[4]);
    c->r[2] = c->r[5] + 0u;
    mem_w32(ram, c->r[30] + 0x00000018u, c->r[6]);
    mem_w8(ram, c->r[30] + 0x00000014u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = c->r[2] + 0x000000e0u;
    mem_w32(ram, c->r[30] + 0x0000001cu, c->r[2]);
    c->r[2] = mem_r8(ram, c->r[30] + 0x00000014u);
    mem_w32(ram, c->r[30] + 0x00000154u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000154u);
    c->r[2] = (c->r[3] < 0x00000018u) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_08885a88; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000154u);
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08a40000u;
    c->r[2] = c->r[2] + 0x00003ee8u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    { u32 _t = c->r[2]; switch (_t) { case 0x088835ecu: goto L_088835ec; case 0x0888365cu: goto L_0888365c; case 0x08884554u: goto L_08884554; case 0x08884c38u: goto L_08884c38; case 0x08884cacu: goto L_08884cac; case 0x08884f00u: goto L_08884f00; case 0x0888527cu: goto L_0888527c; case 0x088852f0u: goto L_088852f0; case 0x08885328u: goto L_08885328; case 0x0888593cu: goto L_0888593c; case 0x088859c0u: goto L_088859c0; case 0x088859f8u: goto L_088859f8; case 0x08885a88u: goto L_08885a88; default: recomp_trap_unknown_indirect(c, ram, 0x08883654u, _t); return; } }
L_0888365c:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[5] = 0x08a40000u;
    { c->r[31] = 0x0888366cu; c->r[5] = c->r[5] + 0x00003d6cu; func_089c35a0(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000020u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_08883710; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = 0x08a50000u;
    c->r[2] = c->r[2] + 0x00003ca0u;
    mem_w32(ram, c->r[3] + 0x00000004u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = 0x08a50000u;
    c->r[2] = c->r[2] + 0x00003cacu;
    mem_w32(ram, c->r[3] + 0x00000008u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = 0x08a50000u;
    c->r[2] = c->r[2] + 0x00003cbcu;
    mem_w32(ram, c->r[3] + 0x0000000cu, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = 0x08a50000u;
    c->r[2] = c->r[2] + 0x00003cc4u;
    mem_w32(ram, c->r[3] + 0x00000010u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = 0x08a50000u;
    c->r[2] = c->r[2] + 0x00003cb8u;
    mem_w32(ram, c->r[3] + 0x00000014u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = 0x08a50000u;
    c->r[2] = c->r[2] + 0x00003cc8u;
    mem_w32(ram, c->r[3] + 0x0000002cu, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = 0x08a90000u;
    c->r[2] = c->r[2] + 0xffffe81cu;
    mem_w32(ram, c->r[3] + 0x00000018u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = 0x08a50000u;
    c->r[2] = c->r[2] + 0x00003cccu;
    mem_w32(ram, c->r[3] + 0x0000001cu, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = 0x08a50000u;
    c->r[2] = c->r[2] + 0x00003cd4u;
    { mem_w32(ram, c->r[3] + 0x00000020u, c->r[2]); goto L_088837d0; }
L_08883710:
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[2] = c->r[2] + 0x000002d0u;
    mem_w32(ram, c->r[3] + 0x00000004u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[2] = c->r[2] + 0x000002dcu;
    mem_w32(ram, c->r[3] + 0x00000008u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[2] = c->r[2] + 0x00000328u;
    mem_w32(ram, c->r[3] + 0x0000000cu, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[2] = c->r[2] + 0x0000032cu;
    mem_w32(ram, c->r[3] + 0x00000010u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[2] = c->r[2] + 0x00000310u;
    mem_w32(ram, c->r[3] + 0x00000014u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[2] = c->r[2] + 0x00000340u;
    mem_w32(ram, c->r[3] + 0x0000002cu, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[2] = c->r[2] + 0x00000254u;
    mem_w32(ram, c->r[3] + 0x00000018u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[2] = c->r[2] + 0x0000024cu;
    mem_w32(ram, c->r[3] + 0x0000001cu, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[2] = c->r[2] + 0x00000244u;
    mem_w32(ram, c->r[3] + 0x00000020u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[2] = c->r[2] + 0x00000c0cu;
    mem_w32(ram, c->r[3] + 0x00000024u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[2] = c->r[2] + 0x00000c1cu;
    mem_w32(ram, c->r[3] + 0x00000028u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[2] = c->r[2] + 0x00000c2cu;
    mem_w32(ram, c->r[3] + 0x00000030u, c->r[2]);
L_088837d0:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = c->r[2] + 0x00000034u;
    mem_w32(ram, c->r[30] + 0x00000024u, c->r[2]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000024u);
    mem_w32(ram, c->r[30] + 0x000000b8u, c->r[4]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000004u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000000u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00003eb4u);
    c->f[1] = c->f[1] * c->f[0];
    mem_wf32(ram, c->r[30] + 0x000000bcu, c->f[1]);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00003eb8u);
    mem_wf32(ram, c->r[30] + 0x000000c4u, c->f[0]);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x000000bcu);
    c->f[2] = mem_rf32(ram, c->r[30] + 0x000000c4u);
    alx_c_cond_s(c, 14, c->f[2], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_08883834; }
    c->f[0] = mem_rf32(ram, c->r[30] + 0x000000bcu);
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    { mem_wf32(ram, c->r[30] + 0x000000c0u, c->f[0]); goto L_08883858; }
L_08883834:
    c->f[1] = mem_rf32(ram, c->r[30] + 0x000000bcu);
    c->f[2] = mem_rf32(ram, c->r[30] + 0x000000c4u);
    c->f[0] = c->f[1] - c->f[2];
    c->r[2] = 0x80000000u;
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    mem_wf32(ram, c->r[30] + 0x000000c0u, c->f[0]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x000000c0u);
    c->r[3] = c->r[3] | c->r[2];
    mem_w32(ram, c->r[30] + 0x000000c0u, c->r[3]);
L_08883858:
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000c0u);
    c->r[4] = mem_r32(ram, c->r[30] + 0x000000b8u);
    mem_w8(ram, c->r[4] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000024u);
    c->r[2] = c->r[2] + 0x00000001u;
    mem_w32(ram, c->r[30] + 0x000000c8u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000004u);
    c->r[2] = c->r[2] + 0x00000004u;
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000000u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00003eb4u);
    c->f[1] = c->f[1] * c->f[0];
    mem_wf32(ram, c->r[30] + 0x000000ccu, c->f[1]);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00003eb8u);
    mem_wf32(ram, c->r[30] + 0x000000d4u, c->f[0]);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x000000ccu);
    c->f[2] = mem_rf32(ram, c->r[30] + 0x000000d4u);
    alx_c_cond_s(c, 14, c->f[2], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_088838c4; }
    c->f[0] = mem_rf32(ram, c->r[30] + 0x000000ccu);
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    { mem_wf32(ram, c->r[30] + 0x000000d0u, c->f[0]); goto L_088838e8; }
L_088838c4:
    c->f[1] = mem_rf32(ram, c->r[30] + 0x000000ccu);
    c->f[2] = mem_rf32(ram, c->r[30] + 0x000000d4u);
    c->f[0] = c->f[1] - c->f[2];
    c->r[2] = 0x80000000u;
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    mem_wf32(ram, c->r[30] + 0x000000d0u, c->f[0]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x000000d0u);
    c->r[3] = c->r[3] | c->r[2];
    mem_w32(ram, c->r[30] + 0x000000d0u, c->r[3]);
L_088838e8:
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000d0u);
    c->r[4] = mem_r32(ram, c->r[30] + 0x000000c8u);
    mem_w8(ram, c->r[4] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000024u);
    c->r[2] = c->r[2] + 0x00000002u;
    mem_w32(ram, c->r[30] + 0x000000d8u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000004u);
    c->r[2] = c->r[2] + 0x00000008u;
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000000u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00003eb4u);
    c->f[1] = c->f[1] * c->f[0];
    mem_wf32(ram, c->r[30] + 0x000000dcu, c->f[1]);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00003eb8u);
    mem_wf32(ram, c->r[30] + 0x000000e4u, c->f[0]);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x000000dcu);
    c->f[2] = mem_rf32(ram, c->r[30] + 0x000000e4u);
    alx_c_cond_s(c, 14, c->f[2], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_08883954; }
    c->f[0] = mem_rf32(ram, c->r[30] + 0x000000dcu);
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    { mem_wf32(ram, c->r[30] + 0x000000e0u, c->f[0]); goto L_08883978; }
L_08883954:
    c->f[1] = mem_rf32(ram, c->r[30] + 0x000000dcu);
    c->f[2] = mem_rf32(ram, c->r[30] + 0x000000e4u);
    c->f[0] = c->f[1] - c->f[2];
    c->r[2] = 0x80000000u;
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    mem_wf32(ram, c->r[30] + 0x000000e0u, c->f[0]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x000000e0u);
    c->r[3] = c->r[3] | c->r[2];
    mem_w32(ram, c->r[30] + 0x000000e0u, c->r[3]);
L_08883978:
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000e0u);
    c->r[4] = mem_r32(ram, c->r[30] + 0x000000d8u);
    mem_w8(ram, c->r[4] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000024u);
    c->r[2] = c->r[2] + 0x00000003u;
    mem_w32(ram, c->r[30] + 0x000000e8u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000000cu);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000000u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00003eb4u);
    c->f[1] = c->f[1] * c->f[0];
    mem_wf32(ram, c->r[30] + 0x000000ecu, c->f[1]);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00003eb8u);
    mem_wf32(ram, c->r[30] + 0x000000f4u, c->f[0]);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x000000ecu);
    c->f[2] = mem_rf32(ram, c->r[30] + 0x000000f4u);
    alx_c_cond_s(c, 14, c->f[2], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_088839e0; }
    c->f[0] = mem_rf32(ram, c->r[30] + 0x000000ecu);
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    { mem_wf32(ram, c->r[30] + 0x000000f0u, c->f[0]); goto L_08883a04; }
L_088839e0:
    c->f[1] = mem_rf32(ram, c->r[30] + 0x000000ecu);
    c->f[2] = mem_rf32(ram, c->r[30] + 0x000000f4u);
    c->f[0] = c->f[1] - c->f[2];
    c->r[2] = 0x80000000u;
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    mem_wf32(ram, c->r[30] + 0x000000f0u, c->f[0]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x000000f0u);
    c->r[3] = c->r[3] | c->r[2];
    mem_w32(ram, c->r[30] + 0x000000f0u, c->r[3]);
L_08883a04:
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000f0u);
    c->r[4] = mem_r32(ram, c->r[30] + 0x000000e8u);
    mem_w8(ram, c->r[4] + 0x00000000u, c->r[2]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[5] = 0x08a40000u;
    { c->r[31] = 0x08883a20u; c->r[5] = c->r[5] + 0x00003d74u; func_089c35a0(c, ram); }
    c->r[3] = mem_r8(ram, c->r[2] + 0x00000000u);
    c->r[2] = 0u + 0x000000ffu;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_08883ed0; }
    c->r[4] = 0x08a60000u;
    c->r[4] = c->r[4] + 0x00005260u;
    c->r[5] = 0x08a40000u;
    { c->r[31] = 0x08883a44u; c->r[5] = c->r[5] + 0x00003d7cu; func_089d705c(c, ram); }
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000010u);
    mem_w32(ram, c->r[30] + 0x00000028u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000028u);
    mem_w32(ram, c->r[30] + 0x0000002cu, c->r[2]);
    c->r[4] = 0x08a70000u;
    { c->r[31] = 0x08883a60u; c->r[4] = c->r[4] + 0xffffb640u; func_0888da7c(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000030u, c->r[2]);
    c->r[4] = 0x08a60000u;
    c->r[4] = c->r[4] + 0x00005260u;
    c->r[5] = 0x08a40000u;
    { c->r[31] = 0x08883a78u; c->r[5] = c->r[5] + 0x00003d88u; func_089d705c(c, ram); }
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000010u);
    mem_w32(ram, c->r[30] + 0x00000060u, c->r[2]);
    c->r[4] = 0x08a60000u;
    c->r[4] = c->r[4] + 0x00005260u;
    c->r[5] = 0x08a40000u;
    { c->r[31] = 0x08883a94u; c->r[5] = c->r[5] + 0x00003d98u; func_089d705c(c, ram); }
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000010u);
    mem_w32(ram, c->r[30] + 0x00000064u, c->r[2]);
    c->r[4] = 0x08a60000u;
    c->r[4] = c->r[4] + 0x00005260u;
    c->r[5] = 0x08a40000u;
    { c->r[31] = 0x08883ab0u; c->r[5] = c->r[5] + 0x00003da8u; func_089d705c(c, ram); }
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000010u);
    mem_w32(ram, c->r[30] + 0x00000068u, c->r[2]);
    c->r[4] = 0x08a60000u;
    c->r[4] = c->r[4] + 0x00005260u;
    c->r[5] = 0x08a40000u;
    { c->r[31] = 0x08883accu; c->r[5] = c->r[5] + 0x00003db8u; func_089d705c(c, ram); }
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000010u);
    mem_w32(ram, c->r[30] + 0x0000006cu, c->r[2]);
    c->r[4] = 0x08a60000u;
    c->r[4] = c->r[4] + 0x00005260u;
    c->r[5] = 0x08a40000u;
    { c->r[31] = 0x08883ae8u; c->r[5] = c->r[5] + 0x00003dc8u; func_089d705c(c, ram); }
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000010u);
    mem_w32(ram, c->r[30] + 0x00000070u, c->r[2]);
    c->r[4] = 0x08a60000u;
    c->r[4] = c->r[4] + 0x00005260u;
    c->r[5] = 0x08a40000u;
    { c->r[31] = 0x08883b04u; c->r[5] = c->r[5] + 0x00003dd8u; func_089d705c(c, ram); }
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000010u);
    mem_w32(ram, c->r[30] + 0x00000074u, c->r[2]);
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
    c->r[4] = 0x08a60000u;
    c->r[4] = c->r[4] + 0x00005260u;
    c->r[5] = 0x08a40000u;
    { c->r[31] = 0x08883b50u; c->r[5] = c->r[5] + 0x00003de8u; func_089d705c(c, ram); }
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000010u);
    mem_w32(ram, c->r[30] + 0x00000080u, c->r[2]);
    c->r[4] = 0x08a60000u;
    c->r[4] = c->r[4] + 0x00005260u;
    c->r[5] = 0x08a40000u;
    { c->r[31] = 0x08883b6cu; c->r[5] = c->r[5] + 0x00003df4u; func_089d705c(c, ram); }
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000010u);
    mem_w32(ram, c->r[30] + 0x00000084u, c->r[2]);
    c->r[4] = 0x08a60000u;
    c->r[4] = c->r[4] + 0x00005260u;
    c->r[5] = 0x08a40000u;
    { c->r[31] = 0x08883b88u; c->r[5] = c->r[5] + 0x00003e00u; func_089d705c(c, ram); }
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000010u);
    mem_w32(ram, c->r[30] + 0x00000088u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000080u);
    mem_w32(ram, c->r[30] + 0x00000060u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000084u);
    mem_w32(ram, c->r[30] + 0x00000064u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000088u);
    mem_w32(ram, c->r[30] + 0x00000068u, c->r[2]);
    c->r[4] = 0x08a60000u;
    c->r[4] = c->r[4] + 0x00005260u;
    c->r[5] = 0x08a40000u;
    { c->r[31] = 0x08883bbcu; c->r[5] = c->r[5] + 0x00003d74u; func_089d705c(c, ram); }
    c->r[18] = c->r[2] + 0u;
    c->r[4] = 0x08a60000u;
    c->r[4] = c->r[4] + 0x00005260u;
    c->r[5] = 0x08a40000u;
    { c->r[31] = 0x08883bd4u; c->r[5] = c->r[5] + 0x00003e0cu; func_089d705c(c, ram); }
    c->r[16] = c->r[2] + 0u;
    c->r[4] = 0x08a60000u;
    c->r[4] = c->r[4] + 0x00005260u;
    c->r[5] = 0x08a40000u;
    { c->r[31] = 0x08883becu; c->r[5] = c->r[5] + 0x00003e18u; func_089d705c(c, ram); }
    c->r[17] = c->r[2] + 0u;
    c->r[4] = 0x08a60000u;
    c->r[4] = c->r[4] + 0x00005260u;
    c->r[5] = 0x08a40000u;
    { c->r[31] = 0x08883c04u; c->r[5] = c->r[5] + 0x00003e24u; func_089d705c(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[10] = c->r[30] + 0x00000040u;
    c->r[11] = c->r[30] + 0x00000060u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000034u);
    mem_w32(ram, c->r[29] + 0x00000000u, c->r[2]);
    c->r[2] = c->r[30] + 0x00000030u;
    mem_w32(ram, c->r[29] + 0x00000004u, c->r[2]);
    c->r[4] = 0x08a90000u;
    c->r[4] = c->r[4] + 0xffffe820u;
    c->r[5] = mem_r32(ram, c->r[30] + 0x0000002cu);
    c->r[6] = mem_r32(ram, c->r[18] + 0x00000010u);
    c->r[7] = mem_r32(ram, c->r[16] + 0x00000010u);
    c->r[8] = mem_r32(ram, c->r[17] + 0x00000010u);
    { c->r[31] = 0x08883c44u; c->r[9] = mem_r32(ram, c->r[3] + 0x00000010u); func_0888de58(c, ram); }
    mem_w32(ram, c->r[30] + 0x0000002cu, c->r[2]);
    c->r[4] = 0x08a60000u;
    c->r[4] = c->r[4] + 0x00005260u;
    c->r[5] = 0x08a40000u;
    { c->r[31] = 0x08883c5cu; c->r[5] = c->r[5] + 0x00003e30u; func_089d705c(c, ram); }
    c->r[4] = 0x08a90000u;
    c->r[4] = c->r[4] + 0xffffeb04u;
    c->r[5] = mem_r32(ram, c->r[30] + 0x0000002cu);
    { c->r[31] = 0x08883c70u; c->r[6] = mem_r32(ram, c->r[2] + 0x00000010u); func_0888fce4(c, ram); }
    mem_w32(ram, c->r[30] + 0x0000002cu, c->r[2]);
    c->r[4] = 0x08a90000u;
    { c->r[31] = 0x08883c80u; c->r[4] = c->r[4] + 0xffffeae0u; func_0888dad4(c, ram); }
    c->r[4] = 0x08a60000u;
    c->r[4] = c->r[4] + 0x00005260u;
    c->r[5] = 0x08a40000u;
    { c->r[31] = 0x08883c94u; c->r[5] = c->r[5] + 0x00003e3cu; func_089d705c(c, ram); }
    { int _c = (c->r[2] == 0u); if (_c) goto L_08883db4; }
    c->r[2] = c->r[30] + 0x00000080u;
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0u + 0u;
    { c->r[31] = 0x08883cb0u; c->r[6] = 0u + 0x0000000cu; func_08a19ec4(c, ram); }
    c->r[4] = 0x08a60000u;
    c->r[4] = c->r[4] + 0x00005260u;
    c->r[5] = 0x08a40000u;
    { c->r[31] = 0x08883cc4u; c->r[5] = c->r[5] + 0x00003e44u; func_089d705c(c, ram); }
    { int _c = (c->r[2] == 0u); if (_c) goto L_08883ce8; }
    c->r[4] = 0x08a60000u;
    c->r[4] = c->r[4] + 0x00005260u;
    c->r[5] = 0x08a40000u;
    { c->r[31] = 0x08883ce0u; c->r[5] = c->r[5] + 0x00003e44u; func_089d705c(c, ram); }
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000010u);
    mem_w32(ram, c->r[30] + 0x00000080u, c->r[2]);
L_08883ce8:
    c->r[4] = 0x08a60000u;
    c->r[4] = c->r[4] + 0x00005260u;
    c->r[5] = 0x08a40000u;
    { c->r[31] = 0x08883cfcu; c->r[5] = c->r[5] + 0x00003e50u; func_089d705c(c, ram); }
    { int _c = (c->r[2] == 0u); if (_c) goto L_08883d20; }
    c->r[4] = 0x08a60000u;
    c->r[4] = c->r[4] + 0x00005260u;
    c->r[5] = 0x08a40000u;
    { c->r[31] = 0x08883d18u; c->r[5] = c->r[5] + 0x00003e50u; func_089d705c(c, ram); }
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000010u);
    mem_w32(ram, c->r[30] + 0x00000084u, c->r[2]);
L_08883d20:
    c->r[4] = 0x08a60000u;
    c->r[4] = c->r[4] + 0x00005260u;
    c->r[5] = 0x08a40000u;
    { c->r[31] = 0x08883d34u; c->r[5] = c->r[5] + 0x00003e60u; func_089d705c(c, ram); }
    { int _c = (c->r[2] == 0u); if (_c) goto L_08883d58; }
    c->r[4] = 0x08a60000u;
    c->r[4] = c->r[4] + 0x00005260u;
    c->r[5] = 0x08a40000u;
    { c->r[31] = 0x08883d50u; c->r[5] = c->r[5] + 0x00003e60u; func_089d705c(c, ram); }
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000010u);
    mem_w32(ram, c->r[30] + 0x00000088u, c->r[2]);
L_08883d58:
    c->r[4] = 0x08a60000u;
    c->r[4] = c->r[4] + 0x00005260u;
    c->r[5] = 0x08a40000u;
    { c->r[31] = 0x08883d6cu; c->r[5] = c->r[5] + 0x00003e3cu; func_089d705c(c, ram); }
    c->r[16] = c->r[2] + 0u;
    c->r[4] = 0x08a60000u;
    c->r[4] = c->r[4] + 0x00005260u;
    c->r[5] = 0x08a40000u;
    { c->r[31] = 0x08883d84u; c->r[5] = c->r[5] + 0x00003e0cu; func_089d705c(c, ram); }
    c->r[8] = c->r[2] + 0u;
    c->r[2] = c->r[30] + 0x00000080u;
    c->r[3] = c->r[30] + 0x00000030u;
    c->r[4] = 0x08a90000u;
    c->r[4] = c->r[4] + 0xffffeae0u;
    c->r[5] = mem_r32(ram, c->r[30] + 0x0000002cu);
    c->r[6] = mem_r32(ram, c->r[16] + 0x00000010u);
    c->r[7] = c->r[2] + 0u;
    c->r[8] = mem_r32(ram, c->r[8] + 0x00000010u);
    { c->r[31] = 0x08883db0u; c->r[9] = c->r[3] + 0u; func_0888dafc(c, ram); }
    mem_w32(ram, c->r[30] + 0x0000002cu, c->r[2]);
L_08883db4:
    c->r[4] = 0x08a90000u;
    { c->r[31] = 0x08883dc0u; c->r[4] = c->r[4] + 0xffffeb1cu; func_088900ac(c, ram); }
    c->r[4] = 0x08a60000u;
    c->r[4] = c->r[4] + 0x00005260u;
    c->r[5] = 0x08a40000u;
    { c->r[31] = 0x08883dd4u; c->r[5] = c->r[5] + 0x00003e70u; func_089d705c(c, ram); }
    { int _c = (c->r[2] == 0u); if (_c) goto L_08883ed0; }
    c->r[2] = c->r[30] + 0x00000080u;
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0u + 0u;
    { c->r[31] = 0x08883df0u; c->r[6] = 0u + 0x0000000cu; func_08a19ec4(c, ram); }
    c->r[4] = 0x08a60000u;
    c->r[4] = c->r[4] + 0x00005260u;
    c->r[5] = 0x08a40000u;
    { c->r[31] = 0x08883e04u; c->r[5] = c->r[5] + 0x00003e78u; func_089d705c(c, ram); }
    { int _c = (c->r[2] == 0u); if (_c) goto L_08883e28; }
    c->r[4] = 0x08a60000u;
    c->r[4] = c->r[4] + 0x00005260u;
    c->r[5] = 0x08a40000u;
    { c->r[31] = 0x08883e20u; c->r[5] = c->r[5] + 0x00003e78u; func_089d705c(c, ram); }
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000010u);
    mem_w32(ram, c->r[30] + 0x00000080u, c->r[2]);
L_08883e28:
    c->r[4] = 0x08a60000u;
    c->r[4] = c->r[4] + 0x00005260u;
    c->r[5] = 0x08a40000u;
    { c->r[31] = 0x08883e3cu; c->r[5] = c->r[5] + 0x00003e84u; func_089d705c(c, ram); }
    { int _c = (c->r[2] == 0u); if (_c) goto L_08883e60; }
    c->r[4] = 0x08a60000u;
    c->r[4] = c->r[4] + 0x00005260u;
    c->r[5] = 0x08a40000u;
    { c->r[31] = 0x08883e58u; c->r[5] = c->r[5] + 0x00003e84u; func_089d705c(c, ram); }
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000010u);
    mem_w32(ram, c->r[30] + 0x00000084u, c->r[2]);
L_08883e60:
    c->r[4] = 0x08a60000u;
    c->r[4] = c->r[4] + 0x00005260u;
    c->r[5] = 0x08a40000u;
    { c->r[31] = 0x08883e74u; c->r[5] = c->r[5] + 0x00003e94u; func_089d705c(c, ram); }
    { int _c = (c->r[2] == 0u); if (_c) goto L_08883e98; }
    c->r[4] = 0x08a60000u;
    c->r[4] = c->r[4] + 0x00005260u;
    c->r[5] = 0x08a40000u;
    { c->r[31] = 0x08883e90u; c->r[5] = c->r[5] + 0x00003e94u; func_089d705c(c, ram); }
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000010u);
    mem_w32(ram, c->r[30] + 0x00000088u, c->r[2]);
L_08883e98:
    c->r[4] = 0x08a60000u;
    c->r[4] = c->r[4] + 0x00005260u;
    c->r[5] = 0x08a40000u;
    { c->r[31] = 0x08883eacu; c->r[5] = c->r[5] + 0x00003e70u; func_089d705c(c, ram); }
    c->r[3] = c->r[30] + 0x00000080u;
    c->r[8] = c->r[30] + 0x00000030u;
    c->r[4] = 0x08a90000u;
    c->r[4] = c->r[4] + 0xffffeb1cu;
    c->r[5] = mem_r32(ram, c->r[30] + 0x0000002cu);
    c->r[6] = mem_r32(ram, c->r[2] + 0x00000010u);
    { c->r[31] = 0x08883eccu; c->r[7] = c->r[3] + 0u; func_088900d4(c, ram); }
    mem_w32(ram, c->r[30] + 0x0000002cu, c->r[2]);
L_08883ed0:
    { c->r[31] = 0x08883ed8u; func_08941c48(c, ram); }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[5] = 0x08a40000u;
    { c->r[31] = 0x08883ee8u; c->r[5] = c->r[5] + 0x00003e30u; func_089c35a0(c, ram); }
    c->r[1] = 0x08a90000u;
    mem_w32(ram, c->r[1] + 0xffffe654u, c->r[2]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[5] = 0x08a40000u;
    { c->r[31] = 0x08883f00u; c->r[5] = c->r[5] + 0x00003de8u; func_089c35a0(c, ram); }
    c->r[1] = 0x08a90000u;
    mem_w32(ram, c->r[1] + 0xffffe658u, c->r[2]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[5] = 0x08a40000u;
    { c->r[31] = 0x08883f18u; c->r[5] = c->r[5] + 0x00003df4u; func_089c35a0(c, ram); }
    c->r[1] = 0x08a90000u;
    mem_w32(ram, c->r[1] + 0xffffe65cu, c->r[2]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[5] = 0x08a40000u;
    { c->r[31] = 0x08883f30u; c->r[5] = c->r[5] + 0x00003e00u; func_089c35a0(c, ram); }
    c->r[1] = 0x08a90000u;
    mem_w32(ram, c->r[1] + 0xffffe660u, c->r[2]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[5] = 0x08a40000u;
    { c->r[31] = 0x08883f48u; c->r[5] = c->r[5] + 0x00003e0cu; func_089c35a0(c, ram); }
    c->r[1] = 0x08a90000u;
    mem_w32(ram, c->r[1] + 0xffffe664u, c->r[2]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[5] = 0x08a40000u;
    { c->r[31] = 0x08883f60u; c->r[5] = c->r[5] + 0x00003d74u; func_089c35a0(c, ram); }
    c->r[1] = 0x08a90000u;
    mem_w32(ram, c->r[1] + 0xffffe668u, c->r[2]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[5] = 0x08a40000u;
    { c->r[31] = 0x08883f78u; c->r[5] = c->r[5] + 0x00003e3cu; func_089c35a0(c, ram); }
    c->r[1] = 0x08a90000u;
    mem_w32(ram, c->r[1] + 0xffffe66cu, c->r[2]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[5] = 0x08a40000u;
    { c->r[31] = 0x08883f90u; c->r[5] = c->r[5] + 0x00003e70u; func_089c35a0(c, ram); }
    c->r[1] = 0x08a90000u;
    mem_w32(ram, c->r[1] + 0xffffe670u, c->r[2]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[5] = 0x08a40000u;
    { c->r[31] = 0x08883fa8u; c->r[5] = c->r[5] + 0x00003e18u; func_089c35a0(c, ram); }
    c->r[1] = 0x08a90000u;
    mem_w32(ram, c->r[1] + 0xffffe6b4u, c->r[2]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[5] = 0x08a40000u;
    { c->r[31] = 0x08883fc0u; c->r[5] = c->r[5] + 0x00003ea4u; func_089c35a0(c, ram); }
    c->r[1] = 0x08a90000u;
    mem_w32(ram, c->r[1] + 0xffffe6b8u, c->r[2]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[5] = 0x08a40000u;
    { c->r[31] = 0x08883fd8u; c->r[5] = c->r[5] + 0x00003e24u; func_089c35a0(c, ram); }
    c->r[1] = 0x08a90000u;
    mem_w32(ram, c->r[1] + 0xffffe674u, c->r[2]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[5] = 0x08a40000u;
    { c->r[31] = 0x08883ff0u; c->r[5] = c->r[5] + 0x00003d88u; func_089c35a0(c, ram); }
    c->r[1] = 0x08a90000u;
    mem_w32(ram, c->r[1] + 0xffffe678u, c->r[2]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[5] = 0x08a40000u;
    { c->r[31] = 0x08884008u; c->r[5] = c->r[5] + 0x00003d98u; func_089c35a0(c, ram); }
    c->r[1] = 0x08a90000u;
    mem_w32(ram, c->r[1] + 0xffffe67cu, c->r[2]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[5] = 0x08a40000u;
    { c->r[31] = 0x08884020u; c->r[5] = c->r[5] + 0x00003da8u; func_089c35a0(c, ram); }
    c->r[1] = 0x08a90000u;
    mem_w32(ram, c->r[1] + 0xffffe680u, c->r[2]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[5] = 0x08a40000u;
    { c->r[31] = 0x08884038u; c->r[5] = c->r[5] + 0x00003db8u; func_089c35a0(c, ram); }
    c->r[1] = 0x08a90000u;
    mem_w32(ram, c->r[1] + 0xffffe684u, c->r[2]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[5] = 0x08a40000u;
    { c->r[31] = 0x08884050u; c->r[5] = c->r[5] + 0x00003dc8u; func_089c35a0(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000030u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000030u);
    c->r[1] = 0x08a90000u;
    mem_w32(ram, c->r[1] + 0xffffe688u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000030u);
    c->r[2] = 0x00040000u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[1] = 0x08a90000u;
    mem_w32(ram, c->r[1] + 0xffffe68cu, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000030u);
    c->r[2] = 0x00080000u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[1] = 0x08a90000u;
    mem_w32(ram, c->r[1] + 0xffffe690u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000030u);
    c->r[2] = 0x000c0000u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[1] = 0x08a90000u;
    mem_w32(ram, c->r[1] + 0xffffe694u, c->r[2]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[5] = 0x08a40000u;
    { c->r[31] = 0x088840acu; c->r[5] = c->r[5] + 0x00003dd8u; func_089c35a0(c, ram); }
    mem_w32(ram, c->r[30] + 0x0000002cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000002cu);
    c->r[1] = 0x08a90000u;
    mem_w32(ram, c->r[1] + 0xffffe698u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000002cu);
    c->r[2] = 0x00010000u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[1] = 0x08a90000u;
    mem_w32(ram, c->r[1] + 0xffffe69cu, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000002cu);
    c->r[2] = 0x00020000u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[1] = 0x08a90000u;
    mem_w32(ram, c->r[1] + 0xffffe6a0u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000002cu);
    c->r[2] = 0x00030000u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[1] = 0x08a90000u;
    mem_w32(ram, c->r[1] + 0xffffe6a4u, c->r[2]);
    c->r[2] = 0x08a90000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0xffffe678u);
    c->r[1] = 0x08a90000u;
    mem_w32(ram, c->r[1] + 0xffffe6a8u, c->r[2]);
    c->r[2] = 0x08a90000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0xffffe688u);
    c->r[1] = 0x08a90000u;
    mem_w32(ram, c->r[1] + 0xffffe6acu, c->r[2]);
    c->r[2] = 0x08a90000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0xffffe698u);
    c->r[1] = 0x08a90000u;
    mem_w32(ram, c->r[1] + 0xffffe6b0u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = 0x08a90000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0xffffe664u);
    { c->r[31] = 0x0888413cu; mem_w32(ram, c->r[3] + 0x00000000u, c->r[2]); func_08883298(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000028u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000028u);
    c->r[3] = mem_r8(ram, c->r[2] + 0x00000000u);
    c->r[2] = 0u + 0x000000ffu;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_08884300; }
    { c->r[31] = 0x0888415cu; func_08883298(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000028u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000010u);
    c->r[2] = c->r[3] + c->r[2];
    mem_w32(ram, c->r[30] + 0x00000090u, c->r[2]);
    c->r[4] = 0x08a70000u;
    { c->r[31] = 0x0888417cu; c->r[4] = c->r[4] + 0xffffb640u; func_0888da7c(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000094u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000028u);
    c->r[3] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x00000008u);
    c->r[2] = 0u + 0x00000118u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[2] = c->lo;
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000094u);
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000090u);
    { c->r[31] = 0x088841a4u; c->r[6] = c->r[2] + 0u; func_08a19db8(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000094u);
    c->r[1] = 0x08a90000u;
    mem_w32(ram, c->r[1] + 0xffffe6c8u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000028u);
    c->r[3] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x00000008u);
    c->r[2] = 0u + 0x00000118u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[3] = c->lo;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000094u);
    c->r[2] = c->r[2] + c->r[3];
    { c->r[31] = 0x088841d4u; mem_w32(ram, c->r[30] + 0x00000094u, c->r[2]); func_088832bc(c, ram); }
    { int _c = (c->r[2] == 0u); if (_c) goto L_08884258; }
    { c->r[31] = 0x088841e4u; func_088832bc(c, ram); }
    { c->r[31] = 0x088841ecu; mem_w32(ram, c->r[30] + 0x00000098u, c->r[2]); func_088832bc(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000098u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000008u);
    c->r[2] = c->r[3] + c->r[2];
    mem_w32(ram, c->r[30] + 0x00000090u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000098u);
    c->r[3] = mem_r16(ram, c->r[2] + 0x00000006u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[3];
    c->r[2] = c->r[2] << 2;
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000094u);
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000090u);
    { c->r[31] = 0x08884228u; c->r[6] = c->r[2] + 0u; func_08a19db8(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000094u);
    c->r[1] = 0x08a90000u;
    mem_w32(ram, c->r[1] + 0xffffe6ccu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000098u);
    c->r[3] = mem_r16(ram, c->r[2] + 0x00000006u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 2;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000094u);
    c->r[2] = c->r[2] + c->r[3];
    mem_w32(ram, c->r[30] + 0x00000094u, c->r[2]);
L_08884258:
    { c->r[31] = 0x08884260u; func_088832e0(c, ram); }
    { int _c = (c->r[2] == 0u); if (_c) goto L_088842c0; }
    { c->r[31] = 0x08884270u; func_088832e0(c, ram); }
    { c->r[31] = 0x08884278u; mem_w32(ram, c->r[30] + 0x00000098u, c->r[2]); func_088832e0(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000098u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000001cu);
    c->r[2] = c->r[3] + c->r[2];
    mem_w32(ram, c->r[30] + 0x00000090u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000098u);
    c->r[3] = mem_r16(ram, c->r[2] + 0x0000000eu);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[3];
    c->r[2] = c->r[2] << 2;
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000094u);
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000090u);
    { c->r[31] = 0x088842b4u; c->r[6] = c->r[2] + 0u; func_08a19db8(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000094u);
    c->r[1] = 0x08a90000u;
    mem_w32(ram, c->r[1] + 0xffffe6d0u, c->r[2]);
L_088842c0:
    { c->r[31] = 0x088842c8u; func_08883400(c, ram); }
    c->r[1] = 0x08a90000u;
    { c->r[31] = 0x088842d4u; mem_w32(ram, c->r[1] + 0xffffe6d4u, c->r[2]); func_08883400(c, ram); }
    c->r[2] = c->r[2] + 0x000000c8u;
    c->r[1] = 0x08a90000u;
    { c->r[31] = 0x088842e4u; mem_w32(ram, c->r[1] + 0xffffe6d8u, c->r[2]); func_088870c0(c, ram); }
    { c->r[31] = 0x088842ecu; func_088881f8(c, ram); }
    { c->r[31] = 0x088842f4u; func_08888314(c, ram); }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000028u);
    c->r[2] = 0u + 0xffffffffu;
    mem_w8(ram, c->r[3] + 0x00000000u, c->r[2]);
L_08884300:
    { c->r[31] = 0x08884308u; func_088834c4(c, ram); }
    { c->r[31] = 0x08884310u; func_08882fcc(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[3] = mem_r32(ram, c->r[2] + 0x00000024u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000028u);
    c->r[4] = 0x08a90000u;
    c->r[4] = c->r[4] + 0xffffe820u;
    c->f[12] = mem_rf32(ram, c->r[3] + 0x00000000u);
    c->f[13] = mem_rf32(ram, c->r[2] + 0x00000000u);
    { c->r[31] = 0x08884338u; c->r[5] = 0u + 0x00000001u; func_0888e5bc(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000024u);
    c->r[3] = c->r[2] + 0x00000004u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000028u);
    c->r[2] = c->r[2] + 0x00000004u;
    c->r[4] = 0x08a90000u;
    c->r[4] = c->r[4] + 0xffffe820u;
    c->f[12] = mem_rf32(ram, c->r[3] + 0x00000000u);
    c->f[13] = mem_rf32(ram, c->r[2] + 0x00000000u);
    { c->r[31] = 0x08884368u; c->r[5] = 0u + 0x00000001u; func_0888e628(c, ram); }
    c->r[4] = 0x08a60000u;
    c->r[4] = c->r[4] + 0x00005260u;
    c->r[5] = 0x08a40000u;
    { c->r[31] = 0x0888437cu; c->r[5] = c->r[5] + 0x00003e3cu; func_089d705c(c, ram); }
    { int _c = (c->r[2] == 0u); if (_c) goto L_088843b4; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000024u);
    c->r[3] = c->r[2] + 0x00000008u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000028u);
    c->r[2] = c->r[2] + 0x00000008u;
    c->r[4] = 0x08a90000u;
    c->r[4] = c->r[4] + 0xffffeae0u;
    c->f[12] = mem_rf32(ram, c->r[3] + 0x00000000u);
    c->f[13] = mem_rf32(ram, c->r[2] + 0x00000000u);
    { c->r[31] = 0x088843b4u; c->r[5] = 0u + 0x00000001u; func_0888dd28(c, ram); }
L_088843b4:
    c->r[4] = 0x08a60000u;
    c->r[4] = c->r[4] + 0x00005260u;
    c->r[5] = 0x08a40000u;
    { c->r[31] = 0x088843c8u; c->r[5] = c->r[5] + 0x00003e70u; func_089d705c(c, ram); }
    { int _c = (c->r[2] == 0u); if (_c) goto L_08884400; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000024u);
    c->r[3] = c->r[2] + 0x0000000cu;
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000028u);
    c->r[2] = c->r[2] + 0x0000000cu;
    c->r[4] = 0x08a90000u;
    c->r[4] = c->r[4] + 0xffffeb1cu;
    c->f[12] = mem_rf32(ram, c->r[3] + 0x00000000u);
    c->f[13] = mem_rf32(ram, c->r[2] + 0x00000000u);
    { c->r[31] = 0x08884400u; c->r[5] = 0u + 0x00000001u; func_0889035c(c, ram); }
L_08884400:
    c->r[4] = 0x08a90000u;
    { c->r[31] = 0x0888440cu; c->r[4] = c->r[4] + 0xffffe820u; func_0888e694(c, ram); }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000010u);
    { c->r[31] = 0x08884418u; c->r[5] = 0u + 0x00000004u; func_088679a0(c, ram); }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000010u);
    { c->r[31] = 0x08884424u; c->r[5] = 0u + 0u; func_088679d4(c, ram); }
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00003ebcu);
    c->r[1] = 0x08a70000u;
    mem_wf32(ram, c->r[1] + 0xffffb650u, c->f[0]);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00003ec0u);
    c->r[1] = 0x08a70000u;
    mem_wf32(ram, c->r[1] + 0xffffb654u, c->f[0]);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00003ec4u);
    c->r[1] = 0x08a70000u;
    mem_wf32(ram, c->r[1] + 0xffffb658u, c->f[0]);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00003ec8u);
    c->r[1] = 0x08a70000u;
    mem_wf32(ram, c->r[1] + 0xffffb670u, c->f[0]);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00003ec8u);
    c->r[1] = 0x08a70000u;
    mem_wf32(ram, c->r[1] + 0xffffb674u, c->f[0]);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00003ec8u);
    c->r[1] = 0x08a70000u;
    mem_wf32(ram, c->r[1] + 0xffffb678u, c->f[0]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[5] = 0x08a40000u;
    { c->r[31] = 0x08884494u; c->r[5] = c->r[5] + 0x00003eacu; func_089c35a0(c, ram); }
    c->r[2] = c->r[2] & 0xffffu;
    c->r[4] = 0x08a70000u;
    c->r[4] = c->r[4] + 0xffffb640u;
    { c->r[31] = 0x088844a8u; c->r[5] = c->r[2] + 0u; func_0888daac(c, ram); }
    c->r[1] = 0x08a90000u;
    mem_w32(ram, c->r[1] + 0xffffe640u, 0u);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000010u);
    { c->r[31] = 0x088844bcu; c->r[5] = 0u + 0x00000001u; func_08885b34(c, ram); }
    c->r[1] = 0x08a90000u;
    mem_w32(ram, c->r[1] + 0xffffe640u, c->r[2]);
    c->r[1] = 0x08a90000u;
    mem_w32(ram, c->r[1] + 0xffffe644u, 0u);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000010u);
    { c->r[31] = 0x088844d8u; c->r[5] = 0u + 0x00000001u; func_08885ba0(c, ram); }
    c->r[1] = 0x08a90000u;
    mem_w32(ram, c->r[1] + 0xffffe644u, c->r[2]);
    c->r[4] = 0u + 0x0000002eu;
    c->r[5] = 0u + 0x00000004u;
    c->r[6] = 0u + 0u;
    c->r[7] = 0u + 0u;
    c->r[8] = mem_r32(ram, c->r[30] + 0x00000010u);
    { c->r[31] = 0x088844fcu; c->r[9] = 0u + 0u; func_089c6bec(c, ram); }
    c->r[4] = 0u + 0x00000035u;
    c->r[5] = 0u + 0u;
    c->r[6] = 0u + 0u;
    c->r[7] = 0u + 0u;
    c->r[8] = 0u + 0u;
    { c->r[31] = 0x08884518u; c->r[9] = 0u + 0u; func_089c6bec(c, ram); }
    c->r[4] = 0u + 0x00000032u;
    c->r[5] = 0u + 0u;
    c->r[6] = 0u + 0u;
    c->r[7] = 0u + 0u;
    c->r[8] = 0u + 0u;
    { c->r[31] = 0x08884534u; c->r[9] = 0u + 0u; func_089c6bec(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[1] = 0x08a90000u;
    mem_w32(ram, c->r[1] + 0xffffe63cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    { c->r[31] = 0x0888454cu; mem_w8(ram, c->r[2] + 0x00000038u, 0u); func_089b974c(c, ram); }
    { goto L_08885a88; }
L_08884554:
    { c->r[31] = 0x0888455cu; func_08820f58(c, ram); }
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000020u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00003eccu);
    c->f[0] = c->f[1] / c->f[0];
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    c->r[2] = f2u(c->f[0]);
    c->r[1] = 0x08a90000u;
    { c->r[31] = 0x08884580u; mem_w16(ram, c->r[1] + 0xffffe648u, c->r[2]); func_08820f58(c, ram); }
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000028u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00003eccu);
    c->f[0] = c->f[1] / c->f[0];
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    c->r[3] = f2u(c->f[0]);
    c->r[1] = 0x08a90000u;
    mem_w16(ram, c->r[1] + 0xffffe64au, c->r[3]);
    mem_w32(ram, c->r[30] + 0x00000098u, 0u);
L_088845a4:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000098u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000019u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_088845bc; }
    { goto L_08884614; }
L_088845bc:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000098u);
    c->r[2] = 0u + 0x00000160u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[3] = c->lo;
    c->r[2] = 0x08a90000u;
    c->r[2] = c->r[2] + 0xffffbf90u;
    c->r[4] = c->r[3] + c->r[2];
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000098u);
    c->r[2] = 0u + 0x00000160u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[3] = c->lo;
    c->r[2] = 0x08a90000u;
    c->r[2] = c->r[2] + 0xffffbf90u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[3] = mem_r8(ram, c->r[2] + 0x0000000cu);
    c->r[2] = 0u + 0xfffffffeu;
    c->r[2] = c->r[3] & c->r[2];
    mem_w8(ram, c->r[4] + 0x0000000cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000098u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000098u, c->r[2]); goto L_088845a4; }
L_08884614:
    c->r[4] = 0x08a90000u;
    c->r[4] = c->r[4] + 0xffffe208u;
    c->r[5] = 0u + 0xffffffffu;
    { c->r[31] = 0x08884628u; c->r[6] = 0u + 0x00000032u; func_08a19ec4(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000098u, 0u);
    c->r[2] = 0u + 0xfffffffeu;
    mem_w32(ram, c->r[30] + 0x00000094u, c->r[2]);
L_08884634:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000094u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000003u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_0888464c; }
    { goto L_0888478c; }
L_0888464c:
    c->r[2] = 0u + 0xfffffffeu;
    mem_w32(ram, c->r[30] + 0x00000090u, c->r[2]);
L_08884654:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000090u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000003u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_0888466c; }
    { goto L_0888477c; }
L_0888466c:
    c->r[2] = 0x08a90000u;
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0xffffe648u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000094u);
    c->r[2] = c->r[2] + c->r[3];
    { int _c = ((s32)c->r[2] < 0); if (_c) goto L_0888476c; }
    c->r[2] = 0x08a90000u;
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0xffffe64au);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000090u);
    c->r[2] = c->r[2] + c->r[3];
    { int _c = ((s32)c->r[2] < 0); if (_c) goto L_0888476c; }
    c->r[3] = 0x08a90000u;
    c->r[3] = (u32)(s32)(s16)mem_r16(ram, c->r[3] + 0xffffe648u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000094u);
    c->r[4] = c->r[3] + c->r[2];
    c->r[3] = 0x08a90000u;
    c->r[3] = (u32)(s32)(s16)mem_r16(ram, c->r[3] + 0xffffe64au);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000090u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = c->r[2] << 4;
    c->r[2] = c->r[4] + c->r[2];
    mem_w32(ram, c->r[30] + 0x00000030u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000030u);
    { int _c = ((s32)c->r[2] < 0); if (_c) goto L_0888476c; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000030u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000100u) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_0888476c; }
    c->r[5] = c->r[30] + 0x00000098u;
    c->r[3] = mem_r32(ram, c->r[5] + 0x00000000u);
    c->r[2] = c->r[3] + 0u;
    c->r[4] = c->r[2] << 1;
    c->r[2] = 0x08a90000u;
    c->r[2] = c->r[2] + 0xffffe208u;
    c->r[4] = c->r[4] + c->r[2];
    c->r[2] = mem_r16(ram, c->r[30] + 0x00000030u);
    mem_w16(ram, c->r[4] + 0x00000000u, c->r[2]);
    c->r[3] = c->r[3] + 0x00000001u;
    mem_w32(ram, c->r[5] + 0x00000000u, c->r[3]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000030u);
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08a90000u;
    c->r[2] = c->r[2] + 0xffffe23cu;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_0888476c; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000030u);
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08a90000u;
    c->r[2] = c->r[2] + 0xffffe23cu;
    c->r[2] = c->r[3] + c->r[2];
    c->r[4] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000030u);
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08a90000u;
    c->r[2] = c->r[2] + 0xffffe23cu;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[2] = mem_r8(ram, c->r[2] + 0x0000005cu);
    c->r[2] = c->r[2] | 0x0001u;
    mem_w8(ram, c->r[4] + 0x0000005cu, c->r[2]);
L_0888476c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000090u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000090u, c->r[2]); goto L_08884654; }
L_0888477c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000094u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000094u, c->r[2]); goto L_08884634; }
L_0888478c:
    mem_w32(ram, c->r[30] + 0x00000094u, 0u);
L_08884790:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000094u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000019u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_088847a8; }
    { goto L_0888486c; }
L_088847a8:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000094u);
    c->r[2] = 0u + 0x00000160u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[3] = c->lo;
    c->r[2] = 0x08a90000u;
    c->r[2] = c->r[2] + 0xffffbf90u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r8(ram, c->r[2] + 0x0000000cu);
    c->r[2] = c->r[2] ^ 0x0001u;
    c->r[2] = c->r[2] & 0x0001u;
    c->r[2] = c->r[2] & 0x00ffu;
    { int _c = (c->r[2] == 0u); if (_c) goto L_0888485c; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000094u);
    c->r[2] = 0u + 0x00000160u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[3] = c->lo;
    c->r[2] = 0x08a90000u;
    c->r[2] = c->r[2] + 0xffffbf90u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x0000000cu);
    { int _c = ((s32)c->r[2] >= 0); if (_c) goto L_0888485c; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000094u);
    c->r[2] = 0u + 0x00000160u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[3] = c->lo;
    c->r[2] = 0x08a90000u;
    c->r[2] = c->r[2] + 0xffffbf90u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r8(ram, c->r[2] + 0x0000000du);
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08a90000u;
    c->r[2] = c->r[2] + 0xffffe23cu;
    c->r[2] = c->r[3] + c->r[2];
    mem_w32(ram, c->r[2] + 0x00000000u, 0u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000094u);
    c->r[2] = 0u + 0x00000160u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[3] = c->lo;
    c->r[2] = 0x08a90000u;
    c->r[2] = c->r[2] + 0xffffbf40u;
    c->r[2] = c->r[3] + c->r[2];
    { c->r[31] = 0x0888485cu; c->r[4] = c->r[2] + 0u; func_0888314c(c, ram); }
L_0888485c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000094u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000094u, c->r[2]); goto L_08884790; }
L_0888486c:
    { c->r[31] = 0x08884874u; func_08883298(c, ram); }
    { c->r[31] = 0x0888487cu; mem_w32(ram, c->r[30] + 0x00000094u, c->r[2]); func_088832bc(c, ram); }
    { c->r[31] = 0x08884884u; mem_w32(ram, c->r[30] + 0x00000090u, c->r[2]); func_08883298(c, ram); }
    c->r[2] = c->r[2] + 0x00000020u;
    mem_w32(ram, c->r[30] + 0x00000030u, c->r[2]);
    mem_w32(ram, c->r[30] + 0x0000002cu, 0u);
L_08884890:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000002cu);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000098u);
    c->r[2] = ((s32)c->r[2] < (s32)c->r[3]) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_088848ac; }
    { goto L_08884c24; }
L_088848ac:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000002cu);
    c->r[3] = c->r[2] << 1;
    c->r[2] = 0x08a90000u;
    c->r[2] = c->r[2] + 0xffffe208u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x00000000u);
    mem_w32(ram, c->r[30] + 0x000000f8u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000f8u);
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08a90000u;
    c->r[2] = c->r[2] + 0xffffe23cu;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_08884c14; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000f8u);
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08a90000u;
    c->r[2] = c->r[2] + 0xffffe23cu;
    { c->r[31] = 0x08884900u; c->r[16] = c->r[3] + c->r[2]; func_08883098(c, ram); }
    mem_w32(ram, c->r[16] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000f8u);
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08a90000u;
    c->r[2] = c->r[2] + 0xffffe23cu;
    c->r[2] = c->r[3] + c->r[2];
    c->r[4] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000f8u);
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08a90000u;
    c->r[2] = c->r[2] + 0xffffe23cu;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[2] = mem_r8(ram, c->r[2] + 0x0000005cu);
    c->r[2] = c->r[2] | 0x0001u;
    mem_w8(ram, c->r[4] + 0x0000005cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000f8u);
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08a90000u;
    c->r[2] = c->r[2] + 0xffffe23cu;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x000000f8u);
    mem_w8(ram, c->r[2] + 0x0000005du, c->r[3]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000f8u);
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08a90000u;
    c->r[2] = c->r[2] + 0xffffe23cu;
    c->r[2] = c->r[3] + c->r[2];
    c->r[3] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[2] = 0x08a90000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0xffffe664u);
    c->r[4] = mem_r32(ram, c->r[30] + 0x000000f8u);
    c->r[2] = c->r[4] + c->r[2];
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000000u);
    c->r[2] = c->r[2] + 0xffffffffu;
    mem_w8(ram, c->r[3] + 0x0000005eu, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x000000f8u);
    c->r[2] = (u32)((s32)c->r[3] >> 31);
    c->r[2] = c->r[2] >> 28;
    c->r[4] = mem_r32(ram, c->r[30] + 0x000000f8u);
    c->r[2] = c->r[4] + c->r[2];
    c->r[2] = (u32)((s32)c->r[2] >> 4);
    c->r[2] = c->r[2] << 4;
    c->r[3] = mem_r32(ram, c->r[30] + 0x000000f8u);
    c->r[2] = c->r[3] - c->r[2];
    mem_w32(ram, c->r[30] + 0x00000028u, c->r[2]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x000000f8u);
    c->r[2] = (u32)((s32)c->r[4] >> 31);
    c->r[2] = c->r[2] >> 28;
    c->r[3] = mem_r32(ram, c->r[30] + 0x000000f8u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = (u32)((s32)c->r[2] >> 4);
    mem_w32(ram, c->r[30] + 0x00000024u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000f8u);
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08a90000u;
    c->r[2] = c->r[2] + 0xffffe23cu;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[16] = c->r[2] + 0x00000040u;
    c->r[2] = c->r[30] + 0x00000040u;
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000028u);
    c->f[1] = (f32)(s32)f2u(c->f[0]);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00003ed0u);
    c->f[1] = c->f[1] * c->f[0];
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00003ed4u);
    c->f[2] = c->f[1] * c->f[0];
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000024u);
    c->f[1] = (f32)(s32)f2u(c->f[0]);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00003ed0u);
    c->f[1] = c->f[1] * c->f[0];
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00003ed4u);
    c->f[0] = c->f[1] * c->f[0];
    c->r[4] = c->r[2] + 0u;
    c->f[12] = c->f[2];
    c->f[13] = u2f(0u);
    c->f[14] = c->f[0];
    c->f[15] = u2f(0u);
    { c->r[31] = 0x08884a54u; func_0880d140(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000040u);
    mem_w32(ram, c->r[16] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000044u);
    mem_w32(ram, c->r[16] + 0x00000004u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000048u);
    mem_w32(ram, c->r[16] + 0x00000008u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000004cu);
    mem_w32(ram, c->r[16] + 0x0000000cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000f8u);
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08a90000u;
    c->r[2] = c->r[2] + 0xffffe23cu;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x0000005eu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000030u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000000u);
    mem_w32(ram, c->r[30] + 0x00000020u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000f8u);
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08a90000u;
    c->r[2] = c->r[2] + 0xffffe23cu;
    c->r[2] = c->r[3] + c->r[2];
    { c->r[31] = 0x08884abcu; c->r[16] = mem_r32(ram, c->r[2] + 0x00000000u); func_08883298(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000094u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000000cu);
    c->r[3] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[2] = c->r[2] << 9;
    c->r[2] = c->r[3] + c->r[2];
    mem_w32(ram, c->r[16] + 0x00000050u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000f8u);
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08a90000u;
    c->r[2] = c->r[2] + 0xffffe23cu;
    c->r[2] = c->r[3] + c->r[2];
    { c->r[31] = 0x08884af8u; c->r[16] = mem_r32(ram, c->r[2] + 0x00000000u); func_08883370(c, ram); }
    c->r[4] = c->r[2] + 0u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000f8u);
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08a90000u;
    c->r[2] = c->r[2] + 0xffffe23cu;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x0000005eu);
    c->r[2] = c->r[2] << 9;
    c->r[2] = c->r[4] + c->r[2];
    c->r[2] = c->r[2] + 0x00000010u;
    mem_w32(ram, c->r[16] + 0x00000054u, c->r[2]);
    c->r[2] = 0x08a90000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0xffffe66cu);
    { int _c = (c->r[2] == 0u); if (_c) goto L_08884bf8; }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000090u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000f8u);
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08a90000u;
    c->r[2] = c->r[2] + 0xffffe23cu;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x0000005eu);
    c->r[2] = c->r[2] + c->r[4];
    c->r[2] = c->r[2] + 0x00000011u;
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000000u);
    { int _c = ((s32)c->r[2] < 0); if (_c) goto L_08884bd8; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000f8u);
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08a90000u;
    c->r[2] = c->r[2] + 0xffffe23cu;
    c->r[2] = c->r[3] + c->r[2];
    { c->r[31] = 0x08884b88u; c->r[16] = mem_r32(ram, c->r[2] + 0x00000000u); func_088832bc(c, ram); }
    c->r[5] = c->r[2] + 0u;
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000090u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000f8u);
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08a90000u;
    c->r[2] = c->r[2] + 0xffffe23cu;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x0000005eu);
    c->r[2] = c->r[2] + c->r[4];
    c->r[2] = c->r[2] + 0x00000011u;
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000000u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 5;
    c->r[2] = c->r[2] + c->r[3];
    c->r[2] = c->r[2] << 4;
    c->r[2] = c->r[5] + c->r[2];
    c->r[2] = c->r[2] + 0x00000040u;
    { mem_w32(ram, c->r[16] + 0x00000058u, c->r[2]); goto L_08884c14; }
L_08884bd8:
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000f8u);
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08a90000u;
    c->r[2] = c->r[2] + 0xffffe23cu;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    { mem_w32(ram, c->r[2] + 0x00000058u, 0u); goto L_08884c14; }
L_08884bf8:
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000f8u);
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08a90000u;
    c->r[2] = c->r[2] + 0xffffe23cu;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    mem_w32(ram, c->r[2] + 0x00000058u, 0u);
L_08884c14:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000002cu);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x0000002cu, c->r[2]); goto L_08884890; }
L_08884c24:
    c->r[4] = 0x08a90000u;
    { c->r[31] = 0x08884c30u; c->r[4] = c->r[4] + 0xffffe820u; func_0888e6cc(c, ram); }
    { goto L_08885a88; }
L_08884c38:
    c->r[2] = 0x08a90000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0xffffe640u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_08884c60; }
    c->r[4] = 0x08a90000u;
    c->r[4] = mem_r32(ram, c->r[4] + 0xffffe640u);
    { c->r[31] = 0x08884c58u; c->r[5] = 0u + 0x00000002u; func_0880d260(c, ram); }
    c->r[1] = 0x08a90000u;
    mem_w32(ram, c->r[1] + 0xffffe640u, 0u);
L_08884c60:
    c->r[2] = 0x08a90000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0xffffe644u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_08884c88; }
    c->r[4] = 0x08a90000u;
    c->r[4] = mem_r32(ram, c->r[4] + 0xffffe644u);
    { c->r[31] = 0x08884c80u; c->r[5] = 0u + 0x00000002u; func_0880d260(c, ram); }
    c->r[1] = 0x08a90000u;
    mem_w32(ram, c->r[1] + 0xffffe644u, 0u);
L_08884c88:
    c->r[1] = 0x08a70000u;
    mem_w32(ram, c->r[1] + 0xffffb650u, 0u);
    c->r[1] = 0x08a70000u;
    mem_w32(ram, c->r[1] + 0xffffb654u, 0u);
    c->r[1] = 0x08a70000u;
    mem_w32(ram, c->r[1] + 0xffffb658u, 0u);
    c->r[1] = 0x08a90000u;
    { mem_w32(ram, c->r[1] + 0xffffe63cu, 0u); goto L_08885a88; }
L_08884cac:
    c->r[2] = 0x08a80000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00002ed0u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_08885a88; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = c->r[2] + 0x00000034u;
    mem_w32(ram, c->r[30] + 0x00000098u, c->r[2]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000098u);
    mem_w32(ram, c->r[30] + 0x000000fcu, c->r[4]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000004u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000000u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00003eb4u);
    c->f[1] = c->f[1] * c->f[0];
    mem_wf32(ram, c->r[30] + 0x00000100u, c->f[1]);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00003eb8u);
    mem_wf32(ram, c->r[30] + 0x00000108u, c->f[0]);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000100u);
    c->f[2] = mem_rf32(ram, c->r[30] + 0x00000108u);
    alx_c_cond_s(c, 14, c->f[2], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_08884d20; }
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000100u);
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    { mem_wf32(ram, c->r[30] + 0x00000104u, c->f[0]); goto L_08884d44; }
L_08884d20:
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000100u);
    c->f[2] = mem_rf32(ram, c->r[30] + 0x00000108u);
    c->f[0] = c->f[1] - c->f[2];
    c->r[2] = 0x80000000u;
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    mem_wf32(ram, c->r[30] + 0x00000104u, c->f[0]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000104u);
    c->r[3] = c->r[3] | c->r[2];
    mem_w32(ram, c->r[30] + 0x00000104u, c->r[3]);
L_08884d44:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000104u);
    c->r[4] = mem_r32(ram, c->r[30] + 0x000000fcu);
    mem_w8(ram, c->r[4] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000098u);
    c->r[2] = c->r[2] + 0x00000001u;
    mem_w32(ram, c->r[30] + 0x0000010cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000004u);
    c->r[2] = c->r[2] + 0x00000004u;
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000000u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00003eb4u);
    c->f[1] = c->f[1] * c->f[0];
    mem_wf32(ram, c->r[30] + 0x00000110u, c->f[1]);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00003eb8u);
    mem_wf32(ram, c->r[30] + 0x00000118u, c->f[0]);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000110u);
    c->f[2] = mem_rf32(ram, c->r[30] + 0x00000118u);
    alx_c_cond_s(c, 14, c->f[2], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_08884db0; }
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000110u);
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    { mem_wf32(ram, c->r[30] + 0x00000114u, c->f[0]); goto L_08884dd4; }
L_08884db0:
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000110u);
    c->f[2] = mem_rf32(ram, c->r[30] + 0x00000118u);
    c->f[0] = c->f[1] - c->f[2];
    c->r[2] = 0x80000000u;
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    mem_wf32(ram, c->r[30] + 0x00000114u, c->f[0]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000114u);
    c->r[3] = c->r[3] | c->r[2];
    mem_w32(ram, c->r[30] + 0x00000114u, c->r[3]);
L_08884dd4:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000114u);
    c->r[4] = mem_r32(ram, c->r[30] + 0x0000010cu);
    mem_w8(ram, c->r[4] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000098u);
    c->r[2] = c->r[2] + 0x00000002u;
    mem_w32(ram, c->r[30] + 0x0000011cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000004u);
    c->r[2] = c->r[2] + 0x00000008u;
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000000u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00003eb4u);
    c->f[1] = c->f[1] * c->f[0];
    mem_wf32(ram, c->r[30] + 0x00000120u, c->f[1]);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00003eb8u);
    mem_wf32(ram, c->r[30] + 0x00000128u, c->f[0]);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000120u);
    c->f[2] = mem_rf32(ram, c->r[30] + 0x00000128u);
    alx_c_cond_s(c, 14, c->f[2], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_08884e40; }
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000120u);
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    { mem_wf32(ram, c->r[30] + 0x00000124u, c->f[0]); goto L_08884e64; }
L_08884e40:
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000120u);
    c->f[2] = mem_rf32(ram, c->r[30] + 0x00000128u);
    c->f[0] = c->f[1] - c->f[2];
    c->r[2] = 0x80000000u;
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    mem_wf32(ram, c->r[30] + 0x00000124u, c->f[0]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000124u);
    c->r[3] = c->r[3] | c->r[2];
    mem_w32(ram, c->r[30] + 0x00000124u, c->r[3]);
L_08884e64:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000124u);
    c->r[4] = mem_r32(ram, c->r[30] + 0x0000011cu);
    mem_w8(ram, c->r[4] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000098u);
    c->r[2] = c->r[2] + 0x00000003u;
    mem_w32(ram, c->r[30] + 0x0000012cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000000cu);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000000u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00003eb4u);
    c->f[1] = c->f[1] * c->f[0];
    mem_wf32(ram, c->r[30] + 0x00000130u, c->f[1]);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00003eb8u);
    mem_wf32(ram, c->r[30] + 0x00000138u, c->f[0]);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000130u);
    c->f[2] = mem_rf32(ram, c->r[30] + 0x00000138u);
    alx_c_cond_s(c, 14, c->f[2], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_08884ecc; }
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000130u);
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    { mem_wf32(ram, c->r[30] + 0x00000134u, c->f[0]); goto L_08884ef0; }
L_08884ecc:
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000130u);
    c->f[2] = mem_rf32(ram, c->r[30] + 0x00000138u);
    c->f[0] = c->f[1] - c->f[2];
    c->r[2] = 0x80000000u;
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    mem_wf32(ram, c->r[30] + 0x00000134u, c->f[0]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000134u);
    c->r[3] = c->r[3] | c->r[2];
    mem_w32(ram, c->r[30] + 0x00000134u, c->r[3]);
L_08884ef0:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000134u);
    c->r[4] = mem_r32(ram, c->r[30] + 0x0000012cu);
    { mem_w8(ram, c->r[4] + 0x00000000u, c->r[2]); goto L_08885a88; }
L_08884f00:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000002cu);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[2] = c->r[2] & 0x0008u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_0888523c; }
    { c->r[31] = 0x08884f20u; func_08820f58(c, ram); }
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000024u);
    mem_wf32(ram, c->r[30] + 0x0000009cu, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000020u);
    c->r[2] = c->r[2] + 0x00000004u;
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000000u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00003ed8u);
    c->f[0] = c->f[1] * c->f[0];
    mem_wf32(ram, c->r[30] + 0x000000a0u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000020u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000000u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00003ed8u);
    c->f[0] = c->f[1] * c->f[0];
    mem_wf32(ram, c->r[30] + 0x000000a4u, c->f[0]);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x000000a0u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x000000a4u);
    c->f[0] = c->f[1] - c->f[0];
    mem_wf32(ram, c->r[30] + 0x000000a8u, c->f[0]);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x0000009cu);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x000000a0u);
    alx_c_cond_s(c, 12, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_08884f94; }
    { goto L_08884fa0; }
L_08884f94:
    c->f[0] = mem_rf32(ram, c->r[30] + 0x000000a0u);
    { mem_wf32(ram, c->r[30] + 0x0000013cu, c->f[0]); goto L_08884fa8; }
L_08884fa0:
    c->f[1] = mem_rf32(ram, c->r[30] + 0x0000009cu);
    mem_wf32(ram, c->r[30] + 0x0000013cu, c->f[1]);
L_08884fa8:
    c->f[2] = mem_rf32(ram, c->r[30] + 0x0000013cu);
    mem_wf32(ram, c->r[30] + 0x0000009cu, c->f[2]);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x0000009cu);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x000000a4u);
    alx_c_cond_s(c, 12, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_08884fd0; }
    { goto L_08884fdc; }
L_08884fd0:
    c->f[0] = mem_rf32(ram, c->r[30] + 0x000000a4u);
    { mem_wf32(ram, c->r[30] + 0x00000140u, c->f[0]); goto L_08884fe4; }
L_08884fdc:
    c->f[1] = mem_rf32(ram, c->r[30] + 0x0000009cu);
    mem_wf32(ram, c->r[30] + 0x00000140u, c->f[1]);
L_08884fe4:
    c->f[2] = mem_rf32(ram, c->r[30] + 0x00000140u);
    mem_wf32(ram, c->r[30] + 0x0000009cu, c->f[2]);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x0000009cu);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x000000a4u);
    c->f[1] = c->f[1] - c->f[0];
    c->f[0] = mem_rf32(ram, c->r[30] + 0x000000a8u);
    c->f[0] = c->f[1] / c->f[0];
    mem_wf32(ram, c->r[30] + 0x000000acu, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000014u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000000u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x000000acu);
    c->f[2] = c->f[1] * c->f[0];
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000014u);
    c->r[2] = c->r[2] + 0x00000004u;
    c->r[1] = 0x08a40000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0x00003edcu);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x000000acu);
    c->f[1] = c->f[1] - c->f[0];
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000000u);
    c->f[0] = c->f[1] * c->f[0];
    c->f[1] = c->f[2] + c->f[0];
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00003ee0u);
    c->f[0] = c->f[1] * c->f[0];
    { c->r[31] = 0x08885054u; mem_wf32(ram, c->r[30] + 0x000000b0u, c->f[0]); func_08820f58(c, ram); }
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000024u);
    mem_wf32(ram, c->r[30] + 0x0000009cu, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000001cu);
    c->r[2] = c->r[2] + 0x00000004u;
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000000u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00003ed8u);
    c->f[0] = c->f[1] * c->f[0];
    mem_wf32(ram, c->r[30] + 0x000000a0u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000001cu);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000000u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00003ed8u);
    c->f[0] = c->f[1] * c->f[0];
    mem_wf32(ram, c->r[30] + 0x000000a4u, c->f[0]);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x000000a0u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x000000a4u);
    c->f[0] = c->f[1] - c->f[0];
    mem_wf32(ram, c->r[30] + 0x000000a8u, c->f[0]);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x0000009cu);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x000000a0u);
    alx_c_cond_s(c, 12, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_088850c8; }
    { goto L_088850d4; }
L_088850c8:
    c->f[0] = mem_rf32(ram, c->r[30] + 0x000000a0u);
    { mem_wf32(ram, c->r[30] + 0x00000144u, c->f[0]); goto L_088850dc; }
L_088850d4:
    c->f[1] = mem_rf32(ram, c->r[30] + 0x0000009cu);
    mem_wf32(ram, c->r[30] + 0x00000144u, c->f[1]);
L_088850dc:
    c->f[2] = mem_rf32(ram, c->r[30] + 0x00000144u);
    mem_wf32(ram, c->r[30] + 0x0000009cu, c->f[2]);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x0000009cu);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x000000a4u);
    alx_c_cond_s(c, 12, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_08885104; }
    { goto L_08885110; }
L_08885104:
    c->f[0] = mem_rf32(ram, c->r[30] + 0x000000a4u);
    { mem_wf32(ram, c->r[30] + 0x00000148u, c->f[0]); goto L_08885118; }
L_08885110:
    c->f[1] = mem_rf32(ram, c->r[30] + 0x0000009cu);
    mem_wf32(ram, c->r[30] + 0x00000148u, c->f[1]);
L_08885118:
    c->f[2] = mem_rf32(ram, c->r[30] + 0x00000148u);
    mem_wf32(ram, c->r[30] + 0x0000009cu, c->f[2]);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x0000009cu);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x000000a4u);
    c->f[1] = c->f[1] - c->f[0];
    c->f[0] = mem_rf32(ram, c->r[30] + 0x000000a8u);
    c->f[1] = c->f[1] / c->f[0];
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00003edcu);
    c->f[0] = c->f[0] - c->f[1];
    mem_wf32(ram, c->r[30] + 0x000000acu, c->f[0]);
    c->r[3] = c->r[30] + 0x00000040u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000008u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000000u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x000000acu);
    c->f[3] = c->f[1] * c->f[0];
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000008u);
    c->r[2] = c->r[2] + 0x00000004u;
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000000u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x000000acu);
    c->f[2] = c->f[1] * c->f[0];
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000008u);
    c->r[2] = c->r[2] + 0x00000008u;
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000000u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x000000acu);
    c->f[0] = c->f[1] * c->f[0];
    c->r[1] = 0x08a40000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0x00003ee4u);
    c->r[4] = c->r[3] + 0u;
    c->f[12] = c->f[3];
    c->f[13] = c->f[2];
    c->f[14] = c->f[0];
    { c->r[31] = 0x088851acu; c->f[15] = c->f[1]; func_0880d140(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000010u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000000u);
    mem_wf32(ram, c->r[30] + 0x000000b4u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000018u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000000u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00003ee0u);
    c->f[0] = c->f[1] * c->f[0];
    c->r[1] = 0x08a90000u;
    mem_wf32(ram, c->r[1] + 0xffffeb08u, c->f[0]);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x000000b0u);
    c->r[1] = 0x08a90000u;
    mem_wf32(ram, c->r[1] + 0xffffeb0cu, c->f[0]);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x000000b4u);
    c->r[1] = 0x08a90000u;
    mem_wf32(ram, c->r[1] + 0xffffeb10u, c->f[0]);
    c->r[2] = c->r[30] + 0x00000040u;
    { c->r[31] = 0x08885200u; c->r[4] = c->r[2] + 0u; func_0888d9b8(c, ram); }
    c->r[1] = 0x08a90000u;
    mem_w32(ram, c->r[1] + 0xffffeb18u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000001cu);
    c->r[2] = c->r[2] + 0x00000004u;
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000000u);
    c->r[1] = 0x08a90000u;
    mem_wf32(ram, c->r[1] + 0xffffeb14u, c->f[0]);
    c->r[2] = 0x08a80000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00002f90u);
    c->r[2] = c->r[2] + 0x00000020u;
    c->r[4] = 0x08a90000u;
    c->r[4] = c->r[4] + 0xffffeb04u;
    { c->r[31] = 0x0888523cu; c->r[5] = c->r[2] + 0u; func_0888fd6c(c, ram); }
L_0888523c:
    c->r[2] = 0x08a80000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00002f90u);
    c->r[2] = c->r[2] + 0x00000020u;
    c->r[4] = 0x08a90000u;
    c->r[4] = c->r[4] + 0xffffe820u;
    { c->r[31] = 0x08885258u; c->r[5] = c->r[2] + 0u; func_0888e798(c, ram); }
    c->r[2] = 0x08a80000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00002f90u);
    c->r[2] = c->r[2] + 0x00000020u;
    c->r[4] = 0x08a90000u;
    c->r[4] = c->r[4] + 0xffffe820u;
    { c->r[31] = 0x08885274u; c->r[5] = c->r[2] + 0u; func_0888eae4(c, ram); }
    { goto L_08885a88; }
L_0888527c:
    c->r[4] = 0x08a70000u;
    { c->r[31] = 0x08885288u; c->r[4] = c->r[4] + 0xffffb640u; func_089e11fc(c, ram); }
    { c->r[31] = 0x08885290u; func_088516f8(c, ram); }
    { int _c = (c->r[2] != 0u); if (_c) goto L_088852b0; }
    { c->r[31] = 0x088852a0u; func_08847534(c, ram); }
    { int _c = (c->r[2] != 0u); if (_c) goto L_088852b0; }
    { goto L_088852bc; }
L_088852b0:
    c->r[2] = 0u + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x0000014cu, c->r[2]); goto L_088852c0; }
L_088852bc:
    mem_w32(ram, c->r[30] + 0x0000014cu, 0u);
L_088852c0:
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000014cu);
    mem_w32(ram, c->r[30] + 0x00000098u, c->r[3]);
    c->r[2] = 0x08a80000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00002f90u);
    c->r[2] = c->r[2] + 0x00000020u;
    c->r[4] = 0x08a90000u;
    c->r[4] = c->r[4] + 0xffffe820u;
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x088852e8u; c->r[6] = mem_r32(ram, c->r[30] + 0x00000098u); func_0888f638(c, ram); }
    { goto L_08885a88; }
L_088852f0:
    c->r[4] = 0x08a90000u;
    c->r[4] = c->r[4] + 0xffffe820u;
    c->r[5] = 0x08a90000u;
    { c->r[31] = 0x08885304u; c->r[5] = c->r[5] + 0xffffeae0u; func_0888fa80(c, ram); }
    c->r[2] = 0x08a80000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00002f90u);
    c->r[2] = c->r[2] + 0x00000020u;
    c->r[4] = 0x08a90000u;
    c->r[4] = c->r[4] + 0xffffe820u;
    { c->r[31] = 0x08885320u; c->r[5] = c->r[2] + 0u; func_0888e868(c, ram); }
    { goto L_08885a88; }
L_08885328:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000030u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[2] = c->r[2] & 0x0010u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_08885a88; }
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
    { c->r[31] = 0x08885388u; c->r[5] = 0u + 0x0000000au; func_0888b894(c, ram); }
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
    { c->r[31] = 0x088853d0u; c->r[5] = 0u + 0x00000007u; func_0888b894(c, ram); }
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
    { c->r[31] = 0x08885418u; c->r[5] = 0u + 0x00000001u; func_0888b8d0(c, ram); }
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
    c->r[5] = 0u + 0u;
    c->r[6] = 0u + 0u;
    { c->r[31] = 0x08885468u; c->r[7] = 0u + 0u; func_0888b810(c, ram); }
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
    c->r[5] = 0u + 0x00000002u;
    c->r[6] = 0u + 0x000000ffu;
    { c->r[31] = 0x088854b8u; c->r[7] = 0u + 0x000000ffu; func_0888b7c8(c, ram); }
    c->r[4] = 0x08a70000u;
    c->r[4] = c->r[4] + 0xffffb640u;
    c->r[5] = 0u + 0x00000002u;
    { c->r[31] = 0x088854ccu; c->r[6] = 0u + 0x00000007u; func_089df7a0(c, ram); }
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
    { c->r[31] = 0x08885514u; c->r[5] = 0u + 0x00000009u; func_0888b858(c, ram); }
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
    c->r[6] = 0u + 0u;
    c->r[7] = 0u + 0u;
    { c->r[31] = 0x08885568u; c->r[8] = 0u + 0u; func_0888b920(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000030u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[2] = c->r[2] & 0x0003u;
    mem_w32(ram, c->r[30] + 0x00000098u, c->r[2]);
    mem_w32(ram, c->r[30] + 0x00000094u, 0u);
L_08885580:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000098u);
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08a50000u;
    c->r[2] = c->r[2] + 0x00003e60u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000094u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[2] = ((s32)c->r[3] < (s32)c->r[2]) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_088855b0; }
    { goto L_088857b8; }
L_088855b0:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000030u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[2] = c->r[2] & 0x0004u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_08885670; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000098u);
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08a50000u;
    c->r[2] = c->r[2] + 0x00003e54u;
    c->r[4] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000098u);
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08a50000u;
    c->r[2] = c->r[2] + 0x00003e60u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[3] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000094u);
    c->r[2] = c->r[3] - c->r[2];
    c->r[3] = c->r[2] << 2;
    c->r[2] = mem_r32(ram, c->r[4] + 0x00000000u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = c->r[2] + 0xfffffffcu;
    c->r[3] = 0u + 0x00000100u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[2] = c->r[3] - c->r[2];
    mem_w32(ram, c->r[30] + 0x00000090u, c->r[2]);
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
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000090u);
    { c->r[31] = 0x08885668u; c->r[6] = 0u + 0xfffffff4u; func_089debc4(c, ram); }
    { goto L_088856e0; }
L_08885670:
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
    c->r[5] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000098u);
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08a50000u;
    c->r[2] = c->r[2] + 0x00003e54u;
    c->r[4] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000094u);
    c->r[3] = c->r[2] << 2;
    c->r[2] = mem_r32(ram, c->r[4] + 0x00000000u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[4] = c->r[5] + 0u;
    c->r[5] = mem_r32(ram, c->r[2] + 0x00000000u);
    { c->r[31] = 0x088856e0u; c->r[6] = 0u + 0xfffffff4u; func_089debc4(c, ram); }
L_088856e0:
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
    c->r[5] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000098u);
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08a50000u;
    c->r[2] = c->r[2] + 0x00003e00u;
    c->r[4] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000094u);
    c->r[3] = c->r[2] << 4;
    c->r[2] = mem_r32(ram, c->r[4] + 0x00000000u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[4] = c->r[5] + 0u;
    c->r[5] = 0u + 0u;
    c->r[6] = 0u + 0x00000001u;
    c->r[7] = 0u + 0x00000001u;
    c->r[8] = 0u + 0x00000010u;
    { c->r[31] = 0x0888575cu; c->r[9] = c->r[2] + 0u; func_0888b770(c, ram); }
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
    c->r[5] = 0x08a90000u;
    { c->r[31] = 0x088857a8u; c->r[5] = mem_r32(ram, c->r[5] + 0xffffedf0u); func_0888b6b4(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000094u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000094u, c->r[2]); goto L_08885580; }
L_088857b8:
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
    c->r[6] = 0u + 0x000000ffu;
    { c->r[31] = 0x08885808u; c->r[7] = 0u + 0x000000ffu; func_0888b7c8(c, ram); }
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
    c->r[5] = 0u + 0u;
    c->r[6] = 0u + 0u;
    { c->r[31] = 0x08885858u; c->r[7] = 0u + 0x00000002u; func_0888b810(c, ram); }
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
    { c->r[31] = 0x088858a0u; c->r[5] = 0u + 0u; func_0888b8d0(c, ram); }
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
    { c->r[31] = 0x088858e8u; c->r[5] = 0u + 0x00000007u; func_0888b858(c, ram); }
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
    c->r[5] = 0u + 0u;
    { c->r[31] = 0x08885934u; c->r[6] = 0u + 0xfffffff4u; func_089debc4(c, ram); }
    { goto L_08885a88; }
L_0888593c:
    c->r[2] = 0x000c0000u;
    c->r[2] = c->r[2] | 0xc000u;
    mem_w32(ram, c->r[30] + 0x00000098u, c->r[2]);
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
    c->r[6] = mem_r32(ram, c->r[30] + 0x00000098u);
    { c->r[31] = 0x08885998u; c->r[7] = 0u + 0x00000200u; func_0888b728(c, ram); }
    c->r[2] = 0x08a80000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00002f90u);
    c->r[2] = c->r[2] + 0x00000020u;
    c->r[4] = 0x08a90000u;
    c->r[4] = c->r[4] + 0xffffe820u;
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x088859b8u; c->r[6] = 0u + 0x00000001u; func_0888f638(c, ram); }
    { goto L_08885a88; }
L_088859c0:
    c->r[4] = 0x08a90000u;
    c->r[4] = c->r[4] + 0xffffe820u;
    c->r[5] = 0x08a90000u;
    { c->r[31] = 0x088859d4u; c->r[5] = c->r[5] + 0xffffeae0u; func_0888fa80(c, ram); }
    c->r[2] = 0x08a80000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00002f90u);
    c->r[2] = c->r[2] + 0x00000020u;
    c->r[4] = 0x08a90000u;
    c->r[4] = c->r[4] + 0xffffe820u;
    { c->r[31] = 0x088859f0u; c->r[5] = c->r[2] + 0u; func_0888e868(c, ram); }
    { goto L_08885a88; }
L_088859f8:
    c->r[2] = 0x08b90000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000700u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_08885a20; }
    c->r[2] = 0x00040000u;
    mem_w32(ram, c->r[30] + 0x00000150u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000150u);
    c->r[3] = c->r[3] | 0x4000u;
    { mem_w32(ram, c->r[30] + 0x00000150u, c->r[3]); goto L_08885a24; }
L_08885a20:
    mem_w32(ram, c->r[30] + 0x00000150u, 0u);
L_08885a24:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000150u);
    mem_w32(ram, c->r[30] + 0x00000098u, c->r[4]);
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
    c->r[6] = mem_r32(ram, c->r[30] + 0x00000098u);
    { c->r[31] = 0x08885a7cu; c->r[7] = 0u + 0x00000200u; func_0888b728(c, ram); }
    c->r[4] = 0x08a90000u;
    { c->r[31] = 0x08885a88u; c->r[4] = c->r[4] + 0xffffe820u; func_0888fc70(c, ram); }
L_08885a88:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000170u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x0000016cu);
    c->r[18] = mem_r32(ram, c->r[29] + 0x00000168u);
    c->r[17] = mem_r32(ram, c->r[29] + 0x00000164u);
    c->r[16] = mem_r32(ram, c->r[29] + 0x00000160u);
    { c->r[29] = c->r[29] + 0x00000180u; return; }
    return; /* fell out of func_088835ec */
}

/* func_0888ba9c  0x0888ba9c..0x0888bad0  52 bytes, source=sweep */
void func_0888ba9c(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0888ba9cu);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x0888babcu; c->r[5] = 0x9b000000u; func_0888b984(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_0888ba9c */
}

/* func_0888c68c  0x0888c68c..0x0888c6d0  68 bytes, source=sweep */
void func_0888c68c(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0888c68cu);
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
    { c->r[31] = 0x0888c6bcu; c->r[5] = c->r[2] + 0u; func_0888b984(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_0888c68c */
}

/* func_0888d3a0  0x0888d3a0..0x0888d3e4  68 bytes, source=sweep */
void func_0888d3a0(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0888d3a0u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = 0xe7000000u;
    c->r[2] = c->r[2] | c->r[3];
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x0888d3d0u; c->r[5] = c->r[2] + 0u; func_0888b984(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_0888d3a0 */
}

/* func_0889035c  0x0889035c..0x088903c4  104 bytes, source=fde */
void func_0889035c(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0889035cu);
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
    mem_wf32(ram, c->r[2] + 0x00000020u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000008u);
    mem_wf32(ram, c->r[2] + 0x00000024u, c->f[0]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    mem_w32(ram, c->r[3] + 0x00000028u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x088903b0u; c->r[5] = mem_r32(ram, c->r[2] + 0x00000014u); func_08894f10(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_0889035c */
}

/* func_0889514c  0x0889514c..0x088951dc  144 bytes, source=fde */
void func_0889514c(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0889514cu);
    c->r[29] = c->r[29] + 0xfffffee0u;
    mem_w32(ram, c->r[29] + 0x00000114u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000110u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    c->r[2] = c->r[30] + 0x00000010u;
    c->r[4] = c->r[2] + 0u;
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000004u);
    { c->r[31] = 0x08895178u; c->r[6] = 0x00010000u; func_0888c0e4(c, ram); }
    c->r[2] = c->r[30] + 0x00000010u;
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0u | 0xffdcu;
    { c->r[31] = 0x0889518cu; c->r[6] = 0u + 0x00000064u; func_0888c084(c, ram); }
    c->r[2] = c->r[30] + 0x00000010u;
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0u + 0u;
    { c->r[31] = 0x088951a0u; c->r[6] = 0u + 0xfffffff4u; func_089debc4(c, ram); }
    c->r[2] = c->r[30] + 0x00000010u;
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x088951b0u; c->r[5] = 0u + 0u; func_0888b8d0(c, ram); }
    c->r[2] = c->r[30] + 0x00000010u;
    { c->r[31] = 0x088951bcu; c->r[4] = c->r[2] + 0u; func_0888c250(c, ram); }
    c->r[2] = c->r[30] + 0x00000010u;
    { c->r[31] = 0x088951c8u; c->r[4] = c->r[2] + 0u; func_0888c134(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000114u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000110u);
    { c->r[29] = c->r[29] + 0x00000120u; return; }
    return; /* fell out of func_0889514c */
}

/* func_08899b54  0x08899b54..0x08899b88  52 bytes, source=sweep */
void func_08899b54(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08899b54u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x08899b74u; c->r[5] = 0x9b000000u; func_088998c8(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_08899b54 */
}

/* func_0889aa1c  0x0889aa1c..0x0889aa90  116 bytes, source=sweep */
void func_0889aa1c(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0889aa1cu);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
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
    { c->r[31] = 0x0889aa7cu; c->r[5] = mem_r32(ram, c->r[3] + 0x00000018u); func_0889990c(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_0889aa1c */
}

/* func_0889f658  0x0889f658..0x0889f718  192 bytes, source=sweep */
void func_0889f658(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0889f658u);
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
    return; /* fell out of func_0889f658 */
}

/* func_088a3348  0x088a3348..0x088a33a0  88 bytes, source=sweep */
void func_088a3348(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x088a3348u);
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
    { c->r[31] = 0x088a338cu; c->r[9] = mem_r32(ram, c->r[30] + 0x00000014u); func_088a3684(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000024u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000020u);
    { c->r[29] = c->r[29] + 0x00000030u; return; }
    return; /* fell out of func_088a3348 */
}

/* func_088a43d4  0x088a43d4..0x088a4480  172 bytes, source=sweep */
void func_088a43d4(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x088a43d4u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_088a4434; }
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
    { c->r[31] = 0x088a442cu; c->r[8] = mem_r32(ram, c->r[8] + 0x00000034u); func_088a4554(c, ram); }
    { goto L_088a446c; }
L_088a4434:
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
    { c->r[31] = 0x088a446cu; c->r[8] = c->r[2] + 0u; func_088a4554(c, ram); }
L_088a446c:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_088a43d4 */
}

/* func_088adcf0  0x088adcf0..0x088add34  68 bytes, source=sweep */
void func_088adcf0(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x088adcf0u);
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
    { c->r[31] = 0x088add20u; c->r[5] = c->r[2] + 0u; func_088ad160(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_088adcf0 */
}

/* func_088b2100  0x088b2100..0x088b21c0  192 bytes, source=residue */
void func_088b2100(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x088b2100u);
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
    return; /* fell out of func_088b2100 */
}

/* func_088b2fe0  0x088b2fe0..0x088b35a4  1476 bytes, source=fde */
void func_088b2fe0(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x088b2fe0u);
    c->r[29] = c->r[29] + 0xfffffcb0u;
    mem_w32(ram, c->r[29] + 0x00000348u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000344u, c->r[30]);
    mem_w32(ram, c->r[29] + 0x00000340u, c->r[16]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[2] = c->r[5] + 0u;
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[6]);
    mem_w8(ram, c->r[30] + 0x00000004u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x000000e0u;
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
    c->r[2] = mem_r8(ram, c->r[30] + 0x00000004u);
    mem_w32(ram, c->r[30] + 0x00000334u, c->r[2]);
    c->r[2] = 0u + 0x00000002u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000334u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_088b358c; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000334u);
    c->r[2] = ((s32)c->r[3] < (s32)0x00000003u) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_088b304c; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000334u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_088b3064; }
    { goto L_088b358c; }
L_088b304c:
    c->r[2] = 0u + 0x00000007u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000334u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_088b3374; }
    { goto L_088b358c; }
L_088b3064:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000010u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_088b30bc; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000010u);
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[3] = 0u + 0xffffffffu;
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000000u);
    c->r[2] = c->r[2] & c->r[3];
    mem_w8(ram, c->r[4] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[2] = c->r[2] & 0xff00u;
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = (u32)((s32)c->r[2] >> 8);
    { mem_w8(ram, c->r[3] + 0x00000003u, c->r[2]); goto L_088b30c8; }
L_088b30bc:
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0u + 0xffffffffu;
    mem_w8(ram, c->r[3] + 0x00000000u, c->r[2]);
L_088b30c8:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = 0x00200000u;
    { c->r[31] = 0x088b30d8u; c->r[5] = c->r[5] | 0x0020u; func_0884d1b0(c, ram); }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x088b30e4u; c->r[5] = 0u + 0x00000001u; func_088679d4(c, ram); }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x088b30f0u; c->r[5] = 0u + 0x00000003u; func_088679a0(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000000u);
    c->r[2] = 0u + 0xffffffffu;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_088b310c; }
    { goto L_088b3250; }
L_088b310c:
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0x08a80000u;
    c->r[2] = mem_r8(ram, c->r[2] + 0x00003e2du);
    mem_w8(ram, c->r[3] + 0x00000001u, c->r[2]);
    c->r[16] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x088b312cu; c->r[4] = c->r[4] + 0x00000af4u; func_08813c28(c, ram); }
    mem_w8(ram, c->r[16] + 0x00000002u, c->r[2]);
    c->r[3] = c->r[30] + 0x00000020u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000001u);
    c->r[4] = c->r[3] + 0u;
    c->r[5] = 0x08a40000u;
    c->r[5] = c->r[5] + 0x00004860u;
    { c->r[31] = 0x088b3150u; c->r[6] = c->r[2] + 0u; func_08a1ad34(c, ram); }
    c->r[3] = c->r[30] + 0x00000120u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[6] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000001u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000002u);
    c->r[4] = c->r[3] + 0u;
    c->r[5] = 0x08a40000u;
    c->r[5] = c->r[5] + 0x00004870u;
    { c->r[31] = 0x088b3178u; c->r[7] = c->r[2] + 0u; func_08a1ad34(c, ram); }
    c->r[3] = c->r[30] + 0x00000220u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000001u);
    c->r[4] = c->r[3] + 0u;
    c->r[5] = 0x08a40000u;
    c->r[5] = c->r[5] + 0x00004880u;
    { c->r[31] = 0x088b3198u; c->r[6] = c->r[2] + 0u; func_08a1ad34(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[16] = c->r[2] + 0x00000020u;
    c->r[2] = c->r[30] + 0x00000320u;
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000048b0u);
    c->r[1] = 0x08a40000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0x000048b4u);
    c->r[1] = 0x08a40000u;
    c->f[2] = mem_rf32(ram, c->r[1] + 0x000048b8u);
    c->r[4] = c->r[2] + 0u;
    c->f[12] = c->f[0];
    c->f[13] = c->f[1];
    c->f[14] = c->f[2];
    c->f[15] = u2f(0u);
    { c->r[31] = 0x088b31d8u; func_0880d140(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000320u);
    mem_w32(ram, c->r[16] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000324u);
    mem_w32(ram, c->r[16] + 0x00000004u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000328u);
    mem_w32(ram, c->r[16] + 0x00000008u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000032cu);
    mem_w32(ram, c->r[16] + 0x0000000cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000008u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000ac8u;
    { c->r[31] = 0x088b3214u; c->r[5] = c->r[2] + 0u; func_089cb820(c, ram); }
    { int _c = (c->r[2] == 0u); if (_c) goto L_088b3228; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0u + 0xfffffffeu;
    mem_w8(ram, c->r[3] + 0x00000000u, c->r[2]);
L_088b3228:
    c->r[2] = c->r[30] + 0x00000020u;
    c->r[3] = c->r[30] + 0x00000120u;
    c->r[7] = c->r[30] + 0x00000220u;
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = c->r[2] + 0u;
    c->r[6] = c->r[3] + 0u;
    { c->r[31] = 0x088b3248u; c->r[8] = 0u + 0u; func_089b75f8(c, ram); }
    { goto L_088b3360; }
L_088b3250:
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0x08a80000u;
    c->r[2] = mem_r8(ram, c->r[2] + 0x00003e2du);
    mem_w8(ram, c->r[3] + 0x00000001u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000008u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000ac8u;
    { c->r[31] = 0x088b327cu; c->r[5] = c->r[2] + 0u; func_089cb820(c, ram); }
    c->r[3] = c->r[30] + 0x00000020u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000003u);
    c->r[4] = c->r[3] + 0u;
    c->r[5] = 0x08a40000u;
    c->r[5] = c->r[5] + 0x00004890u;
    { c->r[31] = 0x088b329cu; c->r[6] = c->r[2] + 0u; func_08a1ad34(c, ram); }
    c->r[3] = c->r[30] + 0x00000120u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000003u);
    c->r[4] = c->r[3] + 0u;
    c->r[5] = 0x08a40000u;
    c->r[5] = c->r[5] + 0x000048a0u;
    { c->r[31] = 0x088b32bcu; c->r[6] = c->r[2] + 0u; func_08a1ad34(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[16] = c->r[2] + 0x00000020u;
    c->r[4] = c->r[30] + 0x00000320u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000000u);
    c->r[2] = 0u + 0x00000002u;
    c->r[2] = c->r[2] - c->r[3];
    c->f[0] = u2f(c->r[2]);
    c->f[1] = (f32)(s32)f2u(c->f[0]);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000048bcu);
    c->f[1] = c->f[1] * c->f[0];
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000048c0u);
    c->f[0] = c->f[1] + c->f[0];
    c->r[1] = 0x08a40000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0x000048c4u);
    c->r[1] = 0x08a40000u;
    c->f[2] = mem_rf32(ram, c->r[1] + 0x000048c8u);
    c->f[12] = c->f[0];
    c->f[13] = c->f[1];
    c->f[14] = c->f[2];
    c->f[15] = u2f(0u);
    { c->r[31] = 0x088b3320u; func_0880d140(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000320u);
    mem_w32(ram, c->r[16] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000324u);
    mem_w32(ram, c->r[16] + 0x00000004u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000328u);
    mem_w32(ram, c->r[16] + 0x00000008u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000032cu);
    mem_w32(ram, c->r[16] + 0x0000000cu, c->r[2]);
    c->r[2] = c->r[30] + 0x00000020u;
    c->r[3] = c->r[30] + 0x00000120u;
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = c->r[2] + 0u;
    c->r[6] = c->r[3] + 0u;
    c->r[7] = 0u + 0u;
    { c->r[31] = 0x088b3360u; c->r[8] = 0u + 0u; func_089b75f8(c, ram); }
L_088b3360:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    mem_w8(ram, c->r[2] + 0x00000004u, 0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    { mem_w32(ram, c->r[2] + 0x00000008u, 0u); goto L_088b358c; }
L_088b3374:
    c->r[16] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x088b3384u; c->r[4] = c->r[4] + 0x00000af4u; func_0880d410(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[16] + 0x00000001u);
    { int _c = (c->r[2] == c->r[3]); if (_c) goto L_088b33a8; }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x088b33a0u; c->r[5] = 0u + 0x00000002u; func_0880d260(c, ram); }
    { goto L_088b358c; }
L_088b33a8:
    c->r[2] = c->r[30] + 0x00000020u;
    { c->r[31] = 0x088b33b4u; c->r[4] = c->r[2] + 0u; func_08808260(c, ram); }
    c->r[2] = c->r[30] + 0x00000020u;
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x088b33c8u; c->r[6] = 0u + 0x00000001u; func_089b8a34(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000000u);
    c->r[2] = 0u + 0xffffffffu;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_088b348c; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000064u);
    c->r[2] = mem_r8(ram, c->r[2] + 0x0000000au);
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
    mem_w32(ram, c->r[30] + 0x00000010u, 0u);
L_088b33f0:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = ((s32)c->r[2] < (s32)c->r[3]) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_088b340c; }
    { goto L_088b3448; }
L_088b340c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000050u;
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000048ccu);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[4] = c->r[2] + 0u;
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->f[12] = c->f[0];
    { c->r[31] = 0x088b3434u; c->f[13] = mem_rf32(ram, c->r[3] + 0x00000008u); func_089b5804(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000330u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]); goto L_088b33f0; }
L_088b3448:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000008u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000048d0u);
    alx_c_cond_s(c, 12, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_088b3470; }
    { goto L_088b348c; }
L_088b3470:
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000008u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000048ccu);
    c->f[0] = c->f[1] + c->f[0];
    mem_wf32(ram, c->r[3] + 0x00000008u, c->f[0]);
L_088b348c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000048u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000048d4u);
    alx_c_cond_s(c, 2, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_088b34b4; }
    { goto L_088b34d4; }
L_088b34b4:
    c->r[2] = c->r[30] + 0x00000020u;
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = c->r[2] + 0u;
    c->r[6] = 0u + 0x00000003u;
    { c->r[31] = 0x088b34ccu; c->r[7] = 0u + 0u; func_089b8b50(c, ram); }
    { goto L_088b34ec; }
L_088b34d4:
    c->r[2] = c->r[30] + 0x00000020u;
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = c->r[2] + 0u;
    c->r[6] = 0u + 0x00000003u;
    { c->r[31] = 0x088b34ecu; c->r[7] = 0u + 0u; func_089b8b50(c, ram); }
L_088b34ec:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000000u);
    c->r[2] = 0u + 0xfffffffeu;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_088b3518; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000000u);
    { int _c = ((s32)c->r[2] >= 0); if (_c) goto L_088b3518; }
    { goto L_088b3550; }
L_088b3518:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000008u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000ac8u;
    { c->r[31] = 0x088b3534u; c->r[5] = c->r[2] + 0u; func_089cb820(c, ram); }
    { int _c = (c->r[2] != 0u); if (_c) goto L_088b3550; }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x088b3548u; c->r[5] = 0u + 0x00000002u; func_0880d260(c, ram); }
    { goto L_088b358c; }
L_088b3550:
    c->r[2] = 0x08a90000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0xffffbf20u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_088b357c; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000004u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_088b357c; }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x088b357cu; c->r[5] = 0u + 0x00000002u; func_0880d260(c, ram); }
L_088b357c:
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0x08a90000u;
    c->r[2] = mem_r8(ram, c->r[2] + 0xffffbf20u);
    mem_w8(ram, c->r[3] + 0x00000004u, c->r[2]);
L_088b358c:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000348u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000344u);
    c->r[16] = mem_r32(ram, c->r[29] + 0x00000340u);
    { c->r[29] = c->r[29] + 0x00000350u; return; }
    return; /* fell out of func_088b2fe0 */
}

/* func_088ba6a0  0x088ba6a0..0x088ba7f8  344 bytes, source=residue */
void func_088ba6a0(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x088ba6a0u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_wf32(ram, c->r[30] + 0x00000000u, c->f[12]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[5]);
    mem_w32(ram, c->r[30] + 0x0000000cu, 0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[2] + c->r[3];
    { int _c = ((s32)c->r[2] <= 0); if (_c) goto L_088ba7e4; }
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000000u);
    c->f[0] = u2f(0u);
    alx_c_cond_s(c, 12, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_088ba6f0; }
    { goto L_088ba76c; }
L_088ba6f0:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[3] = c->r[3] + c->r[2];
    c->f[0] = u2f(c->r[3]);
    c->f[1] = (f32)(s32)f2u(c->f[0]);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000000u);
    c->f[0] = c->f[0] * c->f[1];
    mem_wf32(ram, c->r[30] + 0x0000000cu, c->f[0]);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x0000000cu);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00004a90u);
    alx_c_cond_s(c, 12, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_088ba734; }
    { goto L_088ba744; }
L_088ba734:
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00004a90u);
    { mem_wf32(ram, c->r[30] + 0x0000000cu, c->f[0]); goto L_088ba7e4; }
L_088ba744:
    c->f[1] = mem_rf32(ram, c->r[30] + 0x0000000cu);
    c->f[0] = u2f(0u);
    alx_c_cond_s(c, 12, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_088ba764; }
    { goto L_088ba7e4; }
L_088ba764:
    { mem_w32(ram, c->r[30] + 0x0000000cu, 0u); goto L_088ba7e4; }
L_088ba76c:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[3] = c->r[3] - c->r[2];
    c->f[0] = u2f(c->r[3]);
    c->f[1] = (f32)(s32)f2u(c->f[0]);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000000u);
    c->f[0] = c->f[0] * c->f[1];
    mem_wf32(ram, c->r[30] + 0x0000000cu, c->f[0]);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x0000000cu);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00004a94u);
    alx_c_cond_s(c, 12, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_088ba7b0; }
    { goto L_088ba7c0; }
L_088ba7b0:
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00004a94u);
    { mem_wf32(ram, c->r[30] + 0x0000000cu, c->f[0]); goto L_088ba7e4; }
L_088ba7c0:
    c->f[1] = mem_rf32(ram, c->r[30] + 0x0000000cu);
    c->f[0] = u2f(0u);
    alx_c_cond_s(c, 12, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_088ba7e0; }
    { goto L_088ba7e4; }
L_088ba7e0:
    mem_w32(ram, c->r[30] + 0x0000000cu, 0u);
L_088ba7e4:
    c->f[0] = mem_rf32(ram, c->r[30] + 0x0000000cu);
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_088ba6a0 */
}

/* func_088beb40  0x088beb40..0x088beba4  100 bytes, source=fde */
void func_088beb40(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x088beb40u);
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
    { c->r[31] = 0x088beb90u; c->r[9] = mem_r32(ram, c->r[30] + 0x00000010u); func_088bf034(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000024u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000020u);
    { c->r[29] = c->r[29] + 0x00000030u; return; }
    return; /* fell out of func_088beb40 */
}

/* func_088bf6ec  0x088bf6ec..0x088bf7a4  184 bytes, source=fde */
void func_088bf6ec(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x088bf6ecu);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    c->r[2] = c->r[4] + 0u;
    c->r[3] = c->r[5] + 0u;
    mem_w8(ram, c->r[30] + 0x00000000u, c->r[2]);
    mem_w8(ram, c->r[30] + 0x00000001u, c->r[3]);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[30] + 0x00000001u);
    { int _c = ((s32)c->r[2] < 0); if (_c) goto L_088bf730; }
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[30] + 0x00000001u);
    c->r[2] = ((s32)c->r[2] < (s32)0x0000000bu) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_088bf730; }
    { goto L_088bf748; }
L_088bf730:
    c->r[4] = 0x08a40000u;
    c->r[4] = c->r[4] + 0x00004c90u;
    c->r[5] = 0u + 0x00000091u;
    c->r[6] = 0x08a40000u;
    { c->r[31] = 0x088bf748u; c->r[6] = c->r[6] + 0x00004ca8u; func_08a1909c(c, ram); }
L_088bf748:
    c->r[4] = 0x08a40000u;
    { c->r[31] = 0x088bf754u; c->r[4] = c->r[4] + 0x00004c80u; func_089c6f64(c, ram); }
    c->r[2] = c->r[2] + 0x00000004u;
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[2]);
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[30] + 0x00000000u);
    c->r[2] = 0u + 0x00000188u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[3] = c->lo;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[2] + c->r[3];
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[2]);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[30] + 0x00000001u);
    c->r[3] = c->r[2] << 3;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = c->r[2] + 0x00000140u;
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000000u);
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_088bf6ec */
}

/* func_088c29fc  0x088c29fc..0x088c2b30  308 bytes, source=fde */
void func_088c29fc(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x088c29fcu);
    c->r[29] = c->r[29] + 0xffffffd0u;
    mem_w32(ram, c->r[29] + 0x00000028u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000024u, c->r[30]);
    mem_w32(ram, c->r[29] + 0x00000020u, c->r[16]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[2] = c->r[5] + 0u;
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[6]);
    mem_w8(ram, c->r[30] + 0x00000004u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x000000e0u;
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x00000004u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_088c2ad4; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r16(ram, c->r[2] + 0x00000004u);
    c->r[2] = c->r[2] + 0xffffffffu;
    mem_w16(ram, c->r[3] + 0x00000004u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r16(ram, c->r[2] + 0x00000004u);
    c->r[2] = c->r[2] & 0x0007u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_088c2a8c; }
    c->r[16] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = c->r[2] + 0x00000020u;
    c->r[2] = 0x08a80000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00002ed8u);
    c->r[2] = c->r[2] + 0x00000020u;
    c->r[4] = c->r[3] + 0u;
    { c->r[31] = 0x088c2a88u; c->r[5] = c->r[2] + 0u; func_0884d0b0(c, ram); }
    mem_wf32(ram, c->r[16] + 0x00000008u, c->f[0]);
L_088c2a8c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000008u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00004ec0u);
    alx_c_cond_s(c, 12, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_088c2ab4; }
    { goto L_088c2ad4; }
L_088c2ab4:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = 0x08a80000u;
    c->r[5] = mem_r32(ram, c->r[5] + 0x00002ed8u);
    c->r[6] = 0u + 0x0000000au;
    { c->r[31] = 0x088c2accu; c->r[7] = 0u + 0xffffffffu; func_088c099c(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    mem_w16(ram, c->r[2] + 0x00000004u, 0u);
L_088c2ad4:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000ac8u;
    { c->r[31] = 0x088c2aecu; c->r[5] = c->r[2] + 0u; func_089cb820(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x00000004u);
    { int _c = ((s32)c->r[2] > 0); if (_c) goto L_088c2b18; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_088c2b18; }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x088c2b18u; c->r[5] = 0u + 0x00000002u; func_0880d260(c, ram); }
L_088c2b18:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000028u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000024u);
    c->r[16] = mem_r32(ram, c->r[29] + 0x00000020u);
    { c->r[29] = c->r[29] + 0x00000030u; return; }
    return; /* fell out of func_088c29fc */
}

/* func_088c8d7c  0x088c8d7c..0x088c8dc0  68 bytes, source=sweep */
void func_088c8d7c(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x088c8d7cu);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = 0x22000000u;
    c->r[2] = c->r[2] | c->r[3];
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x088c8dacu; c->r[5] = c->r[2] + 0u; func_088c8760(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_088c8d7c */
}

/* func_088caa0c  0x088caa0c..0x088cab18  268 bytes, source=fde */
void func_088caa0c(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x088caa0cu);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, 0u);
    c->r[1] = 0x08a80000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0x00002e40u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x0000504cu);
    c->f[0] = c->f[1] + c->f[0];
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    mem_wf32(ram, c->r[30] + 0x00000008u, c->f[0]);
    mem_w32(ram, c->r[30] + 0x0000000cu, 0u);
L_088caa44:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = ((s32)c->r[2] < (s32)c->r[3]) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_088caa60; }
    { goto L_088cab00; }
L_088caa60:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[4] = c->r[2] + 0x00000010u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[6] = c->r[2] + 0x00000010u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000020u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[8] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[7] = c->r[2] + 0u;
    c->f[12] = mem_rf32(ram, c->r[3] + 0x00000050u);
    { c->r[31] = 0x088caa94u; c->f[13] = mem_rf32(ram, c->r[8] + 0x00000054u); func_088ca600(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[2] | c->r[3];
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000010u;
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x088caab8u; c->r[5] = c->r[2] + 0u; func_0880d1a0(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = c->r[2] + 0x00000030u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000040u;
    c->r[4] = c->r[3] + 0u;
    { c->r[31] = 0x088caad4u; c->r[5] = c->r[2] + 0u; func_0880d1a0(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = c->r[2] + 0x00000020u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000030u;
    c->r[4] = c->r[3] + 0u;
    { c->r[31] = 0x088caaf0u; c->r[5] = c->r[2] + 0u; func_0880d1a0(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]); goto L_088caa44; }
L_088cab00:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_088caa0c */
}

/* func_088d25ac  0x088d25ac..0x088d2654  168 bytes, source=sweep */
void func_088d25ac(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x088d25acu);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x000000b2u);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    { int _c = ((s32)c->r[2] <= 0); if (_c) goto L_088d263c; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = ((s32)c->r[2] < (s32)0x000000ffu) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_088d263c; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = c->r[2] << 3;
    c->r[2] = 0x08aa0000u;
    c->r[2] = c->r[2] + 0x000049e0u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_088d263c; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x000000b0u);
    { int _c = ((s32)c->r[2] <= 0); if (_c) goto L_088d263c; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000094u);
    c->r[2] = c->r[2] & 0x4000u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_088d263c; }
    c->r[2] = 0u + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]); goto L_088d2640; }
L_088d263c:
    mem_w32(ram, c->r[30] + 0x0000000cu, 0u);
L_088d2640:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_088d25ac */
}

/* func_088d68a0  0x088d68a0..0x088d6970  208 bytes, source=fde */
void func_088d68a0(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x088d68a0u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = c->r[2] << 3;
    c->r[2] = 0x08aa0000u;
    c->r[2] = c->r[2] + 0x000049dcu;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = c->r[2] << 3;
    c->r[2] = 0x08aa0000u;
    c->r[2] = c->r[2] + 0x000049e0u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000004u);
    { c->r[31] = 0x088d68f8u; c->r[5] = mem_r32(ram, c->r[30] + 0x00000008u); func_088d6ab8(c, ram); }
    { int _c = (c->r[2] == 0u); if (_c) goto L_088d6908; }
    { goto L_088d695c; }
L_088d6908:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    mem_w16(ram, c->r[2] + 0x000000b0u, 0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    mem_w8(ram, c->r[2] + 0x000000a8u, 0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    mem_w16(ram, c->r[2] + 0x000000a6u, 0u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = 0u + 0x00000004u;
    mem_w8(ram, c->r[3] + 0x00000098u, c->r[2]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x0000008cu);
    c->r[2] = 0x00100000u;
    c->r[2] = c->r[3] | c->r[2];
    mem_w32(ram, c->r[4] + 0x0000008cu, c->r[2]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x0000008cu);
    c->r[2] = 0x00800000u;
    c->r[2] = c->r[3] | c->r[2];
    mem_w32(ram, c->r[4] + 0x0000008cu, c->r[2]);
L_088d695c:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_088d68a0 */
}

/* func_088dacdc  0x088dacdc..0x088dad7c  160 bytes, source=sweep */
void func_088dacdc(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x088dacdcu);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x000000b2u);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000002u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_088dad24; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = ((s32)c->r[2] < (s32)0x000000ffu) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_088dad24; }
    { goto L_088dad2c; }
L_088dad24:
    { mem_w32(ram, c->r[30] + 0x00000008u, 0u); goto L_088dad64; }
L_088dad2c:
    { c->r[31] = 0x088dad34u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000004u); func_088d3790(c, ram); }
    { int _c = (c->r[2] != 0u); if (_c) goto L_088dad44; }
    { mem_w32(ram, c->r[30] + 0x00000008u, 0u); goto L_088dad64; }
L_088dad44:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = c->r[2] << 3;
    c->r[2] = 0x08aa0000u;
    c->r[2] = c->r[2] + 0x000049e0u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000080u);
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]);
L_088dad64:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_088dacdc */
}

/* func_088de984  0x088de984..0x088de9d0  76 bytes, source=sweep */
void func_088de984(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x088de984u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    c->r[2] = 0x08aa0000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0xffffed00u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_088de9ac; }
    c->r[2] = 0u + 0x000000ffu;
    { mem_w32(ram, c->r[30] + 0x00000000u, c->r[2]); goto L_088de9bc; }
L_088de9ac:
    c->r[2] = 0x08aa0000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0xffffed00u);
    c->r[2] = mem_r8(ram, c->r[2] + 0x0000001fu);
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[2]);
L_088de9bc:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_088de984 */
}

/* func_088e0a68  0x088e0a68..0x088e0a98  48 bytes, source=sweep */
void func_088e0a68(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x088e0a68u);
    c->r[29] = c->r[29] + 0xfffffff0u;
    mem_w32(ram, c->r[29] + 0x00000004u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000000u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    c->r[4] = 0u + 0x00000001u;
    { c->r[31] = 0x088e0a84u; c->r[5] = 0u | 0xffffu; func_088e0714(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000004u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000000u);
    { c->r[29] = c->r[29] + 0x00000010u; return; }
    return; /* fell out of func_088e0a68 */
}

/* func_088e6600  0x088e6600..0x088e6640  64 bytes, source=fde */
void func_088e6600(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x088e6600u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[6]);
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[7]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x088e662cu; c->r[5] = mem_r32(ram, c->r[30] + 0x00000004u); func_088d3b10(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_088e6600 */
}

/* func_088eb8c8  0x088eb8c8..0x088ebf34  1644 bytes, source=fde */
void func_088eb8c8(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x088eb8c8u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000018u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[30]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[16]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[6]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000005cu);
    c->r[3] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x00000000u);
    c->r[2] = 0u + 0x000000e9u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_088eb908; }
    { goto L_088ebf1c; }
L_088eb908:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000020u);
    c->f[0] = mem_rf32(ram, c->r[3] + 0x00000020u);
    alx_c_cond_s(c, 12, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_088eb930; }
    { goto L_088eb940; }
L_088eb930:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->f[0] = mem_rf32(ram, c->r[3] + 0x00000020u);
    mem_wf32(ram, c->r[2] + 0x00000020u, c->f[0]);
L_088eb940:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000020u);
    c->f[0] = mem_rf32(ram, c->r[3] + 0x00000024u);
    alx_c_cond_s(c, 12, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_088eb968; }
    { goto L_088eb978; }
L_088eb968:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->f[0] = mem_rf32(ram, c->r[3] + 0x00000024u);
    mem_wf32(ram, c->r[2] + 0x00000020u, c->f[0]);
L_088eb978:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000024u);
    c->f[0] = mem_rf32(ram, c->r[3] + 0x00000018u);
    alx_c_cond_s(c, 12, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_088eb9a0; }
    { goto L_088eb9b0; }
L_088eb9a0:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->f[0] = mem_rf32(ram, c->r[3] + 0x00000018u);
    mem_wf32(ram, c->r[2] + 0x00000024u, c->f[0]);
L_088eb9b0:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000024u);
    c->f[0] = mem_rf32(ram, c->r[3] + 0x0000001cu);
    alx_c_cond_s(c, 12, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_088eb9d8; }
    { goto L_088eb9e8; }
L_088eb9d8:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->f[0] = mem_rf32(ram, c->r[3] + 0x0000001cu);
    mem_wf32(ram, c->r[2] + 0x00000024u, c->f[0]);
L_088eb9e8:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[4] = c->r[2] + 0x00000040u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = c->r[2] + 0x00000040u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[2] + 0x00000020u;
    c->r[5] = c->r[3] + 0u;
    { c->r[31] = 0x088eba0cu; c->r[6] = c->r[2] + 0u; func_08859fd4(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000020u);
    c->f[0] = mem_rf32(ram, c->r[3] + 0x00000028u);
    alx_c_cond_s(c, 12, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_088eba34; }
    { goto L_088eba8c; }
L_088eba34:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000030u);
    c->f[0] = mem_rf32(ram, c->r[3] + 0x00000028u);
    c->f[0] = c->f[1] + c->f[0];
    mem_wf32(ram, c->r[4] + 0x00000030u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000030u);
    c->f[0] = mem_rf32(ram, c->r[3] + 0x00000040u);
    alx_c_cond_s(c, 12, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_088eba78; }
    { goto L_088ebb20; }
L_088eba78:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->f[0] = mem_rf32(ram, c->r[3] + 0x00000040u);
    { mem_wf32(ram, c->r[2] + 0x00000030u, c->f[0]); goto L_088ebb20; }
L_088eba8c:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000028u);
    c->f[1] = -c->f[0];
    c->f[0] = mem_rf32(ram, c->r[3] + 0x00000020u);
    alx_c_cond_s(c, 12, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_088ebab8; }
    { goto L_088ebb10; }
L_088ebab8:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000030u);
    c->f[0] = mem_rf32(ram, c->r[3] + 0x00000028u);
    c->f[0] = c->f[1] - c->f[0];
    mem_wf32(ram, c->r[4] + 0x00000030u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000030u);
    c->f[0] = mem_rf32(ram, c->r[3] + 0x00000040u);
    alx_c_cond_s(c, 12, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_088ebafc; }
    { goto L_088ebb20; }
L_088ebafc:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->f[0] = mem_rf32(ram, c->r[3] + 0x00000040u);
    { mem_wf32(ram, c->r[2] + 0x00000030u, c->f[0]); goto L_088ebb20; }
L_088ebb10:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->f[0] = mem_rf32(ram, c->r[3] + 0x00000040u);
    mem_wf32(ram, c->r[2] + 0x00000030u, c->f[0]);
L_088ebb20:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000024u);
    c->f[0] = mem_rf32(ram, c->r[3] + 0x00000028u);
    alx_c_cond_s(c, 12, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_088ebb48; }
    { goto L_088ebba0; }
L_088ebb48:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000034u);
    c->f[0] = mem_rf32(ram, c->r[3] + 0x00000028u);
    c->f[0] = c->f[1] + c->f[0];
    mem_wf32(ram, c->r[4] + 0x00000034u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000034u);
    c->f[0] = mem_rf32(ram, c->r[3] + 0x00000044u);
    alx_c_cond_s(c, 12, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_088ebb8c; }
    { goto L_088ebc34; }
L_088ebb8c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->f[0] = mem_rf32(ram, c->r[3] + 0x00000044u);
    { mem_wf32(ram, c->r[2] + 0x00000034u, c->f[0]); goto L_088ebc34; }
L_088ebba0:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000028u);
    c->f[1] = -c->f[0];
    c->f[0] = mem_rf32(ram, c->r[3] + 0x00000024u);
    alx_c_cond_s(c, 12, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_088ebbcc; }
    { goto L_088ebc24; }
L_088ebbcc:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000034u);
    c->f[0] = mem_rf32(ram, c->r[3] + 0x00000028u);
    c->f[0] = c->f[1] - c->f[0];
    mem_wf32(ram, c->r[4] + 0x00000034u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000034u);
    c->f[0] = mem_rf32(ram, c->r[3] + 0x00000044u);
    alx_c_cond_s(c, 12, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_088ebc10; }
    { goto L_088ebc34; }
L_088ebc10:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->f[0] = mem_rf32(ram, c->r[3] + 0x00000044u);
    { mem_wf32(ram, c->r[2] + 0x00000034u, c->f[0]); goto L_088ebc34; }
L_088ebc24:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->f[0] = mem_rf32(ram, c->r[3] + 0x00000040u);
    mem_wf32(ram, c->r[2] + 0x00000030u, c->f[0]);
L_088ebc34:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000020u);
    c->f[0] = u2f(0u);
    alx_c_cond_s(c, 2, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) == 0u); if (_c) goto L_088ebc90; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000024u);
    c->f[0] = u2f(0u);
    alx_c_cond_s(c, 2, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) == 0u); if (_c) goto L_088ebc90; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000028u);
    c->f[0] = u2f(0u);
    alx_c_cond_s(c, 2, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) == 0u); if (_c) goto L_088ebc90; }
    { goto L_088ebcbc; }
L_088ebc90:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000050u);
    c->r[2] = c->r[2] + 0x00000040u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[6] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[4] = c->r[2] + 0u;
    c->f[12] = mem_rf32(ram, c->r[3] + 0x00000034u);
    c->f[13] = mem_rf32(ram, c->r[5] + 0x00000030u);
    { c->r[31] = 0x088ebcbcu; c->f[14] = mem_rf32(ram, c->r[6] + 0x00000038u); func_0885a0b8(c, ram); }
L_088ebcbc:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000008cu);
    c->r[2] = c->r[2] & 0x0010u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_088ebd14; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000034u);
    mem_wf32(ram, c->r[3] + 0x000000bcu, c->f[0]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x000000bcu);
    c->f[0] = mem_rf32(ram, c->r[3] + 0x00000044u);
    c->f[0] = c->f[1] - c->f[0];
    mem_wf32(ram, c->r[4] + 0x000000bcu, c->f[0]);
    c->r[16] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    { c->r[31] = 0x088ebd0cu; c->f[12] = mem_rf32(ram, c->r[2] + 0x000000bcu); func_088ef5b0(c, ram); }
    { mem_wf32(ram, c->r[16] + 0x000000bcu, c->f[0]); goto L_088ebd38; }
L_088ebd14:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000008cu);
    c->r[2] = c->r[2] & 0x0080u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_088ebd38; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->f[0] = mem_rf32(ram, c->r[3] + 0x00000034u);
    mem_wf32(ram, c->r[2] + 0x00000044u, c->f[0]);
L_088ebd38:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000008cu);
    c->r[2] = c->r[2] & 0x0020u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_088ebd70; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000030u);
    mem_wf32(ram, c->r[3] + 0x000000c0u, c->f[0]);
    c->r[16] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    { c->r[31] = 0x088ebd6cu; c->f[12] = mem_rf32(ram, c->r[2] + 0x000000c0u); func_088ef5b0(c, ram); }
    mem_wf32(ram, c->r[16] + 0x000000c0u, c->f[0]);
L_088ebd70:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000008cu);
    c->r[2] = c->r[2] & 0x0080u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_088ebdb4; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x000000bcu);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00005ea0u);
    c->f[0] = c->f[1] + c->f[0];
    mem_wf32(ram, c->r[3] + 0x000000bcu, c->f[0]);
    c->r[16] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    { c->r[31] = 0x088ebdb0u; c->f[12] = mem_rf32(ram, c->r[2] + 0x000000bcu); func_088ef5b0(c, ram); }
    mem_wf32(ram, c->r[16] + 0x000000bcu, c->f[0]);
L_088ebdb4:
    c->r[3] = 0x08aa0000u;
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[3] + 0x00004962u);
    c->r[2] = 0u + 0x00000003u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_088ebe78; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000005cu);
    c->r[3] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x00000000u);
    c->r[2] = 0u + 0x000000e5u;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_088ebe00; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000005cu);
    c->r[3] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x00000000u);
    c->r[2] = 0u + 0x000000b4u;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_088ebe00; }
    { goto L_088ebe78; }
L_088ebe00:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000058u);
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000007u);
    c->r[3] = c->r[2] << 3;
    c->r[2] = 0x08aa0000u;
    c->r[2] = c->r[2] + 0x000049dcu;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_088ebe78; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[4] = c->r[2] + 0x00000040u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000007u);
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
L_088ebe78:
    c->r[3] = 0x08aa0000u;
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[3] + 0x00004962u);
    c->r[2] = 0u + 0x00000010u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_088ebf1c; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000005cu);
    c->r[3] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x00000000u);
    c->r[2] = 0u + 0x000000e5u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_088ebf1c; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000058u);
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000007u);
    c->r[3] = c->r[2] << 3;
    c->r[2] = 0x08aa0000u;
    c->r[2] = c->r[2] + 0x000049dcu;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_088ebf1c; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[4] = c->r[2] + 0x00000040u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000007u);
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
L_088ebf1c:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000018u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[16] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_088eb8c8 */
}

/* func_088f1fac  0x088f1fac..0x088f21e8  572 bytes, source=fde */
void func_088f1fac(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x088f1facu);
    c->r[29] = c->r[29] + 0xffffffc0u;
    mem_w32(ram, c->r[29] + 0x0000003cu, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000038u, c->r[30]);
    mem_w32(ram, c->r[29] + 0x00000034u, c->r[17]);
    mem_w32(ram, c->r[29] + 0x00000030u, c->r[16]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000018u);
    c->r[2] = c->r[2] >> 1;
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
    c->r[4] = 0u + 0x00000100u;
    { c->r[31] = 0x088f1fe8u; c->r[5] = 0u + 0x00000010u; func_0881a1d4(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]);
    mem_w32(ram, c->r[30] + 0x00000014u, 0u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00006154u);
    mem_wf32(ram, c->r[30] + 0x00000018u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x0000000cu);
    c->f[0] = (f32)(s32)f2u(c->f[0]);
    mem_wf32(ram, c->r[30] + 0x0000001cu, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x00000004u);
    c->f[0] = u2f(c->r[2]);
    c->f[1] = (f32)(s32)f2u(c->f[0]);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00006158u);
    c->f[0] = c->f[0] / c->f[1];
    mem_wf32(ram, c->r[30] + 0x00000024u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x0000003cu);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x0000615cu);
    c->f[1] = c->f[1] * c->f[0];
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00006160u);
    c->f[0] = c->f[1] * c->f[0];
    mem_wf32(ram, c->r[30] + 0x00000028u, c->f[0]);
    mem_w32(ram, c->r[30] + 0x00000008u, 0u);
L_088f2068:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000010u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_088f2080; }
    { goto L_088f2170; }
L_088f2080:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[3] = c->r[2] << 4;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[4] = c->r[3] + c->r[2];
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0x7f230000u;
    c->r[2] = c->r[2] | 0x0f00u;
    c->r[2] = c->r[3] & c->r[2];
    mem_w32(ram, c->r[4] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[3] = c->r[2] << 4;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[17] = c->r[3] + c->r[2];
    c->r[16] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x088f20c0u; c->f[12] = mem_rf32(ram, c->r[30] + 0x00000014u); func_08a0f760(c, ram); }
    c->f[1] = c->f[0];
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000028u);
    c->f[1] = c->f[1] * c->f[0];
    c->f[0] = mem_rf32(ram, c->r[16] + 0x00000020u);
    c->f[0] = c->f[0] + c->f[1];
    mem_wf32(ram, c->r[17] + 0x00000004u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[3] = c->r[2] << 4;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[3] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000024u);
    mem_wf32(ram, c->r[3] + 0x00000008u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[3] = c->r[2] << 4;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[17] = c->r[3] + c->r[2];
    c->r[16] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x088f2110u; c->f[12] = mem_rf32(ram, c->r[30] + 0x00000014u); func_08a0f5bc(c, ram); }
    c->f[1] = c->f[0];
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000028u);
    c->f[1] = c->f[1] * c->f[0];
    c->f[0] = mem_rf32(ram, c->r[16] + 0x00000028u);
    c->f[0] = c->f[0] + c->f[1];
    mem_wf32(ram, c->r[17] + 0x0000000cu, c->f[0]);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000014u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000018u);
    c->f[0] = c->f[1] + c->f[0];
    mem_wf32(ram, c->r[30] + 0x00000014u, c->f[0]);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000014u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00006164u);
    alx_c_cond_s(c, 12, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_088f215c; }
    { goto L_088f2160; }
L_088f215c:
    mem_w32(ram, c->r[30] + 0x00000014u, 0u);
L_088f2160:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]); goto L_088f2068; }
L_088f2170:
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
    c->r[5] = 0u + 0x00000002u;
    c->r[6] = 0u + 0x0000019cu;
    c->r[7] = 0u + 0x00000010u;
    c->r[8] = 0u + 0x00000001u;
    c->r[9] = 0u + 0u;
    { c->r[31] = 0x088f21ccu; c->r[10] = mem_r32(ram, c->r[30] + 0x00000010u); func_088f4268(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x0000003cu);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000038u);
    c->r[17] = mem_r32(ram, c->r[29] + 0x00000034u);
    c->r[16] = mem_r32(ram, c->r[29] + 0x00000030u);
    { c->r[29] = c->r[29] + 0x00000040u; return; }
    return; /* fell out of func_088f1fac */
}

/* func_088f5d10  0x088f5d10..0x088f6ad0  3520 bytes, source=fde */
void func_088f5d10(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x088f5d10u);
    c->r[29] = c->r[29] + 0xffffff40u;
    mem_w32(ram, c->r[29] + 0x000000b8u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x000000b4u, c->r[30]);
    mem_w32(ram, c->r[29] + 0x000000b0u, c->r[16]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    c->r[2] = 0x08aa0000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0xffffede4u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_088f5d44; }
    { goto L_088f6ab8; }
L_088f5d44:
    c->r[2] = 0x08aa0000u;
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x000049c8u);
    c->r[16] = c->r[2] << 2;
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x088f5d5cu; c->r[4] = c->r[4] + 0x00000af4u; func_0881a2a4(c, ram); }
    c->r[3] = c->r[16] + c->r[2];
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 3;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08aa0000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0xffffede4u);
    c->r[2] = c->r[2] + c->r[3];
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x00000014u);
    c->r[3] = c->r[2] + 0xfffffff6u;
    c->r[2] = 0x08aa0000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00004968u);
    c->r[2] = ((s32)c->r[2] < (s32)c->r[3]) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_088f5dbc; }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x0000008cu);
    c->r[2] = 0x00800000u;
    c->r[2] = c->r[3] | c->r[2];
    { mem_w32(ram, c->r[4] + 0x0000008cu, c->r[2]); goto L_088f6ab8; }
L_088f5dbc:
    c->r[2] = 0x08aa0000u;
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x000049d1u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_088f5ddc; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000012u);
    c->r[1] = 0x08aa0000u;
    mem_w8(ram, c->r[1] + 0x000049d1u, c->r[2]);
L_088f5ddc:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x000000b2u);
    { c->r[31] = 0x088f5decu; c->r[4] = c->r[2] + 0u; func_088dee6c(c, ram); }
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
    { c->r[31] = 0x088f5df8u; c->r[4] = mem_r32(ram, c->r[30] + 0x0000000cu); func_088d6b98(c, ram); }
    { int _c = (c->r[2] == 0u); if (_c) goto L_088f5e24; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    mem_w16(ram, c->r[2] + 0x000000aau, 0u);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x0000008cu);
    c->r[2] = 0x00800000u;
    c->r[2] = c->r[3] | c->r[2];
    { mem_w32(ram, c->r[4] + 0x0000008cu, c->r[2]); goto L_088f6ab8; }
L_088f5e24:
    c->r[2] = 0x08a80000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00002ed8u);
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x000000b0u);
    { int _c = ((s32)c->r[2] > 0); if (_c) goto L_088f5e5c; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    mem_w16(ram, c->r[2] + 0x000000aau, 0u);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x0000008cu);
    c->r[2] = 0x00800000u;
    c->r[2] = c->r[3] | c->r[2];
    { c->r[31] = 0x088f5e5cu; mem_w32(ram, c->r[4] + 0x0000008cu, c->r[2]); func_088df0d4(c, ram); }
L_088f5e5c:
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x088f5e68u; c->r[4] = c->r[4] + 0x00000af4u; func_088e0b34(c, ram); }
    { int _c = (c->r[2] == 0u); if (_c) goto L_088f5e94; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    mem_w16(ram, c->r[2] + 0x000000aau, 0u);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x0000008cu);
    c->r[2] = 0x00800000u;
    c->r[2] = c->r[3] | c->r[2];
    { c->r[31] = 0x088f5e94u; mem_w32(ram, c->r[4] + 0x0000008cu, c->r[2]); func_088df0d4(c, ram); }
L_088f5e94:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x0000000cu);
    mem_wf32(ram, c->r[30] + 0x00000010u, c->f[0]);
    mem_w32(ram, c->r[30] + 0x00000014u, 0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x0000008cu);
    c->r[2] = 0x00800000u;
    c->r[2] = c->r[3] & c->r[2];
    { int _c = (c->r[2] != 0u); if (_c) goto L_088f6764; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x000000b8u);
    c->f[0] = mem_rf32(ram, c->r[3] + 0x00000004u);
    alx_c_cond_s(c, 12, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_088f5ee4; }
    { goto L_088f6234; }
L_088f5ee4:
    c->r[3] = 0x08aa0000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00004964u);
    c->r[2] = 0x00100000u;
    c->r[2] = c->r[3] | c->r[2];
    c->r[1] = 0x08aa0000u;
    mem_w32(ram, c->r[1] + 0x00004964u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x0000001eu);
    { int _c = (c->r[2] == 0u); if (_c) goto L_088f5fc0; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[3] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x00000010u);
    c->r[2] = 0x08aa0000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00004968u);
    alx_div(c, c->r[2], c->r[3]);
    c->r[2] = c->hi;
    if (c->r[3] == 0u) { recomp_break(c, ram, 0x088f5f28u, 0x7u); goto L_088f5f2c; }
L_088f5f2c:
    { int _c = (c->r[2] != 0u); if (_c) goto L_088f5fe8; }
    c->r[2] = 0x08aa0000u;
    c->r[2] = mem_r16(ram, c->r[2] + 0x000049a6u);
    c->r[2] = c->r[2] + 0x00000001u;
    c->r[1] = 0x08aa0000u;
    mem_w16(ram, c->r[1] + 0x000049a6u, c->r[2]);
    c->r[2] = 0x08aa0000u;
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x000049a6u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000065u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_088f5f68; }
    c->r[2] = 0u + 0x00000064u;
    c->r[1] = 0x08aa0000u;
    mem_w16(ram, c->r[1] + 0x000049a6u, c->r[2]);
L_088f5f68:
    c->r[3] = 0x08aa0000u;
    c->r[3] = (u32)(s32)(s16)mem_r16(ram, c->r[3] + 0x000049a6u);
    c->r[2] = 0u + 0x00000064u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_088f5fe8; }
    c->r[2] = 0x08a80000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00002ed8u);
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x000000b0u);
    { int _c = ((s32)c->r[2] <= 0); if (_c) goto L_088f5fe8; }
    mem_w32(ram, c->r[30] + 0x00000030u, 0u);
    c->r[2] = 0u + 0x00002710u;
    mem_w16(ram, c->r[30] + 0x0000002eu, c->r[2]);
    c->r[2] = c->r[30] + 0x00000020u;
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = 0x08a80000u;
    c->r[5] = mem_r32(ram, c->r[5] + 0x00002ed8u);
    c->r[6] = 0u + 0x0000001bu;
    { c->r[31] = 0x088f5fb8u; c->r[7] = c->r[2] + 0u; func_089c34ac(c, ram); }
    { goto L_088f5fe8; }
L_088f5fc0:
    c->r[3] = 0x08aa0000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00004964u);
    c->r[2] = 0x00200000u;
    c->r[2] = c->r[3] | c->r[2];
    c->r[1] = 0x08aa0000u;
    mem_w32(ram, c->r[1] + 0x00004964u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000010u);
    c->r[1] = 0x08aa0000u;
    mem_w8(ram, c->r[1] + 0x000049d0u, c->r[2]);
L_088f5fe8:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x0000001fu);
    { int _c = (c->r[2] != 0u); if (_c) goto L_088f6064; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[4] = c->r[2] + 0x00000030u;
    c->r[2] = 0x08a80000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00002ed8u);
    c->r[3] = c->r[2] + 0x00000020u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000020u;
    c->r[5] = c->r[3] + 0u;
    { c->r[31] = 0x088f6020u; c->r[6] = c->r[2] + 0u; func_08820ca4(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = c->r[2] + 0x00000030u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000030u;
    c->r[4] = c->r[3] + 0u;
    { c->r[31] = 0x088f603cu; c->r[5] = c->r[2] + 0u; func_0884c1d8(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = c->r[2] + 0x00000030u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000030u;
    c->r[4] = c->r[3] + 0u;
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x088f605cu; c->f[12] = mem_rf32(ram, c->r[30] + 0x00000010u); func_0884c224(c, ram); }
    { goto L_088f6218; }
L_088f6064:
    c->r[2] = c->r[30] + 0x00000020u;
    { c->r[31] = 0x088f6070u; c->r[4] = c->r[2] + 0u; func_08808240(c, ram); }
    c->r[2] = c->r[30] + 0x00000040u;
    { c->r[31] = 0x088f607cu; c->r[4] = c->r[2] + 0u; func_08808240(c, ram); }
    c->r[4] = c->r[30] + 0x00000020u;
    c->r[2] = 0x08a80000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00002ed8u);
    c->r[3] = c->r[2] + 0x00000020u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000020u;
    c->r[5] = c->r[3] + 0u;
    { c->r[31] = 0x088f60a0u; c->r[6] = c->r[2] + 0u; func_08820ca4(c, ram); }
    c->r[2] = c->r[30] + 0x00000040u;
    c->r[3] = c->r[30] + 0x00000020u;
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x088f60b4u; c->r[5] = c->r[3] + 0u; func_088f0e54(c, ram); }
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000044u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00006234u);
    c->f[0] = c->f[1] + c->f[0];
    mem_wf32(ram, c->r[30] + 0x00000044u, c->f[0]);
    c->r[3] = c->r[30] + 0x00000040u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000040u;
    c->r[4] = c->r[3] + 0u;
    { c->r[31] = 0x088f60e0u; c->r[5] = c->r[2] + 0u; func_08867860(c, ram); }
    { c->r[31] = 0x088f60e8u; c->f[12] = mem_rf32(ram, c->r[30] + 0x00000040u); func_088ef5b0(c, ram); }
    mem_wf32(ram, c->r[30] + 0x00000040u, c->f[0]);
    { c->r[31] = 0x088f60f4u; c->f[12] = mem_rf32(ram, c->r[30] + 0x00000044u); func_088ef5b0(c, ram); }
    mem_wf32(ram, c->r[30] + 0x00000044u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000040u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000018u);
    alx_c_cond_s(c, 12, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_088f611c; }
    { goto L_088f6128; }
L_088f611c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000018u);
    mem_wf32(ram, c->r[30] + 0x00000040u, c->f[0]);
L_088f6128:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000018u);
    c->f[1] = -c->f[0];
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000040u);
    alx_c_cond_s(c, 12, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_088f6150; }
    { goto L_088f6160; }
L_088f6150:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000018u);
    c->f[0] = -c->f[0];
    mem_wf32(ram, c->r[30] + 0x00000040u, c->f[0]);
L_088f6160:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000044u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000018u);
    alx_c_cond_s(c, 12, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_088f6184; }
    { goto L_088f6190; }
L_088f6184:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000018u);
    mem_wf32(ram, c->r[30] + 0x00000044u, c->f[0]);
L_088f6190:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000018u);
    c->f[1] = -c->f[0];
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000044u);
    alx_c_cond_s(c, 12, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_088f61b8; }
    { goto L_088f61c8; }
L_088f61b8:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000018u);
    c->f[0] = -c->f[0];
    mem_wf32(ram, c->r[30] + 0x00000044u, c->f[0]);
L_088f61c8:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[4] = c->r[2] + 0x00000040u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000040u;
    c->r[3] = c->r[30] + 0x00000040u;
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x088f61e8u; c->r[6] = c->r[3] + 0u; func_08859fd4(c, ram); }
    c->r[2] = c->r[30] + 0x00000050u;
    { c->r[31] = 0x088f61f4u; c->r[4] = c->r[2] + 0u; func_08808260(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = c->r[2] + 0x00000030u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000040u;
    c->r[6] = c->r[30] + 0x00000050u;
    c->r[4] = c->r[3] + 0u;
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x088f6218u; c->f[12] = mem_rf32(ram, c->r[30] + 0x00000010u); func_088f0f28(c, ram); }
L_088f6218:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x0000001du);
    { int _c = (c->r[2] == 0u); if (_c) goto L_088f66b4; }
    c->r[2] = 0u + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]); goto L_088f66b4; }
L_088f6234:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000004u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00006238u);
    c->f[1] = c->f[1] * c->f[0];
    c->f[0] = mem_rf32(ram, c->r[3] + 0x000000b8u);
    alx_c_cond_s(c, 12, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_088f6268; }
    { goto L_088f64f8; }
L_088f6268:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x088f6274u; c->r[5] = 0u + 0x00000003u; func_088d26fc(c, ram); }
    { int _c = (c->r[2] == 0u); if (_c) goto L_088f66ac; }
    c->r[2] = c->r[30] + 0x00000020u;
    { c->r[31] = 0x088f6288u; c->r[4] = c->r[2] + 0u; func_08808240(c, ram); }
    c->r[2] = c->r[30] + 0x00000030u;
    { c->r[31] = 0x088f6294u; c->r[4] = c->r[2] + 0u; func_08808240(c, ram); }
    c->r[4] = c->r[30] + 0x00000020u;
    c->r[2] = 0x08a80000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00002ed8u);
    c->r[3] = c->r[2] + 0x00000020u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000020u;
    c->r[5] = c->r[3] + 0u;
    { c->r[31] = 0x088f62b8u; c->r[6] = c->r[2] + 0u; func_08820ca4(c, ram); }
    c->r[2] = c->r[30] + 0x00000030u;
    c->r[3] = c->r[30] + 0x00000020u;
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x088f62ccu; c->r[5] = c->r[3] + 0u; func_088f0e54(c, ram); }
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000034u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00006234u);
    c->f[0] = c->f[1] + c->f[0];
    mem_wf32(ram, c->r[30] + 0x00000034u, c->f[0]);
    c->r[3] = c->r[30] + 0x00000030u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000040u;
    c->r[4] = c->r[3] + 0u;
    { c->r[31] = 0x088f62f8u; c->r[5] = c->r[2] + 0u; func_08867860(c, ram); }
    { c->r[31] = 0x088f6300u; c->f[12] = mem_rf32(ram, c->r[30] + 0x00000030u); func_088ef5b0(c, ram); }
    mem_wf32(ram, c->r[30] + 0x00000030u, c->f[0]);
    { c->r[31] = 0x088f630cu; c->f[12] = mem_rf32(ram, c->r[30] + 0x00000034u); func_088ef5b0(c, ram); }
    mem_wf32(ram, c->r[30] + 0x00000034u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000030u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000018u);
    alx_c_cond_s(c, 12, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_088f6334; }
    { goto L_088f6340; }
L_088f6334:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000018u);
    mem_wf32(ram, c->r[30] + 0x00000030u, c->f[0]);
L_088f6340:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000018u);
    c->f[1] = -c->f[0];
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000030u);
    alx_c_cond_s(c, 12, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_088f6368; }
    { goto L_088f6378; }
L_088f6368:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000018u);
    c->f[0] = -c->f[0];
    mem_wf32(ram, c->r[30] + 0x00000030u, c->f[0]);
L_088f6378:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000034u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000018u);
    alx_c_cond_s(c, 12, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_088f639c; }
    { goto L_088f63a8; }
L_088f639c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000018u);
    mem_wf32(ram, c->r[30] + 0x00000034u, c->f[0]);
L_088f63a8:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000018u);
    c->f[1] = -c->f[0];
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000034u);
    alx_c_cond_s(c, 12, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_088f63d0; }
    { goto L_088f63e0; }
L_088f63d0:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000018u);
    c->f[0] = -c->f[0];
    mem_wf32(ram, c->r[30] + 0x00000034u, c->f[0]);
L_088f63e0:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000004u);
    c->f[1] = c->f[0] + c->f[0];
    c->f[0] = mem_rf32(ram, c->r[3] + 0x000000b8u);
    alx_c_cond_s(c, 12, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_088f640c; }
    { goto L_088f64a0; }
L_088f640c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000020u);
    c->f[0] = u2f(0u);
    alx_c_cond_s(c, 2, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) == 0u); if (_c) goto L_088f6430; }
    { goto L_088f64a0; }
L_088f6430:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000020u);
    c->f[0] = -c->f[0];
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->f[12] = c->f[0];
    { c->r[31] = 0x088f644cu; c->f[13] = mem_rf32(ram, c->r[2] + 0x00000020u); func_0884bf84(c, ram); }
    c->f[1] = c->f[0];
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x0000623cu);
    c->f[1] = c->f[1] * c->f[0];
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000030u);
    c->f[0] = c->f[0] + c->f[1];
    mem_wf32(ram, c->r[30] + 0x00000030u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000020u);
    c->f[0] = -c->f[0];
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->f[12] = c->f[0];
    { c->r[31] = 0x088f6484u; c->f[13] = mem_rf32(ram, c->r[2] + 0x00000020u); func_0884bf84(c, ram); }
    c->f[1] = c->f[0];
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x0000623cu);
    c->f[1] = c->f[1] * c->f[0];
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000034u);
    c->f[0] = c->f[0] + c->f[1];
    mem_wf32(ram, c->r[30] + 0x00000034u, c->f[0]);
L_088f64a0:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[4] = c->r[2] + 0x00000040u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000040u;
    c->r[3] = c->r[30] + 0x00000030u;
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x088f64c0u; c->r[6] = c->r[3] + 0u; func_08859fd4(c, ram); }
    c->r[2] = c->r[30] + 0x00000040u;
    { c->r[31] = 0x088f64ccu; c->r[4] = c->r[2] + 0u; func_08808260(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = c->r[2] + 0x00000030u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000040u;
    c->r[6] = c->r[30] + 0x00000040u;
    c->r[4] = c->r[3] + 0u;
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x088f64f0u; c->f[12] = mem_rf32(ram, c->r[30] + 0x00000010u); func_088f0f28(c, ram); }
    { goto L_088f66ac; }
L_088f64f8:
    c->r[2] = c->r[30] + 0x00000020u;
    { c->r[31] = 0x088f6504u; c->r[4] = c->r[2] + 0u; func_08808240(c, ram); }
    c->r[2] = c->r[30] + 0x00000030u;
    { c->r[31] = 0x088f6510u; c->r[4] = c->r[2] + 0u; func_08808240(c, ram); }
    c->r[4] = c->r[30] + 0x00000020u;
    c->r[2] = 0x08a80000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00002ed8u);
    c->r[3] = c->r[2] + 0x00000020u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000020u;
    c->r[5] = c->r[3] + 0u;
    { c->r[31] = 0x088f6534u; c->r[6] = c->r[2] + 0u; func_08820ca4(c, ram); }
    c->r[2] = c->r[30] + 0x00000030u;
    c->r[3] = c->r[30] + 0x00000020u;
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x088f6548u; c->r[5] = c->r[3] + 0u; func_088f0e54(c, ram); }
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000034u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00006234u);
    c->f[0] = c->f[1] + c->f[0];
    mem_wf32(ram, c->r[30] + 0x00000034u, c->f[0]);
    c->r[3] = c->r[30] + 0x00000030u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000040u;
    c->r[4] = c->r[3] + 0u;
    { c->r[31] = 0x088f6574u; c->r[5] = c->r[2] + 0u; func_08867860(c, ram); }
    { c->r[31] = 0x088f657cu; c->f[12] = mem_rf32(ram, c->r[30] + 0x00000030u); func_088ef5b0(c, ram); }
    mem_wf32(ram, c->r[30] + 0x00000030u, c->f[0]);
    { c->r[31] = 0x088f6588u; c->f[12] = mem_rf32(ram, c->r[30] + 0x00000034u); func_088ef5b0(c, ram); }
    mem_wf32(ram, c->r[30] + 0x00000034u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000030u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000018u);
    alx_c_cond_s(c, 12, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_088f65b0; }
    { goto L_088f65bc; }
L_088f65b0:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000018u);
    mem_wf32(ram, c->r[30] + 0x00000030u, c->f[0]);
L_088f65bc:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000018u);
    c->f[1] = -c->f[0];
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000030u);
    alx_c_cond_s(c, 12, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_088f65e4; }
    { goto L_088f65f4; }
L_088f65e4:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000018u);
    c->f[0] = -c->f[0];
    mem_wf32(ram, c->r[30] + 0x00000030u, c->f[0]);
L_088f65f4:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000034u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000018u);
    alx_c_cond_s(c, 12, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_088f6618; }
    { goto L_088f6624; }
L_088f6618:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000018u);
    mem_wf32(ram, c->r[30] + 0x00000034u, c->f[0]);
L_088f6624:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000018u);
    c->f[1] = -c->f[0];
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000034u);
    alx_c_cond_s(c, 12, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_088f664c; }
    { goto L_088f665c; }
L_088f664c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000018u);
    c->f[0] = -c->f[0];
    mem_wf32(ram, c->r[30] + 0x00000034u, c->f[0]);
L_088f665c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[4] = c->r[2] + 0x00000040u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000040u;
    c->r[3] = c->r[30] + 0x00000030u;
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x088f667cu; c->r[6] = c->r[3] + 0u; func_08859fd4(c, ram); }
    c->r[2] = c->r[30] + 0x00000040u;
    { c->r[31] = 0x088f6688u; c->r[4] = c->r[2] + 0u; func_08808260(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = c->r[2] + 0x00000030u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000040u;
    c->r[6] = c->r[30] + 0x00000040u;
    c->r[4] = c->r[3] + 0u;
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x088f66acu; c->f[12] = mem_rf32(ram, c->r[30] + 0x00000010u); func_088f0f28(c, ram); }
L_088f66ac:
    c->r[2] = 0u + 0x00000001u;
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
L_088f66b4:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_088f6910; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x00000000u);
    c->f[0] = u2f(c->r[2]);
    c->f[1] = (f32)(s32)f2u(c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000050u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x000000acu);
    c->f[1] = c->f[1] * c->f[0];
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00006240u);
    c->f[0] = c->f[1] * c->f[0];
    mem_wf32(ram, c->r[30] + 0x00000090u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x00000000u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000090u);
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    c->r[3] = f2u(c->f[0]);
    c->r[2] = c->r[2] + c->r[3];
    mem_w32(ram, c->r[30] + 0x00000094u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r16(ram, c->r[2] + 0x000000aau);
    c->r[2] = c->r[2] + 0x00000001u;
    mem_w16(ram, c->r[3] + 0x000000aau, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x000000aau);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000094u);
    c->r[2] = ((s32)c->r[2] < (s32)c->r[3]) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_088f6910; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    mem_w16(ram, c->r[2] + 0x000000aau, 0u);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x0000008cu);
    c->r[2] = 0x00800000u;
    c->r[2] = c->r[3] | c->r[2];
    { c->r[31] = 0x088f675cu; mem_w32(ram, c->r[4] + 0x0000008cu, c->r[2]); func_088df0d4(c, ram); }
    { goto L_088f6910; }
L_088f6764:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x00000002u);
    c->f[0] = u2f(c->r[2]);
    c->f[1] = (f32)(s32)f2u(c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000050u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x000000acu);
    c->f[1] = c->f[1] * c->f[0];
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00006240u);
    c->f[0] = c->f[1] * c->f[0];
    mem_wf32(ram, c->r[30] + 0x00000090u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x00000002u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000090u);
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    c->r[3] = f2u(c->f[0]);
    c->r[2] = c->r[2] + c->r[3];
    mem_w32(ram, c->r[30] + 0x00000094u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[16] = c->r[2] + 0x00000020u;
    c->r[2] = c->r[30] + 0x00000020u;
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00006244u);
    c->r[1] = 0x08a40000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0x00006244u);
    c->r[4] = c->r[2] + 0u;
    c->f[12] = c->f[0];
    c->f[13] = u2f(0u);
    c->f[14] = c->f[1];
    c->f[15] = u2f(0u);
    { c->r[31] = 0x088f67e8u; func_0880d140(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    mem_w32(ram, c->r[16] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000024u);
    mem_w32(ram, c->r[16] + 0x00000004u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000028u);
    mem_w32(ram, c->r[16] + 0x00000008u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000002cu);
    mem_w32(ram, c->r[16] + 0x0000000cu, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = 0x08aa0000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00005224u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000004u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00006248u);
    c->f[0] = c->f[1] - c->f[0];
    mem_wf32(ram, c->r[3] + 0x00000024u, c->f[0]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r16(ram, c->r[2] + 0x000000aau);
    c->r[2] = c->r[2] + 0x00000001u;
    mem_w16(ram, c->r[3] + 0x000000aau, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x000000aau);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000094u);
    c->r[2] = ((s32)c->r[2] < (s32)c->r[3]) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_088f6864; }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000004u);
    { c->r[31] = 0x088f6864u; c->r[6] = mem_r32(ram, c->r[30] + 0x00000008u); func_088f5a8c(c, ram); }
L_088f6864:
    c->r[2] = 0x08a80000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00002ed8u);
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x000000b0u);
    { int _c = ((s32)c->r[2] <= 0); if (_c) goto L_088f68c4; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x000000aau);
    c->r[2] = ((s32)c->r[2] < (s32)0x0000000bu) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_088f68c4; }
    c->r[1] = 0x08a90000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0xffffba64u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00006238u);
    alx_c_cond_s(c, 12, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_088f68b4; }
    { goto L_088f68c4; }
L_088f68b4:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000004u);
    { c->r[31] = 0x088f68c4u; c->r[6] = mem_r32(ram, c->r[30] + 0x00000008u); func_088f5a8c(c, ram); }
L_088f68c4:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[4] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x00000014u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x000000b2u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[3];
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[4] + c->r[2];
    mem_w32(ram, c->r[30] + 0x00000098u, c->r[2]);
    c->r[3] = 0x08aa0000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00004968u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000098u);
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_088f6910; }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000004u);
    { c->r[31] = 0x088f6910u; c->r[6] = mem_r32(ram, c->r[30] + 0x00000008u); func_088f5a8c(c, ram); }
L_088f6910:
    { c->r[31] = 0x088f6918u; c->r[16] = mem_r32(ram, c->r[30] + 0x00000000u); func_088debd4(c, ram); }
    c->f[1] = c->f[0];
    c->f[0] = mem_rf32(ram, c->r[16] + 0x00000020u);
    alx_c_cond_s(c, 12, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_088f6938; }
    { goto L_088f6948; }
L_088f6938:
    { c->r[31] = 0x088f6940u; c->r[16] = mem_r32(ram, c->r[30] + 0x00000000u); func_088debd4(c, ram); }
    { mem_wf32(ram, c->r[16] + 0x00000020u, c->f[0]); goto L_088f697c; }
L_088f6948:
    { c->r[31] = 0x088f6950u; c->r[16] = mem_r32(ram, c->r[30] + 0x00000000u); func_088dec20(c, ram); }
    c->f[1] = c->f[0];
    c->f[0] = mem_rf32(ram, c->r[16] + 0x00000020u);
    alx_c_cond_s(c, 12, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_088f6970; }
    { goto L_088f697c; }
L_088f6970:
    { c->r[31] = 0x088f6978u; c->r[16] = mem_r32(ram, c->r[30] + 0x00000000u); func_088dec20(c, ram); }
    mem_wf32(ram, c->r[16] + 0x00000020u, c->f[0]);
L_088f697c:
    { c->r[31] = 0x088f6984u; c->r[16] = mem_r32(ram, c->r[30] + 0x00000000u); func_088decc4(c, ram); }
    c->f[1] = c->f[0];
    c->f[0] = mem_rf32(ram, c->r[16] + 0x00000028u);
    alx_c_cond_s(c, 12, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_088f69a4; }
    { goto L_088f69b4; }
L_088f69a4:
    { c->r[31] = 0x088f69acu; c->r[16] = mem_r32(ram, c->r[30] + 0x00000000u); func_088decc4(c, ram); }
    { mem_wf32(ram, c->r[16] + 0x00000028u, c->f[0]); goto L_088f69e8; }
L_088f69b4:
    { c->r[31] = 0x088f69bcu; c->r[16] = mem_r32(ram, c->r[30] + 0x00000000u); func_088ded10(c, ram); }
    c->f[1] = c->f[0];
    c->f[0] = mem_rf32(ram, c->r[16] + 0x00000028u);
    alx_c_cond_s(c, 12, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_088f69dc; }
    { goto L_088f69e8; }
L_088f69dc:
    { c->r[31] = 0x088f69e4u; c->r[16] = mem_r32(ram, c->r[30] + 0x00000000u); func_088ded10(c, ram); }
    mem_wf32(ram, c->r[16] + 0x00000028u, c->f[0]);
L_088f69e8:
    { c->r[31] = 0x088f69f0u; c->r[16] = mem_r32(ram, c->r[30] + 0x00000000u); func_088dec9c(c, ram); }
    c->f[1] = c->f[0];
    c->f[0] = mem_rf32(ram, c->r[16] + 0x00000024u);
    alx_c_cond_s(c, 12, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_088f6a10; }
    { goto L_088f6a20; }
L_088f6a10:
    { c->r[31] = 0x088f6a18u; c->r[16] = mem_r32(ram, c->r[30] + 0x00000000u); func_088dec9c(c, ram); }
    { mem_wf32(ram, c->r[16] + 0x00000024u, c->f[0]); goto L_088f6ab8; }
L_088f6a20:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[4] = c->r[2] + 0x00000020u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = c->r[2] + 0x00000020u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000030u;
    c->r[5] = c->r[3] + 0u;
    { c->r[31] = 0x088f6a44u; c->r[6] = c->r[2] + 0u; func_08859fd4(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000020u;
    { c->r[31] = 0x088f6a54u; c->r[4] = c->r[2] + 0u; func_08886934(c, ram); }
    c->f[1] = c->f[0];
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x0000624cu);
    c->f[0] = c->f[1] + c->f[0];
    mem_wf32(ram, c->r[30] + 0x00000090u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    mem_w32(ram, c->r[30] + 0x0000009cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000024u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000090u);
    alx_c_cond_s(c, 12, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_088f6a94; }
    { goto L_088f6aa4; }
L_088f6a94:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000024u);
    { mem_wf32(ram, c->r[30] + 0x000000a0u, c->f[0]); goto L_088f6aac; }
L_088f6aa4:
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000090u);
    mem_wf32(ram, c->r[30] + 0x000000a0u, c->f[0]);
L_088f6aac:
    c->f[0] = mem_rf32(ram, c->r[30] + 0x000000a0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000009cu);
    mem_wf32(ram, c->r[2] + 0x00000024u, c->f[0]);
L_088f6ab8:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x000000b8u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x000000b4u);
    c->r[16] = mem_r32(ram, c->r[29] + 0x000000b0u);
    { c->r[29] = c->r[29] + 0x000000c0u; return; }
    return; /* fell out of func_088f5d10 */
}

/* func_088fb040  0x088fb040..0x088fb070  48 bytes, source=sweep */
void func_088fb040(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x088fb040u);
    c->r[29] = c->r[29] + 0xfffffff0u;
    mem_w32(ram, c->r[29] + 0x00000004u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000000u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    c->r[4] = 0u + 0x00000001u;
    { c->r[31] = 0x088fb05cu; c->r[5] = 0u | 0xffffu; func_088faed8(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000004u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000000u);
    { c->r[29] = c->r[29] + 0x00000010u; return; }
    return; /* fell out of func_088fb040 */
}

/* func_08900d88  0x08900d88..0x08900e7c  244 bytes, source=fde */
void func_08900d88(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08900d88u);
    c->r[29] = c->r[29] + 0xffffffd0u;
    mem_w32(ram, c->r[29] + 0x00000024u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000020u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[6]);
    { c->r[31] = 0x08900dacu; c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u); func_089241c8(c, ram); }
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
    mem_w32(ram, c->r[30] + 0x00000010u, 0u);
L_08900db4:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000000u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_08900dcc; }
    { goto L_08900e08; }
L_08900dcc:
    c->r[6] = c->r[30] + 0x00000004u;
    c->r[3] = mem_r32(ram, c->r[6] + 0x00000000u);
    c->r[4] = c->r[30] + 0x0000000cu;
    c->r[2] = mem_r32(ram, c->r[4] + 0x00000000u);
    c->r[5] = mem_r8(ram, c->r[2] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000001u;
    mem_w32(ram, c->r[4] + 0x00000000u, c->r[2]);
    c->r[2] = c->r[3] + 0u;
    mem_w8(ram, c->r[2] + 0x00000000u, c->r[5]);
    c->r[3] = c->r[3] + 0x00000001u;
    mem_w32(ram, c->r[6] + 0x00000000u, c->r[3]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]); goto L_08900db4; }
L_08900e08:
    mem_w32(ram, c->r[30] + 0x00000010u, 0u);
L_08900e0c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000000u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_08900e24; }
    { goto L_08900e60; }
L_08900e24:
    c->r[6] = c->r[30] + 0x00000004u;
    c->r[3] = mem_r32(ram, c->r[6] + 0x00000000u);
    c->r[4] = c->r[30] + 0x00000008u;
    c->r[2] = mem_r32(ram, c->r[4] + 0x00000000u);
    c->r[5] = mem_r8(ram, c->r[2] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000001u;
    mem_w32(ram, c->r[4] + 0x00000000u, c->r[2]);
    c->r[2] = c->r[3] + 0u;
    mem_w8(ram, c->r[2] + 0x00000000u, c->r[5]);
    c->r[3] = c->r[3] + 0x00000001u;
    mem_w32(ram, c->r[6] + 0x00000000u, c->r[3]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]); goto L_08900e0c; }
L_08900e60:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    mem_w8(ram, c->r[2] + 0x00000000u, 0u);
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000024u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000020u);
    { c->r[29] = c->r[29] + 0x00000030u; return; }
    return; /* fell out of func_08900d88 */
}

/* func_089035ac  0x089035ac..0x08903640  148 bytes, source=sweep */
void func_089035ac(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089035acu);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[3] = 0x08aa0000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0xfffff574u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_0890362c; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[1] = 0x08aa0000u;
    mem_w32(ram, c->r[1] + 0xfffff574u, c->r[2]);
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
    c->r[5] = 0x08aa0000u;
    { c->r[31] = 0x0890362cu; c->r[5] = mem_r32(ram, c->r[5] + 0xfffff574u); func_08920944(c, ram); }
L_0890362c:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_089035ac */
}

/* func_08909448  0x08909448..0x08909d90  2376 bytes, source=fde */
void func_08909448(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08909448u);
    c->r[29] = c->r[29] + 0xffffffc0u;
    mem_w32(ram, c->r[29] + 0x00000038u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000034u, c->r[30]);
    mem_w32(ram, c->r[29] + 0x00000030u, c->r[16]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[2] = 0x08a80000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00002ed8u);
    c->r[2] = c->r[2] + 0x000000e0u;
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[2]);
    mem_w32(ram, c->r[30] + 0x00000008u, 0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000031u);
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08a90000u;
    c->r[2] = c->r[2] + 0xffffbda0u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000004u);
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000031u);
    { c->r[31] = 0x089094a4u; c->r[4] = c->r[2] + 0u; func_08867a3c(c, ram); }
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000001u);
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = 0u + 0x00000001u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_089094c8; }
    c->r[2] = 0u + 0x00000025u;
    { mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]); goto L_08909518; }
L_089094c8:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = 0u + 0x00000002u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_089094e4; }
    c->r[2] = 0u + 0x00000026u;
    { mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]); goto L_08909518; }
L_089094e4:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = 0u + 0x00000004u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_08909500; }
    c->r[2] = 0u + 0x00000027u;
    { mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]); goto L_08909518; }
L_08909500:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = 0u + 0x00000006u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_08909518; }
    c->r[2] = 0u + 0x00000028u;
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]);
L_08909518:
    c->r[4] = 0x08aa0000u;
    c->r[4] = c->r[4] + 0xfffff540u;
    { c->r[31] = 0x08909528u; c->r[5] = mem_r32(ram, c->r[30] + 0x00000008u); func_0880f2cc(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000031u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_08909558; }
    c->r[2] = 0x08a90000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0xffffbbdcu);
    c->r[3] = 0x04000000u;
    c->r[2] = c->r[2] & c->r[3];
    { int _c = (c->r[2] == 0u); if (_c) goto L_08909558; }
    mem_w32(ram, c->r[30] + 0x00000014u, 0u);
L_08909558:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000031u);
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[2] = c->r[2] + 0x00000020u;
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x00000000u);
    c->r[4] = 0x08a70000u;
    c->r[4] = c->r[4] + 0xffffb640u;
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x08909588u; c->r[6] = 0u + 0u; func_089e0bd8(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x08909594u; c->r[4] = mem_r32(ram, c->r[2] + 0x00000008u); func_089035ac(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000018u, 0u);
L_08909598:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = ((s32)c->r[2] < (s32)c->r[3]) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_089095b4; }
    { goto L_08909a88; }
L_089095b4:
    c->r[4] = 0x08aa0000u;
    c->r[4] = c->r[4] + 0xfffff540u;
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000008u);
    { c->r[31] = 0x089095c8u; c->r[6] = mem_r32(ram, c->r[30] + 0x00000018u); func_0880ef80(c, ram); }
    mem_w32(ram, c->r[30] + 0x0000001cu, c->r[2]);
    c->r[4] = 0u + 0x00000014u;
    { c->r[31] = 0x089095d8u; c->r[5] = 0u + 0x00000010u; func_0881a1d4(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000020u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    mem_w16(ram, c->r[2] + 0x00000000u, 0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    mem_w16(ram, c->r[2] + 0x00000002u, 0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[3] = c->r[2] + 0x0000000au;
    c->r[2] = 0u + 0x00000020u;
    mem_w16(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[3] = c->r[2] + 0x0000000au;
    c->r[2] = 0u + 0x00000020u;
    mem_w16(ram, c->r[3] + 0x00000002u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000000u);
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    c->r[2] = f2u(c->f[0]);
    mem_w16(ram, c->r[3] + 0x00000004u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000004u);
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    c->r[2] = f2u(c->f[0]);
    mem_w16(ram, c->r[3] + 0x00000006u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[3] = c->r[2] + 0x0000000au;
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000020u);
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    c->r[2] = f2u(c->f[0]);
    mem_w16(ram, c->r[3] + 0x00000004u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[3] = c->r[2] + 0x0000000au;
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000024u);
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    c->r[2] = f2u(c->f[0]);
    mem_w16(ram, c->r[3] + 0x00000006u, c->r[2]);
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
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[2] = c->r[2] >> 24;
    c->r[2] = c->r[2] & 0x000fu;
    c->r[3] = c->r[2] << 16;
    c->r[2] = 0x10000000u;
    c->r[2] = c->r[3] | c->r[2];
    { c->r[31] = 0x089096d0u; c->r[5] = c->r[2] + 0u; func_089207f8(c, ram); }
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
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[2] = 0x00ff0000u;
    c->r[2] = c->r[2] | 0xffffu;
    c->r[3] = c->r[3] & c->r[2];
    c->r[2] = 0x01000000u;
    c->r[2] = c->r[3] | c->r[2];
    { c->r[31] = 0x0890972cu; c->r[5] = c->r[2] + 0u; func_089207f8(c, ram); }
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
    { c->r[31] = 0x08909778u; c->r[5] = c->r[5] | 0x0002u; func_089207f8(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000020u, 0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000010u);
    c->r[2] = c->r[2] & 0x0002u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_089097a0; }
    { c->r[31] = 0x08909798u; c->r[4] = 0u + 0u; func_08867a3c(c, ram); }
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000001u);
    mem_w32(ram, c->r[30] + 0x00000020u, c->r[2]);
L_089097a0:
    c->r[4] = 0u + 0x00000014u;
    { c->r[31] = 0x089097acu; c->r[5] = 0u + 0x00000010u; func_0881a1d4(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000024u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[3] = c->r[2] << 1;
    c->r[2] = 0x08a90000u;
    c->r[2] = c->r[2] + 0xffffb9d0u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x00000008u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000000u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_08909860; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[3] = c->r[2] << 1;
    c->r[2] = 0x08a90000u;
    c->r[2] = c->r[2] + 0xffffb9d0u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x00000008u);
    c->r[16] = c->r[2] << 5;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000010u);
    c->r[2] = c->r[2] ^ 0x0003u;
    c->r[2] = (0u < c->r[2]) ? 1u : 0u;
    { c->r[31] = 0x08909818u; c->r[4] = c->r[2] + 0u; func_08867a3c(c, ram); }
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x00000004u);
    alx_div(c, c->r[16], c->r[2]);
    c->r[3] = c->lo;
    if (c->r[2] == 0u) { recomp_break(c, ram, 0x08909828u, 0x7u); goto L_0890982c; }
L_0890982c:
    mem_w32(ram, c->r[30] + 0x00000028u, c->r[3]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000024u);
    c->r[2] = mem_r16(ram, c->r[30] + 0x00000028u);
    mem_w16(ram, c->r[3] + 0x00000002u, c->r[2]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000024u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000004u);
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    c->r[3] = f2u(c->f[0]);
    c->r[2] = mem_r16(ram, c->r[30] + 0x00000028u);
    c->r[2] = c->r[3] + c->r[2];
    { mem_w16(ram, c->r[4] + 0x00000006u, c->r[2]); goto L_089098fc; }
L_08909860:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[3] = c->r[2] << 1;
    c->r[2] = 0x08a90000u;
    c->r[2] = c->r[2] + 0xffffb9d0u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[3] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x00000008u);
    c->r[2] = 0u + 0xfffffffeu;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_089098dc; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000010u);
    c->r[2] = c->r[2] ^ 0x0003u;
    c->r[2] = (0u < c->r[2]) ? 1u : 0u;
    { c->r[31] = 0x089098a4u; c->r[4] = c->r[2] + 0u; func_08867a3c(c, ram); }
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x00000004u);
    mem_w32(ram, c->r[30] + 0x00000028u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000024u);
    c->r[2] = mem_r16(ram, c->r[30] + 0x00000028u);
    mem_w16(ram, c->r[3] + 0x00000002u, c->r[2]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000024u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000004u);
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    c->r[3] = f2u(c->f[0]);
    c->r[2] = mem_r16(ram, c->r[30] + 0x00000028u);
    c->r[2] = c->r[3] + c->r[2];
    { mem_w16(ram, c->r[4] + 0x00000006u, c->r[2]); goto L_089098fc; }
L_089098dc:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000024u);
    mem_w16(ram, c->r[2] + 0x00000002u, 0u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000024u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000004u);
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    c->r[2] = f2u(c->f[0]);
    mem_w16(ram, c->r[3] + 0x00000006u, c->r[2]);
L_089098fc:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000024u);
    mem_w16(ram, c->r[2] + 0x00000000u, 0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000024u);
    c->r[3] = c->r[2] + 0x0000000au;
    c->r[2] = 0u + 0x00000020u;
    mem_w16(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000024u);
    c->r[3] = c->r[2] + 0x0000000au;
    c->r[2] = 0u + 0x00000020u;
    mem_w16(ram, c->r[3] + 0x00000002u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000024u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000000u);
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    c->r[2] = f2u(c->f[0]);
    mem_w16(ram, c->r[3] + 0x00000004u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000024u);
    c->r[3] = c->r[2] + 0x0000000au;
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000020u);
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    c->r[2] = f2u(c->f[0]);
    mem_w16(ram, c->r[3] + 0x00000004u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000024u);
    c->r[3] = c->r[2] + 0x0000000au;
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000024u);
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    c->r[2] = f2u(c->f[0]);
    mem_w16(ram, c->r[3] + 0x00000006u, c->r[2]);
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
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000024u);
    c->r[2] = c->r[2] >> 24;
    c->r[2] = c->r[2] & 0x000fu;
    c->r[3] = c->r[2] << 16;
    c->r[2] = 0x10000000u;
    c->r[2] = c->r[3] | c->r[2];
    { c->r[31] = 0x089099d0u; c->r[5] = c->r[2] + 0u; func_089207f8(c, ram); }
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
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000024u);
    c->r[2] = 0x00ff0000u;
    c->r[2] = c->r[2] | 0xffffu;
    c->r[3] = c->r[3] & c->r[2];
    c->r[2] = 0x01000000u;
    c->r[2] = c->r[3] | c->r[2];
    { c->r[31] = 0x08909a2cu; c->r[5] = c->r[2] + 0u; func_089207f8(c, ram); }
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
    { c->r[31] = 0x08909a78u; c->r[5] = c->r[5] | 0x0002u; func_089207f8(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]); goto L_08909598; }
L_08909a88:
    c->r[2] = 0x08a80000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00002ed8u);
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x000000b0u);
    c->f[0] = u2f(c->r[2]);
    c->f[1] = (f32)(s32)f2u(c->f[0]);
    c->r[2] = 0x08a90000u;
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0xffffba00u);
    c->f[0] = u2f(c->r[2]);
    c->f[0] = (f32)(s32)f2u(c->f[0]);
    c->f[1] = c->f[1] / c->f[0];
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00006700u);
    c->f[0] = c->f[1] * c->f[0];
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    mem_wf32(ram, c->r[30] + 0x00000028u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000008u);
    mem_w32(ram, c->r[30] + 0x00000024u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x00000008u);
    c->r[2] = 0x7f170000u;
    c->r[2] = c->r[2] | 0x177fu;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_08909af8; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000008u);
    { mem_w32(ram, c->r[30] + 0x00000024u, c->r[2]); goto L_08909b78; }
L_08909af8:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000028u);
    c->r[2] = ((s32)c->r[2] < (s32)0x0000000au) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_08909b2c; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x0000002fu);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000004u) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_08909d78; }
    c->r[2] = 0x7f170000u;
    c->r[2] = c->r[2] | 0x177fu;
    { mem_w32(ram, c->r[30] + 0x00000024u, c->r[2]); goto L_08909b78; }
L_08909b2c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000028u);
    c->r[2] = ((s32)c->r[2] < (s32)0x0000000bu) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_08909b4c; }
    c->r[2] = 0x7f170000u;
    c->r[2] = c->r[2] | 0x177fu;
    { mem_w32(ram, c->r[30] + 0x00000024u, c->r[2]); goto L_08909b78; }
L_08909b4c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000028u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000033u) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_08909b6c; }
    c->r[2] = 0x7f000000u;
    c->r[2] = c->r[2] | 0x607fu;
    { mem_w32(ram, c->r[30] + 0x00000024u, c->r[2]); goto L_08909b78; }
L_08909b6c:
    c->r[2] = 0x7f400000u;
    c->r[2] = c->r[2] | 0x6000u;
    mem_w32(ram, c->r[30] + 0x00000024u, c->r[2]);
L_08909b78:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x00000026u);
    c->r[4] = 0x08a70000u;
    c->r[4] = c->r[4] + 0xffffb640u;
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x08909b94u; c->r[6] = 0u + 0u; func_089e0bd8(c, ram); }
    c->r[4] = 0x08aa0000u;
    c->r[4] = c->r[4] + 0xfffff540u;
    c->r[5] = 0u + 0x00000029u;
    { c->r[31] = 0x08909ba8u; c->r[6] = 0u + 0u; func_0880ef80(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000020u, c->r[2]);
    { c->r[31] = 0x08909bb4u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000024u); func_089035ac(c, ram); }
    c->r[4] = 0u + 0x00000014u;
    { c->r[31] = 0x08909bc0u; c->r[5] = 0u + 0x00000010u; func_0881a1d4(c, ram); }
    mem_w32(ram, c->r[30] + 0x0000001cu, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000000u);
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    c->r[2] = f2u(c->f[0]);
    mem_w16(ram, c->r[3] + 0x00000004u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000004u);
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    c->r[2] = f2u(c->f[0]);
    mem_w16(ram, c->r[3] + 0x00000006u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[2] = mem_r16(ram, c->r[2] + 0x00000008u);
    mem_w16(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[2] = mem_r16(ram, c->r[2] + 0x0000000au);
    mem_w16(ram, c->r[3] + 0x00000002u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[3] = c->r[2] + 0x0000000au;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000020u);
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    c->r[2] = f2u(c->f[0]);
    mem_w16(ram, c->r[3] + 0x00000004u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[3] = c->r[2] + 0x0000000au;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000024u);
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    c->r[2] = f2u(c->f[0]);
    mem_w16(ram, c->r[3] + 0x00000006u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[3] = c->r[2] + 0x0000000au;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[2] = mem_r16(ram, c->r[2] + 0x00000028u);
    mem_w16(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[3] = c->r[2] + 0x0000000au;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[2] = mem_r16(ram, c->r[2] + 0x0000002au);
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
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = c->r[2] >> 24;
    c->r[2] = c->r[2] & 0x000fu;
    c->r[3] = c->r[2] << 16;
    c->r[2] = 0x10000000u;
    c->r[2] = c->r[3] | c->r[2];
    { c->r[31] = 0x08909cd0u; c->r[5] = c->r[2] + 0u; func_089207f8(c, ram); }
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
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = 0x00ff0000u;
    c->r[2] = c->r[2] | 0xffffu;
    c->r[3] = c->r[3] & c->r[2];
    c->r[2] = 0x01000000u;
    c->r[2] = c->r[3] | c->r[2];
    { c->r[31] = 0x08909d2cu; c->r[5] = c->r[2] + 0u; func_089207f8(c, ram); }
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
    { c->r[31] = 0x08909d78u; c->r[5] = c->r[5] | 0x0002u; func_089207f8(c, ram); }
L_08909d78:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000038u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000034u);
    c->r[16] = mem_r32(ram, c->r[29] + 0x00000030u);
    { c->r[29] = c->r[29] + 0x00000040u; return; }
    return; /* fell out of func_08909448 */
}

/* func_089144e8  0x089144e8..0x089147d4  748 bytes, source=sweep */
void func_089144e8(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089144e8u);
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
    { int _c = (c->r[2] != 0u); if (_c) goto L_08914540; }
    { goto L_089147c0; }
L_08914540:
    c->r[4] = 0x7f0c0000u;
    { c->r[31] = 0x0891454cu; c->r[4] = c->r[4] | 0x1400u; func_089035ac(c, ram); }
    c->r[4] = 0u + 0x00000140u;
    { c->r[31] = 0x08914558u; c->r[5] = 0u + 0x00000010u; func_0881a1d4(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[2]);
    mem_w32(ram, c->r[30] + 0x00000008u, 0u);
L_08914568:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000004u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_08914580; }
    { goto L_089146bc; }
L_08914580:
    mem_w32(ram, c->r[30] + 0x0000000cu, 0u);
L_08914584:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000004u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_0891459c; }
    { goto L_089146ac; }
L_0891459c:
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
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_08914674; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = 0u + 0x00000030u;
    mem_w16(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = c->r[2] + 0x0000000au;
    c->r[2] = 0u + 0x00000050u;
    { mem_w16(ram, c->r[3] + 0x00000000u, c->r[2]); goto L_08914690; }
L_08914674:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = 0u + 0x00000050u;
    mem_w16(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = c->r[2] + 0x0000000au;
    c->r[2] = 0u + 0x00000030u;
    mem_w16(ram, c->r[3] + 0x00000000u, c->r[2]);
L_08914690:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[2] + 0x00000014u;
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]); goto L_08914584; }
L_089146ac:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]); goto L_08914568; }
L_089146bc:
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
    { c->r[31] = 0x08914718u; c->r[5] = c->r[2] + 0u; func_089207f8(c, ram); }
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
    { c->r[31] = 0x08914774u; c->r[5] = c->r[2] + 0u; func_089207f8(c, ram); }
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
    { c->r[31] = 0x089147c0u; c->r[5] = c->r[5] | 0x0020u; func_089207f8(c, ram); }
L_089147c0:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_089144e8 */
}

/* func_0891ded4  0x0891ded4..0x0891e894  2496 bytes, source=fde */
void func_0891ded4(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0891ded4u);
    c->r[29] = c->r[29] + 0xffffff90u;
    mem_w32(ram, c->r[29] + 0x00000068u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000064u, c->r[30]);
    mem_w32(ram, c->r[29] + 0x00000060u, c->r[16]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000031u);
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08a90000u;
    c->r[2] = c->r[2] + 0xffffbda0u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000004u);
    c->r[3] = mem_r8(ram, c->r[2] + 0x0000001cu);
    c->r[2] = 0u + 0x0000000bu;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_0891df20; }
    { goto L_0891e87c; }
L_0891df20:
    c->r[4] = 0x08aa0000u;
    c->r[4] = c->r[4] + 0xfffff540u;
    { c->r[31] = 0x0891df30u; c->r[5] = 0u + 0x00000058u; func_0880f2cc(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]);
    c->r[4] = 0x08aa0000u;
    c->r[4] = c->r[4] + 0xfffff540u;
    { c->r[31] = 0x0891df44u; c->r[5] = 0u + 0x00000059u; func_0880f2cc(c, ram); }
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
    c->r[2] = c->r[30] + 0x00000010u;
    { c->r[31] = 0x0891df54u; c->r[4] = c->r[2] + 0u; func_08808240(c, ram); }
    c->r[2] = c->r[30] + 0x00000020u;
    { c->r[31] = 0x0891df60u; c->r[4] = c->r[2] + 0u; func_08808240(c, ram); }
    c->r[3] = c->r[30] + 0x00000030u;
    c->r[2] = 0x08a80000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00002ed8u);
    c->r[2] = c->r[2] + 0x00000030u;
    c->r[1] = 0x08a80000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00002e48u);
    c->f[0] = c->f[0] + c->f[0];
    c->r[4] = c->r[3] + 0u;
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x0891df8cu; c->f[12] = c->f[0]; func_0884c120(c, ram); }
    c->r[2] = c->r[30] + 0x00000030u;
    c->r[3] = c->r[30] + 0x00000030u;
    c->r[4] = c->r[2] + 0u;
    c->r[5] = c->r[3] + 0u;
    c->f[12] = u2f(0u);
    { c->r[31] = 0x0891dfa8u; func_088cb234(c, ram); }
    c->r[2] = c->r[30] + 0x00000040u;
    { c->r[31] = 0x0891dfb4u; c->r[4] = c->r[2] + 0u; func_08808240(c, ram); }
    c->r[3] = c->r[30] + 0x00000040u;
    c->r[2] = 0x08a80000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00002ed8u);
    c->r[2] = c->r[2] + 0x00000030u;
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00006bccu);
    c->r[4] = c->r[3] + 0u;
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x0891dfdcu; c->f[12] = c->f[0]; func_0884c224(c, ram); }
    c->r[3] = c->r[30] + 0x00000040u;
    c->r[5] = c->r[30] + 0x00000040u;
    c->r[2] = 0x08a80000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00002ed8u);
    c->r[2] = c->r[2] + 0x00000020u;
    c->r[4] = c->r[3] + 0u;
    { c->r[31] = 0x0891dffcu; c->r[6] = c->r[2] + 0u; func_08859fd4(c, ram); }
    c->r[4] = c->r[30] + 0x00000010u;
    c->r[2] = 0x08a80000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00002ed8u);
    c->r[2] = c->r[2] + 0x00000020u;
    c->r[3] = c->r[30] + 0x00000030u;
    c->r[5] = c->r[2] + 0u;
    c->r[6] = c->r[3] + 0u;
    c->r[1] = 0x08a90000u;
    { c->r[31] = 0x0891e024u; c->f[12] = mem_rf32(ram, c->r[1] + 0xffffbac4u); func_0891d41c(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = 0u + 0xffffffffu;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_0891e03c; }
    { goto L_0891e87c; }
L_0891e03c:
    c->r[2] = c->r[30] + 0x00000020u;
    c->r[3] = c->r[30] + 0x00000040u;
    c->r[6] = c->r[30] + 0x00000030u;
    c->r[4] = c->r[2] + 0u;
    c->r[5] = c->r[3] + 0u;
    c->r[1] = 0x08a90000u;
    { c->r[31] = 0x0891e05cu; c->f[12] = mem_rf32(ram, c->r[1] + 0xffffbac4u); func_0891d41c(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = 0u + 0xffffffffu;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_0891e074; }
    { goto L_0891e87c; }
L_0891e074:
    c->r[2] = 0x08a80000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00002ed8u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000048u);
    c->f[1] = (f32)fabsf(c->f[0]);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00006bd0u);
    alx_c_cond_s(c, 12, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_0891e87c; }
    c->r[2] = 0x08a80000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00002ed8u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000040u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00006bd4u);
    alx_c_cond_s(c, 12, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_0891e87c; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[3];
    c->r[2] = c->r[2] << 2;
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x0891e0e0u; c->r[5] = 0u + 0x00000010u; func_0881a1d4(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000050u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000050u);
    mem_w32(ram, c->r[30] + 0x00000054u, c->r[2]);
    { c->r[31] = 0x0891e0f4u; c->r[16] = c->r[30] + 0x00000030u; func_08820f58(c, ram); }
    c->r[3] = c->r[2] + 0x00000020u;
    c->r[2] = c->r[30] + 0x00000010u;
    c->r[4] = c->r[16] + 0u;
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x0891e10cu; c->r[6] = c->r[3] + 0u; func_0884c07c(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000030u);
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000034u);
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000038u);
    mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000003cu);
    mem_w32(ram, c->r[30] + 0x0000001cu, c->r[2]);
    c->r[2] = c->r[30] + 0x00000010u;
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0x08b90000u;
    { c->r[31] = 0x0891e140u; c->r[5] = c->r[5] + 0x000054c0u; func_08921f64(c, ram); }
    { int _c = (c->r[2] == 0u); if (_c) goto L_0891e364; }
    mem_w32(ram, c->r[30] + 0x00000058u, 0u);
L_0891e14c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000058u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = ((s32)c->r[2] < (s32)c->r[3]) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_0891e168; }
    { goto L_0891e24c; }
L_0891e168:
    c->r[4] = 0x08aa0000u;
    c->r[4] = c->r[4] + 0xfffff540u;
    c->r[5] = 0u + 0x00000058u;
    { c->r[31] = 0x0891e17cu; c->r[6] = mem_r32(ram, c->r[30] + 0x00000058u); func_0880ef80(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000054u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000010u);
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    c->r[2] = f2u(c->f[0]);
    c->r[2] = c->r[2] + 0xfffffff0u;
    mem_w16(ram, c->r[3] + 0x00000004u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000054u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000014u);
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    c->r[2] = f2u(c->f[0]);
    c->r[2] = c->r[2] + 0xfffffff4u;
    mem_w16(ram, c->r[3] + 0x00000006u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000054u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r16(ram, c->r[2] + 0x00000008u);
    mem_w16(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000054u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r16(ram, c->r[2] + 0x0000000au);
    mem_w16(ram, c->r[3] + 0x00000002u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000054u);
    c->r[3] = c->r[2] + 0x0000000au;
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000010u);
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    c->r[2] = f2u(c->f[0]);
    c->r[2] = c->r[2] + 0x00000010u;
    mem_w16(ram, c->r[3] + 0x00000004u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000054u);
    c->r[3] = c->r[2] + 0x0000000au;
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000014u);
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    c->r[2] = f2u(c->f[0]);
    c->r[2] = c->r[2] + 0x0000000du;
    mem_w16(ram, c->r[3] + 0x00000006u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000054u);
    c->r[3] = c->r[2] + 0x0000000au;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r16(ram, c->r[2] + 0x00000028u);
    mem_w16(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000054u);
    c->r[3] = c->r[2] + 0x0000000au;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r16(ram, c->r[2] + 0x0000002au);
    mem_w16(ram, c->r[3] + 0x00000002u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000054u);
    c->r[2] = c->r[2] + 0x00000014u;
    mem_w32(ram, c->r[30] + 0x00000054u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000058u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000058u, c->r[2]); goto L_0891e14c; }
L_0891e24c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x0891e258u; c->r[4] = mem_r32(ram, c->r[2] + 0x00000008u); func_089035ac(c, ram); }
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
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000050u);
    c->r[2] = c->r[2] >> 24;
    c->r[2] = c->r[2] & 0x000fu;
    c->r[3] = c->r[2] << 16;
    c->r[2] = 0x10000000u;
    c->r[2] = c->r[3] | c->r[2];
    { c->r[31] = 0x0891e2b4u; c->r[5] = c->r[2] + 0u; func_089207f8(c, ram); }
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
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000050u);
    c->r[2] = 0x00ff0000u;
    c->r[2] = c->r[2] | 0xffffu;
    c->r[3] = c->r[3] & c->r[2];
    c->r[2] = 0x01000000u;
    c->r[2] = c->r[3] | c->r[2];
    { c->r[31] = 0x0891e310u; c->r[5] = c->r[2] + 0u; func_089207f8(c, ram); }
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
    { c->r[31] = 0x0891e364u; c->r[5] = c->r[2] + 0u; func_089207f8(c, ram); }
L_0891e364:
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[3];
    c->r[2] = c->r[2] << 2;
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x0891e384u; c->r[5] = 0u + 0x00000010u; func_0881a1d4(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000058u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000058u);
    mem_w32(ram, c->r[30] + 0x00000054u, c->r[2]);
    { c->r[31] = 0x0891e398u; c->r[16] = c->r[30] + 0x00000030u; func_08820f58(c, ram); }
    c->r[3] = c->r[2] + 0x00000020u;
    c->r[2] = c->r[30] + 0x00000020u;
    c->r[4] = c->r[16] + 0u;
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x0891e3b0u; c->r[6] = c->r[3] + 0u; func_0884c07c(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000030u);
    mem_w32(ram, c->r[30] + 0x00000020u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000034u);
    mem_w32(ram, c->r[30] + 0x00000024u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000038u);
    mem_w32(ram, c->r[30] + 0x00000028u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000003cu);
    mem_w32(ram, c->r[30] + 0x0000002cu, c->r[2]);
    c->r[2] = c->r[30] + 0x00000020u;
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0x08b90000u;
    { c->r[31] = 0x0891e3e4u; c->r[5] = c->r[5] + 0x000054c0u; func_08921f64(c, ram); }
    { int _c = (c->r[2] == 0u); if (_c) goto L_0891e608; }
    mem_w32(ram, c->r[30] + 0x00000050u, 0u);
L_0891e3f0:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000050u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = ((s32)c->r[2] < (s32)c->r[3]) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_0891e40c; }
    { goto L_0891e4f0; }
L_0891e40c:
    c->r[4] = 0x08aa0000u;
    c->r[4] = c->r[4] + 0xfffff540u;
    c->r[5] = 0u + 0x00000058u;
    { c->r[31] = 0x0891e420u; c->r[6] = mem_r32(ram, c->r[30] + 0x00000050u); func_0880ef80(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000054u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000020u);
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    c->r[2] = f2u(c->f[0]);
    c->r[2] = c->r[2] + 0xfffffff4u;
    mem_w16(ram, c->r[3] + 0x00000004u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000054u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000024u);
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    c->r[2] = f2u(c->f[0]);
    c->r[2] = c->r[2] + 0xfffffff8u;
    mem_w16(ram, c->r[3] + 0x00000006u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000054u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r16(ram, c->r[2] + 0x00000008u);
    mem_w16(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000054u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r16(ram, c->r[2] + 0x0000000au);
    mem_w16(ram, c->r[3] + 0x00000002u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000054u);
    c->r[3] = c->r[2] + 0x0000000au;
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000020u);
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    c->r[2] = f2u(c->f[0]);
    c->r[2] = c->r[2] + 0x0000000cu;
    mem_w16(ram, c->r[3] + 0x00000004u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000054u);
    c->r[3] = c->r[2] + 0x0000000au;
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000024u);
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    c->r[2] = f2u(c->f[0]);
    c->r[2] = c->r[2] + 0x00000009u;
    mem_w16(ram, c->r[3] + 0x00000006u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000054u);
    c->r[3] = c->r[2] + 0x0000000au;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r16(ram, c->r[2] + 0x00000028u);
    mem_w16(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000054u);
    c->r[3] = c->r[2] + 0x0000000au;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r16(ram, c->r[2] + 0x0000002au);
    mem_w16(ram, c->r[3] + 0x00000002u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000054u);
    c->r[2] = c->r[2] + 0x00000014u;
    mem_w32(ram, c->r[30] + 0x00000054u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000050u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000050u, c->r[2]); goto L_0891e3f0; }
L_0891e4f0:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x0891e4fcu; c->r[4] = mem_r32(ram, c->r[2] + 0x00000008u); func_089035ac(c, ram); }
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
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000058u);
    c->r[2] = c->r[2] >> 24;
    c->r[2] = c->r[2] & 0x000fu;
    c->r[3] = c->r[2] << 16;
    c->r[2] = 0x10000000u;
    c->r[2] = c->r[3] | c->r[2];
    { c->r[31] = 0x0891e558u; c->r[5] = c->r[2] + 0u; func_089207f8(c, ram); }
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
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000058u);
    c->r[2] = 0x00ff0000u;
    c->r[2] = c->r[2] | 0xffffu;
    c->r[3] = c->r[3] & c->r[2];
    c->r[2] = 0x01000000u;
    c->r[2] = c->r[3] | c->r[2];
    { c->r[31] = 0x0891e5b4u; c->r[5] = c->r[2] + 0u; func_089207f8(c, ram); }
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
    c->r[3] = c->r[2] << 1;
    c->r[2] = 0x04060000u;
    c->r[2] = c->r[3] | c->r[2];
    { c->r[31] = 0x0891e608u; c->r[5] = c->r[2] + 0u; func_089207f8(c, ram); }
L_0891e608:
    c->r[2] = 0x08a90000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0xffffbb00u);
    mem_w32(ram, c->r[30] + 0x00000030u, c->r[2]);
    c->r[2] = 0x08a90000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0xffffbb04u);
    mem_w32(ram, c->r[30] + 0x00000034u, c->r[2]);
    c->r[2] = 0x08a90000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0xffffbb08u);
    mem_w32(ram, c->r[30] + 0x00000038u, c->r[2]);
    c->r[2] = 0x08a90000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0xffffbb0cu);
    mem_w32(ram, c->r[30] + 0x0000003cu, c->r[2]);
    c->r[2] = c->r[30] + 0x00000030u;
    c->r[3] = c->r[30] + 0x00000030u;
    c->r[4] = c->r[2] + 0u;
    c->r[5] = c->r[3] + 0u;
    c->r[6] = 0x08b90000u;
    { c->r[31] = 0x0891e654u; c->r[6] = c->r[6] + 0x000054c0u; func_0884c26c(c, ram); }
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000038u);
    c->f[0] = u2f(0u);
    alx_c_cond_s(c, 14, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_0891e87c; }
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000030u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00006bd8u);
    c->f[1] = c->f[1] * c->f[0];
    c->f[0] = mem_rf32(ram, c->r[30] + 0x0000003cu);
    c->f[0] = c->f[1] / c->f[0];
    mem_wf32(ram, c->r[30] + 0x00000030u, c->f[0]);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000034u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00006bdcu);
    c->f[1] = c->f[1] * c->f[0];
    c->f[0] = mem_rf32(ram, c->r[30] + 0x0000003cu);
    c->f[0] = c->f[1] / c->f[0];
    mem_wf32(ram, c->r[30] + 0x00000034u, c->f[0]);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000030u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00006bd8u);
    c->f[0] = c->f[1] + c->f[0];
    mem_wf32(ram, c->r[30] + 0x00000030u, c->f[0]);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000034u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00006be0u);
    c->f[0] = c->f[1] + c->f[0];
    mem_wf32(ram, c->r[30] + 0x00000034u, c->f[0]);
    c->r[4] = 0u + 0x00000014u;
    { c->r[31] = 0x0891e6d8u; c->r[5] = 0u + 0x00000010u; func_0881a1d4(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000058u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000058u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000030u);
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    c->r[3] = f2u(c->f[0]);
    mem_w16(ram, c->r[2] + 0x00000004u, c->r[3]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000058u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000034u);
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    c->r[3] = f2u(c->f[0]);
    mem_w16(ram, c->r[2] + 0x00000006u, c->r[3]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000058u);
    c->r[2] = 0u + 0x00000110u;
    mem_w16(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000058u);
    c->r[2] = 0u + 0x00000080u;
    mem_w16(ram, c->r[3] + 0x00000002u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000058u);
    c->r[2] = c->r[2] + 0x0000000au;
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000010u);
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    c->r[3] = f2u(c->f[0]);
    mem_w16(ram, c->r[2] + 0x00000004u, c->r[3]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000058u);
    c->r[2] = c->r[2] + 0x0000000au;
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000014u);
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    c->r[3] = f2u(c->f[0]);
    mem_w16(ram, c->r[2] + 0x00000006u, c->r[3]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000058u);
    c->r[3] = c->r[2] + 0x0000000au;
    c->r[2] = 0u + 0x00000146u;
    mem_w16(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000058u);
    c->r[3] = c->r[2] + 0x0000000au;
    c->r[2] = 0u + 0x00000081u;
    mem_w16(ram, c->r[3] + 0x00000002u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x0891e778u; c->r[4] = mem_r32(ram, c->r[2] + 0x00000008u); func_089035ac(c, ram); }
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
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000058u);
    c->r[2] = c->r[2] >> 24;
    c->r[2] = c->r[2] & 0x000fu;
    c->r[3] = c->r[2] << 16;
    c->r[2] = 0x10000000u;
    c->r[2] = c->r[3] | c->r[2];
    { c->r[31] = 0x0891e7d4u; c->r[5] = c->r[2] + 0u; func_089207f8(c, ram); }
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
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000058u);
    c->r[2] = 0x00ff0000u;
    c->r[2] = c->r[2] | 0xffffu;
    c->r[3] = c->r[3] & c->r[2];
    c->r[2] = 0x01000000u;
    c->r[2] = c->r[3] | c->r[2];
    { c->r[31] = 0x0891e830u; c->r[5] = c->r[2] + 0u; func_089207f8(c, ram); }
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
    c->r[5] = 0x04020000u;
    { c->r[31] = 0x0891e87cu; c->r[5] = c->r[5] | 0x0002u; func_089207f8(c, ram); }
L_0891e87c:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000068u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000064u);
    c->r[16] = mem_r32(ram, c->r[29] + 0x00000060u);
    { c->r[29] = c->r[29] + 0x00000070u; return; }
    return; /* fell out of func_0891ded4 */
}

/* func_089214fc  0x089214fc..0x08921540  68 bytes, source=sweep */
void func_089214fc(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089214fcu);
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
    { c->r[31] = 0x0892152cu; c->r[5] = c->r[2] + 0u; func_089207f8(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_089214fc */
}

/* func_089227b4  0x089227b4..0x0892288c  216 bytes, source=sweep */
void func_089227b4(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089227b4u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    c->r[2] = c->r[4] + 0u;
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    mem_w8(ram, c->r[30] + 0x00000000u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = 0x08a50000u;
    c->r[2] = c->r[2] + 0x00007bb4u;
    c->r[3] = c->r[3] + c->r[2];
    c->r[2] = mem_r8(ram, c->r[30] + 0x00000000u);
    mem_w8(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = 0x08aa0000u;
    c->r[2] = c->r[2] + 0xfffff9c4u;
    c->r[3] = c->r[3] + c->r[2];
    c->r[2] = 0u + 0x00000078u;
    mem_w8(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[2] + 0x00000001u;
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]);
L_08922808:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000003u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_08922820; }
    { goto L_0892287c; }
L_08922820:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = 0x08a50000u;
    c->r[2] = c->r[2] + 0x00007bb4u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[3] = mem_r8(ram, c->r[2] + 0x00000000u);
    c->r[2] = 0u + 0x000000ffu;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_0892286c; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = 0x08a50000u;
    c->r[2] = c->r[2] + 0x00007bb4u;
    c->r[3] = c->r[3] + c->r[2];
    c->r[2] = 0u + 0xffffffffu;
    mem_w8(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = 0x08aa0000u;
    c->r[2] = c->r[2] + 0xfffff9c4u;
    c->r[2] = c->r[3] + c->r[2];
    mem_w8(ram, c->r[2] + 0x00000000u, 0u);
L_0892286c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]); goto L_08922808; }
L_0892287c:
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_089227b4 */
}

/* func_08925a70  0x08925a70..0x08925adc  108 bytes, source=sweep */
void func_08925a70(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08925a70u);
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
    { c->r[31] = 0x08925aacu; c->r[5] = c->r[2] + 0u; func_089258bc(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = c->r[2] >> 24;
    c->r[2] = 0x58000000u;
    c->r[2] = c->r[3] | c->r[2];
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x08925ac8u; c->r[5] = c->r[2] + 0u; func_089258bc(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_08925a70 */
}

/* func_089271a4  0x089271a4..0x08927580  988 bytes, source=fde */
void func_089271a4(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089271a4u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_wf32(ram, c->r[30] + 0x00000000u, c->f[12]);
    c->r[1] = 0x08aa0000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0xfffff9f4u);
    c->r[1] = 0x08a80000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00002e40u);
    c->f[0] = c->f[1] + c->f[0];
    c->r[1] = 0x08aa0000u;
    mem_wf32(ram, c->r[1] + 0xfffff9f4u, c->f[0]);
    c->r[1] = 0x08aa0000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0xfffff9f4u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00006f30u);
    alx_c_cond_s(c, 14, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_089271fc; }
    { goto L_08927204; }
L_089271fc:
    c->r[1] = 0x08aa0000u;
    mem_w32(ram, c->r[1] + 0xfffff9f4u, 0u);
L_08927204:
    c->r[1] = 0x08aa0000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0xfffff9f0u);
    c->r[1] = 0x08a80000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00002e40u);
    c->f[0] = c->f[1] + c->f[0];
    c->r[1] = 0x08aa0000u;
    mem_wf32(ram, c->r[1] + 0xfffff9f0u, c->f[0]);
    c->r[1] = 0x08aa0000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0xfffff9f0u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00006f34u);
    alx_c_cond_s(c, 14, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_08927248; }
    { goto L_08927250; }
L_08927248:
    c->r[1] = 0x08aa0000u;
    mem_w32(ram, c->r[1] + 0xfffff9f0u, 0u);
L_08927250:
    c->r[2] = 0x08aa0000u;
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0xfffffa1cu);
    c->r[4] = 0x08a70000u;
    c->r[4] = c->r[4] + 0xffffb640u;
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x0892726cu; c->r[6] = 0u + 0u; func_089e0bd8(c, ram); }
    c->r[4] = 0x08a70000u;
    c->r[4] = c->r[4] + 0xffffb640u;
    c->r[5] = 0u + 0x00000003u;
    { c->r[31] = 0x08927280u; c->r[6] = 0u + 0x00000006u; func_089df7a0(c, ram); }
    c->r[4] = 0x7f400000u;
    c->r[4] = c->r[4] | 0x0505u;
    { c->r[31] = 0x08927290u; c->f[12] = mem_rf32(ram, c->r[30] + 0x00000000u); func_08903b2c(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
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
    { c->r[31] = 0x089272e8u; c->r[5] = mem_r32(ram, c->r[30] + 0x00000004u); func_089289f0(c, ram); }
    { c->r[31] = 0x089272f0u; func_089d2008(c, ram); }
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00006f38u);
    c->r[4] = 0x08aa0000u;
    c->r[4] = c->r[4] + 0xfffff9f8u;
    c->r[5] = 0u + 0x00000001u;
    c->r[6] = 0u + 0x00000002u;
    c->r[7] = 0u + 0u;
    c->r[8] = 0u + 0xffffffffu;
    c->f[12] = c->f[0];
    { c->r[31] = 0x0892731cu; c->r[9] = 0u + 0u; func_08923508(c, ram); }
    c->r[1] = 0x08aa0000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0xfffff9f4u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00006f3cu);
    alx_c_cond_s(c, 12, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_08927344; }
    { goto L_08927370; }
L_08927344:
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00006f38u);
    c->r[4] = 0x08aa0000u;
    c->r[4] = c->r[4] + 0xfffff9f8u;
    c->r[5] = 0u + 0x00000003u;
    c->r[6] = 0u + 0x00000002u;
    c->r[7] = 0u + 0u;
    c->r[8] = 0u + 0xffffffffu;
    c->f[12] = c->f[0];
    { c->r[31] = 0x08927370u; c->r[9] = 0u + 0u; func_08923508(c, ram); }
L_08927370:
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00006f38u);
    c->r[4] = 0x08aa0000u;
    c->r[4] = c->r[4] + 0xfffff9f8u;
    c->r[5] = 0u + 0x00000002u;
    c->r[6] = 0u + 0x00000002u;
    c->r[7] = 0u + 0u;
    c->r[8] = 0u + 0xffffffffu;
    c->f[12] = c->f[0];
    { c->r[31] = 0x0892739cu; c->r[9] = 0u + 0u; func_08923508(c, ram); }
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
    { c->r[31] = 0x089273e8u; c->r[5] = c->r[5] | 0x0102u; func_089289ac(c, ram); }
    c->r[4] = 0x08a70000u;
    c->r[4] = c->r[4] + 0xffffb640u;
    c->r[5] = 0u + 0x00000002u;
    { c->r[31] = 0x089273fcu; c->r[6] = 0u + 0x00000006u; func_089df7a0(c, ram); }
    c->r[4] = 0xff120000u;
    c->r[4] = c->r[4] | 0x0800u;
    { c->r[31] = 0x0892740cu; c->f[12] = mem_rf32(ram, c->r[30] + 0x00000000u); func_08903b2c(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
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
    { c->r[31] = 0x08927464u; c->r[5] = mem_r32(ram, c->r[30] + 0x00000004u); func_089289f0(c, ram); }
    { c->r[31] = 0x0892746cu; func_089d2008(c, ram); }
    c->r[4] = 0x08aa0000u;
    c->r[4] = c->r[4] + 0xfffff9f8u;
    c->r[5] = 0u + 0x00000001u;
    { c->r[31] = 0x08927480u; c->r[6] = 0u + 0xffffffffu; func_089234b0(c, ram); }
    c->r[1] = 0x08aa0000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0xfffff9f4u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00006f3cu);
    alx_c_cond_s(c, 12, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_089274a8; }
    { goto L_089274bc; }
L_089274a8:
    c->r[4] = 0x08aa0000u;
    c->r[4] = c->r[4] + 0xfffff9f8u;
    c->r[5] = 0u + 0x00000003u;
    { c->r[31] = 0x089274bcu; c->r[6] = 0u + 0xffffffffu; func_089234b0(c, ram); }
L_089274bc:
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
    { c->r[31] = 0x08927508u; c->r[5] = c->r[5] | 0x011eu; func_089289ac(c, ram); }
    c->r[4] = 0xff120000u;
    c->r[4] = c->r[4] | 0x0800u;
    { c->r[31] = 0x08927518u; c->f[12] = mem_rf32(ram, c->r[30] + 0x00000000u); func_08903b2c(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[2]);
    c->r[4] = 0x10120000u;
    c->r[4] = c->r[4] | 0x0800u;
    { c->r[31] = 0x0892752cu; c->f[12] = mem_rf32(ram, c->r[30] + 0x00000000u); func_08903b2c(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]);
    c->r[1] = 0x08aa0000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0xfffff9f0u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00006f34u);
    c->f[1] = c->f[1] / c->f[0];
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00006f38u);
    c->f[0] = c->f[0] - c->f[1];
    c->r[4] = 0x08aa0000u;
    c->r[4] = c->r[4] + 0xfffff9f8u;
    c->r[5] = 0u + 0x00000002u;
    c->r[6] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[7] = mem_r32(ram, c->r[30] + 0x00000008u);
    { c->r[31] = 0x0892756cu; c->f[12] = c->f[0]; func_08923908(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_089271a4 */
}

/* func_0892c26c  0x0892c26c..0x0892c51c  688 bytes, source=fde */
void func_0892c26c(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0892c26cu);
    c->r[29] = c->r[29] + 0xffffffd0u;
    mem_w32(ram, c->r[29] + 0x00000024u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000020u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[4]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[4] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x00000020u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[5] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x00000022u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[3] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x00000024u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x00000026u);
    c->r[9] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[6] = c->r[3] + 0u;
    c->r[7] = c->r[2] + 0u;
    c->r[8] = 0u + 0x00000001u;
    { c->r[31] = 0x0892c2b8u; c->r[9] = mem_r32(ram, c->r[9] + 0x00000010u); func_0892a7c4(c, ram); }
    { c->r[31] = 0x0892c2c0u; c->r[4] = 0u + 0x00000046u; func_089c6f04(c, ram); }
    c->r[4] = 0x08a70000u;
    c->r[4] = c->r[4] + 0xffffb640u;
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x0892c2d4u; c->r[6] = 0u + 0u; func_089e0bd8(c, ram); }
    c->r[2] = 0xc8120000u;
    c->r[2] = c->r[2] | 0x0800u;
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000010u);
    c->r[2] = c->r[2] & 0x0004u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_0892c300; }
    c->r[2] = 0xff0c0000u;
    c->r[2] = c->r[2] | 0x094cu;
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
L_0892c300:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000010u);
    c->r[2] = c->r[2] & 0x1000u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_0892c344; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = 0x00ff0000u;
    c->r[2] = c->r[2] | 0xffffu;
    c->r[4] = c->r[3] & c->r[2];
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = 0xff000000u;
    c->r[2] = c->r[3] & c->r[2];
    c->r[3] = c->r[2] >> 1;
    c->r[2] = 0xff000000u;
    c->r[2] = c->r[3] & c->r[2];
    c->r[2] = c->r[4] | c->r[2];
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
L_0892c344:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000010u);
    c->r[2] = c->r[2] & 0x2000u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_0892c3b0; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = 0xff000000u;
    c->r[5] = c->r[3] & c->r[2];
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = 0x00ff0000u;
    c->r[2] = c->r[2] | 0xffffu;
    c->r[2] = c->r[3] & c->r[2];
    c->r[3] = c->r[2] >> 1;
    c->r[2] = 0x007f0000u;
    c->r[2] = c->r[2] | 0x7f7fu;
    c->r[4] = c->r[3] & c->r[2];
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = 0x00ff0000u;
    c->r[2] = c->r[2] | 0xffffu;
    c->r[2] = c->r[3] & c->r[2];
    c->r[3] = c->r[2] >> 3;
    c->r[2] = 0x001f0000u;
    c->r[2] = c->r[2] | 0x1f1fu;
    c->r[2] = c->r[3] & c->r[2];
    c->r[2] = c->r[4] + c->r[2];
    c->r[2] = c->r[5] | c->r[2];
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
L_0892c3b0:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x00000010u);
    c->r[2] = 0x20000000u;
    c->r[2] = c->r[3] & c->r[2];
    c->r[3] = c->r[30] + 0x00000014u;
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x0892c3d0u; c->r[5] = c->r[3] + 0u; func_08933804(c, ram); }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000031u);
    c->r[2] = mem_r16(ram, c->r[4] + 0x00000020u);
    c->r[2] = c->r[2] + c->r[3];
    mem_w16(ram, c->r[30] + 0x00000018u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x00000026u);
    c->r[2] = c->r[2] + 0xfffffffcu;
    c->r[2] = (u32)((s32)c->r[2] >> 1);
    c->r[3] = mem_r16(ram, c->r[3] + 0x00000022u);
    c->r[4] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x0000002eu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000032u);
    alx_mult(c, c->r[3], c->r[2]);
    c->r[2] = c->lo;
    c->r[2] = (u32)((s32)c->r[2] >> 1);
    c->r[3] = c->r[4] + 0u;
    c->r[2] = c->r[3] - c->r[2];
    mem_w16(ram, c->r[30] + 0x0000001au, c->r[2]);
    mem_w32(ram, c->r[30] + 0x0000001cu, 0u);
L_0892c430:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x0000002eu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = ((s32)c->r[2] < (s32)c->r[3]) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_0892c450; }
    { goto L_0892c508; }
L_0892c450:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 2;
    c->r[2] = mem_r32(ram, c->r[4] + 0x00000008u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000004u);
    { int _c = ((s32)c->r[2] < 0); if (_c) goto L_0892c4e4; }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 2;
    c->r[2] = mem_r32(ram, c->r[4] + 0x00000008u);
    c->r[2] = c->r[3] + c->r[2];
    { c->r[31] = 0x0892c4a4u; c->r[4] = mem_r32(ram, c->r[2] + 0x00000004u); func_089241c8(c, ram); }
    c->r[6] = c->r[2] + 0u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000031u);
    c->r[2] = c->r[2] + 0xfffffff9u;
    c->r[3] = c->r[2] & 0x00ffu;
    c->r[8] = (u32)(s32)(s16)mem_r16(ram, c->r[30] + 0x00000018u);
    c->r[9] = (u32)(s32)(s16)mem_r16(ram, c->r[30] + 0x0000001au);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    mem_w32(ram, c->r[29] + 0x00000000u, c->r[2]);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00002dfcu;
    c->r[5] = c->r[3] + 0u;
    c->r[7] = 0u + 0x00000001u;
    c->r[10] = 0u + 0u;
    { c->r[31] = 0x0892c4e4u; c->r[11] = 0u + 0u; func_089ce998(c, ram); }
L_0892c4e4:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000032u);
    c->r[2] = mem_r16(ram, c->r[30] + 0x0000001au);
    c->r[2] = c->r[2] + c->r[3];
    mem_w16(ram, c->r[30] + 0x0000001au, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x0000001cu, c->r[2]); goto L_0892c430; }
L_0892c508:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000024u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000020u);
    { c->r[29] = c->r[29] + 0x00000030u; return; }
    return; /* fell out of func_0892c26c */
}

/* func_089316e4  0x089316e4..0x08931b04  1056 bytes, source=fde */
void func_089316e4(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089316e4u);
    c->r[29] = c->r[29] + 0xffffff80u;
    mem_w32(ram, c->r[29] + 0x00000078u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000074u, c->r[30]);
    mem_w32(ram, c->r[29] + 0x00000070u, c->r[16]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[5] = c->r[30] + 0x00000010u;
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000030u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 2;
    c->r[2] = mem_r32(ram, c->r[4] + 0x00000008u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x00000002u);
    c->r[4] = c->r[5] + 0u;
    c->r[5] = c->r[2] + 0u;
    c->r[6] = 0u + 0u;
    { c->r[31] = 0x0893173cu; c->r[7] = 0u + 0u; func_08932598(c, ram); }
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[30] + 0x00000010u);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000af4u;
    { c->r[31] = 0x08931750u; c->r[5] = c->r[2] + 0u; func_088145a8(c, ram); }
    mem_w8(ram, c->r[30] + 0x00000040u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000036u);
    c->r[2] = 0u + 0x00000005u;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_08931774; }
    c->r[2] = mem_r8(ram, c->r[30] + 0x00000028u);
    { mem_w8(ram, c->r[30] + 0x00000060u, c->r[2]); goto L_08931780; }
L_08931774:
    c->r[2] = 0x08aa0000u;
    c->r[2] = mem_r8(ram, c->r[2] + 0xfffffa48u);
    mem_w8(ram, c->r[30] + 0x00000060u, c->r[2]);
L_08931780:
    c->r[2] = mem_r8(ram, c->r[30] + 0x00000060u);
    mem_w8(ram, c->r[30] + 0x00000041u, c->r[2]);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[30] + 0x00000041u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000014u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_089319fc; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x00000000u);
    c->r[2] = 0u + 0x0000008au;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_089319fc; }
    c->r[4] = (u32)(s32)(s8)mem_r8(ram, c->r[30] + 0x00000040u);
    c->r[2] = 0x66660000u;
    c->r[2] = c->r[2] | 0x6667u;
    alx_mult(c, c->r[4], c->r[2]);
    c->r[2] = c->hi;
    c->r[3] = (u32)((s32)c->r[2] >> 3);
    c->r[2] = (u32)((s32)c->r[4] >> 31);
    c->r[3] = c->r[3] - c->r[2];
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[3];
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[4] - c->r[2];
    c->r[2] = c->r[2] << 24;
    c->r[2] = (u32)((s32)c->r[2] >> 24);
    mem_w32(ram, c->r[30] + 0x00000044u, c->r[2]);
    c->r[4] = (u32)(s32)(s8)mem_r8(ram, c->r[30] + 0x00000040u);
    c->r[2] = 0x66660000u;
    c->r[2] = c->r[2] | 0x6667u;
    alx_mult(c, c->r[4], c->r[2]);
    c->r[2] = c->hi;
    c->r[3] = (u32)((s32)c->r[2] >> 3);
    c->r[2] = (u32)((s32)c->r[4] >> 31);
    c->r[2] = c->r[3] - c->r[2];
    c->r[2] = c->r[2] << 24;
    c->r[2] = (u32)((s32)c->r[2] >> 24);
    mem_w32(ram, c->r[30] + 0x00000048u, c->r[2]);
    c->r[2] = 0x08a40000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x000071c8u);
    mem_w32(ram, c->r[30] + 0x00000050u, c->r[2]);
    c->r[2] = 0x08a40000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x000071ccu);
    mem_w32(ram, c->r[30] + 0x00000054u, c->r[2]);
    c->r[4] = 0x08a70000u;
    c->r[4] = c->r[4] + 0xffffb34cu;
    c->r[5] = 0u + 0u;
    c->r[6] = 0u + 0u;
    { c->r[31] = 0x08931848u; c->r[7] = 0u + 0u; func_089d87d4(c, ram); }
    c->r[16] = c->r[2] + 0u;
    c->r[4] = 0x08a70000u;
    { c->r[31] = 0x08931858u; c->r[4] = c->r[4] + 0xffffb34cu; func_0880d238(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = mem_r32(ram, c->r[16] + 0x00000004u);
    c->r[2] = c->r[3] & c->r[2];
    c->r[2] = c->r[2] & 0x0080u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_089318ac; }
    { c->r[31] = 0x08931878u; func_08925598(c, ram); }
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[30] + 0x00000040u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000048u);
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[30];
    c->r[2] = c->r[2] + 0x00000050u;
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000000u);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[5] = c->r[3] + 0u;
    c->r[6] = c->r[2] + 0u;
    { c->r[31] = 0x089318a4u; c->r[7] = 0u + 0xffffffffu; func_08931474(c, ram); }
    { mem_w8(ram, c->r[30] + 0x00000040u, c->r[2]); goto L_08931924; }
L_089318ac:
    c->r[4] = 0x08a70000u;
    c->r[4] = c->r[4] + 0xffffb34cu;
    c->r[5] = 0u + 0u;
    c->r[6] = 0u + 0u;
    { c->r[31] = 0x089318c4u; c->r[7] = 0u + 0u; func_089d87d4(c, ram); }
    c->r[16] = c->r[2] + 0u;
    c->r[4] = 0x08a70000u;
    { c->r[31] = 0x089318d4u; c->r[4] = c->r[4] + 0xffffb34cu; func_0880d238(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = mem_r32(ram, c->r[16] + 0x00000004u);
    c->r[2] = c->r[3] & c->r[2];
    c->r[2] = c->r[2] & 0x0020u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_08931924; }
    { c->r[31] = 0x089318f4u; func_08925598(c, ram); }
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[30] + 0x00000040u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000048u);
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[30];
    c->r[2] = c->r[2] + 0x00000050u;
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000000u);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[5] = c->r[3] + 0u;
    c->r[6] = c->r[2] + 0u;
    { c->r[31] = 0x08931920u; c->r[7] = 0u + 0x00000001u; func_08931474(c, ram); }
    mem_w8(ram, c->r[30] + 0x00000040u, c->r[2]);
L_08931924:
    c->r[4] = 0x08a70000u;
    c->r[4] = c->r[4] + 0xffffb34cu;
    c->r[5] = 0u + 0u;
    c->r[6] = 0u + 0u;
    { c->r[31] = 0x0893193cu; c->r[7] = 0u + 0u; func_089d87d4(c, ram); }
    c->r[16] = c->r[2] + 0u;
    c->r[4] = 0x08a70000u;
    { c->r[31] = 0x0893194cu; c->r[4] = c->r[4] + 0xffffb34cu; func_0880d238(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = mem_r32(ram, c->r[16] + 0x00000004u);
    c->r[2] = c->r[3] & c->r[2];
    c->r[2] = c->r[2] & 0x0010u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_08931990; }
    { c->r[31] = 0x0893196cu; func_08925598(c, ram); }
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[30] + 0x00000040u);
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[30] + 0x00000054u);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[5] = c->r[2] + 0u;
    c->r[6] = c->r[3] + 0u;
    { c->r[31] = 0x08931988u; c->r[7] = 0u + 0u; func_08931474(c, ram); }
    { mem_w8(ram, c->r[30] + 0x00000040u, c->r[2]); goto L_08931ad0; }
L_08931990:
    c->r[4] = 0x08a70000u;
    c->r[4] = c->r[4] + 0xffffb34cu;
    c->r[5] = 0u + 0u;
    c->r[6] = 0u + 0u;
    { c->r[31] = 0x089319a8u; c->r[7] = 0u + 0u; func_089d87d4(c, ram); }
    c->r[16] = c->r[2] + 0u;
    c->r[4] = 0x08a70000u;
    { c->r[31] = 0x089319b8u; c->r[4] = c->r[4] + 0xffffb34cu; func_0880d238(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = mem_r32(ram, c->r[16] + 0x00000004u);
    c->r[2] = c->r[3] & c->r[2];
    c->r[2] = c->r[2] & 0x0040u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_08931ad0; }
    { c->r[31] = 0x089319d8u; func_08925598(c, ram); }
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[30] + 0x00000040u);
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[30] + 0x00000054u);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[5] = c->r[2] + 0u;
    c->r[6] = c->r[3] + 0u;
    { c->r[31] = 0x089319f4u; c->r[7] = 0u + 0u; func_08931474(c, ram); }
    { mem_w8(ram, c->r[30] + 0x00000040u, c->r[2]); goto L_08931ad0; }
L_089319fc:
    c->r[4] = 0x08a70000u;
    c->r[4] = c->r[4] + 0xffffb34cu;
    c->r[5] = 0u + 0u;
    c->r[6] = 0u + 0u;
    { c->r[31] = 0x08931a14u; c->r[7] = 0u + 0u; func_089d87d4(c, ram); }
    c->r[16] = c->r[2] + 0u;
    c->r[4] = 0x08a70000u;
    { c->r[31] = 0x08931a24u; c->r[4] = c->r[4] + 0xffffb34cu; func_0880d238(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = mem_r32(ram, c->r[16] + 0x00000004u);
    c->r[2] = c->r[3] & c->r[2];
    c->r[2] = c->r[2] & 0x0080u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_08931a68; }
    { c->r[31] = 0x08931a44u; func_08925598(c, ram); }
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[30] + 0x00000040u);
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[30] + 0x00000041u);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[5] = c->r[2] + 0u;
    c->r[6] = c->r[3] + 0u;
    { c->r[31] = 0x08931a60u; c->r[7] = 0u + 0xffffffffu; func_08931474(c, ram); }
    { mem_w8(ram, c->r[30] + 0x00000040u, c->r[2]); goto L_08931ad0; }
L_08931a68:
    c->r[4] = 0x08a70000u;
    c->r[4] = c->r[4] + 0xffffb34cu;
    c->r[5] = 0u + 0u;
    c->r[6] = 0u + 0u;
    { c->r[31] = 0x08931a80u; c->r[7] = 0u + 0u; func_089d87d4(c, ram); }
    c->r[16] = c->r[2] + 0u;
    c->r[4] = 0x08a70000u;
    { c->r[31] = 0x08931a90u; c->r[4] = c->r[4] + 0xffffb34cu; func_0880d238(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = mem_r32(ram, c->r[16] + 0x00000004u);
    c->r[2] = c->r[3] & c->r[2];
    c->r[2] = c->r[2] & 0x0020u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_08931ad0; }
    { c->r[31] = 0x08931ab0u; func_08925598(c, ram); }
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[30] + 0x00000040u);
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[30] + 0x00000041u);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[5] = c->r[2] + 0u;
    c->r[6] = c->r[3] + 0u;
    { c->r[31] = 0x08931accu; c->r[7] = 0u + 0x00000001u; func_08931474(c, ram); }
    mem_w8(ram, c->r[30] + 0x00000040u, c->r[2]);
L_08931ad0:
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[30] + 0x00000010u);
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[30] + 0x00000040u);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000af4u;
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x08931aecu; c->r[6] = c->r[3] + 0u; func_0881456c(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000078u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000074u);
    c->r[16] = mem_r32(ram, c->r[29] + 0x00000070u);
    { c->r[29] = c->r[29] + 0x00000080u; return; }
    return; /* fell out of func_089316e4 */
}

/* func_0893365c  0x0893365c..0x089336a0  68 bytes, source=sweep */
void func_0893365c(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0893365cu);
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
    return; /* fell out of func_0893365c */
}

/* func_08935da4  0x08935da4..0x08935e50  172 bytes, source=sweep */
void func_08935da4(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08935da4u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[2] = 0x08aa0000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0xfffffa94u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_08935dcc; }
    { goto L_08935e40; }
L_08935dcc:
    mem_w32(ram, c->r[30] + 0x00000004u, 0u);
L_08935dd0:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000007u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_08935de8; }
    { goto L_08935e30; }
L_08935de8:
    c->r[3] = 0x08aa0000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0xfffffa94u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[4] = c->r[2] + 0x00000010u;
    c->r[3] = 0x08aa0000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0xfffffa94u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[2] = c->r[2] + 0x00000012u;
    c->r[2] = mem_r16(ram, c->r[2] + 0x0000000cu);
    mem_w16(ram, c->r[4] + 0x0000000cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000004u, c->r[2]); goto L_08935dd0; }
L_08935e30:
    c->r[3] = 0x08aa0000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0xfffffa94u);
    c->r[2] = mem_r16(ram, c->r[30] + 0x00000000u);
    mem_w16(ram, c->r[3] + 0x0000002au, c->r[2]);
L_08935e40:
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_08935da4 */
}

/* func_0893c054  0x0893c054..0x0893c090  60 bytes, source=sweep */
void func_0893c054(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0893c054u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000004u);
    { c->r[31] = 0x0893c07cu; c->r[6] = 0u + 0x00000001u; func_0893c334(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_0893c054 */
}

/* func_0893d5a4  0x0893d5a4..0x0893d5e0  60 bytes, source=sweep */
void func_0893d5a4(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0893d5a4u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000004u);
    { c->r[31] = 0x0893d5ccu; c->r[6] = 0u + 0u; func_0893d6d0(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_0893d5a4 */
}

/* func_0893e480  0x0893e480..0x0893e4fc  124 bytes, source=fde */
void func_0893e480(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0893e480u);
    c->r[29] = c->r[29] + 0xffffffc0u;
    mem_w32(ram, c->r[29] + 0x00000034u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000030u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[6]);
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[7]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08a60000u;
    c->r[2] = c->r[2] + 0xffff80f0u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[3] = c->r[30] + 0x00000010u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[6] = 0u + 0x00000002u;
    { u32 _t = c->r[2]; c->r[31] = 0x0893e4e0u; c->r[7] = c->r[3] + 0u; recomp_call_indirect(c, ram, 0x0893e4d8u, _t); }
    mem_w32(ram, c->r[30] + 0x00000020u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000034u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000030u);
    { c->r[29] = c->r[29] + 0x00000040u; return; }
    return; /* fell out of func_0893e480 */
}

/* func_089405fc  0x089405fc..0x08940640  68 bytes, source=sweep */
void func_089405fc(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089405fcu);
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
    { c->r[31] = 0x0894062cu; c->r[5] = c->r[2] + 0u; func_0893f9e4(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_089405fc */
}

/* func_08945c60  0x08945c60..0x08945c94  52 bytes, source=sweep */
void func_08945c60(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08945c60u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x08945c80u; c->r[5] = 0xcb000000u; func_0894568c(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_08945c60 */
}

/* func_0894a740  0x0894a740..0x0894b6a0  3936 bytes, source=sweep */
void func_0894a740(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0894a740u);
    c->r[29] = c->r[29] + 0xffffffd0u;
    mem_w32(ram, c->r[29] + 0x00000024u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000020u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = 0u | 0xffffu;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_0894a7b4; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = 0u + 0x00000001u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_0894a7b4; }
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00007a30u);
    c->r[1] = 0x08a40000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0x00007a34u);
    c->r[1] = 0x08a40000u;
    c->f[2] = mem_rf32(ram, c->r[1] + 0x00007a38u);
    c->r[1] = 0x08a40000u;
    c->f[3] = mem_rf32(ram, c->r[1] + 0x00007a38u);
    c->r[4] = 0x08aa0000u;
    c->r[4] = c->r[4] + 0x000035e0u;
    c->f[12] = c->f[0];
    c->f[13] = c->f[1];
    c->f[14] = c->f[2];
    { c->r[31] = 0x0894a7b4u; c->f[15] = c->f[3]; func_0880d140(c, ram); }
L_0894a7b4:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = 0u | 0xffffu;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_0894a810; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = 0u + 0x00000001u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_0894a810; }
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00007a34u);
    c->r[1] = 0x08a40000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0x00007a3cu);
    c->r[1] = 0x08a40000u;
    c->f[2] = mem_rf32(ram, c->r[1] + 0x00007a40u);
    c->r[1] = 0x08a40000u;
    c->f[3] = mem_rf32(ram, c->r[1] + 0x00007a38u);
    c->r[4] = 0x08aa0000u;
    c->r[4] = c->r[4] + 0x000035f0u;
    c->f[12] = c->f[0];
    c->f[13] = c->f[1];
    c->f[14] = c->f[2];
    { c->r[31] = 0x0894a810u; c->f[15] = c->f[3]; func_0880d140(c, ram); }
L_0894a810:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = 0u | 0xffffu;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_0894a86c; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = 0u + 0x00000001u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_0894a86c; }
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00007a44u);
    c->r[1] = 0x08a40000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0x00007a48u);
    c->r[1] = 0x08a40000u;
    c->f[2] = mem_rf32(ram, c->r[1] + 0x00007a3cu);
    c->r[1] = 0x08a40000u;
    c->f[3] = mem_rf32(ram, c->r[1] + 0x00007a38u);
    c->r[4] = 0x08aa0000u;
    c->r[4] = c->r[4] + 0x00003600u;
    c->f[12] = c->f[0];
    c->f[13] = c->f[1];
    c->f[14] = c->f[2];
    { c->r[31] = 0x0894a86cu; c->f[15] = c->f[3]; func_0880d140(c, ram); }
L_0894a86c:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = 0u | 0xffffu;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_0894aae8; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = 0u + 0x00000001u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_0894aae8; }
    c->r[2] = 0x08aa0000u;
    c->r[2] = c->r[2] + 0x00003620u;
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
    c->r[2] = 0u + 0x00000007u;
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00007a4cu);
    c->r[1] = 0x08a40000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0x00007a38u);
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0u + 0u;
    c->r[6] = 0u + 0u;
    c->f[12] = u2f(0u);
    c->f[13] = c->f[0];
    { c->r[31] = 0x0894a8d8u; c->f[14] = c->f[1]; func_0894c604(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x00000010u;
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = c->r[2] + 0xffffffffu;
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00007a38u);
    c->r[1] = 0x08a40000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0x00007a38u);
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0u | 0xffffu;
    c->r[6] = 0u + 0u;
    c->f[12] = u2f(0u);
    c->f[13] = c->f[0];
    { c->r[31] = 0x0894a920u; c->f[14] = c->f[1]; func_0894c604(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x00000010u;
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = c->r[2] + 0xffffffffu;
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00007a38u);
    c->r[1] = 0x08a40000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0x00007a4cu);
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0u | 0xffffu;
    c->r[6] = 0u | 0xffffu;
    c->f[12] = u2f(0u);
    c->f[13] = c->f[0];
    { c->r[31] = 0x0894a968u; c->f[14] = c->f[1]; func_0894c604(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x00000010u;
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = c->r[2] + 0xffffffffu;
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00007a4cu);
    c->r[1] = 0x08a40000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0x00007a4cu);
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0u + 0u;
    c->r[6] = 0u | 0xffffu;
    c->f[12] = u2f(0u);
    c->f[13] = c->f[0];
    { c->r[31] = 0x0894a9b0u; c->f[14] = c->f[1]; func_0894c604(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x00000010u;
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = c->r[2] + 0xffffffffu;
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00007a4cu);
    c->r[1] = 0x08a40000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0x00007a38u);
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0u + 0u;
    c->r[6] = 0u + 0u;
    c->f[12] = u2f(0u);
    c->f[13] = c->f[0];
    { c->r[31] = 0x0894a9f8u; c->f[14] = c->f[1]; func_0894c604(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x00000010u;
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = c->r[2] + 0xffffffffu;
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00007a38u);
    c->r[1] = 0x08a40000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0x00007a38u);
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0u | 0xffffu;
    c->r[6] = 0u + 0u;
    c->f[12] = u2f(0u);
    c->f[13] = c->f[0];
    { c->r[31] = 0x0894aa40u; c->f[14] = c->f[1]; func_0894c604(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x00000010u;
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = c->r[2] + 0xffffffffu;
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00007a38u);
    c->r[1] = 0x08a40000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0x00007a4cu);
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0u | 0xffffu;
    c->r[6] = 0u | 0xffffu;
    c->f[12] = u2f(0u);
    c->f[13] = c->f[0];
    { c->r[31] = 0x0894aa88u; c->f[14] = c->f[1]; func_0894c604(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x00000010u;
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = c->r[2] + 0xffffffffu;
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00007a4cu);
    c->r[1] = 0x08a40000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0x00007a4cu);
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0u + 0u;
    c->r[6] = 0u | 0xffffu;
    c->f[12] = u2f(0u);
    c->f[13] = c->f[0];
    { c->r[31] = 0x0894aad0u; c->f[14] = c->f[1]; func_0894c604(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x00000010u;
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = c->r[2] + 0xffffffffu;
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]);
L_0894aae8:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = 0u | 0xffffu;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_0894b004; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = 0u + 0x00000001u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_0894b004; }
    c->r[2] = 0x08aa0000u;
    c->r[2] = c->r[2] + 0x000036a0u;
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
    c->r[2] = 0u + 0x0000000fu;
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00007a4cu);
    c->r[1] = 0x08a40000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0x00007a38u);
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0u + 0u;
    c->r[6] = 0u + 0u;
    c->f[12] = u2f(0u);
    c->f[13] = c->f[0];
    { c->r[31] = 0x0894ab54u; c->f[14] = c->f[1]; func_0894c604(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x00000010u;
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[2] + 0xffffffffu;
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00007a38u);
    c->r[1] = 0x08a40000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0x00007a38u);
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0u | 0xffffu;
    c->r[6] = 0u + 0u;
    c->f[12] = u2f(0u);
    c->f[13] = c->f[0];
    { c->r[31] = 0x0894ab9cu; c->f[14] = c->f[1]; func_0894c604(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x00000010u;
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[2] + 0xffffffffu;
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00007a38u);
    c->r[1] = 0x08a40000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0x00007a4cu);
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0u | 0xffffu;
    c->r[6] = 0u | 0xffffu;
    c->f[12] = u2f(0u);
    c->f[13] = c->f[0];
    { c->r[31] = 0x0894abe4u; c->f[14] = c->f[1]; func_0894c604(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x00000010u;
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[2] + 0xffffffffu;
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00007a4cu);
    c->r[1] = 0x08a40000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0x00007a4cu);
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0u + 0u;
    c->r[6] = 0u | 0xffffu;
    c->f[12] = u2f(0u);
    c->f[13] = c->f[0];
    { c->r[31] = 0x0894ac2cu; c->f[14] = c->f[1]; func_0894c604(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x00000010u;
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[2] + 0xffffffffu;
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00007a3cu);
    c->r[1] = 0x08a40000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0x00007a4cu);
    c->r[1] = 0x08a40000u;
    c->f[2] = mem_rf32(ram, c->r[1] + 0x00007a38u);
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0u + 0u;
    c->r[6] = 0u + 0u;
    c->f[12] = c->f[0];
    c->f[13] = c->f[1];
    { c->r[31] = 0x0894ac7cu; c->f[14] = c->f[2]; func_0894c604(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x00000010u;
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[2] + 0xffffffffu;
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00007a3cu);
    c->r[1] = 0x08a40000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0x00007a38u);
    c->r[1] = 0x08a40000u;
    c->f[2] = mem_rf32(ram, c->r[1] + 0x00007a38u);
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0u | 0xffffu;
    c->r[6] = 0u + 0u;
    c->f[12] = c->f[0];
    c->f[13] = c->f[1];
    { c->r[31] = 0x0894acccu; c->f[14] = c->f[2]; func_0894c604(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x00000010u;
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[2] + 0xffffffffu;
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00007a3cu);
    c->r[1] = 0x08a40000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0x00007a38u);
    c->r[1] = 0x08a40000u;
    c->f[2] = mem_rf32(ram, c->r[1] + 0x00007a4cu);
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0u | 0xffffu;
    c->r[6] = 0u | 0xffffu;
    c->f[12] = c->f[0];
    c->f[13] = c->f[1];
    { c->r[31] = 0x0894ad1cu; c->f[14] = c->f[2]; func_0894c604(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x00000010u;
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[2] + 0xffffffffu;
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00007a3cu);
    c->r[1] = 0x08a40000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0x00007a4cu);
    c->r[1] = 0x08a40000u;
    c->f[2] = mem_rf32(ram, c->r[1] + 0x00007a4cu);
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0u + 0u;
    c->r[6] = 0u | 0xffffu;
    c->f[12] = c->f[0];
    c->f[13] = c->f[1];
    { c->r[31] = 0x0894ad6cu; c->f[14] = c->f[2]; func_0894c604(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x00000010u;
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[2] + 0xffffffffu;
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00007a40u);
    c->r[1] = 0x08a40000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0x00007a4cu);
    c->r[1] = 0x08a40000u;
    c->f[2] = mem_rf32(ram, c->r[1] + 0x00007a38u);
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0u + 0u;
    c->r[6] = 0u | 0xffffu;
    c->f[12] = c->f[0];
    c->f[13] = c->f[1];
    { c->r[31] = 0x0894adbcu; c->f[14] = c->f[2]; func_0894c604(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x00000010u;
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[2] + 0xffffffffu;
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00007a40u);
    c->r[1] = 0x08a40000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0x00007a38u);
    c->r[1] = 0x08a40000u;
    c->f[2] = mem_rf32(ram, c->r[1] + 0x00007a38u);
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0u | 0xffffu;
    c->r[6] = 0u | 0xffffu;
    c->f[12] = c->f[0];
    c->f[13] = c->f[1];
    { c->r[31] = 0x0894ae0cu; c->f[14] = c->f[2]; func_0894c604(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x00000010u;
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[2] + 0xffffffffu;
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00007a40u);
    c->r[1] = 0x08a40000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0x00007a38u);
    c->r[1] = 0x08a40000u;
    c->f[2] = mem_rf32(ram, c->r[1] + 0x00007a4cu);
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0u | 0xffffu;
    c->r[6] = 0u + 0u;
    c->f[12] = c->f[0];
    c->f[13] = c->f[1];
    { c->r[31] = 0x0894ae5cu; c->f[14] = c->f[2]; func_0894c604(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x00000010u;
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[2] + 0xffffffffu;
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00007a40u);
    c->r[1] = 0x08a40000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0x00007a4cu);
    c->r[1] = 0x08a40000u;
    c->f[2] = mem_rf32(ram, c->r[1] + 0x00007a4cu);
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0u + 0u;
    c->r[6] = 0u + 0u;
    c->f[12] = c->f[0];
    c->f[13] = c->f[1];
    { c->r[31] = 0x0894aeacu; c->f[14] = c->f[2]; func_0894c604(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x00000010u;
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[2] + 0xffffffffu;
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00007a30u);
    c->r[1] = 0x08a40000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0x00007a4cu);
    c->r[1] = 0x08a40000u;
    c->f[2] = mem_rf32(ram, c->r[1] + 0x00007a38u);
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0u + 0u;
    c->r[6] = 0u | 0xffffu;
    c->f[12] = c->f[0];
    c->f[13] = c->f[1];
    { c->r[31] = 0x0894aefcu; c->f[14] = c->f[2]; func_0894c604(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x00000010u;
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[2] + 0xffffffffu;
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00007a30u);
    c->r[1] = 0x08a40000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0x00007a38u);
    c->r[1] = 0x08a40000u;
    c->f[2] = mem_rf32(ram, c->r[1] + 0x00007a38u);
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0u | 0xffffu;
    c->r[6] = 0u | 0xffffu;
    c->f[12] = c->f[0];
    c->f[13] = c->f[1];
    { c->r[31] = 0x0894af4cu; c->f[14] = c->f[2]; func_0894c604(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x00000010u;
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[2] + 0xffffffffu;
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00007a30u);
    c->r[1] = 0x08a40000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0x00007a38u);
    c->r[1] = 0x08a40000u;
    c->f[2] = mem_rf32(ram, c->r[1] + 0x00007a4cu);
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0u | 0xffffu;
    c->r[6] = 0u + 0u;
    c->f[12] = c->f[0];
    c->f[13] = c->f[1];
    { c->r[31] = 0x0894af9cu; c->f[14] = c->f[2]; func_0894c604(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x00000010u;
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[2] + 0xffffffffu;
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00007a30u);
    c->r[1] = 0x08a40000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0x00007a4cu);
    c->r[1] = 0x08a40000u;
    c->f[2] = mem_rf32(ram, c->r[1] + 0x00007a4cu);
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0u + 0u;
    c->r[6] = 0u + 0u;
    c->f[12] = c->f[0];
    c->f[13] = c->f[1];
    { c->r[31] = 0x0894afecu; c->f[14] = c->f[2]; func_0894c604(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x00000010u;
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[2] + 0xffffffffu;
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]);
L_0894b004:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = 0u | 0xffffu;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_0894b610; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = 0u + 0x00000001u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_0894b610; }
    c->r[2] = 0x08aa0000u;
    c->r[2] = c->r[2] + 0x000037a0u;
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
    c->r[2] = 0u + 0x00000013u;
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00007a50u);
    c->r[1] = 0x08a40000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0x00007a40u);
    c->r[1] = 0x08a40000u;
    c->f[2] = mem_rf32(ram, c->r[1] + 0x00007a54u);
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0u + 0u;
    c->r[6] = 0u + 0u;
    c->f[12] = c->f[0];
    c->f[13] = c->f[1];
    { c->r[31] = 0x0894b078u; c->f[14] = c->f[2]; func_0894c604(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x00000010u;
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[2] + 0xffffffffu;
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00007a58u);
    c->r[1] = 0x08a40000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0x00007a54u);
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0u + 0u;
    c->r[6] = 0u | 0xffffu;
    c->f[12] = u2f(0u);
    c->f[13] = c->f[0];
    { c->r[31] = 0x0894b0c0u; c->f[14] = c->f[1]; func_0894c604(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x00000010u;
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[2] + 0xffffffffu;
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00007a50u);
    c->r[1] = 0x08a40000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0x00007a5cu);
    c->r[1] = 0x08a40000u;
    c->f[2] = mem_rf32(ram, c->r[1] + 0x00007a60u);
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0u + 0x00003fffu;
    c->r[6] = 0u + 0u;
    c->f[12] = c->f[0];
    c->f[13] = c->f[1];
    { c->r[31] = 0x0894b110u; c->f[14] = c->f[2]; func_0894c604(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x00000010u;
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[2] + 0xffffffffu;
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00007a64u);
    c->r[1] = 0x08a40000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0x00007a68u);
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0u + 0x00003fffu;
    c->r[6] = 0u | 0xffffu;
    c->f[12] = u2f(0u);
    c->f[13] = c->f[0];
    { c->r[31] = 0x0894b158u; c->f[14] = c->f[1]; func_0894c604(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x00000010u;
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[2] + 0xffffffffu;
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00007a50u);
    c->r[1] = 0x08a40000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0x00007a6cu);
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0u + 0x00007fffu;
    c->r[6] = 0u + 0u;
    c->f[12] = c->f[0];
    c->f[13] = u2f(0u);
    { c->r[31] = 0x0894b1a0u; c->f[14] = c->f[1]; func_0894c604(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x00000010u;
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[2] + 0xffffffffu;
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00007a70u);
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0u + 0x00007fffu;
    c->r[6] = 0u | 0xffffu;
    c->f[12] = u2f(0u);
    c->f[13] = u2f(0u);
    { c->r[31] = 0x0894b1e0u; c->f[14] = c->f[0]; func_0894c604(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x00000010u;
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[2] + 0xffffffffu;
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00007a50u);
    c->r[1] = 0x08a40000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0x00007a60u);
    c->r[1] = 0x08a40000u;
    c->f[2] = mem_rf32(ram, c->r[1] + 0x00007a60u);
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0u | 0xbfffu;
    c->r[6] = 0u + 0u;
    c->f[12] = c->f[0];
    c->f[13] = c->f[1];
    { c->r[31] = 0x0894b230u; c->f[14] = c->f[2]; func_0894c604(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x00000010u;
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[2] + 0xffffffffu;
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00007a68u);
    c->r[1] = 0x08a40000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0x00007a68u);
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0u | 0xbfffu;
    c->r[6] = 0u | 0xffffu;
    c->f[12] = u2f(0u);
    c->f[13] = c->f[0];
    { c->r[31] = 0x0894b278u; c->f[14] = c->f[1]; func_0894c604(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x00000010u;
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[2] + 0xffffffffu;
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00007a50u);
    c->r[1] = 0x08a40000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0x00007a6cu);
    c->r[1] = 0x08a40000u;
    c->f[2] = mem_rf32(ram, c->r[1] + 0x00007a54u);
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0u | 0xffffu;
    c->r[6] = 0u + 0u;
    c->f[12] = c->f[0];
    c->f[13] = c->f[1];
    { c->r[31] = 0x0894b2c8u; c->f[14] = c->f[2]; func_0894c604(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x00000010u;
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[2] + 0xffffffffu;
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00007a70u);
    c->r[1] = 0x08a40000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0x00007a54u);
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0u | 0xffffu;
    c->r[6] = 0u | 0xffffu;
    c->f[12] = u2f(0u);
    c->f[13] = c->f[0];
    { c->r[31] = 0x0894b310u; c->f[14] = c->f[1]; func_0894c604(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x00000010u;
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[2] + 0xffffffffu;
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00007a74u);
    c->r[1] = 0x08a40000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0x00007a3cu);
    c->r[1] = 0x08a40000u;
    c->f[2] = mem_rf32(ram, c->r[1] + 0x00007a54u);
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0u + 0u;
    c->r[6] = 0u + 0u;
    c->f[12] = c->f[0];
    c->f[13] = c->f[1];
    { c->r[31] = 0x0894b360u; c->f[14] = c->f[2]; func_0894c604(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x00000010u;
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[2] + 0xffffffffu;
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00007a78u);
    c->r[1] = 0x08a40000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0x00007a54u);
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0u + 0u;
    c->r[6] = 0u | 0xffffu;
    c->f[12] = u2f(0u);
    c->f[13] = c->f[0];
    { c->r[31] = 0x0894b3a8u; c->f[14] = c->f[1]; func_0894c604(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x00000010u;
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[2] + 0xffffffffu;
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00007a74u);
    c->r[1] = 0x08a40000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0x00007a7cu);
    c->r[1] = 0x08a40000u;
    c->f[2] = mem_rf32(ram, c->r[1] + 0x00007a80u);
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0u + 0x00003fffu;
    c->r[6] = 0u + 0u;
    c->f[12] = c->f[0];
    c->f[13] = c->f[1];
    { c->r[31] = 0x0894b3f8u; c->f[14] = c->f[2]; func_0894c604(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x00000010u;
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[2] + 0xffffffffu;
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00007a84u);
    c->r[1] = 0x08a40000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0x00007a88u);
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0u + 0x00003fffu;
    c->r[6] = 0u | 0xffffu;
    c->f[12] = u2f(0u);
    c->f[13] = c->f[0];
    { c->r[31] = 0x0894b440u; c->f[14] = c->f[1]; func_0894c604(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x00000010u;
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[2] + 0xffffffffu;
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00007a74u);
    c->r[1] = 0x08a40000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0x00007a8cu);
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0u + 0x00007fffu;
    c->r[6] = 0u + 0u;
    c->f[12] = c->f[0];
    c->f[13] = u2f(0u);
    { c->r[31] = 0x0894b488u; c->f[14] = c->f[1]; func_0894c604(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x00000010u;
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[2] + 0xffffffffu;
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00007a90u);
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0u + 0x00007fffu;
    c->r[6] = 0u | 0xffffu;
    c->f[12] = u2f(0u);
    c->f[13] = u2f(0u);
    { c->r[31] = 0x0894b4c8u; c->f[14] = c->f[0]; func_0894c604(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x00000010u;
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[2] + 0xffffffffu;
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00007a74u);
    c->r[1] = 0x08a40000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0x00007a80u);
    c->r[1] = 0x08a40000u;
    c->f[2] = mem_rf32(ram, c->r[1] + 0x00007a80u);
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0u | 0xbfffu;
    c->r[6] = 0u + 0u;
    c->f[12] = c->f[0];
    c->f[13] = c->f[1];
    { c->r[31] = 0x0894b518u; c->f[14] = c->f[2]; func_0894c604(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x00000010u;
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[2] + 0xffffffffu;
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00007a88u);
    c->r[1] = 0x08a40000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0x00007a88u);
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0u | 0xbfffu;
    c->r[6] = 0u | 0xffffu;
    c->f[12] = u2f(0u);
    c->f[13] = c->f[0];
    { c->r[31] = 0x0894b560u; c->f[14] = c->f[1]; func_0894c604(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x00000010u;
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[2] + 0xffffffffu;
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00007a74u);
    c->r[1] = 0x08a40000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0x00007a8cu);
    c->r[1] = 0x08a40000u;
    c->f[2] = mem_rf32(ram, c->r[1] + 0x00007a54u);
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0u | 0xffffu;
    c->r[6] = 0u + 0u;
    c->f[12] = c->f[0];
    c->f[13] = c->f[1];
    { c->r[31] = 0x0894b5b0u; c->f[14] = c->f[2]; func_0894c604(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x00000010u;
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[2] + 0xffffffffu;
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00007a90u);
    c->r[1] = 0x08a40000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0x00007a54u);
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0u | 0xffffu;
    c->r[6] = 0u | 0xffffu;
    c->f[12] = u2f(0u);
    c->f[13] = c->f[0];
    { c->r[31] = 0x0894b5f8u; c->f[14] = c->f[1]; func_0894c604(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x00000010u;
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[2] + 0xffffffffu;
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]);
L_0894b610:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = 0u | 0xffffu;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_0894b68c; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = 0u + 0x00000001u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_0894b68c; }
    c->r[2] = 0x08aa0000u;
    c->r[2] = c->r[2] + 0x000038e0u;
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
    c->r[2] = 0u + 0x00000003u;
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = 0u + 0xffffffffu;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_0894b68c; }
L_0894b65c:
    { c->r[31] = 0x0894b664u; c->r[4] = mem_r32(ram, c->r[30] + 0x0000000cu); func_08808240(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x00000010u;
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[2] + 0xffffffffu;
    c->r[3] = c->r[2] + 0u;
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[3]);
    c->r[2] = 0u + 0xffffffffu;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_0894b65c; }
L_0894b68c:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000024u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000020u);
    { c->r[29] = c->r[29] + 0x00000030u; return; }
    return; /* fell out of func_0894a740 */
}

/* func_0894c450  0x0894c450..0x0894c4c0  112 bytes, source=sweep */
void func_0894c450(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0894c450u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_0894c484; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = 0u + 0x00000001u;
    { mem_w32(ram, c->r[3] + 0x00000060u, c->r[2]); goto L_0894c48c; }
L_0894c484:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    mem_w32(ram, c->r[2] + 0x00000060u, 0u);
L_0894c48c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[7] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = mem_r32(ram, c->r[2] + 0x00000064u);
    c->r[6] = mem_r32(ram, c->r[3] + 0x00000068u);
    { c->r[31] = 0x0894c4acu; c->r[7] = mem_r32(ram, c->r[7] + 0x00000060u); func_0894c4c0(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_0894c450 */
}

/* func_08953938  0x08953938..0x089539ac  116 bytes, source=sweep */
void func_08953938(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08953938u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[5] = (u32)((s32)c->r[2] >> 2);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 3;
    c->r[2] = c->r[2] + c->r[3];
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[3];
    c->r[2] = c->r[2] + 0x0000000bu;
    mem_w32(ram, c->r[4] + 0x00000000u, c->r[2]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[2] = 0x7fff0000u;
    c->r[2] = c->r[2] | 0xffffu;
    c->r[2] = c->r[3] & c->r[2];
    mem_w32(ram, c->r[4] + 0x00000000u, c->r[2]);
    c->r[2] = c->r[5] + 0u;
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_08953938 */
}

/* func_089559c0  0x089559c0..0x08955a6c  172 bytes, source=sweep */
void func_089559c0(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089559c0u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_08955a20; }
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
    { c->r[31] = 0x08955a18u; c->r[8] = mem_r32(ram, c->r[8] + 0x00000034u); func_08955b40(c, ram); }
    { goto L_08955a58; }
L_08955a20:
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
    { c->r[31] = 0x08955a58u; c->r[8] = c->r[2] + 0u; func_08955b40(c, ram); }
L_08955a58:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_089559c0 */
}

/* func_089587e0  0x089587e0..0x08958850  112 bytes, source=sweep */
void func_089587e0(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089587e0u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_08958814; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = 0u + 0x00000001u;
    { mem_w32(ram, c->r[3] + 0x00000060u, c->r[2]); goto L_0895881c; }
L_08958814:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    mem_w32(ram, c->r[2] + 0x00000060u, 0u);
L_0895881c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[7] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = mem_r32(ram, c->r[2] + 0x00000064u);
    c->r[6] = mem_r32(ram, c->r[3] + 0x00000068u);
    { c->r[31] = 0x0895883cu; c->r[7] = mem_r32(ram, c->r[7] + 0x00000060u); func_08958850(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_089587e0 */
}

/* func_0895b514  0x0895b514..0x0895b58c  120 bytes, source=sweep */
void func_0895b514(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0895b514u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    c->r[2] = 0x08aa0000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00004964u);
    c->r[3] = 0x00040000u;
    c->r[2] = c->r[2] & c->r[3];
    { int _c = (c->r[2] == 0u); if (_c) goto L_0895b574; }
    c->r[2] = 0x08aa0000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x000049d4u);
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[2]);
    c->r[3] = 0x08aa0000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00004964u);
    c->r[2] = 0xfffb0000u;
    c->r[2] = c->r[2] | 0xffffu;
    c->r[2] = c->r[3] & c->r[2];
    c->r[1] = 0x08aa0000u;
    mem_w32(ram, c->r[1] + 0x00004964u, c->r[2]);
    c->r[1] = 0x08aa0000u;
    mem_w32(ram, c->r[1] + 0x000049d4u, 0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    { mem_w32(ram, c->r[30] + 0x00000004u, c->r[2]); goto L_0895b578; }
L_0895b574:
    mem_w32(ram, c->r[30] + 0x00000004u, 0u);
L_0895b578:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_0895b514 */
}

/* func_0895f544  0x0895f544..0x0895f76c  552 bytes, source=fde */
void func_0895f544(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0895f544u);
    c->r[29] = c->r[29] + 0xffffffd0u;
    mem_w32(ram, c->r[29] + 0x00000024u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000020u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    c->r[2] = 0x08aa0000u;
    c->r[2] = c->r[2] + 0x00004960u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[2]);
    c->r[2] = 0x08aa0000u;
    c->r[2] = c->r[2] + 0x00005200u;
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[2]);
    c->r[4] = 0u + 0x0000003au;
    c->r[5] = 0u + 0u;
    c->r[6] = 0u + 0u;
    c->r[7] = 0u + 0u;
    c->r[8] = 0u + 0u;
    { c->r[31] = 0x0895f588u; c->r[9] = 0u + 0u; func_089c6bec(c, ram); }
    c->r[2] = 0x08aa0000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x000052e8u);
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x00000004u);
    c->r[1] = 0x08aa0000u;
    { c->r[31] = 0x0895f5a0u; mem_w32(ram, c->r[1] + 0xffffebe0u, c->r[2]); func_08895450(c, ram); }
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x0895f5b0u; c->r[4] = c->r[4] + 0x00000af4u; func_08813c00(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]);
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x0895f5c0u; c->r[4] = c->r[4] + 0x00000af4u; func_0880d380(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
    mem_w32(ram, c->r[30] + 0x00000008u, 0u);
L_0895f5c8:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[3] = 0x08aa0000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0xffffebe0u);
    c->r[2] = ((s32)c->r[2] < (s32)c->r[3]) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_0895f5e8; }
    { goto L_0895f654; }
L_0895f5e8:
    c->r[2] = 0x08aa0000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x000052ecu);
    mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = 0u + 0x0000002cu;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[3] = c->lo;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000003u);
    c->r[2] = c->r[2] & 0x000cu;
    { int _c = (c->r[2] != 0u); if (_c) goto L_0895f644; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = 0u + 0x0000002cu;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[3] = c->lo;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[4] = c->r[2] + 0u;
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000008u);
    { c->r[31] = 0x0895f644u; c->r[6] = 0u + 0u; func_0895ee18(c, ram); }
L_0895f644:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]); goto L_0895f5c8; }
L_0895f654:
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x0895f660u; c->r[4] = c->r[4] + 0x00000af4u; func_0880810c(c, ram); }
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x0895f66cu; c->r[5] = 0u + 0u; func_08968c78(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]);
    c->r[2] = mem_r8(ram, c->r[30] + 0x00000018u);
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x0895f680u; c->r[5] = 0u + 0u; func_089226dc(c, ram); }
    { c->r[31] = 0x0895f688u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u); func_0895ef8c(c, ram); }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000004u);
    mem_w32(ram, c->r[3] + 0x00000010u, c->r[2]);
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x0895f6a8u; c->r[4] = c->r[4] + 0x00000af4u; func_08820d70(c, ram); }
    c->r[2] = c->r[2] & 0x0001u;
    c->r[2] = c->r[2] & 0x00ffu;
    { int _c = (c->r[2] == 0u); if (_c) goto L_0895f6d8; }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x00000010u);
    c->r[2] = (u32)((s32)c->r[3] >> 31);
    c->r[2] = c->r[2] >> 31;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = (u32)((s32)c->r[2] >> 1);
    mem_w32(ram, c->r[4] + 0x00000010u, c->r[2]);
L_0895f6d8:
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x0895f6e4u; c->r[4] = c->r[4] + 0x00002e04u; func_0880d5d0(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = 0u + 0x0000000cu;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_0895f718; }
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x0895f700u; c->r[4] = c->r[4] + 0x00000af4u; func_0880d380(c, ram); }
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x0895f70cu; c->r[5] = 0u + 0u; func_08969240(c, ram); }
    mem_w32(ram, c->r[30] + 0x0000001cu, c->r[2]);
    { c->r[31] = 0x0895f718u; c->r[4] = mem_r32(ram, c->r[30] + 0x0000001cu); func_0895ce34(c, ram); }
L_0895f718:
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x0895f724u; c->r[4] = c->r[4] + 0x00002e04u; func_0880d5d0(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = 0u + 0x00000016u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_0895f748; }
    { c->r[31] = 0x0895f73cu; c->r[4] = 0u + 0u; func_089699f0(c, ram); }
    mem_w32(ram, c->r[30] + 0x0000001cu, c->r[2]);
    { c->r[31] = 0x0895f748u; c->r[4] = mem_r32(ram, c->r[30] + 0x0000001cu); func_0895ce34(c, ram); }
L_0895f748:
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000af4u;
    { c->r[31] = 0x0895f758u; c->r[5] = 0u + 0u; func_089658e4(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000024u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000020u);
    { c->r[29] = c->r[29] + 0x00000030u; return; }
    return; /* fell out of func_0895f544 */
}

/* func_08961630  0x08961630..0x089616d4  164 bytes, source=sweep */
void func_08961630(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08961630u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000000u);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = 0u + 0xffffffffu;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_08961678; }
    c->r[2] = 0x08aa0000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00004964u);
    c->r[3] = 0xfffc0000u;
    c->r[3] = c->r[3] | 0xffffu;
    c->r[2] = c->r[2] & c->r[3];
    c->r[1] = 0x08aa0000u;
    mem_w32(ram, c->r[1] + 0x00004964u, c->r[2]);
L_08961678:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_0896169c; }
    c->r[2] = 0x08aa0000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00004964u);
    c->r[3] = 0x00010000u;
    c->r[2] = c->r[2] | c->r[3];
    c->r[1] = 0x08aa0000u;
    mem_w32(ram, c->r[1] + 0x00004964u, c->r[2]);
L_0896169c:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = 0u + 0x00000001u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_089616c4; }
    c->r[2] = 0x08aa0000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00004964u);
    c->r[3] = 0x00020000u;
    c->r[2] = c->r[2] | c->r[3];
    c->r[1] = 0x08aa0000u;
    mem_w32(ram, c->r[1] + 0x00004964u, c->r[2]);
L_089616c4:
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_08961630 */
}

/* func_0896491c  0x0896491c..0x08964a64  328 bytes, source=sweep */
void func_0896491c(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0896491cu);
    c->r[29] = c->r[29] + 0xffffffd0u;
    mem_w32(ram, c->r[29] + 0x00000024u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000020u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, 0u);
L_08964934:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000004u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_0896494c; }
    { goto L_08964a50; }
L_0896494c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_0896497c; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000000u);
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000001u);
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000002u);
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]);
L_0896497c:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = 0u + 0x00000001u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_089649b0; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000003u);
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000004u);
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000005u);
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]);
L_089649b0:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = 0u + 0x00000002u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_089649e4; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000006u);
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000007u);
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000008u);
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]);
L_089649e4:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = 0u + 0x00000003u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_08964a18; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000009u);
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r8(ram, c->r[2] + 0x0000000au);
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r8(ram, c->r[2] + 0x0000000bu);
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]);
L_08964a18:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = 0u + 0x0000000cu;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_08964a30; }
    { goto L_08964a50; }
L_08964a30:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[5] = mem_r32(ram, c->r[30] + 0x0000000cu);
    { c->r[31] = 0x08964a40u; c->r[6] = mem_r32(ram, c->r[30] + 0x00000010u); func_08964714(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000004u, c->r[2]); goto L_08964934; }
L_08964a50:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000024u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000020u);
    { c->r[29] = c->r[29] + 0x00000030u; return; }
    return; /* fell out of func_0896491c */
}

/* func_089679e4  0x089679e4..0x08967a48  100 bytes, source=fde */
void func_089679e4(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089679e4u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x08967a04u; c->r[4] = c->r[4] + 0x00000af4u; func_089c9050(c, ram); }
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000af4u;
    { c->r[31] = 0x08967a14u; c->r[5] = 0u + 0u; func_0882172c(c, ram); }
    { c->r[31] = 0x08967a1cu; c->r[4] = 0u + 0u; func_0896a084(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_08967a34; }
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x08967a34u; c->r[4] = c->r[4] + 0x00000af4u; func_088145dc(c, ram); }
L_08967a34:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_089679e4 */
}

/* func_089698b4  0x089698b4..0x0896990c  88 bytes, source=residue */
void func_089698b4(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089698b4u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[2] = 0u + 0xffffffffu;
    mem_w8(ram, c->r[30] + 0x00000004u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = (c->r[2] < 0x0000001fu) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_089698f8; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = c->r[2] << 4;
    c->r[2] = 0x08a60000u;
    c->r[2] = c->r[2] + 0xffff986cu;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000004u);
    mem_w8(ram, c->r[30] + 0x00000004u, c->r[2]);
L_089698f8:
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[30] + 0x00000004u);
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_089698b4 */
}

/* func_0896a4a4  0x0896a4a4..0x0896a4d4  48 bytes, source=sweep */
void func_0896a4a4(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0896a4a4u);
    c->r[29] = c->r[29] + 0xfffffff0u;
    mem_w32(ram, c->r[29] + 0x00000004u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000000u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    { c->r[31] = 0x0896a4bcu; func_0896a284(c, ram); }
    c->r[2] = c->r[2] + 0x000008c0u;
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000004u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000000u);
    { c->r[29] = c->r[29] + 0x00000010u; return; }
    return; /* fell out of func_0896a4a4 */
}

/* func_0896d804  0x0896d804..0x0896db64  864 bytes, source=fde */
void func_0896d804(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0896d804u);
    c->r[29] = c->r[29] + 0xffffffd0u;
    mem_w32(ram, c->r[29] + 0x0000002cu, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000028u, c->r[30]);
    mem_w32(ram, c->r[29] + 0x00000024u, c->r[17]);
    mem_w32(ram, c->r[29] + 0x00000020u, c->r[16]);
    c->r[30] = c->r[29] + 0u;
    { c->r[31] = 0x0896d824u; mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]); func_0896a3c0(c, ram); }
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0u + 0u;
    { c->r[31] = 0x0896d834u; c->r[6] = 0u + 0x0000009cu; func_08a19ec4(c, ram); }
    { c->r[31] = 0x0896d83cu; func_08975704(c, ram); }
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0u + 0u;
    { c->r[31] = 0x0896d84cu; c->r[6] = 0u + 0x00000088u; func_08a19ec4(c, ram); }
    { c->r[31] = 0x0896d854u; func_08975704(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = 0u + 0x00000048u;
    { c->r[31] = 0x0896d864u; mem_w8(ram, c->r[3] + 0x00000000u, c->r[2]); func_08975704(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = 0u + 0x0000004fu;
    { c->r[31] = 0x0896d874u; mem_w8(ram, c->r[3] + 0x00000001u, c->r[2]); func_08975704(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = 0u + 0x00000053u;
    { c->r[31] = 0x0896d884u; mem_w8(ram, c->r[3] + 0x00000002u, c->r[2]); func_08975704(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = 0u + 0x00000054u;
    { c->r[31] = 0x0896d894u; mem_w8(ram, c->r[3] + 0x00000003u, c->r[2]); func_0896a3c0(c, ram); }
    { c->r[31] = 0x0896d89cu; c->r[16] = c->r[2] + 0u; func_0896a3c0(c, ram); }
    c->r[3] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 3;
    c->r[2] = c->r[2] + c->r[3];
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[16] + c->r[2];
    c->r[2] = c->r[2] + 0x00000004u;
    c->r[4] = c->r[2] + 0u;
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x0896d8c8u; c->r[6] = 0u + 0x00000006u; func_08a19db8(c, ram); }
    { c->r[31] = 0x0896d8d0u; func_08975704(c, ram); }
    { c->r[31] = 0x0896d8d8u; c->r[16] = c->r[2] + 0u; func_08975704(c, ram); }
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000006u);
    c->r[2] = c->r[2] << 5;
    c->r[2] = c->r[16] + c->r[2];
    c->r[2] = c->r[2] + 0x00000008u;
    c->r[4] = c->r[2] + 0u;
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x0896d8f8u; c->r[6] = 0u + 0x00000006u; func_08a19db8(c, ram); }
    c->r[2] = 0x08a80000u;
    c->r[2] = c->r[2] + 0x00000e00u;
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[2]);
    c->r[2] = 0x08a80000u;
    c->r[2] = c->r[2] + 0x00000df8u;
    { c->r[31] = 0x0896d914u; mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]); func_0896a3c0(c, ram); }
    { c->r[31] = 0x0896d91cu; c->r[16] = c->r[2] + 0u; func_0896a3c0(c, ram); }
    c->r[3] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 3;
    c->r[2] = c->r[2] + c->r[3];
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[16] + c->r[2];
    c->r[2] = c->r[2] + 0x00000004u;
    c->r[2] = c->r[2] + 0x00000006u;
    c->r[4] = c->r[2] + 0u;
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000004u);
    { c->r[31] = 0x0896d94cu; c->r[6] = 0u + 0x00000008u; func_08a19db8(c, ram); }
    { c->r[31] = 0x0896d954u; func_0896a3c0(c, ram); }
    { c->r[31] = 0x0896d95cu; c->r[16] = c->r[2] + 0u; func_0896a3c0(c, ram); }
    c->r[3] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 3;
    c->r[2] = c->r[2] + c->r[3];
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[16] + c->r[2];
    c->r[2] = c->r[2] + 0x00000004u;
    c->r[2] = c->r[2] + 0x0000000eu;
    c->r[4] = c->r[2] + 0u;
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000008u);
    { c->r[31] = 0x0896d98cu; c->r[6] = 0u + 0x00000006u; func_08a19db8(c, ram); }
    { c->r[31] = 0x0896d994u; func_08975704(c, ram); }
    { c->r[31] = 0x0896d99cu; c->r[16] = c->r[2] + 0u; func_08975704(c, ram); }
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000006u);
    c->r[2] = c->r[2] << 5;
    c->r[2] = c->r[16] + c->r[2];
    c->r[2] = c->r[2] + 0x00000008u;
    c->r[2] = c->r[2] + 0x00000006u;
    c->r[4] = c->r[2] + 0u;
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000004u);
    { c->r[31] = 0x0896d9c0u; c->r[6] = 0u + 0x00000008u; func_08a19db8(c, ram); }
    { c->r[31] = 0x0896d9c8u; func_08975704(c, ram); }
    { c->r[31] = 0x0896d9d0u; c->r[16] = c->r[2] + 0u; func_08975704(c, ram); }
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000006u);
    c->r[2] = c->r[2] << 5;
    c->r[2] = c->r[16] + c->r[2];
    c->r[2] = c->r[2] + 0x00000008u;
    c->r[2] = c->r[2] + 0x0000000eu;
    c->r[4] = c->r[2] + 0u;
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000008u);
    { c->r[31] = 0x0896d9f4u; c->r[6] = 0u + 0x00000006u; func_08a19db8(c, ram); }
    { c->r[31] = 0x0896d9fcu; func_0896a3c0(c, ram); }
    { c->r[31] = 0x0896da04u; c->r[16] = c->r[2] + 0u; func_0896a3c0(c, ram); }
    c->r[3] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 3;
    c->r[2] = c->r[2] + c->r[3];
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[16] + c->r[2];
    c->r[2] = c->r[2] + 0x00000004u;
    { c->r[31] = 0x0896da28u; c->r[16] = c->r[2] + 0x00000014u; func_0896a260(c, ram); }
    c->r[4] = c->r[16] + 0u;
    { c->r[31] = 0x0896da34u; c->r[5] = c->r[2] + 0u; func_08a1af70(c, ram); }
    { c->r[31] = 0x0896da3cu; func_08975704(c, ram); }
    { c->r[31] = 0x0896da44u; c->r[16] = c->r[2] + 0u; func_08975704(c, ram); }
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000006u);
    c->r[2] = c->r[2] << 5;
    c->r[2] = c->r[16] + c->r[2];
    c->r[2] = c->r[2] + 0x00000008u;
    { c->r[31] = 0x0896da5cu; c->r[16] = c->r[2] + 0x00000014u; func_0896a260(c, ram); }
    c->r[4] = c->r[16] + 0u;
    { c->r[31] = 0x0896da68u; c->r[5] = c->r[2] + 0u; func_08a1af70(c, ram); }
    { c->r[31] = 0x0896da70u; func_0896a3c0(c, ram); }
    { c->r[31] = 0x0896da78u; c->r[16] = c->r[2] + 0u; func_0896a3c0(c, ram); }
    c->r[3] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 3;
    c->r[2] = c->r[2] + c->r[3];
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[16];
    c->r[3] = c->r[2] + 0x00000010u;
    c->r[2] = 0x08a80000u;
    c->r[2] = mem_r8(ram, c->r[2] + 0x00002664u);
    { c->r[31] = 0x0896daa4u; mem_w8(ram, c->r[3] + 0x00000011u, c->r[2]); func_08975704(c, ram); }
    { c->r[31] = 0x0896daacu; c->r[16] = c->r[2] + 0u; func_08975704(c, ram); }
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000006u);
    c->r[2] = c->r[2] << 5;
    c->r[2] = c->r[2] + c->r[16];
    c->r[3] = c->r[2] + 0x00000010u;
    c->r[2] = 0x08a80000u;
    c->r[2] = mem_r8(ram, c->r[2] + 0x00002664u);
    { c->r[31] = 0x0896daccu; mem_w8(ram, c->r[3] + 0x00000015u, c->r[2]); func_0896a3c0(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = mem_r32(ram, c->r[3] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000001u;
    { c->r[31] = 0x0896dae0u; mem_w32(ram, c->r[3] + 0x00000000u, c->r[2]); func_08975704(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = mem_r8(ram, c->r[3] + 0x00000006u);
    c->r[2] = c->r[2] + 0x00000001u;
    { c->r[31] = 0x0896daf4u; mem_w8(ram, c->r[3] + 0x00000006u, c->r[2]); func_0896a3c0(c, ram); }
    { c->r[31] = 0x0896dafcu; c->r[16] = mem_r8(ram, c->r[2] + 0x00000007u); func_0896a3c0(c, ram); }
    { c->r[31] = 0x0896db04u; c->r[17] = mem_r8(ram, c->r[2] + 0x00000008u); func_0896a3c0(c, ram); }
    c->r[3] = mem_r8(ram, c->r[2] + 0x00000009u);
    c->r[2] = c->r[30] + 0x00000010u;
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0x08a50000u;
    c->r[5] = c->r[5] + 0xffff8740u;
    c->r[6] = c->r[16] + 0u;
    c->r[7] = c->r[17] + 0u;
    { c->r[31] = 0x0896db28u; c->r[8] = c->r[3] + 0u; func_08a1ad34(c, ram); }
    { c->r[31] = 0x0896db30u; func_0896a3c0(c, ram); }
    c->r[2] = c->r[2] + 0x00000094u;
    c->r[3] = c->r[30] + 0x00000010u;
    c->r[4] = c->r[2] + 0u;
    c->r[5] = c->r[3] + 0u;
    { c->r[31] = 0x0896db48u; c->r[6] = 0u + 0x00000008u; func_08a19db8(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x0000002cu);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000028u);
    c->r[17] = mem_r32(ram, c->r[29] + 0x00000024u);
    c->r[16] = mem_r32(ram, c->r[29] + 0x00000020u);
    { c->r[29] = c->r[29] + 0x00000030u; return; }
    return; /* fell out of func_0896d804 */
}

/* func_0896e62c  0x0896e62c..0x0896e668  60 bytes, source=sweep */
void func_0896e62c(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0896e62cu);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r8(ram, c->r[2] + 0x000009c4u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = (u32)((s32)c->r[3] >> (c->r[2] & 31u));
    c->r[2] = c->r[2] & 0x0001u;
    c->r[2] = c->r[2] & 0x00ffu;
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_0896e62c */
}

/* func_0896f5d8  0x0896f5d8..0x0896f610  56 bytes, source=sweep */
void func_0896f5d8(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0896f5d8u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = c->r[2] << 1;
    c->r[2] = 0x08aa0000u;
    c->r[2] = c->r[2] + 0x000068b4u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x00000000u);
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_0896f5d8 */
}

/* func_0897154c  0x0897154c..0x089715e4  152 bytes, source=sweep */
void func_0897154c(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0897154cu);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000018u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[30]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[16]);
    c->r[30] = c->r[29] + 0u;
    c->r[2] = 0u + 0x00000010u;
    mem_w8(ram, c->r[30] + 0x00000000u, c->r[2]);
    { c->r[31] = 0x08971570u; c->r[4] = 0u + 0u; func_08971434(c, ram); }
    c->r[16] = c->r[2] + 0u;
    { c->r[31] = 0x0897157cu; c->r[4] = 0u + 0x00000001u; func_08971434(c, ram); }
    c->r[2] = ((s32)c->r[2] < (s32)c->r[16]) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_08971594; }
    c->r[2] = 0u + 0x00000021u;
    { mem_w8(ram, c->r[30] + 0x00000000u, c->r[2]); goto L_089715c8; }
L_08971594:
    { c->r[31] = 0x0897159cu; c->r[4] = 0u + 0u; func_08971434(c, ram); }
    c->r[16] = c->r[2] + 0u;
    { c->r[31] = 0x089715a8u; c->r[4] = 0u + 0x00000001u; func_08971434(c, ram); }
    c->r[2] = ((s32)c->r[16] < (s32)c->r[2]) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_089715c0; }
    c->r[2] = 0u + 0x00000022u;
    { mem_w8(ram, c->r[30] + 0x00000000u, c->r[2]); goto L_089715c8; }
L_089715c0:
    c->r[2] = 0u + 0x00000013u;
    mem_w8(ram, c->r[30] + 0x00000000u, c->r[2]);
L_089715c8:
    c->r[2] = mem_r8(ram, c->r[30] + 0x00000000u);
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000018u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[16] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_0897154c */
}

/* func_08975438  0x08975438..0x089754e4  172 bytes, source=fde */
void func_08975438(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08975438u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x000000e0u;
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r8(ram, c->r[2] + 0x0000000cu);
    c->r[2] = c->r[2] + 0xffffffefu;
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = (c->r[3] < 0x0000000eu) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_089754c8; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08a50000u;
    c->r[2] = c->r[2] + 0xffff894cu;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    { u32 _t = c->r[2]; switch (_t) { case 0x08975498u: goto L_08975498; case 0x089754a8u: goto L_089754a8; case 0x089754b8u: goto L_089754b8; default: recomp_trap_unknown_indirect(c, ram, 0x08975490u, _t); return; } }
L_08975498:
    { c->r[31] = 0x089754a0u; c->r[4] = 0u + 0u; func_08975150(c, ram); }
    { mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]); goto L_089754cc; }
L_089754a8:
    { c->r[31] = 0x089754b0u; c->r[4] = 0u + 0x00000001u; func_08975150(c, ram); }
    { mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]); goto L_089754cc; }
L_089754b8:
    { c->r[31] = 0x089754c0u; func_08975370(c, ram); }
    { mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]); goto L_089754cc; }
L_089754c8:
    mem_w32(ram, c->r[30] + 0x00000008u, 0u);
L_089754cc:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_08975438 */
}

/* func_089786f4  0x089786f4..0x08978880  396 bytes, source=fde */
void func_089786f4(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089786f4u);
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
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
    c->r[2] = 0u + 0x00000001u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000014u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_08978750; }
    c->r[2] = 0u + 0x00000019u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000014u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_08978830; }
    { goto L_08978868; }
L_08978750:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r8(ram, c->r[2] + 0x0000000eu);
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]);
    c->r[2] = 0u + 0x00000002u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000010u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_089787d0; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = ((s32)c->r[3] < (s32)0x00000003u) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_08978794; }
    c->r[2] = 0u + 0x00000001u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000010u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_089787ac; }
    { goto L_08978868; }
L_08978794:
    c->r[2] = 0u + 0x0000002bu;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000010u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_089787f4; }
    { goto L_08978868; }
L_089787ac:
    { c->r[31] = 0x089787b4u; c->r[4] = mem_r32(ram, c->r[30] + 0x0000000cu); func_0896e3a0(c, ram); }
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x089787c0u; c->r[4] = c->r[4] + 0x000027dcu; func_089d3a80(c, ram); }
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0u + 0x00000002u;
    { mem_w8(ram, c->r[3] + 0x0000000eu, c->r[2]); goto L_08978868; }
L_089787d0:
    { c->r[31] = 0x089787d8u; c->r[4] = 0u + 0x00000001u; func_089c5e18(c, ram); }
    { int _c = (c->r[2] == 0u); if (_c) goto L_08978868; }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x089787ecu; c->r[5] = 0u + 0x00000002u; func_0896a7b8(c, ram); }
    { goto L_08978868; }
L_089787f4:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x00000028u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000ac8u;
    { c->r[31] = 0x08978810u; c->r[5] = c->r[2] + 0u; func_089cb820(c, ram); }
    { int _c = (c->r[2] == 0u); if (_c) goto L_08978820; }
    { goto L_08978868; }
L_08978820:
    { c->r[31] = 0x08978828u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u); func_0896a824(c, ram); }
    { goto L_08978868; }
L_08978830:
    c->r[1] = 0x08a50000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffff8b2cu);
    c->r[4] = 0x08a70000u;
    c->r[4] = c->r[4] + 0xffffb640u;
    { c->r[31] = 0x08978848u; c->f[12] = c->f[0]; func_089f1210(c, ram); }
    c->r[4] = 0x08a50000u;
    c->r[4] = c->r[4] + 0xffff8984u;
    c->r[5] = 0u + 0x00001512u;
    { c->r[31] = 0x0897885cu; c->r[6] = 0u + 0x00000001u; func_08928cb8(c, ram); }
    c->r[4] = 0x08a70000u;
    { c->r[31] = 0x08978868u; c->r[4] = c->r[4] + 0xffffb640u; func_089f147c(c, ram); }
L_08978868:
    c->r[2] = 0u + 0u;
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000024u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000020u);
    { c->r[29] = c->r[29] + 0x00000030u; return; }
    return; /* fell out of func_089786f4 */
}

/* func_0897b424  0x0897b424..0x0897b63c  536 bytes, source=sweep */
void func_0897b424(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0897b424u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000018u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[30]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[16]);
    c->r[30] = c->r[29] + 0u;
    { c->r[31] = 0x0897b440u; func_089794c4(c, ram); }
    c->r[3] = mem_r8(ram, c->r[2] + 0x0000000au);
    c->r[2] = 0u + 0x00000009u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_0897b4e4; }
    { c->r[31] = 0x0897b458u; func_08a1a548(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] >> 1;
    { c->r[31] = 0x0897b46cu; mem_w32(ram, c->r[30] + 0x00000000u, c->r[2]); func_089794c4(c, ram); }
    c->r[2] = mem_r8(ram, c->r[2] + 0x0000000eu);
    c->r[3] = c->r[2] << 1;
    c->r[2] = 0x08a60000u;
    c->r[2] = c->r[2] + 0xffffa45cu;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000000u);
    { c->r[31] = 0x0897b48cu; mem_w8(ram, c->r[30] + 0x00000004u, c->r[2]); func_089794c4(c, ram); }
    c->r[2] = mem_r8(ram, c->r[2] + 0x0000000eu);
    c->r[3] = c->r[2] << 1;
    c->r[2] = 0x08a60000u;
    c->r[2] = c->r[2] + 0xffffa45du;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000001u;
    { c->r[31] = 0x0897b4b0u; mem_w8(ram, c->r[30] + 0x00000005u, c->r[2]); func_089794c4(c, ram); }
    c->r[4] = c->r[2] + 0u;
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[30] + 0x00000005u);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[30] + 0x00000004u);
    c->r[3] = c->r[3] - c->r[2];
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    alx_divu(c, c->r[2], c->r[3]);
    c->r[2] = c->hi;
    if (c->r[3] == 0u) { recomp_break(c, ram, 0x0897b4d0u, 0x7u); goto L_0897b4d4; }
L_0897b4d4:
    c->r[3] = mem_r8(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[3] + c->r[2];
    { mem_w8(ram, c->r[4] + 0x00000010u, c->r[2]); goto L_0897b4fc; }
L_0897b4e4:
    { c->r[31] = 0x0897b4ecu; func_089794c4(c, ram); }
    { c->r[31] = 0x0897b4f4u; c->r[16] = c->r[2] + 0u; func_089794c4(c, ram); }
    c->r[2] = mem_r8(ram, c->r[2] + 0x0000000au);
    mem_w8(ram, c->r[16] + 0x00000010u, c->r[2]);
L_0897b4fc:
    { c->r[31] = 0x0897b504u; func_089794c4(c, ram); }
    c->r[3] = mem_r8(ram, c->r[2] + 0x00000009u);
    c->r[2] = 0u + 0x00000002u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_0897b548; }
    { c->r[31] = 0x0897b51cu; func_08a1a548(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] >> 1;
    { c->r[31] = 0x0897b530u; mem_w32(ram, c->r[30] + 0x00000000u, c->r[2]); func_089794c4(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] & 0x0001u;
    c->r[2] = c->r[2] + 0x00000003u;
    { mem_w8(ram, c->r[3] + 0x0000000fu, c->r[2]); goto L_0897b564; }
L_0897b548:
    { c->r[31] = 0x0897b550u; func_089794c4(c, ram); }
    { c->r[31] = 0x0897b558u; c->r[16] = c->r[2] + 0u; func_089794c4(c, ram); }
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000009u);
    c->r[2] = c->r[2] + 0x00000003u;
    mem_w8(ram, c->r[16] + 0x0000000fu, c->r[2]);
L_0897b564:
    { c->r[31] = 0x0897b56cu; func_089794c4(c, ram); }
    c->r[3] = mem_r8(ram, c->r[2] + 0x00000008u);
    c->r[2] = 0u + 0x00000004u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_0897b5ac; }
    { c->r[31] = 0x0897b584u; func_08a1a548(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] >> 1;
    { c->r[31] = 0x0897b598u; mem_w32(ram, c->r[30] + 0x00000000u, c->r[2]); func_089794c4(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] & 0x0003u;
    { mem_w8(ram, c->r[3] + 0x00000011u, c->r[2]); goto L_0897b5c4; }
L_0897b5ac:
    { c->r[31] = 0x0897b5b4u; func_089794c4(c, ram); }
    { c->r[31] = 0x0897b5bcu; c->r[16] = c->r[2] + 0u; func_089794c4(c, ram); }
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000008u);
    mem_w8(ram, c->r[16] + 0x00000011u, c->r[2]);
L_0897b5c4:
    { c->r[31] = 0x0897b5ccu; func_089794c4(c, ram); }
    c->r[3] = mem_r8(ram, c->r[2] + 0x00000007u);
    c->r[2] = 0u + 0x00000004u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_0897b60c; }
    { c->r[31] = 0x0897b5e4u; func_08a1a548(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] >> 1;
    { c->r[31] = 0x0897b5f8u; mem_w32(ram, c->r[30] + 0x00000000u, c->r[2]); func_089794c4(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] & 0x0003u;
    { mem_w8(ram, c->r[3] + 0x00000012u, c->r[2]); goto L_0897b624; }
L_0897b60c:
    { c->r[31] = 0x0897b614u; func_089794c4(c, ram); }
    { c->r[31] = 0x0897b61cu; c->r[16] = c->r[2] + 0u; func_089794c4(c, ram); }
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000007u);
    mem_w8(ram, c->r[16] + 0x00000012u, c->r[2]);
L_0897b624:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000018u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[16] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_0897b424 */
}

/* func_08985e58  0x08985e58..0x08985f30  216 bytes, source=fde */
void func_08985e58(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08985e58u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    c->r[1] = 0x08a50000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffff93fcu);
    { c->r[31] = 0x08985e78u; mem_wf32(ram, c->r[30] + 0x00000000u, c->f[0]); func_0896a3e4(c, ram); }
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08ab0000u;
    c->r[2] = c->r[2] + 0xffff9250u;
    c->r[3] = c->r[3] + c->r[2];
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[3]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r8(ram, c->r[3] + 0x00000000u);
    c->r[2] = (c->r[2] < 0x00000006u) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_08985f18; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r8(ram, c->r[3] + 0x00000000u);
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08a50000u;
    c->r[2] = c->r[2] + 0xffff9410u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    { u32 _t = c->r[2]; switch (_t) { case 0x08985ec4u: goto L_08985ec4; case 0x08985eccu: goto L_08985ecc; case 0x08985edcu: goto L_08985edc; case 0x08985eecu: goto L_08985eec; case 0x08985efcu: goto L_08985efc; case 0x08985f0cu: goto L_08985f0c; default: recomp_trap_unknown_indirect(c, ram, 0x08985ebcu, _t); return; } }
L_08985ec4:
    { mem_w32(ram, c->r[30] + 0x00000000u, 0u); goto L_08985f18; }
L_08985ecc:
    c->r[1] = 0x08a50000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffff9400u);
    { mem_wf32(ram, c->r[30] + 0x00000000u, c->f[0]); goto L_08985f18; }
L_08985edc:
    c->r[1] = 0x08a50000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffff9404u);
    { mem_wf32(ram, c->r[30] + 0x00000000u, c->f[0]); goto L_08985f18; }
L_08985eec:
    c->r[1] = 0x08a50000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffff93fcu);
    { mem_wf32(ram, c->r[30] + 0x00000000u, c->f[0]); goto L_08985f18; }
L_08985efc:
    c->r[1] = 0x08a50000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffff9408u);
    { mem_wf32(ram, c->r[30] + 0x00000000u, c->f[0]); goto L_08985f18; }
L_08985f0c:
    c->r[1] = 0x08a50000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffff940cu);
    mem_wf32(ram, c->r[30] + 0x00000000u, c->f[0]);
L_08985f18:
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000000u);
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_08985e58 */
}

/* func_08991bb0  0x08991bb0..0x08991e38  648 bytes, source=fde */
void func_08991bb0(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08991bb0u);
    c->r[29] = c->r[29] + 0xffffffd0u;
    mem_w32(ram, c->r[29] + 0x00000028u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000024u, c->r[30]);
    mem_w32(ram, c->r[29] + 0x00000020u, c->r[16]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x000000e0u;
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[2]);
    { c->r[31] = 0x08991bdcu; c->r[16] = mem_r32(ram, c->r[30] + 0x00000004u); func_0896f1ac(c, ram); }
    mem_w32(ram, c->r[16] + 0x00000038u, c->r[2]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = 0x08a80000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00002660u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000038u);
    c->r[2] = c->r[3] + c->r[2];
    { c->r[31] = 0x08991c00u; mem_w32(ram, c->r[4] + 0x0000003cu, c->r[2]); func_0896f1ac(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000038u);
    c->r[2] = c->r[3] - c->r[2];
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = 0x08a80000u;
    c->r[3] = mem_r8(ram, c->r[3] + 0x00002664u);
    c->r[4] = mem_r32(ram, c->r[2] + 0x0000003cu);
    { c->r[31] = 0x08991c2cu; c->r[5] = c->r[3] + 0u; func_0896edd0(c, ram); }
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
    c->r[16] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    { c->r[31] = 0x08991c40u; c->r[4] = mem_r32(ram, c->r[2] + 0x0000003cu); func_0896ee58(c, ram); }
    mem_w8(ram, c->r[16] + 0x00000048u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000048u);
    { c->r[31] = 0x08991c54u; c->r[4] = c->r[2] + 0u; func_0896ed64(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    mem_w8(ram, c->r[2] + 0x00000049u, 0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[2] + 0x00000024u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000ac8u;
    { c->r[31] = 0x08991c7cu; c->r[5] = c->r[2] + 0u; func_089cb820(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_08991df4; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    { int _c = (c->r[2] == 0u); if (_c) goto L_08991d04; }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[5] = 0u + 0x00000030u;
    { c->r[31] = 0x08991ca8u; c->r[6] = 0u + 0u; func_08933498(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x00000012u);
    c->r[2] = (u32)((s32)c->r[3] >> 31);
    c->r[2] = c->r[2] >> 26;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = (u32)((s32)c->r[2] >> 6);
    c->r[2] = c->r[2] << 6;
    c->r[2] = c->r[3] - c->r[2];
    c->r[2] = c->r[2] << 16;
    c->r[2] = (u32)((s32)c->r[2] >> 16);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000020u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_08991cf4; }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[5] = 0u + 0x000003d8u;
    { c->r[31] = 0x08991cecu; c->r[6] = 0u + 0u; func_08933428(c, ram); }
    { goto L_08991d04; }
L_08991cf4:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[5] = 0u + 0x00000007u;
    { c->r[31] = 0x08991d04u; c->r[6] = 0u + 0u; func_08933428(c, ram); }
L_08991d04:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000048u);
    c->r[2] = c->r[2] + 0x00000478u;
    mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000018u);
    { c->r[31] = 0x08991d24u; c->r[6] = 0u + 0x00000001u; func_0893009c(c, ram); }
    c->r[4] = 0x08ab0000u;
    c->r[4] = c->r[4] + 0xffff98b0u;
    c->r[5] = 0x08a50000u;
    c->r[5] = c->r[5] + 0xffff9d90u;
    { c->r[31] = 0x08991d3cu; c->r[6] = mem_r32(ram, c->r[30] + 0x00000008u); func_08a1ad34(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x0000003cu);
    c->r[2] = 0x00020000u;
    c->r[2] = c->r[2] | 0x70ffu;
    c->r[2] = (c->r[2] < c->r[3]) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_08991d6c; }
    c->r[4] = 0x08ab0000u;
    c->r[4] = c->r[4] + 0xffff98b0u;
    c->r[5] = 0x08a50000u;
    { c->r[31] = 0x08991d6cu; c->r[5] = c->r[5] + 0xffff9d94u; func_08a1ad34(c, ram); }
L_08991d6c:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[5] = 0x08ab0000u;
    c->r[5] = c->r[5] + 0xffff98b0u;
    { c->r[31] = 0x08991d80u; c->r[6] = 0u + 0x00000002u; func_08933428(c, ram); }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[5] = 0u + 0x00000030u;
    { c->r[31] = 0x08991d90u; c->r[6] = 0u + 0x00000002u; func_08933498(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    { int _c = ((s32)c->r[2] <= 0); if (_c) goto L_08991dc4; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[4] = 0x08ab0000u;
    c->r[4] = c->r[4] + 0xffff98c0u;
    c->r[5] = 0x08a50000u;
    c->r[5] = c->r[5] + 0xffff9d9cu;
    c->r[6] = mem_r32(ram, c->r[2] + 0x0000003cu);
    { c->r[31] = 0x08991dbcu; c->r[7] = mem_r32(ram, c->r[30] + 0x00000010u); func_08a1ad34(c, ram); }
    { goto L_08991de0; }
L_08991dc4:
    c->r[4] = 0x08ab0000u;
    c->r[4] = c->r[4] + 0xffff98c0u;
    c->r[5] = 0x08a50000u;
    c->r[5] = c->r[5] + 0xffff9db4u;
    c->r[6] = 0x00020000u;
    { c->r[31] = 0x08991de0u; c->r[6] = c->r[6] | 0x7100u; func_08a1ad34(c, ram); }
L_08991de0:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[5] = 0x08ab0000u;
    c->r[5] = c->r[5] + 0xffff98c0u;
    { c->r[31] = 0x08991df4u; c->r[6] = 0u + 0x00000003u; func_0893009c(c, ram); }
L_08991df4:
    c->r[2] = 0u + 0xffffffffu;
    mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    { int _c = (c->r[2] == 0u); if (_c) goto L_08991e1c; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000048u);
    { c->r[31] = 0x08991e18u; c->r[4] = c->r[2] + 0u; func_0896eef8(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]);
L_08991e1c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000028u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000024u);
    c->r[16] = mem_r32(ram, c->r[29] + 0x00000020u);
    { c->r[29] = c->r[29] + 0x00000030u; return; }
    return; /* fell out of func_08991bb0 */
}

/* func_089989a4  0x089989a4..0x08998a30  140 bytes, source=sweep */
void func_089989a4(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089989a4u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = 0x08ab0000u;
    c->r[2] = c->r[2] + 0x00002b78u;
    c->r[4] = c->r[3] + c->r[2];
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = 0x08ab0000u;
    c->r[2] = c->r[2] + 0x00002b78u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[3] = mem_r8(ram, c->r[2] + 0x00000000u);
    c->r[2] = 0u + 0xfffffffdu;
    c->r[2] = c->r[3] & c->r[2];
    mem_w8(ram, c->r[4] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_08998a20; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = 0x08ab0000u;
    c->r[2] = c->r[2] + 0x00002b78u;
    c->r[4] = c->r[3] + c->r[2];
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = 0x08ab0000u;
    c->r[2] = c->r[2] + 0x00002b78u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000000u);
    c->r[2] = c->r[2] | 0x0002u;
    mem_w8(ram, c->r[4] + 0x00000000u, c->r[2]);
L_08998a20:
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_089989a4 */
}

/* func_089991b0  0x089991b0..0x089991e0  48 bytes, source=sweep */
void func_089991b0(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089991b0u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    c->r[2] = c->r[4] + 0u;
    mem_w8(ram, c->r[30] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r8(ram, c->r[30] + 0x00000000u);
    c->r[1] = 0x08ab0000u;
    mem_w8(ram, c->r[1] + 0x00002aa9u, c->r[2]);
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_089991b0 */
}

/* func_0899d978  0x0899d978..0x0899dcf4  892 bytes, source=fde */
void func_0899d978(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0899d978u);
    c->r[29] = c->r[29] + 0xffffff50u;
    mem_w32(ram, c->r[29] + 0x000000a0u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x0000009cu, c->r[30]);
    mem_w32(ram, c->r[29] + 0x00000098u, c->r[18]);
    mem_w32(ram, c->r[29] + 0x00000094u, c->r[17]);
    mem_w32(ram, c->r[29] + 0x00000090u, c->r[16]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    c->r[1] = 0x08a50000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffffa634u);
    mem_wf32(ram, c->r[30] + 0x00000008u, c->f[0]);
    mem_w8(ram, c->r[30] + 0x0000000cu, 0u);
    c->r[2] = c->r[30] + 0x00000020u;
    { c->r[31] = 0x0899d9b8u; c->r[4] = c->r[2] + 0u; hle_dispatch_stub(c, ram, 0x08a24b3cu); /* sceNetGetLocalEtherAddr */ }
    mem_w32(ram, c->r[30] + 0x00000030u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000030u);
    { int _c = ((s32)c->r[2] >= 0); if (_c) goto L_0899d9d4; }
    c->r[2] = 0u + 0xffffffffu;
    { mem_w32(ram, c->r[30] + 0x00000080u, c->r[2]); goto L_0899dcd0; }
L_0899d9d4:
L_0899d9d8:
    c->r[3] = 0x08ab0000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0xffff9a60u);
    c->r[2] = 0u + 0x00000001u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_0899da00; }
    c->r[1] = 0x08ab0000u;
    mem_w32(ram, c->r[1] + 0xffff9a60u, 0u);
    c->r[1] = 0x08ab0000u;
    { mem_w32(ram, c->r[1] + 0xffff9a5cu, 0u); goto L_0899dcc8; }
L_0899da00:
    { c->r[31] = 0x0899da08u; hle_dispatch_stub(c, ram, 0x08a2483cu); /* sceKernelGetSystemTimeLow */ }
    mem_w32(ram, c->r[30] + 0x00000034u, c->r[2]);
    mem_w32(ram, c->r[30] + 0x00000038u, 0u);
    mem_w32(ram, c->r[30] + 0x0000003cu, 0u);
    c->r[2] = 0u | 0x8235u;
    mem_w32(ram, c->r[30] + 0x00000040u, c->r[2]);
    c->r[2] = c->r[30] + 0x00000040u;
    c->r[4] = 0x08a60000u;
    c->r[4] = mem_r32(ram, c->r[4] + 0xffffa5e0u);
    c->r[5] = 0u + 0x00000001u;
    { c->r[31] = 0x0899da34u; c->r[6] = c->r[2] + 0u; hle_dispatch_stub(c, ram, 0x08a24864u); /* sceKernelWaitSema */ }
    { c->r[31] = 0x0899da3cu; mem_w32(ram, c->r[30] + 0x00000044u, c->r[2]); func_0896a4a4(c, ram); }
    c->r[2] = c->r[2] + 0x00000008u;
    { c->r[31] = 0x0899da48u; mem_w32(ram, c->r[30] + 0x00000048u, c->r[2]); func_0896a4a4(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = 0u + 0xfffffff0u;
    { c->r[31] = 0x0899da58u; mem_w8(ram, c->r[3] + 0x00000000u, c->r[2]); func_0896a4a4(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = 0u + 0x0000000cu;
    { c->r[31] = 0x0899da68u; mem_w8(ram, c->r[3] + 0x00000002u, c->r[2]); func_0896a4a4(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = mem_r8(ram, c->r[3] + 0x00000001u);
    c->r[2] = c->r[2] + 0x00000001u;
    { c->r[31] = 0x0899da7cu; mem_w8(ram, c->r[3] + 0x00000001u, c->r[2]); func_0896a4a4(c, ram); }
    { c->r[31] = 0x0899da84u; c->r[16] = c->r[2] + 0u; func_08999138(c, ram); }
    { c->r[31] = 0x0899da8cu; mem_w8(ram, c->r[16] + 0x00000003u, c->r[2]); func_0896a4a4(c, ram); }
    { c->r[31] = 0x0899da94u; c->r[16] = c->r[2] + 0u; func_08999288(c, ram); }
    mem_w8(ram, c->r[16] + 0x00000007u, c->r[2]);
    c->r[2] = 0x08ab0000u;
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00002a91u);
    { c->r[31] = 0x0899daa8u; c->r[4] = c->r[2] + 0u; func_0899e214(c, ram); }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000048u);
    c->r[2] = 0x08ab0000u;
    c->r[2] = mem_r8(ram, c->r[2] + 0x00002a91u);
    mem_w8(ram, c->r[3] + 0x00000000u, c->r[2]);
    { c->r[31] = 0x0899dac0u; c->r[16] = mem_r32(ram, c->r[30] + 0x00000048u); func_0899918c(c, ram); }
    mem_w8(ram, c->r[16] + 0x00000001u, c->r[2]);
    { c->r[31] = 0x0899daccu; c->r[16] = mem_r32(ram, c->r[30] + 0x00000048u); func_089991e0(c, ram); }
    mem_w8(ram, c->r[16] + 0x00000002u, c->r[2]);
    { c->r[31] = 0x0899dad8u; c->r[16] = mem_r32(ram, c->r[30] + 0x00000048u); func_08999234(c, ram); }
    mem_w8(ram, c->r[16] + 0x00000003u, c->r[2]);
    { c->r[31] = 0x0899dae4u; mem_w32(ram, c->r[30] + 0x0000004cu, 0u); hle_dispatch_stub(c, ram, 0x08a2483cu); /* sceKernelGetSystemTimeLow */ }
    mem_w32(ram, c->r[30] + 0x00000050u, c->r[2]);
    c->r[3] = c->r[30] + 0x00000060u;
    c->r[2] = 0x08a50000u;
    c->r[2] = c->r[2] + 0xffffa62cu;
    c->r[4] = mem_lwl(ram, c->r[2] + 0x00000003u, c->r[4]);
    c->r[4] = mem_lwr(ram, c->r[2] + 0x00000000u, c->r[4]);
    c->r[5] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000004u);
    c->r[6] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000005u);
    mem_swl(ram, c->r[3] + 0x00000003u, c->r[4]);
    mem_swr(ram, c->r[3] + 0x00000000u, c->r[4]);
    mem_w8(ram, c->r[3] + 0x00000004u, c->r[5]);
    { c->r[31] = 0x0899db18u; mem_w8(ram, c->r[3] + 0x00000005u, c->r[6]); func_0896a3e4(c, ram); }
    { c->r[31] = 0x0899db20u; c->r[4] = c->r[2] + 0u; func_0896a414(c, ram); }
    { c->r[31] = 0x0899db28u; c->r[18] = c->r[2] + 0u; func_0896a3e4(c, ram); }
    { c->r[31] = 0x0899db30u; c->r[4] = c->r[2] + 0u; func_0896a414(c, ram); }
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000018u);
    { c->r[31] = 0x0899db3cu; c->r[16] = c->r[2] & 0xffffu; func_0896a4a4(c, ram); }
    { c->r[31] = 0x0899db44u; c->r[17] = c->r[2] + 0u; func_0896a4a4(c, ram); }
    c->r[3] = mem_r8(ram, c->r[2] + 0x00000000u);
    c->r[2] = c->r[30] + 0x00000060u;
    c->r[4] = mem_r32(ram, c->r[18] + 0x00000000u);
    c->r[5] = c->r[2] + 0u;
    c->r[6] = c->r[16] + 0u;
    c->r[7] = c->r[17] + 0u;
    c->r[8] = c->r[3] + 0u;
    c->r[9] = 0u + 0u;
    { c->r[31] = 0x0899db6cu; c->r[10] = 0u + 0x00000001u; hle_dispatch_stub(c, ram, 0x08a24b9cu); /* sceNetAdhocPdpSend */ }
    { c->r[31] = 0x0899db74u; mem_w32(ram, c->r[30] + 0x0000004cu, c->r[2]); hle_dispatch_stub(c, ram, 0x08a2483cu); /* sceKernelGetSystemTimeLow */ }
    mem_w32(ram, c->r[30] + 0x0000003cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000004cu);
    { int _c = ((s32)c->r[2] >= 0); if (_c) goto L_0899db8c; }
    { goto L_0899dbc8; }
L_0899db8c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000050u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000003cu);
    c->r[2] = (c->r[3] < c->r[2]) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_0899dbb8; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000003cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000050u);
    c->r[2] = c->r[3] - c->r[2];
    c->r[2] = c->r[2] + 0xffffffffu;
    { mem_w32(ram, c->r[30] + 0x00000038u, c->r[2]); goto L_0899dbc8; }
L_0899dbb8:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000003cu);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000050u);
    c->r[2] = c->r[2] - c->r[3];
    mem_w32(ram, c->r[30] + 0x00000038u, c->r[2]);
L_0899dbc8:
    { c->r[31] = 0x0899dbd0u; func_0896a3e4(c, ram); }
    { int _c = (c->r[2] != 0u); if (_c) goto L_0899dbe0; }
    { c->r[31] = 0x0899dbe0u; func_089ac8e8(c, ram); }
L_0899dbe0:
    c->r[1] = 0x08ab0000u;
    mem_w8(ram, c->r[1] + 0x00002a91u, 0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000048u);
    c->r[2] = c->r[2] + 0x00000010u;
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0u + 0u;
    { c->r[31] = 0x0899dc00u; c->r[6] = 0u + 0x00000028u; func_08a19ec4(c, ram); }
    { c->r[31] = 0x0899dc08u; func_089ac8cc(c, ram); }
    { c->r[31] = 0x0899dc10u; c->r[16] = mem_r32(ram, c->r[30] + 0x00000048u); func_0896a3e4(c, ram); }
    { c->r[31] = 0x0899dc18u; c->r[4] = c->r[2] + 0u; func_0896f9c0(c, ram); }
    mem_w16(ram, c->r[16] + 0x0000002eu, c->r[2]);
    { c->r[31] = 0x0899dc24u; c->r[16] = mem_r32(ram, c->r[30] + 0x00000048u); func_0896a3e4(c, ram); }
    { c->r[31] = 0x0899dc2cu; c->r[4] = c->r[2] + 0u; func_0896fe40(c, ram); }
    mem_w32(ram, c->r[16] + 0x00000010u, c->r[2]);
    c->r[4] = 0x08ab0000u;
    c->r[4] = c->r[4] + 0xffffaa90u;
    c->r[5] = 0u + 0u;
    { c->r[31] = 0x0899dc44u; c->r[6] = 0u + 0x00004000u; func_08a19ec4(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000048u);
    c->r[3] = c->r[2] + 0x00000043u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000048u);
    c->r[2] = c->r[2] + 0x00000040u;
    c->r[4] = c->r[3] + 0u;
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x0899dc64u; c->r[6] = 0u + 0x00000006u; func_08a19db8(c, ram); }
    { c->r[31] = 0x0899dc6cu; func_0896a4a4(c, ram); }
    mem_w8(ram, c->r[2] + 0x00000006u, 0u);
    c->r[4] = 0x08a60000u;
    c->r[4] = mem_r32(ram, c->r[4] + 0xffffa5e0u);
    { c->r[31] = 0x0899dc80u; c->r[5] = 0u + 0x00000001u; hle_dispatch_stub(c, ram, 0x08a2484cu); /* sceKernelSignalSema */ }
    mem_w32(ram, c->r[30] + 0x00000070u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000040u);
    c->r[3] = 0u - c->r[2];
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000038u);
    c->r[3] = c->r[3] - c->r[2];
    c->r[2] = 0x00010000u;
    c->r[2] = c->r[2] | 0x04adu;
    c->r[2] = c->r[3] + c->r[2];
    mem_w32(ram, c->r[30] + 0x00000074u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000074u);
    c->r[2] = 0u | 0x8235u;
    c->r[2] = c->r[3] + c->r[2];
    { c->r[31] = 0x0899dcb8u; c->r[4] = c->r[2] + 0u; hle_dispatch_stub(c, ram, 0x08a247d4u); /* sceKernelDelayThread */ }
    { c->r[31] = 0x0899dcc0u; mem_w32(ram, c->r[30] + 0x00000078u, c->r[2]); hle_dispatch_stub(c, ram, 0x08a2483cu); /* sceKernelGetSystemTimeLow */ }
    { mem_w32(ram, c->r[30] + 0x0000007cu, c->r[2]); goto L_0899d9d8; }
L_0899dcc8:
    { c->r[31] = 0x0899dcd0u; c->r[4] = 0u + 0u; hle_dispatch_stub(c, ram, 0x08a24884u); /* sceKernelExitDeleteThread */ }
L_0899dcd0:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000080u);
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x000000a0u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x0000009cu);
    c->r[18] = mem_r32(ram, c->r[29] + 0x00000098u);
    c->r[17] = mem_r32(ram, c->r[29] + 0x00000094u);
    c->r[16] = mem_r32(ram, c->r[29] + 0x00000090u);
    { c->r[29] = c->r[29] + 0x000000b0u; return; }
    return; /* fell out of func_0899d978 */
}

/* func_089a1b30  0x089a1b30..0x089a1b58  40 bytes, source=sweep */
void func_089a1b30(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089a1b30u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000100u);
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_089a1b30 */
}

/* func_089a6430  0x089a6430..0x089a646c  60 bytes, source=sweep */
void func_089a6430(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089a6430u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08ab0000u;
    c->r[2] = c->r[2] + 0x00002ea8u;
    c->r[3] = c->r[3] + c->r[2];
    c->r[2] = 0u + 0x00000001u;
    mem_w32(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_089a6430 */
}

/* func_089ac3d8  0x089ac3d8..0x089ac434  92 bytes, source=sweep */
void func_089ac3d8(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089ac3d8u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000004u);
    mem_wf32(ram, c->r[3] + 0x00000000u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = c->r[2] + 0x00000004u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000008u);
    mem_wf32(ram, c->r[3] + 0x00000000u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = c->r[2] + 0x00000008u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x0000000cu);
    mem_wf32(ram, c->r[3] + 0x00000000u, c->f[0]);
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_089ac3d8 */
}

/* func_089b27a4  0x089b27a4..0x089b27cc  40 bytes, source=sweep */
void func_089b27a4(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089b27a4u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000104u;
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_089b27a4 */
}

/* func_089b34c8  0x089b34c8..0x089b3514  76 bytes, source=sweep */
void func_089b34c8(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089b34c8u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[2] = c->r[5] + 0u;
    mem_w8(ram, c->r[30] + 0x00000004u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    mem_w32(ram, c->r[2] + 0x00000000u, 0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    mem_w32(ram, c->r[2] + 0x00000004u, 0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    mem_w8(ram, c->r[2] + 0x00000008u, 0u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r8(ram, c->r[30] + 0x00000004u);
    mem_w8(ram, c->r[3] + 0x00000009u, c->r[2]);
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_089b34c8 */
}

/* func_089b62b8  0x089b62b8..0x089b6460  424 bytes, source=sweep */
void func_089b62b8(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089b62b8u);
    c->r[29] = c->r[29] + 0xfffffdc0u;
    mem_w32(ram, c->r[29] + 0x00000234u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000230u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[6]);
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[7]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000008u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_089b62f0; }
    { goto L_089b644c; }
L_089b62f0:
    c->r[2] = c->r[30] + 0x00000020u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x089b6304u; c->r[5] = mem_r32(ram, c->r[3] + 0x00000004u); func_089b6f10(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000010u, 0u);
L_089b6308:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = ((s32)c->r[2] < (s32)c->r[3]) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_089b6324; }
    { goto L_089b644c; }
L_089b6324:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x00000008u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000000u);
    mem_w32(ram, c->r[30] + 0x00000220u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000220u);
    c->r[2] = 0u + 0x000000ffu;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_089b6354; }
    { goto L_089b643c; }
L_089b6354:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000220u);
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[30];
    c->r[2] = c->r[2] + 0x00000020u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[3] = mem_r8(ram, c->r[2] + 0x000000a5u);
    c->r[2] = 0u + 0x000000ffu;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_089b63a4; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000220u);
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[30];
    c->r[2] = c->r[2] + 0x00000020u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[2] = mem_r8(ram, c->r[2] + 0x000000a5u);
    c->r[3] = c->r[2] << 6;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = c->r[3] + c->r[2];
    { mem_w32(ram, c->r[30] + 0x00000224u, c->r[3]); goto L_089b63ac; }
L_089b63a4:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    mem_w32(ram, c->r[30] + 0x00000224u, c->r[2]);
L_089b63ac:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000224u);
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000220u);
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[30];
    c->r[2] = c->r[2] + 0x00000020u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[1] = 0x08a50000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffffb234u);
    mem_wf32(ram, c->r[2] + 0x0000008cu, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[3] = c->r[2] << 6;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[4] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000220u);
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[30];
    c->r[2] = c->r[2] + 0x00000020u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[5] = c->r[2] + 0x00000070u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000220u);
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[30];
    c->r[2] = c->r[2] + 0x00000020u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[3] = c->r[2] + 0x00000090u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000220u);
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[30];
    c->r[2] = c->r[2] + 0x00000020u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000080u;
    c->r[6] = c->r[3] + 0u;
    c->r[7] = c->r[2] + 0u;
    { c->r[31] = 0x089b643cu; c->r[8] = mem_r32(ram, c->r[30] + 0x00000014u); func_089b7160(c, ram); }
L_089b643c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]); goto L_089b6308; }
L_089b644c:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000234u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000230u);
    { c->r[29] = c->r[29] + 0x00000240u; return; }
    return; /* fell out of func_089b62b8 */
}

/* func_089b7c54  0x089b7c54..0x089b7ca4  80 bytes, source=fde */
void func_089b7c54(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089b7c54u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[6]);
    { c->r[31] = 0x089b7c78u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u); func_089b7544(c, ram); }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[6] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[7] = 0u + 0u;
    { c->r[31] = 0x089b7c90u; c->r[8] = 0u + 0u; func_089b75f8(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_089b7c54 */
}

/* func_089b974c  0x089b974c..0x089b9784  56 bytes, source=fde */
void func_089b974c(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089b974cu);
    c->r[29] = c->r[29] + 0xfffffff0u;
    mem_w32(ram, c->r[29] + 0x00000004u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000000u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    c->r[4] = 0x08b40000u;
    c->r[4] = c->r[4] + 0xfffff128u;
    c->r[5] = 0u + 0u;
    { c->r[31] = 0x089b9770u; c->r[6] = 0x00040000u; func_08a19ec4(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000004u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000000u);
    { c->r[29] = c->r[29] + 0x00000010u; return; }
    return; /* fell out of func_089b974c */
}

/* func_089c356c  0x089c356c..0x089c35a0  52 bytes, source=fde */
void func_089c356c(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089c356cu);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    { c->r[31] = 0x089c358cu; c->r[4] = mem_r32(ram, c->r[30] + 0x00000004u); func_089c6f04(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_089c356c */
}

/* func_089c6aac  0x089c6aac..0x089c6ae4  56 bytes, source=sweep */
void func_089c6aac(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089c6aacu);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000020u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_089c6aac */
}

/* func_089c8ddc  0x089c8ddc..0x089c9050  628 bytes, source=fde */
void func_089c8ddc(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089c8ddcu);
    c->r[29] = c->r[29] + 0xffffffb0u;
    mem_w32(ram, c->r[29] + 0x00000044u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000040u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[2] = c->r[30] + 0x00000010u;
    { c->r[31] = 0x089c8dfcu; c->r[4] = c->r[2] + 0u; hle_dispatch_stub(c, ram, 0x08a247f4u); /* sceKernelGetSystemTime */ }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    mem_w32(ram, c->r[2] + 0x00000100u, 0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    mem_w32(ram, c->r[2] + 0x00000118u, 0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    mem_w8(ram, c->r[2] + 0x00000142u, 0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    mem_w8(ram, c->r[2] + 0x00000140u, 0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    mem_w8(ram, c->r[2] + 0x00000147u, 0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    mem_w8(ram, c->r[2] + 0x00000148u, 0u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = 0u + 0x00000001u;
    mem_w8(ram, c->r[3] + 0x00000149u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    mem_w8(ram, c->r[2] + 0x0000014du, 0u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    mem_w32(ram, c->r[3] + 0x00000104u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    mem_w32(ram, c->r[2] + 0x00000108u, 0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    mem_w32(ram, c->r[2] + 0x0000010cu, 0u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = 0u + 0x00000001u;
    mem_w32(ram, c->r[3] + 0x00000114u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    mem_w8(ram, c->r[2] + 0x00000150u, 0u);
    mem_w32(ram, c->r[30] + 0x00000020u, 0u);
    c->r[2] = c->r[30] + 0x00000020u;
    c->r[4] = 0u + 0x00000008u;
    { c->r[31] = 0x089c8e84u; c->r[5] = c->r[2] + 0u; hle_dispatch_stub(c, ram, 0x08a24dacu); /* sceUtilityGetSystemParamInt */ }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[2] = (c->r[2] < 0x0000000au) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_089c8f20; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08a50000u;
    c->r[2] = c->r[2] + 0xffffb494u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    { u32 _t = c->r[2]; switch (_t) { case 0x089c8eb4u: goto L_089c8eb4; case 0x089c8ec0u: goto L_089c8ec0; case 0x089c8ed0u: goto L_089c8ed0; case 0x089c8ee0u: goto L_089c8ee0; case 0x089c8ef0u: goto L_089c8ef0; case 0x089c8f00u: goto L_089c8f00; case 0x089c8f10u: goto L_089c8f10; case 0x089c8f20u: goto L_089c8f20; default: recomp_trap_unknown_indirect(c, ram, 0x089c8eacu, _t); return; } }
L_089c8eb4:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    { mem_w8(ram, c->r[2] + 0x0000014cu, 0u); goto L_089c8f2c; }
L_089c8ec0:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = 0u + 0x00000001u;
    { mem_w8(ram, c->r[3] + 0x0000014cu, c->r[2]); goto L_089c8f2c; }
L_089c8ed0:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = 0u + 0x00000002u;
    { mem_w8(ram, c->r[3] + 0x0000014cu, c->r[2]); goto L_089c8f2c; }
L_089c8ee0:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = 0u + 0x00000003u;
    { mem_w8(ram, c->r[3] + 0x0000014cu, c->r[2]); goto L_089c8f2c; }
L_089c8ef0:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = 0u + 0x00000004u;
    { mem_w8(ram, c->r[3] + 0x0000014cu, c->r[2]); goto L_089c8f2c; }
L_089c8f00:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = 0u + 0x00000005u;
    { mem_w8(ram, c->r[3] + 0x0000014cu, c->r[2]); goto L_089c8f2c; }
L_089c8f10:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = 0u + 0x00000006u;
    { mem_w8(ram, c->r[3] + 0x0000014cu, c->r[2]); goto L_089c8f2c; }
L_089c8f20:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = 0u + 0x00000001u;
    mem_w8(ram, c->r[3] + 0x0000014cu, c->r[2]);
L_089c8f2c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    mem_w8(ram, c->r[2] + 0x00000141u, 0u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = 0u + 0xffffffffu;
    mem_w8(ram, c->r[3] + 0x0000014eu, c->r[2]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = 0u + 0x000000ffu;
    { c->r[31] = 0x089c8f50u; c->r[6] = 0u + 0x00000100u; func_08a19ec4(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x000001d8u;
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x089c8f64u; c->r[5] = c->r[2] + 0u; func_089c965c(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    mem_w8(ram, c->r[2] + 0x00000151u, 0u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = 0u + 0x0000000bu;
    mem_w8(ram, c->r[3] + 0x0000014au, c->r[2]);
    c->r[3] = c->r[30] + 0x00000030u;
    c->r[2] = 0x08a50000u;
    c->r[2] = c->r[2] + 0xffffb484u;
    c->r[4] = mem_lwl(ram, c->r[2] + 0x00000003u, c->r[4]);
    c->r[4] = mem_lwr(ram, c->r[2] + 0x00000000u, c->r[4]);
    c->r[5] = mem_lwl(ram, c->r[2] + 0x00000007u, c->r[5]);
    c->r[5] = mem_lwr(ram, c->r[2] + 0x00000004u, c->r[5]);
    c->r[6] = mem_lwl(ram, c->r[2] + 0x0000000bu, c->r[6]);
    c->r[6] = mem_lwr(ram, c->r[2] + 0x00000008u, c->r[6]);
    c->r[7] = mem_lwl(ram, c->r[2] + 0x0000000fu, c->r[7]);
    c->r[7] = mem_lwr(ram, c->r[2] + 0x0000000cu, c->r[7]);
    mem_swl(ram, c->r[3] + 0x00000003u, c->r[4]);
    mem_swr(ram, c->r[3] + 0x00000000u, c->r[4]);
    mem_swl(ram, c->r[3] + 0x00000007u, c->r[5]);
    mem_swr(ram, c->r[3] + 0x00000004u, c->r[5]);
    mem_swl(ram, c->r[3] + 0x0000000bu, c->r[6]);
    mem_swr(ram, c->r[3] + 0x00000008u, c->r[6]);
    mem_swl(ram, c->r[3] + 0x0000000fu, c->r[7]);
    mem_swr(ram, c->r[3] + 0x0000000cu, c->r[7]);
    mem_w32(ram, c->r[30] + 0x00000020u, 0u);
L_089c8fc8:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000010u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_089c8fe0; }
    { goto L_089c9014; }
L_089c8fe0:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[4] = c->r[2] + 0x00001b80u;
    c->r[3] = c->r[30] + 0x00000030u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000000u);
    mem_w8(ram, c->r[4] + 0x00000018u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000020u, c->r[2]); goto L_089c8fc8; }
L_089c9014:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    mem_w16(ram, c->r[2] + 0x00000152u, 0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    mem_w8(ram, c->r[2] + 0x00000154u, 0u);
    { c->r[31] = 0x089c902cu; c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u); func_089c9050(c, ram); }
    { c->r[31] = 0x089c9034u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u); func_089c9114(c, ram); }
    { c->r[31] = 0x089c903cu; c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u); func_089c90c0(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000044u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000040u);
    { c->r[29] = c->r[29] + 0x00000050u; return; }
    return; /* fell out of func_089c8ddc */
}

/* func_089cb1e4  0x089cb1e4..0x089cb2b4  208 bytes, source=fde */
void func_089cb1e4(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089cb1e4u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[2] + 0x00000008u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x089cb214u; c->r[5] = c->r[2] + 0u; func_089cb820(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_089cb23c; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000020u);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[5] = 0u + 0x00000003u;
    { u32 _t = c->r[2]; c->r[31] = 0x089cb23cu; c->r[6] = mem_r32(ram, c->r[30] + 0x00000004u); recomp_call_indirect(c, ram, 0x089cb234u, _t); }
L_089cb23c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = c->r[2] + 0x0000001cu;
    c->r[2] = mem_r32(ram, c->r[5] + 0x00000000u);
    c->r[4] = c->r[2] + 0u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    mem_w32(ram, c->r[4] + 0x00000000u, c->r[3]);
    c->r[2] = c->r[2] + 0x00000004u;
    mem_w32(ram, c->r[5] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    mem_w32(ram, c->r[2] + 0x00000014u, 0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000004u);
    mem_w32(ram, c->r[3] + 0x00000004u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    mem_w32(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000024u);
    c->r[2] = c->r[2] + 0xffffffffu;
    mem_w32(ram, c->r[3] + 0x00000024u, c->r[2]);
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_089cb1e4 */
}

/* func_089ce998  0x089ce998..0x089cf1f8  2144 bytes, source=fde */
void func_089ce998(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089ce998u);
    c->r[29] = c->r[29] + 0xfffffd70u;
    mem_w32(ram, c->r[29] + 0x00000284u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000280u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[4]);
    c->r[12] = c->r[5] + 0u;
    mem_w32(ram, c->r[30] + 0x00000018u, c->r[6]);
    c->r[2] = c->r[7] + 0u;
    c->r[3] = c->r[8] + 0u;
    c->r[4] = c->r[9] + 0u;
    c->r[5] = c->r[10] + 0u;
    c->r[6] = c->r[11] + 0u;
    mem_w8(ram, c->r[30] + 0x00000014u, c->r[12]);
    mem_w8(ram, c->r[30] + 0x0000001cu, c->r[2]);
    mem_w16(ram, c->r[30] + 0x0000001eu, c->r[3]);
    mem_w16(ram, c->r[30] + 0x00000020u, c->r[4]);
    mem_w8(ram, c->r[30] + 0x00000022u, c->r[5]);
    mem_w8(ram, c->r[30] + 0x00000023u, c->r[6]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_089ce9f4; }
    { goto L_089cf1e4; }
L_089ce9f4:
    c->r[3] = c->r[30] + 0x0000001eu;
    c->r[7] = c->r[30] + 0x00000020u;
    c->r[8] = c->r[30] + 0x00000230u;
    c->r[9] = c->r[30] + 0x00000232u;
    c->r[10] = mem_r8(ram, c->r[30] + 0x00000014u);
    c->r[11] = mem_r8(ram, c->r[30] + 0x00000023u);
    c->r[2] = c->r[30] + 0x00000030u;
    mem_w32(ram, c->r[29] + 0x00000000u, c->r[2]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000018u);
    { c->r[31] = 0x089cea24u; c->r[6] = c->r[3] + 0u; func_089d0730(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000234u, c->r[2]);
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
    { c->r[31] = 0x089cea70u; c->r[5] = mem_r32(ram, c->r[30] + 0x00000290u); func_089d22c4(c, ram); }
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[30] + 0x0000001cu);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000010u);
    { c->r[31] = 0x089cea80u; c->r[5] = c->r[2] + 0u; func_089d00b4(c, ram); }
    c->r[2] = mem_r8(ram, c->r[30] + 0x00000022u);
    c->r[2] = c->r[2] & 0x0003u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_089ceb24; }
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
    { c->r[31] = 0x089cead8u; c->r[5] = 0u + 0x00000009u; func_089d23d0(c, ram); }
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
    { c->r[31] = 0x089ceb24u; c->r[5] = c->r[5] | 0x0100u; func_089d20f0(c, ram); }
L_089ceb24:
    c->r[2] = mem_r8(ram, c->r[30] + 0x00000022u);
    c->r[2] = c->r[2] & 0x0002u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_089ceb54; }
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[30] + 0x0000001eu);
    c->r[3] = (u32)(s32)(s16)mem_r16(ram, c->r[30] + 0x00000020u);
    c->r[7] = (u32)(s32)(s16)mem_r16(ram, c->r[30] + 0x00000230u);
    c->r[8] = (u32)(s32)(s16)mem_r16(ram, c->r[30] + 0x00000232u);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x089ceb54u; c->r[6] = c->r[3] + 0u; func_089d012c(c, ram); }
L_089ceb54:
    mem_w32(ram, c->r[30] + 0x00000238u, 0u);
    c->r[2] = mem_r8(ram, c->r[30] + 0x00000022u);
    c->r[2] = c->r[2] & 0x0001u;
    c->r[2] = c->r[2] & 0x00ffu;
    { int _c = (c->r[2] == 0u); if (_c) goto L_089cec98; }
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[30] + 0x0000001eu);
    c->r[3] = (u32)(s32)(s16)mem_r16(ram, c->r[30] + 0x00000020u);
    c->r[7] = (u32)(s32)(s16)mem_r16(ram, c->r[30] + 0x00000230u);
    c->r[8] = (u32)(s32)(s16)mem_r16(ram, c->r[30] + 0x00000232u);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x089ceb8cu; c->r[6] = c->r[3] + 0u; func_089d04e4(c, ram); }
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
    { c->r[31] = 0x089cebd4u; c->r[5] = 0u + 0x00000009u; func_089d2394(c, ram); }
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[30] + 0x0000001cu);
    c->r[2] = 0u + 0x00000001u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_089cec3c; }
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
    c->r[5] = 0u + 0x00000002u;
    c->r[6] = 0x08a60000u;
    { c->r[31] = 0x089cec34u; c->r[6] = c->r[6] + 0xffffad30u; func_089d2354(c, ram); }
    { goto L_089cec8c; }
L_089cec3c:
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
    c->r[5] = 0u + 0x00000002u;
    c->r[6] = 0x08b80000u;
    { c->r[31] = 0x089cec8cu; c->r[6] = c->r[6] + 0xfffffcd0u; func_089d2354(c, ram); }
L_089cec8c:
    c->r[2] = 0u + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000238u, c->r[2]); goto L_089ced98; }
L_089cec98:
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
    { c->r[31] = 0x089cece0u; c->r[5] = 0u + 0x00000009u; func_089d2394(c, ram); }
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[30] + 0x0000001cu);
    c->r[2] = 0u + 0x00000001u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_089ced48; }
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
    c->r[5] = 0u + 0x00000002u;
    c->r[6] = 0x08a60000u;
    { c->r[31] = 0x089ced40u; c->r[6] = c->r[6] + 0xffffacf0u; func_089d2354(c, ram); }
    { goto L_089ced98; }
L_089ced48:
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
    c->r[5] = 0u + 0x00000002u;
    c->r[6] = 0x08b80000u;
    { c->r[31] = 0x089ced98u; c->r[6] = c->r[6] + 0xfffffc90u; func_089d2354(c, ram); }
L_089ced98:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000234u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[3];
    c->r[2] = c->r[2] << 2;
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x089cedb8u; c->r[5] = 0u + 0x00000010u; func_0881a1d4(c, ram); }
    mem_w32(ram, c->r[30] + 0x0000023cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000023cu);
    mem_w32(ram, c->r[30] + 0x00000240u, c->r[2]);
    mem_w32(ram, c->r[30] + 0x00000244u, 0u);
L_089cedc8:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000244u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000234u);
    c->r[2] = ((s32)c->r[2] < (s32)c->r[3]) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_089cede4; }
    { goto L_089cf018; }
L_089cede4:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000244u);
    c->r[3] = c->r[2] << 2;
    c->r[2] = c->r[30] + 0x00000010u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = c->r[2] + 0x00000020u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    mem_w32(ram, c->r[30] + 0x00000248u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000248u);
    c->r[3] = mem_r16(ram, c->r[2] + 0x00000006u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000238u);
    c->r[3] = c->r[3] + c->r[2];
    c->f[0] = u2f(c->r[3]);
    c->f[0] = (f32)(s32)f2u(c->f[0]);
    mem_wf32(ram, c->r[30] + 0x0000024cu, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000248u);
    c->r[2] = mem_r16(ram, c->r[2] + 0x00000008u);
    c->f[0] = u2f(c->r[2]);
    c->f[0] = (f32)(s32)f2u(c->f[0]);
    mem_wf32(ram, c->r[30] + 0x00000250u, c->f[0]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000240u);
    c->r[2] = mem_r16(ram, c->r[30] + 0x0000001eu);
    mem_w16(ram, c->r[3] + 0x00000004u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000240u);
    c->r[2] = mem_r16(ram, c->r[30] + 0x00000020u);
    mem_w16(ram, c->r[3] + 0x00000006u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000240u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000248u);
    c->r[2] = mem_r16(ram, c->r[2] + 0x00000002u);
    mem_w16(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000240u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000248u);
    c->r[2] = mem_r16(ram, c->r[2] + 0x00000004u);
    mem_w16(ram, c->r[3] + 0x00000002u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000240u);
    c->r[2] = c->r[2] + 0x0000000au;
    c->r[3] = (u32)(s32)(s16)mem_r16(ram, c->r[30] + 0x0000001eu);
    c->f[0] = u2f(c->r[3]);
    c->f[1] = (f32)(s32)f2u(c->f[0]);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x0000024cu);
    c->f[0] = c->f[1] + c->f[0];
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    c->r[3] = f2u(c->f[0]);
    mem_w16(ram, c->r[2] + 0x00000004u, c->r[3]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000240u);
    c->r[2] = c->r[2] + 0x0000000au;
    c->r[3] = (u32)(s32)(s16)mem_r16(ram, c->r[30] + 0x00000020u);
    c->f[0] = u2f(c->r[3]);
    c->f[1] = (f32)(s32)f2u(c->f[0]);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000250u);
    c->f[0] = c->f[1] + c->f[0];
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    c->r[3] = f2u(c->f[0]);
    mem_w16(ram, c->r[2] + 0x00000006u, c->r[3]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000240u);
    c->r[2] = c->r[2] + 0x0000000au;
    mem_w32(ram, c->r[30] + 0x00000254u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000248u);
    c->r[2] = mem_r16(ram, c->r[2] + 0x00000002u);
    c->f[0] = u2f(c->r[2]);
    c->f[1] = (f32)(s32)f2u(c->f[0]);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x0000024cu);
    c->f[1] = c->f[1] + c->f[0];
    mem_wf32(ram, c->r[30] + 0x00000258u, c->f[1]);
    c->r[1] = 0x08a50000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffffb69cu);
    mem_wf32(ram, c->r[30] + 0x00000260u, c->f[0]);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000258u);
    c->f[2] = mem_rf32(ram, c->r[30] + 0x00000260u);
    alx_c_cond_s(c, 14, c->f[2], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_089cef14; }
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000258u);
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    { mem_wf32(ram, c->r[30] + 0x0000025cu, c->f[0]); goto L_089cef38; }
L_089cef14:
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000258u);
    c->f[2] = mem_rf32(ram, c->r[30] + 0x00000260u);
    c->f[0] = c->f[1] - c->f[2];
    c->r[2] = 0x80000000u;
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    mem_wf32(ram, c->r[30] + 0x0000025cu, c->f[0]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000025cu);
    c->r[3] = c->r[3] | c->r[2];
    mem_w32(ram, c->r[30] + 0x0000025cu, c->r[3]);
L_089cef38:
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000025cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000254u);
    mem_w16(ram, c->r[2] + 0x00000000u, c->r[3]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000240u);
    c->r[2] = c->r[2] + 0x0000000au;
    mem_w32(ram, c->r[30] + 0x00000264u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000248u);
    c->r[2] = mem_r16(ram, c->r[2] + 0x00000004u);
    c->f[0] = u2f(c->r[2]);
    c->f[1] = (f32)(s32)f2u(c->f[0]);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000250u);
    c->f[1] = c->f[1] + c->f[0];
    mem_wf32(ram, c->r[30] + 0x00000268u, c->f[1]);
    c->r[1] = 0x08a50000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffffb69cu);
    mem_wf32(ram, c->r[30] + 0x00000270u, c->f[0]);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000268u);
    c->f[2] = mem_rf32(ram, c->r[30] + 0x00000270u);
    alx_c_cond_s(c, 14, c->f[2], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_089cefa0; }
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000268u);
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    { mem_wf32(ram, c->r[30] + 0x0000026cu, c->f[0]); goto L_089cefc4; }
L_089cefa0:
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000268u);
    c->f[2] = mem_rf32(ram, c->r[30] + 0x00000270u);
    c->f[0] = c->f[1] - c->f[2];
    c->r[2] = 0x80000000u;
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    mem_wf32(ram, c->r[30] + 0x0000026cu, c->f[0]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000026cu);
    c->r[3] = c->r[3] | c->r[2];
    mem_w32(ram, c->r[30] + 0x0000026cu, c->r[3]);
L_089cefc4:
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000026cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000264u);
    mem_w16(ram, c->r[2] + 0x00000002u, c->r[3]);
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[30] + 0x0000001eu);
    c->f[0] = u2f(c->r[2]);
    c->f[1] = (f32)(s32)f2u(c->f[0]);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x0000024cu);
    c->f[0] = c->f[1] + c->f[0];
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    c->r[3] = f2u(c->f[0]);
    c->r[2] = mem_r16(ram, c->r[30] + 0x00000238u);
    c->r[2] = c->r[2] ^ 0x0001u;
    c->r[2] = c->r[3] + c->r[2];
    mem_w16(ram, c->r[30] + 0x0000001eu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000244u);
    c->r[2] = c->r[2] + 0x00000001u;
    mem_w32(ram, c->r[30] + 0x00000244u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000240u);
    c->r[2] = c->r[2] + 0x00000014u;
    { mem_w32(ram, c->r[30] + 0x00000240u, c->r[2]); goto L_089cedc8; }
L_089cf018:
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
    { c->r[31] = 0x089cf064u; c->r[5] = c->r[5] | 0x0102u; func_089d20f0(c, ram); }
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
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000023cu);
    c->r[2] = c->r[2] >> 24;
    c->r[2] = c->r[2] & 0x000fu;
    c->r[3] = c->r[2] << 16;
    c->r[2] = 0x10000000u;
    c->r[2] = c->r[3] | c->r[2];
    { c->r[31] = 0x089cf0c0u; c->r[5] = c->r[2] + 0u; func_089d20f0(c, ram); }
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
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000023cu);
    c->r[2] = 0x00ff0000u;
    c->r[2] = c->r[2] | 0xffffu;
    c->r[3] = c->r[3] & c->r[2];
    c->r[2] = 0x01000000u;
    c->r[2] = c->r[3] | c->r[2];
    { c->r[31] = 0x089cf11cu; c->r[5] = c->r[2] + 0u; func_089d20f0(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000248u, 0u);
L_089cf120:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000248u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000234u);
    c->r[2] = ((s32)c->r[2] < (s32)c->r[3]) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_089cf13c; }
    { goto L_089cf198; }
L_089cf13c:
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
    { c->r[31] = 0x089cf188u; c->r[5] = c->r[5] | 0x0002u; func_089d20f0(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000248u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000248u, c->r[2]); goto L_089cf120; }
L_089cf198:
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
    c->r[5] = 0x08b90000u;
    { c->r[31] = 0x089cf1e4u; c->r[5] = mem_r32(ram, c->r[5] + 0x00005420u); func_089d22c4(c, ram); }
L_089cf1e4:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000284u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000280u);
    { c->r[29] = c->r[29] + 0x00000290u; return; }
    return; /* fell out of func_089ce998 */
}

/* func_089d27dc  0x089d27dc..0x089d2848  108 bytes, source=sweep */
void func_089d27dc(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089d27dcu);
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
    { c->r[31] = 0x089d2818u; c->r[5] = c->r[2] + 0u; func_089d20f0(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = c->r[2] >> 24;
    c->r[2] = 0x58000000u;
    c->r[2] = c->r[3] | c->r[2];
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x089d2834u; c->r[5] = c->r[2] + 0u; func_089d20f0(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_089d27dc */
}

/* func_089d3828  0x089d3828..0x089d38ac  132 bytes, source=fde */
void func_089d3828(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089d3828u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[3] = 0x08a80000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x000027f4u);
    c->r[2] = 0u + 0xfffffffeu;
    c->r[2] = c->r[3] & c->r[2];
    c->r[1] = 0x08a80000u;
    mem_w32(ram, c->r[1] + 0x000027f4u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x089d3860u; mem_w32(ram, c->r[2] + 0x00000014u, 0u); hle_dispatch_stub(c, ram, 0x08a24c34u); /* sceNetAdhocctlDisconnect */ }
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    { int _c = ((s32)c->r[2] >= 0); if (_c) goto L_089d388c; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = 0x80410000u;
    c->r[2] = c->r[2] | 0x0b10u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_089d388c; }
    { mem_w32(ram, c->r[30] + 0x00000008u, 0u); goto L_089d3894; }
L_089d388c:
    c->r[2] = 0u + 0x00000001u;
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]);
L_089d3894:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_089d3828 */
}

/* func_089d531c  0x089d531c..0x089d53a0  132 bytes, source=fde */
void func_089d531c(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089d531cu);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[3];
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_089d5358; }
    { goto L_089d538c; }
L_089d5358:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[3];
    c->r[4] = mem_r32(ram, c->r[2] + 0x00000000u);
    { c->r[31] = 0x089d5374u; c->r[5] = 0u + 0u; hle_dispatch_stub(c, ram, 0x08a24b54u); /* sceNetAdhocPtpClose */ }
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[3];
    mem_w32(ram, c->r[2] + 0x00000000u, 0u);
L_089d538c:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_089d531c */
}

/* func_089d687c  0x089d687c..0x089d68d0  84 bytes, source=residue */
void func_089d687c(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089d687cu);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[6]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
    c->r[5] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = mem_r32(ram, c->r[5] + 0x00000000u);
    c->r[2] = c->r[3] + 0u;
    c->r[4] = c->r[2] << 15;
    c->r[2] = 0x08b90000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000540u);
    c->r[2] = c->r[4] + c->r[2];
    c->r[3] = c->r[3] + 0x00000001u;
    mem_w32(ram, c->r[5] + 0x00000000u, c->r[3]);
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_089d687c */
}

/* func_089d7f6c  0x089d7f6c..0x089d7f98  44 bytes, source=sweep */
void func_089d7f6c(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089d7f6cu);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000000cu);
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x00000004u);
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_089d7f6c */
}

/* func_089d9768  0x089d9768..0x089d97b4  76 bytes, source=sweep */
void func_089d9768(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089d9768u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[6]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    mem_w32(ram, c->r[3] + 0x00000038u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    mem_w32(ram, c->r[3] + 0x0000003cu, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    mem_w32(ram, c->r[3] + 0x00000040u, c->r[2]);
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_089d9768 */
}

/* func_089da628  0x089da628..0x089da6b4  140 bytes, source=sweep */
void func_089da628(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089da628u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000010u);
    c->r[3] = c->r[2] << 2;
    c->r[2] = mem_r32(ram, c->r[4] + 0x00000008u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    mem_w32(ram, c->r[5] + 0x00000000u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000014u);
    c->r[2] = c->r[2] + 0xffffffffu;
    mem_w32(ram, c->r[3] + 0x00000014u, c->r[2]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000010u);
    c->r[3] = c->r[2] + 0x00000001u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000018u);
    alx_div(c, c->r[3], c->r[2]);
    c->r[3] = c->hi;
    if (c->r[2] == 0u) { recomp_break(c, ram, 0x089da698u, 0x7u); goto L_089da69c; }
L_089da69c:
    mem_w32(ram, c->r[4] + 0x00000010u, c->r[3]);
    c->r[2] = 0u + 0u;
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_089da628 */
}

/* func_089dbd24  0x089dbd24..0x089dbd58  52 bytes, source=sweep */
void func_089dbd24(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089dbd24u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x089dbd44u; c->r[5] = 0xcb000000u; func_089db8b8(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_089dbd24 */
}

/* func_089dd960  0x089dd960..0x089dd980  32 bytes, source=sweep */
void func_089dd960(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089dd960u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_089dd960 */
}

/* func_089df7a0  0x089df7a0..0x089dfcb8  1304 bytes, source=sweep */
void func_089df7a0(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089df7a0u);
    c->r[29] = c->r[29] + 0xffffffd0u;
    mem_w32(ram, c->r[29] + 0x00000024u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000020u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[6]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000000u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_089dfa10; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08a60000u;
    c->r[2] = c->r[2] + 0xffffdab0u;
    c->r[2] = c->r[2] + c->r[3];
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_089df850; }
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
    { c->r[31] = 0x089df848u; c->r[5] = 0u + 0x00000004u; func_089e2288(c, ram); }
    { goto L_089df898; }
L_089df850:
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
    { c->r[31] = 0x089df898u; c->r[5] = 0u + 0x00000004u; func_089e22c4(c, ram); }
L_089df898:
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
    c->r[2] = c->r[2] + 0x00000004u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[3] = c->r[2] << 8;
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x0000000cu;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[2] = c->r[2] << 4;
    c->r[3] = c->r[3] | c->r[2];
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x00000008u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[3] = c->r[3] | c->r[2];
    c->r[2] = 0xdf000000u;
    c->r[2] = c->r[3] | c->r[2];
    { c->r[31] = 0x089df918u; c->r[5] = c->r[2] + 0u; func_089e1908(c, ram); }
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
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x00000010u;
    c->r[4] = c->r[3] + 0u;
    c->r[5] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[6] = 0u + 0u;
    { c->r[31] = 0x089df970u; c->r[7] = 0u + 0x000000ffu; func_089e2048(c, ram); }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = 0u + 0x00000003u;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_089df9a8; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = 0u + 0x00000004u;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_089df9a8; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000020u;
    { c->r[31] = 0x089df9a0u; c->r[4] = c->r[2] + 0u; func_0888d9b8(c, ram); }
    { mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]); goto L_089df9ac; }
L_089df9a8:
    mem_w32(ram, c->r[30] + 0x00000014u, 0u);
L_089df9ac:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
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
    c->r[4] = c->r[3] + c->r[2];
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = 0x00ff0000u;
    c->r[2] = c->r[2] | 0xffffu;
    c->r[3] = c->r[3] & c->r[2];
    c->r[2] = 0xcf000000u;
    c->r[2] = c->r[3] | c->r[2];
    { c->r[31] = 0x089dfa10u; c->r[5] = c->r[2] + 0u; func_089e1908(c, ram); }
L_089dfa10:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[2] + 0x00000001u;
    mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = (c->r[3] < 0x0000000au) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_089dfca4; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08a50000u;
    c->r[2] = c->r[2] + 0xffffc248u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    { u32 _t = c->r[2]; switch (_t) { case 0x089dfa4cu: goto L_089dfa4c; case 0x089dfae4u: goto L_089dfae4; case 0x089dfb7cu: goto L_089dfb7c; case 0x089dfc14u: goto L_089dfc14; case 0x089dfca4u: goto L_089dfca4; default: recomp_trap_unknown_indirect(c, ram, 0x089dfa44u, _t); return; } }
L_089dfa4c:
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
    { c->r[31] = 0x089dfa94u; c->r[5] = 0u + 0x00000007u; func_089e2090(c, ram); }
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
    { c->r[31] = 0x089dfadcu; c->r[5] = 0u + 0u; func_089e20c8(c, ram); }
    { goto L_089dfca4; }
L_089dfae4:
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
    { c->r[31] = 0x089dfb2cu; c->r[5] = 0u + 0x00000001u; func_089e2090(c, ram); }
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
    { c->r[31] = 0x089dfb74u; c->r[5] = 0u + 0x00000001u; func_089e20c8(c, ram); }
    { goto L_089dfca4; }
L_089dfb7c:
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
    { c->r[31] = 0x089dfbc4u; c->r[5] = 0u + 0x00000007u; func_089e2090(c, ram); }
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
    { c->r[31] = 0x089dfc0cu; c->r[5] = 0u + 0x00000001u; func_089e20c8(c, ram); }
    { goto L_089dfca4; }
L_089dfc14:
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
    { c->r[31] = 0x089dfc5cu; c->r[5] = 0u + 0x00000001u; func_089e2090(c, ram); }
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
    { c->r[31] = 0x089dfca4u; c->r[5] = 0u + 0u; func_089e20c8(c, ram); }
L_089dfca4:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000024u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000020u);
    { c->r[29] = c->r[29] + 0x00000030u; return; }
    return; /* fell out of func_089df7a0 */
}

/* func_089e1db0  0x089e1db0..0x089e1de8  56 bytes, source=sweep */
void func_089e1db0(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089e1db0u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x089e1dd4u; c->r[5] = mem_r32(ram, c->r[30] + 0x00000004u); func_089e34fc(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_089e1db0 */
}

/* func_089e2920  0x089e2920..0x089e29bc  156 bytes, source=sweep */
void func_089e2920(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089e2920u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[6]);
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[7]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = 0xd2000000u;
    c->r[2] = c->r[3] | c->r[2];
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x089e2958u; c->r[5] = c->r[2] + 0u; func_089e1908(c, ram); }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = 0x00ff0000u;
    c->r[2] = c->r[2] | 0xffffu;
    c->r[3] = c->r[3] & c->r[2];
    c->r[2] = 0x9c000000u;
    c->r[2] = c->r[3] | c->r[2];
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x089e297cu; c->r[5] = c->r[2] + 0u; func_089e1908(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[2] >> 24;
    c->r[2] = c->r[2] & 0x000fu;
    c->r[3] = c->r[2] << 16;
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = c->r[3] | c->r[2];
    c->r[2] = 0x9d000000u;
    c->r[2] = c->r[3] | c->r[2];
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x089e29a8u; c->r[5] = c->r[2] + 0u; func_089e1908(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_089e2920 */
}

/* func_089e3c4c  0x089e3c4c..0x089e3c90  68 bytes, source=sweep */
void func_089e3c4c(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089e3c4cu);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = 0xde000000u;
    c->r[2] = c->r[2] | c->r[3];
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x089e3c7cu; c->r[5] = c->r[2] + 0u; func_089e1908(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_089e3c4c */
}

/* func_089e4d18  0x089e4d18..0x089e4dc4  172 bytes, source=sweep */
void func_089e4d18(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089e4d18u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_089e4d78; }
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
    { c->r[31] = 0x089e4d70u; c->r[8] = mem_r32(ram, c->r[8] + 0x00000034u); func_089e3cd4(c, ram); }
    { goto L_089e4db0; }
L_089e4d78:
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
    { c->r[31] = 0x089e4db0u; c->r[8] = c->r[2] + 0u; func_089e3cd4(c, ram); }
L_089e4db0:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_089e4d18 */
}

/* func_089ea25c  0x089ea25c..0x089ea338  220 bytes, source=sweep */
void func_089ea25c(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089ea25cu);
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
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_089ea2f0; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = ((s32)c->r[3] < (s32)0x00000002u) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_089ea2b4; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    { int _c = (c->r[2] == 0u); if (_c) goto L_089ea2dc; }
    { goto L_089ea324; }
L_089ea2b4:
    c->r[2] = 0u + 0x00000002u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_089ea304; }
    c->r[2] = 0u + 0x00000003u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_089ea318; }
    { goto L_089ea324; }
L_089ea2dc:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x089ea2e8u; c->r[5] = mem_r32(ram, c->r[30] + 0x00000008u); func_089ea714(c, ram); }
    { goto L_089ea324; }
L_089ea2f0:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x089ea2fcu; c->r[5] = mem_r32(ram, c->r[30] + 0x00000008u); func_089ea814(c, ram); }
    { goto L_089ea324; }
L_089ea304:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x089ea310u; c->r[5] = mem_r32(ram, c->r[30] + 0x00000008u); func_089ea8e4(c, ram); }
    { goto L_089ea324; }
L_089ea318:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x089ea324u; c->r[5] = mem_r32(ram, c->r[30] + 0x00000008u); func_089ea9b4(c, ram); }
L_089ea324:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_089ea25c */
}

/* func_089eb1a0  0x089eb1a0..0x089eb1e4  68 bytes, source=sweep */
void func_089eb1a0(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089eb1a0u);
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
    { c->r[31] = 0x089eb1d0u; c->r[5] = c->r[2] + 0u; func_089ea03c(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_089eb1a0 */
}

/* func_089ef394  0x089ef394..0x089ef438  164 bytes, source=fde */
void func_089ef394(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089ef394u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[1] = 0x00010000u;
    c->r[1] = c->r[1] + c->r[2];
    mem_w32(ram, c->r[1] + 0xffffe860u, 0u);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = 0x00010000u;
    c->r[3] = c->r[3] + c->r[2];
    c->r[3] = mem_r32(ram, c->r[3] + 0xffffe850u);
    c->r[2] = (u32)((s32)c->r[3] >> 31);
    c->r[2] = c->r[2] >> 31;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = (u32)((s32)c->r[2] >> 1);
    c->r[1] = 0x00010000u;
    c->r[1] = c->r[1] + c->r[4];
    mem_w32(ram, c->r[1] + 0xffffe85cu, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[1] = 0x00010000u;
    c->r[1] = c->r[1] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[1] + 0xffffe854u);
    c->r[1] = 0x00010000u;
    c->r[1] = c->r[1] + c->r[3];
    mem_w32(ram, c->r[1] + 0xffffe864u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = 0u | 0xe8acu;
    c->r[2] = c->r[3] + c->r[2];
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0u + 0u;
    { c->r[31] = 0x089ef424u; c->r[6] = 0u + 0x00000014u; func_08a19ec4(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_089ef394 */
}

/* func_089f0de0  0x089f0de0..0x089f0e30  80 bytes, source=sweep */
void func_089f0de0(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089f0de0u);
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
    { c->r[31] = 0x089f0e1cu; c->r[5] = c->r[2] + 0u; func_089f0338(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_089f0de0 */
}

/* func_089f3b08  0x089f3b08..0x089f491c  3604 bytes, source=fde */
void func_089f3b08(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089f3b08u);
    c->r[29] = c->r[29] + 0xfffffec0u;
    mem_w32(ram, c->r[29] + 0x00000134u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000130u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[6]);
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[7]);
    mem_wf32(ram, c->r[30] + 0x00000010u, c->f[12]);
    mem_wf32(ram, c->r[30] + 0x00000014u, c->f[13]);
    mem_wf32(ram, c->r[30] + 0x00000018u, c->f[14]);
    mem_wf32(ram, c->r[30] + 0x0000001cu, c->f[15]);
    mem_wf32(ram, c->r[30] + 0x00000020u, c->f[16]);
    mem_wf32(ram, c->r[30] + 0x00000024u, c->f[17]);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x0000001cu);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000020u);
    c->f[0] = c->f[1] - c->f[0];
    mem_wf32(ram, c->r[30] + 0x00000028u, c->f[0]);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000020u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000024u);
    c->f[0] = c->f[1] - c->f[0];
    mem_wf32(ram, c->r[30] + 0x0000002cu, c->f[0]);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000024u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x0000001cu);
    c->f[0] = c->f[1] - c->f[0];
    mem_wf32(ram, c->r[30] + 0x00000030u, c->f[0]);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000028u);
    c->r[1] = 0x08a50000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffffc5b8u);
    alx_c_cond_s(c, 12, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_089f3b94; }
    { goto L_089f3db0; }
L_089f3b94:
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000028u);
    c->r[1] = 0x08a50000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffffc5bcu);
    alx_c_cond_s(c, 12, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_089f3bb8; }
    { goto L_089f3db0; }
L_089f3bb8:
    c->f[1] = mem_rf32(ram, c->r[30] + 0x0000002cu);
    c->r[1] = 0x08a50000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffffc5b8u);
    alx_c_cond_s(c, 12, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_089f3bdc; }
    { goto L_089f3db0; }
L_089f3bdc:
    c->f[1] = mem_rf32(ram, c->r[30] + 0x0000002cu);
    c->r[1] = 0x08a50000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffffc5bcu);
    alx_c_cond_s(c, 12, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_089f3c00; }
    { goto L_089f3db0; }
L_089f3c00:
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000030u);
    c->r[1] = 0x08a50000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffffc5b8u);
    alx_c_cond_s(c, 12, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_089f3c24; }
    { goto L_089f3db0; }
L_089f3c24:
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000030u);
    c->r[1] = 0x08a50000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffffc5bcu);
    alx_c_cond_s(c, 12, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_089f3c48; }
    { goto L_089f3db0; }
L_089f3c48:
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000010u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000010u);
    c->f[0] = c->f[1] * c->f[0];
    mem_wf32(ram, c->r[30] + 0x00000034u, c->f[0]);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000014u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000014u);
    c->f[0] = c->f[1] * c->f[0];
    mem_wf32(ram, c->r[30] + 0x00000038u, c->f[0]);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000018u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000018u);
    c->f[0] = c->f[1] * c->f[0];
    mem_wf32(ram, c->r[30] + 0x0000003cu, c->f[0]);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000034u);
    c->r[1] = 0x08a50000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffffc5c0u);
    alx_c_cond_s(c, 12, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_089f3c9c; }
    { goto L_089f3d00; }
L_089f3c9c:
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000038u);
    c->r[1] = 0x08a50000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffffc5c0u);
    alx_c_cond_s(c, 12, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_089f3cc0; }
    { goto L_089f3d00; }
L_089f3cc0:
    c->f[1] = mem_rf32(ram, c->r[30] + 0x0000003cu);
    c->r[1] = 0x08a50000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffffc5c0u);
    alx_c_cond_s(c, 12, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_089f3ce4; }
    { goto L_089f3d00; }
L_089f3ce4:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = 0x7fff0000u;
    c->r[3] = c->r[3] | 0xffffu;
    mem_w32(ram, c->r[2] + 0x00000000u, c->r[3]);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x0000001cu);
    { mem_wf32(ram, c->r[30] + 0x00000120u, c->f[0]); goto L_089f4904; }
L_089f3d00:
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000034u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000038u);
    c->f[1] = c->f[1] + c->f[0];
    c->f[0] = mem_rf32(ram, c->r[30] + 0x0000003cu);
    c->f[0] = c->f[1] + c->f[0];
    { c->r[31] = 0x089f3d1cu; c->f[12] = c->f[0]; func_08a104b4(c, ram); }
    mem_wf32(ram, c->r[30] + 0x00000040u, c->f[0]);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000010u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000040u);
    c->f[0] = c->f[1] / c->f[0];
    mem_wf32(ram, c->r[30] + 0x00000044u, c->f[0]);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000014u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000040u);
    c->f[0] = c->f[1] / c->f[0];
    mem_wf32(ram, c->r[30] + 0x00000048u, c->f[0]);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000018u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000040u);
    c->f[0] = c->f[1] / c->f[0];
    mem_wf32(ram, c->r[30] + 0x0000004cu, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000044u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x0000001cu);
    c->f[0] = c->f[1] * c->f[0];
    mem_wf32(ram, c->r[2] + 0x00000000u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000048u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x0000001cu);
    c->f[0] = c->f[1] * c->f[0];
    mem_wf32(ram, c->r[2] + 0x00000000u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x0000004cu);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x0000001cu);
    c->f[0] = c->f[1] * c->f[0];
    mem_wf32(ram, c->r[2] + 0x00000000u, c->f[0]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0u + 0x00000001u;
    mem_w32(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000040u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x0000001cu);
    c->f[0] = c->f[1] - c->f[0];
    c->f[0] = (f32)fabsf(c->f[0]);
    { mem_wf32(ram, c->r[30] + 0x00000120u, c->f[0]); goto L_089f4904; }
L_089f3db0:
    c->f[0] = mem_rf32(ram, c->r[30] + 0x0000001cu);
    mem_wf32(ram, c->r[30] + 0x00000050u, c->f[0]);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000020u);
    mem_wf32(ram, c->r[30] + 0x00000054u, c->f[0]);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000024u);
    mem_wf32(ram, c->r[30] + 0x00000058u, c->f[0]);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000010u);
    mem_wf32(ram, c->r[30] + 0x00000060u, c->f[0]);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000014u);
    mem_wf32(ram, c->r[30] + 0x00000064u, c->f[0]);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000018u);
    mem_wf32(ram, c->r[30] + 0x00000068u, c->f[0]);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x0000001cu);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000020u);
    alx_c_cond_s(c, 14, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_089f3e00; }
    { goto L_089f3e88; }
L_089f3e00:
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000020u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000024u);
    alx_c_cond_s(c, 14, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_089f3e20; }
    { goto L_089f3e38; }
L_089f3e20:
    mem_w32(ram, c->r[30] + 0x00000080u, 0u);
    c->r[2] = 0u + 0x00000001u;
    mem_w32(ram, c->r[30] + 0x00000084u, c->r[2]);
    c->r[2] = 0u + 0x00000002u;
    { mem_w32(ram, c->r[30] + 0x00000088u, c->r[2]); goto L_089f3f0c; }
L_089f3e38:
    c->f[1] = mem_rf32(ram, c->r[30] + 0x0000001cu);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000024u);
    alx_c_cond_s(c, 14, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_089f3e58; }
    { goto L_089f3e70; }
L_089f3e58:
    mem_w32(ram, c->r[30] + 0x00000080u, 0u);
    c->r[2] = 0u + 0x00000002u;
    mem_w32(ram, c->r[30] + 0x00000084u, c->r[2]);
    c->r[2] = 0u + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000088u, c->r[2]); goto L_089f3f0c; }
L_089f3e70:
    c->r[2] = 0u + 0x00000001u;
    mem_w32(ram, c->r[30] + 0x00000080u, c->r[2]);
    c->r[2] = 0u + 0x00000002u;
    mem_w32(ram, c->r[30] + 0x00000084u, c->r[2]);
    { mem_w32(ram, c->r[30] + 0x00000088u, 0u); goto L_089f3f0c; }
L_089f3e88:
    c->f[1] = mem_rf32(ram, c->r[30] + 0x0000001cu);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000024u);
    alx_c_cond_s(c, 14, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_089f3ea8; }
    { goto L_089f3ec0; }
L_089f3ea8:
    c->r[2] = 0u + 0x00000001u;
    mem_w32(ram, c->r[30] + 0x00000080u, c->r[2]);
    mem_w32(ram, c->r[30] + 0x00000084u, 0u);
    c->r[2] = 0u + 0x00000002u;
    { mem_w32(ram, c->r[30] + 0x00000088u, c->r[2]); goto L_089f3f0c; }
L_089f3ec0:
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000020u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000024u);
    alx_c_cond_s(c, 14, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_089f3ee0; }
    { goto L_089f3ef8; }
L_089f3ee0:
    c->r[2] = 0u + 0x00000002u;
    mem_w32(ram, c->r[30] + 0x00000080u, c->r[2]);
    mem_w32(ram, c->r[30] + 0x00000084u, 0u);
    c->r[2] = 0u + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000088u, c->r[2]); goto L_089f3f0c; }
L_089f3ef8:
    c->r[2] = 0u + 0x00000002u;
    mem_w32(ram, c->r[30] + 0x00000080u, c->r[2]);
    c->r[2] = 0u + 0x00000001u;
    mem_w32(ram, c->r[30] + 0x00000084u, c->r[2]);
    mem_w32(ram, c->r[30] + 0x00000088u, 0u);
L_089f3f0c:
    c->r[3] = c->r[30] + 0x00000050u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000080u);
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[3] + c->r[2];
    mem_w32(ram, c->r[30] + 0x0000008cu, c->r[2]);
    c->r[3] = c->r[30] + 0x00000050u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000084u);
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[3] + c->r[2];
    mem_w32(ram, c->r[30] + 0x00000090u, c->r[2]);
    c->r[3] = c->r[30] + 0x00000050u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000088u);
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[3] + c->r[2];
    mem_w32(ram, c->r[30] + 0x00000094u, c->r[2]);
    c->r[3] = c->r[30] + 0x00000060u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000080u);
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[3] + c->r[2];
    mem_w32(ram, c->r[30] + 0x00000098u, c->r[2]);
    c->r[3] = c->r[30] + 0x00000060u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000084u);
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[3] + c->r[2];
    mem_w32(ram, c->r[30] + 0x0000009cu, c->r[2]);
    c->r[3] = c->r[30] + 0x00000060u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000088u);
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[3] + c->r[2];
    mem_w32(ram, c->r[30] + 0x000000a0u, c->r[2]);
    c->r[3] = c->r[30] + 0x00000070u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000080u);
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[3] + c->r[2];
    mem_w32(ram, c->r[30] + 0x000000a4u, c->r[2]);
    c->r[3] = c->r[30] + 0x00000070u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000084u);
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[3] + c->r[2];
    mem_w32(ram, c->r[30] + 0x000000a8u, c->r[2]);
    c->r[3] = c->r[30] + 0x00000070u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000088u);
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[3] + c->r[2];
    mem_w32(ram, c->r[30] + 0x000000acu, c->r[2]);
    mem_w8(ram, c->r[30] + 0x000000b0u, 0u);
    mem_w8(ram, c->r[30] + 0x000000b1u, 0u);
    mem_w8(ram, c->r[30] + 0x000000b2u, 0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000098u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000000u);
    c->r[1] = 0x08a50000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffffc5bcu);
    alx_c_cond_s(c, 12, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_089f3ff4; }
    { goto L_089f4014; }
L_089f3ff4:
    c->r[2] = 0u + 0x00000001u;
    mem_w8(ram, c->r[30] + 0x000000b0u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000098u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000098u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000000u);
    c->f[0] = -c->f[0];
    { mem_wf32(ram, c->r[3] + 0x00000000u, c->f[0]); goto L_089f4044; }
L_089f4014:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000098u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000000u);
    c->r[1] = 0x08a50000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffffc5b8u);
    alx_c_cond_s(c, 12, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_089f403c; }
    { goto L_089f4044; }
L_089f403c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000098u);
    mem_w32(ram, c->r[2] + 0x00000000u, 0u);
L_089f4044:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000009cu);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000000u);
    c->r[1] = 0x08a50000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffffc5bcu);
    alx_c_cond_s(c, 12, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_089f406c; }
    { goto L_089f408c; }
L_089f406c:
    c->r[2] = 0u + 0x00000001u;
    mem_w8(ram, c->r[30] + 0x000000b1u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000009cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000009cu);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000000u);
    c->f[0] = -c->f[0];
    { mem_wf32(ram, c->r[3] + 0x00000000u, c->f[0]); goto L_089f40bc; }
L_089f408c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000009cu);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000000u);
    c->r[1] = 0x08a50000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffffc5b8u);
    alx_c_cond_s(c, 12, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_089f40b4; }
    { goto L_089f40bc; }
L_089f40b4:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000009cu);
    mem_w32(ram, c->r[2] + 0x00000000u, 0u);
L_089f40bc:
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000a0u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000000u);
    c->r[1] = 0x08a50000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffffc5bcu);
    alx_c_cond_s(c, 12, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_089f40e4; }
    { goto L_089f4104; }
L_089f40e4:
    c->r[2] = 0u + 0x00000001u;
    mem_w8(ram, c->r[30] + 0x000000b2u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x000000a0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000a0u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000000u);
    c->f[0] = -c->f[0];
    { mem_wf32(ram, c->r[3] + 0x00000000u, c->f[0]); goto L_089f4134; }
L_089f4104:
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000a0u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000000u);
    c->r[1] = 0x08a50000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffffc5b8u);
    alx_c_cond_s(c, 12, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_089f412c; }
    { goto L_089f4134; }
L_089f412c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000a0u);
    mem_w32(ram, c->r[2] + 0x00000000u, 0u);
L_089f4134:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000098u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000000u);
    c->f[0] = u2f(0u);
    alx_c_cond_s(c, 2, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_089f4158; }
    { goto L_089f41bc; }
L_089f4158:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000009cu);
    c->r[3] = mem_r32(ram, c->r[30] + 0x000000a0u);
    c->r[7] = mem_r32(ram, c->r[30] + 0x00000090u);
    c->r[8] = mem_r32(ram, c->r[30] + 0x00000094u);
    c->r[4] = mem_r32(ram, c->r[30] + 0x000000a8u);
    c->r[5] = mem_r32(ram, c->r[30] + 0x000000acu);
    c->r[6] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->f[12] = mem_rf32(ram, c->r[2] + 0x00000000u);
    c->f[13] = mem_rf32(ram, c->r[3] + 0x00000000u);
    c->f[14] = mem_rf32(ram, c->r[7] + 0x00000000u);
    { c->r[31] = 0x089f4188u; c->f[15] = mem_rf32(ram, c->r[8] + 0x00000000u); func_089f2f80(c, ram); }
    mem_wf32(ram, c->r[30] + 0x0000004cu, c->f[0]);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x0000004cu);
    c->r[1] = 0x08a50000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffffc5c4u);
    alx_c_cond_s(c, 2, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) == 0u); if (_c) goto L_089f41b0; }
    { goto L_089f486c; }
L_089f41b0:
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000a4u);
    { mem_w32(ram, c->r[2] + 0x00000000u, 0u); goto L_089f486c; }
L_089f41bc:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000009cu);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000000u);
    c->f[0] = u2f(0u);
    alx_c_cond_s(c, 2, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_089f41e0; }
    { goto L_089f4244; }
L_089f41e0:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000098u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x000000a0u);
    c->r[7] = mem_r32(ram, c->r[30] + 0x0000008cu);
    c->r[8] = mem_r32(ram, c->r[30] + 0x00000094u);
    c->r[4] = mem_r32(ram, c->r[30] + 0x000000a4u);
    c->r[5] = mem_r32(ram, c->r[30] + 0x000000acu);
    c->r[6] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->f[12] = mem_rf32(ram, c->r[2] + 0x00000000u);
    c->f[13] = mem_rf32(ram, c->r[3] + 0x00000000u);
    c->f[14] = mem_rf32(ram, c->r[7] + 0x00000000u);
    { c->r[31] = 0x089f4210u; c->f[15] = mem_rf32(ram, c->r[8] + 0x00000000u); func_089f2f80(c, ram); }
    mem_wf32(ram, c->r[30] + 0x0000004cu, c->f[0]);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x0000004cu);
    c->r[1] = 0x08a50000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffffc5c4u);
    alx_c_cond_s(c, 2, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) == 0u); if (_c) goto L_089f4238; }
    { goto L_089f486c; }
L_089f4238:
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000a8u);
    { mem_w32(ram, c->r[2] + 0x00000000u, 0u); goto L_089f486c; }
L_089f4244:
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000a0u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000000u);
    c->f[0] = u2f(0u);
    alx_c_cond_s(c, 2, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_089f4268; }
    { goto L_089f47f8; }
L_089f4268:
    mem_w32(ram, c->r[30] + 0x00000040u, 0u);
    c->r[2] = c->r[30] + 0x00000048u;
    c->r[3] = c->r[30] + 0x00000044u;
    c->r[6] = c->r[30] + 0x000000bcu;
    c->r[7] = mem_r32(ram, c->r[30] + 0x00000098u);
    c->r[8] = mem_r32(ram, c->r[30] + 0x0000009cu);
    c->r[9] = mem_r32(ram, c->r[30] + 0x0000008cu);
    c->r[10] = mem_r32(ram, c->r[30] + 0x00000090u);
    c->r[4] = c->r[2] + 0u;
    c->r[5] = c->r[3] + 0u;
    c->f[12] = mem_rf32(ram, c->r[7] + 0x00000000u);
    c->f[13] = mem_rf32(ram, c->r[8] + 0x00000000u);
    c->f[14] = mem_rf32(ram, c->r[9] + 0x00000000u);
    { c->r[31] = 0x089f42a4u; c->f[15] = mem_rf32(ram, c->r[10] + 0x00000000u); func_089f2f80(c, ram); }
    mem_wf32(ram, c->r[30] + 0x0000003cu, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000009cu);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000000u);
    c->f[0] = u2f(0u);
    alx_c_cond_s(c, 2, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_089f42cc; }
    { goto L_089f43a4; }
L_089f42cc:
    mem_w32(ram, c->r[30] + 0x00000034u, 0u);
    c->r[2] = c->r[30] + 0x00000038u;
    c->r[3] = c->r[30] + 0x000000b4u;
    c->r[6] = c->r[30] + 0x000000c0u;
    c->r[7] = mem_r32(ram, c->r[30] + 0x00000098u);
    c->r[8] = mem_r32(ram, c->r[30] + 0x000000a0u);
    c->r[9] = mem_r32(ram, c->r[30] + 0x0000008cu);
    c->r[10] = mem_r32(ram, c->r[30] + 0x00000094u);
    c->r[4] = c->r[2] + 0u;
    c->r[5] = c->r[3] + 0u;
    c->f[12] = mem_rf32(ram, c->r[7] + 0x00000000u);
    c->f[13] = mem_rf32(ram, c->r[8] + 0x00000000u);
    c->f[14] = mem_rf32(ram, c->r[9] + 0x00000000u);
    { c->r[31] = 0x089f4308u; c->f[15] = mem_rf32(ram, c->r[10] + 0x00000000u); func_089f2f80(c, ram); }
    mem_wf32(ram, c->r[30] + 0x000000b8u, c->f[0]);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x0000003cu);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x000000b8u);
    alx_c_cond_s(c, 12, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_089f432c; }
    { goto L_089f4368; }
L_089f432c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000a4u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000048u);
    mem_wf32(ram, c->r[2] + 0x00000000u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000a8u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000044u);
    mem_wf32(ram, c->r[2] + 0x00000000u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000acu);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000040u);
    mem_wf32(ram, c->r[2] + 0x00000000u, c->f[0]);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x0000003cu);
    mem_wf32(ram, c->r[30] + 0x0000004cu, c->f[0]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000bcu);
    { mem_w32(ram, c->r[3] + 0x00000000u, c->r[2]); goto L_089f486c; }
L_089f4368:
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000a4u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000038u);
    mem_wf32(ram, c->r[2] + 0x00000000u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000a8u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000034u);
    mem_wf32(ram, c->r[2] + 0x00000000u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000acu);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x000000b4u);
    mem_wf32(ram, c->r[2] + 0x00000000u, c->f[0]);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x000000b8u);
    mem_wf32(ram, c->r[30] + 0x0000004cu, c->f[0]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000c0u);
    { mem_w32(ram, c->r[3] + 0x00000000u, c->r[2]); goto L_089f486c; }
L_089f43a4:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000008cu);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000008cu);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000000u);
    c->f[0] = mem_rf32(ram, c->r[3] + 0x00000000u);
    c->f[0] = c->f[1] * c->f[0];
    mem_wf32(ram, c->r[30] + 0x000000c4u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000090u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000090u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000000u);
    c->f[0] = mem_rf32(ram, c->r[3] + 0x00000000u);
    c->f[0] = c->f[1] * c->f[0];
    mem_wf32(ram, c->r[30] + 0x000000c8u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000094u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000094u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000000u);
    c->f[0] = mem_rf32(ram, c->r[3] + 0x00000000u);
    c->f[0] = c->f[1] * c->f[0];
    mem_wf32(ram, c->r[30] + 0x000000ccu, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000098u);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000048u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000000u);
    c->f[0] = c->f[1] - c->f[0];
    mem_wf32(ram, c->r[30] + 0x000000d0u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000009cu);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000044u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000000u);
    c->f[0] = c->f[1] - c->f[0];
    mem_wf32(ram, c->r[30] + 0x000000d4u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000098u);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x000000c8u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000000u);
    c->f[1] = c->f[1] * c->f[0];
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000098u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000000u);
    c->f[2] = c->f[1] * c->f[0];
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000009cu);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x000000c4u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000000u);
    c->f[1] = c->f[1] * c->f[0];
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000009cu);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000000u);
    c->f[0] = c->f[1] * c->f[0];
    c->f[2] = c->f[2] + c->f[0];
    c->f[1] = mem_rf32(ram, c->r[30] + 0x000000c4u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x000000c8u);
    c->f[0] = c->f[1] * c->f[0];
    c->f[3] = c->f[2] - c->f[0];
    c->f[1] = mem_rf32(ram, c->r[30] + 0x000000c8u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x000000d0u);
    c->f[1] = c->f[1] * c->f[0];
    c->f[0] = mem_rf32(ram, c->r[30] + 0x000000d0u);
    c->f[2] = c->f[1] * c->f[0];
    c->f[1] = mem_rf32(ram, c->r[30] + 0x000000c4u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x000000d4u);
    c->f[1] = c->f[1] * c->f[0];
    c->f[0] = mem_rf32(ram, c->r[30] + 0x000000d4u);
    c->f[0] = c->f[1] * c->f[0];
    c->f[0] = c->f[2] + c->f[0];
    c->f[0] = c->f[3] / c->f[0];
    mem_wf32(ram, c->r[30] + 0x000000d8u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000098u);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000048u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000000u);
    c->f[1] = c->f[1] - c->f[0];
    c->f[0] = mem_rf32(ram, c->r[30] + 0x000000d8u);
    c->f[1] = c->f[1] * c->f[0];
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000098u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000000u);
    c->f[0] = c->f[1] + c->f[0];
    mem_wf32(ram, c->r[30] + 0x000000dcu, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000009cu);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000044u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000000u);
    c->f[1] = c->f[1] - c->f[0];
    c->f[0] = mem_rf32(ram, c->r[30] + 0x000000d8u);
    c->f[1] = c->f[1] * c->f[0];
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000009cu);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000000u);
    c->f[0] = c->f[1] + c->f[0];
    mem_wf32(ram, c->r[30] + 0x000000e0u, c->f[0]);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000048u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x000000dcu);
    c->f[0] = c->f[1] - c->f[0];
    mem_wf32(ram, c->r[30] + 0x000000e4u, c->f[0]);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000044u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x000000e0u);
    c->f[0] = c->f[1] - c->f[0];
    mem_wf32(ram, c->r[30] + 0x000000e8u, c->f[0]);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x000000e4u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x000000e4u);
    c->f[2] = c->f[1] * c->f[0];
    c->f[1] = mem_rf32(ram, c->r[30] + 0x000000e8u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x000000e8u);
    c->f[0] = c->f[1] * c->f[0];
    c->f[0] = c->f[2] + c->f[0];
    { c->r[31] = 0x089f4528u; c->f[12] = c->f[0]; func_08a104b4(c, ram); }
    mem_wf32(ram, c->r[30] + 0x000000ecu, c->f[0]);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x000000dcu);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000048u);
    c->f[1] = c->f[1] + c->f[0];
    c->r[1] = 0x08a50000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffffc5c8u);
    c->f[0] = c->f[1] * c->f[0];
    mem_wf32(ram, c->r[30] + 0x000000f0u, c->f[0]);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x000000e0u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000044u);
    c->f[1] = c->f[1] + c->f[0];
    c->r[1] = 0x08a50000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffffc5c8u);
    c->f[0] = c->f[1] * c->f[0];
    mem_wf32(ram, c->r[30] + 0x000000f4u, c->f[0]);
    mem_w32(ram, c->r[30] + 0x000000f8u, 0u);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x000000ecu);
    c->r[1] = 0x08a50000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffffc5c8u);
    c->f[0] = c->f[1] * c->f[0];
    mem_wf32(ram, c->r[30] + 0x000000fcu, c->f[0]);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x000000c4u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x000000c8u);
    c->f[1] = c->f[1] * c->f[0];
    c->f[0] = mem_rf32(ram, c->r[30] + 0x000000ccu);
    c->f[2] = c->f[1] * c->f[0];
    c->f[1] = mem_rf32(ram, c->r[30] + 0x000000c8u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x000000ccu);
    c->f[1] = c->f[1] * c->f[0];
    c->f[0] = mem_rf32(ram, c->r[30] + 0x000000f0u);
    c->f[1] = c->f[1] * c->f[0];
    c->f[0] = mem_rf32(ram, c->r[30] + 0x000000f0u);
    c->f[0] = c->f[1] * c->f[0];
    c->f[2] = c->f[2] - c->f[0];
    c->f[1] = mem_rf32(ram, c->r[30] + 0x000000ccu);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x000000c4u);
    c->f[1] = c->f[1] * c->f[0];
    c->f[0] = mem_rf32(ram, c->r[30] + 0x000000f4u);
    c->f[1] = c->f[1] * c->f[0];
    c->f[0] = mem_rf32(ram, c->r[30] + 0x000000f4u);
    c->f[0] = c->f[1] * c->f[0];
    c->f[2] = c->f[2] - c->f[0];
    c->f[1] = mem_rf32(ram, c->r[30] + 0x000000c4u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x000000c8u);
    c->f[0] = c->f[1] * c->f[0];
    c->f[0] = c->f[2] / c->f[0];
    { c->r[31] = 0x089f45e8u; c->f[12] = c->f[0]; func_08a104b4(c, ram); }
    mem_wf32(ram, c->r[30] + 0x00000100u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000098u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000000u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x000000f0u);
    c->f[0] = c->f[1] - c->f[0];
    mem_wf32(ram, c->r[30] + 0x00000104u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000009cu);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000000u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x000000f4u);
    c->f[0] = c->f[1] - c->f[0];
    mem_wf32(ram, c->r[30] + 0x00000108u, c->f[0]);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000104u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000104u);
    c->f[2] = c->f[1] * c->f[0];
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000108u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000108u);
    c->f[0] = c->f[1] * c->f[0];
    c->f[0] = c->f[2] + c->f[0];
    { c->r[31] = 0x089f4638u; c->f[12] = c->f[0]; func_08a104b4(c, ram); }
    mem_wf32(ram, c->r[30] + 0x0000010cu, c->f[0]);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x0000010cu);
    mem_wf32(ram, c->r[30] + 0x00000124u, c->f[0]);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000108u);
    c->f[0] = u2f(0u);
    alx_c_cond_s(c, 12, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_089f4668; }
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000124u);
    c->f[0] = -c->f[0];
    mem_wf32(ram, c->r[30] + 0x00000124u, c->f[0]);
L_089f4668:
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000124u);
    mem_wf32(ram, c->r[30] + 0x00000110u, c->f[0]);
    c->r[2] = c->r[30] + 0x00000114u;
    c->r[3] = c->r[30] + 0x00000118u;
    c->r[6] = c->r[30] + 0x000000c0u;
    c->r[4] = c->r[2] + 0u;
    c->r[5] = c->r[3] + 0u;
    c->f[12] = mem_rf32(ram, c->r[30] + 0x00000110u);
    c->f[13] = u2f(0u);
    c->f[14] = mem_rf32(ram, c->r[30] + 0x000000fcu);
    { c->r[31] = 0x089f4698u; c->f[15] = mem_rf32(ram, c->r[30] + 0x00000100u); func_089f2f80(c, ram); }
    mem_wf32(ram, c->r[30] + 0x000000b8u, c->f[0]);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x0000003cu);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x000000b8u);
    alx_c_cond_s(c, 14, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_089f46bc; }
    { goto L_089f46f8; }
L_089f46bc:
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000a4u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000048u);
    mem_wf32(ram, c->r[2] + 0x00000000u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000a8u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000044u);
    mem_wf32(ram, c->r[2] + 0x00000000u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000acu);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000040u);
    mem_wf32(ram, c->r[2] + 0x00000000u, c->f[0]);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x0000003cu);
    mem_wf32(ram, c->r[30] + 0x0000004cu, c->f[0]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000bcu);
    { mem_w32(ram, c->r[3] + 0x00000000u, c->r[2]); goto L_089f486c; }
L_089f46f8:
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000114u);
    mem_wf32(ram, c->r[30] + 0x00000128u, c->f[0]);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000108u);
    c->f[0] = u2f(0u);
    alx_c_cond_s(c, 14, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_089f4724; }
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000128u);
    c->f[0] = -c->f[0];
    mem_wf32(ram, c->r[30] + 0x00000128u, c->f[0]);
L_089f4724:
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000128u);
    mem_wf32(ram, c->r[30] + 0x00000114u, c->f[0]);
    c->r[1] = 0x08a50000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffffc5ccu);
    mem_wf32(ram, c->r[30] + 0x0000011cu, c->f[0]);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x000000e8u);
    c->f[0] = u2f(0u);
    alx_c_cond_s(c, 12, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_089f4758; }
    { goto L_089f4764; }
L_089f4758:
    c->r[1] = 0x08a50000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffffc5d0u);
    mem_wf32(ram, c->r[30] + 0x0000011cu, c->f[0]);
L_089f4764:
    c->f[1] = mem_rf32(ram, c->r[30] + 0x0000011cu);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000114u);
    c->f[1] = c->f[1] * c->f[0];
    c->f[0] = mem_rf32(ram, c->r[30] + 0x000000e4u);
    c->f[1] = c->f[1] * c->f[0];
    c->f[0] = mem_rf32(ram, c->r[30] + 0x000000ecu);
    c->f[1] = c->f[1] / c->f[0];
    c->f[0] = mem_rf32(ram, c->r[30] + 0x000000f0u);
    c->f[0] = c->f[0] + c->f[1];
    mem_wf32(ram, c->r[30] + 0x00000038u, c->f[0]);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x0000011cu);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000114u);
    c->f[1] = c->f[1] * c->f[0];
    c->f[0] = mem_rf32(ram, c->r[30] + 0x000000e8u);
    c->f[1] = c->f[1] * c->f[0];
    c->f[0] = mem_rf32(ram, c->r[30] + 0x000000ecu);
    c->f[1] = c->f[1] / c->f[0];
    c->f[0] = mem_rf32(ram, c->r[30] + 0x000000f4u);
    c->f[0] = c->f[0] + c->f[1];
    mem_wf32(ram, c->r[30] + 0x00000034u, c->f[0]);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000118u);
    mem_wf32(ram, c->r[30] + 0x000000b4u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000a4u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000038u);
    mem_wf32(ram, c->r[2] + 0x00000000u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000a8u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000034u);
    mem_wf32(ram, c->r[2] + 0x00000000u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000acu);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x000000b4u);
    mem_wf32(ram, c->r[2] + 0x00000000u, c->f[0]);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x000000b8u);
    mem_wf32(ram, c->r[30] + 0x0000004cu, c->f[0]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000c0u);
    { mem_w32(ram, c->r[3] + 0x00000000u, c->r[2]); goto L_089f486c; }
L_089f47f8:
    c->r[2] = c->r[30] + 0x000000c0u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000098u);
    c->r[8] = mem_r32(ram, c->r[30] + 0x0000009cu);
    c->r[9] = mem_r32(ram, c->r[30] + 0x000000a0u);
    c->r[10] = mem_r32(ram, c->r[30] + 0x0000008cu);
    c->r[11] = mem_r32(ram, c->r[30] + 0x00000090u);
    c->r[12] = mem_r32(ram, c->r[30] + 0x00000094u);
    c->r[4] = mem_r32(ram, c->r[30] + 0x000000a4u);
    c->r[5] = mem_r32(ram, c->r[30] + 0x000000a8u);
    c->r[6] = mem_r32(ram, c->r[30] + 0x000000acu);
    c->r[7] = c->r[2] + 0u;
    c->f[12] = mem_rf32(ram, c->r[3] + 0x00000000u);
    c->f[13] = mem_rf32(ram, c->r[8] + 0x00000000u);
    c->f[14] = mem_rf32(ram, c->r[9] + 0x00000000u);
    c->f[15] = mem_rf32(ram, c->r[10] + 0x00000000u);
    c->f[16] = mem_rf32(ram, c->r[11] + 0x00000000u);
    { c->r[31] = 0x089f4840u; c->f[17] = mem_rf32(ram, c->r[12] + 0x00000000u); func_089f3578(c, ram); }
    mem_wf32(ram, c->r[30] + 0x0000004cu, c->f[0]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0u + 0x00000001u;
    mem_w32(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000c0u);
    { int _c = ((s32)c->r[2] >= 0); if (_c) goto L_089f486c; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0x80000000u;
    c->r[2] = c->r[2] | 0x0001u;
    mem_w32(ram, c->r[3] + 0x00000000u, c->r[2]);
L_089f486c:
    c->r[3] = mem_r8(ram, c->r[30] + 0x000000b0u);
    c->r[2] = 0u + 0x00000001u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_089f4890; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x000000a4u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000a4u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000000u);
    c->f[0] = -c->f[0];
    mem_wf32(ram, c->r[3] + 0x00000000u, c->f[0]);
L_089f4890:
    c->r[3] = mem_r8(ram, c->r[30] + 0x000000b1u);
    c->r[2] = 0u + 0x00000001u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_089f48b4; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x000000a8u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000a8u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000000u);
    c->f[0] = -c->f[0];
    mem_wf32(ram, c->r[3] + 0x00000000u, c->f[0]);
L_089f48b4:
    c->r[3] = mem_r8(ram, c->r[30] + 0x000000b2u);
    c->r[2] = 0u + 0x00000001u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_089f48d8; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x000000acu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000acu);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000000u);
    c->f[0] = -c->f[0];
    mem_wf32(ram, c->r[3] + 0x00000000u, c->f[0]);
L_089f48d8:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000070u);
    mem_wf32(ram, c->r[2] + 0x00000000u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000074u);
    mem_wf32(ram, c->r[2] + 0x00000000u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000078u);
    mem_wf32(ram, c->r[2] + 0x00000000u, c->f[0]);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x0000004cu);
    mem_wf32(ram, c->r[30] + 0x00000120u, c->f[0]);
L_089f4904:
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000120u);
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000134u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000130u);
    { c->r[29] = c->r[29] + 0x00000140u; return; }
    return; /* fell out of func_089f3b08 */
}

/* func_089f5c8c  0x089f5c8c..0x089f5dcc  320 bytes, source=fde */
void func_089f5c8c(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089f5c8cu);
    c->r[29] = c->r[29] + 0xffffff70u;
    mem_w32(ram, c->r[29] + 0x00000084u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000080u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[6]);
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[7]);
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[8]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[4] = c->r[2] + 0x00000010u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[3] + 0x00000000u);
    mem_w32(ram, c->r[4] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[3] + 0x00000004u);
    mem_w32(ram, c->r[4] + 0x00000004u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[3] + 0x00000008u);
    mem_w32(ram, c->r[4] + 0x00000008u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[3] + 0x0000000cu);
    mem_w32(ram, c->r[4] + 0x0000000cu, c->r[2]);
    c->r[2] = c->r[30] + 0x00000020u;
    { c->r[31] = 0x089f5ce8u; c->r[4] = c->r[2] + 0u; func_08808240(c, ram); }
    c->r[2] = c->r[30] + 0x00000020u;
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x089f5cf8u; c->r[5] = mem_r32(ram, c->r[30] + 0x0000000cu); func_0884c1d8(c, ram); }
    c->r[2] = c->r[30] + 0x00000030u;
    { c->r[31] = 0x089f5d04u; c->r[4] = c->r[2] + 0u; func_08808240(c, ram); }
    c->r[2] = c->r[30] + 0x00000030u;
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x089f5d14u; c->r[5] = mem_r32(ram, c->r[30] + 0x00000010u); func_0884c1d8(c, ram); }
    c->r[2] = c->r[30] + 0x00000040u;
    c->r[1] = 0x08a50000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffffd0c0u);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = c->r[2] + 0u;
    c->r[6] = mem_r32(ram, c->r[30] + 0x00000004u);
    { c->r[31] = 0x089f5d34u; c->f[12] = c->f[0]; func_089f847c(c, ram); }
    c->r[2] = c->r[30] + 0x00000050u;
    c->r[1] = 0x08a50000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffffd0c0u);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = c->r[2] + 0u;
    c->r[6] = mem_r32(ram, c->r[30] + 0x00000008u);
    { c->r[31] = 0x089f5d54u; c->f[12] = c->f[0]; func_089f847c(c, ram); }
    c->r[2] = c->r[30] + 0x00000060u;
    c->r[3] = c->r[30] + 0x00000020u;
    c->r[1] = 0x08a50000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffffd0c4u);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = c->r[2] + 0u;
    c->r[6] = c->r[3] + 0u;
    { c->r[31] = 0x089f5d78u; c->f[12] = c->f[0]; func_089f847c(c, ram); }
    c->r[2] = c->r[30] + 0x00000070u;
    c->r[3] = c->r[30] + 0x00000030u;
    c->r[1] = 0x08a50000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffffd0c4u);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = c->r[2] + 0u;
    c->r[6] = c->r[3] + 0u;
    { c->r[31] = 0x089f5d9cu; c->f[12] = c->f[0]; func_089f847c(c, ram); }
    c->r[2] = c->r[30] + 0x00000040u;
    c->r[3] = c->r[30] + 0x00000050u;
    c->r[6] = c->r[30] + 0x00000060u;
    c->r[7] = c->r[30] + 0x00000070u;
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x089f5db8u; c->r[5] = c->r[3] + 0u; func_08a0230c(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000084u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000080u);
    { c->r[29] = c->r[29] + 0x00000090u; return; }
    return; /* fell out of func_089f5c8c */
}

/* func_089f85f8  0x089f85f8..0x089f8920  808 bytes, source=fde */
void func_089f85f8(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089f85f8u);
    c->r[29] = c->r[29] + 0xffffffb0u;
    mem_w32(ram, c->r[29] + 0x00000044u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000040u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x089f8618u; c->r[5] = 0u + 0u; func_089f8b84(c, ram); }
    mem_w8(ram, c->r[30] + 0x00000004u, c->r[2]);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[30] + 0x00000004u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_089f8670; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x0000000cu);
    c->r[2] = 0u + 0x00000001u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_089f87e8; }
    c->r[2] = 0x08b90000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00006584u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_089f87e8; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x0000001au;
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = 0u + 0u;
    { c->r[31] = 0x089f8664u; c->r[6] = c->r[2] + 0u; func_089f8998(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    { mem_w32(ram, c->r[2] + 0x0000000cu, 0u); goto L_089f87e8; }
L_089f8670:
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[30] + 0x00000004u);
    c->r[2] = 0u + 0x00000004u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_089f86cc; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000018u);
    { int _c = ((s32)c->r[2] <= 0); if (_c) goto L_089f87e8; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000018u);
    c->r[2] = c->r[2] + 0xffffffffu;
    mem_w8(ram, c->r[3] + 0x00000018u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000018u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_089f87e8; }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = 0u + 0u;
    { c->r[31] = 0x089f86c4u; c->r[6] = 0u + 0u; func_089f8c6c(c, ram); }
    { goto L_089f87e8; }
L_089f86cc:
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[30] + 0x00000004u);
    c->r[2] = 0u + 0x00000002u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_089f8700; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000019u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_089f87e8; }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x089f86f8u; c->r[5] = 0u + 0u; func_089f8a40(c, ram); }
    { goto L_089f87e8; }
L_089f8700:
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[30] + 0x00000004u);
    c->r[2] = 0u + 0x00000003u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_089f87e8; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000018u);
    { int _c = ((s32)c->r[2] <= 0); if (_c) goto L_089f8758; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000018u);
    c->r[2] = c->r[2] + 0xffffffffu;
    mem_w8(ram, c->r[3] + 0x00000018u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000018u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_089f8758; }
    c->r[1] = 0x08a50000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffffd11cu);
    c->r[4] = 0u + 0u;
    { c->r[31] = 0x089f8758u; c->f[12] = c->f[0]; func_089fb0b0(c, ram); }
L_089f8758:
    c->r[2] = 0x08b90000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00006584u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_089f87d0; }
    c->r[2] = c->r[30] + 0x00000010u;
    c->r[4] = 0u + 0u;
    { c->r[31] = 0x089f8778u; c->r[5] = c->r[2] + 0u; func_089fe814(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x00000014u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000030u);
    c->r[2] = ((s32)c->r[2] < (s32)c->r[3]) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_089f87c0; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000030u);
    { int _c = ((s32)c->r[2] > 0); if (_c) goto L_089f87b8; }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x089f87a8u; c->r[5] = 0u + 0u; func_089f8a7c(c, ram); }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = 0u + 0x00000001u;
    { mem_w32(ram, c->r[3] + 0x0000000cu, c->r[2]); goto L_089f87c0; }
L_089f87b8:
    { c->r[31] = 0x089f87c0u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u); func_089f8bf8(c, ram); }
L_089f87c0:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000030u);
    { mem_w32(ram, c->r[3] + 0x00000014u, c->r[2]); goto L_089f87e8; }
L_089f87d0:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x089f87dcu; c->r[5] = 0u + 0u; func_089f8a7c(c, ram); }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = 0u + 0x00000001u;
    mem_w32(ram, c->r[3] + 0x0000000cu, c->r[2]);
L_089f87e8:
    { c->r[31] = 0x089f87f0u; c->r[4] = 0u + 0u; func_08a01700(c, ram); }
    { int _c = (c->r[2] != 0u); if (_c) goto L_089f8844; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x0000000cu);
    c->r[2] = 0u + 0x00000002u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_089f890c; }
    c->r[2] = 0x08b90000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00006584u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_089f890c; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = 0u + 0u;
    c->r[6] = mem_r32(ram, c->r[2] + 0x00000010u);
    { c->r[31] = 0x089f8838u; c->r[7] = mem_r32(ram, c->r[3] + 0x00000014u); func_089f8cbc(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    { mem_w32(ram, c->r[2] + 0x0000000cu, 0u); goto L_089f890c; }
L_089f8844:
    c->r[2] = 0x08b90000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00006584u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_089f88f4; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000000u);
    c->f[0] = u2f(0u);
    alx_c_cond_s(c, 12, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_089f8878; }
    { goto L_089f890c; }
L_089f8878:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000004u);
    c->f[0] = mem_rf32(ram, c->r[3] + 0x00000000u);
    c->f[0] = c->f[1] - c->f[0];
    mem_wf32(ram, c->r[4] + 0x00000004u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000004u);
    c->r[1] = 0x08a50000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffffd120u);
    alx_c_cond_s(c, 12, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_089f88bc; }
    { goto L_089f88d4; }
L_089f88bc:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[4] = 0u + 0u;
    { c->r[31] = 0x089f88ccu; c->f[12] = mem_rf32(ram, c->r[2] + 0x00000004u); func_08a0167c(c, ram); }
    { goto L_089f890c; }
L_089f88d4:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    mem_w32(ram, c->r[2] + 0x00000000u, 0u);
    { c->r[31] = 0x089f88e4u; c->r[4] = 0u + 0u; func_08a01320(c, ram); }
    { c->r[31] = 0x089f88ecu; c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u); func_089f8bf8(c, ram); }
    { goto L_089f890c; }
L_089f88f4:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x089f8900u; c->r[5] = 0u + 0u; func_089f8ea0(c, ram); }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = 0u + 0x00000002u;
    mem_w32(ram, c->r[3] + 0x0000000cu, c->r[2]);
L_089f890c:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000044u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000040u);
    { c->r[29] = c->r[29] + 0x00000050u; return; }
    return; /* fell out of func_089f85f8 */
}

/* func_089f94ec  0x089f94ec..0x089f9590  164 bytes, source=residue */
void func_089f94ec(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089f94ecu);
    c->r[29] = c->r[29] + 0xffffffe0u;
    c->r[4] = c->r[4] & 0xffffu;
    mem_w32(ram, c->r[29] + 0x0000000cu, c->r[19]);
    c->r[19] = c->r[7] + 0u;
    mem_w32(ram, c->r[29] + 0x00000008u, c->r[18]);
    c->r[18] = alx_seb(c->r[6]);
    mem_w32(ram, c->r[29] + 0x00000004u, c->r[17]);
    mem_w32(ram, c->r[29] + 0x00000000u, c->r[16]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[31]);
    { c->r[31] = 0x089f9518u; c->r[17] = c->r[5] & 0xffffu; func_089fad14(c, ram); }
    c->r[16] = c->r[2] + 0u;
    c->r[4] = c->r[2] + 0u;
    { int _c = ((s32)c->r[2] < 0); c->r[3] = c->r[2] + 0u; if (_c) goto L_089f9570; }
    { c->r[31] = 0x089f9530u; func_089facf0(c, ram); }
    c->r[2] = (c->r[17] < c->r[2]) ? 1u : 0u;
    c->r[3] = 0x80000000u;
    c->r[5] = c->r[17] + 0u;
    c->r[4] = c->r[16] & 0xffffu;
    c->r[8] = c->r[19] + 0u;
    c->r[10] = c->r[18] + 0u;
    c->r[6] = 0u + 0u;
    c->r[7] = 0u + 0u;
    c->r[9] = 0u + 0u;
    { int _c = (c->r[2] == 0u); c->r[3] = c->r[3] | 0x0011u; if (_c) goto L_089f9570; }
    c->r[2] = 0x08a50000u;
    c->f[12] = mem_rf32(ram, c->r[2] + 0xffffd144u);
    { c->r[31] = 0x089f956cu; c->f[13] = c->f[12]; func_089fd034(c, ram); }
    c->r[3] = c->r[2] + 0u;
L_089f9570:
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000010u);
    c->r[19] = mem_r32(ram, c->r[29] + 0x0000000cu);
    c->r[18] = mem_r32(ram, c->r[29] + 0x00000008u);
    c->r[17] = mem_r32(ram, c->r[29] + 0x00000004u);
    c->r[16] = mem_r32(ram, c->r[29] + 0x00000000u);
    c->r[2] = c->r[3] + 0u;
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_089f94ec */
}

/* func_089fa224  0x089fa224..0x089fa2dc  184 bytes, source=fde */
void func_089fa224(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089fa224u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[21]);
    c->r[21] = 0u + 0x00000001u;
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[20]);
    c->r[20] = 0u + 0x00000002u;
    mem_w32(ram, c->r[29] + 0x0000000cu, c->r[19]);
    c->r[19] = 0u + 0u;
    mem_w32(ram, c->r[29] + 0x00000008u, c->r[18]);
    c->r[18] = 0u + 0u;
    mem_w32(ram, c->r[29] + 0x00000004u, c->r[17]);
    c->r[17] = c->r[4] + 0u;
    mem_w32(ram, c->r[29] + 0x00000000u, c->r[16]);
    mem_w32(ram, c->r[29] + 0x00000018u, c->r[31]);
    c->r[3] = mem_r32(ram, c->r[4] + 0x00000be8u);
    { int _c = (c->r[3] == 0u); c->r[16] = c->r[4] + 0u; if (_c) goto L_089fa29c; }
L_089fa264:
    c->r[2] = c->r[3] & 0x0001u;
    { int _c = (c->r[2] == 0u); c->r[2] = c->r[3] >> 1; if (_c) goto L_089fa288; }
    c->r[2] = mem_r8(ram, c->r[16] + 0x00000000u);
    { int _c = (c->r[2] == c->r[20]); c->r[4] = c->r[18] + 0u; if (_c) goto L_089fa2cc; }
    { int _c = (c->r[2] == c->r[21]); c->r[4] = c->r[2] << (c->r[18] & 31u); if (_c) goto L_089fa2c4; }
L_089fa284:
    c->r[2] = c->r[3] >> 1;
L_089fa288:
    c->r[18] = c->r[18] + 0x00000001u;
    c->r[16] = c->r[16] + 0x0000004cu;
    c->r[3] = c->r[2] + 0u;
    { int _c = (c->r[2] != 0u); mem_w32(ram, c->r[17] + 0x00000be8u, c->r[2]); if (_c) goto L_089fa264; }
L_089fa29c:
    mem_w32(ram, c->r[17] + 0x00000be8u, c->r[19]);
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000018u);
    c->r[21] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[20] = mem_r32(ram, c->r[29] + 0x00000010u);
    c->r[19] = mem_r32(ram, c->r[29] + 0x0000000cu);
    c->r[18] = mem_r32(ram, c->r[29] + 0x00000008u);
    c->r[17] = mem_r32(ram, c->r[29] + 0x00000004u);
    c->r[16] = mem_r32(ram, c->r[29] + 0x00000000u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
L_089fa2c4:
    { c->r[19] = c->r[19] | c->r[4]; goto L_089fa284; }
L_089fa2cc:
    { c->r[31] = 0x089fa2d4u; func_08a05b10(c, ram); }
    { c->r[3] = mem_r32(ram, c->r[17] + 0x00000be8u); goto L_089fa284; }
    return; /* fell out of func_089fa224 */
}

/* func_089fab7c  0x089fab7c..0x089fab98  28 bytes, source=sweep */
void func_089fab7c(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089fab7cu);
    c->r[5] = c->r[5] & 0xffffu;
    c->r[5] = c->r[5] << 2;
    c->r[5] = c->r[5] + c->r[4];
    c->r[2] = 0u | 0xc70cu;
    c->r[5] = c->r[5] + c->r[2];
    { c->r[2] = mem_r32(ram, c->r[5] + 0x00000000u); return; }
    return; /* fell out of func_089fab7c */
}

/* func_089fb40c  0x089fb40c..0x089fb418  12 bytes, source=sweep */
void func_089fb40c(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089fb40cu);
    c->r[2] = 0x08b90000u;
    { c->r[2] = c->r[2] + 0x00006c94u; return; }
    return; /* fell out of func_089fb40c */
}

/* func_089fc0b8  0x089fc0b8..0x089fc0d4  28 bytes, source=residue */
void func_089fc0b8(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089fc0b8u);
    c->r[29] = c->r[29] + 0xfffffff0u;
    mem_w32(ram, c->r[29] + 0x00000000u, c->r[31]);
    { c->r[31] = 0x089fc0c8u; func_089fc45c(c, ram); }
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000000u);
    { c->r[29] = c->r[29] + 0x00000010u; return; }
    return; /* fell out of func_089fc0b8 */
}

/* func_089fd704  0x089fd704..0x089fd7d4  208 bytes, source=sweep */
void func_089fd704(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089fd704u);
    c->r[29] = c->r[29] + 0xfffffff0u;
    mem_w32(ram, c->r[29] + 0x00000000u, c->r[16]);
    c->r[16] = c->r[4] & 0xffffu;
    c->r[4] = c->r[16] + 0u;
    mem_w32(ram, c->r[29] + 0x00000008u, c->r[18]);
    c->r[18] = c->r[6] + 0u;
    mem_w32(ram, c->r[29] + 0x00000004u, c->r[17]);
    mem_w32(ram, c->r[29] + 0x0000000cu, c->r[31]);
    { c->r[31] = 0x089fd72cu; c->r[17] = c->r[5] & 0xffffu; func_089facc8(c, ram); }
    c->r[3] = 0x80000000u;
    c->r[3] = c->r[3] | 0x0010u;
    c->r[4] = c->r[16] + 0u;
    { int _c = (c->r[2] == c->r[3]); c->r[6] = c->r[3] + 0u; if (_c) goto L_089fd7b8; }
    { c->r[31] = 0x089fd748u; func_089facf0(c, ram); }
    c->r[2] = (c->r[17] < c->r[2]) ? 1u : 0u;
    c->r[6] = 0x80000000u;
    c->r[5] = c->r[17] + 0u;
    c->r[4] = c->r[16] + 0u;
    { int _c = (c->r[2] == 0u); c->r[6] = c->r[6] | 0x0011u; if (_c) goto L_089fd7b8; }
    { c->r[31] = 0x089fd768u; func_089fad3c(c, ram); }
    c->r[3] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x00000008u);
    c->r[2] = 0u + 0xffffffffu;
    c->r[5] = c->r[17] + 0u;
    { int _c = (c->r[3] == c->r[2]); c->r[4] = c->r[16] + 0u; if (_c) goto L_089fd788; }
    { c->r[31] = 0x089fd784u; func_089fad3c(c, ram); }
    c->r[3] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x00000008u);
L_089fd788:
    mem_w32(ram, c->r[18] + 0x00000000u, c->r[3]);
    c->r[4] = c->r[16] + 0u;
    { c->r[31] = 0x089fd798u; c->r[5] = c->r[17] + 0u; func_089fad3c(c, ram); }
    c->r[3] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x0000000cu);
    c->r[4] = c->r[16] + 0u;
    c->r[5] = c->r[17] + 0u;
    { c->r[31] = 0x089fd7acu; mem_w32(ram, c->r[18] + 0x00000004u, c->r[3]); func_089fad3c(c, ram); }
    c->r[3] = mem_r32(ram, c->r[2] + 0x00000014u);
    c->r[6] = 0u + 0u;
    mem_w32(ram, c->r[18] + 0x00000008u, c->r[3]);
L_089fd7b8:
    c->r[31] = mem_r32(ram, c->r[29] + 0x0000000cu);
    c->r[18] = mem_r32(ram, c->r[29] + 0x00000008u);
    c->r[17] = mem_r32(ram, c->r[29] + 0x00000004u);
    c->r[16] = mem_r32(ram, c->r[29] + 0x00000000u);
    c->r[2] = c->r[6] + 0u;
    { c->r[29] = c->r[29] + 0x00000010u; return; }
    return; /* fell out of func_089fd704 */
}

/* func_089fe4f0  0x089fe4f0..0x089fe578  136 bytes, source=sweep */
void func_089fe4f0(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089fe4f0u);
    c->r[6] = c->r[4] << 3;
    c->r[2] = 0x08ba0000u;
    c->r[6] = c->r[6] - c->r[4];
    c->r[29] = c->r[29] + 0xfffffff0u;
    c->r[9] = c->r[2] + 0x0000008cu;
    c->r[6] = c->r[6] << 5;
    mem_w32(ram, c->r[29] + 0x00000000u, c->r[31]);
    { int _c = (c->r[5] == 0u); c->r[6] = c->r[6] + c->r[9]; if (_c) goto L_089fe54c; }
    c->r[2] = mem_r16(ram, c->r[6] + 0x00000010u);
    c->r[2] = c->r[2] + 0xffffffffu;
    c->r[2] = c->r[2] & 0xffffu;
    c->r[2] = (c->r[2] < 0x00000003u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); c->r[2] = 0u + 0x00000004u; if (_c) goto L_089fe53c; }
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000000u);
L_089fe530:
    c->r[2] = 0u + 0u;
    { c->r[29] = c->r[29] + 0x00000010u; return; }
L_089fe53c:
    { c->r[31] = 0x089fe544u; mem_w16(ram, c->r[6] + 0x00000010u, c->r[2]); func_089ff72c(c, ram); }
    { c->r[31] = mem_r32(ram, c->r[29] + 0x00000000u); goto L_089fe530; }
L_089fe54c:
    c->r[3] = mem_r16(ram, c->r[6] + 0x00000010u);
    c->r[2] = 0u + 0x00000004u;
    { int _c = (c->r[3] != c->r[2]); c->r[31] = mem_r32(ram, c->r[29] + 0x00000000u); if (_c) goto L_089fe530; }
    c->r[2] = mem_r32(ram, c->r[9] + 0x00000064u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000007u) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); c->r[2] = 0u + 0x00000003u; if (_c) goto L_089fe53c; }
    c->r[2] = 0u + 0x00000001u;
    { mem_w16(ram, c->r[6] + 0x00000010u, c->r[2]); goto L_089fe530; }
    return; /* fell out of func_089fe4f0 */
}

/* func_089ff2c8  0x089ff2c8..0x089ff3bc  244 bytes, source=sweep */
void func_089ff2c8(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089ff2c8u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x0000000cu, c->r[19]);
    c->r[19] = 0x08ba0000u;
    c->r[4] = c->r[5] + 0u;
    mem_w32(ram, c->r[29] + 0x00000000u, c->r[16]);
    c->r[16] = c->r[19] + 0x0000008cu;
    c->r[5] = 0x80000000u;
    c->r[2] = mem_r32(ram, c->r[16] + 0x00000064u);
    mem_w32(ram, c->r[29] + 0x00000008u, c->r[18]);
    c->r[18] = c->r[7] + 0u;
    mem_w32(ram, c->r[29] + 0x00000004u, c->r[17]);
    c->r[17] = c->r[6] + 0u;
    { int _c = (c->r[2] != 0u); mem_w32(ram, c->r[29] + 0x00000010u, c->r[31]); if (_c) goto L_089ff380; }
    c->r[3] = mem_r32(ram, c->r[16] + 0x00000068u);
    c->r[2] = 0u + 0xffffffffu;
    c->r[5] = 0u + 0x00000001u;
    { int _c = (c->r[3] == c->r[2]); c->r[6] = 0u + 0u; if (_c) goto L_089ff3a0; }
    c->r[2] = 0u + 0x00000002u;
L_089ff318:
    c->r[4] = 0x08a50000u;
    c->r[3] = 0u + 0x00000001u;
    mem_w32(ram, c->r[16] + 0x00000064u, c->r[2]);
    c->r[2] = c->r[19] + 0x0000008cu;
    c->r[5] = 0u + 0u;
    c->f[0] = mem_rf32(ram, c->r[4] + 0xffffd2acu);
    mem_w16(ram, c->r[2] + 0x00000010u, c->r[3]);
    c->r[3] = 0u + 0xffffffffu;
    mem_w32(ram, c->r[2] + 0x000000a4u, c->r[3]);
    c->r[3] = 0u + 0x00000001u;
    mem_w32(ram, c->r[2] + 0x00000070u, c->r[17]);
    mem_w32(ram, c->r[2] + 0x00000074u, c->r[18]);
    mem_wf32(ram, c->r[2] + 0x000000bcu, c->f[0]);
    mem_w32(ram, c->r[2] + 0x000000ccu, c->r[3]);
    mem_w32(ram, c->r[2] + 0x000000d0u, 0u);
    mem_w32(ram, c->r[2] + 0x00000054u, 0u);
    mem_w32(ram, c->r[2] + 0x00000060u, 0u);
    mem_w32(ram, c->r[2] + 0x00000058u, 0u);
    mem_w32(ram, c->r[2] + 0x0000005cu, 0u);
    mem_w32(ram, c->r[2] + 0x00000078u, 0u);
    mem_w32(ram, c->r[2] + 0x00000080u, 0u);
    mem_w32(ram, c->r[2] + 0x00000084u, 0u);
    mem_w32(ram, c->r[2] + 0x00000020u, 0u);
    mem_w32(ram, c->r[2] + 0x00000088u, 0u);
    mem_w32(ram, c->r[2] + 0x0000008cu, 0u);
    mem_w32(ram, c->r[2] + 0x000000c8u, 0u);
L_089ff380:
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000010u);
    c->r[19] = mem_r32(ram, c->r[29] + 0x0000000cu);
    c->r[18] = mem_r32(ram, c->r[29] + 0x00000008u);
    c->r[17] = mem_r32(ram, c->r[29] + 0x00000004u);
    c->r[16] = mem_r32(ram, c->r[29] + 0x00000000u);
    c->r[2] = c->r[5] + 0u;
    { c->r[29] = c->r[29] + 0x00000020u; return; }
L_089ff3a0:
    { c->r[31] = 0x089ff3a8u; func_08a02f98(c, ram); }
    mem_w32(ram, c->r[16] + 0x00000068u, c->r[2]);
    { int _c = ((s32)c->r[2] < 0); c->r[5] = 0x80000000u; if (_c) goto L_089ff380; }
    { c->r[2] = 0u + 0x00000001u; goto L_089ff318; }
    return; /* fell out of func_089ff2c8 */
}

/* func_08a01d34  0x08a01d34..0x08a01e58  292 bytes, source=fde */
void func_08a01d34(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08a01d34u);
    c->r[29] = c->r[29] + 0xffffffd0u;
    c->r[4] = c->r[4] & 0xffffu;
    mem_w32(ram, c->r[29] + 0x00000018u, c->r[22]);
    c->r[22] = c->r[9] + 0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[21]);
    c->r[21] = c->r[8] + 0u;
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[20]);
    c->r[20] = c->r[7] + 0u;
    mem_w32(ram, c->r[29] + 0x0000000cu, c->r[19]);
    c->r[19] = c->r[10] + 0u;
    mem_w32(ram, c->r[29] + 0x00000008u, c->r[18]);
    c->r[18] = alx_seb(c->r[6]);
    mem_w32(ram, c->r[29] + 0x00000004u, c->r[17]);
    c->r[17] = c->r[5] & 0xffffu;
    mem_w32(ram, c->r[29] + 0x00000000u, c->r[16]);
    mem_w32(ram, c->r[29] + 0x00000020u, c->r[31]);
    { c->r[31] = 0x08a01d7cu; mem_w32(ram, c->r[29] + 0x0000001cu, c->r[23]); func_089fad14(c, ram); }
    c->r[16] = c->r[2] & 0xffffu;
    c->r[4] = c->r[16] + 0u;
    { int _c = ((s32)c->r[2] < 0); c->r[3] = c->r[2] + 0u; if (_c) goto L_08a01da8; }
    { c->r[31] = 0x08a01d94u; c->r[23] = 0x08ba0000u; func_089fad6c(c, ram); }
    c->r[5] = c->r[20] + 0u;
    c->r[7] = c->r[17] + 0u;
    c->r[6] = c->r[16] + 0u;
    { int _c = (c->r[2] != 0u); c->r[3] = 0x80000000u; if (_c) goto L_08a01dd8; }
L_08a01da8:
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000020u);
    c->r[23] = mem_r32(ram, c->r[29] + 0x0000001cu);
    c->r[22] = mem_r32(ram, c->r[29] + 0x00000018u);
    c->r[21] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[20] = mem_r32(ram, c->r[29] + 0x00000010u);
    c->r[19] = mem_r32(ram, c->r[29] + 0x0000000cu);
    c->r[18] = mem_r32(ram, c->r[29] + 0x00000008u);
    c->r[17] = mem_r32(ram, c->r[29] + 0x00000004u);
    c->r[16] = mem_r32(ram, c->r[29] + 0x00000000u);
    c->r[2] = c->r[3] + 0u;
    { c->r[29] = c->r[29] + 0x00000030u; return; }
L_08a01dd8:
    { c->r[31] = 0x08a01de0u; c->r[4] = mem_r32(ram, c->r[23] + 0xffff9af0u); func_08a02b84(c, ram); }
    c->r[2] = 0x08a50000u;
    c->f[1] = mem_rf32(ram, c->r[2] + 0xffffd340u);
    c->r[3] = 0x80000000u;
    c->r[10] = c->r[18] + 0u;
    alx_c_cond_s(c, 12, c->f[0], c->f[1]);
    c->f[13] = c->f[0];
    c->r[9] = 0u + 0u;
    c->r[4] = c->r[16] + 0u;
    c->r[5] = c->r[17] + 0u;
    c->r[6] = 0u + 0u;
    c->r[7] = 0u + 0u;
    c->r[8] = c->r[19] + 0u;
    { int _c = ((c->fcr31 & FCR31_C) != 0u); c->r[3] = c->r[3] | 0x001bu; if (_c) goto L_08a01da8; }
    c->r[2] = 0x08a50000u;
    { c->r[31] = 0x08a01e24u; c->f[12] = mem_rf32(ram, c->r[2] + 0xffffd344u); func_089fd034(c, ram); }
    c->r[4] = mem_r32(ram, c->r[23] + 0xffff9af0u);
    c->r[6] = c->r[20] + 0u;
    c->r[7] = c->r[21] + 0u;
    c->r[8] = c->r[22] + 0u;
    { c->r[31] = 0x08a01e3cu; c->r[5] = c->r[19] + 0u; func_08a02a28(c, ram); }
    c->r[4] = mem_r32(ram, c->r[23] + 0xffff9af0u);
    c->r[5] = mem_r32(ram, c->r[19] + 0x00000000u);
    c->r[6] = c->r[16] + 0u;
    { c->r[31] = 0x08a01e50u; c->r[7] = c->r[17] + 0u; func_08a029ec(c, ram); }
    { c->r[3] = 0u + 0u; goto L_08a01da8; }
    return; /* fell out of func_08a01d34 */
}

/* func_08a02ff0  0x08a02ff0..0x08a03024  52 bytes, source=fde */
void func_08a02ff0(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08a02ff0u);
    c->r[3] = c->r[5] + 0u;
    c->r[2] = c->r[4] + 0u;
    c->r[4] = 0x08ba0000u;
    c->r[29] = c->r[29] + 0xfffffff0u;
    c->r[7] = c->r[6] + 0u;
    c->r[4] = c->r[4] + 0xffff9af8u;
    c->r[5] = c->r[2] + 0u;
    mem_w32(ram, c->r[29] + 0x00000000u, c->r[31]);
    { c->r[31] = 0x08a03018u; c->r[6] = c->r[3] + 0u; func_08a02e14(c, ram); }
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000000u);
    { c->r[29] = c->r[29] + 0x00000010u; return; }
    return; /* fell out of func_08a02ff0 */
}

/* func_08a03b20  0x08a03b20..0x08a03ba4  132 bytes, source=sweep */
void func_08a03b20(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08a03b20u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_wf32(ram, c->r[29] + 0x00000010u, c->f[20]);
    c->r[2] = 0x08a50000u;
    c->f[0] = (f32)fabsf(c->f[12]);
    mem_w32(ram, c->r[29] + 0x00000000u, c->r[31]);
    c->f[20] = c->f[12];
    c->f[1] = mem_rf32(ram, c->r[2] + 0xffffd3b4u);
    alx_c_cond_s(c, 14, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) == 0u); c->f[12] = c->f[0]; if (_c) goto L_08a03b80; }
    { c->r[31] = 0x08a03b54u; func_08a03a98(c, ram); }
L_08a03b54:
    c->f[1] = c->f[0];
    c->f[0] = u2f(0u);
    alx_c_cond_s(c, 12, c->f[20], c->f[0]);
    if ((c->fcr31 & FCR31_C) != 0u) { c->f[1] = -c->f[1]; goto L_08a03b6c; }
L_08a03b6c:
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000000u);
    c->f[20] = mem_rf32(ram, c->r[29] + 0x00000010u);
    c->f[0] = c->f[1];
    { c->r[29] = c->r[29] + 0x00000020u; return; }
L_08a03b80:
    { c->r[31] = 0x08a03b88u; c->f[12] = c->f[1] / c->f[0]; func_08a03a98(c, ram); }
    c->r[2] = 0x08a50000u;
    c->f[1] = mem_rf32(ram, c->r[2] + 0xffffd3b8u);
    c->r[2] = 0x08a50000u;
    c->f[1] = c->f[1] - c->f[0];
    c->f[0] = mem_rf32(ram, c->r[2] + 0xffffd3bcu);
    { c->f[0] = c->f[1] + c->f[0]; goto L_08a03b54; }
    return; /* fell out of func_08a03b20 */
}

/* func_08a05918  0x08a05918..0x08a05970  88 bytes, source=sweep */
void func_08a05918(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08a05918u);
    c->r[6] = 0x08ba0000u;
    c->r[5] = mem_r32(ram, c->r[6] + 0xffffaf80u);
    c->r[29] = c->r[29] + 0xfffffff0u;
    c->r[3] = 0x80420000u;
    mem_w32(ram, c->r[29] + 0x00000000u, c->r[31]);
    { int _c = (c->r[5] == 0u); c->r[2] = c->r[3] | 0x0100u; if (_c) goto L_08a05964; }
    c->r[5] = 0x80420000u;
    c->r[3] = c->r[4] & 0x003fu;
    { int _c = (c->r[4] == 0u); c->r[2] = c->r[5] | 0x0005u; if (_c) goto L_08a05964; }
    c->r[2] = 0x08ba0000u;
    c->r[7] = 0x80420000u;
    c->r[5] = c->r[4] + 0u;
    c->r[4] = c->r[2] + 0xffffafc0u;
    { int _c = (c->r[3] != 0u); c->r[2] = c->r[7] | 0x0005u; if (_c) goto L_08a05964; }
    { c->r[31] = 0x08a05964u; hle_dispatch_stub(c, ram, 0x08a24cecu); /* __sceSasCore */ }
L_08a05964:
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000000u);
    { c->r[29] = c->r[29] + 0x00000010u; return; }
    return; /* fell out of func_08a05918 */
}

/* func_08a06734  0x08a06734..0x08a06844  272 bytes, source=residue */
void func_08a06734(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08a06734u);
    c->r[29] = c->r[29] + 0xffffffc0u;
    mem_w32(ram, c->r[29] + 0x00000028u, c->r[18]);
    c->r[2] = 0u + 0u;
    c->r[18] = 0u + 0u;
    mem_w32(ram, c->r[29] + 0x00000020u, c->r[16]);
    c->r[16] = c->r[4] + 0u;
    mem_w32(ram, c->r[29] + 0x0000003cu, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000038u, c->r[22]);
    mem_w32(ram, c->r[29] + 0x00000034u, c->r[21]);
    mem_w32(ram, c->r[29] + 0x00000030u, c->r[20]);
    mem_w32(ram, c->r[29] + 0x0000002cu, c->r[19]);
    mem_w32(ram, c->r[29] + 0x00000024u, c->r[17]);
    { int _c = (c->r[5] == 0u); mem_w32(ram, c->r[29] + 0x00000014u, c->r[6]); if (_c) goto L_08a0681c; }
    c->r[17] = c->r[5] + 0xffffffffu;
    c->r[21] = 0x08ba0000u;
    c->r[19] = 0u | 0xffffu;
    c->r[22] = 0x08ba0000u;
    c->r[20] = 0u + 0xffffffffu;
L_08a06780:
    { c->r[31] = 0x08a06788u; c->r[4] = c->r[29] + 0x00000014u; func_08a06224(c, ram); }
    { int _c = (c->r[2] == 0u); c->r[3] = c->r[2] + 0u; if (_c) goto L_08a06814; }
    c->r[4] = (c->r[19] < c->r[3]) ? 1u : 0u;
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[29]);
    { int _c = (c->r[4] != 0u); c->r[6] = mem_r16(ram, c->r[21] + 0xffffbe00u); if (_c) goto L_08a067b8; }
    c->r[7] = mem_r32(ram, c->r[22] + 0xffffbe10u);
    c->r[5] = c->r[3] << 1;
    c->r[4] = c->r[5] + c->r[7];
    c->r[2] = mem_r16(ram, c->r[4] + 0x00000000u);
    { int _c = (c->r[2] != 0u); c->r[5] = c->r[2] + 0u; if (_c) goto L_08a067bc; }
L_08a067b8:
    c->r[5] = c->r[6] + 0u;
L_08a067bc:
    c->r[5] = c->r[5] & 0xffffu;
    if (c->r[5] == 0u) { mem_w8(ram, c->r[16] + 0x00000000u, 0u); goto L_08a06818; }
    { c->r[31] = 0x08a067d0u; c->r[4] = c->r[29] + 0x00000010u; func_08a064d8(c, ram); }
    c->r[3] = mem_r32(ram, c->r[29] + 0x00000010u);
    c->r[4] = c->r[3] - c->r[29];
    c->r[6] = (c->r[17] < c->r[4]) ? 1u : 0u;
    { int _c = (c->r[6] != 0u); c->r[17] = c->r[17] - c->r[4]; if (_c) goto L_08a06814; }
    c->r[4] = c->r[4] + 0xffffffffu;
    { int _c = (c->r[4] == c->r[20]); c->r[3] = c->r[29] + 0u; if (_c) goto L_08a0680c; }
    c->r[5] = 0u + 0xffffffffu;
L_08a067f4:
    c->r[8] = mem_r8(ram, c->r[3] + 0x00000000u);
    c->r[4] = c->r[4] + 0xffffffffu;
    c->r[3] = c->r[3] + 0x00000001u;
    mem_w8(ram, c->r[16] + 0x00000000u, c->r[8]);
    { int _c = (c->r[4] != c->r[5]); c->r[16] = c->r[16] + 0x00000001u; if (_c) goto L_08a067f4; }
L_08a0680c:
    { c->r[18] = c->r[18] + 0x00000001u; goto L_08a06780; }
L_08a06814:
    mem_w8(ram, c->r[16] + 0x00000000u, 0u);
L_08a06818:
    c->r[2] = c->r[18] + 0u;
L_08a0681c:
    c->r[31] = mem_r32(ram, c->r[29] + 0x0000003cu);
    c->r[22] = mem_r32(ram, c->r[29] + 0x00000038u);
    c->r[21] = mem_r32(ram, c->r[29] + 0x00000034u);
    c->r[20] = mem_r32(ram, c->r[29] + 0x00000030u);
    c->r[19] = mem_r32(ram, c->r[29] + 0x0000002cu);
    c->r[18] = mem_r32(ram, c->r[29] + 0x00000028u);
    c->r[17] = mem_r32(ram, c->r[29] + 0x00000024u);
    c->r[16] = mem_r32(ram, c->r[29] + 0x00000020u);
    { c->r[29] = c->r[29] + 0x00000040u; return; }
    return; /* fell out of func_08a06734 */
}

/* func_08a0a6a8  0x08a0a6a8..0x08a0b0d0  2600 bytes, source=sweep */
void func_08a0a6a8(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08a0a6a8u);
    c->r[29] = c->r[29] + 0xffffff30u;
    mem_w32(ram, c->r[29] + 0x000000c0u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[6]);
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[7]);
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[8]);
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[9]);
    mem_w32(ram, c->r[30] + 0x00000018u, 0u);
L_08a0a6d0:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = (c->r[2] < 0x00000010u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_08a0a6e8; }
    { goto L_08a0a70c; }
L_08a0a6e8:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[30];
    c->r[2] = c->r[2] + 0x00000070u;
    mem_w16(ram, c->r[2] + 0x00000000u, 0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]); goto L_08a0a6d0; }
L_08a0a70c:
    mem_w32(ram, c->r[30] + 0x0000001cu, 0u);
L_08a0a710:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = (c->r[2] < c->r[3]) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_08a0a72c; }
    { goto L_08a0a788; }
L_08a0a72c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[3] = c->r[2] << 1;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r16(ram, c->r[2] + 0x00000000u);
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[30];
    c->r[4] = c->r[2] + 0x00000070u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[3] = c->r[2] << 1;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r16(ram, c->r[2] + 0x00000000u);
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[30];
    c->r[2] = c->r[2] + 0x00000070u;
    c->r[2] = mem_r16(ram, c->r[2] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000001u;
    mem_w16(ram, c->r[4] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x0000001cu, c->r[2]); goto L_08a0a710; }
L_08a0a788:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    mem_w32(ram, c->r[30] + 0x00000028u, c->r[2]);
    c->r[2] = 0u + 0x0000000fu;
    mem_w32(ram, c->r[30] + 0x00000024u, c->r[2]);
L_08a0a79c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000024u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_08a0a7b0; }
    { goto L_08a0a7e4; }
L_08a0a7b0:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000024u);
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[30];
    c->r[2] = c->r[2] + 0x00000070u;
    c->r[2] = mem_r16(ram, c->r[2] + 0x00000000u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_08a0a7d4; }
    { goto L_08a0a7e4; }
L_08a0a7d4:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000024u);
    c->r[2] = c->r[2] + 0xffffffffu;
    { mem_w32(ram, c->r[30] + 0x00000024u, c->r[2]); goto L_08a0a79c; }
L_08a0a7e4:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000028u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000024u);
    c->r[2] = (c->r[3] < c->r[2]) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_08a0a800; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000024u);
    mem_w32(ram, c->r[30] + 0x00000028u, c->r[2]);
L_08a0a800:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000024u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_08a0a818; }
    c->r[2] = 0u + 0xffffffffu;
    { mem_w32(ram, c->r[30] + 0x000000b0u, c->r[2]); goto L_08a0b0bc; }
L_08a0a818:
    c->r[2] = 0u + 0x00000001u;
    mem_w32(ram, c->r[30] + 0x00000020u, c->r[2]);
L_08a0a820:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[2] = (c->r[2] < 0x00000010u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_08a0a838; }
    { goto L_08a0a86c; }
L_08a0a838:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[30];
    c->r[2] = c->r[2] + 0x00000070u;
    c->r[2] = mem_r16(ram, c->r[2] + 0x00000000u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_08a0a85c; }
    { goto L_08a0a86c; }
L_08a0a85c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000020u, c->r[2]); goto L_08a0a820; }
L_08a0a86c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000028u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[2] = (c->r[2] < c->r[3]) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_08a0a888; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    mem_w32(ram, c->r[30] + 0x00000028u, c->r[2]);
L_08a0a888:
    c->r[2] = 0u + 0x00000001u;
    mem_w32(ram, c->r[30] + 0x00000034u, c->r[2]);
    c->r[2] = 0u + 0x00000001u;
    mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]);
L_08a0a898:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = (c->r[2] < 0x00000010u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_08a0a8b0; }
    { goto L_08a0a904; }
L_08a0a8b0:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000034u);
    c->r[2] = c->r[2] << 1;
    mem_w32(ram, c->r[30] + 0x00000034u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[30];
    c->r[2] = c->r[2] + 0x00000070u;
    c->r[3] = mem_r16(ram, c->r[2] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000034u);
    c->r[2] = c->r[2] - c->r[3];
    mem_w32(ram, c->r[30] + 0x00000034u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000034u);
    { int _c = ((s32)c->r[2] >= 0); if (_c) goto L_08a0a8f4; }
    c->r[3] = 0u + 0xffffffffu;
    { mem_w32(ram, c->r[30] + 0x000000b0u, c->r[3]); goto L_08a0b0bc; }
L_08a0a8f4:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]); goto L_08a0a898; }
L_08a0a904:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000034u);
    { int _c = ((s32)c->r[2] <= 0); if (_c) goto L_08a0a948; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_08a0a93c; }
    c->r[3] = mem_r16(ram, c->r[30] + 0x00000070u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[3] = c->r[2] - c->r[3];
    c->r[2] = 0u + 0x00000001u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_08a0a93c; }
    { goto L_08a0a948; }
L_08a0a93c:
    c->r[4] = 0u + 0xffffffffu;
    { mem_w32(ram, c->r[30] + 0x000000b0u, c->r[4]); goto L_08a0b0bc; }
L_08a0a948:
    mem_w16(ram, c->r[30] + 0x00000092u, 0u);
    c->r[2] = 0u + 0x00000001u;
    mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]);
L_08a0a954:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = (c->r[2] < 0x0000000fu) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_08a0a96c; }
    { goto L_08a0a9bc; }
L_08a0a96c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[30];
    c->r[4] = c->r[2] + 0x00000092u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[30];
    c->r[3] = c->r[2] + 0x00000090u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[30];
    c->r[2] = c->r[2] + 0x00000070u;
    c->r[3] = mem_r16(ram, c->r[3] + 0x00000000u);
    c->r[2] = mem_r16(ram, c->r[2] + 0x00000000u);
    c->r[2] = c->r[3] + c->r[2];
    mem_w16(ram, c->r[4] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]); goto L_08a0a954; }
L_08a0a9bc:
    mem_w32(ram, c->r[30] + 0x0000001cu, 0u);
L_08a0a9c0:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = (c->r[2] < c->r[3]) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_08a0a9dc; }
    { goto L_08a0aa4c; }
L_08a0a9dc:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[3] = c->r[2] << 1;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r16(ram, c->r[2] + 0x00000000u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_08a0aa3c; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[3] = c->r[2] << 1;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r16(ram, c->r[2] + 0x00000000u);
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[30];
    c->r[3] = c->r[2] + 0x00000090u;
    c->r[4] = mem_r16(ram, c->r[3] + 0x00000000u);
    c->r[2] = c->r[4] + 0x00000001u;
    mem_w16(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[2] = c->r[4] & 0xffffu;
    c->r[3] = c->r[2] << 1;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[3] = c->r[3] + c->r[2];
    c->r[2] = mem_r16(ram, c->r[30] + 0x0000001cu);
    mem_w16(ram, c->r[3] + 0x00000000u, c->r[2]);
L_08a0aa3c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x0000001cu, c->r[2]); goto L_08a0a9c0; }
L_08a0aa4c:
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000000u);
    mem_w32(ram, c->r[30] + 0x000000b4u, c->r[5]);
    c->r[6] = mem_r32(ram, c->r[30] + 0x000000b4u);
    { int _c = (c->r[6] == 0u); if (_c) goto L_08a0aa78; }
    c->r[2] = 0u + 0x00000001u;
    c->r[7] = mem_r32(ram, c->r[30] + 0x000000b4u);
    { int _c = (c->r[7] == c->r[2]); if (_c) goto L_08a0aa90; }
    { goto L_08a0aacc; }
L_08a0aa78:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    mem_w32(ram, c->r[30] + 0x00000068u, c->r[2]);
    mem_w32(ram, c->r[30] + 0x00000064u, c->r[2]);
    c->r[2] = 0u + 0x00000013u;
    { mem_w32(ram, c->r[30] + 0x0000006cu, c->r[2]); goto L_08a0aaec; }
L_08a0aa90:
    c->r[2] = 0x08a50000u;
    c->r[2] = c->r[2] + 0xffffe2b0u;
    mem_w32(ram, c->r[30] + 0x00000064u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000064u);
    c->r[2] = c->r[2] + 0xfffffdfeu;
    mem_w32(ram, c->r[30] + 0x00000064u, c->r[2]);
    c->r[2] = 0x08a50000u;
    c->r[2] = c->r[2] + 0xffffe2f0u;
    mem_w32(ram, c->r[30] + 0x00000068u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000068u);
    c->r[2] = c->r[2] + 0xfffffdfeu;
    mem_w32(ram, c->r[30] + 0x00000068u, c->r[2]);
    c->r[2] = 0u + 0x00000100u;
    { mem_w32(ram, c->r[30] + 0x0000006cu, c->r[2]); goto L_08a0aaec; }
L_08a0aacc:
    c->r[2] = 0x08a50000u;
    c->r[2] = c->r[2] + 0xffffe330u;
    mem_w32(ram, c->r[30] + 0x00000064u, c->r[2]);
    c->r[2] = 0x08a50000u;
    c->r[2] = c->r[2] + 0xffffe370u;
    mem_w32(ram, c->r[30] + 0x00000068u, c->r[2]);
    c->r[2] = 0u + 0xffffffffu;
    mem_w32(ram, c->r[30] + 0x0000006cu, c->r[2]);
L_08a0aaec:
    mem_w32(ram, c->r[30] + 0x0000003cu, 0u);
    mem_w32(ram, c->r[30] + 0x0000001cu, 0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    mem_w32(ram, c->r[30] + 0x00000060u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000028u);
    mem_w32(ram, c->r[30] + 0x0000002cu, c->r[2]);
    mem_w32(ram, c->r[30] + 0x00000030u, 0u);
    c->r[2] = 0u + 0xffffffffu;
    mem_w32(ram, c->r[30] + 0x00000048u, c->r[2]);
    c->r[3] = 0u + 0x00000001u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000028u);
    c->r[2] = c->r[3] << (c->r[2] & 31u);
    mem_w32(ram, c->r[30] + 0x00000038u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000038u);
    c->r[2] = c->r[2] + 0xffffffffu;
    mem_w32(ram, c->r[30] + 0x0000004cu, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = 0u + 0x00000001u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_08a0ab64; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000038u);
    c->r[2] = (c->r[2] < 0x00000506u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_08a0ab64; }
    c->r[2] = 0u + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x000000b0u, c->r[2]); goto L_08a0b0bc; }
L_08a0ab64:
L_08a0ab68:
    c->r[3] = mem_r8(ram, c->r[30] + 0x00000018u);
    c->r[2] = mem_r8(ram, c->r[30] + 0x00000030u);
    c->r[2] = c->r[3] - c->r[2];
    mem_w8(ram, c->r[30] + 0x00000051u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[3] = c->r[2] << 1;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[3] = mem_r16(ram, c->r[2] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000006cu);
    c->r[2] = ((s32)c->r[3] < (s32)c->r[2]) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_08a0abbc; }
    mem_w8(ram, c->r[30] + 0x00000050u, 0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[3] = c->r[2] << 1;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r16(ram, c->r[2] + 0x00000000u);
    { mem_w16(ram, c->r[30] + 0x00000052u, c->r[2]); goto L_08a0ac40; }
L_08a0abbc:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[3] = c->r[2] << 1;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[3] = mem_r16(ram, c->r[2] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000006cu);
    c->r[2] = ((s32)c->r[2] < (s32)c->r[3]) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_08a0ac34; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[3] = c->r[2] << 1;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r16(ram, c->r[2] + 0x00000000u);
    c->r[3] = c->r[2] << 1;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000068u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000000u);
    mem_w8(ram, c->r[30] + 0x00000050u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[3] = c->r[2] << 1;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r16(ram, c->r[2] + 0x00000000u);
    c->r[3] = c->r[2] << 1;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000064u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r16(ram, c->r[2] + 0x00000000u);
    { mem_w16(ram, c->r[30] + 0x00000052u, c->r[2]); goto L_08a0ac40; }
L_08a0ac34:
    c->r[2] = 0u + 0x00000060u;
    mem_w8(ram, c->r[30] + 0x00000050u, c->r[2]);
    mem_w16(ram, c->r[30] + 0x00000052u, 0u);
L_08a0ac40:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000030u);
    c->r[3] = c->r[3] - c->r[2];
    c->r[2] = 0u + 0x00000001u;
    c->r[2] = c->r[2] << (c->r[3] & 31u);
    mem_w32(ram, c->r[30] + 0x00000040u, c->r[2]);
    c->r[3] = 0u + 0x00000001u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000002cu);
    c->r[2] = c->r[3] << (c->r[2] & 31u);
    mem_w32(ram, c->r[30] + 0x00000044u, c->r[2]);
L_08a0ac68:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000044u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000040u);
    c->r[2] = c->r[3] - c->r[2];
    mem_w32(ram, c->r[30] + 0x00000044u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000003cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000030u);
    c->r[3] = c->r[3] >> (c->r[2] & 31u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000044u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[3] = c->r[2] << 2;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000060u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[3] = c->r[2] + 0u;
    c->r[2] = c->r[30] + 0x00000050u;
    c->r[4] = mem_lwl(ram, c->r[2] + 0x00000003u, c->r[4]);
    c->r[4] = mem_lwr(ram, c->r[2] + 0x00000000u, c->r[4]);
    mem_swl(ram, c->r[3] + 0x00000003u, c->r[4]);
    mem_swr(ram, c->r[3] + 0x00000000u, c->r[4]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000044u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_08a0ac68; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[3] = c->r[2] + 0xffffffffu;
    c->r[2] = 0u + 0x00000001u;
    c->r[2] = c->r[2] << (c->r[3] & 31u);
    mem_w32(ram, c->r[30] + 0x00000040u, c->r[2]);
L_08a0acd0:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000003cu);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000040u);
    c->r[2] = c->r[2] & c->r[3];
    { int _c = (c->r[2] != 0u); if (_c) goto L_08a0acec; }
    { goto L_08a0acfc; }
L_08a0acec:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000040u);
    c->r[2] = c->r[2] >> 1;
    { mem_w32(ram, c->r[30] + 0x00000040u, c->r[2]); goto L_08a0acd0; }
L_08a0acfc:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000040u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_08a0ad30; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000040u);
    c->r[3] = c->r[2] + 0xffffffffu;
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000003cu);
    c->r[2] = c->r[2] & c->r[3];
    mem_w32(ram, c->r[30] + 0x0000003cu, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000003cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000040u);
    c->r[2] = c->r[3] + c->r[2];
    { mem_w32(ram, c->r[30] + 0x0000003cu, c->r[2]); goto L_08a0ad34; }
L_08a0ad30:
    mem_w32(ram, c->r[30] + 0x0000003cu, 0u);
L_08a0ad34:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = c->r[2] + 0x00000001u;
    mem_w32(ram, c->r[30] + 0x0000001cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[30];
    c->r[3] = c->r[2] + 0x00000070u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[30];
    c->r[2] = c->r[2] + 0x00000070u;
    c->r[2] = mem_r16(ram, c->r[2] + 0x00000000u);
    c->r[2] = c->r[2] + 0xffffffffu;
    mem_w16(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[2] = c->r[2] & 0xffffu;
    { int _c = (c->r[2] != 0u); if (_c) goto L_08a0adb8; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000024u);
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_08a0ad90; }
    { goto L_08a0af68; }
L_08a0ad90:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[3] = c->r[2] << 1;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r16(ram, c->r[2] + 0x00000000u);
    c->r[3] = c->r[2] << 1;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r16(ram, c->r[2] + 0x00000000u);
    mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]);
L_08a0adb8:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000028u);
    c->r[2] = (c->r[3] < c->r[2]) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_08a0ab68; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000003cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000004cu);
    c->r[3] = c->r[3] & c->r[2];
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000048u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_08a0ab68; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000030u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_08a0adf8; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000028u);
    mem_w32(ram, c->r[30] + 0x00000030u, c->r[2]);
L_08a0adf8:
    c->r[3] = 0u + 0x00000004u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000002cu);
    c->r[3] = c->r[3] << (c->r[2] & 31u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000060u);
    c->r[2] = c->r[2] + c->r[3];
    mem_w32(ram, c->r[30] + 0x00000060u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000030u);
    c->r[2] = c->r[3] - c->r[2];
    mem_w32(ram, c->r[30] + 0x0000002cu, c->r[2]);
    c->r[3] = 0u + 0x00000001u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000002cu);
    c->r[2] = c->r[3] << (c->r[2] & 31u);
    mem_w32(ram, c->r[30] + 0x00000034u, c->r[2]);
L_08a0ae30:
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000002cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000030u);
    c->r[3] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000024u);
    c->r[2] = (c->r[3] < c->r[2]) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_08a0ae54; }
    { goto L_08a0aeac; }
L_08a0ae54:
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000002cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000030u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[30];
    c->r[2] = c->r[2] + 0x00000070u;
    c->r[3] = mem_r16(ram, c->r[2] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000034u);
    c->r[2] = c->r[2] - c->r[3];
    mem_w32(ram, c->r[30] + 0x00000034u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000034u);
    { int _c = ((s32)c->r[2] > 0); if (_c) goto L_08a0ae90; }
    { goto L_08a0aeac; }
L_08a0ae90:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000002cu);
    c->r[2] = c->r[2] + 0x00000001u;
    mem_w32(ram, c->r[30] + 0x0000002cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000034u);
    c->r[2] = c->r[2] << 1;
    { mem_w32(ram, c->r[30] + 0x00000034u, c->r[2]); goto L_08a0ae30; }
L_08a0aeac:
    c->r[3] = 0u + 0x00000001u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000002cu);
    c->r[3] = c->r[3] << (c->r[2] & 31u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000038u);
    c->r[2] = c->r[2] + c->r[3];
    mem_w32(ram, c->r[30] + 0x00000038u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = 0u + 0x00000001u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_08a0aef0; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000038u);
    c->r[2] = (c->r[2] < 0x00000506u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_08a0aef0; }
    c->r[2] = 0u + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x000000b0u, c->r[2]); goto L_08a0b0bc; }
L_08a0aef0:
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000003cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000004cu);
    c->r[2] = c->r[3] & c->r[2];
    mem_w32(ram, c->r[30] + 0x00000048u, c->r[2]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000048u);
    c->r[3] = c->r[2] << 2;
    c->r[2] = mem_r32(ram, c->r[4] + 0x00000000u);
    c->r[3] = c->r[3] + c->r[2];
    c->r[2] = mem_r8(ram, c->r[30] + 0x0000002cu);
    mem_w8(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000048u);
    c->r[3] = c->r[2] << 2;
    c->r[2] = mem_r32(ram, c->r[4] + 0x00000000u);
    c->r[3] = c->r[3] + c->r[2];
    c->r[2] = mem_r8(ram, c->r[30] + 0x00000028u);
    mem_w8(ram, c->r[3] + 0x00000001u, c->r[2]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000048u);
    c->r[3] = c->r[2] << 2;
    c->r[2] = mem_r32(ram, c->r[4] + 0x00000000u);
    c->r[4] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000060u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[2] = c->r[3] - c->r[2];
    c->r[2] = (u32)((s32)c->r[2] >> 2);
    { mem_w16(ram, c->r[4] + 0x00000002u, c->r[2]); goto L_08a0ab68; }
L_08a0af68:
    c->r[2] = 0u + 0x00000040u;
    mem_w8(ram, c->r[30] + 0x00000050u, c->r[2]);
    c->r[3] = mem_r8(ram, c->r[30] + 0x00000018u);
    c->r[2] = mem_r8(ram, c->r[30] + 0x00000030u);
    c->r[2] = c->r[3] - c->r[2];
    mem_w8(ram, c->r[30] + 0x00000051u, c->r[2]);
    mem_w16(ram, c->r[30] + 0x00000052u, 0u);
L_08a0af84:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000003cu);
    { int _c = (c->r[2] != 0u); if (_c) goto L_08a0af98; }
    { goto L_08a0b090; }
L_08a0af98:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000030u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_08a0afe4; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000003cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000004cu);
    c->r[3] = c->r[3] & c->r[2];
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000048u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_08a0afe4; }
    mem_w32(ram, c->r[30] + 0x00000030u, 0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000028u);
    mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    mem_w32(ram, c->r[30] + 0x00000060u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000028u);
    mem_w32(ram, c->r[30] + 0x0000002cu, c->r[2]);
    c->r[2] = mem_r8(ram, c->r[30] + 0x00000018u);
    mem_w8(ram, c->r[30] + 0x00000051u, c->r[2]);
L_08a0afe4:
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000003cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000030u);
    c->r[2] = c->r[3] >> (c->r[2] & 31u);
    c->r[3] = c->r[2] << 2;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000060u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[3] = c->r[2] + 0u;
    c->r[2] = c->r[30] + 0x00000050u;
    c->r[4] = mem_lwl(ram, c->r[2] + 0x00000003u, c->r[4]);
    c->r[4] = mem_lwr(ram, c->r[2] + 0x00000000u, c->r[4]);
    mem_swl(ram, c->r[3] + 0x00000003u, c->r[4]);
    mem_swr(ram, c->r[3] + 0x00000000u, c->r[4]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[3] = c->r[2] + 0xffffffffu;
    c->r[2] = 0u + 0x00000001u;
    c->r[2] = c->r[2] << (c->r[3] & 31u);
    mem_w32(ram, c->r[30] + 0x00000040u, c->r[2]);
L_08a0b028:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000003cu);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000040u);
    c->r[2] = c->r[2] & c->r[3];
    { int _c = (c->r[2] != 0u); if (_c) goto L_08a0b044; }
    { goto L_08a0b054; }
L_08a0b044:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000040u);
    c->r[2] = c->r[2] >> 1;
    { mem_w32(ram, c->r[30] + 0x00000040u, c->r[2]); goto L_08a0b028; }
L_08a0b054:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000040u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_08a0b088; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000040u);
    c->r[3] = c->r[2] + 0xffffffffu;
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000003cu);
    c->r[2] = c->r[2] & c->r[3];
    mem_w32(ram, c->r[30] + 0x0000003cu, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000003cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000040u);
    c->r[2] = c->r[3] + c->r[2];
    { mem_w32(ram, c->r[30] + 0x0000003cu, c->r[2]); goto L_08a0af84; }
L_08a0b088:
    { mem_w32(ram, c->r[30] + 0x0000003cu, 0u); goto L_08a0af84; }
L_08a0b090:
    c->r[5] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[4] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000038u);
    c->r[3] = c->r[2] << 2;
    c->r[2] = mem_r32(ram, c->r[4] + 0x00000000u);
    c->r[2] = c->r[2] + c->r[3];
    mem_w32(ram, c->r[5] + 0x00000000u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000028u);
    mem_w32(ram, c->r[3] + 0x00000000u, c->r[2]);
    mem_w32(ram, c->r[30] + 0x000000b0u, 0u);
L_08a0b0bc:
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000b0u);
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x000000c0u);
    { c->r[29] = c->r[29] + 0x000000d0u; return; }
    return; /* fell out of func_08a0a6a8 */
}

/* func_08a0de80  0x08a0de80..0x08a0df00  128 bytes, source=fde */
void func_08a0de80(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08a0de80u);
    c->r[29] = c->r[29] + 0xfffffff0u;
    mem_w32(ram, c->r[29] + 0x00000004u, c->r[31]);
    c->r[2] = 0x08a60000u;
    c->r[3] = 0x08a60000u;
    mem_w32(ram, c->r[29] + 0x00000000u, c->r[16]);
    c->r[7] = c->r[4] + 0xffffffb0u;
    c->r[16] = c->r[4] + 0xffffffe0u;
    c->r[9] = mem_r32(ram, c->r[2] + 0x00004a50u);
    c->r[8] = mem_r32(ram, c->r[3] + 0x00004a4cu);
    c->r[2] = 0x08a10000u;
    c->r[2] = c->r[2] + 0xffffde2cu;
    mem_w32(ram, c->r[7] + 0x00000038u, c->r[2]);
    c->r[2] = 0x432b0000u;
    c->r[2] = c->r[2] | 0x2b00u;
    c->r[3] = 0x474e0000u;
    c->r[3] = c->r[3] | 0x5543u;
    mem_w32(ram, c->r[4] + 0xffffffb0u, c->r[5]);
    mem_w32(ram, c->r[7] + 0x00000030u, c->r[2]);
    mem_w32(ram, c->r[7] + 0x00000034u, c->r[3]);
    mem_w32(ram, c->r[7] + 0x00000004u, c->r[6]);
    mem_w32(ram, c->r[7] + 0x00000008u, c->r[9]);
    { c->r[31] = 0x08a0dedcu; mem_w32(ram, c->r[7] + 0x0000000cu, c->r[8]); func_08a0e464(c, ram); }
    c->r[3] = mem_r32(ram, c->r[2] + 0x00000004u);
    c->r[4] = c->r[16] + 0u;
    c->r[3] = c->r[3] + 0x00000001u;
    { c->r[31] = 0x08a0def0u; mem_w32(ram, c->r[2] + 0x00000004u, c->r[3]); func_08a15ec8(c, ram); }
    { c->r[31] = 0x08a0def8u; c->r[4] = c->r[16] + 0u; func_08a0e188(c, ram); }
    { c->r[31] = 0x08a0df00u; func_08a0ddc4(c, ram); }
    return; /* fell out of func_08a0de80 */
}

/* func_08a0e67c  0x08a0e67c..0x08a0e6b4  56 bytes, source=indirect */
void func_08a0e67c(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08a0e67cu);
    c->r[2] = 0x08a50000u;
    c->r[2] = c->r[2] + 0x00000630u;
    mem_w32(ram, c->r[4] + 0x00000000u, c->r[2]);
    c->r[29] = c->r[29] + 0xfffffff0u;
    mem_w32(ram, c->r[29] + 0x00000000u, c->r[16]);
    mem_w32(ram, c->r[29] + 0x00000004u, c->r[31]);
    { c->r[31] = 0x08a0e69cu; c->r[16] = c->r[4] + 0u; func_08a0e308(c, ram); }
    { c->r[31] = 0x08a0e6a4u; c->r[4] = c->r[16] + 0u; func_08a0d214(c, ram); }
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000004u);
    c->r[16] = mem_r32(ram, c->r[29] + 0x00000000u);
    { c->r[29] = c->r[29] + 0x00000010u; return; }
    return; /* fell out of func_08a0e67c */
}

/* func_08a0fa04  0x08a0fa04..0x08a0fb24  288 bytes, source=sweep */
void func_08a0fa04(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08a0fa04u);
    c->r[29] = c->r[29] + 0xffffffb0u;
    mem_w32(ram, c->r[29] + 0x00000030u, c->r[16]);
    mem_wf32(ram, c->r[29] + 0x00000044u, c->f[21]);
    mem_wf32(ram, c->r[29] + 0x00000040u, c->f[20]);
    mem_w32(ram, c->r[29] + 0x00000034u, c->r[31]);
    { c->r[31] = 0x08a0fa20u; c->f[20] = c->f[12]; func_08a10904(c, ram); }
    c->r[2] = 0x08a50000u;
    c->r[16] = mem_r32(ram, c->r[2] + 0x00000fa8u);
    c->r[3] = 0u + 0xffffffffu;
    { int _c = (c->r[16] == c->r[3]); c->f[21] = c->f[0]; if (_c) goto L_08a0fa44; }
    { c->r[31] = 0x08a0fa3cu; c->f[12] = c->f[20]; func_08a13038(c, ram); }
    { int _c = (c->r[2] == 0u); if (_c) goto L_08a0fa60; }
L_08a0fa44:
    c->f[0] = c->f[21];
L_08a0fa48:
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000034u);
L_08a0fa4c:
    c->r[16] = mem_r32(ram, c->r[29] + 0x00000030u);
    c->f[21] = mem_rf32(ram, c->r[29] + 0x00000044u);
    c->f[20] = mem_rf32(ram, c->r[29] + 0x00000040u);
    { c->r[29] = c->r[29] + 0x00000050u; return; }
L_08a0fa60:
    { c->r[31] = 0x08a0fa68u; c->f[12] = c->f[20]; func_08a13008(c, ram); }
    c->r[2] = 0x08a50000u;
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000788u);
    alx_c_cond_s(c, 12, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) == 0u); c->f[0] = c->f[21]; if (_c) goto L_08a0fa48; }
    c->r[2] = 0x08a50000u;
    c->r[3] = 0u + 0x00000001u;
    c->r[2] = c->r[2] + 0x00000780u;
    c->f[12] = c->f[20];
    mem_w32(ram, c->r[29] + 0x00000000u, c->r[3]);
    mem_w32(ram, c->r[29] + 0x00000004u, c->r[2]);
    { c->r[31] = 0x08a0faa0u; mem_w32(ram, c->r[29] + 0x00000020u, 0u); func_08a136f8(c, ram); }
    c->r[4] = 0u + 0u;
    c->r[5] = 0u + 0u;
    mem_w32(ram, c->r[29] + 0x00000008u, c->r[2]);
    mem_w32(ram, c->r[29] + 0x0000000cu, c->r[3]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[2]);
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[3]);
    c->r[2] = 0u + 0x00000002u;
    mem_w32(ram, c->r[29] + 0x00000018u, c->r[4]);
    mem_w32(ram, c->r[29] + 0x0000001cu, c->r[5]);
    { int _c = (c->r[16] == c->r[2]); if (_c) goto L_08a0fb10; }
    { c->r[31] = 0x08a0fad4u; c->r[4] = c->r[29] + 0u; func_08a12b50(c, ram); }
    { int _c = (c->r[2] == 0u); if (_c) goto L_08a0fb10; }
L_08a0fadc:
    c->r[2] = mem_r32(ram, c->r[29] + 0x00000020u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_08a0fafc; }
L_08a0fae8:
    c->r[4] = mem_r32(ram, c->r[29] + 0x00000018u);
    { c->r[31] = 0x08a0faf4u; c->r[5] = mem_r32(ram, c->r[29] + 0x0000001cu); func_08a14588(c, ram); }
    { c->r[31] = mem_r32(ram, c->r[29] + 0x00000034u); goto L_08a0fa4c; }
L_08a0fafc:
    { c->r[31] = 0x08a0fb04u; func_08a19214(c, ram); }
    c->r[3] = mem_r32(ram, c->r[29] + 0x00000020u);
    { mem_w32(ram, c->r[2] + 0x00000000u, c->r[3]); goto L_08a0fae8; }
L_08a0fb10:
    { c->r[31] = 0x08a0fb18u; func_08a19214(c, ram); }
    c->r[3] = 0u + 0x00000021u;
    { mem_w32(ram, c->r[2] + 0x00000000u, c->r[3]); goto L_08a0fadc; }
    return; /* fell out of func_08a0fa04 */
}

/* func_08a13b68  0x08a13b68..0x08a13ee0  888 bytes, source=sweep */
void func_08a13b68(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08a13b68u);
    c->r[29] = c->r[29] + 0xffffff60u;
    c->r[2] = c->r[4] + 0u;
    c->r[3] = c->r[5] + 0u;
    mem_w32(ram, c->r[29] + 0x00000080u, c->r[16]);
    c->r[4] = c->r[29] + 0x00000060u;
    c->r[5] = c->r[29] + 0u;
    c->r[16] = c->r[29] + 0x00000020u;
    mem_w32(ram, c->r[29] + 0x00000060u, c->r[2]);
    mem_w32(ram, c->r[29] + 0x00000064u, c->r[3]);
    mem_w32(ram, c->r[29] + 0x00000094u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000070u, c->r[6]);
    mem_w32(ram, c->r[29] + 0x00000074u, c->r[7]);
    mem_w32(ram, c->r[29] + 0x00000090u, c->r[21]);
    mem_w32(ram, c->r[29] + 0x0000008cu, c->r[20]);
    mem_w32(ram, c->r[29] + 0x00000088u, c->r[19]);
    { c->r[31] = 0x08a13bacu; mem_w32(ram, c->r[29] + 0x00000084u, c->r[18]); func_08a18664(c, ram); }
    c->r[4] = c->r[29] + 0x00000070u;
    { c->r[31] = 0x08a13bb8u; c->r[5] = c->r[16] + 0u; func_08a18664(c, ram); }
    c->r[3] = mem_r32(ram, c->r[29] + 0x00000000u);
    c->r[13] = c->r[29] + 0u;
    c->r[2] = (c->r[3] < 0x00000002u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); c->r[12] = c->r[29] + 0x00000040u; if (_c) goto L_08a13bf8; }
    c->r[4] = mem_r32(ram, c->r[29] + 0x00000020u);
    c->r[2] = (c->r[4] < 0x00000002u) ? 1u : 0u;
    if (c->r[2] != 0u) { c->r[3] = mem_r32(ram, c->r[29] + 0x00000024u); goto L_08a13c54; }
    c->r[2] = c->r[3] ^ 0x0004u;
    { int _c = (c->r[2] != 0u); c->r[2] = c->r[4] ^ 0x0004u; if (_c) goto L_08a13c38; }
    c->r[3] = c->r[4] ^ 0x0002u;
    c->r[2] = 0x08a50000u;
    { int _c = (c->r[3] == 0u); c->r[4] = c->r[2] + 0x00001088u; if (_c) goto L_08a13c10; }
L_08a13bf8:
    c->r[2] = mem_r32(ram, c->r[29] + 0x00000004u);
L_08a13bfc:
    c->r[3] = mem_r32(ram, c->r[29] + 0x00000024u);
    c->r[4] = c->r[29] + 0u;
    c->r[2] = c->r[2] ^ c->r[3];
    c->r[2] = (0u < c->r[2]) ? 1u : 0u;
    mem_w32(ram, c->r[29] + 0x00000004u, c->r[2]);
L_08a13c10:
    { c->r[31] = 0x08a13c18u; func_08a183fc(c, ram); }
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000094u);
    c->r[21] = mem_r32(ram, c->r[29] + 0x00000090u);
    c->r[20] = mem_r32(ram, c->r[29] + 0x0000008cu);
    c->r[19] = mem_r32(ram, c->r[29] + 0x00000088u);
    c->r[18] = mem_r32(ram, c->r[29] + 0x00000084u);
    c->r[16] = mem_r32(ram, c->r[29] + 0x00000080u);
    { c->r[29] = c->r[29] + 0x000000a0u; return; }
L_08a13c38:
    { int _c = (c->r[2] != 0u); c->r[2] = c->r[3] ^ 0x0002u; if (_c) goto L_08a13c6c; }
    c->r[2] = 0x08a50000u;
    c->r[3] = c->r[3] ^ 0x0002u;
    { int _c = (c->r[3] == 0u); c->r[4] = c->r[2] + 0x00001088u; if (_c) goto L_08a13c10; }
    c->r[3] = mem_r32(ram, c->r[29] + 0x00000024u);
L_08a13c54:
    c->r[2] = mem_r32(ram, c->r[29] + 0x00000004u);
    c->r[4] = c->r[16] + 0u;
    c->r[2] = c->r[2] ^ c->r[3];
    c->r[2] = (0u < c->r[2]) ? 1u : 0u;
    { mem_w32(ram, c->r[29] + 0x00000024u, c->r[2]); goto L_08a13c10; }
L_08a13c6c:
    { int _c = (c->r[2] == 0u); c->r[2] = mem_r32(ram, c->r[29] + 0x00000004u); if (_c) goto L_08a13bfc; }
    c->r[2] = c->r[4] ^ 0x0002u;
    { int _c = (c->r[2] == 0u); c->r[3] = mem_r32(ram, c->r[29] + 0x00000024u); if (_c) goto L_08a13c54; }
    c->r[6] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[7] = mem_r32(ram, c->r[29] + 0x00000030u);
    c->r[8] = mem_r32(ram, c->r[29] + 0x00000010u);
    c->r[5] = mem_r32(ram, c->r[29] + 0x00000034u);
    alx_multu(c, c->r[7], c->r[6]);
    c->r[18] = 0u + 0u;
    c->r[19] = 0u + 0u;
    c->r[3] = c->hi;
    c->r[2] = c->lo;
    alx_multu(c, c->r[5], c->r[8]);
    c->r[11] = c->hi;
    c->r[10] = c->lo;
    alx_multu(c, c->r[5], c->r[6]);
    c->r[14] = c->r[10] + c->r[2];
    c->r[9] = (c->r[14] < c->r[2]) ? 1u : 0u;
    c->r[15] = c->r[11] + c->r[3];
    c->r[15] = c->r[15] + c->r[9];
    c->r[21] = c->hi;
    c->r[20] = c->lo;
    alx_multu(c, c->r[7], c->r[8]);
    c->r[4] = (c->r[15] < c->r[11]) ? 1u : 0u;
    c->r[7] = c->hi;
    { int _c = (c->r[4] != 0u); c->r[6] = c->lo; if (_c) goto L_08a13ed0; }
    { int _c = (c->r[11] == c->r[15]); c->r[2] = (c->r[14] < c->r[10]) ? 1u : 0u; if (_c) goto L_08a13ec8; }
    c->r[10] = 0u + 0u;
L_08a13cec:
    c->r[11] = c->r[14] << 0;
    c->r[24] = c->r[6] + c->r[10];
    c->r[5] = (c->r[24] < c->r[10]) ? 1u : 0u;
    c->r[25] = c->r[7] + c->r[11];
    c->r[25] = c->r[25] + c->r[5];
    c->r[2] = (c->r[25] < c->r[7]) ? 1u : 0u;
    if (c->r[2] != 0u) { c->r[18] = c->r[18] + 0x00000001u; goto L_08a13ebc; }
    { int _c = (c->r[7] == c->r[25]); c->r[2] = (c->r[24] < c->r[6]) ? 1u : 0u; if (_c) goto L_08a13eb0; }
L_08a13d14:
    c->r[2] = c->r[15] >> 0;
L_08a13d18:
    c->r[2] = c->r[2] + c->r[20];
    c->r[3] = 0u + 0u;
    c->r[8] = mem_r32(ram, c->r[16] + 0x00000004u);
    c->r[6] = mem_r32(ram, c->r[13] + 0x00000004u);
    c->r[4] = mem_r32(ram, c->r[13] + 0x00000008u);
    c->r[7] = mem_r32(ram, c->r[16] + 0x00000008u);
    c->r[9] = (c->r[2] < c->r[20]) ? 1u : 0u;
    c->r[3] = c->r[3] + c->r[21];
    c->r[3] = c->r[3] + c->r[9];
    c->r[10] = c->r[18] + c->r[2];
    c->r[9] = (c->r[10] < c->r[2]) ? 1u : 0u;
    c->r[5] = 0x1fff0000u;
    c->r[11] = c->r[19] + c->r[3];
    c->r[11] = c->r[11] + c->r[9];
    c->r[6] = c->r[6] ^ c->r[8];
    c->r[4] = c->r[4] + c->r[7];
    c->r[5] = c->r[5] | 0xffffu;
    c->r[4] = c->r[4] + 0x00000004u;
    c->r[6] = (0u < c->r[6]) ? 1u : 0u;
    c->r[5] = (c->r[5] < c->r[11]) ? 1u : 0u;
    mem_w32(ram, c->r[12] + 0x00000008u, c->r[4]);
    c->r[8] = c->r[24] + 0u;
    c->r[9] = c->r[25] + 0u;
    { int _c = (c->r[5] == 0u); mem_w32(ram, c->r[12] + 0x00000004u, c->r[6]); if (_c) goto L_08a13ddc; }
    c->r[6] = 0x1fff0000u;
    c->r[15] = 0u + 0x00000000u;
    c->r[14] = 0u + 0x00000001u;
    c->r[24] = 0u + 0x00000000u;
    c->r[25] = 0x80000000u;
    c->r[6] = c->r[6] | 0xffffu;
    c->r[2] = mem_r32(ram, c->r[12] + 0x00000008u);
L_08a13d98:
    c->r[3] = c->r[11] << 31;
    c->r[4] = c->r[10] & c->r[14];
    c->r[11] = c->r[11] >> 1;
    c->r[10] = c->r[10] >> 1;
    c->r[2] = c->r[2] + 0x00000001u;
    c->r[10] = c->r[10] | c->r[3];
    mem_w32(ram, c->r[12] + 0x00000008u, c->r[2]);
    { int _c = (c->r[4] == 0u); c->r[3] = (c->r[6] < c->r[11]) ? 1u : 0u; if (_c) goto L_08a13dd4; }
    c->r[2] = c->r[9] << 31;
    c->r[8] = c->r[8] >> 1;
    c->r[8] = c->r[8] | c->r[2];
    c->r[9] = c->r[9] >> 1;
    c->r[8] = c->r[8] | c->r[24];
    c->r[9] = c->r[9] | c->r[25];
L_08a13dd4:
    if (c->r[3] != 0u) { c->r[2] = mem_r32(ram, c->r[12] + 0x00000008u); goto L_08a13d98; }
L_08a13ddc:
    c->r[2] = 0x0fff0000u;
    c->r[2] = c->r[2] | 0xffffu;
    c->r[2] = (c->r[2] < c->r[11]) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); c->r[4] = 0x0fff0000u; if (_c) goto L_08a13e34; }
    c->r[7] = 0u + 0x00000000u;
    c->r[6] = 0u + 0x00000001u;
    c->r[4] = c->r[4] | 0xffffu;
L_08a13dfc:
    c->r[2] = mem_r32(ram, c->r[12] + 0x00000008u);
    c->r[3] = c->r[10] >> 31;
    c->r[11] = c->r[11] << 1;
    c->r[2] = c->r[2] + 0xffffffffu;
    c->r[11] = c->r[11] | c->r[3];
    c->r[10] = c->r[10] << 1;
    { int _c = ((s32)c->r[9] < 0); mem_w32(ram, c->r[12] + 0x00000008u, c->r[2]); if (_c) goto L_08a13ea4; }
L_08a13e1c:
    c->r[3] = c->r[8] >> 31;
    c->r[9] = c->r[9] << 1;
    c->r[2] = (c->r[4] < c->r[11]) ? 1u : 0u;
    c->r[9] = c->r[9] | c->r[3];
    { int _c = (c->r[2] == 0u); c->r[8] = c->r[8] << 1; if (_c) goto L_08a13dfc; }
L_08a13e34:
    c->r[3] = 0u + 0x00000000u;
    c->r[2] = 0u + 0x000000ffu;
    c->r[2] = c->r[10] & c->r[2];
    c->r[4] = 0u + 0x00000080u;
    { int _c = (c->r[2] == c->r[4]); c->r[3] = c->r[11] & c->r[3]; if (_c) goto L_08a13e64; }
L_08a13e4c:
    c->r[2] = 0u + 0x00000003u;
L_08a13e50:
    mem_w32(ram, c->r[12] + 0x00000010u, c->r[10]);
    mem_w32(ram, c->r[12] + 0x00000014u, c->r[11]);
    c->r[4] = c->r[12] + 0u;
    { mem_w32(ram, c->r[12] + 0x00000000u, c->r[2]); goto L_08a13c10; }
L_08a13e64:
    { int _c = (c->r[3] != 0u); c->r[2] = 0u + 0x00000003u; if (_c) goto L_08a13e50; }
    c->r[3] = 0u + 0x00000000u;
    c->r[2] = 0u + 0x00000100u;
    c->r[2] = c->r[10] & c->r[2];
    c->r[3] = c->r[11] & c->r[3];
    c->r[2] = c->r[2] | c->r[3];
    if (c->r[2] != 0u) { c->r[10] = c->r[10] + 0x00000080u; goto L_08a13e98; }
    c->r[2] = c->r[8] | c->r[9];
    { int _c = (c->r[2] == 0u); c->r[2] = 0u + 0x00000003u; if (_c) goto L_08a13e50; }
    c->r[10] = c->r[10] + 0x00000080u;
L_08a13e98:
    c->r[2] = (c->r[10] < 0x00000080u) ? 1u : 0u;
    { c->r[11] = c->r[11] + c->r[2]; goto L_08a13e4c; }
L_08a13ea4:
    c->r[10] = c->r[10] | c->r[6];
    { c->r[11] = c->r[11] | c->r[7]; goto L_08a13e1c; }
L_08a13eb0:
    { int _c = (c->r[2] == 0u); c->r[2] = c->r[15] >> 0; if (_c) goto L_08a13d18; }
    c->r[18] = c->r[18] + 0x00000001u;
L_08a13ebc:
    c->r[2] = (c->r[18] < 0x00000001u) ? 1u : 0u;
    { c->r[19] = c->r[19] + c->r[2]; goto L_08a13d14; }
L_08a13ec8:
    if (c->r[2] == 0u) { c->r[10] = 0u + 0u; goto L_08a13cec; }
L_08a13ed0:
    c->r[18] = 0u + 0x00000000u;
    c->r[19] = 0u + 0x00000001u;
    { c->r[10] = 0u + 0u; goto L_08a13cec; }
    return; /* fell out of func_08a13b68 */
}

/* func_08a15ec8  0x08a15ec8..0x08a16108  576 bytes, source=fde */
void func_08a15ec8(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08a15ec8u);
    c->r[29] = c->r[29] + 0xfffff1d0u;
    mem_w32(ram, c->r[29] + 0x00000dc8u, c->r[6]);
    c->r[6] = c->r[31] + 0u;
    mem_w32(ram, c->r[29] + 0x00000dc4u, c->r[5]);
    c->r[5] = c->r[29] + 0x00000e30u;
    mem_w32(ram, c->r[29] + 0x00000dc0u, c->r[4]);
    mem_w32(ram, c->r[29] + 0x00000db0u, c->r[4]);
    c->r[4] = c->r[29] + 0u;
    mem_w32(ram, c->r[29] + 0x00000dccu, c->r[7]);
    mem_w32(ram, c->r[29] + 0x00000df4u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000df0u, c->r[30]);
    mem_w32(ram, c->r[29] + 0x00000decu, c->r[23]);
    mem_w32(ram, c->r[29] + 0x00000de8u, c->r[22]);
    mem_w32(ram, c->r[29] + 0x00000de4u, c->r[21]);
    mem_w32(ram, c->r[29] + 0x00000de0u, c->r[20]);
    mem_w32(ram, c->r[29] + 0x00000ddcu, c->r[19]);
    mem_w32(ram, c->r[29] + 0x00000dd8u, c->r[18]);
    mem_w32(ram, c->r[29] + 0x00000dd4u, c->r[17]);
    mem_w32(ram, c->r[29] + 0x00000dd0u, c->r[16]);
    mem_wf32(ram, c->r[29] + 0x00000e2cu, c->f[31]);
    mem_wf32(ram, c->r[29] + 0x00000e28u, c->f[30]);
    mem_wf32(ram, c->r[29] + 0x00000e24u, c->f[29]);
    mem_wf32(ram, c->r[29] + 0x00000e20u, c->f[28]);
    mem_wf32(ram, c->r[29] + 0x00000e1cu, c->f[27]);
    mem_wf32(ram, c->r[29] + 0x00000e18u, c->f[26]);
    mem_wf32(ram, c->r[29] + 0x00000e14u, c->f[25]);
    mem_wf32(ram, c->r[29] + 0x00000e10u, c->f[24]);
    mem_wf32(ram, c->r[29] + 0x00000e0cu, c->f[23]);
    mem_wf32(ram, c->r[29] + 0x00000e08u, c->f[22]);
    mem_wf32(ram, c->r[29] + 0x00000e04u, c->f[21]);
    { c->r[31] = 0x08a15f48u; mem_wf32(ram, c->r[29] + 0x00000e00u, c->f[20]); func_08a1593c(c, ram); }
    c->r[7] = c->r[29] + 0x00000370u;
    c->r[6] = c->r[29] + 0u;
    c->r[8] = c->r[29] + 0x00000360u;
L_08a15f54:
    c->r[2] = mem_r32(ram, c->r[6] + 0x00000000u);
    c->r[3] = mem_r32(ram, c->r[6] + 0x00000004u);
    c->r[4] = mem_r32(ram, c->r[6] + 0x00000008u);
    c->r[5] = mem_r32(ram, c->r[6] + 0x0000000cu);
    mem_w32(ram, c->r[7] + 0x00000000u, c->r[2]);
    c->r[6] = c->r[6] + 0x00000010u;
    c->r[7] = c->r[7] + 0x00000010u;
    mem_w32(ram, c->r[7] + 0xfffffff4u, c->r[3]);
    mem_w32(ram, c->r[7] + 0xfffffff8u, c->r[4]);
    { int _c = (c->r[6] != c->r[8]); mem_w32(ram, c->r[7] + 0xfffffffcu, c->r[5]); if (_c) goto L_08a15f54; }
    c->r[2] = mem_r32(ram, c->r[6] + 0x00000000u);
    c->r[3] = mem_r32(ram, c->r[6] + 0x00000004u);
    mem_w32(ram, c->r[7] + 0x00000000u, c->r[2]);
    mem_w32(ram, c->r[7] + 0x00000004u, c->r[3]);
    c->r[4] = c->r[29] + 0x00000370u;
L_08a15f94:
    { c->r[31] = 0x08a15f9cu; c->r[5] = c->r[29] + 0x000006e0u; func_08a154c8(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = 0u + 0x00000005u;
    c->r[8] = mem_r32(ram, c->r[29] + 0x00000db0u);
    c->r[9] = c->r[29] + 0x00000370u;
    c->r[4] = 0u + 0x00000001u;
    { int _c = (c->r[3] == c->r[2]); c->r[5] = 0u + 0x00000001u; if (_c) goto L_08a15ffc; }
    { int _c = (c->r[3] != 0u); c->r[2] = mem_r32(ram, c->r[29] + 0x00000d90u); if (_c) goto L_08a15ff8; }
    if (c->r[2] == 0u) { c->r[4] = c->r[29] + 0x00000370u; goto L_08a15fe8; }
    c->r[6] = mem_r32(ram, c->r[8] + 0x00000000u);
    { u32 _t = c->r[2]; c->r[31] = 0x08a15fd4u; c->r[7] = mem_r32(ram, c->r[8] + 0x00000004u); recomp_call_indirect(c, ram, 0x08a15fccu, _t); }
    c->r[4] = 0u + 0x00000006u;
    { int _c = (c->r[2] == c->r[4]); c->r[5] = 0u + 0x00000008u; if (_c) goto L_08a16074; }
    { int _c = (c->r[2] != c->r[5]); c->r[4] = c->r[29] + 0x00000370u; if (_c) goto L_08a15ff8; }
L_08a15fe8:
    { c->r[31] = 0x08a15ff0u; c->r[5] = c->r[29] + 0x000006e0u; func_08a158f0(c, ram); }
    { c->r[4] = c->r[29] + 0x00000370u; goto L_08a15f94; }
L_08a15ff8:
    c->r[2] = 0u + 0x00000003u;
L_08a15ffc:
    c->r[3] = 0u + 0u;
L_08a16000:
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000df4u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000df0u);
    c->r[23] = mem_r32(ram, c->r[29] + 0x00000decu);
    c->r[22] = mem_r32(ram, c->r[29] + 0x00000de8u);
    c->r[21] = mem_r32(ram, c->r[29] + 0x00000de4u);
    c->r[20] = mem_r32(ram, c->r[29] + 0x00000de0u);
    c->r[19] = mem_r32(ram, c->r[29] + 0x00000ddcu);
    c->r[18] = mem_r32(ram, c->r[29] + 0x00000dd8u);
    c->r[17] = mem_r32(ram, c->r[29] + 0x00000dd4u);
    c->r[16] = mem_r32(ram, c->r[29] + 0x00000dd0u);
    c->r[7] = mem_r32(ram, c->r[29] + 0x00000dccu);
    c->r[6] = mem_r32(ram, c->r[29] + 0x00000dc8u);
    c->r[5] = mem_r32(ram, c->r[29] + 0x00000dc4u);
    c->r[4] = mem_r32(ram, c->r[29] + 0x00000dc0u);
    c->f[31] = mem_rf32(ram, c->r[29] + 0x00000e2cu);
    c->f[30] = mem_rf32(ram, c->r[29] + 0x00000e28u);
    c->f[29] = mem_rf32(ram, c->r[29] + 0x00000e24u);
    c->f[28] = mem_rf32(ram, c->r[29] + 0x00000e20u);
    c->f[27] = mem_rf32(ram, c->r[29] + 0x00000e1cu);
    c->f[26] = mem_rf32(ram, c->r[29] + 0x00000e18u);
    c->f[25] = mem_rf32(ram, c->r[29] + 0x00000e14u);
    c->f[24] = mem_rf32(ram, c->r[29] + 0x00000e10u);
    c->f[23] = mem_rf32(ram, c->r[29] + 0x00000e0cu);
    c->f[22] = mem_rf32(ram, c->r[29] + 0x00000e08u);
    c->f[21] = mem_rf32(ram, c->r[29] + 0x00000e04u);
    c->f[20] = mem_rf32(ram, c->r[29] + 0x00000e00u);
    c->r[3] = c->r[3] + 0x00000e30u;
    { c->r[29] = c->r[29] + c->r[3]; return; }
L_08a16074:
    c->r[8] = mem_r32(ram, c->r[29] + 0x00000db0u);
    c->r[2] = mem_r32(ram, c->r[29] + 0x000006c0u);
    c->r[7] = c->r[29] + 0x00000370u;
    mem_w32(ram, c->r[8] + 0x0000000cu, 0u);
    c->r[6] = c->r[29] + 0u;
    mem_w32(ram, c->r[8] + 0x00000010u, c->r[2]);
    c->r[8] = c->r[29] + 0x00000360u;
L_08a16090:
    c->r[2] = mem_r32(ram, c->r[6] + 0x00000000u);
    c->r[3] = mem_r32(ram, c->r[6] + 0x00000004u);
    c->r[4] = mem_r32(ram, c->r[6] + 0x00000008u);
    c->r[5] = mem_r32(ram, c->r[6] + 0x0000000cu);
    mem_w32(ram, c->r[7] + 0x00000000u, c->r[2]);
    c->r[6] = c->r[6] + 0x00000010u;
    c->r[7] = c->r[7] + 0x00000010u;
    mem_w32(ram, c->r[7] + 0xfffffff4u, c->r[3]);
    mem_w32(ram, c->r[7] + 0xfffffff8u, c->r[4]);
    { int _c = (c->r[6] != c->r[8]); mem_w32(ram, c->r[7] + 0xfffffffcu, c->r[5]); if (_c) goto L_08a16090; }
    c->r[9] = mem_r32(ram, c->r[6] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[6] + 0x00000004u);
    mem_w32(ram, c->r[7] + 0x00000000u, c->r[9]);
    mem_w32(ram, c->r[7] + 0x00000004u, c->r[2]);
    c->r[5] = c->r[29] + 0x00000370u;
    { c->r[31] = 0x08a160d8u; c->r[4] = mem_r32(ram, c->r[29] + 0x00000db0u); func_08a15df4(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = 0u + 0x00000007u;
    { int _c = (c->r[3] == c->r[2]); c->r[4] = c->r[29] + 0u; if (_c) goto L_08a160f0; }
    { c->r[2] = c->r[3] + 0u; goto L_08a15ffc; }
L_08a160f0:
    { c->r[31] = 0x08a160f8u; c->r[5] = c->r[29] + 0x00000370u; func_08a159e0(c, ram); }
    c->r[4] = mem_r32(ram, c->r[29] + 0x000006c0u);
    c->r[3] = c->r[2] + 0u;
    { mem_w32(ram, c->r[29] + 0x00000df4u, c->r[4]); goto L_08a16000; }
    return; /* fell out of func_08a15ec8 */
}

/* func_08a177b4  0x08a177b4..0x08a17914  352 bytes, source=sweep */
void func_08a177b4(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08a177b4u);
    c->r[29] = c->r[29] + 0xffffffc0u;
    mem_w32(ram, c->r[29] + 0x00000028u, c->r[22]);
    c->r[22] = c->r[5] + 0u;
    mem_w32(ram, c->r[29] + 0x00000024u, c->r[21]);
    mem_w32(ram, c->r[29] + 0x00000020u, c->r[20]);
    c->r[20] = 0u + 0u;
    mem_w32(ram, c->r[29] + 0x0000001cu, c->r[19]);
    mem_w32(ram, c->r[29] + 0x00000018u, c->r[18]);
    c->r[18] = c->r[4] + 0u;
    c->r[5] = c->r[18] + 0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[17]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[16]);
    c->r[16] = c->r[6] + 0u;
    mem_w32(ram, c->r[29] + 0x00000030u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x0000002cu, c->r[23]);
    c->r[2] = mem_r32(ram, c->r[4] + 0x00000010u);
    c->r[17] = alx_ext(c->r[2], 3u, 7u);
    c->r[19] = c->r[17] & 0x00ffu;
    { c->r[31] = 0x08a17804u; c->r[4] = c->r[19] + 0u; func_08a170ec(c, ram); }
    c->r[21] = c->r[2] + 0u;
    c->r[2] = mem_r32(ram, c->r[16] + 0x00000000u);
    { int _c = (c->r[2] == 0u); c->r[23] = 0u + 0x00000001u; if (_c) goto L_08a17834; }
L_08a17814:
    c->r[3] = mem_r32(ram, c->r[16] + 0x00000004u);
    if (c->r[3] != 0u) { c->r[2] = mem_r32(ram, c->r[18] + 0x00000010u); goto L_08a17860; }
L_08a17820:
    c->r[2] = mem_r32(ram, c->r[16] + 0x00000000u);
L_08a17824:
    c->r[2] = c->r[16] + c->r[2];
    c->r[3] = mem_r32(ram, c->r[2] + 0x00000004u);
    { int _c = (c->r[3] != 0u); c->r[16] = c->r[2] + 0x00000004u; if (_c) goto L_08a17814; }
L_08a17834:
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
L_08a17860:
    c->r[2] = alx_ext(c->r[2], 2u, 0u);
    { int _c = (c->r[2] == 0u); c->r[2] = c->r[16] - c->r[3]; if (_c) goto L_08a17898; }
    c->r[2] = c->r[2] + 0x00000004u;
    { int _c = (c->r[2] == c->r[20]); c->r[4] = c->r[2] + 0u; if (_c) goto L_08a17898; }
    { c->r[31] = 0x08a17880u; c->r[20] = c->r[2] + 0u; func_08a17160(c, ram); }
    c->r[19] = c->r[2] & 0x00ffu;
    c->r[4] = c->r[19] + 0u;
    c->r[5] = c->r[18] + 0u;
    { c->r[31] = 0x08a17894u; c->r[17] = c->r[2] + 0u; func_08a170ec(c, ram); }
    c->r[21] = c->r[2] + 0u;
L_08a17898:
    { int _c = (c->r[17] != 0u); c->r[6] = c->r[16] + 0x00000008u; if (_c) goto L_08a178d4; }
    c->r[2] = mem_r32(ram, c->r[16] + 0x00000008u);
L_08a178a4:
    if (c->r[2] == 0u) { c->r[2] = mem_r32(ram, c->r[16] + 0x00000000u); goto L_08a17824; }
    c->r[4] = mem_r32(ram, c->r[22] + 0x00000000u);
    if (c->r[4] == 0u) { c->r[2] = mem_r32(ram, c->r[16] + 0x00000000u); goto L_08a17824; }
    c->r[2] = mem_r32(ram, c->r[4] + 0x00000004u);
    c->r[3] = c->r[2] << 2;
    c->r[3] = c->r[3] + c->r[4];
    c->r[2] = c->r[2] + 0x00000001u;
    mem_w32(ram, c->r[4] + 0x00000004u, c->r[2]);
    { mem_w32(ram, c->r[3] + 0x00000008u, c->r[16]); goto L_08a17820; }
L_08a178d4:
    c->r[5] = c->r[21] + 0u;
    c->r[7] = c->r[29] + 0u;
    { c->r[31] = 0x08a178e4u; c->r[4] = c->r[19] + 0u; func_08a16cd0(c, ram); }
    { c->r[31] = 0x08a178ecu; c->r[4] = c->r[19] + 0u; func_08a16bd4(c, ram); }
    c->r[4] = c->r[2] + 0u;
    c->r[2] = c->r[2] << 3;
    c->r[2] = c->r[23] << (c->r[2] & 31u);
    c->r[3] = (c->r[4] < 0x00000004u) ? 1u : 0u;
    { int _c = (c->r[3] != 0u); c->r[4] = c->r[2] + 0xffffffffu; if (_c) goto L_08a17908; }
    c->r[4] = 0u + 0xffffffffu;
L_08a17908:
    c->r[2] = mem_r32(ram, c->r[29] + 0x00000000u);
    { c->r[2] = c->r[2] & c->r[4]; goto L_08a178a4; }
    return; /* fell out of func_08a177b4 */
}

/* func_08a19010  0x08a19010..0x08a1902c  28 bytes, source=residue */
void func_08a19010(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08a19010u);
    c->r[29] = c->r[29] + 0xfffffff0u;
    mem_w32(ram, c->r[29] + 0x00000000u, c->r[31]);
    { c->r[31] = 0x08a19020u; hle_dispatch_stub(c, ram, 0x08a248e4u); /* sceKernelLibcClock */ }
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000000u);
    { c->r[29] = c->r[29] + 0x00000010u; return; }
    return; /* fell out of func_08a19010 */
}

/* func_08a1a4c0  0x08a1a4c0..0x08a1a510  80 bytes, source=sweep */
void func_08a1a4c0(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08a1a4c0u);
    c->r[29] = c->r[29] + 0xffffffd0u;
    mem_w32(ram, c->r[29] + 0x00000004u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000000u, c->r[16]);
    c->r[16] = c->r[4] + 0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[5]);
    mem_w32(ram, c->r[29] + 0x00000018u, c->r[6]);
    mem_w32(ram, c->r[29] + 0x0000001cu, c->r[7]);
    mem_w32(ram, c->r[29] + 0x00000020u, c->r[8]);
    mem_w32(ram, c->r[29] + 0x00000024u, c->r[9]);
    mem_w32(ram, c->r[29] + 0x00000028u, c->r[10]);
    { c->r[31] = 0x08a1a4f0u; mem_w32(ram, c->r[29] + 0x0000002cu, c->r[11]); func_08a19374(c, ram); }
    c->r[5] = c->r[16] + 0u;
    c->r[4] = mem_r32(ram, c->r[2] + 0x00000008u);
    { c->r[31] = 0x08a1a500u; c->r[6] = c->r[29] + 0x00000014u; func_08a1d6dc(c, ram); }
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000004u);
    c->r[16] = mem_r32(ram, c->r[29] + 0x00000000u);
    { c->r[29] = c->r[29] + 0x00000030u; return; }
    return; /* fell out of func_08a1a4c0 */
}

/* func_08a1c2e0  0x08a1c2e0..0x08a1c4a4  452 bytes, source=sweep */
void func_08a1c2e0(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08a1c2e0u);
    c->r[29] = c->r[29] + 0xfffffff0u;
    c->r[2] = 0x08a50000u;
    mem_w32(ram, c->r[29] + 0x00000000u, c->r[16]);
    c->r[15] = c->r[5] + 0u;
    c->r[16] = c->r[4] + 0u;
    c->r[25] = c->r[6] + 0u;
    c->r[4] = c->r[2] + 0x00001b80u;
    c->r[9] = c->r[5] + 0u;
    c->r[24] = 0u + 0u;
L_08a1c304:
    c->r[8] = (u32)(s32)(s8)mem_r8(ram, c->r[9] + 0x00000000u);
    c->r[3] = c->r[8] + c->r[4];
    c->r[2] = mem_r8(ram, c->r[3] + 0x00000000u);
    c->r[2] = c->r[2] & 0x0008u;
    { int _c = (c->r[2] != 0u); c->r[9] = c->r[9] + 0x00000001u; if (_c) goto L_08a1c304; }
    c->r[2] = 0u + 0x0000002du;
    { int _c = (c->r[8] == c->r[2]); c->r[2] = 0u + 0x0000002bu; if (_c) goto L_08a1c498; }
    if (c->r[8] == c->r[2]) { c->r[8] = (u32)(s32)(s8)mem_r8(ram, c->r[9] + 0x00000000u); goto L_08a1c490; }
L_08a1c330:
    c->r[3] = c->r[7] ^ 0x0010u;
    c->r[3] = (c->r[3] < 0x00000001u) ? 1u : 0u;
    c->r[2] = (c->r[7] < 0x00000001u) ? 1u : 0u;
    c->r[2] = c->r[2] | c->r[3];
    { int _c = (c->r[2] == 0u); c->r[2] = 0u + 0x00000030u; if (_c) goto L_08a1c350; }
    if (c->r[8] == c->r[2]) { c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[9] + 0x00000000u); goto L_08a1c464; }
L_08a1c350:
    { int _c = (c->r[7] != 0u); c->r[2] = 0x7fff0000u; if (_c) goto L_08a1c36c; }
    c->r[7] = 0u + 0x00000008u;
    c->r[3] = c->r[8] ^ 0x0030u;
    c->r[2] = 0u + 0x0000000au;
    if (c->r[3] != 0u) c->r[7] = c->r[2];
    c->r[2] = 0x7fff0000u;
L_08a1c36c:
    c->r[2] = c->r[2] | 0xffffu;
    c->r[3] = 0x80000000u;
    if (c->r[24] == 0u) c->r[3] = c->r[2];
    alx_divu(c, c->r[3], c->r[7]);
    c->r[2] = 0x08a50000u;
    if (c->r[7] == 0u) { recomp_break(c, ram, 0x08a1c384u, 0x7u); goto L_08a1c388; }
L_08a1c388:
    c->r[14] = c->r[2] + 0x00001b80u;
    c->r[10] = 0u + 0u;
    c->r[11] = 0u + 0u;
    c->r[13] = c->hi;
    c->r[12] = c->lo;
L_08a1c39c:
    c->r[2] = c->r[8] + c->r[14];
    c->r[3] = mem_r8(ram, c->r[2] + 0x00000000u);
    c->r[6] = c->r[8] + 0xffffffa9u;
    c->r[5] = c->r[8] + 0xffffffc9u;
    c->r[2] = c->r[3] & 0x0004u;
    c->r[4] = c->r[3] & 0x0001u;
    c->r[8] = c->r[8] + 0xffffffd0u;
    { int _c = (c->r[2] != 0u); c->r[3] = c->r[3] & 0x0003u; if (_c) goto L_08a1c3cc; }
    c->r[8] = c->r[5] + 0u;
    { int _c = (c->r[3] == 0u); if (c->r[4] == 0u) c->r[8] = c->r[6]; if (_c) goto L_08a1c41c; }
L_08a1c3cc:
    c->r[2] = c->r[10] ^ c->r[12];
    c->r[5] = c->r[11] >> 31;
    c->r[4] = (c->r[12] < c->r[10]) ? 1u : 0u;
    c->r[6] = ((s32)c->r[13] < (s32)c->r[8]) ? 1u : 0u;
    c->r[2] = (c->r[2] < 0x00000001u) ? 1u : 0u;
    c->r[3] = ((s32)c->r[8] < (s32)c->r[7]) ? 1u : 0u;
    c->r[5] = c->r[5] | c->r[4];
    { int _c = (c->r[3] == 0u); c->r[2] = c->r[2] & c->r[6]; if (_c) goto L_08a1c41c; }
    { int _c = (c->r[5] != 0u); c->r[11] = 0u + 0xffffffffu; if (_c) goto L_08a1c410; }
    if (c->r[2] != 0u) { c->r[8] = (u32)(s32)(s8)mem_r8(ram, c->r[9] + 0x00000000u); goto L_08a1c414; }
    alx_mult(c, c->r[10], c->r[7]);
    c->r[11] = 0u + 0x00000001u;
    c->r[10] = c->lo;
    c->r[10] = c->r[10] + c->r[8];
L_08a1c410:
    c->r[8] = (u32)(s32)(s8)mem_r8(ram, c->r[9] + 0x00000000u);
L_08a1c414:
    { c->r[9] = c->r[9] + 0x00000001u; goto L_08a1c39c; }
L_08a1c41c:
    c->r[2] = 0u - c->r[10];
    { int _c = ((s32)c->r[11] < 0); if (c->r[24] != 0u) c->r[10] = c->r[2]; if (_c) goto L_08a1c448; }
L_08a1c428:
    { int _c = (c->r[25] == 0u); c->r[2] = c->r[9] + 0xffffffffu; if (_c) goto L_08a1c438; }
    if (c->r[11] != 0u) c->r[15] = c->r[2];
    mem_w32(ram, c->r[25] + 0x00000000u, c->r[15]);
L_08a1c438:
    c->r[16] = mem_r32(ram, c->r[29] + 0x00000000u);
    c->r[2] = c->r[10] + 0u;
    { c->r[29] = c->r[29] + 0x00000010u; return; }
L_08a1c448:
    c->r[3] = 0u + 0x00000022u;
    c->r[2] = 0x7fff0000u;
    mem_w32(ram, c->r[16] + 0x00000000u, c->r[3]);
    c->r[2] = c->r[2] | 0xffffu;
    c->r[10] = 0x80000000u;
    { if (c->r[24] == 0u) c->r[10] = c->r[2]; goto L_08a1c428; }
L_08a1c464:
    c->r[3] = c->r[2] ^ 0x0058u;
    c->r[2] = c->r[2] ^ 0x0078u;
    c->r[2] = (c->r[2] < 0x00000001u) ? 1u : 0u;
    c->r[3] = (c->r[3] < 0x00000001u) ? 1u : 0u;
    c->r[2] = c->r[2] | c->r[3];
    { int _c = (c->r[2] == 0u); if (_c) goto L_08a1c350; }
    c->r[8] = (u32)(s32)(s8)mem_r8(ram, c->r[9] + 0x00000001u);
    c->r[7] = 0u + 0x00000010u;
    { c->r[9] = c->r[9] + 0x00000002u; goto L_08a1c350; }
L_08a1c490:
    { c->r[9] = c->r[9] + 0x00000001u; goto L_08a1c330; }
L_08a1c498:
    c->r[8] = (u32)(s32)(s8)mem_r8(ram, c->r[9] + 0x00000000u);
    { c->r[24] = 0u + 0x00000001u; goto L_08a1c490; }
    return; /* fell out of func_08a1c2e0 */
}

/* func_08a21e28  0x08a21e28..0x08a21f30  264 bytes, source=sweep */
void func_08a21e28(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08a21e28u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[21]);
    c->r[21] = 0x08a60000u;
    c->r[2] = mem_r32(ram, c->r[21] + 0x00004dd8u);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[20]);
    c->r[20] = c->r[5] + 0u;
    mem_w32(ram, c->r[29] + 0x0000000cu, c->r[19]);
    c->r[19] = 0u + 0u;
    mem_w32(ram, c->r[29] + 0x00000018u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000008u, c->r[18]);
    mem_w32(ram, c->r[29] + 0x00000004u, c->r[17]);
    { int _c = (c->r[4] == c->r[2]); mem_w32(ram, c->r[29] + 0x00000000u, c->r[16]); if (_c) goto L_08a21ea0; }
    c->r[18] = c->r[4] + 0x0000025cu;
    { int _c = (c->r[18] == 0u); c->r[2] = mem_r32(ram, c->r[21] + 0x00004dd8u); if (_c) goto L_08a21ea4; }
    c->r[17] = mem_r32(ram, c->r[18] + 0x00000004u);
L_08a21e6c:
    c->r[17] = c->r[17] + 0xffffffffu;
    { int _c = ((s32)c->r[17] < 0); c->r[16] = mem_r32(ram, c->r[18] + 0x00000008u); if (_c) goto L_08a21e94; }
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[16] + 0x0000000cu);
L_08a21e7c:
    c->r[4] = c->r[16] + 0u;
    c->r[17] = c->r[17] + 0xffffffffu;
    { int _c = (c->r[2] != 0u); c->r[16] = c->r[16] + 0x0000005cu; if (_c) goto L_08a21f20; }
L_08a21e8c:
    if ((s32)c->r[17] >= 0) { c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[16] + 0x0000000cu); goto L_08a21e7c; }
L_08a21e94:
    c->r[18] = mem_r32(ram, c->r[18] + 0x00000000u);
    if (c->r[18] != 0u) { c->r[17] = mem_r32(ram, c->r[18] + 0x00000004u); goto L_08a21e6c; }
L_08a21ea0:
    c->r[2] = mem_r32(ram, c->r[21] + 0x00004dd8u);
L_08a21ea4:
    c->r[18] = c->r[2] + 0x0000025cu;
    { int _c = (c->r[18] == 0u); c->r[2] = c->r[19] + 0u; if (_c) goto L_08a21eec; }
    c->r[17] = mem_r32(ram, c->r[18] + 0x00000004u);
L_08a21eb4:
    c->r[17] = c->r[17] + 0xffffffffu;
    { int _c = ((s32)c->r[17] < 0); c->r[16] = mem_r32(ram, c->r[18] + 0x00000008u); if (_c) goto L_08a21edc; }
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[16] + 0x0000000cu);
L_08a21ec4:
    c->r[4] = c->r[16] + 0u;
    c->r[17] = c->r[17] + 0xffffffffu;
    { int _c = (c->r[2] != 0u); c->r[16] = c->r[16] + 0x0000005cu; if (_c) goto L_08a21f10; }
L_08a21ed4:
    if ((s32)c->r[17] >= 0) { c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[16] + 0x0000000cu); goto L_08a21ec4; }
L_08a21edc:
    c->r[18] = mem_r32(ram, c->r[18] + 0x00000000u);
    if (c->r[18] != 0u) { c->r[17] = mem_r32(ram, c->r[18] + 0x00000004u); goto L_08a21eb4; }
    c->r[2] = c->r[19] + 0u;
L_08a21eec:
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000018u);
    c->r[21] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[20] = mem_r32(ram, c->r[29] + 0x00000010u);
    c->r[19] = mem_r32(ram, c->r[29] + 0x0000000cu);
    c->r[18] = mem_r32(ram, c->r[29] + 0x00000008u);
    c->r[17] = mem_r32(ram, c->r[29] + 0x00000004u);
    c->r[16] = mem_r32(ram, c->r[29] + 0x00000000u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
L_08a21f10:
    { u32 _t = c->r[20]; c->r[31] = 0x08a21f18u; recomp_call_indirect(c, ram, 0x08a21f10u, _t); }
    { c->r[19] = c->r[19] | c->r[2]; goto L_08a21ed4; }
L_08a21f20:
    { u32 _t = c->r[20]; c->r[31] = 0x08a21f28u; recomp_call_indirect(c, ram, 0x08a21f20u, _t); }
    { c->r[19] = c->r[19] | c->r[2]; goto L_08a21e8c; }
    return; /* fell out of func_08a21e28 */
}

/* func_08a23c04  0x08a23c04..0x08a23d04  256 bytes, source=sweep */
void func_08a23c04(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08a23c04u);
    c->r[2] = c->r[4] & 0x0003u;
    c->r[6] = c->r[4] + 0u;
    { int _c = (c->r[2] != 0u); c->r[7] = c->r[5] & 0x00ffu; if (_c) goto L_08a23cbc; }
    c->r[10] = 0u + 0u;
    c->r[5] = 0u + 0u;
L_08a23c1c:
    c->r[5] = c->r[5] + 0x00000001u;
    c->r[2] = c->r[10] << 8;
    c->r[3] = (c->r[5] < 0x00000004u) ? 1u : 0u;
    { int _c = (c->r[3] != 0u); c->r[10] = c->r[2] | c->r[7]; if (_c) goto L_08a23c1c; }
    c->r[4] = mem_r32(ram, c->r[6] + 0x00000000u);
    c->r[8] = 0xfefe0000u;
    c->r[8] = c->r[8] | 0xfeffu;
    c->r[2] = c->r[4] + c->r[8];
    c->r[3] = ~(0u | c->r[4]);
    c->r[5] = 0x80800000u;
    c->r[2] = c->r[2] & c->r[3];
    c->r[5] = c->r[5] | 0x8080u;
    c->r[2] = c->r[2] & c->r[5];
    { int _c = (c->r[2] != 0u); c->r[2] = c->r[4] ^ c->r[10]; if (_c) goto L_08a23cb8; }
    c->r[3] = c->r[2] + c->r[8];
    c->r[2] = ~(0u | c->r[2]);
    c->r[3] = c->r[3] & c->r[2];
    c->r[3] = c->r[3] & c->r[5];
    { int _c = (c->r[3] != 0u); c->r[4] = c->r[6] + 0u; if (_c) goto L_08a23cbc; }
    c->r[9] = 0xfefe0000u;
    c->r[9] = c->r[9] | 0xfeffu;
    c->r[8] = c->r[5] + 0u;
    c->r[6] = c->r[6] + 0x00000004u;
L_08a23c84:
    c->r[4] = mem_r32(ram, c->r[6] + 0x00000000u);
    c->r[3] = c->r[4] ^ c->r[10];
    c->r[2] = c->r[4] + c->r[9];
    c->r[4] = ~(0u | c->r[4]);
    c->r[5] = ~(0u | c->r[3]);
    c->r[2] = c->r[2] & c->r[4];
    c->r[3] = c->r[3] + c->r[9];
    c->r[3] = c->r[3] & c->r[5];
    c->r[2] = c->r[2] & c->r[8];
    { int _c = (c->r[2] != 0u); c->r[3] = c->r[3] & c->r[8]; if (_c) goto L_08a23cb8; }
    if (c->r[3] == 0u) { c->r[6] = c->r[6] + 0x00000004u; goto L_08a23c84; }
L_08a23cb8:
    c->r[4] = c->r[6] + 0u;
L_08a23cbc:
    c->r[3] = mem_r8(ram, c->r[4] + 0x00000000u);
    c->r[2] = c->r[3] & 0x00ffu;
    { int _c = (c->r[2] == 0u); c->r[3] = c->r[3] & 0x00ffu; if (_c) goto L_08a23cf4; }
    { int _c = (c->r[2] == c->r[7]); c->r[3] = c->r[3] ^ c->r[7]; if (_c) goto L_08a23cf8; }
    c->r[4] = c->r[4] + 0x00000001u;
L_08a23cd8:
    c->r[3] = mem_r8(ram, c->r[4] + 0x00000000u);
    c->r[2] = c->r[3] & 0x00ffu;
    if (c->r[2] == 0u) { c->r[3] = c->r[3] & 0x00ffu; goto L_08a23cf4; }
    if (c->r[2] != c->r[7]) { c->r[4] = c->r[4] + 0x00000001u; goto L_08a23cd8; }
    c->r[3] = c->r[3] & 0x00ffu;
L_08a23cf4:
    c->r[3] = c->r[3] ^ c->r[7];
L_08a23cf8:
    c->r[2] = 0u + 0u;
    { if (c->r[3] == 0u) c->r[2] = c->r[4]; return; }
    return; /* fell out of func_08a23c04 */
}
