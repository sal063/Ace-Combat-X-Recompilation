#include "pspreco.h"
#include "symbols.h"
#include <math.h>

/* func_08804000  0x08804000..0x08804024  36 bytes, source=sweep */
void func_08804000(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08804000u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    { c->r[31] = 0x08804010u; func_088040c8(c, ram); }
    { c->r[31] = 0x08804018u; func_08a24638(c, ram); }
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_08804000 */
}

/* func_08806740  0x08806740..0x088067a4  100 bytes, source=sweep */
void func_08806740(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08806740u);
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
    c->r[2] = 0xdd000000u;
    c->r[2] = c->r[3] | c->r[2];
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x08806790u; c->r[5] = c->r[2] + 0u; func_08806b6c(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_08806740 */
}

/* func_088074ec  0x088074ec..0x0880750c  32 bytes, source=sweep */
void func_088074ec(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x088074ecu);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_088074ec */
}

/* func_088082f8  0x088082f8..0x08808318  32 bytes, source=sweep */
void func_088082f8(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x088082f8u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_088082f8 */
}

/* func_0880b09c  0x0880b09c..0x0880b0d4  56 bytes, source=fde */
void func_0880b09c(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0880b09cu);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0xffffc810u;
    { c->r[31] = 0x0880b0c0u; c->r[5] = mem_r32(ram, c->r[30] + 0x00000000u); func_089f8a7c(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_0880b09c */
}

/* func_0880d524  0x0880d524..0x0880d554  48 bytes, source=sweep */
void func_0880d524(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0880d524u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    mem_w32(ram, c->r[3] + 0x00000114u, c->r[2]);
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_0880d524 */
}

/* func_0880ed14  0x0880ed14..0x0880ee64  336 bytes, source=fde */
void func_0880ed14(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0880ed14u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_0880ee2c; }
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x0880ed44u; c->r[4] = c->r[4] + 0x00000330u; func_089d98dc(c, ram); }
    c->r[3] = 0x7fee0000u;
    c->r[3] = c->r[3] | 0xfcdfu;
    c->r[2] = c->r[2] + c->r[3];
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = (c->r[3] < 0x0000000au) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_0880ee50; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08a40000u;
    c->r[2] = c->r[2] + 0xffffef14u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    { u32 _t = c->r[2]; switch (_t) { case 0x0880ed84u: goto L_0880ed84; case 0x0880eda0u: goto L_0880eda0; case 0x0880edbcu: goto L_0880edbc; case 0x0880edd8u: goto L_0880edd8; case 0x0880edf4u: goto L_0880edf4; case 0x0880ee10u: goto L_0880ee10; case 0x0880ee50u: goto L_0880ee50; default: recomp_trap_unknown_indirect(c, ram, 0x0880ed7cu, _t); return; } }
L_0880ed84:
    c->r[4] = 0x08a40000u;
    c->r[4] = c->r[4] + 0xffffeed8u;
    c->r[5] = 0u + 0x000015adu;
    { c->r[31] = 0x0880ed98u; c->r[6] = 0u + 0x00000001u; func_08928cb8(c, ram); }
    { goto L_0880ee50; }
L_0880eda0:
    c->r[4] = 0x08a40000u;
    c->r[4] = c->r[4] + 0xffffeed8u;
    c->r[5] = 0u + 0x000015a4u;
    { c->r[31] = 0x0880edb4u; c->r[6] = 0u + 0x00000001u; func_08928cb8(c, ram); }
    { goto L_0880ee50; }
L_0880edbc:
    c->r[4] = 0x08a40000u;
    c->r[4] = c->r[4] + 0xffffeed8u;
    c->r[5] = 0u + 0x00001588u;
    { c->r[31] = 0x0880edd0u; c->r[6] = 0u + 0x00000001u; func_08928cb8(c, ram); }
    { goto L_0880ee50; }
L_0880edd8:
    c->r[4] = 0x08a40000u;
    c->r[4] = c->r[4] + 0xffffeed8u;
    c->r[5] = 0u + 0x000015b9u;
    { c->r[31] = 0x0880edecu; c->r[6] = 0u + 0x00000001u; func_08928cb8(c, ram); }
    { goto L_0880ee50; }
L_0880edf4:
    c->r[4] = 0x08a40000u;
    c->r[4] = c->r[4] + 0xffffeed8u;
    c->r[5] = 0u + 0x000015a9u;
    { c->r[31] = 0x0880ee08u; c->r[6] = 0u + 0x00000001u; func_08928cb8(c, ram); }
    { goto L_0880ee50; }
L_0880ee10:
    c->r[4] = 0x08a40000u;
    c->r[4] = c->r[4] + 0xffffeed8u;
    c->r[5] = 0u + 0x000015b9u;
    { c->r[31] = 0x0880ee24u; c->r[6] = 0u + 0x00000001u; func_08928cb8(c, ram); }
    { goto L_0880ee50; }
L_0880ee2c:
    { c->r[31] = 0x0880ee34u; c->r[4] = 0u + 0x00000001u; func_089c5e18(c, ram); }
    { int _c = (c->r[2] == 0u); if (_c) goto L_0880ee50; }
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00003ca0u;
    c->r[5] = 0x08810000u;
    { c->r[31] = 0x0880ee50u; c->r[5] = c->r[5] + 0xffffe628u; func_0880f03c(c, ram); }
L_0880ee50:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_0880ed14 */
}

/* func_088123d8  0x088123d8..0x08812404  44 bytes, source=fde */
void func_088123d8(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x088123d8u);
    c->r[29] = c->r[29] + 0xfffffff0u;
    mem_w32(ram, c->r[29] + 0x00000004u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000000u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    { c->r[31] = 0x088123f0u; func_0895c1d4(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000004u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000000u);
    { c->r[29] = c->r[29] + 0x00000010u; return; }
    return; /* fell out of func_088123d8 */
}

/* func_08814994  0x08814994..0x088149fc  104 bytes, source=fde */
void func_08814994(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08814994u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[2] = c->r[5] + 0u;
    mem_w8(ram, c->r[30] + 0x00000004u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r8(ram, c->r[30] + 0x00000004u);
    mem_w8(ram, c->r[3] + 0x00000040u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    mem_w16(ram, c->r[2] + 0x00000044u, 0u);
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[30] + 0x00000004u);
    c->r[2] = 0u + 0x00000003u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_088149e8; }
    c->r[4] = 0x08a80000u;
    c->r[4] = mem_r32(ram, c->r[4] + 0x00003d30u);
    c->r[5] = 0x08a80000u;
    { c->r[31] = 0x088149e8u; c->r[5] = mem_r32(ram, c->r[5] + 0x00003d34u); hle_dispatch_stub(c, ram, 0x08a249b4u); /* sceCtrlSetIdleCancelThreshold */ }
L_088149e8:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_08814994 */
}

/* func_08819adc  0x08819adc..0x08819b20  68 bytes, source=sweep */
void func_08819adc(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08819adcu);
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
    { c->r[31] = 0x08819b0cu; c->r[5] = c->r[2] + 0u; func_088191c8(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_08819adc */
}

/* func_0881ef10  0x0881ef10..0x0881ef98  136 bytes, source=sweep */
void func_0881ef10(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0881ef10u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w8(ram, c->r[30] + 0x00000004u, 0u);
    mem_w8(ram, c->r[30] + 0x00000004u, 0u);
L_0881ef28:
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[30] + 0x00000004u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000009u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_0881ef40; }
    { goto L_0881ef84; }
L_0881ef40:
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[30] + 0x00000004u);
    c->r[3] = c->r[2] << 3;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = c->r[2] + 0x00000140u;
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000000u);
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = 0u + 0xffffffffu;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_0881ef74; }
    { goto L_0881ef84; }
L_0881ef74:
    c->r[2] = mem_r8(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w8(ram, c->r[30] + 0x00000004u, c->r[2]); goto L_0881ef28; }
L_0881ef84:
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[30] + 0x00000004u);
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_0881ef10 */
}

/* func_08824a70  0x08824a70..0x08824acc  92 bytes, source=fde */
void func_08824a70(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08824a70u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    { c->r[31] = 0x08824a8cu; c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u); func_0892ff00(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = 0x00040000u;
    c->r[2] = c->r[3] & c->r[2];
    { int _c = (c->r[2] == 0u); if (_c) goto L_08824ab0; }
    c->r[2] = 0u + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]); goto L_08824ab4; }
L_08824ab0:
    mem_w32(ram, c->r[30] + 0x00000008u, 0u);
L_08824ab4:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_08824a70 */
}

/* func_08826ca0  0x08826ca0..0x08826cc8  40 bytes, source=sweep */
void func_08826ca0(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08826ca0u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000150u);
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_08826ca0 */
}

/* func_088299ec  0x088299ec..0x08829c00  532 bytes, source=fde */
void func_088299ec(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x088299ecu);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_08829a18; }
    { goto L_08829bec; }
L_08829a18:
    c->r[3] = 0x08a80000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00003eb4u);
    c->r[2] = 0u + 0x00000001u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_08829a88; }
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000330u;
    { c->r[31] = 0x08829a3cu; c->r[5] = 0u + 0x00000005u; func_089d9844(c, ram); }
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x08829a48u; c->r[4] = c->r[4] + 0x00000330u; func_089d9cec(c, ram); }
    c->r[2] = c->r[2] + 0x00001000u;
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000330u;
    c->r[5] = 0u + 0x000019e8u;
    { c->r[31] = 0x08829a60u; c->r[6] = c->r[2] + 0u; func_089d9768(c, ram); }
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000330u;
    c->r[5] = 0u + 0u;
    c->r[6] = 0x08a80000u;
    c->r[6] = c->r[6] + 0x00002e74u;
    c->r[7] = 0x08a40000u;
    c->r[7] = c->r[7] + 0x00001638u;
    c->r[8] = 0x08a40000u;
    { c->r[31] = 0x08829a88u; c->r[8] = c->r[8] + 0x00001644u; func_089d8dfc(c, ram); }
L_08829a88:
    c->r[2] = 0x08a80000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00003eb4u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000002u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_08829bec; }
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x08829aa8u; c->r[4] = c->r[4] + 0x00000330u; func_089d98dc(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]);
    c->r[2] = 0u + 0xfffffffeu;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_08829b28; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = ((s32)c->r[3] < (s32)0xffffffffu) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_08829ae8; }
    c->r[2] = 0x80110000u;
    c->r[2] = c->r[2] | 0x0306u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_08829b44; }
    { goto L_08829b60; }
L_08829ae8:
    c->r[2] = 0u + 0xffffffffu;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_08829b74; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_08829b0c; }
    { goto L_08829b60; }
L_08829b0c:
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00003eb4u;
    c->r[5] = 0x08900000u;
    { c->r[31] = 0x08829b20u; c->r[5] = c->r[5] + 0x00002cacu; func_0880f03c(c, ram); }
    { goto L_08829b74; }
L_08829b28:
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00003eb4u;
    c->r[5] = 0x08830000u;
    { c->r[31] = 0x08829b3cu; c->r[5] = c->r[5] + 0xffff99ecu; func_0880f03c(c, ram); }
    { goto L_08829b74; }
L_08829b44:
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00003eb4u;
    c->r[5] = 0x08830000u;
    { c->r[31] = 0x08829b58u; c->r[5] = c->r[5] + 0xffff99ecu; func_0880f03c(c, ram); }
    { goto L_08829b74; }
L_08829b60:
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00003eb4u;
    c->r[5] = 0x08830000u;
    { c->r[31] = 0x08829b74u; c->r[5] = c->r[5] + 0xffff9c00u; func_0880f03c(c, ram); }
L_08829b74:
    c->r[3] = 0x08a80000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00003ee8u);
    c->r[2] = 0x08900000u;
    c->r[2] = c->r[2] + 0x00002cacu;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_08829bec; }
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x08829b98u; c->r[4] = c->r[4] + 0x00000330u; func_089d9cec(c, ram); }
    c->r[2] = c->r[2] + 0x00001000u;
    { c->r[31] = 0x08829ba4u; c->r[4] = c->r[2] + 0u; func_08828974(c, ram); }
    { int _c = (c->r[2] == 0u); if (_c) goto L_08829bd0; }
    { c->r[31] = 0x08829bb4u; c->r[4] = 0u + 0x00000001u; func_08902cf4(c, ram); }
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00003eb4u;
    c->r[5] = 0x08830000u;
    { c->r[31] = 0x08829bc8u; c->r[5] = c->r[5] + 0xffff9c00u; func_0880f03c(c, ram); }
    { goto L_08829bec; }
L_08829bd0:
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00003eb4u;
    c->r[5] = 0x08900000u;
    c->r[5] = c->r[5] + 0x00001b54u;
    c->r[6] = 0x08830000u;
    { c->r[31] = 0x08829becu; c->r[6] = c->r[6] + 0xffff99ecu; func_0880f1d4(c, ram); }
L_08829bec:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_088299ec */
}

/* func_0882d1dc  0x0882d1dc..0x0882ea34  6232 bytes, source=fde */
void func_0882d1dc(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0882d1dcu);
L_0882d1dc:
    c->r[29] = c->r[29] + 0xffffff70u;
    mem_w32(ram, c->r[29] + 0x0000008cu, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000088u, c->r[30]);
    mem_w32(ram, c->r[29] + 0x00000084u, c->r[17]);
    mem_w32(ram, c->r[29] + 0x00000080u, c->r[16]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[2] = c->r[5] + 0u;
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[6]);
    mem_w8(ram, c->r[30] + 0x00000004u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x000000e0u;
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
    c->r[2] = mem_r8(ram, c->r[30] + 0x00000004u);
    mem_w32(ram, c->r[30] + 0x0000007cu, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000007cu);
    c->r[2] = (c->r[3] < 0x00000021u) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_0882ea18; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000007cu);
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08a40000u;
    c->r[2] = c->r[2] + 0x00001734u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    { u32 _t = c->r[2]; switch (_t) { case 0x0882d1dcu: goto L_0882d1dc; case 0x0882d248u: goto L_0882d248; case 0x0882d354u: goto L_0882d354; case 0x0882d390u: goto L_0882d390; case 0x0882d414u: goto L_0882d414; case 0x0882d498u: goto L_0882d498; case 0x0882d520u: goto L_0882d520; case 0x0882d544u: goto L_0882d544; case 0x0882d5a4u: goto L_0882d5a4; case 0x0882d5d0u: goto L_0882d5d0; case 0x0882d7c4u: goto L_0882d7c4; case 0x0882d814u: goto L_0882d814; case 0x0882d86cu: goto L_0882d86c; case 0x0882d99cu: goto L_0882d99c; case 0x0882da98u: goto L_0882da98; case 0x0882dbd8u: goto L_0882dbd8; case 0x0882dca0u: goto L_0882dca0; case 0x0882dde4u: goto L_0882dde4; case 0x0882dedcu: goto L_0882dedc; case 0x0882df1cu: goto L_0882df1c; case 0x0882e01cu: goto L_0882e01c; case 0x0882e048u: goto L_0882e048; case 0x0882e0a4u: goto L_0882e0a4; case 0x0882e184u: goto L_0882e184; case 0x0882e254u: goto L_0882e254; case 0x0882e28cu: goto L_0882e28c; case 0x0882e2b0u: goto L_0882e2b0; case 0x0882e2e0u: goto L_0882e2e0; case 0x0882e4f8u: goto L_0882e4f8; case 0x0882e510u: goto L_0882e510; case 0x0882e6a0u: goto L_0882e6a0; case 0x0882e6dcu: goto L_0882e6dc; case 0x0882e764u: goto L_0882e764; case 0x0882e7d4u: goto L_0882e7d4; case 0x0882e814u: goto L_0882e814; case 0x0882e854u: goto L_0882e854; case 0x0882e8a8u: goto L_0882e8a8; case 0x0882e8f4u: goto L_0882e8f4; case 0x0882e940u: goto L_0882e940; case 0x0882e95cu: goto L_0882e95c; case 0x0882e978u: goto L_0882e978; case 0x0882e9a0u: goto L_0882e9a0; case 0x0882e9e0u: goto L_0882e9e0; case 0x0882ea18u: goto L_0882ea18; default: recomp_trap_unknown_indirect(c, ram, 0x0882d240u, _t); return; } }
L_0882d248:
    { c->r[31] = 0x0882d250u; func_08928be0(c, ram); }
    { c->r[31] = 0x0882d258u; c->r[4] = 0u + 0x00000005u; func_08924620(c, ram); }
    { c->r[31] = 0x0882d260u; c->r[4] = 0u + 0x00000001u; func_0892459c(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    mem_w32(ram, c->r[2] + 0x0000001cu, 0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    mem_w32(ram, c->r[2] + 0x00000020u, 0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    mem_w8(ram, c->r[2] + 0x00000038u, 0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    mem_w32(ram, c->r[2] + 0x00000024u, 0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    mem_w8(ram, c->r[2] + 0x00000039u, 0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    mem_w8(ram, c->r[2] + 0x0000003au, 0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    mem_w32(ram, c->r[2] + 0x00000014u, 0u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0u + 0xffffffffu;
    mem_w8(ram, c->r[3] + 0x0000003bu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x0000002cu;
    { c->r[31] = 0x0882d2b4u; c->r[4] = c->r[2] + 0u; func_0896a0ec(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x0000002cu);
    mem_w32(ram, c->r[30] + 0x00000068u, c->r[2]);
    c->r[2] = 0u + 0x00000003u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000068u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_0882d310; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000068u);
    c->r[2] = ((s32)c->r[3] < (s32)0x00000004u) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_0882d2f8; }
    c->r[2] = 0u + 0x00000001u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000068u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_0882d310; }
    { goto L_0882d308; }
L_0882d2f8:
    c->r[2] = 0u + 0x00000005u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000068u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_0882d310; }
L_0882d308:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    mem_w16(ram, c->r[2] + 0x0000002eu, 0u);
L_0882d310:
    c->r[16] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x0882d320u; c->r[4] = c->r[4] + 0x00000af4u; func_0880d380(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = 0u + 0x00000064u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[2] = c->lo;
    c->r[2] = c->r[2] + 0x0000005au;
    mem_w32(ram, c->r[16] + 0x00000018u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    mem_w8(ram, c->r[2] + 0x0000003cu, 0u);
    c->r[4] = 0u + 0x00000019u;
    { c->r[31] = 0x0882d34cu; c->r[5] = 0u + 0xffffffffu; func_0880aed0(c, ram); }
    { goto L_0882ea18; }
L_0882d354:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000038u);
    mem_w32(ram, c->r[30] + 0x00000070u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000070u);
    c->r[2] = (c->r[3] < 0x00000013u) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_0882e2e0; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000070u);
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08a40000u;
    c->r[2] = c->r[2] + 0x000017b8u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    { u32 _t = c->r[2]; switch (_t) { case 0x0882d1dcu: goto L_0882d1dc; case 0x0882d248u: goto L_0882d248; case 0x0882d354u: goto L_0882d354; case 0x0882d390u: goto L_0882d390; case 0x0882d414u: goto L_0882d414; case 0x0882d498u: goto L_0882d498; case 0x0882d520u: goto L_0882d520; case 0x0882d544u: goto L_0882d544; case 0x0882d5a4u: goto L_0882d5a4; case 0x0882d5d0u: goto L_0882d5d0; case 0x0882d7c4u: goto L_0882d7c4; case 0x0882d814u: goto L_0882d814; case 0x0882d86cu: goto L_0882d86c; case 0x0882d99cu: goto L_0882d99c; case 0x0882da98u: goto L_0882da98; case 0x0882dbd8u: goto L_0882dbd8; case 0x0882dca0u: goto L_0882dca0; case 0x0882dde4u: goto L_0882dde4; case 0x0882dedcu: goto L_0882dedc; case 0x0882df1cu: goto L_0882df1c; case 0x0882e01cu: goto L_0882e01c; case 0x0882e048u: goto L_0882e048; case 0x0882e0a4u: goto L_0882e0a4; case 0x0882e184u: goto L_0882e184; case 0x0882e254u: goto L_0882e254; case 0x0882e28cu: goto L_0882e28c; case 0x0882e2b0u: goto L_0882e2b0; case 0x0882e2e0u: goto L_0882e2e0; case 0x0882e4f8u: goto L_0882e4f8; case 0x0882e510u: goto L_0882e510; case 0x0882e6a0u: goto L_0882e6a0; case 0x0882e6dcu: goto L_0882e6dc; case 0x0882e764u: goto L_0882e764; case 0x0882e7d4u: goto L_0882e7d4; case 0x0882e814u: goto L_0882e814; case 0x0882e854u: goto L_0882e854; case 0x0882e8a8u: goto L_0882e8a8; case 0x0882e8f4u: goto L_0882e8f4; case 0x0882e940u: goto L_0882e940; case 0x0882e95cu: goto L_0882e95c; case 0x0882e978u: goto L_0882e978; case 0x0882e9a0u: goto L_0882e9a0; case 0x0882e9e0u: goto L_0882e9e0; case 0x0882ea18u: goto L_0882ea18; default: recomp_trap_unknown_indirect(c, ram, 0x0882d388u, _t); return; } }
L_0882d390:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = 0u + 0u;
    { c->r[31] = 0x0882d3a0u; c->r[6] = 0u + 0u; func_0885d640(c, ram); }
    { c->r[31] = 0x0882d3a8u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u); func_0882bc7c(c, ram); }
    { c->r[31] = 0x0882d3b0u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u); func_0882c0e4(c, ram); }
    { c->r[31] = 0x0882d3b8u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u); func_0882c1ec(c, ram); }
    { c->r[31] = 0x0882d3c0u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u); func_0882c35c(c, ram); }
    c->r[2] = 0u + 0xffffffffu;
    mem_w8(ram, c->r[30] + 0x00000010u, c->r[2]);
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x0882d3d4u; c->r[4] = c->r[4] + 0x00000af4u; func_0880d380(c, ram); }
    c->r[2] = c->r[2] + 0xfffffffau;
    mem_w32(ram, c->r[30] + 0x0000006cu, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000006cu);
    c->r[2] = c->r[3] & 0x00ffu;
    c->r[2] = (c->r[2] < 0x00000019u) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_0882d5d0; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000006cu);
    c->r[2] = c->r[3] & 0x00ffu;
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08a40000u;
    c->r[2] = c->r[2] + 0x00001804u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    { u32 _t = c->r[2]; switch (_t) { case 0x0882d1dcu: goto L_0882d1dc; case 0x0882d248u: goto L_0882d248; case 0x0882d354u: goto L_0882d354; case 0x0882d390u: goto L_0882d390; case 0x0882d414u: goto L_0882d414; case 0x0882d498u: goto L_0882d498; case 0x0882d520u: goto L_0882d520; case 0x0882d544u: goto L_0882d544; case 0x0882d5a4u: goto L_0882d5a4; case 0x0882d5d0u: goto L_0882d5d0; case 0x0882d7c4u: goto L_0882d7c4; case 0x0882d814u: goto L_0882d814; case 0x0882d86cu: goto L_0882d86c; case 0x0882d99cu: goto L_0882d99c; case 0x0882da98u: goto L_0882da98; case 0x0882dbd8u: goto L_0882dbd8; case 0x0882dca0u: goto L_0882dca0; case 0x0882dde4u: goto L_0882dde4; case 0x0882dedcu: goto L_0882dedc; case 0x0882df1cu: goto L_0882df1c; case 0x0882e01cu: goto L_0882e01c; case 0x0882e048u: goto L_0882e048; case 0x0882e0a4u: goto L_0882e0a4; case 0x0882e184u: goto L_0882e184; case 0x0882e254u: goto L_0882e254; case 0x0882e28cu: goto L_0882e28c; case 0x0882e2b0u: goto L_0882e2b0; case 0x0882e2e0u: goto L_0882e2e0; case 0x0882e4f8u: goto L_0882e4f8; case 0x0882e510u: goto L_0882e510; case 0x0882e6a0u: goto L_0882e6a0; case 0x0882e6dcu: goto L_0882e6dc; case 0x0882e764u: goto L_0882e764; case 0x0882e7d4u: goto L_0882e7d4; case 0x0882e814u: goto L_0882e814; case 0x0882e854u: goto L_0882e854; case 0x0882e8a8u: goto L_0882e8a8; case 0x0882e8f4u: goto L_0882e8f4; case 0x0882e940u: goto L_0882e940; case 0x0882e95cu: goto L_0882e95c; case 0x0882e978u: goto L_0882e978; case 0x0882e9a0u: goto L_0882e9a0; case 0x0882e9e0u: goto L_0882e9e0; case 0x0882ea18u: goto L_0882ea18; default: recomp_trap_unknown_indirect(c, ram, 0x0882d40cu, _t); return; } }
L_0882d414:
    mem_w32(ram, c->r[30] + 0x00000014u, 0u);
    mem_w32(ram, c->r[30] + 0x00000018u, 0u);
L_0882d41c:
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x0882d428u; c->r[4] = c->r[4] + 0x00000af4u; func_089ca1d8(c, ram); }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = ((s32)c->r[3] < (s32)c->r[2]) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_0882d440; }
    { goto L_0882d5d0; }
L_0882d440:
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000af4u;
    { c->r[31] = 0x0882d450u; c->r[5] = mem_r32(ram, c->r[30] + 0x00000018u); func_089ca200(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = 0u + 0x000000c5u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_0882d46c; }
    c->r[2] = 0u + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]); goto L_0882d5d0; }
L_0882d46c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_0882d488; }
    c->r[2] = mem_r8(ram, c->r[30] + 0x00000010u);
    c->r[3] = 0u + 0xffffffefu;
    c->r[2] = c->r[2] & c->r[3];
    mem_w8(ram, c->r[30] + 0x00000010u, c->r[2]);
L_0882d488:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]); goto L_0882d41c; }
L_0882d498:
    mem_w32(ram, c->r[30] + 0x00000018u, 0u);
    mem_w32(ram, c->r[30] + 0x00000014u, 0u);
L_0882d4a0:
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x0882d4acu; c->r[4] = c->r[4] + 0x00000af4u; func_089ca1d8(c, ram); }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = ((s32)c->r[3] < (s32)c->r[2]) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_0882d4c4; }
    { goto L_0882d500; }
L_0882d4c4:
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000af4u;
    { c->r[31] = 0x0882d4d4u; c->r[5] = mem_r32(ram, c->r[30] + 0x00000014u); func_089ca200(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = 0u + 0x000000a3u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_0882d4f0; }
    c->r[2] = 0u + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]); goto L_0882d500; }
L_0882d4f0:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]); goto L_0882d4a0; }
L_0882d500:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_0882d5d0; }
    c->r[2] = mem_r8(ram, c->r[30] + 0x00000010u);
    c->r[3] = 0u + 0xffffffefu;
    c->r[2] = c->r[2] & c->r[3];
    { mem_w8(ram, c->r[30] + 0x00000010u, c->r[2]); goto L_0882d5d0; }
L_0882d520:
    c->r[2] = 0x08a80000u;
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000d0au);
    { int _c = (c->r[2] != 0u); if (_c) goto L_0882d5d0; }
    c->r[2] = mem_r8(ram, c->r[30] + 0x00000010u);
    c->r[3] = 0u + 0xffffffdfu;
    c->r[2] = c->r[2] & c->r[3];
    { mem_w8(ram, c->r[30] + 0x00000010u, c->r[2]); goto L_0882d5d0; }
L_0882d544:
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000cccu;
    { c->r[31] = 0x0882d554u; c->r[5] = 0u + 0x00000016u; func_08968bf8(c, ram); }
    { int _c = (c->r[2] != 0u); if (_c) goto L_0882d57c; }
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000cccu;
    { c->r[31] = 0x0882d56cu; c->r[5] = 0u + 0x00000017u; func_08968bf8(c, ram); }
    { int _c = (c->r[2] != 0u); if (_c) goto L_0882d57c; }
    { goto L_0882d590; }
L_0882d57c:
    c->r[2] = mem_r8(ram, c->r[30] + 0x00000010u);
    c->r[3] = 0u + 0xffffffdfu;
    c->r[2] = c->r[2] & c->r[3];
    { mem_w8(ram, c->r[30] + 0x00000010u, c->r[2]); goto L_0882d5d0; }
L_0882d590:
    c->r[2] = mem_r8(ram, c->r[30] + 0x00000010u);
    c->r[3] = 0u + 0xffffffbfu;
    c->r[2] = c->r[2] & c->r[3];
    { mem_w8(ram, c->r[30] + 0x00000010u, c->r[2]); goto L_0882d5d0; }
L_0882d5a4:
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x0882d5b0u; c->r[4] = c->r[4] + 0x00000af4u; func_0880d294(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = 0u + 0x00000001u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_0882d5d0; }
    c->r[2] = 0u + 0x0000007fu;
    c->r[3] = mem_r8(ram, c->r[30] + 0x00000010u);
    c->r[2] = c->r[3] & c->r[2];
    mem_w8(ram, c->r[30] + 0x00000010u, c->r[2]);
L_0882d5d0:
    mem_w32(ram, c->r[30] + 0x00000018u, 0u);
    c->r[2] = c->r[30] + 0x00000020u;
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0u + 0u;
    { c->r[31] = 0x0882d5e8u; c->r[6] = 0u + 0x00000010u; func_08a19ec4(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000014u, 0u);
L_0882d5ec:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000008u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_0882d604; }
    { goto L_0882d700; }
L_0882d604:
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x0882d610u; c->r[4] = c->r[4] + 0x00000af4u; func_0880d380(c, ram); }
    c->r[3] = c->r[2] << 3;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[3] = c->r[3] + c->r[2];
    c->r[2] = 0x08a50000u;
    c->r[2] = c->r[2] + 0x00002cc4u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[3] = mem_r8(ram, c->r[2] + 0x00000000u);
    c->r[2] = mem_r8(ram, c->r[30] + 0x00000010u);
    c->r[2] = c->r[3] & c->r[2];
    mem_w8(ram, c->r[30] + 0x00000030u, c->r[2]);
    c->r[2] = mem_r8(ram, c->r[30] + 0x00000030u);
    c->r[2] = (c->r[2] < 0x00000008u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_0882d650; }
    { goto L_0882d6f0; }
L_0882d650:
    c->r[3] = mem_r8(ram, c->r[30] + 0x00000030u);
    c->r[2] = 0u + 0x00000006u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_0882d67c; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[30];
    c->r[3] = c->r[2] + 0x00000020u;
    c->r[2] = 0u + 0x00002058u;
    { mem_w16(ram, c->r[3] + 0x00000000u, c->r[2]); goto L_0882d6e4; }
L_0882d67c:
    c->r[3] = mem_r8(ram, c->r[30] + 0x00000030u);
    c->r[2] = 0u + 0x00000007u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_0882d6a8; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[30];
    c->r[3] = c->r[2] + 0x00000020u;
    c->r[2] = 0u + 0x00002059u;
    { mem_w16(ram, c->r[3] + 0x00000000u, c->r[2]); goto L_0882d6e4; }
L_0882d6a8:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[30];
    c->r[16] = c->r[2] + 0x00000020u;
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x0882d6c4u; c->r[4] = c->r[4] + 0x00000af4u; func_0880d380(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = 0u + 0x00000064u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[2] = c->lo;
    c->r[3] = mem_r8(ram, c->r[30] + 0x00000030u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = c->r[2] + 0x0000005au;
    mem_w16(ram, c->r[16] + 0x00000000u, c->r[2]);
L_0882d6e4:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = c->r[2] + 0x00000001u;
    mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]);
L_0882d6f0:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]); goto L_0882d5ec; }
L_0882d700:
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x0882d70cu; c->r[4] = c->r[4] + 0x00000af4u; func_0880d380(c, ram); }
    mem_w8(ram, c->r[30] + 0x00000044u, c->r[2]);
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x0882d71cu; c->r[4] = c->r[4] + 0x00000af4u; func_0880d380(c, ram); }
    mem_w8(ram, c->r[30] + 0x00000045u, c->r[2]);
    c->r[2] = c->r[30] + 0x00000020u;
    mem_w32(ram, c->r[30] + 0x00000040u, c->r[2]);
    c->r[2] = mem_r8(ram, c->r[30] + 0x00000018u);
    mem_w8(ram, c->r[30] + 0x00000046u, c->r[2]);
    mem_w8(ram, c->r[30] + 0x00000047u, 0u);
    c->r[2] = c->r[30] + 0x00000040u;
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x0882d744u; c->r[5] = c->r[2] + 0u; func_0892912c(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_0882d778; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[16] = c->r[2] + 0x00000030u;
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000ac8u;
    { c->r[31] = 0x0882d76cu; c->r[5] = mem_r32(ram, c->r[30] + 0x00000014u); func_089cb780(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000050u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000050u);
    mem_w32(ram, c->r[16] + 0x00000000u, c->r[2]);
L_0882d778:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    mem_w8(ram, c->r[2] + 0x0000003bu, 0u);
    c->r[16] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[4] = 0x08a90000u;
    { c->r[31] = 0x0882d790u; c->r[4] = c->r[4] + 0xffff9720u; func_0882ebd0(c, ram); }
    mem_w32(ram, c->r[16] + 0x00000014u, c->r[2]);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00004630u;
    c->r[5] = 0x08a80000u;
    { c->r[31] = 0x0882d7a8u; c->r[5] = c->r[5] + 0x00004634u; hle_dispatch_stub(c, ram, 0x08a249acu); /* sceCtrlGetIdleCancelThreshold */ }
    c->r[4] = 0u + 0u;
    { c->r[31] = 0x0882d7b4u; c->r[5] = 0u + 0u; hle_dispatch_stub(c, ram, 0x08a249b4u); /* sceCtrlSetIdleCancelThreshold */ }
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0u + 0x00000001u;
    { mem_w8(ram, c->r[3] + 0x00000038u, c->r[2]); goto L_0882e2e0; }
L_0882d7c4:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000ac8u;
    { c->r[31] = 0x0882d7dcu; c->r[5] = c->r[2] + 0u; func_089cb820(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]);
    { c->r[31] = 0x0882d7e8u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000018u); func_08930048(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = 0u + 0x00000003u;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_0882d804; }
    { goto L_0882e2e0; }
L_0882d804:
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0u + 0x00000002u;
    { mem_w8(ram, c->r[3] + 0x00000038u, c->r[2]); goto L_0882e2e0; }
L_0882d814:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x00000030u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000ac8u;
    { c->r[31] = 0x0882d830u; c->r[5] = c->r[2] + 0u; func_089cb820(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_0882e2e0; }
    { c->r[31] = 0x0882d848u; c->r[4] = 0u + 0x00000001u; func_089c5e18(c, ram); }
    { int _c = (c->r[2] == 0u); if (_c) goto L_0882e2e0; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0u + 0x00000001u;
    mem_w8(ram, c->r[3] + 0x0000003bu, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0u + 0x00000003u;
    { mem_w8(ram, c->r[3] + 0x00000038u, c->r[2]); goto L_0882e2e0; }
L_0882d86c:
    { c->r[31] = 0x0882d874u; c->r[4] = 0u + 0x00000001u; func_089c5e18(c, ram); }
    { int _c = (c->r[2] == 0u); if (_c) goto L_0882e2e0; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000ac8u;
    { c->r[31] = 0x0882d894u; c->r[5] = c->r[2] + 0u; func_089cb820(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x00000004u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000ac8u;
    { c->r[31] = 0x0882d8b4u; c->r[5] = c->r[2] + 0u; func_089cb820(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x00000008u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000ac8u;
    { c->r[31] = 0x0882d8d4u; c->r[5] = c->r[2] + 0u; func_089cb820(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000054u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x0000000cu;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000ac8u;
    { c->r[31] = 0x0882d8f4u; c->r[5] = c->r[2] + 0u; func_089cb820(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000058u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_0882d918; }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[6] = 0u + 0x00000021u;
    { c->r[31] = 0x0882d918u; c->r[7] = 0u + 0u; func_089c34ac(c, ram); }
L_0882d918:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_0882d938; }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[6] = 0u + 0x00000021u;
    { c->r[31] = 0x0882d938u; c->r[7] = 0u + 0u; func_089c34ac(c, ram); }
L_0882d938:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000054u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_0882d958; }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000054u);
    c->r[6] = 0u + 0x00000021u;
    { c->r[31] = 0x0882d958u; c->r[7] = 0u + 0u; func_089c34ac(c, ram); }
L_0882d958:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000058u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_0882d978; }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000058u);
    c->r[6] = 0u + 0x00000021u;
    { c->r[31] = 0x0882d978u; c->r[7] = 0u + 0u; func_089c34ac(c, ram); }
L_0882d978:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = 0u + 0x00000004u;
    mem_w8(ram, c->r[2] + 0x00000038u, c->r[3]);
    c->r[16] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[4] = 0x08a90000u;
    { c->r[31] = 0x0882d994u; c->r[4] = c->r[4] + 0xffff9720u; func_0882ebd0(c, ram); }
    { mem_w32(ram, c->r[16] + 0x00000014u, c->r[2]); goto L_0882e2e0; }
L_0882d99c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000ac8u;
    { c->r[31] = 0x0882d9b4u; c->r[5] = c->r[2] + 0u; func_089cb820(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000058u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000058u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_0882d9cc; }
    { goto L_0882e2e0; }
L_0882d9cc:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    mem_w8(ram, c->r[2] + 0x0000003bu, 0u);
    c->r[16] = mem_r32(ram, c->r[30] + 0x0000000cu);
    { c->r[31] = 0x0882d9e0u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u); func_0882cf28(c, ram); }
    mem_w8(ram, c->r[16] + 0x0000003eu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x0000003eu);
    { int _c = (c->r[2] == 0u); if (_c) goto L_0882da88; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    mem_w8(ram, c->r[2] + 0x0000003cu, 0u);
    mem_w32(ram, c->r[30] + 0x00000054u, 0u);
L_0882da00:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000054u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000008u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_0882da18; }
    { goto L_0882da54; }
L_0882da18:
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000054u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = c->r[2] + 0x00000030u;
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x0000000fu);
    { int _c = ((s32)c->r[2] <= 0); if (_c) goto L_0882da44; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r8(ram, c->r[30] + 0x00000054u);
    { mem_w8(ram, c->r[3] + 0x0000003cu, c->r[2]); goto L_0882da54; }
L_0882da44:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000054u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000054u, c->r[2]); goto L_0882da00; }
L_0882da54:
    c->r[4] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x0000003cu);
    c->r[3] = c->r[2] << 1;
    c->r[2] = 0x08a50000u;
    c->r[2] = c->r[2] + 0x00002dc4u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x00000000u);
    mem_w32(ram, c->r[4] + 0x00000018u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0u + 0x00000009u;
    { mem_w8(ram, c->r[3] + 0x00000038u, c->r[2]); goto L_0882e2e0; }
L_0882da88:
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0u + 0x0000000bu;
    { mem_w8(ram, c->r[3] + 0x00000038u, c->r[2]); goto L_0882e2e0; }
L_0882da98:
    mem_w32(ram, c->r[30] + 0x00000058u, 0u);
    c->r[4] = 0x08a70000u;
    c->r[4] = c->r[4] + 0xffffb34cu;
    c->r[5] = 0u + 0u;
    c->r[6] = 0u + 0u;
    { c->r[31] = 0x0882dab4u; c->r[7] = 0u + 0u; func_089d87d4(c, ram); }
    c->r[16] = c->r[2] + 0u;
    c->r[4] = 0x08a70000u;
    { c->r[31] = 0x0882dac4u; c->r[4] = c->r[4] + 0xffffb34cu; func_0880d238(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = mem_r32(ram, c->r[16] + 0x00000004u);
    c->r[2] = c->r[3] & c->r[2];
    c->r[2] = c->r[2] & 0x0008u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_0882dae4; }
    c->r[2] = 0u + 0x00000001u;
    mem_w32(ram, c->r[30] + 0x00000058u, c->r[2]);
L_0882dae4:
    { c->r[31] = 0x0882daecu; c->r[4] = 0u + 0x00000001u; func_089c5e18(c, ram); }
    { int _c = (c->r[2] == 0u); if (_c) goto L_0882dbbc; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r8(ram, c->r[2] + 0x0000003cu);
    c->r[2] = c->r[2] + 0x00000001u;
    mem_w8(ram, c->r[3] + 0x0000003cu, c->r[2]);
    mem_w32(ram, c->r[30] + 0x00000054u, 0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x0000003cu);
    mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]);
L_0882db18:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000008u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_0882db30; }
    { goto L_0882db74; }
L_0882db30:
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = c->r[2] + 0x00000030u;
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x0000000fu);
    { int _c = ((s32)c->r[2] <= 0); if (_c) goto L_0882db64; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = mem_r8(ram, c->r[30] + 0x00000018u);
    mem_w8(ram, c->r[2] + 0x0000003cu, c->r[3]);
    c->r[2] = 0u + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000054u, c->r[2]); goto L_0882db74; }
L_0882db64:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]); goto L_0882db18; }
L_0882db74:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000054u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_0882dba8; }
    c->r[4] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x0000003cu);
    c->r[3] = c->r[2] << 1;
    c->r[2] = 0x08a50000u;
    c->r[2] = c->r[2] + 0x00002dc4u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x00000000u);
    { mem_w32(ram, c->r[4] + 0x00000018u, c->r[2]); goto L_0882dbbc; }
L_0882dba8:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = 0u + 0xffffffffu;
    mem_w32(ram, c->r[2] + 0x00000018u, c->r[3]);
    c->r[2] = 0u + 0x00000001u;
    mem_w32(ram, c->r[30] + 0x00000058u, c->r[2]);
L_0882dbbc:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000058u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_0882e2e0; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0u + 0x0000000bu;
    { mem_w8(ram, c->r[3] + 0x00000038u, c->r[2]); goto L_0882e2e0; }
L_0882dbd8:
    c->r[2] = 0u + 0x0000003fu;
    mem_w32(ram, c->r[30] + 0x00000058u, c->r[2]);
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x0882dbecu; c->r[4] = c->r[4] + 0x00000af4u; func_0880d294(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = 0u + 0x00000001u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_0882dc04; }
    c->r[2] = 0u + 0x0000009fu;
    mem_w32(ram, c->r[30] + 0x00000058u, c->r[2]);
L_0882dc04:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000058u);
    c->r[6] = 0u + 0xffffffffu;
    c->r[7] = 0u + 0xffffffffu;
    c->r[8] = 0u + 0u;
    c->r[9] = 0u + 0u;
    { c->r[31] = 0x0882dc24u; c->r[10] = 0u + 0u; func_0892fcac(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000054u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000054u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_0882dc7c; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0u + 0x00000001u;
    mem_w8(ram, c->r[3] + 0x0000003au, c->r[2]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000054u);
    { c->r[31] = 0x0882dc4cu; c->r[5] = 0x80000000u; func_0892ff54(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[16] = c->r[2] + 0x00000010u;
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000ac8u;
    { c->r[31] = 0x0882dc64u; c->r[5] = mem_r32(ram, c->r[30] + 0x00000054u); func_089cb780(c, ram); }
    mem_w32(ram, c->r[30] + 0x0000005cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000005cu);
    mem_w32(ram, c->r[16] + 0x00000000u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0u + 0x0000000cu;
    mem_w8(ram, c->r[3] + 0x00000038u, c->r[2]);
L_0882dc7c:
    c->r[4] = 0x08a80000u;
    c->r[4] = mem_r32(ram, c->r[4] + 0x00004630u);
    c->r[5] = 0x08a80000u;
    { c->r[31] = 0x0882dc90u; c->r[5] = mem_r32(ram, c->r[5] + 0x00004634u); hle_dispatch_stub(c, ram, 0x08a249b4u); /* sceCtrlSetIdleCancelThreshold */ }
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0u + 0x0000000cu;
    { mem_w8(ram, c->r[3] + 0x00000038u, c->r[2]); goto L_0882e2e0; }
L_0882dca0:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x00000010u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000ac8u;
    { c->r[31] = 0x0882dcbcu; c->r[5] = c->r[2] + 0u; func_089cb820(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000058u, c->r[2]);
    mem_w32(ram, c->r[30] + 0x00000054u, 0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000058u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_0882dcdc; }
    { c->r[31] = 0x0882dcd8u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000058u); func_089324f4(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000054u, c->r[2]);
L_0882dcdc:
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000af4u;
    { c->r[31] = 0x0882dcecu; c->r[5] = 0u + 0x0000003fu; func_088145a8(c, ram); }
    mem_w8(ram, c->r[30] + 0x00000030u, c->r[2]);
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x0882dcfcu; c->r[4] = c->r[4] + 0x00000af4u; func_0880d294(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = 0u + 0x00000001u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_0882dd20; }
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000af4u;
    { c->r[31] = 0x0882dd1cu; c->r[5] = 0u + 0x0000009fu; func_088145a8(c, ram); }
    mem_w8(ram, c->r[30] + 0x00000030u, c->r[2]);
L_0882dd20:
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000af4u;
    { c->r[31] = 0x0882dd30u; c->r[5] = 0u + 0x00000017u; func_088145a8(c, ram); }
    mem_w8(ram, c->r[30] + 0x00000010u, c->r[2]);
    c->r[2] = mem_r8(ram, c->r[30] + 0x00000030u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_0882dd4c; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    { mem_w8(ram, c->r[2] + 0x00000039u, 0u); goto L_0882e2e0; }
L_0882dd4c:
    c->r[3] = mem_r8(ram, c->r[30] + 0x00000030u);
    c->r[2] = 0u + 0x00000001u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_0882dd6c; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0u + 0x00000001u;
    { mem_w8(ram, c->r[3] + 0x00000039u, c->r[2]); goto L_0882e2e0; }
L_0882dd6c:
    c->r[3] = mem_r8(ram, c->r[30] + 0x00000030u);
    c->r[2] = 0u + 0x00000002u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_0882e2e0; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000054u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_0882ddd4; }
    c->r[2] = mem_r8(ram, c->r[30] + 0x00000010u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_0882dda4; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0u + 0x00000003u;
    { mem_w8(ram, c->r[3] + 0x00000039u, c->r[2]); goto L_0882e2e0; }
L_0882dda4:
    c->r[3] = mem_r8(ram, c->r[30] + 0x00000010u);
    c->r[2] = 0u + 0x00000001u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_0882ddc4; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0u + 0x00000004u;
    { mem_w8(ram, c->r[3] + 0x00000039u, c->r[2]); goto L_0882e2e0; }
L_0882ddc4:
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0u + 0x00000002u;
    { mem_w8(ram, c->r[3] + 0x00000039u, c->r[2]); goto L_0882e2e0; }
L_0882ddd4:
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0u + 0x00000002u;
    { mem_w8(ram, c->r[3] + 0x00000039u, c->r[2]); goto L_0882e2e0; }
L_0882dde4:
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x0882ddf0u; c->r[4] = c->r[4] + 0x00000af4u; func_089ca23c(c, ram); }
    c->r[2] = c->r[30] + 0x00000040u;
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00002e04u;
    { c->r[31] = 0x0882de04u; c->r[5] = c->r[2] + 0u; func_08813174(c, ram); }
    c->r[2] = 0u + 0x00000002u;
    mem_w8(ram, c->r[30] + 0x00000040u, c->r[2]);
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x0882de18u; c->r[4] = c->r[4] + 0x00000af4u; func_0880d294(c, ram); }
    { int _c = (c->r[2] != 0u); if (_c) goto L_0882de88; }
    c->r[2] = 0u + 0x0000000du;
    mem_w8(ram, c->r[30] + 0x00000044u, c->r[2]);
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x0882de34u; c->r[4] = c->r[4] + 0x00000af4u; func_0880d380(c, ram); }
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x0882de40u; c->r[5] = 0u + 0x00000001u; func_0896948c(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000058u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000058u);
    { int _c = ((s32)c->r[2] < 0); if (_c) goto L_0882dea4; }
    c->r[2] = mem_r8(ram, c->r[30] + 0x00000040u);
    c->r[2] = c->r[2] | 0x0004u;
    mem_w8(ram, c->r[30] + 0x00000040u, c->r[2]);
    c->r[2] = mem_r8(ram, c->r[30] + 0x00000058u);
    mem_w8(ram, c->r[30] + 0x00000045u, c->r[2]);
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[30] + 0x00000045u);
    c->r[2] = 0u + 0x00000001u;
    c->r[3] = c->r[2] << (c->r[3] & 31u);
    c->r[2] = 0x08a80000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000e40u);
    c->r[2] = c->r[2] | c->r[3];
    c->r[1] = 0x08a80000u;
    { mem_w32(ram, c->r[1] + 0x00000e40u, c->r[2]); goto L_0882dea4; }
L_0882de88:
    c->r[2] = mem_r8(ram, c->r[30] + 0x00000040u);
    c->r[2] = c->r[2] | 0x0001u;
    mem_w8(ram, c->r[30] + 0x00000040u, c->r[2]);
    c->r[2] = 0u + 0x00000002u;
    mem_w8(ram, c->r[30] + 0x00000043u, c->r[2]);
    c->r[2] = 0u + 0x0000000eu;
    mem_w8(ram, c->r[30] + 0x00000044u, c->r[2]);
L_0882dea4:
    { c->r[31] = 0x0882deacu; c->r[4] = 0u + 0u; func_0880b09c(c, ram); }
    c->r[2] = c->r[30] + 0x00000040u;
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00002e04u;
    c->r[5] = 0u + 0x00000018u;
    { c->r[31] = 0x0882dec4u; c->r[6] = c->r[2] + 0u; func_08813280(c, ram); }
    { c->r[31] = 0x0882deccu; c->r[4] = 0u + 0u; func_0896a084(c, ram); }
    { c->r[31] = 0x0882ded4u; func_0885d97c(c, ram); }
    { goto L_0882e2e0; }
L_0882dedc:
    { c->r[31] = 0x0882dee4u; c->r[4] = 0u + 0x00000001u; func_089c5e18(c, ram); }
    { int _c = (c->r[2] == 0u); if (_c) goto L_0882defc; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0u + 0x0000000eu;
    { mem_w8(ram, c->r[3] + 0x00000038u, c->r[2]); goto L_0882e2e0; }
L_0882defc:
    { c->r[31] = 0x0882df04u; c->r[4] = 0u + 0x00000001u; func_089c5f10(c, ram); }
    { int _c = (c->r[2] == 0u); if (_c) goto L_0882e2e0; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0u + 0x0000000bu;
    { mem_w8(ram, c->r[3] + 0x00000038u, c->r[2]); goto L_0882e2e0; }
L_0882df1c:
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x0882df28u; c->r[4] = c->r[4] + 0x00000af4u; func_089ca23c(c, ram); }
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x0882df34u; c->r[4] = c->r[4] + 0x00000af4u; func_0880d294(c, ram); }
    { int _c = (c->r[2] != 0u); if (_c) goto L_0882dfe8; }
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x0882df48u; c->r[4] = c->r[4] + 0x00000af4u; func_0880d380(c, ram); }
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x0882df54u; c->r[5] = 0u + 0x00000001u; func_0896948c(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000058u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000058u);
    { int _c = ((s32)c->r[2] < 0); if (_c) goto L_0882dfc4; }
    c->r[2] = c->r[30] + 0x00000040u;
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00002e04u;
    { c->r[31] = 0x0882df78u; c->r[5] = c->r[2] + 0u; func_08813174(c, ram); }
    c->r[2] = 0u + 0x00000002u;
    mem_w8(ram, c->r[30] + 0x00000040u, c->r[2]);
    c->r[2] = 0u + 0x0000000du;
    mem_w8(ram, c->r[30] + 0x00000044u, c->r[2]);
    c->r[2] = mem_r8(ram, c->r[30] + 0x00000040u);
    c->r[2] = c->r[2] | 0x0004u;
    mem_w8(ram, c->r[30] + 0x00000040u, c->r[2]);
    c->r[2] = mem_r8(ram, c->r[30] + 0x00000058u);
    mem_w8(ram, c->r[30] + 0x00000045u, c->r[2]);
    { c->r[31] = 0x0882dfa4u; c->r[4] = 0u + 0u; func_0880b09c(c, ram); }
    c->r[2] = c->r[30] + 0x00000040u;
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00002e04u;
    c->r[5] = 0u + 0x00000015u;
    { c->r[31] = 0x0882dfbcu; c->r[6] = c->r[2] + 0u; func_08813280(c, ram); }
    { goto L_0882e004; }
L_0882dfc4:
    { c->r[31] = 0x0882dfccu; c->r[4] = 0u + 0u; func_0880b09c(c, ram); }
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00002e04u;
    c->r[5] = 0u + 0x0000000du;
    { c->r[31] = 0x0882dfe0u; c->r[6] = 0u + 0u; func_08813280(c, ram); }
    { goto L_0882e004; }
L_0882dfe8:
    { c->r[31] = 0x0882dff0u; c->r[4] = 0u + 0u; func_0880b09c(c, ram); }
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00002e04u;
    c->r[5] = 0u + 0x0000000eu;
    { c->r[31] = 0x0882e004u; c->r[6] = 0u + 0u; func_08813280(c, ram); }
L_0882e004:
    { c->r[31] = 0x0882e00cu; c->r[4] = 0u + 0u; func_0896a084(c, ram); }
    { c->r[31] = 0x0882e014u; func_0885d97c(c, ram); }
    { goto L_0882e2e0; }
L_0882e01c:
    { c->r[31] = 0x0882e024u; c->r[4] = 0u + 0u; func_0880b09c(c, ram); }
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00002e04u;
    c->r[5] = 0u + 0x0000000cu;
    { c->r[31] = 0x0882e038u; c->r[6] = 0u + 0u; func_08813280(c, ram); }
    { c->r[31] = 0x0882e040u; func_0885d97c(c, ram); }
    { goto L_0882e2e0; }
L_0882e048:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x00000010u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000ac8u;
    { c->r[31] = 0x0882e064u; c->r[5] = c->r[2] + 0u; func_089cb820(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000058u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000058u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_0882e088; }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000058u);
    c->r[6] = 0u + 0x00000021u;
    { c->r[31] = 0x0882e088u; c->r[7] = 0u + 0u; func_089c34ac(c, ram); }
L_0882e088:
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0u + 0x0000000fu;
    mem_w8(ram, c->r[3] + 0x0000003du, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0u + 0x00000006u;
    { mem_w8(ram, c->r[3] + 0x00000038u, c->r[2]); goto L_0882e2e0; }
L_0882e0a4:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x0000003du);
    { int _c = ((s32)c->r[2] > 0); if (_c) goto L_0882e16c; }
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x0882e0c0u; c->r[4] = c->r[4] + 0x00000af4u; func_0880d410(c, ram); }
    c->r[1] = 0x08a80000u;
    mem_w8(ram, c->r[1] + 0x00004638u, c->r[2]);
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x0882e0d4u; c->r[4] = c->r[4] + 0x00000af4u; func_08813c28(c, ram); }
    c->r[1] = 0x08a80000u;
    mem_w8(ram, c->r[1] + 0x00004639u, c->r[2]);
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x0882e0e8u; c->r[4] = c->r[4] + 0x00000af4u; func_08813c50(c, ram); }
    c->r[1] = 0x08a80000u;
    mem_w8(ram, c->r[1] + 0x0000463au, c->r[2]);
    c->r[2] = 0x08a40000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000171cu);
    mem_w32(ram, c->r[30] + 0x00000040u, c->r[2]);
    c->r[2] = 0x08a40000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00001720u);
    mem_w32(ram, c->r[30] + 0x00000044u, c->r[2]);
    c->r[2] = c->r[30] + 0x00000040u;
    c->r[4] = 0u + 0x0000000bu;
    c->r[5] = 0u + 0u;
    c->r[6] = 0u + 0u;
    c->r[7] = 0u + 0u;
    c->r[8] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x0882e128u; c->r[9] = c->r[2] + 0u; func_089c6bec(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000058u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000058u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_0882e15c; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[16] = c->r[2] + 0x00000034u;
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000ac8u;
    { c->r[31] = 0x0882e150u; c->r[5] = mem_r32(ram, c->r[30] + 0x00000058u); func_089cb780(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000060u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000060u);
    mem_w32(ram, c->r[16] + 0x00000000u, c->r[2]);
L_0882e15c:
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0u + 0x0000000au;
    { mem_w8(ram, c->r[3] + 0x00000038u, c->r[2]); goto L_0882e2e0; }
L_0882e16c:
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r8(ram, c->r[2] + 0x0000003du);
    c->r[2] = c->r[2] + 0xffffffffu;
    { mem_w8(ram, c->r[3] + 0x0000003du, c->r[2]); goto L_0882e2e0; }
L_0882e184:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x00000034u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000ac8u;
    { c->r[31] = 0x0882e1a0u; c->r[5] = c->r[2] + 0u; func_089cb820(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000058u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000058u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_0882e2e0; }
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x0882e1bcu; c->r[4] = c->r[4] + 0x00000af4u; func_0880d410(c, ram); }
    { int _c = ((s32)c->r[2] >= 0); if (_c) goto L_0882e228; }
    c->r[2] = 0x08a80000u;
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00004638u);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000af4u;
    { c->r[31] = 0x0882e1dcu; c->r[5] = c->r[2] + 0u; func_0880d438(c, ram); }
    c->r[2] = 0x08a80000u;
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00004639u);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000af4u;
    { c->r[31] = 0x0882e1f4u; c->r[5] = c->r[2] + 0u; func_0880d46c(c, ram); }
    c->r[2] = 0x08a80000u;
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x0000463au);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000af4u;
    { c->r[31] = 0x0882e20cu; c->r[5] = c->r[2] + 0u; func_0880d4c8(c, ram); }
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0u + 0x0000000fu;
    mem_w8(ram, c->r[3] + 0x0000003du, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0u + 0x00000007u;
    { mem_w8(ram, c->r[3] + 0x00000038u, c->r[2]); goto L_0882e2e0; }
L_0882e228:
    { c->r[31] = 0x0882e230u; c->r[4] = 0u + 0u; func_0880b09c(c, ram); }
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00002e04u;
    c->r[5] = 0u + 0x0000000cu;
    { c->r[31] = 0x0882e244u; c->r[6] = 0u + 0u; func_08813280(c, ram); }
    { c->r[31] = 0x0882e24cu; func_0885d97c(c, ram); }
    { goto L_0882e2e0; }
L_0882e254:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x0000003du);
    { int _c = ((s32)c->r[2] > 0); if (_c) goto L_0882e274; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0u + 0x0000000bu;
    { mem_w8(ram, c->r[3] + 0x00000038u, c->r[2]); goto L_0882e2e0; }
L_0882e274:
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r8(ram, c->r[2] + 0x0000003du);
    c->r[2] = c->r[2] + 0xffffffffu;
    { mem_w8(ram, c->r[3] + 0x0000003du, c->r[2]); goto L_0882e2e0; }
L_0882e28c:
    { c->r[31] = 0x0882e294u; func_0885d97c(c, ram); }
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0u + 0x0000000fu;
    mem_w8(ram, c->r[3] + 0x0000003du, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0u + 0x00000005u;
    { mem_w8(ram, c->r[3] + 0x00000038u, c->r[2]); goto L_0882e2e0; }
L_0882e2b0:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x0000003du);
    { int _c = ((s32)c->r[2] > 0); if (_c) goto L_0882e2cc; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    { mem_w8(ram, c->r[2] + 0x00000038u, 0u); goto L_0882e2e0; }
L_0882e2cc:
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r8(ram, c->r[2] + 0x0000003du);
    c->r[2] = c->r[2] + 0xffffffffu;
    mem_w8(ram, c->r[3] + 0x0000003du, c->r[2]);
L_0882e2e0:
    { c->r[31] = 0x0882e2e8u; func_0885d884(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000058u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000058u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_0882e304; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0u + 0x00000001u;
    mem_w8(ram, c->r[3] + 0x0000003bu, c->r[2]);
L_0882e304:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    mem_w32(ram, c->r[2] + 0x00000028u, 0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x0000003bu);
    { int _c = (c->r[2] == 0u); if (_c) goto L_0882e384; }
    c->r[16] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x0882e32cu; c->r[4] = c->r[4] + 0x00000af4u; func_0882ea84(c, ram); }
    mem_w32(ram, c->r[16] + 0x00000014u, c->r[2]);
    mem_w32(ram, c->r[30] + 0x00000054u, 0u);
L_0882e334:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000054u);
    c->r[2] = ((s32)c->r[2] < (s32)0x0000000au) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_0882e34c; }
    { goto L_0882e424; }
L_0882e34c:
    c->r[17] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[16] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[4] = 0x08a90000u;
    c->r[4] = c->r[4] + 0xffff9720u;
    { c->r[31] = 0x0882e364u; c->r[5] = mem_r32(ram, c->r[30] + 0x00000054u); func_0882eb5c(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = mem_r32(ram, c->r[16] + 0x00000028u);
    c->r[2] = c->r[2] + c->r[3];
    mem_w32(ram, c->r[17] + 0x00000028u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000054u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000054u, c->r[2]); goto L_0882e334; }
L_0882e384:
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000014u);
    c->r[2] = c->r[2] + 0x00000003u;
    mem_w32(ram, c->r[3] + 0x00000014u, c->r[2]);
    mem_w32(ram, c->r[30] + 0x00000054u, 0u);
L_0882e39c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000054u);
    c->r[2] = ((s32)c->r[2] < (s32)0x0000000au) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_0882e3b4; }
    { goto L_0882e3ec; }
L_0882e3b4:
    c->r[17] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[16] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[4] = 0x08a90000u;
    c->r[4] = c->r[4] + 0xffff9720u;
    { c->r[31] = 0x0882e3ccu; c->r[5] = mem_r32(ram, c->r[30] + 0x00000054u); func_0882eaac(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = mem_r32(ram, c->r[16] + 0x00000028u);
    c->r[2] = c->r[2] + c->r[3];
    mem_w32(ram, c->r[17] + 0x00000028u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000054u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000054u, c->r[2]); goto L_0882e39c; }
L_0882e3ec:
    c->r[16] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x0882e3fcu; c->r[4] = c->r[4] + 0x00000af4u; func_0882ea84(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = mem_r32(ram, c->r[16] + 0x00000014u);
    c->r[2] = (c->r[3] < c->r[2]) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_0882e424; }
    c->r[16] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x0882e420u; c->r[4] = c->r[4] + 0x00000af4u; func_0882ea84(c, ram); }
    mem_w32(ram, c->r[16] + 0x00000014u, c->r[2]);
L_0882e424:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000ac8u;
    { c->r[31] = 0x0882e43cu; c->r[5] = c->r[2] + 0u; func_089cb820(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000054u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x00000004u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000ac8u;
    { c->r[31] = 0x0882e45cu; c->r[5] = c->r[2] + 0u; func_089cb820(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x00000008u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000ac8u;
    { c->r[31] = 0x0882e47cu; c->r[5] = c->r[2] + 0u; func_089cb820(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x0000000cu;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000ac8u;
    { c->r[31] = 0x0882e49cu; c->r[5] = c->r[2] + 0u; func_089cb820(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000064u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000054u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_0882e4b4; }
    { c->r[31] = 0x0882e4b4u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u); func_0882c604(c, ram); }
L_0882e4b4:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_0882e4c8; }
    { c->r[31] = 0x0882e4c8u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u); func_0882c8a8(c, ram); }
L_0882e4c8:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_0882e4dc; }
    { c->r[31] = 0x0882e4dcu; c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u); func_0882c98c(c, ram); }
L_0882e4dc:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000064u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_0882ea18; }
    { c->r[31] = 0x0882e4f0u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u); func_0882cb44(c, ram); }
    { goto L_0882ea18; }
L_0882e4f8:
    { c->r[31] = 0x0882e500u; c->r[4] = 0u + 0u; func_0892459c(c, ram); }
    { c->r[31] = 0x0882e508u; c->r[4] = 0u + 0x00000002u; func_08924620(c, ram); }
    { goto L_0882ea18; }
L_0882e510:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_0882ea18; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    mem_w32(ram, c->r[30] + 0x00000064u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000064u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x00000004u);
    c->r[2] = 0u + 0x00000002u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_0882e628; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000064u);
    c->r[3] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x00000008u);
    c->r[2] = 0u + 0x0000003fu;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_0882e568; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000064u);
    c->r[3] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x00000008u);
    c->r[2] = 0u + 0x0000009fu;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_0882e568; }
    { goto L_0882e5d0; }
L_0882e568:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000064u);
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x0000000au);
    { int _c = (c->r[2] != 0u); if (_c) goto L_0882e588; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0u + 0x0000000du;
    { mem_w8(ram, c->r[3] + 0x00000038u, c->r[2]); goto L_0882ea18; }
L_0882e588:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000064u);
    c->r[3] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x0000000au);
    c->r[2] = 0u + 0x00000001u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_0882ea18; }
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x0882e5a8u; c->r[4] = c->r[4] + 0x00000af4u; func_0880d294(c, ram); }
    { int _c = (c->r[2] != 0u); if (_c) goto L_0882e5c0; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0u + 0x0000000fu;
    { mem_w8(ram, c->r[3] + 0x00000038u, c->r[2]); goto L_0882ea18; }
L_0882e5c0:
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0u + 0x0000000eu;
    { mem_w8(ram, c->r[3] + 0x00000038u, c->r[2]); goto L_0882ea18; }
L_0882e5d0:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000064u);
    c->r[3] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x00000008u);
    c->r[2] = 0u + 0x00000017u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_0882ea18; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000064u);
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x0000000au);
    { int _c = (c->r[2] != 0u); if (_c) goto L_0882e604; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0u + 0x00000010u;
    { mem_w8(ram, c->r[3] + 0x00000038u, c->r[2]); goto L_0882ea18; }
L_0882e604:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000064u);
    c->r[3] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x0000000au);
    c->r[2] = 0u + 0x00000001u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_0882ea18; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0u + 0x00000011u;
    { mem_w8(ram, c->r[3] + 0x00000038u, c->r[2]); goto L_0882ea18; }
L_0882e628:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000064u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x00000004u);
    c->r[2] = 0u + 0x00000003u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_0882ea18; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000064u);
    c->r[3] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x00000008u);
    c->r[2] = 0u + 0x0000003fu;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_0882e66c; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000064u);
    c->r[3] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x00000008u);
    c->r[2] = 0u + 0x0000009fu;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_0882e66c; }
    { goto L_0882e67c; }
L_0882e66c:
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0u + 0x00000012u;
    { mem_w8(ram, c->r[3] + 0x00000038u, c->r[2]); goto L_0882ea18; }
L_0882e67c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000064u);
    c->r[3] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x00000008u);
    c->r[2] = 0u + 0x00000017u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_0882ea18; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0u + 0x0000000cu;
    { mem_w8(ram, c->r[3] + 0x00000038u, c->r[2]); goto L_0882ea18; }
L_0882e6a0:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000038u);
    mem_w32(ram, c->r[30] + 0x00000078u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000078u);
    c->r[2] = (c->r[3] < 0x00000012u) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_0882ea18; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000078u);
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08a40000u;
    c->r[2] = c->r[2] + 0x00001868u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    { u32 _t = c->r[2]; switch (_t) { case 0x0882d1dcu: goto L_0882d1dc; case 0x0882d248u: goto L_0882d248; case 0x0882d354u: goto L_0882d354; case 0x0882d390u: goto L_0882d390; case 0x0882d414u: goto L_0882d414; case 0x0882d498u: goto L_0882d498; case 0x0882d520u: goto L_0882d520; case 0x0882d544u: goto L_0882d544; case 0x0882d5a4u: goto L_0882d5a4; case 0x0882d5d0u: goto L_0882d5d0; case 0x0882d7c4u: goto L_0882d7c4; case 0x0882d814u: goto L_0882d814; case 0x0882d86cu: goto L_0882d86c; case 0x0882d99cu: goto L_0882d99c; case 0x0882da98u: goto L_0882da98; case 0x0882dbd8u: goto L_0882dbd8; case 0x0882dca0u: goto L_0882dca0; case 0x0882dde4u: goto L_0882dde4; case 0x0882dedcu: goto L_0882dedc; case 0x0882df1cu: goto L_0882df1c; case 0x0882e01cu: goto L_0882e01c; case 0x0882e048u: goto L_0882e048; case 0x0882e0a4u: goto L_0882e0a4; case 0x0882e184u: goto L_0882e184; case 0x0882e254u: goto L_0882e254; case 0x0882e28cu: goto L_0882e28c; case 0x0882e2b0u: goto L_0882e2b0; case 0x0882e2e0u: goto L_0882e2e0; case 0x0882e4f8u: goto L_0882e4f8; case 0x0882e510u: goto L_0882e510; case 0x0882e6a0u: goto L_0882e6a0; case 0x0882e6dcu: goto L_0882e6dc; case 0x0882e764u: goto L_0882e764; case 0x0882e7d4u: goto L_0882e7d4; case 0x0882e814u: goto L_0882e814; case 0x0882e854u: goto L_0882e854; case 0x0882e8a8u: goto L_0882e8a8; case 0x0882e8f4u: goto L_0882e8f4; case 0x0882e940u: goto L_0882e940; case 0x0882e95cu: goto L_0882e95c; case 0x0882e978u: goto L_0882e978; case 0x0882e9a0u: goto L_0882e9a0; case 0x0882e9e0u: goto L_0882e9e0; case 0x0882ea18u: goto L_0882ea18; default: recomp_trap_unknown_indirect(c, ram, 0x0882e6d4u, _t); return; } }
L_0882e6dc:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x00000030u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000ac8u;
    { c->r[31] = 0x0882e6f8u; c->r[5] = c->r[2] + 0u; func_089cb820(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000064u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000064u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_0882e724; }
    c->r[4] = 0x08a40000u;
    c->r[4] = c->r[4] + 0x00001724u;
    c->r[5] = 0u + 0u;
    { c->r[31] = 0x0882e71cu; c->r[6] = 0u + 0xffffffffu; func_08928cb8(c, ram); }
    { goto L_0882ea18; }
L_0882e724:
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00001730u);
    c->r[4] = 0x08a70000u;
    c->r[4] = c->r[4] + 0xffffb640u;
    { c->r[31] = 0x0882e73cu; c->f[12] = c->f[0]; func_089f1210(c, ram); }
    c->r[4] = 0x08a40000u;
    c->r[4] = c->r[4] + 0x00001724u;
    c->r[5] = 0u + 0x000013e0u;
    { c->r[31] = 0x0882e750u; c->r[6] = 0u + 0x00000001u; func_08928cb8(c, ram); }
    c->r[4] = 0x08a70000u;
    { c->r[31] = 0x0882e75cu; c->r[4] = c->r[4] + 0xffffb640u; func_089f147c(c, ram); }
    { goto L_0882ea18; }
L_0882e764:
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00001730u);
    c->r[4] = 0x08a70000u;
    c->r[4] = c->r[4] + 0xffffb640u;
    { c->r[31] = 0x0882e77cu; c->f[12] = c->f[0]; func_089f1210(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000018u);
    { int _c = ((s32)c->r[2] >= 0); if (_c) goto L_0882e7a8; }
    c->r[4] = 0x08a40000u;
    c->r[4] = c->r[4] + 0x00001724u;
    c->r[5] = 0u + 0x000013e0u;
    { c->r[31] = 0x0882e7a0u; c->r[6] = 0u + 0x00000001u; func_08928cb8(c, ram); }
    { goto L_0882e7c0; }
L_0882e7a8:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[4] = 0x08a40000u;
    c->r[4] = c->r[4] + 0x00001724u;
    c->r[5] = mem_r32(ram, c->r[2] + 0x00000018u);
    { c->r[31] = 0x0882e7c0u; c->r[6] = 0u + 0u; func_08928cb8(c, ram); }
L_0882e7c0:
    c->r[4] = 0x08a70000u;
    { c->r[31] = 0x0882e7ccu; c->r[4] = c->r[4] + 0xffffb640u; func_089f147c(c, ram); }
    { goto L_0882ea18; }
L_0882e7d4:
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00001730u);
    c->r[4] = 0x08a70000u;
    c->r[4] = c->r[4] + 0xffffb640u;
    { c->r[31] = 0x0882e7ecu; c->f[12] = c->f[0]; func_089f1210(c, ram); }
    c->r[4] = 0x08a40000u;
    c->r[4] = c->r[4] + 0x00001724u;
    c->r[5] = 0u + 0x000013e0u;
    { c->r[31] = 0x0882e800u; c->r[6] = 0u + 0u; func_08928cb8(c, ram); }
    c->r[4] = 0x08a70000u;
    { c->r[31] = 0x0882e80cu; c->r[4] = c->r[4] + 0xffffb640u; func_089f147c(c, ram); }
    { goto L_0882ea18; }
L_0882e814:
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00001730u);
    c->r[4] = 0x08a70000u;
    c->r[4] = c->r[4] + 0xffffb640u;
    { c->r[31] = 0x0882e82cu; c->f[12] = c->f[0]; func_089f1210(c, ram); }
    c->r[4] = 0x08a40000u;
    c->r[4] = c->r[4] + 0x00001724u;
    c->r[5] = 0u + 0u;
    { c->r[31] = 0x0882e840u; c->r[6] = 0u + 0xffffffffu; func_08928cb8(c, ram); }
    c->r[4] = 0x08a70000u;
    { c->r[31] = 0x0882e84cu; c->r[4] = c->r[4] + 0xffffb640u; func_089f147c(c, ram); }
    { goto L_0882ea18; }
L_0882e854:
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00001730u);
    c->r[4] = 0x08a70000u;
    c->r[4] = c->r[4] + 0xffffb640u;
    { c->r[31] = 0x0882e86cu; c->f[12] = c->f[0]; func_089f1210(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000039u);
    mem_w32(ram, c->r[30] + 0x00000074u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000074u);
    c->r[2] = (c->r[3] < 0x00000005u) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_0882e98c; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000074u);
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08a40000u;
    c->r[2] = c->r[2] + 0x000018b0u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    { u32 _t = c->r[2]; switch (_t) { case 0x0882d1dcu: goto L_0882d1dc; case 0x0882d248u: goto L_0882d248; case 0x0882d354u: goto L_0882d354; case 0x0882d390u: goto L_0882d390; case 0x0882d414u: goto L_0882d414; case 0x0882d498u: goto L_0882d498; case 0x0882d520u: goto L_0882d520; case 0x0882d544u: goto L_0882d544; case 0x0882d5a4u: goto L_0882d5a4; case 0x0882d5d0u: goto L_0882d5d0; case 0x0882d7c4u: goto L_0882d7c4; case 0x0882d814u: goto L_0882d814; case 0x0882d86cu: goto L_0882d86c; case 0x0882d99cu: goto L_0882d99c; case 0x0882da98u: goto L_0882da98; case 0x0882dbd8u: goto L_0882dbd8; case 0x0882dca0u: goto L_0882dca0; case 0x0882dde4u: goto L_0882dde4; case 0x0882dedcu: goto L_0882dedc; case 0x0882df1cu: goto L_0882df1c; case 0x0882e01cu: goto L_0882e01c; case 0x0882e048u: goto L_0882e048; case 0x0882e0a4u: goto L_0882e0a4; case 0x0882e184u: goto L_0882e184; case 0x0882e254u: goto L_0882e254; case 0x0882e28cu: goto L_0882e28c; case 0x0882e2b0u: goto L_0882e2b0; case 0x0882e2e0u: goto L_0882e2e0; case 0x0882e4f8u: goto L_0882e4f8; case 0x0882e510u: goto L_0882e510; case 0x0882e6a0u: goto L_0882e6a0; case 0x0882e6dcu: goto L_0882e6dc; case 0x0882e764u: goto L_0882e764; case 0x0882e7d4u: goto L_0882e7d4; case 0x0882e814u: goto L_0882e814; case 0x0882e854u: goto L_0882e854; case 0x0882e8a8u: goto L_0882e8a8; case 0x0882e8f4u: goto L_0882e8f4; case 0x0882e940u: goto L_0882e940; case 0x0882e95cu: goto L_0882e95c; case 0x0882e978u: goto L_0882e978; case 0x0882e9a0u: goto L_0882e9a0; case 0x0882e9e0u: goto L_0882e9e0; case 0x0882ea18u: goto L_0882ea18; default: recomp_trap_unknown_indirect(c, ram, 0x0882e8a0u, _t); return; } }
L_0882e8a8:
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x0882e8b4u; c->r[4] = c->r[4] + 0x00000af4u; func_0880d294(c, ram); }
    { int _c = (c->r[2] != 0u); if (_c) goto L_0882e8d8; }
    c->r[4] = 0x08a40000u;
    c->r[4] = c->r[4] + 0x00001724u;
    c->r[5] = 0u + 0x000013feu;
    { c->r[31] = 0x0882e8d0u; c->r[6] = 0u + 0u; func_08928cb8(c, ram); }
    { goto L_0882e98c; }
L_0882e8d8:
    c->r[4] = 0x08a40000u;
    c->r[4] = c->r[4] + 0x00001724u;
    c->r[5] = 0u + 0x00001409u;
    { c->r[31] = 0x0882e8ecu; c->r[6] = 0u + 0u; func_08928cb8(c, ram); }
    { goto L_0882e98c; }
L_0882e8f4:
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x0882e900u; c->r[4] = c->r[4] + 0x00000af4u; func_0880d294(c, ram); }
    { int _c = (c->r[2] != 0u); if (_c) goto L_0882e924; }
    c->r[4] = 0x08a40000u;
    c->r[4] = c->r[4] + 0x00001724u;
    c->r[5] = 0u + 0x000013dau;
    { c->r[31] = 0x0882e91cu; c->r[6] = 0u + 0u; func_08928cb8(c, ram); }
    { goto L_0882e98c; }
L_0882e924:
    c->r[4] = 0x08a40000u;
    c->r[4] = c->r[4] + 0x00001724u;
    c->r[5] = 0u + 0x000013ebu;
    { c->r[31] = 0x0882e938u; c->r[6] = 0u + 0u; func_08928cb8(c, ram); }
    { goto L_0882e98c; }
L_0882e940:
    c->r[4] = 0x08a40000u;
    c->r[4] = c->r[4] + 0x00001724u;
    c->r[5] = 0u + 0x000013dbu;
    { c->r[31] = 0x0882e954u; c->r[6] = 0u + 0u; func_08928cb8(c, ram); }
    { goto L_0882e98c; }
L_0882e95c:
    c->r[4] = 0x08a40000u;
    c->r[4] = c->r[4] + 0x00001724u;
    c->r[5] = 0u + 0x000013dcu;
    { c->r[31] = 0x0882e970u; c->r[6] = 0u + 0u; func_08928cb8(c, ram); }
    { goto L_0882e98c; }
L_0882e978:
    c->r[4] = 0x08a40000u;
    c->r[4] = c->r[4] + 0x00001724u;
    c->r[5] = 0u + 0x000013ddu;
    { c->r[31] = 0x0882e98cu; c->r[6] = 0u + 0u; func_08928cb8(c, ram); }
L_0882e98c:
    c->r[4] = 0x08a70000u;
    { c->r[31] = 0x0882e998u; c->r[4] = c->r[4] + 0xffffb640u; func_089f147c(c, ram); }
    { goto L_0882ea18; }
L_0882e9a0:
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00001730u);
    c->r[4] = 0x08a70000u;
    c->r[4] = c->r[4] + 0xffffb640u;
    { c->r[31] = 0x0882e9b8u; c->f[12] = c->f[0]; func_089f1210(c, ram); }
    c->r[4] = 0x08a40000u;
    c->r[4] = c->r[4] + 0x00001724u;
    c->r[5] = 0u + 0x000013deu;
    { c->r[31] = 0x0882e9ccu; c->r[6] = 0u + 0u; func_08928cb8(c, ram); }
    c->r[4] = 0x08a70000u;
    { c->r[31] = 0x0882e9d8u; c->r[4] = c->r[4] + 0xffffb640u; func_089f147c(c, ram); }
    { goto L_0882ea18; }
L_0882e9e0:
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00001730u);
    c->r[4] = 0x08a70000u;
    c->r[4] = c->r[4] + 0xffffb640u;
    { c->r[31] = 0x0882e9f8u; c->f[12] = c->f[0]; func_089f1210(c, ram); }
    c->r[4] = 0x08a40000u;
    c->r[4] = c->r[4] + 0x00001724u;
    c->r[5] = 0u + 0u;
    { c->r[31] = 0x0882ea0cu; c->r[6] = 0u + 0xffffffffu; func_08928cb8(c, ram); }
    c->r[4] = 0x08a70000u;
    { c->r[31] = 0x0882ea18u; c->r[4] = c->r[4] + 0xffffb640u; func_089f147c(c, ram); }
L_0882ea18:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x0000008cu);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000088u);
    c->r[17] = mem_r32(ram, c->r[29] + 0x00000084u);
    c->r[16] = mem_r32(ram, c->r[29] + 0x00000080u);
    { c->r[29] = c->r[29] + 0x00000090u; return; }
    return; /* fell out of func_0882d1dc */
}

/* func_088314b0  0x088314b0..0x088314ec  60 bytes, source=fde */
void func_088314b0(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x088314b0u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = 0u + 0x0000000eu;
    c->r[6] = 0u + 0x0000000au;
    { c->r[31] = 0x088314d8u; c->r[7] = 0u + 0x00000002u; func_088310d4(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_088314b0 */
}

/* func_088333fc  0x088333fc..0x088334a0  164 bytes, source=fde */
void func_088333fc(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x088333fcu);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000008u;
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x08833424u; c->r[5] = 0u + 0u; func_0893b904(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000008u;
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x08833438u; c->r[5] = 0u + 0u; func_089385f4(c, ram); }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x08833444u; c->r[5] = 0u + 0u; func_0882f514(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000008u;
    { c->r[31] = 0x08833454u; c->r[4] = c->r[2] + 0u; func_08938064(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000008u;
    { c->r[31] = 0x08833464u; c->r[4] = c->r[2] + 0u; func_08938218(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000008u;
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0u + 0xffffffffu;
    { c->r[31] = 0x0883347cu; c->r[6] = 0u + 0u; func_0893a73c(c, ram); }
    { c->r[31] = 0x08833484u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u); func_0882f418(c, ram); }
    { c->r[31] = 0x0883348cu; c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u); func_08830474(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_088333fc */
}

/* func_088356e4  0x088356e4..0x088357ac  200 bytes, source=fde */
void func_088356e4(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x088356e4u);
    c->r[29] = c->r[29] + 0xffffffd0u;
    mem_w32(ram, c->r[29] + 0x00000024u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000020u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000008u;
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x0883570cu; c->r[5] = 0u + 0u; func_0893b904(c, ram); }
    { c->r[31] = 0x08835714u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u); func_08831578(c, ram); }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x08835720u; c->r[5] = 0u + 0x00000001u; func_0882f778(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000008u;
    { c->r[31] = 0x08835730u; c->r[4] = c->r[2] + 0u; func_08938064(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000008u;
    { c->r[31] = 0x08835740u; c->r[4] = c->r[2] + 0u; func_08938218(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000008u;
    { c->r[31] = 0x08835750u; c->r[4] = c->r[2] + 0u; func_089383f0(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000008u;
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0u + 0xffffffffu;
    { c->r[31] = 0x08835768u; c->r[6] = 0u + 0u; func_0893a73c(c, ram); }
    { c->r[31] = 0x08835770u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u); func_08830474(c, ram); }
    c->r[2] = c->r[30] + 0x00000010u;
    { c->r[31] = 0x0883577cu; c->r[4] = c->r[2] + 0u; func_0893a590(c, ram); }
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[30] + 0x00000010u);
    c->r[3] = (u32)(s32)(s16)mem_r16(ram, c->r[30] + 0x00000012u);
    c->r[4] = c->r[2] + 0u;
    c->r[5] = c->r[3] + 0u;
    c->r[6] = 0x00120000u;
    { c->r[31] = 0x08835798u; c->r[6] = c->r[6] | 0x0800u; func_0892566c(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000024u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000020u);
    { c->r[29] = c->r[29] + 0x00000030u; return; }
    return; /* fell out of func_088356e4 */
}

/* func_0883a434  0x0883a434..0x0883a5b4  384 bytes, source=fde */
void func_0883a434(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0883a434u);
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
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00001c64u);
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
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00001c64u);
    c->f[0] = c->f[1] * c->f[0];
    c->f[0] = c->f[2] + c->f[0];
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    c->r[2] = f2u(c->f[0]);
    mem_w16(ram, c->r[30] + 0x0000000eu, c->r[2]);
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[30] + 0x00000004u);
    c->f[0] = u2f(c->r[2]);
    c->f[1] = (f32)(s32)f2u(c->f[0]);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00001c64u);
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
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00001c64u);
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
    { c->r[31] = 0x0883a5a0u; c->r[8] = 0u + 0u; func_08929da0(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000024u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000020u);
    { c->r[29] = c->r[29] + 0x00000030u; return; }
    return; /* fell out of func_0883a434 */
}

/* func_0883c670  0x0883c670..0x0883c784  276 bytes, source=fde */
void func_0883c670(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0883c670u);
    c->r[29] = c->r[29] + 0xffffffd0u;
    mem_w32(ram, c->r[29] + 0x00000024u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000020u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = 0x88880000u;
    c->r[2] = c->r[2] | 0x8889u;
    alx_multu(c, c->r[3], c->r[2]);
    c->r[2] = c->hi;
    c->r[4] = c->r[2] >> 4;
    c->r[2] = 0x88880000u;
    c->r[2] = c->r[2] | 0x8889u;
    alx_multu(c, c->r[4], c->r[2]);
    c->r[2] = c->hi;
    c->r[3] = c->r[2] >> 5;
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 4;
    c->r[2] = c->r[2] - c->r[3];
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[4] - c->r[2];
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = 0x91a20000u;
    c->r[2] = c->r[2] | 0xb3c5u;
    alx_multu(c, c->r[3], c->r[2]);
    c->r[2] = c->hi;
    c->r[4] = c->r[2] >> 10;
    c->r[2] = 0x88880000u;
    c->r[2] = c->r[2] | 0x8889u;
    alx_multu(c, c->r[4], c->r[2]);
    c->r[2] = c->hi;
    c->r[3] = c->r[2] >> 5;
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 4;
    c->r[2] = c->r[2] - c->r[3];
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[4] - c->r[2];
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = c->r[2] >> 5;
    c->r[2] = 0x026d0000u;
    c->r[2] = c->r[2] | 0x60ddu;
    alx_multu(c, c->r[3], c->r[2]);
    c->r[2] = c->hi;
    c->r[4] = c->r[2] >> 5;
    c->r[2] = 0xd1b70000u;
    c->r[2] = c->r[2] | 0x1759u;
    alx_multu(c, c->r[4], c->r[2]);
    c->r[2] = c->hi;
    c->r[3] = c->r[2] >> 13;
    c->r[2] = 0u + 0x00002710u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[2] = c->lo;
    c->r[2] = c->r[4] - c->r[2];
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = 0x08a40000u;
    c->r[5] = c->r[5] + 0x00001d70u;
    c->r[6] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[7] = mem_r32(ram, c->r[30] + 0x0000000cu);
    { c->r[31] = 0x0883c770u; c->r[8] = mem_r32(ram, c->r[30] + 0x00000008u); func_08a1ad34(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000024u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000020u);
    { c->r[29] = c->r[29] + 0x00000030u; return; }
    return; /* fell out of func_0883c670 */
}

/* func_08846038  0x08846038..0x0884607c  68 bytes, source=sweep */
void func_08846038(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08846038u);
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
    return; /* fell out of func_08846038 */
}

/* func_08849cf0  0x08849cf0..0x08849d34  68 bytes, source=fde */
void func_08849cf0(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08849cf0u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[4] = 0x08a60000u;
    c->r[4] = c->r[4] + 0x00005260u;
    { c->r[31] = 0x08849d14u; c->r[5] = mem_r32(ram, c->r[30] + 0x00000000u); func_089d705c(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000010u);
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_08849cf0 */
}

/* func_0884ce9c  0x0884ce9c..0x0884d0b0  532 bytes, source=fde */
void func_0884ce9c(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0884ce9cu);
    c->r[29] = c->r[29] + 0xffffff00u;
    mem_w32(ram, c->r[29] + 0x000000f4u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x000000f0u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    c->r[2] = c->r[30] + 0x00000010u;
    { c->r[31] = 0x0884cec0u; c->r[4] = c->r[2] + 0u; func_08808240(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000024u);
    mem_wf32(ram, c->r[30] + 0x00000020u, c->f[0]);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000020u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00002640u);
    alx_c_cond_s(c, 12, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_0884cef0; }
    { goto L_0884cf00; }
L_0884cef0:
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00002640u);
    { mem_wf32(ram, c->r[30] + 0x00000020u, c->f[0]); goto L_0884cf30; }
L_0884cf00:
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000020u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00002644u);
    alx_c_cond_s(c, 12, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_0884cf24; }
    { goto L_0884cf30; }
L_0884cf24:
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00002644u);
    mem_wf32(ram, c->r[30] + 0x00000020u, c->f[0]);
L_0884cf30:
    { c->r[31] = 0x0884cf38u; c->f[12] = mem_rf32(ram, c->r[30] + 0x00000020u); func_08a0fb24(c, ram); }
    mem_wf32(ram, c->r[30] + 0x00000010u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->f[12] = mem_rf32(ram, c->r[2] + 0x00000020u);
    { c->r[31] = 0x0884cf50u; c->f[13] = mem_rf32(ram, c->r[3] + 0x00000028u); func_08a0fc44(c, ram); }
    mem_wf32(ram, c->r[30] + 0x00000014u, c->f[0]);
    c->r[2] = c->r[30] + 0x00000030u;
    { c->r[31] = 0x0884cf60u; c->r[4] = c->r[2] + 0u; func_08808260(c, ram); }
    c->r[2] = c->r[30] + 0x00000070u;
    { c->r[31] = 0x0884cf6cu; c->r[4] = c->r[2] + 0u; func_08808260(c, ram); }
    c->r[2] = c->r[30] + 0x000000b0u;
    { c->r[31] = 0x0884cf78u; c->r[4] = c->r[2] + 0u; func_08808260(c, ram); }
    c->r[2] = c->r[30] + 0x000000b0u;
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x0884cf88u; c->f[12] = mem_rf32(ram, c->r[30] + 0x00000014u); func_0884c858(c, ram); }
    c->r[2] = c->r[30] + 0x00000070u;
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x0884cf98u; c->f[12] = mem_rf32(ram, c->r[30] + 0x00000010u); func_0884c7c0(c, ram); }
    c->r[2] = c->r[30] + 0x00000030u;
    c->r[3] = c->r[30] + 0x000000b0u;
    c->r[4] = c->r[2] + 0u;
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000004u);
    { c->r[31] = 0x0884cfb0u; c->r[6] = c->r[3] + 0u; func_0884c6d4(c, ram); }
    c->r[2] = c->r[30] + 0x00000030u;
    c->r[3] = c->r[30] + 0x00000030u;
    c->r[6] = c->r[30] + 0x00000070u;
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x0884cfc8u; c->r[5] = c->r[3] + 0u; func_0884c6d4(c, ram); }
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000030u);
    mem_wf32(ram, c->r[30] + 0x00000020u, c->f[0]);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000020u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00002640u);
    alx_c_cond_s(c, 12, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_0884cff4; }
    { goto L_0884d004; }
L_0884cff4:
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00002640u);
    { mem_wf32(ram, c->r[30] + 0x00000020u, c->f[0]); goto L_0884d034; }
L_0884d004:
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000020u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00002644u);
    alx_c_cond_s(c, 12, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_0884d028; }
    { goto L_0884d034; }
L_0884d028:
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00002644u);
    mem_wf32(ram, c->r[30] + 0x00000020u, c->f[0]);
L_0884d034:
    { c->r[31] = 0x0884d03cu; c->f[12] = mem_rf32(ram, c->r[30] + 0x00000020u); func_08a0fa04(c, ram); }
    mem_wf32(ram, c->r[30] + 0x00000018u, c->f[0]);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000034u);
    c->f[0] = u2f(0u);
    alx_c_cond_s(c, 12, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_0884d060; }
    { goto L_0884d06c; }
L_0884d060:
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000018u);
    c->f[0] = -c->f[0];
    mem_wf32(ram, c->r[30] + 0x00000018u, c->f[0]);
L_0884d06c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_0884d09c; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    mem_w32(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    mem_w32(ram, c->r[3] + 0x00000004u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    mem_w32(ram, c->r[3] + 0x00000008u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    mem_w32(ram, c->r[3] + 0x0000000cu, c->r[2]);
L_0884d09c:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x000000f4u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x000000f0u);
    { c->r[29] = c->r[29] + 0x00000100u; return; }
    return; /* fell out of func_0884ce9c */
}

/* func_0884eff0  0x0884eff0..0x0884f888  2200 bytes, source=fde */
void func_0884eff0(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0884eff0u);
    c->r[29] = c->r[29] + 0xffffffc0u;
    mem_w32(ram, c->r[29] + 0x00000038u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000034u, c->r[30]);
    mem_w32(ram, c->r[29] + 0x00000030u, c->r[16]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w16(ram, c->r[30] + 0x00000008u, 0u);
    mem_w32(ram, c->r[30] + 0x0000000cu, 0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x0000008cu);
    c->r[2] = 0x00800000u;
    c->r[2] = c->r[3] & c->r[2];
    { int _c = (c->r[2] != 0u); if (_c) goto L_0884f034; }
    c->r[2] = mem_r16(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[2] | 0x0200u;
    mem_w16(ram, c->r[30] + 0x00000008u, c->r[2]);
L_0884f034:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r8(ram, c->r[2] + 0x000000c9u);
    c->r[2] = 0u + 0x00000003u;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_0884f0b0; }
    c->r[2] = 0x08a90000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0xffff8e50u);
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000084u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_0884f084; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r8(ram, c->r[2] + 0x00000084u);
    c->r[2] = mem_r16(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[3] | c->r[2];
    c->r[2] = c->r[2] << 16;
    c->r[2] = (u32)((s32)c->r[2] >> 16);
    { mem_w32(ram, c->r[30] + 0x00000020u, c->r[2]); goto L_0884f86c; }
L_0884f084:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000001u;
    mem_w32(ram, c->r[3] + 0x00000000u, c->r[2]);
    mem_w8(ram, c->r[4] + 0x00000084u, c->r[2]);
    c->r[2] = mem_r8(ram, c->r[4] + 0x00000084u);
    c->r[2] = c->r[2] & 0x00ffu;
    { mem_w32(ram, c->r[30] + 0x00000004u, c->r[2]); goto L_0884f184; }
L_0884f0b0:
    c->r[2] = 0u + 0x000000e0u;
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]);
    c->r[2] = mem_r16(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[2] | 0x0100u;
    mem_w16(ram, c->r[30] + 0x00000008u, c->r[2]);
    c->r[2] = 0x08a90000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0xffff8e50u);
    c->r[2] = c->r[2] + 0x00004c04u;
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000084u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_0884f104; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r8(ram, c->r[2] + 0x00000084u);
    c->r[2] = mem_r16(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[3] | c->r[2];
    c->r[2] = c->r[2] << 16;
    c->r[2] = (u32)((s32)c->r[2] >> 16);
    { mem_w32(ram, c->r[30] + 0x00000020u, c->r[2]); goto L_0884f86c; }
L_0884f104:
    c->r[2] = 0u + 0x00000001u;
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[2]);
L_0884f10c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = ((s32)c->r[2] < (s32)0x000000e0u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_0884f124; }
    { goto L_0884f14c; }
L_0884f124:
    { c->r[31] = 0x0884f12cu; c->r[4] = mem_r32(ram, c->r[30] + 0x00000004u); func_088504f8(c, ram); }
    { int _c = (c->r[2] == 0u); if (_c) goto L_0884f13c; }
    { goto L_0884f14c; }
L_0884f13c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000004u, c->r[2]); goto L_0884f10c; }
L_0884f14c:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = 0u + 0x000000e0u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_0884f170; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    mem_w8(ram, c->r[2] + 0x000000c9u, 0u);
    c->r[2] = 0u + 0xffffffffu;
    { mem_w32(ram, c->r[30] + 0x00000020u, c->r[2]); goto L_0884f86c; }
L_0884f170:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    mem_w32(ram, c->r[3] + 0x00000000u, c->r[2]);
    mem_w8(ram, c->r[4] + 0x00000084u, c->r[2]);
L_0884f184:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = c->r[2] << 2;
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[3] + c->r[2];
    c->r[16] = c->r[2] + 0x00000004u;
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000ac8u;
    { c->r[31] = 0x0884f1a8u; c->r[5] = mem_r32(ram, c->r[30] + 0x00000000u); func_089cb780(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    mem_w32(ram, c->r[16] + 0x00000000u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 4;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 2;
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = c->r[2] + 0x00000804u;
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0u + 0u;
    { c->r[31] = 0x0884f1e4u; c->r[6] = 0u + 0x00000044u; func_08a19ec4(c, ram); }
    c->r[4] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 4;
    c->r[2] = c->r[2] + c->r[3];
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[4];
    c->r[3] = c->r[2] + 0x00000834u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000020u);
    mem_wf32(ram, c->r[3] + 0x00000000u, c->f[0]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 4;
    c->r[2] = c->r[2] + c->r[3];
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[4];
    c->r[3] = c->r[2] + 0x00000838u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000024u);
    mem_wf32(ram, c->r[3] + 0x00000000u, c->f[0]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 4;
    c->r[2] = c->r[2] + c->r[3];
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[4];
    c->r[3] = c->r[2] + 0x0000083cu;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000028u);
    mem_wf32(ram, c->r[3] + 0x00000000u, c->f[0]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 4;
    c->r[2] = c->r[2] + c->r[3];
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[4];
    c->r[3] = c->r[2] + 0x00000830u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r8(ram, c->r[2] + 0x000000c9u);
    mem_w8(ram, c->r[3] + 0x00000010u, c->r[2]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 4;
    c->r[2] = c->r[2] + c->r[3];
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[4];
    c->r[3] = c->r[2] + 0x00000840u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000087u);
    mem_w8(ram, c->r[3] + 0x00000004u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r16(ram, c->r[2] + 0x000000c4u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_0884f3f4; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r16(ram, c->r[2] + 0x000000c6u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_0884f3f4; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r16(ram, c->r[2] + 0x000000c4u);
    c->r[2] = 0u + 0x0000006cu;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[3] = c->lo;
    c->r[2] = 0x08a70000u;
    c->r[2] = c->r[2] + 0xffffb6c0u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000010u);
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r16(ram, c->r[2] + 0x000000c6u);
    c->r[2] = 0u + 0x0000006cu;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[3] = c->lo;
    c->r[2] = 0x08a70000u;
    c->r[2] = c->r[2] + 0xffffb6c4u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000010u);
    mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_0884f368; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 4;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 2;
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = c->r[2] + 0x00000804u;
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x0884f368u; c->r[5] = mem_r32(ram, c->r[30] + 0x00000010u); func_08a1af70(c, ram); }
L_0884f368:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_0884f3a0; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 4;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 2;
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = c->r[2] + 0x00000814u;
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x0884f3a0u; c->r[5] = mem_r32(ram, c->r[30] + 0x00000018u); func_08a1af70(c, ram); }
L_0884f3a0:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000064u);
    mem_w32(ram, c->r[30] + 0x0000001cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    { int _c = (c->r[2] == 0u); if (_c) goto L_0884f3f4; }
    c->r[4] = 0x08a60000u;
    c->r[4] = c->r[4] + 0x00005260u;
    { c->r[31] = 0x0884f3c8u; c->r[5] = mem_r32(ram, c->r[30] + 0x0000001cu); func_089d6e20(c, ram); }
    c->r[5] = c->r[2] + 0u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 4;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 2;
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = c->r[2] + 0x00000824u;
    { c->r[31] = 0x0884f3f4u; c->r[4] = c->r[2] + 0u; func_08a1af70(c, ram); }
L_0884f3f4:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r8(ram, c->r[2] + 0x000000c9u);
    c->r[2] = c->r[2] + 0xfffffffdu;
    mem_w32(ram, c->r[30] + 0x00000028u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000028u);
    c->r[2] = (c->r[3] < 0x0000000cu) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_0884f6dc; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000028u);
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08a40000u;
    c->r[2] = c->r[2] + 0x000026f4u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    { u32 _t = c->r[2]; switch (_t) { case 0x0884f434u: goto L_0884f434; case 0x0884f56cu: goto L_0884f56c; case 0x0884f5d4u: goto L_0884f5d4; case 0x0884f6dcu: goto L_0884f6dc; default: recomp_trap_unknown_indirect(c, ram, 0x0884f42cu, _t); return; } }
L_0884f434:
    { c->r[31] = 0x0884f43cu; c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u); func_088994f0(c, ram); }
    mem_w32(ram, c->r[30] + 0x0000001cu, c->r[2]);
    { c->r[31] = 0x0884f448u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u); func_08899524(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 4;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 2;
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = c->r[2] + 0x00000804u;
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0u + 0u;
    { c->r[31] = 0x0884f47cu; c->r[6] = 0u + 0x00000010u; func_08a19ec4(c, ram); }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 4;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 2;
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = c->r[2] + 0x00000814u;
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0u + 0u;
    { c->r[31] = 0x0884f4acu; c->r[6] = 0u + 0x00000010u; func_08a19ec4(c, ram); }
    c->r[4] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 4;
    c->r[2] = c->r[2] + c->r[3];
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[4];
    c->r[3] = c->r[2] + 0x00000820u;
    c->r[2] = mem_r8(ram, c->r[30] + 0x0000001cu);
    mem_w8(ram, c->r[3] + 0x00000004u, c->r[2]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 4;
    c->r[2] = c->r[2] + c->r[3];
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[4];
    c->r[3] = c->r[2] + 0x00000821u;
    c->r[2] = mem_r8(ram, c->r[30] + 0x00000018u);
    mem_w8(ram, c->r[3] + 0x00000004u, c->r[2]);
    mem_w32(ram, c->r[30] + 0x00000010u, 0u);
L_0884f500:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = ((s32)c->r[2] < (s32)c->r[3]) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_0884f51c; }
    { goto L_0884f6dc; }
L_0884f51c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[3] = c->r[2] << 2;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[3] = c->r[2] << 6;
    c->r[2] = 0x08a90000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0xffff8e54u);
    c->r[16] = c->r[3] + c->r[2];
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x0884f548u; c->r[5] = mem_r32(ram, c->r[30] + 0x00000010u); func_088995a4(c, ram); }
    c->r[3] = c->r[16] + 0u;
    c->r[4] = c->r[3] + 0u;
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x0884f55cu; c->r[6] = 0u + 0x00000040u; func_08a19db8(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]); goto L_0884f500; }
L_0884f56c:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 4;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 2;
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = c->r[2] + 0x00000804u;
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0u + 0u;
    { c->r[31] = 0x0884f59cu; c->r[6] = 0u + 0x00000010u; func_08a19ec4(c, ram); }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 4;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 2;
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = c->r[2] + 0x00000814u;
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0u + 0u;
    { c->r[31] = 0x0884f5ccu; c->r[6] = 0u + 0x00000010u; func_08a19ec4(c, ram); }
    { goto L_0884f6dc; }
L_0884f5d4:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x000000e0u;
    mem_w32(ram, c->r[30] + 0x0000001cu, c->r[2]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 4;
    c->r[2] = c->r[2] + c->r[3];
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[4];
    c->r[3] = c->r[2] + 0x00000821u;
    c->r[2] = 0u + 0x00000002u;
    mem_w8(ram, c->r[3] + 0x00000004u, c->r[2]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 4;
    c->r[2] = c->r[2] + c->r[3];
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[4];
    c->r[3] = c->r[2] + 0x0000082fu;
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000055u);
    mem_w8(ram, c->r[3] + 0x00000004u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000055u);
    mem_w32(ram, c->r[30] + 0x00000024u, c->r[2]);
    c->r[2] = 0u + 0x0000000fu;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000024u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_0884f67c; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000024u);
    c->r[2] = ((s32)c->r[3] < (s32)0x0000000fu) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_0884f6dc; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000024u);
    c->r[3] = c->r[2] + 0xffffffe5u;
    c->r[2] = 0u + 0xffffffe5u;
    c->r[2] = c->r[2] + 0x0000001cu;
    c->r[2] = (c->r[2] < c->r[3]) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_0884f6dc; }
L_0884f67c:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 4;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 2;
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = c->r[2] + 0x00000804u;
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0u + 0u;
    { c->r[31] = 0x0884f6acu; c->r[6] = 0u + 0x00000010u; func_08a19ec4(c, ram); }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 4;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 2;
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = c->r[2] + 0x00000814u;
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0u + 0u;
    { c->r[31] = 0x0884f6dcu; c->r[6] = 0u + 0x00000010u; func_08a19ec4(c, ram); }
L_0884f6dc:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x0884f6e8u; c->r[5] = 0x00800000u; func_0885a338(c, ram); }
    { int _c = (c->r[2] == 0u); if (_c) goto L_0884f73c; }
    c->r[4] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 4;
    c->r[2] = c->r[2] + c->r[3];
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[4];
    c->r[5] = c->r[2] + 0x00000830u;
    c->r[4] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 4;
    c->r[2] = c->r[2] + c->r[3];
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[4];
    c->r[2] = c->r[2] + 0x00000830u;
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000011u);
    c->r[2] = c->r[2] | 0x0001u;
    mem_w8(ram, c->r[5] + 0x00000011u, c->r[2]);
L_0884f73c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r8(ram, c->r[2] + 0x000000c9u);
    mem_w32(ram, c->r[30] + 0x0000002cu, c->r[2]);
    c->r[2] = 0u + 0x0000000cu;
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000002cu);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_0884f854; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000002cu);
    c->r[2] = ((s32)c->r[3] < (s32)0x0000000du) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_0884f784; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000002cu);
    c->r[2] = c->r[3] + 0xffffffffu;
    c->r[2] = (c->r[2] < 0x00000003u) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_0884f794; }
    { goto L_0884f854; }
L_0884f784:
    c->r[2] = 0u + 0x0000000fu;
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000002cu);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_0884f854; }
L_0884f794:
    c->r[4] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 4;
    c->r[2] = c->r[2] + c->r[3];
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[4];
    c->r[5] = c->r[2] + 0x00000830u;
    c->r[4] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 4;
    c->r[2] = c->r[2] + c->r[3];
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[4];
    c->r[2] = c->r[2] + 0x00000830u;
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000011u);
    c->r[2] = c->r[2] | 0x0002u;
    mem_w8(ram, c->r[5] + 0x00000011u, c->r[2]);
    c->r[4] = 0x08a90000u;
    c->r[4] = c->r[4] + 0xffff90bcu;
    c->r[2] = mem_r32(ram, c->r[4] + 0x00000000u);
    c->r[3] = c->r[2] + 0u;
    c->r[3] = c->r[3] & 0x0001u;
    c->r[2] = c->r[2] + 0x00000001u;
    mem_w32(ram, c->r[4] + 0x00000000u, c->r[2]);
    c->r[2] = c->r[3] & 0x00ffu;
    { int _c = (c->r[2] == 0u); if (_c) goto L_0884f854; }
    c->r[4] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 4;
    c->r[2] = c->r[2] + c->r[3];
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[4];
    c->r[5] = c->r[2] + 0x00000830u;
    c->r[4] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 4;
    c->r[2] = c->r[2] + c->r[3];
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[4];
    c->r[2] = c->r[2] + 0x00000830u;
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000011u);
    c->r[2] = c->r[2] | 0x0004u;
    mem_w8(ram, c->r[5] + 0x00000011u, c->r[2]);
L_0884f854:
    c->r[3] = mem_r16(ram, c->r[30] + 0x00000008u);
    c->r[2] = mem_r16(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[3] | c->r[2];
    c->r[2] = c->r[2] << 16;
    c->r[2] = (u32)((s32)c->r[2] >> 16);
    mem_w32(ram, c->r[30] + 0x00000020u, c->r[2]);
L_0884f86c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000038u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000034u);
    c->r[16] = mem_r32(ram, c->r[29] + 0x00000030u);
    { c->r[29] = c->r[29] + 0x00000040u; return; }
    return; /* fell out of func_0884eff0 */
}

/* func_08854954  0x08854954..0x08854c28  724 bytes, source=fde */
void func_08854954(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08854954u);
    c->r[29] = c->r[29] + 0xffffffc0u;
    mem_w32(ram, c->r[29] + 0x00000034u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000030u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    { c->r[31] = 0x0885496cu; mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]); func_08853648(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[2]);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00002a3cu);
    c->r[1] = 0x08a90000u;
    mem_wf32(ram, c->r[1] + 0xffff90c4u, c->f[0]);
    c->r[2] = c->r[30] + 0x00000010u;
    { c->r[31] = 0x0885498cu; c->r[4] = c->r[2] + 0u; func_08808240(c, ram); }
    c->r[2] = c->r[30] + 0x00000010u;
    c->r[3] = c->r[30] + 0x00000008u;
    c->r[4] = c->r[2] + 0u;
    c->r[5] = c->r[3] + 0u;
    c->r[6] = mem_r32(ram, c->r[30] + 0x00000004u);
    { c->r[31] = 0x088549a8u; c->r[7] = mem_r32(ram, c->r[30] + 0x00000000u); func_08857638(c, ram); }
    c->r[2] = 0x08a90000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0xffff8c60u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_088549f8; }
    c->r[2] = 0u + 0x00000009u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[2]);
    c->r[2] = 0x08a90000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0xffff8c64u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_088549e4; }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000004u);
    { c->r[31] = 0x088549dcu; c->r[5] = 0u + 0x00000020u; func_0884d1b0(c, ram); }
    { goto L_08854a80; }
L_088549e4:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000004u);
    { c->r[31] = 0x088549f0u; c->r[5] = 0u + 0x00000020u; func_0884d1ec(c, ram); }
    { goto L_08854a80; }
L_088549f8:
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x08854a04u; c->r[4] = c->r[4] + 0x00000af4u; func_0880810c(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000020u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_08854a44; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    { int _c = ((s32)c->r[2] < 0); if (_c) goto L_08854a80; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[3] = c->r[2] + 0xfffffffcu;
    c->r[2] = 0u + 0xfffffffcu;
    c->r[2] = c->r[2] + 0x00000005u;
    c->r[2] = (c->r[2] < c->r[3]) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_08854a80; }
    { goto L_08854a70; }
L_08854a44:
    c->r[2] = 0x08a90000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0xffff90b8u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_08854a80; }
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00002a40u);
    c->r[1] = 0x08a90000u;
    mem_wf32(ram, c->r[1] + 0xffff90c4u, c->f[0]);
    c->r[2] = 0u + 0x0000000au;
    { mem_w32(ram, c->r[30] + 0x00000000u, c->r[2]); goto L_08854a80; }
L_08854a70:
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00002a44u);
    c->r[1] = 0x08a90000u;
    mem_wf32(ram, c->r[1] + 0xffff90c4u, c->f[0]);
L_08854a80:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08a50000u;
    c->r[2] = c->r[2] + 0x000038e4u;
    c->r[3] = c->r[3] + c->r[2];
    c->r[4] = c->r[30] + 0x00000010u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[2] + 0x00000040u;
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000008u);
    c->f[0] = c->f[0] + c->f[0];
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000000u);
    c->r[5] = c->r[2] + 0u;
    c->f[12] = c->f[0];
    { u32 _t = c->r[3]; c->r[31] = 0x08854abcu; c->r[6] = mem_r32(ram, c->r[30] + 0x00000000u); recomp_call_indirect(c, ram, 0x08854ab4u, _t); }
    c->r[2] = 0x08a90000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0xffff8cd0u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_08854b74; }
    c->r[2] = 0x08a90000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0xffff8cd0u);
    c->r[3] = c->r[2] + 0x00000020u;
    c->r[2] = 0x08a80000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0xffffbf30u);
    mem_w32(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[2] = 0x08a80000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0xffffbf34u);
    mem_w32(ram, c->r[3] + 0x00000004u, c->r[2]);
    c->r[2] = 0x08a80000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0xffffbf38u);
    mem_w32(ram, c->r[3] + 0x00000008u, c->r[2]);
    c->r[2] = 0x08a80000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0xffffbf3cu);
    mem_w32(ram, c->r[3] + 0x0000000cu, c->r[2]);
    c->r[2] = 0x08a90000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0xffff8cd0u);
    c->r[4] = c->r[2] + 0x00000040u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = c->r[2] + 0x00000040u;
    c->r[2] = mem_r32(ram, c->r[3] + 0x00000000u);
    mem_w32(ram, c->r[4] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[3] + 0x00000004u);
    mem_w32(ram, c->r[4] + 0x00000004u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[3] + 0x00000008u);
    mem_w32(ram, c->r[4] + 0x00000008u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[3] + 0x0000000cu);
    mem_w32(ram, c->r[4] + 0x0000000cu, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = 0u + 0x00000006u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_08854b64; }
    c->r[4] = 0x08a90000u;
    c->r[4] = mem_r32(ram, c->r[4] + 0xffff8cd0u);
    { c->r[31] = 0x08854b5cu; c->r[5] = 0u + 0x00000020u; func_0884d1b0(c, ram); }
    { goto L_08854b74; }
L_08854b64:
    c->r[4] = 0x08a90000u;
    c->r[4] = mem_r32(ram, c->r[4] + 0xffff8cd0u);
    { c->r[31] = 0x08854b74u; c->r[5] = 0u + 0x00000020u; func_0884d1ec(c, ram); }
L_08854b74:
    c->r[2] = 0x08a80000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00002f90u);
    c->r[3] = c->r[2] + 0x00000020u;
    c->r[2] = 0x08a80000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0xffffbf30u);
    mem_w32(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[2] = 0x08a80000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0xffffbf34u);
    mem_w32(ram, c->r[3] + 0x00000004u, c->r[2]);
    c->r[2] = 0x08a80000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0xffffbf38u);
    mem_w32(ram, c->r[3] + 0x00000008u, c->r[2]);
    c->r[2] = 0x08a80000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0xffffbf3cu);
    mem_w32(ram, c->r[3] + 0x0000000cu, c->r[2]);
    c->r[2] = 0x08a80000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00002f90u);
    c->r[2] = c->r[2] + 0x00000020u;
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0xffffbf30u;
    c->r[5] = 0x08a80000u;
    c->r[5] = c->r[5] + 0xffffbf30u;
    { c->r[31] = 0x08854bd4u; c->r[6] = c->r[2] + 0u; func_08820ca4(c, ram); }
    c->r[2] = 0x08a80000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00002f90u);
    c->r[2] = c->r[2] + 0x00000020u;
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0xffffbf40u;
    c->r[5] = 0x08a80000u;
    c->r[5] = c->r[5] + 0xffffbf40u;
    { c->r[31] = 0x08854bf8u; c->r[6] = c->r[2] + 0u; func_08820ca4(c, ram); }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = 0u + 0x00000004u;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_08854c14; }
    c->r[2] = 0u + 0x00000001u;
    c->r[1] = 0x08a90000u;
    mem_w32(ram, c->r[1] + 0xffff90c8u, c->r[2]);
L_08854c14:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000034u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000030u);
    { c->r[29] = c->r[29] + 0x00000040u; return; }
    return; /* fell out of func_08854954 */
}

/* func_08859940  0x08859940..0x08859a20  224 bytes, source=fde */
void func_08859940(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08859940u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_088599b4; }
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x08859970u; c->r[4] = c->r[4] + 0x00000330u; func_089d99c4(c, ram); }
    c->r[2] = ((s32)c->r[2] < (s32)0x000002e0u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_08859998; }
    c->r[4] = 0x08a40000u;
    c->r[4] = c->r[4] + 0x00002c88u;
    c->r[5] = 0u + 0x000015bdu;
    { c->r[31] = 0x08859990u; c->r[6] = 0u + 0x00000001u; func_08928cb8(c, ram); }
    { goto L_08859a0c; }
L_08859998:
    c->r[4] = 0x08a40000u;
    c->r[4] = c->r[4] + 0x00002c88u;
    c->r[5] = 0u + 0x000015b3u;
    { c->r[31] = 0x088599acu; c->r[6] = 0u + 0x00000001u; func_08928cb8(c, ram); }
    { goto L_08859a0c; }
L_088599b4:
    { c->r[31] = 0x088599bcu; c->r[4] = 0u + 0x00000001u; func_089c5e18(c, ram); }
    { int _c = (c->r[2] == 0u); if (_c) goto L_088599e0; }
    c->r[4] = 0x08a90000u;
    c->r[4] = c->r[4] + 0xffff9230u;
    c->r[5] = 0x08900000u;
    c->r[5] = c->r[5] + 0x00001d84u;
    c->r[6] = 0x08860000u;
    { c->r[31] = 0x088599e0u; c->r[6] = c->r[6] + 0xffff8aa8u; func_0880f1d4(c, ram); }
L_088599e0:
    { c->r[31] = 0x088599e8u; c->r[4] = 0u + 0x00000001u; func_089c5f10(c, ram); }
    { int _c = (c->r[2] == 0u); if (_c) goto L_08859a0c; }
    c->r[4] = 0x08a90000u;
    c->r[4] = c->r[4] + 0xffff9230u;
    c->r[5] = 0x08900000u;
    c->r[5] = c->r[5] + 0x00001bc0u;
    c->r[6] = 0x08860000u;
    { c->r[31] = 0x08859a0cu; c->r[6] = c->r[6] + 0xffff8fe8u; func_0880f1d4(c, ram); }
L_08859a0c:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_08859940 */
}

/* func_0885a8c0  0x0885a8c0..0x0885a908  72 bytes, source=sweep */
void func_0885a8c0(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0885a8c0u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_wf32(ram, c->r[30] + 0x00000004u, c->f[12]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000004u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000004u);
    mem_wf32(ram, c->r[2] + 0x00000000u, c->f[0]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000004u);
    c->r[2] = c->r[2] + 0x00000004u;
    mem_w32(ram, c->r[3] + 0x00000004u, c->r[2]);
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_0885a8c0 */
}

/* func_0885c9b0  0x0885c9b0..0x0885ccd8  808 bytes, source=fde */
void func_0885c9b0(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0885c9b0u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[2] = c->r[5] + 0u;
    mem_w8(ram, c->r[30] + 0x00000004u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r8(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[2] + c->r[3];
    c->r[2] = c->r[2] + 0x00000530u;
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000009u);
    c->r[2] = c->r[2] ^ 0x0001u;
    c->r[2] = c->r[2] & 0x0001u;
    c->r[2] = c->r[2] & 0x00ffu;
    { int _c = (c->r[2] == 0u); if (_c) goto L_0885c9fc; }
    { goto L_0885ccc4; }
L_0885c9fc:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r8(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[2] + c->r[3];
    c->r[2] = c->r[2] + 0x00000530u;
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000009u);
    c->r[2] = c->r[2] & 0x0004u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_0885ca60; }
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r8(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[2] = c->r[2] + 0x00000e40u;
    c->r[3] = mem_r16(ram, c->r[4] + 0x0000147eu);
    c->r[2] = mem_r16(ram, c->r[2] + 0x00000002u);
    c->r[2] = c->r[3] + c->r[2];
    mem_w16(ram, c->r[5] + 0x0000147eu, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r8(ram, c->r[2] + 0x00001489u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w8(ram, c->r[3] + 0x00001489u, c->r[2]); goto L_0885ccc4; }
L_0885ca60:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r8(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[3];
    c->r[2] = c->r[2] + 0x00001044u;
    c->r[3] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[2] = 0u + 0xffffffffu;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_0885cac8; }
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r8(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[2] = c->r[2] + 0x00000e40u;
    c->r[3] = mem_r16(ram, c->r[4] + 0x0000147eu);
    c->r[2] = mem_r16(ram, c->r[2] + 0x00000002u);
    c->r[2] = c->r[3] + c->r[2];
    mem_w16(ram, c->r[5] + 0x0000147eu, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r8(ram, c->r[2] + 0x00001489u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w8(ram, c->r[3] + 0x00001489u, c->r[2]); goto L_0885ccc4; }
L_0885cac8:
    c->r[2] = 0u + 0xffffffffu;
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]);
    mem_w32(ram, c->r[30] + 0x0000000cu, 0u);
L_0885cad4:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[2] + 0x000014a8u);
    c->r[2] = ((s32)c->r[3] < (s32)c->r[2]) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_0885caf4; }
    { goto L_0885cb48; }
L_0885caf4:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r8(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[3];
    c->r[4] = c->r[2] + 0x00001044u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[3];
    c->r[2] = c->r[2] + 0x00001444u;
    c->r[3] = mem_r32(ram, c->r[4] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_0885cb38; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    { mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]); goto L_0885cb48; }
L_0885cb38:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]); goto L_0885cad4; }
L_0885cb48:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = 0u + 0xffffffffu;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_0885cbd4; }
    mem_w32(ram, c->r[30] + 0x0000000cu, 0u);
L_0885cb5c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[2] + 0x000014a8u);
    c->r[2] = ((s32)c->r[3] < (s32)c->r[2]) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_0885cb7c; }
    { goto L_0885cbd4; }
L_0885cb7c:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r8(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[3];
    c->r[4] = c->r[2] + 0x00001044u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[3];
    c->r[2] = c->r[2] + 0x00001444u;
    c->r[4] = mem_r32(ram, c->r[4] + 0x00000000u);
    { c->r[31] = 0x0885cbb0u; c->r[5] = mem_r32(ram, c->r[2] + 0x00000000u); func_08a1aefc(c, ram); }
    { int _c = (c->r[2] != 0u); if (_c) goto L_0885cbc4; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    { mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]); goto L_0885cbd4; }
L_0885cbc4:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]); goto L_0885cb5c; }
L_0885cbd4:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = 0u + 0xffffffffu;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_0885cc4c; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x000014a8u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000009u) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_0885ccc4; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x000014a8u);
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[3];
    c->r[4] = c->r[2] + 0x00001444u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r8(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[3];
    c->r[2] = c->r[2] + 0x00001044u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    mem_w32(ram, c->r[4] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x000014a8u);
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x000014a8u);
    c->r[2] = c->r[2] + 0x00000001u;
    mem_w32(ram, c->r[3] + 0x000014a8u, c->r[2]);
L_0885cc4c:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[5] = c->r[2] + 0x00001460u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[4] = c->r[2] + 0x00001460u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r8(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[2] = c->r[2] + 0x00000e40u;
    c->r[3] = mem_r16(ram, c->r[4] + 0x0000000cu);
    c->r[2] = mem_r16(ram, c->r[2] + 0x00000002u);
    c->r[2] = c->r[3] + c->r[2];
    mem_w16(ram, c->r[5] + 0x0000000cu, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[4] = c->r[2] + 0x00001480u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = c->r[2] + 0x00001480u;
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000001u;
    mem_w8(ram, c->r[4] + 0x00000000u, c->r[2]);
L_0885ccc4:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_0885c9b0 */
}

/* func_08861864  0x08861864..0x08861934  208 bytes, source=sweep */
void func_08861864(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08861864u);
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
    return; /* fell out of func_08861864 */
}

/* func_08862aec  0x08862aec..0x08862c2c  320 bytes, source=sweep */
void func_08862aec(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08862aecu);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    c->r[2] = 0u + 0x00000002u;
    mem_w8(ram, c->r[30] + 0x00000008u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[2] + 0x00000001u;
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000000u);
    mem_w8(ram, c->r[30] + 0x00000009u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[2] + 0x00000001u;
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[2]);
    c->r[2] = mem_r8(ram, c->r[30] + 0x00000009u);
    c->r[2] = c->r[2] & 0x0001u;
    c->r[2] = c->r[2] & 0x00ffu;
    { int _c = (c->r[2] == 0u); if (_c) goto L_08862b68; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r16(ram, c->r[2] + 0x00000000u);
    mem_w16(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[2] + 0x00000002u;
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[2]);
    c->r[2] = mem_r8(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[2] + 0x00000002u;
    mem_w8(ram, c->r[30] + 0x00000008u, c->r[2]);
L_08862b68:
    c->r[2] = mem_r8(ram, c->r[30] + 0x00000009u);
    c->r[2] = c->r[2] & 0x0002u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_08862ba0; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r16(ram, c->r[2] + 0x00000000u);
    mem_w16(ram, c->r[3] + 0x00000002u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[2] + 0x00000002u;
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[2]);
    c->r[2] = mem_r8(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[2] + 0x00000002u;
    mem_w8(ram, c->r[30] + 0x00000008u, c->r[2]);
L_08862ba0:
    c->r[2] = mem_r8(ram, c->r[30] + 0x00000009u);
    c->r[2] = c->r[2] & 0x0004u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_08862bd8; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r16(ram, c->r[2] + 0x00000000u);
    mem_w16(ram, c->r[3] + 0x00000004u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[2] + 0x00000002u;
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[2]);
    c->r[2] = mem_r8(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[2] + 0x00000002u;
    mem_w8(ram, c->r[30] + 0x00000008u, c->r[2]);
L_08862bd8:
    c->r[2] = mem_r8(ram, c->r[30] + 0x00000009u);
    c->r[2] = c->r[2] & 0x0010u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_08862c18; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000000u);
    mem_w8(ram, c->r[3] + 0x00000006u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[2] + 0x00000001u;
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000000u);
    mem_w8(ram, c->r[3] + 0x00000007u, c->r[2]);
    c->r[2] = mem_r8(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[2] + 0x00000002u;
    mem_w8(ram, c->r[30] + 0x00000008u, c->r[2]);
L_08862c18:
    c->r[2] = mem_r8(ram, c->r[30] + 0x00000008u);
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_08862aec */
}

/* func_08866c50  0x08866c50..0x08866d18  200 bytes, source=fde */
void func_08866c50(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08866c50u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x08866c70u; c->r[4] = c->r[4] + 0x00000af4u; func_08826a78(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[3] & 0x00ffu;
    c->r[2] = (c->r[2] < 0x00000006u) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_08866d04; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[3] & 0x00ffu;
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08a40000u;
    c->r[2] = c->r[2] + 0x00003190u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    { u32 _t = c->r[2]; switch (_t) { case 0x08866cacu: goto L_08866cac; case 0x08866cbcu: goto L_08866cbc; case 0x08866cccu: goto L_08866ccc; case 0x08866cdcu: goto L_08866cdc; case 0x08866cecu: goto L_08866cec; case 0x08866cfcu: goto L_08866cfc; default: recomp_trap_unknown_indirect(c, ram, 0x08866ca4u, _t); return; } }
L_08866cac:
    { c->r[31] = 0x08866cb4u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u); func_088669d0(c, ram); }
    { goto L_08866d04; }
L_08866cbc:
    { c->r[31] = 0x08866cc4u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u); func_08866a00(c, ram); }
    { goto L_08866d04; }
L_08866ccc:
    { c->r[31] = 0x08866cd4u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u); func_08866a30(c, ram); }
    { goto L_08866d04; }
L_08866cdc:
    { c->r[31] = 0x08866ce4u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u); func_08866a60(c, ram); }
    { goto L_08866d04; }
L_08866cec:
    { c->r[31] = 0x08866cf4u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u); func_08866aa8(c, ram); }
    { goto L_08866d04; }
L_08866cfc:
    { c->r[31] = 0x08866d04u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u); func_08866af0(c, ram); }
L_08866d04:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_08866c50 */
}

/* func_0886ea88  0x0886ea88..0x0886eb68  224 bytes, source=fde */
void func_0886ea88(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0886ea88u);
    c->r[29] = c->r[29] + 0xffffffd0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    mem_wf32(ram, c->r[29] + 0x00000020u, c->f[20]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_wf32(ram, c->r[30] + 0x00000004u, c->f[12]);
    { c->r[31] = 0x0886eaacu; c->f[12] = mem_rf32(ram, c->r[30] + 0x00000004u); func_08a0f760(c, ram); }
    c->f[20] = c->f[0];
    { c->r[31] = 0x0886eab8u; c->f[12] = mem_rf32(ram, c->r[30] + 0x00000004u); func_08a0f5bc(c, ram); }
    c->f[1] = c->f[0];
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000034f8u);
    mem_wf32(ram, c->r[2] + 0x00000000u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    mem_w32(ram, c->r[2] + 0x00000004u, 0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    mem_w32(ram, c->r[2] + 0x00000008u, 0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    mem_w32(ram, c->r[2] + 0x0000000cu, 0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    mem_w32(ram, c->r[2] + 0x00000010u, 0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    mem_wf32(ram, c->r[2] + 0x00000014u, c->f[1]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    mem_wf32(ram, c->r[2] + 0x00000018u, c->f[20]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    mem_w32(ram, c->r[2] + 0x0000001cu, 0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    mem_w32(ram, c->r[2] + 0x00000020u, 0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->f[0] = -c->f[20];
    mem_wf32(ram, c->r[2] + 0x00000024u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    mem_wf32(ram, c->r[2] + 0x00000028u, c->f[1]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    mem_w32(ram, c->r[2] + 0x0000002cu, 0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    mem_w32(ram, c->r[2] + 0x00000030u, 0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    mem_w32(ram, c->r[2] + 0x00000034u, 0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    mem_w32(ram, c->r[2] + 0x00000038u, 0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000034f8u);
    mem_wf32(ram, c->r[2] + 0x0000003cu, c->f[0]);
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    c->f[20] = mem_rf32(ram, c->r[29] + 0x00000020u);
    { c->r[29] = c->r[29] + 0x00000030u; return; }
    return; /* fell out of func_0886ea88 */
}

/* func_08873408  0x08873408..0x088735b0  424 bytes, source=fde */
void func_08873408(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08873408u);
    c->r[29] = c->r[29] + 0xffffff40u;
    mem_w32(ram, c->r[29] + 0x000000b8u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x000000b4u, c->r[30]);
    mem_w32(ram, c->r[29] + 0x000000b0u, c->r[16]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    c->r[2] = c->r[30] + 0x00000010u;
    { c->r[31] = 0x08873430u; c->r[4] = c->r[2] + 0u; func_08808240(c, ram); }
    c->r[2] = c->r[30] + 0x00000020u;
    { c->r[31] = 0x0887343cu; c->r[4] = c->r[2] + 0u; func_08808240(c, ram); }
    c->r[2] = c->r[30] + 0x00000030u;
    { c->r[31] = 0x08873448u; c->r[4] = c->r[2] + 0u; func_08808240(c, ram); }
    c->r[2] = c->r[30] + 0x00000040u;
    { c->r[31] = 0x08873454u; c->r[4] = c->r[2] + 0u; func_08808240(c, ram); }
    { c->r[31] = 0x0887345cu; func_08867ab8(c, ram); }
    { c->r[31] = 0x08873464u; mem_w32(ram, c->r[30] + 0x00000050u, c->r[2]); func_08867ab8(c, ram); }
    c->r[2] = c->r[2] + 0x00000010u;
    { c->r[31] = 0x08873470u; mem_w32(ram, c->r[30] + 0x00000054u, c->r[2]); func_08867ab8(c, ram); }
    c->r[2] = c->r[2] + 0x00000020u;
    mem_w32(ram, c->r[30] + 0x00000058u, c->r[2]);
    c->r[2] = c->r[30] + 0x00000060u;
    c->r[3] = c->r[30] + 0x00000020u;
    c->r[7] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[4] = c->r[2] + 0u;
    c->r[5] = c->r[3] + 0u;
    c->r[6] = mem_r32(ram, c->r[30] + 0x00000050u);
    { c->r[31] = 0x08873498u; c->f[12] = mem_rf32(ram, c->r[7] + 0x00000130u); func_0886e3dc(c, ram); }
    c->r[2] = c->r[30] + 0x00000060u;
    c->r[3] = c->r[30] + 0x00000030u;
    c->r[7] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[4] = c->r[2] + 0u;
    c->r[5] = c->r[3] + 0u;
    c->r[6] = mem_r32(ram, c->r[30] + 0x00000054u);
    { c->r[31] = 0x088734b8u; c->f[12] = mem_rf32(ram, c->r[7] + 0x00000134u); func_0886e3dc(c, ram); }
    c->r[2] = c->r[30] + 0x00000060u;
    c->r[3] = c->r[30] + 0x00000040u;
    c->r[7] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[4] = c->r[2] + 0u;
    c->r[5] = c->r[3] + 0u;
    c->r[6] = mem_r32(ram, c->r[30] + 0x00000058u);
    { c->r[31] = 0x088734d8u; c->f[12] = mem_rf32(ram, c->r[7] + 0x00000138u); func_0886e3dc(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000040u);
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000044u);
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000048u);
    mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000004cu);
    mem_w32(ram, c->r[30] + 0x0000001cu, c->r[2]);
    c->r[2] = c->r[30] + 0x00000060u;
    c->r[3] = c->r[30] + 0x00000010u;
    c->r[6] = c->r[30] + 0x00000010u;
    c->r[7] = c->r[30] + 0x00000020u;
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x08873514u; c->r[5] = c->r[3] + 0u; func_0886e844(c, ram); }
    c->r[2] = c->r[30] + 0x00000060u;
    c->r[3] = c->r[30] + 0x00000010u;
    c->r[6] = c->r[30] + 0x00000010u;
    c->r[7] = c->r[30] + 0x00000030u;
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x08873530u; c->r[5] = c->r[3] + 0u; func_0886e844(c, ram); }
    c->r[2] = c->r[30] + 0x00000070u;
    { c->r[31] = 0x0887353cu; c->r[4] = c->r[2] + 0u; func_08808260(c, ram); }
    c->r[2] = c->r[30] + 0x00000070u;
    c->r[3] = c->r[30] + 0x00000010u;
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x08873550u; c->r[5] = c->r[3] + 0u; func_0884c73c(c, ram); }
    { c->r[31] = 0x08873558u; func_08867ab8(c, ram); }
    { c->r[31] = 0x08873560u; c->r[16] = c->r[2] + 0u; func_08867ab8(c, ram); }
    c->r[3] = c->r[30] + 0x00000070u;
    c->r[4] = c->r[16] + 0u;
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x08873574u; c->r[6] = c->r[3] + 0u; func_0884c6d4(c, ram); }
    { c->r[31] = 0x0887357cu; c->r[16] = c->r[30] + 0x00000060u; func_08867ab8(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000040u;
    c->r[4] = c->r[16] + 0u;
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x08873598u; c->r[6] = c->r[3] + 0u; func_0886ec48(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x000000b8u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x000000b4u);
    c->r[16] = mem_r32(ram, c->r[29] + 0x000000b0u);
    { c->r[29] = c->r[29] + 0x000000c0u; return; }
    return; /* fell out of func_08873408 */
}

/* func_0887c34c  0x0887c34c..0x0887cbf4  2216 bytes, source=fde */
void func_0887c34c(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0887c34cu);
    c->r[29] = c->r[29] + 0xffffffa0u;
    mem_w32(ram, c->r[29] + 0x00000054u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000050u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x0887c370u; c->r[5] = mem_r32(ram, c->r[30] + 0x00000004u); func_0887cbf4(c, ram); }
    mem_w8(ram, c->r[30] + 0x00000010u, 0u);
    c->r[2] = c->r[30] + 0x00000008u;
    c->r[3] = c->r[30] + 0x0000000cu;
    c->r[6] = c->r[30] + 0x00000010u;
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x0887c38cu; c->r[5] = c->r[3] + 0u; func_0887cc30(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000021cu);
    c->r[2] = c->r[2] & 0x0080u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_0887c3a8; }
    mem_w32(ram, c->r[30] + 0x00000014u, 0u);
L_0887c3a8:
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x0887c3b4u; c->r[4] = c->r[4] + 0x00000af4u; func_0880810c(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = 0u + 0x00000003u;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_0887c3e8; }
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x0887c3d0u; c->r[4] = c->r[4] + 0x00000af4u; func_0880810c(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = 0u + 0x00000005u;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_0887c3e8; }
    { goto L_0887c410; }
L_0887c3e8:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x000000a4u);
    c->f[0] = u2f(0u);
    alx_c_cond_s(c, 14, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_0887c40c; }
    { goto L_0887c410; }
L_0887c40c:
    mem_w32(ram, c->r[30] + 0x00000014u, 0u);
L_0887c410:
    { c->r[31] = 0x0887c418u; func_08999610(c, ram); }
    { int _c = (c->r[2] != 0u); if (_c) goto L_0887c460; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000021cu);
    { int _c = ((s32)c->r[2] < 0); if (_c) goto L_0887c460; }
    c->r[2] = 0x08aa0000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00004964u);
    c->r[2] = c->r[2] & 0x0100u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_0887c464; }
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x0887c450u; c->r[4] = c->r[4] + 0x00000af4u; func_0880810c(c, ram); }
    { int _c = (c->r[2] != 0u); if (_c) goto L_0887c460; }
    { goto L_0887c464; }
L_0887c460:
    mem_w32(ram, c->r[30] + 0x00000014u, 0u);
L_0887c464:
    mem_w32(ram, c->r[30] + 0x00000018u, 0u);
    mem_w32(ram, c->r[30] + 0x00000020u, 0u);
    mem_w32(ram, c->r[30] + 0x00000024u, 0u);
    mem_w32(ram, c->r[30] + 0x0000001cu, 0u);
L_0887c474:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000010u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_0887c48c; }
    { goto L_0887c7b0; }
L_0887c48c:
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[30] + 0x0000001cu);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000af4u;
    { c->r[31] = 0x0887c4a0u; c->r[5] = c->r[2] + 0u; func_0887e6d0(c, ram); }
    mem_w8(ram, c->r[30] + 0x00000028u, c->r[2]);
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x0887c4b0u; c->r[4] = c->r[4] + 0x00000af4u; func_08826ddc(c, ram); }
    { int _c = (c->r[2] == 0u); if (_c) goto L_0887c524; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000004u) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_0887c4f0; }
    c->r[2] = mem_r8(ram, c->r[30] + 0x0000001cu);
    c->r[2] = c->r[2] + 0x00000004u;
    c->r[2] = c->r[2] << 24;
    c->r[2] = (u32)((s32)c->r[2] >> 24);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000af4u;
    { c->r[31] = 0x0887c4e8u; c->r[5] = c->r[2] + 0u; func_0887e6d0(c, ram); }
    { mem_w8(ram, c->r[30] + 0x00000028u, c->r[2]); goto L_0887c524; }
L_0887c4f0:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000008u) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_0887c524; }
    c->r[2] = mem_r8(ram, c->r[30] + 0x0000001cu);
    c->r[2] = c->r[2] + 0xfffffffcu;
    c->r[2] = c->r[2] << 24;
    c->r[2] = (u32)((s32)c->r[2] >> 24);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000af4u;
    { c->r[31] = 0x0887c520u; c->r[5] = c->r[2] + 0u; func_0887e6d0(c, ram); }
    mem_w8(ram, c->r[30] + 0x00000028u, c->r[2]);
L_0887c524:
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[30] + 0x00000028u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000011u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_0887c53c; }
    { goto L_0887c7a0; }
L_0887c53c:
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[30] + 0x00000028u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = (u32)((s32)c->r[2] >> (c->r[3] & 31u));
    c->r[2] = c->r[2] & 0x0001u;
    c->r[2] = c->r[2] & 0x00ffu;
    { int _c = (c->r[2] == 0u); if (_c) goto L_0887c560; }
    { goto L_0887c7a0; }
L_0887c560:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = (u32)((s32)c->r[3] >> (c->r[2] & 31u));
    c->r[2] = c->r[2] & 0x0001u;
    c->r[2] = c->r[2] & 0x00ffu;
    { int _c = (c->r[2] == 0u); if (_c) goto L_0887c598; }
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[30] + 0x00000028u);
    c->r[2] = 0u + 0x00000001u;
    c->r[3] = c->r[2] << (c->r[3] & 31u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = c->r[2] | c->r[3];
    { mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]); goto L_0887c5d4; }
L_0887c598:
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[30] + 0x00000028u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[2] = (u32)((s32)c->r[2] >> (c->r[3] & 31u));
    c->r[2] = c->r[2] & 0x0001u;
    c->r[2] = c->r[2] & 0x00ffu;
    { int _c = (c->r[2] == 0u); if (_c) goto L_0887c5bc; }
    { goto L_0887c7a0; }
L_0887c5bc:
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[30] + 0x00000028u);
    c->r[2] = 0u + 0x00000001u;
    c->r[3] = c->r[2] << (c->r[3] & 31u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[2] = c->r[2] | c->r[3];
    mem_w32(ram, c->r[30] + 0x00000020u, c->r[2]);
L_0887c5d4:
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[30] + 0x00000028u);
    c->r[2] = 0u + 0x00000001u;
    c->r[3] = c->r[2] << (c->r[3] & 31u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000024u);
    c->r[2] = c->r[2] | c->r[3];
    mem_w32(ram, c->r[30] + 0x00000024u, c->r[2]);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[30] + 0x00000028u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000008u) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_0887c6d0; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000004u) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_0887c684; }
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[30] + 0x00000028u);
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08a50000u;
    c->r[2] = c->r[2] + 0x000039b4u;
    c->r[3] = c->r[3] + c->r[2];
    mem_w32(ram, c->r[30] + 0x00000030u, c->r[3]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = (u32)((s32)c->r[3] >> (c->r[2] & 31u));
    c->r[2] = c->r[2] & 0x0001u;
    c->r[2] = c->r[2] & 0x00ffu;
    mem_w32(ram, c->r[30] + 0x00000034u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000002u) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_0887c658; }
    c->f[0] = mem_rf32(ram, c->r[30] + 0x0000000cu);
    { mem_wf32(ram, c->r[30] + 0x00000038u, c->f[0]); goto L_0887c660; }
L_0887c658:
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000008u);
    mem_wf32(ram, c->r[30] + 0x00000038u, c->f[0]);
L_0887c660:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000030u);
    c->r[2] = mem_r32(ram, c->r[3] + 0x00000000u);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[6] = mem_r32(ram, c->r[30] + 0x00000034u);
    { u32 _t = c->r[2]; c->r[31] = 0x0887c67cu; c->f[12] = mem_rf32(ram, c->r[30] + 0x00000038u); recomp_call_indirect(c, ram, 0x0887c674u, _t); }
    { goto L_0887c7a0; }
L_0887c684:
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[30] + 0x00000028u);
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08a50000u;
    c->r[2] = c->r[2] + 0x000039b4u;
    c->r[4] = c->r[3] + c->r[2];
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = (u32)((s32)c->r[3] >> (c->r[2] & 31u));
    c->r[2] = c->r[2] & 0x0001u;
    c->r[2] = c->r[2] & 0x00ffu;
    c->r[3] = mem_r32(ram, c->r[4] + 0x00000000u);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[6] = c->r[2] + 0u;
    c->f[12] = u2f(0u);
    { u32 _t = c->r[3]; c->r[31] = 0x0887c6c8u; recomp_call_indirect(c, ram, 0x0887c6c0u, _t); }
    { goto L_0887c7a0; }
L_0887c6d0:
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[30] + 0x00000028u);
    c->r[2] = ((s32)c->r[2] < (s32)0x0000000eu) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_0887c724; }
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[30] + 0x00000028u);
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08a50000u;
    c->r[2] = c->r[2] + 0x000039b4u;
    c->r[4] = c->r[3] + c->r[2];
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = (u32)((s32)c->r[3] >> (c->r[2] & 31u));
    c->r[2] = c->r[2] & 0x0001u;
    c->r[2] = c->r[2] & 0x00ffu;
    c->r[3] = mem_r32(ram, c->r[4] + 0x00000000u);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000004u);
    { u32 _t = c->r[3]; c->r[31] = 0x0887c71cu; c->r[6] = c->r[2] + 0u; recomp_call_indirect(c, ram, 0x0887c714u, _t); }
    { goto L_0887c7a0; }
L_0887c724:
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[30] + 0x00000028u);
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08a50000u;
    c->r[2] = c->r[2] + 0x000039b4u;
    c->r[3] = c->r[3] + c->r[2];
    mem_w32(ram, c->r[30] + 0x0000003cu, c->r[3]);
    mem_w32(ram, c->r[30] + 0x00000040u, 0u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = (u32)((s32)c->r[3] >> (c->r[2] & 31u));
    c->r[2] = c->r[2] & 0x0001u;
    c->r[2] = c->r[2] & 0x00ffu;
    { int _c = (c->r[2] == 0u); if (_c) goto L_0887c788; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x00000214u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = (u32)((s32)c->r[3] >> (c->r[2] & 31u));
    c->r[2] = c->r[2] ^ 0x0001u;
    c->r[2] = c->r[2] & 0x0001u;
    c->r[2] = c->r[2] & 0x00ffu;
    { int _c = (c->r[2] == 0u); if (_c) goto L_0887c788; }
    c->r[2] = 0u + 0x00000001u;
    mem_w32(ram, c->r[30] + 0x00000040u, c->r[2]);
L_0887c788:
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000003cu);
    c->r[2] = mem_r32(ram, c->r[3] + 0x00000000u);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000004u);
    { u32 _t = c->r[2]; c->r[31] = 0x0887c7a0u; c->r[6] = mem_r32(ram, c->r[30] + 0x00000040u); recomp_call_indirect(c, ram, 0x0887c798u, _t); }
L_0887c7a0:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x0000001cu, c->r[2]); goto L_0887c474; }
L_0887c7b0:
    c->r[2] = 0u + 0x00000008u;
    mem_w32(ram, c->r[30] + 0x0000001cu, c->r[2]);
L_0887c7b8:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000011u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_0887c7d0; }
    { goto L_0887c828; }
L_0887c7d0:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000024u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = (u32)((s32)c->r[3] >> (c->r[2] & 31u));
    c->r[2] = c->r[2] ^ 0x0001u;
    c->r[2] = c->r[2] & 0x0001u;
    c->r[2] = c->r[2] & 0x00ffu;
    { int _c = (c->r[2] == 0u); if (_c) goto L_0887c818; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08a50000u;
    c->r[2] = c->r[2] + 0x000039b4u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000004u);
    { u32 _t = c->r[2]; c->r[31] = 0x0887c818u; c->r[6] = 0u + 0u; recomp_call_indirect(c, ram, 0x0887c810u, _t); }
L_0887c818:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x0000001cu, c->r[2]); goto L_0887c7b8; }
L_0887c828:
    { c->r[31] = 0x0887c830u; func_08999610(c, ram); }
    { int _c = (c->r[2] != 0u); if (_c) goto L_0887c850; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000021cu);
    { int _c = ((s32)c->r[2] < 0); if (_c) goto L_0887c850; }
    { goto L_0887c868; }
L_0887c850:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x0000021cu);
    c->r[2] = 0x00400000u;
    c->r[2] = c->r[3] | c->r[2];
    mem_w32(ram, c->r[4] + 0x0000021cu, c->r[2]);
L_0887c868:
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x0887c874u; c->r[4] = c->r[4] + 0x00000af4u; func_08826d80(c, ram); }
    { int _c = (c->r[2] == 0u); if (_c) goto L_0887c890; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x000000f8u);
    c->f[0] = -c->f[0];
    mem_wf32(ram, c->r[3] + 0x000000f8u, c->f[0]);
L_0887c890:
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x0887c89cu; c->r[4] = c->r[4] + 0x00000af4u; func_0880810c(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = 0u + 0x00000001u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_0887c950; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x000000e0u;
    mem_w32(ram, c->r[30] + 0x0000002cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000002cu);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000014u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000005u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_0887c950; }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x0000021cu);
    c->r[2] = 0xffbf0000u;
    c->r[2] = c->r[2] | 0xffffu;
    c->r[2] = c->r[3] & c->r[2];
    mem_w32(ram, c->r[4] + 0x0000021cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000002cu);
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000014u);
    c->r[2] = 0u + 0x00000005u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_0887c918; }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x0000021cu);
    c->r[2] = 0x00400000u;
    c->r[2] = c->r[3] | c->r[2];
    { mem_w32(ram, c->r[4] + 0x0000021cu, c->r[2]); goto L_0887c930; }
L_0887c918:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x0000021cu);
    c->r[2] = 0x02000000u;
    c->r[2] = c->r[3] | c->r[2];
    mem_w32(ram, c->r[4] + 0x0000021cu, c->r[2]);
L_0887c930:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    mem_w32(ram, c->r[2] + 0x000000f8u, 0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    mem_w32(ram, c->r[2] + 0x000000fcu, 0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    mem_w32(ram, c->r[2] + 0x00000100u, 0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    mem_w32(ram, c->r[2] + 0x000000b4u, 0u);
L_0887c950:
    c->r[2] = 0x08aa0000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00004964u);
    c->r[2] = c->r[2] & 0x0100u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_0887c990; }
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x0887c970u; c->r[4] = c->r[4] + 0x00000af4u; func_0880810c(c, ram); }
    { int _c = (c->r[2] == 0u); if (_c) goto L_0887c990; }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x0000021cu);
    c->r[2] = 0x00400000u;
    c->r[2] = c->r[3] | c->r[2];
    mem_w32(ram, c->r[4] + 0x0000021cu, c->r[2]);
L_0887c990:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000100u);
    c->f[0] = u2f(0u);
    alx_c_cond_s(c, 2, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_0887c9c8; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000021cu);
    c->r[2] = c->r[2] & 0x0010u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_0887c9c8; }
    { goto L_0887caa4; }
L_0887c9c8:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x000000c8u);
    c->f[0] = u2f(0u);
    alx_c_cond_s(c, 12, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_0887c9ec; }
    { goto L_0887ca38; }
L_0887c9ec:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x000000c8u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00003958u);
    c->f[0] = c->f[1] + c->f[0];
    mem_wf32(ram, c->r[3] + 0x000000c8u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x000000c8u);
    c->f[0] = u2f(0u);
    alx_c_cond_s(c, 12, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_0887ca2c; }
    { goto L_0887caa4; }
L_0887ca2c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    { mem_w32(ram, c->r[2] + 0x000000c8u, 0u); goto L_0887caa4; }
L_0887ca38:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x000000c8u);
    c->f[0] = u2f(0u);
    alx_c_cond_s(c, 12, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_0887ca5c; }
    { goto L_0887caa4; }
L_0887ca5c:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x000000c8u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00003958u);
    c->f[0] = c->f[1] - c->f[0];
    mem_wf32(ram, c->r[3] + 0x000000c8u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x000000c8u);
    c->f[0] = u2f(0u);
    alx_c_cond_s(c, 12, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_0887ca9c; }
    { goto L_0887caa4; }
L_0887ca9c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    mem_w32(ram, c->r[2] + 0x000000c8u, 0u);
L_0887caa4:
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x0887cab0u; c->r[4] = c->r[4] + 0x00000af4u; func_0880810c(c, ram); }
    { int _c = (c->r[2] == 0u); if (_c) goto L_0887cad0; }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = mem_r8(ram, c->r[2] + 0x00000011u);
    c->r[2] = 0u + 0xfffffff0u;
    c->r[2] = c->r[3] & c->r[2];
    mem_w8(ram, c->r[4] + 0x00000011u, c->r[2]);
L_0887cad0:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x0000021cu);
    c->r[2] = 0x00400000u;
    c->r[2] = c->r[3] & c->r[2];
    { int _c = (c->r[2] == 0u); if (_c) goto L_0887caf8; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    mem_w32(ram, c->r[2] + 0x000000f8u, 0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    mem_w32(ram, c->r[2] + 0x000000fcu, 0u);
L_0887caf8:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x0000021cu);
    c->r[2] = 0x02000000u;
    c->r[2] = c->r[3] & c->r[2];
    { int _c = (c->r[2] == 0u); if (_c) goto L_0887cbd4; }
    mem_w32(ram, c->r[30] + 0x0000002cu, 0u);
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x0887cb20u; c->r[4] = c->r[4] + 0x00000af4u; func_08826ddc(c, ram); }
    { int _c = (c->r[2] == 0u); if (_c) goto L_0887cb30; }
    c->r[2] = 0u + 0x00000004u;
    mem_w32(ram, c->r[30] + 0x0000002cu, c->r[2]);
L_0887cb30:
    mem_w32(ram, c->r[30] + 0x0000001cu, 0u);
L_0887cb34:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000004u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_0887cb4c; }
    { goto L_0887cbd4; }
L_0887cb4c:
    c->r[3] = mem_r8(ram, c->r[30] + 0x0000001cu);
    c->r[2] = mem_r8(ram, c->r[30] + 0x0000002cu);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = c->r[2] << 24;
    c->r[2] = (u32)((s32)c->r[2] >> 24);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000af4u;
    { c->r[31] = 0x0887cb70u; c->r[5] = c->r[2] + 0u; func_0887e6d0(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = 0u + 0x00000008u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_0887cbc4; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = (u32)((s32)c->r[3] >> (c->r[2] & 31u));
    c->r[2] = c->r[2] & 0x0001u;
    c->r[2] = c->r[2] & 0x00ffu;
    { int _c = (c->r[2] == 0u); if (_c) goto L_0887cbc4; }
    c->r[2] = mem_r8(ram, c->r[30] + 0x00000010u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_0887cbc4; }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x0000021cu);
    c->r[2] = 0xfdff0000u;
    c->r[2] = c->r[2] | 0xffffu;
    c->r[2] = c->r[3] & c->r[2];
    mem_w32(ram, c->r[4] + 0x0000021cu, c->r[2]);
L_0887cbc4:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x0000001cu, c->r[2]); goto L_0887cb34; }
L_0887cbd4:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    mem_w32(ram, c->r[3] + 0x00000214u, c->r[2]);
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000054u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000050u);
    { c->r[29] = c->r[29] + 0x00000060u; return; }
    return; /* fell out of func_0887c34c */
}

/* func_088817a4  0x088817a4..0x088818ec  328 bytes, source=fde */
void func_088817a4(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x088817a4u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000018u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[30]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[16]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, 0u);
L_088817c0:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000010u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_088817d8; }
    { goto L_08881848; }
L_088817d8:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08a90000u;
    c->r[2] = c->r[2] + 0xffffbe80u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[3] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[2] = 0u + 0xffffffffu;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_08881838; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08a90000u;
    c->r[2] = c->r[2] + 0xffffbe80u;
    c->r[16] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08a90000u;
    c->r[2] = c->r[2] + 0xffffbe80u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0xffffc930u;
    { c->r[31] = 0x08881834u; c->r[5] = mem_r32(ram, c->r[2] + 0x00000000u); func_089f73a0(c, ram); }
    mem_w32(ram, c->r[16] + 0x00000000u, c->r[2]);
L_08881838:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000004u, c->r[2]); goto L_088817c0; }
L_08881848:
    mem_w32(ram, c->r[30] + 0x00000004u, 0u);
L_0888184c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = ((s32)c->r[2] < (s32)0x0000000fu) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_08881864; }
    { goto L_088818d4; }
L_08881864:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08a90000u;
    c->r[2] = c->r[2] + 0xffffbdb0u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[3] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[2] = 0u + 0xffffffffu;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_088818c4; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08a90000u;
    c->r[2] = c->r[2] + 0xffffbdb0u;
    c->r[16] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08a90000u;
    c->r[2] = c->r[2] + 0xffffbdb0u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0xffffc930u;
    { c->r[31] = 0x088818c0u; c->r[5] = mem_r32(ram, c->r[2] + 0x00000000u); func_089f73a0(c, ram); }
    mem_w32(ram, c->r[16] + 0x00000000u, c->r[2]);
L_088818c4:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000004u, c->r[2]); goto L_0888184c; }
L_088818d4:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000018u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[16] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_088817a4 */
}

/* func_088834c4  0x088834c4..0x088835ec  296 bytes, source=fde */
void func_088834c4(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x088834c4u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    c->r[4] = 0x08a90000u;
    c->r[4] = c->r[4] + 0xffffe6dcu;
    c->r[5] = 0u + 0x000000ffu;
    { c->r[31] = 0x088834e8u; c->r[6] = 0u + 0x00000140u; func_08a19ec4(c, ram); }
    { c->r[31] = 0x088834f0u; func_08883274(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[2]);
    mem_w32(ram, c->r[30] + 0x00000004u, 0u);
L_088834f8:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000100u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_08883510; }
    { goto L_088835d8; }
L_08883510:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000000u);
    c->r[3] = c->r[2] << 3;
    c->r[2] = 0x08a90000u;
    c->r[2] = c->r[2] + 0xffffe6dcu;
    c->r[4] = c->r[3] + c->r[2];
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = (u32)((s32)c->r[3] >> 31);
    c->r[2] = c->r[2] >> 28;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = (u32)((s32)c->r[2] >> 4);
    c->r[2] = c->r[2] << 4;
    c->r[3] = c->r[3] - c->r[2];
    c->f[0] = u2f(c->r[3]);
    c->f[1] = (f32)(s32)f2u(c->f[0]);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00003d64u);
    c->f[1] = c->f[1] * c->f[0];
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00003d68u);
    c->f[0] = c->f[1] * c->f[0];
    mem_wf32(ram, c->r[4] + 0x00000000u, c->f[0]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000000u);
    c->r[3] = c->r[2] << 3;
    c->r[2] = 0x08a90000u;
    c->r[2] = c->r[2] + 0xffffe6e0u;
    c->r[4] = c->r[3] + c->r[2];
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = (u32)((s32)c->r[3] >> 31);
    c->r[2] = c->r[2] >> 28;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = (u32)((s32)c->r[2] >> 4);
    c->f[0] = u2f(c->r[2]);
    c->f[1] = (f32)(s32)f2u(c->f[0]);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00003d64u);
    c->f[1] = c->f[1] * c->f[0];
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00003d68u);
    c->f[0] = c->f[1] * c->f[0];
    mem_wf32(ram, c->r[4] + 0x00000000u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000004u, c->r[2]); goto L_088834f8; }
L_088835d8:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_088834c4 */
}

/* func_0888ba64  0x0888ba64..0x0888ba9c  56 bytes, source=sweep */
void func_0888ba64(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0888ba64u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = 0x9b000000u;
    { c->r[31] = 0x0888ba88u; c->r[5] = c->r[5] | 0x0001u; func_0888b984(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_0888ba64 */
}

/* func_0888c648  0x0888c648..0x0888c68c  68 bytes, source=sweep */
void func_0888c648(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0888c648u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = 0x26000000u;
    c->r[2] = c->r[2] | c->r[3];
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x0888c678u; c->r[5] = c->r[2] + 0u; func_0888b984(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_0888c648 */
}

/* func_0888d35c  0x0888d35c..0x0888d3a0  68 bytes, source=sweep */
void func_0888d35c(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0888d35cu);
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
    { c->r[31] = 0x0888d38cu; c->r[5] = c->r[2] + 0u; func_0888b984(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_0888d35c */
}

/* func_088900d4  0x088900d4..0x0889035c  648 bytes, source=fde */
void func_088900d4(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x088900d4u);
    c->r[29] = c->r[29] + 0xffffffd0u;
    mem_w32(ram, c->r[29] + 0x00000024u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000020u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[6]);
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[7]);
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[8]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    mem_w32(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000001cu);
    c->r[2] = c->r[3] + c->r[2];
    mem_w32(ram, c->r[4] + 0x00000004u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    mem_w32(ram, c->r[3] + 0x00000008u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x00000004u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    mem_w32(ram, c->r[3] + 0x0000000cu, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x00000008u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    mem_w32(ram, c->r[3] + 0x00000010u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[3] = mem_r16(ram, c->r[2] + 0x0000000eu);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[3];
    c->r[2] = c->r[2] << 2;
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[4] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[5] = mem_r32(ram, c->r[3] + 0x00000004u);
    { c->r[31] = 0x08890190u; c->r[6] = mem_r32(ram, c->r[30] + 0x00000014u); func_08a19db8(c, ram); }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    mem_w32(ram, c->r[3] + 0x00000004u, c->r[2]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = c->r[3] + c->r[2];
    mem_w32(ram, c->r[4] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    mem_w32(ram, c->r[2] + 0x00000020u, 0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00004088u);
    mem_wf32(ram, c->r[2] + 0x00000024u, c->f[0]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = 0u + 0x00000001u;
    mem_w32(ram, c->r[3] + 0x00000028u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    mem_w32(ram, c->r[3] + 0x00000014u, c->r[2]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x088901f4u; c->r[5] = mem_r32(ram, c->r[30] + 0x00000004u); func_08894f10(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[2] & 0x000fu;
    { int _c = (c->r[2] == 0u); if (_c) goto L_08890234; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = (u32)((s32)c->r[3] >> 31);
    c->r[2] = c->r[2] >> 28;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = (u32)((s32)c->r[2] >> 4);
    c->r[2] = c->r[2] << 4;
    c->r[3] = c->r[3] - c->r[2];
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[2] - c->r[3];
    c->r[2] = c->r[2] + 0x00000010u;
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[2]);
L_08890234:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    mem_w32(ram, c->r[3] + 0x00000018u, c->r[2]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x0889024cu; c->r[5] = mem_r32(ram, c->r[30] + 0x00000004u); func_0889514c(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[2] & 0x000fu;
    { int _c = (c->r[2] == 0u); if (_c) goto L_0889028c; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = (u32)((s32)c->r[3] >> 31);
    c->r[2] = c->r[2] >> 28;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = (u32)((s32)c->r[2] >> 4);
    c->r[2] = c->r[2] << 4;
    c->r[3] = c->r[3] - c->r[2];
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[2] - c->r[3];
    c->r[2] = c->r[2] + 0x00000010u;
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[2]);
L_0889028c:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    mem_w32(ram, c->r[3] + 0x0000001cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[2] = mem_r16(ram, c->r[2] + 0x0000000au);
    c->r[3] = c->r[2] << 2;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[2] + c->r[3];
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[2] & 0x000fu;
    { int _c = (c->r[2] == 0u); if (_c) goto L_088902f0; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = (u32)((s32)c->r[3] >> 31);
    c->r[2] = c->r[2] >> 28;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = (u32)((s32)c->r[2] >> 4);
    c->r[2] = c->r[2] << 4;
    c->r[3] = c->r[3] - c->r[2];
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[2] - c->r[3];
    c->r[2] = c->r[2] + 0x00000010u;
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[2]);
L_088902f0:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000004u);
    { c->r[31] = 0x08890304u; c->r[6] = mem_r32(ram, c->r[2] + 0x0000001cu); func_088951dc(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[2] & 0x000fu;
    { int _c = (c->r[2] == 0u); if (_c) goto L_08890344; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = (u32)((s32)c->r[3] >> 31);
    c->r[2] = c->r[2] >> 28;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = (u32)((s32)c->r[2] >> 4);
    c->r[2] = c->r[2] << 4;
    c->r[3] = c->r[3] - c->r[2];
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[2] - c->r[3];
    c->r[2] = c->r[2] + 0x00000010u;
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[2]);
L_08890344:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000024u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000020u);
    { c->r[29] = c->r[29] + 0x00000030u; return; }
    return; /* fell out of func_088900d4 */
}

/* func_08894f10  0x08894f10..0x0889514c  572 bytes, source=fde */
void func_08894f10(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08894f10u);
    c->r[29] = c->r[29] + 0xfffffed0u;
    mem_w32(ram, c->r[29] + 0x00000124u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000120u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    c->r[2] = c->r[30] + 0x00000010u;
    c->r[4] = c->r[2] + 0u;
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000004u);
    { c->r[31] = 0x08894f3cu; c->r[6] = 0x00010000u; func_0888c0e4(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000110u, 0u);
L_08894f40:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000110u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000003u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_08894f58; }
    { goto L_08894ff8; }
L_08894f58:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000110u);
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[3];
    c->r[2] = c->r[2] + 0x00000008u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_08894f80; }
    { goto L_08894ff8; }
L_08894f80:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000110u);
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[3];
    c->r[2] = c->r[2] + 0x00000008u;
    c->r[3] = c->r[30] + 0x00000114u;
    c->r[8] = c->r[30] + 0x00000118u;
    c->r[4] = 0x08a70000u;
    c->r[4] = c->r[4] + 0xffffb640u;
    c->r[5] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[6] = 0u + 0u;
    { c->r[31] = 0x08894fb4u; c->r[7] = c->r[3] + 0u; func_08890404(c, ram); }
    mem_w32(ram, c->r[30] + 0x0000011cu, c->r[2]);
    c->r[4] = c->r[30] + 0x00000010u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000011cu);
    c->r[6] = mem_r16(ram, c->r[2] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000011cu);
    c->r[3] = mem_r16(ram, c->r[2] + 0x00000006u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000011cu);
    c->r[2] = mem_r16(ram, c->r[2] + 0x00000004u);
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000110u);
    c->r[7] = c->r[3] + 0u;
    c->r[8] = c->r[2] + 0u;
    { c->r[31] = 0x08894fe8u; c->r[9] = mem_r32(ram, c->r[30] + 0x00000114u); func_0888b770(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000110u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000110u, c->r[2]); goto L_08894f40; }
L_08894ff8:
    c->r[2] = c->r[30] + 0x00000010u;
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x08895008u; c->r[5] = 0u + 0x00000009u; func_0888b858(c, ram); }
    c->r[3] = c->r[30] + 0x00000010u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000110u);
    c->r[2] = c->r[2] + 0xffffffffu;
    c->r[4] = c->r[3] + 0u;
    c->r[5] = 0u + 0x00000005u;
    c->r[6] = c->r[2] + 0u;
    c->r[7] = 0u + 0u;
    { c->r[31] = 0x0889502cu; c->r[8] = 0u + 0x00000001u; func_0888b920(c, ram); }
    c->r[2] = c->r[30] + 0x00000010u;
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0u + 0x00000020u;
    { c->r[31] = 0x08895040u; c->r[6] = mem_r32(ram, c->r[30] + 0x00000118u); func_0888cd3c(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000110u);
    { int _c = ((s32)c->r[2] <= 0); if (_c) goto L_088950ac; }
    c->r[2] = 0u + 0x00000007u;
    mem_w32(ram, c->r[30] + 0x0000011cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000028u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_0889506c; }
    c->r[2] = 0u + 0x00000005u;
    mem_w32(ram, c->r[30] + 0x0000011cu, c->r[2]);
L_0889506c:
    c->r[2] = c->r[30] + 0x00000010u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0u + 0x00000002u;
    { c->r[31] = 0x08895084u; c->f[12] = mem_rf32(ram, c->r[3] + 0x00000020u); func_0888cc04(c, ram); }
    c->r[2] = c->r[30] + 0x00000010u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x08895098u; c->f[12] = mem_rf32(ram, c->r[3] + 0x00000024u); func_0888ccb4(c, ram); }
    c->r[2] = c->r[30] + 0x00000010u;
    c->r[4] = c->r[2] + 0u;
    c->r[5] = mem_r32(ram, c->r[30] + 0x0000011cu);
    { c->r[31] = 0x088950acu; c->r[6] = 0u + 0x00000001u; func_0888cb84(c, ram); }
L_088950ac:
    c->r[2] = c->r[30] + 0x00000010u;
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0u | 0xffdcu;
    { c->r[31] = 0x088950c0u; c->r[6] = 0u + 0x00000064u; func_0888c084(c, ram); }
    c->r[2] = c->r[30] + 0x00000010u;
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0u + 0xfffffffeu;
    { c->r[31] = 0x088950d4u; c->r[6] = 0u + 0xfffffff4u; func_089debc4(c, ram); }
    c->r[2] = c->r[30] + 0x00000010u;
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x088950e4u; c->r[5] = 0u + 0x0000000au; func_0888b894(c, ram); }
    c->r[2] = c->r[30] + 0x00000010u;
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x088950f4u; c->r[5] = 0u + 0x00000001u; func_0888b8d0(c, ram); }
    c->r[2] = 0u + 0x0000019eu;
    mem_w32(ram, c->r[30] + 0x0000011cu, c->r[2]);
    c->r[4] = c->r[30] + 0x00000010u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000011cu);
    c->r[2] = 0x00ff0000u;
    c->r[2] = c->r[2] | 0xffffu;
    c->r[3] = c->r[3] & c->r[2];
    c->r[2] = 0x12000000u;
    c->r[2] = c->r[3] | c->r[2];
    { c->r[31] = 0x08895120u; c->r[5] = c->r[2] + 0u; func_0888b984(c, ram); }
    c->r[2] = c->r[30] + 0x00000010u;
    { c->r[31] = 0x0889512cu; c->r[4] = c->r[2] + 0u; func_0888c250(c, ram); }
    c->r[2] = c->r[30] + 0x00000010u;
    { c->r[31] = 0x08895138u; c->r[4] = c->r[2] + 0u; func_0888c134(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000124u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000120u);
    { c->r[29] = c->r[29] + 0x00000130u; return; }
    return; /* fell out of func_08894f10 */
}

/* func_08899b1c  0x08899b1c..0x08899b54  56 bytes, source=sweep */
void func_08899b1c(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08899b1cu);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = 0x9b000000u;
    { c->r[31] = 0x08899b40u; c->r[5] = c->r[5] | 0x0001u; func_088998c8(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_08899b1c */
}

/* func_0889a950  0x0889a950..0x0889aa1c  204 bytes, source=sweep */
void func_0889a950(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0889a950u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_0889aa08; }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[3] = mem_r16(ram, c->r[2] + 0x00000014u);
    c->r[2] = mem_r32(ram, c->r[4] + 0x00000000u);
    c->r[2] = c->r[2] + c->r[3];
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
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 4;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x0000000eu);
    c->r[3] = c->r[2] << 2;
    c->r[2] = mem_r32(ram, c->r[5] + 0x0000001cu);
    c->r[2] = c->r[3] + c->r[2];
    { c->r[31] = 0x0889aa08u; c->r[5] = mem_r32(ram, c->r[2] + 0x00000000u); func_0889990c(c, ram); }
L_0889aa08:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_0889a950 */
}

/* func_0889f630  0x0889f630..0x0889f658  40 bytes, source=sweep */
void func_0889f630(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0889f630u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000008u);
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_0889f630 */
}

/* func_088a3304  0x088a3304..0x088a3348  68 bytes, source=sweep */
void func_088a3304(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x088a3304u);
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
    return; /* fell out of func_088a3304 */
}

/* func_088a4390  0x088a4390..0x088a43d4  68 bytes, source=sweep */
void func_088a4390(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x088a4390u);
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
    { c->r[31] = 0x088a43c0u; c->r[5] = c->r[2] + 0u; func_088a3304(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_088a4390 */
}

/* func_088adcac  0x088adcac..0x088adcf0  68 bytes, source=sweep */
void func_088adcac(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x088adcacu);
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
    { c->r[31] = 0x088adcdcu; c->r[5] = c->r[2] + 0u; func_088ad160(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_088adcac */
}

/* func_088b20b0  0x088b20b0..0x088b2100  80 bytes, source=sweep */
void func_088b20b0(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x088b20b0u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_088b20e4; }
    { c->r[31] = 0x088b20dcu; c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u); func_088b222c(c, ram); }
    { goto L_088b20ec; }
L_088b20e4:
    { c->r[31] = 0x088b20ecu; c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u); func_088b2264(c, ram); }
L_088b20ec:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_088b20b0 */
}

/* func_088b2f18  0x088b2f18..0x088b2fe0  200 bytes, source=sweep */
void func_088b2f18(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x088b2f18u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    c->r[2] = c->r[30] + 0x00000004u;
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000000u);
    c->f[0] = u2f(c->r[2]);
    c->f[1] = (f32)(s32)f2u(c->f[0]);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00004804u);
    c->f[0] = c->f[1] * c->f[0];
    mem_wf32(ram, c->r[3] + 0x00000000u, c->f[0]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[2] + 0x00000001u;
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000000u);
    c->f[0] = u2f(c->r[2]);
    c->f[1] = (f32)(s32)f2u(c->f[0]);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00004804u);
    c->f[0] = c->f[1] * c->f[0];
    mem_wf32(ram, c->r[3] + 0x00000004u, c->f[0]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[2] + 0x00000002u;
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000000u);
    c->f[0] = u2f(c->r[2]);
    c->f[1] = (f32)(s32)f2u(c->f[0]);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00004804u);
    c->f[0] = c->f[1] * c->f[0];
    mem_wf32(ram, c->r[3] + 0x00000008u, c->f[0]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[2] + 0x00000003u;
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000000u);
    c->f[0] = u2f(c->r[2]);
    c->f[1] = (f32)(s32)f2u(c->f[0]);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00004804u);
    c->f[0] = c->f[1] * c->f[0];
    mem_wf32(ram, c->r[3] + 0x0000000cu, c->f[0]);
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_088b2f18 */
}

/* func_088ba5c0  0x088ba5c0..0x088ba6a0  224 bytes, source=fde */
void func_088ba5c0(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x088ba5c0u);
    c->r[29] = c->r[29] + 0xffffffd0u;
    mem_w32(ram, c->r[29] + 0x00000024u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000020u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_wf32(ram, c->r[30] + 0x00000000u, c->f[12]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[5]);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000000u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00004a84u);
    c->f[1] = c->f[1] - c->f[0];
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00004a88u);
    c->f[0] = c->f[1] / c->f[0];
    mem_wf32(ram, c->r[30] + 0x00000014u, c->f[0]);
    { c->r[31] = 0x088ba604u; c->f[12] = mem_rf32(ram, c->r[30] + 0x00000014u); func_08a0f760(c, ram); }
    mem_wf32(ram, c->r[30] + 0x0000000cu, c->f[0]);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000000u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00004a8cu);
    alx_c_cond_s(c, 12, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_088ba62c; }
    { goto L_088ba638; }
L_088ba62c:
    c->f[0] = mem_rf32(ram, c->r[30] + 0x0000000cu);
    c->f[0] = -c->f[0];
    mem_wf32(ram, c->r[30] + 0x0000000cu, c->f[0]);
L_088ba638:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x0000000cu);
    mem_wf32(ram, c->r[2] + 0x00000000u, c->f[0]);
    { c->r[31] = 0x088ba64cu; c->f[12] = mem_rf32(ram, c->r[30] + 0x00000014u); func_08a0f5bc(c, ram); }
    mem_wf32(ram, c->r[30] + 0x00000010u, c->f[0]);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000000u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00004a8cu);
    alx_c_cond_s(c, 12, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_088ba674; }
    { goto L_088ba680; }
L_088ba674:
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000010u);
    c->f[0] = -c->f[0];
    mem_wf32(ram, c->r[30] + 0x00000010u, c->f[0]);
L_088ba680:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000010u);
    mem_wf32(ram, c->r[2] + 0x00000000u, c->f[0]);
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000024u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000020u);
    { c->r[29] = c->r[29] + 0x00000030u; return; }
    return; /* fell out of func_088ba5c0 */
}

/* func_088beb04  0x088beb04..0x088beb40  60 bytes, source=residue */
void func_088beb04(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x088beb04u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000004u);
    { c->r[31] = 0x088beb2cu; c->r[6] = 0u + 0x00000001u; func_088be8e4(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_088beb04 */
}

/* func_088bf688  0x088bf688..0x088bf6ec  100 bytes, source=fde */
void func_088bf688(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x088bf688u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    c->r[2] = c->r[4] + 0u;
    mem_w8(ram, c->r[30] + 0x00000000u, c->r[2]);
    c->r[4] = 0x08a40000u;
    { c->r[31] = 0x088bf6acu; c->r[4] = c->r[4] + 0x00004c80u; func_089c6f64(c, ram); }
    c->r[2] = c->r[2] + 0x00000004u;
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[2]);
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[30] + 0x00000000u);
    c->r[2] = 0u + 0x00000188u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[3] = c->lo;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[2] + c->r[3];
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000138u);
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_088bf688 */
}

/* func_088c274c  0x088c274c..0x088c29fc  688 bytes, source=fde */
void func_088c274c(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x088c274cu);
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
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000010u);
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_088c27a8; }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x088c27a0u; c->r[5] = 0u + 0x00000002u; func_0880d260(c, ram); }
    { goto L_088c29e4; }
L_088c27a8:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    mem_w16(ram, c->r[2] + 0x000000b0u, 0u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = 0x40000000u;
    mem_w32(ram, c->r[3] + 0x0000008cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[4] = c->r[2] + 0x00000020u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[3] + 0x00000000u);
    mem_w32(ram, c->r[4] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[3] + 0x00000004u);
    mem_w32(ram, c->r[4] + 0x00000004u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[3] + 0x00000008u);
    mem_w32(ram, c->r[4] + 0x00000008u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[3] + 0x0000000cu);
    mem_w32(ram, c->r[4] + 0x0000000cu, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = mem_r16(ram, c->r[2] + 0x00000004u);
    mem_w16(ram, c->r[3] + 0x00000004u, c->r[2]);
    c->r[16] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = c->r[2] + 0x00000020u;
    c->r[2] = 0x08a80000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00002ed8u);
    c->r[2] = c->r[2] + 0x00000020u;
    c->r[4] = c->r[3] + 0u;
    { c->r[31] = 0x088c2820u; c->r[5] = c->r[2] + 0u; func_0884d0b0(c, ram); }
    mem_wf32(ram, c->r[16] + 0x00000008u, c->f[0]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x088c2830u; c->r[5] = 0u + 0u; func_088679d4(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x00000006u);
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = 0u + 0xffffffffu;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_088c2864; }
    c->r[4] = 0u + 0u;
    { c->r[31] = 0x088c2858u; c->r[5] = 0u + 0x00000002u; func_0883a204(c, ram); }
    c->r[2] = c->r[2] ^ 0x0000u;
    c->r[2] = (c->r[2] < 0x00000001u) ? 1u : 0u;
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
L_088c2864:
    c->r[2] = mem_r16(ram, c->r[30] + 0x00000014u);
    c->r[2] = c->r[2] + 0x00000400u;
    c->r[2] = c->r[2] & 0xffffu;
    c->r[4] = 0u + 0x00000002u;
    c->r[5] = c->r[2] + 0u;
    c->r[6] = 0u + 0u;
    c->r[7] = 0u + 0u;
    c->r[8] = 0u + 0u;
    { c->r[31] = 0x088c288cu; c->r[9] = 0u + 0u; func_089c6bec(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_088c29d8; }
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00004eb4u);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000018u);
    { c->r[31] = 0x088c28b0u; c->f[12] = c->f[0]; func_089c77f4(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[4] = c->r[2] + 0x00000020u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = c->r[2] + 0x00000020u;
    c->r[2] = mem_r32(ram, c->r[3] + 0x00000000u);
    mem_w32(ram, c->r[4] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[3] + 0x00000004u);
    mem_w32(ram, c->r[4] + 0x00000004u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[3] + 0x00000008u);
    mem_w32(ram, c->r[4] + 0x00000008u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[3] + 0x0000000cu);
    mem_w32(ram, c->r[4] + 0x0000000cu, c->r[2]);
    c->r[16] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000ac8u;
    { c->r[31] = 0x088c28f4u; c->r[5] = mem_r32(ram, c->r[30] + 0x00000018u); func_089cb780(c, ram); }
    mem_w32(ram, c->r[30] + 0x0000001cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    mem_w32(ram, c->r[16] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000020u);
    mem_wf32(ram, c->r[30] + 0x00000040u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000024u);
    mem_wf32(ram, c->r[30] + 0x00000044u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000028u);
    mem_wf32(ram, c->r[30] + 0x00000048u, c->f[0]);
    mem_w32(ram, c->r[30] + 0x0000004cu, 0u);
    mem_w32(ram, c->r[30] + 0x00000050u, 0u);
    mem_w32(ram, c->r[30] + 0x00000054u, 0u);
    c->r[2] = mem_r16(ram, c->r[30] + 0x00000014u);
    mem_w16(ram, c->r[30] + 0x00000058u, c->r[2]);
    c->r[2] = 0u + 0x00000019u;
    mem_w16(ram, c->r[30] + 0x0000005au, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000040u);
    mem_w32(ram, c->r[30] + 0x00000020u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000044u);
    mem_w32(ram, c->r[30] + 0x00000024u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000048u);
    mem_w32(ram, c->r[30] + 0x00000028u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000004cu);
    mem_w32(ram, c->r[30] + 0x0000002cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000050u);
    mem_w32(ram, c->r[30] + 0x00000030u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000054u);
    mem_w32(ram, c->r[30] + 0x00000034u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000058u);
    mem_w32(ram, c->r[30] + 0x00000038u, c->r[2]);
    c->r[2] = c->r[30] + 0x00000020u;
    c->r[4] = 0x08a80000u;
    c->r[4] = mem_r32(ram, c->r[4] + 0x00002ed8u);
    c->r[5] = 0u + 0x00000006u;
    c->r[6] = c->r[2] + 0u;
    { c->r[31] = 0x088c2994u; c->r[7] = 0u + 0x0000001cu; func_0884f888(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000020u;
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00004eb8u);
    c->r[1] = 0x08a40000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0x00004ebcu);
    c->r[4] = 0x30000000u;
    c->r[4] = c->r[4] | 0x0031u;
    c->r[5] = c->r[2] + 0u;
    c->r[6] = 0u + 0u;
    c->r[7] = 0u + 0u;
    c->f[12] = c->f[0];
    c->f[13] = c->f[1];
    { c->r[31] = 0x088c29d0u; c->r[8] = 0u + 0xffffffffu; func_0884fcb4(c, ram); }
    { goto L_088c29e4; }
L_088c29d8:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x088c29e4u; c->r[5] = 0u + 0x00000002u; func_0880d260(c, ram); }
L_088c29e4:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000068u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000064u);
    c->r[16] = mem_r32(ram, c->r[29] + 0x00000060u);
    { c->r[29] = c->r[29] + 0x00000070u; return; }
    return; /* fell out of func_088c274c */
}

/* func_088c8b5c  0x088c8b5c..0x088c8d7c  544 bytes, source=sweep */
void func_088c8b5c(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x088c8b5cu);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[6]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = (c->r[2] < 0x00000016u) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_088c8d68; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08a40000u;
    c->r[2] = c->r[2] + 0x00004fb8u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    { u32 _t = c->r[2]; switch (_t) { case 0x088c8ba8u: goto L_088c8ba8; case 0x088c8bbcu: goto L_088c8bbc; case 0x088c8bd0u: goto L_088c8bd0; case 0x088c8be4u: goto L_088c8be4; case 0x088c8bf8u: goto L_088c8bf8; case 0x088c8c0cu: goto L_088c8c0c; case 0x088c8c20u: goto L_088c8c20; case 0x088c8c34u: goto L_088c8c34; case 0x088c8c48u: goto L_088c8c48; case 0x088c8c5cu: goto L_088c8c5c; case 0x088c8c70u: goto L_088c8c70; case 0x088c8c84u: goto L_088c8c84; case 0x088c8c98u: goto L_088c8c98; case 0x088c8cacu: goto L_088c8cac; case 0x088c8cc4u: goto L_088c8cc4; case 0x088c8cdcu: goto L_088c8cdc; case 0x088c8cf4u: goto L_088c8cf4; case 0x088c8d0cu: goto L_088c8d0c; case 0x088c8d20u: goto L_088c8d20; case 0x088c8d34u: goto L_088c8d34; case 0x088c8d48u: goto L_088c8d48; case 0x088c8d5cu: goto L_088c8d5c; default: recomp_trap_unknown_indirect(c, ram, 0x088c8ba0u, _t); return; } }
L_088c8ba8:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x088c8bb4u; c->r[5] = mem_r32(ram, c->r[30] + 0x00000008u); func_088c8d7c(c, ram); }
    { goto L_088c8d68; }
L_088c8bbc:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x088c8bc8u; c->r[5] = mem_r32(ram, c->r[30] + 0x00000008u); func_088c8dc0(c, ram); }
    { goto L_088c8d68; }
L_088c8bd0:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x088c8bdcu; c->r[5] = mem_r32(ram, c->r[30] + 0x00000008u); func_088c920c(c, ram); }
    { goto L_088c8d68; }
L_088c8be4:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x088c8bf0u; c->r[5] = mem_r32(ram, c->r[30] + 0x00000008u); func_088c8e04(c, ram); }
    { goto L_088c8d68; }
L_088c8bf8:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x088c8c04u; c->r[5] = mem_r32(ram, c->r[30] + 0x00000008u); func_088c8e48(c, ram); }
    { goto L_088c8d68; }
L_088c8c0c:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x088c8c18u; c->r[5] = mem_r32(ram, c->r[30] + 0x00000008u); func_088c8e8c(c, ram); }
    { goto L_088c8d68; }
L_088c8c20:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x088c8c2cu; c->r[5] = mem_r32(ram, c->r[30] + 0x00000008u); func_088c8ed0(c, ram); }
    { goto L_088c8d68; }
L_088c8c34:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x088c8c40u; c->r[5] = mem_r32(ram, c->r[30] + 0x00000008u); func_088c8f14(c, ram); }
    { goto L_088c8d68; }
L_088c8c48:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x088c8c54u; c->r[5] = mem_r32(ram, c->r[30] + 0x00000008u); func_088c8f58(c, ram); }
    { goto L_088c8d68; }
L_088c8c5c:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x088c8c68u; c->r[5] = mem_r32(ram, c->r[30] + 0x00000008u); func_088c8f9c(c, ram); }
    { goto L_088c8d68; }
L_088c8c70:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x088c8c7cu; c->r[5] = mem_r32(ram, c->r[30] + 0x00000008u); func_088c8fe0(c, ram); }
    { goto L_088c8d68; }
L_088c8c84:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x088c8c90u; c->r[5] = mem_r32(ram, c->r[30] + 0x00000008u); func_088c9024(c, ram); }
    { goto L_088c8d68; }
L_088c8c98:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x088c8ca4u; c->r[5] = mem_r32(ram, c->r[30] + 0x00000008u); func_088c9068(c, ram); }
    { goto L_088c8d68; }
L_088c8cac:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = 0u + 0u;
    { c->r[31] = 0x088c8cbcu; c->r[6] = mem_r32(ram, c->r[30] + 0x00000008u); func_088c90ac(c, ram); }
    { goto L_088c8d68; }
L_088c8cc4:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = 0u + 0x00000001u;
    { c->r[31] = 0x088c8cd4u; c->r[6] = mem_r32(ram, c->r[30] + 0x00000008u); func_088c90ac(c, ram); }
    { goto L_088c8d68; }
L_088c8cdc:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = 0u + 0x00000002u;
    { c->r[31] = 0x088c8cecu; c->r[6] = mem_r32(ram, c->r[30] + 0x00000008u); func_088c90ac(c, ram); }
    { goto L_088c8d68; }
L_088c8cf4:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = 0u + 0x00000003u;
    { c->r[31] = 0x088c8d04u; c->r[6] = mem_r32(ram, c->r[30] + 0x00000008u); func_088c90ac(c, ram); }
    { goto L_088c8d68; }
L_088c8d0c:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x088c8d18u; c->r[5] = mem_r32(ram, c->r[30] + 0x00000008u); func_088c90fc(c, ram); }
    { goto L_088c8d68; }
L_088c8d20:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x088c8d2cu; c->r[5] = mem_r32(ram, c->r[30] + 0x00000008u); func_088c9140(c, ram); }
    { goto L_088c8d68; }
L_088c8d34:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x088c8d40u; c->r[5] = mem_r32(ram, c->r[30] + 0x00000008u); func_088c9184(c, ram); }
    { goto L_088c8d68; }
L_088c8d48:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x088c8d54u; c->r[5] = mem_r32(ram, c->r[30] + 0x00000008u); func_088c91c8(c, ram); }
    { goto L_088c8d68; }
L_088c8d5c:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x088c8d68u; c->r[5] = mem_r32(ram, c->r[30] + 0x00000008u); func_088c92b8(c, ram); }
L_088c8d68:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_088c8b5c */
}

/* func_088ca870  0x088ca870..0x088caa0c  412 bytes, source=fde */
void func_088ca870(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x088ca870u);
    c->r[29] = c->r[29] + 0xffffff20u;
    mem_w32(ram, c->r[29] + 0x000000d4u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x000000d0u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[2] = c->r[30] + 0x00000010u;
    { c->r[31] = 0x088ca890u; c->r[4] = c->r[2] + 0u; func_08808260(c, ram); }
    c->r[3] = c->r[30] + 0x00000010u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000040u;
    c->r[4] = c->r[3] + 0u;
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x088ca8acu; c->r[6] = 0u + 0u; func_0885a194(c, ram); }
    c->r[2] = c->r[30] + 0x00000050u;
    { c->r[31] = 0x088ca8b8u; c->r[4] = c->r[2] + 0u; func_08808240(c, ram); }
    c->r[2] = c->r[30] + 0x00000060u;
    { c->r[31] = 0x088ca8c4u; c->r[4] = c->r[2] + 0u; func_08808240(c, ram); }
    c->r[2] = c->r[30] + 0x00000070u;
    { c->r[31] = 0x088ca8d0u; c->r[4] = c->r[2] + 0u; func_08808240(c, ram); }
    c->r[3] = c->r[30] + 0x00000070u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000030u;
    c->r[4] = c->r[3] + 0u;
    { c->r[31] = 0x088ca8e8u; c->r[5] = c->r[2] + 0u; func_0884c1d8(c, ram); }
    c->r[3] = c->r[30] + 0x00000050u;
    c->r[5] = c->r[30] + 0x00000070u;
    c->r[2] = c->r[30] + 0x00000010u;
    c->r[2] = c->r[2] + 0x00000010u;
    c->r[4] = c->r[3] + 0u;
    { c->r[31] = 0x088ca904u; c->r[6] = c->r[2] + 0u; func_0884d26c(c, ram); }
    c->r[2] = c->r[30] + 0x00000060u;
    c->r[3] = c->r[30] + 0x00000070u;
    c->r[6] = c->r[30] + 0x00000050u;
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x088ca91cu; c->r[5] = c->r[3] + 0u; func_0884d26c(c, ram); }
    c->r[2] = c->r[30] + 0x00000080u;
    { c->r[31] = 0x088ca928u; c->r[4] = c->r[2] + 0u; func_08808260(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000050u);
    mem_w32(ram, c->r[30] + 0x00000080u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000054u);
    mem_w32(ram, c->r[30] + 0x00000084u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000058u);
    mem_w32(ram, c->r[30] + 0x00000088u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000005cu);
    mem_w32(ram, c->r[30] + 0x0000008cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000060u);
    mem_w32(ram, c->r[30] + 0x00000090u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000064u);
    mem_w32(ram, c->r[30] + 0x00000094u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000068u);
    mem_w32(ram, c->r[30] + 0x00000098u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000006cu);
    mem_w32(ram, c->r[30] + 0x0000009cu, c->r[2]);
    c->r[2] = c->r[30] + 0x000000c0u;
    c->r[3] = c->r[30] + 0x00000070u;
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x088ca97cu; c->r[5] = c->r[3] + 0u; func_088678f8(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000c0u);
    mem_w32(ram, c->r[30] + 0x000000a0u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000c4u);
    mem_w32(ram, c->r[30] + 0x000000a4u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000c8u);
    mem_w32(ram, c->r[30] + 0x000000a8u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000ccu);
    mem_w32(ram, c->r[30] + 0x000000acu, c->r[2]);
    c->r[2] = c->r[30] + 0x000000c0u;
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00005048u);
    c->r[4] = c->r[2] + 0u;
    c->f[12] = u2f(0u);
    c->f[13] = u2f(0u);
    c->f[14] = u2f(0u);
    { c->r[31] = 0x088ca9c0u; c->f[15] = c->f[0]; func_0880d140(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000c0u);
    mem_w32(ram, c->r[30] + 0x000000b0u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000c4u);
    mem_w32(ram, c->r[30] + 0x000000b4u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000c8u);
    mem_w32(ram, c->r[30] + 0x000000b8u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000ccu);
    mem_w32(ram, c->r[30] + 0x000000bcu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000040u;
    c->r[3] = c->r[30] + 0x00000080u;
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x088ca9f8u; c->r[5] = c->r[3] + 0u; func_0884cc18(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x000000d4u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x000000d0u);
    { c->r[29] = c->r[29] + 0x000000e0u; return; }
    return; /* fell out of func_088ca870 */
}

/* func_088d2428  0x088d2428..0x088d25ac  388 bytes, source=sweep */
void func_088d2428(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x088d2428u);
    c->r[29] = c->r[29] + 0xffffffd0u;
    mem_w32(ram, c->r[29] + 0x00000020u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[6]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = 0u + 0x000000ffu;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_088d2458; }
    { mem_w32(ram, c->r[30] + 0x00000014u, 0u); goto L_088d2598; }
L_088d2458:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = c->r[2] << 2;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = c->r[3] + c->r[2];
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = (c->r[2] < 0x00000008u) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_088d2594; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08a40000u;
    c->r[2] = c->r[2] + 0x00005748u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    { u32 _t = c->r[2]; switch (_t) { case 0x088d24a4u: goto L_088d24a4; case 0x088d24acu: goto L_088d24ac; case 0x088d24d4u: goto L_088d24d4; case 0x088d24f0u: goto L_088d24f0; case 0x088d2518u: goto L_088d2518; case 0x088d2534u: goto L_088d2534; case 0x088d2550u: goto L_088d2550; case 0x088d256cu: goto L_088d256c; default: recomp_trap_unknown_indirect(c, ram, 0x088d249cu, _t); return; } }
L_088d24a4:
    { mem_w32(ram, c->r[30] + 0x00000014u, 0u); goto L_088d2598; }
L_088d24ac:
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 3;
    c->r[2] = 0x08aa0000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000539cu);
    c->r[2] = c->r[3] + c->r[2];
    { mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]); goto L_088d2598; }
L_088d24d4:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = c->r[2] << 4;
    c->r[2] = 0x08aa0000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x000053a0u);
    c->r[2] = c->r[3] + c->r[2];
    { mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]); goto L_088d2598; }
L_088d24f0:
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08aa0000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x000053a4u);
    c->r[2] = c->r[3] + c->r[2];
    { mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]); goto L_088d2598; }
L_088d2518:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = c->r[2] << 4;
    c->r[2] = 0x08aa0000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x000053a8u);
    c->r[2] = c->r[3] + c->r[2];
    { mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]); goto L_088d2598; }
L_088d2534:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = c->r[2] << 4;
    c->r[2] = 0x08aa0000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x000053acu);
    c->r[2] = c->r[3] + c->r[2];
    { mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]); goto L_088d2598; }
L_088d2550:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = c->r[2] << 4;
    c->r[2] = 0x08aa0000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x000053b0u);
    c->r[2] = c->r[3] + c->r[2];
    { mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]); goto L_088d2598; }
L_088d256c:
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 3;
    c->r[2] = 0x08aa0000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x000053b4u);
    c->r[2] = c->r[3] + c->r[2];
    { mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]); goto L_088d2598; }
L_088d2594:
    mem_w32(ram, c->r[30] + 0x00000014u, 0u);
L_088d2598:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000020u);
    { c->r[29] = c->r[29] + 0x00000030u; return; }
    return; /* fell out of func_088d2428 */
}

/* func_088d649c  0x088d649c..0x088d68a0  1028 bytes, source=fde */
void func_088d649c(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x088d649cu);
    c->r[29] = c->r[29] + 0xffffffb0u;
    mem_w32(ram, c->r[29] + 0x00000044u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000040u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x088d64c0u; c->r[5] = mem_r32(ram, c->r[30] + 0x00000004u); func_088d6ab8(c, ram); }
    { int _c = (c->r[2] == 0u); if (_c) goto L_088d64d0; }
    { goto L_088d688c; }
L_088d64d0:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000060u);
    c->r[3] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x00000006u);
    c->r[2] = (u32)((s32)c->r[3] >> 31);
    c->r[2] = c->r[2] >> 31;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = (u32)((s32)c->r[2] >> 1);
    c->r[3] = (u32)(s32)(s16)mem_r16(ram, c->r[4] + 0x000000b0u);
    c->r[2] = c->r[2] << 16;
    c->r[2] = (u32)((s32)c->r[2] >> 16);
    c->r[2] = ((s32)c->r[2] < (s32)c->r[3]) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_088d651c; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000008cu);
    c->r[2] = c->r[2] | 0x4000u;
    mem_w32(ram, c->r[3] + 0x0000008cu, c->r[2]);
L_088d651c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x000000b0u);
    { int _c = ((s32)c->r[2] > 0); if (_c) goto L_088d688c; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    mem_w16(ram, c->r[2] + 0x000000b0u, 0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000008cu);
    c->r[2] = c->r[2] & 0x000au;
    { int _c = (c->r[2] == 0u); if (_c) goto L_088d6574; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000008cu);
    c->r[2] = c->r[2] & 0x0008u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_088d6574; }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x088d6568u; c->r[5] = mem_r32(ram, c->r[30] + 0x00000004u); func_088d5f9c(c, ram); }
    c->r[4] = 0x08a90000u;
    { c->r[31] = 0x088d6574u; c->r[4] = c->r[4] + 0xffffb9c0u; func_088dadf8(c, ram); }
L_088d6574:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000004u);
    { c->r[31] = 0x088d6584u; c->r[6] = 0u + 0u; func_088d6270(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000005cu);
    c->r[3] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x00000000u);
    c->r[2] = 0u + 0x000000a7u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_088d65a4; }
    { c->r[31] = 0x088d65a4u; func_088df3a4(c, ram); }
L_088d65a4:
    c->r[2] = 0u + 0x00000001u;
    mem_w32(ram, c->r[30] + 0x00000030u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000054u);
    c->r[3] = mem_r8(ram, c->r[2] + 0x00000000u);
    c->r[2] = 0u + 0x00000009u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_088d65f8; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000060u);
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x0000000bu);
    c->r[2] = 0u + 0x00000002u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_088d65f4; }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x0000008cu);
    c->r[2] = 0x00800000u;
    c->r[2] = c->r[3] | c->r[2];
    mem_w32(ram, c->r[4] + 0x0000008cu, c->r[2]);
L_088d65f4:
    mem_w32(ram, c->r[30] + 0x00000030u, 0u);
L_088d65f8:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000030u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_088d6804; }
    c->r[2] = 0x08aa0000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x000053b8u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_088d671c; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000005cu);
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000002u);
    mem_w32(ram, c->r[30] + 0x00000034u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000034u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000086u) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_088d6700; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000034u);
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08aa0000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x000053bcu);
    c->r[2] = c->r[2] + c->r[3];
    mem_w32(ram, c->r[30] + 0x00000038u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000038u);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000000u);
    c->r[2] = c->r[2] << 1;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000038u);
    c->r[4] = c->r[2] + 0u;
    c->r[2] = mem_r8(ram, c->r[3] + 0x00000001u);
    c->r[2] = c->r[4] + c->r[2];
    c->r[2] = c->r[2] + 0x00000002u;
    mem_w8(ram, c->r[30] + 0x00000018u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x000000b4u);
    mem_wf32(ram, c->r[30] + 0x00000010u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000038u);
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x00000002u);
    c->f[0] = u2f(c->r[2]);
    c->f[0] = (f32)(s32)f2u(c->f[0]);
    mem_wf32(ram, c->r[30] + 0x00000014u, c->f[0]);
    c->r[3] = mem_r8(ram, c->r[30] + 0x00000018u);
    c->r[2] = 0u + 0x00000002u;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_088d66b8; }
    c->r[3] = mem_r8(ram, c->r[30] + 0x00000018u);
    c->r[2] = 0u + 0x00000003u;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_088d66b8; }
    { goto L_088d67e4; }
L_088d66b8:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000008cu);
    c->r[2] = c->r[2] & 0x1000u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_088d66f4; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000024u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000059acu);
    alx_c_cond_s(c, 12, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_088d66f4; }
    { goto L_088d67e4; }
L_088d66f4:
    c->r[2] = 0u + 0x00000004u;
    { mem_w8(ram, c->r[30] + 0x00000018u, c->r[2]); goto L_088d67e4; }
L_088d6700:
    c->r[2] = 0u + 0x00000004u;
    mem_w8(ram, c->r[30] + 0x00000018u, c->r[2]);
    mem_w32(ram, c->r[30] + 0x00000010u, 0u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000059b0u);
    { mem_wf32(ram, c->r[30] + 0x00000014u, c->f[0]); goto L_088d67e4; }
L_088d671c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000008cu);
    c->r[2] = c->r[2] & 0x1000u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_088d67cc; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000054u);
    c->r[3] = mem_r8(ram, c->r[2] + 0x00000000u);
    c->r[2] = 0u + 0x00000001u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_088d67cc; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000024u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000059acu);
    alx_c_cond_s(c, 12, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_088d6770; }
    { goto L_088d67cc; }
L_088d6770:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000005cu);
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x00000006u);
    c->f[0] = u2f(c->r[2]);
    c->f[0] = (f32)(s32)f2u(c->f[0]);
    mem_wf32(ram, c->r[30] + 0x0000003cu, c->f[0]);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x0000003cu);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000059b4u);
    c->f[1] = c->f[1] / c->f[0];
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000059b8u);
    c->f[0] = c->f[1] + c->f[0];
    mem_wf32(ram, c->r[30] + 0x0000003cu, c->f[0]);
    c->r[2] = 0u + 0x00000002u;
    mem_w8(ram, c->r[30] + 0x00000018u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x000000b4u);
    mem_wf32(ram, c->r[30] + 0x00000010u, c->f[0]);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x0000003cu);
    c->f[0] = c->f[0] + c->f[0];
    { mem_wf32(ram, c->r[30] + 0x00000014u, c->f[0]); goto L_088d67e4; }
L_088d67cc:
    c->r[2] = 0u + 0x00000004u;
    mem_w8(ram, c->r[30] + 0x00000018u, c->r[2]);
    mem_w32(ram, c->r[30] + 0x00000010u, 0u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000059b0u);
    mem_wf32(ram, c->r[30] + 0x00000014u, c->f[0]);
L_088d67e4:
    c->r[2] = c->r[30] + 0x00000010u;
    c->r[4] = 0u + 0x0000004bu;
    c->r[5] = 0u + 0u;
    c->r[6] = 0u + 0u;
    c->r[7] = 0u + 0u;
    c->r[8] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x088d6804u; c->r[9] = c->r[2] + 0u; func_089c6bec(c, ram); }
L_088d6804:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x000000b2u);
    { c->r[31] = 0x088d6814u; c->r[4] = c->r[2] + 0u; func_0896280c(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000054u);
    c->r[3] = mem_r8(ram, c->r[2] + 0x0000001du);
    c->r[2] = 0u + 0x000000ffu;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_088d6844; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000054u);
    c->r[2] = mem_r8(ram, c->r[2] + 0x0000001du);
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x088d6844u; c->r[5] = 0u + 0x00000001u; func_08960928(c, ram); }
L_088d6844:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000008cu);
    c->r[2] = c->r[2] & 0x0002u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_088d6880; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000054u);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000002u);
    { int _c = ((s32)c->r[2] >= 0); if (_c) goto L_088d6880; }
    c->r[2] = 0x08aa0000u;
    c->r[2] = mem_r16(ram, c->r[2] + 0x000049a8u);
    c->r[2] = c->r[2] + 0x00000001u;
    c->r[1] = 0x08aa0000u;
    mem_w16(ram, c->r[1] + 0x000049a8u, c->r[2]);
L_088d6880:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x088d688cu; c->r[5] = mem_r32(ram, c->r[30] + 0x00000004u); func_088d4264(c, ram); }
L_088d688c:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000044u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000040u);
    { c->r[29] = c->r[29] + 0x00000050u; return; }
    return; /* fell out of func_088d649c */
}

/* func_088dabc4  0x088dabc4..0x088dacdc  280 bytes, source=fde */
void func_088dabc4(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x088dabc4u);
    c->r[29] = c->r[29] + 0xffffffc0u;
    mem_w32(ram, c->r[29] + 0x00000034u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000030u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w16(ram, c->r[30] + 0x00000004u, 0u);
    c->r[2] = c->r[30] + 0x00000010u;
    { c->r[31] = 0x088dabe8u; c->r[4] = c->r[2] + 0u; func_08808240(c, ram); }
    { c->r[31] = 0x088dabf0u; func_08820f58(c, ram); }
    c->r[5] = c->r[2] + 0x00000020u;
    c->r[3] = c->r[30] + 0x00000010u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000020u;
    c->r[4] = c->r[3] + 0u;
    { c->r[31] = 0x088dac0cu; c->r[6] = c->r[2] + 0u; func_08820ca4(c, ram); }
    c->r[2] = c->r[30] + 0x00000010u;
    { c->r[31] = 0x088dac18u; c->r[4] = c->r[2] + 0u; func_08820c6c(c, ram); }
    mem_wf32(ram, c->r[30] + 0x00000020u, c->f[0]);
    { c->r[31] = 0x088dac24u; c->f[12] = mem_rf32(ram, c->r[30] + 0x00000020u); func_08a104b4(c, ram); }
    mem_wf32(ram, c->r[30] + 0x00000024u, c->f[0]);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000024u);
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    c->r[3] = f2u(c->f[0]);
    c->r[2] = (u32)((s32)c->r[3] >> 31);
    c->r[2] = c->r[2] >> 26;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = (u32)((s32)c->r[2] >> 6);
    mem_w32(ram, c->r[30] + 0x00000028u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000028u);
    mem_w32(ram, c->r[30] + 0x0000002cu, c->r[2]);
    c->r[2] = 0u + 0x00000001u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000002cu);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_088daca4; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000002cu);
    c->r[2] = ((s32)c->r[3] < (s32)0x00000002u) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_088dac84; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000002cu);
    { int _c = (c->r[2] == 0u); if (_c) goto L_088dac9c; }
    { goto L_088dacbc; }
L_088dac84:
    c->r[2] = 0u + 0x00000002u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000002cu);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_088dacb0; }
    { goto L_088dacbc; }
L_088dac9c:
    { mem_w16(ram, c->r[30] + 0x00000004u, 0u); goto L_088dacc4; }
L_088daca4:
    c->r[2] = 0u + 0x00000001u;
    { mem_w16(ram, c->r[30] + 0x00000004u, c->r[2]); goto L_088dacc4; }
L_088dacb0:
    c->r[2] = 0u + 0x00000002u;
    { mem_w16(ram, c->r[30] + 0x00000004u, c->r[2]); goto L_088dacc4; }
L_088dacbc:
    c->r[2] = 0u + 0x00000003u;
    mem_w16(ram, c->r[30] + 0x00000004u, c->r[2]);
L_088dacc4:
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[30] + 0x00000004u);
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000034u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000030u);
    { c->r[29] = c->r[29] + 0x00000040u; return; }
    return; /* fell out of func_088dabc4 */
}

/* func_088de938  0x088de938..0x088de984  76 bytes, source=sweep */
void func_088de938(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x088de938u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    c->r[2] = 0x08aa0000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0xffffed00u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_088de960; }
    c->r[2] = 0u + 0x000000ffu;
    { mem_w32(ram, c->r[30] + 0x00000000u, c->r[2]); goto L_088de970; }
L_088de960:
    c->r[2] = 0x08aa0000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0xffffed00u);
    c->r[2] = mem_r8(ram, c->r[2] + 0x0000001eu);
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[2]);
L_088de970:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_088de938 */
}

/* func_088e0714  0x088e0714..0x088e0a68  852 bytes, source=sweep */
void func_088e0714(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x088e0714u);
    c->r[29] = c->r[29] + 0xffffffd0u;
    mem_w32(ram, c->r[29] + 0x00000024u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000020u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = 0u | 0xffffu;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_088e0898; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = 0u + 0x00000001u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_088e0898; }
    c->r[2] = 0x08aa0000u;
    c->r[2] = c->r[2] + 0xffffec70u;
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
    c->r[2] = 0u + 0x00000003u;
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00005ba4u);
    c->r[1] = 0x08a40000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0x00005ba8u);
    c->r[4] = c->r[2] + 0u;
    c->f[12] = c->f[0];
    c->f[13] = u2f(0u);
    c->f[14] = c->f[1];
    c->f[15] = u2f(0u);
    { c->r[31] = 0x088e0798u; func_0880d140(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x00000010u;
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = c->r[2] + 0xffffffffu;
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00005bacu);
    c->r[1] = 0x08a40000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0x00005bb0u);
    c->r[1] = 0x08a40000u;
    c->f[2] = mem_rf32(ram, c->r[1] + 0x00005bb4u);
    c->r[4] = c->r[2] + 0u;
    c->f[12] = c->f[0];
    c->f[13] = c->f[1];
    c->f[14] = c->f[2];
    c->f[15] = u2f(0u);
    { c->r[31] = 0x088e07e8u; func_0880d140(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x00000010u;
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = c->r[2] + 0xffffffffu;
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00005bb8u);
    c->r[1] = 0x08a40000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0x00005bb0u);
    c->r[1] = 0x08a40000u;
    c->f[2] = mem_rf32(ram, c->r[1] + 0x00005bbcu);
    c->r[4] = c->r[2] + 0u;
    c->f[12] = c->f[0];
    c->f[13] = c->f[1];
    c->f[14] = c->f[2];
    c->f[15] = u2f(0u);
    { c->r[31] = 0x088e0838u; func_0880d140(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x00000010u;
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = c->r[2] + 0xffffffffu;
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00005bc0u);
    c->r[1] = 0x08a40000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0x00005bc4u);
    c->r[4] = c->r[2] + 0u;
    c->f[12] = c->f[0];
    c->f[13] = u2f(0u);
    c->f[14] = c->f[1];
    c->f[15] = u2f(0u);
    { c->r[31] = 0x088e0880u; func_0880d140(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x00000010u;
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = c->r[2] + 0xffffffffu;
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]);
L_088e0898:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = 0u | 0xffffu;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_088e0a54; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = 0u + 0x00000001u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_088e0a54; }
    c->r[2] = 0x08aa0000u;
    c->r[2] = c->r[2] + 0xffffecb0u;
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
    c->r[2] = 0u + 0x00000004u;
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00005bc8u);
    c->r[1] = 0x08a40000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0x00005bccu);
    c->r[4] = c->r[2] + 0u;
    c->f[12] = c->f[0];
    c->f[13] = u2f(0u);
    c->f[14] = c->f[1];
    c->f[15] = u2f(0u);
    { c->r[31] = 0x088e0904u; func_0880d140(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x00000010u;
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[2] + 0xffffffffu;
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00005bd0u);
    c->r[1] = 0x08a40000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0x00005bd4u);
    c->r[1] = 0x08a40000u;
    c->f[2] = mem_rf32(ram, c->r[1] + 0x00005bd8u);
    c->r[4] = c->r[2] + 0u;
    c->f[12] = c->f[0];
    c->f[13] = c->f[1];
    c->f[14] = c->f[2];
    c->f[15] = u2f(0u);
    { c->r[31] = 0x088e0954u; func_0880d140(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x00000010u;
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[2] + 0xffffffffu;
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00005bdcu);
    c->r[1] = 0x08a40000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0x00005be0u);
    c->r[1] = 0x08a40000u;
    c->f[2] = mem_rf32(ram, c->r[1] + 0x00005be4u);
    c->r[4] = c->r[2] + 0u;
    c->f[12] = c->f[0];
    c->f[13] = c->f[1];
    c->f[14] = c->f[2];
    c->f[15] = u2f(0u);
    { c->r[31] = 0x088e09a4u; func_0880d140(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x00000010u;
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[2] + 0xffffffffu;
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00005be8u);
    c->r[1] = 0x08a40000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0x00005bb0u);
    c->r[1] = 0x08a40000u;
    c->f[2] = mem_rf32(ram, c->r[1] + 0x00005becu);
    c->r[4] = c->r[2] + 0u;
    c->f[12] = c->f[0];
    c->f[13] = c->f[1];
    c->f[14] = c->f[2];
    c->f[15] = u2f(0u);
    { c->r[31] = 0x088e09f4u; func_0880d140(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x00000010u;
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[2] + 0xffffffffu;
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00005bf0u);
    c->r[1] = 0x08a40000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0x00005bf4u);
    c->r[4] = c->r[2] + 0u;
    c->f[12] = c->f[0];
    c->f[13] = u2f(0u);
    c->f[14] = c->f[1];
    c->f[15] = u2f(0u);
    { c->r[31] = 0x088e0a3cu; func_0880d140(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x00000010u;
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[2] + 0xffffffffu;
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]);
L_088e0a54:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000024u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000020u);
    { c->r[29] = c->r[29] + 0x00000030u; return; }
    return; /* fell out of func_088e0714 */
}

/* func_088e638c  0x088e638c..0x088e6600  628 bytes, source=sweep */
void func_088e638c(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x088e638cu);
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
    c->r[2] = 0u + 0x00000003u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000020u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_088e63e0; }
    c->r[2] = 0u + 0x00000004u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000020u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_088e65b4; }
    { goto L_088e65e8; }
L_088e63e0:
    c->r[2] = 0x08aa0000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00004968u);
    c->r[2] = c->r[2] & 0x0003u;
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    { int _c = (c->r[2] != 0u); if (_c) goto L_088e6454; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[16] = c->r[2] + 0x00000020u;
    c->r[2] = c->r[30] + 0x00000010u;
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00005dccu);
    c->r[1] = 0x08a40000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0x00005dd0u);
    c->r[4] = c->r[2] + 0u;
    c->f[12] = c->f[0];
    c->f[13] = u2f(0u);
    c->f[14] = c->f[1];
    c->f[15] = u2f(0u);
    { c->r[31] = 0x088e6434u; func_0880d140(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    mem_w32(ram, c->r[16] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    mem_w32(ram, c->r[16] + 0x00000004u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    mem_w32(ram, c->r[16] + 0x00000008u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    mem_w32(ram, c->r[16] + 0x0000000cu, c->r[2]);
L_088e6454:
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0u + 0x00000001u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_088e64bc; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[16] = c->r[2] + 0x00000020u;
    c->r[2] = c->r[30] + 0x00000010u;
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00005dccu);
    c->r[1] = 0x08a40000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0x00005dd4u);
    c->r[4] = c->r[2] + 0u;
    c->f[12] = c->f[0];
    c->f[13] = u2f(0u);
    c->f[14] = c->f[1];
    c->f[15] = u2f(0u);
    { c->r[31] = 0x088e649cu; func_0880d140(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    mem_w32(ram, c->r[16] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    mem_w32(ram, c->r[16] + 0x00000004u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    mem_w32(ram, c->r[16] + 0x00000008u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    mem_w32(ram, c->r[16] + 0x0000000cu, c->r[2]);
L_088e64bc:
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0u + 0x00000002u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_088e6524; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[16] = c->r[2] + 0x00000020u;
    c->r[2] = c->r[30] + 0x00000010u;
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00005dccu);
    c->r[1] = 0x08a40000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0x00005dd8u);
    c->r[4] = c->r[2] + 0u;
    c->f[12] = c->f[0];
    c->f[13] = u2f(0u);
    c->f[14] = c->f[1];
    c->f[15] = u2f(0u);
    { c->r[31] = 0x088e6504u; func_0880d140(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    mem_w32(ram, c->r[16] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    mem_w32(ram, c->r[16] + 0x00000004u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    mem_w32(ram, c->r[16] + 0x00000008u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    mem_w32(ram, c->r[16] + 0x0000000cu, c->r[2]);
L_088e6524:
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0u + 0x00000003u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_088e658c; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[16] = c->r[2] + 0x00000020u;
    c->r[2] = c->r[30] + 0x00000010u;
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00005dccu);
    c->r[1] = 0x08a40000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0x00005ddcu);
    c->r[4] = c->r[2] + 0u;
    c->f[12] = c->f[0];
    c->f[13] = u2f(0u);
    c->f[14] = c->f[1];
    c->f[15] = u2f(0u);
    { c->r[31] = 0x088e656cu; func_0880d140(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    mem_w32(ram, c->r[16] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    mem_w32(ram, c->r[16] + 0x00000004u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    mem_w32(ram, c->r[16] + 0x00000008u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    mem_w32(ram, c->r[16] + 0x0000000cu, c->r[2]);
L_088e658c:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = 0u + 0x00000096u;
    mem_w16(ram, c->r[3] + 0x00000034u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = 0u + 0x00000004u;
    mem_w8(ram, c->r[3] + 0x00000030u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = 0u + 0x00000001u;
    { mem_w8(ram, c->r[3] + 0x00000028u, c->r[2]); goto L_088e65e8; }
L_088e65b4:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = mem_r16(ram, c->r[2] + 0x00000034u);
    c->r[2] = c->r[2] + 0xffffffffu;
    mem_w16(ram, c->r[3] + 0x00000034u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x00000034u);
    { int _c = ((s32)c->r[2] > 0); if (_c) goto L_088e65e8; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    mem_w8(ram, c->r[2] + 0x00000030u, 0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    mem_w16(ram, c->r[2] + 0x00000034u, 0u);
L_088e65e8:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000038u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000034u);
    c->r[16] = mem_r32(ram, c->r[29] + 0x00000030u);
    { c->r[29] = c->r[29] + 0x00000040u; return; }
    return; /* fell out of func_088e638c */
}

/* func_088eb680  0x088eb680..0x088eb8c8  584 bytes, source=sweep */
void func_088eb680(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x088eb680u);
    c->r[29] = c->r[29] + 0xffffffd0u;
    mem_w32(ram, c->r[29] + 0x00000024u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000020u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[6]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = c->r[2] + 0x00000020u;
    c->r[2] = mem_r32(ram, c->r[3] + 0x00000000u);
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[3] + 0x00000004u);
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[3] + 0x00000008u);
    mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[3] + 0x0000000cu);
    mem_w32(ram, c->r[30] + 0x0000001cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000014u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x0000001cu);
    alx_c_cond_s(c, 12, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_088eb6e8; }
    { goto L_088eb6f4; }
L_088eb6e8:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x0000001cu);
    mem_wf32(ram, c->r[30] + 0x00000014u, c->f[0]);
L_088eb6f4:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x0000001cu);
    c->f[1] = -c->f[0];
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000014u);
    alx_c_cond_s(c, 12, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_088eb71c; }
    { goto L_088eb72c; }
L_088eb71c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x0000001cu);
    c->f[0] = -c->f[0];
    mem_wf32(ram, c->r[30] + 0x00000014u, c->f[0]);
L_088eb72c:
    mem_w32(ram, c->r[30] + 0x00000018u, 0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[4] = c->r[2] + 0x00000030u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[2] + 0x00000030u;
    c->r[3] = c->r[30] + 0x00000010u;
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x088eb750u; c->r[6] = c->r[3] + 0u; func_08859fd4(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000030u);
    c->f[0] = mem_rf32(ram, c->r[3] + 0x00000028u);
    alx_c_cond_s(c, 12, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_088eb778; }
    { goto L_088eb788; }
L_088eb778:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->f[0] = mem_rf32(ram, c->r[3] + 0x00000028u);
    mem_wf32(ram, c->r[2] + 0x00000030u, c->f[0]);
L_088eb788:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000030u);
    c->f[0] = mem_rf32(ram, c->r[3] + 0x0000002cu);
    alx_c_cond_s(c, 12, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_088eb7b0; }
    { goto L_088eb7c0; }
L_088eb7b0:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->f[0] = mem_rf32(ram, c->r[3] + 0x0000002cu);
    mem_wf32(ram, c->r[2] + 0x00000030u, c->f[0]);
L_088eb7c0:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000034u);
    c->f[0] = mem_rf32(ram, c->r[3] + 0x00000020u);
    alx_c_cond_s(c, 12, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_088eb7e8; }
    { goto L_088eb7f8; }
L_088eb7e8:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->f[0] = mem_rf32(ram, c->r[3] + 0x00000020u);
    mem_wf32(ram, c->r[2] + 0x00000034u, c->f[0]);
L_088eb7f8:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000034u);
    c->f[0] = mem_rf32(ram, c->r[3] + 0x00000024u);
    alx_c_cond_s(c, 12, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_088eb820; }
    { goto L_088eb830; }
L_088eb820:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->f[0] = mem_rf32(ram, c->r[3] + 0x00000024u);
    mem_wf32(ram, c->r[2] + 0x00000034u, c->f[0]);
L_088eb830:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000094u);
    c->r[2] = c->r[2] & 0x0008u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_088eb868; }
    mem_w32(ram, c->r[30] + 0x00000010u, 0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[4] = c->r[2] + 0x00000040u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000040u;
    c->r[3] = c->r[30] + 0x00000010u;
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x088eb868u; c->r[6] = c->r[3] + 0u; func_08859fd4(c, ram); }
L_088eb868:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[4] = c->r[2] + 0x00000020u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[2] + 0x00000020u;
    c->r[3] = c->r[30] + 0x00000010u;
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x088eb888u; c->r[6] = c->r[3] + 0u; func_08820ca4(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000050u);
    c->r[2] = c->r[2] + 0x00000040u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[6] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[4] = c->r[2] + 0u;
    c->f[12] = mem_rf32(ram, c->r[3] + 0x00000034u);
    c->f[13] = mem_rf32(ram, c->r[5] + 0x00000030u);
    { c->r[31] = 0x088eb8b4u; c->f[14] = mem_rf32(ram, c->r[6] + 0x00000038u); func_0885a0b8(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000024u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000020u);
    { c->r[29] = c->r[29] + 0x00000030u; return; }
    return; /* fell out of func_088eb680 */
}

/* func_088f1954  0x088f1954..0x088f1fac  1624 bytes, source=sweep */
void func_088f1954(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x088f1954u);
    c->r[29] = c->r[29] + 0xffffff10u;
    mem_w32(ram, c->r[29] + 0x000000e4u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x000000e0u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    c->r[2] = c->r[30] + 0x00000010u;
    mem_w32(ram, c->r[30] + 0x00000050u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000050u);
    mem_w32(ram, c->r[30] + 0x00000054u, c->r[2]);
    c->r[2] = 0u + 0x00000003u;
    mem_w32(ram, c->r[30] + 0x00000058u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000058u);
    c->r[2] = 0u + 0xffffffffu;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_088f19c4; }
L_088f1994:
    { c->r[31] = 0x088f199cu; c->r[4] = mem_r32(ram, c->r[30] + 0x00000054u); func_08808240(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000054u);
    c->r[2] = c->r[2] + 0x00000010u;
    mem_w32(ram, c->r[30] + 0x00000054u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000058u);
    c->r[2] = c->r[2] + 0xffffffffu;
    c->r[3] = c->r[2] + 0u;
    mem_w32(ram, c->r[30] + 0x00000058u, c->r[3]);
    c->r[2] = 0u + 0xffffffffu;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_088f1994; }
L_088f19c4:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[4] = mem_r32(ram, c->r[2] + 0x00000008u);
    c->r[2] = mem_r32(ram, c->r[3] + 0x00000018u);
    c->r[2] = c->r[4] & c->r[2];
    mem_w32(ram, c->r[30] + 0x00000060u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[4] = mem_r32(ram, c->r[2] + 0x00000008u);
    c->r[2] = mem_r32(ram, c->r[3] + 0x00000018u);
    c->r[2] = c->r[4] & c->r[2];
    mem_w32(ram, c->r[30] + 0x00000070u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[4] = mem_r32(ram, c->r[2] + 0x00000008u);
    c->r[2] = mem_r32(ram, c->r[3] + 0x00000018u);
    c->r[3] = c->r[4] & c->r[2];
    c->r[2] = 0xffc80000u;
    c->r[2] = c->r[2] | 0xc8c8u;
    c->r[2] = c->r[3] & c->r[2];
    mem_w32(ram, c->r[30] + 0x00000080u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[4] = mem_r32(ram, c->r[2] + 0x00000008u);
    c->r[2] = mem_r32(ram, c->r[3] + 0x00000018u);
    c->r[2] = c->r[4] & c->r[2];
    mem_w32(ram, c->r[30] + 0x00000090u, c->r[2]);
    c->r[2] = c->r[30] + 0x000000a0u;
    { c->r[31] = 0x088f1a3cu; c->r[4] = c->r[2] + 0u; func_08808260(c, ram); }
    c->r[2] = c->r[30] + 0x000000a0u;
    { c->r[31] = 0x088f1a48u; c->r[4] = c->r[2] + 0u; func_08808280(c, ram); }
    c->r[2] = c->r[30] + 0x000000a0u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[6] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[4] = c->r[2] + 0u;
    c->f[12] = mem_rf32(ram, c->r[3] + 0x00000044u);
    c->f[13] = mem_rf32(ram, c->r[5] + 0x00000040u);
    { c->r[31] = 0x088f1a6cu; c->f[14] = mem_rf32(ram, c->r[6] + 0x00000048u); func_0885a0b8(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000008u, 0u);
L_088f1a70:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000004u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_088f1a88; }
    { goto L_088f1bb8; }
L_088f1a88:
    c->r[3] = c->r[30] + 0x00000010u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[2] << 4;
    c->r[4] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[3] = c->r[2] << 4;
    c->r[2] = 0x08aa0000u;
    c->r[2] = c->r[2] + 0xffffed90u;
    c->r[3] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x0000003cu);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00006150u);
    c->f[1] = c->f[1] / c->f[0];
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000010u);
    c->f[0] = c->f[1] * c->f[0];
    c->r[5] = c->r[3] + 0u;
    { c->r[31] = 0x088f1adcu; c->f[12] = c->f[0]; func_0884c224(c, ram); }
    c->r[3] = c->r[30] + 0x00000010u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[2] << 4;
    c->r[4] = c->r[3] + c->r[2];
    c->r[3] = c->r[30] + 0x00000010u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[2] << 4;
    c->r[2] = c->r[3] + c->r[2];
    c->r[3] = c->r[30] + 0x000000a0u;
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x088f1b0cu; c->r[6] = c->r[3] + 0u; func_0884c26c(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[2] << 4;
    c->r[2] = c->r[2] + c->r[30];
    c->r[4] = c->r[2] + 0x00000060u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[2] << 4;
    c->r[2] = c->r[2] + c->r[30];
    c->r[2] = c->r[2] + 0x00000010u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000000u);
    c->f[0] = mem_rf32(ram, c->r[3] + 0x00000020u);
    c->f[0] = c->f[1] + c->f[0];
    mem_wf32(ram, c->r[4] + 0x00000004u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[2] << 4;
    c->r[2] = c->r[2] + c->r[30];
    c->r[4] = c->r[2] + 0x00000060u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[2] << 4;
    c->r[2] = c->r[2] + c->r[30];
    c->r[2] = c->r[2] + 0x00000010u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000004u);
    c->f[0] = mem_rf32(ram, c->r[3] + 0x00000024u);
    c->f[0] = c->f[1] + c->f[0];
    mem_wf32(ram, c->r[4] + 0x00000008u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[2] << 4;
    c->r[2] = c->r[2] + c->r[30];
    c->r[4] = c->r[2] + 0x00000060u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[2] << 4;
    c->r[2] = c->r[2] + c->r[30];
    c->r[2] = c->r[2] + 0x00000010u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000008u);
    c->f[0] = mem_rf32(ram, c->r[3] + 0x00000028u);
    c->f[0] = c->f[1] + c->f[0];
    mem_wf32(ram, c->r[4] + 0x0000000cu, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]); goto L_088f1a70; }
L_088f1bb8:
    c->r[4] = 0u + 0x000000c0u;
    { c->r[31] = 0x088f1bc4u; c->r[5] = 0u + 0x00000010u; func_0881a1d4(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000058u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000058u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000060u);
    mem_w32(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000064u);
    mem_w32(ram, c->r[3] + 0x00000004u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000068u);
    mem_w32(ram, c->r[3] + 0x00000008u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000006cu);
    mem_w32(ram, c->r[3] + 0x0000000cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000058u);
    c->r[3] = c->r[2] + 0x00000010u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000070u);
    mem_w32(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000074u);
    mem_w32(ram, c->r[3] + 0x00000004u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000078u);
    mem_w32(ram, c->r[3] + 0x00000008u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000007cu);
    mem_w32(ram, c->r[3] + 0x0000000cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000058u);
    c->r[3] = c->r[2] + 0x00000020u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000080u);
    mem_w32(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000084u);
    mem_w32(ram, c->r[3] + 0x00000004u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000088u);
    mem_w32(ram, c->r[3] + 0x00000008u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000008cu);
    mem_w32(ram, c->r[3] + 0x0000000cu, c->r[2]);
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000058u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000058u);
    c->r[4] = c->r[2] + 0x00000010u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000058u);
    c->r[3] = c->r[2] + 0x00000020u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000060u);
    mem_w32(ram, c->r[3] + 0x00000000u, c->r[2]);
    mem_w32(ram, c->r[4] + 0x00000000u, c->r[2]);
    mem_w32(ram, c->r[5] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000058u);
    c->r[3] = c->r[2] + 0x00000030u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000060u);
    mem_w32(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000064u);
    mem_w32(ram, c->r[3] + 0x00000004u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000068u);
    mem_w32(ram, c->r[3] + 0x00000008u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000006cu);
    mem_w32(ram, c->r[3] + 0x0000000cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000058u);
    c->r[3] = c->r[2] + 0x00000040u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000080u);
    mem_w32(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000084u);
    mem_w32(ram, c->r[3] + 0x00000004u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000088u);
    mem_w32(ram, c->r[3] + 0x00000008u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000008cu);
    mem_w32(ram, c->r[3] + 0x0000000cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000058u);
    c->r[3] = c->r[2] + 0x00000050u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000090u);
    mem_w32(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000094u);
    mem_w32(ram, c->r[3] + 0x00000004u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000098u);
    mem_w32(ram, c->r[3] + 0x00000008u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000009cu);
    mem_w32(ram, c->r[3] + 0x0000000cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000058u);
    c->r[5] = c->r[2] + 0x00000030u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000058u);
    c->r[4] = c->r[2] + 0x00000040u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000058u);
    c->r[3] = c->r[2] + 0x00000050u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000070u);
    mem_w32(ram, c->r[3] + 0x00000000u, c->r[2]);
    mem_w32(ram, c->r[4] + 0x00000000u, c->r[2]);
    mem_w32(ram, c->r[5] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000058u);
    c->r[3] = c->r[2] + 0x00000060u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000060u);
    mem_w32(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000064u);
    mem_w32(ram, c->r[3] + 0x00000004u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000068u);
    mem_w32(ram, c->r[3] + 0x00000008u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000006cu);
    mem_w32(ram, c->r[3] + 0x0000000cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000058u);
    c->r[3] = c->r[2] + 0x00000070u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000090u);
    mem_w32(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000094u);
    mem_w32(ram, c->r[3] + 0x00000004u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000098u);
    mem_w32(ram, c->r[3] + 0x00000008u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000009cu);
    mem_w32(ram, c->r[3] + 0x0000000cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000058u);
    c->r[3] = c->r[2] + 0x00000080u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000070u);
    mem_w32(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000074u);
    mem_w32(ram, c->r[3] + 0x00000004u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000078u);
    mem_w32(ram, c->r[3] + 0x00000008u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000007cu);
    mem_w32(ram, c->r[3] + 0x0000000cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000058u);
    c->r[5] = c->r[2] + 0x00000060u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000058u);
    c->r[4] = c->r[2] + 0x00000070u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000058u);
    c->r[3] = c->r[2] + 0x00000080u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000080u);
    mem_w32(ram, c->r[3] + 0x00000000u, c->r[2]);
    mem_w32(ram, c->r[4] + 0x00000000u, c->r[2]);
    mem_w32(ram, c->r[5] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000058u);
    c->r[3] = c->r[2] + 0x00000090u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000070u);
    mem_w32(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000074u);
    mem_w32(ram, c->r[3] + 0x00000004u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000078u);
    mem_w32(ram, c->r[3] + 0x00000008u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000007cu);
    mem_w32(ram, c->r[3] + 0x0000000cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000058u);
    c->r[3] = c->r[2] + 0x000000a0u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000090u);
    mem_w32(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000094u);
    mem_w32(ram, c->r[3] + 0x00000004u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000098u);
    mem_w32(ram, c->r[3] + 0x00000008u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000009cu);
    mem_w32(ram, c->r[3] + 0x0000000cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000058u);
    c->r[3] = c->r[2] + 0x000000b0u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000080u);
    mem_w32(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000084u);
    mem_w32(ram, c->r[3] + 0x00000004u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000088u);
    mem_w32(ram, c->r[3] + 0x00000008u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000008cu);
    mem_w32(ram, c->r[3] + 0x0000000cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000058u);
    c->r[5] = c->r[2] + 0x00000090u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000058u);
    c->r[4] = c->r[2] + 0x000000a0u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000058u);
    c->r[3] = c->r[2] + 0x000000b0u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000090u);
    mem_w32(ram, c->r[3] + 0x00000000u, c->r[2]);
    mem_w32(ram, c->r[4] + 0x00000000u, c->r[2]);
    mem_w32(ram, c->r[5] + 0x00000000u, c->r[2]);
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
    c->r[8] = 0u + 0x00000004u;
    c->r[9] = 0u + 0u;
    { c->r[31] = 0x088f1e9cu; c->r[10] = mem_r32(ram, c->r[30] + 0x00000058u); func_088f4268(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000018u);
    c->r[2] = c->r[2] >> 1;
    mem_w32(ram, c->r[30] + 0x00000054u, c->r[2]);
    c->r[4] = 0u + 0x00000020u;
    { c->r[31] = 0x088f1eb8u; c->r[5] = 0u + 0x00000010u; func_0881a1d4(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000050u, c->r[2]);
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000050u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000050u);
    c->r[4] = c->r[2] + 0x00000010u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000054u);
    c->r[2] = 0x7f230000u;
    c->r[2] = c->r[2] | 0x0f00u;
    c->r[2] = c->r[3] & c->r[2];
    mem_w32(ram, c->r[4] + 0x00000000u, c->r[2]);
    mem_w32(ram, c->r[5] + 0x00000000u, c->r[2]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000050u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000050u);
    c->r[3] = c->r[2] + 0x00000010u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000020u);
    mem_wf32(ram, c->r[3] + 0x00000004u, c->f[0]);
    mem_wf32(ram, c->r[4] + 0x00000004u, c->f[0]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000050u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000024u);
    mem_wf32(ram, c->r[3] + 0x00000008u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000050u);
    c->r[3] = c->r[2] + 0x00000010u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000014u);
    mem_wf32(ram, c->r[3] + 0x00000008u, c->f[0]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000050u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000050u);
    c->r[3] = c->r[2] + 0x00000010u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000028u);
    mem_wf32(ram, c->r[3] + 0x0000000cu, c->f[0]);
    mem_wf32(ram, c->r[4] + 0x0000000cu, c->f[0]);
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
    c->r[7] = 0u + 0x00000002u;
    c->r[8] = 0u + 0x00000001u;
    c->r[9] = 0u + 0u;
    { c->r[31] = 0x088f1f98u; c->r[10] = mem_r32(ram, c->r[30] + 0x00000050u); func_088f4268(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x000000e4u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x000000e0u);
    { c->r[29] = c->r[29] + 0x000000f0u; return; }
    return; /* fell out of func_088f1954 */
}

/* func_088f5a8c  0x088f5a8c..0x088f5d10  644 bytes, source=fde */
void func_088f5a8c(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x088f5a8cu);
    c->r[29] = c->r[29] + 0xffffffb0u;
    mem_w32(ram, c->r[29] + 0x0000004cu, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000048u, c->r[30]);
    mem_w32(ram, c->r[29] + 0x00000044u, c->r[17]);
    mem_w32(ram, c->r[29] + 0x00000040u, c->r[16]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    { c->r[31] = 0x088f5ab4u; mem_w32(ram, c->r[30] + 0x00000008u, c->r[6]); func_088df13c(c, ram); }
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x0000001cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = ((s32)c->r[2] < (s32)c->r[3]) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_088f5adc; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    { mem_w16(ram, c->r[2] + 0x000000aau, 0u); goto L_088f5cf4; }
L_088f5adc:
    c->r[2] = 0x08a80000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00002ed8u);
    c->r[3] = c->r[2] + 0x00000030u;
    c->r[2] = mem_r32(ram, c->r[3] + 0x00000000u);
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[3] + 0x00000004u);
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[3] + 0x00000008u);
    mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[3] + 0x0000000cu);
    mem_w32(ram, c->r[30] + 0x0000001cu, c->r[2]);
    mem_w32(ram, c->r[30] + 0x00000014u, 0u);
    c->r[2] = c->r[30] + 0x00000010u;
    c->r[3] = c->r[30] + 0x00000010u;
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x088f5b20u; c->r[5] = c->r[3] + 0u; func_0884c1d8(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000008u);
    mem_wf32(ram, c->r[30] + 0x00000020u, c->f[0]);
    c->r[2] = c->r[30] + 0x00000010u;
    c->r[3] = c->r[30] + 0x00000010u;
    c->r[4] = c->r[2] + 0u;
    c->r[5] = c->r[3] + 0u;
    { c->r[31] = 0x088f5b44u; c->f[12] = mem_rf32(ram, c->r[30] + 0x00000020u); func_0884c224(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[16] = c->r[2] + 0x00000020u;
    c->r[4] = c->r[30] + 0x00000030u;
    c->r[2] = 0x08a80000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00002ed8u);
    c->r[2] = c->r[2] + 0x00000020u;
    c->r[3] = c->r[30] + 0x00000010u;
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x088f5b6cu; c->r[6] = c->r[3] + 0u; func_08859f30(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000030u);
    mem_w32(ram, c->r[16] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000034u);
    mem_w32(ram, c->r[16] + 0x00000004u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000038u);
    mem_w32(ram, c->r[16] + 0x00000008u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000003cu);
    mem_w32(ram, c->r[16] + 0x0000000cu, c->r[2]);
    c->r[17] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[16] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00006228u);
    c->r[1] = 0x08a40000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0x0000622cu);
    c->f[12] = c->f[0];
    { c->r[31] = 0x088f5bb0u; c->f[13] = c->f[1]; func_0884bf84(c, ram); }
    c->f[1] = c->f[0];
    c->f[0] = mem_rf32(ram, c->r[16] + 0x00000020u);
    c->f[0] = c->f[0] + c->f[1];
    mem_wf32(ram, c->r[17] + 0x00000020u, c->f[0]);
    c->r[17] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[16] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00006230u);
    c->f[12] = u2f(0u);
    { c->r[31] = 0x088f5bdcu; c->f[13] = c->f[0]; func_0884bf84(c, ram); }
    c->f[1] = c->f[0];
    c->f[0] = mem_rf32(ram, c->r[16] + 0x00000024u);
    c->f[0] = c->f[0] + c->f[1];
    mem_wf32(ram, c->r[17] + 0x00000024u, c->f[0]);
    c->r[17] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[16] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00006228u);
    c->r[1] = 0x08a40000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0x0000622cu);
    c->f[12] = c->f[0];
    { c->r[31] = 0x088f5c10u; c->f[13] = c->f[1]; func_0884bf84(c, ram); }
    c->f[1] = c->f[0];
    c->f[0] = mem_rf32(ram, c->r[16] + 0x00000028u);
    c->f[0] = c->f[0] + c->f[1];
    mem_wf32(ram, c->r[17] + 0x00000028u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    mem_w16(ram, c->r[2] + 0x000000aau, 0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[16] = c->r[2] + 0x00000030u;
    c->r[2] = c->r[30] + 0x00000030u;
    c->r[4] = c->r[2] + 0u;
    c->f[12] = u2f(0u);
    c->f[13] = u2f(0u);
    c->f[14] = u2f(0u);
    c->f[15] = u2f(0u);
    { c->r[31] = 0x088f5c50u; func_0880d140(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000030u);
    mem_w32(ram, c->r[16] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000034u);
    mem_w32(ram, c->r[16] + 0x00000004u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000038u);
    mem_w32(ram, c->r[16] + 0x00000008u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000003cu);
    mem_w32(ram, c->r[16] + 0x0000000cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[16] = c->r[2] + 0x00000040u;
    c->r[2] = c->r[30] + 0x00000030u;
    c->r[4] = c->r[2] + 0u;
    c->f[12] = u2f(0u);
    c->f[13] = u2f(0u);
    c->f[14] = u2f(0u);
    c->f[15] = u2f(0u);
    { c->r[31] = 0x088f5c98u; func_0880d140(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000030u);
    mem_w32(ram, c->r[16] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000034u);
    mem_w32(ram, c->r[16] + 0x00000004u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000038u);
    mem_w32(ram, c->r[16] + 0x00000008u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000003cu);
    mem_w32(ram, c->r[16] + 0x0000000cu, c->r[2]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x0000008cu);
    c->r[2] = 0xff7f0000u;
    c->r[2] = c->r[2] | 0xffffu;
    c->r[2] = c->r[3] & c->r[2];
    mem_w32(ram, c->r[4] + 0x0000008cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[16] = mem_r32(ram, c->r[2] + 0x00000050u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->f[12] = u2f(0u);
    { c->r[31] = 0x088f5cecu; c->f[13] = mem_rf32(ram, c->r[2] + 0x00000020u); func_0884bf84(c, ram); }
    { c->r[31] = 0x088f5cf4u; mem_wf32(ram, c->r[16] + 0x000000acu, c->f[0]); func_088df08c(c, ram); }
L_088f5cf4:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x0000004cu);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000048u);
    c->r[17] = mem_r32(ram, c->r[29] + 0x00000044u);
    c->r[16] = mem_r32(ram, c->r[29] + 0x00000040u);
    { c->r[29] = c->r[29] + 0x00000050u; return; }
    return; /* fell out of func_088f5a8c */
}

/* func_088faffc  0x088faffc..0x088fb040  68 bytes, source=sweep */
void func_088faffc(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x088faffcu);
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
    return; /* fell out of func_088faffc */
}

/* func_08900c88  0x08900c88..0x08900d88  256 bytes, source=fde */
void func_08900c88(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08900c88u);
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
    { c->r[31] = 0x08900cdcu; c->r[6] = 0u + 0u; func_0880ef80(c, ram); }
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
    { int _c = (c->r[2] != 0u); if (_c) goto L_08900d34; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    { mem_w32(ram, c->r[30] + 0x00000028u, c->r[2]); goto L_08900d40; }
L_08900d34:
    { c->r[31] = 0x08900d3cu; c->r[4] = mem_r32(ram, c->r[30] + 0x00000018u); func_089241c8(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000028u, c->r[2]);
L_08900d40:
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
    { c->r[31] = 0x08900d74u; c->r[7] = c->r[3] + 0u; func_089ce998(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000034u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000030u);
    { c->r[29] = c->r[29] + 0x00000040u; return; }
    return; /* fell out of func_08900c88 */
}

/* func_0890352c  0x0890352c..0x089035ac  128 bytes, source=sweep */
void func_0890352c(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0890352cu);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
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
    { c->r[31] = 0x08903598u; c->r[5] = mem_r32(ram, c->r[5] + 0xfffff574u); func_08920944(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_0890352c */
}

/* func_08908244  0x08908244..0x08909448  4612 bytes, source=fde */
void func_08908244(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08908244u);
    c->r[29] = c->r[29] + 0xfffffd50u;
    mem_w32(ram, c->r[29] + 0x000002a4u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x000002a0u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[2] = c->r[2] & 0x0001u;
    c->r[2] = c->r[2] & 0x00ffu;
    { int _c = (c->r[2] == 0u); if (_c) goto L_08908278; }
    { goto L_08909434; }
L_08908278:
    { c->r[31] = 0x08908280u; func_08862e24(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000009u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_0890829c; }
    c->r[2] = 0u + 0x00000008u;
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[2]);
L_0890829c:
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000004u);
    c->f[1] = (f32)(s32)f2u(c->f[0]);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000066ecu);
    c->f[1] = c->f[1] / c->f[0];
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000066f0u);
    c->f[0] = c->f[0] - c->f[1];
    c->r[1] = 0x08a50000u;
    mem_wf32(ram, c->r[1] + 0x00007b34u, c->f[0]);
    c->r[4] = 0x08aa0000u;
    c->r[4] = c->r[4] + 0xfffff540u;
    c->r[5] = 0u + 0x00000006u;
    { c->r[31] = 0x089082d8u; c->r[6] = 0u + 0u; func_0880ef80(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000020u);
    c->f[0] = mem_rf32(ram, c->r[3] + 0x00000000u);
    c->f[0] = c->f[1] - c->f[0];
    mem_wf32(ram, c->r[30] + 0x0000000cu, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000024u);
    c->f[0] = mem_rf32(ram, c->r[3] + 0x00000004u);
    c->f[0] = c->f[1] - c->f[0];
    mem_wf32(ram, c->r[30] + 0x00000010u, c->f[0]);
    c->r[2] = 0x08a80000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00002ed8u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000040u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000066f4u);
    c->f[1] = c->f[1] / c->f[0];
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000066f8u);
    c->f[0] = c->f[1] * c->f[0];
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    mem_wf32(ram, c->r[30] + 0x00000014u, c->f[0]);
    c->r[2] = c->r[30] + 0x00000020u;
    mem_w32(ram, c->r[30] + 0x00000060u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000060u);
    mem_w32(ram, c->r[30] + 0x00000064u, c->r[2]);
    c->r[2] = 0u + 0x00000003u;
    mem_w32(ram, c->r[30] + 0x00000068u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000068u);
    c->r[2] = 0u + 0xffffffffu;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_08908390; }
L_08908360:
    { c->r[31] = 0x08908368u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000064u); func_08808240(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000064u);
    c->r[2] = c->r[2] + 0x00000010u;
    mem_w32(ram, c->r[30] + 0x00000064u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000068u);
    c->r[2] = c->r[2] + 0xffffffffu;
    c->r[3] = c->r[2] + 0u;
    mem_w32(ram, c->r[30] + 0x00000068u, c->r[3]);
    c->r[2] = 0u + 0xffffffffu;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_08908360; }
L_08908390:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000008u);
    mem_w32(ram, c->r[30] + 0x00000068u, c->r[2]);
    c->r[2] = c->r[30] + 0x00000070u;
    { c->r[31] = 0x089083a8u; c->r[4] = c->r[2] + 0u; func_08808260(c, ram); }
    c->r[2] = c->r[30] + 0x000000b0u;
    { c->r[31] = 0x089083b4u; c->r[4] = c->r[2] + 0u; func_08808260(c, ram); }
    c->r[3] = c->r[30] + 0x00000070u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x0000000cu);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000066fcu);
    c->f[1] = c->f[1] / c->f[0];
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000000u);
    c->f[0] = c->f[1] + c->f[0];
    c->f[2] = -c->f[0];
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000010u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000066fcu);
    c->f[1] = c->f[1] / c->f[0];
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000004u);
    c->f[0] = c->f[1] + c->f[0];
    c->f[0] = -c->f[0];
    c->r[4] = c->r[3] + 0u;
    c->f[12] = c->f[2];
    c->f[13] = c->f[0];
    c->f[14] = u2f(0u);
    { c->r[31] = 0x08908410u; func_088a00e0(c, ram); }
    c->r[2] = c->r[30] + 0x000000b0u;
    c->r[3] = 0x08a80000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00002ed8u);
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x08908428u; c->f[12] = mem_rf32(ram, c->r[3] + 0x00000048u); func_0884c8f0(c, ram); }
    c->r[2] = c->r[30] + 0x00000070u;
    c->r[3] = c->r[30] + 0x00000070u;
    c->r[6] = c->r[30] + 0x000000b0u;
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x08908440u; c->r[5] = c->r[3] + 0u; func_0884c6d4(c, ram); }
    c->r[3] = c->r[30] + 0x000000b0u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x0000000cu);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000066fcu);
    c->f[1] = c->f[1] / c->f[0];
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000000u);
    c->f[2] = c->f[1] + c->f[0];
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000010u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000066fcu);
    c->f[1] = c->f[1] / c->f[0];
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000004u);
    c->f[0] = c->f[1] + c->f[0];
    c->r[4] = c->r[3] + 0u;
    c->f[12] = c->f[2];
    c->f[13] = c->f[0];
    c->f[14] = u2f(0u);
    { c->r[31] = 0x08908494u; func_088a00e0(c, ram); }
    c->r[2] = c->r[30] + 0x00000070u;
    c->r[3] = c->r[30] + 0x00000070u;
    c->r[6] = c->r[30] + 0x000000b0u;
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x089084acu; c->r[5] = c->r[3] + 0u; func_0884c6d4(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000064u, 0u);
L_089084b0:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000064u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000004u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_089084c8; }
    { goto L_08908c0c; }
L_089084c8:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000064u);
    c->r[2] = c->r[2] + 0x00000006u;
    c->r[4] = 0x08aa0000u;
    c->r[4] = c->r[4] + 0xfffff540u;
    c->r[5] = 0u + 0x0000000bu;
    { c->r[31] = 0x089084e4u; c->r[6] = c->r[2] + 0u; func_0880ef80(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000060u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000060u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000014u);
    c->f[1] = (f32)(s32)f2u(c->f[0]);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000024u);
    c->f[1] = c->f[1] + c->f[0];
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000004u);
    alx_c_cond_s(c, 12, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_0890851c; }
    { goto L_08908bfc; }
L_0890851c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000060u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000014u);
    c->f[1] = (f32)(s32)f2u(c->f[0]);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000004u);
    c->f[1] = c->f[1] + c->f[0];
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000024u);
    alx_c_cond_s(c, 12, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_08908550; }
    { goto L_08908bfc; }
L_08908550:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000060u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000060u);
    c->r[4] = mem_r16(ram, c->r[2] + 0x0000002au);
    c->r[2] = mem_r16(ram, c->r[3] + 0x0000000au);
    c->r[2] = c->r[4] - c->r[2];
    mem_w16(ram, c->r[30] + 0x000000f0u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000060u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000060u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000024u);
    c->f[0] = mem_rf32(ram, c->r[3] + 0x00000004u);
    c->f[0] = c->f[1] - c->f[0];
    mem_wf32(ram, c->r[30] + 0x000000f4u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000060u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000004u);
    mem_wf32(ram, c->r[30] + 0x000000f8u, c->f[0]);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x000000f8u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x000000f4u);
    c->f[0] = c->f[1] + c->f[0];
    mem_wf32(ram, c->r[30] + 0x000000fcu, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000014u);
    c->f[1] = (f32)(s32)f2u(c->f[0]);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x000000f8u);
    c->f[1] = c->f[1] + c->f[0];
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000004u);
    c->f[0] = c->f[0] - c->f[1];
    mem_wf32(ram, c->r[30] + 0x00000100u, c->f[0]);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000014u);
    c->f[1] = (f32)(s32)f2u(c->f[0]);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x000000f8u);
    c->f[1] = c->f[1] + c->f[0];
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000004u);
    alx_c_cond_s(c, 12, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_089085ec; }
    { goto L_089085f4; }
L_089085ec:
    { mem_w32(ram, c->r[30] + 0x000000f8u, 0u); goto L_08908604; }
L_089085f4:
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000100u);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x000000f4u);
    c->f[0] = c->f[0] / c->f[1];
    mem_wf32(ram, c->r[30] + 0x000000f8u, c->f[0]);
L_08908604:
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000014u);
    c->f[1] = (f32)(s32)f2u(c->f[0]);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x000000fcu);
    c->f[1] = c->f[1] + c->f[0];
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000024u);
    c->f[0] = c->f[1] - c->f[0];
    mem_wf32(ram, c->r[30] + 0x00000100u, c->f[0]);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000014u);
    c->f[1] = (f32)(s32)f2u(c->f[0]);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x000000fcu);
    c->f[1] = c->f[1] + c->f[0];
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000024u);
    alx_c_cond_s(c, 12, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_08908654; }
    { goto L_08908664; }
L_08908654:
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000066f0u);
    { mem_wf32(ram, c->r[30] + 0x000000fcu, c->f[0]); goto L_08908680; }
L_08908664:
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000100u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x000000f4u);
    c->f[1] = c->f[1] / c->f[0];
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000066f0u);
    c->f[0] = c->f[0] - c->f[1];
    mem_wf32(ram, c->r[30] + 0x000000fcu, c->f[0]);
L_08908680:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000060u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000014u);
    c->f[1] = (f32)(s32)f2u(c->f[0]);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000004u);
    c->f[0] = c->f[0] + c->f[1];
    mem_wf32(ram, c->r[30] + 0x00000104u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000060u);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000104u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000024u);
    c->f[1] = c->f[1] + c->f[0];
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000060u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000004u);
    c->f[0] = c->f[1] - c->f[0];
    mem_wf32(ram, c->r[30] + 0x00000108u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000104u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000004u);
    alx_c_cond_s(c, 12, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_089086dc; }
    { goto L_089086e8; }
L_089086dc:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000004u);
    mem_wf32(ram, c->r[30] + 0x00000104u, c->f[0]);
L_089086e8:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000108u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000024u);
    alx_c_cond_s(c, 12, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_0890870c; }
    { goto L_08908718; }
L_0890870c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000024u);
    mem_wf32(ram, c->r[30] + 0x00000108u, c->f[0]);
L_08908718:
    c->r[2] = c->r[30] + 0x00000110u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000060u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000066f0u);
    c->r[4] = c->r[2] + 0u;
    c->f[12] = mem_rf32(ram, c->r[3] + 0x00000000u);
    c->f[13] = mem_rf32(ram, c->r[30] + 0x00000104u);
    c->f[14] = u2f(0u);
    { c->r[31] = 0x08908740u; c->f[15] = c->f[0]; func_0880d140(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000110u);
    mem_w32(ram, c->r[30] + 0x00000020u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000114u);
    mem_w32(ram, c->r[30] + 0x00000024u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000118u);
    mem_w32(ram, c->r[30] + 0x00000028u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000011cu);
    mem_w32(ram, c->r[30] + 0x0000002cu, c->r[2]);
    c->r[2] = c->r[30] + 0x00000110u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000060u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000066f0u);
    c->r[4] = c->r[2] + 0u;
    c->f[12] = mem_rf32(ram, c->r[3] + 0x00000010u);
    c->f[13] = mem_rf32(ram, c->r[30] + 0x00000104u);
    c->f[14] = u2f(0u);
    { c->r[31] = 0x08908788u; c->f[15] = c->f[0]; func_0880d140(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000110u);
    mem_w32(ram, c->r[30] + 0x00000030u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000114u);
    mem_w32(ram, c->r[30] + 0x00000034u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000118u);
    mem_w32(ram, c->r[30] + 0x00000038u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000011cu);
    mem_w32(ram, c->r[30] + 0x0000003cu, c->r[2]);
    c->r[2] = c->r[30] + 0x00000110u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000060u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000066f0u);
    c->r[4] = c->r[2] + 0u;
    c->f[12] = mem_rf32(ram, c->r[3] + 0x00000020u);
    c->f[13] = mem_rf32(ram, c->r[30] + 0x00000108u);
    c->f[14] = u2f(0u);
    { c->r[31] = 0x089087d0u; c->f[15] = c->f[0]; func_0880d140(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000110u);
    mem_w32(ram, c->r[30] + 0x00000040u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000114u);
    mem_w32(ram, c->r[30] + 0x00000044u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000118u);
    mem_w32(ram, c->r[30] + 0x00000048u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000011cu);
    mem_w32(ram, c->r[30] + 0x0000004cu, c->r[2]);
    c->r[2] = c->r[30] + 0x00000110u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000060u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000066f0u);
    c->r[4] = c->r[2] + 0u;
    c->f[12] = mem_rf32(ram, c->r[3] + 0x00000030u);
    c->f[13] = mem_rf32(ram, c->r[30] + 0x00000108u);
    c->f[14] = u2f(0u);
    { c->r[31] = 0x08908818u; c->f[15] = c->f[0]; func_0880d140(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000110u);
    mem_w32(ram, c->r[30] + 0x00000050u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000114u);
    mem_w32(ram, c->r[30] + 0x00000054u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000118u);
    mem_w32(ram, c->r[30] + 0x00000058u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000011cu);
    mem_w32(ram, c->r[30] + 0x0000005cu, c->r[2]);
    c->r[2] = c->r[30] + 0x00000020u;
    c->r[3] = c->r[30] + 0x00000020u;
    c->r[6] = c->r[30] + 0x00000070u;
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x08908850u; c->r[5] = c->r[3] + 0u; func_0884c26c(c, ram); }
    c->r[2] = c->r[30] + 0x00000020u;
    c->r[4] = c->r[2] + 0x00000010u;
    c->r[2] = c->r[30] + 0x00000020u;
    c->r[2] = c->r[2] + 0x00000010u;
    c->r[3] = c->r[30] + 0x00000070u;
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x08908870u; c->r[6] = c->r[3] + 0u; func_0884c26c(c, ram); }
    c->r[2] = c->r[30] + 0x00000020u;
    c->r[4] = c->r[2] + 0x00000020u;
    c->r[2] = c->r[30] + 0x00000020u;
    c->r[2] = c->r[2] + 0x00000020u;
    c->r[3] = c->r[30] + 0x00000070u;
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x08908890u; c->r[6] = c->r[3] + 0u; func_0884c26c(c, ram); }
    c->r[2] = c->r[30] + 0x00000020u;
    c->r[4] = c->r[2] + 0x00000030u;
    c->r[2] = c->r[30] + 0x00000020u;
    c->r[2] = c->r[2] + 0x00000030u;
    c->r[3] = c->r[30] + 0x00000070u;
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x089088b0u; c->r[6] = c->r[3] + 0u; func_0884c26c(c, ram); }
    { c->r[31] = 0x089088b8u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000068u); func_089035ac(c, ram); }
    c->r[4] = 0u + 0x00000028u;
    { c->r[31] = 0x089088c4u; c->r[5] = 0u + 0x00000010u; func_0881a1d4(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000120u, c->r[2]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000120u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000020u);
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    c->r[3] = f2u(c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r16(ram, c->r[2] + 0x0000000cu);
    c->r[2] = c->r[3] - c->r[2];
    mem_w16(ram, c->r[4] + 0x00000004u, c->r[2]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000120u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000024u);
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    c->r[3] = f2u(c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r16(ram, c->r[2] + 0x0000000eu);
    c->r[2] = c->r[3] - c->r[2];
    mem_w16(ram, c->r[4] + 0x00000006u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000120u);
    c->r[4] = c->r[2] + 0x0000000au;
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000030u);
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    c->r[3] = f2u(c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r16(ram, c->r[2] + 0x0000000cu);
    c->r[2] = c->r[3] - c->r[2];
    mem_w16(ram, c->r[4] + 0x00000004u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000120u);
    c->r[4] = c->r[2] + 0x0000000au;
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000034u);
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    c->r[3] = f2u(c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r16(ram, c->r[2] + 0x0000000eu);
    c->r[2] = c->r[3] - c->r[2];
    mem_w16(ram, c->r[4] + 0x00000006u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000120u);
    c->r[4] = c->r[2] + 0x00000014u;
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000040u);
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    c->r[3] = f2u(c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r16(ram, c->r[2] + 0x0000000cu);
    c->r[2] = c->r[3] - c->r[2];
    mem_w16(ram, c->r[4] + 0x00000004u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000120u);
    c->r[4] = c->r[2] + 0x00000014u;
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000044u);
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    c->r[3] = f2u(c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r16(ram, c->r[2] + 0x0000000eu);
    c->r[2] = c->r[3] - c->r[2];
    mem_w16(ram, c->r[4] + 0x00000006u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000120u);
    c->r[4] = c->r[2] + 0x0000001eu;
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000050u);
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    c->r[3] = f2u(c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r16(ram, c->r[2] + 0x0000000cu);
    c->r[2] = c->r[3] - c->r[2];
    mem_w16(ram, c->r[4] + 0x00000004u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000120u);
    c->r[4] = c->r[2] + 0x0000001eu;
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000054u);
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    c->r[3] = f2u(c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r16(ram, c->r[2] + 0x0000000eu);
    c->r[2] = c->r[3] - c->r[2];
    mem_w16(ram, c->r[4] + 0x00000006u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000120u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000060u);
    c->r[2] = mem_r16(ram, c->r[2] + 0x00000008u);
    mem_w16(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000120u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000060u);
    c->r[3] = (u32)(s32)(s16)mem_r16(ram, c->r[30] + 0x000000f0u);
    c->f[0] = u2f(c->r[3]);
    c->f[1] = (f32)(s32)f2u(c->f[0]);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x000000f8u);
    c->f[0] = c->f[1] * c->f[0];
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    c->r[3] = f2u(c->f[0]);
    c->r[2] = mem_r16(ram, c->r[2] + 0x0000000au);
    c->r[2] = c->r[2] + c->r[3];
    mem_w16(ram, c->r[4] + 0x00000002u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000120u);
    c->r[3] = c->r[2] + 0x0000000au;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000060u);
    c->r[2] = mem_r16(ram, c->r[2] + 0x00000018u);
    mem_w16(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000120u);
    c->r[4] = c->r[2] + 0x0000000au;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000060u);
    c->r[3] = (u32)(s32)(s16)mem_r16(ram, c->r[30] + 0x000000f0u);
    c->f[0] = u2f(c->r[3]);
    c->f[1] = (f32)(s32)f2u(c->f[0]);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x000000f8u);
    c->f[0] = c->f[1] * c->f[0];
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    c->r[3] = f2u(c->f[0]);
    c->r[2] = mem_r16(ram, c->r[2] + 0x0000000au);
    c->r[2] = c->r[2] + c->r[3];
    mem_w16(ram, c->r[4] + 0x00000002u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000120u);
    c->r[3] = c->r[2] + 0x00000014u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000060u);
    c->r[2] = mem_r16(ram, c->r[2] + 0x00000028u);
    mem_w16(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000120u);
    c->r[4] = c->r[2] + 0x00000014u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000060u);
    c->r[3] = (u32)(s32)(s16)mem_r16(ram, c->r[30] + 0x000000f0u);
    c->f[0] = u2f(c->r[3]);
    c->f[1] = (f32)(s32)f2u(c->f[0]);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x000000fcu);
    c->f[0] = c->f[1] * c->f[0];
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    c->r[3] = f2u(c->f[0]);
    c->r[2] = mem_r16(ram, c->r[2] + 0x0000000au);
    c->r[2] = c->r[2] + c->r[3];
    mem_w16(ram, c->r[4] + 0x00000002u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000120u);
    c->r[3] = c->r[2] + 0x0000001eu;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000060u);
    c->r[2] = mem_r16(ram, c->r[2] + 0x00000038u);
    mem_w16(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000120u);
    c->r[4] = c->r[2] + 0x0000001eu;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000060u);
    c->r[3] = (u32)(s32)(s16)mem_r16(ram, c->r[30] + 0x000000f0u);
    c->f[0] = u2f(c->r[3]);
    c->f[1] = (f32)(s32)f2u(c->f[0]);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x000000fcu);
    c->f[0] = c->f[1] * c->f[0];
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    c->r[3] = f2u(c->f[0]);
    c->r[2] = mem_r16(ram, c->r[2] + 0x0000000au);
    c->r[2] = c->r[2] + c->r[3];
    mem_w16(ram, c->r[4] + 0x00000002u, c->r[2]);
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
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000120u);
    c->r[2] = c->r[2] >> 24;
    c->r[2] = c->r[2] & 0x000fu;
    c->r[3] = c->r[2] << 16;
    c->r[2] = 0x10000000u;
    c->r[2] = c->r[3] | c->r[2];
    { c->r[31] = 0x08908b54u; c->r[5] = c->r[2] + 0u; func_089207f8(c, ram); }
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
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000120u);
    c->r[2] = 0x00ff0000u;
    c->r[2] = c->r[2] | 0xffffu;
    c->r[3] = c->r[3] & c->r[2];
    c->r[2] = 0x01000000u;
    c->r[2] = c->r[3] | c->r[2];
    { c->r[31] = 0x08908bb0u; c->r[5] = c->r[2] + 0u; func_089207f8(c, ram); }
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
    { c->r[31] = 0x08908bfcu; c->r[5] = c->r[5] | 0x0004u; func_089207f8(c, ram); }
L_08908bfc:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000064u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000064u, c->r[2]); goto L_089084b0; }
L_08908c0c:
    c->r[1] = 0x08aa0000u;
    mem_w8(ram, c->r[1] + 0xfffff868u, 0u);
    c->r[2] = 0x08a80000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00002ed8u);
    c->r[4] = 0x08aa0000u;
    c->r[4] = c->r[4] + 0xfffff540u;
    { c->r[31] = 0x08908c2cu; c->f[12] = mem_rf32(ram, c->r[2] + 0x00000048u); func_08921f34(c, ram); }
    c->r[4] = 0x08aa0000u;
    c->r[4] = c->r[4] + 0xfffff540u;
    c->r[5] = 0u + 0x00000004u;
    { c->r[31] = 0x08908c40u; c->r[6] = 0u + 0x00000001u; func_08921ec8(c, ram); }
    c->r[4] = 0x08aa0000u;
    c->r[4] = c->r[4] + 0xfffff540u;
    c->r[5] = 0u + 0x0000000bu;
    { c->r[31] = 0x08908c54u; c->r[6] = 0u + 0u; func_08921dd4(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000120u, c->r[2]);
    c->r[2] = 0u + 0x00000018u;
    mem_w32(ram, c->r[30] + 0x00000064u, c->r[2]);
    c->r[2] = 0u + 0x00000013u;
    mem_w32(ram, c->r[30] + 0x00000060u, c->r[2]);
    c->r[4] = 0x08aa0000u;
    c->r[4] = c->r[4] + 0xfffff540u;
    c->r[5] = 0u + 0x00000006u;
    { c->r[31] = 0x08908c7cu; c->r[6] = 0u + 0u; func_0880ef80(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000230u, c->r[2]);
    c->r[2] = c->r[30] + 0x00000110u;
    c->r[4] = c->r[2] + 0u;
    c->f[12] = u2f(0u);
    c->f[13] = u2f(0u);
    c->f[14] = u2f(0u);
    c->f[15] = u2f(0u);
    { c->r[31] = 0x08908ca0u; func_0880d140(c, ram); }
    mem_w32(ram, c->r[30] + 0x0000023cu, 0u);
    mem_w32(ram, c->r[30] + 0x00000240u, 0u);
    c->r[2] = c->r[30] + 0x00000250u;
    { c->r[31] = 0x08908cb4u; c->r[4] = c->r[2] + 0u; func_08808260(c, ram); }
    c->r[2] = c->r[30] + 0x00000250u;
    c->r[4] = 0x08aa0000u;
    c->r[4] = c->r[4] + 0xfffff540u;
    c->r[5] = c->r[2] + 0u;
    c->r[6] = mem_r32(ram, c->r[30] + 0x00000120u);
    c->r[7] = mem_r32(ram, c->r[30] + 0x00000120u);
    { c->r[31] = 0x08908cd4u; c->r[8] = 0u + 0u; func_08921a68(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000290u, 0u);
    c->r[2] = 0x08a80000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00002ed8u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000040u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000066f4u);
    c->f[1] = c->f[1] / c->f[0];
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000066f8u);
    c->f[0] = c->f[1] * c->f[0];
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    mem_wf32(ram, c->r[30] + 0x00000240u, c->f[0]);
    c->r[4] = 0x08aa0000u;
    c->r[4] = c->r[4] + 0xfffff540u;
    c->r[5] = 0u + 0x0000000bu;
    { c->r[31] = 0x08908d18u; c->r[6] = 0u + 0x00000002u; func_0880ef80(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000234u, c->r[2]);
    c->r[4] = 0x08aa0000u;
    c->r[4] = c->r[4] + 0xfffff540u;
    c->r[5] = 0u + 0x0000000bu;
    { c->r[31] = 0x08908d30u; c->r[6] = 0u + 0x00000003u; func_0880ef80(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000238u, c->r[2]);
    mem_w32(ram, c->r[30] + 0x00000294u, 0u);
L_08908d38:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000294u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000013u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_08908d50; }
    { goto L_08908f7c; }
L_08908d50:
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000023cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000240u);
    c->r[3] = c->r[3] + c->r[2];
    c->f[0] = u2f(c->r[3]);
    c->f[0] = (f32)(s32)f2u(c->f[0]);
    mem_wf32(ram, c->r[30] + 0x00000114u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000023cu);
    c->r[2] = c->r[2] + 0xffffffe8u;
    mem_w32(ram, c->r[30] + 0x0000023cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000290u);
    c->r[2] = c->r[2] + 0x00000005u;
    mem_w32(ram, c->r[30] + 0x00000290u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000234u);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000114u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000004u);
    c->f[1] = c->f[1] + c->f[0];
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000230u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000004u);
    alx_c_cond_s(c, 14, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_08908db0; }
    { goto L_08908f6c; }
L_08908db0:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000234u);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000114u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000004u);
    c->f[1] = c->f[1] + c->f[0];
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000230u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000024u);
    alx_c_cond_s(c, 14, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_08908de0; }
    { goto L_08908f6c; }
L_08908de0:
    c->r[3] = 0x08aa0000u;
    c->r[3] = mem_r8(ram, c->r[3] + 0xfffff868u);
    c->r[2] = mem_r8(ram, c->r[30] + 0x00000290u);
    c->r[1] = 0x08aa0000u;
    c->r[1] = c->r[1] + c->r[3];
    mem_w8(ram, c->r[1] + 0xfffff950u, c->r[2]);
    c->r[2] = 0x08aa0000u;
    c->r[2] = mem_r8(ram, c->r[2] + 0xfffff868u);
    c->r[3] = c->r[2] << 4;
    c->r[2] = 0x08aa0000u;
    c->r[2] = c->r[2] + 0xfffff870u;
    c->r[3] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000234u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000000u);
    mem_wf32(ram, c->r[3] + 0x00000000u, c->f[0]);
    c->r[2] = 0x08aa0000u;
    c->r[2] = mem_r8(ram, c->r[2] + 0xfffff868u);
    c->r[3] = c->r[2] << 4;
    c->r[2] = 0x08aa0000u;
    c->r[2] = c->r[2] + 0xfffff870u;
    c->r[3] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000234u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000024u);
    mem_wf32(ram, c->r[3] + 0x00000004u, c->f[0]);
    c->r[2] = 0x08aa0000u;
    c->r[2] = mem_r8(ram, c->r[2] + 0xfffff868u);
    c->r[3] = c->r[2] << 4;
    c->r[2] = 0x08aa0000u;
    c->r[2] = c->r[2] + 0xfffff870u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000066f0u);
    mem_wf32(ram, c->r[2] + 0x0000000cu, c->f[0]);
    c->r[2] = 0x08aa0000u;
    c->r[2] = mem_r8(ram, c->r[2] + 0xfffff868u);
    c->r[3] = c->r[2] << 4;
    c->r[2] = 0x08aa0000u;
    c->r[2] = c->r[2] + 0xfffff870u;
    c->r[4] = c->r[3] + c->r[2];
    c->r[2] = 0x08aa0000u;
    c->r[2] = mem_r8(ram, c->r[2] + 0xfffff868u);
    c->r[3] = c->r[2] << 4;
    c->r[2] = 0x08aa0000u;
    c->r[2] = c->r[2] + 0xfffff870u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[3] = c->r[30] + 0x00000110u;
    c->r[7] = c->r[30] + 0x00000250u;
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x08908ea8u; c->r[6] = c->r[3] + 0u; func_08922114(c, ram); }
    c->r[2] = 0x08aa0000u;
    c->r[2] = mem_r8(ram, c->r[2] + 0xfffff868u);
    c->r[3] = c->r[2] << 4;
    c->r[2] = 0x08aa0000u;
    c->r[2] = c->r[2] + 0xfffff8e0u;
    c->r[3] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000238u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000000u);
    mem_wf32(ram, c->r[3] + 0x00000000u, c->f[0]);
    c->r[2] = 0x08aa0000u;
    c->r[2] = mem_r8(ram, c->r[2] + 0xfffff868u);
    c->r[3] = c->r[2] << 4;
    c->r[2] = 0x08aa0000u;
    c->r[2] = c->r[2] + 0xfffff8e0u;
    c->r[3] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000238u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000024u);
    mem_wf32(ram, c->r[3] + 0x00000004u, c->f[0]);
    c->r[2] = 0x08aa0000u;
    c->r[2] = mem_r8(ram, c->r[2] + 0xfffff868u);
    c->r[3] = c->r[2] << 4;
    c->r[2] = 0x08aa0000u;
    c->r[2] = c->r[2] + 0xfffff8e0u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000066f0u);
    mem_wf32(ram, c->r[2] + 0x0000000cu, c->f[0]);
    c->r[2] = 0x08aa0000u;
    c->r[2] = mem_r8(ram, c->r[2] + 0xfffff868u);
    c->r[3] = c->r[2] << 4;
    c->r[2] = 0x08aa0000u;
    c->r[2] = c->r[2] + 0xfffff8e0u;
    c->r[4] = c->r[3] + c->r[2];
    c->r[2] = 0x08aa0000u;
    c->r[2] = mem_r8(ram, c->r[2] + 0xfffff868u);
    c->r[3] = c->r[2] << 4;
    c->r[2] = 0x08aa0000u;
    c->r[2] = c->r[2] + 0xfffff8e0u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[3] = c->r[30] + 0x00000110u;
    c->r[7] = c->r[30] + 0x00000250u;
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x08908f58u; c->r[6] = c->r[3] + 0u; func_08922114(c, ram); }
    c->r[2] = 0x08aa0000u;
    c->r[2] = mem_r8(ram, c->r[2] + 0xfffff868u);
    c->r[2] = c->r[2] + 0x00000001u;
    c->r[1] = 0x08aa0000u;
    mem_w8(ram, c->r[1] + 0xfffff868u, c->r[2]);
L_08908f6c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000294u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000294u, c->r[2]); goto L_08908d38; }
L_08908f7c:
    mem_w32(ram, c->r[30] + 0x00000290u, 0u);
    mem_w32(ram, c->r[30] + 0x0000023cu, 0u);
    c->r[4] = 0x08aa0000u;
    c->r[4] = c->r[4] + 0xfffff540u;
    c->r[5] = 0u + 0x0000000bu;
    { c->r[31] = 0x08908f98u; c->r[6] = 0u + 0x00000004u; func_0880ef80(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000234u, c->r[2]);
    c->r[4] = 0x08aa0000u;
    c->r[4] = c->r[4] + 0xfffff540u;
    c->r[5] = 0u + 0x0000000bu;
    { c->r[31] = 0x08908fb0u; c->r[6] = 0u + 0x00000005u; func_0880ef80(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000238u, c->r[2]);
    mem_w32(ram, c->r[30] + 0x00000294u, 0u);
L_08908fb8:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000294u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000013u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_08908fd0; }
    { goto L_089091fc; }
L_08908fd0:
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000023cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000240u);
    c->r[3] = c->r[3] + c->r[2];
    c->f[0] = u2f(c->r[3]);
    c->f[0] = (f32)(s32)f2u(c->f[0]);
    mem_wf32(ram, c->r[30] + 0x00000114u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000023cu);
    c->r[2] = c->r[2] + 0x00000018u;
    mem_w32(ram, c->r[30] + 0x0000023cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000290u);
    c->r[2] = c->r[2] + 0xfffffffbu;
    mem_w32(ram, c->r[30] + 0x00000290u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000234u);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000114u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000004u);
    c->f[1] = c->f[1] + c->f[0];
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000230u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000004u);
    alx_c_cond_s(c, 14, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_08909030; }
    { goto L_089091ec; }
L_08909030:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000234u);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000114u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000004u);
    c->f[1] = c->f[1] + c->f[0];
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000230u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000024u);
    alx_c_cond_s(c, 14, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_08909060; }
    { goto L_089091ec; }
L_08909060:
    c->r[3] = 0x08aa0000u;
    c->r[3] = mem_r8(ram, c->r[3] + 0xfffff868u);
    c->r[2] = mem_r8(ram, c->r[30] + 0x00000290u);
    c->r[1] = 0x08aa0000u;
    c->r[1] = c->r[1] + c->r[3];
    mem_w8(ram, c->r[1] + 0xfffff950u, c->r[2]);
    c->r[2] = 0x08aa0000u;
    c->r[2] = mem_r8(ram, c->r[2] + 0xfffff868u);
    c->r[3] = c->r[2] << 4;
    c->r[2] = 0x08aa0000u;
    c->r[2] = c->r[2] + 0xfffff870u;
    c->r[3] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000234u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000000u);
    mem_wf32(ram, c->r[3] + 0x00000000u, c->f[0]);
    c->r[2] = 0x08aa0000u;
    c->r[2] = mem_r8(ram, c->r[2] + 0xfffff868u);
    c->r[3] = c->r[2] << 4;
    c->r[2] = 0x08aa0000u;
    c->r[2] = c->r[2] + 0xfffff870u;
    c->r[3] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000234u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000024u);
    mem_wf32(ram, c->r[3] + 0x00000004u, c->f[0]);
    c->r[2] = 0x08aa0000u;
    c->r[2] = mem_r8(ram, c->r[2] + 0xfffff868u);
    c->r[3] = c->r[2] << 4;
    c->r[2] = 0x08aa0000u;
    c->r[2] = c->r[2] + 0xfffff870u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000066f0u);
    mem_wf32(ram, c->r[2] + 0x0000000cu, c->f[0]);
    c->r[2] = 0x08aa0000u;
    c->r[2] = mem_r8(ram, c->r[2] + 0xfffff868u);
    c->r[3] = c->r[2] << 4;
    c->r[2] = 0x08aa0000u;
    c->r[2] = c->r[2] + 0xfffff870u;
    c->r[4] = c->r[3] + c->r[2];
    c->r[2] = 0x08aa0000u;
    c->r[2] = mem_r8(ram, c->r[2] + 0xfffff868u);
    c->r[3] = c->r[2] << 4;
    c->r[2] = 0x08aa0000u;
    c->r[2] = c->r[2] + 0xfffff870u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[3] = c->r[30] + 0x00000110u;
    c->r[7] = c->r[30] + 0x00000250u;
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x08909128u; c->r[6] = c->r[3] + 0u; func_08922114(c, ram); }
    c->r[2] = 0x08aa0000u;
    c->r[2] = mem_r8(ram, c->r[2] + 0xfffff868u);
    c->r[3] = c->r[2] << 4;
    c->r[2] = 0x08aa0000u;
    c->r[2] = c->r[2] + 0xfffff8e0u;
    c->r[3] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000238u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000000u);
    mem_wf32(ram, c->r[3] + 0x00000000u, c->f[0]);
    c->r[2] = 0x08aa0000u;
    c->r[2] = mem_r8(ram, c->r[2] + 0xfffff868u);
    c->r[3] = c->r[2] << 4;
    c->r[2] = 0x08aa0000u;
    c->r[2] = c->r[2] + 0xfffff8e0u;
    c->r[3] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000238u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000024u);
    mem_wf32(ram, c->r[3] + 0x00000004u, c->f[0]);
    c->r[2] = 0x08aa0000u;
    c->r[2] = mem_r8(ram, c->r[2] + 0xfffff868u);
    c->r[3] = c->r[2] << 4;
    c->r[2] = 0x08aa0000u;
    c->r[2] = c->r[2] + 0xfffff8e0u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000066f0u);
    mem_wf32(ram, c->r[2] + 0x0000000cu, c->f[0]);
    c->r[2] = 0x08aa0000u;
    c->r[2] = mem_r8(ram, c->r[2] + 0xfffff868u);
    c->r[3] = c->r[2] << 4;
    c->r[2] = 0x08aa0000u;
    c->r[2] = c->r[2] + 0xfffff8e0u;
    c->r[4] = c->r[3] + c->r[2];
    c->r[2] = 0x08aa0000u;
    c->r[2] = mem_r8(ram, c->r[2] + 0xfffff868u);
    c->r[3] = c->r[2] << 4;
    c->r[2] = 0x08aa0000u;
    c->r[2] = c->r[2] + 0xfffff8e0u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[3] = c->r[30] + 0x00000110u;
    c->r[7] = c->r[30] + 0x00000250u;
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x089091d8u; c->r[6] = c->r[3] + 0u; func_08922114(c, ram); }
    c->r[2] = 0x08aa0000u;
    c->r[2] = mem_r8(ram, c->r[2] + 0xfffff868u);
    c->r[2] = c->r[2] + 0x00000001u;
    c->r[1] = 0x08aa0000u;
    mem_w8(ram, c->r[1] + 0xfffff868u, c->r[2]);
L_089091ec:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000294u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000294u, c->r[2]); goto L_08908fb8; }
L_089091fc:
    c->r[4] = 0x08aa0000u;
    c->r[4] = c->r[4] + 0xfffff540u;
    c->r[5] = 0u + 0x0000000bu;
    { c->r[31] = 0x08909210u; c->r[6] = 0u + 0u; func_0880ef80(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000234u, c->r[2]);
    c->r[4] = 0x08aa0000u;
    c->r[4] = c->r[4] + 0xfffff540u;
    c->r[5] = 0u + 0x0000000bu;
    { c->r[31] = 0x08909228u; c->r[6] = 0u + 0x00000001u; func_0880ef80(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000238u, c->r[2]);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000240u);
    c->f[0] = (f32)(s32)f2u(c->f[0]);
    mem_wf32(ram, c->r[30] + 0x00000114u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000234u);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000114u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000004u);
    c->f[1] = c->f[1] + c->f[0];
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000230u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000004u);
    alx_c_cond_s(c, 14, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_08909268; }
    { goto L_08909420; }
L_08909268:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000234u);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000114u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000004u);
    c->f[1] = c->f[1] + c->f[0];
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000230u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000024u);
    alx_c_cond_s(c, 14, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_08909298; }
    { goto L_08909420; }
L_08909298:
    c->r[2] = 0x08aa0000u;
    c->r[2] = mem_r8(ram, c->r[2] + 0xfffff868u);
    c->r[1] = 0x08aa0000u;
    c->r[1] = c->r[1] + c->r[2];
    mem_w8(ram, c->r[1] + 0xfffff950u, 0u);
    c->r[2] = 0x08aa0000u;
    c->r[2] = mem_r8(ram, c->r[2] + 0xfffff868u);
    c->r[3] = c->r[2] << 4;
    c->r[2] = 0x08aa0000u;
    c->r[2] = c->r[2] + 0xfffff870u;
    c->r[3] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000234u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000000u);
    mem_wf32(ram, c->r[3] + 0x00000000u, c->f[0]);
    c->r[2] = 0x08aa0000u;
    c->r[2] = mem_r8(ram, c->r[2] + 0xfffff868u);
    c->r[3] = c->r[2] << 4;
    c->r[2] = 0x08aa0000u;
    c->r[2] = c->r[2] + 0xfffff870u;
    c->r[3] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000234u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000024u);
    mem_wf32(ram, c->r[3] + 0x00000004u, c->f[0]);
    c->r[2] = 0x08aa0000u;
    c->r[2] = mem_r8(ram, c->r[2] + 0xfffff868u);
    c->r[3] = c->r[2] << 4;
    c->r[2] = 0x08aa0000u;
    c->r[2] = c->r[2] + 0xfffff870u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000066f0u);
    mem_wf32(ram, c->r[2] + 0x0000000cu, c->f[0]);
    c->r[2] = 0x08aa0000u;
    c->r[2] = mem_r8(ram, c->r[2] + 0xfffff868u);
    c->r[3] = c->r[2] << 4;
    c->r[2] = 0x08aa0000u;
    c->r[2] = c->r[2] + 0xfffff870u;
    c->r[4] = c->r[3] + c->r[2];
    c->r[2] = 0x08aa0000u;
    c->r[2] = mem_r8(ram, c->r[2] + 0xfffff868u);
    c->r[3] = c->r[2] << 4;
    c->r[2] = 0x08aa0000u;
    c->r[2] = c->r[2] + 0xfffff870u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[3] = c->r[30] + 0x00000110u;
    c->r[7] = c->r[30] + 0x00000250u;
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x0890935cu; c->r[6] = c->r[3] + 0u; func_08922114(c, ram); }
    c->r[2] = 0x08aa0000u;
    c->r[2] = mem_r8(ram, c->r[2] + 0xfffff868u);
    c->r[3] = c->r[2] << 4;
    c->r[2] = 0x08aa0000u;
    c->r[2] = c->r[2] + 0xfffff8e0u;
    c->r[3] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000238u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000000u);
    mem_wf32(ram, c->r[3] + 0x00000000u, c->f[0]);
    c->r[2] = 0x08aa0000u;
    c->r[2] = mem_r8(ram, c->r[2] + 0xfffff868u);
    c->r[3] = c->r[2] << 4;
    c->r[2] = 0x08aa0000u;
    c->r[2] = c->r[2] + 0xfffff8e0u;
    c->r[3] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000238u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000024u);
    mem_wf32(ram, c->r[3] + 0x00000004u, c->f[0]);
    c->r[2] = 0x08aa0000u;
    c->r[2] = mem_r8(ram, c->r[2] + 0xfffff868u);
    c->r[3] = c->r[2] << 4;
    c->r[2] = 0x08aa0000u;
    c->r[2] = c->r[2] + 0xfffff8e0u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000066f0u);
    mem_wf32(ram, c->r[2] + 0x0000000cu, c->f[0]);
    c->r[2] = 0x08aa0000u;
    c->r[2] = mem_r8(ram, c->r[2] + 0xfffff868u);
    c->r[3] = c->r[2] << 4;
    c->r[2] = 0x08aa0000u;
    c->r[2] = c->r[2] + 0xfffff8e0u;
    c->r[4] = c->r[3] + c->r[2];
    c->r[2] = 0x08aa0000u;
    c->r[2] = mem_r8(ram, c->r[2] + 0xfffff868u);
    c->r[3] = c->r[2] << 4;
    c->r[2] = 0x08aa0000u;
    c->r[2] = c->r[2] + 0xfffff8e0u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[3] = c->r[30] + 0x00000110u;
    c->r[7] = c->r[30] + 0x00000250u;
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x0890940cu; c->r[6] = c->r[3] + 0u; func_08922114(c, ram); }
    c->r[2] = 0x08aa0000u;
    c->r[2] = mem_r8(ram, c->r[2] + 0xfffff868u);
    c->r[2] = c->r[2] + 0x00000001u;
    c->r[1] = 0x08aa0000u;
    mem_w8(ram, c->r[1] + 0xfffff868u, c->r[2]);
L_08909420:
    c->r[4] = 0x08aa0000u;
    c->r[4] = c->r[4] + 0xfffff540u;
    c->r[5] = 0u + 0x00000004u;
    { c->r[31] = 0x08909434u; c->r[6] = 0u + 0u; func_08921ec8(c, ram); }
L_08909434:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x000002a4u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x000002a0u);
    { c->r[29] = c->r[29] + 0x000002b0u; return; }
    return; /* fell out of func_08908244 */
}

/* func_08913848  0x08913848..0x089144e8  3232 bytes, source=fde */
void func_08913848(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08913848u);
    c->r[29] = c->r[29] + 0xfffffeb0u;
    mem_w32(ram, c->r[29] + 0x00000144u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000140u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_wf32(ram, c->r[30] + 0x00000004u, c->f[12]);
    mem_wf32(ram, c->r[30] + 0x00000008u, c->f[13]);
    mem_wf32(ram, c->r[30] + 0x0000000cu, c->f[14]);
    mem_wf32(ram, c->r[30] + 0x00000010u, c->f[15]);
    mem_wf32(ram, c->r[30] + 0x00000014u, c->f[16]);
    mem_w32(ram, c->r[30] + 0x00000018u, c->r[5]);
    c->r[2] = c->r[30] + 0x00000020u;
    { c->r[31] = 0x08913880u; c->r[4] = c->r[2] + 0u; func_08808260(c, ram); }
    c->r[2] = c->r[30] + 0x00000060u;
    { c->r[31] = 0x0891388cu; c->r[4] = c->r[2] + 0u; func_08808260(c, ram); }
    c->r[2] = c->r[30] + 0x000000a0u;
    mem_w32(ram, c->r[30] + 0x000000c0u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000c0u);
    mem_w32(ram, c->r[30] + 0x000000c4u, c->r[2]);
    c->r[2] = 0u + 0x00000001u;
    mem_w32(ram, c->r[30] + 0x000000c8u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x000000c8u);
    c->r[2] = 0u + 0xffffffffu;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_089138e4; }
L_089138b4:
    { c->r[31] = 0x089138bcu; c->r[4] = mem_r32(ram, c->r[30] + 0x000000c4u); func_08808240(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000c4u);
    c->r[2] = c->r[2] + 0x00000010u;
    mem_w32(ram, c->r[30] + 0x000000c4u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000c8u);
    c->r[2] = c->r[2] + 0xffffffffu;
    c->r[3] = c->r[2] + 0u;
    mem_w32(ram, c->r[30] + 0x000000c8u, c->r[3]);
    c->r[2] = 0u + 0xffffffffu;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_089138b4; }
L_089138e4:
    c->r[2] = c->r[30] + 0x000000a0u;
    { c->r[31] = 0x089138f0u; c->r[4] = c->r[2] + 0u; func_0895b864(c, ram); }
    c->r[2] = c->r[30] + 0x000000a0u;
    c->r[2] = c->r[2] + 0x00000010u;
    { c->r[31] = 0x08913900u; c->r[4] = c->r[2] + 0u; func_0895b664(c, ram); }
    c->r[2] = 0x08a40000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00006968u);
    mem_w32(ram, c->r[30] + 0x000000d0u, c->r[2]);
    c->r[2] = 0x08a40000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000696cu);
    mem_w32(ram, c->r[30] + 0x000000d4u, c->r[2]);
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
    { c->r[31] = 0x08913964u; c->r[5] = c->r[5] | 0x0100u; func_089207f8(c, ram); }
    c->r[3] = c->r[30] + 0x00000020u;
    c->r[2] = 0x08a80000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00002ed8u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000020u);
    c->f[1] = -c->f[0];
    c->r[2] = 0x08a80000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00002ed8u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000028u);
    c->f[0] = -c->f[0];
    c->r[4] = c->r[3] + 0u;
    c->f[12] = c->f[1];
    c->f[13] = c->f[0];
    c->f[14] = u2f(0u);
    { c->r[31] = 0x089139a0u; func_088a00e0(c, ram); }
    c->r[2] = c->r[30] + 0x00000060u;
    c->r[3] = 0x08a80000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00002ed8u);
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x089139b8u; c->f[12] = mem_rf32(ram, c->r[3] + 0x00000044u); func_0884c8f0(c, ram); }
    c->r[2] = c->r[30] + 0x00000020u;
    c->r[3] = c->r[30] + 0x00000020u;
    c->r[6] = c->r[30] + 0x00000060u;
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x089139d0u; c->r[5] = c->r[3] + 0u; func_0884c6d4(c, ram); }
    c->r[3] = c->r[30] + 0x00000060u;
    c->r[2] = 0x08a80000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00002ed8u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000020u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000004u);
    c->f[2] = c->f[1] - c->f[0];
    c->r[2] = 0x08a80000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00002ed8u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000028u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000008u);
    c->f[0] = c->f[1] - c->f[0];
    c->r[4] = c->r[3] + 0u;
    c->f[12] = c->f[2];
    c->f[13] = c->f[0];
    c->f[14] = u2f(0u);
    { c->r[31] = 0x08913a14u; func_088a00e0(c, ram); }
    c->r[2] = c->r[30] + 0x00000020u;
    c->r[3] = c->r[30] + 0x00000020u;
    c->r[6] = c->r[30] + 0x00000060u;
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x08913a2cu; c->r[5] = c->r[3] + 0u; func_0884c6d4(c, ram); }
    c->r[2] = c->r[30] + 0x00000060u;
    c->r[1] = 0x08a40000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0x00006970u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x0000000cu);
    c->f[1] = c->f[1] / c->f[0];
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000010u);
    c->f[2] = c->f[1] * c->f[0];
    c->r[1] = 0x08a40000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0x00006970u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x0000000cu);
    c->f[1] = c->f[1] / c->f[0];
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000014u);
    c->f[0] = c->f[1] * c->f[0];
    c->r[4] = c->r[2] + 0u;
    c->f[12] = c->f[2];
    c->f[13] = c->f[0];
    c->f[14] = u2f(0u);
    { c->r[31] = 0x08913a78u; func_0881a114(c, ram); }
    c->r[2] = c->r[30] + 0x00000020u;
    c->r[3] = c->r[30] + 0x00000020u;
    c->r[6] = c->r[30] + 0x00000060u;
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x08913a90u; c->r[5] = c->r[3] + 0u; func_0884c6d4(c, ram); }
    c->r[3] = c->r[30] + 0x00000060u;
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000004u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00006974u);
    c->f[0] = c->f[1] + c->f[0];
    c->r[4] = c->r[3] + 0u;
    c->f[12] = mem_rf32(ram, c->r[5] + 0x00000000u);
    c->f[13] = c->f[0];
    c->f[14] = u2f(0u);
    { c->r[31] = 0x08913ac4u; func_088a00e0(c, ram); }
    c->r[2] = c->r[30] + 0x00000020u;
    c->r[3] = c->r[30] + 0x00000020u;
    c->r[6] = c->r[30] + 0x00000060u;
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x08913adcu; c->r[5] = c->r[3] + 0u; func_0884c6d4(c, ram); }
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
    { c->r[31] = 0x08913b24u; c->r[5] = 0u + 0x00000009u; func_08920a80(c, ram); }
    mem_w32(ram, c->r[30] + 0x000000c8u, 0u);
L_08913b28:
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000c8u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000002u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_08913b40; }
    { goto L_08913fe0; }
L_08913b40:
    c->r[2] = c->r[30] + 0x000000e0u;
    mem_w32(ram, c->r[30] + 0x000000c4u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000c4u);
    mem_w32(ram, c->r[30] + 0x000000c0u, c->r[2]);
    c->r[2] = 0u + 0x00000004u;
    mem_w32(ram, c->r[30] + 0x00000130u, c->r[2]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x000000c0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000c8u);
    c->r[2] = c->r[2] << 4;
    c->r[2] = c->r[2] + c->r[30];
    c->r[3] = c->r[2] + 0x000000a0u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000c8u);
    c->r[2] = c->r[2] << 4;
    c->r[2] = c->r[2] + c->r[30];
    c->r[2] = c->r[2] + 0x000000a0u;
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00006970u);
    c->f[12] = mem_rf32(ram, c->r[3] + 0x00000000u);
    c->f[13] = mem_rf32(ram, c->r[2] + 0x00000004u);
    c->f[14] = u2f(0u);
    { c->r[31] = 0x08913b98u; c->f[15] = c->f[0]; func_0880d140(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000c0u);
    c->r[2] = c->r[2] + 0x00000010u;
    mem_w32(ram, c->r[30] + 0x000000c0u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000130u);
    c->r[2] = c->r[2] + 0xffffffffu;
    mem_w32(ram, c->r[30] + 0x00000130u, c->r[2]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x000000c0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000c8u);
    c->r[2] = c->r[2] << 4;
    c->r[2] = c->r[2] + c->r[30];
    c->r[3] = c->r[2] + 0x000000a0u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000c8u);
    c->r[2] = c->r[2] << 4;
    c->r[2] = c->r[2] + c->r[30];
    c->r[2] = c->r[2] + 0x000000a0u;
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00006970u);
    c->f[12] = mem_rf32(ram, c->r[3] + 0x00000008u);
    c->f[13] = mem_rf32(ram, c->r[2] + 0x00000004u);
    c->f[14] = u2f(0u);
    { c->r[31] = 0x08913bf0u; c->f[15] = c->f[0]; func_0880d140(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000c0u);
    c->r[2] = c->r[2] + 0x00000010u;
    mem_w32(ram, c->r[30] + 0x000000c0u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000130u);
    c->r[2] = c->r[2] + 0xffffffffu;
    mem_w32(ram, c->r[30] + 0x00000130u, c->r[2]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x000000c0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000c8u);
    c->r[2] = c->r[2] << 4;
    c->r[2] = c->r[2] + c->r[30];
    c->r[3] = c->r[2] + 0x000000a0u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000c8u);
    c->r[2] = c->r[2] << 4;
    c->r[2] = c->r[2] + c->r[30];
    c->r[2] = c->r[2] + 0x000000a0u;
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00006970u);
    c->f[12] = mem_rf32(ram, c->r[3] + 0x00000008u);
    c->f[13] = mem_rf32(ram, c->r[2] + 0x0000000cu);
    c->f[14] = u2f(0u);
    { c->r[31] = 0x08913c48u; c->f[15] = c->f[0]; func_0880d140(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000c0u);
    c->r[2] = c->r[2] + 0x00000010u;
    mem_w32(ram, c->r[30] + 0x000000c0u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000130u);
    c->r[2] = c->r[2] + 0xffffffffu;
    mem_w32(ram, c->r[30] + 0x00000130u, c->r[2]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x000000c0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000c8u);
    c->r[2] = c->r[2] << 4;
    c->r[2] = c->r[2] + c->r[30];
    c->r[3] = c->r[2] + 0x000000a0u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000c8u);
    c->r[2] = c->r[2] << 4;
    c->r[2] = c->r[2] + c->r[30];
    c->r[2] = c->r[2] + 0x000000a0u;
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00006970u);
    c->f[12] = mem_rf32(ram, c->r[3] + 0x00000000u);
    c->f[13] = mem_rf32(ram, c->r[2] + 0x0000000cu);
    c->f[14] = u2f(0u);
    { c->r[31] = 0x08913ca0u; c->f[15] = c->f[0]; func_0880d140(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000c0u);
    c->r[2] = c->r[2] + 0x00000010u;
    mem_w32(ram, c->r[30] + 0x000000c0u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000130u);
    c->r[2] = c->r[2] + 0xffffffffu;
    mem_w32(ram, c->r[30] + 0x00000130u, c->r[2]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x000000c0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000c8u);
    c->r[2] = c->r[2] << 4;
    c->r[2] = c->r[2] + c->r[30];
    c->r[3] = c->r[2] + 0x000000a0u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000c8u);
    c->r[2] = c->r[2] << 4;
    c->r[2] = c->r[2] + c->r[30];
    c->r[2] = c->r[2] + 0x000000a0u;
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00006970u);
    c->f[12] = mem_rf32(ram, c->r[3] + 0x00000000u);
    c->f[13] = mem_rf32(ram, c->r[2] + 0x00000004u);
    c->f[14] = u2f(0u);
    { c->r[31] = 0x08913cf8u; c->f[15] = c->f[0]; func_0880d140(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000c0u);
    c->r[2] = c->r[2] + 0x00000010u;
    mem_w32(ram, c->r[30] + 0x000000c0u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000130u);
    c->r[2] = c->r[2] + 0xffffffffu;
    mem_w32(ram, c->r[30] + 0x00000130u, c->r[2]);
    c->r[2] = c->r[30] + 0x000000e0u;
    c->r[3] = c->r[30] + 0x000000e0u;
    c->r[6] = c->r[30] + 0x00000020u;
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x08913d28u; c->r[5] = c->r[3] + 0u; func_0884c26c(c, ram); }
    c->r[2] = c->r[30] + 0x000000e0u;
    c->r[4] = c->r[2] + 0x00000010u;
    c->r[2] = c->r[30] + 0x000000e0u;
    c->r[2] = c->r[2] + 0x00000010u;
    c->r[3] = c->r[30] + 0x00000020u;
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x08913d48u; c->r[6] = c->r[3] + 0u; func_0884c26c(c, ram); }
    c->r[2] = c->r[30] + 0x000000e0u;
    c->r[4] = c->r[2] + 0x00000020u;
    c->r[2] = c->r[30] + 0x000000e0u;
    c->r[2] = c->r[2] + 0x00000020u;
    c->r[3] = c->r[30] + 0x00000020u;
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x08913d68u; c->r[6] = c->r[3] + 0u; func_0884c26c(c, ram); }
    c->r[2] = c->r[30] + 0x000000e0u;
    c->r[4] = c->r[2] + 0x00000030u;
    c->r[2] = c->r[30] + 0x000000e0u;
    c->r[2] = c->r[2] + 0x00000030u;
    c->r[3] = c->r[30] + 0x00000020u;
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x08913d88u; c->r[6] = c->r[3] + 0u; func_0884c26c(c, ram); }
    c->r[2] = c->r[30] + 0x000000e0u;
    c->r[4] = c->r[2] + 0x00000040u;
    c->r[2] = c->r[30] + 0x000000e0u;
    c->r[2] = c->r[2] + 0x00000040u;
    c->r[3] = c->r[30] + 0x00000020u;
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x08913da8u; c->r[6] = c->r[3] + 0u; func_0884c26c(c, ram); }
    c->r[4] = 0x08a70000u;
    c->r[4] = c->r[4] + 0xffffb640u;
    c->r[5] = 0u + 0x00000003u;
    { c->r[31] = 0x08913dbcu; c->r[6] = 0u + 0x00000006u; func_089df7a0(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000c8u);
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[30];
    c->r[2] = c->r[2] + 0x000000d0u;
    { c->r[31] = 0x08913dd4u; c->r[4] = mem_r32(ram, c->r[2] + 0x00000000u); func_089035ac(c, ram); }
    c->r[4] = 0u + 0x0000001eu;
    { c->r[31] = 0x08913de0u; c->r[5] = 0u + 0x00000010u; func_0881a1d4(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000130u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000130u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x000000e0u);
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    c->r[3] = f2u(c->f[0]);
    mem_w16(ram, c->r[2] + 0x00000000u, c->r[3]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000130u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x000000e4u);
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    c->r[3] = f2u(c->f[0]);
    mem_w16(ram, c->r[2] + 0x00000002u, c->r[3]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000130u);
    c->r[2] = c->r[2] + 0x00000006u;
    c->f[0] = mem_rf32(ram, c->r[30] + 0x000000f0u);
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    c->r[3] = f2u(c->f[0]);
    mem_w16(ram, c->r[2] + 0x00000000u, c->r[3]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000130u);
    c->r[2] = c->r[2] + 0x00000006u;
    c->f[0] = mem_rf32(ram, c->r[30] + 0x000000f4u);
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    c->r[3] = f2u(c->f[0]);
    mem_w16(ram, c->r[2] + 0x00000002u, c->r[3]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000130u);
    c->r[2] = c->r[2] + 0x0000000cu;
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000100u);
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    c->r[3] = f2u(c->f[0]);
    mem_w16(ram, c->r[2] + 0x00000000u, c->r[3]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000130u);
    c->r[2] = c->r[2] + 0x0000000cu;
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000104u);
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    c->r[3] = f2u(c->f[0]);
    mem_w16(ram, c->r[2] + 0x00000002u, c->r[3]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000130u);
    c->r[2] = c->r[2] + 0x00000012u;
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000110u);
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    c->r[3] = f2u(c->f[0]);
    mem_w16(ram, c->r[2] + 0x00000000u, c->r[3]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000130u);
    c->r[2] = c->r[2] + 0x00000012u;
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000114u);
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    c->r[3] = f2u(c->f[0]);
    mem_w16(ram, c->r[2] + 0x00000002u, c->r[3]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000130u);
    c->r[2] = c->r[2] + 0x00000018u;
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000120u);
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    c->r[3] = f2u(c->f[0]);
    mem_w16(ram, c->r[2] + 0x00000000u, c->r[3]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000130u);
    c->r[2] = c->r[2] + 0x00000018u;
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000124u);
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    c->r[3] = f2u(c->f[0]);
    mem_w16(ram, c->r[2] + 0x00000002u, c->r[3]);
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
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000130u);
    c->r[2] = c->r[2] >> 24;
    c->r[2] = c->r[2] & 0x000fu;
    c->r[3] = c->r[2] << 16;
    c->r[2] = 0x10000000u;
    c->r[2] = c->r[3] | c->r[2];
    { c->r[31] = 0x08913f28u; c->r[5] = c->r[2] + 0u; func_089207f8(c, ram); }
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
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000130u);
    c->r[2] = 0x00ff0000u;
    c->r[2] = c->r[2] | 0xffffu;
    c->r[3] = c->r[3] & c->r[2];
    c->r[2] = 0x01000000u;
    c->r[2] = c->r[3] | c->r[2];
    { c->r[31] = 0x08913f84u; c->r[5] = c->r[2] + 0u; func_089207f8(c, ram); }
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
    { c->r[31] = 0x08913fd0u; c->r[5] = c->r[5] | 0x0005u; func_089207f8(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000c8u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x000000c8u, c->r[2]); goto L_08913b28; }
L_08913fe0:
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
    { c->r[31] = 0x0891402cu; c->r[5] = c->r[5] | 0x0102u; func_089207f8(c, ram); }
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x08914038u; c->r[4] = c->r[4] + 0x00000af4u; func_0880d380(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000134u, c->r[2]);
    c->r[2] = 0u + 0x00000012u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000134u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_0891422c; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000134u);
    c->r[2] = ((s32)c->r[3] < (s32)0x00000013u) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_08914074; }
    c->r[2] = 0u + 0x00000005u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000134u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_0891409c; }
    { goto L_089144d4; }
L_08914074:
    c->r[2] = 0u + 0x00000013u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000134u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_08914164; }
    c->r[2] = 0u + 0x0000001bu;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000134u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_08914414; }
    { goto L_089144d4; }
L_0891409c:
    c->r[2] = c->r[30] + 0x000000e0u;
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00006978u);
    c->r[1] = 0x08a40000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0x00006978u);
    c->r[4] = c->r[2] + 0u;
    c->f[12] = c->f[0];
    c->f[13] = u2f(0u);
    c->f[14] = c->f[1];
    c->f[15] = u2f(0u);
    { c->r[31] = 0x089140ccu; func_0880d140(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000e0u);
    mem_w32(ram, c->r[30] + 0x000000a0u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000e4u);
    mem_w32(ram, c->r[30] + 0x000000a4u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000e8u);
    mem_w32(ram, c->r[30] + 0x000000a8u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000ecu);
    mem_w32(ram, c->r[30] + 0x000000acu, c->r[2]);
    c->r[2] = c->r[30] + 0x000000e0u;
    c->f[1] = mem_rf32(ram, c->r[30] + 0x000000a0u);
    c->r[1] = 0x08aa0000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xfffff580u);
    c->f[4] = c->f[1] + c->f[0];
    c->f[1] = mem_rf32(ram, c->r[30] + 0x000000a8u);
    c->r[1] = 0x08aa0000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xfffff584u);
    c->f[2] = c->f[1] + c->f[0];
    c->f[1] = mem_rf32(ram, c->r[30] + 0x000000a0u);
    c->r[1] = 0x08aa0000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xfffff588u);
    c->f[3] = c->f[1] + c->f[0];
    c->f[1] = mem_rf32(ram, c->r[30] + 0x000000a8u);
    c->r[1] = 0x08aa0000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xfffff58cu);
    c->f[0] = c->f[1] + c->f[0];
    c->r[4] = c->r[2] + 0u;
    c->f[12] = c->f[4];
    c->f[13] = c->f[2];
    c->f[14] = c->f[3];
    { c->r[31] = 0x08914148u; c->f[15] = c->f[0]; func_0880d140(c, ram); }
    c->r[2] = c->r[30] + 0x00000020u;
    c->r[3] = c->r[30] + 0x000000e0u;
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x0891415cu; c->r[5] = c->r[3] + 0u; func_089133ec(c, ram); }
    { goto L_089144d4; }
L_08914164:
    c->r[2] = c->r[30] + 0x000000e0u;
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00006978u);
    c->r[1] = 0x08a40000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0x00006978u);
    c->r[4] = c->r[2] + 0u;
    c->f[12] = c->f[0];
    c->f[13] = u2f(0u);
    c->f[14] = c->f[1];
    c->f[15] = u2f(0u);
    { c->r[31] = 0x08914194u; func_0880d140(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000e0u);
    mem_w32(ram, c->r[30] + 0x000000a0u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000e4u);
    mem_w32(ram, c->r[30] + 0x000000a4u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000e8u);
    mem_w32(ram, c->r[30] + 0x000000a8u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000ecu);
    mem_w32(ram, c->r[30] + 0x000000acu, c->r[2]);
    c->r[2] = c->r[30] + 0x000000e0u;
    c->f[1] = mem_rf32(ram, c->r[30] + 0x000000a0u);
    c->r[1] = 0x08aa0000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xfffff5d0u);
    c->f[4] = c->f[1] + c->f[0];
    c->f[1] = mem_rf32(ram, c->r[30] + 0x000000a8u);
    c->r[1] = 0x08aa0000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xfffff5d4u);
    c->f[2] = c->f[1] + c->f[0];
    c->f[1] = mem_rf32(ram, c->r[30] + 0x000000a0u);
    c->r[1] = 0x08aa0000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xfffff5d8u);
    c->f[3] = c->f[1] + c->f[0];
    c->f[1] = mem_rf32(ram, c->r[30] + 0x000000a8u);
    c->r[1] = 0x08aa0000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xfffff5dcu);
    c->f[0] = c->f[1] + c->f[0];
    c->r[4] = c->r[2] + 0u;
    c->f[12] = c->f[4];
    c->f[13] = c->f[2];
    c->f[14] = c->f[3];
    { c->r[31] = 0x08914210u; c->f[15] = c->f[0]; func_0880d140(c, ram); }
    c->r[2] = c->r[30] + 0x00000020u;
    c->r[3] = c->r[30] + 0x000000e0u;
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x08914224u; c->r[5] = c->r[3] + 0u; func_089133ec(c, ram); }
    { goto L_089144d4; }
L_0891422c:
    c->r[2] = c->r[30] + 0x000000e0u;
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00006978u);
    c->r[1] = 0x08a40000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0x00006978u);
    c->r[4] = c->r[2] + 0u;
    c->f[12] = c->f[0];
    c->f[13] = u2f(0u);
    c->f[14] = c->f[1];
    c->f[15] = u2f(0u);
    { c->r[31] = 0x0891425cu; func_0880d140(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000e0u);
    mem_w32(ram, c->r[30] + 0x000000a0u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000e4u);
    mem_w32(ram, c->r[30] + 0x000000a4u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000e8u);
    mem_w32(ram, c->r[30] + 0x000000a8u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000ecu);
    mem_w32(ram, c->r[30] + 0x000000acu, c->r[2]);
    c->r[2] = c->r[30] + 0x000000e0u;
    c->f[1] = mem_rf32(ram, c->r[30] + 0x000000a0u);
    c->r[1] = 0x08aa0000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xfffff590u);
    c->f[4] = c->f[1] + c->f[0];
    c->f[1] = mem_rf32(ram, c->r[30] + 0x000000a8u);
    c->r[1] = 0x08aa0000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xfffff594u);
    c->f[2] = c->f[1] + c->f[0];
    c->f[1] = mem_rf32(ram, c->r[30] + 0x000000a0u);
    c->r[1] = 0x08aa0000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xfffff598u);
    c->f[3] = c->f[1] + c->f[0];
    c->f[1] = mem_rf32(ram, c->r[30] + 0x000000a8u);
    c->r[1] = 0x08aa0000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xfffff59cu);
    c->f[0] = c->f[1] + c->f[0];
    c->r[4] = c->r[2] + 0u;
    c->f[12] = c->f[4];
    c->f[13] = c->f[2];
    c->f[14] = c->f[3];
    { c->r[31] = 0x089142d8u; c->f[15] = c->f[0]; func_0880d140(c, ram); }
    c->r[2] = c->r[30] + 0x00000020u;
    c->r[3] = c->r[30] + 0x000000e0u;
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x089142ecu; c->r[5] = c->r[3] + 0u; func_089133ec(c, ram); }
    c->r[2] = c->r[30] + 0x000000f0u;
    c->f[1] = mem_rf32(ram, c->r[30] + 0x000000a0u);
    c->r[1] = 0x08aa0000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xfffff5a0u);
    c->f[4] = c->f[1] + c->f[0];
    c->f[1] = mem_rf32(ram, c->r[30] + 0x000000a8u);
    c->r[1] = 0x08aa0000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xfffff5a4u);
    c->f[2] = c->f[1] + c->f[0];
    c->f[1] = mem_rf32(ram, c->r[30] + 0x000000a0u);
    c->r[1] = 0x08aa0000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xfffff5a8u);
    c->f[3] = c->f[1] + c->f[0];
    c->f[1] = mem_rf32(ram, c->r[30] + 0x000000a8u);
    c->r[1] = 0x08aa0000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xfffff5acu);
    c->f[0] = c->f[1] + c->f[0];
    c->r[4] = c->r[2] + 0u;
    c->f[12] = c->f[4];
    c->f[13] = c->f[2];
    c->f[14] = c->f[3];
    { c->r[31] = 0x08914348u; c->f[15] = c->f[0]; func_0880d140(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000f0u);
    mem_w32(ram, c->r[30] + 0x000000e0u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000f4u);
    mem_w32(ram, c->r[30] + 0x000000e4u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000f8u);
    mem_w32(ram, c->r[30] + 0x000000e8u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000fcu);
    mem_w32(ram, c->r[30] + 0x000000ecu, c->r[2]);
    c->r[2] = c->r[30] + 0x00000020u;
    c->r[3] = c->r[30] + 0x000000e0u;
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x0891437cu; c->r[5] = c->r[3] + 0u; func_089133ec(c, ram); }
    c->r[2] = c->r[30] + 0x000000f0u;
    c->f[1] = mem_rf32(ram, c->r[30] + 0x000000a0u);
    c->r[1] = 0x08aa0000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xfffff5b0u);
    c->f[4] = c->f[1] + c->f[0];
    c->f[1] = mem_rf32(ram, c->r[30] + 0x000000a8u);
    c->r[1] = 0x08aa0000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xfffff5b4u);
    c->f[2] = c->f[1] + c->f[0];
    c->f[1] = mem_rf32(ram, c->r[30] + 0x000000a0u);
    c->r[1] = 0x08aa0000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xfffff5b8u);
    c->f[3] = c->f[1] + c->f[0];
    c->f[1] = mem_rf32(ram, c->r[30] + 0x000000a8u);
    c->r[1] = 0x08aa0000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xfffff5bcu);
    c->f[0] = c->f[1] + c->f[0];
    c->r[4] = c->r[2] + 0u;
    c->f[12] = c->f[4];
    c->f[13] = c->f[2];
    c->f[14] = c->f[3];
    { c->r[31] = 0x089143d8u; c->f[15] = c->f[0]; func_0880d140(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000f0u);
    mem_w32(ram, c->r[30] + 0x000000e0u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000f4u);
    mem_w32(ram, c->r[30] + 0x000000e4u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000f8u);
    mem_w32(ram, c->r[30] + 0x000000e8u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000fcu);
    mem_w32(ram, c->r[30] + 0x000000ecu, c->r[2]);
    c->r[2] = c->r[30] + 0x00000020u;
    c->r[3] = c->r[30] + 0x000000e0u;
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x0891440cu; c->r[5] = c->r[3] + 0u; func_089133ec(c, ram); }
    { goto L_089144d4; }
L_08914414:
    c->r[2] = c->r[30] + 0x000000e0u;
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00006978u);
    c->r[1] = 0x08a40000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0x00006978u);
    c->r[4] = c->r[2] + 0u;
    c->f[12] = c->f[0];
    c->f[13] = u2f(0u);
    c->f[14] = c->f[1];
    c->f[15] = u2f(0u);
    { c->r[31] = 0x08914444u; func_0880d140(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000e0u);
    mem_w32(ram, c->r[30] + 0x000000a0u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000e4u);
    mem_w32(ram, c->r[30] + 0x000000a4u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000e8u);
    mem_w32(ram, c->r[30] + 0x000000a8u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000ecu);
    mem_w32(ram, c->r[30] + 0x000000acu, c->r[2]);
    c->r[2] = c->r[30] + 0x000000e0u;
    c->f[1] = mem_rf32(ram, c->r[30] + 0x000000a0u);
    c->r[1] = 0x08aa0000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xfffff5c0u);
    c->f[4] = c->f[1] + c->f[0];
    c->f[1] = mem_rf32(ram, c->r[30] + 0x000000a8u);
    c->r[1] = 0x08aa0000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xfffff5c4u);
    c->f[2] = c->f[1] + c->f[0];
    c->f[1] = mem_rf32(ram, c->r[30] + 0x000000a0u);
    c->r[1] = 0x08aa0000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xfffff5c8u);
    c->f[3] = c->f[1] + c->f[0];
    c->f[1] = mem_rf32(ram, c->r[30] + 0x000000a8u);
    c->r[1] = 0x08aa0000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xfffff5ccu);
    c->f[0] = c->f[1] + c->f[0];
    c->r[4] = c->r[2] + 0u;
    c->f[12] = c->f[4];
    c->f[13] = c->f[2];
    c->f[14] = c->f[3];
    { c->r[31] = 0x089144c0u; c->f[15] = c->f[0]; func_0880d140(c, ram); }
    c->r[2] = c->r[30] + 0x00000020u;
    c->r[3] = c->r[30] + 0x000000e0u;
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x089144d4u; c->r[5] = c->r[3] + 0u; func_089133ec(c, ram); }
L_089144d4:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000144u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000140u);
    { c->r[29] = c->r[29] + 0x00000150u; return; }
    return; /* fell out of func_08913848 */
}

/* func_0891d654  0x0891d654..0x0891ded4  2176 bytes, source=fde */
void func_0891d654(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0891d654u);
    c->r[29] = c->r[29] + 0xffffff20u;
    mem_w32(ram, c->r[29] + 0x000000d8u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x000000d4u, c->r[30]);
    mem_w32(ram, c->r[29] + 0x000000d0u, c->r[16]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000031u);
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08a90000u;
    c->r[2] = c->r[2] + 0xffffbda0u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000004u);
    c->r[2] = mem_r8(ram, c->r[2] + 0x0000001cu);
    { int _c = (c->r[2] == 0u); if (_c) goto L_0891d6f4; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000031u);
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08a90000u;
    c->r[2] = c->r[2] + 0xffffbda0u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000004u);
    c->r[3] = mem_r8(ram, c->r[2] + 0x0000001cu);
    c->r[2] = 0u + 0x00000003u;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_0891d6f4; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000031u);
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08a90000u;
    c->r[2] = c->r[2] + 0xffffbda0u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000004u);
    c->r[3] = mem_r8(ram, c->r[2] + 0x0000001cu);
    c->r[2] = 0u + 0x0000000au;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_0891d6f4; }
    { goto L_0891debc; }
L_0891d6f4:
    c->r[4] = 0x08aa0000u;
    c->r[4] = c->r[4] + 0xfffff540u;
    { c->r[31] = 0x0891d704u; c->r[5] = 0u + 0x00000043u; func_0880f2cc(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000008u);
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
    c->r[2] = c->r[30] + 0x00000010u;
    { c->r[31] = 0x0891d720u; c->r[4] = c->r[2] + 0u; func_08808240(c, ram); }
    c->r[3] = c->r[30] + 0x00000020u;
    c->r[2] = 0x08a80000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00002ed8u);
    c->r[2] = c->r[2] + 0x00000030u;
    c->r[1] = 0x08a80000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00002e48u);
    c->f[0] = c->f[0] + c->f[0];
    c->r[4] = c->r[3] + 0u;
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x0891d74cu; c->f[12] = c->f[0]; func_0884c120(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000030u, 0u);
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x0891d75cu; c->r[4] = c->r[4] + 0x00000af4u; func_0880d410(c, ram); }
    c->r[16] = c->r[2] + 0u;
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x0891d76cu; c->r[4] = c->r[4] + 0x00000af4u; func_08813c50(c, ram); }
    c->r[4] = c->r[16] + 0u;
    { c->r[31] = 0x0891d778u; c->r[5] = c->r[2] + 0u; func_088bf6ec(c, ram); }
    mem_w8(ram, c->r[30] + 0x00000034u, c->r[2]);
    c->r[2] = mem_r8(ram, c->r[30] + 0x00000034u);
    c->r[2] = c->r[2] + 0xfffffff6u;
    mem_w32(ram, c->r[30] + 0x000000ccu, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x000000ccu);
    c->r[2] = c->r[3] & 0x00ffu;
    c->r[2] = (c->r[2] < 0x00000014u) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_0891d814; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x000000ccu);
    c->r[2] = c->r[3] & 0x00ffu;
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08a40000u;
    c->r[2] = c->r[2] + 0x00006b7cu;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    { u32 _t = c->r[2]; switch (_t) { case 0x0891d7c0u: goto L_0891d7c0; case 0x0891d7d0u: goto L_0891d7d0; case 0x0891d7e0u: goto L_0891d7e0; case 0x0891d7e8u: goto L_0891d7e8; case 0x0891d7f8u: goto L_0891d7f8; case 0x0891d800u: goto L_0891d800; case 0x0891d808u: goto L_0891d808; case 0x0891d814u: goto L_0891d814; default: recomp_trap_unknown_indirect(c, ram, 0x0891d7b8u, _t); return; } }
L_0891d7c0:
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00006b4cu);
    { mem_wf32(ram, c->r[30] + 0x00000030u, c->f[0]); goto L_0891d814; }
L_0891d7d0:
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00006b50u);
    { mem_wf32(ram, c->r[30] + 0x00000030u, c->f[0]); goto L_0891d814; }
L_0891d7e0:
    { mem_w32(ram, c->r[30] + 0x00000030u, 0u); goto L_0891d814; }
L_0891d7e8:
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00006b4cu);
    { mem_wf32(ram, c->r[30] + 0x00000030u, c->f[0]); goto L_0891d814; }
L_0891d7f8:
    { mem_w32(ram, c->r[30] + 0x00000030u, 0u); goto L_0891d814; }
L_0891d800:
    { mem_w32(ram, c->r[30] + 0x00000030u, 0u); goto L_0891d814; }
L_0891d808:
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00006b54u);
    mem_wf32(ram, c->r[30] + 0x00000030u, c->f[0]);
L_0891d814:
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000030u);
    c->f[0] = c->f[0] + c->f[0];
    mem_wf32(ram, c->r[30] + 0x00000030u, c->f[0]);
    c->r[2] = c->r[30] + 0x00000020u;
    c->r[3] = c->r[30] + 0x00000020u;
    c->r[4] = c->r[2] + 0u;
    c->r[5] = c->r[3] + 0u;
    { c->r[31] = 0x0891d838u; c->f[12] = mem_rf32(ram, c->r[30] + 0x00000030u); func_088cb234(c, ram); }
    c->r[4] = c->r[30] + 0x00000010u;
    c->r[2] = 0x08a80000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00002ed8u);
    c->r[2] = c->r[2] + 0x00000020u;
    c->r[3] = c->r[30] + 0x00000020u;
    c->r[5] = c->r[2] + 0u;
    c->r[6] = c->r[3] + 0u;
    c->r[1] = 0x08a90000u;
    { c->r[31] = 0x0891d860u; c->f[12] = mem_rf32(ram, c->r[1] + 0xffffbac4u); func_0891d41c(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = 0u + 0xffffffffu;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_0891d878; }
    { goto L_0891debc; }
L_0891d878:
    c->r[2] = 0x08a80000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00002ed8u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000048u);
    c->f[1] = (f32)fabsf(c->f[0]);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00006b58u);
    alx_c_cond_s(c, 12, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_0891debc; }
    c->r[2] = 0x08a80000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00002ed8u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000040u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00006b5cu);
    alx_c_cond_s(c, 12, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_0891debc; }
    c->r[2] = 0x08a90000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0xffffba10u);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000ac8u;
    { c->r[31] = 0x0891d8dcu; c->r[5] = c->r[2] + 0u; func_089cb820(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000038u, c->r[2]);
    c->r[2] = 0x08a90000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0xffffbbdcu);
    c->r[2] = c->r[2] & 0x0100u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_0891d968; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000038u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_0891d968; }
    { c->r[31] = 0x0891d908u; c->r[16] = c->r[30] + 0x00000020u; func_08820f58(c, ram); }
    c->r[3] = c->r[2] + 0x00000020u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000038u);
    c->r[2] = c->r[2] + 0x00000020u;
    c->r[4] = c->r[16] + 0u;
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x0891d924u; c->r[6] = c->r[3] + 0u; func_0884c07c(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000024u);
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000028u);
    mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000002cu);
    mem_w32(ram, c->r[30] + 0x0000001cu, c->r[2]);
    c->r[2] = c->r[30] + 0x00000010u;
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0x08b90000u;
    { c->r[31] = 0x0891d958u; c->r[5] = c->r[5] + 0x000054c0u; func_08921f64(c, ram); }
    c->r[2] = 0x7f170000u;
    c->r[2] = c->r[2] | 0x177fu;
    { mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]); goto L_0891db58; }
L_0891d968:
    c->r[2] = 0x08a90000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0xffffbbdcu);
    c->r[2] = c->r[2] & 0x1000u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_0891db04; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000038u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_0891db04; }
    c->r[2] = c->r[30] + 0x00000020u;
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00006b60u);
    c->r[1] = 0x08a40000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0x00006b64u);
    c->r[4] = c->r[2] + 0u;
    c->f[12] = u2f(0u);
    c->f[13] = u2f(0u);
    c->f[14] = c->f[0];
    { c->r[31] = 0x0891d9b4u; c->f[15] = c->f[1]; func_0880d140(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000024u);
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000028u);
    mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000002cu);
    mem_w32(ram, c->r[30] + 0x0000001cu, c->r[2]);
    c->r[2] = c->r[30] + 0x00000040u;
    { c->r[31] = 0x0891d9e0u; c->r[4] = c->r[2] + 0u; func_08808260(c, ram); }
    c->r[2] = c->r[30] + 0x00000080u;
    { c->r[31] = 0x0891d9ecu; c->r[4] = c->r[2] + 0u; func_08808260(c, ram); }
    c->r[2] = c->r[30] + 0x00000040u;
    c->r[1] = 0x08a90000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffffba3cu);
    c->f[0] = -c->f[0];
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x0891da08u; c->f[12] = c->f[0]; func_0884c7c0(c, ram); }
    c->r[2] = c->r[30] + 0x00000080u;
    c->r[4] = c->r[2] + 0u;
    c->r[1] = 0x08a90000u;
    { c->r[31] = 0x0891da1cu; c->f[12] = mem_rf32(ram, c->r[1] + 0xffffba50u); func_0884c858(c, ram); }
    c->r[2] = c->r[30] + 0x00000040u;
    c->r[3] = c->r[30] + 0x00000040u;
    c->r[6] = c->r[30] + 0x00000080u;
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x0891da34u; c->r[5] = c->r[3] + 0u; func_0884c6d4(c, ram); }
    { c->r[31] = 0x0891da3cu; func_08867ab8(c, ram); }
    c->r[6] = c->r[2] + 0u;
    c->r[2] = c->r[30] + 0x00000040u;
    c->r[3] = c->r[30] + 0x00000040u;
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x0891da54u; c->r[5] = c->r[3] + 0u; func_0884c6d4(c, ram); }
    c->r[2] = c->r[30] + 0x00000040u;
    c->r[3] = c->r[30] + 0x00000040u;
    c->r[4] = c->r[2] + 0u;
    c->r[5] = c->r[3] + 0u;
    c->r[6] = 0x08b90000u;
    { c->r[31] = 0x0891da70u; c->r[6] = c->r[6] + 0x000054c0u; func_0884c6d4(c, ram); }
    c->r[2] = c->r[30] + 0x00000010u;
    c->r[3] = c->r[30] + 0x00000010u;
    c->r[6] = c->r[30] + 0x00000040u;
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x0891da88u; c->r[5] = c->r[3] + 0u; func_0884c26c(c, ram); }
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000018u);
    c->f[0] = u2f(0u);
    alx_c_cond_s(c, 14, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_0891debc; }
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000010u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00006b68u);
    c->f[1] = c->f[1] * c->f[0];
    c->f[0] = mem_rf32(ram, c->r[30] + 0x0000001cu);
    c->f[0] = c->f[1] / c->f[0];
    mem_wf32(ram, c->r[30] + 0x00000010u, c->f[0]);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000014u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00006b6cu);
    c->f[1] = c->f[1] * c->f[0];
    c->f[0] = mem_rf32(ram, c->r[30] + 0x0000001cu);
    c->f[0] = c->f[1] / c->f[0];
    mem_wf32(ram, c->r[30] + 0x00000014u, c->f[0]);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000010u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00006b70u);
    c->f[0] = c->f[1] + c->f[0];
    mem_wf32(ram, c->r[30] + 0x00000010u, c->f[0]);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000014u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00006b74u);
    c->f[0] = c->f[1] + c->f[0];
    { mem_wf32(ram, c->r[30] + 0x00000014u, c->f[0]); goto L_0891db58; }
L_0891db04:
    { c->r[31] = 0x0891db0cu; c->r[16] = c->r[30] + 0x00000020u; func_08820f58(c, ram); }
    c->r[3] = c->r[2] + 0x00000020u;
    c->r[2] = c->r[30] + 0x00000010u;
    c->r[4] = c->r[16] + 0u;
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x0891db24u; c->r[6] = c->r[3] + 0u; func_0884c07c(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000024u);
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000028u);
    mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000002cu);
    mem_w32(ram, c->r[30] + 0x0000001cu, c->r[2]);
    c->r[2] = c->r[30] + 0x00000010u;
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0x08b90000u;
    { c->r[31] = 0x0891db58u; c->r[5] = c->r[5] + 0x000054c0u; func_08921f64(c, ram); }
L_0891db58:
    { c->r[31] = 0x0891db60u; c->r[4] = mem_r32(ram, c->r[30] + 0x0000000cu); func_089035ac(c, ram); }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[3];
    c->r[2] = c->r[2] << 2;
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x0891db80u; c->r[5] = 0u + 0x00000010u; func_0881a1d4(c, ram); }
    mem_w32(ram, c->r[30] + 0x000000c0u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000c0u);
    mem_w32(ram, c->r[30] + 0x000000c4u, c->r[2]);
    mem_w32(ram, c->r[30] + 0x000000c8u, 0u);
L_0891db90:
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000c8u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = ((s32)c->r[2] < (s32)c->r[3]) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_0891dbac; }
    { goto L_0891dc90; }
L_0891dbac:
    c->r[4] = 0x08aa0000u;
    c->r[4] = c->r[4] + 0xfffff540u;
    c->r[5] = 0u + 0x00000043u;
    { c->r[31] = 0x0891dbc0u; c->r[6] = mem_r32(ram, c->r[30] + 0x000000c8u); func_0880ef80(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x000000c4u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000010u);
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    c->r[2] = f2u(c->f[0]);
    c->r[2] = c->r[2] + 0xffffffecu;
    mem_w16(ram, c->r[3] + 0x00000004u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x000000c4u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000014u);
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    c->r[2] = f2u(c->f[0]);
    c->r[2] = c->r[2] + 0xffffffecu;
    mem_w16(ram, c->r[3] + 0x00000006u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x000000c4u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r16(ram, c->r[2] + 0x00000008u);
    mem_w16(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x000000c4u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r16(ram, c->r[2] + 0x0000000au);
    mem_w16(ram, c->r[3] + 0x00000002u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000c4u);
    c->r[3] = c->r[2] + 0x0000000au;
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000010u);
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    c->r[2] = f2u(c->f[0]);
    c->r[2] = c->r[2] + 0x00000014u;
    mem_w16(ram, c->r[3] + 0x00000004u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000c4u);
    c->r[3] = c->r[2] + 0x0000000au;
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000014u);
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    c->r[2] = f2u(c->f[0]);
    c->r[2] = c->r[2] + 0x00000014u;
    mem_w16(ram, c->r[3] + 0x00000006u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000c4u);
    c->r[3] = c->r[2] + 0x0000000au;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r16(ram, c->r[2] + 0x00000028u);
    mem_w16(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000c4u);
    c->r[3] = c->r[2] + 0x0000000au;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r16(ram, c->r[2] + 0x0000002au);
    mem_w16(ram, c->r[3] + 0x00000002u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000c4u);
    c->r[2] = c->r[2] + 0x00000014u;
    mem_w32(ram, c->r[30] + 0x000000c4u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000c8u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x000000c8u, c->r[2]); goto L_0891db90; }
L_0891dc90:
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
    c->r[8] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[9] = 0u + 0u;
    { c->r[31] = 0x0891dcf0u; c->r[10] = mem_r32(ram, c->r[30] + 0x000000c0u); func_08920894(c, ram); }
    c->r[2] = 0x08a90000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0xffffbb00u);
    mem_w32(ram, c->r[30] + 0x00000020u, c->r[2]);
    c->r[2] = 0x08a90000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0xffffbb04u);
    mem_w32(ram, c->r[30] + 0x00000024u, c->r[2]);
    c->r[2] = 0x08a90000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0xffffbb08u);
    mem_w32(ram, c->r[30] + 0x00000028u, c->r[2]);
    c->r[2] = 0x08a90000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0xffffbb0cu);
    mem_w32(ram, c->r[30] + 0x0000002cu, c->r[2]);
    c->r[2] = c->r[30] + 0x00000020u;
    c->r[3] = c->r[30] + 0x00000020u;
    c->r[4] = c->r[2] + 0u;
    c->r[5] = c->r[3] + 0u;
    c->r[6] = 0x08b90000u;
    { c->r[31] = 0x0891dd3cu; c->r[6] = c->r[6] + 0x000054c0u; func_0884c26c(c, ram); }
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000028u);
    c->f[0] = u2f(0u);
    alx_c_cond_s(c, 14, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_0891debc; }
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000020u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00006b68u);
    c->f[1] = c->f[1] * c->f[0];
    c->f[0] = mem_rf32(ram, c->r[30] + 0x0000002cu);
    c->f[0] = c->f[1] / c->f[0];
    mem_wf32(ram, c->r[30] + 0x00000020u, c->f[0]);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000024u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00006b6cu);
    c->f[1] = c->f[1] * c->f[0];
    c->f[0] = mem_rf32(ram, c->r[30] + 0x0000002cu);
    c->f[0] = c->f[1] / c->f[0];
    mem_wf32(ram, c->r[30] + 0x00000024u, c->f[0]);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000020u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00006b68u);
    c->f[0] = c->f[1] + c->f[0];
    mem_wf32(ram, c->r[30] + 0x00000020u, c->f[0]);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000024u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00006b78u);
    c->f[0] = c->f[1] + c->f[0];
    mem_wf32(ram, c->r[30] + 0x00000024u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x0891ddc0u; c->r[4] = mem_r32(ram, c->r[2] + 0x00000008u); func_089035ac(c, ram); }
    c->r[4] = 0u + 0x00000014u;
    { c->r[31] = 0x0891ddccu; c->r[5] = 0u + 0x00000010u; func_0881a1d4(c, ram); }
    mem_w32(ram, c->r[30] + 0x000000c8u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000c8u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000020u);
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    c->r[3] = f2u(c->f[0]);
    mem_w16(ram, c->r[2] + 0x00000004u, c->r[3]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000c8u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000024u);
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    c->r[3] = f2u(c->f[0]);
    mem_w16(ram, c->r[2] + 0x00000006u, c->r[3]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x000000c8u);
    c->r[2] = 0u + 0x00000110u;
    mem_w16(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x000000c8u);
    c->r[2] = 0u + 0x00000080u;
    mem_w16(ram, c->r[3] + 0x00000002u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000c8u);
    c->r[2] = c->r[2] + 0x0000000au;
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000010u);
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    c->r[3] = f2u(c->f[0]);
    mem_w16(ram, c->r[2] + 0x00000004u, c->r[3]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000c8u);
    c->r[2] = c->r[2] + 0x0000000au;
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000014u);
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    c->r[3] = f2u(c->f[0]);
    mem_w16(ram, c->r[2] + 0x00000006u, c->r[3]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000c8u);
    c->r[3] = c->r[2] + 0x0000000au;
    c->r[2] = 0u + 0x00000146u;
    mem_w16(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000c8u);
    c->r[3] = c->r[2] + 0x0000000au;
    c->r[2] = 0u + 0x00000081u;
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
    c->r[5] = 0u + 0x00000002u;
    c->r[6] = 0x00800000u;
    c->r[6] = c->r[6] | 0x0102u;
    c->r[7] = 0u + 0x00000002u;
    c->r[8] = 0u + 0u;
    { c->r[31] = 0x0891debcu; c->r[9] = mem_r32(ram, c->r[30] + 0x000000c8u); func_0892083c(c, ram); }
L_0891debc:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x000000d8u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x000000d4u);
    c->r[16] = mem_r32(ram, c->r[29] + 0x000000d0u);
    { c->r[29] = c->r[29] + 0x000000e0u; return; }
    return; /* fell out of func_0891d654 */
}

/* func_089214b8  0x089214b8..0x089214fc  68 bytes, source=sweep */
void func_089214b8(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089214b8u);
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
    { c->r[31] = 0x089214e8u; c->r[5] = c->r[2] + 0u; func_089207f8(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_089214b8 */
}

/* func_089226dc  0x089226dc..0x089227b4  216 bytes, source=sweep */
void func_089226dc(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089226dcu);
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
    c->r[2] = 0u + 0x0000003cu;
    mem_w8(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[2] + 0x00000001u;
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]);
L_08922730:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000003u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_08922748; }
    { goto L_089227a4; }
L_08922748:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = 0x08a50000u;
    c->r[2] = c->r[2] + 0x00007bb4u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[3] = mem_r8(ram, c->r[2] + 0x00000000u);
    c->r[2] = 0u + 0x000000ffu;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_08922794; }
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
L_08922794:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]); goto L_08922730; }
L_089227a4:
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_089226dc */
}

/* func_089259b0  0x089259b0..0x08925a70  192 bytes, source=residue */
void func_089259b0(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089259b0u);
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
    return; /* fell out of func_089259b0 */
}

/* func_08927184  0x08927184..0x089271a4  32 bytes, source=residue */
void func_08927184(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08927184u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_wf32(ram, c->r[30] + 0x00000000u, c->f[12]);
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_08927184 */
}

/* func_0892bf94  0x0892bf94..0x0892c26c  728 bytes, source=fde */
void func_0892bf94(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0892bf94u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000010u);
    c->r[2] = c->r[2] & 0x8000u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_0892bfc8; }
    { goto L_0892c258; }
L_0892bfc8:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x0000001cu);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00007084u);
    c->f[0] = c->f[1] + c->f[0];
    c->r[4] = 0x08a70000u;
    c->r[4] = c->r[4] + 0xffffb640u;
    { c->r[31] = 0x0892bfecu; c->f[12] = c->f[0]; func_089f1210(c, ram); }
    c->r[4] = 0x08a70000u;
    c->r[4] = c->r[4] + 0xffffb640u;
    { c->r[31] = 0x0892bffcu; c->r[5] = 0u + 0x00000001u; func_089dfe30(c, ram); }
    c->r[4] = 0x08a70000u;
    c->r[4] = c->r[4] + 0xffffb640u;
    { c->r[31] = 0x0892c00cu; c->r[5] = 0u + 0u; func_089dfeb4(c, ram); }
    c->r[2] = 0u + 0x00000001u;
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x00000010u);
    c->r[2] = 0x00020000u;
    c->r[2] = c->r[3] & c->r[2];
    { int _c = (c->r[2] == 0u); if (_c) goto L_0892c078; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000033u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_0892c078; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r8(ram, c->r[2] + 0x00000043u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000033u);
    c->r[2] = c->r[2] << 1;
    alx_div(c, c->r[3], c->r[2]);
    c->r[3] = c->hi;
    if (c->r[2] == 0u) { recomp_break(c, ram, 0x0892c05cu, 0x7u); goto L_0892c060; }
L_0892c060:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000033u);
    c->r[2] = ((s32)c->r[3] < (s32)c->r[2]) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_0892c078; }
    mem_w32(ram, c->r[30] + 0x00000008u, 0u);
L_0892c078:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_0892c22c; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r8(ram, c->r[3] + 0x00000036u);
    c->r[2] = (c->r[2] < 0x0000000bu) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_0892c204; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r8(ram, c->r[3] + 0x00000036u);
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08a40000u;
    c->r[2] = c->r[2] + 0x00007088u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    { u32 _t = c->r[2]; switch (_t) { case 0x0892c0c4u: goto L_0892c0c4; case 0x0892c16cu: goto L_0892c16c; case 0x0892c17cu: goto L_0892c17c; case 0x0892c18cu: goto L_0892c18c; case 0x0892c19cu: goto L_0892c19c; case 0x0892c1acu: goto L_0892c1ac; case 0x0892c1c4u: goto L_0892c1c4; case 0x0892c1dcu: goto L_0892c1dc; case 0x0892c1f4u: goto L_0892c1f4; default: recomp_trap_unknown_indirect(c, ram, 0x0892c0bcu, _t); return; } }
L_0892c0c4:
    { c->r[31] = 0x0892c0ccu; c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u); func_0892d5ac(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x00000010u);
    c->r[2] = 0x00080000u;
    c->r[2] = c->r[3] & c->r[2];
    { int _c = (c->r[2] == 0u); if (_c) goto L_0892c0ec; }
    { c->r[31] = 0x0892c0ecu; c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u); func_0892d5ac(c, ram); }
L_0892c0ec:
    { c->r[31] = 0x0892c0f4u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u); func_0892b198(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x00000010u);
    c->r[2] = 0x00080000u;
    c->r[2] = c->r[3] & c->r[2];
    { int _c = (c->r[2] == 0u); if (_c) goto L_0892c114; }
    { c->r[31] = 0x0892c114u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u); func_0892b198(c, ram); }
L_0892c114:
    { c->r[31] = 0x0892c11cu; c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u); func_0892d7e0(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x00000010u);
    c->r[2] = 0x00080000u;
    c->r[2] = c->r[3] & c->r[2];
    { int _c = (c->r[2] == 0u); if (_c) goto L_0892c13c; }
    { c->r[31] = 0x0892c13cu; c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u); func_0892d7e0(c, ram); }
L_0892c13c:
    { c->r[31] = 0x0892c144u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u); func_0892dc94(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x00000010u);
    c->r[2] = 0x00080000u;
    c->r[2] = c->r[3] & c->r[2];
    { int _c = (c->r[2] == 0u); if (_c) goto L_0892c204; }
    { c->r[31] = 0x0892c164u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u); func_0892dc94(c, ram); }
    { goto L_0892c204; }
L_0892c16c:
    { c->r[31] = 0x0892c174u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u); func_0892c26c(c, ram); }
    { goto L_0892c204; }
L_0892c17c:
    { c->r[31] = 0x0892c184u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u); func_0892c51c(c, ram); }
    { goto L_0892c204; }
L_0892c18c:
    { c->r[31] = 0x0892c194u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u); func_0892c7c8(c, ram); }
    { goto L_0892c204; }
L_0892c19c:
    { c->r[31] = 0x0892c1a4u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u); func_0892ca78(c, ram); }
    { goto L_0892c204; }
L_0892c1ac:
    { c->r[31] = 0x0892c1b4u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u); func_0892d5ac(c, ram); }
    { c->r[31] = 0x0892c1bcu; c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u); func_08931b04(c, ram); }
    { goto L_0892c204; }
L_0892c1c4:
    { c->r[31] = 0x0892c1ccu; c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u); func_0892d5ac(c, ram); }
    { c->r[31] = 0x0892c1d4u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u); func_0892dc94(c, ram); }
    { goto L_0892c204; }
L_0892c1dc:
    { c->r[31] = 0x0892c1e4u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u); func_0892d5ac(c, ram); }
    { c->r[31] = 0x0892c1ecu; c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u); func_0892dc94(c, ram); }
    { goto L_0892c204; }
L_0892c1f4:
    { c->r[31] = 0x0892c1fcu; c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u); func_0892d5ac(c, ram); }
    { c->r[31] = 0x0892c204u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u); func_0892dc94(c, ram); }
L_0892c204:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000014u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_0892c22c; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000014u);
    c->r[4] = mem_r32(ram, c->r[3] + 0x00000018u);
    { u32 _t = c->r[2]; c->r[31] = 0x0892c22cu; c->r[5] = 0u + 0u; recomp_call_indirect(c, ram, 0x0892c224u, _t); }
L_0892c22c:
    c->r[4] = 0x08a70000u;
    c->r[4] = c->r[4] + 0xffffb640u;
    { c->r[31] = 0x0892c23cu; c->r[5] = 0u + 0u; func_089dfe30(c, ram); }
    c->r[4] = 0x08a70000u;
    c->r[4] = c->r[4] + 0xffffb640u;
    { c->r[31] = 0x0892c24cu; c->r[5] = 0u + 0x00000001u; func_089dfeb4(c, ram); }
    c->r[4] = 0x08a70000u;
    { c->r[31] = 0x0892c258u; c->r[4] = c->r[4] + 0xffffb640u; func_089f147c(c, ram); }
L_0892c258:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_0892bf94 */
}

/* func_08931474  0x08931474..0x089316e4  624 bytes, source=fde */
void func_08931474(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08931474u);
    c->r[29] = c->r[29] + 0xffffffd0u;
    mem_w32(ram, c->r[29] + 0x00000024u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000020u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[2] = c->r[5] + 0u;
    c->r[3] = c->r[6] + 0u;
    c->r[4] = c->r[7] + 0u;
    mem_w8(ram, c->r[30] + 0x00000004u, c->r[2]);
    mem_w8(ram, c->r[30] + 0x00000005u, c->r[3]);
    mem_w8(ram, c->r[30] + 0x00000006u, c->r[4]);
    c->r[2] = mem_r8(ram, c->r[30] + 0x00000004u);
    mem_w8(ram, c->r[30] + 0x00000007u, c->r[2]);
    c->r[2] = mem_r8(ram, c->r[30] + 0x00000006u);
    mem_w8(ram, c->r[30] + 0x00000008u, c->r[2]);
    c->r[4] = (u32)(s32)(s8)mem_r8(ram, c->r[30] + 0x00000004u);
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
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
    c->r[4] = (u32)(s32)(s8)mem_r8(ram, c->r[30] + 0x00000004u);
    c->r[2] = 0x66660000u;
    c->r[2] = c->r[2] | 0x6667u;
    alx_mult(c, c->r[4], c->r[2]);
    c->r[2] = c->hi;
    c->r[3] = (u32)((s32)c->r[2] >> 3);
    c->r[2] = (u32)((s32)c->r[4] >> 31);
    c->r[2] = c->r[3] - c->r[2];
    c->r[2] = c->r[2] << 24;
    c->r[2] = (u32)((s32)c->r[2] >> 24);
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]);
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[30] + 0x00000005u);
    c->r[2] = 0u + 0x00000019u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_08931538; }
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[30] + 0x00000004u);
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
    mem_w32(ram, c->r[30] + 0x00000010u, 0u);
L_08931538:
L_0893153c:
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[30] + 0x00000006u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_08931598; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = c->r[2] ^ 0x0001u;
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]);
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[30] + 0x00000005u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = ((s32)c->r[2] < (s32)c->r[3]) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_08931574; }
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[30] + 0x00000005u);
    c->r[2] = c->r[2] + 0xffffffffu;
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
L_08931574:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_0893158c; }
    c->r[2] = mem_r8(ram, c->r[30] + 0x00000005u);
    c->r[2] = c->r[2] + 0x00000001u;
    mem_w8(ram, c->r[30] + 0x00000005u, c->r[2]);
L_0893158c:
    c->r[2] = 0u + 0x00000001u;
    { mem_w8(ram, c->r[30] + 0x00000006u, c->r[2]); goto L_08931644; }
L_08931598:
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[30] + 0x00000006u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + c->r[3];
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[30] + 0x00000005u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = ((s32)c->r[2] < (s32)c->r[3]) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_089315d0; }
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[30] + 0x00000005u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[3] - c->r[2];
    { mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]); goto L_089315ec; }
L_089315d0:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    { int _c = ((s32)c->r[2] >= 0); if (_c) goto L_089315ec; }
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[30] + 0x00000005u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[3] + c->r[2];
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
L_089315ec:
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[30] + 0x00000008u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_08931644; }
    c->r[4] = (u32)(s32)(s8)mem_r8(ram, c->r[30] + 0x00000004u);
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
    c->r[3] = (u32)((s32)c->r[2] >> 24);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    { int _c = (c->r[2] != c->r[3]); if (_c) goto L_08931644; }
    mem_w8(ram, c->r[30] + 0x00000006u, 0u);
L_08931644:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[3];
    c->r[2] = c->r[2] << 2;
    c->r[3] = c->r[2] + 0u;
    c->r[2] = mem_r8(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[3] + c->r[2];
    mem_w8(ram, c->r[30] + 0x00000007u, c->r[2]);
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[30] + 0x00000004u);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[30] + 0x00000007u);
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_08931680; }
    { goto L_089316ac; }
L_08931680:
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[30] + 0x00000007u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 2;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000008u);
    c->r[2] = c->r[2] & 0x000eu;
    { int _c = (c->r[2] != 0u); if (_c) goto L_0893153c; }
L_089316ac:
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0xffffc930u;
    c->r[5] = 0x04000000u;
    c->r[5] = c->r[5] | 0x0001u;
    c->r[6] = 0u + 0u;
    c->r[7] = 0u + 0u;
    { c->r[31] = 0x089316ccu; c->r[8] = 0u + 0u; func_089f6924(c, ram); }
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[30] + 0x00000007u);
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000024u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000020u);
    { c->r[29] = c->r[29] + 0x00000030u; return; }
    return; /* fell out of func_08931474 */
}

/* func_08933630  0x08933630..0x0893365c  44 bytes, source=sweep */
void func_08933630(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08933630u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[1] = 0x08aa0000u;
    mem_w32(ram, c->r[1] + 0xfffffa4cu, c->r[2]);
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_08933630 */
}

/* func_08935d18  0x08935d18..0x08935da4  140 bytes, source=fde */
void func_08935d18(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08935d18u);
    c->r[29] = c->r[29] + 0xffffffd0u;
    mem_w32(ram, c->r[29] + 0x00000024u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000020u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[4]);
    c->r[2] = c->r[5] + 0u;
    mem_w16(ram, c->r[30] + 0x00000014u, c->r[2]);
    c->r[2] = 0u + 0x00000002u;
    mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]);
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x08935d48u; c->r[4] = c->r[4] + 0x00000af4u; func_0880810c(c, ram); }
    { int _c = (c->r[2] == 0u); if (_c) goto L_08935d58; }
    c->r[2] = 0u + 0x00000006u;
    mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]);
L_08935d58:
    { c->r[31] = 0x08935d60u; func_0893443c(c, ram); }
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[30] + 0x00000018u);
    c->r[8] = (u32)(s32)(s16)mem_r16(ram, c->r[30] + 0x00000014u);
    c->r[3] = 0u + 0x00000001u;
    mem_w32(ram, c->r[29] + 0x00000000u, c->r[3]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[5] = c->r[2] + 0u;
    c->r[6] = 0u + 0x00000009u;
    c->r[7] = 0u + 0x00000001u;
    c->r[9] = 0u + 0x000000f0u;
    c->r[10] = 0u + 0x00000015u;
    { c->r[31] = 0x08935d90u; c->r[11] = 0u + 0x0000005fu; func_08935f8c(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000024u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000020u);
    { c->r[29] = c->r[29] + 0x00000030u; return; }
    return; /* fell out of func_08935d18 */
}

/* func_0893c01c  0x0893c01c..0x0893c054  56 bytes, source=sweep */
void func_0893c01c(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0893c01cu);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x0893c040u; c->r[5] = mem_r32(ram, c->r[30] + 0x00000004u); func_0893c2c8(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_0893c01c */
}

/* func_0893d560  0x0893d560..0x0893d5a4  68 bytes, source=sweep */
void func_0893d560(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0893d560u);
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
    return; /* fell out of func_0893d560 */
}

/* func_0893e404  0x0893e404..0x0893e480  124 bytes, source=fde */
void func_0893e404(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0893e404u);
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
    c->r[6] = 0u + 0x00000001u;
    { u32 _t = c->r[2]; c->r[31] = 0x0893e464u; c->r[7] = c->r[3] + 0u; recomp_call_indirect(c, ram, 0x0893e45cu, _t); }
    mem_w32(ram, c->r[30] + 0x00000020u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000034u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000030u);
    { c->r[29] = c->r[29] + 0x00000040u; return; }
    return; /* fell out of func_0893e404 */
}

/* func_089405b8  0x089405b8..0x089405fc  68 bytes, source=sweep */
void func_089405b8(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089405b8u);
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
    { c->r[31] = 0x089405e8u; c->r[5] = c->r[2] + 0u; func_0893f9e4(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_089405b8 */
}

/* func_08945bf8  0x08945bf8..0x08945c60  104 bytes, source=sweep */
void func_08945bf8(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08945bf8u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_wf32(ram, c->r[30] + 0x00000004u, c->f[12]);
    mem_wf32(ram, c->r[30] + 0x00000008u, c->f[13]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = c->r[2] >> 8;
    c->r[2] = 0x4a000000u;
    c->r[2] = c->r[3] | c->r[2];
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x08945c30u; c->r[5] = c->r[2] + 0u; func_0894568c(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[3] = c->r[2] >> 8;
    c->r[2] = 0x4b000000u;
    c->r[2] = c->r[3] | c->r[2];
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x08945c4cu; c->r[5] = c->r[2] + 0u; func_0894568c(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_08945bf8 */
}

/* func_08948534  0x08948534..0x0894a740  8716 bytes, source=fde */
void func_08948534(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08948534u);
L_08948534:
    c->r[29] = c->r[29] + 0xfffffbd0u;
    mem_w32(ram, c->r[29] + 0x00000420u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x0000041cu, c->r[30]);
    mem_w32(ram, c->r[29] + 0x00000418u, c->r[18]);
    mem_w32(ram, c->r[29] + 0x00000414u, c->r[17]);
    mem_w32(ram, c->r[29] + 0x00000410u, c->r[16]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[2] = c->r[5] + 0u;
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[6]);
    mem_w8(ram, c->r[30] + 0x00000004u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x000000e0u;
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
    c->r[2] = mem_r8(ram, c->r[30] + 0x00000004u);
    mem_w32(ram, c->r[30] + 0x00000400u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000400u);
    c->r[2] = (c->r[3] < 0x0000000du) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_0894a720; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000400u);
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08a40000u;
    c->r[2] = c->r[2] + 0x000079fcu;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    { u32 _t = c->r[2]; switch (_t) { case 0x08948534u: goto L_08948534; case 0x089485a4u: goto L_089485a4; case 0x08948790u: goto L_08948790; case 0x08948cb0u: goto L_08948cb0; case 0x08948cd4u: goto L_08948cd4; case 0x08948d14u: goto L_08948d14; case 0x0894a720u: goto L_0894a720; default: recomp_trap_unknown_indirect(c, ram, 0x0894859cu, _t); return; } }
L_089485a4:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000008u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000ac8u;
    { c->r[31] = 0x089485c0u; c->r[5] = c->r[2] + 0u; func_089cb820(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_089485e4; }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x089485dcu; c->r[5] = 0u + 0x00000002u; func_0880d260(c, ram); }
    { goto L_0894a720; }
L_089485e4:
    c->r[2] = 0x08a90000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0xffffbda0u);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000123u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_0894860c; }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x08948604u; c->r[5] = 0u + 0x00000002u; func_0880d260(c, ram); }
    { goto L_0894a720; }
L_0894860c:
    c->r[16] = mem_r32(ram, c->r[30] + 0x0000000cu);
    { c->r[31] = 0x08948618u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u); func_089b7394(c, ram); }
    mem_w32(ram, c->r[16] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000010u);
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x08948634u; c->r[5] = 0u + 0u; func_088679a0(c, ram); }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x08948640u; c->r[5] = 0u + 0u; func_088679d4(c, ram); }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x0894864cu; c->r[5] = 0u + 0u; func_0884d1b0(c, ram); }
    c->r[2] = 0x08aa0000u;
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00003610u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_089486cc; }
    mem_w32(ram, c->r[30] + 0x00000018u, 0u);
L_08948660:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000006u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_08948678; }
    { goto L_089486c0; }
L_08948678:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[3] = c->r[2] << 1;
    c->r[2] = 0x08aa0000u;
    c->r[2] = c->r[2] + 0x00003614u;
    c->r[16] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08a60000u;
    c->r[2] = c->r[2] + 0xffff86b0u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x089486acu; c->r[5] = mem_r32(ram, c->r[2] + 0x00000000u); func_089c35a0(c, ram); }
    mem_w16(ram, c->r[16] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]); goto L_08948660; }
L_089486c0:
    c->r[2] = 0u + 0x00000001u;
    c->r[1] = 0x08aa0000u;
    mem_w8(ram, c->r[1] + 0x00003610u, c->r[2]);
L_089486cc:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    mem_w32(ram, c->r[2] + 0x00000034u, 0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    mem_w32(ram, c->r[2] + 0x00000038u, 0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000079d0u);
    mem_wf32(ram, c->r[2] + 0x0000003cu, c->f[0]);
    mem_w32(ram, c->r[30] + 0x00000018u, 0u);
L_089486f0:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000004u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_08948708; }
    { goto L_08948768; }
L_08948708:
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[3];
    { c->r[31] = 0x08948720u; c->r[16] = c->r[2] + 0x00000004u; func_0884d22c(c, ram); }
    mem_wf32(ram, c->r[16] + 0x00000000u, c->f[0]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[3];
    c->r[16] = c->r[2] + 0x00000014u;
    c->r[4] = 0u + 0u;
    { c->r[31] = 0x08948744u; c->r[5] = 0u + 0x00000001u; func_0883a204(c, ram); }
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + 0xffffffffu;
    c->f[0] = u2f(c->r[2]);
    c->f[0] = (f32)(s32)f2u(c->f[0]);
    mem_wf32(ram, c->r[16] + 0x00000000u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]); goto L_089486f0; }
L_08948768:
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0u + 0xffffffffu;
    mem_w16(ram, c->r[3] + 0x00000044u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0x08aa0000u;
    c->r[2] = mem_r8(ram, c->r[2] + 0x00003920u);
    mem_w8(ram, c->r[3] + 0x0000004cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    { mem_w8(ram, c->r[2] + 0x0000004bu, 0u); goto L_0894a720; }
L_08948790:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000008u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000ac8u;
    { c->r[31] = 0x089487acu; c->r[5] = c->r[2] + 0u; func_089cb820(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_089487d0; }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x089487c8u; c->r[5] = 0u + 0x00000002u; func_0880d260(c, ram); }
    { goto L_0894a720; }
L_089487d0:
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0x08a90000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0xffffbda0u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000124u);
    mem_wf32(ram, c->r[3] + 0x00000040u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[1] = 0x08a90000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffffba7cu);
    mem_wf32(ram, c->r[2] + 0x00000034u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000034u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000079d4u);
    alx_c_cond_s(c, 12, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_0894881c; }
    { goto L_08948848; }
L_0894881c:
    c->r[4] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[1] = 0x08a80000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0x00002e40u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x0000003cu);
    c->f[1] = c->f[1] * c->f[0];
    c->f[0] = mem_rf32(ram, c->r[3] + 0x00000038u);
    c->f[0] = c->f[0] + c->f[1];
    { mem_wf32(ram, c->r[4] + 0x00000038u, c->f[0]); goto L_08948870; }
L_08948848:
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[1] = 0x08a80000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0x00002e40u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000079d8u);
    c->f[1] = c->f[1] * c->f[0];
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000038u);
    c->f[0] = c->f[0] - c->f[1];
    mem_wf32(ram, c->r[3] + 0x00000038u, c->f[0]);
L_08948870:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000038u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000079dcu);
    alx_c_cond_s(c, 14, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_08948898; }
    { goto L_089488ac; }
L_08948898:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000079dcu);
    { mem_wf32(ram, c->r[2] + 0x00000038u, c->f[0]); goto L_089488d8; }
L_089488ac:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000038u);
    c->f[0] = u2f(0u);
    alx_c_cond_s(c, 12, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_089488d0; }
    { goto L_089488d8; }
L_089488d0:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    mem_w32(ram, c->r[2] + 0x00000038u, 0u);
L_089488d8:
    mem_w32(ram, c->r[30] + 0x00000014u, 0u);
L_089488dc:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000004u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_089488f4; }
    { goto L_08948afc; }
L_089488f4:
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[3];
    c->r[18] = c->r[2] + 0x00000004u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[3];
    c->r[17] = c->r[2] + 0x00000004u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[3];
    { c->r[31] = 0x08948934u; c->r[16] = c->r[2] + 0x00000014u; func_0884d22c(c, ram); }
    c->f[1] = c->f[0];
    c->f[0] = mem_rf32(ram, c->r[16] + 0x00000000u);
    c->f[1] = c->f[1] * c->f[0];
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000079e0u);
    c->f[1] = c->f[1] * c->f[0];
    c->f[0] = mem_rf32(ram, c->r[17] + 0x00000000u);
    c->f[0] = c->f[0] + c->f[1];
    mem_wf32(ram, c->r[18] + 0x00000000u, c->f[0]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[3];
    c->r[17] = c->r[2] + 0x00000004u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[3];
    { c->r[31] = 0x08948984u; c->r[16] = c->r[2] + 0x00000004u; func_0884d22c(c, ram); }
    c->f[1] = c->f[0];
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000079e4u);
    c->f[1] = c->f[1] * c->f[0];
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000079d8u);
    c->f[1] = c->f[1] - c->f[0];
    c->f[0] = mem_rf32(ram, c->r[16] + 0x00000000u);
    c->f[0] = c->f[0] + c->f[1];
    mem_wf32(ram, c->r[17] + 0x00000000u, c->f[0]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[3];
    c->r[2] = c->r[2] + 0x00000004u;
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000000u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000079dcu);
    alx_c_cond_s(c, 14, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_089489e4; }
    { goto L_08948a58; }
L_089489e4:
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[3];
    c->r[2] = c->r[2] + 0x00000004u;
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000000u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000079dcu);
    c->f[0] = c->f[1] - c->f[0];
    mem_wf32(ram, c->r[30] + 0x0000001cu, c->f[0]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[3];
    c->r[2] = c->r[2] + 0x00000004u;
    c->r[1] = 0x08a40000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0x000079dcu);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x0000001cu);
    c->f[0] = c->f[1] - c->f[0];
    mem_wf32(ram, c->r[2] + 0x00000000u, c->f[0]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[3];
    c->r[2] = c->r[2] + 0x00000014u;
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000079e8u);
    { mem_wf32(ram, c->r[2] + 0x00000000u, c->f[0]); goto L_08948aec; }
L_08948a58:
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[3];
    c->r[2] = c->r[2] + 0x00000004u;
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000000u);
    c->f[0] = u2f(0u);
    alx_c_cond_s(c, 14, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_08948a8c; }
    { goto L_08948aec; }
L_08948a8c:
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[3];
    c->r[2] = c->r[2] + 0x00000004u;
    c->f[1] = u2f(0u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000000u);
    c->f[0] = c->f[1] - c->f[0];
    mem_wf32(ram, c->r[30] + 0x0000001cu, c->f[0]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[3];
    c->r[2] = c->r[2] + 0x00000004u;
    c->f[0] = mem_rf32(ram, c->r[30] + 0x0000001cu);
    mem_wf32(ram, c->r[2] + 0x00000000u, c->f[0]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[3];
    c->r[2] = c->r[2] + 0x00000014u;
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000079dcu);
    mem_wf32(ram, c->r[2] + 0x00000000u, c->f[0]);
L_08948aec:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]); goto L_089488dc; }
L_08948afc:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = mem_r8(ram, c->r[2] + 0x0000004cu);
    c->r[2] = 0x08aa0000u;
    c->r[2] = mem_r8(ram, c->r[2] + 0x00003920u);
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_08948c98; }
    mem_w32(ram, c->r[30] + 0x00000014u, 0u);
L_08948b18:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000010u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_08948b30; }
    { goto L_08948c10; }
L_08948b30:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[3] = c->r[2] << 4;
    c->r[2] = 0x08aa0000u;
    c->r[2] = c->r[2] + 0x000036a4u;
    c->r[2] = c->r[3] + c->r[2];
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000000u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000079ecu);
    c->f[0] = c->f[1] + c->f[0];
    mem_wf32(ram, c->r[30] + 0x0000001cu, c->f[0]);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x0000001cu);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000079dcu);
    alx_c_cond_s(c, 12, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_08948b7c; }
    { goto L_08948b90; }
L_08948b7c:
    c->f[0] = mem_rf32(ram, c->r[30] + 0x0000001cu);
    c->r[1] = 0x08a40000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0x000079dcu);
    c->f[0] = c->f[0] - c->f[1];
    mem_wf32(ram, c->r[30] + 0x0000001cu, c->f[0]);
L_08948b90:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[3] = c->r[2] << 4;
    c->r[2] = 0x08aa0000u;
    c->r[2] = c->r[2] + 0x000036a4u;
    c->r[2] = c->r[3] + c->r[2];
    c->f[0] = mem_rf32(ram, c->r[30] + 0x0000001cu);
    mem_wf32(ram, c->r[2] + 0x00000000u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[3] = c->r[2] << 4;
    c->r[2] = 0x08aa0000u;
    c->r[2] = c->r[2] + 0x000036b4u;
    c->r[2] = c->r[3] + c->r[2];
    c->f[0] = mem_rf32(ram, c->r[30] + 0x0000001cu);
    mem_wf32(ram, c->r[2] + 0x00000000u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[3] = c->r[2] << 4;
    c->r[2] = 0x08aa0000u;
    c->r[2] = c->r[2] + 0x000036c4u;
    c->r[2] = c->r[3] + c->r[2];
    c->f[0] = mem_rf32(ram, c->r[30] + 0x0000001cu);
    mem_wf32(ram, c->r[2] + 0x00000000u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[3] = c->r[2] << 4;
    c->r[2] = 0x08aa0000u;
    c->r[2] = c->r[2] + 0x000036d4u;
    c->r[2] = c->r[3] + c->r[2];
    c->f[0] = mem_rf32(ram, c->r[30] + 0x0000001cu);
    mem_wf32(ram, c->r[2] + 0x00000000u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = c->r[2] + 0x00000004u;
    { mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]); goto L_08948b18; }
L_08948c10:
    mem_w32(ram, c->r[30] + 0x00000014u, 0u);
L_08948c14:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000004u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_08948c2c; }
    { goto L_08948c84; }
L_08948c2c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[3] = c->r[2] << 4;
    c->r[2] = 0x08aa0000u;
    c->r[2] = c->r[2] + 0x000038e0u;
    c->r[4] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[3] = c->r[2] << 6;
    c->r[2] = 0x08aa0000u;
    c->r[2] = c->r[2] + 0x000036a4u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[1] = 0x08a40000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0x000079dcu);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000000u);
    c->f[0] = c->f[1] - c->f[0];
    c->r[5] = 0x08aa0000u;
    c->r[5] = c->r[5] + 0x000035f0u;
    { c->r[31] = 0x08948c74u; c->f[12] = c->f[0]; func_0884c224(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]); goto L_08948c14; }
L_08948c84:
    c->r[2] = 0x08aa0000u;
    c->r[2] = mem_r8(ram, c->r[2] + 0x00003920u);
    c->r[2] = c->r[2] + 0x00000001u;
    c->r[1] = 0x08aa0000u;
    mem_w8(ram, c->r[1] + 0x00003920u, c->r[2]);
L_08948c98:
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r8(ram, c->r[2] + 0x0000004cu);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w8(ram, c->r[3] + 0x0000004cu, c->r[2]); goto L_0894a720; }
L_08948cb0:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_0894a720; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    { c->r[31] = 0x08948cccu; c->r[4] = mem_r32(ram, c->r[2] + 0x00000000u); func_089b73e0(c, ram); }
    { goto L_0894a720; }
L_08948cd4:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000008u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000ac8u;
    { c->r[31] = 0x08948cf0u; c->r[5] = c->r[2] + 0u; func_089cb820(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_0894a720; }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x08948d0cu; c->r[5] = 0u + 0x00000002u; func_0880d260(c, ram); }
    { goto L_0894a720; }
L_08948d14:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000008u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000ac8u;
    { c->r[31] = 0x08948d30u; c->r[5] = c->r[2] + 0u; func_089cb820(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_08948d48; }
    { goto L_0894a720; }
L_08948d48:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[3] = mem_r16(ram, c->r[2] + 0x000000a8u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x00000044u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_08948df8; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    mem_w8(ram, c->r[2] + 0x0000004au, 0u);
    mem_w32(ram, c->r[30] + 0x00000014u, 0u);
L_08948d6c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000004u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_08948d84; }
    { goto L_08948df8; }
L_08948d84:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08a60000u;
    c->r[2] = c->r[2] + 0xffff86a0u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000018u);
    { c->r[31] = 0x08948da4u; c->r[5] = mem_r32(ram, c->r[2] + 0x00000000u); func_089b98c4(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    { int _c = ((s32)c->r[2] >= 0); if (_c) goto L_08948dbc; }
    { goto L_08948df8; }
L_08948dbc:
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[3] = c->r[2] + 0x00000040u;
    c->r[2] = mem_r8(ram, c->r[30] + 0x00000010u);
    mem_w8(ram, c->r[3] + 0x00000006u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r8(ram, c->r[2] + 0x0000004au);
    c->r[2] = c->r[2] + 0x00000001u;
    mem_w8(ram, c->r[3] + 0x0000004au, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]); goto L_08948d6c; }
L_08948df8:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x0000004au);
    { int _c = ((s32)c->r[2] >= 0); if (_c) goto L_08948e10; }
    { goto L_0894a720; }
L_08948e10:
    c->r[2] = 0x08a90000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0xffffbbdcu);
    c->r[2] = c->r[2] & 0x0020u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_08948e2c; }
    { goto L_0894a720; }
L_08948e2c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x0000004au);
    { int _c = ((s32)c->r[2] > 0); if (_c) goto L_08948e44; }
    { goto L_0894a720; }
L_08948e44:
    { c->r[31] = 0x08948e4cu; func_088516f8(c, ram); }
    { int _c = (c->r[2] != 0u); if (_c) goto L_08948e80; }
    { c->r[31] = 0x08948e5cu; func_08862cb4(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
    c->r[2] = mem_r8(ram, c->r[30] + 0x00000014u);
    c->r[2] = c->r[2] ^ 0x0001u;
    c->r[2] = c->r[2] & 0x0001u;
    c->r[2] = c->r[2] & 0x00ffu;
    { int _c = (c->r[2] == 0u); if (_c) goto L_08948ea0; }
    { goto L_0894a720; }
L_08948e80:
    { c->r[31] = 0x08948e88u; func_08854c28(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = 0u + 0x00000009u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_08948ea0; }
    { goto L_0894a720; }
L_08948ea0:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000020u;
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
    mem_w32(ram, c->r[30] + 0x00000010u, 0u);
L_08948eb4:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x0000004au);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = ((s32)c->r[2] < (s32)c->r[3]) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_08948ed4; }
    { goto L_08948f18; }
L_08948ed4:
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = c->r[2] + 0x00000040u;
    c->r[5] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000006u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[3] = c->r[2] << 6;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000018u);
    { c->r[31] = 0x08948f04u; c->r[6] = c->r[2] + 0u; func_089b9a20(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000020u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]); goto L_08948eb4; }
L_08948f18:
    c->r[2] = c->r[30] + 0x00000030u;
    c->r[4] = c->r[2] + 0u;
    c->f[12] = u2f(0u);
    c->f[13] = u2f(0u);
    c->f[14] = u2f(0u);
    c->f[15] = u2f(0u);
    { c->r[31] = 0x08948f38u; func_0880d140(c, ram); }
    c->r[2] = c->r[30] + 0x00000050u;
    mem_w32(ram, c->r[30] + 0x00000020u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]);
    c->r[2] = 0u + 0x00000003u;
    mem_w32(ram, c->r[30] + 0x00000150u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000150u);
    c->r[2] = 0u + 0xffffffffu;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_08948f90; }
L_08948f60:
    { c->r[31] = 0x08948f68u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000010u); func_08808260(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = c->r[2] + 0x00000040u;
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000150u);
    c->r[2] = c->r[2] + 0xffffffffu;
    c->r[3] = c->r[2] + 0u;
    mem_w32(ram, c->r[30] + 0x00000150u, c->r[3]);
    c->r[2] = 0u + 0xffffffffu;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_08948f60; }
L_08948f90:
    c->r[2] = c->r[30] + 0x00000160u;
    mem_w32(ram, c->r[30] + 0x00000150u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000150u);
    mem_w32(ram, c->r[30] + 0x00000020u, c->r[2]);
    c->r[2] = 0u + 0x00000003u;
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = 0u + 0xffffffffu;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_08948fe8; }
L_08948fb8:
    { c->r[31] = 0x08948fc0u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000020u); func_08808260(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[2] = c->r[2] + 0x00000040u;
    mem_w32(ram, c->r[30] + 0x00000020u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = c->r[2] + 0xffffffffu;
    c->r[3] = c->r[2] + 0u;
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[3]);
    c->r[2] = 0u + 0xffffffffu;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_08948fb8; }
L_08948fe8:
    c->r[2] = c->r[30] + 0x00000260u;
    { c->r[31] = 0x08948ff4u; c->r[4] = c->r[2] + 0u; func_08808260(c, ram); }
    c->r[2] = c->r[30] + 0x000002a0u;
    { c->r[31] = 0x08949000u; c->r[4] = c->r[2] + 0u; func_08808260(c, ram); }
    c->r[4] = c->r[30] + 0x00000260u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000040u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000079f0u);
    c->f[1] = c->f[1] * c->f[0];
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000038u);
    c->f[0] = c->f[1] * c->f[0];
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->f[12] = c->f[0];
    c->f[13] = mem_rf32(ram, c->r[2] + 0x00000040u);
    { c->r[31] = 0x0894903cu; c->f[14] = mem_rf32(ram, c->r[3] + 0x00000040u); func_0881a114(c, ram); }
    c->r[4] = c->r[30] + 0x000002a0u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000040u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000079f4u);
    c->f[1] = c->f[1] * c->f[0];
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000038u);
    c->f[0] = c->f[1] * c->f[0];
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->f[12] = c->f[0];
    c->f[13] = mem_rf32(ram, c->r[2] + 0x00000040u);
    { c->r[31] = 0x08949078u; c->f[14] = mem_rf32(ram, c->r[3] + 0x00000040u); func_0881a114(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000150u, 0u);
L_0894907c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x0000004au);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000150u);
    c->r[2] = ((s32)c->r[2] < (s32)c->r[3]) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_0894909c; }
    { goto L_08949404; }
L_0894909c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000150u);
    c->r[3] = c->r[2] << 6;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0xffffbf60u;
    { c->r[31] = 0x089490bcu; c->r[5] = c->r[2] + 0u; func_0885a018(c, ram); }
    mem_wf32(ram, c->r[30] + 0x0000001cu, c->f[0]);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x0000001cu);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x0000001cu);
    c->f[0] = c->f[1] * c->f[0];
    mem_wf32(ram, c->r[30] + 0x000002f0u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000150u);
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[30];
    c->r[2] = c->r[2] + 0x00000040u;
    c->f[0] = mem_rf32(ram, c->r[30] + 0x000002f0u);
    mem_wf32(ram, c->r[2] + 0x00000000u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000150u);
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[30];
    c->r[2] = c->r[2] + 0x000002e0u;
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000079dcu);
    mem_wf32(ram, c->r[2] + 0x00000000u, c->f[0]);
    c->r[2] = c->r[30] + 0x00000300u;
    { c->r[31] = 0x08949110u; c->r[4] = c->r[2] + 0u; func_08808240(c, ram); }
    { c->r[31] = 0x08949118u; func_08820f58(c, ram); }
    c->r[6] = c->r[2] + 0x00000020u;
    c->r[4] = c->r[30] + 0x00000300u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000150u);
    c->r[3] = c->r[2] << 6;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = c->r[2] + 0x00000030u;
    { c->r[31] = 0x0894913cu; c->r[5] = c->r[2] + 0u; func_08820ca4(c, ram); }
    c->r[3] = c->r[30] + 0x00000160u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000150u);
    c->r[2] = c->r[2] << 6;
    c->r[2] = c->r[3] + c->r[2];
    mem_w32(ram, c->r[30] + 0x00000020u, c->r[2]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000150u);
    c->r[3] = c->r[2] << 6;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[3] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[3] + 0x00000000u);
    mem_w32(ram, c->r[4] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[3] + 0x00000004u);
    mem_w32(ram, c->r[4] + 0x00000004u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[3] + 0x00000008u);
    mem_w32(ram, c->r[4] + 0x00000008u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[3] + 0x0000000cu);
    mem_w32(ram, c->r[4] + 0x0000000cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[16] = c->r[2] + 0x00000030u;
    c->r[2] = c->r[30] + 0x00000310u;
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000079dcu);
    c->r[4] = c->r[2] + 0u;
    c->f[12] = u2f(0u);
    c->f[13] = u2f(0u);
    c->f[14] = u2f(0u);
    { c->r[31] = 0x089491b0u; c->f[15] = c->f[0]; func_0880d140(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000310u);
    mem_w32(ram, c->r[16] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000314u);
    mem_w32(ram, c->r[16] + 0x00000004u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000318u);
    mem_w32(ram, c->r[16] + 0x00000008u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000031cu);
    mem_w32(ram, c->r[16] + 0x0000000cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[2] = c->r[2] + 0x00000010u;
    c->r[3] = c->r[30] + 0x00000300u;
    c->r[4] = c->r[2] + 0u;
    c->r[5] = c->r[3] + 0u;
    { c->r[31] = 0x089491ecu; c->r[6] = mem_r32(ram, c->r[30] + 0x00000020u); func_0884d26c(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[3] = c->r[2] + 0x00000020u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[2] = c->r[2] + 0x00000010u;
    c->r[4] = c->r[3] + 0u;
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000020u);
    { c->r[31] = 0x0894920cu; c->r[6] = c->r[2] + 0u; func_0884d26c(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[3] = c->r[2] + 0x00000010u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[2] = c->r[2] + 0x00000010u;
    c->r[4] = c->r[3] + 0u;
    { c->r[31] = 0x08949228u; c->r[5] = c->r[2] + 0u; func_0884c1d8(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[3] = c->r[2] + 0x00000020u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[2] = c->r[2] + 0x00000020u;
    c->r[4] = c->r[3] + 0u;
    { c->r[31] = 0x08949244u; c->r[5] = c->r[2] + 0u; func_0884c1d8(c, ram); }
    c->r[3] = c->r[30] + 0x00000160u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000150u);
    c->r[2] = c->r[2] << 6;
    c->r[4] = c->r[3] + c->r[2];
    c->r[5] = c->r[30] + 0x00000260u;
    c->r[3] = c->r[30] + 0x00000160u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000150u);
    c->r[2] = c->r[2] << 6;
    c->r[2] = c->r[3] + c->r[2];
    { c->r[31] = 0x08949270u; c->r[6] = c->r[2] + 0u; func_0884c6d4(c, ram); }
    { c->r[31] = 0x08949278u; func_08820f58(c, ram); }
    c->r[6] = c->r[2] + 0x00000020u;
    c->r[3] = c->r[30] + 0x00000160u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000150u);
    c->r[2] = c->r[2] << 6;
    c->r[2] = c->r[3] + c->r[2];
    c->r[4] = c->r[2] + 0x00000030u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000150u);
    c->r[3] = c->r[2] << 6;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = c->r[2] + 0x00000030u;
    { c->r[31] = 0x089492acu; c->r[5] = c->r[2] + 0u; func_08820ca4(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000150u);
    c->r[2] = c->r[2] << 6;
    c->r[2] = c->r[2] + c->r[30];
    c->r[2] = c->r[2] + 0x0000019cu;
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000079dcu);
    mem_wf32(ram, c->r[2] + 0x00000000u, c->f[0]);
    c->r[3] = c->r[30] + 0x00000050u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000150u);
    c->r[2] = c->r[2] << 6;
    c->r[4] = c->r[3] + c->r[2];
    c->r[5] = c->r[30] + 0x000002a0u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000150u);
    c->r[3] = c->r[2] << 6;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = c->r[3] + c->r[2];
    { c->r[31] = 0x089492f4u; c->r[6] = c->r[2] + 0u; func_0884c6d4(c, ram); }
    { c->r[31] = 0x089492fcu; func_08820f58(c, ram); }
    c->r[6] = c->r[2] + 0x00000020u;
    c->r[3] = c->r[30] + 0x00000050u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000150u);
    c->r[2] = c->r[2] << 6;
    c->r[2] = c->r[3] + c->r[2];
    c->r[4] = c->r[2] + 0x00000030u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000150u);
    c->r[3] = c->r[2] << 6;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = c->r[2] + 0x00000030u;
    { c->r[31] = 0x08949330u; c->r[5] = c->r[2] + 0u; func_08820ca4(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000150u);
    c->r[2] = c->r[2] << 6;
    c->r[2] = c->r[2] + c->r[30];
    c->r[2] = c->r[2] + 0x0000008cu;
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000079dcu);
    mem_wf32(ram, c->r[2] + 0x00000000u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000150u);
    c->r[3] = c->r[2] << 6;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[4] = c->r[3] + c->r[2];
    c->r[5] = c->r[30] + 0x00000260u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000150u);
    c->r[3] = c->r[2] << 6;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = c->r[3] + c->r[2];
    { c->r[31] = 0x08949378u; c->r[6] = c->r[2] + 0u; func_0884c6d4(c, ram); }
    { c->r[31] = 0x08949380u; func_08820f58(c, ram); }
    c->r[6] = c->r[2] + 0x00000020u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000150u);
    c->r[3] = c->r[2] << 6;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[4] = c->r[2] + 0x00000030u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000150u);
    c->r[3] = c->r[2] << 6;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = c->r[2] + 0x00000030u;
    { c->r[31] = 0x089493b4u; c->r[5] = c->r[2] + 0u; func_08820ca4(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000150u);
    c->r[3] = c->r[2] << 6;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000079dcu);
    mem_wf32(ram, c->r[2] + 0x0000003cu, c->f[0]);
    c->r[4] = c->r[30] + 0x00000030u;
    c->r[5] = c->r[30] + 0x00000030u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000150u);
    c->r[3] = c->r[2] << 6;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = c->r[2] + 0x00000030u;
    { c->r[31] = 0x089493f4u; c->r[6] = c->r[2] + 0u; func_08859fd4(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000150u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000150u, c->r[2]); goto L_0894907c; }
L_08949404:
    c->r[3] = c->r[30] + 0x00000030u;
    c->r[5] = c->r[30] + 0x00000030u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x0000004au);
    c->f[0] = u2f(c->r[2]);
    c->f[1] = (f32)(s32)f2u(c->f[0]);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000079dcu);
    c->f[0] = c->f[0] / c->f[1];
    c->r[4] = c->r[3] + 0u;
    { c->r[31] = 0x08949434u; c->f[12] = c->f[0]; func_0884c224(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000150u, 0u);
L_08949438:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x0000004au);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000150u);
    c->r[2] = ((s32)c->r[2] < (s32)c->r[3]) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_08949458; }
    { goto L_0894972c; }
L_08949458:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000150u);
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[30];
    c->r[2] = c->r[2] + 0x000002e0u;
    c->r[1] = 0x08a40000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0x000079dcu);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000000u);
    c->f[0] = c->f[1] - c->f[0];
    mem_wf32(ram, c->r[30] + 0x000002f0u, c->f[0]);
    c->r[2] = c->r[30] + 0x00000310u;
    { c->r[31] = 0x08949488u; c->r[4] = c->r[2] + 0u; func_08808240(c, ram); }
    c->r[2] = c->r[30] + 0x00000300u;
    { c->r[31] = 0x08949494u; c->r[4] = c->r[2] + 0u; func_08808240(c, ram); }
    c->r[2] = c->r[30] + 0x00000380u;
    { c->r[31] = 0x089494a0u; c->r[4] = c->r[2] + 0u; func_08808240(c, ram); }
    c->r[2] = c->r[30] + 0x00000390u;
    { c->r[31] = 0x089494acu; c->r[4] = c->r[2] + 0u; func_08808240(c, ram); }
    c->r[2] = c->r[30] + 0x000003a0u;
    { c->r[31] = 0x089494b8u; c->r[4] = c->r[2] + 0u; func_08808240(c, ram); }
    c->r[2] = c->r[30] + 0x000003b0u;
    { c->r[31] = 0x089494c4u; c->r[4] = c->r[2] + 0u; func_08808240(c, ram); }
    c->r[4] = c->r[30] + 0x00000310u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000150u);
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[3];
    c->r[2] = c->r[2] + 0x00000004u;
    c->r[5] = 0x08aa0000u;
    c->r[5] = c->r[5] + 0x000035e0u;
    { c->r[31] = 0x089494ecu; c->f[12] = mem_rf32(ram, c->r[2] + 0x00000000u); func_0884c224(c, ram); }
    c->r[4] = c->r[30] + 0x00000300u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000150u);
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[3];
    c->r[2] = c->r[2] + 0x00000004u;
    c->r[1] = 0x08a40000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0x000079dcu);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000000u);
    c->f[0] = c->f[1] - c->f[0];
    c->r[5] = 0x08aa0000u;
    c->r[5] = c->r[5] + 0x000035e0u;
    { c->r[31] = 0x08949524u; c->f[12] = c->f[0]; func_0884c224(c, ram); }
    c->r[2] = c->r[30] + 0x00000310u;
    c->r[3] = c->r[30] + 0x00000310u;
    c->r[6] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[4] = c->r[2] + 0u;
    c->r[5] = c->r[3] + 0u;
    { c->r[31] = 0x08949540u; c->f[12] = mem_rf32(ram, c->r[6] + 0x00000034u); func_0884c224(c, ram); }
    c->r[2] = c->r[30] + 0x00000300u;
    c->r[3] = c->r[30] + 0x00000300u;
    c->r[6] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[4] = c->r[2] + 0u;
    c->r[5] = c->r[3] + 0u;
    { c->r[31] = 0x0894955cu; c->f[12] = mem_rf32(ram, c->r[6] + 0x00000034u); func_0884c224(c, ram); }
    c->r[2] = c->r[30] + 0x00000380u;
    c->r[3] = c->r[30] + 0x00000310u;
    c->r[4] = c->r[2] + 0u;
    c->r[5] = c->r[3] + 0u;
    { c->r[31] = 0x08949574u; c->f[12] = mem_rf32(ram, c->r[30] + 0x000002f0u); func_0884c224(c, ram); }
    c->r[2] = c->r[30] + 0x00000390u;
    c->r[3] = c->r[30] + 0x00000300u;
    c->r[4] = c->r[2] + 0u;
    c->r[5] = c->r[3] + 0u;
    { c->r[31] = 0x0894958cu; c->f[12] = mem_rf32(ram, c->r[30] + 0x000002f0u); func_0884c224(c, ram); }
    c->r[3] = c->r[30] + 0x000003a0u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000150u);
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[30];
    c->r[2] = c->r[2] + 0x000002e0u;
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000000u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000079f8u);
    c->f[1] = c->f[1] * c->f[0];
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000038u);
    c->f[0] = c->f[1] * c->f[0];
    c->r[4] = c->r[3] + 0u;
    c->r[5] = 0x08aa0000u;
    c->r[5] = c->r[5] + 0x00003600u;
    { c->r[31] = 0x089495d0u; c->f[12] = c->f[0]; func_0884c224(c, ram); }
    c->r[3] = c->r[30] + 0x000003b0u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000150u);
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[30];
    c->r[2] = c->r[2] + 0x000002e0u;
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000000u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000079f8u);
    c->f[1] = c->f[1] * c->f[0];
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000038u);
    c->f[0] = c->f[1] * c->f[0];
    c->r[4] = c->r[3] + 0u;
    c->r[5] = 0x08aa0000u;
    c->r[5] = c->r[5] + 0x00003600u;
    { c->r[31] = 0x08949614u; c->f[12] = c->f[0]; func_0884c224(c, ram); }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000150u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[2] = c->r[2] << 3;
    c->r[2] = c->r[2] + c->r[30];
    c->r[16] = c->r[2] + 0x00000320u;
    c->r[2] = c->r[30] + 0x00000310u;
    { c->r[31] = 0x0894963cu; c->r[4] = c->r[2] + 0u; func_0888d9b8(c, ram); }
    mem_w32(ram, c->r[16] + 0x00000000u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000150u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[2] = c->r[2] << 3;
    c->r[2] = c->r[2] + c->r[30];
    c->r[16] = c->r[2] + 0x00000324u;
    c->r[2] = c->r[30] + 0x00000300u;
    { c->r[31] = 0x08949668u; c->r[4] = c->r[2] + 0u; func_0888d9b8(c, ram); }
    mem_w32(ram, c->r[16] + 0x00000000u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000150u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[2] = c->r[2] << 3;
    c->r[2] = c->r[2] + c->r[30];
    c->r[16] = c->r[2] + 0x00000328u;
    c->r[2] = c->r[30] + 0x00000380u;
    { c->r[31] = 0x08949694u; c->r[4] = c->r[2] + 0u; func_0888d9b8(c, ram); }
    mem_w32(ram, c->r[16] + 0x00000000u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000150u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[2] = c->r[2] << 3;
    c->r[2] = c->r[2] + c->r[30];
    c->r[16] = c->r[2] + 0x0000032cu;
    c->r[2] = c->r[30] + 0x00000390u;
    { c->r[31] = 0x089496c0u; c->r[4] = c->r[2] + 0u; func_0888d9b8(c, ram); }
    mem_w32(ram, c->r[16] + 0x00000000u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000150u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[2] = c->r[2] << 3;
    c->r[2] = c->r[2] + c->r[30];
    c->r[16] = c->r[2] + 0x00000330u;
    c->r[2] = c->r[30] + 0x000003a0u;
    { c->r[31] = 0x089496ecu; c->r[4] = c->r[2] + 0u; func_0888d9b8(c, ram); }
    mem_w32(ram, c->r[16] + 0x00000000u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000150u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[2] = c->r[2] << 3;
    c->r[2] = c->r[2] + c->r[30];
    c->r[16] = c->r[2] + 0x00000334u;
    c->r[2] = c->r[30] + 0x000003b0u;
    { c->r[31] = 0x08949718u; c->r[4] = c->r[2] + 0u; func_0888d9b8(c, ram); }
    mem_w32(ram, c->r[16] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000150u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000150u, c->r[2]); goto L_08949438; }
L_0894972c:
    mem_w32(ram, c->r[30] + 0x00000150u, 0u);
L_08949730:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000150u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000004u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_08949748; }
    { goto L_08949804; }
L_08949748:
    mem_w32(ram, c->r[30] + 0x00000020u, 0u);
L_0894974c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x0000004au);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[2] = ((s32)c->r[2] < (s32)c->r[3]) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_0894976c; }
    { goto L_089497f4; }
L_0894976c:
    c->r[2] = c->r[30] + 0x000003b0u;
    { c->r[31] = 0x08949778u; c->r[4] = c->r[2] + 0u; func_08808240(c, ram); }
    c->r[4] = c->r[30] + 0x000003b0u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000150u);
    c->r[3] = c->r[2] << 4;
    c->r[2] = 0x08aa0000u;
    c->r[2] = c->r[2] + 0x000038e0u;
    c->r[5] = c->r[3] + c->r[2];
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[30];
    c->r[2] = c->r[2] + 0x00000040u;
    c->f[1] = mem_rf32(ram, c->r[3] + 0x00000038u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000000u);
    c->f[0] = c->f[1] * c->f[0];
    { c->r[31] = 0x089497b8u; c->f[12] = c->f[0]; func_0884c224(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[3] = c->r[2] << 2;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000150u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[30];
    c->r[16] = c->r[2] + 0x000003c0u;
    c->r[2] = c->r[30] + 0x000003b0u;
    { c->r[31] = 0x089497e0u; c->r[4] = c->r[2] + 0u; func_0888d9b8(c, ram); }
    mem_w32(ram, c->r[16] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000020u, c->r[2]); goto L_0894974c; }
L_089497f4:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000150u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000150u, c->r[2]); goto L_08949730; }
L_08949804:
    c->r[2] = c->r[30] + 0x00000030u;
    c->r[4] = 0x08a70000u;
    c->r[4] = c->r[4] + 0xffffb640u;
    { c->r[31] = 0x08949818u; c->r[5] = c->r[2] + 0u; func_089f1418(c, ram); }
    c->r[4] = 0x08a70000u;
    c->r[4] = c->r[4] + 0xffffb640u;
    c->r[5] = 0u + 0x00000003u;
    { c->r[31] = 0x0894982cu; c->r[6] = 0u + 0x00000007u; func_089df7a0(c, ram); }
    c->r[4] = 0x08a70000u;
    c->r[4] = c->r[4] + 0xffffb640u;
    { c->r[31] = 0x0894983cu; c->r[5] = 0u + 0u; func_089dfe30(c, ram); }
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
    { c->r[31] = 0x08949884u; c->r[5] = 0u + 0x00000005u; func_0894b798(c, ram); }
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
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000079f8u);
    c->r[1] = 0x08a40000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0x000079f8u);
    c->r[4] = c->r[2] + 0u;
    c->f[12] = c->f[0];
    { c->r[31] = 0x089498e0u; c->f[13] = c->f[1]; func_0894b71c(c, ram); }
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
    c->r[5] = 0x12000000u;
    { c->r[31] = 0x0894992cu; c->r[5] = c->r[5] | 0x0182u; func_0894b6a0(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000150u, 0u);
L_08949930:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x0000004au);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000150u);
    c->r[2] = ((s32)c->r[2] < (s32)c->r[3]) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_08949950; }
    { goto L_0894a660; }
L_08949950:
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
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000150u);
    c->r[3] = c->r[2] << 6;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[5] = 0u + 0x00000002u;
    { c->r[31] = 0x089499a8u; c->r[6] = c->r[2] + 0u; func_0894b7d4(c, ram); }
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
    c->r[2] = 0x08aa0000u;
    c->r[2] = c->r[2] + 0x00003620u;
    c->r[2] = c->r[2] >> 24;
    c->r[2] = c->r[2] & 0x000fu;
    c->r[3] = c->r[2] << 16;
    c->r[2] = 0x10000000u;
    c->r[2] = c->r[3] | c->r[2];
    { c->r[31] = 0x08949a08u; c->r[5] = c->r[2] + 0u; func_0894b6a0(c, ram); }
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
    c->r[3] = 0x08aa0000u;
    c->r[3] = c->r[3] + 0x00003620u;
    c->r[2] = 0x00ff0000u;
    c->r[2] = c->r[2] | 0xffffu;
    c->r[3] = c->r[3] & c->r[2];
    c->r[2] = 0x01000000u;
    c->r[2] = c->r[3] | c->r[2];
    { c->r[31] = 0x08949a68u; c->r[5] = c->r[2] + 0u; func_0894b6a0(c, ram); }
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
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000150u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[2] = c->r[2] << 3;
    c->r[2] = c->r[2] + c->r[30];
    c->r[2] = c->r[2] + 0x00000320u;
    { c->r[31] = 0x08949ac8u; c->r[5] = mem_r32(ram, c->r[2] + 0x00000000u); func_0894b6e4(c, ram); }
    c->r[2] = 0x08aa0000u;
    c->r[2] = mem_r16(ram, c->r[2] + 0x00003614u);
    c->r[4] = 0x08a70000u;
    c->r[4] = c->r[4] + 0xffffb640u;
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x08949ae4u; c->r[6] = 0u + 0u; func_089e0bd8(c, ram); }
    c->r[4] = 0x08a70000u;
    c->r[4] = c->r[4] + 0xffffb640u;
    { c->r[31] = 0x08949af4u; c->r[5] = 0u + 0u; func_089e0008(c, ram); }
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
    { c->r[31] = 0x08949b40u; c->r[5] = c->r[5] | 0x0004u; func_0894b6a0(c, ram); }
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
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000150u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[2] = c->r[2] << 3;
    c->r[2] = c->r[2] + c->r[30];
    c->r[2] = c->r[2] + 0x00000324u;
    { c->r[31] = 0x08949ba0u; c->r[5] = mem_r32(ram, c->r[2] + 0x00000000u); func_0894b6e4(c, ram); }
    c->r[2] = 0x08aa0000u;
    c->r[2] = mem_r16(ram, c->r[2] + 0x00003616u);
    c->r[4] = 0x08a70000u;
    c->r[4] = c->r[4] + 0xffffb640u;
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x08949bbcu; c->r[6] = 0u + 0u; func_089e0bd8(c, ram); }
    c->r[4] = 0x08a70000u;
    c->r[4] = c->r[4] + 0xffffb640u;
    { c->r[31] = 0x08949bccu; c->r[5] = 0u + 0x00000001u; func_089e0008(c, ram); }
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
    { c->r[31] = 0x08949c18u; c->r[5] = c->r[5] | 0x0004u; func_0894b6a0(c, ram); }
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
    c->r[3] = c->r[30] + 0x00000050u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000150u);
    c->r[2] = c->r[2] << 6;
    c->r[2] = c->r[3] + c->r[2];
    c->r[5] = 0u + 0x00000002u;
    { c->r[31] = 0x08949c70u; c->r[6] = c->r[2] + 0u; func_0894b7d4(c, ram); }
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
    c->r[2] = 0x08aa0000u;
    c->r[2] = c->r[2] + 0x000036a0u;
    c->r[2] = c->r[2] >> 24;
    c->r[2] = c->r[2] & 0x000fu;
    c->r[3] = c->r[2] << 16;
    c->r[2] = 0x10000000u;
    c->r[2] = c->r[3] | c->r[2];
    { c->r[31] = 0x08949cd0u; c->r[5] = c->r[2] + 0u; func_0894b6a0(c, ram); }
    c->r[2] = 0x08aa0000u;
    c->r[2] = mem_r16(ram, c->r[2] + 0x0000361cu);
    c->r[4] = 0x08a70000u;
    c->r[4] = c->r[4] + 0xffffb640u;
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x08949cecu; c->r[6] = 0u + 0u; func_089e0bd8(c, ram); }
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
    c->r[3] = 0x08aa0000u;
    c->r[3] = c->r[3] + 0x000036a0u;
    c->r[2] = 0x00ff0000u;
    c->r[2] = c->r[2] | 0xffffu;
    c->r[3] = c->r[3] & c->r[2];
    c->r[2] = 0x01000000u;
    c->r[2] = c->r[3] | c->r[2];
    { c->r[31] = 0x08949d4cu; c->r[5] = c->r[2] + 0u; func_0894b6a0(c, ram); }
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
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000150u);
    c->r[2] = c->r[2] << 4;
    c->r[2] = c->r[2] + c->r[30];
    c->r[2] = c->r[2] + 0x000003c0u;
    c->r[4] = c->r[3] + 0u;
    { c->r[31] = 0x08949da4u; c->r[5] = mem_r32(ram, c->r[2] + 0x00000000u); func_0894b6e4(c, ram); }
    c->r[4] = 0x08a70000u;
    c->r[4] = c->r[4] + 0xffffb640u;
    { c->r[31] = 0x08949db4u; c->r[5] = 0u + 0x00000002u; func_089e0008(c, ram); }
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
    { c->r[31] = 0x08949e00u; c->r[5] = c->r[5] | 0x0004u; func_0894b6a0(c, ram); }
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
    c->r[3] = 0x08aa0000u;
    c->r[3] = c->r[3] + 0x00003720u;
    c->r[2] = 0x00ff0000u;
    c->r[2] = c->r[2] | 0xffffu;
    c->r[3] = c->r[3] & c->r[2];
    c->r[2] = 0x01000000u;
    c->r[2] = c->r[3] | c->r[2];
    { c->r[31] = 0x08949e60u; c->r[5] = c->r[2] + 0u; func_0894b6a0(c, ram); }
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
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000150u);
    c->r[2] = c->r[2] << 4;
    c->r[2] = c->r[2] + c->r[30];
    c->r[2] = c->r[2] + 0x000003c8u;
    c->r[4] = c->r[3] + 0u;
    { c->r[31] = 0x08949eb8u; c->r[5] = mem_r32(ram, c->r[2] + 0x00000000u); func_0894b6e4(c, ram); }
    c->r[4] = 0x08a70000u;
    c->r[4] = c->r[4] + 0xffffb640u;
    { c->r[31] = 0x08949ec8u; c->r[5] = 0u + 0x00000003u; func_089e0008(c, ram); }
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
    { c->r[31] = 0x08949f14u; c->r[5] = c->r[5] | 0x0004u; func_0894b6a0(c, ram); }
    c->r[2] = 0x08aa0000u;
    c->r[2] = mem_r16(ram, c->r[2] + 0x0000361eu);
    c->r[4] = 0x08a70000u;
    c->r[4] = c->r[4] + 0xffffb640u;
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x08949f30u; c->r[6] = 0u + 0u; func_089e0bd8(c, ram); }
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
    c->r[3] = 0x08aa0000u;
    c->r[3] = c->r[3] + 0x000036e0u;
    c->r[2] = 0x00ff0000u;
    c->r[2] = c->r[2] | 0xffffu;
    c->r[3] = c->r[3] & c->r[2];
    c->r[2] = 0x01000000u;
    c->r[2] = c->r[3] | c->r[2];
    { c->r[31] = 0x08949f90u; c->r[5] = c->r[2] + 0u; func_0894b6a0(c, ram); }
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
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000150u);
    c->r[2] = c->r[2] << 4;
    c->r[2] = c->r[2] + c->r[30];
    c->r[2] = c->r[2] + 0x000003c4u;
    c->r[4] = c->r[3] + 0u;
    { c->r[31] = 0x08949fe8u; c->r[5] = mem_r32(ram, c->r[2] + 0x00000000u); func_0894b6e4(c, ram); }
    c->r[4] = 0x08a70000u;
    c->r[4] = c->r[4] + 0xffffb640u;
    { c->r[31] = 0x08949ff8u; c->r[5] = 0u + 0x00000004u; func_089e0008(c, ram); }
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
    { c->r[31] = 0x0894a044u; c->r[5] = c->r[5] | 0x0004u; func_0894b6a0(c, ram); }
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
    c->r[3] = 0x08aa0000u;
    c->r[3] = c->r[3] + 0x00003760u;
    c->r[2] = 0x00ff0000u;
    c->r[2] = c->r[2] | 0xffffu;
    c->r[3] = c->r[3] & c->r[2];
    c->r[2] = 0x01000000u;
    c->r[2] = c->r[3] | c->r[2];
    { c->r[31] = 0x0894a0a4u; c->r[5] = c->r[2] + 0u; func_0894b6a0(c, ram); }
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
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000150u);
    c->r[2] = c->r[2] << 4;
    c->r[2] = c->r[2] + c->r[30];
    c->r[2] = c->r[2] + 0x000003ccu;
    c->r[4] = c->r[3] + 0u;
    { c->r[31] = 0x0894a0fcu; c->r[5] = mem_r32(ram, c->r[2] + 0x00000000u); func_0894b6e4(c, ram); }
    c->r[4] = 0x08a70000u;
    c->r[4] = c->r[4] + 0xffffb640u;
    { c->r[31] = 0x0894a10cu; c->r[5] = 0u + 0x00000005u; func_089e0008(c, ram); }
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
    { c->r[31] = 0x0894a158u; c->r[5] = c->r[5] | 0x0004u; func_0894b6a0(c, ram); }
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
    c->r[3] = c->r[30] + 0x00000160u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000150u);
    c->r[2] = c->r[2] << 6;
    c->r[2] = c->r[3] + c->r[2];
    c->r[5] = 0u + 0x00000002u;
    { c->r[31] = 0x0894a1b0u; c->r[6] = c->r[2] + 0u; func_0894b7d4(c, ram); }
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
    c->r[2] = 0x08aa0000u;
    c->r[2] = c->r[2] + 0x000037a0u;
    c->r[2] = c->r[2] >> 24;
    c->r[2] = c->r[2] & 0x000fu;
    c->r[3] = c->r[2] << 16;
    c->r[2] = 0x10000000u;
    c->r[2] = c->r[3] | c->r[2];
    { c->r[31] = 0x0894a210u; c->r[5] = c->r[2] + 0u; func_0894b6a0(c, ram); }
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
    c->r[3] = 0x08aa0000u;
    c->r[3] = c->r[3] + 0x000037a0u;
    c->r[2] = 0x00ff0000u;
    c->r[2] = c->r[2] | 0xffffu;
    c->r[3] = c->r[3] & c->r[2];
    c->r[2] = 0x01000000u;
    c->r[2] = c->r[3] | c->r[2];
    { c->r[31] = 0x0894a270u; c->r[5] = c->r[2] + 0u; func_0894b6a0(c, ram); }
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
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000150u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[2] = c->r[2] << 3;
    c->r[2] = c->r[2] + c->r[30];
    c->r[2] = c->r[2] + 0x00000330u;
    { c->r[31] = 0x0894a2d0u; c->r[5] = mem_r32(ram, c->r[2] + 0x00000000u); func_0894b6e4(c, ram); }
    c->r[2] = 0x08aa0000u;
    c->r[2] = mem_r16(ram, c->r[2] + 0x00003618u);
    c->r[4] = 0x08a70000u;
    c->r[4] = c->r[4] + 0xffffb640u;
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x0894a2ecu; c->r[6] = 0u + 0u; func_089e0bd8(c, ram); }
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
    c->r[5] = 0x04040000u;
    { c->r[31] = 0x0894a338u; c->r[5] = c->r[5] | 0x000au; func_0894b6a0(c, ram); }
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
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000150u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[2] = c->r[2] << 3;
    c->r[2] = c->r[2] + c->r[30];
    c->r[2] = c->r[2] + 0x00000334u;
    { c->r[31] = 0x0894a398u; c->r[5] = mem_r32(ram, c->r[2] + 0x00000000u); func_0894b6e4(c, ram); }
    c->r[2] = 0x08aa0000u;
    c->r[2] = mem_r16(ram, c->r[2] + 0x0000361au);
    c->r[4] = 0x08a70000u;
    c->r[4] = c->r[4] + 0xffffb640u;
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x0894a3b4u; c->r[6] = 0u + 0u; func_089e0bd8(c, ram); }
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
    c->r[5] = 0x04040000u;
    { c->r[31] = 0x0894a400u; c->r[5] = c->r[5] | 0x000au; func_0894b6a0(c, ram); }
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
    c->r[2] = 0x08aa0000u;
    c->r[2] = c->r[2] + 0x000037a0u;
    c->r[2] = c->r[2] >> 24;
    c->r[2] = c->r[2] & 0x000fu;
    c->r[3] = c->r[2] << 16;
    c->r[2] = 0x10000000u;
    c->r[2] = c->r[3] | c->r[2];
    { c->r[31] = 0x0894a460u; c->r[5] = c->r[2] + 0u; func_0894b6a0(c, ram); }
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
    c->r[3] = 0x08aa0000u;
    c->r[3] = c->r[3] + 0x000037a0u;
    c->r[2] = 0x00ff0000u;
    c->r[2] = c->r[2] | 0xffffu;
    c->r[3] = c->r[3] & c->r[2];
    c->r[2] = 0x01000000u;
    c->r[2] = c->r[3] | c->r[2];
    { c->r[31] = 0x0894a4c0u; c->r[5] = c->r[2] + 0u; func_0894b6a0(c, ram); }
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
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000150u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[2] = c->r[2] << 3;
    c->r[2] = c->r[2] + c->r[30];
    c->r[2] = c->r[2] + 0x00000334u;
    { c->r[31] = 0x0894a520u; c->r[5] = mem_r32(ram, c->r[2] + 0x00000000u); func_0894b6e4(c, ram); }
    c->r[2] = 0x08aa0000u;
    c->r[2] = mem_r16(ram, c->r[2] + 0x0000361au);
    c->r[4] = 0x08a70000u;
    c->r[4] = c->r[4] + 0xffffb640u;
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x0894a53cu; c->r[6] = 0u + 0u; func_089e0bd8(c, ram); }
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
    c->r[5] = 0x04040000u;
    { c->r[31] = 0x0894a588u; c->r[5] = c->r[5] | 0x000au; func_0894b6a0(c, ram); }
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
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000150u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[2] = c->r[2] << 3;
    c->r[2] = c->r[2] + c->r[30];
    c->r[2] = c->r[2] + 0x00000330u;
    { c->r[31] = 0x0894a5e8u; c->r[5] = mem_r32(ram, c->r[2] + 0x00000000u); func_0894b6e4(c, ram); }
    c->r[2] = 0x08aa0000u;
    c->r[2] = mem_r16(ram, c->r[2] + 0x00003618u);
    c->r[4] = 0x08a70000u;
    c->r[4] = c->r[4] + 0xffffb640u;
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x0894a604u; c->r[6] = 0u + 0u; func_089e0bd8(c, ram); }
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
    c->r[5] = 0x04040000u;
    { c->r[31] = 0x0894a650u; c->r[5] = c->r[5] | 0x000au; func_0894b6a0(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000150u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000150u, c->r[2]); goto L_08949930; }
L_0894a660:
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
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000079dcu);
    c->r[1] = 0x08a40000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0x000079dcu);
    c->r[4] = c->r[2] + 0u;
    c->f[12] = c->f[0];
    { c->r[31] = 0x0894a6bcu; c->f[13] = c->f[1]; func_0894b71c(c, ram); }
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
    { c->r[31] = 0x0894a704u; c->r[5] = 0u + 0x00000005u; func_0894b75c(c, ram); }
    c->r[4] = 0x08a70000u;
    c->r[4] = c->r[4] + 0xffffb640u;
    { c->r[31] = 0x0894a714u; c->r[5] = 0u + 0x00000001u; func_089dfe30(c, ram); }
    c->r[4] = 0x08a70000u;
    { c->r[31] = 0x0894a720u; c->r[4] = c->r[4] + 0xffffb640u; func_089f147c(c, ram); }
L_0894a720:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000420u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x0000041cu);
    c->r[18] = mem_r32(ram, c->r[29] + 0x00000418u);
    c->r[17] = mem_r32(ram, c->r[29] + 0x00000414u);
    c->r[16] = mem_r32(ram, c->r[29] + 0x00000410u);
    { c->r[29] = c->r[29] + 0x00000430u; return; }
    return; /* fell out of func_08948534 */
}

/* func_0894c3a4  0x0894c3a4..0x0894c450  172 bytes, source=sweep */
void func_0894c3a4(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0894c3a4u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_0894c404; }
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
    { c->r[31] = 0x0894c3fcu; c->r[8] = mem_r32(ram, c->r[8] + 0x00000034u); func_0894c524(c, ram); }
    { goto L_0894c43c; }
L_0894c404:
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
    { c->r[31] = 0x0894c43cu; c->r[8] = c->r[2] + 0u; func_0894c524(c, ram); }
L_0894c43c:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_0894c3a4 */
}

/* func_08953868  0x08953868..0x08953938  208 bytes, source=sweep */
void func_08953868(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08953868u);
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
    return; /* fell out of func_08953868 */
}

/* func_0895597c  0x0895597c..0x089559c0  68 bytes, source=sweep */
void func_0895597c(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0895597cu);
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
    { c->r[31] = 0x089559acu; c->r[5] = c->r[2] + 0u; func_08954fd0(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_0895597c */
}

/* func_08958734  0x08958734..0x089587e0  172 bytes, source=sweep */
void func_08958734(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08958734u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_08958794; }
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
    { c->r[31] = 0x0895878cu; c->r[8] = mem_r32(ram, c->r[8] + 0x00000034u); func_089588b4(c, ram); }
    { goto L_089587cc; }
L_08958794:
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
    { c->r[31] = 0x089587ccu; c->r[8] = c->r[2] + 0u; func_089588b4(c, ram); }
L_089587cc:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_08958734 */
}

/* func_0895b4cc  0x0895b4cc..0x0895b514  72 bytes, source=sweep */
void func_0895b4cc(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0895b4ccu);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    c->r[3] = 0x08aa0000u;
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[3] + 0x00004962u);
    c->r[2] = 0u + 0x00000004u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_0895b4fc; }
    c->r[2] = 0x08aa0000u;
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x00004978u);
    { mem_w32(ram, c->r[30] + 0x00000000u, c->r[2]); goto L_0895b500; }
L_0895b4fc:
    mem_w32(ram, c->r[30] + 0x00000000u, 0u);
L_0895b500:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_0895b4cc */
}

/* func_0895ef8c  0x0895ef8c..0x0895f544  1464 bytes, source=fde */
void func_0895ef8c(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0895ef8cu);
    c->r[29] = c->r[29] + 0xffffffd0u;
    mem_w32(ram, c->r[29] + 0x00000024u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000020u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    mem_w8(ram, c->r[2] + 0x00000068u, 0u);
    mem_w32(ram, c->r[30] + 0x0000000cu, 0u);
    mem_w32(ram, c->r[30] + 0x00000008u, 0u);
    mem_w32(ram, c->r[30] + 0x00000004u, 0u);
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x0895efc0u; c->r[4] = c->r[4] + 0x00000af4u; func_0880d380(c, ram); }
    { c->r[31] = 0x0895efc8u; c->r[4] = c->r[2] + 0u; func_08968f28(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    mem_w8(ram, c->r[2] + 0x00000068u, 0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = (c->r[2] < 0x0000001au) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_0895f528; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08a50000u;
    c->r[2] = c->r[2] + 0xffff8224u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    { u32 _t = c->r[2]; switch (_t) { case 0x0895f004u: goto L_0895f004; case 0x0895f030u: goto L_0895f030; case 0x0895f0d4u: goto L_0895f0d4; case 0x0895f238u: goto L_0895f238; case 0x0895f2b0u: goto L_0895f2b0; case 0x0895f338u: goto L_0895f338; case 0x0895f348u: goto L_0895f348; case 0x0895f370u: goto L_0895f370; case 0x0895f410u: goto L_0895f410; case 0x0895f4b0u: goto L_0895f4b0; case 0x0895f4d8u: goto L_0895f4d8; case 0x0895f500u: goto L_0895f500; case 0x0895f528u: goto L_0895f528; default: recomp_trap_unknown_indirect(c, ram, 0x0895effcu, _t); return; } }
L_0895f004:
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x0895f010u; c->r[4] = c->r[4] + 0x00000af4u; func_08820d70(c, ram); }
    c->r[2] = c->r[2] & 0x0001u;
    c->r[2] = c->r[2] & 0x00ffu;
    { int _c = (c->r[2] == 0u); if (_c) goto L_0895f530; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = 0u + 0x00000001u;
    { mem_w8(ram, c->r[3] + 0x00000068u, c->r[2]); goto L_0895f530; }
L_0895f030:
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x0895f03cu; c->r[4] = c->r[4] + 0x00000af4u; func_08820d70(c, ram); }
    c->r[2] = c->r[2] & 0x0001u;
    c->r[2] = c->r[2] & 0x00ffu;
    { int _c = (c->r[2] == 0u); if (_c) goto L_0895f054; }
    c->r[2] = 0u + 0x00000001u;
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[2]);
L_0895f054:
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x0895f060u; c->r[4] = c->r[4] + 0x00000af4u; func_08820d70(c, ram); }
    c->r[2] = c->r[2] & 0x0002u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_0895f074; }
    c->r[2] = 0u + 0x00000001u;
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]);
L_0895f074:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_0895f09c; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_0895f09c; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = 0u + 0x00000003u;
    { mem_w8(ram, c->r[3] + 0x00000068u, c->r[2]); goto L_0895f530; }
L_0895f09c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_0895f0b8; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = 0u + 0x00000002u;
    { mem_w8(ram, c->r[3] + 0x00000068u, c->r[2]); goto L_0895f530; }
L_0895f0b8:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_0895f530; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = 0u + 0x00000001u;
    { mem_w8(ram, c->r[3] + 0x00000068u, c->r[2]); goto L_0895f530; }
L_0895f0d4:
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x0895f0e0u; c->r[4] = c->r[4] + 0x00000af4u; func_08820d70(c, ram); }
    c->r[2] = c->r[2] & 0x0004u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_0895f0f4; }
    c->r[2] = 0u + 0x00000001u;
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[2]);
L_0895f0f4:
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x0895f100u; c->r[4] = c->r[4] + 0x00000af4u; func_08820d70(c, ram); }
    c->r[2] = c->r[2] & 0x0001u;
    c->r[2] = c->r[2] & 0x00ffu;
    { int _c = (c->r[2] == 0u); if (_c) goto L_0895f118; }
    c->r[2] = 0u + 0x00000001u;
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]);
L_0895f118:
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x0895f124u; c->r[4] = c->r[4] + 0x00000af4u; func_08820d70(c, ram); }
    c->r[2] = c->r[2] & 0x0002u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_0895f138; }
    c->r[2] = 0u + 0x00000001u;
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
L_0895f138:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_0895f16c; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_0895f16c; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    { int _c = (c->r[2] == 0u); if (_c) goto L_0895f16c; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = 0u + 0x00000007u;
    { mem_w8(ram, c->r[3] + 0x00000068u, c->r[2]); goto L_0895f530; }
L_0895f16c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_0895f194; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    { int _c = (c->r[2] == 0u); if (_c) goto L_0895f194; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = 0u + 0x00000006u;
    { mem_w8(ram, c->r[3] + 0x00000068u, c->r[2]); goto L_0895f530; }
L_0895f194:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_0895f1bc; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    { int _c = (c->r[2] == 0u); if (_c) goto L_0895f1bc; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = 0u + 0x00000005u;
    { mem_w8(ram, c->r[3] + 0x00000068u, c->r[2]); goto L_0895f530; }
L_0895f1bc:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_0895f1e4; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_0895f1e4; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = 0u + 0x00000004u;
    { mem_w8(ram, c->r[3] + 0x00000068u, c->r[2]); goto L_0895f530; }
L_0895f1e4:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    { int _c = (c->r[2] == 0u); if (_c) goto L_0895f200; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = 0u + 0x00000003u;
    { mem_w8(ram, c->r[3] + 0x00000068u, c->r[2]); goto L_0895f530; }
L_0895f200:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_0895f21c; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = 0u + 0x00000002u;
    { mem_w8(ram, c->r[3] + 0x00000068u, c->r[2]); goto L_0895f530; }
L_0895f21c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_0895f530; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = 0u + 0x00000001u;
    { mem_w8(ram, c->r[3] + 0x00000068u, c->r[2]); goto L_0895f530; }
L_0895f238:
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x0895f244u; c->r[4] = c->r[4] + 0x00000af4u; func_08820d70(c, ram); }
    c->r[2] = c->r[2] & 0x0010u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_0895f258; }
    c->r[2] = 0u + 0x00000001u;
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[2]);
L_0895f258:
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x0895f264u; c->r[4] = c->r[4] + 0x00000af4u; func_08820d70(c, ram); }
    c->r[2] = c->r[2] & 0x0008u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_0895f278; }
    c->r[2] = 0u + 0x00000001u;
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]);
L_0895f278:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_0895f294; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = 0u + 0x00000002u;
    { mem_w8(ram, c->r[3] + 0x00000068u, c->r[2]); goto L_0895f530; }
L_0895f294:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_0895f530; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = 0u + 0x00000001u;
    { mem_w8(ram, c->r[3] + 0x00000068u, c->r[2]); goto L_0895f530; }
L_0895f2b0:
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000cccu;
    { c->r[31] = 0x0895f2c0u; c->r[5] = 0u + 0x00000016u; func_08968bf8(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000cccu;
    { c->r[31] = 0x0895f2d4u; c->r[5] = 0u + 0x00000017u; func_08968bf8(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_0895f338; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_0895f338; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = 0u + 0x00000002u;
    mem_w8(ram, c->r[3] + 0x00000068u, c->r[2]);
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x0895f308u; c->r[4] = c->r[4] + 0x00000af4u; func_08820d70(c, ram); }
    c->r[2] = c->r[2] & 0x0008u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_0895f320; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = 0u + 0x00000003u;
    mem_w8(ram, c->r[3] + 0x00000068u, c->r[2]);
L_0895f320:
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000af4u;
    { c->r[31] = 0x0895f330u; c->r[5] = 0u + 0x00000040u; func_08836a10(c, ram); }
    { goto L_0895f530; }
L_0895f338:
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000af4u;
    { c->r[31] = 0x0895f348u; c->r[5] = 0u + 0x00000040u; func_08836a10(c, ram); }
L_0895f348:
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x0895f354u; c->r[4] = c->r[4] + 0x00000af4u; func_08820d70(c, ram); }
    c->r[2] = c->r[2] & 0x0008u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_0895f530; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = 0u + 0x00000001u;
    { mem_w8(ram, c->r[3] + 0x00000068u, c->r[2]); goto L_0895f530; }
L_0895f370:
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x0895f37cu; c->r[4] = c->r[4] + 0x00000af4u; func_08820d70(c, ram); }
    c->r[2] = c->r[2] & 0x0020u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_0895f390; }
    c->r[2] = 0u + 0x00000001u;
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[2]);
L_0895f390:
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x0895f39cu; c->r[4] = c->r[4] + 0x00000af4u; func_08820d70(c, ram); }
    c->r[2] = c->r[2] & 0x0040u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_0895f3b0; }
    c->r[2] = 0u + 0x00000001u;
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]);
L_0895f3b0:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_0895f3d8; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_0895f3d8; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = 0u + 0x00000003u;
    { mem_w8(ram, c->r[3] + 0x00000068u, c->r[2]); goto L_0895f530; }
L_0895f3d8:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_0895f3f4; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = 0u + 0x00000002u;
    { mem_w8(ram, c->r[3] + 0x00000068u, c->r[2]); goto L_0895f530; }
L_0895f3f4:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_0895f530; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = 0u + 0x00000001u;
    { mem_w8(ram, c->r[3] + 0x00000068u, c->r[2]); goto L_0895f530; }
L_0895f410:
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x0895f41cu; c->r[4] = c->r[4] + 0x00000af4u; func_08820d70(c, ram); }
    c->r[2] = c->r[2] & 0x0080u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_0895f430; }
    c->r[2] = 0u + 0x00000001u;
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[2]);
L_0895f430:
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x0895f43cu; c->r[4] = c->r[4] + 0x00000af4u; func_08820d70(c, ram); }
    c->r[2] = c->r[2] & 0x0008u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_0895f450; }
    c->r[2] = 0u + 0x00000001u;
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]);
L_0895f450:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_0895f478; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_0895f478; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = 0u + 0x00000003u;
    { mem_w8(ram, c->r[3] + 0x00000068u, c->r[2]); goto L_0895f530; }
L_0895f478:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_0895f494; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = 0u + 0x00000002u;
    { mem_w8(ram, c->r[3] + 0x00000068u, c->r[2]); goto L_0895f530; }
L_0895f494:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_0895f530; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = 0u + 0x00000001u;
    { mem_w8(ram, c->r[3] + 0x00000068u, c->r[2]); goto L_0895f530; }
L_0895f4b0:
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x0895f4bcu; c->r[4] = c->r[4] + 0x00000af4u; func_08820d70(c, ram); }
    c->r[2] = c->r[2] & 0x0040u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_0895f530; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = 0u + 0x00000001u;
    { mem_w8(ram, c->r[3] + 0x00000068u, c->r[2]); goto L_0895f530; }
L_0895f4d8:
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x0895f4e4u; c->r[4] = c->r[4] + 0x00000af4u; func_08820d70(c, ram); }
    c->r[2] = c->r[2] & 0x0100u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_0895f530; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = 0u + 0x00000001u;
    { mem_w8(ram, c->r[3] + 0x00000068u, c->r[2]); goto L_0895f530; }
L_0895f500:
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x0895f50cu; c->r[4] = c->r[4] + 0x00000af4u; func_08820d70(c, ram); }
    c->r[2] = c->r[2] & 0x0200u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_0895f530; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = 0u + 0x00000001u;
    { mem_w8(ram, c->r[3] + 0x00000068u, c->r[2]); goto L_0895f530; }
L_0895f528:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    mem_w8(ram, c->r[2] + 0x00000068u, 0u);
L_0895f530:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000024u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000020u);
    { c->r[29] = c->r[29] + 0x00000030u; return; }
    return; /* fell out of func_0895ef8c */
}

/* func_08961554  0x08961554..0x08961630  220 bytes, source=fde */
void func_08961554(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08961554u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000000u);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[2]);
    { c->r[31] = 0x0896157cu; c->r[4] = mem_r32(ram, c->r[30] + 0x00000004u); func_088d3790(c, ram); }
    { int _c = (c->r[2] != 0u); if (_c) goto L_0896158c; }
    { goto L_0896161c; }
L_0896158c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = c->r[2] << 3;
    c->r[2] = 0x08aa0000u;
    c->r[2] = c->r[2] + 0x000049dcu;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x000000b0u);
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x00000002u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = ((s32)c->r[2] < (s32)c->r[3]) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_089615e8; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r8(ram, c->r[2] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000005u);
    c->r[4] = c->r[3] + 0u;
    { c->r[31] = 0x089615e0u; c->r[5] = c->r[2] + 0u; func_089616d4(c, ram); }
    { goto L_0896161c; }
L_089615e8:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x00000002u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = ((s32)c->r[2] < (s32)c->r[3]) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_0896161c; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r8(ram, c->r[2] + 0x00000006u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000007u);
    c->r[4] = c->r[3] + 0u;
    { c->r[31] = 0x0896161cu; c->r[5] = c->r[2] + 0u; func_089616d4(c, ram); }
L_0896161c:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_08961554 */
}

/* func_08964714  0x08964714..0x0896491c  520 bytes, source=sweep */
void func_08964714(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08964714u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[6]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = (c->r[2] < 0x0000000cu) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_08964908; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08a50000u;
    c->r[2] = c->r[2] + 0xffff8318u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    { u32 _t = c->r[2]; switch (_t) { case 0x08964760u: goto L_08964760; case 0x08964784u: goto L_08964784; case 0x089647a8u: goto L_089647a8; case 0x089647ccu: goto L_089647cc; case 0x089647f0u: goto L_089647f0; case 0x08964814u: goto L_08964814; case 0x08964838u: goto L_08964838; case 0x0896485cu: goto L_0896485c; case 0x08964880u: goto L_08964880; case 0x089648a4u: goto L_089648a4; case 0x089648c8u: goto L_089648c8; case 0x089648ecu: goto L_089648ec; default: recomp_trap_unknown_indirect(c, ram, 0x08964758u, _t); return; } }
L_08964760:
    c->r[4] = 0x08aa0000u;
    c->r[4] = c->r[4] + 0x00004960u;
    c->r[5] = 0x08aa0000u;
    c->r[5] = c->r[5] + 0x00005200u;
    c->r[6] = mem_r32(ram, c->r[30] + 0x00000004u);
    { c->r[31] = 0x0896477cu; c->r[7] = mem_r32(ram, c->r[30] + 0x00000008u); func_08961ffc(c, ram); }
    { goto L_08964908; }
L_08964784:
    c->r[4] = 0x08aa0000u;
    c->r[4] = c->r[4] + 0x00004960u;
    c->r[5] = 0x08aa0000u;
    c->r[5] = c->r[5] + 0x00005200u;
    c->r[6] = mem_r32(ram, c->r[30] + 0x00000004u);
    { c->r[31] = 0x089647a0u; c->r[7] = mem_r32(ram, c->r[30] + 0x00000008u); func_08962670(c, ram); }
    { goto L_08964908; }
L_089647a8:
    c->r[4] = 0x08aa0000u;
    c->r[4] = c->r[4] + 0x00004960u;
    c->r[5] = 0x08aa0000u;
    c->r[5] = c->r[5] + 0x00005200u;
    c->r[6] = mem_r32(ram, c->r[30] + 0x00000004u);
    { c->r[31] = 0x089647c4u; c->r[7] = mem_r32(ram, c->r[30] + 0x00000008u); func_089623e4(c, ram); }
    { goto L_08964908; }
L_089647cc:
    c->r[4] = 0x08aa0000u;
    c->r[4] = c->r[4] + 0x00004960u;
    c->r[5] = 0x08aa0000u;
    c->r[5] = c->r[5] + 0x00005200u;
    c->r[6] = mem_r32(ram, c->r[30] + 0x00000004u);
    { c->r[31] = 0x089647e8u; c->r[7] = mem_r32(ram, c->r[30] + 0x00000008u); func_089629b4(c, ram); }
    { goto L_08964908; }
L_089647f0:
    c->r[4] = 0x08aa0000u;
    c->r[4] = c->r[4] + 0x00004960u;
    c->r[5] = 0x08aa0000u;
    c->r[5] = c->r[5] + 0x00005200u;
    c->r[6] = mem_r32(ram, c->r[30] + 0x00000004u);
    { c->r[31] = 0x0896480cu; c->r[7] = mem_r32(ram, c->r[30] + 0x00000008u); func_08962e1c(c, ram); }
    { goto L_08964908; }
L_08964814:
    c->r[4] = 0x08aa0000u;
    c->r[4] = c->r[4] + 0x00004960u;
    c->r[5] = 0x08aa0000u;
    c->r[5] = c->r[5] + 0x00005200u;
    c->r[6] = mem_r32(ram, c->r[30] + 0x00000004u);
    { c->r[31] = 0x08964830u; c->r[7] = mem_r32(ram, c->r[30] + 0x00000008u); func_08963174(c, ram); }
    { goto L_08964908; }
L_08964838:
    c->r[4] = 0x08aa0000u;
    c->r[4] = c->r[4] + 0x00004960u;
    c->r[5] = 0x08aa0000u;
    c->r[5] = c->r[5] + 0x00005200u;
    c->r[6] = mem_r32(ram, c->r[30] + 0x00000004u);
    { c->r[31] = 0x08964854u; c->r[7] = mem_r32(ram, c->r[30] + 0x00000008u); func_0896344c(c, ram); }
    { goto L_08964908; }
L_0896485c:
    c->r[4] = 0x08aa0000u;
    c->r[4] = c->r[4] + 0x00004960u;
    c->r[5] = 0x08aa0000u;
    c->r[5] = c->r[5] + 0x00005200u;
    c->r[6] = mem_r32(ram, c->r[30] + 0x00000004u);
    { c->r[31] = 0x08964878u; c->r[7] = mem_r32(ram, c->r[30] + 0x00000008u); func_08963708(c, ram); }
    { goto L_08964908; }
L_08964880:
    c->r[4] = 0x08aa0000u;
    c->r[4] = c->r[4] + 0x00004960u;
    c->r[5] = 0x08aa0000u;
    c->r[5] = c->r[5] + 0x00005200u;
    c->r[6] = mem_r32(ram, c->r[30] + 0x00000004u);
    { c->r[31] = 0x0896489cu; c->r[7] = mem_r32(ram, c->r[30] + 0x00000008u); func_08963a50(c, ram); }
    { goto L_08964908; }
L_089648a4:
    c->r[4] = 0x08aa0000u;
    c->r[4] = c->r[4] + 0x00004960u;
    c->r[5] = 0x08aa0000u;
    c->r[5] = c->r[5] + 0x00005200u;
    c->r[6] = mem_r32(ram, c->r[30] + 0x00000004u);
    { c->r[31] = 0x089648c0u; c->r[7] = mem_r32(ram, c->r[30] + 0x00000008u); func_08963da0(c, ram); }
    { goto L_08964908; }
L_089648c8:
    c->r[4] = 0x08aa0000u;
    c->r[4] = c->r[4] + 0x00004960u;
    c->r[5] = 0x08aa0000u;
    c->r[5] = c->r[5] + 0x00005200u;
    c->r[6] = mem_r32(ram, c->r[30] + 0x00000004u);
    { c->r[31] = 0x089648e4u; c->r[7] = mem_r32(ram, c->r[30] + 0x00000008u); func_08964058(c, ram); }
    { goto L_08964908; }
L_089648ec:
    c->r[4] = 0x08aa0000u;
    c->r[4] = c->r[4] + 0x00004960u;
    c->r[5] = 0x08aa0000u;
    c->r[5] = c->r[5] + 0x00005200u;
    c->r[6] = mem_r32(ram, c->r[30] + 0x00000004u);
    { c->r[31] = 0x08964908u; c->r[7] = mem_r32(ram, c->r[30] + 0x00000008u); func_089643dc(c, ram); }
L_08964908:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_08964714 */
}

/* func_08967990  0x08967990..0x089679e4  84 bytes, source=sweep */
void func_08967990(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08967990u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    { c->r[31] = 0x089679a8u; func_08966c64(c, ram); }
    { int _c = (c->r[2] != 0u); if (_c) goto L_089679bc; }
    c->r[2] = 0u + 0xffffffffu;
    { mem_w32(ram, c->r[30] + 0x00000000u, c->r[2]); goto L_089679cc; }
L_089679bc:
    c->r[2] = 0x08aa0000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000522cu);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000001u);
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[2]);
L_089679cc:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_08967990 */
}

/* func_0896985c  0x0896985c..0x089698b4  88 bytes, source=sweep */
void func_0896985c(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0896985cu);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[2] = 0u + 0xffffffffu;
    mem_w16(ram, c->r[30] + 0x00000004u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = (c->r[2] < 0x0000001fu) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_089698a0; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = c->r[2] << 4;
    c->r[2] = 0x08a60000u;
    c->r[2] = c->r[2] + 0xffff986cu;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r16(ram, c->r[2] + 0x00000002u);
    mem_w16(ram, c->r[30] + 0x00000004u, c->r[2]);
L_089698a0:
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[30] + 0x00000004u);
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_0896985c */
}

/* func_0896a458  0x0896a458..0x0896a4a4  76 bytes, source=sweep */
void func_0896a458(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0896a458u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    { c->r[31] = 0x0896a470u; mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]); func_0896a284(c, ram); }
    c->r[4] = c->r[2] + 0u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 5;
    c->r[2] = c->r[2] + c->r[3];
    c->r[2] = c->r[2] << 4;
    c->r[2] = c->r[4] + c->r[2];
    c->r[2] = c->r[2] + 0x00000080u;
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_0896a458 */
}

/* func_0896d7ac  0x0896d7ac..0x0896d804  88 bytes, source=fde */
void func_0896d7ac(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0896d7acu);
    c->r[29] = c->r[29] + 0xfffffff0u;
    mem_w32(ram, c->r[29] + 0x00000004u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000000u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    { c->r[31] = 0x0896d7c4u; func_0899d924(c, ram); }
    { c->r[31] = 0x0896d7ccu; func_0896a284(c, ram); }
    { c->r[31] = 0x0896d7d4u; c->r[4] = c->r[2] + 0u; func_0896cb9c(c, ram); }
    { c->r[31] = 0x0896d7dcu; func_089756e0(c, ram); }
    { c->r[31] = 0x0896d7e4u; c->r[4] = c->r[2] + 0u; func_089d4720(c, ram); }
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x0896d7f0u; c->r[4] = c->r[4] + 0x000027dcu; func_089d3a80(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000004u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000000u);
    { c->r[29] = c->r[29] + 0x00000010u; return; }
    return; /* fell out of func_0896d7ac */
}

/* func_0896e5a8  0x0896e5a8..0x0896e62c  132 bytes, source=sweep */
void func_0896e5a8(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0896e5a8u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r8(ram, c->r[2] + 0x000009c4u);
    mem_w8(ram, c->r[30] + 0x00000004u, c->r[2]);
    c->r[2] = mem_r8(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[2] & 0x00aau;
    c->r[3] = (u32)((s32)c->r[2] >> 1);
    c->r[2] = mem_r8(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[2] & 0x0055u;
    c->r[2] = c->r[3] + c->r[2];
    mem_w8(ram, c->r[30] + 0x00000004u, c->r[2]);
    c->r[2] = mem_r8(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[2] & 0x00ccu;
    c->r[3] = (u32)((s32)c->r[2] >> 2);
    c->r[2] = mem_r8(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[2] & 0x0033u;
    c->r[2] = c->r[3] + c->r[2];
    mem_w8(ram, c->r[30] + 0x00000004u, c->r[2]);
    c->r[2] = mem_r8(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[2] & 0x00f0u;
    c->r[3] = (u32)((s32)c->r[2] >> 4);
    c->r[2] = mem_r8(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[2] & 0x000fu;
    c->r[2] = c->r[3] + c->r[2];
    mem_w8(ram, c->r[30] + 0x00000004u, c->r[2]);
    c->r[2] = mem_r8(ram, c->r[30] + 0x00000004u);
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_0896e5a8 */
}

/* func_0896f56c  0x0896f56c..0x0896f5d8  108 bytes, source=fde */
void func_0896f56c(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0896f56cu);
    c->r[29] = c->r[29] + 0xfffffff0u;
    mem_w32(ram, c->r[29] + 0x00000004u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000000u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    { c->r[31] = 0x0896f584u; func_0896a3e4(c, ram); }
    { c->r[31] = 0x0896f58cu; c->r[4] = c->r[2] + 0u; func_0899ce8c(c, ram); }
    c->r[4] = c->r[2] + 0u;
    c->r[2] = c->r[4] + 0u;
    c->r[3] = c->r[2] << 1;
    c->r[2] = 0x08aa0000u;
    c->r[2] = c->r[2] + 0x000068c4u;
    c->r[5] = c->r[3] + c->r[2];
    c->r[2] = c->r[4] + 0u;
    c->r[3] = c->r[2] << 1;
    c->r[2] = 0x08aa0000u;
    c->r[2] = c->r[2] + 0x000068c4u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r16(ram, c->r[2] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000001u;
    mem_w16(ram, c->r[5] + 0x00000000u, c->r[2]);
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000004u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000000u);
    { c->r[29] = c->r[29] + 0x00000010u; return; }
    return; /* fell out of func_0896f56c */
}

/* func_08971514  0x08971514..0x0897154c  56 bytes, source=sweep */
void func_08971514(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08971514u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08aa0000u;
    c->r[2] = c->r[2] + 0x0000696cu;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_08971514 */
}

/* func_08975370  0x08975370..0x08975438  200 bytes, source=fde */
void func_08975370(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08975370u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, 0u);
    { c->r[31] = 0x0897538cu; c->r[4] = 0u + 0u; func_0896a458(c, ram); }
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000204u);
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000007u);
    mem_w8(ram, c->r[30] + 0x00000004u, c->r[2]);
    c->r[2] = 0u + 0x00000001u;
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]);
L_089753a0:
    { c->r[31] = 0x089753a8u; func_0896a3c0(c, ram); }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[2] = ((s32)c->r[3] < (s32)c->r[2]) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_089753c4; }
    { goto L_08975420; }
L_089753c4:
    c->r[3] = mem_r8(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = (u32)((s32)c->r[3] >> (c->r[2] & 31u));
    c->r[2] = c->r[2] & 0x0001u;
    c->r[2] = c->r[2] & 0x00ffu;
    { int _c = (c->r[2] == 0u); if (_c) goto L_08975410; }
    { c->r[31] = 0x089753e8u; func_0896a3c0(c, ram); }
    c->r[4] = c->r[2] + 0u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 3;
    c->r[2] = c->r[2] + c->r[3];
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[4];
    c->r[3] = c->r[2] + 0x00000020u;
    c->r[2] = 0u + 0x00000001u;
    mem_w8(ram, c->r[3] + 0x00000004u, c->r[2]);
L_08975410:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]); goto L_089753a0; }
L_08975420:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_08975370 */
}

/* func_089784d4  0x089784d4..0x089786f4  544 bytes, source=fde */
void func_089784d4(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089784d4u);
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
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_08978518; }
    { goto L_089786dc; }
L_08978518:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r8(ram, c->r[2] + 0x0000000eu);
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
    c->r[2] = 0u + 0x00000012u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000014u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_08978624; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = ((s32)c->r[3] < (s32)0x00000013u) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_0897855c; }
    c->r[2] = 0u + 0x00000001u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000014u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_08978584; }
    { goto L_089786dc; }
L_0897855c:
    c->r[2] = 0u + 0x00000013u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000014u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_0897865c; }
    c->r[2] = 0u + 0x0000002bu;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000014u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_089786d4; }
    { goto L_089786dc; }
L_08978584:
    { c->r[31] = 0x0897858cu; c->r[4] = mem_r32(ram, c->r[30] + 0x0000000cu); func_0896e3a0(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    mem_w8(ram, c->r[2] + 0x00000010u, 0u);
    { c->r[31] = 0x0897859cu; c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u); func_0896c2e4(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_089785d0; }
    { c->r[31] = 0x089785b4u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u); func_0896ec90(c, ram); }
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0u + 0x00000008u;
    mem_w32(ram, c->r[3] + 0x00000004u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0u + 0x00000012u;
    { mem_w8(ram, c->r[3] + 0x0000000eu, c->r[2]); goto L_089786dc; }
L_089785d0:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    { int _c = ((s32)c->r[2] >= 0); if (_c) goto L_089785fc; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    mem_w32(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x089785f4u; c->r[5] = 0u + 0x00000033u; func_0896a7b8(c, ram); }
    { goto L_089786dc; }
L_089785fc:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x00000028u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    { c->r[31] = 0x08978610u; c->r[4] = c->r[2] + 0u; func_0896e7c0(c, ram); }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x0897861cu; c->r[5] = 0u + 0x00000005u; func_0896a7b8(c, ram); }
    { goto L_089786dc; }
L_08978624:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000004u);
    { int _c = ((s32)c->r[2] > 0); if (_c) goto L_08978644; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0u + 0x00000013u;
    { mem_w8(ram, c->r[3] + 0x0000000eu, c->r[2]); goto L_089786dc; }
L_08978644:
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000004u);
    c->r[2] = c->r[2] + 0xffffffffu;
    { mem_w32(ram, c->r[3] + 0x00000004u, c->r[2]); goto L_089786dc; }
L_0897865c:
    { c->r[31] = 0x08978664u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u); func_0896c2e4(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = 0u + 0x00000001u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_0897868c; }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x08978684u; c->r[5] = 0u + 0x00000005u; func_0896a7b8(c, ram); }
    { goto L_089786c4; }
L_0897868c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    { int _c = ((s32)c->r[2] >= 0); if (_c) goto L_089786c4; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    mem_w32(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x089786b0u; c->r[5] = 0u + 0x00000033u; func_0896a7b8(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x00000028u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    { c->r[31] = 0x089786c4u; c->r[4] = c->r[2] + 0u; func_0896e7c0(c, ram); }
L_089786c4:
    { c->r[31] = 0x089786ccu; c->r[4] = mem_r32(ram, c->r[30] + 0x0000000cu); func_0896e2f8(c, ram); }
    { goto L_089786dc; }
L_089786d4:
    { c->r[31] = 0x089786dcu; c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u); func_0896a824(c, ram); }
L_089786dc:
    c->r[2] = 0u + 0u;
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000024u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000020u);
    { c->r[29] = c->r[29] + 0x00000030u; return; }
    return; /* fell out of func_089784d4 */
}

/* func_0897ac74  0x0897ac74..0x0897b424  1968 bytes, source=fde */
void func_0897ac74(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0897ac74u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000018u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[30]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[16]);
    c->r[30] = c->r[29] + 0u;
    { c->r[31] = 0x0897ac90u; func_089794c4(c, ram); }
    c->r[16] = c->r[2] + 0u;
    c->r[4] = 0u + 0u;
    { c->r[31] = 0x0897aca0u; c->r[5] = 0u + 0x00000006u; func_0883a204(c, ram); }
    { c->r[31] = 0x0897aca8u; mem_w8(ram, c->r[16] + 0x0000000eu, c->r[2]); func_089794c4(c, ram); }
    c->r[16] = c->r[2] + 0u;
    c->r[4] = 0u + 0u;
    { c->r[31] = 0x0897acb8u; c->r[5] = 0u + 0x00000006u; func_0883a204(c, ram); }
    { c->r[31] = 0x0897acc0u; mem_w8(ram, c->r[16] + 0x00000003u, c->r[2]); func_089794c4(c, ram); }
    c->r[16] = c->r[2] + 0u;
    c->r[4] = 0u + 0u;
    { c->r[31] = 0x0897acd0u; c->r[5] = 0u + 0x00000003u; func_0883a204(c, ram); }
    { c->r[31] = 0x0897acd8u; mem_w8(ram, c->r[16] + 0x00000006u, c->r[2]); func_089794c4(c, ram); }
    c->r[16] = c->r[2] + 0u;
    c->r[4] = 0u + 0u;
    { c->r[31] = 0x0897ace8u; c->r[5] = 0u + 0x00000002u; func_0883a204(c, ram); }
    { c->r[31] = 0x0897acf0u; mem_w8(ram, c->r[16] + 0x00000009u, c->r[2]); func_089794c4(c, ram); }
    c->r[2] = mem_r8(ram, c->r[2] + 0x0000000eu);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = (c->r[3] < 0x00000006u) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_0897af14; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08a50000u;
    c->r[2] = c->r[2] + 0xffff8bb4u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    { u32 _t = c->r[2]; switch (_t) { case 0x0897ad28u: goto L_0897ad28; case 0x0897ad90u: goto L_0897ad90; case 0x0897ae00u: goto L_0897ae00; case 0x0897ae40u: goto L_0897ae40; case 0x0897aea8u: goto L_0897aea8; case 0x0897aee0u: goto L_0897aee0; case 0x0897af54u: goto L_0897af54; case 0x0897affcu: goto L_0897affc; case 0x0897b094u: goto L_0897b094; case 0x0897b19cu: goto L_0897b19c; case 0x0897b244u: goto L_0897b244; case 0x0897b2fcu: goto L_0897b2fc; default: recomp_trap_unknown_indirect(c, ram, 0x0897ad20u, _t); return; } }
L_0897ad28:
    { c->r[31] = 0x0897ad30u; func_089794c4(c, ram); }
    c->r[16] = c->r[2] + 0u;
    c->r[4] = 0u + 0u;
    { c->r[31] = 0x0897ad40u; c->r[5] = 0u + 0x00000002u; func_0883a204(c, ram); }
    { c->r[31] = 0x0897ad48u; mem_w8(ram, c->r[16] + 0x00000001u, c->r[2]); func_089794c4(c, ram); }
    c->r[16] = c->r[2] + 0u;
    c->r[4] = 0u + 0u;
    { c->r[31] = 0x0897ad58u; c->r[5] = 0u + 0x00000004u; func_0883a204(c, ram); }
    { c->r[31] = 0x0897ad60u; mem_w8(ram, c->r[16] + 0x00000007u, c->r[2]); func_089794c4(c, ram); }
    c->r[16] = c->r[2] + 0u;
    c->r[4] = 0u + 0u;
    { c->r[31] = 0x0897ad70u; c->r[5] = 0u + 0x00000004u; func_0883a204(c, ram); }
    { c->r[31] = 0x0897ad78u; mem_w8(ram, c->r[16] + 0x00000008u, c->r[2]); func_089794c4(c, ram); }
    c->r[16] = c->r[2] + 0u;
    c->r[4] = 0u + 0x00000001u;
    { c->r[31] = 0x0897ad88u; c->r[5] = 0u + 0x00000004u; func_0883a204(c, ram); }
    { mem_w8(ram, c->r[16] + 0x0000000au, c->r[2]); goto L_0897af14; }
L_0897ad90:
    { c->r[31] = 0x0897ad98u; func_089794c4(c, ram); }
    c->r[16] = c->r[2] + 0u;
    c->r[4] = 0u + 0u;
    { c->r[31] = 0x0897ada8u; c->r[5] = 0u + 0x00000002u; func_0883a204(c, ram); }
    { c->r[31] = 0x0897adb0u; mem_w8(ram, c->r[16] + 0x00000001u, c->r[2]); func_089794c4(c, ram); }
    c->r[16] = c->r[2] + 0u;
    c->r[4] = 0u + 0u;
    { c->r[31] = 0x0897adc0u; c->r[5] = 0u + 0x00000004u; func_0883a204(c, ram); }
    { c->r[31] = 0x0897adc8u; mem_w8(ram, c->r[16] + 0x00000007u, c->r[2]); func_089794c4(c, ram); }
    c->r[16] = c->r[2] + 0u;
    c->r[4] = 0u + 0u;
    { c->r[31] = 0x0897add8u; c->r[5] = 0u + 0x00000004u; func_0883a204(c, ram); }
    { c->r[31] = 0x0897ade0u; mem_w8(ram, c->r[16] + 0x00000008u, c->r[2]); func_089794c4(c, ram); }
    { c->r[31] = 0x0897ade8u; mem_w8(ram, c->r[2] + 0x00000008u, 0u); func_089794c4(c, ram); }
    c->r[16] = c->r[2] + 0u;
    c->r[4] = 0u + 0x00000001u;
    { c->r[31] = 0x0897adf8u; c->r[5] = 0u + 0x00000004u; func_0883a204(c, ram); }
    { mem_w8(ram, c->r[16] + 0x0000000au, c->r[2]); goto L_0897af14; }
L_0897ae00:
    { c->r[31] = 0x0897ae08u; func_089794c4(c, ram); }
    { c->r[31] = 0x0897ae10u; mem_w8(ram, c->r[2] + 0x00000001u, 0u); func_089794c4(c, ram); }
    c->r[16] = c->r[2] + 0u;
    c->r[4] = 0u + 0x00000001u;
    { c->r[31] = 0x0897ae20u; c->r[5] = 0u + 0x00000003u; func_0883a204(c, ram); }
    { c->r[31] = 0x0897ae28u; mem_w8(ram, c->r[16] + 0x00000007u, c->r[2]); func_089794c4(c, ram); }
    { c->r[31] = 0x0897ae30u; mem_w8(ram, c->r[2] + 0x00000008u, 0u); func_089794c4(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = 0u + 0x00000008u;
    { mem_w8(ram, c->r[3] + 0x0000000au, c->r[2]); goto L_0897af14; }
L_0897ae40:
    { c->r[31] = 0x0897ae48u; func_089794c4(c, ram); }
    c->r[16] = c->r[2] + 0u;
    c->r[4] = 0u + 0u;
    { c->r[31] = 0x0897ae58u; c->r[5] = 0u + 0x00000002u; func_0883a204(c, ram); }
    { c->r[31] = 0x0897ae60u; mem_w8(ram, c->r[16] + 0x00000001u, c->r[2]); func_089794c4(c, ram); }
    c->r[16] = c->r[2] + 0u;
    c->r[4] = 0u + 0u;
    { c->r[31] = 0x0897ae70u; c->r[5] = 0u + 0x00000004u; func_0883a204(c, ram); }
    { c->r[31] = 0x0897ae78u; mem_w8(ram, c->r[16] + 0x00000007u, c->r[2]); func_089794c4(c, ram); }
    c->r[16] = c->r[2] + 0u;
    c->r[4] = 0u + 0u;
    { c->r[31] = 0x0897ae88u; c->r[5] = 0u + 0x00000004u; func_0883a204(c, ram); }
    { c->r[31] = 0x0897ae90u; mem_w8(ram, c->r[16] + 0x00000008u, c->r[2]); func_089794c4(c, ram); }
    c->r[16] = c->r[2] + 0u;
    c->r[4] = 0u + 0x00000004u;
    { c->r[31] = 0x0897aea0u; c->r[5] = 0u + 0x00000005u; func_0883a204(c, ram); }
    { mem_w8(ram, c->r[16] + 0x0000000au, c->r[2]); goto L_0897af14; }
L_0897aea8:
    { c->r[31] = 0x0897aeb0u; func_089794c4(c, ram); }
    { c->r[31] = 0x0897aeb8u; mem_w8(ram, c->r[2] + 0x00000001u, 0u); func_089794c4(c, ram); }
    c->r[16] = c->r[2] + 0u;
    c->r[4] = 0u + 0u;
    { c->r[31] = 0x0897aec8u; c->r[5] = 0u + 0x00000004u; func_0883a204(c, ram); }
    { c->r[31] = 0x0897aed0u; mem_w8(ram, c->r[16] + 0x00000007u, c->r[2]); func_089794c4(c, ram); }
    { c->r[31] = 0x0897aed8u; mem_w8(ram, c->r[2] + 0x00000008u, 0u); func_089794c4(c, ram); }
    { mem_w8(ram, c->r[2] + 0x0000000au, 0u); goto L_0897af14; }
L_0897aee0:
    { c->r[31] = 0x0897aee8u; func_089794c4(c, ram); }
    { c->r[31] = 0x0897aef0u; mem_w8(ram, c->r[2] + 0x00000001u, 0u); func_089794c4(c, ram); }
    { c->r[31] = 0x0897aef8u; mem_w8(ram, c->r[2] + 0x00000007u, 0u); func_089794c4(c, ram); }
    { c->r[31] = 0x0897af00u; mem_w8(ram, c->r[2] + 0x00000008u, 0u); func_089794c4(c, ram); }
    c->r[16] = c->r[2] + 0u;
    c->r[4] = 0u + 0x00000006u;
    { c->r[31] = 0x0897af10u; c->r[5] = 0u + 0x00000008u; func_0883a204(c, ram); }
    mem_w8(ram, c->r[16] + 0x0000000au, c->r[2]);
L_0897af14:
    { c->r[31] = 0x0897af1cu; func_089794c4(c, ram); }
    c->r[2] = mem_r8(ram, c->r[2] + 0x0000000eu);
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = (c->r[3] < 0x00000006u) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_0897b3b0; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08a50000u;
    c->r[2] = c->r[2] + 0xffff8bccu;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    { u32 _t = c->r[2]; switch (_t) { case 0x0897ad28u: goto L_0897ad28; case 0x0897ad90u: goto L_0897ad90; case 0x0897ae00u: goto L_0897ae00; case 0x0897ae40u: goto L_0897ae40; case 0x0897aea8u: goto L_0897aea8; case 0x0897aee0u: goto L_0897aee0; case 0x0897af54u: goto L_0897af54; case 0x0897affcu: goto L_0897affc; case 0x0897b094u: goto L_0897b094; case 0x0897b19cu: goto L_0897b19c; case 0x0897b244u: goto L_0897b244; case 0x0897b2fcu: goto L_0897b2fc; default: recomp_trap_unknown_indirect(c, ram, 0x0897af4cu, _t); return; } }
L_0897af54:
    { c->r[31] = 0x0897af5cu; func_089794c4(c, ram); }
    { c->r[31] = 0x0897af64u; mem_w8(ram, c->r[2] + 0x0000000bu, 0u); func_089794c4(c, ram); }
    { c->r[31] = 0x0897af6cu; mem_w8(ram, c->r[2] + 0x0000000cu, 0u); func_089794c4(c, ram); }
    { c->r[31] = 0x0897af74u; mem_w8(ram, c->r[2] + 0x0000000du, 0u); func_089794c4(c, ram); }
    c->r[16] = c->r[2] + 0u;
    c->r[4] = 0u + 0u;
    { c->r[31] = 0x0897af84u; c->r[5] = 0u + 0x00000004u; func_0883a204(c, ram); }
    { c->r[31] = 0x0897af8cu; mem_w8(ram, c->r[16] + 0x00000005u, c->r[2]); func_0896a3c0(c, ram); }
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[2] = c->r[2] + 0xfffffffeu;
    { c->r[31] = 0x0897af9cu; mem_w32(ram, c->r[30] + 0x00000000u, c->r[2]); func_089794c4(c, ram); }
    c->r[3] = mem_r8(ram, c->r[2] + 0x00000005u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = c->r[2] + 0xffffffffu;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    { int _c = ((s32)c->r[2] >= 0); if (_c) goto L_0897afc4; }
    { mem_w32(ram, c->r[30] + 0x00000000u, 0u); goto L_0897afdc; }
L_0897afc4:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000004u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_0897afdc; }
    c->r[2] = 0u + 0x00000003u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[2]);
L_0897afdc:
    { c->r[31] = 0x0897afe4u; func_089794c4(c, ram); }
    c->r[16] = c->r[2] + 0u;
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x0897aff4u; c->r[5] = 0u + 0x00000006u; func_0883a204(c, ram); }
    { mem_w8(ram, c->r[16] + 0x00000002u, c->r[2]); goto L_0897b3b0; }
L_0897affc:
    { c->r[31] = 0x0897b004u; func_089794c4(c, ram); }
    { c->r[31] = 0x0897b00cu; mem_w8(ram, c->r[2] + 0x0000000bu, 0u); func_089794c4(c, ram); }
    c->r[16] = c->r[2] + 0u;
    c->r[4] = 0u + 0u;
    { c->r[31] = 0x0897b01cu; c->r[5] = 0u + 0x00000006u; func_0883a204(c, ram); }
    { c->r[31] = 0x0897b024u; mem_w8(ram, c->r[16] + 0x0000000cu, c->r[2]); func_089794c4(c, ram); }
    { c->r[31] = 0x0897b02cu; mem_w8(ram, c->r[2] + 0x0000000du, 0u); func_089794c4(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = 0u + 0x00000004u;
    { c->r[31] = 0x0897b03cu; mem_w8(ram, c->r[3] + 0x00000005u, c->r[2]); func_0896a3c0(c, ram); }
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[2] = c->r[2] + 0xfffffffeu;
    { c->r[31] = 0x0897b04cu; mem_w32(ram, c->r[30] + 0x00000000u, c->r[2]); func_089794c4(c, ram); }
    c->r[3] = mem_r8(ram, c->r[2] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + c->r[3];
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000006u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_0897b074; }
    c->r[2] = 0u + 0x00000005u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[2]);
L_0897b074:
    { c->r[31] = 0x0897b07cu; func_089794c4(c, ram); }
    c->r[16] = c->r[2] + 0u;
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x0897b08cu; c->r[5] = 0u + 0x00000006u; func_0883a204(c, ram); }
    { mem_w8(ram, c->r[16] + 0x00000002u, c->r[2]); goto L_0897b3b0; }
L_0897b094:
    { c->r[31] = 0x0897b09cu; func_089794c4(c, ram); }
    { c->r[31] = 0x0897b0a4u; mem_w8(ram, c->r[2] + 0x0000000bu, 0u); func_089794c4(c, ram); }
    { c->r[31] = 0x0897b0acu; mem_w8(ram, c->r[2] + 0x0000000cu, 0u); func_089794c4(c, ram); }
    c->r[16] = c->r[2] + 0u;
    c->r[4] = 0u + 0u;
    { c->r[31] = 0x0897b0bcu; c->r[5] = 0u + 0x00000003u; func_0883a204(c, ram); }
    { c->r[31] = 0x0897b0c4u; mem_w8(ram, c->r[16] + 0x0000000du, c->r[2]); func_089794c4(c, ram); }
    c->r[16] = c->r[2] + 0u;
    c->r[4] = 0u + 0u;
    { c->r[31] = 0x0897b0d4u; c->r[5] = 0u + 0x00000005u; func_0883a204(c, ram); }
    { c->r[31] = 0x0897b0dcu; mem_w8(ram, c->r[16] + 0x00000005u, c->r[2]); func_0896a3c0(c, ram); }
    c->r[3] = 0u + 0x00000004u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[2] = c->r[3] - c->r[2];
    { c->r[31] = 0x0897b0f0u; mem_w32(ram, c->r[30] + 0x00000000u, c->r[2]); func_089794c4(c, ram); }
    c->r[3] = mem_r8(ram, c->r[2] + 0x0000000du);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = c->r[2] + 0xffffffffu;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    { int _c = ((s32)c->r[2] >= 0); if (_c) goto L_0897b118; }
    { mem_w32(ram, c->r[30] + 0x00000000u, 0u); goto L_0897b130; }
L_0897b118:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000003u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_0897b130; }
    c->r[2] = 0u + 0x00000002u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[2]);
L_0897b130:
    { c->r[31] = 0x0897b138u; func_089794c4(c, ram); }
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000007u);
    c->r[2] = c->r[2] + 0xffffffffu;
    { int _c = ((s32)c->r[2] < 0); if (_c) goto L_0897b170; }
    { c->r[31] = 0x0897b150u; func_089794c4(c, ram); }
    c->r[3] = mem_r8(ram, c->r[2] + 0x00000007u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = c->r[3] + c->r[2];
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[3]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[2] + 0xffffffffu;
    { mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]); goto L_0897b178; }
L_0897b170:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[3]);
L_0897b178:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    { c->r[31] = 0x0897b184u; mem_w32(ram, c->r[30] + 0x00000000u, c->r[2]); func_089794c4(c, ram); }
    c->r[16] = c->r[2] + 0u;
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x0897b194u; c->r[5] = 0u + 0x00000006u; func_0883a204(c, ram); }
    { mem_w8(ram, c->r[16] + 0x00000002u, c->r[2]); goto L_0897b3b0; }
L_0897b19c:
    { c->r[31] = 0x0897b1a4u; func_089794c4(c, ram); }
    { c->r[31] = 0x0897b1acu; mem_w8(ram, c->r[2] + 0x0000000bu, 0u); func_089794c4(c, ram); }
    { c->r[31] = 0x0897b1b4u; mem_w8(ram, c->r[2] + 0x0000000cu, 0u); func_089794c4(c, ram); }
    { c->r[31] = 0x0897b1bcu; mem_w8(ram, c->r[2] + 0x0000000du, 0u); func_089794c4(c, ram); }
    c->r[16] = c->r[2] + 0u;
    c->r[4] = 0u + 0u;
    { c->r[31] = 0x0897b1ccu; c->r[5] = 0u + 0x00000004u; func_0883a204(c, ram); }
    { c->r[31] = 0x0897b1d4u; mem_w8(ram, c->r[16] + 0x00000005u, c->r[2]); func_0896a3c0(c, ram); }
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[2] = c->r[2] + 0xfffffffeu;
    { c->r[31] = 0x0897b1e4u; mem_w32(ram, c->r[30] + 0x00000000u, c->r[2]); func_089794c4(c, ram); }
    c->r[3] = mem_r8(ram, c->r[2] + 0x00000005u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = c->r[2] + 0xffffffffu;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    { int _c = ((s32)c->r[2] >= 0); if (_c) goto L_0897b20c; }
    { mem_w32(ram, c->r[30] + 0x00000000u, 0u); goto L_0897b224; }
L_0897b20c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000004u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_0897b224; }
    c->r[2] = 0u + 0x00000003u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[2]);
L_0897b224:
    { c->r[31] = 0x0897b22cu; func_089794c4(c, ram); }
    c->r[16] = c->r[2] + 0u;
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x0897b23cu; c->r[5] = 0u + 0x00000005u; func_0883a204(c, ram); }
    { mem_w8(ram, c->r[16] + 0x00000002u, c->r[2]); goto L_0897b3b0; }
L_0897b244:
    { c->r[31] = 0x0897b24cu; func_089794c4(c, ram); }
    c->r[16] = c->r[2] + 0u;
    c->r[4] = 0u + 0u;
    { c->r[31] = 0x0897b25cu; c->r[5] = 0u + 0x00000005u; func_0883a204(c, ram); }
    { c->r[31] = 0x0897b264u; mem_w8(ram, c->r[16] + 0x0000000bu, c->r[2]); func_089794c4(c, ram); }
    { c->r[31] = 0x0897b26cu; mem_w8(ram, c->r[2] + 0x0000000cu, 0u); func_089794c4(c, ram); }
    { c->r[31] = 0x0897b274u; mem_w8(ram, c->r[2] + 0x0000000du, 0u); func_089794c4(c, ram); }
    c->r[16] = c->r[2] + 0u;
    c->r[4] = 0u + 0u;
    { c->r[31] = 0x0897b284u; c->r[5] = 0u + 0x00000005u; func_0883a204(c, ram); }
    { c->r[31] = 0x0897b28cu; mem_w8(ram, c->r[16] + 0x00000005u, c->r[2]); func_0896a3c0(c, ram); }
    c->r[3] = 0u + 0x00000004u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[2] = c->r[3] - c->r[2];
    { c->r[31] = 0x0897b2a0u; mem_w32(ram, c->r[30] + 0x00000000u, c->r[2]); func_089794c4(c, ram); }
    c->r[3] = mem_r8(ram, c->r[2] + 0x0000000bu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + c->r[3];
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    { int _c = ((s32)c->r[2] >= 0); if (_c) goto L_0897b2c4; }
    { mem_w32(ram, c->r[30] + 0x00000000u, 0u); goto L_0897b2dc; }
L_0897b2c4:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000004u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_0897b2dc; }
    c->r[2] = 0u + 0x00000003u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[2]);
L_0897b2dc:
    { c->r[31] = 0x0897b2e4u; func_089794c4(c, ram); }
    c->r[16] = c->r[2] + 0u;
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x0897b2f4u; c->r[5] = 0u + 0x00000006u; func_0883a204(c, ram); }
    { mem_w8(ram, c->r[16] + 0x00000002u, c->r[2]); goto L_0897b3b0; }
L_0897b2fc:
    { c->r[31] = 0x0897b304u; func_089794c4(c, ram); }
    c->r[16] = c->r[2] + 0u;
    c->r[4] = 0u + 0u;
    { c->r[31] = 0x0897b314u; c->r[5] = 0u + 0x00000005u; func_0883a204(c, ram); }
    { c->r[31] = 0x0897b31cu; mem_w8(ram, c->r[16] + 0x0000000bu, c->r[2]); func_089794c4(c, ram); }
    { c->r[31] = 0x0897b324u; mem_w8(ram, c->r[2] + 0x0000000cu, 0u); func_089794c4(c, ram); }
    { c->r[31] = 0x0897b32cu; mem_w8(ram, c->r[2] + 0x0000000du, 0u); func_089794c4(c, ram); }
    c->r[16] = c->r[2] + 0u;
    c->r[4] = 0u + 0u;
    { c->r[31] = 0x0897b33cu; c->r[5] = 0u + 0x00000005u; func_0883a204(c, ram); }
    { c->r[31] = 0x0897b344u; mem_w8(ram, c->r[16] + 0x00000005u, c->r[2]); func_0896a3c0(c, ram); }
    c->r[3] = 0u + 0x00000004u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[2] = c->r[3] - c->r[2];
    { c->r[31] = 0x0897b358u; mem_w32(ram, c->r[30] + 0x00000000u, c->r[2]); func_089794c4(c, ram); }
    c->r[3] = mem_r8(ram, c->r[2] + 0x0000000bu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + c->r[3];
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    { int _c = ((s32)c->r[2] >= 0); if (_c) goto L_0897b37c; }
    { mem_w32(ram, c->r[30] + 0x00000000u, 0u); goto L_0897b394; }
L_0897b37c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000004u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_0897b394; }
    c->r[2] = 0u + 0x00000003u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[2]);
L_0897b394:
    { c->r[31] = 0x0897b39cu; func_089794c4(c, ram); }
    c->r[16] = c->r[2] + 0u;
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x0897b3acu; c->r[5] = 0u + 0x00000005u; func_0883a204(c, ram); }
    mem_w8(ram, c->r[16] + 0x00000002u, c->r[2]);
L_0897b3b0:
    c->r[2] = 0u + 0x00000003u;
    { c->r[31] = 0x0897b3bcu; mem_w32(ram, c->r[30] + 0x00000000u, c->r[2]); func_089794c4(c, ram); }
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000005u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_0897b3e8; }
    { c->r[31] = 0x0897b3d0u; func_089794c4(c, ram); }
    c->r[3] = mem_r8(ram, c->r[2] + 0x00000005u);
    c->r[2] = 0u + 0x00000004u;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_0897b3e8; }
    { goto L_0897b3f0; }
L_0897b3e8:
    c->r[2] = 0u + 0x00000002u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[2]);
L_0897b3f0:
    { c->r[31] = 0x0897b3f8u; func_089794c4(c, ram); }
    c->r[16] = c->r[2] + 0u;
    c->r[4] = 0u + 0u;
    { c->r[31] = 0x0897b408u; c->r[5] = mem_r32(ram, c->r[30] + 0x00000000u); func_0883a204(c, ram); }
    mem_w8(ram, c->r[16] + 0x00000004u, c->r[2]);
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000018u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[16] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_0897ac74 */
}

/* func_08985e34  0x08985e34..0x08985e58  36 bytes, source=sweep */
void func_08985e34(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08985e34u);
    c->r[29] = c->r[29] + 0xfffffff0u;
    mem_w32(ram, c->r[29] + 0x00000000u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    c->r[2] = 0x08ab0000u;
    c->r[2] = c->r[2] + 0xffff9240u;
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000000u);
    { c->r[29] = c->r[29] + 0x00000010u; return; }
    return; /* fell out of func_08985e34 */
}

/* func_08991864  0x08991864..0x08991bb0  844 bytes, source=fde */
void func_08991864(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08991864u);
    c->r[29] = c->r[29] + 0xffffffc0u;
    mem_w32(ram, c->r[29] + 0x00000038u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000034u, c->r[30]);
    mem_w32(ram, c->r[29] + 0x00000030u, c->r[16]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x000000e0u;
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[2]);
    mem_w32(ram, c->r[30] + 0x00000008u, 0u);
    { c->r[31] = 0x08991894u; c->r[16] = mem_r32(ram, c->r[30] + 0x00000004u); func_0896f1ac(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = mem_r32(ram, c->r[16] + 0x00000038u);
    c->r[2] = (c->r[2] < c->r[3]) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_089918e8; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000038u);
    c->r[2] = c->r[2] + 0x0000000du;
    mem_w32(ram, c->r[3] + 0x00000038u, c->r[2]);
    { c->r[31] = 0x089918c4u; c->r[16] = mem_r32(ram, c->r[30] + 0x00000004u); func_0896f1ac(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = mem_r32(ram, c->r[16] + 0x00000038u);
    c->r[2] = (c->r[3] < c->r[2]) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_089918fc; }
    { c->r[31] = 0x089918e0u; c->r[16] = mem_r32(ram, c->r[30] + 0x00000004u); func_0896f1ac(c, ram); }
    { mem_w32(ram, c->r[16] + 0x00000038u, c->r[2]); goto L_089918fc; }
L_089918e8:
    { c->r[31] = 0x089918f0u; c->r[16] = mem_r32(ram, c->r[30] + 0x00000004u); func_0896f1ac(c, ram); }
    mem_w32(ram, c->r[16] + 0x00000038u, c->r[2]);
    c->r[2] = 0u + 0x00000001u;
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]);
L_089918fc:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = 0x08a80000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00002660u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000038u);
    c->r[2] = c->r[3] + c->r[2];
    { c->r[31] = 0x0899191cu; mem_w32(ram, c->r[4] + 0x0000003cu, c->r[2]); func_0896f1ac(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000038u);
    c->r[2] = c->r[3] - c->r[2];
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = 0x08a80000u;
    c->r[3] = mem_r8(ram, c->r[3] + 0x00002664u);
    c->r[4] = mem_r32(ram, c->r[2] + 0x0000003cu);
    { c->r[31] = 0x08991948u; c->r[5] = c->r[3] + 0u; func_0896edd0(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000048u);
    c->r[4] = mem_r32(ram, c->r[3] + 0x0000003cu);
    { c->r[31] = 0x08991964u; c->r[5] = c->r[2] + 0u; func_0896edd0(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000048u);
    mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_08991990; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000048u);
    c->r[2] = c->r[2] + 0x00000001u;
    mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]);
L_08991990:
    c->r[2] = mem_r8(ram, c->r[30] + 0x00000018u);
    { c->r[31] = 0x0899199cu; c->r[4] = c->r[2] + 0u; func_0896ed64(c, ram); }
    mem_w32(ram, c->r[30] + 0x0000001cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[2] + 0x00000024u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000ac8u;
    { c->r[31] = 0x089919bcu; c->r[5] = c->r[2] + 0u; func_089cb820(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000020u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_08991b94; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_08991a34; }
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
    { int _c = (c->r[2] != 0u); if (_c) goto L_08991a24; }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[5] = 0u + 0x000003d8u;
    { c->r[31] = 0x08991a1cu; c->r[6] = 0u + 0u; func_08933428(c, ram); }
    { goto L_08991a34; }
L_08991a24:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[5] = 0u + 0x00000007u;
    { c->r[31] = 0x08991a34u; c->r[6] = 0u + 0u; func_08933428(c, ram); }
L_08991a34:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_08991aa8; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000049u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000030u) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_08991a6c; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000049u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w8(ram, c->r[3] + 0x00000049u, c->r[2]); goto L_08991aa8; }
L_08991a6c:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000048u);
    c->r[2] = c->r[2] + 0x00000001u;
    mem_w8(ram, c->r[3] + 0x00000048u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000048u);
    c->r[2] = (c->r[2] < 0x00000015u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_08991aa0; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = 0u + 0x00000014u;
    mem_w8(ram, c->r[3] + 0x00000048u, c->r[2]);
L_08991aa0:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    mem_w8(ram, c->r[2] + 0x00000049u, 0u);
L_08991aa8:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = c->r[2] + 0x00000478u;
    mem_w32(ram, c->r[30] + 0x00000024u, c->r[2]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000024u);
    { c->r[31] = 0x08991ac4u; c->r[6] = 0u + 0x00000001u; func_0893009c(c, ram); }
    c->r[4] = 0x08ab0000u;
    c->r[4] = c->r[4] + 0xffff98b0u;
    c->r[5] = 0x08a50000u;
    c->r[5] = c->r[5] + 0xffff9d90u;
    { c->r[31] = 0x08991adcu; c->r[6] = mem_r32(ram, c->r[30] + 0x0000000cu); func_08a1ad34(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x0000003cu);
    c->r[2] = 0x00020000u;
    c->r[2] = c->r[2] | 0x70ffu;
    c->r[2] = (c->r[2] < c->r[3]) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_08991b0c; }
    c->r[4] = 0x08ab0000u;
    c->r[4] = c->r[4] + 0xffff98b0u;
    c->r[5] = 0x08a50000u;
    { c->r[31] = 0x08991b0cu; c->r[5] = c->r[5] + 0xffff9d94u; func_08a1ad34(c, ram); }
L_08991b0c:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[5] = 0x08ab0000u;
    c->r[5] = c->r[5] + 0xffff98b0u;
    { c->r[31] = 0x08991b20u; c->r[6] = 0u + 0x00000002u; func_08933428(c, ram); }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[5] = 0u + 0x00000030u;
    { c->r[31] = 0x08991b30u; c->r[6] = 0u + 0x00000002u; func_08933498(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    { int _c = ((s32)c->r[2] <= 0); if (_c) goto L_08991b64; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[4] = 0x08ab0000u;
    c->r[4] = c->r[4] + 0xffff98c0u;
    c->r[5] = 0x08a50000u;
    c->r[5] = c->r[5] + 0xffff9d9cu;
    c->r[6] = mem_r32(ram, c->r[2] + 0x0000003cu);
    { c->r[31] = 0x08991b5cu; c->r[7] = mem_r32(ram, c->r[30] + 0x0000001cu); func_08a1ad34(c, ram); }
    { goto L_08991b80; }
L_08991b64:
    c->r[4] = 0x08ab0000u;
    c->r[4] = c->r[4] + 0xffff98c0u;
    c->r[5] = 0x08a50000u;
    c->r[5] = c->r[5] + 0xffff9db4u;
    c->r[6] = 0x00020000u;
    { c->r[31] = 0x08991b80u; c->r[6] = c->r[6] | 0x7100u; func_08a1ad34(c, ram); }
L_08991b80:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[5] = 0x08ab0000u;
    c->r[5] = c->r[5] + 0xffff98c0u;
    { c->r[31] = 0x08991b94u; c->r[6] = 0u + 0x00000003u; func_0893009c(c, ram); }
L_08991b94:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000038u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000034u);
    c->r[16] = mem_r32(ram, c->r[29] + 0x00000030u);
    { c->r[29] = c->r[29] + 0x00000040u; return; }
    return; /* fell out of func_08991864 */
}

/* func_08998918  0x08998918..0x089989a4  140 bytes, source=sweep */
void func_08998918(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08998918u);
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
    c->r[2] = 0u + 0xfffffffeu;
    c->r[2] = c->r[3] & c->r[2];
    mem_w8(ram, c->r[4] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_08998994; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = 0x08ab0000u;
    c->r[2] = c->r[2] + 0x00002b78u;
    c->r[4] = c->r[3] + c->r[2];
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = 0x08ab0000u;
    c->r[2] = c->r[2] + 0x00002b78u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000000u);
    c->r[2] = c->r[2] | 0x0001u;
    mem_w8(ram, c->r[4] + 0x00000000u, c->r[2]);
L_08998994:
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_08998918 */
}

/* func_0899918c  0x0899918c..0x089991b0  36 bytes, source=sweep */
void func_0899918c(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0899918cu);
    c->r[29] = c->r[29] + 0xfffffff0u;
    mem_w32(ram, c->r[29] + 0x00000000u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    c->r[2] = 0x08ab0000u;
    c->r[2] = mem_r8(ram, c->r[2] + 0x00002aa9u);
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000000u);
    { c->r[29] = c->r[29] + 0x00000010u; return; }
    return; /* fell out of func_0899918c */
}

/* func_0899d924  0x0899d924..0x0899d978  84 bytes, source=fde */
void func_0899d924(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0899d924u);
    c->r[29] = c->r[29] + 0xfffffff0u;
    mem_w32(ram, c->r[29] + 0x00000004u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000000u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    c->r[3] = 0x08ab0000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0xffff9a5cu);
    c->r[2] = 0u + 0x00000001u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_0899d960; }
    c->r[2] = 0u + 0x00000001u;
    c->r[1] = 0x08ab0000u;
    mem_w32(ram, c->r[1] + 0xffff9a60u, c->r[2]);
    c->r[4] = 0x08a60000u;
    { c->r[31] = 0x0899d960u; c->r[4] = mem_r32(ram, c->r[4] + 0xffffa5e0u); hle_dispatch_stub(c, ram, 0x08a2482cu); /* sceKernelDeleteSema */ }
L_0899d960:
    c->r[2] = 0u + 0x00000001u;
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000004u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000000u);
    { c->r[29] = c->r[29] + 0x00000010u; return; }
    return; /* fell out of func_0899d924 */
}

/* func_089a1b00  0x089a1b00..0x089a1b30  48 bytes, source=sweep */
void func_089a1b00(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089a1b00u);
    c->r[29] = c->r[29] + 0xfffffff0u;
    mem_w32(ram, c->r[29] + 0x00000004u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000000u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    c->r[4] = 0u + 0x00000001u;
    { c->r[31] = 0x089a1b1cu; c->r[5] = 0u | 0xffffu; func_089a111c(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000004u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000000u);
    { c->r[29] = c->r[29] + 0x00000010u; return; }
    return; /* fell out of func_089a1b00 */
}

/* func_089a5ef0  0x089a5ef0..0x089a6430  1344 bytes, source=fde */
void func_089a5ef0(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089a5ef0u);
L_089a5ef0:
    c->r[29] = c->r[29] + 0xffffff90u;
    mem_w32(ram, c->r[29] + 0x00000064u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000060u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[2] = c->r[5] + 0u;
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[6]);
    mem_w8(ram, c->r[30] + 0x00000004u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x000000e0u;
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
    c->r[2] = mem_r8(ram, c->r[30] + 0x00000004u);
    mem_w32(ram, c->r[30] + 0x00000054u, c->r[2]);
    c->r[2] = 0u + 0x00000007u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000054u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_089a61a4; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000054u);
    c->r[2] = ((s32)c->r[3] < (s32)0x00000008u) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_089a5f5c; }
    c->r[2] = 0u + 0x00000001u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000054u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_089a5f74; }
    { goto L_089a6418; }
L_089a5f5c:
    c->r[2] = 0u + 0x00000019u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000054u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_089a6410; }
    { goto L_089a6418; }
L_089a5f74:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r8(ram, c->r[2] + 0x0000000eu);
    mem_w32(ram, c->r[30] + 0x00000050u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000050u);
    c->r[2] = (c->r[3] < 0x0000002cu) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_089a6194; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000050u);
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08a50000u;
    c->r[2] = c->r[2] + 0xffffaa6cu;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    { u32 _t = c->r[2]; switch (_t) { case 0x089a5ef0u: goto L_089a5ef0; case 0x089a5fb0u: goto L_089a5fb0; case 0x089a601cu: goto L_089a601c; case 0x089a6100u: goto L_089a6100; case 0x089a614cu: goto L_089a614c; case 0x089a617cu: goto L_089a617c; case 0x089a6194u: goto L_089a6194; default: recomp_trap_unknown_indirect(c, ram, 0x089a5fa8u, _t); return; } }
L_089a5fb0:
    { c->r[31] = 0x089a5fb8u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u); func_0899f8d0(c, ram); }
    { c->r[31] = 0x089a5fc0u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u); func_0899b088(c, ram); }
    { c->r[31] = 0x089a5fc8u; func_0899c07c(c, ram); }
    { c->r[31] = 0x089a5fd0u; func_089a45fc(c, ram); }
    { c->r[31] = 0x089a5fd8u; func_0899d820(c, ram); }
    { c->r[31] = 0x089a5fe0u; c->r[4] = 0u + 0x00000004u; func_089c3618(c, ram); }
    { c->r[31] = 0x089a5fe8u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u); func_0896ec90(c, ram); }
    { c->r[31] = 0x089a5ff0u; func_0896a284(c, ram); }
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x089a5ffcu; c->r[5] = 0u + 0x00000384u; func_0896ccf0(c, ram); }
    { c->r[31] = 0x089a6004u; func_0896a284(c, ram); }
    { c->r[31] = 0x089a600cu; c->r[4] = c->r[2] + 0u; func_0896cdf8(c, ram); }
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0u + 0x00000019u;
    { mem_w8(ram, c->r[3] + 0x0000000eu, c->r[2]); goto L_089a6418; }
L_089a601c:
    { c->r[31] = 0x089a6024u; func_0896a284(c, ram); }
    { c->r[31] = 0x089a602cu; c->r[4] = c->r[2] + 0u; func_0896c89c(c, ram); }
    { c->r[31] = 0x089a6034u; func_0896a284(c, ram); }
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0u + 0x0000000cu;
    c->r[6] = 0u + 0x000000ffu;
    { c->r[31] = 0x089a6048u; c->r[7] = 0u + 0x000000feu; func_0896ce9c(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    mem_w32(ram, c->r[30] + 0x0000004cu, c->r[2]);
    c->r[2] = 0u + 0xffffffffu;
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000004cu);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_089a607c; }
    c->r[2] = 0u + 0x00000001u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000004cu);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_089a60b8; }
    { goto L_089a6418; }
L_089a607c:
    { c->r[31] = 0x089a6084u; c->r[4] = 0u + 0u; func_089c3618(c, ram); }
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0u + 0x00000003u;
    mem_w32(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x089a609cu; c->r[5] = 0u + 0x00000033u; func_0896a7b8(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x00000028u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    { c->r[31] = 0x089a60b0u; c->r[4] = c->r[2] + 0u; func_0896e7c0(c, ram); }
    { goto L_089a6418; }
L_089a60b8:
    { c->r[31] = 0x089a60c0u; c->r[4] = mem_r32(ram, c->r[30] + 0x0000000cu); func_0896e3a0(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x00000028u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    { c->r[31] = 0x089a60d4u; c->r[4] = c->r[2] + 0u; func_0896e7c0(c, ram); }
    c->r[1] = 0x08a50000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffffaa68u);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00003c30u;
    c->r[5] = 0u + 0x00000001u;
    { c->r[31] = 0x089a60f0u; c->f[12] = c->f[0]; func_089b3514(c, ram); }
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0u + 0x00000017u;
    { mem_w8(ram, c->r[3] + 0x0000000eu, c->r[2]); goto L_089a6418; }
L_089a6100:
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x089a610cu; c->r[4] = c->r[4] + 0x00003c30u; func_089b384c(c, ram); }
    { int _c = (c->r[2] == 0u); if (_c) goto L_089a611c; }
    { goto L_089a6418; }
L_089a611c:
    { c->r[31] = 0x089a6124u; c->r[4] = 0u + 0u; func_089c3618(c, ram); }
    { c->r[31] = 0x089a612cu; c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u); func_0899f9e0(c, ram); }
    { c->r[31] = 0x089a6134u; func_08998e20(c, ram); }
    c->r[1] = 0x08ab0000u;
    mem_w32(ram, c->r[1] + 0x00002e04u, 0u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0u + 0x0000000au;
    { mem_w8(ram, c->r[3] + 0x0000000eu, c->r[2]); goto L_089a6418; }
L_089a614c:
    { c->r[31] = 0x089a6154u; func_089a4ee0(c, ram); }
    { c->r[31] = 0x089a615cu; func_089a5700(c, ram); }
    { c->r[31] = 0x089a6164u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u); func_089a02b8(c, ram); }
    { c->r[31] = 0x089a616cu; func_089a4bbc(c, ram); }
    { c->r[31] = 0x089a6174u; func_089a5578(c, ram); }
    { goto L_089a6418; }
L_089a617c:
    { c->r[31] = 0x089a6184u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u); func_0899fb14(c, ram); }
    { c->r[31] = 0x089a618cu; c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u); func_0896a824(c, ram); }
    { goto L_089a6418; }
L_089a6194:
    { c->r[31] = 0x089a619cu; c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u); func_089a09a0(c, ram); }
    { goto L_089a6418; }
L_089a61a4:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = mem_r8(ram, c->r[2] + 0x0000000eu);
    c->r[2] = 0u + 0x0000000au;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_089a61e8; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = mem_r8(ram, c->r[2] + 0x0000000eu);
    c->r[2] = 0u + 0x00000012u;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_089a61e8; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = mem_r8(ram, c->r[2] + 0x0000000eu);
    c->r[2] = 0u + 0x00000013u;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_089a61e8; }
    { goto L_089a61f0; }
L_089a61e8:
    { c->r[31] = 0x089a61f0u; func_0899dcf4(c, ram); }
L_089a61f0:
    { c->r[31] = 0x089a61f8u; c->r[4] = 0u + 0x00000020u; func_088f4f4c(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000030u, c->r[2]);
    { c->r[31] = 0x089a6204u; c->r[4] = 0u + 0x00000023u; func_088f4f4c(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000034u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000030u);
    mem_w32(ram, c->r[30] + 0x00000020u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000034u);
    mem_w32(ram, c->r[30] + 0x00000024u, c->r[2]);
    mem_w32(ram, c->r[30] + 0x00000010u, 0u);
L_089a621c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000002u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_089a6234; }
    { goto L_089a6418; }
L_089a6234:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = 0x08ab0000u;
    c->r[2] = c->r[2] + 0x00002de8u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000000u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_089a6278; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = 0x08ab0000u;
    c->r[2] = c->r[2] + 0x00002de8u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[3] = mem_r8(ram, c->r[2] + 0x00000000u);
    c->r[2] = 0u + 0x00000001u;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_089a6278; }
    { goto L_089a63c0; }
L_089a6278:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08ab0000u;
    c->r[2] = c->r[2] + 0x00002df0u;
    c->r[4] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08ab0000u;
    c->r[2] = c->r[2] + 0x00002df8u;
    c->r[2] = c->r[3] + c->r[2];
    c->f[1] = mem_rf32(ram, c->r[4] + 0x00000000u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000000u);
    c->f[0] = c->f[1] + c->f[0];
    mem_wf32(ram, c->r[30] + 0x00000040u, c->f[0]);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000040u);
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    c->r[3] = f2u(c->f[0]);
    c->r[2] = 0x88880000u;
    c->r[2] = c->r[2] | 0x8889u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[2] = c->hi;
    c->r[2] = c->r[2] + c->r[3];
    c->r[4] = (u32)((s32)c->r[2] >> 5);
    c->r[2] = (u32)((s32)c->r[3] >> 31);
    c->r[2] = c->r[4] - c->r[2];
    mem_w32(ram, c->r[30] + 0x00000044u, c->r[2]);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000040u);
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    c->r[4] = f2u(c->f[0]);
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
    mem_w32(ram, c->r[30] + 0x00000048u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[3] = c->r[2] << 4;
    c->r[2] = 0x08ab0000u;
    c->r[2] = c->r[2] + 0x00002e2cu;
    c->r[2] = c->r[3] + c->r[2];
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0x08a50000u;
    c->r[5] = c->r[5] + 0xffffa9a8u;
    c->r[6] = mem_r32(ram, c->r[30] + 0x00000044u);
    { c->r[31] = 0x089a6350u; c->r[7] = mem_r32(ram, c->r[30] + 0x00000048u); func_08a1ad34(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[30];
    c->r[2] = c->r[2] + 0x00000020u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_089a6400; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[30];
    c->r[2] = c->r[2] + 0x00000020u;
    c->r[4] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[3] = c->r[2] << 4;
    c->r[2] = 0x08ab0000u;
    c->r[2] = c->r[2] + 0x00002e2cu;
    c->r[2] = c->r[2] + c->r[3];
    mem_w32(ram, c->r[4] + 0x000000a0u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[3] = c->r[2] << 4;
    c->r[2] = 0x08ab0000u;
    c->r[2] = c->r[2] + 0x00002e2cu;
    c->r[2] = c->r[3] + c->r[2];
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000010u);
    { c->r[31] = 0x089a63b8u; c->r[5] = c->r[2] + 0u; func_0891d018(c, ram); }
    { goto L_089a6400; }
L_089a63c0:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[30];
    c->r[2] = c->r[2] + 0x00000020u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_089a6400; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[30];
    c->r[2] = c->r[2] + 0x00000020u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    mem_w32(ram, c->r[2] + 0x000000a0u, 0u);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000010u);
    { c->r[31] = 0x089a6400u; c->r[5] = 0u + 0u; func_0891d018(c, ram); }
L_089a6400:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]); goto L_089a621c; }
L_089a6410:
    { c->r[31] = 0x089a6418u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u); func_089a0e68(c, ram); }
L_089a6418:
    c->r[2] = 0u + 0u;
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000064u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000060u);
    { c->r[29] = c->r[29] + 0x00000070u; return; }
    return; /* fell out of func_089a5ef0 */
}

/* func_089ac390  0x089ac390..0x089ac3d8  72 bytes, source=sweep */
void func_089ac390(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089ac390u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x0000021cu);
    c->r[2] = 0x00200000u;
    c->r[2] = c->r[3] | c->r[2];
    mem_w32(ram, c->r[4] + 0x0000021cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[1] = 0x08a50000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffffafacu);
    mem_wf32(ram, c->r[2] + 0x00000240u, c->f[0]);
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_089ac390 */
}

/* func_089b2778  0x089b2778..0x089b27a4  44 bytes, source=sweep */
void func_089b2778(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089b2778u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x000000e0u;
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000032u);
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_089b2778 */
}

/* func_089b3464  0x089b3464..0x089b34c8  100 bytes, source=sweep */
void func_089b3464(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089b3464u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    mem_w32(ram, c->r[30] + 0x00000008u, 0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x00000000u);
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_089b34b4; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x00000002u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x00000002u);
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_089b34b4; }
    c->r[2] = 0u + 0x00000001u;
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]);
L_089b34b4:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_089b3464 */
}

/* func_089b5ce8  0x089b5ce8..0x089b62b8  1488 bytes, source=fde */
void func_089b5ce8(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089b5ce8u);
    c->r[29] = c->r[29] + 0xffffff40u;
    mem_w32(ram, c->r[29] + 0x000000b4u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x000000b0u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    mem_wf32(ram, c->r[30] + 0x00000008u, c->f[12]);
    mem_wf32(ram, c->r[30] + 0x0000000cu, c->f[13]);
    mem_wf32(ram, c->r[30] + 0x00000010u, c->f[14]);
    mem_wf32(ram, c->r[30] + 0x00000014u, c->f[15]);
    mem_wf32(ram, c->r[30] + 0x00000018u, c->f[16]);
    mem_wf32(ram, c->r[30] + 0x0000001cu, c->f[17]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    mem_w32(ram, c->r[30] + 0x00000020u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[2] + 0x00000010u;
    mem_w32(ram, c->r[30] + 0x00000024u, c->r[2]);
    mem_w32(ram, c->r[30] + 0x00000030u, 0u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000008u);
    mem_wf32(ram, c->r[30] + 0x00000034u, c->f[0]);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x0000000cu);
    mem_wf32(ram, c->r[30] + 0x00000038u, c->f[0]);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000010u);
    mem_wf32(ram, c->r[30] + 0x0000003cu, c->f[0]);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000014u);
    mem_wf32(ram, c->r[30] + 0x00000040u, c->f[0]);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000018u);
    mem_wf32(ram, c->r[30] + 0x00000044u, c->f[0]);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x0000001cu);
    mem_wf32(ram, c->r[30] + 0x00000048u, c->f[0]);
    mem_w32(ram, c->r[30] + 0x00000050u, 0u);
L_089b5d64:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000050u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000004u);
    c->r[2] = (c->r[3] < c->r[2]) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_089b5d84; }
    { goto L_089b62a4; }
L_089b5d84:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000050u);
    c->r[2] = 0u + 0x00000074u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[3] = c->lo;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000024u);
    c->r[2] = c->r[2] + c->r[3];
    mem_w32(ram, c->r[30] + 0x00000054u, c->r[2]);
    mem_w8(ram, c->r[30] + 0x00000070u, 0u);
    mem_w32(ram, c->r[30] + 0x00000074u, 0u);
L_089b5da8:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000054u);
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000074u);
    c->r[2] = ((s32)c->r[2] < (s32)c->r[3]) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_089b5dc8; }
    { goto L_089b5e44; }
L_089b5dc8:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000054u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000074u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000001u);
    mem_w8(ram, c->r[30] + 0x00000078u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x00000008u);
    c->r[2] = mem_r8(ram, c->r[30] + 0x00000078u);
    c->r[2] = c->r[2] + c->r[3];
    c->r[2] = c->r[2] + 0x00000030u;
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000000u);
    mem_w8(ram, c->r[30] + 0x00000079u, c->r[2]);
    c->r[3] = mem_r8(ram, c->r[30] + 0x00000079u);
    c->r[2] = 0u + 0x000000ffu;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_089b5e10; }
    { goto L_089b5e34; }
L_089b5e10:
    c->r[3] = mem_r8(ram, c->r[30] + 0x00000070u);
    c->r[2] = c->r[3] + 0x00000001u;
    mem_w8(ram, c->r[30] + 0x00000070u, c->r[2]);
    c->r[2] = c->r[3] << 24;
    c->r[3] = (u32)((s32)c->r[2] >> 24);
    c->r[2] = c->r[30] + 0x00000060u;
    c->r[3] = c->r[2] + c->r[3];
    c->r[2] = mem_r8(ram, c->r[30] + 0x00000078u);
    mem_w8(ram, c->r[3] + 0x00000000u, c->r[2]);
L_089b5e34:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000074u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000074u, c->r[2]); goto L_089b5da8; }
L_089b5e44:
    mem_w32(ram, c->r[30] + 0x0000007cu, 0u);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[30] + 0x00000070u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_089b5e5c; }
    { goto L_089b6294; }
L_089b5e5c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000054u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000008u);
    c->r[1] = 0x08a50000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffffb204u);
    c->f[0] = c->f[1] * c->f[0];
    mem_wf32(ram, c->r[30] + 0x00000080u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000054u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000008u);
    c->r[1] = 0x08a50000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffffb204u);
    c->f[0] = c->f[1] * c->f[0];
    mem_wf32(ram, c->r[30] + 0x00000084u, c->f[0]);
    mem_w32(ram, c->r[30] + 0x00000074u, 0u);
L_089b5e90:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000074u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000005u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_089b5ea8; }
    { goto L_089b61a4; }
L_089b5ea8:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000074u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 2;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000054u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = c->r[2] + 0x00000010u;
    mem_w32(ram, c->r[30] + 0x00000088u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000088u);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000001u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_089b5ee4; }
    { goto L_089b61a4; }
L_089b5ee4:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000088u);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000000u);
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[30];
    c->r[2] = c->r[2] + 0x00000030u;
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000000u);
    mem_wf32(ram, c->r[30] + 0x0000008cu, c->f[0]);
    mem_w32(ram, c->r[30] + 0x00000090u, 0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000088u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000088u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000004u);
    c->f[0] = mem_rf32(ram, c->r[3] + 0x00000008u);
    alx_c_cond_s(c, 2, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) == 0u); if (_c) goto L_089b5f2c; }
    { goto L_089b5f58; }
L_089b5f2c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000088u);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x0000008cu);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000004u);
    c->f[2] = c->f[1] - c->f[0];
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000088u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000088u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000008u);
    c->f[0] = mem_rf32(ram, c->r[3] + 0x00000004u);
    c->f[0] = c->f[1] - c->f[0];
    c->f[0] = c->f[2] / c->f[0];
    mem_wf32(ram, c->r[30] + 0x00000090u, c->f[0]);
L_089b5f58:
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000090u);
    c->r[1] = 0x08a50000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffffb208u);
    alx_c_cond_s(c, 12, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_089b5f7c; }
    { goto L_089b5f8c; }
L_089b5f7c:
    c->r[1] = 0x08a50000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffffb208u);
    { mem_wf32(ram, c->r[30] + 0x00000090u, c->f[0]); goto L_089b5fb0; }
L_089b5f8c:
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000090u);
    c->f[0] = u2f(0u);
    alx_c_cond_s(c, 12, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_089b5fac; }
    { goto L_089b5fb0; }
L_089b5fac:
    mem_w32(ram, c->r[30] + 0x00000090u, 0u);
L_089b5fb0:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000088u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000088u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000010u);
    c->f[0] = mem_rf32(ram, c->r[3] + 0x0000000cu);
    c->f[1] = c->f[1] - c->f[0];
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000090u);
    c->f[1] = c->f[1] * c->f[0];
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000088u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x0000000cu);
    c->f[1] = c->f[1] + c->f[0];
    c->r[1] = 0x08a50000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffffb204u);
    c->f[0] = c->f[1] * c->f[0];
    mem_wf32(ram, c->r[30] + 0x00000094u, c->f[0]);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000094u);
    c->r[1] = 0x08a50000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffffb208u);
    alx_c_cond_s(c, 12, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_089b600c; }
    { goto L_089b601c; }
L_089b600c:
    c->r[1] = 0x08a50000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffffb208u);
    { mem_wf32(ram, c->r[30] + 0x00000094u, c->f[0]); goto L_089b6040; }
L_089b601c:
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000094u);
    c->f[0] = u2f(0u);
    alx_c_cond_s(c, 12, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_089b603c; }
    { goto L_089b6040; }
L_089b603c:
    mem_w32(ram, c->r[30] + 0x00000094u, 0u);
L_089b6040:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000088u);
    mem_w32(ram, c->r[30] + 0x000000a0u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x000000a0u);
    c->r[2] = mem_r8(ram, c->r[3] + 0x00000001u);
    c->r[2] = (c->r[2] < 0x00000007u) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_089b6194; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x000000a0u);
    c->r[2] = mem_r8(ram, c->r[3] + 0x00000001u);
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08a50000u;
    c->r[2] = c->r[2] + 0xffffb218u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    { u32 _t = c->r[2]; switch (_t) { case 0x089b6080u: goto L_089b6080; case 0x089b608cu: goto L_089b608c; case 0x089b60a8u: goto L_089b60a8; case 0x089b60ccu: goto L_089b60cc; case 0x089b610cu: goto L_089b610c; case 0x089b614cu: goto L_089b614c; case 0x089b6194u: goto L_089b6194; default: recomp_trap_unknown_indirect(c, ram, 0x089b6078u, _t); return; } }
L_089b6080:
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000094u);
    { mem_wf32(ram, c->r[30] + 0x00000080u, c->f[0]); goto L_089b6194; }
L_089b608c:
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000094u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000084u);
    c->f[1] = c->f[1] - c->f[0];
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000080u);
    c->f[0] = c->f[0] + c->f[1];
    { mem_wf32(ram, c->r[30] + 0x00000080u, c->f[0]); goto L_089b6194; }
L_089b60a8:
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000080u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000084u);
    c->f[1] = c->f[1] - c->f[0];
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000094u);
    c->f[1] = c->f[1] * c->f[0];
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000084u);
    c->f[0] = c->f[1] + c->f[0];
    { mem_wf32(ram, c->r[30] + 0x00000080u, c->f[0]); goto L_089b6194; }
L_089b60cc:
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000094u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000080u);
    alx_c_cond_s(c, 12, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_089b60ec; }
    { goto L_089b60f8; }
L_089b60ec:
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000094u);
    { mem_wf32(ram, c->r[30] + 0x00000098u, c->f[0]); goto L_089b6100; }
L_089b60f8:
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000080u);
    mem_wf32(ram, c->r[30] + 0x00000098u, c->f[0]);
L_089b6100:
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000098u);
    { mem_wf32(ram, c->r[30] + 0x00000080u, c->f[0]); goto L_089b6194; }
L_089b610c:
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000094u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000080u);
    alx_c_cond_s(c, 12, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_089b612c; }
    { goto L_089b6138; }
L_089b612c:
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000094u);
    { mem_wf32(ram, c->r[30] + 0x0000009cu, c->f[0]); goto L_089b6140; }
L_089b6138:
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000080u);
    mem_wf32(ram, c->r[30] + 0x0000009cu, c->f[0]);
L_089b6140:
    c->f[0] = mem_rf32(ram, c->r[30] + 0x0000009cu);
    { mem_wf32(ram, c->r[30] + 0x00000080u, c->f[0]); goto L_089b6194; }
L_089b614c:
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000094u);
    c->r[1] = 0x08a50000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffffb20cu);
    c->f[0] = c->f[1] - c->f[0];
    c->f[2] = (f32)fabsf(c->f[0]);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000080u);
    c->r[1] = 0x08a50000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffffb20cu);
    c->f[0] = c->f[1] - c->f[0];
    c->f[0] = (f32)fabsf(c->f[0]);
    alx_c_cond_s(c, 12, c->f[0], c->f[2]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_089b618c; }
    { goto L_089b6194; }
L_089b618c:
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000094u);
    mem_wf32(ram, c->r[30] + 0x00000080u, c->f[0]);
L_089b6194:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000074u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000074u, c->r[2]); goto L_089b5e90; }
L_089b61a4:
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000080u);
    c->r[1] = 0x08a50000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffffb208u);
    alx_c_cond_s(c, 12, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_089b61c8; }
    { goto L_089b61d8; }
L_089b61c8:
    c->r[1] = 0x08a50000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffffb208u);
    { mem_wf32(ram, c->r[30] + 0x00000080u, c->f[0]); goto L_089b61fc; }
L_089b61d8:
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000080u);
    c->f[0] = u2f(0u);
    alx_c_cond_s(c, 12, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_089b61f8; }
    { goto L_089b61fc; }
L_089b61f8:
    mem_w32(ram, c->r[30] + 0x00000080u, 0u);
L_089b61fc:
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000080u);
    c->r[1] = 0x08a50000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffffb210u);
    c->f[0] = c->f[1] * c->f[0];
    mem_wf32(ram, c->r[30] + 0x00000080u, c->f[0]);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000080u);
    c->r[1] = 0x08a50000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffffb214u);
    c->f[0] = c->f[1] * c->f[0];
    mem_wf32(ram, c->r[30] + 0x00000080u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000054u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x0000000cu);
    mem_wf32(ram, c->r[30] + 0x0000001cu, c->f[0]);
    mem_w32(ram, c->r[30] + 0x00000088u, 0u);
L_089b6234:
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[30] + 0x00000070u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000088u);
    c->r[2] = ((s32)c->r[3] < (s32)c->r[2]) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_089b6250; }
    { goto L_089b6294; }
L_089b6250:
    c->r[3] = c->r[30] + 0x00000060u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000088u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000000u);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x0000001cu);
    c->r[1] = 0x08a80000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00002e40u);
    c->f[0] = c->f[1] * c->f[0];
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = c->r[2] + 0u;
    c->f[12] = c->f[0];
    { c->r[31] = 0x089b6284u; c->f[13] = mem_rf32(ram, c->r[30] + 0x00000080u); func_089b5804(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000088u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000088u, c->r[2]); goto L_089b6234; }
L_089b6294:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000050u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000050u, c->r[2]); goto L_089b5d64; }
L_089b62a4:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x000000b4u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x000000b0u);
    { c->r[29] = c->r[29] + 0x000000c0u; return; }
    return; /* fell out of func_089b5ce8 */
}

/* func_089b7c00  0x089b7c00..0x089b7c54  84 bytes, source=fde */
void func_089b7c00(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089b7c00u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000ac8u;
    { c->r[31] = 0x089b7c24u; c->r[5] = mem_r32(ram, c->r[30] + 0x00000000u); func_089cb780(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[1] = 0x08b40000u;
    mem_w32(ram, c->r[1] + 0xfffff120u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[1] = 0x08b40000u;
    mem_w32(ram, c->r[1] + 0xfffff124u, c->r[2]);
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_089b7c00 */
}

/* func_089b96fc  0x089b96fc..0x089b974c  80 bytes, source=residue */
void func_089b96fc(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089b96fcu);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[4] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x00000002u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 8;
    c->r[2] = c->r[2] + c->r[4];
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08b40000u;
    c->r[2] = c->r[2] + 0xfffff128u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_089b96fc */
}

/* func_089c3500  0x089c3500..0x089c356c  108 bytes, source=fde */
void func_089c3500(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089c3500u);
    c->r[29] = c->r[29] + 0xffffffd0u;
    mem_w32(ram, c->r[29] + 0x00000024u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000020u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    c->r[3] = c->r[6] + 0u;
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[7]);
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[8]);
    c->r[2] = c->r[9] + 0u;
    mem_w8(ram, c->r[30] + 0x00000008u, c->r[3]);
    mem_w16(ram, c->r[30] + 0x00000014u, c->r[2]);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[30] + 0x00000008u);
    c->r[3] = (u32)(s32)(s16)mem_r16(ram, c->r[30] + 0x00000014u);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000ac8u;
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[6] = c->r[2] + 0u;
    c->r[7] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[8] = mem_r32(ram, c->r[30] + 0x00000010u);
    { c->r[31] = 0x089c3558u; c->r[9] = c->r[3] + 0u; func_089cb638(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000024u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000020u);
    { c->r[29] = c->r[29] + 0x00000030u; return; }
    return; /* fell out of func_089c3500 */
}

/* func_089c6644  0x089c6644..0x089c6aac  1128 bytes, source=fde */
void func_089c6644(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089c6644u);
    c->r[29] = c->r[29] + 0xffffffd0u;
    mem_w32(ram, c->r[29] + 0x00000024u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000020u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    mem_w32(ram, c->r[30] + 0x00000008u, 0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000000u);
    c->f[0] = mem_rf32(ram, c->r[3] + 0x00000014u);
    c->f[1] = c->f[1] + c->f[0];
    mem_wf32(ram, c->r[30] + 0x0000000cu, c->f[1]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000028u);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x0000000cu);
    c->f[1] = c->f[1] + c->f[0];
    mem_wf32(ram, c->r[30] + 0x0000000cu, c->f[1]);
    c->f[0] = u2f(0u);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x0000000cu);
    alx_c_cond_s(c, 12, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_089c66ac; }
    { goto L_089c6764; }
L_089c66ac:
    c->r[1] = 0x08a50000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffffb378u);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x0000000cu);
    c->f[0] = c->f[1] + c->f[0];
    { c->r[31] = 0x089c66c4u; c->f[12] = c->f[0]; func_08a104b4(c, ram); }
    mem_wf32(ram, c->r[30] + 0x00000010u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[1] = 0x08a50000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffffb37cu);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000010u);
    c->f[0] = c->f[1] * c->f[0];
    mem_wf32(ram, c->r[2] + 0x0000000cu, c->f[0]);
    c->r[1] = 0x08a50000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffffb37cu);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000010u);
    c->f[1] = c->f[0] / c->f[1];
    mem_wf32(ram, c->r[30] + 0x00000010u, c->f[1]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000018u);
    c->f[0] = mem_rf32(ram, c->r[3] + 0x00000024u);
    c->f[0] = c->f[1] - c->f[0];
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000010u);
    c->f[0] = c->f[0] * c->f[1];
    mem_wf32(ram, c->r[4] + 0x00000000u, c->f[0]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000020u);
    c->f[0] = mem_rf32(ram, c->r[3] + 0x00000008u);
    c->f[0] = c->f[1] - c->f[0];
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000010u);
    c->f[0] = c->f[0] * c->f[1];
    mem_wf32(ram, c->r[4] + 0x00000004u, c->f[0]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000004u);
    c->f[0] = mem_rf32(ram, c->r[3] + 0x00000010u);
    c->f[0] = c->f[1] - c->f[0];
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000010u);
    c->f[0] = c->f[0] * c->f[1];
    { mem_wf32(ram, c->r[4] + 0x00000008u, c->f[0]); goto L_089c6a98; }
L_089c6764:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000000u);
    mem_wf32(ram, c->r[30] + 0x00000014u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000014u);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000014u);
    alx_c_cond_s(c, 12, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_089c6794; }
    { goto L_089c67a8; }
L_089c6794:
    c->r[2] = 0u + 0x00000001u;
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000014u);
    mem_wf32(ram, c->r[30] + 0x00000014u, c->f[0]);
L_089c67a8:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000028u);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000014u);
    alx_c_cond_s(c, 12, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_089c67cc; }
    { goto L_089c67d4; }
L_089c67cc:
    c->r[2] = 0u + 0x00000002u;
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]);
L_089c67d4:
    c->r[2] = 0u + 0x00000001u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_089c68f4; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = ((s32)c->r[3] < (s32)0x00000002u) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_089c6808; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_089c6820; }
    { goto L_089c6a98; }
L_089c6808:
    c->r[2] = 0u + 0x00000002u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_089c69c8; }
    { goto L_089c6a98; }
L_089c6820:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000000u);
    c->f[0] = mem_rf32(ram, c->r[3] + 0x00000014u);
    c->f[1] = c->f[1] - c->f[0];
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000028u);
    c->f[1] = c->f[1] - c->f[0];
    c->r[1] = 0x08a50000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffffb378u);
    c->f[0] = c->f[1] + c->f[0];
    { c->r[31] = 0x089c6854u; c->f[12] = c->f[0]; func_08a104b4(c, ram); }
    mem_wf32(ram, c->r[30] + 0x00000010u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[1] = 0x08a50000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffffb37cu);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000010u);
    c->f[0] = c->f[1] * c->f[0];
    mem_wf32(ram, c->r[2] + 0x00000000u, c->f[0]);
    c->r[1] = 0x08a50000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffffb37cu);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000010u);
    c->f[1] = c->f[0] / c->f[1];
    mem_wf32(ram, c->r[30] + 0x00000010u, c->f[1]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000010u);
    c->f[0] = mem_rf32(ram, c->r[3] + 0x00000004u);
    c->f[0] = c->f[1] + c->f[0];
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000010u);
    c->f[0] = c->f[0] * c->f[1];
    mem_wf32(ram, c->r[4] + 0x00000004u, c->f[0]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000008u);
    c->f[0] = mem_rf32(ram, c->r[3] + 0x00000020u);
    c->f[0] = c->f[1] + c->f[0];
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000010u);
    c->f[0] = c->f[0] * c->f[1];
    mem_wf32(ram, c->r[4] + 0x00000008u, c->f[0]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000018u);
    c->f[0] = mem_rf32(ram, c->r[3] + 0x00000024u);
    c->f[0] = c->f[1] - c->f[0];
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000010u);
    c->f[0] = c->f[0] * c->f[1];
    { mem_wf32(ram, c->r[4] + 0x0000000cu, c->f[0]); goto L_089c6a98; }
L_089c68f4:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000014u);
    c->f[0] = mem_rf32(ram, c->r[3] + 0x00000000u);
    c->f[1] = c->f[1] - c->f[0];
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000028u);
    c->f[1] = c->f[1] - c->f[0];
    c->r[1] = 0x08a50000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffffb378u);
    c->f[0] = c->f[1] + c->f[0];
    { c->r[31] = 0x089c6928u; c->f[12] = c->f[0]; func_08a104b4(c, ram); }
    mem_wf32(ram, c->r[30] + 0x00000010u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[1] = 0x08a50000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffffb37cu);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000010u);
    c->f[0] = c->f[1] * c->f[0];
    mem_wf32(ram, c->r[2] + 0x00000004u, c->f[0]);
    c->r[1] = 0x08a50000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffffb37cu);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000010u);
    c->f[1] = c->f[0] / c->f[1];
    mem_wf32(ram, c->r[30] + 0x00000010u, c->f[1]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000024u);
    c->f[0] = mem_rf32(ram, c->r[3] + 0x00000018u);
    c->f[0] = c->f[1] + c->f[0];
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000010u);
    c->f[0] = c->f[0] * c->f[1];
    mem_wf32(ram, c->r[4] + 0x00000008u, c->f[0]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000010u);
    c->f[0] = mem_rf32(ram, c->r[3] + 0x00000004u);
    c->f[0] = c->f[1] + c->f[0];
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000010u);
    c->f[0] = c->f[0] * c->f[1];
    mem_wf32(ram, c->r[4] + 0x00000000u, c->f[0]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000020u);
    c->f[0] = mem_rf32(ram, c->r[3] + 0x00000008u);
    c->f[0] = c->f[1] - c->f[0];
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000010u);
    c->f[0] = c->f[0] * c->f[1];
    { mem_wf32(ram, c->r[4] + 0x0000000cu, c->f[0]); goto L_089c6a98; }
L_089c69c8:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000028u);
    c->f[0] = mem_rf32(ram, c->r[3] + 0x00000000u);
    c->f[1] = c->f[1] - c->f[0];
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000014u);
    c->f[1] = c->f[1] - c->f[0];
    c->r[1] = 0x08a50000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffffb378u);
    c->f[0] = c->f[1] + c->f[0];
    { c->r[31] = 0x089c69fcu; c->f[12] = c->f[0]; func_08a104b4(c, ram); }
    mem_wf32(ram, c->r[30] + 0x00000010u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[1] = 0x08a50000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffffb37cu);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000010u);
    c->f[0] = c->f[1] * c->f[0];
    mem_wf32(ram, c->r[2] + 0x00000008u, c->f[0]);
    c->r[1] = 0x08a50000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffffb37cu);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000010u);
    c->f[1] = c->f[0] / c->f[1];
    mem_wf32(ram, c->r[30] + 0x00000010u, c->f[1]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000008u);
    c->f[0] = mem_rf32(ram, c->r[3] + 0x00000020u);
    c->f[0] = c->f[1] + c->f[0];
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000010u);
    c->f[0] = c->f[0] * c->f[1];
    mem_wf32(ram, c->r[4] + 0x00000000u, c->f[0]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000024u);
    c->f[0] = mem_rf32(ram, c->r[3] + 0x00000018u);
    c->f[0] = c->f[1] + c->f[0];
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000010u);
    c->f[0] = c->f[0] * c->f[1];
    mem_wf32(ram, c->r[4] + 0x00000004u, c->f[0]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000004u);
    c->f[0] = mem_rf32(ram, c->r[3] + 0x00000010u);
    c->f[0] = c->f[1] - c->f[0];
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000010u);
    c->f[0] = c->f[0] * c->f[1];
    mem_wf32(ram, c->r[4] + 0x0000000cu, c->f[0]);
L_089c6a98:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000024u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000020u);
    { c->r[29] = c->r[29] + 0x00000030u; return; }
    return; /* fell out of func_089c6644 */
}

/* func_089c8da0  0x089c8da0..0x089c8ddc  60 bytes, source=sweep */
void func_089c8da0(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089c8da0u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[2] = 0x2e460000u;
    c->r[2] = c->r[2] | 0x4c5au;
    c->r[2] = c->r[3] ^ c->r[2];
    c->r[2] = (c->r[2] < 0x00000001u) ? 1u : 0u;
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_089c8da0 */
}

/* func_089cafb8  0x089cafb8..0x089cb1e4  556 bytes, source=fde */
void func_089cafb8(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089cafb8u);
    c->r[29] = c->r[29] + 0xffffffd0u;
    mem_w32(ram, c->r[29] + 0x00000028u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000024u, c->r[30]);
    mem_w32(ram, c->r[29] + 0x00000020u, c->r[16]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[2] = c->r[5] + 0u;
    c->r[3] = c->r[6] + 0u;
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[7]);
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[8]);
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[9]);
    mem_w8(ram, c->r[30] + 0x00000004u, c->r[2]);
    mem_w16(ram, c->r[30] + 0x00000006u, c->r[3]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000024u);
    c->r[3] = c->r[2] + 0x00000001u;
    c->r[2] = mem_r32(ram, c->r[4] + 0x00000004u);
    c->r[2] = ((s32)c->r[3] < (s32)c->r[2]) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_089cb014; }
    { mem_w32(ram, c->r[30] + 0x0000001cu, 0u); goto L_089cb1c8; }
L_089cb014:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000001cu);
    c->r[2] = c->r[2] + 0xfffffffcu;
    mem_w32(ram, c->r[3] + 0x0000001cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_089cb120; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = mem_r8(ram, c->r[30] + 0x00000004u);
    mem_w8(ram, c->r[3] + 0x00000018u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    mem_w8(ram, c->r[2] + 0x00000019u, 0u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = mem_r16(ram, c->r[30] + 0x00000006u);
    mem_w16(ram, c->r[3] + 0x0000001au, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    mem_w32(ram, c->r[3] + 0x00000010u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[16] = c->r[2] + 0x00000008u;
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x089cb07cu; c->r[5] = mem_r32(ram, c->r[30] + 0x0000000cu); func_089cb780(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    mem_w32(ram, c->r[16] + 0x00000000u, c->r[2]);
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[30] + 0x00000004u);
    c->r[3] = c->r[2] << 2;
    c->r[2] = mem_r32(ram, c->r[4] + 0x00000014u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = c->r[2] + 0x00000004u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    mem_w32(ram, c->r[5] + 0x00000000u, c->r[2]);
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[30] + 0x00000004u);
    c->r[3] = c->r[2] << 2;
    c->r[2] = mem_r32(ram, c->r[4] + 0x00000014u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = c->r[2] + 0x00000004u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    mem_w32(ram, c->r[5] + 0x00000004u, c->r[2]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[30] + 0x00000004u);
    c->r[3] = c->r[2] << 2;
    c->r[2] = mem_r32(ram, c->r[4] + 0x00000014u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = c->r[2] + 0x00000004u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    mem_w32(ram, c->r[3] + 0x00000004u, c->r[2]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[30] + 0x00000004u);
    c->r[3] = c->r[2] << 2;
    c->r[2] = mem_r32(ram, c->r[4] + 0x00000014u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = c->r[2] + 0x00000004u;
    c->r[3] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    mem_w32(ram, c->r[3] + 0x00000000u, c->r[2]);
L_089cb120:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    mem_w32(ram, c->r[3] + 0x0000000cu, c->r[2]);
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = c->r[2] + 0x00000028u;
    c->r[2] = mem_r32(ram, c->r[3] + 0x00000000u);
    c->r[4] = c->r[2] + 0u;
    c->r[2] = c->r[2] + 0x00000001u;
    mem_w32(ram, c->r[3] + 0x00000000u, c->r[2]);
    mem_w32(ram, c->r[5] + 0x00000014u, c->r[4]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000024u);
    c->r[2] = c->r[2] + 0x00000001u;
    mem_w32(ram, c->r[3] + 0x00000024u, c->r[2]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[6] = 0u + 0x00000004u;
    { c->r[31] = 0x089cb174u; c->r[7] = 0u + 0u; func_089cb2b4(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000019u);
    c->r[2] = 0u + 0x00000002u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_089cb198; }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x089cb194u; c->r[5] = mem_r32(ram, c->r[30] + 0x00000014u); func_089cb1e4(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000014u, 0u);
L_089cb198:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x00000028u);
    c->r[2] = 0x000f0000u;
    c->r[2] = c->r[2] | 0xffffu;
    c->r[2] = ((s32)c->r[2] < (s32)c->r[3]) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_089cb1c0; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = 0u + 0x00000010u;
    mem_w32(ram, c->r[3] + 0x00000028u, c->r[2]);
L_089cb1c0:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    mem_w32(ram, c->r[30] + 0x0000001cu, c->r[2]);
L_089cb1c8:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000028u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000024u);
    c->r[16] = mem_r32(ram, c->r[29] + 0x00000020u);
    { c->r[29] = c->r[29] + 0x00000030u; return; }
    return; /* fell out of func_089cafb8 */
}

/* func_089ce330  0x089ce330..0x089ce998  1640 bytes, source=sweep */
void func_089ce330(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089ce330u);
    c->r[29] = c->r[29] + 0xffffff70u;
    mem_w32(ram, c->r[29] + 0x00000084u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000080u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[12] = c->r[5] + 0u;
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[6]);
    c->r[2] = c->r[7] + 0u;
    c->r[3] = c->r[8] + 0u;
    c->r[4] = c->r[9] + 0u;
    c->r[5] = c->r[10] + 0u;
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[11]);
    mem_w8(ram, c->r[30] + 0x00000004u, c->r[12]);
    mem_w8(ram, c->r[30] + 0x0000000cu, c->r[2]);
    mem_w16(ram, c->r[30] + 0x0000000eu, c->r[3]);
    mem_w16(ram, c->r[30] + 0x00000010u, c->r[4]);
    mem_w8(ram, c->r[30] + 0x00000012u, c->r[5]);
    c->r[2] = mem_r8(ram, c->r[30] + 0x00000004u);
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08b80000u;
    c->r[2] = c->r[2] + 0xfffffc74u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = c->r[2] + 0x000000c0u;
    c->r[2] = mem_r16(ram, c->r[2] + 0x00000006u);
    mem_w16(ram, c->r[30] + 0x0000001cu, c->r[2]);
    mem_w32(ram, c->r[30] + 0x00000020u, 0u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = 0u - c->r[3];
    c->r[2] = alx_max(c->r[3], c->r[2]);
    mem_w32(ram, c->r[30] + 0x00000040u, c->r[2]);
L_089ce3b4:
    c->r[6] = c->r[30] + 0x00000020u;
    c->r[5] = mem_r32(ram, c->r[6] + 0x00000000u);
    c->r[2] = c->r[5] + 0u;
    c->r[2] = c->r[2] + c->r[30];
    c->r[7] = c->r[2] + 0x00000030u;
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000040u);
    c->r[2] = 0x66660000u;
    c->r[2] = c->r[2] | 0x6667u;
    alx_mult(c, c->r[4], c->r[2]);
    c->r[2] = c->hi;
    c->r[3] = (u32)((s32)c->r[2] >> 2);
    c->r[2] = (u32)((s32)c->r[4] >> 31);
    c->r[3] = c->r[3] - c->r[2];
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[3];
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[4] - c->r[2];
    c->r[2] = c->r[2] + 0x00000010u;
    mem_w8(ram, c->r[7] + 0x00000000u, c->r[2]);
    c->r[5] = c->r[5] + 0x00000001u;
    mem_w32(ram, c->r[6] + 0x00000000u, c->r[5]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000040u);
    c->r[2] = 0x66660000u;
    c->r[2] = c->r[2] | 0x6667u;
    alx_mult(c, c->r[4], c->r[2]);
    c->r[2] = c->hi;
    c->r[3] = (u32)((s32)c->r[2] >> 2);
    c->r[2] = (u32)((s32)c->r[4] >> 31);
    c->r[2] = c->r[3] - c->r[2];
    mem_w32(ram, c->r[30] + 0x00000040u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000040u);
    { int _c = ((s32)c->r[2] > 0); if (_c) goto L_089ce3b4; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    { int _c = ((s32)c->r[2] >= 0); if (_c) goto L_089ce46c; }
    c->r[5] = c->r[30] + 0x00000020u;
    c->r[3] = mem_r32(ram, c->r[5] + 0x00000000u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] + c->r[30];
    c->r[4] = c->r[2] + 0x00000030u;
    c->r[2] = 0u + 0x0000000du;
    mem_w8(ram, c->r[4] + 0x00000000u, c->r[2]);
    c->r[3] = c->r[3] + 0x00000001u;
    mem_w32(ram, c->r[5] + 0x00000000u, c->r[3]);
L_089ce46c:
    c->r[2] = mem_r16(ram, c->r[30] + 0x0000001cu);
    c->r[3] = c->r[2] + 0x00000001u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    alx_mult(c, c->r[3], c->r[2]);
    c->r[2] = c->lo;
    mem_w32(ram, c->r[30] + 0x00000044u, c->r[2]);
    c->r[3] = mem_r8(ram, c->r[30] + 0x00000012u);
    c->r[2] = 0u + 0x00000001u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_089ce4c4; }
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[30] + 0x0000000eu);
    c->f[0] = u2f(c->r[2]);
    c->f[2] = (f32)(s32)f2u(c->f[0]);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000044u);
    c->f[1] = (f32)(s32)f2u(c->f[0]);
    c->r[1] = 0x08a50000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffffb694u);
    c->f[0] = c->f[1] * c->f[0];
    c->f[0] = c->f[2] - c->f[0];
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    c->r[3] = f2u(c->f[0]);
    mem_w16(ram, c->r[30] + 0x0000000eu, c->r[3]);
L_089ce4c4:
    c->r[3] = mem_r8(ram, c->r[30] + 0x00000012u);
    c->r[2] = 0u + 0x00000002u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_089ce4f0; }
    c->r[3] = mem_r16(ram, c->r[30] + 0x0000000eu);
    c->r[2] = mem_r16(ram, c->r[30] + 0x00000044u);
    c->r[2] = c->r[3] - c->r[2];
    c->r[3] = c->r[2] + 0u;
    c->r[2] = mem_r16(ram, c->r[30] + 0x0000001cu);
    c->r[2] = c->r[3] + c->r[2];
    mem_w16(ram, c->r[30] + 0x0000000eu, c->r[2]);
L_089ce4f0:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[3];
    c->r[2] = c->r[2] << 2;
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x089ce510u; c->r[5] = 0u + 0x00000010u; func_0881a1d4(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000048u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000048u);
    mem_w32(ram, c->r[30] + 0x0000004cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[2] = c->r[2] + 0xffffffffu;
    mem_w32(ram, c->r[30] + 0x00000050u, c->r[2]);
L_089ce528:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000050u);
    { int _c = ((s32)c->r[2] >= 0); if (_c) goto L_089ce53c; }
    { goto L_089ce770; }
L_089ce53c:
    c->r[3] = c->r[30] + 0x00000030u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000050u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[3] = mem_r8(ram, c->r[2] + 0x00000000u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 2;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = c->r[2] + c->r[3];
    mem_w32(ram, c->r[30] + 0x00000054u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000054u);
    c->r[2] = mem_r16(ram, c->r[2] + 0x00000006u);
    c->f[0] = u2f(c->r[2]);
    c->f[0] = (f32)(s32)f2u(c->f[0]);
    mem_wf32(ram, c->r[30] + 0x00000058u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000054u);
    c->r[2] = mem_r16(ram, c->r[2] + 0x00000008u);
    c->f[0] = u2f(c->r[2]);
    c->f[0] = (f32)(s32)f2u(c->f[0]);
    mem_wf32(ram, c->r[30] + 0x0000005cu, c->f[0]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000004cu);
    c->r[2] = mem_r16(ram, c->r[30] + 0x0000000eu);
    mem_w16(ram, c->r[3] + 0x00000004u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000004cu);
    c->r[2] = mem_r16(ram, c->r[30] + 0x00000010u);
    mem_w16(ram, c->r[3] + 0x00000006u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000004cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000054u);
    c->r[2] = mem_r16(ram, c->r[2] + 0x00000002u);
    mem_w16(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000004cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000054u);
    c->r[2] = mem_r16(ram, c->r[2] + 0x00000004u);
    mem_w16(ram, c->r[3] + 0x00000002u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000004cu);
    c->r[2] = c->r[2] + 0x0000000au;
    c->r[3] = (u32)(s32)(s16)mem_r16(ram, c->r[30] + 0x0000000eu);
    c->f[0] = u2f(c->r[3]);
    c->f[1] = (f32)(s32)f2u(c->f[0]);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000058u);
    c->f[0] = c->f[1] + c->f[0];
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    c->r[3] = f2u(c->f[0]);
    mem_w16(ram, c->r[2] + 0x00000004u, c->r[3]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000004cu);
    c->r[2] = c->r[2] + 0x0000000au;
    c->r[3] = (u32)(s32)(s16)mem_r16(ram, c->r[30] + 0x00000010u);
    c->f[0] = u2f(c->r[3]);
    c->f[1] = (f32)(s32)f2u(c->f[0]);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x0000005cu);
    c->f[0] = c->f[1] + c->f[0];
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    c->r[3] = f2u(c->f[0]);
    mem_w16(ram, c->r[2] + 0x00000006u, c->r[3]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000004cu);
    c->r[2] = c->r[2] + 0x0000000au;
    mem_w32(ram, c->r[30] + 0x00000060u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000054u);
    c->r[2] = mem_r16(ram, c->r[2] + 0x00000002u);
    c->f[0] = u2f(c->r[2]);
    c->f[1] = (f32)(s32)f2u(c->f[0]);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000058u);
    c->f[1] = c->f[1] + c->f[0];
    mem_wf32(ram, c->r[30] + 0x00000064u, c->f[1]);
    c->r[1] = 0x08a50000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffffb698u);
    mem_wf32(ram, c->r[30] + 0x0000006cu, c->f[0]);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000064u);
    c->f[2] = mem_rf32(ram, c->r[30] + 0x0000006cu);
    alx_c_cond_s(c, 14, c->f[2], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_089ce674; }
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000064u);
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    { mem_wf32(ram, c->r[30] + 0x00000068u, c->f[0]); goto L_089ce698; }
L_089ce674:
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000064u);
    c->f[2] = mem_rf32(ram, c->r[30] + 0x0000006cu);
    c->f[0] = c->f[1] - c->f[2];
    c->r[2] = 0x80000000u;
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    mem_wf32(ram, c->r[30] + 0x00000068u, c->f[0]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000068u);
    c->r[3] = c->r[3] | c->r[2];
    mem_w32(ram, c->r[30] + 0x00000068u, c->r[3]);
L_089ce698:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000068u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000060u);
    mem_w16(ram, c->r[2] + 0x00000000u, c->r[3]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000004cu);
    c->r[2] = c->r[2] + 0x0000000au;
    mem_w32(ram, c->r[30] + 0x00000070u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000054u);
    c->r[2] = mem_r16(ram, c->r[2] + 0x00000004u);
    c->f[0] = u2f(c->r[2]);
    c->f[1] = (f32)(s32)f2u(c->f[0]);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x0000005cu);
    c->f[1] = c->f[1] + c->f[0];
    mem_wf32(ram, c->r[30] + 0x00000074u, c->f[1]);
    c->r[1] = 0x08a50000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffffb698u);
    mem_wf32(ram, c->r[30] + 0x0000007cu, c->f[0]);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000074u);
    c->f[2] = mem_rf32(ram, c->r[30] + 0x0000007cu);
    alx_c_cond_s(c, 14, c->f[2], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_089ce700; }
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000074u);
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    { mem_wf32(ram, c->r[30] + 0x00000078u, c->f[0]); goto L_089ce724; }
L_089ce700:
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000074u);
    c->f[2] = mem_rf32(ram, c->r[30] + 0x0000007cu);
    c->f[0] = c->f[1] - c->f[2];
    c->r[2] = 0x80000000u;
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    mem_wf32(ram, c->r[30] + 0x00000078u, c->f[0]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000078u);
    c->r[3] = c->r[3] | c->r[2];
    mem_w32(ram, c->r[30] + 0x00000078u, c->r[3]);
L_089ce724:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000078u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000070u);
    mem_w16(ram, c->r[2] + 0x00000002u, c->r[3]);
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[30] + 0x0000000eu);
    c->f[0] = u2f(c->r[2]);
    c->f[1] = (f32)(s32)f2u(c->f[0]);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000058u);
    c->f[0] = c->f[1] + c->f[0];
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    c->r[2] = f2u(c->f[0]);
    c->r[2] = c->r[2] + 0x00000001u;
    mem_w16(ram, c->r[30] + 0x0000000eu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000050u);
    c->r[2] = c->r[2] + 0xffffffffu;
    mem_w32(ram, c->r[30] + 0x00000050u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000004cu);
    c->r[2] = c->r[2] + 0x00000014u;
    { mem_w32(ram, c->r[30] + 0x0000004cu, c->r[2]); goto L_089ce528; }
L_089ce770:
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
    { c->r[31] = 0x089ce7b8u; c->r[5] = mem_r32(ram, c->r[30] + 0x00000014u); func_089d22c4(c, ram); }
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
    { c->r[31] = 0x089ce804u; c->r[5] = c->r[5] | 0x0102u; func_089d20f0(c, ram); }
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
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000048u);
    c->r[2] = c->r[2] >> 24;
    c->r[2] = c->r[2] & 0x000fu;
    c->r[3] = c->r[2] << 16;
    c->r[2] = 0x10000000u;
    c->r[2] = c->r[3] | c->r[2];
    { c->r[31] = 0x089ce860u; c->r[5] = c->r[2] + 0u; func_089d20f0(c, ram); }
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
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000048u);
    c->r[2] = 0x00ff0000u;
    c->r[2] = c->r[2] | 0xffffu;
    c->r[3] = c->r[3] & c->r[2];
    c->r[2] = 0x01000000u;
    c->r[2] = c->r[3] | c->r[2];
    { c->r[31] = 0x089ce8bcu; c->r[5] = c->r[2] + 0u; func_089d20f0(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000054u, 0u);
L_089ce8c0:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000054u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[2] = ((s32)c->r[2] < (s32)c->r[3]) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_089ce8dc; }
    { goto L_089ce938; }
L_089ce8dc:
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
    { c->r[31] = 0x089ce928u; c->r[5] = c->r[5] | 0x0002u; func_089d20f0(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000054u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000054u, c->r[2]); goto L_089ce8c0; }
L_089ce938:
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
    { c->r[31] = 0x089ce984u; c->r[5] = mem_r32(ram, c->r[5] + 0x00005420u); func_089d22c4(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000084u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000080u);
    { c->r[29] = c->r[29] + 0x00000090u; return; }
    return; /* fell out of func_089ce330 */
}

/* func_089d266c  0x089d266c..0x089d27dc  368 bytes, source=sweep */
void func_089d266c(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089d266cu);
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
    mem_w32(ram, c->r[30] + 0x00000018u, c->r[10]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_089d26c8; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = 0x00ff0000u;
    c->r[2] = c->r[2] | 0xffffu;
    c->r[3] = c->r[3] & c->r[2];
    c->r[2] = 0x12000000u;
    c->r[2] = c->r[3] | c->r[2];
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x089d26c8u; c->r[5] = c->r[2] + 0u; func_089d20f0(c, ram); }
L_089d26c8:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_089d271c; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = c->r[2] >> 24;
    c->r[2] = c->r[2] & 0x000fu;
    c->r[3] = c->r[2] << 16;
    c->r[2] = 0x10000000u;
    c->r[2] = c->r[3] | c->r[2];
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x089d26f8u; c->r[5] = c->r[2] + 0u; func_089d20f0(c, ram); }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = 0x00ff0000u;
    c->r[2] = c->r[2] | 0xffffu;
    c->r[3] = c->r[3] & c->r[2];
    c->r[2] = 0x02000000u;
    c->r[2] = c->r[3] | c->r[2];
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x089d271cu; c->r[5] = c->r[2] + 0u; func_089d20f0(c, ram); }
L_089d271c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_089d2770; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = c->r[2] >> 24;
    c->r[2] = c->r[2] & 0x000fu;
    c->r[3] = c->r[2] << 16;
    c->r[2] = 0x10000000u;
    c->r[2] = c->r[3] | c->r[2];
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x089d274cu; c->r[5] = c->r[2] + 0u; func_089d20f0(c, ram); }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = 0x00ff0000u;
    c->r[2] = c->r[2] | 0xffffu;
    c->r[3] = c->r[3] & c->r[2];
    c->r[2] = 0x01000000u;
    c->r[2] = c->r[3] | c->r[2];
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x089d2770u; c->r[5] = c->r[2] + 0u; func_089d20f0(c, ram); }
L_089d2770:
    mem_w32(ram, c->r[30] + 0x0000001cu, 0u);
L_089d2774:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = ((s32)c->r[2] < (s32)c->r[3]) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_089d2790; }
    { goto L_089d27c8; }
L_089d2790:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[2] & 0x0007u;
    c->r[3] = c->r[2] << 16;
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = c->r[3] | c->r[2];
    c->r[2] = 0x04000000u;
    c->r[2] = c->r[3] | c->r[2];
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x089d27b8u; c->r[5] = c->r[2] + 0u; func_089d20f0(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x0000001cu, c->r[2]); goto L_089d2774; }
L_089d27c8:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000024u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000020u);
    { c->r[29] = c->r[29] + 0x00000030u; return; }
    return; /* fell out of func_089d266c */
}

/* func_089d374c  0x089d374c..0x089d3828  220 bytes, source=fde */
void func_089d374c(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089d374cu);
    c->r[29] = c->r[29] + 0xffffffc0u;
    mem_w32(ram, c->r[29] + 0x00000034u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000030u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    c->r[2] = c->r[30] + 0x00000010u;
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0u + 0u;
    { c->r[31] = 0x089d3778u; c->r[6] = 0u + 0x00000008u; func_08a19ec4(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_089d37ac; }
    { c->r[31] = 0x089d378cu; c->r[4] = mem_r32(ram, c->r[30] + 0x00000004u); func_08a1b008(c, ram); }
    c->r[3] = c->r[2] + 0x00000001u;
    c->r[2] = c->r[30] + 0x00000010u;
    c->r[4] = c->r[2] + 0u;
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000004u);
    { c->r[31] = 0x089d37a4u; c->r[6] = c->r[3] + 0u; func_08a19db8(c, ram); }
    { goto L_089d37c4; }
L_089d37ac:
    c->r[2] = c->r[30] + 0x00000010u;
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0x08a50000u;
    c->r[5] = c->r[5] + 0xffffb7b8u;
    { c->r[31] = 0x089d37c4u; c->r[6] = 0u + 0x00000005u; func_08a19db8(c, ram); }
L_089d37c4:
    c->r[2] = c->r[30] + 0x00000010u;
    { c->r[31] = 0x089d37d0u; c->r[4] = c->r[2] + 0u; hle_dispatch_stub(c, ram, 0x08a24c24u); /* sceNetAdhocctlConnect */ }
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    { int _c = ((s32)c->r[2] >= 0); if (_c) goto L_089d3808; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = 0x80410000u;
    c->r[2] = c->r[2] | 0x0b10u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_089d37fc; }
    { mem_w32(ram, c->r[30] + 0x00000020u, 0u); goto L_089d3810; }
L_089d37fc:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    { mem_w32(ram, c->r[30] + 0x00000020u, c->r[2]); goto L_089d3810; }
L_089d3808:
    c->r[2] = 0u + 0x00000001u;
    mem_w32(ram, c->r[30] + 0x00000020u, c->r[2]);
L_089d3810:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000034u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000030u);
    { c->r[29] = c->r[29] + 0x00000040u; return; }
    return; /* fell out of func_089d374c */
}

/* func_089d52bc  0x089d52bc..0x089d531c  96 bytes, source=fde */
void func_089d52bc(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089d52bcu);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, 0u);
L_089d52d4:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000008u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_089d52ec; }
    { goto L_089d5308; }
L_089d52ec:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x089d52f8u; c->r[5] = mem_r32(ram, c->r[30] + 0x00000004u); func_089d531c(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000004u, c->r[2]); goto L_089d52d4; }
L_089d5308:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_089d52bc */
}

/* func_089d673c  0x089d673c..0x089d687c  320 bytes, source=fde */
void func_089d673c(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089d673cu);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[6]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000000cu);
    c->r[3] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x00000004u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 3;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = c->r[2] + 0x00000010u;
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[5] = 0u + 0u;
    { c->r[31] = 0x089d6794u; c->r[6] = 0u + 0x00000018u; func_08a19ec4(c, ram); }
    c->r[4] = mem_r32(ram, c->r[30] + 0x0000000cu);
    { c->r[31] = 0x089d67a0u; c->r[5] = mem_r32(ram, c->r[30] + 0x00000004u); func_08a1af70(c, ram); }
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    mem_w32(ram, c->r[3] + 0x00000010u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    mem_w32(ram, c->r[3] + 0x00000014u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000000cu);
    c->r[2] = mem_r16(ram, c->r[2] + 0x00000004u);
    c->r[2] = c->r[2] + 0x00000001u;
    mem_w16(ram, c->r[3] + 0x00000004u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[4] = mem_r32(ram, c->r[2] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000000cu);
    c->r[3] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[3] + c->r[2];
    mem_w32(ram, c->r[4] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[2] = c->r[2] & 0x003fu;
    { int _c = (c->r[2] == 0u); if (_c) goto L_089d6858; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[4] = mem_r32(ram, c->r[2] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = mem_r32(ram, c->r[2] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000000cu);
    c->r[3] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[2] = (u32)((s32)c->r[3] >> 31);
    c->r[2] = c->r[2] >> 26;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = (u32)((s32)c->r[2] >> 6);
    c->r[2] = c->r[2] << 6;
    c->r[3] = c->r[3] - c->r[2];
    c->r[2] = mem_r32(ram, c->r[5] + 0x00000000u);
    c->r[2] = c->r[2] - c->r[3];
    c->r[2] = c->r[2] + 0x00000040u;
    mem_w32(ram, c->r[4] + 0x00000000u, c->r[2]);
L_089d6858:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000000cu);
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x00000004u);
    c->r[2] = c->r[2] + 0xffffffffu;
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_089d673c */
}

/* func_089d7f3c  0x089d7f3c..0x089d7f6c  48 bytes, source=sweep */
void func_089d7f3c(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089d7f3cu);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    mem_w32(ram, c->r[3] + 0x000060e8u, c->r[2]);
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_089d7f3c */
}

/* func_089d9728  0x089d9728..0x089d9768  64 bytes, source=sweep */
void func_089d9728(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089d9728u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[6]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    mem_w32(ram, c->r[3] + 0x00000030u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    mem_w32(ram, c->r[3] + 0x00000034u, c->r[2]);
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_089d9728 */
}

/* func_089da56c  0x089da56c..0x089da628  188 bytes, source=sweep */
void func_089da56c(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089da56cu);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = 0u + 0xffffffffu;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_089da5a8; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x0000001cu);
    c->r[2] = 0x08b90000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000698u);
    c->r[2] = c->r[3] + c->r[2];
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[2]);
L_089da5a8:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    mem_w32(ram, c->r[3] + 0x0000001cu, c->r[2]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000000cu);
    c->r[3] = c->r[2] << 2;
    c->r[2] = mem_r32(ram, c->r[4] + 0x00000008u);
    c->r[3] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    mem_w32(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000014u);
    c->r[2] = c->r[2] + 0x00000001u;
    mem_w32(ram, c->r[3] + 0x00000014u, c->r[2]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000000cu);
    c->r[3] = c->r[2] + 0x00000001u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000018u);
    alx_div(c, c->r[3], c->r[2]);
    c->r[3] = c->hi;
    if (c->r[2] == 0u) { recomp_break(c, ram, 0x089da60cu, 0x7u); goto L_089da610; }
L_089da610:
    mem_w32(ram, c->r[4] + 0x0000000cu, c->r[3]);
    c->r[2] = 0u + 0u;
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_089da56c */
}

/* func_089dbc2c  0x089dbc2c..0x089dbd24  248 bytes, source=sweep */
void func_089dbc2c(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089dbc2cu);
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
    c->r[3] = alx_clz(c->r[2]);
    c->r[2] = 0u + 0x0000001fu;
    c->r[2] = c->r[2] - c->r[3];
    mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = alx_clz(c->r[2]);
    c->r[2] = 0u + 0x0000001fu;
    c->r[2] = c->r[2] - c->r[3];
    mem_w32(ram, c->r[30] + 0x0000001cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[2] + 0x000000a0u;
    c->r[4] = c->r[2] << 24;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = 0x00ff0000u;
    c->r[2] = c->r[2] | 0xffffu;
    c->r[2] = c->r[3] & c->r[2];
    c->r[2] = c->r[4] | c->r[2];
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x089dbca8u; c->r[5] = c->r[2] + 0u; func_089db8b8(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[2] + 0x000000a8u;
    c->r[3] = c->r[2] << 24;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = c->r[2] >> 24;
    c->r[2] = c->r[2] & 0x000fu;
    c->r[2] = c->r[2] << 16;
    c->r[3] = c->r[3] | c->r[2];
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = c->r[3] | c->r[2];
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x089dbcdcu; c->r[5] = c->r[2] + 0u; func_089db8b8(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[2] + 0x000000b8u;
    c->r[3] = c->r[2] << 24;
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = c->r[2] << 8;
    c->r[3] = c->r[3] | c->r[2];
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = c->r[3] | c->r[2];
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x089dbd08u; c->r[5] = c->r[2] + 0u; func_089db8b8(c, ram); }
    { c->r[31] = 0x089dbd10u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u); func_089dbd24(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000024u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000020u);
    { c->r[29] = c->r[29] + 0x00000030u; return; }
    return; /* fell out of func_089dbc2c */
}

/* func_089dd8bc  0x089dd8bc..0x089dd960  164 bytes, source=fde */
void func_089dd8bc(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089dd8bcu);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[2] = 0x08b90000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x000006c0u);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = (u32)((s32)c->r[3] >> 31);
    c->r[2] = c->r[2] >> 26;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = (u32)((s32)c->r[2] >> 6);
    c->r[2] = c->r[2] << 6;
    c->r[2] = c->r[2] + 0x00000040u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[2]);
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x000006c0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[1] = 0x08b90000u;
    mem_w32(ram, c->r[1] + 0x000006c0u, c->r[2]);
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x000006c4u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[1] = 0x08b90000u;
    mem_w32(ram, c->r[1] + 0x000006c4u, c->r[2]);
    c->r[4] = 0x08a50000u;
    c->r[4] = c->r[4] + 0xffffc150u;
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[6] = 0x08b90000u;
    c->r[6] = mem_r32(ram, c->r[6] + 0x000006c4u);
    { c->r[31] = 0x089dd948u; c->r[7] = mem_r32(ram, c->r[30] + 0x00000000u); func_08a1a4c0(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_089dd8bc */
}

/* func_089df744  0x089df744..0x089df7a0  92 bytes, source=fde */
void func_089df744(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089df744u);
    c->r[29] = c->r[29] + 0xffffffd0u;
    mem_w32(ram, c->r[29] + 0x00000024u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000020u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[6]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]);
    mem_w32(ram, c->r[30] + 0x00000014u, 0u);
    mem_w32(ram, c->r[30] + 0x0000001cu, 0u);
    c->r[2] = c->r[30] + 0x00000010u;
    { c->r[31] = 0x089df784u; c->r[4] = c->r[2] + 0u; hle_dispatch_stub(c, ram, 0x08a24a0cu); /* sceGeSetCallback */ }
    c->r[1] = 0x08b90000u;
    mem_w32(ram, c->r[1] + 0x00000708u, c->r[2]);
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000024u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000020u);
    { c->r[29] = c->r[29] + 0x00000030u; return; }
    return; /* fell out of func_089df744 */
}

/* func_089e1d78  0x089e1d78..0x089e1db0  56 bytes, source=sweep */
void func_089e1d78(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089e1d78u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x089e1d9cu; c->r[5] = mem_r32(ram, c->r[30] + 0x00000004u); func_089e33b8(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_089e1d78 */
}

/* func_089e28cc  0x089e28cc..0x089e2920  84 bytes, source=sweep */
void func_089e28cc(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089e28ccu);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[2] = c->r[5] + 0u;
    mem_w16(ram, c->r[30] + 0x00000004u, c->r[2]);
    c->r[3] = mem_r16(ram, c->r[30] + 0x00000004u);
    c->r[2] = 0x0f000000u;
    c->r[2] = c->r[3] | c->r[2];
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x089e2900u; c->r[5] = c->r[2] + 0u; func_089e1908(c, ram); }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x089e290cu; c->r[5] = 0x0c000000u; func_089e1908(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_089e28cc */
}

/* func_089e3be0  0x089e3be0..0x089e3c4c  108 bytes, source=sweep */
void func_089e3be0(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089e3be0u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[6]);
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[7]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] & 0x00ffu;
    c->r[3] = c->r[2] << 16;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[2] & 0x00ffu;
    c->r[2] = c->r[2] << 8;
    c->r[3] = c->r[3] | c->r[2];
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = c->r[3] | c->r[2];
    c->r[2] = 0xdb000000u;
    c->r[2] = c->r[3] | c->r[2];
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x089e3c38u; c->r[5] = c->r[2] + 0u; func_089e1908(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_089e3be0 */
}

/* func_089e4cc8  0x089e4cc8..0x089e4d18  80 bytes, source=sweep */
void func_089e4cc8(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089e4cc8u);
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
    c->r[2] = 0x57000000u;
    c->r[2] = c->r[3] | c->r[2];
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x089e4d04u; c->r[5] = c->r[2] + 0u; func_089e1908(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_089e4cc8 */
}

/* func_089ea220  0x089ea220..0x089ea25c  60 bytes, source=sweep */
void func_089ea220(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089ea220u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000004u);
    { c->r[31] = 0x089ea248u; c->r[6] = 0u + 0u; func_089eab78(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_089ea220 */
}

/* func_089eb15c  0x089eb15c..0x089eb1a0  68 bytes, source=sweep */
void func_089eb15c(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089eb15cu);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = 0x26000000u;
    c->r[2] = c->r[2] | c->r[3];
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x089eb18cu; c->r[5] = c->r[2] + 0u; func_089ea03c(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_089eb15c */
}

/* func_089ef328  0x089ef328..0x089ef394  108 bytes, source=sweep */
void func_089ef328(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089ef328u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[6]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[1] = 0x00010000u;
    c->r[1] = c->r[1] + c->r[3];
    mem_w32(ram, c->r[1] + 0xffffe850u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[1] = 0x00010000u;
    c->r[1] = c->r[1] + c->r[3];
    mem_w32(ram, c->r[1] + 0xffffe854u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[1] = 0x00010000u;
    c->r[1] = c->r[1] + c->r[2];
    mem_w32(ram, c->r[1] + 0xffffe858u, 0u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_089ef328 */
}

/* func_089f0d9c  0x089f0d9c..0x089f0de0  68 bytes, source=sweep */
void func_089f0d9c(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089f0d9cu);
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
    { c->r[31] = 0x089f0dccu; c->r[5] = c->r[2] + 0u; func_089f0338(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_089f0d9c */
}

/* func_089f3578  0x089f3578..0x089f3b08  1424 bytes, source=fde */
void func_089f3578(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089f3578u);
    c->r[29] = c->r[29] + 0xffffff70u;
    mem_w32(ram, c->r[29] + 0x00000084u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000080u, c->r[30]);
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
    c->r[1] = 0x08a50000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffffc5a8u);
    mem_wf32(ram, c->r[30] + 0x0000002cu, c->f[0]);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000014u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000018u);
    c->f[1] = c->f[1] * c->f[0];
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000010u);
    c->f[1] = c->f[1] + c->f[0];
    c->r[1] = 0x08a50000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffffc5acu);
    alx_c_cond_s(c, 12, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_089f35f0; }
    { goto L_089f3680; }
L_089f35f0:
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000010u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000014u);
    c->f[1] = c->f[1] + c->f[0];
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000018u);
    c->f[2] = c->f[1] + c->f[0];
    c->f[1] = mem_rf32(ram, c->r[30] + 0x0000001cu);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000020u);
    c->f[1] = c->f[1] + c->f[0];
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000024u);
    c->f[0] = c->f[1] + c->f[0];
    alx_c_cond_s(c, 12, c->f[0], c->f[2]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_089f3630; }
    { goto L_089f3658; }
L_089f3630:
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000010u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000014u);
    c->f[1] = c->f[1] + c->f[0];
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000018u);
    c->f[1] = c->f[1] + c->f[0];
    c->r[1] = 0x08a50000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffffc5acu);
    c->f[0] = c->f[0] / c->f[1];
    { mem_wf32(ram, c->r[30] + 0x0000002cu, c->f[0]); goto L_089f36d8; }
L_089f3658:
    c->f[1] = mem_rf32(ram, c->r[30] + 0x0000001cu);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000020u);
    c->f[1] = c->f[1] + c->f[0];
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000024u);
    c->f[1] = c->f[1] + c->f[0];
    c->r[1] = 0x08a50000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffffc5acu);
    c->f[0] = c->f[0] / c->f[1];
    { mem_wf32(ram, c->r[30] + 0x0000002cu, c->f[0]); goto L_089f36d8; }
L_089f3680:
    c->f[1] = mem_rf32(ram, c->r[30] + 0x0000001cu);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000020u);
    c->f[1] = c->f[1] + c->f[0];
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000024u);
    c->f[1] = c->f[1] + c->f[0];
    c->r[1] = 0x08a50000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffffc5acu);
    alx_c_cond_s(c, 12, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_089f36b4; }
    { goto L_089f36d8; }
L_089f36b4:
    c->f[1] = mem_rf32(ram, c->r[30] + 0x0000001cu);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000020u);
    c->f[1] = c->f[1] + c->f[0];
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000024u);
    c->f[1] = c->f[1] + c->f[0];
    c->r[1] = 0x08a50000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffffc5acu);
    c->f[0] = c->f[0] / c->f[1];
    mem_wf32(ram, c->r[30] + 0x0000002cu, c->f[0]);
L_089f36d8:
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000010u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x0000002cu);
    c->f[0] = c->f[1] * c->f[0];
    mem_wf32(ram, c->r[30] + 0x00000010u, c->f[0]);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000014u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x0000002cu);
    c->f[0] = c->f[1] * c->f[0];
    mem_wf32(ram, c->r[30] + 0x00000014u, c->f[0]);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000018u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x0000002cu);
    c->f[0] = c->f[1] * c->f[0];
    mem_wf32(ram, c->r[30] + 0x00000018u, c->f[0]);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x0000001cu);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x0000002cu);
    c->f[0] = c->f[1] * c->f[0];
    mem_wf32(ram, c->r[30] + 0x0000001cu, c->f[0]);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000020u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x0000002cu);
    c->f[0] = c->f[1] * c->f[0];
    mem_wf32(ram, c->r[30] + 0x00000020u, c->f[0]);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000024u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x0000002cu);
    c->f[0] = c->f[1] * c->f[0];
    mem_wf32(ram, c->r[30] + 0x00000024u, c->f[0]);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000024u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000018u);
    c->f[2] = c->f[1] * c->f[0];
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000024u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000024u);
    c->f[0] = c->f[1] * c->f[0];
    c->f[0] = c->f[2] - c->f[0];
    mem_wf32(ram, c->r[30] + 0x00000030u, c->f[0]);
    mem_w32(ram, c->r[30] + 0x00000028u, 0u);
L_089f375c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000028u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000064u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_089f3774; }
    { goto L_089f39d8; }
L_089f3774:
    c->f[1] = mem_rf32(ram, c->r[30] + 0x0000001cu);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x0000001cu);
    c->f[1] = c->f[1] * c->f[0];
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000030u);
    c->f[0] = c->f[0] + c->f[1];
    mem_wf32(ram, c->r[30] + 0x00000034u, c->f[0]);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000020u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000020u);
    c->f[1] = c->f[1] * c->f[0];
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000030u);
    c->f[0] = c->f[0] + c->f[1];
    mem_wf32(ram, c->r[30] + 0x00000038u, c->f[0]);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000024u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000024u);
    c->f[1] = c->f[1] * c->f[0];
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000030u);
    c->f[0] = c->f[0] + c->f[1];
    mem_wf32(ram, c->r[30] + 0x0000003cu, c->f[0]);
    c->r[1] = 0x08a50000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0xffffc5a8u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000034u);
    c->f[0] = c->f[1] / c->f[0];
    mem_wf32(ram, c->r[30] + 0x00000040u, c->f[0]);
    c->r[1] = 0x08a50000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0xffffc5a8u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000038u);
    c->f[0] = c->f[1] / c->f[0];
    mem_wf32(ram, c->r[30] + 0x00000044u, c->f[0]);
    c->r[1] = 0x08a50000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0xffffc5a8u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x0000003cu);
    c->f[0] = c->f[1] / c->f[0];
    mem_wf32(ram, c->r[30] + 0x00000048u, c->f[0]);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x0000001cu);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000010u);
    c->f[1] = c->f[1] * c->f[0];
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000040u);
    c->f[0] = c->f[1] * c->f[0];
    mem_wf32(ram, c->r[30] + 0x0000004cu, c->f[0]);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000020u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000014u);
    c->f[1] = c->f[1] * c->f[0];
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000044u);
    c->f[0] = c->f[1] * c->f[0];
    mem_wf32(ram, c->r[30] + 0x00000050u, c->f[0]);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000024u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000018u);
    c->f[1] = c->f[1] * c->f[0];
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000048u);
    c->f[0] = c->f[1] * c->f[0];
    mem_wf32(ram, c->r[30] + 0x00000054u, c->f[0]);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x0000004cu);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x0000004cu);
    c->f[0] = c->f[1] * c->f[0];
    mem_wf32(ram, c->r[30] + 0x00000058u, c->f[0]);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000050u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000050u);
    c->f[0] = c->f[1] * c->f[0];
    mem_wf32(ram, c->r[30] + 0x0000005cu, c->f[0]);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000054u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000054u);
    c->f[0] = c->f[1] * c->f[0];
    mem_wf32(ram, c->r[30] + 0x00000060u, c->f[0]);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000058u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x0000005cu);
    c->f[1] = c->f[1] + c->f[0];
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000060u);
    c->f[1] = c->f[1] + c->f[0];
    c->r[1] = 0x08a50000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffffc5a8u);
    c->f[0] = c->f[1] - c->f[0];
    mem_wf32(ram, c->r[30] + 0x00000064u, c->f[0]);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000064u);
    c->r[1] = 0x08a50000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffffc5b0u);
    alx_c_cond_s(c, 12, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_089f38b8; }
    { goto L_089f3904; }
L_089f38b8:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x0000004cu);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x0000001cu);
    c->f[0] = c->f[1] * c->f[0];
    mem_wf32(ram, c->r[2] + 0x00000000u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000050u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000020u);
    c->f[0] = c->f[1] * c->f[0];
    mem_wf32(ram, c->r[2] + 0x00000000u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000054u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000024u);
    c->f[0] = c->f[1] * c->f[0];
    mem_wf32(ram, c->r[2] + 0x00000000u, c->f[0]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000028u);
    { mem_w32(ram, c->r[3] + 0x00000000u, c->r[2]); goto L_089f39d8; }
L_089f3904:
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000058u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000040u);
    c->f[1] = c->f[1] * c->f[0];
    c->f[2] = mem_rf32(ram, c->r[30] + 0x0000005cu);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000044u);
    c->f[0] = c->f[2] * c->f[0];
    c->f[1] = c->f[1] + c->f[0];
    c->f[2] = mem_rf32(ram, c->r[30] + 0x00000060u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000048u);
    c->f[0] = c->f[2] * c->f[0];
    c->f[1] = c->f[1] + c->f[0];
    c->f[0] = c->f[1] + c->f[1];
    mem_wf32(ram, c->r[30] + 0x00000068u, c->f[0]);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000064u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000068u);
    c->f[0] = c->f[1] / c->f[0];
    mem_wf32(ram, c->r[30] + 0x0000006cu, c->f[0]);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x0000006cu);
    c->r[1] = 0x08a50000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffffc5b0u);
    alx_c_cond_s(c, 12, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_089f396c; }
    { goto L_089f39b8; }
L_089f396c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x0000004cu);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x0000001cu);
    c->f[0] = c->f[1] * c->f[0];
    mem_wf32(ram, c->r[2] + 0x00000000u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000050u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000020u);
    c->f[0] = c->f[1] * c->f[0];
    mem_wf32(ram, c->r[2] + 0x00000000u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000054u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000024u);
    c->f[0] = c->f[1] * c->f[0];
    mem_wf32(ram, c->r[2] + 0x00000000u, c->f[0]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000028u);
    { mem_w32(ram, c->r[3] + 0x00000000u, c->r[2]); goto L_089f39d8; }
L_089f39b8:
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000030u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x0000006cu);
    c->f[0] = c->f[1] + c->f[0];
    mem_wf32(ram, c->r[30] + 0x00000030u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000028u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000028u, c->r[2]); goto L_089f375c; }
L_089f39d8:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000028u);
    c->r[2] = 0u + 0x00000064u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_089f3a04; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0u + 0xffffffffu;
    mem_w32(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[1] = 0x08a50000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffffc5b4u);
    { mem_wf32(ram, c->r[30] + 0x00000070u, c->f[0]); goto L_089f3af0; }
L_089f3a04:
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000010u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x0000002cu);
    c->f[0] = c->f[1] / c->f[0];
    mem_wf32(ram, c->r[30] + 0x00000010u, c->f[0]);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000014u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x0000002cu);
    c->f[0] = c->f[1] / c->f[0];
    mem_wf32(ram, c->r[30] + 0x00000014u, c->f[0]);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000018u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x0000002cu);
    c->f[0] = c->f[1] / c->f[0];
    mem_wf32(ram, c->r[30] + 0x00000018u, c->f[0]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000000u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x0000002cu);
    c->f[0] = c->f[1] / c->f[0];
    mem_wf32(ram, c->r[3] + 0x00000000u, c->f[0]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000000u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x0000002cu);
    c->f[0] = c->f[1] / c->f[0];
    mem_wf32(ram, c->r[3] + 0x00000000u, c->f[0]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000000u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x0000002cu);
    c->f[0] = c->f[1] / c->f[0];
    mem_wf32(ram, c->r[3] + 0x00000000u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000000u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000010u);
    c->f[0] = c->f[1] - c->f[0];
    mem_wf32(ram, c->r[30] + 0x0000006cu, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000000u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000014u);
    c->f[0] = c->f[1] - c->f[0];
    mem_wf32(ram, c->r[30] + 0x00000068u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000000u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000018u);
    c->f[0] = c->f[1] - c->f[0];
    mem_wf32(ram, c->r[30] + 0x00000064u, c->f[0]);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x0000006cu);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x0000006cu);
    c->f[2] = c->f[1] * c->f[0];
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000068u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000068u);
    c->f[0] = c->f[1] * c->f[0];
    c->f[2] = c->f[2] + c->f[0];
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000064u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000064u);
    c->f[0] = c->f[1] * c->f[0];
    c->f[0] = c->f[2] + c->f[0];
    { c->r[31] = 0x089f3aecu; c->f[12] = c->f[0]; func_08a104b4(c, ram); }
    mem_wf32(ram, c->r[30] + 0x00000070u, c->f[0]);
L_089f3af0:
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000070u);
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000084u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000080u);
    { c->r[29] = c->r[29] + 0x00000090u; return; }
    return; /* fell out of func_089f3578 */
}

/* func_089f5c48  0x089f5c48..0x089f5c8c  68 bytes, source=fde */
void func_089f5c48(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089f5c48u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    c->r[2] = mem_r16(ram, c->r[30] + 0x00000004u);
    c->r[3] = c->r[30] + 0x00000008u;
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x089f5c74u; c->r[5] = c->r[3] + 0u; func_089fa5b4(c, ram); }
    c->r[2] = mem_r16(ram, c->r[30] + 0x00000008u);
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_089f5c48 */
}

/* func_089f85a0  0x089f85a0..0x089f85f8  88 bytes, source=sweep */
void func_089f85a0(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089f85a0u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000060u;
    { c->r[31] = 0x089f85c4u; c->r[4] = c->r[2] + 0u; func_08808240(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000070u;
    { c->r[31] = 0x089f85d4u; c->r[4] = c->r[2] + 0u; func_08808240(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000080u;
    { c->r[31] = 0x089f85e4u; c->r[4] = c->r[2] + 0u; func_08808240(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_089f85a0 */
}

/* func_089f9428  0x089f9428..0x089f94ec  196 bytes, source=sweep */
void func_089f9428(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089f9428u);
    c->r[29] = c->r[29] + 0xffffffd0u;
    mem_w32(ram, c->r[29] + 0x00000000u, c->r[16]);
    c->r[16] = c->r[4] & 0xffffu;
    c->r[4] = c->r[16] + 0u;
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[20]);
    c->r[20] = c->r[8] + 0u;
    mem_w32(ram, c->r[29] + 0x0000000cu, c->r[19]);
    c->r[19] = alx_seh(c->r[7]);
    mem_w32(ram, c->r[29] + 0x00000008u, c->r[18]);
    c->r[18] = alx_seh(c->r[6]);
    mem_w32(ram, c->r[29] + 0x00000004u, c->r[17]);
    c->r[17] = c->r[5] & 0xffffu;
    mem_wf32(ram, c->r[29] + 0x00000020u, c->f[20]);
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    { c->r[31] = 0x089f9468u; c->f[20] = c->f[12]; func_089facc8(c, ram); }
    c->r[3] = 0x80000000u;
    c->r[3] = c->r[3] | 0x0010u;
    c->r[4] = c->r[16] + 0u;
    { int _c = (c->r[2] == c->r[3]); c->r[11] = c->r[3] + 0u; if (_c) goto L_089f94c4; }
    { c->r[31] = 0x089f9484u; func_089facf0(c, ram); }
    c->r[2] = (c->r[17] < c->r[2]) ? 1u : 0u;
    c->r[11] = 0x80000000u;
    c->r[5] = c->r[17] + 0u;
    c->r[4] = c->r[16] + 0u;
    c->f[12] = c->f[20];
    c->r[6] = c->r[18] + 0u;
    c->r[7] = c->r[19] + 0u;
    c->r[8] = c->r[20] + 0u;
    c->r[9] = 0u + 0u;
    c->r[10] = 0u + 0xffffffffu;
    { int _c = (c->r[2] == 0u); c->r[11] = c->r[11] | 0x0011u; if (_c) goto L_089f94c4; }
    c->r[2] = 0x08a50000u;
    { c->r[31] = 0x089f94c0u; c->f[13] = mem_rf32(ram, c->r[2] + 0xffffd140u); func_089fd034(c, ram); }
    c->r[11] = c->r[2] + 0u;
L_089f94c4:
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[20] = mem_r32(ram, c->r[29] + 0x00000010u);
    c->r[19] = mem_r32(ram, c->r[29] + 0x0000000cu);
    c->r[18] = mem_r32(ram, c->r[29] + 0x00000008u);
    c->r[17] = mem_r32(ram, c->r[29] + 0x00000004u);
    c->r[16] = mem_r32(ram, c->r[29] + 0x00000000u);
    c->f[20] = mem_rf32(ram, c->r[29] + 0x00000020u);
    c->r[2] = c->r[11] + 0u;
    { c->r[29] = c->r[29] + 0x00000030u; return; }
    return; /* fell out of func_089f9428 */
}

/* func_089fa20c  0x089fa20c..0x089fa224  24 bytes, source=sweep */
void func_089fa20c(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089fa20cu);
    c->r[3] = mem_r32(ram, c->r[4] + 0x00000be8u);
    c->r[2] = 0u + 0x00000001u;
    c->r[2] = c->r[2] << (c->r[5] & 31u);
    c->r[3] = c->r[3] | c->r[2];
    { mem_w32(ram, c->r[4] + 0x00000be8u, c->r[3]); return; }
    return; /* fell out of func_089fa20c */
}

/* func_089faaf8  0x089faaf8..0x089fab7c  132 bytes, source=sweep */
void func_089faaf8(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089faaf8u);
    c->r[29] = c->r[29] + 0xfffffff0u;
    mem_w32(ram, c->r[29] + 0x00000008u, c->r[18]);
    c->r[18] = c->r[4] + 0u;
    mem_w32(ram, c->r[29] + 0x00000004u, c->r[17]);
    c->r[17] = c->r[6] & 0xffffu;
    mem_w32(ram, c->r[29] + 0x00000000u, c->r[16]);
    c->r[16] = c->r[5] & 0xffffu;
    mem_w32(ram, c->r[29] + 0x0000000cu, c->r[31]);
    { c->r[31] = 0x089fab20u; c->r[5] = c->r[16] + 0u; func_089faa30(c, ram); }
    c->r[4] = c->r[18] + 0u;
    { int _c = (c->r[2] != 0u); c->r[5] = c->r[16] + 0u; if (_c) goto L_089fab74; }
    { c->r[31] = 0x089fab34u; func_089fa9dc(c, ram); }
    c->r[2] = (c->r[17] < c->r[2]) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); c->r[2] = 0u + 0u; if (_c) goto L_089fab5c; }
    c->r[2] = 0u + 0x000000c4u;
    alx_mult(c, c->r[16], c->r[2]);
    c->r[2] = c->lo;
    c->r[2] = c->r[2] + c->r[17];
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[18];
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000300u);
L_089fab5c:
    c->r[31] = mem_r32(ram, c->r[29] + 0x0000000cu);
    c->r[18] = mem_r32(ram, c->r[29] + 0x00000008u);
    c->r[17] = mem_r32(ram, c->r[29] + 0x00000004u);
    c->r[16] = mem_r32(ram, c->r[29] + 0x00000000u);
    { c->r[29] = c->r[29] + 0x00000010u; return; }
L_089fab74:
    { c->r[2] = 0u + 0u; goto L_089fab5c; }
    return; /* fell out of func_089faaf8 */
}

/* func_089fb400  0x089fb400..0x089fb40c  12 bytes, source=sweep */
void func_089fb400(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089fb400u);
    c->r[2] = 0x08b90000u;
    { c->r[2] = c->r[2] + 0x00006a94u; return; }
    return; /* fell out of func_089fb400 */
}

/* func_089fc090  0x089fc090..0x089fc0b8  40 bytes, source=residue */
void func_089fc090(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089fc090u);
    c->r[29] = c->r[29] + 0xfffffff0u;
    c->r[4] = c->r[4] & 0xffffu;
    c->r[5] = c->r[5] & 0xffffu;
    c->r[6] = alx_seh(c->r[6]);
    mem_w32(ram, c->r[29] + 0x00000000u, c->r[31]);
    { c->r[31] = 0x089fc0acu; c->r[7] = alx_seh(c->r[7]); func_089fc3d0(c, ram); }
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000000u);
    { c->r[29] = c->r[29] + 0x00000010u; return; }
    return; /* fell out of func_089fc090 */
}

/* func_089fd678  0x089fd678..0x089fd704  140 bytes, source=sweep */
void func_089fd678(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089fd678u);
    c->r[29] = c->r[29] + 0xfffffff0u;
    mem_w32(ram, c->r[29] + 0x00000000u, c->r[16]);
    c->r[16] = c->r[4] & 0xffffu;
    c->r[4] = c->r[16] + 0u;
    mem_w32(ram, c->r[29] + 0x00000008u, c->r[18]);
    c->r[18] = c->r[6] + 0u;
    mem_w32(ram, c->r[29] + 0x00000004u, c->r[17]);
    mem_w32(ram, c->r[29] + 0x0000000cu, c->r[31]);
    { c->r[31] = 0x089fd6a0u; c->r[17] = c->r[5] & 0xffffu; func_089facc8(c, ram); }
    c->r[3] = 0x80000000u;
    c->r[3] = c->r[3] | 0x0010u;
    c->r[4] = c->r[16] + 0u;
    { int _c = (c->r[2] == c->r[3]); c->r[6] = c->r[3] + 0u; if (_c) goto L_089fd6e8; }
    { c->r[31] = 0x089fd6bcu; func_089facf0(c, ram); }
    c->r[2] = (c->r[17] < c->r[2]) ? 1u : 0u;
    c->r[6] = 0x80000000u;
    c->r[5] = c->r[17] + 0u;
    c->r[4] = c->r[16] + 0u;
    { int _c = (c->r[2] == 0u); c->r[6] = c->r[6] | 0x0011u; if (_c) goto L_089fd6e8; }
    { c->r[31] = 0x089fd6dcu; func_089fad3c(c, ram); }
    c->r[3] = mem_r32(ram, c->r[2] + 0x00000014u);
    c->r[6] = 0u + 0u;
    mem_w32(ram, c->r[18] + 0x00000018u, c->r[3]);
L_089fd6e8:
    c->r[31] = mem_r32(ram, c->r[29] + 0x0000000cu);
    c->r[18] = mem_r32(ram, c->r[29] + 0x00000008u);
    c->r[17] = mem_r32(ram, c->r[29] + 0x00000004u);
    c->r[16] = mem_r32(ram, c->r[29] + 0x00000000u);
    c->r[2] = c->r[6] + 0u;
    { c->r[29] = c->r[29] + 0x00000010u; return; }
    return; /* fell out of func_089fd678 */
}

/* func_089fe454  0x089fe454..0x089fe4f0  156 bytes, source=sweep */
void func_089fe454(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089fe454u);
    c->r[2] = c->r[4] << 3;
    c->r[3] = 0x08ba0000u;
    c->r[2] = c->r[2] - c->r[4];
    c->r[6] = c->r[3] + 0x0000008cu;
    c->r[2] = c->r[2] << 5;
    c->r[5] = c->r[2] + c->r[6];
    c->r[3] = 0u + 0x00000001u;
    c->r[2] = 0u + 0xffffffffu;
    { int _c = (c->r[4] == c->r[2]); mem_w32(ram, c->r[5] + 0x0000006cu, c->r[3]); if (_c) goto L_089fe4b4; }
    c->r[2] = mem_r16(ram, c->r[5] + 0x00000010u);
    { int _c = (c->r[2] == 0u); c->r[3] = c->r[4] << 2; if (_c) goto L_089fe490; }
    c->r[2] = 0u + 0x00000005u;
    mem_w16(ram, c->r[5] + 0x00000010u, c->r[2]);
L_089fe490:
    c->r[3] = c->r[3] + c->r[4];
    c->r[2] = 0x08ba0000u;
    c->r[2] = c->r[2] + 0x00000170u;
    c->r[3] = c->r[3] << 2;
    c->r[3] = c->r[3] + c->r[2];
    c->r[2] = 0u + 0u;
    mem_w32(ram, c->r[3] + 0x00000010u, 0u);
    { mem_w32(ram, c->r[3] + 0x00000008u, 0u); return; }
L_089fe4b4:
    c->r[2] = 0x08ba0000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000016cu);
    { int _c = ((s32)c->r[2] <= 0); c->r[3] = c->r[4] << 2; if (_c) goto L_089fe490; }
    c->r[3] = c->r[6] + 0u;
    c->r[5] = c->r[2] + 0u;
    c->r[6] = 0u + 0x00000005u;
L_089fe4d0:
    c->r[2] = mem_r16(ram, c->r[3] + 0x00000010u);
    { int _c = (c->r[2] == 0u); c->r[5] = c->r[5] + 0xffffffffu; if (_c) goto L_089fe4e0; }
    mem_w16(ram, c->r[3] + 0x00000010u, c->r[6]);
L_089fe4e0:
    { int _c = (c->r[5] != 0u); c->r[3] = c->r[3] + 0x000000e0u; if (_c) goto L_089fe4d0; }
    { c->r[3] = c->r[4] << 2; goto L_089fe490; }
    return; /* fell out of func_089fe454 */
}

/* func_089ff2bc  0x089ff2bc..0x089ff2c8  12 bytes, source=residue */
void func_089ff2bc(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089ff2bcu);
    c->r[3] = 0x08ba0000u;
    { c->r[2] = mem_r32(ram, c->r[3] + 0x0000011cu); return; }
    return; /* fell out of func_089ff2bc */
}

/* func_08a01c08  0x08a01c08..0x08a01d34  300 bytes, source=fde */
void func_08a01c08(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08a01c08u);
    c->r[29] = c->r[29] + 0xffffffc0u;
    mem_w32(ram, c->r[29] + 0x00000000u, c->r[16]);
    c->r[16] = c->r[4] & 0xffffu;
    c->r[4] = c->r[16] + 0u;
    mem_w32(ram, c->r[29] + 0x00000020u, c->r[30]);
    c->r[30] = 0x08ba0000u;
    mem_w32(ram, c->r[29] + 0x0000001cu, c->r[23]);
    c->r[23] = c->r[10] + 0u;
    mem_w32(ram, c->r[29] + 0x00000018u, c->r[22]);
    c->r[22] = c->r[9] + 0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[21]);
    c->r[21] = c->r[8] + 0u;
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[20]);
    c->r[20] = c->r[11] + 0u;
    mem_w32(ram, c->r[29] + 0x0000000cu, c->r[19]);
    c->r[19] = alx_seh(c->r[7]);
    mem_w32(ram, c->r[29] + 0x00000008u, c->r[18]);
    c->r[18] = alx_seh(c->r[6]);
    mem_w32(ram, c->r[29] + 0x00000004u, c->r[17]);
    c->r[17] = c->r[5] & 0xffffu;
    mem_wf32(ram, c->r[29] + 0x00000030u, c->f[20]);
    mem_w32(ram, c->r[29] + 0x00000024u, c->r[31]);
    { c->r[31] = 0x08a01c68u; c->f[20] = c->f[12]; func_089fad6c(c, ram); }
    c->r[5] = c->r[21] + 0u;
    c->r[6] = c->r[16] + 0u;
    c->r[7] = c->r[17] + 0u;
    { int _c = (c->r[2] != 0u); c->r[3] = 0x80000000u; if (_c) goto L_08a01cb4; }
L_08a01c7c:
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000024u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000020u);
    c->r[23] = mem_r32(ram, c->r[29] + 0x0000001cu);
    c->r[22] = mem_r32(ram, c->r[29] + 0x00000018u);
    c->r[21] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[20] = mem_r32(ram, c->r[29] + 0x00000010u);
    c->r[19] = mem_r32(ram, c->r[29] + 0x0000000cu);
    c->r[18] = mem_r32(ram, c->r[29] + 0x00000008u);
    c->r[17] = mem_r32(ram, c->r[29] + 0x00000004u);
    c->r[16] = mem_r32(ram, c->r[29] + 0x00000000u);
    c->f[20] = mem_rf32(ram, c->r[29] + 0x00000030u);
    c->r[2] = c->r[3] + 0u;
    { c->r[29] = c->r[29] + 0x00000040u; return; }
L_08a01cb4:
    { c->r[31] = 0x08a01cbcu; c->r[4] = mem_r32(ram, c->r[30] + 0xffff9af0u); func_08a02b84(c, ram); }
    c->r[2] = 0x08a50000u;
    c->f[1] = mem_rf32(ram, c->r[2] + 0xffffd33cu);
    c->r[3] = 0x80000000u;
    c->f[12] = c->f[20];
    alx_c_cond_s(c, 12, c->f[0], c->f[1]);
    c->f[13] = c->f[0];
    c->r[6] = c->r[18] + 0u;
    c->r[7] = c->r[19] + 0u;
    c->r[9] = 0u + 0u;
    c->r[10] = 0u + 0xffffffffu;
    c->r[4] = c->r[16] + 0u;
    c->r[5] = c->r[17] + 0u;
    c->r[8] = c->r[20] + 0u;
    { int _c = ((c->fcr31 & FCR31_C) != 0u); c->r[3] = c->r[3] | 0x001bu; if (_c) goto L_08a01c7c; }
    { c->r[31] = 0x08a01d00u; func_089fd034(c, ram); }
    c->r[4] = mem_r32(ram, c->r[30] + 0xffff9af0u);
    c->r[6] = c->r[21] + 0u;
    c->r[7] = c->r[22] + 0u;
    c->r[5] = c->r[20] + 0u;
    { c->r[31] = 0x08a01d18u; c->r[8] = c->r[23] + 0u; func_08a02a28(c, ram); }
    c->r[4] = mem_r32(ram, c->r[30] + 0xffff9af0u);
    c->r[5] = mem_r32(ram, c->r[20] + 0x00000000u);
    c->r[6] = c->r[16] + 0u;
    { c->r[31] = 0x08a01d2cu; c->r[7] = c->r[17] + 0u; func_08a029ec(c, ram); }
    { c->r[3] = 0u + 0u; goto L_08a01c7c; }
    return; /* fell out of func_08a01c08 */
}

/* func_08a02fcc  0x08a02fcc..0x08a02ff0  36 bytes, source=fde */
void func_08a02fcc(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08a02fccu);
    c->r[5] = c->r[4] + 0u;
    c->r[4] = 0x08ba0000u;
    c->r[29] = c->r[29] + 0xfffffff0u;
    mem_w32(ram, c->r[29] + 0x00000000u, c->r[31]);
    { c->r[31] = 0x08a02fe4u; c->r[4] = c->r[4] + 0xffff9af8u; func_08a02d9c(c, ram); }
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000000u);
    { c->r[29] = c->r[29] + 0x00000010u; return; }
    return; /* fell out of func_08a02fcc */
}

/* func_08a03a98  0x08a03a98..0x08a03b20  136 bytes, source=sweep */
void func_08a03a98(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08a03a98u);
    c->r[2] = 0x08a50000u;
    c->f[0] = mem_rf32(ram, c->r[2] + 0xffffd3acu);
    c->r[4] = 0x08a50000u;
    c->f[0] = c->f[12] * c->f[0];
    c->f[4] = u2f((u32)alx_cvt_w_s(c, c->f[0]));
    c->r[2] = f2u(c->f[4]);
    c->f[0] = u2f(c->r[2]);
    c->r[3] = c->r[2] << 1;
    c->r[3] = c->r[3] + c->r[2];
    c->f[1] = (f32)(s32)f2u(c->f[0]);
    c->f[0] = mem_rf32(ram, c->r[4] + 0xffffd3b0u);
    c->r[2] = 0x08a50000u;
    c->r[2] = c->r[2] + 0xffffd6c0u;
    c->f[1] = c->f[1] * c->f[0];
    c->r[3] = c->r[3] << 3;
    c->r[3] = c->r[3] + c->r[2];
    c->f[0] = mem_rf32(ram, c->r[3] + 0x00000000u);
    c->f[12] = c->f[12] - c->f[1];
    c->f[1] = mem_rf32(ram, c->r[3] + 0x00000004u);
    c->f[2] = mem_rf32(ram, c->r[3] + 0x00000008u);
    c->f[3] = mem_rf32(ram, c->r[3] + 0x0000000cu);
    c->f[0] = c->f[0] * c->f[12];
    c->f[4] = mem_rf32(ram, c->r[3] + 0x00000010u);
    c->f[5] = mem_rf32(ram, c->r[3] + 0x00000014u);
    c->f[0] = c->f[0] + c->f[1];
    c->f[0] = c->f[0] * c->f[12];
    c->f[0] = c->f[0] + c->f[2];
    c->f[0] = c->f[0] * c->f[12];
    c->f[0] = c->f[0] + c->f[3];
    c->f[0] = c->f[0] * c->f[12];
    c->f[0] = c->f[0] + c->f[4];
    c->f[0] = c->f[0] * c->f[12];
    { c->f[0] = c->f[0] + c->f[5]; return; }
    return; /* fell out of func_08a03a98 */
}

/* func_08a05604  0x08a05604..0x08a05918  788 bytes, source=sweep */
void func_08a05604(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08a05604u);
    c->r[7] = 0u + 0x0000004cu;
    alx_mult(c, c->r[4], c->r[7]);
    c->r[29] = c->r[29] + 0xfffffff0u;
    c->r[3] = 0x08ba0000u;
    mem_w32(ram, c->r[29] + 0x00000000u, c->r[16]);
    c->r[16] = c->r[5] + 0u;
    c->r[5] = 0x08ba0000u;
    c->r[25] = c->lo;
    mem_w32(ram, c->r[29] + 0x00000004u, c->r[17]);
    c->r[4] = c->r[5] + 0xffffacd8u;
    c->r[17] = c->r[3] + 0xffffaa78u;
    c->r[3] = 0x81020000u;
    mem_w32(ram, c->r[29] + 0x0000000cu, c->r[19]);
    c->r[13] = c->r[25] + c->r[4];
    c->r[19] = c->r[6] + 0u;
    mem_w32(ram, c->r[29] + 0x00000008u, c->r[18]);
    c->r[15] = 0u + 0u;
    c->r[11] = c->r[25] + c->r[17];
    c->r[24] = c->r[3] | 0x0409u;
    c->r[14] = c->r[6] + 0u;
    c->r[18] = 0x00100000u;
L_08a05658:
    c->r[6] = mem_r32(ram, c->r[11] + 0x00000018u);
    c->r[8] = c->r[6] & c->r[18];
    { int _c = (c->r[8] == 0u); c->r[10] = 0u + 0x0000007fu; if (_c) goto L_08a05910; }
    c->r[4] = mem_r32(ram, c->r[11] + 0x0000003cu);
    c->r[5] = mem_r32(ram, c->r[11] + 0x00000040u);
    if (c->r[4] == 0u) { recomp_break(c, ram, 0x08a05674u, 0x7u); goto L_08a05678; }
L_08a05678:
    c->r[12] = c->r[4] - c->r[5];
    c->r[10] = c->r[12] << 7;
    c->r[9] = c->r[10] - c->r[12];
    alx_div(c, c->r[9], c->r[4]);
    c->r[2] = c->lo;
    { int _c = ((s32)c->r[2] < 0); mem_w32(ram, c->r[11] + 0x00000038u, c->r[2]); if (_c) goto L_08a05908; }
L_08a05694:
    c->r[3] = c->r[5] + 0x00000001u;
    c->r[5] = ((s32)c->r[3] < (s32)c->r[4]) ? 1u : 0u;
    { int _c = (c->r[5] != 0u); mem_w32(ram, c->r[11] + 0x00000040u, c->r[3]); if (_c) goto L_08a05708; }
    c->r[10] = c->r[6] + 0u;
    c->r[10] = alx_ins(c->r[10], 0u, 20u, 20u);
    c->r[4] = 0x00010000u;
    c->r[6] = c->r[10] & c->r[4];
    mem_w32(ram, c->r[11] + 0x00000018u, c->r[10]);
    { int _c = (c->r[6] == 0u); mem_w32(ram, c->r[11] + 0x00000040u, 0u); if (_c) goto L_08a0589c; }
    c->r[3] = mem_r32(ram, c->r[13] + 0x0000001cu);
    c->r[4] = mem_r32(ram, c->r[13] + 0x00000020u);
    c->r[5] = mem_r32(ram, c->r[13] + 0x00000008u);
    c->r[6] = mem_r32(ram, c->r[13] + 0x0000000cu);
    c->r[7] = mem_r32(ram, c->r[13] + 0x00000030u);
    c->r[8] = mem_r32(ram, c->r[13] + 0x00000034u);
    c->r[9] = mem_r32(ram, c->r[13] + 0x00000028u);
    c->r[12] = mem_r32(ram, c->r[13] + 0x0000002cu);
    c->r[10] = alx_ins(c->r[10], 0u, 16u, 16u);
    mem_w32(ram, c->r[11] + 0x00000018u, c->r[10]);
    mem_w32(ram, c->r[11] + 0x0000001cu, c->r[3]);
    mem_w32(ram, c->r[11] + 0x00000020u, c->r[4]);
    mem_w32(ram, c->r[11] + 0x00000008u, c->r[5]);
    mem_w32(ram, c->r[11] + 0x0000000cu, c->r[6]);
    mem_w32(ram, c->r[11] + 0x00000030u, c->r[7]);
    mem_w32(ram, c->r[11] + 0x00000034u, c->r[8]);
    mem_w32(ram, c->r[11] + 0x00000028u, c->r[9]);
    mem_w32(ram, c->r[11] + 0x0000002cu, c->r[12]);
L_08a05708:
    c->r[4] = c->r[25] + c->r[17];
L_08a0570c:
    c->r[3] = mem_r32(ram, c->r[4] + 0x00000018u);
    c->r[7] = c->r[3] & 0x0100u;
    if (c->r[7] == 0u) { c->r[5] = mem_r32(ram, c->r[4] + 0x00000038u); goto L_08a0572c; }
    c->r[6] = c->r[3] & 0x0200u;
    if (c->r[6] != 0u) { c->r[10] = mem_r32(ram, c->r[4] + 0x00000038u); goto L_08a05810; }
    c->r[5] = mem_r32(ram, c->r[4] + 0x00000038u);
L_08a0572c:
    c->r[12] = mem_r32(ram, c->r[4] + 0x0000000cu);
    c->r[10] = mem_r32(ram, c->r[4] + 0x00000008u);
    c->r[9] = (u32)(s32)(s16)mem_r16(ram, c->r[14] + 0x00000000u);
    alx_mult(c, c->r[12], c->r[5]);
    c->r[12] = c->r[15] << 2;
    c->r[3] = c->lo;
    alx_mult(c, c->r[10], c->r[5]);
    c->r[5] = (u32)((s32)c->r[3] >> 31);
    c->r[2] = c->lo;
    alx_mult(c, c->r[2], c->r[24]);
    c->r[6] = (u32)((s32)c->r[2] >> 31);
    c->r[7] = c->hi;
    alx_mult(c, c->r[3], c->r[24]);
    c->r[8] = c->r[7] + c->r[2];
    c->r[7] = (u32)((s32)c->r[8] >> 6);
    c->r[4] = c->r[7] - c->r[6];
    c->r[10] = c->hi;
    c->r[8] = c->r[10] + c->r[3];
    c->r[10] = (u32)((s32)c->r[8] >> 6);
    c->r[2] = c->r[10] - c->r[5];
    alx_mult(c, c->r[2], c->r[9]);
    c->r[8] = c->lo;
    alx_mult(c, c->r[4], c->r[9]);
    c->r[6] = (u32)((s32)c->r[8] >> 31);
    c->r[7] = c->r[6] >> 20;
    c->r[10] = c->r[8] + c->r[7];
    c->r[8] = (u32)((s32)c->r[10] >> 12);
    c->r[3] = c->lo;
    c->r[9] = (u32)((s32)c->r[3] >> 31);
    c->r[5] = c->r[9] >> 20;
    c->r[4] = c->r[3] + c->r[5];
    c->r[10] = (u32)((s32)c->r[4] >> 12);
L_08a057ac:
    c->r[5] = c->r[12] + c->r[16];
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[5] + 0x00000000u);
    c->r[4] = (u32)(s32)(s16)mem_r16(ram, c->r[5] + 0x00000002u);
    c->r[3] = 0u + 0x00007fffu;
    c->r[6] = c->r[2] + c->r[10];
    c->r[2] = c->r[4] + c->r[8];
    c->r[10] = alx_min(c->r[3], c->r[6]);
    c->r[8] = alx_min(c->r[3], c->r[2]);
    c->r[9] = 0u + 0xffff8000u;
    c->r[12] = ((s32)c->r[10] < (s32)0xffff8000u) ? 1u : 0u;
    c->r[15] = c->r[15] + 0x00000001u;
    c->r[6] = ((s32)c->r[8] < (s32)0xffff8000u) ? 1u : 0u;
    if (c->r[12] != 0u) c->r[10] = c->r[9];
    if (c->r[6] != 0u) c->r[8] = c->r[9];
    c->r[12] = ((s32)c->r[15] < (s32)0x0000001cu) ? 1u : 0u;
    mem_w16(ram, c->r[5] + 0x00000000u, c->r[10]);
    c->r[14] = c->r[14] + 0x00000002u;
    { int _c = (c->r[12] != 0u); mem_w16(ram, c->r[5] + 0x00000002u, c->r[8]); if (_c) goto L_08a05658; }
    c->r[19] = mem_r32(ram, c->r[29] + 0x0000000cu);
    c->r[18] = mem_r32(ram, c->r[29] + 0x00000008u);
    c->r[17] = mem_r32(ram, c->r[29] + 0x00000004u);
    c->r[16] = mem_r32(ram, c->r[29] + 0x00000000u);
    { c->r[29] = c->r[29] + 0x00000010u; return; }
L_08a05810:
    c->r[7] = mem_r32(ram, c->r[4] + 0x0000000cu);
    c->r[9] = mem_r32(ram, c->r[4] + 0x00000008u);
    c->r[12] = c->r[15] << 2;
    alx_mult(c, c->r[7], c->r[10]);
    c->r[3] = c->r[12] + c->r[19];
    c->r[5] = (u32)(s32)(s16)mem_r16(ram, c->r[3] + 0x00000000u);
    c->r[7] = (u32)(s32)(s16)mem_r16(ram, c->r[3] + 0x00000002u);
    c->r[6] = c->lo;
    alx_mult(c, c->r[9], c->r[10]);
    c->r[10] = (u32)((s32)c->r[6] >> 31);
    c->r[4] = c->lo;
    alx_mult(c, c->r[4], c->r[24]);
    c->r[3] = (u32)((s32)c->r[4] >> 31);
    c->r[8] = c->hi;
    alx_mult(c, c->r[6], c->r[24]);
    c->r[2] = c->r[8] + c->r[4];
    c->r[8] = (u32)((s32)c->r[2] >> 6);
    c->r[4] = c->r[8] - c->r[3];
    c->r[9] = c->hi;
    alx_mult(c, c->r[4], c->r[5]);
    c->r[8] = c->r[9] + c->r[6];
    c->r[9] = (u32)((s32)c->r[8] >> 6);
    c->r[2] = c->r[9] - c->r[10];
    c->r[10] = c->lo;
    alx_mult(c, c->r[2], c->r[7]);
    c->r[5] = (u32)((s32)c->r[10] >> 31);
    c->r[7] = c->r[5] >> 20;
    c->r[8] = c->r[10] + c->r[7];
    c->r[10] = (u32)((s32)c->r[8] >> 12);
    c->r[4] = c->lo;
    c->r[6] = (u32)((s32)c->r[4] >> 31);
    c->r[3] = c->r[6] >> 20;
    c->r[9] = c->r[4] + c->r[3];
    { c->r[8] = (u32)((s32)c->r[9] >> 12); goto L_08a057ac; }
L_08a0589c:
    c->r[9] = 0x00020000u;
    c->r[12] = c->r[10] & c->r[9];
    { int _c = (c->r[12] == 0u); c->r[9] = 0x00040000u; if (_c) goto L_08a058e8; }
    c->r[3] = mem_r32(ram, c->r[13] + 0x0000001cu);
    c->r[4] = mem_r32(ram, c->r[13] + 0x00000020u);
    c->r[5] = mem_r32(ram, c->r[13] + 0x00000030u);
    c->r[6] = mem_r32(ram, c->r[13] + 0x00000034u);
    c->r[7] = mem_r32(ram, c->r[13] + 0x00000028u);
    c->r[8] = mem_r32(ram, c->r[13] + 0x0000002cu);
    c->r[10] = alx_ins(c->r[10], 0u, 17u, 17u);
    mem_w32(ram, c->r[11] + 0x00000018u, c->r[10]);
    mem_w32(ram, c->r[11] + 0x0000001cu, c->r[3]);
    mem_w32(ram, c->r[11] + 0x00000020u, c->r[4]);
    mem_w32(ram, c->r[11] + 0x00000030u, c->r[5]);
    mem_w32(ram, c->r[11] + 0x00000034u, c->r[6]);
    mem_w32(ram, c->r[11] + 0x00000028u, c->r[7]);
    { mem_w32(ram, c->r[11] + 0x0000002cu, c->r[8]); goto L_08a05708; }
L_08a058e8:
    c->r[12] = c->r[10] & c->r[9];
    { int _c = (c->r[12] == 0u); c->r[4] = c->r[25] + c->r[17]; if (_c) goto L_08a0570c; }
    c->r[8] = mem_r32(ram, c->r[13] + 0x0000001cu);
    c->r[10] = alx_ins(c->r[10], 0u, 18u, 18u);
    mem_w32(ram, c->r[11] + 0x00000018u, c->r[10]);
    { mem_w32(ram, c->r[11] + 0x0000001cu, c->r[8]); goto L_08a0570c; }
L_08a05908:
    { mem_w32(ram, c->r[11] + 0x00000038u, 0u); goto L_08a05694; }
L_08a05910:
    { mem_w32(ram, c->r[11] + 0x00000038u, c->r[10]); goto L_08a05708; }
    return; /* fell out of func_08a05604 */
}

/* func_08a06664  0x08a06664..0x08a06734  208 bytes, source=sweep */
void func_08a06664(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08a06664u);
    c->r[29] = c->r[29] + 0xffffffc0u;
    mem_w32(ram, c->r[29] + 0x00000024u, c->r[17]);
    c->r[17] = c->r[5] + 0u;
    c->r[5] = (c->r[5] < 0x00000002u) ? 1u : 0u;
    mem_w32(ram, c->r[29] + 0x0000002cu, c->r[19]);
    c->r[3] = 0u + 0u;
    c->r[17] = c->r[17] + 0xfffffffeu;
    mem_w32(ram, c->r[29] + 0x00000028u, c->r[18]);
    c->r[19] = 0u + 0xffffffffu;
    c->r[18] = 0u + 0u;
    mem_w32(ram, c->r[29] + 0x00000020u, c->r[16]);
    c->r[16] = c->r[4] + 0u;
    mem_w32(ram, c->r[29] + 0x00000030u, c->r[31]);
    { int _c = (c->r[5] == 0u); mem_w32(ram, c->r[29] + 0x00000014u, c->r[6]); if (_c) goto L_08a066c0; }
L_08a066a0:
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000030u);
    c->r[19] = mem_r32(ram, c->r[29] + 0x0000002cu);
    c->r[18] = mem_r32(ram, c->r[29] + 0x00000028u);
    c->r[17] = mem_r32(ram, c->r[29] + 0x00000024u);
    c->r[16] = mem_r32(ram, c->r[29] + 0x00000020u);
    c->r[2] = c->r[3] + 0u;
    { c->r[29] = c->r[29] + 0x00000040u; return; }
L_08a066c0:
    { c->r[31] = 0x08a066c8u; c->r[4] = c->r[29] + 0x00000014u; func_08a06224(c, ram); }
    { int _c = (c->r[2] == 0u); c->r[5] = c->r[2] + 0u; if (_c) goto L_08a06728; }
    c->r[4] = c->r[29] + 0x00000010u;
    { c->r[31] = 0x08a066dcu; mem_w32(ram, c->r[29] + 0x00000010u, c->r[29]); func_08a061b0(c, ram); }
    c->r[3] = mem_r32(ram, c->r[29] + 0x00000010u);
    c->r[4] = c->r[3] - c->r[29];
    c->r[3] = (u32)((s32)c->r[4] >> 1);
    c->r[4] = c->r[3] << 1;
    c->r[5] = (c->r[17] < c->r[4]) ? 1u : 0u;
    { int _c = (c->r[5] != 0u); c->r[17] = c->r[17] - c->r[4]; if (_c) goto L_08a06728; }
    c->r[3] = c->r[3] + 0xffffffffu;
    { int _c = (c->r[3] == c->r[19]); c->r[4] = c->r[29] + 0u; if (_c) goto L_08a06720; }
    c->r[5] = 0u + 0xffffffffu;
L_08a06708:
    c->r[6] = mem_r16(ram, c->r[4] + 0x00000000u);
    c->r[3] = c->r[3] + 0xffffffffu;
    c->r[4] = c->r[4] + 0x00000002u;
    mem_w16(ram, c->r[16] + 0x00000000u, c->r[6]);
    { int _c = (c->r[3] != c->r[5]); c->r[16] = c->r[16] + 0x00000002u; if (_c) goto L_08a06708; }
L_08a06720:
    { c->r[18] = c->r[18] + 0x00000001u; goto L_08a066c0; }
L_08a06728:
    mem_w16(ram, c->r[16] + 0x00000000u, 0u);
    { c->r[3] = c->r[18] + 0u; goto L_08a066a0; }
    return; /* fell out of func_08a06664 */
}

/* func_08a0a490  0x08a0a490..0x08a0a6a8  536 bytes, source=residue */
void func_08a0a490(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08a0a490u);
    c->r[29] = c->r[29] + 0xffffffd0u;
    mem_w32(ram, c->r[29] + 0x00000024u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000020u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_08a0a4f0; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_08a0a4f0; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000001cu);
    { int _c = (c->r[2] == 0u); if (_c) goto L_08a0a4f0; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000020u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_08a0a4f0; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000024u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_08a0a4fc; }
L_08a0a4f0:
    c->r[2] = 0u + 0xfffffffeu;
    { mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]); goto L_08a0a690; }
L_08a0a4fc:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000001cu);
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000020u);
    c->r[4] = mem_r32(ram, c->r[3] + 0x00000028u);
    c->r[5] = 0u + 0x00000001u;
    { u32 _t = c->r[2]; c->r[31] = 0x08a0a524u; c->r[6] = 0u + 0x00001ba8u; recomp_call_indirect(c, ram, 0x08a0a51cu, _t); }
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    { int _c = (c->r[2] != 0u); if (_c) goto L_08a0a540; }
    c->r[2] = 0u + 0xfffffffcu;
    { mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]); goto L_08a0a690; }
L_08a0a540:
    mem_w32(ram, c->r[30] + 0x00000010u, 0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000002cu);
    { int _c = (c->r[2] == 0u); if (_c) goto L_08a0a5b4; }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[3] = 0u + 0x00000001u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000001cu);
    c->r[2] = c->r[3] << (c->r[2] & 31u);
    c->r[3] = mem_r32(ram, c->r[4] + 0x00000020u);
    c->r[4] = mem_r32(ram, c->r[5] + 0x00000028u);
    c->r[5] = c->r[2] + 0u;
    { u32 _t = c->r[3]; c->r[31] = 0x08a0a580u; c->r[6] = 0u + 0x00000001u; recomp_call_indirect(c, ram, 0x08a0a578u, _t); }
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_08a0a5b4; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000024u);
    c->r[4] = mem_r32(ram, c->r[3] + 0x00000028u);
    { u32 _t = c->r[2]; c->r[31] = 0x08a0a5a8u; c->r[5] = mem_r32(ram, c->r[30] + 0x0000000cu); recomp_call_indirect(c, ram, 0x08a0a5a0u, _t); }
    c->r[2] = 0u + 0xfffffffcu;
    { mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]); goto L_08a0a690; }
L_08a0a5b4:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[4] = c->r[2] + 0u;
    c->r[5] = c->r[3] + 0u;
    { c->r[31] = 0x08a0a5ccu; c->r[6] = 0u + 0x00000038u; func_08a19db8(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[4] = c->r[2] + 0u;
    c->r[5] = c->r[3] + 0u;
    { c->r[31] = 0x08a0a5e4u; c->r[6] = 0u + 0x00001ba8u; func_08a19db8(c, ram); }
    c->r[4] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x00000044u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[3] = c->r[3] - c->r[2];
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[3] + c->r[2];
    mem_w32(ram, c->r[4] + 0x00000044u, c->r[2]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x00000048u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[3] = c->r[3] - c->r[2];
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[3] + c->r[2];
    mem_w32(ram, c->r[4] + 0x00000048u, c->r[2]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x00000064u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[3] = c->r[3] - c->r[2];
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[3] + c->r[2];
    mem_w32(ram, c->r[4] + 0x00000064u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_08a0a674; }
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[3] = 0u + 0x00000001u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000001cu);
    c->r[2] = c->r[3] << (c->r[2] & 31u);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[5] = mem_r32(ram, c->r[5] + 0x0000002cu);
    { c->r[31] = 0x08a0a674u; c->r[6] = c->r[2] + 0u; func_08a19db8(c, ram); }
L_08a0a674:
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    mem_w32(ram, c->r[3] + 0x0000002cu, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    mem_w32(ram, c->r[3] + 0x0000001cu, c->r[2]);
    mem_w32(ram, c->r[30] + 0x00000014u, 0u);
L_08a0a690:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000024u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000020u);
    { c->r[29] = c->r[29] + 0x00000030u; return; }
    return; /* fell out of func_08a0a490 */
}

/* func_08a0de2c  0x08a0de2c..0x08a0de80  84 bytes, source=fde */
void func_08a0de2c(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08a0de2cu);
    c->r[29] = c->r[29] + 0xfffffff0u;
    c->r[4] = (c->r[4] < 0x00000002u) ? 1u : 0u;
    mem_w32(ram, c->r[29] + 0x00000004u, c->r[31]);
    c->r[2] = c->r[5] + 0xffffffd0u;
    { int _c = (c->r[4] == 0u); mem_w32(ram, c->r[29] + 0x00000000u, c->r[16]); if (_c) goto L_08a0de78; }
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000004u);
    { int _c = (c->r[2] != 0u); c->r[16] = c->r[5] + 0x00000020u; if (_c) goto L_08a0de68; }
L_08a0de50:
    { c->r[31] = 0x08a0de58u; c->r[4] = c->r[16] + 0u; func_08a0e0fc(c, ram); }
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000004u);
    c->r[16] = mem_r32(ram, c->r[29] + 0x00000000u);
    { c->r[29] = c->r[29] + 0x00000010u; return; }
L_08a0de68:
    { u32 _t = c->r[2]; c->r[31] = 0x08a0de70u; c->r[4] = c->r[16] + 0u; recomp_call_indirect(c, ram, 0x08a0de68u, _t); }
    { goto L_08a0de50; }
L_08a0de78:
    { c->r[31] = 0x08a0de80u; c->r[4] = mem_r32(ram, c->r[2] + 0x0000000cu); func_08a0dd9c(c, ram); }
    return; /* fell out of func_08a0de2c */
}

/* func_08a0e654  0x08a0e654..0x08a0e67c  40 bytes, source=indirect */
void func_08a0e654(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08a0e654u);
    c->r[2] = 0x08a50000u;
    c->r[2] = c->r[2] + 0x00000630u;
    mem_w32(ram, c->r[4] + 0x00000000u, c->r[2]);
    c->r[29] = c->r[29] + 0xfffffff0u;
    mem_w32(ram, c->r[29] + 0x00000000u, c->r[31]);
    { c->r[31] = 0x08a0e670u; func_08a0e308(c, ram); }
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000000u);
    { c->r[29] = c->r[29] + 0x00000010u; return; }
    return; /* fell out of func_08a0e654 */
}

/* func_08a0f8a8  0x08a0f8a8..0x08a0fa04  348 bytes, source=sweep */
void func_08a0f8a8(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08a0f8a8u);
    c->r[29] = c->r[29] + 0xffffffb0u;
    mem_w32(ram, c->r[29] + 0x00000044u, c->r[21]);
    c->r[21] = 0x08a50000u;
    mem_w32(ram, c->r[29] + 0x00000040u, c->r[20]);
    mem_w32(ram, c->r[29] + 0x0000003cu, c->r[19]);
    mem_w32(ram, c->r[29] + 0x00000038u, c->r[18]);
    mem_w32(ram, c->r[29] + 0x00000034u, c->r[17]);
    c->r[17] = c->r[5] + 0u;
    mem_w32(ram, c->r[29] + 0x00000030u, c->r[16]);
    mem_w32(ram, c->r[29] + 0x00000048u, c->r[31]);
    { c->r[31] = 0x08a0f8d8u; c->r[16] = c->r[4] + 0u; func_08a105e4(c, ram); }
    c->r[18] = c->r[2] + 0u;
    c->r[20] = mem_r32(ram, c->r[21] + 0x00000fa8u);
    c->r[2] = 0u + 0xffffffffu;
    { int _c = (c->r[20] == c->r[2]); c->r[19] = c->r[3] + 0u; if (_c) goto L_08a0f900; }
    c->r[4] = c->r[16] + 0u;
    { c->r[31] = 0x08a0f8f8u; c->r[5] = c->r[17] + 0u; func_08a12b2c(c, ram); }
    { int _c = (c->r[2] == 0u); c->r[4] = c->r[16] + 0u; if (_c) goto L_08a0f934; }
L_08a0f900:
    c->r[4] = c->r[18] + 0u;
    c->r[5] = c->r[19] + 0u;
L_08a0f908:
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000048u);
L_08a0f90c:
    c->r[21] = mem_r32(ram, c->r[29] + 0x00000044u);
    c->r[20] = mem_r32(ram, c->r[29] + 0x00000040u);
    c->r[19] = mem_r32(ram, c->r[29] + 0x0000003cu);
    c->r[18] = mem_r32(ram, c->r[29] + 0x00000038u);
    c->r[17] = mem_r32(ram, c->r[29] + 0x00000034u);
    c->r[16] = mem_r32(ram, c->r[29] + 0x00000030u);
    c->r[2] = c->r[4] + 0u;
    c->r[3] = c->r[5] + 0u;
    { c->r[29] = c->r[29] + 0x00000050u; return; }
L_08a0f934:
    c->r[6] = 0u + 0u;
    c->r[7] = 0u + 0u;
    { c->r[31] = 0x08a0f944u; c->r[5] = c->r[17] + 0u; func_08a14324(c, ram); }
    c->r[4] = c->r[18] + 0u;
    { int _c = ((s32)c->r[2] >= 0); c->r[5] = c->r[19] + 0u; if (_c) goto L_08a0f908; }
    c->r[2] = 0x08a50000u;
    c->r[3] = 0u + 0x00000001u;
    c->r[2] = c->r[2] + 0x00000770u;
    mem_w32(ram, c->r[29] + 0x00000000u, c->r[3]);
    mem_w32(ram, c->r[29] + 0x00000004u, c->r[2]);
    c->r[2] = 0u + 0u;
    c->r[3] = 0u + 0u;
    mem_w32(ram, c->r[29] + 0x00000008u, c->r[16]);
    mem_w32(ram, c->r[29] + 0x0000000cu, c->r[17]);
    mem_w32(ram, c->r[29] + 0x00000020u, 0u);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[16]);
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[17]);
    { int _c = (c->r[20] == 0u); if (_c) goto L_08a0f998; }
    c->r[2] = 0x08a50000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000778u);
    c->r[3] = 0x08a50000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x0000077cu);
L_08a0f998:
    mem_w32(ram, c->r[29] + 0x00000018u, c->r[2]);
    mem_w32(ram, c->r[29] + 0x0000001cu, c->r[3]);
    c->r[2] = 0u + 0x00000002u;
    c->r[3] = mem_r32(ram, c->r[21] + 0x00000fa8u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_08a0f9f0; }
    { c->r[31] = 0x08a0f9b8u; c->r[4] = c->r[29] + 0u; func_08a12b50(c, ram); }
    { int _c = (c->r[2] == 0u); if (_c) goto L_08a0f9f0; }
L_08a0f9c0:
    c->r[2] = mem_r32(ram, c->r[29] + 0x00000020u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_08a0f9dc; }
L_08a0f9cc:
    c->r[4] = mem_r32(ram, c->r[29] + 0x00000018u);
    c->r[5] = mem_r32(ram, c->r[29] + 0x0000001cu);
    { c->r[31] = mem_r32(ram, c->r[29] + 0x00000048u); goto L_08a0f90c; }
L_08a0f9dc:
    { c->r[31] = 0x08a0f9e4u; func_08a19214(c, ram); }
    c->r[3] = mem_r32(ram, c->r[29] + 0x00000020u);
    { mem_w32(ram, c->r[2] + 0x00000000u, c->r[3]); goto L_08a0f9cc; }
L_08a0f9f0:
    { c->r[31] = 0x08a0f9f8u; func_08a19214(c, ram); }
    c->r[3] = 0u + 0x00000021u;
    { mem_w32(ram, c->r[2] + 0x00000000u, c->r[3]); goto L_08a0f9c0; }
    return; /* fell out of func_08a0f8a8 */
}

/* func_08a13af4  0x08a13af4..0x08a13b68  116 bytes, source=sweep */
void func_08a13af4(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08a13af4u);
    c->r[29] = c->r[29] + 0xffffff70u;
    c->r[3] = c->r[5] + 0u;
    c->r[2] = c->r[4] + 0u;
    mem_w32(ram, c->r[29] + 0x00000080u, c->r[16]);
    c->r[4] = c->r[29] + 0x00000060u;
    c->r[16] = c->r[29] + 0x00000020u;
    mem_w32(ram, c->r[29] + 0x00000084u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000060u, c->r[2]);
    mem_w32(ram, c->r[29] + 0x00000064u, c->r[3]);
    mem_w32(ram, c->r[29] + 0x00000070u, c->r[6]);
    mem_w32(ram, c->r[29] + 0x00000074u, c->r[7]);
    { c->r[31] = 0x08a13b28u; c->r[5] = c->r[29] + 0u; func_08a18664(c, ram); }
    c->r[4] = c->r[29] + 0x00000070u;
    { c->r[31] = 0x08a13b34u; c->r[5] = c->r[16] + 0u; func_08a18664(c, ram); }
    c->r[2] = mem_r32(ram, c->r[29] + 0x00000024u);
    c->r[5] = c->r[16] + 0u;
    c->r[6] = c->r[29] + 0x00000040u;
    c->r[4] = c->r[29] + 0u;
    c->r[2] = c->r[2] ^ 0x0001u;
    { c->r[31] = 0x08a13b50u; mem_w32(ram, c->r[29] + 0x00000024u, c->r[2]); func_08a13744(c, ram); }
    { c->r[31] = 0x08a13b58u; c->r[4] = c->r[2] + 0u; func_08a183fc(c, ram); }
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000084u);
    c->r[16] = mem_r32(ram, c->r[29] + 0x00000080u);
    { c->r[29] = c->r[29] + 0x00000090u; return; }
    return; /* fell out of func_08a13af4 */
}

/* func_08a15df4  0x08a15df4..0x08a15ec8  212 bytes, source=fde */
void func_08a15df4(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08a15df4u);
    c->r[29] = c->r[29] + 0xfffff910u;
    mem_w32(ram, c->r[29] + 0x000006e4u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x000006d4u, c->r[17]);
    mem_w32(ram, c->r[29] + 0x000006e0u, c->r[20]);
    c->r[20] = 0u + 0x00000007u;
    mem_w32(ram, c->r[29] + 0x000006dcu, c->r[19]);
    c->r[19] = 0u + 0x00000008u;
    mem_w32(ram, c->r[29] + 0x000006d8u, c->r[18]);
    c->r[18] = c->r[4] + 0u;
    mem_w32(ram, c->r[29] + 0x000006d0u, c->r[16]);
    c->r[16] = c->r[5] + 0u;
    c->r[4] = c->r[16] + 0u;
L_08a15e24:
    { c->r[31] = 0x08a15e2cu; c->r[5] = c->r[29] + 0u; func_08a154c8(c, ram); }
    c->r[6] = c->r[2] + 0u;
    c->r[3] = mem_r32(ram, c->r[18] + 0x00000010u);
    c->r[2] = mem_r32(ram, c->r[16] + 0x00000350u);
    c->r[17] = 0u + 0x00000004u;
    c->r[8] = c->r[18] + 0u;
    c->r[2] = c->r[2] ^ c->r[3];
    if (c->r[2] != 0u) c->r[17] = 0u;
    c->r[9] = c->r[16] + 0u;
    c->r[4] = 0u + 0x00000001u;
    c->r[5] = c->r[17] | 0x0002u;
    { int _c = (c->r[6] != 0u); c->r[2] = 0u + 0x00000002u; if (_c) goto L_08a15ea0; }
    c->r[2] = mem_r32(ram, c->r[29] + 0x000006b0u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_08a15e84; }
L_08a15e68:
    c->r[4] = c->r[16] + 0u;
    { int _c = (c->r[17] != 0u); c->r[5] = c->r[29] + 0u; if (_c) goto L_08a15ec0; }
    { c->r[31] = 0x08a15e7cu; func_08a158f0(c, ram); }
    { c->r[4] = c->r[16] + 0u; goto L_08a15e24; }
L_08a15e84:
    c->r[6] = mem_r32(ram, c->r[18] + 0x00000000u);
    { u32 _t = c->r[2]; c->r[31] = 0x08a15e90u; c->r[7] = mem_r32(ram, c->r[18] + 0x00000004u); recomp_call_indirect(c, ram, 0x08a15e88u, _t); }
    { int _c = (c->r[2] == c->r[20]); c->r[6] = c->r[2] + 0u; if (_c) goto L_08a15ea0; }
    { int _c = (c->r[6] == c->r[19]); c->r[2] = 0u + 0x00000002u; if (_c) goto L_08a15e68; }
L_08a15ea0:
    c->r[31] = mem_r32(ram, c->r[29] + 0x000006e4u);
    c->r[20] = mem_r32(ram, c->r[29] + 0x000006e0u);
    c->r[19] = mem_r32(ram, c->r[29] + 0x000006dcu);
    c->r[18] = mem_r32(ram, c->r[29] + 0x000006d8u);
    c->r[17] = mem_r32(ram, c->r[29] + 0x000006d4u);
    c->r[16] = mem_r32(ram, c->r[29] + 0x000006d0u);
    { c->r[29] = c->r[29] + 0x000006f0u; return; }
L_08a15ec0:
    { c->r[31] = 0x08a15ec8u; func_08a19084(c, ram); }
    return; /* fell out of func_08a15df4 */
}

/* func_08a17660  0x08a17660..0x08a177b4  340 bytes, source=sweep */
void func_08a17660(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08a17660u);
    c->r[29] = c->r[29] + 0xffffffc0u;
    mem_w32(ram, c->r[29] + 0x00000028u, c->r[22]);
    c->r[22] = 0u + 0u;
    mem_w32(ram, c->r[29] + 0x00000024u, c->r[21]);
    c->r[21] = 0u + 0u;
    mem_w32(ram, c->r[29] + 0x00000020u, c->r[20]);
    c->r[20] = 0u + 0u;
    mem_w32(ram, c->r[29] + 0x0000001cu, c->r[19]);
    c->r[19] = 0u + 0u;
    mem_w32(ram, c->r[29] + 0x00000018u, c->r[18]);
    c->r[18] = c->r[4] + 0u;
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[16]);
    mem_w32(ram, c->r[29] + 0x00000034u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000030u, c->r[30]);
    mem_w32(ram, c->r[29] + 0x0000002cu, c->r[23]);
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[17]);
    c->r[2] = mem_r32(ram, c->r[5] + 0x00000000u);
    { int _c = (c->r[2] == 0u); c->r[16] = c->r[5] + 0u; if (_c) goto L_08a176d4; }
    c->r[30] = 0u + 0x000000ffu;
    c->r[23] = 0u + 0x00000001u;
L_08a176b4:
    c->r[2] = mem_r32(ram, c->r[16] + 0x00000004u);
    { int _c = (c->r[2] != 0u); c->r[2] = c->r[16] - c->r[2]; if (_c) goto L_08a17708; }
L_08a176c0:
    c->r[2] = mem_r32(ram, c->r[16] + 0x00000000u);
L_08a176c4:
    c->r[2] = c->r[16] + c->r[2];
    c->r[3] = mem_r32(ram, c->r[2] + 0x00000004u);
    { int _c = (c->r[3] != 0u); c->r[16] = c->r[2] + 0x00000004u; if (_c) goto L_08a176b4; }
L_08a176d4:
    c->r[2] = c->r[21] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000034u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000030u);
    c->r[23] = mem_r32(ram, c->r[29] + 0x0000002cu);
    c->r[22] = mem_r32(ram, c->r[29] + 0x00000028u);
    c->r[21] = mem_r32(ram, c->r[29] + 0x00000024u);
    c->r[20] = mem_r32(ram, c->r[29] + 0x00000020u);
    c->r[19] = mem_r32(ram, c->r[29] + 0x0000001cu);
    c->r[18] = mem_r32(ram, c->r[29] + 0x00000018u);
    c->r[17] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[16] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000040u; return; }
L_08a17708:
    c->r[2] = c->r[2] + 0x00000004u;
    { int _c = (c->r[2] == c->r[20]); c->r[17] = c->r[19] & 0x00ffu; if (_c) goto L_08a17754; }
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x08a17720u; c->r[20] = c->r[2] + 0u; func_08a17160(c, ram); }
    c->r[17] = c->r[2] & 0x00ffu;
    c->r[4] = c->r[17] + 0u;
    c->r[5] = c->r[18] + 0u;
    { c->r[31] = 0x08a17734u; c->r[19] = c->r[2] + 0u; func_08a170ec(c, ram); }
    c->r[22] = c->r[2] + 0u;
    c->r[2] = mem_r32(ram, c->r[18] + 0x00000010u);
    c->r[3] = alx_ext(c->r[2], 3u, 7u);
    if (c->r[3] == c->r[30]) { c->r[2] = alx_ins(c->r[2], c->r[19], 3u, 10u); goto L_08a17750; }
    { int _c = (c->r[3] == c->r[19]); c->r[2] = c->r[2] | 0x0004u; if (_c) goto L_08a17754; }
L_08a17750:
    mem_w32(ram, c->r[18] + 0x00000010u, c->r[2]);
L_08a17754:
    c->r[6] = c->r[16] + 0x00000008u;
    c->r[5] = c->r[22] + 0u;
    c->r[7] = c->r[29] + 0u;
    { c->r[31] = 0x08a17768u; c->r[4] = c->r[17] + 0u; func_08a16cd0(c, ram); }
    { c->r[31] = 0x08a17770u; c->r[4] = c->r[17] + 0u; func_08a16bd4(c, ram); }
    c->r[4] = c->r[2] + 0u;
    c->r[2] = c->r[2] << 3;
    c->r[2] = c->r[23] << (c->r[2] & 31u);
    c->r[3] = (c->r[4] < 0x00000004u) ? 1u : 0u;
    { int _c = (c->r[3] != 0u); c->r[4] = c->r[2] + 0xffffffffu; if (_c) goto L_08a1778c; }
    c->r[4] = 0u + 0xffffffffu;
L_08a1778c:
    c->r[3] = mem_r32(ram, c->r[29] + 0x00000000u);
    c->r[2] = c->r[3] & c->r[4];
    if (c->r[2] == 0u) { c->r[2] = mem_r32(ram, c->r[16] + 0x00000000u); goto L_08a176c4; }
    c->r[2] = mem_r32(ram, c->r[18] + 0x00000000u);
    c->r[2] = (c->r[3] < c->r[2]) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); c->r[21] = c->r[21] + 0x00000001u; if (_c) goto L_08a176c0; }
    { mem_w32(ram, c->r[18] + 0x00000000u, c->r[3]); goto L_08a176c0; }
    return; /* fell out of func_08a17660 */
}

/* func_08a18fd4  0x08a18fd4..0x08a19010  60 bytes, source=indirect */
void func_08a18fd4(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08a18fd4u);
    c->r[29] = c->r[29] + 0xfffffff0u;
    mem_w32(ram, c->r[29] + 0x00000000u, c->r[16]);
    c->r[16] = 0x08ba0000u;
    c->r[3] = mem_r32(ram, c->r[16] + 0xffffff38u);
    mem_w32(ram, c->r[29] + 0x00000004u, c->r[31]);
    { int _c = (c->r[3] != 0u); c->r[4] = c->r[3] + 0u; if (_c) goto L_08a19000; }
L_08a18ff0:
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000004u);
    c->r[16] = mem_r32(ram, c->r[29] + 0x00000000u);
    { c->r[29] = c->r[29] + 0x00000010u; return; }
L_08a19000:
    { c->r[31] = 0x08a19008u; hle_dispatch_stub(c, ram, 0x08a247bcu); /* sceKernelFreePartitionMemory */ }
    { mem_w32(ram, c->r[16] + 0xffffff38u, 0u); goto L_08a18ff0; }
    return; /* fell out of func_08a18fd4 */
}

/* func_08a1a474  0x08a1a474..0x08a1a4c0  76 bytes, source=residue */
void func_08a1a474(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08a1a474u);
    c->r[29] = c->r[29] + 0xffffffd0u;
    mem_w32(ram, c->r[29] + 0x00000000u, c->r[31]);
    c->r[3] = c->r[5] + 0u;
    c->r[5] = mem_r32(ram, c->r[4] + 0x00000008u);
    mem_w32(ram, c->r[29] + 0x00000018u, c->r[6]);
    c->r[6] = c->r[3] + 0u;
    mem_w32(ram, c->r[29] + 0x0000001cu, c->r[7]);
    c->r[7] = c->r[29] + 0x00000018u;
    mem_w32(ram, c->r[29] + 0x00000020u, c->r[8]);
    mem_w32(ram, c->r[29] + 0x00000024u, c->r[9]);
    mem_w32(ram, c->r[29] + 0x00000028u, c->r[10]);
    { c->r[31] = 0x08a1a4b4u; mem_w32(ram, c->r[29] + 0x0000002cu, c->r[11]); func_08a1d758(c, ram); }
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000000u);
    { c->r[29] = c->r[29] + 0x00000030u; return; }
    return; /* fell out of func_08a1a474 */
}

/* func_08a1c294  0x08a1c294..0x08a1c2e0  76 bytes, source=residue */
void func_08a1c294(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08a1c294u);
    c->r[29] = c->r[29] + 0xfffffff0u;
    mem_w32(ram, c->r[29] + 0x00000008u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000004u, c->r[17]);
    c->r[17] = c->r[5] + 0u;
    mem_w32(ram, c->r[29] + 0x00000000u, c->r[16]);
    { c->r[31] = 0x08a1c2b0u; c->r[16] = c->r[4] + 0u; func_08a19374(c, ram); }
    c->r[4] = c->r[2] + 0u;
    c->r[6] = c->r[17] + 0u;
    { c->r[31] = 0x08a1c2c0u; c->r[5] = c->r[16] + 0u; func_08a1b200(c, ram); }
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x08a1c2ccu; c->r[5] = c->r[3] + 0u; func_08a14588(c, ram); }
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000008u);
    c->r[17] = mem_r32(ram, c->r[29] + 0x00000004u);
    c->r[16] = mem_r32(ram, c->r[29] + 0x00000000u);
    { c->r[29] = c->r[29] + 0x00000010u; return; }
    return; /* fell out of func_08a1c294 */
}

/* func_08a21a48  0x08a21a48..0x08a21e28  992 bytes, source=sweep */
void func_08a21a48(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08a21a48u);
    c->r[29] = c->r[29] + 0xffffffd0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[21]);
    c->r[3] = 0u + 0u;
    c->r[21] = c->r[5] + 0u;
    mem_w32(ram, c->r[29] + 0x00000008u, c->r[18]);
    mem_w32(ram, c->r[29] + 0x00000020u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x0000001cu, c->r[23]);
    mem_w32(ram, c->r[29] + 0x00000018u, c->r[22]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[20]);
    mem_w32(ram, c->r[29] + 0x0000000cu, c->r[19]);
    mem_w32(ram, c->r[29] + 0x00000004u, c->r[17]);
    mem_w32(ram, c->r[29] + 0x00000000u, c->r[16]);
    c->r[17] = mem_r32(ram, c->r[5] + 0x00000008u);
    { int _c = (c->r[17] == 0u); c->r[18] = c->r[4] + 0u; if (_c) goto L_08a21b20; }
    c->r[3] = mem_r16(ram, c->r[4] + 0x0000000cu);
    c->r[2] = c->r[3] & 0x0008u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_08a21aa0; }
    c->r[2] = mem_r32(ram, c->r[4] + 0x00000010u);
    if (c->r[2] != 0u) { c->r[4] = c->r[3] & 0xffffu; goto L_08a21ab8; }
L_08a21aa0:
    { c->r[31] = 0x08a21aa8u; func_08a1fb68(c, ram); }
    { int _c = (c->r[2] != 0u); c->r[3] = 0u + 0xffffffffu; if (_c) goto L_08a21b20; }
    c->r[3] = mem_r16(ram, c->r[18] + 0x0000000cu);
    c->r[4] = c->r[3] & 0xffffu;
L_08a21ab8:
    c->r[2] = c->r[4] & 0x0002u;
    c->r[19] = mem_r32(ram, c->r[21] + 0x00000000u);
    { int _c = (c->r[2] == 0u); c->r[17] = 0u + 0u; if (_c) goto L_08a21b64; }
L_08a21ac8:
    if (c->r[17] != 0u) { c->r[2] = mem_r32(ram, c->r[18] + 0x00000024u); goto L_08a21ae4; }
L_08a21ad0:
    c->r[17] = mem_r32(ram, c->r[19] + 0x00000004u);
    c->r[20] = mem_r32(ram, c->r[19] + 0x00000000u);
    { int _c = (c->r[17] == 0u); c->r[19] = c->r[19] + 0x00000008u; if (_c) goto L_08a21ad0; }
    c->r[2] = mem_r32(ram, c->r[18] + 0x00000024u);
L_08a21ae4:
    c->r[4] = mem_r32(ram, c->r[18] + 0x0000001cu);
    c->r[3] = (c->r[17] < 0x00000401u) ? 1u : 0u;
    c->r[6] = 0u + 0x00000400u;
    if (c->r[3] != 0u) c->r[6] = c->r[17];
    { u32 _t = c->r[2]; c->r[31] = 0x08a21afcu; c->r[5] = c->r[20] + 0u; recomp_call_indirect(c, ram, 0x08a21af4u, _t); }
    { int _c = ((s32)c->r[2] <= 0); c->r[16] = c->r[2] + 0u; if (_c) goto L_08a21b50; }
    c->r[2] = mem_r32(ram, c->r[21] + 0x00000008u);
    c->r[20] = c->r[20] + c->r[16];
    c->r[17] = c->r[17] - c->r[16];
    c->r[2] = c->r[2] - c->r[16];
    { int _c = (c->r[2] != 0u); mem_w32(ram, c->r[21] + 0x00000008u, c->r[2]); if (_c) goto L_08a21ac8; }
L_08a21b1c:
    c->r[3] = 0u + 0u;
L_08a21b20:
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
L_08a21b50:
    c->r[2] = mem_r16(ram, c->r[18] + 0x0000000cu);
L_08a21b54:
    c->r[3] = 0u + 0xffffffffu;
    c->r[2] = c->r[2] | 0x0040u;
    { mem_w16(ram, c->r[18] + 0x0000000cu, c->r[2]); goto L_08a21b20; }
L_08a21b64:
    c->r[2] = c->r[4] & 0x0001u;
    { int _c = (c->r[2] != 0u); c->r[23] = 0u + 0u; if (_c) goto L_08a21ce0; }
L_08a21b70:
    c->r[17] = mem_r32(ram, c->r[19] + 0x00000004u);
L_08a21b74:
    c->r[20] = mem_r32(ram, c->r[19] + 0x00000000u);
    { int _c = (c->r[17] == 0u); c->r[19] = c->r[19] + 0x00000008u; if (_c) goto L_08a21b70; }
L_08a21b80:
    c->r[3] = c->r[3] & 0xffffu;
    c->r[2] = c->r[3] & 0x0200u;
    { int _c = (c->r[2] == 0u); c->r[16] = mem_r32(ram, c->r[18] + 0x00000008u); if (_c) goto L_08a21c48; }
    c->r[2] = (c->r[16] < c->r[17]) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); c->r[2] = (c->r[17] < c->r[16]) ? 1u : 0u; if (_c) goto L_08a21bac; }
    c->r[2] = c->r[3] & 0x0080u;
    if (c->r[2] != 0u) { c->r[3] = mem_r32(ram, c->r[18] + 0x00000010u); goto L_08a21c04; }
L_08a21ba8:
    c->r[2] = (c->r[17] < c->r[16]) ? 1u : 0u;
L_08a21bac:
    c->r[4] = mem_r32(ram, c->r[18] + 0x00000000u);
    if (c->r[2] != 0u) c->r[16] = c->r[17];
    c->r[6] = c->r[16] + 0u;
    { c->r[31] = 0x08a21bc0u; c->r[5] = c->r[20] + 0u; func_08a222c0(c, ram); }
    c->r[3] = mem_r32(ram, c->r[18] + 0x00000008u);
    c->r[2] = mem_r32(ram, c->r[18] + 0x00000000u);
    c->r[3] = c->r[3] - c->r[16];
    c->r[2] = c->r[2] + c->r[16];
    c->r[16] = c->r[17] + 0u;
L_08a21bd4:
    mem_w32(ram, c->r[18] + 0x00000008u, c->r[3]);
    mem_w32(ram, c->r[18] + 0x00000000u, c->r[2]);
L_08a21bdc:
    c->r[2] = mem_r32(ram, c->r[21] + 0x00000008u);
L_08a21be0:
    c->r[20] = c->r[20] + c->r[16];
    c->r[17] = c->r[17] - c->r[16];
    c->r[2] = c->r[2] - c->r[16];
    { int _c = (c->r[2] == 0u); mem_w32(ram, c->r[21] + 0x00000008u, c->r[2]); if (_c) goto L_08a21b1c; }
    { int _c = (c->r[17] != 0u); c->r[3] = mem_r16(ram, c->r[18] + 0x0000000cu); if (_c) goto L_08a21b80; }
    { c->r[17] = mem_r32(ram, c->r[19] + 0x00000004u); goto L_08a21b74; }
L_08a21c04:
    c->r[2] = mem_r32(ram, c->r[18] + 0x00000000u);
    { c->r[31] = 0x08a21c10u; c->r[16] = c->r[2] - c->r[3]; func_08a19374(c, ram); }
    c->r[5] = mem_r32(ram, c->r[18] + 0x00000010u);
    c->r[22] = c->r[16] + c->r[17];
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x08a21c24u; c->r[6] = c->r[22] + 0u; func_08a234cc(c, ram); }
    { int _c = (c->r[2] == 0u); c->r[3] = c->r[2] + 0u; if (_c) goto L_08a21b50; }
    c->r[2] = c->r[2] + c->r[16];
    mem_w32(ram, c->r[18] + 0x00000000u, c->r[2]);
    c->r[16] = c->r[17] + 0u;
    mem_w32(ram, c->r[18] + 0x00000014u, c->r[22]);
    mem_w32(ram, c->r[18] + 0x00000010u, c->r[3]);
    { mem_w32(ram, c->r[18] + 0x00000008u, c->r[17]); goto L_08a21ba8; }
L_08a21c48:
    c->r[4] = mem_r32(ram, c->r[18] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[18] + 0x00000010u);
    c->r[3] = (c->r[16] < c->r[17]) ? 1u : 0u;
    c->r[2] = (c->r[2] < c->r[4]) ? 1u : 0u;
    c->r[2] = c->r[2] & c->r[3];
    { int _c = (c->r[2] != 0u); c->r[5] = c->r[20] + 0u; if (_c) goto L_08a21cb4; }
    c->r[16] = mem_r32(ram, c->r[18] + 0x00000014u);
    c->r[2] = (c->r[17] < c->r[16]) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); c->r[6] = c->r[16] + 0u; if (_c) goto L_08a21c94; }
    c->r[2] = mem_r32(ram, c->r[18] + 0x00000024u);
    c->r[4] = mem_r32(ram, c->r[18] + 0x0000001cu);
    { u32 _t = c->r[2]; c->r[31] = 0x08a21c84u; c->r[5] = c->r[20] + 0u; recomp_call_indirect(c, ram, 0x08a21c7cu, _t); }
    { int _c = ((s32)c->r[2] > 0); c->r[16] = c->r[2] + 0u; if (_c) goto L_08a21bdc; }
    { c->r[2] = mem_r16(ram, c->r[18] + 0x0000000cu); goto L_08a21b54; }
L_08a21c94:
    { c->r[31] = 0x08a21c9cu; c->r[6] = c->r[17] + 0u; func_08a222c0(c, ram); }
    c->r[3] = mem_r32(ram, c->r[18] + 0x00000008u);
    c->r[2] = mem_r32(ram, c->r[18] + 0x00000000u);
    c->r[16] = c->r[17] + 0u;
    c->r[3] = c->r[3] - c->r[17];
    { c->r[2] = c->r[2] + c->r[17]; goto L_08a21bd4; }
L_08a21cb4:
    { c->r[31] = 0x08a21cbcu; c->r[6] = c->r[16] + 0u; func_08a222c0(c, ram); }
    c->r[3] = mem_r32(ram, c->r[18] + 0x00000000u);
    c->r[4] = c->r[18] + 0u;
    c->r[3] = c->r[3] + c->r[16];
    { c->r[31] = 0x08a21cd0u; mem_w32(ram, c->r[18] + 0x00000000u, c->r[3]); func_08a2131c(c, ram); }
    if (c->r[2] == 0u) { c->r[2] = mem_r32(ram, c->r[21] + 0x00000008u); goto L_08a21be0; }
    { c->r[2] = mem_r16(ram, c->r[18] + 0x0000000cu); goto L_08a21b54; }
L_08a21ce0:
    { int _c = (c->r[17] != 0u); if (_c) goto L_08a21cfc; }
    c->r[23] = 0u + 0u;
L_08a21cec:
    c->r[17] = mem_r32(ram, c->r[19] + 0x00000004u);
    c->r[20] = mem_r32(ram, c->r[19] + 0x00000000u);
    { int _c = (c->r[17] == 0u); c->r[19] = c->r[19] + 0x00000008u; if (_c) goto L_08a21cec; }
L_08a21cfc:
    { int _c = (c->r[23] == 0u); c->r[4] = c->r[20] + 0u; if (_c) goto L_08a21e00; }
L_08a21d04:
    c->r[4] = mem_r32(ram, c->r[18] + 0x00000008u);
    c->r[8] = mem_r32(ram, c->r[18] + 0x00000014u);
    c->r[7] = mem_r32(ram, c->r[18] + 0x00000000u);
    c->r[3] = mem_r32(ram, c->r[18] + 0x00000010u);
    c->r[2] = (c->r[17] < c->r[22]) ? 1u : 0u;
    c->r[5] = c->r[17] + 0u;
    if (c->r[2] == 0u) c->r[5] = c->r[22];
    c->r[16] = c->r[4] + c->r[8];
    c->r[3] = (c->r[3] < c->r[7]) ? 1u : 0u;
    c->r[2] = ((s32)c->r[16] < (s32)c->r[5]) ? 1u : 0u;
    c->r[3] = c->r[3] & c->r[2];
    { int _c = (c->r[3] != 0u); c->r[2] = ((s32)c->r[5] < (s32)c->r[8]) ? 1u : 0u; if (_c) goto L_08a21dcc; }
    { int _c = (c->r[2] != 0u); c->r[16] = c->r[5] + 0u; if (_c) goto L_08a21da0; }
    c->r[2] = mem_r32(ram, c->r[18] + 0x00000024u);
    c->r[4] = mem_r32(ram, c->r[18] + 0x0000001cu);
    c->r[6] = c->r[8] + 0u;
    { u32 _t = c->r[2]; c->r[31] = 0x08a21d54u; c->r[5] = c->r[20] + 0u; recomp_call_indirect(c, ram, 0x08a21d4cu, _t); }
    { int _c = ((s32)c->r[2] <= 0); c->r[16] = c->r[2] + 0u; if (_c) goto L_08a21b50; }
L_08a21d5c:
    c->r[22] = c->r[22] - c->r[16];
L_08a21d60:
    { int _c = (c->r[22] == 0u); if (_c) goto L_08a21d88; }
    c->r[2] = mem_r32(ram, c->r[21] + 0x00000008u);
L_08a21d6c:
    c->r[20] = c->r[20] + c->r[16];
    c->r[17] = c->r[17] - c->r[16];
    c->r[2] = c->r[2] - c->r[16];
    { int _c = (c->r[2] != 0u); mem_w32(ram, c->r[21] + 0x00000008u, c->r[2]); if (_c) goto L_08a21ce0; }
    { c->r[3] = 0u + 0u; goto L_08a21b20; }
L_08a21d88:
    { c->r[31] = 0x08a21d90u; c->r[4] = c->r[18] + 0u; func_08a2131c(c, ram); }
    { int _c = (c->r[2] != 0u); c->r[23] = 0u + 0u; if (_c) goto L_08a21b50; }
    { c->r[2] = mem_r32(ram, c->r[21] + 0x00000008u); goto L_08a21d6c; }
L_08a21da0:
    c->r[4] = c->r[7] + 0u;
    c->r[5] = c->r[20] + 0u;
    { c->r[31] = 0x08a21db0u; c->r[6] = c->r[16] + 0u; func_08a222c0(c, ram); }
    c->r[3] = mem_r32(ram, c->r[18] + 0x00000008u);
    c->r[2] = mem_r32(ram, c->r[18] + 0x00000000u);
    c->r[3] = c->r[3] - c->r[16];
    c->r[2] = c->r[2] + c->r[16];
    mem_w32(ram, c->r[18] + 0x00000008u, c->r[3]);
    { mem_w32(ram, c->r[18] + 0x00000000u, c->r[2]); goto L_08a21d5c; }
L_08a21dcc:
    c->r[4] = c->r[7] + 0u;
    c->r[5] = c->r[20] + 0u;
    { c->r[31] = 0x08a21ddcu; c->r[6] = c->r[16] + 0u; func_08a222c0(c, ram); }
    c->r[3] = mem_r32(ram, c->r[18] + 0x00000000u);
    c->r[4] = c->r[18] + 0u;
    c->r[3] = c->r[3] + c->r[16];
    { c->r[31] = 0x08a21df0u; mem_w32(ram, c->r[18] + 0x00000000u, c->r[3]); func_08a2131c(c, ram); }
    { int _c = (c->r[2] == 0u); c->r[22] = c->r[22] - c->r[16]; if (_c) goto L_08a21d60; }
    { c->r[2] = mem_r16(ram, c->r[18] + 0x0000000cu); goto L_08a21b54; }
L_08a21e00:
    c->r[5] = 0u + 0x0000000au;
    { c->r[31] = 0x08a21e0cu; c->r[6] = c->r[17] + 0u; func_08a221a8(c, ram); }
    c->r[3] = c->r[2] - c->r[20];
    { int _c = (c->r[2] == 0u); c->r[22] = c->r[3] + 0x00000001u; if (_c) goto L_08a21e20; }
L_08a21e18:
    { c->r[23] = 0u + 0x00000001u; goto L_08a21d04; }
L_08a21e20:
    { c->r[22] = c->r[17] + 0x00000001u; goto L_08a21e18; }
    return; /* fell out of func_08a21a48 */
}

/* func_08a23bd4  0x08a23bd4..0x08a23c04  48 bytes, source=residue */
void func_08a23bd4(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08a23bd4u);
    c->r[29] = c->r[29] + 0xfffffff0u;
    mem_w32(ram, c->r[29] + 0x00000000u, c->r[16]);
    mem_w32(ram, c->r[29] + 0x00000004u, c->r[31]);
    { c->r[31] = 0x08a23be8u; c->r[16] = c->r[4] + 0u; func_08a19374(c, ram); }
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x08a23bf4u; c->r[5] = (u32)(s32)(s16)mem_r16(ram, c->r[16] + 0x0000000eu); func_08a23e28(c, ram); }
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000004u);
    c->r[16] = mem_r32(ram, c->r[29] + 0x00000000u);
    { c->r[29] = c->r[29] + 0x00000010u; return; }
    return; /* fell out of func_08a23bd4 */
}
