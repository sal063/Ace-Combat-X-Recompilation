#include "pspreco.h"
#include "symbols.h"
#include <math.h>

/* func_08804ae4  0x08804ae4..0x08804b40  92 bytes, source=fde */
void func_08804ae4(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08804ae4u);
    c->r[29] = c->r[29] + 0xfffffff0u;
    mem_w32(ram, c->r[29] + 0x00000004u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000000u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    { c->r[31] = 0x08804afcu; func_0896d7ac(c, ram); }
    c->r[4] = 0x08a70000u;
    { c->r[31] = 0x08804b08u; c->r[4] = c->r[4] + 0xffffb34cu; func_089d7fe4(c, ram); }
    c->r[4] = 0x08a70000u;
    { c->r[31] = 0x08804b14u; c->r[4] = c->r[4] + 0xffffb640u; func_089df4c4(c, ram); }
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x08804b20u; c->r[4] = c->r[4] + 0xffffc930u; func_089f57ec(c, ram); }
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x08804b2cu; c->r[4] = mem_r32(ram, c->r[4] + 0x00002fa4u); func_08a19594(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000004u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000000u);
    { c->r[29] = c->r[29] + 0x00000010u; return; }
    return; /* fell out of func_08804ae4 */
}

/* func_08806d80  0x08806d80..0x08806dc4  68 bytes, source=sweep */
void func_08806d80(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08806d80u);
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
    { c->r[31] = 0x08806db0u; c->r[5] = c->r[2] + 0u; func_08806b6c(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_08806d80 */
}

/* func_08807d8c  0x08807d8c..0x08807e6c  224 bytes, source=sweep */
void func_08807d8c(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08807d8cu);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = 0xffff0000u;
    c->r[2] = c->r[2] | 0x27b8u;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_08807e00; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = 0u | 0xe848u;
    c->r[3] = c->r[3] + c->r[2];
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[3]);
L_08807dc4:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = 0u | 0xd848u;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    { int _c = (c->r[2] != c->r[3]); if (_c) goto L_08807de4; }
    { goto L_08807e00; }
L_08807de4:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[2] + 0xfffffff8u;
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[2]);
    { c->r[31] = 0x08807df8u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000004u); func_08808318(c, ram); }
    { goto L_08807dc4; }
L_08807e00:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = 0u + 0xffffffb8u;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_08807e58; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = 0u | 0xd848u;
    c->r[3] = c->r[3] + c->r[2];
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[3]);
L_08807e20:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000048u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    { int _c = (c->r[2] != c->r[3]); if (_c) goto L_08807e3c; }
    { goto L_08807e58; }
L_08807e3c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[2] + 0xffffff94u;
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]);
    { c->r[31] = 0x08807e50u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000008u); func_088082d8(c, ram); }
    { goto L_08807e20; }
L_08807e58:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_08807d8c */
}

/* func_0880978c  0x0880978c..0x08809874  232 bytes, source=fde */
void func_0880978c(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0880978cu);
    c->r[29] = c->r[29] + 0xfffffee0u;
    mem_w32(ram, c->r[29] + 0x00000114u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000110u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_088097b4; }
    { goto L_08809860; }
L_088097b4:
    c->r[2] = c->r[30] + 0x00000010u;
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0x08a40000u;
    c->r[5] = c->r[5] + 0xffffe898u;
    c->r[6] = 0x08a80000u;
    { c->r[31] = 0x088097d0u; c->r[6] = mem_r32(ram, c->r[6] + 0x00002eb4u); func_08a1ad34(c, ram); }
    c->r[4] = 0x08a60000u;
    c->r[4] = c->r[4] + 0x00005260u;
    { c->r[31] = 0x088097e0u; c->r[5] = 0u + 0x00000001u; func_089d7208(c, ram); }
    c->r[2] = c->r[30] + 0x00000010u;
    { c->r[31] = 0x088097ecu; c->r[4] = c->r[2] + 0u; func_08808e2c(c, ram); }
    c->r[4] = 0x08a60000u;
    c->r[4] = c->r[4] + 0x00005260u;
    { c->r[31] = 0x088097fcu; c->r[5] = 0u + 0x00000002u; func_089d7194(c, ram); }
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x08809808u; c->r[4] = c->r[4] + 0x00000af4u; func_089c8ddc(c, ram); }
    c->r[3] = 0x08a80000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00002eb4u);
    c->r[2] = 0u + 0x00000002u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_08809854; }
    c->r[2] = 0x08a80000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00002eb8u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_08809834; }
    { goto L_08809844; }
L_08809834:
    c->r[2] = 0u + 0x00000012u;
    c->r[1] = 0x08a80000u;
    { mem_w32(ram, c->r[1] + 0x00003c40u, c->r[2]); goto L_08809860; }
L_08809844:
    c->r[2] = 0u + 0x00000003u;
    c->r[1] = 0x08a80000u;
    { mem_w32(ram, c->r[1] + 0x00003c40u, c->r[2]); goto L_08809860; }
L_08809854:
    c->r[2] = 0u + 0x00000003u;
    c->r[1] = 0x08a80000u;
    mem_w32(ram, c->r[1] + 0x00003c40u, c->r[2]);
L_08809860:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000114u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000110u);
    { c->r[29] = c->r[29] + 0x00000120u; return; }
    return; /* fell out of func_0880978c */
}

/* func_0880d060  0x0880d060..0x0880d0e0  128 bytes, source=sweep */
void func_0880d060(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0880d060u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = 0u | 0xffffu;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_0880d0a4; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = 0u + 0x00000001u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_0880d0a4; }
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x0880d0a4u; c->r[4] = c->r[4] + 0x00003c30u; func_0880d694(c, ram); }
L_0880d0a4:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = 0u | 0xffffu;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_0880d0cc; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_0880d0cc; }
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x0880d0ccu; c->r[4] = c->r[4] + 0x00003c30u; func_0880d6b4(c, ram); }
L_0880d0cc:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_0880d060 */
}

/* func_0880d700  0x0880d700..0x0880d880  384 bytes, source=fde */
void func_0880d700(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0880d700u);
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
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffffee70u);
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
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffffee70u);
    c->f[0] = c->f[1] * c->f[0];
    c->f[0] = c->f[2] + c->f[0];
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    c->r[2] = f2u(c->f[0]);
    mem_w16(ram, c->r[30] + 0x0000000eu, c->r[2]);
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[30] + 0x00000004u);
    c->f[0] = u2f(c->r[2]);
    c->f[1] = (f32)(s32)f2u(c->f[0]);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffffee70u);
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
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffffee70u);
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
    { c->r[31] = 0x0880d86cu; c->r[8] = 0u + 0u; func_08929da0(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000024u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000020u);
    { c->r[29] = c->r[29] + 0x00000030u; return; }
    return; /* fell out of func_0880d700 */
}

/* func_0880f344  0x0880f344..0x0880f8fc  1464 bytes, source=fde */
void func_0880f344(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0880f344u);
    c->r[29] = c->r[29] + 0xffffff80u;
    mem_w32(ram, c->r[29] + 0x00000074u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000070u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[2] = c->r[30] + 0x00000010u;
    { c->r[31] = 0x0880f364u; c->r[4] = c->r[2] + 0u; func_08808240(c, ram); }
    c->r[2] = c->r[30] + 0x00000020u;
    { c->r[31] = 0x0880f370u; c->r[4] = c->r[2] + 0u; func_08808240(c, ram); }
    c->r[2] = c->r[30] + 0x00000030u;
    { c->r[31] = 0x0880f37cu; c->r[4] = c->r[2] + 0u; func_08808240(c, ram); }
    c->r[4] = 0x08a70000u;
    c->r[4] = c->r[4] + 0xffffb640u;
    c->r[5] = 0u + 0x00000002u;
    { c->r[31] = 0x0880f390u; c->r[6] = 0u + 0x00000006u; func_089df7a0(c, ram); }
    c->r[4] = 0x08a70000u;
    c->r[4] = c->r[4] + 0xffffb640u;
    c->r[5] = 0u + 0x00000200u;
    { c->r[31] = 0x0880f3a4u; c->r[6] = 0u + 0u; func_089e0bd8(c, ram); }
    c->r[2] = c->r[30] + 0x00000050u;
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffffef3cu);
    c->r[1] = 0x08a40000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0xffffef40u);
    c->r[4] = c->r[2] + 0u;
    c->f[12] = u2f(0u);
    c->f[13] = u2f(0u);
    c->f[14] = c->f[0];
    { c->r[31] = 0x0880f3d0u; c->f[15] = c->f[1]; func_0880d140(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000050u);
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000054u);
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000058u);
    mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000005cu);
    mem_w32(ram, c->r[30] + 0x0000001cu, c->r[2]);
    c->r[2] = c->r[30] + 0x00000050u;
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffffef44u);
    c->r[1] = 0x08a40000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0xffffef44u);
    c->r[1] = 0x08a40000u;
    c->f[2] = mem_rf32(ram, c->r[1] + 0xffffef44u);
    c->r[1] = 0x08a40000u;
    c->f[3] = mem_rf32(ram, c->r[1] + 0xffffef44u);
    c->r[4] = c->r[2] + 0u;
    c->f[12] = c->f[0];
    c->f[13] = c->f[1];
    c->f[14] = c->f[2];
    { c->r[31] = 0x0880f42cu; c->f[15] = c->f[3]; func_0880d140(c, ram); }
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
    { c->r[31] = 0x0880f46cu; func_0880d140(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000050u);
    mem_w32(ram, c->r[30] + 0x00000030u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000054u);
    mem_w32(ram, c->r[30] + 0x00000034u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000058u);
    mem_w32(ram, c->r[30] + 0x00000038u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000005cu);
    mem_w32(ram, c->r[30] + 0x0000003cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    mem_w32(ram, c->r[30] + 0x00000060u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000060u);
    c->r[2] = mem_r8(ram, c->r[3] + 0x00000002u);
    c->r[2] = (c->r[2] < 0x00000005u) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_0880f8e8; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000060u);
    c->r[2] = mem_r8(ram, c->r[3] + 0x00000002u);
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08a40000u;
    c->r[2] = c->r[2] + 0xffffef50u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    { u32 _t = c->r[2]; switch (_t) { case 0x0880f4ccu: goto L_0880f4cc; case 0x0880f568u: goto L_0880f568; case 0x0880f68cu: goto L_0880f68c; case 0x0880f798u: goto L_0880f798; case 0x0880f8c8u: goto L_0880f8c8; default: recomp_trap_unknown_indirect(c, ram, 0x0880f4c4u, _t); return; } }
L_0880f4cc:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x00000000u);
    c->f[0] = u2f(c->r[2]);
    c->f[1] = (f32)(s32)f2u(c->f[0]);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffffef48u);
    c->f[0] = c->f[1] * c->f[0];
    mem_wf32(ram, c->r[30] + 0x00000040u, c->f[0]);
    c->r[2] = c->r[30] + 0x00000050u;
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffffef44u);
    c->r[1] = 0x08a40000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0xffffef44u);
    c->r[1] = 0x08a40000u;
    c->f[2] = mem_rf32(ram, c->r[1] + 0xffffef44u);
    c->r[4] = c->r[2] + 0u;
    c->f[12] = c->f[0];
    c->f[13] = c->f[1];
    c->f[14] = c->f[2];
    { c->r[31] = 0x0880f520u; c->f[15] = mem_rf32(ram, c->r[30] + 0x00000040u); func_0880d140(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000050u);
    mem_w32(ram, c->r[30] + 0x00000020u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000054u);
    mem_w32(ram, c->r[30] + 0x00000024u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000058u);
    mem_w32(ram, c->r[30] + 0x00000028u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000005cu);
    mem_w32(ram, c->r[30] + 0x0000002cu, c->r[2]);
    c->r[2] = c->r[30] + 0x00000010u;
    c->r[3] = c->r[30] + 0x00000020u;
    c->r[7] = c->r[30] + 0x00000030u;
    c->r[4] = 0x08a70000u;
    c->r[4] = c->r[4] + 0xffffb640u;
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x0880f560u; c->r[6] = c->r[3] + 0u; func_089ec948(c, ram); }
    { goto L_0880f8e8; }
L_0880f568:
    c->r[2] = c->r[30] + 0x00000010u;
    c->r[3] = c->r[30] + 0x00000020u;
    c->r[7] = c->r[30] + 0x00000030u;
    c->r[4] = 0x08a70000u;
    c->r[4] = c->r[4] + 0xffffb640u;
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x0880f588u; c->r[6] = c->r[3] + 0u; func_089ec948(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x00000004u);
    c->r[4] = 0x08a70000u;
    c->r[4] = c->r[4] + 0xffffb640u;
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x0880f5a4u; c->r[6] = 0u + 0u; func_089e0bd8(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x00000000u);
    c->f[0] = u2f(c->r[2]);
    c->f[1] = (f32)(s32)f2u(c->f[0]);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffffef48u);
    c->f[0] = c->f[1] * c->f[0];
    mem_wf32(ram, c->r[30] + 0x00000040u, c->f[0]);
    c->r[2] = c->r[30] + 0x00000050u;
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffffef4cu);
    c->r[1] = 0x08a40000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0xffffef4cu);
    c->r[1] = 0x08a40000u;
    c->f[2] = mem_rf32(ram, c->r[1] + 0xffffef4cu);
    c->r[4] = c->r[2] + 0u;
    c->f[12] = c->f[0];
    c->f[13] = c->f[1];
    c->f[14] = c->f[2];
    { c->r[31] = 0x0880f5f8u; c->f[15] = mem_rf32(ram, c->r[30] + 0x00000040u); func_0880d140(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000050u);
    mem_w32(ram, c->r[30] + 0x00000020u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000054u);
    mem_w32(ram, c->r[30] + 0x00000024u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000058u);
    mem_w32(ram, c->r[30] + 0x00000028u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000005cu);
    mem_w32(ram, c->r[30] + 0x0000002cu, c->r[2]);
    c->r[2] = c->r[30] + 0x00000050u;
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffffef3cu);
    c->r[1] = 0x08a40000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0xffffef40u);
    c->r[4] = c->r[2] + 0u;
    c->f[12] = u2f(0u);
    c->f[13] = u2f(0u);
    c->f[14] = c->f[0];
    { c->r[31] = 0x0880f644u; c->f[15] = c->f[1]; func_0880d140(c, ram); }
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
    { c->r[31] = 0x0880f684u; c->r[6] = c->r[3] + 0u; func_089ec948(c, ram); }
    { goto L_0880f8e8; }
L_0880f68c:
    c->r[2] = c->r[30] + 0x00000010u;
    c->r[3] = c->r[30] + 0x00000020u;
    c->r[7] = c->r[30] + 0x00000030u;
    c->r[4] = 0x08a70000u;
    c->r[4] = c->r[4] + 0xffffb640u;
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x0880f6acu; c->r[6] = c->r[3] + 0u; func_089ec948(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x00000004u);
    c->r[4] = 0x08a70000u;
    c->r[4] = c->r[4] + 0xffffb640u;
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x0880f6c8u; c->r[6] = 0u + 0u; func_089e0bd8(c, ram); }
    c->r[2] = c->r[30] + 0x00000050u;
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffffef4cu);
    c->r[1] = 0x08a40000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0xffffef4cu);
    c->r[1] = 0x08a40000u;
    c->f[2] = mem_rf32(ram, c->r[1] + 0xffffef4cu);
    c->r[1] = 0x08a40000u;
    c->f[3] = mem_rf32(ram, c->r[1] + 0xffffef44u);
    c->r[4] = c->r[2] + 0u;
    c->f[12] = c->f[0];
    c->f[13] = c->f[1];
    c->f[14] = c->f[2];
    { c->r[31] = 0x0880f704u; c->f[15] = c->f[3]; func_0880d140(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000050u);
    mem_w32(ram, c->r[30] + 0x00000020u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000054u);
    mem_w32(ram, c->r[30] + 0x00000024u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000058u);
    mem_w32(ram, c->r[30] + 0x00000028u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000005cu);
    mem_w32(ram, c->r[30] + 0x0000002cu, c->r[2]);
    c->r[2] = c->r[30] + 0x00000050u;
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffffef3cu);
    c->r[1] = 0x08a40000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0xffffef40u);
    c->r[4] = c->r[2] + 0u;
    c->f[12] = u2f(0u);
    c->f[13] = u2f(0u);
    c->f[14] = c->f[0];
    { c->r[31] = 0x0880f750u; c->f[15] = c->f[1]; func_0880d140(c, ram); }
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
    { c->r[31] = 0x0880f790u; c->r[6] = c->r[3] + 0u; func_089ec948(c, ram); }
    { goto L_0880f8e8; }
L_0880f798:
    c->r[2] = c->r[30] + 0x00000010u;
    c->r[3] = c->r[30] + 0x00000020u;
    c->r[7] = c->r[30] + 0x00000030u;
    c->r[4] = 0x08a70000u;
    c->r[4] = c->r[4] + 0xffffb640u;
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x0880f7b8u; c->r[6] = c->r[3] + 0u; func_089ec948(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x00000004u);
    c->r[4] = 0x08a70000u;
    c->r[4] = c->r[4] + 0xffffb640u;
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x0880f7d4u; c->r[6] = 0u + 0u; func_089e0bd8(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x00000000u);
    c->f[0] = u2f(c->r[2]);
    c->f[1] = (f32)(s32)f2u(c->f[0]);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffffef48u);
    c->f[1] = c->f[1] * c->f[0];
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffffef44u);
    c->f[0] = c->f[0] - c->f[1];
    mem_wf32(ram, c->r[30] + 0x00000040u, c->f[0]);
    c->r[2] = c->r[30] + 0x00000050u;
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffffef4cu);
    c->r[1] = 0x08a40000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0xffffef4cu);
    c->r[1] = 0x08a40000u;
    c->f[2] = mem_rf32(ram, c->r[1] + 0xffffef4cu);
    c->r[4] = c->r[2] + 0u;
    c->f[12] = c->f[0];
    c->f[13] = c->f[1];
    c->f[14] = c->f[2];
    { c->r[31] = 0x0880f834u; c->f[15] = mem_rf32(ram, c->r[30] + 0x00000040u); func_0880d140(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000050u);
    mem_w32(ram, c->r[30] + 0x00000020u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000054u);
    mem_w32(ram, c->r[30] + 0x00000024u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000058u);
    mem_w32(ram, c->r[30] + 0x00000028u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000005cu);
    mem_w32(ram, c->r[30] + 0x0000002cu, c->r[2]);
    c->r[2] = c->r[30] + 0x00000050u;
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffffef3cu);
    c->r[1] = 0x08a40000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0xffffef40u);
    c->r[4] = c->r[2] + 0u;
    c->f[12] = u2f(0u);
    c->f[13] = u2f(0u);
    c->f[14] = c->f[0];
    { c->r[31] = 0x0880f880u; c->f[15] = c->f[1]; func_0880d140(c, ram); }
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
    { c->r[31] = 0x0880f8c0u; c->r[6] = c->r[3] + 0u; func_089ec948(c, ram); }
    { goto L_0880f8e8; }
L_0880f8c8:
    c->r[2] = c->r[30] + 0x00000010u;
    c->r[3] = c->r[30] + 0x00000020u;
    c->r[7] = c->r[30] + 0x00000030u;
    c->r[4] = 0x08a70000u;
    c->r[4] = c->r[4] + 0xffffb640u;
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x0880f8e8u; c->r[6] = c->r[3] + 0u; func_089ec948(c, ram); }
L_0880f8e8:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000074u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000070u);
    { c->r[29] = c->r[29] + 0x00000080u; return; }
    return; /* fell out of func_0880f344 */
}

/* func_08812acc  0x08812acc..0x08812b78  172 bytes, source=fde */
void func_08812acc(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08812accu);
    c->r[29] = c->r[29] + 0xfffffee0u;
    mem_w32(ram, c->r[29] + 0x00000114u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000110u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x08812ae8u; c->r[4] = c->r[4] + 0x00000af4u; func_0880810c(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[2]);
    c->r[3] = c->r[30] + 0x00000010u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000195u;
    c->r[4] = c->r[3] + 0u;
    c->r[5] = 0x08a40000u;
    c->r[5] = c->r[5] + 0xfffff170u;
    { c->r[31] = 0x08812b0cu; c->r[6] = c->r[2] + 0u; func_08a1ad34(c, ram); }
    c->r[2] = c->r[30] + 0x00000010u;
    { c->r[31] = 0x08812b18u; c->r[4] = c->r[2] + 0u; func_08808e2c(c, ram); }
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x08812b24u; c->r[4] = c->r[4] + 0x00000af4u; func_0880d4a0(c, ram); }
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08a50000u;
    c->r[2] = c->r[2] + 0x00001fb4u;
    c->r[7] = c->r[3] + c->r[2];
    c->r[3] = c->r[30] + 0x00000010u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000195u;
    c->r[4] = c->r[3] + 0u;
    c->r[5] = 0x08a40000u;
    c->r[5] = c->r[5] + 0xfffff178u;
    c->r[6] = c->r[2] + 0u;
    { c->r[31] = 0x08812b58u; c->r[7] = mem_r32(ram, c->r[7] + 0x00000000u); func_08a1ad34(c, ram); }
    c->r[2] = c->r[30] + 0x00000010u;
    { c->r[31] = 0x08812b64u; c->r[4] = c->r[2] + 0u; func_08808e2c(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000114u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000110u);
    { c->r[29] = c->r[29] + 0x00000120u; return; }
    return; /* fell out of func_08812acc */
}

/* func_0881667c  0x0881667c..0x08816760  228 bytes, source=fde */
void func_0881667c(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0881667cu);
    c->r[29] = c->r[29] + 0xffffffa0u;
    mem_w32(ram, c->r[29] + 0x00000054u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000050u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000af4u;
    { c->r[31] = 0x088166a4u; c->r[5] = 0u + 0x00000006u; func_088145a8(c, ram); }
    mem_w8(ram, c->r[30] + 0x00000008u, c->r[2]);
    c->r[2] = c->r[30] + 0x00000010u;
    c->r[3] = 0x08a40000u;
    c->r[3] = c->r[3] + 0xfffff324u;
    c->r[4] = c->r[2] + 0u;
    c->r[5] = c->r[3] + 0u;
    { c->r[31] = 0x088166c4u; c->r[6] = 0u + 0x00000024u; func_08a19db8(c, ram); }
    c->r[2] = 0u + 0x00000001u;
    mem_w32(ram, c->r[30] + 0x00000040u, c->r[2]);
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x088166d8u; c->r[4] = c->r[4] + 0x00000af4u; func_0880d294(c, ram); }
    { int _c = (c->r[2] != 0u); if (_c) goto L_088166e4; }
    mem_w32(ram, c->r[30] + 0x00000040u, 0u);
L_088166e4:
    c->r[3] = mem_r8(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000040u);
    c->r[2] = c->r[2] + c->r[3];
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[30];
    c->r[2] = c->r[2] + 0x00000010u;
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x00000000u);
    mem_w32(ram, c->r[30] + 0x00000044u, c->r[2]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = mem_r8(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[30];
    c->r[2] = c->r[2] + 0x00000014u;
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000000u);
    mem_w8(ram, c->r[4] + 0x00000042u, c->r[2]);
    c->r[4] = 0x08a40000u;
    c->r[4] = c->r[4] + 0xfffff304u;
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000044u);
    { c->r[31] = 0x0881674cu; c->r[6] = 0u + 0x00000001u; func_08928cb8(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000054u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000050u);
    { c->r[29] = c->r[29] + 0x00000060u; return; }
    return; /* fell out of func_0881667c */
}

/* func_08819dd4  0x08819dd4..0x08819e18  68 bytes, source=sweep */
void func_08819dd4(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08819dd4u);
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
    { c->r[31] = 0x08819e04u; c->r[5] = c->r[2] + 0u; func_088191c8(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_08819dd4 */
}

/* func_08820aac  0x08820aac..0x08820af0  68 bytes, source=sweep */
void func_08820aac(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08820aacu);
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
    return; /* fell out of func_08820aac */
}

/* func_08825020  0x08825020..0x08825118  248 bytes, source=fde */
void func_08825020(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08825020u);
    c->r[29] = c->r[29] + 0xffffffd0u;
    mem_w32(ram, c->r[29] + 0x00000024u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000020u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    c->r[2] = c->r[6] + 0u;
    c->r[3] = c->r[7] + 0u;
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[8]);
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[9]);
    mem_w16(ram, c->r[30] + 0x00000008u, c->r[2]);
    mem_w16(ram, c->r[30] + 0x0000000au, c->r[3]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000004u);
    { c->r[31] = 0x08825060u; c->r[6] = 0u + 0u; func_0880ef80(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000040u);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x08825078u; c->r[5] = c->r[2] + 0u; func_08826fd8(c, ram); }
    c->r[4] = 0x08a70000u;
    c->r[4] = c->r[4] + 0xffffb640u;
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x0882508cu; c->r[6] = 0u + 0u; func_089e0bd8(c, ram); }
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000700u);
    c->r[2] = 0u + 0x000002e8u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[4] = c->lo;
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
    { c->r[31] = 0x088250d4u; c->r[5] = mem_r32(ram, c->r[30] + 0x0000000cu); func_088269d4(c, ram); }
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[30] + 0x00000008u);
    c->r[3] = (u32)(s32)(s16)mem_r16(ram, c->r[30] + 0x0000000au);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xfffffa94u);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[6] = c->r[2] + 0u;
    c->r[7] = c->r[3] + 0u;
    c->r[8] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->f[12] = c->f[0];
    { c->r[31] = 0x08825104u; c->r[9] = 0u + 0u; func_08923508(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000024u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000020u);
    { c->r[29] = c->r[29] + 0x00000030u; return; }
    return; /* fell out of func_08825020 */
}

/* func_08826ee4  0x08826ee4..0x08826f2c  72 bytes, source=sweep */
void func_08826ee4(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08826ee4u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[2] = c->r[5] + 0u;
    c->r[3] = c->r[6] + 0u;
    mem_w8(ram, c->r[30] + 0x00000004u, c->r[2]);
    mem_w8(ram, c->r[30] + 0x00000005u, c->r[3]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] + 0x00001b80u;
    c->r[2] = mem_r8(ram, c->r[30] + 0x00000005u);
    mem_w8(ram, c->r[3] + 0x00000018u, c->r[2]);
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_08826ee4 */
}

/* func_0882acd0  0x0882acd0..0x0882ad6c  156 bytes, source=fde */
void func_0882acd0(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0882acd0u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_0882ad10; }
    c->r[4] = 0x08a40000u;
    c->r[4] = c->r[4] + 0x0000161cu;
    c->r[5] = 0u + 0x000015c0u;
    { c->r[31] = 0x0882ad08u; c->r[6] = 0u + 0x00000001u; func_08928cb8(c, ram); }
    { goto L_0882ad58; }
L_0882ad10:
    { c->r[31] = 0x0882ad18u; c->r[4] = 0u + 0x00000001u; func_089c5e18(c, ram); }
    { int _c = (c->r[2] == 0u); if (_c) goto L_0882ad34; }
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00003eb4u;
    c->r[5] = 0x08830000u;
    { c->r[31] = 0x0882ad34u; c->r[5] = c->r[5] + 0xffffa4c4u; func_0880f03c(c, ram); }
L_0882ad34:
    { c->r[31] = 0x0882ad3cu; c->r[4] = 0u + 0x00000001u; func_089c5f10(c, ram); }
    { int _c = (c->r[2] == 0u); if (_c) goto L_0882ad58; }
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00003eb4u;
    c->r[5] = 0x08830000u;
    { c->r[31] = 0x0882ad58u; c->r[5] = c->r[5] + 0xffffac34u; func_0880f03c(c, ram); }
L_0882ad58:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_0882acd0 */
}

/* func_0882f418  0x0882f418..0x0882f514  252 bytes, source=fde */
void func_0882f418(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0882f418u);
    c->r[29] = c->r[29] + 0xffffffc0u;
    mem_w32(ram, c->r[29] + 0x00000034u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000030u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x0000002bu);
    mem_w32(ram, c->r[30] + 0x00000020u, c->r[2]);
    c->r[2] = 0u + 0x00000004u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000020u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_0882f488; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[2] = ((s32)c->r[3] < (s32)0x00000005u) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_0882f470; }
    c->r[2] = 0u + 0x00000002u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000020u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_0882f488; }
    { goto L_0882f500; }
L_0882f470:
    c->r[2] = 0u + 0x00000009u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000020u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_0882f4c8; }
    { goto L_0882f500; }
L_0882f488:
    c->r[2] = 0x08a50000u;
    c->r[2] = mem_r16(ram, c->r[2] + 0x00002f04u);
    mem_w16(ram, c->r[30] + 0x00000010u, c->r[2]);
    c->r[2] = 0x08a50000u;
    c->r[2] = mem_r16(ram, c->r[2] + 0x00002f06u);
    mem_w16(ram, c->r[30] + 0x00000012u, c->r[2]);
    c->r[3] = c->r[30] + 0x00000010u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000008u;
    c->r[4] = 0u + 0x00000020u;
    c->r[5] = 0u + 0u;
    c->r[6] = c->r[3] + 0u;
    { c->r[31] = 0x0882f4c0u; c->r[7] = c->r[2] + 0u; func_0893a5d0(c, ram); }
    { goto L_0882f500; }
L_0882f4c8:
    c->r[2] = 0x08a50000u;
    c->r[2] = mem_r16(ram, c->r[2] + 0x00002f1cu);
    mem_w16(ram, c->r[30] + 0x00000010u, c->r[2]);
    c->r[2] = 0x08a50000u;
    c->r[2] = mem_r16(ram, c->r[2] + 0x00002f1eu);
    mem_w16(ram, c->r[30] + 0x00000012u, c->r[2]);
    c->r[3] = c->r[30] + 0x00000010u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000008u;
    c->r[4] = 0u + 0x00000020u;
    c->r[5] = 0u + 0u;
    c->r[6] = c->r[3] + 0u;
    { c->r[31] = 0x0882f500u; c->r[7] = c->r[2] + 0u; func_0893a5d0(c, ram); }
L_0882f500:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000034u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000030u);
    { c->r[29] = c->r[29] + 0x00000040u; return; }
    return; /* fell out of func_0882f418 */
}

/* func_08832370  0x08832370..0x088323d8  104 bytes, source=fde */
void func_08832370(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08832370u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = 0u + 0u;
    c->r[6] = 0u + 0x00000005u;
    c->r[7] = 0u + 0x00000008u;
    c->r[8] = 0u + 0x0000003cu;
    { c->r[31] = 0x088323a0u; c->r[9] = 0u + 0x0000001eu; func_088317c4(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_088323b8; }
    { mem_w32(ram, c->r[30] + 0x00000008u, 0u); goto L_088323c0; }
L_088323b8:
    c->r[2] = 0u + 0x00000001u;
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]);
L_088323c0:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_08832370 */
}

/* func_08834064  0x08834064..0x08834100  156 bytes, source=fde */
void func_08834064(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08834064u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000008u;
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x0883408cu; c->r[5] = 0u + 0u; func_0893b904(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000008u;
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x088340a0u; c->r[5] = 0u + 0u; func_089385f4(c, ram); }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x088340acu; c->r[5] = 0u + 0u; func_0882f514(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000008u;
    { c->r[31] = 0x088340bcu; c->r[4] = c->r[2] + 0u; func_08938064(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000008u;
    { c->r[31] = 0x088340ccu; c->r[4] = c->r[2] + 0u; func_08938218(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000008u;
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0u + 0xffffffffu;
    { c->r[31] = 0x088340e4u; c->r[6] = 0u + 0u; func_0893a73c(c, ram); }
    { c->r[31] = 0x088340ecu; c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u); func_08830474(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_08834064 */
}

/* func_08836ab0  0x08836ab0..0x08836bc8  280 bytes, source=fde */
void func_08836ab0(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08836ab0u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000018u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[30]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[16]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000020u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00001b44u);
    c->f[0] = c->f[1] + c->f[0];
    mem_wf32(ram, c->r[3] + 0x00000020u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000020u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00001b48u);
    alx_c_cond_s(c, 12, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_08836b10; }
    { goto L_08836bb0; }
L_08836b10:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[2] + 0x00000034u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000ac8u;
    { c->r[31] = 0x08836b2cu; c->r[5] = c->r[2] + 0u; func_089cb820(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_08836b84; }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = 0u + 0x0000009du;
    c->r[6] = 0u + 0xffffffffu;
    c->r[7] = 0u + 0xffffffffu;
    c->r[8] = 0u + 0u;
    c->r[9] = 0u + 0u;
    { c->r[31] = 0x08836b5cu; c->r[10] = 0u + 0u; func_0892fcac(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[16] = c->r[2] + 0x00000034u;
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000ac8u;
    { c->r[31] = 0x08836b78u; c->r[5] = mem_r32(ram, c->r[30] + 0x00000008u); func_089cb780(c, ram); }
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    mem_w32(ram, c->r[16] + 0x00000000u, c->r[2]);
L_08836b84:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00001b48u);
    mem_wf32(ram, c->r[2] + 0x00000020u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[2] + 0x00000008u;
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x08836ba8u; c->r[5] = 0u + 0x00000002u; func_08937a50(c, ram); }
    { c->r[31] = 0x08836bb0u; func_08925510(c, ram); }
L_08836bb0:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000018u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[16] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_08836ab0 */
}

/* func_0883b080  0x0883b080..0x0883b0c0  64 bytes, source=fde */
void func_0883b080(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0883b080u);
    c->r[29] = c->r[29] + 0xfffffff0u;
    mem_w32(ram, c->r[29] + 0x00000004u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000000u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    c->r[4] = 0u + 0x00000001u;
    c->r[5] = 0u + 0u;
    c->r[6] = 0x08840000u;
    c->r[6] = c->r[6] + 0xffffaf4cu;
    c->r[7] = 0u + 0u;
    { c->r[31] = 0x0883b0acu; c->r[8] = 0u + 0u; func_089c6b7c(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000004u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000000u);
    { c->r[29] = c->r[29] + 0x00000010u; return; }
    return; /* fell out of func_0883b080 */
}

/* func_0883d2b0  0x0883d2b0..0x0883d328  120 bytes, source=fde */
void func_0883d2b0(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0883d2b0u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_0883d2f0; }
    c->r[4] = 0x08a40000u;
    c->r[4] = c->r[4] + 0x00001d90u;
    c->r[5] = 0u + 0x000015aau;
    { c->r[31] = 0x0883d2e8u; c->r[6] = 0u + 0x00000001u; func_08928cb8(c, ram); }
    { goto L_0883d314; }
L_0883d2f0:
    { c->r[31] = 0x0883d2f8u; c->r[4] = 0u + 0x00000001u; func_089c5e18(c, ram); }
    { int _c = (c->r[2] == 0u); if (_c) goto L_0883d314; }
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00004e10u;
    c->r[5] = 0x08840000u;
    { c->r[31] = 0x0883d314u; c->r[5] = c->r[5] + 0xffffd328u; func_0880f03c(c, ram); }
L_0883d314:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_0883d2b0 */
}

/* func_08846884  0x08846884..0x08846a04  384 bytes, source=fde */
void func_08846884(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08846884u);
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
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00001f80u);
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
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00001f80u);
    c->f[0] = c->f[1] * c->f[0];
    c->f[0] = c->f[2] + c->f[0];
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    c->r[2] = f2u(c->f[0]);
    mem_w16(ram, c->r[30] + 0x0000000eu, c->r[2]);
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[30] + 0x00000004u);
    c->f[0] = u2f(c->r[2]);
    c->f[1] = (f32)(s32)f2u(c->f[0]);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00001f80u);
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
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00001f80u);
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
    { c->r[31] = 0x088469f0u; c->r[8] = 0u + 0u; func_08929da0(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000024u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000020u);
    { c->r[29] = c->r[29] + 0x00000030u; return; }
    return; /* fell out of func_08846884 */
}

/* func_0884bf54  0x0884bf54..0x0884bf84  48 bytes, source=sweep */
void func_0884bf54(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0884bf54u);
    c->r[29] = c->r[29] + 0xfffffff0u;
    mem_w32(ram, c->r[29] + 0x00000004u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000000u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    c->r[4] = 0u + 0u;
    { c->r[31] = 0x0884bf70u; c->r[5] = 0u | 0xffffu; func_0884bb50(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000004u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000000u);
    { c->r[29] = c->r[29] + 0x00000010u; return; }
    return; /* fell out of func_0884bf54 */
}

/* func_0884d334  0x0884d334..0x0884d478  324 bytes, source=fde */
void func_0884d334(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0884d334u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] & 0x000fu;
    { int _c = (c->r[2] == 0u); if (_c) goto L_0884d388; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = (u32)((s32)c->r[3] >> 31);
    c->r[2] = c->r[2] >> 28;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = (u32)((s32)c->r[2] >> 4);
    c->r[2] = c->r[2] << 4;
    c->r[3] = c->r[3] - c->r[2];
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] - c->r[3];
    c->r[2] = c->r[2] + 0x00000010u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[2]);
L_0884d388:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[2] + 0xffffe000u;
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = 0xffff0000u;
    c->r[2] = c->r[2] | 0x25f8u;
    c->r[2] = c->r[3] + c->r[2];
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[1] = 0x08a90000u;
    mem_w32(ram, c->r[1] + 0xffff8e4cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00001000u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[1] = 0x08a90000u;
    mem_w32(ram, c->r[1] + 0xffff8c54u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00001000u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[1] = 0x08a90000u;
    mem_w32(ram, c->r[1] + 0xffff8e48u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000200u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[1] = 0x08a90000u;
    mem_w32(ram, c->r[1] + 0xffff8e50u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = 0u | 0x9808u;
    c->r[2] = c->r[3] + c->r[2];
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[1] = 0x08a90000u;
    mem_w32(ram, c->r[1] + 0xffff8e54u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00004000u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[2]);
    c->r[4] = 0x08a90000u;
    c->r[4] = c->r[4] + 0xffff8e58u;
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x0884d438u; c->r[6] = mem_r32(ram, c->r[30] + 0x00000004u); func_0885a36c(c, ram); }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[3] + c->r[2];
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = 0x08a90000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0xffff8e48u);
    c->r[2] = c->r[3] - c->r[2];
    c->r[1] = 0x08a90000u;
    mem_w32(ram, c->r[1] + 0xffff8e70u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_0884d334 */
}

/* func_08850614  0x08850614..0x088509f8  996 bytes, source=fde */
void func_08850614(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08850614u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    { c->r[31] = 0x08850634u; mem_w32(ram, c->r[30] + 0x00000008u, c->r[6]); func_0884dfd8(c, ram); }
    c->r[2] = 0x08a90000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0xffff8b30u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_088509e4; }
    c->r[2] = 0x08a90000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0xffff8b34u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_088509e4; }
    c->r[2] = 0u + 0x00000001u;
    c->r[1] = 0x08a90000u;
    mem_w32(ram, c->r[1] + 0xffff8b34u, c->r[2]);
    c->r[1] = 0x08a90000u;
    mem_w32(ram, c->r[1] + 0xffff8c5cu, 0u);
    c->r[1] = 0x08a90000u;
    mem_w32(ram, c->r[1] + 0xffff8c60u, 0u);
    c->r[1] = 0x08a90000u;
    mem_w32(ram, c->r[1] + 0xffff8c64u, 0u);
    c->r[1] = 0x08a90000u;
    mem_w32(ram, c->r[1] + 0xffff8c68u, 0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[1] = 0x08a90000u;
    mem_w32(ram, c->r[1] + 0xffff8c6cu, c->r[2]);
    c->r[1] = 0x08a90000u;
    mem_w32(ram, c->r[1] + 0xffff8c70u, 0u);
    c->r[1] = 0x08a90000u;
    mem_w32(ram, c->r[1] + 0xffff8cc8u, 0u);
    c->r[1] = 0x08a90000u;
    mem_w32(ram, c->r[1] + 0xffff8cccu, 0u);
    c->r[1] = 0x08a90000u;
    mem_w32(ram, c->r[1] + 0xffff8cd0u, 0u);
    c->r[1] = 0x08a90000u;
    mem_w32(ram, c->r[1] + 0xffff8cd4u, 0u);
    c->r[2] = 0x08a90000u;
    c->r[2] = mem_r16(ram, c->r[2] + 0xffff8b3cu);
    c->r[1] = 0x08a90000u;
    mem_w16(ram, c->r[1] + 0xffff8e24u, c->r[2]);
    c->r[2] = 0x08a90000u;
    c->r[2] = mem_r16(ram, c->r[2] + 0xffff8b3eu);
    c->r[1] = 0x08a90000u;
    mem_w16(ram, c->r[1] + 0xffff8e26u, c->r[2]);
    c->r[2] = 0x08a90000u;
    c->r[2] = mem_r16(ram, c->r[2] + 0xffff8b40u);
    c->r[1] = 0x08a90000u;
    mem_w16(ram, c->r[1] + 0xffff8e28u, c->r[2]);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0xffffc930u;
    c->r[5] = 0x31000000u;
    c->r[5] = c->r[5] | 0x007au;
    c->r[6] = 0u + 0u;
    c->r[7] = 0u + 0u;
    { c->r[31] = 0x08850704u; c->r[8] = 0u + 0u; func_089f6924(c, ram); }
    c->r[1] = 0x08a90000u;
    mem_w32(ram, c->r[1] + 0xffff8c88u, c->r[2]);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0xffffc930u;
    c->r[5] = 0x31000000u;
    c->r[5] = c->r[5] | 0x004du;
    c->r[6] = 0u + 0u;
    c->r[7] = 0u + 0u;
    { c->r[31] = 0x0885072cu; c->r[8] = 0u + 0u; func_089f6924(c, ram); }
    c->r[1] = 0x08a90000u;
    mem_w32(ram, c->r[1] + 0xffff8c8cu, c->r[2]);
    c->r[2] = 0x08a90000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0xffff8e50u);
    c->r[2] = c->r[2] + 0x00000404u;
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0u + 0u;
    { c->r[31] = 0x08850750u; c->r[6] = 0u + 0x00000400u; func_08a19ec4(c, ram); }
    c->r[2] = 0x08a90000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0xffff8e50u);
    c->r[2] = c->r[2] + 0x00005008u;
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0u + 0u;
    { c->r[31] = 0x0885076cu; c->r[6] = 0u + 0x00000400u; func_08a19ec4(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_088507a4; }
    c->r[1] = 0x08a90000u;
    mem_w32(ram, c->r[1] + 0xffff8c58u, 0u);
    c->r[1] = 0x08a90000u;
    mem_w8(ram, c->r[1] + 0xffff8cc0u, 0u);
    c->r[1] = 0x08a90000u;
    mem_w8(ram, c->r[1] + 0xffff8cc1u, 0u);
    c->r[2] = 0u + 0x00000001u;
    c->r[1] = 0x08a90000u;
    mem_w32(ram, c->r[1] + 0xffff8cc4u, c->r[2]);
    c->r[1] = 0x08a90000u;
    mem_w32(ram, c->r[1] + 0xffff8c84u, 0u);
L_088507a4:
    c->r[4] = 0x08a90000u;
    { c->r[31] = 0x088507b0u; c->r[4] = mem_r32(ram, c->r[4] + 0xffff8c58u); func_0885b108(c, ram); }
    c->r[4] = 0x08a90000u;
    c->r[4] = c->r[4] + 0xffff8e58u;
    c->r[5] = 0x08a90000u;
    { c->r[31] = 0x088507c4u; c->r[5] = mem_r32(ram, c->r[5] + 0xffff8b44u); func_0885a7cc(c, ram); }
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00002740u);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00003c30u;
    c->r[5] = 0u + 0x00000002u;
    { c->r[31] = 0x088507e0u; c->f[12] = c->f[0]; func_089b3514(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_08850804; }
    { c->r[31] = 0x088507f4u; func_089c3a94(c, ram); }
    c->r[1] = 0x08a90000u;
    mem_w32(ram, c->r[1] + 0xffff8c80u, c->r[2]);
    { c->r[31] = 0x08850804u; c->r[4] = 0u + 0x00000003u; func_089c3618(c, ram); }
L_08850804:
    c->r[2] = 0x08a90000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0xffffbbdcu);
    c->r[1] = 0x08a90000u;
    mem_w32(ram, c->r[1] + 0xffff8e2cu, c->r[2]);
    c->r[1] = 0x08a90000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffffba78u);
    c->r[1] = 0x08a90000u;
    mem_wf32(ram, c->r[1] + 0xffff8e30u, c->f[0]);
    c->r[1] = 0x08a90000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffffba7cu);
    c->r[1] = 0x08a90000u;
    mem_wf32(ram, c->r[1] + 0xffff8e34u, c->f[0]);
    c->r[1] = 0x08a90000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffffbab8u);
    c->r[1] = 0x08a90000u;
    mem_wf32(ram, c->r[1] + 0xffff8e38u, c->f[0]);
    c->r[1] = 0x08a90000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffffbabcu);
    c->r[1] = 0x08a90000u;
    mem_wf32(ram, c->r[1] + 0xffff8e3cu, c->f[0]);
    c->r[3] = 0x08a90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0xffffbbdcu);
    c->r[2] = 0u + 0xffffffdfu;
    c->r[2] = c->r[3] & c->r[2];
    c->r[1] = 0x08a90000u;
    mem_w32(ram, c->r[1] + 0xffffbbdcu, c->r[2]);
    c->r[2] = 0x08a90000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0xffffbda0u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_088508d0; }
    c->r[4] = 0x08a40000u;
    { c->r[31] = 0x08850888u; c->r[4] = c->r[4] + 0x00002730u; func_089c6f64(c, ram); }
    c->r[2] = c->r[2] + 0x00000004u;
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
    c->r[3] = 0x08a90000u;
    c->r[3] = (u32)(s32)(s16)mem_r16(ram, c->r[3] + 0xffff8e24u);
    c->r[2] = 0u + 0x00000188u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[3] = c->lo;
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[3] + c->r[2];
    c->r[4] = 0x08a90000u;
    c->r[4] = c->r[4] + 0xffffbc18u;
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x088508c0u; c->r[6] = 0u + 0x00000188u; func_08a19db8(c, ram); }
    c->r[2] = 0x08a90000u;
    c->r[2] = c->r[2] + 0xffffbc18u;
    c->r[1] = 0x08a90000u;
    mem_w32(ram, c->r[1] + 0xffffbda0u, c->r[2]);
L_088508d0:
    c->r[2] = 0u + 0xffffffffu;
    c->r[1] = 0x08a90000u;
    mem_w32(ram, c->r[1] + 0xffff8c7cu, c->r[2]);
    c->r[2] = 0u + 0x00000001u;
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
L_088508e4:
    c->r[2] = 0x08a90000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0xffff8e50u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[3] = c->r[2] + 0x00000001u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = (c->r[2] < c->r[3]) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_0885090c; }
    { goto L_08850960; }
L_0885090c:
    c->r[4] = 0x08a90000u;
    c->r[4] = mem_r32(ram, c->r[4] + 0xffff8e50u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 4;
    c->r[2] = c->r[2] + c->r[3];
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[4];
    c->r[2] = c->r[2] + 0x00000830u;
    c->r[3] = mem_r8(ram, c->r[2] + 0x00000010u);
    c->r[2] = 0u + 0x00000001u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_08850950; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[1] = 0x08a90000u;
    { mem_w32(ram, c->r[1] + 0xffff8c7cu, c->r[2]); goto L_08850960; }
L_08850950:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]); goto L_088508e4; }
L_08850960:
    c->r[2] = 0x08a80000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00002f90u);
    c->r[1] = 0x08a90000u;
    mem_w32(ram, c->r[1] + 0xffff8e20u, c->r[2]);
    c->r[2] = 0x08a90000u;
    c->r[2] = c->r[2] + 0xffff8ce0u;
    c->r[1] = 0x08a80000u;
    { c->r[31] = 0x08850984u; mem_w32(ram, c->r[1] + 0x00002f90u, c->r[2]); func_08899478(c, ram); }
    { c->r[31] = 0x0885098cu; func_0884d640(c, ram); }
    c->r[4] = 0x08a90000u;
    { c->r[31] = 0x08850998u; c->r[4] = c->r[4] + 0xffff9078u; func_0884d850(c, ram); }
    c->r[4] = 0u + 0x00000042u;
    c->r[5] = 0u + 0u;
    c->r[6] = 0u + 0u;
    c->r[7] = 0u + 0u;
    c->r[8] = 0u + 0u;
    { c->r[31] = 0x088509b4u; c->r[9] = 0u + 0u; func_089c6bec(c, ram); }
    c->r[1] = 0x08a90000u;
    mem_w32(ram, c->r[1] + 0xffff8cd4u, c->r[2]);
    c->r[2] = 0u + 0x00000001u;
    c->r[1] = 0x08a90000u;
    mem_w32(ram, c->r[1] + 0xffff90c8u, c->r[2]);
    c->r[4] = 0u + 0x0000005cu;
    c->r[5] = 0u + 0u;
    c->r[6] = 0u + 0u;
    c->r[7] = 0u + 0u;
    c->r[8] = 0u + 0u;
    { c->r[31] = 0x088509e4u; c->r[9] = 0u + 0u; func_089c6bec(c, ram); }
L_088509e4:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_08850614 */
}

/* func_08856a30  0x08856a30..0x08856a68  56 bytes, source=fde */
void func_08856a30(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08856a30u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x08856a54u; c->r[5] = mem_r32(ram, c->r[30] + 0x00000004u); func_08856a68(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_08856a30 */
}

/* func_08859fd4  0x08859fd4..0x0885a018  68 bytes, source=sweep */
void func_08859fd4(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08859fd4u);
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
    vfpu_exec(c, ram, 0x60028180u); /* vadd.q */
    vfpu_exec(c, ram, 0xf8800000u); /* sv.q */
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_08859fd4 */
}

/* func_0885ac24  0x0885ac24..0x0885ac4c  40 bytes, source=sweep */
void func_0885ac24(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0885ac24u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_0885ac24 */
}

/* func_0885d640  0x0885d640..0x0885d884  580 bytes, source=fde */
void func_0885d640(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0885d640u);
    c->r[29] = c->r[29] + 0xffffffd0u;
    mem_w32(ram, c->r[29] + 0x00000028u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000024u, c->r[30]);
    mem_w32(ram, c->r[29] + 0x00000020u, c->r[16]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    { c->r[31] = 0x0885d664u; mem_w32(ram, c->r[30] + 0x00000008u, c->r[6]); func_0885d5f0(c, ram); }
    c->r[4] = 0x08a90000u;
    { c->r[31] = 0x0885d670u; c->r[4] = c->r[4] + 0xffff9720u; func_0885d15c(c, ram); }
    c->r[4] = 0x08a90000u;
    { c->r[31] = 0x0885d67cu; c->r[4] = c->r[4] + 0xffff9720u; func_08862c64(c, ram); }
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
    mem_w32(ram, c->r[30] + 0x00000010u, 0u);
L_0885d684:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000101u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_0885d69c; }
    { goto L_0885d810; }
L_0885d69c:
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000000u);
    { int _c = ((s32)c->r[2] < 0); if (_c) goto L_0885d6bc; }
    { goto L_0885d800; }
L_0885d6bc:
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000000u);
    c->r[2] = c->r[2] & 0x0003u;
    mem_w8(ram, c->r[30] + 0x00000014u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000000u);
    c->r[2] = c->r[2] & 0x0004u;
    mem_w8(ram, c->r[30] + 0x00000015u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000000u);
    c->r[2] = c->r[2] & 0x0008u;
    mem_w8(ram, c->r[30] + 0x00000016u, c->r[2]);
    c->r[2] = mem_r8(ram, c->r[30] + 0x00000015u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_0885d790; }
    c->r[2] = mem_r8(ram, c->r[30] + 0x00000016u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_0885d790; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[1] = 0x08a90000u;
    mem_w32(ram, c->r[1] + 0xffffb814u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[1] = 0x08a90000u;
    mem_w32(ram, c->r[1] + 0xffffb818u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[1] = 0x08a90000u;
    mem_w32(ram, c->r[1] + 0xffffb81cu, c->r[2]);
    c->r[4] = 0u + 0x0000005fu;
    c->r[5] = 0u + 0u;
    c->r[6] = 0u + 0u;
    c->r[7] = 0u + 0u;
    c->r[8] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[9] = 0x08a90000u;
    { c->r[31] = 0x0885d760u; c->r[9] = c->r[9] + 0xffffb814u; func_089c6bec(c, ram); }
    c->r[16] = c->r[2] + 0u;
    c->r[2] = 0x08a90000u;
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0xffffb810u);
    { c->r[31] = 0x0885d774u; c->r[4] = c->r[2] + 0u; func_0885d590(c, ram); }
    mem_w32(ram, c->r[2] + 0x00000000u, c->r[16]);
    c->r[2] = 0x08a90000u;
    c->r[2] = mem_r16(ram, c->r[2] + 0xffffb810u);
    c->r[2] = c->r[2] + 0x00000001u;
    c->r[1] = 0x08a90000u;
    { mem_w16(ram, c->r[1] + 0xffffb810u, c->r[2]); goto L_0885d800; }
L_0885d790:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[1] = 0x08a90000u;
    mem_w32(ram, c->r[1] + 0xffffb820u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[1] = 0x08a90000u;
    mem_w32(ram, c->r[1] + 0xffffb824u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[1] = 0x08a90000u;
    mem_w32(ram, c->r[1] + 0xffffb828u, c->r[2]);
    c->r[4] = 0u + 0x00000060u;
    c->r[5] = 0u + 0u;
    c->r[6] = 0u + 0u;
    c->r[7] = 0u + 0u;
    c->r[8] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[9] = 0x08a90000u;
    { c->r[31] = 0x0885d7d4u; c->r[9] = c->r[9] + 0xffffb820u; func_089c6bec(c, ram); }
    c->r[16] = c->r[2] + 0u;
    c->r[2] = 0x08a90000u;
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0xffffb810u);
    { c->r[31] = 0x0885d7e8u; c->r[4] = c->r[2] + 0u; func_0885d590(c, ram); }
    mem_w32(ram, c->r[2] + 0x00000000u, c->r[16]);
    c->r[2] = 0x08a90000u;
    c->r[2] = mem_r16(ram, c->r[2] + 0xffffb810u);
    c->r[2] = c->r[2] + 0x00000001u;
    c->r[1] = 0x08a90000u;
    mem_w16(ram, c->r[1] + 0xffffb810u, c->r[2]);
L_0885d800:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]); goto L_0885d684; }
L_0885d810:
    c->r[4] = 0u + 0x00000061u;
    c->r[5] = 0u + 0u;
    c->r[6] = 0u + 0u;
    c->r[7] = 0u + 0u;
    c->r[8] = 0u + 0u;
    { c->r[31] = 0x0885d82cu; c->r[9] = 0u + 0u; func_089c6bec(c, ram); }
    c->r[16] = c->r[2] + 0u;
    c->r[2] = 0x08a90000u;
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0xffffb810u);
    { c->r[31] = 0x0885d840u; c->r[4] = c->r[2] + 0u; func_0885d590(c, ram); }
    mem_w32(ram, c->r[2] + 0x00000000u, c->r[16]);
    c->r[2] = 0x08a90000u;
    c->r[2] = mem_r16(ram, c->r[2] + 0xffffb810u);
    c->r[2] = c->r[2] + 0x00000001u;
    c->r[1] = 0x08a90000u;
    mem_w16(ram, c->r[1] + 0xffffb810u, c->r[2]);
    { c->r[31] = 0x0885d860u; c->r[4] = 0u + 0x00000001u; func_0885d5c4(c, ram); }
    c->r[2] = 0u + 0x00000001u;
    c->r[1] = 0x08a90000u;
    mem_w8(ram, c->r[1] + 0xffffb813u, c->r[2]);
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000028u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000024u);
    c->r[16] = mem_r32(ram, c->r[29] + 0x00000020u);
    { c->r[29] = c->r[29] + 0x00000030u; return; }
    return; /* fell out of func_0885d640 */
}

/* func_08861e44  0x08861e44..0x08861e88  68 bytes, source=sweep */
void func_08861e44(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08861e44u);
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
    { c->r[31] = 0x08861e74u; c->r[5] = c->r[2] + 0u; func_08861028(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_08861e44 */
}

/* func_08863a30  0x08863a30..0x08864100  1744 bytes, source=fde */
void func_08863a30(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08863a30u);
    c->r[29] = c->r[29] + 0xffffff60u;
    mem_w32(ram, c->r[29] + 0x00000090u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x0000008cu, c->r[30]);
    mem_w32(ram, c->r[29] + 0x00000088u, c->r[18]);
    mem_w32(ram, c->r[29] + 0x00000084u, c->r[17]);
    mem_w32(ram, c->r[29] + 0x00000080u, c->r[16]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[6]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000024u);
    c->f[0] = u2f(0u);
    alx_c_cond_s(c, 2, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_08863a7c; }
    { goto L_08863a8c; }
L_08863a7c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000030acu);
    mem_wf32(ram, c->r[2] + 0x00000024u, c->f[0]);
L_08863a8c:
    mem_w32(ram, c->r[30] + 0x00000010u, 0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000018u);
    mem_w32(ram, c->r[30] + 0x00000070u, c->r[2]);
    c->r[2] = 0u + 0x00000001u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000070u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_08863b14; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000070u);
    c->r[2] = ((s32)c->r[3] < (s32)0x00000002u) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_08863ad0; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000070u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_08863af8; }
    { goto L_08864048; }
L_08863ad0:
    c->r[2] = 0u + 0x00000002u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000070u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_08863c3c; }
    c->r[2] = 0u + 0x00000004u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000070u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_08863e58; }
    { goto L_08864048; }
L_08863af8:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000030acu);
    mem_wf32(ram, c->r[2] + 0x00000024u, c->f[0]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = 0u + 0x00000001u;
    mem_w8(ram, c->r[3] + 0x00000018u, c->r[2]);
L_08863b14:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    mem_w32(ram, c->r[2] + 0x0000001cu, 0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    mem_w32(ram, c->r[2] + 0x00000020u, 0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000004u);
    c->r[16] = c->r[2] + 0x00000030u;
    c->r[2] = c->r[30] + 0x00000020u;
    c->r[3] = 0x08a90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0xffffb944u);
    c->r[5] = 0x08a90000u;
    c->r[5] = mem_r32(ram, c->r[5] + 0xffffb944u);
    c->r[6] = 0x08a90000u;
    c->r[6] = mem_r32(ram, c->r[6] + 0xffffb944u);
    c->r[4] = c->r[2] + 0u;
    c->f[12] = mem_rf32(ram, c->r[3] + 0x000000a4u);
    c->f[13] = mem_rf32(ram, c->r[5] + 0x000000a8u);
    c->f[14] = mem_rf32(ram, c->r[6] + 0x000000acu);
    c->f[15] = u2f(0u);
    { c->r[31] = 0x08863b68u; func_0880d140(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    mem_w32(ram, c->r[16] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000024u);
    mem_w32(ram, c->r[16] + 0x00000004u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000028u);
    mem_w32(ram, c->r[16] + 0x00000008u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000002cu);
    mem_w32(ram, c->r[16] + 0x0000000cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000004u);
    c->r[16] = c->r[2] + 0x00000040u;
    c->r[2] = c->r[30] + 0x00000020u;
    c->r[3] = 0x08a90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0xffffb944u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000030b0u);
    c->r[4] = c->r[2] + 0u;
    c->f[12] = u2f(0u);
    c->f[13] = mem_rf32(ram, c->r[3] + 0x000000a8u);
    c->f[14] = c->f[0];
    c->f[15] = u2f(0u);
    { c->r[31] = 0x08863bc4u; func_0880d140(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    mem_w32(ram, c->r[16] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000024u);
    mem_w32(ram, c->r[16] + 0x00000004u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000028u);
    mem_w32(ram, c->r[16] + 0x00000008u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000002cu);
    mem_w32(ram, c->r[16] + 0x0000000cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000004u);
    c->r[16] = c->r[2] + 0x00000050u;
    c->r[2] = c->r[30] + 0x00000020u;
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000030b4u);
    c->r[4] = c->r[2] + 0u;
    c->f[12] = u2f(0u);
    c->f[13] = c->f[0];
    c->f[14] = u2f(0u);
    c->f[15] = u2f(0u);
    { c->r[31] = 0x08863c18u; func_0880d140(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    mem_w32(ram, c->r[16] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000024u);
    mem_w32(ram, c->r[16] + 0x00000004u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000028u);
    mem_w32(ram, c->r[16] + 0x00000008u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000002cu);
    { mem_w32(ram, c->r[16] + 0x0000000cu, c->r[2]); goto L_08864048; }
L_08863c3c:
    c->r[2] = 0u + 0x00000001u;
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000004u);
    c->r[16] = c->r[2] + 0x00000030u;
    c->r[2] = c->r[30] + 0x00000020u;
    c->r[3] = 0x08a90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0xffffb944u);
    c->r[5] = 0x08a90000u;
    c->r[5] = mem_r32(ram, c->r[5] + 0xffffb944u);
    c->r[6] = 0x08a90000u;
    c->r[6] = mem_r32(ram, c->r[6] + 0xffffb944u);
    c->r[4] = c->r[2] + 0u;
    c->f[12] = mem_rf32(ram, c->r[3] + 0x000000a4u);
    c->f[13] = mem_rf32(ram, c->r[5] + 0x000000a8u);
    c->f[14] = mem_rf32(ram, c->r[6] + 0x000000acu);
    c->f[15] = u2f(0u);
    { c->r[31] = 0x08863c88u; func_0880d140(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    mem_w32(ram, c->r[16] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000024u);
    mem_w32(ram, c->r[16] + 0x00000004u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000028u);
    mem_w32(ram, c->r[16] + 0x00000008u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000002cu);
    mem_w32(ram, c->r[16] + 0x0000000cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000004u);
    c->r[16] = c->r[2] + 0x00000040u;
    c->r[2] = c->r[30] + 0x00000020u;
    c->r[3] = 0x08a90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0xffffb944u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000030b0u);
    c->r[4] = c->r[2] + 0u;
    c->f[12] = u2f(0u);
    c->f[13] = mem_rf32(ram, c->r[3] + 0x000000a8u);
    c->f[14] = c->f[0];
    c->f[15] = u2f(0u);
    { c->r[31] = 0x08863ce4u; func_0880d140(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    mem_w32(ram, c->r[16] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000024u);
    mem_w32(ram, c->r[16] + 0x00000004u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000028u);
    mem_w32(ram, c->r[16] + 0x00000008u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000002cu);
    mem_w32(ram, c->r[16] + 0x0000000cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000004u);
    c->r[16] = c->r[2] + 0x00000050u;
    c->r[2] = c->r[30] + 0x00000020u;
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000030b4u);
    c->r[4] = c->r[2] + 0u;
    c->f[12] = u2f(0u);
    c->f[13] = c->f[0];
    c->f[14] = u2f(0u);
    c->f[15] = u2f(0u);
    { c->r[31] = 0x08863d38u; func_0880d140(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    mem_w32(ram, c->r[16] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000024u);
    mem_w32(ram, c->r[16] + 0x00000004u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000028u);
    mem_w32(ram, c->r[16] + 0x00000008u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000002cu);
    mem_w32(ram, c->r[16] + 0x0000000cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000004u);
    c->r[4] = c->r[2] + 0x00000040u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000014u);
    c->r[3] = c->r[2] + 0x00000020u;
    c->r[2] = 0x08a80000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00002ed8u);
    c->r[2] = c->r[2] + 0x00000020u;
    c->r[5] = c->r[3] + 0u;
    { c->r[31] = 0x08863d8cu; c->r[6] = c->r[2] + 0u; func_08820ca4(c, ram); }
    c->r[2] = c->r[30] + 0x00000020u;
    { c->r[31] = 0x08863d98u; c->r[4] = c->r[2] + 0u; func_08808240(c, ram); }
    c->r[2] = c->r[30] + 0x00000030u;
    { c->r[31] = 0x08863da4u; c->r[4] = c->r[2] + 0u; func_08808260(c, ram); }
    c->r[2] = c->r[30] + 0x00000030u;
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0u + 0u;
    { c->r[31] = 0x08863db8u; c->r[6] = mem_r32(ram, c->r[30] + 0x00000008u); func_0884c668(c, ram); }
    c->r[4] = c->r[30] + 0x00000020u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000004u);
    c->r[2] = c->r[2] + 0x00000040u;
    c->r[3] = c->r[30] + 0x00000030u;
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x08863dd8u; c->r[6] = c->r[3] + 0u; func_0884c26c(c, ram); }
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000028u);
    c->f[0] = u2f(0u);
    alx_c_cond_s(c, 12, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_08863df8; }
    { goto L_08863e04; }
L_08863df8:
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000030b8u);
    mem_wf32(ram, c->r[30] + 0x00000028u, c->f[0]);
L_08863e04:
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000024u);
    c->f[0] = u2f(0u);
    alx_c_cond_s(c, 12, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_08863e24; }
    { goto L_08863e30; }
L_08863e24:
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000030bcu);
    mem_wf32(ram, c->r[30] + 0x00000024u, c->f[0]);
L_08863e30:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000004u);
    c->r[2] = c->r[2] + 0x00000040u;
    c->r[3] = c->r[30] + 0x00000020u;
    c->r[4] = c->r[2] + 0u;
    c->r[5] = c->r[3] + 0u;
    { c->r[31] = 0x08863e50u; c->r[6] = mem_r32(ram, c->r[30] + 0x00000008u); func_0884c26c(c, ram); }
    { goto L_08864048; }
L_08863e58:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000004u);
    c->r[16] = c->r[2] + 0x00000030u;
    c->r[2] = c->r[30] + 0x00000020u;
    c->r[3] = 0x08a90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0xffffb944u);
    c->r[5] = 0x08a90000u;
    c->r[5] = mem_r32(ram, c->r[5] + 0xffffb944u);
    c->r[6] = 0x08a90000u;
    c->r[6] = mem_r32(ram, c->r[6] + 0xffffb944u);
    c->r[4] = c->r[2] + 0u;
    c->f[12] = mem_rf32(ram, c->r[3] + 0x000000a4u);
    c->f[13] = mem_rf32(ram, c->r[5] + 0x000000a8u);
    c->f[14] = mem_rf32(ram, c->r[6] + 0x000000acu);
    c->f[15] = u2f(0u);
    { c->r[31] = 0x08863e9cu; func_0880d140(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    mem_w32(ram, c->r[16] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000024u);
    mem_w32(ram, c->r[16] + 0x00000004u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000028u);
    mem_w32(ram, c->r[16] + 0x00000008u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000002cu);
    mem_w32(ram, c->r[16] + 0x0000000cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000004u);
    c->r[4] = c->r[2] + 0x00000040u;
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
    c->r[16] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    { c->r[31] = 0x08863f04u; c->f[12] = mem_rf32(ram, c->r[2] + 0x0000001cu); func_08a0f5bc(c, ram); }
    c->f[1] = c->f[0];
    c->f[0] = mem_rf32(ram, c->r[16] + 0x00000024u);
    c->f[0] = c->f[0] * c->f[1];
    mem_wf32(ram, c->r[30] + 0x0000000cu, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[17] = mem_r32(ram, c->r[2] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[16] = mem_r32(ram, c->r[2] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    { c->r[31] = 0x08863f30u; c->f[12] = mem_rf32(ram, c->r[2] + 0x00000020u); func_08a0f760(c, ram); }
    c->f[1] = c->f[0];
    c->f[0] = mem_rf32(ram, c->r[30] + 0x0000000cu);
    c->f[1] = c->f[1] * c->f[0];
    c->f[0] = mem_rf32(ram, c->r[16] + 0x00000040u);
    c->f[0] = c->f[0] - c->f[1];
    mem_wf32(ram, c->r[17] + 0x00000040u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[18] = mem_r32(ram, c->r[2] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[17] = mem_r32(ram, c->r[2] + 0x00000004u);
    c->r[16] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    { c->r[31] = 0x08863f68u; c->f[12] = mem_rf32(ram, c->r[2] + 0x0000001cu); func_08a0f760(c, ram); }
    c->f[1] = c->f[0];
    c->f[0] = mem_rf32(ram, c->r[16] + 0x00000024u);
    c->f[1] = c->f[1] * c->f[0];
    c->f[0] = mem_rf32(ram, c->r[17] + 0x00000044u);
    c->f[0] = c->f[0] - c->f[1];
    mem_wf32(ram, c->r[18] + 0x00000044u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[17] = mem_r32(ram, c->r[2] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[16] = mem_r32(ram, c->r[2] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    { c->r[31] = 0x08863f9cu; c->f[12] = mem_rf32(ram, c->r[2] + 0x00000020u); func_08a0f5bc(c, ram); }
    c->f[1] = c->f[0];
    c->f[0] = mem_rf32(ram, c->r[30] + 0x0000000cu);
    c->f[1] = c->f[1] * c->f[0];
    c->f[0] = mem_rf32(ram, c->r[16] + 0x00000048u);
    c->f[0] = c->f[0] - c->f[1];
    mem_wf32(ram, c->r[17] + 0x00000048u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000004u);
    c->r[16] = c->r[2] + 0x00000050u;
    c->r[2] = c->r[30] + 0x00000020u;
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000030b4u);
    c->r[4] = c->r[2] + 0u;
    c->f[12] = u2f(0u);
    c->f[13] = c->f[0];
    c->f[14] = u2f(0u);
    c->f[15] = u2f(0u);
    { c->r[31] = 0x08863fe8u; func_0880d140(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    mem_w32(ram, c->r[16] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000024u);
    mem_w32(ram, c->r[16] + 0x00000004u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000028u);
    mem_w32(ram, c->r[16] + 0x00000008u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000002cu);
    mem_w32(ram, c->r[16] + 0x0000000cu, c->r[2]);
    { c->r[31] = 0x08864010u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000004u); func_08863098(c, ram); }
    { int _c = (c->r[2] == 0u); if (_c) goto L_08864030; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r16(ram, c->r[2] + 0x00000014u);
    c->r[2] = c->r[2] | 0x0002u;
    { mem_w16(ram, c->r[3] + 0x00000014u, c->r[2]); goto L_08864048; }
L_08864030:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = mem_r16(ram, c->r[2] + 0x00000014u);
    c->r[2] = 0u + 0xfffffffdu;
    c->r[2] = c->r[3] & c->r[2];
    mem_w16(ram, c->r[4] + 0x00000014u, c->r[2]);
L_08864048:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = 0u + 0x00000001u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_08864084; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x00000016u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000008u) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_088640a8; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r16(ram, c->r[2] + 0x00000016u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w16(ram, c->r[3] + 0x00000016u, c->r[2]); goto L_088640a8; }
L_08864084:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x00000016u);
    { int _c = ((s32)c->r[2] <= 0); if (_c) goto L_088640a8; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r16(ram, c->r[2] + 0x00000016u);
    c->r[2] = c->r[2] + 0xffffffffu;
    mem_w16(ram, c->r[3] + 0x00000016u, c->r[2]);
L_088640a8:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x00000016u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_088640e0; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x00000016u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000008u) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_088640e0; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r16(ram, c->r[2] + 0x00000014u);
    c->r[2] = c->r[2] | 0x0002u;
    mem_w16(ram, c->r[3] + 0x00000014u, c->r[2]);
L_088640e0:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000090u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x0000008cu);
    c->r[18] = mem_r32(ram, c->r[29] + 0x00000088u);
    c->r[17] = mem_r32(ram, c->r[29] + 0x00000084u);
    c->r[16] = mem_r32(ram, c->r[29] + 0x00000080u);
    { c->r[29] = c->r[29] + 0x000000a0u; return; }
    return; /* fell out of func_08863a30 */
}

/* func_08867a08  0x08867a08..0x08867a3c  52 bytes, source=sweep */
void func_08867a08(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08867a08u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[2] = c->r[5] + 0u;
    mem_w8(ram, c->r[30] + 0x00000004u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r8(ram, c->r[30] + 0x00000004u);
    mem_w8(ram, c->r[3] + 0x00000142u, c->r[2]);
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_08867a08 */
}

/* func_0886fc4c  0x0886fc4c..0x0886fc7c  48 bytes, source=sweep */
void func_0886fc4c(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0886fc4cu);
    c->r[29] = c->r[29] + 0xfffffff0u;
    mem_w32(ram, c->r[29] + 0x00000004u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000000u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    c->r[4] = 0u + 0x00000001u;
    { c->r[31] = 0x0886fc68u; c->r[5] = 0u | 0xffffu; func_0886fa80(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000004u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000000u);
    { c->r[29] = c->r[29] + 0x00000010u; return; }
    return; /* fell out of func_0886fc4c */
}

/* func_0887583c  0x0887583c..0x08878170  10548 bytes, source=fde */
void func_0887583c(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0887583cu);
    c->r[29] = c->r[29] + 0xfffffdc0u;
    mem_w32(ram, c->r[29] + 0x00000228u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000224u, c->r[30]);
    mem_w32(ram, c->r[29] + 0x00000220u, c->r[16]);
    mem_wf32(ram, c->r[29] + 0x00000230u, c->f[20]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[6]);
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[7]);
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x08875870u; c->r[4] = c->r[4] + 0x00000ac8u; func_089cb8ac(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[2] + 0x0000004cu;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000ac8u;
    { c->r[31] = 0x08875890u; c->r[5] = c->r[2] + 0u; func_089cb820(c, ram); }
    mem_w32(ram, c->r[30] + 0x000000a4u, c->r[2]);
    mem_w32(ram, c->r[30] + 0x000000c8u, 0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000130u);
    mem_wf32(ram, c->r[30] + 0x000000e0u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000134u);
    mem_wf32(ram, c->r[30] + 0x000000e4u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000e0u);
    mem_w32(ram, c->r[30] + 0x000000d0u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000e4u);
    mem_w32(ram, c->r[30] + 0x000000d4u, c->r[2]);
    c->r[2] = c->r[30] + 0x000000f0u;
    { c->r[31] = 0x088758ccu; c->r[4] = c->r[2] + 0u; func_08808260(c, ram); }
    c->r[2] = c->r[30] + 0x00000130u;
    { c->r[31] = 0x088758d8u; c->r[4] = c->r[2] + 0u; func_08808240(c, ram); }
    c->r[2] = c->r[30] + 0x00000140u;
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0x08a80000u;
    c->r[5] = c->r[5] + 0xffffbf40u;
    c->r[6] = 0x08a80000u;
    { c->r[31] = 0x088758f4u; c->r[6] = c->r[6] + 0xffffbf30u; func_0884c07c(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000010u);
    c->r[2] = c->r[2] ^ 0x0003u;
    c->r[2] = (0u < c->r[2]) ? 1u : 0u;
    mem_w8(ram, c->r[30] + 0x00000150u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[16] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000179u);
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x0887591cu; c->r[4] = c->r[4] + 0x00000af4u; func_08813c50(c, ram); }
    c->r[3] = c->r[2] << 3;
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = c->r[2] + 0x00000142u;
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000000u);
    c->r[16] = c->r[16] + c->r[2];
    c->f[0] = u2f(c->r[16]);
    c->f[1] = (f32)(s32)f2u(c->f[0]);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x0000381cu);
    c->f[0] = c->f[1] * c->f[0];
    mem_wf32(ram, c->r[30] + 0x000000d0u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[16] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x0000017au);
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x08875960u; c->r[4] = c->r[4] + 0x00000af4u; func_08813c50(c, ram); }
    c->r[3] = c->r[2] << 3;
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = c->r[2] + 0x00000143u;
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000000u);
    c->r[16] = c->r[16] + c->r[2];
    c->f[0] = u2f(c->r[16]);
    c->f[1] = (f32)(s32)f2u(c->f[0]);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x0000381cu);
    c->f[0] = c->f[1] * c->f[0];
    { c->r[31] = 0x08875994u; mem_wf32(ram, c->r[30] + 0x000000d4u, c->f[0]); func_08867ab8(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = c->r[30] + 0x000000f0u;
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0u + 0u;
    { c->r[31] = 0x088759acu; c->r[6] = c->r[3] + 0u; func_0884c668(c, ram); }
    mem_w16(ram, c->r[30] + 0x000000c0u, 0u);
L_088759b0:
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[30] + 0x000000c0u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000010u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_088759c8; }
    { goto L_08875a00; }
L_088759c8:
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[30] + 0x000000c0u);
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[30];
    c->r[2] = c->r[2] + 0x00000020u;
    mem_w32(ram, c->r[2] + 0x00000000u, 0u);
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[30] + 0x000000c0u);
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[30];
    c->r[2] = c->r[2] + 0x00000060u;
    mem_w32(ram, c->r[2] + 0x00000000u, 0u);
    c->r[2] = mem_r16(ram, c->r[30] + 0x000000c0u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w16(ram, c->r[30] + 0x000000c0u, c->r[2]); goto L_088759b0; }
L_08875a00:
    c->r[4] = 0x08a90000u;
    { c->r[31] = 0x08875a0cu; c->r[4] = c->r[4] + 0xffffb9c0u; func_0887bf60(c, ram); }
    { int _c = (c->r[2] != 0u); if (_c) goto L_08875a5c; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x0000021cu);
    c->r[2] = 0x04000000u;
    c->r[2] = c->r[3] & c->r[2];
    { int _c = (c->r[2] == 0u); if (_c) goto L_08875a40; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000010u);
    c->r[2] = 0u + 0x00000003u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_08875a5c; }
L_08875a40:
    c->r[3] = 0x08aa0000u;
    c->r[3] = mem_r8(ram, c->r[3] + 0x00004960u);
    c->r[2] = 0u + 0x00000003u;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_08875a5c; }
    { goto L_08875b34; }
L_08875a5c:
    mem_w16(ram, c->r[30] + 0x000000c0u, 0u);
L_08875a60:
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[30] + 0x000000c0u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000004u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_08875a78; }
    { goto L_08875b1c; }
L_08875a78:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[30] + 0x000000c0u);
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[3];
    c->r[4] = c->r[2] + 0x00000050u;
    c->r[2] = mem_r32(ram, c->r[4] + 0x00000000u);
    c->r[3] = 0u + 0u;
    c->r[2] = alx_ins(c->r[2], c->r[3], 12u, 31u);
    mem_w32(ram, c->r[4] + 0x00000000u, c->r[2]);
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[30] + 0x000000c0u);
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[30];
    c->r[2] = c->r[2] + 0x000000b0u;
    mem_w32(ram, c->r[2] + 0x00000000u, 0u);
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[3] = (u32)(s32)(s16)mem_r16(ram, c->r[30] + 0x000000c0u);
    c->r[2] = 0u + 0x00000100u;
    c->r[2] = c->r[2] << (c->r[3] & 31u);
    c->r[3] = ~(0u | c->r[2]);
    c->r[2] = mem_r32(ram, c->r[4] + 0x0000021cu);
    c->r[2] = c->r[2] & c->r[3];
    mem_w32(ram, c->r[5] + 0x0000021cu, c->r[2]);
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[3] = (u32)(s32)(s16)mem_r16(ram, c->r[30] + 0x000000c0u);
    c->r[2] = 0u + 0x00001000u;
    c->r[2] = c->r[2] << (c->r[3] & 31u);
    c->r[3] = ~(0u | c->r[2]);
    c->r[2] = mem_r32(ram, c->r[4] + 0x0000021cu);
    c->r[2] = c->r[2] & c->r[3];
    mem_w32(ram, c->r[5] + 0x0000021cu, c->r[2]);
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[30] + 0x000000c0u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_08875b0c; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    mem_w32(ram, c->r[2] + 0x00000254u, 0u);
L_08875b0c:
    c->r[2] = mem_r16(ram, c->r[30] + 0x000000c0u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w16(ram, c->r[30] + 0x000000c0u, c->r[2]); goto L_08875a60; }
L_08875b1c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x0000004cu);
    c->r[4] = 0u + 0u;
    c->r[3] = alx_ins(c->r[3], c->r[4], 12u, 31u);
    { mem_w32(ram, c->r[2] + 0x0000004cu, c->r[3]); goto L_08878154; }
L_08875b34:
    mem_w16(ram, c->r[30] + 0x000000c0u, 0u);
L_08875b38:
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[30] + 0x000000c0u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000004u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_08875b50; }
    { goto L_08875b9c; }
L_08875b50:
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[30] + 0x000000c0u);
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[30];
    c->r[16] = c->r[2] + 0x000000b0u;
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[30] + 0x000000c0u);
    c->r[3] = c->r[2] << 2;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = c->r[2] + 0x00000050u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000ac8u;
    { c->r[31] = 0x08875b88u; c->r[5] = c->r[2] + 0u; func_089cb820(c, ram); }
    mem_w32(ram, c->r[16] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r16(ram, c->r[30] + 0x000000c0u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w16(ram, c->r[30] + 0x000000c0u, c->r[2]); goto L_08875b38; }
L_08875b9c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x0000000cu);
    c->f[0] = u2f(0u);
    alx_c_cond_s(c, 14, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_08875bc0; }
    { goto L_08875be0; }
L_08875bc0:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x0000000cu);
    c->r[1] = 0x08a80000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00002e40u);
    c->f[0] = c->f[1] - c->f[0];
    { mem_wf32(ram, c->r[3] + 0x0000000cu, c->f[0]); goto L_08875be8; }
L_08875be0:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    mem_w32(ram, c->r[2] + 0x0000000cu, 0u);
L_08875be8:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[2] + 0x0000004cu;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    mem_w32(ram, c->r[30] + 0x000000a0u, c->r[2]);
L_08875bf8:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_08875c0c; }
    { goto L_088760b8; }
L_08875c0c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[3] = mem_r16(ram, c->r[2] + 0x0000001au);
    c->r[2] = 0u + 0x00000003u;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_08875c3c; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[3] = mem_r16(ram, c->r[2] + 0x0000001au);
    c->r[2] = 0u + 0x00000005u;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_08875c3c; }
    { goto L_08876028; }
L_08875c3c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000008cu);
    c->r[2] = c->r[2] & 0x0004u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_08876028; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x0000008cu);
    c->r[2] = 0x00100000u;
    c->r[2] = c->r[3] & c->r[2];
    { int _c = (c->r[2] != 0u); if (_c) goto L_08876028; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x0000008cu);
    c->r[2] = 0x00400000u;
    c->r[2] = c->r[2] | 0x0080u;
    c->r[2] = c->r[3] & c->r[2];
    { int _c = (c->r[2] != 0u); if (_c) goto L_08876028; }
    c->r[3] = c->r[30] + 0x000000c8u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = c->r[2] + 0x000000bcu;
    c->r[8] = c->r[30] + 0x000000f0u;
    c->r[4] = c->r[3] + 0u;
    c->r[5] = c->r[2] + 0u;
    c->r[6] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x08875ca8u; c->r[7] = mem_r32(ram, c->r[30] + 0x00000010u); func_0887bdcc(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x000000b8u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00003820u);
    alx_c_cond_s(c, 12, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_08875ce0; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x000000b0u);
    { int _c = ((s32)c->r[2] <= 0); if (_c) goto L_08875ce0; }
    { goto L_08875d70; }
L_08875ce0:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000a4u);
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_08875d58; }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = mem_r32(ram, c->r[4] + 0x0000004cu);
    c->r[3] = 0u + 0u;
    c->r[2] = alx_ins(c->r[2], c->r[3], 12u, 31u);
    mem_w32(ram, c->r[4] + 0x0000004cu, c->r[2]);
    mem_w32(ram, c->r[30] + 0x000000a4u, 0u);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = mem_r32(ram, c->r[4] + 0x00000050u);
    c->r[3] = 0u + 0u;
    c->r[2] = alx_ins(c->r[2], c->r[3], 12u, 31u);
    mem_w32(ram, c->r[4] + 0x00000050u, c->r[2]);
    mem_w32(ram, c->r[30] + 0x000000b0u, 0u);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x0000021cu);
    c->r[2] = 0u + 0xfffffeffu;
    c->r[2] = c->r[3] & c->r[2];
    mem_w32(ram, c->r[4] + 0x0000021cu, c->r[2]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x0000021cu);
    c->r[2] = 0u + 0xffffefffu;
    c->r[2] = c->r[3] & c->r[2];
    mem_w32(ram, c->r[4] + 0x0000021cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    mem_w32(ram, c->r[2] + 0x00000254u, 0u);
L_08875d58:
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000ac8u;
    { c->r[31] = 0x08875d68u; c->r[5] = mem_r32(ram, c->r[30] + 0x00000010u); func_089cb8e8(c, ram); }
    { mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]); goto L_08875bf8; }
L_08875d70:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[30] + 0x00000150u);
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[3];
    c->r[2] = c->r[2] + 0x000003e0u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000004u);
    c->r[2] = mem_r8(ram, c->r[2] + 0x0000001du);
    c->r[2] = (c->r[2] < 0x00000002u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_08875e54; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000008cu);
    c->r[2] = c->r[2] & 0x1000u;
    mem_w32(ram, c->r[30] + 0x00000154u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[30] + 0x00000150u);
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[3];
    c->r[2] = c->r[2] + 0x000003e0u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000004u);
    c->r[3] = mem_r8(ram, c->r[2] + 0x0000001du);
    c->r[2] = 0u + 0x00000002u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_08875de4; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000154u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_08875de4; }
    { goto L_08875e3c; }
L_08875de4:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[30] + 0x00000150u);
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[3];
    c->r[2] = c->r[2] + 0x000003e0u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000004u);
    c->r[3] = mem_r8(ram, c->r[2] + 0x0000001du);
    c->r[2] = 0u + 0x00000003u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_08875e18; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000154u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_08875e3c; }
L_08875e18:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[30] + 0x00000150u);
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[3];
    c->r[2] = c->r[2] + 0x000003e0u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000004u);
    c->r[2] = mem_r8(ram, c->r[2] + 0x0000001du);
    { int _c = (c->r[2] != 0u); if (_c) goto L_08875e54; }
L_08875e3c:
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000ac8u;
    { c->r[31] = 0x08875e4cu; c->r[5] = mem_r32(ram, c->r[30] + 0x00000010u); func_089cb8e8(c, ram); }
    { mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]); goto L_08875bf8; }
L_08875e54:
    c->r[16] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00003824u);
    { c->r[31] = 0x08875e68u; c->f[12] = c->f[0]; func_08a0f5bc(c, ram); }
    c->f[1] = c->f[0];
    c->f[0] = mem_rf32(ram, c->r[16] + 0x000000bcu);
    alx_c_cond_s(c, 12, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_08875e88; }
    { goto L_08875e98; }
L_08875e88:
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00003828u);
    { mem_wf32(ram, c->r[30] + 0x000000c4u, c->f[0]); goto L_08875f24; }
L_08875e98:
    c->r[16] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x0000382cu);
    { c->r[31] = 0x08875eacu; c->f[12] = c->f[0]; func_08a0f5bc(c, ram); }
    c->f[1] = c->f[0];
    c->f[0] = mem_rf32(ram, c->r[16] + 0x000000bcu);
    alx_c_cond_s(c, 12, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_08875ecc; }
    { goto L_08875edc; }
L_08875ecc:
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00003830u);
    { mem_wf32(ram, c->r[30] + 0x000000c4u, c->f[0]); goto L_08875f24; }
L_08875edc:
    c->r[16] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00003834u);
    { c->r[31] = 0x08875ef0u; c->f[12] = c->f[0]; func_08a0f5bc(c, ram); }
    c->f[1] = c->f[0];
    c->f[0] = mem_rf32(ram, c->r[16] + 0x000000bcu);
    alx_c_cond_s(c, 12, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_08875f10; }
    { goto L_08875f20; }
L_08875f10:
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00003820u);
    { mem_wf32(ram, c->r[30] + 0x000000c4u, c->f[0]); goto L_08875f24; }
L_08875f20:
    mem_w32(ram, c->r[30] + 0x000000c4u, 0u);
L_08875f24:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[1] = 0x08a40000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0x00003830u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x000000b8u);
    c->f[1] = c->f[1] - c->f[0];
    c->f[0] = mem_rf32(ram, c->r[30] + 0x000000c4u);
    c->f[0] = c->f[0] + c->f[1];
    mem_wf32(ram, c->r[30] + 0x000000c4u, c->f[0]);
    c->r[2] = 0u + 0x0000000fu;
    mem_w16(ram, c->r[30] + 0x000000c0u, c->r[2]);
L_08875f4c:
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[30] + 0x000000c0u);
    { int _c = ((s32)c->r[2] >= 0); if (_c) goto L_08875f60; }
    { goto L_088760a0; }
L_08875f60:
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[30] + 0x000000c0u);
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[30];
    c->r[2] = c->r[2] + 0x00000020u;
    c->f[1] = mem_rf32(ram, c->r[30] + 0x000000c4u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000000u);
    alx_c_cond_s(c, 14, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_088760a0; }
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[30] + 0x000000c0u);
    c->r[2] = ((s32)c->r[2] < (s32)0x0000000fu) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_08875fe8; }
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[30] + 0x000000c0u);
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[30];
    c->r[3] = c->r[2] + 0x00000024u;
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[30] + 0x000000c0u);
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[30];
    c->r[2] = c->r[2] + 0x00000020u;
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000000u);
    mem_wf32(ram, c->r[3] + 0x00000000u, c->f[0]);
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[30] + 0x000000c0u);
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[30];
    c->r[3] = c->r[2] + 0x00000064u;
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[30] + 0x000000c0u);
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[30];
    c->r[2] = c->r[2] + 0x00000060u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    mem_w32(ram, c->r[3] + 0x00000000u, c->r[2]);
L_08875fe8:
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[30] + 0x000000c0u);
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[30];
    c->r[2] = c->r[2] + 0x00000020u;
    c->f[0] = mem_rf32(ram, c->r[30] + 0x000000c4u);
    mem_wf32(ram, c->r[2] + 0x00000000u, c->f[0]);
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[30] + 0x000000c0u);
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[30];
    c->r[3] = c->r[2] + 0x00000060u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    mem_w32(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r16(ram, c->r[30] + 0x000000c0u);
    c->r[2] = c->r[2] + 0xffffffffu;
    { mem_w16(ram, c->r[30] + 0x000000c0u, c->r[2]); goto L_08875f4c; }
L_08876028:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000a4u);
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_088760a0; }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = mem_r32(ram, c->r[4] + 0x0000004cu);
    c->r[3] = 0u + 0u;
    c->r[2] = alx_ins(c->r[2], c->r[3], 12u, 31u);
    mem_w32(ram, c->r[4] + 0x0000004cu, c->r[2]);
    mem_w32(ram, c->r[30] + 0x000000a4u, 0u);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = mem_r32(ram, c->r[4] + 0x00000050u);
    c->r[3] = 0u + 0u;
    c->r[2] = alx_ins(c->r[2], c->r[3], 12u, 31u);
    mem_w32(ram, c->r[4] + 0x00000050u, c->r[2]);
    mem_w32(ram, c->r[30] + 0x000000b0u, 0u);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x0000021cu);
    c->r[2] = 0u + 0xfffffeffu;
    c->r[2] = c->r[3] & c->r[2];
    mem_w32(ram, c->r[4] + 0x0000021cu, c->r[2]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x0000021cu);
    c->r[2] = 0u + 0xffffefffu;
    c->r[2] = c->r[3] & c->r[2];
    mem_w32(ram, c->r[4] + 0x0000021cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    mem_w32(ram, c->r[2] + 0x00000254u, 0u);
L_088760a0:
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000ac8u;
    { c->r[31] = 0x088760b0u; c->r[5] = mem_r32(ram, c->r[30] + 0x00000010u); func_089cb8e8(c, ram); }
    { mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]); goto L_08875bf8; }
L_088760b8:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000060u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_088760e0; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x0000004cu);
    c->r[4] = 0u + 0u;
    c->r[3] = alx_ins(c->r[3], c->r[4], 12u, 31u);
    mem_w32(ram, c->r[2] + 0x0000004cu, c->r[3]);
    { mem_w32(ram, c->r[30] + 0x000000a4u, 0u); goto L_08878154; }
L_088760e0:
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000020u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00003830u);
    alx_c_cond_s(c, 12, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_08876104; }
    { goto L_0887618c; }
L_08876104:
    mem_w16(ram, c->r[30] + 0x000000c0u, 0u);
L_08876108:
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[30] + 0x000000c0u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000010u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_08876120; }
    { goto L_08876304; }
L_08876120:
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[30] + 0x000000c0u);
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[30];
    c->r[2] = c->r[2] + 0x00000020u;
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000000u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00003830u);
    alx_c_cond_s(c, 12, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_08876154; }
    { goto L_0887617c; }
L_08876154:
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[30] + 0x000000c0u);
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[30];
    c->r[2] = c->r[2] + 0x00000020u;
    mem_w32(ram, c->r[2] + 0x00000000u, 0u);
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[30] + 0x000000c0u);
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[30];
    c->r[2] = c->r[2] + 0x00000060u;
    mem_w32(ram, c->r[2] + 0x00000000u, 0u);
L_0887617c:
    c->r[2] = mem_r16(ram, c->r[30] + 0x000000c0u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w16(ram, c->r[30] + 0x000000c0u, c->r[2]); goto L_08876108; }
L_0887618c:
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000020u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00003820u);
    alx_c_cond_s(c, 12, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_088761b0; }
    { goto L_08876304; }
L_088761b0:
    mem_w16(ram, c->r[30] + 0x000000c0u, 0u);
L_088761b4:
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[30] + 0x000000c0u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000010u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_088761cc; }
    { goto L_08876238; }
L_088761cc:
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[30] + 0x000000c0u);
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[30];
    c->r[2] = c->r[2] + 0x00000020u;
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000000u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00003820u);
    alx_c_cond_s(c, 12, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_08876200; }
    { goto L_08876228; }
L_08876200:
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[30] + 0x000000c0u);
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[30];
    c->r[2] = c->r[2] + 0x00000020u;
    mem_w32(ram, c->r[2] + 0x00000000u, 0u);
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[30] + 0x000000c0u);
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[30];
    c->r[2] = c->r[2] + 0x00000060u;
    mem_w32(ram, c->r[2] + 0x00000000u, 0u);
L_08876228:
    c->r[2] = mem_r16(ram, c->r[30] + 0x000000c0u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w16(ram, c->r[30] + 0x000000c0u, c->r[2]); goto L_088761b4; }
L_08876238:
    mem_w16(ram, c->r[30] + 0x000000c0u, 0u);
L_0887623c:
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[30] + 0x000000c0u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000010u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_08876254; }
    { goto L_08876304; }
L_08876254:
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[30] + 0x000000c0u);
    c->f[0] = u2f(c->r[2]);
    c->f[1] = (f32)(s32)f2u(c->f[0]);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00003838u);
    c->f[1] = c->f[1] * c->f[0];
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00003830u);
    c->f[0] = c->f[0] - c->f[1];
    mem_wf32(ram, c->r[30] + 0x00000158u, c->f[0]);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000020u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000158u);
    alx_c_cond_s(c, 12, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_0887629c; }
    { goto L_088762f4; }
L_0887629c:
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[30] + 0x000000c0u);
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[30];
    c->r[2] = c->r[2] + 0x00000020u;
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000000u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000158u);
    alx_c_cond_s(c, 12, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_088762cc; }
    { goto L_088762f4; }
L_088762cc:
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[30] + 0x000000c0u);
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[30];
    c->r[2] = c->r[2] + 0x00000020u;
    mem_w32(ram, c->r[2] + 0x00000000u, 0u);
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[30] + 0x000000c0u);
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[30];
    c->r[2] = c->r[2] + 0x00000060u;
    mem_w32(ram, c->r[2] + 0x00000000u, 0u);
L_088762f4:
    c->r[2] = mem_r16(ram, c->r[30] + 0x000000c0u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w16(ram, c->r[30] + 0x000000c0u, c->r[2]); goto L_0887623c; }
L_08876304:
    c->r[2] = 0u + 0x00000010u;
    mem_w8(ram, c->r[30] + 0x0000015cu, c->r[2]);
    mem_w8(ram, c->r[30] + 0x0000015du, 0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x00000018u);
    c->r[2] = 0x08a80000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00002e6cu);
    c->r[2] = (c->r[3] < c->r[2]) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_08876344; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x000000a4u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000060u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_08876344; }
    { goto L_0887639c; }
L_08876344:
    mem_w16(ram, c->r[30] + 0x000000c0u, 0u);
L_08876348:
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[30] + 0x000000c0u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000010u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_08876360; }
    { goto L_0887639c; }
L_08876360:
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[30] + 0x000000c0u);
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[30];
    c->r[2] = c->r[2] + 0x00000060u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x000000a4u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_0887638c; }
    c->r[2] = mem_r8(ram, c->r[30] + 0x000000c0u);
    c->r[2] = c->r[2] + 0x00000001u;
    mem_w8(ram, c->r[30] + 0x0000015cu, c->r[2]);
L_0887638c:
    c->r[2] = mem_r16(ram, c->r[30] + 0x000000c0u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w16(ram, c->r[30] + 0x000000c0u, c->r[2]); goto L_08876348; }
L_0887639c:
    c->r[3] = mem_r32(ram, c->r[30] + 0x000000a4u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000060u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_088763d8; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x0000000cu);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x0000383cu);
    alx_c_cond_s(c, 14, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_088763d4; }
    { goto L_088763d8; }
L_088763d4:
    mem_w8(ram, c->r[30] + 0x0000015cu, 0u);
L_088763d8:
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[30] + 0x0000015cu);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000010u) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_08876434; }
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[30] + 0x0000015cu);
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[30];
    c->r[2] = c->r[2] + 0x00000020u;
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000000u);
    c->f[0] = u2f(0u);
    alx_c_cond_s(c, 2, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) == 0u); if (_c) goto L_08876418; }
    { goto L_08876434; }
L_08876418:
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[30] + 0x0000015cu);
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[30];
    c->r[2] = c->r[2] + 0x00000060u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    { mem_w32(ram, c->r[30] + 0x00000200u, c->r[2]); goto L_0887643c; }
L_08876434:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000060u);
    mem_w32(ram, c->r[30] + 0x00000200u, c->r[3]);
L_0887643c:
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000ac8u;
    { c->r[31] = 0x0887644cu; c->r[5] = mem_r32(ram, c->r[30] + 0x00000200u); func_089cb780(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000160u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000160u);
    mem_w32(ram, c->r[30] + 0x00000154u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[2] + 0x00000044u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000ac8u;
    { c->r[31] = 0x08876474u; c->r[5] = c->r[2] + 0u; func_089cb820(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000060u);
    c->r[2] = c->r[3] ^ c->r[2];
    c->r[2] = (0u < c->r[2]) ? 1u : 0u;
    c->r[2] = c->r[2] & 0x00ffu;
    { int _c = (c->r[2] == 0u); if (_c) goto L_088764c0; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[16] = c->r[2] + 0x00000044u;
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000ac8u;
    { c->r[31] = 0x088764a8u; c->r[5] = mem_r32(ram, c->r[30] + 0x00000060u); func_089cb780(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000164u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000164u);
    mem_w32(ram, c->r[16] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    { mem_w8(ram, c->r[2] + 0x00000010u, 0u); goto L_0887650c; }
L_088764c0:
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000020u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00003830u);
    alx_c_cond_s(c, 12, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_088764e4; }
    { goto L_0887650c; }
L_088764e4:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[3] = mem_r8(ram, c->r[2] + 0x00000010u);
    c->r[2] = 0u + 0x000000ffu;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_0887650c; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000010u);
    c->r[2] = c->r[2] + 0x00000001u;
    mem_w8(ram, c->r[3] + 0x00000010u, c->r[2]);
L_0887650c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000a4u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_08876580; }
    c->r[16] = mem_r32(ram, c->r[30] + 0x000000a4u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[4] = mem_r32(ram, c->r[30] + 0x000000a4u);
    { c->r[31] = 0x0887652cu; c->r[5] = mem_r32(ram, c->r[2] + 0x00000218u); func_08875774(c, ram); }
    c->f[1] = c->f[0];
    c->f[0] = mem_rf32(ram, c->r[16] + 0x000000bcu);
    alx_c_cond_s(c, 12, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_0887654c; }
    { goto L_08876578; }
L_0887654c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x0000001au);
    c->r[2] = ((s32)c->r[2] < (s32)0x000000ffu) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_08876580; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r16(ram, c->r[2] + 0x0000001au);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w16(ram, c->r[3] + 0x0000001au, c->r[2]); goto L_08876580; }
L_08876578:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    mem_w16(ram, c->r[2] + 0x0000001au, 0u);
L_08876580:
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000a4u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_088765a8; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000011u);
    c->r[2] = c->r[2] & 0x0004u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_088765a8; }
    { goto L_088766c0; }
L_088765a8:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00003840u);
    mem_wf32(ram, c->r[2] + 0x0000000cu, c->f[0]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[3] = mem_r8(ram, c->r[2] + 0x00000011u);
    c->r[2] = 0u + 0xfffffffbu;
    c->r[2] = c->r[3] & c->r[2];
    mem_w8(ram, c->r[4] + 0x00000011u, c->r[2]);
    mem_w32(ram, c->r[30] + 0x000000ccu, 0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000154u);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000ac8u;
    { c->r[31] = 0x088765e8u; c->r[5] = c->r[2] + 0u; func_089cb820(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_08876718; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000a4u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_08876618; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[3] = c->r[2] + 0x0000004cu;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000154u);
    { mem_w32(ram, c->r[3] + 0x00000000u, c->r[2]); goto L_08876718; }
L_08876618:
    c->r[16] = mem_r32(ram, c->r[30] + 0x000000a4u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[4] = mem_r32(ram, c->r[30] + 0x000000a4u);
    { c->r[31] = 0x0887662cu; c->r[5] = mem_r32(ram, c->r[2] + 0x00000218u); func_08875774(c, ram); }
    c->f[1] = c->f[0];
    c->f[0] = mem_rf32(ram, c->r[16] + 0x000000bcu);
    alx_c_cond_s(c, 14, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_0887664c; }
    { goto L_088766ac; }
L_0887664c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = c->r[2] + 0x00000020u;
    { c->r[31] = 0x0887665cu; c->r[4] = c->r[2] + 0u; func_0884bfd0(c, ram); }
    { int _c = (c->r[2] == 0u); if (_c) goto L_088766ac; }
    c->r[16] = mem_r32(ram, c->r[30] + 0x000000a4u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[4] = mem_r32(ram, c->r[30] + 0x000000a4u);
    { c->r[31] = 0x08876678u; c->r[5] = mem_r32(ram, c->r[2] + 0x00000218u); func_08875774(c, ram); }
    c->f[1] = c->f[0];
    c->f[0] = mem_rf32(ram, c->r[16] + 0x000000bcu);
    alx_c_cond_s(c, 14, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_08876698; }
    { goto L_08876718; }
L_08876698:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[3] = c->r[2] + 0x0000004cu;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000154u);
    { mem_w32(ram, c->r[3] + 0x00000000u, c->r[2]); goto L_08876718; }
L_088766ac:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[3] = c->r[2] + 0x0000004cu;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000154u);
    { mem_w32(ram, c->r[3] + 0x00000000u, c->r[2]); goto L_08876718; }
L_088766c0:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[3] = mem_r8(ram, c->r[2] + 0x00000010u);
    c->r[2] = 0x08a80000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00002e6cu);
    c->r[2] = c->r[2] << 1;
    c->r[2] = (c->r[3] < c->r[2]) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_08876718; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x0000001au);
    c->r[2] = 0x08a80000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00002e6cu);
    c->r[2] = c->r[2] << 1;
    c->r[2] = (c->r[3] < c->r[2]) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_08876718; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[3] = c->r[2] + 0x0000004cu;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[2] + 0x00000044u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    mem_w32(ram, c->r[3] + 0x00000000u, c->r[2]);
L_08876718:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[2] + 0x0000004cu;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000ac8u;
    { c->r[31] = 0x08876734u; c->r[5] = c->r[2] + 0u; func_089cb820(c, ram); }
    mem_w32(ram, c->r[30] + 0x000000a4u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000a0u);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000ac8u;
    { c->r[31] = 0x0887674cu; c->r[5] = c->r[2] + 0u; func_089cb820(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000a4u);
    c->r[2] = c->r[3] ^ c->r[2];
    c->r[2] = (0u < c->r[2]) ? 1u : 0u;
    c->r[2] = c->r[2] & 0x00ffu;
    { int _c = (c->r[2] == 0u); if (_c) goto L_08876874; }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x0000021cu);
    c->r[2] = 0xffff0000u;
    c->r[2] = c->r[2] | 0x00ffu;
    c->r[2] = c->r[3] & c->r[2];
    mem_w32(ram, c->r[4] + 0x0000021cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    mem_w16(ram, c->r[2] + 0x0000001au, 0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    mem_w16(ram, c->r[2] + 0x00000018u, 0u);
    c->r[2] = 0u + 0x00000001u;
    mem_w16(ram, c->r[30] + 0x000000c0u, c->r[2]);
L_0887679c:
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[30] + 0x000000c0u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000004u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_088767b4; }
    { goto L_08876894; }
L_088767b4:
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[30] + 0x000000c0u);
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[30];
    c->r[2] = c->r[2] + 0x000000b0u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_08876864; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[30] + 0x000000c0u);
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[3];
    c->r[4] = c->r[2] + 0x00000050u;
    c->r[2] = mem_r32(ram, c->r[4] + 0x00000000u);
    c->r[3] = 0u + 0u;
    c->r[2] = alx_ins(c->r[2], c->r[3], 12u, 31u);
    mem_w32(ram, c->r[4] + 0x00000000u, c->r[2]);
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[30] + 0x000000c0u);
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[30];
    c->r[2] = c->r[2] + 0x000000b0u;
    mem_w32(ram, c->r[2] + 0x00000000u, 0u);
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[3] = (u32)(s32)(s16)mem_r16(ram, c->r[30] + 0x000000c0u);
    c->r[2] = 0u + 0x00000100u;
    c->r[2] = c->r[2] << (c->r[3] & 31u);
    c->r[3] = ~(0u | c->r[2]);
    c->r[2] = mem_r32(ram, c->r[4] + 0x0000021cu);
    c->r[2] = c->r[2] & c->r[3];
    mem_w32(ram, c->r[5] + 0x0000021cu, c->r[2]);
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[3] = (u32)(s32)(s16)mem_r16(ram, c->r[30] + 0x000000c0u);
    c->r[2] = 0u + 0x00001000u;
    c->r[2] = c->r[2] << (c->r[3] & 31u);
    c->r[3] = ~(0u | c->r[2]);
    c->r[2] = mem_r32(ram, c->r[4] + 0x0000021cu);
    c->r[2] = c->r[2] & c->r[3];
    mem_w32(ram, c->r[5] + 0x0000021cu, c->r[2]);
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[30] + 0x000000c0u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_08876864; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    mem_w32(ram, c->r[2] + 0x00000254u, 0u);
L_08876864:
    c->r[2] = mem_r16(ram, c->r[30] + 0x000000c0u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w16(ram, c->r[30] + 0x000000c0u, c->r[2]); goto L_0887679c; }
L_08876874:
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000a4u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_08876894; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r16(ram, c->r[2] + 0x00000018u);
    c->r[2] = c->r[2] + 0x00000001u;
    mem_w16(ram, c->r[3] + 0x00000018u, c->r[2]);
L_08876894:
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000a4u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_08876a0c; }
    c->r[4] = mem_r32(ram, c->r[30] + 0x000000a4u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000a4u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x0000008cu);
    c->r[2] = 0x00020000u;
    c->r[2] = c->r[3] | c->r[2];
    mem_w32(ram, c->r[4] + 0x0000008cu, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x000000a4u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000b0u);
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_088768e0; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000a4u);
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x000000b0u);
    { int _c = ((s32)c->r[2] <= 0); if (_c) goto L_088768e0; }
    { goto L_08876b38; }
L_088768e0:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = mem_r32(ram, c->r[4] + 0x00000050u);
    c->r[3] = 0u + 0u;
    c->r[2] = alx_ins(c->r[2], c->r[3], 12u, 31u);
    mem_w32(ram, c->r[4] + 0x00000050u, c->r[2]);
    mem_w32(ram, c->r[30] + 0x000000b0u, 0u);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x0000021cu);
    c->r[2] = 0u + 0xfffffeffu;
    c->r[2] = c->r[3] & c->r[2];
    mem_w32(ram, c->r[4] + 0x0000021cu, c->r[2]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x0000021cu);
    c->r[2] = 0u + 0xffffefffu;
    c->r[2] = c->r[3] & c->r[2];
    mem_w32(ram, c->r[4] + 0x0000021cu, c->r[2]);
    c->r[2] = 0u + 0x00000001u;
    mem_w16(ram, c->r[30] + 0x000000c0u, c->r[2]);
L_08876930:
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[30] + 0x000000c0u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000004u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_08876948; }
    { goto L_08876b38; }
L_08876948:
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[30] + 0x000000c0u);
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[30];
    c->r[2] = c->r[2] + 0x000000b0u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x000000a4u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_088769fc; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[30] + 0x000000c0u);
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[3];
    c->r[4] = c->r[2] + 0x00000050u;
    c->r[2] = mem_r32(ram, c->r[4] + 0x00000000u);
    c->r[3] = 0u + 0u;
    c->r[2] = alx_ins(c->r[2], c->r[3], 12u, 31u);
    mem_w32(ram, c->r[4] + 0x00000000u, c->r[2]);
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[30] + 0x000000c0u);
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[30];
    c->r[2] = c->r[2] + 0x000000b0u;
    mem_w32(ram, c->r[2] + 0x00000000u, 0u);
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[3] = (u32)(s32)(s16)mem_r16(ram, c->r[30] + 0x000000c0u);
    c->r[2] = 0u + 0x00000100u;
    c->r[2] = c->r[2] << (c->r[3] & 31u);
    c->r[3] = ~(0u | c->r[2]);
    c->r[2] = mem_r32(ram, c->r[4] + 0x0000021cu);
    c->r[2] = c->r[2] & c->r[3];
    mem_w32(ram, c->r[5] + 0x0000021cu, c->r[2]);
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[3] = (u32)(s32)(s16)mem_r16(ram, c->r[30] + 0x000000c0u);
    c->r[2] = 0u + 0x00001000u;
    c->r[2] = c->r[2] << (c->r[3] & 31u);
    c->r[3] = ~(0u | c->r[2]);
    c->r[2] = mem_r32(ram, c->r[4] + 0x0000021cu);
    c->r[2] = c->r[2] & c->r[3];
    mem_w32(ram, c->r[5] + 0x0000021cu, c->r[2]);
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[30] + 0x000000c0u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_088769fc; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    mem_w32(ram, c->r[2] + 0x00000254u, 0u);
L_088769fc:
    c->r[2] = mem_r16(ram, c->r[30] + 0x000000c0u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w16(ram, c->r[30] + 0x000000c0u, c->r[2]); goto L_08876930; }
L_08876a0c:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = mem_r32(ram, c->r[4] + 0x00000050u);
    c->r[3] = 0u + 0u;
    c->r[2] = alx_ins(c->r[2], c->r[3], 12u, 31u);
    mem_w32(ram, c->r[4] + 0x00000050u, c->r[2]);
    mem_w32(ram, c->r[30] + 0x000000b0u, 0u);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x0000021cu);
    c->r[2] = 0u + 0xfffffeffu;
    c->r[2] = c->r[3] & c->r[2];
    mem_w32(ram, c->r[4] + 0x0000021cu, c->r[2]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x0000021cu);
    c->r[2] = 0u + 0xffffefffu;
    c->r[2] = c->r[3] & c->r[2];
    mem_w32(ram, c->r[4] + 0x0000021cu, c->r[2]);
    c->r[2] = 0u + 0x00000001u;
    mem_w16(ram, c->r[30] + 0x000000c0u, c->r[2]);
L_08876a5c:
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[30] + 0x000000c0u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000004u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_08876a74; }
    { goto L_08876b38; }
L_08876a74:
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[30] + 0x000000c0u);
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[30];
    c->r[2] = c->r[2] + 0x000000b0u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x000000a4u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_08876b28; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[30] + 0x000000c0u);
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[3];
    c->r[4] = c->r[2] + 0x00000050u;
    c->r[2] = mem_r32(ram, c->r[4] + 0x00000000u);
    c->r[3] = 0u + 0u;
    c->r[2] = alx_ins(c->r[2], c->r[3], 12u, 31u);
    mem_w32(ram, c->r[4] + 0x00000000u, c->r[2]);
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[30] + 0x000000c0u);
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[30];
    c->r[2] = c->r[2] + 0x000000b0u;
    mem_w32(ram, c->r[2] + 0x00000000u, 0u);
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[3] = (u32)(s32)(s16)mem_r16(ram, c->r[30] + 0x000000c0u);
    c->r[2] = 0u + 0x00000100u;
    c->r[2] = c->r[2] << (c->r[3] & 31u);
    c->r[3] = ~(0u | c->r[2]);
    c->r[2] = mem_r32(ram, c->r[4] + 0x0000021cu);
    c->r[2] = c->r[2] & c->r[3];
    mem_w32(ram, c->r[5] + 0x0000021cu, c->r[2]);
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[3] = (u32)(s32)(s16)mem_r16(ram, c->r[30] + 0x000000c0u);
    c->r[2] = 0u + 0x00001000u;
    c->r[2] = c->r[2] << (c->r[3] & 31u);
    c->r[3] = ~(0u | c->r[2]);
    c->r[2] = mem_r32(ram, c->r[4] + 0x0000021cu);
    c->r[2] = c->r[2] & c->r[3];
    mem_w32(ram, c->r[5] + 0x0000021cu, c->r[2]);
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[30] + 0x000000c0u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_08876b28; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    mem_w32(ram, c->r[2] + 0x00000254u, 0u);
L_08876b28:
    c->r[2] = mem_r16(ram, c->r[30] + 0x000000c0u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w16(ram, c->r[30] + 0x000000c0u, c->r[2]); goto L_08876a5c; }
L_08876b38:
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[30] + 0x00000150u);
    { c->r[31] = 0x08876b44u; c->r[4] = c->r[2] + 0u; func_08867a3c(c, ram); }
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000002u);
    mem_w8(ram, c->r[30] + 0x00000168u, c->r[2]);
    c->r[4] = (u32)(s32)(s8)mem_r8(ram, c->r[30] + 0x00000168u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[30] + 0x00000150u);
    c->r[2] = c->r[2] + c->r[3];
    c->r[2] = c->r[2] + 0x00000010u;
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000002u);
    c->r[2] = ((s32)c->r[2] < (s32)c->r[4]) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_08876b88; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[30] + 0x00000150u);
    c->r[2] = c->r[2] + c->r[3];
    c->r[2] = c->r[2] + 0x00000010u;
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000002u);
    mem_w8(ram, c->r[30] + 0x00000168u, c->r[2]);
L_08876b88:
    mem_w16(ram, c->r[30] + 0x000000c0u, 0u);
L_08876b8c:
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[30] + 0x000000c0u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000004u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_08876ba4; }
    { goto L_08876de0; }
L_08876ba4:
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[30] + 0x000000c0u);
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[30] + 0x00000168u);
    c->r[2] = ((s32)c->r[2] < (s32)c->r[3]) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_08876d3c; }
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[30] + 0x000000c0u);
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[30];
    c->r[2] = c->r[2] + 0x000000b0u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_08876d3c; }
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[30] + 0x000000c0u);
    c->r[3] = c->r[2] << 2;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = c->r[2] + 0x00000050u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    mem_w32(ram, c->r[30] + 0x000000a0u, c->r[2]);
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[30] + 0x000000c0u);
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[30];
    c->r[2] = c->r[2] + 0x000000b0u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x000000b8u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00003844u);
    c->f[0] = c->f[1] * c->f[0];
    mem_wf32(ram, c->r[30] + 0x000000c8u, c->f[0]);
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[30] + 0x000000c0u);
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[30];
    c->r[2] = c->r[2] + 0x000000b0u;
    c->r[16] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[30] + 0x000000c0u);
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[30];
    c->r[2] = c->r[2] + 0x000000b0u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[4] = mem_r32(ram, c->r[2] + 0x00000000u);
    { c->r[31] = 0x08876c4cu; c->r[5] = mem_r32(ram, c->r[3] + 0x00000218u); func_08875774(c, ram); }
    c->f[1] = c->f[0];
    c->f[0] = mem_rf32(ram, c->r[16] + 0x000000bcu);
    alx_c_cond_s(c, 12, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_08876ca4; }
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[30] + 0x00000150u);
    { c->r[31] = 0x08876c70u; c->r[4] = c->r[2] + 0u; func_08867a3c(c, ram); }
    c->f[1] = mem_rf32(ram, c->r[30] + 0x000000c8u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000008u);
    alx_c_cond_s(c, 12, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_08876ca4; }
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[30] + 0x000000c0u);
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[30];
    c->r[2] = c->r[2] + 0x000000b0u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_08876dd0; }
L_08876ca4:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[30] + 0x000000c0u);
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[3];
    c->r[4] = c->r[2] + 0x00000050u;
    c->r[2] = mem_r32(ram, c->r[4] + 0x00000000u);
    c->r[3] = 0u + 0u;
    c->r[2] = alx_ins(c->r[2], c->r[3], 12u, 31u);
    mem_w32(ram, c->r[4] + 0x00000000u, c->r[2]);
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[30] + 0x000000c0u);
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[30];
    c->r[2] = c->r[2] + 0x000000b0u;
    mem_w32(ram, c->r[2] + 0x00000000u, 0u);
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[3] = (u32)(s32)(s16)mem_r16(ram, c->r[30] + 0x000000c0u);
    c->r[2] = 0u + 0x00000100u;
    c->r[2] = c->r[2] << (c->r[3] & 31u);
    c->r[3] = ~(0u | c->r[2]);
    c->r[2] = mem_r32(ram, c->r[4] + 0x0000021cu);
    c->r[2] = c->r[2] & c->r[3];
    mem_w32(ram, c->r[5] + 0x0000021cu, c->r[2]);
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[3] = (u32)(s32)(s16)mem_r16(ram, c->r[30] + 0x000000c0u);
    c->r[2] = 0u + 0x00001000u;
    c->r[2] = c->r[2] << (c->r[3] & 31u);
    c->r[3] = ~(0u | c->r[2]);
    c->r[2] = mem_r32(ram, c->r[4] + 0x0000021cu);
    c->r[2] = c->r[2] & c->r[3];
    mem_w32(ram, c->r[5] + 0x0000021cu, c->r[2]);
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[30] + 0x000000c0u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_08876dd0; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    { mem_w32(ram, c->r[2] + 0x00000254u, 0u); goto L_08876dd0; }
L_08876d3c:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[30] + 0x000000c0u);
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[3];
    c->r[4] = c->r[2] + 0x00000050u;
    c->r[2] = mem_r32(ram, c->r[4] + 0x00000000u);
    c->r[3] = 0u + 0u;
    c->r[2] = alx_ins(c->r[2], c->r[3], 12u, 31u);
    mem_w32(ram, c->r[4] + 0x00000000u, c->r[2]);
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[30] + 0x000000c0u);
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[30];
    c->r[2] = c->r[2] + 0x000000b0u;
    mem_w32(ram, c->r[2] + 0x00000000u, 0u);
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[3] = (u32)(s32)(s16)mem_r16(ram, c->r[30] + 0x000000c0u);
    c->r[2] = 0u + 0x00000100u;
    c->r[2] = c->r[2] << (c->r[3] & 31u);
    c->r[3] = ~(0u | c->r[2]);
    c->r[2] = mem_r32(ram, c->r[4] + 0x0000021cu);
    c->r[2] = c->r[2] & c->r[3];
    mem_w32(ram, c->r[5] + 0x0000021cu, c->r[2]);
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[3] = (u32)(s32)(s16)mem_r16(ram, c->r[30] + 0x000000c0u);
    c->r[2] = 0u + 0x00001000u;
    c->r[2] = c->r[2] << (c->r[3] & 31u);
    c->r[3] = ~(0u | c->r[2]);
    c->r[2] = mem_r32(ram, c->r[4] + 0x0000021cu);
    c->r[2] = c->r[2] & c->r[3];
    mem_w32(ram, c->r[5] + 0x0000021cu, c->r[2]);
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[30] + 0x000000c0u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_08876dd0; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    mem_w32(ram, c->r[2] + 0x00000254u, 0u);
L_08876dd0:
    c->r[2] = mem_r16(ram, c->r[30] + 0x000000c0u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w16(ram, c->r[30] + 0x000000c0u, c->r[2]); goto L_08876b8c; }
L_08876de0:
    mem_w32(ram, c->r[30] + 0x0000016cu, 0u);
    mem_w16(ram, c->r[30] + 0x000000c0u, 0u);
L_08876de8:
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[30] + 0x000000c0u);
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[30] + 0x00000168u);
    c->r[2] = ((s32)c->r[2] < (s32)c->r[3]) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_08876e04; }
    { goto L_088778c8; }
L_08876e04:
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[30] + 0x000000c0u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_08876f04; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000a4u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_088773ac; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000a4u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x000000b8u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00003844u);
    c->f[0] = c->f[1] * c->f[0];
    mem_wf32(ram, c->r[30] + 0x000000c8u, c->f[0]);
    c->r[16] = mem_r32(ram, c->r[30] + 0x000000a4u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[4] = mem_r32(ram, c->r[30] + 0x000000a4u);
    { c->r[31] = 0x08876e48u; c->r[5] = mem_r32(ram, c->r[2] + 0x00000218u); func_08875774(c, ram); }
    c->f[1] = c->f[0];
    c->f[0] = mem_rf32(ram, c->r[16] + 0x000000bcu);
    alx_c_cond_s(c, 14, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_08876e68; }
    { goto L_088773ac; }
L_08876e68:
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[30] + 0x00000150u);
    { c->r[31] = 0x08876e74u; c->r[4] = c->r[2] + 0u; func_08867a3c(c, ram); }
    c->f[1] = mem_rf32(ram, c->r[30] + 0x000000c8u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000008u);
    alx_c_cond_s(c, 14, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_08876e94; }
    { goto L_088773ac; }
L_08876e94:
    c->r[3] = mem_r32(ram, c->r[30] + 0x000000a4u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000b0u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_088773ac; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[3] = c->r[2] + 0x00000050u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[2] + 0x0000004cu;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    mem_w32(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[2] + 0x00000050u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000ac8u;
    { c->r[31] = 0x08876ed8u; c->r[5] = c->r[2] + 0u; func_089cb820(c, ram); }
    mem_w32(ram, c->r[30] + 0x000000b0u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000021cu);
    c->r[2] = c->r[2] | 0x1000u;
    mem_w32(ram, c->r[3] + 0x0000021cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    mem_w32(ram, c->r[2] + 0x0000007cu, 0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    { mem_w32(ram, c->r[2] + 0x00000090u, 0u); goto L_088773ac; }
L_08876f04:
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[30] + 0x000000c0u);
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[30];
    c->r[2] = c->r[2] + 0x000000b0u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_088773ac; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000016cu);
    { int _c = (c->r[2] != 0u); if (_c) goto L_088773ac; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000017cu);
    c->r[3] = 0u + 0u;
    c->r[2] = alx_ins(c->r[2], c->r[3], 12u, 31u);
    mem_w32(ram, c->r[30] + 0x0000017cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000180u);
    c->r[3] = 0u + 0u;
    c->r[2] = alx_ins(c->r[2], c->r[3], 12u, 31u);
    mem_w32(ram, c->r[30] + 0x00000180u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000184u);
    c->r[3] = 0u + 0u;
    c->r[2] = alx_ins(c->r[2], c->r[3], 12u, 31u);
    mem_w32(ram, c->r[30] + 0x00000184u, c->r[2]);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00003848u);
    mem_wf32(ram, c->r[30] + 0x00000158u, c->f[0]);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x0000384cu);
    mem_wf32(ram, c->r[30] + 0x00000170u, c->f[0]);
    mem_wf32(ram, c->r[30] + 0x00000174u, c->f[0]);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00003850u);
    mem_wf32(ram, c->r[30] + 0x00000178u, c->f[0]);
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x08876f90u; c->r[4] = c->r[4] + 0x00000ac8u; func_089cb8ac(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]);
L_08876f94:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_08876fa8; }
    { goto L_088772ac; }
L_08876fa8:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000b0u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_08876ff0; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000b4u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_08876ff0; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000b8u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_08876ff0; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000bcu);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_08876ff0; }
    { goto L_08877008; }
L_08876ff0:
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000ac8u;
    { c->r[31] = 0x08877000u; c->r[5] = mem_r32(ram, c->r[30] + 0x00000010u); func_089cb8e8(c, ram); }
    { mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]); goto L_08876f94; }
L_08877008:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[30] + 0x00000150u);
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[3];
    c->r[2] = c->r[2] + 0x000003e0u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000004u);
    c->r[3] = mem_r8(ram, c->r[2] + 0x0000001du);
    c->r[2] = 0u + 0x00000001u;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_088770d0; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000008cu);
    c->r[2] = c->r[2] & 0x1000u;
    mem_w32(ram, c->r[30] + 0x00000188u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[30] + 0x00000150u);
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[3];
    c->r[2] = c->r[2] + 0x000003e0u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000004u);
    c->r[3] = mem_r8(ram, c->r[2] + 0x0000001du);
    c->r[2] = 0u + 0x00000002u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_0887707c; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000188u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_0887707c; }
    { goto L_088770b8; }
L_0887707c:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[30] + 0x00000150u);
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[3];
    c->r[2] = c->r[2] + 0x000003e0u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000004u);
    c->r[3] = mem_r8(ram, c->r[2] + 0x0000001du);
    c->r[2] = 0u + 0x00000003u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_088770d0; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000188u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_088770b8; }
    { goto L_088770d0; }
L_088770b8:
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000ac8u;
    { c->r[31] = 0x088770c8u; c->r[5] = mem_r32(ram, c->r[30] + 0x00000010u); func_089cb8e8(c, ram); }
    { mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]); goto L_08876f94; }
L_088770d0:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[3] = mem_r16(ram, c->r[2] + 0x0000001au);
    c->r[2] = 0u + 0x00000003u;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_088770f8; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[3] = mem_r16(ram, c->r[2] + 0x0000001au);
    c->r[2] = 0u + 0x00000005u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_08877144; }
L_088770f8:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000008cu);
    c->r[2] = c->r[2] & 0x0004u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_08877144; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x0000008cu);
    c->r[2] = 0x00400000u;
    c->r[2] = c->r[3] & c->r[2];
    { int _c = (c->r[2] != 0u); if (_c) goto L_08877144; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x0000008cu);
    c->r[2] = 0x00100000u;
    c->r[2] = c->r[3] & c->r[2];
    { int _c = (c->r[2] != 0u); if (_c) goto L_08877144; }
    { goto L_0887715c; }
L_08877144:
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000ac8u;
    { c->r[31] = 0x08877154u; c->r[5] = mem_r32(ram, c->r[30] + 0x00000010u); func_089cb8e8(c, ram); }
    { mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]); goto L_08876f94; }
L_0887715c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x000000b8u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00003844u);
    c->f[0] = c->f[1] * c->f[0];
    mem_wf32(ram, c->r[30] + 0x000000c8u, c->f[0]);
    c->r[16] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000010u);
    { c->r[31] = 0x08877188u; c->r[5] = mem_r32(ram, c->r[2] + 0x00000218u); func_08875774(c, ram); }
    c->f[1] = c->f[0];
    c->f[0] = mem_rf32(ram, c->r[16] + 0x000000bcu);
    alx_c_cond_s(c, 12, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_088771cc; }
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[30] + 0x00000150u);
    { c->r[31] = 0x088771acu; c->r[4] = c->r[2] + 0u; func_08867a3c(c, ram); }
    c->f[1] = mem_rf32(ram, c->r[30] + 0x000000c8u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000008u);
    alx_c_cond_s(c, 12, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_088771cc; }
    { goto L_088771e4; }
L_088771cc:
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000ac8u;
    { c->r[31] = 0x088771dcu; c->r[5] = mem_r32(ram, c->r[30] + 0x00000010u); func_089cb8e8(c, ram); }
    { mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]); goto L_08876f94; }
L_088771e4:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x000000bcu);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000158u);
    alx_c_cond_s(c, 12, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_08877208; }
    { goto L_08877254; }
L_08877208:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x000000bcu);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000174u);
    alx_c_cond_s(c, 12, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_0887722c; }
    { goto L_08877254; }
L_0887722c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x000000bcu);
    mem_wf32(ram, c->r[30] + 0x00000174u, c->f[0]);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000ac8u;
    { c->r[31] = 0x08877248u; c->r[5] = mem_r32(ram, c->r[30] + 0x00000010u); func_089cb780(c, ram); }
    mem_w32(ram, c->r[30] + 0x0000018cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000018cu);
    mem_w32(ram, c->r[30] + 0x00000180u, c->r[2]);
L_08877254:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x000000bcu);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000170u);
    alx_c_cond_s(c, 12, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_08877278; }
    { goto L_08877294; }
L_08877278:
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000ac8u;
    { c->r[31] = 0x08877288u; c->r[5] = mem_r32(ram, c->r[30] + 0x00000010u); func_089cb780(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000190u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000190u);
    mem_w32(ram, c->r[30] + 0x0000017cu, c->r[2]);
L_08877294:
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000ac8u;
    { c->r[31] = 0x088772a4u; c->r[5] = mem_r32(ram, c->r[30] + 0x00000010u); func_089cb8e8(c, ram); }
    { mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]); goto L_08876f94; }
L_088772ac:
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[30] + 0x000000c0u);
    c->r[3] = c->r[2] << 2;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = c->r[2] + 0x00000050u;
    mem_w32(ram, c->r[30] + 0x00000204u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000017cu);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000ac8u;
    { c->r[31] = 0x088772d8u; c->r[5] = c->r[2] + 0u; func_089cb820(c, ram); }
    { int _c = (c->r[2] == 0u); if (_c) goto L_088772ec; }
    c->r[2] = c->r[30] + 0x0000017cu;
    { mem_w32(ram, c->r[30] + 0x00000208u, c->r[2]); goto L_088772f4; }
L_088772ec:
    c->r[3] = c->r[30] + 0x00000180u;
    mem_w32(ram, c->r[30] + 0x00000208u, c->r[3]);
L_088772f4:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000208u);
    c->r[2] = mem_r32(ram, c->r[3] + 0x00000000u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000204u);
    mem_w32(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[30] + 0x000000c0u);
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[30];
    c->r[16] = c->r[2] + 0x000000b0u;
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[30] + 0x000000c0u);
    c->r[3] = c->r[2] << 2;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = c->r[2] + 0x00000050u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000ac8u;
    { c->r[31] = 0x0887733cu; c->r[5] = c->r[2] + 0u; func_089cb820(c, ram); }
    mem_w32(ram, c->r[16] + 0x00000000u, c->r[2]);
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[30] + 0x000000c0u);
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[30];
    c->r[2] = c->r[2] + 0x000000b0u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_088773ac; }
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[3] = (u32)(s32)(s16)mem_r16(ram, c->r[30] + 0x000000c0u);
    c->r[2] = 0u + 0x00001000u;
    c->r[3] = c->r[2] << (c->r[3] & 31u);
    c->r[2] = mem_r32(ram, c->r[4] + 0x0000021cu);
    c->r[2] = c->r[2] | c->r[3];
    mem_w32(ram, c->r[5] + 0x0000021cu, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[30] + 0x000000c0u);
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[3];
    c->r[2] = c->r[2] + 0x00000070u;
    mem_w32(ram, c->r[2] + 0x0000000cu, 0u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[30] + 0x000000c0u);
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[3];
    c->r[2] = c->r[2] + 0x00000090u;
    mem_w32(ram, c->r[2] + 0x00000000u, 0u);
L_088773ac:
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[30] + 0x000000c0u);
    { int _c = ((s32)c->r[2] <= 0); if (_c) goto L_088773e0; }
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[30] + 0x000000c0u);
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[30];
    c->r[2] = c->r[2] + 0x000000b0u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_088773e0; }
    c->r[2] = 0u + 0xffffffffu;
    { mem_w32(ram, c->r[30] + 0x0000016cu, c->r[2]); goto L_088778b8; }
L_088773e0:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[2] + 0x0000004cu;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    mem_w32(ram, c->r[30] + 0x000000a0u, c->r[2]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[3] = (u32)(s32)(s16)mem_r16(ram, c->r[30] + 0x000000c0u);
    c->r[2] = 0u + 0x00000100u;
    c->r[3] = c->r[2] << (c->r[3] & 31u);
    c->r[2] = mem_r32(ram, c->r[4] + 0x0000021cu);
    c->r[2] = c->r[3] & c->r[2];
    { int _c = (c->r[2] == 0u); if (_c) goto L_088774fc; }
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[30] + 0x000000c0u);
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[30];
    c->r[2] = c->r[2] + 0x000000b0u;
    c->r[4] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[30] + 0x000000c0u);
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[30];
    c->r[2] = c->r[2] + 0x000000b0u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x0000008cu);
    c->r[2] = 0x00040000u;
    c->r[2] = c->r[3] | c->r[2];
    mem_w32(ram, c->r[4] + 0x0000008cu, c->r[2]);
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[30] + 0x000000c0u);
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[30];
    c->r[2] = c->r[2] + 0x000000b0u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x0000008cu);
    c->r[2] = 0x02000000u;
    c->r[2] = c->r[3] & c->r[2];
    { int _c = (c->r[2] == 0u); if (_c) goto L_088778b8; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[30] + 0x000000c0u);
    c->r[4] = c->r[3] + c->r[2];
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[30] + 0x000000c0u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000008u);
    c->r[2] = c->r[2] + 0x00000001u;
    mem_w8(ram, c->r[4] + 0x00000008u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[30] + 0x000000c0u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000008u);
    c->r[2] = (c->r[2] < 0x0000001fu) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_088778b8; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[30] + 0x000000c0u);
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[3];
    c->r[4] = c->r[2] + 0x00000050u;
    c->r[2] = mem_r32(ram, c->r[4] + 0x00000000u);
    c->r[3] = 0u + 0u;
    c->r[2] = alx_ins(c->r[2], c->r[3], 12u, 31u);
    mem_w32(ram, c->r[4] + 0x00000000u, c->r[2]);
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[3] = (u32)(s32)(s16)mem_r16(ram, c->r[30] + 0x000000c0u);
    c->r[2] = 0u + 0x00000100u;
    c->r[2] = c->r[2] << (c->r[3] & 31u);
    c->r[3] = ~(0u | c->r[2]);
    c->r[2] = mem_r32(ram, c->r[4] + 0x0000021cu);
    c->r[2] = c->r[2] & c->r[3];
    { mem_w32(ram, c->r[5] + 0x0000021cu, c->r[2]); goto L_088778b8; }
L_088774fc:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[3] = (u32)(s32)(s16)mem_r16(ram, c->r[30] + 0x000000c0u);
    c->r[2] = 0u + 0x00001000u;
    c->r[3] = c->r[2] << (c->r[3] & 31u);
    c->r[2] = mem_r32(ram, c->r[4] + 0x0000021cu);
    c->r[2] = c->r[3] & c->r[2];
    { int _c = (c->r[2] == 0u); if (_c) goto L_08877898; }
    c->r[3] = c->r[30] + 0x00000130u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = c->r[2] + 0x00000020u;
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[30] + 0x000000c0u);
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[30];
    c->r[2] = c->r[2] + 0x000000b0u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000020u;
    c->r[4] = c->r[3] + 0u;
    { c->r[31] = 0x0887754cu; c->r[6] = c->r[2] + 0u; func_08820ca4(c, ram); }
    c->r[2] = c->r[30] + 0x00000130u;
    c->r[3] = c->r[30] + 0x00000130u;
    c->r[6] = c->r[30] + 0x000000f0u;
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x08877564u; c->r[5] = c->r[3] + 0u; func_0884c26c(c, ram); }
    c->r[2] = c->r[30] + 0x00000130u;
    { c->r[31] = 0x08877570u; c->r[4] = c->r[2] + 0u; func_08820c6c(c, ram); }
    mem_wf32(ram, c->r[30] + 0x000000c8u, c->f[0]);
    c->f[12] = mem_rf32(ram, c->r[30] + 0x00000130u);
    { c->r[31] = 0x08877580u; c->f[13] = mem_rf32(ram, c->r[30] + 0x00000138u); func_08a0fc44(c, ram); }
    mem_wf32(ram, c->r[30] + 0x00000174u, c->f[0]);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x000000c8u);
    c->f[0] = u2f(0u);
    alx_c_cond_s(c, 12, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_088775a4; }
    { goto L_088775c0; }
L_088775a4:
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000134u);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x000000c8u);
    c->f[0] = c->f[0] / c->f[1];
    { c->r[31] = 0x088775b8u; c->f[12] = c->f[0]; func_08a0fb24(c, ram); }
    { mem_wf32(ram, c->r[30] + 0x0000020cu, c->f[0]); goto L_088775c4; }
L_088775c0:
    mem_w32(ram, c->r[30] + 0x0000020cu, 0u);
L_088775c4:
    c->f[0] = mem_rf32(ram, c->r[30] + 0x0000020cu);
    mem_wf32(ram, c->r[30] + 0x00000178u, c->f[0]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[30] + 0x000000c0u);
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[3];
    c->r[2] = c->r[2] + 0x00000070u;
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000178u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x0000000cu);
    c->f[0] = c->f[1] - c->f[0];
    mem_wf32(ram, c->r[30] + 0x00000178u, c->f[0]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[30] + 0x000000c0u);
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[3];
    c->r[2] = c->r[2] + 0x00000090u;
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000174u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000000u);
    c->f[0] = c->f[1] - c->f[0];
    mem_wf32(ram, c->r[30] + 0x00000174u, c->f[0]);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000178u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000178u);
    c->f[2] = c->f[1] * c->f[0];
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000174u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000174u);
    c->f[0] = c->f[1] * c->f[0];
    c->f[0] = c->f[2] + c->f[0];
    { c->r[31] = 0x08877638u; c->f[12] = c->f[0]; func_08a104b4(c, ram); }
    mem_wf32(ram, c->r[30] + 0x00000194u, c->f[0]);
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[30] + 0x000000c0u);
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[30];
    c->r[2] = c->r[2] + 0x000000b0u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000008cu);
    c->r[2] = c->r[2] >> 12;
    c->r[2] = c->r[2] ^ 0x0001u;
    c->r[2] = c->r[2] & 0x0001u;
    mem_w8(ram, c->r[30] + 0x000000c2u, c->r[2]);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[30] + 0x000000c2u);
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[30];
    c->r[2] = c->r[2] + 0x000000d0u;
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000000u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00003854u);
    c->f[1] = c->f[1] * c->f[0];
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00003858u);
    c->f[1] = c->f[1] / c->f[0];
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000194u);
    alx_c_cond_s(c, 12, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_088776ac; }
    { goto L_08877810; }
L_088776ac:
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000194u);
    c->f[0] = u2f(0u);
    alx_c_cond_s(c, 2, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) == 0u); if (_c) goto L_088776cc; }
    { goto L_08877810; }
L_088776cc:
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[30] + 0x000000c2u);
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[30];
    c->r[2] = c->r[2] + 0x000000d0u;
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000000u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00003854u);
    c->f[1] = c->f[1] * c->f[0];
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00003858u);
    c->f[1] = c->f[1] / c->f[0];
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000178u);
    c->f[1] = c->f[1] * c->f[0];
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000194u);
    c->f[0] = c->f[1] / c->f[0];
    mem_wf32(ram, c->r[30] + 0x00000170u, c->f[0]);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[30] + 0x000000c2u);
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[30];
    c->r[2] = c->r[2] + 0x000000d0u;
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000000u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00003854u);
    c->f[1] = c->f[1] * c->f[0];
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00003858u);
    c->f[1] = c->f[1] / c->f[0];
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000174u);
    c->f[1] = c->f[1] * c->f[0];
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000194u);
    c->f[0] = c->f[1] / c->f[0];
    mem_wf32(ram, c->r[30] + 0x00000158u, c->f[0]);
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[30] + 0x000000c0u);
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[30];
    c->r[2] = c->r[2] + 0x000000b0u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x0000008cu);
    c->r[2] = 0x01000000u;
    c->r[2] = c->r[3] & c->r[2];
    { int _c = (c->r[2] == 0u); if (_c) goto L_0887779c; }
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000170u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x0000385cu);
    c->f[0] = c->f[1] * c->f[0];
    mem_wf32(ram, c->r[30] + 0x00000170u, c->f[0]);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000158u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x0000385cu);
    c->f[0] = c->f[1] * c->f[0];
    mem_wf32(ram, c->r[30] + 0x00000158u, c->f[0]);
L_0887779c:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[30] + 0x000000c0u);
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[3];
    c->r[4] = c->r[2] + 0x00000070u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[30] + 0x000000c0u);
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[3];
    c->r[2] = c->r[2] + 0x00000070u;
    c->f[1] = mem_rf32(ram, c->r[2] + 0x0000000cu);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000170u);
    c->f[0] = c->f[1] + c->f[0];
    mem_wf32(ram, c->r[4] + 0x0000000cu, c->f[0]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[30] + 0x000000c0u);
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[3];
    c->r[4] = c->r[2] + 0x00000090u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[30] + 0x000000c0u);
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[3];
    c->r[2] = c->r[2] + 0x00000090u;
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000000u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000158u);
    c->f[0] = c->f[1] + c->f[0];
    { mem_wf32(ram, c->r[4] + 0x00000000u, c->f[0]); goto L_088778b8; }
L_08877810:
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[30] + 0x000000c0u);
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[30];
    c->r[2] = c->r[2] + 0x000000b0u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000008cu);
    c->r[2] = c->r[2] & 0x1000u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_08877840; }
    c->r[4] = 0u + 0u;
    { c->r[31] = 0x08877840u; c->r[5] = 0u + 0x0000000au; func_0883a204(c, ram); }
L_08877840:
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[3] = (u32)(s32)(s16)mem_r16(ram, c->r[30] + 0x000000c0u);
    c->r[2] = 0u + 0x00000100u;
    c->r[3] = c->r[2] << (c->r[3] & 31u);
    c->r[2] = mem_r32(ram, c->r[4] + 0x0000021cu);
    c->r[2] = c->r[2] | c->r[3];
    mem_w32(ram, c->r[5] + 0x0000021cu, c->r[2]);
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[3] = (u32)(s32)(s16)mem_r16(ram, c->r[30] + 0x000000c0u);
    c->r[2] = 0u + 0x00001000u;
    c->r[2] = c->r[2] << (c->r[3] & 31u);
    c->r[3] = ~(0u | c->r[2]);
    c->r[2] = mem_r32(ram, c->r[4] + 0x0000021cu);
    c->r[2] = c->r[2] & c->r[3];
    mem_w32(ram, c->r[5] + 0x0000021cu, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[30] + 0x000000c0u);
    c->r[2] = c->r[3] + c->r[2];
    { mem_w8(ram, c->r[2] + 0x00000008u, 0u); goto L_088778b8; }
L_08877898:
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[30] + 0x000000c0u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_088778b8; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    mem_w32(ram, c->r[2] + 0x0000007cu, 0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    { mem_w32(ram, c->r[2] + 0x00000090u, 0u); goto L_088778c8; }
L_088778b8:
    c->r[2] = mem_r16(ram, c->r[30] + 0x000000c0u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w16(ram, c->r[30] + 0x000000c0u, c->r[2]); goto L_08876de8; }
L_088778c8:
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000a4u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_0887814c; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000a4u);
    c->r[3] = mem_r16(ram, c->r[2] + 0x0000001au);
    c->r[2] = 0u + 0x00000004u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_08877904; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x0000004cu);
    c->r[4] = 0u + 0u;
    c->r[3] = alx_ins(c->r[3], c->r[4], 12u, 31u);
    mem_w32(ram, c->r[2] + 0x0000004cu, c->r[3]);
    { mem_w32(ram, c->r[30] + 0x000000a4u, 0u); goto L_08878154; }
L_08877904:
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000a4u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000008cu);
    c->r[2] = c->r[2] >> 12;
    c->r[2] = c->r[2] ^ 0x0001u;
    c->r[2] = c->r[2] & 0x0001u;
    mem_w8(ram, c->r[30] + 0x000000c2u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000179u);
    c->f[0] = u2f(c->r[2]);
    c->f[1] = (f32)(s32)f2u(c->f[0]);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00003860u);
    c->f[0] = c->f[1] * c->f[0];
    mem_wf32(ram, c->r[30] + 0x00000194u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x0000017au);
    c->f[0] = u2f(c->r[2]);
    c->f[1] = (f32)(s32)f2u(c->f[0]);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00003860u);
    c->f[0] = c->f[1] * c->f[0];
    mem_wf32(ram, c->r[30] + 0x00000178u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000218u);
    c->r[2] = c->r[2] & 0x0800u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_08877980; }
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00003864u);
    { mem_wf32(ram, c->r[30] + 0x00000174u, c->f[0]); goto L_088779c0; }
L_08877980:
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[30] + 0x000000c2u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_088779a4; }
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000194u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00003868u);
    c->f[1] = c->f[1] * c->f[0];
    { mem_wf32(ram, c->r[30] + 0x00000210u, c->f[1]); goto L_088779b8; }
L_088779a4:
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000178u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00003868u);
    c->f[1] = c->f[1] * c->f[0];
    mem_wf32(ram, c->r[30] + 0x00000210u, c->f[1]);
L_088779b8:
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000210u);
    mem_wf32(ram, c->r[30] + 0x00000174u, c->f[0]);
L_088779c0:
    { c->r[31] = 0x088779c8u; c->f[12] = mem_rf32(ram, c->r[30] + 0x00000174u); func_08a0f5bc(c, ram); }
    mem_wf32(ram, c->r[30] + 0x00000170u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000218u);
    c->r[2] = c->r[2] & 0x4000u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_088779f0; }
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x0000386cu);
    { mem_wf32(ram, c->r[30] + 0x00000158u, c->f[0]); goto L_088779fc; }
L_088779f0:
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00003870u);
    mem_wf32(ram, c->r[30] + 0x00000158u, c->f[0]);
L_088779fc:
    c->r[2] = c->r[30] + 0x000001a0u;
    { c->r[31] = 0x08877a08u; c->r[4] = c->r[2] + 0u; func_08808240(c, ram); }
    { c->r[31] = 0x08877a10u; func_0886fccc(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = c->r[30] + 0x000001a0u;
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x0000384cu);
    c->r[4] = c->r[2] + 0u;
    c->r[5] = c->r[3] + 0u;
    { c->r[31] = 0x08877a30u; c->f[12] = c->f[0]; func_0884c224(c, ram); }
    c->r[2] = c->r[30] + 0x000001a0u;
    c->r[3] = c->r[30] + 0x000001a0u;
    c->r[6] = c->r[30] + 0x000000f0u;
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x08877a48u; c->r[5] = c->r[3] + 0u; func_0884c26c(c, ram); }
    { c->r[31] = 0x08877a50u; c->f[12] = mem_rf32(ram, c->r[30] + 0x000001a4u); func_08a0fb24(c, ram); }
    mem_wf32(ram, c->r[30] + 0x000001b0u, c->f[0]);
    c->f[12] = mem_rf32(ram, c->r[30] + 0x000001a0u);
    { c->r[31] = 0x08877a60u; c->f[13] = mem_rf32(ram, c->r[30] + 0x000001a8u); func_08a0fc44(c, ram); }
    mem_wf32(ram, c->r[30] + 0x000001b4u, c->f[0]);
    mem_w32(ram, c->r[30] + 0x000001b8u, 0u);
    mem_w32(ram, c->r[30] + 0x000001bcu, 0u);
    c->r[2] = c->r[30] + 0x000001c0u;
    { c->r[31] = 0x08877a78u; c->r[4] = c->r[2] + 0u; func_08808240(c, ram); }
    c->r[3] = mem_r32(ram, c->r[30] + 0x000000a4u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x00000042u);
    c->f[0] = u2f(c->r[2]);
    c->f[1] = (f32)(s32)f2u(c->f[0]);
    c->f[0] = mem_rf32(ram, c->r[3] + 0x000000b8u);
    alx_c_cond_s(c, 14, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_08877aa8; }
    { goto L_08877f2c; }
L_08877aa8:
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000a4u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x000000bcu);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000170u);
    alx_c_cond_s(c, 12, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_08877acc; }
    { goto L_08877f2c; }
L_08877acc:
    c->r[4] = c->r[30] + 0x00000130u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = c->r[2] + 0x00000020u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000a4u);
    c->r[2] = c->r[2] + 0x00000020u;
    c->r[5] = c->r[3] + 0u;
    { c->r[31] = 0x08877aecu; c->r[6] = c->r[2] + 0u; func_08820ca4(c, ram); }
    c->r[2] = c->r[30] + 0x00000130u;
    c->r[3] = c->r[30] + 0x00000130u;
    c->r[6] = c->r[30] + 0x000000f0u;
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x08877b04u; c->r[5] = c->r[3] + 0u; func_0884c26c(c, ram); }
    c->r[2] = c->r[30] + 0x00000130u;
    { c->r[31] = 0x08877b10u; c->r[4] = c->r[2] + 0u; func_08820c6c(c, ram); }
    mem_wf32(ram, c->r[30] + 0x000000c8u, c->f[0]);
    c->f[12] = mem_rf32(ram, c->r[30] + 0x00000130u);
    { c->r[31] = 0x08877b20u; c->f[13] = mem_rf32(ram, c->r[30] + 0x00000138u); func_08a0fc44(c, ram); }
    mem_wf32(ram, c->r[30] + 0x000001d4u, c->f[0]);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x000000c8u);
    c->f[0] = u2f(0u);
    alx_c_cond_s(c, 12, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_08877b44; }
    { goto L_08877b60; }
L_08877b44:
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000134u);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x000000c8u);
    c->f[0] = c->f[0] / c->f[1];
    { c->r[31] = 0x08877b58u; c->f[12] = c->f[0]; func_08a0fb24(c, ram); }
    { mem_wf32(ram, c->r[30] + 0x00000214u, c->f[0]); goto L_08877b64; }
L_08877b60:
    mem_w32(ram, c->r[30] + 0x00000214u, 0u);
L_08877b64:
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000214u);
    mem_wf32(ram, c->r[30] + 0x000001d0u, c->f[0]);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x000001d4u);
    mem_wf32(ram, c->r[30] + 0x000001bcu, c->f[0]);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x000001d0u);
    mem_wf32(ram, c->r[30] + 0x000001b8u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x000001d0u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x0000008cu);
    c->f[0] = c->f[1] - c->f[0];
    mem_wf32(ram, c->r[30] + 0x000001d0u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x000001d4u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x000000a0u);
    c->f[0] = c->f[1] - c->f[0];
    mem_wf32(ram, c->r[30] + 0x000001d4u, c->f[0]);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x000001d0u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x000001d0u);
    c->f[2] = c->f[1] * c->f[0];
    c->f[1] = mem_rf32(ram, c->r[30] + 0x000001d4u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x000001d4u);
    c->f[0] = c->f[1] * c->f[0];
    c->f[0] = c->f[2] + c->f[0];
    { c->r[31] = 0x08877bc8u; c->f[12] = c->f[0]; func_08a104b4(c, ram); }
    mem_wf32(ram, c->r[30] + 0x000001d8u, c->f[0]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x00000218u);
    c->r[2] = 0xdfff0000u;
    c->r[2] = c->r[2] | 0xffffu;
    c->r[2] = c->r[3] & c->r[2];
    mem_w32(ram, c->r[4] + 0x00000218u, c->r[2]);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x000001d8u);
    c->f[0] = u2f(0u);
    alx_c_cond_s(c, 12, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_08877c08; }
    { goto L_08877db0; }
L_08877c08:
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[30] + 0x000000c2u);
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[30];
    c->r[2] = c->r[2] + 0x000000d0u;
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000000u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00003854u);
    c->f[1] = c->f[1] * c->f[0];
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00003858u);
    c->f[1] = c->f[1] / c->f[0];
    c->f[0] = mem_rf32(ram, c->r[30] + 0x000001d0u);
    c->f[1] = c->f[1] * c->f[0];
    c->f[0] = mem_rf32(ram, c->r[30] + 0x000001d8u);
    c->f[0] = c->f[1] / c->f[0];
    mem_wf32(ram, c->r[30] + 0x000001dcu, c->f[0]);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[30] + 0x000000c2u);
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[30];
    c->r[2] = c->r[2] + 0x000000d0u;
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000000u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00003854u);
    c->f[1] = c->f[1] * c->f[0];
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00003858u);
    c->f[1] = c->f[1] / c->f[0];
    c->f[0] = mem_rf32(ram, c->r[30] + 0x000001d4u);
    c->f[1] = c->f[1] * c->f[0];
    c->f[0] = mem_rf32(ram, c->r[30] + 0x000001d8u);
    c->f[0] = c->f[1] / c->f[0];
    mem_wf32(ram, c->r[30] + 0x000001e0u, c->f[0]);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[30] + 0x000000c2u);
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[30];
    c->r[2] = c->r[2] + 0x000000d0u;
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000000u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00003854u);
    c->f[1] = c->f[1] * c->f[0];
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00003858u);
    c->f[1] = c->f[1] / c->f[0];
    c->f[0] = mem_rf32(ram, c->r[30] + 0x000001d8u);
    alx_c_cond_s(c, 12, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_08877cd0; }
    { goto L_08877d3c; }
L_08877cd0:
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000a4u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x0000008cu);
    c->r[2] = 0x01000000u;
    c->r[2] = c->r[3] & c->r[2];
    { int _c = (c->r[2] == 0u); if (_c) goto L_08877d10; }
    c->f[1] = mem_rf32(ram, c->r[30] + 0x000001dcu);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x0000385cu);
    c->f[0] = c->f[1] * c->f[0];
    mem_wf32(ram, c->r[30] + 0x000001dcu, c->f[0]);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x000001e0u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x0000385cu);
    c->f[0] = c->f[1] * c->f[0];
    mem_wf32(ram, c->r[30] + 0x000001e0u, c->f[0]);
L_08877d10:
    c->f[1] = mem_rf32(ram, c->r[30] + 0x000001dcu);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00003874u);
    c->f[0] = c->f[1] * c->f[0];
    mem_wf32(ram, c->r[30] + 0x000001dcu, c->f[0]);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x000001e0u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00003874u);
    c->f[0] = c->f[1] * c->f[0];
    { mem_wf32(ram, c->r[30] + 0x000001e0u, c->f[0]); goto L_08877d7c; }
L_08877d3c:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x00000218u);
    c->r[2] = 0x20000000u;
    c->r[2] = c->r[3] | c->r[2];
    mem_w32(ram, c->r[4] + 0x00000218u, c->r[2]);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x000001dcu);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00003878u);
    c->f[0] = c->f[1] * c->f[0];
    mem_wf32(ram, c->r[30] + 0x000001dcu, c->f[0]);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x000001e0u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00003878u);
    c->f[0] = c->f[1] * c->f[0];
    mem_wf32(ram, c->r[30] + 0x000001e0u, c->f[0]);
L_08877d7c:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x0000008cu);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x000001dcu);
    c->f[0] = c->f[1] + c->f[0];
    mem_wf32(ram, c->r[3] + 0x0000008cu, c->f[0]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x000000a0u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x000001e0u);
    c->f[0] = c->f[1] + c->f[0];
    { mem_wf32(ram, c->r[3] + 0x000000a0u, c->f[0]); goto L_08877dc8; }
L_08877db0:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x00000218u);
    c->r[2] = 0x20000000u;
    c->r[2] = c->r[3] | c->r[2];
    mem_w32(ram, c->r[4] + 0x00000218u, c->r[2]);
L_08877dc8:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    { c->r[31] = 0x08877dd4u; c->f[12] = mem_rf32(ram, c->r[2] + 0x0000008cu); func_08a0f82c(c, ram); }
    c->f[1] = c->f[0];
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x0000387cu);
    c->f[20] = c->f[1] * c->f[0];
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    { c->r[31] = 0x08877df0u; c->f[12] = mem_rf32(ram, c->r[2] + 0x000000a0u); func_08a0f82c(c, ram); }
    c->f[1] = c->f[0];
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x0000387cu);
    c->f[0] = c->f[1] * c->f[0];
    c->r[2] = c->r[30] + 0x000001f0u;
    c->r[4] = c->r[2] + 0u;
    c->f[12] = c->f[20];
    c->f[13] = c->f[0];
    c->f[14] = u2f(0u);
    c->f[15] = u2f(0u);
    { c->r[31] = 0x08877e20u; func_0880d140(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x000001f0u);
    mem_w32(ram, c->r[30] + 0x000001c0u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x000001f4u);
    mem_w32(ram, c->r[30] + 0x000001c4u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x000001f8u);
    mem_w32(ram, c->r[30] + 0x000001c8u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x000001fcu);
    mem_w32(ram, c->r[30] + 0x000001ccu, c->r[2]);
    { c->r[31] = 0x08877e48u; c->f[12] = mem_rf32(ram, c->r[30] + 0x000001b8u); func_08a0f82c(c, ram); }
    c->f[1] = c->f[0];
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x0000387cu);
    c->f[20] = c->f[1] * c->f[0];
    { c->r[31] = 0x08877e60u; c->f[12] = mem_rf32(ram, c->r[30] + 0x000001bcu); func_08a0f82c(c, ram); }
    c->f[1] = c->f[0];
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x0000387cu);
    c->f[0] = c->f[1] * c->f[0];
    c->r[2] = c->r[30] + 0x000001f0u;
    c->r[4] = c->r[2] + 0u;
    c->f[12] = c->f[20];
    c->f[13] = c->f[0];
    c->f[14] = u2f(0u);
    c->f[15] = u2f(0u);
    { c->r[31] = 0x08877e90u; func_0880d140(c, ram); }
    c->r[2] = c->r[30] + 0x000001c0u;
    { c->r[31] = 0x08877e9cu; c->r[4] = c->r[2] + 0u; func_08820c6c(c, ram); }
    c->f[20] = c->f[0];
    c->r[2] = c->r[30] + 0x000001f0u;
    { c->r[31] = 0x08877eacu; c->r[4] = c->r[2] + 0u; func_08820c6c(c, ram); }
    c->f[0] = c->f[20] - c->f[0];
    mem_wf32(ram, c->r[30] + 0x000001e0u, c->f[0]);
    c->r[2] = c->r[30] + 0x000001f0u;
    { c->r[31] = 0x08877ec0u; c->r[4] = c->r[2] + 0u; func_08820c6c(c, ram); }
    c->f[1] = c->f[0];
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x0000383cu);
    alx_c_cond_s(c, 12, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_08877ee4; }
    { goto L_08877f20; }
L_08877ee4:
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000a4u);
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x000000b0u);
    { int _c = ((s32)c->r[2] <= 0); if (_c) goto L_08877f20; }
    c->r[16] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[30] + 0x000001c0u;
    { c->r[31] = 0x08877f04u; c->r[4] = c->r[2] + 0u; func_08820c6c(c, ram); }
    c->f[20] = c->f[0];
    c->r[2] = c->r[30] + 0x000001f0u;
    { c->r[31] = 0x08877f14u; c->r[4] = c->r[2] + 0u; func_08820c6c(c, ram); }
    c->f[0] = c->f[20] / c->f[0];
    { mem_wf32(ram, c->r[16] + 0x00000254u, c->f[0]); goto L_08878154; }
L_08877f20:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    { mem_w32(ram, c->r[2] + 0x00000254u, 0u); goto L_08878154; }
L_08877f2c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x000001b0u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00003880u);
    c->f[1] = c->f[1] + c->f[0];
    c->f[0] = mem_rf32(ram, c->r[2] + 0x0000008cu);
    alx_c_cond_s(c, 12, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_08877f5c; }
    { goto L_08877f7c; }
L_08877f5c:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x0000008cu);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00003880u);
    c->f[0] = c->f[1] - c->f[0];
    { mem_wf32(ram, c->r[3] + 0x0000008cu, c->f[0]); goto L_08877fd8; }
L_08877f7c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x000001b0u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00003880u);
    c->f[1] = c->f[1] - c->f[0];
    c->f[0] = mem_rf32(ram, c->r[2] + 0x0000008cu);
    alx_c_cond_s(c, 12, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_08877fac; }
    { goto L_08877fcc; }
L_08877fac:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x0000008cu);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00003880u);
    c->f[0] = c->f[1] + c->f[0];
    { mem_wf32(ram, c->r[3] + 0x0000008cu, c->f[0]); goto L_08877fd8; }
L_08877fcc:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x000001b0u);
    mem_wf32(ram, c->r[2] + 0x0000008cu, c->f[0]);
L_08877fd8:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x000001b4u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00003880u);
    c->f[1] = c->f[1] + c->f[0];
    c->f[0] = mem_rf32(ram, c->r[2] + 0x000000a0u);
    alx_c_cond_s(c, 12, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_08878008; }
    { goto L_08878028; }
L_08878008:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x000000a0u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00003880u);
    c->f[0] = c->f[1] - c->f[0];
    { mem_wf32(ram, c->r[3] + 0x000000a0u, c->f[0]); goto L_08878084; }
L_08878028:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x000001b4u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00003880u);
    c->f[1] = c->f[1] - c->f[0];
    c->f[0] = mem_rf32(ram, c->r[2] + 0x000000a0u);
    alx_c_cond_s(c, 12, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_08878058; }
    { goto L_08878078; }
L_08878058:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x000000a0u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00003880u);
    c->f[0] = c->f[1] + c->f[0];
    { mem_wf32(ram, c->r[3] + 0x000000a0u, c->f[0]); goto L_08878084; }
L_08878078:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x000001b4u);
    mem_wf32(ram, c->r[2] + 0x000000a0u, c->f[0]);
L_08878084:
    c->f[12] = u2f(0u);
    { c->r[31] = 0x08878090u; func_08a0f82c(c, ram); }
    c->f[1] = c->f[0];
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x0000387cu);
    c->f[20] = c->f[1] * c->f[0];
    c->f[12] = u2f(0u);
    { c->r[31] = 0x088780acu; func_08a0f82c(c, ram); }
    c->f[1] = c->f[0];
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x0000387cu);
    c->f[0] = c->f[1] * c->f[0];
    c->r[2] = c->r[30] + 0x000001f0u;
    c->r[4] = c->r[2] + 0u;
    c->f[12] = c->f[20];
    c->f[13] = c->f[0];
    c->f[14] = u2f(0u);
    c->f[15] = u2f(0u);
    { c->r[31] = 0x088780dcu; func_0880d140(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x000001f0u);
    mem_w32(ram, c->r[30] + 0x000001c0u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x000001f4u);
    mem_w32(ram, c->r[30] + 0x000001c4u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x000001f8u);
    mem_w32(ram, c->r[30] + 0x000001c8u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x000001fcu);
    mem_w32(ram, c->r[30] + 0x000001ccu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000254u);
    c->f[0] = u2f(0u);
    alx_c_cond_s(c, 12, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_08878120; }
    { goto L_08878140; }
L_08878120:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000254u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x0000385cu);
    c->f[0] = c->f[1] - c->f[0];
    { mem_wf32(ram, c->r[3] + 0x00000254u, c->f[0]); goto L_08878154; }
L_08878140:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    { mem_w32(ram, c->r[2] + 0x00000254u, 0u); goto L_08878154; }
L_0887814c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    mem_w32(ram, c->r[2] + 0x00000254u, 0u);
L_08878154:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000228u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000224u);
    c->r[16] = mem_r32(ram, c->r[29] + 0x00000220u);
    c->f[20] = mem_rf32(ram, c->r[29] + 0x00000230u);
    { c->r[29] = c->r[29] + 0x00000240u; return; }
    return; /* fell out of func_0887583c */
}

/* func_0887dcb8  0x0887dcb8..0x0887ddd8  288 bytes, source=indirect */
void func_0887dcb8(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0887dcb8u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[6]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_0887dd88; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r8(ram, c->r[2] + 0x0000000eu);
    c->r[2] = c->r[2] + 0x00000001u;
    mem_w8(ram, c->r[3] + 0x0000000eu, c->r[2]);
    c->r[2] = c->r[2] & 0x00ffu;
    c->r[2] = (c->r[2] < 0x0000000fu) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_0887ddc8; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x000000fcu);
    c->f[0] = u2f(0u);
    alx_c_cond_s(c, 2, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_0887dd24; }
    { goto L_0887dd78; }
L_0887dd24:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x000000f8u);
    c->f[0] = u2f(0u);
    alx_c_cond_s(c, 2, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_0887dd48; }
    { goto L_0887dd78; }
L_0887dd48:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x0000021cu);
    c->r[2] = 0x00400000u;
    c->r[2] = c->r[3] | c->r[2];
    mem_w32(ram, c->r[4] + 0x0000021cu, c->r[2]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x0000021cu);
    c->r[2] = 0x02000000u;
    c->r[2] = c->r[3] | c->r[2];
    mem_w32(ram, c->r[4] + 0x0000021cu, c->r[2]);
L_0887dd78:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = 0u + 0x0000000fu;
    { mem_w8(ram, c->r[3] + 0x0000000eu, c->r[2]); goto L_0887ddc8; }
L_0887dd88:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x0000021cu);
    c->r[2] = 0xffbf0000u;
    c->r[2] = c->r[2] | 0xffffu;
    c->r[2] = c->r[3] & c->r[2];
    mem_w32(ram, c->r[4] + 0x0000021cu, c->r[2]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x0000021cu);
    c->r[2] = 0xfdff0000u;
    c->r[2] = c->r[2] | 0xffffu;
    c->r[2] = c->r[3] & c->r[2];
    mem_w32(ram, c->r[4] + 0x0000021cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    mem_w8(ram, c->r[2] + 0x0000000eu, 0u);
L_0887ddc8:
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_0887dcb8 */
}

/* func_08882fcc  0x08882fcc..0x08883098  204 bytes, source=fde */
void func_08882fcc(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08882fccu);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, 0u);
L_08882fe0:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000019u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_08882ff8; }
    { goto L_0888303c; }
L_08882ff8:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08a90000u;
    c->r[2] = c->r[2] + 0xffffe1a0u;
    c->r[4] = c->r[3] + c->r[2];
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = 0u + 0x00000160u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[3] = c->lo;
    c->r[2] = 0x08a90000u;
    c->r[2] = c->r[2] + 0xffffbf40u;
    c->r[2] = c->r[2] + c->r[3];
    mem_w32(ram, c->r[4] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000000u, c->r[2]); goto L_08882fe0; }
L_0888303c:
    c->r[4] = 0x08a90000u;
    c->r[4] = c->r[4] + 0xffffbf40u;
    c->r[5] = 0u + 0u;
    { c->r[31] = 0x08883050u; c->r[6] = 0u + 0x00002260u; func_08a19ec4(c, ram); }
    c->r[2] = 0u + 0x00000019u;
    c->r[1] = 0x08a90000u;
    mem_w32(ram, c->r[1] + 0xffffe204u, c->r[2]);
    c->r[4] = 0x08a90000u;
    c->r[4] = c->r[4] + 0xffffe208u;
    c->r[5] = 0u + 0u;
    { c->r[31] = 0x08883070u; c->r[6] = 0u + 0x00000200u; func_08a19ec4(c, ram); }
    c->r[4] = 0x08a90000u;
    c->r[4] = c->r[4] + 0xffffe23cu;
    c->r[5] = 0u + 0u;
    { c->r[31] = 0x08883084u; c->r[6] = 0u + 0x00000400u; func_08a19ec4(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_08882fcc */
}

/* func_08886dbc  0x08886dbc..0x08886f24  360 bytes, source=fde */
void func_08886dbc(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08886dbcu);
    c->r[29] = c->r[29] + 0xffffff10u;
    mem_w32(ram, c->r[29] + 0x000000e4u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x000000e0u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[6]);
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[7]);
    c->r[2] = c->r[30] + 0x00000010u;
    { c->r[31] = 0x08886de8u; c->r[4] = c->r[2] + 0u; func_0885a2b8(c, ram); }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = mem_r32(ram, c->r[3] + 0x00000000u);
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[3] + 0x00000004u);
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[3] + 0x00000008u);
    mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[3] + 0x0000000cu);
    mem_w32(ram, c->r[30] + 0x0000001cu, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[3] + 0x00000000u);
    mem_w32(ram, c->r[30] + 0x00000020u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[3] + 0x00000004u);
    mem_w32(ram, c->r[30] + 0x00000024u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[3] + 0x00000008u);
    mem_w32(ram, c->r[30] + 0x00000028u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[3] + 0x0000000cu);
    mem_w32(ram, c->r[30] + 0x0000002cu, c->r[2]);
    c->r[2] = c->r[30] + 0x00000010u;
    c->r[2] = c->r[2] + 0x00000020u;
    c->r[4] = c->r[2] + 0u;
    c->r[5] = mem_r32(ram, c->r[30] + 0x0000000cu);
    { c->r[31] = 0x08886e48u; c->r[6] = mem_r32(ram, c->r[30] + 0x00000008u); func_08820ca4(c, ram); }
    c->r[2] = c->r[30] + 0x00000010u;
    c->r[3] = c->r[2] + 0x00000030u;
    c->r[2] = c->r[30] + 0x00000010u;
    c->r[2] = c->r[2] + 0x00000020u;
    c->r[4] = c->r[3] + 0u;
    { c->r[31] = 0x08886e64u; c->r[5] = c->r[2] + 0u; func_0884c1d8(c, ram); }
    c->r[2] = c->r[30] + 0x00000010u;
    c->r[2] = c->r[2] + 0x00000020u;
    { c->r[31] = 0x08886e74u; c->r[4] = c->r[2] + 0u; func_08820c6c(c, ram); }
    mem_wf32(ram, c->r[30] + 0x00000074u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_08886e94; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000000u);
    { mem_wf32(ram, c->r[30] + 0x000000d4u, c->f[0]); goto L_08886ea0; }
L_08886e94:
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00003fbcu);
    mem_wf32(ram, c->r[30] + 0x000000d4u, c->f[0]);
L_08886ea0:
    c->f[0] = mem_rf32(ram, c->r[30] + 0x000000d4u);
    mem_wf32(ram, c->r[30] + 0x00000078u, c->f[0]);
    c->r[2] = c->r[30] + 0x00000090u;
    mem_w32(ram, c->r[30] + 0x00000070u, c->r[2]);
    c->r[2] = c->r[30] + 0x00000010u;
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x08886ec0u; c->r[5] = 0u + 0u; func_08885c0c(c, ram); }
    mem_w32(ram, c->r[30] + 0x000000d0u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_08886ef4; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000050u);
    mem_w32(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000054u);
    mem_w32(ram, c->r[3] + 0x00000004u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000058u);
    mem_w32(ram, c->r[3] + 0x00000008u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000005cu);
    mem_w32(ram, c->r[3] + 0x0000000cu, c->r[2]);
L_08886ef4:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_08886f0c; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000078u);
    mem_wf32(ram, c->r[2] + 0x00000000u, c->f[0]);
L_08886f0c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000d0u);
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x000000e4u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x000000e0u);
    { c->r[29] = c->r[29] + 0x000000f0u; return; }
    return; /* fell out of func_08886dbc */
}

/* func_0888be64  0x0888be64..0x0888c084  544 bytes, source=sweep */
void func_0888be64(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0888be64u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[6]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = (c->r[2] < 0x00000016u) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_0888c070; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08a40000u;
    c->r[2] = c->r[2] + 0x0000408cu;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    { u32 _t = c->r[2]; switch (_t) { case 0x0888beb0u: goto L_0888beb0; case 0x0888bec4u: goto L_0888bec4; case 0x0888bed8u: goto L_0888bed8; case 0x0888beecu: goto L_0888beec; case 0x0888bf00u: goto L_0888bf00; case 0x0888bf14u: goto L_0888bf14; case 0x0888bf28u: goto L_0888bf28; case 0x0888bf3cu: goto L_0888bf3c; case 0x0888bf50u: goto L_0888bf50; case 0x0888bf64u: goto L_0888bf64; case 0x0888bf78u: goto L_0888bf78; case 0x0888bf8cu: goto L_0888bf8c; case 0x0888bfa0u: goto L_0888bfa0; case 0x0888bfb4u: goto L_0888bfb4; case 0x0888bfccu: goto L_0888bfcc; case 0x0888bfe4u: goto L_0888bfe4; case 0x0888bffcu: goto L_0888bffc; case 0x0888c014u: goto L_0888c014; case 0x0888c028u: goto L_0888c028; case 0x0888c03cu: goto L_0888c03c; case 0x0888c050u: goto L_0888c050; case 0x0888c064u: goto L_0888c064; default: recomp_trap_unknown_indirect(c, ram, 0x0888bea8u, _t); return; } }
L_0888beb0:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x0888bebcu; c->r[5] = mem_r32(ram, c->r[30] + 0x00000008u); func_0888c284(c, ram); }
    { goto L_0888c070; }
L_0888bec4:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x0888bed0u; c->r[5] = mem_r32(ram, c->r[30] + 0x00000008u); func_0888c2c8(c, ram); }
    { goto L_0888c070; }
L_0888bed8:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x0888bee4u; c->r[5] = mem_r32(ram, c->r[30] + 0x00000008u); func_0888ce34(c, ram); }
    { goto L_0888c070; }
L_0888beec:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x0888bef8u; c->r[5] = mem_r32(ram, c->r[30] + 0x00000008u); func_0888c30c(c, ram); }
    { goto L_0888c070; }
L_0888bf00:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x0888bf0cu; c->r[5] = mem_r32(ram, c->r[30] + 0x00000008u); func_0888c350(c, ram); }
    { goto L_0888c070; }
L_0888bf14:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x0888bf20u; c->r[5] = mem_r32(ram, c->r[30] + 0x00000008u); func_0888c394(c, ram); }
    { goto L_0888c070; }
L_0888bf28:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x0888bf34u; c->r[5] = mem_r32(ram, c->r[30] + 0x00000008u); func_0888c3d8(c, ram); }
    { goto L_0888c070; }
L_0888bf3c:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x0888bf48u; c->r[5] = mem_r32(ram, c->r[30] + 0x00000008u); func_0888c41c(c, ram); }
    { goto L_0888c070; }
L_0888bf50:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x0888bf5cu; c->r[5] = mem_r32(ram, c->r[30] + 0x00000008u); func_0888c460(c, ram); }
    { goto L_0888c070; }
L_0888bf64:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x0888bf70u; c->r[5] = mem_r32(ram, c->r[30] + 0x00000008u); func_0888c4a4(c, ram); }
    { goto L_0888c070; }
L_0888bf78:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x0888bf84u; c->r[5] = mem_r32(ram, c->r[30] + 0x00000008u); func_0888c4e8(c, ram); }
    { goto L_0888c070; }
L_0888bf8c:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x0888bf98u; c->r[5] = mem_r32(ram, c->r[30] + 0x00000008u); func_0888c52c(c, ram); }
    { goto L_0888c070; }
L_0888bfa0:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x0888bfacu; c->r[5] = mem_r32(ram, c->r[30] + 0x00000008u); func_0888c570(c, ram); }
    { goto L_0888c070; }
L_0888bfb4:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = 0u + 0u;
    { c->r[31] = 0x0888bfc4u; c->r[6] = mem_r32(ram, c->r[30] + 0x00000008u); func_0888c5b4(c, ram); }
    { goto L_0888c070; }
L_0888bfcc:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = 0u + 0x00000001u;
    { c->r[31] = 0x0888bfdcu; c->r[6] = mem_r32(ram, c->r[30] + 0x00000008u); func_0888c5b4(c, ram); }
    { goto L_0888c070; }
L_0888bfe4:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = 0u + 0x00000002u;
    { c->r[31] = 0x0888bff4u; c->r[6] = mem_r32(ram, c->r[30] + 0x00000008u); func_0888c5b4(c, ram); }
    { goto L_0888c070; }
L_0888bffc:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = 0u + 0x00000003u;
    { c->r[31] = 0x0888c00cu; c->r[6] = mem_r32(ram, c->r[30] + 0x00000008u); func_0888c5b4(c, ram); }
    { goto L_0888c070; }
L_0888c014:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x0888c020u; c->r[5] = mem_r32(ram, c->r[30] + 0x00000008u); func_0888c604(c, ram); }
    { goto L_0888c070; }
L_0888c028:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x0888c034u; c->r[5] = mem_r32(ram, c->r[30] + 0x00000008u); func_0888c648(c, ram); }
    { goto L_0888c070; }
L_0888c03c:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x0888c048u; c->r[5] = mem_r32(ram, c->r[30] + 0x00000008u); func_0888c68c(c, ram); }
    { goto L_0888c070; }
L_0888c050:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x0888c05cu; c->r[5] = mem_r32(ram, c->r[30] + 0x00000008u); func_0888c6d0(c, ram); }
    { goto L_0888c070; }
L_0888c064:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x0888c070u; c->r[5] = mem_r32(ram, c->r[30] + 0x00000008u); func_0888cee0(c, ram); }
L_0888c070:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_0888be64 */
}

/* func_0888cc04  0x0888cc04..0x0888cc44  64 bytes, source=sweep */
void func_0888cc04(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0888cc04u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    mem_wf32(ram, c->r[30] + 0x00000008u, c->f[12]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000004u);
    { c->r[31] = 0x0888cc30u; c->f[12] = mem_rf32(ram, c->r[30] + 0x00000008u); func_0888d05c(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_0888cc04 */
}

/* func_0888d9b8  0x0888d9b8..0x0888da7c  196 bytes, source=sweep */
void func_0888d9b8(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0888d9b8u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000000u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00004044u);
    c->f[0] = c->f[1] * c->f[0];
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    mem_wf32(ram, c->r[30] + 0x00000004u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000004u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00004044u);
    c->f[0] = c->f[1] * c->f[0];
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    c->r[2] = f2u(c->f[0]);
    c->r[3] = c->r[2] << 8;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[2] | c->r[3];
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000008u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00004044u);
    c->f[0] = c->f[1] * c->f[0];
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    c->r[2] = f2u(c->f[0]);
    c->r[3] = c->r[2] << 16;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[2] | c->r[3];
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x0000000cu);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00004044u);
    c->f[0] = c->f[1] * c->f[0];
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    c->r[2] = f2u(c->f[0]);
    c->r[3] = c->r[2] << 24;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[2] | c->r[3];
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_0888d9b8 */
}

/* func_08891388  0x08891388..0x08891468  224 bytes, source=fde */
void func_08891388(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08891388u);
    c->r[29] = c->r[29] + 0xfffffee0u;
    mem_w32(ram, c->r[29] + 0x00000114u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000110u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    c->r[2] = c->r[30] + 0x00000010u;
    c->r[4] = c->r[2] + 0u;
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000004u);
    { c->r[31] = 0x088913b4u; c->r[6] = 0x00010000u; func_0888c0e4(c, ram); }
    c->r[2] = c->r[30] + 0x00000010u;
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0u + 0x00000001u;
    { c->r[31] = 0x088913c8u; c->r[6] = 0u + 0x00000001u; func_0888cb84(c, ram); }
    c->r[2] = c->r[30] + 0x00000010u;
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000040e8u);
    c->r[1] = 0x08a40000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0x000040e8u);
    c->r[4] = c->r[2] + 0u;
    c->f[12] = c->f[0];
    { c->r[31] = 0x088913ecu; c->f[13] = c->f[1]; func_0888cc74(c, ram); }
    c->r[2] = c->r[30] + 0x00000010u;
    c->r[4] = c->r[2] + 0u;
    c->f[12] = u2f(0u);
    c->f[13] = u2f(0u);
    { c->r[31] = 0x08891404u; func_0888bdec(c, ram); }
    c->r[2] = c->r[30] + 0x00000010u;
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x08891414u; c->r[5] = 0u + 0u; func_0888b8d0(c, ram); }
    c->r[2] = c->r[30] + 0x00000010u;
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0u | 0xffdcu;
    { c->r[31] = 0x08891428u; c->r[6] = 0u + 0x00000064u; func_0888c084(c, ram); }
    c->r[2] = c->r[30] + 0x00000010u;
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0u + 0u;
    { c->r[31] = 0x0889143cu; c->r[6] = 0u + 0xfffffff4u; func_089debc4(c, ram); }
    c->r[2] = c->r[30] + 0x00000010u;
    { c->r[31] = 0x08891448u; c->r[4] = c->r[2] + 0u; func_0888c250(c, ram); }
    c->r[2] = c->r[30] + 0x00000010u;
    { c->r[31] = 0x08891454u; c->r[4] = c->r[2] + 0u; func_0888c134(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000114u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000110u);
    { c->r[29] = c->r[29] + 0x00000120u; return; }
    return; /* fell out of func_08891388 */
}

/* func_088976d4  0x088976d4..0x08897868  404 bytes, source=fde */
void func_088976d4(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x088976d4u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    c->r[2] = c->r[4] + 0u;
    mem_w16(ram, c->r[30] + 0x00000000u, c->r[2]);
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000700u);
    c->r[2] = 0u + 0x000002e8u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[4] = c->lo;
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
    { c->r[31] = 0x08897734u; c->r[5] = 0u + 0x00000003u; func_088999b4(c, ram); }
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000700u);
    c->r[2] = 0u + 0x000002e8u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[4] = c->lo;
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
    { c->r[31] = 0x0889777cu; c->r[5] = 0u + 0x00000001u; func_08899acc(c, ram); }
    c->r[2] = mem_r16(ram, c->r[30] + 0x00000000u);
    c->r[4] = 0x08a70000u;
    c->r[4] = c->r[4] + 0xffffb640u;
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x08897794u; c->r[6] = 0u + 0u; func_089e0bd8(c, ram); }
    c->r[4] = 0x08a70000u;
    c->r[4] = c->r[4] + 0xffffb640u;
    c->r[5] = 0u + 0u;
    { c->r[31] = 0x088977a8u; c->r[6] = 0u + 0u; func_089df7a0(c, ram); }
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000700u);
    c->r[2] = 0u + 0x000002e8u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[4] = c->lo;
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
    { c->r[31] = 0x088977f4u; c->r[5] = c->r[5] | 0x019eu; func_088998c8(c, ram); }
    { c->r[31] = 0x088977fcu; func_08883448(c, ram); }
    c->r[2] = c->r[2] >> 24;
    c->r[2] = c->r[2] & 0x000fu;
    c->r[3] = c->r[2] << 16;
    c->r[2] = 0x10000000u;
    c->r[5] = c->r[3] | c->r[2];
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000700u);
    c->r[2] = 0u + 0x000002e8u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[4] = c->lo;
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
    { c->r[31] = 0x08897854u; c->r[4] = c->r[2] + 0u; func_088998c8(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_088976d4 */
}

/* func_0889a228  0x0889a228..0x0889a26c  68 bytes, source=sweep */
void func_0889a228(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0889a228u);
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
    { c->r[31] = 0x0889a258u; c->r[5] = c->r[2] + 0u; func_088998c8(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_0889a228 */
}

/* func_0889e968  0x0889e968..0x0889e9a4  60 bytes, source=sweep */
void func_0889e968(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0889e968u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000004u);
    { c->r[31] = 0x0889e990u; c->r[6] = 0u + 0x00000001u; func_0889f3c0(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_0889e968 */
}

/* func_0889f97c  0x0889f97c..0x0889f9c0  68 bytes, source=sweep */
void func_0889f97c(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0889f97cu);
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
    { c->r[31] = 0x0889f9acu; c->r[5] = c->r[2] + 0u; func_0889eb70(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_0889f97c */
}

/* func_088a39b4  0x088a39b4..0x088a3ab4  256 bytes, source=sweep */
void func_088a39b4(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x088a39b4u);
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
    return; /* fell out of func_088a39b4 */
}

/* func_088a8708  0x088a8708..0x088ad160  19032 bytes, source=sweep */
void func_088a8708(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x088a8708u);
    c->r[29] = c->r[29] + 0xffffffd0u;
    mem_w32(ram, c->r[29] + 0x00000024u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000020u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = 0u | 0xffffu;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_088ac75c; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = 0u + 0x00000001u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_088ac75c; }
    c->r[2] = 0x08a90000u;
    c->r[2] = c->r[2] + 0x00001ce4u;
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
    c->r[2] = 0u + 0x0000001fu;
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]);
    c->r[2] = 0u + 0x00000005u;
    mem_w32(ram, c->r[30] + 0x0000001cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0u + 0x00001fffu;
    c->r[6] = 0u + 0x00001fffu;
    c->r[7] = 0u + 0u;
    c->f[12] = u2f(0u);
    c->f[13] = u2f(0u);
    c->f[14] = u2f(0u);
    { c->r[31] = 0x088a879cu; func_088ae24c(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = c->r[2] + 0x00000014u;
    mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = c->r[2] + 0xffffffffu;
    mem_w32(ram, c->r[30] + 0x0000001cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x0000467cu);
    c->r[1] = 0x08a40000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0x00004680u);
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0u + 0u;
    c->r[6] = 0u + 0u;
    c->r[7] = 0u + 0u;
    c->f[12] = c->f[0];
    c->f[13] = c->f[1];
    c->f[14] = u2f(0u);
    { c->r[31] = 0x088a87ecu; func_088ae24c(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = c->r[2] + 0x00000014u;
    mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = c->r[2] + 0xffffffffu;
    mem_w32(ram, c->r[30] + 0x0000001cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00004680u);
    c->r[1] = 0x08a40000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0x00004680u);
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0u + 0x00003fffu;
    c->r[6] = 0u + 0u;
    c->r[7] = 0u + 0u;
    c->f[12] = c->f[0];
    c->f[13] = c->f[1];
    c->f[14] = u2f(0u);
    { c->r[31] = 0x088a883cu; func_088ae24c(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = c->r[2] + 0x00000014u;
    mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = c->r[2] + 0xffffffffu;
    mem_w32(ram, c->r[30] + 0x0000001cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00004680u);
    c->r[1] = 0x08a40000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0x0000467cu);
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0u + 0x00003fffu;
    c->r[6] = 0u + 0x00003fffu;
    c->r[7] = 0u + 0u;
    c->f[12] = c->f[0];
    c->f[13] = c->f[1];
    c->f[14] = u2f(0u);
    { c->r[31] = 0x088a888cu; func_088ae24c(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = c->r[2] + 0x00000014u;
    mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = c->r[2] + 0xffffffffu;
    mem_w32(ram, c->r[30] + 0x0000001cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x0000467cu);
    c->r[1] = 0x08a40000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0x0000467cu);
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0u + 0u;
    c->r[6] = 0u + 0x00003fffu;
    c->r[7] = 0u + 0u;
    c->f[12] = c->f[0];
    c->f[13] = c->f[1];
    c->f[14] = u2f(0u);
    { c->r[31] = 0x088a88dcu; func_088ae24c(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = c->r[2] + 0x00000014u;
    mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = c->r[2] + 0xffffffffu;
    mem_w32(ram, c->r[30] + 0x0000001cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x0000467cu);
    c->r[1] = 0x08a40000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0x00004680u);
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0u + 0u;
    c->r[6] = 0u + 0u;
    c->r[7] = 0u + 0u;
    c->f[12] = c->f[0];
    c->f[13] = c->f[1];
    c->f[14] = u2f(0u);
    { c->r[31] = 0x088a892cu; func_088ae24c(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = c->r[2] + 0x00000014u;
    mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = c->r[2] + 0xffffffffu;
    mem_w32(ram, c->r[30] + 0x0000001cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x00000078u;
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = c->r[2] + 0xffffffffu;
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    mem_w32(ram, c->r[30] + 0x0000001cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]);
    c->r[2] = 0u + 0x00000005u;
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0u + 0x00005fffu;
    c->r[6] = 0u + 0x00001fffu;
    c->r[7] = 0u + 0u;
    c->f[12] = u2f(0u);
    c->f[13] = u2f(0u);
    c->f[14] = u2f(0u);
    { c->r[31] = 0x088a899cu; func_088ae24c(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = c->r[2] + 0x00000014u;
    mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = c->r[2] + 0xffffffffu;
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x0000467cu);
    c->r[1] = 0x08a40000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0x00004680u);
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0u + 0x00003fffu;
    c->r[6] = 0u + 0u;
    c->r[7] = 0u + 0u;
    c->f[12] = c->f[0];
    c->f[13] = c->f[1];
    c->f[14] = u2f(0u);
    { c->r[31] = 0x088a89ecu; func_088ae24c(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = c->r[2] + 0x00000014u;
    mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = c->r[2] + 0xffffffffu;
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00004680u);
    c->r[1] = 0x08a40000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0x00004680u);
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0u + 0x00007fffu;
    c->r[6] = 0u + 0u;
    c->r[7] = 0u + 0u;
    c->f[12] = c->f[0];
    c->f[13] = c->f[1];
    c->f[14] = u2f(0u);
    { c->r[31] = 0x088a8a3cu; func_088ae24c(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = c->r[2] + 0x00000014u;
    mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = c->r[2] + 0xffffffffu;
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00004680u);
    c->r[1] = 0x08a40000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0x0000467cu);
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0u + 0x00007fffu;
    c->r[6] = 0u + 0x00003fffu;
    c->r[7] = 0u + 0u;
    c->f[12] = c->f[0];
    c->f[13] = c->f[1];
    c->f[14] = u2f(0u);
    { c->r[31] = 0x088a8a8cu; func_088ae24c(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = c->r[2] + 0x00000014u;
    mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = c->r[2] + 0xffffffffu;
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x0000467cu);
    c->r[1] = 0x08a40000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0x0000467cu);
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0u + 0x00003fffu;
    c->r[6] = 0u + 0x00003fffu;
    c->r[7] = 0u + 0u;
    c->f[12] = c->f[0];
    c->f[13] = c->f[1];
    c->f[14] = u2f(0u);
    { c->r[31] = 0x088a8adcu; func_088ae24c(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = c->r[2] + 0x00000014u;
    mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = c->r[2] + 0xffffffffu;
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x0000467cu);
    c->r[1] = 0x08a40000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0x00004680u);
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0u + 0x00003fffu;
    c->r[6] = 0u + 0u;
    c->r[7] = 0u + 0u;
    c->f[12] = c->f[0];
    c->f[13] = c->f[1];
    c->f[14] = u2f(0u);
    { c->r[31] = 0x088a8b2cu; func_088ae24c(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = c->r[2] + 0x00000014u;
    mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = c->r[2] + 0xffffffffu;
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x00000078u;
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = c->r[2] + 0xffffffffu;
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    mem_w32(ram, c->r[30] + 0x0000001cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]);
    c->r[2] = 0u + 0x00000005u;
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0u + 0x00001fffu;
    c->r[6] = 0u + 0x00005fffu;
    c->r[7] = 0u + 0u;
    c->f[12] = u2f(0u);
    c->f[13] = u2f(0u);
    c->f[14] = u2f(0u);
    { c->r[31] = 0x088a8b9cu; func_088ae24c(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = c->r[2] + 0x00000014u;
    mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = c->r[2] + 0xffffffffu;
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x0000467cu);
    c->r[1] = 0x08a40000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0x00004680u);
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0u + 0u;
    c->r[6] = 0u + 0x00003fffu;
    c->r[7] = 0u + 0u;
    c->f[12] = c->f[0];
    c->f[13] = c->f[1];
    c->f[14] = u2f(0u);
    { c->r[31] = 0x088a8becu; func_088ae24c(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = c->r[2] + 0x00000014u;
    mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = c->r[2] + 0xffffffffu;
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00004680u);
    c->r[1] = 0x08a40000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0x00004680u);
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0u + 0x00003fffu;
    c->r[6] = 0u + 0x00003fffu;
    c->r[7] = 0u + 0u;
    c->f[12] = c->f[0];
    c->f[13] = c->f[1];
    c->f[14] = u2f(0u);
    { c->r[31] = 0x088a8c3cu; func_088ae24c(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = c->r[2] + 0x00000014u;
    mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = c->r[2] + 0xffffffffu;
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00004680u);
    c->r[1] = 0x08a40000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0x0000467cu);
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0u + 0x00003fffu;
    c->r[6] = 0u + 0x00007fffu;
    c->r[7] = 0u + 0u;
    c->f[12] = c->f[0];
    c->f[13] = c->f[1];
    c->f[14] = u2f(0u);
    { c->r[31] = 0x088a8c8cu; func_088ae24c(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = c->r[2] + 0x00000014u;
    mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = c->r[2] + 0xffffffffu;
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x0000467cu);
    c->r[1] = 0x08a40000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0x0000467cu);
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0u + 0u;
    c->r[6] = 0u + 0x00007fffu;
    c->r[7] = 0u + 0u;
    c->f[12] = c->f[0];
    c->f[13] = c->f[1];
    c->f[14] = u2f(0u);
    { c->r[31] = 0x088a8cdcu; func_088ae24c(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = c->r[2] + 0x00000014u;
    mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = c->r[2] + 0xffffffffu;
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x0000467cu);
    c->r[1] = 0x08a40000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0x00004680u);
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0u + 0u;
    c->r[6] = 0u + 0x00003fffu;
    c->r[7] = 0u + 0u;
    c->f[12] = c->f[0];
    c->f[13] = c->f[1];
    c->f[14] = u2f(0u);
    { c->r[31] = 0x088a8d2cu; func_088ae24c(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = c->r[2] + 0x00000014u;
    mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = c->r[2] + 0xffffffffu;
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x00000078u;
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = c->r[2] + 0xffffffffu;
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    mem_w32(ram, c->r[30] + 0x0000001cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]);
    c->r[2] = 0u + 0x00000005u;
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0u + 0x00005fffu;
    c->r[6] = 0u + 0x00005fffu;
    c->r[7] = 0u + 0u;
    c->f[12] = u2f(0u);
    c->f[13] = u2f(0u);
    c->f[14] = u2f(0u);
    { c->r[31] = 0x088a8d9cu; func_088ae24c(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = c->r[2] + 0x00000014u;
    mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = c->r[2] + 0xffffffffu;
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x0000467cu);
    c->r[1] = 0x08a40000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0x00004680u);
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0u + 0x00003fffu;
    c->r[6] = 0u + 0x00003fffu;
    c->r[7] = 0u + 0u;
    c->f[12] = c->f[0];
    c->f[13] = c->f[1];
    c->f[14] = u2f(0u);
    { c->r[31] = 0x088a8decu; func_088ae24c(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = c->r[2] + 0x00000014u;
    mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = c->r[2] + 0xffffffffu;
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00004680u);
    c->r[1] = 0x08a40000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0x00004680u);
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0u + 0x00007fffu;
    c->r[6] = 0u + 0x00003fffu;
    c->r[7] = 0u + 0u;
    c->f[12] = c->f[0];
    c->f[13] = c->f[1];
    c->f[14] = u2f(0u);
    { c->r[31] = 0x088a8e3cu; func_088ae24c(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = c->r[2] + 0x00000014u;
    mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = c->r[2] + 0xffffffffu;
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00004680u);
    c->r[1] = 0x08a40000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0x0000467cu);
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0u + 0x00007fffu;
    c->r[6] = 0u + 0x00007fffu;
    c->r[7] = 0u + 0u;
    c->f[12] = c->f[0];
    c->f[13] = c->f[1];
    c->f[14] = u2f(0u);
    { c->r[31] = 0x088a8e8cu; func_088ae24c(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = c->r[2] + 0x00000014u;
    mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = c->r[2] + 0xffffffffu;
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x0000467cu);
    c->r[1] = 0x08a40000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0x0000467cu);
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0u + 0x00003fffu;
    c->r[6] = 0u + 0x00007fffu;
    c->r[7] = 0u + 0u;
    c->f[12] = c->f[0];
    c->f[13] = c->f[1];
    c->f[14] = u2f(0u);
    { c->r[31] = 0x088a8edcu; func_088ae24c(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = c->r[2] + 0x00000014u;
    mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = c->r[2] + 0xffffffffu;
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x0000467cu);
    c->r[1] = 0x08a40000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0x00004680u);
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0u + 0x00003fffu;
    c->r[6] = 0u + 0x00003fffu;
    c->r[7] = 0u + 0u;
    c->f[12] = c->f[0];
    c->f[13] = c->f[1];
    c->f[14] = u2f(0u);
    { c->r[31] = 0x088a8f2cu; func_088ae24c(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = c->r[2] + 0x00000014u;
    mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = c->r[2] + 0xffffffffu;
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x00000078u;
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = c->r[2] + 0xffffffffu;
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    mem_w32(ram, c->r[30] + 0x0000001cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]);
    c->r[2] = 0u + 0x00000005u;
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0u + 0x00001fffu;
    c->r[6] = 0u + 0x00001fffu;
    c->r[7] = 0u + 0u;
    c->f[12] = u2f(0u);
    c->f[13] = u2f(0u);
    c->f[14] = u2f(0u);
    { c->r[31] = 0x088a8f9cu; func_088ae24c(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = c->r[2] + 0x00000014u;
    mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = c->r[2] + 0xffffffffu;
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x0000467cu);
    c->r[1] = 0x08a40000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0x00004680u);
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0u + 0u;
    c->r[6] = 0u + 0u;
    c->r[7] = 0u + 0u;
    c->f[12] = c->f[0];
    c->f[13] = c->f[1];
    c->f[14] = u2f(0u);
    { c->r[31] = 0x088a8fecu; func_088ae24c(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = c->r[2] + 0x00000014u;
    mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = c->r[2] + 0xffffffffu;
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00004680u);
    c->r[1] = 0x08a40000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0x00004680u);
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0u + 0x00003fffu;
    c->r[6] = 0u + 0u;
    c->r[7] = 0u + 0u;
    c->f[12] = c->f[0];
    c->f[13] = c->f[1];
    c->f[14] = u2f(0u);
    { c->r[31] = 0x088a903cu; func_088ae24c(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = c->r[2] + 0x00000014u;
    mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = c->r[2] + 0xffffffffu;
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00004680u);
    c->r[1] = 0x08a40000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0x0000467cu);
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0u + 0x00003fffu;
    c->r[6] = 0u + 0x00003fffu;
    c->r[7] = 0u + 0u;
    c->f[12] = c->f[0];
    c->f[13] = c->f[1];
    c->f[14] = u2f(0u);
    { c->r[31] = 0x088a908cu; func_088ae24c(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = c->r[2] + 0x00000014u;
    mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = c->r[2] + 0xffffffffu;
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x0000467cu);
    c->r[1] = 0x08a40000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0x0000467cu);
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0u + 0u;
    c->r[6] = 0u + 0x00003fffu;
    c->r[7] = 0u + 0u;
    c->f[12] = c->f[0];
    c->f[13] = c->f[1];
    c->f[14] = u2f(0u);
    { c->r[31] = 0x088a90dcu; func_088ae24c(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = c->r[2] + 0x00000014u;
    mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = c->r[2] + 0xffffffffu;
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x0000467cu);
    c->r[1] = 0x08a40000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0x00004680u);
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0u + 0u;
    c->r[6] = 0u + 0u;
    c->r[7] = 0u + 0u;
    c->f[12] = c->f[0];
    c->f[13] = c->f[1];
    c->f[14] = u2f(0u);
    { c->r[31] = 0x088a912cu; func_088ae24c(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = c->r[2] + 0x00000014u;
    mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = c->r[2] + 0xffffffffu;
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x00000078u;
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = c->r[2] + 0xffffffffu;
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    mem_w32(ram, c->r[30] + 0x0000001cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]);
    c->r[2] = 0u + 0x00000005u;
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0u + 0x00005fffu;
    c->r[6] = 0u + 0x00001fffu;
    c->r[7] = 0u + 0u;
    c->f[12] = u2f(0u);
    c->f[13] = u2f(0u);
    c->f[14] = u2f(0u);
    { c->r[31] = 0x088a919cu; func_088ae24c(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = c->r[2] + 0x00000014u;
    mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = c->r[2] + 0xffffffffu;
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x0000467cu);
    c->r[1] = 0x08a40000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0x00004680u);
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0u + 0x00003fffu;
    c->r[6] = 0u + 0u;
    c->r[7] = 0u + 0u;
    c->f[12] = c->f[0];
    c->f[13] = c->f[1];
    c->f[14] = u2f(0u);
    { c->r[31] = 0x088a91ecu; func_088ae24c(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = c->r[2] + 0x00000014u;
    mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = c->r[2] + 0xffffffffu;
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00004680u);
    c->r[1] = 0x08a40000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0x00004680u);
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0u + 0x00007fffu;
    c->r[6] = 0u + 0u;
    c->r[7] = 0u + 0u;
    c->f[12] = c->f[0];
    c->f[13] = c->f[1];
    c->f[14] = u2f(0u);
    { c->r[31] = 0x088a923cu; func_088ae24c(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = c->r[2] + 0x00000014u;
    mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = c->r[2] + 0xffffffffu;
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00004680u);
    c->r[1] = 0x08a40000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0x0000467cu);
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0u + 0x00007fffu;
    c->r[6] = 0u + 0x00003fffu;
    c->r[7] = 0u + 0u;
    c->f[12] = c->f[0];
    c->f[13] = c->f[1];
    c->f[14] = u2f(0u);
    { c->r[31] = 0x088a928cu; func_088ae24c(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = c->r[2] + 0x00000014u;
    mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = c->r[2] + 0xffffffffu;
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x0000467cu);
    c->r[1] = 0x08a40000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0x0000467cu);
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0u + 0x00003fffu;
    c->r[6] = 0u + 0x00003fffu;
    c->r[7] = 0u + 0u;
    c->f[12] = c->f[0];
    c->f[13] = c->f[1];
    c->f[14] = u2f(0u);
    { c->r[31] = 0x088a92dcu; func_088ae24c(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = c->r[2] + 0x00000014u;
    mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = c->r[2] + 0xffffffffu;
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x0000467cu);
    c->r[1] = 0x08a40000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0x00004680u);
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0u + 0x00003fffu;
    c->r[6] = 0u + 0u;
    c->r[7] = 0u + 0u;
    c->f[12] = c->f[0];
    c->f[13] = c->f[1];
    c->f[14] = u2f(0u);
    { c->r[31] = 0x088a932cu; func_088ae24c(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = c->r[2] + 0x00000014u;
    mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = c->r[2] + 0xffffffffu;
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x00000078u;
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = c->r[2] + 0xffffffffu;
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    mem_w32(ram, c->r[30] + 0x0000001cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]);
    c->r[2] = 0u + 0x00000005u;
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0u + 0x00001fffu;
    c->r[6] = 0u + 0x00005fffu;
    c->r[7] = 0u + 0u;
    c->f[12] = u2f(0u);
    c->f[13] = u2f(0u);
    c->f[14] = u2f(0u);
    { c->r[31] = 0x088a939cu; func_088ae24c(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = c->r[2] + 0x00000014u;
    mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = c->r[2] + 0xffffffffu;
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x0000467cu);
    c->r[1] = 0x08a40000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0x00004680u);
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0u + 0u;
    c->r[6] = 0u + 0x00003fffu;
    c->r[7] = 0u + 0u;
    c->f[12] = c->f[0];
    c->f[13] = c->f[1];
    c->f[14] = u2f(0u);
    { c->r[31] = 0x088a93ecu; func_088ae24c(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = c->r[2] + 0x00000014u;
    mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = c->r[2] + 0xffffffffu;
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00004680u);
    c->r[1] = 0x08a40000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0x00004680u);
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0u + 0x00003fffu;
    c->r[6] = 0u + 0x00003fffu;
    c->r[7] = 0u + 0u;
    c->f[12] = c->f[0];
    c->f[13] = c->f[1];
    c->f[14] = u2f(0u);
    { c->r[31] = 0x088a943cu; func_088ae24c(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = c->r[2] + 0x00000014u;
    mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = c->r[2] + 0xffffffffu;
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00004680u);
    c->r[1] = 0x08a40000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0x0000467cu);
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0u + 0x00003fffu;
    c->r[6] = 0u + 0x00007fffu;
    c->r[7] = 0u + 0u;
    c->f[12] = c->f[0];
    c->f[13] = c->f[1];
    c->f[14] = u2f(0u);
    { c->r[31] = 0x088a948cu; func_088ae24c(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = c->r[2] + 0x00000014u;
    mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = c->r[2] + 0xffffffffu;
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x0000467cu);
    c->r[1] = 0x08a40000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0x0000467cu);
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0u + 0u;
    c->r[6] = 0u + 0x00007fffu;
    c->r[7] = 0u + 0u;
    c->f[12] = c->f[0];
    c->f[13] = c->f[1];
    c->f[14] = u2f(0u);
    { c->r[31] = 0x088a94dcu; func_088ae24c(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = c->r[2] + 0x00000014u;
    mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = c->r[2] + 0xffffffffu;
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x0000467cu);
    c->r[1] = 0x08a40000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0x00004680u);
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0u + 0u;
    c->r[6] = 0u + 0x00003fffu;
    c->r[7] = 0u + 0u;
    c->f[12] = c->f[0];
    c->f[13] = c->f[1];
    c->f[14] = u2f(0u);
    { c->r[31] = 0x088a952cu; func_088ae24c(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = c->r[2] + 0x00000014u;
    mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = c->r[2] + 0xffffffffu;
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x00000078u;
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = c->r[2] + 0xffffffffu;
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    mem_w32(ram, c->r[30] + 0x0000001cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]);
    c->r[2] = 0u + 0x00000005u;
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0u + 0x00005fffu;
    c->r[6] = 0u + 0x00005fffu;
    c->r[7] = 0u + 0u;
    c->f[12] = u2f(0u);
    c->f[13] = u2f(0u);
    c->f[14] = u2f(0u);
    { c->r[31] = 0x088a959cu; func_088ae24c(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = c->r[2] + 0x00000014u;
    mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = c->r[2] + 0xffffffffu;
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x0000467cu);
    c->r[1] = 0x08a40000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0x00004680u);
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0u + 0x00003fffu;
    c->r[6] = 0u + 0x00003fffu;
    c->r[7] = 0u + 0u;
    c->f[12] = c->f[0];
    c->f[13] = c->f[1];
    c->f[14] = u2f(0u);
    { c->r[31] = 0x088a95ecu; func_088ae24c(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = c->r[2] + 0x00000014u;
    mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = c->r[2] + 0xffffffffu;
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00004680u);
    c->r[1] = 0x08a40000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0x00004680u);
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0u + 0x00007fffu;
    c->r[6] = 0u + 0x00003fffu;
    c->r[7] = 0u + 0u;
    c->f[12] = c->f[0];
    c->f[13] = c->f[1];
    c->f[14] = u2f(0u);
    { c->r[31] = 0x088a963cu; func_088ae24c(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = c->r[2] + 0x00000014u;
    mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = c->r[2] + 0xffffffffu;
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00004680u);
    c->r[1] = 0x08a40000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0x0000467cu);
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0u + 0x00007fffu;
    c->r[6] = 0u + 0x00007fffu;
    c->r[7] = 0u + 0u;
    c->f[12] = c->f[0];
    c->f[13] = c->f[1];
    c->f[14] = u2f(0u);
    { c->r[31] = 0x088a968cu; func_088ae24c(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = c->r[2] + 0x00000014u;
    mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = c->r[2] + 0xffffffffu;
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x0000467cu);
    c->r[1] = 0x08a40000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0x0000467cu);
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0u + 0x00003fffu;
    c->r[6] = 0u + 0x00007fffu;
    c->r[7] = 0u + 0u;
    c->f[12] = c->f[0];
    c->f[13] = c->f[1];
    c->f[14] = u2f(0u);
    { c->r[31] = 0x088a96dcu; func_088ae24c(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = c->r[2] + 0x00000014u;
    mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = c->r[2] + 0xffffffffu;
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x0000467cu);
    c->r[1] = 0x08a40000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0x00004680u);
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0u + 0x00003fffu;
    c->r[6] = 0u + 0x00003fffu;
    c->r[7] = 0u + 0u;
    c->f[12] = c->f[0];
    c->f[13] = c->f[1];
    c->f[14] = u2f(0u);
    { c->r[31] = 0x088a972cu; func_088ae24c(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = c->r[2] + 0x00000014u;
    mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = c->r[2] + 0xffffffffu;
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x00000078u;
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = c->r[2] + 0xffffffffu;
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    mem_w32(ram, c->r[30] + 0x0000001cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]);
    c->r[2] = 0u + 0x00000005u;
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0u + 0x00001fffu;
    c->r[6] = 0u + 0x00001fffu;
    c->r[7] = 0u + 0u;
    c->f[12] = u2f(0u);
    c->f[13] = u2f(0u);
    c->f[14] = u2f(0u);
    { c->r[31] = 0x088a979cu; func_088ae24c(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = c->r[2] + 0x00000014u;
    mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = c->r[2] + 0xffffffffu;
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x0000467cu);
    c->r[1] = 0x08a40000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0x00004680u);
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0u + 0u;
    c->r[6] = 0u + 0u;
    c->r[7] = 0u + 0u;
    c->f[12] = c->f[0];
    c->f[13] = c->f[1];
    c->f[14] = u2f(0u);
    { c->r[31] = 0x088a97ecu; func_088ae24c(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = c->r[2] + 0x00000014u;
    mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = c->r[2] + 0xffffffffu;
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00004680u);
    c->r[1] = 0x08a40000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0x00004680u);
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0u + 0x00003fffu;
    c->r[6] = 0u + 0u;
    c->r[7] = 0u + 0u;
    c->f[12] = c->f[0];
    c->f[13] = c->f[1];
    c->f[14] = u2f(0u);
    { c->r[31] = 0x088a983cu; func_088ae24c(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = c->r[2] + 0x00000014u;
    mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = c->r[2] + 0xffffffffu;
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00004680u);
    c->r[1] = 0x08a40000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0x0000467cu);
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0u + 0x00003fffu;
    c->r[6] = 0u + 0x00003fffu;
    c->r[7] = 0u + 0u;
    c->f[12] = c->f[0];
    c->f[13] = c->f[1];
    c->f[14] = u2f(0u);
    { c->r[31] = 0x088a988cu; func_088ae24c(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = c->r[2] + 0x00000014u;
    mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = c->r[2] + 0xffffffffu;
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x0000467cu);
    c->r[1] = 0x08a40000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0x0000467cu);
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0u + 0u;
    c->r[6] = 0u + 0x00003fffu;
    c->r[7] = 0u + 0u;
    c->f[12] = c->f[0];
    c->f[13] = c->f[1];
    c->f[14] = u2f(0u);
    { c->r[31] = 0x088a98dcu; func_088ae24c(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = c->r[2] + 0x00000014u;
    mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = c->r[2] + 0xffffffffu;
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x0000467cu);
    c->r[1] = 0x08a40000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0x00004680u);
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0u + 0u;
    c->r[6] = 0u + 0u;
    c->r[7] = 0u + 0u;
    c->f[12] = c->f[0];
    c->f[13] = c->f[1];
    c->f[14] = u2f(0u);
    { c->r[31] = 0x088a992cu; func_088ae24c(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = c->r[2] + 0x00000014u;
    mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = c->r[2] + 0xffffffffu;
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x00000078u;
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = c->r[2] + 0xffffffffu;
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    mem_w32(ram, c->r[30] + 0x0000001cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]);
    c->r[2] = 0u + 0x00000005u;
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0u + 0x00005fffu;
    c->r[6] = 0u + 0x00001fffu;
    c->r[7] = 0u + 0u;
    c->f[12] = u2f(0u);
    c->f[13] = u2f(0u);
    c->f[14] = u2f(0u);
    { c->r[31] = 0x088a999cu; func_088ae24c(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = c->r[2] + 0x00000014u;
    mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = c->r[2] + 0xffffffffu;
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x0000467cu);
    c->r[1] = 0x08a40000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0x00004680u);
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0u + 0x00003fffu;
    c->r[6] = 0u + 0u;
    c->r[7] = 0u + 0u;
    c->f[12] = c->f[0];
    c->f[13] = c->f[1];
    c->f[14] = u2f(0u);
    { c->r[31] = 0x088a99ecu; func_088ae24c(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = c->r[2] + 0x00000014u;
    mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = c->r[2] + 0xffffffffu;
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00004680u);
    c->r[1] = 0x08a40000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0x00004680u);
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0u + 0x00007fffu;
    c->r[6] = 0u + 0u;
    c->r[7] = 0u + 0u;
    c->f[12] = c->f[0];
    c->f[13] = c->f[1];
    c->f[14] = u2f(0u);
    { c->r[31] = 0x088a9a3cu; func_088ae24c(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = c->r[2] + 0x00000014u;
    mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = c->r[2] + 0xffffffffu;
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00004680u);
    c->r[1] = 0x08a40000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0x0000467cu);
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0u + 0x00007fffu;
    c->r[6] = 0u + 0x00003fffu;
    c->r[7] = 0u + 0u;
    c->f[12] = c->f[0];
    c->f[13] = c->f[1];
    c->f[14] = u2f(0u);
    { c->r[31] = 0x088a9a8cu; func_088ae24c(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = c->r[2] + 0x00000014u;
    mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = c->r[2] + 0xffffffffu;
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x0000467cu);
    c->r[1] = 0x08a40000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0x0000467cu);
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0u + 0x00003fffu;
    c->r[6] = 0u + 0x00003fffu;
    c->r[7] = 0u + 0u;
    c->f[12] = c->f[0];
    c->f[13] = c->f[1];
    c->f[14] = u2f(0u);
    { c->r[31] = 0x088a9adcu; func_088ae24c(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = c->r[2] + 0x00000014u;
    mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = c->r[2] + 0xffffffffu;
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x0000467cu);
    c->r[1] = 0x08a40000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0x00004680u);
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0u + 0x00003fffu;
    c->r[6] = 0u + 0u;
    c->r[7] = 0u + 0u;
    c->f[12] = c->f[0];
    c->f[13] = c->f[1];
    c->f[14] = u2f(0u);
    { c->r[31] = 0x088a9b2cu; func_088ae24c(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = c->r[2] + 0x00000014u;
    mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = c->r[2] + 0xffffffffu;
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x00000078u;
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = c->r[2] + 0xffffffffu;
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    mem_w32(ram, c->r[30] + 0x0000001cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]);
    c->r[2] = 0u + 0x00000005u;
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0u + 0x00001fffu;
    c->r[6] = 0u + 0x00005fffu;
    c->r[7] = 0u + 0u;
    c->f[12] = u2f(0u);
    c->f[13] = u2f(0u);
    c->f[14] = u2f(0u);
    { c->r[31] = 0x088a9b9cu; func_088ae24c(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = c->r[2] + 0x00000014u;
    mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = c->r[2] + 0xffffffffu;
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x0000467cu);
    c->r[1] = 0x08a40000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0x00004680u);
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0u + 0u;
    c->r[6] = 0u + 0x00003fffu;
    c->r[7] = 0u + 0u;
    c->f[12] = c->f[0];
    c->f[13] = c->f[1];
    c->f[14] = u2f(0u);
    { c->r[31] = 0x088a9becu; func_088ae24c(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = c->r[2] + 0x00000014u;
    mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = c->r[2] + 0xffffffffu;
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00004680u);
    c->r[1] = 0x08a40000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0x00004680u);
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0u + 0x00003fffu;
    c->r[6] = 0u + 0x00003fffu;
    c->r[7] = 0u + 0u;
    c->f[12] = c->f[0];
    c->f[13] = c->f[1];
    c->f[14] = u2f(0u);
    { c->r[31] = 0x088a9c3cu; func_088ae24c(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = c->r[2] + 0x00000014u;
    mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = c->r[2] + 0xffffffffu;
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00004680u);
    c->r[1] = 0x08a40000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0x0000467cu);
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0u + 0x00003fffu;
    c->r[6] = 0u + 0x00007fffu;
    c->r[7] = 0u + 0u;
    c->f[12] = c->f[0];
    c->f[13] = c->f[1];
    c->f[14] = u2f(0u);
    { c->r[31] = 0x088a9c8cu; func_088ae24c(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = c->r[2] + 0x00000014u;
    mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = c->r[2] + 0xffffffffu;
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x0000467cu);
    c->r[1] = 0x08a40000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0x0000467cu);
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0u + 0u;
    c->r[6] = 0u + 0x00007fffu;
    c->r[7] = 0u + 0u;
    c->f[12] = c->f[0];
    c->f[13] = c->f[1];
    c->f[14] = u2f(0u);
    { c->r[31] = 0x088a9cdcu; func_088ae24c(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = c->r[2] + 0x00000014u;
    mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = c->r[2] + 0xffffffffu;
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x0000467cu);
    c->r[1] = 0x08a40000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0x00004680u);
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0u + 0u;
    c->r[6] = 0u + 0x00003fffu;
    c->r[7] = 0u + 0u;
    c->f[12] = c->f[0];
    c->f[13] = c->f[1];
    c->f[14] = u2f(0u);
    { c->r[31] = 0x088a9d2cu; func_088ae24c(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = c->r[2] + 0x00000014u;
    mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = c->r[2] + 0xffffffffu;
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x00000078u;
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = c->r[2] + 0xffffffffu;
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    mem_w32(ram, c->r[30] + 0x0000001cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]);
    c->r[2] = 0u + 0x00000005u;
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0u + 0x00005fffu;
    c->r[6] = 0u + 0x00005fffu;
    c->r[7] = 0u + 0u;
    c->f[12] = u2f(0u);
    c->f[13] = u2f(0u);
    c->f[14] = u2f(0u);
    { c->r[31] = 0x088a9d9cu; func_088ae24c(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = c->r[2] + 0x00000014u;
    mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = c->r[2] + 0xffffffffu;
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x0000467cu);
    c->r[1] = 0x08a40000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0x00004680u);
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0u + 0x00003fffu;
    c->r[6] = 0u + 0x00003fffu;
    c->r[7] = 0u + 0u;
    c->f[12] = c->f[0];
    c->f[13] = c->f[1];
    c->f[14] = u2f(0u);
    { c->r[31] = 0x088a9decu; func_088ae24c(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = c->r[2] + 0x00000014u;
    mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = c->r[2] + 0xffffffffu;
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00004680u);
    c->r[1] = 0x08a40000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0x00004680u);
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0u + 0x00007fffu;
    c->r[6] = 0u + 0x00003fffu;
    c->r[7] = 0u + 0u;
    c->f[12] = c->f[0];
    c->f[13] = c->f[1];
    c->f[14] = u2f(0u);
    { c->r[31] = 0x088a9e3cu; func_088ae24c(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = c->r[2] + 0x00000014u;
    mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = c->r[2] + 0xffffffffu;
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00004680u);
    c->r[1] = 0x08a40000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0x0000467cu);
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0u + 0x00007fffu;
    c->r[6] = 0u + 0x00007fffu;
    c->r[7] = 0u + 0u;
    c->f[12] = c->f[0];
    c->f[13] = c->f[1];
    c->f[14] = u2f(0u);
    { c->r[31] = 0x088a9e8cu; func_088ae24c(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = c->r[2] + 0x00000014u;
    mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = c->r[2] + 0xffffffffu;
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x0000467cu);
    c->r[1] = 0x08a40000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0x0000467cu);
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0u + 0x00003fffu;
    c->r[6] = 0u + 0x00007fffu;
    c->r[7] = 0u + 0u;
    c->f[12] = c->f[0];
    c->f[13] = c->f[1];
    c->f[14] = u2f(0u);
    { c->r[31] = 0x088a9edcu; func_088ae24c(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = c->r[2] + 0x00000014u;
    mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = c->r[2] + 0xffffffffu;
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x0000467cu);
    c->r[1] = 0x08a40000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0x00004680u);
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0u + 0x00003fffu;
    c->r[6] = 0u + 0x00003fffu;
    c->r[7] = 0u + 0u;
    c->f[12] = c->f[0];
    c->f[13] = c->f[1];
    c->f[14] = u2f(0u);
    { c->r[31] = 0x088a9f2cu; func_088ae24c(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = c->r[2] + 0x00000014u;
    mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = c->r[2] + 0xffffffffu;
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x00000078u;
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = c->r[2] + 0xffffffffu;
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    mem_w32(ram, c->r[30] + 0x0000001cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]);
    c->r[2] = 0u + 0x00000005u;
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0u + 0x00001fffu;
    c->r[6] = 0u + 0x00001fffu;
    c->r[7] = 0u + 0u;
    c->f[12] = u2f(0u);
    c->f[13] = u2f(0u);
    c->f[14] = u2f(0u);
    { c->r[31] = 0x088a9f9cu; func_088ae24c(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = c->r[2] + 0x00000014u;
    mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = c->r[2] + 0xffffffffu;
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x0000467cu);
    c->r[1] = 0x08a40000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0x00004680u);
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0u + 0u;
    c->r[6] = 0u + 0u;
    c->r[7] = 0u + 0u;
    c->f[12] = c->f[0];
    c->f[13] = c->f[1];
    c->f[14] = u2f(0u);
    { c->r[31] = 0x088a9fecu; func_088ae24c(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = c->r[2] + 0x00000014u;
    mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = c->r[2] + 0xffffffffu;
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00004680u);
    c->r[1] = 0x08a40000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0x00004680u);
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0u + 0x00003fffu;
    c->r[6] = 0u + 0u;
    c->r[7] = 0u + 0u;
    c->f[12] = c->f[0];
    c->f[13] = c->f[1];
    c->f[14] = u2f(0u);
    { c->r[31] = 0x088aa03cu; func_088ae24c(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = c->r[2] + 0x00000014u;
    mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = c->r[2] + 0xffffffffu;
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00004680u);
    c->r[1] = 0x08a40000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0x0000467cu);
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0u + 0x00003fffu;
    c->r[6] = 0u + 0x00003fffu;
    c->r[7] = 0u + 0u;
    c->f[12] = c->f[0];
    c->f[13] = c->f[1];
    c->f[14] = u2f(0u);
    { c->r[31] = 0x088aa08cu; func_088ae24c(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = c->r[2] + 0x00000014u;
    mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = c->r[2] + 0xffffffffu;
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x0000467cu);
    c->r[1] = 0x08a40000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0x0000467cu);
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0u + 0u;
    c->r[6] = 0u + 0x00003fffu;
    c->r[7] = 0u + 0u;
    c->f[12] = c->f[0];
    c->f[13] = c->f[1];
    c->f[14] = u2f(0u);
    { c->r[31] = 0x088aa0dcu; func_088ae24c(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = c->r[2] + 0x00000014u;
    mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = c->r[2] + 0xffffffffu;
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x0000467cu);
    c->r[1] = 0x08a40000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0x00004680u);
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0u + 0u;
    c->r[6] = 0u + 0u;
    c->r[7] = 0u + 0u;
    c->f[12] = c->f[0];
    c->f[13] = c->f[1];
    c->f[14] = u2f(0u);
    { c->r[31] = 0x088aa12cu; func_088ae24c(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = c->r[2] + 0x00000014u;
    mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = c->r[2] + 0xffffffffu;
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x00000078u;
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = c->r[2] + 0xffffffffu;
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    mem_w32(ram, c->r[30] + 0x0000001cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]);
    c->r[2] = 0u + 0x00000005u;
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0u + 0x00005fffu;
    c->r[6] = 0u + 0x00001fffu;
    c->r[7] = 0u + 0u;
    c->f[12] = u2f(0u);
    c->f[13] = u2f(0u);
    c->f[14] = u2f(0u);
    { c->r[31] = 0x088aa19cu; func_088ae24c(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = c->r[2] + 0x00000014u;
    mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = c->r[2] + 0xffffffffu;
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x0000467cu);
    c->r[1] = 0x08a40000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0x00004680u);
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0u + 0x00003fffu;
    c->r[6] = 0u + 0u;
    c->r[7] = 0u + 0u;
    c->f[12] = c->f[0];
    c->f[13] = c->f[1];
    c->f[14] = u2f(0u);
    { c->r[31] = 0x088aa1ecu; func_088ae24c(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = c->r[2] + 0x00000014u;
    mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = c->r[2] + 0xffffffffu;
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00004680u);
    c->r[1] = 0x08a40000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0x00004680u);
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0u + 0x00007fffu;
    c->r[6] = 0u + 0u;
    c->r[7] = 0u + 0u;
    c->f[12] = c->f[0];
    c->f[13] = c->f[1];
    c->f[14] = u2f(0u);
    { c->r[31] = 0x088aa23cu; func_088ae24c(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = c->r[2] + 0x00000014u;
    mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = c->r[2] + 0xffffffffu;
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00004680u);
    c->r[1] = 0x08a40000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0x0000467cu);
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0u + 0x00007fffu;
    c->r[6] = 0u + 0x00003fffu;
    c->r[7] = 0u + 0u;
    c->f[12] = c->f[0];
    c->f[13] = c->f[1];
    c->f[14] = u2f(0u);
    { c->r[31] = 0x088aa28cu; func_088ae24c(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = c->r[2] + 0x00000014u;
    mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = c->r[2] + 0xffffffffu;
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x0000467cu);
    c->r[1] = 0x08a40000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0x0000467cu);
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0u + 0x00003fffu;
    c->r[6] = 0u + 0x00003fffu;
    c->r[7] = 0u + 0u;
    c->f[12] = c->f[0];
    c->f[13] = c->f[1];
    c->f[14] = u2f(0u);
    { c->r[31] = 0x088aa2dcu; func_088ae24c(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = c->r[2] + 0x00000014u;
    mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = c->r[2] + 0xffffffffu;
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x0000467cu);
    c->r[1] = 0x08a40000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0x00004680u);
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0u + 0x00003fffu;
    c->r[6] = 0u + 0u;
    c->r[7] = 0u + 0u;
    c->f[12] = c->f[0];
    c->f[13] = c->f[1];
    c->f[14] = u2f(0u);
    { c->r[31] = 0x088aa32cu; func_088ae24c(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = c->r[2] + 0x00000014u;
    mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = c->r[2] + 0xffffffffu;
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x00000078u;
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = c->r[2] + 0xffffffffu;
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    mem_w32(ram, c->r[30] + 0x0000001cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]);
    c->r[2] = 0u + 0x00000005u;
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0u + 0x00001fffu;
    c->r[6] = 0u + 0x00005fffu;
    c->r[7] = 0u + 0u;
    c->f[12] = u2f(0u);
    c->f[13] = u2f(0u);
    c->f[14] = u2f(0u);
    { c->r[31] = 0x088aa39cu; func_088ae24c(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = c->r[2] + 0x00000014u;
    mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = c->r[2] + 0xffffffffu;
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x0000467cu);
    c->r[1] = 0x08a40000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0x00004680u);
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0u + 0u;
    c->r[6] = 0u + 0x00003fffu;
    c->r[7] = 0u + 0u;
    c->f[12] = c->f[0];
    c->f[13] = c->f[1];
    c->f[14] = u2f(0u);
    { c->r[31] = 0x088aa3ecu; func_088ae24c(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = c->r[2] + 0x00000014u;
    mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = c->r[2] + 0xffffffffu;
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00004680u);
    c->r[1] = 0x08a40000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0x00004680u);
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0u + 0x00003fffu;
    c->r[6] = 0u + 0x00003fffu;
    c->r[7] = 0u + 0u;
    c->f[12] = c->f[0];
    c->f[13] = c->f[1];
    c->f[14] = u2f(0u);
    { c->r[31] = 0x088aa43cu; func_088ae24c(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = c->r[2] + 0x00000014u;
    mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = c->r[2] + 0xffffffffu;
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00004680u);
    c->r[1] = 0x08a40000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0x0000467cu);
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0u + 0x00003fffu;
    c->r[6] = 0u + 0x00007fffu;
    c->r[7] = 0u + 0u;
    c->f[12] = c->f[0];
    c->f[13] = c->f[1];
    c->f[14] = u2f(0u);
    { c->r[31] = 0x088aa48cu; func_088ae24c(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = c->r[2] + 0x00000014u;
    mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = c->r[2] + 0xffffffffu;
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x0000467cu);
    c->r[1] = 0x08a40000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0x0000467cu);
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0u + 0u;
    c->r[6] = 0u + 0x00007fffu;
    c->r[7] = 0u + 0u;
    c->f[12] = c->f[0];
    c->f[13] = c->f[1];
    c->f[14] = u2f(0u);
    { c->r[31] = 0x088aa4dcu; func_088ae24c(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = c->r[2] + 0x00000014u;
    mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = c->r[2] + 0xffffffffu;
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x0000467cu);
    c->r[1] = 0x08a40000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0x00004680u);
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0u + 0u;
    c->r[6] = 0u + 0x00003fffu;
    c->r[7] = 0u + 0u;
    c->f[12] = c->f[0];
    c->f[13] = c->f[1];
    c->f[14] = u2f(0u);
    { c->r[31] = 0x088aa52cu; func_088ae24c(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = c->r[2] + 0x00000014u;
    mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = c->r[2] + 0xffffffffu;
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x00000078u;
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = c->r[2] + 0xffffffffu;
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    mem_w32(ram, c->r[30] + 0x0000001cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]);
    c->r[2] = 0u + 0x00000005u;
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0u + 0x00005fffu;
    c->r[6] = 0u + 0x00005fffu;
    c->r[7] = 0u + 0u;
    c->f[12] = u2f(0u);
    c->f[13] = u2f(0u);
    c->f[14] = u2f(0u);
    { c->r[31] = 0x088aa59cu; func_088ae24c(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = c->r[2] + 0x00000014u;
    mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = c->r[2] + 0xffffffffu;
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x0000467cu);
    c->r[1] = 0x08a40000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0x00004680u);
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0u + 0x00003fffu;
    c->r[6] = 0u + 0x00003fffu;
    c->r[7] = 0u + 0u;
    c->f[12] = c->f[0];
    c->f[13] = c->f[1];
    c->f[14] = u2f(0u);
    { c->r[31] = 0x088aa5ecu; func_088ae24c(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = c->r[2] + 0x00000014u;
    mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = c->r[2] + 0xffffffffu;
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00004680u);
    c->r[1] = 0x08a40000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0x00004680u);
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0u + 0x00007fffu;
    c->r[6] = 0u + 0x00003fffu;
    c->r[7] = 0u + 0u;
    c->f[12] = c->f[0];
    c->f[13] = c->f[1];
    c->f[14] = u2f(0u);
    { c->r[31] = 0x088aa63cu; func_088ae24c(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = c->r[2] + 0x00000014u;
    mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = c->r[2] + 0xffffffffu;
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00004680u);
    c->r[1] = 0x08a40000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0x0000467cu);
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0u + 0x00007fffu;
    c->r[6] = 0u + 0x00007fffu;
    c->r[7] = 0u + 0u;
    c->f[12] = c->f[0];
    c->f[13] = c->f[1];
    c->f[14] = u2f(0u);
    { c->r[31] = 0x088aa68cu; func_088ae24c(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = c->r[2] + 0x00000014u;
    mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = c->r[2] + 0xffffffffu;
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x0000467cu);
    c->r[1] = 0x08a40000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0x0000467cu);
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0u + 0x00003fffu;
    c->r[6] = 0u + 0x00007fffu;
    c->r[7] = 0u + 0u;
    c->f[12] = c->f[0];
    c->f[13] = c->f[1];
    c->f[14] = u2f(0u);
    { c->r[31] = 0x088aa6dcu; func_088ae24c(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = c->r[2] + 0x00000014u;
    mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = c->r[2] + 0xffffffffu;
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x0000467cu);
    c->r[1] = 0x08a40000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0x00004680u);
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0u + 0x00003fffu;
    c->r[6] = 0u + 0x00003fffu;
    c->r[7] = 0u + 0u;
    c->f[12] = c->f[0];
    c->f[13] = c->f[1];
    c->f[14] = u2f(0u);
    { c->r[31] = 0x088aa72cu; func_088ae24c(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = c->r[2] + 0x00000014u;
    mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = c->r[2] + 0xffffffffu;
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x00000078u;
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = c->r[2] + 0xffffffffu;
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    mem_w32(ram, c->r[30] + 0x0000001cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]);
    c->r[2] = 0u + 0x00000005u;
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0u + 0x00001fffu;
    c->r[6] = 0u + 0x00001fffu;
    c->r[7] = 0u + 0u;
    c->f[12] = u2f(0u);
    c->f[13] = u2f(0u);
    c->f[14] = u2f(0u);
    { c->r[31] = 0x088aa79cu; func_088ae24c(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = c->r[2] + 0x00000014u;
    mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = c->r[2] + 0xffffffffu;
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x0000467cu);
    c->r[1] = 0x08a40000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0x00004680u);
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0u + 0u;
    c->r[6] = 0u + 0u;
    c->r[7] = 0u + 0u;
    c->f[12] = c->f[0];
    c->f[13] = c->f[1];
    c->f[14] = u2f(0u);
    { c->r[31] = 0x088aa7ecu; func_088ae24c(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = c->r[2] + 0x00000014u;
    mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = c->r[2] + 0xffffffffu;
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00004680u);
    c->r[1] = 0x08a40000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0x00004680u);
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0u + 0x00003fffu;
    c->r[6] = 0u + 0u;
    c->r[7] = 0u + 0u;
    c->f[12] = c->f[0];
    c->f[13] = c->f[1];
    c->f[14] = u2f(0u);
    { c->r[31] = 0x088aa83cu; func_088ae24c(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = c->r[2] + 0x00000014u;
    mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = c->r[2] + 0xffffffffu;
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00004680u);
    c->r[1] = 0x08a40000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0x0000467cu);
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0u + 0x00003fffu;
    c->r[6] = 0u + 0x00003fffu;
    c->r[7] = 0u + 0u;
    c->f[12] = c->f[0];
    c->f[13] = c->f[1];
    c->f[14] = u2f(0u);
    { c->r[31] = 0x088aa88cu; func_088ae24c(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = c->r[2] + 0x00000014u;
    mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = c->r[2] + 0xffffffffu;
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x0000467cu);
    c->r[1] = 0x08a40000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0x0000467cu);
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0u + 0u;
    c->r[6] = 0u + 0x00003fffu;
    c->r[7] = 0u + 0u;
    c->f[12] = c->f[0];
    c->f[13] = c->f[1];
    c->f[14] = u2f(0u);
    { c->r[31] = 0x088aa8dcu; func_088ae24c(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = c->r[2] + 0x00000014u;
    mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = c->r[2] + 0xffffffffu;
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x0000467cu);
    c->r[1] = 0x08a40000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0x00004680u);
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0u + 0u;
    c->r[6] = 0u + 0u;
    c->r[7] = 0u + 0u;
    c->f[12] = c->f[0];
    c->f[13] = c->f[1];
    c->f[14] = u2f(0u);
    { c->r[31] = 0x088aa92cu; func_088ae24c(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = c->r[2] + 0x00000014u;
    mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = c->r[2] + 0xffffffffu;
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x00000078u;
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = c->r[2] + 0xffffffffu;
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    mem_w32(ram, c->r[30] + 0x0000001cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]);
    c->r[2] = 0u + 0x00000005u;
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0u + 0x00005fffu;
    c->r[6] = 0u + 0x00001fffu;
    c->r[7] = 0u + 0u;
    c->f[12] = u2f(0u);
    c->f[13] = u2f(0u);
    c->f[14] = u2f(0u);
    { c->r[31] = 0x088aa99cu; func_088ae24c(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = c->r[2] + 0x00000014u;
    mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = c->r[2] + 0xffffffffu;
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x0000467cu);
    c->r[1] = 0x08a40000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0x00004680u);
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0u + 0x00003fffu;
    c->r[6] = 0u + 0u;
    c->r[7] = 0u + 0u;
    c->f[12] = c->f[0];
    c->f[13] = c->f[1];
    c->f[14] = u2f(0u);
    { c->r[31] = 0x088aa9ecu; func_088ae24c(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = c->r[2] + 0x00000014u;
    mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = c->r[2] + 0xffffffffu;
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00004680u);
    c->r[1] = 0x08a40000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0x00004680u);
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0u + 0x00007fffu;
    c->r[6] = 0u + 0u;
    c->r[7] = 0u + 0u;
    c->f[12] = c->f[0];
    c->f[13] = c->f[1];
    c->f[14] = u2f(0u);
    { c->r[31] = 0x088aaa3cu; func_088ae24c(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = c->r[2] + 0x00000014u;
    mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = c->r[2] + 0xffffffffu;
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00004680u);
    c->r[1] = 0x08a40000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0x0000467cu);
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0u + 0x00007fffu;
    c->r[6] = 0u + 0x00003fffu;
    c->r[7] = 0u + 0u;
    c->f[12] = c->f[0];
    c->f[13] = c->f[1];
    c->f[14] = u2f(0u);
    { c->r[31] = 0x088aaa8cu; func_088ae24c(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = c->r[2] + 0x00000014u;
    mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = c->r[2] + 0xffffffffu;
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x0000467cu);
    c->r[1] = 0x08a40000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0x0000467cu);
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0u + 0x00003fffu;
    c->r[6] = 0u + 0x00003fffu;
    c->r[7] = 0u + 0u;
    c->f[12] = c->f[0];
    c->f[13] = c->f[1];
    c->f[14] = u2f(0u);
    { c->r[31] = 0x088aaadcu; func_088ae24c(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = c->r[2] + 0x00000014u;
    mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = c->r[2] + 0xffffffffu;
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x0000467cu);
    c->r[1] = 0x08a40000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0x00004680u);
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0u + 0x00003fffu;
    c->r[6] = 0u + 0u;
    c->r[7] = 0u + 0u;
    c->f[12] = c->f[0];
    c->f[13] = c->f[1];
    c->f[14] = u2f(0u);
    { c->r[31] = 0x088aab2cu; func_088ae24c(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = c->r[2] + 0x00000014u;
    mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = c->r[2] + 0xffffffffu;
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x00000078u;
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = c->r[2] + 0xffffffffu;
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    mem_w32(ram, c->r[30] + 0x0000001cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]);
    c->r[2] = 0u + 0x00000005u;
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0u + 0x00001fffu;
    c->r[6] = 0u + 0x00005fffu;
    c->r[7] = 0u + 0u;
    c->f[12] = u2f(0u);
    c->f[13] = u2f(0u);
    c->f[14] = u2f(0u);
    { c->r[31] = 0x088aab9cu; func_088ae24c(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = c->r[2] + 0x00000014u;
    mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = c->r[2] + 0xffffffffu;
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x0000467cu);
    c->r[1] = 0x08a40000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0x00004680u);
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0u + 0u;
    c->r[6] = 0u + 0x00003fffu;
    c->r[7] = 0u + 0u;
    c->f[12] = c->f[0];
    c->f[13] = c->f[1];
    c->f[14] = u2f(0u);
    { c->r[31] = 0x088aabecu; func_088ae24c(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = c->r[2] + 0x00000014u;
    mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = c->r[2] + 0xffffffffu;
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00004680u);
    c->r[1] = 0x08a40000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0x00004680u);
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0u + 0x00003fffu;
    c->r[6] = 0u + 0x00003fffu;
    c->r[7] = 0u + 0u;
    c->f[12] = c->f[0];
    c->f[13] = c->f[1];
    c->f[14] = u2f(0u);
    { c->r[31] = 0x088aac3cu; func_088ae24c(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = c->r[2] + 0x00000014u;
    mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = c->r[2] + 0xffffffffu;
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00004680u);
    c->r[1] = 0x08a40000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0x0000467cu);
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0u + 0x00003fffu;
    c->r[6] = 0u + 0x00007fffu;
    c->r[7] = 0u + 0u;
    c->f[12] = c->f[0];
    c->f[13] = c->f[1];
    c->f[14] = u2f(0u);
    { c->r[31] = 0x088aac8cu; func_088ae24c(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = c->r[2] + 0x00000014u;
    mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = c->r[2] + 0xffffffffu;
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x0000467cu);
    c->r[1] = 0x08a40000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0x0000467cu);
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0u + 0u;
    c->r[6] = 0u + 0x00007fffu;
    c->r[7] = 0u + 0u;
    c->f[12] = c->f[0];
    c->f[13] = c->f[1];
    c->f[14] = u2f(0u);
    { c->r[31] = 0x088aacdcu; func_088ae24c(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = c->r[2] + 0x00000014u;
    mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = c->r[2] + 0xffffffffu;
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x0000467cu);
    c->r[1] = 0x08a40000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0x00004680u);
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0u + 0u;
    c->r[6] = 0u + 0x00003fffu;
    c->r[7] = 0u + 0u;
    c->f[12] = c->f[0];
    c->f[13] = c->f[1];
    c->f[14] = u2f(0u);
    { c->r[31] = 0x088aad2cu; func_088ae24c(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = c->r[2] + 0x00000014u;
    mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = c->r[2] + 0xffffffffu;
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x00000078u;
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = c->r[2] + 0xffffffffu;
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    mem_w32(ram, c->r[30] + 0x0000001cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]);
    c->r[2] = 0u + 0x00000005u;
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0u + 0x00005fffu;
    c->r[6] = 0u + 0x00005fffu;
    c->r[7] = 0u + 0u;
    c->f[12] = u2f(0u);
    c->f[13] = u2f(0u);
    c->f[14] = u2f(0u);
    { c->r[31] = 0x088aad9cu; func_088ae24c(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = c->r[2] + 0x00000014u;
    mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = c->r[2] + 0xffffffffu;
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x0000467cu);
    c->r[1] = 0x08a40000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0x00004680u);
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0u + 0x00003fffu;
    c->r[6] = 0u + 0x00003fffu;
    c->r[7] = 0u + 0u;
    c->f[12] = c->f[0];
    c->f[13] = c->f[1];
    c->f[14] = u2f(0u);
    { c->r[31] = 0x088aadecu; func_088ae24c(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = c->r[2] + 0x00000014u;
    mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = c->r[2] + 0xffffffffu;
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00004680u);
    c->r[1] = 0x08a40000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0x00004680u);
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0u + 0x00007fffu;
    c->r[6] = 0u + 0x00003fffu;
    c->r[7] = 0u + 0u;
    c->f[12] = c->f[0];
    c->f[13] = c->f[1];
    c->f[14] = u2f(0u);
    { c->r[31] = 0x088aae3cu; func_088ae24c(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = c->r[2] + 0x00000014u;
    mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = c->r[2] + 0xffffffffu;
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00004680u);
    c->r[1] = 0x08a40000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0x0000467cu);
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0u + 0x00007fffu;
    c->r[6] = 0u + 0x00007fffu;
    c->r[7] = 0u + 0u;
    c->f[12] = c->f[0];
    c->f[13] = c->f[1];
    c->f[14] = u2f(0u);
    { c->r[31] = 0x088aae8cu; func_088ae24c(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = c->r[2] + 0x00000014u;
    mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = c->r[2] + 0xffffffffu;
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x0000467cu);
    c->r[1] = 0x08a40000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0x0000467cu);
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0u + 0x00003fffu;
    c->r[6] = 0u + 0x00007fffu;
    c->r[7] = 0u + 0u;
    c->f[12] = c->f[0];
    c->f[13] = c->f[1];
    c->f[14] = u2f(0u);
    { c->r[31] = 0x088aaedcu; func_088ae24c(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = c->r[2] + 0x00000014u;
    mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = c->r[2] + 0xffffffffu;
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x0000467cu);
    c->r[1] = 0x08a40000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0x00004680u);
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0u + 0x00003fffu;
    c->r[6] = 0u + 0x00003fffu;
    c->r[7] = 0u + 0u;
    c->f[12] = c->f[0];
    c->f[13] = c->f[1];
    c->f[14] = u2f(0u);
    { c->r[31] = 0x088aaf2cu; func_088ae24c(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = c->r[2] + 0x00000014u;
    mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = c->r[2] + 0xffffffffu;
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x00000078u;
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = c->r[2] + 0xffffffffu;
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    mem_w32(ram, c->r[30] + 0x0000001cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]);
    c->r[2] = 0u + 0x00000005u;
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0u + 0x00001fffu;
    c->r[6] = 0u + 0x00001fffu;
    c->r[7] = 0u + 0u;
    c->f[12] = u2f(0u);
    c->f[13] = u2f(0u);
    c->f[14] = u2f(0u);
    { c->r[31] = 0x088aaf9cu; func_088ae24c(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = c->r[2] + 0x00000014u;
    mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = c->r[2] + 0xffffffffu;
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x0000467cu);
    c->r[1] = 0x08a40000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0x00004680u);
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0u + 0u;
    c->r[6] = 0u + 0u;
    c->r[7] = 0u + 0u;
    c->f[12] = c->f[0];
    c->f[13] = c->f[1];
    c->f[14] = u2f(0u);
    { c->r[31] = 0x088aafecu; func_088ae24c(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = c->r[2] + 0x00000014u;
    mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = c->r[2] + 0xffffffffu;
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00004680u);
    c->r[1] = 0x08a40000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0x00004680u);
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0u + 0x00003fffu;
    c->r[6] = 0u + 0u;
    c->r[7] = 0u + 0u;
    c->f[12] = c->f[0];
    c->f[13] = c->f[1];
    c->f[14] = u2f(0u);
    { c->r[31] = 0x088ab03cu; func_088ae24c(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = c->r[2] + 0x00000014u;
    mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = c->r[2] + 0xffffffffu;
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00004680u);
    c->r[1] = 0x08a40000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0x0000467cu);
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0u + 0x00003fffu;
    c->r[6] = 0u + 0x00003fffu;
    c->r[7] = 0u + 0u;
    c->f[12] = c->f[0];
    c->f[13] = c->f[1];
    c->f[14] = u2f(0u);
    { c->r[31] = 0x088ab08cu; func_088ae24c(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = c->r[2] + 0x00000014u;
    mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = c->r[2] + 0xffffffffu;
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x0000467cu);
    c->r[1] = 0x08a40000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0x0000467cu);
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0u + 0u;
    c->r[6] = 0u + 0x00003fffu;
    c->r[7] = 0u + 0u;
    c->f[12] = c->f[0];
    c->f[13] = c->f[1];
    c->f[14] = u2f(0u);
    { c->r[31] = 0x088ab0dcu; func_088ae24c(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = c->r[2] + 0x00000014u;
    mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = c->r[2] + 0xffffffffu;
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x0000467cu);
    c->r[1] = 0x08a40000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0x00004680u);
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0u + 0u;
    c->r[6] = 0u + 0u;
    c->r[7] = 0u + 0u;
    c->f[12] = c->f[0];
    c->f[13] = c->f[1];
    c->f[14] = u2f(0u);
    { c->r[31] = 0x088ab12cu; func_088ae24c(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = c->r[2] + 0x00000014u;
    mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = c->r[2] + 0xffffffffu;
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x00000078u;
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = c->r[2] + 0xffffffffu;
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    mem_w32(ram, c->r[30] + 0x0000001cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]);
    c->r[2] = 0u + 0x00000005u;
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0u + 0x00005fffu;
    c->r[6] = 0u + 0x00001fffu;
    c->r[7] = 0u + 0u;
    c->f[12] = u2f(0u);
    c->f[13] = u2f(0u);
    c->f[14] = u2f(0u);
    { c->r[31] = 0x088ab19cu; func_088ae24c(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = c->r[2] + 0x00000014u;
    mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = c->r[2] + 0xffffffffu;
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x0000467cu);
    c->r[1] = 0x08a40000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0x00004680u);
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0u + 0x00003fffu;
    c->r[6] = 0u + 0u;
    c->r[7] = 0u + 0u;
    c->f[12] = c->f[0];
    c->f[13] = c->f[1];
    c->f[14] = u2f(0u);
    { c->r[31] = 0x088ab1ecu; func_088ae24c(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = c->r[2] + 0x00000014u;
    mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = c->r[2] + 0xffffffffu;
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00004680u);
    c->r[1] = 0x08a40000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0x00004680u);
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0u + 0x00007fffu;
    c->r[6] = 0u + 0u;
    c->r[7] = 0u + 0u;
    c->f[12] = c->f[0];
    c->f[13] = c->f[1];
    c->f[14] = u2f(0u);
    { c->r[31] = 0x088ab23cu; func_088ae24c(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = c->r[2] + 0x00000014u;
    mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = c->r[2] + 0xffffffffu;
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00004680u);
    c->r[1] = 0x08a40000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0x0000467cu);
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0u + 0x00007fffu;
    c->r[6] = 0u + 0x00003fffu;
    c->r[7] = 0u + 0u;
    c->f[12] = c->f[0];
    c->f[13] = c->f[1];
    c->f[14] = u2f(0u);
    { c->r[31] = 0x088ab28cu; func_088ae24c(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = c->r[2] + 0x00000014u;
    mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = c->r[2] + 0xffffffffu;
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x0000467cu);
    c->r[1] = 0x08a40000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0x0000467cu);
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0u + 0x00003fffu;
    c->r[6] = 0u + 0x00003fffu;
    c->r[7] = 0u + 0u;
    c->f[12] = c->f[0];
    c->f[13] = c->f[1];
    c->f[14] = u2f(0u);
    { c->r[31] = 0x088ab2dcu; func_088ae24c(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = c->r[2] + 0x00000014u;
    mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = c->r[2] + 0xffffffffu;
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x0000467cu);
    c->r[1] = 0x08a40000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0x00004680u);
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0u + 0x00003fffu;
    c->r[6] = 0u + 0u;
    c->r[7] = 0u + 0u;
    c->f[12] = c->f[0];
    c->f[13] = c->f[1];
    c->f[14] = u2f(0u);
    { c->r[31] = 0x088ab32cu; func_088ae24c(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = c->r[2] + 0x00000014u;
    mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = c->r[2] + 0xffffffffu;
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x00000078u;
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = c->r[2] + 0xffffffffu;
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    mem_w32(ram, c->r[30] + 0x0000001cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]);
    c->r[2] = 0u + 0x00000005u;
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0u + 0x00001fffu;
    c->r[6] = 0u + 0x00005fffu;
    c->r[7] = 0u + 0u;
    c->f[12] = u2f(0u);
    c->f[13] = u2f(0u);
    c->f[14] = u2f(0u);
    { c->r[31] = 0x088ab39cu; func_088ae24c(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = c->r[2] + 0x00000014u;
    mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = c->r[2] + 0xffffffffu;
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x0000467cu);
    c->r[1] = 0x08a40000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0x00004680u);
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0u + 0u;
    c->r[6] = 0u + 0x00003fffu;
    c->r[7] = 0u + 0u;
    c->f[12] = c->f[0];
    c->f[13] = c->f[1];
    c->f[14] = u2f(0u);
    { c->r[31] = 0x088ab3ecu; func_088ae24c(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = c->r[2] + 0x00000014u;
    mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = c->r[2] + 0xffffffffu;
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00004680u);
    c->r[1] = 0x08a40000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0x00004680u);
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0u + 0x00003fffu;
    c->r[6] = 0u + 0x00003fffu;
    c->r[7] = 0u + 0u;
    c->f[12] = c->f[0];
    c->f[13] = c->f[1];
    c->f[14] = u2f(0u);
    { c->r[31] = 0x088ab43cu; func_088ae24c(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = c->r[2] + 0x00000014u;
    mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = c->r[2] + 0xffffffffu;
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00004680u);
    c->r[1] = 0x08a40000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0x0000467cu);
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0u + 0x00003fffu;
    c->r[6] = 0u + 0x00007fffu;
    c->r[7] = 0u + 0u;
    c->f[12] = c->f[0];
    c->f[13] = c->f[1];
    c->f[14] = u2f(0u);
    { c->r[31] = 0x088ab48cu; func_088ae24c(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = c->r[2] + 0x00000014u;
    mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = c->r[2] + 0xffffffffu;
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x0000467cu);
    c->r[1] = 0x08a40000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0x0000467cu);
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0u + 0u;
    c->r[6] = 0u + 0x00007fffu;
    c->r[7] = 0u + 0u;
    c->f[12] = c->f[0];
    c->f[13] = c->f[1];
    c->f[14] = u2f(0u);
    { c->r[31] = 0x088ab4dcu; func_088ae24c(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = c->r[2] + 0x00000014u;
    mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = c->r[2] + 0xffffffffu;
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x0000467cu);
    c->r[1] = 0x08a40000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0x00004680u);
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0u + 0u;
    c->r[6] = 0u + 0x00003fffu;
    c->r[7] = 0u + 0u;
    c->f[12] = c->f[0];
    c->f[13] = c->f[1];
    c->f[14] = u2f(0u);
    { c->r[31] = 0x088ab52cu; func_088ae24c(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = c->r[2] + 0x00000014u;
    mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = c->r[2] + 0xffffffffu;
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x00000078u;
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = c->r[2] + 0xffffffffu;
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    mem_w32(ram, c->r[30] + 0x0000001cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]);
    c->r[2] = 0u + 0x00000005u;
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0u + 0x00005fffu;
    c->r[6] = 0u + 0x00005fffu;
    c->r[7] = 0u + 0u;
    c->f[12] = u2f(0u);
    c->f[13] = u2f(0u);
    c->f[14] = u2f(0u);
    { c->r[31] = 0x088ab59cu; func_088ae24c(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = c->r[2] + 0x00000014u;
    mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = c->r[2] + 0xffffffffu;
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x0000467cu);
    c->r[1] = 0x08a40000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0x00004680u);
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0u + 0x00003fffu;
    c->r[6] = 0u + 0x00003fffu;
    c->r[7] = 0u + 0u;
    c->f[12] = c->f[0];
    c->f[13] = c->f[1];
    c->f[14] = u2f(0u);
    { c->r[31] = 0x088ab5ecu; func_088ae24c(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = c->r[2] + 0x00000014u;
    mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = c->r[2] + 0xffffffffu;
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00004680u);
    c->r[1] = 0x08a40000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0x00004680u);
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0u + 0x00007fffu;
    c->r[6] = 0u + 0x00003fffu;
    c->r[7] = 0u + 0u;
    c->f[12] = c->f[0];
    c->f[13] = c->f[1];
    c->f[14] = u2f(0u);
    { c->r[31] = 0x088ab63cu; func_088ae24c(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = c->r[2] + 0x00000014u;
    mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = c->r[2] + 0xffffffffu;
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00004680u);
    c->r[1] = 0x08a40000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0x0000467cu);
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0u + 0x00007fffu;
    c->r[6] = 0u + 0x00007fffu;
    c->r[7] = 0u + 0u;
    c->f[12] = c->f[0];
    c->f[13] = c->f[1];
    c->f[14] = u2f(0u);
    { c->r[31] = 0x088ab68cu; func_088ae24c(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = c->r[2] + 0x00000014u;
    mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = c->r[2] + 0xffffffffu;
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x0000467cu);
    c->r[1] = 0x08a40000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0x0000467cu);
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0u + 0x00003fffu;
    c->r[6] = 0u + 0x00007fffu;
    c->r[7] = 0u + 0u;
    c->f[12] = c->f[0];
    c->f[13] = c->f[1];
    c->f[14] = u2f(0u);
    { c->r[31] = 0x088ab6dcu; func_088ae24c(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = c->r[2] + 0x00000014u;
    mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = c->r[2] + 0xffffffffu;
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x0000467cu);
    c->r[1] = 0x08a40000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0x00004680u);
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0u + 0x00003fffu;
    c->r[6] = 0u + 0x00003fffu;
    c->r[7] = 0u + 0u;
    c->f[12] = c->f[0];
    c->f[13] = c->f[1];
    c->f[14] = u2f(0u);
    { c->r[31] = 0x088ab72cu; func_088ae24c(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = c->r[2] + 0x00000014u;
    mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = c->r[2] + 0xffffffffu;
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x00000078u;
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = c->r[2] + 0xffffffffu;
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    mem_w32(ram, c->r[30] + 0x0000001cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]);
    c->r[2] = 0u + 0x00000005u;
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0u + 0x00001fffu;
    c->r[6] = 0u + 0x00001fffu;
    c->r[7] = 0u + 0u;
    c->f[12] = u2f(0u);
    c->f[13] = u2f(0u);
    c->f[14] = u2f(0u);
    { c->r[31] = 0x088ab79cu; func_088ae24c(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = c->r[2] + 0x00000014u;
    mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = c->r[2] + 0xffffffffu;
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x0000467cu);
    c->r[1] = 0x08a40000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0x00004680u);
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0u + 0u;
    c->r[6] = 0u + 0u;
    c->r[7] = 0u + 0u;
    c->f[12] = c->f[0];
    c->f[13] = c->f[1];
    c->f[14] = u2f(0u);
    { c->r[31] = 0x088ab7ecu; func_088ae24c(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = c->r[2] + 0x00000014u;
    mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = c->r[2] + 0xffffffffu;
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00004680u);
    c->r[1] = 0x08a40000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0x00004680u);
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0u + 0x00003fffu;
    c->r[6] = 0u + 0u;
    c->r[7] = 0u + 0u;
    c->f[12] = c->f[0];
    c->f[13] = c->f[1];
    c->f[14] = u2f(0u);
    { c->r[31] = 0x088ab83cu; func_088ae24c(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = c->r[2] + 0x00000014u;
    mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = c->r[2] + 0xffffffffu;
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00004680u);
    c->r[1] = 0x08a40000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0x0000467cu);
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0u + 0x00003fffu;
    c->r[6] = 0u + 0x00003fffu;
    c->r[7] = 0u + 0u;
    c->f[12] = c->f[0];
    c->f[13] = c->f[1];
    c->f[14] = u2f(0u);
    { c->r[31] = 0x088ab88cu; func_088ae24c(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = c->r[2] + 0x00000014u;
    mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = c->r[2] + 0xffffffffu;
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x0000467cu);
    c->r[1] = 0x08a40000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0x0000467cu);
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0u + 0u;
    c->r[6] = 0u + 0x00003fffu;
    c->r[7] = 0u + 0u;
    c->f[12] = c->f[0];
    c->f[13] = c->f[1];
    c->f[14] = u2f(0u);
    { c->r[31] = 0x088ab8dcu; func_088ae24c(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = c->r[2] + 0x00000014u;
    mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = c->r[2] + 0xffffffffu;
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x0000467cu);
    c->r[1] = 0x08a40000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0x00004680u);
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0u + 0u;
    c->r[6] = 0u + 0u;
    c->r[7] = 0u + 0u;
    c->f[12] = c->f[0];
    c->f[13] = c->f[1];
    c->f[14] = u2f(0u);
    { c->r[31] = 0x088ab92cu; func_088ae24c(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = c->r[2] + 0x00000014u;
    mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = c->r[2] + 0xffffffffu;
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x00000078u;
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = c->r[2] + 0xffffffffu;
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    mem_w32(ram, c->r[30] + 0x0000001cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]);
    c->r[2] = 0u + 0x00000005u;
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0u + 0x00005fffu;
    c->r[6] = 0u + 0x00001fffu;
    c->r[7] = 0u + 0u;
    c->f[12] = u2f(0u);
    c->f[13] = u2f(0u);
    c->f[14] = u2f(0u);
    { c->r[31] = 0x088ab99cu; func_088ae24c(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = c->r[2] + 0x00000014u;
    mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = c->r[2] + 0xffffffffu;
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x0000467cu);
    c->r[1] = 0x08a40000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0x00004680u);
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0u + 0x00003fffu;
    c->r[6] = 0u + 0u;
    c->r[7] = 0u + 0u;
    c->f[12] = c->f[0];
    c->f[13] = c->f[1];
    c->f[14] = u2f(0u);
    { c->r[31] = 0x088ab9ecu; func_088ae24c(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = c->r[2] + 0x00000014u;
    mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = c->r[2] + 0xffffffffu;
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00004680u);
    c->r[1] = 0x08a40000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0x00004680u);
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0u + 0x00007fffu;
    c->r[6] = 0u + 0u;
    c->r[7] = 0u + 0u;
    c->f[12] = c->f[0];
    c->f[13] = c->f[1];
    c->f[14] = u2f(0u);
    { c->r[31] = 0x088aba3cu; func_088ae24c(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = c->r[2] + 0x00000014u;
    mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = c->r[2] + 0xffffffffu;
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00004680u);
    c->r[1] = 0x08a40000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0x0000467cu);
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0u + 0x00007fffu;
    c->r[6] = 0u + 0x00003fffu;
    c->r[7] = 0u + 0u;
    c->f[12] = c->f[0];
    c->f[13] = c->f[1];
    c->f[14] = u2f(0u);
    { c->r[31] = 0x088aba8cu; func_088ae24c(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = c->r[2] + 0x00000014u;
    mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = c->r[2] + 0xffffffffu;
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x0000467cu);
    c->r[1] = 0x08a40000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0x0000467cu);
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0u + 0x00003fffu;
    c->r[6] = 0u + 0x00003fffu;
    c->r[7] = 0u + 0u;
    c->f[12] = c->f[0];
    c->f[13] = c->f[1];
    c->f[14] = u2f(0u);
    { c->r[31] = 0x088abadcu; func_088ae24c(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = c->r[2] + 0x00000014u;
    mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = c->r[2] + 0xffffffffu;
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x0000467cu);
    c->r[1] = 0x08a40000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0x00004680u);
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0u + 0x00003fffu;
    c->r[6] = 0u + 0u;
    c->r[7] = 0u + 0u;
    c->f[12] = c->f[0];
    c->f[13] = c->f[1];
    c->f[14] = u2f(0u);
    { c->r[31] = 0x088abb2cu; func_088ae24c(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = c->r[2] + 0x00000014u;
    mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = c->r[2] + 0xffffffffu;
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x00000078u;
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = c->r[2] + 0xffffffffu;
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    mem_w32(ram, c->r[30] + 0x0000001cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]);
    c->r[2] = 0u + 0x00000005u;
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0u + 0x00001fffu;
    c->r[6] = 0u + 0x00005fffu;
    c->r[7] = 0u + 0u;
    c->f[12] = u2f(0u);
    c->f[13] = u2f(0u);
    c->f[14] = u2f(0u);
    { c->r[31] = 0x088abb9cu; func_088ae24c(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = c->r[2] + 0x00000014u;
    mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = c->r[2] + 0xffffffffu;
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x0000467cu);
    c->r[1] = 0x08a40000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0x00004680u);
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0u + 0u;
    c->r[6] = 0u + 0x00003fffu;
    c->r[7] = 0u + 0u;
    c->f[12] = c->f[0];
    c->f[13] = c->f[1];
    c->f[14] = u2f(0u);
    { c->r[31] = 0x088abbecu; func_088ae24c(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = c->r[2] + 0x00000014u;
    mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = c->r[2] + 0xffffffffu;
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00004680u);
    c->r[1] = 0x08a40000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0x00004680u);
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0u + 0x00003fffu;
    c->r[6] = 0u + 0x00003fffu;
    c->r[7] = 0u + 0u;
    c->f[12] = c->f[0];
    c->f[13] = c->f[1];
    c->f[14] = u2f(0u);
    { c->r[31] = 0x088abc3cu; func_088ae24c(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = c->r[2] + 0x00000014u;
    mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = c->r[2] + 0xffffffffu;
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00004680u);
    c->r[1] = 0x08a40000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0x0000467cu);
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0u + 0x00003fffu;
    c->r[6] = 0u + 0x00007fffu;
    c->r[7] = 0u + 0u;
    c->f[12] = c->f[0];
    c->f[13] = c->f[1];
    c->f[14] = u2f(0u);
    { c->r[31] = 0x088abc8cu; func_088ae24c(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = c->r[2] + 0x00000014u;
    mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = c->r[2] + 0xffffffffu;
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x0000467cu);
    c->r[1] = 0x08a40000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0x0000467cu);
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0u + 0u;
    c->r[6] = 0u + 0x00007fffu;
    c->r[7] = 0u + 0u;
    c->f[12] = c->f[0];
    c->f[13] = c->f[1];
    c->f[14] = u2f(0u);
    { c->r[31] = 0x088abcdcu; func_088ae24c(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = c->r[2] + 0x00000014u;
    mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = c->r[2] + 0xffffffffu;
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x0000467cu);
    c->r[1] = 0x08a40000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0x00004680u);
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0u + 0u;
    c->r[6] = 0u + 0x00003fffu;
    c->r[7] = 0u + 0u;
    c->f[12] = c->f[0];
    c->f[13] = c->f[1];
    c->f[14] = u2f(0u);
    { c->r[31] = 0x088abd2cu; func_088ae24c(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = c->r[2] + 0x00000014u;
    mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = c->r[2] + 0xffffffffu;
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x00000078u;
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = c->r[2] + 0xffffffffu;
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    mem_w32(ram, c->r[30] + 0x0000001cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]);
    c->r[2] = 0u + 0x00000005u;
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0u + 0x00005fffu;
    c->r[6] = 0u + 0x00005fffu;
    c->r[7] = 0u + 0u;
    c->f[12] = u2f(0u);
    c->f[13] = u2f(0u);
    c->f[14] = u2f(0u);
    { c->r[31] = 0x088abd9cu; func_088ae24c(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = c->r[2] + 0x00000014u;
    mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = c->r[2] + 0xffffffffu;
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x0000467cu);
    c->r[1] = 0x08a40000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0x00004680u);
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0u + 0x00003fffu;
    c->r[6] = 0u + 0x00003fffu;
    c->r[7] = 0u + 0u;
    c->f[12] = c->f[0];
    c->f[13] = c->f[1];
    c->f[14] = u2f(0u);
    { c->r[31] = 0x088abdecu; func_088ae24c(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = c->r[2] + 0x00000014u;
    mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = c->r[2] + 0xffffffffu;
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00004680u);
    c->r[1] = 0x08a40000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0x00004680u);
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0u + 0x00007fffu;
    c->r[6] = 0u + 0x00003fffu;
    c->r[7] = 0u + 0u;
    c->f[12] = c->f[0];
    c->f[13] = c->f[1];
    c->f[14] = u2f(0u);
    { c->r[31] = 0x088abe3cu; func_088ae24c(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = c->r[2] + 0x00000014u;
    mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = c->r[2] + 0xffffffffu;
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00004680u);
    c->r[1] = 0x08a40000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0x0000467cu);
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0u + 0x00007fffu;
    c->r[6] = 0u + 0x00007fffu;
    c->r[7] = 0u + 0u;
    c->f[12] = c->f[0];
    c->f[13] = c->f[1];
    c->f[14] = u2f(0u);
    { c->r[31] = 0x088abe8cu; func_088ae24c(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = c->r[2] + 0x00000014u;
    mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = c->r[2] + 0xffffffffu;
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x0000467cu);
    c->r[1] = 0x08a40000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0x0000467cu);
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0u + 0x00003fffu;
    c->r[6] = 0u + 0x00007fffu;
    c->r[7] = 0u + 0u;
    c->f[12] = c->f[0];
    c->f[13] = c->f[1];
    c->f[14] = u2f(0u);
    { c->r[31] = 0x088abedcu; func_088ae24c(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = c->r[2] + 0x00000014u;
    mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = c->r[2] + 0xffffffffu;
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x0000467cu);
    c->r[1] = 0x08a40000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0x00004680u);
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0u + 0x00003fffu;
    c->r[6] = 0u + 0x00003fffu;
    c->r[7] = 0u + 0u;
    c->f[12] = c->f[0];
    c->f[13] = c->f[1];
    c->f[14] = u2f(0u);
    { c->r[31] = 0x088abf2cu; func_088ae24c(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = c->r[2] + 0x00000014u;
    mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = c->r[2] + 0xffffffffu;
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x00000078u;
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = c->r[2] + 0xffffffffu;
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    mem_w32(ram, c->r[30] + 0x0000001cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]);
    c->r[2] = 0u + 0x00000005u;
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0u + 0x00001fffu;
    c->r[6] = 0u + 0x00001fffu;
    c->r[7] = 0u + 0u;
    c->f[12] = u2f(0u);
    c->f[13] = u2f(0u);
    c->f[14] = u2f(0u);
    { c->r[31] = 0x088abf9cu; func_088ae24c(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = c->r[2] + 0x00000014u;
    mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = c->r[2] + 0xffffffffu;
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x0000467cu);
    c->r[1] = 0x08a40000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0x00004680u);
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0u + 0u;
    c->r[6] = 0u + 0u;
    c->r[7] = 0u + 0u;
    c->f[12] = c->f[0];
    c->f[13] = c->f[1];
    c->f[14] = u2f(0u);
    { c->r[31] = 0x088abfecu; func_088ae24c(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = c->r[2] + 0x00000014u;
    mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = c->r[2] + 0xffffffffu;
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00004680u);
    c->r[1] = 0x08a40000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0x00004680u);
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0u + 0x00003fffu;
    c->r[6] = 0u + 0u;
    c->r[7] = 0u + 0u;
    c->f[12] = c->f[0];
    c->f[13] = c->f[1];
    c->f[14] = u2f(0u);
    { c->r[31] = 0x088ac03cu; func_088ae24c(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = c->r[2] + 0x00000014u;
    mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = c->r[2] + 0xffffffffu;
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00004680u);
    c->r[1] = 0x08a40000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0x0000467cu);
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0u + 0x00003fffu;
    c->r[6] = 0u + 0x00003fffu;
    c->r[7] = 0u + 0u;
    c->f[12] = c->f[0];
    c->f[13] = c->f[1];
    c->f[14] = u2f(0u);
    { c->r[31] = 0x088ac08cu; func_088ae24c(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = c->r[2] + 0x00000014u;
    mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = c->r[2] + 0xffffffffu;
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x0000467cu);
    c->r[1] = 0x08a40000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0x0000467cu);
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0u + 0u;
    c->r[6] = 0u + 0x00003fffu;
    c->r[7] = 0u + 0u;
    c->f[12] = c->f[0];
    c->f[13] = c->f[1];
    c->f[14] = u2f(0u);
    { c->r[31] = 0x088ac0dcu; func_088ae24c(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = c->r[2] + 0x00000014u;
    mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = c->r[2] + 0xffffffffu;
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x0000467cu);
    c->r[1] = 0x08a40000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0x00004680u);
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0u + 0u;
    c->r[6] = 0u + 0u;
    c->r[7] = 0u + 0u;
    c->f[12] = c->f[0];
    c->f[13] = c->f[1];
    c->f[14] = u2f(0u);
    { c->r[31] = 0x088ac12cu; func_088ae24c(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = c->r[2] + 0x00000014u;
    mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = c->r[2] + 0xffffffffu;
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x00000078u;
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = c->r[2] + 0xffffffffu;
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    mem_w32(ram, c->r[30] + 0x0000001cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]);
    c->r[2] = 0u + 0x00000005u;
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0u + 0x00005fffu;
    c->r[6] = 0u + 0x00001fffu;
    c->r[7] = 0u + 0u;
    c->f[12] = u2f(0u);
    c->f[13] = u2f(0u);
    c->f[14] = u2f(0u);
    { c->r[31] = 0x088ac19cu; func_088ae24c(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = c->r[2] + 0x00000014u;
    mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = c->r[2] + 0xffffffffu;
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x0000467cu);
    c->r[1] = 0x08a40000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0x00004680u);
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0u + 0x00003fffu;
    c->r[6] = 0u + 0u;
    c->r[7] = 0u + 0u;
    c->f[12] = c->f[0];
    c->f[13] = c->f[1];
    c->f[14] = u2f(0u);
    { c->r[31] = 0x088ac1ecu; func_088ae24c(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = c->r[2] + 0x00000014u;
    mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = c->r[2] + 0xffffffffu;
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00004680u);
    c->r[1] = 0x08a40000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0x00004680u);
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0u + 0x00007fffu;
    c->r[6] = 0u + 0u;
    c->r[7] = 0u + 0u;
    c->f[12] = c->f[0];
    c->f[13] = c->f[1];
    c->f[14] = u2f(0u);
    { c->r[31] = 0x088ac23cu; func_088ae24c(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = c->r[2] + 0x00000014u;
    mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = c->r[2] + 0xffffffffu;
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00004680u);
    c->r[1] = 0x08a40000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0x0000467cu);
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0u + 0x00007fffu;
    c->r[6] = 0u + 0x00003fffu;
    c->r[7] = 0u + 0u;
    c->f[12] = c->f[0];
    c->f[13] = c->f[1];
    c->f[14] = u2f(0u);
    { c->r[31] = 0x088ac28cu; func_088ae24c(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = c->r[2] + 0x00000014u;
    mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = c->r[2] + 0xffffffffu;
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x0000467cu);
    c->r[1] = 0x08a40000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0x0000467cu);
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0u + 0x00003fffu;
    c->r[6] = 0u + 0x00003fffu;
    c->r[7] = 0u + 0u;
    c->f[12] = c->f[0];
    c->f[13] = c->f[1];
    c->f[14] = u2f(0u);
    { c->r[31] = 0x088ac2dcu; func_088ae24c(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = c->r[2] + 0x00000014u;
    mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = c->r[2] + 0xffffffffu;
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x0000467cu);
    c->r[1] = 0x08a40000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0x00004680u);
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0u + 0x00003fffu;
    c->r[6] = 0u + 0u;
    c->r[7] = 0u + 0u;
    c->f[12] = c->f[0];
    c->f[13] = c->f[1];
    c->f[14] = u2f(0u);
    { c->r[31] = 0x088ac32cu; func_088ae24c(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = c->r[2] + 0x00000014u;
    mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = c->r[2] + 0xffffffffu;
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x00000078u;
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = c->r[2] + 0xffffffffu;
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    mem_w32(ram, c->r[30] + 0x0000001cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]);
    c->r[2] = 0u + 0x00000005u;
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0u + 0x00001fffu;
    c->r[6] = 0u + 0x00005fffu;
    c->r[7] = 0u + 0u;
    c->f[12] = u2f(0u);
    c->f[13] = u2f(0u);
    c->f[14] = u2f(0u);
    { c->r[31] = 0x088ac39cu; func_088ae24c(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = c->r[2] + 0x00000014u;
    mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = c->r[2] + 0xffffffffu;
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x0000467cu);
    c->r[1] = 0x08a40000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0x00004680u);
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0u + 0u;
    c->r[6] = 0u + 0x00003fffu;
    c->r[7] = 0u + 0u;
    c->f[12] = c->f[0];
    c->f[13] = c->f[1];
    c->f[14] = u2f(0u);
    { c->r[31] = 0x088ac3ecu; func_088ae24c(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = c->r[2] + 0x00000014u;
    mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = c->r[2] + 0xffffffffu;
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00004680u);
    c->r[1] = 0x08a40000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0x00004680u);
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0u + 0x00003fffu;
    c->r[6] = 0u + 0x00003fffu;
    c->r[7] = 0u + 0u;
    c->f[12] = c->f[0];
    c->f[13] = c->f[1];
    c->f[14] = u2f(0u);
    { c->r[31] = 0x088ac43cu; func_088ae24c(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = c->r[2] + 0x00000014u;
    mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = c->r[2] + 0xffffffffu;
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00004680u);
    c->r[1] = 0x08a40000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0x0000467cu);
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0u + 0x00003fffu;
    c->r[6] = 0u + 0x00007fffu;
    c->r[7] = 0u + 0u;
    c->f[12] = c->f[0];
    c->f[13] = c->f[1];
    c->f[14] = u2f(0u);
    { c->r[31] = 0x088ac48cu; func_088ae24c(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = c->r[2] + 0x00000014u;
    mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = c->r[2] + 0xffffffffu;
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x0000467cu);
    c->r[1] = 0x08a40000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0x0000467cu);
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0u + 0u;
    c->r[6] = 0u + 0x00007fffu;
    c->r[7] = 0u + 0u;
    c->f[12] = c->f[0];
    c->f[13] = c->f[1];
    c->f[14] = u2f(0u);
    { c->r[31] = 0x088ac4dcu; func_088ae24c(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = c->r[2] + 0x00000014u;
    mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = c->r[2] + 0xffffffffu;
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x0000467cu);
    c->r[1] = 0x08a40000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0x00004680u);
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0u + 0u;
    c->r[6] = 0u + 0x00003fffu;
    c->r[7] = 0u + 0u;
    c->f[12] = c->f[0];
    c->f[13] = c->f[1];
    c->f[14] = u2f(0u);
    { c->r[31] = 0x088ac52cu; func_088ae24c(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = c->r[2] + 0x00000014u;
    mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = c->r[2] + 0xffffffffu;
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x00000078u;
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = c->r[2] + 0xffffffffu;
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    mem_w32(ram, c->r[30] + 0x0000001cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]);
    c->r[2] = 0u + 0x00000005u;
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0u + 0x00005fffu;
    c->r[6] = 0u + 0x00005fffu;
    c->r[7] = 0u + 0u;
    c->f[12] = u2f(0u);
    c->f[13] = u2f(0u);
    c->f[14] = u2f(0u);
    { c->r[31] = 0x088ac59cu; func_088ae24c(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = c->r[2] + 0x00000014u;
    mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = c->r[2] + 0xffffffffu;
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x0000467cu);
    c->r[1] = 0x08a40000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0x00004680u);
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0u + 0x00003fffu;
    c->r[6] = 0u + 0x00003fffu;
    c->r[7] = 0u + 0u;
    c->f[12] = c->f[0];
    c->f[13] = c->f[1];
    c->f[14] = u2f(0u);
    { c->r[31] = 0x088ac5ecu; func_088ae24c(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = c->r[2] + 0x00000014u;
    mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = c->r[2] + 0xffffffffu;
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00004680u);
    c->r[1] = 0x08a40000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0x00004680u);
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0u + 0x00007fffu;
    c->r[6] = 0u + 0x00003fffu;
    c->r[7] = 0u + 0u;
    c->f[12] = c->f[0];
    c->f[13] = c->f[1];
    c->f[14] = u2f(0u);
    { c->r[31] = 0x088ac63cu; func_088ae24c(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = c->r[2] + 0x00000014u;
    mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = c->r[2] + 0xffffffffu;
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00004680u);
    c->r[1] = 0x08a40000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0x0000467cu);
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0u + 0x00007fffu;
    c->r[6] = 0u + 0x00007fffu;
    c->r[7] = 0u + 0u;
    c->f[12] = c->f[0];
    c->f[13] = c->f[1];
    c->f[14] = u2f(0u);
    { c->r[31] = 0x088ac68cu; func_088ae24c(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = c->r[2] + 0x00000014u;
    mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = c->r[2] + 0xffffffffu;
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x0000467cu);
    c->r[1] = 0x08a40000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0x0000467cu);
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0u + 0x00003fffu;
    c->r[6] = 0u + 0x00007fffu;
    c->r[7] = 0u + 0u;
    c->f[12] = c->f[0];
    c->f[13] = c->f[1];
    c->f[14] = u2f(0u);
    { c->r[31] = 0x088ac6dcu; func_088ae24c(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = c->r[2] + 0x00000014u;
    mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = c->r[2] + 0xffffffffu;
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x0000467cu);
    c->r[1] = 0x08a40000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0x00004680u);
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0u + 0x00003fffu;
    c->r[6] = 0u + 0x00003fffu;
    c->r[7] = 0u + 0u;
    c->f[12] = c->f[0];
    c->f[13] = c->f[1];
    c->f[14] = u2f(0u);
    { c->r[31] = 0x088ac72cu; func_088ae24c(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = c->r[2] + 0x00000014u;
    mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = c->r[2] + 0xffffffffu;
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x00000078u;
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = c->r[2] + 0xffffffffu;
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]);
L_088ac75c:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = 0u | 0xffffu;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_088ac940; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = 0u + 0x00000001u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_088ac940; }
    c->r[2] = 0x08a90000u;
    c->r[2] = c->r[2] + 0x00002bf0u;
    mem_w32(ram, c->r[30] + 0x0000001cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]);
    c->r[2] = 0u + 0x00000005u;
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00004684u);
    c->r[4] = c->r[2] + 0u;
    c->f[12] = u2f(0u);
    c->f[13] = u2f(0u);
    c->f[14] = c->f[0];
    c->f[15] = u2f(0u);
    { c->r[31] = 0x088ac7c0u; func_0880d140(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = c->r[2] + 0x00000010u;
    mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = c->r[2] + 0xffffffffu;
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00004684u);
    c->r[1] = 0x08a40000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0x00004688u);
    c->r[4] = c->r[2] + 0u;
    c->f[12] = c->f[0];
    c->f[13] = c->f[1];
    c->f[14] = u2f(0u);
    c->f[15] = u2f(0u);
    { c->r[31] = 0x088ac808u; func_0880d140(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = c->r[2] + 0x00000010u;
    mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = c->r[2] + 0xffffffffu;
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00004688u);
    c->r[1] = 0x08a40000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0x00004688u);
    c->r[4] = c->r[2] + 0u;
    c->f[12] = c->f[0];
    c->f[13] = c->f[1];
    c->f[14] = u2f(0u);
    c->f[15] = u2f(0u);
    { c->r[31] = 0x088ac850u; func_0880d140(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = c->r[2] + 0x00000010u;
    mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = c->r[2] + 0xffffffffu;
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00004688u);
    c->r[1] = 0x08a40000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0x00004684u);
    c->r[4] = c->r[2] + 0u;
    c->f[12] = c->f[0];
    c->f[13] = c->f[1];
    c->f[14] = u2f(0u);
    c->f[15] = u2f(0u);
    { c->r[31] = 0x088ac898u; func_0880d140(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = c->r[2] + 0x00000010u;
    mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = c->r[2] + 0xffffffffu;
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00004684u);
    c->r[1] = 0x08a40000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0x00004684u);
    c->r[4] = c->r[2] + 0u;
    c->f[12] = c->f[0];
    c->f[13] = c->f[1];
    c->f[14] = u2f(0u);
    c->f[15] = u2f(0u);
    { c->r[31] = 0x088ac8e0u; func_0880d140(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = c->r[2] + 0x00000010u;
    mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = c->r[2] + 0xffffffffu;
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00004684u);
    c->r[1] = 0x08a40000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0x00004688u);
    c->r[4] = c->r[2] + 0u;
    c->f[12] = c->f[0];
    c->f[13] = c->f[1];
    c->f[14] = u2f(0u);
    c->f[15] = u2f(0u);
    { c->r[31] = 0x088ac928u; func_0880d140(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = c->r[2] + 0x00000010u;
    mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = c->r[2] + 0xffffffffu;
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
L_088ac940:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = 0u | 0xffffu;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_088ac96c; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = 0u + 0x00000001u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_088ac96c; }
    c->r[4] = 0x08a90000u;
    { c->r[31] = 0x088ac96cu; c->r[4] = c->r[4] + 0x000065e0u; func_08808260(c, ram); }
L_088ac96c:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = 0u | 0xffffu;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_088ac998; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = 0u + 0x00000001u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_088ac998; }
    c->r[4] = 0x08a90000u;
    { c->r[31] = 0x088ac998u; c->r[4] = c->r[4] + 0x00006670u; func_08808240(c, ram); }
L_088ac998:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = 0u | 0xffffu;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_088ac9e4; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = 0u + 0x00000001u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_088ac9e4; }
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00004688u);
    c->r[1] = 0x08a40000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0x00004684u);
    c->r[4] = 0x08a90000u;
    c->r[4] = c->r[4] + 0x00006680u;
    c->f[12] = u2f(0u);
    c->f[13] = c->f[0];
    c->f[14] = u2f(0u);
    { c->r[31] = 0x088ac9e4u; c->f[15] = c->f[1]; func_0880d140(c, ram); }
L_088ac9e4:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = 0u | 0xffffu;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_088ad080; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = 0u + 0x00000001u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_088ad080; }
    c->r[2] = 0x08a90000u;
    c->r[2] = c->r[2] + 0x00006690u;
    mem_w32(ram, c->r[30] + 0x0000001cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]);
    c->r[2] = 0u + 0x00000003u;
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
    c->r[2] = 0u + 0x00000005u;
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0u + 0x00001fffu;
    c->r[6] = 0u + 0x00001fffu;
    c->r[7] = 0u + 0u;
    c->r[8] = 0u + 0u;
    c->r[9] = 0u + 0u;
    { c->r[31] = 0x088aca5cu; c->r[10] = 0u + 0u; func_088ae2d4(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x0000000cu;
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[2] + 0xffffffffu;
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0u + 0u;
    c->r[6] = 0u + 0u;
    c->r[7] = 0u + 0u;
    c->r[8] = 0u + 0x00000080u;
    c->r[9] = 0u + 0u;
    { c->r[31] = 0x088aca98u; c->r[10] = 0u + 0x00000080u; func_088ae2d4(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x0000000cu;
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[2] + 0xffffffffu;
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0u + 0x00003fffu;
    c->r[6] = 0u + 0u;
    c->r[7] = 0u + 0u;
    c->r[8] = 0u + 0x0000007fu;
    c->r[9] = 0u + 0u;
    { c->r[31] = 0x088acad4u; c->r[10] = 0u + 0x00000080u; func_088ae2d4(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x0000000cu;
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[2] + 0xffffffffu;
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0u + 0x00003fffu;
    c->r[6] = 0u + 0x00003fffu;
    c->r[7] = 0u + 0u;
    c->r[8] = 0u + 0x0000007fu;
    c->r[9] = 0u + 0u;
    { c->r[31] = 0x088acb10u; c->r[10] = 0u + 0x0000007fu; func_088ae2d4(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x0000000cu;
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[2] + 0xffffffffu;
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0u + 0u;
    c->r[6] = 0u + 0x00003fffu;
    c->r[7] = 0u + 0u;
    c->r[8] = 0u + 0x00000080u;
    c->r[9] = 0u + 0u;
    { c->r[31] = 0x088acb4cu; c->r[10] = 0u + 0x0000007fu; func_088ae2d4(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x0000000cu;
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[2] + 0xffffffffu;
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0u + 0u;
    c->r[6] = 0u + 0u;
    c->r[7] = 0u + 0u;
    c->r[8] = 0u + 0x00000080u;
    c->r[9] = 0u + 0u;
    { c->r[31] = 0x088acb88u; c->r[10] = 0u + 0x00000080u; func_088ae2d4(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x0000000cu;
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[2] + 0xffffffffu;
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = c->r[2] + 0x00000048u;
    mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = c->r[2] + 0xffffffffu;
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
    c->r[2] = 0u + 0x00000005u;
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0u + 0x00005fffu;
    c->r[6] = 0u + 0x00001fffu;
    c->r[7] = 0u + 0u;
    c->r[8] = 0u + 0u;
    c->r[9] = 0u + 0u;
    { c->r[31] = 0x088acbf4u; c->r[10] = 0u + 0u; func_088ae2d4(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x0000000cu;
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[2] + 0xffffffffu;
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0u + 0x00003fffu;
    c->r[6] = 0u + 0u;
    c->r[7] = 0u + 0u;
    c->r[8] = 0u + 0x00000080u;
    c->r[9] = 0u + 0u;
    { c->r[31] = 0x088acc30u; c->r[10] = 0u + 0x00000080u; func_088ae2d4(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x0000000cu;
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[2] + 0xffffffffu;
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0u + 0x00007fffu;
    c->r[6] = 0u + 0u;
    c->r[7] = 0u + 0u;
    c->r[8] = 0u + 0x0000007fu;
    c->r[9] = 0u + 0u;
    { c->r[31] = 0x088acc6cu; c->r[10] = 0u + 0x00000080u; func_088ae2d4(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x0000000cu;
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[2] + 0xffffffffu;
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0u + 0x00007fffu;
    c->r[6] = 0u + 0x00003fffu;
    c->r[7] = 0u + 0u;
    c->r[8] = 0u + 0x0000007fu;
    c->r[9] = 0u + 0u;
    { c->r[31] = 0x088acca8u; c->r[10] = 0u + 0x0000007fu; func_088ae2d4(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x0000000cu;
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[2] + 0xffffffffu;
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0u + 0x00003fffu;
    c->r[6] = 0u + 0x00003fffu;
    c->r[7] = 0u + 0u;
    c->r[8] = 0u + 0x00000080u;
    c->r[9] = 0u + 0u;
    { c->r[31] = 0x088acce4u; c->r[10] = 0u + 0x0000007fu; func_088ae2d4(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x0000000cu;
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[2] + 0xffffffffu;
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0u + 0x00003fffu;
    c->r[6] = 0u + 0u;
    c->r[7] = 0u + 0u;
    c->r[8] = 0u + 0x00000080u;
    c->r[9] = 0u + 0u;
    { c->r[31] = 0x088acd20u; c->r[10] = 0u + 0x00000080u; func_088ae2d4(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x0000000cu;
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[2] + 0xffffffffu;
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = c->r[2] + 0x00000048u;
    mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = c->r[2] + 0xffffffffu;
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
    c->r[2] = 0u + 0x00000005u;
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0u + 0x00001fffu;
    c->r[6] = 0u + 0x00005fffu;
    c->r[7] = 0u + 0u;
    c->r[8] = 0u + 0u;
    c->r[9] = 0u + 0u;
    { c->r[31] = 0x088acd8cu; c->r[10] = 0u + 0u; func_088ae2d4(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x0000000cu;
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[2] + 0xffffffffu;
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0u + 0u;
    c->r[6] = 0u + 0x00003fffu;
    c->r[7] = 0u + 0u;
    c->r[8] = 0u + 0x00000080u;
    c->r[9] = 0u + 0u;
    { c->r[31] = 0x088acdc8u; c->r[10] = 0u + 0x00000080u; func_088ae2d4(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x0000000cu;
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[2] + 0xffffffffu;
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0u + 0x00003fffu;
    c->r[6] = 0u + 0x00003fffu;
    c->r[7] = 0u + 0u;
    c->r[8] = 0u + 0x0000007fu;
    c->r[9] = 0u + 0u;
    { c->r[31] = 0x088ace04u; c->r[10] = 0u + 0x00000080u; func_088ae2d4(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x0000000cu;
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[2] + 0xffffffffu;
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0u + 0x00003fffu;
    c->r[6] = 0u + 0x00007fffu;
    c->r[7] = 0u + 0u;
    c->r[8] = 0u + 0x0000007fu;
    c->r[9] = 0u + 0u;
    { c->r[31] = 0x088ace40u; c->r[10] = 0u + 0x0000007fu; func_088ae2d4(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x0000000cu;
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[2] + 0xffffffffu;
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0u + 0u;
    c->r[6] = 0u + 0x00007fffu;
    c->r[7] = 0u + 0u;
    c->r[8] = 0u + 0x00000080u;
    c->r[9] = 0u + 0u;
    { c->r[31] = 0x088ace7cu; c->r[10] = 0u + 0x0000007fu; func_088ae2d4(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x0000000cu;
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[2] + 0xffffffffu;
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0u + 0u;
    c->r[6] = 0u + 0x00003fffu;
    c->r[7] = 0u + 0u;
    c->r[8] = 0u + 0x00000080u;
    c->r[9] = 0u + 0u;
    { c->r[31] = 0x088aceb8u; c->r[10] = 0u + 0x00000080u; func_088ae2d4(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x0000000cu;
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[2] + 0xffffffffu;
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = c->r[2] + 0x00000048u;
    mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = c->r[2] + 0xffffffffu;
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
    c->r[2] = 0u + 0x00000005u;
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0u + 0x00005fffu;
    c->r[6] = 0u + 0x00005fffu;
    c->r[7] = 0u + 0u;
    c->r[8] = 0u + 0u;
    c->r[9] = 0u + 0u;
    { c->r[31] = 0x088acf24u; c->r[10] = 0u + 0u; func_088ae2d4(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x0000000cu;
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[2] + 0xffffffffu;
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0u + 0x00003fffu;
    c->r[6] = 0u + 0x00003fffu;
    c->r[7] = 0u + 0u;
    c->r[8] = 0u + 0x00000080u;
    c->r[9] = 0u + 0u;
    { c->r[31] = 0x088acf60u; c->r[10] = 0u + 0x00000080u; func_088ae2d4(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x0000000cu;
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[2] + 0xffffffffu;
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0u + 0x00007fffu;
    c->r[6] = 0u + 0x00003fffu;
    c->r[7] = 0u + 0u;
    c->r[8] = 0u + 0x0000007fu;
    c->r[9] = 0u + 0u;
    { c->r[31] = 0x088acf9cu; c->r[10] = 0u + 0x00000080u; func_088ae2d4(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x0000000cu;
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[2] + 0xffffffffu;
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0u + 0x00007fffu;
    c->r[6] = 0u + 0x00007fffu;
    c->r[7] = 0u + 0u;
    c->r[8] = 0u + 0x0000007fu;
    c->r[9] = 0u + 0u;
    { c->r[31] = 0x088acfd8u; c->r[10] = 0u + 0x0000007fu; func_088ae2d4(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x0000000cu;
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[2] + 0xffffffffu;
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0u + 0x00003fffu;
    c->r[6] = 0u + 0x00007fffu;
    c->r[7] = 0u + 0u;
    c->r[8] = 0u + 0x00000080u;
    c->r[9] = 0u + 0u;
    { c->r[31] = 0x088ad014u; c->r[10] = 0u + 0x0000007fu; func_088ae2d4(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x0000000cu;
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[2] + 0xffffffffu;
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0u + 0x00003fffu;
    c->r[6] = 0u + 0x00003fffu;
    c->r[7] = 0u + 0u;
    c->r[8] = 0u + 0x00000080u;
    c->r[9] = 0u + 0u;
    { c->r[31] = 0x088ad050u; c->r[10] = 0u + 0x00000080u; func_088ae2d4(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x0000000cu;
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[2] + 0xffffffffu;
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = c->r[2] + 0x00000048u;
    mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = c->r[2] + 0xffffffffu;
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
L_088ad080:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = 0u | 0xffffu;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_088ad14c; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = 0u + 0x00000001u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_088ad14c; }
    c->r[2] = 0x08a90000u;
    c->r[2] = c->r[2] + 0x000067b0u;
    mem_w32(ram, c->r[30] + 0x0000001cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]);
    c->r[2] = 0u + 0x0000007fu;
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = 0u + 0xffffffffu;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_088ad14c; }
L_088ad0cc:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
    c->r[2] = 0u + 0x00000005u;
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = 0u + 0xffffffffu;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_088ad124; }
L_088ad0f4:
    { c->r[31] = 0x088ad0fcu; c->r[4] = mem_r32(ram, c->r[30] + 0x0000000cu); func_088ae458(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x0000000cu;
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[2] + 0xffffffffu;
    c->r[3] = c->r[2] + 0u;
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[3]);
    c->r[2] = 0u + 0xffffffffu;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_088ad0f4; }
L_088ad124:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = c->r[2] + 0x00000048u;
    mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = c->r[2] + 0xffffffffu;
    c->r[3] = c->r[2] + 0u;
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[3]);
    c->r[2] = 0u + 0xffffffffu;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_088ad0cc; }
L_088ad14c:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000024u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000020u);
    { c->r[29] = c->r[29] + 0x00000030u; return; }
    return; /* fell out of func_088a8708 */
}

/* func_088ae00c  0x088ae00c..0x088ae07c  112 bytes, source=sweep */
void func_088ae00c(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x088ae00cu);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_088ae040; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = 0u + 0x00000001u;
    { mem_w32(ram, c->r[3] + 0x00000060u, c->r[2]); goto L_088ae048; }
L_088ae040:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    mem_w32(ram, c->r[2] + 0x00000060u, 0u);
L_088ae048:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[7] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = mem_r32(ram, c->r[2] + 0x00000064u);
    c->r[6] = mem_r32(ram, c->r[3] + 0x00000068u);
    { c->r[31] = 0x088ae068u; c->r[7] = mem_r32(ram, c->r[7] + 0x00000060u); func_088ae07c(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_088ae00c */
}

/* func_088b286c  0x088b286c..0x088b28b0  68 bytes, source=sweep */
void func_088b286c(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x088b286cu);
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
    { c->r[31] = 0x088b289cu; c->r[5] = c->r[2] + 0u; func_088b1ee0(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_088b286c */
}

/* func_088b5adc  0x088b5adc..0x088b5ca4  456 bytes, source=sweep */
void func_088b5adc(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x088b5adcu);
    c->r[29] = c->r[29] + 0xffffffb0u;
    mem_w32(ram, c->r[29] + 0x00000048u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000044u, c->r[30]);
    mem_w32(ram, c->r[29] + 0x00000040u, c->r[16]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[6]);
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[7]);
    c->r[2] = c->r[30] + 0x00000010u;
    { c->r[31] = 0x088b5b0cu; c->r[4] = c->r[2] + 0u; func_08808240(c, ram); }
    c->r[2] = c->r[30] + 0x00000020u;
    { c->r[31] = 0x088b5b18u; c->r[4] = c->r[2] + 0u; func_08808240(c, ram); }
    c->r[2] = c->r[30] + 0x00000030u;
    { c->r[31] = 0x088b5b24u; c->r[4] = c->r[2] + 0u; func_08808240(c, ram); }
    c->r[2] = c->r[30] + 0x00000030u;
    c->r[4] = c->r[2] + 0u;
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000004u);
    { c->r[31] = 0x088b5b38u; c->r[6] = mem_r32(ram, c->r[30] + 0x00000008u); func_08820ca4(c, ram); }
    c->r[2] = c->r[30] + 0x00000030u;
    c->r[3] = c->r[30] + 0x00000030u;
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x088b5b4cu; c->r[5] = c->r[3] + 0u; func_0884c1d8(c, ram); }
    c->r[2] = c->r[30] + 0x00000010u;
    c->r[3] = c->r[30] + 0x00000030u;
    c->r[4] = c->r[2] + 0u;
    c->r[5] = mem_r32(ram, c->r[30] + 0x0000000cu);
    { c->r[31] = 0x088b5b64u; c->r[6] = c->r[3] + 0u; func_0884d26c(c, ram); }
    c->r[2] = c->r[30] + 0x00000010u;
    c->r[3] = c->r[30] + 0x00000010u;
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x088b5b78u; c->r[5] = c->r[3] + 0u; func_0884c1d8(c, ram); }
    c->r[2] = c->r[30] + 0x00000020u;
    c->r[3] = c->r[30] + 0x00000030u;
    c->r[6] = c->r[30] + 0x00000010u;
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x088b5b90u; c->r[5] = c->r[3] + 0u; func_0884d26c(c, ram); }
    c->r[2] = c->r[30] + 0x00000020u;
    c->r[3] = c->r[30] + 0x00000020u;
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x088b5ba4u; c->r[5] = c->r[3] + 0u; func_0884c1d8(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000010u);
    mem_wf32(ram, c->r[2] + 0x00000000u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000020u);
    mem_wf32(ram, c->r[2] + 0x00000004u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000030u);
    mem_wf32(ram, c->r[2] + 0x00000008u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    mem_w32(ram, c->r[2] + 0x0000000cu, 0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000014u);
    mem_wf32(ram, c->r[2] + 0x00000010u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000024u);
    mem_wf32(ram, c->r[2] + 0x00000014u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000034u);
    mem_wf32(ram, c->r[2] + 0x00000018u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    mem_w32(ram, c->r[2] + 0x0000001cu, 0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000018u);
    mem_wf32(ram, c->r[2] + 0x00000020u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000028u);
    mem_wf32(ram, c->r[2] + 0x00000024u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000038u);
    mem_wf32(ram, c->r[2] + 0x00000028u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    mem_w32(ram, c->r[2] + 0x0000002cu, 0u);
    c->r[16] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[30] + 0x00000010u;
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x088b5c3cu; c->r[5] = mem_r32(ram, c->r[30] + 0x00000004u); func_0885a018(c, ram); }
    c->f[0] = -c->f[0];
    mem_wf32(ram, c->r[16] + 0x00000030u, c->f[0]);
    c->r[16] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[30] + 0x00000020u;
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x088b5c58u; c->r[5] = mem_r32(ram, c->r[30] + 0x00000004u); func_0885a018(c, ram); }
    c->f[0] = -c->f[0];
    mem_wf32(ram, c->r[16] + 0x00000034u, c->f[0]);
    c->r[16] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[30] + 0x00000030u;
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x088b5c74u; c->r[5] = mem_r32(ram, c->r[30] + 0x00000004u); func_0885a018(c, ram); }
    c->f[0] = -c->f[0];
    mem_wf32(ram, c->r[16] + 0x00000038u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00004950u);
    mem_wf32(ram, c->r[2] + 0x0000003cu, c->f[0]);
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000048u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000044u);
    c->r[16] = mem_r32(ram, c->r[29] + 0x00000040u);
    { c->r[29] = c->r[29] + 0x00000050u; return; }
    return; /* fell out of func_088b5adc */
}

/* func_088bc6e0  0x088bc6e0..0x088bc8fc  540 bytes, source=sweep */
void func_088bc6e0(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x088bc6e0u);
    c->r[29] = c->r[29] + 0xffffffd0u;
    mem_w32(ram, c->r[29] + 0x00000024u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000020u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[6]);
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[7]);
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000700u);
    c->r[2] = 0u + 0x000002e8u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[4] = c->lo;
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
    { c->r[31] = 0x088bc74cu; c->r[6] = mem_r32(ram, c->r[30] + 0x00000000u); func_088be29c(c, ram); }
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000700u);
    c->r[2] = 0u + 0x000002e8u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[4] = c->lo;
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
    c->r[2] = c->r[2] >> 24;
    c->r[2] = c->r[2] & 0x000fu;
    c->r[3] = c->r[2] << 16;
    c->r[2] = 0x10000000u;
    c->r[2] = c->r[3] | c->r[2];
    { c->r[31] = 0x088bc7a8u; c->r[5] = c->r[2] + 0u; func_088be14c(c, ram); }
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000700u);
    c->r[2] = 0u + 0x000002e8u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[4] = c->lo;
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
    c->r[2] = 0x00ff0000u;
    c->r[2] = c->r[2] | 0xffffu;
    c->r[3] = c->r[3] & c->r[2];
    c->r[2] = 0x01000000u;
    c->r[2] = c->r[3] | c->r[2];
    { c->r[31] = 0x088bc804u; c->r[5] = c->r[2] + 0u; func_088be14c(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    { int _c = ((s32)c->r[2] <= 0); if (_c) goto L_088bc86c; }
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000700u);
    c->r[2] = 0u + 0x000002e8u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[4] = c->lo;
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
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = 0x04030000u;
    c->r[2] = c->r[2] | c->r[3];
    { c->r[31] = 0x088bc86cu; c->r[5] = c->r[2] + 0u; func_088be14c(c, ram); }
L_088bc86c:
    mem_w32(ram, c->r[30] + 0x00000010u, 0u);
L_088bc870:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = ((s32)c->r[2] < (s32)c->r[3]) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_088bc88c; }
    { goto L_088bc8e8; }
L_088bc88c:
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000700u);
    c->r[2] = 0u + 0x000002e8u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[4] = c->lo;
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
    { c->r[31] = 0x088bc8d8u; c->r[5] = c->r[5] | 0x0004u; func_088be14c(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]); goto L_088bc870; }
L_088bc8e8:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000024u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000020u);
    { c->r[29] = c->r[29] + 0x00000030u; return; }
    return; /* fell out of func_088bc6e0 */
}

/* func_088bee08  0x088bee08..0x088bee4c  68 bytes, source=sweep */
void func_088bee08(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x088bee08u);
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
    { c->r[31] = 0x088bee38u; c->r[5] = c->r[2] + 0u; func_088be14c(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_088bee08 */
}

/* func_088bfe18  0x088bfe18..0x088bfea0  136 bytes, source=fde */
void func_088bfe18(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x088bfe18u);
    c->r[29] = c->r[29] + 0xffffffd0u;
    mem_w32(ram, c->r[29] + 0x00000024u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000020u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[2] = c->r[5] + 0u;
    c->r[3] = c->r[6] + 0u;
    c->r[4] = c->r[7] + 0u;
    c->r[5] = c->r[8] + 0u;
    mem_w8(ram, c->r[30] + 0x00000004u, c->r[2]);
    mem_w8(ram, c->r[30] + 0x00000005u, c->r[3]);
    mem_w8(ram, c->r[30] + 0x00000006u, c->r[4]);
    mem_w8(ram, c->r[30] + 0x00000007u, c->r[5]);
    c->r[2] = mem_r8(ram, c->r[30] + 0x00000004u);
    mem_w8(ram, c->r[30] + 0x00000010u, c->r[2]);
    c->r[2] = mem_r8(ram, c->r[30] + 0x00000005u);
    mem_w8(ram, c->r[30] + 0x00000011u, c->r[2]);
    c->r[2] = mem_r8(ram, c->r[30] + 0x00000006u);
    mem_w8(ram, c->r[30] + 0x00000012u, c->r[2]);
    c->r[2] = mem_r8(ram, c->r[30] + 0x00000007u);
    mem_w8(ram, c->r[30] + 0x00000013u, c->r[2]);
    c->r[2] = c->r[30] + 0x00000010u;
    c->r[4] = 0u + 0x0000003fu;
    c->r[5] = 0u + 0u;
    c->r[6] = 0u + 0u;
    c->r[7] = 0u + 0u;
    c->r[8] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x088bfe8cu; c->r[9] = c->r[2] + 0u; func_089c6bec(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000024u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000020u);
    { c->r[29] = c->r[29] + 0x00000030u; return; }
    return; /* fell out of func_088bfe18 */
}

/* func_088c3918  0x088c3918..0x088c3efc  1508 bytes, source=fde */
void func_088c3918(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x088c3918u);
    c->r[29] = c->r[29] + 0xfffffed0u;
    mem_w32(ram, c->r[29] + 0x00000124u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000120u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[2] = c->r[30] + 0x00000010u;
    { c->r[31] = 0x088c3938u; c->r[4] = c->r[2] + 0u; func_08808240(c, ram); }
    c->r[2] = c->r[30] + 0x00000020u;
    { c->r[31] = 0x088c3944u; c->r[4] = c->r[2] + 0u; func_08808240(c, ram); }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 4;
    c->r[2] = 0x08aa0000u;
    c->r[2] = c->r[2] + 0xffff9bc0u;
    c->r[4] = c->r[3] + c->r[2];
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 4;
    c->r[2] = 0x08aa0000u;
    c->r[2] = c->r[2] + 0xffff9bc0u;
    c->r[2] = c->r[3] + c->r[2];
    c->f[1] = mem_rf32(ram, c->r[2] + 0x0000000cu);
    c->r[1] = 0x08a80000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00002e40u);
    c->f[0] = c->f[1] - c->f[0];
    mem_wf32(ram, c->r[4] + 0x0000000cu, c->f[0]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 4;
    c->r[2] = 0x08aa0000u;
    c->r[2] = c->r[2] + 0xffff9bc0u;
    c->r[2] = c->r[3] + c->r[2];
    c->f[1] = mem_rf32(ram, c->r[2] + 0x0000000cu);
    c->f[0] = u2f(0u);
    alx_c_cond_s(c, 14, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_088c39d8; }
    { goto L_088c3a48; }
L_088c39d8:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 4;
    c->r[2] = 0x08aa0000u;
    c->r[2] = c->r[2] + 0xffff9bbcu;
    c->r[2] = c->r[3] + c->r[2];
    mem_w32(ram, c->r[2] + 0x00000000u, 0u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 4;
    c->r[2] = 0x08aa0000u;
    c->r[2] = c->r[2] + 0xffff9ba0u;
    c->r[2] = c->r[3] + c->r[2];
    mem_w8(ram, c->r[2] + 0x00000008u, 0u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 4;
    c->r[2] = 0x08aa0000u;
    c->r[2] = c->r[2] + 0xffff9bc0u;
    c->r[2] = c->r[3] + c->r[2];
    { mem_w32(ram, c->r[2] + 0x0000000cu, 0u); goto L_088c3ee8; }
L_088c3a48:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 4;
    c->r[2] = 0x08aa0000u;
    c->r[2] = c->r[2] + 0xffff9bb0u;
    c->r[3] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[3] + 0x00000000u);
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[3] + 0x00000004u);
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[3] + 0x00000008u);
    mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[3] + 0x0000000cu);
    mem_w32(ram, c->r[30] + 0x0000001cu, c->r[2]);
    c->r[4] = c->r[30] + 0x00000020u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 4;
    c->r[2] = 0x08aa0000u;
    c->r[2] = c->r[2] + 0xffff9bc0u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[5] = c->r[2] + 0u;
    c->r[1] = 0x08a80000u;
    { c->r[31] = 0x088c3abcu; c->f[12] = mem_rf32(ram, c->r[1] + 0x00002e40u); func_088ae204(c, ram); }
    mem_w32(ram, c->r[30] + 0x0000001cu, 0u);
    mem_w32(ram, c->r[30] + 0x0000002cu, 0u);
    c->r[2] = c->r[30] + 0x00000020u;
    c->r[3] = c->r[30] + 0x00000010u;
    c->r[6] = c->r[30] + 0x00000020u;
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x088c3adcu; c->r[5] = c->r[3] + 0u; func_088ae1c0(c, ram); }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 4;
    c->r[2] = 0x08aa0000u;
    c->r[2] = c->r[2] + 0xffff9bb0u;
    c->r[2] = c->r[3] + c->r[2];
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000020u);
    mem_wf32(ram, c->r[2] + 0x00000000u, c->f[0]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 4;
    c->r[2] = 0x08aa0000u;
    c->r[2] = c->r[2] + 0xffff9bb4u;
    c->r[2] = c->r[3] + c->r[2];
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000024u);
    mem_wf32(ram, c->r[2] + 0x00000000u, c->f[0]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 4;
    c->r[2] = 0x08aa0000u;
    c->r[2] = c->r[2] + 0xffff9bb8u;
    c->r[2] = c->r[3] + c->r[2];
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000028u);
    mem_wf32(ram, c->r[2] + 0x00000000u, c->f[0]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 4;
    c->r[2] = 0x08aa0000u;
    c->r[2] = c->r[2] + 0xffff9ba0u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000007u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_088c3c34; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 4;
    c->r[2] = 0x08aa0000u;
    c->r[2] = c->r[2] + 0xffff9bb4u;
    c->r[2] = c->r[3] + c->r[2];
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000000u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00004f0cu);
    alx_c_cond_s(c, 12, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_088c3bc4; }
    { goto L_088c3ee8; }
L_088c3bc4:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 4;
    c->r[2] = 0x08aa0000u;
    c->r[2] = c->r[2] + 0xffff9bc0u;
    c->r[2] = c->r[3] + c->r[2];
    mem_w32(ram, c->r[2] + 0x0000000cu, 0u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 4;
    c->r[2] = 0x08aa0000u;
    c->r[2] = c->r[2] + 0xffff9ba0u;
    c->r[2] = c->r[3] + c->r[2];
    mem_w8(ram, c->r[2] + 0x00000008u, 0u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 4;
    c->r[2] = 0x08aa0000u;
    c->r[2] = c->r[2] + 0xffff9bbcu;
    c->r[2] = c->r[3] + c->r[2];
    { mem_w32(ram, c->r[2] + 0x00000000u, 0u); goto L_088c3ee8; }
L_088c3c34:
    c->r[2] = c->r[30] + 0x00000030u;
    { c->r[31] = 0x088c3c40u; c->r[4] = c->r[2] + 0u; func_0885a2b8(c, ram); }
    c->r[2] = c->r[30] + 0x00000030u;
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0u + 0u;
    { c->r[31] = 0x088c3c54u; c->r[6] = 0u + 0x00000080u; func_08a19ec4(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    mem_w32(ram, c->r[30] + 0x00000030u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    mem_w32(ram, c->r[30] + 0x00000034u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    mem_w32(ram, c->r[30] + 0x00000038u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    mem_w32(ram, c->r[30] + 0x0000003cu, c->r[2]);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00004f10u);
    mem_wf32(ram, c->r[30] + 0x0000003cu, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    mem_w32(ram, c->r[30] + 0x00000040u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000024u);
    mem_w32(ram, c->r[30] + 0x00000044u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000028u);
    mem_w32(ram, c->r[30] + 0x00000048u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000002cu);
    mem_w32(ram, c->r[30] + 0x0000004cu, c->r[2]);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00004f10u);
    mem_wf32(ram, c->r[30] + 0x0000004cu, c->f[0]);
    c->r[2] = c->r[30] + 0x00000030u;
    c->r[4] = c->r[2] + 0x00000020u;
    c->r[2] = c->r[30] + 0x00000030u;
    c->r[2] = c->r[2] + 0x00000010u;
    c->r[3] = c->r[30] + 0x00000030u;
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x088c3cccu; c->r[6] = c->r[3] + 0u; func_08820ca4(c, ram); }
    c->r[2] = c->r[30] + 0x00000030u;
    c->r[3] = c->r[2] + 0x00000030u;
    c->r[2] = c->r[30] + 0x00000030u;
    c->r[2] = c->r[2] + 0x00000020u;
    c->r[4] = c->r[3] + 0u;
    { c->r[31] = 0x088c3ce8u; c->r[5] = c->r[2] + 0u; func_0884c1d8(c, ram); }
    c->r[2] = c->r[30] + 0x00000030u;
    c->r[2] = c->r[2] + 0x00000020u;
    { c->r[31] = 0x088c3cf8u; c->r[4] = c->r[2] + 0u; func_08820c6c(c, ram); }
    mem_wf32(ram, c->r[30] + 0x00000094u, c->f[0]);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00004f14u);
    mem_wf32(ram, c->r[30] + 0x00000098u, c->f[0]);
    c->r[2] = c->r[30] + 0x000000b0u;
    mem_w32(ram, c->r[30] + 0x00000090u, c->r[2]);
    mem_w8(ram, c->r[30] + 0x000000a1u, 0u);
    c->r[4] = c->r[30] + 0x00000030u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 4;
    c->r[2] = 0x08aa0000u;
    c->r[2] = c->r[2] + 0xffff9ba0u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[2] = c->r[2] & 0x000fu;
    { c->r[31] = 0x088c3d48u; c->r[5] = c->r[2] + 0u; func_089c8928(c, ram); }
    mem_w32(ram, c->r[30] + 0x000000e0u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000009cu);
    { int _c = (c->r[2] == 0u); if (_c) goto L_088c3eb4; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000009cu);
    mem_w32(ram, c->r[30] + 0x000000e4u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 4;
    c->r[2] = 0x08aa0000u;
    c->r[2] = c->r[2] + 0xffff9bbcu;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000ac8u;
    { c->r[31] = 0x088c3d94u; c->r[5] = c->r[2] + 0u; func_089cb820(c, ram); }
    mem_w32(ram, c->r[30] + 0x000000e8u, c->r[2]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x000000e4u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 4;
    c->r[2] = 0x08aa0000u;
    c->r[2] = c->r[2] + 0xffff9ba0u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[3] = mem_r32(ram, c->r[4] + 0x0000008cu);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[2] = c->r[3] & c->r[2];
    c->r[2] = c->r[2] & 0x000fu;
    { int _c = (c->r[2] == 0u); if (_c) goto L_088c3eb4; }
    mem_w32(ram, c->r[30] + 0x000000f4u, 0u);
    mem_w32(ram, c->r[30] + 0x000000f8u, 0u);
    c->r[2] = 0u + 0xffffffffu;
    mem_w16(ram, c->r[30] + 0x000000fcu, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 4;
    c->r[2] = 0x08aa0000u;
    c->r[2] = c->r[2] + 0xffff9ba0u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r16(ram, c->r[2] + 0x00000004u);
    mem_w16(ram, c->r[30] + 0x000000feu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000e8u);
    mem_w32(ram, c->r[30] + 0x00000100u, c->r[2]);
    c->r[2] = c->r[30] + 0x000000f0u;
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000ac8u;
    c->r[5] = mem_r32(ram, c->r[30] + 0x000000e4u);
    c->r[6] = 0u + 0x0000001bu;
    { c->r[31] = 0x088c3e30u; c->r[7] = c->r[2] + 0u; func_089cb5e4(c, ram); }
    c->r[3] = mem_r32(ram, c->r[30] + 0x000000e8u);
    c->r[2] = 0x08a80000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00002ed8u);
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_088c3eb4; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000f4u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_088c3e5c; }
    c->r[4] = 0x08a90000u;
    { c->r[31] = 0x088c3e5cu; c->r[4] = c->r[4] + 0xffffb9c0u; func_088c88ac(c, ram); }
L_088c3e5c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000e4u);
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x000000b2u);
    { int _c = ((s32)c->r[2] < 0); if (_c) goto L_088c3eb4; }
    c->r[2] = 0x08a80000u;
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00002f8eu);
    { int _c = ((s32)c->r[2] > 0); if (_c) goto L_088c3eb4; }
    c->r[3] = 0x08a80000u;
    c->r[3] = mem_r8(ram, c->r[3] + 0x00002f8eu);
    c->r[2] = c->r[3] + 0x00000001u;
    c->r[1] = 0x08a80000u;
    mem_w8(ram, c->r[1] + 0x00002f8eu, c->r[2]);
    c->r[2] = c->r[3] << 24;
    c->r[2] = (u32)((s32)c->r[2] >> 24);
    c->r[3] = c->r[2] << 1;
    c->r[2] = 0x08a80000u;
    c->r[2] = c->r[2] + 0x00002ee0u;
    c->r[3] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000e4u);
    c->r[2] = mem_r16(ram, c->r[2] + 0x000000b2u);
    mem_w16(ram, c->r[3] + 0x00000004u, c->r[2]);
L_088c3eb4:
    c->r[2] = mem_r8(ram, c->r[30] + 0x000000a0u);
    c->r[2] = c->r[2] & 0x0003u;
    mem_w8(ram, c->r[30] + 0x00000110u, c->r[2]);
    c->r[2] = mem_r8(ram, c->r[30] + 0x00000110u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_088c3ee8; }
    c->r[2] = mem_r8(ram, c->r[30] + 0x00000110u);
    c->r[3] = c->r[30] + 0x00000030u;
    c->r[3] = c->r[3] + 0x00000040u;
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x088c3ee8u; c->r[6] = c->r[3] + 0u; func_088c4964(c, ram); }
L_088c3ee8:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000124u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000120u);
    { c->r[29] = c->r[29] + 0x00000130u; return; }
    return; /* fell out of func_088c3918 */
}

/* func_088c9024  0x088c9024..0x088c9068  68 bytes, source=sweep */
void func_088c9024(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x088c9024u);
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
    { c->r[31] = 0x088c9054u; c->r[5] = c->r[2] + 0u; func_088c8760(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_088c9024 */
}

/* func_088cd3c0  0x088cd3c0..0x088cd684  708 bytes, source=fde */
void func_088cd3c0(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x088cd3c0u);
    c->r[29] = c->r[29] + 0xffffffa0u;
    mem_w32(ram, c->r[29] + 0x00000054u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000050u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[2] = 0x08a90000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0xffffba0cu);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000ac8u;
    { c->r[31] = 0x088cd3ecu; c->r[5] = c->r[2] + 0u; func_089cb820(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_088cd668; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x000000b8u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00005158u);
    alx_c_cond_s(c, 12, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_088cd424; }
    { goto L_088cd42c; }
L_088cd424:
    { mem_w32(ram, c->r[30] + 0x00000048u, 0u); goto L_088cd66c; }
L_088cd42c:
    c->r[2] = c->r[30] + 0x00000010u;
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x0000515cu);
    c->r[4] = c->r[2] + 0u;
    c->f[12] = u2f(0u);
    c->f[13] = u2f(0u);
    c->f[14] = c->f[0];
    c->f[15] = u2f(0u);
    { c->r[31] = 0x088cd454u; func_0880d140(c, ram); }
    { c->r[31] = 0x088cd45cu; func_08867ab8(c, ram); }
    c->r[6] = c->r[2] + 0u;
    c->r[2] = c->r[30] + 0x00000010u;
    c->r[3] = c->r[30] + 0x00000010u;
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x088cd474u; c->r[5] = c->r[3] + 0u; func_0884c26c(c, ram); }
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00005160u);
    mem_wf32(ram, c->r[30] + 0x0000001cu, c->f[0]);
    c->r[2] = c->r[30] + 0x00000010u;
    c->r[3] = c->r[30] + 0x00000010u;
    c->r[4] = c->r[2] + 0u;
    c->r[5] = c->r[3] + 0u;
    c->r[6] = 0x08b90000u;
    { c->r[31] = 0x088cd49cu; c->r[6] = c->r[6] + 0x000054c0u; func_0884c26c(c, ram); }
    c->f[1] = mem_rf32(ram, c->r[30] + 0x0000001cu);
    c->f[0] = u2f(0u);
    alx_c_cond_s(c, 14, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_088cd4bc; }
    { goto L_088cd4c4; }
L_088cd4bc:
    { mem_w32(ram, c->r[30] + 0x00000048u, 0u); goto L_088cd66c; }
L_088cd4c4:
    c->r[1] = 0x08a40000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0x00005160u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x0000001cu);
    c->f[0] = c->f[1] / c->f[0];
    mem_wf32(ram, c->r[30] + 0x00000020u, c->f[0]);
    c->r[2] = c->r[30] + 0x00000010u;
    c->r[3] = c->r[30] + 0x00000010u;
    c->r[4] = c->r[2] + 0u;
    c->r[5] = c->r[3] + 0u;
    { c->r[31] = 0x088cd4f0u; c->f[12] = mem_rf32(ram, c->r[30] + 0x00000020u); func_0884c224(c, ram); }
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000010u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00005164u);
    c->f[0] = c->f[1] * c->f[0];
    mem_wf32(ram, c->r[30] + 0x00000010u, c->f[0]);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000014u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00005168u);
    c->f[0] = c->f[1] * c->f[0];
    mem_wf32(ram, c->r[30] + 0x00000014u, c->f[0]);
    c->r[2] = c->r[30] + 0x00000030u;
    { c->r[31] = 0x088cd524u; c->r[4] = c->r[2] + 0u; func_08808240(c, ram); }
    { c->r[31] = 0x088cd52cu; func_08820f58(c, ram); }
    c->r[6] = c->r[2] + 0x00000020u;
    c->r[3] = c->r[30] + 0x00000030u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[2] + 0x00000020u;
    c->r[4] = c->r[3] + 0u;
    { c->r[31] = 0x088cd548u; c->r[5] = c->r[2] + 0u; func_08820ca4(c, ram); }
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00005160u);
    mem_wf32(ram, c->r[30] + 0x0000003cu, c->f[0]);
    c->r[2] = c->r[30] + 0x00000030u;
    c->r[3] = c->r[30] + 0x00000030u;
    c->r[4] = c->r[2] + 0u;
    c->r[5] = c->r[3] + 0u;
    c->r[6] = 0x08b90000u;
    { c->r[31] = 0x088cd570u; c->r[6] = c->r[6] + 0x000054c0u; func_0884c26c(c, ram); }
    c->f[1] = mem_rf32(ram, c->r[30] + 0x0000003cu);
    c->f[0] = u2f(0u);
    alx_c_cond_s(c, 14, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_088cd590; }
    { goto L_088cd598; }
L_088cd590:
    { mem_w32(ram, c->r[30] + 0x00000048u, 0u); goto L_088cd66c; }
L_088cd598:
    c->r[1] = 0x08a40000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0x00005160u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x0000003cu);
    c->f[0] = c->f[1] / c->f[0];
    mem_wf32(ram, c->r[30] + 0x00000040u, c->f[0]);
    c->r[2] = c->r[30] + 0x00000030u;
    c->r[3] = c->r[30] + 0x00000030u;
    c->r[4] = c->r[2] + 0u;
    c->r[5] = c->r[3] + 0u;
    { c->r[31] = 0x088cd5c4u; c->f[12] = mem_rf32(ram, c->r[30] + 0x00000040u); func_0884c224(c, ram); }
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000030u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00005164u);
    c->f[0] = c->f[1] * c->f[0];
    mem_wf32(ram, c->r[30] + 0x00000030u, c->f[0]);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000034u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00005168u);
    c->f[0] = c->f[1] * c->f[0];
    mem_wf32(ram, c->r[30] + 0x00000034u, c->f[0]);
    c->r[2] = c->r[30] + 0x00000030u;
    c->r[3] = c->r[30] + 0x00000030u;
    c->r[6] = c->r[30] + 0x00000010u;
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x088cd604u; c->r[5] = c->r[3] + 0u; func_08820ca4(c, ram); }
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000030u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000030u);
    c->f[2] = c->f[1] * c->f[0];
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000034u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000034u);
    c->f[0] = c->f[1] * c->f[0];
    c->f[0] = c->f[2] + c->f[0];
    mem_wf32(ram, c->r[30] + 0x00000044u, c->f[0]);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000044u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x0000516cu);
    alx_c_cond_s(c, 12, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_088cd648; }
    { goto L_088cd650; }
L_088cd648:
    { mem_w32(ram, c->r[30] + 0x00000048u, 0u); goto L_088cd66c; }
L_088cd650:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    mem_w32(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[2] = 0u + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000048u, c->r[2]); goto L_088cd66c; }
L_088cd668:
    mem_w32(ram, c->r[30] + 0x00000048u, 0u);
L_088cd66c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000048u);
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000054u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000050u);
    { c->r[29] = c->r[29] + 0x00000060u; return; }
    return; /* fell out of func_088cd3c0 */
}

/* func_088d38c8  0x088d38c8..0x088d3928  96 bytes, source=sweep */
void func_088d38c8(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x088d38c8u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000054u);
    c->r[2] = mem_r8(ram, c->r[2] + 0x0000001cu);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = c->r[2] << 6;
    c->r[2] = 0x08aa0000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00005318u);
    c->r[2] = c->r[2] + c->r[3];
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x000000a4u);
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[2] = mem_r16(ram, c->r[2] + 0x00000000u);
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_088d38c8 */
}

/* func_088d7000  0x088d7000..0x088d721c  540 bytes, source=fde */
void func_088d7000(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x088d7000u);
    c->r[29] = c->r[29] + 0xffffffc0u;
    mem_w32(ram, c->r[29] + 0x00000034u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000030u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[6]);
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[7]);
    { c->r[31] = 0x088d7028u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000004u); func_088d6e4c(c, ram); }
    { int _c = (c->r[2] == 0u); if (_c) goto L_088d7038; }
    { goto L_088d7208; }
L_088d7038:
    c->r[2] = c->r[30] + 0x00000010u;
    { c->r[31] = 0x088d7044u; c->r[4] = c->r[2] + 0u; func_08808240(c, ram); }
    c->r[3] = c->r[30] + 0x00000010u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000020u;
    c->r[4] = c->r[3] + 0u;
    c->r[5] = mem_r32(ram, c->r[30] + 0x0000000cu);
    { c->r[31] = 0x088d7060u; c->r[6] = c->r[2] + 0u; func_08820ca4(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = mem_r8(ram, c->r[2] + 0x00000099u);
    c->r[2] = 0u + 0x00000006u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_088d708c; }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000004u);
    { c->r[31] = 0x088d7084u; c->r[6] = mem_r32(ram, c->r[30] + 0x0000000cu); func_088d6f10(c, ram); }
    { goto L_088d7208; }
L_088d708c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000060u);
    c->r[2] = mem_r8(ram, c->r[2] + 0x0000000au);
    c->r[2] = c->r[2] & 0x0001u;
    c->r[2] = c->r[2] & 0x00ffu;
    { int _c = (c->r[2] == 0u); if (_c) goto L_088d70e0; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[4] = c->r[2] + 0x00000020u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[5] = c->r[2] + 0x00000020u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000040u;
    c->r[3] = c->r[30] + 0x00000010u;
    c->r[8] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[6] = c->r[2] + 0u;
    c->r[7] = c->r[3] + 0u;
    { c->r[31] = 0x088d70d8u; c->r[8] = mem_r32(ram, c->r[8] + 0x00000010u); func_088efd20(c, ram); }
    { goto L_088d7208; }
L_088d70e0:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x088d70ecu; c->r[5] = 0u + 0x00000003u; func_088d26fc(c, ram); }
    { int _c = (c->r[2] != 0u); if (_c) goto L_088d70fc; }
    { goto L_088d7208; }
L_088d70fc:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[4] = c->r[2] + 0x00000020u;
    c->r[5] = c->r[30] + 0x00000010u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000040u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[6] = c->r[2] + 0u;
    { c->r[31] = 0x088d7120u; c->r[7] = mem_r32(ram, c->r[3] + 0x00000050u); func_088f05d8(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000020u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_088d7208; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x088d713cu; c->f[12] = mem_rf32(ram, c->r[2] + 0x00000048u); func_08a136f8(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000028u, c->r[2]);
    mem_w32(ram, c->r[30] + 0x0000002cu, c->r[3]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000028u);
    c->r[5] = mem_r32(ram, c->r[30] + 0x0000002cu);
    c->r[6] = 0u + 0u;
    { c->r[31] = 0x088d7158u; c->r[7] = 0u + 0u; func_08a1429c(c, ram); }
    { int _c = ((s32)c->r[2] >= 0); if (_c) goto L_088d7174; }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000028u);
    { c->r[31] = 0x088d716cu; c->r[5] = mem_r32(ram, c->r[30] + 0x0000002cu); func_08a14510(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000028u, c->r[2]);
    mem_w32(ram, c->r[30] + 0x0000002cu, c->r[3]);
L_088d7174:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000028u);
    c->r[5] = mem_r32(ram, c->r[30] + 0x0000002cu);
    c->r[6] = 0x08a40000u;
    c->r[6] = mem_r32(ram, c->r[6] + 0x000059c0u);
    c->r[7] = 0x08a40000u;
    { c->r[31] = 0x088d7190u; c->r[7] = mem_r32(ram, c->r[7] + 0x000059c4u); func_08a14214(c, ram); }
    { int _c = ((s32)c->r[2] > 0); if (_c) goto L_088d71a0; }
    { goto L_088d7208; }
L_088d71a0:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000048u);
    c->f[0] = u2f(0u);
    alx_c_cond_s(c, 12, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_088d71c4; }
    { goto L_088d71d4; }
L_088d71c4:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000059c8u);
    mem_wf32(ram, c->r[2] + 0x00000028u, c->f[0]);
L_088d71d4:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000048u);
    c->f[0] = u2f(0u);
    alx_c_cond_s(c, 12, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_088d71f8; }
    { goto L_088d7208; }
L_088d71f8:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000059ccu);
    mem_wf32(ram, c->r[2] + 0x00000028u, c->f[0]);
L_088d7208:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000034u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000030u);
    { c->r[29] = c->r[29] + 0x00000040u; return; }
    return; /* fell out of func_088d7000 */
}

/* func_088db4a0  0x088db4a0..0x088db5f8  344 bytes, source=fde */
void func_088db4a0(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x088db4a0u);
    c->r[29] = c->r[29] + 0xffffffc0u;
    mem_w32(ram, c->r[29] + 0x00000034u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000030u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[6]);
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[7]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000009u);
    c->r[2] = c->r[2] + 0x00000001u;
    mem_w8(ram, c->r[3] + 0x00000009u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000009u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000004u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_088db5e4; }
    c->r[2] = c->r[30] + 0x00000010u;
    { c->r[31] = 0x088db4f4u; c->r[4] = c->r[2] + 0u; func_08808240(c, ram); }
    c->r[4] = c->r[30] + 0x00000010u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000080u);
    c->r[3] = c->r[2] + 0x00000020u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000020u;
    c->r[5] = c->r[3] + 0u;
    { c->r[31] = 0x088db518u; c->r[6] = c->r[2] + 0u; func_08820ca4(c, ram); }
    c->r[2] = c->r[30] + 0x00000010u;
    c->r[3] = c->r[30] + 0x00000010u;
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x088db52cu; c->r[5] = c->r[3] + 0u; func_0884c1d8(c, ram); }
    c->r[2] = c->r[30] + 0x00000010u;
    c->r[3] = c->r[30] + 0x00000010u;
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00005adcu);
    c->r[4] = c->r[2] + 0u;
    c->r[5] = c->r[3] + 0u;
    { c->r[31] = 0x088db54cu; c->f[12] = c->f[0]; func_0884c224(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000020u;
    c->r[3] = c->r[30] + 0x00000010u;
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = c->r[2] + 0u;
    c->r[6] = c->r[3] + 0u;
    c->r[7] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[8] = 0u + 0u;
    { c->r[31] = 0x088db574u; c->r[9] = 0u + 0u; func_088c46d0(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    mem_w8(ram, c->r[2] + 0x00000009u, 0u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = mem_r8(ram, c->r[2] + 0x0000000au);
    c->r[2] = c->r[2] + 0x00000001u;
    mem_w8(ram, c->r[3] + 0x0000000au, c->r[2]);
    c->r[2] = 0x08aa0000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00004968u);
    c->r[2] = c->r[2] & 0x0003u;
    c->r[2] = c->r[2] + 0x00000005u;
    mem_w32(ram, c->r[30] + 0x00000020u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x0000000au);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[2] = ((s32)c->r[3] < (s32)c->r[2]) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_088db5e4; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    mem_w8(ram, c->r[2] + 0x0000000au, 0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = mem_r32(ram, c->r[2] + 0x00000080u);
    c->r[6] = 0u + 0x0000001bu;
    { c->r[31] = 0x088db5dcu; c->r[7] = 0u + 0u; func_089c34ac(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    mem_w32(ram, c->r[2] + 0x00000080u, 0u);
L_088db5e4:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000034u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000030u);
    { c->r[29] = c->r[29] + 0x00000040u; return; }
    return; /* fell out of func_088db4a0 */
}

/* func_088dede8  0x088dede8..0x088dee6c  132 bytes, source=sweep */
void func_088dede8(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x088dede8u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[2] = 0x08aa0000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0xffffed00u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_088dee10; }
    { goto L_088dee5c; }
L_088dee10:
    c->r[2] = 0x08aa0000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0xffffed00u);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000021u);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[2]);
    c->r[3] = 0x08aa0000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0xffffed00u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] + 0x00000020u;
    c->r[2] = mem_r8(ram, c->r[30] + 0x00000000u);
    mem_w8(ram, c->r[3] + 0x00000005u, c->r[2]);
    c->r[3] = 0x08aa0000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0xffffed00u);
    c->r[2] = 0x08aa0000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0xffffed00u);
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000021u);
    c->r[2] = c->r[2] + 0x00000001u;
    mem_w8(ram, c->r[3] + 0x00000021u, c->r[2]);
L_088dee5c:
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_088dede8 */
}

/* func_088e1d14  0x088e1d14..0x088e29f4  3296 bytes, source=fde */
void func_088e1d14(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x088e1d14u);
    c->r[29] = c->r[29] + 0xffffffb0u;
    mem_w32(ram, c->r[29] + 0x00000048u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000044u, c->r[30]);
    mem_w32(ram, c->r[29] + 0x00000040u, c->r[16]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[6]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = mem_r8(ram, c->r[2] + 0x00000099u);
    c->r[2] = 0u + 0x00000006u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_088e1e4c; }
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
    c->f[0] = mem_rf32(ram, c->r[2] + 0x0000002cu);
    alx_c_cond_s(c, 12, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_088e1d94; }
    { goto L_088e1da0; }
L_088e1d94:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x0000002cu);
    mem_wf32(ram, c->r[30] + 0x00000014u, c->f[0]);
L_088e1da0:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x0000002cu);
    c->f[1] = -c->f[0];
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000014u);
    alx_c_cond_s(c, 12, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_088e1dc8; }
    { goto L_088e1dd8; }
L_088e1dc8:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x0000002cu);
    c->f[0] = -c->f[0];
    mem_wf32(ram, c->r[30] + 0x00000014u, c->f[0]);
L_088e1dd8:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[4] = c->r[2] + 0x00000040u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000040u;
    c->r[3] = c->r[30] + 0x00000010u;
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x088e1df8u; c->r[6] = c->r[3] + 0u; func_08859fd4(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[4] = c->r[2] + 0x00000020u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[2] + 0x00000020u;
    c->r[3] = c->r[30] + 0x00000010u;
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x088e1e18u; c->r[6] = c->r[3] + 0u; func_08820ca4(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[4] = c->r[2] + 0x00000030u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = c->r[2] + 0x00000040u;
    c->r[2] = mem_r32(ram, c->r[3] + 0x00000000u);
    mem_w32(ram, c->r[4] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[3] + 0x00000004u);
    mem_w32(ram, c->r[4] + 0x00000004u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[3] + 0x00000008u);
    mem_w32(ram, c->r[4] + 0x00000008u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[3] + 0x0000000cu);
    { mem_w32(ram, c->r[4] + 0x0000000cu, c->r[2]); goto L_088e29dc; }
L_088e1e4c:
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00005c40u);
    mem_wf32(ram, c->r[30] + 0x00000020u, c->f[0]);
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x088e1e64u; c->r[4] = c->r[4] + 0x00000af4u; func_0880d294(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = 0u + 0x00000002u;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_088e1fa4; }
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x088e1e80u; c->r[4] = c->r[4] + 0x00000af4u; func_0881a2a4(c, ram); }
    c->r[2] = ((s32)c->r[2] < (s32)0x00000002u) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_088e1fa4; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x0000008cu);
    c->r[2] = 0x000e0000u;
    c->r[2] = c->r[3] & c->r[2];
    { int _c = (c->r[2] == 0u); if (_c) goto L_088e1ecc; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000084u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_088e1ecc; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = mem_r16(ram, c->r[2] + 0x0000002au);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w16(ram, c->r[3] + 0x0000002au, c->r[2]); goto L_088e1ef8; }
L_088e1ecc:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = mem_r16(ram, c->r[2] + 0x0000002au);
    c->r[2] = c->r[2] + 0xffffffffu;
    mem_w16(ram, c->r[3] + 0x0000002au, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x0000002au);
    { int _c = ((s32)c->r[2] >= 0); if (_c) goto L_088e1ef8; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    mem_w16(ram, c->r[2] + 0x0000002au, 0u);
L_088e1ef8:
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x088e1f04u; c->r[4] = c->r[4] + 0x00000af4u; func_0881a2a4(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000028u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000028u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_088e1f20; }
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00005c44u);
    mem_wf32(ram, c->r[30] + 0x00000024u, c->f[0]);
L_088e1f20:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000028u);
    c->r[2] = 0u + 0x00000001u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_088e1f3c; }
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00005c48u);
    mem_wf32(ram, c->r[30] + 0x00000024u, c->f[0]);
L_088e1f3c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x0000002au);
    c->f[0] = u2f(c->r[2]);
    c->f[1] = (f32)(s32)f2u(c->f[0]);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000024u);
    c->f[0] = c->f[1] / c->f[0];
    mem_wf32(ram, c->r[30] + 0x0000002cu, c->f[0]);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x0000002cu);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00005c40u);
    alx_c_cond_s(c, 12, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_088e1f7c; }
    { goto L_088e1f88; }
L_088e1f7c:
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00005c40u);
    mem_wf32(ram, c->r[30] + 0x0000002cu, c->f[0]);
L_088e1f88:
    c->f[1] = mem_rf32(ram, c->r[30] + 0x0000002cu);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00005c4cu);
    c->f[1] = c->f[1] * c->f[0];
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000020u);
    c->f[0] = c->f[0] - c->f[1];
    mem_wf32(ram, c->r[30] + 0x00000020u, c->f[0]);
L_088e1fa4:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000010u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000034u);
    c->f[0] = mem_rf32(ram, c->r[3] + 0x00000000u);
    c->f[0] = c->f[1] * c->f[0];
    mem_wf32(ram, c->r[30] + 0x00000030u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000020u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000030u);
    alx_c_cond_s(c, 12, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_088e1fe4; }
    { goto L_088e20e8; }
L_088e1fe4:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000050u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000090u);
    c->f[1] = c->f[0] + c->f[0];
    c->f[0] = mem_rf32(ram, c->r[3] + 0x00000020u);
    alx_c_cond_s(c, 12, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_088e2014; }
    { goto L_088e20e8; }
L_088e2014:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000050u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000030u);
    c->f[1] = -c->f[0];
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000090u);
    alx_c_cond_s(c, 12, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_088e2040; }
    { goto L_088e2068; }
L_088e2040:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x00000050u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000050u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000090u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00005c50u);
    c->f[0] = c->f[1] * c->f[0];
    { mem_wf32(ram, c->r[3] + 0x00000090u, c->f[0]); goto L_088e2088; }
L_088e2068:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x00000050u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000050u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000090u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000030u);
    c->f[0] = c->f[1] + c->f[0];
    mem_wf32(ram, c->r[3] + 0x00000090u, c->f[0]);
L_088e2088:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000010u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x0000002cu);
    c->f[0] = mem_rf32(ram, c->r[3] + 0x00000000u);
    c->f[1] = c->f[1] * c->f[0];
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000020u);
    c->f[0] = c->f[1] * c->f[0];
    mem_wf32(ram, c->r[30] + 0x00000034u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000050u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000090u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000034u);
    alx_c_cond_s(c, 12, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_088e20d4; }
    { goto L_088e2298; }
L_088e20d4:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000050u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000034u);
    { mem_wf32(ram, c->r[2] + 0x00000090u, c->f[0]); goto L_088e2298; }
L_088e20e8:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000030u);
    c->f[1] = -c->f[0];
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000020u);
    alx_c_cond_s(c, 12, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_088e2110; }
    { goto L_088e2208; }
L_088e2110:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000050u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000090u);
    c->f[1] = c->f[0] + c->f[0];
    c->f[0] = mem_rf32(ram, c->r[3] + 0x00000020u);
    alx_c_cond_s(c, 12, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_088e2140; }
    { goto L_088e2208; }
L_088e2140:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000050u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000090u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000030u);
    alx_c_cond_s(c, 12, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_088e2168; }
    { goto L_088e2190; }
L_088e2168:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x00000050u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000050u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000090u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00005c50u);
    c->f[0] = c->f[1] * c->f[0];
    { mem_wf32(ram, c->r[3] + 0x00000090u, c->f[0]); goto L_088e21b0; }
L_088e2190:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x00000050u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000050u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000090u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000030u);
    c->f[0] = c->f[1] - c->f[0];
    mem_wf32(ram, c->r[3] + 0x00000090u, c->f[0]);
L_088e21b0:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000010u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000030u);
    c->f[0] = mem_rf32(ram, c->r[3] + 0x00000000u);
    c->f[0] = c->f[1] * c->f[0];
    mem_wf32(ram, c->r[30] + 0x00000034u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000050u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000090u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000034u);
    alx_c_cond_s(c, 12, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_088e21f4; }
    { goto L_088e2298; }
L_088e21f4:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000050u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000034u);
    { mem_wf32(ram, c->r[2] + 0x00000090u, c->f[0]); goto L_088e2298; }
L_088e2208:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000050u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000030u);
    c->f[1] = -c->f[0];
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000090u);
    alx_c_cond_s(c, 12, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_088e2234; }
    { goto L_088e2274; }
L_088e2234:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000050u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000090u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000030u);
    alx_c_cond_s(c, 12, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_088e225c; }
    { goto L_088e2274; }
L_088e225c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x00000050u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000020u);
    { mem_wf32(ram, c->r[3] + 0x00000090u, c->f[0]); goto L_088e2298; }
L_088e2274:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x00000050u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000050u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000090u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00005c50u);
    c->f[0] = c->f[1] * c->f[0];
    mem_wf32(ram, c->r[3] + 0x00000090u, c->f[0]);
L_088e2298:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000010u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000044u);
    c->f[0] = mem_rf32(ram, c->r[3] + 0x00000004u);
    c->f[0] = c->f[1] * c->f[0];
    mem_wf32(ram, c->r[30] + 0x00000030u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000024u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000030u);
    alx_c_cond_s(c, 12, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_088e22d8; }
    { goto L_088e23e0; }
L_088e22d8:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000050u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000094u);
    c->f[1] = c->f[0] + c->f[0];
    c->f[0] = mem_rf32(ram, c->r[3] + 0x00000024u);
    alx_c_cond_s(c, 12, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_088e2308; }
    { goto L_088e23e0; }
L_088e2308:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000050u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000030u);
    c->f[1] = -c->f[0];
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000094u);
    alx_c_cond_s(c, 12, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_088e2334; }
    { goto L_088e235c; }
L_088e2334:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x00000050u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000050u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000094u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00005c50u);
    c->f[0] = c->f[1] * c->f[0];
    { mem_wf32(ram, c->r[3] + 0x00000094u, c->f[0]); goto L_088e237c; }
L_088e235c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x00000050u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000050u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000094u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000030u);
    c->f[0] = c->f[1] + c->f[0];
    mem_wf32(ram, c->r[3] + 0x00000094u, c->f[0]);
L_088e237c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[4] = mem_r32(ram, c->r[2] + 0x00000050u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000010u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000040u);
    c->f[0] = mem_rf32(ram, c->r[3] + 0x00000004u);
    c->f[1] = c->f[1] * c->f[0];
    c->f[0] = mem_rf32(ram, c->r[4] + 0x00000094u);
    alx_c_cond_s(c, 12, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_088e23b8; }
    { goto L_088e25a4; }
L_088e23b8:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[4] = mem_r32(ram, c->r[2] + 0x00000050u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000010u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000040u);
    c->f[0] = mem_rf32(ram, c->r[3] + 0x00000004u);
    c->f[0] = c->f[1] * c->f[0];
    { mem_wf32(ram, c->r[4] + 0x00000094u, c->f[0]); goto L_088e25a4; }
L_088e23e0:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000030u);
    c->f[1] = -c->f[0];
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000024u);
    alx_c_cond_s(c, 12, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_088e2408; }
    { goto L_088e2514; }
L_088e2408:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000050u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000094u);
    c->f[1] = c->f[0] + c->f[0];
    c->f[0] = mem_rf32(ram, c->r[3] + 0x00000024u);
    alx_c_cond_s(c, 12, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_088e2438; }
    { goto L_088e2514; }
L_088e2438:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000050u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000094u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000030u);
    alx_c_cond_s(c, 12, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_088e2460; }
    { goto L_088e2488; }
L_088e2460:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x00000050u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000050u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000094u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00005c50u);
    c->f[0] = c->f[1] * c->f[0];
    { mem_wf32(ram, c->r[3] + 0x00000094u, c->f[0]); goto L_088e24a8; }
L_088e2488:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x00000050u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000050u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000094u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000030u);
    c->f[0] = c->f[1] - c->f[0];
    mem_wf32(ram, c->r[3] + 0x00000094u, c->f[0]);
L_088e24a8:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x00000050u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000010u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000040u);
    c->f[1] = -c->f[0];
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000004u);
    c->f[1] = c->f[1] * c->f[0];
    c->f[0] = mem_rf32(ram, c->r[3] + 0x00000094u);
    alx_c_cond_s(c, 12, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_088e24e8; }
    { goto L_088e25a4; }
L_088e24e8:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x00000050u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000010u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000040u);
    c->f[1] = -c->f[0];
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000004u);
    c->f[0] = c->f[1] * c->f[0];
    { mem_wf32(ram, c->r[3] + 0x00000094u, c->f[0]); goto L_088e25a4; }
L_088e2514:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000050u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000030u);
    c->f[1] = -c->f[0];
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000094u);
    alx_c_cond_s(c, 12, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_088e2540; }
    { goto L_088e2580; }
L_088e2540:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000050u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000094u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000030u);
    alx_c_cond_s(c, 12, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_088e2568; }
    { goto L_088e2580; }
L_088e2568:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x00000050u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000024u);
    { mem_wf32(ram, c->r[3] + 0x00000094u, c->f[0]); goto L_088e25a4; }
L_088e2580:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x00000050u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000050u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000094u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00005c50u);
    c->f[0] = c->f[1] * c->f[0];
    mem_wf32(ram, c->r[3] + 0x00000094u, c->f[0]);
L_088e25a4:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000010u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x0000003cu);
    c->f[0] = mem_rf32(ram, c->r[3] + 0x00000008u);
    c->f[0] = c->f[1] * c->f[0];
    mem_wf32(ram, c->r[30] + 0x00000030u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000028u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000030u);
    alx_c_cond_s(c, 12, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_088e25e4; }
    { goto L_088e26ec; }
L_088e25e4:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000050u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000098u);
    c->f[1] = c->f[0] + c->f[0];
    c->f[0] = mem_rf32(ram, c->r[3] + 0x00000028u);
    alx_c_cond_s(c, 12, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_088e2614; }
    { goto L_088e26ec; }
L_088e2614:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000050u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000030u);
    c->f[1] = -c->f[0];
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000098u);
    alx_c_cond_s(c, 12, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_088e2640; }
    { goto L_088e2668; }
L_088e2640:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x00000050u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000050u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000098u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00005c50u);
    c->f[0] = c->f[1] * c->f[0];
    { mem_wf32(ram, c->r[3] + 0x00000098u, c->f[0]); goto L_088e2688; }
L_088e2668:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x00000050u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000050u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000098u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000030u);
    c->f[0] = c->f[1] + c->f[0];
    mem_wf32(ram, c->r[3] + 0x00000098u, c->f[0]);
L_088e2688:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[4] = mem_r32(ram, c->r[2] + 0x00000050u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000010u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000038u);
    c->f[0] = mem_rf32(ram, c->r[3] + 0x00000008u);
    c->f[1] = c->f[1] * c->f[0];
    c->f[0] = mem_rf32(ram, c->r[4] + 0x00000098u);
    alx_c_cond_s(c, 12, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_088e26c4; }
    { goto L_088e28b0; }
L_088e26c4:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[4] = mem_r32(ram, c->r[2] + 0x00000050u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000010u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000038u);
    c->f[0] = mem_rf32(ram, c->r[3] + 0x00000008u);
    c->f[0] = c->f[1] * c->f[0];
    { mem_wf32(ram, c->r[4] + 0x00000098u, c->f[0]); goto L_088e28b0; }
L_088e26ec:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000030u);
    c->f[1] = -c->f[0];
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000028u);
    alx_c_cond_s(c, 12, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_088e2714; }
    { goto L_088e2820; }
L_088e2714:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000050u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000098u);
    c->f[1] = c->f[0] + c->f[0];
    c->f[0] = mem_rf32(ram, c->r[3] + 0x00000028u);
    alx_c_cond_s(c, 12, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_088e2744; }
    { goto L_088e2820; }
L_088e2744:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000050u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000098u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000030u);
    alx_c_cond_s(c, 12, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_088e276c; }
    { goto L_088e2794; }
L_088e276c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x00000050u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000050u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000098u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00005c50u);
    c->f[0] = c->f[1] * c->f[0];
    { mem_wf32(ram, c->r[3] + 0x00000098u, c->f[0]); goto L_088e27b4; }
L_088e2794:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x00000050u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000050u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000098u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000030u);
    c->f[0] = c->f[1] - c->f[0];
    mem_wf32(ram, c->r[3] + 0x00000098u, c->f[0]);
L_088e27b4:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x00000050u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000010u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000038u);
    c->f[1] = -c->f[0];
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000008u);
    c->f[1] = c->f[1] * c->f[0];
    c->f[0] = mem_rf32(ram, c->r[3] + 0x00000098u);
    alx_c_cond_s(c, 12, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_088e27f4; }
    { goto L_088e28b0; }
L_088e27f4:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x00000050u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000010u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000038u);
    c->f[1] = -c->f[0];
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000008u);
    c->f[0] = c->f[1] * c->f[0];
    { mem_wf32(ram, c->r[3] + 0x00000098u, c->f[0]); goto L_088e28b0; }
L_088e2820:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000050u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000030u);
    c->f[1] = -c->f[0];
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000098u);
    alx_c_cond_s(c, 12, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_088e284c; }
    { goto L_088e288c; }
L_088e284c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000050u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000098u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000030u);
    alx_c_cond_s(c, 12, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_088e2874; }
    { goto L_088e288c; }
L_088e2874:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x00000050u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000028u);
    { mem_wf32(ram, c->r[3] + 0x00000098u, c->f[0]); goto L_088e28b0; }
L_088e288c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x00000050u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000050u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000098u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00005c50u);
    c->f[0] = c->f[1] * c->f[0];
    mem_wf32(ram, c->r[3] + 0x00000098u, c->f[0]);
L_088e28b0:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000060u);
    c->r[2] = mem_r8(ram, c->r[2] + 0x0000000au);
    c->r[2] = c->r[2] & 0x0001u;
    c->r[2] = c->r[2] & 0x00ffu;
    { int _c = (c->r[2] == 0u); if (_c) goto L_088e2924; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[4] = c->r[2] + 0x00000040u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = c->r[2] + 0x00000040u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000050u);
    c->r[2] = c->r[2] + 0x00000090u;
    c->r[5] = c->r[3] + 0u;
    { c->r[31] = 0x088e28f4u; c->r[6] = c->r[2] + 0u; func_08859fd4(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[4] = c->r[2] + 0x00000020u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = c->r[2] + 0x00000020u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000050u);
    c->r[2] = c->r[2] + 0x00000090u;
    c->r[5] = c->r[3] + 0u;
    { c->r[31] = 0x088e291cu; c->r[6] = c->r[2] + 0u; func_08820ca4(c, ram); }
    { goto L_088e2970; }
L_088e2924:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[4] = c->r[2] + 0x00000040u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000050u);
    c->r[2] = c->r[2] + 0x00000090u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x088e2948u; c->r[6] = mem_r32(ram, c->r[3] + 0x00000050u); func_088efa68(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[4] = c->r[2] + 0x00000020u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = c->r[2] + 0x00000020u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000050u);
    c->r[2] = c->r[2] + 0x00000090u;
    c->r[5] = c->r[3] + 0u;
    { c->r[31] = 0x088e2970u; c->r[6] = c->r[2] + 0u; func_08820ca4(c, ram); }
L_088e2970:
    c->r[16] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x088e2980u; c->f[12] = mem_rf32(ram, c->r[2] + 0x00000040u); func_088ef5b0(c, ram); }
    mem_wf32(ram, c->r[16] + 0x00000040u, c->f[0]);
    c->r[16] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x088e2994u; c->f[12] = mem_rf32(ram, c->r[2] + 0x00000044u); func_088ef5b0(c, ram); }
    mem_wf32(ram, c->r[16] + 0x00000044u, c->f[0]);
    c->r[16] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x088e29a8u; c->f[12] = mem_rf32(ram, c->r[2] + 0x00000048u); func_088ef5b0(c, ram); }
    mem_wf32(ram, c->r[16] + 0x00000048u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[4] = c->r[2] + 0x00000030u;
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
L_088e29dc:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000048u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000044u);
    c->r[16] = mem_r32(ram, c->r[29] + 0x00000040u);
    { c->r[29] = c->r[29] + 0x00000050u; return; }
    return; /* fell out of func_088e1d14 */
}

/* func_088e76ec  0x088e76ec..0x088e773c  80 bytes, source=fde */
void func_088e76ec(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x088e76ecu);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[6]);
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[7]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000004u);
    { c->r[31] = 0x088e771cu; c->r[6] = mem_r32(ram, c->r[30] + 0x0000000cu); func_088d3540(c, ram); }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x088e7728u; c->r[5] = mem_r32(ram, c->r[30] + 0x00000004u); func_088d3bfc(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_088e76ec */
}

/* func_088ecf00  0x088ecf00..0x088ed138  568 bytes, source=fde */
void func_088ecf00(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x088ecf00u);
    c->r[29] = c->r[29] + 0xffffffd0u;
    mem_w32(ram, c->r[29] + 0x00000028u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000024u, c->r[30]);
    mem_w32(ram, c->r[29] + 0x00000020u, c->r[16]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[6]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000024u);
    mem_wf32(ram, c->r[30] + 0x0000000cu, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[4] = c->r[2] + 0x00000030u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000040u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[6] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[5] = c->r[2] + 0u;
    c->f[12] = mem_rf32(ram, c->r[3] + 0x000000b4u);
    { c->r[31] = 0x088ecf54u; c->r[6] = mem_r32(ram, c->r[6] + 0x00000050u); func_088f0f28(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[4] = c->r[2] + 0x00000020u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = c->r[2] + 0x00000020u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000030u;
    c->r[5] = c->r[3] + 0u;
    { c->r[31] = 0x088ecf78u; c->r[6] = c->r[2] + 0u; func_08859fd4(c, ram); }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->f[0] = u2f(0u);
    mem_wf32(ram, c->r[2] + 0x0000004cu, c->f[0]);
    mem_wf32(ram, c->r[3] + 0x00000040u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000005cu);
    c->r[3] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x00000000u);
    c->r[2] = 0u + 0x00000061u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_088ecfac; }
    { goto L_088ed120; }
L_088ecfac:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000024u);
    mem_wf32(ram, c->r[30] + 0x00000010u, c->f[0]);
    c->r[2] = 0x08aa0000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00005224u);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000010u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000004u);
    alx_c_cond_s(c, 12, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_088ecfe0; }
    { goto L_088ecff4; }
L_088ecfe0:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = 0x08aa0000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00005224u);
    c->f[0] = mem_rf32(ram, c->r[3] + 0x00000004u);
    mem_wf32(ram, c->r[2] + 0x00000024u, c->f[0]);
L_088ecff4:
    c->r[2] = 0x08aa0000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00005224u);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000010u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000000u);
    alx_c_cond_s(c, 12, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_088ed01c; }
    { goto L_088ed050; }
L_088ed01c:
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000010u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x0000000cu);
    alx_c_cond_s(c, 12, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_088ed03c; }
    { goto L_088ed050; }
L_088ed03c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = 0x08aa0000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00005224u);
    c->f[0] = mem_rf32(ram, c->r[3] + 0x00000000u);
    mem_wf32(ram, c->r[2] + 0x00000024u, c->f[0]);
L_088ed050:
    { c->r[31] = 0x088ed058u; c->r[16] = mem_r32(ram, c->r[30] + 0x00000000u); func_088debd4(c, ram); }
    c->f[1] = c->f[0];
    c->f[0] = mem_rf32(ram, c->r[16] + 0x00000020u);
    alx_c_cond_s(c, 12, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_088ed078; }
    { goto L_088ed084; }
L_088ed078:
    { c->r[31] = 0x088ed080u; c->r[16] = mem_r32(ram, c->r[30] + 0x00000000u); func_088debd4(c, ram); }
    mem_wf32(ram, c->r[16] + 0x00000020u, c->f[0]);
L_088ed084:
    { c->r[31] = 0x088ed08cu; c->r[16] = mem_r32(ram, c->r[30] + 0x00000000u); func_088dec20(c, ram); }
    c->f[1] = c->f[0];
    c->f[0] = mem_rf32(ram, c->r[16] + 0x00000020u);
    alx_c_cond_s(c, 12, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_088ed0ac; }
    { goto L_088ed0b8; }
L_088ed0ac:
    { c->r[31] = 0x088ed0b4u; c->r[16] = mem_r32(ram, c->r[30] + 0x00000000u); func_088dec20(c, ram); }
    mem_wf32(ram, c->r[16] + 0x00000020u, c->f[0]);
L_088ed0b8:
    { c->r[31] = 0x088ed0c0u; c->r[16] = mem_r32(ram, c->r[30] + 0x00000000u); func_088decc4(c, ram); }
    c->f[1] = c->f[0];
    c->f[0] = mem_rf32(ram, c->r[16] + 0x00000028u);
    alx_c_cond_s(c, 12, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_088ed0e0; }
    { goto L_088ed0ec; }
L_088ed0e0:
    { c->r[31] = 0x088ed0e8u; c->r[16] = mem_r32(ram, c->r[30] + 0x00000000u); func_088decc4(c, ram); }
    mem_wf32(ram, c->r[16] + 0x00000028u, c->f[0]);
L_088ed0ec:
    { c->r[31] = 0x088ed0f4u; c->r[16] = mem_r32(ram, c->r[30] + 0x00000000u); func_088ded10(c, ram); }
    c->f[1] = c->f[0];
    c->f[0] = mem_rf32(ram, c->r[16] + 0x00000028u);
    alx_c_cond_s(c, 12, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_088ed114; }
    { goto L_088ed120; }
L_088ed114:
    { c->r[31] = 0x088ed11cu; c->r[16] = mem_r32(ram, c->r[30] + 0x00000000u); func_088ded10(c, ram); }
    mem_wf32(ram, c->r[16] + 0x00000028u, c->f[0]);
L_088ed120:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000028u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000024u);
    c->r[16] = mem_r32(ram, c->r[29] + 0x00000020u);
    { c->r[29] = c->r[29] + 0x00000030u; return; }
    return; /* fell out of func_088ecf00 */
}

/* func_088f45d4  0x088f45d4..0x088f46d4  256 bytes, source=sweep */
void func_088f45d4(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x088f45d4u);
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
    return; /* fell out of func_088f45d4 */
}

/* func_088f8450  0x088f8450..0x088f86cc  636 bytes, source=fde */
void func_088f8450(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x088f8450u);
    c->r[29] = c->r[29] + 0xffffffd0u;
    mem_w32(ram, c->r[29] + 0x00000024u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000020u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[6]);
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[7]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x000000d4u);
    c->r[2] = 0x00020000u;
    c->r[2] = c->r[3] & c->r[2];
    { int _c = (c->r[2] == 0u); if (_c) goto L_088f8668; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000005u);
    c->r[3] = c->r[2] << 1;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r16(ram, c->r[2] + 0x00000000u);
    mem_w16(ram, c->r[30] + 0x00000014u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = mem_r16(ram, c->r[2] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000001u;
    mem_w16(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[3] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x00000000u);
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[30] + 0x00000014u);
    c->r[2] = ((s32)c->r[2] < (s32)c->r[3]) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_088f854c; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    mem_w16(ram, c->r[2] + 0x00000000u, 0u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000005u);
    c->r[2] = c->r[2] + 0x00000001u;
    mem_w8(ram, c->r[3] + 0x00000005u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000005u);
    c->r[2] = 0u + 0x00000010u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_088f8510; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    mem_w8(ram, c->r[2] + 0x00000005u, 0u);
L_088f8510:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000005u);
    c->r[2] = c->r[2] & 0x0001u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_088f8538; }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x088f8530u; c->r[5] = mem_r32(ram, c->r[30] + 0x00000004u); func_088f7f5c(c, ram); }
    { goto L_088f854c; }
L_088f8538:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[3] = 0u + 0x00000001u;
    mem_w8(ram, c->r[2] + 0x00000006u, c->r[3]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    mem_w8(ram, c->r[2] + 0x00000007u, 0u);
L_088f854c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000005u);
    c->r[2] = c->r[2] & 0x0001u;
    c->r[2] = c->r[2] & 0x00ffu;
    { int _c = (c->r[2] == 0u); if (_c) goto L_088f86b8; }
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
    c->r[2] = 0xffbf0000u;
    c->r[2] = c->r[2] | 0xffffu;
    c->r[2] = c->r[3] & c->r[2];
    mem_w32(ram, c->r[4] + 0x0000008cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[3] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x00000000u);
    c->r[2] = 0u + 0x00000008u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_088f85d0; }
    c->r[2] = 0u + 0x00000001u;
    c->r[1] = 0x08a80000u;
    mem_w32(ram, c->r[1] + 0xffffbf20u, c->r[2]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = 0u + 0x0000000fu;
    c->r[6] = 0u + 0u;
    { c->r[31] = 0x088f85d0u; c->r[7] = 0u + 0u; func_0884f888(c, ram); }
L_088f85d0:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000006u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_088f862c; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000007u);
    c->r[2] = c->r[2] + 0x00000001u;
    mem_w8(ram, c->r[3] + 0x00000007u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000007u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000022u);
    c->r[2] = ((s32)c->r[3] < (s32)c->r[2]) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_088f86b8; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000022u);
    mem_w8(ram, c->r[3] + 0x00000007u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    { mem_w8(ram, c->r[2] + 0x00000006u, 0u); goto L_088f86b8; }
L_088f862c:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000007u);
    c->r[2] = c->r[2] + 0xffffffffu;
    mem_w8(ram, c->r[3] + 0x00000007u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000007u);
    { int _c = ((s32)c->r[2] > 0); if (_c) goto L_088f86b8; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    mem_w8(ram, c->r[2] + 0x00000007u, 0u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = 0u + 0x00000001u;
    { mem_w8(ram, c->r[3] + 0x00000006u, c->r[2]); goto L_088f86b8; }
L_088f8668:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x088f8674u; c->r[5] = mem_r32(ram, c->r[30] + 0x00000004u); func_088f803c(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    mem_w16(ram, c->r[2] + 0x00000000u, 0u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = 0u + 0x00000064u;
    mem_w8(ram, c->r[3] + 0x00000007u, c->r[2]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x000000b2u);
    c->r[3] = c->r[2] << 1;
    c->r[2] = (u32)((s32)c->r[3] >> 31);
    c->r[2] = c->r[2] >> 29;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = (u32)((s32)c->r[2] >> 3);
    c->r[2] = c->r[2] << 3;
    c->r[2] = c->r[3] - c->r[2];
    c->r[2] = c->r[2] + 0x00000001u;
    mem_w8(ram, c->r[4] + 0x00000005u, c->r[2]);
L_088f86b8:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000024u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000020u);
    { c->r[29] = c->r[29] + 0x00000030u; return; }
    return; /* fell out of func_088f8450 */
}

/* func_088fd554  0x088fd554..0x088fd788  564 bytes, source=fde */
void func_088fd554(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x088fd554u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 3;
    c->r[2] = 0x08aa0000u;
    c->r[2] = c->r[2] + 0xffffee84u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[4] = 0x08aa0000u;
    c->r[4] = c->r[4] + 0xfffff288u;
    c->r[5] = 0x08a40000u;
    c->r[5] = c->r[5] + 0x00006388u;
    { c->r[31] = 0x088fd5a0u; c->r[6] = mem_r32(ram, c->r[2] + 0x00000000u); func_08a1ad34(c, ram); }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 3;
    c->r[2] = 0x08aa0000u;
    c->r[2] = c->r[2] + 0xffffee84u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000004u);
    c->r[3] = 0x08aa0000u;
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[3] + 0xfffff2bdu);
    c->r[4] = 0x08aa0000u;
    c->r[4] = c->r[4] + 0xfffff294u;
    c->r[5] = 0x08a40000u;
    c->r[5] = c->r[5] + 0x00006394u;
    c->r[6] = c->r[2] + 0u;
    { c->r[31] = 0x088fd5e8u; c->r[7] = c->r[3] + 0u; func_08a1ad34(c, ram); }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 3;
    c->r[2] = 0x08aa0000u;
    c->r[2] = c->r[2] + 0xffffee84u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000004u);
    c->r[3] = 0x08aa0000u;
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[3] + 0xfffff2bdu);
    c->r[4] = 0x08aa0000u;
    c->r[4] = c->r[4] + 0xfffff29eu;
    c->r[5] = 0x08a40000u;
    c->r[5] = c->r[5] + 0x00006394u;
    c->r[6] = c->r[2] + 0u;
    { c->r[31] = 0x088fd630u; c->r[7] = c->r[3] + 0u; func_08a1ad34(c, ram); }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 3;
    c->r[2] = 0x08aa0000u;
    c->r[2] = c->r[2] + 0xffffee84u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000006u);
    c->r[3] = 0x08aa0000u;
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[3] + 0xfffff2bdu);
    c->r[4] = 0x08aa0000u;
    c->r[4] = c->r[4] + 0xfffff2a8u;
    c->r[5] = 0x08a40000u;
    c->r[5] = c->r[5] + 0x00006394u;
    c->r[6] = c->r[2] + 0u;
    { c->r[31] = 0x088fd678u; c->r[7] = c->r[3] + 0u; func_08a1ad34(c, ram); }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 3;
    c->r[2] = 0x08aa0000u;
    c->r[2] = c->r[2] + 0xffffee84u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000007u);
    c->r[3] = 0x08aa0000u;
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[3] + 0xfffff2bdu);
    c->r[4] = 0x08aa0000u;
    c->r[4] = c->r[4] + 0xfffff2b2u;
    c->r[5] = 0x08a40000u;
    c->r[5] = c->r[5] + 0x00006394u;
    c->r[6] = c->r[2] + 0u;
    { c->r[31] = 0x088fd6c0u; c->r[7] = c->r[3] + 0u; func_08a1ad34(c, ram); }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
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
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
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
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
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
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
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
    c->r[2] = 0u + 0x00000001u;
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_088fd554 */
}

/* func_089018e8  0x089018e8..0x08901a10  296 bytes, source=fde */
void func_089018e8(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089018e8u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_08901914; }
    { goto L_089019fc; }
L_08901914:
    c->r[3] = 0x08aa0000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0xfffff4c0u);
    c->r[2] = 0u + 0x00000001u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_08901938; }
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x0000651cu);
    c->r[1] = 0x08aa0000u;
    mem_wf32(ram, c->r[1] + 0xfffff528u, c->f[0]);
L_08901938:
    c->r[2] = 0x08aa0000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0xfffff4c0u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000002u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_089019fc; }
    c->r[1] = 0x08a80000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0x00002e40u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00006520u);
    c->f[1] = c->f[1] * c->f[0];
    c->r[1] = 0x08aa0000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xfffff528u);
    c->f[0] = c->f[0] - c->f[1];
    c->r[1] = 0x08aa0000u;
    mem_wf32(ram, c->r[1] + 0xfffff528u, c->f[0]);
    c->r[1] = 0x08aa0000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0xfffff528u);
    c->f[0] = u2f(0u);
    alx_c_cond_s(c, 12, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_08901998; }
    { goto L_089019a8; }
L_08901998:
    c->r[1] = 0x08aa0000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xfffff528u);
    { mem_wf32(ram, c->r[30] + 0x00000008u, c->f[0]); goto L_089019ac; }
L_089019a8:
    mem_w32(ram, c->r[30] + 0x00000008u, 0u);
L_089019ac:
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000008u);
    c->r[1] = 0x08aa0000u;
    mem_wf32(ram, c->r[1] + 0xfffff528u, c->f[0]);
    c->r[1] = 0x08aa0000u;
    { c->r[31] = 0x089019c4u; c->f[12] = mem_rf32(ram, c->r[1] + 0xfffff528u); func_08a136f8(c, ram); }
    c->r[4] = c->r[2] + 0u;
    c->r[5] = c->r[3] + 0u;
    c->r[6] = 0u + 0u;
    { c->r[31] = 0x089019d8u; c->r[7] = 0u + 0u; func_08a14104(c, ram); }
    { int _c = (c->r[2] == 0u); if (_c) goto L_089019e8; }
    { goto L_089019fc; }
L_089019e8:
    c->r[4] = 0x08aa0000u;
    c->r[4] = c->r[4] + 0xfffff4c0u;
    c->r[5] = 0x08900000u;
    { c->r[31] = 0x089019fcu; c->r[5] = c->r[5] + 0x00002cacu; func_0880f03c(c, ram); }
L_089019fc:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_089018e8 */
}

/* func_08903f2c  0x08903f2c..0x089042ac  896 bytes, source=fde */
void func_08903f2c(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08903f2cu);
    c->r[29] = c->r[29] + 0xffffffa0u;
    mem_w32(ram, c->r[29] + 0x00000054u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000050u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[5]);
    mem_w32(ram, c->r[30] + 0x00000018u, c->r[6]);
    c->r[3] = c->r[7] + 0u;
    mem_w32(ram, c->r[30] + 0x00000020u, c->r[8]);
    mem_w32(ram, c->r[30] + 0x00000024u, c->r[9]);
    c->r[2] = c->r[10] + 0u;
    mem_w8(ram, c->r[30] + 0x0000001cu, c->r[3]);
    mem_w8(ram, c->r[30] + 0x00000028u, c->r[2]);
    c->r[4] = 0x08aa0000u;
    c->r[4] = c->r[4] + 0xfffff540u;
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000010u);
    { c->r[31] = 0x08903f74u; c->r[6] = mem_r32(ram, c->r[30] + 0x00000020u); func_0880ef80(c, ram); }
    mem_w32(ram, c->r[30] + 0x0000002cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000002cu);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000002cu);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000024u);
    c->f[0] = mem_rf32(ram, c->r[3] + 0x00000004u);
    c->f[1] = c->f[1] - c->f[0];
    mem_wf32(ram, c->r[30] + 0x00000038u, c->f[1]);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00006604u);
    mem_wf32(ram, c->r[30] + 0x00000040u, c->f[0]);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000038u);
    c->f[2] = mem_rf32(ram, c->r[30] + 0x00000040u);
    alx_c_cond_s(c, 14, c->f[2], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_08903fc4; }
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000038u);
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    { mem_wf32(ram, c->r[30] + 0x0000003cu, c->f[0]); goto L_08903fe8; }
L_08903fc4:
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000038u);
    c->f[2] = mem_rf32(ram, c->r[30] + 0x00000040u);
    c->f[0] = c->f[1] - c->f[2];
    c->r[2] = 0x80000000u;
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    mem_wf32(ram, c->r[30] + 0x0000003cu, c->f[0]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000003cu);
    c->r[3] = c->r[3] | c->r[2];
    mem_w32(ram, c->r[30] + 0x0000003cu, c->r[3]);
L_08903fe8:
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000003cu);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] + 0xfffffff9u;
    mem_w8(ram, c->r[30] + 0x00000030u, c->r[2]);
    mem_w32(ram, c->r[30] + 0x00000034u, 0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000024u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_0890417c; }
    c->r[3] = mem_r8(ram, c->r[30] + 0x0000001cu);
    c->r[2] = 0u + 0x00000001u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_089040dc; }
    c->r[5] = mem_r8(ram, c->r[30] + 0x00000030u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000002cu);
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000041u);
    c->r[2] = c->r[2] + 0x00000001u;
    c->r[2] = c->r[2] << 24;
    c->r[7] = (u32)((s32)c->r[2] >> 24);
    c->r[4] = mem_r32(ram, c->r[30] + 0x0000002cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000002cu);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000002cu);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000020u);
    c->f[0] = mem_rf32(ram, c->r[3] + 0x00000000u);
    c->f[1] = c->f[1] - c->f[0];
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00006608u);
    c->f[1] = c->f[1] / c->f[0];
    c->f[0] = mem_rf32(ram, c->r[4] + 0x00000000u);
    c->f[1] = c->f[1] + c->f[0];
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000024u);
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x00000000u);
    c->f[0] = u2f(c->r[2]);
    c->f[0] = (f32)(s32)f2u(c->f[0]);
    c->f[0] = c->f[1] + c->f[0];
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    c->r[2] = f2u(c->f[0]);
    c->r[2] = c->r[2] << 16;
    c->r[8] = (u32)((s32)c->r[2] >> 16);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000002cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000024u);
    c->r[2] = c->r[2] + 0x00000002u;
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x00000000u);
    c->f[0] = u2f(c->r[2]);
    c->f[1] = (f32)(s32)f2u(c->f[0]);
    c->f[0] = mem_rf32(ram, c->r[3] + 0x00000004u);
    c->f[0] = c->f[1] + c->f[0];
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    c->r[2] = f2u(c->f[0]);
    c->r[2] = c->r[2] << 16;
    c->r[3] = (u32)((s32)c->r[2] >> 16);
    c->r[10] = mem_r8(ram, c->r[30] + 0x00000028u);
    c->r[11] = mem_r8(ram, c->r[30] + 0x0000001cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    mem_w32(ram, c->r[29] + 0x00000000u, c->r[2]);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00002dfcu;
    c->r[6] = mem_r32(ram, c->r[30] + 0x00000014u);
    { c->r[31] = 0x089040d4u; c->r[9] = c->r[3] + 0u; func_089ce998(c, ram); }
    { goto L_08904290; }
L_089040dc:
    c->r[5] = mem_r8(ram, c->r[30] + 0x00000030u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000002cu);
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000041u);
    c->r[2] = c->r[2] + 0x00000001u;
    c->r[2] = c->r[2] << 24;
    c->r[7] = (u32)((s32)c->r[2] >> 24);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000002cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000024u);
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x00000000u);
    c->f[0] = u2f(c->r[2]);
    c->f[1] = (f32)(s32)f2u(c->f[0]);
    c->f[0] = mem_rf32(ram, c->r[3] + 0x00000000u);
    c->f[0] = c->f[1] + c->f[0];
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    c->r[2] = f2u(c->f[0]);
    c->r[2] = c->r[2] << 16;
    c->r[8] = (u32)((s32)c->r[2] >> 16);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000002cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000024u);
    c->r[2] = c->r[2] + 0x00000002u;
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x00000000u);
    c->f[0] = u2f(c->r[2]);
    c->f[1] = (f32)(s32)f2u(c->f[0]);
    c->f[0] = mem_rf32(ram, c->r[3] + 0x00000004u);
    c->f[0] = c->f[1] + c->f[0];
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    c->r[2] = f2u(c->f[0]);
    c->r[2] = c->r[2] << 16;
    c->r[3] = (u32)((s32)c->r[2] >> 16);
    c->r[10] = mem_r8(ram, c->r[30] + 0x00000028u);
    c->r[11] = mem_r8(ram, c->r[30] + 0x0000001cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    mem_w32(ram, c->r[29] + 0x00000000u, c->r[2]);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00002dfcu;
    c->r[6] = mem_r32(ram, c->r[30] + 0x00000014u);
    { c->r[31] = 0x08904174u; c->r[9] = c->r[3] + 0u; func_089ce998(c, ram); }
    { goto L_08904290; }
L_0890417c:
    c->r[3] = mem_r8(ram, c->r[30] + 0x0000001cu);
    c->r[2] = 0u + 0x00000001u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_08904224; }
    c->r[5] = mem_r8(ram, c->r[30] + 0x00000030u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000002cu);
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000041u);
    c->r[2] = c->r[2] + 0x00000001u;
    c->r[2] = c->r[2] << 24;
    c->r[7] = (u32)((s32)c->r[2] >> 24);
    c->r[4] = mem_r32(ram, c->r[30] + 0x0000002cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000002cu);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000002cu);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000020u);
    c->f[0] = mem_rf32(ram, c->r[3] + 0x00000000u);
    c->f[1] = c->f[1] - c->f[0];
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00006608u);
    c->f[1] = c->f[1] / c->f[0];
    c->f[0] = mem_rf32(ram, c->r[4] + 0x00000000u);
    c->f[0] = c->f[1] + c->f[0];
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    c->r[2] = f2u(c->f[0]);
    c->r[2] = c->r[2] << 16;
    c->r[8] = (u32)((s32)c->r[2] >> 16);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000002cu);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000004u);
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    c->r[2] = f2u(c->f[0]);
    c->r[2] = c->r[2] << 16;
    c->r[3] = (u32)((s32)c->r[2] >> 16);
    c->r[10] = mem_r8(ram, c->r[30] + 0x00000028u);
    c->r[11] = mem_r8(ram, c->r[30] + 0x0000001cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    mem_w32(ram, c->r[29] + 0x00000000u, c->r[2]);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00002dfcu;
    c->r[6] = mem_r32(ram, c->r[30] + 0x00000014u);
    { c->r[31] = 0x0890421cu; c->r[9] = c->r[3] + 0u; func_089ce998(c, ram); }
    { goto L_08904290; }
L_08904224:
    c->r[5] = mem_r8(ram, c->r[30] + 0x00000030u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000002cu);
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000041u);
    c->r[2] = c->r[2] + 0x00000001u;
    c->r[2] = c->r[2] << 24;
    c->r[7] = (u32)((s32)c->r[2] >> 24);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000002cu);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000000u);
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    c->r[2] = f2u(c->f[0]);
    c->r[2] = c->r[2] << 16;
    c->r[8] = (u32)((s32)c->r[2] >> 16);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000002cu);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000004u);
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    c->r[2] = f2u(c->f[0]);
    c->r[2] = c->r[2] << 16;
    c->r[3] = (u32)((s32)c->r[2] >> 16);
    c->r[10] = mem_r8(ram, c->r[30] + 0x00000028u);
    c->r[11] = mem_r8(ram, c->r[30] + 0x0000001cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    mem_w32(ram, c->r[29] + 0x00000000u, c->r[2]);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00002dfcu;
    c->r[6] = mem_r32(ram, c->r[30] + 0x00000014u);
    { c->r[31] = 0x08904290u; c->r[9] = c->r[3] + 0u; func_089ce998(c, ram); }
L_08904290:
    { c->r[31] = 0x08904298u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000018u); func_0890352c(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000054u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000050u);
    { c->r[29] = c->r[29] + 0x00000060u; return; }
    return; /* fell out of func_08903f2c */
}

/* func_0890c51c  0x0890c51c..0x0890d188  3180 bytes, source=fde */
void func_0890c51c(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0890c51cu);
    c->r[29] = c->r[29] + 0xfffffee0u;
    mem_w32(ram, c->r[29] + 0x00000114u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000110u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[6]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[2] = c->r[2] & 0x0001u;
    c->r[2] = c->r[2] & 0x00ffu;
    { int _c = (c->r[2] == 0u); if (_c) goto L_0890c558; }
    { goto L_0890d174; }
L_0890c558:
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x0890c564u; c->r[4] = c->r[4] + 0x00000af4u; func_0880810c(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = 0u + 0x00000001u;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_0890c57c; }
    { goto L_0890d174; }
L_0890c57c:
    c->r[2] = 0x08a90000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0xffffba0cu);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000ac8u;
    { c->r[31] = 0x0890c594u; c->r[5] = c->r[2] + 0u; func_089cb820(c, ram); }
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    { int _c = (c->r[2] != 0u); if (_c) goto L_0890c5ac; }
    { goto L_0890d174; }
L_0890c5ac:
    c->r[2] = c->r[30] + 0x00000010u;
    { c->r[31] = 0x0890c5b8u; c->r[4] = c->r[2] + 0u; func_08808260(c, ram); }
    c->r[2] = c->r[30] + 0x00000010u;
    c->r[4] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[5] = 0x08a40000u;
    c->r[5] = c->r[5] + 0x0000675cu;
    { c->r[31] = 0x0890c5d0u; c->r[6] = c->r[2] + 0u; func_089b9940(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000050u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000040u);
    mem_w32(ram, c->r[30] + 0x00000060u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000044u);
    mem_w32(ram, c->r[30] + 0x00000064u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000048u);
    mem_w32(ram, c->r[30] + 0x00000068u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000004cu);
    mem_w32(ram, c->r[30] + 0x0000006cu, c->r[2]);
    c->r[2] = c->r[30] + 0x00000010u;
    c->r[4] = 0x08a80000u;
    c->r[4] = mem_r32(ram, c->r[4] + 0x00002ed8u);
    c->r[5] = 0x08a40000u;
    c->r[5] = c->r[5] + 0x00006764u;
    { c->r[31] = 0x0890c610u; c->r[6] = c->r[2] + 0u; func_089b9940(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000050u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000040u);
    mem_w32(ram, c->r[30] + 0x00000070u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000044u);
    mem_w32(ram, c->r[30] + 0x00000074u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000048u);
    mem_w32(ram, c->r[30] + 0x00000078u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000004cu);
    mem_w32(ram, c->r[30] + 0x0000007cu, c->r[2]);
    c->r[2] = c->r[30] + 0x00000080u;
    mem_w32(ram, c->r[30] + 0x000000c0u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000c0u);
    mem_w32(ram, c->r[30] + 0x000000c4u, c->r[2]);
    c->r[2] = 0u + 0x00000003u;
    mem_w32(ram, c->r[30] + 0x000000c8u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x000000c8u);
    c->r[2] = 0u + 0xffffffffu;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_0890c68c; }
L_0890c65c:
    { c->r[31] = 0x0890c664u; c->r[4] = mem_r32(ram, c->r[30] + 0x000000c4u); func_08808240(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000c4u);
    c->r[2] = c->r[2] + 0x00000010u;
    mem_w32(ram, c->r[30] + 0x000000c4u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000c8u);
    c->r[2] = c->r[2] + 0xffffffffu;
    c->r[3] = c->r[2] + 0u;
    mem_w32(ram, c->r[30] + 0x000000c8u, c->r[3]);
    c->r[2] = 0u + 0xffffffffu;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_0890c65c; }
L_0890c68c:
    c->r[2] = c->r[30] + 0x000000d0u;
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x0000676cu);
    c->r[1] = 0x08a40000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0x00006770u);
    c->r[1] = 0x08a40000u;
    c->f[2] = mem_rf32(ram, c->r[1] + 0x00006774u);
    c->r[1] = 0x08a40000u;
    c->f[3] = mem_rf32(ram, c->r[1] + 0x00006778u);
    c->r[4] = c->r[2] + 0u;
    c->f[12] = c->f[0];
    c->f[13] = c->f[1];
    c->f[14] = c->f[2];
    { c->r[31] = 0x0890c6c8u; c->f[15] = c->f[3]; func_0880d140(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000d0u);
    mem_w32(ram, c->r[30] + 0x00000080u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000d4u);
    mem_w32(ram, c->r[30] + 0x00000084u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000d8u);
    mem_w32(ram, c->r[30] + 0x00000088u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000dcu);
    mem_w32(ram, c->r[30] + 0x0000008cu, c->r[2]);
    c->r[2] = c->r[30] + 0x000000d0u;
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x0000676cu);
    c->r[1] = 0x08a40000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0x0000677cu);
    c->r[1] = 0x08a40000u;
    c->f[2] = mem_rf32(ram, c->r[1] + 0x00006780u);
    c->r[1] = 0x08a40000u;
    c->f[3] = mem_rf32(ram, c->r[1] + 0x00006778u);
    c->r[4] = c->r[2] + 0u;
    c->f[12] = c->f[0];
    c->f[13] = c->f[1];
    c->f[14] = c->f[2];
    { c->r[31] = 0x0890c724u; c->f[15] = c->f[3]; func_0880d140(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000d0u);
    mem_w32(ram, c->r[30] + 0x00000090u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000d4u);
    mem_w32(ram, c->r[30] + 0x00000094u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000d8u);
    mem_w32(ram, c->r[30] + 0x00000098u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000dcu);
    mem_w32(ram, c->r[30] + 0x0000009cu, c->r[2]);
    c->r[4] = 0u + 0x00000024u;
    { c->r[31] = 0x0890c750u; c->r[5] = 0u + 0x00000010u; func_0881a1d4(c, ram); }
    mem_w32(ram, c->r[30] + 0x000000d0u, c->r[2]);
    c->r[4] = 0u + 0x00000024u;
    { c->r[31] = 0x0890c760u; c->r[5] = 0u + 0x00000010u; func_0881a1d4(c, ram); }
    mem_w32(ram, c->r[30] + 0x000000d4u, c->r[2]);
    c->r[2] = c->r[30] + 0x000000e0u;
    c->r[3] = c->r[30] + 0x00000060u;
    c->r[6] = c->r[30] + 0x00000070u;
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x0890c77cu; c->r[5] = c->r[3] + 0u; func_0884c07c(c, ram); }
    c->r[2] = c->r[30] + 0x000000e0u;
    { c->r[31] = 0x0890c788u; c->r[4] = c->r[2] + 0u; func_08820c6c(c, ram); }
    c->f[1] = c->f[0];
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00006784u);
    c->f[1] = c->f[1] * c->f[0];
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00006788u);
    c->f[0] = c->f[1] - c->f[0];
    mem_wf32(ram, c->r[30] + 0x000000f0u, c->f[0]);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x000000f0u);
    c->f[0] = u2f(0u);
    alx_c_cond_s(c, 12, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_0890c7c8; }
    { goto L_0890c7cc; }
L_0890c7c8:
    mem_w32(ram, c->r[30] + 0x000000f0u, 0u);
L_0890c7cc:
    c->f[1] = mem_rf32(ram, c->r[30] + 0x000000f0u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x0000678cu);
    alx_c_cond_s(c, 12, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_0890c7f0; }
    { goto L_0890c820; }
L_0890c7f0:
    c->f[1] = mem_rf32(ram, c->r[30] + 0x000000f0u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00006790u);
    c->f[1] = c->f[1] * c->f[0];
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00006794u);
    c->f[1] = c->f[1] * c->f[0];
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00006798u);
    c->f[0] = c->f[0] - c->f[1];
    { mem_wf32(ram, c->r[30] + 0x000000f0u, c->f[0]); goto L_0890c82c; }
L_0890c820:
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x0000679cu);
    mem_wf32(ram, c->r[30] + 0x000000f0u, c->f[0]);
L_0890c82c:
    c->r[1] = 0x08a90000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffffba3cu);
    mem_wf32(ram, c->r[30] + 0x000000e0u, c->f[0]);
    c->r[1] = 0x08a90000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffffba50u);
    mem_wf32(ram, c->r[30] + 0x000000e4u, c->f[0]);
    c->r[2] = c->r[30] + 0x00000100u;
    c->f[1] = mem_rf32(ram, c->r[30] + 0x000000e4u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x000000f0u);
    c->f[2] = c->f[1] - c->f[0];
    c->f[1] = mem_rf32(ram, c->r[30] + 0x000000e0u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x000000f0u);
    c->f[0] = c->f[1] - c->f[0];
    c->r[4] = c->r[2] + 0u;
    c->f[12] = mem_rf32(ram, c->r[30] + 0x000000e0u);
    c->f[13] = c->f[2];
    c->f[14] = c->f[0];
    { c->r[31] = 0x0890c878u; c->f[15] = mem_rf32(ram, c->r[30] + 0x000000e4u); func_0880d140(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000100u);
    mem_w32(ram, c->r[30] + 0x000000a0u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000104u);
    mem_w32(ram, c->r[30] + 0x000000a4u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000108u);
    mem_w32(ram, c->r[30] + 0x000000a8u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000010cu);
    mem_w32(ram, c->r[30] + 0x000000acu, c->r[2]);
    c->r[2] = c->r[30] + 0x00000100u;
    c->f[1] = mem_rf32(ram, c->r[30] + 0x000000e4u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x000000f0u);
    c->f[2] = c->f[1] + c->f[0];
    c->f[1] = mem_rf32(ram, c->r[30] + 0x000000e0u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x000000f0u);
    c->f[0] = c->f[1] + c->f[0];
    c->r[4] = c->r[2] + 0u;
    c->f[12] = mem_rf32(ram, c->r[30] + 0x000000e0u);
    c->f[13] = c->f[2];
    c->f[14] = c->f[0];
    { c->r[31] = 0x0890c8ccu; c->f[15] = mem_rf32(ram, c->r[30] + 0x000000e4u); func_0880d140(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000100u);
    mem_w32(ram, c->r[30] + 0x000000b0u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000104u);
    mem_w32(ram, c->r[30] + 0x000000b4u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000108u);
    mem_w32(ram, c->r[30] + 0x000000b8u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000010cu);
    mem_w32(ram, c->r[30] + 0x000000bcu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x0890c8f8u; c->r[4] = mem_r32(ram, c->r[2] + 0x00000008u); func_089035ac(c, ram); }
    c->r[4] = mem_r32(ram, c->r[30] + 0x000000d0u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x000000a0u);
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    c->r[3] = f2u(c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r16(ram, c->r[2] + 0x0000000cu);
    c->r[2] = c->r[3] - c->r[2];
    c->r[2] = c->r[2] + 0xffffffffu;
    mem_w16(ram, c->r[4] + 0x00000000u, c->r[2]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x000000d0u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x000000a4u);
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    c->r[3] = f2u(c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r16(ram, c->r[2] + 0x0000000eu);
    c->r[2] = c->r[3] - c->r[2];
    mem_w16(ram, c->r[4] + 0x00000002u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000d0u);
    c->r[4] = c->r[2] + 0x00000006u;
    c->f[0] = mem_rf32(ram, c->r[30] + 0x000000a0u);
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    c->r[3] = f2u(c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r16(ram, c->r[2] + 0x0000000cu);
    c->r[2] = c->r[3] - c->r[2];
    c->r[2] = c->r[2] + 0x00000001u;
    mem_w16(ram, c->r[4] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000d0u);
    c->r[4] = c->r[2] + 0x00000006u;
    c->f[0] = mem_rf32(ram, c->r[30] + 0x000000a4u);
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    c->r[3] = f2u(c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r16(ram, c->r[2] + 0x0000000eu);
    c->r[2] = c->r[3] - c->r[2];
    mem_w16(ram, c->r[4] + 0x00000002u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000d0u);
    c->r[4] = c->r[2] + 0x0000000cu;
    c->f[0] = mem_rf32(ram, c->r[30] + 0x000000a8u);
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    c->r[3] = f2u(c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r16(ram, c->r[2] + 0x0000000cu);
    c->r[2] = c->r[3] - c->r[2];
    c->r[2] = c->r[2] + 0xffffffffu;
    mem_w16(ram, c->r[4] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000d0u);
    c->r[4] = c->r[2] + 0x0000000cu;
    c->f[0] = mem_rf32(ram, c->r[30] + 0x000000acu);
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    c->r[3] = f2u(c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r16(ram, c->r[2] + 0x0000000eu);
    c->r[2] = c->r[3] - c->r[2];
    mem_w16(ram, c->r[4] + 0x00000002u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000d0u);
    c->r[4] = c->r[2] + 0x00000012u;
    c->f[0] = mem_rf32(ram, c->r[30] + 0x000000a8u);
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    c->r[3] = f2u(c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r16(ram, c->r[2] + 0x0000000cu);
    c->r[2] = c->r[3] - c->r[2];
    c->r[2] = c->r[2] + 0x00000001u;
    mem_w16(ram, c->r[4] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000d0u);
    c->r[4] = c->r[2] + 0x00000012u;
    c->f[0] = mem_rf32(ram, c->r[30] + 0x000000acu);
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    c->r[3] = f2u(c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r16(ram, c->r[2] + 0x0000000eu);
    c->r[2] = c->r[3] - c->r[2];
    mem_w16(ram, c->r[4] + 0x00000002u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000d0u);
    c->r[4] = c->r[2] + 0x00000018u;
    c->f[0] = mem_rf32(ram, c->r[30] + 0x000000b0u);
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    c->r[3] = f2u(c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r16(ram, c->r[2] + 0x0000000cu);
    c->r[2] = c->r[3] - c->r[2];
    c->r[2] = c->r[2] + 0xffffffffu;
    mem_w16(ram, c->r[4] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000d0u);
    c->r[4] = c->r[2] + 0x00000018u;
    c->f[0] = mem_rf32(ram, c->r[30] + 0x000000b4u);
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    c->r[3] = f2u(c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r16(ram, c->r[2] + 0x0000000eu);
    c->r[2] = c->r[3] - c->r[2];
    mem_w16(ram, c->r[4] + 0x00000002u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000d0u);
    c->r[4] = c->r[2] + 0x0000001eu;
    c->f[0] = mem_rf32(ram, c->r[30] + 0x000000b0u);
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    c->r[3] = f2u(c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r16(ram, c->r[2] + 0x0000000cu);
    c->r[2] = c->r[3] - c->r[2];
    c->r[2] = c->r[2] + 0x00000001u;
    mem_w16(ram, c->r[4] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000d0u);
    c->r[4] = c->r[2] + 0x0000001eu;
    c->f[0] = mem_rf32(ram, c->r[30] + 0x000000b4u);
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    c->r[3] = f2u(c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r16(ram, c->r[2] + 0x0000000eu);
    c->r[2] = c->r[3] - c->r[2];
    mem_w16(ram, c->r[4] + 0x00000002u, c->r[2]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x000000d4u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x000000a0u);
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    c->r[3] = f2u(c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r16(ram, c->r[2] + 0x0000000cu);
    c->r[2] = c->r[3] - c->r[2];
    c->r[2] = c->r[2] + 0xffffffffu;
    mem_w16(ram, c->r[4] + 0x00000000u, c->r[2]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x000000d4u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x000000a4u);
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    c->r[3] = f2u(c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r16(ram, c->r[2] + 0x0000000eu);
    c->r[2] = c->r[3] - c->r[2];
    mem_w16(ram, c->r[4] + 0x00000002u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000d4u);
    c->r[4] = c->r[2] + 0x00000006u;
    c->f[0] = mem_rf32(ram, c->r[30] + 0x000000a0u);
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    c->r[3] = f2u(c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r16(ram, c->r[2] + 0x0000000cu);
    c->r[2] = c->r[3] - c->r[2];
    c->r[2] = c->r[2] + 0x00000001u;
    mem_w16(ram, c->r[4] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000d4u);
    c->r[4] = c->r[2] + 0x00000006u;
    c->f[0] = mem_rf32(ram, c->r[30] + 0x000000a4u);
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    c->r[3] = f2u(c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r16(ram, c->r[2] + 0x0000000eu);
    c->r[2] = c->r[3] - c->r[2];
    mem_w16(ram, c->r[4] + 0x00000002u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000d4u);
    c->r[4] = c->r[2] + 0x0000000cu;
    c->f[0] = mem_rf32(ram, c->r[30] + 0x000000b8u);
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    c->r[3] = f2u(c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r16(ram, c->r[2] + 0x0000000cu);
    c->r[2] = c->r[3] - c->r[2];
    c->r[2] = c->r[2] + 0xffffffffu;
    mem_w16(ram, c->r[4] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000d4u);
    c->r[4] = c->r[2] + 0x0000000cu;
    c->f[0] = mem_rf32(ram, c->r[30] + 0x000000bcu);
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    c->r[3] = f2u(c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r16(ram, c->r[2] + 0x0000000eu);
    c->r[2] = c->r[3] - c->r[2];
    mem_w16(ram, c->r[4] + 0x00000002u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000d4u);
    c->r[4] = c->r[2] + 0x00000012u;
    c->f[0] = mem_rf32(ram, c->r[30] + 0x000000b8u);
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    c->r[3] = f2u(c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r16(ram, c->r[2] + 0x0000000cu);
    c->r[2] = c->r[3] - c->r[2];
    c->r[2] = c->r[2] + 0x00000001u;
    mem_w16(ram, c->r[4] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000d4u);
    c->r[4] = c->r[2] + 0x00000012u;
    c->f[0] = mem_rf32(ram, c->r[30] + 0x000000bcu);
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    c->r[3] = f2u(c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r16(ram, c->r[2] + 0x0000000eu);
    c->r[2] = c->r[3] - c->r[2];
    mem_w16(ram, c->r[4] + 0x00000002u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000d4u);
    c->r[4] = c->r[2] + 0x00000018u;
    c->f[0] = mem_rf32(ram, c->r[30] + 0x000000b0u);
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    c->r[3] = f2u(c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r16(ram, c->r[2] + 0x0000000cu);
    c->r[2] = c->r[3] - c->r[2];
    c->r[2] = c->r[2] + 0xffffffffu;
    mem_w16(ram, c->r[4] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000d4u);
    c->r[4] = c->r[2] + 0x00000018u;
    c->f[0] = mem_rf32(ram, c->r[30] + 0x000000b4u);
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    c->r[3] = f2u(c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r16(ram, c->r[2] + 0x0000000eu);
    c->r[2] = c->r[3] - c->r[2];
    mem_w16(ram, c->r[4] + 0x00000002u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000d4u);
    c->r[4] = c->r[2] + 0x0000001eu;
    c->f[0] = mem_rf32(ram, c->r[30] + 0x000000b0u);
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    c->r[3] = f2u(c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r16(ram, c->r[2] + 0x0000000cu);
    c->r[2] = c->r[3] - c->r[2];
    c->r[2] = c->r[2] + 0x00000001u;
    mem_w16(ram, c->r[4] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000d4u);
    c->r[4] = c->r[2] + 0x0000001eu;
    c->f[0] = mem_rf32(ram, c->r[30] + 0x000000b4u);
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    c->r[3] = f2u(c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r16(ram, c->r[2] + 0x0000000eu);
    c->r[2] = c->r[3] - c->r[2];
    mem_w16(ram, c->r[4] + 0x00000002u, c->r[2]);
    c->r[4] = 0u + 0x00000024u;
    { c->r[31] = 0x0890cc84u; c->r[5] = 0u + 0x00000010u; func_0881a1d4(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000100u, c->r[2]);
    c->r[4] = 0u + 0x00000024u;
    { c->r[31] = 0x0890cc94u; c->r[5] = 0u + 0x00000010u; func_0881a1d4(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000104u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x0890cca4u; c->r[4] = mem_r32(ram, c->r[2] + 0x00000008u); func_089035ac(c, ram); }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000100u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000080u);
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    c->r[3] = f2u(c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r16(ram, c->r[2] + 0x0000000cu);
    c->r[2] = c->r[3] - c->r[2];
    c->r[2] = c->r[2] + 0xffffffffu;
    mem_w16(ram, c->r[4] + 0x00000000u, c->r[2]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000100u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000084u);
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    c->r[3] = f2u(c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r16(ram, c->r[2] + 0x0000000eu);
    c->r[2] = c->r[3] - c->r[2];
    mem_w16(ram, c->r[4] + 0x00000002u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000100u);
    c->r[4] = c->r[2] + 0x00000006u;
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000080u);
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    c->r[3] = f2u(c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r16(ram, c->r[2] + 0x0000000cu);
    c->r[2] = c->r[3] - c->r[2];
    c->r[2] = c->r[2] + 0x00000001u;
    mem_w16(ram, c->r[4] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000100u);
    c->r[4] = c->r[2] + 0x00000006u;
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000084u);
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    c->r[3] = f2u(c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r16(ram, c->r[2] + 0x0000000eu);
    c->r[2] = c->r[3] - c->r[2];
    mem_w16(ram, c->r[4] + 0x00000002u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000100u);
    c->r[4] = c->r[2] + 0x0000000cu;
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000088u);
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    c->r[3] = f2u(c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r16(ram, c->r[2] + 0x0000000cu);
    c->r[2] = c->r[3] - c->r[2];
    c->r[2] = c->r[2] + 0xffffffffu;
    mem_w16(ram, c->r[4] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000100u);
    c->r[4] = c->r[2] + 0x0000000cu;
    c->f[0] = mem_rf32(ram, c->r[30] + 0x0000008cu);
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    c->r[3] = f2u(c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r16(ram, c->r[2] + 0x0000000eu);
    c->r[2] = c->r[3] - c->r[2];
    mem_w16(ram, c->r[4] + 0x00000002u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000100u);
    c->r[4] = c->r[2] + 0x00000012u;
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000088u);
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    c->r[3] = f2u(c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r16(ram, c->r[2] + 0x0000000cu);
    c->r[2] = c->r[3] - c->r[2];
    c->r[2] = c->r[2] + 0x00000001u;
    mem_w16(ram, c->r[4] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000100u);
    c->r[4] = c->r[2] + 0x00000012u;
    c->f[0] = mem_rf32(ram, c->r[30] + 0x0000008cu);
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    c->r[3] = f2u(c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r16(ram, c->r[2] + 0x0000000eu);
    c->r[2] = c->r[3] - c->r[2];
    mem_w16(ram, c->r[4] + 0x00000002u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000100u);
    c->r[4] = c->r[2] + 0x00000018u;
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000090u);
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    c->r[3] = f2u(c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r16(ram, c->r[2] + 0x0000000cu);
    c->r[2] = c->r[3] - c->r[2];
    c->r[2] = c->r[2] + 0xffffffffu;
    mem_w16(ram, c->r[4] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000100u);
    c->r[4] = c->r[2] + 0x00000018u;
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000094u);
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    c->r[3] = f2u(c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r16(ram, c->r[2] + 0x0000000eu);
    c->r[2] = c->r[3] - c->r[2];
    mem_w16(ram, c->r[4] + 0x00000002u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000100u);
    c->r[4] = c->r[2] + 0x0000001eu;
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000090u);
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    c->r[3] = f2u(c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r16(ram, c->r[2] + 0x0000000cu);
    c->r[2] = c->r[3] - c->r[2];
    c->r[2] = c->r[2] + 0x00000001u;
    mem_w16(ram, c->r[4] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000100u);
    c->r[4] = c->r[2] + 0x0000001eu;
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000094u);
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    c->r[3] = f2u(c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r16(ram, c->r[2] + 0x0000000eu);
    c->r[2] = c->r[3] - c->r[2];
    mem_w16(ram, c->r[4] + 0x00000002u, c->r[2]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000104u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000080u);
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    c->r[3] = f2u(c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r16(ram, c->r[2] + 0x0000000cu);
    c->r[2] = c->r[3] - c->r[2];
    c->r[2] = c->r[2] + 0xffffffffu;
    mem_w16(ram, c->r[4] + 0x00000000u, c->r[2]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000104u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000084u);
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    c->r[3] = f2u(c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r16(ram, c->r[2] + 0x0000000eu);
    c->r[2] = c->r[3] - c->r[2];
    mem_w16(ram, c->r[4] + 0x00000002u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000104u);
    c->r[4] = c->r[2] + 0x00000006u;
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000080u);
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    c->r[3] = f2u(c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r16(ram, c->r[2] + 0x0000000cu);
    c->r[2] = c->r[3] - c->r[2];
    c->r[2] = c->r[2] + 0x00000001u;
    mem_w16(ram, c->r[4] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000104u);
    c->r[4] = c->r[2] + 0x00000006u;
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000084u);
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    c->r[3] = f2u(c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r16(ram, c->r[2] + 0x0000000eu);
    c->r[2] = c->r[3] - c->r[2];
    mem_w16(ram, c->r[4] + 0x00000002u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000104u);
    c->r[4] = c->r[2] + 0x0000000cu;
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000098u);
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    c->r[3] = f2u(c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r16(ram, c->r[2] + 0x0000000cu);
    c->r[2] = c->r[3] - c->r[2];
    c->r[2] = c->r[2] + 0xffffffffu;
    mem_w16(ram, c->r[4] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000104u);
    c->r[4] = c->r[2] + 0x0000000cu;
    c->f[0] = mem_rf32(ram, c->r[30] + 0x0000009cu);
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    c->r[3] = f2u(c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r16(ram, c->r[2] + 0x0000000eu);
    c->r[2] = c->r[3] - c->r[2];
    mem_w16(ram, c->r[4] + 0x00000002u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000104u);
    c->r[4] = c->r[2] + 0x00000012u;
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000098u);
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    c->r[3] = f2u(c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r16(ram, c->r[2] + 0x0000000cu);
    c->r[2] = c->r[3] - c->r[2];
    c->r[2] = c->r[2] + 0x00000001u;
    mem_w16(ram, c->r[4] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000104u);
    c->r[4] = c->r[2] + 0x00000012u;
    c->f[0] = mem_rf32(ram, c->r[30] + 0x0000009cu);
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    c->r[3] = f2u(c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r16(ram, c->r[2] + 0x0000000eu);
    c->r[2] = c->r[3] - c->r[2];
    mem_w16(ram, c->r[4] + 0x00000002u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000104u);
    c->r[4] = c->r[2] + 0x00000018u;
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000090u);
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    c->r[3] = f2u(c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r16(ram, c->r[2] + 0x0000000cu);
    c->r[2] = c->r[3] - c->r[2];
    c->r[2] = c->r[2] + 0xffffffffu;
    mem_w16(ram, c->r[4] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000104u);
    c->r[4] = c->r[2] + 0x00000018u;
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000094u);
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    c->r[3] = f2u(c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r16(ram, c->r[2] + 0x0000000eu);
    c->r[2] = c->r[3] - c->r[2];
    mem_w16(ram, c->r[4] + 0x00000002u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000104u);
    c->r[4] = c->r[2] + 0x0000001eu;
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000090u);
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    c->r[3] = f2u(c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r16(ram, c->r[2] + 0x0000000cu);
    c->r[2] = c->r[3] - c->r[2];
    c->r[2] = c->r[2] + 0x00000001u;
    mem_w16(ram, c->r[4] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000104u);
    c->r[4] = c->r[2] + 0x0000001eu;
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000094u);
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    c->r[3] = f2u(c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r16(ram, c->r[2] + 0x0000000eu);
    c->r[2] = c->r[3] - c->r[2];
    mem_w16(ram, c->r[4] + 0x00000002u, c->r[2]);
    mem_w32(ram, c->r[30] + 0x000000c8u, 0u);
L_0890d028:
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000c8u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000002u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_0890d040; }
    { goto L_0890d128; }
L_0890d040:
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000700u);
    c->r[2] = 0u + 0x000002e8u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[4] = c->lo;
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
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000c8u);
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[30];
    c->r[2] = c->r[2] + 0x000000d0u;
    c->r[4] = c->r[3] + 0u;
    c->r[5] = 0u + 0x00000004u;
    c->r[6] = 0x00800000u;
    c->r[6] = c->r[6] | 0x0100u;
    c->r[7] = 0u + 0x00000006u;
    c->r[8] = 0u + 0u;
    { c->r[31] = 0x0890d0acu; c->r[9] = mem_r32(ram, c->r[2] + 0x00000000u); func_0892083c(c, ram); }
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000700u);
    c->r[2] = 0u + 0x000002e8u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[4] = c->lo;
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
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000c8u);
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[30];
    c->r[2] = c->r[2] + 0x00000100u;
    c->r[4] = c->r[3] + 0u;
    c->r[5] = 0u + 0x00000004u;
    c->r[6] = 0x00800000u;
    c->r[6] = c->r[6] | 0x0100u;
    c->r[7] = 0u + 0x00000006u;
    c->r[8] = 0u + 0u;
    { c->r[31] = 0x0890d118u; c->r[9] = mem_r32(ram, c->r[2] + 0x00000000u); func_0892083c(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000c8u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x000000c8u, c->r[2]); goto L_0890d028; }
L_0890d128:
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000700u);
    c->r[2] = 0u + 0x000002e8u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[4] = c->lo;
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
    { c->r[31] = 0x0890d174u; c->r[5] = c->r[5] | 0x0102u; func_089207f8(c, ram); }
L_0890d174:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000114u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000110u);
    { c->r[29] = c->r[29] + 0x00000120u; return; }
    return; /* fell out of func_0890c51c */
}

/* func_0891a240  0x0891a240..0x0891aa30  2032 bytes, source=sweep */
void func_0891a240(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0891a240u);
    c->r[29] = c->r[29] + 0xffffffd0u;
    mem_w32(ram, c->r[29] + 0x00000024u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000020u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    c->r[2] = c->r[6] + 0u;
    c->r[3] = c->r[7] + 0u;
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[8]);
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[9]);
    mem_w16(ram, c->r[30] + 0x00000008u, c->r[2]);
    mem_w16(ram, c->r[30] + 0x0000000au, c->r[3]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x000000b0u);
    { int _c = ((s32)c->r[2] > 0); if (_c) goto L_0891a288; }
    { goto L_0891aa1c; }
L_0891a288:
    c->r[2] = 0u + 0x00000008u;
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_0891a2a4; }
    c->r[2] = 0u + 0x00000006u;
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
L_0891a2a4:
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x0891a2b0u; c->r[4] = c->r[4] + 0x00000af4u; func_0880d380(c, ram); }
    { int _c = (c->r[2] != 0u); if (_c) goto L_0891a7fc; }
    { c->r[31] = 0x0891a2c0u; c->r[4] = mem_r32(ram, c->r[30] + 0x0000000cu); func_089035ac(c, ram); }
    c->r[4] = 0u + 0x00000014u;
    { c->r[31] = 0x0891a2ccu; c->r[5] = 0u + 0x00000010u; func_0881a1d4(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = mem_r16(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[2] + 0xffffffffu;
    mem_w16(ram, c->r[3] + 0x00000004u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = mem_r16(ram, c->r[30] + 0x0000000au);
    c->r[2] = c->r[2] + 0xffffffffu;
    mem_w16(ram, c->r[3] + 0x00000006u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = 0u + 0x000001e0u;
    mem_w16(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    mem_w16(ram, c->r[2] + 0x00000002u, 0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[3] = c->r[2] + 0x0000000au;
    c->r[2] = mem_r16(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[2] + 0x00000001u;
    mem_w16(ram, c->r[3] + 0x00000004u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[3] = c->r[2] + 0x0000000au;
    c->r[2] = mem_r16(ram, c->r[30] + 0x0000000au);
    c->r[2] = c->r[2] + 0x00000001u;
    mem_w16(ram, c->r[3] + 0x00000006u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[3] = c->r[2] + 0x0000000au;
    c->r[2] = 0u + 0x000001e2u;
    mem_w16(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[3] = c->r[2] + 0x0000000au;
    c->r[2] = 0u + 0x00000002u;
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
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = c->r[2] >> 24;
    c->r[2] = c->r[2] & 0x000fu;
    c->r[3] = c->r[2] << 16;
    c->r[2] = 0x10000000u;
    c->r[2] = c->r[3] | c->r[2];
    { c->r[31] = 0x0891a3a8u; c->r[5] = c->r[2] + 0u; func_089207f8(c, ram); }
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000700u);
    c->r[2] = 0u + 0x000002e8u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[4] = c->lo;
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
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = 0x00ff0000u;
    c->r[2] = c->r[2] | 0xffffu;
    c->r[3] = c->r[3] & c->r[2];
    c->r[2] = 0x01000000u;
    c->r[2] = c->r[3] | c->r[2];
    { c->r[31] = 0x0891a404u; c->r[5] = c->r[2] + 0u; func_089207f8(c, ram); }
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000700u);
    c->r[2] = 0u + 0x000002e8u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[4] = c->lo;
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
    { c->r[31] = 0x0891a450u; c->r[5] = c->r[5] | 0x0002u; func_089207f8(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x0000008cu);
    c->r[2] = 0x00200000u;
    c->r[2] = c->r[3] & c->r[2];
    { int _c = (c->r[2] == 0u); if (_c) goto L_0891a614; }
    { c->r[31] = 0x0891a470u; c->r[4] = mem_r32(ram, c->r[30] + 0x0000000cu); func_089035ac(c, ram); }
    c->r[4] = 0u + 0x00000014u;
    { c->r[31] = 0x0891a47cu; c->r[5] = 0u + 0x00000010u; func_0881a1d4(c, ram); }
    mem_w32(ram, c->r[30] + 0x0000001cu, c->r[2]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[3] = mem_r16(ram, c->r[30] + 0x00000008u);
    c->r[2] = mem_r16(ram, c->r[30] + 0x00000014u);
    c->r[2] = c->r[3] - c->r[2];
    mem_w16(ram, c->r[4] + 0x00000004u, c->r[2]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[3] = mem_r16(ram, c->r[30] + 0x0000000au);
    c->r[2] = mem_r16(ram, c->r[30] + 0x00000014u);
    c->r[2] = c->r[3] - c->r[2];
    mem_w16(ram, c->r[4] + 0x00000006u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = 0u + 0x00000020u;
    mem_w16(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = 0u + 0x000000d0u;
    mem_w16(ram, c->r[3] + 0x00000002u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[4] = c->r[2] + 0x0000000au;
    c->r[3] = mem_r16(ram, c->r[30] + 0x00000008u);
    c->r[2] = mem_r16(ram, c->r[30] + 0x00000014u);
    c->r[2] = c->r[3] + c->r[2];
    mem_w16(ram, c->r[4] + 0x00000004u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[4] = c->r[2] + 0x0000000au;
    c->r[3] = mem_r16(ram, c->r[30] + 0x0000000au);
    c->r[2] = mem_r16(ram, c->r[30] + 0x00000014u);
    c->r[2] = c->r[3] + c->r[2];
    mem_w16(ram, c->r[4] + 0x00000006u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[3] = c->r[2] + 0x0000000au;
    c->r[2] = 0u + 0x00000030u;
    mem_w16(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[3] = c->r[2] + 0x0000000au;
    c->r[2] = 0u + 0x000000e0u;
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
    { c->r[31] = 0x0891a56cu; c->r[5] = c->r[2] + 0u; func_089207f8(c, ram); }
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000700u);
    c->r[2] = 0u + 0x000002e8u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[4] = c->lo;
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
    { c->r[31] = 0x0891a5c8u; c->r[5] = c->r[2] + 0u; func_089207f8(c, ram); }
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000700u);
    c->r[2] = 0u + 0x000002e8u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[4] = c->lo;
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
    { c->r[31] = 0x0891a614u; c->r[5] = c->r[5] | 0x0002u; func_089207f8(c, ram); }
L_0891a614:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000008cu);
    c->r[2] = c->r[2] & 0x0800u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_0891aa1c; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x0000002fu);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000004u) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_0891a644; }
    { goto L_0891aa1c; }
L_0891a644:
    c->r[4] = 0x7f400000u;
    { c->r[31] = 0x0891a650u; c->r[4] = c->r[4] | 0x6000u; func_089035ac(c, ram); }
    c->r[4] = 0u + 0x00000014u;
    { c->r[31] = 0x0891a65cu; c->r[5] = 0u + 0x00000010u; func_0881a1d4(c, ram); }
    mem_w32(ram, c->r[30] + 0x0000001cu, c->r[2]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[3] = mem_r16(ram, c->r[30] + 0x00000008u);
    c->r[2] = mem_r16(ram, c->r[30] + 0x00000014u);
    c->r[2] = c->r[3] - c->r[2];
    mem_w16(ram, c->r[4] + 0x00000004u, c->r[2]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[3] = mem_r16(ram, c->r[30] + 0x0000000au);
    c->r[2] = mem_r16(ram, c->r[30] + 0x00000014u);
    c->r[2] = c->r[3] - c->r[2];
    mem_w16(ram, c->r[4] + 0x00000006u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = 0u + 0x00000080u;
    mem_w16(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = 0u + 0x000000e0u;
    mem_w16(ram, c->r[3] + 0x00000002u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[4] = c->r[2] + 0x0000000au;
    c->r[3] = mem_r16(ram, c->r[30] + 0x00000008u);
    c->r[2] = mem_r16(ram, c->r[30] + 0x00000014u);
    c->r[2] = c->r[3] + c->r[2];
    mem_w16(ram, c->r[4] + 0x00000004u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[4] = c->r[2] + 0x0000000au;
    c->r[3] = mem_r16(ram, c->r[30] + 0x0000000au);
    c->r[2] = mem_r16(ram, c->r[30] + 0x00000014u);
    c->r[2] = c->r[3] + c->r[2];
    mem_w16(ram, c->r[4] + 0x00000006u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[3] = c->r[2] + 0x0000000au;
    c->r[2] = 0u + 0x00000090u;
    mem_w16(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[3] = c->r[2] + 0x0000000au;
    c->r[2] = 0u + 0x000000f0u;
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
    { c->r[31] = 0x0891a74cu; c->r[5] = c->r[2] + 0u; func_089207f8(c, ram); }
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000700u);
    c->r[2] = 0u + 0x000002e8u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[4] = c->lo;
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
    { c->r[31] = 0x0891a7a8u; c->r[5] = c->r[2] + 0u; func_089207f8(c, ram); }
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000700u);
    c->r[2] = 0u + 0x000002e8u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[4] = c->lo;
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
    { c->r[31] = 0x0891a7f4u; c->r[5] = c->r[5] | 0x0002u; func_089207f8(c, ram); }
    { goto L_0891aa1c; }
L_0891a7fc:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000008cu);
    c->r[2] = c->r[2] & 0x0800u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_0891a82c; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x0000002fu);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000004u) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_0891a82c; }
    { goto L_0891aa1c; }
L_0891a82c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000008cu);
    c->r[2] = c->r[2] & 0x0002u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_0891a850; }
    c->r[2] = 0x7f400000u;
    c->r[2] = c->r[2] | 0x6000u;
    { mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]); goto L_0891a870; }
L_0891a850:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000008cu);
    c->r[2] = c->r[2] & 0x0004u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_0891a870; }
    c->r[2] = 0x7f7f0000u;
    c->r[2] = c->r[2] | 0x1000u;
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
L_0891a870:
    { c->r[31] = 0x0891a878u; c->r[4] = mem_r32(ram, c->r[30] + 0x0000000cu); func_089035ac(c, ram); }
    c->r[4] = 0u + 0x00000014u;
    { c->r[31] = 0x0891a884u; c->r[5] = 0u + 0x00000010u; func_0881a1d4(c, ram); }
    mem_w32(ram, c->r[30] + 0x0000001cu, c->r[2]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[3] = mem_r16(ram, c->r[30] + 0x00000008u);
    c->r[2] = mem_r16(ram, c->r[30] + 0x00000014u);
    c->r[2] = c->r[3] - c->r[2];
    mem_w16(ram, c->r[4] + 0x00000004u, c->r[2]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[3] = mem_r16(ram, c->r[30] + 0x0000000au);
    c->r[2] = mem_r16(ram, c->r[30] + 0x00000014u);
    c->r[2] = c->r[3] - c->r[2];
    mem_w16(ram, c->r[4] + 0x00000006u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = 0u + 0x00000080u;
    mem_w16(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = 0u + 0x000000e0u;
    mem_w16(ram, c->r[3] + 0x00000002u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[4] = c->r[2] + 0x0000000au;
    c->r[3] = mem_r16(ram, c->r[30] + 0x00000008u);
    c->r[2] = mem_r16(ram, c->r[30] + 0x00000014u);
    c->r[2] = c->r[3] + c->r[2];
    mem_w16(ram, c->r[4] + 0x00000004u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[4] = c->r[2] + 0x0000000au;
    c->r[3] = mem_r16(ram, c->r[30] + 0x0000000au);
    c->r[2] = mem_r16(ram, c->r[30] + 0x00000014u);
    c->r[2] = c->r[3] + c->r[2];
    mem_w16(ram, c->r[4] + 0x00000006u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[3] = c->r[2] + 0x0000000au;
    c->r[2] = 0u + 0x00000090u;
    mem_w16(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[3] = c->r[2] + 0x0000000au;
    c->r[2] = 0u + 0x000000f0u;
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
    { c->r[31] = 0x0891a974u; c->r[5] = c->r[2] + 0u; func_089207f8(c, ram); }
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000700u);
    c->r[2] = 0u + 0x000002e8u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[4] = c->lo;
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
    { c->r[31] = 0x0891a9d0u; c->r[5] = c->r[2] + 0u; func_089207f8(c, ram); }
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000700u);
    c->r[2] = 0u + 0x000002e8u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[4] = c->lo;
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
    { c->r[31] = 0x0891aa1cu; c->r[5] = c->r[5] | 0x0002u; func_089207f8(c, ram); }
L_0891aa1c:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000024u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000020u);
    { c->r[29] = c->r[29] + 0x00000030u; return; }
    return; /* fell out of func_0891a240 */
}

/* func_089208f4  0x089208f4..0x08920944  80 bytes, source=sweep */
void func_089208f4(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089208f4u);
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
    { c->r[31] = 0x08920930u; c->r[8] = mem_r32(ram, c->r[30] + 0x00000010u); func_08920e58(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000024u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000020u);
    { c->r[29] = c->r[29] + 0x00000030u; return; }
    return; /* fell out of func_089208f4 */
}

/* func_08921844  0x08921844..0x089218a8  100 bytes, source=sweep */
void func_08921844(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08921844u);
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
    { c->r[31] = 0x08921894u; c->r[5] = c->r[2] + 0u; func_089207f8(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_08921844 */
}

/* func_08923908  0x08923908..0x089241c8  2240 bytes, source=sweep */
void func_08923908(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08923908u);
    c->r[29] = c->r[29] + 0xffffff70u;
    mem_w32(ram, c->r[29] + 0x00000084u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000080u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[6]);
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[7]);
    mem_wf32(ram, c->r[30] + 0x00000010u, c->f[12]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x08923938u; c->r[5] = mem_r32(ram, c->r[30] + 0x00000004u); func_0880f2cc(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = c->r[2] << 7;
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x08923950u; c->r[5] = 0u + 0x00000010u; func_0881a1d4(c, ram); }
    mem_w32(ram, c->r[30] + 0x0000001cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    mem_w32(ram, c->r[30] + 0x00000020u, c->r[2]);
    c->r[2] = c->r[30] + 0x00000008u;
    mem_w32(ram, c->r[30] + 0x00000024u, c->r[2]);
    c->r[2] = c->r[30] + 0x0000000cu;
    mem_w32(ram, c->r[30] + 0x00000028u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000028u);
    c->r[3] = mem_r8(ram, c->r[2] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000024u);
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000000u);
    c->r[2] = c->r[3] - c->r[2];
    mem_w16(ram, c->r[30] + 0x00000040u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000028u);
    c->r[2] = c->r[2] + 0x00000001u;
    c->r[3] = mem_r8(ram, c->r[2] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000024u);
    c->r[2] = c->r[2] + 0x00000001u;
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000000u);
    c->r[2] = c->r[3] - c->r[2];
    mem_w16(ram, c->r[30] + 0x00000042u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000028u);
    c->r[2] = c->r[2] + 0x00000002u;
    c->r[3] = mem_r8(ram, c->r[2] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000024u);
    c->r[2] = c->r[2] + 0x00000002u;
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000000u);
    c->r[2] = c->r[3] - c->r[2];
    mem_w16(ram, c->r[30] + 0x00000044u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000028u);
    c->r[2] = c->r[2] + 0x00000003u;
    c->r[3] = mem_r8(ram, c->r[2] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000024u);
    c->r[2] = c->r[2] + 0x00000003u;
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000000u);
    c->r[2] = c->r[3] - c->r[2];
    mem_w16(ram, c->r[30] + 0x00000046u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000040u);
    mem_w32(ram, c->r[30] + 0x00000030u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000044u);
    mem_w32(ram, c->r[30] + 0x00000034u, c->r[2]);
    mem_w32(ram, c->r[30] + 0x00000050u, 0u);
L_089239f8:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000050u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = ((s32)c->r[2] < (s32)c->r[3]) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_08923a14; }
    { goto L_0892407c; }
L_08923a14:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000004u);
    { c->r[31] = 0x08923a24u; c->r[6] = mem_r32(ram, c->r[30] + 0x00000050u); func_0880ef80(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000020u);
    c->f[1] = u2f((u32)alx_trunc_w_s(c->f[0]));
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000000u);
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    c->r[3] = f2u(c->f[1]);
    c->r[4] = f2u(c->f[0]);
    c->r[2] = c->r[3] - c->r[4];
    mem_w32(ram, c->r[30] + 0x00000054u, c->r[2]);
    mem_w32(ram, c->r[30] + 0x00000070u, 0u);
L_08923a54:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000070u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000003u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_08923a6c; }
    { goto L_08923c24; }
L_08923a6c:
    c->r[3] = c->r[30] + 0x00000060u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000070u);
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[3] + c->r[2];
    mem_w32(ram, c->r[30] + 0x00000074u, c->r[2]);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000070u);
    c->f[2] = (f32)(s32)f2u(c->f[0]);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000054u);
    c->f[1] = (f32)(s32)f2u(c->f[0]);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00006dfcu);
    c->f[0] = c->f[1] * c->f[0];
    c->f[1] = c->f[2] * c->f[0];
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000054u);
    c->r[2] = c->r[2] << 1;
    c->f[0] = u2f(c->r[2]);
    c->f[0] = (f32)(s32)f2u(c->f[0]);
    c->f[1] = c->f[1] / c->f[0];
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000010u);
    c->f[0] = c->f[1] + c->f[0];
    mem_wf32(ram, c->r[30] + 0x00000078u, c->f[0]);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000078u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00006e00u);
    alx_c_cond_s(c, 12, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_08923ae4; }
    { goto L_08923af8; }
L_08923ae4:
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000078u);
    c->r[1] = 0x08a40000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0x00006e00u);
    c->f[0] = c->f[0] - c->f[1];
    mem_wf32(ram, c->r[30] + 0x00000078u, c->f[0]);
L_08923af8:
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000078u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00006dfcu);
    alx_c_cond_s(c, 12, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_08923b1c; }
    { goto L_08923b30; }
L_08923b1c:
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00006e00u);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000078u);
    c->f[0] = c->f[0] - c->f[1];
    mem_wf32(ram, c->r[30] + 0x00000078u, c->f[0]);
L_08923b30:
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000078u);
    c->f[0] = c->f[0] + c->f[0];
    mem_wf32(ram, c->r[30] + 0x00000078u, c->f[0]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000074u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000024u);
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[30] + 0x00000030u);
    c->f[0] = u2f(c->r[2]);
    c->f[1] = (f32)(s32)f2u(c->f[0]);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000078u);
    c->f[0] = c->f[1] * c->f[0];
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    c->r[2] = f2u(c->f[0]);
    c->r[3] = mem_r8(ram, c->r[3] + 0x00000000u);
    c->r[2] = c->r[3] + c->r[2];
    mem_w8(ram, c->r[4] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000074u);
    c->r[4] = c->r[2] + 0x00000001u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000024u);
    c->r[3] = c->r[2] + 0x00000001u;
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[30] + 0x00000032u);
    c->f[0] = u2f(c->r[2]);
    c->f[1] = (f32)(s32)f2u(c->f[0]);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000078u);
    c->f[0] = c->f[1] * c->f[0];
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    c->r[2] = f2u(c->f[0]);
    c->r[3] = mem_r8(ram, c->r[3] + 0x00000000u);
    c->r[2] = c->r[3] + c->r[2];
    mem_w8(ram, c->r[4] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000074u);
    c->r[4] = c->r[2] + 0x00000002u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000024u);
    c->r[3] = c->r[2] + 0x00000002u;
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[30] + 0x00000034u);
    c->f[0] = u2f(c->r[2]);
    c->f[1] = (f32)(s32)f2u(c->f[0]);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000078u);
    c->f[0] = c->f[1] * c->f[0];
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    c->r[2] = f2u(c->f[0]);
    c->r[3] = mem_r8(ram, c->r[3] + 0x00000000u);
    c->r[2] = c->r[3] + c->r[2];
    mem_w8(ram, c->r[4] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000074u);
    c->r[4] = c->r[2] + 0x00000003u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000024u);
    c->r[3] = c->r[2] + 0x00000003u;
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[30] + 0x00000036u);
    c->f[0] = u2f(c->r[2]);
    c->f[1] = (f32)(s32)f2u(c->f[0]);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000078u);
    c->f[0] = c->f[1] * c->f[0];
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    c->r[2] = f2u(c->f[0]);
    c->r[3] = mem_r8(ram, c->r[3] + 0x00000000u);
    c->r[2] = c->r[3] + c->r[2];
    mem_w8(ram, c->r[4] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000070u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000070u, c->r[2]); goto L_08923a54; }
L_08923c24:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000060u);
    mem_w32(ram, c->r[3] + 0x00000004u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000000u);
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    c->r[4] = f2u(c->f[0]);
    mem_w16(ram, c->r[3] + 0x00000008u, c->r[4]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000004u);
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    c->r[2] = f2u(c->f[0]);
    mem_w16(ram, c->r[3] + 0x0000000au, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = mem_r16(ram, c->r[2] + 0x00000008u);
    mem_w16(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = mem_r16(ram, c->r[2] + 0x0000000au);
    mem_w16(ram, c->r[3] + 0x00000002u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[3] = c->r[2] + 0x00000010u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000064u);
    mem_w32(ram, c->r[3] + 0x00000004u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[5] = c->r[2] + 0x00000010u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000000u);
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    c->r[4] = f2u(c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000010u);
    c->f[0] = mem_rf32(ram, c->r[3] + 0x00000000u);
    c->f[1] = c->f[1] - c->f[0];
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00006dfcu);
    c->f[0] = c->f[1] * c->f[0];
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    c->r[2] = f2u(c->f[0]);
    c->r[2] = c->r[4] + c->r[2];
    mem_w16(ram, c->r[5] + 0x00000008u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[3] = c->r[2] + 0x00000010u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000014u);
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    c->r[4] = f2u(c->f[0]);
    mem_w16(ram, c->r[3] + 0x0000000au, c->r[4]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[4] = c->r[2] + 0x00000010u;
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[3] = mem_r16(ram, c->r[2] + 0x00000018u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = mem_r16(ram, c->r[2] + 0x00000008u);
    c->r[3] = c->r[3] - c->r[2];
    c->f[0] = u2f(c->r[3]);
    c->f[1] = (f32)(s32)f2u(c->f[0]);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00006dfcu);
    c->f[0] = c->f[1] * c->f[0];
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    c->r[3] = f2u(c->f[0]);
    c->r[2] = mem_r16(ram, c->r[5] + 0x00000008u);
    c->r[2] = c->r[2] + c->r[3];
    mem_w16(ram, c->r[4] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[3] = c->r[2] + 0x00000010u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = mem_r16(ram, c->r[2] + 0x0000001au);
    mem_w16(ram, c->r[3] + 0x00000002u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[3] = c->r[2] + 0x00000020u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000064u);
    mem_w32(ram, c->r[3] + 0x00000004u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[5] = c->r[2] + 0x00000020u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000000u);
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    c->r[4] = f2u(c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000020u);
    c->f[0] = mem_rf32(ram, c->r[3] + 0x00000000u);
    c->f[1] = c->f[1] - c->f[0];
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00006dfcu);
    c->f[0] = c->f[1] * c->f[0];
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    c->r[2] = f2u(c->f[0]);
    c->r[2] = c->r[4] + c->r[2];
    mem_w16(ram, c->r[5] + 0x00000008u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[3] = c->r[2] + 0x00000020u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000024u);
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    c->r[2] = f2u(c->f[0]);
    mem_w16(ram, c->r[3] + 0x0000000au, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[4] = c->r[2] + 0x00000020u;
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[3] = mem_r16(ram, c->r[2] + 0x00000028u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = mem_r16(ram, c->r[2] + 0x00000008u);
    c->r[3] = c->r[3] - c->r[2];
    c->f[0] = u2f(c->r[3]);
    c->f[1] = (f32)(s32)f2u(c->f[0]);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00006dfcu);
    c->f[0] = c->f[1] * c->f[0];
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    c->r[3] = f2u(c->f[0]);
    c->r[2] = mem_r16(ram, c->r[5] + 0x00000008u);
    c->r[2] = c->r[2] + c->r[3];
    mem_w16(ram, c->r[4] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[3] = c->r[2] + 0x00000020u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = mem_r16(ram, c->r[2] + 0x0000002au);
    mem_w16(ram, c->r[3] + 0x00000002u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[3] = c->r[2] + 0x00000030u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000060u);
    mem_w32(ram, c->r[3] + 0x00000004u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[3] = c->r[2] + 0x00000030u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000030u);
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    c->r[4] = f2u(c->f[0]);
    mem_w16(ram, c->r[3] + 0x00000008u, c->r[4]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[3] = c->r[2] + 0x00000030u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000034u);
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    c->r[2] = f2u(c->f[0]);
    mem_w16(ram, c->r[3] + 0x0000000au, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[3] = c->r[2] + 0x00000030u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = mem_r16(ram, c->r[2] + 0x00000038u);
    mem_w16(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[3] = c->r[2] + 0x00000030u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = mem_r16(ram, c->r[2] + 0x0000003au);
    mem_w16(ram, c->r[3] + 0x00000002u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[3] = c->r[2] + 0x00000040u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[2] = c->r[2] + 0x00000010u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000004u);
    mem_w32(ram, c->r[3] + 0x00000004u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[3] = c->r[2] + 0x00000040u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[2] = c->r[2] + 0x00000010u;
    c->r[2] = mem_r16(ram, c->r[2] + 0x00000008u);
    mem_w16(ram, c->r[3] + 0x00000008u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[3] = c->r[2] + 0x00000040u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[2] = c->r[2] + 0x00000010u;
    c->r[2] = mem_r16(ram, c->r[2] + 0x0000000au);
    mem_w16(ram, c->r[3] + 0x0000000au, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[3] = c->r[2] + 0x00000040u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[2] = c->r[2] + 0x00000010u;
    c->r[2] = mem_r16(ram, c->r[2] + 0x00000000u);
    mem_w16(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[3] = c->r[2] + 0x00000040u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[2] = c->r[2] + 0x00000010u;
    c->r[2] = mem_r16(ram, c->r[2] + 0x00000002u);
    mem_w16(ram, c->r[3] + 0x00000002u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[3] = c->r[2] + 0x00000050u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000068u);
    mem_w32(ram, c->r[3] + 0x00000004u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[3] = c->r[2] + 0x00000050u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000010u);
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    c->r[4] = f2u(c->f[0]);
    mem_w16(ram, c->r[3] + 0x00000008u, c->r[4]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[3] = c->r[2] + 0x00000050u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000014u);
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    c->r[2] = f2u(c->f[0]);
    mem_w16(ram, c->r[3] + 0x0000000au, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[3] = c->r[2] + 0x00000050u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = mem_r16(ram, c->r[2] + 0x00000018u);
    mem_w16(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[3] = c->r[2] + 0x00000050u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = mem_r16(ram, c->r[2] + 0x0000001au);
    mem_w16(ram, c->r[3] + 0x00000002u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[3] = c->r[2] + 0x00000060u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000068u);
    mem_w32(ram, c->r[3] + 0x00000004u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[3] = c->r[2] + 0x00000060u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000020u);
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    c->r[4] = f2u(c->f[0]);
    mem_w16(ram, c->r[3] + 0x00000008u, c->r[4]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[3] = c->r[2] + 0x00000060u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000024u);
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    c->r[2] = f2u(c->f[0]);
    mem_w16(ram, c->r[3] + 0x0000000au, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[3] = c->r[2] + 0x00000060u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = mem_r16(ram, c->r[2] + 0x00000028u);
    mem_w16(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[3] = c->r[2] + 0x00000060u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = mem_r16(ram, c->r[2] + 0x0000002au);
    mem_w16(ram, c->r[3] + 0x00000002u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[3] = c->r[2] + 0x00000070u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[2] = c->r[2] + 0x00000020u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000004u);
    mem_w32(ram, c->r[3] + 0x00000004u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[3] = c->r[2] + 0x00000070u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[2] = c->r[2] + 0x00000020u;
    c->r[2] = mem_r16(ram, c->r[2] + 0x00000008u);
    mem_w16(ram, c->r[3] + 0x00000008u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[3] = c->r[2] + 0x00000070u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[2] = c->r[2] + 0x00000020u;
    c->r[2] = mem_r16(ram, c->r[2] + 0x0000000au);
    mem_w16(ram, c->r[3] + 0x0000000au, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[3] = c->r[2] + 0x00000070u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[2] = c->r[2] + 0x00000020u;
    c->r[2] = mem_r16(ram, c->r[2] + 0x00000000u);
    mem_w16(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[3] = c->r[2] + 0x00000070u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[2] = c->r[2] + 0x00000020u;
    c->r[2] = mem_r16(ram, c->r[2] + 0x00000002u);
    mem_w16(ram, c->r[3] + 0x00000002u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[2] = c->r[2] + 0x00000080u;
    mem_w32(ram, c->r[30] + 0x00000020u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000050u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000050u, c->r[2]); goto L_089239f8; }
L_0892407c:
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000700u);
    c->r[2] = 0u + 0x000002e8u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[4] = c->lo;
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
    { c->r[31] = 0x089240d8u; c->r[5] = c->r[2] + 0u; func_089258bc(c, ram); }
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000700u);
    c->r[2] = 0u + 0x000002e8u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[4] = c->lo;
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
    { c->r[31] = 0x08924134u; c->r[5] = c->r[2] + 0u; func_089258bc(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000074u, 0u);
L_08924138:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[3] = c->r[2] << 1;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000074u);
    c->r[2] = ((s32)c->r[2] < (s32)c->r[3]) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_08924158; }
    { goto L_089241b4; }
L_08924158:
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000700u);
    c->r[2] = 0u + 0x000002e8u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[4] = c->lo;
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
    { c->r[31] = 0x089241a4u; c->r[5] = c->r[5] | 0x0004u; func_089258bc(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000074u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000074u, c->r[2]); goto L_08924138; }
L_089241b4:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000084u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000080u);
    { c->r[29] = c->r[29] + 0x00000090u; return; }
    return; /* fell out of func_08923908 */
}

/* func_08925f30  0x08925f30..0x08925f74  68 bytes, source=sweep */
void func_08925f30(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08925f30u);
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
    { c->r[31] = 0x08925f60u; c->r[5] = c->r[2] + 0u; func_089258bc(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_08925f30 */
}

/* func_08928b84  0x08928b84..0x08928bb4  48 bytes, source=sweep */
void func_08928b84(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08928b84u);
    c->r[29] = c->r[29] + 0xfffffff0u;
    mem_w32(ram, c->r[29] + 0x00000004u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000000u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    c->r[4] = 0u + 0u;
    { c->r[31] = 0x08928ba0u; c->r[5] = 0u | 0xffffu; func_0892892c(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000004u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000000u);
    { c->r[29] = c->r[29] + 0x00000010u; return; }
    return; /* fell out of func_08928b84 */
}

/* func_0892f580  0x0892f580..0x0892f654  212 bytes, source=sweep */
void func_0892f580(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0892f580u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x000000e0u;
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000036u);
    c->r[2] = 0u + 0x00000001u;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_0892f5f8; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000036u);
    c->r[2] = 0u + 0x00000002u;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_0892f5f8; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000036u);
    c->r[2] = 0u + 0x00000003u;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_0892f5f8; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000036u);
    c->r[2] = 0u + 0x00000009u;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_0892f5f8; }
    { goto L_0892f60c; }
L_0892f5f8:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x0892f604u; c->r[5] = 0u + 0x00000002u; func_0880d260(c, ram); }
    { goto L_0892f640; }
L_0892f60c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000035u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_0892f640; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = 0u + 0x00000006u;
    mem_w8(ram, c->r[3] + 0x00000035u, c->r[2]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x00000010u);
    c->r[2] = 0x07010000u;
    c->r[2] = c->r[3] | c->r[2];
    mem_w32(ram, c->r[4] + 0x00000010u, c->r[2]);
L_0892f640:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_0892f580 */
}

/* func_08932564  0x08932564..0x08932598  52 bytes, source=residue */
void func_08932564(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08932564u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x000000e0u;
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x0000001cu);
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_08932564 */
}

/* func_0893435c  0x0893435c..0x089343a0  68 bytes, source=fde */
void func_0893435c(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0893435cu);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = 0u + 0u;
    { c->r[31] = 0x08934380u; c->r[6] = 0u + 0x00000010u; func_08a19ec4(c, ram); }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = 0u + 0xffffffffu;
    mem_w8(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_0893435c */
}

/* func_08938064  0x08938064..0x08938218  436 bytes, source=fde */
void func_08938064(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08938064u);
    c->r[29] = c->r[29] + 0xffffffd0u;
    mem_w32(ram, c->r[29] + 0x00000024u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000020u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[4]);
    c->r[4] = 0x08a40000u;
    { c->r[31] = 0x08938084u; c->r[4] = c->r[4] + 0x00007408u; func_089c6f64(c, ram); }
    c->r[4] = 0x08a70000u;
    c->r[4] = c->r[4] + 0xffffb640u;
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x08938098u; c->r[6] = 0u + 0u; func_089e0bd8(c, ram); }
    { c->r[31] = 0x089380a0u; func_089d2008(c, ram); }
    c->r[4] = 0x08a70000u;
    c->r[4] = c->r[4] + 0xffffb640u;
    c->r[5] = 0u + 0x00000002u;
    { c->r[31] = 0x089380b4u; c->r[6] = 0u + 0x00000006u; func_089df7a0(c, ram); }
    c->r[2] = 0xff360000u;
    c->r[2] = c->r[2] | 0x5e7fu;
    mem_w32(ram, c->r[30] + 0x0000001cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[4] = mem_r32(ram, c->r[30] + 0x0000001cu);
    { c->r[31] = 0x089380d0u; c->f[12] = mem_rf32(ram, c->r[2] + 0x00000018u); func_08903b2c(c, ram); }
    mem_w32(ram, c->r[30] + 0x0000001cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000014u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00007418u);
    c->f[0] = c->f[1] * c->f[0];
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    c->r[3] = f2u(c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = mem_r16(ram, c->r[2] + 0x00000010u);
    c->r[2] = c->r[3] + c->r[2];
    mem_w16(ram, c->r[30] + 0x00000018u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000014u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x0000741cu);
    c->f[0] = c->f[1] * c->f[0];
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    c->r[3] = f2u(c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = mem_r16(ram, c->r[2] + 0x00000012u);
    c->r[2] = c->r[3] + c->r[2];
    mem_w16(ram, c->r[30] + 0x0000001au, c->r[2]);
    { c->r[31] = 0x08938134u; c->r[4] = 0u + 0x0000002fu; func_089241c8(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
    c->r[3] = (u32)(s32)(s16)mem_r16(ram, c->r[30] + 0x00000018u);
    c->r[9] = (u32)(s32)(s16)mem_r16(ram, c->r[30] + 0x0000001au);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    mem_w32(ram, c->r[29] + 0x00000000u, c->r[2]);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00002dfcu;
    c->r[5] = 0u + 0x00000003u;
    c->r[6] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[7] = 0u + 0x00000001u;
    c->r[8] = c->r[3] + 0u;
    c->r[10] = 0u + 0u;
    { c->r[31] = 0x0893816cu; c->r[11] = 0u + 0x00000001u; func_089ce998(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000014u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00007420u);
    c->f[0] = c->f[1] * c->f[0];
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    c->r[3] = f2u(c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = mem_r16(ram, c->r[2] + 0x00000010u);
    c->r[2] = c->r[3] + c->r[2];
    mem_w16(ram, c->r[30] + 0x00000018u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000014u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00007424u);
    c->f[0] = c->f[1] * c->f[0];
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    c->r[3] = f2u(c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = mem_r16(ram, c->r[2] + 0x00000012u);
    c->r[2] = c->r[3] + c->r[2];
    mem_w16(ram, c->r[30] + 0x0000001au, c->r[2]);
    { c->r[31] = 0x089381ccu; c->r[4] = 0u + 0x00000030u; func_089241c8(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
    c->r[3] = (u32)(s32)(s16)mem_r16(ram, c->r[30] + 0x00000018u);
    c->r[9] = (u32)(s32)(s16)mem_r16(ram, c->r[30] + 0x0000001au);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    mem_w32(ram, c->r[29] + 0x00000000u, c->r[2]);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00002dfcu;
    c->r[5] = 0u + 0x00000003u;
    c->r[6] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[7] = 0u + 0x00000001u;
    c->r[8] = c->r[3] + 0u;
    c->r[10] = 0u + 0u;
    { c->r[31] = 0x08938204u; c->r[11] = 0u + 0x00000001u; func_089ce998(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000024u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000020u);
    { c->r[29] = c->r[29] + 0x00000030u; return; }
    return; /* fell out of func_08938064 */
}

/* func_0893c664  0x0893c664..0x0893c6a8  68 bytes, source=sweep */
void func_0893c664(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0893c664u);
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
    { c->r[31] = 0x0893c694u; c->r[5] = c->r[2] + 0u; func_0893bf80(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_0893c664 */
}

/* func_0893da88  0x0893da88..0x0893dacc  68 bytes, source=sweep */
void func_0893da88(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0893da88u);
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
    { c->r[31] = 0x0893dab8u; c->r[5] = c->r[2] + 0u; func_0893d560(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_0893da88 */
}

/* func_0893fbb4  0x0893fbb4..0x0893fc20  108 bytes, source=sweep */
void func_0893fbb4(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0893fbb4u);
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
    { c->r[31] = 0x0893fbf0u; c->r[5] = c->r[2] + 0u; func_0893f9e4(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = c->r[2] >> 24;
    c->r[2] = 0x58000000u;
    c->r[2] = c->r[3] | c->r[2];
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x0893fc0cu; c->r[5] = c->r[2] + 0u; func_0893f9e4(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_0893fbb4 */
}

/* func_089423b8  0x089423b8..0x08943a90  5848 bytes, source=fde */
void func_089423b8(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089423b8u);
    c->r[29] = c->r[29] + 0xfffff4e0u;
    mem_w32(ram, c->r[29] + 0x00000b18u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000b14u, c->r[30]);
    mem_w32(ram, c->r[29] + 0x00000b10u, c->r[16]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    mem_w32(ram, c->r[30] + 0x0000000cu, 0u);
    mem_w32(ram, c->r[30] + 0x00000010u, 0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x0000002eu);
    c->r[2] = c->r[2] ^ 0x0001u;
    c->r[2] = (c->r[2] < 0x00000001u) ? 1u : 0u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = c->r[2] | c->r[3];
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x0000002eu);
    c->r[2] = c->r[2] ^ 0x0002u;
    c->r[2] = (c->r[2] < 0x00000001u) ? 1u : 0u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = c->r[2] | c->r[3];
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]);
    c->r[2] = c->r[30] + 0x000002a0u;
    mem_w32(ram, c->r[30] + 0x00000aa0u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000aa0u);
    mem_w32(ram, c->r[30] + 0x00000aa4u, c->r[2]);
    c->r[2] = 0u + 0x0000001fu;
    mem_w32(ram, c->r[30] + 0x00000aa8u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000aa8u);
    c->r[2] = 0u + 0xffffffffu;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_0894246c; }
L_0894243c:
    { c->r[31] = 0x08942444u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000aa4u); func_08808260(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000aa4u);
    c->r[2] = c->r[2] + 0x00000040u;
    mem_w32(ram, c->r[30] + 0x00000aa4u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000aa8u);
    c->r[2] = c->r[2] + 0xffffffffu;
    c->r[3] = c->r[2] + 0u;
    mem_w32(ram, c->r[30] + 0x00000aa8u, c->r[3]);
    c->r[2] = 0u + 0xffffffffu;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_0894243c; }
L_0894246c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r16(ram, c->r[2] + 0x00000010u);
    mem_w32(ram, c->r[30] + 0x00000aa8u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r16(ram, c->r[2] + 0x00000012u);
    mem_w32(ram, c->r[30] + 0x00000aa4u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000aa4u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000aa8u);
    c->r[2] = c->r[3] - c->r[2];
    c->r[2] = c->r[2] + 0x00000001u;
    mem_w32(ram, c->r[30] + 0x00000aa0u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000aa0u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000002u) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_089424b0; }
    { goto L_08943a78; }
L_089424b0:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_089424c8; }
    c->r[2] = 0u + 0x00000019u;
    { mem_w32(ram, c->r[30] + 0x00000ae0u, c->r[2]); goto L_089424cc; }
L_089424c8:
    mem_w32(ram, c->r[30] + 0x00000ae0u, 0u);
L_089424cc:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000ae0u);
    mem_w32(ram, c->r[30] + 0x00000aacu, c->r[3]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_089424ec; }
    c->r[2] = 0u + 0x00000006u;
    { mem_w32(ram, c->r[30] + 0x00000ae4u, c->r[2]); goto L_089424f4; }
L_089424ec:
    c->r[3] = 0u + 0x00000012u;
    mem_w32(ram, c->r[30] + 0x00000ae4u, c->r[3]);
L_089424f4:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000ae4u);
    mem_w32(ram, c->r[30] + 0x00000ab0u, c->r[2]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = mem_r16(ram, c->r[2] + 0x00000010u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x0000002cu);
    alx_mult(c, c->r[3], c->r[2]);
    c->r[3] = c->lo;
    c->r[2] = mem_r32(ram, c->r[4] + 0x0000001cu);
    c->r[2] = c->r[2] - c->r[3];
    mem_w32(ram, c->r[30] + 0x00000ab4u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000ab4u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000aacu);
    c->r[2] = ((s32)c->r[2] < (s32)c->r[3]) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_08942550; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000ab4u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000aacu);
    c->r[3] = c->r[3] - c->r[2];
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000ab0u);
    c->r[2] = c->r[2] - c->r[3];
    mem_w32(ram, c->r[30] + 0x00000ab0u, c->r[2]);
L_08942550:
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00007754u);
    mem_wf32(ram, c->r[30] + 0x00000ab8u, c->f[0]);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00007754u);
    mem_wf32(ram, c->r[30] + 0x00000abcu, c->f[0]);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000aa0u);
    c->f[0] = (f32)(s32)f2u(c->f[0]);
    mem_wf32(ram, c->r[30] + 0x00000ac0u, c->f[0]);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000ac0u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00007754u);
    c->f[0] = c->f[1] * c->f[0];
    mem_wf32(ram, c->r[30] + 0x00000ac0u, c->f[0]);
    mem_w32(ram, c->r[30] + 0x00000008u, 0u);
L_0894258c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000aa0u);
    c->r[2] = ((s32)c->r[2] < (s32)c->r[3]) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_089425a8; }
    { goto L_08942ad0; }
L_089425a8:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000ab0u);
    { int _c = ((s32)c->r[2] <= 0); if (_c) goto L_08942aa0; }
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000aa8u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[4] = c->r[3] + c->r[2];
    c->r[2] = 0x30c30000u;
    c->r[2] = c->r[2] | 0x0c31u;
    alx_mult(c, c->r[4], c->r[2]);
    c->r[2] = c->hi;
    c->r[3] = (u32)((s32)c->r[2] >> 2);
    c->r[2] = (u32)((s32)c->r[4] >> 31);
    c->r[3] = c->r[3] - c->r[2];
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[3];
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[4] - c->r[2];
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 2;
    c->r[2] = mem_r32(ram, c->r[5] + 0x0000000cu);
    c->r[2] = c->r[2] + c->r[3];
    mem_w32(ram, c->r[30] + 0x00000ac4u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] << 6;
    c->r[2] = c->r[2] + c->r[30];
    c->r[4] = c->r[2] + 0x000002d0u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000ac4u);
    c->r[3] = 0x08a80000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00002f90u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000000u);
    c->f[0] = mem_rf32(ram, c->r[3] + 0x00000020u);
    c->f[0] = c->f[1] - c->f[0];
    mem_wf32(ram, c->r[4] + 0x00000000u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] << 6;
    c->r[2] = c->r[2] + c->r[30];
    c->r[4] = c->r[2] + 0x000002d4u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000ac4u);
    c->r[2] = c->r[2] + 0x00000004u;
    c->r[3] = 0x08a80000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00002f90u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000000u);
    c->f[0] = mem_rf32(ram, c->r[3] + 0x00000024u);
    c->f[0] = c->f[1] - c->f[0];
    mem_wf32(ram, c->r[4] + 0x00000000u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] << 6;
    c->r[2] = c->r[2] + c->r[30];
    c->r[4] = c->r[2] + 0x000002d8u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000ac4u);
    c->r[2] = c->r[2] + 0x00000008u;
    c->r[3] = 0x08a80000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00002f90u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000000u);
    c->f[0] = mem_rf32(ram, c->r[3] + 0x00000028u);
    c->f[0] = c->f[1] - c->f[0];
    mem_wf32(ram, c->r[4] + 0x00000000u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] << 6;
    c->r[2] = c->r[2] + c->r[30];
    c->r[2] = c->r[2] + 0x000002dcu;
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00007758u);
    mem_wf32(ram, c->r[2] + 0x00000000u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[30];
    c->r[16] = c->r[2] + 0x00000120u;
    c->r[3] = c->r[30] + 0x000002a0u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] << 6;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = c->r[2] + 0x00000030u;
    { c->r[31] = 0x089426e8u; c->r[4] = c->r[2] + 0u; func_08820c6c(c, ram); }
    mem_wf32(ram, c->r[16] + 0x00000000u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    { int _c = (c->r[2] == 0u); if (_c) goto L_089427a4; }
    c->r[2] = c->r[30] + 0x00000ad0u;
    { c->r[31] = 0x08942704u; c->r[4] = c->r[2] + 0u; func_08808240(c, ram); }
    c->r[4] = c->r[30] + 0x00000ad0u;
    c->r[3] = c->r[30] + 0x000002a0u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] << 6;
    c->r[2] = c->r[3] + c->r[2];
    c->r[5] = c->r[2] + 0x00000030u;
    c->r[3] = c->r[30] + 0x000002a0u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] << 6;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = c->r[2] + 0xfffffff0u;
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x0000775cu);
    c->r[6] = c->r[2] + 0u;
    { c->r[31] = 0x08942744u; c->f[12] = c->f[0]; func_0885a058(c, ram); }
    c->r[4] = c->r[30] + 0x00000ad0u;
    c->r[3] = c->r[30] + 0x000002a0u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] << 6;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = c->r[2] + 0x00000030u;
    { c->r[31] = 0x08942764u; c->r[5] = c->r[2] + 0u; func_0884d0b0(c, ram); }
    mem_wf32(ram, c->r[30] + 0x00000ac8u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[30];
    c->r[16] = c->r[2] + 0x0000001cu;
    c->r[2] = c->r[30] + 0x00000ad0u;
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000ac8u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00007760u);
    c->f[0] = c->f[1] + c->f[0];
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0xffffbf30u;
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x089427a0u; c->f[12] = c->f[0]; func_089f23b0(c, ram); }
    mem_w32(ram, c->r[16] + 0x00000000u, c->r[2]);
L_089427a4:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[30];
    c->r[4] = c->r[2] + 0x000000a0u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000ab0u);
    c->r[2] = 0u + 0x00000012u;
    c->r[2] = alx_min(c->r[3], c->r[2]);
    mem_w32(ram, c->r[4] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_089427f0; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[30];
    c->r[3] = c->r[2] + 0x00000220u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000014u);
    { mem_wf32(ram, c->r[3] + 0x00000000u, c->f[0]); goto L_08942a94; }
L_089427f0:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[30];
    c->r[2] = c->r[2] + 0x00000220u;
    mem_w32(ram, c->r[30] + 0x00000ae8u, c->r[2]);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000ac0u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00007758u);
    alx_c_cond_s(c, 12, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_08942828; }
    { goto L_08942834; }
L_08942828:
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000ac0u);
    { mem_wf32(ram, c->r[30] + 0x00000aecu, c->f[0]); goto L_08942840; }
L_08942834:
    c->r[1] = 0x08a40000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0x00007758u);
    mem_wf32(ram, c->r[30] + 0x00000aecu, c->f[1]);
L_08942840:
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000aecu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000ae8u);
    mem_wf32(ram, c->r[2] + 0x00000000u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[30];
    c->r[5] = c->r[2] + 0x00000220u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[30];
    c->r[4] = c->r[2] + 0x00000220u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[30];
    c->r[2] = c->r[2] + 0x00000120u;
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000000u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00007764u);
    c->f[1] = c->f[1] * c->f[0];
    c->f[0] = mem_rf32(ram, c->r[3] + 0x00000014u);
    c->f[1] = c->f[1] + c->f[0];
    c->f[0] = mem_rf32(ram, c->r[4] + 0x00000000u);
    c->f[0] = c->f[0] * c->f[1];
    mem_wf32(ram, c->r[5] + 0x00000000u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x00000020u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000aa8u);
    c->r[3] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[4] = c->r[3] + c->r[2];
    c->r[2] = 0xaaaa0000u;
    c->r[2] = c->r[2] | 0xaaabu;
    alx_multu(c, c->r[4], c->r[2]);
    c->r[2] = c->hi;
    c->r[3] = c->r[2] >> 2;
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[2] = c->r[2] << 1;
    c->r[4] = c->r[4] - c->r[2];
    mem_w32(ram, c->r[30] + 0x00000af0u, c->r[4]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000af0u);
    c->r[2] = (c->r[3] < 0x00000006u) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_08942a94; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000af0u);
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08a40000u;
    c->r[2] = c->r[2] + 0x0000778cu;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    { u32 _t = c->r[2]; switch (_t) { case 0x08942918u: goto L_08942918; case 0x08942958u: goto L_08942958; case 0x08942998u: goto L_08942998; case 0x089429d8u: goto L_089429d8; case 0x08942a18u: goto L_08942a18; case 0x08942a58u: goto L_08942a58; default: recomp_trap_unknown_indirect(c, ram, 0x08942910u, _t); return; } }
L_08942918:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] << 6;
    c->r[2] = c->r[2] + c->r[30];
    c->r[3] = c->r[2] + 0x000002d0u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] << 6;
    c->r[2] = c->r[2] + c->r[30];
    c->r[2] = c->r[2] + 0x000002d0u;
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000ac0u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00007768u);
    c->f[1] = c->f[1] * c->f[0];
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000000u);
    c->f[0] = c->f[0] + c->f[1];
    { mem_wf32(ram, c->r[3] + 0x00000000u, c->f[0]); goto L_08942a94; }
L_08942958:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] << 6;
    c->r[2] = c->r[2] + c->r[30];
    c->r[3] = c->r[2] + 0x000002d0u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] << 6;
    c->r[2] = c->r[2] + c->r[30];
    c->r[2] = c->r[2] + 0x000002d0u;
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000ac0u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00007768u);
    c->f[1] = c->f[1] * c->f[0];
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000000u);
    c->f[0] = c->f[0] - c->f[1];
    { mem_wf32(ram, c->r[3] + 0x00000000u, c->f[0]); goto L_08942a94; }
L_08942998:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] << 6;
    c->r[2] = c->r[2] + c->r[30];
    c->r[3] = c->r[2] + 0x000002d4u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] << 6;
    c->r[2] = c->r[2] + c->r[30];
    c->r[2] = c->r[2] + 0x000002d4u;
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000ac0u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00007768u);
    c->f[1] = c->f[1] * c->f[0];
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000000u);
    c->f[0] = c->f[0] + c->f[1];
    { mem_wf32(ram, c->r[3] + 0x00000000u, c->f[0]); goto L_08942a94; }
L_089429d8:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] << 6;
    c->r[2] = c->r[2] + c->r[30];
    c->r[3] = c->r[2] + 0x000002d4u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] << 6;
    c->r[2] = c->r[2] + c->r[30];
    c->r[2] = c->r[2] + 0x000002d4u;
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000ac0u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00007768u);
    c->f[1] = c->f[1] * c->f[0];
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000000u);
    c->f[0] = c->f[0] - c->f[1];
    { mem_wf32(ram, c->r[3] + 0x00000000u, c->f[0]); goto L_08942a94; }
L_08942a18:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] << 6;
    c->r[2] = c->r[2] + c->r[30];
    c->r[3] = c->r[2] + 0x000002d8u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] << 6;
    c->r[2] = c->r[2] + c->r[30];
    c->r[2] = c->r[2] + 0x000002d8u;
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000ac0u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00007768u);
    c->f[1] = c->f[1] * c->f[0];
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000000u);
    c->f[0] = c->f[0] + c->f[1];
    { mem_wf32(ram, c->r[3] + 0x00000000u, c->f[0]); goto L_08942a94; }
L_08942a58:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] << 6;
    c->r[2] = c->r[2] + c->r[30];
    c->r[3] = c->r[2] + 0x000002d8u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] << 6;
    c->r[2] = c->r[2] + c->r[30];
    c->r[2] = c->r[2] + 0x000002d8u;
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000ac0u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00007768u);
    c->f[1] = c->f[1] * c->f[0];
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000000u);
    c->f[0] = c->f[0] - c->f[1];
    mem_wf32(ram, c->r[3] + 0x00000000u, c->f[0]);
L_08942a94:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x00000001u;
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
L_08942aa0:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000ab0u);
    c->r[2] = c->r[2] + 0x00000003u;
    mem_w32(ram, c->r[30] + 0x00000ab0u, c->r[2]);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000ac0u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00007754u);
    c->f[0] = c->f[1] - c->f[0];
    mem_wf32(ram, c->r[30] + 0x00000ac0u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]); goto L_0894258c; }
L_08942ad0:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000002u) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_08942ae8; }
    { goto L_08943a78; }
L_08942ae8:
    c->r[2] = 0x08a80000u;
    c->r[2] = c->r[2] + 0xffffbf30u;
    mem_w32(ram, c->r[30] + 0x00000ac4u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000ac4u);
    vfpu_exec(c, ram, 0xd8400000u); /* lv.q */
    vfpu_exec(c, ram, 0xd0068088u); /* vzero.q */
    vfpu_exec(c, ram, 0xd0068089u); /* vzero.q */
    vfpu_exec(c, ram, 0xd006808bu); /* vzero.q */
    vfpu_exec(c, ram, 0xdf8c2a66u); /* vfim.s */
    mem_w32(ram, c->r[30] + 0x00000008u, 0u);
L_08942b10:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = c->r[2] + 0xffffffffu;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = ((s32)c->r[2] < (s32)c->r[3]) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_08942b30; }
    { goto L_08942c24; }
L_08942b30:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[2] << 6;
    c->r[2] = c->r[2] + c->r[30];
    c->r[4] = c->r[2] + 0x000002a0u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[30];
    c->r[5] = c->r[2] + 0x000001a0u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[2] << 6;
    c->r[2] = c->r[2] + c->r[30];
    c->r[3] = c->r[2] + 0x000002a0u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[2] << 6;
    c->r[2] = c->r[2] + c->r[30];
    c->r[2] = c->r[2] + 0x000002e0u;
    vfpu_exec(c, ram, 0xd8640030u); /* lv.q */
    vfpu_exec(c, ram, 0xd8450030u); /* lv.q */
    vfpu_exec(c, ram, 0x60848508u); /* vsub.t */
    vfpu_exec(c, ram, 0x60808409u); /* vsub.t */
    vfpu_exec(c, ram, 0x6488880au); /* vdot.t */
    vfpu_exec(c, ram, 0xd0160a0au); /* vsqrt.s */
    vfpu_exec(c, ram, 0xf289880bu); /* vcrsp.t */
    vfpu_exec(c, ram, 0xf28b8809u); /* vcrsp.t */
    vfpu_exec(c, ram, 0x648b8b2au); /* vdot.t */
    vfpu_exec(c, ram, 0x6489894au); /* vdot.t */
    vfpu_exec(c, ram, 0x6488886au); /* vdot.t */
    vfpu_exec(c, ram, 0xd0112a2au); /* vrsq.s */
    vfpu_exec(c, ram, 0xd0114a4au); /* vrsq.s */
    vfpu_exec(c, ram, 0xd0116a6au); /* vrsq.s */
    vfpu_exec(c, ram, 0xde00083fu); /* vpfxd */
    vfpu_exec(c, ram, 0x652a8b0bu); /* vscl.t */
    vfpu_exec(c, ram, 0xde00083fu); /* vpfxd */
    vfpu_exec(c, ram, 0x654a8909u); /* vscl.t */
    vfpu_exec(c, ram, 0xde00083fu); /* vpfxd */
    vfpu_exec(c, ram, 0x656a8808u); /* vscl.t */
    vfpu_exec(c, ram, 0x640a0c2cu); /* vmul.s */
    vfpu_exec(c, ram, 0x652c8808u); /* vscl.t */
    vfpu_exec(c, ram, 0xf88b0000u); /* sv.q */
    vfpu_exec(c, ram, 0xf8890010u); /* sv.q */
    vfpu_exec(c, ram, 0xf8880020u); /* sv.q */
    vfpu_exec(c, ram, 0xe8aa0000u); /* sv.s */
    c->r[3] = c->r[30] + 0x000002a0u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[2] << 6;
    c->r[4] = c->r[3] + c->r[2];
    c->r[3] = c->r[30] + 0x000002a0u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[2] << 6;
    c->r[3] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[30];
    c->r[2] = c->r[2] + 0x00000220u;
    c->r[5] = c->r[3] + 0u;
    { c->r[31] = 0x08942c14u; c->f[12] = mem_rf32(ram, c->r[2] + 0x00000000u); func_0884c224(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]); goto L_08942b10; }
L_08942c24:
    c->r[3] = c->r[30] + 0x000002a0u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[2] << 6;
    c->r[4] = c->r[3] + c->r[2];
    c->r[3] = c->r[30] + 0x000002a0u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[2] << 6;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = c->r[2] + 0xffffffc0u;
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x08942c54u; c->r[6] = 0u + 0x00000030u; func_08a19db8(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[30];
    c->r[2] = c->r[2] + 0x000001a0u;
    mem_w32(ram, c->r[2] + 0x00000000u, 0u);
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000700u);
    c->r[2] = 0u + 0x000002e8u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[4] = c->lo;
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
    { c->r[31] = 0x08942cc8u; c->r[5] = c->r[2] + 0u; func_0894568c(c, ram); }
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000700u);
    c->r[2] = 0u + 0x000002e8u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[4] = c->lo;
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
    { c->r[31] = 0x08942d28u; c->r[5] = c->r[2] + 0u; func_0894568c(c, ram); }
    c->r[4] = 0x08a70000u;
    c->r[4] = c->r[4] + 0xffffb640u;
    { c->r[31] = 0x08942d38u; c->r[5] = 0u + 0u; func_089dfe30(c, ram); }
    c->r[4] = 0x08a70000u;
    c->r[4] = c->r[4] + 0xffffb640u;
    c->r[5] = 0u + 0x00000002u;
    { c->r[31] = 0x08942d4cu; c->r[6] = 0u + 0x00000007u; func_089df7a0(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000ab4u, 0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x0000002eu);
    c->r[2] = c->r[2] ^ 0x0001u;
    c->r[2] = (c->r[2] < 0x00000001u) ? 1u : 0u;
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x0000002eu);
    c->r[2] = c->r[2] ^ 0x0002u;
    c->r[2] = (c->r[2] < 0x00000001u) ? 1u : 0u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = c->r[2] | c->r[3];
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x0000002eu);
    c->r[2] = 0u + 0x00000004u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_08942e00; }
    c->r[4] = 0x08a70000u;
    c->r[4] = c->r[4] + 0xffffb640u;
    c->r[5] = 0u + 0x00000003u;
    { c->r[31] = 0x08942da8u; c->r[6] = 0u + 0x00000007u; func_089df7a0(c, ram); }
    c->r[2] = 0x08aa0000u;
    c->r[2] = mem_r16(ram, c->r[2] + 0x0000010au);
    c->r[3] = c->r[30] + 0x00000ab0u;
    c->r[8] = c->r[30] + 0x00000ac4u;
    c->r[4] = 0x08a70000u;
    c->r[4] = c->r[4] + 0xffffb640u;
    c->r[5] = c->r[2] + 0u;
    c->r[6] = 0u + 0u;
    { c->r[31] = 0x08942dd0u; c->r[7] = c->r[3] + 0u; func_08890404(c, ram); }
    c->r[2] = 0x08aa0000u;
    c->r[2] = mem_r16(ram, c->r[2] + 0x0000010au);
    c->r[3] = c->r[30] + 0x00000aacu;
    c->r[4] = 0x08a70000u;
    c->r[4] = c->r[4] + 0xffffb640u;
    c->r[5] = c->r[2] + 0u;
    c->r[6] = 0u + 0u;
    c->r[7] = c->r[3] + 0u;
    { c->r[31] = 0x08942df8u; c->r[8] = 0u + 0u; func_08890404(c, ram); }
    { goto L_08942fac; }
L_08942e00:
    c->r[2] = 0x08aa0000u;
    c->r[2] = mem_r16(ram, c->r[2] + 0x00000106u);
    c->r[3] = c->r[30] + 0x00000ab0u;
    c->r[8] = c->r[30] + 0x00000ac4u;
    c->r[4] = 0x08a70000u;
    c->r[4] = c->r[4] + 0xffffb640u;
    c->r[5] = c->r[2] + 0u;
    c->r[6] = 0u + 0u;
    { c->r[31] = 0x08942e28u; c->r[7] = c->r[3] + 0u; func_08890404(c, ram); }
    c->r[2] = 0x08aa0000u;
    c->r[2] = mem_r16(ram, c->r[2] + 0x00000108u);
    c->r[3] = c->r[30] + 0x00000aacu;
    c->r[4] = 0x08a70000u;
    c->r[4] = c->r[4] + 0xffffb640u;
    c->r[5] = c->r[2] + 0u;
    c->r[6] = 0u + 0u;
    c->r[7] = c->r[3] + 0u;
    { c->r[31] = 0x08942e50u; c->r[8] = 0u + 0u; func_08890404(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_08942fac; }
    c->r[2] = 0u + 0x00000001u;
    mem_w32(ram, c->r[30] + 0x00000ab4u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000018u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x0000776cu);
    c->f[1] = c->f[1] - c->f[0];
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00007770u);
    c->f[1] = c->f[1] / c->f[0];
    c->f[0] = u2f(0u);
    alx_c_cond_s(c, 12, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_08942ea0; }
    { goto L_08942ed0; }
L_08942ea0:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000018u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x0000776cu);
    c->f[1] = c->f[1] - c->f[0];
    mem_wf32(ram, c->r[30] + 0x00000af4u, c->f[1]);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00007770u);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000af4u);
    c->f[1] = c->f[1] / c->f[0];
    { mem_wf32(ram, c->r[30] + 0x00000af4u, c->f[1]); goto L_08942ed4; }
L_08942ed0:
    mem_w32(ram, c->r[30] + 0x00000af4u, 0u);
L_08942ed4:
    c->f[2] = mem_rf32(ram, c->r[30] + 0x00000af4u);
    mem_wf32(ram, c->r[30] + 0x00000ac0u, c->f[2]);
    c->r[4] = 0x08aa0000u;
    { c->r[31] = 0x08942ee8u; c->r[4] = c->r[4] + 0x000000f0u; func_0888d9b8(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000af8u, c->r[2]);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000ac0u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00007774u);
    c->f[1] = c->f[1] * c->f[0];
    mem_wf32(ram, c->r[30] + 0x00000afcu, c->f[1]);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00007778u);
    mem_wf32(ram, c->r[30] + 0x00000b04u, c->f[0]);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000afcu);
    c->f[2] = mem_rf32(ram, c->r[30] + 0x00000b04u);
    alx_c_cond_s(c, 14, c->f[2], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_08942f34; }
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000afcu);
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    { mem_wf32(ram, c->r[30] + 0x00000b00u, c->f[0]); goto L_08942f58; }
L_08942f34:
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000afcu);
    c->f[2] = mem_rf32(ram, c->r[30] + 0x00000b04u);
    c->f[0] = c->f[1] - c->f[2];
    c->r[2] = 0x80000000u;
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    mem_wf32(ram, c->r[30] + 0x00000b00u, c->f[0]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000b00u);
    c->r[3] = c->r[3] | c->r[2];
    mem_w32(ram, c->r[30] + 0x00000b00u, c->r[3]);
L_08942f58:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000b00u);
    c->r[2] = c->r[3] << 24;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000af8u);
    c->r[5] = c->r[3] | c->r[2];
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000700u);
    c->r[2] = 0u + 0x000002e8u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[4] = c->lo;
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
    { c->r[31] = 0x08942facu; c->r[4] = c->r[2] + 0u; func_089456d0(c, ram); }
L_08942fac:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x0000002eu);
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08a60000u;
    c->r[2] = c->r[2] + 0xffff84a8u;
    c->r[2] = c->r[3] + c->r[2];
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000000u);
    mem_wf32(ram, c->r[30] + 0x00000ac8u, c->f[0]);
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000700u);
    c->r[2] = 0u + 0x000002e8u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[4] = c->lo;
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
    { c->r[31] = 0x08943014u; c->r[5] = 0u + 0x00000009u; func_089458a0(c, ram); }
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000700u);
    c->r[2] = 0u + 0x000002e8u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[4] = c->lo;
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
    c->r[6] = 0u + 0u;
    c->r[7] = 0u + 0u;
    { c->r[31] = 0x08943068u; c->r[8] = 0u + 0x00000001u; func_089458dc(c, ram); }
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000700u);
    c->r[2] = 0u + 0x000002e8u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[4] = c->lo;
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
    { c->r[31] = 0x089430b4u; c->r[6] = mem_r32(ram, c->r[30] + 0x00000ac4u); func_08945820(c, ram); }
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000700u);
    c->r[2] = 0u + 0x000002e8u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[4] = c->lo;
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
    c->r[6] = 0u + 0x00000020u;
    c->r[7] = 0u + 0x00000020u;
    c->r[8] = 0u + 0x00000020u;
    { c->r[31] = 0x0894310cu; c->r[9] = mem_r32(ram, c->r[30] + 0x00000ab0u); func_08945748(c, ram); }
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000700u);
    c->r[2] = 0u + 0x000002e8u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[4] = c->lo;
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
    c->r[2] = c->r[2] + 0x00000190u;
    c->r[2] = c->r[2] >> 24;
    c->r[2] = c->r[2] & 0x000fu;
    c->r[3] = c->r[2] << 16;
    c->r[2] = 0x10000000u;
    c->r[2] = c->r[3] | c->r[2];
    { c->r[31] = 0x0894316cu; c->r[5] = c->r[2] + 0u; func_0894568c(c, ram); }
    c->r[2] = 0u + 0x00004381u;
    mem_w32(ram, c->r[30] + 0x00000aa8u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_0894318c; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000aa8u);
    c->r[2] = c->r[2] | 0x001cu;
    mem_w32(ram, c->r[30] + 0x00000aa8u, c->r[2]);
L_0894318c:
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000700u);
    c->r[2] = 0u + 0x000002e8u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[4] = c->lo;
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
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000aa8u);
    c->r[2] = 0x00ff0000u;
    c->r[2] = c->r[2] | 0xffffu;
    c->r[3] = c->r[3] & c->r[2];
    c->r[2] = 0x12000000u;
    c->r[2] = c->r[3] | c->r[2];
    { c->r[31] = 0x089431e8u; c->r[5] = c->r[2] + 0u; func_0894568c(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000008u, 0u);
L_089431ec:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = c->r[2] + 0xffffffffu;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = ((s32)c->r[2] < (s32)c->r[3]) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_0894320c; }
    { goto L_089435fc; }
L_0894320c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    mem_w32(ram, c->r[30] + 0x00000b08u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000b08u);
    { int _c = (c->r[3] == 0u); if (_c) goto L_08943238; }
    c->r[2] = 0u + 0x00000001u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000b08u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_089432e4; }
    { goto L_089433e4; }
L_08943238:
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000700u);
    c->r[2] = 0u + 0x000002e8u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[4] = c->lo;
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
    { c->r[31] = 0x08943284u; c->r[6] = 0u + 0x00000001u; func_08945708(c, ram); }
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000700u);
    c->r[2] = 0u + 0x000002e8u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[4] = c->lo;
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
    c->r[6] = 0u + 0x00000020u;
    c->r[7] = 0u + 0x00000020u;
    c->r[8] = 0u + 0x00000020u;
    { c->r[31] = 0x089432dcu; c->r[9] = mem_r32(ram, c->r[30] + 0x00000aacu); func_08945748(c, ram); }
    { goto L_0894355c; }
L_089432e4:
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000700u);
    c->r[2] = 0u + 0x000002e8u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[4] = c->lo;
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
    { c->r[31] = 0x08943330u; c->r[6] = 0u + 0u; func_08945708(c, ram); }
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000700u);
    c->r[2] = 0u + 0x000002e8u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[4] = c->lo;
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
    c->r[6] = 0u + 0x00000020u;
    c->r[7] = 0u + 0x00000020u;
    c->r[8] = 0u + 0x00000020u;
    { c->r[31] = 0x08943388u; c->r[9] = mem_r32(ram, c->r[30] + 0x00000ab0u); func_08945748(c, ram); }
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000700u);
    c->r[2] = 0u + 0x000002e8u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[4] = c->lo;
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
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00007758u);
    c->r[4] = c->r[2] + 0u;
    c->f[12] = mem_rf32(ram, c->r[30] + 0x00000ac8u);
    { c->r[31] = 0x089433dcu; c->f[13] = c->f[0]; func_089457a0(c, ram); }
    { goto L_0894355c; }
L_089433e4:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000ab4u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_0894355c; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = c->r[2] + 0xfffffffeu;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    { int _c = (c->r[2] != c->r[3]); if (_c) goto L_0894355c; }
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000700u);
    c->r[2] = 0u + 0x000002e8u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[4] = c->lo;
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
    { c->r[31] = 0x08943450u; c->r[6] = 0u + 0x00000001u; func_08945708(c, ram); }
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000700u);
    c->r[2] = 0u + 0x000002e8u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[4] = c->lo;
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
    c->r[6] = 0u + 0x00000020u;
    c->r[7] = 0u + 0x00000020u;
    c->r[8] = 0u + 0x00000020u;
    { c->r[31] = 0x089434a8u; c->r[9] = mem_r32(ram, c->r[30] + 0x00000aacu); func_08945748(c, ram); }
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000700u);
    c->r[2] = 0u + 0x000002e8u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[4] = c->lo;
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
    c->f[0] = mem_rf32(ram, c->r[1] + 0x0000777cu);
    c->r[1] = 0x08a40000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0x00007758u);
    c->r[4] = c->r[2] + 0u;
    c->f[12] = c->f[0];
    { c->r[31] = 0x08943504u; c->f[13] = c->f[1]; func_089457a0(c, ram); }
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000700u);
    c->r[2] = 0u + 0x000002e8u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[4] = c->lo;
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
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00007758u);
    c->r[4] = c->r[2] + 0u;
    c->f[12] = c->f[0];
    c->f[13] = u2f(0u);
    { c->r[31] = 0x0894355cu; func_089457e0(c, ram); }
L_0894355c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[30];
    c->r[2] = c->r[2] + 0x00000020u;
    c->r[3] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[2] = 0u + 0x00000002u;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_089435ec; }
    c->r[3] = c->r[30] + 0x000002a0u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[2] << 6;
    c->r[4] = c->r[3] + c->r[2];
    c->r[3] = c->r[30] + 0x000002a0u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[2] << 6;
    c->r[2] = c->r[3] + c->r[2];
    c->r[5] = c->r[2] + 0x00000040u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[30];
    c->r[6] = c->r[2] + 0x00000120u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[30];
    c->r[7] = c->r[2] + 0x000001a0u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[30];
    c->r[3] = c->r[2] + 0x000000a0u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x0000002eu);
    c->f[12] = mem_rf32(ram, c->r[6] + 0x00000000u);
    c->f[13] = mem_rf32(ram, c->r[7] + 0x00000000u);
    c->r[6] = mem_r32(ram, c->r[3] + 0x00000000u);
    { c->r[31] = 0x089435ecu; c->r[7] = c->r[2] + 0u; func_08943a90(c, ram); }
L_089435ec:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]); goto L_089431ec; }
L_089435fc:
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000700u);
    c->r[2] = 0u + 0x000002e8u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[4] = c->lo;
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
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00007758u);
    c->r[1] = 0x08a40000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0x00007758u);
    c->r[4] = c->r[2] + 0u;
    c->f[12] = c->f[0];
    { c->r[31] = 0x08943658u; c->f[13] = c->f[1]; func_089457a0(c, ram); }
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000700u);
    c->r[2] = 0u + 0x000002e8u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[4] = c->lo;
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
    { c->r[31] = 0x089436a8u; func_089457e0(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x0000002eu);
    { int _c = (c->r[2] != 0u); if (_c) goto L_089439b8; }
    c->r[4] = 0x08aa0000u;
    { c->r[31] = 0x089436c4u; c->r[4] = c->r[4] + 0x000000f0u; func_0888d9b8(c, ram); }
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
    { c->r[31] = 0x0894370cu; c->r[4] = c->r[2] + 0u; func_089456d0(c, ram); }
    c->r[2] = 0x08aa0000u;
    c->r[2] = mem_r16(ram, c->r[2] + 0x00000104u);
    c->r[4] = 0x08a70000u;
    c->r[4] = c->r[4] + 0xffffb640u;
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x08943728u; c->r[6] = 0u + 0u; func_089e0bd8(c, ram); }
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000700u);
    c->r[2] = 0u + 0x000002e8u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[4] = c->lo;
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
    c->r[2] = c->r[2] + 0xffff8350u;
    c->r[2] = c->r[2] >> 24;
    c->r[2] = c->r[2] & 0x000fu;
    c->r[3] = c->r[2] << 16;
    c->r[2] = 0x10000000u;
    c->r[2] = c->r[3] | c->r[2];
    { c->r[31] = 0x08943788u; c->r[5] = c->r[2] + 0u; func_0894568c(c, ram); }
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000700u);
    c->r[2] = 0u + 0x000002e8u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[4] = c->lo;
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
    { c->r[31] = 0x089437d4u; c->r[5] = c->r[5] | 0x0183u; func_0894568c(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000008u, 0u);
L_089437d8:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = c->r[2] + 0xffffffffu;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = ((s32)c->r[2] < (s32)c->r[3]) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_089437f8; }
    { goto L_0894396c; }
L_089437f8:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[30];
    c->r[2] = c->r[2] + 0x00000120u;
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000000u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00007780u);
    alx_c_cond_s(c, 12, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_08943858; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[30];
    c->r[2] = c->r[2] + 0x00000124u;
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000000u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00007780u);
    alx_c_cond_s(c, 12, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_08943858; }
    { goto L_0894395c; }
L_08943858:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[30];
    c->r[2] = c->r[2] + 0x000000a0u;
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000000u);
    c->f[1] = (f32)(s32)f2u(c->f[0]);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00007784u);
    c->f[1] = c->f[1] / c->f[0];
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00007758u);
    alx_c_cond_s(c, 12, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_0894389c; }
    { goto L_089438ac; }
L_0894389c:
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00007758u);
    { mem_wf32(ram, c->r[30] + 0x00000b0cu, c->f[0]); goto L_089438dc; }
L_089438ac:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[30];
    c->r[2] = c->r[2] + 0x000000a0u;
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000000u);
    c->f[0] = (f32)(s32)f2u(c->f[0]);
    mem_wf32(ram, c->r[30] + 0x00000b0cu, c->f[0]);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00007784u);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000b0cu);
    c->f[1] = c->f[1] / c->f[0];
    mem_wf32(ram, c->r[30] + 0x00000b0cu, c->f[1]);
L_089438dc:
    c->f[2] = mem_rf32(ram, c->r[30] + 0x00000b0cu);
    mem_wf32(ram, c->r[30] + 0x00000ac8u, c->f[2]);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000ac8u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00007788u);
    alx_c_cond_s(c, 12, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_08943908; }
    { goto L_0894395c; }
L_08943908:
    c->r[3] = c->r[30] + 0x000002a0u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[2] << 6;
    c->r[4] = c->r[3] + c->r[2];
    c->r[3] = c->r[30] + 0x000002a0u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[2] << 6;
    c->r[2] = c->r[3] + c->r[2];
    c->r[5] = c->r[2] + 0x00000040u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[30];
    c->r[3] = c->r[2] + 0x00000120u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[30];
    c->r[2] = c->r[2] + 0x00000124u;
    c->f[12] = mem_rf32(ram, c->r[3] + 0x00000000u);
    c->f[13] = mem_rf32(ram, c->r[2] + 0x00000000u);
    { c->r[31] = 0x0894395cu; c->f[14] = mem_rf32(ram, c->r[30] + 0x00000ac8u); func_08943f34(c, ram); }
L_0894395c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]); goto L_089437d8; }
L_0894396c:
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000700u);
    c->r[2] = 0u + 0x000002e8u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[4] = c->lo;
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
    { c->r[31] = 0x089439b8u; c->r[5] = mem_r32(ram, c->r[5] + 0x00005420u); func_089456d0(c, ram); }
L_089439b8:
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000700u);
    c->r[2] = 0u + 0x000002e8u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[4] = c->lo;
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
    { c->r[31] = 0x08943a18u; c->r[5] = c->r[2] + 0u; func_0894568c(c, ram); }
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000700u);
    c->r[2] = 0u + 0x000002e8u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[4] = c->lo;
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
    { c->r[31] = 0x08943a78u; c->r[5] = c->r[2] + 0u; func_0894568c(c, ram); }
L_08943a78:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000b18u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000b14u);
    c->r[16] = mem_r32(ram, c->r[29] + 0x00000b10u);
    { c->r[29] = c->r[29] + 0x00000b20u; return; }
    return; /* fell out of func_089423b8 */
}

/* func_089461d0  0x089461d0..0x08946214  68 bytes, source=sweep */
void func_089461d0(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089461d0u);
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
    { c->r[31] = 0x08946200u; c->r[5] = c->r[2] + 0u; func_0894568c(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_089461d0 */
}

/* func_0894ba84  0x0894ba84..0x0894bb54  208 bytes, source=sweep */
void func_0894ba84(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0894ba84u);
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
    return; /* fell out of func_0894ba84 */
}

/* func_0894db34  0x0894db34..0x0894dc70  316 bytes, source=sweep */
void func_0894db34(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0894db34u);
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
    { int _c = (c->r[2] == 0u); if (_c) goto L_0894db8c; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = 0x00ff0000u;
    c->r[2] = c->r[2] | 0xffffu;
    c->r[3] = c->r[3] & c->r[2];
    c->r[2] = 0x12000000u;
    c->r[2] = c->r[3] | c->r[2];
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x0894db8cu; c->r[5] = c->r[2] + 0u; func_0894d9d8(c, ram); }
L_0894db8c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_0894dbe0; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = c->r[2] >> 24;
    c->r[2] = c->r[2] & 0x000fu;
    c->r[3] = c->r[2] << 16;
    c->r[2] = 0x10000000u;
    c->r[2] = c->r[3] | c->r[2];
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x0894dbbcu; c->r[5] = c->r[2] + 0u; func_0894d9d8(c, ram); }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = 0x00ff0000u;
    c->r[2] = c->r[2] | 0xffffu;
    c->r[3] = c->r[3] & c->r[2];
    c->r[2] = 0x02000000u;
    c->r[2] = c->r[3] | c->r[2];
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x0894dbe0u; c->r[5] = c->r[2] + 0u; func_0894d9d8(c, ram); }
L_0894dbe0:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_0894dc34; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = c->r[2] >> 24;
    c->r[2] = c->r[2] & 0x000fu;
    c->r[3] = c->r[2] << 16;
    c->r[2] = 0x10000000u;
    c->r[2] = c->r[3] | c->r[2];
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x0894dc10u; c->r[5] = c->r[2] + 0u; func_0894d9d8(c, ram); }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = 0x00ff0000u;
    c->r[2] = c->r[2] | 0xffffu;
    c->r[3] = c->r[3] & c->r[2];
    c->r[2] = 0x01000000u;
    c->r[2] = c->r[3] | c->r[2];
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x0894dc34u; c->r[5] = c->r[2] + 0u; func_0894d9d8(c, ram); }
L_0894dc34:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[2] & 0x0007u;
    c->r[3] = c->r[2] << 16;
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = c->r[3] | c->r[2];
    c->r[2] = 0x04000000u;
    c->r[2] = c->r[3] | c->r[2];
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x0894dc5cu; c->r[5] = c->r[2] + 0u; func_0894d9d8(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000024u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000020u);
    { c->r[29] = c->r[29] + 0x00000030u; return; }
    return; /* fell out of func_0894db34 */
}

/* func_08955110  0x08955110..0x0895514c  60 bytes, source=sweep */
void func_08955110(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08955110u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000004u);
    { c->r[31] = 0x08955138u; c->r[6] = 0u + 0u; func_08955310(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_08955110 */
}

/* func_08957fc8  0x08957fc8..0x0895800c  68 bytes, source=sweep */
void func_08957fc8(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08957fc8u);
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
    return; /* fell out of func_08957fc8 */
}

/* func_0895a5f8  0x0895a5f8..0x0895a63c  68 bytes, source=sweep */
void func_0895a5f8(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0895a5f8u);
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
    return; /* fell out of func_0895a5f8 */
}

/* func_0895c098  0x0895c098..0x0895c14c  180 bytes, source=fde */
void func_0895c098(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0895c098u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    { c->r[31] = 0x0895c0b4u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u); func_089669c4(c, ram); }
    { int _c = (c->r[2] != 0u); if (_c) goto L_0895c0c4; }
    { mem_w32(ram, c->r[30] + 0x00000008u, 0u); goto L_0895c134; }
L_0895c0c4:
    c->r[4] = 0x08aa0000u;
    { c->r[31] = 0x0895c0d0u; c->r[4] = c->r[4] + 0x00004960u; func_0895bcd4(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000004u, 0u);
L_0895c0d4:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = ((s32)c->r[2] < (s32)0x000000ffu) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_0895c0ec; }
    { goto L_0895c12c; }
L_0895c0ec:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = c->r[2] << 3;
    c->r[2] = 0x08aa0000u;
    c->r[2] = c->r[2] + 0x000049dcu;
    c->r[2] = c->r[3] + c->r[2];
    mem_w32(ram, c->r[2] + 0x00000000u, 0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = c->r[2] << 3;
    c->r[2] = 0x08aa0000u;
    c->r[2] = c->r[2] + 0x000049e0u;
    c->r[2] = c->r[3] + c->r[2];
    mem_w32(ram, c->r[2] + 0x00000000u, 0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000004u, c->r[2]); goto L_0895c0d4; }
L_0895c12c:
    c->r[2] = 0u + 0x00000001u;
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]);
L_0895c134:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_0895c098 */
}

/* func_089604f0  0x089604f0..0x089605e4  244 bytes, source=fde */
void func_089604f0(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089604f0u);
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
    { int _c = (c->r[2] != 0u); if (_c) goto L_08960560; }
    c->r[2] = 0x08aa0000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x000052ecu);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = 0u + 0x0000002cu;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[3] = c->lo;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[4] = c->r[2] + 0u;
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x08960558u; c->r[6] = 0u + 0u; func_0895ee18(c, ram); }
    { goto L_089605d0; }
L_08960560:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = c->r[2] << 3;
    c->r[2] = 0x08aa0000u;
    c->r[2] = c->r[2] + 0x000049e0u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[3] = mem_r8(ram, c->r[2] + 0x00000098u);
    c->r[2] = 0u + 0x00000003u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_089605c8; }
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
    c->r[2] = c->r[2] | 0x0100u;
    { mem_w32(ram, c->r[4] + 0x0000008cu, c->r[2]); goto L_089605d0; }
L_089605c8:
    { c->r[31] = 0x089605d0u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u); func_089603b0(c, ram); }
L_089605d0:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_089604f0 */
}

/* func_0896284c  0x0896284c..0x089629b4  360 bytes, source=fde */
void func_0896284c(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0896284cu);
    c->r[29] = c->r[29] + 0xffffffa0u;
    mem_w32(ram, c->r[29] + 0x00000054u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000050u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_wf32(ram, c->r[30] + 0x00000004u, c->f[12]);
    mem_wf32(ram, c->r[30] + 0x00000008u, c->f[13]);
    mem_wf32(ram, c->r[30] + 0x0000000cu, c->f[14]);
    c->r[2] = c->r[30] + 0x00000020u;
    { c->r[31] = 0x08962878u; c->r[4] = c->r[2] + 0u; func_08808240(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_08962898; }
    c->r[2] = 0x08a80000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00002ed8u);
    c->r[2] = c->r[2] + 0x00000020u;
    { mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]); goto L_08962924; }
L_08962898:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = c->r[2] << 3;
    c->r[2] = 0x08aa0000u;
    c->r[2] = c->r[2] + 0x000049dcu;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_089628c0; }
    { mem_w32(ram, c->r[30] + 0x00000040u, 0u); goto L_0896299c; }
L_089628c0:
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
    { c->r[31] = 0x089628f4u; c->r[5] = mem_r32(ram, c->r[2] + 0x00000000u); func_088d6ab8(c, ram); }
    { int _c = (c->r[2] == 0u); if (_c) goto L_08962904; }
    { mem_w32(ram, c->r[30] + 0x00000040u, 0u); goto L_0896299c; }
L_08962904:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = c->r[2] << 3;
    c->r[2] = 0x08aa0000u;
    c->r[2] = c->r[2] + 0x000049dcu;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000020u;
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]);
L_08962924:
    c->r[2] = c->r[30] + 0x00000030u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[4] = c->r[2] + 0u;
    c->f[12] = mem_rf32(ram, c->r[30] + 0x00000004u);
    c->f[13] = mem_rf32(ram, c->r[3] + 0x00000004u);
    c->f[14] = mem_rf32(ram, c->r[30] + 0x00000008u);
    c->f[15] = u2f(0u);
    { c->r[31] = 0x08962948u; func_0880d140(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000030u);
    mem_w32(ram, c->r[30] + 0x00000020u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000034u);
    mem_w32(ram, c->r[30] + 0x00000024u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000038u);
    mem_w32(ram, c->r[30] + 0x00000028u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000003cu);
    mem_w32(ram, c->r[30] + 0x0000002cu, c->r[2]);
    c->r[2] = c->r[30] + 0x00000020u;
    c->r[3] = c->r[30] + 0x00000020u;
    c->r[4] = c->r[2] + 0u;
    c->r[5] = c->r[3] + 0u;
    c->r[6] = 0x08aa0000u;
    { c->r[31] = 0x08962984u; c->r[6] = c->r[6] + 0xffffebd0u; func_08859fd4(c, ram); }
    c->r[2] = c->r[30] + 0x00000020u;
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x08962998u; c->f[12] = mem_rf32(ram, c->r[30] + 0x0000000cu); func_088ef73c(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000040u, c->r[2]);
L_0896299c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000040u);
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000054u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000050u);
    { c->r[29] = c->r[29] + 0x00000060u; return; }
    return; /* fell out of func_0896284c */
}

/* func_08965780  0x08965780..0x089657c4  68 bytes, source=sweep */
void func_08965780(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08965780u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r8(ram, c->r[2] + 0x0000000fu);
    { int _c = (c->r[2] != 0u); if (_c) goto L_089657ac; }
    c->r[2] = 0u + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000004u, c->r[2]); goto L_089657b0; }
L_089657ac:
    mem_w32(ram, c->r[30] + 0x00000004u, 0u);
L_089657b0:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_08965780 */
}

/* func_08968d84  0x08968d84..0x08968e10  140 bytes, source=sweep */
void func_08968d84(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08968d84u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000008u, 0u);
    mem_w32(ram, c->r[30] + 0x00000004u, 0u);
L_08968d9c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000005u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_08968db4; }
    { goto L_08968dfc; }
L_08968db4:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = c->r[2] << 4;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = c->r[3] + c->r[2];
    c->r[2] = 0x08a60000u;
    c->r[2] = c->r[2] + 0xffff9b1cu;
    c->r[2] = c->r[3] + c->r[2];
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000000u);
    c->r[2] = 0u + 0xffffffffu;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_08968dec; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[2] + 0x00000001u;
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]);
L_08968dec:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000004u, c->r[2]); goto L_08968d9c; }
L_08968dfc:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_08968d84 */
}

/* func_08969dbc  0x08969dbc..0x08969dec  48 bytes, source=sweep */
void func_08969dbc(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08969dbcu);
    c->r[29] = c->r[29] + 0xfffffff0u;
    mem_w32(ram, c->r[29] + 0x00000000u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    c->r[2] = 0x08a90000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0xffffbda0u);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x0000012au);
    c->r[2] = c->r[2] ^ 0x0000u;
    c->r[2] = (c->r[2] < 0x00000001u) ? 1u : 0u;
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000000u);
    { c->r[29] = c->r[29] + 0x00000010u; return; }
    return; /* fell out of func_08969dbc */
}

/* func_0896af94  0x0896af94..0x0896b288  756 bytes, source=fde */
void func_0896af94(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0896af94u);
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
    mem_w32(ram, c->r[30] + 0x00000010u, 0u);
    c->r[3] = mem_r8(ram, c->r[30] + 0x00000004u);
    c->r[2] = 0u + 0x00000001u;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_0896afdc; }
    { goto L_0896b270; }
L_0896afdc:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r8(ram, c->r[2] + 0x0000000eu);
    mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]);
    c->r[2] = 0u + 0x00000012u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000018u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_0896b140; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = ((s32)c->r[3] < (s32)0x00000013u) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_0896b020; }
    c->r[2] = 0u + 0x00000001u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000018u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_0896b048; }
    { goto L_0896b270; }
L_0896b020:
    c->r[2] = 0u + 0x00000013u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000018u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_0896b178; }
    c->r[2] = 0u + 0x0000002bu;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000018u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_0896b210; }
    { goto L_0896b270; }
L_0896b048:
    { c->r[31] = 0x0896b050u; c->r[4] = mem_r32(ram, c->r[30] + 0x0000000cu); func_0896e3a0(c, ram); }
    { c->r[31] = 0x0896b058u; c->r[4] = 0u + 0u; func_0880b1a0(c, ram); }
    { c->r[31] = 0x0896b060u; c->r[4] = mem_r32(ram, c->r[30] + 0x0000000cu); func_0896e378(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = 0u + 0x00000001u;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_0896b0a4; }
    c->r[4] = 0x08a60000u;
    c->r[4] = c->r[4] + 0x00005260u;
    { c->r[31] = 0x0896b080u; c->r[5] = 0u + 0x00000002u; func_089d7208(c, ram); }
    { c->r[31] = 0x0896b088u; func_0881231c(c, ram); }
    c->r[4] = 0x08a60000u;
    c->r[4] = c->r[4] + 0x00005260u;
    { c->r[31] = 0x0896b098u; c->r[5] = 0u + 0x00000003u; func_089d7194(c, ram); }
    c->r[4] = mem_r32(ram, c->r[30] + 0x0000000cu);
    { c->r[31] = 0x0896b0a4u; c->r[5] = 0u + 0x00000001u; func_0896e344(c, ram); }
L_0896b0a4:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    { c->r[31] = 0x0896b0b0u; mem_w8(ram, c->r[2] + 0x00000010u, 0u); func_0896a284(c, ram); }
    { c->r[31] = 0x0896b0b8u; c->r[4] = c->r[2] + 0u; func_0896cb9c(c, ram); }
    { c->r[31] = 0x0896b0c0u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u); func_0896c2e4(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_0896b0f4; }
    { c->r[31] = 0x0896b0d8u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u); func_0896ec90(c, ram); }
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0u + 0x00000008u;
    mem_w32(ram, c->r[3] + 0x00000004u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0u + 0x00000012u;
    { mem_w8(ram, c->r[3] + 0x0000000eu, c->r[2]); goto L_0896b270; }
L_0896b0f4:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    { int _c = ((s32)c->r[2] >= 0); if (_c) goto L_0896b120; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    mem_w32(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x0896b118u; c->r[5] = 0u + 0x00000033u; func_0896a7b8(c, ram); }
    { goto L_0896b270; }
L_0896b120:
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x0896b12cu; c->r[4] = c->r[4] + 0x000027dcu; func_089d3564(c, ram); }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x0896b138u; c->r[5] = 0u + 0u; func_0896a7b8(c, ram); }
    { goto L_0896b270; }
L_0896b140:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000004u);
    { int _c = ((s32)c->r[2] > 0); if (_c) goto L_0896b160; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0u + 0x00000013u;
    { mem_w8(ram, c->r[3] + 0x0000000eu, c->r[2]); goto L_0896b270; }
L_0896b160:
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000004u);
    c->r[2] = c->r[2] + 0xffffffffu;
    { mem_w32(ram, c->r[3] + 0x00000004u, c->r[2]); goto L_0896b270; }
L_0896b178:
    { c->r[31] = 0x0896b180u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u); func_0896c2e4(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = 0u + 0x00000001u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_0896b1c8; }
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x0896b1a0u; c->r[4] = c->r[4] + 0x000027dcu; func_089d3564(c, ram); }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x0896b1acu; c->r[5] = 0u + 0u; func_0896a7b8(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x00000028u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    { c->r[31] = 0x0896b1c0u; c->r[4] = c->r[2] + 0u; func_0896e7c0(c, ram); }
    { goto L_0896b200; }
L_0896b1c8:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    { int _c = ((s32)c->r[2] >= 0); if (_c) goto L_0896b200; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    mem_w32(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x0896b1ecu; c->r[5] = 0u + 0x00000033u; func_0896a7b8(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x00000028u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    { c->r[31] = 0x0896b200u; c->r[4] = c->r[2] + 0u; func_0896e7c0(c, ram); }
L_0896b200:
    { c->r[31] = 0x0896b208u; c->r[4] = mem_r32(ram, c->r[30] + 0x0000000cu); func_0896e2f8(c, ram); }
    { goto L_0896b270; }
L_0896b210:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x00000028u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000ac8u;
    { c->r[31] = 0x0896b22cu; c->r[5] = c->r[2] + 0u; func_089cb820(c, ram); }
    { int _c = (c->r[2] == 0u); if (_c) goto L_0896b23c; }
    { goto L_0896b270; }
L_0896b23c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r8(ram, c->r[2] + 0x0000000du);
    { int _c = (c->r[2] != 0u); if (_c) goto L_0896b268; }
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000af4u;
    { c->r[31] = 0x0896b25cu; c->r[5] = 0u + 0u; func_0880d2bc(c, ram); }
    c->r[2] = 0u + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]); goto L_0896b270; }
L_0896b268:
    { c->r[31] = 0x0896b270u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u); func_0896a824(c, ram); }
L_0896b270:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000024u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000020u);
    { c->r[29] = c->r[29] + 0x00000030u; return; }
    return; /* fell out of func_0896af94 */
}

/* func_0896dd9c  0x0896dd9c..0x0896df08  364 bytes, source=fde */
void func_0896dd9c(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0896dd9cu);
    c->r[29] = c->r[29] + 0xffffffd0u;
    mem_w32(ram, c->r[29] + 0x00000024u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000020u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = 0u | 0xffffu;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_0896de30; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = 0u + 0x00000001u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_0896de30; }
    c->r[2] = 0x08aa0000u;
    c->r[2] = c->r[2] + 0x00005490u;
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
    c->r[2] = 0u + 0x00000003u;
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = 0u + 0xffffffffu;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_0896de30; }
L_0896de00:
    { c->r[31] = 0x0896de08u; c->r[4] = mem_r32(ram, c->r[30] + 0x0000000cu); func_0896df9c(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x0000001cu;
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = c->r[2] + 0xffffffffu;
    c->r[3] = c->r[2] + 0u;
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[3]);
    c->r[2] = 0u + 0xffffffffu;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_0896de00; }
L_0896de30:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = 0u | 0xffffu;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_0896de5c; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = 0u + 0x00000001u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_0896de5c; }
    c->r[4] = 0x08aa0000u;
    { c->r[31] = 0x0896de5cu; c->r[4] = c->r[4] + 0x00005e84u; func_0896e4b4(c, ram); }
L_0896de5c:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = 0u | 0xffffu;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_0896de84; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_0896de84; }
    c->r[4] = 0x08aa0000u;
    { c->r[31] = 0x0896de84u; c->r[4] = c->r[4] + 0x00005e84u; func_0896e534(c, ram); }
L_0896de84:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = 0u | 0xffffu;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_0896def4; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_0896def4; }
    c->r[2] = 0x08aa0000u;
    c->r[2] = c->r[2] + 0x00005490u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_0896def4; }
    c->r[2] = 0x08aa0000u;
    c->r[2] = c->r[2] + 0x00005500u;
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
L_0896debc:
    c->r[2] = 0x08aa0000u;
    c->r[2] = c->r[2] + 0x00005490u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000014u);
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_0896ded8; }
    { goto L_0896def4; }
L_0896ded8:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = c->r[2] + 0xffffffe4u;
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
    { c->r[31] = 0x0896deecu; c->r[4] = mem_r32(ram, c->r[30] + 0x00000014u); func_0896dfc8(c, ram); }
    { goto L_0896debc; }
L_0896def4:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000024u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000020u);
    { c->r[29] = c->r[29] + 0x00000030u; return; }
    return; /* fell out of func_0896dd9c */
}

/* func_0896ec90  0x0896ec90..0x0896ed64  212 bytes, source=fde */
void func_0896ec90(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0896ec90u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x000000e0u;
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[2] + 0x00000028u;
    c->r[4] = c->r[2] + 0u;
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[6] = 0u + 0x00000047u;
    c->r[7] = 0u + 0xffffffffu;
    c->r[8] = 0u + 0xffffffffu;
    c->r[9] = 0u + 0u;
    c->r[10] = 0u + 0u;
    { c->r[31] = 0x0896ecdcu; c->r[11] = 0u + 0u; func_0896e6d0(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_0896ed50; }
    c->r[2] = 0x08aa0000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00006858u);
    { int _c = ((s32)c->r[2] <= 0); if (_c) goto L_0896ed30; }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000008u);
    { c->r[31] = 0x0896ed08u; c->r[5] = 0x00020000u; func_0892ffa8(c, ram); }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000008u);
    { c->r[31] = 0x0896ed14u; c->r[5] = 0u | 0x8000u; func_0892ff54(c, ram); }
    c->r[1] = 0x08a50000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffff8758u);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000008u);
    { c->r[31] = 0x0896ed28u; c->f[12] = c->f[0]; func_08932528(c, ram); }
    { goto L_0896ed50; }
L_0896ed30:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000008u);
    { c->r[31] = 0x0896ed3cu; c->r[5] = 0x00020000u; func_0892ff54(c, ram); }
    c->r[1] = 0x08a50000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffff8758u);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000008u);
    { c->r[31] = 0x0896ed50u; c->f[12] = c->f[0]; func_08932528(c, ram); }
L_0896ed50:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_0896ec90 */
}

/* func_0896fa68  0x0896fa68..0x0896fac8  96 bytes, source=fde */
void func_0896fa68(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0896fa68u);
    c->r[29] = c->r[29] + 0xfffffff0u;
    mem_w32(ram, c->r[29] + 0x00000004u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000000u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    c->r[4] = 0x08aa0000u;
    c->r[4] = c->r[4] + 0x000068ccu;
    c->r[5] = 0u + 0u;
    { c->r[31] = 0x0896fa8cu; c->r[6] = 0u + 0x00000020u; func_08a19ec4(c, ram); }
    c->r[4] = 0x08aa0000u;
    c->r[4] = c->r[4] + 0x000068ecu;
    c->r[5] = 0u + 0u;
    { c->r[31] = 0x0896faa0u; c->r[6] = 0u + 0x00000024u; func_08a19ec4(c, ram); }
    c->r[4] = 0x08aa0000u;
    c->r[4] = c->r[4] + 0x00006910u;
    c->r[5] = 0u + 0u;
    { c->r[31] = 0x0896fab4u; c->r[6] = 0u + 0x00000024u; func_08a19ec4(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000004u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000000u);
    { c->r[29] = c->r[29] + 0x00000010u; return; }
    return; /* fell out of func_0896fa68 */
}

/* func_089732e4  0x089732e4..0x089734b4  464 bytes, source=fde */
void func_089732e4(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089732e4u);
    c->r[29] = c->r[29] + 0xffffffd0u;
    mem_w32(ram, c->r[29] + 0x00000024u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000020u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[6]);
    c->r[2] = 0u + 0x000000a5u;
    mem_w16(ram, c->r[30] + 0x0000000cu, c->r[2]);
    c->r[2] = 0u + 0x00000047u;
    mem_w16(ram, c->r[30] + 0x0000000eu, c->r[2]);
    c->r[2] = 0u + 0x00000018u;
    mem_w16(ram, c->r[30] + 0x00000010u, c->r[2]);
    c->r[2] = 0x08aa0000u;
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x00006d78u);
    c->r[4] = 0x08a70000u;
    c->r[4] = c->r[4] + 0xffffb640u;
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x08973334u; c->r[6] = 0u + 0u; func_089e0bd8(c, ram); }
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000700u);
    c->r[2] = 0u + 0x000002e8u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[4] = c->lo;
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
    { c->r[31] = 0x08973380u; c->r[5] = c->r[5] | 0x0102u; func_08975564(c, ram); }
    c->r[4] = 0x08a70000u;
    c->r[4] = c->r[4] + 0xffffb640u;
    c->r[5] = 0u + 0x00000002u;
    { c->r[31] = 0x08973394u; c->r[6] = 0u + 0x00000006u; func_089df7a0(c, ram); }
    c->r[2] = 0u + 0xffffffffu;
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_089733d8; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = 0x00ff0000u;
    c->r[2] = c->r[2] | 0xffffu;
    c->r[4] = c->r[3] & c->r[2];
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = 0xff000000u;
    c->r[2] = c->r[3] & c->r[2];
    c->r[3] = c->r[2] >> 2;
    c->r[2] = 0xff000000u;
    c->r[2] = c->r[3] & c->r[2];
    c->r[2] = c->r[4] | c->r[2];
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
L_089733d8:
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000700u);
    c->r[2] = 0u + 0x000002e8u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[4] = c->lo;
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
    { c->r[31] = 0x08973420u; c->r[5] = mem_r32(ram, c->r[30] + 0x00000014u); func_089755a8(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000018u, 0u);
L_08973424:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = ((s32)c->r[2] < (s32)c->r[3]) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_08973440; }
    { goto L_089734a0; }
L_08973440:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[3] = c->r[2] << 5;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r8(ram, c->r[2] + 0x0000001du);
    c->r[3] = (u32)(s32)(s16)mem_r16(ram, c->r[30] + 0x0000000cu);
    c->r[7] = (u32)(s32)(s16)mem_r16(ram, c->r[30] + 0x0000000eu);
    c->r[1] = 0x08a50000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffff88f4u);
    c->r[4] = 0x08aa0000u;
    c->r[4] = c->r[4] + 0x00006d54u;
    c->r[5] = c->r[2] + 0u;
    c->r[6] = c->r[3] + 0u;
    c->r[8] = 0u + 0xffffffffu;
    c->f[12] = c->f[0];
    { c->r[31] = 0x08973484u; c->r[9] = 0u + 0u; func_08923508(c, ram); }
    c->r[2] = mem_r16(ram, c->r[30] + 0x0000000eu);
    c->r[2] = c->r[2] + 0x00000018u;
    mem_w16(ram, c->r[30] + 0x0000000eu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]); goto L_08973424; }
L_089734a0:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000024u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000020u);
    { c->r[29] = c->r[29] + 0x00000030u; return; }
    return; /* fell out of func_089732e4 */
}

/* func_08975728  0x08975728..0x089759fc  724 bytes, source=fde */
void func_08975728(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08975728u);
    c->r[29] = c->r[29] + 0xffffffd0u;
    mem_w32(ram, c->r[29] + 0x00000028u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000024u, c->r[30]);
    mem_w32(ram, c->r[29] + 0x00000020u, c->r[16]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[6]);
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[7]);
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[8]);
    c->r[2] = 0u + 0x00000001u;
    c->r[1] = 0x08aa0000u;
    { c->r[31] = 0x08975760u; mem_w32(ram, c->r[1] + 0x00006d88u, c->r[2]); func_0896a3c0(c, ram); }
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000004u) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_089759c8; }
    c->r[2] = 0x08aa0000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00006d8cu);
    { int _c = (c->r[2] != 0u); if (_c) goto L_089759c8; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    { c->r[31] = 0x0897578cu; mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]); func_0896a3c0(c, ram); }
    { c->r[31] = 0x08975794u; c->r[16] = c->r[2] + 0u; func_0896a3c0(c, ram); }
    c->r[3] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 3;
    c->r[2] = c->r[2] + c->r[3];
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[16] + c->r[2];
    c->r[2] = c->r[2] + 0x00000004u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[4] = c->r[2] + 0u;
    c->r[2] = c->r[3] + 0u;
    c->r[3] = mem_lwl(ram, c->r[2] + 0x00000003u, c->r[3]);
    c->r[3] = mem_lwr(ram, c->r[2] + 0x00000000u, c->r[3]);
    c->r[5] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000004u);
    c->r[6] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000005u);
    mem_swl(ram, c->r[4] + 0x00000003u, c->r[3]);
    mem_swr(ram, c->r[4] + 0x00000000u, c->r[3]);
    mem_w8(ram, c->r[4] + 0x00000004u, c->r[5]);
    { c->r[31] = 0x089757e0u; mem_w8(ram, c->r[4] + 0x00000005u, c->r[6]); func_0896a3c0(c, ram); }
    { c->r[31] = 0x089757e8u; c->r[16] = c->r[2] + 0u; func_0896a3c0(c, ram); }
    c->r[3] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 3;
    c->r[2] = c->r[2] + c->r[3];
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[16] + c->r[2];
    c->r[2] = c->r[2] + 0x00000004u;
    c->r[2] = c->r[2] + 0x00000006u;
    c->r[4] = c->r[2] + 0u;
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000014u);
    { c->r[31] = 0x08975818u; c->r[6] = 0u + 0x0000000eu; func_08a19db8(c, ram); }
    { c->r[31] = 0x08975820u; func_0896a3c0(c, ram); }
    { c->r[31] = 0x08975828u; c->r[16] = c->r[2] + 0u; func_0896a3c0(c, ram); }
    c->r[3] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 3;
    c->r[2] = c->r[2] + c->r[3];
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[16] + c->r[2];
    c->r[2] = c->r[2] + 0x00000004u;
    c->r[3] = c->r[2] + 0x00000014u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = c->r[2] + 0x0000000eu;
    c->r[4] = c->r[3] + 0u;
    { c->r[31] = 0x0897585cu; c->r[5] = c->r[2] + 0u; func_08a1af70(c, ram); }
    { c->r[31] = 0x08975864u; func_0896a3c0(c, ram); }
    { c->r[31] = 0x0897586cu; c->r[16] = c->r[2] + 0u; func_0896a3c0(c, ram); }
    c->r[3] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 3;
    c->r[2] = c->r[2] + c->r[3];
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[16];
    c->r[3] = c->r[2] + 0x00000010u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000017u);
    { c->r[31] = 0x08975898u; mem_w8(ram, c->r[3] + 0x00000011u, c->r[2]); func_0896a3c0(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = mem_r32(ram, c->r[3] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000001u;
    { c->r[31] = 0x089758acu; mem_w32(ram, c->r[3] + 0x00000000u, c->r[2]); func_08975704(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = 0x08ab0000u;
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0xffff8ed6u);
    c->r[2] = c->r[2] << 5;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = c->r[2] + 0x00000008u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[4] = c->r[2] + 0u;
    c->r[2] = c->r[3] + 0u;
    c->r[3] = mem_lwl(ram, c->r[2] + 0x00000003u, c->r[3]);
    c->r[3] = mem_lwr(ram, c->r[2] + 0x00000000u, c->r[3]);
    c->r[5] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000004u);
    c->r[6] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000005u);
    mem_swl(ram, c->r[4] + 0x00000003u, c->r[3]);
    mem_swr(ram, c->r[4] + 0x00000000u, c->r[3]);
    mem_w8(ram, c->r[4] + 0x00000004u, c->r[5]);
    { c->r[31] = 0x089758f4u; mem_w8(ram, c->r[4] + 0x00000005u, c->r[6]); func_08975704(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = 0x08ab0000u;
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0xffff8ed6u);
    c->r[2] = c->r[2] << 5;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = c->r[2] + 0x00000008u;
    c->r[2] = c->r[2] + 0x00000006u;
    c->r[4] = c->r[2] + 0u;
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000014u);
    { c->r[31] = 0x08975920u; c->r[6] = 0u + 0x0000000eu; func_08a19db8(c, ram); }
    { c->r[31] = 0x08975928u; func_08975704(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = 0x08ab0000u;
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0xffff8ed6u);
    c->r[2] = c->r[2] << 5;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = c->r[2] + 0x00000008u;
    c->r[3] = c->r[2] + 0x00000014u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = c->r[2] + 0x0000000eu;
    c->r[4] = c->r[3] + 0u;
    { c->r[31] = 0x08975958u; c->r[5] = c->r[2] + 0u; func_08a1af70(c, ram); }
    { c->r[31] = 0x08975960u; func_08975704(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = 0x08ab0000u;
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0xffff8ed6u);
    c->r[2] = c->r[2] << 5;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] + 0x00000010u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000017u);
    { c->r[31] = 0x08975988u; mem_w8(ram, c->r[3] + 0x00000015u, c->r[2]); func_08975704(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = mem_r8(ram, c->r[3] + 0x00000006u);
    c->r[2] = c->r[2] + 0x00000001u;
    { c->r[31] = 0x0897599cu; mem_w8(ram, c->r[3] + 0x00000006u, c->r[2]); func_0896a3c0(c, ram); }
    c->r[2] = c->r[2] + 0x00000094u;
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x000027dcu;
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[6] = 0u + 0x00000008u;
    { c->r[31] = 0x089759b8u; c->r[7] = c->r[2] + 0u; func_089d3b88(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]);
    c->r[1] = 0x08aa0000u;
    { mem_w32(ram, c->r[1] + 0x00006d88u, 0u); goto L_089759e4; }
L_089759c8:
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x000027dcu;
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[6] = 0u + 0u;
    { c->r[31] = 0x089759e0u; c->r[7] = 0u + 0u; func_089d3bd4(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]);
L_089759e4:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000028u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000024u);
    c->r[16] = mem_r32(ram, c->r[29] + 0x00000020u);
    { c->r[29] = c->r[29] + 0x00000030u; return; }
    return; /* fell out of func_08975728 */
}

/* func_08978c30  0x08978c30..0x08978c50  32 bytes, source=sweep */
void func_08978c30(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08978c30u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_08978c30 */
}

/* func_0897e4cc  0x0897e4cc..0x0897f888  5052 bytes, source=fde */
void func_0897e4cc(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0897e4ccu);
L_0897e4cc:
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
    mem_w32(ram, c->r[30] + 0x00000038u, c->r[2]);
    c->r[2] = 0u + 0x00000019u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000038u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_0897f410; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000038u);
    c->r[2] = ((s32)c->r[3] < (s32)0x0000001au) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_0897e53c; }
    c->r[2] = 0u + 0x00000001u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000038u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_0897e554; }
    { goto L_0897f86c; }
L_0897e53c:
    c->r[2] = 0u + 0x00000020u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000038u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_0897f6c4; }
    { goto L_0897f86c; }
L_0897e554:
    c->r[1] = 0x08ab0000u;
    mem_w32(ram, c->r[1] + 0xffff9170u, 0u);
    { c->r[31] = 0x0897e564u; c->r[4] = 0u + 0u; func_0896dbc0(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]);
    c->r[2] = 0u + 0x00000001u;
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
L_0897e570:
    { c->r[31] = 0x0897e578u; func_0896a3c0(c, ram); }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[2] = ((s32)c->r[3] < (s32)c->r[2]) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_0897e594; }
    { goto L_0897e610; }
L_0897e594:
    { c->r[31] = 0x0897e59cu; func_0896a3c0(c, ram); }
    c->r[4] = c->r[2] + 0u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 3;
    c->r[2] = c->r[2] + c->r[3];
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[4];
    c->r[2] = c->r[2] + 0x00000020u;
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000004u);
    c->r[2] = 0u + 0x00000001u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_0897e5d4; }
    { goto L_0897e600; }
L_0897e5d4:
    { c->r[31] = 0x0897e5dcu; c->r[4] = mem_r32(ram, c->r[30] + 0x00000014u); func_0896dbc0(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_0897e600; }
    c->r[2] = 0u + 0x00000001u;
    c->r[1] = 0x08ab0000u;
    { mem_w32(ram, c->r[1] + 0xffff9170u, c->r[2]); goto L_0897e610; }
L_0897e600:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]); goto L_0897e570; }
L_0897e610:
    { c->r[31] = 0x0897e618u; func_0897e398(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r8(ram, c->r[2] + 0x0000000eu);
    mem_w32(ram, c->r[30] + 0x0000002cu, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000002cu);
    c->r[2] = (c->r[3] < 0x0000002cu) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_0897f3d4; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000002cu);
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08a50000u;
    c->r[2] = c->r[2] + 0xffff8e30u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    { u32 _t = c->r[2]; switch (_t) { case 0x0897e4ccu: goto L_0897e4cc; case 0x0897e654u: goto L_0897e654; case 0x0897e788u: goto L_0897e788; case 0x0897e7a8u: goto L_0897e7a8; case 0x0897eef8u: goto L_0897eef8; case 0x0897f054u: goto L_0897f054; case 0x0897f09cu: goto L_0897f09c; case 0x0897f1c4u: goto L_0897f1c4; case 0x0897f2b8u: goto L_0897f2b8; case 0x0897f350u: goto L_0897f350; case 0x0897f3b4u: goto L_0897f3b4; case 0x0897f3d4u: goto L_0897f3d4; default: recomp_trap_unknown_indirect(c, ram, 0x0897e64cu, _t); return; } }
L_0897e654:
    { c->r[31] = 0x0897e65cu; c->r[4] = mem_r32(ram, c->r[30] + 0x0000000cu); func_0896e3dc(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000045u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_0897e67c; }
    { c->r[31] = 0x0897e674u; func_0897de74(c, ram); }
    { goto L_0897e718; }
L_0897e67c:
    c->r[2] = 0x08ab0000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0xffff9170u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_0897e718; }
    mem_w32(ram, c->r[30] + 0x00000018u, 0u);
L_0897e690:
    { c->r[31] = 0x0897e698u; func_0896a3c0(c, ram); }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[2] = ((s32)c->r[3] < (s32)c->r[2]) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_0897e6b4; }
    { goto L_0897e718; }
L_0897e6b4:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[3] = c->r[2] << 1;
    c->r[2] = 0x08ab0000u;
    c->r[2] = c->r[2] + 0xffff9134u;
    c->r[5] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[3] = c->r[2] << 1;
    c->r[2] = 0x08ab0000u;
    c->r[2] = c->r[2] + 0xffff9134u;
    c->r[4] = c->r[3] + c->r[2];
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000018u);
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
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]); goto L_0897e690; }
L_0897e718:
    { c->r[31] = 0x0897e720u; func_0897e070(c, ram); }
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0u + 0xffffffffu;
    mem_w8(ram, c->r[3] + 0x00000040u, c->r[2]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = 0x08ab0000u;
    { c->r[31] = 0x0897e73cu; c->r[5] = c->r[5] + 0xffff9144u; func_08973bdc(c, ram); }
    { c->r[31] = 0x0897e744u; func_0896a3e4(c, ram); }
    c->r[1] = 0x08ab0000u;
    mem_w8(ram, c->r[1] + 0xffff9168u, c->r[2]);
    c->r[1] = 0x08ab0000u;
    mem_w8(ram, c->r[1] + 0xffff9169u, 0u);
    c->r[2] = 0u + 0xffffffffu;
    c->r[1] = 0x08ab0000u;
    mem_w8(ram, c->r[1] + 0xffff916au, c->r[2]);
    c->r[1] = 0x08ab0000u;
    mem_w8(ram, c->r[1] + 0xffff916bu, 0u);
    c->r[1] = 0x08ab0000u;
    mem_w16(ram, c->r[1] + 0xffff916cu, 0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    mem_w8(ram, c->r[2] + 0x00000010u, 0u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0u + 0x00000012u;
    { mem_w8(ram, c->r[3] + 0x0000000eu, c->r[2]); goto L_0897f3d4; }
L_0897e788:
    { c->r[31] = 0x0897e790u; func_08973f28(c, ram); }
    { int _c = (c->r[2] == 0u); if (_c) goto L_0897f3d4; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0u + 0x00000002u;
    { mem_w8(ram, c->r[3] + 0x0000000eu, c->r[2]); goto L_0897f3d4; }
L_0897e7a8:
    c->r[4] = 0x08a70000u;
    c->r[4] = c->r[4] + 0xffffb34cu;
    c->r[5] = 0u + 0u;
    c->r[6] = 0u + 0u;
    { c->r[31] = 0x0897e7c0u; c->r[7] = 0u + 0u; func_089d87d4(c, ram); }
    c->r[16] = c->r[2] + 0u;
    c->r[4] = 0x08a70000u;
    { c->r[31] = 0x0897e7d0u; c->r[4] = c->r[4] + 0xffffb34cu; func_0880d238(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = mem_r32(ram, c->r[16] + 0x00000004u);
    c->r[2] = c->r[3] & c->r[2];
    c->r[2] = c->r[2] & 0x0008u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_0897e81c; }
    c->r[1] = 0x08ab0000u;
    { c->r[31] = 0x0897e7f4u; mem_w16(ram, c->r[1] + 0xffff916cu, 0u); func_0896a3e4(c, ram); }
    c->r[3] = c->r[2] << 1;
    c->r[2] = 0x08ab0000u;
    c->r[2] = c->r[2] + 0xffff9124u;
    c->r[2] = c->r[3] + c->r[2];
    { c->r[31] = 0x0897e80cu; c->r[4] = c->r[2] + 0u; func_08980ea4(c, ram); }
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0u + 0x00000004u;
    { mem_w8(ram, c->r[3] + 0x0000000eu, c->r[2]); goto L_0897ee04; }
L_0897e81c:
    { c->r[31] = 0x0897e824u; c->r[4] = 0u + 0x00000001u; func_089c5e18(c, ram); }
    { int _c = (c->r[2] == 0u); if (_c) goto L_0897eb6c; }
    c->r[1] = 0x08ab0000u;
    mem_w16(ram, c->r[1] + 0xffff916cu, 0u);
    c->r[2] = 0x08ab0000u;
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0xffff9169u);
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08ab0000u;
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0xffff9168u);
    c->r[2] = c->r[3] + c->r[2];
    { c->r[31] = 0x0897e854u; mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]); func_0896a3e4(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    { int _c = (c->r[2] != c->r[3]); if (_c) goto L_0897e9a4; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x00000014u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000ac8u;
    { c->r[31] = 0x0897e880u; c->r[5] = c->r[2] + 0u; func_089cb820(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_0897ee04; }
    { c->r[31] = 0x0897e898u; func_0896a3e4(c, ram); }
    c->r[5] = c->r[2] + 0u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[3] = c->r[2] << 1;
    c->r[2] = 0x08ab0000u;
    c->r[2] = c->r[2] + 0xffff9124u;
    c->r[2] = c->r[3] + c->r[2];
    { c->r[31] = 0x0897e8b8u; c->r[4] = c->r[2] + 0u; func_08980e68(c, ram); }
    c->r[2] = mem_r8(ram, c->r[30] + 0x00000018u);
    c->r[1] = 0x08ab0000u;
    mem_w8(ram, c->r[1] + 0xffff916au, c->r[2]);
    c->r[2] = 0x08ab0000u;
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0xffff916au);
    c->r[3] = c->r[2] << 1;
    c->r[2] = 0x08ab0000u;
    c->r[2] = c->r[2] + 0xffff9134u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000000u);
    c->r[1] = 0x08ab0000u;
    mem_w8(ram, c->r[1] + 0xffff916bu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    mem_w8(ram, c->r[2] + 0x00000040u, 0u);
    c->r[2] = 0x08ab0000u;
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0xffff916au);
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08ab0000u;
    c->r[2] = c->r[2] + 0xffff9144u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    mem_w32(ram, c->r[30] + 0x0000001cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x00000014u;
    c->r[4] = c->r[2] + 0u;
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[6] = 0u + 0x00000065u;
    c->r[7] = 0u + 0xffffffffu;
    c->r[8] = 0u + 0xffffffffu;
    c->r[9] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[10] = 0u + 0u;
    { c->r[31] = 0x0897e93cu; c->r[11] = 0u + 0u; func_0896e6d0(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_0897ee04; }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000014u);
    { c->r[31] = 0x0897e958u; c->r[5] = 0x00080000u; func_0892ffa8(c, ram); }
    c->r[1] = 0x08a50000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffff8e24u);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000014u);
    { c->r[31] = 0x0897e96cu; c->f[12] = c->f[0]; func_08932528(c, ram); }
    c->r[2] = 0x08ab0000u;
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0xffff916bu);
    c->r[2] = c->r[2] & 0x00c0u;
    c->r[2] = (u32)((s32)c->r[2] >> 6);
    mem_w32(ram, c->r[30] + 0x00000020u, c->r[2]);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000af4u;
    c->r[5] = 0u + 0x00000066u;
    { c->r[31] = 0x0897e994u; c->r[6] = mem_r32(ram, c->r[30] + 0x00000020u); func_0881456c(c, ram); }
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0u + 0x00000003u;
    { mem_w8(ram, c->r[3] + 0x0000000eu, c->r[2]); goto L_0897ee04; }
L_0897e9a4:
    { c->r[31] = 0x0897e9acu; func_0896a3c0(c, ram); }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[2] = ((s32)c->r[3] < (s32)c->r[2]) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_0897ee04; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[3] = c->r[2] << 1;
    c->r[2] = 0x08ab0000u;
    c->r[2] = c->r[2] + 0xffff9124u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000001u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_0897ee04; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x00000014u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000ac8u;
    { c->r[31] = 0x0897e9fcu; c->r[5] = c->r[2] + 0u; func_089cb820(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000020u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_0897ee04; }
    { c->r[31] = 0x0897ea14u; func_0896a3e4(c, ram); }
    c->r[5] = c->r[2] + 0u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[3] = c->r[2] << 1;
    c->r[2] = 0x08ab0000u;
    c->r[2] = c->r[2] + 0xffff9124u;
    c->r[2] = c->r[3] + c->r[2];
    { c->r[31] = 0x0897ea34u; c->r[4] = c->r[2] + 0u; func_08980e68(c, ram); }
    c->r[2] = mem_r8(ram, c->r[30] + 0x00000018u);
    c->r[1] = 0x08ab0000u;
    mem_w8(ram, c->r[1] + 0xffff916au, c->r[2]);
    c->r[2] = 0x08ab0000u;
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0xffff916au);
    c->r[3] = c->r[2] << 1;
    c->r[2] = 0x08ab0000u;
    c->r[2] = c->r[2] + 0xffff9134u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000000u);
    c->r[1] = 0x08ab0000u;
    mem_w8(ram, c->r[1] + 0xffff916bu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    mem_w8(ram, c->r[2] + 0x00000040u, 0u);
    c->r[2] = 0x08ab0000u;
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0xffff916au);
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08ab0000u;
    c->r[2] = c->r[2] + 0xffff9144u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    mem_w32(ram, c->r[30] + 0x0000001cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x00000014u;
    c->r[4] = c->r[2] + 0u;
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[6] = 0u + 0x00000067u;
    c->r[7] = 0u + 0xffffffffu;
    c->r[8] = 0u + 0xffffffffu;
    c->r[9] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[10] = 0u + 0u;
    { c->r[31] = 0x0897eab8u; c->r[11] = 0u + 0u; func_0896e6d0(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000020u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_0897ee04; }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000020u);
    { c->r[31] = 0x0897ead4u; c->r[5] = 0x00080000u; func_0892ffa8(c, ram); }
    c->r[1] = 0x08a50000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffff8e24u);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000020u);
    { c->r[31] = 0x0897eae8u; c->f[12] = c->f[0]; func_08932528(c, ram); }
    c->r[2] = 0x08ab0000u;
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0xffff916bu);
    c->r[2] = c->r[2] & 0x00c0u;
    c->r[2] = (u32)((s32)c->r[2] >> 6);
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
    c->r[2] = 0x08ab0000u;
    c->r[2] = mem_r8(ram, c->r[2] + 0xffff916bu);
    c->r[2] = c->r[2] & 0x0003u;
    mem_w32(ram, c->r[30] + 0x00000024u, c->r[2]);
    c->r[2] = 0x08ab0000u;
    c->r[2] = mem_r8(ram, c->r[2] + 0xffff916bu);
    c->r[2] = c->r[2] & 0x0010u;
    c->r[2] = (u32)((s32)c->r[2] >> 4);
    mem_w32(ram, c->r[30] + 0x00000028u, c->r[2]);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000af4u;
    c->r[5] = 0u + 0x00000068u;
    { c->r[31] = 0x0897eb34u; c->r[6] = mem_r32(ram, c->r[30] + 0x00000014u); func_0881456c(c, ram); }
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000af4u;
    c->r[5] = 0u + 0x00000069u;
    { c->r[31] = 0x0897eb48u; c->r[6] = mem_r32(ram, c->r[30] + 0x00000024u); func_0881456c(c, ram); }
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000af4u;
    c->r[5] = 0u + 0x0000006au;
    { c->r[31] = 0x0897eb5cu; c->r[6] = mem_r32(ram, c->r[30] + 0x00000028u); func_0881456c(c, ram); }
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0u + 0x00000003u;
    { mem_w8(ram, c->r[3] + 0x0000000eu, c->r[2]); goto L_0897ee04; }
L_0897eb6c:
    c->r[4] = 0x08a70000u;
    c->r[4] = c->r[4] + 0xffffb34cu;
    c->r[5] = 0u + 0u;
    c->r[6] = 0u + 0u;
    { c->r[31] = 0x0897eb84u; c->r[7] = 0u + 0u; func_089d87d4(c, ram); }
    c->r[16] = c->r[2] + 0u;
    c->r[4] = 0x08a70000u;
    { c->r[31] = 0x0897eb94u; c->r[4] = c->r[4] + 0xffffb34cu; func_0880d238(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = mem_r32(ram, c->r[16] + 0x00000004u);
    c->r[2] = c->r[3] & c->r[2];
    c->r[2] = c->r[2] & 0x0080u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_0897ec14; }
    c->r[1] = 0x08ab0000u;
    mem_w16(ram, c->r[1] + 0xffff916cu, 0u);
    c->r[2] = 0x08ab0000u;
    c->r[2] = mem_r8(ram, c->r[2] + 0xffff9168u);
    c->r[2] = c->r[2] + 0xffffffffu;
    c->r[1] = 0x08ab0000u;
    mem_w8(ram, c->r[1] + 0xffff9168u, c->r[2]);
    c->r[2] = 0x08ab0000u;
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0xffff9168u);
    { int _c = ((s32)c->r[2] >= 0); if (_c) goto L_0897ebe4; }
    c->r[2] = 0u + 0x00000003u;
    c->r[1] = 0x08ab0000u;
    mem_w8(ram, c->r[1] + 0xffff9168u, c->r[2]);
L_0897ebe4:
    { c->r[31] = 0x0897ebecu; func_08925598(c, ram); }
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0xffffc930u;
    c->r[5] = 0x04000000u;
    c->r[5] = c->r[5] | 0x0001u;
    c->r[6] = 0u + 0u;
    c->r[7] = 0u + 0u;
    { c->r[31] = 0x0897ec0cu; c->r[8] = 0u + 0u; func_089f6924(c, ram); }
    { goto L_0897ee04; }
L_0897ec14:
    c->r[4] = 0x08a70000u;
    c->r[4] = c->r[4] + 0xffffb34cu;
    c->r[5] = 0u + 0u;
    c->r[6] = 0u + 0u;
    { c->r[31] = 0x0897ec2cu; c->r[7] = 0u + 0u; func_089d87d4(c, ram); }
    c->r[16] = c->r[2] + 0u;
    c->r[4] = 0x08a70000u;
    { c->r[31] = 0x0897ec3cu; c->r[4] = c->r[4] + 0xffffb34cu; func_0880d238(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = mem_r32(ram, c->r[16] + 0x00000004u);
    c->r[2] = c->r[3] & c->r[2];
    c->r[2] = c->r[2] & 0x0020u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_0897ecbc; }
    c->r[1] = 0x08ab0000u;
    mem_w16(ram, c->r[1] + 0xffff916cu, 0u);
    c->r[2] = 0x08ab0000u;
    c->r[2] = mem_r8(ram, c->r[2] + 0xffff9168u);
    c->r[2] = c->r[2] + 0x00000001u;
    c->r[1] = 0x08ab0000u;
    mem_w8(ram, c->r[1] + 0xffff9168u, c->r[2]);
    c->r[2] = 0x08ab0000u;
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0xffff9168u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000004u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_0897ec8c; }
    c->r[1] = 0x08ab0000u;
    mem_w8(ram, c->r[1] + 0xffff9168u, 0u);
L_0897ec8c:
    { c->r[31] = 0x0897ec94u; func_08925598(c, ram); }
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0xffffc930u;
    c->r[5] = 0x04000000u;
    c->r[5] = c->r[5] | 0x0001u;
    c->r[6] = 0u + 0u;
    c->r[7] = 0u + 0u;
    { c->r[31] = 0x0897ecb4u; c->r[8] = 0u + 0u; func_089f6924(c, ram); }
    { goto L_0897ee04; }
L_0897ecbc:
    c->r[4] = 0x08a70000u;
    c->r[4] = c->r[4] + 0xffffb34cu;
    c->r[5] = 0u + 0u;
    c->r[6] = 0u + 0u;
    { c->r[31] = 0x0897ecd4u; c->r[7] = 0u + 0u; func_089d87d4(c, ram); }
    c->r[16] = c->r[2] + 0u;
    c->r[4] = 0x08a70000u;
    { c->r[31] = 0x0897ece4u; c->r[4] = c->r[4] + 0xffffb34cu; func_0880d238(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = mem_r32(ram, c->r[16] + 0x00000004u);
    c->r[2] = c->r[3] & c->r[2];
    c->r[2] = c->r[2] & 0x0010u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_0897ed64; }
    c->r[1] = 0x08ab0000u;
    mem_w16(ram, c->r[1] + 0xffff916cu, 0u);
    c->r[2] = 0x08ab0000u;
    c->r[2] = mem_r8(ram, c->r[2] + 0xffff9169u);
    c->r[2] = c->r[2] + 0xffffffffu;
    c->r[1] = 0x08ab0000u;
    mem_w8(ram, c->r[1] + 0xffff9169u, c->r[2]);
    c->r[2] = 0x08ab0000u;
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0xffff9169u);
    { int _c = ((s32)c->r[2] >= 0); if (_c) goto L_0897ed34; }
    c->r[2] = 0u + 0x00000001u;
    c->r[1] = 0x08ab0000u;
    mem_w8(ram, c->r[1] + 0xffff9169u, c->r[2]);
L_0897ed34:
    { c->r[31] = 0x0897ed3cu; func_08925598(c, ram); }
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0xffffc930u;
    c->r[5] = 0x04000000u;
    c->r[5] = c->r[5] | 0x0001u;
    c->r[6] = 0u + 0u;
    c->r[7] = 0u + 0u;
    { c->r[31] = 0x0897ed5cu; c->r[8] = 0u + 0u; func_089f6924(c, ram); }
    { goto L_0897ee04; }
L_0897ed64:
    c->r[4] = 0x08a70000u;
    c->r[4] = c->r[4] + 0xffffb34cu;
    c->r[5] = 0u + 0u;
    c->r[6] = 0u + 0u;
    { c->r[31] = 0x0897ed7cu; c->r[7] = 0u + 0u; func_089d87d4(c, ram); }
    c->r[16] = c->r[2] + 0u;
    c->r[4] = 0x08a70000u;
    { c->r[31] = 0x0897ed8cu; c->r[4] = c->r[4] + 0xffffb34cu; func_0880d238(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = mem_r32(ram, c->r[16] + 0x00000004u);
    c->r[2] = c->r[3] & c->r[2];
    c->r[2] = c->r[2] & 0x0040u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_0897ee04; }
    c->r[1] = 0x08ab0000u;
    mem_w16(ram, c->r[1] + 0xffff916cu, 0u);
    c->r[2] = 0x08ab0000u;
    c->r[2] = mem_r8(ram, c->r[2] + 0xffff9169u);
    c->r[2] = c->r[2] + 0x00000001u;
    c->r[1] = 0x08ab0000u;
    mem_w8(ram, c->r[1] + 0xffff9169u, c->r[2]);
    c->r[2] = 0x08ab0000u;
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0xffff9169u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000002u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_0897eddc; }
    c->r[1] = 0x08ab0000u;
    mem_w8(ram, c->r[1] + 0xffff9169u, 0u);
L_0897eddc:
    { c->r[31] = 0x0897ede4u; func_08925598(c, ram); }
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0xffffc930u;
    c->r[5] = 0x04000000u;
    c->r[5] = c->r[5] | 0x0001u;
    c->r[6] = 0u + 0u;
    c->r[7] = 0u + 0u;
    { c->r[31] = 0x0897ee04u; c->r[8] = 0u + 0u; func_089f6924(c, ram); }
L_0897ee04:
    c->r[2] = 0x08ab0000u;
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0xffff916cu);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000096u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_0897ee48; }
    c->r[1] = 0x08ab0000u;
    { c->r[31] = 0x0897ee24u; mem_w16(ram, c->r[1] + 0xffff916cu, 0u); func_0896a3e4(c, ram); }
    c->r[3] = c->r[2] << 1;
    c->r[2] = 0x08ab0000u;
    c->r[2] = c->r[2] + 0xffff9124u;
    c->r[2] = c->r[3] + c->r[2];
    { c->r[31] = 0x0897ee3cu; c->r[4] = c->r[2] + 0u; func_08980ea4(c, ram); }
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0u + 0x00000004u;
    mem_w8(ram, c->r[3] + 0x0000000eu, c->r[2]);
L_0897ee48:
    c->r[2] = 0x08ab0000u;
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0xffff916cu);
    c->r[2] = ((s32)c->r[2] < (s32)0x0000001fu) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_0897ee84; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x0000001cu;
    c->r[3] = 0x08ab0000u;
    c->r[3] = (u32)(s32)(s16)mem_r16(ram, c->r[3] + 0xffff916cu);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x0897ee7cu; c->r[6] = c->r[3] + 0u; func_089737f8(c, ram); }
    { goto L_0897ee94; }
L_0897ee84:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x0000001cu;
    { c->r[31] = 0x0897ee94u; c->r[4] = c->r[2] + 0u; func_089738a4(c, ram); }
L_0897ee94:
    c->r[2] = 0x08ab0000u;
    c->r[2] = mem_r16(ram, c->r[2] + 0xffff916cu);
    c->r[2] = c->r[2] + 0x00000001u;
    c->r[1] = 0x08ab0000u;
    mem_w16(ram, c->r[1] + 0xffff916cu, c->r[2]);
    c->r[2] = 0x08ab0000u;
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0xffff9169u);
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08ab0000u;
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0xffff9168u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0u + 0u;
    { c->r[31] = 0x0897eed0u; c->r[6] = 0u + 0x00000001u; func_08974ae8(c, ram); }
    { c->r[31] = 0x0897eed8u; func_0896a3e4(c, ram); }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = 0x08ab0000u;
    c->r[5] = c->r[5] + 0xffff9124u;
    c->r[6] = c->r[2] + 0u;
    { c->r[31] = 0x0897eef0u; c->r[7] = 0u + 0x00000001u; func_089740f4(c, ram); }
    { goto L_0897f3d4; }
L_0897eef8:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000040u);
    c->r[2] = 0u + 0x00000001u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_0897ef7c; }
    c->r[2] = 0x08ab0000u;
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0xffff916au);
    c->r[3] = c->r[2] << 1;
    c->r[2] = 0x08ab0000u;
    c->r[2] = c->r[2] + 0xffff9134u;
    c->r[3] = c->r[3] + c->r[2];
    c->r[2] = 0x08ab0000u;
    c->r[2] = mem_r8(ram, c->r[2] + 0xffff916bu);
    mem_w8(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[2] = 0x08ab0000u;
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0xffff916au);
    c->r[3] = c->r[2] << 1;
    c->r[2] = 0x08ab0000u;
    c->r[2] = c->r[2] + 0xffff9124u;
    c->r[2] = c->r[3] + c->r[2];
    { c->r[31] = 0x0897ef50u; c->r[4] = c->r[2] + 0u; func_089756ac(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    mem_w8(ram, c->r[2] + 0x00000040u, 0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x00000014u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    { c->r[31] = 0x0897ef6cu; c->r[4] = c->r[2] + 0u; func_0896e7c0(c, ram); }
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0u + 0x00000013u;
    { mem_w8(ram, c->r[3] + 0x0000000eu, c->r[2]); goto L_0897efd8; }
L_0897ef7c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000040u);
    c->r[2] = 0u + 0xffffffffu;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_0897efd8; }
    c->r[2] = 0x08ab0000u;
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0xffff916au);
    c->r[3] = c->r[2] << 1;
    c->r[2] = 0x08ab0000u;
    c->r[2] = c->r[2] + 0xffff9124u;
    c->r[2] = c->r[3] + c->r[2];
    { c->r[31] = 0x0897efb0u; c->r[4] = c->r[2] + 0u; func_089756ac(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    mem_w8(ram, c->r[2] + 0x00000040u, 0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x00000014u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    { c->r[31] = 0x0897efccu; c->r[4] = c->r[2] + 0u; func_0896e7c0(c, ram); }
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0u + 0x00000013u;
    mem_w8(ram, c->r[3] + 0x0000000eu, c->r[2]);
L_0897efd8:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x00000014u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000ac8u;
    { c->r[31] = 0x0897eff4u; c->r[5] = c->r[2] + 0u; func_089cb820(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000028u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000028u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_0897f014; }
    c->r[16] = mem_r32(ram, c->r[30] + 0x0000000cu);
    { c->r[31] = 0x0897f010u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000028u); func_089324c0(c, ram); }
    mem_w8(ram, c->r[16] + 0x00000010u, c->r[2]);
L_0897f014:
    c->r[2] = 0x08ab0000u;
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0xffff916au);
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0u + 0x00000001u;
    { c->r[31] = 0x0897f02cu; c->r[6] = 0u + 0x00000001u; func_08974ae8(c, ram); }
    { c->r[31] = 0x0897f034u; func_0896a3e4(c, ram); }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = 0x08ab0000u;
    c->r[5] = c->r[5] + 0xffff9124u;
    c->r[6] = c->r[2] + 0u;
    { c->r[31] = 0x0897f04cu; c->r[7] = 0u + 0x00000001u; func_089740f4(c, ram); }
    { goto L_0897f3d4; }
L_0897f054:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x00000014u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    { c->r[31] = 0x0897f068u; c->r[4] = c->r[2] + 0u; func_0896e8f8(c, ram); }
    { int _c = (c->r[2] != 0u); if (_c) goto L_0897f07c; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0u + 0x00000002u;
    mem_w8(ram, c->r[3] + 0x0000000eu, c->r[2]);
L_0897f07c:
    c->r[2] = 0x08ab0000u;
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0xffff916au);
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0u + 0x00000001u;
    { c->r[31] = 0x0897f094u; c->r[6] = 0u + 0x00000001u; func_08974ae8(c, ram); }
    { goto L_0897f3d4; }
L_0897f09c:
    { c->r[31] = 0x0897f0a4u; c->r[4] = 0u + 0x00000001u; func_089c5f10(c, ram); }
    { int _c = (c->r[2] == 0u); if (_c) goto L_0897f0d8; }
    { c->r[31] = 0x0897f0b4u; func_0896a3e4(c, ram); }
    c->r[3] = c->r[2] << 1;
    c->r[2] = 0x08ab0000u;
    c->r[2] = c->r[2] + 0xffff9124u;
    c->r[2] = c->r[3] + c->r[2];
    { c->r[31] = 0x0897f0ccu; c->r[4] = c->r[2] + 0u; func_089756ac(c, ram); }
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0u + 0x00000002u;
    mem_w8(ram, c->r[3] + 0x0000000eu, c->r[2]);
L_0897f0d8:
    c->r[2] = 0u + 0x00000001u;
    mem_w32(ram, c->r[30] + 0x00000028u, c->r[2]);
    mem_w32(ram, c->r[30] + 0x00000024u, 0u);
L_0897f0e4:
    { c->r[31] = 0x0897f0ecu; func_0896a3c0(c, ram); }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000024u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[2] = ((s32)c->r[3] < (s32)c->r[2]) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_0897f108; }
    { goto L_0897f164; }
L_0897f108:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000024u);
    c->r[3] = c->r[2] << 1;
    c->r[2] = 0x08ab0000u;
    c->r[2] = c->r[2] + 0xffff9124u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[3] = mem_r8(ram, c->r[2] + 0x00000001u);
    c->r[2] = 0u + 0x00000005u;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_0897f154; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000024u);
    c->r[3] = c->r[2] << 1;
    c->r[2] = 0x08ab0000u;
    c->r[2] = c->r[2] + 0xffff9124u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[3] = mem_r8(ram, c->r[2] + 0x00000001u);
    c->r[2] = 0u + 0x00000006u;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_0897f154; }
    mem_w32(ram, c->r[30] + 0x00000028u, 0u);
L_0897f154:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000024u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000024u, c->r[2]); goto L_0897f0e4; }
L_0897f164:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000028u);
    c->r[2] = 0u + 0x00000001u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_0897f18c; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0u + 0xffffff80u;
    mem_w8(ram, c->r[3] + 0x00000010u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0u + 0x00000005u;
    mem_w8(ram, c->r[3] + 0x0000000eu, c->r[2]);
L_0897f18c:
    c->r[4] = 0u + 0xffffffffu;
    c->r[5] = 0u + 0u;
    { c->r[31] = 0x0897f19cu; c->r[6] = 0u + 0x00000001u; func_08974ae8(c, ram); }
    { c->r[31] = 0x0897f1a4u; func_0896a3e4(c, ram); }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = 0x08ab0000u;
    c->r[5] = c->r[5] + 0xffff9124u;
    c->r[6] = c->r[2] + 0u;
    { c->r[31] = 0x0897f1bcu; c->r[7] = 0u + 0x00000001u; func_089740f4(c, ram); }
    { goto L_0897f3d4; }
L_0897f1c4:
    c->r[2] = 0x08ab0000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0xffff9170u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_0897f20c; }
    { c->r[31] = 0x0897f1dcu; c->r[4] = 0u + 0x00000001u; func_089c5f10(c, ram); }
    { int _c = (c->r[2] == 0u); if (_c) goto L_0897f280; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0u + 0x00000004u;
    mem_w8(ram, c->r[3] + 0x00000010u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0u + 0x00000006u;
    mem_w32(ram, c->r[3] + 0x00000004u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0u + 0x00000014u;
    { mem_w8(ram, c->r[3] + 0x0000000eu, c->r[2]); goto L_0897f280; }
L_0897f20c:
    { c->r[31] = 0x0897f214u; c->r[4] = 0u + 0x00000001u; func_089c5e18(c, ram); }
    { int _c = (c->r[2] == 0u); if (_c) goto L_0897f24c; }
    { c->r[31] = 0x0897f224u; func_08973e38(c, ram); }
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0u + 0x00000003u;
    mem_w8(ram, c->r[3] + 0x00000010u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0u + 0x00000006u;
    mem_w32(ram, c->r[3] + 0x00000004u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0u + 0x00000015u;
    { mem_w8(ram, c->r[3] + 0x0000000eu, c->r[2]); goto L_0897f280; }
L_0897f24c:
    { c->r[31] = 0x0897f254u; c->r[4] = 0u + 0x00000001u; func_089c5f10(c, ram); }
    { int _c = (c->r[2] == 0u); if (_c) goto L_0897f280; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0u + 0x00000004u;
    mem_w8(ram, c->r[3] + 0x00000010u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0u + 0x00000006u;
    mem_w32(ram, c->r[3] + 0x00000004u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0u + 0x00000014u;
    mem_w8(ram, c->r[3] + 0x0000000eu, c->r[2]);
L_0897f280:
    c->r[4] = 0u + 0xffffffffu;
    c->r[5] = 0u + 0u;
    { c->r[31] = 0x0897f290u; c->r[6] = 0u + 0x00000001u; func_08974ae8(c, ram); }
    { c->r[31] = 0x0897f298u; func_0896a3e4(c, ram); }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = 0x08ab0000u;
    c->r[5] = c->r[5] + 0xffff9124u;
    c->r[6] = c->r[2] + 0u;
    { c->r[31] = 0x0897f2b0u; c->r[7] = 0u + 0x00000001u; func_089740f4(c, ram); }
    { goto L_0897f3d4; }
L_0897f2b8:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000004u);
    { int _c = ((s32)c->r[2] > 0); if (_c) goto L_0897f338; }
    mem_w32(ram, c->r[30] + 0x00000028u, 0u);
L_0897f2cc:
    { c->r[31] = 0x0897f2d4u; func_0896a3c0(c, ram); }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000028u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[2] = ((s32)c->r[3] < (s32)c->r[2]) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_0897f2f0; }
    { goto L_0897f31c; }
L_0897f2f0:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000028u);
    c->r[3] = c->r[2] << 1;
    c->r[2] = 0x08ab0000u;
    c->r[2] = c->r[2] + 0xffff9124u;
    c->r[2] = c->r[3] + c->r[2];
    { c->r[31] = 0x0897f30cu; c->r[4] = c->r[2] + 0u; func_089756ac(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000028u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000028u, c->r[2]); goto L_0897f2cc; }
L_0897f31c:
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0u + 0x0000000au;
    mem_w8(ram, c->r[3] + 0x00000010u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0u + 0x00000002u;
    { mem_w8(ram, c->r[3] + 0x0000000eu, c->r[2]); goto L_0897f3d4; }
L_0897f338:
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000004u);
    c->r[2] = c->r[2] + 0xffffffffu;
    { mem_w32(ram, c->r[3] + 0x00000004u, c->r[2]); goto L_0897f3d4; }
L_0897f350:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000004u);
    { int _c = ((s32)c->r[2] > 0); if (_c) goto L_0897f39c; }
    { c->r[31] = 0x0897f368u; func_089794c4(c, ram); }
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000004u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_0897f388; }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x0897f380u; c->r[5] = 0u + 0x00000017u; func_0896a7b8(c, ram); }
    { goto L_0897f3d4; }
L_0897f388:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x0897f394u; c->r[5] = 0u + 0x00000015u; func_0896a7b8(c, ram); }
    { goto L_0897f3d4; }
L_0897f39c:
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000004u);
    c->r[2] = c->r[2] + 0xffffffffu;
    { mem_w32(ram, c->r[3] + 0x00000004u, c->r[2]); goto L_0897f3d4; }
L_0897f3b4:
    { c->r[31] = 0x0897f3bcu; func_08973f98(c, ram); }
    { int _c = (c->r[2] != 0u); if (_c) goto L_0897f3cc; }
    { goto L_0897f3d4; }
L_0897f3cc:
    { c->r[31] = 0x0897f3d4u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u); func_0896a824(c, ram); }
L_0897f3d4:
    { c->r[31] = 0x0897f3dcu; func_0896a284(c, ram); }
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = mem_r8(ram, c->r[3] + 0x00000010u);
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0u + 0x00000007u;
    c->r[6] = c->r[3] + 0u;
    c->r[7] = 0u + 0x00000020u;
    c->r[8] = 0x08ab0000u;
    { c->r[31] = 0x0897f400u; c->r[8] = c->r[8] + 0xffff9124u; func_0896cc50(c, ram); }
    { c->r[31] = 0x0897f408u; func_08974fb4(c, ram); }
    { goto L_0897f86c; }
L_0897f410:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r8(ram, c->r[2] + 0x0000000eu);
    mem_w32(ram, c->r[30] + 0x00000034u, c->r[2]);
    c->r[2] = 0u + 0x00000003u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000034u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_0897f534; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000034u);
    c->r[2] = ((s32)c->r[3] < (s32)0x00000004u) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_0897f454; }
    c->r[2] = 0u + 0x00000002u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000034u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_0897f47c; }
    { goto L_0897f86c; }
L_0897f454:
    c->r[2] = 0u + 0x00000004u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000034u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_0897f604; }
    c->r[2] = 0u + 0x00000005u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000034u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_0897f654; }
    { goto L_0897f86c; }
L_0897f47c:
    c->r[1] = 0x08a50000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffff8e28u);
    c->r[4] = 0x08a70000u;
    c->r[4] = c->r[4] + 0xffffb640u;
    { c->r[31] = 0x0897f494u; c->f[12] = c->f[0]; func_089f1210(c, ram); }
    c->r[4] = 0x08a50000u;
    c->r[4] = c->r[4] + 0xffff8e18u;
    c->r[5] = 0u + 0x0000153au;
    { c->r[31] = 0x0897f4a8u; c->r[6] = 0u + 0x00000001u; func_08928cb8(c, ram); }
    c->r[4] = 0x08a70000u;
    { c->r[31] = 0x0897f4b4u; c->r[4] = c->r[4] + 0xffffb640u; func_089f147c(c, ram); }
    c->r[1] = 0x08a50000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffff8e2cu);
    c->r[4] = 0x08a70000u;
    c->r[4] = c->r[4] + 0xffffb640u;
    { c->r[31] = 0x0897f4ccu; c->f[12] = c->f[0]; func_089f1210(c, ram); }
    c->r[3] = 0x08ab0000u;
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[3] + 0xffff9168u);
    c->r[2] = 0u + 0x00000073u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[2] = c->lo;
    c->r[2] = c->r[2] + 0x00000043u;
    mem_w32(ram, c->r[30] + 0x00000028u, c->r[2]);
    c->r[3] = 0x08ab0000u;
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[3] + 0xffff9169u);
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
    { c->r[31] = 0x0897f520u; c->r[6] = c->r[6] | 0x0800u; func_0892566c(c, ram); }
    c->r[4] = 0x08a70000u;
    { c->r[31] = 0x0897f52cu; c->r[4] = c->r[4] + 0xffffb640u; func_089f147c(c, ram); }
    { goto L_0897f86c; }
L_0897f534:
    c->r[1] = 0x08a50000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffff8e28u);
    c->r[4] = 0x08a70000u;
    c->r[4] = c->r[4] + 0xffffb640u;
    { c->r[31] = 0x0897f54cu; c->f[12] = c->f[0]; func_089f1210(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000010u);
    mem_w32(ram, c->r[30] + 0x00000030u, c->r[2]);
    c->r[2] = 0u + 0x00000001u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000030u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_0897f5c0; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000030u);
    c->r[2] = ((s32)c->r[3] < (s32)0x00000002u) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_0897f58c; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000030u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_0897f5a4; }
    { goto L_0897f5f0; }
L_0897f58c:
    c->r[2] = 0u + 0x00000002u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000030u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_0897f5dc; }
    { goto L_0897f5f0; }
L_0897f5a4:
    c->r[4] = 0x08a50000u;
    c->r[4] = c->r[4] + 0xffff8e18u;
    c->r[5] = 0u + 0x0000153cu;
    { c->r[31] = 0x0897f5b8u; c->r[6] = 0u + 0x00000001u; func_08928cb8(c, ram); }
    { goto L_0897f5f0; }
L_0897f5c0:
    c->r[4] = 0x08a50000u;
    c->r[4] = c->r[4] + 0xffff8e18u;
    c->r[5] = 0u + 0x0000153du;
    { c->r[31] = 0x0897f5d4u; c->r[6] = 0u + 0x00000001u; func_08928cb8(c, ram); }
    { goto L_0897f5f0; }
L_0897f5dc:
    c->r[4] = 0x08a50000u;
    c->r[4] = c->r[4] + 0xffff8e18u;
    c->r[5] = 0u + 0x00001581u;
    { c->r[31] = 0x0897f5f0u; c->r[6] = 0u + 0x00000001u; func_08928cb8(c, ram); }
L_0897f5f0:
    c->r[4] = 0x08a70000u;
    { c->r[31] = 0x0897f5fcu; c->r[4] = c->r[4] + 0xffffb640u; func_089f147c(c, ram); }
    { goto L_0897f86c; }
L_0897f604:
    c->r[1] = 0x08a50000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffff8e28u);
    c->r[4] = 0x08a70000u;
    c->r[4] = c->r[4] + 0xffffb640u;
    { c->r[31] = 0x0897f61cu; c->f[12] = c->f[0]; func_089f1210(c, ram); }
    { c->r[31] = 0x0897f624u; c->r[4] = 0u + 0x00000004u; func_08928c60(c, ram); }
    c->r[4] = 0x08a50000u;
    c->r[4] = c->r[4] + 0xffff8e18u;
    c->r[5] = 0u + 0x00001504u;
    { c->r[31] = 0x0897f638u; c->r[6] = 0u + 0x00000001u; func_08928cb8(c, ram); }
    { c->r[31] = 0x0897f640u; c->r[4] = 0u + 0x00000001u; func_08928c60(c, ram); }
    c->r[4] = 0x08a70000u;
    { c->r[31] = 0x0897f64cu; c->r[4] = c->r[4] + 0xffffb640u; func_089f147c(c, ram); }
    { goto L_0897f86c; }
L_0897f654:
    c->r[1] = 0x08a50000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffff8e28u);
    c->r[4] = 0x08a70000u;
    c->r[4] = c->r[4] + 0xffffb640u;
    { c->r[31] = 0x0897f66cu; c->f[12] = c->f[0]; func_089f1210(c, ram); }
    c->r[3] = 0x08ab0000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0xffff9170u);
    c->r[2] = 0u + 0x00000001u;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_0897f69c; }
    c->r[4] = 0x08a50000u;
    c->r[4] = c->r[4] + 0xffff8e18u;
    c->r[5] = 0u + 0x00001582u;
    { c->r[31] = 0x0897f694u; c->r[6] = 0u + 0x00000001u; func_08928cb8(c, ram); }
    { goto L_0897f6b0; }
L_0897f69c:
    c->r[4] = 0x08a50000u;
    c->r[4] = c->r[4] + 0xffff8e18u;
    c->r[5] = 0u + 0x0000153bu;
    { c->r[31] = 0x0897f6b0u; c->r[6] = 0u + 0x00000001u; func_08928cb8(c, ram); }
L_0897f6b0:
    c->r[4] = 0x08a70000u;
    { c->r[31] = 0x0897f6bcu; c->r[4] = c->r[4] + 0xffffb640u; func_089f147c(c, ram); }
    { goto L_0897f86c; }
L_0897f6c4:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_0897f86c; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    mem_w32(ram, c->r[30] + 0x00000028u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000028u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x00000004u);
    c->r[2] = 0u + 0x00000002u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_0897f84c; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0u + 0x00000001u;
    mem_w8(ram, c->r[3] + 0x00000040u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000028u);
    { c->r[31] = 0x0897f704u; c->r[4] = mem_r32(ram, c->r[2] + 0x00000000u); func_0892feac(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000024u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000024u);
    c->r[2] = 0u + 0x00000065u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_0897f764; }
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000af4u;
    { c->r[31] = 0x0897f728u; c->r[5] = 0u + 0x00000066u; func_088145a8(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000020u, c->r[2]);
    c->r[3] = 0u + 0x0000003fu;
    c->r[2] = 0x08ab0000u;
    c->r[2] = mem_r8(ram, c->r[2] + 0xffff916bu);
    c->r[2] = c->r[2] & c->r[3];
    c->r[1] = 0x08ab0000u;
    mem_w8(ram, c->r[1] + 0xffff916bu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[2] = c->r[2] << 6;
    c->r[3] = 0x08ab0000u;
    c->r[3] = mem_r8(ram, c->r[3] + 0xffff916bu);
    c->r[2] = c->r[3] | c->r[2];
    c->r[1] = 0x08ab0000u;
    { mem_w8(ram, c->r[1] + 0xffff916bu, c->r[2]); goto L_0897f86c; }
L_0897f764:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000024u);
    c->r[2] = 0u + 0x00000067u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_0897f86c; }
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000af4u;
    { c->r[31] = 0x0897f784u; c->r[5] = 0u + 0x00000068u; func_088145a8(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000020u, c->r[2]);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000af4u;
    { c->r[31] = 0x0897f798u; c->r[5] = 0u + 0x00000069u; func_088145a8(c, ram); }
    mem_w32(ram, c->r[30] + 0x0000001cu, c->r[2]);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000af4u;
    { c->r[31] = 0x0897f7acu; c->r[5] = 0u + 0x0000006au; func_088145a8(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]);
    c->r[3] = 0u + 0x0000003fu;
    c->r[2] = 0x08ab0000u;
    c->r[2] = mem_r8(ram, c->r[2] + 0xffff916bu);
    c->r[2] = c->r[2] & c->r[3];
    c->r[1] = 0x08ab0000u;
    mem_w8(ram, c->r[1] + 0xffff916bu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[2] = c->r[2] << 6;
    c->r[3] = 0x08ab0000u;
    c->r[3] = mem_r8(ram, c->r[3] + 0xffff916bu);
    c->r[2] = c->r[3] | c->r[2];
    c->r[1] = 0x08ab0000u;
    mem_w8(ram, c->r[1] + 0xffff916bu, c->r[2]);
    c->r[3] = 0x08ab0000u;
    c->r[3] = mem_r8(ram, c->r[3] + 0xffff916bu);
    c->r[2] = 0u + 0xfffffffcu;
    c->r[2] = c->r[3] & c->r[2];
    c->r[1] = 0x08ab0000u;
    mem_w8(ram, c->r[1] + 0xffff916bu, c->r[2]);
    c->r[3] = 0x08ab0000u;
    c->r[3] = mem_r8(ram, c->r[3] + 0xffff916bu);
    c->r[2] = mem_r8(ram, c->r[30] + 0x0000001cu);
    c->r[2] = c->r[3] | c->r[2];
    c->r[1] = 0x08ab0000u;
    mem_w8(ram, c->r[1] + 0xffff916bu, c->r[2]);
    c->r[3] = 0x08ab0000u;
    c->r[3] = mem_r8(ram, c->r[3] + 0xffff916bu);
    c->r[2] = 0u + 0xffffffefu;
    c->r[2] = c->r[3] & c->r[2];
    c->r[1] = 0x08ab0000u;
    mem_w8(ram, c->r[1] + 0xffff916bu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = c->r[2] << 4;
    c->r[3] = 0x08ab0000u;
    c->r[3] = mem_r8(ram, c->r[3] + 0xffff916bu);
    c->r[2] = c->r[3] | c->r[2];
    c->r[1] = 0x08ab0000u;
    { mem_w8(ram, c->r[1] + 0xffff916bu, c->r[2]); goto L_0897f86c; }
L_0897f84c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000028u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x00000004u);
    c->r[2] = 0u + 0x00000003u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_0897f86c; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0u + 0xffffffffu;
    mem_w8(ram, c->r[3] + 0x00000040u, c->r[2]);
L_0897f86c:
    c->r[2] = 0u + 0u;
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000048u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000044u);
    c->r[16] = mem_r32(ram, c->r[29] + 0x00000040u);
    { c->r[29] = c->r[29] + 0x00000050u; return; }
    return; /* fell out of func_0897e4cc */
}

/* func_08986994  0x08986994..0x08986a84  240 bytes, source=fde */
void func_08986994(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08986994u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    { c->r[31] = 0x089869acu; mem_w32(ram, c->r[30] + 0x00000000u, 0u); func_0896a284(c, ram); }
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0u + 0x00000009u;
    c->r[6] = 0u + 0x00000009u;
    { c->r[31] = 0x089869c0u; c->r[7] = 0u + 0x000000ffu; func_0896d22c(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = 0u + 0xffffffffu;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_089869e0; }
    c->r[2] = 0u + 0xffffffffu;
    { mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]); goto L_08986a6c; }
L_089869e0:
    { c->r[31] = 0x089869e8u; c->r[4] = 0u + 0u; func_0896a458(c, ram); }
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x0000020bu);
    { int _c = (c->r[2] == 0u); if (_c) goto L_08986a5c; }
    { c->r[31] = 0x089869fcu; c->r[4] = 0u + 0u; func_0896a458(c, ram); }
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000204u);
    c->r[3] = mem_r8(ram, c->r[2] + 0x00000002u);
    c->r[2] = 0u + 0x00000009u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_08986a5c; }
    { c->r[31] = 0x08986a18u; c->r[4] = 0u + 0u; func_0896a458(c, ram); }
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000204u);
    c->r[2] = c->r[2] + 0x00000008u;
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]);
    c->r[4] = 0x08ab0000u;
    c->r[4] = c->r[4] + 0xffff9240u;
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000008u);
    { c->r[31] = 0x08986a38u; c->r[6] = 0u + 0x00000010u; func_08a19db8(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[2] + 0x00000010u;
    c->r[4] = 0x08ab0000u;
    c->r[4] = c->r[4] + 0xffff9250u;
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x08986a54u; c->r[6] = 0u + 0x00000020u; func_08a19db8(c, ram); }
    c->r[2] = 0u + 0x00000001u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[2]);
L_08986a5c:
    { c->r[31] = 0x08986a64u; func_08986620(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
L_08986a6c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_08986994 */
}

/* func_089943d0  0x089943d0..0x08994450  128 bytes, source=sweep */
void func_089943d0(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089943d0u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = 0u | 0xffffu;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_08994414; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = 0u + 0x00000001u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_08994414; }
    c->r[4] = 0x08ab0000u;
    { c->r[31] = 0x08994414u; c->r[4] = c->r[4] + 0xffff98d8u; func_088112e8(c, ram); }
L_08994414:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = 0u | 0xffffu;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_0899443c; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_0899443c; }
    c->r[4] = 0x08ab0000u;
    { c->r[31] = 0x0899443cu; c->r[4] = c->r[4] + 0xffff98d8u; func_08811320(c, ram); }
L_0899443c:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_089943d0 */
}

/* func_08998cec  0x08998cec..0x08998d1c  48 bytes, source=sweep */
void func_08998cec(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08998cecu);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[3] = 0x08ab0000u;
    c->r[3] = c->r[3] + 0x00002a9cu;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_08998cec */
}

/* func_08999384  0x08999384..0x089993bc  56 bytes, source=fde */
void func_08999384(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08999384u);
    c->r[29] = c->r[29] + 0xfffffff0u;
    mem_w32(ram, c->r[29] + 0x00000004u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000000u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    c->r[4] = 0x08ab0000u;
    c->r[4] = c->r[4] + 0x00002ac8u;
    c->r[5] = 0u + 0u;
    { c->r[31] = 0x089993a8u; c->r[6] = 0u + 0x00000018u; func_08a19ec4(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000004u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000000u);
    { c->r[29] = c->r[29] + 0x00000010u; return; }
    return; /* fell out of func_08999384 */
}

/* func_0899f234  0x0899f234..0x0899f320  236 bytes, source=fde */
void func_0899f234(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0899f234u);
    c->r[29] = c->r[29] + 0xffffffd0u;
    mem_w32(ram, c->r[29] + 0x00000024u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000020u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[6]);
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[7]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = c->r[2] << 8;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08ab0000u;
    c->r[2] = c->r[2] + 0xffff9a90u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000ac8u;
    { c->r[31] = 0x0899f288u; c->r[5] = c->r[2] + 0u; func_089cb820(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_0899f30c; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = c->r[2] + 0x000000e0u;
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000014u);
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
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    { int _c = (c->r[2] == 0u); if (_c) goto L_0899f2ec; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = 0u + 0x00000003u;
    { mem_w8(ram, c->r[3] + 0x0000005au, c->r[2]); goto L_0899f2f8; }
L_0899f2ec:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = 0u + 0x00000001u;
    mem_w8(ram, c->r[3] + 0x0000005au, c->r[2]);
L_0899f2f8:
    { c->r[31] = 0x0899f300u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000010u); func_088c03dc(c, ram); }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000010u);
    { c->r[31] = 0x0899f30cu; c->r[5] = mem_r32(ram, c->r[30] + 0x00000014u); func_088c0414(c, ram); }
L_0899f30c:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000024u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000020u);
    { c->r[29] = c->r[29] + 0x00000030u; return; }
    return; /* fell out of func_0899f234 */
}

/* func_089a23a4  0x089a23a4..0x089a2864  1216 bytes, source=fde */
void func_089a23a4(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089a23a4u);
    c->r[29] = c->r[29] + 0xffffffb0u;
    mem_w32(ram, c->r[29] + 0x00000044u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000040u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[2] = 0u + 0xffffffffu;
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[2]);
    c->r[2] = 0x80000000u;
    c->r[2] = c->r[2] | 0x0001u;
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]);
    c->r[2] = 0x80000000u;
    c->r[2] = c->r[2] | 0x0001u;
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
    c->r[2] = 0x7fff0000u;
    c->r[2] = c->r[2] | 0xffffu;
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]);
    mem_w32(ram, c->r[30] + 0x00000014u, 0u);
    mem_w8(ram, c->r[30] + 0x00000018u, 0u);
    mem_w32(ram, c->r[30] + 0x0000001cu, 0u);
L_089a23f0:
    { c->r[31] = 0x089a23f8u; func_0896a3c0(c, ram); }
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[2] = ((s32)c->r[3] < (s32)c->r[2]) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_089a2414; }
    { goto L_089a25fc; }
L_089a2414:
    { c->r[31] = 0x089a241cu; c->r[4] = mem_r32(ram, c->r[30] + 0x0000001cu); func_0896a458(c, ram); }
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000204u);
    c->r[2] = c->r[2] + 0x00000008u;
    { c->r[31] = 0x089a242cu; mem_w32(ram, c->r[30] + 0x00000020u, c->r[2]); func_0896a3c0(c, ram); }
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[2] = ((s32)c->r[3] < (s32)c->r[2]) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_089a2494; }
    { c->r[31] = 0x089a2448u; func_0896a3e4(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    { int _c = (c->r[2] == c->r[3]); if (_c) goto L_089a2494; }
    { c->r[31] = 0x089a2460u; func_0896a3c0(c, ram); }
    c->r[4] = c->r[2] + 0u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 3;
    c->r[2] = c->r[2] + c->r[3];
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[4];
    c->r[2] = c->r[2] + 0x00000020u;
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000004u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_089a2494; }
    { goto L_089a25ec; }
L_089a2494:
    { c->r[31] = 0x089a249cu; c->r[4] = mem_r32(ram, c->r[30] + 0x0000001cu); func_0896f988(c, ram); }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = ((s32)c->r[3] < (s32)c->r[2]) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_089a24f0; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[2]);
    { c->r[31] = 0x089a24bcu; c->r[4] = mem_r32(ram, c->r[30] + 0x0000001cu); func_0896f988(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]);
    { c->r[31] = 0x089a24c8u; c->r[4] = mem_r32(ram, c->r[30] + 0x0000001cu); func_0896fe40(c, ram); }
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
    { c->r[31] = 0x089a24d4u; c->r[4] = mem_r32(ram, c->r[30] + 0x0000001cu); func_0896f9c0(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]);
    mem_w32(ram, c->r[30] + 0x00000014u, 0u);
    c->r[3] = 0u + 0x00000001u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = c->r[3] << (c->r[2] & 31u);
    { mem_w8(ram, c->r[30] + 0x00000018u, c->r[2]); goto L_089a25ec; }
L_089a24f0:
    { c->r[31] = 0x089a24f8u; c->r[4] = mem_r32(ram, c->r[30] + 0x0000001cu); func_0896f988(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_089a25ec; }
    { c->r[31] = 0x089a2510u; c->r[4] = mem_r32(ram, c->r[30] + 0x0000001cu); func_0896fe40(c, ram); }
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = ((s32)c->r[3] < (s32)c->r[2]) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_089a2558; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[2]);
    { c->r[31] = 0x089a2530u; c->r[4] = mem_r32(ram, c->r[30] + 0x0000001cu); func_0896fe40(c, ram); }
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
    { c->r[31] = 0x089a253cu; c->r[4] = mem_r32(ram, c->r[30] + 0x0000001cu); func_0896f9c0(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]);
    mem_w32(ram, c->r[30] + 0x00000014u, 0u);
    c->r[3] = 0u + 0x00000001u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = c->r[3] << (c->r[2] & 31u);
    { mem_w8(ram, c->r[30] + 0x00000018u, c->r[2]); goto L_089a25ec; }
L_089a2558:
    { c->r[31] = 0x089a2560u; c->r[4] = mem_r32(ram, c->r[30] + 0x0000001cu); func_0896fe40(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_089a25ec; }
    { c->r[31] = 0x089a2578u; c->r[4] = mem_r32(ram, c->r[30] + 0x0000001cu); func_0896f9c0(c, ram); }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = ((s32)c->r[2] < (s32)c->r[3]) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_089a25b4; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[2]);
    { c->r[31] = 0x089a2598u; c->r[4] = mem_r32(ram, c->r[30] + 0x0000001cu); func_0896f9c0(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]);
    mem_w32(ram, c->r[30] + 0x00000014u, 0u);
    c->r[3] = 0u + 0x00000001u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = c->r[3] << (c->r[2] & 31u);
    { mem_w8(ram, c->r[30] + 0x00000018u, c->r[2]); goto L_089a25ec; }
L_089a25b4:
    { c->r[31] = 0x089a25bcu; c->r[4] = mem_r32(ram, c->r[30] + 0x0000001cu); func_0896f9c0(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_089a25ec; }
    c->r[2] = 0u + 0x00000001u;
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
    c->r[3] = 0u + 0x00000001u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = c->r[3] << (c->r[2] & 31u);
    c->r[3] = mem_r8(ram, c->r[30] + 0x00000018u);
    c->r[2] = c->r[3] | c->r[2];
    mem_w8(ram, c->r[30] + 0x00000018u, c->r[2]);
L_089a25ec:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x0000001cu, c->r[2]); goto L_089a23f0; }
L_089a25fc:
    { c->r[31] = 0x089a2604u; func_08979620(c, ram); }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = ((s32)c->r[3] < (s32)c->r[2]) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_089a2650; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_089a2634; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r8(ram, c->r[30] + 0x00000018u);
    c->r[3] = c->r[3] | 0x0050u;
    { mem_w8(ram, c->r[2] + 0x00000000u, c->r[3]); goto L_089a2644; }
L_089a2634:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r8(ram, c->r[30] + 0x00000018u);
    c->r[3] = c->r[3] | 0x0040u;
    mem_w8(ram, c->r[2] + 0x00000000u, c->r[3]);
L_089a2644:
    c->r[2] = 0u + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000038u, c->r[2]); goto L_089a284c; }
L_089a2650:
    c->r[2] = 0x80000000u;
    c->r[2] = c->r[2] | 0x0001u;
    mem_w32(ram, c->r[30] + 0x00000020u, c->r[2]);
    c->r[2] = 0u + 0xffffffffu;
    mem_w32(ram, c->r[30] + 0x0000001cu, c->r[2]);
    c->r[2] = 0x7fff0000u;
    c->r[2] = c->r[2] | 0xffffu;
    mem_w32(ram, c->r[30] + 0x00000024u, c->r[2]);
    mem_w32(ram, c->r[30] + 0x00000028u, 0u);
    mem_w8(ram, c->r[30] + 0x0000002cu, 0u);
    mem_w32(ram, c->r[30] + 0x00000030u, 0u);
L_089a267c:
    { c->r[31] = 0x089a2684u; func_0896a3c0(c, ram); }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000030u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[2] = ((s32)c->r[3] < (s32)c->r[2]) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_089a26a0; }
    { goto L_089a2738; }
L_089a26a0:
    { c->r[31] = 0x089a26a8u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000030u); func_0896fe40(c, ram); }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[2] = ((s32)c->r[3] < (s32)c->r[2]) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_089a26f0; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000030u);
    mem_w32(ram, c->r[30] + 0x0000001cu, c->r[2]);
    { c->r[31] = 0x089a26c8u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000030u); func_0896fe40(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000020u, c->r[2]);
    { c->r[31] = 0x089a26d4u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000030u); func_0896f9c0(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000024u, c->r[2]);
    mem_w32(ram, c->r[30] + 0x00000028u, 0u);
    c->r[3] = 0u + 0x00000001u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000030u);
    c->r[2] = c->r[3] << (c->r[2] & 31u);
    { mem_w8(ram, c->r[30] + 0x0000002cu, c->r[2]); goto L_089a2728; }
L_089a26f0:
    { c->r[31] = 0x089a26f8u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000030u); func_0896fe40(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_089a2728; }
    c->r[2] = 0u + 0x00000001u;
    mem_w32(ram, c->r[30] + 0x00000028u, c->r[2]);
    c->r[3] = 0u + 0x00000001u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000030u);
    c->r[2] = c->r[3] << (c->r[2] & 31u);
    c->r[3] = mem_r8(ram, c->r[30] + 0x0000002cu);
    c->r[2] = c->r[3] | c->r[2];
    mem_w8(ram, c->r[30] + 0x0000002cu, c->r[2]);
L_089a2728:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000030u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000030u, c->r[2]); goto L_089a267c; }
L_089a2738:
    { c->r[31] = 0x089a2740u; func_089795dc(c, ram); }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[2] = ((s32)c->r[3] < (s32)c->r[2]) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_089a278c; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000028u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_089a2770; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r8(ram, c->r[30] + 0x0000002cu);
    c->r[3] = c->r[3] | 0x0030u;
    { mem_w8(ram, c->r[2] + 0x00000000u, c->r[3]); goto L_089a2780; }
L_089a2770:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r8(ram, c->r[30] + 0x0000002cu);
    c->r[3] = c->r[3] | 0x0020u;
    mem_w8(ram, c->r[2] + 0x00000000u, c->r[3]);
L_089a2780:
    c->r[2] = 0u + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000038u, c->r[2]); goto L_089a284c; }
L_089a278c:
    { c->r[31] = 0x089a2794u; func_089990dc(c, ram); }
    { int _c = (c->r[2] == 0u); if (_c) goto L_089a2818; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_089a27bc; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r8(ram, c->r[30] + 0x00000018u);
    c->r[3] = c->r[3] | 0x0040u;
    { mem_w8(ram, c->r[2] + 0x00000000u, c->r[3]); goto L_089a27f4; }
L_089a27bc:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000028u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_089a27dc; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r8(ram, c->r[30] + 0x0000002cu);
    c->r[3] = c->r[3] | 0x0020u;
    { mem_w8(ram, c->r[2] + 0x00000000u, c->r[3]); goto L_089a27f4; }
L_089a27dc:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r8(ram, c->r[30] + 0x00000018u);
    c->r[2] = mem_r8(ram, c->r[30] + 0x0000002cu);
    c->r[2] = c->r[3] | c->r[2];
    c->r[2] = c->r[2] | 0x0010u;
    mem_w8(ram, c->r[4] + 0x00000000u, c->r[2]);
L_089a27f4:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r8(ram, c->r[2] + 0x00000000u);
    c->r[2] = 0u + 0xffffff80u;
    c->r[2] = c->r[3] | c->r[2];
    mem_w8(ram, c->r[4] + 0x00000000u, c->r[2]);
    c->r[2] = 0u + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000038u, c->r[2]); goto L_089a284c; }
L_089a2818:
    c->r[3] = mem_r8(ram, c->r[30] + 0x00000018u);
    c->r[2] = mem_r8(ram, c->r[30] + 0x0000002cu);
    c->r[2] = c->r[3] | c->r[2];
    mem_w8(ram, c->r[30] + 0x00000034u, c->r[2]);
    c->r[2] = mem_r8(ram, c->r[30] + 0x00000034u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_089a283c; }
    c->r[2] = mem_r8(ram, c->r[30] + 0x00000018u);
    mem_w8(ram, c->r[30] + 0x00000034u, c->r[2]);
L_089a283c:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r8(ram, c->r[30] + 0x00000034u);
    mem_w8(ram, c->r[3] + 0x00000000u, c->r[2]);
    mem_w32(ram, c->r[30] + 0x00000038u, 0u);
L_089a284c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000038u);
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000044u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000040u);
    { c->r[29] = c->r[29] + 0x00000050u; return; }
    return; /* fell out of func_089a23a4 */
}

/* func_089a73c4  0x089a73c4..0x089a7870  1196 bytes, source=fde */
void func_089a73c4(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089a73c4u);
    c->r[29] = c->r[29] + 0xffffffd0u;
    mem_w32(ram, c->r[29] + 0x00000024u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000020u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, 0u);
L_089a73d8:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000002u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_089a73f0; }
    { goto L_089a7804; }
L_089a73f0:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = c->r[2] << 1;
    c->r[2] = 0x08a60000u;
    c->r[2] = c->r[2] + 0xffffa75cu;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x00000000u);
    { int _c = ((s32)c->r[2] <= 0); if (_c) goto L_089a758c; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = c->r[2] << 1;
    c->r[2] = 0x08a60000u;
    c->r[2] = c->r[2] + 0xffffa75cu;
    c->r[4] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = c->r[2] << 1;
    c->r[2] = 0x08a60000u;
    c->r[2] = c->r[2] + 0xffffa75cu;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r16(ram, c->r[2] + 0x00000000u);
    c->r[2] = c->r[2] + 0xffffffffu;
    mem_w16(ram, c->r[4] + 0x00000000u, c->r[2]);
    c->r[2] = 0u + 0xffffffffu;
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = c->r[2] << 1;
    c->r[2] = 0x08a60000u;
    c->r[2] = c->r[2] + 0xffffa75cu;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x00000000u);
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
    c->r[2] = 0u + 0x00000078u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000014u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_089a7528; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = ((s32)c->r[3] < (s32)0x00000079u) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_089a74ac; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_089a7540; }
    c->r[2] = 0u + 0x0000003cu;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000014u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_089a7534; }
    { goto L_089a7548; }
L_089a74ac:
    c->r[2] = 0u + 0x000000c8u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000014u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_089a7504; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = ((s32)c->r[3] < (s32)0x000000c9u) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_089a74e4; }
    c->r[2] = 0u + 0x000000b4u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000014u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_089a751c; }
    { goto L_089a7548; }
L_089a74e4:
    c->r[2] = 0u + 0x000000f0u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000014u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_089a74fc; }
    { goto L_089a7548; }
L_089a74fc:
    { mem_w32(ram, c->r[30] + 0x00000004u, 0u); goto L_089a7548; }
L_089a7504:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = 0x08ab0000u;
    c->r[3] = c->r[3] + 0x00002e84u;
    c->r[2] = c->r[2] + c->r[3];
    { mem_w8(ram, c->r[2] + 0x00000000u, 0u); goto L_089a7548; }
L_089a751c:
    c->r[2] = 0u + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000004u, c->r[2]); goto L_089a7548; }
L_089a7528:
    c->r[2] = 0u + 0x00000002u;
    { mem_w32(ram, c->r[30] + 0x00000004u, c->r[2]); goto L_089a7548; }
L_089a7534:
    c->r[2] = 0u + 0x00000003u;
    { mem_w32(ram, c->r[30] + 0x00000004u, c->r[2]); goto L_089a7548; }
L_089a7540:
    c->r[2] = 0u + 0x00000004u;
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[2]);
L_089a7548:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    { int _c = ((s32)c->r[2] < 0); if (_c) goto L_089a77f4; }
    c->r[2] = 0x08ab0000u;
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00002e86u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_089a7578; }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x089a7570u; c->r[5] = mem_r32(ram, c->r[30] + 0x00000004u); func_089a6564(c, ram); }
    { goto L_089a77f4; }
L_089a7578:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x089a7584u; c->r[5] = mem_r32(ram, c->r[30] + 0x00000004u); func_089a67e4(c, ram); }
    { goto L_089a77f4; }
L_089a758c:
    { c->r[31] = 0x089a7594u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u); func_089a6f74(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_089a75ac; }
    { goto L_089a77f4; }
L_089a75ac:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = 0u + 0x00000001u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_089a76e0; }
    { c->r[31] = 0x089a75c4u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u); func_08998cec(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = mem_r8(ram, c->r[3] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000001u;
    mem_w8(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = 0x08ab0000u;
    c->r[2] = c->r[2] + 0x00002e84u;
    c->r[3] = c->r[3] + c->r[2];
    c->r[2] = 0u + 0x00000001u;
    mem_w8(ram, c->r[3] + 0x00000000u, c->r[2]);
    { c->r[31] = 0x089a75f4u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u); func_08970f6c(c, ram); }
    c->r[2] = mem_r8(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000017u;
    c->r[2] = c->r[2] & 0x00ffu;
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x089a760cu; c->r[5] = 0u + 0u; func_089226dc(c, ram); }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08ab0000u;
    c->r[2] = c->r[2] + 0x00002e50u;
    c->r[2] = c->r[2] + c->r[3];
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]);
    mem_w32(ram, c->r[30] + 0x0000000cu, 0u);
L_089a7634:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000005u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_089a764c; }
    { goto L_089a76b0; }
L_089a764c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = c->r[2] << 2;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000ac8u;
    { c->r[31] = 0x089a7670u; c->r[5] = c->r[2] + 0u; func_089cb820(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_089a76a0; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000008cu);
    c->r[2] = c->r[2] & 0x8000u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_089a76a0; }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000010u);
    { c->r[31] = 0x089a76a0u; c->r[5] = 0u + 0x00000002u; func_0880d260(c, ram); }
L_089a76a0:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]); goto L_089a7634; }
L_089a76b0:
    { c->r[31] = 0x089a76b8u; func_0896dc4c(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    { int _c = (c->r[2] != c->r[3]); if (_c) goto L_089a76d0; }
    { c->r[31] = 0x089a76d0u; c->r[4] = 0u + 0x00002098u; func_089346e8(c, ram); }
L_089a76d0:
    c->r[1] = 0x08a50000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffffab40u);
    c->r[1] = 0x08ab0000u;
    mem_wf32(ram, c->r[1] + 0x00002ea0u, c->f[0]);
L_089a76e0:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = 0x08ab0000u;
    c->r[2] = c->r[2] + 0x00002e7cu;
    c->r[4] = c->r[3] + c->r[2];
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = 0x08ab0000u;
    c->r[2] = c->r[2] + 0x00002e7cu;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000001u;
    mem_w8(ram, c->r[4] + 0x00000000u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = 0x08ab0000u;
    c->r[2] = c->r[2] + 0x00002e7cu;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000000u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000004u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_089a77a4; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = 0x08ab0000u;
    c->r[2] = c->r[2] + 0x00002e7cu;
    c->r[2] = c->r[3] + c->r[2];
    mem_w8(ram, c->r[2] + 0x00000000u, 0u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = 0x08ab0000u;
    c->r[2] = c->r[2] + 0x00002e80u;
    c->r[4] = c->r[3] + c->r[2];
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = 0x08ab0000u;
    c->r[2] = c->r[2] + 0x00002e80u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000001u;
    mem_w8(ram, c->r[4] + 0x00000000u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = 0x08ab0000u;
    c->r[2] = c->r[2] + 0x00002e80u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000000u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000004u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_089a77a4; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = 0x08ab0000u;
    c->r[2] = c->r[2] + 0x00002e80u;
    c->r[3] = c->r[3] + c->r[2];
    c->r[2] = 0u + 0x00000003u;
    mem_w8(ram, c->r[3] + 0x00000000u, c->r[2]);
L_089a77a4:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = c->r[2] << 1;
    c->r[2] = 0x08a60000u;
    c->r[2] = c->r[2] + 0xffffa75cu;
    c->r[3] = c->r[3] + c->r[2];
    c->r[2] = 0u + 0x0000012cu;
    { c->r[31] = 0x089a77c4u; mem_w16(ram, c->r[3] + 0x00000000u, c->r[2]); func_0896dc4c(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    { int _c = (c->r[2] == c->r[3]); if (_c) goto L_089a77f4; }
    c->r[1] = 0x08ab0000u;
    mem_w32(ram, c->r[1] + 0x00002e78u, 0u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = 0u + 0x00000001u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_089a77f4; }
    c->r[1] = 0x08ab0000u;
    mem_w32(ram, c->r[1] + 0x00002e78u, 0u);
L_089a77f4:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000000u, c->r[2]); goto L_089a73d8; }
L_089a7804:
    { c->r[31] = 0x089a780cu; func_0896dc4c(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = 0u + 0x00000001u;
    c->r[2] = c->r[2] - c->r[3];
    c->r[3] = c->r[2] << 1;
    c->r[2] = 0x08a60000u;
    c->r[2] = c->r[2] + 0xffffa75cu;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x00000000u);
    c->r[2] = ((s32)c->r[2] < (s32)0x000000f1u) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_089a7848; }
    { c->r[31] = 0x089a7840u; func_089a71fc(c, ram); }
    c->r[1] = 0x08ab0000u;
    mem_wf32(ram, c->r[1] + 0x00002e78u, c->f[0]);
L_089a7848:
    { c->r[31] = 0x089a7850u; c->r[4] = 0u + 0u; func_08903aac(c, ram); }
    c->r[1] = 0x08ab0000u;
    { c->r[31] = 0x089a785cu; c->f[12] = mem_rf32(ram, c->r[1] + 0x00002e78u); func_08903adc(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000024u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000020u);
    { c->r[29] = c->r[29] + 0x00000030u; return; }
    return; /* fell out of func_089a73c4 */
}

/* func_089ac8a0  0x089ac8a0..0x089ac8cc  44 bytes, source=sweep */
void func_089ac8a0(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089ac8a0u);
    c->r[29] = c->r[29] + 0xfffffff0u;
    mem_w32(ram, c->r[29] + 0x00000000u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    c->r[1] = 0x08ab0000u;
    mem_w8(ram, c->r[1] + 0x000030f4u, 0u);
    c->r[1] = 0x08ab0000u;
    mem_w8(ram, c->r[1] + 0x000030f5u, 0u);
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000000u);
    { c->r[29] = c->r[29] + 0x00000010u; return; }
    return; /* fell out of func_089ac8a0 */
}

/* func_089b2ca4  0x089b2ca4..0x089b2ce8  68 bytes, source=sweep */
void func_089b2ca4(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089b2ca4u);
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
    { c->r[31] = 0x089b2cd4u; c->r[5] = c->r[2] + 0u; func_089b27cc(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_089b2ca4 */
}

/* func_089b3a48  0x089b3a48..0x089b3ad8  144 bytes, source=fde */
void func_089b3a48(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089b3a48u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    { c->r[31] = 0x089b3a60u; mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]); hle_dispatch_stub(c, ram, 0x08a249c4u); /* sceDisplayGetAccumulatedHcount */ }
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000001cu);
    c->r[2] = ((s32)c->r[3] < (s32)c->r[2]) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_089b3aa0; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000001cu);
    c->r[3] = c->r[3] - c->r[2];
    c->r[2] = 0x7fff0000u;
    c->r[2] = c->r[2] | 0xffffu;
    c->r[2] = c->r[3] + c->r[2];
    { mem_w32(ram, c->r[30] + 0x00000004u, c->r[2]); goto L_089b3ab4; }
L_089b3aa0:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000001cu);
    c->r[2] = c->r[3] - c->r[2];
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[2]);
L_089b3ab4:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    mem_w32(ram, c->r[3] + 0x0000001cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_089b3a48 */
}

/* func_089b6d3c  0x089b6d3c..0x089b6eb8  380 bytes, source=sweep */
void func_089b6d3c(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089b6d3cu);
    c->r[29] = c->r[29] + 0xffffffd0u;
    mem_w32(ram, c->r[29] + 0x00000020u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[6]);
    mem_wf32(ram, c->r[30] + 0x0000000cu, c->f[12]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000000u);
    c->f[0] = mem_rf32(ram, c->r[3] + 0x00000000u);
    c->f[1] = c->f[1] * c->f[0];
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->f[2] = mem_rf32(ram, c->r[2] + 0x00000004u);
    c->f[0] = mem_rf32(ram, c->r[3] + 0x00000004u);
    c->f[0] = c->f[2] * c->f[0];
    c->f[1] = c->f[1] + c->f[0];
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->f[2] = mem_rf32(ram, c->r[2] + 0x00000008u);
    c->f[0] = mem_rf32(ram, c->r[3] + 0x00000008u);
    c->f[0] = c->f[2] * c->f[0];
    c->f[1] = c->f[1] + c->f[0];
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->f[2] = mem_rf32(ram, c->r[2] + 0x0000000cu);
    c->f[0] = mem_rf32(ram, c->r[3] + 0x0000000cu);
    c->f[0] = c->f[2] * c->f[0];
    c->f[1] = c->f[1] + c->f[0];
    c->f[0] = mem_rf32(ram, c->r[30] + 0x0000000cu);
    mem_wf32(ram, c->r[30] + 0x00000014u, c->f[0]);
    c->r[1] = 0x08a50000u;
    c->f[2] = mem_rf32(ram, c->r[1] + 0xffffb240u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x0000000cu);
    c->f[2] = c->f[2] - c->f[0];
    mem_wf32(ram, c->r[30] + 0x00000010u, c->f[2]);
    c->f[0] = u2f(0u);
    alx_c_cond_s(c, 12, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_089b6dec; }
    { goto L_089b6df8; }
L_089b6dec:
    c->f[2] = mem_rf32(ram, c->r[30] + 0x00000010u);
    c->f[2] = -c->f[2];
    mem_wf32(ram, c->r[30] + 0x00000010u, c->f[2]);
L_089b6df8:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000000u);
    c->f[2] = mem_rf32(ram, c->r[30] + 0x00000014u);
    c->f[1] = c->f[2] * c->f[0];
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000000u);
    c->f[2] = mem_rf32(ram, c->r[30] + 0x00000010u);
    c->f[0] = c->f[2] * c->f[0];
    c->f[0] = c->f[1] + c->f[0];
    mem_wf32(ram, c->r[3] + 0x00000000u, c->f[0]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000004u);
    c->f[2] = mem_rf32(ram, c->r[30] + 0x00000014u);
    c->f[1] = c->f[2] * c->f[0];
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000004u);
    c->f[2] = mem_rf32(ram, c->r[30] + 0x00000010u);
    c->f[0] = c->f[2] * c->f[0];
    c->f[0] = c->f[1] + c->f[0];
    mem_wf32(ram, c->r[3] + 0x00000004u, c->f[0]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000008u);
    c->f[2] = mem_rf32(ram, c->r[30] + 0x00000014u);
    c->f[1] = c->f[2] * c->f[0];
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000008u);
    c->f[2] = mem_rf32(ram, c->r[30] + 0x00000010u);
    c->f[0] = c->f[2] * c->f[0];
    c->f[0] = c->f[1] + c->f[0];
    mem_wf32(ram, c->r[3] + 0x00000008u, c->f[0]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x0000000cu);
    c->f[2] = mem_rf32(ram, c->r[30] + 0x00000014u);
    c->f[1] = c->f[2] * c->f[0];
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x0000000cu);
    c->f[2] = mem_rf32(ram, c->r[30] + 0x00000010u);
    c->f[0] = c->f[2] * c->f[0];
    c->f[0] = c->f[1] + c->f[0];
    mem_wf32(ram, c->r[3] + 0x0000000cu, c->f[0]);
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000020u);
    { c->r[29] = c->r[29] + 0x00000030u; return; }
    return; /* fell out of func_089b6d3c */
}

/* func_089b8478  0x089b8478..0x089b84a8  48 bytes, source=residue */
void func_089b8478(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089b8478u);
    c->r[29] = c->r[29] + 0xffffffd0u;
    mem_w32(ram, c->r[29] + 0x00000020u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    mem_wf32(ram, c->r[30] + 0x00000008u, c->f[12]);
    mem_wf32(ram, c->r[30] + 0x0000000cu, c->f[13]);
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[6]);
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000020u);
    { c->r[29] = c->r[29] + 0x00000030u; return; }
    return; /* fell out of func_089b8478 */
}

/* func_089b9c5c  0x089b9c5c..0x089b9d80  292 bytes, source=fde */
void func_089b9c5c(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089b9c5cu);
    c->r[29] = c->r[29] + 0xffffffb0u;
    mem_w32(ram, c->r[29] + 0x00000048u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000044u, c->r[30]);
    mem_w32(ram, c->r[29] + 0x00000040u, c->r[16]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[6]);
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[7]);
    c->r[2] = c->r[30] + 0x00000020u;
    { c->r[31] = 0x089b9c8cu; c->r[4] = c->r[2] + 0u; func_089c6330(c, ram); }
    c->r[4] = 0x08a70000u;
    c->r[4] = c->r[4] + 0xffffb640u;
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[6] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[7] = mem_r32(ram, c->r[30] + 0x0000000cu);
    { c->r[31] = 0x089b9ca8u; c->r[8] = mem_r32(ram, c->r[30] + 0x00000000u); func_089c6b1c(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_089b9d64; }
    { c->r[31] = 0x089b9cc0u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u); func_089c3458(c, ram); }
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000008cu);
    { int _c = (c->r[2] == 0u); mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]); if (_c) goto L_089b9d64; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    mem_w32(ram, c->r[30] + 0x00000034u, c->r[2]);
    { c->r[31] = 0x089b9cdcu; c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u); func_089c3458(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = mem_r32(ram, c->r[3] + 0x00000020u);
    mem_w32(ram, c->r[30] + 0x00000020u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[3] + 0x00000024u);
    mem_w32(ram, c->r[30] + 0x00000024u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[3] + 0x00000028u);
    mem_w32(ram, c->r[30] + 0x00000028u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[3] + 0x0000002cu);
    mem_w32(ram, c->r[30] + 0x0000002cu, c->r[2]);
    { c->r[31] = 0x089b9d08u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u); func_089c3458(c, ram); }
    c->r[16] = c->r[2] + 0u;
    { c->r[31] = 0x089b9d14u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u); func_089c3458(c, ram); }
    c->f[1] = mem_rf32(ram, c->r[16] + 0x00000074u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000070u);
    c->f[0] = c->f[1] - c->f[0];
    mem_wf32(ram, c->r[30] + 0x00000014u, c->f[0]);
    c->f[12] = mem_rf32(ram, c->r[30] + 0x00000020u);
    { c->r[31] = 0x089b9d30u; c->f[13] = mem_rf32(ram, c->r[30] + 0x00000028u); func_08a0fc44(c, ram); }
    mem_wf32(ram, c->r[30] + 0x00000030u, c->f[0]);
    c->r[2] = c->r[30] + 0x00000020u;
    c->r[3] = c->r[30] + 0x00000020u;
    c->r[4] = c->r[2] + 0u;
    c->r[5] = c->r[3] + 0u;
    { c->r[31] = 0x089b9d4cu; c->f[12] = mem_rf32(ram, c->r[30] + 0x00000014u); func_0884c224(c, ram); }
    c->r[2] = c->r[30] + 0x00000020u;
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[6] = 0u + 0x0000001cu;
    { c->r[31] = 0x089b9d64u; c->r[7] = c->r[2] + 0u; func_089c34ac(c, ram); }
L_089b9d64:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000048u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000044u);
    c->r[16] = mem_r32(ram, c->r[29] + 0x00000040u);
    { c->r[29] = c->r[29] + 0x00000050u; return; }
    return; /* fell out of func_089b9c5c */
}

/* func_089c3c84  0x089c3c84..0x089c4010  908 bytes, source=fde */
void func_089c3c84(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089c3c84u);
    c->r[29] = c->r[29] + 0xffffff90u;
    mem_w32(ram, c->r[29] + 0x00000064u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000060u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[6]);
    c->r[2] = c->r[30] + 0x00000010u;
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0u + 0u;
    { c->r[31] = 0x089c3cb4u; c->r[6] = 0u + 0x00000010u; func_08a19ec4(c, ram); }
    c->r[2] = c->r[30] + 0x00000020u;
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0u + 0u;
    { c->r[31] = 0x089c3cc8u; c->r[6] = 0u + 0x00000008u; func_08a19ec4(c, ram); }
    c->r[2] = c->r[30] + 0x00000020u;
    c->r[4] = c->r[2] + 0u;
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x089c3cdcu; c->r[6] = 0u + 0x00000003u; func_08a19db8(c, ram); }
    c->r[2] = c->r[30] + 0x00000020u;
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0x08a50000u;
    { c->r[31] = 0x089c3cf0u; c->r[5] = c->r[5] + 0xffffb308u; func_08a1b1a4(c, ram); }
    { int _c = (c->r[2] == 0u); if (_c) goto L_089c3d0c; }
    c->r[2] = c->r[30] + 0x00000010u;
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0x08a50000u;
    { c->r[31] = 0x089c3d0cu; c->r[5] = c->r[5] + 0xffffb308u; func_08a1af70(c, ram); }
L_089c3d0c:
    c->r[2] = c->r[30] + 0x00000020u;
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0x08a50000u;
    { c->r[31] = 0x089c3d20u; c->r[5] = c->r[5] + 0xffffb30cu; func_08a1b1a4(c, ram); }
    { int _c = (c->r[2] == 0u); if (_c) goto L_089c3d3c; }
    c->r[2] = c->r[30] + 0x00000010u;
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0x08a50000u;
    { c->r[31] = 0x089c3d3cu; c->r[5] = c->r[5] + 0xffffb30cu; func_08a1af70(c, ram); }
L_089c3d3c:
    c->r[2] = c->r[30] + 0x00000020u;
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0x08a50000u;
    { c->r[31] = 0x089c3d50u; c->r[5] = c->r[5] + 0xffffb310u; func_08a1b1a4(c, ram); }
    { int _c = (c->r[2] == 0u); if (_c) goto L_089c3d6c; }
    c->r[2] = c->r[30] + 0x00000010u;
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0x08a50000u;
    { c->r[31] = 0x089c3d6cu; c->r[5] = c->r[5] + 0xffffb310u; func_08a1af70(c, ram); }
L_089c3d6c:
    c->r[2] = c->r[30] + 0x00000020u;
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0x08a50000u;
    { c->r[31] = 0x089c3d80u; c->r[5] = c->r[5] + 0xffffb314u; func_08a1b1a4(c, ram); }
    { int _c = (c->r[2] == 0u); if (_c) goto L_089c3d9c; }
    c->r[2] = c->r[30] + 0x00000010u;
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0x08a50000u;
    { c->r[31] = 0x089c3d9cu; c->r[5] = c->r[5] + 0xffffb314u; func_08a1af70(c, ram); }
L_089c3d9c:
    c->r[2] = c->r[30] + 0x00000020u;
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0x08a50000u;
    { c->r[31] = 0x089c3db0u; c->r[5] = c->r[5] + 0xffffb318u; func_08a1b1a4(c, ram); }
    { int _c = (c->r[2] == 0u); if (_c) goto L_089c3dcc; }
    c->r[2] = c->r[30] + 0x00000010u;
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0x08a50000u;
    { c->r[31] = 0x089c3dccu; c->r[5] = c->r[5] + 0xffffb318u; func_08a1af70(c, ram); }
L_089c3dcc:
    c->r[2] = c->r[30] + 0x00000020u;
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0x08a50000u;
    { c->r[31] = 0x089c3de0u; c->r[5] = c->r[5] + 0xffffb31cu; func_08a1b1a4(c, ram); }
    { int _c = (c->r[2] == 0u); if (_c) goto L_089c3dfc; }
    c->r[2] = c->r[30] + 0x00000010u;
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0x08a50000u;
    { c->r[31] = 0x089c3dfcu; c->r[5] = c->r[5] + 0xffffb320u; func_08a1af70(c, ram); }
L_089c3dfc:
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[30] + 0x00000010u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_089c3e10; }
    { goto L_089c3ffc; }
L_089c3e10:
    c->r[4] = 0x08a60000u;
    c->r[4] = c->r[4] + 0x00005260u;
    { c->r[31] = 0x089c3e20u; c->r[5] = mem_r32(ram, c->r[30] + 0x00000004u); func_089d7018(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000038u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    mem_w32(ram, c->r[30] + 0x00000030u, c->r[2]);
L_089c3e2c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000030u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = ((s32)c->r[2] < (s32)c->r[3]) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_089c3e48; }
    { goto L_089c3ffc; }
L_089c3e48:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000038u);
    mem_w32(ram, c->r[30] + 0x0000003cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000003cu);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000000u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_089c3fe0; }
    c->r[2] = c->r[30] + 0x00000010u;
    c->r[4] = mem_r32(ram, c->r[30] + 0x0000003cu);
    { c->r[31] = 0x089c3e70u; c->r[5] = c->r[2] + 0u; func_08a1b1a4(c, ram); }
    { int _c = (c->r[2] == 0u); if (_c) goto L_089c3fe0; }
    c->r[2] = c->r[30] + 0x00000040u;
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x089c3e88u; c->r[5] = mem_r32(ram, c->r[30] + 0x0000003cu); func_08a1af70(c, ram); }
    c->r[2] = mem_r8(ram, c->r[30] + 0x00000045u);
    c->r[2] = c->r[2] + 0x00000001u;
    mem_w8(ram, c->r[30] + 0x00000045u, c->r[2]);
    c->r[4] = 0x08a60000u;
    c->r[4] = c->r[4] + 0x00005260u;
    { c->r[31] = 0x089c3ea4u; c->r[5] = mem_r32(ram, c->r[30] + 0x00000004u); func_089d7018(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000050u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    mem_w32(ram, c->r[30] + 0x00000034u, c->r[2]);
L_089c3eb0:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000034u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = ((s32)c->r[2] < (s32)c->r[3]) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_089c3ecc; }
    { goto L_089c3f08; }
L_089c3ecc:
    c->r[2] = c->r[30] + 0x00000040u;
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000050u);
    { c->r[31] = 0x089c3edcu; c->r[5] = c->r[2] + 0u; func_08a1adb4(c, ram); }
    { int _c = (c->r[2] != 0u); if (_c) goto L_089c3eec; }
    { goto L_089c3f08; }
L_089c3eec:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000034u);
    c->r[2] = c->r[2] + 0x00000001u;
    mem_w32(ram, c->r[30] + 0x00000034u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000050u);
    c->r[2] = c->r[2] + 0x00000018u;
    { mem_w32(ram, c->r[30] + 0x00000050u, c->r[2]); goto L_089c3eb0; }
L_089c3f08:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000034u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_089c3fe0; }
    c->r[4] = mem_r32(ram, c->r[30] + 0x0000003cu);
    c->r[5] = 0x08a50000u;
    { c->r[31] = 0x089c3f28u; c->r[5] = c->r[5] + 0xffffb324u; func_08a1b1a4(c, ram); }
    { int _c = (c->r[2] == 0u); if (_c) goto L_089c3f84; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000038u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x00000010u);
    c->r[2] = 0u + 0x0000006cu;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[3] = c->lo;
    c->r[2] = 0x08a70000u;
    c->r[2] = c->r[2] + 0xffffb688u;
    c->r[2] = c->r[3] + c->r[2];
    mem_w32(ram, c->r[30] + 0x00000054u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000050u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x00000010u);
    c->r[2] = 0u + 0x0000006cu;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[3] = c->lo;
    c->r[2] = 0x08a70000u;
    c->r[2] = c->r[2] + 0xffffb688u;
    c->r[2] = c->r[3] + c->r[2];
    mem_w32(ram, c->r[30] + 0x00000058u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000054u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000058u);
    mem_w32(ram, c->r[3] + 0x00000068u, c->r[2]);
L_089c3f84:
    c->r[4] = mem_r32(ram, c->r[30] + 0x0000003cu);
    c->r[5] = 0x08a50000u;
    { c->r[31] = 0x089c3f94u; c->r[5] = c->r[5] + 0xffffb32cu; func_08a1b1a4(c, ram); }
    { int _c = (c->r[2] == 0u); if (_c) goto L_089c3fe0; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000038u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000010u);
    c->r[3] = c->r[2] << 3;
    c->r[2] = 0x08a80000u;
    c->r[2] = c->r[2] + 0xffff8e88u;
    c->r[2] = c->r[3] + c->r[2];
    mem_w32(ram, c->r[30] + 0x00000058u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000050u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000010u);
    c->r[3] = c->r[2] << 3;
    c->r[2] = 0x08a80000u;
    c->r[2] = c->r[2] + 0xffff8e88u;
    c->r[2] = c->r[3] + c->r[2];
    mem_w32(ram, c->r[30] + 0x00000054u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000058u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000054u);
    mem_w32(ram, c->r[3] + 0x00000004u, c->r[2]);
L_089c3fe0:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000030u);
    c->r[2] = c->r[2] + 0x00000001u;
    mem_w32(ram, c->r[30] + 0x00000030u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000038u);
    c->r[2] = c->r[2] + 0x00000018u;
    { mem_w32(ram, c->r[30] + 0x00000038u, c->r[2]); goto L_089c3e2c; }
L_089c3ffc:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000064u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000060u);
    { c->r[29] = c->r[29] + 0x00000070u; return; }
    return; /* fell out of func_089c3c84 */
}

/* func_089c76d4  0x089c76d4..0x089c77b8  228 bytes, source=fde */
void func_089c76d4(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089c76d4u);
    c->r[29] = c->r[29] + 0xffffffc0u;
    mem_w32(ram, c->r[29] + 0x00000038u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000034u, c->r[30]);
    mem_w32(ram, c->r[29] + 0x00000030u, c->r[16]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[2] = c->r[30] + 0x00000010u;
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0u + 0u;
    { c->r[31] = 0x089c7700u; func_089c8bcc(c, ram); }
    c->r[4] = 0x08a60000u;
    c->r[4] = c->r[4] + 0x00005260u;
    c->r[5] = 0u + 0x00000004u;
    { c->r[31] = 0x089c7714u; func_089d7650(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000020u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_089c773c; }
    c->r[2] = c->r[30] + 0x00000010u;
    { c->r[31] = 0x089c7730u; c->r[4] = c->r[2] + 0u; func_089c8c04(c, ram); }
    c->r[2] = 0u + 0xffffffffu;
    { mem_w32(ram, c->r[30] + 0x00000024u, c->r[2]); goto L_089c779c; }
L_089c773c:
    c->r[2] = c->r[30] + 0x00000010u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x089c7750u; c->r[5] = mem_r32(ram, c->r[3] + 0x00000010u); func_089c8b88(c, ram); }
    c->r[2] = c->r[30] + 0x00000010u;
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x089c7760u; c->r[5] = mem_r32(ram, c->r[30] + 0x00000000u); func_089c8cdc(c, ram); }
    c->r[16] = c->r[2] + 0u;
    c->r[2] = c->r[30] + 0x00000010u;
    { c->r[31] = 0x089c7770u; c->r[4] = c->r[2] + 0u; func_089c8c04(c, ram); }
    { mem_w32(ram, c->r[30] + 0x00000024u, c->r[16]); goto L_089c779c; }
    mem_w32(ram, c->r[30] + 0x00000028u, c->r[4]);
    c->r[16] = mem_r32(ram, c->r[30] + 0x00000028u);
    c->r[2] = c->r[30] + 0x00000010u;
    { c->r[31] = 0x089c778cu; c->r[4] = c->r[2] + 0u; func_089c8c04(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000028u, c->r[16]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000028u);
    { c->r[31] = 0x089c779cu; func_08a163b0(c, ram); }
L_089c779c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000024u);
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000038u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000034u);
    c->r[16] = mem_r32(ram, c->r[29] + 0x00000030u);
    { c->r[29] = c->r[29] + 0x00000040u; return; }
    return; /* fell out of func_089c76d4 */
}

/* func_089c9d8c  0x089c9d8c..0x089ca0e0  852 bytes, source=sweep */
void func_089c9d8c(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089c9d8cu);
    c->r[29] = c->r[29] + 0xffffffd0u;
    mem_w32(ram, c->r[29] + 0x00000024u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000020u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    mem_w16(ram, c->r[30] + 0x00000008u, 0u);
    mem_w8(ram, c->r[30] + 0x0000000au, 0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    { int _c = ((s32)c->r[2] < 0); if (_c) goto L_089c9df4; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000028u) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_089c9df4; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = mem_r32(ram, c->r[30] + 0x0000000cu);
    { c->r[31] = 0x089c9de0u; c->r[6] = 0u + 0x00000003u; func_08820e5c(c, ram); }
    { int _c = (c->r[2] == 0u); if (_c) goto L_089c9df4; }
    c->r[2] = 0u + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x0000001cu, c->r[2]); goto L_089ca0c8; }
L_089c9df4:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000028u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_089c9e44; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000050u) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_089c9e44; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[2] + 0xffffffd8u;
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = mem_r32(ram, c->r[30] + 0x0000000cu);
    { c->r[31] = 0x089c9e30u; c->r[6] = 0u + 0x00000010u; func_08820e5c(c, ram); }
    { int _c = (c->r[2] == 0u); if (_c) goto L_089c9e44; }
    c->r[2] = 0u + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x0000001cu, c->r[2]); goto L_089ca0c8; }
L_089c9e44:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000050u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_089c9e94; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000078u) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_089c9e94; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[2] + 0xffffffb0u;
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = mem_r32(ram, c->r[30] + 0x0000000cu);
    { c->r[31] = 0x089c9e80u; c->r[6] = 0u + 0x00000020u; func_08820e5c(c, ram); }
    { int _c = (c->r[2] == 0u); if (_c) goto L_089c9e94; }
    c->r[2] = 0u + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x0000001cu, c->r[2]); goto L_089ca0c8; }
L_089c9e94:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000078u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_089c9ee4; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = ((s32)c->r[2] < (s32)0x000000a0u) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_089c9ee4; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[2] + 0xffffff88u;
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = mem_r32(ram, c->r[30] + 0x0000000cu);
    { c->r[31] = 0x089c9ed0u; c->r[6] = 0u + 0x00000040u; func_08820e5c(c, ram); }
    { int _c = (c->r[2] == 0u); if (_c) goto L_089c9ee4; }
    c->r[2] = 0u + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x0000001cu, c->r[2]); goto L_089ca0c8; }
L_089c9ee4:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = ((s32)c->r[2] < (s32)0x000000a0u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_089c9f44; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = ((s32)c->r[2] < (s32)0x000000dcu) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_089c9f44; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[2] + 0xffffff60u;
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = c->r[2] + 0x000003c0u;
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000005u);
    mem_w8(ram, c->r[30] + 0x0000000au, c->r[2]);
    c->r[2] = mem_r8(ram, c->r[30] + 0x0000000au);
    c->r[2] = c->r[2] & 0x0003u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_089c9f44; }
    c->r[2] = 0u + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x0000001cu, c->r[2]); goto L_089ca0c8; }
L_089c9f44:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = ((s32)c->r[2] < (s32)0x000000dcu) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_089c9fa4; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = ((s32)c->r[2] < (s32)0x000000eeu) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_089c9fa4; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[2] + 0xffffff24u;
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x000017c8u);
    mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]);
    c->r[3] = 0u + 0x00000001u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[3] = c->r[3] << (c->r[2] & 31u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = c->r[3] & c->r[2];
    { int _c = (c->r[2] == 0u); if (_c) goto L_089c9fa4; }
    c->r[2] = 0u + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x0000001cu, c->r[2]); goto L_089ca0c8; }
L_089c9fa4:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = ((s32)c->r[2] < (s32)0x000000eeu) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_089ca004; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000100u) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_089ca004; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[2] + 0xffffff12u;
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00001b68u);
    mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]);
    c->r[3] = 0u + 0x00000001u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[3] = c->r[3] << (c->r[2] & 31u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = c->r[3] & c->r[2];
    { int _c = (c->r[2] == 0u); if (_c) goto L_089ca004; }
    c->r[2] = 0u + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x0000001cu, c->r[2]); goto L_089ca0c8; }
L_089ca004:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = 0u + 0x00000100u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_089ca030; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000034cu);
    { int _c = ((s32)c->r[2] >= 0); if (_c) goto L_089ca030; }
    c->r[2] = 0u + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x0000001cu, c->r[2]); goto L_089ca0c8; }
L_089ca030:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = 0u + 0x00000101u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_089ca064; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x0000034cu);
    c->r[2] = 0x40000000u;
    c->r[2] = c->r[3] & c->r[2];
    { int _c = (c->r[2] == 0u); if (_c) goto L_089ca064; }
    c->r[2] = 0u + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x0000001cu, c->r[2]); goto L_089ca0c8; }
L_089ca064:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = 0u + 0x00000102u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_089ca094; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000350u);
    c->r[2] = c->r[2] & 0x0002u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_089ca094; }
    c->r[2] = 0u + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x0000001cu, c->r[2]); goto L_089ca0c8; }
L_089ca094:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = 0u + 0x00000103u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_089ca0c4; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000350u);
    c->r[2] = c->r[2] & 0x0004u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_089ca0c4; }
    c->r[2] = 0u + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x0000001cu, c->r[2]); goto L_089ca0c8; }
L_089ca0c4:
    mem_w32(ram, c->r[30] + 0x0000001cu, 0u);
L_089ca0c8:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000024u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000020u);
    { c->r[29] = c->r[29] + 0x00000030u; return; }
    return; /* fell out of func_089c9d8c */
}

/* func_089cb95c  0x089cb95c..0x089cb9e8  140 bytes, source=fde */
void func_089cb95c(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089cb95cu);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[2] = c->r[5] + 0u;
    mem_w16(ram, c->r[30] + 0x00000004u, c->r[2]);
    { c->r[31] = 0x089cb980u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u); func_089cb8ac(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]);
L_089cb984:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_089cb998; }
    { goto L_089cb9cc; }
L_089cb998:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[3] = mem_r16(ram, c->r[2] + 0x0000001au);
    c->r[2] = mem_r16(ram, c->r[30] + 0x00000004u);
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_089cb9b8; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    { mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]); goto L_089cb9d0; }
L_089cb9b8:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x089cb9c4u; c->r[5] = mem_r32(ram, c->r[30] + 0x00000008u); func_089cb8e8(c, ram); }
    { mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]); goto L_089cb984; }
L_089cb9cc:
    mem_w32(ram, c->r[30] + 0x0000000cu, 0u);
L_089cb9d0:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_089cb95c */
}

/* func_089d12c0  0x089d12c0..0x089d138c  204 bytes, source=fde */
void func_089d12c0(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089d12c0u);
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
    c->r[5] = 0u + 0x00000004u;
    c->r[6] = 0u + 0u;
    c->r[7] = 0u + 0u;
    { c->r[31] = 0x089d1328u; c->r[8] = 0u + 0x00000001u; func_089d240c(c, ram); }
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000700u);
    c->r[2] = 0u + 0x000002e8u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[4] = c->lo;
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
    { c->r[31] = 0x089d1378u; c->r[6] = c->r[6] + 0xffffad70u; func_089d2354(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_089d12c0 */
}

/* func_089d2dcc  0x089d2dcc..0x089d2e10  68 bytes, source=sweep */
void func_089d2dcc(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089d2dccu);
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
    { c->r[31] = 0x089d2dfcu; c->r[5] = c->r[2] + 0u; func_089d20f0(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_089d2dcc */
}

/* func_089d3d74  0x089d3d74..0x089d3f90  540 bytes, source=fde */
void func_089d3d74(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089d3d74u);
    c->r[29] = c->r[29] + 0xffffffd0u;
    mem_w32(ram, c->r[29] + 0x00000024u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000020u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[6]);
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[7]);
    c->r[2] = 0u + 0xffffffffu;
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]);
    mem_w32(ram, c->r[30] + 0x00000014u, 0u);
L_089d3da0:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000008u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_089d3db8; }
    { goto L_089d3ec0; }
L_089d3db8:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[2] = c->r[2] << 6;
    c->r[2] = c->r[2] + c->r[4];
    c->r[2] = c->r[2] + 0x00000020u;
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000008u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_089d3df0; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    { mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]); goto L_089d3eb0; }
L_089d3df0:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 6;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = c->r[2] + 0x00000020u;
    c->r[4] = c->r[2] + 0u;
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000004u);
    { c->r[31] = 0x089d3e20u; c->r[6] = 0u + 0x00000006u; func_08a19d34(c, ram); }
    { int _c = (c->r[2] != 0u); if (_c) goto L_089d3eb0; }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[2] = c->r[2] << 6;
    c->r[2] = c->r[2] + c->r[4];
    c->r[2] = c->r[2] + 0x00000020u;
    mem_w16(ram, c->r[2] + 0x00000006u, 0u);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[2] = c->r[2] << 6;
    c->r[2] = c->r[2] + c->r[4];
    c->r[3] = c->r[2] + 0x00000020u;
    c->r[2] = 0u + 0x00000001u;
    mem_w8(ram, c->r[3] + 0x00000008u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 6;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = c->r[2] + 0x00000029u;
    c->r[4] = c->r[2] + 0u;
    c->r[5] = mem_r32(ram, c->r[30] + 0x0000000cu);
    { c->r[31] = 0x089d3ea4u; c->r[6] = mem_r32(ram, c->r[30] + 0x00000008u); func_08a19db8(c, ram); }
    c->r[2] = 0u + 0xffffffffu;
    { mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]); goto L_089d3ec0; }
L_089d3eb0:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]); goto L_089d3da0; }
L_089d3ec0:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = 0u + 0xffffffffu;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_089d3f7c; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 6;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = c->r[2] + 0x00000020u;
    c->r[4] = c->r[2] + 0u;
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000004u);
    { c->r[31] = 0x089d3f00u; c->r[6] = 0u + 0x00000006u; func_08a19db8(c, ram); }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[2] = c->r[2] << 6;
    c->r[2] = c->r[2] + c->r[4];
    c->r[2] = c->r[2] + 0x00000020u;
    mem_w16(ram, c->r[2] + 0x00000006u, 0u);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[2] = c->r[2] << 6;
    c->r[2] = c->r[2] + c->r[4];
    c->r[3] = c->r[2] + 0x00000020u;
    c->r[2] = 0u + 0x00000001u;
    mem_w8(ram, c->r[3] + 0x00000008u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 6;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = c->r[2] + 0x00000029u;
    c->r[4] = c->r[2] + 0u;
    c->r[5] = mem_r32(ram, c->r[30] + 0x0000000cu);
    { c->r[31] = 0x089d3f7cu; c->r[6] = mem_r32(ram, c->r[30] + 0x00000008u); func_08a19db8(c, ram); }
L_089d3f7c:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000024u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000020u);
    { c->r[29] = c->r[29] + 0x00000030u; return; }
    return; /* fell out of func_089d3d74 */
}

/* func_089d5824  0x089d5824..0x089d587c  88 bytes, source=fde */
void func_089d5824(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089d5824u);
    c->r[29] = c->r[29] + 0xffffffd0u;
    mem_w32(ram, c->r[29] + 0x00000024u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000020u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[6]);
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[7]);
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[8]);
    { c->r[31] = 0x089d5850u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u); func_089d5640(c, ram); }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[6] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[7] = mem_r32(ram, c->r[30] + 0x0000000cu);
    { c->r[31] = 0x089d5868u; c->r[8] = mem_r32(ram, c->r[30] + 0x00000010u); func_08975a68(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000024u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000020u);
    { c->r[29] = c->r[29] + 0x00000030u; return; }
    return; /* fell out of func_089d5824 */
}

/* func_089d705c  0x089d705c..0x089d70c4  104 bytes, source=fde */
void func_089d705c(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089d705cu);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x089d7080u; c->r[5] = mem_r32(ram, c->r[30] + 0x00000004u); func_089d6d78(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000000u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_089d70a8; }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x089d70a0u; c->r[5] = mem_r32(ram, c->r[30] + 0x00000008u); func_089d7018(c, ram); }
    { mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]); goto L_089d70ac; }
L_089d70a8:
    mem_w32(ram, c->r[30] + 0x0000000cu, 0u);
L_089d70ac:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_089d705c */
}

/* func_089d88f8  0x089d88f8..0x089d8930  56 bytes, source=sweep */
void func_089d88f8(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089d88f8u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = 0u + 0xffffffffu;
    mem_w32(ram, c->r[3] + 0x000002e4u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = 0u + 0xffffffffu;
    mem_w8(ram, c->r[3] + 0x000002e8u, c->r[2]);
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_089d88f8 */
}

/* func_089d9a3c  0x089d9a3c..0x089d9b40  260 bytes, source=fde */
void func_089d9a3c(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089d9a3cu);
    c->r[29] = c->r[29] + 0xffffffd0u;
    mem_w32(ram, c->r[29] + 0x00000024u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000020u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[2] = 0u + 0xffffffffu;
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[2]);
    c->r[2] = 0u + 0u;
    c->r[3] = 0u + 0u;
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]);
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[3]);
    mem_w32(ram, c->r[30] + 0x00000010u, 0u);
L_089d9a6c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000654u);
    c->r[2] = (c->r[3] < c->r[2]) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_089d9a8c; }
    { goto L_089d9b28; }
L_089d9a8c:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 3;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 3;
    c->r[2] = mem_r32(ram, c->r[4] + 0x0000065cu);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = c->r[2] + 0x00000024u;
    c->r[3] = c->r[30] + 0x00000018u;
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x089d9ac0u; c->r[5] = c->r[3] + 0u; hle_dispatch_stub(c, ram, 0x08a24c64u); /* sceRtcGetWin32FileTime */ }
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = (c->r[2] < c->r[3]) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_089d9b00; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_089d9b18; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = (c->r[3] < c->r[2]) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_089d9b00; }
    { goto L_089d9b18; }
L_089d9b00:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000001cu);
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]);
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[3]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[2]);
L_089d9b18:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]); goto L_089d9a6c; }
L_089d9b28:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000024u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000020u);
    { c->r[29] = c->r[29] + 0x00000030u; return; }
    return; /* fell out of func_089d9a3c */
}

/* func_089db028  0x089db028..0x089db070  72 bytes, source=sweep */
void func_089db028(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089db028u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000014u);
    c->r[3] = c->r[2] << 2;
    c->r[2] = mem_r32(ram, c->r[4] + 0x00000010u);
    c->r[3] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    mem_w32(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[2] = 0u + 0u;
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_089db028 */
}

/* func_089dc198  0x089dc198..0x089dc1dc  68 bytes, source=sweep */
void func_089dc198(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089dc198u);
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
    { c->r[31] = 0x089dc1c8u; c->r[5] = c->r[2] + 0u; func_089db8b8(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_089dc198 */
}

/* func_089de0e4  0x089de0e4..0x089de150  108 bytes, source=fde */
void func_089de0e4(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089de0e4u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[1] = 0x08b90000u;
    mem_w32(ram, c->r[1] + 0x000006d4u, 0u);
    c->r[1] = 0x08b90000u;
    mem_w32(ram, c->r[1] + 0x000006d8u, 0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[4] = mem_r32(ram, c->r[2] + 0x00000004u);
    { c->r[31] = 0x089de118u; c->r[5] = 0u + 0u; hle_dispatch_stub(c, ram, 0x08a2488cu); /* sceKernelClearEventFlag */ }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    mem_w32(ram, c->r[2] + 0x00000010u, 0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    mem_w32(ram, c->r[2] + 0x00000014u, 0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    mem_w32(ram, c->r[2] + 0x00000018u, 0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    mem_w32(ram, c->r[2] + 0x00000024u, 0u);
    c->r[2] = 0u + 0u;
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_089de0e4 */
}

/* func_089e0b2c  0x089e0b2c..0x089e0b84  88 bytes, source=fde */
void func_089e0b2c(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089e0b2cu);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[6]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = 0u + 0x0000006cu;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[3] = c->lo;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = c->r[2] + 0x00000048u;
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x089e0b70u; c->r[5] = mem_r32(ram, c->r[30] + 0x00000008u); func_089f491c(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_089e0b2c */
}

/* func_089e2048  0x089e2048..0x089e2090  72 bytes, source=sweep */
void func_089e2048(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089e2048u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[6]);
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[7]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[6] = mem_r32(ram, c->r[30] + 0x00000008u);
    { c->r[31] = 0x089e207cu; c->r[7] = mem_r32(ram, c->r[30] + 0x0000000cu); func_089e3be0(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_089e2048 */
}

/* func_089e334c  0x089e334c..0x089e33b8  108 bytes, source=sweep */
void func_089e334c(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089e334cu);
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
    c->r[2] = 0x5c000000u;
    c->r[2] = c->r[3] | c->r[2];
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x089e3388u; c->r[5] = c->r[2] + 0u; func_089e1908(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = c->r[2] >> 24;
    c->r[2] = 0x5d000000u;
    c->r[2] = c->r[3] | c->r[2];
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x089e33a4u; c->r[5] = c->r[2] + 0u; func_089e1908(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_089e334c */
}

/* func_089e4564  0x089e4564..0x089e45ec  136 bytes, source=sweep */
void func_089e4564(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089e4564u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[6]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[2] & 0x0001u;
    c->r[2] = c->r[2] & 0x00ffu;
    { int _c = (c->r[2] == 0u); if (_c) goto L_089e45a0; }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x089e45a0u; c->r[5] = mem_r32(ram, c->r[30] + 0x00000008u); func_089e33b8(c, ram); }
L_089e45a0:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[2] & 0x0002u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_089e45bc; }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x089e45bcu; c->r[5] = mem_r32(ram, c->r[30] + 0x00000008u); func_089e4c78(c, ram); }
L_089e45bc:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[2] & 0x0004u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_089e45d8; }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x089e45d8u; c->r[5] = mem_r32(ram, c->r[30] + 0x00000008u); func_089e4cc8(c, ram); }
L_089e45d8:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_089e4564 */
}

/* func_089e6354  0x089e6354..0x089e64d8  388 bytes, source=sweep */
void func_089e6354(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089e6354u);
    c->r[29] = c->r[29] + 0xffffff60u;
    mem_w32(ram, c->r[29] + 0x00000094u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000090u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_wf32(ram, c->r[30] + 0x00000000u, c->f[12]);
    c->r[2] = c->r[30] + 0x00000010u;
    { c->r[31] = 0x089e6374u; c->r[4] = c->r[2] + 0u; func_08808260(c, ram); }
    c->r[2] = c->r[30] + 0x00000010u;
    c->r[1] = 0x08a50000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffffc300u);
    c->r[1] = 0x08a50000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0xffffc304u);
    c->r[4] = c->r[2] + 0u;
    c->f[12] = c->f[0];
    c->f[13] = c->f[1];
    c->f[14] = u2f(0u);
    { c->r[31] = 0x089e63a0u; func_0885a0b8(c, ram); }
    c->r[2] = c->r[30] + 0x00000050u;
    { c->r[31] = 0x089e63acu; c->r[4] = c->r[2] + 0u; func_08808260(c, ram); }
    c->r[2] = c->r[30] + 0x00000050u;
    c->r[1] = 0x08a50000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffffc308u);
    c->r[1] = 0x08a50000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0xffffc308u);
    c->r[1] = 0x08a50000u;
    c->f[2] = mem_rf32(ram, c->r[1] + 0xffffc30cu);
    c->r[4] = c->r[2] + 0u;
    c->f[12] = c->f[0];
    c->f[13] = c->f[1];
    { c->r[31] = 0x089e63dcu; c->f[14] = c->f[2]; func_0881a114(c, ram); }
    c->r[2] = c->r[30] + 0x00000010u;
    c->r[3] = c->r[30] + 0x00000010u;
    c->r[6] = c->r[30] + 0x00000050u;
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x089e63f4u; c->r[5] = c->r[3] + 0u; func_0884c6d4(c, ram); }
    c->r[1] = 0x08a50000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffffc310u);
    c->r[1] = 0x08a50000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0xffffc314u);
    c->f[12] = c->f[0];
    { c->r[31] = 0x089e6410u; c->f[13] = c->f[1]; func_0884bf84(c, ram); }
    mem_wf32(ram, c->r[30] + 0x00000040u, c->f[0]);
    c->r[1] = 0x08a50000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffffc310u);
    mem_wf32(ram, c->r[30] + 0x00000044u, c->f[0]);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000000u);
    c->r[1] = 0x08a50000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffffc318u);
    c->f[1] = c->f[1] * c->f[0];
    c->r[1] = 0x08a50000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffffc31cu);
    c->f[0] = c->f[0] - c->f[1];
    mem_wf32(ram, c->r[30] + 0x00000048u, c->f[0]);
    c->r[2] = c->r[30] + 0x00000010u;
    c->r[3] = c->r[30] + 0x00000010u;
    c->r[4] = c->r[2] + 0u;
    c->r[5] = c->r[3] + 0u;
    c->r[6] = 0x08b90000u;
    { c->r[31] = 0x089e645cu; c->r[6] = c->r[6] + 0x00006530u; func_0884c6d4(c, ram); }
    c->r[2] = c->r[30] + 0x00000010u;
    c->r[3] = c->r[30] + 0x00000010u;
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0u + 0u;
    { c->r[31] = 0x089e6474u; c->r[6] = c->r[3] + 0u; func_0884c668(c, ram); }
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000700u);
    c->r[2] = 0u + 0x000002e8u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[4] = c->lo;
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
    c->r[5] = 0u + 0x00000003u;
    { c->r[31] = 0x089e64c4u; c->r[6] = c->r[3] + 0u; func_089ea25c(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000094u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000090u);
    { c->r[29] = c->r[29] + 0x000000a0u; return; }
    return; /* fell out of func_089e6354 */
}

/* func_089ea6d0  0x089ea6d0..0x089ea714  68 bytes, source=sweep */
void func_089ea6d0(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089ea6d0u);
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
    { c->r[31] = 0x089ea700u; c->r[5] = c->r[2] + 0u; func_089ea03c(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_089ea6d0 */
}

/* func_089eb728  0x089eb728..0x089ebb10  1000 bytes, source=sweep */
void func_089eb728(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089eb728u);
    c->r[29] = c->r[29] + 0xffffffd0u;
    mem_w32(ram, c->r[29] + 0x00000024u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000020u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[6]);
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[7]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[2] = c->r[2] & 0x1800u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_089eb984; }
    mem_w32(ram, c->r[30] + 0x00000010u, 0u);
L_089eb760:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = mem_r16(ram, c->r[2] + 0x0000000eu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = ((s32)c->r[2] < (s32)c->r[3]) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_089eb780; }
    { goto L_089ebafc; }
L_089eb780:
    c->r[3] = c->r[30] + 0x00000008u;
    c->r[2] = mem_r32(ram, c->r[3] + 0x00000000u);
    c->r[4] = mem_r16(ram, c->r[2] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000002u;
    mem_w32(ram, c->r[3] + 0x00000000u, c->r[2]);
    mem_w16(ram, c->r[30] + 0x00000014u, c->r[4]);
    c->r[3] = c->r[30] + 0x00000008u;
    c->r[2] = mem_r32(ram, c->r[3] + 0x00000000u);
    c->r[4] = mem_r16(ram, c->r[2] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000002u;
    mem_w32(ram, c->r[3] + 0x00000000u, c->r[2]);
    mem_w16(ram, c->r[30] + 0x00000016u, c->r[4]);
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000700u);
    c->r[2] = 0u + 0x000002e8u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[4] = c->lo;
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
    { c->r[31] = 0x089eb80cu; c->r[5] = c->r[2] + 0u; func_089ea03c(c, ram); }
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000700u);
    c->r[2] = 0u + 0x000002e8u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[4] = c->lo;
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
    c->r[2] = 0x02000000u;
    c->r[2] = c->r[3] | c->r[2];
    { c->r[31] = 0x089eb868u; c->r[5] = c->r[2] + 0u; func_089ea03c(c, ram); }
    c->r[3] = mem_r16(ram, c->r[30] + 0x00000014u);
    c->r[2] = 0u + 0x00000003u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_089eb8dc; }
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000700u);
    c->r[2] = 0u + 0x000002e8u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[4] = c->lo;
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
    c->r[3] = mem_r16(ram, c->r[30] + 0x00000016u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = 0x04030000u;
    c->r[2] = c->r[2] | c->r[3];
    { c->r[31] = 0x089eb8d4u; c->r[5] = c->r[2] + 0u; func_089ea03c(c, ram); }
    { goto L_089eb8f4; }
L_089eb8dc:
    c->r[2] = mem_r16(ram, c->r[30] + 0x00000014u);
    c->r[3] = mem_r16(ram, c->r[30] + 0x00000016u);
    c->r[4] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x089eb8f4u; c->r[6] = c->r[3] + 0u; func_089eb45c(c, ram); }
L_089eb8f4:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[2] = c->r[2] & 0x0800u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_089eb954; }
    c->r[3] = mem_r16(ram, c->r[30] + 0x00000014u);
    c->r[2] = mem_r16(ram, c->r[30] + 0x00000016u);
    alx_mult(c, c->r[3], c->r[2]);
    c->r[2] = c->lo;
    mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = c->r[2] & 0x0001u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_089eb938; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = c->r[2] + 0x00000001u;
    mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]);
L_089eb938:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = (u32)((s32)c->r[2] >> 1);
    c->r[3] = c->r[2] << 1;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[2] + c->r[3];
    { mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]); goto L_089eb974; }
L_089eb954:
    c->r[3] = mem_r16(ram, c->r[30] + 0x00000014u);
    c->r[2] = mem_r16(ram, c->r[30] + 0x00000016u);
    alx_mult(c, c->r[3], c->r[2]);
    c->r[2] = c->lo;
    c->r[3] = c->r[2] << 1;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[2] + c->r[3];
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]);
L_089eb974:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]); goto L_089eb760; }
L_089eb984:
    mem_w32(ram, c->r[30] + 0x00000018u, 0u);
L_089eb988:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = mem_r16(ram, c->r[2] + 0x0000000eu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = ((s32)c->r[2] < (s32)c->r[3]) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_089eb9a8; }
    { goto L_089ebafc; }
L_089eb9a8:
    c->r[3] = c->r[30] + 0x00000008u;
    c->r[2] = mem_r32(ram, c->r[3] + 0x00000000u);
    c->r[4] = mem_r16(ram, c->r[2] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000002u;
    mem_w32(ram, c->r[3] + 0x00000000u, c->r[2]);
    mem_w16(ram, c->r[30] + 0x00000016u, c->r[4]);
    c->r[3] = c->r[30] + 0x00000008u;
    c->r[2] = mem_r32(ram, c->r[3] + 0x00000000u);
    c->r[4] = mem_r16(ram, c->r[2] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000002u;
    mem_w32(ram, c->r[3] + 0x00000000u, c->r[2]);
    mem_w16(ram, c->r[30] + 0x00000014u, c->r[4]);
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000700u);
    c->r[2] = 0u + 0x000002e8u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[4] = c->lo;
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
    { c->r[31] = 0x089eba34u; c->r[5] = c->r[2] + 0u; func_089ea03c(c, ram); }
    c->r[3] = mem_r16(ram, c->r[30] + 0x00000016u);
    c->r[2] = 0u + 0x00000003u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_089ebaa8; }
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000700u);
    c->r[2] = 0u + 0x000002e8u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[4] = c->lo;
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
    c->r[3] = mem_r16(ram, c->r[30] + 0x00000014u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = 0x04030000u;
    c->r[2] = c->r[2] | c->r[3];
    { c->r[31] = 0x089ebaa0u; c->r[5] = c->r[2] + 0u; func_089ea03c(c, ram); }
    { goto L_089ebac0; }
L_089ebaa8:
    c->r[2] = mem_r16(ram, c->r[30] + 0x00000016u);
    c->r[3] = mem_r16(ram, c->r[30] + 0x00000014u);
    c->r[4] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x089ebac0u; c->r[6] = c->r[3] + 0u; func_089eb45c(c, ram); }
L_089ebac0:
    c->r[3] = mem_r16(ram, c->r[30] + 0x00000014u);
    c->r[2] = mem_r16(ram, c->r[30] + 0x00000016u);
    alx_mult(c, c->r[3], c->r[2]);
    c->r[3] = c->lo;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r8(ram, c->r[2] + 0x0000001bu);
    alx_mult(c, c->r[3], c->r[2]);
    c->r[3] = c->lo;
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + c->r[3];
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]); goto L_089eb988; }
L_089ebafc:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000024u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000020u);
    { c->r[29] = c->r[29] + 0x00000030u; return; }
    return; /* fell out of func_089eb728 */
}

/* func_089f03f0  0x089f03f0..0x089f042c  60 bytes, source=sweep */
void func_089f03f0(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089f03f0u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000004u);
    { c->r[31] = 0x089f0418u; c->r[6] = 0u + 0u; func_089f0890(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_089f03f0 */
}

/* func_089f11bc  0x089f11bc..0x089f1210  84 bytes, source=sweep */
void func_089f11bc(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089f11bcu);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = 0u + 0x00000001u;
    c->r[1] = 0x00010000u;
    c->r[1] = c->r[1] + c->r[3];
    mem_w32(ram, c->r[1] + 0xffffe8c0u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[1] = 0x00010000u;
    c->r[1] = c->r[1] + c->r[2];
    mem_w32(ram, c->r[1] + 0xffffe8c4u, 0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[1] = 0x00010000u;
    c->r[1] = c->r[1] + c->r[2];
    mem_w32(ram, c->r[1] + 0xffffe8c8u, 0u);
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_089f11bc */
}

/* func_089f53f4  0x089f53f4..0x089f541c  40 bytes, source=residue */
void func_089f53f4(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089f53f4u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[6]);
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_089f53f4 */
}

/* func_089f6d90  0x089f6d90..0x089f6fc4  564 bytes, source=fde */
void func_089f6d90(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089f6d90u);
    c->r[29] = c->r[29] + 0xffffff80u;
    mem_w32(ram, c->r[29] + 0x00000074u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000070u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[6]);
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[7]);
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[8]);
    mem_wf32(ram, c->r[30] + 0x00000014u, c->f[12]);
    mem_w32(ram, c->r[30] + 0x00000018u, c->r[9]);
    mem_w32(ram, c->r[30] + 0x0000001cu, c->r[10]);
    c->r[2] = c->r[30] + 0x00000020u;
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000004u);
    { c->r[31] = 0x089f6dd4u; c->r[6] = c->r[2] + 0u; func_089f8254(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = 0u + 0xffffffffu;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_089f6fa4; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_089f6dfc; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_089f6e08; }
L_089f6dfc:
    c->r[2] = 0u + 0xffffffffu;
    { mem_w32(ram, c->r[30] + 0x00000060u, c->r[2]); goto L_089f6fac; }
L_089f6e08:
    c->r[2] = c->r[30] + 0x00000030u;
    c->r[1] = 0x08a50000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffffd0e8u);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = c->r[2] + 0u;
    c->r[6] = mem_r32(ram, c->r[30] + 0x00000008u);
    { c->r[31] = 0x089f6e28u; c->f[12] = c->f[0]; func_089f847c(c, ram); }
    c->r[2] = c->r[30] + 0x00000040u;
    c->r[1] = 0x08a50000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffffd0e8u);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = c->r[2] + 0u;
    c->r[6] = mem_r32(ram, c->r[30] + 0x0000000cu);
    { c->r[31] = 0x089f6e48u; c->f[12] = c->f[0]; func_089f847c(c, ram); }
    c->r[2] = c->r[30] + 0x00000050u;
    c->r[1] = 0x08a50000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffffd0ecu);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = c->r[2] + 0u;
    c->r[6] = mem_r32(ram, c->r[30] + 0x00000010u);
    { c->r[31] = 0x089f6e68u; c->f[12] = c->f[0]; func_089f847c(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_089f6e9c; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[2] = c->r[2] + 0x00000060u;
    { c->r[31] = 0x089f6e84u; c->r[4] = c->r[2] + 0u; func_0884bfd0(c, ram); }
    c->r[4] = c->r[2] + 0u;
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000008u);
    { c->r[31] = 0x089f6e94u; c->r[6] = 0u + 0x0000000cu; func_08a19db8(c, ram); }
    { goto L_089f6ebc; }
L_089f6e9c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[2] = c->r[2] + 0x00000060u;
    { c->r[31] = 0x089f6eacu; c->r[4] = c->r[2] + 0u; func_0884bfd0(c, ram); }
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0u + 0u;
    { c->r[31] = 0x089f6ebcu; c->r[6] = 0u + 0x0000000cu; func_08a19ec4(c, ram); }
L_089f6ebc:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    { int _c = (c->r[2] == 0u); if (_c) goto L_089f6ef0; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[2] = c->r[2] + 0x00000070u;
    { c->r[31] = 0x089f6ed8u; c->r[4] = c->r[2] + 0u; func_0884bfd0(c, ram); }
    c->r[4] = c->r[2] + 0u;
    c->r[5] = mem_r32(ram, c->r[30] + 0x0000000cu);
    { c->r[31] = 0x089f6ee8u; c->r[6] = 0u + 0x0000000cu; func_08a19db8(c, ram); }
    { goto L_089f6f10; }
L_089f6ef0:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[2] = c->r[2] + 0x00000070u;
    { c->r[31] = 0x089f6f00u; c->r[4] = c->r[2] + 0u; func_0884bfd0(c, ram); }
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0u + 0u;
    { c->r[31] = 0x089f6f10u; c->r[6] = 0u + 0x0000000cu; func_08a19ec4(c, ram); }
L_089f6f10:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_089f6f44; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[2] = c->r[2] + 0x00000080u;
    { c->r[31] = 0x089f6f2cu; c->r[4] = c->r[2] + 0u; func_0884bfd0(c, ram); }
    c->r[4] = c->r[2] + 0u;
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000010u);
    { c->r[31] = 0x089f6f3cu; c->r[6] = 0u + 0x0000000cu; func_08a19db8(c, ram); }
    { goto L_089f6f64; }
L_089f6f44:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[2] = c->r[2] + 0x00000080u;
    { c->r[31] = 0x089f6f54u; c->r[4] = c->r[2] + 0u; func_0884bfd0(c, ram); }
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0u + 0u;
    { c->r[31] = 0x089f6f64u; c->r[6] = 0u + 0x0000000cu; func_08a19ec4(c, ram); }
L_089f6f64:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000014u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000000u);
    c->f[0] = c->f[1] * c->f[0];
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[30] + 0x00000018u);
    c->r[3] = (u32)(s32)(s16)mem_r16(ram, c->r[30] + 0x0000001cu);
    c->r[6] = c->r[30] + 0x00000030u;
    c->r[7] = c->r[30] + 0x00000040u;
    c->r[8] = c->r[30] + 0x00000050u;
    c->f[12] = c->f[0];
    c->r[4] = c->r[2] + 0u;
    c->r[5] = c->r[3] + 0u;
    { c->r[31] = 0x089f6f9cu; c->r[9] = mem_r32(ram, c->r[30] + 0x00000020u); func_08a02240(c, ram); }
    { mem_w32(ram, c->r[30] + 0x00000060u, c->r[2]); goto L_089f6fac; }
L_089f6fa4:
    c->r[2] = 0u + 0xffffffffu;
    mem_w32(ram, c->r[30] + 0x00000060u, c->r[2]);
L_089f6fac:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000060u);
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000074u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000070u);
    { c->r[29] = c->r[29] + 0x00000080u; return; }
    return; /* fell out of func_089f6d90 */
}

/* func_089f8cbc  0x089f8cbc..0x089f8d54  152 bytes, source=fde */
void func_089f8cbc(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089f8cbcu);
    c->r[29] = c->r[29] + 0xffffffd0u;
    mem_w32(ram, c->r[29] + 0x00000024u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000020u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[6]);
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[7]);
    { c->r[31] = 0x089f8ce4u; c->r[4] = 0u + 0u; func_08a01700(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_089f8d00; }
    c->r[2] = 0u + 0xffffffffu;
    { mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]); goto L_089f8d3c; }
L_089f8d00:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    mem_w32(ram, c->r[3] + 0x00000010u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    mem_w32(ram, c->r[3] + 0x00000014u, c->r[2]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000008u);
    { c->r[31] = 0x089f8d28u; c->r[6] = mem_r32(ram, c->r[30] + 0x0000000cu); func_08a0129c(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
    { c->r[31] = 0x089f8d34u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u); func_089f8bf8(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]);
L_089f8d3c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000024u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000020u);
    { c->r[29] = c->r[29] + 0x00000030u; return; }
    return; /* fell out of func_089f8cbc */
}

/* func_089f9940  0x089f9940..0x089f99a8  104 bytes, source=residue */
void func_089f9940(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089f9940u);
    c->r[29] = c->r[29] + 0xfffffff0u;
    mem_w32(ram, c->r[29] + 0x00000000u, c->r[16]);
    c->r[3] = 0x80000000u;
    c->r[16] = c->r[4] + 0u;
    mem_w32(ram, c->r[29] + 0x00000004u, c->r[31]);
    c->r[8] = alx_seh(c->r[5]);
    c->r[7] = alx_seh(c->r[6]);
    c->r[2] = mem_r32(ram, c->r[4] + 0x00000000u);
    c->r[5] = c->r[8] + 0u;
    c->r[6] = c->r[7] + 0u;
    c->r[4] = c->r[2] + 0u;
    c->r[2] = (c->r[2] < 0x00000020u) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); c->r[3] = c->r[3] | 0x001au; if (_c) goto L_089f9994; }
    mem_wf32(ram, c->r[16] + 0x00000010u, c->f[12]);
    mem_w16(ram, c->r[16] + 0x00000014u, c->r[8]);
    { c->r[31] = 0x089f9988u; mem_w16(ram, c->r[16] + 0x0000001cu, c->r[7]); func_089fcce4(c, ram); }
    { c->r[31] = 0x089f9990u; c->r[4] = c->r[16] + 0u; func_089fbef8(c, ram); }
    c->r[3] = 0u + 0u;
L_089f9994:
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000004u);
    c->r[16] = mem_r32(ram, c->r[29] + 0x00000000u);
    c->r[2] = c->r[3] + 0u;
    { c->r[29] = c->r[29] + 0x00000010u; return; }
    return; /* fell out of func_089f9940 */
}

/* func_089fa460  0x089fa460..0x089fa488  40 bytes, source=sweep */
void func_089fa460(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089fa460u);
    c->r[2] = 0x08b90000u;
    c->r[5] = c->r[4] + 0u;
    c->r[4] = mem_r32(ram, c->r[2] + 0x0000658cu);
    c->r[29] = c->r[29] + 0xfffffff0u;
    mem_w32(ram, c->r[29] + 0x00000000u, c->r[31]);
    { c->r[31] = 0x089fa47cu; func_089fa0e4(c, ram); }
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000000u);
    { c->r[29] = c->r[29] + 0x00000010u; return; }
    return; /* fell out of func_089fa460 */
}

/* func_089fad3c  0x089fad3c..0x089fad6c  48 bytes, source=sweep */
void func_089fad3c(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089fad3cu);
    c->r[29] = c->r[29] + 0xfffffff0u;
    mem_w32(ram, c->r[29] + 0x00000000u, c->r[31]);
    c->r[2] = 0x08b90000u;
    c->r[3] = c->r[4] + 0u;
    c->r[4] = mem_r32(ram, c->r[2] + 0x00006590u);
    c->r[3] = c->r[3] & 0xffffu;
    c->r[6] = c->r[5] & 0xffffu;
    { c->r[31] = 0x089fad60u; c->r[5] = c->r[3] + 0u; func_089faaf8(c, ram); }
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000000u);
    { c->r[29] = c->r[29] + 0x00000010u; return; }
    return; /* fell out of func_089fad3c */
}

/* func_089fbb30  0x089fbb30..0x089fbb7c  76 bytes, source=sweep */
void func_089fbb30(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089fbb30u);
    c->r[8] = mem_r32(ram, c->r[4] + 0x00000a00u);
    { int _c = ((s32)c->r[8] <= 0); c->r[7] = 0u + 0u; if (_c) goto L_089fbb6c; }
    c->r[9] = 0u + 0xffffffffu;
    c->r[6] = c->r[4] + 0u;
L_089fbb44:
    c->r[2] = mem_r32(ram, c->r[6] + 0x00000000u);
    { int _c = (c->r[2] == c->r[9]); c->r[7] = c->r[7] + 0x00000001u; if (_c) goto L_089fbb60; }
    c->r[3] = mem_r32(ram, c->r[6] + 0x00000008u);
    c->r[2] = mem_r32(ram, c->r[5] + 0x00000008u);
    if (c->r[3] == c->r[2]) { mem_w32(ram, c->r[6] + 0x00000000u, c->r[9]); goto L_089fbb74; }
L_089fbb60:
    c->r[2] = ((s32)c->r[7] < (s32)c->r[8]) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); c->r[6] = c->r[6] + 0x00000028u; if (_c) goto L_089fbb44; }
L_089fbb6c:
    { c->r[2] = 0u + 0u; return; }
L_089fbb74:
    { c->r[8] = mem_r32(ram, c->r[4] + 0x00000a00u); goto L_089fbb60; }
    return; /* fell out of func_089fbb30 */
}

/* func_089fc56c  0x089fc56c..0x089fc610  164 bytes, source=sweep */
void func_089fc56c(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089fc56cu);
    c->r[29] = c->r[29] + 0xfffffff0u;
    mem_w32(ram, c->r[29] + 0x0000000cu, c->r[31]);
    c->r[2] = 0x08ba0000u;
    mem_w32(ram, c->r[29] + 0x00000008u, c->r[18]);
    c->r[18] = c->r[4] + 0u;
    mem_w32(ram, c->r[29] + 0x00000004u, c->r[17]);
    c->r[17] = 0u + 0x0000001fu;
    mem_w32(ram, c->r[29] + 0x00000000u, c->r[16]);
    c->r[16] = c->r[2] + 0xffff88b8u;
L_089fc590:
    c->r[2] = mem_r32(ram, c->r[16] + 0x00000004u);
    { int _c = ((s32)c->r[2] <= 0); c->r[17] = c->r[17] + 0xffffffffu; if (_c) goto L_089fc5a8; }
    c->r[2] = mem_r32(ram, c->r[16] + 0x0000000cu);
    { int _c = (c->r[2] != 0u); c->r[4] = c->r[2] + 0u; if (_c) goto L_089fc5c8; }
L_089fc5a8:
    { int _c = ((s32)c->r[17] >= 0); c->r[16] = c->r[16] + 0x00000010u; if (_c) goto L_089fc590; }
    c->r[31] = mem_r32(ram, c->r[29] + 0x0000000cu);
    c->r[18] = mem_r32(ram, c->r[29] + 0x00000008u);
    c->r[17] = mem_r32(ram, c->r[29] + 0x00000004u);
    c->r[16] = mem_r32(ram, c->r[29] + 0x00000000u);
    { c->r[29] = c->r[29] + 0x00000010u; return; }
L_089fc5c8:
    c->f[0] = u2f(c->r[18]);
    c->f[12] = mem_rf32(ram, c->r[2] + 0x00000010u);
    c->f[1] = (f32)(s32)f2u(c->f[0]);
    c->f[0] = mem_rf32(ram, c->r[16] + 0x00000000u);
    c->f[0] = c->f[0] * c->f[1];
    { c->r[31] = 0x089fc5e4u; c->f[12] = c->f[12] + c->f[0]; func_089f99a8(c, ram); }
    c->r[3] = mem_r32(ram, c->r[16] + 0x00000004u);
    c->r[3] = c->r[3] - c->r[18];
    { int _c = ((s32)c->r[3] > 0); mem_w32(ram, c->r[16] + 0x00000004u, c->r[3]); if (_c) goto L_089fc5a8; }
    c->r[2] = mem_r32(ram, c->r[16] + 0x00000008u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_089fc5a8; }
    { c->r[31] = 0x089fc608u; c->r[4] = mem_r32(ram, c->r[16] + 0x0000000cu); func_089f97d4(c, ram); }
    { goto L_089fc5a8; }
    return; /* fell out of func_089fc56c */
}

/* func_089fda9c  0x089fda9c..0x089fdb24  136 bytes, source=fde */
void func_089fda9c(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089fda9cu);
    c->r[29] = c->r[29] + 0xfffffff0u;
    mem_w32(ram, c->r[29] + 0x00000000u, c->r[16]);
    mem_w32(ram, c->r[29] + 0x00000004u, c->r[31]);
    { c->r[31] = 0x089fdab0u; c->r[16] = c->r[4] + 0u; func_089fb418(c, ram); }
    c->r[5] = c->r[2] + 0u;
    c->r[7] = 0u + 0u;
    c->r[6] = c->r[16] + 0u;
L_089fdabc:
    c->r[2] = mem_r32(ram, c->r[5] + 0x00000000u);
    if (c->r[2] == 0u) { c->r[7] = c->r[7] + 0x00000001u; goto L_089fdb04; }
    c->r[3] = mem_r32(ram, c->r[5] + 0x00000004u);
    c->r[2] = c->r[7] << 5;
    mem_w32(ram, c->r[6] + 0x00000004u, 0u);
    { int _c = ((s32)c->r[3] <= 0); mem_w32(ram, c->r[6] + 0x00000000u, c->r[3]); if (_c) goto L_089fdb00; }
    c->r[2] = c->r[2] + c->r[7];
    c->r[2] = c->r[2] << 3;
    c->r[2] = c->r[2] + c->r[16];
    c->r[4] = 0u + 0xffffffffu;
L_089fdaec:
    c->r[3] = c->r[3] + 0xffffffffu;
    mem_w32(ram, c->r[2] + 0x00000008u, c->r[4]);
    mem_w32(ram, c->r[2] + 0x00000088u, c->r[4]);
    { int _c = (c->r[3] != 0u); c->r[2] = c->r[2] + 0x00000004u; if (_c) goto L_089fdaec; }
L_089fdb00:
    c->r[7] = c->r[7] + 0x00000001u;
L_089fdb04:
    c->r[2] = ((s32)c->r[7] < (s32)0x00000020u) ? 1u : 0u;
    c->r[5] = c->r[5] + 0x00000008u;
    { int _c = (c->r[2] != 0u); c->r[6] = c->r[6] + 0x00000108u; if (_c) goto L_089fdabc; }
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000004u);
    c->r[16] = mem_r32(ram, c->r[29] + 0x00000000u);
    { c->r[29] = c->r[29] + 0x00000010u; return; }
    return; /* fell out of func_089fda9c */
}

/* func_089fea88  0x089fea88..0x089fead4  76 bytes, source=residue */
void func_089fea88(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089fea88u);
    c->r[2] = 0x08ba0000u;
    c->r[3] = mem_r32(ram, c->r[2] + 0x0000016cu);
    c->r[6] = c->r[4] << 3;
    c->r[6] = c->r[6] - c->r[4];
    c->r[3] = ((s32)c->r[4] < (s32)c->r[3]) ? 1u : 0u;
    c->r[2] = 0x08ba0000u;
    c->r[2] = c->r[2] + 0x0000008cu;
    c->r[6] = c->r[6] << 5;
    c->r[3] = c->r[3] ^ 0x0001u;
    c->r[4] = c->r[4] >> 31;
    c->r[6] = c->r[6] + c->r[2];
    c->r[3] = c->r[3] | c->r[4];
    c->r[2] = 0x80000000u;
    { int _c = (c->r[3] != 0u); c->r[2] = c->r[2] | 0x000au; if (_c) goto L_089feacc; }
    mem_w16(ram, c->r[6] + 0x00000012u, c->r[5]);
    c->r[2] = 0u + 0u;
L_089feacc:
    { return; }
    return; /* fell out of func_089fea88 */
}

/* func_08a00df4  0x08a00df4..0x08a00f98  420 bytes, source=sweep */
void func_08a00df4(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08a00df4u);
    c->r[2] = 0x08ba0000u;
    c->r[29] = c->r[29] + 0xffffffe0u;
    c->r[2] = c->r[2] + 0x00000184u;
    mem_w32(ram, c->r[29] + 0x00000018u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[21]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[20]);
    mem_w32(ram, c->r[29] + 0x0000000cu, c->r[19]);
    mem_w32(ram, c->r[2] + 0x00000004u, c->r[4]);
    mem_w32(ram, c->r[2] + 0x00000098u, c->r[5]);
    mem_w32(ram, c->r[29] + 0x00000008u, c->r[18]);
    c->r[18] = 0u + 0xffffffffu;
    mem_w32(ram, c->r[29] + 0x00000004u, c->r[17]);
    c->r[17] = c->r[2] + 0x00000128u;
    mem_w32(ram, c->r[29] + 0x00000000u, c->r[16]);
    c->r[16] = c->r[2] + 0u;
    mem_w32(ram, c->r[16] + 0x00000000u, 0u);
L_08a00e34:
    c->r[4] = 0u + 0x00000001u;
    c->r[5] = 0u + 0x000000ffu;
    mem_w32(ram, c->r[16] + 0x00000008u, 0u);
    mem_w32(ram, c->r[16] + 0x0000000cu, 0u);
    mem_w32(ram, c->r[16] + 0x00000010u, 0u);
    { c->r[31] = 0x08a00e50u; mem_w32(ram, c->r[16] + 0x00000014u, 0u); func_089fd918(c, ram); }
    c->r[2] = c->r[2] << 7;
    mem_w32(ram, c->r[16] + 0x00000018u, c->r[2]);
    mem_w32(ram, c->r[16] + 0x0000001cu, 0u);
    mem_w32(ram, c->r[16] + 0x00000020u, 0u);
    mem_w32(ram, c->r[16] + 0x00000024u, 0u);
    mem_w32(ram, c->r[16] + 0x00000028u, 0u);
    mem_w32(ram, c->r[16] + 0x00000030u, 0u);
    mem_w32(ram, c->r[16] + 0x00000034u, 0u);
    mem_w32(ram, c->r[16] + 0x00000038u, 0u);
    mem_w32(ram, c->r[16] + 0x0000002cu, 0u);
    mem_w32(ram, c->r[16] + 0x0000003cu, c->r[18]);
    mem_w32(ram, c->r[16] + 0x00000040u, 0u);
    mem_w32(ram, c->r[16] + 0x00000048u, 0u);
    mem_w32(ram, c->r[16] + 0x0000004cu, 0u);
    mem_w32(ram, c->r[16] + 0x00000050u, 0u);
    c->r[16] = c->r[16] + 0x00000094u;
    c->r[2] = ((s32)c->r[16] < (s32)c->r[17]) ? 1u : 0u;
    if (c->r[2] != 0u) { mem_w32(ram, c->r[16] + 0x00000000u, 0u); goto L_08a00e34; }
    c->r[2] = 0x08ba0000u;
    c->r[16] = c->r[2] + 0x00000184u;
    c->r[17] = c->r[16] + 0x00000128u;
    c->r[2] = mem_r32(ram, c->r[16] + 0x00000004u);
L_08a00eac:
    c->r[4] = 0u + 0x00000040u;
    { int _c = ((s32)c->r[2] <= 0); c->r[5] = c->r[2] + 0x00000002u; if (_c) goto L_08a00f90; }
    { c->r[31] = 0x08a00ec0u; func_08a1939c(c, ram); }
    mem_w32(ram, c->r[16] + 0x00000008u, c->r[2]);
L_08a00ec4:
    c->r[4] = 0u + 0x00000040u;
    { c->r[31] = 0x08a00ed0u; c->r[5] = 0u + 0x00007ffcu; func_08a1939c(c, ram); }
    mem_w32(ram, c->r[16] + 0x0000000cu, c->r[2]);
    c->r[16] = c->r[16] + 0x00000094u;
    c->r[2] = ((s32)c->r[16] < (s32)c->r[17]) ? 1u : 0u;
    if (c->r[2] != 0u) { c->r[2] = mem_r32(ram, c->r[16] + 0x00000004u); goto L_08a00eac; }
    c->r[2] = 0x08ba0000u;
    c->r[16] = c->r[2] + 0x00000184u;
    c->r[19] = 0x08a50000u;
    c->r[18] = 0x08a00000u;
    c->r[21] = 0x08a50000u;
    c->r[20] = 0x08a00000u;
    c->r[17] = c->r[16] + 0x00000128u;
    c->r[2] = mem_r32(ram, c->r[16] + 0x00000004u);
L_08a00f04:
    c->r[4] = c->r[19] + 0xffffd2f8u;
    c->r[5] = c->r[18] + 0x0000063cu;
    c->r[6] = 0u + 0x00000011u;
    c->r[7] = 0u | 0x8000u;
    c->r[8] = 0u + 0u;
    { int _c = ((s32)c->r[2] < 0); c->r[9] = 0u + 0u; if (_c) goto L_08a00f58; }
    { c->r[31] = 0x08a00f28u; hle_dispatch_stub(c, ram, 0x08a2485cu); /* sceKernelCreateThread */ }
    mem_w32(ram, c->r[16] + 0x00000038u, c->r[2]);
    c->r[4] = c->r[21] + 0xffffd30cu;
    c->r[5] = c->r[20] + 0x00000b60u;
    c->r[2] = mem_r32(ram, c->r[16] + 0x00000004u);
    c->r[6] = 0u + 0x00000070u;
    c->r[7] = 0u | 0x8000u;
    c->r[8] = 0u + 0u;
    { int _c = ((s32)c->r[2] <= 0); c->r[9] = 0u + 0u; if (_c) goto L_08a00f58; }
    { c->r[31] = 0x08a00f54u; hle_dispatch_stub(c, ram, 0x08a2485cu); /* sceKernelCreateThread */ }
    mem_w32(ram, c->r[16] + 0x00000034u, c->r[2]);
L_08a00f58:
    c->r[16] = c->r[16] + 0x00000094u;
    c->r[2] = ((s32)c->r[16] < (s32)c->r[17]) ? 1u : 0u;
    if (c->r[2] != 0u) { c->r[2] = mem_r32(ram, c->r[16] + 0x00000004u); goto L_08a00f04; }
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000018u);
    c->r[21] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[20] = mem_r32(ram, c->r[29] + 0x00000010u);
    c->r[19] = mem_r32(ram, c->r[29] + 0x0000000cu);
    c->r[18] = mem_r32(ram, c->r[29] + 0x00000008u);
    c->r[17] = mem_r32(ram, c->r[29] + 0x00000004u);
    c->r[16] = mem_r32(ram, c->r[29] + 0x00000000u);
    c->r[2] = 0u + 0u;
    { c->r[29] = c->r[29] + 0x00000020u; return; }
L_08a00f90:
    { mem_w32(ram, c->r[16] + 0x00000008u, 0u); goto L_08a00ec4; }
    return; /* fell out of func_08a00df4 */
}

/* func_08a02368  0x08a02368..0x08a0237c  20 bytes, source=residue */
void func_08a02368(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08a02368u);
    c->r[2] = 0x08ba0000u;
    c->r[3] = mem_r32(ram, c->r[2] + 0xffff9af0u);
    c->r[2] = 0u + 0u;
    { mem_wf32(ram, c->r[3] + 0x00000b48u, c->f[12]); return; }
    return; /* fell out of func_08a02368 */
}

/* func_08a03178  0x08a03178..0x08a03198  32 bytes, source=fde */
void func_08a03178(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08a03178u);
    c->r[29] = c->r[29] + 0xfffffff0u;
    mem_w32(ram, c->r[29] + 0x00000000u, c->r[31]);
    { c->r[31] = 0x08a03188u; func_08a033a4(c, ram); }
    c->r[2] = (0u < c->r[2]) ? 1u : 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000000u);
    { c->r[29] = c->r[29] + 0x00000010u; return; }
    return; /* fell out of func_08a03178 */
}

/* func_08a042c4  0x08a042c4..0x08a043bc  248 bytes, source=residue */
void func_08a042c4(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08a042c4u);
    c->r[2] = 0x80440000u;
    c->r[8] = (c->r[4] < 0x00000008u) ? 1u : 0u;
    c->r[3] = (c->r[5] < 0x00001001u) ? 1u : 0u;
    { int _c = (c->r[8] == 0u); c->r[7] = c->r[2] | 0x0005u; if (_c) goto L_08a0438c; }
    c->r[9] = 0x80440000u;
    c->r[8] = (c->r[6] < 0x00001001u) ? 1u : 0u;
    { int _c = (c->r[3] == 0u); c->r[7] = c->r[9] | 0x000au; if (_c) goto L_08a0438c; }
    c->r[7] = 0x08ba0000u;
    c->r[3] = 0x80440000u;
    c->r[2] = c->r[7] + 0xffffaa78u;
    { int _c = (c->r[8] == 0u); c->r[7] = c->r[3] | 0x000au; if (_c) goto L_08a0438c; }
    c->r[8] = 0u + 0x0000004cu;
    alx_mult(c, c->r[4], c->r[8]);
    c->r[12] = 0x80440000u;
    c->r[8] = c->r[2] + 0u;
    c->r[11] = c->lo;
    c->r[3] = c->r[11] + c->r[2];
    c->r[10] = mem_r32(ram, c->r[3] + 0x00000000u);
    { int _c = (c->r[10] != 0u); c->r[7] = c->r[12] | 0x0006u; if (_c) goto L_08a04330; }
    c->r[14] = mem_r32(ram, c->r[3] + 0x00000018u);
    c->r[13] = c->r[14] & 0x0400u;
    { int _c = (c->r[13] == 0u); if (_c) goto L_08a0438c; }
L_08a04330:
    c->r[9] = 0u + 0x0000004cu;
    alx_mult(c, c->r[4], c->r[9]);
    c->r[25] = 0x08ba0000u;
    c->r[4] = c->r[25] + 0xffffacd8u;
    c->r[24] = c->lo;
    c->r[7] = c->r[24] + c->r[8];
    c->r[15] = mem_r32(ram, c->r[7] + 0x0000001cu);
    { int _c = (c->r[15] == 0u); c->r[8] = c->r[24] + c->r[4]; if (_c) goto L_08a04394; }
    c->r[10] = mem_r32(ram, c->r[7] + 0x00000018u);
    c->r[2] = 0x00110000u;
    c->r[11] = 0u + 0x00000001u;
    mem_w32(ram, c->r[8] + 0x00000008u, c->r[5]);
    c->r[5] = c->r[10] | c->r[2];
    mem_w32(ram, c->r[8] + 0x0000001cu, c->r[11]);
    mem_w32(ram, c->r[8] + 0x0000000cu, c->r[6]);
    mem_w32(ram, c->r[8] + 0x0000002cu, 0u);
    mem_w32(ram, c->r[7] + 0x00000018u, c->r[5]);
    mem_w32(ram, c->r[8] + 0x00000020u, 0u);
    mem_w32(ram, c->r[8] + 0x00000030u, 0u);
    mem_w32(ram, c->r[8] + 0x00000034u, 0u);
    mem_w32(ram, c->r[8] + 0x00000028u, 0u);
L_08a04388:
    c->r[7] = 0u + 0u;
L_08a0438c:
    { c->r[2] = c->r[7] + 0u; return; }
L_08a04394:
    c->r[3] = 0u + 0x00000001u;
    mem_w32(ram, c->r[7] + 0x0000001cu, c->r[3]);
    mem_w32(ram, c->r[7] + 0x00000008u, c->r[5]);
    mem_w32(ram, c->r[7] + 0x0000000cu, c->r[6]);
    mem_w32(ram, c->r[7] + 0x0000002cu, 0u);
    mem_w32(ram, c->r[7] + 0x00000020u, 0u);
    mem_w32(ram, c->r[7] + 0x00000030u, 0u);
    mem_w32(ram, c->r[7] + 0x00000034u, 0u);
    { mem_w32(ram, c->r[7] + 0x00000028u, 0u); goto L_08a04388; }
    return; /* fell out of func_08a042c4 */
}

/* func_08a05ce0  0x08a05ce0..0x08a05d3c  92 bytes, source=sweep */
void func_08a05ce0(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08a05ce0u);
    c->r[11] = 0x08ba0000u;
    c->r[12] = mem_r32(ram, c->r[11] + 0xffffaf80u);
    c->r[8] = c->r[5] + 0u;
    c->r[2] = c->r[4] + 0u;
    c->r[3] = c->r[6] + 0u;
    c->r[29] = c->r[29] + 0xfffffff0u;
    c->r[10] = 0x80420000u;
    c->r[9] = 0x08ba0000u;
    c->r[6] = c->r[8] + 0u;
    mem_w32(ram, c->r[29] + 0x00000000u, c->r[31]);
    c->r[8] = c->r[7] + 0u;
    c->r[4] = c->r[9] + 0xffffafc0u;
    c->r[5] = c->r[2] + 0u;
    c->r[7] = c->r[3] + 0u;
    { int _c = (c->r[12] == 0u); c->r[11] = c->r[10] | 0x0100u; if (_c) goto L_08a05d2c; }
    { c->r[31] = 0x08a05d28u; hle_dispatch_stub(c, ram, 0x08a24cd4u); /* __sceSasSetVoice */ }
    c->r[11] = c->r[2] + 0u;
L_08a05d2c:
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000000u);
    c->r[2] = c->r[11] + 0u;
    { c->r[29] = c->r[29] + 0x00000010u; return; }
    return; /* fell out of func_08a05ce0 */
}

/* func_08a06c44  0x08a06c44..0x08a06c54  16 bytes, source=residue */
void func_08a06c44(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08a06c44u);
    c->r[5] = 0u | 0xffffu;
    c->r[3] = (c->r[5] < c->r[4]) ? 1u : 0u;
    { c->r[2] = (c->r[3] < 0x00000001u) ? 1u : 0u; return; }
    return; /* fell out of func_08a06c44 */
}

/* func_08a0be5c  0x08a0be5c..0x08a0c66c  2064 bytes, source=sweep */
void func_08a0be5c(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08a0be5cu);
    c->r[29] = c->r[29] + 0xffffffd0u;
    mem_w32(ram, c->r[29] + 0x00000020u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[6]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] >> 24;
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] >> 8;
    c->r[2] = c->r[2] & 0xff00u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = c->r[3] + c->r[2];
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[3]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] & 0xff00u;
    c->r[2] = c->r[2] << 8;
    c->r[4] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[4] = c->r[4] + c->r[2];
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[4]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] & 0x00ffu;
    c->r[2] = c->r[2] << 24;
    c->r[6] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[6] = c->r[6] + c->r[2];
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[6]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = ~(0u | c->r[2]);
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
L_08a0bed4:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_08a0bf50; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[2] & 0x0003u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_08a0bef8; }
    { goto L_08a0bf50; }
L_08a0bef8:
    c->r[4] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = c->r[4] >> 24;
    c->r[5] = c->r[30] + 0x00000004u;
    c->r[4] = mem_r32(ram, c->r[5] + 0x00000000u);
    c->r[2] = c->r[4] + 0u;
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000000u);
    c->r[2] = c->r[3] ^ c->r[2];
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08a50000u;
    c->r[2] = c->r[2] + 0xfffff464u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[6] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = c->r[6] << 8;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[3] = c->r[3] ^ c->r[2];
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[3]);
    c->r[4] = c->r[4] + 0x00000001u;
    mem_w32(ram, c->r[5] + 0x00000000u, c->r[4]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[2] + 0xffffffffu;
    { mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]); goto L_08a0bed4; }
L_08a0bf50:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[3] = c->r[3] + 0xfffffffcu;
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[3]);
L_08a0bf64:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = (c->r[2] < 0x00000020u) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_08a0bf7c; }
    { goto L_08a0c4cc; }
L_08a0bf7c:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[4] = c->r[4] + 0x00000004u;
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[4]);
    c->r[6] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = mem_r32(ram, c->r[6] + 0x00000000u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = c->r[3] ^ c->r[2];
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[3]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[4] & 0x00ffu;
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08a50000u;
    c->r[2] = c->r[2] + 0xfffff464u;
    c->r[4] = c->r[3] + c->r[2];
    c->r[6] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[6] >> 8;
    c->r[2] = c->r[2] & 0x00ffu;
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08a50000u;
    c->r[2] = c->r[2] + 0xfffff864u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[3] = mem_r32(ram, c->r[4] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[4] = c->r[3] ^ c->r[2];
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[3] >> 16;
    c->r[2] = c->r[2] & 0x00ffu;
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08a50000u;
    c->r[2] = c->r[2] + 0xfffffc64u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[4] = c->r[4] ^ c->r[2];
    c->r[6] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[6] >> 24;
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08a50000u;
    c->r[2] = c->r[2] + 0x00000064u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[4] = c->r[4] ^ c->r[2];
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[4]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = c->r[2] + 0x00000004u;
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = mem_r32(ram, c->r[3] + 0x00000000u);
    c->r[4] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[4] = c->r[4] ^ c->r[2];
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[4]);
    c->r[6] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[6] & 0x00ffu;
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08a50000u;
    c->r[2] = c->r[2] + 0xfffff464u;
    c->r[4] = c->r[3] + c->r[2];
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[3] >> 8;
    c->r[2] = c->r[2] & 0x00ffu;
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08a50000u;
    c->r[2] = c->r[2] + 0xfffff864u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[3] = mem_r32(ram, c->r[4] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[4] = c->r[3] ^ c->r[2];
    c->r[6] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[6] >> 16;
    c->r[2] = c->r[2] & 0x00ffu;
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08a50000u;
    c->r[2] = c->r[2] + 0xfffffc64u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[4] = c->r[4] ^ c->r[2];
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[3] >> 24;
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08a50000u;
    c->r[2] = c->r[2] + 0x00000064u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[4] = c->r[4] ^ c->r[2];
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[4]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[4] = c->r[4] + 0x00000004u;
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[4]);
    c->r[6] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = mem_r32(ram, c->r[6] + 0x00000000u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = c->r[3] ^ c->r[2];
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[3]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[4] & 0x00ffu;
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08a50000u;
    c->r[2] = c->r[2] + 0xfffff464u;
    c->r[4] = c->r[3] + c->r[2];
    c->r[6] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[6] >> 8;
    c->r[2] = c->r[2] & 0x00ffu;
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08a50000u;
    c->r[2] = c->r[2] + 0xfffff864u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[3] = mem_r32(ram, c->r[4] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[4] = c->r[3] ^ c->r[2];
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[3] >> 16;
    c->r[2] = c->r[2] & 0x00ffu;
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08a50000u;
    c->r[2] = c->r[2] + 0xfffffc64u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[4] = c->r[4] ^ c->r[2];
    c->r[6] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[6] >> 24;
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08a50000u;
    c->r[2] = c->r[2] + 0x00000064u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[4] = c->r[4] ^ c->r[2];
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[4]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = c->r[2] + 0x00000004u;
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = mem_r32(ram, c->r[3] + 0x00000000u);
    c->r[4] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[4] = c->r[4] ^ c->r[2];
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[4]);
    c->r[6] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[6] & 0x00ffu;
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08a50000u;
    c->r[2] = c->r[2] + 0xfffff464u;
    c->r[4] = c->r[3] + c->r[2];
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[3] >> 8;
    c->r[2] = c->r[2] & 0x00ffu;
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08a50000u;
    c->r[2] = c->r[2] + 0xfffff864u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[3] = mem_r32(ram, c->r[4] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[4] = c->r[3] ^ c->r[2];
    c->r[6] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[6] >> 16;
    c->r[2] = c->r[2] & 0x00ffu;
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08a50000u;
    c->r[2] = c->r[2] + 0xfffffc64u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[4] = c->r[4] ^ c->r[2];
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[3] >> 24;
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08a50000u;
    c->r[2] = c->r[2] + 0x00000064u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[4] = c->r[4] ^ c->r[2];
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[4]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[4] = c->r[4] + 0x00000004u;
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[4]);
    c->r[6] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = mem_r32(ram, c->r[6] + 0x00000000u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = c->r[3] ^ c->r[2];
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[3]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[4] & 0x00ffu;
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08a50000u;
    c->r[2] = c->r[2] + 0xfffff464u;
    c->r[4] = c->r[3] + c->r[2];
    c->r[6] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[6] >> 8;
    c->r[2] = c->r[2] & 0x00ffu;
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08a50000u;
    c->r[2] = c->r[2] + 0xfffff864u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[3] = mem_r32(ram, c->r[4] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[4] = c->r[3] ^ c->r[2];
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[3] >> 16;
    c->r[2] = c->r[2] & 0x00ffu;
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08a50000u;
    c->r[2] = c->r[2] + 0xfffffc64u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[4] = c->r[4] ^ c->r[2];
    c->r[6] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[6] >> 24;
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08a50000u;
    c->r[2] = c->r[2] + 0x00000064u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[4] = c->r[4] ^ c->r[2];
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[4]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = c->r[2] + 0x00000004u;
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = mem_r32(ram, c->r[3] + 0x00000000u);
    c->r[4] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[4] = c->r[4] ^ c->r[2];
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[4]);
    c->r[6] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[6] & 0x00ffu;
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08a50000u;
    c->r[2] = c->r[2] + 0xfffff464u;
    c->r[4] = c->r[3] + c->r[2];
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[3] >> 8;
    c->r[2] = c->r[2] & 0x00ffu;
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08a50000u;
    c->r[2] = c->r[2] + 0xfffff864u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[3] = mem_r32(ram, c->r[4] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[4] = c->r[3] ^ c->r[2];
    c->r[6] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[6] >> 16;
    c->r[2] = c->r[2] & 0x00ffu;
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08a50000u;
    c->r[2] = c->r[2] + 0xfffffc64u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[4] = c->r[4] ^ c->r[2];
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[3] >> 24;
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08a50000u;
    c->r[2] = c->r[2] + 0x00000064u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[4] = c->r[4] ^ c->r[2];
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[4]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[4] = c->r[4] + 0x00000004u;
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[4]);
    c->r[6] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = mem_r32(ram, c->r[6] + 0x00000000u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = c->r[3] ^ c->r[2];
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[3]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[4] & 0x00ffu;
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08a50000u;
    c->r[2] = c->r[2] + 0xfffff464u;
    c->r[4] = c->r[3] + c->r[2];
    c->r[6] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[6] >> 8;
    c->r[2] = c->r[2] & 0x00ffu;
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08a50000u;
    c->r[2] = c->r[2] + 0xfffff864u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[3] = mem_r32(ram, c->r[4] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[4] = c->r[3] ^ c->r[2];
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[3] >> 16;
    c->r[2] = c->r[2] & 0x00ffu;
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08a50000u;
    c->r[2] = c->r[2] + 0xfffffc64u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[4] = c->r[4] ^ c->r[2];
    c->r[6] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[6] >> 24;
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08a50000u;
    c->r[2] = c->r[2] + 0x00000064u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[4] = c->r[4] ^ c->r[2];
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[4]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = c->r[2] + 0x00000004u;
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = mem_r32(ram, c->r[3] + 0x00000000u);
    c->r[4] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[4] = c->r[4] ^ c->r[2];
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[4]);
    c->r[6] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[6] & 0x00ffu;
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08a50000u;
    c->r[2] = c->r[2] + 0xfffff464u;
    c->r[4] = c->r[3] + c->r[2];
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[3] >> 8;
    c->r[2] = c->r[2] & 0x00ffu;
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08a50000u;
    c->r[2] = c->r[2] + 0xfffff864u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[3] = mem_r32(ram, c->r[4] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[4] = c->r[3] ^ c->r[2];
    c->r[6] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[6] >> 16;
    c->r[2] = c->r[2] & 0x00ffu;
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08a50000u;
    c->r[2] = c->r[2] + 0xfffffc64u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[4] = c->r[4] ^ c->r[2];
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[3] >> 24;
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08a50000u;
    c->r[2] = c->r[2] + 0x00000064u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[4] = c->r[4] ^ c->r[2];
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[4]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[2] + 0xffffffe0u;
    { mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]); goto L_08a0bf64; }
L_08a0c4cc:
L_08a0c4d0:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = (c->r[2] < 0x00000004u) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_08a0c4e8; }
    { goto L_08a0c5a0; }
L_08a0c4e8:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[4] = c->r[4] + 0x00000004u;
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[4]);
    c->r[6] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = mem_r32(ram, c->r[6] + 0x00000000u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = c->r[3] ^ c->r[2];
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[3]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[4] & 0x00ffu;
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08a50000u;
    c->r[2] = c->r[2] + 0xfffff464u;
    c->r[4] = c->r[3] + c->r[2];
    c->r[6] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[6] >> 8;
    c->r[2] = c->r[2] & 0x00ffu;
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08a50000u;
    c->r[2] = c->r[2] + 0xfffff864u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[3] = mem_r32(ram, c->r[4] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[4] = c->r[3] ^ c->r[2];
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[3] >> 16;
    c->r[2] = c->r[2] & 0x00ffu;
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08a50000u;
    c->r[2] = c->r[2] + 0xfffffc64u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[4] = c->r[4] ^ c->r[2];
    c->r[6] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[6] >> 24;
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08a50000u;
    c->r[2] = c->r[2] + 0x00000064u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[4] = c->r[4] ^ c->r[2];
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[4]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[2] + 0xfffffffcu;
    { mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]); goto L_08a0c4d0; }
L_08a0c5a0:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = c->r[2] + 0x00000004u;
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000010u);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[3]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_08a0c618; }
L_08a0c5c0:
    c->r[4] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = c->r[4] >> 24;
    c->r[5] = c->r[30] + 0x00000004u;
    c->r[4] = mem_r32(ram, c->r[5] + 0x00000000u);
    c->r[2] = c->r[4] + 0u;
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000000u);
    c->r[2] = c->r[3] ^ c->r[2];
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08a50000u;
    c->r[2] = c->r[2] + 0xfffff464u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[6] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = c->r[6] << 8;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[3] = c->r[3] ^ c->r[2];
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[3]);
    c->r[4] = c->r[4] + 0x00000001u;
    mem_w32(ram, c->r[5] + 0x00000000u, c->r[4]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[2] + 0xffffffffu;
    { int _c = (c->r[2] != 0u); mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]); if (_c) goto L_08a0c5c0; }
L_08a0c618:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = ~(0u | c->r[2]);
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[3] >> 24;
    c->r[4] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = c->r[4] >> 8;
    c->r[3] = c->r[3] & 0xff00u;
    c->r[2] = c->r[2] + c->r[3];
    c->r[6] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = c->r[6] & 0xff00u;
    c->r[3] = c->r[3] << 8;
    c->r[2] = c->r[2] + c->r[3];
    c->r[4] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = c->r[4] & 0x00ffu;
    c->r[3] = c->r[3] << 24;
    c->r[2] = c->r[2] + c->r[3];
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000020u);
    { c->r[29] = c->r[29] + 0x00000030u; return; }
    return; /* fell out of func_08a0be5c */
}

/* func_08a0e328  0x08a0e328..0x08a0e350  40 bytes, source=indirect */
void func_08a0e328(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08a0e328u);
    c->r[2] = 0x08a50000u;
    c->r[2] = c->r[2] + 0x00000510u;
    mem_w32(ram, c->r[4] + 0x00000000u, c->r[2]);
    c->r[29] = c->r[29] + 0xfffffff0u;
    mem_w32(ram, c->r[29] + 0x00000000u, c->r[31]);
    { c->r[31] = 0x08a0e344u; func_08a0d214(c, ram); }
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000000u);
    { c->r[29] = c->r[29] + 0x00000010u; return; }
    return; /* fell out of func_08a0e328 */
}

/* func_08a0e7b8  0x08a0e7b8..0x08a0e7f0  56 bytes, source=indirect */
void func_08a0e7b8(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08a0e7b8u);
    c->r[2] = 0x08a50000u;
    c->r[2] = c->r[2] + 0x000005d0u;
    mem_w32(ram, c->r[4] + 0x00000000u, c->r[2]);
    c->r[29] = c->r[29] + 0xfffffff0u;
    mem_w32(ram, c->r[29] + 0x00000000u, c->r[16]);
    mem_w32(ram, c->r[29] + 0x00000004u, c->r[31]);
    { c->r[31] = 0x08a0e7d8u; c->r[16] = c->r[4] + 0u; func_08a0e6e0(c, ram); }
    { c->r[31] = 0x08a0e7e0u; c->r[4] = c->r[16] + 0u; func_08a0d214(c, ram); }
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000004u);
    c->r[16] = mem_r32(ram, c->r[29] + 0x00000000u);
    { c->r[29] = c->r[29] + 0x00000010u; return; }
    return; /* fell out of func_08a0e7b8 */
}

/* func_08a11174  0x08a11174..0x08a1133c  456 bytes, source=sweep */
void func_08a11174(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08a11174u);
    c->r[4] = f2u(c->f[12]);
    c->r[2] = f2u(c->f[13]);
    c->r[3] = 0x7f7f0000u;
    c->r[5] = alx_ext(c->r[4], 0u, 30u);
    c->r[7] = alx_ext(c->r[2], 0u, 30u);
    c->r[3] = c->r[3] | 0xffffu;
    c->r[3] = ((s32)c->r[3] < (s32)c->r[5]) ? 1u : 0u;
    c->r[2] = (c->r[7] < 0x00000001u) ? 1u : 0u;
    c->r[2] = c->r[2] | c->r[3];
    { int _c = (c->r[2] != 0u); c->r[4] = alx_ins(c->r[4], 0u, 0u, 30u); if (_c) goto L_08a111b0; }
    c->r[2] = 0x7f800000u;
    c->r[2] = ((s32)c->r[2] < (s32)c->r[7]) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); c->r[2] = ((s32)c->r[5] < (s32)c->r[7]) ? 1u : 0u; if (_c) goto L_08a111bc; }
L_08a111b0:
    c->f[0] = c->f[12] * c->f[13];
    { c->f[0] = c->f[0] / c->f[0]; return; }
L_08a111bc:
    { int _c = (c->r[2] != 0u); c->f[0] = c->f[12]; if (_c) goto L_08a112f4; }
    { int _c = (c->r[5] == c->r[7]); c->r[2] = 0x007f0000u; if (_c) goto L_08a11308; }
    c->r[2] = c->r[2] | 0xffffu;
    c->r[3] = (u32)((s32)c->r[5] >> 23);
    c->r[2] = ((s32)c->r[2] < (s32)c->r[5]) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); c->r[9] = c->r[3] + 0xffffff81u; if (_c) goto L_08a111f8; }
    c->r[2] = c->r[5] << 8;
    { int _c = ((s32)c->r[2] <= 0); c->r[9] = 0u + 0xffffff82u; if (_c) goto L_08a111f8; }
L_08a111ec:
    c->r[2] = c->r[2] << 1;
    { int _c = ((s32)c->r[2] > 0); c->r[9] = c->r[9] + 0xffffffffu; if (_c) goto L_08a111ec; }
L_08a111f8:
    c->r[2] = 0x007f0000u;
    c->r[2] = c->r[2] | 0xffffu;
    c->r[3] = (u32)((s32)c->r[7] >> 23);
    c->r[2] = ((s32)c->r[2] < (s32)c->r[7]) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); c->r[8] = c->r[3] + 0xffffff81u; if (_c) goto L_08a11228; }
    c->r[2] = c->r[7] << 8;
    { int _c = ((s32)c->r[2] < 0); c->r[8] = 0u + 0xffffff82u; if (_c) goto L_08a11228; }
L_08a1121c:
    c->r[2] = c->r[2] << 1;
    { int _c = ((s32)c->r[2] >= 0); c->r[8] = c->r[8] + 0xffffffffu; if (_c) goto L_08a1121c; }
L_08a11228:
    c->r[2] = ((s32)c->r[9] < (s32)0xffffff82u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); c->r[2] = 0u + 0xffffff82u; if (_c) goto L_08a11330; }
    c->r[3] = c->r[5] + 0u;
    c->r[3] = alx_ins(c->r[3], 0u, 23u, 31u);
    c->r[2] = 0x00800000u;
    c->r[5] = c->r[3] | c->r[2];
L_08a11244:
    c->r[10] = ((s32)c->r[8] < (s32)0xffffff82u) ? 1u : 0u;
    { int _c = (c->r[10] != 0u); c->r[2] = 0u + 0xffffff82u; if (_c) goto L_08a11324; }
    c->r[3] = c->r[7] + 0u;
    c->r[3] = alx_ins(c->r[3], 0u, 23u, 31u);
    c->r[2] = 0x00800000u;
    c->r[7] = c->r[3] | c->r[2];
L_08a11260:
    c->r[6] = c->r[9] - c->r[8];
    c->r[6] = c->r[6] + 0xffffffffu;
    c->r[2] = 0u + 0xffffffffu;
    { int _c = (c->r[6] == c->r[2]); c->r[3] = c->r[5] - c->r[7]; if (_c) goto L_08a11290; }
L_08a11274:
    c->r[6] = c->r[6] + 0xffffffffu;
    { int _c = ((s32)c->r[3] < 0); c->r[5] = c->r[5] << 1; if (_c) goto L_08a11288; }
    { int _c = (c->r[3] == 0u); c->r[5] = c->r[3] << 1; if (_c) goto L_08a11308; }
L_08a11288:
    { int _c = (c->r[6] != c->r[2]); c->r[3] = c->r[5] - c->r[7]; if (_c) goto L_08a11274; }
L_08a11290:
    c->r[2] = ((s32)c->r[3] < (s32)0x00000000u) ? 1u : 0u;
    if (c->r[2] == 0u) c->r[5] = c->r[3];
    { int _c = (c->r[5] == 0u); c->r[3] = c->r[4] >> 31; if (_c) goto L_08a1130c; }
    c->r[2] = 0x007f0000u;
    c->r[2] = c->r[2] | 0xffffu;
    c->r[2] = ((s32)c->r[2] < (s32)c->r[5]) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_08a112d0; }
    c->r[3] = 0x007f0000u;
    c->r[3] = c->r[3] | 0xffffu;
L_08a112bc:
    c->r[5] = c->r[5] << 1;
    c->r[2] = ((s32)c->r[3] < (s32)c->r[5]) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); c->r[8] = c->r[8] + 0xffffffffu; if (_c) goto L_08a112bc; }
    c->r[10] = ((s32)c->r[8] < (s32)0xffffff82u) ? 1u : 0u;
L_08a112d0:
    { int _c = (c->r[10] != 0u); c->r[2] = 0u + 0xffffff82u; if (_c) goto L_08a112fc; }
    c->r[3] = c->r[8] + 0x0000007fu;
    c->r[2] = 0xff800000u;
    c->r[2] = c->r[5] + c->r[2];
    c->r[3] = c->r[3] << 23;
    c->r[5] = c->r[2] | c->r[3];
L_08a112ec:
    c->r[5] = c->r[5] | c->r[4];
    c->f[0] = u2f(c->r[5]);
L_08a112f4:
    { return; }
L_08a112fc:
    c->r[6] = c->r[2] - c->r[8];
    { c->r[5] = (u32)((s32)c->r[5] >> (c->r[6] & 31u)); goto L_08a112ec; }
L_08a11308:
    c->r[3] = c->r[4] >> 31;
L_08a1130c:
    c->r[2] = 0x08a50000u;
    c->r[3] = c->r[3] << 2;
    c->r[2] = c->r[2] + 0x00000948u;
    c->r[3] = c->r[3] + c->r[2];
    { c->f[0] = mem_rf32(ram, c->r[3] + 0x00000000u); return; }
L_08a11324:
    c->r[6] = c->r[2] - c->r[8];
    { c->r[7] = c->r[7] << (c->r[6] & 31u); goto L_08a11260; }
L_08a11330:
    c->r[6] = c->r[2] - c->r[9];
    { c->r[5] = c->r[5] << (c->r[6] & 31u); goto L_08a11244; }
    return; /* fell out of func_08a11174 */
}

/* func_08a14554  0x08a14554..0x08a14588  52 bytes, source=sweep */
void func_08a14554(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08a14554u);
    c->r[29] = c->r[29] + 0xffffffd0u;
    c->r[2] = c->r[4] + 0u;
    mem_w32(ram, c->r[29] + 0x00000020u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000000u, c->r[2]);
    mem_w32(ram, c->r[29] + 0x00000004u, c->r[5]);
    mem_w32(ram, c->r[29] + 0x00000008u, c->r[6]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[8]);
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[9]);
    { c->r[31] = 0x08a1457cu; c->r[4] = c->r[29] + 0u; func_08a183fc(c, ram); }
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000020u);
    { c->r[29] = c->r[29] + 0x00000030u; return; }
    return; /* fell out of func_08a14554 */
}

/* func_08a16874  0x08a16874..0x08a1687c  8 bytes, source=sweep */
void func_08a16874(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08a16874u);
    { mem_w32(ram, c->r[4] + 0x00000350u, c->r[5]); return; }
    return; /* fell out of func_08a16874 */
}

/* func_08a18778  0x08a18778..0x08a188dc  356 bytes, source=sweep */
void func_08a18778(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08a18778u);
    c->r[3] = mem_r32(ram, c->r[4] + 0x00000000u);
    c->r[2] = (c->r[3] < 0x00000002u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); c->r[7] = c->r[4] + 0u; if (_c) goto L_08a18798; }
    c->r[6] = mem_r32(ram, c->r[5] + 0x00000000u);
    c->r[2] = (c->r[6] < 0x00000002u) ? 1u : 0u;
    if (c->r[2] == 0u) { c->r[2] = c->r[3] ^ 0x0004u; goto L_08a187a4; }
L_08a18798:
    c->r[4] = 0u + 0x00000001u;
L_08a1879c:
    { c->r[2] = c->r[4] + 0u; return; }
L_08a187a4:
    { int _c = (c->r[2] != 0u); c->r[2] = c->r[3] ^ 0x0004u; if (_c) goto L_08a187c8; }
    c->r[2] = c->r[6] ^ 0x0004u;
    if (c->r[2] != 0u) { c->r[2] = c->r[3] ^ 0x0004u; goto L_08a187c8; }
    c->r[3] = mem_r32(ram, c->r[5] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[4] + 0x00000004u);
    { c->r[4] = c->r[3] - c->r[2]; goto L_08a1879c; }
L_08a187c8:
    if (c->r[2] == 0u) { c->r[3] = mem_r32(ram, c->r[7] + 0x00000004u); goto L_08a1881c; }
    c->r[2] = c->r[6] ^ 0x0004u;
    if (c->r[2] == 0u) { c->r[3] = mem_r32(ram, c->r[5] + 0x00000004u); goto L_08a18800; }
    c->r[2] = c->r[3] ^ 0x0002u;
    { int _c = (c->r[2] != 0u); c->r[2] = c->r[6] ^ 0x0002u; if (_c) goto L_08a18810; }
    { int _c = (c->r[2] == 0u); c->r[4] = 0u + 0u; if (_c) goto L_08a1879c; }
    c->r[2] = c->r[3] ^ 0x0002u;
    if (c->r[2] != 0u) { c->r[2] = c->r[6] ^ 0x0002u; goto L_08a18810; }
    c->r[3] = mem_r32(ram, c->r[5] + 0x00000004u);
L_08a18800:
    c->r[4] = 0u + 0x00000001u;
    c->r[2] = 0u + 0xffffffffu;
L_08a18808:
    { if (c->r[3] == 0u) c->r[4] = c->r[2]; goto L_08a1879c; }
L_08a18810:
    if (c->r[2] != 0u) { c->r[6] = mem_r32(ram, c->r[7] + 0x00000004u); goto L_08a18828; }
    c->r[3] = mem_r32(ram, c->r[7] + 0x00000004u);
L_08a1881c:
    c->r[4] = 0u + 0xffffffffu;
    { c->r[2] = 0u + 0x00000001u; goto L_08a18808; }
L_08a18828:
    c->r[3] = mem_r32(ram, c->r[5] + 0x00000004u);
    c->r[4] = 0u + 0xffffffffu;
    c->r[2] = 0u + 0x00000001u;
    { int _c = (c->r[6] != c->r[3]); if (c->r[6] == 0u) c->r[4] = c->r[2]; if (_c) goto L_08a1879c; }
    c->r[9] = mem_r32(ram, c->r[7] + 0x00000008u);
    c->r[8] = mem_r32(ram, c->r[5] + 0x00000008u);
    c->r[4] = 0u + 0xffffffffu;
    c->r[3] = ((s32)c->r[8] < (s32)c->r[9]) ? 1u : 0u;
    { int _c = (c->r[3] != 0u); if (c->r[6] == 0u) c->r[4] = c->r[2]; if (_c) goto L_08a1879c; }
    c->r[4] = 0u + 0x00000001u;
    c->r[2] = 0u + 0xffffffffu;
    c->r[3] = ((s32)c->r[9] < (s32)c->r[8]) ? 1u : 0u;
    { int _c = (c->r[3] != 0u); if (c->r[6] == 0u) c->r[4] = c->r[2]; if (_c) goto L_08a1879c; }
    c->r[8] = mem_r32(ram, c->r[7] + 0x00000014u);
    c->r[4] = mem_r32(ram, c->r[5] + 0x00000014u);
    c->r[2] = (c->r[4] < c->r[8]) ? 1u : 0u;
    if (c->r[2] != 0u) { c->r[4] = 0u + 0xffffffffu; goto L_08a188d4; }
    if (c->r[8] == c->r[4]) { c->r[3] = mem_r32(ram, c->r[7] + 0x00000010u); goto L_08a188c0; }
    c->r[2] = (c->r[8] < c->r[4]) ? 1u : 0u;
L_08a18888:
    if (c->r[2] != 0u) { c->r[4] = 0u + 0x00000001u; goto L_08a188b4; }
    if (c->r[4] == c->r[8]) { c->r[3] = mem_r32(ram, c->r[5] + 0x00000010u); goto L_08a188a0; }
    { c->r[4] = 0u + 0u; goto L_08a1879c; }
L_08a188a0:
    c->r[2] = mem_r32(ram, c->r[7] + 0x00000010u);
    c->r[2] = (c->r[2] < c->r[3]) ? 1u : 0u;
    if (c->r[2] == 0u) { c->r[4] = 0u + 0u; goto L_08a1879c; }
    c->r[4] = 0u + 0x00000001u;
L_08a188b4:
    c->r[2] = 0u + 0xffffffffu;
L_08a188b8:
    { if (c->r[6] == 0u) c->r[4] = c->r[2]; goto L_08a1879c; }
L_08a188c0:
    c->r[2] = mem_r32(ram, c->r[5] + 0x00000010u);
    c->r[2] = (c->r[2] < c->r[3]) ? 1u : 0u;
    if (c->r[2] == 0u) { c->r[2] = (c->r[8] < c->r[4]) ? 1u : 0u; goto L_08a18888; }
    c->r[4] = 0u + 0xffffffffu;
L_08a188d4:
    { c->r[2] = 0u + 0x00000001u; goto L_08a188b8; }
    return; /* fell out of func_08a18778 */
}

/* func_08a191d4  0x08a191d4..0x08a191f4  32 bytes, source=sweep */
void func_08a191d4(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08a191d4u);
    c->r[29] = c->r[29] + 0xfffffff0u;
    c->r[5] = 0u + 0u;
    mem_w32(ram, c->r[29] + 0x00000000u, c->r[31]);
    { c->r[31] = 0x08a191e8u; c->r[6] = 0u + 0x0000000au; func_08a1c4a4(c, ram); }
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000000u);
    { c->r[29] = c->r[29] + 0x00000010u; return; }
    return; /* fell out of func_08a191d4 */
}

/* func_08a1aa28  0x08a1aa28..0x08a1aaec  196 bytes, source=sweep */
void func_08a1aa28(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08a1aa28u);
    c->r[29] = c->r[29] + 0xfffffff0u;
    c->r[2] = (c->r[5] < 0x00000020u) ? 1u : 0u;
    mem_w32(ram, c->r[29] + 0x00000004u, c->r[17]);
    c->r[17] = c->r[4] + 0u;
    mem_w32(ram, c->r[29] + 0x00000000u, c->r[16]);
    c->r[16] = c->r[5] + 0u;
    c->r[5] = 0u + 0xffffffffu;
    { int _c = (c->r[2] == 0u); mem_w32(ram, c->r[29] + 0x00000008u, c->r[31]); if (_c) goto L_08a1aaa8; }
    c->r[3] = mem_r32(ram, c->r[4] + 0x00000258u);
    { int _c = (c->r[3] == 0u); if (_c) goto L_08a1aad4; }
L_08a1aa58:
    c->r[2] = c->r[16] << 2;
    c->r[4] = c->r[2] + c->r[3];
    c->r[3] = mem_r32(ram, c->r[4] + 0x00000000u);
    { int _c = (c->r[3] == 0u); c->r[2] = 0u + 0x00000001u; if (_c) goto L_08a1aab4; }
    { int _c = (c->r[3] == c->r[2]); c->r[5] = 0u + 0u; if (_c) goto L_08a1aa90; }
    c->r[2] = 0u + 0xffffffffu;
    { int _c = (c->r[3] == c->r[2]); c->r[5] = 0u + 0x00000001u; if (_c) goto L_08a1aaa8; }
    mem_w32(ram, c->r[4] + 0x00000000u, 0u);
    { u32 _t = c->r[3]; c->r[31] = 0x08a1aa8cu; c->r[4] = c->r[16] + 0u; recomp_call_indirect(c, ram, 0x08a1aa84u, _t); }
    c->r[5] = 0u + 0u;
L_08a1aa90:
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000008u);
    c->r[17] = mem_r32(ram, c->r[29] + 0x00000004u);
    c->r[16] = mem_r32(ram, c->r[29] + 0x00000000u);
    c->r[2] = c->r[5] + 0u;
    { c->r[29] = c->r[29] + 0x00000010u; return; }
L_08a1aaa8:
    c->r[2] = 0u + 0x00000016u;
    { mem_w32(ram, c->r[17] + 0x00000000u, c->r[2]); goto L_08a1aa90; }
L_08a1aab4:
    { c->r[31] = 0x08a1aabcu; c->r[4] = c->r[17] + 0u; func_08a1acb0(c, ram); }
    c->r[5] = c->r[2] + 0u;
    c->r[4] = c->r[17] + 0u;
    { c->r[31] = 0x08a1aaccu; c->r[6] = c->r[16] + 0u; func_08a1ac4c(c, ram); }
    { c->r[5] = c->r[2] + 0u; goto L_08a1aa90; }
L_08a1aad4:
    { c->r[31] = 0x08a1aadcu; func_08a1a940(c, ram); }
    { int _c = (c->r[2] != 0u); c->r[5] = 0u + 0xffffffffu; if (_c) goto L_08a1aa90; }
    { c->r[3] = mem_r32(ram, c->r[17] + 0x00000258u); goto L_08a1aa58; }
    return; /* fell out of func_08a1aa28 */
}

/* func_08a1f170  0x08a1f170..0x08a1f338  456 bytes, source=sweep */
void func_08a1f170(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08a1f170u);
    c->r[29] = c->r[29] + 0xffffffb0u;
    mem_w32(ram, c->r[29] + 0x00000034u, c->r[21]);
    c->r[2] = 0u + 0x00000066u;
    c->r[21] = mem_r32(ram, c->r[29] + 0x00000050u);
    mem_w32(ram, c->r[29] + 0x00000040u, c->r[30]);
    c->r[30] = c->r[9] + 0u;
    mem_w32(ram, c->r[29] + 0x0000003cu, c->r[23]);
    c->r[23] = c->r[4] + 0u;
    mem_w32(ram, c->r[29] + 0x00000038u, c->r[22]);
    c->r[22] = c->r[11] + 0u;
    mem_w32(ram, c->r[29] + 0x00000030u, c->r[20]);
    c->r[20] = c->r[8] + 0u;
    mem_w32(ram, c->r[29] + 0x0000002cu, c->r[19]);
    c->r[19] = c->r[7] + 0u;
    mem_w32(ram, c->r[29] + 0x00000028u, c->r[18]);
    c->r[18] = c->r[6] + 0u;
    mem_w32(ram, c->r[29] + 0x00000024u, c->r[17]);
    c->r[17] = 0u + 0x00000003u;
    mem_w32(ram, c->r[29] + 0x00000020u, c->r[16]);
    c->r[16] = c->r[10] + 0u;
    { int _c = (c->r[21] == c->r[2]); mem_w32(ram, c->r[29] + 0x00000044u, c->r[31]); if (_c) goto L_08a1f1e4; }
    c->r[3] = c->r[21] ^ 0x0065u;
    c->r[2] = c->r[21] ^ 0x0045u;
    c->r[3] = (c->r[3] < 0x00000001u) ? 1u : 0u;
    c->r[2] = (c->r[2] < 0x00000001u) ? 1u : 0u;
    c->r[3] = c->r[3] | c->r[2];
    c->r[20] = c->r[8] + c->r[3];
    c->r[17] = 0u + 0x00000002u;
L_08a1f1e4:
    { int _c = ((s32)c->r[19] < 0); c->r[4] = c->r[18] + 0u; if (_c) goto L_08a1f31c; }
    mem_w8(ram, c->r[16] + 0x00000000u, 0u);
L_08a1f1f0:
    c->r[8] = c->r[17] + 0u;
    c->r[2] = c->r[29] + 0x00000010u;
    c->r[4] = c->r[23] + 0u;
    c->r[6] = c->r[18] + 0u;
    c->r[7] = c->r[19] + 0u;
    c->r[9] = c->r[20] + 0u;
    c->r[10] = c->r[22] + 0u;
    c->r[11] = c->r[29] + 0x00000014u;
    { c->r[31] = 0x08a1f218u; mem_w32(ram, c->r[29] + 0x00000000u, c->r[2]); func_08a1fed0(c, ram); }
    c->r[17] = c->r[2] + 0u;
    c->r[3] = c->r[21] ^ 0x0067u;
    c->r[2] = c->r[21] ^ 0x0047u;
    c->r[3] = (0u < c->r[3]) ? 1u : 0u;
    c->r[2] = (0u < c->r[2]) ? 1u : 0u;
    c->r[3] = c->r[3] & c->r[2];
    { int _c = (c->r[3] != 0u); c->r[2] = 0u + 0x00000066u; if (_c) goto L_08a1f248; }
    c->r[2] = c->r[30] & 0x0001u;
    { int _c = (c->r[2] == 0u); c->r[3] = mem_r32(ram, c->r[29] + 0x00000010u); if (_c) goto L_08a1f298; }
    c->r[2] = 0u + 0x00000066u;
L_08a1f248:
    { int _c = (c->r[21] == c->r[2]); c->r[16] = c->r[17] + c->r[20]; if (_c) goto L_08a1f2d8; }
L_08a1f250:
    c->r[4] = c->r[18] + 0u;
    c->r[6] = 0u + 0u;
    c->r[7] = 0u + 0u;
    { c->r[31] = 0x08a1f264u; c->r[5] = c->r[19] + 0u; func_08a14104(c, ram); }
    c->r[3] = mem_r32(ram, c->r[29] + 0x00000010u);
    if (c->r[2] == 0u) c->r[3] = c->r[16];
    c->r[2] = (c->r[3] < c->r[16]) ? 1u : 0u;
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[3]);
    { int _c = (c->r[2] == 0u); c->r[4] = c->r[3] + 0u; if (_c) goto L_08a1f298; }
    c->r[5] = 0u + 0x00000030u;
L_08a1f280:
    c->r[3] = c->r[4] + 0x00000001u;
    c->r[2] = (c->r[3] < c->r[16]) ? 1u : 0u;
    mem_w8(ram, c->r[4] + 0x00000000u, c->r[5]);
    c->r[4] = c->r[3] + 0u;
    { int _c = (c->r[2] != 0u); mem_w32(ram, c->r[29] + 0x00000010u, c->r[3]); if (_c) goto L_08a1f280; }
L_08a1f298:
    c->r[2] = mem_r32(ram, c->r[29] + 0x00000054u);
    c->r[3] = c->r[3] - c->r[17];
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000044u);
    mem_w32(ram, c->r[2] + 0x00000000u, c->r[3]);
    c->r[2] = c->r[17] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000040u);
    c->r[23] = mem_r32(ram, c->r[29] + 0x0000003cu);
    c->r[22] = mem_r32(ram, c->r[29] + 0x00000038u);
    c->r[21] = mem_r32(ram, c->r[29] + 0x00000034u);
    c->r[20] = mem_r32(ram, c->r[29] + 0x00000030u);
    c->r[19] = mem_r32(ram, c->r[29] + 0x0000002cu);
    c->r[18] = mem_r32(ram, c->r[29] + 0x00000028u);
    c->r[17] = mem_r32(ram, c->r[29] + 0x00000024u);
    c->r[16] = mem_r32(ram, c->r[29] + 0x00000020u);
    { c->r[29] = c->r[29] + 0x00000050u; return; }
L_08a1f2d8:
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[17] + 0x00000000u);
    c->r[2] = 0u + 0x00000030u;
    if (c->r[3] == c->r[2]) { c->r[4] = c->r[18] + 0u; goto L_08a1f2f4; }
L_08a1f2e8:
    c->r[2] = mem_r32(ram, c->r[22] + 0x00000000u);
L_08a1f2ec:
    { c->r[16] = c->r[16] + c->r[2]; goto L_08a1f250; }
L_08a1f2f4:
    c->r[6] = 0u + 0u;
    c->r[7] = 0u + 0u;
    { c->r[31] = 0x08a1f304u; c->r[5] = c->r[19] + 0u; func_08a1418c(c, ram); }
    if (c->r[2] == 0u) { c->r[2] = mem_r32(ram, c->r[22] + 0x00000000u); goto L_08a1f2ec; }
    c->r[2] = 0u + 0x00000001u;
    c->r[2] = c->r[2] - c->r[20];
    { mem_w32(ram, c->r[22] + 0x00000000u, c->r[2]); goto L_08a1f2e8; }
L_08a1f31c:
    { c->r[31] = 0x08a1f324u; c->r[5] = c->r[19] + 0u; func_08a14510(c, ram); }
    c->r[18] = c->r[2] + 0u;
    c->r[19] = c->r[3] + 0u;
    c->r[2] = 0u + 0x0000002du;
    { mem_w8(ram, c->r[16] + 0x00000000u, c->r[2]); goto L_08a1f1f0; }
    return; /* fell out of func_08a1f170 */
}

/* func_08a22678  0x08a22678..0x08a226a4  44 bytes, source=sweep */
void func_08a22678(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08a22678u);
    { int _c = (c->r[5] == 0u); if (_c) goto L_08a2269c; }
    c->r[2] = mem_r32(ram, c->r[5] + 0x00000004u);
    c->r[4] = mem_r32(ram, c->r[4] + 0x0000004cu);
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[4];
    c->r[3] = mem_r32(ram, c->r[2] + 0x00000000u);
    mem_w32(ram, c->r[5] + 0x00000000u, c->r[3]);
    mem_w32(ram, c->r[2] + 0x00000000u, c->r[5]);
L_08a2269c:
    { return; }
    return; /* fell out of func_08a22678 */
}

/* func_08a24690  0x08a24690..0x08a246ac  28 bytes, source=residue */
void func_08a24690(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08a24690u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    { c->r[31] = 0x08a246a0u; func_08804040(c, ram); }
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_08a24690 */
}
