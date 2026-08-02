#include "pspreco.h"
#include "symbols.h"
#include <math.h>

/* func_08804668  0x08804668..0x088046bc  84 bytes, source=fde */
void func_08804668(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08804668u);
    c->r[29] = c->r[29] + 0xfffffff0u;
    mem_w32(ram, c->r[29] + 0x00000004u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000000u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    { c->r[31] = 0x08804680u; c->r[4] = 0u + 0u; hle_dispatch_stub(c, ram, 0x08a24db4u); /* sceUtilityLoadAvModule */ }
    { c->r[31] = 0x08804688u; c->r[4] = 0u + 0x00000001u; hle_dispatch_stub(c, ram, 0x08a24db4u); /* sceUtilityLoadAvModule */ }
    { c->r[31] = 0x08804690u; c->r[4] = 0u + 0x00000002u; hle_dispatch_stub(c, ram, 0x08a24db4u); /* sceUtilityLoadAvModule */ }
    { c->r[31] = 0x08804698u; c->r[4] = 0u + 0x00000003u; hle_dispatch_stub(c, ram, 0x08a24db4u); /* sceUtilityLoadAvModule */ }
    c->r[4] = 0x08a40000u;
    c->r[4] = c->r[4] + 0xffffe610u;
    { c->r[31] = 0x088046a8u; c->r[5] = 0u + 0u; func_0880457c(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000004u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000000u);
    { c->r[29] = c->r[29] + 0x00000010u; return; }
    return; /* fell out of func_08804668 */
}

/* func_08806cb4  0x08806cb4..0x08806cf8  68 bytes, source=sweep */
void func_08806cb4(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08806cb4u);
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
    { c->r[31] = 0x08806ce4u; c->r[5] = c->r[2] + 0u; func_08806b6c(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_08806cb4 */
}

/* func_08807980  0x08807980..0x08807a28  168 bytes, source=fde */
void func_08807980(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08807980u);
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
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 5;
    c->r[2] = c->r[2] - c->r[3];
    c->r[2] = c->r[2] << 3;
    c->r[3] = c->r[4] + c->r[2];
    c->r[2] = 0x08b90000u;
    c->r[2] = c->r[2] + 0x00000cf0u;
    c->r[5] = c->r[3] + c->r[2];
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000700u);
    c->r[2] = 0u + 0x000002e8u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[4] = c->lo;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 5;
    c->r[2] = c->r[2] - c->r[3];
    c->r[2] = c->r[2] << 3;
    c->r[3] = c->r[4] + c->r[2];
    c->r[2] = 0x08b90000u;
    c->r[2] = c->r[2] + 0x00000720u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[4] = c->r[5] + 0u;
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x08807a14u; c->r[6] = 0u + 0x000000f8u; func_08a19db8(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_08807980 */
}

/* func_08808e2c  0x08808e2c..0x0880947c  1616 bytes, source=fde */
void func_08808e2c(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08808e2cu);
    c->r[29] = c->r[29] + 0xffffffc0u;
    mem_w32(ram, c->r[29] + 0x00000034u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000030u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[4]);
    { c->r[31] = 0x08808e48u; c->r[4] = 0u + 0u; hle_dispatch_stub(c, ram, 0x08a24a1cu); /* sceGeDrawSync */ }
    c->r[4] = 0x08a60000u;
    c->r[4] = c->r[4] + 0x00005260u;
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000010u);
    { c->r[31] = 0x08808e5cu; c->r[6] = 0u + 0u; func_089d7b60(c, ram); }
    c->r[2] = 0x08a80000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00003c3cu);
    { int _c = (c->r[2] != 0u); if (_c) goto L_08808e94; }
L_08808e6c:
    { c->r[31] = 0x08808e74u; c->r[4] = 0u + 0x00000001u; func_089d7c4c(c, ram); }
    { int _c = (c->r[2] != 0u); if (_c) goto L_08808e84; }
    { goto L_08809468; }
L_08808e84:
    { c->r[31] = 0x08808e8cu; func_089d7cac(c, ram); }
    { goto L_08808e6c; }
L_08808e94:
    { c->r[31] = 0x08808e9cu; func_08924284(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
    { c->r[31] = 0x08808ea8u; c->r[4] = 0u + 0u; func_089241c8(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]);
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x08808eb8u; c->r[4] = c->r[4] + 0x00002e04u; func_0880d5d0(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = 0u + 0x0000000cu;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_08808f4c; }
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00002e04u;
    { c->r[31] = 0x08808ed8u; c->r[5] = 0u + 0u; func_0880d5f8(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = 0u + 0x0000000cu;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_08808f4c; }
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00002e04u;
    { c->r[31] = 0x08808ef8u; c->r[5] = 0u + 0u; func_0880d5f8(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = 0u + 0x0000001bu;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_08808f4c; }
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x08808f14u; c->r[4] = c->r[4] + 0x00000af4u; func_0880d380(c, ram); }
    { c->r[31] = 0x08808f1cu; c->r[4] = c->r[2] + 0u; func_08968f28(c, ram); }
    mem_w32(ram, c->r[30] + 0x0000001cu, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = 0u + 0x00000018u;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_08808f48; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = 0u + 0x00000019u;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_08808f48; }
    { goto L_08808f4c; }
L_08808f48:
    mem_w32(ram, c->r[30] + 0x00000014u, 0u);
L_08808f4c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_08809324; }
    mem_w32(ram, c->r[30] + 0x0000001cu, 0u);
L_08808f5c:
    { c->r[31] = 0x08808f64u; func_08805910(c, ram); }
    { int _c = (c->r[2] != 0u); if (_c) goto L_08809468; }
    { c->r[31] = 0x08808f74u; c->r[4] = 0u + 0x00000001u; func_089d7c4c(c, ram); }
    { int _c = (c->r[2] != 0u); if (_c) goto L_08808f84; }
    { goto L_08809468; }
L_08808f84:
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x08808f90u; c->r[4] = c->r[4] + 0x00002e40u; func_089b3b34(c, ram); }
    { c->r[31] = 0x08808f98u; c->r[4] = 0u + 0u; func_08807980(c, ram); }
    { c->r[31] = 0x08808fa0u; c->r[4] = 0u + 0x00000001u; func_08807980(c, ram); }
    { c->r[31] = 0x08808fa8u; c->r[4] = 0u + 0x00000002u; func_08807980(c, ram); }
    c->r[1] = 0x08b90000u;
    mem_w32(ram, c->r[1] + 0x00000704u, 0u);
    c->r[4] = 0x08a70000u;
    { c->r[31] = 0x08808fbcu; c->r[4] = c->r[4] + 0xffffb640u; func_089e12fc(c, ram); }
    c->r[4] = 0x08a70000u;
    { c->r[31] = 0x08808fc8u; c->r[4] = c->r[4] + 0xffffb640u; func_089f11bc(c, ram); }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[6] = 0u + 0x0000000au;
    { c->r[31] = 0x08808fdcu; c->r[7] = 0u + 0u; func_089c34ac(c, ram); }
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffffe7c0u);
    c->r[4] = 0x08a70000u;
    c->r[4] = c->r[4] + 0xffffb640u;
    { c->r[31] = 0x08808ff4u; c->f[12] = c->f[0]; func_089f1210(c, ram); }
    c->r[1] = 0x08a80000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0x00003c50u);
    c->r[1] = 0x08a80000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00002e40u);
    c->f[0] = c->f[1] + c->f[0];
    c->r[1] = 0x08a80000u;
    mem_wf32(ram, c->r[1] + 0x00003c50u, c->f[0]);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00002e04u;
    c->r[1] = 0x08a80000u;
    { c->r[31] = 0x08809024u; c->f[12] = mem_rf32(ram, c->r[1] + 0x00002e40u); func_0880d630(c, ram); }
    c->r[2] = 0xc8240000u;
    c->r[2] = c->r[2] | 0x1000u;
    mem_w32(ram, c->r[30] + 0x00000020u, c->r[2]);
    c->r[1] = 0x08a80000u;
    mem_w32(ram, c->r[1] + 0x00003c48u, 0u);
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x08809044u; c->r[4] = c->r[4] + 0x00002e04u; func_0880d5d0(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = 0u + 0x0000000cu;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_08809094; }
    { c->r[31] = 0x0880905cu; c->r[4] = 0u + 0x00000046u; func_089c6f04(c, ram); }
    c->r[4] = 0x08a70000u;
    c->r[4] = c->r[4] + 0xffffb640u;
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x08809070u; c->r[6] = 0u + 0u; func_089e0bd8(c, ram); }
    c->r[4] = 0x08a70000u;
    c->r[4] = c->r[4] + 0xffffb640u;
    c->r[5] = 0u + 0x00000003u;
    { c->r[31] = 0x08809084u; c->r[6] = 0u + 0x00000006u; func_089df7a0(c, ram); }
    { c->r[31] = 0x0880908cu; c->r[4] = 0u + 0xffffffffu; func_08808588(c, ram); }
    { goto L_088091ac; }
L_08809094:
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x088090a0u; c->r[4] = c->r[4] + 0x00002e04u; func_0880d5d0(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = 0u + 0x00000016u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_08809158; }
    c->r[3] = 0x08aa0000u;
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[3] + 0x000053ccu);
    c->r[2] = 0u + 0x00000005u;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_088090e0; }
    c->r[3] = 0x08aa0000u;
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[3] + 0x000053ccu);
    c->r[2] = 0u + 0x00000006u;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_088090e0; }
    { goto L_088091ac; }
L_088090e0:
    { c->r[31] = 0x088090e8u; c->r[4] = 0u + 0x00000046u; func_089c6f04(c, ram); }
    c->r[4] = 0x08a70000u;
    c->r[4] = c->r[4] + 0xffffb640u;
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x088090fcu; c->r[6] = 0u + 0u; func_089e0bd8(c, ram); }
    c->r[4] = 0x08a70000u;
    c->r[4] = c->r[4] + 0xffffb640u;
    c->r[5] = 0u + 0x00000003u;
    { c->r[31] = 0x08809110u; c->r[6] = 0u + 0x00000006u; func_089df7a0(c, ram); }
    c->r[3] = 0x08aa0000u;
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[3] + 0x000053ccu);
    c->r[2] = 0u + 0x00000005u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_0880912c; }
    c->r[2] = 0u + 0x00000018u;
    mem_w32(ram, c->r[30] + 0x00000024u, c->r[2]);
L_0880912c:
    c->r[3] = 0x08aa0000u;
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[3] + 0x000053ccu);
    c->r[2] = 0u + 0x00000006u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_08809148; }
    c->r[2] = 0u + 0x00000019u;
    mem_w32(ram, c->r[30] + 0x00000024u, c->r[2]);
L_08809148:
    { c->r[31] = 0x08809150u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000024u); func_08808588(c, ram); }
    { goto L_088091ac; }
L_08809158:
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x08809164u; c->r[4] = c->r[4] + 0x00000af4u; func_0880d294(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = 0u + 0x00000002u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_088091ac; }
    { c->r[31] = 0x0880917cu; c->r[4] = 0u + 0x00000046u; func_089c6f04(c, ram); }
    c->r[4] = 0x08a70000u;
    c->r[4] = c->r[4] + 0xffffb640u;
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x08809190u; c->r[6] = 0u + 0u; func_089e0bd8(c, ram); }
    c->r[4] = 0x08a70000u;
    c->r[4] = c->r[4] + 0xffffb640u;
    c->r[5] = 0u + 0x00000003u;
    { c->r[31] = 0x088091a4u; c->r[6] = 0u + 0x00000006u; func_089df7a0(c, ram); }
    { c->r[31] = 0x088091acu; c->r[4] = mem_r32(ram, c->r[30] + 0x00000020u); func_0880890c(c, ram); }
L_088091ac:
    c->r[1] = 0x08a80000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00003c50u);
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    c->r[4] = f2u(c->f[0]);
    c->r[2] = 0x66660000u;
    c->r[2] = c->r[2] | 0x6667u;
    alx_mult(c, c->r[4], c->r[2]);
    c->r[2] = c->hi;
    c->r[3] = (u32)((s32)c->r[2] >> 5);
    c->r[2] = (u32)((s32)c->r[4] >> 31);
    c->r[3] = c->r[3] - c->r[2];
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[3];
    c->r[2] = c->r[2] << 4;
    c->r[2] = c->r[4] - c->r[2];
    c->r[2] = ((s32)c->r[2] < (s32)0x00000028u) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_088092c8; }
    { c->r[31] = 0x08809200u; c->r[4] = 0u + 0x00000046u; func_089c6f04(c, ram); }
    c->r[4] = 0x08a70000u;
    c->r[4] = c->r[4] + 0xffffb640u;
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x08809214u; c->r[6] = 0u + 0u; func_089e0bd8(c, ram); }
    c->r[4] = 0x08a70000u;
    c->r[4] = c->r[4] + 0xffffb640u;
    c->r[5] = 0u + 0x00000003u;
    { c->r[31] = 0x08809228u; c->r[6] = 0u + 0x00000006u; func_089df7a0(c, ram); }
    { c->r[31] = 0x08809230u; func_089246b8(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = 0u + 0x00000003u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_08809280; }
    c->r[2] = 0xff7f0000u;
    c->r[2] = c->r[2] | 0x7f7fu;
    mem_w32(ram, c->r[30] + 0x00000020u, c->r[2]);
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x08809258u; c->r[4] = c->r[4] + 0x00002e04u; func_0880d66c(c, ram); }
    c->f[1] = c->f[0];
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffffe7c4u);
    alx_c_cond_s(c, 12, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_0880927c; }
    { goto L_08809280; }
L_0880927c:
    mem_w32(ram, c->r[30] + 0x00000020u, 0u);
L_08809280:
    c->r[2] = 0x08a80000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00003c48u);
    c->r[2] = c->r[2] << 4;
    c->r[2] = c->r[2] + 0x00000010u;
    c->r[2] = c->r[2] << 16;
    c->r[3] = (u32)((s32)c->r[2] >> 16);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    mem_w32(ram, c->r[29] + 0x00000000u, c->r[2]);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00002dfcu;
    c->r[5] = 0u + 0x00000003u;
    c->r[6] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[7] = 0u + 0x00000001u;
    c->r[8] = 0u + 0x00000018u;
    c->r[9] = c->r[3] + 0u;
    c->r[10] = 0u + 0u;
    { c->r[31] = 0x088092c8u; c->r[11] = 0u + 0u; func_089ce998(c, ram); }
L_088092c8:
    c->r[4] = 0x08a70000u;
    { c->r[31] = 0x088092d4u; c->r[4] = c->r[4] + 0xffffb640u; func_089f147c(c, ram); }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[6] = 0u + 0x00000019u;
    { c->r[31] = 0x088092e8u; c->r[7] = 0u + 0u; func_089c34ac(c, ram); }
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x088092f4u; c->r[4] = c->r[4] + 0xffffc930u; func_089f77f0(c, ram); }
    c->r[4] = 0x08a70000u;
    c->r[4] = c->r[4] + 0xffffb640u;
    { c->r[31] = 0x08809304u; c->r[5] = 0u + 0x00000001u; func_089f152c(c, ram); }
    c->r[4] = 0x08a70000u;
    c->r[4] = c->r[4] + 0xffffb640u;
    { c->r[31] = 0x08809314u; c->r[5] = 0u + 0u; func_089e16d0(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x0000001cu, c->r[2]); goto L_08808f5c; }
L_08809324:
    mem_w32(ram, c->r[30] + 0x00000024u, 0u);
L_08809328:
    { c->r[31] = 0x08809330u; func_08805910(c, ram); }
    { int _c = (c->r[2] != 0u); if (_c) goto L_08809468; }
    { c->r[31] = 0x08809340u; c->r[4] = 0u + 0x00000001u; func_089d7c4c(c, ram); }
    { int _c = (c->r[2] != 0u); if (_c) goto L_08809350; }
    { goto L_08809468; }
L_08809350:
    { c->r[31] = 0x08809358u; func_08805910(c, ram); }
    { c->r[31] = 0x08809360u; c->r[4] = 0u + 0u; func_08807980(c, ram); }
    { c->r[31] = 0x08809368u; c->r[4] = 0u + 0x00000002u; func_08807980(c, ram); }
    { c->r[31] = 0x08809370u; c->r[4] = 0u + 0x00000001u; func_08807980(c, ram); }
    c->r[1] = 0x08b90000u;
    mem_w32(ram, c->r[1] + 0x00000704u, 0u);
    c->r[4] = 0x08a70000u;
    { c->r[31] = 0x08809384u; c->r[4] = c->r[4] + 0xffffb640u; func_089e12fc(c, ram); }
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x08809390u; c->r[4] = c->r[4] + 0x00002e40u; func_089b3b34(c, ram); }
    c->r[1] = 0x08a80000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0x00003c50u);
    c->r[1] = 0x08a80000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00002e40u);
    c->f[0] = c->f[1] + c->f[0];
    c->r[1] = 0x08a80000u;
    mem_wf32(ram, c->r[1] + 0x00003c50u, c->f[0]);
    c->r[1] = 0x08a80000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00003c50u);
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    c->r[4] = f2u(c->f[0]);
    c->r[2] = 0x66660000u;
    c->r[2] = c->r[2] | 0x6667u;
    alx_mult(c, c->r[4], c->r[2]);
    c->r[2] = c->hi;
    c->r[3] = (u32)((s32)c->r[2] >> 5);
    c->r[2] = (u32)((s32)c->r[4] >> 31);
    c->r[3] = c->r[3] - c->r[2];
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[3];
    c->r[2] = c->r[2] << 4;
    c->r[2] = c->r[4] - c->r[2];
    c->r[2] = ((s32)c->r[2] < (s32)0x00000028u) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_08809448; }
    { c->r[31] = 0x08809400u; c->r[4] = 0u + 0x00000046u; func_089c6f04(c, ram); }
    c->r[4] = 0x08a70000u;
    c->r[4] = c->r[4] + 0xffffb640u;
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x08809414u; c->r[6] = 0u + 0u; func_089e0bd8(c, ram); }
    c->r[2] = 0xff7f0000u;
    c->r[2] = c->r[2] | 0x7f7fu;
    mem_w32(ram, c->r[29] + 0x00000000u, c->r[2]);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00002dfcu;
    c->r[5] = 0u + 0x00000003u;
    c->r[6] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[7] = 0u + 0x00000001u;
    c->r[8] = 0u + 0x00000018u;
    c->r[9] = 0u + 0x00000010u;
    c->r[10] = 0u + 0u;
    { c->r[31] = 0x08809448u; c->r[11] = 0u + 0u; func_089ce998(c, ram); }
L_08809448:
    c->r[4] = 0x08a70000u;
    c->r[4] = c->r[4] + 0xffffb640u;
    { c->r[31] = 0x08809458u; c->r[5] = 0u + 0u; func_089e16d0(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000024u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000024u, c->r[2]); goto L_08809328; }
L_08809468:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000034u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000030u);
    { c->r[29] = c->r[29] + 0x00000040u; return; }
    return; /* fell out of func_08808e2c */
}

/* func_0880c688  0x0880c688..0x0880c7e4  348 bytes, source=fde */
void func_0880c688(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0880c688u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_0880c6b0; }
    { goto L_0880c7d0; }
L_0880c6b0:
    c->r[1] = 0x08a80000u;
    mem_w32(ram, c->r[1] + 0x00003c74u, 0u);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0xffffc930u;
    c->r[5] = 0u + 0x00000001u;
    { c->r[31] = 0x0880c6ccu; c->r[6] = 0u + 0u; func_089f5ab8(c, ram); }
    c->r[4] = 0x08a60000u;
    c->r[4] = c->r[4] + 0x00005260u;
    { c->r[31] = 0x0880c6dcu; c->r[5] = 0u + 0x00000001u; func_089d7208(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000004u, 0u);
L_0880c6e0:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = ((s32)c->r[2] < (s32)0x0000000au) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_0880c6f8; }
    { goto L_0880c7a4; }
L_0880c6f8:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000003u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_0880c73c; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000009u) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_0880c73c; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08a50000u;
    c->r[2] = c->r[2] + 0x00001f5cu;
    c->r[2] = c->r[3] + c->r[2];
    { c->r[31] = 0x0880c734u; c->r[4] = mem_r32(ram, c->r[2] + 0x00000000u); func_08808e2c(c, ram); }
    { goto L_0880c758; }
L_0880c73c:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = 0u + 0x00000009u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_0880c758; }
    c->r[4] = 0x08a40000u;
    { c->r[31] = 0x0880c758u; c->r[4] = c->r[4] + 0xffffedc4u; func_08808e2c(c, ram); }
L_0880c758:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08a50000u;
    c->r[2] = c->r[2] + 0x00001f5cu;
    c->r[5] = c->r[3] + c->r[2];
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = 0x08a50000u;
    c->r[2] = c->r[2] + 0x00001f84u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000000u);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0xffffc930u;
    c->r[5] = mem_r32(ram, c->r[5] + 0x00000000u);
    { c->r[31] = 0x0880c794u; c->r[6] = c->r[2] + 0u; func_089f586c(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000004u, c->r[2]); goto L_0880c6e0; }
L_0880c7a4:
    c->r[4] = 0x08a60000u;
    c->r[4] = c->r[4] + 0x00005260u;
    { c->r[31] = 0x0880c7b4u; c->r[5] = 0u + 0x00000002u; func_089d7194(c, ram); }
    c->r[1] = 0x08a80000u;
    mem_w32(ram, c->r[1] + 0x00003c98u, 0u);
    c->r[1] = 0x08a80000u;
    mem_w32(ram, c->r[1] + 0x00003c9cu, 0u);
    c->r[2] = 0u + 0x0000000du;
    c->r[1] = 0x08a80000u;
    mem_w32(ram, c->r[1] + 0x00003c40u, c->r[2]);
L_0880c7d0:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_0880c688 */
}

/* func_0880d694  0x0880d694..0x0880d6b4  32 bytes, source=sweep */
void func_0880d694(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0880d694u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_0880d694 */
}

/* func_0880f21c  0x0880f21c..0x0880f27c  96 bytes, source=fde */
void func_0880f21c(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0880f21cu);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    mem_w32(ram, c->r[2] + 0x00000000u, 0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000004u;
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0u + 0u;
    { c->r[31] = 0x0880f250u; c->r[6] = 0u + 0x00000010u; func_08a19ec4(c, ram); }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000038u);
    mem_w32(ram, c->r[3] + 0x00000034u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    mem_w32(ram, c->r[2] + 0x00000038u, 0u);
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_0880f21c */
}

/* func_08812734  0x08812734..0x0881281c  232 bytes, source=fde */
void func_08812734(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08812734u);
    c->r[29] = c->r[29] + 0xfffffee0u;
    mem_w32(ram, c->r[29] + 0x00000114u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000110u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x08812750u; c->r[4] = c->r[4] + 0x00002e04u; func_08813c78(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = c->r[2] << 1;
    c->r[2] = 0x08a50000u;
    c->r[2] = c->r[2] + 0x00001fd0u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x00000000u);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = 0u + 0xffffffffu;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_08812788; }
    { goto L_08812808; }
L_08812788:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = 0u + 0x0000179au;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_088127a0; }
    c->r[2] = 0u + 0x0000025cu;
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[2]);
L_088127a0:
    c->r[2] = c->r[30] + 0x00000010u;
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0x08a40000u;
    c->r[5] = c->r[5] + 0xfffff170u;
    { c->r[31] = 0x088127b8u; c->r[6] = mem_r32(ram, c->r[30] + 0x00000004u); func_08a1ad34(c, ram); }
    c->r[2] = c->r[30] + 0x00000010u;
    { c->r[31] = 0x088127c4u; c->r[4] = c->r[2] + 0u; func_08808e2c(c, ram); }
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x088127d0u; c->r[4] = c->r[4] + 0x00000af4u; func_0880d4a0(c, ram); }
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08a50000u;
    c->r[2] = c->r[2] + 0x00001fb4u;
    c->r[3] = c->r[3] + c->r[2];
    c->r[2] = c->r[30] + 0x00000010u;
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0x08a40000u;
    c->r[5] = c->r[5] + 0xfffff178u;
    c->r[6] = mem_r32(ram, c->r[30] + 0x00000004u);
    { c->r[31] = 0x088127fcu; c->r[7] = mem_r32(ram, c->r[3] + 0x00000000u); func_08a1ad34(c, ram); }
    c->r[2] = c->r[30] + 0x00000010u;
    { c->r[31] = 0x08812808u; c->r[4] = c->r[2] + 0u; func_08808e2c(c, ram); }
L_08812808:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000114u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000110u);
    { c->r[29] = c->r[29] + 0x00000120u; return; }
    return; /* fell out of func_08812734 */
}

/* func_088163ec  0x088163ec..0x08816460  116 bytes, source=fde */
void func_088163ec(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x088163ecu);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000002cu);
    c->r[2] = c->r[2] + 0x00000014u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000ac8u;
    { c->r[31] = 0x08816424u; c->r[5] = c->r[2] + 0u; func_089cb820(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_0881644c; }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x08816440u; c->r[5] = mem_r32(ram, c->r[30] + 0x00000004u); func_08814858(c, ram); }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000004u);
    { c->r[31] = 0x0881644cu; c->r[5] = 0u + 0x00000006u; func_08814994(c, ram); }
L_0881644c:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_088163ec */
}

/* func_08819cfc  0x08819cfc..0x08819d40  68 bytes, source=sweep */
void func_08819cfc(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08819cfcu);
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
    { c->r[31] = 0x08819d2cu; c->r[5] = c->r[2] + 0u; func_088191c8(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_08819cfc */
}

/* func_08820588  0x08820588..0x0882061c  148 bytes, source=sweep */
void func_08820588(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08820588u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    mem_w32(ram, c->r[30] + 0x00000008u, 0u);
    mem_w32(ram, c->r[30] + 0x00000008u, 0u);
L_088205a4:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = ((s32)c->r[2] < (s32)0x0000003cu) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_088205bc; }
    { goto L_08820600; }
L_088205bc:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = 0u + 0x000000ecu;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[3] = c->lo;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x000000d6u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_088205f0; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    { mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]); goto L_08820608; }
L_088205f0:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]); goto L_088205a4; }
L_08820600:
    c->r[2] = 0u + 0xffffffffu;
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
L_08820608:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_08820588 */
}

/* func_08824dd4  0x08824dd4..0x08824e64  144 bytes, source=sweep */
void func_08824dd4(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08824dd4u);
    c->r[29] = c->r[29] + 0xffffffc0u;
    mem_w32(ram, c->r[29] + 0x00000030u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    c->r[2] = c->r[4] + 0u;
    mem_w8(ram, c->r[30] + 0x00000000u, c->r[2]);
    c->r[3] = c->r[30] + 0x00000010u;
    c->r[2] = 0x08a40000u;
    c->r[2] = c->r[2] + 0xfffffa40u;
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
    c->r[4] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000010u);
    c->r[5] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000011u);
    mem_w8(ram, c->r[3] + 0x00000010u, c->r[4]);
    mem_w8(ram, c->r[3] + 0x00000011u, c->r[5]);
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[30] + 0x00000010u;
    c->r[2] = c->r[2] + c->r[3];
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000000u);
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000030u);
    { c->r[29] = c->r[29] + 0x00000040u; return; }
    return; /* fell out of func_08824dd4 */
}

/* func_08826e04  0x08826e04..0x08826e38  52 bytes, source=sweep */
void func_08826e04(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08826e04u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[2] = c->r[5] + 0u;
    mem_w8(ram, c->r[30] + 0x00000004u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r8(ram, c->r[30] + 0x00000004u);
    mem_w8(ram, c->r[3] + 0x00001b92u, c->r[2]);
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_08826e04 */
}

/* func_0882a4c4  0x0882a4c4..0x0882ab5c  1688 bytes, source=fde */
void func_0882a4c4(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0882a4c4u);
    c->r[29] = c->r[29] + 0xfffffb00u;
    mem_w32(ram, c->r[29] + 0x000004f4u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x000004f0u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_0882a4f0; }
    { goto L_0882ab48; }
L_0882a4f0:
    c->r[3] = 0x08a80000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00003eb4u);
    c->r[2] = 0u + 0x00000001u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_0882a9b4; }
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00004004u;
    c->r[5] = 0u + 0u;
    { c->r[31] = 0x0882a518u; c->r[6] = 0u + 0x00000080u; func_08a19ec4(c, ram); }
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00004084u;
    c->r[5] = 0u + 0u;
    { c->r[31] = 0x0882a52cu; c->r[6] = 0u + 0x00000400u; func_08a19ec4(c, ram); }
    c->r[3] = c->r[30] + 0x00000210u;
    c->r[2] = 0x08a40000u;
    c->r[2] = c->r[2] + 0x0000166cu;
    c->r[4] = mem_lwl(ram, c->r[2] + 0x00000003u, c->r[4]);
    c->r[4] = mem_lwr(ram, c->r[2] + 0x00000000u, c->r[4]);
    c->r[5] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x00000004u);
    mem_swl(ram, c->r[3] + 0x00000003u, c->r[4]);
    mem_swr(ram, c->r[3] + 0x00000000u, c->r[4]);
    mem_w16(ram, c->r[3] + 0x00000004u, c->r[5]);
    c->r[3] = c->r[30] + 0x00000220u;
    c->r[2] = 0x08a40000u;
    c->r[2] = c->r[2] + 0x00001674u;
    c->r[4] = mem_lwl(ram, c->r[2] + 0x00000003u, c->r[4]);
    c->r[4] = mem_lwr(ram, c->r[2] + 0x00000000u, c->r[4]);
    mem_swl(ram, c->r[3] + 0x00000003u, c->r[4]);
    mem_swr(ram, c->r[3] + 0x00000000u, c->r[4]);
    c->r[3] = c->r[30] + 0x00000230u;
    c->r[2] = 0x08a40000u;
    c->r[2] = c->r[2] + 0x00001678u;
    c->r[4] = mem_lwl(ram, c->r[2] + 0x00000003u, c->r[4]);
    c->r[4] = mem_lwr(ram, c->r[2] + 0x00000000u, c->r[4]);
    c->r[5] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x00000004u);
    mem_swl(ram, c->r[3] + 0x00000003u, c->r[4]);
    mem_swr(ram, c->r[3] + 0x00000000u, c->r[4]);
    mem_w16(ram, c->r[3] + 0x00000004u, c->r[5]);
    c->r[4] = 0x08a40000u;
    { c->r[31] = 0x0882a59cu; c->r[4] = c->r[4] + 0x00001658u; func_089c6f64(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = c->r[30] + 0x00000010u;
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00002dfcu;
    c->r[5] = c->r[2] + 0u;
    c->r[6] = c->r[3] + 0u;
    c->r[7] = 0x08a40000u;
    c->r[7] = c->r[7] + 0x0000161cu;
    { c->r[31] = 0x0882a5c4u; c->r[8] = 0u + 0x000015c2u; func_089cdef8(c, ram); }
    c->r[4] = 0x08a40000u;
    { c->r[31] = 0x0882a5d0u; c->r[4] = c->r[4] + 0x00001658u; func_089c6f64(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = c->r[30] + 0x00000090u;
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00002dfcu;
    c->r[5] = c->r[2] + 0u;
    c->r[6] = c->r[3] + 0u;
    c->r[7] = 0x08a40000u;
    c->r[7] = c->r[7] + 0x0000161cu;
    { c->r[31] = 0x0882a5f8u; c->r[8] = 0u + 0x000015c4u; func_089cdef8(c, ram); }
    c->r[4] = 0x08a40000u;
    { c->r[31] = 0x0882a604u; c->r[4] = c->r[4] + 0x00001658u; func_089c6f64(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = c->r[30] + 0x00000110u;
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00002dfcu;
    c->r[5] = c->r[2] + 0u;
    c->r[6] = c->r[3] + 0u;
    c->r[7] = 0x08a40000u;
    c->r[7] = c->r[7] + 0x0000161cu;
    { c->r[31] = 0x0882a62cu; c->r[8] = 0u + 0x000015c5u; func_089cdef8(c, ram); }
    c->r[4] = 0x08a40000u;
    { c->r[31] = 0x0882a638u; c->r[4] = c->r[4] + 0x00001658u; func_089c6f64(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = c->r[30] + 0x00000190u;
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00002dfcu;
    c->r[5] = c->r[2] + 0u;
    c->r[6] = c->r[3] + 0u;
    c->r[7] = 0x08a40000u;
    c->r[7] = c->r[7] + 0x0000161cu;
    { c->r[31] = 0x0882a660u; c->r[8] = 0u + 0x000015c6u; func_089cdef8(c, ram); }
    c->r[2] = c->r[30] + 0x00000240u;
    c->r[3] = c->r[30] + 0x00000250u;
    c->r[4] = c->r[2] + 0u;
    c->r[5] = c->r[3] + 0u;
    { c->r[31] = 0x0882a678u; c->r[6] = 0u + 0x00000200u; func_0882b810(c, ram); }
    c->r[2] = c->r[30] + 0x00000240u;
    c->r[3] = c->r[30] + 0x00000010u;
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x0882a68cu; c->r[5] = c->r[3] + 0u; func_0882b860(c, ram); }
    c->r[2] = c->r[30] + 0x00000250u;
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00004004u;
    c->r[5] = 0u + 0x00000080u;
    { c->r[31] = 0x0882a6a4u; c->r[6] = c->r[2] + 0u; func_08a06b38(c, ram); }
    c->r[2] = 0x08a80000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00003ed4u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_0882a6cc; }
    c->r[2] = c->r[30] + 0x00000450u;
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x0882a6c4u; c->r[5] = 0u + 0u; func_08828804(c, ram); }
    { goto L_0882a6e0; }
L_0882a6cc:
    c->r[2] = c->r[30] + 0x00000450u;
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0x08a80000u;
    { c->r[31] = 0x0882a6e0u; c->r[5] = mem_r32(ram, c->r[5] + 0x00000e34u); func_08828804(c, ram); }
L_0882a6e0:
    c->r[2] = c->r[30] + 0x00000460u;
    c->r[3] = c->r[30] + 0x00000450u;
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0u + 0x00000080u;
    { c->r[31] = 0x0882a6f8u; c->r[6] = c->r[3] + 0u; func_08a06664(c, ram); }
    c->r[2] = c->r[30] + 0x00000240u;
    c->r[3] = c->r[30] + 0x00000250u;
    c->r[4] = c->r[2] + 0u;
    c->r[5] = c->r[3] + 0u;
    { c->r[31] = 0x0882a710u; c->r[6] = 0u + 0x00000200u; func_0882b810(c, ram); }
    c->r[2] = c->r[30] + 0x00000240u;
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0x08a80000u;
    { c->r[31] = 0x0882a724u; c->r[5] = c->r[5] + 0x00003fa4u; func_0882b860(c, ram); }
    c->r[2] = c->r[30] + 0x00000240u;
    c->r[3] = c->r[30] + 0x00000210u;
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x0882a738u; c->r[5] = c->r[3] + 0u; func_0882b860(c, ram); }
    c->r[2] = c->r[30] + 0x00000240u;
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0x08a80000u;
    { c->r[31] = 0x0882a74cu; c->r[5] = c->r[5] + 0x00003fc8u; func_0882b860(c, ram); }
    c->r[2] = c->r[30] + 0x00000240u;
    c->r[3] = c->r[30] + 0x00000220u;
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x0882a760u; c->r[5] = c->r[3] + 0u; func_0882b860(c, ram); }
    c->r[2] = c->r[30] + 0x00000240u;
    c->r[3] = c->r[30] + 0x00000230u;
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x0882a774u; c->r[5] = c->r[3] + 0u; func_0882b860(c, ram); }
    c->r[2] = c->r[30] + 0x00000240u;
    c->r[3] = c->r[30] + 0x00000190u;
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x0882a788u; c->r[5] = c->r[3] + 0u; func_0882b860(c, ram); }
    c->r[2] = c->r[30] + 0x00000240u;
    c->r[3] = c->r[30] + 0x00000460u;
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x0882a79cu; c->r[5] = c->r[3] + 0u; func_0882b860(c, ram); }
    c->r[2] = c->r[30] + 0x00000240u;
    c->r[3] = c->r[30] + 0x00000230u;
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x0882a7b0u; c->r[5] = c->r[3] + 0u; func_0882b860(c, ram); }
    c->r[2] = c->r[30] + 0x00000250u;
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00004084u;
    c->r[5] = 0u + 0x00000400u;
    { c->r[31] = 0x0882a7c8u; c->r[6] = c->r[2] + 0u; func_08a06b38(c, ram); }
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x0882a7d4u; c->r[4] = c->r[4] + 0x00000330u; func_089d9cec(c, ram); }
    c->r[2] = c->r[2] + 0x000029e8u;
    c->r[1] = 0x08a80000u;
    mem_w32(ram, c->r[1] + 0x00004000u, c->r[2]);
    c->r[4] = 0x08a80000u;
    c->r[4] = mem_r32(ram, c->r[4] + 0x00004000u);
    c->r[5] = 0x08a80000u;
    c->r[5] = c->r[5] + 0x00000df4u;
    { c->r[31] = 0x0882a7f8u; c->r[6] = 0u + 0x000019e8u; func_08a19db8(c, ram); }
    c->r[2] = 0x08a80000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00003ed4u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_0882a814; }
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x0882a814u; c->r[4] = c->r[4] + 0x00000af4u; func_089c9114(c, ram); }
L_0882a814:
    c->r[2] = 0x08a80000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00003ed4u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_0882a834; }
    { c->r[31] = 0x0882a82cu; func_08902e18(c, ram); }
    { int _c = (c->r[2] != 0u); if (_c) goto L_0882a8ec; }
L_0882a834:
    c->r[2] = c->r[30] + 0x00000450u;
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0u + 0x00000040u;
    c->r[6] = 0x08a80000u;
    { c->r[31] = 0x0882a84cu; c->r[6] = c->r[6] + 0x00003fa4u; func_08a06b38(c, ram); }
    c->r[2] = c->r[30] + 0x00000490u;
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0u + 0x00000040u;
    c->r[6] = 0x08a80000u;
    { c->r[31] = 0x0882a864u; c->r[6] = c->r[6] + 0x00003fc8u; func_08a06b38(c, ram); }
    c->r[2] = c->r[30] + 0x00000450u;
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x0882a874u; c->r[5] = 0u + 0x00000040u; func_08828f48(c, ram); }
    c->r[2] = c->r[30] + 0x00000490u;
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x0882a884u; c->r[5] = 0u + 0x00000040u; func_08828f48(c, ram); }
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x0882a890u; c->r[4] = c->r[4] + 0x00000df8u; hle_dispatch_stub(c, ram, 0x08a24dd4u); /* sceWlanGetEtherAddr */ }
    c->r[2] = c->r[30] + 0x000004d0u;
    { c->r[31] = 0x0882a89cu; c->r[4] = c->r[2] + 0u; hle_dispatch_stub(c, ram, 0x08a24c6cu); /* sceRtcGetCurrentClockLocalTime */ }
    c->r[2] = c->r[30] + 0x000004d0u;
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0x08a80000u;
    { c->r[31] = 0x0882a8b0u; c->r[5] = c->r[5] + 0x00000e00u; hle_dispatch_stub(c, ram, 0x08a24c5cu); /* sceRtcGetTick */ }
    c->r[2] = c->r[30] + 0x00000450u;
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000e08u;
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x0882a8c8u; c->r[6] = 0u + 0x00000014u; func_08a19db8(c, ram); }
    c->r[2] = c->r[30] + 0x00000490u;
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000e1cu;
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x0882a8e0u; c->r[6] = 0u + 0x0000000cu; func_08a19db8(c, ram); }
    c->r[2] = 0u + 0x00000006u;
    c->r[1] = 0x08a80000u;
    mem_w8(ram, c->r[1] + 0x00000e33u, c->r[2]);
L_0882a8ec:
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x0882a8f8u; c->r[4] = c->r[4] + 0x00000330u; func_089d9cec(c, ram); }
    c->r[2] = c->r[2] + 0x00001000u;
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0x08a80000u;
    c->r[5] = c->r[5] + 0x00000df4u;
    { c->r[31] = 0x0882a910u; c->r[6] = 0u + 0x000019e8u; func_08a19db8(c, ram); }
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x0882a91cu; c->r[4] = c->r[4] + 0x00000330u; func_089d9cec(c, ram); }
    c->r[2] = c->r[2] + 0x00001000u;
    { c->r[31] = 0x0882a928u; c->r[4] = c->r[2] + 0u; func_08828918(c, ram); }
    { c->r[31] = 0x0882a930u; func_08828580(c, ram); }
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000330u;
    { c->r[31] = 0x0882a940u; c->r[5] = 0u + 0x00000005u; func_089d9844(c, ram); }
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000330u;
    c->r[5] = 0x08a80000u;
    c->r[5] = c->r[5] + 0x00004004u;
    c->r[6] = 0x08a80000u;
    { c->r[31] = 0x0882a95cu; c->r[6] = c->r[6] + 0x00004084u; func_089d9728(c, ram); }
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x0882a968u; c->r[4] = c->r[4] + 0x00000330u; func_089d9cec(c, ram); }
    c->r[2] = c->r[2] + 0x00001000u;
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000330u;
    c->r[5] = 0u + 0x000019e8u;
    { c->r[31] = 0x0882a980u; c->r[6] = c->r[2] + 0u; func_089d9768(c, ram); }
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000330u;
    c->r[5] = 0u + 0u;
    c->r[6] = 0x08a40000u;
    c->r[6] = c->r[6] + 0x00001680u;
    c->r[7] = 0x08a40000u;
    c->r[7] = c->r[7] + 0x00001638u;
    c->r[8] = 0x08a40000u;
    { c->r[31] = 0x0882a9a8u; c->r[8] = c->r[8] + 0x00001644u; func_089d8d50(c, ram); }
    c->r[2] = 0u + 0x00000001u;
    c->r[1] = 0x08a80000u;
    mem_w32(ram, c->r[1] + 0x00004e0cu, c->r[2]);
L_0882a9b4:
    c->r[2] = 0x08a80000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00003eb4u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000002u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_0882ab48; }
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x0882a9d4u; c->r[4] = c->r[4] + 0x00000330u; func_089d98dc(c, ram); }
    mem_w32(ram, c->r[30] + 0x000004e0u, c->r[2]);
    c->r[2] = 0u + 0xfffffffeu;
    c->r[3] = mem_r32(ram, c->r[30] + 0x000004e0u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_0882aa54; }
    c->r[4] = mem_r32(ram, c->r[30] + 0x000004e0u);
    c->r[2] = ((s32)c->r[4] < (s32)0xffffffffu) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_0882aa14; }
    c->r[2] = 0x80110000u;
    c->r[2] = c->r[2] | 0x0383u;
    c->r[5] = mem_r32(ram, c->r[30] + 0x000004e0u);
    { int _c = (c->r[5] == c->r[2]); if (_c) goto L_0882aa70; }
    { goto L_0882aa94; }
L_0882aa14:
    c->r[2] = 0u + 0xffffffffu;
    c->r[6] = mem_r32(ram, c->r[30] + 0x000004e0u);
    { int _c = (c->r[6] == c->r[2]); if (_c) goto L_0882aaa8; }
    c->r[7] = mem_r32(ram, c->r[30] + 0x000004e0u);
    { int _c = (c->r[7] == 0u); if (_c) goto L_0882aa38; }
    { goto L_0882aa94; }
L_0882aa38:
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00003eb4u;
    c->r[5] = 0x08830000u;
    { c->r[31] = 0x0882aa4cu; c->r[5] = c->r[5] + 0xffffad6cu; func_0880f03c(c, ram); }
    { goto L_0882aaa8; }
L_0882aa54:
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00003eb4u;
    c->r[5] = 0x08830000u;
    { c->r[31] = 0x0882aa68u; c->r[5] = c->r[5] + 0xffffa4c4u; func_0880f03c(c, ram); }
    { goto L_0882aaa8; }
L_0882aa70:
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00003eb4u;
    c->r[5] = 0x08900000u;
    c->r[5] = c->r[5] + 0x00001cd8u;
    c->r[6] = 0x08830000u;
    { c->r[31] = 0x0882aa8cu; c->r[6] = c->r[6] + 0xffffab5cu; func_0880f1d4(c, ram); }
    { goto L_0882aaa8; }
L_0882aa94:
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00003eb4u;
    c->r[5] = 0x08830000u;
    { c->r[31] = 0x0882aaa8u; c->r[5] = c->r[5] + 0xffffad6cu; func_0880f03c(c, ram); }
L_0882aaa8:
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x0882aab4u; c->r[4] = c->r[4] + 0x00000330u; func_089d98dc(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = 0u + 0xffffffffu;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_0882aacc; }
    { c->r[31] = 0x0882aaccu; func_0882879c(c, ram); }
L_0882aacc:
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x0882aad8u; c->r[4] = c->r[4] + 0x00000330u; func_089d98dc(c, ram); }
    { int _c = (c->r[2] != 0u); if (_c) goto L_0882ab14; }
    { c->r[31] = 0x0882aae8u; c->r[4] = 0u + 0u; func_08902cf4(c, ram); }
    c->r[2] = 0x08a80000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00003ed4u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_0882ab04; }
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x0882ab04u; c->r[4] = c->r[4] + 0x00000af4u; func_089c90c0(c, ram); }
L_0882ab04:
    c->r[2] = 0u + 0x00000002u;
    c->r[1] = 0x08a80000u;
    { mem_w32(ram, c->r[1] + 0x00004e0cu, c->r[2]); goto L_0882ab48; }
L_0882ab14:
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x0882ab20u; c->r[4] = c->r[4] + 0x00000330u; func_089d98dc(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = 0u + 0xffffffffu;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_0882ab48; }
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000df4u;
    c->r[5] = 0x08a80000u;
    c->r[5] = mem_r32(ram, c->r[5] + 0x00004000u);
    { c->r[31] = 0x0882ab48u; c->r[6] = 0u + 0x000019e8u; func_08a19db8(c, ram); }
L_0882ab48:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x000004f4u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x000004f0u);
    { c->r[29] = c->r[29] + 0x00000500u; return; }
    return; /* fell out of func_0882a4c4 */
}

/* func_0882eb98  0x0882eb98..0x0882ebd0  56 bytes, source=sweep */
void func_0882eb98(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0882eb98u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = c->r[2] + 0x00001490u;
    c->r[2] = mem_r8(ram, c->r[2] + 0x0000000eu);
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_0882eb98 */
}

/* func_08831ef4  0x08831ef4..0x088320e4  496 bytes, source=fde */
void func_08831ef4(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08831ef4u);
    c->r[29] = c->r[29] + 0xffffffb0u;
    mem_w32(ram, c->r[29] + 0x00000044u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000040u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[6]);
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[7]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 3;
    c->r[2] = 0x08a50000u;
    c->r[2] = c->r[2] + 0x00002f04u;
    c->r[2] = c->r[2] + c->r[3];
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000014u);
    c->r[2] = c->r[3] - c->r[2];
    c->r[2] = c->r[2] + 0x0000000au;
    c->f[0] = u2f(c->r[2]);
    c->f[0] = (f32)(s32)f2u(c->f[0]);
    mem_wf32(ram, c->r[30] + 0x00000014u, c->f[0]);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x0000000cu);
    c->f[0] = (f32)(s32)f2u(c->f[0]);
    mem_wf32(ram, c->r[30] + 0x00000018u, c->f[0]);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000014u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000018u);
    c->f[0] = c->f[1] / c->f[0];
    mem_wf32(ram, c->r[30] + 0x0000001cu, c->f[0]);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x0000001cu);
    c->f[0] = u2f(0u);
    alx_c_cond_s(c, 12, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_08831f94; }
    { goto L_08831f98; }
L_08831f94:
    mem_w32(ram, c->r[30] + 0x0000001cu, 0u);
L_08831f98:
    c->f[1] = mem_rf32(ram, c->r[30] + 0x0000001cu);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x0000192cu);
    alx_c_cond_s(c, 12, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_08831fbc; }
    { goto L_08831fc8; }
L_08831fbc:
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x0000192cu);
    mem_wf32(ram, c->r[30] + 0x0000001cu, c->f[0]);
L_08831fc8:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = mem_r16(ram, c->r[2] + 0x00000000u);
    mem_w16(ram, c->r[30] + 0x00000020u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = mem_r16(ram, c->r[2] + 0x00000002u);
    mem_w16(ram, c->r[30] + 0x00000022u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08a50000u;
    c->r[2] = c->r[2] + 0x00002decu;
    c->r[2] = c->r[3] + c->r[2];
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000003u);
    c->r[2] = mem_r16(ram, c->r[30] + 0x00000020u);
    c->r[2] = c->r[2] + c->r[3];
    mem_w16(ram, c->r[30] + 0x00000020u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08a50000u;
    c->r[2] = c->r[2] + 0x00002decu;
    c->r[2] = c->r[3] + c->r[2];
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000004u);
    c->r[2] = mem_r16(ram, c->r[30] + 0x00000022u);
    c->r[2] = c->r[2] + c->r[3];
    mem_w16(ram, c->r[30] + 0x00000022u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[4] = c->r[2] + 0x00000008u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08a50000u;
    c->r[2] = c->r[2] + 0x00002decu;
    c->r[2] = c->r[3] + c->r[2];
    c->r[5] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000000u);
    c->r[6] = c->r[30] + 0x00000020u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08a50000u;
    c->r[2] = c->r[2] + 0x00002df4u;
    c->r[2] = c->r[3] + c->r[2];
    c->f[12] = mem_rf32(ram, c->r[2] + 0x00000000u);
    { c->r[31] = 0x0883209cu; c->f[13] = mem_rf32(ram, c->r[30] + 0x0000001cu); func_08939c88(c, ram); }
    c->f[1] = mem_rf32(ram, c->r[30] + 0x0000001cu);
    c->f[0] = u2f(0u);
    alx_c_cond_s(c, 2, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_088320bc; }
    { goto L_088320c8; }
L_088320bc:
    c->r[2] = 0u + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000030u, c->r[2]); goto L_088320cc; }
L_088320c8:
    mem_w32(ram, c->r[30] + 0x00000030u, 0u);
L_088320cc:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000030u);
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000044u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000040u);
    { c->r[29] = c->r[29] + 0x00000050u; return; }
    return; /* fell out of func_08831ef4 */
}

/* func_08833d84  0x08833d84..0x08833e08  132 bytes, source=fde */
void func_08833d84(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08833d84u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
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
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000014u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000011u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_08833df4; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[2] + 0x00000008u;
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x08833df4u; c->r[5] = 0u + 0x00000009u; func_08937a50(c, ram); }
L_08833df4:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_08833d84 */
}

/* func_0883607c  0x0883607c..0x08836a10  2452 bytes, source=fde */
void func_0883607c(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0883607cu);
L_0883607c:
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
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]);
    c->r[2] = mem_r8(ram, c->r[30] + 0x00000004u);
    mem_w32(ram, c->r[30] + 0x00000030u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000030u);
    c->r[2] = (c->r[3] < 0x00000021u) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_088369f8; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000030u);
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08a40000u;
    c->r[2] = c->r[2] + 0x000019f0u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    { u32 _t = c->r[2]; switch (_t) { case 0x0883607cu: goto L_0883607c; case 0x088360e4u: goto L_088360e4; case 0x088364e8u: goto L_088364e8; case 0x08836528u: goto L_08836528; case 0x08836538u: goto L_08836538; case 0x08836548u: goto L_08836548; case 0x08836558u: goto L_08836558; case 0x08836568u: goto L_08836568; case 0x08836578u: goto L_08836578; case 0x08836588u: goto L_08836588; case 0x0883659cu: goto L_0883659c; case 0x088365b0u: goto L_088365b0; case 0x088365c4u: goto L_088365c4; case 0x088365d8u: goto L_088365d8; case 0x088365ecu: goto L_088365ec; case 0x088365fcu: goto L_088365fc; case 0x08836610u: goto L_08836610; case 0x08836624u: goto L_08836624; case 0x08836638u: goto L_08836638; case 0x08836648u: goto L_08836648; case 0x08836658u: goto L_08836658; case 0x0883666cu: goto L_0883666c; case 0x08836680u: goto L_08836680; case 0x088366dcu: goto L_088366dc; case 0x08836700u: goto L_08836700; case 0x08836758u: goto L_08836758; case 0x08836768u: goto L_08836768; case 0x08836778u: goto L_08836778; case 0x08836788u: goto L_08836788; case 0x08836798u: goto L_08836798; case 0x088367a8u: goto L_088367a8; case 0x088367b8u: goto L_088367b8; case 0x088367c8u: goto L_088367c8; case 0x088367dcu: goto L_088367dc; case 0x088367ecu: goto L_088367ec; case 0x088367fcu: goto L_088367fc; case 0x0883680cu: goto L_0883680c; case 0x0883681cu: goto L_0883681c; case 0x0883682cu: goto L_0883682c; case 0x0883683cu: goto L_0883683c; case 0x0883684cu: goto L_0883684c; case 0x0883685cu: goto L_0883685c; case 0x08836870u: goto L_08836870; case 0x08836880u: goto L_08836880; case 0x08836890u: goto L_08836890; case 0x08836904u: goto L_08836904; case 0x08836918u: goto L_08836918; case 0x08836928u: goto L_08836928; case 0x08836938u: goto L_08836938; case 0x0883694cu: goto L_0883694c; case 0x08836960u: goto L_08836960; case 0x08836974u: goto L_08836974; case 0x08836988u: goto L_08836988; case 0x08836994u: goto L_08836994; case 0x088369a8u: goto L_088369a8; case 0x088369f8u: goto L_088369f8; default: recomp_trap_unknown_indirect(c, ram, 0x088360dcu, _t); return; } }
L_088360e4:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000010u);
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_08836134; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000000u);
    c->r[2] = c->r[2] & 0x0008u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_08836134; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = c->r[2] + 0x00000008u;
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x08836124u; c->r[5] = 0u + 0x00000008u; func_08937a50(c, ram); }
    { c->r[31] = 0x0883612cu; c->r[4] = 0u + 0x00000001u; func_0892459c(c, ram); }
    { goto L_08836148; }
L_08836134:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = c->r[2] + 0x00000008u;
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x08836148u; c->r[5] = 0u + 0u; func_08937a50(c, ram); }
L_08836148:
    { c->r[31] = 0x08836150u; c->r[4] = 0u + 0x00000002u; func_08924620(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    mem_w8(ram, c->r[2] + 0x0000000eu, 0u);
    c->r[16] = mem_r32(ram, c->r[30] + 0x00000010u);
    { c->r[31] = 0x08836164u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u); func_089b7394(c, ram); }
    mem_w32(ram, c->r[16] + 0x00000004u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000004u);
    c->r[2] = c->r[2] + 0x00000020u;
    { c->r[31] = 0x08836180u; mem_w32(ram, c->r[3] + 0x00000000u, c->r[2]); func_08937aac(c, ram); }
    { c->r[31] = 0x08836188u; c->r[4] = 0u + 0x00000001u; func_089679e4(c, ram); }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = 0x08a80000u;
    c->r[2] = c->r[2] + 0x00000cccu;
    mem_w32(ram, c->r[3] + 0x00000034u, c->r[2]);
    c->r[16] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    { c->r[31] = 0x088361a8u; c->r[4] = mem_r32(ram, c->r[2] + 0x00000034u); func_08967b7c(c, ram); }
    mem_w8(ram, c->r[16] + 0x00000010u, c->r[2]);
    c->r[16] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    { c->r[31] = 0x088361bcu; c->r[4] = mem_r32(ram, c->r[2] + 0x00000034u); func_08967acc(c, ram); }
    { c->r[31] = 0x088361c4u; c->r[4] = c->r[2] + 0u; func_08968ff8(c, ram); }
    mem_w8(ram, c->r[16] + 0x00000029u, c->r[2]);
    c->r[16] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[6] = c->r[2] + 0x00000010u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[7] = c->r[2] + 0x00000020u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[8] = c->r[2] + 0x00000030u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[9] = c->r[2] + 0x00000040u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[3] = c->r[2] + 0x00000050u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000010u);
    c->r[4] = mem_r32(ram, c->r[4] + 0x00000034u);
    c->r[5] = mem_r32(ram, c->r[5] + 0x00000000u);
    c->r[10] = c->r[3] + 0u;
    { c->r[31] = 0x0883622cu; c->r[11] = c->r[2] + 0u; func_0882fb48(c, ram); }
    mem_w8(ram, c->r[16] + 0x0000002bu, c->r[2]);
    mem_w32(ram, c->r[30] + 0x0000000cu, 0u);
L_08836234:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000004u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_0883624c; }
    { goto L_08836278; }
L_0883624c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[3];
    c->r[2] = c->r[2] + 0x00000060u;
    mem_w32(ram, c->r[2] + 0x00000000u, 0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]); goto L_08836234; }
L_08836278:
    mem_w32(ram, c->r[30] + 0x0000001cu, 0u);
    mem_w32(ram, c->r[30] + 0x00000018u, 0u);
L_08836280:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000010u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_08836298; }
    { goto L_08836328; }
L_08836298:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000000u);
    c->r[2] = 0u + 0xffffffffu;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_08836318; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000029u);
    c->r[7] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[4] = mem_r32(ram, c->r[3] + 0x00000034u);
    c->r[5] = c->r[2] + 0u;
    c->r[6] = mem_r32(ram, c->r[30] + 0x00000018u);
    { c->r[31] = 0x088362dcu; c->r[7] = mem_r32(ram, c->r[7] + 0x00000000u); func_0882f9f0(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000020u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_08836318; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] + 0x00000060u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    mem_w32(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = c->r[2] + 0x00000001u;
    mem_w32(ram, c->r[30] + 0x0000001cu, c->r[2]);
L_08836318:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]); goto L_08836280; }
L_08836328:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    mem_w8(ram, c->r[2] + 0x0000002cu, 0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    mem_w8(ram, c->r[2] + 0x0000002du, 0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    mem_w16(ram, c->r[2] + 0x0000002eu, 0u);
    c->r[16] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    { c->r[31] = 0x08836350u; c->r[4] = mem_r32(ram, c->r[2] + 0x00000034u); func_08967c8c(c, ram); }
    mem_w32(ram, c->r[16] + 0x00000008u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = 0x08a50000u;
    c->r[2] = c->r[2] + 0x00002eb4u;
    mem_w32(ram, c->r[3] + 0x00000024u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = 0u + 0xffffffffu;
    mem_w8(ram, c->r[3] + 0x00000030u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    { c->r[31] = 0x0883637cu; c->r[4] = mem_r32(ram, c->r[2] + 0x00000034u); func_08967acc(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000020u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_08836398; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = 0u + 0x00000001u;
    mem_w8(ram, c->r[3] + 0x00000030u, c->r[2]);
L_08836398:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[2] = 0u + 0x00000002u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_088363b4; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = 0u + 0x00000002u;
    mem_w8(ram, c->r[3] + 0x00000030u, c->r[2]);
L_088363b4:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[2] = 0u + 0x00000003u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_088363d0; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = 0u + 0x00000002u;
    mem_w8(ram, c->r[3] + 0x00000030u, c->r[2]);
L_088363d0:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[2] = 0u + 0x00000005u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_088363ec; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = 0u + 0x00000003u;
    mem_w8(ram, c->r[3] + 0x00000030u, c->r[2]);
L_088363ec:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[2] = 0u + 0x00000006u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_08836408; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = 0u + 0x00000003u;
    mem_w8(ram, c->r[3] + 0x00000030u, c->r[2]);
L_08836408:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[2] = 0u + 0x00000007u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_08836424; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = 0u + 0x00000003u;
    mem_w8(ram, c->r[3] + 0x00000030u, c->r[2]);
L_08836424:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x0000002bu);
    c->r[2] = 0u + 0xffffffffu;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_08836464; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000030u);
    c->r[2] = 0u + 0xffffffffu;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_08836464; }
    c->r[4] = 0u + 0x00000002u;
    c->r[5] = 0u + 0x00000008u;
    { c->r[31] = 0x0883645cu; c->r[6] = 0u + 0x00000001u; func_08932330(c, ram); }
    { goto L_08836474; }
L_08836464:
    c->r[4] = 0u + 0x00000002u;
    c->r[5] = 0u + 0x00000008u;
    { c->r[31] = 0x08836474u; c->r[6] = 0u + 0x00000001u; func_089323c0(c, ram); }
L_08836474:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000029u);
    mem_w8(ram, c->r[3] + 0x00000011u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = mem_r8(ram, c->r[2] + 0x0000002au);
    mem_w8(ram, c->r[3] + 0x00000012u, c->r[2]);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00004680u;
    c->r[5] = 0x08a80000u;
    { c->r[31] = 0x088364a8u; c->r[5] = c->r[5] + 0x00004684u; hle_dispatch_stub(c, ram, 0x08a249acu); /* sceCtrlGetIdleCancelThreshold */ }
    c->r[4] = 0u + 0u;
    { c->r[31] = 0x088364b4u; c->r[5] = 0u + 0u; hle_dispatch_stub(c, ram, 0x08a249b4u); /* sceCtrlSetIdleCancelThreshold */ }
    c->r[16] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0xffffc930u;
    c->r[5] = 0x08a40000u;
    c->r[5] = c->r[5] + 0x000019e4u;
    { c->r[31] = 0x088364d0u; c->r[6] = 0u + 0u; func_089f586c(c, ram); }
    mem_w32(ram, c->r[16] + 0x00000050u, c->r[2]);
    c->r[4] = 0u + 0x00000017u;
    { c->r[31] = 0x088364e0u; c->r[5] = 0u + 0xffffffffu; func_0880aed0(c, ram); }
    { goto L_088369f8; }
L_088364e8:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    mem_w32(ram, c->r[30] + 0x00000024u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000024u);
    c->r[2] = mem_r8(ram, c->r[3] + 0x0000000cu);
    c->r[2] = (c->r[2] < 0x00000014u) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_08836688; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000024u);
    c->r[2] = mem_r8(ram, c->r[3] + 0x0000000cu);
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08a40000u;
    c->r[2] = c->r[2] + 0x00001a74u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    { u32 _t = c->r[2]; switch (_t) { case 0x0883607cu: goto L_0883607c; case 0x088360e4u: goto L_088360e4; case 0x088364e8u: goto L_088364e8; case 0x08836528u: goto L_08836528; case 0x08836538u: goto L_08836538; case 0x08836548u: goto L_08836548; case 0x08836558u: goto L_08836558; case 0x08836568u: goto L_08836568; case 0x08836578u: goto L_08836578; case 0x08836588u: goto L_08836588; case 0x0883659cu: goto L_0883659c; case 0x088365b0u: goto L_088365b0; case 0x088365c4u: goto L_088365c4; case 0x088365d8u: goto L_088365d8; case 0x088365ecu: goto L_088365ec; case 0x088365fcu: goto L_088365fc; case 0x08836610u: goto L_08836610; case 0x08836624u: goto L_08836624; case 0x08836638u: goto L_08836638; case 0x08836648u: goto L_08836648; case 0x08836658u: goto L_08836658; case 0x0883666cu: goto L_0883666c; case 0x08836680u: goto L_08836680; case 0x088366dcu: goto L_088366dc; case 0x08836700u: goto L_08836700; case 0x08836758u: goto L_08836758; case 0x08836768u: goto L_08836768; case 0x08836778u: goto L_08836778; case 0x08836788u: goto L_08836788; case 0x08836798u: goto L_08836798; case 0x088367a8u: goto L_088367a8; case 0x088367b8u: goto L_088367b8; case 0x088367c8u: goto L_088367c8; case 0x088367dcu: goto L_088367dc; case 0x088367ecu: goto L_088367ec; case 0x088367fcu: goto L_088367fc; case 0x0883680cu: goto L_0883680c; case 0x0883681cu: goto L_0883681c; case 0x0883682cu: goto L_0883682c; case 0x0883683cu: goto L_0883683c; case 0x0883684cu: goto L_0883684c; case 0x0883685cu: goto L_0883685c; case 0x08836870u: goto L_08836870; case 0x08836880u: goto L_08836880; case 0x08836890u: goto L_08836890; case 0x08836904u: goto L_08836904; case 0x08836918u: goto L_08836918; case 0x08836928u: goto L_08836928; case 0x08836938u: goto L_08836938; case 0x0883694cu: goto L_0883694c; case 0x08836960u: goto L_08836960; case 0x08836974u: goto L_08836974; case 0x08836988u: goto L_08836988; case 0x08836994u: goto L_08836994; case 0x088369a8u: goto L_088369a8; case 0x088369f8u: goto L_088369f8; default: recomp_trap_unknown_indirect(c, ram, 0x08836520u, _t); return; } }
L_08836528:
    { c->r[31] = 0x08836530u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000010u); func_08832bb8(c, ram); }
    { goto L_08836688; }
L_08836538:
    { c->r[31] = 0x08836540u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000010u); func_08832cc4(c, ram); }
    { goto L_08836688; }
L_08836548:
    { c->r[31] = 0x08836550u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000010u); func_08832f0c(c, ram); }
    { goto L_08836688; }
L_08836558:
    { c->r[31] = 0x08836560u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000010u); func_08833144(c, ram); }
    { goto L_08836688; }
L_08836568:
    { c->r[31] = 0x08836570u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000010u); func_08833320(c, ram); }
    { goto L_08836688; }
L_08836578:
    { c->r[31] = 0x08836580u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000010u); func_088334a0(c, ram); }
    { goto L_08836688; }
L_08836588:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x08836594u; c->r[5] = mem_r32(ram, c->r[30] + 0x00000010u); func_088335e0(c, ram); }
    { goto L_08836688; }
L_0883659c:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x088365a8u; c->r[5] = mem_r32(ram, c->r[30] + 0x00000010u); func_08833804(c, ram); }
    { goto L_08836688; }
L_088365b0:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x088365bcu; c->r[5] = mem_r32(ram, c->r[30] + 0x00000010u); func_08833d84(c, ram); }
    { goto L_08836688; }
L_088365c4:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x088365d0u; c->r[5] = mem_r32(ram, c->r[30] + 0x00000010u); func_08833f00(c, ram); }
    { goto L_08836688; }
L_088365d8:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x088365e4u; c->r[5] = mem_r32(ram, c->r[30] + 0x00000010u); func_08834100(c, ram); }
    { goto L_08836688; }
L_088365ec:
    { c->r[31] = 0x088365f4u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000010u); func_088344fc(c, ram); }
    { goto L_08836688; }
L_088365fc:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x08836608u; c->r[5] = mem_r32(ram, c->r[30] + 0x00000010u); func_08834688(c, ram); }
    { goto L_08836688; }
L_08836610:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x0883661cu; c->r[5] = mem_r32(ram, c->r[30] + 0x00000010u); func_08834984(c, ram); }
    { goto L_08836688; }
L_08836624:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x08836630u; c->r[5] = mem_r32(ram, c->r[30] + 0x00000010u); func_08834b64(c, ram); }
    { goto L_08836688; }
L_08836638:
    { c->r[31] = 0x08836640u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000010u); func_08835088(c, ram); }
    { goto L_08836688; }
L_08836648:
    { c->r[31] = 0x08836650u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000010u); func_08835260(c, ram); }
    { goto L_08836688; }
L_08836658:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x08836664u; c->r[5] = mem_r32(ram, c->r[30] + 0x00000010u); func_088355b8(c, ram); }
    { goto L_08836688; }
L_0883666c:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x08836678u; c->r[5] = mem_r32(ram, c->r[30] + 0x00000010u); func_08835898(c, ram); }
    { goto L_08836688; }
L_08836680:
    { c->r[31] = 0x08836688u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000010u); func_08835ed8(c, ram); }
L_08836688:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000024u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000004u);
    mem_wf32(ram, c->r[3] + 0x0000001cu, c->f[0]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000024u);
    c->r[2] = mem_r16(ram, c->r[2] + 0x00000000u);
    mem_w16(ram, c->r[3] + 0x00000018u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000024u);
    c->r[2] = mem_r16(ram, c->r[2] + 0x00000002u);
    mem_w16(ram, c->r[3] + 0x0000001au, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000014u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[3] + 0x00000014u, c->r[2]); goto L_088369f8; }
L_088366dc:
    { c->r[31] = 0x088366e4u; c->r[4] = 0u + 0u; func_0880b09c(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    { c->r[31] = 0x088366f0u; c->r[4] = mem_r32(ram, c->r[2] + 0x00000004u); func_089b73e0(c, ram); }
    { c->r[31] = 0x088366f8u; c->r[4] = 0u + 0u; func_0892459c(c, ram); }
    { goto L_088369f8; }
L_08836700:
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000019e8u);
    c->r[4] = 0x08a70000u;
    c->r[4] = c->r[4] + 0xffffb640u;
    { c->r[31] = 0x08836718u; c->f[12] = c->f[0]; func_089f1210(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    mem_w32(ram, c->r[30] + 0x00000028u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000028u);
    c->r[2] = mem_r8(ram, c->r[3] + 0x0000000cu);
    c->r[2] = (c->r[2] < 0x00000014u) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_08836898; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000028u);
    c->r[2] = mem_r8(ram, c->r[3] + 0x0000000cu);
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08a40000u;
    c->r[2] = c->r[2] + 0x00001ac4u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    { u32 _t = c->r[2]; switch (_t) { case 0x0883607cu: goto L_0883607c; case 0x088360e4u: goto L_088360e4; case 0x088364e8u: goto L_088364e8; case 0x08836528u: goto L_08836528; case 0x08836538u: goto L_08836538; case 0x08836548u: goto L_08836548; case 0x08836558u: goto L_08836558; case 0x08836568u: goto L_08836568; case 0x08836578u: goto L_08836578; case 0x08836588u: goto L_08836588; case 0x0883659cu: goto L_0883659c; case 0x088365b0u: goto L_088365b0; case 0x088365c4u: goto L_088365c4; case 0x088365d8u: goto L_088365d8; case 0x088365ecu: goto L_088365ec; case 0x088365fcu: goto L_088365fc; case 0x08836610u: goto L_08836610; case 0x08836624u: goto L_08836624; case 0x08836638u: goto L_08836638; case 0x08836648u: goto L_08836648; case 0x08836658u: goto L_08836658; case 0x0883666cu: goto L_0883666c; case 0x08836680u: goto L_08836680; case 0x088366dcu: goto L_088366dc; case 0x08836700u: goto L_08836700; case 0x08836758u: goto L_08836758; case 0x08836768u: goto L_08836768; case 0x08836778u: goto L_08836778; case 0x08836788u: goto L_08836788; case 0x08836798u: goto L_08836798; case 0x088367a8u: goto L_088367a8; case 0x088367b8u: goto L_088367b8; case 0x088367c8u: goto L_088367c8; case 0x088367dcu: goto L_088367dc; case 0x088367ecu: goto L_088367ec; case 0x088367fcu: goto L_088367fc; case 0x0883680cu: goto L_0883680c; case 0x0883681cu: goto L_0883681c; case 0x0883682cu: goto L_0883682c; case 0x0883683cu: goto L_0883683c; case 0x0883684cu: goto L_0883684c; case 0x0883685cu: goto L_0883685c; case 0x08836870u: goto L_08836870; case 0x08836880u: goto L_08836880; case 0x08836890u: goto L_08836890; case 0x08836904u: goto L_08836904; case 0x08836918u: goto L_08836918; case 0x08836928u: goto L_08836928; case 0x08836938u: goto L_08836938; case 0x0883694cu: goto L_0883694c; case 0x08836960u: goto L_08836960; case 0x08836974u: goto L_08836974; case 0x08836988u: goto L_08836988; case 0x08836994u: goto L_08836994; case 0x088369a8u: goto L_088369a8; case 0x088369f8u: goto L_088369f8; default: recomp_trap_unknown_indirect(c, ram, 0x08836750u, _t); return; } }
L_08836758:
    { c->r[31] = 0x08836760u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000010u); func_08832c7c(c, ram); }
    { goto L_08836898; }
L_08836768:
    { c->r[31] = 0x08836770u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000010u); func_08832d58(c, ram); }
    { goto L_08836898; }
L_08836778:
    { c->r[31] = 0x08836780u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000010u); func_0883306c(c, ram); }
    { goto L_08836898; }
L_08836788:
    { c->r[31] = 0x08836790u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000010u); func_0883327c(c, ram); }
    { goto L_08836898; }
L_08836798:
    { c->r[31] = 0x088367a0u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000010u); func_088333fc(c, ram); }
    { goto L_08836898; }
L_088367a8:
    { c->r[31] = 0x088367b0u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000010u); func_0883353c(c, ram); }
    { goto L_08836898; }
L_088367b8:
    { c->r[31] = 0x088367c0u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000010u); func_08833760(c, ram); }
    { goto L_08836898; }
L_088367c8:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x088367d4u; c->r[5] = mem_r32(ram, c->r[30] + 0x00000010u); func_08833a08(c, ram); }
    { goto L_08836898; }
L_088367dc:
    { c->r[31] = 0x088367e4u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000010u); func_08833e08(c, ram); }
    { goto L_08836898; }
L_088367ec:
    { c->r[31] = 0x088367f4u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000010u); func_08834064(c, ram); }
    { goto L_08836898; }
L_088367fc:
    { c->r[31] = 0x08836804u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000010u); func_08834350(c, ram); }
    { goto L_08836898; }
L_0883680c:
    { c->r[31] = 0x08836814u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000010u); func_088345b0(c, ram); }
    { goto L_08836898; }
L_0883681c:
    { c->r[31] = 0x08836824u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000010u); func_08834888(c, ram); }
    { goto L_08836898; }
L_0883682c:
    { c->r[31] = 0x08836834u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000010u); func_08834ac8(c, ram); }
    { goto L_08836898; }
L_0883683c:
    { c->r[31] = 0x08836844u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000010u); func_08834f30(c, ram); }
    { goto L_08836898; }
L_0883684c:
    { c->r[31] = 0x08836854u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000010u); func_08835128(c, ram); }
    { goto L_08836898; }
L_0883685c:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x08836868u; c->r[5] = mem_r32(ram, c->r[30] + 0x00000010u); func_088352d0(c, ram); }
    { goto L_08836898; }
L_08836870:
    { c->r[31] = 0x08836878u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000010u); func_088356e4(c, ram); }
    { goto L_08836898; }
L_08836880:
    { c->r[31] = 0x08836888u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000010u); func_088359a0(c, ram); }
    { goto L_08836898; }
L_08836890:
    { c->r[31] = 0x08836898u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000010u); func_08835f7c(c, ram); }
L_08836898:
    c->r[4] = 0x08a70000u;
    { c->r[31] = 0x088368a4u; c->r[4] = c->r[4] + 0xffffb640u; func_089f147c(c, ram); }
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000019ecu);
    c->r[4] = 0x08a70000u;
    c->r[4] = c->r[4] + 0xffffb640u;
    { c->r[31] = 0x088368bcu; c->f[12] = c->f[0]; func_089f1210(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = mem_r8(ram, c->r[2] + 0x0000000cu);
    c->r[2] = c->r[2] + 0xfffffff9u;
    mem_w32(ram, c->r[30] + 0x0000002cu, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000002cu);
    c->r[2] = c->r[3] & 0x00ffu;
    c->r[2] = (c->r[2] < 0x0000000cu) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_08836994; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000002cu);
    c->r[2] = c->r[3] & 0x00ffu;
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08a40000u;
    c->r[2] = c->r[2] + 0x00001b14u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    { u32 _t = c->r[2]; switch (_t) { case 0x0883607cu: goto L_0883607c; case 0x088360e4u: goto L_088360e4; case 0x088364e8u: goto L_088364e8; case 0x08836528u: goto L_08836528; case 0x08836538u: goto L_08836538; case 0x08836548u: goto L_08836548; case 0x08836558u: goto L_08836558; case 0x08836568u: goto L_08836568; case 0x08836578u: goto L_08836578; case 0x08836588u: goto L_08836588; case 0x0883659cu: goto L_0883659c; case 0x088365b0u: goto L_088365b0; case 0x088365c4u: goto L_088365c4; case 0x088365d8u: goto L_088365d8; case 0x088365ecu: goto L_088365ec; case 0x088365fcu: goto L_088365fc; case 0x08836610u: goto L_08836610; case 0x08836624u: goto L_08836624; case 0x08836638u: goto L_08836638; case 0x08836648u: goto L_08836648; case 0x08836658u: goto L_08836658; case 0x0883666cu: goto L_0883666c; case 0x08836680u: goto L_08836680; case 0x088366dcu: goto L_088366dc; case 0x08836700u: goto L_08836700; case 0x08836758u: goto L_08836758; case 0x08836768u: goto L_08836768; case 0x08836778u: goto L_08836778; case 0x08836788u: goto L_08836788; case 0x08836798u: goto L_08836798; case 0x088367a8u: goto L_088367a8; case 0x088367b8u: goto L_088367b8; case 0x088367c8u: goto L_088367c8; case 0x088367dcu: goto L_088367dc; case 0x088367ecu: goto L_088367ec; case 0x088367fcu: goto L_088367fc; case 0x0883680cu: goto L_0883680c; case 0x0883681cu: goto L_0883681c; case 0x0883682cu: goto L_0883682c; case 0x0883683cu: goto L_0883683c; case 0x0883684cu: goto L_0883684c; case 0x0883685cu: goto L_0883685c; case 0x08836870u: goto L_08836870; case 0x08836880u: goto L_08836880; case 0x08836890u: goto L_08836890; case 0x08836904u: goto L_08836904; case 0x08836918u: goto L_08836918; case 0x08836928u: goto L_08836928; case 0x08836938u: goto L_08836938; case 0x0883694cu: goto L_0883694c; case 0x08836960u: goto L_08836960; case 0x08836974u: goto L_08836974; case 0x08836988u: goto L_08836988; case 0x08836994u: goto L_08836994; case 0x088369a8u: goto L_088369a8; case 0x088369f8u: goto L_088369f8; default: recomp_trap_unknown_indirect(c, ram, 0x088368fcu, _t); return; } }
L_08836904:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x08836910u; c->r[5] = mem_r32(ram, c->r[30] + 0x00000010u); func_08833c98(c, ram); }
    { goto L_08836994; }
L_08836918:
    { c->r[31] = 0x08836920u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000010u); func_088343ec(c, ram); }
    { goto L_08836994; }
L_08836928:
    { c->r[31] = 0x08836930u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000010u); func_0883464c(c, ram); }
    { goto L_08836994; }
L_08836938:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x08836944u; c->r[5] = mem_r32(ram, c->r[30] + 0x00000010u); func_0883503c(c, ram); }
    { goto L_08836994; }
L_0883694c:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x08836958u; c->r[5] = mem_r32(ram, c->r[30] + 0x00000010u); func_08835214(c, ram); }
    { goto L_08836994; }
L_08836960:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x0883696cu; c->r[5] = mem_r32(ram, c->r[30] + 0x00000010u); func_08835580(c, ram); }
    { goto L_08836994; }
L_08836974:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x08836980u; c->r[5] = mem_r32(ram, c->r[30] + 0x00000010u); func_088357ac(c, ram); }
    { goto L_08836994; }
L_08836988:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x08836994u; c->r[5] = mem_r32(ram, c->r[30] + 0x00000010u); func_08835a68(c, ram); }
L_08836994:
    c->r[4] = 0x08a70000u;
    { c->r[31] = 0x088369a0u; c->r[4] = c->r[4] + 0xffffb640u; func_089f147c(c, ram); }
    { goto L_088369f8; }
L_088369a8:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x0000000cu);
    c->r[2] = 0u + 0x0000000au;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_088369f8; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_088369f8; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    mem_w32(ram, c->r[30] + 0x00000020u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x00000004u);
    c->r[2] = 0u + 0x00000003u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_088369f8; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = c->r[2] + 0x00000008u;
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x088369f8u; c->r[5] = 0u + 0x0000000bu; func_08937a50(c, ram); }
L_088369f8:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000048u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000044u);
    c->r[16] = mem_r32(ram, c->r[29] + 0x00000040u);
    { c->r[29] = c->r[29] + 0x00000050u; return; }
    return; /* fell out of func_0883607c */
}

/* func_0883ab9c  0x0883ab9c..0x0883ac3c  160 bytes, source=fde */
void func_0883ab9c(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0883ab9cu);
    c->r[29] = c->r[29] + 0xffffffd0u;
    mem_w32(ram, c->r[29] + 0x00000024u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000020u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000004u;
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]);
    c->r[2] = 0u + 0x000019e4u;
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000330u;
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000008u);
    { c->r[31] = 0x0883abe0u; c->r[6] = mem_r32(ram, c->r[30] + 0x0000000cu); func_089d9d14(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_0883ac00; }
    { mem_w32(ram, c->r[30] + 0x00000014u, 0u); goto L_0883ac24; }
L_0883ac00:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x0000003fu);
    c->r[2] = 0u + 0x00000006u;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_0883ac1c; }
    { mem_w32(ram, c->r[30] + 0x00000014u, 0u); goto L_0883ac24; }
L_0883ac1c:
    c->r[2] = 0u + 0x00000001u;
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
L_0883ac24:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000024u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000020u);
    { c->r[29] = c->r[29] + 0x00000030u; return; }
    return; /* fell out of func_0883ab9c */
}

/* func_0883d0b0  0x0883d0b0..0x0883d1a4  244 bytes, source=fde */
void func_0883d0b0(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0883d0b0u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_0883d0f0; }
    c->r[4] = 0x08a40000u;
    c->r[4] = c->r[4] + 0x00001d90u;
    c->r[5] = 0u + 0x000015a3u;
    { c->r[31] = 0x0883d0e8u; c->r[6] = 0u + 0x00000001u; func_08928cb8(c, ram); }
    { goto L_0883d190; }
L_0883d0f0:
    c->r[3] = 0x08a80000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00004e10u);
    c->r[2] = 0u + 0x00000001u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_0883d16c; }
    { c->r[31] = 0x0883d10cu; c->r[4] = 0u + 0u; func_08902cf4(c, ram); }
    c->r[2] = 0x08a80000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00004e30u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_0883d160; }
    c->r[3] = 0x08a80000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00004e2cu);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 5;
    c->r[2] = 0x08a80000u;
    c->r[2] = c->r[2] + 0x000026bcu;
    c->r[2] = c->r[3] + c->r[2];
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]);
    c->r[2] = 0x08a80000u;
    c->r[2] = c->r[2] + 0x00000cccu;
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000008u);
    { c->r[31] = 0x0883d160u; c->r[6] = 0u + 0x00000060u; func_08a19db8(c, ram); }
L_0883d160:
    c->r[2] = 0u + 0x00000001u;
    c->r[1] = 0x08a80000u;
    mem_w32(ram, c->r[1] + 0x00004e38u, c->r[2]);
L_0883d16c:
    { c->r[31] = 0x0883d174u; c->r[4] = 0u + 0x00000001u; func_089c5e18(c, ram); }
    { int _c = (c->r[2] == 0u); if (_c) goto L_0883d190; }
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00004e10u;
    c->r[5] = 0x08840000u;
    { c->r[31] = 0x0883d190u; c->r[5] = c->r[5] + 0xffffd1a4u; func_0880f03c(c, ram); }
L_0883d190:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_0883d0b0 */
}

/* func_088463b4  0x088463b4..0x08846420  108 bytes, source=sweep */
void func_088463b4(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x088463b4u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[2] = c->r[5] + 0u;
    c->r[3] = c->r[6] + 0u;
    c->r[4] = c->r[7] + 0u;
    mem_w8(ram, c->r[30] + 0x00000004u, c->r[2]);
    mem_w8(ram, c->r[30] + 0x00000005u, c->r[3]);
    mem_w8(ram, c->r[30] + 0x00000006u, c->r[4]);
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[30] + 0x00000004u);
    c->r[4] = (u32)(s32)(s8)mem_r8(ram, c->r[30] + 0x00000005u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[5];
    c->r[2] = c->r[2] + c->r[4];
    c->r[2] = c->r[2] + 0x000003c0u;
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000005u);
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[30] + 0x00000006u);
    c->r[2] = c->r[2] & c->r[3];
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_088463b4 */
}

/* func_0884beac  0x0884beac..0x0884beec  64 bytes, source=sweep */
void func_0884beac(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0884beacu);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    { c->r[31] = 0x0884bec8u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u); func_08808260(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000048u;
    { c->r[31] = 0x0884bed8u; c->r[4] = c->r[2] + 0u; func_0884d2d4(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_0884beac */
}

/* func_0884d2b4  0x0884d2b4..0x0884d2d4  32 bytes, source=sweep */
void func_0884d2b4(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0884d2b4u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_0884d2b4 */
}

/* func_088503bc  0x088503bc..0x0885040c  80 bytes, source=sweep */
void func_088503bc(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x088503bcu);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    c->r[2] = c->r[4] + 0u;
    mem_w8(ram, c->r[30] + 0x00000000u, c->r[2]);
    c->r[5] = 0x08a90000u;
    c->r[5] = c->r[5] + 0xffff8b48u;
    c->r[3] = mem_r32(ram, c->r[5] + 0x00000000u);
    c->r[4] = c->r[3] + 0u;
    c->r[2] = 0x08a90000u;
    c->r[2] = c->r[2] + 0xffff8b4cu;
    c->r[4] = c->r[4] + c->r[2];
    c->r[2] = mem_r8(ram, c->r[30] + 0x00000000u);
    mem_w8(ram, c->r[4] + 0x00000000u, c->r[2]);
    c->r[3] = c->r[3] + 0x00000001u;
    mem_w32(ram, c->r[5] + 0x00000000u, c->r[3]);
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_088503bc */
}

/* func_08856354  0x08856354..0x08856614  704 bytes, source=fde */
void func_08856354(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08856354u);
    c->r[29] = c->r[29] + 0xffffffd0u;
    mem_w32(ram, c->r[29] + 0x00000024u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000020u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    mem_wf32(ram, c->r[30] + 0x00000008u, c->f[12]);
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[6]);
    c->r[1] = 0x08a90000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0xffff8c74u);
    c->f[0] = u2f(0u);
    alx_c_cond_s(c, 14, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_08856398; }
    { goto L_088563a0; }
L_08856398:
    c->r[1] = 0x08a90000u;
    mem_w32(ram, c->r[1] + 0xffff8c74u, 0u);
L_088563a0:
    c->r[2] = 0x08a90000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0xffff8c64u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_088563cc; }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->f[12] = mem_rf32(ram, c->r[30] + 0x00000008u);
    { c->r[31] = 0x088563c4u; c->r[6] = mem_r32(ram, c->r[30] + 0x0000000cu); func_08856718(c, ram); }
    { goto L_08856600; }
L_088563cc:
    c->r[2] = 0x08a90000u;
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0xffff9170u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_088563f4; }
    c->r[4] = 0x08a90000u;
    { c->r[31] = 0x088563e8u; c->r[4] = c->r[4] + 0xffff9180u; func_08808240(c, ram); }
    c->r[2] = 0u + 0x00000001u;
    c->r[1] = 0x08a90000u;
    mem_w8(ram, c->r[1] + 0xffff9170u, c->r[2]);
L_088563f4:
    c->r[2] = 0x08a90000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0xffff8c60u);
    { int _c = ((s32)c->r[2] < 0); if (_c) goto L_08856418; }
    c->r[1] = 0x08a90000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffff8c60u);
    c->f[0] = (f32)(s32)f2u(c->f[0]);
    { mem_wf32(ram, c->r[30] + 0x00000014u, c->f[0]); goto L_08856450; }
L_08856418:
    c->r[2] = 0x08a90000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0xffff8c60u);
    c->r[2] = c->r[2] & 0x0001u;
    c->r[3] = 0x08a90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0xffff8c60u);
    c->r[3] = c->r[3] >> 1;
    c->r[2] = c->r[2] | c->r[3];
    c->f[0] = u2f(c->r[2]);
    c->f[0] = (f32)(s32)f2u(c->f[0]);
    mem_wf32(ram, c->r[30] + 0x00000014u, c->f[0]);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000014u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000014u);
    c->f[1] = c->f[1] + c->f[0];
    mem_wf32(ram, c->r[30] + 0x00000014u, c->f[1]);
L_08856450:
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000014u);
    mem_wf32(ram, c->r[30] + 0x00000010u, c->f[1]);
    c->r[2] = 0x08a90000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0xffff8c68u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_08856494; }
    c->r[2] = 0x08a90000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0xffff8c68u);
    c->r[2] = c->r[2] + 0xffffffffu;
    c->r[1] = 0x08a90000u;
    { int _c = (c->r[2] != 0u); mem_w32(ram, c->r[1] + 0xffff8c68u, c->r[2]); if (_c) goto L_088564f0; }
    c->r[1] = 0x08a90000u;
    { c->r[31] = 0x0885648cu; mem_w32(ram, c->r[1] + 0xffff8c60u, 0u); func_0885b09c(c, ram); }
    { goto L_088564f0; }
L_08856494:
    c->r[2] = 0x08a90000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0xffff8c60u);
    c->r[2] = (c->r[2] < 0x00000078u) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_088564bc; }
    c->r[2] = 0x08a90000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0xffff8c60u);
    c->r[2] = c->r[2] + 0x00000001u;
    c->r[1] = 0x08a90000u;
    mem_w32(ram, c->r[1] + 0xffff8c60u, c->r[2]);
L_088564bc:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[3] + 0x00000000u);
    c->r[1] = 0x08a90000u;
    mem_w32(ram, c->r[1] + 0xffff9180u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[3] + 0x00000004u);
    c->r[1] = 0x08a90000u;
    mem_w32(ram, c->r[1] + 0xffff9184u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[3] + 0x00000008u);
    c->r[1] = 0x08a90000u;
    mem_w32(ram, c->r[1] + 0xffff9188u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[3] + 0x0000000cu);
    c->r[1] = 0x08a90000u;
    mem_w32(ram, c->r[1] + 0xffff918cu, c->r[2]);
L_088564f0:
    c->r[2] = 0x08a90000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0xffff9180u);
    c->r[1] = 0x08a80000u;
    mem_w32(ram, c->r[1] + 0xffffbf30u, c->r[2]);
    c->r[2] = 0x08a90000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0xffff9184u);
    c->r[1] = 0x08a80000u;
    mem_w32(ram, c->r[1] + 0xffffbf34u, c->r[2]);
    c->r[2] = 0x08a90000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0xffff9188u);
    c->r[1] = 0x08a80000u;
    mem_w32(ram, c->r[1] + 0xffffbf38u, c->r[2]);
    c->r[2] = 0x08a90000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0xffff918cu);
    c->r[1] = 0x08a80000u;
    mem_w32(ram, c->r[1] + 0xffffbf3cu, c->r[2]);
    c->r[2] = 0x08a90000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0xffff9180u);
    c->r[1] = 0x08a80000u;
    mem_w32(ram, c->r[1] + 0xffffbf40u, c->r[2]);
    c->r[2] = 0x08a90000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0xffff9184u);
    c->r[1] = 0x08a80000u;
    mem_w32(ram, c->r[1] + 0xffffbf44u, c->r[2]);
    c->r[2] = 0x08a90000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0xffff9188u);
    c->r[1] = 0x08a80000u;
    mem_w32(ram, c->r[1] + 0xffffbf48u, c->r[2]);
    c->r[2] = 0x08a90000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0xffff918cu);
    c->r[1] = 0x08a80000u;
    mem_w32(ram, c->r[1] + 0xffffbf4cu, c->r[2]);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000010u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00002b54u);
    c->f[1] = c->f[1] * c->f[0];
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00002b58u);
    c->f[1] = c->f[1] + c->f[0];
    c->r[1] = 0x08a80000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffffbf34u);
    c->f[0] = c->f[0] + c->f[1];
    c->r[1] = 0x08a80000u;
    mem_wf32(ram, c->r[1] + 0xffffbf34u, c->f[0]);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000010u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00002b54u);
    c->f[1] = c->f[1] * c->f[0];
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00002b58u);
    c->f[1] = c->f[1] + c->f[0];
    c->r[1] = 0x08a80000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffffbf38u);
    c->f[0] = c->f[0] + c->f[1];
    c->r[1] = 0x08a80000u;
    mem_wf32(ram, c->r[1] + 0xffffbf38u, c->f[0]);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00002b5cu);
    c->r[1] = 0x08a80000u;
    { c->r[31] = 0x088565e4u; mem_wf32(ram, c->r[1] + 0xffffbf70u, c->f[0]); func_08857bac(c, ram); }
    c->f[1] = c->f[0];
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00002b60u);
    c->f[0] = c->f[1] * c->f[0];
    c->f[12] = c->f[0];
    { c->r[31] = 0x08856600u; c->r[4] = 0u + 0x00000001u; func_08857860(c, ram); }
L_08856600:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000024u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000020u);
    { c->r[29] = c->r[29] + 0x00000030u; return; }
    return; /* fell out of func_08856354 */
}

/* func_08859e60  0x08859e60..0x08859e90  48 bytes, source=sweep */
void func_08859e60(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08859e60u);
    c->r[29] = c->r[29] + 0xfffffff0u;
    mem_w32(ram, c->r[29] + 0x00000004u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000000u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    c->r[4] = 0u + 0u;
    { c->r[31] = 0x08859e7cu; c->r[5] = 0u | 0xffffu; func_08859c70(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000004u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000000u);
    { c->r[29] = c->r[29] + 0x00000010u; return; }
    return; /* fell out of func_08859e60 */
}

/* func_0885ab2c  0x0885ab2c..0x0885ab78  76 bytes, source=sweep */
void func_0885ab2c(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0885ab2cu);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000004u);
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000000u);
    mem_w8(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000004u);
    c->r[2] = c->r[2] + 0x00000001u;
    mem_w32(ram, c->r[3] + 0x00000004u, c->r[2]);
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_0885ab2c */
}

/* func_0885d590  0x0885d590..0x0885d5c4  52 bytes, source=sweep */
void func_0885d590(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0885d590u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08a90000u;
    c->r[2] = c->r[2] + 0xffffb408u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_0885d590 */
}

/* func_08861d78  0x08861d78..0x08861dbc  68 bytes, source=sweep */
void func_08861d78(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08861d78u);
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
    { c->r[31] = 0x08861da8u; c->r[5] = c->r[2] + 0u; func_08861028(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_08861d78 */
}

/* func_08862ee0  0x08862ee0..0x08863098  440 bytes, source=sweep */
void func_08862ee0(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08862ee0u);
    c->r[29] = c->r[29] + 0xffffffb0u;
    mem_w32(ram, c->r[29] + 0x00000048u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000044u, c->r[30]);
    mem_w32(ram, c->r[29] + 0x00000040u, c->r[16]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[2] = c->r[30] + 0x00000010u;
    c->r[4] = c->r[2] + 0u;
    c->f[12] = u2f(0u);
    c->f[13] = u2f(0u);
    c->f[14] = u2f(0u);
    c->f[15] = u2f(0u);
    { c->r[31] = 0x08862f18u; func_0880d140(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[1] = 0x08a80000u;
    mem_w32(ram, c->r[1] + 0xffffbf30u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[1] = 0x08a80000u;
    mem_w32(ram, c->r[1] + 0xffffbf34u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[1] = 0x08a80000u;
    mem_w32(ram, c->r[1] + 0xffffbf38u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[1] = 0x08a80000u;
    mem_w32(ram, c->r[1] + 0xffffbf3cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = c->r[2] + 0x00000040u;
    c->r[2] = mem_r32(ram, c->r[3] + 0x00000000u);
    c->r[1] = 0x08a80000u;
    mem_w32(ram, c->r[1] + 0xffffbf50u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[3] + 0x00000004u);
    c->r[1] = 0x08a80000u;
    mem_w32(ram, c->r[1] + 0xffffbf54u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[3] + 0x00000008u);
    c->r[1] = 0x08a80000u;
    mem_w32(ram, c->r[1] + 0xffffbf58u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[3] + 0x0000000cu);
    c->r[1] = 0x08a80000u;
    mem_w32(ram, c->r[1] + 0xffffbf5cu, c->r[2]);
    c->r[4] = c->r[30] + 0x00000010u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = c->r[2] + 0x00000030u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000020u;
    c->r[5] = c->r[3] + 0u;
    { c->r[31] = 0x08862fa0u; c->r[6] = c->r[2] + 0u; func_0884c07c(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[1] = 0x08a80000u;
    mem_w32(ram, c->r[1] + 0xffffbf40u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[1] = 0x08a80000u;
    mem_w32(ram, c->r[1] + 0xffffbf44u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[1] = 0x08a80000u;
    mem_w32(ram, c->r[1] + 0xffffbf48u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[1] = 0x08a80000u;
    mem_w32(ram, c->r[1] + 0xffffbf4cu, c->r[2]);
    c->r[4] = 0x08a90000u;
    { c->r[31] = 0x08862fdcu; c->r[4] = c->r[4] + 0xffffb950u; func_08808280(c, ram); }
    c->r[2] = 0x08a90000u;
    c->r[2] = c->r[2] + 0xffffb950u;
    mem_w32(ram, c->r[30] + 0x00000020u, c->r[2]);
    c->r[2] = 0x08a90000u;
    c->r[2] = c->r[2] + 0xffffb960u;
    mem_w32(ram, c->r[30] + 0x00000024u, c->r[2]);
    c->r[2] = 0x08a90000u;
    c->r[2] = c->r[2] + 0xffffb970u;
    mem_w32(ram, c->r[30] + 0x00000028u, c->r[2]);
    c->r[16] = c->r[30] + 0x00000010u;
    c->r[4] = c->r[30] + 0x00000030u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = c->r[2] + 0x00000030u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000020u;
    c->r[5] = c->r[3] + 0u;
    { c->r[31] = 0x08863024u; c->r[6] = c->r[2] + 0u; func_0884c07c(c, ram); }
    c->r[2] = c->r[30] + 0x00000030u;
    c->r[4] = c->r[16] + 0u;
    { c->r[31] = 0x08863034u; c->r[5] = c->r[2] + 0u; func_088678f8(c, ram); }
    c->r[2] = c->r[30] + 0x00000010u;
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000028u);
    { c->r[31] = 0x08863044u; c->r[5] = c->r[2] + 0u; func_0884c1d8(c, ram); }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000024u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = c->r[2] + 0x00000040u;
    c->r[2] = mem_r32(ram, c->r[3] + 0x00000000u);
    mem_w32(ram, c->r[4] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[3] + 0x00000004u);
    mem_w32(ram, c->r[4] + 0x00000004u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[3] + 0x00000008u);
    mem_w32(ram, c->r[4] + 0x00000008u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[3] + 0x0000000cu);
    mem_w32(ram, c->r[4] + 0x0000000cu, c->r[2]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000028u);
    { c->r[31] = 0x08863080u; c->r[6] = mem_r32(ram, c->r[30] + 0x00000024u); func_0884d26c(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000048u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000044u);
    c->r[16] = mem_r32(ram, c->r[29] + 0x00000040u);
    { c->r[29] = c->r[29] + 0x00000050u; return; }
    return; /* fell out of func_08862ee0 */
}

/* func_08867978  0x08867978..0x088679a0  40 bytes, source=sweep */
void func_08867978(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08867978u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x000002e8u);
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_08867978 */
}

/* func_0886fa80  0x0886fa80..0x0886fb04  132 bytes, source=fde */
void func_0886fa80(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0886fa80u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = 0u | 0xffffu;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_0886fac4; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = 0u + 0x00000001u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_0886fac4; }
    c->r[4] = 0x08a90000u;
    { c->r[31] = 0x0886fac4u; c->r[4] = c->r[4] + 0xffffb9c0u; func_0886fb04(c, ram); }
L_0886fac4:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = 0u | 0xffffu;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_0886faf0; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = 0u + 0x00000001u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_0886faf0; }
    c->r[4] = 0x08a90000u;
    { c->r[31] = 0x0886faf0u; c->r[4] = c->r[4] + 0xffffbe10u; func_08808260(c, ram); }
L_0886faf0:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_0886fa80 */
}

/* func_08875418  0x08875418..0x088756cc  692 bytes, source=fde */
void func_08875418(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08875418u);
    c->r[29] = c->r[29] + 0xffffffc0u;
    mem_w32(ram, c->r[29] + 0x00000034u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000030u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[6]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x000000c8u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000037f0u);
    c->f[1] = c->f[1] * c->f[0];
    c->f[0] = mem_rf32(ram, c->r[3] + 0x00000048u);
    c->f[0] = c->f[0] + c->f[1];
    mem_wf32(ram, c->r[4] + 0x00000048u, c->f[0]);
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x08875468u; c->r[4] = c->r[4] + 0x00000af4u; func_0880810c(c, ram); }
    c->r[2] = ((s32)c->r[2] < (s32)0x00000002u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_0887549c; }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000254u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000037f0u);
    c->f[1] = c->f[1] * c->f[0];
    c->f[0] = mem_rf32(ram, c->r[3] + 0x00000040u);
    c->f[0] = c->f[0] + c->f[1];
    mem_wf32(ram, c->r[4] + 0x00000040u, c->f[0]);
L_0887549c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_088756b8; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000021cu);
    c->r[2] = c->r[2] & 0x0001u;
    c->r[2] = c->r[2] & 0x00ffu;
    { int _c = (c->r[2] == 0u); if (_c) goto L_088754ec; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x000000bcu);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000037f4u);
    c->f[1] = c->f[1] * c->f[0];
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000037f4u);
    c->f[0] = c->f[0] - c->f[1];
    { mem_wf32(ram, c->r[3] + 0x000000c4u, c->f[0]); goto L_088755b4; }
L_088754ec:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x000000c4u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000037f8u);
    alx_c_cond_s(c, 12, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_08875514; }
    { goto L_08875528; }
L_08875514:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000037f8u);
    { mem_wf32(ram, c->r[2] + 0x000000c4u, c->f[0]); goto L_088755b4; }
L_08875528:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    mem_w32(ram, c->r[30] + 0x00000024u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x000000b8u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000037f4u);
    alx_c_cond_s(c, 12, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_08875558; }
    { goto L_08875568; }
L_08875558:
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000037f8u);
    { mem_wf32(ram, c->r[30] + 0x00000028u, c->f[0]); goto L_088755a8; }
L_08875568:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x000000b8u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000037f4u);
    c->f[1] = c->f[1] - c->f[0];
    mem_wf32(ram, c->r[30] + 0x00000028u, c->f[1]);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000037f8u);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000028u);
    c->f[1] = c->f[1] * c->f[0];
    mem_wf32(ram, c->r[30] + 0x00000028u, c->f[1]);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000037f8u);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000028u);
    c->f[1] = c->f[1] + c->f[0];
    mem_wf32(ram, c->r[30] + 0x00000028u, c->f[1]);
L_088755a8:
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000028u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000024u);
    mem_wf32(ram, c->r[2] + 0x000000c4u, c->f[0]);
L_088755b4:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x000000f8u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000037fcu);
    c->f[1] = c->f[1] * c->f[0];
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000037fcu);
    c->f[0] = c->f[1] + c->f[0];
    mem_wf32(ram, c->r[30] + 0x0000000cu, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000100u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000037fcu);
    c->f[1] = c->f[1] * c->f[0];
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000037fcu);
    c->f[0] = c->f[1] + c->f[0];
    mem_wf32(ram, c->r[30] + 0x00000010u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x000000fcu);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000037fcu);
    c->f[1] = c->f[1] * c->f[0];
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000037fcu);
    c->f[0] = c->f[1] + c->f[0];
    mem_wf32(ram, c->r[30] + 0x00000014u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x000000c4u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00003800u);
    c->f[0] = c->f[1] * c->f[0];
    mem_wf32(ram, c->r[30] + 0x00000018u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x000000c0u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00003800u);
    c->f[0] = c->f[1] * c->f[0];
    mem_wf32(ram, c->r[30] + 0x0000001cu, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x000000a4u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00003804u);
    c->f[1] = c->f[1] * c->f[0];
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00003808u);
    c->f[1] = c->f[1] * c->f[0];
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x0000380cu);
    c->f[1] = c->f[1] * c->f[0];
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00003810u);
    c->f[0] = c->f[1] / c->f[0];
    mem_wf32(ram, c->r[30] + 0x00000020u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000050u;
    c->r[4] = c->r[2] + 0u;
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->f[12] = mem_rf32(ram, c->r[30] + 0x0000000cu);
    c->f[13] = mem_rf32(ram, c->r[30] + 0x00000010u);
    c->f[14] = mem_rf32(ram, c->r[30] + 0x00000014u);
    c->f[15] = mem_rf32(ram, c->r[30] + 0x00000018u);
    c->f[16] = mem_rf32(ram, c->r[30] + 0x0000001cu);
    { c->r[31] = 0x088756b8u; c->f[17] = mem_rf32(ram, c->r[30] + 0x00000020u); func_089b5ce8(c, ram); }
L_088756b8:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000034u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000030u);
    { c->r[29] = c->r[29] + 0x00000040u; return; }
    return; /* fell out of func_08875418 */
}

/* func_0887da18  0x0887da18..0x0887db54  316 bytes, source=indirect */
void func_0887da18(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0887da18u);
    c->r[29] = c->r[29] + 0xffffffd0u;
    mem_w32(ram, c->r[29] + 0x00000024u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000020u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[6]);
    mem_wf32(ram, c->r[30] + 0x0000000cu, c->f[12]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_0887db40; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000100u);
    c->f[0] = u2f(0u);
    alx_c_cond_s(c, 2, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_0887da68; }
    { goto L_0887db40; }
L_0887da68:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x0000000cu);
    c->f[0] = u2f(0u);
    alx_c_cond_s(c, 2, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) == 0u); if (_c) goto L_0887da90; }
    { goto L_0887daac; }
L_0887da90:
    c->f[0] = mem_rf32(ram, c->r[30] + 0x0000000cu);
    c->f[0] = (f32)fabsf(c->f[0]);
    mem_wf32(ram, c->r[30] + 0x00000014u, c->f[0]);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000014u);
    c->f[0] = -c->f[0];
    { mem_wf32(ram, c->r[30] + 0x00000014u, c->f[0]); goto L_0887dab8; }
L_0887daac:
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x0000398cu);
    mem_wf32(ram, c->r[30] + 0x00000014u, c->f[0]);
L_0887dab8:
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000014u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    mem_wf32(ram, c->r[2] + 0x00000100u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x000000c8u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00003990u);
    alx_c_cond_s(c, 12, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_0887daec; }
    { goto L_0887db08; }
L_0887daec:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x000000c8u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00003994u);
    c->f[0] = c->f[1] - c->f[0];
    mem_wf32(ram, c->r[3] + 0x000000c8u, c->f[0]);
L_0887db08:
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x0887db14u; c->r[4] = c->r[4] + 0x00000af4u; func_08826cc8(c, ram); }
    { int _c = (c->r[2] == 0u); if (_c) goto L_0887db40; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000100u);
    c->f[0] = -c->f[0];
    mem_wf32(ram, c->r[3] + 0x000000fcu, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    mem_w32(ram, c->r[2] + 0x00000100u, 0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    mem_w32(ram, c->r[2] + 0x000000c8u, 0u);
L_0887db40:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000024u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000020u);
    { c->r[29] = c->r[29] + 0x00000030u; return; }
    return; /* fell out of func_0887da18 */
}

/* func_08882aac  0x08882aac..0x08882b54  168 bytes, source=sweep */
void func_08882aac(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08882aacu);
    c->r[29] = c->r[29] + 0xffffffd0u;
    mem_w32(ram, c->r[29] + 0x00000024u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000020u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = 0u | 0xffffu;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_08882b40; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = 0u + 0x00000001u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_08882b40; }
    c->r[2] = 0x08a90000u;
    c->r[2] = c->r[2] + 0xffffbf00u;
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
    c->r[2] = 0u + 0x00000001u;
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = 0u + 0xffffffffu;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_08882b40; }
L_08882b10:
    { c->r[31] = 0x08882b18u; c->r[4] = mem_r32(ram, c->r[30] + 0x0000000cu); func_08808240(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x00000010u;
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = c->r[2] + 0xffffffffu;
    c->r[3] = c->r[2] + 0u;
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[3]);
    c->r[2] = 0u + 0xffffffffu;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_08882b10; }
L_08882b40:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000024u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000020u);
    { c->r[29] = c->r[29] + 0x00000030u; return; }
    return; /* fell out of func_08882aac */
}

/* func_08886d50  0x08886d50..0x08886d74  36 bytes, source=residue */
void func_08886d50(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08886d50u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_wf32(ram, c->r[30] + 0x00000004u, c->f[12]);
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_08886d50 */
}

/* func_0888bdb4  0x0888bdb4..0x0888bdec  56 bytes, source=sweep */
void func_0888bdb4(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0888bdb4u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x0888bdd8u; c->r[5] = mem_r32(ram, c->r[30] + 0x00000004u); func_0888c974(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_0888bdb4 */
}

/* func_0888cab4  0x0888cab4..0x0888cb84  208 bytes, source=sweep */
void func_0888cab4(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0888cab4u);
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
    return; /* fell out of func_0888cab4 */
}

/* func_0888d7c4  0x0888d7c4..0x0888d86c  168 bytes, source=sweep */
void func_0888d7c4(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0888d7c4u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000006u);
    c->r[2] = c->r[2] + 0xffffffffu;
    mem_w8(ram, c->r[3] + 0x00000006u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000006u);
    c->r[2] = 0u + 0xffffffffu;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_0888d81c; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = 0u + 0x0000000fu;
    mem_w8(ram, c->r[3] + 0x00000006u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000004u);
    c->r[2] = c->r[2] + 0xffffffffu;
    mem_w8(ram, c->r[3] + 0x00000004u, c->r[2]);
L_0888d81c:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000005u);
    c->r[2] = c->r[2] << 4;
    c->r[2] = c->r[3] + c->r[2];
    mem_w16(ram, c->r[4] + 0x00000000u, c->r[2]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000006u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000007u);
    c->r[2] = c->r[2] << 4;
    c->r[2] = c->r[3] + c->r[2];
    mem_w16(ram, c->r[4] + 0x00000002u, c->r[2]);
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_0888d7c4 */
}

/* func_08890dcc  0x08890dcc..0x08890ed4  264 bytes, source=fde */
void func_08890dcc(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08890dccu);
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
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0u + 0x00000001u;
    { c->r[31] = 0x08890e2cu; c->r[6] = 0u + 0x00000001u; func_0888cb84(c, ram); }
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000700u);
    c->r[2] = 0u + 0x000002e8u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[4] = c->lo;
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
    { c->r[31] = 0x08890e78u; c->r[6] = 0u + 0xfffffff4u; func_089debc4(c, ram); }
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000700u);
    c->r[2] = 0u + 0x000002e8u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[4] = c->lo;
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
    { c->r[31] = 0x08890ec0u; c->r[5] = 0u + 0u; func_0888b8d0(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_08890dcc */
}

/* func_088957d0  0x088957d0..0x08895878  168 bytes, source=fde */
void func_088957d0(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x088957d0u);
    c->r[29] = c->r[29] + 0xffffffd0u;
    mem_w32(ram, c->r[29] + 0x00000024u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000020u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_wf32(ram, c->r[30] + 0x00000004u, c->f[12]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08a90000u;
    c->r[2] = c->r[2] + 0xffffebb4u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000ac8u;
    { c->r[31] = 0x08895810u; c->r[5] = c->r[2] + 0u; func_089cb820(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_08895828; }
    { mem_w32(ram, c->r[30] + 0x00000010u, 0u); goto L_08895860; }
L_08895828:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[2] + 0x00000050u;
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x0889583cu; c->f[12] = mem_rf32(ram, c->r[30] + 0x00000004u); func_089b529c(c, ram); }
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] & 0x0010u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_0889585c; }
    c->r[2] = 0u + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]); goto L_08895860; }
L_0889585c:
    mem_w32(ram, c->r[30] + 0x00000010u, 0u);
L_08895860:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000024u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000020u);
    { c->r[29] = c->r[29] + 0x00000030u; return; }
    return; /* fell out of func_088957d0 */
}

/* func_0889a15c  0x0889a15c..0x0889a1a0  68 bytes, source=sweep */
void func_0889a15c(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0889a15cu);
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
    { c->r[31] = 0x0889a18cu; c->r[5] = c->r[2] + 0u; func_088998c8(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_0889a15c */
}

/* func_0889e8a0  0x0889e8a0..0x0889e8f8  88 bytes, source=fde */
void func_0889e8a0(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0889e8a0u);
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
    { c->r[31] = 0x0889e8e4u; c->r[9] = mem_r32(ram, c->r[30] + 0x00000014u); func_0889ee9c(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000024u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000020u);
    { c->r[29] = c->r[29] + 0x00000030u; return; }
    return; /* fell out of func_0889e8a0 */
}

/* func_0889f8b0  0x0889f8b0..0x0889f8f4  68 bytes, source=sweep */
void func_0889f8b0(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0889f8b0u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = 0x1d000000u;
    c->r[2] = c->r[2] | c->r[3];
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x0889f8e0u; c->r[5] = c->r[2] + 0u; func_0889eb70(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_0889f8b0 */
}

/* func_088a3684  0x088a3684..0x088a37c0  316 bytes, source=sweep */
void func_088a3684(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x088a3684u);
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
    { int _c = (c->r[2] == 0u); if (_c) goto L_088a36dc; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = 0x00ff0000u;
    c->r[2] = c->r[2] | 0xffffu;
    c->r[3] = c->r[3] & c->r[2];
    c->r[2] = 0x12000000u;
    c->r[2] = c->r[3] | c->r[2];
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x088a36dcu; c->r[5] = c->r[2] + 0u; func_088a3304(c, ram); }
L_088a36dc:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_088a3730; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = c->r[2] >> 24;
    c->r[2] = c->r[2] & 0x000fu;
    c->r[3] = c->r[2] << 16;
    c->r[2] = 0x10000000u;
    c->r[2] = c->r[3] | c->r[2];
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x088a370cu; c->r[5] = c->r[2] + 0u; func_088a3304(c, ram); }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = 0x00ff0000u;
    c->r[2] = c->r[2] | 0xffffu;
    c->r[3] = c->r[3] & c->r[2];
    c->r[2] = 0x02000000u;
    c->r[2] = c->r[3] | c->r[2];
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x088a3730u; c->r[5] = c->r[2] + 0u; func_088a3304(c, ram); }
L_088a3730:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_088a3784; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = c->r[2] >> 24;
    c->r[2] = c->r[2] & 0x000fu;
    c->r[3] = c->r[2] << 16;
    c->r[2] = 0x10000000u;
    c->r[2] = c->r[3] | c->r[2];
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x088a3760u; c->r[5] = c->r[2] + 0u; func_088a3304(c, ram); }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = 0x00ff0000u;
    c->r[2] = c->r[2] | 0xffffu;
    c->r[3] = c->r[3] & c->r[2];
    c->r[2] = 0x01000000u;
    c->r[2] = c->r[3] | c->r[2];
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x088a3784u; c->r[5] = c->r[2] + 0u; func_088a3304(c, ram); }
L_088a3784:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[2] & 0x0007u;
    c->r[3] = c->r[2] << 16;
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = c->r[3] | c->r[2];
    c->r[2] = 0x04000000u;
    c->r[2] = c->r[3] | c->r[2];
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x088a37acu; c->r[5] = c->r[2] + 0u; func_088a3304(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000024u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000020u);
    { c->r[29] = c->r[29] + 0x00000030u; return; }
    return; /* fell out of func_088a3684 */
}

/* func_088a5ec4  0x088a5ec4..0x088a60f8  564 bytes, source=sweep */
void func_088a5ec4(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x088a5ec4u);
    c->r[29] = c->r[29] + 0xffffffb0u;
    mem_w32(ram, c->r[29] + 0x00000044u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000040u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    c->r[2] = c->r[4] + 0u;
    { c->r[31] = 0x088a5ee0u; mem_w16(ram, c->r[30] + 0x00000000u, c->r[2]); func_08a1a548(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = 0x7fff0000u;
    c->r[2] = c->r[2] | 0xffffu;
    c->r[3] = c->r[3] & c->r[2];
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[3]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    { int _c = ((s32)c->r[2] < 0); if (_c) goto L_088a5f10; }
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000010u);
    c->f[0] = (f32)(s32)f2u(c->f[0]);
    { mem_wf32(ram, c->r[30] + 0x00000014u, c->f[0]); goto L_088a5f40; }
L_088a5f10:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = c->r[3] & 0x0001u;
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[3] = c->r[4] >> 1;
    c->r[2] = c->r[2] | c->r[3];
    c->f[0] = u2f(c->r[2]);
    c->f[0] = (f32)(s32)f2u(c->f[0]);
    mem_wf32(ram, c->r[30] + 0x00000014u, c->f[0]);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000014u);
    c->f[2] = mem_rf32(ram, c->r[30] + 0x00000014u);
    c->f[1] = c->f[1] + c->f[2];
    mem_wf32(ram, c->r[30] + 0x00000014u, c->f[1]);
L_088a5f40:
    { c->r[31] = 0x088a5f48u; func_08a1a548(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = 0x7fff0000u;
    c->r[2] = c->r[2] | 0xffffu;
    c->r[3] = c->r[3] & c->r[2];
    mem_w32(ram, c->r[30] + 0x00000018u, c->r[3]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    { int _c = ((s32)c->r[2] < 0); if (_c) goto L_088a5f78; }
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000018u);
    c->f[0] = (f32)(s32)f2u(c->f[0]);
    { mem_wf32(ram, c->r[30] + 0x0000001cu, c->f[0]); goto L_088a5fa8; }
L_088a5f78:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = c->r[3] & 0x0001u;
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[3] = c->r[4] >> 1;
    c->r[2] = c->r[2] | c->r[3];
    c->f[0] = u2f(c->r[2]);
    c->f[0] = (f32)(s32)f2u(c->f[0]);
    mem_wf32(ram, c->r[30] + 0x0000001cu, c->f[0]);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x0000001cu);
    c->f[2] = mem_rf32(ram, c->r[30] + 0x0000001cu);
    c->f[1] = c->f[1] + c->f[2];
    mem_wf32(ram, c->r[30] + 0x0000001cu, c->f[1]);
L_088a5fa8:
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000014u);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x0000001cu);
    c->f[0] = c->f[0] + c->f[1];
    { c->r[31] = 0x088a5fbcu; mem_wf32(ram, c->r[30] + 0x00000020u, c->f[0]); func_08a1a548(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = 0x7fff0000u;
    c->r[2] = c->r[2] | 0xffffu;
    c->r[3] = c->r[3] & c->r[2];
    mem_w32(ram, c->r[30] + 0x00000024u, c->r[3]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000024u);
    { int _c = ((s32)c->r[2] < 0); if (_c) goto L_088a5fec; }
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000024u);
    c->f[0] = (f32)(s32)f2u(c->f[0]);
    { mem_wf32(ram, c->r[30] + 0x00000028u, c->f[0]); goto L_088a601c; }
L_088a5fec:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000024u);
    c->r[2] = c->r[3] & 0x0001u;
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000024u);
    c->r[3] = c->r[4] >> 1;
    c->r[2] = c->r[2] | c->r[3];
    c->f[0] = u2f(c->r[2]);
    c->f[0] = (f32)(s32)f2u(c->f[0]);
    mem_wf32(ram, c->r[30] + 0x00000028u, c->f[0]);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000028u);
    c->f[2] = mem_rf32(ram, c->r[30] + 0x00000028u);
    c->f[1] = c->f[1] + c->f[2];
    mem_wf32(ram, c->r[30] + 0x00000028u, c->f[1]);
L_088a601c:
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000020u);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000028u);
    c->f[0] = c->f[0] + c->f[1];
    { c->r[31] = 0x088a6030u; mem_wf32(ram, c->r[30] + 0x0000002cu, c->f[0]); func_08a1a548(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = 0x7fff0000u;
    c->r[2] = c->r[2] | 0xffffu;
    c->r[3] = c->r[3] & c->r[2];
    mem_w32(ram, c->r[30] + 0x00000030u, c->r[3]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000030u);
    { int _c = ((s32)c->r[2] < 0); if (_c) goto L_088a6060; }
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000030u);
    c->f[0] = (f32)(s32)f2u(c->f[0]);
    { mem_wf32(ram, c->r[30] + 0x00000034u, c->f[0]); goto L_088a6090; }
L_088a6060:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000030u);
    c->r[2] = c->r[3] & 0x0001u;
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000030u);
    c->r[3] = c->r[4] >> 1;
    c->r[2] = c->r[2] | c->r[3];
    c->f[0] = u2f(c->r[2]);
    c->f[0] = (f32)(s32)f2u(c->f[0]);
    mem_wf32(ram, c->r[30] + 0x00000034u, c->f[0]);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000034u);
    c->f[2] = mem_rf32(ram, c->r[30] + 0x00000034u);
    c->f[1] = c->f[1] + c->f[2];
    mem_wf32(ram, c->r[30] + 0x00000034u, c->f[1]);
L_088a6090:
    c->f[1] = mem_rf32(ram, c->r[30] + 0x0000002cu);
    c->f[2] = mem_rf32(ram, c->r[30] + 0x00000034u);
    c->f[0] = c->f[1] + c->f[2];
    mem_wf32(ram, c->r[30] + 0x00000004u, c->f[0]);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000004u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000045c8u);
    c->f[0] = c->f[1] / c->f[0];
    mem_wf32(ram, c->r[30] + 0x00000008u, c->f[0]);
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] << 1;
    c->f[0] = u2f(c->r[2]);
    c->f[1] = (f32)(s32)f2u(c->f[0]);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000008u);
    c->f[0] = c->f[1] * c->f[0];
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[30] + 0x00000000u);
    c->r[3] = f2u(c->f[0]);
    c->r[2] = c->r[3] - c->r[2];
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000044u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000040u);
    { c->r[29] = c->r[29] + 0x00000050u; return; }
    return; /* fell out of func_088a5ec4 */
}

/* func_088aded8  0x088aded8..0x088adf1c  68 bytes, source=sweep */
void func_088aded8(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x088aded8u);
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
    { c->r[31] = 0x088adf08u; c->r[5] = c->r[2] + 0u; func_088ad160(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_088aded8 */
}

/* func_088b2538  0x088b2538..0x088b2608  208 bytes, source=sweep */
void func_088b2538(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x088b2538u);
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
    return; /* fell out of func_088b2538 */
}

/* func_088b59ec  0x088b59ec..0x088b5a30  68 bytes, source=sweep */
void func_088b59ec(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x088b59ecu);
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
    return; /* fell out of func_088b59ec */
}

/* func_088bb5d0  0x088bb5d0..0x088bbad8  1288 bytes, source=fde */
void func_088bb5d0(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x088bb5d0u);
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
    mem_w32(ram, c->r[30] + 0x00000330u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000330u);
    { int _c = (c->r[3] == 0u); if (_c) goto L_088bb62c; }
    c->r[2] = 0u + 0x00000007u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000330u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_088bb864; }
    { goto L_088bbac0; }
L_088bb62c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    mem_w32(ram, c->r[2] + 0x00000000u, 0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000010u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_088bb660; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000010u);
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    mem_w32(ram, c->r[3] + 0x00000000u, c->r[2]);
L_088bb660:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x088bb66cu; c->r[5] = 0u + 0x00000001u; func_088679d4(c, ram); }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x088bb678u; c->r[5] = 0u + 0x00000003u; func_088679a0(c, ram); }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = 0u + 0x0000000cu;
    mem_w8(ram, c->r[3] + 0x000000c9u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    mem_w8(ram, c->r[2] + 0x00000087u, 0u);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x0000008cu);
    c->r[2] = 0x00100000u;
    c->r[2] = c->r[3] | c->r[2];
    mem_w32(ram, c->r[4] + 0x0000008cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_088bb768; }
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x088bb6c0u; c->r[4] = c->r[4] + 0x00000af4u; func_0880d410(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = c->r[30] + 0x00000020u;
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0x08a40000u;
    c->r[5] = c->r[5] + 0x00004b28u;
    { c->r[31] = 0x088bb6dcu; c->r[6] = c->r[3] + 0u; func_08a1ad34(c, ram); }
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x088bb6e8u; c->r[4] = c->r[4] + 0x00000af4u; func_0880d410(c, ram); }
    c->r[16] = c->r[2] + 0u;
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x088bb6f8u; c->r[4] = c->r[4] + 0x00000af4u; func_08813c28(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = c->r[30] + 0x00000120u;
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0x08a40000u;
    c->r[5] = c->r[5] + 0x00004b38u;
    c->r[6] = c->r[16] + 0u;
    { c->r[31] = 0x088bb718u; c->r[7] = c->r[3] + 0u; func_08a1ad34(c, ram); }
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x088bb724u; c->r[4] = c->r[4] + 0x00000af4u; func_0880d410(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = c->r[30] + 0x00000220u;
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0x08a40000u;
    c->r[5] = c->r[5] + 0x00004b48u;
    { c->r[31] = 0x088bb740u; c->r[6] = c->r[3] + 0u; func_08a1ad34(c, ram); }
    c->r[2] = c->r[30] + 0x00000020u;
    c->r[3] = c->r[30] + 0x00000120u;
    c->r[7] = c->r[30] + 0x00000220u;
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = c->r[2] + 0u;
    c->r[6] = c->r[3] + 0u;
    { c->r[31] = 0x088bb760u; c->r[8] = 0u + 0u; func_089b75f8(c, ram); }
    { goto L_088bb814; }
L_088bb768:
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x088bb774u; c->r[4] = c->r[4] + 0x00000af4u; func_0880d410(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = c->r[30] + 0x00000020u;
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0x08a40000u;
    c->r[5] = c->r[5] + 0x00004b58u;
    { c->r[31] = 0x088bb790u; c->r[6] = c->r[3] + 0u; func_08a1ad34(c, ram); }
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x088bb79cu; c->r[4] = c->r[4] + 0x00000af4u; func_0880d410(c, ram); }
    c->r[16] = c->r[2] + 0u;
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x088bb7acu; c->r[4] = c->r[4] + 0x00000af4u; func_08813c28(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = c->r[30] + 0x00000120u;
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0x08a40000u;
    c->r[5] = c->r[5] + 0x00004b38u;
    c->r[6] = c->r[16] + 0u;
    { c->r[31] = 0x088bb7ccu; c->r[7] = c->r[3] + 0u; func_08a1ad34(c, ram); }
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x088bb7d8u; c->r[4] = c->r[4] + 0x00000af4u; func_0880d410(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = c->r[30] + 0x00000220u;
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0x08a40000u;
    c->r[5] = c->r[5] + 0x00004b68u;
    { c->r[31] = 0x088bb7f4u; c->r[6] = c->r[3] + 0u; func_08a1ad34(c, ram); }
    c->r[2] = c->r[30] + 0x00000020u;
    c->r[3] = c->r[30] + 0x00000120u;
    c->r[7] = c->r[30] + 0x00000220u;
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = c->r[2] + 0u;
    c->r[6] = c->r[3] + 0u;
    { c->r[31] = 0x088bb814u; c->r[8] = 0u + 0u; func_089b75f8(c, ram); }
L_088bb814:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000008u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000ac8u;
    { c->r[31] = 0x088bb830u; c->r[5] = c->r[2] + 0u; func_089cb820(c, ram); }
    { int _c = (c->r[2] == 0u); if (_c) goto L_088bb850; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = c->r[2] + 0x00000008u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000008u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    mem_w32(ram, c->r[3] + 0x00000000u, c->r[2]);
L_088bb850:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00004b78u);
    { mem_wf32(ram, c->r[2] + 0x00000004u, c->f[0]); goto L_088bbac0; }
L_088bb864:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x00000008u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000ac8u;
    { c->r[31] = 0x088bb880u; c->r[5] = c->r[2] + 0u; func_089cb820(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_088bb960; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[4] = c->r[2] + 0x00000020u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
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
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000064u);
    c->r[2] = mem_r8(ram, c->r[2] + 0x0000000au);
    mem_w32(ram, c->r[30] + 0x00000320u, c->r[2]);
    mem_w32(ram, c->r[30] + 0x00000324u, 0u);
L_088bb904:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000324u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000320u);
    c->r[2] = ((s32)c->r[2] < (s32)c->r[3]) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_088bb920; }
    { goto L_088bb96c; }
L_088bb920:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000050u;
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00004b7cu);
    c->r[1] = 0x08a40000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0x00004b7cu);
    c->r[4] = c->r[2] + 0u;
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000324u);
    c->f[12] = c->f[0];
    { c->r[31] = 0x088bb94cu; c->f[13] = c->f[1]; func_089b5804(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000328u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000324u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000324u, c->r[2]); goto L_088bb904; }
L_088bb960:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x088bb96cu; c->r[5] = 0u + 0x00000002u; func_0880d260(c, ram); }
L_088bb96c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    { c->r[31] = 0x088bb978u; mem_w32(ram, c->r[30] + 0x00000328u, c->r[2]); func_08862cb4(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000324u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[2] = 0u + 0x00000001u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_088bba48; }
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x088bb99cu; c->r[4] = c->r[4] + 0x00000af4u; func_08826a78(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = 0u + 0x00000001u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_088bba48; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    mem_w32(ram, c->r[30] + 0x00000320u, c->r[2]);
    { c->r[31] = 0x088bb9bcu; c->r[4] = mem_r32(ram, c->r[30] + 0x00000320u); func_08808280(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[5] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000320u);
    c->f[12] = mem_rf32(ram, c->r[2] + 0x00000004u);
    c->f[13] = mem_rf32(ram, c->r[3] + 0x00000004u);
    { c->r[31] = 0x088bb9dcu; c->f[14] = mem_rf32(ram, c->r[5] + 0x00000004u); func_0881a114(c, ram); }
    { c->r[31] = 0x088bb9e4u; func_08867ab8(c, ram); }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000320u);
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000320u);
    { c->r[31] = 0x088bb9f4u; c->r[6] = c->r[2] + 0u; func_0884c6d4(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000320u);
    c->r[2] = c->r[2] + 0x00000030u;
    mem_w32(ram, c->r[30] + 0x0000032cu, c->r[2]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x0000032cu);
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
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000320u);
    c->r[6] = 0u + 0x00000003u;
    { c->r[31] = 0x088bba40u; c->r[7] = 0u + 0u; func_089b8b50(c, ram); }
    { goto L_088bbac0; }
L_088bba48:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000324u);
    c->r[2] = c->r[2] & 0x0001u;
    c->r[2] = c->r[2] & 0x00ffu;
    { int _c = (c->r[2] == 0u); if (_c) goto L_088bbab0; }
    c->r[2] = 0x08a90000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0xffffbbdcu);
    c->r[2] = c->r[2] & 0x0020u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_088bbab0; }
    c->r[2] = c->r[30] + 0x00000020u;
    { c->r[31] = 0x088bba7cu; c->r[4] = c->r[2] + 0u; func_08808260(c, ram); }
    c->r[2] = c->r[30] + 0x00000020u;
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x088bba90u; c->r[6] = 0u + 0x00000001u; func_089b8a34(c, ram); }
    c->r[2] = c->r[30] + 0x00000020u;
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = c->r[2] + 0u;
    c->r[6] = 0u + 0x00000003u;
    { c->r[31] = 0x088bbaa8u; c->r[7] = 0u + 0u; func_089b8b50(c, ram); }
    { goto L_088bbac0; }
L_088bbab0:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000328u);
    mem_w32(ram, c->r[2] + 0x00000040u, 0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000328u);
    mem_w32(ram, c->r[2] + 0x00000044u, 0u);
L_088bbac0:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000348u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000344u);
    c->r[16] = mem_r32(ram, c->r[29] + 0x00000340u);
    { c->r[29] = c->r[29] + 0x00000350u; return; }
    return; /* fell out of func_088bb5d0 */
}

/* func_088bed3c  0x088bed3c..0x088bed80  68 bytes, source=sweep */
void func_088bed3c(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x088bed3cu);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = 0x1d000000u;
    c->r[2] = c->r[2] | c->r[3];
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x088bed6cu; c->r[5] = c->r[2] + 0u; func_088be14c(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_088bed3c */
}

/* func_088bfcc0  0x088bfcc0..0x088bfdb0  240 bytes, source=fde */
void func_088bfcc0(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x088bfcc0u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x000000e0u;
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000020u);
    c->r[3] = mem_r8(ram, c->r[2] + 0x0000001cu);
    c->r[2] = 0u + 0x00000001u;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_088bfd4c; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000020u);
    c->r[3] = mem_r8(ram, c->r[2] + 0x0000001cu);
    c->r[2] = 0u + 0x00000005u;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_088bfd4c; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000020u);
    c->r[3] = mem_r8(ram, c->r[2] + 0x0000001cu);
    c->r[2] = 0u + 0x00000004u;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_088bfd4c; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000020u);
    c->r[3] = mem_r8(ram, c->r[2] + 0x0000001cu);
    c->r[2] = 0u + 0x00000002u;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_088bfd4c; }
    { goto L_088bfd9c; }
L_088bfd4c:
    { c->r[31] = 0x088bfd54u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u); func_089c35d4(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = 0x08a80000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00002ed8u);
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_088bfd80; }
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000af4u;
    { c->r[31] = 0x088bfd78u; c->r[5] = 0u + 0u; func_088c2580(c, ram); }
    { goto L_088bfd9c; }
L_088bfd80:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_088bfd9c; }
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000af4u;
    { c->r[31] = 0x088bfd9cu; c->r[5] = 0u + 0x00000001u; func_088c2580(c, ram); }
L_088bfd9c:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_088bfcc0 */
}

/* func_088c3358  0x088c3358..0x088c3518  448 bytes, source=fde */
void func_088c3358(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x088c3358u);
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
    c->r[2] = c->r[30] + 0x00000010u;
    { c->r[31] = 0x088c3390u; c->r[4] = c->r[2] + 0u; func_08808240(c, ram); }
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00004eecu);
    mem_wf32(ram, c->r[30] + 0x00000020u, c->f[0]);
    c->r[4] = c->r[30] + 0x00000030u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = c->r[2] + 0x00000020u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x00000010u;
    c->r[5] = c->r[3] + 0u;
    { c->r[31] = 0x088c33bcu; c->r[6] = c->r[2] + 0u; func_08859f30(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x00000000u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_088c343c; }
    c->r[4] = 0u + 0x00000002u;
    c->r[5] = 0u + 0x00000415u;
    c->r[6] = 0u + 0u;
    c->r[7] = 0u + 0u;
    c->r[8] = 0u + 0u;
    { c->r[31] = 0x088c33e8u; c->r[9] = 0u + 0u; func_089c6bec(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000040u, c->r[2]);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00004ef0u);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000040u);
    { c->r[31] = 0x088c3400u; c->f[12] = c->f[0]; func_089c77f4(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000040u);
    c->r[3] = c->r[2] + 0x00000020u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000030u);
    mem_w32(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000034u);
    mem_w32(ram, c->r[3] + 0x00000004u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000038u);
    mem_w32(ram, c->r[3] + 0x00000008u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000003cu);
    mem_w32(ram, c->r[3] + 0x0000000cu, c->r[2]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x088c3434u; c->r[5] = 0u + 0x00000002u; func_0884d1b0(c, ram); }
    { goto L_088c3504; }
L_088c343c:
    c->r[4] = c->r[30] + 0x00000010u;
    c->r[5] = c->r[30] + 0x00000020u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000020u;
    c->r[3] = c->r[30] + 0x00000030u;
    c->r[6] = c->r[2] + 0u;
    { c->r[31] = 0x088c345cu; c->r[7] = c->r[3] + 0u; func_08886dbc(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000040u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000040u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_088c34dc; }
    c->r[4] = 0u + 0x00000002u;
    c->r[5] = 0u + 0x00000415u;
    c->r[6] = 0u + 0u;
    c->r[7] = 0u + 0u;
    c->r[8] = 0u + 0u;
    { c->r[31] = 0x088c3488u; c->r[9] = 0u + 0u; func_089c6bec(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000044u, c->r[2]);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00004ef0u);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000044u);
    { c->r[31] = 0x088c34a0u; c->f[12] = c->f[0]; func_089c77f4(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000044u);
    c->r[3] = c->r[2] + 0x00000020u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    mem_w32(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    mem_w32(ram, c->r[3] + 0x00000004u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    mem_w32(ram, c->r[3] + 0x00000008u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    mem_w32(ram, c->r[3] + 0x0000000cu, c->r[2]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x088c34d4u; c->r[5] = 0u + 0x00000002u; func_0884d1b0(c, ram); }
    { goto L_088c3504; }
L_088c34dc:
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
L_088c3504:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000054u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000050u);
    { c->r[29] = c->r[29] + 0x00000060u; return; }
    return; /* fell out of func_088c3358 */
}

/* func_088c8f58  0x088c8f58..0x088c8f9c  68 bytes, source=sweep */
void func_088c8f58(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x088c8f58u);
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
    { c->r[31] = 0x088c8f88u; c->r[5] = c->r[2] + 0u; func_088c8760(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_088c8f58 */
}

/* func_088cbc64  0x088cbc64..0x088cc4e8  2180 bytes, source=fde */
void func_088cbc64(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x088cbc64u);
    c->r[29] = c->r[29] + 0xfffffed0u;
    mem_w32(ram, c->r[29] + 0x0000012cu, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000128u, c->r[30]);
    mem_w32(ram, c->r[29] + 0x00000124u, c->r[17]);
    mem_w32(ram, c->r[29] + 0x00000120u, c->r[16]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    c->r[2] = c->r[30] + 0x00000010u;
    { c->r[31] = 0x088cbc90u; c->r[4] = c->r[2] + 0u; func_08808240(c, ram); }
    c->r[2] = c->r[30] + 0x00000020u;
    { c->r[31] = 0x088cbc9cu; c->r[4] = c->r[2] + 0u; func_08808240(c, ram); }
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000050f8u);
    mem_wf32(ram, c->r[30] + 0x00000030u, c->f[0]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000020u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000010u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000050fcu);
    c->f[1] = c->f[1] * c->f[0];
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00005100u);
    c->f[1] = c->f[1] * c->f[0];
    c->f[0] = mem_rf32(ram, c->r[3] + 0x00000038u);
    alx_c_cond_s(c, 12, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_088cbcec; }
    { goto L_088cbd34; }
L_088cbcec:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000020u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000014u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000050fcu);
    c->f[1] = c->f[1] * c->f[0];
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00005100u);
    c->f[1] = c->f[1] * c->f[0];
    c->r[1] = 0x08a80000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00002e40u);
    c->f[1] = c->f[1] * c->f[0];
    c->f[0] = mem_rf32(ram, c->r[3] + 0x00000038u);
    c->f[0] = c->f[0] + c->f[1];
    { mem_wf32(ram, c->r[4] + 0x00000038u, c->f[0]); goto L_088cbdc8; }
L_088cbd34:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000020u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000010u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000050fcu);
    c->f[1] = c->f[1] * c->f[0];
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00005100u);
    c->f[2] = c->f[1] * c->f[0];
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000020u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000014u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000050fcu);
    c->f[1] = c->f[1] * c->f[0];
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00005100u);
    c->f[1] = c->f[1] * c->f[0];
    c->r[1] = 0x08a80000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00002e40u);
    c->f[0] = c->f[1] * c->f[0];
    c->f[1] = c->f[2] + c->f[0];
    c->f[0] = mem_rf32(ram, c->r[3] + 0x00000038u);
    alx_c_cond_s(c, 12, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_088cbdac; }
    { goto L_088cbdc8; }
L_088cbdac:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000038u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00005104u);
    c->f[0] = c->f[1] * c->f[0];
    mem_wf32(ram, c->r[3] + 0x00000038u, c->f[0]);
L_088cbdc8:
    c->r[2] = c->r[30] + 0x00000040u;
    { c->r[31] = 0x088cbdd4u; c->r[4] = c->r[2] + 0u; func_08808240(c, ram); }
    c->r[3] = c->r[30] + 0x00000040u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000030u;
    c->r[4] = c->r[3] + 0u;
    { c->r[31] = 0x088cbdecu; c->r[5] = c->r[2] + 0u; func_0884c1d8(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000030u;
    c->r[3] = c->r[30] + 0x00000040u;
    c->r[6] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[4] = c->r[2] + 0u;
    c->r[5] = c->r[3] + 0u;
    { c->r[31] = 0x088cbe0cu; c->f[12] = mem_rf32(ram, c->r[6] + 0x00000038u); func_0884c224(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[2] + 0x00000024u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000ac8u;
    { c->r[31] = 0x088cbe28u; c->r[5] = c->r[2] + 0u; func_089cb820(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000050u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000050u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_088cbe5c; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000050u);
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x000000b0u);
    { int _c = ((s32)c->r[2] > 0); if (_c) goto L_088cbe5c; }
    mem_w32(ram, c->r[30] + 0x00000050u, 0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = c->r[2] + 0x00000024u;
    c->r[2] = 0u + 0xffffffffu;
    mem_w32(ram, c->r[3] + 0x00000000u, c->r[2]);
L_088cbe5c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000050u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_088cc278; }
    c->r[2] = c->r[30] + 0x00000060u;
    { c->r[31] = 0x088cbe74u; c->r[4] = c->r[2] + 0u; func_08808240(c, ram); }
    c->r[2] = c->r[30] + 0x00000070u;
    { c->r[31] = 0x088cbe80u; c->r[4] = c->r[2] + 0u; func_08808240(c, ram); }
    c->r[3] = c->r[30] + 0x00000080u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000050u);
    c->r[2] = c->r[2] + 0x00000030u;
    c->r[4] = c->r[3] + 0u;
    c->r[5] = c->r[2] + 0u;
    c->r[1] = 0x08a80000u;
    { c->r[31] = 0x088cbea0u; c->f[12] = mem_rf32(ram, c->r[1] + 0x00002e48u); func_0884c120(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000080u);
    mem_w32(ram, c->r[30] + 0x00000060u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000084u);
    mem_w32(ram, c->r[30] + 0x00000064u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000088u);
    mem_w32(ram, c->r[30] + 0x00000068u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000008cu);
    mem_w32(ram, c->r[30] + 0x0000006cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000057u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_088cbf20; }
    c->r[2] = c->r[30] + 0x00000080u;
    c->r[4] = c->r[2] + 0u;
    c->f[12] = u2f(0u);
    c->f[13] = u2f(0u);
    c->f[14] = u2f(0u);
    c->f[15] = u2f(0u);
    { c->r[31] = 0x088cbef0u; func_0880d140(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000080u);
    mem_w32(ram, c->r[30] + 0x00000070u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000084u);
    mem_w32(ram, c->r[30] + 0x00000074u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000088u);
    mem_w32(ram, c->r[30] + 0x00000078u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000008cu);
    mem_w32(ram, c->r[30] + 0x0000007cu, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = 0u + 0x00000001u;
    { mem_w8(ram, c->r[3] + 0x00000057u, c->r[2]); goto L_088cbf5c; }
L_088cbf20:
    c->r[3] = c->r[30] + 0x00000080u;
    c->r[5] = c->r[30] + 0x00000060u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[2] + 0x00000010u;
    c->r[4] = c->r[3] + 0u;
    { c->r[31] = 0x088cbf3cu; c->r[6] = c->r[2] + 0u; func_0884c07c(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000080u);
    mem_w32(ram, c->r[30] + 0x00000070u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000084u);
    mem_w32(ram, c->r[30] + 0x00000074u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000088u);
    mem_w32(ram, c->r[30] + 0x00000078u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000008cu);
    mem_w32(ram, c->r[30] + 0x0000007cu, c->r[2]);
L_088cbf5c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = c->r[2] + 0x00000010u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000060u);
    mem_w32(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000064u);
    mem_w32(ram, c->r[3] + 0x00000004u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000068u);
    mem_w32(ram, c->r[3] + 0x00000008u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000006cu);
    mem_w32(ram, c->r[3] + 0x0000000cu, c->r[2]);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00005108u);
    mem_wf32(ram, c->r[30] + 0x00000090u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x0000004cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x000000b0u);
    c->r[2] = c->r[2] + 0xfffffffbu;
    c->r[2] = ((s32)c->r[3] < (s32)c->r[2]) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_088cc00c; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x0000004cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x000000b0u);
    c->r[2] = c->r[3] - c->r[2];
    c->r[2] = c->r[2] + 0x00000005u;
    c->r[2] = ((s32)c->r[2] < (s32)0x00000006u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_088cbfdc; }
    { mem_w32(ram, c->r[30] + 0x00000090u, 0u); goto L_088cc00c; }
L_088cbfdc:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x0000004cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x000000b0u);
    c->r[2] = c->r[3] - c->r[2];
    c->r[2] = c->r[2] + 0x00000005u;
    c->f[0] = u2f(c->r[2]);
    c->f[1] = (f32)(s32)f2u(c->f[0]);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x0000510cu);
    c->f[0] = c->f[1] * c->f[0];
    mem_wf32(ram, c->r[30] + 0x00000090u, c->f[0]);
L_088cc00c:
    c->r[2] = c->r[30] + 0x000000a0u;
    { c->r[31] = 0x088cc018u; c->r[4] = c->r[2] + 0u; func_088d0dbc(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = c->r[2] + 0x00000020u;
    c->r[2] = mem_r32(ram, c->r[3] + 0x00000000u);
    mem_w32(ram, c->r[30] + 0x000000a0u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[3] + 0x00000004u);
    mem_w32(ram, c->r[30] + 0x000000a4u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[3] + 0x00000008u);
    mem_w32(ram, c->r[30] + 0x000000a8u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[3] + 0x0000000cu);
    mem_w32(ram, c->r[30] + 0x000000acu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000050u);
    c->r[3] = c->r[2] + 0x00000020u;
    c->r[2] = mem_r32(ram, c->r[3] + 0x00000000u);
    mem_w32(ram, c->r[30] + 0x000000c0u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[3] + 0x00000004u);
    mem_w32(ram, c->r[30] + 0x000000c4u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[3] + 0x00000008u);
    mem_w32(ram, c->r[30] + 0x000000c8u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[3] + 0x0000000cu);
    mem_w32(ram, c->r[30] + 0x000000ccu, c->r[2]);
    c->r[3] = c->r[30] + 0x00000080u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000030u;
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00005108u);
    c->r[4] = c->r[3] + 0u;
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x088cc08cu; c->f[12] = c->f[0]; func_0884c120(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000080u);
    mem_w32(ram, c->r[30] + 0x000000b0u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000084u);
    mem_w32(ram, c->r[30] + 0x000000b4u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000088u);
    mem_w32(ram, c->r[30] + 0x000000b8u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000008cu);
    mem_w32(ram, c->r[30] + 0x000000bcu, c->r[2]);
    c->r[2] = c->r[30] + 0x00000080u;
    c->r[3] = c->r[30] + 0x00000060u;
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00005108u);
    c->r[4] = c->r[2] + 0u;
    c->r[5] = c->r[3] + 0u;
    { c->r[31] = 0x088cc0ccu; c->f[12] = c->f[0]; func_0884c120(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000080u);
    mem_w32(ram, c->r[30] + 0x000000d0u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000084u);
    mem_w32(ram, c->r[30] + 0x000000d4u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000088u);
    mem_w32(ram, c->r[30] + 0x000000d8u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000008cu);
    mem_w32(ram, c->r[30] + 0x000000dcu, c->r[2]);
    c->r[2] = c->r[30] + 0x00000080u;
    c->r[3] = c->r[30] + 0x00000070u;
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00005108u);
    c->r[4] = c->r[2] + 0u;
    c->r[5] = c->r[3] + 0u;
    { c->r[31] = 0x088cc10cu; c->f[12] = c->f[0]; func_0884c120(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000080u);
    mem_w32(ram, c->r[30] + 0x000000e0u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000084u);
    mem_w32(ram, c->r[30] + 0x000000e4u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000088u);
    mem_w32(ram, c->r[30] + 0x000000e8u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000008cu);
    mem_w32(ram, c->r[30] + 0x000000ecu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x0000003cu);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000090u);
    c->f[0] = c->f[1] * c->f[0];
    mem_wf32(ram, c->r[30] + 0x000000f0u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x0000002cu);
    c->r[2] = 0x00020000u;
    c->r[2] = c->r[3] & c->r[2];
    { int _c = (c->r[2] != 0u); if (_c) goto L_088cc168; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000040u);
    { mem_wf32(ram, c->r[30] + 0x0000011cu, c->f[0]); goto L_088cc174; }
L_088cc168:
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00005110u);
    mem_wf32(ram, c->r[30] + 0x0000011cu, c->f[0]);
L_088cc174:
    c->f[0] = mem_rf32(ram, c->r[30] + 0x0000011cu);
    mem_wf32(ram, c->r[30] + 0x000000f4u, c->f[0]);
    c->r[2] = c->r[30] + 0x000000a0u;
    { c->r[31] = 0x088cc188u; c->r[4] = c->r[2] + 0u; func_088cab18(c, ram); }
    { int _c = (c->r[2] == 0u); if (_c) goto L_088cc1d8; }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000050u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000050u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x0000008cu);
    c->r[2] = 0x00080000u;
    c->r[2] = c->r[3] | c->r[2];
    mem_w32(ram, c->r[4] + 0x0000008cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x00000052u);
    { int _c = ((s32)c->r[2] < 0); if (_c) goto L_088cc1d8; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = mem_r8(ram, c->r[2] + 0x00000052u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000055u);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = c->r[3] + 0u;
    { c->r[31] = 0x088cc1d8u; c->r[6] = c->r[2] + 0u; func_0899ebf0(c, ram); }
L_088cc1d8:
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000b0u);
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000b4u);
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000b8u);
    mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000bcu);
    mem_w32(ram, c->r[30] + 0x0000001cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[16] = c->r[2] + 0x00000030u;
    c->r[17] = c->r[30] + 0x00000080u;
    c->r[3] = c->r[30] + 0x00000100u;
    c->r[5] = c->r[30] + 0x000000a0u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000020u;
    c->r[4] = c->r[3] + 0u;
    { c->r[31] = 0x088cc220u; c->r[6] = c->r[2] + 0u; func_0884c07c(c, ram); }
    c->r[2] = c->r[30] + 0x00000100u;
    c->r[1] = 0x08a40000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0x00005108u);
    c->r[1] = 0x08a80000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00002e40u);
    c->f[0] = c->f[1] / c->f[0];
    c->r[4] = c->r[17] + 0u;
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x088cc248u; c->f[12] = c->f[0]; func_0884c120(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000080u);
    mem_w32(ram, c->r[16] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000084u);
    mem_w32(ram, c->r[16] + 0x00000004u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000088u);
    mem_w32(ram, c->r[16] + 0x00000008u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000008cu);
    mem_w32(ram, c->r[16] + 0x0000000cu, c->r[2]);
    { c->r[31] = 0x088cc270u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u); func_088ca870(c, ram); }
    { goto L_088cc334; }
L_088cc278:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000030u);
    mem_wf32(ram, c->r[3] + 0x00000030u, c->f[0]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000034u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00005114u);
    c->f[0] = c->f[1] - c->f[0];
    mem_wf32(ram, c->r[3] + 0x00000034u, c->f[0]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000038u);
    mem_wf32(ram, c->r[3] + 0x00000038u, c->f[0]);
    c->r[16] = c->r[30] + 0x00000060u;
    c->r[3] = c->r[30] + 0x00000070u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000030u;
    c->r[1] = 0x08a40000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0x00005108u);
    c->r[1] = 0x08a80000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00002e40u);
    c->f[0] = c->f[1] / c->f[0];
    c->r[4] = c->r[3] + 0u;
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x088cc2e8u; c->f[12] = c->f[0]; func_0884c120(c, ram); }
    c->r[3] = c->r[30] + 0x00000070u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000020u;
    c->r[4] = c->r[16] + 0u;
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x088cc304u; c->r[6] = c->r[3] + 0u; func_08859f30(c, ram); }
    { c->r[31] = 0x088cc30cu; c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u); func_088ca870(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = c->r[2] + 0x00000030u;
    c->r[2] = mem_r32(ram, c->r[3] + 0x00000000u);
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[3] + 0x00000004u);
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[3] + 0x00000008u);
    mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[3] + 0x0000000cu);
    mem_w32(ram, c->r[30] + 0x0000001cu, c->r[2]);
L_088cc334:
    mem_w32(ram, c->r[30] + 0x00000110u, 0u);
    c->r[16] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[30] + 0x00000110u;
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[6] = c->r[2] + 0u;
    { c->r[31] = 0x088cc354u; c->r[7] = mem_r32(ram, c->r[30] + 0x00000004u); func_088c96f8(c, ram); }
    mem_w8(ram, c->r[16] + 0x0000005au, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x0000005au);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000003u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_088cc434; }
    c->r[2] = c->r[30] + 0x00000060u;
    { c->r[31] = 0x088cc378u; c->r[4] = c->r[2] + 0u; func_08808240(c, ram); }
    c->r[3] = c->r[30] + 0x00000060u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000020u;
    c->r[4] = c->r[3] + 0u;
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000004u);
    { c->r[31] = 0x088cc394u; c->r[6] = c->r[2] + 0u; func_08820ca4(c, ram); }
    c->r[2] = c->r[30] + 0x00000060u;
    { c->r[31] = 0x088cc3a0u; c->r[4] = c->r[2] + 0u; func_08820c6c(c, ram); }
    mem_wf32(ram, c->r[30] + 0x00000090u, c->f[0]);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000090u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000030u);
    alx_c_cond_s(c, 12, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_088cc3c4; }
    { goto L_088cc3ec; }
L_088cc3c4:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[16] = c->r[2] + 0x00000028u;
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000ac8u;
    { c->r[31] = 0x088cc3dcu; c->r[5] = mem_r32(ram, c->r[30] + 0x00000110u); func_089cb780(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000114u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000114u);
    { mem_w32(ram, c->r[16] + 0x00000000u, c->r[2]); goto L_088cc434; }
L_088cc3ec:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[16] = c->r[2] + 0x00000028u;
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000ac8u;
    { c->r[31] = 0x088cc404u; c->r[5] = mem_r32(ram, c->r[30] + 0x00000050u); func_089cb780(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000118u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000118u);
    mem_w32(ram, c->r[16] + 0x00000000u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    mem_w32(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000024u);
    mem_w32(ram, c->r[3] + 0x00000004u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000028u);
    mem_w32(ram, c->r[3] + 0x00000008u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000002cu);
    mem_w32(ram, c->r[3] + 0x0000000cu, c->r[2]);
L_088cc434:
    c->r[3] = c->r[30] + 0x00000060u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000030u;
    c->r[4] = c->r[3] + 0u;
    c->r[5] = c->r[2] + 0u;
    c->r[1] = 0x08a80000u;
    { c->r[31] = 0x088cc454u; c->f[12] = mem_rf32(ram, c->r[1] + 0x00002e40u); func_0884c120(c, ram); }
    c->r[3] = c->r[30] + 0x00000060u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000020u;
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x088cc46cu; c->r[5] = c->r[3] + 0u; func_0880d1a0(c, ram); }
    c->r[2] = c->r[30] + 0x00000010u;
    c->r[3] = c->r[30] + 0x00000010u;
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x088cc480u; c->r[5] = c->r[3] + 0u; func_0884c1d8(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[16] = c->r[2] + 0x00000030u;
    c->r[2] = c->r[30] + 0x00000060u;
    c->r[3] = c->r[30] + 0x00000010u;
    c->r[6] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[4] = c->r[2] + 0u;
    c->r[5] = c->r[3] + 0u;
    { c->r[31] = 0x088cc4a4u; c->f[12] = mem_rf32(ram, c->r[6] + 0x00000038u); func_0884c120(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000060u);
    mem_w32(ram, c->r[16] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000064u);
    mem_w32(ram, c->r[16] + 0x00000004u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000068u);
    mem_w32(ram, c->r[16] + 0x00000008u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000006cu);
    mem_w32(ram, c->r[16] + 0x0000000cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x0000005au);
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x0000012cu);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000128u);
    c->r[17] = mem_r32(ram, c->r[29] + 0x00000124u);
    c->r[16] = mem_r32(ram, c->r[29] + 0x00000120u);
    { c->r[29] = c->r[29] + 0x00000130u; return; }
    return; /* fell out of func_088cbc64 */
}

/* func_088d3244  0x088d3244..0x088d3540  764 bytes, source=fde */
void func_088d3244(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x088d3244u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000054u);
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000058u);
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x0000008cu);
    c->r[2] = 0xffef0000u;
    c->r[2] = c->r[2] | 0xffffu;
    c->r[2] = c->r[3] & c->r[2];
    mem_w32(ram, c->r[4] + 0x0000008cu, c->r[2]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x0000008cu);
    c->r[2] = 0xff7f0000u;
    c->r[2] = c->r[2] | 0xffffu;
    c->r[2] = c->r[3] & c->r[2];
    mem_w32(ram, c->r[4] + 0x0000008cu, c->r[2]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x0000008cu);
    c->r[2] = 0xffff0000u;
    c->r[2] = c->r[2] | 0x7fffu;
    c->r[2] = c->r[3] & c->r[2];
    mem_w32(ram, c->r[4] + 0x0000008cu, c->r[2]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x0000008cu);
    c->r[2] = 0xf7ff0000u;
    c->r[2] = c->r[2] | 0xffffu;
    c->r[2] = c->r[3] & c->r[2];
    mem_w32(ram, c->r[4] + 0x0000008cu, c->r[2]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x0000008cu);
    c->r[2] = 0u + 0xffffdfffu;
    c->r[2] = c->r[3] & c->r[2];
    mem_w32(ram, c->r[4] + 0x0000008cu, c->r[2]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x0000008cu);
    c->r[2] = 0u + 0xffffbfffu;
    c->r[2] = c->r[3] & c->r[2];
    mem_w32(ram, c->r[4] + 0x0000008cu, c->r[2]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x0000008cu);
    c->r[2] = 0u + 0xfffffff0u;
    c->r[2] = c->r[3] & c->r[2];
    mem_w32(ram, c->r[4] + 0x0000008cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000002u);
    c->r[2] = c->r[2] & 0x0003u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_088d3358; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000008cu);
    c->r[2] = c->r[2] | 0x0004u;
    { mem_w32(ram, c->r[3] + 0x0000008cu, c->r[2]); goto L_088d339c; }
L_088d3358:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000002u);
    c->r[3] = c->r[2] & 0x0003u;
    c->r[2] = 0u + 0x00000001u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_088d3388; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000008cu);
    c->r[2] = c->r[2] | 0x0002u;
    { mem_w32(ram, c->r[3] + 0x0000008cu, c->r[2]); goto L_088d339c; }
L_088d3388:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000008cu);
    c->r[2] = c->r[2] | 0x0008u;
    mem_w32(ram, c->r[3] + 0x0000008cu, c->r[2]);
L_088d339c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000002u);
    { int _c = ((s32)c->r[2] >= 0); if (_c) goto L_088d33c0; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000008cu);
    c->r[2] = c->r[2] | 0x0400u;
    mem_w32(ram, c->r[3] + 0x0000008cu, c->r[2]);
L_088d33c0:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[3] = mem_r8(ram, c->r[2] + 0x00000000u);
    c->r[2] = 0u + 0x00000001u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_088d33e8; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000008cu);
    c->r[2] = c->r[2] | 0x1000u;
    mem_w32(ram, c->r[3] + 0x0000008cu, c->r[2]);
L_088d33e8:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[3] = mem_r8(ram, c->r[2] + 0x00000000u);
    c->r[2] = 0u + 0x00000007u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_088d3410; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000008cu);
    c->r[2] = c->r[2] | 0x1000u;
    mem_w32(ram, c->r[3] + 0x0000008cu, c->r[2]);
L_088d3410:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[3] = mem_r8(ram, c->r[2] + 0x00000000u);
    c->r[2] = 0u + 0x00000006u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_088d3438; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000008cu);
    c->r[2] = c->r[2] | 0x0100u;
    mem_w32(ram, c->r[3] + 0x0000008cu, c->r[2]);
L_088d3438:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[3] = mem_r8(ram, c->r[2] + 0x00000000u);
    c->r[2] = 0u + 0x00000008u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_088d3520; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r8(ram, c->r[2] + 0x0000000eu);
    c->r[2] = c->r[2] & 0x0001u;
    c->r[2] = c->r[2] & 0x00ffu;
    { int _c = (c->r[2] == 0u); if (_c) goto L_088d3480; }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x0000008cu);
    c->r[2] = 0xffbf0000u;
    c->r[2] = c->r[2] | 0xffffu;
    c->r[2] = c->r[3] & c->r[2];
    mem_w32(ram, c->r[4] + 0x0000008cu, c->r[2]);
L_088d3480:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r8(ram, c->r[2] + 0x0000000eu);
    c->r[2] = c->r[2] & 0x0002u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_088d34c8; }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x0000008cu);
    c->r[2] = 0xffbf0000u;
    c->r[2] = c->r[2] | 0xffffu;
    c->r[2] = c->r[3] & c->r[2];
    mem_w32(ram, c->r[4] + 0x0000008cu, c->r[2]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x0000008cu);
    c->r[2] = 0x00200000u;
    c->r[2] = c->r[3] | c->r[2];
    mem_w32(ram, c->r[4] + 0x0000008cu, c->r[2]);
L_088d34c8:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r8(ram, c->r[2] + 0x0000000eu);
    c->r[2] = c->r[2] & 0x0004u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_088d34f0; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000008cu);
    c->r[2] = c->r[2] | 0x0001u;
    mem_w32(ram, c->r[3] + 0x0000008cu, c->r[2]);
L_088d34f0:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r8(ram, c->r[2] + 0x0000000eu);
    c->r[2] = c->r[2] & 0x0008u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_088d3520; }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x0000008cu);
    c->r[2] = 0xffef0000u;
    c->r[2] = c->r[2] | 0xffffu;
    c->r[2] = c->r[3] & c->r[2];
    mem_w32(ram, c->r[4] + 0x0000008cu, c->r[2]);
L_088d3520:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x088d352cu; c->r[5] = mem_r32(ram, c->r[30] + 0x00000004u); func_088d276c(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_088d3244 */
}

/* func_088d6e4c  0x088d6e4c..0x088d6e98  76 bytes, source=sweep */
void func_088d6e4c(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x088d6e4cu);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000054u);
    c->r[3] = mem_r8(ram, c->r[2] + 0x00000000u);
    c->r[2] = 0u + 0x00000002u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_088d6e80; }
    c->r[2] = 0u + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000004u, c->r[2]); goto L_088d6e84; }
L_088d6e80:
    mem_w32(ram, c->r[30] + 0x00000004u, 0u);
L_088d6e84:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_088d6e4c */
}

/* func_088daf0c  0x088daf0c..0x088db23c  816 bytes, source=sweep */
void func_088daf0c(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x088daf0cu);
    c->r[29] = c->r[29] + 0xffffffd0u;
    mem_w32(ram, c->r[29] + 0x00000020u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[6]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000000u);
    c->f[0] = mem_rf32(ram, c->r[3] + 0x00000000u);
    alx_c_cond_s(c, 12, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_088daf4c; }
    { goto L_088daf54; }
L_088daf4c:
    { mem_w32(ram, c->r[30] + 0x0000001cu, 0u); goto L_088db228; }
L_088daf54:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000008u);
    mem_wf32(ram, c->r[30] + 0x0000000cu, c->f[0]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[3] = c->r[2] << 4;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = c->r[2] + 0xfffffff0u;
    c->f[1] = mem_rf32(ram, c->r[4] + 0x00000000u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000000u);
    alx_c_cond_s(c, 12, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_088daf98; }
    { goto L_088dafa0; }
L_088daf98:
    { mem_w32(ram, c->r[30] + 0x0000001cu, 0u); goto L_088db228; }
L_088dafa0:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[3] = c->r[2] << 4;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = c->r[2] + 0xfffffff0u;
    c->f[1] = mem_rf32(ram, c->r[30] + 0x0000000cu);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000008u);
    alx_c_cond_s(c, 12, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_088dafd4; }
    { goto L_088daff4; }
L_088dafd4:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[3] = c->r[2] << 4;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = c->r[2] + 0xfffffff0u;
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000008u);
    { mem_wf32(ram, c->r[30] + 0x00000010u, c->f[0]); goto L_088db018; }
L_088daff4:
    c->f[0] = mem_rf32(ram, c->r[30] + 0x0000000cu);
    mem_wf32(ram, c->r[30] + 0x00000010u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[3] = c->r[2] << 4;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = c->r[2] + 0xfffffff0u;
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000008u);
    mem_wf32(ram, c->r[30] + 0x0000000cu, c->f[0]);
L_088db018:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000008u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x0000000cu);
    alx_c_cond_s(c, 12, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_088db058; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000008u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000010u);
    alx_c_cond_s(c, 12, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_088db058; }
    { goto L_088db060; }
L_088db058:
    { mem_w32(ram, c->r[30] + 0x0000001cu, 0u); goto L_088db228; }
L_088db060:
    mem_w32(ram, c->r[30] + 0x00000014u, 0u);
L_088db064:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = ((s32)c->r[2] < (s32)c->r[3]) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_088db080; }
    { goto L_088db0e0; }
L_088db080:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[3] = c->r[2] << 4;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[3] + c->r[2];
    c->f[1] = mem_rf32(ram, c->r[4] + 0x00000000u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000000u);
    alx_c_cond_s(c, 2, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_088db0b4; }
    { goto L_088db0d0; }
L_088db0b4:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[3] = c->r[2] << 4;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[3] + c->r[2];
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000004u);
    { mem_wf32(ram, c->r[30] + 0x0000001cu, c->f[0]); goto L_088db228; }
L_088db0d0:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]); goto L_088db064; }
L_088db0e0:
    mem_w32(ram, c->r[30] + 0x00000018u, 0u);
    mem_w32(ram, c->r[30] + 0x00000014u, 0u);
L_088db0e8:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[3] = c->r[2] + 0xffffffffu;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = ((s32)c->r[2] < (s32)c->r[3]) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_088db108; }
    { goto L_088db224; }
L_088db108:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[3] = c->r[2] << 4;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[3] + c->r[2];
    c->f[1] = mem_rf32(ram, c->r[4] + 0x00000000u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000000u);
    alx_c_cond_s(c, 12, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_088db214; }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[3] = c->r[2] << 4;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = c->r[2] + 0x00000010u;
    c->f[1] = mem_rf32(ram, c->r[4] + 0x00000000u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000000u);
    alx_c_cond_s(c, 12, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_088db214; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[3] = c->r[2] << 4;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[4] = c->r[2] + 0x00000010u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[3] = c->r[2] << 4;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[3] + c->r[2];
    c->f[1] = mem_rf32(ram, c->r[4] + 0x00000004u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000004u);
    c->f[2] = c->f[1] - c->f[0];
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[3] = c->r[2] << 4;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[4] = c->r[2] + 0x00000010u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[3] = c->r[2] << 4;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[3] + c->r[2];
    c->f[1] = mem_rf32(ram, c->r[4] + 0x00000000u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000000u);
    c->f[0] = c->f[1] - c->f[0];
    c->f[0] = c->f[2] / c->f[0];
    mem_wf32(ram, c->r[30] + 0x00000018u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[3] = c->r[2] << 4;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[5] = c->r[3] + c->r[2];
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[3] = c->r[2] << 4;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[3] + c->r[2];
    c->f[1] = mem_rf32(ram, c->r[4] + 0x00000000u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000000u);
    c->f[1] = c->f[1] - c->f[0];
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000018u);
    c->f[1] = c->f[1] * c->f[0];
    c->f[0] = mem_rf32(ram, c->r[5] + 0x00000004u);
    c->f[0] = c->f[1] + c->f[0];
    { mem_wf32(ram, c->r[30] + 0x0000001cu, c->f[0]); goto L_088db228; }
L_088db214:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]); goto L_088db0e8; }
L_088db224:
    mem_w32(ram, c->r[30] + 0x0000001cu, 0u);
L_088db228:
    c->f[0] = mem_rf32(ram, c->r[30] + 0x0000001cu);
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000020u);
    { c->r[29] = c->r[29] + 0x00000030u; return; }
    return; /* fell out of func_088daf0c */
}

/* func_088decc4  0x088decc4..0x088ded10  76 bytes, source=sweep */
void func_088decc4(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x088decc4u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    c->r[2] = 0x08aa0000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0xffffed00u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_088dece8; }
    { mem_w32(ram, c->r[30] + 0x00000000u, 0u); goto L_088decfc; }
L_088dece8:
    c->r[2] = 0x08aa0000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0xffffed00u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000014u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000044u);
    mem_wf32(ram, c->r[30] + 0x00000000u, c->f[0]);
L_088decfc:
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000000u);
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_088decc4 */
}

/* func_088e0f64  0x088e0f64..0x088e1068  260 bytes, source=fde */
void func_088e0f64(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x088e0f64u);
    c->r[29] = c->r[29] + 0xffffffd0u;
    mem_w32(ram, c->r[29] + 0x00000024u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000020u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    { c->r[31] = 0x088e0f80u; mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]); func_088de358(c, ram); }
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0u + 0x000000ffu;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_088e0fa0; }
    c->r[2] = 0u + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]); goto L_088e1050; }
L_088e0fa0:
    { c->r[31] = 0x088e0fa8u; c->r[4] = mem_r32(ram, c->r[30] + 0x0000000cu); func_088d6b98(c, ram); }
    { int _c = (c->r[2] == 0u); if (_c) goto L_088e0fbc; }
    c->r[2] = 0u + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]); goto L_088e1050; }
L_088e0fbc:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = c->r[2] << 3;
    c->r[2] = 0x08aa0000u;
    c->r[2] = c->r[2] + 0x000049e0u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000090u);
    c->r[2] = c->r[2] & 0x0002u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_088e104c; }
    { c->r[31] = 0x088e0fecu; func_088de3a4(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x000000b2u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_088e104c; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = c->r[2] << 3;
    c->r[2] = 0x08aa0000u;
    c->r[2] = c->r[2] + 0x000049e0u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[4] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = c->r[2] << 3;
    c->r[2] = 0x08aa0000u;
    c->r[2] = c->r[2] + 0x000049e0u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000090u);
    c->r[2] = c->r[2] | 0x0004u;
    mem_w32(ram, c->r[4] + 0x00000090u, c->r[2]);
    c->r[2] = 0u + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]); goto L_088e1050; }
L_088e104c:
    mem_w32(ram, c->r[30] + 0x00000010u, 0u);
L_088e1050:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000024u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000020u);
    { c->r[29] = c->r[29] + 0x00000030u; return; }
    return; /* fell out of func_088e0f64 */
}

/* func_088e71e0  0x088e71e0..0x088e73f8  536 bytes, source=fde */
void func_088e71e0(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x088e71e0u);
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
    mem_w32(ram, c->r[30] + 0x00000020u, c->r[2]);
    c->r[2] = 0u + 0x00000001u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000020u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_088e726c; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[2] = ((s32)c->r[3] < (s32)0x00000002u) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_088e7244; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_088e725c; }
    { goto L_088e73e0; }
L_088e7244:
    c->r[2] = 0u + 0x00000002u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000020u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_088e72c8; }
    { goto L_088e73e0; }
L_088e725c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000004u);
    mem_w32(ram, c->r[2] + 0x000000a0u, c->r[3]);
L_088e726c:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = 0u + 0x00000002u;
    mem_w8(ram, c->r[3] + 0x000000a5u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000014u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_088e7298; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = 0u + 0x00000001u;
    { mem_w8(ram, c->r[3] + 0x00000028u, c->r[2]); goto L_088e73e0; }
L_088e7298:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = 0u + 0x00000004u;
    mem_w8(ram, c->r[3] + 0x00000028u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000014u);
    c->f[1] = (f32)(s32)f2u(c->f[0]);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00005decu);
    c->f[0] = c->f[1] * c->f[0];
    { mem_wf32(ram, c->r[3] + 0x000000b4u, c->f[0]); goto L_088e73e0; }
L_088e72c8:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000008cu);
    c->r[2] = c->r[2] & 0x0002u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_088e72f4; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = 0x08a80000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00002ed8u);
    mem_w32(ram, c->r[2] + 0x00000080u, c->r[3]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    mem_w8(ram, c->r[2] + 0x00000084u, 0u);
L_088e72f4:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[16] = c->r[2] + 0x00000020u;
    c->r[3] = c->r[30] + 0x00000010u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000048u);
    c->f[0] = -c->f[0];
    c->r[4] = c->r[3] + 0u;
    c->f[12] = u2f(0u);
    c->f[13] = u2f(0u);
    c->f[14] = c->f[0];
    c->f[15] = u2f(0u);
    { c->r[31] = 0x088e7328u; func_0880d140(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    mem_w32(ram, c->r[16] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    mem_w32(ram, c->r[16] + 0x00000004u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    mem_w32(ram, c->r[16] + 0x00000008u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    mem_w32(ram, c->r[16] + 0x0000000cu, c->r[2]);
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
    { c->r[31] = 0x088e737cu; c->r[8] = c->r[2] + 0u; func_088de104(c, ram); }
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
    { c->r[31] = 0x088e73b0u; c->r[8] = c->r[2] + 0u; func_088de104(c, ram); }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x000000a0u);
    c->r[2] = c->r[2] + 0xffffffffu;
    mem_w32(ram, c->r[3] + 0x000000a0u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x000000a0u);
    { int _c = ((s32)c->r[2] >= 0); if (_c) goto L_088e73e0; }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x088e73e0u; c->r[5] = mem_r32(ram, c->r[30] + 0x00000004u); func_088d3bfc(c, ram); }
L_088e73e0:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000038u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000034u);
    c->r[16] = mem_r32(ram, c->r[29] + 0x00000030u);
    { c->r[29] = c->r[29] + 0x00000040u; return; }
    return; /* fell out of func_088e71e0 */
}

/* func_088ec5ec  0x088ec5ec..0x088ec9fc  1040 bytes, source=fde */
void func_088ec5ec(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x088ec5ecu);
    c->r[29] = c->r[29] + 0xffffff80u;
    mem_w32(ram, c->r[29] + 0x00000074u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000070u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[6]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x000000b4u);
    mem_wf32(ram, c->r[30] + 0x00000014u, c->f[0]);
    c->r[2] = 0u + 0x00000002u;
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]);
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x088ec628u; c->r[4] = c->r[4] + 0x00000af4u; func_0880d294(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = 0u + 0x00000002u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_088ec640; }
    c->r[2] = 0u + 0x0000000cu;
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]);
L_088ec640:
    { c->r[31] = 0x088ec648u; func_088de3f0(c, ram); }
    { int _c = (c->r[2] == 0u); if (_c) goto L_088ec774; }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x088ec65cu; c->r[5] = 0u + 0x0000001fu; func_088d26fc(c, ram); }
    { int _c = (c->r[2] == 0u); if (_c) goto L_088ec78c; }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x00000094u);
    c->r[2] = 0u + 0xfffffffbu;
    c->r[2] = c->r[3] & c->r[2];
    mem_w32(ram, c->r[4] + 0x00000094u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
L_088ec684:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = 0x08aa0000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0xffffebe0u);
    c->r[2] = ((s32)c->r[2] < (s32)c->r[3]) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_088ec6a4; }
    { goto L_088ec78c; }
L_088ec6a4:
    { c->r[31] = 0x088ec6acu; c->r[4] = mem_r32(ram, c->r[30] + 0x0000000cu); func_088d6b98(c, ram); }
    { int _c = (c->r[2] == 0u); if (_c) goto L_088ec6bc; }
    { goto L_088ec764; }
L_088ec6bc:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = c->r[2] << 3;
    c->r[2] = 0x08aa0000u;
    c->r[2] = c->r[2] + 0x000049e0u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000054u);
    c->r[3] = mem_r8(ram, c->r[2] + 0x00000000u);
    c->r[2] = 0u + 0x00000004u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_088ec764; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = c->r[2] << 3;
    c->r[2] = 0x08aa0000u;
    c->r[2] = c->r[2] + 0x000049dcu;
    c->r[2] = c->r[3] + c->r[2];
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x088ec708u; c->r[5] = mem_r32(ram, c->r[2] + 0x00000000u); func_088d3928(c, ram); }
    { int _c = (c->r[2] == 0u); if (_c) goto L_088ec764; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[4] = c->r[2] + 0x00000020u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = c->r[2] << 3;
    c->r[2] = 0x08aa0000u;
    c->r[2] = c->r[2] + 0x000049dcu;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000020u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x088ec744u; c->f[12] = mem_rf32(ram, c->r[3] + 0x00000034u); func_088ef870(c, ram); }
    { int _c = (c->r[2] == 0u); if (_c) goto L_088ec764; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000094u);
    c->r[2] = c->r[2] | 0x0004u;
    { mem_w32(ram, c->r[3] + 0x00000094u, c->r[2]); goto L_088ec78c; }
L_088ec764:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]); goto L_088ec684; }
L_088ec774:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x00000094u);
    c->r[2] = 0u + 0xfffffffbu;
    c->r[2] = c->r[3] & c->r[2];
    mem_w32(ram, c->r[4] + 0x00000094u, c->r[2]);
L_088ec78c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000094u);
    c->r[2] = c->r[2] & 0x0004u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_088ec7a4; }
    mem_w32(ram, c->r[30] + 0x00000014u, 0u);
L_088ec7a4:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000094u);
    c->r[2] = c->r[2] & 0x2000u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_088ec7bc; }
    mem_w32(ram, c->r[30] + 0x00000014u, 0u);
L_088ec7bc:
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000014u);
    c->f[0] = u2f(0u);
    alx_c_cond_s(c, 2, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) == 0u); if (_c) goto L_088ec7dc; }
    { goto L_088ec828; }
L_088ec7dc:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = c->r[2] + 0x00000030u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000040u;
    c->r[6] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[4] = c->r[3] + 0u;
    c->r[5] = c->r[2] + 0u;
    c->f[12] = mem_rf32(ram, c->r[30] + 0x00000014u);
    { c->r[31] = 0x088ec804u; c->r[6] = mem_r32(ram, c->r[6] + 0x00000050u); func_088f0f28(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[4] = c->r[2] + 0x00000020u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = c->r[2] + 0x00000020u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000030u;
    c->r[5] = c->r[3] + 0u;
    { c->r[31] = 0x088ec828u; c->r[6] = c->r[2] + 0u; func_08859fd4(c, ram); }
L_088ec828:
    c->r[3] = 0x08aa0000u;
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[3] + 0x00004962u);
    c->r[2] = 0u + 0x0000000fu;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_088ec998; }
    c->r[2] = c->r[30] + 0x00000020u;
    c->r[3] = 0x08a40000u;
    c->r[3] = c->r[3] + 0x00005eecu;
    c->r[4] = c->r[2] + 0u;
    c->r[5] = c->r[3] + 0u;
    { c->r[31] = 0x088ec858u; c->r[6] = 0u + 0x00000040u; func_08a19db8(c, ram); }
    mem_w32(ram, c->r[30] + 0x0000000cu, 0u);
L_088ec85c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000004u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_088ec874; }
    { goto L_088ec998; }
L_088ec874:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] << 4;
    c->r[2] = c->r[2] + c->r[30];
    c->r[2] = c->r[2] + 0x00000020u;
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000000u);
    mem_wf32(ram, c->r[30] + 0x00000060u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] << 4;
    c->r[2] = c->r[2] + c->r[30];
    c->r[2] = c->r[2] + 0x00000024u;
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000000u);
    mem_wf32(ram, c->r[30] + 0x00000064u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] << 4;
    c->r[2] = c->r[2] + c->r[30];
    c->r[2] = c->r[2] + 0x00000028u;
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000000u);
    mem_wf32(ram, c->r[30] + 0x00000068u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] << 4;
    c->r[2] = c->r[2] + c->r[30];
    c->r[2] = c->r[2] + 0x0000002cu;
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000000u);
    mem_wf32(ram, c->r[30] + 0x0000006cu, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000020u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000060u);
    alx_c_cond_s(c, 12, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_088ec8f8; }
    { goto L_088ec988; }
L_088ec8f8:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000020u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000064u);
    alx_c_cond_s(c, 12, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_088ec91c; }
    { goto L_088ec988; }
L_088ec91c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000028u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000068u);
    alx_c_cond_s(c, 12, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_088ec940; }
    { goto L_088ec988; }
L_088ec940:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000028u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x0000006cu);
    alx_c_cond_s(c, 12, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_088ec964; }
    { goto L_088ec988; }
L_088ec964:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000094u);
    c->r[2] = c->r[2] | 0x0002u;
    mem_w32(ram, c->r[3] + 0x00000094u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r8(ram, c->r[30] + 0x0000000cu);
    { mem_w8(ram, c->r[3] + 0x000000d0u, c->r[2]); goto L_088ec998; }
L_088ec988:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]); goto L_088ec85c; }
L_088ec998:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x000000d4u);
    c->r[2] = c->r[2] & 0x1000u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_088ec9b4; }
    { goto L_088ec9e8; }
L_088ec9b4:
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000014u);
    c->f[0] = u2f(0u);
    alx_c_cond_s(c, 2, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) == 0u); if (_c) goto L_088ec9d4; }
    { goto L_088ec9e8; }
L_088ec9d4:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000094u);
    c->r[2] = c->r[2] | 0x0001u;
    mem_w32(ram, c->r[3] + 0x00000094u, c->r[2]);
L_088ec9e8:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000074u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000070u);
    { c->r[29] = c->r[29] + 0x00000080u; return; }
    return; /* fell out of func_088ec5ec */
}

/* func_088f42c8  0x088f42c8..0x088f43a4  220 bytes, source=sweep */
void func_088f42c8(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x088f42c8u);
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
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_088f435c; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = ((s32)c->r[3] < (s32)0x00000002u) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_088f4320; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    { int _c = (c->r[2] == 0u); if (_c) goto L_088f4348; }
    { goto L_088f4390; }
L_088f4320:
    c->r[2] = 0u + 0x00000002u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_088f4370; }
    c->r[2] = 0u + 0x00000003u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_088f4384; }
    { goto L_088f4390; }
L_088f4348:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x088f4354u; c->r[5] = mem_r32(ram, c->r[30] + 0x00000008u); func_088f45d4(c, ram); }
    { goto L_088f4390; }
L_088f435c:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x088f4368u; c->r[5] = mem_r32(ram, c->r[30] + 0x00000008u); func_088f46d4(c, ram); }
    { goto L_088f4390; }
L_088f4370:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x088f437cu; c->r[5] = mem_r32(ram, c->r[30] + 0x00000008u); func_088f47a4(c, ram); }
    { goto L_088f4390; }
L_088f4384:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x088f4390u; c->r[5] = mem_r32(ram, c->r[30] + 0x00000008u); func_088f4874(c, ram); }
L_088f4390:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_088f42c8 */
}

/* func_088f7f5c  0x088f7f5c..0x088f803c  224 bytes, source=fde */
void func_088f7f5c(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x088f7f5cu);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000018u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[30]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[16]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    c->r[2] = 0u + 0x00000001u;
    c->r[1] = 0x08a80000u;
    mem_w32(ram, c->r[1] + 0xffffbf20u, c->r[2]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = 0u + 0x0000000fu;
    c->r[6] = 0u + 0u;
    { c->r[31] = 0x088f7f98u; c->r[7] = 0u + 0u; func_0884f888(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x000000e8u);
    c->r[2] = 0u + 0xffffffffu;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_088f7fe0; }
    c->r[16] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000020u;
    c->r[4] = 0x02000000u;
    c->r[4] = c->r[4] | 0x0007u;
    c->r[5] = c->r[2] + 0u;
    c->r[6] = 0u + 0u;
    c->r[7] = 0u + 0u;
    c->f[12] = u2f(0u);
    c->f[13] = u2f(0u);
    { c->r[31] = 0x088f7fdcu; c->r[8] = 0u + 0xffffffffu; func_0884fcb4(c, ram); }
    mem_w32(ram, c->r[16] + 0x000000e8u, c->r[2]);
L_088f7fe0:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x0000008cu);
    c->r[2] = 0x00100000u;
    c->r[2] = c->r[3] | c->r[2];
    mem_w32(ram, c->r[4] + 0x0000008cu, c->r[2]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x0000008cu);
    c->r[2] = 0x00400000u;
    c->r[2] = c->r[3] | c->r[2];
    mem_w32(ram, c->r[4] + 0x0000008cu, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000008cu);
    c->r[2] = c->r[2] | 0x2000u;
    mem_w32(ram, c->r[3] + 0x0000008cu, c->r[2]);
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000018u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[16] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_088f7f5c */
}

/* func_088fcd60  0x088fcd60..0x088fd180  1056 bytes, source=fde */
void func_088fcd60(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x088fcd60u);
    c->r[29] = c->r[29] + 0xffffffd0u;
    mem_w32(ram, c->r[29] + 0x00000024u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000020u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    c->r[2] = 0x08aa0000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0xfffff234u);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000ac8u;
    { c->r[31] = 0x088fcd90u; c->r[5] = c->r[2] + 0u; func_089cb820(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_088fd06c; }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = 0u + 0x0000008eu;
    c->r[6] = 0u + 0xffffffffu;
    c->r[7] = 0u + 0xffffffffu;
    c->r[8] = 0u + 0u;
    c->r[9] = 0u + 0u;
    { c->r[31] = 0x088fcdc0u; c->r[10] = 0u + 0u; func_0892fcac(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_088fd064; }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[5] = 0x00400000u;
    { c->r[31] = 0x088fcde0u; c->r[6] = 0u + 0u; func_08930178(c, ram); }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[5] = 0x00400000u;
    { c->r[31] = 0x088fcdf0u; c->r[6] = 0u + 0x00000001u; func_08930178(c, ram); }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[5] = 0x00400000u;
    { c->r[31] = 0x088fce00u; c->r[6] = 0u + 0x00000004u; func_08930178(c, ram); }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[5] = 0x00400000u;
    { c->r[31] = 0x088fce10u; c->r[6] = 0u + 0x00000005u; func_08930178(c, ram); }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[5] = 0x08aa0000u;
    c->r[5] = c->r[5] + 0xfffff23cu;
    { c->r[31] = 0x088fce24u; c->r[6] = 0u + 0u; func_08933498(c, ram); }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[5] = 0u + 0x00000002u;
    { c->r[31] = 0x088fce34u; c->r[6] = 0u + 0u; func_08933428(c, ram); }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[5] = 0x08aa0000u;
    c->r[5] = c->r[5] + 0xfffff24cu;
    { c->r[31] = 0x088fce48u; c->r[6] = 0u + 0x00000001u; func_08933498(c, ram); }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[5] = 0u + 0x00000002u;
    { c->r[31] = 0x088fce58u; c->r[6] = 0u + 0x00000001u; func_08933428(c, ram); }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[5] = 0x08aa0000u;
    c->r[5] = c->r[5] + 0xfffff25cu;
    { c->r[31] = 0x088fce6cu; c->r[6] = 0u + 0x00000004u; func_08933498(c, ram); }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[5] = 0u + 0x00000002u;
    { c->r[31] = 0x088fce7cu; c->r[6] = 0u + 0x00000004u; func_08933428(c, ram); }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[5] = 0x08aa0000u;
    c->r[5] = c->r[5] + 0xfffff26cu;
    { c->r[31] = 0x088fce90u; c->r[6] = 0u + 0x00000005u; func_08933498(c, ram); }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[5] = 0u + 0x00000002u;
    { c->r[31] = 0x088fcea0u; c->r[6] = 0u + 0x00000005u; func_08933428(c, ram); }
    c->r[2] = 0u + 0x00007001u;
    c->r[1] = 0x08aa0000u;
    mem_w16(ram, c->r[1] + 0xfffff23cu, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 3;
    c->r[2] = 0x08aa0000u;
    c->r[2] = c->r[2] + 0xffffee74u;
    c->r[2] = c->r[3] + c->r[2];
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000000u);
    c->r[1] = 0x08aa0000u;
    mem_wf32(ram, c->r[1] + 0xfffff240u, c->f[0]);
    c->r[2] = 0u + 0x0000002bu;
    c->r[1] = 0x08aa0000u;
    mem_w16(ram, c->r[1] + 0xfffff23eu, c->r[2]);
    c->r[2] = 0u + 0x00001001u;
    c->r[1] = 0x08aa0000u;
    mem_w16(ram, c->r[1] + 0xfffff244u, c->r[2]);
    c->r[2] = 0x08aa0000u;
    c->r[2] = c->r[2] + 0xfffff294u;
    c->r[1] = 0x08aa0000u;
    mem_w32(ram, c->r[1] + 0xfffff248u, c->r[2]);
    c->r[1] = 0x08aa0000u;
    mem_w16(ram, c->r[1] + 0xfffff246u, 0u);
    c->r[2] = 0u + 0x00002001u;
    c->r[1] = 0x08aa0000u;
    mem_w16(ram, c->r[1] + 0xfffff24cu, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 3;
    c->r[2] = 0x08aa0000u;
    c->r[2] = c->r[2] + 0xffffee78u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[1] = 0x08aa0000u;
    mem_w32(ram, c->r[1] + 0xfffff250u, c->r[2]);
    c->r[2] = 0u + 0x0000002bu;
    c->r[1] = 0x08aa0000u;
    mem_w16(ram, c->r[1] + 0xfffff24eu, c->r[2]);
    c->r[2] = 0u + 0x00001001u;
    c->r[1] = 0x08aa0000u;
    mem_w16(ram, c->r[1] + 0xfffff254u, c->r[2]);
    c->r[2] = 0x08aa0000u;
    c->r[2] = c->r[2] + 0xfffff29eu;
    c->r[1] = 0x08aa0000u;
    mem_w32(ram, c->r[1] + 0xfffff258u, c->r[2]);
    c->r[1] = 0x08aa0000u;
    mem_w16(ram, c->r[1] + 0xfffff256u, 0u);
    c->r[2] = 0u + 0x00002001u;
    c->r[1] = 0x08aa0000u;
    mem_w16(ram, c->r[1] + 0xfffff25cu, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 3;
    c->r[2] = 0x08aa0000u;
    c->r[2] = c->r[2] + 0xffffee7cu;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[1] = 0x08aa0000u;
    mem_w32(ram, c->r[1] + 0xfffff260u, c->r[2]);
    c->r[2] = 0u + 0x0000002bu;
    c->r[1] = 0x08aa0000u;
    mem_w16(ram, c->r[1] + 0xfffff25eu, c->r[2]);
    c->r[2] = 0u + 0x00001001u;
    c->r[1] = 0x08aa0000u;
    mem_w16(ram, c->r[1] + 0xfffff264u, c->r[2]);
    c->r[2] = 0x08aa0000u;
    c->r[2] = c->r[2] + 0xfffff2a8u;
    c->r[1] = 0x08aa0000u;
    mem_w32(ram, c->r[1] + 0xfffff268u, c->r[2]);
    c->r[1] = 0x08aa0000u;
    mem_w16(ram, c->r[1] + 0xfffff266u, 0u);
    c->r[2] = 0u + 0x00002001u;
    c->r[1] = 0x08aa0000u;
    mem_w16(ram, c->r[1] + 0xfffff26cu, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 3;
    c->r[2] = 0x08aa0000u;
    c->r[2] = c->r[2] + 0xffffee80u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[1] = 0x08aa0000u;
    mem_w32(ram, c->r[1] + 0xfffff270u, c->r[2]);
    c->r[2] = 0u + 0x0000002bu;
    c->r[1] = 0x08aa0000u;
    mem_w16(ram, c->r[1] + 0xfffff26eu, c->r[2]);
    c->r[2] = 0u + 0x00001001u;
    c->r[1] = 0x08aa0000u;
    mem_w16(ram, c->r[1] + 0xfffff274u, c->r[2]);
    c->r[2] = 0x08aa0000u;
    c->r[2] = c->r[2] + 0xfffff2b2u;
    c->r[1] = 0x08aa0000u;
    mem_w32(ram, c->r[1] + 0xfffff278u, c->r[2]);
    c->r[1] = 0x08aa0000u;
    mem_w16(ram, c->r[1] + 0xfffff276u, 0u);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000ac8u;
    { c->r[31] = 0x088fd050u; c->r[5] = mem_r32(ram, c->r[30] + 0x00000008u); func_089cb780(c, ram); }
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[1] = 0x08aa0000u;
    { mem_w32(ram, c->r[1] + 0xfffff234u, c->r[2]); goto L_088fd06c; }
L_088fd064:
    { mem_w32(ram, c->r[30] + 0x00000018u, 0u); goto L_088fd168; }
L_088fd06c:
    c->r[2] = 0x08aa0000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0xfffff238u);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000ac8u;
    { c->r[31] = 0x088fd084u; c->r[5] = c->r[2] + 0u; func_089cb820(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_088fd134; }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = 0u + 0x000000a0u;
    c->r[6] = 0u + 0xffffffffu;
    c->r[7] = 0u + 0xffffffffu;
    c->r[8] = 0u + 0u;
    c->r[9] = 0u + 0u;
    { c->r[31] = 0x088fd0b4u; c->r[10] = 0u + 0u; func_0892fcac(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_088fd12c; }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[5] = 0x00030000u;
    { c->r[31] = 0x088fd0d4u; c->r[6] = 0u + 0u; func_08930208(c, ram); }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[5] = 0x00020000u;
    { c->r[31] = 0x088fd0e4u; c->r[6] = 0u + 0u; func_08930178(c, ram); }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[5] = 0x08aa0000u;
    c->r[5] = c->r[5] + 0xfffff288u;
    { c->r[31] = 0x088fd0f8u; c->r[6] = 0u + 0u; func_0893009c(c, ram); }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[5] = 0x00700000u;
    { c->r[31] = 0x088fd108u; c->r[6] = 0u + 0u; func_08930208(c, ram); }
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000ac8u;
    { c->r[31] = 0x088fd118u; c->r[5] = mem_r32(ram, c->r[30] + 0x00000010u); func_089cb780(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[1] = 0x08aa0000u;
    { mem_w32(ram, c->r[1] + 0xfffff238u, c->r[2]); goto L_088fd134; }
L_088fd12c:
    { mem_w32(ram, c->r[30] + 0x00000018u, 0u); goto L_088fd168; }
L_088fd134:
    { c->r[31] = 0x088fd13cu; func_088fb2f8(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_088fd164; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_088fd164; }
    { c->r[31] = 0x088fd15cu; c->r[4] = mem_r32(ram, c->r[30] + 0x00000004u); func_088fd554(c, ram); }
    { mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]); goto L_088fd168; }
L_088fd164:
    mem_w32(ram, c->r[30] + 0x00000018u, 0u);
L_088fd168:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000024u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000020u);
    { c->r[29] = c->r[29] + 0x00000030u; return; }
    return; /* fell out of func_088fcd60 */
}

/* func_08901310  0x08901310..0x08901524  532 bytes, source=fde */
void func_08901310(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08901310u);
    c->r[29] = c->r[29] + 0xffffffc0u;
    mem_w32(ram, c->r[29] + 0x00000034u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000030u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[2] = c->r[5] + 0u;
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[6]);
    mem_w8(ram, c->r[30] + 0x00000004u, c->r[2]);
    c->r[2] = mem_r8(ram, c->r[30] + 0x00000004u);
    mem_w32(ram, c->r[30] + 0x00000024u, c->r[2]);
    c->r[2] = 0u + 0x00000001u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000024u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_089013a0; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000024u);
    c->r[2] = ((s32)c->r[3] < (s32)0x00000002u) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_0890136c; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000024u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_08901394; }
    { goto L_08901510; }
L_0890136c:
    c->r[2] = 0u + 0x00000002u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000024u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_08901510; }
    c->r[2] = 0u + 0x00000019u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000024u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_089014d4; }
    { goto L_08901510; }
L_08901394:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    { mem_w16(ram, c->r[2] + 0x000000b0u, 0u); goto L_08901510; }
L_089013a0:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x000000b0u);
    mem_w32(ram, c->r[30] + 0x00000020u, c->r[2]);
    c->r[2] = 0u + 0x00000001u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000020u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_0890142c; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[2] = ((s32)c->r[3] < (s32)0x00000002u) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_089013e0; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_089013f8; }
    { goto L_08901510; }
L_089013e0:
    c->r[2] = 0u + 0x00000002u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000020u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_08901458; }
    { goto L_08901510; }
L_089013f8:
    { c->r[31] = 0x08901400u; func_0880f27c(c, ram); }
    c->r[4] = 0x08aa0000u;
    c->r[4] = c->r[4] + 0xfffff4c0u;
    c->r[5] = 0x08900000u;
    { c->r[31] = 0x08901414u; c->r[5] = c->r[5] + 0x00001524u; func_0880f094(c, ram); }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r16(ram, c->r[2] + 0x000000b0u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w16(ram, c->r[3] + 0x000000b0u, c->r[2]); goto L_08901510; }
L_0890142c:
    c->r[4] = 0x08aa0000u;
    { c->r[31] = 0x08901438u; c->r[4] = c->r[4] + 0xfffff4c0u; func_0880f104(c, ram); }
    { int _c = (c->r[2] == 0u); if (_c) goto L_08901510; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r16(ram, c->r[2] + 0x000000b0u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w16(ram, c->r[3] + 0x000000b0u, c->r[2]); goto L_08901510; }
L_08901458:
    c->r[2] = 0x08aa0000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0xfffff4d4u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_089014b8; }
    c->r[2] = c->r[30] + 0x00000010u;
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00002e04u;
    { c->r[31] = 0x0890147cu; c->r[5] = c->r[2] + 0u; func_08813174(c, ram); }
    c->r[2] = 0u + 0x00000002u;
    mem_w8(ram, c->r[30] + 0x00000010u, c->r[2]);
    c->r[2] = 0u + 0x00000011u;
    mem_w8(ram, c->r[30] + 0x00000014u, c->r[2]);
    c->r[2] = 0u + 0x00000001u;
    c->r[1] = 0x08a80000u;
    mem_w32(ram, c->r[1] + 0x00003d2cu, c->r[2]);
    c->r[2] = c->r[30] + 0x00000010u;
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00002e04u;
    c->r[5] = 0u + 0x00000014u;
    { c->r[31] = 0x089014b0u; c->r[6] = c->r[2] + 0u; func_08813280(c, ram); }
    { goto L_08901510; }
L_089014b8:
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00002e04u;
    c->r[5] = 0u + 0x00000011u;
    { c->r[31] = 0x089014ccu; c->r[6] = 0u + 0u; func_08813280(c, ram); }
    { goto L_08901510; }
L_089014d4:
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000064e4u);
    c->r[4] = 0x08a70000u;
    c->r[4] = c->r[4] + 0xffffb640u;
    { c->r[31] = 0x089014ecu; c->f[12] = c->f[0]; func_089f1210(c, ram); }
    c->r[1] = 0x08aa0000u;
    { c->r[31] = 0x089014f8u; c->f[12] = mem_rf32(ram, c->r[1] + 0xfffff528u); func_08903058(c, ram); }
    c->r[4] = 0x08aa0000u;
    { c->r[31] = 0x08901504u; c->r[4] = c->r[4] + 0xfffff4c0u; func_0880f188(c, ram); }
    c->r[4] = 0x08a70000u;
    { c->r[31] = 0x08901510u; c->r[4] = c->r[4] + 0xffffb640u; func_089f147c(c, ram); }
L_08901510:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000034u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000030u);
    { c->r[29] = c->r[29] + 0x00000040u; return; }
    return; /* fell out of func_08901310 */
}

/* func_08903de0  0x08903de0..0x08903e40  96 bytes, source=fde */
void func_08903de0(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08903de0u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    c->r[2] = 0x08aa0000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0xfffff570u);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000ac8u;
    { c->r[31] = 0x08903e08u; c->r[5] = c->r[2] + 0u; func_089cb820(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_08903e2c; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x000000e0u;
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    mem_w8(ram, c->r[2] + 0x00000050u, 0u);
L_08903e2c:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_08903de0 */
}

/* func_0890b0b4  0x0890b0b4..0x0890b39c  744 bytes, source=fde */
void func_0890b0b4(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0890b0b4u);
    c->r[29] = c->r[29] + 0xffffffd0u;
    mem_w32(ram, c->r[29] + 0x00000024u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000020u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[2] = 0x08a90000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0xffffba0cu);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000ac8u;
    { c->r[31] = 0x0890b0e0u; c->r[5] = c->r[2] + 0u; func_089cb820(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_0890b0f8; }
    { goto L_0890b388; }
L_0890b0f8:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x000000b7u);
    { int _c = ((s32)c->r[2] >= 0); if (_c) goto L_0890b110; }
    { goto L_0890b388; }
L_0890b110:
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x0890b11cu; c->r[4] = c->r[4] + 0x00000af4u; func_0880810c(c, ram); }
    { int _c = ((s32)c->r[2] <= 0); if (_c) goto L_0890b12c; }
    { goto L_0890b388; }
L_0890b12c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x000000b7u);
    c->r[2] = c->r[2] + 0x00000004u;
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]);
    { c->r[31] = 0x0890b144u; c->r[4] = 0u + 0x00000021u; func_089c6f04(c, ram); }
    c->r[2] = c->r[2] + 0x00000004u;
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x0000002cu);
    c->r[4] = 0x08a70000u;
    c->r[4] = c->r[4] + 0xffffb640u;
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x0890b168u; c->r[6] = 0u + 0u; func_089e0bd8(c, ram); }
    c->r[4] = 0x08aa0000u;
    c->r[4] = c->r[4] + 0xfffff540u;
    c->r[5] = 0u + 0x0000001au;
    { c->r[31] = 0x0890b17cu; c->r[6] = 0u + 0u; func_0880ef80(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]);
    c->r[4] = 0u + 0x00000014u;
    { c->r[31] = 0x0890b18cu; c->r[5] = 0u + 0x00000010u; func_0881a1d4(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000000u);
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    c->r[2] = f2u(c->f[0]);
    mem_w16(ram, c->r[3] + 0x00000004u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000004u);
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    c->r[2] = f2u(c->f[0]);
    mem_w16(ram, c->r[3] + 0x00000006u, c->r[2]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[3] = c->r[2] << 2;
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000001u);
    mem_w16(ram, c->r[4] + 0x00000000u, c->r[2]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[3] = c->r[2] << 2;
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000002u);
    mem_w16(ram, c->r[4] + 0x00000002u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[3] = c->r[2] + 0x0000000au;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000020u);
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    c->r[2] = f2u(c->f[0]);
    mem_w16(ram, c->r[3] + 0x00000004u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[3] = c->r[2] + 0x0000000au;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000024u);
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    c->r[2] = f2u(c->f[0]);
    mem_w16(ram, c->r[3] + 0x00000006u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[4] = c->r[2] + 0x0000000au;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[3] = c->r[2] << 2;
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000001u);
    c->r[2] = c->r[2] + 0x00000020u;
    mem_w16(ram, c->r[4] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[4] = c->r[2] + 0x0000000au;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[3] = c->r[2] << 2;
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000002u);
    c->r[2] = c->r[2] + 0x00000020u;
    mem_w16(ram, c->r[4] + 0x00000002u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x0890b284u; c->r[4] = mem_r32(ram, c->r[2] + 0x00000008u); func_089035ac(c, ram); }
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000700u);
    c->r[2] = 0u + 0x000002e8u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[4] = c->lo;
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
    { c->r[31] = 0x0890b2e0u; c->r[5] = c->r[2] + 0u; func_089207f8(c, ram); }
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000700u);
    c->r[2] = 0u + 0x000002e8u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[4] = c->lo;
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
    { c->r[31] = 0x0890b33cu; c->r[5] = c->r[2] + 0u; func_089207f8(c, ram); }
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000700u);
    c->r[2] = 0u + 0x000002e8u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[4] = c->lo;
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
    { c->r[31] = 0x0890b388u; c->r[5] = c->r[5] | 0x0002u; func_089207f8(c, ram); }
L_0890b388:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000024u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000020u);
    { c->r[29] = c->r[29] + 0x00000030u; return; }
    return; /* fell out of func_0890b0b4 */
}

/* func_089198b8  0x089198b8..0x089199d8  288 bytes, source=fde */
void func_089198b8(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089198b8u);
    c->r[29] = c->r[29] + 0xffffffd0u;
    mem_w32(ram, c->r[29] + 0x00000024u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000020u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x089198d8u; c->r[4] = c->r[4] + 0x00000af4u; func_0880d294(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = 0u + 0x00000002u;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_089198f0; }
    { goto L_089199c4; }
L_089198f0:
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x089198fcu; c->r[4] = c->r[4] + 0x00000af4u; func_0880d554(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = 0u + 0x00000004u;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_08919914; }
    { goto L_089199c4; }
L_08919914:
    { c->r[31] = 0x0891991cu; func_0896dc4c(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[2]);
    mem_w32(ram, c->r[30] + 0x00000008u, 0u);
L_08919924:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000002u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_0891993c; }
    { goto L_089199c4; }
L_0891993c:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = c->r[2] & 0x0001u;
    { c->r[31] = 0x08919954u; c->r[4] = c->r[2] + 0u; func_089ac834(c, ram); }
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    { int _c = (c->r[2] == 0u); if (_c) goto L_089199b4; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = c->r[2] + 0x00000020u;
    c->r[2] = mem_r32(ram, c->r[3] + 0x00000000u);
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[3] + 0x00000004u);
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[3] + 0x00000008u);
    mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[3] + 0x0000000cu);
    mem_w32(ram, c->r[30] + 0x0000001cu, c->r[2]);
    c->r[5] = c->r[30] + 0x00000010u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08a50000u;
    c->r[2] = c->r[2] + 0x00007ba4u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[6] = mem_r32(ram, c->r[2] + 0x00000000u);
    { c->r[31] = 0x089199b4u; c->r[7] = 0u + 0x00000001u; func_0890bd34(c, ram); }
L_089199b4:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]); goto L_08919924; }
L_089199c4:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000024u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000020u);
    { c->r[29] = c->r[29] + 0x00000030u; return; }
    return; /* fell out of func_089198b8 */
}

/* func_089207f8  0x089207f8..0x0892083c  68 bytes, source=sweep */
void func_089207f8(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089207f8u);
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
    return; /* fell out of func_089207f8 */
}

/* func_089216e4  0x089216e4..0x08921728  68 bytes, source=sweep */
void func_089216e4(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089216e4u);
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
    { c->r[31] = 0x08921714u; c->r[5] = c->r[2] + 0u; func_089207f8(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_089216e4 */
}

/* func_089232b0  0x089232b0..0x089234b0  512 bytes, source=sweep */
void func_089232b0(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089232b0u);
    c->r[29] = c->r[29] + 0xffffffd0u;
    mem_w32(ram, c->r[29] + 0x00000024u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000020u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[2] = c->r[5] + 0u;
    mem_w8(ram, c->r[30] + 0x00000004u, c->r[2]);
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x089232d8u; c->r[4] = c->r[4] + 0x00000af4u; func_0880d294(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = 0u + 0x00000002u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_089233a4; }
    c->r[2] = 0u + 0xffffffffu;
    mem_w16(ram, c->r[30] + 0x00000006u, c->r[2]);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[30] + 0x00000004u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_08923308; }
    c->r[2] = 0u + 0xffffffffu;
    { mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]); goto L_08923498; }
L_08923308:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[3]);
    c->r[2] = 0u + 0x00000006u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000010u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_08923378; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = ((s32)c->r[3] < (s32)0x00000007u) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_08923344; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_0892336c; }
    { goto L_08923398; }
L_08923344:
    c->r[2] = 0u + 0x00000007u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000010u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_08923384; }
    c->r[2] = 0u + 0x00000008u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000010u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_08923390; }
    { goto L_08923398; }
L_0892336c:
    c->r[2] = 0u + 0x000000a2u;
    { mem_w16(ram, c->r[30] + 0x00000006u, c->r[2]); goto L_08923398; }
L_08923378:
    c->r[2] = 0u + 0x000000a4u;
    { mem_w16(ram, c->r[30] + 0x00000006u, c->r[2]); goto L_08923398; }
L_08923384:
    c->r[2] = 0u + 0x000000a6u;
    { mem_w16(ram, c->r[30] + 0x00000006u, c->r[2]); goto L_08923398; }
L_08923390:
    c->r[2] = 0u + 0x000000a0u;
    mem_w16(ram, c->r[30] + 0x00000006u, c->r[2]);
L_08923398:
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[30] + 0x00000006u);
    { mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]); goto L_08923498; }
L_089233a4:
    c->r[2] = 0x08aa0000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00004964u);
    c->r[3] = 0x00030000u;
    c->r[2] = c->r[2] & c->r[3];
    { int _c = (c->r[2] != 0u); if (_c) goto L_089233c8; }
    c->r[2] = 0u + 0xffffffffu;
    { mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]); goto L_08923498; }
L_089233c8:
    mem_w32(ram, c->r[30] + 0x00000008u, 0u);
    c->r[2] = 0x08aa0000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00004964u);
    c->r[3] = 0x00010000u;
    c->r[2] = c->r[2] & c->r[3];
    { int _c = (c->r[2] == 0u); if (_c) goto L_089233e8; }
    mem_w32(ram, c->r[30] + 0x00000008u, 0u);
L_089233e8:
    c->r[2] = 0x08aa0000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00004964u);
    c->r[3] = 0x00020000u;
    c->r[2] = c->r[2] & c->r[3];
    { int _c = (c->r[2] == 0u); if (_c) goto L_08923408; }
    c->r[2] = 0u + 0x00000001u;
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]);
L_08923408:
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[30] + 0x00000004u);
    c->r[2] = 0u + 0xffffffffu;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_08923424; }
    c->r[3] = 0u + 0xffffffffu;
    { mem_w32(ram, c->r[30] + 0x0000000cu, c->r[3]); goto L_08923498; }
L_08923424:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = c->r[2] << 1;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[3] = c->r[2] << 1;
    c->r[2] = 0x08a50000u;
    c->r[2] = c->r[2] + 0x00007bb8u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[3] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x00000000u);
    c->r[2] = 0u + 0xffffffffu;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_08923460; }
    c->r[2] = 0u + 0xffffffffu;
    { mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]); goto L_08923498; }
L_08923460:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = c->r[2] << 1;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[3] = c->r[2] << 1;
    c->r[2] = 0x08a50000u;
    c->r[2] = c->r[2] + 0x00007bb8u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r16(ram, c->r[2] + 0x00000000u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = c->r[2] << 16;
    c->r[2] = (u32)((s32)c->r[2] >> 16);
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
L_08923498:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000024u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000020u);
    { c->r[29] = c->r[29] + 0x00000030u; return; }
    return; /* fell out of func_089232b0 */
}

/* func_08925e64  0x08925e64..0x08925ea8  68 bytes, source=sweep */
void func_08925e64(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08925e64u);
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
    { c->r[31] = 0x08925e94u; c->r[5] = c->r[2] + 0u; func_089258bc(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_08925e64 */
}

/* func_08928a28  0x08928a28..0x08928ae8  192 bytes, source=residue */
void func_08928a28(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08928a28u);
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
    return; /* fell out of func_08928a28 */
}

/* func_0892d7e0  0x0892d7e0..0x0892dc94  1204 bytes, source=fde */
void func_0892d7e0(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0892d7e0u);
    c->r[29] = c->r[29] + 0xffffffc0u;
    mem_w32(ram, c->r[29] + 0x00000034u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000030u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x0000002fu);
    c->r[2] = 0u + 0x00000004u;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_0892d860; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x0000002fu);
    c->r[2] = 0u + 0x00000003u;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_0892d860; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x0000002fu);
    c->r[2] = 0u + 0x00000001u;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_0892d860; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x0000002fu);
    c->r[2] = 0u + 0x00000002u;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_0892d860; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x0000002fu);
    c->r[2] = 0u + 0x00000005u;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_0892d860; }
    { goto L_0892dc80; }
L_0892d860:
    mem_w32(ram, c->r[30] + 0x00000004u, 0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000004u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_0892d87c; }
    c->r[2] = 0u + 0x00000001u;
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[2]);
L_0892d87c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r16(ram, c->r[2] + 0x00000020u);
    c->r[2] = c->r[2] + 0x00000004u;
    mem_w16(ram, c->r[30] + 0x00000008u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[4] = mem_r16(ram, c->r[2] + 0x00000020u);
    c->r[2] = mem_r16(ram, c->r[3] + 0x00000024u);
    c->r[2] = c->r[4] + c->r[2];
    c->r[2] = c->r[2] + 0xfffffff8u;
    mem_w16(ram, c->r[30] + 0x0000000au, c->r[2]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000032u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    alx_mult(c, c->r[3], c->r[2]);
    c->r[2] = c->lo;
    c->r[3] = mem_r16(ram, c->r[4] + 0x00000022u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = c->r[2] + 0x0000000du;
    mem_w16(ram, c->r[30] + 0x0000000cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000032u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000031u);
    c->r[2] = c->r[3] - c->r[2];
    mem_w16(ram, c->r[30] + 0x0000000eu, c->r[2]);
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[30] + 0x0000000eu);
    c->r[2] = c->r[2] + 0xffffffffu;
    c->r[2] = (u32)((s32)c->r[2] >> 1);
    mem_w16(ram, c->r[30] + 0x00000010u, c->r[2]);
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[30] + 0x0000000eu);
    c->r[2] = c->r[2] + 0xffffffffu;
    c->r[2] = (u32)((s32)c->r[2] >> 1);
    mem_w16(ram, c->r[30] + 0x00000012u, c->r[2]);
    c->r[4] = 0x08a70000u;
    c->r[4] = c->r[4] + 0xffffb640u;
    c->r[5] = 0u + 0x00000200u;
    { c->r[31] = 0x0892d91cu; c->r[6] = 0u + 0u; func_089e0bd8(c, ram); }
    c->r[4] = 0x08a70000u;
    c->r[4] = c->r[4] + 0xffffb640u;
    c->r[5] = 0u + 0x00000002u;
    { c->r[31] = 0x0892d930u; c->r[6] = 0u + 0x00000006u; func_089df7a0(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000014u, 0u);
L_0892d934:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x0000002eu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = ((s32)c->r[2] < (s32)c->r[3]) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_0892d954; }
    { goto L_0892dc80; }
L_0892d954:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 2;
    c->r[2] = mem_r32(ram, c->r[4] + 0x00000008u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000008u);
    c->r[2] = c->r[2] & 0x3000u;
    mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_0892dc10; }
    c->r[2] = 0xc8120000u;
    c->r[2] = c->r[2] | 0x0800u;
    mem_w32(ram, c->r[30] + 0x0000001cu, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = 0u + 0x00001000u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_0892d9b8; }
    c->r[2] = 0xff220000u;
    c->r[2] = c->r[2] | 0x0b83u;
    { mem_w32(ram, c->r[30] + 0x0000001cu, c->r[2]); goto L_0892d9d4; }
L_0892d9b8:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = 0u + 0x00002000u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_0892d9d4; }
    c->r[2] = 0xfffb0000u;
    c->r[2] = c->r[2] | 0x854fu;
    mem_w32(ram, c->r[30] + 0x0000001cu, c->r[2]);
L_0892d9d4:
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = 0x00ff0000u;
    c->r[2] = c->r[2] | 0xffffu;
    c->r[4] = c->r[3] & c->r[2];
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = 0xff000000u;
    c->r[2] = c->r[3] & c->r[2];
    c->r[3] = c->r[2] >> 2;
    c->r[2] = 0xff000000u;
    c->r[2] = c->r[3] & c->r[2];
    c->r[2] = c->r[4] | c->r[2];
    mem_w32(ram, c->r[30] + 0x0000001cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x00000010u);
    c->r[2] = 0x20000000u;
    c->r[2] = c->r[3] & c->r[2];
    c->r[3] = c->r[30] + 0x0000001cu;
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x0892da24u; c->r[5] = c->r[3] + 0u; func_08933804(c, ram); }
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000700u);
    c->r[2] = 0u + 0x000002e8u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[4] = c->lo;
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
    { c->r[31] = 0x0892da6cu; c->r[5] = mem_r32(ram, c->r[30] + 0x0000001cu); func_089336a0(c, ram); }
    c->r[4] = 0u + 0x00000014u;
    { c->r[31] = 0x0892da78u; c->r[5] = 0u + 0x00000010u; func_0881a1d4(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000020u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[2] = mem_r16(ram, c->r[30] + 0x00000008u);
    mem_w16(ram, c->r[3] + 0x00000004u, c->r[2]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[3] = mem_r16(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r16(ram, c->r[30] + 0x00000010u);
    c->r[2] = c->r[3] - c->r[2];
    c->r[2] = c->r[2] + 0x00000003u;
    mem_w16(ram, c->r[4] + 0x00000006u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    mem_w16(ram, c->r[2] + 0x00000000u, 0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    mem_w16(ram, c->r[2] + 0x00000002u, 0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[3] = c->r[2] + 0x0000000au;
    c->r[2] = mem_r16(ram, c->r[30] + 0x0000000au);
    mem_w16(ram, c->r[3] + 0x00000004u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[4] = c->r[2] + 0x0000000au;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000031u);
    c->r[2] = mem_r16(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[3] + c->r[2];
    c->r[3] = c->r[2] + 0u;
    c->r[2] = mem_r16(ram, c->r[30] + 0x00000012u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = c->r[2] + 0x00000003u;
    mem_w16(ram, c->r[4] + 0x00000006u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[3] = c->r[2] + 0x0000000au;
    c->r[2] = 0u + 0x00000001u;
    mem_w16(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[3] = c->r[2] + 0x0000000au;
    c->r[2] = 0u + 0x00000001u;
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
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[2] = c->r[2] >> 24;
    c->r[2] = c->r[2] & 0x000fu;
    c->r[3] = c->r[2] << 16;
    c->r[2] = 0x10000000u;
    c->r[2] = c->r[3] | c->r[2];
    { c->r[31] = 0x0892db68u; c->r[5] = c->r[2] + 0u; func_0893365c(c, ram); }
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000700u);
    c->r[2] = 0u + 0x000002e8u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[4] = c->lo;
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
    { c->r[31] = 0x0892dbc4u; c->r[5] = c->r[2] + 0u; func_0893365c(c, ram); }
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000700u);
    c->r[2] = 0u + 0x000002e8u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[4] = c->lo;
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
    { c->r[31] = 0x0892dc10u; c->r[5] = c->r[5] | 0x0002u; func_0893365c(c, ram); }
L_0892dc10:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 2;
    c->r[2] = mem_r32(ram, c->r[4] + 0x00000008u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[3] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x00000000u);
    c->r[2] = 0u + 0x0000000du;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_0892dc5c; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000032u);
    c->r[2] = mem_r16(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = c->r[2] + 0x00000003u;
    { mem_w16(ram, c->r[30] + 0x0000000cu, c->r[2]); goto L_0892dc70; }
L_0892dc5c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000032u);
    c->r[2] = mem_r16(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + c->r[3];
    mem_w16(ram, c->r[30] + 0x0000000cu, c->r[2]);
L_0892dc70:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]); goto L_0892d934; }
L_0892dc80:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000034u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000030u);
    { c->r[29] = c->r[29] + 0x00000040u; return; }
    return; /* fell out of func_0892d7e0 */
}

/* func_089324c0  0x089324c0..0x089324f4  52 bytes, source=sweep */
void func_089324c0(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089324c0u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x000000e0u;
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000030u);
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_089324c0 */
}

/* func_08933b08  0x08933b08..0x08933b6c  100 bytes, source=sweep */
void func_08933b08(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08933b08u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    c->r[2] = c->r[4] + 0u;
    mem_w16(ram, c->r[30] + 0x00000000u, c->r[2]);
    c->r[3] = (u32)(s32)(s16)mem_r16(ram, c->r[30] + 0x00000000u);
    c->r[2] = 0u + 0x00000976u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_08933b38; }
    c->r[2] = 0u + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000004u, c->r[2]); goto L_08933b58; }
L_08933b38:
    c->r[3] = (u32)(s32)(s16)mem_r16(ram, c->r[30] + 0x00000000u);
    c->r[2] = 0u + 0x000004c3u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_08933b54; }
    c->r[2] = 0u + 0x00000002u;
    { mem_w32(ram, c->r[30] + 0x00000004u, c->r[2]); goto L_08933b58; }
L_08933b54:
    mem_w32(ram, c->r[30] + 0x00000004u, 0u);
L_08933b58:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_08933b08 */
}

/* func_08937aac  0x08937aac..0x08937aec  64 bytes, source=fde */
void func_08937aac(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08937aacu);
    c->r[29] = c->r[29] + 0xfffffff0u;
    mem_w32(ram, c->r[29] + 0x00000004u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000000u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    c->r[4] = 0x08a40000u;
    { c->r[31] = 0x08937ac8u; c->r[4] = c->r[4] + 0x000073f4u; func_089c6f64(c, ram); }
    c->r[4] = 0x08aa0000u;
    c->r[4] = c->r[4] + 0xfffffa98u;
    { c->r[31] = 0x08937ad8u; c->r[5] = c->r[2] + 0u; func_08811340(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000004u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000000u);
    { c->r[29] = c->r[29] + 0x00000010u; return; }
    return; /* fell out of func_08937aac */
}

/* func_0893c598  0x0893c598..0x0893c5dc  68 bytes, source=sweep */
void func_0893c598(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0893c598u);
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
    { c->r[31] = 0x0893c5c8u; c->r[5] = c->r[2] + 0u; func_0893bf80(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_0893c598 */
}

/* func_0893d9bc  0x0893d9bc..0x0893da00  68 bytes, source=sweep */
void func_0893d9bc(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0893d9bcu);
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
    { c->r[31] = 0x0893d9ecu; c->r[5] = c->r[2] + 0u; func_0893d560(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_0893d9bc */
}

/* func_0893fa60  0x0893fa60..0x0893fa9c  60 bytes, source=sweep */
void func_0893fa60(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0893fa60u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000004u);
    { c->r[31] = 0x0893fa88u; c->r[6] = 0u + 0x00000001u; func_0893ff90(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_0893fa60 */
}

/* func_08940a3c  0x08940a3c..0x08940f8c  1360 bytes, source=fde */
void func_08940a3c(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08940a3cu);
    c->r[29] = c->r[29] + 0xffffffa0u;
    mem_w32(ram, c->r[29] + 0x00000058u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000054u, c->r[30]);
    mem_w32(ram, c->r[29] + 0x00000050u, c->r[16]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[2] = c->r[5] + 0u;
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[6]);
    mem_w8(ram, c->r[30] + 0x00000004u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x000000e0u;
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]);
    c->r[2] = mem_r8(ram, c->r[30] + 0x00000004u);
    mem_w32(ram, c->r[30] + 0x00000040u, c->r[2]);
    c->r[2] = 0u + 0x00000001u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000040u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_08940bf4; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000040u);
    c->r[2] = ((s32)c->r[3] < (s32)0x00000002u) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_08940aa8; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000040u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_08940ad0; }
    { goto L_08940f74; }
L_08940aa8:
    c->r[2] = 0u + 0x00000002u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000040u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_08940f58; }
    c->r[2] = 0u + 0x00000006u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000040u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_08940f48; }
    { goto L_08940f74; }
L_08940ad0:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x08940adcu; c->r[5] = 0u + 0x00000004u; func_088679a0(c, ram); }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x08940ae8u; c->r[5] = 0u + 0u; func_088679d4(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    mem_w32(ram, c->r[2] + 0x00000000u, 0u);
    c->r[4] = 0x08a40000u;
    { c->r[31] = 0x08940afcu; c->r[4] = c->r[4] + 0x00007670u; func_089c6f64(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_08940b20; }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x08940b18u; c->r[5] = 0u + 0x00000002u; func_0880d260(c, ram); }
    { goto L_08940f74; }
L_08940b20:
    c->r[16] = mem_r32(ram, c->r[30] + 0x00000010u);
    { c->r[31] = 0x08940b2cu; c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u); func_089b7394(c, ram); }
    mem_w32(ram, c->r[16] + 0x00000000u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000020u;
    mem_w32(ram, c->r[3] + 0x00000004u, c->r[2]);
    mem_w32(ram, c->r[30] + 0x0000000cu, 0u);
L_08940b48:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000100u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_08940b60; }
    { goto L_08940b7c; }
L_08940b60:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000004u);
    mem_w8(ram, c->r[2] + 0x00000000u, 0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]); goto L_08940b48; }
L_08940b7c:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = mem_r16(ram, c->r[2] + 0x00000000u);
    mem_w16(ram, c->r[3] + 0x0000000cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = c->r[2] + 0x00000004u;
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    { c->r[31] = 0x08940ba8u; mem_w32(ram, c->r[3] + 0x00000008u, c->r[2]); func_0893dfb0(c, ram); }
    mem_w32(ram, c->r[30] + 0x0000000cu, 0u);
L_08940bac:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[3] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = ((s32)c->r[2] < (s32)c->r[3]) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_08940bcc; }
    { goto L_08940f74; }
L_08940bcc:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = c->r[3] + c->r[2];
    c->r[2] = 0u + 0x00000001u;
    mem_w8(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]); goto L_08940bac; }
L_08940bf4:
    { c->r[31] = 0x08940bfcu; c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u); func_089c612c(c, ram); }
    mem_w32(ram, c->r[30] + 0x0000000cu, 0u);
L_08940c00:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[3] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = ((s32)c->r[2] < (s32)c->r[3]) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_08940c20; }
    { goto L_08940da0; }
L_08940c20:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[3] + c->r[2];
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0u + 0x0000004cu;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[3] = c->lo;
    c->r[2] = mem_r32(ram, c->r[4] + 0x00000008u);
    c->r[2] = c->r[2] + c->r[3];
    mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000000u);
    c->r[2] = 0u + 0x00000001u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_08940d90; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = mem_r8(ram, c->r[2] + 0x0000001cu);
    c->r[2] = c->r[2] & 0x0001u;
    c->r[2] = c->r[2] & 0x00ffu;
    { int _c = (c->r[2] == 0u); if (_c) goto L_08940cd0; }
    c->r[2] = 0x08aa0000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00004968u);
    c->r[3] = c->r[2] + 0xffffffffu;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = mem_r16(ram, c->r[2] + 0x0000001eu);
    c->f[0] = u2f(c->r[2]);
    c->f[1] = (f32)(s32)f2u(c->f[0]);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x0000767cu);
    c->f[0] = c->f[1] * c->f[0];
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    c->r[2] = f2u(c->f[0]);
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_08940cd0; }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000018u);
    { c->r[31] = 0x08940cc8u; c->r[6] = mem_r32(ram, c->r[30] + 0x0000000cu); func_089408a0(c, ram); }
    { goto L_08940d90; }
L_08940cd0:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = mem_r8(ram, c->r[2] + 0x0000001cu);
    c->r[2] = c->r[2] & 0x0002u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_08940d90; }
    c->r[2] = c->r[30] + 0x00000020u;
    { c->r[31] = 0x08940cf0u; c->r[4] = c->r[2] + 0u; func_08808240(c, ram); }
    c->r[2] = c->r[30] + 0x00000030u;
    { c->r[31] = 0x08940cfcu; c->r[4] = c->r[2] + 0u; func_08808240(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    { c->r[31] = 0x08940d08u; c->f[12] = mem_rf32(ram, c->r[2] + 0x00000020u); func_08940870(c, ram); }
    mem_wf32(ram, c->r[30] + 0x00000020u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    { c->r[31] = 0x08940d18u; c->f[12] = mem_rf32(ram, c->r[2] + 0x00000024u); func_08940870(c, ram); }
    mem_wf32(ram, c->r[30] + 0x00000024u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000028u);
    c->f[0] = -c->f[0];
    { c->r[31] = 0x08940d30u; c->f[12] = c->f[0]; func_08940870(c, ram); }
    mem_wf32(ram, c->r[30] + 0x00000028u, c->f[0]);
    mem_w32(ram, c->r[30] + 0x0000002cu, 0u);
    c->r[2] = c->r[30] + 0x00000020u;
    c->r[3] = c->r[30] + 0x00000020u;
    c->r[4] = c->r[2] + 0u;
    c->r[5] = c->r[3] + 0u;
    c->r[6] = 0x08aa0000u;
    { c->r[31] = 0x08940d54u; c->r[6] = c->r[6] + 0xffffebd0u; func_08859fd4(c, ram); }
    c->r[2] = 0x08a80000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00002ed8u);
    c->r[2] = c->r[2] + 0x00000020u;
    c->r[3] = c->r[30] + 0x00000020u;
    c->r[6] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[4] = c->r[2] + 0u;
    c->r[5] = c->r[3] + 0u;
    { c->r[31] = 0x08940d78u; c->f[12] = mem_rf32(ram, c->r[6] + 0x0000002cu); func_088ef73c(c, ram); }
    { int _c = (c->r[2] == 0u); if (_c) goto L_08940d90; }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000018u);
    { c->r[31] = 0x08940d90u; c->r[6] = mem_r32(ram, c->r[30] + 0x0000000cu); func_089408a0(c, ram); }
L_08940d90:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]); goto L_08940c00; }
L_08940da0:
    mem_w32(ram, c->r[30] + 0x0000000cu, 0u);
L_08940da4:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[3] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = ((s32)c->r[2] < (s32)c->r[3]) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_08940dc4; }
    { goto L_08940f74; }
L_08940dc4:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[3] + c->r[2];
    mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0u + 0x0000004cu;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[3] = c->lo;
    c->r[2] = mem_r32(ram, c->r[4] + 0x00000008u);
    c->r[2] = c->r[2] + c->r[3];
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000000u);
    c->r[2] = 0u + 0x00000002u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_08940f38; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000030u);
    c->r[2] = c->r[2] & 0x0001u;
    c->r[2] = c->r[2] & 0x00ffu;
    { int _c = (c->r[2] == 0u); if (_c) goto L_08940e78; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = mem_r16(ram, c->r[2] + 0x00000032u);
    c->f[0] = u2f(c->r[2]);
    c->f[1] = (f32)(s32)f2u(c->f[0]);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x0000767cu);
    c->f[0] = c->f[1] * c->f[0];
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    c->r[2] = 0x08aa0000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00004968u);
    c->r[3] = f2u(c->f[0]);
    { int _c = (c->r[2] != c->r[3]); if (_c) goto L_08940e78; }
    c->r[4] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[5] = 0u + 0u;
    { c->r[31] = 0x08940e68u; c->r[6] = 0u + 0u; func_0893e254(c, ram); }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = 0u + 0x00000003u;
    { mem_w8(ram, c->r[3] + 0x00000000u, c->r[2]); goto L_08940f38; }
L_08940e78:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000030u);
    c->r[2] = c->r[2] & 0x0002u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_08940f38; }
    c->r[2] = c->r[30] + 0x00000020u;
    { c->r[31] = 0x08940e98u; c->r[4] = c->r[2] + 0u; func_08808240(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    { c->r[31] = 0x08940ea4u; c->f[12] = mem_rf32(ram, c->r[2] + 0x00000034u); func_08940870(c, ram); }
    mem_wf32(ram, c->r[30] + 0x00000020u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    { c->r[31] = 0x08940eb4u; c->f[12] = mem_rf32(ram, c->r[2] + 0x00000038u); func_08940870(c, ram); }
    mem_wf32(ram, c->r[30] + 0x00000024u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x0000003cu);
    c->f[0] = -c->f[0];
    { c->r[31] = 0x08940eccu; c->f[12] = c->f[0]; func_08940870(c, ram); }
    mem_wf32(ram, c->r[30] + 0x00000028u, c->f[0]);
    mem_w32(ram, c->r[30] + 0x0000002cu, 0u);
    c->r[2] = c->r[30] + 0x00000020u;
    c->r[3] = c->r[30] + 0x00000020u;
    c->r[4] = c->r[2] + 0u;
    c->r[5] = c->r[3] + 0u;
    c->r[6] = 0x08aa0000u;
    { c->r[31] = 0x08940ef0u; c->r[6] = c->r[6] + 0xffffebd0u; func_08859fd4(c, ram); }
    c->r[2] = 0x08a80000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00002ed8u);
    c->r[2] = c->r[2] + 0x00000020u;
    c->r[3] = c->r[30] + 0x00000020u;
    c->r[6] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[4] = c->r[2] + 0u;
    c->r[5] = c->r[3] + 0u;
    { c->r[31] = 0x08940f14u; c->f[12] = mem_rf32(ram, c->r[6] + 0x00000040u); func_088ef73c(c, ram); }
    { int _c = (c->r[2] == 0u); if (_c) goto L_08940f38; }
    c->r[4] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[5] = 0u + 0u;
    { c->r[31] = 0x08940f2cu; c->r[6] = 0u + 0u; func_0893e254(c, ram); }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = 0u + 0x00000003u;
    mem_w8(ram, c->r[3] + 0x00000000u, c->r[2]);
L_08940f38:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]); goto L_08940da4; }
L_08940f48:
    { c->r[31] = 0x08940f50u; func_0893e97c(c, ram); }
    { goto L_08940f74; }
L_08940f58:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_08940f74; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    { c->r[31] = 0x08940f74u; c->r[4] = mem_r32(ram, c->r[2] + 0x00000000u); func_089b73e0(c, ram); }
L_08940f74:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000058u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000054u);
    c->r[16] = mem_r32(ram, c->r[29] + 0x00000050u);
    { c->r[29] = c->r[29] + 0x00000060u; return; }
    return; /* fell out of func_08940a3c */
}

/* func_08946104  0x08946104..0x08946148  68 bytes, source=sweep */
void func_08946104(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08946104u);
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
    { c->r[31] = 0x08946134u; c->r[5] = c->r[2] + 0u; func_0894568c(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_08946104 */
}

/* func_0894b8b0  0x0894b8b0..0x0894b91c  108 bytes, source=sweep */
void func_0894b8b0(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0894b8b0u);
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
    { c->r[31] = 0x0894b8ecu; c->r[5] = c->r[2] + 0u; func_0894b6a0(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = c->r[2] >> 24;
    c->r[2] = 0x58000000u;
    c->r[2] = c->r[3] | c->r[2];
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x0894b908u; c->r[5] = c->r[2] + 0u; func_0894b6a0(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_0894b8b0 */
}

/* func_0894d9d8  0x0894d9d8..0x0894da1c  68 bytes, source=sweep */
void func_0894d9d8(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0894d9d8u);
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
    return; /* fell out of func_0894d9d8 */
}

/* func_08955054  0x08955054..0x08955094  64 bytes, source=sweep */
void func_08955054(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08955054u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_wf32(ram, c->r[30] + 0x00000004u, c->f[12]);
    mem_wf32(ram, c->r[30] + 0x00000008u, c->f[13]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->f[12] = mem_rf32(ram, c->r[30] + 0x00000004u);
    { c->r[31] = 0x08955080u; c->f[13] = mem_rf32(ram, c->r[30] + 0x00000008u); func_089551b4(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_08955054 */
}

/* func_08956e2c  0x08956e2c..0x08956e70  68 bytes, source=sweep */
void func_08956e2c(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08956e2cu);
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
    return; /* fell out of func_08956e2c */
}

/* func_0895979c  0x0895979c..0x0895a250  2740 bytes, source=fde */
void func_0895979c(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0895979cu);
    c->r[29] = c->r[29] + 0xffffff10u;
    mem_w32(ram, c->r[29] + 0x000000e8u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x000000e4u, c->r[30]);
    mem_w32(ram, c->r[29] + 0x000000e0u, c->r[16]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[2] = c->r[5] + 0u;
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[6]);
    mem_w8(ram, c->r[30] + 0x00000004u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x000000e0u;
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
    c->r[2] = mem_r8(ram, c->r[30] + 0x00000004u);
    mem_w32(ram, c->r[30] + 0x000000d8u, c->r[2]);
    c->r[2] = 0u + 0x00000001u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x000000d8u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_0895992c; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x000000d8u);
    c->r[2] = ((s32)c->r[3] < (s32)0x00000002u) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_08959808; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000d8u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_08959830; }
    { goto L_0895a238; }
L_08959808:
    c->r[2] = 0u + 0x00000006u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x000000d8u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_08959b20; }
    c->r[2] = 0u + 0x0000000cu;
    c->r[3] = mem_r32(ram, c->r[30] + 0x000000d8u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_08959c5c; }
    { goto L_0895a238; }
L_08959830:
    c->r[2] = 0x08aa0000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x000046f0u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_08959874; }
    c->r[2] = 0u + 0x00000001u;
    c->r[1] = 0x08aa0000u;
    mem_w32(ram, c->r[1] + 0x000046f0u, c->r[2]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = 0x08a50000u;
    { c->r[31] = 0x0895985cu; c->r[5] = c->r[5] + 0xffff806cu; func_089c35a0(c, ram); }
    c->r[1] = 0x08aa0000u;
    mem_w16(ram, c->r[1] + 0x000046f4u, c->r[2]);
    c->r[4] = 0x08aa0000u;
    c->r[4] = c->r[4] + 0x000046f8u;
    { c->r[31] = 0x08959874u; c->r[5] = 0u + 0x0000001eu; func_0895a250(c, ram); }
L_08959874:
    mem_w32(ram, c->r[30] + 0x00000010u, 0u);
L_08959878:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000005u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_08959890; }
    { goto L_08959908; }
L_08959890:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[3] = c->r[2] << 4;
    c->r[2] = 0x08aa0000u;
    c->r[2] = c->r[2] + 0x00004900u;
    c->r[16] = c->r[3] + c->r[2];
    c->r[1] = 0x08a50000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffff8078u);
    c->r[1] = 0x08a50000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0xffff807cu);
    c->f[12] = c->f[0];
    { c->r[31] = 0x089598c0u; c->f[13] = c->f[1]; func_0884bf84(c, ram); }
    mem_wf32(ram, c->r[16] + 0x00000000u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[3] = c->r[2] << 4;
    c->r[2] = 0x08aa0000u;
    c->r[2] = c->r[2] + 0x00004900u;
    c->r[16] = c->r[3] + c->r[2];
    c->r[1] = 0x08a50000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffff8078u);
    c->r[1] = 0x08a50000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0xffff807cu);
    c->f[12] = c->f[0];
    { c->r[31] = 0x089598f4u; c->f[13] = c->f[1]; func_0884bf84(c, ram); }
    mem_wf32(ram, c->r[16] + 0x00000008u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]); goto L_08959878; }
L_08959908:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x00000040u;
    c->r[1] = 0x08a50000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffff8080u);
    mem_wf32(ram, c->r[2] + 0x00000000u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x00000044u;
    { mem_w32(ram, c->r[2] + 0x00000000u, 0u); goto L_0895a238; }
L_0895992c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = c->r[2] + 0x00000048u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x00000048u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000001u;
    mem_w32(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x00000048u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[2] = (c->r[2] < 0x00000019u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_08959b10; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x00000048u;
    c->r[3] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[2] = 0u + 0x00000019u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_0895998c; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x00000044u;
    c->r[1] = 0x08a50000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffff8084u);
    mem_wf32(ram, c->r[2] + 0x00000000u, c->f[0]);
L_0895998c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = c->r[2] + 0x00000044u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x00000044u;
    c->r[1] = 0x08a80000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0x00002e40u);
    c->r[1] = 0x08a50000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffff8088u);
    c->f[1] = c->f[1] * c->f[0];
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000000u);
    c->f[0] = c->f[0] - c->f[1];
    mem_wf32(ram, c->r[3] + 0x00000000u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x00000044u;
    mem_w32(ram, c->r[30] + 0x000000d0u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x00000044u;
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000000u);
    c->f[0] = u2f(0u);
    alx_c_cond_s(c, 12, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_089599f0; }
    { goto L_08959a04; }
L_089599f0:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x00000044u;
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000000u);
    { mem_wf32(ram, c->r[30] + 0x000000d4u, c->f[0]); goto L_08959a08; }
L_08959a04:
    mem_w32(ram, c->r[30] + 0x000000d4u, 0u);
L_08959a08:
    c->f[0] = mem_rf32(ram, c->r[30] + 0x000000d4u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000d0u);
    mem_wf32(ram, c->r[2] + 0x00000000u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x00000048u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[2] = (c->r[2] < 0x0000001eu) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_08959b10; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x00000040u;
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000000u);
    c->f[0] = u2f(0u);
    alx_c_cond_s(c, 12, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_08959a54; }
    { goto L_08959a98; }
L_08959a54:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[4] = c->r[2] + 0x00000040u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = c->r[2] + 0x00000040u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x00000040u;
    c->r[1] = 0x08a50000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0xffff8084u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000000u);
    c->f[1] = c->f[1] - c->f[0];
    c->r[1] = 0x08a50000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffff808cu);
    c->f[1] = c->f[1] * c->f[0];
    c->f[0] = mem_rf32(ram, c->r[3] + 0x00000000u);
    c->f[0] = c->f[0] + c->f[1];
    { mem_wf32(ram, c->r[4] + 0x00000000u, c->f[0]); goto L_08959ad8; }
L_08959a98:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[4] = c->r[2] + 0x00000040u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = c->r[2] + 0x00000040u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x00000040u;
    c->r[1] = 0x08a50000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0xffff8090u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000000u);
    c->f[1] = c->f[1] - c->f[0];
    c->r[1] = 0x08a50000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffff8094u);
    c->f[1] = c->f[1] * c->f[0];
    c->f[0] = mem_rf32(ram, c->r[3] + 0x00000000u);
    c->f[0] = c->f[0] + c->f[1];
    mem_wf32(ram, c->r[4] + 0x00000000u, c->f[0]);
L_08959ad8:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x00000040u;
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000000u);
    c->r[1] = 0x08a50000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffff8084u);
    alx_c_cond_s(c, 12, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_08959b04; }
    { goto L_08959b10; }
L_08959b04:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x08959b10u; c->r[5] = 0u + 0x00000002u; func_0880d260(c, ram); }
L_08959b10:
    { c->r[31] = 0x08959b18u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u); func_089c612c(c, ram); }
    { goto L_0895a238; }
L_08959b20:
    { c->r[31] = 0x08959b28u; func_089c3a94(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = 0u + 0x00000001u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_08959b40; }
    { goto L_0895a238; }
L_08959b40:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x00000044u;
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000000u);
    c->f[0] = u2f(0u);
    alx_c_cond_s(c, 12, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_08959b68; }
    { goto L_0895a238; }
L_08959b68:
    c->r[1] = 0x08a50000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffff8080u);
    c->r[1] = 0x08a50000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0xffff8084u);
    c->f[12] = c->f[0];
    { c->r[31] = 0x08959b84u; c->f[13] = c->f[1]; func_0884bf84(c, ram); }
    c->f[1] = c->f[0];
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x00000044u;
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000000u);
    c->f[1] = c->f[1] * c->f[0];
    c->r[1] = 0x08a50000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffff8098u);
    c->f[1] = c->f[1] * c->f[0];
    c->r[1] = 0x08a80000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffffbf40u);
    c->f[0] = c->f[0] + c->f[1];
    c->r[1] = 0x08a80000u;
    mem_wf32(ram, c->r[1] + 0xffffbf40u, c->f[0]);
    c->r[1] = 0x08a50000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffff8080u);
    c->r[1] = 0x08a50000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0xffff8084u);
    c->f[12] = c->f[0];
    { c->r[31] = 0x08959bd4u; c->f[13] = c->f[1]; func_0884bf84(c, ram); }
    c->f[1] = c->f[0];
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x00000044u;
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000000u);
    c->f[1] = c->f[1] * c->f[0];
    c->r[1] = 0x08a50000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffff8098u);
    c->f[1] = c->f[1] * c->f[0];
    c->r[1] = 0x08a80000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffffbf44u);
    c->f[0] = c->f[0] + c->f[1];
    c->r[1] = 0x08a80000u;
    mem_wf32(ram, c->r[1] + 0xffffbf44u, c->f[0]);
    c->r[1] = 0x08a50000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffff8080u);
    c->r[1] = 0x08a50000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0xffff8084u);
    c->f[12] = c->f[0];
    { c->r[31] = 0x08959c24u; c->f[13] = c->f[1]; func_0884bf84(c, ram); }
    c->f[1] = c->f[0];
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x00000044u;
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000000u);
    c->f[1] = c->f[1] * c->f[0];
    c->r[1] = 0x08a50000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffff8098u);
    c->f[1] = c->f[1] * c->f[0];
    c->r[1] = 0x08a80000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffffbf48u);
    c->f[0] = c->f[0] + c->f[1];
    c->r[1] = 0x08a80000u;
    { mem_wf32(ram, c->r[1] + 0xffffbf48u, c->f[0]); goto L_0895a238; }
L_08959c5c:
    c->r[2] = c->r[30] + 0x00000020u;
    { c->r[31] = 0x08959c68u; c->r[4] = c->r[2] + 0u; func_08808260(c, ram); }
    c->r[3] = c->r[30] + 0x00000020u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000040u;
    c->r[4] = c->r[3] + 0u;
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x08959c84u; c->r[6] = 0u + 0u; func_0885a194(c, ram); }
    c->r[4] = c->r[30] + 0x00000060u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = c->r[2] + 0x00000020u;
    c->r[2] = 0x08a80000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00002f90u);
    c->r[2] = c->r[2] + 0x00000020u;
    c->r[5] = c->r[3] + 0u;
    { c->r[31] = 0x08959ca8u; c->r[6] = c->r[2] + 0u; func_0884c07c(c, ram); }
    c->r[2] = c->r[30] + 0x00000060u;
    c->r[4] = 0x08a70000u;
    c->r[4] = c->r[4] + 0xffffb640u;
    { c->r[31] = 0x08959cbcu; c->r[5] = c->r[2] + 0u; func_089f1418(c, ram); }
    c->r[4] = 0x08a70000u;
    c->r[4] = c->r[4] + 0xffffb640u;
    c->r[5] = 0u + 0x00000003u;
    { c->r[31] = 0x08959cd0u; c->r[6] = 0u + 0x00000007u; func_089df7a0(c, ram); }
    c->r[2] = 0x08aa0000u;
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x000046f4u);
    c->r[4] = 0x08a70000u;
    c->r[4] = c->r[4] + 0xffffb640u;
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x08959cecu; c->r[6] = 0u + 0u; func_089e0bd8(c, ram); }
    c->r[4] = 0x08a70000u;
    c->r[4] = c->r[4] + 0xffffb640u;
    { c->r[31] = 0x08959cfcu; c->r[5] = 0u + 0u; func_089dff38(c, ram); }
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000700u);
    c->r[2] = 0u + 0x000002e8u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[4] = c->lo;
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
    { c->r[31] = 0x08959d48u; c->r[5] = c->r[5] | 0x0181u; func_0895a5f8(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x00000040u;
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000000u);
    mem_wf32(ram, c->r[30] + 0x00000070u, c->f[0]);
    c->r[1] = 0x08a50000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffff8084u);
    mem_wf32(ram, c->r[30] + 0x00000074u, c->f[0]);
    mem_w32(ram, c->r[30] + 0x00000010u, 0u);
L_08959d68:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000005u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_08959d80; }
    { goto L_0895a1cc; }
L_08959d80:
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000070u);
    c->f[0] = u2f(0u);
    alx_c_cond_s(c, 12, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_08959da0; }
    { goto L_0895a19c; }
L_08959da0:
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000070u);
    c->r[1] = 0x08a50000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffff8084u);
    alx_c_cond_s(c, 12, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_08959dc4; }
    { goto L_0895a19c; }
L_08959dc4:
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000070u);
    c->r[1] = 0x08a50000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffff809cu);
    c->f[0] = c->f[1] * c->f[0];
    { c->r[31] = 0x08959ddcu; c->f[12] = c->f[0]; func_08a0f760(c, ram); }
    mem_wf32(ram, c->r[30] + 0x00000078u, c->f[0]);
    c->r[2] = c->r[30] + 0x00000080u;
    { c->r[31] = 0x08959decu; c->r[4] = c->r[2] + 0u; func_08808240(c, ram); }
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000078u);
    c->r[1] = 0x08a50000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffff80a0u);
    c->f[0] = c->f[1] * c->f[0];
    mem_wf32(ram, c->r[30] + 0x00000080u, c->f[0]);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000078u);
    c->r[1] = 0x08a50000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffff80a0u);
    c->f[0] = c->f[1] * c->f[0];
    mem_wf32(ram, c->r[30] + 0x00000084u, c->f[0]);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000078u);
    c->r[1] = 0x08a50000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffff80a4u);
    c->f[0] = c->f[1] * c->f[0];
    mem_wf32(ram, c->r[30] + 0x00000088u, c->f[0]);
    c->r[1] = 0x08a50000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffff8084u);
    mem_wf32(ram, c->r[30] + 0x0000008cu, c->f[0]);
    c->r[2] = c->r[30] + 0x00000080u;
    { c->r[31] = 0x08959e40u; c->r[4] = c->r[2] + 0u; func_0888d9b8(c, ram); }
    c->r[5] = c->r[2] + 0u;
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000700u);
    c->r[2] = 0u + 0x000002e8u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[4] = c->lo;
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
    { c->r[31] = 0x08959e88u; c->r[4] = c->r[2] + 0u; func_0895a63c(c, ram); }
    c->r[2] = c->r[30] + 0x00000090u;
    { c->r[31] = 0x08959e94u; c->r[4] = c->r[2] + 0u; func_08808260(c, ram); }
    c->r[2] = c->r[30] + 0x00000090u;
    { c->r[31] = 0x08959ea0u; c->r[4] = c->r[2] + 0u; func_08808280(c, ram); }
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000070u);
    c->r[1] = 0x08a50000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffff80a8u);
    c->f[1] = c->f[1] * c->f[0];
    c->r[1] = 0x08a50000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffff80acu);
    c->f[0] = c->f[1] + c->f[0];
    mem_wf32(ram, c->r[30] + 0x00000090u, c->f[0]);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000070u);
    c->r[1] = 0x08a50000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffff80b0u);
    c->f[1] = c->f[1] * c->f[0];
    c->r[1] = 0x08a50000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffff80a8u);
    c->f[0] = c->f[1] + c->f[0];
    mem_wf32(ram, c->r[30] + 0x000000b8u, c->f[0]);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000070u);
    c->r[1] = 0x08a50000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffff80b4u);
    c->f[1] = c->f[1] * c->f[0];
    c->r[1] = 0x08a50000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffff80acu);
    c->f[0] = c->f[1] + c->f[0];
    mem_wf32(ram, c->r[30] + 0x000000a4u, c->f[0]);
    c->r[2] = c->r[30] + 0x00000090u;
    c->r[3] = c->r[30] + 0x00000090u;
    c->r[6] = c->r[30] + 0x00000020u;
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x08959f18u; c->r[5] = c->r[3] + 0u; func_0884c6d4(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[3] = c->r[2] << 4;
    c->r[2] = 0x08aa0000u;
    c->r[2] = c->r[2] + 0x00004900u;
    c->r[2] = c->r[3] + c->r[2];
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000000u);
    mem_wf32(ram, c->r[30] + 0x000000c0u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[3] = c->r[2] << 4;
    c->r[2] = 0x08aa0000u;
    c->r[2] = c->r[2] + 0x00004900u;
    c->r[2] = c->r[3] + c->r[2];
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000008u);
    mem_wf32(ram, c->r[30] + 0x000000c8u, c->f[0]);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000070u);
    c->r[1] = 0x08a50000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffff80b8u);
    c->f[1] = c->f[1] * c->f[0];
    c->r[1] = 0x08a50000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffff80acu);
    c->f[0] = c->f[1] + c->f[0];
    c->f[0] = -c->f[0];
    mem_wf32(ram, c->r[30] + 0x000000c4u, c->f[0]);
    c->r[1] = 0x08a50000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffff8084u);
    mem_wf32(ram, c->r[30] + 0x000000ccu, c->f[0]);
    c->r[2] = c->r[30] + 0x00000090u;
    c->r[4] = c->r[2] + 0x00000030u;
    c->r[2] = c->r[30] + 0x00000090u;
    c->r[2] = c->r[2] + 0x00000030u;
    c->r[3] = c->r[30] + 0x00000020u;
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x08959fa0u; c->r[6] = c->r[3] + 0u; func_0884c26c(c, ram); }
    c->r[2] = c->r[30] + 0x00000090u;
    c->r[4] = c->r[2] + 0x00000030u;
    c->r[2] = c->r[30] + 0x00000090u;
    c->r[2] = c->r[2] + 0x00000030u;
    c->r[3] = c->r[30] + 0x00000060u;
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x08959fc0u; c->r[6] = c->r[3] + 0u; func_08859fd4(c, ram); }
    c->r[1] = 0x08a50000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffff8084u);
    mem_wf32(ram, c->r[30] + 0x000000ccu, c->f[0]);
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000700u);
    c->r[2] = 0u + 0x000002e8u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[4] = c->lo;
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
    c->r[3] = c->r[30] + 0x00000090u;
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0u + 0x00000002u;
    { c->r[31] = 0x0895a01cu; c->r[6] = c->r[3] + 0u; func_0895a6b4(c, ram); }
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000700u);
    c->r[2] = 0u + 0x000002e8u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[4] = c->lo;
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
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000070u);
    c->r[1] = 0x08a50000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffff80bcu);
    c->f[1] = c->f[1] * c->f[0];
    c->r[1] = 0x08a50000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffff80c0u);
    c->f[1] = c->f[1] - c->f[0];
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000074u);
    c->f[0] = c->f[1] * c->f[0];
    c->r[4] = c->r[2] + 0u;
    c->f[12] = c->f[0];
    c->f[13] = u2f(0u);
    { c->r[31] = 0x0895a090u; func_0895a674(c, ram); }
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000700u);
    c->r[2] = 0u + 0x000002e8u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[4] = c->lo;
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
    c->r[2] = c->r[2] + 0x000046f8u;
    c->r[2] = c->r[2] >> 24;
    c->r[2] = c->r[2] & 0x000fu;
    c->r[3] = c->r[2] << 16;
    c->r[2] = 0x10000000u;
    c->r[2] = c->r[3] | c->r[2];
    { c->r[31] = 0x0895a0f0u; c->r[5] = c->r[2] + 0u; func_0895a5f8(c, ram); }
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000700u);
    c->r[2] = 0u + 0x000002e8u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[4] = c->lo;
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
    c->r[3] = c->r[3] + 0x000046f8u;
    c->r[2] = 0x00ff0000u;
    c->r[2] = c->r[2] | 0xffffu;
    c->r[3] = c->r[3] & c->r[2];
    c->r[2] = 0x01000000u;
    c->r[2] = c->r[3] | c->r[2];
    { c->r[31] = 0x0895a150u; c->r[5] = c->r[2] + 0u; func_0895a5f8(c, ram); }
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000700u);
    c->r[2] = 0u + 0x000002e8u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[4] = c->lo;
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
    { c->r[31] = 0x0895a19cu; c->r[5] = c->r[5] | 0x0020u; func_0895a5f8(c, ram); }
L_0895a19c:
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000070u);
    c->r[1] = 0x08a50000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffff80a0u);
    c->f[0] = c->f[1] + c->f[0];
    mem_wf32(ram, c->r[30] + 0x00000070u, c->f[0]);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000074u);
    c->f[0] = -c->f[0];
    mem_wf32(ram, c->r[30] + 0x00000074u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]); goto L_08959d68; }
L_0895a1cc:
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000700u);
    c->r[2] = 0u + 0x000002e8u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[4] = c->lo;
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
    c->f[12] = u2f(0u);
    c->f[13] = u2f(0u);
    { c->r[31] = 0x0895a21cu; func_0895a674(c, ram); }
    c->r[4] = 0x08a70000u;
    c->r[4] = c->r[4] + 0xffffb640u;
    { c->r[31] = 0x0895a22cu; c->r[5] = 0u + 0x00000001u; func_089dff38(c, ram); }
    c->r[4] = 0x08a70000u;
    { c->r[31] = 0x0895a238u; c->r[4] = c->r[4] + 0xffffb640u; func_089f147c(c, ram); }
L_0895a238:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x000000e8u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x000000e4u);
    c->r[16] = mem_r32(ram, c->r[29] + 0x000000e0u);
    { c->r[29] = c->r[29] + 0x000000f0u; return; }
    return; /* fell out of func_0895979c */
}

/* func_0895bafc  0x0895bafc..0x0895bb24  40 bytes, source=sweep */
void func_0895bafc(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0895bafcu);
    c->r[29] = c->r[29] + 0xfffffff0u;
    mem_w32(ram, c->r[29] + 0x00000000u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    c->r[2] = 0x08aa0000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00004964u);
    c->r[2] = c->r[2] & 0x0030u;
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000000u);
    { c->r[29] = c->r[29] + 0x00000010u; return; }
    return; /* fell out of func_0895bafc */
}

/* func_08960044  0x08960044..0x08960280  572 bytes, source=fde */
void func_08960044(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08960044u);
    c->r[29] = c->r[29] + 0xffffffc0u;
    mem_w32(ram, c->r[29] + 0x00000034u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000030u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[6]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = mem_r32(ram, c->r[3] + 0x00000000u);
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[3] + 0x00000004u);
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[3] + 0x00000008u);
    mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[3] + 0x0000000cu);
    mem_w32(ram, c->r[30] + 0x0000001cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    { int _c = ((s32)c->r[2] < 0); if (_c) goto L_0896010c; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = c->r[2] << 3;
    c->r[2] = 0x08aa0000u;
    c->r[2] = c->r[2] + 0x000049dcu;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_089600d8; }
    c->r[3] = c->r[30] + 0x00000010u;
    c->r[5] = c->r[30] + 0x00000010u;
    c->r[2] = 0x08a80000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00002ed8u);
    c->r[2] = c->r[2] + 0x00000020u;
    c->r[4] = c->r[3] + 0u;
    { c->r[31] = 0x089600d0u; c->r[6] = c->r[2] + 0u; func_08859fd4(c, ram); }
    { goto L_08960128; }
L_089600d8:
    c->r[4] = c->r[30] + 0x00000010u;
    c->r[5] = c->r[30] + 0x00000010u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = c->r[2] << 3;
    c->r[2] = 0x08aa0000u;
    c->r[2] = c->r[2] + 0x000049dcu;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000020u;
    { c->r[31] = 0x08960104u; c->r[6] = c->r[2] + 0u; func_08859fd4(c, ram); }
    { goto L_08960128; }
L_0896010c:
    c->r[2] = c->r[30] + 0x00000010u;
    c->r[3] = c->r[30] + 0x00000010u;
    c->r[4] = c->r[2] + 0u;
    c->r[5] = c->r[3] + 0u;
    c->r[6] = 0x08aa0000u;
    { c->r[31] = 0x08960128u; c->r[6] = c->r[6] + 0xffffebd0u; func_08859fd4(c, ram); }
L_08960128:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = c->r[2] << 3;
    c->r[2] = 0x08aa0000u;
    c->r[2] = c->r[2] + 0x000049dcu;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_08960188; }
    c->r[2] = 0x08aa0000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x000052ecu);
    mem_w32(ram, c->r[30] + 0x00000020u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = 0u + 0x0000002cu;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[3] = c->lo;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[3] = c->r[30] + 0x00000010u;
    c->r[4] = c->r[2] + 0u;
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x08960180u; c->r[6] = c->r[3] + 0u; func_0895ee18(c, ram); }
    { goto L_0896026c; }
L_08960188:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = c->r[2] << 3;
    c->r[2] = 0x08aa0000u;
    c->r[2] = c->r[2] + 0x000049e0u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[3] = mem_r8(ram, c->r[2] + 0x00000098u);
    c->r[2] = 0u + 0x00000003u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_08960230; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = c->r[2] << 3;
    c->r[2] = 0x08aa0000u;
    c->r[2] = c->r[2] + 0x000049e0u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[4] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = c->r[2] << 3;
    c->r[2] = 0x08aa0000u;
    c->r[2] = c->r[2] + 0x000049e0u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000008cu);
    c->r[2] = c->r[2] | 0x0200u;
    mem_w32(ram, c->r[4] + 0x0000008cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = c->r[2] << 3;
    c->r[2] = 0x08aa0000u;
    c->r[2] = c->r[2] + 0x000049e0u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000050u);
    c->r[3] = c->r[2] + 0x000000b0u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    mem_w32(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    mem_w32(ram, c->r[3] + 0x00000004u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    mem_w32(ram, c->r[3] + 0x00000008u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    { mem_w32(ram, c->r[3] + 0x0000000cu, c->r[2]); goto L_0896026c; }
L_08960230:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = c->r[2] << 3;
    c->r[2] = 0x08aa0000u;
    c->r[2] = c->r[2] + 0x000049dcu;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[3] = c->r[2] + 0x00000020u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    mem_w32(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    mem_w32(ram, c->r[3] + 0x00000004u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    mem_w32(ram, c->r[3] + 0x00000008u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    mem_w32(ram, c->r[3] + 0x0000000cu, c->r[2]);
L_0896026c:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000034u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000030u);
    { c->r[29] = c->r[29] + 0x00000040u; return; }
    return; /* fell out of func_08960044 */
}

/* func_08962670  0x08962670..0x08962740  208 bytes, source=sweep */
void func_08962670(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08962670u);
    c->r[29] = c->r[29] + 0xffffffd0u;
    mem_w32(ram, c->r[29] + 0x00000020u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[6]);
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[7]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x000000bcu);
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x000000bcu);
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
    mem_w32(ram, c->r[30] + 0x0000001cu, 0u);
    mem_w32(ram, c->r[30] + 0x00000018u, 0u);
L_089626b0:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = ((s32)c->r[2] < (s32)c->r[3]) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_089626cc; }
    { goto L_08962730; }
L_089626cc:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[3] = c->r[2] << 3;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[3] = mem_r8(ram, c->r[2] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_08962720; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_08962714; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[3] = c->r[2] << 3;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = c->r[3] + c->r[2];
    { mem_w8(ram, c->r[2] + 0x00000001u, 0u); goto L_08962730; }
L_08962714:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = c->r[2] + 0x00000001u;
    mem_w32(ram, c->r[30] + 0x0000001cu, c->r[2]);
L_08962720:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]); goto L_089626b0; }
L_08962730:
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000020u);
    { c->r[29] = c->r[29] + 0x00000030u; return; }
    return; /* fell out of func_08962670 */
}

/* func_08965218  0x08965218..0x089655d4  956 bytes, source=fde */
void func_08965218(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08965218u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    c->r[3] = 0x08aa0000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00004964u);
    c->r[2] = 0u + 0xffffffcfu;
    c->r[2] = c->r[3] & c->r[2];
    c->r[1] = 0x08aa0000u;
    { c->r[31] = 0x08965244u; mem_w32(ram, c->r[1] + 0x00004964u, c->r[2]); func_08964cc0(c, ram); }
    c->r[3] = 0x08aa0000u;
    c->r[3] = mem_r8(ram, c->r[3] + 0x00004960u);
    c->r[2] = 0u + 0x00000003u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_089652bc; }
    c->r[2] = 0x08aa0000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00004964u);
    c->r[2] = c->r[2] & 0x3e00u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_08965284; }
    { c->r[31] = 0x08965274u; func_0895d5f8(c, ram); }
    { int _c = (c->r[2] != 0u); if (_c) goto L_0896529c; }
    { mem_w32(ram, c->r[30] + 0x0000000cu, 0u); goto L_089655bc; }
L_08965284:
    { c->r[31] = 0x0896528cu; func_0895cef0(c, ram); }
    { int _c = (c->r[2] != 0u); if (_c) goto L_0896529c; }
    { mem_w32(ram, c->r[30] + 0x0000000cu, 0u); goto L_089655bc; }
L_0896529c:
    c->r[2] = 0x08aa0000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00004964u);
    c->r[2] = c->r[2] & 0x1e00u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_089652bc; }
    c->r[2] = 0u + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]); goto L_089655bc; }
L_089652bc:
    c->r[4] = 0x08aa0000u;
    c->r[4] = c->r[4] + 0x00004960u;
    c->r[5] = 0x08aa0000u;
    { c->r[31] = 0x089652d0u; c->r[5] = c->r[5] + 0x00005200u; func_0895e390(c, ram); }
    c->r[4] = 0x08aa0000u;
    c->r[4] = c->r[4] + 0x00004960u;
    c->r[5] = 0x08aa0000u;
    { c->r[31] = 0x089652e4u; c->r[5] = c->r[5] + 0x00005200u; func_0895dea0(c, ram); }
    c->r[4] = 0x08aa0000u;
    c->r[4] = c->r[4] + 0x00004960u;
    c->r[5] = 0x08aa0000u;
    { c->r[31] = 0x089652f8u; c->r[5] = c->r[5] + 0x00005200u; func_089620e4(c, ram); }
    c->r[4] = 0x08aa0000u;
    c->r[4] = c->r[4] + 0x00004960u;
    c->r[5] = 0x08aa0000u;
    { c->r[31] = 0x0896530cu; c->r[5] = c->r[5] + 0x00005200u; func_089624cc(c, ram); }
    c->r[4] = 0x08aa0000u;
    c->r[4] = c->r[4] + 0x00004960u;
    c->r[5] = 0x08aa0000u;
    { c->r[31] = 0x08965320u; c->r[5] = c->r[5] + 0x00005200u; func_08962a9c(c, ram); }
    c->r[4] = 0x08aa0000u;
    c->r[4] = c->r[4] + 0x00004960u;
    c->r[5] = 0x08aa0000u;
    { c->r[31] = 0x08965334u; c->r[5] = c->r[5] + 0x00005200u; func_08962eec(c, ram); }
    c->r[4] = 0x08aa0000u;
    c->r[4] = c->r[4] + 0x00004960u;
    c->r[5] = 0x08aa0000u;
    { c->r[31] = 0x08965348u; c->r[5] = c->r[5] + 0x00005200u; func_08963244(c, ram); }
    c->r[4] = 0x08aa0000u;
    c->r[4] = c->r[4] + 0x00004960u;
    c->r[5] = 0x08aa0000u;
    { c->r[31] = 0x0896535cu; c->r[5] = c->r[5] + 0x00005200u; func_08963534(c, ram); }
    c->r[4] = 0x08aa0000u;
    c->r[4] = c->r[4] + 0x00004960u;
    c->r[5] = 0x08aa0000u;
    { c->r[31] = 0x08965370u; c->r[5] = c->r[5] + 0x00005200u; func_089637f0(c, ram); }
    c->r[4] = 0x08aa0000u;
    c->r[4] = c->r[4] + 0x00004960u;
    c->r[5] = 0x08aa0000u;
    { c->r[31] = 0x08965384u; c->r[5] = c->r[5] + 0x00005200u; func_08963b38(c, ram); }
    c->r[4] = 0x08aa0000u;
    c->r[4] = c->r[4] + 0x00004960u;
    c->r[5] = 0x08aa0000u;
    { c->r[31] = 0x08965398u; c->r[5] = c->r[5] + 0x00005200u; func_08963e88(c, ram); }
    c->r[4] = 0x08aa0000u;
    c->r[4] = c->r[4] + 0x00004960u;
    c->r[5] = 0x08aa0000u;
    { c->r[31] = 0x089653acu; c->r[5] = c->r[5] + 0x00005200u; func_08964140(c, ram); }
    c->r[4] = 0x08aa0000u;
    c->r[4] = c->r[4] + 0x00004960u;
    c->r[5] = 0x08aa0000u;
    { c->r[31] = 0x089653c0u; c->r[5] = c->r[5] + 0x00005200u; func_089644c4(c, ram); }
    c->r[2] = 0x08aa0000u;
    c->r[2] = mem_r8(ram, c->r[2] + 0x00004960u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_08965470; }
    c->r[3] = 0x08aa0000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00004968u);
    c->r[2] = 0u + 0x0000001eu;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_08965470; }
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x089653f0u; c->r[4] = c->r[4] + 0x00000af4u; func_0880d294(c, ram); }
    { int _c = (c->r[2] == 0u); if (_c) goto L_0896541c; }
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x08965404u; c->r[4] = c->r[4] + 0x00000af4u; func_0880d294(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = 0u + 0x00000001u;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_0896541c; }
    { goto L_08965470; }
L_0896541c:
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x08965428u; c->r[4] = c->r[4] + 0x00000af4u; func_0880d380(c, ram); }
    { c->r[31] = 0x08965430u; c->r[4] = c->r[2] + 0u; func_08968f28(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[2]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000004u);
    { c->r[31] = 0x08965440u; c->r[5] = 0u + 0u; func_089691fc(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    { int _c = ((s32)c->r[2] < 0); if (_c) goto L_08965470; }
    c->r[2] = 0x08aa0000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00004964u);
    c->r[2] = c->r[2] & 0x0004u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_08965470; }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000008u);
    { c->r[31] = 0x08965470u; c->r[5] = 0u + 0xffffffffu; func_0880aed0(c, ram); }
L_08965470:
    c->r[3] = 0x08aa0000u;
    c->r[3] = mem_r8(ram, c->r[3] + 0x00004960u);
    c->r[2] = 0u + 0x00000002u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_089654ec; }
    c->r[2] = 0x08aa0000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000496cu);
    c->r[2] = c->r[2] + 0x00000001u;
    c->r[1] = 0x08aa0000u;
    mem_w32(ram, c->r[1] + 0x0000496cu, c->r[2]);
    c->r[3] = 0x08aa0000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x0000496cu);
    c->r[2] = 0u + 0x0000001eu;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_089654ec; }
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x089654b8u; c->r[4] = c->r[4] + 0x00000af4u; func_0880d380(c, ram); }
    { c->r[31] = 0x089654c0u; c->r[4] = c->r[2] + 0u; func_08968f28(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000008u);
    { c->r[31] = 0x089654d0u; c->r[5] = 0u + 0x00000001u; func_089691fc(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    { int _c = ((s32)c->r[2] < 0); if (_c) goto L_089654ec; }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000004u);
    { c->r[31] = 0x089654ecu; c->r[5] = 0u + 0xffffffffu; func_0880aed0(c, ram); }
L_089654ec:
    c->r[2] = 0x08aa0000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00005204u);
    c->r[3] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x00000018u);
    c->r[2] = 0x08aa0000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00004968u);
    { int _c = (c->r[2] != c->r[3]); if (_c) goto L_08965530; }
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000af4u;
    { c->r[31] = 0x08965518u; c->r[5] = 0u + 0u; func_0880d524(c, ram); }
    c->r[2] = 0x08aa0000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00004964u);
    c->r[3] = 0u + 0xffffff7fu;
    c->r[2] = c->r[2] & c->r[3];
    c->r[1] = 0x08aa0000u;
    mem_w32(ram, c->r[1] + 0x00004964u, c->r[2]);
L_08965530:
    c->r[4] = 0x08aa0000u;
    c->r[4] = c->r[4] + 0x00004960u;
    c->r[5] = 0x08aa0000u;
    { c->r[31] = 0x08965544u; c->r[5] = c->r[5] + 0x00005200u; func_0895e4ac(c, ram); }
    c->r[4] = 0x08aa0000u;
    c->r[4] = c->r[4] + 0x00004960u;
    c->r[5] = 0x08aa0000u;
    { c->r[31] = 0x08965558u; c->r[5] = c->r[5] + 0x00005200u; func_0895da58(c, ram); }
    c->r[2] = 0u + 0x00000001u;
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]);
    c->r[3] = 0x08aa0000u;
    c->r[3] = mem_r8(ram, c->r[3] + 0x00004960u);
    c->r[2] = 0u + 0x00000003u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_08965578; }
    mem_w32(ram, c->r[30] + 0x00000008u, 0u);
L_08965578:
    c->r[2] = 0x08aa0000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00004964u);
    c->r[3] = 0x01000000u;
    c->r[2] = c->r[2] & c->r[3];
    { int _c = (c->r[2] == 0u); if (_c) goto L_08965594; }
    mem_w32(ram, c->r[30] + 0x00000008u, 0u);
L_08965594:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_089655b4; }
    c->r[2] = 0x08aa0000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00004968u);
    c->r[2] = c->r[2] + 0x00000001u;
    c->r[1] = 0x08aa0000u;
    mem_w32(ram, c->r[1] + 0x00004968u, c->r[2]);
L_089655b4:
    c->r[2] = 0u + 0x00000001u;
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
L_089655bc:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_08965218 */
}

/* func_08968bf8  0x08968bf8..0x08968c78  128 bytes, source=sweep */
void func_08968bf8(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08968bf8u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    mem_w32(ram, c->r[30] + 0x00000008u, 0u);
L_08968c10:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000014u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_08968c28; }
    { goto L_08968c60; }
L_08968c28:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000008u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_08968c50; }
    c->r[2] = 0u + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]); goto L_08968c64; }
L_08968c50:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]); goto L_08968c10; }
L_08968c60:
    mem_w32(ram, c->r[30] + 0x0000000cu, 0u);
L_08968c64:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_08968bf8 */
}

/* func_08969b2c  0x08969b2c..0x08969d1c  496 bytes, source=fde */
void func_08969b2c(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08969b2cu);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = 0u + 0xffffffffu;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_08969b58; }
    { mem_w32(ram, c->r[30] + 0x0000000cu, 0u); goto L_08969d04; }
L_08969b58:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = ((s32)c->r[2] < (s32)0x0000000cu) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_08969b70; }
    { mem_w32(ram, c->r[30] + 0x0000000cu, 0u); goto L_08969d04; }
L_08969b70:
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x08969b7cu; c->r[4] = c->r[4] + 0x00000af4u; func_0880d410(c, ram); }
    { c->r[31] = 0x08969b84u; c->r[4] = c->r[2] + 0u; func_08969d1c(c, ram); }
    mem_w8(ram, c->r[30] + 0x00000004u, c->r[2]);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[30] + 0x00000004u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_08969ba4; }
    c->r[2] = 0u + 0x00000001u;
    c->r[1] = 0x08aa0000u;
    { mem_w8(ram, c->r[1] + 0x000053cfu, c->r[2]); goto L_08969bac; }
L_08969ba4:
    c->r[1] = 0x08aa0000u;
    mem_w8(ram, c->r[1] + 0x000053cfu, 0u);
L_08969bac:
    c->r[4] = 0x08aa0000u;
    c->r[4] = (u32)(s32)(s8)mem_r8(ram, c->r[4] + 0x000053cfu);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 1;
    c->r[2] = c->r[4] + 0u;
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[4];
    c->r[3] = c->r[3] + c->r[2];
    c->r[2] = 0x08a60000u;
    c->r[2] = c->r[2] + 0xffff9c28u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000000u);
    c->r[1] = 0x08aa0000u;
    mem_w8(ram, c->r[1] + 0x000053cdu, c->r[2]);
    c->r[4] = 0x08aa0000u;
    c->r[4] = (u32)(s32)(s8)mem_r8(ram, c->r[4] + 0x000053cfu);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 1;
    c->r[2] = c->r[4] + 0u;
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[4];
    c->r[3] = c->r[3] + c->r[2];
    c->r[2] = 0x08a60000u;
    c->r[2] = c->r[2] + 0xffff9c28u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000001u);
    c->r[1] = 0x08aa0000u;
    mem_w8(ram, c->r[1] + 0x000053ceu, c->r[2]);
    c->r[4] = 0x08aa0000u;
    c->r[4] = (u32)(s32)(s8)mem_r8(ram, c->r[4] + 0x000053cfu);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 1;
    c->r[2] = c->r[4] + 0u;
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[4];
    c->r[3] = c->r[3] + c->r[2];
    c->r[2] = 0x08a60000u;
    c->r[2] = c->r[2] + 0xffff9c28u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000002u);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000af4u;
    { c->r[31] = 0x08969c80u; c->r[5] = c->r[2] + 0u; func_0882172c(c, ram); }
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x08969c8cu; c->r[4] = c->r[4] + 0x00000af4u; func_0880810c(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_08969ca4; }
    { mem_w32(ram, c->r[30] + 0x0000000cu, 0u); goto L_08969d04; }
L_08969ca4:
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x08969cb0u; c->r[4] = c->r[4] + 0x00000af4u; func_08813c00(c, ram); }
    c->r[1] = 0x08aa0000u;
    mem_w8(ram, c->r[1] + 0x000053d0u, c->r[2]);
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x08969cc4u; c->r[4] = c->r[4] + 0x00000af4u; func_0880d380(c, ram); }
    c->r[1] = 0x08aa0000u;
    mem_w8(ram, c->r[1] + 0x000053d1u, c->r[2]);
    c->r[2] = 0x08aa0000u;
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x000053cdu);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000af4u;
    { c->r[31] = 0x08969ce4u; c->r[5] = c->r[2] + 0u; func_0880d34c(c, ram); }
    c->r[2] = 0x08aa0000u;
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x000053ceu);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000af4u;
    { c->r[31] = 0x08969cfcu; c->r[5] = c->r[2] + 0u; func_0880d3a8(c, ram); }
    c->r[2] = 0u + 0x00000001u;
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
L_08969d04:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_08969b2c */
}

/* func_0896aac8  0x0896aac8..0x0896aca8  480 bytes, source=fde */
void func_0896aac8(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0896aac8u);
    c->r[29] = c->r[29] + 0xffffffc0u;
    mem_w32(ram, c->r[29] + 0x00000034u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000030u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x000000e0u;
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[2]);
    c->r[2] = 0x08aa0000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000684cu);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000ac8u;
    { c->r[31] = 0x0896ab00u; c->r[5] = c->r[2] + 0u; func_089cb820(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]);
    { c->r[31] = 0x0896ab0cu; c->r[4] = mem_r32(ram, c->r[30] + 0x00000004u); func_0896e48c(c, ram); }
    { int _c = (c->r[2] == 0u); if (_c) goto L_0896ac74; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_0896ab8c; }
    c->r[4] = 0u + 0u;
    c->r[5] = 0u + 0x00000004u;
    c->r[6] = 0u + 0xffffffffu;
    c->r[7] = 0u + 0xffffffffu;
    c->r[8] = 0u + 0u;
    c->r[9] = 0u + 0u;
    { c->r[31] = 0x0896ab40u; c->r[10] = 0u + 0u; func_0892fcac(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000ac8u;
    { c->r[31] = 0x0896ab54u; c->r[5] = mem_r32(ram, c->r[30] + 0x00000008u); func_089cb780(c, ram); }
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[1] = 0x08aa0000u;
    mem_w32(ram, c->r[1] + 0x0000684cu, c->r[2]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[5] = 0x27000000u;
    { c->r[31] = 0x0896ab74u; c->r[5] = c->r[5] | 0x0008u; func_0892ff54(c, ram); }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->f[12] = u2f(0u);
    { c->r[31] = 0x0896ab84u; func_08932528(c, ram); }
    c->r[1] = 0x08aa0000u;
    mem_w16(ram, c->r[1] + 0x00006850u, 0u);
L_0896ab8c:
    { c->r[31] = 0x0896ab94u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000008u); func_08930048(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = 0u + 0x00000003u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_0896ac94; }
    c->r[2] = 0x08a50000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0xffff85c0u);
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]);
    c->r[2] = 0x08a50000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0xffff85c4u);
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
    c->r[2] = 0x08a50000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0xffff85c8u);
    mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]);
    { c->r[31] = 0x0896abd0u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000004u); func_0896e48c(c, ram); }
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[30];
    c->r[2] = c->r[2] + 0x00000010u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    mem_w32(ram, c->r[30] + 0x00000020u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[2] = 0x08a60000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0xffff9dccu);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_0896ac00; }
    c->r[1] = 0x08aa0000u;
    mem_w16(ram, c->r[1] + 0x00006850u, 0u);
L_0896ac00:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[1] = 0x08a60000u;
    mem_w32(ram, c->r[1] + 0xffff9dccu, c->r[2]);
    c->r[1] = 0x08a50000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffff85d8u);
    c->r[4] = 0x08a70000u;
    c->r[4] = c->r[4] + 0xffffb640u;
    { c->r[31] = 0x0896ac24u; c->f[12] = c->f[0]; func_089f1210(c, ram); }
    c->r[1] = 0x08a50000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffff85dcu);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00002dfcu;
    c->r[5] = 0x08a50000u;
    c->r[5] = c->r[5] + 0xffff85ccu;
    c->r[6] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[7] = 0u + 0x00000017u;
    c->r[8] = 0u + 0x000000cdu;
    c->f[12] = c->f[0];
    c->r[9] = 0u + 0u;
    c->r[10] = 0x08aa0000u;
    c->r[10] = c->r[10] + 0x00006850u;
    { c->r[31] = 0x0896ac60u; c->r[11] = 0u + 0x00000001u; func_089ce004(c, ram); }
    c->r[4] = 0x08a70000u;
    { c->r[31] = 0x0896ac6cu; c->r[4] = c->r[4] + 0xffffb640u; func_089f147c(c, ram); }
    { goto L_0896ac94; }
L_0896ac74:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_0896ac8c; }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000008u);
    { c->r[31] = 0x0896ac8cu; c->r[5] = 0u + 0x00000002u; func_0880d260(c, ram); }
L_0896ac8c:
    c->r[1] = 0x08aa0000u;
    mem_w16(ram, c->r[1] + 0x00006850u, 0u);
L_0896ac94:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000034u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000030u);
    { c->r[29] = c->r[29] + 0x00000040u; return; }
    return; /* fell out of func_0896aac8 */
}

/* func_0896dd04  0x0896dd04..0x0896dd30  44 bytes, source=fde */
void func_0896dd04(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0896dd04u);
    c->r[29] = c->r[29] + 0xfffffff0u;
    mem_w32(ram, c->r[29] + 0x00000004u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000000u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    { c->r[31] = 0x0896dd1cu; func_08998c3c(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000004u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000000u);
    { c->r[29] = c->r[29] + 0x00000010u; return; }
    return; /* fell out of func_0896dd04 */
}

/* func_0896e8f8  0x0896e8f8..0x0896e958  96 bytes, source=fde */
void func_0896e8f8(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0896e8f8u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000ac8u;
    { c->r[31] = 0x0896e920u; c->r[5] = c->r[2] + 0u; func_089cb820(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_0896e93c; }
    c->r[2] = 0u + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]); goto L_0896e940; }
L_0896e93c:
    mem_w32(ram, c->r[30] + 0x00000008u, 0u);
L_0896e940:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_0896e8f8 */
}

/* func_0896f988  0x0896f988..0x0896f9c0  56 bytes, source=sweep */
void func_0896f988(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0896f988u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = c->r[2] << 1;
    c->r[2] = 0x08aa0000u;
    c->r[2] = c->r[2] + 0x00006894u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x00000000u);
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_0896f988 */
}

/* func_08972848  0x08972848..0x08972d0c  1220 bytes, source=fde */
void func_08972848(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08972848u);
    c->r[29] = c->r[29] + 0xffffffd0u;
    mem_w32(ram, c->r[29] + 0x00000024u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000020u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[6]);
    mem_w32(ram, c->r[30] + 0x0000000cu, 0u);
L_08972868:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000004u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_08972880; }
    { goto L_08972994; }
L_08972880:
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 5;
    c->r[2] = 0x08a60000u;
    c->r[2] = c->r[2] + 0xffff9f0cu;
    c->r[2] = c->r[3] + c->r[2];
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0x08a60000u;
    c->r[5] = c->r[5] + 0xffffa254u;
    { c->r[31] = 0x089728b4u; c->r[6] = 0u + 0x00000014u; func_08a19db8(c, ram); }
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 5;
    c->r[2] = 0x08a60000u;
    c->r[2] = c->r[2] + 0xffff9f5cu;
    c->r[2] = c->r[3] + c->r[2];
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0x08a60000u;
    c->r[5] = c->r[5] + 0xffffa254u;
    { c->r[31] = 0x089728e8u; c->r[6] = 0u + 0x00000014u; func_08a19db8(c, ram); }
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 3;
    c->r[2] = 0x08a60000u;
    c->r[2] = c->r[2] + 0xffffa1bcu;
    c->r[3] = c->r[3] + c->r[2];
    c->r[2] = 0x00020000u;
    mem_w32(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 3;
    c->r[2] = 0x08a60000u;
    c->r[2] = c->r[2] + 0xffffa1d0u;
    c->r[2] = c->r[3] + c->r[2];
    mem_w32(ram, c->r[2] + 0x00000000u, 0u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 3;
    c->r[2] = 0x08a60000u;
    c->r[2] = c->r[2] + 0xffffa1c4u;
    c->r[3] = c->r[3] + c->r[2];
    c->r[2] = 0u + 0x0000001au;
    mem_w32(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 3;
    c->r[2] = 0x08a60000u;
    c->r[2] = c->r[2] + 0xffffa1d8u;
    c->r[3] = c->r[3] + c->r[2];
    c->r[2] = 0u + 0x0000001au;
    mem_w32(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]); goto L_08972868; }
L_08972994:
    c->r[4] = 0x08aa0000u;
    c->r[4] = c->r[4] + 0x00006d44u;
    c->r[5] = 0u + 0u;
    { c->r[31] = 0x089729a8u; c->r[6] = 0u + 0x00000010u; func_08a19ec4(c, ram); }
    mem_w32(ram, c->r[30] + 0x0000000cu, 0u);
L_089729ac:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = ((s32)c->r[2] < (s32)c->r[3]) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_089729c8; }
    { goto L_08972a90; }
L_089729c8:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    { int _c = (c->r[2] != 0u); if (_c) goto L_08972a1c; }
    { c->r[31] = 0x089729dcu; c->r[4] = 0u + 0x0000032bu; func_089241c8(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = c->r[2] << 5;
    c->r[2] = 0x08aa0000u;
    c->r[2] = c->r[2] + 0x00006cc4u;
    c->r[3] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000014u;
    c->r[4] = c->r[3] + 0u;
    c->r[5] = 0x08a50000u;
    c->r[5] = c->r[5] + 0xffff88e8u;
    c->r[6] = c->r[2] + 0u;
    { c->r[31] = 0x08972a14u; c->r[7] = mem_r32(ram, c->r[30] + 0x00000010u); func_08a1ad34(c, ram); }
    { goto L_08972a54; }
L_08972a1c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = c->r[2] << 5;
    c->r[2] = 0x08aa0000u;
    c->r[2] = c->r[2] + 0x00006cc4u;
    c->r[4] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = c->r[2] << 5;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = c->r[2] + 0x00000014u;
    c->r[5] = 0x08a50000u;
    c->r[5] = c->r[5] + 0xffff88f0u;
    { c->r[31] = 0x08972a54u; c->r[6] = c->r[2] + 0u; func_08a1ad34(c, ram); }
L_08972a54:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08aa0000u;
    c->r[2] = c->r[2] + 0x00006d44u;
    c->r[4] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = c->r[2] << 5;
    c->r[2] = 0x08aa0000u;
    c->r[2] = c->r[2] + 0x00006cc4u;
    c->r[2] = c->r[2] + c->r[3];
    mem_w32(ram, c->r[4] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]); goto L_089729ac; }
L_08972a90:
    mem_w32(ram, c->r[30] + 0x00000010u, 0u);
L_08972a94:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = ((s32)c->r[2] < (s32)c->r[3]) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_08972ab0; }
    { goto L_08972c7c; }
L_08972ab0:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 3;
    c->r[2] = 0x08a60000u;
    c->r[2] = c->r[2] + 0xffffa1b8u;
    c->r[4] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08aa0000u;
    c->r[2] = c->r[2] + 0x00006d44u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    mem_w32(ram, c->r[4] + 0x00000000u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 3;
    c->r[2] = 0x08a60000u;
    c->r[2] = c->r[2] + 0xffffa1ccu;
    c->r[4] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[3] = c->r[2] << 5;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r8(ram, c->r[2] + 0x0000001du);
    c->r[2] = c->r[2] + 0x00000478u;
    mem_w32(ram, c->r[4] + 0x00000000u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_08972bd4; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 3;
    c->r[2] = 0x08a60000u;
    c->r[2] = c->r[2] + 0xffffa1bcu;
    c->r[4] = c->r[3] + c->r[2];
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 3;
    c->r[2] = 0x08a60000u;
    c->r[2] = c->r[2] + 0xffffa1bcu;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[2] = c->r[2] | 0x0200u;
    mem_w32(ram, c->r[4] + 0x00000000u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 3;
    c->r[2] = 0x08a60000u;
    c->r[2] = c->r[2] + 0xffffa1d0u;
    c->r[4] = c->r[3] + c->r[2];
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 3;
    c->r[2] = 0x08a60000u;
    c->r[2] = c->r[2] + 0xffffa1d0u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[2] = c->r[2] | 0x0200u;
    { mem_w32(ram, c->r[4] + 0x00000000u, c->r[2]); goto L_08972c6c; }
L_08972bd4:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 3;
    c->r[2] = 0x08a60000u;
    c->r[2] = c->r[2] + 0xffffa1d0u;
    c->r[4] = c->r[3] + c->r[2];
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 3;
    c->r[2] = 0x08a60000u;
    c->r[2] = c->r[2] + 0xffffa1d0u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[2] = c->r[2] | 0x0100u;
    mem_w32(ram, c->r[4] + 0x00000000u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 3;
    c->r[2] = 0x08a60000u;
    c->r[2] = c->r[2] + 0xffffa1bcu;
    c->r[4] = c->r[3] + c->r[2];
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 3;
    c->r[2] = 0x08a60000u;
    c->r[2] = c->r[2] + 0xffffa1bcu;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[2] = c->r[2] | 0x0100u;
    mem_w32(ram, c->r[4] + 0x00000000u, c->r[2]);
L_08972c6c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]); goto L_08972a94; }
L_08972c7c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]);
L_08972c84:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000004u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_08972c9c; }
    { goto L_08972cf8; }
L_08972c9c:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 3;
    c->r[2] = 0x08a60000u;
    c->r[2] = c->r[2] + 0xffffa1b8u;
    c->r[2] = c->r[3] + c->r[2];
    mem_w32(ram, c->r[2] + 0x00000000u, 0u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 3;
    c->r[2] = 0x08a60000u;
    c->r[2] = c->r[2] + 0xffffa1ccu;
    c->r[3] = c->r[3] + c->r[2];
    c->r[2] = 0u + 0x00000007u;
    mem_w32(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]); goto L_08972c84; }
L_08972cf8:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000024u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000020u);
    { c->r[29] = c->r[29] + 0x00000030u; return; }
    return; /* fell out of func_08972848 */
}

/* func_089756ac  0x089756ac..0x089756e0  52 bytes, source=sweep */
void func_089756ac(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089756acu);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    mem_w8(ram, c->r[2] + 0x00000001u, 0u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = 0u + 0xffffffffu;
    mem_w8(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_089756ac */
}

/* func_08978ba4  0x08978ba4..0x08978bd4  48 bytes, source=sweep */
void func_08978ba4(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08978ba4u);
    c->r[29] = c->r[29] + 0xfffffff0u;
    mem_w32(ram, c->r[29] + 0x00000004u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000000u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    c->r[4] = 0u + 0x00000001u;
    { c->r[31] = 0x08978bc0u; c->r[5] = 0u | 0xffffu; func_08978a0c(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000004u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000000u);
    { c->r[29] = c->r[29] + 0x00000010u; return; }
    return; /* fell out of func_08978ba4 */
}

/* func_0897e1a0  0x0897e1a0..0x0897e398  504 bytes, source=fde */
void func_0897e1a0(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0897e1a0u);
    c->r[29] = c->r[29] + 0xffffffc0u;
    mem_w32(ram, c->r[29] + 0x00000034u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000030u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, 0u);
L_0897e1b4:
    { c->r[31] = 0x0897e1bcu; func_0896a3c0(c, ram); }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[2] = ((s32)c->r[3] < (s32)c->r[2]) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_0897e1d8; }
    { goto L_0897e270; }
L_0897e1d8:
    c->r[3] = c->r[30] + 0x00000010u;
    c->r[2] = 0x08a50000u;
    c->r[2] = c->r[2] + 0xffff8e10u;
    c->r[4] = mem_lwl(ram, c->r[2] + 0x00000003u, c->r[4]);
    c->r[4] = mem_lwr(ram, c->r[2] + 0x00000000u, c->r[4]);
    c->r[5] = mem_lwl(ram, c->r[2] + 0x00000007u, c->r[5]);
    c->r[5] = mem_lwr(ram, c->r[2] + 0x00000004u, c->r[5]);
    mem_swl(ram, c->r[3] + 0x00000003u, c->r[4]);
    mem_swr(ram, c->r[3] + 0x00000000u, c->r[4]);
    mem_swl(ram, c->r[3] + 0x00000007u, c->r[5]);
    mem_swr(ram, c->r[3] + 0x00000004u, c->r[5]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = c->r[2] << 1;
    c->r[2] = 0x08ab0000u;
    c->r[2] = c->r[2] + 0xffff9134u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000000u);
    mem_w8(ram, c->r[30] + 0x00000020u, c->r[2]);
    c->r[2] = mem_r8(ram, c->r[30] + 0x00000020u);
    c->r[2] = c->r[2] & 0x00c0u;
    c->r[2] = (u32)((s32)c->r[2] >> 6);
    mem_w32(ram, c->r[30] + 0x00000024u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000024u);
    c->r[3] = c->r[2] << 1;
    c->r[2] = 0x08a60000u;
    c->r[2] = c->r[2] + 0xffffa468u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r16(ram, c->r[2] + 0x00000000u);
    mem_w16(ram, c->r[30] + 0x00000010u, c->r[2]);
    c->r[2] = c->r[30] + 0x00000010u;
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x0897e260u; c->r[6] = 0u + 0u; func_089746b0(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000000u, c->r[2]); goto L_0897e1b4; }
L_0897e270:
    { c->r[31] = 0x0897e278u; func_0896a3c0(c, ram); }
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    mem_w32(ram, c->r[30] + 0x00000024u, c->r[2]);
L_0897e280:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000024u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000008u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_0897e298; }
    { goto L_0897e384; }
L_0897e298:
    c->r[3] = c->r[30] + 0x00000010u;
    c->r[2] = 0x08a50000u;
    c->r[2] = c->r[2] + 0xffff8e10u;
    c->r[4] = mem_lwl(ram, c->r[2] + 0x00000003u, c->r[4]);
    c->r[4] = mem_lwr(ram, c->r[2] + 0x00000000u, c->r[4]);
    c->r[5] = mem_lwl(ram, c->r[2] + 0x00000007u, c->r[5]);
    c->r[5] = mem_lwr(ram, c->r[2] + 0x00000004u, c->r[5]);
    mem_swl(ram, c->r[3] + 0x00000003u, c->r[4]);
    mem_swr(ram, c->r[3] + 0x00000000u, c->r[4]);
    mem_swl(ram, c->r[3] + 0x00000007u, c->r[5]);
    mem_swr(ram, c->r[3] + 0x00000004u, c->r[5]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000024u);
    c->r[3] = c->r[2] << 1;
    c->r[2] = 0x08ab0000u;
    c->r[2] = c->r[2] + 0xffff9134u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000000u);
    mem_w8(ram, c->r[30] + 0x00000020u, c->r[2]);
    c->r[2] = mem_r8(ram, c->r[30] + 0x00000020u);
    c->r[2] = c->r[2] & 0x00c0u;
    c->r[2] = (u32)((s32)c->r[2] >> 6);
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r8(ram, c->r[30] + 0x00000020u);
    c->r[2] = c->r[2] & 0x0003u;
    mem_w32(ram, c->r[30] + 0x00000028u, c->r[2]);
    c->r[2] = mem_r8(ram, c->r[30] + 0x00000020u);
    c->r[2] = c->r[2] & 0x0010u;
    c->r[2] = (u32)((s32)c->r[2] >> 4);
    mem_w32(ram, c->r[30] + 0x0000002cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = c->r[2] << 1;
    c->r[2] = 0x08a60000u;
    c->r[2] = c->r[2] + 0xffffa468u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r16(ram, c->r[2] + 0x00000000u);
    mem_w16(ram, c->r[30] + 0x00000010u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000028u);
    c->r[3] = c->r[2] << 1;
    c->r[2] = 0x08a60000u;
    c->r[2] = c->r[2] + 0xffffa470u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r16(ram, c->r[2] + 0x00000000u);
    mem_w16(ram, c->r[30] + 0x00000012u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000002cu);
    c->r[3] = c->r[2] << 1;
    c->r[2] = 0x08a60000u;
    c->r[2] = c->r[2] + 0xffffa478u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r16(ram, c->r[2] + 0x00000000u);
    mem_w16(ram, c->r[30] + 0x00000014u, c->r[2]);
    c->r[2] = c->r[30] + 0x00000010u;
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000024u);
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x0897e374u; c->r[6] = 0u + 0u; func_089746b0(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000024u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000024u, c->r[2]); goto L_0897e280; }
L_0897e384:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000034u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000030u);
    { c->r[29] = c->r[29] + 0x00000040u; return; }
    return; /* fell out of func_0897e1a0 */
}

/* func_089863bc  0x089863bc..0x08986620  612 bytes, source=fde */
void func_089863bc(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089863bcu);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000018u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[30]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[16]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, 0u);
L_089863d4:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000008u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_089863ec; }
    { goto L_08986418; }
L_089863ec:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = c->r[2] << 1;
    c->r[2] = 0x08ab0000u;
    c->r[2] = c->r[2] + 0xffff9240u;
    c->r[2] = c->r[3] + c->r[2];
    { c->r[31] = 0x08986408u; c->r[4] = c->r[2] + 0u; func_089756ac(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000000u, c->r[2]); goto L_089863d4; }
L_08986418:
    mem_w32(ram, c->r[30] + 0x00000000u, 0u);
L_0898641c:
    { c->r[31] = 0x08986424u; func_0896a3c0(c, ram); }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[2] = ((s32)c->r[3] < (s32)c->r[2]) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_08986440; }
    { goto L_08986470; }
L_08986440:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08ab0000u;
    c->r[2] = c->r[2] + 0xffff9270u;
    c->r[16] = c->r[3] + c->r[2];
    { c->r[31] = 0x0898645cu; c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u); func_0896a4d4(c, ram); }
    mem_w32(ram, c->r[16] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000000u, c->r[2]); goto L_0898641c; }
L_08986470:
    { c->r[31] = 0x08986478u; mem_w32(ram, c->r[30] + 0x00000000u, 0u); func_0896a3c0(c, ram); }
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[2]);
L_08986480:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000008u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_08986498; }
    { goto L_08986608; }
L_08986498:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08ab0000u;
    c->r[2] = c->r[2] + 0xffff9270u;
    c->r[16] = c->r[3] + c->r[2];
    { c->r[31] = 0x089864b4u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u); func_0896a2e0(c, ram); }
    mem_w32(ram, c->r[16] + 0x00000000u, c->r[2]);
    { c->r[31] = 0x089864c0u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000004u); func_0896dbc0(c, ram); }
    mem_w8(ram, c->r[30] + 0x00000008u, c->r[2]);
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[30] + 0x00000008u);
    c->r[2] = 0u + 0xffffffffu;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_08986534; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08ab0000u;
    c->r[2] = c->r[2] + 0xffff9270u;
    c->r[2] = c->r[3] + c->r[2];
    mem_w32(ram, c->r[2] + 0x00000000u, 0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = c->r[2] << 1;
    c->r[2] = 0x08ab0000u;
    c->r[2] = c->r[2] + 0xffff9240u;
    c->r[3] = c->r[3] + c->r[2];
    c->r[2] = 0u + 0x00000007u;
    mem_w8(ram, c->r[3] + 0x00000001u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08ab0000u;
    c->r[2] = c->r[2] + 0xffff9250u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0u + 0xffffffffu;
    { c->r[31] = 0x0898652cu; c->r[6] = 0u + 0x00000003u; func_08a19ec4(c, ram); }
    { goto L_089865ec; }
L_08986534:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08ab0000u;
    c->r[2] = c->r[2] + 0xffff9250u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000000u);
    c->r[2] = 0u + 0x00000005u;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_08986594; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08ab0000u;
    c->r[2] = c->r[2] + 0xffff9250u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000000u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_08986594; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08ab0000u;
    c->r[2] = c->r[2] + 0xffff9250u;
    c->r[3] = c->r[3] + c->r[2];
    c->r[2] = 0u + 0x00000005u;
    mem_w8(ram, c->r[3] + 0x00000000u, c->r[2]);
L_08986594:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08ab0000u;
    c->r[2] = c->r[2] + 0xffff9250u;
    c->r[2] = c->r[3] + c->r[2];
    mem_w8(ram, c->r[2] + 0x00000001u, 0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08ab0000u;
    c->r[2] = c->r[2] + 0xffff9250u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000002u);
    c->r[2] = 0u + 0xffffffffu;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_089865ec; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08ab0000u;
    c->r[2] = c->r[2] + 0xffff9250u;
    c->r[3] = c->r[3] + c->r[2];
    c->r[2] = 0u + 0x00000001u;
    mem_w8(ram, c->r[3] + 0x00000002u, c->r[2]);
L_089865ec:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[2] + 0x00000001u;
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000000u, c->r[2]); goto L_08986480; }
L_08986608:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000018u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[16] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_089863bc */
}

/* func_089932c0  0x089932c0..0x089932f8  56 bytes, source=fde */
void func_089932c0(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089932c0u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    { c->r[31] = 0x089932dcu; c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u); func_0898f328(c, ram); }
    { c->r[31] = 0x089932e4u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u); func_089906a0(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_089932c0 */
}

/* func_08998c08  0x08998c08..0x08998c3c  52 bytes, source=sweep */
void func_08998c08(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08998c08u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08ab0000u;
    c->r[2] = c->r[2] + 0x00002a94u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_08998c08 */
}

/* func_089992dc  0x089992dc..0x08999310  52 bytes, source=sweep */
void func_089992dc(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089992dcu);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = 0x08ab0000u;
    c->r[2] = c->r[2] + 0x00002af8u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000000u);
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_089992dc */
}

/* func_0899ed48  0x0899ed48..0x0899ee84  316 bytes, source=sweep */
void func_0899ed48(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0899ed48u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    c->r[2] = c->r[6] + 0u;
    c->r[3] = c->r[7] + 0u;
    mem_w8(ram, c->r[30] + 0x00000008u, c->r[2]);
    mem_w8(ram, c->r[30] + 0x00000009u, c->r[3]);
    c->r[2] = mem_r8(ram, c->r[30] + 0x00000008u);
    { c->r[31] = 0x0899ed7cu; c->r[4] = c->r[2] + 0u; func_08998888(c, ram); }
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_0899ee70; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x000000b2u);
    { int _c = ((s32)c->r[2] < 0); if (_c) goto L_0899ee70; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x000000b2u);
    c->r[2] = ((s32)c->r[2] < (s32)0x000000ffu) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_0899ee70; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000000u);
    c->r[2] = c->r[2] | 0x0001u;
    mem_w8(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000000u);
    c->r[2] = c->r[2] | 0x0008u;
    mem_w8(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[30] + 0x00000009u);
    c->r[2] = ((s32)c->r[2] < (s32)0x0000000au) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_0899edfc; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000000u);
    c->r[2] = c->r[2] | 0x0040u;
    mem_w8(ram, c->r[3] + 0x00000000u, c->r[2]);
L_0899edfc:
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000002u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[3] = c->r[2] + 0x00000003u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r8(ram, c->r[2] + 0x000000b2u);
    mem_w8(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000002u);
    c->r[2] = c->r[2] + 0x00000001u;
    mem_w8(ram, c->r[3] + 0x00000002u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000002u);
    c->r[2] = (c->r[2] < 0x00000002u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_0899ee58; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000000u);
    c->r[2] = c->r[2] | 0x0004u;
    mem_w8(ram, c->r[3] + 0x00000000u, c->r[2]);
L_0899ee58:
    c->r[4] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = mem_r8(ram, c->r[2] + 0x00000000u);
    c->r[2] = 0u + 0xfffffffeu;
    c->r[2] = c->r[3] & c->r[2];
    mem_w8(ram, c->r[4] + 0x00000000u, c->r[2]);
L_0899ee70:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_0899ed48 */
}

/* func_089a1d8c  0x089a1d8c..0x089a1dc4  56 bytes, source=sweep */
void func_089a1d8c(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089a1d8cu);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r8(ram, c->r[2] + 0x000009c5u);
    c->r[2] = 0u + 0xfffffffbu;
    c->r[2] = c->r[3] & c->r[2];
    mem_w8(ram, c->r[4] + 0x000009c5u, c->r[2]);
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_089a1d8c */
}

/* func_089a6ef8  0x089a6ef8..0x089a6f74  124 bytes, source=fde */
void func_089a6ef8(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089a6ef8u);
    c->r[29] = c->r[29] + 0xfffffff0u;
    mem_w32(ram, c->r[29] + 0x00000004u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000000u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    c->r[1] = 0x08ab0000u;
    { c->r[31] = 0x089a6f14u; mem_w8(ram, c->r[1] + 0x00002e86u, 0u); func_089794c4(c, ram); }
    c->r[3] = mem_r8(ram, c->r[2] + 0x00000010u);
    c->r[2] = 0u + 0x00000007u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_089a6f30; }
    c->r[2] = 0u + 0x00000001u;
    c->r[1] = 0x08ab0000u;
    mem_w8(ram, c->r[1] + 0x00002e86u, c->r[2]);
L_089a6f30:
    { c->r[31] = 0x089a6f38u; func_089a64a0(c, ram); }
    c->r[2] = 0x08ab0000u;
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00002e86u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_089a6f58; }
    { c->r[31] = 0x089a6f50u; func_089a6940(c, ram); }
    { goto L_089a6f60; }
L_089a6f58:
    { c->r[31] = 0x089a6f60u; func_089a6c1c(c, ram); }
L_089a6f60:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000004u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000000u);
    { c->r[29] = c->r[29] + 0x00000010u; return; }
    return; /* fell out of func_089a6ef8 */
}

/* func_089ac7fc  0x089ac7fc..0x089ac834  56 bytes, source=residue */
void func_089ac7fc(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089ac7fcu);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08ab0000u;
    c->r[2] = c->r[2] + 0x0000309cu;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_089ac7fc */
}

/* func_089b29d4  0x089b29d4..0x089b2a40  108 bytes, source=sweep */
void func_089b29d4(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089b29d4u);
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
    { c->r[31] = 0x089b2a10u; c->r[5] = c->r[2] + 0u; func_089b27cc(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = c->r[2] >> 24;
    c->r[2] = 0x58000000u;
    c->r[2] = c->r[3] | c->r[2];
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x089b2a2cu; c->r[5] = c->r[2] + 0u; func_089b27cc(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_089b29d4 */
}

/* func_089b3908  0x089b3908..0x089b3934  44 bytes, source=fde */
void func_089b3908(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089b3908u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    { c->r[31] = 0x089b3920u; mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]); hle_dispatch_stub(c, ram, 0x08a249dcu); /* sceDisplayGetCurrentHcount */ }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_089b3908 */
}

/* func_089b6c14  0x089b6c14..0x089b6cbc  168 bytes, source=fde */
void func_089b6c14(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089b6c14u);
    c->r[29] = c->r[29] + 0xffffffd0u;
    mem_w32(ram, c->r[29] + 0x00000024u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000020u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = 0u | 0xffffu;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_089b6ca8; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = 0u + 0x00000001u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_089b6ca8; }
    c->r[2] = 0x08ab0000u;
    c->r[2] = c->r[2] + 0x00003120u;
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
    c->r[2] = 0u + 0x000007ffu;
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = 0u + 0xffffffffu;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_089b6ca8; }
L_089b6c78:
    { c->r[31] = 0x089b6c80u; c->r[4] = mem_r32(ram, c->r[30] + 0x0000000cu); func_089b6eb8(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x000000b0u;
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = c->r[2] + 0xffffffffu;
    c->r[3] = c->r[2] + 0u;
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[3]);
    c->r[2] = 0u + 0xffffffffu;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_089b6c78; }
L_089b6ca8:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000024u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000020u);
    { c->r[29] = c->r[29] + 0x00000030u; return; }
    return; /* fell out of func_089b6c14 */
}

/* func_089b8314  0x089b8314..0x089b8388  116 bytes, source=fde */
void func_089b8314(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089b8314u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    mem_wf32(ram, c->r[30] + 0x00000008u, c->f[12]);
    mem_wf32(ram, c->r[30] + 0x0000000cu, c->f[13]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r16(ram, c->r[2] + 0x000000acu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_089b8374; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r16(ram, c->r[30] + 0x00000004u);
    mem_w16(ram, c->r[2] + 0x000000acu, c->r[3]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x089b8360u; c->r[5] = mem_r32(ram, c->r[30] + 0x00000004u); func_089c356c(c, ram); }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = c->r[2] + 0u;
    c->f[12] = mem_rf32(ram, c->r[30] + 0x00000008u);
    { c->r[31] = 0x089b8374u; c->f[13] = mem_rf32(ram, c->r[30] + 0x0000000cu); func_089b8388(c, ram); }
L_089b8374:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_089b8314 */
}

/* func_089b9b00  0x089b9b00..0x089b9b8c  140 bytes, source=fde */
void func_089b9b00(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089b9b00u);
    c->r[29] = c->r[29] + 0xffffffd0u;
    mem_w32(ram, c->r[29] + 0x00000024u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000020u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[6]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r16(ram, c->r[2] + 0x000000a8u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_089b9b38; }
    c->r[2] = 0u + 0xfffffffeu;
    { mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]); goto L_089b9b74; }
L_089b9b38:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r16(ram, c->r[2] + 0x000000a8u);
    c->r[2] = 0u + 0x0000006cu;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[3] = c->lo;
    c->r[2] = 0x08a70000u;
    c->r[2] = c->r[2] + 0xffffb688u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[4] = c->r[2] + 0u;
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000004u);
    { c->r[31] = 0x089b9b68u; c->r[6] = mem_r32(ram, c->r[30] + 0x00000008u); func_089f50e4(c, ram); }
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]);
L_089b9b74:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000024u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000020u);
    { c->r[29] = c->r[29] + 0x00000030u; return; }
    return; /* fell out of func_089b9b00 */
}

/* func_089c3b4c  0x089c3b4c..0x089c3bb4  104 bytes, source=indirect */
void func_089c3b4c(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089c3b4cu);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[6]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] & 0x00f0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_089c3b7c; }
    { mem_w32(ram, c->r[30] + 0x0000000cu, 0u); goto L_089c3ba0; }
L_089c3b7c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[2] & c->r[3];
    { int _c = (c->r[2] == 0u); if (_c) goto L_089c3b9c; }
    c->r[2] = 0u + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]); goto L_089c3ba0; }
L_089c3b9c:
    mem_w32(ram, c->r[30] + 0x0000000cu, 0u);
L_089c3ba0:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_089c3b4c */
}

/* func_089c6f04  0x089c6f04..0x089c6f64  96 bytes, source=fde */
void func_089c6f04(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089c6f04u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[4] = 0x08a60000u;
    c->r[4] = c->r[4] + 0x00005260u;
    { c->r[31] = 0x089c6f28u; c->r[5] = mem_r32(ram, c->r[30] + 0x00000000u); func_089d7650(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_089c6f40; }
    { mem_w32(ram, c->r[30] + 0x00000008u, 0u); goto L_089c6f4c; }
L_089c6f40:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000010u);
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]);
L_089c6f4c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_089c6f04 */
}

/* func_089c97b8  0x089c97b8..0x089c97f8  64 bytes, source=fde */
void func_089c97b8(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089c97b8u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[6]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000008u);
    { c->r[31] = 0x089c97e4u; c->r[6] = 0u + 0x00000060u; func_08a19db8(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_089c97b8 */
}

/* func_089cb820  0x089cb820..0x089cb8ac  140 bytes, source=sweep */
void func_089cb820(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089cb820u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = 0u + 0xfffff000u;
    c->r[2] = c->r[2] & c->r[3];
    { int _c = (c->r[2] == 0u); if (_c) goto L_089cb894; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = c->r[2] & 0x0fffu;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    alx_mult(c, c->r[3], c->r[2]);
    c->r[3] = c->lo;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000008u);
    c->r[2] = c->r[3] + c->r[2];
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = c->r[2] >> 12;
    c->r[2] = mem_r32(ram, c->r[4] + 0x00000014u);
    { int _c = (c->r[2] != c->r[3]); if (_c) goto L_089cb894; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    { mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]); goto L_089cb898; }
L_089cb894:
    mem_w32(ram, c->r[30] + 0x0000000cu, 0u);
L_089cb898:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_089cb820 */
}

/* func_089d0730  0x089d0730..0x089d090c  476 bytes, source=sweep */
void func_089d0730(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089d0730u);
    c->r[29] = c->r[29] + 0xffffffc0u;
    mem_w32(ram, c->r[29] + 0x00000030u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[6]);
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[7]);
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[8]);
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[9]);
    c->r[2] = c->r[10] + 0u;
    c->r[3] = c->r[11] + 0u;
    mem_w8(ram, c->r[30] + 0x00000018u, c->r[2]);
    mem_w8(ram, c->r[30] + 0x00000019u, c->r[3]);
    c->r[2] = mem_r8(ram, c->r[30] + 0x00000018u);
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08b80000u;
    c->r[2] = c->r[2] + 0xfffffc74u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    mem_w32(ram, c->r[30] + 0x00000020u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = 0u + 0xffffffffu;
    mem_w16(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    mem_w16(ram, c->r[2] + 0x00000000u, 0u);
    mem_w32(ram, c->r[30] + 0x00000024u, 0u);
L_089d0798:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000000u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_089d07b0; }
    { goto L_089d0860; }
L_089d07b0:
    c->r[4] = c->r[30] + 0x00000004u;
    c->r[2] = mem_r32(ram, c->r[4] + 0x00000000u);
    c->r[3] = c->r[2] + 0u;
    c->r[3] = mem_r8(ram, c->r[3] + 0x00000000u);
    c->r[3] = c->r[3] + 0xffffffe0u;
    c->r[2] = c->r[2] + 0x00000001u;
    mem_w32(ram, c->r[4] + 0x00000000u, c->r[2]);
    mem_w8(ram, c->r[30] + 0x00000028u, c->r[3]);
    c->r[3] = mem_r8(ram, c->r[30] + 0x00000028u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 2;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[2] = c->r[2] + c->r[3];
    mem_w32(ram, c->r[30] + 0x0000001cu, c->r[2]);
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[4] = mem_r16(ram, c->r[2] + 0x00000000u);
    c->r[2] = mem_r16(ram, c->r[3] + 0x00000006u);
    c->r[2] = c->r[4] + c->r[2];
    c->r[2] = c->r[2] + 0x00000001u;
    mem_w16(ram, c->r[5] + 0x00000000u, c->r[2]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[3] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = mem_r16(ram, c->r[2] + 0x00000008u);
    c->r[2] = alx_max(c->r[2], c->r[3]);
    mem_w16(ram, c->r[4] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000040u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_089d0850; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000024u);
    c->r[3] = c->r[2] << 2;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000040u);
    c->r[3] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    mem_w32(ram, c->r[3] + 0x00000000u, c->r[2]);
L_089d0850:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000024u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000024u, c->r[2]); goto L_089d0798; }
L_089d0860:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_089d08f8; }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x00000000u);
    c->f[0] = u2f(c->r[2]);
    c->f[1] = (f32)(s32)f2u(c->f[0]);
    c->r[1] = 0x08a50000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffffb6b4u);
    c->f[1] = c->f[1] * c->f[0];
    c->r[2] = mem_r8(ram, c->r[30] + 0x00000019u);
    c->f[0] = u2f(c->r[2]);
    c->f[0] = (f32)(s32)f2u(c->f[0]);
    c->f[0] = c->f[1] * c->f[0];
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    c->r[3] = mem_r16(ram, c->r[3] + 0x00000000u);
    c->r[2] = f2u(c->f[0]);
    c->r[2] = c->r[3] - c->r[2];
    mem_w16(ram, c->r[4] + 0x00000000u, c->r[2]);
    c->r[3] = mem_r8(ram, c->r[30] + 0x00000019u);
    c->r[2] = 0u + 0x00000002u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_089d08f8; }
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[3] = mem_r8(ram, c->r[30] + 0x00000028u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 2;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[3] = mem_r16(ram, c->r[4] + 0x00000000u);
    c->r[2] = mem_r16(ram, c->r[2] + 0x00000006u);
    c->r[2] = c->r[3] + c->r[2];
    mem_w16(ram, c->r[5] + 0x00000000u, c->r[2]);
L_089d08f8:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000024u);
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000030u);
    { c->r[29] = c->r[29] + 0x00000040u; return; }
    return; /* fell out of func_089d0730 */
}

/* func_089d2d00  0x089d2d00..0x089d2d44  68 bytes, source=sweep */
void func_089d2d00(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089d2d00u);
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
    { c->r[31] = 0x089d2d30u; c->r[5] = c->r[2] + 0u; func_089d20f0(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_089d2d00 */
}

/* func_089d3c20  0x089d3c20..0x089d3c60  64 bytes, source=fde */
void func_089d3c20(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089d3c20u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000020u;
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0u + 0u;
    { c->r[31] = 0x089d3c4cu; c->r[6] = 0u + 0x00000600u; func_08a19ec4(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_089d3c20 */
}

/* func_089d572c  0x089d572c..0x089d577c  80 bytes, source=fde */
void func_089d572c(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089d572cu);
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
    { c->r[31] = 0x089d5768u; c->r[8] = mem_r32(ram, c->r[30] + 0x00000010u); func_08975728(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000024u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000020u);
    { c->r[29] = c->r[29] + 0x00000030u; return; }
    return; /* fell out of func_089d572c */
}

/* func_089d6e20  0x089d6e20..0x089d6ebc  156 bytes, source=sweep */
void func_089d6e20(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089d6e20u);
    c->r[29] = c->r[29] + 0xffffffd0u;
    mem_w32(ram, c->r[29] + 0x00000020u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000010u;
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
    mem_w32(ram, c->r[30] + 0x00000008u, 0u);
L_089d6e44:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000000cu);
    c->r[3] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = ((s32)c->r[2] < (s32)c->r[3]) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_089d6e68; }
    { goto L_089d6ea4; }
L_089d6e68:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = mem_r32(ram, c->r[2] + 0x00000010u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_089d6e88; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    { mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]); goto L_089d6ea8; }
L_089d6e88:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[2] + 0x00000001u;
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x00000018u;
    { mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]); goto L_089d6e44; }
L_089d6ea4:
    mem_w32(ram, c->r[30] + 0x00000010u, 0u);
L_089d6ea8:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000020u);
    { c->r[29] = c->r[29] + 0x00000030u; return; }
    return; /* fell out of func_089d6e20 */
}

/* func_089d8864  0x089d8864..0x089d889c  56 bytes, source=residue */
void func_089d8864(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089d8864u);
    c->r[29] = c->r[29] + 0xffffffd0u;
    mem_w32(ram, c->r[29] + 0x00000020u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[6]);
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[7]);
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[8]);
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[9]);
    mem_w32(ram, c->r[30] + 0x00000018u, c->r[10]);
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000020u);
    { c->r[29] = c->r[29] + 0x00000030u; return; }
    return; /* fell out of func_089d8864 */
}

/* func_089d99c4  0x089d99c4..0x089d99ec  40 bytes, source=sweep */
void func_089d99c4(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089d99c4u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x000006f4u);
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_089d99c4 */
}

/* func_089dae40  0x089dae40..0x089daed0  144 bytes, source=fde */
void func_089dae40(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089dae40u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[1] = 0x08b90000u;
    mem_w32(ram, c->r[1] + 0x000006a4u, 0u);
    c->r[1] = 0x08b90000u;
    mem_w32(ram, c->r[1] + 0x000006a8u, 0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    mem_w32(ram, c->r[2] + 0x00000014u, 0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    mem_w32(ram, c->r[2] + 0x00000018u, 0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    mem_w32(ram, c->r[2] + 0x0000001cu, 0u);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x089dae88u; c->r[5] = 0u + 0x00000001u; func_089db1a8(c, ram); }
    c->r[4] = 0u + 0u;
    c->r[5] = 0u + 0x000001e0u;
    { c->r[31] = 0x089dae98u; c->r[6] = 0u + 0x00000110u; hle_dispatch_stub(c, ram, 0x08a249bcu); /* sceDisplaySetMode */ }
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    { int _c = ((s32)c->r[2] >= 0); if (_c) goto L_089daeb4; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    { mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]); goto L_089daeb8; }
L_089daeb4:
    mem_w32(ram, c->r[30] + 0x00000008u, 0u);
L_089daeb8:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_089dae40 */
}

/* func_089dc0cc  0x089dc0cc..0x089dc110  68 bytes, source=sweep */
void func_089dc0cc(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089dc0ccu);
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
    { c->r[31] = 0x089dc0fcu; c->r[5] = c->r[2] + 0u; func_089db8b8(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_089dc0cc */
}

/* func_089ddce0  0x089ddce0..0x089ddd2c  76 bytes, source=fde */
void func_089ddce0(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089ddce0u);
    c->r[29] = c->r[29] + 0xffffffd0u;
    mem_w32(ram, c->r[29] + 0x00000024u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000020u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[6]);
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[7]);
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[8]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[4] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[6] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[7] = mem_r32(ram, c->r[30] + 0x0000000cu);
    { c->r[31] = 0x089ddd18u; c->r[8] = mem_r32(ram, c->r[30] + 0x00000010u); hle_dispatch_stub(c, ram, 0x08a2471cu); /* sceIoLseek */ }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000024u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000020u);
    { c->r[29] = c->r[29] + 0x00000030u; return; }
    return; /* fell out of func_089ddce0 */
}

/* func_089e066c  0x089e066c..0x089e0780  276 bytes, source=sweep */
void func_089e066c(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089e066cu);
    c->r[29] = c->r[29] + 0xfffffed0u;
    mem_w32(ram, c->r[29] + 0x00000124u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000120u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    c->r[2] = 0x08b90000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00005640u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_089e0704; }
    c->r[2] = c->r[30] + 0x00000010u;
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0x08b90000u;
    c->r[5] = c->r[5] + 0x00005640u;
    { c->r[31] = 0x089e06acu; c->r[6] = 0x00010000u; func_089e194c(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000110u, 0u);
L_089e06b0:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000110u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000010u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_089e06c8; }
    { goto L_089e0704; }
L_089e06c8:
    c->r[4] = c->r[30] + 0x00000010u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000110u);
    c->r[3] = c->r[2] << 6;
    c->r[2] = 0x08a60000u;
    c->r[2] = c->r[2] + 0xffffb240u;
    c->r[2] = c->r[3] + c->r[2];
    { c->r[31] = 0x089e06e8u; c->r[5] = c->r[2] + 0u; func_089e1bf0(c, ram); }
    c->r[2] = c->r[30] + 0x00000010u;
    { c->r[31] = 0x089e06f4u; c->r[4] = c->r[2] + 0u; func_089e1a10(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000110u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000110u, c->r[2]); goto L_089e06b0; }
L_089e0704:
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000700u);
    c->r[2] = 0u + 0x000002e8u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[4] = c->lo;
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
    c->r[3] = c->r[2] & 0x000fu;
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08b90000u;
    c->r[2] = c->r[2] + 0x00005640u;
    c->r[2] = c->r[3] + c->r[2];
    { c->r[31] = 0x089e076cu; c->r[5] = c->r[2] + 0u; func_089e199c(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000124u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000120u);
    { c->r[29] = c->r[29] + 0x00000130u; return; }
    return; /* fell out of func_089e066c */
}

/* func_089e1f70  0x089e1f70..0x089e1fc0  80 bytes, source=sweep */
void func_089e1f70(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089e1f70u);
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
    { c->r[31] = 0x089e1facu; c->r[8] = mem_r32(ram, c->r[30] + 0x00000010u); func_089e39c0(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000024u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000020u);
    { c->r[29] = c->r[29] + 0x00000030u; return; }
    return; /* fell out of func_089e1f70 */
}

/* func_089e32a8  0x089e32a8..0x089e32dc  52 bytes, source=sweep */
void func_089e32a8(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089e32a8u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x089e32c8u; c->r[5] = 0x37000000u; func_089e1908(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_089e32a8 */
}

/* func_089e41a4  0x089e41a4..0x089e4274  208 bytes, source=sweep */
void func_089e41a4(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089e41a4u);
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
    return; /* fell out of func_089e41a4 */
}

/* func_089e5158  0x089e5158..0x089e5330  472 bytes, source=fde */
void func_089e5158(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089e5158u);
    c->r[29] = c->r[29] + 0xffffffb0u;
    mem_w32(ram, c->r[29] + 0x00000024u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000020u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000038u, c->r[6]);
    mem_w32(ram, c->r[30] + 0x0000003cu, c->r[7]);
    mem_w32(ram, c->r[30] + 0x00000040u, c->r[8]);
    mem_w32(ram, c->r[30] + 0x00000044u, c->r[9]);
    mem_w32(ram, c->r[30] + 0x00000048u, c->r[10]);
    mem_w32(ram, c->r[30] + 0x0000004cu, c->r[11]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_089e5278; }
    c->r[2] = 0x08b90000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00006104u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000008u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_089e522c; }
    c->r[2] = 0u + 0x00000001u;
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]);
L_089e51b0:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00006104u);
    c->r[2] = ((s32)c->r[2] < (s32)c->r[3]) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_089e51d0; }
    { goto L_089e5218; }
L_089e51d0:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[3] = c->r[2] << 6;
    c->r[2] = 0x08b90000u;
    c->r[2] = c->r[2] + 0x00006108u;
    c->r[2] = c->r[2] + 0xffffffc0u;
    c->r[4] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[3] = c->r[2] << 6;
    c->r[2] = 0x08b90000u;
    c->r[2] = c->r[2] + 0x00006108u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x089e5208u; c->r[6] = 0u + 0x00000040u; func_08a19db8(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]); goto L_089e51b0; }
L_089e5218:
    c->r[2] = 0x08b90000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00006104u);
    c->r[2] = c->r[2] + 0xffffffffu;
    c->r[1] = 0x08b90000u;
    mem_w32(ram, c->r[1] + 0x00006104u, c->r[2]);
L_089e522c:
    c->r[2] = c->r[30] + 0x00000050u;
    c->r[2] = c->r[2] + 0xffffffe8u;
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]);
    c->r[5] = 0x08b90000u;
    c->r[5] = c->r[5] + 0x00006104u;
    c->r[3] = mem_r32(ram, c->r[5] + 0x00000000u);
    c->r[2] = c->r[3] + 0u;
    c->r[4] = c->r[2] << 6;
    c->r[2] = 0x08b90000u;
    c->r[2] = c->r[2] + 0x00006108u;
    c->r[2] = c->r[4] + c->r[2];
    c->r[3] = c->r[3] + 0x00000001u;
    mem_w32(ram, c->r[5] + 0x00000000u, c->r[3]);
    c->r[4] = c->r[2] + 0u;
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000004u);
    { c->r[31] = 0x089e5270u; c->r[6] = mem_r32(ram, c->r[30] + 0x00000008u); func_08a1f410(c, ram); }
    { goto L_089e531c; }
L_089e5278:
    c->r[1] = 0x08a50000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffffc2dcu);
    mem_wf32(ram, c->r[30] + 0x0000000cu, c->f[0]);
    c->r[1] = 0x08a50000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffffc2e0u);
    mem_wf32(ram, c->r[30] + 0x00000010u, c->f[0]);
    mem_w32(ram, c->r[30] + 0x00000008u, 0u);
L_089e5294:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00006104u);
    c->r[2] = ((s32)c->r[2] < (s32)c->r[3]) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_089e52b4; }
    { goto L_089e531c; }
L_089e52b4:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[3] = c->r[2] << 6;
    c->r[2] = 0x08b90000u;
    c->r[2] = c->r[2] + 0x00006108u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[1] = 0x08a50000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffffc2e4u);
    c->r[1] = 0x08a50000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0xffffc2e4u);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->f[12] = mem_rf32(ram, c->r[30] + 0x0000000cu);
    c->f[13] = mem_rf32(ram, c->r[30] + 0x00000010u);
    c->r[5] = c->r[2] + 0u;
    c->f[14] = c->f[0];
    c->f[15] = c->f[1];
    { c->r[31] = 0x089e52f8u; c->r[6] = 0u + 0u; func_089ee8e0(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[2] + 0x00000001u;
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000010u);
    c->r[1] = 0x08a50000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffffc2e8u);
    c->f[0] = c->f[1] + c->f[0];
    { mem_wf32(ram, c->r[30] + 0x00000010u, c->f[0]); goto L_089e5294; }
L_089e531c:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000024u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000020u);
    { c->r[29] = c->r[29] + 0x00000050u; return; }
    return; /* fell out of func_089e5158 */
}

/* func_089ea5d4  0x089ea5d4..0x089ea628  84 bytes, source=sweep */
void func_089ea5d4(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089ea5d4u);
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
    c->r[2] = 0xc7000000u;
    c->r[2] = c->r[3] | c->r[2];
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x089ea614u; c->r[5] = c->r[2] + 0u; func_089ea03c(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_089ea5d4 */
}

/* func_089eb45c  0x089eb45c..0x089eb6ac  592 bytes, source=sweep */
void func_089eb45c(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089eb45cu);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[6]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000004u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_089eb618; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = ((s32)c->r[2] < (s32)0x0000000cu) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_089eb618; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[2] + 0xfffffffcu;
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
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 3;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08b90000u;
    c->r[2] = c->r[2] + 0x00005300u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = c->r[2] >> 24;
    c->r[2] = c->r[2] & 0x000fu;
    c->r[3] = c->r[2] << 16;
    c->r[2] = 0x10000000u;
    c->r[2] = c->r[3] | c->r[2];
    { c->r[31] = 0x089eb51cu; c->r[5] = c->r[2] + 0u; func_089ea03c(c, ram); }
L_089eb51c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000008u) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_089eb534; }
    { goto L_089eb5bc; }
L_089eb534:
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000700u);
    c->r[2] = 0u + 0x000002e8u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[4] = c->lo;
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
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 3;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08b90000u;
    c->r[2] = c->r[2] + 0x00005300u;
    c->r[3] = c->r[3] + c->r[2];
    c->r[2] = 0x00ff0000u;
    c->r[2] = c->r[2] | 0xffffu;
    c->r[3] = c->r[3] & c->r[2];
    c->r[2] = 0x0a000000u;
    c->r[2] = c->r[3] | c->r[2];
    { c->r[31] = 0x089eb5acu; c->r[5] = c->r[2] + 0u; func_089ea03c(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[2] + 0xfffffff8u;
    { mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]); goto L_089eb51c; }
L_089eb5bc:
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000700u);
    c->r[2] = 0u + 0x000002e8u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[4] = c->lo;
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
    { c->r[31] = 0x089eb618u; c->r[5] = c->r[2] + 0u; func_089ea03c(c, ram); }
L_089eb618:
    mem_w32(ram, c->r[30] + 0x0000000cu, 0u);
L_089eb61c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = ((s32)c->r[2] < (s32)c->r[3]) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_089eb638; }
    { goto L_089eb698; }
L_089eb638:
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000700u);
    c->r[2] = 0u + 0x000002e8u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[4] = c->lo;
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
    c->r[2] = 0x04040000u;
    c->r[2] = c->r[3] | c->r[2];
    { c->r[31] = 0x089eb688u; c->r[5] = c->r[2] + 0u; func_089ea03c(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]); goto L_089eb61c; }
L_089eb698:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_089eb45c */
}

/* func_089f0338  0x089f0338..0x089f037c  68 bytes, source=sweep */
void func_089f0338(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089f0338u);
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
    return; /* fell out of func_089f0338 */
}

/* func_089f105c  0x089f105c..0x089f10c0  100 bytes, source=sweep */
void func_089f105c(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089f105cu);
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
    { c->r[31] = 0x089f10acu; c->r[5] = c->r[2] + 0u; func_089f0338(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_089f105c */
}

/* func_089f50e4  0x089f50e4..0x089f5278  404 bytes, source=fde */
void func_089f50e4(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089f50e4u);
    c->r[29] = c->r[29] + 0xffffff00u;
    mem_w32(ram, c->r[29] + 0x000000f4u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x000000f0u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[6]);
    { c->r[31] = 0x089f5108u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u); func_089f5620(c, ram); }
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000001cu);
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]);
    mem_w32(ram, c->r[30] + 0x00000014u, 0u);
L_089f511c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = mem_r8(ram, c->r[2] + 0x00000003u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = ((s32)c->r[2] < (s32)c->r[3]) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_089f513c; }
    { goto L_089f5258; }
L_089f513c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = c->r[2] + 0x00000001u;
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x089f5150u; c->r[5] = mem_r32(ram, c->r[30] + 0x00000004u); func_08a1adb4(c, ram); }
    { int _c = (c->r[2] != 0u); if (_c) goto L_089f523c; }
    c->r[2] = c->r[30] + 0x00000020u;
    { c->r[31] = 0x089f5164u; c->r[4] = c->r[2] + 0u; func_08808260(c, ram); }
    c->r[2] = c->r[30] + 0x00000060u;
    { c->r[31] = 0x089f5170u; c->r[4] = c->r[2] + 0u; func_08808260(c, ram); }
    c->r[2] = c->r[30] + 0x000000a0u;
    { c->r[31] = 0x089f517cu; c->r[4] = c->r[2] + 0u; func_08808260(c, ram); }
    c->r[2] = c->r[30] + 0x00000020u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x089f5190u; c->f[12] = mem_rf32(ram, c->r[3] + 0x00000018u); func_0884c7c0(c, ram); }
    c->r[2] = c->r[30] + 0x00000060u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x089f51a4u; c->f[12] = mem_rf32(ram, c->r[3] + 0x0000001cu); func_0884c858(c, ram); }
    c->r[2] = c->r[30] + 0x000000a0u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x089f51b8u; c->f[12] = mem_rf32(ram, c->r[3] + 0x00000020u); func_0884c8f0(c, ram); }
    { c->r[31] = 0x089f51c0u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000008u); func_08808280(c, ram); }
    c->r[2] = c->r[30] + 0x00000020u;
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000008u);
    { c->r[31] = 0x089f51d4u; c->r[6] = c->r[2] + 0u; func_0884c6d4(c, ram); }
    c->r[2] = c->r[30] + 0x00000060u;
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000008u);
    { c->r[31] = 0x089f51e8u; c->r[6] = c->r[2] + 0u; func_0884c6d4(c, ram); }
    c->r[2] = c->r[30] + 0x000000a0u;
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000008u);
    { c->r[31] = 0x089f51fcu; c->r[6] = c->r[2] + 0u; func_0884c6d4(c, ram); }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x0000000cu);
    mem_wf32(ram, c->r[3] + 0x00000030u, c->f[0]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000010u);
    mem_wf32(ram, c->r[3] + 0x00000034u, c->f[0]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000014u);
    mem_wf32(ram, c->r[3] + 0x00000038u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000000u);
    { mem_w32(ram, c->r[30] + 0x000000e0u, c->r[2]); goto L_089f5260; }
L_089f523c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = c->r[2] + 0x00000001u;
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = c->r[2] + 0x00000030u;
    { mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]); goto L_089f511c; }
L_089f5258:
    c->r[2] = 0u + 0xffffffffu;
    mem_w32(ram, c->r[30] + 0x000000e0u, c->r[2]);
L_089f5260:
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000e0u);
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x000000f4u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x000000f0u);
    { c->r[29] = c->r[29] + 0x00000100u; return; }
    return; /* fell out of func_089f50e4 */
}

/* func_089f69dc  0x089f69dc..0x089f6a38  92 bytes, source=fde */
void func_089f69dc(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089f69dcu);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[6]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000004u);
    { c->r[31] = 0x089f6a08u; c->r[6] = mem_r32(ram, c->r[30] + 0x00000008u); func_089f7524(c, ram); }
    { int _c = (c->r[2] != 0u); if (_c) goto L_089f6a24; }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[6] = mem_r32(ram, c->r[30] + 0x00000008u);
    { c->r[31] = 0x089f6a24u; c->r[7] = 0u + 0xffffffffu; func_089f5dcc(c, ram); }
L_089f6a24:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_089f69dc */
}

/* func_089f8bc4  0x089f8bc4..0x089f8bf8  52 bytes, source=fde */
void func_089f8bc4(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089f8bc4u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x089f8be4u; c->r[5] = 0u + 0u; func_089f8b84(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_089f8bc4 */
}

/* func_089f98dc  0x089f98dc..0x089f9900  36 bytes, source=sweep */
void func_089f98dc(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089f98dcu);
    c->f[0] = u2f(0u);
    { int _c = (c->r[4] == 0u); if (_c) goto L_089f98f8; }
    c->r[2] = mem_r32(ram, c->r[4] + 0x00000000u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000020u) ? 1u : 0u;
    if (c->r[2] != 0u) { c->f[0] = mem_rf32(ram, c->r[4] + 0x00000010u); goto L_089f98f8; }
L_089f98f8:
    { return; }
    return; /* fell out of func_089f98dc */
}

/* func_089fa3f0  0x089fa3f0..0x089fa414  36 bytes, source=sweep */
void func_089fa3f0(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089fa3f0u);
    c->r[29] = c->r[29] + 0xfffffff0u;
    mem_w32(ram, c->r[29] + 0x00000000u, c->r[31]);
    c->r[2] = 0x08b90000u;
    c->r[5] = c->r[4] + 0u;
    { c->r[31] = 0x089fa408u; c->r[4] = mem_r32(ram, c->r[2] + 0x0000658cu); func_089f9fd0(c, ram); }
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000000u);
    { c->r[29] = c->r[29] + 0x00000010u; return; }
    return; /* fell out of func_089fa3f0 */
}

/* func_089facc8  0x089facc8..0x089facf0  40 bytes, source=sweep */
void func_089facc8(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089facc8u);
    c->r[29] = c->r[29] + 0xfffffff0u;
    mem_w32(ram, c->r[29] + 0x00000000u, c->r[31]);
    c->r[2] = 0x08b90000u;
    c->r[5] = c->r[4] + 0u;
    c->r[4] = mem_r32(ram, c->r[2] + 0x00006590u);
    { c->r[31] = 0x089face4u; c->r[5] = c->r[5] & 0xffffu; func_089faa30(c, ram); }
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000000u);
    { c->r[29] = c->r[29] + 0x00000010u; return; }
    return; /* fell out of func_089facc8 */
}

/* func_089fba40  0x089fba40..0x089fba70  48 bytes, source=sweep */
void func_089fba40(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089fba40u);
    { int _c = ((s32)c->r[5] <= 0); c->r[2] = 0u + 0u; if (_c) goto L_089fba68; }
    c->r[6] = 0u + 0xffffffffu;
    c->r[3] = c->r[4] + 0u;
    c->r[2] = c->r[5] + 0u;
L_089fba54:
    c->r[2] = c->r[2] + 0xffffffffu;
    mem_w32(ram, c->r[3] + 0x00000000u, c->r[6]);
    { int _c = (c->r[2] != 0u); c->r[3] = c->r[3] + 0x00000028u; if (_c) goto L_089fba54; }
    c->r[2] = 0u + 0u;
L_089fba68:
    { mem_w32(ram, c->r[4] + 0x00000a00u, c->r[5]); return; }
    return; /* fell out of func_089fba40 */
}

/* func_089fc3d0  0x089fc3d0..0x089fc45c  140 bytes, source=sweep */
void func_089fc3d0(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089fc3d0u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000004u, c->r[17]);
    c->r[4] = c->r[4] & 0xffffu;
    c->r[17] = c->r[8] + 0u;
    c->r[5] = c->r[5] & 0xffffu;
    c->r[6] = alx_seh(c->r[6]);
    c->r[7] = alx_seh(c->r[7]);
    c->r[8] = c->r[9] + 0u;
    mem_w32(ram, c->r[29] + 0x00000008u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000000u, c->r[16]);
    c->r[16] = c->r[9] + 0u;
    mem_wf32(ram, c->r[29] + 0x00000010u, c->f[20]);
    { c->r[31] = 0x089fc408u; c->f[20] = c->f[12]; func_089f9428(c, ram); }
    c->f[1] = u2f(c->r[17]);
    c->r[5] = mem_r32(ram, c->r[16] + 0x00000000u);
    c->r[4] = 0x08ba0000u;
    c->f[0] = (f32)(s32)f2u(c->f[1]);
    c->r[4] = c->r[4] + 0xffff88b8u;
    c->r[5] = c->r[5] << 4;
    c->r[5] = c->r[5] + c->r[4];
    c->f[20] = c->f[20] / c->f[0];
    mem_w32(ram, c->r[5] + 0x00000004u, c->r[17]);
    c->r[3] = mem_r32(ram, c->r[16] + 0x00000000u);
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000008u);
    c->r[17] = mem_r32(ram, c->r[29] + 0x00000004u);
    c->r[3] = c->r[3] << 4;
    c->r[3] = c->r[3] + c->r[4];
    mem_w32(ram, c->r[3] + 0x0000000cu, c->r[16]);
    c->r[16] = mem_r32(ram, c->r[29] + 0x00000000u);
    mem_w32(ram, c->r[3] + 0x00000008u, 0u);
    mem_wf32(ram, c->r[5] + 0x00000000u, c->f[20]);
    c->f[20] = mem_rf32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_089fc3d0 */
}

/* func_089fd9d4  0x089fd9d4..0x089fda84  176 bytes, source=residue */
void func_089fd9d4(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089fd9d4u);
    c->r[2] = 0x08a60000u;
    c->r[2] = c->r[2] + 0x000047c8u;
    c->r[5] = c->r[5] << 8;
    c->r[7] = c->r[5] + c->r[2];
    c->r[2] = c->r[4] | c->r[7];
    c->r[2] = c->r[2] & 0x0003u;
    c->r[6] = c->r[4] + 0u;
    { int _c = (c->r[2] == 0u); c->r[8] = c->r[4] + 0x00000100u; if (_c) goto L_089fda50; }
    c->r[2] = c->r[8] + 0u;
L_089fd9fc:
    c->r[3] = mem_lwl(ram, c->r[6] + 0x00000003u, c->r[3]);
    c->r[3] = mem_lwr(ram, c->r[6] + 0x00000000u, c->r[3]);
    c->r[4] = mem_lwl(ram, c->r[6] + 0x00000007u, c->r[4]);
    c->r[4] = mem_lwr(ram, c->r[6] + 0x00000004u, c->r[4]);
    c->r[5] = mem_lwl(ram, c->r[6] + 0x0000000bu, c->r[5]);
    c->r[5] = mem_lwr(ram, c->r[6] + 0x00000008u, c->r[5]);
    c->r[8] = mem_lwl(ram, c->r[6] + 0x0000000fu, c->r[8]);
    c->r[8] = mem_lwr(ram, c->r[6] + 0x0000000cu, c->r[8]);
    mem_swl(ram, c->r[7] + 0x00000003u, c->r[3]);
    mem_swr(ram, c->r[7] + 0x00000000u, c->r[3]);
    mem_swl(ram, c->r[7] + 0x00000007u, c->r[4]);
    mem_swr(ram, c->r[7] + 0x00000004u, c->r[4]);
    mem_swl(ram, c->r[7] + 0x0000000bu, c->r[5]);
    mem_swr(ram, c->r[7] + 0x00000008u, c->r[5]);
    mem_swl(ram, c->r[7] + 0x0000000fu, c->r[8]);
    mem_swr(ram, c->r[7] + 0x0000000cu, c->r[8]);
    c->r[6] = c->r[6] + 0x00000010u;
    { int _c = (c->r[6] != c->r[2]); c->r[7] = c->r[7] + 0x00000010u; if (_c) goto L_089fd9fc; }
L_089fda48:
    { c->r[2] = 0u + 0u; return; }
L_089fda50:
    c->r[2] = mem_r32(ram, c->r[6] + 0x00000000u);
    c->r[3] = mem_r32(ram, c->r[6] + 0x00000004u);
    c->r[4] = mem_r32(ram, c->r[6] + 0x00000008u);
    c->r[5] = mem_r32(ram, c->r[6] + 0x0000000cu);
    mem_w32(ram, c->r[7] + 0x00000000u, c->r[2]);
    c->r[6] = c->r[6] + 0x00000010u;
    c->r[7] = c->r[7] + 0x00000010u;
    mem_w32(ram, c->r[7] + 0xfffffff4u, c->r[3]);
    mem_w32(ram, c->r[7] + 0xfffffff8u, c->r[4]);
    { int _c = (c->r[6] != c->r[8]); mem_w32(ram, c->r[7] + 0xfffffffcu, c->r[5]); if (_c) goto L_089fda50; }
    { goto L_089fda48; }
    return; /* fell out of func_089fd9d4 */
}

/* func_089fe994  0x089fe994..0x089fe99c  8 bytes, source=residue */
void func_089fe994(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089fe994u);
    { c->r[2] = 0u + 0u; return; }
    return; /* fell out of func_089fe994 */
}

/* func_08a00514  0x08a00514..0x08a0063c  296 bytes, source=sweep */
void func_08a00514(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08a00514u);
    c->r[29] = c->r[29] + 0xffffffc0u;
    mem_w32(ram, c->r[29] + 0x00000030u, c->r[30]);
    c->r[30] = c->r[4] + 0u;
    mem_w32(ram, c->r[29] + 0x0000002cu, c->r[23]);
    c->r[23] = 0u + 0u;
    mem_w32(ram, c->r[29] + 0x00000020u, c->r[20]);
    c->r[20] = c->r[6] + 0u;
    mem_w32(ram, c->r[29] + 0x0000001cu, c->r[19]);
    c->r[19] = c->r[5] + 0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[17]);
    c->r[17] = c->r[8] + 0u;
    mem_w32(ram, c->r[29] + 0x00000034u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000028u, c->r[22]);
    mem_w32(ram, c->r[29] + 0x00000024u, c->r[21]);
    mem_w32(ram, c->r[29] + 0x00000018u, c->r[18]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[16]);
    { int _c = ((s32)c->r[6] <= 0); mem_w32(ram, c->r[29] + 0x00000000u, c->r[7]); if (_c) goto L_08a005dc; }
L_08a0055c:
    alx_div(c, c->r[19], c->r[17]);
    c->r[2] = 0x08ba0000u;
    c->r[21] = c->r[2] + 0x0000008cu;
    if (c->r[17] == 0u) { recomp_break(c, ram, 0x08a0056cu, 0x7u); goto L_08a00570; }
L_08a00570:
    c->r[2] = mem_r32(ram, c->r[29] + 0x00000000u);
    c->r[4] = mem_r32(ram, c->r[21] + 0x000000d4u);
    c->r[16] = alx_min(c->r[17], c->r[20]);
    c->r[5] = mem_r32(ram, c->r[21] + 0x000000dcu);
    c->r[4] = c->r[4] + c->r[2];
    c->r[4] = c->r[4] + c->r[23];
    c->r[3] = c->lo;
    alx_mult(c, c->r[3], c->r[17]);
    c->r[3] = c->lo;
    alx_mult(c, c->r[3], c->r[30]);
    c->r[18] = c->r[19] - c->r[3];
    c->r[2] = c->r[18] + c->r[16];
    c->r[2] = ((s32)c->r[17] < (s32)c->r[2]) ? 1u : 0u;
    c->r[3] = c->r[17] - c->r[18];
    c->r[22] = c->lo;
    if (c->r[2] != 0u) c->r[16] = c->r[3];
    c->r[5] = c->r[5] + c->r[22];
    c->r[6] = c->r[16] + 0u;
    { c->r[31] = 0x08a005c0u; c->r[5] = c->r[5] + c->r[18]; func_08a19db8(c, ram); }
    c->r[2] = 0u + 0x00000002u;
    c->r[20] = c->r[20] - c->r[16];
    c->r[19] = c->r[19] + c->r[16];
    { int _c = (c->r[30] == c->r[2]); c->r[6] = c->r[16] + 0u; if (_c) goto L_08a00610; }
L_08a005d4:
    { int _c = ((s32)c->r[20] > 0); c->r[23] = c->r[23] + c->r[16]; if (_c) goto L_08a0055c; }
L_08a005dc:
    c->r[2] = c->r[23] + 0u;
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
L_08a00610:
    c->r[5] = mem_r32(ram, c->r[21] + 0x000000dcu);
    c->r[4] = mem_r32(ram, c->r[21] + 0x000000d8u);
    c->r[2] = mem_r32(ram, c->r[29] + 0x00000000u);
    c->r[5] = c->r[5] + c->r[17];
    c->r[5] = c->r[5] + c->r[22];
    c->r[4] = c->r[4] + c->r[2];
    c->r[5] = c->r[5] + c->r[18];
    { c->r[31] = 0x08a00634u; c->r[4] = c->r[4] + c->r[23]; func_08a19db8(c, ram); }
    { goto L_08a005d4; }
    return; /* fell out of func_08a00514 */
}

/* func_08a0230c  0x08a0230c..0x08a0234c  64 bytes, source=fde */
void func_08a0230c(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08a0230cu);
    c->r[29] = c->r[29] + 0xfffffff0u;
    mem_w32(ram, c->r[29] + 0x00000000u, c->r[31]);
    c->r[2] = 0x08ba0000u;
    c->r[9] = c->r[4] + 0u;
    c->r[4] = mem_r32(ram, c->r[2] + 0xffff9af0u);
    c->r[3] = c->r[5] + 0u;
    c->r[2] = c->r[6] + 0u;
    c->r[8] = c->r[7] + 0u;
    c->r[5] = c->r[9] + 0u;
    c->r[7] = c->r[2] + 0u;
    { c->r[31] = 0x08a0233cu; c->r[6] = c->r[3] + 0u; func_08a02adc(c, ram); }
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000000u);
    c->r[2] = 0u + 0u;
    { c->r[29] = c->r[29] + 0x00000010u; return; }
    return; /* fell out of func_08a0230c */
}

/* func_08a03130  0x08a03130..0x08a03168  56 bytes, source=fde */
void func_08a03130(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08a03130u);
    c->r[2] = (0u < c->r[5]) ? 1u : 0u;
    c->r[3] = (0u < c->r[6]) ? 1u : 0u;
    c->r[29] = c->r[29] + 0xfffffff0u;
    c->r[2] = c->r[2] & c->r[3];
    mem_w32(ram, c->r[29] + 0x00000000u, c->r[31]);
    { int _c = (c->r[2] != 0u); mem_w32(ram, c->r[4] + 0x00001600u, 0u); if (_c) goto L_08a03158; }
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000000u);
L_08a03150:
    { c->r[29] = c->r[29] + 0x00000010u; return; }
L_08a03158:
    { c->r[31] = 0x08a03160u; func_08a03300(c, ram); }
    { c->r[31] = mem_r32(ram, c->r[29] + 0x00000000u); goto L_08a03150; }
    return; /* fell out of func_08a03130 */
}

/* func_08a040b8  0x08a040b8..0x08a04124  108 bytes, source=residue */
void func_08a040b8(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08a040b8u);
    c->r[2] = 0x80440000u;
    c->r[6] = (c->r[4] < 0x00000008u) ? 1u : 0u;
    { int _c = (c->r[6] == 0u); c->r[3] = c->r[2] | 0x0005u; if (_c) goto L_08a0411c; }
    c->r[6] = 0x80440000u;
    { int _c = (c->r[5] == 0u); c->r[3] = c->r[6] | 0x000cu; if (_c) goto L_08a0411c; }
    c->r[9] = 0u + 0x0000004cu;
    alx_mult(c, c->r[4], c->r[9]);
    c->r[8] = 0x08ba0000u;
    c->r[4] = c->r[8] + 0xffffaa78u;
    c->r[7] = c->lo;
    c->r[6] = c->r[7] + c->r[4];
    c->r[3] = mem_r32(ram, c->r[6] + 0x0000001cu);
    if (c->r[3] == 0u) { mem_w32(ram, c->r[5] + 0x00000000u, 0u); goto L_08a04118; }
    c->r[11] = mem_r32(ram, c->r[6] + 0x00000018u);
    c->r[10] = c->r[11] & 0x0400u;
    if (c->r[10] != 0u) { mem_w32(ram, c->r[5] + 0x00000000u, 0u); goto L_08a04118; }
    c->r[14] = mem_r32(ram, c->r[6] + 0x00000020u);
    c->r[13] = mem_r32(ram, c->r[6] + 0x00000004u);
    c->r[12] = c->r[13] - c->r[14];
    mem_w32(ram, c->r[5] + 0x00000000u, c->r[12]);
L_08a04118:
    c->r[3] = 0u + 0u;
L_08a0411c:
    { c->r[2] = c->r[3] + 0u; return; }
    return; /* fell out of func_08a040b8 */
}

/* func_08a05bf0  0x08a05bf0..0x08a05c2c  60 bytes, source=residue */
void func_08a05bf0(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08a05bf0u);
    c->r[3] = 0x08ba0000u;
    c->r[5] = mem_r32(ram, c->r[3] + 0xffffaf80u);
    c->r[2] = 0x08ba0000u;
    c->r[29] = c->r[29] + 0xfffffff0u;
    c->r[4] = c->r[2] + 0xffffafc0u;
    mem_w32(ram, c->r[29] + 0x00000000u, c->r[31]);
    { int _c = (c->r[5] != 0u); c->r[2] = 0u + 0u; if (_c) goto L_08a05c1c; }
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000000u);
L_08a05c14:
    { c->r[29] = c->r[29] + 0x00000010u; return; }
L_08a05c1c:
    { c->r[31] = 0x08a05c24u; hle_dispatch_stub(c, ram, 0x08a24c84u); /* __sceSasGetPauseFlag */ }
    { c->r[31] = mem_r32(ram, c->r[29] + 0x00000000u); goto L_08a05c14; }
    return; /* fell out of func_08a05bf0 */
}

/* func_08a06c18  0x08a06c18..0x08a06c28  16 bytes, source=residue */
void func_08a06c18(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08a06c18u);
    c->r[5] = 0x08ba0000u;
    c->r[2] = mem_r32(ram, c->r[5] + 0xffffbe04u);
    { mem_w32(ram, c->r[5] + 0xffffbe04u, c->r[4]); return; }
    return; /* fell out of func_08a06c18 */
}

/* func_08a0b638  0x08a0b638..0x08a0b65c  36 bytes, source=residue */
void func_08a0b638(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08a0b638u);
    c->r[29] = c->r[29] + 0xfffffff0u;
    mem_w32(ram, c->r[29] + 0x00000000u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    c->r[2] = 0x08a50000u;
    c->r[2] = c->r[2] + 0xffffe464u;
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000000u);
    { c->r[29] = c->r[29] + 0x00000010u; return; }
    return; /* fell out of func_08a0b638 */
}

/* func_08a0e2e4  0x08a0e2e4..0x08a0e308  36 bytes, source=residue */
void func_08a0e2e4(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08a0e2e4u);
    c->r[29] = c->r[29] + 0xfffffff0u;
    mem_w32(ram, c->r[29] + 0x00000000u, c->r[31]);
    { c->r[31] = 0x08a0e2f4u; func_08a0e464(c, ram); }
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000004u);
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000000u);
    c->r[2] = (0u < c->r[2]) ? 1u : 0u;
    { c->r[29] = c->r[29] + 0x00000010u; return; }
    return; /* fell out of func_08a0e2e4 */
}

/* func_08a0e730  0x08a0e730..0x08a0e768  56 bytes, source=indirect */
void func_08a0e730(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08a0e730u);
    c->r[2] = 0x08a50000u;
    c->r[2] = c->r[2] + 0x00000600u;
    mem_w32(ram, c->r[4] + 0x00000000u, c->r[2]);
    c->r[29] = c->r[29] + 0xfffffff0u;
    mem_w32(ram, c->r[29] + 0x00000000u, c->r[16]);
    mem_w32(ram, c->r[29] + 0x00000004u, c->r[31]);
    { c->r[31] = 0x08a0e750u; c->r[16] = c->r[4] + 0u; func_08a0e55c(c, ram); }
    { c->r[31] = 0x08a0e758u; c->r[4] = c->r[16] + 0u; func_08a0d214(c, ram); }
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000004u);
    c->r[16] = mem_r32(ram, c->r[29] + 0x00000000u);
    { c->r[29] = c->r[29] + 0x00000010u; return; }
    return; /* fell out of func_08a0e730 */
}

/* func_08a10904  0x08a10904..0x08a10c40  828 bytes, source=sweep */
void func_08a10904(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08a10904u);
    c->r[3] = f2u(c->f[12]);
    c->r[29] = c->r[29] + 0xffffffe0u;
    c->r[2] = 0x3f800000u;
    c->r[3] = alx_ins(c->r[3], 0u, 31u, 31u);
    mem_w32(ram, c->r[29] + 0x00000000u, c->r[31]);
    c->r[4] = f2u(c->f[12]);
    mem_wf32(ram, c->r[29] + 0x00000018u, c->f[22]);
    mem_wf32(ram, c->r[29] + 0x00000014u, c->f[21]);
    { int _c = (c->r[3] == c->r[2]); mem_wf32(ram, c->r[29] + 0x00000010u, c->f[20]); if (_c) goto L_08a10c28; }
    c->r[2] = ((s32)c->r[2] < (s32)c->r[3]) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); c->r[2] = 0x3eff0000u; if (_c) goto L_08a10958; }
    c->f[0] = c->f[12] - c->f[12];
    c->f[0] = c->f[0] / c->f[0];
L_08a10940:
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000000u);
L_08a10944:
    c->f[22] = mem_rf32(ram, c->r[29] + 0x00000018u);
    c->f[21] = mem_rf32(ram, c->r[29] + 0x00000014u);
    c->f[20] = mem_rf32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
L_08a10958:
    c->r[2] = c->r[2] | 0xffffu;
    c->r[2] = ((s32)c->r[2] < (s32)c->r[3]) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); c->r[2] = 0x23000000u; if (_c) goto L_08a10a4c; }
    c->r[2] = ((s32)c->r[2] < (s32)c->r[3]) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); c->r[2] = 0x08a50000u; if (_c) goto L_08a10a40; }
    c->f[21] = c->f[12] * c->f[12];
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000848u);
    c->r[2] = 0x08a50000u;
    c->f[1] = mem_rf32(ram, c->r[2] + 0x0000084cu);
    c->f[0] = c->f[21] * c->f[0];
    c->r[2] = 0x08a50000u;
    c->f[0] = c->f[0] + c->f[1];
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000860u);
    c->r[2] = 0x08a50000u;
    c->f[2] = mem_rf32(ram, c->r[2] + 0x00000850u);
    c->f[0] = c->f[21] * c->f[0];
    c->r[2] = 0x08a50000u;
    c->f[1] = c->f[21] * c->f[1];
    c->f[0] = c->f[0] + c->f[2];
    c->f[2] = mem_rf32(ram, c->r[2] + 0x00000864u);
    c->r[2] = 0x08a50000u;
    c->f[1] = c->f[1] + c->f[2];
    c->f[0] = c->f[21] * c->f[0];
    c->f[2] = mem_rf32(ram, c->r[2] + 0x00000854u);
    c->r[2] = 0x08a50000u;
    c->f[1] = c->f[21] * c->f[1];
    c->f[0] = c->f[0] + c->f[2];
    c->f[2] = mem_rf32(ram, c->r[2] + 0x00000868u);
    c->r[2] = 0x08a50000u;
    c->f[1] = c->f[1] + c->f[2];
    c->f[0] = c->f[21] * c->f[0];
    c->f[2] = mem_rf32(ram, c->r[2] + 0x00000858u);
    c->r[2] = 0x08a50000u;
    c->f[1] = c->f[21] * c->f[1];
    c->f[0] = c->f[0] + c->f[2];
    c->f[2] = mem_rf32(ram, c->r[2] + 0x0000086cu);
    c->r[2] = 0x08a50000u;
    c->f[1] = c->f[1] + c->f[2];
    c->f[0] = c->f[21] * c->f[0];
    c->f[2] = mem_rf32(ram, c->r[2] + 0x0000085cu);
    c->r[2] = 0x08a50000u;
    c->f[1] = c->f[21] * c->f[1];
    c->f[0] = c->f[0] + c->f[2];
    c->f[2] = mem_rf32(ram, c->r[2] + 0x00000870u);
    c->r[2] = 0x08a50000u;
    c->f[22] = c->f[1] + c->f[2];
    c->f[20] = c->f[21] * c->f[0];
    c->f[0] = c->f[20] / c->f[22];
    c->f[1] = c->f[12] * c->f[0];
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000874u);
    c->r[2] = 0x08a50000u;
    c->f[0] = c->f[0] - c->f[1];
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000878u);
    c->f[0] = c->f[12] - c->f[0];
L_08a10a38:
    { c->f[0] = c->f[1] - c->f[0]; goto L_08a10940; }
L_08a10a40:
    c->r[2] = 0x08a50000u;
    { c->f[0] = mem_rf32(ram, c->r[2] + 0x00000844u); goto L_08a10940; }
L_08a10a4c:
    { int _c = ((s32)c->r[4] < 0); c->r[2] = 0x08a50000u; if (_c) goto L_08a10b44; }
    c->f[20] = mem_rf32(ram, c->r[2] + 0x00000870u);
    c->r[2] = 0x08a50000u;
    c->f[0] = mem_rf32(ram, c->r[2] + 0x0000087cu);
    c->f[1] = c->f[20] - c->f[12];
    c->f[21] = c->f[1] * c->f[0];
    { c->r[31] = 0x08a10a70u; c->f[12] = c->f[21]; func_08a11df8(c, ram); }
    c->r[2] = 0x08a50000u;
    c->f[12] = c->f[0];
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000848u);
    c->r[2] = 0x08a50000u;
    c->f[1] = mem_rf32(ram, c->r[2] + 0x0000084cu);
    c->f[0] = c->f[21] * c->f[0];
    c->r[2] = 0x08a50000u;
    c->f[3] = mem_rf32(ram, c->r[2] + 0x00000860u);
    c->r[2] = 0x08a50000u;
    c->f[0] = c->f[0] + c->f[1];
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000850u);
    c->f[3] = c->f[21] * c->f[3];
    c->r[2] = 0x08a50000u;
    c->f[0] = c->f[21] * c->f[0];
    c->f[0] = c->f[0] + c->f[1];
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000864u);
    c->r[2] = 0x08a50000u;
    c->f[3] = c->f[3] + c->f[1];
    c->f[0] = c->f[21] * c->f[0];
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000854u);
    c->r[2] = 0x08a50000u;
    c->f[3] = c->f[21] * c->f[3];
    c->f[0] = c->f[0] + c->f[1];
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000868u);
    c->r[2] = 0x08a50000u;
    c->f[3] = c->f[3] + c->f[1];
    c->f[0] = c->f[21] * c->f[0];
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000858u);
    c->r[2] = 0x08a50000u;
    c->f[3] = c->f[21] * c->f[3];
    c->f[0] = c->f[0] + c->f[1];
    c->f[1] = mem_rf32(ram, c->r[2] + 0x0000086cu);
    c->r[2] = f2u(c->f[12]);
    c->f[3] = c->f[3] + c->f[1];
    c->r[2] = alx_ins(c->r[2], 0u, 0u, 11u);
    c->f[4] = u2f(c->r[2]);
    c->f[0] = c->f[21] * c->f[0];
    c->r[2] = 0x08a50000u;
    c->f[1] = mem_rf32(ram, c->r[2] + 0x0000085cu);
    c->f[3] = c->f[21] * c->f[3];
    c->f[2] = c->f[4] * c->f[4];
    c->f[0] = c->f[0] + c->f[1];
    c->f[5] = c->f[12] + c->f[4];
    c->f[22] = c->f[3] + c->f[20];
    c->f[2] = c->f[21] - c->f[2];
    c->f[20] = c->f[21] * c->f[0];
    c->f[2] = c->f[2] / c->f[5];
    c->f[0] = c->f[20] / c->f[22];
    c->f[0] = c->f[0] * c->f[12];
    c->f[0] = c->f[0] + c->f[2];
    c->f[4] = c->f[4] + c->f[0];
    { c->f[0] = c->f[4] + c->f[4]; goto L_08a10940; }
L_08a10b44:
    c->f[3] = mem_rf32(ram, c->r[2] + 0x00000870u);
    c->r[2] = 0x08a50000u;
    c->f[0] = mem_rf32(ram, c->r[2] + 0x0000087cu);
    c->f[1] = c->f[12] + c->f[3];
    c->r[2] = 0x08a50000u;
    c->f[21] = c->f[1] * c->f[0];
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000848u);
    c->r[2] = 0x08a50000u;
    c->f[1] = mem_rf32(ram, c->r[2] + 0x0000084cu);
    c->f[0] = c->f[21] * c->f[0];
    c->r[2] = 0x08a50000u;
    c->f[12] = c->f[21];
    c->f[0] = c->f[0] + c->f[1];
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000860u);
    c->r[2] = 0x08a50000u;
    c->f[2] = mem_rf32(ram, c->r[2] + 0x00000864u);
    c->f[1] = c->f[21] * c->f[1];
    c->r[2] = 0x08a50000u;
    c->f[0] = c->f[21] * c->f[0];
    c->f[1] = c->f[1] + c->f[2];
    c->f[2] = mem_rf32(ram, c->r[2] + 0x00000850u);
    c->r[2] = 0x08a50000u;
    c->f[0] = c->f[0] + c->f[2];
    c->f[1] = c->f[21] * c->f[1];
    c->f[2] = mem_rf32(ram, c->r[2] + 0x00000868u);
    c->r[2] = 0x08a50000u;
    c->f[0] = c->f[21] * c->f[0];
    c->f[1] = c->f[1] + c->f[2];
    c->f[2] = mem_rf32(ram, c->r[2] + 0x00000854u);
    c->r[2] = 0x08a50000u;
    c->f[0] = c->f[0] + c->f[2];
    c->f[1] = c->f[21] * c->f[1];
    c->f[2] = mem_rf32(ram, c->r[2] + 0x0000086cu);
    c->r[2] = 0x08a50000u;
    c->f[0] = c->f[21] * c->f[0];
    c->f[1] = c->f[1] + c->f[2];
    c->f[2] = mem_rf32(ram, c->r[2] + 0x00000858u);
    c->r[2] = 0x08a50000u;
    c->f[0] = c->f[0] + c->f[2];
    c->f[1] = c->f[21] * c->f[1];
    c->f[0] = c->f[21] * c->f[0];
    c->f[22] = c->f[1] + c->f[3];
    c->f[1] = mem_rf32(ram, c->r[2] + 0x0000085cu);
    c->f[0] = c->f[0] + c->f[1];
    { c->r[31] = 0x08a10bfcu; c->f[20] = c->f[21] * c->f[0]; func_08a11df8(c, ram); }
    c->f[12] = c->f[0];
    c->r[2] = 0x08a50000u;
    c->f[0] = c->f[20] / c->f[22];
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000874u);
    c->r[2] = 0x08a50000u;
    c->f[2] = c->f[0] * c->f[12];
    c->f[0] = c->f[2] - c->f[1];
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000880u);
    c->f[0] = c->f[12] + c->f[0];
    { c->f[0] = c->f[0] + c->f[0]; goto L_08a10a38; }
L_08a10c28:
    c->f[0] = u2f(0u);
    { int _c = ((s32)c->r[4] > 0); c->r[31] = mem_r32(ram, c->r[29] + 0x00000000u); if (_c) goto L_08a10944; }
    c->r[2] = 0x08a50000u;
    { c->f[0] = mem_rf32(ram, c->r[2] + 0x00000840u); goto L_08a10944; }
    return; /* fell out of func_08a10904 */
}

/* func_08a143ac  0x08a143ac..0x08a14434  136 bytes, source=sweep */
void func_08a143ac(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08a143acu);
    c->r[29] = c->r[29] + 0xffffff90u;
    c->r[2] = c->r[4] + 0u;
    c->r[3] = c->r[5] + 0u;
    mem_w32(ram, c->r[29] + 0x00000060u, c->r[16]);
    c->r[4] = c->r[29] + 0x00000040u;
    c->r[5] = c->r[29] + 0u;
    mem_w32(ram, c->r[29] + 0x00000040u, c->r[2]);
    mem_w32(ram, c->r[29] + 0x00000044u, c->r[3]);
    mem_w32(ram, c->r[29] + 0x00000064u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000050u, c->r[6]);
    mem_w32(ram, c->r[29] + 0x00000054u, c->r[7]);
    { c->r[31] = 0x08a143e0u; c->r[16] = c->r[29] + 0x00000020u; func_08a18664(c, ram); }
    c->r[4] = c->r[29] + 0x00000050u;
    { c->r[31] = 0x08a143ecu; c->r[5] = c->r[16] + 0u; func_08a18664(c, ram); }
    c->r[2] = mem_r32(ram, c->r[29] + 0x00000000u);
    c->r[2] = (c->r[2] < 0x00000002u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); c->r[3] = 0u + 0x00000001u; if (_c) goto L_08a14410; }
    c->r[2] = mem_r32(ram, c->r[29] + 0x00000020u);
    c->r[5] = c->r[16] + 0u;
    c->r[2] = (c->r[2] < 0x00000002u) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); c->r[4] = c->r[29] + 0u; if (_c) goto L_08a14424; }
L_08a14410:
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000064u);
    c->r[16] = mem_r32(ram, c->r[29] + 0x00000060u);
    c->r[2] = c->r[3] + 0u;
    { c->r[29] = c->r[29] + 0x00000070u; return; }
L_08a14424:
    { c->r[31] = 0x08a1442cu; func_08a18778(c, ram); }
    { c->r[3] = c->r[2] + 0u; goto L_08a14410; }
    return; /* fell out of func_08a143ac */
}

/* func_08a16844  0x08a16844..0x08a16858  20 bytes, source=residue */
void func_08a16844(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08a16844u);
    c->r[5] = c->r[5] << 2;
    c->r[5] = c->r[5] + c->r[4];
    c->r[3] = mem_r32(ram, c->r[5] + 0x00000000u);
    { c->r[2] = mem_r32(ram, c->r[3] + 0x00000000u); return; }
    return; /* fell out of func_08a16844 */
}

/* func_08a183cc  0x08a183cc..0x08a183fc  48 bytes, source=sweep */
void func_08a183cc(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08a183ccu);
    c->r[29] = c->r[29] + 0xffffffe0u;
    c->r[2] = c->r[4] + 0u;
    c->r[4] = c->r[29] + 0u;
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000000u, c->r[2]);
    mem_w32(ram, c->r[29] + 0x00000004u, c->r[5]);
    mem_w32(ram, c->r[29] + 0x00000008u, c->r[6]);
    { c->r[31] = 0x08a183f0u; mem_w32(ram, c->r[29] + 0x0000000cu, c->r[7]); func_08a188dc(c, ram); }
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_08a183cc */
}

/* func_08a1909c  0x08a1909c..0x08a190e4  72 bytes, source=sweep */
void func_08a1909c(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08a1909cu);
    c->r[29] = c->r[29] + 0xfffffff0u;
    mem_w32(ram, c->r[29] + 0x0000000cu, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000008u, c->r[18]);
    c->r[18] = c->r[5] + 0u;
    mem_w32(ram, c->r[29] + 0x00000004u, c->r[17]);
    c->r[17] = c->r[4] + 0u;
    mem_w32(ram, c->r[29] + 0x00000000u, c->r[16]);
    { c->r[31] = 0x08a190c0u; c->r[16] = c->r[6] + 0u; func_08a19374(c, ram); }
    c->r[4] = mem_r32(ram, c->r[2] + 0x0000000cu);
    c->r[5] = 0x08a50000u;
    c->r[5] = c->r[5] + 0x000015b0u;
    c->r[6] = c->r[16] + 0u;
    c->r[7] = c->r[17] + 0u;
    { c->r[31] = 0x08a190dcu; c->r[8] = c->r[18] + 0u; func_08a19340(c, ram); }
    { c->r[31] = 0x08a190e4u; func_08a19084(c, ram); }
    return; /* fell out of func_08a1909c */
}

/* func_08a1a8e4  0x08a1a8e4..0x08a1a940  92 bytes, source=sweep */
void func_08a1a8e4(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08a1a8e4u);
    c->r[29] = c->r[29] + 0xfffffff0u;
    mem_w32(ram, c->r[29] + 0x00000004u, c->r[17]);
    c->r[17] = c->r[4] + 0u;
    c->r[4] = c->r[5] + 0u;
    mem_w32(ram, c->r[29] + 0x00000000u, c->r[16]);
    c->r[16] = 0x08ba0000u;
    mem_w32(ram, c->r[29] + 0x00000008u, c->r[31]);
    { c->r[31] = 0x08a1a908u; mem_w32(ram, c->r[16] + 0x000002acu, 0u); func_08a18c9c(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = 0u + 0xffffffffu;
    { int _c = (c->r[3] == c->r[2]); c->r[2] = mem_r32(ram, c->r[16] + 0x000002acu); if (_c) goto L_08a1a930; }
L_08a1a918:
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000008u);
L_08a1a91c:
    c->r[17] = mem_r32(ram, c->r[29] + 0x00000004u);
    c->r[16] = mem_r32(ram, c->r[29] + 0x00000000u);
    c->r[2] = c->r[3] + 0u;
    { c->r[29] = c->r[29] + 0x00000010u; return; }
L_08a1a930:
    if (c->r[2] != 0u) { mem_w32(ram, c->r[17] + 0x00000000u, c->r[2]); goto L_08a1a918; }
    { c->r[31] = mem_r32(ram, c->r[29] + 0x00000008u); goto L_08a1a91c; }
    return; /* fell out of func_08a1a8e4 */
}

/* func_08a1d634  0x08a1d634..0x08a1d6dc  168 bytes, source=sweep */
void func_08a1d634(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08a1d634u);
    c->r[29] = c->r[29] + 0xfffffb90u;
    mem_w32(ram, c->r[29] + 0x00000464u, c->r[17]);
    c->r[3] = c->r[29] + 0x00000060u;
    c->r[7] = 0u + 0x00000400u;
    mem_w32(ram, c->r[29] + 0x00000460u, c->r[16]);
    c->r[17] = c->r[4] + 0u;
    mem_w32(ram, c->r[29] + 0x00000468u, c->r[31]);
    c->r[2] = mem_r16(ram, c->r[4] + 0x0000000cu);
    c->r[8] = mem_r16(ram, c->r[4] + 0x0000000eu);
    c->r[9] = mem_r32(ram, c->r[4] + 0x0000001cu);
    c->r[10] = mem_r32(ram, c->r[4] + 0x00000024u);
    c->r[2] = alx_ins(c->r[2], 0u, 1u, 1u);
    c->r[4] = c->r[29] + 0u;
    mem_w16(ram, c->r[29] + 0x0000000cu, c->r[2]);
    mem_w16(ram, c->r[29] + 0x0000000eu, c->r[8]);
    mem_w32(ram, c->r[29] + 0x0000001cu, c->r[9]);
    mem_w32(ram, c->r[29] + 0x00000024u, c->r[10]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[3]);
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[7]);
    mem_w32(ram, c->r[29] + 0x00000000u, c->r[3]);
    mem_w32(ram, c->r[29] + 0x00000008u, c->r[7]);
    { c->r[31] = 0x08a1d690u; mem_w32(ram, c->r[29] + 0x00000018u, 0u); func_08a1d6dc(c, ram); }
    c->r[16] = c->r[2] + 0u;
    { int _c = ((s32)c->r[2] < 0); c->r[4] = c->r[29] + 0u; if (_c) goto L_08a1d6ac; }
    { c->r[31] = 0x08a1d6a4u; func_08a2131c(c, ram); }
    c->r[3] = 0u + 0xffffffffu;
    if (c->r[2] != 0u) c->r[16] = c->r[3];
L_08a1d6ac:
    c->r[3] = mem_r16(ram, c->r[29] + 0x0000000cu);
    c->r[3] = c->r[3] & 0x0040u;
    { int _c = (c->r[3] == 0u); c->r[2] = c->r[16] + 0u; if (_c) goto L_08a1d6c8; }
    c->r[3] = mem_r16(ram, c->r[17] + 0x0000000cu);
    c->r[3] = c->r[3] | 0x0040u;
    mem_w16(ram, c->r[17] + 0x0000000cu, c->r[3]);
L_08a1d6c8:
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000468u);
    c->r[17] = mem_r32(ram, c->r[29] + 0x00000464u);
    c->r[16] = mem_r32(ram, c->r[29] + 0x00000460u);
    { c->r[29] = c->r[29] + 0x00000470u; return; }
    return; /* fell out of func_08a1d634 */
}

/* func_08a221a8  0x08a221a8..0x08a22290  232 bytes, source=sweep */
void func_08a221a8(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08a221a8u);
    c->r[7] = (c->r[6] < 0x00000004u) ? 1u : 0u;
    { int _c = (c->r[7] != 0u); c->r[5] = c->r[5] & 0x00ffu; if (_c) goto L_08a22254; }
    c->r[2] = c->r[4] & 0x0003u;
    if (c->r[2] != 0u) { c->r[6] = c->r[6] + 0xffffffffu; goto L_08a22258; }
    c->r[9] = c->r[4] + 0u;
    c->r[10] = 0u + 0u;
    c->r[4] = 0u + 0u;
L_08a221cc:
    c->r[4] = c->r[4] + 0x00000001u;
    c->r[2] = c->r[10] << 8;
    c->r[3] = (c->r[4] < 0x00000004u) ? 1u : 0u;
    { int _c = (c->r[3] != 0u); c->r[10] = c->r[2] + c->r[5]; if (_c) goto L_08a221cc; }
    if (c->r[7] != 0u) { c->r[4] = c->r[9] + 0u; goto L_08a22254; }
    c->r[12] = 0xfefe0000u;
    c->r[11] = 0x80800000u;
    c->r[12] = c->r[12] | 0xfeffu;
    c->r[11] = c->r[11] | 0x8080u;
L_08a221f8:
    c->r[2] = mem_r32(ram, c->r[9] + 0x00000000u);
    c->r[2] = c->r[2] ^ c->r[10];
    c->r[3] = ~(0u | c->r[2]);
    c->r[2] = c->r[2] + c->r[12];
    c->r[2] = c->r[2] & c->r[3];
    c->r[2] = c->r[2] & c->r[11];
    if (c->r[2] == 0u) { c->r[6] = c->r[6] + 0xfffffffcu; goto L_08a22244; }
    c->r[4] = c->r[9] + 0u;
    c->r[8] = 0u + 0u;
    c->r[2] = mem_r8(ram, c->r[4] + 0x00000000u);
L_08a22224:
    c->r[8] = c->r[8] + 0x00000001u;
    c->r[3] = c->r[4] + 0u;
    c->r[7] = (c->r[8] < 0x00000004u) ? 1u : 0u;
    { int _c = (c->r[2] == c->r[5]); c->r[4] = c->r[4] + 0x00000001u; if (_c) goto L_08a22288; }
    if (c->r[7] != 0u) { c->r[2] = mem_r8(ram, c->r[4] + 0x00000000u); goto L_08a22224; }
    c->r[6] = c->r[6] + 0xfffffffcu;
L_08a22244:
    c->r[2] = (c->r[6] < 0x00000004u) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); c->r[9] = c->r[9] + 0x00000004u; if (_c) goto L_08a221f8; }
    c->r[4] = c->r[9] + 0u;
L_08a22254:
    c->r[6] = c->r[6] + 0xffffffffu;
L_08a22258:
    c->r[2] = 0u + 0xffffffffu;
    { int _c = (c->r[6] == c->r[2]); c->r[3] = 0u + 0u; if (_c) goto L_08a22288; }
    c->r[7] = 0u + 0xffffffffu;
    c->r[2] = mem_r8(ram, c->r[4] + 0x00000000u);
L_08a2226c:
    c->r[3] = c->r[4] + 0u;
    c->r[6] = c->r[6] + 0xffffffffu;
    { int _c = (c->r[2] == c->r[5]); c->r[4] = c->r[4] + 0x00000001u; if (_c) goto L_08a22288; }
    if (c->r[6] != c->r[7]) { c->r[2] = mem_r8(ram, c->r[4] + 0x00000000u); goto L_08a2226c; }
    c->r[3] = 0u + 0u;
L_08a22288:
    { c->r[2] = c->r[3] + 0u; return; }
    return; /* fell out of func_08a221a8 */
}

/* func_08a23fb8  0x08a23fb8..0x08a24564  1452 bytes, source=fde */
void func_08a23fb8(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08a23fb8u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x0000001cu, c->r[19]);
    c->r[8] = c->r[7] + 0u;
    c->r[19] = c->r[29] + 0u;
    mem_w32(ram, c->r[29] + 0x00000018u, c->r[18]);
    c->r[11] = c->r[6] + 0u;
    c->r[15] = c->r[4] + 0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[17]);
    c->r[9] = c->r[5] + 0u;
    { int _c = (c->r[7] != 0u); mem_w32(ram, c->r[29] + 0x00000010u, c->r[16]); if (_c) goto L_08a24354; }
    c->r[2] = (c->r[5] < c->r[6]) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); c->r[2] = 0u | 0xffffu; if (_c) goto L_08a2414c; }
    c->r[3] = 0u + 0x00000008u;
    c->r[4] = (c->r[6] < 0x00000100u) ? 1u : 0u;
    c->r[5] = c->r[3] + 0u;
    c->r[2] = (c->r[2] < c->r[6]) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (c->r[4] != 0u) c->r[5] = 0u; if (_c) goto L_08a24024; }
    c->r[2] = 0x00ff0000u;
    c->r[2] = c->r[2] | 0xffffu;
    c->r[3] = 0u + 0x00000010u;
    c->r[2] = (c->r[2] < c->r[6]) ? 1u : 0u;
    c->r[4] = 0u + 0x00000018u;
    c->r[5] = c->r[3] + 0u;
    if (c->r[2] != 0u) c->r[5] = c->r[4];
L_08a24024:
    c->r[3] = 0x08a50000u;
    c->r[2] = c->r[6] >> (c->r[5] & 31u);
    c->r[3] = c->r[3] + 0x0000146cu;
    c->r[2] = c->r[2] + c->r[3];
    c->r[4] = mem_r8(ram, c->r[2] + 0x00000000u);
    c->r[2] = 0u + 0x00000020u;
    c->r[4] = c->r[4] + c->r[5];
    c->r[7] = c->r[2] - c->r[4];
    { int _c = (c->r[7] == 0u); c->r[6] = c->r[11] >> 16; if (_c) goto L_08a24068; }
    c->r[2] = c->r[2] - c->r[7];
    c->r[2] = c->r[15] >> (c->r[2] & 31u);
    c->r[3] = c->r[9] << (c->r[7] & 31u);
    c->r[9] = c->r[3] | c->r[2];
    c->r[11] = c->r[11] << (c->r[7] & 31u);
    c->r[15] = c->r[15] << (c->r[7] & 31u);
    c->r[6] = c->r[11] >> 16;
L_08a24068:
    alx_divu(c, c->r[9], c->r[6]);
    c->r[10] = c->r[11] & 0xffffu;
    c->r[4] = c->r[15] >> 16;
    if (c->r[6] == 0u) { recomp_break(c, ram, 0x08a24078u, 0x7u); goto L_08a2407c; }
L_08a2407c:
    c->r[3] = c->lo;
    c->r[2] = c->hi;
    alx_mult(c, c->r[3], c->r[10]);
    c->r[2] = c->r[2] << 16;
    c->r[5] = c->r[2] | c->r[4];
    c->r[8] = c->lo;
    c->r[3] = (c->r[5] < c->r[8]) ? 1u : 0u;
    { int _c = (c->r[3] == 0u); alx_divu(c, c->r[9], c->r[6]); if (_c) goto L_08a240bc; }
    c->r[5] = c->r[5] + c->r[11];
    c->r[2] = (c->r[5] < c->r[11]) ? 1u : 0u;
    if (c->r[2] != 0u) { c->r[5] = c->r[5] - c->r[8]; goto L_08a240c0; }
    c->r[2] = (c->r[5] < c->r[8]) ? 1u : 0u;
    c->r[3] = c->r[5] + c->r[11];
    if (c->r[2] != 0u) c->r[5] = c->r[3];
L_08a240bc:
    c->r[5] = c->r[5] - c->r[8];
L_08a240c0:
    alx_divu(c, c->r[5], c->r[6]);
    c->r[4] = c->r[15] & 0xffffu;
    if (c->r[6] == 0u) { recomp_break(c, ram, 0x08a240ccu, 0x7u); goto L_08a240d0; }
L_08a240d0:
    c->r[3] = c->lo;
    c->r[2] = c->hi;
    alx_mult(c, c->r[3], c->r[10]);
    c->r[2] = c->r[2] << 16;
    c->r[4] = c->r[2] | c->r[4];
    c->r[8] = c->lo;
    c->r[3] = (c->r[4] < c->r[8]) ? 1u : 0u;
    { int _c = (c->r[3] == 0u); alx_divu(c, c->r[5], c->r[6]); if (_c) goto L_08a24110; }
    c->r[4] = c->r[4] + c->r[11];
    c->r[2] = (c->r[4] < c->r[11]) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); c->r[15] = c->r[4] - c->r[8]; if (_c) goto L_08a24114; }
    c->r[2] = (c->r[4] < c->r[8]) ? 1u : 0u;
    c->r[3] = c->r[4] + c->r[11];
    if (c->r[2] != 0u) c->r[4] = c->r[3];
L_08a24110:
    c->r[15] = c->r[4] - c->r[8];
L_08a24114:
    c->r[24] = c->r[15] >> (c->r[7] & 31u);
    c->r[25] = 0u + 0u;
L_08a2411c:
    { int _c = (c->r[19] == 0u); if (_c) goto L_08a2412c; }
L_08a24124:
    mem_w32(ram, c->r[19] + 0x00000000u, c->r[24]);
    mem_w32(ram, c->r[19] + 0x00000004u, c->r[25]);
L_08a2412c:
    c->r[2] = mem_r32(ram, c->r[29] + 0x00000000u);
    c->r[3] = mem_r32(ram, c->r[29] + 0x00000004u);
    c->r[19] = mem_r32(ram, c->r[29] + 0x0000001cu);
    c->r[18] = mem_r32(ram, c->r[29] + 0x00000018u);
    c->r[17] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[16] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
L_08a2414c:
    { int _c = (c->r[6] != 0u); c->r[3] = 0u + 0x00000008u; if (_c) goto L_08a24170; }
    c->r[2] = 0u + 0x00000001u;
    alx_divu(c, c->r[2], c->r[7]);
    if (c->r[6] == 0u) { recomp_break(c, ram, 0x08a24160u, 0x7u); goto L_08a24164; }
L_08a24164:
    c->r[11] = c->lo;
    c->r[2] = 0u | 0xffffu;
    c->r[3] = 0u + 0x00000008u;
L_08a24170:
    c->r[4] = (c->r[11] < 0x00000100u) ? 1u : 0u;
    c->r[5] = c->r[3] + 0u;
    c->r[2] = (c->r[2] < c->r[11]) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (c->r[4] != 0u) c->r[5] = 0u; if (_c) goto L_08a241a0; }
    c->r[2] = 0x00ff0000u;
    c->r[2] = c->r[2] | 0xffffu;
    c->r[3] = 0u + 0x00000010u;
    c->r[2] = (c->r[2] < c->r[11]) ? 1u : 0u;
    c->r[4] = 0u + 0x00000018u;
    c->r[5] = c->r[3] + 0u;
    if (c->r[2] != 0u) c->r[5] = c->r[4];
L_08a241a0:
    c->r[3] = 0x08a50000u;
    c->r[2] = c->r[11] >> (c->r[5] & 31u);
    c->r[3] = c->r[3] + 0x0000146cu;
    c->r[2] = c->r[2] + c->r[3];
    c->r[4] = mem_r8(ram, c->r[2] + 0x00000000u);
    c->r[2] = 0u + 0x00000020u;
    c->r[4] = c->r[4] + c->r[5];
    c->r[7] = c->r[2] - c->r[4];
    { int _c = (c->r[7] != 0u); c->r[16] = c->r[2] - c->r[7]; if (_c) goto L_08a24280; }
    c->r[9] = c->r[9] - c->r[11];
    c->r[8] = c->r[11] >> 16;
    c->r[14] = c->r[11] & 0xffffu;
L_08a241d4:
    alx_divu(c, c->r[9], c->r[8]);
    c->r[4] = c->r[15] >> 16;
    if (c->r[8] == 0u) { recomp_break(c, ram, 0x08a241e0u, 0x7u); goto L_08a241e4; }
L_08a241e4:
    c->r[3] = c->lo;
    c->r[2] = c->hi;
    alx_mult(c, c->r[3], c->r[14]);
    c->r[2] = c->r[2] << 16;
    c->r[5] = c->r[2] | c->r[4];
    c->r[6] = c->lo;
    c->r[3] = (c->r[5] < c->r[6]) ? 1u : 0u;
    { int _c = (c->r[3] == 0u); alx_divu(c, c->r[9], c->r[8]); if (_c) goto L_08a24224; }
    c->r[5] = c->r[5] + c->r[11];
    c->r[2] = (c->r[5] < c->r[11]) ? 1u : 0u;
    if (c->r[2] != 0u) { c->r[5] = c->r[5] - c->r[6]; goto L_08a24228; }
    c->r[2] = (c->r[5] < c->r[6]) ? 1u : 0u;
    c->r[3] = c->r[5] + c->r[11];
    if (c->r[2] != 0u) c->r[5] = c->r[3];
L_08a24224:
    c->r[5] = c->r[5] - c->r[6];
L_08a24228:
    alx_divu(c, c->r[5], c->r[8]);
    c->r[4] = c->r[15] & 0xffffu;
    if (c->r[8] == 0u) { recomp_break(c, ram, 0x08a24234u, 0x7u); goto L_08a24238; }
L_08a24238:
    c->r[3] = c->lo;
    c->r[2] = c->hi;
    alx_mult(c, c->r[3], c->r[14]);
    c->r[2] = c->r[2] << 16;
    c->r[4] = c->r[2] | c->r[4];
    c->r[6] = c->lo;
    c->r[3] = (c->r[4] < c->r[6]) ? 1u : 0u;
    { int _c = (c->r[3] == 0u); alx_divu(c, c->r[5], c->r[8]); if (_c) goto L_08a24278; }
    c->r[4] = c->r[4] + c->r[11];
    c->r[2] = (c->r[4] < c->r[11]) ? 1u : 0u;
    if (c->r[2] != 0u) { c->r[15] = c->r[4] - c->r[6]; goto L_08a24114; }
    c->r[2] = (c->r[4] < c->r[6]) ? 1u : 0u;
    c->r[3] = c->r[4] + c->r[11];
    if (c->r[2] != 0u) c->r[4] = c->r[3];
L_08a24278:
    { c->r[15] = c->r[4] - c->r[6]; goto L_08a24114; }
L_08a24280:
    c->r[11] = c->r[11] << (c->r[7] & 31u);
    c->r[8] = c->r[11] >> 16;
    c->r[13] = c->r[9] >> (c->r[16] & 31u);
    alx_divu(c, c->r[13], c->r[8]);
    c->r[14] = c->r[11] & 0xffffu;
    c->r[3] = c->r[15] >> (c->r[16] & 31u);
    c->r[2] = c->r[9] << (c->r[7] & 31u);
    c->r[9] = c->r[2] | c->r[3];
    c->r[5] = c->r[9] >> 16;
    if (c->r[8] == 0u) { recomp_break(c, ram, 0x08a242a8u, 0x7u); goto L_08a242ac; }
L_08a242ac:
    c->r[12] = c->r[8] + 0u;
    c->r[15] = c->r[15] << (c->r[7] & 31u);
    c->r[16] = c->r[14] + 0u;
    c->r[6] = c->lo;
    c->r[4] = c->hi;
    alx_mult(c, c->r[6], c->r[14]);
    c->r[4] = c->r[4] << 16;
    c->r[10] = c->r[4] | c->r[5];
    c->r[6] = c->lo;
    c->r[2] = (c->r[10] < c->r[6]) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); alx_divu(c, c->r[13], c->r[8]); if (_c) goto L_08a242f8; }
    c->r[10] = c->r[10] + c->r[11];
    c->r[2] = (c->r[10] < c->r[11]) ? 1u : 0u;
    if (c->r[2] != 0u) { c->r[10] = c->r[10] - c->r[6]; goto L_08a242fc; }
    c->r[2] = (c->r[10] < c->r[6]) ? 1u : 0u;
    c->r[3] = c->r[10] + c->r[11];
    if (c->r[2] != 0u) c->r[10] = c->r[3];
L_08a242f8:
    c->r[10] = c->r[10] - c->r[6];
L_08a242fc:
    alx_divu(c, c->r[10], c->r[12]);
    c->r[4] = c->r[9] & 0xffffu;
    if (c->r[12] == 0u) { recomp_break(c, ram, 0x08a24308u, 0x7u); goto L_08a2430c; }
L_08a2430c:
    c->r[3] = c->lo;
    c->r[2] = c->hi;
    alx_mult(c, c->r[3], c->r[16]);
    c->r[2] = c->r[2] << 16;
    c->r[4] = c->r[2] | c->r[4];
    c->r[6] = c->lo;
    c->r[3] = (c->r[4] < c->r[6]) ? 1u : 0u;
    { int _c = (c->r[3] == 0u); alx_divu(c, c->r[10], c->r[12]); if (_c) goto L_08a2434c; }
    c->r[4] = c->r[4] + c->r[11];
    c->r[2] = (c->r[4] < c->r[11]) ? 1u : 0u;
    if (c->r[2] != 0u) { c->r[9] = c->r[4] - c->r[6]; goto L_08a241d4; }
    c->r[2] = (c->r[4] < c->r[6]) ? 1u : 0u;
    c->r[3] = c->r[4] + c->r[11];
    if (c->r[2] != 0u) c->r[4] = c->r[3];
L_08a2434c:
    { c->r[9] = c->r[4] - c->r[6]; goto L_08a241d4; }
L_08a24354:
    c->r[2] = (c->r[5] < c->r[7]) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); c->r[2] = 0u | 0xffffu; if (_c) goto L_08a24374; }
    c->r[24] = c->r[4] + 0u;
    c->r[25] = c->r[5] + 0u;
    mem_w32(ram, c->r[29] + 0x00000000u, c->r[24]);
    { mem_w32(ram, c->r[29] + 0x00000004u, c->r[25]); goto L_08a2412c; }
L_08a24374:
    c->r[3] = 0u + 0x00000008u;
    c->r[4] = (c->r[7] < 0x00000100u) ? 1u : 0u;
    c->r[5] = c->r[3] + 0u;
    c->r[2] = (c->r[2] < c->r[7]) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (c->r[4] != 0u) c->r[5] = 0u; if (_c) goto L_08a243a8; }
    c->r[2] = 0x00ff0000u;
    c->r[2] = c->r[2] | 0xffffu;
    c->r[3] = 0u + 0x00000010u;
    c->r[2] = (c->r[2] < c->r[7]) ? 1u : 0u;
    c->r[4] = 0u + 0x00000018u;
    c->r[5] = c->r[3] + 0u;
    if (c->r[2] != 0u) c->r[5] = c->r[4];
L_08a243a8:
    c->r[3] = 0x08a50000u;
    c->r[2] = c->r[8] >> (c->r[5] & 31u);
    c->r[3] = c->r[3] + 0x0000146cu;
    c->r[2] = c->r[2] + c->r[3];
    c->r[4] = mem_r8(ram, c->r[2] + 0x00000000u);
    c->r[2] = 0u + 0x00000020u;
    c->r[4] = c->r[4] + c->r[5];
    c->r[7] = c->r[2] - c->r[4];
    { int _c = (c->r[7] != 0u); c->r[16] = c->r[2] - c->r[7]; if (_c) goto L_08a24408; }
    c->r[3] = (c->r[15] < c->r[11]) ? 1u : 0u;
    c->r[3] = c->r[3] ^ 0x0001u;
    c->r[2] = (c->r[8] < c->r[9]) ? 1u : 0u;
    c->r[2] = c->r[2] | c->r[3];
    if (c->r[2] == 0u) { c->r[24] = c->r[15] + 0u; goto L_08a24400; }
    c->r[4] = c->r[15] - c->r[11];
    c->r[2] = (c->r[15] < c->r[4]) ? 1u : 0u;
    c->r[3] = c->r[9] - c->r[8];
    c->r[9] = c->r[3] - c->r[2];
    c->r[15] = c->r[4] + 0u;
    c->r[24] = c->r[15] + 0u;
L_08a24400:
    { c->r[25] = c->r[9] + 0u; goto L_08a2411c; }
L_08a24408:
    c->r[2] = c->r[11] >> (c->r[16] & 31u);
    c->r[3] = c->r[8] << (c->r[7] & 31u);
    c->r[8] = c->r[3] | c->r[2];
    c->r[12] = c->r[8] >> 16;
    c->r[13] = c->r[9] >> (c->r[16] & 31u);
    alx_divu(c, c->r[13], c->r[12]);
    c->r[18] = c->r[8] & 0xffffu;
    c->r[2] = c->r[15] >> (c->r[16] & 31u);
    c->r[3] = c->r[9] << (c->r[7] & 31u);
    c->r[9] = c->r[3] | c->r[2];
    c->r[5] = c->r[9] >> 16;
    if (c->r[12] == 0u) { recomp_break(c, ram, 0x08a24438u, 0x7u); goto L_08a2443c; }
L_08a2443c:
    c->r[11] = c->r[11] << (c->r[7] & 31u);
    c->r[15] = c->r[15] << (c->r[7] & 31u);
    c->r[6] = c->lo;
    c->r[4] = c->hi;
    c->r[17] = c->lo;
    alx_mult(c, c->r[6], c->r[18]);
    c->r[4] = c->r[4] << 16;
    c->r[10] = c->r[4] | c->r[5];
    c->r[14] = c->lo;
    c->r[2] = (c->r[10] < c->r[14]) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); alx_divu(c, c->r[13], c->r[12]); if (_c) goto L_08a24490; }
    c->r[10] = c->r[10] + c->r[8];
    c->r[2] = (c->r[10] < c->r[8]) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); c->r[17] = c->r[6] + 0xffffffffu; if (_c) goto L_08a24490; }
    c->r[2] = (c->r[10] < c->r[14]) ? 1u : 0u;
    if (c->r[2] == 0u) { c->r[10] = c->r[10] - c->r[14]; goto L_08a24494; }
    c->r[17] = c->r[17] + 0xffffffffu;
    c->r[10] = c->r[10] + c->r[8];
L_08a24490:
    c->r[10] = c->r[10] - c->r[14];
L_08a24494:
    alx_divu(c, c->r[10], c->r[12]);
    c->r[4] = c->r[9] & 0xffffu;
    if (c->r[12] == 0u) { recomp_break(c, ram, 0x08a244a0u, 0x7u); goto L_08a244a4; }
L_08a244a4:
    c->r[3] = c->lo;
    c->r[2] = c->hi;
    c->r[6] = c->lo;
    alx_mult(c, c->r[3], c->r[18]);
    c->r[2] = c->r[2] << 16;
    c->r[5] = c->r[2] | c->r[4];
    c->r[14] = c->lo;
    c->r[3] = (c->r[5] < c->r[14]) ? 1u : 0u;
    { int _c = (c->r[3] == 0u); alx_divu(c, c->r[10], c->r[12]); if (_c) goto L_08a244f0; }
    c->r[5] = c->r[5] + c->r[8];
    c->r[2] = (c->r[5] < c->r[8]) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); c->r[6] = c->r[6] + 0xffffffffu; if (_c) goto L_08a244f0; }
    c->r[2] = (c->r[5] < c->r[14]) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); c->r[2] = c->r[17] << 16; if (_c) goto L_08a244f4; }
    c->r[6] = c->r[6] + 0xffffffffu;
    c->r[5] = c->r[5] + c->r[8];
L_08a244f0:
    c->r[2] = c->r[17] << 16;
L_08a244f4:
    c->r[2] = c->r[2] | c->r[6];
    c->r[5] = c->r[5] - c->r[14];
    alx_multu(c, c->r[2], c->r[11]);
    c->r[10] = c->hi;
    c->r[3] = (c->r[5] < c->r[10]) ? 1u : 0u;
    c->r[6] = c->lo;
    { int _c = (c->r[3] != 0u); c->r[4] = c->r[6] - c->r[11]; if (_c) goto L_08a2452c; }
    c->r[2] = c->r[10] ^ c->r[5];
    c->r[2] = (c->r[2] < 0x00000001u) ? 1u : 0u;
    c->r[3] = (c->r[15] < c->r[6]) ? 1u : 0u;
    c->r[2] = c->r[2] & c->r[3];
    { int _c = (c->r[2] == 0u); if (_c) goto L_08a2453c; }
L_08a2452c:
    c->r[2] = (c->r[6] < c->r[4]) ? 1u : 0u;
    c->r[3] = c->r[10] - c->r[8];
    c->r[10] = c->r[3] - c->r[2];
    c->r[6] = c->r[4] + 0u;
L_08a2453c:
    { int _c = (c->r[19] == 0u); c->r[3] = c->r[15] - c->r[6]; if (_c) goto L_08a2412c; }
    c->r[4] = c->r[5] - c->r[10];
    c->r[2] = (c->r[15] < c->r[3]) ? 1u : 0u;
    c->r[9] = c->r[4] - c->r[2];
    c->r[5] = c->r[9] << (c->r[16] & 31u);
    c->r[3] = c->r[3] >> (c->r[7] & 31u);
    c->r[24] = c->r[5] | c->r[3];
    { c->r[25] = c->r[9] >> (c->r[7] & 31u); goto L_08a24124; }
    return; /* fell out of func_08a23fb8 */
}
