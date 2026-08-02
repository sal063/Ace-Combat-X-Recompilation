#include "pspreco.h"
#include "symbols.h"
#include <math.h>

/* func_08804528  0x08804528..0x0880457c  84 bytes, source=fde */
void func_08804528(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08804528u);
    c->r[29] = c->r[29] + 0xfffffff0u;
    mem_w32(ram, c->r[29] + 0x00000004u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000000u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    { c->r[31] = 0x08804540u; hle_dispatch_stub(c, ram, 0x08a24d44u); /* sceUmdCheckMedium */ }
    { int _c = (c->r[2] != 0u); if (_c) goto L_08804550; }
    { c->r[31] = 0x08804550u; c->r[4] = 0u + 0x00000002u; hle_dispatch_stub(c, ram, 0x08a24d5cu); /* sceUmdWaitDriveStat */ }
L_08804550:
    c->r[4] = 0u + 0x00000001u;
    c->r[5] = 0x08a40000u;
    { c->r[31] = 0x08804560u; c->r[5] = c->r[5] + 0xffffe608u; hle_dispatch_stub(c, ram, 0x08a24d6cu); /* sceUmdActivate */ }
    { c->r[31] = 0x08804568u; c->r[4] = 0u + 0x00000020u; hle_dispatch_stub(c, ram, 0x08a24d5cu); /* sceUmdWaitDriveStat */ }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000004u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000000u);
    { c->r[29] = c->r[29] + 0x00000010u; return; }
    return; /* fell out of func_08804528 */
}

/* func_08806bb0  0x08806bb0..0x08806c70  192 bytes, source=sweep */
void func_08806bb0(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08806bb0u);
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
    return; /* fell out of func_08806bb0 */
}

/* func_088077f4  0x088077f4..0x0880785c  104 bytes, source=fde */
void func_088077f4(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x088077f4u);
    c->r[29] = c->r[29] + 0xfffffff0u;
    mem_w32(ram, c->r[29] + 0x00000004u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000000u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    c->r[1] = 0x08b90000u;
    mem_w32(ram, c->r[1] + 0x00000700u, 0u);
    c->r[1] = 0x08b90000u;
    mem_w32(ram, c->r[1] + 0x00000704u, 0u);
    c->r[2] = 0u + 0xffffffffu;
    c->r[1] = 0x08b90000u;
    mem_w32(ram, c->r[1] + 0x00000708u, c->r[2]);
    c->r[4] = 0x08b90000u;
    c->r[4] = c->r[4] + 0x00000720u;
    c->r[5] = 0u + 0u;
    { c->r[31] = 0x08807834u; c->r[6] = 0u + 0x000005d0u; func_08a19ec4(c, ram); }
    c->r[4] = 0x08b90000u;
    c->r[4] = c->r[4] + 0x00000cf0u;
    c->r[5] = 0u + 0u;
    { c->r[31] = 0x08807848u; c->r[6] = 0u + 0x000005d0u; func_08a19ec4(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000004u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000000u);
    { c->r[29] = c->r[29] + 0x00000010u; return; }
    return; /* fell out of func_088077f4 */
}

/* func_08808588  0x08808588..0x0880890c  900 bytes, source=fde */
void func_08808588(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08808588u);
    c->r[29] = c->r[29] + 0xffffff50u;
    mem_w32(ram, c->r[29] + 0x000000a4u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x000000a0u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[4]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = 0u + 0xffffffffu;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_088085c8; }
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x088085b8u; c->r[4] = c->r[4] + 0x00000af4u; func_0880d380(c, ram); }
    { c->r[31] = 0x088085c0u; c->r[4] = c->r[2] + 0u; func_08968f28(c, ram); }
    { mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]); goto L_088085d0; }
L_088085c8:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
L_088085d0:
    { c->r[31] = 0x088085d8u; c->r[4] = 0u + 0x0000000cu; func_089241c8(c, ram); }
    c->r[6] = c->r[2] + 0u;
    c->r[3] = c->r[30] + 0x00000020u;
    c->r[2] = 0x08a80000u;
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000d08u);
    c->r[2] = c->r[2] + 0x00000001u;
    c->r[4] = c->r[3] + 0u;
    c->r[5] = 0x08a40000u;
    c->r[5] = c->r[5] + 0xffffe784u;
    { c->r[31] = 0x08808600u; c->r[7] = c->r[2] + 0u; func_08a1ad34(c, ram); }
    { c->r[31] = 0x08808608u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000014u); func_08969804(c, ram); }
    mem_w16(ram, c->r[30] + 0x00000040u, c->r[2]);
    c->r[2] = c->r[30] + 0x00000020u;
    mem_w32(ram, c->r[30] + 0x00000060u, c->r[2]);
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[30] + 0x00000040u);
    c->r[2] = c->r[2] + 0x00000001u;
    { c->r[31] = 0x08808624u; c->r[4] = c->r[2] + 0u; func_089241c8(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000064u, c->r[2]);
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[30] + 0x00000040u);
    c->r[2] = c->r[2] + 0x00000002u;
    { c->r[31] = 0x08808638u; c->r[4] = c->r[2] + 0u; func_089241c8(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000068u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000060u);
    mem_w32(ram, c->r[30] + 0x00000050u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000064u);
    mem_w32(ram, c->r[30] + 0x00000054u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000068u);
    mem_w32(ram, c->r[30] + 0x00000058u, c->r[2]);
    mem_w32(ram, c->r[30] + 0x00000070u, 0u);
    c->r[3] = c->r[30] + 0x00000060u;
    c->r[2] = 0x08a40000u;
    c->r[2] = c->r[2] + 0xffffe778u;
    c->r[4] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000000u);
    c->r[5] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000001u);
    c->r[6] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000002u);
    mem_w8(ram, c->r[3] + 0x00000000u, c->r[4]);
    mem_w8(ram, c->r[3] + 0x00000001u, c->r[5]);
    mem_w8(ram, c->r[3] + 0x00000002u, c->r[6]);
    mem_w32(ram, c->r[30] + 0x00000074u, 0u);
L_08808680:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000074u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000003u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_08808698; }
    { goto L_0880870c; }
L_08808698:
    c->r[3] = c->r[30] + 0x00000060u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000074u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000007u;
    c->r[2] = c->r[2] << 24;
    c->r[4] = (u32)((s32)c->r[2] >> 24);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000074u);
    c->r[3] = c->r[2] << 2;
    c->r[2] = c->r[30] + 0x00000010u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = c->r[2] + 0x00000040u;
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffffe798u);
    c->r[5] = mem_r32(ram, c->r[2] + 0x00000000u);
    { c->r[31] = 0x088086dcu; c->f[12] = c->f[0]; func_08929cd4(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000078u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000078u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000070u);
    c->r[2] = ((s32)c->r[2] < (s32)c->r[3]) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_088086fc; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000078u);
    mem_w32(ram, c->r[30] + 0x00000070u, c->r[2]);
L_088086fc:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000074u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000074u, c->r[2]); goto L_08808680; }
L_0880870c:
    c->r[3] = 0u + 0x000001e0u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000070u);
    c->r[2] = c->r[3] - c->r[2];
    c->r[2] = (u32)((s32)c->r[2] >> 1);
    mem_w16(ram, c->r[30] + 0x0000007cu, c->r[2]);
    c->r[3] = c->r[30] + 0x00000080u;
    c->r[2] = 0x08a40000u;
    c->r[2] = c->r[2] + 0xffffe77cu;
    c->r[4] = mem_lwl(ram, c->r[2] + 0x00000003u, c->r[4]);
    c->r[4] = mem_lwr(ram, c->r[2] + 0x00000000u, c->r[4]);
    c->r[5] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x00000004u);
    mem_swl(ram, c->r[3] + 0x00000003u, c->r[4]);
    mem_swr(ram, c->r[3] + 0x00000000u, c->r[4]);
    mem_w16(ram, c->r[3] + 0x00000004u, c->r[5]);
    c->r[1] = 0x08a80000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0x00003c4cu);
    c->r[1] = 0x08a80000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00002e40u);
    c->f[0] = c->f[1] + c->f[0];
    c->r[1] = 0x08a80000u;
    mem_wf32(ram, c->r[1] + 0x00003c4cu, c->f[0]);
    c->r[1] = 0x08a80000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0x00003c4cu);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffffe79cu);
    alx_c_cond_s(c, 12, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_08808788; }
    { goto L_08808790; }
L_08808788:
    c->r[1] = 0x08a80000u;
    mem_w32(ram, c->r[1] + 0x00003c4cu, 0u);
L_08808790:
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x0880879cu; c->r[4] = c->r[4] + 0x00000af4u; func_0880d294(c, ram); }
    { int _c = (c->r[2] != 0u); if (_c) goto L_088087dc; }
    c->r[3] = mem_r8(ram, c->r[30] + 0x00000060u);
    c->r[8] = (u32)(s32)(s16)mem_r16(ram, c->r[30] + 0x0000007cu);
    c->r[9] = (u32)(s32)(s16)mem_r16(ram, c->r[30] + 0x00000080u);
    c->r[2] = 0xc0120000u;
    c->r[2] = c->r[2] | 0x0800u;
    mem_w32(ram, c->r[29] + 0x00000000u, c->r[2]);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00002dfcu;
    c->r[5] = c->r[3] + 0u;
    c->r[6] = mem_r32(ram, c->r[30] + 0x00000050u);
    c->r[7] = 0u + 0x00000001u;
    c->r[10] = 0u + 0u;
    { c->r[31] = 0x088087dcu; c->r[11] = 0u + 0u; func_089ce998(c, ram); }
L_088087dc:
    c->r[3] = mem_r8(ram, c->r[30] + 0x00000061u);
    c->r[2] = mem_r16(ram, c->r[30] + 0x0000007cu);
    c->r[2] = c->r[2] + 0x00000001u;
    c->r[2] = c->r[2] << 16;
    c->r[8] = (u32)((s32)c->r[2] >> 16);
    c->r[9] = (u32)(s32)(s16)mem_r16(ram, c->r[30] + 0x00000082u);
    c->r[2] = 0x32ff0000u;
    c->r[2] = c->r[2] | 0x7f40u;
    mem_w32(ram, c->r[29] + 0x00000000u, c->r[2]);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00002dfcu;
    c->r[5] = c->r[3] + 0u;
    c->r[6] = mem_r32(ram, c->r[30] + 0x00000054u);
    c->r[7] = 0u + 0x00000001u;
    c->r[10] = 0u + 0u;
    { c->r[31] = 0x08808820u; c->r[11] = 0u + 0u; func_089ce998(c, ram); }
    c->r[3] = mem_r8(ram, c->r[30] + 0x00000061u);
    c->r[2] = mem_r16(ram, c->r[30] + 0x0000007cu);
    c->r[2] = c->r[2] + 0x00000001u;
    c->r[2] = c->r[2] << 16;
    c->r[8] = (u32)((s32)c->r[2] >> 16);
    c->r[9] = (u32)(s32)(s16)mem_r16(ram, c->r[30] + 0x00000082u);
    c->r[2] = 0x7f160000u;
    c->r[2] = c->r[2] | 0x0303u;
    mem_w32(ram, c->r[29] + 0x00000000u, c->r[2]);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00002dfcu;
    c->r[5] = c->r[3] + 0u;
    c->r[6] = mem_r32(ram, c->r[30] + 0x00000054u);
    c->r[7] = 0u + 0x00000002u;
    c->r[10] = 0u + 0u;
    { c->r[31] = 0x08808864u; c->r[11] = 0u + 0u; func_089ce998(c, ram); }
    c->r[3] = mem_r8(ram, c->r[30] + 0x00000061u);
    c->r[8] = (u32)(s32)(s16)mem_r16(ram, c->r[30] + 0x0000007cu);
    c->r[9] = (u32)(s32)(s16)mem_r16(ram, c->r[30] + 0x00000082u);
    c->r[2] = 0xc8120000u;
    c->r[2] = c->r[2] | 0x0800u;
    mem_w32(ram, c->r[29] + 0x00000000u, c->r[2]);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00002dfcu;
    c->r[5] = c->r[3] + 0u;
    c->r[6] = mem_r32(ram, c->r[30] + 0x00000054u);
    c->r[7] = 0u + 0x00000001u;
    c->r[10] = 0u + 0u;
    { c->r[31] = 0x0880889cu; c->r[11] = 0u + 0u; func_089ce998(c, ram); }
    c->r[3] = mem_r8(ram, c->r[30] + 0x00000062u);
    c->r[8] = (u32)(s32)(s16)mem_r16(ram, c->r[30] + 0x0000007cu);
    c->r[9] = (u32)(s32)(s16)mem_r16(ram, c->r[30] + 0x00000084u);
    c->r[2] = 0xc0120000u;
    c->r[2] = c->r[2] | 0x0800u;
    mem_w32(ram, c->r[29] + 0x00000000u, c->r[2]);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00002dfcu;
    c->r[5] = c->r[3] + 0u;
    c->r[6] = mem_r32(ram, c->r[30] + 0x00000058u);
    c->r[7] = 0u + 0x00000001u;
    c->r[10] = 0u + 0u;
    { c->r[31] = 0x088088d4u; c->r[11] = 0u + 0u; func_089ce998(c, ram); }
    { c->r[31] = 0x088088dcu; c->r[4] = mem_r32(ram, c->r[30] + 0x00000014u); func_0896985c(c, ram); }
    mem_w16(ram, c->r[30] + 0x00000090u, c->r[2]);
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[30] + 0x00000090u);
    c->r[4] = 0x08a40000u;
    c->r[4] = c->r[4] + 0xffffe78cu;
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x088088f8u; c->r[6] = 0u + 0x00000001u; func_08928cb8(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x000000a4u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x000000a0u);
    { c->r[29] = c->r[29] + 0x000000b0u; return; }
    return; /* fell out of func_08808588 */
}

/* func_0880b360  0x0880b360..0x0880b398  56 bytes, source=fde */
void func_0880b360(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0880b360u);
    c->r[29] = c->r[29] + 0xfffffff0u;
    mem_w32(ram, c->r[29] + 0x00000004u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000000u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0xffffc930u;
    c->r[5] = 0u + 0x00000001u;
    { c->r[31] = 0x0880b384u; c->r[6] = 0u + 0x00000003u; func_089f5ab8(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000004u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000000u);
    { c->r[29] = c->r[29] + 0x00000010u; return; }
    return; /* fell out of func_0880b360 */
}

/* func_0880d630  0x0880d630..0x0880d66c  60 bytes, source=sweep */
void func_0880d630(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0880d630u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_wf32(ram, c->r[30] + 0x00000004u, c->f[12]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000038u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000004u);
    c->f[0] = c->f[1] + c->f[0];
    mem_wf32(ram, c->r[3] + 0x00000038u, c->f[0]);
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_0880d630 */
}

/* func_0880f188  0x0880f188..0x0880f1d4  76 bytes, source=fde */
void func_0880f188(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0880f188u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000003cu);
    { int _c = (c->r[2] == 0u); if (_c) goto L_0880f1c0; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000003cu);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { u32 _t = c->r[2]; c->r[31] = 0x0880f1c0u; c->r[5] = 0u + 0x00000001u; recomp_call_indirect(c, ram, 0x0880f1b8u, _t); }
L_0880f1c0:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_0880f188 */
}

/* func_088126ac  0x088126ac..0x088126f0  68 bytes, source=fde */
void func_088126ac(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x088126acu);
    c->r[29] = c->r[29] + 0xfffffff0u;
    mem_w32(ram, c->r[29] + 0x00000004u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000000u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    c->r[4] = 0x08a40000u;
    { c->r[31] = 0x088126c8u; c->r[4] = c->r[4] + 0xfffff15cu; func_08808e2c(c, ram); }
    c->r[4] = 0x08a40000u;
    { c->r[31] = 0x088126d4u; c->r[4] = c->r[4] + 0xfffff164u; func_08808e2c(c, ram); }
    { c->r[31] = 0x088126dcu; c->r[4] = 0u + 0x00000006u; func_0880b0d4(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000004u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000000u);
    { c->r[29] = c->r[29] + 0x00000010u; return; }
    return; /* fell out of func_088126ac */
}

/* func_08815ce4  0x08815ce4..0x0881630c  1576 bytes, source=fde */
void func_08815ce4(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08815ce4u);
    c->r[29] = c->r[29] + 0xffffffb0u;
    mem_w32(ram, c->r[29] + 0x00000048u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000044u, c->r[30]);
    mem_w32(ram, c->r[29] + 0x00000040u, c->r[16]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x00000046u);
    c->r[3] = c->r[2] << 2;
    c->r[2] = mem_r32(ram, c->r[4] + 0x00000024u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x00000046u);
    c->r[3] = c->r[2] << 2;
    c->r[2] = mem_r32(ram, c->r[4] + 0x00000024u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[2] = c->r[2] + 0x000000e0u;
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[3] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x00000022u);
    c->r[2] = 0u + 0x00000bb8u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_08815d70; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000030u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xfffff2ecu);
    { mem_wf32(ram, c->r[2] + 0x00000038u, c->f[0]); goto L_08815db0; }
L_08815d70:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[3] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x00000022u);
    c->r[2] = 0u + 0x000007d0u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_08815d9c; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000030u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xfffff2f0u);
    { mem_wf32(ram, c->r[2] + 0x00000038u, c->f[0]); goto L_08815db0; }
L_08815d9c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000030u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xfffff2f4u);
    mem_wf32(ram, c->r[2] + 0x00000038u, c->f[0]);
L_08815db0:
    c->r[2] = 0u + 0x00000001u;
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[1] = 0x08a80000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0xffffbf40u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000020u);
    c->f[0] = c->f[1] - c->f[0];
    mem_wf32(ram, c->r[30] + 0x00000014u, c->f[0]);
    { c->r[31] = 0x08815dd8u; c->f[12] = mem_rf32(ram, c->r[30] + 0x00000014u); func_08a136f8(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000020u, c->r[2]);
    mem_w32(ram, c->r[30] + 0x00000024u, c->r[3]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000024u);
    c->r[6] = 0u + 0u;
    { c->r[31] = 0x08815df4u; c->r[7] = 0u + 0u; func_08a1429c(c, ram); }
    { int _c = ((s32)c->r[2] >= 0); if (_c) goto L_08815e10; }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000020u);
    { c->r[31] = 0x08815e08u; c->r[5] = mem_r32(ram, c->r[30] + 0x00000024u); func_08a14510(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000020u, c->r[2]);
    mem_w32(ram, c->r[30] + 0x00000024u, c->r[3]);
L_08815e10:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000020u);
    { c->r[31] = 0x08815e1cu; c->r[5] = mem_r32(ram, c->r[30] + 0x00000024u); func_08a14588(c, ram); }
    mem_wf32(ram, c->r[30] + 0x00000018u, c->f[0]);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000018u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xfffff2f8u);
    alx_c_cond_s(c, 12, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_08815e44; }
    { goto L_08815e58; }
L_08815e44:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000020u);
    c->r[1] = 0x08a80000u;
    { mem_wf32(ram, c->r[1] + 0xffffbf40u, c->f[0]); goto L_08815e80; }
L_08815e58:
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000014u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xfffff2fcu);
    c->f[1] = c->f[1] / c->f[0];
    c->r[1] = 0x08a80000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffffbf40u);
    c->f[0] = c->f[0] - c->f[1];
    c->r[1] = 0x08a80000u;
    mem_wf32(ram, c->r[1] + 0xffffbf40u, c->f[0]);
    mem_w32(ram, c->r[30] + 0x00000010u, 0u);
L_08815e80:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[1] = 0x08a80000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0xffffbf44u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000024u);
    c->f[0] = c->f[1] - c->f[0];
    mem_wf32(ram, c->r[30] + 0x00000014u, c->f[0]);
    { c->r[31] = 0x08815ea0u; c->f[12] = mem_rf32(ram, c->r[30] + 0x00000014u); func_08a136f8(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000028u, c->r[2]);
    mem_w32(ram, c->r[30] + 0x0000002cu, c->r[3]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000028u);
    c->r[5] = mem_r32(ram, c->r[30] + 0x0000002cu);
    c->r[6] = 0u + 0u;
    { c->r[31] = 0x08815ebcu; c->r[7] = 0u + 0u; func_08a1429c(c, ram); }
    { int _c = ((s32)c->r[2] >= 0); if (_c) goto L_08815ed8; }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000028u);
    { c->r[31] = 0x08815ed0u; c->r[5] = mem_r32(ram, c->r[30] + 0x0000002cu); func_08a14510(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000028u, c->r[2]);
    mem_w32(ram, c->r[30] + 0x0000002cu, c->r[3]);
L_08815ed8:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000028u);
    { c->r[31] = 0x08815ee4u; c->r[5] = mem_r32(ram, c->r[30] + 0x0000002cu); func_08a14588(c, ram); }
    mem_wf32(ram, c->r[30] + 0x00000018u, c->f[0]);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000018u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xfffff2f8u);
    alx_c_cond_s(c, 12, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_08815f0c; }
    { goto L_08815f20; }
L_08815f0c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000024u);
    c->r[1] = 0x08a80000u;
    { mem_wf32(ram, c->r[1] + 0xffffbf44u, c->f[0]); goto L_08815f48; }
L_08815f20:
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000014u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xfffff300u);
    c->f[1] = c->f[1] / c->f[0];
    c->r[1] = 0x08a80000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffffbf44u);
    c->f[0] = c->f[0] - c->f[1];
    c->r[1] = 0x08a80000u;
    mem_wf32(ram, c->r[1] + 0xffffbf44u, c->f[0]);
    mem_w32(ram, c->r[30] + 0x00000010u, 0u);
L_08815f48:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[1] = 0x08a80000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0xffffbf48u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000028u);
    c->f[0] = c->f[1] - c->f[0];
    mem_wf32(ram, c->r[30] + 0x00000014u, c->f[0]);
    { c->r[31] = 0x08815f68u; c->f[12] = mem_rf32(ram, c->r[30] + 0x00000014u); func_08a136f8(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000030u, c->r[2]);
    mem_w32(ram, c->r[30] + 0x00000034u, c->r[3]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000030u);
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000034u);
    c->r[6] = 0u + 0u;
    { c->r[31] = 0x08815f84u; c->r[7] = 0u + 0u; func_08a1429c(c, ram); }
    { int _c = ((s32)c->r[2] >= 0); if (_c) goto L_08815fa0; }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000030u);
    { c->r[31] = 0x08815f98u; c->r[5] = mem_r32(ram, c->r[30] + 0x00000034u); func_08a14510(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000030u, c->r[2]);
    mem_w32(ram, c->r[30] + 0x00000034u, c->r[3]);
L_08815fa0:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000030u);
    { c->r[31] = 0x08815facu; c->r[5] = mem_r32(ram, c->r[30] + 0x00000034u); func_08a14588(c, ram); }
    mem_wf32(ram, c->r[30] + 0x00000018u, c->f[0]);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000018u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xfffff2f8u);
    alx_c_cond_s(c, 12, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_08815fd4; }
    { goto L_08815fe8; }
L_08815fd4:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000028u);
    c->r[1] = 0x08a80000u;
    { mem_wf32(ram, c->r[1] + 0xffffbf48u, c->f[0]); goto L_08816010; }
L_08815fe8:
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000014u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xfffff2fcu);
    c->f[1] = c->f[1] / c->f[0];
    c->r[1] = 0x08a80000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffffbf48u);
    c->f[0] = c->f[0] - c->f[1];
    c->r[1] = 0x08a80000u;
    mem_wf32(ram, c->r[1] + 0xffffbf48u, c->f[0]);
    mem_w32(ram, c->r[30] + 0x00000010u, 0u);
L_08816010:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_088160b4; }
    c->r[4] = 0x08a70000u;
    c->r[4] = c->r[4] + 0xffffb34cu;
    c->r[5] = 0u + 0u;
    c->r[6] = 0u + 0u;
    { c->r[31] = 0x08816034u; c->r[7] = 0u + 0u; func_089d87d4(c, ram); }
    c->r[16] = c->r[2] + 0u;
    c->r[4] = 0x08a70000u;
    { c->r[31] = 0x08816044u; c->r[4] = c->r[4] + 0xffffb34cu; func_0880d238(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = mem_r32(ram, c->r[16] + 0x00000004u);
    c->r[2] = c->r[3] & c->r[2];
    c->r[2] = c->r[2] & 0x0008u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_088160b4; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000002cu);
    c->r[2] = c->r[2] + 0x00000014u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000ac8u;
    { c->r[31] = 0x0881607cu; c->r[5] = c->r[2] + 0u; func_089cb820(c, ram); }
    mem_w32(ram, c->r[30] + 0x0000001cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    { int _c = (c->r[2] == 0u); if (_c) goto L_088160a0; }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[6] = 0u + 0x00000021u;
    { c->r[31] = 0x088160a0u; c->r[7] = 0u + 0u; func_089c34ac(c, ram); }
L_088160a0:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000004u);
    { c->r[31] = 0x088160acu; c->r[5] = 0u + 0x00000004u; func_08814994(c, ram); }
    { goto L_088162f4; }
L_088160b4:
    c->r[4] = 0x08a70000u;
    c->r[4] = c->r[4] + 0xffffb34cu;
    c->r[5] = 0u + 0u;
    c->r[6] = 0u + 0u;
    { c->r[31] = 0x088160ccu; c->r[7] = 0u + 0u; func_089d87d4(c, ram); }
    c->r[16] = c->r[2] + 0u;
    c->r[4] = 0x08a70000u;
    { c->r[31] = 0x088160dcu; c->r[4] = c->r[4] + 0xffffb34cu; func_0880d238(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = mem_r32(ram, c->r[16] + 0x00000004u);
    c->r[2] = c->r[3] & c->r[2];
    c->r[2] = c->r[2] & 0x0040u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_0881613c; }
    c->r[4] = 0x08a70000u;
    c->r[4] = c->r[4] + 0xffffb34cu;
    c->r[5] = 0u + 0u;
    c->r[6] = 0u + 0u;
    { c->r[31] = 0x0881610cu; c->r[7] = 0u + 0u; func_089d87d4(c, ram); }
    c->r[16] = c->r[2] + 0u;
    c->r[4] = 0x08a70000u;
    { c->r[31] = 0x0881611cu; c->r[4] = c->r[4] + 0xffffb34cu; func_0880d238(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = mem_r32(ram, c->r[16] + 0x00000004u);
    c->r[2] = c->r[3] & c->r[2];
    c->r[2] = c->r[2] & 0x0020u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_0881613c; }
    { goto L_088161d8; }
L_0881613c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x00000046u);
    mem_w32(ram, c->r[30] + 0x0000001cu, c->r[2]);
L_08816148:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r16(ram, c->r[2] + 0x00000046u);
    c->r[2] = c->r[2] + 0x00000001u;
    mem_w16(ram, c->r[3] + 0x00000046u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[4] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x00000046u);
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[3] + 0x00000048u);
    c->r[2] = ((s32)c->r[4] < (s32)c->r[2]) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_08816180; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    mem_w16(ram, c->r[2] + 0x00000046u, 0u);
L_08816180:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x00000046u);
    c->r[3] = c->r[2] << 2;
    c->r[2] = mem_r32(ram, c->r[4] + 0x00000024u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[2] = c->r[2] + 0x000000e0u;
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x00000022u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_088161bc; }
    { goto L_088162f4; }
L_088161bc:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x00000046u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    { int _c = (c->r[2] != c->r[3]); if (_c) goto L_08816148; }
    { goto L_088162f4; }
L_088161d8:
    c->r[4] = 0x08a70000u;
    c->r[4] = c->r[4] + 0xffffb34cu;
    c->r[5] = 0u + 0u;
    c->r[6] = 0u + 0u;
    { c->r[31] = 0x088161f0u; c->r[7] = 0u + 0u; func_089d87d4(c, ram); }
    c->r[16] = c->r[2] + 0u;
    c->r[4] = 0x08a70000u;
    { c->r[31] = 0x08816200u; c->r[4] = c->r[4] + 0xffffb34cu; func_0880d238(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = mem_r32(ram, c->r[16] + 0x00000004u);
    c->r[2] = c->r[3] & c->r[2];
    c->r[2] = c->r[2] & 0x0010u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_08816260; }
    c->r[4] = 0x08a70000u;
    c->r[4] = c->r[4] + 0xffffb34cu;
    c->r[5] = 0u + 0u;
    c->r[6] = 0u + 0u;
    { c->r[31] = 0x08816230u; c->r[7] = 0u + 0u; func_089d87d4(c, ram); }
    c->r[16] = c->r[2] + 0u;
    c->r[4] = 0x08a70000u;
    { c->r[31] = 0x08816240u; c->r[4] = c->r[4] + 0xffffb34cu; func_0880d238(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = mem_r32(ram, c->r[16] + 0x00000004u);
    c->r[2] = c->r[3] & c->r[2];
    c->r[2] = c->r[2] & 0x0080u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_08816260; }
    { goto L_088162f4; }
L_08816260:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x00000046u);
    mem_w32(ram, c->r[30] + 0x0000001cu, c->r[2]);
L_0881626c:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r16(ram, c->r[2] + 0x00000046u);
    c->r[2] = c->r[2] + 0xffffffffu;
    mem_w16(ram, c->r[3] + 0x00000046u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x00000046u);
    { int _c = ((s32)c->r[2] >= 0); if (_c) goto L_088162a4; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r16(ram, c->r[2] + 0x00000048u);
    c->r[2] = c->r[2] + 0xffffffffu;
    mem_w16(ram, c->r[3] + 0x00000046u, c->r[2]);
L_088162a4:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x00000046u);
    c->r[3] = c->r[2] << 2;
    c->r[2] = mem_r32(ram, c->r[4] + 0x00000024u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[2] = c->r[2] + 0x000000e0u;
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x00000022u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_088162e0; }
    { goto L_088162f4; }
L_088162e0:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x00000046u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    { int _c = (c->r[2] != c->r[3]); if (_c) goto L_0881626c; }
L_088162f4:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000048u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000044u);
    c->r[16] = mem_r32(ram, c->r[29] + 0x00000040u);
    { c->r[29] = c->r[29] + 0x00000050u; return; }
    return; /* fell out of func_08815ce4 */
}

/* func_08819c74  0x08819c74..0x08819cb8  68 bytes, source=sweep */
void func_08819c74(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08819c74u);
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
    { c->r[31] = 0x08819ca4u; c->r[5] = c->r[2] + 0u; func_088191c8(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_08819c74 */
}

/* func_088204a8  0x088204a8..0x088204e8  64 bytes, source=fde */
void func_088204a8(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x088204a8u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[6] = 0u + 0x00000021u;
    { c->r[31] = 0x088204d4u; c->r[7] = 0u + 0u; func_089c34ac(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_088204a8 */
}

/* func_08824d0c  0x08824d0c..0x08824d44  56 bytes, source=sweep */
void func_08824d0c(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08824d0cu);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    c->r[2] = c->r[4] + 0u;
    mem_w8(ram, c->r[30] + 0x00000000u, c->r[2]);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x08824d30u; c->r[4] = c->r[2] + 0u; func_08824c8c(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_08824d0c */
}

/* func_08826da8  0x08826da8..0x08826ddc  52 bytes, source=sweep */
void func_08826da8(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08826da8u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[2] = c->r[5] + 0u;
    mem_w8(ram, c->r[30] + 0x00000004u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r8(ram, c->r[30] + 0x00000004u);
    mem_w8(ram, c->r[3] + 0x00001b91u, c->r[2]);
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_08826da8 */
}

/* func_0882a2b4  0x0882a2b4..0x0882a408  340 bytes, source=fde */
void func_0882a2b4(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0882a2b4u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_0882a320; }
    c->r[2] = 0x08a80000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00003eb8u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_0882a304; }
    c->r[4] = 0x08a40000u;
    c->r[4] = c->r[4] + 0x0000161cu;
    c->r[5] = 0u + 0x00001589u;
    { c->r[31] = 0x0882a2fcu; c->r[6] = 0u + 0x00000001u; func_08928cb8(c, ram); }
    { goto L_0882a3f4; }
L_0882a304:
    c->r[4] = 0x08a40000u;
    c->r[4] = c->r[4] + 0x0000161cu;
    c->r[5] = 0u + 0x00001562u;
    { c->r[31] = 0x0882a318u; c->r[6] = 0u + 0x00000001u; func_08928cb8(c, ram); }
    { goto L_0882a3f4; }
L_0882a320:
    c->r[3] = 0x08a80000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00003eb4u);
    c->r[2] = 0u + 0x00000001u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_0882a364; }
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x0882a340u; c->r[4] = c->r[4] + 0x00003fc8u; func_08828b94(c, ram); }
    { int _c = (c->r[2] == 0u); if (_c) goto L_0882a358; }
    c->r[2] = 0u + 0x00000004u;
    c->r[1] = 0x08a80000u;
    { mem_w32(ram, c->r[1] + 0x00003ec8u, c->r[2]); goto L_0882a364; }
L_0882a358:
    c->r[2] = 0u + 0x00000001u;
    c->r[1] = 0x08a80000u;
    mem_w32(ram, c->r[1] + 0x00003eb8u, c->r[2]);
L_0882a364:
    c->r[2] = 0x08a80000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00003eb8u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_0882a3a0; }
    { c->r[31] = 0x0882a37cu; c->r[4] = 0u + 0x00000001u; func_089c5f10(c, ram); }
    { int _c = (c->r[2] == 0u); if (_c) goto L_0882a3e8; }
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00003eb4u;
    c->r[5] = 0x08830000u;
    { c->r[31] = 0x0882a398u; c->r[5] = c->r[5] + 0xffffa104u; func_0880f03c(c, ram); }
    { goto L_0882a3e8; }
L_0882a3a0:
    { c->r[31] = 0x0882a3a8u; c->r[4] = 0u + 0x00000001u; func_089c5e18(c, ram); }
    { int _c = (c->r[2] == 0u); if (_c) goto L_0882a3c4; }
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00003eb4u;
    c->r[5] = 0x08830000u;
    { c->r[31] = 0x0882a3c4u; c->r[5] = c->r[5] + 0xffffa408u; func_0880f03c(c, ram); }
L_0882a3c4:
    { c->r[31] = 0x0882a3ccu; c->r[4] = 0u + 0x00000001u; func_089c5f10(c, ram); }
    { int _c = (c->r[2] == 0u); if (_c) goto L_0882a3e8; }
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00003eb4u;
    c->r[5] = 0x08830000u;
    { c->r[31] = 0x0882a3e8u; c->r[5] = c->r[5] + 0xffff9fb0u; func_0880f03c(c, ram); }
L_0882a3e8:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x0882a3f4u; c->r[5] = 0u + 0u; func_0882adfc(c, ram); }
L_0882a3f4:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_0882a2b4 */
}

/* func_0882eb20  0x0882eb20..0x0882eb5c  60 bytes, source=sweep */
void func_0882eb20(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0882eb20u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[3];
    c->r[2] = c->r[2] + 0x00001444u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_0882eb20 */
}

/* func_08831aac  0x08831aac..0x08831d98  748 bytes, source=fde */
void func_08831aac(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08831aacu);
    c->r[29] = c->r[29] + 0xffffff80u;
    mem_w32(ram, c->r[29] + 0x00000074u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000070u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[6]);
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[7]);
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[8]);
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[9]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 3;
    c->r[2] = 0x08a50000u;
    c->r[2] = c->r[2] + 0x00002f04u;
    c->r[2] = c->r[2] + c->r[3];
    mem_w32(ram, c->r[30] + 0x00000030u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 3;
    c->r[2] = 0x08a50000u;
    c->r[2] = c->r[2] + 0x00002f04u;
    c->r[2] = c->r[2] + c->r[3];
    mem_w32(ram, c->r[30] + 0x00000034u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    { int _c = ((s32)c->r[2] < 0); if (_c) goto L_08831ba4; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 3;
    c->r[2] = 0x08a50000u;
    c->r[2] = c->r[2] + 0x00002f04u;
    c->r[2] = c->r[2] + c->r[3];
    mem_w32(ram, c->r[30] + 0x00000038u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000030u);
    c->r[3] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000038u);
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x00000000u);
    c->r[3] = c->r[3] + c->r[2];
    c->r[2] = (u32)((s32)c->r[3] >> 31);
    c->r[2] = c->r[2] >> 31;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = (u32)((s32)c->r[2] >> 1);
    mem_w16(ram, c->r[30] + 0x00000020u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000030u);
    c->r[3] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x00000002u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000038u);
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x00000002u);
    c->r[3] = c->r[3] + c->r[2];
    c->r[2] = (u32)((s32)c->r[3] >> 31);
    c->r[2] = c->r[2] >> 31;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = (u32)((s32)c->r[2] >> 1);
    mem_w16(ram, c->r[30] + 0x00000022u, c->r[2]);
    c->r[2] = c->r[30] + 0x00000020u;
    mem_w32(ram, c->r[30] + 0x00000030u, c->r[2]);
L_08831ba4:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000014u);
    mem_w32(ram, c->r[30] + 0x00000038u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000038u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = ((s32)c->r[2] < (s32)c->r[3]) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_08831bcc; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    mem_w32(ram, c->r[30] + 0x00000038u, c->r[2]);
L_08831bcc:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000034u);
    c->r[3] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000030u);
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x00000000u);
    c->r[3] = c->r[3] - c->r[2];
    c->f[0] = u2f(c->r[3]);
    c->f[0] = (f32)(s32)f2u(c->f[0]);
    mem_wf32(ram, c->r[30] + 0x0000003cu, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000034u);
    c->r[3] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x00000002u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000030u);
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x00000002u);
    c->r[3] = c->r[3] - c->r[2];
    c->f[0] = u2f(c->r[3]);
    c->f[0] = (f32)(s32)f2u(c->f[0]);
    mem_wf32(ram, c->r[30] + 0x00000040u, c->f[0]);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000014u);
    c->f[1] = (f32)(s32)f2u(c->f[0]);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x0000003cu);
    c->f[0] = c->f[0] / c->f[1];
    mem_wf32(ram, c->r[30] + 0x0000003cu, c->f[0]);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000014u);
    c->f[1] = (f32)(s32)f2u(c->f[0]);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000040u);
    c->f[0] = c->f[0] / c->f[1];
    mem_wf32(ram, c->r[30] + 0x00000040u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000030u);
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x00000000u);
    c->f[0] = u2f(c->r[2]);
    c->f[2] = (f32)(s32)f2u(c->f[0]);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000038u);
    c->f[1] = (f32)(s32)f2u(c->f[0]);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x0000003cu);
    c->f[0] = c->f[1] * c->f[0];
    c->f[0] = c->f[2] + c->f[0];
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    c->r[2] = f2u(c->f[0]);
    mem_w16(ram, c->r[30] + 0x00000050u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000030u);
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x00000002u);
    c->f[0] = u2f(c->r[2]);
    c->f[2] = (f32)(s32)f2u(c->f[0]);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000038u);
    c->f[1] = (f32)(s32)f2u(c->f[0]);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000040u);
    c->f[0] = c->f[1] * c->f[0];
    c->f[0] = c->f[2] + c->f[0];
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    c->r[2] = f2u(c->f[0]);
    mem_w16(ram, c->r[30] + 0x00000052u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08a50000u;
    c->r[2] = c->r[2] + 0x00002decu;
    c->r[2] = c->r[3] + c->r[2];
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000003u);
    c->r[2] = mem_r16(ram, c->r[30] + 0x00000050u);
    c->r[2] = c->r[2] + c->r[3];
    mem_w16(ram, c->r[30] + 0x00000050u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08a50000u;
    c->r[2] = c->r[2] + 0x00002decu;
    c->r[2] = c->r[3] + c->r[2];
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000004u);
    c->r[2] = mem_r16(ram, c->r[30] + 0x00000052u);
    c->r[2] = c->r[2] + c->r[3];
    mem_w16(ram, c->r[30] + 0x00000052u, c->r[2]);
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
    c->r[6] = c->r[30] + 0x00000050u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08a50000u;
    c->r[2] = c->r[2] + 0x00002df4u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00001924u);
    c->f[12] = mem_rf32(ram, c->r[2] + 0x00000000u);
    { c->r[31] = 0x08831d58u; c->f[13] = c->f[0]; func_08939c88(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x00000014u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = ((s32)c->r[2] < (s32)c->r[3]) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_08831d7c; }
    c->r[2] = 0u + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000060u, c->r[2]); goto L_08831d80; }
L_08831d7c:
    mem_w32(ram, c->r[30] + 0x00000060u, 0u);
L_08831d80:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000060u);
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000074u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000070u);
    { c->r[29] = c->r[29] + 0x00000080u; return; }
    return; /* fell out of func_08831aac */
}

/* func_08833a08  0x08833a08..0x08833c98  656 bytes, source=fde */
void func_08833a08(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08833a08u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[2] + 0x00000008u;
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x08833a34u; c->r[5] = 0u + 0u; func_0893b904(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[2] + 0x00000008u;
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x08833a48u; c->r[5] = 0u + 0u; func_089385f4(c, ram); }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000004u);
    { c->r[31] = 0x08833a54u; c->r[5] = 0u + 0u; func_0882f514(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[2] + 0x00000008u;
    { c->r[31] = 0x08833a64u; c->r[4] = c->r[2] + 0u; func_08938064(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[2] + 0x00000008u;
    { c->r[31] = 0x08833a74u; c->r[4] = c->r[2] + 0u; func_08938218(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[2] + 0x00000008u;
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0u + 0xffffffffu;
    { c->r[31] = 0x08833a8cu; c->r[6] = 0u + 0u; func_0893a73c(c, ram); }
    { c->r[31] = 0x08833a94u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000004u); func_08830474(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x0000002bu);
    { int _c = (c->r[2] != 0u); if (_c) goto L_08833ab4; }
    { c->r[31] = 0x08833aacu; c->r[4] = mem_r32(ram, c->r[30] + 0x00000004u); func_08832370(c, ram); }
    { mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]); goto L_08833c3c; }
L_08833ab4:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x0000002bu);
    c->r[2] = 0u + 0x00000001u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_08833ad8; }
    { c->r[31] = 0x08833ad0u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000004u); func_088323d8(c, ram); }
    { mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]); goto L_08833c3c; }
L_08833ad8:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x0000002bu);
    c->r[2] = 0u + 0x00000002u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_08833afc; }
    { c->r[31] = 0x08833af4u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000004u); func_08832474(c, ram); }
    { mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]); goto L_08833c3c; }
L_08833afc:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x0000002bu);
    c->r[2] = 0u + 0x00000003u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_08833b20; }
    { c->r[31] = 0x08833b18u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000004u); func_08832580(c, ram); }
    { mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]); goto L_08833c3c; }
L_08833b20:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x0000002bu);
    c->r[2] = 0u + 0x00000004u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_08833b44; }
    { c->r[31] = 0x08833b3cu; c->r[4] = mem_r32(ram, c->r[30] + 0x00000004u); func_08832614(c, ram); }
    { mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]); goto L_08833c3c; }
L_08833b44:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x0000002bu);
    c->r[2] = 0u + 0x00000005u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_08833b68; }
    { c->r[31] = 0x08833b60u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000004u); func_08832644(c, ram); }
    { mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]); goto L_08833c3c; }
L_08833b68:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x0000002bu);
    c->r[2] = 0u + 0x00000006u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_08833b8c; }
    { c->r[31] = 0x08833b84u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000004u); func_088326ac(c, ram); }
    { mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]); goto L_08833c3c; }
L_08833b8c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x0000002bu);
    c->r[2] = 0u + 0x00000007u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_08833bb0; }
    { c->r[31] = 0x08833ba8u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000004u); func_08832808(c, ram); }
    { mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]); goto L_08833c3c; }
L_08833bb0:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x0000002bu);
    c->r[2] = 0u + 0x00000008u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_08833bd4; }
    { c->r[31] = 0x08833bccu; c->r[4] = mem_r32(ram, c->r[30] + 0x00000004u); func_08832868(c, ram); }
    { mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]); goto L_08833c3c; }
L_08833bd4:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x0000002bu);
    c->r[2] = 0u + 0x00000009u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_08833bf8; }
    { c->r[31] = 0x08833bf0u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000004u); func_088328f8(c, ram); }
    { mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]); goto L_08833c3c; }
L_08833bf8:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x0000002bu);
    c->r[2] = 0u + 0x0000000au;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_08833c1c; }
    { c->r[31] = 0x08833c14u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000004u); func_08832ab8(c, ram); }
    { mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]); goto L_08833c3c; }
L_08833c1c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x0000002bu);
    c->r[2] = 0u + 0x0000000bu;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_08833c3c; }
    { c->r[31] = 0x08833c38u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000004u); func_08832b20(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]);
L_08833c3c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_08833c84; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x0000002cu);
    c->r[2] = 0u + 0x00000003u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_08833c78; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[2] + 0x00000008u;
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x08833c70u; c->r[5] = 0u + 0x00000009u; func_08937a50(c, ram); }
    { goto L_08833c84; }
L_08833c78:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = 0u + 0x00000002u;
    mem_w8(ram, c->r[3] + 0x0000002cu, c->r[2]);
L_08833c84:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_08833a08 */
}

/* func_08835ed8  0x08835ed8..0x08835f7c  164 bytes, source=fde */
void func_08835ed8(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08835ed8u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x0000002au);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 3;
    c->r[2] = 0x08a50000u;
    c->r[2] = c->r[2] + 0x00002f0cu;
    c->r[2] = c->r[3] + c->r[2];
    mem_w32(ram, c->r[4] + 0x00000024u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000014u);
    c->r[2] = ((s32)c->r[2] < (s32)0x0000001fu) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_08835f40; }
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00002e04u;
    c->r[5] = 0u + 0x0000000au;
    { c->r[31] = 0x08835f40u; c->r[6] = 0u + 0u; func_08813280(c, ram); }
L_08835f40:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000029u);
    mem_w8(ram, c->r[3] + 0x00000011u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r8(ram, c->r[2] + 0x0000002au);
    mem_w8(ram, c->r[3] + 0x00000012u, c->r[2]);
    { c->r[31] = 0x08835f68u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u); func_08835aa0(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_08835ed8 */
}

/* func_0883aa2c  0x0883aa2c..0x0883ab40  276 bytes, source=fde */
void func_0883aa2c(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0883aa2cu);
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
    c->r[5] = c->r[5] + 0x00001cb8u;
    c->r[6] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[7] = mem_r32(ram, c->r[30] + 0x0000000cu);
    { c->r[31] = 0x0883ab2cu; c->r[8] = mem_r32(ram, c->r[30] + 0x00000008u); func_08a1ad34(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000024u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000020u);
    { c->r[29] = c->r[29] + 0x00000030u; return; }
    return; /* fell out of func_0883aa2c */
}

/* func_0883cf2c  0x0883cf2c..0x0883d014  232 bytes, source=fde */
void func_0883cf2c(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0883cf2cu);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_0883cf58; }
    { goto L_0883d000; }
L_0883cf58:
    c->r[3] = 0x08a80000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00004e10u);
    c->r[2] = 0u + 0x00000001u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_0883cf90; }
    c->r[2] = 0u + 0x00000002u;
    c->r[1] = 0x08a80000u;
    mem_w32(ram, c->r[1] + 0x00004e24u, c->r[2]);
    c->r[1] = 0x08a80000u;
    mem_w32(ram, c->r[1] + 0x00004e28u, 0u);
    c->r[2] = 0x08a80000u;
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000e29u);
    c->r[1] = 0x08a80000u;
    mem_w32(ram, c->r[1] + 0x00004e2cu, c->r[2]);
L_0883cf90:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x0883cf9cu; c->r[5] = 0u + 0u; func_08901e54(c, ram); }
    c->r[2] = 0x08a80000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00004e14u);
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]);
    c->r[2] = 0u + 0x00000001u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_0883cfd0; }
    c->r[2] = 0u + 0x00000002u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_0883cfec; }
    { goto L_0883d000; }
L_0883cfd0:
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00004e10u;
    c->r[5] = 0x08840000u;
    { c->r[31] = 0x0883cfe4u; c->r[5] = c->r[5] + 0xffffd0b0u; func_0880f03c(c, ram); }
    { goto L_0883d000; }
L_0883cfec:
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00004e10u;
    c->r[5] = 0x08900000u;
    { c->r[31] = 0x0883d000u; c->r[5] = c->r[5] + 0x00002cacu; func_0880f03c(c, ram); }
L_0883d000:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_0883cf2c */
}

/* func_08846280  0x08846280..0x08846318  152 bytes, source=sweep */
void func_08846280(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08846280u);
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
    c->r[6] = c->r[2] + 0x000003c0u;
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
    c->r[3] = mem_r8(ram, c->r[2] + 0x00000005u);
    c->r[2] = mem_r8(ram, c->r[30] + 0x00000006u);
    c->r[2] = c->r[3] | c->r[2];
    mem_w8(ram, c->r[6] + 0x00000005u, c->r[2]);
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_08846280 */
}

/* func_0884bb50  0x0884bb50..0x0884bda8  600 bytes, source=fde */
void func_0884bb50(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0884bb50u);
    c->r[29] = c->r[29] + 0xffffffc0u;
    mem_w32(ram, c->r[29] + 0x00000034u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000030u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = 0u | 0xffffu;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_0884bc78; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = 0u + 0x00000001u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_0884bc78; }
    c->r[2] = 0x08a80000u;
    c->r[2] = c->r[2] + 0x00007740u;
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
    c->r[2] = 0u + 0x0000001fu;
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = 0u + 0xffffffffu;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_0884bc78; }
L_0884bbb4:
    c->r[4] = mem_r32(ram, c->r[30] + 0x0000000cu);
    { c->r[31] = 0x0884bbc0u; func_0884beac(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x00000070u;
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = c->r[2] + 0xffffffffu;
    c->r[3] = c->r[2] + 0u;
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[3]);
    c->r[2] = 0u + 0xffffffffu;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_0884bbb4; }
    { goto L_0884bc78; }
    mem_w32(ram, c->r[30] + 0x00000018u, c->r[4]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_0884bc64; }
    c->r[3] = 0u + 0x0000001fu;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[3] = c->r[3] - c->r[2];
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 3;
    c->r[2] = c->r[2] - c->r[3];
    c->r[3] = c->r[2] << 4;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[3] = c->r[3] + c->r[2];
    mem_w32(ram, c->r[30] + 0x0000001cu, c->r[3]);
L_0884bc30:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000001cu);
    { int _c = (c->r[2] != c->r[3]); if (_c) goto L_0884bc48; }
    { goto L_0884bc64; }
L_0884bc48:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = c->r[2] + 0xffffff90u;
    mem_w32(ram, c->r[30] + 0x0000001cu, c->r[2]);
    { c->r[31] = 0x0884bc5cu; c->r[4] = mem_r32(ram, c->r[30] + 0x0000001cu); func_0884beec(c, ram); }
    { goto L_0884bc30; }
L_0884bc64:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000014u);
    mem_w32(ram, c->r[30] + 0x00000018u, c->r[3]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000018u);
    { c->r[31] = 0x0884bc78u; func_08a163b0(c, ram); }
L_0884bc78:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = 0u | 0xffffu;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_0884bca4; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = 0u + 0x00000001u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_0884bca4; }
    c->r[4] = 0x08a90000u;
    { c->r[31] = 0x0884bca4u; c->r[4] = c->r[4] + 0xffff8540u; func_0884bda8(c, ram); }
L_0884bca4:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = 0u | 0xffffu;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_0884bcd0; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = 0u + 0x00000001u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_0884bcd0; }
    c->r[4] = 0x08a90000u;
    { c->r[31] = 0x0884bcd0u; c->r[4] = c->r[4] + 0xffff89b0u; func_08808260(c, ram); }
L_0884bcd0:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = 0u | 0xffffu;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_0884bcfc; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = 0u + 0x00000001u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_0884bcfc; }
    c->r[4] = 0x08a90000u;
    { c->r[31] = 0x0884bcfcu; c->r[4] = c->r[4] + 0xffff89f0u; func_0884d0f8(c, ram); }
L_0884bcfc:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = 0u | 0xffffu;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_0884bd24; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_0884bd24; }
    c->r[4] = 0x08a90000u;
    { c->r[31] = 0x0884bd24u; c->r[4] = c->r[4] + 0xffff89f0u; func_0884d178(c, ram); }
L_0884bd24:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = 0u | 0xffffu;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_0884bd94; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_0884bd94; }
    c->r[2] = 0x08a80000u;
    c->r[2] = c->r[2] + 0x00007740u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_0884bd94; }
    c->r[2] = 0x08a90000u;
    c->r[2] = c->r[2] + 0xffff8540u;
    mem_w32(ram, c->r[30] + 0x00000020u, c->r[2]);
L_0884bd5c:
    c->r[2] = 0x08a80000u;
    c->r[2] = c->r[2] + 0x00007740u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000020u);
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_0884bd78; }
    { goto L_0884bd94; }
L_0884bd78:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[2] = c->r[2] + 0xffffff90u;
    mem_w32(ram, c->r[30] + 0x00000020u, c->r[2]);
    { c->r[31] = 0x0884bd8cu; c->r[4] = mem_r32(ram, c->r[30] + 0x00000020u); func_0884beec(c, ram); }
    { goto L_0884bd5c; }
L_0884bd94:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000034u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000030u);
    { c->r[29] = c->r[29] + 0x00000040u; return; }
    return; /* fell out of func_0884bb50 */
}

/* func_0884d22c  0x0884d22c..0x0884d26c  64 bytes, source=sweep */
void func_0884d22c(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0884d22cu);
    c->r[29] = c->r[29] + 0xfffffff0u;
    mem_w32(ram, c->r[29] + 0x00000004u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000000u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    { c->r[31] = 0x0884d244u; func_0883a25c(c, ram); }
    c->f[0] = u2f(c->r[2]);
    c->f[0] = (f32)(s32)f2u(c->f[0]);
    c->r[1] = 0x08a40000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0x00002648u);
    c->f[0] = c->f[0] * c->f[1];
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000004u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000000u);
    { c->r[29] = c->r[29] + 0x00000010u; return; }
    return; /* fell out of func_0884d22c */
}

/* func_0885028c  0x0885028c..0x08850398  268 bytes, source=fde */
void func_0885028c(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0885028cu);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    { int _c = ((s32)c->r[2] >= 0); if (_c) goto L_088502b4; }
    { goto L_08850384; }
L_088502b4:
    c->r[2] = 0x08a90000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0xffff8b30u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_088502e8; }
    c->r[2] = mem_r8(ram, c->r[30] + 0x00000000u);
    mem_w8(ram, c->r[30] + 0x00000004u, c->r[2]);
    c->r[2] = c->r[30] + 0x00000004u;
    c->r[4] = 0x08a80000u;
    c->r[4] = mem_r32(ram, c->r[4] + 0x00002ed8u);
    c->r[5] = 0u + 0x00000015u;
    c->r[6] = c->r[2] + 0u;
    { c->r[31] = 0x088502e8u; c->r[7] = 0u + 0x00000001u; func_0884f888(c, ram); }
L_088502e8:
    c->r[2] = 0x08a90000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0xffff8b34u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_08850384; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = 0u + 0xffffff00u;
    c->r[2] = c->r[2] & c->r[3];
    { int _c = (c->r[2] == 0u); if (_c) goto L_08850318; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    { mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]); goto L_08850348; }
L_08850318:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = 0u + 0x000000ffu;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_08850338; }
    { c->r[31] = 0x08850330u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u); func_0884d790(c, ram); }
    { mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]); goto L_08850340; }
L_08850338:
    c->r[2] = 0u + 0xffffffffu;
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
L_08850340:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]);
L_08850348:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000000u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_08850368; }
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0xffffc930u;
    { c->r[31] = 0x08850368u; c->r[5] = mem_r32(ram, c->r[30] + 0x00000008u); func_089f73a0(c, ram); }
L_08850368:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = 0u + 0xffffff00u;
    c->r[2] = c->r[2] & c->r[3];
    { int _c = (c->r[2] != 0u); if (_c) goto L_08850384; }
    { c->r[31] = 0x08850384u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u); func_0884d714(c, ram); }
L_08850384:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_0885028c */
}

/* func_08855bec  0x08855bec..0x08855dd4  488 bytes, source=fde */
void func_08855bec(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08855becu);
L_08855bec:
    c->r[29] = c->r[29] + 0xffffffc0u;
    mem_w32(ram, c->r[29] + 0x00000034u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000030u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    mem_wf32(ram, c->r[30] + 0x00000008u, c->f[12]);
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[6]);
    c->r[2] = 0x08a90000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0xffff8e44u);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000ac8u;
    { c->r[31] = 0x08855c24u; c->r[5] = c->r[2] + 0u; func_089cb820(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_08855d5c; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = c->r[2] + 0x000000e0u;
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000014u);
    c->r[2] = c->r[2] + 0xfffffff6u;
    mem_w32(ram, c->r[30] + 0x00000020u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[2] = c->r[3] & 0x00ffu;
    c->r[2] = (c->r[2] < 0x00000014u) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_08855c88; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[2] = c->r[3] & 0x00ffu;
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08a40000u;
    c->r[2] = c->r[2] + 0x00002af0u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    { u32 _t = c->r[2]; switch (_t) { case 0x08855becu: goto L_08855bec; case 0x08855c88u: goto L_08855c88; case 0x08855c9cu: goto L_08855c9c; case 0x08855cb0u: goto L_08855cb0; case 0x08855cc4u: goto L_08855cc4; default: recomp_trap_unknown_indirect(c, ram, 0x08855c80u, _t); return; } }
L_08855c88:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000010u);
    { c->r[31] = 0x08855c94u; c->r[5] = mem_r32(ram, c->r[30] + 0x00000014u); func_088572e4(c, ram); }
    { goto L_08855dc0; }
L_08855c9c:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000010u);
    { c->r[31] = 0x08855ca8u; c->r[5] = mem_r32(ram, c->r[30] + 0x00000014u); func_08856a30(c, ram); }
    { goto L_08855dc0; }
L_08855cb0:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000010u);
    { c->r[31] = 0x08855cbcu; c->r[5] = mem_r32(ram, c->r[30] + 0x00000014u); func_08856a68(c, ram); }
    { goto L_08855dc0; }
L_08855cc4:
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000ac8u;
    { c->r[31] = 0x08855cd4u; c->r[5] = mem_r32(ram, c->r[30] + 0x00000010u); func_089cb780(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]);
    c->r[2] = c->r[30] + 0x00000018u;
    c->r[4] = 0x08a90000u;
    c->r[4] = c->r[4] + 0xffff8e40u;
    { c->r[31] = 0x08855cecu; c->r[5] = c->r[2] + 0u; func_0885a23c(c, ram); }
    { int _c = (c->r[2] == 0u); if (_c) goto L_08855d14; }
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000ac8u;
    { c->r[31] = 0x08855d04u; c->r[5] = mem_r32(ram, c->r[30] + 0x00000010u); func_089cb780(c, ram); }
    mem_w32(ram, c->r[30] + 0x0000001cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[1] = 0x08a90000u;
    mem_w32(ram, c->r[1] + 0xffff8e40u, c->r[2]);
L_08855d14:
    { c->r[31] = 0x08855d1cu; func_08853648(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = c->r[30] + 0x00000008u;
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = c->r[2] + 0u;
    c->r[6] = c->r[3] + 0u;
    { c->r[31] = 0x08855d38u; c->r[7] = 0u + 0u; func_08857638(c, ram); }
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000008u);
    c->f[0] = c->f[0] + c->f[0];
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->f[12] = c->f[0];
    { c->r[31] = 0x08855d54u; c->r[6] = mem_r32(ram, c->r[30] + 0x0000000cu); func_08854d5c(c, ram); }
    { goto L_08855dc0; }
L_08855d5c:
    c->r[2] = 0x08a90000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0xffff8e40u);
    c->r[3] = 0u + 0xfffff000u;
    c->r[2] = c->r[2] & c->r[3];
    { int _c = (c->r[2] == 0u); if (_c) goto L_08855d90; }
    c->r[2] = 0x08a90000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0xffff8e40u);
    c->r[3] = 0u + 0u;
    c->r[2] = alx_ins(c->r[2], c->r[3], 12u, 31u);
    c->r[1] = 0x08a90000u;
    { c->r[31] = 0x08855d90u; mem_w32(ram, c->r[1] + 0xffff8e40u, c->r[2]); func_0885b09c(c, ram); }
L_08855d90:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->f[12] = mem_rf32(ram, c->r[30] + 0x00000008u);
    { c->r[31] = 0x08855da4u; c->r[6] = 0u + 0x00000003u; func_08855dd4(c, ram); }
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0u + 0x00000004u;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_08855dc0; }
    c->r[2] = 0u + 0x00000001u;
    c->r[1] = 0x08a90000u;
    mem_w32(ram, c->r[1] + 0xffff90c8u, c->r[2]);
L_08855dc0:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000034u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000030u);
    { c->r[29] = c->r[29] + 0x00000040u; return; }
    return; /* fell out of func_08855bec */
}

/* func_08859dc4  0x08859dc4..0x08859e30  108 bytes, source=sweep */
void func_08859dc4(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08859dc4u);
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
    { c->r[31] = 0x08859e00u; c->r[5] = c->r[2] + 0u; func_08859d48(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = c->r[2] >> 24;
    c->r[2] = 0x58000000u;
    c->r[2] = c->r[3] | c->r[2];
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x08859e1cu; c->r[5] = c->r[2] + 0u; func_08859d48(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_08859dc4 */
}

/* func_0885aa94  0x0885aa94..0x0885aae0  76 bytes, source=sweep */
void func_0885aa94(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0885aa94u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000004u);
    c->r[2] = mem_r16(ram, c->r[2] + 0x00000000u);
    mem_w16(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000004u);
    c->r[2] = c->r[2] + 0x00000002u;
    mem_w32(ram, c->r[3] + 0x00000004u, c->r[2]);
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_0885aa94 */
}

/* func_0885d4e8  0x0885d4e8..0x0885d558  112 bytes, source=sweep */
void func_0885d4e8(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0885d4e8u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[4] = mem_r32(ram, c->r[2] + 0x0000001cu);
    c->r[2] = mem_r32(ram, c->r[3] + 0x00000018u);
    c->r[2] = (c->r[2] < c->r[4]) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_0885d51c; }
    { mem_w32(ram, c->r[30] + 0x00000008u, 0u); goto L_0885d544; }
L_0885d51c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000001cu);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000001cu);
    c->r[2] = c->r[2] + 0xfffff880u;
    mem_w32(ram, c->r[3] + 0x0000001cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]);
L_0885d544:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_0885d4e8 */
}

/* func_08861cf0  0x08861cf0..0x08861d34  68 bytes, source=sweep */
void func_08861cf0(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08861cf0u);
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
    { c->r[31] = 0x08861d20u; c->r[5] = c->r[2] + 0u; func_08861028(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_08861cf0 */
}

/* func_08862e24  0x08862e24..0x08862e6c  72 bytes, source=sweep */
void func_08862e24(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08862e24u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    c->r[2] = 0x08a90000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0xffffb940u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_08862e48; }
    { mem_w32(ram, c->r[30] + 0x00000000u, 0u); goto L_08862e58; }
L_08862e48:
    c->r[2] = 0x08a90000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0xffffb940u);
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x00000016u);
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[2]);
L_08862e58:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_08862e24 */
}

/* func_08867860  0x08867860..0x088678f8  152 bytes, source=sweep */
void func_08867860(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08867860u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000000u);
    c->f[0] = mem_rf32(ram, c->r[3] + 0x00000000u);
    c->f[0] = c->f[1] - c->f[0];
    mem_wf32(ram, c->r[4] + 0x00000000u, c->f[0]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000004u);
    c->f[0] = mem_rf32(ram, c->r[3] + 0x00000004u);
    c->f[0] = c->f[1] - c->f[0];
    mem_wf32(ram, c->r[4] + 0x00000004u, c->f[0]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000008u);
    c->f[0] = mem_rf32(ram, c->r[3] + 0x00000008u);
    c->f[0] = c->f[1] - c->f[0];
    mem_wf32(ram, c->r[4] + 0x00000008u, c->f[0]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x0000000cu);
    c->f[0] = mem_rf32(ram, c->r[3] + 0x0000000cu);
    c->f[0] = c->f[1] - c->f[0];
    mem_wf32(ram, c->r[4] + 0x0000000cu, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_08867860 */
}

/* func_0886f540  0x0886f540..0x0886f6f8  440 bytes, source=residue */
void func_0886f540(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0886f540u);
    c->r[29] = c->r[29] + 0xffffffb0u;
    mem_w32(ram, c->r[29] + 0x00000044u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000040u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00003510u);
    mem_wf32(ram, c->r[2] + 0x0000000cu, c->f[0]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x0886f578u; c->r[6] = mem_r32(ram, c->r[30] + 0x00000004u); func_0884c26c(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000000u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00003514u);
    c->f[0] = c->f[1] * c->f[0];
    { c->r[31] = 0x0886f59cu; c->f[12] = c->f[0]; func_08a136f8(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]);
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[3]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x0886f5b0u; c->f[12] = mem_rf32(ram, c->r[2] + 0x0000000cu); func_08a136f8(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]);
    mem_w32(ram, c->r[30] + 0x0000001cu, c->r[3]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[5] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[6] = 0u + 0u;
    { c->r[31] = 0x0886f5ccu; c->r[7] = 0u + 0u; func_08a1429c(c, ram); }
    { int _c = ((s32)c->r[2] >= 0); if (_c) goto L_0886f5e8; }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000018u);
    { c->r[31] = 0x0886f5e0u; c->r[5] = mem_r32(ram, c->r[30] + 0x0000001cu); func_08a14510(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]);
    mem_w32(ram, c->r[30] + 0x0000001cu, c->r[3]);
L_0886f5e8:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[6] = mem_r32(ram, c->r[30] + 0x00000018u);
    { c->r[31] = 0x0886f5fcu; c->r[7] = mem_r32(ram, c->r[30] + 0x0000001cu); func_08a13ee0(c, ram); }
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x0886f608u; c->r[5] = c->r[3] + 0u; func_08a14588(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    mem_wf32(ram, c->r[2] + 0x00000000u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    mem_w32(ram, c->r[30] + 0x00000020u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000004u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00003518u);
    c->f[0] = c->f[1] * c->f[0];
    { c->r[31] = 0x0886f634u; c->f[12] = c->f[0]; func_08a136f8(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000028u, c->r[2]);
    mem_w32(ram, c->r[30] + 0x0000002cu, c->r[3]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x0886f648u; c->f[12] = mem_rf32(ram, c->r[2] + 0x0000000cu); func_08a136f8(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000030u, c->r[2]);
    mem_w32(ram, c->r[30] + 0x00000034u, c->r[3]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000030u);
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000034u);
    c->r[6] = 0u + 0u;
    { c->r[31] = 0x0886f664u; c->r[7] = 0u + 0u; func_08a1429c(c, ram); }
    { int _c = ((s32)c->r[2] >= 0); if (_c) goto L_0886f680; }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000030u);
    { c->r[31] = 0x0886f678u; c->r[5] = mem_r32(ram, c->r[30] + 0x00000034u); func_08a14510(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000030u, c->r[2]);
    mem_w32(ram, c->r[30] + 0x00000034u, c->r[3]);
L_0886f680:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000028u);
    c->r[5] = mem_r32(ram, c->r[30] + 0x0000002cu);
    c->r[6] = mem_r32(ram, c->r[30] + 0x00000030u);
    { c->r[31] = 0x0886f694u; c->r[7] = mem_r32(ram, c->r[30] + 0x00000034u); func_08a13ee0(c, ram); }
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x0886f6a0u; c->r[5] = c->r[3] + 0u; func_08a14588(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    mem_wf32(ram, c->r[2] + 0x00000004u, c->f[0]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000000u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00003514u);
    c->f[0] = c->f[1] + c->f[0];
    mem_wf32(ram, c->r[3] + 0x00000000u, c->f[0]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000004u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x0000351cu);
    c->f[0] = c->f[1] + c->f[0];
    mem_wf32(ram, c->r[3] + 0x00000004u, c->f[0]);
    c->r[2] = 0u + 0x00000001u;
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000044u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000040u);
    { c->r[29] = c->r[29] + 0x00000050u; return; }
    return; /* fell out of func_0886f540 */
}

/* func_08874aac  0x08874aac..0x08874ea0  1012 bytes, source=sweep */
void func_08874aac(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08874aacu);
    c->r[29] = c->r[29] + 0xfffffe90u;
    mem_w32(ram, c->r[29] + 0x00000164u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000160u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    mem_w32(ram, c->r[30] + 0x00000140u, c->r[6]);
    c->r[2] = c->r[30] + 0x00000010u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000140u);
    c->r[4] = c->r[2] + 0u;
    c->r[5] = c->r[3] + 0u;
    { c->r[31] = 0x08874ae0u; c->r[6] = 0u + 0x00000040u; func_08a19db8(c, ram); }
    c->r[2] = c->r[30] + 0x00000010u;
    mem_w32(ram, c->r[30] + 0x00000140u, c->r[2]);
    c->r[2] = c->r[30] + 0x00000050u;
    { c->r[31] = 0x08874af4u; c->r[4] = c->r[2] + 0u; func_08808260(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x000000f0u);
    mem_wf32(ram, c->r[30] + 0x00000090u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x000000f4u);
    mem_wf32(ram, c->r[30] + 0x00000094u, c->f[0]);
    c->r[2] = c->r[30] + 0x00000050u;
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0u + 0u;
    { c->r[31] = 0x08874b20u; c->r[6] = mem_r32(ram, c->r[30] + 0x00000140u); func_0884c668(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = c->r[2] + 0x00000140u;
    c->r[2] = mem_r32(ram, c->r[3] + 0x00000000u);
    mem_w32(ram, c->r[30] + 0x000000a0u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[3] + 0x00000004u);
    mem_w32(ram, c->r[30] + 0x000000a4u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[3] + 0x00000008u);
    mem_w32(ram, c->r[30] + 0x000000a8u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[3] + 0x0000000cu);
    mem_w32(ram, c->r[30] + 0x000000acu, c->r[2]);
    c->r[2] = c->r[30] + 0x000000a0u;
    c->r[3] = c->r[30] + 0x000000a0u;
    c->r[6] = c->r[30] + 0x00000050u;
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x08874b60u; c->r[5] = c->r[3] + 0u; func_0884c26c(c, ram); }
    c->f[1] = mem_rf32(ram, c->r[30] + 0x000000a8u);
    c->f[0] = u2f(0u);
    alx_c_cond_s(c, 2, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_08874e8c; }
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x08874b84u; c->r[4] = c->r[4] + 0x00000af4u; func_0880810c(c, ram); }
    { int _c = (c->r[2] == 0u); if (_c) goto L_08874c38; }
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x08874b98u; c->r[4] = c->r[4] + 0x00000af4u; func_0880810c(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = 0u + 0x00000001u;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_08874c38; }
    c->f[1] = mem_rf32(ram, c->r[30] + 0x000000a8u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000037bcu);
    alx_c_cond_s(c, 12, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_08874bcc; }
    { goto L_08874be0; }
L_08874bcc:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    mem_w32(ram, c->r[2] + 0x000000f0u, 0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    { mem_w32(ram, c->r[2] + 0x000000f4u, 0u); goto L_08874c8c; }
L_08874be0:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x000000a4u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x000000a8u);
    c->f[1] = c->f[1] / c->f[0];
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000090u);
    c->f[1] = c->f[1] + c->f[0];
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000037c0u);
    c->f[0] = c->f[1] * c->f[0];
    mem_wf32(ram, c->r[2] + 0x000000f0u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x000000a0u);
    c->f[1] = -c->f[0];
    c->f[0] = mem_rf32(ram, c->r[30] + 0x000000a8u);
    c->f[1] = c->f[1] / c->f[0];
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000094u);
    c->f[1] = c->f[1] + c->f[0];
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000037c0u);
    c->f[0] = c->f[1] * c->f[0];
    { mem_wf32(ram, c->r[2] + 0x000000f4u, c->f[0]); goto L_08874c8c; }
L_08874c38:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x000000a4u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x000000a8u);
    c->f[1] = c->f[1] / c->f[0];
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000090u);
    c->f[1] = c->f[1] + c->f[0];
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000037c0u);
    c->f[0] = c->f[1] * c->f[0];
    mem_wf32(ram, c->r[2] + 0x000000f0u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x000000a0u);
    c->f[1] = -c->f[0];
    c->f[0] = mem_rf32(ram, c->r[30] + 0x000000a8u);
    c->f[1] = c->f[1] / c->f[0];
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000094u);
    c->f[1] = c->f[1] + c->f[0];
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000037c0u);
    c->f[0] = c->f[1] * c->f[0];
    mem_wf32(ram, c->r[2] + 0x000000f4u, c->f[0]);
L_08874c8c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x000000a4u);
    c->f[0] = -c->f[0];
    mem_wf32(ram, c->r[30] + 0x000000a8u, c->f[0]);
    c->r[2] = c->r[30] + 0x000000b0u;
    { c->r[31] = 0x08874ca8u; c->r[4] = c->r[2] + 0u; func_08808240(c, ram); }
    c->r[2] = c->r[30] + 0x000000c0u;
    { c->r[31] = 0x08874cb4u; c->r[4] = c->r[2] + 0u; func_08808260(c, ram); }
    c->r[2] = c->r[30] + 0x00000100u;
    { c->r[31] = 0x08874cc0u; c->r[4] = c->r[2] + 0u; func_08808260(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000048u);
    c->r[1] = 0x08a80000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00002e40u);
    c->f[1] = c->f[1] * c->f[0];
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x000000f0u);
    c->f[0] = c->f[1] * c->f[0];
    mem_wf32(ram, c->r[30] + 0x000000b0u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x0000005cu);
    c->r[1] = 0x08a80000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00002e40u);
    c->f[1] = c->f[1] * c->f[0];
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x000000f4u);
    c->f[0] = c->f[1] * c->f[0];
    mem_wf32(ram, c->r[30] + 0x000000b4u, c->f[0]);
    mem_w32(ram, c->r[30] + 0x000000b8u, 0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x08874d18u; c->f[12] = mem_rf32(ram, c->r[2] + 0x000000f0u); func_08a136f8(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000148u, c->r[2]);
    mem_w32(ram, c->r[30] + 0x0000014cu, c->r[3]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000148u);
    c->r[5] = mem_r32(ram, c->r[30] + 0x0000014cu);
    c->r[6] = 0u + 0u;
    { c->r[31] = 0x08874d34u; c->r[7] = 0u + 0u; func_08a1429c(c, ram); }
    { int _c = ((s32)c->r[2] >= 0); if (_c) goto L_08874d50; }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000148u);
    { c->r[31] = 0x08874d48u; c->r[5] = mem_r32(ram, c->r[30] + 0x0000014cu); func_08a14510(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000148u, c->r[2]);
    mem_w32(ram, c->r[30] + 0x0000014cu, c->r[3]);
L_08874d50:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000148u);
    c->r[5] = mem_r32(ram, c->r[30] + 0x0000014cu);
    c->r[6] = 0x08a40000u;
    c->r[6] = mem_r32(ram, c->r[6] + 0x000037c8u);
    c->r[7] = 0x08a40000u;
    { c->r[31] = 0x08874d6cu; c->r[7] = mem_r32(ram, c->r[7] + 0x000037ccu); func_08a14324(c, ram); }
    { int _c = ((s32)c->r[2] < 0); if (_c) goto L_08874d7c; }
    { goto L_08874d90; }
L_08874d7c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x000000f0u);
    mem_wf32(ram, c->r[30] + 0x000000b0u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    mem_w32(ram, c->r[2] + 0x000000f0u, 0u);
L_08874d90:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x08874d9cu; c->f[12] = mem_rf32(ram, c->r[2] + 0x000000f4u); func_08a136f8(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000150u, c->r[2]);
    mem_w32(ram, c->r[30] + 0x00000154u, c->r[3]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000150u);
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000154u);
    c->r[6] = 0u + 0u;
    { c->r[31] = 0x08874db8u; c->r[7] = 0u + 0u; func_08a1429c(c, ram); }
    { int _c = ((s32)c->r[2] >= 0); if (_c) goto L_08874dd4; }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000150u);
    { c->r[31] = 0x08874dccu; c->r[5] = mem_r32(ram, c->r[30] + 0x00000154u); func_08a14510(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000150u, c->r[2]);
    mem_w32(ram, c->r[30] + 0x00000154u, c->r[3]);
L_08874dd4:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000150u);
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000154u);
    c->r[6] = 0x08a40000u;
    c->r[6] = mem_r32(ram, c->r[6] + 0x000037c8u);
    c->r[7] = 0x08a40000u;
    { c->r[31] = 0x08874df0u; c->r[7] = mem_r32(ram, c->r[7] + 0x000037ccu); func_08a14324(c, ram); }
    { int _c = ((s32)c->r[2] < 0); if (_c) goto L_08874e00; }
    { goto L_08874e14; }
L_08874e00:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x000000f4u);
    mem_wf32(ram, c->r[30] + 0x000000b4u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    mem_w32(ram, c->r[2] + 0x000000f4u, 0u);
L_08874e14:
    c->r[2] = c->r[30] + 0x000000c0u;
    { c->r[31] = 0x08874e20u; c->r[4] = c->r[2] + 0u; func_08808280(c, ram); }
    c->r[2] = c->r[30] + 0x000000c0u;
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x08874e30u; c->f[12] = mem_rf32(ram, c->r[30] + 0x000000b4u); func_0884c858(c, ram); }
    c->r[2] = c->r[30] + 0x00000100u;
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x08874e40u; c->f[12] = mem_rf32(ram, c->r[30] + 0x000000b0u); func_0884c7c0(c, ram); }
    c->r[2] = c->r[30] + 0x000000c0u;
    c->r[3] = c->r[30] + 0x00000100u;
    c->r[6] = c->r[30] + 0x000000c0u;
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x08874e58u; c->r[5] = c->r[3] + 0u; func_0884c6d4(c, ram); }
    c->r[2] = c->r[30] + 0x000000a0u;
    c->r[3] = c->r[30] + 0x000000a0u;
    c->r[6] = c->r[30] + 0x000000c0u;
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x08874e70u; c->r[5] = c->r[3] + 0u; func_0884c26c(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000140u;
    c->r[3] = c->r[30] + 0x000000a0u;
    c->r[4] = c->r[2] + 0u;
    c->r[5] = c->r[3] + 0u;
    { c->r[31] = 0x08874e8cu; c->r[6] = mem_r32(ram, c->r[30] + 0x00000140u); func_0884c26c(c, ram); }
L_08874e8c:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000164u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000160u);
    { c->r[29] = c->r[29] + 0x00000170u; return; }
    return; /* fell out of func_08874aac */
}

/* func_0887d7d0  0x0887d7d0..0x0887d8e8  280 bytes, source=indirect */
void func_0887d7d0(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0887d7d0u);
    c->r[29] = c->r[29] + 0xffffffd0u;
    mem_w32(ram, c->r[29] + 0x00000020u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[6]);
    mem_wf32(ram, c->r[30] + 0x0000000cu, c->f[12]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_0887d8d8; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x000000f8u);
    c->f[0] = u2f(0u);
    alx_c_cond_s(c, 2, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_0887d81c; }
    { goto L_0887d8d8; }
L_0887d81c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x0000000cu);
    c->f[0] = u2f(0u);
    alx_c_cond_s(c, 2, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) == 0u); if (_c) goto L_0887d844; }
    { goto L_0887d860; }
L_0887d844:
    c->f[0] = mem_rf32(ram, c->r[30] + 0x0000000cu);
    c->f[0] = (f32)fabsf(c->f[0]);
    mem_wf32(ram, c->r[30] + 0x00000014u, c->f[0]);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000014u);
    c->f[0] = -c->f[0];
    { mem_wf32(ram, c->r[30] + 0x00000014u, c->f[0]); goto L_0887d86c; }
L_0887d860:
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00003978u);
    mem_wf32(ram, c->r[30] + 0x00000014u, c->f[0]);
L_0887d86c:
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000014u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    mem_wf32(ram, c->r[2] + 0x000000f8u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x000000f8u);
    c->f[0] = u2f(0u);
    alx_c_cond_s(c, 12, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_0887d89c; }
    { goto L_0887d8bc; }
L_0887d89c:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x000000f8u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x0000397cu);
    c->f[0] = c->f[1] - c->f[0];
    { mem_wf32(ram, c->r[3] + 0x000000f8u, c->f[0]); goto L_0887d8d8; }
L_0887d8bc:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x000000f8u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x0000397cu);
    c->f[0] = c->f[1] + c->f[0];
    mem_wf32(ram, c->r[3] + 0x000000f8u, c->f[0]);
L_0887d8d8:
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000020u);
    { c->r[29] = c->r[29] + 0x00000030u; return; }
    return; /* fell out of func_0887d7d0 */
}

/* func_088820b0  0x088820b0..0x088820d4  36 bytes, source=sweep */
void func_088820b0(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x088820b0u);
    c->r[29] = c->r[29] + 0xfffffff0u;
    mem_w32(ram, c->r[29] + 0x00000000u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    c->r[2] = 0x08a90000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0xffffbef0u);
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000000u);
    { c->r[29] = c->r[29] + 0x00000010u; return; }
    return; /* fell out of func_088820b0 */
}

/* func_08886934  0x08886934..0x0888697c  72 bytes, source=fde */
void func_08886934(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08886934u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, 0u);
    c->r[2] = c->r[30] + 0x00000004u;
    c->r[4] = c->r[2] + 0u;
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[6] = 0u + 0u;
    { c->r[31] = 0x08886964u; c->r[7] = 0u + 0u; func_0888697c(c, ram); }
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000004u);
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_08886934 */
}

/* func_0888bcf8  0x0888bcf8..0x0888bd5c  100 bytes, source=sweep */
void func_0888bcf8(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0888bcf8u);
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
    { c->r[31] = 0x0888bd48u; c->r[5] = c->r[2] + 0u; func_0888b984(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_0888bcf8 */
}

/* func_0888c9e0  0x0888c9e0..0x0888ca48  104 bytes, source=sweep */
void func_0888c9e0(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0888c9e0u);
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
    { c->r[31] = 0x0888ca18u; c->r[5] = c->r[2] + 0u; func_0888b984(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[3] = c->r[2] >> 8;
    c->r[2] = 0x4b000000u;
    c->r[2] = c->r[3] | c->r[2];
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x0888ca34u; c->r[5] = c->r[2] + 0u; func_0888b984(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_0888c9e0 */
}

/* func_0888d554  0x0888d554..0x0888d720  460 bytes, source=sweep */
void func_0888d554(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0888d554u);
    c->r[29] = c->r[29] + 0xffffffd0u;
    mem_w32(ram, c->r[29] + 0x00000020u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_0888d57c; }
    { mem_w32(ram, c->r[30] + 0x00000010u, 0u); goto L_0888d70c; }
L_0888d57c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000000u);
    c->f[0] = u2f(0u);
    alx_c_cond_s(c, 12, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_0888d5c0; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000000u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00004040u);
    alx_c_cond_s(c, 12, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_0888d5c0; }
    { goto L_0888d5c8; }
L_0888d5c0:
    { mem_w32(ram, c->r[30] + 0x00000010u, 0u); goto L_0888d70c; }
L_0888d5c8:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000008u);
    c->f[0] = u2f(0u);
    alx_c_cond_s(c, 12, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_0888d60c; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000008u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00004040u);
    alx_c_cond_s(c, 12, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_0888d60c; }
    { goto L_0888d614; }
L_0888d60c:
    { mem_w32(ram, c->r[30] + 0x00000010u, 0u); goto L_0888d70c; }
L_0888d614:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000000u);
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    mem_wf32(ram, c->r[30] + 0x00000008u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000008u);
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    mem_wf32(ram, c->r[30] + 0x0000000cu, c->f[0]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = (u32)((s32)c->r[3] >> 31);
    c->r[2] = c->r[2] >> 17;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = (u32)((s32)c->r[2] >> 15);
    mem_w8(ram, c->r[4] + 0x00000004u, c->r[2]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = (u32)((s32)c->r[3] >> 31);
    c->r[2] = c->r[2] >> 17;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = (u32)((s32)c->r[2] >> 15);
    mem_w8(ram, c->r[4] + 0x00000005u, c->r[2]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000004u);
    c->r[3] = c->r[2] << 15;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[3] = c->r[2] - c->r[3];
    c->r[2] = (u32)((s32)c->r[3] >> 31);
    c->r[2] = c->r[2] >> 21;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = (u32)((s32)c->r[2] >> 11);
    mem_w8(ram, c->r[4] + 0x00000006u, c->r[2]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000005u);
    c->r[3] = c->r[2] << 15;
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = c->r[2] - c->r[3];
    c->r[2] = (u32)((s32)c->r[3] >> 31);
    c->r[2] = c->r[2] >> 21;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = (u32)((s32)c->r[2] >> 11);
    mem_w8(ram, c->r[4] + 0x00000007u, c->r[2]);
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
    c->r[2] = 0u + 0x00000001u;
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]);
L_0888d70c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000020u);
    { c->r[29] = c->r[29] + 0x00000030u; return; }
    return; /* fell out of func_0888d554 */
}

/* func_088908f0  0x088908f0..0x08890d70  1152 bytes, source=fde */
void func_088908f0(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x088908f0u);
    c->r[29] = c->r[29] + 0xffffffd0u;
    mem_w32(ram, c->r[29] + 0x00000024u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000020u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_0889091c; }
    { mem_w32(ram, c->r[30] + 0x00000014u, 0u); goto L_08890d58; }
L_0889091c:
    mem_w32(ram, c->r[30] + 0x00000004u, 0u);
L_08890920:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000003u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_08890938; }
    { goto L_08890a10; }
L_08890938:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[3];
    c->r[2] = c->r[2] + 0x00000008u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_08890960; }
    { goto L_08890a10; }
L_08890960:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[3];
    c->r[2] = c->r[2] + 0x00000008u;
    c->r[3] = c->r[30] + 0x00000008u;
    c->r[8] = c->r[30] + 0x0000000cu;
    c->r[4] = 0x08a70000u;
    c->r[4] = c->r[4] + 0xffffb640u;
    c->r[5] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[6] = 0u + 0u;
    { c->r[31] = 0x08890994u; c->r[7] = c->r[3] + 0u; func_08890404(c, ram); }
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
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[6] = mem_r16(ram, c->r[2] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[3] = mem_r16(ram, c->r[2] + 0x00000006u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = mem_r16(ram, c->r[2] + 0x00000004u);
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[7] = c->r[3] + 0u;
    c->r[8] = c->r[2] + 0u;
    { c->r[31] = 0x08890a00u; c->r[9] = mem_r32(ram, c->r[30] + 0x00000008u); func_0888b770(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000004u, c->r[2]); goto L_08890920; }
L_08890a10:
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000700u);
    c->r[2] = 0u + 0x000002e8u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[4] = c->lo;
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
    { c->r[31] = 0x08890a58u; c->r[5] = 0u + 0x00000009u; func_0888b858(c, ram); }
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000700u);
    c->r[2] = 0u + 0x000002e8u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[4] = c->lo;
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
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[2] + 0xffffffffu;
    c->r[4] = c->r[3] + 0u;
    c->r[5] = 0u + 0x00000005u;
    c->r[6] = c->r[2] + 0u;
    c->r[7] = 0u + 0u;
    { c->r[31] = 0x08890ab4u; c->r[8] = 0u + 0x00000001u; func_0888b920(c, ram); }
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000700u);
    c->r[2] = 0u + 0x000002e8u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[4] = c->lo;
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
    c->r[5] = 0u + 0x00000020u;
    { c->r[31] = 0x08890b00u; c->r[6] = mem_r32(ram, c->r[30] + 0x0000000cu); func_0888cd3c(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    { int _c = ((s32)c->r[2] <= 0); if (_c) goto L_08890c14; }
    c->r[2] = 0u + 0x00000007u;
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000020u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_08890b2c; }
    c->r[2] = 0u + 0x00000005u;
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]);
L_08890b2c:
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000700u);
    c->r[2] = 0u + 0x000002e8u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[4] = c->lo;
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
    c->r[5] = 0u + 0x00000002u;
    { c->r[31] = 0x08890b7cu; c->f[12] = mem_rf32(ram, c->r[3] + 0x00000018u); func_0888cc04(c, ram); }
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000700u);
    c->r[2] = 0u + 0x000002e8u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[4] = c->lo;
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
    { c->r[31] = 0x08890bc8u; c->f[12] = mem_rf32(ram, c->r[3] + 0x0000001cu); func_0888ccb4(c, ram); }
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000700u);
    c->r[2] = 0u + 0x000002e8u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[4] = c->lo;
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
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000010u);
    { c->r[31] = 0x08890c14u; c->r[6] = 0u + 0x00000001u; func_0888cb84(c, ram); }
L_08890c14:
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000700u);
    c->r[2] = 0u + 0x000002e8u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[4] = c->lo;
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
    c->r[5] = 0u + 0xfffffffeu;
    { c->r[31] = 0x08890c60u; c->r[6] = 0u + 0xfffffff4u; func_089debc4(c, ram); }
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000700u);
    c->r[2] = 0u + 0x000002e8u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[4] = c->lo;
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
    { c->r[31] = 0x08890ca8u; c->r[5] = 0u + 0x0000000au; func_0888b894(c, ram); }
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000700u);
    c->r[2] = 0u + 0x000002e8u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[4] = c->lo;
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
    { c->r[31] = 0x08890cf0u; c->r[5] = 0u + 0x00000001u; func_0888b8d0(c, ram); }
    c->r[4] = 0x08a70000u;
    c->r[4] = c->r[4] + 0xffffb640u;
    c->r[5] = 0u + 0u;
    { c->r[31] = 0x08890d04u; c->r[6] = 0u + 0u; func_089df7a0(c, ram); }
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000700u);
    c->r[2] = 0u + 0x000002e8u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[4] = c->lo;
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
    { c->r[31] = 0x08890d50u; c->r[5] = c->r[5] | 0x019eu; func_0888b984(c, ram); }
    c->r[2] = 0u + 0x00000001u;
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
L_08890d58:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000024u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000020u);
    { c->r[29] = c->r[29] + 0x00000030u; return; }
    return; /* fell out of func_088908f0 */
}

/* func_088954a8  0x088954a8..0x08895744  668 bytes, source=fde */
void func_088954a8(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x088954a8u);
    c->r[29] = c->r[29] + 0xffffff90u;
    mem_w32(ram, c->r[29] + 0x00000068u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000064u, c->r[30]);
    mem_w32(ram, c->r[29] + 0x00000060u, c->r[16]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    { c->r[31] = 0x088954ccu; mem_w32(ram, c->r[30] + 0x00000008u, c->r[6]); func_088832e0(c, ram); }
    { int _c = (c->r[2] != 0u); if (_c) goto L_088954dc; }
    { mem_w32(ram, c->r[30] + 0x00000058u, 0u); goto L_08895728; }
L_088954dc:
    { c->r[31] = 0x088954e4u; func_088832e0(c, ram); }
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = ((s32)c->r[2] < (s32)c->r[3]) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_08895508; }
    { mem_w32(ram, c->r[30] + 0x00000058u, 0u); goto L_08895728; }
L_08895508:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
    c->r[2] = 0u + 0x00000001u;
    mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]);
    c->r[2] = c->r[30] + 0x00000010u;
    c->r[4] = 0u + 0x0000002bu;
    c->r[5] = 0u + 0x00000005u;
    c->r[6] = 0u + 0u;
    c->r[7] = 0u + 0u;
    c->r[8] = mem_r32(ram, c->r[30] + 0x00000004u);
    { c->r[31] = 0x08895540u; c->r[9] = c->r[2] + 0u; func_089c6bec(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000020u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_08895608; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    mem_w32(ram, c->r[2] + 0x00000054u, 0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    mem_w32(ram, c->r[2] + 0x00000050u, 0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08a90000u;
    c->r[2] = c->r[2] + 0xffffebb4u;
    c->r[16] = c->r[3] + c->r[2];
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000ac8u;
    { c->r[31] = 0x08895584u; c->r[5] = mem_r32(ram, c->r[30] + 0x00000020u); func_089cb780(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000024u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000024u);
    mem_w32(ram, c->r[16] + 0x00000000u, c->r[2]);
    c->r[2] = c->r[30] + 0x00000030u;
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0x08a40000u;
    c->r[5] = c->r[5] + 0x00004168u;
    { c->r[31] = 0x088955a8u; c->r[6] = mem_r32(ram, c->r[30] + 0x00000000u); func_08a1ad34(c, ram); }
    c->r[2] = c->r[30] + 0x00000030u;
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000020u);
    { c->r[31] = 0x088955b8u; c->r[5] = c->r[2] + 0u; func_089c35a0(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000050u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000050u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_08895608; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[2] = c->r[2] + 0x000000e0u;
    mem_w32(ram, c->r[30] + 0x00000054u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[2] = c->r[2] + 0x00000050u;
    c->r[4] = c->r[2] + 0u;
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000050u);
    c->f[12] = u2f(0u);
    { c->r[31] = 0x088955f0u; func_089b43b8(c, ram); }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000054u);
    c->r[2] = 0u + 0x00000001u;
    mem_w8(ram, c->r[3] + 0x00000043u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[2] = 0u + 0x0000003cu;
    mem_w16(ram, c->r[3] + 0x000000b0u, c->r[2]);
L_08895608:
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x08895614u; c->r[4] = c->r[4] + 0x00000af4u; func_08813c00(c, ram); }
    { int _c = (c->r[2] != 0u); if (_c) goto L_08895720; }
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x08895628u; c->r[4] = c->r[4] + 0x00000af4u; func_0880d380(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = 0u + 0x0000001du;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_0889565c; }
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x08895644u; c->r[4] = c->r[4] + 0x00000af4u; func_0880d380(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = 0u + 0x0000001eu;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_0889565c; }
    { goto L_088956a8; }
L_0889565c:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = 0u + 0x00000008u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_08895688; }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x0000008cu);
    c->r[2] = 0x40000000u;
    c->r[2] = c->r[3] | c->r[2];
    { mem_w32(ram, c->r[4] + 0x0000008cu, c->r[2]); goto L_08895720; }
L_08895688:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = 0u + 0x00000001u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_08895720; }
    { c->r[31] = 0x088956a0u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000020u); func_089b7c00(c, ram); }
    { goto L_08895720; }
L_088956a8:
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x088956b4u; c->r[4] = c->r[4] + 0x00000af4u; func_0880d380(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = 0u + 0x00000009u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_08895720; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    mem_w32(ram, c->r[30] + 0x0000005cu, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000005cu);
    c->r[2] = ((s32)c->r[3] < (s32)0x00000004u) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_08895700; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000005cu);
    c->r[2] = ((s32)c->r[3] < (s32)0x00000002u) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_08895718; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000005cu);
    { int _c = (c->r[2] == 0u); if (_c) goto L_08895718; }
    { goto L_08895720; }
L_08895700:
    c->r[2] = 0u + 0x00000006u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000005cu);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_08895718; }
    { goto L_08895720; }
L_08895718:
    { c->r[31] = 0x08895720u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000020u); func_089b7c00(c, ram); }
L_08895720:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    mem_w32(ram, c->r[30] + 0x00000058u, c->r[2]);
L_08895728:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000058u);
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000068u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000064u);
    c->r[16] = mem_r32(ram, c->r[29] + 0x00000060u);
    { c->r[29] = c->r[29] + 0x00000070u; return; }
    return; /* fell out of func_088954a8 */
}

/* func_08899ef8  0x08899ef8..0x0889a118  544 bytes, source=sweep */
void func_08899ef8(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08899ef8u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[6]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = (c->r[2] < 0x00000016u) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_0889a104; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08a40000u;
    c->r[2] = c->r[2] + 0x00004254u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    { u32 _t = c->r[2]; switch (_t) { case 0x08899f44u: goto L_08899f44; case 0x08899f58u: goto L_08899f58; case 0x08899f6cu: goto L_08899f6c; case 0x08899f80u: goto L_08899f80; case 0x08899f94u: goto L_08899f94; case 0x08899fa8u: goto L_08899fa8; case 0x08899fbcu: goto L_08899fbc; case 0x08899fd0u: goto L_08899fd0; case 0x08899fe4u: goto L_08899fe4; case 0x08899ff8u: goto L_08899ff8; case 0x0889a00cu: goto L_0889a00c; case 0x0889a020u: goto L_0889a020; case 0x0889a034u: goto L_0889a034; case 0x0889a048u: goto L_0889a048; case 0x0889a060u: goto L_0889a060; case 0x0889a078u: goto L_0889a078; case 0x0889a090u: goto L_0889a090; case 0x0889a0a8u: goto L_0889a0a8; case 0x0889a0bcu: goto L_0889a0bc; case 0x0889a0d0u: goto L_0889a0d0; case 0x0889a0e4u: goto L_0889a0e4; case 0x0889a0f8u: goto L_0889a0f8; default: recomp_trap_unknown_indirect(c, ram, 0x08899f3cu, _t); return; } }
L_08899f44:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x08899f50u; c->r[5] = mem_r32(ram, c->r[30] + 0x00000008u); func_0889a118(c, ram); }
    { goto L_0889a104; }
L_08899f58:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x08899f64u; c->r[5] = mem_r32(ram, c->r[30] + 0x00000008u); func_0889a15c(c, ram); }
    { goto L_0889a104; }
L_08899f6c:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x08899f78u; c->r[5] = mem_r32(ram, c->r[30] + 0x00000008u); func_0889a5a8(c, ram); }
    { goto L_0889a104; }
L_08899f80:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x08899f8cu; c->r[5] = mem_r32(ram, c->r[30] + 0x00000008u); func_0889a1a0(c, ram); }
    { goto L_0889a104; }
L_08899f94:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x08899fa0u; c->r[5] = mem_r32(ram, c->r[30] + 0x00000008u); func_0889a1e4(c, ram); }
    { goto L_0889a104; }
L_08899fa8:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x08899fb4u; c->r[5] = mem_r32(ram, c->r[30] + 0x00000008u); func_0889a228(c, ram); }
    { goto L_0889a104; }
L_08899fbc:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x08899fc8u; c->r[5] = mem_r32(ram, c->r[30] + 0x00000008u); func_0889a26c(c, ram); }
    { goto L_0889a104; }
L_08899fd0:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x08899fdcu; c->r[5] = mem_r32(ram, c->r[30] + 0x00000008u); func_0889a2b0(c, ram); }
    { goto L_0889a104; }
L_08899fe4:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x08899ff0u; c->r[5] = mem_r32(ram, c->r[30] + 0x00000008u); func_0889a2f4(c, ram); }
    { goto L_0889a104; }
L_08899ff8:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x0889a004u; c->r[5] = mem_r32(ram, c->r[30] + 0x00000008u); func_0889a338(c, ram); }
    { goto L_0889a104; }
L_0889a00c:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x0889a018u; c->r[5] = mem_r32(ram, c->r[30] + 0x00000008u); func_0889a37c(c, ram); }
    { goto L_0889a104; }
L_0889a020:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x0889a02cu; c->r[5] = mem_r32(ram, c->r[30] + 0x00000008u); func_0889a3c0(c, ram); }
    { goto L_0889a104; }
L_0889a034:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x0889a040u; c->r[5] = mem_r32(ram, c->r[30] + 0x00000008u); func_0889a404(c, ram); }
    { goto L_0889a104; }
L_0889a048:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = 0u + 0u;
    { c->r[31] = 0x0889a058u; c->r[6] = mem_r32(ram, c->r[30] + 0x00000008u); func_0889a448(c, ram); }
    { goto L_0889a104; }
L_0889a060:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = 0u + 0x00000001u;
    { c->r[31] = 0x0889a070u; c->r[6] = mem_r32(ram, c->r[30] + 0x00000008u); func_0889a448(c, ram); }
    { goto L_0889a104; }
L_0889a078:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = 0u + 0x00000002u;
    { c->r[31] = 0x0889a088u; c->r[6] = mem_r32(ram, c->r[30] + 0x00000008u); func_0889a448(c, ram); }
    { goto L_0889a104; }
L_0889a090:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = 0u + 0x00000003u;
    { c->r[31] = 0x0889a0a0u; c->r[6] = mem_r32(ram, c->r[30] + 0x00000008u); func_0889a448(c, ram); }
    { goto L_0889a104; }
L_0889a0a8:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x0889a0b4u; c->r[5] = mem_r32(ram, c->r[30] + 0x00000008u); func_0889a498(c, ram); }
    { goto L_0889a104; }
L_0889a0bc:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x0889a0c8u; c->r[5] = mem_r32(ram, c->r[30] + 0x00000008u); func_0889a4dc(c, ram); }
    { goto L_0889a104; }
L_0889a0d0:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x0889a0dcu; c->r[5] = mem_r32(ram, c->r[30] + 0x00000008u); func_0889a520(c, ram); }
    { goto L_0889a104; }
L_0889a0e4:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x0889a0f0u; c->r[5] = mem_r32(ram, c->r[30] + 0x00000008u); func_0889a564(c, ram); }
    { goto L_0889a104; }
L_0889a0f8:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x0889a104u; c->r[5] = mem_r32(ram, c->r[30] + 0x00000008u); func_0889a654(c, ram); }
L_0889a104:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_08899ef8 */
}

/* func_0889e80c  0x0889e80c..0x0889e840  52 bytes, source=sweep */
void func_0889e80c(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0889e80cu);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x0889e82cu; c->r[5] = 0x0b000000u; func_0889eb70(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_0889e80c */
}

/* func_0889f828  0x0889f828..0x0889f86c  68 bytes, source=sweep */
void func_0889f828(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0889f828u);
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
    { c->r[31] = 0x0889f858u; c->r[5] = c->r[2] + 0u; func_0889eb70(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_0889f828 */
}

/* func_088a34e8  0x088a34e8..0x088a35c4  220 bytes, source=sweep */
void func_088a34e8(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x088a34e8u);
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
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_088a357c; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = ((s32)c->r[3] < (s32)0x00000002u) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_088a3540; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    { int _c = (c->r[2] == 0u); if (_c) goto L_088a3568; }
    { goto L_088a35b0; }
L_088a3540:
    c->r[2] = 0u + 0x00000002u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_088a3590; }
    c->r[2] = 0u + 0x00000003u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_088a35a4; }
    { goto L_088a35b0; }
L_088a3568:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x088a3574u; c->r[5] = mem_r32(ram, c->r[30] + 0x00000008u); func_088a39b4(c, ram); }
    { goto L_088a35b0; }
L_088a357c:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x088a3588u; c->r[5] = mem_r32(ram, c->r[30] + 0x00000008u); func_088a3ab4(c, ram); }
    { goto L_088a35b0; }
L_088a3590:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x088a359cu; c->r[5] = mem_r32(ram, c->r[30] + 0x00000008u); func_088a3b84(c, ram); }
    { goto L_088a35b0; }
L_088a35a4:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x088a35b0u; c->r[5] = mem_r32(ram, c->r[30] + 0x00000008u); func_088a3c54(c, ram); }
L_088a35b0:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_088a34e8 */
}

/* func_088a4710  0x088a4710..0x088a4740  48 bytes, source=sweep */
void func_088a4710(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x088a4710u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[1] = 0x00010000u;
    c->r[1] = c->r[1] + c->r[2];
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[1] + 0x000008dfu);
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_088a4710 */
}

/* func_088ade50  0x088ade50..0x088ade94  68 bytes, source=sweep */
void func_088ade50(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x088ade50u);
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
    { c->r[31] = 0x088ade80u; c->r[5] = c->r[2] + 0u; func_088ad160(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_088ade50 */
}

/* func_088b2398  0x088b2398..0x088b2468  208 bytes, source=sweep */
void func_088b2398(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x088b2398u);
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
    return; /* fell out of func_088b2398 */
}

/* func_088b5984  0x088b5984..0x088b59c0  60 bytes, source=residue */
void func_088b5984(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x088b5984u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_wf32(ram, c->r[30] + 0x00000000u, c->f[12]);
    mem_wf32(ram, c->r[30] + 0x00000004u, c->f[13]);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000000u);
    c->r[1] = 0x08a50000u;
    mem_wf32(ram, c->r[1] + 0x00006be8u, c->f[0]);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000004u);
    c->r[1] = 0x08a50000u;
    mem_wf32(ram, c->r[1] + 0x00006becu, c->f[0]);
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_088b5984 */
}

/* func_088bac54  0x088bac54..0x088bac84  48 bytes, source=sweep */
void func_088bac54(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x088bac54u);
    c->r[29] = c->r[29] + 0xfffffff0u;
    mem_w32(ram, c->r[29] + 0x00000004u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000000u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    c->r[4] = 0u + 0x00000001u;
    { c->r[31] = 0x088bac70u; c->r[5] = 0u | 0xffffu; func_088baa74(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000004u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000000u);
    { c->r[29] = c->r[29] + 0x00000010u; return; }
    return; /* fell out of func_088bac54 */
}

/* func_088becb4  0x088becb4..0x088becf8  68 bytes, source=sweep */
void func_088becb4(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x088becb4u);
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
    { c->r[31] = 0x088bece4u; c->r[5] = c->r[2] + 0u; func_088be14c(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_088becb4 */
}

/* func_088bfac8  0x088bfac8..0x088bfba4  220 bytes, source=fde */
void func_088bfac8(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x088bfac8u);
    c->r[29] = c->r[29] + 0xffffffd0u;
    mem_w32(ram, c->r[29] + 0x00000028u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000024u, c->r[30]);
    mem_w32(ram, c->r[29] + 0x00000020u, c->r[16]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    c->r[2] = c->r[30] + 0x00000010u;
    { c->r[31] = 0x088bfaf0u; c->r[4] = c->r[2] + 0u; func_08808240(c, ram); }
    c->r[2] = c->r[30] + 0x00000010u;
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x088bfb00u; c->r[5] = mem_r32(ram, c->r[30] + 0x00000004u); func_0884c1d8(c, ram); }
    c->r[16] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x088bfb0cu; c->f[12] = mem_rf32(ram, c->r[30] + 0x00000014u); func_08a0fb24(c, ram); }
    mem_wf32(ram, c->r[16] + 0x00000000u, c->f[0]);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000018u);
    c->f[0] = u2f(0u);
    alx_c_cond_s(c, 2, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_088bfb30; }
    { goto L_088bfb78; }
L_088bfb30:
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000010u);
    c->f[0] = u2f(0u);
    alx_c_cond_s(c, 14, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_088bfb50; }
    { goto L_088bfb64; }
L_088bfb50:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00004d2cu);
    { mem_wf32(ram, c->r[2] + 0x00000004u, c->f[0]); goto L_088bfb8c; }
L_088bfb64:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00004d30u);
    { mem_wf32(ram, c->r[2] + 0x00000004u, c->f[0]); goto L_088bfb8c; }
L_088bfb78:
    c->r[16] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->f[12] = mem_rf32(ram, c->r[30] + 0x00000010u);
    { c->r[31] = 0x088bfb88u; c->f[13] = mem_rf32(ram, c->r[30] + 0x00000018u); func_08a0fc44(c, ram); }
    mem_wf32(ram, c->r[16] + 0x00000004u, c->f[0]);
L_088bfb8c:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000028u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000024u);
    c->r[16] = mem_r32(ram, c->r[29] + 0x00000020u);
    { c->r[29] = c->r[29] + 0x00000030u; return; }
    return; /* fell out of func_088bfac8 */
}

/* func_088c317c  0x088c317c..0x088c3284  264 bytes, source=fde */
void func_088c317c(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x088c317cu);
    c->r[29] = c->r[29] + 0xffffffd0u;
    mem_w32(ram, c->r[29] + 0x00000024u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000020u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[6]);
    mem_wf32(ram, c->r[30] + 0x0000000cu, c->f[12]);
    c->r[2] = c->r[7] + 0u;
    mem_w8(ram, c->r[30] + 0x00000010u, c->r[2]);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[30] + 0x00000010u);
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
    c->r[2] = 0u + 0x00000001u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000014u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_088c3224; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = ((s32)c->r[3] < (s32)0x00000002u) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_088c31e0; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_088c3208; }
    { goto L_088c3270; }
L_088c31e0:
    c->r[2] = 0u + 0x00000002u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000014u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_088c3240; }
    c->r[2] = 0u + 0x00000003u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000014u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_088c325c; }
    { goto L_088c3270; }
L_088c3208:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[6] = mem_r32(ram, c->r[30] + 0x00000008u);
    { c->r[31] = 0x088c321cu; c->f[12] = mem_rf32(ram, c->r[30] + 0x0000000cu); func_088c2b30(c, ram); }
    { goto L_088c3270; }
L_088c3224:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[6] = mem_r32(ram, c->r[30] + 0x00000008u);
    { c->r[31] = 0x088c3238u; c->f[12] = mem_rf32(ram, c->r[30] + 0x0000000cu); func_088c2c84(c, ram); }
    { goto L_088c3270; }
L_088c3240:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[6] = mem_r32(ram, c->r[30] + 0x00000008u);
    { c->r[31] = 0x088c3254u; c->f[12] = mem_rf32(ram, c->r[30] + 0x0000000cu); func_088c2dd8(c, ram); }
    { goto L_088c3270; }
L_088c325c:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[6] = mem_r32(ram, c->r[30] + 0x00000008u);
    { c->r[31] = 0x088c3270u; c->f[12] = mem_rf32(ram, c->r[30] + 0x0000000cu); func_088c2f9c(c, ram); }
L_088c3270:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000024u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000020u);
    { c->r[29] = c->r[29] + 0x00000030u; return; }
    return; /* fell out of func_088c317c */
}

/* func_088c8ed0  0x088c8ed0..0x088c8f14  68 bytes, source=sweep */
void func_088c8ed0(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x088c8ed0u);
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
    { c->r[31] = 0x088c8f00u; c->r[5] = c->r[2] + 0u; func_088c8760(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_088c8ed0 */
}

/* func_088cb2e0  0x088cb2e0..0x088cb404  292 bytes, source=fde */
void func_088cb2e0(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x088cb2e0u);
    c->r[29] = c->r[29] + 0xffffffc0u;
    mem_w32(ram, c->r[29] + 0x00000034u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000030u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000057u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_088cb360; }
    c->r[2] = c->r[30] + 0x00000010u;
    { c->r[31] = 0x088cb314u; c->r[4] = c->r[2] + 0u; func_08808240(c, ram); }
    c->r[3] = c->r[30] + 0x00000010u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000030u;
    c->r[4] = c->r[3] + 0u;
    { c->r[31] = 0x088cb32cu; c->r[5] = c->r[2] + 0u; func_0884c1d8(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000030u;
    c->r[3] = c->r[30] + 0x00000010u;
    c->r[6] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[4] = c->r[2] + 0u;
    c->r[5] = c->r[3] + 0u;
    { c->r[31] = 0x088cb34cu; c->f[12] = mem_rf32(ram, c->r[6] + 0x00000038u); func_0884c224(c, ram); }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000057u);
    c->r[2] = c->r[2] + 0x00000001u;
    mem_w8(ram, c->r[3] + 0x00000057u, c->r[2]);
L_088cb360:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000034u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000050d4u);
    c->f[0] = c->f[1] - c->f[0];
    mem_wf32(ram, c->r[3] + 0x00000034u, c->f[0]);
    c->r[2] = c->r[30] + 0x00000010u;
    { c->r[31] = 0x088cb388u; c->r[4] = c->r[2] + 0u; func_08808240(c, ram); }
    c->r[3] = c->r[30] + 0x00000010u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000030u;
    c->r[4] = c->r[3] + 0u;
    { c->r[31] = 0x088cb3a0u; c->r[5] = c->r[2] + 0u; func_0884c1d8(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000040u;
    c->r[3] = c->r[30] + 0x00000010u;
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x088cb3b8u; c->r[5] = c->r[3] + 0u; func_088f0c70(c, ram); }
    c->r[3] = c->r[30] + 0x00000020u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000030u;
    c->r[4] = c->r[3] + 0u;
    c->r[5] = c->r[2] + 0u;
    c->r[1] = 0x08a80000u;
    { c->r[31] = 0x088cb3d8u; c->f[12] = mem_rf32(ram, c->r[1] + 0x00002e40u); func_0884c120(c, ram); }
    c->r[3] = c->r[30] + 0x00000020u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000020u;
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x088cb3f0u; c->r[5] = c->r[3] + 0u; func_0880d1a0(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000034u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000030u);
    { c->r[29] = c->r[29] + 0x00000040u; return; }
    return; /* fell out of func_088cb2e0 */
}

/* func_088d2cb4  0x088d2cb4..0x088d2ee4  560 bytes, source=fde */
void func_088d2cb4(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x088d2cb4u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000054u);
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000000u);
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = (c->r[3] < 0x0000000au) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_088d2e30; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08a40000u;
    c->r[2] = c->r[2] + 0x00005858u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    { u32 _t = c->r[2]; switch (_t) { case 0x088d2d14u: goto L_088d2d14; case 0x088d2d24u: goto L_088d2d24; case 0x088d2d34u: goto L_088d2d34; case 0x088d2d44u: goto L_088d2d44; case 0x088d2d54u: goto L_088d2d54; case 0x088d2d64u: goto L_088d2d64; case 0x088d2d74u: goto L_088d2d74; case 0x088d2d84u: goto L_088d2d84; case 0x088d2d94u: goto L_088d2d94; case 0x088d2e30u: goto L_088d2e30; default: recomp_trap_unknown_indirect(c, ram, 0x088d2d0cu, _t); return; } }
L_088d2d14:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = 0u + 0x00000002u;
    { mem_w8(ram, c->r[3] + 0x000000c9u, c->r[2]); goto L_088d2e30; }
L_088d2d24:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = 0u + 0x00000007u;
    { mem_w8(ram, c->r[3] + 0x000000c9u, c->r[2]); goto L_088d2e30; }
L_088d2d34:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = 0u + 0x00000008u;
    { mem_w8(ram, c->r[3] + 0x000000c9u, c->r[2]); goto L_088d2e30; }
L_088d2d44:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = 0u + 0x00000006u;
    { mem_w8(ram, c->r[3] + 0x000000c9u, c->r[2]); goto L_088d2e30; }
L_088d2d54:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = 0u + 0x00000005u;
    { mem_w8(ram, c->r[3] + 0x000000c9u, c->r[2]); goto L_088d2e30; }
L_088d2d64:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = 0u + 0x00000006u;
    { mem_w8(ram, c->r[3] + 0x000000c9u, c->r[2]); goto L_088d2e30; }
L_088d2d74:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = 0u + 0x00000002u;
    { mem_w8(ram, c->r[3] + 0x000000c9u, c->r[2]); goto L_088d2e30; }
L_088d2d84:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = 0u + 0x0000000bu;
    { mem_w8(ram, c->r[3] + 0x000000c9u, c->r[2]); goto L_088d2e30; }
L_088d2d94:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = 0u + 0x0000000au;
    mem_w8(ram, c->r[2] + 0x000000c9u, c->r[3]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x088d2dacu; c->r[5] = mem_r32(ram, c->r[30] + 0x00000004u); func_088d4444(c, ram); }
    { int _c = (c->r[2] == 0u); if (_c) goto L_088d2dc0; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = 0u + 0x00000009u;
    mem_w8(ram, c->r[3] + 0x000000c9u, c->r[2]);
L_088d2dc0:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000005cu);
    c->r[3] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x00000000u);
    c->r[2] = 0u + 0x000000f0u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_088d2de4; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = 0u + 0x00000009u;
    mem_w8(ram, c->r[3] + 0x000000c9u, c->r[2]);
L_088d2de4:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000005cu);
    c->r[3] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x00000000u);
    c->r[2] = 0u + 0x000000f1u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_088d2e08; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = 0u + 0x00000009u;
    mem_w8(ram, c->r[3] + 0x000000c9u, c->r[2]);
L_088d2e08:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000005cu);
    c->r[3] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x00000000u);
    c->r[2] = 0u + 0x000000a7u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_088d2ed0; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = 0u + 0x00000009u;
    { mem_w8(ram, c->r[3] + 0x000000c9u, c->r[2]); goto L_088d2ed0; }
L_088d2e30:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000005cu);
    c->r[3] = mem_r8(ram, c->r[2] + 0x00000002u);
    c->r[2] = 0u + 0x00000081u;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_088d2e68; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000005cu);
    c->r[3] = mem_r8(ram, c->r[2] + 0x00000002u);
    c->r[2] = 0u + 0x00000082u;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_088d2e68; }
    { goto L_088d2e78; }
L_088d2e68:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = 0u + 0x0000000fu;
    { mem_w8(ram, c->r[3] + 0x000000c9u, c->r[2]); goto L_088d2ed0; }
L_088d2e78:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000008cu);
    c->r[2] = c->r[2] & 0x0080u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_088d2e98; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = 0u + 0x00000010u;
    mem_w8(ram, c->r[3] + 0x000000c9u, c->r[2]);
L_088d2e98:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[3] = mem_r8(ram, c->r[2] + 0x00000000u);
    c->r[2] = 0u + 0x00000009u;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_088d2ed0; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000005cu);
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000002u);
    c->r[2] = (c->r[2] < 0x00000086u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_088d2ed0; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = 0u + 0x0000000bu;
    mem_w8(ram, c->r[3] + 0x000000c9u, c->r[2]);
L_088d2ed0:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_088d2cb4 */
}

/* func_088d6d20  0x088d6d20..0x088d6da4  132 bytes, source=sweep */
void func_088d6d20(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x088d6d20u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = 0u + 0x000000ffu;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_088d6d50; }
    c->r[2] = 0u + 0x000000ffu;
    { mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]); goto L_088d6d90; }
L_088d6d50:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[3] + c->r[2];
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    { int _c = ((s32)c->r[2] >= 0); if (_c) goto L_088d6d70; }
    mem_w32(ram, c->r[30] + 0x00000008u, 0u);
L_088d6d70:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000004u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_088d6d88; }
    c->r[2] = 0u + 0x00000003u;
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]);
L_088d6d88:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
L_088d6d90:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_088d6d20 */
}

/* func_088dae98  0x088dae98..0x088daed0  56 bytes, source=sweep */
void func_088dae98(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x088dae98u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x0000008cu);
    c->r[2] = 0x08000000u;
    c->r[2] = c->r[3] | c->r[2];
    mem_w32(ram, c->r[4] + 0x0000008cu, c->r[2]);
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_088dae98 */
}

/* func_088dec74  0x088dec74..0x088dec9c  40 bytes, source=residue */
void func_088dec74(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x088dec74u);
    c->r[29] = c->r[29] + 0xfffffff0u;
    mem_w32(ram, c->r[29] + 0x00000000u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    c->r[2] = 0x08aa0000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00005224u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000000u);
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000000u);
    { c->r[29] = c->r[29] + 0x00000010u; return; }
    return; /* fell out of func_088dec74 */
}

/* func_088e0ea8  0x088e0ea8..0x088e0f08  96 bytes, source=sweep */
void func_088e0ea8(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x088e0ea8u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    mem_w8(ram, c->r[2] + 0x00000030u, 0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    mem_w8(ram, c->r[2] + 0x00000031u, 0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    mem_w16(ram, c->r[2] + 0x00000036u, 0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    mem_w16(ram, c->r[2] + 0x00000034u, 0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    mem_w32(ram, c->r[2] + 0x00000038u, 0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    mem_w32(ram, c->r[2] + 0x0000003cu, 0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    mem_w32(ram, c->r[2] + 0x00000040u, 0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    mem_w32(ram, c->r[2] + 0x00000044u, 0u);
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_088e0ea8 */
}

/* func_088e6e2c  0x088e6e2c..0x088e6f6c  320 bytes, source=fde */
void func_088e6e2c(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x088e6e2cu);
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
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_088e6eb8; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[2] = ((s32)c->r[3] < (s32)0x00000002u) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_088e6e90; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_088e6ea8; }
    { goto L_088e6f54; }
L_088e6e90:
    c->r[2] = 0u + 0x00000002u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000020u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_088e6f18; }
    { goto L_088e6f54; }
L_088e6ea8:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000004u);
    mem_w32(ram, c->r[2] + 0x000000a0u, c->r[3]);
L_088e6eb8:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = 0u + 0x00000002u;
    mem_w8(ram, c->r[3] + 0x000000a5u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    mem_w8(ram, c->r[2] + 0x00000028u, 0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[16] = c->r[2] + 0x00000030u;
    c->r[2] = c->r[30] + 0x00000010u;
    c->r[4] = c->r[2] + 0u;
    c->f[12] = u2f(0u);
    c->f[13] = u2f(0u);
    c->f[14] = u2f(0u);
    c->f[15] = u2f(0u);
    { c->r[31] = 0x088e6ef4u; func_0880d140(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    mem_w32(ram, c->r[16] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    mem_w32(ram, c->r[16] + 0x00000004u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    mem_w32(ram, c->r[16] + 0x00000008u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    { mem_w32(ram, c->r[16] + 0x0000000cu, c->r[2]); goto L_088e6f54; }
L_088e6f18:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x000000a0u);
    c->r[2] = c->r[2] + 0xffffffffu;
    mem_w32(ram, c->r[3] + 0x000000a0u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x000000a0u);
    { int _c = ((s32)c->r[2] >= 0); if (_c) goto L_088e6f54; }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x088e6f48u; c->r[5] = mem_r32(ram, c->r[30] + 0x00000004u); func_088d3bfc(c, ram); }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = 0u + 0x00000001u;
    mem_w8(ram, c->r[3] + 0x00000028u, c->r[2]);
L_088e6f54:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000038u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000034u);
    c->r[16] = mem_r32(ram, c->r[29] + 0x00000030u);
    { c->r[29] = c->r[29] + 0x00000040u; return; }
    return; /* fell out of func_088e6e2c */
}

/* func_088ec530  0x088ec530..0x088ec558  40 bytes, source=sweep */
void func_088ec530(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x088ec530u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[6]);
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_088ec530 */
}

/* func_088f3e4c  0x088f3e4c..0x088f4268  1052 bytes, source=sweep */
void func_088f3e4c(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x088f3e4cu);
    c->r[29] = c->r[29] + 0xffffffd0u;
    mem_w32(ram, c->r[29] + 0x00000024u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000020u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = 0u | 0xffffu;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_088f4100; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = 0u + 0x00000001u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_088f4100; }
    c->r[2] = 0x08aa0000u;
    c->r[2] = c->r[2] + 0xffffed10u;
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
    c->r[2] = 0u + 0x00000007u;
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000061f8u);
    c->r[1] = 0x08a40000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0x000061f8u);
    c->r[1] = 0x08a40000u;
    c->f[2] = mem_rf32(ram, c->r[1] + 0x000061f8u);
    c->r[4] = c->r[2] + 0u;
    c->f[12] = c->f[0];
    c->f[13] = c->f[1];
    c->f[14] = c->f[2];
    c->f[15] = u2f(0u);
    { c->r[31] = 0x088f3ed8u; func_0880d140(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x00000010u;
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = c->r[2] + 0xffffffffu;
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000061fcu);
    c->r[1] = 0x08a40000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0x000061f8u);
    c->r[1] = 0x08a40000u;
    c->f[2] = mem_rf32(ram, c->r[1] + 0x000061f8u);
    c->r[4] = c->r[2] + 0u;
    c->f[12] = c->f[0];
    c->f[13] = c->f[1];
    c->f[14] = c->f[2];
    c->f[15] = u2f(0u);
    { c->r[31] = 0x088f3f28u; func_0880d140(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x00000010u;
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = c->r[2] + 0xffffffffu;
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000061f8u);
    c->r[1] = 0x08a40000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0x000061f8u);
    c->r[1] = 0x08a40000u;
    c->f[2] = mem_rf32(ram, c->r[1] + 0x000061fcu);
    c->r[4] = c->r[2] + 0u;
    c->f[12] = c->f[0];
    c->f[13] = c->f[1];
    c->f[14] = c->f[2];
    c->f[15] = u2f(0u);
    { c->r[31] = 0x088f3f78u; func_0880d140(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x00000010u;
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = c->r[2] + 0xffffffffu;
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000061fcu);
    c->r[1] = 0x08a40000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0x000061f8u);
    c->r[1] = 0x08a40000u;
    c->f[2] = mem_rf32(ram, c->r[1] + 0x000061fcu);
    c->r[4] = c->r[2] + 0u;
    c->f[12] = c->f[0];
    c->f[13] = c->f[1];
    c->f[14] = c->f[2];
    c->f[15] = u2f(0u);
    { c->r[31] = 0x088f3fc8u; func_0880d140(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x00000010u;
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = c->r[2] + 0xffffffffu;
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000061f8u);
    c->r[1] = 0x08a40000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0x000061f8u);
    c->r[4] = c->r[2] + 0u;
    c->f[12] = c->f[0];
    c->f[13] = u2f(0u);
    c->f[14] = c->f[1];
    c->f[15] = u2f(0u);
    { c->r[31] = 0x088f4010u; func_0880d140(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x00000010u;
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = c->r[2] + 0xffffffffu;
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000061fcu);
    c->r[1] = 0x08a40000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0x000061f8u);
    c->r[4] = c->r[2] + 0u;
    c->f[12] = c->f[0];
    c->f[13] = u2f(0u);
    c->f[14] = c->f[1];
    c->f[15] = u2f(0u);
    { c->r[31] = 0x088f4058u; func_0880d140(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x00000010u;
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = c->r[2] + 0xffffffffu;
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000061f8u);
    c->r[1] = 0x08a40000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0x000061fcu);
    c->r[4] = c->r[2] + 0u;
    c->f[12] = c->f[0];
    c->f[13] = u2f(0u);
    c->f[14] = c->f[1];
    c->f[15] = u2f(0u);
    { c->r[31] = 0x088f40a0u; func_0880d140(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x00000010u;
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = c->r[2] + 0xffffffffu;
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000061fcu);
    c->r[1] = 0x08a40000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0x000061fcu);
    c->r[4] = c->r[2] + 0u;
    c->f[12] = c->f[0];
    c->f[13] = u2f(0u);
    c->f[14] = c->f[1];
    c->f[15] = u2f(0u);
    { c->r[31] = 0x088f40e8u; func_0880d140(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x00000010u;
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = c->r[2] + 0xffffffffu;
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]);
L_088f4100:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = 0u | 0xffffu;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_088f4254; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = 0u + 0x00000001u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_088f4254; }
    c->r[2] = 0x08aa0000u;
    c->r[2] = c->r[2] + 0xffffed90u;
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
    c->r[2] = 0u + 0x00000003u;
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00006200u);
    c->r[4] = c->r[2] + 0u;
    c->f[12] = u2f(0u);
    c->f[13] = u2f(0u);
    c->f[14] = c->f[0];
    c->f[15] = u2f(0u);
    { c->r[31] = 0x088f4164u; func_0880d140(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x00000010u;
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[2] + 0xffffffffu;
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000061fcu);
    c->r[1] = 0x08a40000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0x000061f8u);
    c->r[4] = c->r[2] + 0u;
    c->f[12] = c->f[0];
    c->f[13] = u2f(0u);
    c->f[14] = c->f[1];
    c->f[15] = u2f(0u);
    { c->r[31] = 0x088f41acu; func_0880d140(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x00000010u;
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[2] + 0xffffffffu;
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000061f8u);
    c->r[1] = 0x08a40000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0x000061f8u);
    c->r[4] = c->r[2] + 0u;
    c->f[12] = c->f[0];
    c->f[13] = u2f(0u);
    c->f[14] = c->f[1];
    c->f[15] = u2f(0u);
    { c->r[31] = 0x088f41f4u; func_0880d140(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x00000010u;
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[2] + 0xffffffffu;
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000061f8u);
    c->r[1] = 0x08a40000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0x000061f8u);
    c->r[4] = c->r[2] + 0u;
    c->f[12] = u2f(0u);
    c->f[13] = c->f[0];
    c->f[14] = c->f[1];
    c->f[15] = u2f(0u);
    { c->r[31] = 0x088f423cu; func_0880d140(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x00000010u;
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[2] + 0xffffffffu;
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]);
L_088f4254:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000024u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000020u);
    { c->r[29] = c->r[29] + 0x00000030u; return; }
    return; /* fell out of func_088f3e4c */
}

/* func_088f7024  0x088f7024..0x088f765c  1592 bytes, source=fde */
void func_088f7024(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x088f7024u);
    c->r[29] = c->r[29] + 0xffffff10u;
    mem_w32(ram, c->r[29] + 0x000000ecu, c->r[31]);
    mem_w32(ram, c->r[29] + 0x000000e8u, c->r[30]);
    mem_w32(ram, c->r[29] + 0x000000e4u, c->r[17]);
    mem_w32(ram, c->r[29] + 0x000000e0u, c->r[16]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[6]);
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[7]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000094u);
    c->r[2] = c->r[2] & 0x0700u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_088f7068; }
    { goto L_088f7640; }
L_088f7068:
    mem_w32(ram, c->r[30] + 0x00000010u, 0u);
    mem_w32(ram, c->r[30] + 0x00000014u, 0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[16] = c->r[2] + 0x00000010u;
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000ac8u;
    { c->r[31] = 0x088f7088u; c->r[5] = 0u + 0u; func_089cb780(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    mem_w32(ram, c->r[16] + 0x00000000u, c->r[2]);
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x088f70a0u; c->r[4] = c->r[4] + 0x00000ac8u; func_089cb8ac(c, ram); }
    mem_w32(ram, c->r[30] + 0x0000001cu, c->r[2]);
L_088f70a4:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    { int _c = (c->r[2] != 0u); if (_c) goto L_088f70b8; }
    { goto L_088f7204; }
L_088f70b8:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000008cu);
    c->r[2] = c->r[2] & 0x0040u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_088f71ec; }
    { c->r[31] = 0x088f70d4u; c->r[4] = mem_r32(ram, c->r[30] + 0x0000001cu); func_089c35d4(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_088f71ec; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000008cu);
    c->r[2] = c->r[2] & 0x0001u;
    c->r[2] = c->r[2] & 0x00ffu;
    { int _c = (c->r[2] == 0u); if (_c) goto L_088f71ec; }
    c->r[4] = c->r[30] + 0x00000020u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = c->r[2] + 0x00000020u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = c->r[2] + 0x00000020u;
    c->r[5] = c->r[3] + 0u;
    { c->r[31] = 0x088f711cu; c->r[6] = c->r[2] + 0u; func_0884c07c(c, ram); }
    c->r[2] = c->r[30] + 0x00000020u;
    { c->r[31] = 0x088f7128u; c->r[4] = c->r[2] + 0u; func_08820c6c(c, ram); }
    mem_wf32(ram, c->r[30] + 0x00000030u, c->f[0]);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000030u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000062acu);
    alx_c_cond_s(c, 12, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_088f7150; }
    { goto L_088f71ec; }
L_088f7150:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000030u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000014u);
    alx_c_cond_s(c, 12, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_088f7174; }
    { goto L_088f71ec; }
L_088f7174:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000094u);
    c->r[2] = c->r[2] | 0x0200u;
    mem_w32(ram, c->r[3] + 0x00000094u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[16] = c->r[2] + 0x00000010u;
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000ac8u;
    { c->r[31] = 0x088f71a8u; c->r[5] = mem_r32(ram, c->r[30] + 0x00000010u); func_089cb780(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000034u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000034u);
    mem_w32(ram, c->r[16] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    mem_w16(ram, c->r[2] + 0x00000016u, 0u);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = c->r[2] + 0x00000020u;
    c->r[2] = mem_r32(ram, c->r[3] + 0x00000000u);
    mem_w32(ram, c->r[4] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[3] + 0x00000004u);
    mem_w32(ram, c->r[4] + 0x00000004u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[3] + 0x00000008u);
    mem_w32(ram, c->r[4] + 0x00000008u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[3] + 0x0000000cu);
    { mem_w32(ram, c->r[4] + 0x0000000cu, c->r[2]); goto L_088f7640; }
L_088f71ec:
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000ac8u;
    { c->r[31] = 0x088f71fcu; c->r[5] = mem_r32(ram, c->r[30] + 0x0000001cu); func_089cb8e8(c, ram); }
    { mem_w32(ram, c->r[30] + 0x0000001cu, c->r[2]); goto L_088f70a4; }
L_088f7204:
    { c->r[31] = 0x088f720cu; func_088df30c(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000038u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000012u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000038u);
    c->r[2] = ((s32)c->r[2] < (s32)c->r[3]) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_088f74c4; }
    c->r[4] = c->r[30] + 0x00000020u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = c->r[2] + 0x00000020u;
    c->r[2] = 0x08a80000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00002ed8u);
    c->r[2] = c->r[2] + 0x00000020u;
    c->r[5] = c->r[3] + 0u;
    { c->r[31] = 0x088f724cu; c->r[6] = c->r[2] + 0u; func_0884c07c(c, ram); }
    c->r[2] = c->r[30] + 0x00000020u;
    { c->r[31] = 0x088f7258u; c->r[4] = c->r[2] + 0u; func_08820c6c(c, ram); }
    mem_wf32(ram, c->r[30] + 0x00000030u, c->f[0]);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000030u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000062acu);
    alx_c_cond_s(c, 12, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_088f7280; }
    { goto L_088f74c4; }
L_088f7280:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000030u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000014u);
    alx_c_cond_s(c, 12, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_088f72a4; }
    { goto L_088f74c4; }
L_088f72a4:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[16] = c->r[2] + 0x00000010u;
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000ac8u;
    c->r[5] = 0x08a80000u;
    { c->r[31] = 0x088f72c0u; c->r[5] = mem_r32(ram, c->r[5] + 0x00002ed8u); func_089cb780(c, ram); }
    mem_w32(ram, c->r[30] + 0x0000003cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000003cu);
    { c->r[31] = 0x088f72d0u; mem_w32(ram, c->r[16] + 0x00000000u, c->r[2]); func_08867ab8(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000040u, c->r[2]);
    c->r[2] = c->r[30] + 0x00000050u;
    { c->r[31] = 0x088f72e0u; c->r[4] = c->r[2] + 0u; func_08808260(c, ram); }
    c->r[2] = c->r[30] + 0x00000090u;
    { c->r[31] = 0x088f72ecu; c->r[4] = c->r[2] + 0u; func_08808240(c, ram); }
    c->r[4] = c->r[30] + 0x00000090u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = c->r[2] + 0x00000020u;
    c->r[2] = 0x08a80000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00002ed8u);
    c->r[2] = c->r[2] + 0x00000020u;
    c->r[5] = c->r[3] + 0u;
    { c->r[31] = 0x088f7310u; c->r[6] = c->r[2] + 0u; func_08820ca4(c, ram); }
    c->r[2] = c->r[30] + 0x00000050u;
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0u + 0u;
    { c->r[31] = 0x088f7324u; c->r[6] = mem_r32(ram, c->r[30] + 0x00000040u); func_0884c668(c, ram); }
    c->r[2] = c->r[30] + 0x00000090u;
    c->r[3] = c->r[30] + 0x00000090u;
    c->r[6] = c->r[30] + 0x00000050u;
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x088f733cu; c->r[5] = c->r[3] + 0u; func_0884c26c(c, ram); }
    c->r[2] = 0u + 0x00000001u;
    mem_w32(ram, c->r[30] + 0x000000a0u, c->r[2]);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000098u);
    c->f[0] = u2f(0u);
    alx_c_cond_s(c, 12, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_088f7364; }
    { goto L_088f7408; }
L_088f7364:
    { c->r[31] = 0x088f736cu; c->f[12] = mem_rf32(ram, c->r[30] + 0x00000094u); func_08a136f8(c, ram); }
    mem_w32(ram, c->r[30] + 0x000000d8u, c->r[2]);
    mem_w32(ram, c->r[30] + 0x000000dcu, c->r[3]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x000000d8u);
    c->r[5] = mem_r32(ram, c->r[30] + 0x000000dcu);
    c->r[6] = 0u + 0u;
    { c->r[31] = 0x088f7388u; c->r[7] = 0u + 0u; func_08a1429c(c, ram); }
    { int _c = ((s32)c->r[2] >= 0); if (_c) goto L_088f73a4; }
    c->r[4] = mem_r32(ram, c->r[30] + 0x000000d8u);
    { c->r[31] = 0x088f739cu; c->r[5] = mem_r32(ram, c->r[30] + 0x000000dcu); func_08a14510(c, ram); }
    mem_w32(ram, c->r[30] + 0x000000d8u, c->r[2]);
    mem_w32(ram, c->r[30] + 0x000000dcu, c->r[3]);
L_088f73a4:
    c->r[4] = mem_r32(ram, c->r[30] + 0x000000d8u);
    { c->r[31] = 0x088f73b0u; c->r[5] = mem_r32(ram, c->r[30] + 0x000000dcu); func_08a14588(c, ram); }
    mem_wf32(ram, c->r[30] + 0x000000a4u, c->f[0]);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000098u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000094u);
    alx_c_cond_s(c, 12, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_088f73d4; }
    { goto L_088f7400; }
L_088f73d4:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000094u);
    c->r[2] = c->r[2] | 0x0100u;
    mem_w32(ram, c->r[3] + 0x00000094u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000094u);
    c->r[2] = c->r[2] | 0x0800u;
    { mem_w32(ram, c->r[3] + 0x00000094u, c->r[2]); goto L_088f7434; }
L_088f7400:
    { mem_w32(ram, c->r[30] + 0x000000a0u, 0u); goto L_088f7434; }
L_088f7408:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000094u);
    c->r[2] = c->r[2] | 0x0100u;
    mem_w32(ram, c->r[3] + 0x00000094u, c->r[2]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x00000094u);
    c->r[2] = 0u + 0xfffff7ffu;
    c->r[2] = c->r[3] & c->r[2];
    mem_w32(ram, c->r[4] + 0x00000094u, c->r[2]);
L_088f7434:
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000a0u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_088f74c4; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    mem_w16(ram, c->r[2] + 0x00000016u, 0u);
    c->r[16] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[17] = c->r[30] + 0x000000b0u;
    c->r[3] = c->r[30] + 0x000000c0u;
    c->r[2] = 0x08a80000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00002ed8u);
    c->r[2] = c->r[2] + 0x00000030u;
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000062b0u);
    c->r[4] = c->r[3] + 0u;
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x088f7478u; c->f[12] = c->f[0]; func_0884c120(c, ram); }
    c->r[3] = c->r[30] + 0x000000c0u;
    c->r[2] = 0x08a80000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00002ed8u);
    c->r[2] = c->r[2] + 0x00000020u;
    c->r[4] = c->r[17] + 0u;
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x088f7498u; c->r[6] = c->r[3] + 0u; func_08859f30(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000b0u);
    mem_w32(ram, c->r[16] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000b4u);
    mem_w32(ram, c->r[16] + 0x00000004u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000b8u);
    mem_w32(ram, c->r[16] + 0x00000008u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000bcu);
    { c->r[31] = 0x088f74bcu; mem_w32(ram, c->r[16] + 0x0000000cu, c->r[2]); func_088df24c(c, ram); }
    { goto L_088f7640; }
L_088f74c4:
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x088f74d0u; c->r[4] = c->r[4] + 0x00000ac8u; func_089cb8ac(c, ram); }
    mem_w32(ram, c->r[30] + 0x0000001cu, c->r[2]);
L_088f74d4:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    { int _c = (c->r[2] != 0u); if (_c) goto L_088f74e8; }
    { goto L_088f7640; }
L_088f74e8:
    c->r[2] = 0x08aa0000u;
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x0000497au);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000004u) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_088f7628; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000008cu);
    c->r[2] = c->r[2] & 0x0004u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_088f7628; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x000000b8u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000062b4u);
    alx_c_cond_s(c, 12, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_088f7538; }
    { goto L_088f7628; }
L_088f7538:
    c->r[4] = c->r[30] + 0x000000c0u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = c->r[2] + 0x00000020u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = c->r[2] + 0x00000020u;
    c->r[5] = c->r[3] + 0u;
    { c->r[31] = 0x088f7558u; c->r[6] = c->r[2] + 0u; func_0884c07c(c, ram); }
    c->r[2] = c->r[30] + 0x000000c0u;
    { c->r[31] = 0x088f7564u; c->r[4] = c->r[2] + 0u; func_08820c6c(c, ram); }
    mem_wf32(ram, c->r[30] + 0x000000a4u, c->f[0]);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x000000a4u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000062acu);
    alx_c_cond_s(c, 12, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_088f758c; }
    { goto L_088f7628; }
L_088f758c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x000000a4u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000014u);
    alx_c_cond_s(c, 12, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_088f75b0; }
    { goto L_088f7628; }
L_088f75b0:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000094u);
    c->r[2] = c->r[2] | 0x0400u;
    mem_w32(ram, c->r[3] + 0x00000094u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[16] = c->r[2] + 0x00000010u;
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000ac8u;
    { c->r[31] = 0x088f75e4u; c->r[5] = mem_r32(ram, c->r[30] + 0x00000010u); func_089cb780(c, ram); }
    mem_w32(ram, c->r[30] + 0x000000d0u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000d0u);
    mem_w32(ram, c->r[16] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    mem_w16(ram, c->r[2] + 0x00000016u, 0u);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = c->r[2] + 0x00000020u;
    c->r[2] = mem_r32(ram, c->r[3] + 0x00000000u);
    mem_w32(ram, c->r[4] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[3] + 0x00000004u);
    mem_w32(ram, c->r[4] + 0x00000004u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[3] + 0x00000008u);
    mem_w32(ram, c->r[4] + 0x00000008u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[3] + 0x0000000cu);
    { mem_w32(ram, c->r[4] + 0x0000000cu, c->r[2]); goto L_088f7640; }
L_088f7628:
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000ac8u;
    { c->r[31] = 0x088f7638u; c->r[5] = mem_r32(ram, c->r[30] + 0x0000001cu); func_089cb8e8(c, ram); }
    { mem_w32(ram, c->r[30] + 0x0000001cu, c->r[2]); goto L_088f74d4; }
L_088f7640:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x000000ecu);
    c->r[30] = mem_r32(ram, c->r[29] + 0x000000e8u);
    c->r[17] = mem_r32(ram, c->r[29] + 0x000000e4u);
    c->r[16] = mem_r32(ram, c->r[29] + 0x000000e0u);
    { c->r[29] = c->r[29] + 0x000000f0u; return; }
    return; /* fell out of func_088f7024 */
}

/* func_088fbfb8  0x088fbfb8..0x088fcccc  3348 bytes, source=sweep */
void func_088fbfb8(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x088fbfb8u);
    c->r[29] = c->r[29] + 0xffffff90u;
    mem_w32(ram, c->r[29] + 0x00000060u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    c->r[2] = 0x08a80000u;
    c->r[2] = c->r[2] + 0x00002338u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[2]);
    c->r[1] = 0x08aa0000u;
    mem_w8(ram, c->r[1] + 0xfffff2bdu, 0u);
    mem_w32(ram, c->r[30] + 0x00000004u, 0u);
L_088fbfdc:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000028u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_088fbff4; }
    { goto L_088fc03c; }
L_088fbff4:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = c->r[2] << 1;
    c->r[2] = 0x08a80000u;
    c->r[2] = c->r[2] + 0x00000e44u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r16(ram, c->r[2] + 0x00000002u);
    c->r[2] = c->r[2] & 0x0002u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_088fc02c; }
    c->r[2] = 0x08aa0000u;
    c->r[2] = mem_r8(ram, c->r[2] + 0xfffff2bdu);
    c->r[2] = c->r[2] + 0x00000001u;
    c->r[1] = 0x08aa0000u;
    mem_w8(ram, c->r[1] + 0xfffff2bdu, c->r[2]);
L_088fc02c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000004u, c->r[2]); goto L_088fbfdc; }
L_088fc03c:
    mem_w32(ram, c->r[30] + 0x00000004u, 0u);
    c->r[1] = 0x08aa0000u;
    mem_w8(ram, c->r[1] + 0xfffff2bcu, 0u);
    mem_w32(ram, c->r[30] + 0x00000008u, 0u);
L_088fc04c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000028u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_088fc064; }
    { goto L_088fc1c4; }
L_088fc064:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 3;
    c->r[2] = 0x08aa0000u;
    c->r[2] = c->r[2] + 0xffffee78u;
    c->r[4] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[3] = c->r[2] << 4;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    mem_w32(ram, c->r[4] + 0x00000000u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 3;
    c->r[2] = 0x08aa0000u;
    c->r[2] = c->r[2] + 0xffffee84u;
    c->r[4] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[3] = c->r[2] << 4;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000000cu);
    mem_w32(ram, c->r[4] + 0x00000000u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 3;
    c->r[2] = 0x08aa0000u;
    c->r[2] = c->r[2] + 0xffffee7cu;
    c->r[4] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[3] = c->r[2] << 4;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000004u);
    mem_w32(ram, c->r[4] + 0x00000000u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 3;
    c->r[2] = 0x08aa0000u;
    c->r[2] = c->r[2] + 0xffffee80u;
    c->r[4] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[3] = c->r[2] << 4;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000008u);
    mem_w32(ram, c->r[4] + 0x00000000u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 3;
    c->r[2] = 0x08aa0000u;
    c->r[2] = c->r[2] + 0xffffee78u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[2] = c->r[3] + c->r[2];
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 3;
    c->r[2] = 0x08aa0000u;
    c->r[2] = c->r[2] + 0xffffee78u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    { int _c = ((s32)c->r[2] <= 0); if (_c) goto L_088fc1b4; }
    c->r[2] = 0x08aa0000u;
    c->r[2] = mem_r8(ram, c->r[2] + 0xfffff2bcu);
    c->r[2] = c->r[2] + 0x00000001u;
    c->r[1] = 0x08aa0000u;
    mem_w8(ram, c->r[1] + 0xfffff2bcu, c->r[2]);
L_088fc1b4:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]); goto L_088fc04c; }
L_088fc1c4:
    mem_w32(ram, c->r[30] + 0x00000008u, 0u);
L_088fc1c8:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000028u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_088fc1e0; }
    { goto L_088fc204; }
L_088fc1e0:
    c->r[3] = c->r[30] + 0x00000010u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[3] = c->r[3] + c->r[2];
    c->r[2] = mem_r8(ram, c->r[30] + 0x00000008u);
    mem_w8(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]); goto L_088fc1c8; }
L_088fc204:
    c->r[2] = 0u + 0x00000001u;
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]);
L_088fc20c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000028u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_088fc224; }
    { goto L_088fc314; }
L_088fc224:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    mem_w32(ram, c->r[30] + 0x00000040u, c->r[2]);
L_088fc22c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000040u);
    { int _c = ((s32)c->r[2] <= 0); if (_c) goto L_088fc304; }
    c->r[3] = c->r[30] + 0x0000000fu;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000040u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000000u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 3;
    c->r[2] = 0x08aa0000u;
    c->r[2] = c->r[2] + 0xffffee78u;
    c->r[4] = c->r[3] + c->r[2];
    c->r[3] = c->r[30] + 0x00000010u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000040u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000000u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 3;
    c->r[2] = 0x08aa0000u;
    c->r[2] = c->r[2] + 0xffffee78u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[3] = mem_r32(ram, c->r[4] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[2] = ((s32)c->r[3] < (s32)c->r[2]) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_088fc2ac; }
    { goto L_088fc304; }
L_088fc2ac:
    c->r[3] = c->r[30] + 0x00000010u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000040u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000000u);
    mem_w8(ram, c->r[30] + 0x00000044u, c->r[2]);
    c->r[3] = c->r[30] + 0x00000010u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000040u);
    c->r[4] = c->r[3] + c->r[2];
    c->r[3] = c->r[30] + 0x0000000fu;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000040u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000000u);
    mem_w8(ram, c->r[4] + 0x00000000u, c->r[2]);
    c->r[3] = c->r[30] + 0x0000000fu;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000040u);
    c->r[3] = c->r[3] + c->r[2];
    c->r[2] = mem_r8(ram, c->r[30] + 0x00000044u);
    mem_w8(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000040u);
    c->r[2] = c->r[2] + 0xffffffffu;
    { mem_w32(ram, c->r[30] + 0x00000040u, c->r[2]); goto L_088fc22c; }
L_088fc304:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]); goto L_088fc20c; }
L_088fc314:
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00006380u);
    mem_wf32(ram, c->r[30] + 0x00000048u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_088fc344; }
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000004u);
    c->f[1] = (f32)(s32)f2u(c->f[0]);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00006380u);
    c->f[0] = c->f[0] / c->f[1];
    mem_wf32(ram, c->r[30] + 0x00000048u, c->f[0]);
L_088fc344:
    c->r[2] = 0u + 0x00000001u;
    mem_w32(ram, c->r[30] + 0x00000040u, c->r[2]);
    mem_w32(ram, c->r[30] + 0x00000008u, 0u);
    c->r[2] = 0x80000000u;
    mem_w32(ram, c->r[30] + 0x0000004cu, c->r[2]);
    mem_w32(ram, c->r[30] + 0x00000050u, 0u);
L_088fc35c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000050u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000028u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_088fc374; }
    { goto L_088fc500; }
L_088fc374:
    c->r[3] = c->r[30] + 0x00000010u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000050u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000000u);
    c->r[3] = c->r[2] << 1;
    c->r[2] = 0x08a80000u;
    c->r[2] = c->r[2] + 0x00000e44u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r16(ram, c->r[2] + 0x00000002u);
    c->r[2] = c->r[2] & 0x0002u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_088fc3ac; }
    { goto L_088fc4f0; }
L_088fc3ac:
    c->r[3] = c->r[30] + 0x00000010u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000050u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000000u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 3;
    c->r[2] = 0x08aa0000u;
    c->r[2] = c->r[2] + 0xffffee78u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[3] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000004cu);
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_088fc3f8; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]); goto L_088fc410; }
L_088fc3f8:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000040u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[3] + c->r[2];
    mem_w32(ram, c->r[30] + 0x00000040u, c->r[2]);
    c->r[2] = 0u + 0x00000001u;
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]);
L_088fc410:
    c->r[3] = c->r[30] + 0x00000010u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000050u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000000u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 3;
    c->r[2] = 0x08aa0000u;
    c->r[2] = c->r[2] + 0xffffee78u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    mem_w32(ram, c->r[30] + 0x0000004cu, c->r[2]);
    c->r[3] = c->r[30] + 0x00000010u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000050u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000000u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 3;
    c->r[2] = 0x08aa0000u;
    c->r[2] = c->r[2] + 0xffffee84u;
    c->r[3] = c->r[3] + c->r[2];
    c->r[2] = mem_r8(ram, c->r[30] + 0x00000040u);
    mem_w8(ram, c->r[3] + 0x00000004u, c->r[2]);
    c->r[3] = c->r[30] + 0x00000010u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000050u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000000u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 3;
    c->r[2] = 0x08aa0000u;
    c->r[2] = c->r[2] + 0xffffee74u;
    c->r[4] = c->r[3] + c->r[2];
    c->r[3] = c->r[30] + 0x00000010u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000050u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000000u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 3;
    c->r[2] = 0x08aa0000u;
    c->r[2] = c->r[2] + 0xffffee78u;
    c->r[2] = c->r[3] + c->r[2];
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000000u);
    c->f[1] = (f32)(s32)f2u(c->f[0]);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000048u);
    c->f[1] = c->f[1] * c->f[0];
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00006384u);
    c->f[0] = c->f[1] * c->f[0];
    mem_wf32(ram, c->r[4] + 0x00000000u, c->f[0]);
L_088fc4f0:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000050u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000050u, c->r[2]); goto L_088fc35c; }
L_088fc500:
    mem_w32(ram, c->r[30] + 0x00000050u, 0u);
L_088fc504:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000050u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000028u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_088fc51c; }
    { goto L_088fc540; }
L_088fc51c:
    c->r[3] = c->r[30] + 0x00000010u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000050u);
    c->r[3] = c->r[3] + c->r[2];
    c->r[2] = mem_r8(ram, c->r[30] + 0x00000050u);
    mem_w8(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000050u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000050u, c->r[2]); goto L_088fc504; }
L_088fc540:
    c->r[2] = 0u + 0x00000001u;
    mem_w32(ram, c->r[30] + 0x00000050u, c->r[2]);
L_088fc548:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000050u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000028u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_088fc560; }
    { goto L_088fc650; }
L_088fc560:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000050u);
    mem_w32(ram, c->r[30] + 0x00000054u, c->r[2]);
L_088fc568:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000054u);
    { int _c = ((s32)c->r[2] <= 0); if (_c) goto L_088fc640; }
    c->r[3] = c->r[30] + 0x0000000fu;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000054u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000000u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 3;
    c->r[2] = 0x08aa0000u;
    c->r[2] = c->r[2] + 0xffffee7cu;
    c->r[4] = c->r[3] + c->r[2];
    c->r[3] = c->r[30] + 0x00000010u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000054u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000000u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 3;
    c->r[2] = 0x08aa0000u;
    c->r[2] = c->r[2] + 0xffffee7cu;
    c->r[2] = c->r[3] + c->r[2];
    c->r[3] = mem_r32(ram, c->r[4] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[2] = ((s32)c->r[3] < (s32)c->r[2]) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_088fc5e8; }
    { goto L_088fc640; }
L_088fc5e8:
    c->r[3] = c->r[30] + 0x00000010u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000054u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000000u);
    mem_w8(ram, c->r[30] + 0x00000044u, c->r[2]);
    c->r[3] = c->r[30] + 0x00000010u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000054u);
    c->r[4] = c->r[3] + c->r[2];
    c->r[3] = c->r[30] + 0x0000000fu;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000054u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000000u);
    mem_w8(ram, c->r[4] + 0x00000000u, c->r[2]);
    c->r[3] = c->r[30] + 0x0000000fu;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000054u);
    c->r[3] = c->r[3] + c->r[2];
    c->r[2] = mem_r8(ram, c->r[30] + 0x00000044u);
    mem_w8(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000054u);
    c->r[2] = c->r[2] + 0xffffffffu;
    { mem_w32(ram, c->r[30] + 0x00000054u, c->r[2]); goto L_088fc568; }
L_088fc640:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000050u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000050u, c->r[2]); goto L_088fc548; }
L_088fc650:
    c->r[2] = 0u + 0x00000001u;
    mem_w32(ram, c->r[30] + 0x00000040u, c->r[2]);
    mem_w32(ram, c->r[30] + 0x00000008u, 0u);
    c->r[2] = 0x80000000u;
    mem_w32(ram, c->r[30] + 0x0000004cu, c->r[2]);
    mem_w32(ram, c->r[30] + 0x00000054u, 0u);
L_088fc668:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000054u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000028u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_088fc680; }
    { goto L_088fc794; }
L_088fc680:
    c->r[3] = c->r[30] + 0x00000010u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000054u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000000u);
    c->r[3] = c->r[2] << 1;
    c->r[2] = 0x08a80000u;
    c->r[2] = c->r[2] + 0x00000e44u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r16(ram, c->r[2] + 0x00000002u);
    c->r[2] = c->r[2] & 0x0002u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_088fc6b8; }
    { goto L_088fc784; }
L_088fc6b8:
    c->r[3] = c->r[30] + 0x00000010u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000054u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000000u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 3;
    c->r[2] = 0x08aa0000u;
    c->r[2] = c->r[2] + 0xffffee7cu;
    c->r[2] = c->r[3] + c->r[2];
    c->r[3] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000004cu);
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_088fc704; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]); goto L_088fc71c; }
L_088fc704:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000040u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[3] + c->r[2];
    mem_w32(ram, c->r[30] + 0x00000040u, c->r[2]);
    c->r[2] = 0u + 0x00000001u;
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]);
L_088fc71c:
    c->r[3] = c->r[30] + 0x00000010u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000054u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000000u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 3;
    c->r[2] = 0x08aa0000u;
    c->r[2] = c->r[2] + 0xffffee7cu;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    mem_w32(ram, c->r[30] + 0x0000004cu, c->r[2]);
    c->r[3] = c->r[30] + 0x00000010u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000054u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000000u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 3;
    c->r[2] = 0x08aa0000u;
    c->r[2] = c->r[2] + 0xffffee84u;
    c->r[3] = c->r[3] + c->r[2];
    c->r[2] = mem_r8(ram, c->r[30] + 0x00000040u);
    mem_w8(ram, c->r[3] + 0x00000006u, c->r[2]);
L_088fc784:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000054u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000054u, c->r[2]); goto L_088fc668; }
L_088fc794:
    mem_w32(ram, c->r[30] + 0x00000054u, 0u);
L_088fc798:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000054u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000028u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_088fc7b0; }
    { goto L_088fc7d4; }
L_088fc7b0:
    c->r[3] = c->r[30] + 0x00000010u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000054u);
    c->r[3] = c->r[3] + c->r[2];
    c->r[2] = mem_r8(ram, c->r[30] + 0x00000054u);
    mem_w8(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000054u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000054u, c->r[2]); goto L_088fc798; }
L_088fc7d4:
    c->r[2] = 0u + 0x00000001u;
    mem_w32(ram, c->r[30] + 0x00000054u, c->r[2]);
L_088fc7dc:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000054u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000028u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_088fc7f4; }
    { goto L_088fc8e4; }
L_088fc7f4:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000054u);
    mem_w32(ram, c->r[30] + 0x00000050u, c->r[2]);
L_088fc7fc:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000050u);
    { int _c = ((s32)c->r[2] <= 0); if (_c) goto L_088fc8d4; }
    c->r[3] = c->r[30] + 0x0000000fu;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000050u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000000u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 3;
    c->r[2] = 0x08aa0000u;
    c->r[2] = c->r[2] + 0xffffee80u;
    c->r[4] = c->r[3] + c->r[2];
    c->r[3] = c->r[30] + 0x00000010u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000050u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000000u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 3;
    c->r[2] = 0x08aa0000u;
    c->r[2] = c->r[2] + 0xffffee80u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[3] = mem_r32(ram, c->r[4] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[2] = ((s32)c->r[3] < (s32)c->r[2]) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_088fc87c; }
    { goto L_088fc8d4; }
L_088fc87c:
    c->r[3] = c->r[30] + 0x00000010u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000050u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000000u);
    mem_w8(ram, c->r[30] + 0x00000044u, c->r[2]);
    c->r[3] = c->r[30] + 0x00000010u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000050u);
    c->r[4] = c->r[3] + c->r[2];
    c->r[3] = c->r[30] + 0x0000000fu;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000050u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000000u);
    mem_w8(ram, c->r[4] + 0x00000000u, c->r[2]);
    c->r[3] = c->r[30] + 0x0000000fu;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000050u);
    c->r[3] = c->r[3] + c->r[2];
    c->r[2] = mem_r8(ram, c->r[30] + 0x00000044u);
    mem_w8(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000050u);
    c->r[2] = c->r[2] + 0xffffffffu;
    { mem_w32(ram, c->r[30] + 0x00000050u, c->r[2]); goto L_088fc7fc; }
L_088fc8d4:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000054u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000054u, c->r[2]); goto L_088fc7dc; }
L_088fc8e4:
    c->r[2] = 0u + 0x00000001u;
    mem_w32(ram, c->r[30] + 0x00000040u, c->r[2]);
    mem_w32(ram, c->r[30] + 0x00000008u, 0u);
    c->r[2] = 0x80000000u;
    mem_w32(ram, c->r[30] + 0x0000004cu, c->r[2]);
    mem_w32(ram, c->r[30] + 0x00000054u, 0u);
L_088fc8fc:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000054u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000028u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_088fc914; }
    { goto L_088fca28; }
L_088fc914:
    c->r[3] = c->r[30] + 0x00000010u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000054u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000000u);
    c->r[3] = c->r[2] << 1;
    c->r[2] = 0x08a80000u;
    c->r[2] = c->r[2] + 0x00000e44u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r16(ram, c->r[2] + 0x00000002u);
    c->r[2] = c->r[2] & 0x0002u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_088fc94c; }
    { goto L_088fca18; }
L_088fc94c:
    c->r[3] = c->r[30] + 0x00000010u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000054u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000000u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 3;
    c->r[2] = 0x08aa0000u;
    c->r[2] = c->r[2] + 0xffffee80u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[3] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000004cu);
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_088fc998; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]); goto L_088fc9b0; }
L_088fc998:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000040u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[3] + c->r[2];
    mem_w32(ram, c->r[30] + 0x00000040u, c->r[2]);
    c->r[2] = 0u + 0x00000001u;
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]);
L_088fc9b0:
    c->r[3] = c->r[30] + 0x00000010u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000054u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000000u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 3;
    c->r[2] = 0x08aa0000u;
    c->r[2] = c->r[2] + 0xffffee80u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    mem_w32(ram, c->r[30] + 0x0000004cu, c->r[2]);
    c->r[3] = c->r[30] + 0x00000010u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000054u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000000u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 3;
    c->r[2] = 0x08aa0000u;
    c->r[2] = c->r[2] + 0xffffee84u;
    c->r[3] = c->r[3] + c->r[2];
    c->r[2] = mem_r8(ram, c->r[30] + 0x00000040u);
    mem_w8(ram, c->r[3] + 0x00000007u, c->r[2]);
L_088fca18:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000054u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000054u, c->r[2]); goto L_088fc8fc; }
L_088fca28:
    mem_w32(ram, c->r[30] + 0x00000054u, 0u);
L_088fca2c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000054u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000028u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_088fca44; }
    { goto L_088fca68; }
L_088fca44:
    c->r[3] = c->r[30] + 0x00000010u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000054u);
    c->r[3] = c->r[3] + c->r[2];
    c->r[2] = mem_r8(ram, c->r[30] + 0x00000054u);
    mem_w8(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000054u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000054u, c->r[2]); goto L_088fca2c; }
L_088fca68:
    c->r[2] = 0u + 0x00000001u;
    mem_w32(ram, c->r[30] + 0x00000054u, c->r[2]);
L_088fca70:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000054u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000028u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_088fca88; }
    { goto L_088fcb78; }
L_088fca88:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000054u);
    mem_w32(ram, c->r[30] + 0x00000050u, c->r[2]);
L_088fca90:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000050u);
    { int _c = ((s32)c->r[2] <= 0); if (_c) goto L_088fcb68; }
    c->r[3] = c->r[30] + 0x0000000fu;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000050u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000000u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 3;
    c->r[2] = 0x08aa0000u;
    c->r[2] = c->r[2] + 0xffffee84u;
    c->r[4] = c->r[3] + c->r[2];
    c->r[3] = c->r[30] + 0x00000010u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000050u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000000u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 3;
    c->r[2] = 0x08aa0000u;
    c->r[2] = c->r[2] + 0xffffee84u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[3] = mem_r32(ram, c->r[4] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[2] = ((s32)c->r[3] < (s32)c->r[2]) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_088fcb10; }
    { goto L_088fcb68; }
L_088fcb10:
    c->r[3] = c->r[30] + 0x00000010u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000050u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000000u);
    mem_w8(ram, c->r[30] + 0x00000044u, c->r[2]);
    c->r[3] = c->r[30] + 0x00000010u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000050u);
    c->r[4] = c->r[3] + c->r[2];
    c->r[3] = c->r[30] + 0x0000000fu;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000050u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000000u);
    mem_w8(ram, c->r[4] + 0x00000000u, c->r[2]);
    c->r[3] = c->r[30] + 0x0000000fu;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000050u);
    c->r[3] = c->r[3] + c->r[2];
    c->r[2] = mem_r8(ram, c->r[30] + 0x00000044u);
    mem_w8(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000050u);
    c->r[2] = c->r[2] + 0xffffffffu;
    { mem_w32(ram, c->r[30] + 0x00000050u, c->r[2]); goto L_088fca90; }
L_088fcb68:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000054u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000054u, c->r[2]); goto L_088fca70; }
L_088fcb78:
    c->r[2] = 0u + 0x00000001u;
    mem_w32(ram, c->r[30] + 0x00000040u, c->r[2]);
    mem_w32(ram, c->r[30] + 0x00000008u, 0u);
    c->r[2] = 0x80000000u;
    mem_w32(ram, c->r[30] + 0x0000004cu, c->r[2]);
    mem_w32(ram, c->r[30] + 0x00000054u, 0u);
L_088fcb90:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000054u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000028u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_088fcba8; }
    { goto L_088fccbc; }
L_088fcba8:
    c->r[3] = c->r[30] + 0x00000010u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000054u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000000u);
    c->r[3] = c->r[2] << 1;
    c->r[2] = 0x08a80000u;
    c->r[2] = c->r[2] + 0x00000e44u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r16(ram, c->r[2] + 0x00000002u);
    c->r[2] = c->r[2] & 0x0002u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_088fcbe0; }
    { goto L_088fccac; }
L_088fcbe0:
    c->r[3] = c->r[30] + 0x00000010u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000054u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000000u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 3;
    c->r[2] = 0x08aa0000u;
    c->r[2] = c->r[2] + 0xffffee84u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[3] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000004cu);
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_088fcc2c; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]); goto L_088fcc44; }
L_088fcc2c:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000040u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[3] + c->r[2];
    mem_w32(ram, c->r[30] + 0x00000040u, c->r[2]);
    c->r[2] = 0u + 0x00000001u;
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]);
L_088fcc44:
    c->r[3] = c->r[30] + 0x00000010u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000054u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000000u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 3;
    c->r[2] = 0x08aa0000u;
    c->r[2] = c->r[2] + 0xffffee84u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    mem_w32(ram, c->r[30] + 0x0000004cu, c->r[2]);
    c->r[3] = c->r[30] + 0x00000010u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000054u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000000u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 3;
    c->r[2] = 0x08aa0000u;
    c->r[2] = c->r[2] + 0xffffee84u;
    c->r[3] = c->r[3] + c->r[2];
    c->r[2] = mem_r8(ram, c->r[30] + 0x00000040u);
    mem_w8(ram, c->r[3] + 0x00000005u, c->r[2]);
L_088fccac:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000054u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000054u, c->r[2]); goto L_088fcb90; }
L_088fccbc:
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000060u);
    { c->r[29] = c->r[29] + 0x00000070u; return; }
    return; /* fell out of func_088fbfb8 */
}

/* func_08901214  0x08901214..0x08901270  92 bytes, source=fde */
void func_08901214(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08901214u);
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
    { c->r[31] = 0x08901254u; c->r[6] = 0u + 0x000019e8u; func_089d9d14(c, ram); }
    mem_w32(ram, c->r[16] + 0x00000000u, c->r[2]);
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000018u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[16] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_08901214 */
}

/* func_08903b08  0x08903b08..0x08903b2c  36 bytes, source=sweep */
void func_08903b08(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08903b08u);
    c->r[29] = c->r[29] + 0xfffffff0u;
    mem_w32(ram, c->r[29] + 0x00000000u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    c->r[1] = 0x08aa0000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xfffff568u);
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000000u);
    { c->r[29] = c->r[29] + 0x00000010u; return; }
    return; /* fell out of func_08903b08 */
}

/* func_0890aad4  0x0890aad4..0x0890ade4  784 bytes, source=fde */
void func_0890aad4(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0890aad4u);
    c->r[29] = c->r[29] + 0xffffffd0u;
    mem_w32(ram, c->r[29] + 0x00000024u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000020u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x0890aaf4u; c->r[4] = c->r[4] + 0x00000af4u; func_0880d380(c, ram); }
    c->r[3] = 0x08aa0000u;
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[3] + 0xfffff564u);
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x0890ab08u; c->r[5] = c->r[3] + 0u; func_089232b0(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = 0u + 0xffffffffu;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_0890ab24; }
    { goto L_0890add0; }
L_0890ab24:
    c->r[4] = 0x08aa0000u;
    c->r[4] = c->r[4] + 0xfffff540u;
    c->r[5] = 0u + 0x00000046u;
    { c->r[31] = 0x0890ab38u; c->r[6] = 0u + 0u; func_0880ef80(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000020u);
    c->f[0] = mem_rf32(ram, c->r[3] + 0x00000000u);
    c->f[0] = c->f[1] - c->f[0];
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    mem_wf32(ram, c->r[30] + 0x0000000cu, c->f[0]);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x0000000cu);
    c->f[1] = (f32)(s32)f2u(c->f[0]);
    c->r[1] = 0x08aa0000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xfffff568u);
    c->f[0] = c->f[1] * c->f[0];
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    mem_wf32(ram, c->r[30] + 0x0000000cu, c->f[0]);
    c->r[1] = 0x08aa0000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0xfffff568u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00006718u);
    alx_c_cond_s(c, 12, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_0890ab9c; }
    { goto L_0890abac; }
L_0890ab9c:
    c->r[2] = 0xbf600000u;
    c->r[2] = c->r[2] | 0x9000u;
    { mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]); goto L_0890ac28; }
L_0890abac:
    c->r[1] = 0x08aa0000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0xfffff568u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x0000671cu);
    alx_c_cond_s(c, 12, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_0890abd4; }
    { goto L_0890abe4; }
L_0890abd4:
    c->r[2] = 0xbf000000u;
    c->r[2] = c->r[2] | 0x9090u;
    { mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]); goto L_0890ac28; }
L_0890abe4:
    c->r[1] = 0x08aa0000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0xfffff568u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00006720u);
    alx_c_cond_s(c, 12, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_0890ac0c; }
    { goto L_0890ac1c; }
L_0890ac0c:
    c->r[2] = 0xbf000000u;
    c->r[2] = c->r[2] | 0x0090u;
    { mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]); goto L_0890ac28; }
L_0890ac1c:
    c->r[2] = 0xbf000000u;
    c->r[2] = c->r[2] | 0x0090u;
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]);
L_0890ac28:
    { c->r[31] = 0x0890ac30u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000010u); func_089035ac(c, ram); }
    c->r[4] = 0u + 0x00000018u;
    { c->r[31] = 0x0890ac3cu; c->r[5] = 0u + 0x00000010u; func_0881a1d4(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000000u);
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    c->r[2] = f2u(c->f[0]);
    mem_w16(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000004u);
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    c->r[2] = f2u(c->f[0]);
    mem_w16(ram, c->r[3] + 0x00000002u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[4] = c->r[2] + 0x00000006u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000000u);
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    c->r[3] = f2u(c->f[0]);
    c->r[2] = mem_r16(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[3] + c->r[2];
    mem_w16(ram, c->r[4] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[3] = c->r[2] + 0x00000006u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000004u);
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    c->r[2] = f2u(c->f[0]);
    mem_w16(ram, c->r[3] + 0x00000002u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[3] = c->r[2] + 0x0000000cu;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000000u);
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    c->r[2] = f2u(c->f[0]);
    mem_w16(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[3] = c->r[2] + 0x0000000cu;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000024u);
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    c->r[2] = f2u(c->f[0]);
    mem_w16(ram, c->r[3] + 0x00000002u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[4] = c->r[2] + 0x00000012u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000000u);
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    c->r[3] = f2u(c->f[0]);
    c->r[2] = mem_r16(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[3] + c->r[2];
    mem_w16(ram, c->r[4] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[3] = c->r[2] + 0x00000012u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000024u);
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    c->r[2] = f2u(c->f[0]);
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
    c->r[5] = 0u + 0x00000004u;
    c->r[6] = 0x00800000u;
    c->r[6] = c->r[6] | 0x0100u;
    c->r[7] = 0u + 0x00000004u;
    c->r[8] = 0u + 0u;
    { c->r[31] = 0x0890ad84u; c->r[9] = mem_r32(ram, c->r[30] + 0x00000014u); func_0892083c(c, ram); }
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000700u);
    c->r[2] = 0u + 0x000002e8u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[4] = c->lo;
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
    { c->r[31] = 0x0890add0u; c->r[5] = c->r[5] | 0x0102u; func_089207f8(c, ram); }
L_0890add0:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000024u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000020u);
    { c->r[29] = c->r[29] + 0x00000030u; return; }
    return; /* fell out of func_0890aad4 */
}

/* func_08917d80  0x08917d80..0x08919138  5048 bytes, source=fde */
void func_08917d80(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08917d80u);
    c->r[29] = c->r[29] + 0xfffffe90u;
    mem_w32(ram, c->r[29] + 0x00000168u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000164u, c->r[30]);
    mem_w32(ram, c->r[29] + 0x00000160u, c->r[16]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x08917da4u; c->r[4] = c->r[4] + 0x00000ac8u; func_089cb8ac(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[2]);
    c->r[2] = 0x08a80000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00002ed8u);
    c->r[2] = c->r[2] + 0x000000e0u;
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]);
    c->r[3] = c->r[30] + 0x00000010u;
    c->r[2] = 0x08a40000u;
    c->r[2] = c->r[2] + 0x00006a78u;
    c->r[4] = mem_lwl(ram, c->r[2] + 0x00000003u, c->r[4]);
    c->r[4] = mem_lwr(ram, c->r[2] + 0x00000000u, c->r[4]);
    c->r[5] = mem_lwl(ram, c->r[2] + 0x00000007u, c->r[5]);
    c->r[5] = mem_lwr(ram, c->r[2] + 0x00000004u, c->r[5]);
    c->r[6] = mem_lwl(ram, c->r[2] + 0x0000000bu, c->r[6]);
    c->r[6] = mem_lwr(ram, c->r[2] + 0x00000008u, c->r[6]);
    mem_swl(ram, c->r[3] + 0x00000003u, c->r[4]);
    mem_swr(ram, c->r[3] + 0x00000000u, c->r[4]);
    mem_swl(ram, c->r[3] + 0x00000007u, c->r[5]);
    mem_swr(ram, c->r[3] + 0x00000004u, c->r[5]);
    mem_swl(ram, c->r[3] + 0x0000000bu, c->r[6]);
    mem_swr(ram, c->r[3] + 0x00000008u, c->r[6]);
    c->r[3] = c->r[30] + 0x00000020u;
    c->r[2] = 0x08a40000u;
    c->r[2] = c->r[2] + 0x00006a84u;
    c->r[4] = mem_lwl(ram, c->r[2] + 0x00000003u, c->r[4]);
    c->r[4] = mem_lwr(ram, c->r[2] + 0x00000000u, c->r[4]);
    c->r[5] = mem_lwl(ram, c->r[2] + 0x00000007u, c->r[5]);
    c->r[5] = mem_lwr(ram, c->r[2] + 0x00000004u, c->r[5]);
    c->r[6] = mem_lwl(ram, c->r[2] + 0x0000000bu, c->r[6]);
    c->r[6] = mem_lwr(ram, c->r[2] + 0x00000008u, c->r[6]);
    mem_swl(ram, c->r[3] + 0x00000003u, c->r[4]);
    mem_swr(ram, c->r[3] + 0x00000000u, c->r[4]);
    mem_swl(ram, c->r[3] + 0x00000007u, c->r[5]);
    mem_swr(ram, c->r[3] + 0x00000004u, c->r[5]);
    mem_swl(ram, c->r[3] + 0x0000000bu, c->r[6]);
    mem_swr(ram, c->r[3] + 0x00000008u, c->r[6]);
    mem_w32(ram, c->r[30] + 0x00000030u, 0u);
    mem_w32(ram, c->r[30] + 0x00000040u, 0u);
    mem_w32(ram, c->r[30] + 0x00000044u, 0u);
    mem_w32(ram, c->r[30] + 0x00000048u, 0u);
    mem_w32(ram, c->r[30] + 0x0000004cu, 0u);
    c->r[3] = 0x08aa0000u;
    c->r[3] = mem_r8(ram, c->r[3] + 0x00004960u);
    c->r[2] = 0u + 0x00000003u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_08917e60; }
    { goto L_08919120; }
L_08917e60:
    c->r[2] = 0x08a90000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0xffffba0cu);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000ac8u;
    { c->r[31] = 0x08917e78u; c->r[5] = c->r[2] + 0u; func_089cb820(c, ram); }
    { int _c = (c->r[2] == 0u); if (_c) goto L_08917e9c; }
    c->r[2] = 0x08a90000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0xffffba0cu);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000ac8u;
    { c->r[31] = 0x08917e98u; c->r[5] = c->r[2] + 0u; func_089cb820(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000030u, c->r[2]);
L_08917e9c:
    mem_w32(ram, c->r[30] + 0x00000050u, 0u);
L_08917ea0:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000050u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000004u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_08917eb8; }
    { goto L_08917f34; }
L_08917eb8:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000050u);
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08a90000u;
    c->r[2] = c->r[2] + 0xffffba10u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000ac8u;
    { c->r[31] = 0x08917ee0u; c->r[5] = c->r[2] + 0u; func_089cb820(c, ram); }
    { int _c = (c->r[2] == 0u); if (_c) goto L_08917f24; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000050u);
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[30];
    c->r[16] = c->r[2] + 0x00000040u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000050u);
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08a90000u;
    c->r[2] = c->r[2] + 0xffffba10u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000ac8u;
    { c->r[31] = 0x08917f20u; c->r[5] = c->r[2] + 0u; func_089cb820(c, ram); }
    mem_w32(ram, c->r[16] + 0x00000000u, c->r[2]);
L_08917f24:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000050u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000050u, c->r[2]); goto L_08917ea0; }
L_08917f34:
    c->r[2] = c->r[30] + 0x00000060u;
    { c->r[31] = 0x08917f40u; c->r[4] = c->r[2] + 0u; func_08808240(c, ram); }
    c->r[2] = c->r[30] + 0x00000070u;
    { c->r[31] = 0x08917f4cu; c->r[4] = c->r[2] + 0u; func_08808240(c, ram); }
    c->r[2] = 0x08a40000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00006a90u);
    mem_w32(ram, c->r[30] + 0x00000080u, c->r[2]);
    c->r[2] = 0x08a40000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00006a94u);
    mem_w32(ram, c->r[30] + 0x00000084u, c->r[2]);
    c->r[2] = 0x08a40000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00006a98u);
    mem_w32(ram, c->r[30] + 0x00000088u, c->r[2]);
    c->r[2] = 0x08a40000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00006a9cu);
    mem_w32(ram, c->r[30] + 0x0000008cu, c->r[2]);
    c->r[2] = 0x08a40000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x000067e8u);
    mem_w32(ram, c->r[30] + 0x00000090u, c->r[2]);
    c->r[2] = 0x08a40000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x000067ecu);
    mem_w32(ram, c->r[30] + 0x00000094u, c->r[2]);
    c->r[2] = 0x08a40000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x000067f0u);
    mem_w32(ram, c->r[30] + 0x00000098u, c->r[2]);
    c->r[2] = 0x08a40000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x000067f4u);
    mem_w32(ram, c->r[30] + 0x0000009cu, c->r[2]);
    c->r[2] = c->r[30] + 0x000000c0u;
    { c->r[31] = 0x08917fb8u; c->r[4] = c->r[2] + 0u; func_08808240(c, ram); }
    c->r[2] = 0x7f170000u;
    c->r[2] = c->r[2] | 0x177fu;
    mem_w32(ram, c->r[30] + 0x000000d0u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000031u);
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08a90000u;
    c->r[2] = c->r[2] + 0xffffbda0u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000004u);
    c->r[2] = mem_r8(ram, c->r[2] + 0x0000001du);
    mem_w8(ram, c->r[30] + 0x000000f0u, c->r[2]);
    mem_w32(ram, c->r[30] + 0x000000f4u, 0u);
    mem_w32(ram, c->r[30] + 0x00000150u, 0u);
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x08917ffcu; c->r[4] = c->r[4] + 0x00000af4u; func_0880d380(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = 0u + 0x00000014u;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_08918030; }
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x08918018u; c->r[4] = c->r[4] + 0x00000af4u; func_0880d380(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = 0u + 0x00000015u;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_08918030; }
    { goto L_08918038; }
L_08918030:
    c->r[2] = 0u + 0x00000001u;
    mem_w32(ram, c->r[30] + 0x00000150u, c->r[2]);
L_08918038:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000150u);
    mem_w32(ram, c->r[30] + 0x000000f8u, c->r[4]);
L_08918040:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_08918054; }
    { goto L_08919108; }
L_08918054:
    mem_w32(ram, c->r[30] + 0x00000100u, 0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = mem_r16(ram, c->r[2] + 0x0000001au);
    c->r[2] = 0u + 0x00000003u;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_08918088; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = mem_r16(ram, c->r[2] + 0x0000001au);
    c->r[2] = 0u + 0x00000005u;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_08918088; }
    { goto L_089190f0; }
L_08918088:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x0000008cu);
    c->r[2] = 0x00400000u;
    c->r[2] = c->r[3] & c->r[2];
    { int _c = (c->r[2] == 0u); if (_c) goto L_089180a8; }
    { goto L_089190f0; }
L_089180a8:
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000f8u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_08918114; }
    c->r[4] = 0x08a90000u;
    { c->r[31] = 0x089180c0u; c->r[4] = c->r[4] + 0xffffb9c0u; func_08920abc(c, ram); }
    { int _c = (c->r[2] == 0u); if (_c) goto L_08918144; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000008cu);
    c->r[2] = c->r[2] & 0x0002u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_08918144; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x000000b8u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00006aa0u);
    alx_c_cond_s(c, 14, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_089190f0; }
    { c->r[31] = 0x08918104u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000004u); func_088d25ac(c, ram); }
    { int _c = (c->r[2] != 0u); if (_c) goto L_08918144; }
    { goto L_089190f0; }
L_08918114:
    c->r[4] = 0x08a90000u;
    { c->r[31] = 0x08918120u; c->r[4] = c->r[4] + 0xffffb9c0u; func_08920abc(c, ram); }
    { int _c = (c->r[2] == 0u); if (_c) goto L_08918144; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000008cu);
    c->r[2] = c->r[2] & 0x0002u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_08918144; }
    { goto L_089190f0; }
L_08918144:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000008cu);
    c->r[2] = c->r[2] & 0x0010u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_0891816c; }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x08918164u; c->r[5] = mem_r32(ram, c->r[30] + 0x00000004u); func_0891abfc(c, ram); }
    { goto L_089190f0; }
L_0891816c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000008cu);
    c->r[2] = c->r[2] & 0x0020u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_08918194; }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x0891818cu; c->r[5] = mem_r32(ram, c->r[30] + 0x00000004u); func_0891ae30(c, ram); }
    { goto L_089190f0; }
L_08918194:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x0000008cu);
    c->r[2] = 0x00200000u;
    c->r[2] = c->r[3] & c->r[2];
    { int _c = (c->r[2] == 0u); if (_c) goto L_08918244; }
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x089181b8u; c->r[4] = c->r[4] + 0x00000af4u; func_0880d294(c, ram); }
    { int _c = (c->r[2] == 0u); if (_c) goto L_089181e4; }
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x089181ccu; c->r[4] = c->r[4] + 0x00000af4u; func_0880d294(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = 0u + 0x00000001u;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_089181e4; }
    { goto L_089181f8; }
L_089181e4:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x089181f0u; c->r[5] = mem_r32(ram, c->r[30] + 0x00000004u); func_0891b0b8(c, ram); }
    { goto L_089190f0; }
L_089181f8:
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x08918204u; c->r[4] = c->r[4] + 0x00000af4u; func_08813c00(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = 0u + 0x00000001u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_08918244; }
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x08918220u; c->r[4] = c->r[4] + 0x00000af4u; func_0880d380(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = 0u + 0x00000008u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_08918244; }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x0891823cu; c->r[5] = mem_r32(ram, c->r[30] + 0x00000004u); func_0891b330(c, ram); }
    { goto L_089190f0; }
L_08918244:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000008cu);
    c->r[2] = c->r[2] & 0x000eu;
    { int _c = (c->r[2] != 0u); if (_c) goto L_08918260; }
    { goto L_089190f0; }
L_08918260:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x0000008cu);
    c->r[2] = 0x20000000u;
    c->r[2] = c->r[3] & c->r[2];
    { int _c = (c->r[2] != 0u); if (_c) goto L_089182ac; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000008cu);
    c->r[2] = c->r[2] & 0x0800u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_089182ac; }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x0000008cu);
    c->r[2] = 0xfffe0000u;
    c->r[2] = c->r[2] | 0xffffu;
    c->r[2] = c->r[3] & c->r[2];
    { mem_w32(ram, c->r[4] + 0x0000008cu, c->r[2]); goto L_089190f0; }
L_089182ac:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x000000b0u);
    { int _c = ((s32)c->r[2] > 0); if (_c) goto L_089182c4; }
    { goto L_089190f0; }
L_089182c4:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x000000b8u);
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    mem_wf32(ram, c->r[30] + 0x000000fcu, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000fcu);
    c->r[2] = ((s32)c->r[2] < (s32)0x00007ef5u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_089182ec; }
    { goto L_089190f0; }
L_089182ec:
    c->r[2] = mem_r8(ram, c->r[30] + 0x000000f0u);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000004u);
    { c->r[31] = 0x089182fcu; c->r[5] = c->r[2] + 0u; func_0891d354(c, ram); }
    { int _c = (c->r[2] == 0u); if (_c) goto L_0891832c; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000008cu);
    c->r[2] = c->r[2] & 0x0030u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_0891832c; }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x08918324u; c->r[5] = mem_r32(ram, c->r[30] + 0x00000004u); func_0891aa30(c, ram); }
    { goto L_089190f0; }
L_0891832c:
    { c->r[31] = 0x08918334u; c->r[16] = c->r[30] + 0x00000110u; func_08820f58(c, ram); }
    c->r[3] = c->r[2] + 0x00000020u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[2] + 0x00000020u;
    c->r[4] = c->r[16] + 0u;
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x08918350u; c->r[6] = c->r[3] + 0u; func_0884c07c(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000110u);
    mem_w32(ram, c->r[30] + 0x00000060u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000114u);
    mem_w32(ram, c->r[30] + 0x00000064u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000118u);
    mem_w32(ram, c->r[30] + 0x00000068u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000011cu);
    mem_w32(ram, c->r[30] + 0x0000006cu, c->r[2]);
    c->r[2] = c->r[30] + 0x00000060u;
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0x08b90000u;
    { c->r[31] = 0x08918384u; c->r[5] = c->r[5] + 0x000054c0u; func_08921f64(c, ram); }
    { int _c = (c->r[2] == 0u); if (_c) goto L_089190f0; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000f4u);
    { int _c = ((s32)c->r[2] < 0); if (_c) goto L_08918430; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000008cu);
    c->r[2] = c->r[2] & 0x0004u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_08918430; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x000000f4u);
    c->r[2] = 0x08aa0000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0xfffff9b0u);
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_08918424; }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x0000008cu);
    c->r[2] = 0xfffe0000u;
    c->r[2] = c->r[2] | 0xffffu;
    c->r[2] = c->r[3] & c->r[2];
    mem_w32(ram, c->r[4] + 0x0000008cu, c->r[2]);
    { c->r[31] = 0x089183e4u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000004u); func_08917c30(c, ram); }
    { int _c = (c->r[2] == 0u); if (_c) goto L_08918404; }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x0000008cu);
    c->r[2] = 0x00010000u;
    c->r[2] = c->r[3] | c->r[2];
    mem_w32(ram, c->r[4] + 0x0000008cu, c->r[2]);
L_08918404:
    c->r[2] = 0x08aa0000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0xfffff9b0u);
    c->r[2] = c->r[2] + 0x00000001u;
    c->r[1] = 0x08aa0000u;
    mem_w32(ram, c->r[1] + 0xfffff9b0u, c->r[2]);
    c->r[2] = 0u + 0xffffffffu;
    { mem_w32(ram, c->r[30] + 0x000000f4u, c->r[2]); goto L_08918430; }
L_08918424:
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000f4u);
    c->r[2] = c->r[2] + 0x00000001u;
    mem_w32(ram, c->r[30] + 0x000000f4u, c->r[2]);
L_08918430:
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000060u);
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    c->r[5] = f2u(c->f[0]);
    mem_w16(ram, c->r[30] + 0x000000e0u, c->r[5]);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000064u);
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    c->r[6] = f2u(c->f[0]);
    mem_w16(ram, c->r[30] + 0x000000e2u, c->r[6]);
    c->r[2] = mem_r16(ram, c->r[30] + 0x000000e0u);
    c->r[2] = c->r[2] + 0xffffffedu;
    mem_w16(ram, c->r[30] + 0x00000110u, c->r[2]);
    c->r[2] = mem_r16(ram, c->r[30] + 0x000000e2u);
    c->r[2] = c->r[2] + 0xfffffff5u;
    mem_w16(ram, c->r[30] + 0x00000112u, c->r[2]);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000060u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00006aa4u);
    c->f[0] = c->f[1] - c->f[0];
    mem_wf32(ram, c->r[30] + 0x00000060u, c->f[0]);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000064u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00006aa4u);
    c->f[0] = c->f[1] - c->f[0];
    mem_wf32(ram, c->r[30] + 0x00000064u, c->f[0]);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000060u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00006aa8u);
    alx_c_cond_s(c, 12, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_089190f0; }
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000064u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00006aacu);
    alx_c_cond_s(c, 12, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_089190f0; }
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000060u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00006ab0u);
    alx_c_cond_s(c, 12, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_089190f0; }
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000064u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00006ab0u);
    alx_c_cond_s(c, 12, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_089190f0; }
    c->r[2] = 0x7f400000u;
    c->r[2] = c->r[2] | 0x6000u;
    mem_w32(ram, c->r[30] + 0x00000050u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000008cu);
    c->r[2] = c->r[2] & 0x1000u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_08918528; }
    { mem_w32(ram, c->r[30] + 0x000000a0u, 0u); goto L_08918530; }
L_08918528:
    c->r[2] = 0u + 0x00000003u;
    mem_w32(ram, c->r[30] + 0x000000a0u, c->r[2]);
L_08918530:
    c->r[2] = 0u + 0x00000001u;
    mem_w32(ram, c->r[30] + 0x000000b0u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[2] + 0x000000e0u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    mem_w32(ram, c->r[30] + 0x00000120u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000008cu);
    c->r[2] = c->r[2] & 0x0004u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_089186d8; }
    c->r[2] = 0x7f7f0000u;
    c->r[2] = c->r[2] | 0x1000u;
    mem_w32(ram, c->r[30] + 0x00000050u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x000000a0u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_089185e4; }
    c->r[2] = mem_r16(ram, c->r[30] + 0x00000110u);
    mem_w16(ram, c->r[30] + 0x00000130u, c->r[2]);
    c->r[2] = mem_r16(ram, c->r[30] + 0x00000112u);
    c->r[2] = c->r[2] + 0x0000000au;
    mem_w16(ram, c->r[30] + 0x00000132u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x000000a0u);
    mem_w32(ram, c->r[30] + 0x00000140u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000140u);
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000000u);
    c->r[2] = 0u + 0x00000009u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_089185b8; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000140u);
    c->r[2] = c->r[2] + 0x00000001u;
    mem_w32(ram, c->r[30] + 0x00000140u, c->r[2]);
L_089185b8:
    c->r[2] = c->r[30] + 0x00000130u;
    c->r[4] = 0u + 0x0000003cu;
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000140u);
    c->r[6] = mem_r32(ram, c->r[30] + 0x00000050u);
    c->r[7] = 0u + 0u;
    c->r[8] = 0u + 0x00000001u;
    c->r[9] = c->r[2] + 0u;
    { c->r[31] = 0x089185dcu; c->r[10] = 0u + 0u; func_08903f2c(c, ram); }
    c->r[2] = 0u + 0x00000001u;
    mem_w32(ram, c->r[30] + 0x00000100u, c->r[2]);
L_089185e4:
    c->r[2] = mem_r16(ram, c->r[30] + 0x00000110u);
    mem_w16(ram, c->r[30] + 0x00000130u, c->r[2]);
    c->r[2] = mem_r16(ram, c->r[30] + 0x00000112u);
    c->r[2] = c->r[2] + 0x00000003u;
    mem_w16(ram, c->r[30] + 0x00000132u, c->r[2]);
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x08918604u; c->r[4] = c->r[4] + 0x00000af4u; func_08813c00(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = 0u + 0x00000001u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_089186bc; }
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x08918620u; c->r[4] = c->r[4] + 0x00000af4u; func_0880d380(c, ram); }
    { int _c = (c->r[2] != 0u); if (_c) goto L_089186bc; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000008cu);
    c->r[2] = c->r[2] & 0x0400u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_089186a0; }
    { c->r[31] = 0x08918644u; c->r[4] = 0u + 0x00000054u; func_089c6f04(c, ram); }
    c->r[2] = c->r[2] + 0x00000004u;
    mem_w32(ram, c->r[30] + 0x00000140u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000140u);
    c->r[2] = c->r[2] + 0x000056bcu;
    mem_w32(ram, c->r[30] + 0x00000140u, c->r[2]);
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x08918664u; c->r[4] = c->r[4] + 0x00000af4u; func_0880d4a0(c, ram); }
    c->r[3] = c->r[2] << 5;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000140u);
    c->r[2] = c->r[2] + c->r[3];
    mem_w32(ram, c->r[30] + 0x00000144u, c->r[2]);
    c->r[2] = c->r[30] + 0x00000130u;
    c->r[4] = 0u + 0x0000003cu;
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000144u);
    c->r[6] = mem_r32(ram, c->r[30] + 0x000000d0u);
    c->r[7] = 0u + 0x00000002u;
    c->r[8] = 0u + 0u;
    c->r[9] = c->r[2] + 0u;
    { c->r[31] = 0x08918698u; c->r[10] = 0u + 0u; func_08903f2c(c, ram); }
    { goto L_08918d3c; }
L_089186a0:
    c->r[2] = c->r[30] + 0x00000130u;
    c->r[4] = c->r[2] + 0u;
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000050u);
    { c->r[31] = 0x089186b4u; c->r[6] = 0u + 0x00000001u; func_08903640(c, ram); }
    { goto L_08918d3c; }
L_089186bc:
    c->r[2] = c->r[30] + 0x00000130u;
    c->r[4] = c->r[2] + 0u;
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000050u);
    { c->r[31] = 0x089186d0u; c->r[6] = 0u + 0x00000001u; func_08903640(c, ram); }
    { goto L_08918d3c; }
L_089186d8:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000008cu);
    c->r[2] = c->r[2] & 0x0400u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_089187a8; }
    c->r[2] = mem_r16(ram, c->r[30] + 0x00000110u);
    mem_w16(ram, c->r[30] + 0x00000130u, c->r[2]);
    c->r[2] = mem_r16(ram, c->r[30] + 0x00000112u);
    c->r[2] = c->r[2] + 0x00000003u;
    mem_w16(ram, c->r[30] + 0x00000132u, c->r[2]);
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x0891870cu; c->r[4] = c->r[4] + 0x00000af4u; func_08813c00(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = 0u + 0x00000001u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_08918794; }
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x08918728u; c->r[4] = c->r[4] + 0x00000af4u; func_0880d380(c, ram); }
    { int _c = (c->r[2] != 0u); if (_c) goto L_08918794; }
    { c->r[31] = 0x08918738u; c->r[4] = 0u + 0x00000054u; func_089c6f04(c, ram); }
    c->r[2] = c->r[2] + 0x00000004u;
    mem_w32(ram, c->r[30] + 0x00000144u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000144u);
    c->r[2] = c->r[2] + 0x000056bcu;
    mem_w32(ram, c->r[30] + 0x00000144u, c->r[2]);
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x08918758u; c->r[4] = c->r[4] + 0x00000af4u; func_0880d4a0(c, ram); }
    c->r[3] = c->r[2] << 5;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000144u);
    c->r[2] = c->r[2] + c->r[3];
    mem_w32(ram, c->r[30] + 0x00000140u, c->r[2]);
    c->r[2] = c->r[30] + 0x00000130u;
    c->r[4] = 0u + 0x0000003cu;
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000140u);
    c->r[6] = mem_r32(ram, c->r[30] + 0x000000d0u);
    c->r[7] = 0u + 0x00000002u;
    c->r[8] = 0u + 0u;
    c->r[9] = c->r[2] + 0u;
    { c->r[31] = 0x0891878cu; c->r[10] = 0u + 0u; func_08903f2c(c, ram); }
    { goto L_089187a8; }
L_08918794:
    c->r[2] = c->r[30] + 0x00000130u;
    c->r[4] = c->r[2] + 0u;
    c->r[5] = mem_r32(ram, c->r[30] + 0x000000d0u);
    { c->r[31] = 0x089187a8u; c->r[6] = 0u + 0u; func_08903640(c, ram); }
L_089187a8:
    mem_w32(ram, c->r[30] + 0x00000144u, 0u);
L_089187ac:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000144u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000004u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_089187c4; }
    { goto L_08918ba4; }
L_089187c4:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000144u);
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[30];
    c->r[2] = c->r[2] + 0x00000040u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_08918b94; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000144u);
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[30];
    c->r[2] = c->r[2] + 0x00000090u;
    c->r[3] = 0x08a90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0xffffbbdcu);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[2] = c->r[3] & c->r[2];
    { int _c = (c->r[2] != 0u); if (_c) goto L_08918858; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000030u);
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_089189e0; }
    c->r[2] = 0x08a90000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0xffffbbdcu);
    { int _c = (c->r[2] != 0u); if (_c) goto L_089189e0; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000144u);
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[30];
    c->r[2] = c->r[2] + 0x00000080u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[2] = c->r[2] & 0x0001u;
    c->r[2] = c->r[2] & 0x00ffu;
    { int _c = (c->r[2] != 0u); if (_c) goto L_08918858; }
    { goto L_089189e0; }
L_08918858:
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000060u);
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    c->r[2] = f2u(c->f[0]);
    c->r[2] = c->r[2] << 16;
    c->r[4] = (u32)((s32)c->r[2] >> 16);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000064u);
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    c->r[2] = f2u(c->f[0]);
    c->r[2] = c->r[2] << 16;
    c->r[2] = (u32)((s32)c->r[2] >> 16);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = c->r[2] + 0u;
    c->r[6] = mem_r32(ram, c->r[30] + 0x00000004u);
    { c->r[31] = 0x08918894u; c->r[7] = mem_r32(ram, c->r[3] + 0x00000008u); func_089199d8(c, ram); }
    c->r[4] = mem_r32(ram, c->r[30] + 0x000000fcu);
    c->r[2] = 0x66660000u;
    c->r[2] = c->r[2] | 0x6667u;
    alx_mult(c, c->r[4], c->r[2]);
    c->r[2] = c->hi;
    c->r[3] = (u32)((s32)c->r[2] >> 1);
    c->r[2] = (u32)((s32)c->r[4] >> 31);
    c->r[2] = c->r[3] - c->r[2];
    mem_w32(ram, c->r[30] + 0x00000140u, c->r[2]);
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x089188c4u; c->r[4] = c->r[4] + 0x00000af4u; func_08826b58(c, ram); }
    { int _c = (c->r[2] != 0u); if (_c) goto L_089188e8; }
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000140u);
    c->f[1] = (f32)(s32)f2u(c->f[0]);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00006ab4u);
    c->f[0] = c->f[1] * c->f[0];
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    mem_wf32(ram, c->r[30] + 0x00000140u, c->f[0]);
L_089188e8:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = c->r[30] + 0x00000110u;
    c->r[4] = 0u + 0x0000003cu;
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000140u);
    c->r[6] = mem_r32(ram, c->r[2] + 0x00000008u);
    c->r[7] = 0u + 0u;
    c->r[8] = 0u + 0x00000002u;
    { c->r[31] = 0x0891890cu; c->r[9] = c->r[3] + 0u; func_0890438c(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x000000a4u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_08918944; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[9] = c->r[30] + 0x00000110u;
    c->r[4] = 0u + 0x0000003cu;
    c->r[5] = mem_r32(ram, c->r[2] + 0x000000a4u);
    c->r[6] = mem_r32(ram, c->r[3] + 0x00000008u);
    c->r[7] = 0u + 0u;
    c->r[8] = 0u + 0x00000001u;
    { c->r[31] = 0x08918944u; c->r[10] = 0u + 0u; func_08903f2c(c, ram); }
L_08918944:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x000000a0u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_089189c4; }
    c->r[2] = mem_r16(ram, c->r[30] + 0x00000110u);
    mem_w16(ram, c->r[30] + 0x00000130u, c->r[2]);
    c->r[2] = mem_r16(ram, c->r[30] + 0x00000112u);
    c->r[2] = c->r[2] + 0x0000000au;
    mem_w16(ram, c->r[30] + 0x00000132u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x000000a0u);
    mem_w32(ram, c->r[30] + 0x00000148u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000148u);
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000000u);
    c->r[2] = 0u + 0x00000009u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_08918994; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000148u);
    c->r[2] = c->r[2] + 0x00000001u;
    mem_w32(ram, c->r[30] + 0x00000148u, c->r[2]);
L_08918994:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = c->r[30] + 0x00000130u;
    c->r[4] = 0u + 0x0000003cu;
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000148u);
    c->r[6] = mem_r32(ram, c->r[2] + 0x00000008u);
    c->r[7] = 0u + 0u;
    c->r[8] = 0u + 0x00000001u;
    c->r[9] = c->r[3] + 0u;
    { c->r[31] = 0x089189bcu; c->r[10] = 0u + 0u; func_08903f2c(c, ram); }
    c->r[2] = 0u + 0x00000001u;
    mem_w32(ram, c->r[30] + 0x00000100u, c->r[2]);
L_089189c4:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x0000002fu);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000004u) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_08918d3c; }
    { goto L_089190f0; }
L_089189e0:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000144u);
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[30];
    c->r[2] = c->r[2] + 0x00000080u;
    c->r[3] = 0x08a90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0xffffbbdcu);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[2] = c->r[3] & c->r[2];
    { int _c = (c->r[2] == 0u); if (_c) goto L_08918d3c; }
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000060u);
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    c->r[2] = f2u(c->f[0]);
    c->r[2] = c->r[2] << 16;
    c->r[3] = (u32)((s32)c->r[2] >> 16);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000064u);
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    c->r[2] = f2u(c->f[0]);
    c->r[2] = c->r[2] << 16;
    c->r[2] = (u32)((s32)c->r[2] >> 16);
    c->r[4] = c->r[3] + 0u;
    c->r[5] = c->r[2] + 0u;
    c->r[6] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[7] = 0x7f170000u;
    { c->r[31] = 0x08918a48u; c->r[7] = c->r[7] | 0x177fu; func_089199d8(c, ram); }
    c->r[4] = mem_r32(ram, c->r[30] + 0x000000fcu);
    c->r[2] = 0x66660000u;
    c->r[2] = c->r[2] | 0x6667u;
    alx_mult(c, c->r[4], c->r[2]);
    c->r[2] = c->hi;
    c->r[3] = (u32)((s32)c->r[2] >> 1);
    c->r[2] = (u32)((s32)c->r[4] >> 31);
    c->r[2] = c->r[3] - c->r[2];
    mem_w32(ram, c->r[30] + 0x00000148u, c->r[2]);
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x08918a78u; c->r[4] = c->r[4] + 0x00000af4u; func_08826b58(c, ram); }
    { int _c = (c->r[2] != 0u); if (_c) goto L_08918a9c; }
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000148u);
    c->f[1] = (f32)(s32)f2u(c->f[0]);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00006ab4u);
    c->f[0] = c->f[1] * c->f[0];
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    mem_wf32(ram, c->r[30] + 0x00000148u, c->f[0]);
L_08918a9c:
    c->r[2] = c->r[30] + 0x00000110u;
    c->r[4] = 0u + 0x0000003cu;
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000148u);
    c->r[6] = mem_r32(ram, c->r[30] + 0x000000d0u);
    c->r[7] = 0u + 0u;
    c->r[8] = 0u + 0x00000002u;
    { c->r[31] = 0x08918abcu; c->r[9] = c->r[2] + 0u; func_0890438c(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x000000a4u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_08918af4; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = c->r[30] + 0x00000110u;
    c->r[4] = 0u + 0x0000003cu;
    c->r[5] = mem_r32(ram, c->r[2] + 0x000000a4u);
    c->r[6] = mem_r32(ram, c->r[30] + 0x000000d0u);
    c->r[7] = 0u + 0u;
    c->r[8] = 0u + 0x00000001u;
    c->r[9] = c->r[3] + 0u;
    { c->r[31] = 0x08918af4u; c->r[10] = 0u + 0u; func_08903f2c(c, ram); }
L_08918af4:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x000000a0u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_08918b70; }
    c->r[2] = mem_r16(ram, c->r[30] + 0x00000110u);
    mem_w16(ram, c->r[30] + 0x00000130u, c->r[2]);
    c->r[2] = mem_r16(ram, c->r[30] + 0x00000112u);
    c->r[2] = c->r[2] + 0x0000000au;
    mem_w16(ram, c->r[30] + 0x00000132u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x000000a0u);
    mem_w32(ram, c->r[30] + 0x00000140u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000140u);
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000000u);
    c->r[2] = 0u + 0x00000009u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_08918b44; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000140u);
    c->r[2] = c->r[2] + 0x00000001u;
    mem_w32(ram, c->r[30] + 0x00000140u, c->r[2]);
L_08918b44:
    c->r[2] = c->r[30] + 0x00000130u;
    c->r[4] = 0u + 0x0000003cu;
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000140u);
    c->r[6] = mem_r32(ram, c->r[30] + 0x000000d0u);
    c->r[7] = 0u + 0u;
    c->r[8] = 0u + 0x00000001u;
    c->r[9] = c->r[2] + 0u;
    { c->r[31] = 0x08918b68u; c->r[10] = 0u + 0u; func_08903f2c(c, ram); }
    c->r[2] = 0u + 0x00000001u;
    mem_w32(ram, c->r[30] + 0x00000100u, c->r[2]);
L_08918b70:
    c->r[2] = 0x7f170000u;
    c->r[2] = c->r[2] | 0x177fu;
    mem_w32(ram, c->r[30] + 0x00000050u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000a0u);
    c->r[2] = c->r[2] + 0x00000002u;
    mem_w32(ram, c->r[30] + 0x000000a4u, c->r[2]);
    c->r[2] = 0u + 0x00000002u;
    { mem_w32(ram, c->r[30] + 0x000000b0u, c->r[2]); goto L_08918d3c; }
L_08918b94:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000144u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000144u, c->r[2]); goto L_089187ac; }
L_08918ba4:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000030u);
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_08918d3c; }
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000060u);
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    c->r[2] = f2u(c->f[0]);
    c->r[2] = c->r[2] << 16;
    c->r[4] = (u32)((s32)c->r[2] >> 16);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000064u);
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    c->r[2] = f2u(c->f[0]);
    c->r[2] = c->r[2] << 16;
    c->r[2] = (u32)((s32)c->r[2] >> 16);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = c->r[2] + 0u;
    c->r[6] = mem_r32(ram, c->r[30] + 0x00000004u);
    { c->r[31] = 0x08918bf0u; c->r[7] = mem_r32(ram, c->r[3] + 0x00000008u); func_089199d8(c, ram); }
    c->r[4] = mem_r32(ram, c->r[30] + 0x000000fcu);
    c->r[2] = 0x66660000u;
    c->r[2] = c->r[2] | 0x6667u;
    alx_mult(c, c->r[4], c->r[2]);
    c->r[2] = c->hi;
    c->r[3] = (u32)((s32)c->r[2] >> 1);
    c->r[2] = (u32)((s32)c->r[4] >> 31);
    c->r[2] = c->r[3] - c->r[2];
    mem_w32(ram, c->r[30] + 0x00000148u, c->r[2]);
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x08918c20u; c->r[4] = c->r[4] + 0x00000af4u; func_08826b58(c, ram); }
    { int _c = (c->r[2] != 0u); if (_c) goto L_08918c44; }
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000148u);
    c->f[1] = (f32)(s32)f2u(c->f[0]);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00006ab4u);
    c->f[0] = c->f[1] * c->f[0];
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    mem_wf32(ram, c->r[30] + 0x00000148u, c->f[0]);
L_08918c44:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = c->r[30] + 0x00000110u;
    c->r[4] = 0u + 0x0000003cu;
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000148u);
    c->r[6] = mem_r32(ram, c->r[2] + 0x00000008u);
    c->r[7] = 0u + 0u;
    c->r[8] = 0u + 0x00000002u;
    { c->r[31] = 0x08918c68u; c->r[9] = c->r[3] + 0u; func_0890438c(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x000000a4u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_08918ca0; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[9] = c->r[30] + 0x00000110u;
    c->r[4] = 0u + 0x0000003cu;
    c->r[5] = mem_r32(ram, c->r[2] + 0x000000a4u);
    c->r[6] = mem_r32(ram, c->r[3] + 0x00000008u);
    c->r[7] = 0u + 0u;
    c->r[8] = 0u + 0x00000001u;
    { c->r[31] = 0x08918ca0u; c->r[10] = 0u + 0u; func_08903f2c(c, ram); }
L_08918ca0:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x000000a0u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_08918d20; }
    c->r[2] = mem_r16(ram, c->r[30] + 0x00000110u);
    mem_w16(ram, c->r[30] + 0x00000130u, c->r[2]);
    c->r[2] = mem_r16(ram, c->r[30] + 0x00000112u);
    c->r[2] = c->r[2] + 0x0000000au;
    mem_w16(ram, c->r[30] + 0x00000132u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x000000a0u);
    mem_w32(ram, c->r[30] + 0x00000144u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000144u);
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000000u);
    c->r[2] = 0u + 0x00000009u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_08918cf0; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000144u);
    c->r[2] = c->r[2] + 0x00000001u;
    mem_w32(ram, c->r[30] + 0x00000144u, c->r[2]);
L_08918cf0:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = c->r[30] + 0x00000130u;
    c->r[4] = 0u + 0x0000003cu;
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000144u);
    c->r[6] = mem_r32(ram, c->r[2] + 0x00000008u);
    c->r[7] = 0u + 0u;
    c->r[8] = 0u + 0x00000001u;
    c->r[9] = c->r[3] + 0u;
    { c->r[31] = 0x08918d18u; c->r[10] = 0u + 0u; func_08903f2c(c, ram); }
    c->r[2] = 0u + 0x00000001u;
    mem_w32(ram, c->r[30] + 0x00000100u, c->r[2]);
L_08918d20:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x0000002fu);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000004u) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_08918d3c; }
    { goto L_089190f0; }
L_08918d3c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x000000a0u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_08918dc4; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x000000a0u);
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000000u);
    c->r[2] = 0u + 0x00000009u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_08918dc4; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000100u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_08918dc4; }
    c->r[2] = mem_r16(ram, c->r[30] + 0x00000110u);
    mem_w16(ram, c->r[30] + 0x00000130u, c->r[2]);
    c->r[2] = mem_r16(ram, c->r[30] + 0x00000112u);
    c->r[2] = c->r[2] + 0x0000000au;
    mem_w16(ram, c->r[30] + 0x00000132u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x000000a0u);
    mem_w32(ram, c->r[30] + 0x00000148u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000148u);
    c->r[2] = c->r[2] + 0x00000001u;
    mem_w32(ram, c->r[30] + 0x00000148u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = c->r[30] + 0x00000130u;
    c->r[4] = 0u + 0x0000003cu;
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000148u);
    c->r[6] = mem_r32(ram, c->r[2] + 0x00000008u);
    c->r[7] = 0u + 0u;
    c->r[8] = 0u + 0x00000001u;
    c->r[9] = c->r[3] + 0u;
    { c->r[31] = 0x08918dc4u; c->r[10] = 0u + 0u; func_08903f2c(c, ram); }
L_08918dc4:
    mem_w32(ram, c->r[30] + 0x00000148u, 0u);
L_08918dc8:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000148u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x000000b0u);
    c->r[2] = ((s32)c->r[2] < (s32)c->r[3]) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_08918de4; }
    { goto L_089190f0; }
L_08918de4:
    c->r[4] = 0u + 0x00000014u;
    { c->r[31] = 0x08918df0u; c->r[5] = 0u + 0x00000010u; func_0881a1d4(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000144u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000144u);
    mem_w32(ram, c->r[30] + 0x00000140u, c->r[2]);
    c->r[2] = mem_r16(ram, c->r[30] + 0x000000e0u);
    c->r[2] = c->r[2] + 0xfffffff8u;
    mem_w16(ram, c->r[30] + 0x00000130u, c->r[2]);
    c->r[2] = mem_r16(ram, c->r[30] + 0x000000e2u);
    c->r[2] = c->r[2] + 0xfffffff8u;
    mem_w16(ram, c->r[30] + 0x00000132u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x0000008cu);
    c->r[2] = 0x00010000u;
    c->r[2] = c->r[3] & c->r[2];
    { int _c = (c->r[2] == 0u); if (_c) goto L_08918e64; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000148u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_08918e64; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000148u);
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[30];
    c->r[3] = c->r[2] + 0x000000a0u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000148u);
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[30];
    c->r[2] = c->r[2] + 0x000000a0u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000001u;
    mem_w32(ram, c->r[3] + 0x00000000u, c->r[2]);
L_08918e64:
    { c->r[31] = 0x08918e6cu; c->r[4] = mem_r32(ram, c->r[30] + 0x00000004u); func_088f582c(c, ram); }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000050u);
    { c->r[31] = 0x08918e78u; c->f[12] = c->f[0]; func_08903b2c(c, ram); }
    mem_w32(ram, c->r[30] + 0x0000014cu, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000140u);
    c->r[2] = mem_r16(ram, c->r[30] + 0x00000130u);
    mem_w16(ram, c->r[3] + 0x00000004u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000140u);
    c->r[2] = mem_r16(ram, c->r[30] + 0x00000132u);
    mem_w16(ram, c->r[3] + 0x00000006u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000140u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000148u);
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[30];
    c->r[2] = c->r[2] + 0x000000a0u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[30];
    c->r[2] = c->r[2] + 0x00000010u;
    c->r[2] = mem_r16(ram, c->r[2] + 0x00000000u);
    mem_w16(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000140u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000148u);
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[30];
    c->r[2] = c->r[2] + 0x000000a0u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[30];
    c->r[2] = c->r[2] + 0x00000020u;
    c->r[2] = mem_r16(ram, c->r[2] + 0x00000000u);
    mem_w16(ram, c->r[3] + 0x00000002u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000140u);
    c->r[3] = c->r[2] + 0x0000000au;
    c->r[2] = mem_r16(ram, c->r[30] + 0x00000130u);
    c->r[2] = c->r[2] + 0x00000010u;
    mem_w16(ram, c->r[3] + 0x00000004u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000140u);
    c->r[3] = c->r[2] + 0x0000000au;
    c->r[2] = mem_r16(ram, c->r[30] + 0x00000132u);
    c->r[2] = c->r[2] + 0x00000010u;
    mem_w16(ram, c->r[3] + 0x00000006u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000140u);
    c->r[3] = c->r[2] + 0x0000000au;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000148u);
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[30];
    c->r[2] = c->r[2] + 0x000000a0u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[30];
    c->r[2] = c->r[2] + 0x00000010u;
    c->r[2] = mem_r16(ram, c->r[2] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000010u;
    mem_w16(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000140u);
    c->r[3] = c->r[2] + 0x0000000au;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000148u);
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[30];
    c->r[2] = c->r[2] + 0x000000a0u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[30];
    c->r[2] = c->r[2] + 0x00000020u;
    c->r[2] = mem_r16(ram, c->r[2] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000010u;
    mem_w16(ram, c->r[3] + 0x00000002u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000140u);
    c->r[2] = c->r[2] + 0x00000014u;
    mem_w32(ram, c->r[30] + 0x00000140u, c->r[2]);
    { c->r[31] = 0x08918f90u; c->r[4] = mem_r32(ram, c->r[30] + 0x0000014cu); func_089035ac(c, ram); }
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000700u);
    c->r[2] = 0u + 0x000002e8u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[4] = c->lo;
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
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000144u);
    c->r[2] = c->r[2] >> 24;
    c->r[2] = c->r[2] & 0x000fu;
    c->r[3] = c->r[2] << 16;
    c->r[2] = 0x10000000u;
    c->r[2] = c->r[3] | c->r[2];
    { c->r[31] = 0x08918fecu; c->r[5] = c->r[2] + 0u; func_089207f8(c, ram); }
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000700u);
    c->r[2] = 0u + 0x000002e8u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[4] = c->lo;
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
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000144u);
    c->r[2] = 0x00ff0000u;
    c->r[2] = c->r[2] | 0xffffu;
    c->r[3] = c->r[3] & c->r[2];
    c->r[2] = 0x01000000u;
    c->r[2] = c->r[3] | c->r[2];
    { c->r[31] = 0x08919048u; c->r[5] = c->r[2] + 0u; func_089207f8(c, ram); }
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000700u);
    c->r[2] = 0u + 0x000002e8u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[4] = c->lo;
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
    { c->r[31] = 0x08919094u; c->r[5] = c->r[5] | 0x0102u; func_089207f8(c, ram); }
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000700u);
    c->r[2] = 0u + 0x000002e8u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[4] = c->lo;
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
    { c->r[31] = 0x089190e0u; c->r[5] = c->r[5] | 0x0002u; func_089207f8(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000148u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000148u, c->r[2]); goto L_08918dc8; }
L_089190f0:
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000ac8u;
    { c->r[31] = 0x08919100u; c->r[5] = mem_r32(ram, c->r[30] + 0x00000004u); func_089cb8e8(c, ram); }
    { mem_w32(ram, c->r[30] + 0x00000004u, c->r[2]); goto L_08918040; }
L_08919108:
    c->r[3] = mem_r32(ram, c->r[30] + 0x000000f4u);
    c->r[2] = 0u + 0xffffffffu;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_08919120; }
    c->r[1] = 0x08aa0000u;
    mem_w32(ram, c->r[1] + 0xfffff9b0u, 0u);
L_08919120:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000168u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000164u);
    c->r[16] = mem_r32(ram, c->r[29] + 0x00000160u);
    { c->r[29] = c->r[29] + 0x00000170u; return; }
    return; /* fell out of func_08917d80 */
}

/* func_0891f708  0x0891f708..0x0891f8d8  464 bytes, source=fde */
void func_0891f708(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0891f708u);
    c->r[29] = c->r[29] + 0xfffffee0u;
    mem_w32(ram, c->r[29] + 0x00000118u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000114u, c->r[30]);
    mem_w32(ram, c->r[29] + 0x00000110u, c->r[16]);
    c->r[30] = c->r[29] + 0u;
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x0891f728u; c->r[4] = c->r[4] + 0x00000ac8u; func_089cb8ac(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[2]);
L_0891f72c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_0891f740; }
    { goto L_0891f778; }
L_0891f740:
    { c->r[31] = 0x0891f748u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u); func_089219c8(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = 0u + 0x00000006u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_0891f760; }
    { goto L_0891f778; }
L_0891f760:
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000ac8u;
    { c->r[31] = 0x0891f770u; c->r[5] = mem_r32(ram, c->r[30] + 0x00000000u); func_089cb8e8(c, ram); }
    { mem_w32(ram, c->r[30] + 0x00000000u, c->r[2]); goto L_0891f72c; }
L_0891f778:
    { c->r[31] = 0x0891f780u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u); func_089219c8(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = 0u + 0x00000006u;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_0891f798; }
    { goto L_0891f8c0; }
L_0891f798:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x000000e0u;
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[2]);
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x0891f7b0u; c->r[4] = c->r[4] + 0x00000af4u; func_0880d410(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = c->r[30] + 0x00000010u;
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0x08a40000u;
    c->r[5] = c->r[5] + 0x00006becu;
    { c->r[31] = 0x0891f7ccu; c->r[6] = c->r[3] + 0u; func_08a1ad34(c, ram); }
    c->r[16] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[30] + 0x00000010u;
    { c->r[31] = 0x0891f7dcu; c->r[4] = c->r[2] + 0u; func_089c6f64(c, ram); }
    mem_w16(ram, c->r[16] + 0x00000026u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x00000026u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_0891f7fc; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = 0u + 0x00000200u;
    mem_w16(ram, c->r[3] + 0x00000026u, c->r[2]);
L_0891f7fc:
    c->r[2] = c->r[30] + 0x00000010u;
    c->r[3] = 0x08a90000u;
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[3] + 0xffffb9c0u);
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0x08a40000u;
    c->r[5] = c->r[5] + 0x00006bfcu;
    { c->r[31] = 0x0891f81cu; c->r[6] = c->r[3] + 0u; func_08a1ad34(c, ram); }
    c->r[16] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[30] + 0x00000010u;
    { c->r[31] = 0x0891f82cu; c->r[4] = c->r[2] + 0u; func_089c6f64(c, ram); }
    mem_w16(ram, c->r[16] + 0x00000020u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x00000020u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_0891f84c; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = 0u + 0x00000200u;
    mem_w16(ram, c->r[3] + 0x00000020u, c->r[2]);
L_0891f84c:
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x0891f858u; c->r[4] = c->r[4] + 0x00000af4u; func_0880d410(c, ram); }
    c->r[16] = c->r[2] + 0u;
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x0891f868u; c->r[4] = c->r[4] + 0x00000af4u; func_08813c50(c, ram); }
    c->r[4] = c->r[16] + 0u;
    { c->r[31] = 0x0891f874u; c->r[5] = c->r[2] + 0u; func_088bf6ec(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = c->r[30] + 0x00000010u;
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0x08a40000u;
    c->r[5] = c->r[5] + 0x00006bfcu;
    { c->r[31] = 0x0891f890u; c->r[6] = c->r[3] + 0u; func_08a1ad34(c, ram); }
    c->r[16] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[30] + 0x00000010u;
    { c->r[31] = 0x0891f8a0u; c->r[4] = c->r[2] + 0u; func_089c6f64(c, ram); }
    mem_w16(ram, c->r[16] + 0x00000022u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x00000022u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_0891f8c0; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = 0u + 0x00000200u;
    mem_w16(ram, c->r[3] + 0x00000022u, c->r[2]);
L_0891f8c0:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000118u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000114u);
    c->r[16] = mem_r32(ram, c->r[29] + 0x00000110u);
    { c->r[29] = c->r[29] + 0x00000120u; return; }
    return; /* fell out of func_0891f708 */
}

/* func_0892165c  0x0892165c..0x089216a0  68 bytes, source=sweep */
void func_0892165c(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0892165cu);
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
    { c->r[31] = 0x0892168cu; c->r[5] = c->r[2] + 0u; func_089207f8(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_0892165c */
}

/* func_08923130  0x08923130..0x0892326c  316 bytes, source=sweep */
void func_08923130(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08923130u);
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
    { int _c = (c->r[2] == 0u); if (_c) goto L_08923188; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = 0x00ff0000u;
    c->r[2] = c->r[2] | 0xffffu;
    c->r[3] = c->r[3] & c->r[2];
    c->r[2] = 0x12000000u;
    c->r[2] = c->r[3] | c->r[2];
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x08923188u; c->r[5] = c->r[2] + 0u; func_0892326c(c, ram); }
L_08923188:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_089231dc; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = c->r[2] >> 24;
    c->r[2] = c->r[2] & 0x000fu;
    c->r[3] = c->r[2] << 16;
    c->r[2] = 0x10000000u;
    c->r[2] = c->r[3] | c->r[2];
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x089231b8u; c->r[5] = c->r[2] + 0u; func_0892326c(c, ram); }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = 0x00ff0000u;
    c->r[2] = c->r[2] | 0xffffu;
    c->r[3] = c->r[3] & c->r[2];
    c->r[2] = 0x02000000u;
    c->r[2] = c->r[3] | c->r[2];
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x089231dcu; c->r[5] = c->r[2] + 0u; func_0892326c(c, ram); }
L_089231dc:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_08923230; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = c->r[2] >> 24;
    c->r[2] = c->r[2] & 0x000fu;
    c->r[3] = c->r[2] << 16;
    c->r[2] = 0x10000000u;
    c->r[2] = c->r[3] | c->r[2];
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x0892320cu; c->r[5] = c->r[2] + 0u; func_0892326c(c, ram); }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = 0x00ff0000u;
    c->r[2] = c->r[2] | 0xffffu;
    c->r[3] = c->r[3] & c->r[2];
    c->r[2] = 0x01000000u;
    c->r[2] = c->r[3] | c->r[2];
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x08923230u; c->r[5] = c->r[2] + 0u; func_0892326c(c, ram); }
L_08923230:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[2] & 0x0007u;
    c->r[3] = c->r[2] << 16;
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = c->r[3] | c->r[2];
    c->r[2] = 0x04000000u;
    c->r[2] = c->r[3] | c->r[2];
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x08923258u; c->r[5] = c->r[2] + 0u; func_0892326c(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000024u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000020u);
    { c->r[29] = c->r[29] + 0x00000030u; return; }
    return; /* fell out of func_08923130 */
}

/* func_08925ddc  0x08925ddc..0x08925e20  68 bytes, source=sweep */
void func_08925ddc(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08925ddcu);
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
    { c->r[31] = 0x08925e0cu; c->r[5] = c->r[2] + 0u; func_089258bc(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_08925ddc */
}

/* func_089289ac  0x089289ac..0x089289f0  68 bytes, source=sweep */
void func_089289ac(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089289acu);
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
    return; /* fell out of func_089289ac */
}

/* func_0892cea8  0x0892cea8..0x0892d5ac  1796 bytes, source=fde */
void func_0892cea8(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0892cea8u);
    c->r[29] = c->r[29] + 0xffffffb0u;
    mem_w32(ram, c->r[29] + 0x00000048u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000044u, c->r[30]);
    mem_w32(ram, c->r[29] + 0x00000040u, c->r[16]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000036u);
    c->r[2] = 0u + 0x00000004u;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_0892cef4; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000036u);
    c->r[2] = 0u + 0x00000005u;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_0892cef4; }
    { goto L_0892cf14; }
L_0892cef4:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x00000010u);
    c->r[2] = 0x04000000u;
    c->r[2] = c->r[3] & c->r[2];
    { int _c = (c->r[2] != 0u); if (_c) goto L_0892cf14; }
    { c->r[31] = 0x0892cf14u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u); func_089316e4(c, ram); }
L_0892cf14:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000030u);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000af4u;
    c->r[5] = c->r[3] + 0u;
    { c->r[31] = 0x0892cf38u; c->r[6] = c->r[2] + 0u; func_0881456c(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x00000010u);
    c->r[2] = 0x02000000u;
    c->r[2] = c->r[3] & c->r[2];
    { int _c = (c->r[2] != 0u); if (_c) goto L_0892d228; }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000030u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 2;
    c->r[2] = mem_r32(ram, c->r[4] + 0x00000008u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000008u);
    c->r[2] = c->r[2] & 0x0004u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_0892d228; }
    { c->r[31] = 0x0892cf8cu; c->r[4] = 0u + 0x00000001u; func_089c5e18(c, ram); }
    { int _c = (c->r[2] == 0u); if (_c) goto L_0892d228; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = 0u + 0x00000006u;
    mem_w8(ram, c->r[3] + 0x00000035u, c->r[2]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000030u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 2;
    c->r[2] = mem_r32(ram, c->r[4] + 0x00000008u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[3] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x00000002u);
    c->r[2] = 0u + 0xffffffffu;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_0892d18c; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000036u);
    c->r[2] = 0u + 0x00000004u;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_0892d18c; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000036u);
    c->r[2] = 0u + 0x00000005u;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_0892d18c; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000000cu);
    { int _c = (c->r[2] != 0u); if (_c) goto L_0892d138; }
    mem_w32(ram, c->r[30] + 0x00000008u, 0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000004u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_0892d028; }
    c->r[2] = 0u + 0x00000001u;
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]);
L_0892d028:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[4] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x00000022u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000030u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[3] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000032u);
    alx_mult(c, c->r[3], c->r[2]);
    c->r[2] = c->lo;
    c->r[2] = c->r[4] + c->r[2];
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
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
    c->r[6] = 0u + 0xffffffffu;
    { c->r[31] = 0x0892d098u; c->r[7] = 0u + 0xffffffffu; func_08932598(c, ram); }
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[30] + 0x00000020u);
    { int _c = ((s32)c->r[2] >= 0); if (_c) goto L_0892d0c0; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[4] = mem_r16(ram, c->r[2] + 0x00000020u);
    c->r[2] = mem_r16(ram, c->r[3] + 0x00000024u);
    c->r[2] = c->r[4] + c->r[2];
    c->r[2] = c->r[2] + 0xfffffffcu;
    mem_w16(ram, c->r[30] + 0x00000020u, c->r[2]);
L_0892d0c0:
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[30] + 0x00000022u);
    { int _c = ((s32)c->r[2] >= 0); if (_c) goto L_0892d0d4; }
    c->r[2] = mem_r16(ram, c->r[30] + 0x0000000cu);
    mem_w16(ram, c->r[30] + 0x00000022u, c->r[2]);
L_0892d0d4:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = 0xfffe0000u;
    c->r[2] = c->r[2] | 0xffffu;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000010u);
    c->r[2] = c->r[3] & c->r[2];
    mem_w32(ram, c->r[4] + 0x00000010u, c->r[2]);
    c->r[16] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[30] + 0x00000010u;
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000004u);
    { c->r[31] = 0x0892d104u; c->r[5] = c->r[2] + 0u; func_0892fd88(c, ram); }
    mem_w32(ram, c->r[16] + 0x0000000cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000000cu);
    { int _c = (c->r[2] == 0u); if (_c) goto L_0892d138; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000010u);
    { int _c = ((s32)c->r[2] >= 0); if (_c) goto L_0892d138; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[4] = mem_r32(ram, c->r[2] + 0x0000000cu);
    { c->r[31] = 0x0892d138u; c->r[5] = 0x80000000u; func_0892ff54(c, ram); }
L_0892d138:
    c->r[2] = 0u + 0x00000002u;
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r16(ram, c->r[2] + 0x00000000u);
    mem_w16(ram, c->r[30] + 0x00000018u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000030u);
    mem_w16(ram, c->r[30] + 0x0000001au, c->r[2]);
    { c->r[31] = 0x0892d168u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000004u); func_089c35d4(c, ram); }
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
    c->r[2] = c->r[30] + 0x00000010u;
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[5] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[6] = 0u + 0x00000020u;
    { c->r[31] = 0x0892d184u; c->r[7] = c->r[2] + 0u; func_089c34ac(c, ram); }
    { goto L_0892d594; }
L_0892d18c:
    c->r[2] = 0u + 0x00000002u;
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r16(ram, c->r[2] + 0x00000000u);
    mem_w16(ram, c->r[30] + 0x00000018u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000030u);
    mem_w16(ram, c->r[30] + 0x0000001au, c->r[2]);
    { c->r[31] = 0x0892d1bcu; c->r[4] = mem_r32(ram, c->r[30] + 0x00000004u); func_089c35d4(c, ram); }
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
    c->r[2] = c->r[30] + 0x00000010u;
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[5] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[6] = 0u + 0x00000020u;
    { c->r[31] = 0x0892d1d8u; c->r[7] = c->r[2] + 0u; func_089c34ac(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x00000010u);
    c->r[2] = 0x40000000u;
    c->r[2] = c->r[3] & c->r[2];
    { int _c = (c->r[2] == 0u); if (_c) goto L_0892d20c; }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = 0xfffe0000u;
    c->r[2] = c->r[2] | 0xffffu;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000010u);
    c->r[2] = c->r[3] & c->r[2];
    mem_w32(ram, c->r[4] + 0x00000010u, c->r[2]);
L_0892d20c:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x00000010u);
    c->r[2] = 0x07000000u;
    c->r[2] = c->r[3] | c->r[2];
    { mem_w32(ram, c->r[4] + 0x00000010u, c->r[2]); goto L_0892d594; }
L_0892d228:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x00000010u);
    c->r[2] = 0x01000000u;
    c->r[2] = c->r[3] & c->r[2];
    { int _c = (c->r[2] != 0u); if (_c) goto L_0892d2c0; }
    { c->r[31] = 0x0892d248u; c->r[4] = 0u + 0x00000001u; func_089c5f10(c, ram); }
    { int _c = (c->r[2] == 0u); if (_c) goto L_0892d2c0; }
    c->r[2] = 0u + 0x00000003u;
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r16(ram, c->r[2] + 0x00000000u);
    mem_w16(ram, c->r[30] + 0x00000018u, c->r[2]);
    c->r[2] = 0u + 0xffffffffu;
    mem_w16(ram, c->r[30] + 0x0000001au, c->r[2]);
    { c->r[31] = 0x0892d27cu; c->r[4] = mem_r32(ram, c->r[30] + 0x00000004u); func_089c35d4(c, ram); }
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
    c->r[2] = c->r[30] + 0x00000010u;
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[5] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[6] = 0u + 0x00000020u;
    { c->r[31] = 0x0892d298u; c->r[7] = c->r[2] + 0u; func_089c34ac(c, ram); }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = 0u + 0x00000004u;
    mem_w8(ram, c->r[3] + 0x0000002fu, c->r[2]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x00000010u);
    c->r[2] = 0x00040000u;
    c->r[2] = c->r[3] | c->r[2];
    { mem_w32(ram, c->r[4] + 0x00000010u, c->r[2]); goto L_0892d594; }
L_0892d2c0:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000035u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_0892d42c; }
    c->r[4] = 0x08a70000u;
    c->r[4] = c->r[4] + 0xffffb34cu;
    c->r[5] = 0u + 0u;
    c->r[6] = 0u + 0u;
    { c->r[31] = 0x0892d2e8u; c->r[7] = 0u + 0u; func_089d87d4(c, ram); }
    c->r[16] = c->r[2] + 0u;
    c->r[4] = 0x08a70000u;
    { c->r[31] = 0x0892d2f8u; c->r[4] = c->r[4] + 0xffffb34cu; func_0880d238(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = mem_r32(ram, c->r[16] + 0x00000004u);
    c->r[2] = c->r[3] & c->r[2];
    c->r[2] = c->r[2] & 0x0010u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_0892d42c; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x00000010u);
    c->r[2] = 0x04000000u;
    c->r[2] = c->r[3] & c->r[2];
    { int _c = (c->r[2] != 0u); if (_c) goto L_0892d42c; }
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0xffffc930u;
    c->r[5] = 0x04000000u;
    c->r[5] = c->r[5] | 0x0001u;
    c->r[6] = 0u + 0u;
    c->r[7] = 0u + 0u;
    { c->r[31] = 0x0892d348u; c->r[8] = 0u + 0u; func_089f6924(c, ram); }
    { c->r[31] = 0x0892d350u; func_08925598(c, ram); }
    mem_w32(ram, c->r[30] + 0x0000000cu, 0u);
L_0892d354:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000030u);
    c->r[2] = c->r[2] + 0xffffffffu;
    mem_w8(ram, c->r[3] + 0x00000030u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000030u);
    { int _c = ((s32)c->r[2] >= 0); if (_c) goto L_0892d38c; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r8(ram, c->r[2] + 0x0000002eu);
    c->r[2] = c->r[2] + 0xffffffffu;
    mem_w8(ram, c->r[3] + 0x00000030u, c->r[2]);
L_0892d38c:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000030u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 2;
    c->r[2] = mem_r32(ram, c->r[4] + 0x00000008u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000008u);
    c->r[2] = c->r[2] & 0x0008u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_0892d3fc; }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000030u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 2;
    c->r[2] = mem_r32(ram, c->r[4] + 0x00000008u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000008u);
    c->r[2] = c->r[2] & 0x0004u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_0892d3fc; }
    { goto L_0892d594; }
L_0892d3fc:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x0000002eu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = ((s32)c->r[2] < (s32)c->r[3]) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_0892d41c; }
    { goto L_0892d594; }
L_0892d41c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]); goto L_0892d354; }
L_0892d42c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000035u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_0892d594; }
    c->r[4] = 0x08a70000u;
    c->r[4] = c->r[4] + 0xffffb34cu;
    c->r[5] = 0u + 0u;
    c->r[6] = 0u + 0u;
    { c->r[31] = 0x0892d454u; c->r[7] = 0u + 0u; func_089d87d4(c, ram); }
    c->r[16] = c->r[2] + 0u;
    c->r[4] = 0x08a70000u;
    { c->r[31] = 0x0892d464u; c->r[4] = c->r[4] + 0xffffb34cu; func_0880d238(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = mem_r32(ram, c->r[16] + 0x00000004u);
    c->r[2] = c->r[3] & c->r[2];
    c->r[2] = c->r[2] & 0x0040u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_0892d594; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x00000010u);
    c->r[2] = 0x04000000u;
    c->r[2] = c->r[3] & c->r[2];
    { int _c = (c->r[2] != 0u); if (_c) goto L_0892d594; }
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0xffffc930u;
    c->r[5] = 0x04000000u;
    c->r[5] = c->r[5] | 0x0001u;
    c->r[6] = 0u + 0u;
    c->r[7] = 0u + 0u;
    { c->r[31] = 0x0892d4b4u; c->r[8] = 0u + 0u; func_089f6924(c, ram); }
    { c->r[31] = 0x0892d4bcu; func_08925598(c, ram); }
    mem_w32(ram, c->r[30] + 0x0000000cu, 0u);
L_0892d4c0:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000030u);
    c->r[2] = c->r[2] + 0x00000001u;
    mem_w8(ram, c->r[3] + 0x00000030u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[4] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000030u);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[3] + 0x0000002eu);
    { int _c = (c->r[4] != c->r[2]); if (_c) goto L_0892d4f4; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    mem_w8(ram, c->r[2] + 0x00000030u, 0u);
L_0892d4f4:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000030u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 2;
    c->r[2] = mem_r32(ram, c->r[4] + 0x00000008u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000008u);
    c->r[2] = c->r[2] & 0x0008u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_0892d564; }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000030u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 2;
    c->r[2] = mem_r32(ram, c->r[4] + 0x00000008u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000008u);
    c->r[2] = c->r[2] & 0x0004u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_0892d564; }
    { goto L_0892d594; }
L_0892d564:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x0000002eu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = ((s32)c->r[2] < (s32)c->r[3]) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_0892d584; }
    { goto L_0892d594; }
L_0892d584:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]); goto L_0892d4c0; }
L_0892d594:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000048u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000044u);
    c->r[16] = mem_r32(ram, c->r[29] + 0x00000040u);
    { c->r[29] = c->r[29] + 0x00000050u; return; }
    return; /* fell out of func_0892cea8 */
}

/* func_08932454  0x08932454..0x08932484  48 bytes, source=sweep */
void func_08932454(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08932454u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[1] = 0x08aa0000u;
    mem_w32(ram, c->r[1] + 0xfffffa48u, c->r[2]);
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_08932454 */
}

/* func_08933888  0x08933888..0x089338c8  64 bytes, source=sweep */
void func_08933888(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08933888u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    c->r[2] = c->r[30] + 0x00000004u;
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x089338b0u; c->r[5] = c->r[2] + 0u; func_08933804(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_08933888 */
}

/* func_08936784  0x08936784..0x08937a50  4812 bytes, source=fde */
void func_08936784(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08936784u);
    c->r[29] = c->r[29] + 0xfffffe70u;
    mem_w32(ram, c->r[29] + 0x00000188u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000184u, c->r[30]);
    mem_w32(ram, c->r[29] + 0x00000180u, c->r[16]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[2] = c->r[5] + 0u;
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[6]);
    mem_w8(ram, c->r[30] + 0x00000004u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x000000e0u;
    mem_w32(ram, c->r[30] + 0x00000114u, c->r[2]);
    c->r[2] = mem_r8(ram, c->r[30] + 0x00000004u);
    mem_w32(ram, c->r[30] + 0x00000174u, c->r[2]);
    c->r[2] = 0u + 0x00000001u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000174u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_08937050; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000174u);
    c->r[2] = ((s32)c->r[3] < (s32)0x00000002u) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_089367f0; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000174u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_08936818; }
    { goto L_08937a38; }
L_089367f0:
    c->r[2] = 0u + 0x00000002u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000174u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_089379a0; }
    c->r[2] = 0u + 0x00000019u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000174u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_089379c4; }
    { goto L_08937a38; }
L_08936818:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x08936824u; c->r[5] = 0u + 0u; func_088679a0(c, ram); }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x08936830u; c->r[5] = 0u + 0u; func_088679d4(c, ram); }
    c->r[4] = 0x08aa0000u;
    c->r[4] = c->r[4] + 0xfffffa50u;
    c->r[5] = 0u + 0u;
    { c->r[31] = 0x08936844u; c->r[6] = 0u + 0x00000044u; func_08a19ec4(c, ram); }
    c->r[16] = mem_r32(ram, c->r[30] + 0x00000114u);
    { c->r[31] = 0x08936850u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u); func_089b7394(c, ram); }
    mem_w32(ram, c->r[16] + 0x00000000u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000114u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000114u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000020u;
    mem_w32(ram, c->r[3] + 0x00000004u, c->r[2]);
    c->r[16] = mem_r32(ram, c->r[30] + 0x00000114u);
    { c->r[31] = 0x08936874u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u); func_089b7394(c, ram); }
    mem_w32(ram, c->r[16] + 0x00000008u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000114u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000114u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000008u);
    c->r[2] = c->r[2] + 0x00000020u;
    mem_w32(ram, c->r[3] + 0x0000000cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000114u);
    c->r[4] = mem_r32(ram, c->r[2] + 0x00000004u);
    c->r[5] = 0u + 0u;
    { c->r[31] = 0x089368a0u; c->r[6] = 0u + 0x00000100u; func_08a19ec4(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000114u);
    c->r[4] = mem_r32(ram, c->r[2] + 0x0000000cu);
    c->r[5] = 0u + 0u;
    { c->r[31] = 0x089368b4u; c->r[6] = 0u + 0x00000100u; func_08a19ec4(c, ram); }
    mem_w32(ram, c->r[30] + 0x0000000cu, 0u);
L_089368b8:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000010u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_089368d0; }
    { goto L_089368fc; }
L_089368d0:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000114u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = c->r[2] << 4;
    c->r[2] = mem_r32(ram, c->r[4] + 0x00000004u);
    c->r[2] = c->r[3] + c->r[2];
    { c->r[31] = 0x089368ecu; c->r[4] = c->r[2] + 0u; func_0893435c(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]); goto L_089368b8; }
L_089368fc:
    mem_w32(ram, c->r[30] + 0x0000000cu, 0u);
L_08936900:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000007u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_08936918; }
    { goto L_08936958; }
L_08936918:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000114u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = c->r[2] << 3;
    c->r[2] = mem_r32(ram, c->r[4] + 0x0000000cu);
    c->r[2] = c->r[3] + c->r[2];
    mem_w32(ram, c->r[2] + 0x00000000u, 0u);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000114u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = c->r[2] << 3;
    c->r[2] = mem_r32(ram, c->r[4] + 0x0000000cu);
    c->r[2] = c->r[3] + c->r[2];
    mem_w32(ram, c->r[2] + 0x00000004u, 0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]); goto L_08936900; }
L_08936958:
    mem_w32(ram, c->r[30] + 0x0000000cu, 0u);
L_0893695c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000008u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_08936974; }
    { goto L_089369a0; }
L_08936974:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000114u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] + 0x00000010u;
    c->r[2] = 0u + 0xffffffffu;
    mem_w16(ram, c->r[3] + 0x0000000cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]); goto L_0893695c; }
L_089369a0:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000114u);
    c->r[2] = 0u + 0xffffffffu;
    mem_w32(ram, c->r[3] + 0x00000038u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000114u);
    c->r[2] = 0u + 0xffffffffu;
    mem_w32(ram, c->r[3] + 0x0000003cu, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000114u);
    c->r[2] = 0u + 0xffffffffu;
    mem_w32(ram, c->r[3] + 0x00000040u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000114u);
    c->r[2] = 0u + 0xffffffffu;
    mem_w32(ram, c->r[3] + 0x00000044u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000114u);
    c->r[2] = 0u + 0xffffffffu;
    mem_w32(ram, c->r[3] + 0x00000048u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000114u);
    c->r[2] = 0u + 0xffffffffu;
    mem_w32(ram, c->r[3] + 0x0000004cu, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000114u);
    c->r[2] = 0u + 0xffffffffu;
    mem_w32(ram, c->r[3] + 0x00000050u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000114u);
    c->r[2] = 0u + 0xffffffffu;
    mem_w32(ram, c->r[3] + 0x00000054u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000114u);
    mem_w32(ram, c->r[2] + 0x00000034u, 0u);
    c->r[16] = mem_r32(ram, c->r[30] + 0x00000114u);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0xffffc930u;
    c->r[5] = 0x08a40000u;
    c->r[5] = c->r[5] + 0x000072f0u;
    { c->r[31] = 0x08936a24u; c->r[6] = 0u + 0u; func_089f586c(c, ram); }
    mem_w32(ram, c->r[16] + 0x0000003cu, c->r[2]);
    c->r[4] = 0x08a40000u;
    { c->r[31] = 0x08936a34u; c->r[4] = c->r[4] + 0x000072f4u; func_089c6f64(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000110u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000110u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_08936a88; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000114u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000000cu);
    mem_w32(ram, c->r[30] + 0x00000118u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000118u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000110u);
    mem_w32(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000110u);
    c->r[2] = c->r[2] + 0x00000008u;
    mem_w32(ram, c->r[30] + 0x00000110u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000118u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000110u);
    mem_w32(ram, c->r[3] + 0x00000004u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000114u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000114u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000034u);
    c->r[2] = c->r[2] | 0x0001u;
    mem_w32(ram, c->r[3] + 0x00000034u, c->r[2]);
L_08936a88:
    c->r[4] = 0x08a40000u;
    { c->r[31] = 0x08936a94u; c->r[4] = c->r[4] + 0x00007300u; func_089c6f64(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000110u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000110u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_08936ad8; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000114u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x00000018u;
    mem_w32(ram, c->r[30] + 0x00000118u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000118u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000110u);
    mem_w32(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000110u);
    c->r[2] = c->r[2] + 0x00000008u;
    mem_w32(ram, c->r[30] + 0x00000110u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000118u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000110u);
    mem_w32(ram, c->r[3] + 0x00000004u, c->r[2]);
L_08936ad8:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000114u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x00000008u;
    mem_w32(ram, c->r[30] + 0x00000118u, c->r[2]);
    c->r[2] = 0x08aa0000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00005228u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[2] = c->r[2] & 0x0100u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_08936b34; }
    c->r[16] = mem_r32(ram, c->r[30] + 0x00000114u);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0xffffc930u;
    c->r[5] = 0x08a40000u;
    c->r[5] = c->r[5] + 0x0000730cu;
    { c->r[31] = 0x08936b1cu; c->r[6] = 0u + 0u; func_089f586c(c, ram); }
    mem_w32(ram, c->r[16] + 0x00000040u, c->r[2]);
    c->r[4] = 0x08a40000u;
    { c->r[31] = 0x08936b2cu; c->r[4] = c->r[4] + 0x00007310u; func_089c6f64(c, ram); }
    { mem_w32(ram, c->r[30] + 0x00000110u, c->r[2]); goto L_08936b84; }
L_08936b34:
    c->r[2] = 0x08aa0000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00005228u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[2] = c->r[2] & 0x0200u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_08936b80; }
    c->r[16] = mem_r32(ram, c->r[30] + 0x00000114u);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0xffffc930u;
    c->r[5] = 0x08a40000u;
    c->r[5] = c->r[5] + 0x0000731cu;
    { c->r[31] = 0x08936b68u; c->r[6] = 0u + 0u; func_089f586c(c, ram); }
    mem_w32(ram, c->r[16] + 0x00000040u, c->r[2]);
    c->r[4] = 0x08a40000u;
    { c->r[31] = 0x08936b78u; c->r[4] = c->r[4] + 0x00007320u; func_089c6f64(c, ram); }
    { mem_w32(ram, c->r[30] + 0x00000110u, c->r[2]); goto L_08936b84; }
L_08936b80:
    mem_w32(ram, c->r[30] + 0x00000110u, 0u);
L_08936b84:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000110u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_08936bc8; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000118u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000110u);
    mem_w32(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000110u);
    c->r[2] = c->r[2] + 0x00000008u;
    mem_w32(ram, c->r[30] + 0x00000110u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000118u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000110u);
    mem_w32(ram, c->r[3] + 0x00000004u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000114u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000114u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000034u);
    c->r[2] = c->r[2] | 0x0002u;
    mem_w32(ram, c->r[3] + 0x00000034u, c->r[2]);
L_08936bc8:
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x08936bd4u; c->r[4] = c->r[4] + 0x00000af4u; func_0880d294(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = 0u + 0x00000002u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_08936c6c; }
    c->r[16] = mem_r32(ram, c->r[30] + 0x00000114u);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0xffffc930u;
    c->r[5] = 0x08a40000u;
    c->r[5] = c->r[5] + 0x0000732cu;
    { c->r[31] = 0x08936c00u; c->r[6] = 0u + 0u; func_089f586c(c, ram); }
    mem_w32(ram, c->r[16] + 0x0000004cu, c->r[2]);
    c->r[4] = 0x08a40000u;
    { c->r[31] = 0x08936c10u; c->r[4] = c->r[4] + 0x00007330u; func_089c6f64(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000110u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000110u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_08936fbc; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000114u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x00000028u;
    mem_w32(ram, c->r[30] + 0x00000118u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000118u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000110u);
    mem_w32(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000110u);
    c->r[2] = c->r[2] + 0x00000008u;
    mem_w32(ram, c->r[30] + 0x00000110u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000118u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000110u);
    mem_w32(ram, c->r[3] + 0x00000004u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000114u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000114u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000034u);
    c->r[2] = c->r[2] | 0x0020u;
    { mem_w32(ram, c->r[3] + 0x00000034u, c->r[2]); goto L_08936fbc; }
L_08936c6c:
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x08936c78u; c->r[4] = c->r[4] + 0x00000af4u; func_0880810c(c, ram); }
    { int _c = (c->r[2] != 0u); if (_c) goto L_08936ddc; }
    c->r[16] = mem_r32(ram, c->r[30] + 0x00000114u);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0xffffc930u;
    c->r[5] = 0x08a40000u;
    c->r[5] = c->r[5] + 0x0000733cu;
    { c->r[31] = 0x08936c9cu; c->r[6] = 0u + 0u; func_089f586c(c, ram); }
    mem_w32(ram, c->r[16] + 0x00000044u, c->r[2]);
    c->r[4] = 0x08a40000u;
    { c->r[31] = 0x08936cacu; c->r[4] = c->r[4] + 0x00007340u; func_089c6f64(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000110u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000110u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_08936d04; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000114u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x00000020u;
    mem_w32(ram, c->r[30] + 0x00000118u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000118u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000110u);
    mem_w32(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000110u);
    c->r[2] = c->r[2] + 0x00000008u;
    mem_w32(ram, c->r[30] + 0x00000110u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000118u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000110u);
    mem_w32(ram, c->r[3] + 0x00000004u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000114u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000114u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000034u);
    c->r[2] = c->r[2] | 0x0010u;
    mem_w32(ram, c->r[3] + 0x00000034u, c->r[2]);
L_08936d04:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000114u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x00000010u;
    mem_w32(ram, c->r[30] + 0x00000118u, c->r[2]);
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x08936d20u; c->r[4] = c->r[4] + 0x00000af4u; func_0880d380(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = c->r[30] + 0x00000010u;
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0x08a40000u;
    c->r[5] = c->r[5] + 0x0000734cu;
    { c->r[31] = 0x08936d3cu; c->r[6] = c->r[3] + 0u; func_08a1ad34(c, ram); }
    c->r[2] = c->r[30] + 0x00000010u;
    { c->r[31] = 0x08936d48u; c->r[4] = c->r[2] + 0u; func_089c6f64(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000110u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000110u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_08936fbc; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000118u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000110u);
    mem_w32(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000110u);
    c->r[2] = c->r[2] + 0x00000008u;
    mem_w32(ram, c->r[30] + 0x00000110u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000118u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000110u);
    mem_w32(ram, c->r[3] + 0x00000004u, c->r[2]);
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x08936d88u; c->r[4] = c->r[4] + 0x00000af4u; func_0880d380(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = c->r[30] + 0x00000010u;
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0x08a40000u;
    c->r[5] = c->r[5] + 0x0000735cu;
    { c->r[31] = 0x08936da4u; c->r[6] = c->r[3] + 0u; func_08a1ad34(c, ram); }
    c->r[16] = mem_r32(ram, c->r[30] + 0x00000114u);
    c->r[2] = c->r[30] + 0x00000010u;
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0xffffc930u;
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x08936dc0u; c->r[6] = 0u + 0u; func_089f586c(c, ram); }
    mem_w32(ram, c->r[16] + 0x00000048u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000114u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000114u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000034u);
    c->r[2] = c->r[2] | 0x0004u;
    { mem_w32(ram, c->r[3] + 0x00000034u, c->r[2]); goto L_08936fbc; }
L_08936ddc:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000114u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x00000030u;
    mem_w32(ram, c->r[30] + 0x00000118u, c->r[2]);
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x08936df8u; c->r[4] = c->r[4] + 0x00000af4u; func_0880810c(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = 0u + 0x00000001u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_08936e3c; }
    c->r[16] = mem_r32(ram, c->r[30] + 0x00000114u);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0xffffc930u;
    c->r[5] = 0x08a40000u;
    c->r[5] = c->r[5] + 0x00007364u;
    { c->r[31] = 0x08936e24u; c->r[6] = 0u + 0u; func_089f586c(c, ram); }
    mem_w32(ram, c->r[16] + 0x00000050u, c->r[2]);
    c->r[4] = 0x08a40000u;
    { c->r[31] = 0x08936e34u; c->r[4] = c->r[4] + 0x00007368u; func_089c6f64(c, ram); }
    { mem_w32(ram, c->r[30] + 0x00000110u, c->r[2]); goto L_08936f78; }
L_08936e3c:
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x08936e48u; c->r[4] = c->r[4] + 0x00000af4u; func_0880810c(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = 0u + 0x00000002u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_08936e8c; }
    c->r[16] = mem_r32(ram, c->r[30] + 0x00000114u);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0xffffc930u;
    c->r[5] = 0x08a40000u;
    c->r[5] = c->r[5] + 0x00007374u;
    { c->r[31] = 0x08936e74u; c->r[6] = 0u + 0u; func_089f586c(c, ram); }
    mem_w32(ram, c->r[16] + 0x00000050u, c->r[2]);
    c->r[4] = 0x08a40000u;
    { c->r[31] = 0x08936e84u; c->r[4] = c->r[4] + 0x00007378u; func_089c6f64(c, ram); }
    { mem_w32(ram, c->r[30] + 0x00000110u, c->r[2]); goto L_08936f78; }
L_08936e8c:
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x08936e98u; c->r[4] = c->r[4] + 0x00000af4u; func_0880810c(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = 0u + 0x00000003u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_08936edc; }
    c->r[16] = mem_r32(ram, c->r[30] + 0x00000114u);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0xffffc930u;
    c->r[5] = 0x08a40000u;
    c->r[5] = c->r[5] + 0x00007384u;
    { c->r[31] = 0x08936ec4u; c->r[6] = 0u + 0u; func_089f586c(c, ram); }
    mem_w32(ram, c->r[16] + 0x00000050u, c->r[2]);
    c->r[4] = 0x08a40000u;
    { c->r[31] = 0x08936ed4u; c->r[4] = c->r[4] + 0x00007388u; func_089c6f64(c, ram); }
    { mem_w32(ram, c->r[30] + 0x00000110u, c->r[2]); goto L_08936f78; }
L_08936edc:
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x08936ee8u; c->r[4] = c->r[4] + 0x00000af4u; func_0880810c(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = 0u + 0x00000004u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_08936f2c; }
    c->r[16] = mem_r32(ram, c->r[30] + 0x00000114u);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0xffffc930u;
    c->r[5] = 0x08a40000u;
    c->r[5] = c->r[5] + 0x00007394u;
    { c->r[31] = 0x08936f14u; c->r[6] = 0u + 0u; func_089f586c(c, ram); }
    mem_w32(ram, c->r[16] + 0x00000050u, c->r[2]);
    c->r[4] = 0x08a40000u;
    { c->r[31] = 0x08936f24u; c->r[4] = c->r[4] + 0x00007398u; func_089c6f64(c, ram); }
    { mem_w32(ram, c->r[30] + 0x00000110u, c->r[2]); goto L_08936f78; }
L_08936f2c:
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x08936f38u; c->r[4] = c->r[4] + 0x00000af4u; func_0880810c(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = 0u + 0x00000005u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_08936f78; }
    c->r[16] = mem_r32(ram, c->r[30] + 0x00000114u);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0xffffc930u;
    c->r[5] = 0x08a40000u;
    c->r[5] = c->r[5] + 0x000073a4u;
    { c->r[31] = 0x08936f64u; c->r[6] = 0u + 0u; func_089f586c(c, ram); }
    mem_w32(ram, c->r[16] + 0x00000050u, c->r[2]);
    c->r[4] = 0x08a40000u;
    { c->r[31] = 0x08936f74u; c->r[4] = c->r[4] + 0x000073a8u; func_089c6f64(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000110u, c->r[2]);
L_08936f78:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000110u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_08936fbc; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000118u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000110u);
    mem_w32(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000110u);
    c->r[2] = c->r[2] + 0x00000008u;
    mem_w32(ram, c->r[30] + 0x00000110u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000118u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000110u);
    mem_w32(ram, c->r[3] + 0x00000004u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000114u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000114u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000034u);
    c->r[2] = c->r[2] | 0x0040u;
    mem_w32(ram, c->r[3] + 0x00000034u, c->r[2]);
L_08936fbc:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000114u);
    mem_w32(ram, c->r[2] + 0x00000010u, 0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000114u);
    mem_w16(ram, c->r[2] + 0x00000014u, 0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000114u);
    mem_w8(ram, c->r[2] + 0x00000016u, 0u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000114u);
    c->r[2] = 0u + 0xffffffffu;
    mem_w8(ram, c->r[3] + 0x00000017u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000114u);
    mem_w16(ram, c->r[2] + 0x00000018u, 0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000114u);
    mem_w32(ram, c->r[2] + 0x0000002cu, 0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000114u);
    mem_w32(ram, c->r[2] + 0x00000030u, 0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000114u);
    mem_w16(ram, c->r[2] + 0x0000001au, 0u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000114u);
    c->r[2] = 0u + 0xffffffffu;
    mem_w16(ram, c->r[3] + 0x00000058u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000114u);
    mem_w16(ram, c->r[2] + 0x0000005au, 0u);
    c->r[4] = 0x08aa0000u;
    c->r[4] = c->r[4] + 0xfffffa72u;
    c->r[5] = 0x08a40000u;
    { c->r[31] = 0x08937028u; c->r[5] = c->r[5] + 0x000073b4u; func_08a1ad34(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000114u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x00000018u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000004u);
    c->r[1] = 0x08aa0000u;
    mem_w32(ram, c->r[1] + 0xfffffa84u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000114u);
    c->r[1] = 0x08aa0000u;
    { mem_w32(ram, c->r[1] + 0xfffffa94u, c->r[2]); goto L_08937a38; }
L_08937050:
    { c->r[31] = 0x08937058u; func_089c3a94(c, ram); }
    { int _c = (c->r[2] == 0u); if (_c) goto L_08937078; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000114u);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000016u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_08937078; }
    { goto L_08937a38; }
L_08937078:
    { c->r[31] = 0x08937080u; func_089c3a94(c, ram); }
    { int _c = (c->r[2] != 0u); if (_c) goto L_08937090; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000114u);
    mem_w8(ram, c->r[2] + 0x00000016u, 0u);
L_08937090:
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00002dfcu;
    c->r[5] = 0x08aa0000u;
    { c->r[31] = 0x089370a4u; c->r[5] = c->r[5] + 0xfffffa50u; func_089cd600(c, ram); }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000114u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000114u);
    c->r[2] = mem_r16(ram, c->r[2] + 0x0000005au);
    c->r[2] = c->r[2] + 0xffffffffu;
    mem_w16(ram, c->r[3] + 0x0000005au, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000114u);
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x0000005au);
    { int _c = ((s32)c->r[2] >= 0); if (_c) goto L_089370d0; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000114u);
    mem_w16(ram, c->r[2] + 0x0000005au, 0u);
L_089370d0:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000114u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000010u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_089371c4; }
    { c->r[31] = 0x089370e8u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000114u); func_08935af4(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000118u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000118u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_089371c4; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000118u);
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x00000004u);
    { c->r[31] = 0x08937108u; c->r[4] = c->r[2] + 0u; func_08933bd4(c, ram); }
    mem_w32(ram, c->r[30] + 0x0000011cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000011cu);
    { int _c = (c->r[2] == 0u); if (_c) goto L_08937150; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000114u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000118u);
    c->r[4] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x00000058u);
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[3] + 0x00000004u);
    { int _c = (c->r[4] == c->r[2]); if (_c) goto L_08937158; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000114u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000118u);
    c->r[2] = mem_r16(ram, c->r[2] + 0x00000004u);
    mem_w16(ram, c->r[3] + 0x00000058u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000114u);
    c->r[2] = mem_r16(ram, c->r[30] + 0x0000011cu);
    { mem_w16(ram, c->r[3] + 0x0000005au, c->r[2]); goto L_08937158; }
L_08937150:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000114u);
    mem_w16(ram, c->r[2] + 0x0000005au, 0u);
L_08937158:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000114u);
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x0000005au);
    { int _c = (c->r[2] != 0u); if (_c) goto L_089371c4; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000114u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000118u);
    mem_w32(ram, c->r[3] + 0x00000010u, c->r[2]);
    c->r[1] = 0x08aa0000u;
    mem_w8(ram, c->r[1] + 0xfffffa6du, 0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000114u);
    c->r[4] = 0x08aa0000u;
    c->r[4] = c->r[4] + 0xfffffa50u;
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000114u);
    { c->r[31] = 0x08937194u; c->r[6] = mem_r32(ram, c->r[2] + 0x00000010u); func_089362f4(c, ram); }
    c->r[3] = 0x08aa0000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0xfffffa60u);
    c->r[2] = 0u + 0x00000269u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_089371c4; }
    c->r[2] = 0x08aa0000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00004964u);
    c->r[3] = 0xfff70000u;
    c->r[3] = c->r[3] | 0xffffu;
    c->r[2] = c->r[2] & c->r[3];
    c->r[1] = 0x08aa0000u;
    mem_w32(ram, c->r[1] + 0x00004964u, c->r[2]);
L_089371c4:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000114u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000010u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_08937a38; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000114u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000010u);
    c->r[2] = mem_r8(ram, c->r[2] + 0x0000000eu);
    c->r[2] = c->r[2] ^ 0x0001u;
    c->r[2] = c->r[2] & 0x0001u;
    c->r[2] = c->r[2] & 0x00ffu;
    { int _c = (c->r[2] == 0u); if (_c) goto L_0893781c; }
    c->r[2] = c->r[30] + 0x00000120u;
    { c->r[31] = 0x08937200u; c->r[4] = c->r[2] + 0u; func_08808240(c, ram); }
    c->r[2] = 0x08aa0000u;
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00004962u);
    mem_w32(ram, c->r[30] + 0x00000170u, c->r[2]);
    c->r[2] = 0u + 0x00000008u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000170u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_089376c8; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000170u);
    c->r[2] = ((s32)c->r[3] < (s32)0x00000009u) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_08937244; }
    c->r[2] = 0u + 0x00000003u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000170u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_08937530; }
    { goto L_0893781c; }
L_08937244:
    c->r[2] = 0u + 0x0000000eu;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000170u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_0893726c; }
    c->r[2] = 0u + 0x00000010u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000170u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_08937530; }
    { goto L_0893781c; }
L_0893726c:
    c->r[3] = 0x08aa0000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0xfffffa60u);
    c->r[2] = 0u + 0x00000269u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_0893781c; }
    c->r[2] = 0x08aa0000u;
    c->r[2] = mem_r8(ram, c->r[2] + 0x00004960u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_089372ac; }
    c->r[3] = 0x08aa0000u;
    c->r[3] = mem_r8(ram, c->r[3] + 0x00004960u);
    c->r[2] = 0u + 0x00000002u;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_089372ac; }
    { goto L_0893781c; }
L_089372ac:
    c->r[1] = 0x08aa0000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0xfffffa88u);
    c->f[0] = u2f(0u);
    alx_c_cond_s(c, 12, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_089372d0; }
    { goto L_089373fc; }
L_089372d0:
    c->r[1] = 0x08aa0000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0xfffffa88u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000073c0u);
    alx_c_cond_s(c, 12, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_089372f8; }
    { goto L_089373fc; }
L_089372f8:
    c->r[2] = 0x08aa0000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00004964u);
    c->r[3] = 0x00080000u;
    c->r[2] = c->r[2] & c->r[3];
    { int _c = (c->r[2] != 0u); if (_c) goto L_089373fc; }
    c->r[2] = c->r[30] + 0x00000130u;
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000073c4u);
    c->r[4] = c->r[2] + 0u;
    c->f[12] = u2f(0u);
    c->f[13] = u2f(0u);
    c->f[14] = c->f[0];
    c->f[15] = u2f(0u);
    { c->r[31] = 0x08937338u; func_0880d140(c, ram); }
    c->r[16] = c->r[30] + 0x00000140u;
    c->r[2] = c->r[30] + 0x00000150u;
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000073c8u);
    c->r[4] = c->r[2] + 0u;
    c->f[12] = u2f(0u);
    c->f[13] = c->f[0];
    c->f[14] = u2f(0u);
    c->f[15] = u2f(0u);
    { c->r[31] = 0x08937364u; func_0880d140(c, ram); }
    c->r[3] = c->r[30] + 0x00000150u;
    c->r[2] = 0x08a80000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00002ed8u);
    c->r[2] = c->r[2] + 0x00000020u;
    c->r[4] = c->r[16] + 0u;
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x08937384u; c->r[6] = c->r[3] + 0u; func_08859f30(c, ram); }
    c->r[16] = c->r[30] + 0x00000150u;
    c->r[2] = c->r[30] + 0x00000160u;
    c->r[3] = c->r[30] + 0x00000130u;
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000073ccu);
    c->r[4] = c->r[2] + 0u;
    c->r[5] = c->r[3] + 0u;
    { c->r[31] = 0x089373a8u; c->f[12] = c->f[0]; func_0884c120(c, ram); }
    c->r[3] = c->r[30] + 0x00000160u;
    c->r[2] = c->r[30] + 0x00000140u;
    c->r[4] = c->r[16] + 0u;
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x089373c0u; c->r[6] = c->r[3] + 0u; func_08859f30(c, ram); }
    c->r[2] = c->r[30] + 0x00000140u;
    c->r[3] = c->r[30] + 0x00000150u;
    c->r[4] = 0u + 0u;
    c->r[5] = c->r[2] + 0u;
    c->r[6] = c->r[3] + 0u;
    c->r[7] = 0u + 0x00000046u;
    c->r[8] = 0u + 0x00000062u;
    { c->r[31] = 0x089373e4u; c->r[9] = 0u + 0x00000001u; func_088c00b0(c, ram); }
    c->r[3] = 0x08aa0000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00004964u);
    c->r[2] = 0x00080000u;
    c->r[2] = c->r[3] | c->r[2];
    c->r[1] = 0x08aa0000u;
    mem_w32(ram, c->r[1] + 0x00004964u, c->r[2]);
L_089373fc:
    c->r[1] = 0x08aa0000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0xfffffa88u);
    c->f[0] = u2f(0u);
    alx_c_cond_s(c, 12, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_08937420; }
    { goto L_0893781c; }
L_08937420:
    c->r[1] = 0x08aa0000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0xfffffa88u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000073d0u);
    alx_c_cond_s(c, 12, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_08937448; }
    { goto L_0893781c; }
L_08937448:
    c->r[16] = c->r[30] + 0x00000130u;
    c->r[2] = c->r[30] + 0x00000140u;
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000073ccu);
    c->r[1] = 0x08a40000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0x000073d4u);
    c->r[4] = c->r[2] + 0u;
    c->f[12] = u2f(0u);
    c->f[13] = c->f[0];
    c->f[14] = c->f[1];
    c->f[15] = u2f(0u);
    { c->r[31] = 0x0893747cu; func_0880d140(c, ram); }
    c->r[3] = c->r[30] + 0x00000140u;
    c->r[2] = 0x08a80000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00002ed8u);
    c->r[2] = c->r[2] + 0x00000020u;
    c->r[4] = c->r[16] + 0u;
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x0893749cu; c->r[6] = c->r[3] + 0u; func_08859f30(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000130u);
    mem_w32(ram, c->r[30] + 0x00000120u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000134u);
    mem_w32(ram, c->r[30] + 0x00000124u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000138u);
    mem_w32(ram, c->r[30] + 0x00000128u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000013cu);
    mem_w32(ram, c->r[30] + 0x0000012cu, c->r[2]);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000124u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000073c8u);
    alx_c_cond_s(c, 12, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_089374e0; }
    { goto L_089374ec; }
L_089374e0:
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000073c8u);
    mem_wf32(ram, c->r[30] + 0x00000124u, c->f[0]);
L_089374ec:
    c->r[2] = c->r[30] + 0x00000120u;
    { c->r[31] = 0x089374f8u; c->r[4] = c->r[2] + 0u; func_088c06e8(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000114u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x00000010u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000114u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000010u);
    c->r[2] = mem_r8(ram, c->r[2] + 0x0000000eu);
    c->r[2] = c->r[2] | 0x0001u;
    mem_w8(ram, c->r[3] + 0x0000000eu, c->r[2]);
    c->r[3] = 0x08aa0000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00004964u);
    c->r[2] = 0x00400000u;
    c->r[2] = c->r[3] | c->r[2];
    c->r[1] = 0x08aa0000u;
    { mem_w32(ram, c->r[1] + 0x00004964u, c->r[2]); goto L_0893781c; }
L_08937530:
    c->r[3] = 0x08aa0000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0xfffffa60u);
    c->r[2] = 0u + 0x00000359u;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_08937560; }
    c->r[3] = 0x08aa0000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0xfffffa60u);
    c->r[2] = 0u + 0x0000047du;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_08937560; }
    { goto L_0893781c; }
L_08937560:
    c->r[2] = 0x08aa0000u;
    c->r[2] = mem_r8(ram, c->r[2] + 0x00004960u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_0893758c; }
    c->r[3] = 0x08aa0000u;
    c->r[3] = mem_r8(ram, c->r[3] + 0x00004960u);
    c->r[2] = 0u + 0x00000002u;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_0893758c; }
    { goto L_0893781c; }
L_0893758c:
    c->r[1] = 0x08aa0000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0xfffffa88u);
    c->f[0] = u2f(0u);
    alx_c_cond_s(c, 12, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_089375b0; }
    { goto L_0893781c; }
L_089375b0:
    c->r[1] = 0x08aa0000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0xfffffa88u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000073d0u);
    alx_c_cond_s(c, 12, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_089375d8; }
    { goto L_0893781c; }
L_089375d8:
    c->r[2] = 0x08aa0000u;
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00004962u);
    { c->r[31] = 0x089375e8u; c->r[4] = c->r[2] + 0u; func_0895b1d4(c, ram); }
    mem_w32(ram, c->r[30] + 0x0000011cu, c->r[2]);
    c->r[4] = c->r[30] + 0x00000130u;
    c->r[2] = 0x08a80000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00002ed8u);
    c->r[5] = c->r[2] + 0x00000020u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000011cu);
    c->r[3] = c->r[2] << 3;
    c->r[2] = 0x08aa0000u;
    c->r[2] = c->r[2] + 0x000049dcu;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000020u;
    { c->r[31] = 0x08937620u; c->r[6] = c->r[2] + 0u; func_08859f30(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000130u);
    mem_w32(ram, c->r[30] + 0x00000120u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000134u);
    mem_w32(ram, c->r[30] + 0x00000124u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000138u);
    mem_w32(ram, c->r[30] + 0x00000128u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000013cu);
    mem_w32(ram, c->r[30] + 0x0000012cu, c->r[2]);
    c->r[2] = c->r[30] + 0x00000120u;
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000073d8u);
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x08937658u; c->f[12] = c->f[0]; func_088e0a98(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000011cu);
    c->r[3] = c->r[2] << 3;
    c->r[2] = 0x08aa0000u;
    c->r[2] = c->r[2] + 0x000049dcu;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000024u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000073c8u);
    c->f[0] = c->f[1] + c->f[0];
    mem_wf32(ram, c->r[30] + 0x00000124u, c->f[0]);
    c->r[2] = c->r[30] + 0x00000120u;
    { c->r[31] = 0x08937690u; c->r[4] = c->r[2] + 0u; func_088c06e8(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000114u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x00000010u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000114u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000010u);
    c->r[2] = mem_r8(ram, c->r[2] + 0x0000000eu);
    c->r[2] = c->r[2] | 0x0001u;
    mem_w8(ram, c->r[3] + 0x0000000eu, c->r[2]);
    c->r[3] = 0x08aa0000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00004964u);
    c->r[2] = 0x00400000u;
    c->r[2] = c->r[3] | c->r[2];
    c->r[1] = 0x08aa0000u;
    { mem_w32(ram, c->r[1] + 0x00004964u, c->r[2]); goto L_0893781c; }
L_089376c8:
    c->r[3] = 0x08aa0000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0xfffffa60u);
    c->r[2] = 0u + 0x00000b9du;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_089376f8; }
    c->r[3] = 0x08aa0000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0xfffffa60u);
    c->r[2] = 0u + 0x00000b89u;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_089376f8; }
    { goto L_0893781c; }
L_089376f8:
    c->r[2] = 0x08aa0000u;
    c->r[2] = mem_r8(ram, c->r[2] + 0x00004960u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_08937724; }
    c->r[3] = 0x08aa0000u;
    c->r[3] = mem_r8(ram, c->r[3] + 0x00004960u);
    c->r[2] = 0u + 0x00000002u;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_08937724; }
    { goto L_0893781c; }
L_08937724:
    c->r[1] = 0x08aa0000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0xfffffa88u);
    c->f[0] = u2f(0u);
    alx_c_cond_s(c, 12, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_08937748; }
    { goto L_0893781c; }
L_08937748:
    c->r[1] = 0x08aa0000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0xfffffa88u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000073dcu);
    alx_c_cond_s(c, 12, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_08937770; }
    { goto L_0893781c; }
L_08937770:
    { c->r[31] = 0x08937778u; func_088de984(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000118u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000118u);
    c->r[2] = 0u + 0x000000ffu;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_0893781c; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000118u);
    c->r[3] = c->r[2] << 3;
    c->r[2] = 0x08aa0000u;
    c->r[2] = c->r[2] + 0x000049e0u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_0893781c; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000118u);
    c->r[3] = c->r[2] << 3;
    c->r[2] = 0x08aa0000u;
    c->r[2] = c->r[2] + 0x000049e0u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[4] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000118u);
    c->r[3] = c->r[2] << 3;
    c->r[2] = 0x08aa0000u;
    c->r[2] = c->r[2] + 0x000049e0u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x000000d4u);
    c->r[2] = c->r[2] | 0x0400u;
    mem_w32(ram, c->r[4] + 0x000000d4u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000114u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x00000010u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000114u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000010u);
    c->r[2] = mem_r8(ram, c->r[2] + 0x0000000eu);
    c->r[2] = c->r[2] | 0x0001u;
    mem_w8(ram, c->r[3] + 0x0000000eu, c->r[2]);
    c->r[3] = 0x08aa0000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00004964u);
    c->r[2] = 0x00400000u;
    c->r[2] = c->r[3] | c->r[2];
    c->r[1] = 0x08aa0000u;
    mem_w32(ram, c->r[1] + 0x00004964u, c->r[2]);
L_0893781c:
    c->r[2] = 0x08aa0000u;
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0xfffffa6du);
    { int _c = (c->r[2] != 0u); if (_c) goto L_08937930; }
    c->r[3] = 0x08aa0000u;
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[3] + 0x00004962u);
    c->r[2] = 0u + 0x00000014u;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_08937848; }
    { goto L_08937930; }
L_08937848:
    c->r[3] = 0x08aa0000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0xfffffa60u);
    c->r[2] = 0u + 0x00000651u;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_0893788c; }
    c->r[3] = 0x08aa0000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0xfffffa60u);
    c->r[2] = 0u + 0x00000652u;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_0893788c; }
    c->r[3] = 0x08aa0000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0xfffffa60u);
    c->r[2] = 0u + 0x0000065au;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_0893788c; }
    { goto L_08937930; }
L_0893788c:
    c->r[2] = c->r[30] + 0x00000120u;
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000073e0u);
    c->r[1] = 0x08a40000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0x000073e4u);
    c->r[4] = c->r[2] + 0u;
    c->f[12] = c->f[0];
    c->f[13] = u2f(0u);
    c->f[14] = c->f[1];
    c->f[15] = u2f(0u);
    { c->r[31] = 0x089378bcu; func_0880d140(c, ram); }
    c->r[2] = c->r[30] + 0x00000130u;
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000073e8u);
    c->r[1] = 0x08a40000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0x000073e8u);
    c->r[4] = c->r[2] + 0u;
    c->f[12] = c->f[0];
    c->f[13] = u2f(0u);
    c->f[14] = c->f[1];
    c->f[15] = u2f(0u);
    { c->r[31] = 0x089378ecu; func_0880d140(c, ram); }
    c->r[3] = c->r[30] + 0x00000130u;
    c->r[2] = c->r[30] + 0x00000120u;
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x08937900u; c->r[5] = c->r[3] + 0u; func_0880d1a0(c, ram); }
    c->r[2] = 0x08a80000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00002ed8u);
    c->r[2] = c->r[2] + 0x00000020u;
    c->r[4] = 0x06000000u;
    c->r[4] = c->r[4] | 0x000au;
    c->r[5] = c->r[2] + 0u;
    c->r[6] = 0u + 0u;
    c->r[7] = 0u + 0u;
    c->f[12] = u2f(0u);
    c->f[13] = u2f(0u);
    { c->r[31] = 0x08937930u; c->r[8] = 0u + 0xffffffffu; func_0884fcb4(c, ram); }
L_08937930:
    c->r[3] = 0x08aa0000u;
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[3] + 0xfffffa6du);
    c->r[2] = 0u + 0x00000002u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_08937a38; }
    c->r[3] = 0x08aa0000u;
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[3] + 0x00004962u);
    c->r[2] = 0u + 0x00000004u;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_08937960; }
    { goto L_08937988; }
L_08937960:
    c->r[3] = 0x08aa0000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0xfffffa60u);
    c->r[2] = 0u + 0x000004dau;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_08937988; }
    c->r[2] = 0x08aa0000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00004964u);
    c->r[2] = c->r[2] | 0x0040u;
    c->r[1] = 0x08aa0000u;
    mem_w32(ram, c->r[1] + 0x00004964u, c->r[2]);
L_08937988:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000114u);
    { c->r[31] = 0x08937994u; c->r[4] = mem_r32(ram, c->r[2] + 0x00000010u); func_0893435c(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000114u);
    { mem_w32(ram, c->r[2] + 0x00000010u, 0u); goto L_08937a38; }
L_089379a0:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000114u);
    { c->r[31] = 0x089379acu; c->r[4] = mem_r32(ram, c->r[2] + 0x00000000u); func_089b73e0(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000114u);
    { c->r[31] = 0x089379b8u; c->r[4] = mem_r32(ram, c->r[2] + 0x00000008u); func_089b73e0(c, ram); }
    c->r[1] = 0x08aa0000u;
    { mem_w32(ram, c->r[1] + 0xfffffa94u, 0u); goto L_08937a38; }
L_089379c4:
    { c->r[31] = 0x089379ccu; func_089c3a94(c, ram); }
    { int _c = (c->r[2] == 0u); if (_c) goto L_089379ec; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000114u);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000016u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_089379ec; }
    { goto L_08937a38; }
L_089379ec:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000114u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000010u);
    mem_w32(ram, c->r[30] + 0x0000011cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000011cu);
    { int _c = (c->r[2] != 0u); if (_c) goto L_08937a1c; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000114u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000114u);
    c->r[2] = mem_r16(ram, c->r[2] + 0x00000018u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w16(ram, c->r[3] + 0x00000018u, c->r[2]); goto L_08937a38; }
L_08937a1c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000114u);
    mem_w16(ram, c->r[2] + 0x00000018u, 0u);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00002dfcu;
    c->r[5] = 0x08aa0000u;
    { c->r[31] = 0x08937a38u; c->r[5] = c->r[5] + 0xfffffa50u; func_089cd654(c, ram); }
L_08937a38:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000188u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000184u);
    c->r[16] = mem_r32(ram, c->r[29] + 0x00000180u);
    { c->r[29] = c->r[29] + 0x00000190u; return; }
    return; /* fell out of func_08936784 */
}

/* func_0893c334  0x0893c334..0x0893c554  544 bytes, source=sweep */
void func_0893c334(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0893c334u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[6]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = (c->r[2] < 0x00000016u) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_0893c540; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08a40000u;
    c->r[2] = c->r[2] + 0x000074d0u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    { u32 _t = c->r[2]; switch (_t) { case 0x0893c380u: goto L_0893c380; case 0x0893c394u: goto L_0893c394; case 0x0893c3a8u: goto L_0893c3a8; case 0x0893c3bcu: goto L_0893c3bc; case 0x0893c3d0u: goto L_0893c3d0; case 0x0893c3e4u: goto L_0893c3e4; case 0x0893c3f8u: goto L_0893c3f8; case 0x0893c40cu: goto L_0893c40c; case 0x0893c420u: goto L_0893c420; case 0x0893c434u: goto L_0893c434; case 0x0893c448u: goto L_0893c448; case 0x0893c45cu: goto L_0893c45c; case 0x0893c470u: goto L_0893c470; case 0x0893c484u: goto L_0893c484; case 0x0893c49cu: goto L_0893c49c; case 0x0893c4b4u: goto L_0893c4b4; case 0x0893c4ccu: goto L_0893c4cc; case 0x0893c4e4u: goto L_0893c4e4; case 0x0893c4f8u: goto L_0893c4f8; case 0x0893c50cu: goto L_0893c50c; case 0x0893c520u: goto L_0893c520; case 0x0893c534u: goto L_0893c534; default: recomp_trap_unknown_indirect(c, ram, 0x0893c378u, _t); return; } }
L_0893c380:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x0893c38cu; c->r[5] = mem_r32(ram, c->r[30] + 0x00000008u); func_0893c554(c, ram); }
    { goto L_0893c540; }
L_0893c394:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x0893c3a0u; c->r[5] = mem_r32(ram, c->r[30] + 0x00000008u); func_0893c598(c, ram); }
    { goto L_0893c540; }
L_0893c3a8:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x0893c3b4u; c->r[5] = mem_r32(ram, c->r[30] + 0x00000008u); func_0893c9e4(c, ram); }
    { goto L_0893c540; }
L_0893c3bc:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x0893c3c8u; c->r[5] = mem_r32(ram, c->r[30] + 0x00000008u); func_0893c5dc(c, ram); }
    { goto L_0893c540; }
L_0893c3d0:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x0893c3dcu; c->r[5] = mem_r32(ram, c->r[30] + 0x00000008u); func_0893c620(c, ram); }
    { goto L_0893c540; }
L_0893c3e4:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x0893c3f0u; c->r[5] = mem_r32(ram, c->r[30] + 0x00000008u); func_0893c664(c, ram); }
    { goto L_0893c540; }
L_0893c3f8:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x0893c404u; c->r[5] = mem_r32(ram, c->r[30] + 0x00000008u); func_0893c6a8(c, ram); }
    { goto L_0893c540; }
L_0893c40c:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x0893c418u; c->r[5] = mem_r32(ram, c->r[30] + 0x00000008u); func_0893c6ec(c, ram); }
    { goto L_0893c540; }
L_0893c420:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x0893c42cu; c->r[5] = mem_r32(ram, c->r[30] + 0x00000008u); func_0893c730(c, ram); }
    { goto L_0893c540; }
L_0893c434:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x0893c440u; c->r[5] = mem_r32(ram, c->r[30] + 0x00000008u); func_0893c774(c, ram); }
    { goto L_0893c540; }
L_0893c448:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x0893c454u; c->r[5] = mem_r32(ram, c->r[30] + 0x00000008u); func_0893c7b8(c, ram); }
    { goto L_0893c540; }
L_0893c45c:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x0893c468u; c->r[5] = mem_r32(ram, c->r[30] + 0x00000008u); func_0893c7fc(c, ram); }
    { goto L_0893c540; }
L_0893c470:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x0893c47cu; c->r[5] = mem_r32(ram, c->r[30] + 0x00000008u); func_0893c840(c, ram); }
    { goto L_0893c540; }
L_0893c484:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = 0u + 0u;
    { c->r[31] = 0x0893c494u; c->r[6] = mem_r32(ram, c->r[30] + 0x00000008u); func_0893c884(c, ram); }
    { goto L_0893c540; }
L_0893c49c:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = 0u + 0x00000001u;
    { c->r[31] = 0x0893c4acu; c->r[6] = mem_r32(ram, c->r[30] + 0x00000008u); func_0893c884(c, ram); }
    { goto L_0893c540; }
L_0893c4b4:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = 0u + 0x00000002u;
    { c->r[31] = 0x0893c4c4u; c->r[6] = mem_r32(ram, c->r[30] + 0x00000008u); func_0893c884(c, ram); }
    { goto L_0893c540; }
L_0893c4cc:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = 0u + 0x00000003u;
    { c->r[31] = 0x0893c4dcu; c->r[6] = mem_r32(ram, c->r[30] + 0x00000008u); func_0893c884(c, ram); }
    { goto L_0893c540; }
L_0893c4e4:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x0893c4f0u; c->r[5] = mem_r32(ram, c->r[30] + 0x00000008u); func_0893c8d4(c, ram); }
    { goto L_0893c540; }
L_0893c4f8:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x0893c504u; c->r[5] = mem_r32(ram, c->r[30] + 0x00000008u); func_0893c918(c, ram); }
    { goto L_0893c540; }
L_0893c50c:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x0893c518u; c->r[5] = mem_r32(ram, c->r[30] + 0x00000008u); func_0893c95c(c, ram); }
    { goto L_0893c540; }
L_0893c520:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x0893c52cu; c->r[5] = mem_r32(ram, c->r[30] + 0x00000008u); func_0893c9a0(c, ram); }
    { goto L_0893c540; }
L_0893c534:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x0893c540u; c->r[5] = mem_r32(ram, c->r[30] + 0x00000008u); func_0893ca90(c, ram); }
L_0893c540:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_0893c334 */
}

/* func_0893d934  0x0893d934..0x0893d978  68 bytes, source=sweep */
void func_0893d934(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0893d934u);
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
    { c->r[31] = 0x0893d964u; c->r[5] = c->r[2] + 0u; func_0893d560(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_0893d934 */
}

/* func_0893f9e4  0x0893f9e4..0x0893fa28  68 bytes, source=sweep */
void func_0893f9e4(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0893f9e4u);
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
    return; /* fell out of func_0893f9e4 */
}

/* func_08940870  0x08940870..0x089408a0  48 bytes, source=sweep */
void func_08940870(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08940870u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_wf32(ram, c->r[30] + 0x00000000u, c->f[12]);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000000u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00007668u);
    c->f[0] = c->f[1] * c->f[0];
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_08940870 */
}

/* func_0894607c  0x0894607c..0x089460c0  68 bytes, source=sweep */
void func_0894607c(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0894607cu);
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
    { c->r[31] = 0x089460acu; c->r[5] = c->r[2] + 0u; func_0894568c(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_0894607c */
}

/* func_0894b798  0x0894b798..0x0894b7d4  60 bytes, source=sweep */
void func_0894b798(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0894b798u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000004u);
    { c->r[31] = 0x0894b7c0u; c->r[6] = 0u + 0u; func_0894bcf4(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_0894b798 */
}

/* func_0894c67c  0x0894c67c..0x0894d8d4  4696 bytes, source=fde */
void func_0894c67c(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0894c67cu);
    c->r[29] = c->r[29] + 0xffffff00u;
    mem_w32(ram, c->r[29] + 0x000000f8u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x000000f4u, c->r[30]);
    mem_w32(ram, c->r[29] + 0x000000f0u, c->r[16]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[2] = c->r[5] + 0u;
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[6]);
    mem_w8(ram, c->r[30] + 0x00000004u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x000000e0u;
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x00000044u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000ac8u;
    { c->r[31] = 0x0894c6c8u; c->r[5] = c->r[2] + 0u; func_089cb820(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]);
    c->r[2] = mem_r8(ram, c->r[30] + 0x00000004u);
    mem_w32(ram, c->r[30] + 0x000000e4u, c->r[2]);
    c->r[2] = 0u + 0x00000001u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x000000e4u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_0894c860; }
    c->r[4] = mem_r32(ram, c->r[30] + 0x000000e4u);
    c->r[2] = ((s32)c->r[4] < (s32)0x00000002u) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_0894c708; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000e4u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_0894c720; }
    { goto L_0894d8bc; }
L_0894c708:
    c->r[2] = 0u + 0x0000000bu;
    c->r[3] = mem_r32(ram, c->r[30] + 0x000000e4u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_0894cec8; }
    { goto L_0894d8bc; }
L_0894c720:
    c->r[2] = 0x08aa0000u;
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x00003930u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_0894c748; }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = 0x08a40000u;
    { c->r[31] = 0x0894c740u; c->r[5] = c->r[5] + 0x00007af8u; func_089c35a0(c, ram); }
    c->r[1] = 0x08aa0000u;
    mem_w16(ram, c->r[1] + 0x00003930u, c->r[2]);
L_0894c748:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[16] = c->r[2] + 0x00000044u;
    { c->r[31] = 0x0894c758u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u); func_089c35d4(c, ram); }
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000ac8u;
    { c->r[31] = 0x0894c768u; c->r[5] = c->r[2] + 0u; func_089cb780(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    mem_w32(ram, c->r[16] + 0x00000000u, c->r[2]);
    c->r[16] = mem_r32(ram, c->r[30] + 0x0000000cu);
    { c->r[31] = 0x0894c780u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u); func_089c35d4(c, ram); }
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000020u);
    mem_wf32(ram, c->r[16] + 0x0000003cu, c->f[0]);
    c->r[16] = mem_r32(ram, c->r[30] + 0x0000000cu);
    { c->r[31] = 0x0894c794u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u); func_089c35d4(c, ram); }
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000028u);
    mem_wf32(ram, c->r[16] + 0x00000040u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000010u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_0894c814; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000010u);
    mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]);
    c->r[5] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[4] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = c->r[2] + 0x00000003u;
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000000u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[3];
    c->r[2] = c->r[2] << 1;
    c->r[3] = mem_r8(ram, c->r[4] + 0x00000033u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[3] = 0u + 0x00000020u;
    c->r[2] = c->r[2] + c->r[3];
    mem_w8(ram, c->r[5] + 0x00000033u, c->r[2]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = c->r[2] + 0x00000004u;
    c->r[3] = mem_r8(ram, c->r[3] + 0x00000033u);
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000000u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = c->r[2] + 0xffffffd0u;
    mem_w8(ram, c->r[4] + 0x00000033u, c->r[2]);
L_0894c814:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000033u);
    c->r[3] = c->r[2] << 4;
    c->r[2] = 0x08a60000u;
    c->r[2] = c->r[2] + 0xffff86c8u;
    c->r[2] = c->r[3] + c->r[2];
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000000u);
    c->f[0] = u2f(0u);
    alx_c_cond_s(c, 2, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_0894c84c; }
    { goto L_0894d8bc; }
L_0894c84c:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x0894c858u; c->r[5] = 0u + 0x00000002u; func_0880d260(c, ram); }
    { goto L_0894d8bc; }
L_0894c860:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_0894c880; }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x0894c878u; c->r[5] = 0u + 0x00000002u; func_0880d260(c, ram); }
    { goto L_0894d8bc; }
L_0894c880:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x0000003cu);
    c->f[0] = mem_rf32(ram, c->r[3] + 0x00000020u);
    c->f[0] = c->f[1] - c->f[0];
    mem_wf32(ram, c->r[30] + 0x0000001cu, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000040u);
    c->f[0] = mem_rf32(ram, c->r[3] + 0x00000028u);
    c->f[0] = c->f[1] - c->f[0];
    mem_wf32(ram, c->r[30] + 0x00000020u, c->f[0]);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x0000001cu);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x0000001cu);
    c->f[2] = c->f[1] * c->f[0];
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000020u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000020u);
    c->f[0] = c->f[1] * c->f[0];
    c->f[0] = c->f[2] + c->f[0];
    { c->r[31] = 0x0894c8d4u; c->f[12] = c->f[0]; func_08a104b4(c, ram); }
    mem_wf32(ram, c->r[30] + 0x00000024u, c->f[0]);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000024u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00007b04u);
    alx_c_cond_s(c, 12, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_0894c8fc; }
    { goto L_0894c904; }
L_0894c8fc:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    mem_w8(ram, c->r[2] + 0x00000032u, 0u);
L_0894c904:
    c->r[2] = 0u + 0x00000001u;
    mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000032u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_0894c934; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r16(ram, c->r[2] + 0x00000028u);
    c->r[2] = (c->r[2] < 0x000001f4u) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_0894c934; }
    mem_w32(ram, c->r[30] + 0x00000018u, 0u);
L_0894c934:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_0894cb44; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    { c->r[31] = 0x0894c94cu; c->f[12] = mem_rf32(ram, c->r[2] + 0x00000044u); func_08a0f760(c, ram); }
    mem_wf32(ram, c->r[30] + 0x00000028u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    { c->r[31] = 0x0894c95cu; c->f[12] = mem_rf32(ram, c->r[2] + 0x00000044u); func_08a0f5bc(c, ram); }
    mem_wf32(ram, c->r[30] + 0x0000002cu, c->f[0]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000032u);
    c->r[2] = c->r[2] + 0x00000001u;
    c->r[3] = 0u + 0x00000004u;
    c->r[2] = alx_min(c->r[2], c->r[3]);
    mem_w8(ram, c->r[4] + 0x00000032u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000032u);
    mem_w32(ram, c->r[30] + 0x00000030u, c->r[2]);
L_0894c988:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000030u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_0894c99c; }
    { goto L_0894ca38; }
L_0894c99c:
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000030u);
    c->r[2] = c->r[2] << 3;
    c->r[4] = c->r[2] + c->r[3];
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000030u);
    c->r[2] = c->r[2] << 3;
    c->r[2] = c->r[2] + c->r[3];
    c->r[2] = c->r[2] + 0xfffffff8u;
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000000u);
    mem_wf32(ram, c->r[4] + 0x00000000u, c->f[0]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000030u);
    c->r[2] = c->r[2] << 3;
    c->r[2] = c->r[2] + c->r[3];
    c->r[4] = c->r[2] + 0x00000004u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000030u);
    c->r[2] = c->r[2] << 3;
    c->r[2] = c->r[2] + c->r[3];
    c->r[2] = c->r[2] + 0xfffffffcu;
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000000u);
    mem_wf32(ram, c->r[4] + 0x00000000u, c->f[0]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000030u);
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[4] = c->r[2] + 0x00000020u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000030u);
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[2] = c->r[2] + 0x0000001eu;
    c->r[2] = mem_r16(ram, c->r[2] + 0x00000008u);
    mem_w16(ram, c->r[4] + 0x00000008u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000030u);
    c->r[2] = c->r[2] + 0xffffffffu;
    { mem_w32(ram, c->r[30] + 0x00000030u, c->r[2]); goto L_0894c988; }
L_0894ca38:
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000020u);
    mem_wf32(ram, c->r[3] + 0x00000000u, c->f[0]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000028u);
    mem_wf32(ram, c->r[3] + 0x00000004u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    mem_w16(ram, c->r[2] + 0x00000028u, 0u);
    c->r[5] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[4] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000033u);
    c->r[3] = c->r[2] << 4;
    c->r[2] = 0x08a60000u;
    c->r[2] = c->r[2] + 0xffff86ccu;
    c->r[2] = c->r[3] + c->r[2];
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000028u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000000u);
    c->f[1] = c->f[1] * c->f[0];
    c->f[0] = mem_rf32(ram, c->r[4] + 0x00000000u);
    c->f[0] = c->f[0] + c->f[1];
    mem_wf32(ram, c->r[5] + 0x00000000u, c->f[0]);
    c->r[5] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[4] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000033u);
    c->r[3] = c->r[2] << 4;
    c->r[2] = 0x08a60000u;
    c->r[2] = c->r[2] + 0xffff86ccu;
    c->r[2] = c->r[3] + c->r[2];
    c->f[1] = mem_rf32(ram, c->r[30] + 0x0000002cu);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000000u);
    c->f[1] = c->f[1] * c->f[0];
    c->f[0] = mem_rf32(ram, c->r[4] + 0x00000004u);
    c->f[0] = c->f[0] + c->f[1];
    mem_wf32(ram, c->r[5] + 0x00000004u, c->f[0]);
    c->r[5] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[4] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000033u);
    c->r[3] = c->r[2] << 4;
    c->r[2] = 0x08a60000u;
    c->r[2] = c->r[2] + 0xffff86d4u;
    c->r[2] = c->r[3] + c->r[2];
    c->f[1] = mem_rf32(ram, c->r[30] + 0x0000002cu);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000000u);
    c->f[1] = c->f[1] * c->f[0];
    c->f[0] = mem_rf32(ram, c->r[4] + 0x00000000u);
    c->f[0] = c->f[0] + c->f[1];
    mem_wf32(ram, c->r[5] + 0x00000000u, c->f[0]);
    c->r[5] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[4] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000033u);
    c->r[3] = c->r[2] << 4;
    c->r[2] = 0x08a60000u;
    c->r[2] = c->r[2] + 0xffff86d4u;
    c->r[2] = c->r[3] + c->r[2];
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000028u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000000u);
    c->f[1] = c->f[1] * c->f[0];
    c->f[0] = mem_rf32(ram, c->r[4] + 0x00000004u);
    c->f[0] = c->f[0] - c->f[1];
    { mem_wf32(ram, c->r[5] + 0x00000004u, c->f[0]); goto L_0894cc24; }
L_0894cb44:
    mem_w32(ram, c->r[30] + 0x00000030u, 0u);
L_0894cb48:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000032u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000030u);
    c->r[2] = ((s32)c->r[2] < (s32)c->r[3]) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_0894cb68; }
    { goto L_0894cc24; }
L_0894cb68:
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000030u);
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[2] = c->r[2] + 0x00000020u;
    mem_w32(ram, c->r[30] + 0x000000bcu, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000030u);
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[2] = c->r[2] + 0x00000020u;
    mem_w32(ram, c->r[30] + 0x000000c0u, c->r[2]);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000024u);
    mem_wf32(ram, c->r[30] + 0x000000c8u, c->f[0]);
    c->r[1] = 0x08a40000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0x00007b08u);
    mem_wf32(ram, c->r[30] + 0x000000ccu, c->f[1]);
    c->f[2] = mem_rf32(ram, c->r[30] + 0x000000c8u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x000000ccu);
    alx_c_cond_s(c, 14, c->f[0], c->f[2]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_0894cbd4; }
    c->f[1] = mem_rf32(ram, c->r[30] + 0x000000c8u);
    c->f[1] = u2f((u32)alx_trunc_w_s(c->f[1]));
    { mem_wf32(ram, c->r[30] + 0x000000c4u, c->f[1]); goto L_0894cbf8; }
L_0894cbd4:
    c->f[2] = mem_rf32(ram, c->r[30] + 0x000000c8u);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x000000ccu);
    c->f[0] = c->f[2] - c->f[1];
    c->r[2] = 0x80000000u;
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    mem_wf32(ram, c->r[30] + 0x000000c4u, c->f[0]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x000000c4u);
    c->r[3] = c->r[3] | c->r[2];
    mem_w32(ram, c->r[30] + 0x000000c4u, c->r[3]);
L_0894cbf8:
    c->r[4] = mem_r32(ram, c->r[30] + 0x000000c4u);
    c->r[3] = c->r[4] + 0u;
    c->r[4] = mem_r32(ram, c->r[30] + 0x000000c0u);
    c->r[2] = mem_r16(ram, c->r[4] + 0x00000008u);
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = mem_r32(ram, c->r[30] + 0x000000bcu);
    mem_w16(ram, c->r[3] + 0x00000008u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000030u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000030u, c->r[2]); goto L_0894cb48; }
L_0894cc24:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000040u);
    c->f[1] = (f32)fabsf(c->f[0]);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00007b0cu);
    alx_c_cond_s(c, 12, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_0894cc50; }
    { goto L_0894cd54; }
L_0894cc50:
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000024u);
    c->f[0] = u2f(0u);
    alx_c_cond_s(c, 12, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_0894cc70; }
    { goto L_0894ccf4; }
L_0894cc70:
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[1] = 0x08a80000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0x00002e40u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00007b10u);
    c->f[1] = c->f[1] * c->f[0];
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000038u);
    c->f[0] = c->f[0] + c->f[1];
    mem_wf32(ram, c->r[3] + 0x00000038u, c->f[0]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x0000000cu);
    mem_w32(ram, c->r[30] + 0x000000d0u, c->r[4]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000038u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00007b14u);
    alx_c_cond_s(c, 12, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_0894ccc8; }
    { goto L_0894ccd8; }
L_0894ccc8:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000038u);
    { mem_wf32(ram, c->r[30] + 0x000000d4u, c->f[0]); goto L_0894cce4; }
L_0894ccd8:
    c->r[1] = 0x08a40000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0x00007b14u);
    mem_wf32(ram, c->r[30] + 0x000000d4u, c->f[1]);
L_0894cce4:
    c->f[0] = mem_rf32(ram, c->r[30] + 0x000000d4u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000d0u);
    { mem_wf32(ram, c->r[2] + 0x00000038u, c->f[0]); goto L_0894ce3c; }
L_0894ccf4:
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[1] = 0x08a80000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0x00002e40u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00007b18u);
    c->f[1] = c->f[1] * c->f[0];
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000038u);
    c->f[0] = c->f[0] - c->f[1];
    mem_wf32(ram, c->r[3] + 0x00000038u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000038u);
    c->f[0] = u2f(0u);
    alx_c_cond_s(c, 12, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_0894cd40; }
    { goto L_0894ce3c; }
L_0894cd40:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    mem_w32(ram, c->r[2] + 0x00000038u, 0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    { mem_w8(ram, c->r[2] + 0x00000032u, 0u); goto L_0894ce3c; }
L_0894cd54:
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[4] = mem_r8(ram, c->r[3] + 0x00000048u);
    c->r[2] = c->r[4] + 0x00000001u;
    mem_w8(ram, c->r[3] + 0x00000048u, c->r[2]);
    c->r[2] = c->r[4] & 0x00ffu;
    c->r[2] = (c->r[2] < 0x00000010u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_0894cda4; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    mem_w8(ram, c->r[2] + 0x00000048u, 0u);
    c->r[4] = 0u + 0x00000059u;
    c->r[5] = 0u + 0u;
    c->r[6] = 0u + 0u;
    c->r[7] = 0u + 0u;
    c->r[8] = mem_r32(ram, c->r[30] + 0x00000010u);
    { c->r[31] = 0x0894cd98u; c->r[9] = 0u + 0u; func_089c6bec(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000030u, c->r[2]);
    { c->r[31] = 0x0894cda4u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000030u); func_089467b8(c, ram); }
L_0894cda4:
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[1] = 0x08a80000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0x00002e40u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00007b1cu);
    c->f[1] = c->f[1] * c->f[0];
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000038u);
    c->f[0] = c->f[0] - c->f[1];
    mem_wf32(ram, c->r[3] + 0x00000038u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    mem_w32(ram, c->r[30] + 0x000000d8u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000038u);
    c->f[0] = u2f(0u);
    alx_c_cond_s(c, 12, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_0894cdf8; }
    { goto L_0894ce08; }
L_0894cdf8:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000038u);
    { mem_wf32(ram, c->r[30] + 0x000000dcu, c->f[0]); goto L_0894ce0c; }
L_0894ce08:
    mem_w32(ram, c->r[30] + 0x000000dcu, 0u);
L_0894ce0c:
    c->f[0] = mem_rf32(ram, c->r[30] + 0x000000dcu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000d8u);
    mem_wf32(ram, c->r[2] + 0x00000038u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x0000008cu);
    c->r[2] = 0x00800000u;
    c->r[2] = c->r[3] & c->r[2];
    { int _c = (c->r[2] == 0u); if (_c) goto L_0894ce3c; }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x0894ce3cu; c->r[5] = 0u + 0x00000002u; func_0880d260(c, ram); }
L_0894ce3c:
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000020u);
    mem_wf32(ram, c->r[3] + 0x0000003cu, c->f[0]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000028u);
    mem_wf32(ram, c->r[3] + 0x00000040u, c->f[0]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[1] = 0x08a80000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0x00002e40u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00007b20u);
    c->f[1] = c->f[1] * c->f[0];
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000034u);
    c->f[0] = c->f[0] - c->f[1];
    mem_wf32(ram, c->r[3] + 0x00000034u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000034u);
    c->f[0] = u2f(0u);
    alx_c_cond_s(c, 12, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_0894cea8; }
    { goto L_0894d8bc; }
L_0894cea8:
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000034u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00007b14u);
    c->f[0] = c->f[1] + c->f[0];
    { mem_wf32(ram, c->r[3] + 0x00000034u, c->f[0]); goto L_0894d8bc; }
L_0894cec8:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_0894cedc; }
    { goto L_0894d8bc; }
L_0894cedc:
    c->r[2] = c->r[30] + 0x00000040u;
    { c->r[31] = 0x0894cee8u; c->r[4] = c->r[2] + 0u; func_08808240(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[3] = c->r[2] + 0x00000020u;
    c->r[2] = mem_r32(ram, c->r[3] + 0x00000000u);
    mem_w32(ram, c->r[30] + 0x00000040u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[3] + 0x00000004u);
    mem_w32(ram, c->r[30] + 0x00000044u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[3] + 0x00000008u);
    mem_w32(ram, c->r[30] + 0x00000048u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[3] + 0x0000000cu);
    mem_w32(ram, c->r[30] + 0x0000004cu, c->r[2]);
    c->r[2] = c->r[30] + 0x00000040u;
    mem_w32(ram, c->r[30] + 0x00000030u, c->r[2]);
    c->r[2] = 0x08a80000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00002f90u);
    c->r[2] = c->r[2] + 0x00000020u;
    mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000038u);
    mem_wf32(ram, c->r[30] + 0x0000002cu, c->f[0]);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00007b04u);
    c->r[1] = 0x08a40000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0x00007b04u);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000030u);
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->f[12] = c->f[0];
    { c->r[31] = 0x0894cf58u; c->f[13] = c->f[1]; func_089c7938(c, ram); }
    c->f[1] = c->f[0];
    c->f[0] = mem_rf32(ram, c->r[30] + 0x0000002cu);
    c->f[0] = c->f[0] * c->f[1];
    mem_wf32(ram, c->r[30] + 0x0000002cu, c->f[0]);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x0000002cu);
    c->f[0] = u2f(0u);
    alx_c_cond_s(c, 12, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_0894cf88; }
    { goto L_0894d8bc; }
L_0894cf88:
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000700u);
    c->r[2] = 0u + 0x000002e8u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[4] = c->lo;
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
    { c->r[31] = 0x0894cfe8u; c->r[5] = c->r[2] + 0u; func_0894d9d8(c, ram); }
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000700u);
    c->r[2] = 0u + 0x000002e8u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[4] = c->lo;
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
    { c->r[31] = 0x0894d048u; c->r[5] = c->r[2] + 0u; func_0894d9d8(c, ram); }
    c->r[4] = 0x08a70000u;
    c->r[4] = c->r[4] + 0xffffb640u;
    { c->r[31] = 0x0894d058u; c->r[5] = 0u + 0u; func_089e0008(c, ram); }
    c->r[4] = 0x08a70000u;
    c->r[4] = c->r[4] + 0xffffb640u;
    c->r[5] = 0u + 0x00000003u;
    { c->r[31] = 0x0894d06cu; c->r[6] = 0u + 0x00000006u; func_089df7a0(c, ram); }
    c->r[2] = 0x08aa0000u;
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x00003930u);
    c->r[4] = 0x08a70000u;
    c->r[4] = c->r[4] + 0xffffb640u;
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x0894d088u; c->r[6] = 0u + 0u; func_089e0bd8(c, ram); }
    c->r[4] = 0x08a70000u;
    c->r[4] = c->r[4] + 0xffffb640u;
    { c->r[31] = 0x0894d098u; c->r[5] = 0u + 0u; func_089dfe30(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000032u);
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + 0x00000004u;
    mem_w32(ram, c->r[30] + 0x00000050u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000050u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[2] = c->r[2] << 3;
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x0894d0ccu; c->r[5] = 0u + 0x00000010u; func_0881a1d4(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000054u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000033u);
    c->r[3] = c->r[2] << 4;
    c->r[2] = 0x08a60000u;
    c->r[2] = c->r[2] + 0xffff86d0u;
    c->r[2] = c->r[3] + c->r[2];
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000000u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00007b24u);
    c->f[0] = c->f[1] * c->f[0];
    mem_wf32(ram, c->r[30] + 0x00000028u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    { c->r[31] = 0x0894d108u; c->f[12] = mem_rf32(ram, c->r[2] + 0x00000044u); func_08a0f760(c, ram); }
    mem_wf32(ram, c->r[30] + 0x00000024u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    { c->r[31] = 0x0894d118u; c->f[12] = mem_rf32(ram, c->r[2] + 0x00000044u); func_08a0f5bc(c, ram); }
    mem_wf32(ram, c->r[30] + 0x00000020u, c->f[0]);
    mem_w32(ram, c->r[30] + 0x00000070u, 0u);
L_0894d120:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000070u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000002u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_0894d138; }
    { goto L_0894d464; }
L_0894d138:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000030u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000000u);
    mem_wf32(ram, c->r[30] + 0x00000090u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000030u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000008u);
    mem_wf32(ram, c->r[30] + 0x00000094u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000090u);
    mem_w32(ram, c->r[30] + 0x00000080u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000094u);
    mem_w32(ram, c->r[30] + 0x00000084u, c->r[2]);
    c->r[2] = c->r[30] + 0x00000060u;
    c->r[3] = c->r[30] + 0x00000080u;
    c->r[4] = c->r[2] + 0u;
    c->r[5] = c->r[3] + 0u;
    { c->r[31] = 0x0894d178u; c->r[6] = mem_r32(ram, c->r[30] + 0x0000000cu); func_0894d8d4(c, ram); }
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000028u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00007b28u);
    c->f[0] = c->f[1] * c->f[0];
    mem_wf32(ram, c->r[30] + 0x0000001cu, c->f[0]);
    c->r[2] = 0x08aa0000u;
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000100u);
    c->f[0] = u2f(c->r[2]);
    c->f[1] = (f32)(s32)f2u(c->f[0]);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x0000002cu);
    c->f[1] = c->f[1] * c->f[0];
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000070u);
    c->f[0] = (f32)(s32)f2u(c->f[0]);
    c->f[0] = c->f[1] * c->f[0];
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    mem_wf32(ram, c->r[30] + 0x000000a0u, c->f[0]);
    c->r[3] = 0x08aa0000u;
    c->r[3] = mem_r8(ram, c->r[3] + 0x00000101u);
    c->f[0] = u2f(c->r[3]);
    c->f[1] = (f32)(s32)f2u(c->f[0]);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x0000002cu);
    c->f[1] = c->f[1] * c->f[0];
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000070u);
    c->f[0] = (f32)(s32)f2u(c->f[0]);
    c->f[0] = c->f[1] * c->f[0];
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    c->r[4] = f2u(c->f[0]);
    c->r[2] = c->r[4] << 8;
    mem_w32(ram, c->r[30] + 0x000000a4u, c->r[2]);
    c->r[2] = 0x08aa0000u;
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000102u);
    c->f[0] = u2f(c->r[2]);
    c->f[1] = (f32)(s32)f2u(c->f[0]);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x0000002cu);
    c->f[1] = c->f[1] * c->f[0];
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000070u);
    c->f[0] = (f32)(s32)f2u(c->f[0]);
    c->f[0] = c->f[1] * c->f[0];
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    c->r[3] = f2u(c->f[0]);
    c->r[2] = c->r[3] << 16;
    mem_w32(ram, c->r[30] + 0x000000a8u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000033u);
    c->r[3] = c->r[2] << 2;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000070u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08a60000u;
    c->r[2] = c->r[2] + 0xffff86c8u;
    c->r[2] = c->r[3] + c->r[2];
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000024u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000000u);
    c->f[1] = c->f[1] * c->f[0];
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000080u);
    c->f[0] = c->f[0] + c->f[1];
    mem_wf32(ram, c->r[30] + 0x00000080u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000033u);
    c->r[3] = c->r[2] << 2;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000070u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08a60000u;
    c->r[2] = c->r[2] + 0xffff86c8u;
    c->r[2] = c->r[3] + c->r[2];
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000020u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000000u);
    c->f[1] = c->f[1] * c->f[0];
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000084u);
    c->f[0] = c->f[0] + c->f[1];
    mem_wf32(ram, c->r[30] + 0x00000084u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000033u);
    c->r[3] = c->r[2] << 4;
    c->r[2] = 0x08a60000u;
    c->r[2] = c->r[2] + 0xffff86d4u;
    c->r[2] = c->r[3] + c->r[2];
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000020u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000000u);
    c->f[1] = c->f[1] * c->f[0];
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000080u);
    c->f[0] = c->f[0] + c->f[1];
    mem_wf32(ram, c->r[30] + 0x00000080u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000033u);
    c->r[3] = c->r[2] << 4;
    c->r[2] = 0x08a60000u;
    c->r[2] = c->r[2] + 0xffff86d4u;
    c->r[2] = c->r[3] + c->r[2];
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000024u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000000u);
    c->f[1] = c->f[1] * c->f[0];
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000084u);
    c->f[0] = c->f[0] - c->f[1];
    mem_wf32(ram, c->r[30] + 0x00000084u, c->f[0]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000054u);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000060u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x0000001cu);
    c->f[1] = c->f[1] * c->f[0];
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000080u);
    c->f[1] = c->f[0] - c->f[1];
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000000u);
    c->f[0] = c->f[1] - c->f[0];
    mem_wf32(ram, c->r[3] + 0x0000000cu, c->f[0]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000054u);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000064u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x0000001cu);
    c->f[1] = c->f[1] * c->f[0];
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000084u);
    c->f[1] = c->f[0] - c->f[1];
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000008u);
    c->f[0] = c->f[1] - c->f[0];
    mem_wf32(ram, c->r[3] + 0x00000014u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000054u);
    c->r[3] = c->r[2] + 0x00000018u;
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000060u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x0000001cu);
    c->f[1] = c->f[1] * c->f[0];
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000080u);
    c->f[1] = c->f[1] + c->f[0];
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000000u);
    c->f[0] = c->f[1] - c->f[0];
    mem_wf32(ram, c->r[3] + 0x0000000cu, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000054u);
    c->r[3] = c->r[2] + 0x00000018u;
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000064u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x0000001cu);
    c->f[1] = c->f[1] * c->f[0];
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000084u);
    c->f[1] = c->f[1] + c->f[0];
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000008u);
    c->f[0] = c->f[1] - c->f[0];
    mem_wf32(ram, c->r[3] + 0x00000014u, c->f[0]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000054u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000054u);
    c->r[3] = c->r[2] + 0x00000018u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[1] = 0x08a40000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0x00007b2cu);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000004u);
    c->f[0] = c->f[1] - c->f[0];
    mem_wf32(ram, c->r[3] + 0x00000010u, c->f[0]);
    mem_wf32(ram, c->r[4] + 0x00000010u, c->f[0]);
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000054u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000054u);
    c->r[4] = c->r[2] + 0x00000018u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x000000a0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000a4u);
    c->r[3] = c->r[3] | c->r[2];
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000a8u);
    c->r[3] = c->r[3] | c->r[2];
    c->r[2] = 0xff000000u;
    c->r[2] = c->r[3] | c->r[2];
    mem_w32(ram, c->r[4] + 0x00000008u, c->r[2]);
    mem_w32(ram, c->r[5] + 0x00000008u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000054u);
    mem_w32(ram, c->r[2] + 0x00000000u, 0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000054u);
    c->r[2] = c->r[2] + 0x00000018u;
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00007b14u);
    mem_wf32(ram, c->r[2] + 0x00000000u, c->f[0]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000054u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000054u);
    c->r[3] = c->r[2] + 0x00000018u;
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000070u);
    c->f[1] = (f32)(s32)f2u(c->f[0]);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00007b28u);
    c->f[1] = c->f[1] * c->f[0];
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000034u);
    c->f[0] = c->f[1] + c->f[0];
    mem_wf32(ram, c->r[3] + 0x00000004u, c->f[0]);
    mem_wf32(ram, c->r[4] + 0x00000004u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000054u);
    c->r[2] = c->r[2] + 0x00000030u;
    mem_w32(ram, c->r[30] + 0x00000054u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000070u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000070u, c->r[2]); goto L_0894d120; }
L_0894d464:
    mem_w32(ram, c->r[30] + 0x00000070u, 0u);
L_0894d468:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000032u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000070u);
    c->r[2] = ((s32)c->r[2] < (s32)c->r[3]) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_0894d488; }
    { goto L_0894d824; }
L_0894d488:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000032u);
    c->r[3] = c->r[2] + 0xffffffffu;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000070u);
    { int _c = (c->r[2] == c->r[3]); if (_c) goto L_0894d4d0; }
    c->r[4] = c->r[30] + 0x00000060u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000070u);
    c->r[3] = c->r[2] << 3;
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[5] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000070u);
    c->r[3] = c->r[2] << 3;
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = c->r[2] + 0x00000008u;
    { c->r[31] = 0x0894d4d0u; c->r[6] = c->r[2] + 0u; func_0894d8d4(c, ram); }
L_0894d4d0:
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000070u);
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[2] = c->r[2] + 0x00000020u;
    c->r[2] = mem_r16(ram, c->r[2] + 0x00000008u);
    c->f[0] = u2f(c->r[2]);
    c->f[1] = (f32)(s32)f2u(c->f[0]);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00007b30u);
    c->f[1] = c->f[1] / c->f[0];
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00007b14u);
    alx_c_cond_s(c, 12, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_0894d51c; }
    { goto L_0894d558; }
L_0894d51c:
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000070u);
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[2] = c->r[2] + 0x00000020u;
    c->r[2] = mem_r16(ram, c->r[2] + 0x00000008u);
    c->f[0] = u2f(c->r[2]);
    c->f[0] = (f32)(s32)f2u(c->f[0]);
    mem_wf32(ram, c->r[30] + 0x000000e0u, c->f[0]);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00007b30u);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x000000e0u);
    c->f[1] = c->f[1] / c->f[0];
    { mem_wf32(ram, c->r[30] + 0x000000e0u, c->f[1]); goto L_0894d564; }
L_0894d558:
    c->r[1] = 0x08a40000u;
    c->f[2] = mem_rf32(ram, c->r[1] + 0x00007b14u);
    mem_wf32(ram, c->r[30] + 0x000000e0u, c->f[2]);
L_0894d564:
    c->f[0] = mem_rf32(ram, c->r[30] + 0x000000e0u);
    mem_wf32(ram, c->r[30] + 0x0000001cu, c->f[0]);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000028u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00007b28u);
    c->f[2] = c->f[1] * c->f[0];
    c->f[1] = mem_rf32(ram, c->r[30] + 0x0000001cu);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00007b34u);
    c->f[0] = c->f[1] * c->f[0];
    c->f[0] = c->f[2] + c->f[0];
    mem_wf32(ram, c->r[30] + 0x000000b0u, c->f[0]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000054u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000070u);
    c->r[2] = c->r[2] << 3;
    c->r[2] = c->r[2] + c->r[3];
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000060u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x000000b0u);
    c->f[1] = c->f[1] * c->f[0];
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000000u);
    c->f[1] = c->f[0] - c->f[1];
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000000u);
    c->f[0] = c->f[1] - c->f[0];
    mem_wf32(ram, c->r[4] + 0x0000000cu, c->f[0]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000054u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000070u);
    c->r[2] = c->r[2] << 3;
    c->r[2] = c->r[2] + c->r[3];
    c->r[2] = c->r[2] + 0x00000004u;
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000064u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x000000b0u);
    c->f[1] = c->f[1] * c->f[0];
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000000u);
    c->f[1] = c->f[0] - c->f[1];
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000008u);
    c->f[0] = c->f[1] - c->f[0];
    mem_wf32(ram, c->r[4] + 0x00000014u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000054u);
    c->r[4] = c->r[2] + 0x00000018u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000070u);
    c->r[2] = c->r[2] << 3;
    c->r[2] = c->r[2] + c->r[3];
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000060u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x000000b0u);
    c->f[1] = c->f[1] * c->f[0];
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000000u);
    c->f[1] = c->f[1] + c->f[0];
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000000u);
    c->f[0] = c->f[1] - c->f[0];
    mem_wf32(ram, c->r[4] + 0x0000000cu, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000054u);
    c->r[4] = c->r[2] + 0x00000018u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000070u);
    c->r[2] = c->r[2] << 3;
    c->r[2] = c->r[2] + c->r[3];
    c->r[2] = c->r[2] + 0x00000004u;
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000064u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x000000b0u);
    c->f[1] = c->f[1] * c->f[0];
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000000u);
    c->f[1] = c->f[1] + c->f[0];
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000008u);
    c->f[0] = c->f[1] - c->f[0];
    mem_wf32(ram, c->r[4] + 0x00000014u, c->f[0]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000054u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000054u);
    c->r[3] = c->r[2] + 0x00000018u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[1] = 0x08a40000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0x00007b2cu);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000004u);
    c->f[0] = c->f[1] - c->f[0];
    mem_wf32(ram, c->r[3] + 0x00000010u, c->f[0]);
    mem_wf32(ram, c->r[4] + 0x00000010u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000032u);
    c->r[3] = c->r[2] + 0xffffffffu;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000070u);
    { int _c = (c->r[2] != c->r[3]); if (_c) goto L_0894d6e4; }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000054u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000054u);
    c->r[3] = c->r[2] + 0x00000018u;
    c->r[2] = 0xff000000u;
    mem_w32(ram, c->r[3] + 0x00000008u, c->r[2]);
    c->r[2] = 0xff000000u;
    { mem_w32(ram, c->r[4] + 0x00000008u, c->r[2]); goto L_0894d7b0; }
L_0894d6e4:
    c->r[1] = 0x08a40000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0x00007b14u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x0000001cu);
    c->f[0] = c->f[1] - c->f[0];
    mem_wf32(ram, c->r[30] + 0x000000b4u, c->f[0]);
    c->r[2] = 0x08aa0000u;
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000100u);
    c->f[0] = u2f(c->r[2]);
    c->f[1] = (f32)(s32)f2u(c->f[0]);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x000000b4u);
    c->f[1] = c->f[1] * c->f[0];
    c->f[0] = mem_rf32(ram, c->r[30] + 0x0000002cu);
    c->f[0] = c->f[1] * c->f[0];
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    mem_wf32(ram, c->r[30] + 0x000000a0u, c->f[0]);
    c->r[3] = 0x08aa0000u;
    c->r[3] = mem_r8(ram, c->r[3] + 0x00000101u);
    c->f[0] = u2f(c->r[3]);
    c->f[1] = (f32)(s32)f2u(c->f[0]);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x000000b4u);
    c->f[1] = c->f[1] * c->f[0];
    c->f[0] = mem_rf32(ram, c->r[30] + 0x0000002cu);
    c->f[0] = c->f[1] * c->f[0];
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    c->r[4] = f2u(c->f[0]);
    c->r[2] = c->r[4] << 8;
    mem_w32(ram, c->r[30] + 0x000000a4u, c->r[2]);
    c->r[2] = 0x08aa0000u;
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000102u);
    c->f[0] = u2f(c->r[2]);
    c->f[1] = (f32)(s32)f2u(c->f[0]);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x000000b4u);
    c->f[1] = c->f[1] * c->f[0];
    c->f[0] = mem_rf32(ram, c->r[30] + 0x0000002cu);
    c->f[0] = c->f[1] * c->f[0];
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    c->r[3] = f2u(c->f[0]);
    c->r[2] = c->r[3] << 16;
    mem_w32(ram, c->r[30] + 0x000000a8u, c->r[2]);
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000054u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000054u);
    c->r[4] = c->r[2] + 0x00000018u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x000000a0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000a4u);
    c->r[3] = c->r[3] | c->r[2];
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000a8u);
    c->r[3] = c->r[3] | c->r[2];
    c->r[2] = 0xff000000u;
    c->r[2] = c->r[3] | c->r[2];
    mem_w32(ram, c->r[4] + 0x00000008u, c->r[2]);
    mem_w32(ram, c->r[5] + 0x00000008u, c->r[2]);
L_0894d7b0:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000054u);
    mem_w32(ram, c->r[2] + 0x00000000u, 0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000054u);
    c->r[2] = c->r[2] + 0x00000018u;
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00007b14u);
    mem_wf32(ram, c->r[2] + 0x00000000u, c->f[0]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000054u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000054u);
    c->r[3] = c->r[2] + 0x00000018u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000070u);
    c->r[2] = c->r[2] + 0x00000002u;
    c->f[0] = u2f(c->r[2]);
    c->f[1] = (f32)(s32)f2u(c->f[0]);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00007b28u);
    c->f[1] = c->f[1] * c->f[0];
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000034u);
    c->f[0] = c->f[1] + c->f[0];
    mem_wf32(ram, c->r[3] + 0x00000004u, c->f[0]);
    mem_wf32(ram, c->r[4] + 0x00000004u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000054u);
    c->r[2] = c->r[2] + 0x00000030u;
    mem_w32(ram, c->r[30] + 0x00000054u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000070u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000070u, c->r[2]); goto L_0894d468; }
L_0894d824:
    c->r[2] = 0u + 0x00000004u;
    mem_w32(ram, c->r[30] + 0x00000070u, c->r[2]);
    c->r[2] = 0u + 0x0000019fu;
    mem_w32(ram, c->r[30] + 0x000000b8u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000050u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 3;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000054u);
    c->r[2] = c->r[2] - c->r[3];
    mem_w32(ram, c->r[30] + 0x00000054u, c->r[2]);
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000700u);
    c->r[2] = 0u + 0x000002e8u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[4] = c->lo;
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
    c->r[5] = 0u + 0x00000004u;
    c->r[6] = 0u + 0x0000019fu;
    c->r[7] = mem_r32(ram, c->r[30] + 0x00000050u);
    c->r[8] = 0u + 0u;
    { c->r[31] = 0x0894d8acu; c->r[9] = mem_r32(ram, c->r[30] + 0x00000054u); func_0894da1c(c, ram); }
    c->r[4] = 0x08a70000u;
    c->r[4] = c->r[4] + 0xffffb640u;
    { c->r[31] = 0x0894d8bcu; c->r[5] = 0u + 0x00000001u; func_089dfe30(c, ram); }
L_0894d8bc:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x000000f8u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x000000f4u);
    c->r[16] = mem_r32(ram, c->r[29] + 0x000000f0u);
    { c->r[29] = c->r[29] + 0x00000100u; return; }
    return; /* fell out of func_0894c67c */
}

/* func_08954fd0  0x08954fd0..0x08955014  68 bytes, source=sweep */
void func_08954fd0(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08954fd0u);
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
    return; /* fell out of func_08954fd0 */
}

/* func_08956028  0x08956028..0x0895606c  68 bytes, source=sweep */
void func_08956028(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08956028u);
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
    return; /* fell out of func_08956028 */
}

/* func_089594b4  0x089594b4..0x089594f8  68 bytes, source=sweep */
void func_089594b4(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089594b4u);
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
    return; /* fell out of func_089594b4 */
}

/* func_0895b864  0x0895b864..0x0895ba4c  488 bytes, source=fde */
void func_0895b864(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0895b864u);
    c->r[29] = c->r[29] + 0xffffffa0u;
    mem_w32(ram, c->r[29] + 0x00000058u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000054u, c->r[30]);
    mem_w32(ram, c->r[29] + 0x00000050u, c->r[16]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_0895b890; }
    { mem_w32(ram, c->r[30] + 0x00000044u, 0u); goto L_0895ba30; }
L_0895b890:
    c->r[2] = c->r[30] + 0x00000010u;
    c->r[1] = 0x08a50000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffff8128u);
    c->r[1] = 0x08a50000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0xffff8128u);
    c->r[4] = c->r[2] + 0u;
    c->f[12] = c->f[0];
    c->f[13] = u2f(0u);
    c->f[14] = c->f[1];
    c->f[15] = u2f(0u);
    { c->r[31] = 0x0895b8c0u; func_0880d140(c, ram); }
    { c->r[31] = 0x0895b8c8u; func_08966c64(c, ram); }
    { int _c = (c->r[2] != 0u); if (_c) goto L_0895b950; }
    c->r[1] = 0x08a50000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffff812cu);
    mem_wf32(ram, c->r[30] + 0x00000020u, c->f[0]);
    c->r[16] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[30] + 0x00000030u;
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000010u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000020u);
    c->f[4] = c->f[1] - c->f[0];
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000018u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000020u);
    c->f[2] = c->f[1] - c->f[0];
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000010u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000020u);
    c->f[3] = c->f[1] + c->f[0];
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000018u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000020u);
    c->f[0] = c->f[1] + c->f[0];
    c->r[4] = c->r[2] + 0u;
    c->f[12] = c->f[4];
    c->f[13] = c->f[2];
    c->f[14] = c->f[3];
    { c->r[31] = 0x0895b92cu; c->f[15] = c->f[0]; func_0880d140(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000030u);
    mem_w32(ram, c->r[16] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000034u);
    mem_w32(ram, c->r[16] + 0x00000004u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000038u);
    mem_w32(ram, c->r[16] + 0x00000008u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000003cu);
    { mem_w32(ram, c->r[16] + 0x0000000cu, c->r[2]); goto L_0895ba28; }
L_0895b950:
    c->r[2] = 0x08aa0000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00005204u);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000010u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000010u);
    c->f[0] = c->f[1] + c->f[0];
    mem_wf32(ram, c->r[30] + 0x00000010u, c->f[0]);
    c->r[2] = 0x08aa0000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00005204u);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000018u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000014u);
    c->f[0] = c->f[1] + c->f[0];
    mem_wf32(ram, c->r[30] + 0x00000018u, c->f[0]);
    c->r[2] = 0x08aa0000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00005204u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000008u);
    c->r[1] = 0x08a50000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffff8130u);
    c->f[0] = c->f[1] / c->f[0];
    mem_wf32(ram, c->r[30] + 0x00000020u, c->f[0]);
    c->r[2] = 0x08aa0000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00005204u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x0000000cu);
    c->r[1] = 0x08a50000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffff8130u);
    c->f[0] = c->f[1] / c->f[0];
    mem_wf32(ram, c->r[30] + 0x00000040u, c->f[0]);
    c->r[16] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[30] + 0x00000030u;
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000010u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000020u);
    c->f[4] = c->f[1] - c->f[0];
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000018u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000040u);
    c->f[2] = c->f[1] - c->f[0];
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000010u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000020u);
    c->f[3] = c->f[1] + c->f[0];
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000018u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000040u);
    c->f[0] = c->f[1] + c->f[0];
    c->r[4] = c->r[2] + 0u;
    c->f[12] = c->f[4];
    c->f[13] = c->f[2];
    c->f[14] = c->f[3];
    { c->r[31] = 0x0895ba08u; c->f[15] = c->f[0]; func_0880d140(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000030u);
    mem_w32(ram, c->r[16] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000034u);
    mem_w32(ram, c->r[16] + 0x00000004u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000038u);
    mem_w32(ram, c->r[16] + 0x00000008u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000003cu);
    mem_w32(ram, c->r[16] + 0x0000000cu, c->r[2]);
L_0895ba28:
    c->r[2] = 0u + 0x00000001u;
    mem_w32(ram, c->r[30] + 0x00000044u, c->r[2]);
L_0895ba30:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000044u);
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000058u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000054u);
    c->r[16] = mem_r32(ram, c->r[29] + 0x00000050u);
    { c->r[29] = c->r[29] + 0x00000060u; return; }
    return; /* fell out of func_0895b864 */
}

/* func_0895fd38  0x0895fd38..0x0895fdf0  184 bytes, source=fde */
void func_0895fd38(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0895fd38u);
    c->r[29] = c->r[29] + 0xffffffd0u;
    mem_w32(ram, c->r[29] + 0x00000024u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000020u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[4]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[3] = mem_r8(ram, c->r[2] + 0x00000004u);
    c->r[2] = 0u + 0x00000001u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_0895fd68; }
    { c->r[31] = 0x0895fd68u; func_089343a0(c, ram); }
L_0895fd68:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000002u);
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
L_0895fd74:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[3] = mem_r8(ram, c->r[2] + 0x00000003u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = ((s32)c->r[3] < (s32)c->r[2]) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_0895fd94; }
    { goto L_0895fddc; }
L_0895fd94:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[5] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[3] = mem_r8(ram, c->r[2] + 0x00000001u);
    c->r[2] = 0u + 0x00000001u;
    mem_w32(ram, c->r[29] + 0x00000000u, c->r[2]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[6] = c->r[3] + 0u;
    c->r[7] = 0u + 0x00000001u;
    c->r[8] = 0u + 0x00000096u;
    c->r[9] = 0u + 0x000000f0u;
    c->r[10] = 0u + 0x00000015u;
    { c->r[31] = 0x0895fdccu; c->r[11] = 0u + 0x0000005fu; func_08935f8c(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]); goto L_0895fd74; }
L_0895fddc:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000024u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000020u);
    { c->r[29] = c->r[29] + 0x00000030u; return; }
    return; /* fell out of func_0895fd38 */
}

/* func_089623e4  0x089623e4..0x089624cc  232 bytes, source=sweep */
void func_089623e4(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089623e4u);
    c->r[29] = c->r[29] + 0xffffffd0u;
    mem_w32(ram, c->r[29] + 0x00000020u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[6]);
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[7]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x000000c0u);
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x000000c0u);
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
    mem_w32(ram, c->r[30] + 0x0000001cu, 0u);
    mem_w32(ram, c->r[30] + 0x00000018u, 0u);
L_08962424:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = ((s32)c->r[2] < (s32)c->r[3]) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_08962440; }
    { goto L_089624bc; }
L_08962440:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 2;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[3] = mem_r8(ram, c->r[2] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_089624ac; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_089624a0; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 2;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = c->r[3] + c->r[2];
    { mem_w8(ram, c->r[2] + 0x00000001u, 0u); goto L_089624bc; }
L_089624a0:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = c->r[2] + 0x00000001u;
    mem_w32(ram, c->r[30] + 0x0000001cu, c->r[2]);
L_089624ac:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]); goto L_08962424; }
L_089624bc:
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000020u);
    { c->r[29] = c->r[29] + 0x00000030u; return; }
    return; /* fell out of func_089623e4 */
}

/* func_08964c94  0x08964c94..0x08964cc0  44 bytes, source=fde */
void func_08964c94(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08964c94u);
    c->r[29] = c->r[29] + 0xfffffff0u;
    mem_w32(ram, c->r[29] + 0x00000004u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000000u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    { c->r[31] = 0x08964cacu; func_08964c24(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000004u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000000u);
    { c->r[29] = c->r[29] + 0x00000010u; return; }
    return; /* fell out of func_08964c94 */
}

/* func_08967d80  0x08967d80..0x08968bc0  3648 bytes, source=fde */
void func_08967d80(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08967d80u);
    c->r[29] = c->r[29] + 0xffffffb0u;
    mem_w32(ram, c->r[29] + 0x0000004cu, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000048u, c->r[30]);
    mem_w32(ram, c->r[29] + 0x00000044u, c->r[17]);
    mem_w32(ram, c->r[29] + 0x00000040u, c->r[16]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[6]);
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[7]);
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[8]);
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x08967db8u; c->r[4] = c->r[4] + 0x00000af4u; func_0880d294(c, ram); }
    { int _c = (c->r[2] != 0u); if (_c) goto L_08968350; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r8(ram, c->r[2] + 0x0000003cu);
    c->r[2] = c->r[2] + 0x00000001u;
    mem_w8(ram, c->r[3] + 0x0000003cu, c->r[2]);
    mem_w32(ram, c->r[30] + 0x00000014u, 0u);
L_08967dd8:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000014u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_08967df0; }
    { goto L_08967e38; }
L_08967df0:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000008u);
    c->r[2] = 0u + 0xffffffffu;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_08967e28; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[16] = c->r[3] + c->r[2];
    { c->r[31] = 0x08967e20u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000008u); func_08968f28(c, ram); }
    { mem_w8(ram, c->r[16] + 0x00000008u, c->r[2]); goto L_08967e38; }
L_08967e28:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]); goto L_08967dd8; }
L_08967e38:
    { c->r[31] = 0x08967e40u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000004u); func_08967acc(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]);
    c->r[2] = 0u + 0x00000001u;
    mem_w32(ram, c->r[30] + 0x00000020u, c->r[2]);
    mem_w32(ram, c->r[30] + 0x00000024u, 0u);
L_08967e50:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000024u);
    c->r[2] = ((s32)c->r[2] < (s32)0x0000001eu) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_08967e68; }
    { goto L_08967f2c; }
L_08967e68:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000024u);
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_08967e80; }
    { goto L_08967f1c; }
L_08967e80:
    mem_w32(ram, c->r[30] + 0x00000028u, 0u);
L_08967e84:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000028u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000004u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_08967e9c; }
    { goto L_08967f08; }
L_08967e9c:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000028u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 5;
    c->r[2] = c->r[2] - c->r[3];
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000024u);
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 5;
    c->r[2] = 0x08a80000u;
    c->r[2] = c->r[2] + 0x00000ef8u;
    c->r[2] = c->r[3] + c->r[2];
    mem_w32(ram, c->r[30] + 0x0000001cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000018u);
    c->r[2] = 0u + 0x00000004u;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_08967ee4; }
    { goto L_08967f08; }
L_08967ee4:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000028u);
    c->r[2] = 0u + 0x00000003u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_08967ef8; }
    mem_w32(ram, c->r[30] + 0x00000020u, 0u);
L_08967ef8:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000028u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000028u, c->r[2]); goto L_08967e84; }
L_08967f08:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_08967f1c; }
    { goto L_08967f2c; }
L_08967f1c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000024u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000024u, c->r[2]); goto L_08967e50; }
L_08967f2c:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[2] = 0u + 0x00000001u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_08967f60; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000000u);
    c->r[2] = c->r[2] | 0x0004u;
    mem_w8(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000af4u;
    { c->r[31] = 0x08967f60u; c->r[5] = 0u + 0x00000103u; func_089ca128(c, ram); }
L_08967f60:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = 0u + 0x00000008u;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_08967f88; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = 0u + 0x00000009u;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_08967f88; }
    { goto L_089681cc; }
L_08967f88:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000000u);
    c->r[2] = c->r[2] | 0x0001u;
    mem_w8(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000af4u;
    { c->r[31] = 0x08967facu; c->r[5] = 0u + 0x00000100u; func_089ca128(c, ram); }
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000af4u;
    { c->r[31] = 0x08967fbcu; c->r[5] = 0u + 0x00000101u; func_089ca128(c, ram); }
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x08967fc8u; c->r[4] = c->r[4] + 0x00000af4u; func_0881a2a4(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = 0u + 0x00000002u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_08967ffc; }
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000af4u;
    { c->r[31] = 0x08967fe8u; c->r[5] = 0u + 0x00000102u; func_089ca128(c, ram); }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000000u);
    c->r[2] = c->r[2] | 0x0002u;
    mem_w8(ram, c->r[3] + 0x00000000u, c->r[2]);
L_08967ffc:
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x08968008u; c->r[4] = c->r[4] + 0x00000af4u; func_0881a2a4(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = 0u + 0x00000003u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_08968054; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000000u);
    c->r[2] = c->r[2] | 0x0010u;
    mem_w8(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000af4u;
    { c->r[31] = 0x0896803cu; c->r[5] = 0u + 0x0000001du; func_089c9d8c(c, ram); }
    { int _c = (c->r[2] == 0u); if (_c) goto L_08968054; }
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000af4u;
    { c->r[31] = 0x08968054u; c->r[5] = 0u + 0u; func_089ca128(c, ram); }
L_08968054:
    c->r[2] = 0u + 0x00000028u;
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
L_0896805c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000050u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_08968074; }
    { goto L_089680c8; }
L_08968074:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = 0u + 0x00000028u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_0896808c; }
    { goto L_089680b8; }
L_0896808c:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = 0u + 0x00000045u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_089680a4; }
    { goto L_089680b8; }
L_089680a4:
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[30] + 0x00000014u);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000af4u;
    { c->r[31] = 0x089680b8u; c->r[5] = c->r[2] + 0u; func_089ca128(c, ram); }
L_089680b8:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]); goto L_0896805c; }
L_089680c8:
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x089680d4u; c->r[4] = c->r[4] + 0x00000af4u; func_0881a2a4(c, ram); }
    c->r[2] = ((s32)c->r[2] < (s32)0x00000002u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_08968150; }
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000af4u;
    { c->r[31] = 0x089680f0u; c->r[5] = 0u + 0x00000045u; func_089ca128(c, ram); }
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000af4u;
    { c->r[31] = 0x08968100u; c->r[5] = 0u + 0x00000068u; func_089ca128(c, ram); }
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000af4u;
    { c->r[31] = 0x08968110u; c->r[5] = 0u + 0x0000006cu; func_089ca128(c, ram); }
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000af4u;
    { c->r[31] = 0x08968120u; c->r[5] = 0u + 0x00000069u; func_089ca128(c, ram); }
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000af4u;
    { c->r[31] = 0x08968130u; c->r[5] = 0u + 0x0000006bu; func_089ca128(c, ram); }
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000af4u;
    { c->r[31] = 0x08968140u; c->r[5] = 0u + 0x0000006au; func_089ca128(c, ram); }
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000af4u;
    { c->r[31] = 0x08968150u; c->r[5] = 0u + 0x0000006eu; func_089ca128(c, ram); }
L_08968150:
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x0896815cu; c->r[4] = c->r[4] + 0x00000af4u; func_0881a2a4(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = 0u + 0x00000003u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_0896817c; }
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000af4u;
    { c->r[31] = 0x0896817cu; c->r[5] = 0u + 0x0000006du; func_089ca128(c, ram); }
L_0896817c:
    { c->r[31] = 0x08968184u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000004u); func_08967a48(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = 0u + 0x0000000au;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_089681a4; }
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000af4u;
    { c->r[31] = 0x089681a4u; c->r[5] = 0u + 0x000000e2u; func_089ca128(c, ram); }
L_089681a4:
    { c->r[31] = 0x089681acu; c->r[4] = mem_r32(ram, c->r[30] + 0x00000004u); func_08967a48(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = 0u + 0x00000011u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_089681cc; }
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000af4u;
    { c->r[31] = 0x089681ccu; c->r[5] = 0u + 0x000000e3u; func_089ca128(c, ram); }
L_089681cc:
    { c->r[31] = 0x089681d4u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000004u); func_08967b7c(c, ram); }
    mem_w32(ram, c->r[30] + 0x0000002cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_089681e8; }
    mem_w32(ram, c->r[30] + 0x0000002cu, 0u);
L_089681e8:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = 0u + 0x00000002u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_08968200; }
    c->r[2] = 0u + 0x00000001u;
    mem_w32(ram, c->r[30] + 0x0000002cu, c->r[2]);
L_08968200:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = 0u + 0x00000003u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_08968218; }
    c->r[2] = 0u + 0x00000001u;
    mem_w32(ram, c->r[30] + 0x0000002cu, c->r[2]);
L_08968218:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = 0u + 0x00000005u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_08968230; }
    c->r[2] = 0u + 0x00000002u;
    mem_w32(ram, c->r[30] + 0x0000002cu, c->r[2]);
L_08968230:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = 0u + 0x00000006u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_08968248; }
    c->r[2] = 0u + 0x00000002u;
    mem_w32(ram, c->r[30] + 0x0000002cu, c->r[2]);
L_08968248:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = 0u + 0x00000007u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_08968260; }
    c->r[2] = 0u + 0x00000002u;
    mem_w32(ram, c->r[30] + 0x0000002cu, c->r[2]);
L_08968260:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = 0u + 0x00000001u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_08968280; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = 0u + 0x00000002u;
    { mem_w8(ram, c->r[3] + 0x0000003du, c->r[2]); goto L_08968320; }
L_08968280:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = 0u + 0x00000004u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_089682a0; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = 0u + 0x00000002u;
    { mem_w8(ram, c->r[3] + 0x0000003eu, c->r[2]); goto L_08968320; }
L_089682a0:
    mem_w32(ram, c->r[30] + 0x00000014u, 0u);
L_089682a4:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000008u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_089682bc; }
    { goto L_08968320; }
L_089682bc:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000002cu);
    c->r[2] = c->r[2] << 3;
    c->r[3] = c->r[2] + c->r[3];
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = c->r[2] + 0x00000040u;
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000000u);
    c->r[2] = 0u + 0xffffffffu;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_08968310; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000002cu);
    c->r[2] = c->r[2] << 3;
    c->r[3] = c->r[2] + c->r[3];
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[3] = c->r[2] + 0x00000040u;
    c->r[2] = mem_r8(ram, c->r[30] + 0x00000018u);
    { mem_w8(ram, c->r[3] + 0x00000000u, c->r[2]); goto L_08968320; }
L_08968310:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]); goto L_089682a4; }
L_08968320:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[3] + c->r[2];
    mem_w32(ram, c->r[4] + 0x00000000u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[3] = c->r[2] + 0x00000010u;
    c->r[2] = mem_r8(ram, c->r[30] + 0x00000010u);
    mem_w8(ram, c->r[3] + 0x0000000cu, c->r[2]);
L_08968350:
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[30] + 0x00000010u);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000af4u;
    { c->r[31] = 0x08968364u; c->r[5] = c->r[2] + 0u; func_0896998c(c, ram); }
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000af4u;
    { c->r[31] = 0x08968374u; c->r[5] = mem_r32(ram, c->r[30] + 0x0000000cu); func_089699c0(c, ram); }
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x08968380u; c->r[4] = c->r[4] + 0x00000af4u; func_0880d294(c, ram); }
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000af4u;
    { c->r[31] = 0x08968390u; c->r[5] = c->r[2] + 0u; func_089c93e4(c, ram); }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000044u);
    c->r[2] = c->r[2] + 0x00000001u;
    mem_w32(ram, c->r[3] + 0x00000044u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000044u);
    c->r[2] = (c->r[2] < 0x00000064u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_089683c8; }
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000af4u;
    { c->r[31] = 0x089683c8u; c->r[5] = 0u + 0x000000abu; func_089ca128(c, ram); }
L_089683c8:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x0000003cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[3] + c->r[2];
    mem_w32(ram, c->r[4] + 0x0000003cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x0000003cu);
    c->r[2] = 0x00100000u;
    c->r[2] = c->r[2] | 0x7abfu;
    c->r[2] = (c->r[2] < c->r[3]) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_0896840c; }
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000af4u;
    { c->r[31] = 0x0896840cu; c->r[5] = 0u + 0x000000b5u; func_089ca128(c, ram); }
L_0896840c:
    c->r[17] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[16] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x08968420u; c->r[4] = c->r[4] + 0x00000af4u; func_08921a18(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = mem_r32(ram, c->r[16] + 0x00000048u);
    c->r[2] = c->r[2] + c->r[3];
    mem_w32(ram, c->r[17] + 0x00000048u, c->r[2]);
    c->r[17] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[16] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x08968444u; c->r[4] = c->r[4] + 0x00000af4u; func_0882ea34(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = mem_r32(ram, c->r[16] + 0x00000048u);
    c->r[2] = c->r[2] + c->r[3];
    mem_w32(ram, c->r[17] + 0x00000048u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x00000048u);
    c->r[2] = 0x000f0000u;
    c->r[2] = c->r[2] | 0x423fu;
    c->r[2] = (c->r[2] < c->r[3]) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_08968480; }
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000af4u;
    { c->r[31] = 0x08968480u; c->r[5] = 0u + 0x000000c2u; func_089ca128(c, ram); }
L_08968480:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000004u;
    mem_w32(ram, c->r[30] + 0x0000002cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000002cu);
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000018u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = ((s32)c->r[2] < (s32)c->r[3]) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_089684b0; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000002cu);
    c->r[2] = mem_r8(ram, c->r[30] + 0x00000010u);
    mem_w8(ram, c->r[3] + 0x00000018u, c->r[2]);
L_089684b0:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000002cu);
    mem_w32(ram, c->r[30] + 0x00000028u, c->r[2]);
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x089684c4u; c->r[4] = c->r[4] + 0x00000af4u; func_08921a18(c, ram); }
    c->r[16] = c->r[2] + 0u;
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x089684d4u; c->r[4] = c->r[4] + 0x00000af4u; func_0882ea34(c, ram); }
    c->r[2] = c->r[16] + c->r[2];
    mem_w32(ram, c->r[30] + 0x00000024u, c->r[2]);
    c->r[2] = 0u + 0xffffffffu;
    mem_w32(ram, c->r[30] + 0x00000020u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000028u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000024u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[2] = (c->r[2] < c->r[3]) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_08968500; }
    mem_w32(ram, c->r[30] + 0x00000020u, 0u);
L_08968500:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[2] = 0u + 0xffffffffu;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_08968540; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000028u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000024u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_08968540; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000028u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000004u);
    c->r[2] = (c->r[2] < c->r[3]) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_08968540; }
    mem_w32(ram, c->r[30] + 0x00000020u, 0u);
L_08968540:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[2] = 0u + 0xffffffffu;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_08968574; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000028u);
    c->r[2] = c->r[2] + 0x00000008u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000024u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[2] = (c->r[2] < c->r[3]) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_08968574; }
    c->r[2] = 0u + 0x00000001u;
    mem_w32(ram, c->r[30] + 0x00000020u, c->r[2]);
L_08968574:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[2] = 0u + 0xffffffffu;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_089685c0; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000028u);
    c->r[2] = c->r[2] + 0x00000008u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000024u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_089685c0; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000028u);
    c->r[2] = c->r[2] + 0x00000008u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000004u);
    c->r[2] = (c->r[2] < c->r[3]) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_089685c0; }
    c->r[2] = 0u + 0x00000001u;
    mem_w32(ram, c->r[30] + 0x00000020u, c->r[2]);
L_089685c0:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[2] = 0u + 0xffffffffu;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_089685f4; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000028u);
    c->r[2] = c->r[2] + 0x00000010u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000024u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[2] = (c->r[2] < c->r[3]) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_089685f4; }
    c->r[2] = 0u + 0x00000002u;
    mem_w32(ram, c->r[30] + 0x00000020u, c->r[2]);
L_089685f4:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[2] = 0u + 0xffffffffu;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_08968640; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000028u);
    c->r[2] = c->r[2] + 0x00000010u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000024u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_08968640; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000028u);
    c->r[2] = c->r[2] + 0x00000010u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000004u);
    c->r[2] = (c->r[2] < c->r[3]) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_08968640; }
    c->r[2] = 0u + 0x00000002u;
    mem_w32(ram, c->r[30] + 0x00000020u, c->r[2]);
L_08968640:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_089686c0; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000028u);
    c->r[3] = c->r[2] + 0x00000010u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000028u);
    c->r[2] = c->r[2] + 0x00000008u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    mem_w32(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000028u);
    c->r[3] = c->r[2] + 0x00000010u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000028u);
    c->r[2] = c->r[2] + 0x00000008u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000004u);
    mem_w32(ram, c->r[3] + 0x00000004u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000028u);
    c->r[3] = c->r[2] + 0x00000008u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000028u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    mem_w32(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000028u);
    c->r[3] = c->r[2] + 0x00000008u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000028u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000004u);
    mem_w32(ram, c->r[3] + 0x00000004u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000028u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000024u);
    mem_w32(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000028u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    { mem_w32(ram, c->r[3] + 0x00000004u, c->r[2]); goto L_08968754; }
L_089686c0:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[2] = 0u + 0x00000001u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_08968724; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000028u);
    c->r[3] = c->r[2] + 0x00000010u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000028u);
    c->r[2] = c->r[2] + 0x00000008u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    mem_w32(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000028u);
    c->r[3] = c->r[2] + 0x00000010u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000028u);
    c->r[2] = c->r[2] + 0x00000008u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000004u);
    mem_w32(ram, c->r[3] + 0x00000004u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000028u);
    c->r[3] = c->r[2] + 0x00000008u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000024u);
    mem_w32(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000028u);
    c->r[3] = c->r[2] + 0x00000008u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    { mem_w32(ram, c->r[3] + 0x00000004u, c->r[2]); goto L_08968754; }
L_08968724:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[2] = 0u + 0x00000002u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_08968754; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000028u);
    c->r[3] = c->r[2] + 0x00000010u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000024u);
    mem_w32(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000028u);
    c->r[3] = c->r[2] + 0x00000010u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    mem_w32(ram, c->r[3] + 0x00000004u, c->r[2]);
L_08968754:
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x08968760u; c->r[4] = c->r[4] + 0x00000af4u; func_0896586c(c, ram); }
    mem_w32(ram, c->r[30] + 0x0000001cu, c->r[2]);
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x08968770u; c->r[4] = c->r[4] + 0x00000af4u; func_08965894(c, ram); }
    c->r[16] = c->r[2] + 0u;
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x08968780u; c->r[4] = c->r[4] + 0x00000af4u; func_089658bc(c, ram); }
    c->r[2] = c->r[16] + c->r[2];
    mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]);
    mem_w32(ram, c->r[30] + 0x00000014u, 0u);
L_0896878c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000028u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_089687a4; }
    { goto L_08968844; }
L_089687a4:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 3;
    c->r[2] = 0x08a80000u;
    c->r[2] = c->r[2] + 0x00001efcu;
    c->r[2] = c->r[3] + c->r[2];
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[2] = c->r[3] + c->r[2];
    mem_w32(ram, c->r[30] + 0x0000001cu, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 3;
    c->r[2] = 0x08a80000u;
    c->r[2] = c->r[2] + 0x00001f00u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[2] = c->r[3] + c->r[2];
    mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 3;
    c->r[2] = 0x08a80000u;
    c->r[2] = c->r[2] + 0x00001f04u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[2] = c->r[3] + c->r[2];
    mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]); goto L_0896878c; }
L_08968844:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = ((s32)c->r[2] < (s32)0x000001f4u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_08968864; }
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000af4u;
    { c->r[31] = 0x08968864u; c->r[5] = 0u + 0x000000c7u; func_089ca128(c, ram); }
L_08968864:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = ((s32)c->r[2] < (s32)0x0000012cu) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_08968884; }
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000af4u;
    { c->r[31] = 0x08968884u; c->r[5] = 0u + 0x000000dau; func_089ca128(c, ram); }
L_08968884:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000005cu);
    mem_w32(ram, c->r[30] + 0x00000030u, c->r[2]);
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x0896889cu; c->r[4] = c->r[4] + 0x00000af4u; func_0896586c(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000030u);
    c->r[2] = c->r[2] + c->r[3];
    mem_w32(ram, c->r[30] + 0x00000030u, c->r[2]);
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x089688b8u; c->r[4] = c->r[4] + 0x00000af4u; func_08965894(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000030u);
    c->r[2] = c->r[2] + c->r[3];
    mem_w32(ram, c->r[30] + 0x00000030u, c->r[2]);
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x089688d4u; c->r[4] = c->r[4] + 0x00000af4u; func_089658bc(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000030u);
    c->r[2] = c->r[2] + c->r[3];
    mem_w32(ram, c->r[30] + 0x00000030u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000030u);
    c->r[2] = ((s32)c->r[2] < (s32)0x000000c8u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_08968904; }
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000af4u;
    { c->r[31] = 0x08968904u; c->r[5] = 0u + 0x000000e5u; func_089ca128(c, ram); }
L_08968904:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000030u);
    c->r[2] = ((s32)c->r[2] < (s32)0x000001f4u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_08968924; }
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000af4u;
    { c->r[31] = 0x08968924u; c->r[5] = 0u + 0x000000e6u; func_089ca128(c, ram); }
L_08968924:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000030u);
    c->r[2] = ((s32)c->r[2] < (s32)0x000003e8u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_08968944; }
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000af4u;
    { c->r[31] = 0x08968944u; c->r[5] = 0u + 0x000000e7u; func_089ca128(c, ram); }
L_08968944:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000060u);
    mem_w32(ram, c->r[30] + 0x00000030u, c->r[2]);
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x0896895cu; c->r[4] = c->r[4] + 0x00000af4u; func_08969964(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000030u);
    c->r[2] = c->r[2] + c->r[3];
    mem_w32(ram, c->r[30] + 0x00000030u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000030u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000005u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_0896898c; }
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000af4u;
    { c->r[31] = 0x0896898cu; c->r[5] = 0u + 0x000000e8u; func_089ca128(c, ram); }
L_0896898c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000030u);
    c->r[2] = ((s32)c->r[2] < (s32)0x0000000fu) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_089689ac; }
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000af4u;
    { c->r[31] = 0x089689acu; c->r[5] = 0u + 0x000000e9u; func_089ca128(c, ram); }
L_089689ac:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000030u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000032u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_089689cc; }
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000af4u;
    { c->r[31] = 0x089689ccu; c->r[5] = 0u + 0x000000eau; func_089ca128(c, ram); }
L_089689cc:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000003u);
    c->r[2] = 0u + 0x00000019u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_08968a10; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000001u);
    c->r[2] = 0u + 0x0000000bu;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_08968a10; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_08968a10; }
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000af4u;
    { c->r[31] = 0x08968a10u; c->r[5] = 0u + 0x000000a7u; func_089ca128(c, ram); }
L_08968a10:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000003u);
    c->r[2] = 0u + 0x0000001bu;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_08968a54; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000001u);
    c->r[2] = 0u + 0x0000000au;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_08968a54; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_08968a54; }
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000af4u;
    { c->r[31] = 0x08968a54u; c->r[5] = 0u + 0x000000b4u; func_089ca128(c, ram); }
L_08968a54:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000003u);
    c->r[2] = 0u + 0x0000001au;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_08968a98; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000001u);
    c->r[2] = 0u + 0x00000014u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_08968a98; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_08968a98; }
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000af4u;
    { c->r[31] = 0x08968a98u; c->r[5] = 0u + 0x000000bbu; func_089ca128(c, ram); }
L_08968a98:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000003u);
    c->r[2] = 0u + 0x0000001cu;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_08968adc; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000001u);
    c->r[2] = 0u + 0x0000000du;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_08968adc; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_08968adc; }
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000af4u;
    { c->r[31] = 0x08968adcu; c->r[5] = 0u + 0x000000ceu; func_089ca128(c, ram); }
L_08968adc:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000003u);
    c->r[2] = 0u + 0x0000001eu;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_08968b20; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000001u);
    c->r[2] = 0u + 0x0000001au;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_08968b20; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_08968b20; }
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000af4u;
    { c->r[31] = 0x08968b20u; c->r[5] = 0u + 0x000000cau; func_089ca128(c, ram); }
L_08968b20:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000003u);
    c->r[2] = 0u + 0x0000001du;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_08968b64; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000001u);
    c->r[2] = 0u + 0x00000016u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_08968b64; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_08968b64; }
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000af4u;
    { c->r[31] = 0x08968b64u; c->r[5] = 0u + 0x000000c8u; func_089ca128(c, ram); }
L_08968b64:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000003u);
    c->r[2] = 0u + 0x00000018u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_08968ba4; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000001u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_08968ba4; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_08968ba4; }
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000af4u;
    { c->r[31] = 0x08968ba4u; c->r[5] = 0u + 0x000000d7u; func_089ca128(c, ram); }
L_08968ba4:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x0000004cu);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000048u);
    c->r[17] = mem_r32(ram, c->r[29] + 0x00000044u);
    c->r[16] = mem_r32(ram, c->r[29] + 0x00000040u);
    { c->r[29] = c->r[29] + 0x00000050u; return; }
    return; /* fell out of func_08967d80 */
}

/* func_089699f0  0x089699f0..0x08969ac8  216 bytes, source=sweep */
void func_089699f0(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089699f0u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[2] = 0u + 0xffffffffu;
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[2]);
    c->r[2] = 0x08aa0000u;
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x000053ccu);
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]);
    c->r[2] = 0x08aa0000u;
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x000053cfu);
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_08969a68; }
    c->r[4] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
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
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000003u);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[2]);
L_08969a68:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = 0u + 0x00000001u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_08969ab4; }
    c->r[4] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
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
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000004u);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[2]);
L_08969ab4:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_089699f0 */
}

/* func_0896a86c  0x0896a86c..0x0896a9cc  352 bytes, source=fde */
void func_0896a86c(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0896a86cu);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x000000e0u;
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000070u;
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000056u);
    c->r[2] = 0u + 0x00000001u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_0896a8bc; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    mem_w8(ram, c->r[2] + 0x00000055u, 0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    mem_w8(ram, c->r[2] + 0x00000056u, 0u);
L_0896a8bc:
    { c->r[31] = 0x0896a8c4u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000004u); func_0896e464(c, ram); }
    { int _c = (c->r[2] != 0u); if (_c) goto L_0896a968; }
    { c->r[31] = 0x0896a8d4u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000004u); func_0896e48c(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = 0u + 0x00000001u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_0896a938; }
    { c->r[31] = 0x0896a8ecu; c->r[4] = 0u + 0x00000001u; func_089c5fbc(c, ram); }
    { int _c = (c->r[2] == 0u); if (_c) goto L_0896a918; }
    { c->r[31] = 0x0896a8fcu; c->r[4] = mem_r32(ram, c->r[30] + 0x00000004u); func_0896e438(c, ram); }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x0896a908u; c->r[5] = 0u + 0x00000034u; func_0896a7b8(c, ram); }
    { c->r[31] = 0x0896a910u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u); func_0896a824(c, ram); }
    { goto L_0896a968; }
L_0896a918:
    { c->r[31] = 0x0896a920u; c->r[4] = 0u + 0x00000001u; func_089c607c(c, ram); }
    { int _c = (c->r[2] == 0u); if (_c) goto L_0896a968; }
    { c->r[31] = 0x0896a930u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000004u); func_0896e438(c, ram); }
    { goto L_0896a968; }
L_0896a938:
    c->r[4] = 0x08a70000u;
    c->r[4] = c->r[4] + 0xffffb34cu;
    c->r[5] = 0u + 0u;
    c->r[6] = 0u + 0u;
    { c->r[31] = 0x0896a950u; c->r[7] = 0u + 0u; func_089d87d4(c, ram); }
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000004u);
    c->r[2] = c->r[2] & 0x8000u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_0896a968; }
    { c->r[31] = 0x0896a968u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000004u); func_0896e40c(c, ram); }
L_0896a968:
    { c->r[31] = 0x0896a970u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000004u); func_0896e48c(c, ram); }
    { int _c = (c->r[2] == 0u); if (_c) goto L_0896a99c; }
    c->r[4] = 0x08a70000u;
    { c->r[31] = 0x0896a984u; c->r[4] = c->r[4] + 0xffffb34cu; func_089d88c8(c, ram); }
    { c->r[31] = 0x0896a98cu; c->r[4] = 0u + 0x00000001u; func_08928c8c(c, ram); }
    { c->r[31] = 0x0896a994u; c->r[4] = 0u + 0x00000001u; func_08933630(c, ram); }
    { goto L_0896a9b8; }
L_0896a99c:
    c->r[4] = 0x08a70000u;
    { c->r[31] = 0x0896a9a8u; c->r[4] = c->r[4] + 0xffffb34cu; func_089d88f8(c, ram); }
    { c->r[31] = 0x0896a9b0u; c->r[4] = 0u + 0u; func_08928c8c(c, ram); }
    { c->r[31] = 0x0896a9b8u; c->r[4] = 0u + 0u; func_08933630(c, ram); }
L_0896a9b8:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_0896a86c */
}

/* func_0896dc80  0x0896dc80..0x0896dcd0  80 bytes, source=sweep */
void func_0896dc80(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0896dc80u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    { c->r[31] = 0x0896dc98u; mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]); func_0896a3c0(c, ram); }
    c->r[4] = c->r[2] + 0u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 3;
    c->r[2] = c->r[2] + c->r[3];
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[4] + c->r[2];
    c->r[2] = c->r[2] + 0x00000004u;
    c->r[2] = c->r[2] + 0x00000014u;
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_0896dc80 */
}

/* func_0896e824  0x0896e824..0x0896e87c  88 bytes, source=fde */
void func_0896e824(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0896e824u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000ac8u;
    { c->r[31] = 0x0896e84cu; c->r[5] = c->r[2] + 0u; func_089cb820(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_0896e868; }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000004u);
    { c->r[31] = 0x0896e868u; c->r[5] = 0u + 0x00000002u; func_0880d260(c, ram); }
L_0896e868:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_0896e824 */
}

/* func_0896f898  0x0896f898..0x0896f910  120 bytes, source=fde */
void func_0896f898(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0896f898u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    { c->r[31] = 0x0896f8b4u; mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]); func_0896a3c0(c, ram); }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[2] = ((s32)c->r[3] < (s32)c->r[2]) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_0896f8fc; }
    { c->r[31] = 0x0896f8d0u; func_0896a3e4(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    { int _c = (c->r[2] == c->r[3]); if (_c) goto L_0896f8fc; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = c->r[2] << 1;
    c->r[2] = 0x08aa0000u;
    c->r[2] = c->r[2] + 0x00006894u;
    c->r[3] = c->r[3] + c->r[2];
    c->r[2] = mem_r16(ram, c->r[30] + 0x00000004u);
    mem_w16(ram, c->r[3] + 0x00000000u, c->r[2]);
L_0896f8fc:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_0896f898 */
}

/* func_08972218  0x08972218..0x08972758  1344 bytes, source=fde */
void func_08972218(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08972218u);
L_08972218:
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
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000070u;
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]);
    c->r[2] = mem_r8(ram, c->r[30] + 0x00000004u);
    mem_w32(ram, c->r[30] + 0x00000028u, c->r[2]);
    c->r[2] = 0u + 0x00000019u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000028u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_089726d4; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000028u);
    c->r[2] = ((s32)c->r[3] < (s32)0x0000001au) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_08972290; }
    c->r[2] = 0u + 0x00000001u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000028u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_08972298; }
    { goto L_08972740; }
L_08972290:
    { goto L_08972740; }
L_08972298:
    { c->r[31] = 0x089722a0u; func_0885d884(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r8(ram, c->r[2] + 0x0000000eu);
    mem_w32(ram, c->r[30] + 0x00000024u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000024u);
    c->r[2] = (c->r[3] < 0x0000002cu) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_08972740; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000024u);
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08a50000u;
    c->r[2] = c->r[2] + 0xffff8838u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    { u32 _t = c->r[2]; switch (_t) { case 0x08972218u: goto L_08972218; case 0x089722dcu: goto L_089722dc; case 0x08972404u: goto L_08972404; case 0x08972564u: goto L_08972564; case 0x0897259cu: goto L_0897259c; case 0x089725d8u: goto L_089725d8; case 0x08972614u: goto L_08972614; case 0x08972650u: goto L_08972650; case 0x08972690u: goto L_08972690; case 0x089726c4u: goto L_089726c4; case 0x08972740u: goto L_08972740; default: recomp_trap_unknown_indirect(c, ram, 0x089722d4u, _t); return; } }
L_089722dc:
    { c->r[31] = 0x089722e4u; c->r[4] = mem_r32(ram, c->r[30] + 0x0000000cu); func_0896e3a0(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000ac8u;
    { c->r[31] = 0x089722fcu; c->r[5] = c->r[2] + 0u; func_089cb820(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = c->r[2] + 0x00000004u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000ac8u;
    { c->r[31] = 0x0897231cu; c->r[5] = c->r[2] + 0u; func_089cb820(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = c->r[2] + 0x0000000cu;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000ac8u;
    { c->r[31] = 0x0897233cu; c->r[5] = c->r[2] + 0u; func_089cb820(c, ram); }
    mem_w32(ram, c->r[30] + 0x0000001cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_0897235c; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0u + 0x00000012u;
    { mem_w8(ram, c->r[3] + 0x0000000eu, c->r[2]); goto L_08972740; }
L_0897235c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_0897238c; }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[6] = 0u + 0x00000021u;
    { c->r[31] = 0x0897237cu; c->r[7] = 0u + 0u; func_089c34ac(c, ram); }
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0u + 0x00000014u;
    { mem_w8(ram, c->r[3] + 0x0000000eu, c->r[2]); goto L_08972740; }
L_0897238c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    { int _c = (c->r[2] == 0u); if (_c) goto L_089723b0; }
    { c->r[31] = 0x089723a0u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u); func_0899f550(c, ram); }
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0u + 0x00000015u;
    { mem_w8(ram, c->r[3] + 0x0000000eu, c->r[2]); goto L_08972740; }
L_089723b0:
    { c->r[31] = 0x089723b8u; func_088516f8(c, ram); }
    { int _c = (c->r[2] == 0u); if (_c) goto L_08972404; }
    { c->r[31] = 0x089723c8u; func_08850c40(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000020u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[2] = 0u + 0x00000001u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_089723f4; }
    { c->r[31] = 0x089723e4u; c->r[4] = 0u + 0u; func_089c3618(c, ram); }
    { c->r[31] = 0x089723ecu; c->r[4] = 0u + 0x00000001u; func_089c6e0c(c, ram); }
    { goto L_08972404; }
L_089723f4:
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0u + 0x00000013u;
    { mem_w8(ram, c->r[3] + 0x0000000eu, c->r[2]); goto L_08972740; }
L_08972404:
    c->r[1] = 0x08a50000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffff8830u);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00003c30u;
    c->r[5] = 0u + 0x00000002u;
    { c->r[31] = 0x08972420u; c->f[12] = c->f[0]; func_089b3514(c, ram); }
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0xffffc930u;
    { c->r[31] = 0x08972430u; c->r[5] = 0u + 0x00000001u; func_089f742c(c, ram); }
    { c->r[31] = 0x08972438u; c->r[4] = 0u + 0u; func_0880b1a0(c, ram); }
    c->r[4] = 0x08a90000u;
    { c->r[31] = 0x08972444u; c->r[4] = c->r[4] + 0xffff9720u; func_08821760(c, ram); }
    { c->r[31] = 0x0897244cu; func_0884dfd8(c, ram); }
    { c->r[31] = 0x08972454u; func_0885d97c(c, ram); }
    { c->r[31] = 0x0897245cu; c->r[4] = 0u + 0x00000001u; func_089c6e0c(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = c->r[2] + 0x00000008u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000ac8u;
    { c->r[31] = 0x08972478u; c->r[5] = c->r[2] + 0u; func_089cb820(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000020u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_08972494; }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000020u);
    { c->r[31] = 0x08972494u; c->r[5] = 0u + 0x00000002u; func_0880d260(c, ram); }
L_08972494:
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000af4u;
    { c->r[31] = 0x089724a4u; c->r[5] = 0u + 0x00000006u; func_0896df68(c, ram); }
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000af4u;
    { c->r[31] = 0x089724b4u; c->r[5] = 0u + 0u; func_0880d318(c, ram); }
    { c->r[31] = 0x089724bcu; c->r[4] = 0u + 0x00000002u; func_08924620(c, ram); }
    mem_w32(ram, c->r[30] + 0x0000001cu, 0u);
L_089724c0:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000006u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_089724d8; }
    { goto L_0897252c; }
L_089724d8:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[3] = c->r[2] << 2;
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = c->r[2] + 0x00000014u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000ac8u;
    { c->r[31] = 0x08972500u; c->r[5] = c->r[2] + 0u; func_089cb820(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_0897251c; }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000018u);
    { c->r[31] = 0x0897251cu; c->r[5] = 0u + 0x00000002u; func_0880d260(c, ram); }
L_0897251c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x0000001cu, c->r[2]); goto L_089724c0; }
L_0897252c:
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0u + 0x0000000fu;
    { c->r[31] = 0x0897253cu; mem_w32(ram, c->r[3] + 0x00000004u, c->r[2]); func_0896a284(c, ram); }
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0u + 0x000000ffu;
    c->r[6] = 0u + 0u;
    c->r[7] = 0u + 0u;
    { c->r[31] = 0x08972554u; c->r[8] = 0u + 0u; func_0896cc50(c, ram); }
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0u + 0x0000000bu;
    { mem_w8(ram, c->r[3] + 0x0000000eu, c->r[2]); goto L_08972740; }
L_08972564:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000ac8u;
    { c->r[31] = 0x0897257cu; c->r[5] = c->r[2] + 0u; func_089cb820(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000020u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_08972740; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0u + 0x0000000au;
    { mem_w8(ram, c->r[3] + 0x0000000eu, c->r[2]); goto L_08972740; }
L_0897259c:
    { c->r[31] = 0x089725a4u; func_08850c40(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000020u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[2] = 0u + 0x00000001u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_08972740; }
    { c->r[31] = 0x089725c0u; c->r[4] = 0u + 0u; func_089c3618(c, ram); }
    { c->r[31] = 0x089725c8u; c->r[4] = 0u + 0x00000001u; func_089c6e0c(c, ram); }
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0u + 0x0000000au;
    { mem_w8(ram, c->r[3] + 0x0000000eu, c->r[2]); goto L_08972740; }
L_089725d8:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = c->r[2] + 0x00000004u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000ac8u;
    { c->r[31] = 0x089725f4u; c->r[5] = c->r[2] + 0u; func_089cb820(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000020u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_08972740; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0u + 0x0000000au;
    { mem_w8(ram, c->r[3] + 0x0000000eu, c->r[2]); goto L_08972740; }
L_08972614:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = c->r[2] + 0x0000000cu;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000ac8u;
    { c->r[31] = 0x08972630u; c->r[5] = c->r[2] + 0u; func_089cb820(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000020u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_08972740; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0u + 0x0000000au;
    { mem_w8(ram, c->r[3] + 0x0000000eu, c->r[2]); goto L_08972740; }
L_08972650:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000004u);
    { int _c = ((s32)c->r[2] > 0); if (_c) goto L_08972678; }
    { c->r[31] = 0x08972668u; func_0896d7ac(c, ram); }
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0u + 0x00000002u;
    { mem_w8(ram, c->r[3] + 0x0000000eu, c->r[2]); goto L_08972740; }
L_08972678:
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000004u);
    c->r[2] = c->r[2] + 0xffffffffu;
    { mem_w32(ram, c->r[3] + 0x00000004u, c->r[2]); goto L_08972740; }
L_08972690:
    { c->r[31] = 0x08972698u; c->r[4] = 0u + 0x00000001u; func_089c5e18(c, ram); }
    { int _c = (c->r[2] == 0u); if (_c) goto L_08972740; }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x089726acu; c->r[5] = 0u + 0x00000002u; func_0896a7b8(c, ram); }
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x089726b8u; c->r[4] = c->r[4] + 0x000027dcu; func_089d38ac(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    { mem_w32(ram, c->r[2] + 0x00000000u, 0u); goto L_08972740; }
L_089726c4:
    { c->r[31] = 0x089726ccu; c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u); func_0896a824(c, ram); }
    { goto L_08972740; }
L_089726d4:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = mem_r8(ram, c->r[2] + 0x0000000eu);
    c->r[2] = 0u + 0x00000002u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_08972728; }
    c->r[1] = 0x08a50000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffff8834u);
    c->r[4] = 0x08a70000u;
    c->r[4] = c->r[4] + 0xffffb640u;
    { c->r[31] = 0x08972700u; c->f[12] = c->f[0]; func_089f1210(c, ram); }
    c->r[4] = 0x08a50000u;
    c->r[4] = c->r[4] + 0xffff8768u;
    c->r[5] = 0u + 0x0000170au;
    { c->r[31] = 0x08972714u; c->r[6] = 0u + 0x00000001u; func_08928cb8(c, ram); }
    c->r[4] = 0x08a70000u;
    { c->r[31] = 0x08972720u; c->r[4] = c->r[4] + 0xffffb640u; func_089f147c(c, ram); }
    { goto L_08972740; }
L_08972728:
    { c->r[31] = 0x08972730u; func_088516f8(c, ram); }
    { int _c = (c->r[2] == 0u); if (_c) goto L_08972740; }
    { c->r[31] = 0x08972740u; func_088513dc(c, ram); }
L_08972740:
    c->r[2] = 0u + 0u;
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000034u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000030u);
    { c->r[29] = c->r[29] + 0x00000040u; return; }
    return; /* fell out of func_08972218 */
}

/* func_0897564c  0x0897564c..0x0897567c  48 bytes, source=sweep */
void func_0897564c(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0897564cu);
    c->r[29] = c->r[29] + 0xfffffff0u;
    mem_w32(ram, c->r[29] + 0x00000004u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000000u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    c->r[4] = 0u + 0x00000001u;
    { c->r[31] = 0x08975668u; c->r[5] = 0u | 0xffffu; func_089754e4(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000004u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000000u);
    { c->r[29] = c->r[29] + 0x00000010u; return; }
    return; /* fell out of func_0897564c */
}

/* func_08978b08  0x08978b08..0x08978b38  48 bytes, source=residue */
void func_08978b08(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08978b08u);
    c->r[29] = c->r[29] + 0xfffffff0u;
    mem_w32(ram, c->r[29] + 0x00000004u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000000u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    c->r[4] = 0x08ab0000u;
    { c->r[31] = 0x08978b24u; c->r[4] = c->r[4] + 0xffff9054u; func_08811320(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000004u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000000u);
    { c->r[29] = c->r[29] + 0x00000010u; return; }
    return; /* fell out of func_08978b08 */
}

/* func_0897de74  0x0897de74..0x0897e070  508 bytes, source=fde */
void func_0897de74(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0897de74u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    c->r[4] = 0x08ab0000u;
    c->r[4] = c->r[4] + 0xffff9124u;
    c->r[5] = 0u + 0u;
    { c->r[31] = 0x0897de98u; c->r[6] = 0u + 0x00000040u; func_08a19ec4(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000000u, 0u);
L_0897de9c:
    { c->r[31] = 0x0897dea4u; func_0896a3c0(c, ram); }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[2] = ((s32)c->r[3] < (s32)c->r[2]) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_0897dec0; }
    { goto L_0897df88; }
L_0897dec0:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = c->r[2] << 1;
    c->r[2] = 0x08ab0000u;
    c->r[2] = c->r[2] + 0xffff9134u;
    c->r[5] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = c->r[2] << 1;
    c->r[2] = 0x08ab0000u;
    c->r[2] = c->r[2] + 0xffff9134u;
    c->r[4] = c->r[3] + c->r[2];
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = (u32)((s32)c->r[3] >> 31);
    c->r[2] = c->r[2] >> 31;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = (u32)((s32)c->r[2] >> 1);
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[3] - c->r[2];
    c->r[2] = c->r[2] << 6;
    c->r[3] = mem_r8(ram, c->r[4] + 0x00000000u);
    c->r[2] = c->r[3] | c->r[2];
    mem_w8(ram, c->r[5] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = c->r[2] << 1;
    c->r[2] = 0x08ab0000u;
    c->r[2] = c->r[2] + 0xffff9134u;
    c->r[4] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = c->r[2] << 1;
    c->r[2] = 0x08ab0000u;
    c->r[2] = c->r[2] + 0xffff9134u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000000u);
    c->r[2] = c->r[2] | 0x0001u;
    mem_w8(ram, c->r[4] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = c->r[2] << 1;
    c->r[2] = 0x08ab0000u;
    c->r[2] = c->r[2] + 0xffff9134u;
    c->r[4] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = c->r[2] << 1;
    c->r[2] = 0x08ab0000u;
    c->r[2] = c->r[2] + 0xffff9134u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000000u);
    mem_w8(ram, c->r[4] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000000u, c->r[2]); goto L_0897de9c; }
L_0897df88:
    { c->r[31] = 0x0897df90u; func_0896a3c0(c, ram); }
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[2]);
L_0897df98:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000008u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_0897dfb0; }
    { goto L_0897e05c; }
L_0897dfb0:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = c->r[2] << 1;
    c->r[2] = 0x08ab0000u;
    c->r[2] = c->r[2] + 0xffff9134u;
    c->r[4] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = c->r[2] << 1;
    c->r[2] = 0x08ab0000u;
    c->r[2] = c->r[2] + 0xffff9134u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[3] = mem_r8(ram, c->r[2] + 0x00000000u);
    c->r[2] = 0u + 0xffffff80u;
    c->r[2] = c->r[3] | c->r[2];
    mem_w8(ram, c->r[4] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = c->r[2] << 1;
    c->r[2] = 0x08ab0000u;
    c->r[2] = c->r[2] + 0xffff9134u;
    c->r[4] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = c->r[2] << 1;
    c->r[2] = 0x08ab0000u;
    c->r[2] = c->r[2] + 0xffff9134u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000000u);
    c->r[2] = c->r[2] | 0x0001u;
    mem_w8(ram, c->r[4] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = c->r[2] << 1;
    c->r[2] = 0x08ab0000u;
    c->r[2] = c->r[2] + 0xffff9134u;
    c->r[4] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = c->r[2] << 1;
    c->r[2] = 0x08ab0000u;
    c->r[2] = c->r[2] + 0xffff9134u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000000u);
    mem_w8(ram, c->r[4] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000000u, c->r[2]); goto L_0897df98; }
L_0897e05c:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_0897de74 */
}

/* func_08986220  0x08986220..0x08986390  368 bytes, source=fde */
void func_08986220(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08986220u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    c->r[4] = 0x08ab0000u;
    c->r[4] = c->r[4] + 0xffff9240u;
    c->r[5] = 0u + 0u;
    { c->r[31] = 0x08986244u; c->r[6] = 0u + 0x00000050u; func_08a19ec4(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000000u, 0u);
L_08986248:
    { c->r[31] = 0x08986250u; func_0896a3c0(c, ram); }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[2] = ((s32)c->r[3] < (s32)c->r[2]) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_0898626c; }
    { goto L_089862d0; }
L_0898626c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08ab0000u;
    c->r[2] = c->r[2] + 0xffff9250u;
    c->r[3] = c->r[3] + c->r[2];
    c->r[2] = 0u + 0x00000003u;
    mem_w8(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08ab0000u;
    c->r[2] = c->r[2] + 0xffff9250u;
    c->r[3] = c->r[3] + c->r[2];
    c->r[2] = 0u + 0x00000003u;
    mem_w8(ram, c->r[3] + 0x00000001u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08ab0000u;
    c->r[2] = c->r[2] + 0xffff9250u;
    c->r[3] = c->r[3] + c->r[2];
    c->r[2] = 0u + 0x00000001u;
    mem_w8(ram, c->r[3] + 0x00000002u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000000u, c->r[2]); goto L_08986248; }
L_089862d0:
    { c->r[31] = 0x089862d8u; func_0896a3c0(c, ram); }
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[2]);
L_089862e0:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000008u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_089862f8; }
    { goto L_0898637c; }
L_089862f8:
    { c->r[31] = 0x08986300u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u); func_0896dbc0(c, ram); }
    mem_w8(ram, c->r[30] + 0x00000004u, c->r[2]);
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[30] + 0x00000004u);
    c->r[2] = 0u + 0xffffffffu;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_0898631c; }
    { goto L_0898636c; }
L_0898631c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08ab0000u;
    c->r[2] = c->r[2] + 0xffff9250u;
    c->r[3] = c->r[3] + c->r[2];
    c->r[2] = 0u + 0x00000005u;
    mem_w8(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08ab0000u;
    c->r[2] = c->r[2] + 0xffff9250u;
    c->r[2] = c->r[3] + c->r[2];
    mem_w8(ram, c->r[2] + 0x00000001u, 0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08ab0000u;
    c->r[2] = c->r[2] + 0xffff9250u;
    c->r[3] = c->r[3] + c->r[2];
    c->r[2] = 0u + 0x00000001u;
    mem_w8(ram, c->r[3] + 0x00000002u, c->r[2]);
L_0898636c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000000u, c->r[2]); goto L_089862e0; }
L_0898637c:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_08986220 */
}

/* func_08992cb4  0x08992cb4..0x08993280  1484 bytes, source=fde */
void func_08992cb4(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08992cb4u);
    c->r[29] = c->r[29] + 0xffffffd0u;
    mem_w32(ram, c->r[29] + 0x0000002cu, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000028u, c->r[30]);
    mem_w32(ram, c->r[29] + 0x00000024u, c->r[17]);
    mem_w32(ram, c->r[29] + 0x00000020u, c->r[16]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x000000e0u;
    { c->r[31] = 0x08992ce0u; mem_w32(ram, c->r[30] + 0x00000004u, c->r[2]); func_08998dcc(c, ram); }
    { c->r[31] = 0x08992ce8u; c->r[17] = c->r[2] + 0u; func_089794c4(c, ram); }
    { c->r[31] = 0x08992cf0u; c->r[16] = mem_r8(ram, c->r[2] + 0x0000000eu); func_089794c4(c, ram); }
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000001u);
    c->r[4] = c->r[17] + 0u;
    c->r[5] = c->r[16] + 0u;
    { c->r[31] = 0x08992d04u; c->r[6] = c->r[2] + 0u; func_08992a48(c, ram); }
    { c->r[31] = 0x08992d0cu; func_089794c4(c, ram); }
    c->r[2] = mem_r8(ram, c->r[2] + 0x0000000eu);
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
    c->r[2] = 0u + 0x00000003u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000014u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_08992db8; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = ((s32)c->r[3] < (s32)0x00000004u) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_08992d4c; }
    c->r[2] = 0u + 0x00000002u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000014u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_08992d74; }
    { goto L_08992e8c; }
L_08992d4c:
    c->r[2] = 0u + 0x00000004u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000014u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_08992e00; }
    c->r[2] = 0u + 0x00000005u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000014u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_08992e4c; }
    { goto L_08992e8c; }
L_08992d74:
    { c->r[31] = 0x08992d7cu; func_08998e74(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = 0x08a80000u;
    c->r[2] = mem_r8(ram, c->r[2] + 0x0000266au);
    c->r[2] = c->r[3] + c->r[2];
    c->r[1] = 0x08a80000u;
    mem_w8(ram, c->r[1] + 0x0000266au, c->r[2]);
    c->r[2] = 0x08a80000u;
    c->r[2] = mem_r8(ram, c->r[2] + 0x0000266au);
    c->r[2] = (c->r[2] < 0x0000001fu) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_08992e8c; }
    c->r[2] = 0u + 0x0000001eu;
    c->r[1] = 0x08a80000u;
    { mem_w8(ram, c->r[1] + 0x0000266au, c->r[2]); goto L_08992e8c; }
L_08992db8:
    { c->r[31] = 0x08992dc0u; func_08998ef4(c, ram); }
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    c->r[3] = 0x08a80000u;
    c->r[3] = mem_r16(ram, c->r[3] + 0x00002668u);
    c->r[2] = f2u(c->f[0]);
    c->r[2] = c->r[3] + c->r[2];
    c->r[1] = 0x08a80000u;
    mem_w16(ram, c->r[1] + 0x00002668u, c->r[2]);
    c->r[2] = 0x08a80000u;
    c->r[2] = mem_r16(ram, c->r[2] + 0x00002668u);
    c->r[2] = (c->r[2] < 0x00000709u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_08992e8c; }
    c->r[2] = 0u + 0x00000708u;
    c->r[1] = 0x08a80000u;
    { mem_w16(ram, c->r[1] + 0x00002668u, c->r[2]); goto L_08992e8c; }
L_08992e00:
    { c->r[31] = 0x08992e08u; func_0896a3e4(c, ram); }
    { c->r[31] = 0x08992e10u; c->r[4] = c->r[2] + 0u; func_08999048(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = 0x08a80000u;
    c->r[2] = mem_r8(ram, c->r[2] + 0x0000266bu);
    c->r[2] = c->r[3] + c->r[2];
    c->r[1] = 0x08a80000u;
    mem_w8(ram, c->r[1] + 0x0000266bu, c->r[2]);
    c->r[2] = 0x08a80000u;
    c->r[2] = mem_r8(ram, c->r[2] + 0x0000266bu);
    c->r[2] = (c->r[2] < 0x0000001fu) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_08992e8c; }
    c->r[2] = 0u + 0x0000001eu;
    c->r[1] = 0x08a80000u;
    { mem_w8(ram, c->r[1] + 0x0000266bu, c->r[2]); goto L_08992e8c; }
L_08992e4c:
    { c->r[31] = 0x08992e54u; func_08998d1c(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = 0x08a80000u;
    c->r[2] = mem_r8(ram, c->r[2] + 0x0000266cu);
    c->r[2] = c->r[3] + c->r[2];
    c->r[1] = 0x08a80000u;
    mem_w8(ram, c->r[1] + 0x0000266cu, c->r[2]);
    c->r[2] = 0x08a80000u;
    c->r[2] = mem_r8(ram, c->r[2] + 0x0000266cu);
    c->r[2] = (c->r[2] < 0x0000001fu) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_08992e8c; }
    c->r[2] = 0u + 0x0000001eu;
    c->r[1] = 0x08a80000u;
    mem_w8(ram, c->r[1] + 0x0000266cu, c->r[2]);
L_08992e8c:
    c->r[2] = 0u + 0x00000001u;
    { c->r[31] = 0x08992e98u; mem_w8(ram, c->r[30] + 0x00000008u, c->r[2]); func_089794c4(c, ram); }
    c->r[3] = mem_r8(ram, c->r[2] + 0x00000004u);
    c->r[2] = 0u + 0x00000002u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_08992ed4; }
    { c->r[31] = 0x08992eb0u; func_089794c4(c, ram); }
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000005u);
    c->r[2] = c->r[2] + 0x00000001u;
    mem_w8(ram, c->r[30] + 0x00000008u, c->r[2]);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[30] + 0x00000008u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000005u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_08992ed4; }
    c->r[2] = 0u + 0x00000004u;
    mem_w8(ram, c->r[30] + 0x00000008u, c->r[2]);
L_08992ed4:
    mem_w32(ram, c->r[30] + 0x0000000cu, 0u);
L_08992ed8:
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[30] + 0x00000008u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = ((s32)c->r[3] < (s32)c->r[2]) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_08992ef4; }
    { goto L_08993164; }
L_08992ef4:
    { c->r[31] = 0x08992efcu; func_08980edc(c, ram); }
    { c->r[31] = 0x08992f04u; c->r[16] = c->r[2] + 0u; func_0896a3e4(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[2] = c->r[2] << 2;
    c->r[3] = c->r[2] + c->r[16];
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = c->r[2] + 0x00000010u;
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000000u);
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[3] = c->r[2] << 4;
    c->r[2] = 0x08a80000u;
    c->r[2] = c->r[2] + 0x00002338u;
    c->r[4] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[3] = c->r[2] << 4;
    c->r[2] = 0x08a80000u;
    c->r[2] = c->r[2] + 0x00002338u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000001u;
    mem_w32(ram, c->r[4] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[3] = c->r[2] << 4;
    c->r[2] = 0x08a80000u;
    c->r[2] = c->r[2] + 0x0000233cu;
    c->r[17] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[3] = c->r[2] << 4;
    c->r[2] = 0x08a80000u;
    c->r[2] = c->r[2] + 0x0000233cu;
    c->r[16] = c->r[3] + c->r[2];
    { c->r[31] = 0x08992f94u; c->r[4] = mem_r32(ram, c->r[30] + 0x0000000cu); func_0896f5d8(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = mem_r32(ram, c->r[16] + 0x00000000u);
    c->r[2] = c->r[2] + c->r[3];
    mem_w32(ram, c->r[17] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[3] = c->r[2] << 4;
    c->r[2] = 0x08a80000u;
    c->r[2] = c->r[2] + 0x00002340u;
    c->r[17] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[3] = c->r[2] << 4;
    c->r[2] = 0x08a80000u;
    c->r[2] = c->r[2] + 0x00002340u;
    c->r[16] = c->r[3] + c->r[2];
    { c->r[31] = 0x08992fd4u; c->r[4] = mem_r32(ram, c->r[30] + 0x0000000cu); func_0896f610(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = mem_r32(ram, c->r[16] + 0x00000000u);
    c->r[2] = c->r[2] + c->r[3];
    mem_w32(ram, c->r[17] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[3] = c->r[2] << 4;
    c->r[2] = 0x08a80000u;
    c->r[2] = c->r[2] + 0x00002344u;
    c->r[17] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[3] = c->r[2] << 4;
    c->r[2] = 0x08a80000u;
    c->r[2] = c->r[2] + 0x00002344u;
    c->r[16] = c->r[3] + c->r[2];
    { c->r[31] = 0x08993014u; c->r[4] = mem_r32(ram, c->r[30] + 0x0000000cu); func_0896f648(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = mem_r32(ram, c->r[16] + 0x00000000u);
    c->r[2] = c->r[2] + c->r[3];
    mem_w32(ram, c->r[17] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[3] = c->r[2] << 4;
    c->r[2] = 0x08a80000u;
    c->r[2] = c->r[2] + 0x00002338u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[3] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[2] = 0x00010000u;
    c->r[2] = c->r[2] | 0x869fu;
    c->r[2] = (c->r[2] < c->r[3]) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_08993070; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[3] = c->r[2] << 4;
    c->r[2] = 0x08a80000u;
    c->r[2] = c->r[2] + 0x00002338u;
    c->r[3] = c->r[3] + c->r[2];
    c->r[2] = 0x00010000u;
    c->r[2] = c->r[2] | 0x869fu;
    mem_w32(ram, c->r[3] + 0x00000000u, c->r[2]);
L_08993070:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[3] = c->r[2] << 4;
    c->r[2] = 0x08a80000u;
    c->r[2] = c->r[2] + 0x0000233cu;
    c->r[2] = c->r[3] + c->r[2];
    c->r[3] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[2] = 0x00010000u;
    c->r[2] = c->r[2] | 0x869fu;
    c->r[2] = (c->r[2] < c->r[3]) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_089930bc; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[3] = c->r[2] << 4;
    c->r[2] = 0x08a80000u;
    c->r[2] = c->r[2] + 0x0000233cu;
    c->r[3] = c->r[3] + c->r[2];
    c->r[2] = 0x00010000u;
    c->r[2] = c->r[2] | 0x869fu;
    mem_w32(ram, c->r[3] + 0x00000000u, c->r[2]);
L_089930bc:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[3] = c->r[2] << 4;
    c->r[2] = 0x08a80000u;
    c->r[2] = c->r[2] + 0x00002340u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[3] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[2] = 0x00010000u;
    c->r[2] = c->r[2] | 0x869fu;
    c->r[2] = (c->r[2] < c->r[3]) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_08993108; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[3] = c->r[2] << 4;
    c->r[2] = 0x08a80000u;
    c->r[2] = c->r[2] + 0x00002340u;
    c->r[3] = c->r[3] + c->r[2];
    c->r[2] = 0x00010000u;
    c->r[2] = c->r[2] | 0x869fu;
    mem_w32(ram, c->r[3] + 0x00000000u, c->r[2]);
L_08993108:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[3] = c->r[2] << 4;
    c->r[2] = 0x08a80000u;
    c->r[2] = c->r[2] + 0x00002344u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[3] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[2] = 0x00010000u;
    c->r[2] = c->r[2] | 0x869fu;
    c->r[2] = (c->r[2] < c->r[3]) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_08993154; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[3] = c->r[2] << 4;
    c->r[2] = 0x08a80000u;
    c->r[2] = c->r[2] + 0x00002344u;
    c->r[3] = c->r[3] + c->r[2];
    c->r[2] = 0x00010000u;
    c->r[2] = c->r[2] | 0x869fu;
    mem_w32(ram, c->r[3] + 0x00000000u, c->r[2]);
L_08993154:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]); goto L_08992ed8; }
L_08993164:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000058u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_0899317c; }
    { c->r[31] = 0x0899317cu; func_08971764(c, ram); }
L_0899317c:
    { c->r[31] = 0x08993184u; func_0896f1ac(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = 0x08a80000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00002660u);
    c->r[2] = c->r[2] + c->r[3];
    c->r[1] = 0x08a80000u;
    mem_w32(ram, c->r[1] + 0x00002660u, c->r[2]);
    c->r[3] = 0x08a80000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00002660u);
    c->r[2] = 0x00020000u;
    c->r[2] = c->r[2] | 0x7100u;
    c->r[2] = (c->r[2] < c->r[3]) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_089931c8; }
    c->r[2] = 0x00020000u;
    c->r[2] = c->r[2] | 0x7100u;
    c->r[1] = 0x08a80000u;
    mem_w32(ram, c->r[1] + 0x00002660u, c->r[2]);
L_089931c8:
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x089931d4u; c->r[4] = mem_r32(ram, c->r[4] + 0x00002660u); func_0896ee58(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]);
    c->r[2] = mem_r8(ram, c->r[30] + 0x00000010u);
    c->r[1] = 0x08a80000u;
    { c->r[31] = 0x089931e8u; mem_w8(ram, c->r[1] + 0x00002664u, c->r[2]); func_0896f1d0(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = 0x431b0000u;
    c->r[2] = c->r[2] | 0xde83u;
    alx_multu(c, c->r[3], c->r[2]);
    c->r[2] = c->hi;
    c->r[2] = c->r[2] >> 18;
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
    c->r[3] = 0x08a80000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00002658u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[3] + c->r[2];
    c->r[1] = 0x08a80000u;
    mem_w32(ram, c->r[1] + 0x00002658u, c->r[2]);
    c->r[3] = 0x08a80000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00002658u);
    c->r[2] = 0x02250000u;
    c->r[2] = c->r[2] | 0x50ffu;
    c->r[2] = (c->r[2] < c->r[3]) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_08993248; }
    c->r[2] = 0x02250000u;
    c->r[2] = c->r[2] | 0x50ffu;
    c->r[1] = 0x08a80000u;
    mem_w32(ram, c->r[1] + 0x00002658u, c->r[2]);
L_08993248:
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000af4u;
    { c->r[31] = 0x08993258u; c->r[5] = 0u + 0x00000002u; func_089c93e4(c, ram); }
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x08993264u; c->r[4] = c->r[4] + 0x00000af4u; func_089ca29c(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x0000002cu);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000028u);
    c->r[17] = mem_r32(ram, c->r[29] + 0x00000024u);
    c->r[16] = mem_r32(ram, c->r[29] + 0x00000020u);
    { c->r[29] = c->r[29] + 0x00000030u; return; }
    return; /* fell out of func_08992cb4 */
}

/* func_08998ba0  0x08998ba0..0x08998be4  68 bytes, source=residue */
void func_08998ba0(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08998ba0u);
    c->r[29] = c->r[29] + 0xfffffff0u;
    mem_w32(ram, c->r[29] + 0x00000000u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    c->r[3] = 0x08ab0000u;
    c->r[3] = mem_r8(ram, c->r[3] + 0x00002a92u);
    c->r[2] = 0u + 0x000000ffu;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_08998bd4; }
    c->r[2] = 0x08ab0000u;
    c->r[2] = mem_r8(ram, c->r[2] + 0x00002a92u);
    c->r[2] = c->r[2] + 0x00000001u;
    c->r[1] = 0x08ab0000u;
    mem_w8(ram, c->r[1] + 0x00002a92u, c->r[2]);
L_08998bd4:
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000000u);
    { c->r[29] = c->r[29] + 0x00000010u; return; }
    return; /* fell out of func_08998ba0 */
}

/* func_08999288  0x08999288..0x089992ac  36 bytes, source=sweep */
void func_08999288(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08999288u);
    c->r[29] = c->r[29] + 0xfffffff0u;
    mem_w32(ram, c->r[29] + 0x00000000u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    c->r[2] = 0x08ab0000u;
    c->r[2] = mem_r8(ram, c->r[2] + 0x00002aacu);
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000000u);
    { c->r[29] = c->r[29] + 0x00000010u; return; }
    return; /* fell out of func_08999288 */
}

/* func_0899ebf0  0x0899ebf0..0x0899ec9c  172 bytes, source=sweep */
void func_0899ebf0(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0899ebf0u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[2] = c->r[5] + 0u;
    c->r[3] = c->r[6] + 0u;
    mem_w8(ram, c->r[30] + 0x00000004u, c->r[2]);
    mem_w8(ram, c->r[30] + 0x00000005u, c->r[3]);
    c->r[2] = mem_r8(ram, c->r[30] + 0x00000004u);
    { c->r[31] = 0x0899ec20u; c->r[4] = c->r[2] + 0u; func_08998888(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000000u);
    c->r[2] = c->r[2] | 0x0001u;
    mem_w8(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000000u);
    c->r[2] = c->r[2] | 0x0020u;
    mem_w8(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[30] + 0x00000005u);
    c->r[2] = ((s32)c->r[2] < (s32)0x0000000au) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_0899ec70; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000000u);
    c->r[2] = c->r[2] | 0x0040u;
    mem_w8(ram, c->r[3] + 0x00000000u, c->r[2]);
L_0899ec70:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[3] = mem_r8(ram, c->r[2] + 0x00000000u);
    c->r[2] = 0u + 0xfffffffeu;
    c->r[2] = c->r[3] & c->r[2];
    mem_w8(ram, c->r[4] + 0x00000000u, c->r[2]);
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_0899ebf0 */
}

/* func_089a1cbc  0x089a1cbc..0x089a1d54  152 bytes, source=sweep */
void func_089a1cbc(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089a1cbcu);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000000u);
    c->r[1] = 0x08a50000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffffa6c0u);
    c->f[0] = c->f[1] * c->f[0];
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    c->r[2] = f2u(c->f[0]);
    mem_w16(ram, c->r[3] + 0x00000016u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[2] + 0x00000004u;
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000000u);
    c->r[1] = 0x08a50000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffffa6c0u);
    c->f[0] = c->f[1] * c->f[0];
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    c->r[2] = f2u(c->f[0]);
    mem_w16(ram, c->r[3] + 0x00000018u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[2] + 0x00000008u;
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000000u);
    c->r[1] = 0x08a50000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffffa6c0u);
    c->f[0] = c->f[1] * c->f[0];
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    c->r[2] = f2u(c->f[0]);
    mem_w16(ram, c->r[3] + 0x0000001au, c->r[2]);
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_089a1cbc */
}

/* func_089a6940  0x089a6940..0x089a6c1c  732 bytes, source=fde */
void func_089a6940(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089a6940u);
    c->r[29] = c->r[29] + 0xffffffc0u;
    mem_w32(ram, c->r[29] + 0x00000034u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000030u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, 0u);
L_089a6954:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000002u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_089a696c; }
    { goto L_089a6a44; }
L_089a696c:
    mem_w32(ram, c->r[30] + 0x00000004u, 0u);
L_089a6970:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000005u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_089a6988; }
    { goto L_089a6a34; }
L_089a6988:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x089a6994u; c->r[5] = mem_r32(ram, c->r[30] + 0x00000004u); func_089a6564(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_089a6a24; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[4] = c->r[2] + 0x00000020u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 4;
    c->r[2] = 0x08ab0000u;
    c->r[2] = c->r[2] + 0x00002eb0u;
    c->r[3] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[3] + 0x00000000u);
    mem_w32(ram, c->r[4] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[3] + 0x00000004u);
    mem_w32(ram, c->r[4] + 0x00000004u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[3] + 0x00000008u);
    mem_w32(ram, c->r[4] + 0x00000008u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[3] + 0x0000000cu);
    mem_w32(ram, c->r[4] + 0x0000000cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x000000b2u);
    c->r[3] = c->r[2] << 3;
    c->r[2] = 0x08aa0000u;
    c->r[2] = c->r[2] + 0x000049e0u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x000000c8u);
    mem_wf32(ram, c->r[3] + 0x00000024u, c->f[0]);
L_089a6a24:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000004u, c->r[2]); goto L_089a6970; }
L_089a6a34:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000000u, c->r[2]); goto L_089a6954; }
L_089a6a44:
    c->r[2] = c->r[30] + 0x00000010u;
    c->r[1] = 0x08a50000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffffab1cu);
    c->r[1] = 0x08a50000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0xffffab20u);
    c->r[4] = c->r[2] + 0u;
    c->f[12] = c->f[0];
    c->f[13] = u2f(0u);
    c->f[14] = c->f[1];
    c->f[15] = u2f(0u);
    { c->r[31] = 0x089a6a74u; func_0880d140(c, ram); }
    c->r[2] = c->r[30] + 0x00000020u;
    c->r[1] = 0x08a50000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffffab24u);
    c->r[1] = 0x08a50000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0xffffab28u);
    c->r[4] = c->r[2] + 0u;
    c->f[12] = c->f[0];
    c->f[13] = u2f(0u);
    c->f[14] = c->f[1];
    c->f[15] = u2f(0u);
    { c->r[31] = 0x089a6aa4u; func_0880d140(c, ram); }
    c->r[2] = c->r[30] + 0x00000010u;
    c->r[4] = 0u + 0x00000048u;
    c->r[5] = 0u + 0x00000003u;
    c->r[6] = c->r[2] + 0u;
    c->r[7] = 0u + 0u;
    c->r[8] = 0u + 0u;
    { c->r[31] = 0x089a6ac4u; c->r[9] = 0u + 0u; func_089c6bec(c, ram); }
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
    c->r[2] = c->r[30] + 0x00000020u;
    c->r[4] = 0u + 0x00000048u;
    c->r[5] = 0u + 0x00000003u;
    c->r[6] = c->r[2] + 0u;
    c->r[7] = 0u + 0u;
    c->r[8] = 0u + 0u;
    { c->r[31] = 0x089a6ae8u; c->r[9] = 0u + 0u; func_089c6bec(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]);
    c->r[2] = 0u + 0x00000004u;
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[2]);
    c->r[2] = 0u + 0x00000002u;
    { c->r[31] = 0x089a6b00u; mem_w32(ram, c->r[30] + 0x00000000u, c->r[2]); func_0896dc4c(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = 0u + 0x00000001u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_089a6b20; }
    c->r[2] = 0u + 0x00000002u;
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[2]);
    c->r[2] = 0u + 0x00000004u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[2]);
L_089a6b20:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    { int _c = (c->r[2] == 0u); if (_c) goto L_089a6b94; }
    c->r[4] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = mem_r32(ram, c->r[2] + 0x0000008cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[3] | c->r[2];
    mem_w32(ram, c->r[4] + 0x0000008cu, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000008cu);
    c->r[2] = c->r[2] | 0x0020u;
    mem_w32(ram, c->r[3] + 0x0000008cu, c->r[2]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = mem_r32(ram, c->r[2] + 0x0000008cu);
    c->r[2] = 0x40000000u;
    c->r[2] = c->r[3] | c->r[2];
    mem_w32(ram, c->r[4] + 0x0000008cu, c->r[2]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = mem_r32(ram, c->r[2] + 0x0000008cu);
    c->r[2] = 0x00100000u;
    c->r[2] = c->r[3] | c->r[2];
    mem_w32(ram, c->r[4] + 0x0000008cu, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0u + 0x0000000au;
    mem_w16(ram, c->r[3] + 0x000000b0u, c->r[2]);
L_089a6b94:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_089a6c08; }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x0000008cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[3] | c->r[2];
    mem_w32(ram, c->r[4] + 0x0000008cu, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000008cu);
    c->r[2] = c->r[2] | 0x0020u;
    mem_w32(ram, c->r[3] + 0x0000008cu, c->r[2]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x0000008cu);
    c->r[2] = 0x40000000u;
    c->r[2] = c->r[3] | c->r[2];
    mem_w32(ram, c->r[4] + 0x0000008cu, c->r[2]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x0000008cu);
    c->r[2] = 0x00100000u;
    c->r[2] = c->r[3] | c->r[2];
    mem_w32(ram, c->r[4] + 0x0000008cu, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = 0u + 0x0000000au;
    mem_w16(ram, c->r[3] + 0x000000b0u, c->r[2]);
L_089a6c08:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000034u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000030u);
    { c->r[29] = c->r[29] + 0x00000040u; return; }
    return; /* fell out of func_089a6940 */
}

/* func_089ac790  0x089ac790..0x089ac7c8  56 bytes, source=sweep */
void func_089ac790(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089ac790u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08ab0000u;
    c->r[2] = c->r[2] + 0x00003094u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000001u);
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_089ac790 */
}

/* func_089b28c0  0x089b28c0..0x089b2914  84 bytes, source=sweep */
void func_089b28c0(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089b28c0u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = 0x10000000u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = c->r[3] << (c->r[2] & 31u);
    c->r[2] = mem_r32(ram, c->r[4] + 0x0000021cu);
    c->r[2] = c->r[2] | c->r[3];
    mem_w32(ram, c->r[5] + 0x0000021cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[1] = 0x08a50000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffffb168u);
    mem_wf32(ram, c->r[2] + 0x00000248u, c->f[0]);
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_089b28c0 */
}

/* func_089b384c  0x089b384c..0x089b3880  52 bytes, source=sweep */
void func_089b384c(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089b384cu);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    { c->r[31] = 0x089b3868u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u); func_089b3824(c, ram); }
    c->r[2] = c->r[2] & 0x0004u;
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_089b384c */
}

/* func_089b6ae0  0x089b6ae0..0x089b6b20  64 bytes, source=sweep */
void func_089b6ae0(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089b6ae0u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
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
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_089b6ae0 */
}

/* func_089b80a8  0x089b80a8..0x089b829c  500 bytes, source=fde */
void func_089b80a8(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089b80a8u);
    c->r[29] = c->r[29] + 0xffffffd0u;
    mem_w32(ram, c->r[29] + 0x00000024u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000020u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_wf32(ram, c->r[30] + 0x00000004u, c->f[12]);
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[5]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000064u);
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
    { c->r[31] = 0x089b80d8u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u); func_089c6b50(c, ram); }
    { int _c = (c->r[2] != 0u); if (_c) goto L_089b80e8; }
    { mem_w32(ram, c->r[30] + 0x00000018u, 0u); goto L_089b8284; }
L_089b80e8:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = c->r[2] + 0x00000050u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[1] = 0x08a80000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0x00002e40u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000004u);
    c->f[1] = c->f[1] * c->f[0];
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000090u);
    c->f[0] = c->f[1] * c->f[0];
    c->r[4] = c->r[3] + 0u;
    { c->r[31] = 0x089b8118u; c->f[12] = c->f[0]; func_089b4d78(c, ram); }
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x089b8128u; c->r[5] = 0u + 0x00000001u; func_089b8454(c, ram); }
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000004u);
    c->f[0] = u2f(0u);
    alx_c_cond_s(c, 12, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_089b8148; }
    { goto L_089b827c; }
L_089b8148:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000088u);
    c->r[2] = c->r[2] & 0x0080u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_089b81cc; }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x089b8168u; c->r[5] = 0u + 0u; func_089b9be8(c, ram); }
    c->r[2] = c->r[2] + 0x00000010u;
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x00000088u);
    c->r[2] = 0x00010000u;
    c->r[2] = c->r[3] & c->r[2];
    { int _c = (c->r[2] == 0u); if (_c) goto L_089b81b0; }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000000u);
    c->f[0] = mem_rf32(ram, c->r[3] + 0x00000008u);
    c->f[0] = c->f[1] + c->f[0];
    c->f[0] = (f32)fabsf(c->f[0]);
    mem_wf32(ram, c->r[4] + 0x00000008u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    mem_w32(ram, c->r[2] + 0x00000000u, 0u);
L_089b81b0:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->f[0] = u2f(0u);
    mem_wf32(ram, c->r[2] + 0x00000008u, c->f[0]);
    mem_wf32(ram, c->r[3] + 0x00000004u, c->f[0]);
    mem_wf32(ram, c->r[4] + 0x00000000u, c->f[0]);
L_089b81cc:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000088u);
    c->r[2] = c->r[2] & 0x0100u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_089b8240; }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x089b81ecu; c->r[5] = 0u + 0u; func_089b9be8(c, ram); }
    c->r[2] = c->r[2] + 0x00000010u;
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000000u);
    mem_wf32(ram, c->r[3] + 0x00000020u, c->f[0]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000004u);
    mem_wf32(ram, c->r[3] + 0x00000024u, c->f[0]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000008u);
    mem_wf32(ram, c->r[3] + 0x00000028u, c->f[0]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->f[0] = u2f(0u);
    mem_wf32(ram, c->r[2] + 0x00000008u, c->f[0]);
    mem_wf32(ram, c->r[3] + 0x00000004u, c->f[0]);
    mem_wf32(ram, c->r[4] + 0x00000000u, c->f[0]);
L_089b8240:
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0u + 0x00000010u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_089b827c; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = mem_r8(ram, c->r[2] + 0x0000000bu);
    c->r[2] = c->r[2] & 0x0010u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_089b827c; }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x00000088u);
    c->r[2] = 0x01000000u;
    c->r[2] = c->r[3] | c->r[2];
    mem_w32(ram, c->r[4] + 0x00000088u, c->r[2]);
L_089b827c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]);
L_089b8284:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000024u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000020u);
    { c->r[29] = c->r[29] + 0x00000030u; return; }
    return; /* fell out of func_089b80a8 */
}

/* func_089b9940  0x089b9940..0x089b9a20  224 bytes, source=fde */
void func_089b9940(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089b9940u);
    c->r[29] = c->r[29] + 0xffffffd0u;
    mem_w32(ram, c->r[29] + 0x00000024u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000020u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[6]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r16(ram, c->r[2] + 0x000000a8u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_089b9978; }
    c->r[2] = 0u + 0xfffffffeu;
    { mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]); goto L_089b9a08; }
L_089b9978:
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
    { c->r[31] = 0x089b99a8u; c->r[6] = mem_r32(ram, c->r[30] + 0x00000008u); func_089f50e4(c, ram); }
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000000u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_089b99f4; }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x089b99c8u; c->r[5] = mem_r32(ram, c->r[30] + 0x0000000cu); func_089b9b8c(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_089b9a00; }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000008u);
    { c->r[31] = 0x089b99e8u; c->r[6] = mem_r32(ram, c->r[30] + 0x00000010u); func_0884c6d4(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    { mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]); goto L_089b9a08; }
L_089b99f4:
    c->r[2] = 0u + 0xffffffffu;
    { mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]); goto L_089b9a08; }
L_089b9a00:
    c->r[2] = 0u + 0xfffffffeu;
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
L_089b9a08:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000024u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000020u);
    { c->r[29] = c->r[29] + 0x00000030u; return; }
    return; /* fell out of func_089b9940 */
}

/* func_089c3ab8  0x089c3ab8..0x089c3ae4  44 bytes, source=residue */
void func_089c3ab8(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089c3ab8u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[6]);
    c->r[2] = 0u + 0x00000001u;
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_089c3ab8 */
}

/* func_089c6bec  0x089c6bec..0x089c6e0c  544 bytes, source=fde */
void func_089c6bec(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089c6becu);
    c->r[29] = c->r[29] + 0xffffffd0u;
    mem_w32(ram, c->r[29] + 0x00000024u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000020u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[2] = c->r[5] + 0u;
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[6]);
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[7]);
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[8]);
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[9]);
    mem_w16(ram, c->r[30] + 0x00000004u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = c->r[2] << 3;
    c->r[2] = 0x08a60000u;
    c->r[2] = c->r[2] + 0xffffa990u;
    c->r[2] = c->r[2] + c->r[3];
    mem_w32(ram, c->r[30] + 0x0000001cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000001u);
    c->r[2] = c->r[2] << 12;
    c->r[3] = mem_r16(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[3] | c->r[2];
    mem_w16(ram, c->r[30] + 0x00000004u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000000u);
    c->r[3] = mem_r16(ram, c->r[30] + 0x00000004u);
    c->r[6] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[4] = c->r[2] + 0u;
    c->r[5] = c->r[3] + 0u;
    c->r[6] = mem_r32(ram, c->r[6] + 0x00000004u);
    c->r[7] = mem_r32(ram, c->r[30] + 0x00000010u);
    { c->r[31] = 0x089c6c70u; c->r[8] = mem_r32(ram, c->r[30] + 0x00000014u); func_089c6b7c(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_089c6df4; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000020u);
    c->r[1] = 0x08a50000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffffb388u);
    alx_c_cond_s(c, 2, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_089c6ca8; }
    { goto L_089c6d04; }
L_089c6ca8:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_089c6cec; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[4] = c->r[2] + 0x00000020u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = mem_r32(ram, c->r[3] + 0x00000000u);
    mem_w32(ram, c->r[4] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[3] + 0x00000004u);
    mem_w32(ram, c->r[4] + 0x00000004u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[3] + 0x00000008u);
    mem_w32(ram, c->r[4] + 0x00000008u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[3] + 0x0000000cu);
    mem_w32(ram, c->r[4] + 0x0000000cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    { mem_w32(ram, c->r[2] + 0x0000002cu, 0u); goto L_089c6d04; }
L_089c6cec:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = c->r[2] + 0x00000020u;
    c->r[4] = c->r[2] + 0u;
    c->f[12] = u2f(0u);
    { c->r[31] = 0x089c6d04u; func_0884bff4(c, ram); }
L_089c6d04:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000030u);
    c->r[1] = 0x08a50000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffffb388u);
    alx_c_cond_s(c, 2, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_089c6d2c; }
    { goto L_089c6ddc; }
L_089c6d2c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    { int _c = (c->r[2] == 0u); if (_c) goto L_089c6dac; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[5] = c->r[2] + 0x00000030u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[4] = c->r[2] + 0x00000040u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[3] + 0x00000000u);
    mem_w32(ram, c->r[4] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[3] + 0x00000004u);
    mem_w32(ram, c->r[4] + 0x00000004u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[3] + 0x00000008u);
    mem_w32(ram, c->r[4] + 0x00000008u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[3] + 0x0000000cu);
    mem_w32(ram, c->r[4] + 0x0000000cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[3] = c->r[2] + 0x00000040u;
    c->r[2] = mem_r32(ram, c->r[3] + 0x00000000u);
    mem_w32(ram, c->r[5] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[3] + 0x00000004u);
    mem_w32(ram, c->r[5] + 0x00000004u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[3] + 0x00000008u);
    mem_w32(ram, c->r[5] + 0x00000008u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[3] + 0x0000000cu);
    mem_w32(ram, c->r[5] + 0x0000000cu, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->f[0] = u2f(0u);
    mem_wf32(ram, c->r[2] + 0x0000004cu, c->f[0]);
    { mem_wf32(ram, c->r[3] + 0x0000003cu, c->f[0]); goto L_089c6ddc; }
L_089c6dac:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = c->r[2] + 0x00000030u;
    c->r[4] = c->r[2] + 0u;
    c->f[12] = u2f(0u);
    { c->r[31] = 0x089c6dc4u; func_0884bff4(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = c->r[2] + 0x00000040u;
    c->r[4] = c->r[2] + 0u;
    c->f[12] = u2f(0u);
    { c->r[31] = 0x089c6ddcu; func_0884bff4(c, ram); }
L_089c6ddc:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000002u);
    mem_w8(ram, c->r[3] + 0x000000cau, c->r[2]);
    mem_w8(ram, c->r[4] + 0x000000cbu, c->r[2]);
L_089c6df4:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000024u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000020u);
    { c->r[29] = c->r[29] + 0x00000030u; return; }
    return; /* fell out of func_089c6bec */
}

/* func_089c93e4  0x089c93e4..0x089c965c  632 bytes, source=sweep */
void func_089c93e4(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089c93e4u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = 0u + 0x00000002u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_089c952c; }
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[4] = mem_r32(ram, c->r[2] + 0x00001b7cu);
    c->r[2] = mem_r32(ram, c->r[3] + 0x00000130u);
    c->r[2] = c->r[4] + c->r[2];
    mem_w32(ram, c->r[5] + 0x00001b7cu, c->r[2]);
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[4] = mem_r32(ram, c->r[2] + 0x00001b80u);
    c->r[2] = mem_r32(ram, c->r[3] + 0x00000138u);
    c->r[2] = c->r[4] + c->r[2];
    mem_w32(ram, c->r[5] + 0x00001b80u, c->r[2]);
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[4] = mem_r32(ram, c->r[2] + 0x00001b84u);
    c->r[2] = mem_r32(ram, c->r[3] + 0x00000134u);
    c->r[2] = c->r[4] + c->r[2];
    mem_w32(ram, c->r[5] + 0x00001b84u, c->r[2]);
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[4] = mem_r32(ram, c->r[2] + 0x00001b88u);
    c->r[2] = mem_r32(ram, c->r[3] + 0x0000013cu);
    c->r[2] = c->r[4] + c->r[2];
    mem_w32(ram, c->r[5] + 0x00001b88u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x00001b7cu);
    c->r[2] = 0x3b9a0000u;
    c->r[2] = c->r[2] | 0xc9ffu;
    c->r[2] = (c->r[2] < c->r[3]) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_089c94a4; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = 0x3b9a0000u;
    c->r[2] = c->r[2] | 0xc9ffu;
    mem_w32(ram, c->r[3] + 0x00001b7cu, c->r[2]);
L_089c94a4:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x00001b80u);
    c->r[2] = 0x3b9a0000u;
    c->r[2] = c->r[2] | 0xc9ffu;
    c->r[2] = (c->r[2] < c->r[3]) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_089c94d0; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = 0x3b9a0000u;
    c->r[2] = c->r[2] | 0xc9ffu;
    mem_w32(ram, c->r[3] + 0x00001b80u, c->r[2]);
L_089c94d0:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x00001b84u);
    c->r[2] = 0x3b9a0000u;
    c->r[2] = c->r[2] | 0xc9ffu;
    c->r[2] = (c->r[2] < c->r[3]) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_089c94fc; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = 0x3b9a0000u;
    c->r[2] = c->r[2] | 0xc9ffu;
    mem_w32(ram, c->r[3] + 0x00001b84u, c->r[2]);
L_089c94fc:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x00001b88u);
    c->r[2] = 0x3b9a0000u;
    c->r[2] = c->r[2] | 0xc9ffu;
    c->r[2] = (c->r[2] < c->r[3]) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_089c964c; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = 0x3b9a0000u;
    c->r[2] = c->r[2] | 0xc9ffu;
    { mem_w32(ram, c->r[3] + 0x00001b88u, c->r[2]); goto L_089c964c; }
L_089c952c:
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[4] = mem_r32(ram, c->r[2] + 0x000002e4u);
    c->r[2] = mem_r32(ram, c->r[3] + 0x00000130u);
    c->r[2] = c->r[4] + c->r[2];
    mem_w32(ram, c->r[5] + 0x000002e4u, c->r[2]);
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[4] = mem_r32(ram, c->r[2] + 0x000002e8u);
    c->r[2] = mem_r32(ram, c->r[3] + 0x00000138u);
    c->r[2] = c->r[4] + c->r[2];
    mem_w32(ram, c->r[5] + 0x000002e8u, c->r[2]);
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[4] = mem_r32(ram, c->r[2] + 0x000002ecu);
    c->r[2] = mem_r32(ram, c->r[3] + 0x00000134u);
    c->r[2] = c->r[4] + c->r[2];
    mem_w32(ram, c->r[5] + 0x000002ecu, c->r[2]);
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[4] = mem_r32(ram, c->r[2] + 0x000002f0u);
    c->r[2] = mem_r32(ram, c->r[3] + 0x0000013cu);
    c->r[2] = c->r[4] + c->r[2];
    mem_w32(ram, c->r[5] + 0x000002f0u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x000002e4u);
    c->r[2] = 0x3b9a0000u;
    c->r[2] = c->r[2] | 0xc9ffu;
    c->r[2] = (c->r[2] < c->r[3]) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_089c95c8; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = 0x3b9a0000u;
    c->r[2] = c->r[2] | 0xc9ffu;
    mem_w32(ram, c->r[3] + 0x000002e4u, c->r[2]);
L_089c95c8:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x000002e8u);
    c->r[2] = 0x3b9a0000u;
    c->r[2] = c->r[2] | 0xc9ffu;
    c->r[2] = (c->r[2] < c->r[3]) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_089c95f4; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = 0x3b9a0000u;
    c->r[2] = c->r[2] | 0xc9ffu;
    mem_w32(ram, c->r[3] + 0x000002e8u, c->r[2]);
L_089c95f4:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x000002ecu);
    c->r[2] = 0x3b9a0000u;
    c->r[2] = c->r[2] | 0xc9ffu;
    c->r[2] = (c->r[2] < c->r[3]) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_089c9620; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = 0x3b9a0000u;
    c->r[2] = c->r[2] | 0xc9ffu;
    mem_w32(ram, c->r[3] + 0x000002ecu, c->r[2]);
L_089c9620:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x000002f0u);
    c->r[2] = 0x3b9a0000u;
    c->r[2] = c->r[2] | 0xc9ffu;
    c->r[2] = (c->r[2] < c->r[3]) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_089c964c; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = 0x3b9a0000u;
    c->r[2] = c->r[2] | 0xc9ffu;
    mem_w32(ram, c->r[3] + 0x000002f0u, c->r[2]);
L_089c964c:
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_089c93e4 */
}

/* func_089cb638  0x089cb638..0x089cb780  328 bytes, source=fde */
void func_089cb638(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089cb638u);
    c->r[29] = c->r[29] + 0xffffffc0u;
    mem_w32(ram, c->r[29] + 0x00000038u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000034u, c->r[30]);
    mem_w32(ram, c->r[29] + 0x00000030u, c->r[16]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    c->r[3] = c->r[6] + 0u;
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[7]);
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[8]);
    c->r[2] = c->r[9] + 0u;
    mem_w8(ram, c->r[30] + 0x00000008u, c->r[3]);
    mem_w16(ram, c->r[30] + 0x00000014u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000010u);
    mem_w32(ram, c->r[30] + 0x0000001cu, c->r[2]);
    mem_w32(ram, c->r[30] + 0x00000018u, 0u);
L_089cb67c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000000cu);
    c->r[2] = ((s32)c->r[3] < (s32)c->r[2]) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_089cb69c; }
    { goto L_089cb760; }
L_089cb69c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000018u);
    c->f[0] = u2f(0u);
    alx_c_cond_s(c, 12, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_089cb744; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    { int _c = (c->r[2] == 0u); if (_c) goto L_089cb6e0; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_089cb6e0; }
    c->r[4] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[5] = mem_r32(ram, c->r[30] + 0x0000000cu);
    { c->r[31] = 0x089cb6e0u; c->r[6] = mem_r32(ram, c->r[30] + 0x00000010u); func_08a19db8(c, ram); }
L_089cb6e0:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[16] = c->r[2] + 0x0000001cu;
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x089cb6f4u; c->r[5] = mem_r32(ram, c->r[30] + 0x00000004u); func_089cb780(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000020u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    mem_w32(ram, c->r[16] + 0x00000000u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[30] + 0x00000014u);
    c->r[2] = c->r[2] + 0x00000001u;
    c->f[0] = u2f(c->r[2]);
    c->f[0] = (f32)(s32)f2u(c->f[0]);
    mem_wf32(ram, c->r[3] + 0x00000018u, c->f[0]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[2] ^ 0x0000u;
    c->r[2] = (c->r[2] < 0x00000001u) ? 1u : 0u;
    mem_w8(ram, c->r[3] + 0x00000016u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = mem_r8(ram, c->r[30] + 0x00000008u);
    mem_w8(ram, c->r[3] + 0x00000017u, c->r[2]);
    c->r[2] = 0u + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000024u, c->r[2]); goto L_089cb764; }
L_089cb744:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = c->r[2] + 0x00000001u;
    mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = c->r[2] + 0x00000020u;
    { mem_w32(ram, c->r[30] + 0x0000001cu, c->r[2]); goto L_089cb67c; }
L_089cb760:
    mem_w32(ram, c->r[30] + 0x00000024u, 0u);
L_089cb764:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000024u);
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000038u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000034u);
    c->r[16] = mem_r32(ram, c->r[29] + 0x00000030u);
    { c->r[29] = c->r[29] + 0x00000040u; return; }
    return; /* fell out of func_089cb638 */
}

/* func_089d012c  0x089d012c..0x089d04e4  952 bytes, source=sweep */
void func_089d012c(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089d012cu);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[2] = c->r[5] + 0u;
    c->r[3] = c->r[6] + 0u;
    c->r[4] = c->r[7] + 0u;
    c->r[5] = c->r[8] + 0u;
    mem_w16(ram, c->r[30] + 0x00000004u, c->r[2]);
    mem_w16(ram, c->r[30] + 0x00000006u, c->r[3]);
    mem_w16(ram, c->r[30] + 0x00000008u, c->r[4]);
    mem_w16(ram, c->r[30] + 0x0000000au, c->r[5]);
    c->r[4] = 0u + 0x0000001eu;
    { c->r[31] = 0x089d016cu; c->r[5] = 0u + 0x00000010u; func_0881a1d4(c, ram); }
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r16(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[2] + 0xfffffffcu;
    mem_w16(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r16(ram, c->r[30] + 0x00000006u);
    c->r[2] = c->r[2] + 0xfffffffeu;
    mem_w16(ram, c->r[3] + 0x00000002u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[4] = c->r[2] + 0x00000006u;
    c->r[3] = mem_r16(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r16(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = c->r[2] + 0x00000003u;
    mem_w16(ram, c->r[4] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = c->r[2] + 0x00000006u;
    c->r[2] = mem_r16(ram, c->r[30] + 0x00000006u);
    c->r[2] = c->r[2] + 0xfffffffeu;
    mem_w16(ram, c->r[3] + 0x00000002u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[4] = c->r[2] + 0x0000000cu;
    c->r[3] = mem_r16(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r16(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = c->r[2] + 0x00000003u;
    mem_w16(ram, c->r[4] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[4] = c->r[2] + 0x0000000cu;
    c->r[3] = mem_r16(ram, c->r[30] + 0x00000006u);
    c->r[2] = mem_r16(ram, c->r[30] + 0x0000000au);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = c->r[2] + 0x00000001u;
    mem_w16(ram, c->r[4] + 0x00000002u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = c->r[2] + 0x00000012u;
    c->r[2] = mem_r16(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[2] + 0xfffffffcu;
    mem_w16(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[4] = c->r[2] + 0x00000012u;
    c->r[3] = mem_r16(ram, c->r[30] + 0x00000006u);
    c->r[2] = mem_r16(ram, c->r[30] + 0x0000000au);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = c->r[2] + 0x00000001u;
    mem_w16(ram, c->r[4] + 0x00000002u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = c->r[2] + 0x00000018u;
    c->r[2] = mem_r16(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[2] + 0xfffffffcu;
    mem_w16(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = c->r[2] + 0x00000018u;
    c->r[2] = mem_r16(ram, c->r[30] + 0x00000006u);
    c->r[2] = c->r[2] + 0xfffffffeu;
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
    { c->r[31] = 0x089d02acu; c->r[5] = c->r[2] + 0u; func_089d20f0(c, ram); }
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000700u);
    c->r[2] = 0u + 0x000002e8u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[4] = c->lo;
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
    { c->r[31] = 0x089d0308u; c->r[5] = c->r[2] + 0u; func_089d20f0(c, ram); }
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000700u);
    c->r[2] = 0u + 0x000002e8u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[4] = c->lo;
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
    { c->r[31] = 0x089d0354u; c->r[5] = c->r[5] | 0x0005u; func_089d20f0(c, ram); }
    c->r[4] = 0u + 0x0000000cu;
    { c->r[31] = 0x089d0360u; c->r[5] = 0u + 0x00000010u; func_0881a1d4(c, ram); }
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = mem_r16(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r16(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = c->r[2] + 0x00000003u;
    mem_w16(ram, c->r[4] + 0x00000000u, c->r[2]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = mem_r16(ram, c->r[30] + 0x00000006u);
    c->r[2] = mem_r16(ram, c->r[30] + 0x0000000au);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = c->r[2] + 0x00000001u;
    mem_w16(ram, c->r[4] + 0x00000002u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[4] = c->r[2] + 0x00000006u;
    c->r[3] = mem_r16(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r16(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = c->r[2] + 0x00000004u;
    mem_w16(ram, c->r[4] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[4] = c->r[2] + 0x00000006u;
    c->r[3] = mem_r16(ram, c->r[30] + 0x00000006u);
    c->r[2] = mem_r16(ram, c->r[30] + 0x0000000au);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = c->r[2] + 0x00000002u;
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
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] >> 24;
    c->r[2] = c->r[2] & 0x000fu;
    c->r[3] = c->r[2] << 16;
    c->r[2] = 0x10000000u;
    c->r[2] = c->r[3] | c->r[2];
    { c->r[31] = 0x089d0428u; c->r[5] = c->r[2] + 0u; func_089d20f0(c, ram); }
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000700u);
    c->r[2] = 0u + 0x000002e8u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[4] = c->lo;
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
    { c->r[31] = 0x089d0484u; c->r[5] = c->r[2] + 0u; func_089d20f0(c, ram); }
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000700u);
    c->r[2] = 0u + 0x000002e8u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[4] = c->lo;
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
    { c->r[31] = 0x089d04d0u; c->r[5] = c->r[5] | 0x0002u; func_089d20f0(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_089d012c */
}

/* func_089d2a9c  0x089d2a9c..0x089d2cbc  544 bytes, source=sweep */
void func_089d2a9c(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089d2a9cu);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[6]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = (c->r[2] < 0x00000016u) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_089d2ca8; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08a50000u;
    c->r[2] = c->r[2] + 0xffffb754u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    { u32 _t = c->r[2]; switch (_t) { case 0x089d2ae8u: goto L_089d2ae8; case 0x089d2afcu: goto L_089d2afc; case 0x089d2b10u: goto L_089d2b10; case 0x089d2b24u: goto L_089d2b24; case 0x089d2b38u: goto L_089d2b38; case 0x089d2b4cu: goto L_089d2b4c; case 0x089d2b60u: goto L_089d2b60; case 0x089d2b74u: goto L_089d2b74; case 0x089d2b88u: goto L_089d2b88; case 0x089d2b9cu: goto L_089d2b9c; case 0x089d2bb0u: goto L_089d2bb0; case 0x089d2bc4u: goto L_089d2bc4; case 0x089d2bd8u: goto L_089d2bd8; case 0x089d2becu: goto L_089d2bec; case 0x089d2c04u: goto L_089d2c04; case 0x089d2c1cu: goto L_089d2c1c; case 0x089d2c34u: goto L_089d2c34; case 0x089d2c4cu: goto L_089d2c4c; case 0x089d2c60u: goto L_089d2c60; case 0x089d2c74u: goto L_089d2c74; case 0x089d2c88u: goto L_089d2c88; case 0x089d2c9cu: goto L_089d2c9c; default: recomp_trap_unknown_indirect(c, ram, 0x089d2ae0u, _t); return; } }
L_089d2ae8:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x089d2af4u; c->r[5] = mem_r32(ram, c->r[30] + 0x00000008u); func_089d2cbc(c, ram); }
    { goto L_089d2ca8; }
L_089d2afc:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x089d2b08u; c->r[5] = mem_r32(ram, c->r[30] + 0x00000008u); func_089d2d00(c, ram); }
    { goto L_089d2ca8; }
L_089d2b10:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x089d2b1cu; c->r[5] = mem_r32(ram, c->r[30] + 0x00000008u); func_089d314c(c, ram); }
    { goto L_089d2ca8; }
L_089d2b24:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x089d2b30u; c->r[5] = mem_r32(ram, c->r[30] + 0x00000008u); func_089d2d44(c, ram); }
    { goto L_089d2ca8; }
L_089d2b38:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x089d2b44u; c->r[5] = mem_r32(ram, c->r[30] + 0x00000008u); func_089d2d88(c, ram); }
    { goto L_089d2ca8; }
L_089d2b4c:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x089d2b58u; c->r[5] = mem_r32(ram, c->r[30] + 0x00000008u); func_089d2dcc(c, ram); }
    { goto L_089d2ca8; }
L_089d2b60:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x089d2b6cu; c->r[5] = mem_r32(ram, c->r[30] + 0x00000008u); func_089d2e10(c, ram); }
    { goto L_089d2ca8; }
L_089d2b74:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x089d2b80u; c->r[5] = mem_r32(ram, c->r[30] + 0x00000008u); func_089d2e54(c, ram); }
    { goto L_089d2ca8; }
L_089d2b88:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x089d2b94u; c->r[5] = mem_r32(ram, c->r[30] + 0x00000008u); func_089d2e98(c, ram); }
    { goto L_089d2ca8; }
L_089d2b9c:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x089d2ba8u; c->r[5] = mem_r32(ram, c->r[30] + 0x00000008u); func_089d2edc(c, ram); }
    { goto L_089d2ca8; }
L_089d2bb0:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x089d2bbcu; c->r[5] = mem_r32(ram, c->r[30] + 0x00000008u); func_089d2f20(c, ram); }
    { goto L_089d2ca8; }
L_089d2bc4:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x089d2bd0u; c->r[5] = mem_r32(ram, c->r[30] + 0x00000008u); func_089d2f64(c, ram); }
    { goto L_089d2ca8; }
L_089d2bd8:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x089d2be4u; c->r[5] = mem_r32(ram, c->r[30] + 0x00000008u); func_089d2fa8(c, ram); }
    { goto L_089d2ca8; }
L_089d2bec:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = 0u + 0u;
    { c->r[31] = 0x089d2bfcu; c->r[6] = mem_r32(ram, c->r[30] + 0x00000008u); func_089d2fec(c, ram); }
    { goto L_089d2ca8; }
L_089d2c04:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = 0u + 0x00000001u;
    { c->r[31] = 0x089d2c14u; c->r[6] = mem_r32(ram, c->r[30] + 0x00000008u); func_089d2fec(c, ram); }
    { goto L_089d2ca8; }
L_089d2c1c:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = 0u + 0x00000002u;
    { c->r[31] = 0x089d2c2cu; c->r[6] = mem_r32(ram, c->r[30] + 0x00000008u); func_089d2fec(c, ram); }
    { goto L_089d2ca8; }
L_089d2c34:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = 0u + 0x00000003u;
    { c->r[31] = 0x089d2c44u; c->r[6] = mem_r32(ram, c->r[30] + 0x00000008u); func_089d2fec(c, ram); }
    { goto L_089d2ca8; }
L_089d2c4c:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x089d2c58u; c->r[5] = mem_r32(ram, c->r[30] + 0x00000008u); func_089d303c(c, ram); }
    { goto L_089d2ca8; }
L_089d2c60:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x089d2c6cu; c->r[5] = mem_r32(ram, c->r[30] + 0x00000008u); func_089d3080(c, ram); }
    { goto L_089d2ca8; }
L_089d2c74:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x089d2c80u; c->r[5] = mem_r32(ram, c->r[30] + 0x00000008u); func_089d30c4(c, ram); }
    { goto L_089d2ca8; }
L_089d2c88:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x089d2c94u; c->r[5] = mem_r32(ram, c->r[30] + 0x00000008u); func_089d3108(c, ram); }
    { goto L_089d2ca8; }
L_089d2c9c:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x089d2ca8u; c->r[5] = mem_r32(ram, c->r[30] + 0x00000008u); func_089d31f8(c, ram); }
L_089d2ca8:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_089d2a9c */
}

/* func_089d3b88  0x089d3b88..0x089d3bd4  76 bytes, source=fde */
void func_089d3b88(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089d3b88u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[6]);
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[7]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[4] = mem_r32(ram, c->r[2] + 0x0000001cu);
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[6] = mem_r32(ram, c->r[30] + 0x00000008u);
    { c->r[31] = 0x089d3bc0u; c->r[7] = mem_r32(ram, c->r[30] + 0x0000000cu); hle_dispatch_stub(c, ram, 0x08a24bdcu); /* sceNetAdhocMatchingSelectTarget */ }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_089d3b88 */
}

/* func_089d56dc  0x089d56dc..0x089d5704  40 bytes, source=sweep */
void func_089d56dc(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089d56dcu);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[6]);
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_089d56dc */
}

/* func_089d6c8c  0x089d6c8c..0x089d6d78  236 bytes, source=fde */
void func_089d6c8c(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089d6c8cu);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    mem_w32(ram, c->r[30] + 0x00000008u, 0u);
L_089d6ca8:
    { c->r[31] = 0x089d6cb0u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000004u); func_08a1b008(c, ram); }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = ((s32)c->r[3] < (s32)c->r[2]) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_089d6cc8; }
    { goto L_089d6d64; }
L_089d6cc8:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000000u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000061u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_089d6d24; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000000u);
    c->r[2] = ((s32)c->r[2] < (s32)0x0000007bu) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_089d6d24; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[4] = c->r[3] + c->r[2];
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000000u);
    c->r[2] = c->r[2] + 0xffffffe0u;
    mem_w8(ram, c->r[4] + 0x00000000u, c->r[2]);
L_089d6d24:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000000u);
    c->r[2] = 0u + 0x0000005cu;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_089d6d54; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[3] = c->r[3] + c->r[2];
    c->r[2] = 0u + 0x0000002fu;
    mem_w8(ram, c->r[3] + 0x00000000u, c->r[2]);
L_089d6d54:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]); goto L_089d6ca8; }
L_089d6d64:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_089d6c8c */
}

/* func_089d8714  0x089d8714..0x089d87d4  192 bytes, source=sweep */
void func_089d8714(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089d8714u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[6]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_089d87b0; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000000u);
    c->r[2] = 0u + 0x00000018u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_089d876c; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000000u);
    c->r[2] = c->r[2] + 0xffffffffu;
    mem_w8(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[2] = 0u + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]); goto L_089d87c0; }
L_089d876c:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000000u);
    c->r[2] = c->r[2] + 0xffffffffu;
    mem_w8(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000000u);
    { int _c = ((s32)c->r[2] >= 0); if (_c) goto L_089d87a8; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = 0u + 0x00000008u;
    mem_w8(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[2] = 0u + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]); goto L_089d87c0; }
L_089d87a8:
    { mem_w32(ram, c->r[30] + 0x0000000cu, 0u); goto L_089d87c0; }
L_089d87b0:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = 0u + 0x00000018u;
    mem_w8(ram, c->r[3] + 0x00000000u, c->r[2]);
    mem_w32(ram, c->r[30] + 0x0000000cu, 0u);
L_089d87c0:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_089d8714 */
}

/* func_089d98dc  0x089d98dc..0x089d999c  192 bytes, source=sweep */
void func_089d98dc(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089d98dcu);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[2] = 0u + 0x00000002u;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_089d990c; }
    c->r[2] = 0u + 0xffffffffu;
    { mem_w32(ram, c->r[30] + 0x00000004u, c->r[2]); goto L_089d9988; }
L_089d990c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000004u);
    { int _c = ((s32)c->r[2] <= 0); if (_c) goto L_089d9928; }
    c->r[2] = 0u + 0xffffffffu;
    { mem_w32(ram, c->r[30] + 0x00000004u, c->r[2]); goto L_089d9988; }
L_089d9928:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x0000006cu);
    c->r[2] = 0u + 0x00000002u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_089d997c; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000061cu);
    { int _c = (c->r[2] != 0u); if (_c) goto L_089d995c; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000061cu);
    { mem_w32(ram, c->r[30] + 0x00000004u, c->r[2]); goto L_089d9988; }
L_089d995c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x0000061cu);
    c->r[2] = 0u + 0x00000001u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_089d997c; }
    c->r[2] = 0u + 0xfffffffeu;
    { mem_w32(ram, c->r[30] + 0x00000004u, c->r[2]); goto L_089d9988; }
L_089d997c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000006cu);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[2]);
L_089d9988:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_089d98dc */
}

/* func_089daaa4  0x089daaa4..0x089dab94  240 bytes, source=fde */
void func_089daaa4(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089daaa4u);
    c->r[29] = c->r[29] + 0xffffffd0u;
    mem_w32(ram, c->r[29] + 0x00000024u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000020u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    { c->r[31] = 0x089daac8u; c->r[4] = mem_r32(ram, c->r[2] + 0x00000000u); func_089db14c(c, ram); }
    { int _c = (c->r[2] != 0u); if (_c) goto L_089daadc; }
    c->r[2] = 0u + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]); goto L_089dab7c; }
L_089daadc:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = c->r[30] + 0x00000008u;
    c->r[4] = mem_r32(ram, c->r[2] + 0x00000000u);
    { c->r[31] = 0x089daaf0u; c->r[5] = c->r[3] + 0u; func_089dafb0(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[1] = 0x08b90000u;
    mem_w32(ram, c->r[1] + 0x0000069cu, c->r[2]);
    c->r[2] = c->r[30] + 0x00000010u;
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = 0u + 0x00000200u;
    c->r[6] = 0x08b90000u;
    c->r[6] = c->r[6] + 0x0000069cu;
    { c->r[31] = 0x089dab18u; c->r[7] = c->r[2] + 0u; hle_dispatch_stub(c, ram, 0x08a24ad4u); /* sceMpegAvcDecodeStop */ }
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_089dab40; }
    c->r[4] = 0x08a50000u;
    c->r[4] = c->r[4] + 0xffffbbd4u;
    { c->r[31] = 0x089dab38u; c->r[5] = mem_r32(ram, c->r[30] + 0x00000014u); func_08a1a4c0(c, ram); }
    { goto L_089dab7c; }
L_089dab40:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    { int _c = ((s32)c->r[2] <= 0); if (_c) goto L_089dab78; }
    c->r[2] = c->r[30] + 0x0000000cu;
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000004u);
    { c->r[31] = 0x089dab5cu; c->r[5] = c->r[2] + 0u; func_089da628(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[4] = mem_r32(ram, c->r[2] + 0x00000000u);
    { c->r[31] = 0x089dab6cu; c->r[5] = mem_r32(ram, c->r[30] + 0x0000000cu); func_089db028(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    { c->r[31] = 0x089dab78u; c->r[4] = mem_r32(ram, c->r[2] + 0x00000000u); func_089db0bc(c, ram); }
L_089dab78:
    mem_w32(ram, c->r[30] + 0x00000014u, 0u);
L_089dab7c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000024u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000020u);
    { c->r[29] = c->r[29] + 0x00000030u; return; }
    return; /* fell out of func_089daaa4 */
}

/* func_089dc044  0x089dc044..0x089dc088  68 bytes, source=sweep */
void func_089dc044(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089dc044u);
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
    { c->r[31] = 0x089dc074u; c->r[5] = c->r[2] + 0u; func_089db8b8(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_089dc044 */
}

/* func_089ddc50  0x089ddc50..0x089ddc9c  76 bytes, source=fde */
void func_089ddc50(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089ddc50u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[6]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[4] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000004u);
    { c->r[31] = 0x089ddc80u; c->r[6] = mem_r32(ram, c->r[30] + 0x00000008u); hle_dispatch_stub(c, ram, 0x08a246d4u); /* sceIoRead */ }
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_089ddc50 */
}

/* func_089dff38  0x089dff38..0x089e0008  208 bytes, source=sweep */
void func_089dff38(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089dff38u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_089dffac; }
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000700u);
    c->r[2] = 0u + 0x000002e8u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[4] = c->lo;
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
    { c->r[31] = 0x089dffa4u; c->r[5] = 0u + 0x00000005u; func_089e2288(c, ram); }
    { goto L_089dfff4; }
L_089dffac:
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000700u);
    c->r[2] = 0u + 0x000002e8u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[4] = c->lo;
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
    { c->r[31] = 0x089dfff4u; c->r[5] = 0u + 0x00000005u; func_089e22c4(c, ram); }
L_089dfff4:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_089dff38 */
}

/* func_089e1ef0  0x089e1ef0..0x089e1f30  64 bytes, source=sweep */
void func_089e1ef0(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089e1ef0u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_wf32(ram, c->r[30] + 0x00000004u, c->f[12]);
    mem_wf32(ram, c->r[30] + 0x00000008u, c->f[13]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->f[12] = mem_rf32(ram, c->r[30] + 0x00000004u);
    { c->r[31] = 0x089e1f1cu; c->f[13] = mem_rf32(ram, c->r[30] + 0x00000008u); func_089e38bc(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_089e1ef0 */
}

/* func_089e313c  0x089e313c..0x089e3240  260 bytes, source=sweep */
void func_089e313c(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089e313cu);
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
    { c->r[31] = 0x089e31d8u; c->r[5] = c->r[2] + 0u; func_089e1908(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[3] = c->r[2] >> 8;
    c->r[2] = 0x43000000u;
    c->r[2] = c->r[3] | c->r[2];
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x089e31f4u; c->r[5] = c->r[2] + 0u; func_089e1908(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[3] = c->r[2] >> 8;
    c->r[2] = 0x45000000u;
    c->r[2] = c->r[3] | c->r[2];
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x089e3210u; c->r[5] = c->r[2] + 0u; func_089e1908(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[3] = c->r[2] >> 8;
    c->r[2] = 0x46000000u;
    c->r[2] = c->r[3] | c->r[2];
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x089e322cu; c->r[5] = c->r[2] + 0u; func_089e1908(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000034u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000030u);
    { c->r[29] = c->r[29] + 0x00000040u; return; }
    return; /* fell out of func_089e313c */
}

/* func_089e3fd4  0x089e3fd4..0x089e40d4  256 bytes, source=sweep */
void func_089e3fd4(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089e3fd4u);
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
    return; /* fell out of func_089e3fd4 */
}

/* func_089e4f3c  0x089e4f3c..0x089e4fe0  164 bytes, source=sweep */
void func_089e4f3c(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089e4f3cu);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    c->r[3] = 0u + 0x00000001u;
    c->r[2] = 0x08b90000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000700u);
    c->r[2] = c->r[3] - c->r[2];
    c->r[1] = 0x08b90000u;
    mem_w32(ram, c->r[1] + 0x00000700u, c->r[2]);
    c->r[2] = 0x08b90000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000700u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_089e4f88; }
    c->r[2] = 0x00040000u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] | 0x4000u;
    { mem_w32(ram, c->r[30] + 0x00000000u, c->r[2]); goto L_089e4f8c; }
L_089e4f88:
    mem_w32(ram, c->r[30] + 0x00000000u, 0u);
L_089e4f8c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[1] = 0x08b90000u;
    mem_w32(ram, c->r[1] + 0x0000542cu, c->r[2]);
    c->r[2] = 0x08b90000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000700u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_089e4fc0; }
    c->r[2] = 0x00040000u;
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[2] | 0x4000u;
    { mem_w32(ram, c->r[30] + 0x00000004u, c->r[2]); goto L_089e4fc4; }
L_089e4fc0:
    mem_w32(ram, c->r[30] + 0x00000004u, 0u);
L_089e4fc4:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[1] = 0x08b90000u;
    mem_w32(ram, c->r[1] + 0x00005430u, c->r[2]);
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_089e4f3c */
}

/* func_089ea534  0x089ea534..0x089ea584  80 bytes, source=sweep */
void func_089ea534(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089ea534u);
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
    c->r[2] = 0x56000000u;
    c->r[2] = c->r[3] | c->r[2];
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x089ea570u; c->r[5] = c->r[2] + 0u; func_089ea03c(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_089ea534 */
}

/* func_089eb3f4  0x089eb3f4..0x089eb424  48 bytes, source=sweep */
void func_089eb3f4(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089eb3f4u);
    c->r[29] = c->r[29] + 0xfffffff0u;
    mem_w32(ram, c->r[29] + 0x00000004u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000000u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    c->r[4] = 0u + 0x00000001u;
    { c->r[31] = 0x089eb410u; c->r[5] = 0u | 0xffffu; func_089e9f68(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000004u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000000u);
    { c->r[29] = c->r[29] + 0x00000010u; return; }
    return; /* fell out of func_089eb3f4 */
}

/* func_089ef6c4  0x089ef6c4..0x089eff48  2180 bytes, source=fde */
void func_089ef6c4(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089ef6c4u);
    c->r[29] = c->r[29] + 0xffffffc0u;
    mem_w32(ram, c->r[29] + 0x00000034u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000030u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[6]);
    mem_w32(ram, c->r[30] + 0x0000000cu, 0u);
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000700u);
    c->r[2] = 0u + 0x000002e8u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[4] = c->lo;
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
    { c->r[31] = 0x089ef72cu; c->r[5] = 0u + 0u; func_089f037c(c, ram); }
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000700u);
    c->r[2] = 0u + 0x000002e8u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[4] = c->lo;
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
    c->r[5] = 0u + 0u;
    c->r[6] = 0u + 0x00000002u;
    c->r[7] = 0x00010000u;
    c->r[7] = c->r[7] + c->r[3];
    { c->r[31] = 0x089ef788u; c->r[7] = mem_r32(ram, c->r[7] + 0xffffe880u); func_089f04c4(c, ram); }
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000700u);
    c->r[2] = 0u + 0x000002e8u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[4] = c->lo;
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
    c->r[5] = 0u + 0u;
    c->r[6] = 0u + 0x00000001u;
    c->r[7] = 0x00010000u;
    c->r[7] = c->r[7] + c->r[3];
    { c->r[31] = 0x089ef7e4u; c->r[7] = mem_r32(ram, c->r[7] + 0xffffe884u); func_089f04c4(c, ram); }
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000700u);
    c->r[2] = 0u + 0x000002e8u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[4] = c->lo;
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
    c->r[2] = 0u | 0xe870u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[5] = 0u + 0u;
    c->r[6] = 0u + 0u;
    c->r[7] = 0u + 0x00000002u;
    { c->r[31] = 0x089ef840u; c->r[8] = c->r[2] + 0u; func_089f042c(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[1] = 0x00010000u;
    c->r[1] = c->r[1] + c->r[2];
    c->r[2] = mem_r16(ram, c->r[1] + 0x000008dau);
    c->r[2] = c->r[2] & 0x0001u;
    c->r[2] = c->r[2] & 0x00ffu;
    { int _c = (c->r[2] == 0u); if (_c) goto L_089ef974; }
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000700u);
    c->r[2] = 0u + 0x000002e8u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[4] = c->lo;
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
    c->r[5] = 0u + 0x00000002u;
    c->r[6] = 0u + 0x00000002u;
    c->r[7] = 0x00010000u;
    c->r[7] = c->r[7] + c->r[3];
    { c->r[31] = 0x089ef8bcu; c->r[7] = mem_r32(ram, c->r[7] + 0xffffe8a0u); func_089f04c4(c, ram); }
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000700u);
    c->r[2] = 0u + 0x000002e8u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[4] = c->lo;
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
    c->r[5] = 0u + 0x00000002u;
    c->r[6] = 0u + 0x00000001u;
    c->r[7] = 0x00010000u;
    c->r[7] = c->r[7] + c->r[3];
    { c->r[31] = 0x089ef918u; c->r[7] = mem_r32(ram, c->r[7] + 0xffffe8a4u); func_089f04c4(c, ram); }
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000700u);
    c->r[2] = 0u + 0x000002e8u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[4] = c->lo;
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
    c->r[2] = 0u | 0xe890u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[5] = 0u + 0x00000002u;
    c->r[6] = 0u + 0u;
    c->r[7] = 0u + 0x00000002u;
    { c->r[31] = 0x089ef974u; c->r[8] = c->r[2] + 0u; func_089f042c(c, ram); }
L_089ef974:
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000700u);
    c->r[2] = 0u + 0x000002e8u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[4] = c->lo;
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
    c->r[5] = 0u + 0x00000001u;
    c->r[6] = 0u + 0x00000002u;
    c->r[7] = 0x00010000u;
    c->r[7] = c->r[7] + c->r[3];
    { c->r[31] = 0x089ef9d0u; c->r[7] = mem_r32(ram, c->r[7] + 0xffffe880u); func_089f04c4(c, ram); }
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000700u);
    c->r[2] = 0u + 0x000002e8u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[4] = c->lo;
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
    c->r[6] = 0u + 0x00000001u;
    { c->r[31] = 0x089efa20u; c->r[7] = 0u + 0u; func_089f04c4(c, ram); }
    c->r[2] = c->r[30] + 0x00000010u;
    { c->r[31] = 0x089efa2cu; c->r[4] = c->r[2] + 0u; func_08808240(c, ram); }
    c->r[4] = c->r[30] + 0x00000010u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000044u);
    c->r[5] = c->r[2] + 0x00000030u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = 0u | 0xe870u;
    c->r[2] = c->r[3] + c->r[2];
    { c->r[31] = 0x089efa50u; c->r[6] = c->r[2] + 0u; func_08820ca4(c, ram); }
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000700u);
    c->r[2] = 0u + 0x000002e8u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[4] = c->lo;
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
    c->r[5] = 0u + 0x00000001u;
    c->r[6] = 0u + 0u;
    c->r[7] = 0u + 0x00000002u;
    { c->r[31] = 0x089efaa8u; c->r[8] = c->r[3] + 0u; func_089f042c(c, ram); }
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000700u);
    c->r[2] = 0u + 0x000002e8u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[4] = c->lo;
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
    { c->r[31] = 0x089efb08u; c->r[5] = c->r[2] + 0u; func_089f0338(c, ram); }
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000700u);
    c->r[2] = 0u + 0x000002e8u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[4] = c->lo;
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
    { c->r[31] = 0x089efb68u; c->r[5] = c->r[2] + 0u; func_089f0338(c, ram); }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[2] << 2;
    c->r[3] = c->r[2] + c->r[3];
    c->r[2] = 0u | 0xe8a0u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000000cu);
    mem_w32(ram, c->r[30] + 0x00000020u, c->r[2]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = 0u + 0u;
    { c->r[31] = 0x089efb98u; c->r[6] = 0u + 0u; func_089df7a0(c, ram); }
L_089efb98:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_089efbac; }
    { goto L_089efdd4; }
L_089efbac:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[2] = mem_r16(ram, c->r[2] + 0x00000014u);
    c->r[2] = c->r[2] & 0x0001u;
    c->r[2] = c->r[2] & 0x00ffu;
    { int _c = (c->r[2] == 0u); if (_c) goto L_089efdc4; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_089efbec; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[2] = mem_r16(ram, c->r[2] + 0x00000014u);
    c->r[2] = c->r[2] & 0x0040u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_089efc08; }
    { goto L_089efdc4; }
L_089efbec:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[2] = mem_r16(ram, c->r[2] + 0x00000014u);
    c->r[2] = c->r[2] & 0x0040u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_089efc08; }
    { goto L_089efdc4; }
L_089efc08:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[2] = mem_r16(ram, c->r[2] + 0x00000014u);
    c->r[2] = c->r[2] & 0x0200u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_089efcec; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    { int _c = (c->r[2] != 0u); if (_c) goto L_089efdb8; }
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000700u);
    c->r[2] = 0u + 0x000002e8u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[4] = c->lo;
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
    c->r[5] = 0u + 0u;
    c->r[6] = 0u + 0x00000002u;
    c->r[7] = 0x00010000u;
    c->r[7] = c->r[7] + c->r[3];
    { c->r[31] = 0x089efc84u; c->r[7] = mem_r32(ram, c->r[7] + 0xffffe888u); func_089f04c4(c, ram); }
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000700u);
    c->r[2] = 0u + 0x000002e8u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[4] = c->lo;
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
    c->r[5] = 0u + 0u;
    c->r[6] = 0u + 0x00000001u;
    c->r[7] = 0x00010000u;
    c->r[7] = c->r[7] + c->r[3];
    { c->r[31] = 0x089efce0u; c->r[7] = mem_r32(ram, c->r[7] + 0xffffe88cu); func_089f04c4(c, ram); }
    c->r[2] = 0u + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]); goto L_089efdb8; }
L_089efcec:
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0u + 0x00000001u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_089efdb8; }
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000700u);
    c->r[2] = 0u + 0x000002e8u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[4] = c->lo;
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
    c->r[5] = 0u + 0u;
    c->r[6] = 0u + 0x00000002u;
    c->r[7] = 0x00010000u;
    c->r[7] = c->r[7] + c->r[3];
    { c->r[31] = 0x089efd58u; c->r[7] = mem_r32(ram, c->r[7] + 0xffffe880u); func_089f04c4(c, ram); }
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000700u);
    c->r[2] = 0u + 0x000002e8u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[4] = c->lo;
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
    c->r[5] = 0u + 0u;
    c->r[6] = 0u + 0x00000001u;
    c->r[7] = 0x00010000u;
    c->r[7] = c->r[7] + c->r[3];
    { c->r[31] = 0x089efdb4u; c->r[7] = mem_r32(ram, c->r[7] + 0xffffe884u); func_089f04c4(c, ram); }
    mem_w32(ram, c->r[30] + 0x0000000cu, 0u);
L_089efdb8:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x089efdc4u; c->r[5] = mem_r32(ram, c->r[30] + 0x00000020u); func_089eff48(c, ram); }
L_089efdc4:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000001cu);
    { mem_w32(ram, c->r[30] + 0x00000020u, c->r[2]); goto L_089efb98; }
L_089efdd4:
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0u + 0x00000001u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_089efe9c; }
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000700u);
    c->r[2] = 0u + 0x000002e8u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[4] = c->lo;
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
    c->r[5] = 0u + 0u;
    c->r[6] = 0u + 0x00000002u;
    c->r[7] = 0x00010000u;
    c->r[7] = c->r[7] + c->r[3];
    { c->r[31] = 0x089efe40u; c->r[7] = mem_r32(ram, c->r[7] + 0xffffe880u); func_089f04c4(c, ram); }
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000700u);
    c->r[2] = 0u + 0x000002e8u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[4] = c->lo;
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
    c->r[5] = 0u + 0u;
    c->r[6] = 0u + 0x00000001u;
    c->r[7] = 0x00010000u;
    c->r[7] = c->r[7] + c->r[3];
    { c->r[31] = 0x089efe9cu; c->r[7] = mem_r32(ram, c->r[7] + 0xffffe884u); func_089f04c4(c, ram); }
L_089efe9c:
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000700u);
    c->r[2] = 0u + 0x000002e8u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[4] = c->lo;
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
    { c->r[31] = 0x089efee4u; c->r[5] = 0u + 0x0000000au; func_089f03f0(c, ram); }
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000700u);
    c->r[2] = 0u + 0x000002e8u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[4] = c->lo;
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
    { c->r[31] = 0x089eff30u; c->r[5] = mem_r32(ram, c->r[5] + 0x00005420u); func_089f037c(c, ram); }
    c->r[2] = 0u + 0x00000001u;
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000034u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000030u);
    { c->r[29] = c->r[29] + 0x00000040u; return; }
    return; /* fell out of func_089ef6c4 */
}

/* func_089f0f40  0x089f0f40..0x089f0fec  172 bytes, source=sweep */
void func_089f0f40(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089f0f40u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_089f0fa0; }
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
    { c->r[31] = 0x089f0f98u; c->r[8] = mem_r32(ram, c->r[8] + 0x00000034u); func_089f10c0(c, ram); }
    { goto L_089f0fd8; }
L_089f0fa0:
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
    { c->r[31] = 0x089f0fd8u; c->r[8] = c->r[2] + 0u; func_089f10c0(c, ram); }
L_089f0fd8:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_089f0f40 */
}

/* func_089f4ea4  0x089f4ea4..0x089f4f5c  184 bytes, source=fde */
void func_089f4ea4(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089f4ea4u);
    c->r[29] = c->r[29] + 0xffffffd0u;
    mem_w32(ram, c->r[29] + 0x00000024u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000020u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    { c->r[31] = 0x089f4ec4u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u); func_089f5620(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000001cu);
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
    mem_w32(ram, c->r[30] + 0x00000010u, 0u);
L_089f4ed8:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[3] = mem_r8(ram, c->r[2] + 0x00000003u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = ((s32)c->r[2] < (s32)c->r[3]) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_089f4ef8; }
    { goto L_089f4f3c; }
L_089f4ef8:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x00000001u;
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x089f4f0cu; c->r[5] = mem_r32(ram, c->r[30] + 0x00000004u); func_08a1adb4(c, ram); }
    { int _c = (c->r[2] != 0u); if (_c) goto L_089f4f20; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    { mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]); goto L_089f4f44; }
L_089f4f20:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = c->r[2] + 0x00000001u;
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x00000030u;
    { mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]); goto L_089f4ed8; }
L_089f4f3c:
    c->r[2] = 0u + 0xffffffffu;
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
L_089f4f44:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000024u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000020u);
    { c->r[29] = c->r[29] + 0x00000030u; return; }
    return; /* fell out of func_089f4ea4 */
}

/* func_089f65a8  0x089f65a8..0x089f6924  892 bytes, source=fde */
void func_089f65a8(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089f65a8u);
    c->r[29] = c->r[29] + 0xfffffee0u;
    mem_w32(ram, c->r[29] + 0x00000114u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000110u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[2] = c->r[5] + 0u;
    c->r[3] = c->r[6] + 0u;
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[7]);
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[8]);
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[9]);
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[10]);
    mem_w16(ram, c->r[30] + 0x00000004u, c->r[2]);
    mem_w16(ram, c->r[30] + 0x00000006u, c->r[3]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = 0u + 0xffffffffu;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_089f65fc; }
    { c->r[31] = 0x089f65f4u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u); func_089f8068(c, ram); }
    { mem_w32(ram, c->r[30] + 0x0000010cu, c->r[2]); goto L_089f6604; }
L_089f65fc:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    mem_w32(ram, c->r[30] + 0x0000010cu, c->r[2]);
L_089f6604:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000010cu);
    mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = 0u + 0xffffffffu;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_089f6904; }
    c->r[2] = c->r[30] + 0x00000020u;
    { c->r[31] = 0x089f6628u; c->r[4] = c->r[2] + 0u; func_08808240(c, ram); }
    c->r[2] = mem_r16(ram, c->r[30] + 0x00000006u);
    c->r[2] = c->r[2] & 0x4000u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_089f6658; }
    c->r[2] = c->r[30] + 0x00000020u;
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x089f664cu; c->r[6] = mem_r32(ram, c->r[30] + 0x00000008u); func_089f851c(c, ram); }
    c->r[2] = c->r[30] + 0x00000020u;
    { mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]); goto L_089f669c; }
L_089f6658:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000010u;
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000008u);
    { c->r[31] = 0x089f666cu; c->r[5] = c->r[2] + 0u; func_0884d0b0(c, ram); }
    c->f[1] = c->f[0];
    c->r[1] = 0x08a50000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffffd0d4u);
    alx_c_cond_s(c, 12, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_089f6690; }
    { goto L_089f669c; }
L_089f6690:
    c->r[2] = 0u + 0xffffffffu;
    { mem_w32(ram, c->r[30] + 0x00000108u, c->r[2]); goto L_089f690c; }
L_089f669c:
    c->r[2] = c->r[30] + 0x00000030u;
    c->r[1] = 0x08a50000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffffd0d8u);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = c->r[2] + 0u;
    c->r[6] = mem_r32(ram, c->r[30] + 0x00000008u);
    { c->r[31] = 0x089f66bcu; c->f[12] = c->f[0]; func_089f847c(c, ram); }
    c->r[2] = c->r[30] + 0x00000040u;
    c->r[1] = 0x08a50000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffffd0d8u);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = c->r[2] + 0u;
    c->r[6] = mem_r32(ram, c->r[30] + 0x0000000cu);
    { c->r[31] = 0x089f66dcu; c->f[12] = c->f[0]; func_089f847c(c, ram); }
    c->r[2] = c->r[30] + 0x00000050u;
    c->r[1] = 0x08a50000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffffd0dcu);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = c->r[2] + 0u;
    c->r[6] = mem_r32(ram, c->r[30] + 0x00000010u);
    { c->r[31] = 0x089f66fcu; c->f[12] = c->f[0]; func_089f847c(c, ram); }
    c->r[2] = c->r[30] + 0x00000060u;
    { c->r[31] = 0x089f6708u; c->r[4] = c->r[2] + 0u; func_089f85a0(c, ram); }
    c->r[4] = mem_r16(ram, c->r[30] + 0x00000004u);
    c->r[3] = mem_r16(ram, c->r[30] + 0x00000006u);
    c->r[2] = 0u + 0x00003fffu;
    c->r[2] = c->r[3] & c->r[2];
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[8] = c->r[30] + 0x00000030u;
    c->r[9] = c->r[30] + 0x00000040u;
    c->r[10] = c->r[30] + 0x00000050u;
    c->r[11] = c->r[30] + 0x00000060u;
    c->r[5] = c->r[2] + 0u;
    c->f[12] = mem_rf32(ram, c->r[3] + 0x00000000u);
    c->r[6] = 0u + 0u;
    { c->r[31] = 0x089f6740u; c->r[7] = 0u + 0u; func_08a019c4(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000100u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000100u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_089f6904; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = 0u + 0xffffffffu;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_089f679c; }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 5;
    c->r[2] = mem_r32(ram, c->r[4] + 0x000039f0u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[3] = c->r[30] + 0x00000060u;
    c->r[4] = c->r[2] + 0u;
    c->r[5] = c->r[3] + 0u;
    { c->r[31] = 0x089f6794u; c->r[6] = 0u + 0x00000024u; func_08a19db8(c, ram); }
    { mem_w32(ram, c->r[30] + 0x00000108u, 0u); goto L_089f690c; }
L_089f679c:
    c->r[2] = 0u + 0x00000005u;
    mem_w8(ram, c->r[30] + 0x000000a8u, c->r[2]);
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[2] + 0xffffffbau;
    c->r[3] = c->r[2] << 24;
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[30] + 0x00000006u);
    c->r[2] = c->r[3] | c->r[2];
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x089f67c4u; c->r[5] = c->r[2] + 0u; func_089f7d84(c, ram); }
    c->r[2] = c->r[2] & 0x8000u;
    mem_w32(ram, c->r[30] + 0x00000104u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000104u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_089f68e4; }
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[30] + 0x00000004u);
    mem_w32(ram, c->r[30] + 0x00000094u, c->r[2]);
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[30] + 0x00000006u);
    mem_w32(ram, c->r[30] + 0x00000098u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_089f681c; }
    c->r[2] = c->r[30] + 0x00000060u;
    c->r[2] = c->r[2] + 0x00000060u;
    { c->r[31] = 0x089f6804u; c->r[4] = c->r[2] + 0u; func_0884bfd0(c, ram); }
    c->r[4] = c->r[2] + 0u;
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000008u);
    { c->r[31] = 0x089f6814u; c->r[6] = 0u + 0x0000000cu; func_08a19db8(c, ram); }
    { goto L_089f683c; }
L_089f681c:
    c->r[2] = c->r[30] + 0x00000060u;
    c->r[2] = c->r[2] + 0x00000060u;
    { c->r[31] = 0x089f682cu; c->r[4] = c->r[2] + 0u; func_0884bfd0(c, ram); }
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0u + 0u;
    { c->r[31] = 0x089f683cu; c->r[6] = 0u + 0x0000000cu; func_08a19ec4(c, ram); }
L_089f683c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    { int _c = (c->r[2] == 0u); if (_c) goto L_089f6870; }
    c->r[2] = c->r[30] + 0x00000060u;
    c->r[2] = c->r[2] + 0x00000070u;
    { c->r[31] = 0x089f6858u; c->r[4] = c->r[2] + 0u; func_0884bfd0(c, ram); }
    c->r[4] = c->r[2] + 0u;
    c->r[5] = mem_r32(ram, c->r[30] + 0x0000000cu);
    { c->r[31] = 0x089f6868u; c->r[6] = 0u + 0x0000000cu; func_08a19db8(c, ram); }
    { goto L_089f6890; }
L_089f6870:
    c->r[2] = c->r[30] + 0x00000060u;
    c->r[2] = c->r[2] + 0x00000070u;
    { c->r[31] = 0x089f6880u; c->r[4] = c->r[2] + 0u; func_0884bfd0(c, ram); }
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0u + 0u;
    { c->r[31] = 0x089f6890u; c->r[6] = 0u + 0x0000000cu; func_08a19ec4(c, ram); }
L_089f6890:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_089f68c4; }
    c->r[2] = c->r[30] + 0x00000060u;
    c->r[2] = c->r[2] + 0x00000080u;
    { c->r[31] = 0x089f68acu; c->r[4] = c->r[2] + 0u; func_0884bfd0(c, ram); }
    c->r[4] = c->r[2] + 0u;
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000010u);
    { c->r[31] = 0x089f68bcu; c->r[6] = 0u + 0x0000000cu; func_08a19db8(c, ram); }
    { goto L_089f68e4; }
L_089f68c4:
    c->r[2] = c->r[30] + 0x00000060u;
    c->r[2] = c->r[2] + 0x00000080u;
    { c->r[31] = 0x089f68d4u; c->r[4] = c->r[2] + 0u; func_0884bfd0(c, ram); }
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0u + 0u;
    { c->r[31] = 0x089f68e4u; c->r[6] = 0u + 0x0000000cu; func_08a19ec4(c, ram); }
L_089f68e4:
    c->r[2] = c->r[30] + 0x00000060u;
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[6] = mem_r32(ram, c->r[30] + 0x00000104u);
    { c->r[31] = 0x089f68fcu; c->r[7] = c->r[2] + 0u; func_089f8108(c, ram); }
    { mem_w32(ram, c->r[30] + 0x00000108u, c->r[2]); goto L_089f690c; }
L_089f6904:
    c->r[2] = 0u + 0xffffffffu;
    mem_w32(ram, c->r[30] + 0x00000108u, c->r[2]);
L_089f690c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000108u);
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000114u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000110u);
    { c->r[29] = c->r[29] + 0x00000120u; return; }
    return; /* fell out of func_089f65a8 */
}

/* func_089f8b4c  0x089f8b4c..0x089f8b84  56 bytes, source=fde */
void func_089f8b4c(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089f8b4cu);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    { c->r[31] = 0x089f8b6cu; c->r[4] = mem_r32(ram, c->r[30] + 0x00000004u); func_089fe454(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]);
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_089f8b4c */
}

/* func_089f9868  0x089f9868..0x089f98a0  56 bytes, source=sweep */
void func_089f9868(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089f9868u);
    c->r[4] = alx_seb(c->r[4]);
    c->r[2] = c->r[4] & 0x00ffu;
    c->r[29] = c->r[29] + 0xfffffff0u;
    c->r[2] = (c->r[2] < 0x00000020u) ? 1u : 0u;
    mem_w32(ram, c->r[29] + 0x00000000u, c->r[31]);
    { int _c = (c->r[2] == 0u); c->r[3] = 0x80000000u; if (_c) goto L_089f9890; }
    { c->r[31] = 0x089f988cu; func_089fe098(c, ram); }
    c->r[3] = 0u + 0u;
L_089f9890:
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000000u);
    c->r[2] = c->r[3] + 0u;
    { c->r[29] = c->r[29] + 0x00000010u; return; }
    return; /* fell out of func_089f9868 */
}

/* func_089fa398  0x089fa398..0x089fa3c4  44 bytes, source=sweep */
void func_089fa398(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089fa398u);
    c->r[29] = c->r[29] + 0xfffffff0u;
    mem_w32(ram, c->r[29] + 0x00000000u, c->r[31]);
    c->r[2] = 0x08b90000u;
    c->r[3] = c->r[4] + 0u;
    c->r[4] = mem_r32(ram, c->r[2] + 0x0000658cu);
    c->r[6] = c->r[5] + 0u;
    { c->r[31] = 0x089fa3b8u; c->r[5] = c->r[3] + 0u; func_089f9f6c(c, ram); }
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000000u);
    { c->r[29] = c->r[29] + 0x00000010u; return; }
    return; /* fell out of func_089fa398 */
}

/* func_089fac74  0x089fac74..0x089faca4  48 bytes, source=sweep */
void func_089fac74(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089fac74u);
    c->r[3] = 0x08b90000u;
    c->r[2] = c->r[4] + 0u;
    c->r[4] = mem_r32(ram, c->r[3] + 0x00006590u);
    c->r[2] = c->r[2] & 0xffffu;
    c->r[29] = c->r[29] + 0xfffffff0u;
    c->r[6] = c->r[5] + 0u;
    mem_w32(ram, c->r[29] + 0x00000000u, c->r[31]);
    { c->r[31] = 0x089fac98u; c->r[5] = c->r[2] + 0u; func_089faac8(c, ram); }
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000000u);
    { c->r[29] = c->r[29] + 0x00000010u; return; }
    return; /* fell out of func_089fac74 */
}

/* func_089fba28  0x089fba28..0x089fba34  12 bytes, source=residue */
void func_089fba28(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089fba28u);
    c->r[2] = 0u + 0xffffffffu;
    { mem_w32(ram, c->r[4] + 0x00000a00u, c->r[2]); return; }
    return; /* fell out of func_089fba28 */
}

/* func_089fc2b0  0x089fc2b0..0x089fc340  144 bytes, source=sweep */
void func_089fc2b0(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089fc2b0u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_wf32(ram, c->r[29] + 0x00000010u, c->f[20]);
    c->f[20] = c->f[12];
    c->f[12] = u2f(0u);
    mem_w32(ram, c->r[29] + 0x00000004u, c->r[17]);
    c->r[4] = c->r[4] & 0xffffu;
    c->r[17] = c->r[8] + 0u;
    c->r[5] = c->r[5] & 0xffffu;
    c->r[6] = alx_seh(c->r[6]);
    c->r[7] = alx_seh(c->r[7]);
    c->r[8] = c->r[9] + 0u;
    mem_w32(ram, c->r[29] + 0x00000008u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000000u, c->r[16]);
    { c->r[31] = 0x089fc2ecu; c->r[16] = c->r[9] + 0u; func_089f92cc(c, ram); }
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
    return; /* fell out of func_089fc2b0 */
}

/* func_089fd918  0x089fd918..0x089fd94c  52 bytes, source=sweep */
void func_089fd918(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089fd918u);
    c->r[6] = ((s32)c->r[5] < (s32)0x00000100u) ? 1u : 0u;
    { int _c = ((s32)c->r[5] < 0); c->r[2] = 0u + 0u; if (_c) goto L_089fd944; }
    c->r[3] = c->r[4] << 8;
    c->r[2] = 0x08a60000u;
    c->r[2] = c->r[2] + 0x000047c8u;
    c->r[3] = c->r[3] - c->r[5];
    c->r[3] = c->r[3] + c->r[2];
    { int _c = (c->r[6] == 0u); c->r[2] = 0u + 0x000000ffu; if (_c) goto L_089fd944; }
    c->r[2] = mem_r8(ram, c->r[3] + 0x000000ffu);
L_089fd944:
    { return; }
    return; /* fell out of func_089fd918 */
}

/* func_089fe814  0x089fe814..0x089fe92c  280 bytes, source=sweep */
void func_089fe814(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089fe814u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x0000000cu, c->r[19]);
    c->r[3] = 0x08ba0000u;
    c->r[2] = 0x08ba0000u;
    mem_w32(ram, c->r[29] + 0x00000008u, c->r[18]);
    c->r[25] = c->r[3] + 0x0000008cu;
    c->r[6] = c->r[4] >> 31;
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[31]);
    c->r[18] = c->r[5] + 0u;
    mem_w32(ram, c->r[29] + 0x00000004u, c->r[17]);
    mem_w32(ram, c->r[29] + 0x00000000u, c->r[16]);
    c->r[3] = mem_r32(ram, c->r[2] + 0x0000016cu);
    c->r[2] = c->r[4] << 3;
    c->r[2] = c->r[2] - c->r[4];
    c->r[3] = ((s32)c->r[4] < (s32)c->r[3]) ? 1u : 0u;
    c->r[2] = c->r[2] << 5;
    c->r[3] = c->r[3] ^ 0x0001u;
    c->r[19] = c->r[2] + c->r[25];
    c->r[3] = c->r[3] | c->r[6];
    c->r[2] = 0x80000000u;
    c->r[24] = c->r[19] + 0x00000010u;
    { int _c = (c->r[3] != 0u); c->r[2] = c->r[2] | 0x000au; if (_c) goto L_089fe910; }
    c->r[6] = mem_r32(ram, c->r[25] + 0x00000034u);
    c->r[2] = 0x08a50000u;
    c->f[1] = mem_rf32(ram, c->r[19] + 0x000000bcu);
    c->f[0] = mem_rf32(ram, c->r[2] + 0xffffd298u);
    mem_w32(ram, c->r[19] + 0x00000000u, c->r[6]);
    c->r[5] = c->r[6] + 0u;
    c->f[1] = c->f[1] * c->f[0];
    mem_w32(ram, c->r[18] + 0x00000000u, c->r[6]);
    c->r[10] = mem_r8(ram, c->r[19] + 0x00000008u);
    c->r[3] = mem_r32(ram, c->r[25] + 0x00000038u);
    c->r[11] = mem_r8(ram, c->r[19] + 0x00000009u);
    c->r[12] = mem_r32(ram, c->r[19] + 0x0000000cu);
    c->f[1] = u2f((u32)alx_trunc_w_s(c->f[1]));
    mem_w8(ram, c->r[18] + 0x00000008u, c->r[10]);
    mem_w8(ram, c->r[18] + 0x00000009u, c->r[11]);
    c->r[8] = f2u(c->f[1]);
    c->r[9] = mem_r16(ram, c->r[19] + 0x00000010u);
    mem_w32(ram, c->r[18] + 0x0000000cu, c->r[12]);
    mem_w32(ram, c->r[19] + 0x00000004u, c->r[3]);
    mem_w32(ram, c->r[18] + 0x00000004u, c->r[3]);
    c->r[7] = mem_r16(ram, c->r[24] + 0x00000006u);
    c->r[2] = mem_r16(ram, c->r[19] + 0x000000b8u);
    c->r[13] = mem_r16(ram, c->r[24] + 0x00000002u);
    c->r[14] = mem_r32(ram, c->r[19] + 0x00000018u);
    c->r[15] = mem_r32(ram, c->r[19] + 0x0000001cu);
    c->r[16] = mem_r32(ram, c->r[19] + 0x00000020u);
    c->r[17] = mem_r32(ram, c->r[19] + 0x00000024u);
    c->r[7] = c->r[7] + c->r[2];
    mem_w16(ram, c->r[24] + 0x00000004u, c->r[8]);
    mem_w16(ram, c->r[18] + 0x00000010u, c->r[9]);
    mem_w16(ram, c->r[18] + 0x00000012u, c->r[13]);
    mem_w16(ram, c->r[18] + 0x00000016u, c->r[7]);
    mem_w32(ram, c->r[18] + 0x00000018u, c->r[14]);
    mem_w32(ram, c->r[18] + 0x0000001cu, c->r[15]);
    mem_w32(ram, c->r[18] + 0x00000020u, c->r[16]);
    mem_w32(ram, c->r[18] + 0x00000024u, c->r[17]);
    { c->r[31] = 0x089fe908u; mem_w16(ram, c->r[18] + 0x00000014u, c->r[8]); func_089fed50(c, ram); }
    mem_w32(ram, c->r[18] + 0x00000028u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[19] + 0x00000064u);
L_089fe910:
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000010u);
    c->r[19] = mem_r32(ram, c->r[29] + 0x0000000cu);
    c->r[18] = mem_r32(ram, c->r[29] + 0x00000008u);
    c->r[17] = mem_r32(ram, c->r[29] + 0x00000004u);
    c->r[16] = mem_r32(ram, c->r[29] + 0x00000000u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_089fe814 */
}

/* func_08a001f8  0x08a001f8..0x08a0044c  596 bytes, source=sweep */
void func_08a001f8(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08a001f8u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    c->r[2] = 0x08ba0000u;
    mem_w32(ram, c->r[29] + 0x00000008u, c->r[18]);
    c->r[18] = c->r[2] + 0x0000008cu;
    c->r[2] = 0x92490000u;
    c->r[6] = mem_r32(ram, c->r[18] + 0x0000003cu);
    c->r[2] = c->r[2] | 0x2493u;
    c->r[9] = mem_r32(ram, c->r[18] + 0x00000058u);
    c->r[3] = c->r[6] + 0x0000001bu;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[7] = mem_r32(ram, c->r[18] + 0x0000009cu);
    c->r[8] = mem_r32(ram, c->r[18] + 0x00000034u);
    c->r[5] = (u32)((s32)c->r[3] >> 31);
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[21]);
    c->r[2] = c->hi;
    c->r[2] = c->r[2] + c->r[3];
    c->r[2] = (u32)((s32)c->r[2] >> 4);
    c->r[3] = c->r[9] + c->r[7];
    c->r[2] = c->r[2] - c->r[5];
    c->r[3] = ((s32)c->r[8] < (s32)c->r[3]) ? 1u : 0u;
    mem_w32(ram, c->r[29] + 0x0000000cu, c->r[19]);
    c->r[21] = c->r[4] + 0u;
    c->r[19] = c->r[2] << 4;
    mem_w32(ram, c->r[29] + 0x0000001cu, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000018u, c->r[22]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[20]);
    mem_w32(ram, c->r[29] + 0x00000004u, c->r[17]);
    { int _c = (c->r[3] == 0u); mem_w32(ram, c->r[29] + 0x00000000u, c->r[16]); if (_c) goto L_08a00400; }
    c->r[22] = 0u + 0xffffffffu;
    { int _c = (c->r[6] == c->r[22]); alx_mult(c, c->r[7], c->r[4]); if (_c) goto L_08a00370; }
    c->r[4] = mem_r32(ram, c->r[18] + 0x00000054u);
    c->r[5] = c->r[8] - c->r[9];
    c->r[17] = (u32)((s32)c->r[19] >> 31);
    c->r[6] = c->lo;
    { c->r[31] = 0x08a00290u; c->r[17] = c->r[17] >> 21; func_08a0044c(c, ram); }
    c->r[16] = mem_r32(ram, c->r[18] + 0x00000054u);
    c->r[20] = c->r[2] + 0u;
    c->r[17] = c->r[19] + c->r[17];
    c->r[16] = c->r[16] + c->r[2];
    c->r[2] = (u32)((s32)c->r[16] >> 31);
    c->r[2] = c->r[2] >> 21;
    c->r[16] = c->r[16] + c->r[2];
    c->r[17] = (u32)((s32)c->r[17] >> 11);
    c->r[17] = c->r[17] << 11;
    c->r[16] = (u32)((s32)c->r[16] >> 11);
    c->r[2] = mem_r32(ram, c->r[18] + 0x000000a0u);
    c->r[17] = c->r[19] - c->r[17];
    c->r[16] = c->r[16] << 11;
    c->r[16] = c->r[17] + c->r[16];
    c->r[16] = c->r[16] + 0x00000800u;
    alx_div(c, c->r[16], c->r[2]);
    mem_w32(ram, c->r[18] + 0x00000020u, c->r[19]);
    c->r[17] = c->r[17] - c->r[20];
    mem_w32(ram, c->r[18] + 0x00000058u, c->r[19]);
    if (c->r[2] == 0u) { recomp_break(c, ram, 0x08a002e0u, 0x7u); goto L_08a002e4; }
L_08a002e4:
    c->r[6] = mem_r32(ram, c->r[18] + 0x0000009cu);
    c->r[5] = c->r[6] - c->r[20];
    c->r[4] = c->hi;
    alx_mult(c, c->r[6], c->r[21]);
    c->r[6] = c->lo;
    { c->r[31] = 0x08a00300u; c->r[6] = c->r[6] + c->r[20]; func_08a0044c(c, ram); }
    c->r[4] = mem_r32(ram, c->r[18] + 0x0000009cu);
    c->r[3] = mem_r32(ram, c->r[18] + 0x000000a0u);
    c->r[16] = c->r[16] + c->r[4];
    c->r[16] = c->r[16] - c->r[20];
    alx_div(c, c->r[16], c->r[3]);
    if (c->r[3] == 0u) { recomp_break(c, ram, 0x08a00318u, 0x7u); goto L_08a0031c; }
L_08a0031c:
    c->r[2] = mem_r32(ram, c->r[18] + 0x00000058u);
    c->r[3] = mem_r32(ram, c->r[18] + 0x00000084u);
    c->r[4] = c->r[4] + c->r[17];
    c->r[2] = c->r[2] + c->r[4];
    c->r[2] = c->r[2] + 0xfffff800u;
    c->r[3] = c->r[3] + 0x00000001u;
    mem_w32(ram, c->r[18] + 0x00000084u, c->r[3]);
    mem_w32(ram, c->r[18] + 0x00000058u, c->r[2]);
    mem_w32(ram, c->r[18] + 0x000000a4u, c->r[22]);
    c->r[5] = c->hi;
    mem_w32(ram, c->r[18] + 0x00000054u, c->r[5]);
L_08a00348:
    c->r[31] = mem_r32(ram, c->r[29] + 0x0000001cu);
    c->r[22] = mem_r32(ram, c->r[29] + 0x00000018u);
    c->r[21] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[20] = mem_r32(ram, c->r[29] + 0x00000010u);
    c->r[19] = mem_r32(ram, c->r[29] + 0x0000000cu);
    c->r[18] = mem_r32(ram, c->r[29] + 0x00000008u);
    c->r[17] = mem_r32(ram, c->r[29] + 0x00000004u);
    c->r[16] = mem_r32(ram, c->r[29] + 0x00000000u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
L_08a00370:
    c->r[4] = mem_r32(ram, c->r[18] + 0x00000054u);
    c->r[6] = c->lo;
    { c->r[31] = 0x08a00380u; c->r[5] = c->r[8] - c->r[9]; func_08a0044c(c, ram); }
    c->r[3] = mem_r32(ram, c->r[18] + 0x0000009cu);
    c->r[20] = c->r[2] + 0u;
    c->r[4] = mem_r32(ram, c->r[18] + 0x000000d4u);
    alx_mult(c, c->r[3], c->r[21]);
    c->r[5] = 0u + 0x00000007u;
    mem_w32(ram, c->r[18] + 0x00000058u, 0u);
    c->r[3] = c->lo;
    c->r[3] = c->r[3] + c->r[2];
    c->r[2] = (u32)((s32)c->r[3] >> 31);
    c->r[2] = c->r[2] >> 28;
    c->r[3] = c->r[3] + c->r[2];
    c->r[3] = (u32)((s32)c->r[3] >> 4);
    c->r[3] = c->r[3] << 4;
    c->r[3] = c->r[3] + c->r[4];
    mem_w8(ram, c->r[3] + 0xfffffff1u, c->r[5]);
    c->r[2] = mem_r32(ram, c->r[18] + 0x0000009cu);
    c->r[4] = mem_r32(ram, c->r[18] + 0x000000d8u);
    alx_mult(c, c->r[2], c->r[21]);
    c->r[2] = c->lo;
    c->r[2] = c->r[2] + c->r[20];
    c->r[3] = (u32)((s32)c->r[2] >> 31);
    c->r[3] = c->r[3] >> 28;
    c->r[2] = c->r[2] + c->r[3];
    c->r[2] = (u32)((s32)c->r[2] >> 4);
    c->r[2] = c->r[2] << 4;
    c->r[2] = c->r[2] + c->r[4];
    mem_w8(ram, c->r[2] + 0xfffffff1u, c->r[5]);
    c->r[3] = 0u + 0x00000001u;
    c->r[2] = 0u + 0x00000005u;
    mem_w32(ram, c->r[18] + 0x000000d0u, c->r[3]);
    { mem_w16(ram, c->r[18] + 0x00000010u, c->r[2]); goto L_08a00348; }
L_08a00400:
    alx_mult(c, c->r[7], c->r[4]);
    c->r[4] = mem_r32(ram, c->r[18] + 0x00000054u);
    c->r[6] = c->lo;
    { c->r[31] = 0x08a00414u; c->r[5] = c->r[7] + 0u; func_08a0044c(c, ram); }
    c->r[20] = c->r[2] + 0u;
    c->r[2] = mem_r32(ram, c->r[18] + 0x00000054u);
    c->r[3] = mem_r32(ram, c->r[18] + 0x000000a0u);
    c->r[2] = c->r[2] + c->r[20];
    alx_div(c, c->r[2], c->r[3]);
    if (c->r[3] == 0u) { recomp_break(c, ram, 0x08a0042cu, 0x7u); goto L_08a00430; }
L_08a00430:
    c->r[2] = mem_r32(ram, c->r[18] + 0x00000058u);
    c->r[3] = mem_r32(ram, c->r[18] + 0x0000009cu);
    c->r[2] = c->r[2] + c->r[3];
    mem_w32(ram, c->r[18] + 0x00000058u, c->r[2]);
    c->r[4] = c->hi;
    { mem_w32(ram, c->r[18] + 0x00000054u, c->r[4]); goto L_08a00348; }
    return; /* fell out of func_08a001f8 */
}

/* func_08a02240  0x08a02240..0x08a022ec  172 bytes, source=fde */
void func_08a02240(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08a02240u);
    c->r[2] = mem_r32(ram, c->r[9] + 0x00000000u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[21]);
    c->r[2] = (c->r[2] < 0x00000020u) ? 1u : 0u;
    c->r[21] = 0x08ba0000u;
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[20]);
    c->r[4] = c->r[9] + 0u;
    c->r[20] = c->r[6] + 0u;
    mem_w32(ram, c->r[29] + 0x0000000cu, c->r[19]);
    c->r[3] = 0x80000000u;
    c->r[19] = c->r[8] + 0u;
    mem_w32(ram, c->r[29] + 0x00000008u, c->r[18]);
    c->r[18] = c->r[7] + 0u;
    mem_w32(ram, c->r[29] + 0x00000004u, c->r[17]);
    c->r[17] = alx_seh(c->r[5]);
    mem_w32(ram, c->r[29] + 0x00000000u, c->r[16]);
    c->r[16] = c->r[9] + 0u;
    { int _c = (c->r[2] != 0u); mem_w32(ram, c->r[29] + 0x00000018u, c->r[31]); if (_c) goto L_08a022b4; }
L_08a0228c:
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000018u);
    c->r[21] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[20] = mem_r32(ram, c->r[29] + 0x00000010u);
    c->r[19] = mem_r32(ram, c->r[29] + 0x0000000cu);
    c->r[18] = mem_r32(ram, c->r[29] + 0x00000008u);
    c->r[17] = mem_r32(ram, c->r[29] + 0x00000004u);
    c->r[16] = mem_r32(ram, c->r[29] + 0x00000000u);
    c->r[2] = c->r[3] + 0u;
    { c->r[29] = c->r[29] + 0x00000020u; return; }
L_08a022b4:
    { c->r[31] = 0x08a022bcu; func_089f99a8(c, ram); }
    c->r[4] = mem_r32(ram, c->r[21] + 0xffff9af0u);
    c->r[5] = mem_r32(ram, c->r[16] + 0x00000000u);
    { c->r[31] = 0x08a022ccu; c->r[6] = c->r[17] + 0u; func_08a02aa0(c, ram); }
    c->r[4] = mem_r32(ram, c->r[21] + 0xffff9af0u);
    c->r[5] = c->r[16] + 0u;
    c->r[6] = c->r[20] + 0u;
    c->r[7] = c->r[18] + 0u;
    { c->r[31] = 0x08a022e4u; c->r[8] = c->r[19] + 0u; func_08a02a28(c, ram); }
    { c->r[3] = 0u + 0u; goto L_08a0228c; }
    return; /* fell out of func_08a02240 */
}

/* func_08a030d8  0x08a030d8..0x08a030f8  32 bytes, source=sweep */
void func_08a030d8(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08a030d8u);
    c->r[29] = c->r[29] + 0xfffffff0u;
    c->r[4] = 0u + 0u;
    mem_w32(ram, c->r[29] + 0x00000000u, c->r[31]);
    { c->r[31] = 0x08a030ecu; c->r[5] = 0u | 0xffffu; func_08a03074(c, ram); }
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000000u);
    { c->r[29] = c->r[29] + 0x00000010u; return; }
    return; /* fell out of func_08a030d8 */
}

/* func_08a03ffc  0x08a03ffc..0x08a04058  92 bytes, source=residue */
void func_08a03ffc(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08a03ffcu);
    c->r[2] = 0x80440000u;
    c->r[8] = (c->r[4] < 0x00000008u) ? 1u : 0u;
    c->r[3] = (c->r[5] < 0x00001001u) ? 1u : 0u;
    { int _c = (c->r[8] == 0u); c->r[7] = c->r[2] | 0x0005u; if (_c) goto L_08a04050; }
    c->r[8] = 0x80440000u;
    c->r[2] = (c->r[6] < 0x00001001u) ? 1u : 0u;
    { int _c = (c->r[3] == 0u); c->r[7] = c->r[8] | 0x000au; if (_c) goto L_08a04050; }
    c->r[3] = 0x80440000u;
    { int _c = (c->r[2] == 0u); c->r[7] = c->r[3] | 0x000au; if (_c) goto L_08a04050; }
    c->r[7] = 0u + 0x0000004cu;
    alx_mult(c, c->r[4], c->r[7]);
    c->r[11] = 0x08ba0000u;
    c->r[10] = c->r[11] + 0xffffaa78u;
    c->r[7] = 0u + 0u;
    c->r[9] = c->lo;
    c->r[4] = c->r[9] + c->r[10];
    mem_w32(ram, c->r[4] + 0x0000000cu, c->r[6]);
    mem_w32(ram, c->r[4] + 0x00000008u, c->r[5]);
L_08a04050:
    { c->r[2] = c->r[7] + 0u; return; }
    return; /* fell out of func_08a03ffc */
}

/* func_08a05b4c  0x08a05b4c..0x08a05ba4  88 bytes, source=residue */
void func_08a05b4c(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08a05b4cu);
    c->r[6] = 0x08ba0000u;
    c->r[9] = mem_r32(ram, c->r[6] + 0xffffaf80u);
    c->r[29] = c->r[29] + 0xfffffff0u;
    c->r[3] = 0x80420000u;
    mem_w32(ram, c->r[29] + 0x00000000u, c->r[31]);
    c->r[7] = c->r[4] + 0u;
    c->r[8] = (c->r[4] < 0x00000020u) ? 1u : 0u;
    c->r[6] = c->r[5] + 0u;
    { int _c = (c->r[9] == 0u); c->r[2] = c->r[3] | 0x0100u; if (_c) goto L_08a05b98; }
    c->r[5] = 0x08ba0000u;
    c->r[2] = 0u + 0x00000001u;
    c->r[4] = c->r[5] + 0xffffafc0u;
    c->r[5] = c->r[2] << (c->r[7] & 31u);
    c->r[7] = 0x80420000u;
    { int _c = (c->r[8] == 0u); c->r[2] = c->r[7] | 0x0010u; if (_c) goto L_08a05b98; }
    { c->r[31] = 0x08a05b98u; hle_dispatch_stub(c, ram, 0x08a24cccu); /* __sceSasSetPause */ }
L_08a05b98:
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000000u);
    { c->r[29] = c->r[29] + 0x00000010u; return; }
    return; /* fell out of func_08a05b4c */
}

/* func_08a06bf4  0x08a06bf4..0x08a06c08  20 bytes, source=residue */
void func_08a06bf4(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08a06bf4u);
    c->r[3] = 0x08ba0000u;
    c->r[2] = 0x08ba0000u;
    mem_w32(ram, c->r[3] + 0xffffbe0cu, c->r[4]);
    { mem_w32(ram, c->r[2] + 0xffffbe10u, c->r[5]); return; }
    return; /* fell out of func_08a06bf4 */
}

/* func_08a0b1d0  0x08a0b1d0..0x08a0b204  52 bytes, source=residue */
void func_08a0b1d0(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08a0b1d0u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    { c->r[31] = 0x08a0b1f0u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000004u); func_08a19594(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_08a0b1d0 */
}

/* func_08a0e188  0x08a0e188..0x08a0e22c  164 bytes, source=fde */
void func_08a0e188(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08a0e188u);
    c->r[29] = c->r[29] + 0xfffffff0u;
    mem_w32(ram, c->r[29] + 0x00000000u, c->r[16]);
    c->r[16] = c->r[4] + 0u;
    mem_w32(ram, c->r[29] + 0x00000004u, c->r[31]);
    { c->r[31] = 0x08a0e1a0u; c->r[16] = c->r[16] + 0xffffffd0u; func_08a0e464(c, ram); }
    c->r[4] = c->r[2] + 0u;
    c->r[3] = mem_r32(ram, c->r[16] + 0x00000030u);
    c->r[2] = 0x432b0000u;
    c->r[2] = c->r[2] | 0x2b00u;
    { int _c = (c->r[3] == c->r[2]); c->r[5] = mem_r32(ram, c->r[4] + 0x00000000u); if (_c) goto L_08a0e1d4; }
L_08a0e1b8:
    { int _c = (c->r[5] != 0u); c->r[2] = 0u + 0u; if (_c) goto L_08a0e224; }
    mem_w32(ram, c->r[4] + 0x00000000u, c->r[16]);
L_08a0e1c4:
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000004u);
    c->r[16] = mem_r32(ram, c->r[29] + 0x00000000u);
    { c->r[29] = c->r[29] + 0x00000010u; return; }
L_08a0e1d4:
    c->r[3] = mem_r32(ram, c->r[16] + 0x00000034u);
    c->r[2] = 0x474e0000u;
    c->r[2] = c->r[2] | 0x5543u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_08a0e1b8; }
    c->r[3] = mem_r32(ram, c->r[16] + 0x00000014u);
    { int _c = ((s32)c->r[3] < 0); c->r[2] = 0u + 0x00000001u; if (_c) goto L_08a0e21c; }
    c->r[3] = c->r[3] + 0x00000001u;
L_08a0e1f8:
    mem_w32(ram, c->r[16] + 0x00000014u, c->r[3]);
    c->r[2] = mem_r32(ram, c->r[4] + 0x00000004u);
    c->r[2] = c->r[2] + 0xffffffffu;
    { int _c = (c->r[16] == c->r[5]); mem_w32(ram, c->r[4] + 0x00000004u, c->r[2]); if (_c) goto L_08a0e214; }
    mem_w32(ram, c->r[16] + 0x00000010u, c->r[5]);
    mem_w32(ram, c->r[4] + 0x00000000u, c->r[16]);
L_08a0e214:
    { c->r[2] = mem_r32(ram, c->r[16] + 0x00000028u); goto L_08a0e1c4; }
L_08a0e21c:
    { c->r[3] = c->r[2] - c->r[3]; goto L_08a0e1f8; }
L_08a0e224:
    { c->r[31] = 0x08a0e22cu; func_08a0ddc4(c, ram); }
    return; /* fell out of func_08a0e188 */
}

/* func_08a0e6e0  0x08a0e6e0..0x08a0e708  40 bytes, source=sweep */
void func_08a0e6e0(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08a0e6e0u);
    c->r[2] = 0x08a50000u;
    c->r[2] = c->r[2] + 0x00000600u;
    mem_w32(ram, c->r[4] + 0x00000000u, c->r[2]);
    c->r[29] = c->r[29] + 0xfffffff0u;
    mem_w32(ram, c->r[29] + 0x00000000u, c->r[31]);
    { c->r[31] = 0x08a0e6fcu; func_08a0e55c(c, ram); }
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000000u);
    { c->r[29] = c->r[29] + 0x00000010u; return; }
    return; /* fell out of func_08a0e6e0 */
}

/* func_08a104b4  0x08a104b4..0x08a105e4  304 bytes, source=sweep */
void func_08a104b4(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08a104b4u);
    c->r[29] = c->r[29] + 0xffffffb0u;
    mem_w32(ram, c->r[29] + 0x00000034u, c->r[17]);
    c->r[17] = 0x08a50000u;
    mem_w32(ram, c->r[29] + 0x00000030u, c->r[16]);
    mem_wf32(ram, c->r[29] + 0x00000044u, c->f[21]);
    mem_wf32(ram, c->r[29] + 0x00000040u, c->f[20]);
    mem_w32(ram, c->r[29] + 0x00000038u, c->r[31]);
    { c->r[31] = 0x08a104d8u; c->f[20] = c->f[12]; func_08a11df8(c, ram); }
    c->r[2] = 0u + 0xffffffffu;
    c->r[16] = mem_r32(ram, c->r[17] + 0x00000fa8u);
    { int _c = (c->r[16] == c->r[2]); c->f[21] = c->f[0]; if (_c) goto L_08a105dc; }
    { c->r[31] = 0x08a104f0u; c->f[12] = c->f[20]; func_08a13038(c, ram); }
    { int _c = (c->r[2] != 0u); c->f[0] = c->f[21]; if (_c) goto L_08a10598; }
    c->f[0] = u2f(0u);
    alx_c_cond_s(c, 12, c->f[20], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) == 0u); c->f[0] = c->f[21]; if (_c) goto L_08a10598; }
    c->r[3] = 0x08a50000u;
    c->r[2] = 0u + 0x00000001u;
    c->r[3] = c->r[3] + 0x000007e0u;
    c->f[12] = c->f[20];
    mem_w32(ram, c->r[29] + 0x00000000u, c->r[2]);
    mem_w32(ram, c->r[29] + 0x00000004u, c->r[3]);
    { c->r[31] = 0x08a1052cu; mem_w32(ram, c->r[29] + 0x00000020u, 0u); func_08a136f8(c, ram); }
    mem_w32(ram, c->r[29] + 0x00000008u, c->r[2]);
    mem_w32(ram, c->r[29] + 0x0000000cu, c->r[3]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[2]);
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[3]);
    c->r[2] = 0u + 0u;
    { int _c = (c->r[16] == 0u); c->r[3] = 0u + 0u; if (_c) goto L_08a10558; }
    c->r[2] = 0x08a50000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x000007e8u);
    c->r[3] = 0x08a50000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x000007ecu);
L_08a10558:
    mem_w32(ram, c->r[29] + 0x00000018u, c->r[2]);
    mem_w32(ram, c->r[29] + 0x0000001cu, c->r[3]);
    c->r[2] = 0u + 0x00000002u;
    c->r[3] = mem_r32(ram, c->r[17] + 0x00000fa8u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_08a105c8; }
    { c->r[31] = 0x08a10578u; c->r[4] = c->r[29] + 0u; func_08a12b50(c, ram); }
    { int _c = (c->r[2] == 0u); if (_c) goto L_08a105c8; }
L_08a10580:
    c->r[2] = mem_r32(ram, c->r[29] + 0x00000020u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_08a105b4; }
L_08a1058c:
    c->r[4] = mem_r32(ram, c->r[29] + 0x00000018u);
    { c->r[31] = 0x08a10598u; c->r[5] = mem_r32(ram, c->r[29] + 0x0000001cu); func_08a14588(c, ram); }
L_08a10598:
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000038u);
    c->r[17] = mem_r32(ram, c->r[29] + 0x00000034u);
    c->r[16] = mem_r32(ram, c->r[29] + 0x00000030u);
    c->f[21] = mem_rf32(ram, c->r[29] + 0x00000044u);
    c->f[20] = mem_rf32(ram, c->r[29] + 0x00000040u);
    { c->r[29] = c->r[29] + 0x00000050u; return; }
L_08a105b4:
    { c->r[31] = 0x08a105bcu; func_08a19214(c, ram); }
    c->r[3] = mem_r32(ram, c->r[29] + 0x00000020u);
    { mem_w32(ram, c->r[2] + 0x00000000u, c->r[3]); goto L_08a1058c; }
L_08a105c8:
    { c->r[31] = 0x08a105d0u; func_08a19214(c, ram); }
    c->r[3] = 0u + 0x00000021u;
    { mem_w32(ram, c->r[2] + 0x00000000u, c->r[3]); goto L_08a10580; }
L_08a105dc:
    { c->f[0] = c->f[21]; goto L_08a10598; }
    return; /* fell out of func_08a104b4 */
}

/* func_08a1429c  0x08a1429c..0x08a14324  136 bytes, source=sweep */
void func_08a1429c(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08a1429cu);
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
    { c->r[31] = 0x08a142d0u; c->r[16] = c->r[29] + 0x00000020u; func_08a18664(c, ram); }
    c->r[4] = c->r[29] + 0x00000050u;
    { c->r[31] = 0x08a142dcu; c->r[5] = c->r[16] + 0u; func_08a18664(c, ram); }
    c->r[2] = mem_r32(ram, c->r[29] + 0x00000000u);
    c->r[2] = (c->r[2] < 0x00000002u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); c->r[3] = 0u + 0xffffffffu; if (_c) goto L_08a14300; }
    c->r[2] = mem_r32(ram, c->r[29] + 0x00000020u);
    c->r[5] = c->r[16] + 0u;
    c->r[2] = (c->r[2] < 0x00000002u) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); c->r[4] = c->r[29] + 0u; if (_c) goto L_08a14314; }
L_08a14300:
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000064u);
    c->r[16] = mem_r32(ram, c->r[29] + 0x00000060u);
    c->r[2] = c->r[3] + 0u;
    { c->r[29] = c->r[29] + 0x00000070u; return; }
L_08a14314:
    { c->r[31] = 0x08a1431cu; func_08a18778(c, ram); }
    { c->r[3] = c->r[2] + 0u; goto L_08a14300; }
    return; /* fell out of func_08a1429c */
}

/* func_08a166c8  0x08a166c8..0x08a166fc  52 bytes, source=fde */
void func_08a166c8(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08a166c8u);
    c->r[29] = c->r[29] + 0xfffffff0u;
    mem_w32(ram, c->r[29] + 0x00000000u, c->r[31]);
    c->r[5] = c->r[4] + 0u;
    c->r[2] = mem_r32(ram, c->r[4] + 0x00000008u);
    { int _c = (c->r[2] != 0u); c->r[4] = 0u + 0x00000001u; if (_c) goto L_08a166ec; }
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000000u);
L_08a166e4:
    { c->r[29] = c->r[29] + 0x00000010u; return; }
L_08a166ec:
    { u32 _t = c->r[2]; c->r[31] = 0x08a166f4u; recomp_call_indirect(c, ram, 0x08a166ecu, _t); }
    { c->r[31] = mem_r32(ram, c->r[29] + 0x00000000u); goto L_08a166e4; }
    return; /* fell out of func_08a166c8 */
}

/* func_08a181b8  0x08a181b8..0x08a18308  336 bytes, source=fde */
void func_08a181b8(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08a181b8u);
    c->r[29] = c->r[29] + 0xffffffc0u;
    mem_w32(ram, c->r[29] + 0x00000030u, c->r[30]);
    c->r[30] = 0u + 0u;
    mem_w32(ram, c->r[29] + 0x00000028u, c->r[22]);
    c->r[22] = c->r[4] + 0u;
    mem_w32(ram, c->r[29] + 0x00000024u, c->r[21]);
    c->r[21] = c->r[5] + 0u;
    mem_w32(ram, c->r[29] + 0x00000020u, c->r[20]);
    c->r[20] = c->r[7] + 0u;
    mem_w32(ram, c->r[29] + 0x0000001cu, c->r[19]);
    c->r[19] = c->r[6] + 0u;
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[16]);
    mem_w32(ram, c->r[29] + 0x00000034u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x0000002cu, c->r[23]);
    mem_w32(ram, c->r[29] + 0x00000018u, c->r[18]);
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[17]);
    c->r[2] = mem_r32(ram, c->r[6] + 0x00000004u);
    c->r[9] = (0u < c->r[2]) ? 1u : 0u;
    mem_w32(ram, c->r[29] + 0x00000000u, c->r[2]);
    c->r[2] = 0x08ba0000u;
    c->r[16] = c->r[2] + 0xffffff20u;
    { int _c = (c->r[9] == 0u); mem_w32(ram, c->r[29] + 0x00000004u, c->r[9]); if (_c) goto L_08a1826c; }
    c->r[23] = c->r[16] + 0u;
L_08a18218:
    c->r[18] = c->r[30] << 2;
    c->r[17] = c->r[18] + c->r[19];
L_08a18220:
    { int _c = (c->r[16] == c->r[23]); c->r[4] = c->r[22] + 0u; if (_c) goto L_08a1824c; }
    c->r[6] = mem_r32(ram, c->r[16] + 0x00000000u);
    { u32 _t = c->r[21]; c->r[31] = 0x08a18234u; c->r[5] = mem_r32(ram, c->r[17] + 0x00000008u); recomp_call_indirect(c, ram, 0x08a1822cu, _t); }
    c->r[3] = c->r[16] - c->r[19];
    { int _c = ((s32)c->r[2] >= 0); c->r[3] = c->r[20] + c->r[3]; if (_c) goto L_08a1824c; }
    c->r[16] = mem_r32(ram, c->r[3] + 0x00000000u);
    { mem_w32(ram, c->r[3] + 0x00000000u, 0u); goto L_08a18220; }
L_08a1824c:
    c->r[5] = mem_r32(ram, c->r[29] + 0x00000000u);
    c->r[30] = c->r[30] + 0x00000001u;
    c->r[2] = c->r[19] + c->r[18];
    c->r[3] = c->r[18] + c->r[20];
    c->r[4] = (c->r[30] < c->r[5]) ? 1u : 0u;
    mem_w32(ram, c->r[3] + 0x00000008u, c->r[16]);
    { int _c = (c->r[4] != 0u); c->r[16] = c->r[2] + 0x00000008u; if (_c) goto L_08a18218; }
L_08a1826c:
    c->r[9] = mem_r32(ram, c->r[29] + 0x00000004u);
    c->r[8] = 0u + 0u;
    c->r[7] = 0u + 0u;
    { int _c = (c->r[9] == 0u); c->r[30] = 0u + 0u; if (_c) goto L_08a182c0; }
    c->r[4] = c->r[19] + 0x00000008u;
    c->r[5] = c->r[20] + 0x00000008u;
    c->r[6] = c->r[4] + 0u;
    c->r[3] = c->r[5] + 0u;
L_08a18290:
    c->r[2] = mem_r32(ram, c->r[3] + 0x00000000u);
    { int _c = (c->r[2] == 0u); c->r[2] = mem_r32(ram, c->r[4] + 0x00000000u); if (_c) goto L_08a182f8; }
    c->r[7] = c->r[7] + 0x00000001u;
    mem_w32(ram, c->r[6] + 0x00000000u, c->r[2]);
    c->r[6] = c->r[6] + 0x00000004u;
L_08a182a8:
    c->r[9] = mem_r32(ram, c->r[29] + 0x00000000u);
    c->r[30] = c->r[30] + 0x00000001u;
    c->r[3] = c->r[3] + 0x00000004u;
    c->r[2] = (c->r[30] < c->r[9]) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); c->r[4] = c->r[4] + 0x00000004u; if (_c) goto L_08a18290; }
L_08a182c0:
    mem_w32(ram, c->r[19] + 0x00000004u, c->r[7]);
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000034u);
    mem_w32(ram, c->r[20] + 0x00000004u, c->r[8]);
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
L_08a182f8:
    c->r[8] = c->r[8] + 0x00000001u;
    mem_w32(ram, c->r[5] + 0x00000000u, c->r[2]);
    { c->r[5] = c->r[5] + 0x00000004u; goto L_08a182a8; }
    return; /* fell out of func_08a181b8 */
}

/* func_08a1907c  0x08a1907c..0x08a19084  8 bytes, source=residue */
void func_08a1907c(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08a1907cu);
    { c->r[2] = 0u + 0xffffffffu; return; }
    return; /* fell out of func_08a1907c */
}

/* func_08a1a6c0  0x08a1a6c0..0x08a1a834  372 bytes, source=sweep */
void func_08a1a6c0(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08a1a6c0u);
    c->r[29] = c->r[29] + 0xfffffff0u;
    mem_w32(ram, c->r[29] + 0x00000004u, c->r[17]);
    c->r[2] = 0x08a60000u;
    mem_w32(ram, c->r[29] + 0x0000000cu, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000008u, c->r[18]);
    mem_w32(ram, c->r[29] + 0x00000000u, c->r[16]);
    c->r[3] = mem_r32(ram, c->r[2] + 0x00004dd8u);
    { int _c = (c->r[4] == c->r[3]); c->r[17] = c->r[4] + 0u; if (_c) goto L_08a1a768; }
    c->r[6] = mem_r32(ram, c->r[4] + 0x00000040u);
    if (c->r[6] != 0u) { c->r[2] = mem_r32(ram, c->r[4] + 0x00000044u); goto L_08a1a810; }
    c->r[5] = mem_r32(ram, c->r[17] + 0x00000048u);
L_08a1a6f4:
    if (c->r[5] == 0u) { c->r[3] = mem_r32(ram, c->r[17] + 0x0000004cu); goto L_08a1a714; }
L_08a1a6fc:
    c->r[16] = mem_r32(ram, c->r[5] + 0x00000000u);
    { c->r[31] = 0x08a1a708u; c->r[4] = c->r[17] + 0u; func_08a22678(c, ram); }
    { int _c = (c->r[16] != 0u); c->r[5] = c->r[16] + 0u; if (_c) goto L_08a1a6fc; }
    c->r[3] = mem_r32(ram, c->r[17] + 0x0000004cu);
L_08a1a714:
    { int _c = (c->r[3] != 0u); c->r[18] = 0u + 0u; if (_c) goto L_08a1a7bc; }
    c->r[5] = mem_r32(ram, c->r[17] + 0x00000148u);
L_08a1a720:
    if (c->r[5] == 0u) { c->r[5] = mem_r32(ram, c->r[17] + 0x00000054u); goto L_08a1a754; }
    c->r[18] = c->r[17] + 0x0000014cu;
    if (c->r[5] == c->r[18]) { c->r[5] = mem_r32(ram, c->r[17] + 0x00000054u); goto L_08a1a754; }
    c->r[16] = c->r[5] + 0u;
    c->r[5] = c->r[16] + 0u;
L_08a1a73c:
    c->r[16] = mem_r32(ram, c->r[16] + 0x00000000u);
    { c->r[31] = 0x08a1a748u; c->r[4] = c->r[17] + 0u; func_08a21690(c, ram); }
    { int _c = (c->r[16] != c->r[18]); c->r[5] = c->r[16] + 0u; if (_c) goto L_08a1a73c; }
    c->r[5] = mem_r32(ram, c->r[17] + 0x00000054u);
L_08a1a754:
    { int _c = (c->r[5] != 0u); if (_c) goto L_08a1a7ac; }
    c->r[2] = mem_r32(ram, c->r[17] + 0x00000038u);
L_08a1a760:
    if (c->r[2] != 0u) { c->r[2] = mem_r32(ram, c->r[17] + 0x0000003cu); goto L_08a1a780; }
L_08a1a768:
    c->r[31] = mem_r32(ram, c->r[29] + 0x0000000cu);
L_08a1a76c:
    c->r[18] = mem_r32(ram, c->r[29] + 0x00000008u);
    c->r[17] = mem_r32(ram, c->r[29] + 0x00000004u);
    c->r[16] = mem_r32(ram, c->r[29] + 0x00000000u);
    { c->r[29] = c->r[29] + 0x00000010u; return; }
L_08a1a780:
    { u32 _t = c->r[2]; c->r[31] = 0x08a1a788u; c->r[4] = c->r[17] + 0u; recomp_call_indirect(c, ram, 0x08a1a780u, _t); }
    { c->r[31] = 0x08a1a790u; c->r[4] = c->r[17] + 0u; func_08a1a62c(c, ram); }
    c->r[5] = mem_r32(ram, c->r[17] + 0x0000025cu);
    if (c->r[5] == 0u) { c->r[31] = mem_r32(ram, c->r[29] + 0x0000000cu); goto L_08a1a76c; }
    { c->r[31] = 0x08a1a7a4u; c->r[4] = c->r[17] + 0u; func_08a1a5d8(c, ram); }
    { c->r[31] = mem_r32(ram, c->r[29] + 0x0000000cu); goto L_08a1a76c; }
L_08a1a7ac:
    { c->r[31] = 0x08a1a7b4u; c->r[4] = c->r[17] + 0u; func_08a21690(c, ram); }
    { c->r[2] = mem_r32(ram, c->r[17] + 0x00000038u); goto L_08a1a760; }
L_08a1a7bc:
    c->r[2] = c->r[18] << 2;
    c->r[2] = c->r[2] + c->r[3];
    c->r[16] = mem_r32(ram, c->r[2] + 0x00000000u);
    if (c->r[16] == 0u) { c->r[18] = c->r[18] + 0x00000001u; goto L_08a1a7ec; }
    c->r[5] = c->r[16] + 0u;
L_08a1a7d4:
    c->r[16] = mem_r32(ram, c->r[16] + 0x00000000u);
    { c->r[31] = 0x08a1a7e0u; c->r[4] = c->r[17] + 0u; func_08a21690(c, ram); }
    { int _c = (c->r[16] != 0u); c->r[5] = c->r[16] + 0u; if (_c) goto L_08a1a7d4; }
    c->r[18] = c->r[18] + 0x00000001u;
L_08a1a7ec:
    c->r[2] = ((s32)c->r[18] < (s32)0x0000000fu) ? 1u : 0u;
    if (c->r[2] == 0u) { c->r[5] = mem_r32(ram, c->r[17] + 0x0000004cu); goto L_08a1a800; }
    { c->r[3] = mem_r32(ram, c->r[17] + 0x0000004cu); goto L_08a1a7bc; }
L_08a1a800:
    { c->r[31] = 0x08a1a808u; c->r[4] = c->r[17] + 0u; func_08a21690(c, ram); }
    { c->r[5] = mem_r32(ram, c->r[17] + 0x00000148u); goto L_08a1a720; }
L_08a1a810:
    c->r[5] = c->r[6] + 0u;
    mem_w32(ram, c->r[6] + 0x00000004u, c->r[2]);
    c->r[2] = 0u + 0x00000001u;
    c->r[3] = mem_r32(ram, c->r[4] + 0x00000044u);
    c->r[2] = c->r[2] << (c->r[3] & 31u);
    { c->r[31] = 0x08a1a82cu; mem_w32(ram, c->r[6] + 0x00000008u, c->r[2]); func_08a22678(c, ram); }
    { c->r[5] = mem_r32(ram, c->r[17] + 0x00000048u); goto L_08a1a6f4; }
    return; /* fell out of func_08a1a6c0 */
}

/* func_08a1c664  0x08a1c664..0x08a1d5e8  3972 bytes, source=sweep */
void func_08a1c664(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08a1c664u);
    c->r[29] = c->r[29] + 0xfffffee0u;
    mem_w32(ram, c->r[29] + 0x000000f0u, c->r[16]);
    c->r[16] = c->r[6] + 0u;
    mem_w32(ram, c->r[29] + 0x00000114u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000110u, c->r[30]);
    mem_w32(ram, c->r[29] + 0x0000010cu, c->r[23]);
    mem_w32(ram, c->r[29] + 0x00000108u, c->r[22]);
    mem_w32(ram, c->r[29] + 0x00000104u, c->r[21]);
    mem_w32(ram, c->r[29] + 0x00000100u, c->r[20]);
    mem_w32(ram, c->r[29] + 0x000000fcu, c->r[19]);
    mem_w32(ram, c->r[29] + 0x000000f8u, c->r[18]);
    mem_w32(ram, c->r[29] + 0x000000f4u, c->r[17]);
    c->r[3] = mem_r16(ram, c->r[5] + 0x0000000cu);
    mem_w32(ram, c->r[29] + 0x000000c8u, c->r[5]);
    c->r[2] = c->r[3] & 0x0008u;
    mem_w32(ram, c->r[29] + 0x000000c4u, c->r[4]);
    mem_w32(ram, c->r[29] + 0x000000ccu, c->r[7]);
    mem_w32(ram, c->r[29] + 0x000000e0u, 0u);
    { int _c = (c->r[2] == 0u); mem_w32(ram, c->r[29] + 0x000000e4u, 0u); if (_c) goto L_08a1c6c0; }
    c->r[2] = mem_r32(ram, c->r[5] + 0x00000010u);
    { int _c = (c->r[2] != 0u); c->r[3] = c->r[3] & 0x001au; if (_c) goto L_08a1c6dc; }
L_08a1c6c0:
    { c->r[31] = 0x08a1c6c8u; c->r[4] = mem_r32(ram, c->r[29] + 0x000000c8u); func_08a1fb68(c, ram); }
    { int _c = (c->r[2] != 0u); c->r[3] = 0u + 0xffffffffu; if (_c) goto L_08a1cc94; }
    c->r[2] = mem_r32(ram, c->r[29] + 0x000000c8u);
    c->r[3] = mem_r16(ram, c->r[2] + 0x0000000cu);
    c->r[3] = c->r[3] & 0x001au;
L_08a1c6dc:
    c->r[2] = 0u + 0x0000000au;
    { int _c = (c->r[3] == c->r[2]); c->r[3] = mem_r32(ram, c->r[29] + 0x000000c8u); if (_c) goto L_08a1d5c8; }
L_08a1c6e8:
    c->r[20] = c->r[29] + 0x00000020u;
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[20]);
    c->r[18] = c->r[16] + 0u;
    mem_w32(ram, c->r[29] + 0x00000018u, 0u);
    mem_w32(ram, c->r[29] + 0x000000d4u, 0u);
    mem_w32(ram, c->r[29] + 0x00000014u, 0u);
L_08a1c700:
    c->r[4] = mem_r8(ram, c->r[18] + 0x00000000u);
L_08a1c704:
    c->r[2] = alx_seb(c->r[4]);
    c->r[3] = c->r[2] ^ 0x0025u;
    c->r[3] = (0u < c->r[3]) ? 1u : 0u;
    c->r[2] = (0u < c->r[2]) ? 1u : 0u;
    c->r[2] = c->r[2] & c->r[3];
    { int _c = (c->r[2] == 0u); c->r[19] = c->r[18] + 0u; if (_c) goto L_08a1c744; }
    c->r[18] = c->r[18] + 0x00000001u;
L_08a1c724:
    c->r[4] = mem_r8(ram, c->r[18] + 0x00000000u);
    c->r[2] = alx_seb(c->r[4]);
    c->r[3] = c->r[2] ^ 0x0025u;
    c->r[3] = (0u < c->r[3]) ? 1u : 0u;
    c->r[2] = (0u < c->r[2]) ? 1u : 0u;
    c->r[2] = c->r[2] & c->r[3];
    if (c->r[2] != 0u) { c->r[18] = c->r[18] + 0x00000001u; goto L_08a1c724; }
L_08a1c744:
    c->r[17] = c->r[18] - c->r[19];
    { int _c = (c->r[17] == 0u); c->r[2] = alx_seb(c->r[4]); if (_c) goto L_08a1c790; }
    mem_w32(ram, c->r[20] + 0x00000004u, c->r[17]);
    c->r[2] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[3] = mem_r32(ram, c->r[29] + 0x00000018u);
    mem_w32(ram, c->r[20] + 0x00000000u, c->r[19]);
    c->r[2] = c->r[2] + 0x00000001u;
    c->r[3] = c->r[3] + c->r[17];
    c->r[4] = ((s32)c->r[2] < (s32)0x00000008u) ? 1u : 0u;
    mem_w32(ram, c->r[29] + 0x00000018u, c->r[3]);
    c->r[20] = c->r[20] + 0x00000008u;
    { int _c = (c->r[4] == 0u); mem_w32(ram, c->r[29] + 0x00000014u, c->r[2]); if (_c) goto L_08a1d5ac; }
    c->r[6] = mem_r32(ram, c->r[29] + 0x000000d4u);
L_08a1c780:
    c->r[4] = mem_r8(ram, c->r[18] + 0x00000000u);
    c->r[6] = c->r[6] + c->r[17];
    mem_w32(ram, c->r[29] + 0x000000d4u, c->r[6]);
    c->r[2] = alx_seb(c->r[4]);
L_08a1c790:
    { int _c = (c->r[2] == 0u); c->r[18] = c->r[18] + 0x00000001u; if (_c) goto L_08a1d574; }
    c->r[4] = mem_r8(ram, c->r[18] + 0x00000000u);
    c->r[23] = 0u + 0xffffffffu;
    mem_w32(ram, c->r[29] + 0x000000d0u, 0u);
    mem_w32(ram, c->r[29] + 0x000000dcu, 0u);
    mem_w32(ram, c->r[29] + 0x000000d8u, 0u);
    mem_w8(ram, c->r[29] + 0x00000000u, 0u);
L_08a1c7b0:
    c->r[21] = alx_seb(c->r[4]);
    c->r[18] = c->r[18] + 0x00000001u;
L_08a1c7b8:
    c->r[3] = c->r[21] + 0xffffffe0u;
L_08a1c7bc:
    c->r[2] = (c->r[3] < 0x00000059u) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); c->r[2] = c->r[3] << 2; if (_c) goto L_08a1d560; }
    c->r[3] = 0x08a50000u;
    c->r[3] = c->r[3] + 0x0000179cu;
    c->r[2] = c->r[2] + c->r[3];
    c->r[4] = mem_r32(ram, c->r[2] + 0x00000000u);
    { u32 _t = c->r[4]; switch (_t) { case 0x08a1c7e0u: goto L_08a1c7e0; case 0x08a1c800u: goto L_08a1c800; case 0x08a1c814u: goto L_08a1c814; case 0x08a1c838u: goto L_08a1c838; case 0x08a1c84cu: goto L_08a1c84c; case 0x08a1c858u: goto L_08a1c858; case 0x08a1c8ccu: goto L_08a1c8cc; case 0x08a1c8e0u: goto L_08a1c8e0; case 0x08a1c918u: goto L_08a1c918; case 0x08a1c924u: goto L_08a1c924; case 0x08a1d08cu: goto L_08a1d08c; case 0x08a1d098u: goto L_08a1d098; case 0x08a1d124u: goto L_08a1d124; case 0x08a1d130u: goto L_08a1d130; case 0x08a1d1a8u: goto L_08a1d1a8; case 0x08a1d258u: goto L_08a1d258; case 0x08a1d2d8u: goto L_08a1d2d8; case 0x08a1d2e8u: goto L_08a1d2e8; case 0x08a1d318u: goto L_08a1d318; case 0x08a1d3b0u: goto L_08a1d3b0; case 0x08a1d3e8u: goto L_08a1d3e8; case 0x08a1d3f8u: goto L_08a1d3f8; case 0x08a1d560u: goto L_08a1d560; case 0x08a1d5a0u: goto L_08a1d5a0; default: recomp_trap_unknown_indirect(c, ram, 0x08a1c7d8u, _t); return; } }
L_08a1c7e0:
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[29] + 0x00000000u);
    { int _c = (c->r[2] != 0u); c->r[4] = mem_r8(ram, c->r[18] + 0x00000000u); if (_c) goto L_08a1c7b0; }
    c->r[3] = 0u + 0x00000020u;
L_08a1c7f0:
    { mem_w8(ram, c->r[29] + 0x00000000u, c->r[3]); goto L_08a1c7b0; }
L_08a1c7f8:
    { c->r[4] = mem_r8(ram, c->r[18] + 0x00000000u); goto L_08a1c7b0; }
L_08a1c800:
    c->r[2] = mem_r32(ram, c->r[29] + 0x000000d0u);
    c->r[4] = mem_r8(ram, c->r[18] + 0x00000000u);
    c->r[2] = c->r[2] | 0x0001u;
L_08a1c80c:
    { mem_w32(ram, c->r[29] + 0x000000d0u, c->r[2]); goto L_08a1c7b0; }
L_08a1c814:
    c->r[2] = mem_r32(ram, c->r[29] + 0x000000ccu);
    c->r[3] = mem_r32(ram, c->r[29] + 0x000000ccu);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[3] = c->r[3] + 0x00000004u;
    mem_w32(ram, c->r[29] + 0x000000ccu, c->r[3]);
    { int _c = ((s32)c->r[2] >= 0); mem_w32(ram, c->r[29] + 0x000000d8u, c->r[2]); if (_c) goto L_08a1c7f8; }
    c->r[2] = 0u - c->r[2];
    mem_w32(ram, c->r[29] + 0x000000d8u, c->r[2]);
L_08a1c838:
    c->r[6] = mem_r32(ram, c->r[29] + 0x000000d0u);
    c->r[4] = mem_r8(ram, c->r[18] + 0x00000000u);
    c->r[6] = c->r[6] | 0x0004u;
L_08a1c844:
    { mem_w32(ram, c->r[29] + 0x000000d0u, c->r[6]); goto L_08a1c7b0; }
L_08a1c84c:
    c->r[4] = mem_r8(ram, c->r[18] + 0x00000000u);
    { c->r[3] = 0u + 0x0000002bu; goto L_08a1c7f0; }
L_08a1c858:
    c->r[21] = (u32)(s32)(s8)mem_r8(ram, c->r[18] + 0x00000000u);
    c->r[2] = 0u + 0x0000002au;
    { int _c = (c->r[21] == c->r[2]); c->r[18] = c->r[18] + 0x00000001u; if (_c) goto L_08a1c8ac; }
    c->r[2] = c->r[21] + 0xffffffd0u;
    c->r[2] = (c->r[2] < 0x0000000au) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); c->r[16] = 0u + 0u; if (_c) goto L_08a1c8a0; }
L_08a1c878:
    c->r[2] = c->r[16] << 2;
    c->r[2] = c->r[2] + c->r[16];
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[21];
    c->r[21] = (u32)(s32)(s8)mem_r8(ram, c->r[18] + 0x00000000u);
    c->r[16] = c->r[2] + 0xffffffd0u;
    c->r[2] = c->r[21] + 0xffffffd0u;
    c->r[2] = (c->r[2] < 0x0000000au) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); c->r[18] = c->r[18] + 0x00000001u; if (_c) goto L_08a1c878; }
L_08a1c8a0:
    c->r[2] = 0u + 0xffffffffu;
    { c->r[23] = alx_max(c->r[16], c->r[2]); goto L_08a1c7b8; }
L_08a1c8ac:
    c->r[2] = mem_r32(ram, c->r[29] + 0x000000ccu);
    c->r[23] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000004u;
    { int _c = ((s32)c->r[23] >= 0); mem_w32(ram, c->r[29] + 0x000000ccu, c->r[2]); if (_c) goto L_08a1c7f8; }
    c->r[4] = mem_r8(ram, c->r[18] + 0x00000000u);
    { c->r[23] = 0u + 0xffffffffu; goto L_08a1c7b0; }
L_08a1c8cc:
    c->r[3] = mem_r32(ram, c->r[29] + 0x000000d0u);
    c->r[4] = mem_r8(ram, c->r[18] + 0x00000000u);
    c->r[3] = c->r[3] | 0x0080u;
L_08a1c8d8:
    { mem_w32(ram, c->r[29] + 0x000000d0u, c->r[3]); goto L_08a1c7b0; }
L_08a1c8e0:
    c->r[16] = 0u + 0u;
L_08a1c8e4:
    c->r[2] = c->r[16] << 2;
    c->r[2] = c->r[2] + c->r[16];
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[21];
    c->r[21] = (u32)(s32)(s8)mem_r8(ram, c->r[18] + 0x00000000u);
    c->r[16] = c->r[2] + 0xffffffd0u;
    c->r[18] = c->r[18] + 0x00000001u;
    c->r[2] = c->r[21] + 0xffffffd0u;
    c->r[2] = (c->r[2] < 0x0000000au) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); mem_w32(ram, c->r[29] + 0x000000d8u, c->r[16]); if (_c) goto L_08a1c8e4; }
    { c->r[3] = c->r[21] + 0xffffffe0u; goto L_08a1c7bc; }
L_08a1c918:
    c->r[2] = mem_r32(ram, c->r[29] + 0x000000d0u);
    c->r[2] = c->r[2] | 0x0010u;
    mem_w32(ram, c->r[29] + 0x000000d0u, c->r[2]);
L_08a1c924:
    c->r[3] = mem_r32(ram, c->r[29] + 0x000000d0u);
    c->r[2] = c->r[3] & 0x0020u;
    { int _c = (c->r[2] == 0u); c->r[6] = mem_r32(ram, c->r[29] + 0x000000d0u); if (_c) goto L_08a1d038; }
    c->r[4] = mem_r32(ram, c->r[29] + 0x000000ccu);
    c->r[4] = c->r[4] + 0x00000007u;
    c->r[4] = alx_ins(c->r[4], 0u, 0u, 2u);
    c->r[16] = mem_r32(ram, c->r[4] + 0x00000000u);
    c->r[17] = mem_r32(ram, c->r[4] + 0x00000004u);
    c->r[4] = c->r[4] + 0x00000008u;
    mem_w32(ram, c->r[29] + 0x000000ccu, c->r[4]);
L_08a1c950:
    { int _c = ((s32)c->r[17] < 0); c->r[3] = 0u + 0x0000002du; if (_c) goto L_08a1d020; }
L_08a1c958:
    c->r[5] = 0u + 0x00000001u;
L_08a1c95c:
    c->r[4] = mem_r32(ram, c->r[29] + 0x000000d0u);
    c->r[6] = mem_r32(ram, c->r[29] + 0x000000d0u);
    c->r[3] = c->r[16] | c->r[17];
    c->r[2] = (0u < c->r[23]) ? 1u : 0u;
    c->r[3] = (0u < c->r[3]) ? 1u : 0u;
    c->r[3] = c->r[3] | c->r[2];
    c->r[4] = alx_ins(c->r[4], 0u, 7u, 7u);
    c->r[2] = ((s32)c->r[23] < (s32)0x00000000u) ? 1u : 0u;
    if (c->r[2] == 0u) c->r[6] = c->r[4];
    mem_w32(ram, c->r[29] + 0x000000dcu, c->r[23]);
    c->r[19] = c->r[29] + 0x00000088u;
    { int _c = (c->r[3] == 0u); mem_w32(ram, c->r[29] + 0x000000d0u, c->r[6]); if (_c) goto L_08a1cff8; }
    c->r[2] = 0u + 0x00000001u;
    { int _c = (c->r[5] == c->r[2]); c->r[2] = ((s32)c->r[5] < (s32)0x00000002u) ? 1u : 0u; if (_c) goto L_08a1cf78; }
    { int _c = (c->r[2] != 0u); c->r[2] = 0u + 0x00000002u; if (_c) goto L_08a1cf20; }
    { int _c = (c->r[5] == c->r[2]); c->r[6] = mem_r32(ram, c->r[29] + 0x000000e0u); if (_c) goto L_08a1cee8; }
    c->r[2] = 0x08a50000u;
L_08a1c9b0:
    c->r[19] = c->r[2] + 0x00001750u;
L_08a1c9b4:
    { c->r[31] = 0x08a1c9bcu; c->r[4] = c->r[19] + 0u; func_08a1b008(c, ram); }
    c->r[22] = c->r[2] + 0u;
L_08a1c9c0:
    c->r[4] = mem_r32(ram, c->r[29] + 0x000000dcu);
L_08a1c9c4:
    c->r[3] = mem_r8(ram, c->r[29] + 0x00000000u);
    { int _c = (c->r[3] == 0u); c->r[23] = alx_max(c->r[22], c->r[4]); if (_c) goto L_08a1ced4; }
    c->r[23] = c->r[23] + 0x00000001u;
L_08a1c9d4:
    c->r[2] = mem_r32(ram, c->r[29] + 0x000000d0u);
    c->r[2] = c->r[2] & 0x0084u;
    { int _c = (c->r[2] != 0u); mem_w32(ram, c->r[29] + 0x000000e8u, c->r[2]); if (_c) goto L_08a1ca78; }
    c->r[4] = mem_r32(ram, c->r[29] + 0x000000d8u);
    c->r[16] = c->r[4] - c->r[23];
    { int _c = ((s32)c->r[16] <= 0); c->r[2] = ((s32)c->r[16] < (s32)0x00000011u) ? 1u : 0u; if (_c) goto L_08a1ca78; }
    { int _c = (c->r[2] != 0u); c->r[6] = 0x08a50000u; if (_c) goto L_08a1ca40; }
    c->r[30] = c->r[6] + 0x00001730u;
    c->r[17] = 0u + 0x00000010u;
    mem_w32(ram, c->r[20] + 0x00000004u, c->r[17]);
L_08a1ca08:
    c->r[2] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[3] = mem_r32(ram, c->r[29] + 0x00000018u);
    mem_w32(ram, c->r[20] + 0x00000000u, c->r[30]);
    c->r[2] = c->r[2] + 0x00000001u;
    c->r[3] = c->r[3] + 0x00000010u;
    c->r[4] = ((s32)c->r[2] < (s32)0x00000008u) ? 1u : 0u;
    mem_w32(ram, c->r[29] + 0x00000018u, c->r[3]);
    c->r[20] = c->r[20] + 0x00000008u;
    { int _c = (c->r[4] == 0u); mem_w32(ram, c->r[29] + 0x00000014u, c->r[2]); if (_c) goto L_08a1ceb8; }
    c->r[16] = c->r[16] + 0xfffffff0u;
L_08a1ca34:
    c->r[2] = ((s32)c->r[16] < (s32)0x00000011u) ? 1u : 0u;
    if (c->r[2] == 0u) { mem_w32(ram, c->r[20] + 0x00000004u, c->r[17]); goto L_08a1ca08; }
L_08a1ca40:
    mem_w32(ram, c->r[20] + 0x00000004u, c->r[16]);
    c->r[3] = 0x08a50000u;
    c->r[2] = c->r[3] + 0x00001730u;
    c->r[3] = mem_r32(ram, c->r[29] + 0x00000014u);
    mem_w32(ram, c->r[20] + 0x00000000u, c->r[2]);
    c->r[20] = c->r[20] + 0x00000008u;
    c->r[3] = c->r[3] + 0x00000001u;
    c->r[2] = mem_r32(ram, c->r[29] + 0x00000018u);
    c->r[4] = ((s32)c->r[3] < (s32)0x00000008u) ? 1u : 0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[3]);
    c->r[2] = c->r[2] + c->r[16];
    { int _c = (c->r[4] == 0u); mem_w32(ram, c->r[29] + 0x00000018u, c->r[2]); if (_c) goto L_08a1ce9c; }
    c->r[3] = mem_r8(ram, c->r[29] + 0x00000000u);
L_08a1ca78:
    c->r[2] = alx_seb(c->r[3]);
    { int _c = (c->r[2] == 0u); c->r[4] = mem_r32(ram, c->r[29] + 0x000000d0u); if (_c) goto L_08a1ce34; }
    c->r[2] = 0u + 0x00000001u;
    mem_w32(ram, c->r[20] + 0x00000004u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[2] = mem_r32(ram, c->r[29] + 0x00000018u);
    mem_w32(ram, c->r[20] + 0x00000000u, c->r[29]);
    c->r[3] = c->r[3] + 0x00000001u;
    c->r[2] = c->r[2] + 0x00000001u;
    c->r[4] = ((s32)c->r[3] < (s32)0x00000008u) ? 1u : 0u;
    mem_w32(ram, c->r[29] + 0x00000018u, c->r[2]);
    c->r[20] = c->r[20] + 0x00000008u;
    { int _c = (c->r[4] == 0u); mem_w32(ram, c->r[29] + 0x00000014u, c->r[3]); if (_c) goto L_08a1ce14; }
L_08a1cab4:
    c->r[6] = mem_r32(ram, c->r[29] + 0x000000e8u);
L_08a1cab8:
    c->r[2] = 0u + 0x00000080u;
    { int _c = (c->r[6] == c->r[2]); c->r[2] = mem_r32(ram, c->r[29] + 0x000000d8u); if (_c) goto L_08a1cd54; }
L_08a1cac4:
    c->r[3] = mem_r32(ram, c->r[29] + 0x000000dcu);
L_08a1cac8:
    c->r[16] = c->r[3] - c->r[22];
    { int _c = ((s32)c->r[16] <= 0); c->r[2] = ((s32)c->r[16] < (s32)0x00000011u) ? 1u : 0u; if (_c) goto L_08a1cb50; }
    { int _c = (c->r[2] != 0u); c->r[30] = 0x08a50000u; if (_c) goto L_08a1cb20; }
    c->r[21] = c->r[30] + 0x00001740u;
    c->r[17] = 0u + 0x00000010u;
    mem_w32(ram, c->r[20] + 0x00000004u, c->r[17]);
L_08a1cae8:
    c->r[2] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[3] = mem_r32(ram, c->r[29] + 0x00000018u);
    mem_w32(ram, c->r[20] + 0x00000000u, c->r[21]);
    c->r[2] = c->r[2] + 0x00000001u;
    c->r[3] = c->r[3] + 0x00000010u;
    c->r[4] = ((s32)c->r[2] < (s32)0x00000008u) ? 1u : 0u;
    mem_w32(ram, c->r[29] + 0x00000018u, c->r[3]);
    c->r[20] = c->r[20] + 0x00000008u;
    { int _c = (c->r[4] == 0u); mem_w32(ram, c->r[29] + 0x00000014u, c->r[2]); if (_c) goto L_08a1cd38; }
    c->r[16] = c->r[16] + 0xfffffff0u;
L_08a1cb14:
    c->r[2] = ((s32)c->r[16] < (s32)0x00000011u) ? 1u : 0u;
    if (c->r[2] == 0u) { mem_w32(ram, c->r[20] + 0x00000004u, c->r[17]); goto L_08a1cae8; }
L_08a1cb20:
    mem_w32(ram, c->r[20] + 0x00000004u, c->r[16]);
    c->r[2] = c->r[30] + 0x00001740u;
    c->r[3] = mem_r32(ram, c->r[29] + 0x00000014u);
    mem_w32(ram, c->r[20] + 0x00000000u, c->r[2]);
    c->r[20] = c->r[20] + 0x00000008u;
    c->r[3] = c->r[3] + 0x00000001u;
    c->r[2] = mem_r32(ram, c->r[29] + 0x00000018u);
    c->r[4] = ((s32)c->r[3] < (s32)0x00000008u) ? 1u : 0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[3]);
    c->r[2] = c->r[2] + c->r[16];
    { int _c = (c->r[4] == 0u); mem_w32(ram, c->r[29] + 0x00000018u, c->r[2]); if (_c) goto L_08a1cd1c; }
L_08a1cb50:
    mem_w32(ram, c->r[20] + 0x00000004u, c->r[22]);
L_08a1cb54:
    c->r[2] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[3] = mem_r32(ram, c->r[29] + 0x00000018u);
    mem_w32(ram, c->r[20] + 0x00000000u, c->r[19]);
    c->r[2] = c->r[2] + 0x00000001u;
    c->r[3] = c->r[3] + c->r[22];
    c->r[4] = ((s32)c->r[2] < (s32)0x00000008u) ? 1u : 0u;
    mem_w32(ram, c->r[29] + 0x00000018u, c->r[3]);
    c->r[20] = c->r[20] + 0x00000008u;
    { int _c = (c->r[4] == 0u); mem_w32(ram, c->r[29] + 0x00000014u, c->r[2]); if (_c) goto L_08a1cd00; }
    c->r[4] = mem_r32(ram, c->r[29] + 0x000000d0u);
L_08a1cb80:
    c->r[2] = c->r[4] & 0x0004u;
    if (c->r[2] == 0u) { c->r[4] = mem_r32(ram, c->r[29] + 0x000000d8u); goto L_08a1cc1c; }
    c->r[6] = mem_r32(ram, c->r[29] + 0x000000d8u);
    c->r[16] = c->r[6] - c->r[23];
    { int _c = ((s32)c->r[16] <= 0); c->r[2] = ((s32)c->r[16] < (s32)0x00000011u) ? 1u : 0u; if (_c) goto L_08a1cc18; }
    { int _c = (c->r[2] != 0u); c->r[2] = 0x08a50000u; if (_c) goto L_08a1cbe8; }
    c->r[19] = c->r[2] + 0x00001730u;
    c->r[17] = 0u + 0x00000010u;
    mem_w32(ram, c->r[20] + 0x00000004u, c->r[17]);
L_08a1cbb0:
    c->r[2] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[3] = mem_r32(ram, c->r[29] + 0x00000018u);
    mem_w32(ram, c->r[20] + 0x00000000u, c->r[19]);
    c->r[2] = c->r[2] + 0x00000001u;
    c->r[3] = c->r[3] + 0x00000010u;
    c->r[4] = ((s32)c->r[2] < (s32)0x00000008u) ? 1u : 0u;
    mem_w32(ram, c->r[29] + 0x00000018u, c->r[3]);
    c->r[20] = c->r[20] + 0x00000008u;
    { int _c = (c->r[4] == 0u); mem_w32(ram, c->r[29] + 0x00000014u, c->r[2]); if (_c) goto L_08a1cce4; }
    c->r[16] = c->r[16] + 0xfffffff0u;
L_08a1cbdc:
    c->r[2] = ((s32)c->r[16] < (s32)0x00000011u) ? 1u : 0u;
    if (c->r[2] == 0u) { mem_w32(ram, c->r[20] + 0x00000004u, c->r[17]); goto L_08a1cbb0; }
L_08a1cbe8:
    mem_w32(ram, c->r[20] + 0x00000004u, c->r[16]);
    c->r[3] = 0x08a50000u;
    c->r[2] = c->r[3] + 0x00001730u;
    c->r[3] = mem_r32(ram, c->r[29] + 0x00000014u);
    mem_w32(ram, c->r[20] + 0x00000000u, c->r[2]);
    c->r[3] = c->r[3] + 0x00000001u;
    c->r[2] = mem_r32(ram, c->r[29] + 0x00000018u);
    c->r[4] = ((s32)c->r[3] < (s32)0x00000008u) ? 1u : 0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[3]);
    c->r[2] = c->r[2] + c->r[16];
    { int _c = (c->r[4] == 0u); mem_w32(ram, c->r[29] + 0x00000018u, c->r[2]); if (_c) goto L_08a1ccc8; }
L_08a1cc18:
    c->r[4] = mem_r32(ram, c->r[29] + 0x000000d8u);
L_08a1cc1c:
    c->r[6] = mem_r32(ram, c->r[29] + 0x000000d4u);
    c->r[3] = mem_r32(ram, c->r[29] + 0x00000018u);
    c->r[2] = alx_max(c->r[23], c->r[4]);
    c->r[6] = c->r[6] + c->r[2];
    { int _c = (c->r[3] != 0u); mem_w32(ram, c->r[29] + 0x000000d4u, c->r[6]); if (_c) goto L_08a1cc54; }
    c->r[2] = mem_r32(ram, c->r[29] + 0x000000e4u);
L_08a1cc38:
    mem_w32(ram, c->r[29] + 0x00000014u, 0u);
    { int _c = (c->r[2] == 0u); c->r[20] = c->r[29] + 0x00000020u; if (_c) goto L_08a1c700; }
    { c->r[31] = 0x08a1cc4cu; c->r[4] = c->r[2] + 0u; func_08a19594(c, ram); }
    { mem_w32(ram, c->r[29] + 0x000000e4u, 0u); goto L_08a1c700; }
L_08a1cc54:
    c->r[4] = mem_r32(ram, c->r[29] + 0x000000c8u);
    { c->r[31] = 0x08a1cc60u; c->r[5] = c->r[29] + 0x00000010u; func_08a1c4f4(c, ram); }
    { int _c = (c->r[2] == 0u); c->r[2] = mem_r32(ram, c->r[29] + 0x000000e4u); if (_c) goto L_08a1cc38; }
L_08a1cc68:
    c->r[3] = mem_r32(ram, c->r[29] + 0x000000e4u);
L_08a1cc6c:
    { int _c = (c->r[3] == 0u); c->r[4] = mem_r32(ram, c->r[29] + 0x000000c8u); if (_c) goto L_08a1cc80; }
    { c->r[31] = 0x08a1cc7cu; c->r[4] = c->r[3] + 0u; func_08a19594(c, ram); }
L_08a1cc7c:
    c->r[4] = mem_r32(ram, c->r[29] + 0x000000c8u);
L_08a1cc80:
    c->r[6] = mem_r32(ram, c->r[29] + 0x000000d4u);
    c->r[3] = 0u + 0xffffffffu;
    c->r[2] = mem_r16(ram, c->r[4] + 0x0000000cu);
    c->r[2] = c->r[2] & 0x0040u;
    if (c->r[2] == 0u) c->r[3] = c->r[6];
L_08a1cc94:
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000114u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000110u);
    c->r[23] = mem_r32(ram, c->r[29] + 0x0000010cu);
    c->r[22] = mem_r32(ram, c->r[29] + 0x00000108u);
    c->r[21] = mem_r32(ram, c->r[29] + 0x00000104u);
    c->r[20] = mem_r32(ram, c->r[29] + 0x00000100u);
    c->r[19] = mem_r32(ram, c->r[29] + 0x000000fcu);
    c->r[18] = mem_r32(ram, c->r[29] + 0x000000f8u);
    c->r[17] = mem_r32(ram, c->r[29] + 0x000000f4u);
    c->r[16] = mem_r32(ram, c->r[29] + 0x000000f0u);
    c->r[2] = c->r[3] + 0u;
    { c->r[29] = c->r[29] + 0x00000120u; return; }
L_08a1ccc8:
    c->r[4] = mem_r32(ram, c->r[29] + 0x000000c8u);
    { c->r[31] = 0x08a1ccd4u; c->r[5] = c->r[29] + 0x00000010u; func_08a1c4f4(c, ram); }
    { int _c = (c->r[2] == 0u); c->r[4] = mem_r32(ram, c->r[29] + 0x000000d8u); if (_c) goto L_08a1cc1c; }
    { c->r[3] = mem_r32(ram, c->r[29] + 0x000000e4u); goto L_08a1cc6c; }
L_08a1cce4:
    c->r[4] = mem_r32(ram, c->r[29] + 0x000000c8u);
    { c->r[31] = 0x08a1ccf0u; c->r[5] = c->r[29] + 0x00000010u; func_08a1c4f4(c, ram); }
    { int _c = (c->r[2] != 0u); c->r[20] = c->r[29] + 0x00000020u; if (_c) goto L_08a1cc68; }
    { c->r[16] = c->r[16] + 0xfffffff0u; goto L_08a1cbdc; }
L_08a1cd00:
    c->r[4] = mem_r32(ram, c->r[29] + 0x000000c8u);
    { c->r[31] = 0x08a1cd0cu; c->r[5] = c->r[29] + 0x00000010u; func_08a1c4f4(c, ram); }
    { int _c = (c->r[2] != 0u); c->r[20] = c->r[29] + 0x00000020u; if (_c) goto L_08a1cc68; }
    { c->r[4] = mem_r32(ram, c->r[29] + 0x000000d0u); goto L_08a1cb80; }
L_08a1cd1c:
    c->r[4] = mem_r32(ram, c->r[29] + 0x000000c8u);
    { c->r[31] = 0x08a1cd28u; c->r[5] = c->r[29] + 0x00000010u; func_08a1c4f4(c, ram); }
    { int _c = (c->r[2] != 0u); c->r[20] = c->r[29] + 0x00000020u; if (_c) goto L_08a1cc68; }
    { mem_w32(ram, c->r[20] + 0x00000004u, c->r[22]); goto L_08a1cb54; }
L_08a1cd38:
    c->r[4] = mem_r32(ram, c->r[29] + 0x000000c8u);
    { c->r[31] = 0x08a1cd44u; c->r[5] = c->r[29] + 0x00000010u; func_08a1c4f4(c, ram); }
    { int _c = (c->r[2] != 0u); c->r[20] = c->r[29] + 0x00000020u; if (_c) goto L_08a1cc68; }
    { c->r[16] = c->r[16] + 0xfffffff0u; goto L_08a1cb14; }
L_08a1cd54:
    c->r[16] = c->r[2] - c->r[23];
    { int _c = ((s32)c->r[16] <= 0); c->r[2] = ((s32)c->r[16] < (s32)0x00000011u) ? 1u : 0u; if (_c) goto L_08a1cac4; }
    { int _c = (c->r[2] != 0u); c->r[30] = 0x08a50000u; if (_c) goto L_08a1cdac; }
    c->r[21] = c->r[30] + 0x00001740u;
    c->r[17] = 0u + 0x00000010u;
    mem_w32(ram, c->r[20] + 0x00000004u, c->r[17]);
L_08a1cd74:
    c->r[2] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[3] = mem_r32(ram, c->r[29] + 0x00000018u);
    mem_w32(ram, c->r[20] + 0x00000000u, c->r[21]);
    c->r[2] = c->r[2] + 0x00000001u;
    c->r[3] = c->r[3] + 0x00000010u;
    c->r[4] = ((s32)c->r[2] < (s32)0x00000008u) ? 1u : 0u;
    mem_w32(ram, c->r[29] + 0x00000018u, c->r[3]);
    c->r[20] = c->r[20] + 0x00000008u;
    { int _c = (c->r[4] == 0u); mem_w32(ram, c->r[29] + 0x00000014u, c->r[2]); if (_c) goto L_08a1cdf8; }
    c->r[16] = c->r[16] + 0xfffffff0u;
L_08a1cda0:
    c->r[2] = ((s32)c->r[16] < (s32)0x00000011u) ? 1u : 0u;
    if (c->r[2] == 0u) { mem_w32(ram, c->r[20] + 0x00000004u, c->r[17]); goto L_08a1cd74; }
L_08a1cdac:
    mem_w32(ram, c->r[20] + 0x00000004u, c->r[16]);
    c->r[2] = c->r[30] + 0x00001740u;
    c->r[3] = mem_r32(ram, c->r[29] + 0x00000014u);
    mem_w32(ram, c->r[20] + 0x00000000u, c->r[2]);
    c->r[20] = c->r[20] + 0x00000008u;
    c->r[3] = c->r[3] + 0x00000001u;
    c->r[2] = mem_r32(ram, c->r[29] + 0x00000018u);
    c->r[4] = ((s32)c->r[3] < (s32)0x00000008u) ? 1u : 0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[3]);
    c->r[2] = c->r[2] + c->r[16];
    { int _c = (c->r[4] != 0u); mem_w32(ram, c->r[29] + 0x00000018u, c->r[2]); if (_c) goto L_08a1cac4; }
    c->r[4] = mem_r32(ram, c->r[29] + 0x000000c8u);
    { c->r[31] = 0x08a1cde8u; c->r[5] = c->r[29] + 0x00000010u; func_08a1c4f4(c, ram); }
    { int _c = (c->r[2] != 0u); c->r[20] = c->r[29] + 0x00000020u; if (_c) goto L_08a1cc68; }
    { c->r[3] = mem_r32(ram, c->r[29] + 0x000000dcu); goto L_08a1cac8; }
L_08a1cdf8:
    c->r[4] = mem_r32(ram, c->r[29] + 0x000000c8u);
    { c->r[31] = 0x08a1ce04u; c->r[5] = c->r[29] + 0x00000010u; func_08a1c4f4(c, ram); }
    { int _c = (c->r[2] != 0u); c->r[20] = c->r[29] + 0x00000020u; if (_c) goto L_08a1cc68; }
    { c->r[16] = c->r[16] + 0xfffffff0u; goto L_08a1cda0; }
L_08a1ce14:
    c->r[4] = mem_r32(ram, c->r[29] + 0x000000c8u);
    c->r[5] = c->r[29] + 0x00000010u;
    { c->r[31] = 0x08a1ce24u; c->r[20] = c->r[29] + 0x00000020u; func_08a1c4f4(c, ram); }
    { int _c = (c->r[2] == 0u); c->r[6] = mem_r32(ram, c->r[29] + 0x000000e8u); if (_c) goto L_08a1cab8; }
    { c->r[3] = mem_r32(ram, c->r[29] + 0x000000e4u); goto L_08a1cc6c; }
L_08a1ce34:
    c->r[2] = c->r[4] & 0x0002u;
    { int _c = (c->r[2] == 0u); c->r[6] = mem_r32(ram, c->r[29] + 0x000000e8u); if (_c) goto L_08a1cab8; }
    c->r[2] = 0u + 0x00000030u;
    mem_w8(ram, c->r[29] + 0x00000090u, c->r[2]);
    c->r[2] = 0u + 0x00000002u;
    c->r[3] = c->r[29] + 0x00000090u;
    mem_w8(ram, c->r[29] + 0x00000091u, c->r[21]);
    mem_w32(ram, c->r[20] + 0x00000004u, c->r[2]);
    c->r[4] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[2] = mem_r32(ram, c->r[29] + 0x00000018u);
    mem_w32(ram, c->r[20] + 0x00000000u, c->r[3]);
    c->r[4] = c->r[4] + 0x00000001u;
    c->r[2] = c->r[2] + 0x00000002u;
    c->r[3] = ((s32)c->r[4] < (s32)0x00000008u) ? 1u : 0u;
    mem_w32(ram, c->r[29] + 0x00000018u, c->r[2]);
    c->r[20] = c->r[20] + 0x00000008u;
    { int _c = (c->r[3] != 0u); mem_w32(ram, c->r[29] + 0x00000014u, c->r[4]); if (_c) goto L_08a1cab4; }
    c->r[4] = mem_r32(ram, c->r[29] + 0x000000c8u);
    { c->r[31] = 0x08a1ce8cu; c->r[5] = c->r[29] + 0x00000010u; func_08a1c4f4(c, ram); }
    { int _c = (c->r[2] != 0u); c->r[20] = c->r[29] + 0x00000020u; if (_c) goto L_08a1cc68; }
    { c->r[6] = mem_r32(ram, c->r[29] + 0x000000e8u); goto L_08a1cab8; }
L_08a1ce9c:
    c->r[4] = mem_r32(ram, c->r[29] + 0x000000c8u);
    { c->r[31] = 0x08a1cea8u; c->r[5] = c->r[29] + 0x00000010u; func_08a1c4f4(c, ram); }
    { int _c = (c->r[2] != 0u); c->r[3] = mem_r8(ram, c->r[29] + 0x00000000u); if (_c) goto L_08a1cc68; }
    { c->r[20] = c->r[29] + 0x00000020u; goto L_08a1ca78; }
L_08a1ceb8:
    c->r[4] = mem_r32(ram, c->r[29] + 0x000000c8u);
    { c->r[31] = 0x08a1cec4u; c->r[5] = c->r[29] + 0x00000010u; func_08a1c4f4(c, ram); }
    { int _c = (c->r[2] != 0u); c->r[20] = c->r[29] + 0x00000020u; if (_c) goto L_08a1cc68; }
    { c->r[16] = c->r[16] + 0xfffffff0u; goto L_08a1ca34; }
L_08a1ced4:
    c->r[6] = mem_r32(ram, c->r[29] + 0x000000d0u);
    c->r[2] = c->r[6] & 0x0002u;
    { c->r[23] = c->r[2] + c->r[23]; goto L_08a1c9d4; }
L_08a1cee4:
    c->r[6] = mem_r32(ram, c->r[29] + 0x000000e0u);
L_08a1cee8:
    c->r[2] = c->r[16] & 0x000fu;
    c->r[4] = c->r[17] << 28;
    c->r[2] = c->r[6] + c->r[2];
    c->r[3] = mem_r8(ram, c->r[2] + 0x00000000u);
    c->r[16] = c->r[16] >> 4;
    c->r[16] = c->r[16] | c->r[4];
    c->r[17] = c->r[17] >> 4;
    c->r[19] = c->r[19] + 0xffffffffu;
    c->r[2] = c->r[16] | c->r[17];
    { int _c = (c->r[2] != 0u); mem_w8(ram, c->r[19] + 0x00000000u, c->r[3]); if (_c) goto L_08a1cee4; }
L_08a1cf14:
    c->r[2] = c->r[29] - c->r[19];
L_08a1cf18:
    { c->r[22] = c->r[2] + 0x00000088u; goto L_08a1c9c0; }
L_08a1cf20:
    { int _c = (c->r[5] != 0u); c->r[2] = 0x08a50000u; if (_c) goto L_08a1c9b0; }
L_08a1cf28:
    c->r[2] = c->r[16] & 0x0007u;
    c->r[3] = c->r[17] << 29;
    c->r[16] = c->r[16] >> 3;
    c->r[16] = c->r[16] | c->r[3];
    c->r[17] = c->r[17] >> 3;
    c->r[3] = c->r[2] + 0x00000030u;
    c->r[19] = c->r[19] + 0xffffffffu;
    c->r[2] = c->r[16] | c->r[17];
    { int _c = (c->r[2] != 0u); mem_w8(ram, c->r[19] + 0x00000000u, c->r[3]); if (_c) goto L_08a1cf28; }
    c->r[4] = mem_r32(ram, c->r[29] + 0x000000d0u);
    c->r[2] = c->r[4] & 0x0001u;
    { int _c = (c->r[2] == 0u); c->r[2] = c->r[29] - c->r[19]; if (_c) goto L_08a1cf18; }
    c->r[2] = 0u + 0x00000030u;
    if (c->r[3] == c->r[2]) { c->r[2] = c->r[29] - c->r[19]; goto L_08a1cf18; }
L_08a1cf6c:
    c->r[19] = c->r[19] + 0xffffffffu;
    { mem_w8(ram, c->r[19] + 0x00000000u, c->r[2]); goto L_08a1cf14; }
L_08a1cf78:
    { int _c = (c->r[17] == 0u); if (_c) goto L_08a1cfdc; }
L_08a1cf80:
    c->r[4] = c->r[16] + 0u;
L_08a1cf84:
    c->r[7] = 0u + 0x00000000u;
    c->r[6] = 0u + 0x0000000au;
    { c->r[31] = 0x08a1cf94u; c->r[5] = c->r[17] + 0u; func_08a23fb8(c, ram); }
    c->r[2] = c->r[2] + 0x00000030u;
    c->r[19] = c->r[19] + 0xffffffffu;
    mem_w8(ram, c->r[19] + 0x00000000u, c->r[2]);
    c->r[4] = c->r[16] + 0u;
    c->r[7] = 0u + 0x00000000u;
    c->r[6] = 0u + 0x0000000au;
    { c->r[31] = 0x08a1cfb4u; c->r[5] = c->r[17] + 0u; func_08a13184(c, ram); }
    c->r[16] = c->r[2] + 0u;
    { int _c = (c->r[3] != 0u); c->r[17] = c->r[3] + 0u; if (_c) goto L_08a1cf80; }
    if (c->r[3] != 0u) { c->r[2] = c->r[16] + 0x00000030u; goto L_08a1cf6c; }
    c->r[2] = (c->r[2] < 0x0000000au) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); c->r[4] = c->r[16] + 0u; if (_c) goto L_08a1cf84; }
    { c->r[2] = c->r[16] + 0x00000030u; goto L_08a1cf6c; }
L_08a1cfdc:
    { int _c = (c->r[17] != 0u); c->r[2] = c->r[16] + 0x00000030u; if (_c) goto L_08a1cf6c; }
    c->r[2] = (c->r[16] < 0x0000000au) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); c->r[4] = c->r[16] + 0u; if (_c) goto L_08a1cf84; }
    { c->r[2] = c->r[16] + 0x00000030u; goto L_08a1cf6c; }
L_08a1cff8:
    { int _c = (c->r[5] != 0u); c->r[2] = c->r[29] - c->r[19]; if (_c) goto L_08a1cf18; }
    c->r[3] = mem_r32(ram, c->r[29] + 0x000000d0u);
    c->r[2] = c->r[3] & 0x0001u;
    { int _c = (c->r[2] == 0u); c->r[2] = c->r[29] - c->r[19]; if (_c) goto L_08a1cf18; }
    c->r[2] = 0u + 0x00000030u;
    mem_w8(ram, c->r[29] + 0x00000087u, c->r[2]);
    { c->r[19] = c->r[29] + 0x00000087u; goto L_08a1cf14; }
L_08a1d020:
    c->r[16] = 0u - c->r[16];
    c->r[17] = 0u - c->r[17];
    c->r[2] = (0u < c->r[16]) ? 1u : 0u;
    c->r[17] = c->r[17] - c->r[2];
    { mem_w8(ram, c->r[29] + 0x00000000u, c->r[3]); goto L_08a1c958; }
L_08a1d038:
    c->r[2] = c->r[6] & 0x0010u;
    { int _c = (c->r[2] == 0u); c->r[3] = mem_r32(ram, c->r[29] + 0x000000d0u); if (_c) goto L_08a1d060; }
    c->r[2] = mem_r32(ram, c->r[29] + 0x000000ccu);
    c->r[3] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000004u;
    mem_w32(ram, c->r[29] + 0x000000ccu, c->r[2]);
L_08a1d054:
    c->r[16] = c->r[3] + 0u;
    { c->r[17] = (u32)((s32)c->r[3] >> 31); goto L_08a1c950; }
L_08a1d060:
    c->r[2] = c->r[3] & 0x0040u;
    { int _c = (c->r[2] == 0u); c->r[2] = mem_r32(ram, c->r[29] + 0x000000ccu); if (_c) goto L_08a1d07c; }
    c->r[3] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x00000000u);
    c->r[4] = c->r[2] + 0x00000004u;
    { mem_w32(ram, c->r[29] + 0x000000ccu, c->r[4]); goto L_08a1d054; }
L_08a1d07c:
    c->r[6] = c->r[2] + 0x00000004u;
    c->r[3] = mem_r32(ram, c->r[2] + 0x00000000u);
    { mem_w32(ram, c->r[29] + 0x000000ccu, c->r[6]); goto L_08a1d054; }
L_08a1d08c:
    c->r[6] = mem_r32(ram, c->r[29] + 0x000000d0u);
    c->r[6] = c->r[6] | 0x0010u;
    mem_w32(ram, c->r[29] + 0x000000d0u, c->r[6]);
L_08a1d098:
    c->r[3] = mem_r32(ram, c->r[29] + 0x000000d0u);
    c->r[2] = c->r[3] & 0x0020u;
    { int _c = (c->r[2] == 0u); c->r[6] = mem_r32(ram, c->r[29] + 0x000000d0u); if (_c) goto L_08a1d0d0; }
    c->r[4] = mem_r32(ram, c->r[29] + 0x000000ccu);
    c->r[4] = c->r[4] + 0x00000007u;
    c->r[4] = alx_ins(c->r[4], 0u, 0u, 2u);
    c->r[16] = mem_r32(ram, c->r[4] + 0x00000000u);
    c->r[17] = mem_r32(ram, c->r[4] + 0x00000004u);
    c->r[4] = c->r[4] + 0x00000008u;
L_08a1d0c0:
    mem_w32(ram, c->r[29] + 0x000000ccu, c->r[4]);
L_08a1d0c4:
    c->r[5] = 0u + 0u;
L_08a1d0c8:
    { mem_w8(ram, c->r[29] + 0x00000000u, 0u); goto L_08a1c95c; }
L_08a1d0d0:
    c->r[2] = c->r[6] & 0x0010u;
    { int _c = (c->r[2] == 0u); c->r[3] = mem_r32(ram, c->r[29] + 0x000000d0u); if (_c) goto L_08a1d0f4; }
    c->r[2] = mem_r32(ram, c->r[29] + 0x000000ccu);
    c->r[17] = 0u + 0u;
    c->r[16] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000004u;
    { mem_w32(ram, c->r[29] + 0x000000ccu, c->r[2]); goto L_08a1d0c4; }
L_08a1d0f4:
    c->r[2] = c->r[3] & 0x0040u;
    { int _c = (c->r[2] == 0u); c->r[2] = mem_r32(ram, c->r[29] + 0x000000ccu); if (_c) goto L_08a1d110; }
    c->r[17] = 0u + 0u;
    c->r[16] = mem_r16(ram, c->r[2] + 0x00000000u);
    { c->r[4] = c->r[2] + 0x00000004u; goto L_08a1d0c0; }
L_08a1d110:
    c->r[17] = 0u + 0u;
    c->r[6] = c->r[2] + 0x00000004u;
    c->r[16] = mem_r32(ram, c->r[2] + 0x00000000u);
    { mem_w32(ram, c->r[29] + 0x000000ccu, c->r[6]); goto L_08a1d0c4; }
L_08a1d124:
    c->r[4] = mem_r32(ram, c->r[29] + 0x000000d0u);
    c->r[4] = c->r[4] | 0x0010u;
    mem_w32(ram, c->r[29] + 0x000000d0u, c->r[4]);
L_08a1d130:
    c->r[6] = mem_r32(ram, c->r[29] + 0x000000d0u);
    c->r[2] = c->r[6] & 0x0020u;
    { int _c = (c->r[2] == 0u); c->r[4] = mem_r32(ram, c->r[29] + 0x000000d0u); if (_c) goto L_08a1d164; }
    c->r[2] = mem_r32(ram, c->r[29] + 0x000000ccu);
    c->r[2] = c->r[2] + 0x00000007u;
    c->r[2] = alx_ins(c->r[2], 0u, 0u, 2u);
    c->r[16] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[17] = mem_r32(ram, c->r[2] + 0x00000004u);
    c->r[3] = c->r[2] + 0x00000008u;
    mem_w32(ram, c->r[29] + 0x000000ccu, c->r[3]);
L_08a1d15c:
    { c->r[5] = 0u + 0x00000001u; goto L_08a1d0c8; }
L_08a1d164:
    c->r[2] = c->r[4] & 0x0010u;
    { int _c = (c->r[2] != 0u); c->r[2] = mem_r32(ram, c->r[29] + 0x000000ccu); if (_c) goto L_08a1d194; }
    c->r[3] = mem_r32(ram, c->r[29] + 0x000000d0u);
    c->r[2] = c->r[3] & 0x0040u;
    { int _c = (c->r[2] == 0u); c->r[2] = mem_r32(ram, c->r[29] + 0x000000ccu); if (_c) goto L_08a1d194; }
    c->r[17] = 0u + 0u;
    c->r[16] = mem_r16(ram, c->r[2] + 0x00000000u);
    c->r[4] = c->r[2] + 0x00000004u;
    { mem_w32(ram, c->r[29] + 0x000000ccu, c->r[4]); goto L_08a1d15c; }
L_08a1d194:
    c->r[17] = 0u + 0u;
    c->r[6] = c->r[2] + 0x00000004u;
    c->r[16] = mem_r32(ram, c->r[2] + 0x00000000u);
    { mem_w32(ram, c->r[29] + 0x000000ccu, c->r[6]); goto L_08a1d15c; }
L_08a1d1a8:
    c->r[2] = 0x08a50000u;
    c->r[2] = c->r[2] + 0x0000176cu;
L_08a1d1b0:
    c->r[3] = mem_r32(ram, c->r[29] + 0x000000d0u);
    mem_w32(ram, c->r[29] + 0x000000e0u, c->r[2]);
    c->r[2] = c->r[3] & 0x0020u;
    { int _c = (c->r[2] == 0u); c->r[6] = mem_r32(ram, c->r[29] + 0x000000d0u); if (_c) goto L_08a1d204; }
    c->r[4] = mem_r32(ram, c->r[29] + 0x000000ccu);
    c->r[4] = c->r[4] + 0x00000007u;
    c->r[4] = alx_ins(c->r[4], 0u, 0u, 2u);
    c->r[16] = mem_r32(ram, c->r[4] + 0x00000000u);
    c->r[17] = mem_r32(ram, c->r[4] + 0x00000004u);
    c->r[4] = c->r[4] + 0x00000008u;
L_08a1d1dc:
    mem_w32(ram, c->r[29] + 0x000000ccu, c->r[4]);
L_08a1d1e0:
    c->r[4] = mem_r32(ram, c->r[29] + 0x000000d0u);
    c->r[2] = c->r[16] | c->r[17];
    c->r[5] = 0u + 0x00000002u;
    { int _c = (c->r[2] == 0u); c->r[3] = c->r[4] & 0x0001u; if (_c) goto L_08a1d0c8; }
    c->r[2] = c->r[4] | 0x0002u;
    if (c->r[3] != 0u) c->r[4] = c->r[2];
    { mem_w32(ram, c->r[29] + 0x000000d0u, c->r[4]); goto L_08a1d0c8; }
L_08a1d204:
    c->r[2] = c->r[6] & 0x0010u;
    { int _c = (c->r[2] == 0u); c->r[3] = mem_r32(ram, c->r[29] + 0x000000d0u); if (_c) goto L_08a1d228; }
    c->r[2] = mem_r32(ram, c->r[29] + 0x000000ccu);
    c->r[17] = 0u + 0u;
    c->r[16] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000004u;
    { mem_w32(ram, c->r[29] + 0x000000ccu, c->r[2]); goto L_08a1d1e0; }
L_08a1d228:
    c->r[2] = c->r[3] & 0x0040u;
    { int _c = (c->r[2] == 0u); c->r[2] = mem_r32(ram, c->r[29] + 0x000000ccu); if (_c) goto L_08a1d244; }
    c->r[17] = 0u + 0u;
    c->r[16] = mem_r16(ram, c->r[2] + 0x00000000u);
    { c->r[4] = c->r[2] + 0x00000004u; goto L_08a1d1dc; }
L_08a1d244:
    c->r[17] = 0u + 0u;
    c->r[6] = c->r[2] + 0x00000004u;
    c->r[16] = mem_r32(ram, c->r[2] + 0x00000000u);
    { mem_w32(ram, c->r[29] + 0x000000ccu, c->r[6]); goto L_08a1d1e0; }
L_08a1d258:
    c->r[2] = 0u + 0x00000043u;
    { int _c = (c->r[21] == c->r[2]); c->r[19] = c->r[29] + 0x00000060u; if (_c) goto L_08a1d274; }
    c->r[3] = mem_r32(ram, c->r[29] + 0x000000d0u);
    c->r[2] = c->r[3] & 0x0010u;
    { int _c = (c->r[2] == 0u); c->r[2] = mem_r32(ram, c->r[29] + 0x000000ccu); if (_c) goto L_08a1d2c0; }
L_08a1d274:
    c->r[16] = c->r[29] + 0x000000a0u;
    c->r[4] = c->r[16] + 0u;
    c->r[5] = 0u + 0u;
    { c->r[31] = 0x08a1d288u; c->r[6] = 0u + 0x00000008u; func_08a19ec4(c, ram); }
    c->r[3] = mem_r32(ram, c->r[29] + 0x000000ccu);
    c->r[4] = mem_r32(ram, c->r[29] + 0x000000c4u);
    c->r[7] = c->r[16] + 0u;
    c->r[6] = mem_r32(ram, c->r[3] + 0x00000000u);
    { c->r[31] = 0x08a1d2a0u; c->r[5] = c->r[19] + 0u; func_08a1f4d4(c, ram); }
    c->r[4] = mem_r32(ram, c->r[29] + 0x000000ccu);
    c->r[22] = c->r[2] + 0u;
    c->r[2] = 0u + 0xffffffffu;
    c->r[4] = c->r[4] + 0x00000004u;
    { int _c = (c->r[22] == c->r[2]); mem_w32(ram, c->r[29] + 0x000000ccu, c->r[4]); if (_c) goto L_08a1cc68; }
L_08a1d2b8:
    { mem_w8(ram, c->r[29] + 0x00000000u, 0u); goto L_08a1c9c0; }
L_08a1d2c0:
    c->r[22] = 0u + 0x00000001u;
    c->r[3] = mem_r8(ram, c->r[2] + 0x00000000u);
    c->r[6] = c->r[2] + 0x00000004u;
    mem_w32(ram, c->r[29] + 0x000000ccu, c->r[6]);
    { mem_w8(ram, c->r[29] + 0x00000060u, c->r[3]); goto L_08a1d2b8; }
L_08a1d2d8:
    c->r[6] = mem_r32(ram, c->r[29] + 0x000000d0u);
    c->r[4] = mem_r8(ram, c->r[18] + 0x00000000u);
    { c->r[6] = c->r[6] | 0x0040u; goto L_08a1c844; }
L_08a1d2e8:
    c->r[4] = mem_r8(ram, c->r[18] + 0x00000000u);
    c->r[2] = 0u + 0x0000006cu;
    c->r[3] = alx_seb(c->r[4]);
    { int _c = (c->r[3] == c->r[2]); c->r[3] = mem_r32(ram, c->r[29] + 0x000000d0u); if (_c) goto L_08a1d304; }
    { c->r[3] = c->r[3] | 0x0010u; goto L_08a1c8d8; }
L_08a1d304:
    c->r[18] = c->r[18] + 0x00000001u;
    c->r[2] = mem_r32(ram, c->r[29] + 0x000000d0u);
    c->r[4] = mem_r8(ram, c->r[18] + 0x00000000u);
    { c->r[2] = c->r[2] | 0x0020u; goto L_08a1c80c; }
L_08a1d318:
    c->r[3] = mem_r32(ram, c->r[29] + 0x000000d0u);
    c->r[2] = c->r[3] & 0x0020u;
    { int _c = (c->r[2] == 0u); c->r[2] = c->r[3] & 0x0010u; if (_c) goto L_08a1d350; }
    c->r[2] = mem_r32(ram, c->r[29] + 0x000000ccu);
    c->r[4] = mem_r32(ram, c->r[29] + 0x000000d4u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[5] = (u32)((s32)c->r[4] >> 31);
    c->r[6] = c->r[2] + 0x00000004u;
    mem_w32(ram, c->r[29] + 0x000000ccu, c->r[6]);
    mem_w32(ram, c->r[3] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[3] + 0x00000004u, c->r[5]);
    { c->r[4] = mem_r8(ram, c->r[18] + 0x00000000u); goto L_08a1c704; }
L_08a1d350:
    { int _c = (c->r[2] == 0u); c->r[3] = mem_r32(ram, c->r[29] + 0x000000d0u); if (_c) goto L_08a1d374; }
    c->r[2] = mem_r32(ram, c->r[29] + 0x000000ccu);
    c->r[6] = mem_r32(ram, c->r[29] + 0x000000d4u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[4] = c->r[2] + 0x00000004u;
    mem_w32(ram, c->r[29] + 0x000000ccu, c->r[4]);
    { mem_w32(ram, c->r[3] + 0x00000000u, c->r[6]); goto L_08a1c700; }
L_08a1d374:
    c->r[2] = c->r[3] & 0x0040u;
    { int _c = (c->r[2] == 0u); c->r[2] = mem_r32(ram, c->r[29] + 0x000000ccu); if (_c) goto L_08a1d398; }
    c->r[6] = mem_r32(ram, c->r[29] + 0x000000d4u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[4] = c->r[2] + 0x00000004u;
    mem_w32(ram, c->r[29] + 0x000000ccu, c->r[4]);
    { mem_w16(ram, c->r[3] + 0x00000000u, c->r[6]); goto L_08a1c700; }
L_08a1d398:
    c->r[4] = mem_r32(ram, c->r[29] + 0x000000d4u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000004u;
    mem_w32(ram, c->r[29] + 0x000000ccu, c->r[2]);
    { mem_w32(ram, c->r[3] + 0x00000000u, c->r[4]); goto L_08a1c700; }
L_08a1d3b0:
    c->r[3] = mem_r32(ram, c->r[29] + 0x000000ccu);
    c->r[2] = 0x08a50000u;
    c->r[2] = c->r[2] + 0x00001780u;
    mem_w32(ram, c->r[29] + 0x000000e0u, c->r[2]);
    c->r[2] = c->r[3] + 0x00000004u;
    c->r[17] = 0u + 0u;
    c->r[16] = mem_r32(ram, c->r[3] + 0x00000000u);
    c->r[3] = mem_r32(ram, c->r[29] + 0x000000d0u);
    c->r[5] = 0u + 0x00000002u;
    c->r[21] = 0u + 0x00000078u;
    c->r[3] = c->r[3] | 0x0002u;
    mem_w32(ram, c->r[29] + 0x000000ccu, c->r[2]);
    { mem_w32(ram, c->r[29] + 0x000000d0u, c->r[3]); goto L_08a1d0c8; }
L_08a1d3e8:
    c->r[6] = mem_r32(ram, c->r[29] + 0x000000d0u);
    c->r[4] = mem_r8(ram, c->r[18] + 0x00000000u);
    { c->r[6] = c->r[6] | 0x0020u; goto L_08a1c844; }
L_08a1d3f8:
    c->r[2] = mem_r32(ram, c->r[29] + 0x000000ccu);
    c->r[19] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[4] = c->r[2] + 0x00000004u;
    mem_w8(ram, c->r[29] + 0x00000000u, 0u);
    { int _c = (c->r[19] == 0u); mem_w32(ram, c->r[29] + 0x000000ccu, c->r[4]); if (_c) goto L_08a1d550; }
    c->r[2] = 0u + 0x00000053u;
    { int _c = (c->r[21] == c->r[2]); c->r[6] = mem_r32(ram, c->r[29] + 0x000000d0u); if (_c) goto L_08a1d428; }
    c->r[2] = c->r[6] & 0x0010u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_08a1d51c; }
L_08a1d428:
    c->r[4] = c->r[29] + 0x000000b0u;
    c->r[5] = 0u + 0u;
    c->r[6] = 0u + 0x00000008u;
    mem_w32(ram, c->r[29] + 0x000000c0u, c->r[19]);
    c->r[17] = 0u + 0u;
    { c->r[31] = 0x08a1d444u; c->r[22] = 0u + 0u; func_08a19ec4(c, ram); }
    { int _c = ((s32)c->r[23] < 0); c->r[30] = 0u + 0xffffffffu; if (_c) goto L_08a1d4ec; }
L_08a1d44c:
    c->r[3] = mem_r32(ram, c->r[29] + 0x000000c0u);
    c->r[2] = c->r[17] << 2;
    c->r[2] = c->r[2] + c->r[3];
    c->r[6] = mem_r32(ram, c->r[2] + 0x00000000u);
    { int _c = (c->r[6] == 0u); c->r[4] = mem_r32(ram, c->r[29] + 0x000000c4u); if (_c) goto L_08a1d490; }
    c->r[5] = c->r[29] + 0x00000060u;
    { c->r[31] = 0x08a1d470u; c->r[7] = c->r[29] + 0x000000b0u; func_08a1f4d4(c, ram); }
    { int _c = (c->r[2] == c->r[30]); c->r[3] = c->r[2] + c->r[22]; if (_c) goto L_08a1cc68; }
    c->r[2] = ((s32)c->r[23] < (s32)c->r[3]) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_08a1d490; }
    c->r[22] = c->r[3] + 0u;
    { int _c = (c->r[3] != c->r[23]); c->r[17] = c->r[17] + 0x00000001u; if (_c) goto L_08a1d44c; }
L_08a1d490:
    { int _c = (c->r[22] == 0u); c->r[4] = mem_r32(ram, c->r[29] + 0x000000dcu); if (_c) goto L_08a1c9c4; }
    c->r[4] = mem_r32(ram, c->r[29] + 0x000000c4u);
    { c->r[31] = 0x08a1d4a4u; c->r[5] = c->r[22] + 0x00000001u; func_08a197ec(c, ram); }
    { int _c = (c->r[2] == 0u); mem_w32(ram, c->r[29] + 0x000000e4u, c->r[2]); if (_c) goto L_08a1cc7c; }
    c->r[6] = 0u + 0x00000008u;
    c->r[4] = c->r[29] + 0x000000b0u;
    { c->r[31] = 0x08a1d4bcu; c->r[5] = 0u + 0u; func_08a19ec4(c, ram); }
    c->r[4] = mem_r32(ram, c->r[29] + 0x000000c4u);
    c->r[5] = mem_r32(ram, c->r[29] + 0x000000e4u);
    c->r[8] = c->r[29] + 0x000000b0u;
    c->r[6] = c->r[29] + 0x000000c0u;
    { c->r[31] = 0x08a1d4d4u; c->r[7] = c->r[22] + 0u; func_08a1f590(c, ram); }
    { int _c = (c->r[2] != c->r[22]); c->r[3] = mem_r32(ram, c->r[29] + 0x000000e4u); if (_c) goto L_08a1cc68; }
    c->r[2] = c->r[3] + c->r[22];
    c->r[19] = c->r[3] + 0u;
    { mem_w8(ram, c->r[2] + 0x00000000u, 0u); goto L_08a1c9c0; }
L_08a1d4ec:
    c->r[4] = mem_r32(ram, c->r[29] + 0x000000c4u);
    c->r[5] = 0u + 0u;
    c->r[6] = c->r[29] + 0x000000c0u;
    c->r[7] = 0u + 0u;
    { c->r[31] = 0x08a1d504u; c->r[8] = c->r[29] + 0x000000b0u; func_08a1f590(c, ram); }
    c->r[22] = c->r[2] + 0u;
    c->r[2] = 0u + 0xffffffffu;
    { int _c = (c->r[22] == c->r[2]); c->r[3] = mem_r32(ram, c->r[29] + 0x000000e4u); if (_c) goto L_08a1cc6c; }
    { mem_w32(ram, c->r[29] + 0x000000c0u, c->r[19]); goto L_08a1d490; }
L_08a1d51c:
    { int _c = ((s32)c->r[23] < 0); c->r[4] = c->r[19] + 0u; if (_c) goto L_08a1c9b4; }
    c->r[5] = 0u + 0u;
    { c->r[31] = 0x08a1d530u; c->r[6] = c->r[23] + 0u; func_08a221a8(c, ram); }
    { int _c = (c->r[2] == 0u); c->r[22] = c->r[23] + 0u; if (_c) goto L_08a1c9c0; }
    c->r[22] = c->r[2] - c->r[19];
    c->r[2] = ((s32)c->r[23] < (s32)c->r[22]) ? 1u : 0u;
    if (c->r[2] != 0u) { c->r[22] = c->r[23] + 0u; goto L_08a1c9c0; }
    { c->r[4] = mem_r32(ram, c->r[29] + 0x000000dcu); goto L_08a1c9c4; }
L_08a1d550:
    c->r[2] = 0x08a50000u;
    c->r[19] = c->r[2] + 0x00001794u;
    { c->r[22] = 0u + 0x00000006u; goto L_08a1c9c0; }
L_08a1d560:
    { int _c = (c->r[21] == 0u); c->r[19] = c->r[29] + 0x00000060u; if (_c) goto L_08a1d574; }
    mem_w8(ram, c->r[29] + 0x00000060u, c->r[21]);
    { c->r[22] = 0u + 0x00000001u; goto L_08a1d2b8; }
L_08a1d574:
    c->r[2] = mem_r32(ram, c->r[29] + 0x00000018u);
    { int _c = (c->r[2] != 0u); c->r[4] = mem_r32(ram, c->r[29] + 0x000000c8u); if (_c) goto L_08a1d588; }
    { mem_w32(ram, c->r[29] + 0x00000014u, 0u); goto L_08a1cc68; }
L_08a1d588:
    { c->r[31] = 0x08a1d590u; c->r[5] = c->r[29] + 0x00000010u; func_08a1c4f4(c, ram); }
    if (c->r[2] == 0u) { mem_w32(ram, c->r[29] + 0x00000014u, 0u); goto L_08a1cc68; }
    { c->r[3] = mem_r32(ram, c->r[29] + 0x000000e4u); goto L_08a1cc6c; }
L_08a1d5a0:
    c->r[2] = 0x08a50000u;
    { c->r[2] = c->r[2] + 0x00001780u; goto L_08a1d1b0; }
L_08a1d5ac:
    c->r[4] = mem_r32(ram, c->r[29] + 0x000000c8u);
    { c->r[31] = 0x08a1d5b8u; c->r[5] = c->r[29] + 0x00000010u; func_08a1c4f4(c, ram); }
    { int _c = (c->r[2] != 0u); c->r[20] = c->r[29] + 0x00000020u; if (_c) goto L_08a1cc68; }
    { c->r[6] = mem_r32(ram, c->r[29] + 0x000000d4u); goto L_08a1c780; }
L_08a1d5c8:
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[3] + 0x0000000eu);
    { int _c = ((s32)c->r[2] < 0); c->r[6] = mem_r32(ram, c->r[29] + 0x000000ccu); if (_c) goto L_08a1c6e8; }
    c->r[4] = c->r[3] + 0u;
    { c->r[31] = 0x08a1d5e0u; c->r[5] = c->r[16] + 0u; func_08a1c540(c, ram); }
    { c->r[3] = c->r[2] + 0u; goto L_08a1cc94; }
    return; /* fell out of func_08a1c664 */
}

/* func_08a2201c  0x08a2201c..0x08a22040  36 bytes, source=sweep */
void func_08a2201c(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08a2201cu);
    c->r[29] = c->r[29] + 0xfffffff0u;
    mem_w32(ram, c->r[29] + 0x00000000u, c->r[31]);
    { c->r[31] = 0x08a2202cu; func_08a19374(c, ram); }
    { c->r[31] = 0x08a22034u; c->r[4] = c->r[2] + 0u; func_08a21fd0(c, ram); }
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000000u);
    { c->r[29] = c->r[29] + 0x00000010u; return; }
    return; /* fell out of func_08a2201c */
}

/* func_08a23ee8  0x08a23ee8..0x08a23f50  104 bytes, source=sweep */
void func_08a23ee8(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08a23ee8u);
    c->r[29] = c->r[29] + 0xfffffff0u;
    c->r[2] = c->r[5] + 0u;
    mem_w32(ram, c->r[29] + 0x00000004u, c->r[17]);
    c->r[5] = c->r[6] + 0u;
    c->r[17] = c->r[4] + 0u;
    mem_w32(ram, c->r[29] + 0x00000000u, c->r[16]);
    c->r[6] = c->r[7] + 0u;
    c->r[4] = c->r[2] + 0u;
    c->r[16] = 0x08ba0000u;
    mem_w32(ram, c->r[29] + 0x00000008u, c->r[31]);
    { c->r[31] = 0x08a23f18u; mem_w32(ram, c->r[16] + 0x000002acu, 0u); func_08a18aa4(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = 0u + 0xffffffffu;
    { int _c = (c->r[3] == c->r[2]); c->r[2] = mem_r32(ram, c->r[16] + 0x000002acu); if (_c) goto L_08a23f40; }
L_08a23f28:
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000008u);
L_08a23f2c:
    c->r[17] = mem_r32(ram, c->r[29] + 0x00000004u);
    c->r[16] = mem_r32(ram, c->r[29] + 0x00000000u);
    c->r[2] = c->r[3] + 0u;
    { c->r[29] = c->r[29] + 0x00000010u; return; }
L_08a23f40:
    if (c->r[2] != 0u) { mem_w32(ram, c->r[17] + 0x00000000u, c->r[2]); goto L_08a23f28; }
    { c->r[31] = mem_r32(ram, c->r[29] + 0x00000008u); goto L_08a23f2c; }
    return; /* fell out of func_08a23ee8 */
}
