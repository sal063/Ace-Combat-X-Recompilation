#include "pspreco.h"
#include "symbols.h"
#include <math.h>

/* func_0880611c  0x0880611c..0x0880616c  80 bytes, source=sweep */
void func_0880611c(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0880611cu);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[6]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    mem_w32(ram, c->r[3] + 0x00000004u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000004u);
    mem_w32(ram, c->r[3] + 0x00000008u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    mem_w32(ram, c->r[3] + 0x0000000cu, c->r[2]);
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_0880611c */
}

/* func_088073bc  0x088073bc..0x0880746c  176 bytes, source=sweep */
void func_088073bc(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x088073bcu);
    c->r[29] = c->r[29] + 0xffffffd0u;
    mem_w32(ram, c->r[29] + 0x00000024u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000020u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[6]);
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[7]);
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[8]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[3] = c->r[2] << 10;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = c->r[3] | c->r[2];
    c->r[2] = 0xd4000000u;
    c->r[2] = c->r[3] | c->r[2];
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x08807404u; c->r[5] = c->r[2] + 0u; func_08806b6c(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[3] = c->r[2] << 10;
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = c->r[3] | c->r[2];
    c->r[2] = 0xd5000000u;
    c->r[2] = c->r[3] | c->r[2];
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x08807428u; c->r[5] = c->r[2] + 0u; func_08806b6c(c, ram); }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x08807434u; c->r[5] = 0x15000000u; func_08806b6c(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[3] = c->r[2] << 10;
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = c->r[3] | c->r[2];
    c->r[2] = 0x16000000u;
    c->r[2] = c->r[3] | c->r[2];
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x08807458u; c->r[5] = c->r[2] + 0u; func_08806b6c(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000024u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000020u);
    { c->r[29] = c->r[29] + 0x00000030u; return; }
    return; /* fell out of func_088073bc */
}

/* func_08808260  0x08808260..0x08808280  32 bytes, source=sweep */
void func_08808260(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08808260u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_08808260 */
}

/* func_0880ad94  0x0880ad94..0x0880aed0  316 bytes, source=fde */
void func_0880ad94(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0880ad94u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000018u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[30]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[16]);
    c->r[30] = c->r[29] + 0u;
    c->r[2] = 0x08a50000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00001eecu);
    c->r[2] = c->r[2] + 0x00000001u;
    c->r[1] = 0x08a50000u;
    mem_w32(ram, c->r[1] + 0x00001eecu, c->r[2]);
    c->r[2] = 0x08a50000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00001eecu);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000079u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_0880ae48; }
    c->r[2] = 0x08a80000u;
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00003c70u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_0880ae48; }
    c->r[4] = 0x08a70000u;
    c->r[4] = c->r[4] + 0xffffb34cu;
    c->r[5] = 0u + 0u;
    c->r[6] = 0u + 0u;
    { c->r[31] = 0x0880adf8u; c->r[7] = 0u + 0u; func_089d87d4(c, ram); }
    c->r[16] = c->r[2] + 0u;
    c->r[4] = 0x08a70000u;
    { c->r[31] = 0x0880ae08u; c->r[4] = c->r[4] + 0xffffb34cu; func_0880d238(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = mem_r32(ram, c->r[16] + 0x00000000u);
    c->r[2] = c->r[3] & c->r[2];
    c->r[2] = c->r[2] & 0x0008u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_0880ae48; }
    c->r[2] = 0u + 0x00000029u;
    c->r[1] = 0x08a80000u;
    mem_w8(ram, c->r[1] + 0x00003c70u, c->r[2]);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffffea50u);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00003c30u;
    c->r[5] = 0u + 0x00000001u;
    { c->r[31] = 0x0880ae48u; c->f[12] = c->f[0]; func_089b3514(c, ram); }
L_0880ae48:
    c->r[3] = 0x08a80000u;
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[3] + 0x00003c70u);
    c->r[2] = 0u + 0x00000001u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_0880ae80; }
    c->r[2] = 0u + 0xffffffffu;
    c->r[1] = 0x08a50000u;
    mem_w32(ram, c->r[1] + 0x00001eecu, c->r[2]);
    c->r[2] = 0u + 0x00000001u;
    c->r[1] = 0x08a80000u;
    mem_w8(ram, c->r[1] + 0x00003c71u, c->r[2]);
    c->r[2] = 0u + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000000u, c->r[2]); goto L_0880aeb4; }
L_0880ae80:
    c->r[2] = 0x08a80000u;
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00003c70u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000002u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_0880aea8; }
    c->r[2] = 0x08a80000u;
    c->r[2] = mem_r8(ram, c->r[2] + 0x00003c70u);
    c->r[2] = c->r[2] + 0xffffffffu;
    c->r[1] = 0x08a80000u;
    mem_w8(ram, c->r[1] + 0x00003c70u, c->r[2]);
L_0880aea8:
    { c->r[31] = 0x0880aeb0u; c->r[4] = 0u + 0u; hle_dispatch_stub(c, ram, 0x08a24d1cu); /* sceKernelPowerTick */ }
    mem_w32(ram, c->r[30] + 0x00000000u, 0u);
L_0880aeb4:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000018u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[16] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_0880ad94 */
}

/* func_0880d46c  0x0880d46c..0x0880d4a0  52 bytes, source=sweep */
void func_0880d46c(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0880d46cu);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[2] = c->r[5] + 0u;
    mem_w8(ram, c->r[30] + 0x00000004u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r8(ram, c->r[30] + 0x00000004u);
    mem_w8(ram, c->r[3] + 0x0000014bu, c->r[2]);
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_0880d46c */
}

/* func_0880e6c4  0x0880e6c4..0x0880e9d4  784 bytes, source=fde */
void func_0880e6c4(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0880e6c4u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_0880e6f0; }
    { goto L_0880e9c0; }
L_0880e6f0:
    c->r[3] = 0x08a80000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00003ca0u);
    c->r[2] = 0u + 0x00000001u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_0880e760; }
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000330u;
    { c->r[31] = 0x0880e714u; c->r[5] = 0u + 0x00000005u; func_089d9844(c, ram); }
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x0880e720u; c->r[4] = c->r[4] + 0x00000330u; func_089d9cec(c, ram); }
    c->r[2] = c->r[2] + 0x00001000u;
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000330u;
    c->r[5] = 0u + 0x000019e8u;
    { c->r[31] = 0x0880e738u; c->r[6] = c->r[2] + 0u; func_089d9768(c, ram); }
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000330u;
    c->r[5] = 0u + 0u;
    c->r[6] = 0x08a40000u;
    c->r[6] = c->r[6] + 0xffffeefcu;
    c->r[7] = 0x08a40000u;
    c->r[7] = c->r[7] + 0xffffef08u;
    c->r[8] = 0x08a40000u;
    { c->r[31] = 0x0880e760u; c->r[8] = c->r[8] + 0xffffeef0u; func_089d8dfc(c, ram); }
L_0880e760:
    c->r[2] = 0x08a80000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00003ca0u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000002u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_0880e9c0; }
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x0880e780u; c->r[4] = c->r[4] + 0x00000330u; func_089d98dc(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]);
    c->r[2] = 0x80110000u;
    c->r[2] = c->r[2] | 0x0307u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_0880e8fc; }
    c->r[2] = 0x80110000u;
    c->r[2] = c->r[2] | 0x0307u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = ((s32)c->r[2] < (s32)c->r[3]) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_0880e814; }
    c->r[2] = 0x80110000u;
    c->r[2] = c->r[2] | 0x0302u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_0880e8e0; }
    c->r[2] = 0x80110000u;
    c->r[2] = c->r[2] | 0x0302u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = ((s32)c->r[2] < (s32)c->r[3]) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_0880e7f8; }
    c->r[2] = 0x80110000u;
    c->r[2] = c->r[2] | 0x0301u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_0880e918; }
    { goto L_0880e934; }
L_0880e7f8:
    c->r[2] = 0x80110000u;
    c->r[2] = c->r[2] | 0x0306u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_0880e8c4; }
    { goto L_0880e934; }
L_0880e814:
    c->r[2] = 0u + 0xffffffffu;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_0880e948; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = ((s32)c->r[3] < (s32)0x00000000u) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_0880e84c; }
    c->r[2] = 0u + 0xfffffffeu;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_0880e8a8; }
    { goto L_0880e934; }
L_0880e84c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_0880e870; }
    c->r[2] = 0u + 0x00000001u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_0880e88c; }
    { goto L_0880e934; }
L_0880e870:
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00003ca0u;
    c->r[5] = 0x08900000u;
    { c->r[31] = 0x0880e884u; c->r[5] = c->r[5] + 0x00002cacu; func_0880f03c(c, ram); }
    { goto L_0880e948; }
L_0880e88c:
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00003ca0u;
    c->r[5] = 0x08810000u;
    { c->r[31] = 0x0880e8a0u; c->r[5] = c->r[5] + 0xffffe628u; func_0880f03c(c, ram); }
    { goto L_0880e948; }
L_0880e8a8:
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00003ca0u;
    c->r[5] = 0x08810000u;
    { c->r[31] = 0x0880e8bcu; c->r[5] = c->r[5] + 0xffffe6c4u; func_0880f03c(c, ram); }
    { goto L_0880e948; }
L_0880e8c4:
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00003ca0u;
    c->r[5] = 0x08810000u;
    { c->r[31] = 0x0880e8d8u; c->r[5] = c->r[5] + 0xffffe628u; func_0880f03c(c, ram); }
    { goto L_0880e948; }
L_0880e8e0:
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00003ca0u;
    c->r[5] = 0x08810000u;
    { c->r[31] = 0x0880e8f4u; c->r[5] = c->r[5] + 0xffffe628u; func_0880f03c(c, ram); }
    { goto L_0880e948; }
L_0880e8fc:
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00003ca0u;
    c->r[5] = 0x08810000u;
    { c->r[31] = 0x0880e910u; c->r[5] = c->r[5] + 0xffffe628u; func_0880f03c(c, ram); }
    { goto L_0880e948; }
L_0880e918:
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00003ca0u;
    c->r[5] = 0x08810000u;
    { c->r[31] = 0x0880e92cu; c->r[5] = c->r[5] + 0xffffe628u; func_0880f03c(c, ram); }
    { goto L_0880e948; }
L_0880e934:
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00003ca0u;
    c->r[5] = 0x08900000u;
    { c->r[31] = 0x0880e948u; c->r[5] = c->r[5] + 0x00002cacu; func_0880f03c(c, ram); }
L_0880e948:
    c->r[3] = 0x08a80000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00003cd4u);
    c->r[2] = 0x08900000u;
    c->r[2] = c->r[2] + 0x00002cacu;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_0880e9c0; }
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x0880e96cu; c->r[4] = c->r[4] + 0x00000330u; func_089d98dc(c, ram); }
    { int _c = (c->r[2] != 0u); if (_c) goto L_0880e9c0; }
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x0880e980u; c->r[4] = c->r[4] + 0x00000330u; func_089d9cec(c, ram); }
    c->r[2] = c->r[2] + 0x00001000u;
    { c->r[31] = 0x0880e98cu; c->r[4] = c->r[2] + 0u; func_0880de68(c, ram); }
    { int _c = (c->r[2] == 0u); if (_c) goto L_0880e9a4; }
    { c->r[31] = 0x0880e99cu; c->r[4] = 0u + 0x00000001u; func_08902cf4(c, ram); }
    { goto L_0880e9c0; }
L_0880e9a4:
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00003ca0u;
    c->r[5] = 0x08900000u;
    c->r[5] = c->r[5] + 0x00001b54u;
    c->r[6] = 0x08810000u;
    { c->r[31] = 0x0880e9c0u; c->r[6] = c->r[6] + 0xffffe5b0u; func_0880f1d4(c, ram); }
L_0880e9c0:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_0880e6c4 */
}

/* func_08811950  0x08811950..0x0881231c  2508 bytes, source=fde */
void func_08811950(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08811950u);
L_08811950:
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
    c->r[2] = c->r[30] + 0x00000010u;
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xfffff048u);
    c->r[1] = 0x08a40000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0xfffff048u);
    c->r[1] = 0x08a40000u;
    c->f[2] = mem_rf32(ram, c->r[1] + 0xfffff048u);
    c->r[1] = 0x08a40000u;
    c->f[3] = mem_rf32(ram, c->r[1] + 0xfffff048u);
    c->r[4] = c->r[2] + 0u;
    c->f[12] = c->f[0];
    c->f[13] = c->f[1];
    c->f[14] = c->f[2];
    { c->r[31] = 0x088119bcu; c->f[15] = c->f[3]; func_0880d140(c, ram); }
    c->r[2] = mem_r8(ram, c->r[30] + 0x00000004u);
    mem_w32(ram, c->r[30] + 0x00000054u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000054u);
    c->r[2] = (c->r[3] < 0x00000021u) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_08812304; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000054u);
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08a40000u;
    c->r[2] = c->r[2] + 0xfffff060u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    { u32 _t = c->r[2]; switch (_t) { case 0x08811950u: goto L_08811950; case 0x088119f4u: goto L_088119f4; case 0x08811b44u: goto L_08811b44; case 0x088120e4u: goto L_088120e4; case 0x088122c8u: goto L_088122c8; case 0x08812304u: goto L_08812304; default: recomp_trap_unknown_indirect(c, ram, 0x088119ecu, _t); return; } }
L_088119f4:
    { c->r[31] = 0x088119fcu; func_08928be0(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    mem_w8(ram, c->r[2] + 0x00000009u, 0u);
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x08811a10u; c->r[4] = c->r[4] + 0x00000af4u; func_0880d294(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = 0u + 0x00000001u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_08811a2c; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0u + 0x00000002u;
    mem_w8(ram, c->r[3] + 0x00000009u, c->r[2]);
L_08811a2c:
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00002e04u;
    { c->r[31] = 0x08811a3cu; c->r[5] = 0u + 0u; func_0880d5f8(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000020u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[2] = 0u + 0x0000000fu;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_08811a5c; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0u + 0x00000001u;
    mem_w8(ram, c->r[3] + 0x00000009u, c->r[2]);
L_08811a5c:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[2] = 0u + 0x0000000eu;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_08811a78; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0u + 0x00000002u;
    mem_w8(ram, c->r[3] + 0x00000009u, c->r[2]);
L_08811a78:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[2] = 0u + 0x00000010u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_08811ab4; }
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00002e04u;
    { c->r[31] = 0x08811a98u; c->r[5] = 0u + 0x00000001u; func_0880d5f8(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = 0u + 0x00000007u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_08811ab4; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0u + 0x00000003u;
    mem_w8(ram, c->r[3] + 0x00000009u, c->r[2]);
L_08811ab4:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[2] = 0u + 0x00000011u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_08811ad0; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0u + 0x00000004u;
    mem_w8(ram, c->r[3] + 0x00000009u, c->r[2]);
L_08811ad0:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[2] = 0u + 0x00000012u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_08811aec; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0u + 0x00000005u;
    mem_w8(ram, c->r[3] + 0x00000009u, c->r[2]);
L_08811aec:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[2] = 0u + 0x0000001du;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_08811b08; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0u + 0x00000006u;
    mem_w8(ram, c->r[3] + 0x00000009u, c->r[2]);
L_08811b08:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    mem_w8(ram, c->r[2] + 0x0000000au, 0u);
    c->r[2] = 0u + 0x000000b4u;
    c->r[1] = 0x08a50000u;
    mem_w32(ram, c->r[1] + 0x00001fa0u, c->r[2]);
    { c->r[31] = 0x08811b24u; c->r[4] = 0u + 0u; func_0880b118(c, ram); }
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000af4u;
    { c->r[31] = 0x08811b34u; c->r[5] = 0u + 0u; func_0880d2bc(c, ram); }
    { c->r[31] = 0x08811b3cu; c->r[4] = 0u + 0x00000001u; func_089679e4(c, ram); }
    { goto L_08812304; }
L_08811b44:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000008u);
    c->r[2] = 0u + 0x00000002u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_08811bb4; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000004u);
    c->r[1] = 0x08a80000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00002e40u);
    c->f[0] = c->f[1] - c->f[0];
    mem_wf32(ram, c->r[3] + 0x00000004u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000004u);
    c->f[0] = u2f(0u);
    alx_c_cond_s(c, 14, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_08811b98; }
    { goto L_08811bb4; }
L_08811b98:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    mem_w32(ram, c->r[2] + 0x00000004u, 0u);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00002e04u;
    c->r[5] = 0u + 0x00000006u;
    { c->r[31] = 0x08811bb4u; c->r[6] = 0u + 0u; func_08813280(c, ram); }
L_08811bb4:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000008u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_08811c24; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000004u);
    c->r[1] = 0x08a80000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00002e40u);
    c->f[0] = c->f[1] + c->f[0];
    mem_wf32(ram, c->r[3] + 0x00000004u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000004u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xfffff04cu);
    alx_c_cond_s(c, 14, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_08811c08; }
    { goto L_08811c24; }
L_08811c08:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xfffff04cu);
    mem_wf32(ram, c->r[2] + 0x00000004u, c->f[0]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0u + 0x00000001u;
    mem_w8(ram, c->r[3] + 0x00000008u, c->r[2]);
L_08811c24:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r8(ram, c->r[2] + 0x0000000au);
    c->r[2] = c->r[2] & 0x0001u;
    c->r[2] = c->r[2] & 0x00ffu;
    { int _c = (c->r[2] != 0u); if (_c) goto L_08812304; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000008u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_08812304; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000008u);
    c->r[2] = 0u + 0x00000002u;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_08812304; }
    { c->r[31] = 0x08811c68u; c->r[4] = 0u + 0x00000001u; func_089c5f10(c, ram); }
    { int _c = (c->r[2] == 0u); if (_c) goto L_08811c88; }
    { c->r[31] = 0x08811c78u; c->r[4] = 0u + 0u; func_0880b1a0(c, ram); }
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0u + 0x00000002u;
    { mem_w8(ram, c->r[3] + 0x00000008u, c->r[2]); goto L_08812304; }
L_08811c88:
    c->r[4] = 0x08a70000u;
    c->r[4] = c->r[4] + 0xffffb34cu;
    c->r[5] = 0u + 0u;
    c->r[6] = 0u + 0u;
    { c->r[31] = 0x08811ca0u; c->r[7] = 0u + 0u; func_089d87d4(c, ram); }
    c->r[16] = c->r[2] + 0u;
    c->r[4] = 0x08a70000u;
    { c->r[31] = 0x08811cb0u; c->r[4] = c->r[4] + 0xffffb34cu; func_0880d238(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = mem_r32(ram, c->r[16] + 0x00000004u);
    c->r[2] = c->r[3] & c->r[2];
    c->r[2] = c->r[2] & 0x0010u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_08811d70; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000009u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_08811d38; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000009u);
    c->r[2] = 0u + 0x00000004u;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_08811d38; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000009u);
    c->r[2] = c->r[2] + 0xffffffffu;
    mem_w8(ram, c->r[3] + 0x00000009u, c->r[2]);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xfffff050u);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0xffffc930u;
    c->r[5] = 0u + 0u;
    c->r[6] = 0x04000000u;
    c->r[6] = c->r[6] | 0x000cu;
    c->f[12] = c->f[0];
    c->r[7] = 0u + 0u;
    c->r[8] = 0u + 0u;
    { c->r[31] = 0x08811d30u; c->r[9] = 0u + 0xffffffffu; func_089f5f2c(c, ram); }
    { goto L_08812304; }
L_08811d38:
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xfffff054u);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0xffffc930u;
    c->r[5] = 0u + 0u;
    c->r[6] = 0x04000000u;
    c->r[6] = c->r[6] | 0x0008u;
    c->f[12] = c->f[0];
    c->r[7] = 0u + 0u;
    c->r[8] = 0u + 0u;
    { c->r[31] = 0x08811d68u; c->r[9] = 0u + 0xffffffffu; func_089f5f2c(c, ram); }
    { goto L_08812304; }
L_08811d70:
    c->r[4] = 0x08a70000u;
    c->r[4] = c->r[4] + 0xffffb34cu;
    c->r[5] = 0u + 0u;
    c->r[6] = 0u + 0u;
    { c->r[31] = 0x08811d88u; c->r[7] = 0u + 0u; func_089d87d4(c, ram); }
    c->r[16] = c->r[2] + 0u;
    c->r[4] = 0x08a70000u;
    { c->r[31] = 0x08811d98u; c->r[4] = c->r[4] + 0xffffb34cu; func_0880d238(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = mem_r32(ram, c->r[16] + 0x00000004u);
    c->r[2] = c->r[3] & c->r[2];
    c->r[2] = c->r[2] & 0x0040u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_08811e5c; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000009u);
    c->r[2] = 0u + 0x00000003u;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_08811e24; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000009u);
    c->r[2] = 0u + 0x00000006u;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_08811e24; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000009u);
    c->r[2] = c->r[2] + 0x00000001u;
    mem_w8(ram, c->r[3] + 0x00000009u, c->r[2]);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xfffff050u);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0xffffc930u;
    c->r[5] = 0u + 0u;
    c->r[6] = 0x04000000u;
    c->r[6] = c->r[6] | 0x000cu;
    c->f[12] = c->f[0];
    c->r[7] = 0u + 0u;
    c->r[8] = 0u + 0u;
    { c->r[31] = 0x08811e1cu; c->r[9] = 0u + 0xffffffffu; func_089f5f2c(c, ram); }
    { goto L_08812304; }
L_08811e24:
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xfffff054u);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0xffffc930u;
    c->r[5] = 0u + 0u;
    c->r[6] = 0x04000000u;
    c->r[6] = c->r[6] | 0x0008u;
    c->f[12] = c->f[0];
    c->r[7] = 0u + 0u;
    c->r[8] = 0u + 0u;
    { c->r[31] = 0x08811e54u; c->r[9] = 0u + 0xffffffffu; func_089f5f2c(c, ram); }
    { goto L_08812304; }
L_08811e5c:
    c->r[4] = 0x08a70000u;
    c->r[4] = c->r[4] + 0xffffb34cu;
    c->r[5] = 0u + 0u;
    c->r[6] = 0u + 0u;
    { c->r[31] = 0x08811e74u; c->r[7] = 0u + 0u; func_089d87d4(c, ram); }
    c->r[16] = c->r[2] + 0u;
    c->r[4] = 0x08a70000u;
    { c->r[31] = 0x08811e84u; c->r[4] = c->r[4] + 0xffffb34cu; func_0880d238(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = mem_r32(ram, c->r[16] + 0x00000004u);
    c->r[2] = c->r[3] & c->r[2];
    c->r[2] = c->r[2] & 0x0080u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_08811f34; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000009u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000004u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_08811efc; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000009u);
    c->r[2] = c->r[2] + 0xfffffffcu;
    mem_w8(ram, c->r[3] + 0x00000009u, c->r[2]);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xfffff050u);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0xffffc930u;
    c->r[5] = 0u + 0u;
    c->r[6] = 0x04000000u;
    c->r[6] = c->r[6] | 0x000cu;
    c->f[12] = c->f[0];
    c->r[7] = 0u + 0u;
    c->r[8] = 0u + 0u;
    { c->r[31] = 0x08811ef4u; c->r[9] = 0u + 0xffffffffu; func_089f5f2c(c, ram); }
    { goto L_08812304; }
L_08811efc:
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xfffff054u);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0xffffc930u;
    c->r[5] = 0u + 0u;
    c->r[6] = 0x04000000u;
    c->r[6] = c->r[6] | 0x0008u;
    c->f[12] = c->f[0];
    c->r[7] = 0u + 0u;
    c->r[8] = 0u + 0u;
    { c->r[31] = 0x08811f2cu; c->r[9] = 0u + 0xffffffffu; func_089f5f2c(c, ram); }
    { goto L_08812304; }
L_08811f34:
    c->r[4] = 0x08a70000u;
    c->r[4] = c->r[4] + 0xffffb34cu;
    c->r[5] = 0u + 0u;
    c->r[6] = 0u + 0u;
    { c->r[31] = 0x08811f4cu; c->r[7] = 0u + 0u; func_089d87d4(c, ram); }
    c->r[16] = c->r[2] + 0u;
    c->r[4] = 0x08a70000u;
    { c->r[31] = 0x08811f5cu; c->r[4] = c->r[4] + 0xffffb34cu; func_0880d238(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = mem_r32(ram, c->r[16] + 0x00000004u);
    c->r[2] = c->r[3] & c->r[2];
    c->r[2] = c->r[2] & 0x0020u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_0881200c; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000009u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000003u) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_08811fd4; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000009u);
    c->r[2] = c->r[2] + 0x00000004u;
    mem_w8(ram, c->r[3] + 0x00000009u, c->r[2]);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xfffff050u);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0xffffc930u;
    c->r[5] = 0u + 0u;
    c->r[6] = 0x04000000u;
    c->r[6] = c->r[6] | 0x000cu;
    c->f[12] = c->f[0];
    c->r[7] = 0u + 0u;
    c->r[8] = 0u + 0u;
    { c->r[31] = 0x08811fccu; c->r[9] = 0u + 0xffffffffu; func_089f5f2c(c, ram); }
    { goto L_08812304; }
L_08811fd4:
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xfffff054u);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0xffffc930u;
    c->r[5] = 0u + 0u;
    c->r[6] = 0x04000000u;
    c->r[6] = c->r[6] | 0x0008u;
    c->f[12] = c->f[0];
    c->r[7] = 0u + 0u;
    c->r[8] = 0u + 0u;
    { c->r[31] = 0x08812004u; c->r[9] = 0u + 0xffffffffu; func_089f5f2c(c, ram); }
    { goto L_08812304; }
L_0881200c:
    c->r[4] = 0x08a70000u;
    c->r[4] = c->r[4] + 0xffffb34cu;
    c->r[5] = 0u + 0u;
    c->r[6] = 0u + 0u;
    { c->r[31] = 0x08812024u; c->r[7] = 0u + 0u; func_089d87d4(c, ram); }
    c->r[16] = c->r[2] + 0u;
    c->r[4] = 0x08a70000u;
    { c->r[31] = 0x08812034u; c->r[4] = c->r[4] + 0xffffb34cu; func_0880d238(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = mem_r32(ram, c->r[16] + 0x00000004u);
    c->r[2] = c->r[3] & c->r[2];
    c->r[2] = c->r[2] & 0x4000u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_08812094; }
    c->r[4] = 0x08a70000u;
    c->r[4] = c->r[4] + 0xffffb34cu;
    c->r[5] = 0u + 0u;
    c->r[6] = 0u + 0u;
    { c->r[31] = 0x08812064u; c->r[7] = 0u + 0u; func_089d87d4(c, ram); }
    c->r[16] = c->r[2] + 0u;
    c->r[4] = 0x08a70000u;
    { c->r[31] = 0x08812074u; c->r[4] = c->r[4] + 0xffffb34cu; func_0880d238(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = mem_r32(ram, c->r[16] + 0x00000004u);
    c->r[2] = c->r[3] & c->r[2];
    c->r[2] = c->r[2] & 0x2000u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_08812094; }
    { goto L_08812304; }
L_08812094:
    { c->r[31] = 0x0881209cu; c->r[4] = 0u + 0u; func_0880b1a0(c, ram); }
    c->r[1] = 0x08a50000u;
    mem_w32(ram, c->r[1] + 0x00001fa0u, 0u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xfffff054u);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0xffffc930u;
    c->r[5] = 0u + 0u;
    c->r[6] = 0x04000000u;
    c->r[6] = c->r[6] | 0x000du;
    c->f[12] = c->f[0];
    c->r[7] = 0u + 0u;
    c->r[8] = 0u + 0u;
    { c->r[31] = 0x088120d4u; c->r[9] = 0u + 0xffffffffu; func_089f5f2c(c, ram); }
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0u + 0x00000001u;
    { mem_w8(ram, c->r[3] + 0x0000000au, c->r[2]); goto L_08812304; }
L_088120e4:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r8(ram, c->r[2] + 0x0000000au);
    c->r[2] = c->r[2] & 0x0002u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_08812100; }
    { goto L_08812304; }
L_08812100:
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xfffff058u);
    c->r[4] = 0x08a70000u;
    c->r[4] = c->r[4] + 0xffffb640u;
    { c->r[31] = 0x08812118u; c->f[12] = c->f[0]; func_089f1210(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000004u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xfffff04cu);
    c->f[1] = c->f[1] / c->f[0];
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000009u);
    c->r[1] = 0x08a50000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00001fa0u);
    c->f[0] = (f32)(s32)f2u(c->f[0]);
    c->f[12] = c->f[1];
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x08812150u; c->f[13] = c->f[0]; func_089276f8(c, ram); }
    { int _c = (c->r[2] == 0u); if (_c) goto L_08812250; }
    c->r[2] = 0x08a40000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0xfffff020u);
    mem_w32(ram, c->r[30] + 0x00000030u, c->r[2]);
    c->r[2] = 0x08a40000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0xfffff024u);
    mem_w32(ram, c->r[30] + 0x00000034u, c->r[2]);
    c->r[2] = 0x08a40000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0xfffff028u);
    mem_w32(ram, c->r[30] + 0x00000038u, c->r[2]);
    c->r[2] = 0x08a40000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0xfffff02cu);
    mem_w32(ram, c->r[30] + 0x0000003cu, c->r[2]);
    c->r[2] = 0x08a40000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0xfffff030u);
    mem_w32(ram, c->r[30] + 0x00000040u, c->r[2]);
    c->r[2] = 0x08a40000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0xfffff034u);
    mem_w32(ram, c->r[30] + 0x00000044u, c->r[2]);
    c->r[2] = 0x08a40000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0xfffff038u);
    mem_w32(ram, c->r[30] + 0x00000048u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000009u);
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[30];
    c->r[2] = c->r[2] + 0x00000030u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    mem_w32(ram, c->r[30] + 0x00000050u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000009u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_088121f8; }
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000af4u;
    { c->r[31] = 0x088121e8u; c->r[5] = 0u + 0u; func_0880d2bc(c, ram); }
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000af4u;
    { c->r[31] = 0x088121f8u; c->r[5] = 0u + 0u; func_0880d34c(c, ram); }
L_088121f8:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000009u);
    c->r[2] = 0u + 0x00000002u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_0881222c; }
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000af4u;
    { c->r[31] = 0x0881221cu; c->r[5] = 0u + 0x00000001u; func_0880d2bc(c, ram); }
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000af4u;
    { c->r[31] = 0x0881222cu; c->r[5] = 0u + 0u; func_0880d34c(c, ram); }
L_0881222c:
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[30] + 0x00000050u);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00002e04u;
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x08812244u; c->r[6] = 0u + 0u; func_08813280(c, ram); }
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0u + 0x00000002u;
    mem_w8(ram, c->r[3] + 0x0000000au, c->r[2]);
L_08812250:
    c->r[2] = 0u + 0x000000b4u;
    c->r[1] = 0x08a50000u;
    { c->r[31] = 0x08812260u; mem_w32(ram, c->r[1] + 0x00001fa0u, c->r[2]); func_08902ea0(c, ram); }
    c->r[4] = 0x08a70000u;
    { c->r[31] = 0x0881226cu; c->r[4] = c->r[4] + 0xffffb640u; func_089f147c(c, ram); }
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xfffff05cu);
    c->r[4] = 0x08a70000u;
    c->r[4] = c->r[4] + 0xffffb640u;
    { c->r[31] = 0x08812284u; c->f[12] = c->f[0]; func_089f1210(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000009u);
    c->r[3] = c->r[2] << 1;
    c->r[2] = 0x08a50000u;
    c->r[2] = c->r[2] + 0x00001fa4u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x00000000u);
    c->r[4] = 0x08a40000u;
    c->r[4] = c->r[4] + 0xfffff03cu;
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x088122b4u; c->r[6] = 0u + 0x00000001u; func_08928cb8(c, ram); }
    c->r[4] = 0x08a70000u;
    { c->r[31] = 0x088122c0u; c->r[4] = c->r[4] + 0xffffb640u; func_089f147c(c, ram); }
    { goto L_08812304; }
L_088122c8:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_08812304; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    mem_w32(ram, c->r[30] + 0x00000050u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000050u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x00000004u);
    c->r[2] = 0u + 0x00000003u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_08812304; }
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00002e04u;
    c->r[5] = 0u + 0x00000006u;
    { c->r[31] = 0x08812304u; c->r[6] = 0u + 0u; func_08813280(c, ram); }
L_08812304:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000068u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000064u);
    c->r[16] = mem_r32(ram, c->r[29] + 0x00000060u);
    { c->r[29] = c->r[29] + 0x00000070u; return; }
    return; /* fell out of func_08811950 */
}

/* func_088145dc  0x088145dc..0x08814604  40 bytes, source=sweep */
void func_088145dc(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x088145dcu);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    mem_w16(ram, c->r[2] + 0x00000152u, 0u);
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_088145dc */
}

/* func_08819764  0x08819764..0x08819834  208 bytes, source=sweep */
void func_08819764(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08819764u);
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
    return; /* fell out of func_08819764 */
}

/* func_0881e4b4  0x0881e4b4..0x0881e654  416 bytes, source=fde */
void func_0881e4b4(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0881e4b4u);
    c->r[29] = c->r[29] + 0xfffffed0u;
    mem_w32(ram, c->r[29] + 0x00000128u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000124u, c->r[30]);
    mem_w32(ram, c->r[29] + 0x00000120u, c->r[16]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000008u);
    { int _c = ((s32)c->r[2] <= 0); if (_c) goto L_0881e4f8; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000008u);
    c->r[2] = c->r[2] + 0xffffffffu;
    { mem_w8(ram, c->r[3] + 0x00000008u, c->r[2]); goto L_0881e63c; }
L_0881e4f8:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000017u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_0881e5c8; }
    { c->r[31] = 0x0881e510u; c->r[4] = 0u + 0x00000001u; func_089d7c4c(c, ram); }
    { int _c = (c->r[2] != 0u); if (_c) goto L_0881e5c8; }
    mem_w8(ram, c->r[30] + 0x00000008u, 0u);
L_0881e51c:
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[30] + 0x00000008u);
    c->r[2] = ((s32)c->r[2] < (s32)0x0000000au) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_0881e534; }
    { goto L_0881e560; }
L_0881e534:
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[30] + 0x00000008u);
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08a80000u;
    c->r[2] = c->r[2] + 0x00003e04u;
    c->r[3] = c->r[3] + c->r[2];
    c->r[2] = 0u + 0xffffffffu;
    mem_w32(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r8(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w8(ram, c->r[30] + 0x00000008u, c->r[2]); goto L_0881e51c; }
L_0881e560:
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x0881e56cu; c->r[4] = c->r[4] + 0x00000af4u; func_0880d410(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = c->r[30] + 0x00000010u;
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0x08a40000u;
    c->r[5] = c->r[5] + 0xfffff840u;
    { c->r[31] = 0x0881e588u; c->r[6] = c->r[3] + 0u; func_08a1ad34(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x0000000au);
    c->r[4] = 0x08a60000u;
    c->r[4] = c->r[4] + 0x00005260u;
    { c->r[31] = 0x0881e5a0u; c->r[5] = c->r[2] + 0u; func_089d7208(c, ram); }
    c->r[2] = c->r[30] + 0x00000010u;
    c->r[4] = 0x08a60000u;
    c->r[4] = c->r[4] + 0x00005260u;
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x0881e5b8u; c->r[6] = 0u + 0u; func_089d7b60(c, ram); }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = 0u + 0x00000001u;
    { mem_w8(ram, c->r[3] + 0x00000017u, c->r[2]); goto L_0881e63c; }
L_0881e5c8:
    { c->r[31] = 0x0881e5d0u; c->r[4] = 0u + 0x00000001u; func_089d7c4c(c, ram); }
    { int _c = (c->r[2] != 0u); if (_c) goto L_0881e63c; }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = 0u + 0x00000082u;
    c->r[6] = 0u + 0xffffffffu;
    c->r[7] = 0u + 0xffffffffu;
    c->r[8] = 0u + 0u;
    c->r[9] = 0u + 0u;
    { c->r[31] = 0x0881e5f8u; c->r[10] = 0u + 0u; func_0892fcac(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000110u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000110u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_0881e62c; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[16] = c->r[2] + 0x00000020u;
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000ac8u;
    { c->r[31] = 0x0881e620u; c->r[5] = mem_r32(ram, c->r[30] + 0x00000110u); func_089cb780(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000114u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000114u);
    mem_w32(ram, c->r[16] + 0x00000000u, c->r[2]);
L_0881e62c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    mem_w8(ram, c->r[2] + 0x00000017u, 0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    mem_w8(ram, c->r[2] + 0x00000016u, 0u);
L_0881e63c:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000128u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000124u);
    c->r[16] = mem_r32(ram, c->r[29] + 0x00000120u);
    { c->r[29] = c->r[29] + 0x00000130u; return; }
    return; /* fell out of func_0881e4b4 */
}

/* func_0882172c  0x0882172c..0x08821760  52 bytes, source=sweep */
void func_0882172c(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0882172cu);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[2] = c->r[5] + 0u;
    mem_w8(ram, c->r[30] + 0x00000004u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r8(ram, c->r[30] + 0x00000004u);
    mem_w8(ram, c->r[3] + 0x00000154u, c->r[2]);
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_0882172c */
}

/* func_08826be8  0x08826be8..0x08826c10  40 bytes, source=sweep */
void func_08826be8(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08826be8u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00001b94u);
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_08826be8 */
}

/* func_08828f48  0x08828f48..0x0882925c  788 bytes, source=fde */
void func_08828f48(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08828f48u);
    c->r[29] = c->r[29] + 0xfffffdd0u;
    mem_w32(ram, c->r[29] + 0x00000224u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000220u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    c->r[2] = c->r[30] + 0x00000010u;
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0u + 0x00000200u;
    { c->r[31] = 0x08828f74u; c->r[6] = mem_r32(ram, c->r[30] + 0x00000000u); func_08a06664(c, ram); }
    c->r[2] = c->r[30] + 0x00000010u;
    mem_w32(ram, c->r[30] + 0x00000210u, c->r[2]);
    mem_w32(ram, c->r[30] + 0x00000214u, 0u);
L_08828f80:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000214u);
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[30];
    c->r[2] = c->r[2] + 0x00000010u;
    c->r[2] = mem_r16(ram, c->r[2] + 0x00000000u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_08828fa4; }
    { goto L_08829248; }
L_08828fa4:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000214u);
    c->r[3] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000210u);
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000000u);
    mem_w8(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000214u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = c->r[2] + 0x00000001u;
    mem_w8(ram, c->r[2] + 0x00000000u, 0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000214u);
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[30];
    c->r[2] = c->r[2] + 0x00000010u;
    c->r[2] = mem_r16(ram, c->r[2] + 0x00000000u);
    mem_w32(ram, c->r[30] + 0x00000218u, c->r[2]);
    c->r[2] = 0u + 0x0000201au;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000218u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_08829218; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000218u);
    c->r[2] = ((s32)c->r[3] < (s32)0x0000201bu) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_08829078; }
    c->r[2] = 0u + 0x00000178u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000218u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_08829188; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000218u);
    c->r[2] = ((s32)c->r[3] < (s32)0x00000179u) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_08829050; }
    c->r[2] = 0u + 0x00000152u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000218u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_08829170; }
    c->r[2] = 0u + 0x00000153u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000218u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_08829158; }
    { goto L_0882922c; }
L_08829050:
    c->r[2] = 0u + 0x00002018u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000218u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_088291e8; }
    c->r[2] = 0u + 0x00002019u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000218u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_08829200; }
    { goto L_0882922c; }
L_08829078:
    c->r[2] = 0u + 0x0000201eu;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000218u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_088291d0; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000218u);
    c->r[2] = ((s32)c->r[3] < (s32)0x0000201fu) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_088290c0; }
    c->r[2] = 0u + 0x0000201cu;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000218u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_088291a0; }
    c->r[2] = 0u + 0x0000201du;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000218u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_088291b8; }
    { goto L_0882922c; }
L_088290c0:
    c->r[2] = 0u + 0x0000203au;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000218u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_08829140; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000218u);
    c->r[2] = ((s32)c->r[3] < (s32)0x0000203bu) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_088290f8; }
    c->r[2] = 0u + 0x00002039u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000218u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_08829128; }
    { goto L_0882922c; }
L_088290f8:
    c->r[2] = 0u + 0x000020acu;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000218u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_08829110; }
    { goto L_0882922c; }
L_08829110:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000214u);
    c->r[3] = c->r[3] + c->r[2];
    c->r[2] = 0u + 0xffffff80u;
    { mem_w8(ram, c->r[3] + 0x00000000u, c->r[2]); goto L_0882922c; }
L_08829128:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000214u);
    c->r[3] = c->r[3] + c->r[2];
    c->r[2] = 0u + 0xffffff8bu;
    { mem_w8(ram, c->r[3] + 0x00000000u, c->r[2]); goto L_0882922c; }
L_08829140:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000214u);
    c->r[3] = c->r[3] + c->r[2];
    c->r[2] = 0u + 0xffffff9bu;
    { mem_w8(ram, c->r[3] + 0x00000000u, c->r[2]); goto L_0882922c; }
L_08829158:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000214u);
    c->r[3] = c->r[3] + c->r[2];
    c->r[2] = 0u + 0xffffff9cu;
    { mem_w8(ram, c->r[3] + 0x00000000u, c->r[2]); goto L_0882922c; }
L_08829170:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000214u);
    c->r[3] = c->r[3] + c->r[2];
    c->r[2] = 0u + 0xffffff8cu;
    { mem_w8(ram, c->r[3] + 0x00000000u, c->r[2]); goto L_0882922c; }
L_08829188:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000214u);
    c->r[3] = c->r[3] + c->r[2];
    c->r[2] = 0u + 0xffffff9fu;
    { mem_w8(ram, c->r[3] + 0x00000000u, c->r[2]); goto L_0882922c; }
L_088291a0:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000214u);
    c->r[3] = c->r[3] + c->r[2];
    c->r[2] = 0u + 0xffffff93u;
    { mem_w8(ram, c->r[3] + 0x00000000u, c->r[2]); goto L_0882922c; }
L_088291b8:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000214u);
    c->r[3] = c->r[3] + c->r[2];
    c->r[2] = 0u + 0xffffff94u;
    { mem_w8(ram, c->r[3] + 0x00000000u, c->r[2]); goto L_0882922c; }
L_088291d0:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000214u);
    c->r[3] = c->r[3] + c->r[2];
    c->r[2] = 0u + 0xffffff84u;
    { mem_w8(ram, c->r[3] + 0x00000000u, c->r[2]); goto L_0882922c; }
L_088291e8:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000214u);
    c->r[3] = c->r[3] + c->r[2];
    c->r[2] = 0u + 0xffffff91u;
    { mem_w8(ram, c->r[3] + 0x00000000u, c->r[2]); goto L_0882922c; }
L_08829200:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000214u);
    c->r[3] = c->r[3] + c->r[2];
    c->r[2] = 0u + 0xffffff92u;
    { mem_w8(ram, c->r[3] + 0x00000000u, c->r[2]); goto L_0882922c; }
L_08829218:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000214u);
    c->r[3] = c->r[3] + c->r[2];
    c->r[2] = 0u + 0xffffff82u;
    mem_w8(ram, c->r[3] + 0x00000000u, c->r[2]);
L_0882922c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000214u);
    c->r[2] = c->r[2] + 0x00000001u;
    mem_w32(ram, c->r[30] + 0x00000214u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000210u);
    c->r[2] = c->r[2] + 0x00000002u;
    { mem_w32(ram, c->r[30] + 0x00000210u, c->r[2]); goto L_08828f80; }
L_08829248:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000224u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000220u);
    { c->r[29] = c->r[29] + 0x00000230u; return; }
    return; /* fell out of func_08828f48 */
}

/* func_0882c8a8  0x0882c8a8..0x0882c98c  228 bytes, source=fde */
void func_0882c8a8(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0882c8a8u);
    c->r[29] = c->r[29] + 0xffffffd0u;
    mem_w32(ram, c->r[29] + 0x00000024u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000020u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x000000e0u;
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[2] + 0x00000004u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000ac8u;
    { c->r[31] = 0x0882c8e4u; c->r[5] = c->r[2] + 0u; func_089cb820(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_0882c978; }
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x0882c900u; c->r[4] = c->r[4] + 0x00000af4u; func_0882ea34(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x0000002eu);
    c->r[2] = c->r[3] + c->r[2];
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000028u);
    c->r[3] = c->r[3] + c->r[2];
    c->r[2] = 0x08a80000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000e38u);
    c->r[2] = c->r[2] + c->r[3];
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = 0x3b9a0000u;
    c->r[2] = c->r[2] | 0xc9ffu;
    c->r[2] = ((s32)c->r[2] < (s32)c->r[3]) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_0882c958; }
    c->r[2] = 0x3b9a0000u;
    c->r[2] = c->r[2] | 0xc9ffu;
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]);
L_0882c958:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[5] = 0x00300000u;
    { c->r[31] = 0x0882c968u; c->r[6] = 0u + 0u; func_08930178(c, ram); }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000010u);
    { c->r[31] = 0x0882c978u; c->r[6] = 0u + 0u; func_08933428(c, ram); }
L_0882c978:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000024u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000020u);
    { c->r[29] = c->r[29] + 0x00000030u; return; }
    return; /* fell out of func_0882c8a8 */
}

/* func_088313c8  0x088313c8..0x08831418  80 bytes, source=fde */
void func_088313c8(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x088313c8u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = 0u + 0x00000004u;
    c->r[6] = 0u + 0x00000007u;
    { c->r[31] = 0x088313f0u; c->r[7] = 0u + 0x00000001u; func_088310d4(c, ram); }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = 0u + 0x00000003u;
    c->r[6] = 0u + 0x00000006u;
    { c->r[31] = 0x08831404u; c->r[7] = 0u + 0x00000001u; func_08831230(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_088313c8 */
}

/* func_0883306c  0x0883306c..0x08833144  216 bytes, source=fde */
void func_0883306c(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0883306cu);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000008u;
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x08833094u; c->r[5] = 0u + 0u; func_0893b904(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000008u;
    { c->r[31] = 0x088330a4u; c->r[4] = c->r[2] + 0u; func_08938064(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000008u;
    { c->r[31] = 0x088330b4u; c->r[4] = c->r[2] + 0u; func_08938218(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000008u;
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0u + 0xffffffffu;
    { c->r[31] = 0x088330ccu; c->r[6] = 0u + 0x00000001u; func_0893a73c(c, ram); }
    { c->r[31] = 0x088330d4u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u); func_0882f418(c, ram); }
    { c->r[31] = 0x088330dcu; c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u); func_08830474(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000014u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000015u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_08833130; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000024u);
    c->r[3] = c->r[2] + 0x00000008u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000014u);
    c->r[2] = c->r[2] + 0xffffffecu;
    c->r[4] = c->r[3] + 0u;
    { c->r[31] = 0x08833114u; c->r[5] = c->r[2] + 0u; func_08937aec(c, ram); }
    { int _c = (c->r[2] != 0u); if (_c) goto L_08833130; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000008u;
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x08833130u; c->r[5] = 0u + 0x00000003u; func_08937a50(c, ram); }
L_08833130:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_0883306c */
}

/* func_08835260  0x08835260..0x088352d0  112 bytes, source=sweep */
void func_08835260(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08835260u);
    c->r[29] = c->r[29] + 0xffffffe0u;
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
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000029u);
    mem_w8(ram, c->r[3] + 0x00000011u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r8(ram, c->r[2] + 0x0000002au);
    mem_w8(ram, c->r[3] + 0x00000012u, c->r[2]);
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_08835260 */
}

/* func_08839968  0x08839968..0x0883a204  2204 bytes, source=fde */
void func_08839968(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08839968u);
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
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00001c50u);
    c->r[1] = 0x08a40000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0x00001c50u);
    c->r[1] = 0x08a40000u;
    c->f[2] = mem_rf32(ram, c->r[1] + 0x00001c50u);
    c->r[1] = 0x08a40000u;
    c->f[3] = mem_rf32(ram, c->r[1] + 0x00001c50u);
    c->r[4] = c->r[2] + 0u;
    c->f[12] = c->f[0];
    c->f[13] = c->f[1];
    c->f[14] = c->f[2];
    { c->r[31] = 0x088399d4u; c->f[15] = c->f[3]; func_0880d140(c, ram); }
    c->r[2] = mem_r8(ram, c->r[30] + 0x00000004u);
    mem_w32(ram, c->r[30] + 0x00000074u, c->r[2]);
    c->r[2] = 0u + 0x00000001u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000074u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_08839f34; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000074u);
    c->r[2] = ((s32)c->r[3] < (s32)0x00000002u) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_08839a10; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000074u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_08839a28; }
    { goto L_0883a1ec; }
L_08839a10:
    c->r[2] = 0u + 0x00000002u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000074u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_0883a1c4; }
    { goto L_0883a1ec; }
L_08839a28:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000010u);
    mem_w32(ram, c->r[30] + 0x00000020u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_08839a54; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[3] = mem_r8(ram, c->r[3] + 0x00000004u);
    { mem_w8(ram, c->r[2] + 0x00000000u, c->r[3]); goto L_08839a60; }
L_08839a54:
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0u + 0xffffffffu;
    mem_w8(ram, c->r[3] + 0x00000000u, c->r[2]);
L_08839a60:
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x08839a6cu; c->r[4] = c->r[4] + 0x00000af4u; func_0880810c(c, ram); }
    { c->r[31] = 0x08839a74u; c->r[4] = c->r[2] + 0u; func_0896a084(c, ram); }
    { c->r[31] = 0x08839a7cu; c->r[4] = 0u + 0x00000003u; func_08924620(c, ram); }
    { c->r[31] = 0x08839a84u; func_088bf634(c, ram); }
    { c->r[31] = 0x08839a8cu; func_088c4e64(c, ram); }
    c->r[2] = c->r[30] + 0x00000030u;
    mem_w32(ram, c->r[30] + 0x00000050u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000050u);
    mem_w32(ram, c->r[30] + 0x00000054u, c->r[2]);
    c->r[2] = 0u + 0x00000001u;
    mem_w32(ram, c->r[30] + 0x00000058u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000058u);
    c->r[2] = 0u + 0xffffffffu;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_08839ae4; }
L_08839ab4:
    { c->r[31] = 0x08839abcu; c->r[4] = mem_r32(ram, c->r[30] + 0x00000054u); func_08808240(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000054u);
    c->r[2] = c->r[2] + 0x00000010u;
    mem_w32(ram, c->r[30] + 0x00000054u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000058u);
    c->r[2] = c->r[2] + 0xffffffffu;
    c->r[3] = c->r[2] + 0u;
    mem_w32(ram, c->r[30] + 0x00000058u, c->r[3]);
    c->r[2] = 0u + 0xffffffffu;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_08839ab4; }
L_08839ae4:
    { c->r[31] = 0x08839aecu; func_08966c64(c, ram); }
    { int _c = (c->r[2] != 0u); if (_c) goto L_08839b94; }
    c->r[2] = c->r[30] + 0x00000060u;
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00001c54u);
    c->r[1] = 0x08a40000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0x00001c54u);
    c->r[4] = c->r[2] + 0u;
    c->f[12] = c->f[0];
    c->f[13] = u2f(0u);
    c->f[14] = c->f[1];
    c->f[15] = u2f(0u);
    { c->r[31] = 0x08839b24u; func_0880d140(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000060u);
    mem_w32(ram, c->r[30] + 0x00000030u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000064u);
    mem_w32(ram, c->r[30] + 0x00000034u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000068u);
    mem_w32(ram, c->r[30] + 0x00000038u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000006cu);
    mem_w32(ram, c->r[30] + 0x0000003cu, c->r[2]);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00001c58u);
    mem_wf32(ram, c->r[30] + 0x00000034u, c->f[0]);
    c->r[2] = c->r[30] + 0x00000060u;
    c->r[4] = c->r[2] + 0u;
    c->f[12] = u2f(0u);
    c->f[13] = u2f(0u);
    c->f[14] = u2f(0u);
    c->f[15] = u2f(0u);
    { c->r[31] = 0x08839b70u; func_0880d140(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000060u);
    mem_w32(ram, c->r[30] + 0x00000040u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000064u);
    mem_w32(ram, c->r[30] + 0x00000044u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000068u);
    mem_w32(ram, c->r[30] + 0x00000048u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000006cu);
    { mem_w32(ram, c->r[30] + 0x0000004cu, c->r[2]); goto L_08839d2c; }
L_08839b94:
    c->r[2] = 0x08aa0000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x000052ecu);
    mem_w32(ram, c->r[30] + 0x00000058u, c->r[2]);
    c->r[2] = 0u + 0x00000002u;
    mem_w32(ram, c->r[30] + 0x00000054u, c->r[2]);
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x08839bb4u; c->r[4] = c->r[4] + 0x00000af4u; func_0881a2a4(c, ram); }
    c->r[3] = c->r[2] << 1;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000054u);
    c->r[2] = c->r[2] + c->r[3];
    mem_w32(ram, c->r[30] + 0x00000054u, c->r[2]);
    c->r[4] = 0u + 0u;
    { c->r[31] = 0x08839bd0u; c->r[5] = 0u + 0x00000002u; func_0883a204(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000054u);
    c->r[2] = c->r[2] + c->r[3];
    mem_w32(ram, c->r[30] + 0x00000054u, c->r[2]);
    c->r[4] = c->r[30] + 0x00000060u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000054u);
    c->r[2] = 0u + 0x0000002cu;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[3] = c->lo;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000058u);
    c->r[6] = c->r[3] + c->r[2];
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000054u);
    c->r[2] = 0u + 0x0000002cu;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[3] = c->lo;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000058u);
    c->r[5] = c->r[3] + c->r[2];
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000054u);
    c->r[2] = 0u + 0x0000002cu;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[3] = c->lo;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000058u);
    c->r[2] = c->r[3] + c->r[2];
    c->f[12] = mem_rf32(ram, c->r[6] + 0x00000004u);
    c->f[13] = mem_rf32(ram, c->r[5] + 0x00000008u);
    c->f[14] = mem_rf32(ram, c->r[2] + 0x0000000cu);
    c->f[15] = u2f(0u);
    { c->r[31] = 0x08839c44u; func_0880d140(c, ram); }
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
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00001c54u);
    c->r[1] = 0x08a40000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0x00001c54u);
    c->r[4] = c->r[2] + 0u;
    c->f[12] = c->f[0];
    c->f[13] = u2f(0u);
    c->f[14] = c->f[1];
    c->f[15] = u2f(0u);
    { c->r[31] = 0x08839c94u; func_0880d140(c, ram); }
    c->r[3] = c->r[30] + 0x00000060u;
    c->r[2] = c->r[30] + 0x00000030u;
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x08839ca8u; c->r[5] = c->r[3] + 0u; func_0880d1a0(c, ram); }
    c->r[4] = c->r[30] + 0x00000060u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000054u);
    c->r[2] = 0u + 0x0000002cu;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[3] = c->lo;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000058u);
    c->r[6] = c->r[3] + c->r[2];
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000054u);
    c->r[2] = 0u + 0x0000002cu;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[3] = c->lo;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000058u);
    c->r[5] = c->r[3] + c->r[2];
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000054u);
    c->r[2] = 0u + 0x0000002cu;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[3] = c->lo;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000058u);
    c->r[2] = c->r[3] + c->r[2];
    c->f[12] = mem_rf32(ram, c->r[6] + 0x00000010u);
    c->f[13] = mem_rf32(ram, c->r[5] + 0x00000014u);
    c->f[14] = mem_rf32(ram, c->r[2] + 0x00000018u);
    c->f[15] = u2f(0u);
    { c->r[31] = 0x08839d0cu; func_0880d140(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000060u);
    mem_w32(ram, c->r[30] + 0x00000040u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000064u);
    mem_w32(ram, c->r[30] + 0x00000044u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000068u);
    mem_w32(ram, c->r[30] + 0x00000048u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000006cu);
    mem_w32(ram, c->r[30] + 0x0000004cu, c->r[2]);
L_08839d2c:
    c->r[4] = 0u + 0x0000003eu;
    c->r[5] = 0u + 0u;
    c->r[6] = 0u + 0u;
    c->r[7] = 0u + 0u;
    c->r[8] = 0u + 0u;
    { c->r[31] = 0x08839d48u; c->r[9] = 0u + 0u; func_089c6bec(c, ram); }
    c->r[2] = c->r[30] + 0x00000030u;
    c->r[4] = 0u + 0x00000026u;
    c->r[5] = 0u + 0x00000002u;
    c->r[6] = 0u + 0u;
    c->r[7] = 0u + 0u;
    c->r[8] = 0u + 0u;
    { c->r[31] = 0x08839d68u; c->r[9] = c->r[2] + 0u; func_089c6bec(c, ram); }
    c->r[4] = 0u + 0x00000027u;
    c->r[5] = 0u + 0u;
    c->r[6] = 0u + 0u;
    c->r[7] = 0u + 0u;
    c->r[8] = 0u + 0u;
    { c->r[31] = 0x08839d84u; c->r[9] = 0u + 0u; func_089c6bec(c, ram); }
    c->r[4] = 0u + 0x00000028u;
    c->r[5] = 0u + 0u;
    c->r[6] = 0u + 0u;
    c->r[7] = 0u + 0u;
    c->r[8] = 0u + 0u;
    { c->r[31] = 0x08839da0u; c->r[9] = 0u + 0u; func_089c6bec(c, ram); }
    c->r[4] = 0u + 0x0000002au;
    c->r[5] = 0u + 0u;
    c->r[6] = 0u + 0u;
    c->r[7] = 0u + 0u;
    c->r[8] = 0u + 0u;
    { c->r[31] = 0x08839dbcu; c->r[9] = 0u + 0u; func_089c6bec(c, ram); }
    c->r[4] = 0u + 0x00000049u;
    c->r[5] = 0u + 0u;
    c->r[6] = 0u + 0u;
    c->r[7] = 0u + 0u;
    c->r[8] = 0u + 0u;
    { c->r[31] = 0x08839dd8u; c->r[9] = 0u + 0u; func_089c6bec(c, ram); }
    { c->r[31] = 0x08839de0u; func_0880b1dc(c, ram); }
    c->r[16] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[4] = 0u + 0x00000068u;
    c->r[5] = 0u + 0u;
    c->r[6] = 0u + 0u;
    c->r[7] = 0u + 0u;
    c->r[8] = 0u + 0u;
    { c->r[31] = 0x08839e00u; c->r[9] = 0u + 0u; func_089c6bec(c, ram); }
    mem_w32(ram, c->r[16] + 0x00000004u, c->r[2]);
    c->r[4] = 0u + 0x00000069u;
    c->r[5] = 0u + 0u;
    c->r[6] = 0u + 0u;
    c->r[7] = 0u + 0u;
    c->r[8] = 0u + 0u;
    { c->r[31] = 0x08839e20u; c->r[9] = 0u + 0u; func_089c6bec(c, ram); }
    { c->r[31] = 0x08839e28u; func_0884dee8(c, ram); }
    c->r[4] = 0u + 0x00000067u;
    c->r[5] = 0u + 0u;
    c->r[6] = 0u + 0u;
    c->r[7] = 0u + 0u;
    c->r[8] = 0u + 0u;
    { c->r[31] = 0x08839e44u; c->r[9] = 0u + 0u; func_089c6bec(c, ram); }
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00002e04u;
    { c->r[31] = 0x08839e54u; c->r[5] = 0u + 0u; func_0880d5f8(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = 0u + 0x00000016u;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_08839e6c; }
    c->r[1] = 0x08aa0000u;
    mem_w8(ram, c->r[1] + 0x00004963u, 0u);
L_08839e6c:
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x08839e78u; c->r[4] = c->r[4] + 0x00000af4u; func_0880d4fc(c, ram); }
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000af4u;
    { c->r[31] = 0x08839e88u; c->r[5] = 0u + 0x00000001u; func_0880d524(c, ram); }
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000af4u;
    { c->r[31] = 0x08839e98u; c->r[5] = 0u + 0u; func_088216f8(c, ram); }
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x08839ea4u; c->r[4] = c->r[4] + 0x00000af4u; func_0880810c(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000070u, c->r[2]);
    c->r[2] = 0u + 0x00000004u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000070u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_08839f0c; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000070u);
    c->r[2] = ((s32)c->r[3] < (s32)0x00000005u) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_08839ee0; }
    c->r[2] = 0u + 0x00000001u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000070u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_08839ef8; }
    { goto L_0883a1ec; }
L_08839ee0:
    c->r[2] = 0u + 0x00000005u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000070u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_08839f20; }
    { goto L_0883a1ec; }
L_08839ef8:
    c->r[4] = 0x08aa0000u;
    { c->r[31] = 0x08839f04u; c->r[4] = mem_r32(ram, c->r[4] + 0x00004a2cu); func_08969d74(c, ram); }
    { goto L_0883a1ec; }
L_08839f0c:
    c->r[4] = 0x08aa0000u;
    { c->r[31] = 0x08839f18u; c->r[4] = mem_r32(ram, c->r[4] + 0x00004a2cu); func_08969d74(c, ram); }
    { goto L_0883a1ec; }
L_08839f20:
    c->r[4] = 0x08aa0000u;
    { c->r[31] = 0x08839f2cu; c->r[4] = mem_r32(ram, c->r[4] + 0x00004a34u); func_08969d74(c, ram); }
    { goto L_0883a1ec; }
L_08839f34:
    { c->r[31] = 0x08839f3cu; func_08847338(c, ram); }
    c->r[1] = 0x08aa0000u;
    mem_w8(ram, c->r[1] + 0x000049c9u, c->r[2]);
    c->r[3] = 0x08aa0000u;
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[3] + 0x000049c9u);
    c->r[2] = 0u + 0x00000002u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_08839f7c; }
    { c->r[31] = 0x08839f60u; func_0893443c(c, ram); }
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00001c5cu);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00003c30u;
    c->r[5] = 0u + 0x00000002u;
    { c->r[31] = 0x08839f7cu; c->f[12] = c->f[0]; func_089b3514(c, ram); }
L_08839f7c:
    c->r[3] = 0x08a90000u;
    c->r[3] = (u32)(s32)(s16)mem_r16(ram, c->r[3] + 0xffffb9fcu);
    c->r[2] = 0u + 0x00000001u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_08839f98; }
    { c->r[31] = 0x08839f98u; func_0884dfd8(c, ram); }
L_08839f98:
    c->r[2] = c->r[30] + 0x00000060u;
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00002e04u;
    { c->r[31] = 0x08839facu; c->r[5] = c->r[2] + 0u; func_08813174(c, ram); }
    { c->r[31] = 0x08839fb4u; func_0895b58c(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000058u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000058u);
    c->r[2] = c->r[2] & 0x3e00u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_0883a028; }
    c->r[2] = 0u + 0x00000002u;
    mem_w8(ram, c->r[30] + 0x00000060u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000000u);
    mem_w8(ram, c->r[30] + 0x00000064u, c->r[2]);
    c->r[2] = c->r[30] + 0x00000060u;
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00002e04u;
    c->r[5] = 0u + 0x00000016u;
    { c->r[31] = 0x08839ff4u; c->r[6] = c->r[2] + 0u; func_08813280(c, ram); }
    c->r[2] = 0x08aa0000u;
    c->r[2] = mem_r8(ram, c->r[2] + 0x00004963u);
    c->r[2] = c->r[2] + 0x00000001u;
    c->r[1] = 0x08aa0000u;
    mem_w8(ram, c->r[1] + 0x00004963u, c->r[2]);
    { c->r[31] = 0x0883a010u; c->r[4] = 0u + 0u; func_0880b09c(c, ram); }
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0xffffc930u;
    { c->r[31] = 0x0883a020u; c->r[5] = 0u + 0x00000001u; func_089f742c(c, ram); }
    { goto L_0883a118; }
L_0883a028:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000058u);
    c->r[2] = c->r[2] & 0x0100u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_0883a118; }
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x0883a044u; c->r[4] = c->r[4] + 0x00000af4u; func_0880810c(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = 0u + 0x00000002u;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_0883a078; }
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x0883a060u; c->r[4] = c->r[4] + 0x00000af4u; func_0880810c(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = 0u + 0x00000004u;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_0883a078; }
    { goto L_0883a0a4; }
L_0883a078:
    { c->r[31] = 0x0883a080u; func_08969ac8(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000000u);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00002e04u;
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x0883a09cu; c->r[6] = 0u + 0u; func_08813280(c, ram); }
    { goto L_0883a110; }
L_0883a0a4:
    c->r[2] = 0x08aa0000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00004964u);
    c->r[2] = c->r[2] & 0x4000u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_0883a0e4; }
    { c->r[31] = 0x0883a0c0u; func_08969ac8(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000000u);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00002e04u;
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x0883a0dcu; c->r[6] = 0u + 0u; func_08813280(c, ram); }
    { goto L_0883a110; }
L_0883a0e4:
    c->r[2] = 0u + 0x00000002u;
    mem_w8(ram, c->r[30] + 0x00000060u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000000u);
    mem_w8(ram, c->r[30] + 0x00000064u, c->r[2]);
    c->r[2] = c->r[30] + 0x00000060u;
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00002e04u;
    c->r[5] = 0u + 0x00000017u;
    { c->r[31] = 0x0883a110u; c->r[6] = c->r[2] + 0u; func_08813280(c, ram); }
L_0883a110:
    c->r[1] = 0x08aa0000u;
    mem_w8(ram, c->r[1] + 0x00004963u, 0u);
L_0883a118:
    c->r[4] = 0x08a70000u;
    c->r[4] = c->r[4] + 0xffffb34cu;
    c->r[5] = 0u + 0u;
    c->r[6] = 0u + 0u;
    { c->r[31] = 0x0883a130u; c->r[7] = 0u + 0u; func_089d87d4(c, ram); }
    c->r[16] = c->r[2] + 0u;
    c->r[4] = 0x08a70000u;
    { c->r[31] = 0x0883a140u; c->r[4] = c->r[4] + 0xffffb34cu; func_0880d238(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = mem_r32(ram, c->r[16] + 0x00000004u);
    c->r[2] = c->r[3] & c->r[2];
    c->r[2] = c->r[2] & 0x0008u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_0883a1ec; }
    c->r[4] = 0x08a70000u;
    c->r[4] = c->r[4] + 0xffffb34cu;
    c->r[5] = 0u + 0u;
    c->r[6] = 0u + 0u;
    { c->r[31] = 0x0883a170u; c->r[7] = 0u + 0u; func_089d87d4(c, ram); }
    c->r[16] = c->r[2] + 0u;
    c->r[4] = 0x08a70000u;
    { c->r[31] = 0x0883a180u; c->r[4] = c->r[4] + 0xffffb34cu; func_0880d238(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = mem_r32(ram, c->r[16] + 0x00000000u);
    c->r[2] = c->r[3] & c->r[2];
    c->r[2] = c->r[2] & 0x0100u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_0883a1ec; }
    c->r[4] = 0x08a70000u;
    c->r[4] = c->r[4] + 0xffffb34cu;
    c->r[5] = 0u + 0u;
    c->r[6] = 0u + 0u;
    { c->r[31] = 0x0883a1b0u; c->r[7] = 0u + 0u; func_089d87d4(c, ram); }
    c->r[4] = 0x08a70000u;
    { c->r[31] = 0x0883a1bcu; c->r[4] = c->r[4] + 0xffffb34cu; func_0880d238(c, ram); }
    { goto L_0883a1ec; }
L_0883a1c4:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000004u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_0883a1e4; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[4] = mem_r32(ram, c->r[2] + 0x00000004u);
    { c->r[31] = 0x0883a1e4u; c->r[5] = 0u + 0x00000002u; func_0880d260(c, ram); }
L_0883a1e4:
    { c->r[31] = 0x0883a1ecu; func_0884dfd8(c, ram); }
L_0883a1ec:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000088u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000084u);
    c->r[16] = mem_r32(ram, c->r[29] + 0x00000080u);
    { c->r[29] = c->r[29] + 0x00000090u; return; }
    return; /* fell out of func_08839968 */
}

/* func_0883c2f8  0x0883c2f8..0x0883c3ec  244 bytes, source=fde */
void func_0883c2f8(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0883c2f8u);
    c->r[29] = c->r[29] + 0xffffffd0u;
    mem_w32(ram, c->r[29] + 0x00000024u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000020u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[6]);
    { c->r[31] = 0x0883c31cu; c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u); func_089241c8(c, ram); }
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
    mem_w32(ram, c->r[30] + 0x00000010u, 0u);
L_0883c324:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000000u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_0883c33c; }
    { goto L_0883c378; }
L_0883c33c:
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
    { mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]); goto L_0883c324; }
L_0883c378:
    mem_w32(ram, c->r[30] + 0x00000010u, 0u);
L_0883c37c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000000u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_0883c394; }
    { goto L_0883c3d0; }
L_0883c394:
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
    { mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]); goto L_0883c37c; }
L_0883c3d0:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    mem_w8(ram, c->r[2] + 0x00000000u, 0u);
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000024u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000020u);
    { c->r[29] = c->r[29] + 0x00000030u; return; }
    return; /* fell out of func_0883c2f8 */
}

/* func_08845af8  0x08845af8..0x08845c8c  404 bytes, source=fde */
void func_08845af8(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08845af8u);
    c->r[29] = c->r[29] + 0xffffffc0u;
    mem_w32(ram, c->r[29] + 0x00000034u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000030u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[3] = c->r[5] + 0u;
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[6]);
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[7]);
    c->r[2] = c->r[8] + 0u;
    mem_w8(ram, c->r[30] + 0x00000004u, c->r[3]);
    mem_w8(ram, c->r[30] + 0x00000010u, c->r[2]);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[30] + 0x00000010u);
    mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]);
    c->r[2] = 0u + 0x0000000bu;
    mem_w32(ram, c->r[30] + 0x0000001cu, c->r[2]);
    mem_w32(ram, c->r[30] + 0x00000014u, 0u);
L_08845b38:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = ((s32)c->r[2] < (s32)0x0000000cu) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_08845b50; }
    { goto L_08845c64; }
L_08845b50:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = ((s32)c->r[2] < (s32)0x0000000cu) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_08845b64; }
    mem_w32(ram, c->r[30] + 0x00000018u, 0u);
L_08845b64:
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 2;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x08845b8cu; c->r[5] = c->r[2] + 0u; func_08820588(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000020u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    { int _c = (c->r[2] != 0u); if (_c) goto L_08845bd0; }
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[30] + 0x00000020u);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000af4u;
    c->r[5] = 0u + 0u;
    c->r[6] = c->r[2] + 0u;
    { c->r[31] = 0x08845bb8u; c->r[7] = 0u + 0x00000002u; func_088463b4(c, ram); }
    { int _c = (c->r[2] == 0u); if (_c) goto L_08845c48; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000024u, c->r[2]); goto L_08845c74; }
L_08845bd0:
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[30] + 0x00000020u);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000af4u;
    c->r[5] = 0u + 0u;
    c->r[6] = c->r[2] + 0u;
    { c->r[31] = 0x08845becu; c->r[7] = 0u + 0x00000002u; func_088463b4(c, ram); }
    { int _c = (c->r[2] == 0u); if (_c) goto L_08845c14; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = ((s32)c->r[2] < (s32)c->r[3]) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_08845c48; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    { mem_w32(ram, c->r[30] + 0x0000001cu, c->r[2]); goto L_08845c48; }
L_08845c14:
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[30] + 0x00000020u);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000af4u;
    c->r[5] = 0u + 0u;
    c->r[6] = c->r[2] + 0u;
    { c->r[31] = 0x08845c30u; c->r[7] = 0u + 0x00000001u; func_088463b4(c, ram); }
    { int _c = (c->r[2] == 0u); if (_c) goto L_08845c48; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000024u, c->r[2]); goto L_08845c74; }
L_08845c48:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = c->r[2] + 0x00000001u;
    mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]); goto L_08845b38; }
L_08845c64:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = c->r[2] + 0x00000001u;
    c->r[2] = 0u - c->r[2];
    mem_w32(ram, c->r[30] + 0x00000024u, c->r[2]);
L_08845c74:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000024u);
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000034u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000030u);
    { c->r[29] = c->r[29] + 0x00000040u; return; }
    return; /* fell out of func_08845af8 */
}

/* func_088475b4  0x088475b4..0x088478e0  812 bytes, source=fde */
void func_088475b4(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x088475b4u);
    c->r[29] = c->r[29] + 0xffffffc0u;
    mem_w32(ram, c->r[29] + 0x00000034u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000030u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[6]);
    c->r[2] = 0x08a80000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00004f10u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_088478cc; }
    c->r[2] = 0u + 0x00000001u;
    c->r[1] = 0x08a80000u;
    mem_w32(ram, c->r[1] + 0x00004f10u, c->r[2]);
    c->r[1] = 0x08a80000u;
    mem_w32(ram, c->r[1] + 0x00004f14u, 0u);
    c->r[1] = 0x08a80000u;
    mem_w32(ram, c->r[1] + 0x00004f18u, 0u);
    c->r[2] = 0x08a80000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00002f90u);
    c->r[1] = 0x08a80000u;
    mem_w32(ram, c->r[1] + 0x00004f1cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[1] = 0x08a80000u;
    mem_w32(ram, c->r[1] + 0x00004f20u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[1] = 0x08a80000u;
    mem_w32(ram, c->r[1] + 0x00004f24u, c->r[2]);
    c->r[1] = 0x08a80000u;
    mem_w32(ram, c->r[1] + 0x00004f28u, 0u);
    c->r[1] = 0x08a80000u;
    mem_w32(ram, c->r[1] + 0x00004f2cu, 0u);
    c->r[1] = 0x08a80000u;
    mem_w32(ram, c->r[1] + 0x00004f30u, 0u);
    c->r[1] = 0x08a80000u;
    mem_w32(ram, c->r[1] + 0x00004f34u, 0u);
    c->r[2] = 0x08a90000u;
    c->r[2] = c->r[2] + 0xffff89f0u;
    c->r[1] = 0x08a80000u;
    mem_w32(ram, c->r[1] + 0x00002f90u, c->r[2]);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00002134u);
    c->r[1] = 0x08a80000u;
    mem_wf32(ram, c->r[1] + 0x00004f3cu, c->f[0]);
    c->r[1] = 0x08a80000u;
    mem_wf32(ram, c->r[1] + 0x00004f38u, c->f[0]);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00004f40u;
    c->r[5] = 0u + 0u;
    { c->r[31] = 0x08847680u; c->r[6] = 0u + 0x00002800u; func_08a19ec4(c, ram); }
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00007740u;
    c->r[5] = 0u + 0u;
    { c->r[31] = 0x08847694u; c->r[6] = 0u + 0x00000e00u; func_08a19ec4(c, ram); }
    c->r[4] = 0x08a90000u;
    c->r[4] = c->r[4] + 0xffff8968u;
    c->r[5] = 0u + 0x000000ffu;
    { c->r[31] = 0x088476a8u; c->r[6] = 0u + 0x00000040u; func_08a19ec4(c, ram); }
    c->r[4] = 0x08a90000u;
    { c->r[31] = 0x088476b4u; c->r[4] = c->r[4] + 0xffff89b0u; func_08808280(c, ram); }
    { c->r[31] = 0x088476bcu; c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u); func_08849b20(c, ram); }
    { c->r[31] = 0x088476c4u; func_08935cb0(c, ram); }
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0xffffc930u;
    { c->r[31] = 0x088476d4u; c->r[5] = 0u + 0x00000001u; func_089f742c(c, ram); }
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00002138u);
    c->r[1] = 0x08a80000u;
    mem_wf32(ram, c->r[1] + 0x00002e4cu, c->f[0]);
    c->r[4] = 0x08a90000u;
    c->r[4] = c->r[4] + 0xffff8540u;
    c->r[5] = 0x08a90000u;
    c->r[5] = c->r[5] + 0xffffb9c0u;
    { c->r[31] = 0x088476fcu; c->r[6] = 0u + 0x000003f0u; func_08a19db8(c, ram); }
    mem_w32(ram, c->r[30] + 0x0000000cu, 0u);
L_08847700:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000006u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_08847718; }
    { goto L_08847764; }
L_08847718:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08a90000u;
    c->r[2] = c->r[2] + 0xffff85a0u;
    c->r[4] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[4] + 0x00000000u);
    c->r[3] = 0u + 0u;
    c->r[2] = alx_ins(c->r[2], c->r[3], 12u, 31u);
    mem_w32(ram, c->r[4] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = c->r[2] << 1;
    c->r[2] = 0x08a90000u;
    c->r[2] = c->r[2] + 0xffff8550u;
    c->r[2] = c->r[3] + c->r[2];
    mem_w16(ram, c->r[2] + 0x00000008u, 0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]); goto L_08847700; }
L_08847764:
    c->r[2] = 0x08a80000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00004f24u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000002u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_08847784; }
    c->r[4] = 0x08a90000u;
    { c->r[31] = 0x08847784u; c->r[4] = c->r[4] + 0xffff8930u; func_0884d850(c, ram); }
L_08847784:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[5] = 0x08a40000u;
    { c->r[31] = 0x08847794u; c->r[5] = c->r[5] + 0x000020ccu; func_08a1adb4(c, ram); }
    { int _c = (c->r[2] == 0u); if (_c) goto L_088477fc; }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[5] = 0x08a40000u;
    { c->r[31] = 0x088477acu; c->r[5] = c->r[5] + 0x000020d8u; func_08a1adb4(c, ram); }
    { int _c = (c->r[2] == 0u); if (_c) goto L_088477fc; }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[5] = 0x08a40000u;
    { c->r[31] = 0x088477c4u; c->r[5] = c->r[5] + 0x000020f0u; func_08a1adb4(c, ram); }
    { int _c = (c->r[2] == 0u); if (_c) goto L_088477fc; }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[5] = 0x08a40000u;
    { c->r[31] = 0x088477dcu; c->r[5] = c->r[5] + 0x000020fcu; func_08a1adb4(c, ram); }
    { int _c = (c->r[2] == 0u); if (_c) goto L_088477fc; }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[5] = 0x08a40000u;
    { c->r[31] = 0x088477f4u; c->r[5] = c->r[5] + 0x00002114u; func_08a1adb4(c, ram); }
    { int _c = (c->r[2] != 0u); if (_c) goto L_08847824; }
L_088477fc:
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0xffffc930u;
    c->r[5] = 0x31000000u;
    c->r[5] = c->r[5] | 0x004du;
    c->r[6] = 0u + 0u;
    c->r[7] = 0u + 0u;
    { c->r[31] = 0x0884781cu; c->r[8] = 0u + 0u; func_089f6924(c, ram); }
    c->r[1] = 0x08a90000u;
    mem_w32(ram, c->r[1] + 0xffff8968u, c->r[2]);
L_08847824:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[5] = 0x08a40000u;
    { c->r[31] = 0x08847834u; c->r[5] = c->r[5] + 0x00002108u; func_08a1adb4(c, ram); }
    { int _c = (c->r[2] != 0u); if (_c) goto L_08847864; }
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0xffffc930u;
    c->r[5] = 0x31000000u;
    c->r[5] = c->r[5] | 0x003fu;
    c->r[6] = 0u + 0u;
    c->r[7] = 0u + 0u;
    { c->r[31] = 0x0884785cu; c->r[8] = 0u + 0u; func_089f6924(c, ram); }
    c->r[1] = 0x08a90000u;
    mem_w32(ram, c->r[1] + 0xffff8968u, c->r[2]);
L_08847864:
    c->r[2] = c->r[30] + 0x00000010u;
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x08847874u; c->r[5] = mem_r32(ram, c->r[30] + 0x00000004u); func_08a1af70(c, ram); }
    c->r[2] = c->r[30] + 0x00000010u;
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x08847884u; c->r[5] = 0u + 0x0000002eu; func_08a1b13c(c, ram); }
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0x08a40000u;
    { c->r[31] = 0x08847894u; c->r[5] = c->r[5] + 0x0000212cu; func_08a1af70(c, ram); }
    c->r[2] = c->r[30] + 0x00000010u;
    { c->r[31] = 0x088478a0u; c->r[4] = c->r[2] + 0u; func_0884ba90(c, ram); }
    c->r[2] = 0x08a80000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00004f2cu);
    { int _c = (c->r[2] == 0u); if (_c) goto L_088478cc; }
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0xffffc930u;
    { c->r[31] = 0x088478c0u; c->r[5] = 0u + 0x00000001u; func_089f76e8(c, ram); }
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x088478ccu; c->r[4] = c->r[4] + 0xffffc930u; func_089f7a08(c, ram); }
L_088478cc:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000034u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000030u);
    { c->r[29] = c->r[29] + 0x00000040u; return; }
    return; /* fell out of func_088475b4 */
}

/* func_0884c858  0x0884c858..0x0884c8f0  152 bytes, source=sweep */
void func_0884c858(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0884c858u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_wf32(ram, c->r[30] + 0x00000004u, c->f[12]);
    { c->r[31] = 0x0884c878u; c->f[12] = mem_rf32(ram, c->r[30] + 0x00000004u); func_08a136f8(c, ram); }
    c->r[4] = c->r[2] + 0u;
    c->r[5] = c->r[3] + 0u;
    c->r[6] = 0x08a40000u;
    c->r[6] = mem_r32(ram, c->r[6] + 0x00002620u);
    c->r[7] = 0x08a40000u;
    { c->r[31] = 0x0884c894u; c->r[7] = mem_r32(ram, c->r[7] + 0x00002624u); func_08a13ee0(c, ram); }
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x0884c8a0u; c->r[5] = c->r[3] + 0u; func_08a14588(c, ram); }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[8] = f2u(c->f[0]);
    vfpu_exec(c, ram, 0x48e80005u); /* mtv */
    vfpu_exec(c, ram, 0xd0120525u); /* vsin.s */
    vfpu_exec(c, ram, 0xd0130545u); /* vcos.s */
    vfpu_exec(c, ram, 0xf38380a0u); /* vmidt.q */
    vfpu_exec(c, ram, 0xd0004500u); /* vmov.s */
    vfpu_exec(c, ram, 0xd0022540u); /* vneg.s */
    vfpu_exec(c, ram, 0xd0002502u); /* vmov.s */
    vfpu_exec(c, ram, 0xd0004542u); /* vmov.s */
    vfpu_exec(c, ram, 0xf8600000u); /* sv.q */
    vfpu_exec(c, ram, 0xf8610010u); /* sv.q */
    vfpu_exec(c, ram, 0xf8620020u); /* sv.q */
    vfpu_exec(c, ram, 0xf8630030u); /* sv.q */
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_0884c858 */
}

/* func_0884e084  0x0884e084..0x0884e0b4  48 bytes, source=sweep */
void func_0884e084(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0884e084u);
    c->r[29] = c->r[29] + 0xfffffff0u;
    mem_w32(ram, c->r[29] + 0x00000004u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000000u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    c->r[4] = 0x08a90000u;
    { c->r[31] = 0x0884e0a0u; c->r[4] = c->r[4] + 0xffff8e58u; func_0885a72c(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000004u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000000u);
    { c->r[29] = c->r[29] + 0x00000010u; return; }
    return; /* fell out of func_0884e084 */
}

/* func_08854398  0x08854398..0x08854480  232 bytes, source=fde */
void func_08854398(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08854398u);
    c->r[29] = c->r[29] + 0xffffffd0u;
    mem_w32(ram, c->r[29] + 0x00000024u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000020u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[2] = c->r[5] + 0u;
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[6]);
    mem_w8(ram, c->r[30] + 0x00000004u, c->r[2]);
    c->r[3] = mem_r8(ram, c->r[30] + 0x00000004u);
    c->r[2] = 0u + 0x00000001u;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_088543d0; }
    { goto L_0885446c; }
L_088543d0:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000064u);
    c->r[2] = mem_r8(ram, c->r[2] + 0x0000000au);
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
    mem_w32(ram, c->r[30] + 0x00000010u, 0u);
L_088543e4:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = ((s32)c->r[2] < (s32)c->r[3]) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_08854400; }
    { goto L_0885443c; }
L_08854400:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000050u;
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00002984u);
    c->r[1] = 0x08a40000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0x00002984u);
    c->r[4] = c->r[2] + 0u;
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->f[12] = c->f[0];
    { c->r[31] = 0x0885442cu; c->f[13] = c->f[1]; func_089b5804(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]); goto L_088543e4; }
L_0885443c:
    { c->r[31] = 0x08854444u; func_08854c94(c, ram); }
    { int _c = (c->r[2] != 0u); if (_c) goto L_08854460; }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x08854458u; c->r[5] = 0u + 0x00000020u; func_0884d1ec(c, ram); }
    { goto L_0885446c; }
L_08854460:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x0885446cu; c->r[5] = 0u + 0x00000020u; func_0884d1b0(c, ram); }
L_0885446c:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000024u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000020u);
    { c->r[29] = c->r[29] + 0x00000030u; return; }
    return; /* fell out of func_08854398 */
}

/* func_08858a84  0x08858a84..0x08858aa8  36 bytes, source=sweep */
void func_08858a84(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08858a84u);
    c->r[29] = c->r[29] + 0xfffffff0u;
    mem_w32(ram, c->r[29] + 0x00000000u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    c->r[2] = 0x08a90000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0xffff8c84u);
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000000u);
    { c->r[29] = c->r[29] + 0x00000010u; return; }
    return; /* fell out of func_08858a84 */
}

/* func_0885a7cc  0x0885a7cc..0x0885a7fc  48 bytes, source=sweep */
void func_0885a7cc(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0885a7ccu);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    mem_w32(ram, c->r[3] + 0x00000014u, c->r[2]);
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_0885a7cc */
}

/* func_0885b96c  0x0885b96c..0x0885c2dc  2416 bytes, source=fde */
void func_0885b96c(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0885b96cu);
    c->r[29] = c->r[29] + 0xffffff80u;
    mem_w32(ram, c->r[29] + 0x00000074u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000070u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00001cd8u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_0885c2c8; }
    { c->r[31] = 0x0885b998u; func_089c3a94(c, ram); }
    { int _c = (c->r[2] != 0u); if (_c) goto L_0885c2c8; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[4] = mem_r16(ram, c->r[2] + 0x0000002cu);
    c->r[2] = 0xaaaa0000u;
    c->r[2] = c->r[2] | 0xaaabu;
    alx_multu(c, c->r[4], c->r[2]);
    c->r[2] = c->hi;
    c->r[3] = c->r[2] >> 2;
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[4] - c->r[2];
    c->r[2] = c->r[2] & 0xffffu;
    { int _c = (c->r[2] == 0u); if (_c) goto L_0885b9f4; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00001cdcu);
    { int _c = (c->r[2] != 0u); if (_c) goto L_0885b9f4; }
    { goto L_0885c1fc; }
L_0885b9f4:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    mem_w32(ram, c->r[2] + 0x00001cdcu, 0u);
    c->r[2] = 0x08a90000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0xffffb404u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_0885ba18; }
    c->r[2] = 0x08a90000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0xffffb404u);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[2]);
L_0885ba18:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    mem_w32(ram, c->r[2] + 0x00000024u, 0u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000004u);
    mem_w32(ram, c->r[3] + 0x00000008u, c->r[2]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x0885ba3cu; c->r[5] = 0u + 0x0000000eu; func_0885cf70(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000008u);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = 0x08a80000u;
    c->r[2] = mem_r8(ram, c->r[2] + 0x00002e6cu);
    mem_w8(ram, c->r[3] + 0x00000004u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    mem_w8(ram, c->r[2] + 0x00000002u, 0u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = 0u + 0x0000000eu;
    mem_w16(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[2] + 0x00000006u;
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0x08a80000u;
    { c->r[31] = 0x0885ba84u; c->r[5] = mem_r32(ram, c->r[5] + 0x00002ed8u); func_088625dc(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = c->r[2] + 0x00000006u;
    c->r[2] = 0x08a80000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00002ed8u);
    c->r[2] = c->r[2] + 0x00000020u;
    c->r[4] = c->r[3] + 0u;
    { c->r[31] = 0x0885baa4u; c->r[5] = c->r[2] + 0u; func_08862344(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = c->r[2] + 0x00000006u;
    c->r[2] = 0x08a80000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00002ed8u);
    c->r[2] = c->r[2] + 0x00000040u;
    c->r[4] = c->r[3] + 0u;
    { c->r[31] = 0x0885bac4u; c->r[5] = c->r[2] + 0u; func_08862420(c, ram); }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r8(ram, c->r[2] + 0x0000000du);
    mem_w8(ram, c->r[3] + 0x00000639u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000639u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_0885bb0c; }
    mem_w32(ram, c->r[30] + 0x00000008u, 0u);
    c->r[2] = 0u + 0x00000001u;
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    alx_div(c, c->r[3], c->r[2]);
    c->r[3] = c->lo;
    if (c->r[2] == 0u) { recomp_break(c, ram, 0x0885bb04u, 0x7u); goto L_0885bb08; }
L_0885bb08:
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[3]);
L_0885bb0c:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000024u);
    c->r[2] = c->r[2] + 0x0000000eu;
    mem_w32(ram, c->r[3] + 0x00000024u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000028u);
    c->r[2] = c->r[2] + 0xfffffff2u;
    mem_w32(ram, c->r[3] + 0x00000028u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000004u);
    c->r[2] = c->r[2] + 0x0000000eu;
    mem_w32(ram, c->r[3] + 0x00000004u, c->r[2]);
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x0885bb54u; c->r[4] = c->r[4] + 0x00000ac8u; func_089cb8ac(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]);
L_0885bb58:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_0885bb6c; }
    { goto L_0885bd54; }
L_0885bb6c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000018u);
    c->r[2] = 0u + 0x00000001u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_0885bd3c; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[3] = mem_r16(ram, c->r[2] + 0x0000001au);
    c->r[2] = 0u + 0x00000003u;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_0885bbb0; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[3] = mem_r16(ram, c->r[2] + 0x0000001au);
    c->r[2] = 0u + 0x00000005u;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_0885bbb0; }
    { goto L_0885bd3c; }
L_0885bbb0:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x00000088u);
    c->r[2] = 0x08000000u;
    c->r[2] = c->r[3] & c->r[2];
    { int _c = (c->r[2] == 0u); if (_c) goto L_0885bd3c; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = mem_r8(ram, c->r[2] + 0x000000b2u);
    mem_w8(ram, c->r[30] + 0x00000014u, c->r[2]);
    c->r[2] = mem_r8(ram, c->r[30] + 0x00000014u);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x0885bbe8u; c->r[6] = mem_r32(ram, c->r[30] + 0x00000010u); func_0885c4f0(c, ram); }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r8(ram, c->r[30] + 0x00000014u);
    c->r[2] = c->r[2] + c->r[3];
    c->r[2] = c->r[2] + 0x00000530u;
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000009u);
    mem_w8(ram, c->r[30] + 0x00000027u, c->r[2]);
    c->r[3] = c->r[30] + 0x00000020u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = c->r[2] + 0x00000020u;
    c->r[4] = c->r[3] + 0u;
    { c->r[31] = 0x0885bc18u; c->r[5] = c->r[2] + 0u; func_08862344(c, ram); }
    c->r[3] = c->r[30] + 0x00000020u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = c->r[2] + 0x00000040u;
    c->r[4] = c->r[3] + 0u;
    { c->r[31] = 0x0885bc30u; c->r[5] = c->r[2] + 0u; func_08862420(c, ram); }
    c->r[2] = mem_r8(ram, c->r[30] + 0x00000014u);
    c->r[3] = c->r[30] + 0x00000020u;
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x0885bc48u; c->r[6] = c->r[3] + 0u; func_0885c2dc(c, ram); }
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000008u);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    { int _c = (c->r[2] == 0u); if (_c) goto L_0885bc90; }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = mem_r16(ram, c->r[2] + 0x00000000u);
    c->r[2] = mem_r16(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[3] + c->r[2];
    mem_w16(ram, c->r[4] + 0x00000000u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000002u);
    c->r[2] = c->r[2] + 0x00000001u;
    mem_w8(ram, c->r[3] + 0x00000002u, c->r[2]);
L_0885bc90:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r8(ram, c->r[30] + 0x00000014u);
    c->r[2] = c->r[2] + c->r[3];
    c->r[4] = c->r[2] + 0x00000430u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r8(ram, c->r[30] + 0x00000014u);
    c->r[2] = c->r[2] + c->r[3];
    c->r[2] = c->r[2] + 0x00000430u;
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000008u);
    c->r[2] = c->r[2] | 0x0002u;
    mem_w8(ram, c->r[4] + 0x00000008u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r8(ram, c->r[30] + 0x00000014u);
    c->r[2] = c->r[2] + c->r[3];
    c->r[2] = c->r[2] + 0x00000430u;
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000008u);
    c->r[2] = c->r[2] & 0x0004u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_0885bd0c; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r8(ram, c->r[30] + 0x00000014u);
    c->r[2] = c->r[2] + c->r[3];
    c->r[4] = c->r[2] + 0x00000430u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r8(ram, c->r[30] + 0x00000014u);
    c->r[2] = c->r[2] + c->r[3];
    c->r[2] = c->r[2] + 0x00000430u;
    c->r[3] = mem_r8(ram, c->r[2] + 0x00000008u);
    c->r[2] = 0u + 0xffffffbfu;
    c->r[2] = c->r[3] & c->r[2];
    mem_w8(ram, c->r[4] + 0x00000008u, c->r[2]);
L_0885bd0c:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r8(ram, c->r[30] + 0x00000014u);
    c->r[2] = c->r[2] + c->r[3];
    c->r[4] = c->r[2] + 0x00000530u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r8(ram, c->r[30] + 0x00000014u);
    c->r[2] = c->r[2] + c->r[3];
    c->r[2] = c->r[2] + 0x00000530u;
    c->r[3] = 0u + 0xffffff8fu;
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000009u);
    c->r[2] = c->r[2] & c->r[3];
    mem_w8(ram, c->r[4] + 0x00000009u, c->r[2]);
L_0885bd3c:
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000ac8u;
    { c->r[31] = 0x0885bd4cu; c->r[5] = mem_r32(ram, c->r[30] + 0x00000010u); func_089cb8e8(c, ram); }
    { mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]); goto L_0885bb58; }
L_0885bd54:
    mem_w32(ram, c->r[30] + 0x0000000cu, 0u);
L_0885bd58:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000100u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_0885bd70; }
    { goto L_0885bf3c; }
L_0885bd70:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = c->r[2] << 2;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = c->r[2] + 0x00000034u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_0885bf2c; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = c->r[2] << 2;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = c->r[2] + 0x00000034u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000ac8u;
    { c->r[31] = 0x0885bdb8u; c->r[5] = c->r[2] + 0u; func_089cb820(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_0885bf2c; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = c->r[2] + 0x00000430u;
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000008u);
    c->r[2] = c->r[2] & 0x0040u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_0885bf14; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = c->r[2] << 3;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = c->r[2] + 0x0000063au;
    c->r[3] = c->r[30] + 0x00000020u;
    c->r[4] = mem_lwl(ram, c->r[2] + 0x00000003u, c->r[4]);
    c->r[4] = mem_lwr(ram, c->r[2] + 0x00000000u, c->r[4]);
    c->r[5] = mem_lwl(ram, c->r[2] + 0x00000007u, c->r[5]);
    c->r[5] = mem_lwr(ram, c->r[2] + 0x00000004u, c->r[5]);
    mem_swl(ram, c->r[3] + 0x00000003u, c->r[4]);
    mem_swr(ram, c->r[3] + 0x00000000u, c->r[4]);
    mem_swl(ram, c->r[3] + 0x00000007u, c->r[5]);
    mem_swr(ram, c->r[3] + 0x00000004u, c->r[5]);
    c->r[2] = mem_r8(ram, c->r[30] + 0x00000027u);
    c->r[2] = c->r[2] | 0x0010u;
    mem_w8(ram, c->r[30] + 0x00000027u, c->r[2]);
    c->r[2] = mem_r8(ram, c->r[30] + 0x0000000cu);
    c->r[3] = c->r[30] + 0x00000020u;
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x0885be44u; c->r[6] = c->r[3] + 0u; func_0885c2dc(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000030u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000008u);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000030u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_0885be8c; }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = mem_r16(ram, c->r[2] + 0x00000000u);
    c->r[2] = mem_r16(ram, c->r[30] + 0x00000030u);
    c->r[2] = c->r[3] + c->r[2];
    mem_w16(ram, c->r[4] + 0x00000000u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000002u);
    c->r[2] = c->r[2] + 0x00000001u;
    mem_w8(ram, c->r[3] + 0x00000002u, c->r[2]);
L_0885be8c:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[3] + c->r[2];
    c->r[4] = c->r[2] + 0x00000430u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = c->r[2] + 0x00000430u;
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000008u);
    c->r[2] = c->r[2] | 0x0001u;
    mem_w8(ram, c->r[4] + 0x00000008u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[3] + c->r[2];
    c->r[4] = c->r[2] + 0x00000430u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = c->r[2] + 0x00000430u;
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000008u);
    c->r[2] = c->r[2] | 0x0020u;
    mem_w8(ram, c->r[4] + 0x00000008u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[3] + c->r[2];
    c->r[4] = c->r[2] + 0x00000430u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = c->r[2] + 0x00000430u;
    c->r[3] = mem_r8(ram, c->r[2] + 0x00000008u);
    c->r[2] = 0u + 0xffffffbfu;
    c->r[2] = c->r[3] & c->r[2];
    mem_w8(ram, c->r[4] + 0x00000008u, c->r[2]);
L_0885bf14:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = c->r[2] << 2;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = c->r[2] + 0x00000034u;
    mem_w32(ram, c->r[2] + 0x00000000u, 0u);
L_0885bf2c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]); goto L_0885bd58; }
L_0885bf3c:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000002u);
    mem_w8(ram, c->r[3] + 0x00000032u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    mem_w8(ram, c->r[2] + 0x00000003u, 0u);
    c->r[2] = c->r[30] + 0x00000040u;
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x0885bf64u; c->r[5] = c->r[2] + 0u; func_0885c3b0(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000030u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000030u);
    c->r[2] = c->r[2] << 2;
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x0885bf80u; c->r[5] = mem_r32(ram, c->r[30] + 0x0000000cu); func_0885cf70(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000008u);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = c->r[30] + 0x00000040u;
    c->r[4] = mem_r32(ram, c->r[2] + 0x00000004u);
    c->r[5] = c->r[3] + 0u;
    { c->r[31] = 0x0885bfa4u; c->r[6] = mem_r32(ram, c->r[30] + 0x0000000cu); func_08a19db8(c, ram); }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = mem_r16(ram, c->r[2] + 0x00000000u);
    c->r[2] = mem_r16(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[3] + c->r[2];
    mem_w16(ram, c->r[4] + 0x00000000u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r8(ram, c->r[30] + 0x00000030u);
    mem_w8(ram, c->r[3] + 0x00000003u, c->r[2]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x00000028u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[3] - c->r[2];
    mem_w32(ram, c->r[4] + 0x00000028u, c->r[2]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[3] + c->r[2];
    mem_w32(ram, c->r[4] + 0x00000004u, c->r[2]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x00000024u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[3] + c->r[2];
    mem_w32(ram, c->r[4] + 0x00000024u, c->r[2]);
    mem_w32(ram, c->r[30] + 0x00000008u, 0u);
L_0885c014:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = ((s32)c->r[2] < (s32)0x0000000au) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_0885c02c; }
    { goto L_0885c0c8; }
L_0885c02c:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[5] = c->r[2] + 0x00001480u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[4] = c->r[2] + 0x00001480u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[2] = c->r[2] + 0x00001460u;
    c->r[3] = mem_r16(ram, c->r[4] + 0x0000000au);
    c->r[2] = mem_r16(ram, c->r[2] + 0x0000000cu);
    c->r[2] = c->r[3] + c->r[2];
    mem_w16(ram, c->r[5] + 0x0000000au, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[5] = c->r[2] + 0x00001490u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[4] = c->r[2] + 0x00001490u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = c->r[2] + 0x00001480u;
    c->r[3] = mem_r8(ram, c->r[4] + 0x0000000eu);
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000000u);
    c->r[2] = c->r[3] + c->r[2];
    mem_w8(ram, c->r[5] + 0x0000000eu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]); goto L_0885c014; }
L_0885c0c8:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x0000146cu;
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0u + 0u;
    { c->r[31] = 0x0885c0e0u; c->r[6] = 0u + 0x00000014u; func_08a19ec4(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00001480u;
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0u + 0u;
    { c->r[31] = 0x0885c0f8u; c->r[6] = 0u + 0x0000000au; func_08a19ec4(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000008u, 0u);
L_0885c0fc:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000100u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_0885c114; }
    { goto L_0885c174; }
L_0885c114:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = c->r[2] + 0x00000430u;
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000008u);
    c->r[2] = c->r[2] & 0x0040u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_0885c164; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[4] = c->r[2] + 0x00000430u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = c->r[2] + 0x00000430u;
    c->r[3] = mem_r8(ram, c->r[2] + 0x00000008u);
    c->r[2] = 0u + 0xfffffffcu;
    c->r[2] = c->r[3] & c->r[2];
    mem_w8(ram, c->r[4] + 0x00000008u, c->r[2]);
L_0885c164:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]); goto L_0885c0fc; }
L_0885c174:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x0885c180u; c->r[5] = 0u + 0x00000004u; func_0885cf70(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x00000004u);
    c->r[2] = 0u + 0xffffffffu;
    mem_w8(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000004u);
    c->r[3] = c->r[2] + 0x00000001u;
    c->r[2] = 0u + 0xffffffffu;
    mem_w8(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000004u);
    c->r[3] = c->r[2] + 0x00000002u;
    c->r[2] = 0u + 0xffffffffu;
    mem_w8(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000004u);
    c->r[3] = c->r[2] + 0x00000003u;
    c->r[2] = 0u + 0xffffffffu;
    mem_w8(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000008u);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[1] = 0x08a90000u;
    mem_w32(ram, c->r[1] + 0xffffb404u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r16(ram, c->r[2] + 0x0000002eu);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w16(ram, c->r[3] + 0x0000002eu, c->r[2]); goto L_0885c2b4; }
L_0885c1fc:
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x0885c208u; c->r[4] = c->r[4] + 0x00000ac8u; func_089cb8ac(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000030u, c->r[2]);
L_0885c20c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000030u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_0885c220; }
    { goto L_0885c2b4; }
L_0885c220:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000030u);
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000018u);
    c->r[2] = 0u + 0x00000001u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_0885c29c; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000030u);
    c->r[3] = mem_r16(ram, c->r[2] + 0x0000001au);
    c->r[2] = 0u + 0x00000003u;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_0885c264; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000030u);
    c->r[3] = mem_r16(ram, c->r[2] + 0x0000001au);
    c->r[2] = 0u + 0x00000005u;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_0885c264; }
    { goto L_0885c29c; }
L_0885c264:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000030u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x00000088u);
    c->r[2] = 0x08000000u;
    c->r[2] = c->r[3] & c->r[2];
    { int _c = (c->r[2] == 0u); if (_c) goto L_0885c29c; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000030u);
    c->r[2] = mem_r8(ram, c->r[2] + 0x000000b2u);
    mem_w8(ram, c->r[30] + 0x00000014u, c->r[2]);
    c->r[2] = mem_r8(ram, c->r[30] + 0x00000014u);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x0885c29cu; c->r[6] = mem_r32(ram, c->r[30] + 0x00000030u); func_0885c4f0(c, ram); }
L_0885c29c:
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000ac8u;
    { c->r[31] = 0x0885c2acu; c->r[5] = mem_r32(ram, c->r[30] + 0x00000030u); func_089cb8e8(c, ram); }
    { mem_w32(ram, c->r[30] + 0x00000030u, c->r[2]); goto L_0885c20c; }
L_0885c2b4:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r16(ram, c->r[2] + 0x0000002cu);
    c->r[2] = c->r[2] + 0x00000001u;
    mem_w16(ram, c->r[3] + 0x0000002cu, c->r[2]);
L_0885c2c8:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000074u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000070u);
    { c->r[29] = c->r[29] + 0x00000080u; return; }
    return; /* fell out of func_0885b96c */
}

/* func_08861568  0x08861568..0x08861660  248 bytes, source=sweep */
void func_08861568(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08861568u);
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
    { c->r[31] = 0x088615e4u; c->r[5] = c->r[2] + 0u; func_08861028(c, ram); }
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
    { c->r[31] = 0x08861618u; c->r[5] = c->r[2] + 0u; func_08861028(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[2] + 0x000000b8u;
    c->r[3] = c->r[2] << 24;
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = c->r[2] << 8;
    c->r[3] = c->r[3] | c->r[2];
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = c->r[3] | c->r[2];
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x08861644u; c->r[5] = c->r[2] + 0u; func_08861028(c, ram); }
    { c->r[31] = 0x0886164cu; c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u); func_08861660(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000024u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000020u);
    { c->r[29] = c->r[29] + 0x00000030u; return; }
    return; /* fell out of func_08861568 */
}

/* func_08862594  0x08862594..0x088625dc  72 bytes, source=sweep */
void func_08862594(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08862594u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000006u);
    c->f[0] = u2f(c->r[2]);
    c->f[0] = (f32)(s32)f2u(c->f[0]);
    c->r[1] = 0x08a40000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0x00003000u);
    c->f[0] = c->f[0] * c->f[1];
    c->r[1] = 0x08a40000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0x00003004u);
    c->f[0] = c->f[0] - c->f[1];
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_08862594 */
}

/* func_08866a30  0x08866a30..0x08866a60  48 bytes, source=fde */
void func_08866a30(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08866a30u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    { c->r[31] = 0x08866a4cu; c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u); func_0886672c(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_08866a30 */
}

/* func_0886e538  0x0886e538..0x0886e63c  260 bytes, source=fde */
void func_0886e538(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0886e538u);
    c->r[29] = c->r[29] + 0xffffffc0u;
    mem_w32(ram, c->r[29] + 0x00000034u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000030u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000020u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[5]);
    mem_wf32(ram, c->r[30] + 0x00000004u, c->f[12]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[2] = mem_r32(ram, c->r[3] + 0x00000000u);
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[2] = mem_r32(ram, c->r[4] + 0x00000004u);
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[2] = mem_r32(ram, c->r[3] + 0x00000008u);
    mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[2] = mem_r32(ram, c->r[4] + 0x0000000cu);
    mem_w32(ram, c->r[30] + 0x0000001cu, c->r[2]);
    c->r[2] = c->r[30] + 0x00000010u;
    c->r[4] = c->r[2] + 0u;
    c->f[12] = u2f(0u);
    c->f[13] = u2f(0u);
    c->f[14] = u2f(0u);
    c->f[15] = u2f(0u);
    { c->r[31] = 0x0886e5a4u; func_0880d140(c, ram); }
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000004u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000034ecu);
    c->f[0] = c->f[1] * c->f[0];
    { c->r[31] = 0x0886e5bcu; c->f[12] = c->f[0]; func_08a0f760(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    mem_wf32(ram, c->r[2] + 0x00000000u, c->f[0]);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000004u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000034ecu);
    c->f[0] = c->f[1] * c->f[0];
    { c->r[31] = 0x0886e5dcu; c->f[12] = c->f[0]; func_08a0f5bc(c, ram); }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000020u);
    mem_wf32(ram, c->r[3] + 0x0000000cu, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_0886e624; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[2] = mem_r32(ram, c->r[4] + 0x00000000u);
    mem_w32(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[2] = mem_r32(ram, c->r[4] + 0x00000004u);
    mem_w32(ram, c->r[3] + 0x00000004u, c->r[2]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[2] = mem_r32(ram, c->r[4] + 0x00000008u);
    mem_w32(ram, c->r[3] + 0x00000008u, c->r[2]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[2] = mem_r32(ram, c->r[4] + 0x0000000cu);
    mem_w32(ram, c->r[3] + 0x0000000cu, c->r[2]);
L_0886e624:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000034u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000030u);
    { c->r[29] = c->r[29] + 0x00000040u; return; }
    return; /* fell out of func_0886e538 */
}

/* func_08872364  0x08872364..0x088723c8  100 bytes, source=sweep */
void func_08872364(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08872364u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000020u);
    c->f[0] = mem_rf32(ram, c->r[3] + 0x00000018u);
    c->f[1] = c->f[1] - c->f[0];
    c->f[0] = mem_rf32(ram, c->r[4] + 0x00000024u);
    c->f[1] = c->f[1] * c->f[0];
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x0000001cu);
    c->f[1] = c->f[1] / c->f[0];
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000018u);
    c->f[0] = c->f[1] + c->f[0];
    mem_wf32(ram, c->r[30] + 0x00000008u, c->f[0]);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000008u);
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_08872364 */
}

/* func_0887bff4  0x0887bff4..0x0887c0c4  208 bytes, source=sweep */
void func_0887bff4(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0887bff4u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x0000021cu);
    c->r[2] = 0xffef0000u;
    c->r[2] = c->r[2] | 0xffffu;
    c->r[2] = c->r[3] & c->r[2];
    mem_w32(ram, c->r[4] + 0x0000021cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    mem_w32(ram, c->r[2] + 0x0000023cu, 0u);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x0000021cu);
    c->r[2] = 0xffdf0000u;
    c->r[2] = c->r[2] | 0xffffu;
    c->r[2] = c->r[3] & c->r[2];
    mem_w32(ram, c->r[4] + 0x0000021cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    mem_w32(ram, c->r[2] + 0x00000240u, 0u);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x0000021cu);
    c->r[2] = 0u + 0xffffffbfu;
    c->r[2] = c->r[3] & c->r[2];
    mem_w32(ram, c->r[4] + 0x0000021cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    mem_w32(ram, c->r[2] + 0x00000238u, 0u);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x0000021cu);
    c->r[2] = 0xfeff0000u;
    c->r[2] = c->r[2] | 0xffffu;
    c->r[2] = c->r[3] & c->r[2];
    mem_w32(ram, c->r[4] + 0x0000021cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    mem_w32(ram, c->r[2] + 0x00000244u, 0u);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x0000021cu);
    c->r[2] = 0xcfff0000u;
    c->r[2] = c->r[2] | 0xffffu;
    c->r[2] = c->r[3] & c->r[2];
    mem_w32(ram, c->r[4] + 0x0000021cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    mem_w32(ram, c->r[2] + 0x00000248u, 0u);
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_0887bff4 */
}

/* func_088810a0  0x088810a0..0x0888152c  1164 bytes, source=sweep */
void func_088810a0(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x088810a0u);
    c->r[29] = c->r[29] + 0xffffff90u;
    mem_w32(ram, c->r[29] + 0x00000064u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000060u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[6]);
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[7]);
    c->r[2] = 0u + 0xffffffffu;
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]);
    c->r[2] = c->r[30] + 0x00000020u;
    { c->r[31] = 0x088810d4u; c->r[4] = c->r[2] + 0u; func_08808240(c, ram); }
    c->r[2] = c->r[30] + 0x00000020u;
    c->r[4] = c->r[2] + 0u;
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000004u);
    { c->r[31] = 0x088810e8u; c->r[6] = mem_r32(ram, c->r[30] + 0x00000000u); func_08820ca4(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000000u);
    c->f[0] = mem_rf32(ram, c->r[3] + 0x00000000u);
    c->f[1] = c->f[1] - c->f[0];
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00003a48u);
    c->f[0] = c->f[1] * c->f[0];
    mem_wf32(ram, c->r[30] + 0x00000030u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000004u);
    c->f[0] = mem_rf32(ram, c->r[3] + 0x00000004u);
    c->f[1] = c->f[1] - c->f[0];
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00003a48u);
    c->f[0] = c->f[1] * c->f[0];
    mem_wf32(ram, c->r[30] + 0x00000034u, c->f[0]);
    c->r[2] = c->r[30] + 0x00000020u;
    { c->r[31] = 0x0888113cu; c->r[4] = c->r[2] + 0u; func_08820c6c(c, ram); }
    c->f[1] = c->f[0];
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00003a48u);
    c->f[0] = c->f[1] * c->f[0];
    mem_wf32(ram, c->r[30] + 0x00000038u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x000000a4u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00003a48u);
    c->f[1] = c->f[1] * c->f[0];
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00003a4cu);
    c->f[1] = c->f[1] * c->f[0];
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00003a50u);
    c->f[1] = c->f[1] * c->f[0];
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00003a54u);
    c->f[0] = c->f[1] / c->f[0];
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    c->r[2] = f2u(c->f[0]);
    mem_w16(ram, c->r[30] + 0x0000003cu, c->r[2]);
    c->r[1] = 0x08aa0000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00004968u);
    c->f[1] = (f32)(s32)f2u(c->f[0]);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00003a58u);
    c->f[0] = c->f[1] * c->f[0];
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    c->r[4] = f2u(c->f[0]);
    c->r[2] = 0x51eb0000u;
    c->r[2] = c->r[2] | 0x851fu;
    alx_mult(c, c->r[4], c->r[2]);
    c->r[2] = c->hi;
    c->r[3] = (u32)((s32)c->r[2] >> 5);
    c->r[2] = (u32)((s32)c->r[4] >> 31);
    c->r[2] = c->r[3] - c->r[2];
    mem_w32(ram, c->r[30] + 0x00000040u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000040u);
    c->r[2] = ((s32)c->r[2] < (s32)0x000000abu) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_088811f0; }
    c->r[2] = 0u + 0xffffffffu;
    { mem_w32(ram, c->r[30] + 0x00000044u, c->r[2]); goto L_08881514; }
L_088811f0:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000040u);
    mem_w32(ram, c->r[30] + 0x00000048u, c->r[3]);
    c->r[2] = 0u + 0x0000005au;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000048u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_08881220; }
    c->r[2] = 0u + 0x00000078u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000048u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_08881260; }
    { goto L_088812a0; }
L_08881220:
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000038u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00003a5cu);
    alx_c_cond_s(c, 12, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_08881244; }
    { goto L_08881260; }
L_08881244:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x0000001eu);
    { int _c = (c->r[2] != 0u); if (_c) goto L_08881260; }
    c->r[2] = 0u + 0x000020deu;
    { mem_w32(ram, c->r[30] + 0x00000044u, c->r[2]); goto L_08881514; }
L_08881260:
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000038u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00003a5cu);
    alx_c_cond_s(c, 12, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_08881284; }
    { goto L_088812a0; }
L_08881284:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x0000001eu);
    { int _c = (c->r[2] != 0u); if (_c) goto L_088812a0; }
    c->r[3] = 0u + 0x000020dfu;
    { mem_w32(ram, c->r[30] + 0x00000044u, c->r[3]); goto L_08881514; }
L_088812a0:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x0000001eu);
    { int _c = ((s32)c->r[2] <= 0); if (_c) goto L_088812d0; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r16(ram, c->r[2] + 0x0000001eu);
    c->r[2] = c->r[2] + 0xffffffffu;
    mem_w16(ram, c->r[3] + 0x0000001eu, c->r[2]);
    c->r[2] = 0u + 0xffffffffu;
    { mem_w32(ram, c->r[30] + 0x00000044u, c->r[2]); goto L_08881514; }
L_088812d0:
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000038u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00003a60u);
    alx_c_cond_s(c, 12, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_088812f4; }
    { goto L_08881490; }
L_088812f4:
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[30] + 0x0000003cu);
    c->r[2] = ((s32)c->r[2] < (s32)0x0000028bu) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_08881310; }
    c->r[3] = 0u + 0x000020e7u;
    { mem_w32(ram, c->r[30] + 0x00000044u, c->r[3]); goto L_08881514; }
L_08881310:
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[30] + 0x0000003cu);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000226u) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_0888132c; }
    c->r[2] = 0u + 0x000020e6u;
    { mem_w32(ram, c->r[30] + 0x00000044u, c->r[2]); goto L_08881514; }
L_0888132c:
    { c->r[31] = 0x08881334u; c->f[12] = mem_rf32(ram, c->r[30] + 0x00000030u); func_08a136f8(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000050u, c->r[2]);
    mem_w32(ram, c->r[30] + 0x00000054u, c->r[3]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000050u);
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000054u);
    c->r[6] = 0u + 0u;
    { c->r[31] = 0x08881350u; c->r[7] = 0u + 0u; func_08a1429c(c, ram); }
    { int _c = ((s32)c->r[2] >= 0); if (_c) goto L_0888136c; }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000050u);
    { c->r[31] = 0x08881364u; c->r[5] = mem_r32(ram, c->r[30] + 0x00000054u); func_08a14510(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000050u, c->r[2]);
    mem_w32(ram, c->r[30] + 0x00000054u, c->r[3]);
L_0888136c:
    { c->r[31] = 0x08881374u; c->f[12] = mem_rf32(ram, c->r[30] + 0x00000034u); func_08a136f8(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000058u, c->r[2]);
    mem_w32(ram, c->r[30] + 0x0000005cu, c->r[3]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000058u);
    c->r[5] = mem_r32(ram, c->r[30] + 0x0000005cu);
    c->r[6] = 0u + 0u;
    { c->r[31] = 0x08881390u; c->r[7] = 0u + 0u; func_08a1429c(c, ram); }
    { int _c = ((s32)c->r[2] >= 0); if (_c) goto L_088813ac; }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000058u);
    { c->r[31] = 0x088813a4u; c->r[5] = mem_r32(ram, c->r[30] + 0x0000005cu); func_08a14510(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000058u, c->r[2]);
    mem_w32(ram, c->r[30] + 0x0000005cu, c->r[3]);
L_088813ac:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000050u);
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000054u);
    c->r[6] = mem_r32(ram, c->r[30] + 0x00000058u);
    { c->r[31] = 0x088813c0u; c->r[7] = mem_r32(ram, c->r[30] + 0x0000005cu); func_08a14214(c, ram); }
    { int _c = ((s32)c->r[2] > 0); if (_c) goto L_088813d0; }
    { goto L_08881430; }
L_088813d0:
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000030u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00003a64u);
    alx_c_cond_s(c, 12, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_088813f4; }
    { goto L_08881400; }
L_088813f4:
    c->r[3] = 0u + 0x000020eau;
    { mem_w32(ram, c->r[30] + 0x00000044u, c->r[3]); goto L_08881514; }
L_08881400:
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000030u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00003a68u);
    alx_c_cond_s(c, 12, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_08881424; }
    { goto L_0888150c; }
L_08881424:
    c->r[2] = 0u + 0x000020ebu;
    { mem_w32(ram, c->r[30] + 0x00000044u, c->r[2]); goto L_08881514; }
L_08881430:
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000034u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00003a64u);
    alx_c_cond_s(c, 12, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_08881454; }
    { goto L_08881460; }
L_08881454:
    c->r[3] = 0u + 0x000020e4u;
    { mem_w32(ram, c->r[30] + 0x00000044u, c->r[3]); goto L_08881514; }
L_08881460:
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000034u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00003a68u);
    alx_c_cond_s(c, 12, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_08881484; }
    { goto L_0888150c; }
L_08881484:
    c->r[2] = 0u + 0x000020e5u;
    { mem_w32(ram, c->r[30] + 0x00000044u, c->r[2]); goto L_08881514; }
L_08881490:
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[30] + 0x0000003cu);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000321u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_088814ac; }
    c->r[3] = 0u + 0x000020d7u;
    { mem_w32(ram, c->r[30] + 0x00000044u, c->r[3]); goto L_08881514; }
L_088814ac:
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000030u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00003a6cu);
    alx_c_cond_s(c, 12, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_088814d0; }
    { goto L_088814dc; }
L_088814d0:
    c->r[2] = 0u + 0x000020d5u;
    { mem_w32(ram, c->r[30] + 0x00000044u, c->r[2]); goto L_08881514; }
L_088814dc:
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000030u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00003a70u);
    alx_c_cond_s(c, 12, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_08881500; }
    { goto L_0888150c; }
L_08881500:
    c->r[3] = 0u + 0x000020d6u;
    { mem_w32(ram, c->r[30] + 0x00000044u, c->r[3]); goto L_08881514; }
L_0888150c:
    c->r[2] = 0u + 0xffffffffu;
    mem_w32(ram, c->r[30] + 0x00000044u, c->r[2]);
L_08881514:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000044u);
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000064u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000060u);
    { c->r[29] = c->r[29] + 0x00000070u; return; }
    return; /* fell out of func_088810a0 */
}

/* func_08883424  0x08883424..0x08883448  36 bytes, source=residue */
void func_08883424(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08883424u);
    c->r[29] = c->r[29] + 0xfffffff0u;
    mem_w32(ram, c->r[29] + 0x00000000u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    c->r[2] = 0x08a90000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0xffffe6ccu);
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000000u);
    { c->r[29] = c->r[29] + 0x00000010u; return; }
    return; /* fell out of func_08883424 */
}

/* func_0888b8d0  0x0888b8d0..0x0888b920  80 bytes, source=sweep */
void func_0888b8d0(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0888b8d0u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_0888b904; }
    { c->r[31] = 0x0888b8fcu; c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u); func_0888ba64(c, ram); }
    { goto L_0888b90c; }
L_0888b904:
    { c->r[31] = 0x0888b90cu; c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u); func_0888ba9c(c, ram); }
L_0888b90c:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_0888b8d0 */
}

/* func_0888c52c  0x0888c52c..0x0888c570  68 bytes, source=sweep */
void func_0888c52c(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0888c52cu);
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
    { c->r[31] = 0x0888c55cu; c->r[5] = c->r[2] + 0u; func_0888b984(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_0888c52c */
}

/* func_0888d1a4  0x0888d1a4..0x0888d1ec  72 bytes, source=sweep */
void func_0888d1a4(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0888d1a4u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_wf32(ram, c->r[30] + 0x00000004u, c->f[12]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = c->r[2] >> 8;
    c->r[2] = 0xd0000000u;
    c->r[2] = c->r[3] | c->r[2];
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x0888d1d8u; c->r[5] = c->r[2] + 0u; func_0888b984(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_0888d1a4 */
}

/* func_0888fc70  0x0888fc70..0x0888fce4  116 bytes, source=sweep */
void func_0888fc70(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0888fc70u);
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
    { c->r[31] = 0x0888fcd0u; c->r[5] = mem_r32(ram, c->r[3] + 0x00000084u); func_0888b6b4(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_0888fc70 */
}

/* func_088946d0  0x088946d0..0x08894714  68 bytes, source=sweep */
void func_088946d0(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x088946d0u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[1] = 0x08a80000u;
    vfpu_exec(c, ram, 0xd824c150u); /* lv.q */
    c->r[1] = 0x08a80000u;
    vfpu_exec(c, ram, 0xd825c160u); /* lv.q */
    c->r[1] = 0x08a80000u;
    vfpu_exec(c, ram, 0xd826c170u); /* lv.q */
    c->r[1] = 0x08a80000u;
    vfpu_exec(c, ram, 0xd827c180u); /* lv.q */
    vfpu_exec(c, ram, 0xd0060001u); /* vzero.s */
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_088946d0 */
}

/* func_08899980  0x08899980..0x088999b4  52 bytes, source=sweep */
void func_08899980(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08899980u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x088999a0u; c->r[5] = 0x0b000000u; func_088998c8(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_08899980 */
}

/* func_0889a7d8  0x0889a7d8..0x0889a828  80 bytes, source=sweep */
void func_0889a7d8(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0889a7d8u);
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
    vfpu_exec(c, ram, 0xd8480000u); /* lv.q */
    vfpu_exec(c, ram, 0xd0006860u); /* vmov.s */
    vfpu_exec(c, ram, 0xf108a400u); /* vtfm3.t */
    vfpu_exec(c, ram, 0xf8800000u); /* sv.q */
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_0889a7d8 */
}

/* func_0889f220  0x0889f220..0x0889f2f0  208 bytes, source=sweep */
void func_0889f220(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0889f220u);
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
    return; /* fell out of func_0889f220 */
}

/* func_088a00e0  0x088a00e0..0x088a01b8  216 bytes, source=sweep */
void func_088a00e0(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x088a00e0u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_wf32(ram, c->r[30] + 0x00000004u, c->f[12]);
    mem_wf32(ram, c->r[30] + 0x00000008u, c->f[13]);
    mem_wf32(ram, c->r[30] + 0x0000000cu, c->f[14]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000043b4u);
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
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000043b4u);
    mem_wf32(ram, c->r[2] + 0x00000014u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    mem_w32(ram, c->r[2] + 0x00000018u, 0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    mem_w32(ram, c->r[2] + 0x0000001cu, 0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    mem_w32(ram, c->r[2] + 0x00000020u, 0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    mem_w32(ram, c->r[2] + 0x00000024u, 0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000043b4u);
    mem_wf32(ram, c->r[2] + 0x00000028u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    mem_w32(ram, c->r[2] + 0x0000002cu, 0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000004u);
    mem_wf32(ram, c->r[2] + 0x00000030u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000008u);
    mem_wf32(ram, c->r[2] + 0x00000034u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x0000000cu);
    mem_wf32(ram, c->r[2] + 0x00000038u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000043b4u);
    mem_wf32(ram, c->r[2] + 0x0000003cu, c->f[0]);
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_088a00e0 */
}

/* func_088a4274  0x088a4274..0x088a42c4  80 bytes, source=sweep */
void func_088a4274(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x088a4274u);
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
    { c->r[31] = 0x088a42b0u; c->r[5] = c->r[2] + 0u; func_088a3304(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_088a4274 */
}

/* func_088adb9c  0x088adb9c..0x088adbe0  68 bytes, source=sweep */
void func_088adb9c(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x088adb9cu);
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
    { c->r[31] = 0x088adbccu; c->r[5] = c->r[2] + 0u; func_088ad160(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_088adb9c */
}

/* func_088b1f24  0x088b1f24..0x088b1f5c  56 bytes, source=sweep */
void func_088b1f24(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x088b1f24u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x088b1f48u; c->r[5] = mem_r32(ram, c->r[30] + 0x00000004u); func_088b21c0(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_088b1f24 */
}

/* func_088b2d64  0x088b2d64..0x088b2dd4  112 bytes, source=sweep */
void func_088b2d64(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x088b2d64u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_088b2d98; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = 0u + 0x00000001u;
    { mem_w32(ram, c->r[3] + 0x00000060u, c->r[2]); goto L_088b2da0; }
L_088b2d98:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    mem_w32(ram, c->r[2] + 0x00000060u, 0u);
L_088b2da0:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[7] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = mem_r32(ram, c->r[2] + 0x00000064u);
    c->r[6] = mem_r32(ram, c->r[3] + 0x00000068u);
    { c->r[31] = 0x088b2dc0u; c->r[7] = mem_r32(ram, c->r[7] + 0x00000060u); func_088b2dd4(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_088b2d64 */
}

/* func_088ba104  0x088ba104..0x088ba254  336 bytes, source=fde */
void func_088ba104(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x088ba104u);
    c->r[29] = c->r[29] + 0xffffff20u;
    mem_w32(ram, c->r[29] + 0x000000d4u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x000000d0u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[6]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]);
    c->r[2] = c->r[30] + 0x00000020u;
    { c->r[31] = 0x088ba13cu; c->r[4] = c->r[2] + 0u; func_08808260(c, ram); }
    c->r[2] = c->r[30] + 0x00000060u;
    { c->r[31] = 0x088ba148u; c->r[4] = c->r[2] + 0u; func_08808260(c, ram); }
    c->r[2] = c->r[30] + 0x000000a0u;
    { c->r[31] = 0x088ba154u; c->r[4] = c->r[2] + 0u; func_08808240(c, ram); }
    c->r[2] = c->r[30] + 0x000000b0u;
    { c->r[31] = 0x088ba160u; c->r[4] = c->r[2] + 0u; func_08808240(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000000u);
    c->f[0] = mem_rf32(ram, c->r[3] + 0x00000000u);
    c->f[0] = c->f[1] - c->f[0];
    mem_wf32(ram, c->r[30] + 0x000000a0u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000004u);
    c->f[0] = mem_rf32(ram, c->r[3] + 0x00000004u);
    c->f[0] = c->f[1] - c->f[0];
    mem_wf32(ram, c->r[30] + 0x000000a4u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000008u);
    c->f[0] = mem_rf32(ram, c->r[3] + 0x00000008u);
    c->f[0] = c->f[1] - c->f[0];
    mem_wf32(ram, c->r[30] + 0x000000a8u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x0000000cu);
    c->f[0] = mem_rf32(ram, c->r[3] + 0x0000000cu);
    c->f[0] = c->f[1] - c->f[0];
    mem_wf32(ram, c->r[30] + 0x000000acu, c->f[0]);
    c->r[2] = c->r[30] + 0x00000020u;
    { c->r[31] = 0x088ba1ccu; c->r[4] = c->r[2] + 0u; func_08808280(c, ram); }
    c->r[2] = c->r[30] + 0x00000060u;
    { c->r[31] = 0x088ba1d8u; c->r[4] = c->r[2] + 0u; func_08808280(c, ram); }
    c->r[2] = c->r[30] + 0x00000060u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[6] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[4] = c->r[2] + 0u;
    c->f[12] = mem_rf32(ram, c->r[3] + 0x00000000u);
    c->f[13] = mem_rf32(ram, c->r[5] + 0x00000004u);
    { c->r[31] = 0x088ba1fcu; c->f[14] = mem_rf32(ram, c->r[6] + 0x00000008u); func_0885a0b8(c, ram); }
    c->r[2] = c->r[30] + 0x00000020u;
    c->r[3] = c->r[30] + 0x00000060u;
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0u + 0u;
    { c->r[31] = 0x088ba214u; c->r[6] = c->r[3] + 0u; func_0884c668(c, ram); }
    c->r[2] = c->r[30] + 0x000000b0u;
    c->r[3] = c->r[30] + 0x000000a0u;
    c->r[6] = c->r[30] + 0x00000020u;
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x088ba22cu; c->r[5] = c->r[3] + 0u; func_0884c26c(c, ram); }
    c->f[12] = mem_rf32(ram, c->r[30] + 0x000000b0u);
    { c->r[31] = 0x088ba238u; c->f[13] = mem_rf32(ram, c->r[30] + 0x000000b8u); func_08a0fc44(c, ram); }
    mem_wf32(ram, c->r[30] + 0x000000c0u, c->f[0]);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x000000c0u);
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x000000d4u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x000000d0u);
    { c->r[29] = c->r[29] + 0x000000e0u; return; }
    return; /* fell out of func_088ba104 */
}

/* func_088be814  0x088be814..0x088be86c  88 bytes, source=fde */
void func_088be814(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x088be814u);
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
    { c->r[31] = 0x088be858u; c->r[9] = mem_r32(ram, c->r[30] + 0x00000014u); func_088bf1cc(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000024u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000020u);
    { c->r[29] = c->r[29] + 0x00000030u; return; }
    return; /* fell out of func_088be814 */
}

/* func_088bf4ec  0x088bf4ec..0x088bf550  100 bytes, source=sweep */
void func_088bf4ec(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x088bf4ecu);
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
    { c->r[31] = 0x088bf53cu; c->r[5] = c->r[2] + 0u; func_088be14c(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_088bf4ec */
}

/* func_088c2528  0x088c2528..0x088c2580  88 bytes, source=sweep */
void func_088c2528(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x088c2528u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[3];
    c->r[4] = c->r[2] + 0x00000130u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[3];
    c->r[2] = c->r[2] + 0x00000130u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000001u;
    mem_w32(ram, c->r[4] + 0x00000000u, c->r[2]);
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_088c2528 */
}

/* func_088c88ac  0x088c88ac..0x088c88f4  72 bytes, source=sweep */
void func_088c88ac(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x088c88acu);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x0000021cu);
    c->r[2] = 0x00100000u;
    c->r[2] = c->r[3] | c->r[2];
    mem_w32(ram, c->r[4] + 0x0000021cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00004fb4u);
    mem_wf32(ram, c->r[2] + 0x0000023cu, c->f[0]);
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_088c88ac */
}

/* func_088c96c0  0x088c96c0..0x088c96f8  56 bytes, source=sweep */
void func_088c96c0(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x088c96c0u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    vfpu_exec(c, ram, 0xd8420000u); /* lv.q */
    vfpu_exec(c, ram, 0x60828103u); /* vsub.t */
    vfpu_exec(c, ram, 0x64838300u); /* vdot.t */
    vfpu_exec(c, ram, 0xebc00004u); /* sv.s */
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000004u);
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_088c96c0 */
}

/* func_088d1714  0x088d1714..0x088d18bc  424 bytes, source=fde */
void func_088d1714(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x088d1714u);
    c->r[29] = c->r[29] + 0xfffffec0u;
    mem_w32(ram, c->r[29] + 0x00000134u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000130u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[6]);
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[7]);
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[8]);
    c->r[2] = c->r[30] + 0x00000020u;
    { c->r[31] = 0x088d1744u; c->r[4] = c->r[2] + 0u; func_0885a2b8(c, ram); }
    c->r[2] = c->r[30] + 0x00000020u;
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0u + 0u;
    { c->r[31] = 0x088d1758u; c->r[6] = 0u + 0x00000080u; func_08a19ec4(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000000u);
    mem_wf32(ram, c->r[30] + 0x00000088u, c->f[0]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[3] + 0x00000000u);
    mem_w32(ram, c->r[30] + 0x00000020u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[3] + 0x00000004u);
    mem_w32(ram, c->r[30] + 0x00000024u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[3] + 0x00000008u);
    mem_w32(ram, c->r[30] + 0x00000028u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[3] + 0x0000000cu);
    mem_w32(ram, c->r[30] + 0x0000002cu, c->r[2]);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000052d4u);
    mem_wf32(ram, c->r[30] + 0x0000002cu, c->f[0]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = mem_r32(ram, c->r[3] + 0x00000000u);
    mem_w32(ram, c->r[30] + 0x00000030u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[3] + 0x00000004u);
    mem_w32(ram, c->r[30] + 0x00000034u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[3] + 0x00000008u);
    mem_w32(ram, c->r[30] + 0x00000038u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[3] + 0x0000000cu);
    mem_w32(ram, c->r[30] + 0x0000003cu, c->r[2]);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000052d4u);
    mem_wf32(ram, c->r[30] + 0x0000003cu, c->f[0]);
    c->r[2] = c->r[30] + 0x00000020u;
    c->r[2] = c->r[2] + 0x00000020u;
    c->r[4] = c->r[2] + 0u;
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000010u);
    { c->r[31] = 0x088d17dcu; c->r[6] = mem_r32(ram, c->r[30] + 0x0000000cu); func_08820ca4(c, ram); }
    c->r[2] = c->r[30] + 0x00000020u;
    c->r[3] = c->r[2] + 0x00000030u;
    c->r[2] = c->r[30] + 0x00000020u;
    c->r[2] = c->r[2] + 0x00000020u;
    c->r[4] = c->r[3] + 0u;
    { c->r[31] = 0x088d17f8u; c->r[5] = c->r[2] + 0u; func_0884c1d8(c, ram); }
    c->r[2] = c->r[30] + 0x00000020u;
    c->r[2] = c->r[2] + 0x00000020u;
    { c->r[31] = 0x088d1808u; c->r[4] = c->r[2] + 0u; func_08820c6c(c, ram); }
    mem_wf32(ram, c->r[30] + 0x00000084u, c->f[0]);
    c->r[2] = c->r[30] + 0x000000a0u;
    mem_w32(ram, c->r[30] + 0x00000080u, c->r[2]);
    c->r[2] = c->r[30] + 0x00000020u;
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x088d1824u; c->r[5] = 0u + 0u; func_08885c0c(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000120u, c->r[2]);
    c->r[2] = c->r[30] + 0x00000020u;
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x088d1838u; c->r[5] = 0u + 0x00000001u; func_089c1bf4(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000124u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000124u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_088d1850; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000008cu);
    mem_w32(ram, c->r[30] + 0x00000128u, c->r[2]);
L_088d1850:
    c->r[2] = mem_r8(ram, c->r[30] + 0x00000090u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_088d18a4; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000060u);
    mem_w32(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000064u);
    mem_w32(ram, c->r[3] + 0x00000004u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000068u);
    mem_w32(ram, c->r[3] + 0x00000008u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000006cu);
    mem_w32(ram, c->r[3] + 0x0000000cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000088u);
    mem_wf32(ram, c->r[2] + 0x00000000u, c->f[0]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000008cu);
    mem_w32(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r8(ram, c->r[30] + 0x00000090u);
    c->r[2] = c->r[2] & 0x0003u;
    mem_w32(ram, c->r[30] + 0x00000120u, c->r[2]);
L_088d18a4:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000120u);
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000134u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000130u);
    { c->r[29] = c->r[29] + 0x00000140u; return; }
    return; /* fell out of func_088d1714 */
}

/* func_088d4770  0x088d4770..0x088d47e8  120 bytes, source=sweep */
void func_088d4770(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x088d4770u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[6]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_088d479c; }
    { mem_w32(ram, c->r[30] + 0x0000000cu, 0u); goto L_088d47d4; }
L_088d479c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x000000d4u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[4] = c->r[3] & c->r[2];
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x000000d8u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[3] & c->r[2];
    { int _c = (c->r[4] == c->r[2]); if (_c) goto L_088d47d0; }
    c->r[2] = 0u + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]); goto L_088d47d4; }
L_088d47d0:
    mem_w32(ram, c->r[30] + 0x0000000cu, 0u);
L_088d47d4:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_088d4770 */
}

/* func_088d9950  0x088d9950..0x088da4e4  2964 bytes, source=fde */
void func_088d9950(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x088d9950u);
    c->r[29] = c->r[29] + 0xffffffb0u;
    mem_w32(ram, c->r[29] + 0x00000048u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000044u, c->r[30]);
    mem_w32(ram, c->r[29] + 0x00000040u, c->r[16]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[6]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000054u);
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000060u);
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000005cu);
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000058u);
    mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000008cu);
    mem_w32(ram, c->r[30] + 0x0000001cu, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = c->r[2] & 0x0800u;
    mem_w32(ram, c->r[3] + 0x0000008cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    mem_w32(ram, c->r[2] + 0x00000090u, 0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    mem_w32(ram, c->r[2] + 0x00000094u, 0u);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x088d99d8u; c->r[5] = mem_r32(ram, c->r[30] + 0x00000004u); func_088d3244(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[16] = c->r[2] + 0x00000020u;
    c->r[2] = c->r[30] + 0x00000020u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[5] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[6] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[4] = c->r[2] + 0u;
    c->f[12] = mem_rf32(ram, c->r[3] + 0x00000004u);
    c->f[13] = mem_rf32(ram, c->r[5] + 0x00000008u);
    c->f[14] = mem_rf32(ram, c->r[6] + 0x0000000cu);
    c->f[15] = u2f(0u);
    { c->r[31] = 0x088d9a0cu; func_0880d140(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    mem_w32(ram, c->r[16] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000024u);
    mem_w32(ram, c->r[16] + 0x00000004u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000028u);
    mem_w32(ram, c->r[16] + 0x00000008u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000002cu);
    mem_w32(ram, c->r[16] + 0x0000000cu, c->r[2]);
    c->r[2] = c->r[30] + 0x00000020u;
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00005a40u);
    c->r[1] = 0x08a40000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0x00005a40u);
    c->r[4] = c->r[2] + 0u;
    c->f[12] = c->f[0];
    c->f[13] = u2f(0u);
    c->f[14] = c->f[1];
    c->f[15] = u2f(0u);
    { c->r[31] = 0x088d9a5cu; func_0880d140(c, ram); }
    c->r[3] = c->r[30] + 0x00000020u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000020u;
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x088d9a74u; c->r[5] = c->r[3] + 0u; func_0880d1a0(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[16] = c->r[2] + 0x00000040u;
    c->r[2] = c->r[30] + 0x00000020u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[5] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[6] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[4] = c->r[2] + 0u;
    c->f[12] = mem_rf32(ram, c->r[3] + 0x00000010u);
    c->f[13] = mem_rf32(ram, c->r[5] + 0x00000014u);
    c->f[14] = mem_rf32(ram, c->r[6] + 0x00000018u);
    c->f[15] = u2f(0u);
    { c->r[31] = 0x088d9aa8u; func_0880d140(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    mem_w32(ram, c->r[16] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000024u);
    mem_w32(ram, c->r[16] + 0x00000004u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000028u);
    mem_w32(ram, c->r[16] + 0x00000008u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000002cu);
    mem_w32(ram, c->r[16] + 0x0000000cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
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
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000005cu);
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x00000006u);
    c->f[0] = u2f(c->r[2]);
    c->f[1] = (f32)(s32)f2u(c->f[0]);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00005a44u);
    c->f[0] = c->f[1] / c->f[0];
    mem_wf32(ram, c->r[30] + 0x00000030u, c->f[0]);
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000030u);
    c->f[0] = u2f(0u);
    alx_c_cond_s(c, 2, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_088d9b3c; }
    { goto L_088d9b48; }
L_088d9b3c:
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00005a48u);
    mem_wf32(ram, c->r[30] + 0x00000030u, c->f[0]);
L_088d9b48:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[16] = c->r[2] + 0x00000070u;
    c->r[2] = c->r[30] + 0x00000020u;
    c->r[4] = c->r[2] + 0u;
    c->f[12] = mem_rf32(ram, c->r[30] + 0x00000030u);
    c->f[13] = mem_rf32(ram, c->r[30] + 0x00000030u);
    c->f[14] = mem_rf32(ram, c->r[30] + 0x00000030u);
    c->f[15] = u2f(0u);
    { c->r[31] = 0x088d9b70u; func_0880d140(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    mem_w32(ram, c->r[16] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000024u);
    mem_w32(ram, c->r[16] + 0x00000004u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000028u);
    mem_w32(ram, c->r[16] + 0x00000008u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000002cu);
    mem_w32(ram, c->r[16] + 0x0000000cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000060u);
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000014u);
    mem_w32(ram, c->r[30] + 0x00000034u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000034u);
    c->r[2] = 0u + 0x000000ffu;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_088d9bbc; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    { mem_w32(ram, c->r[2] + 0x00000080u, 0u); goto L_088d9be4; }
L_088d9bbc:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000034u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 5;
    c->r[2] = 0x08aa0000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000537cu);
    c->r[2] = c->r[2] + c->r[3];
    mem_w32(ram, c->r[4] + 0x00000080u, c->r[2]);
L_088d9be4:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000005cu);
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x00000000u);
    mem_w32(ram, c->r[30] + 0x00000038u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000038u);
    c->r[2] = 0u + 0x000000b4u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_088d9c1c; }
    c->r[4] = 0x08a40000u;
    { c->r[31] = 0x088d9c10u; c->r[4] = c->r[4] + 0x00005a1cu; func_089c6f64(c, ram); }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x088d9c1cu; c->r[5] = c->r[2] + 0u; func_089b7aec(c, ram); }
L_088d9c1c:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000038u);
    c->r[2] = 0u + 0x000000cau;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_088d9c44; }
    c->r[4] = 0x08a40000u;
    { c->r[31] = 0x088d9c38u; c->r[4] = c->r[4] + 0x00005a1cu; func_089c6f64(c, ram); }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x088d9c44u; c->r[5] = c->r[2] + 0u; func_089b7aec(c, ram); }
L_088d9c44:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000038u);
    c->r[2] = 0u + 0x000000cbu;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_088d9c6c; }
    c->r[4] = 0x08a40000u;
    { c->r[31] = 0x088d9c60u; c->r[4] = c->r[4] + 0x00005a1cu; func_089c6f64(c, ram); }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x088d9c6cu; c->r[5] = c->r[2] + 0u; func_089b7aec(c, ram); }
L_088d9c6c:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000038u);
    c->r[2] = 0u + 0x000000ccu;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_088d9c94; }
    c->r[4] = 0x08a40000u;
    { c->r[31] = 0x088d9c88u; c->r[4] = c->r[4] + 0x00005a1cu; func_089c6f64(c, ram); }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x088d9c94u; c->r[5] = c->r[2] + 0u; func_089b7aec(c, ram); }
L_088d9c94:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000038u);
    c->r[2] = 0u + 0x000000e4u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_088d9cbc; }
    c->r[4] = 0x08a40000u;
    { c->r[31] = 0x088d9cb0u; c->r[4] = c->r[4] + 0x00005a28u; func_089c6f64(c, ram); }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x088d9cbcu; c->r[5] = c->r[2] + 0u; func_089b7aec(c, ram); }
L_088d9cbc:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000038u);
    c->r[2] = 0u + 0x000000c9u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_088d9ce4; }
    c->r[4] = 0x08a40000u;
    { c->r[31] = 0x088d9cd8u; c->r[4] = c->r[4] + 0x00005a34u; func_089c6f64(c, ram); }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x088d9ce4u; c->r[5] = c->r[2] + 0u; func_089b7aec(c, ram); }
L_088d9ce4:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r16(ram, c->r[30] + 0x00000008u);
    mem_w16(ram, c->r[3] + 0x000000b2u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = mem_r16(ram, c->r[2] + 0x00000006u);
    mem_w16(ram, c->r[3] + 0x000000b0u, c->r[2]);
    c->r[16] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[30] + 0x00000020u;
    c->r[4] = c->r[2] + 0u;
    c->f[12] = u2f(0u);
    c->f[13] = u2f(0u);
    c->f[14] = u2f(0u);
    c->f[15] = u2f(0u);
    { c->r[31] = 0x088d9d24u; func_0880d140(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    mem_w32(ram, c->r[16] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000024u);
    mem_w32(ram, c->r[16] + 0x00000004u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000028u);
    mem_w32(ram, c->r[16] + 0x00000008u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000002cu);
    mem_w32(ram, c->r[16] + 0x0000000cu, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = 0x08aa0000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0xffffebd0u);
    mem_w32(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[2] = 0x08aa0000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0xffffebd4u);
    mem_w32(ram, c->r[3] + 0x00000004u, c->r[2]);
    c->r[2] = 0x08aa0000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0xffffebd8u);
    mem_w32(ram, c->r[3] + 0x00000008u, c->r[2]);
    c->r[2] = 0x08aa0000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0xffffebdcu);
    mem_w32(ram, c->r[3] + 0x0000000cu, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000024u);
    mem_wf32(ram, c->r[3] + 0x00000004u, c->f[0]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = 0u + 0xffffffffu;
    mem_w8(ram, c->r[3] + 0x000000acu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[16] = c->r[2] + 0x00000010u;
    c->r[2] = c->r[30] + 0x00000020u;
    c->r[4] = c->r[2] + 0u;
    c->f[12] = u2f(0u);
    c->f[13] = u2f(0u);
    c->f[14] = u2f(0u);
    c->f[15] = u2f(0u);
    { c->r[31] = 0x088d9dbcu; func_0880d140(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    mem_w32(ram, c->r[16] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000024u);
    mem_w32(ram, c->r[16] + 0x00000004u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000028u);
    mem_w32(ram, c->r[16] + 0x00000008u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000002cu);
    mem_w32(ram, c->r[16] + 0x0000000cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = c->r[2] + 0x00000010u;
    c->r[2] = 0x08aa0000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0xffffebd0u);
    mem_w32(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[2] = 0x08aa0000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0xffffebd4u);
    mem_w32(ram, c->r[3] + 0x00000004u, c->r[2]);
    c->r[2] = 0x08aa0000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0xffffebd8u);
    mem_w32(ram, c->r[3] + 0x00000008u, c->r[2]);
    c->r[2] = 0x08aa0000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0xffffebdcu);
    mem_w32(ram, c->r[3] + 0x0000000cu, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000024u);
    mem_wf32(ram, c->r[3] + 0x00000014u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00005a40u);
    mem_wf32(ram, c->r[2] + 0x000000b0u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000050u);
    c->r[16] = c->r[2] + 0x00000080u;
    c->r[2] = c->r[30] + 0x00000020u;
    c->r[4] = c->r[2] + 0u;
    c->f[12] = u2f(0u);
    c->f[13] = u2f(0u);
    c->f[14] = u2f(0u);
    c->f[15] = u2f(0u);
    { c->r[31] = 0x088d9e60u; func_0880d140(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    mem_w32(ram, c->r[16] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000024u);
    mem_w32(ram, c->r[16] + 0x00000004u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000028u);
    mem_w32(ram, c->r[16] + 0x00000008u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000002cu);
    mem_w32(ram, c->r[16] + 0x0000000cu, c->r[2]);
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
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000050u);
    c->r[16] = c->r[2] + 0x00000090u;
    c->r[2] = c->r[30] + 0x00000020u;
    c->r[4] = c->r[2] + 0u;
    c->f[12] = u2f(0u);
    c->f[13] = u2f(0u);
    c->f[14] = u2f(0u);
    c->f[15] = u2f(0u);
    { c->r[31] = 0x088d9edcu; func_0880d140(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    mem_w32(ram, c->r[16] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000024u);
    mem_w32(ram, c->r[16] + 0x00000004u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000028u);
    mem_w32(ram, c->r[16] + 0x00000008u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000002cu);
    mem_w32(ram, c->r[16] + 0x0000000cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[16] = c->r[2] + 0x00000020u;
    c->r[2] = c->r[30] + 0x00000020u;
    c->r[4] = c->r[2] + 0u;
    c->f[12] = u2f(0u);
    c->f[13] = u2f(0u);
    c->f[14] = u2f(0u);
    c->f[15] = u2f(0u);
    { c->r[31] = 0x088d9f24u; func_0880d140(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    mem_w32(ram, c->r[16] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000024u);
    mem_w32(ram, c->r[16] + 0x00000004u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000028u);
    mem_w32(ram, c->r[16] + 0x00000008u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000002cu);
    mem_w32(ram, c->r[16] + 0x0000000cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    { c->r[31] = 0x088d9f50u; c->r[4] = mem_r32(ram, c->r[2] + 0x00000050u); func_08808280(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000050u);
    c->r[2] = c->r[2] + 0x00000040u;
    { c->r[31] = 0x088d9f64u; c->r[4] = c->r[2] + 0u; func_08808280(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[6] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[4] = mem_r32(ram, c->r[2] + 0x00000050u);
    c->f[12] = mem_rf32(ram, c->r[3] + 0x00000044u);
    c->f[13] = mem_rf32(ram, c->r[5] + 0x00000040u);
    { c->r[31] = 0x088d9f88u; c->f[14] = mem_rf32(ram, c->r[6] + 0x00000048u); func_0885a0b8(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000050u);
    c->r[16] = c->r[2] + 0x000000a0u;
    c->r[2] = c->r[30] + 0x00000020u;
    c->r[4] = c->r[2] + 0u;
    c->f[12] = u2f(0u);
    c->f[13] = u2f(0u);
    c->f[14] = u2f(0u);
    c->f[15] = u2f(0u);
    { c->r[31] = 0x088d9fb4u; func_0880d140(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    mem_w32(ram, c->r[16] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000024u);
    mem_w32(ram, c->r[16] + 0x00000004u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000028u);
    mem_w32(ram, c->r[16] + 0x00000008u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000002cu);
    mem_w32(ram, c->r[16] + 0x0000000cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    mem_w32(ram, c->r[2] + 0x00000080u, 0u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = 0u + 0xffffffffu;
    mem_w8(ram, c->r[3] + 0x00000084u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    mem_w16(ram, c->r[2] + 0x00000086u, 0u);
    { c->r[31] = 0x088d9ff8u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000004u); func_088d9824(c, ram); }
    { c->r[31] = 0x088da000u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000004u); func_088d9878(c, ram); }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x088da00cu; c->r[5] = mem_r32(ram, c->r[30] + 0x00000004u); func_088d3b74(c, ram); }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = 0u + 0x00000096u;
    mem_w16(ram, c->r[3] + 0x000000a6u, c->r[2]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x088da024u; c->r[5] = mem_r32(ram, c->r[30] + 0x00000004u); func_088d9744(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    mem_w16(ram, c->r[2] + 0x000000aau, 0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000003u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_088da060; }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000003u);
    c->r[3] = c->r[2] << 4;
    c->r[2] = 0x08aa0000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x000053c4u);
    c->r[2] = c->r[2] + c->r[3];
    { mem_w32(ram, c->r[4] + 0x000000a0u, c->r[2]); goto L_088da068; }
L_088da060:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    mem_w32(ram, c->r[2] + 0x000000a0u, 0u);
L_088da068:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x00000000u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_088da09c; }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x00000000u);
    c->r[3] = c->r[2] << 5;
    c->r[2] = 0x08aa0000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x000053c0u);
    c->r[2] = c->r[2] + c->r[3];
    { mem_w32(ram, c->r[4] + 0x000000a4u, c->r[2]); goto L_088da0a4; }
L_088da09c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    mem_w32(ram, c->r[2] + 0x000000a4u, 0u);
L_088da0a4:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = mem_r16(ram, c->r[2] + 0x00000008u);
    mem_w16(ram, c->r[3] + 0x000000aeu, c->r[2]);
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x088da0c0u; c->r[4] = c->r[4] + 0x00000af4u; func_0880d294(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = 0u + 0x00000002u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_088da0e0; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    mem_w16(ram, c->r[2] + 0x000000aeu, 0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    mem_w16(ram, c->r[2] + 0x00000008u, 0u);
L_088da0e0:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r8(ram, c->r[2] + 0x0000001eu);
    mem_w8(ram, c->r[3] + 0x000000b7u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000008cu);
    c->r[2] = c->r[2] & 0x0800u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_088da10c; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    mem_w32(ram, c->r[2] + 0x000000b8u, 0u);
L_088da10c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    mem_w32(ram, c->r[2] + 0x000000bcu, 0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    mem_w32(ram, c->r[2] + 0x000000c0u, 0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    mem_w32(ram, c->r[2] + 0x000000c8u, 0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    mem_w32(ram, c->r[2] + 0x000000d4u, 0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    mem_w16(ram, c->r[2] + 0x000000d2u, 0u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = 0u + 0x0000000au;
    mem_w8(ram, c->r[3] + 0x0000009au, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000005cu);
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x00000000u);
    mem_w32(ram, c->r[30] + 0x00000038u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000038u);
    c->r[2] = 0u + 0x000000e5u;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_088da178; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000038u);
    c->r[2] = 0u + 0x000000e5u;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_088da178; }
    { goto L_088da180; }
L_088da178:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    mem_w8(ram, c->r[2] + 0x0000009au, 0u);
L_088da180:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = 0u + 0xffffffffu;
    mem_w8(ram, c->r[3] + 0x000000d0u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    mem_w8(ram, c->r[2] + 0x000000d1u, 0u);
    c->r[6] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = 0u + 0xffffffffu;
    mem_w8(ram, c->r[3] + 0x000000dfu, c->r[2]);
    c->r[2] = 0u + 0xffffffffu;
    mem_w8(ram, c->r[4] + 0x000000deu, c->r[2]);
    c->r[2] = 0u + 0xffffffffu;
    mem_w8(ram, c->r[5] + 0x000000ddu, c->r[2]);
    c->r[2] = 0u + 0xffffffffu;
    mem_w8(ram, c->r[6] + 0x000000dcu, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000024u);
    mem_w32(ram, c->r[3] + 0x000000d4u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x000000d4u);
    c->r[2] = 0x00040000u;
    c->r[2] = c->r[3] & c->r[2];
    { int _c = (c->r[2] == 0u); if (_c) goto L_088da200; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000088u);
    c->r[2] = c->r[2] | 0x0010u;
    mem_w32(ram, c->r[3] + 0x00000088u, c->r[2]);
L_088da200:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x000000d4u);
    c->r[2] = 0x00080000u;
    c->r[2] = c->r[3] & c->r[2];
    { int _c = (c->r[2] == 0u); if (_c) goto L_088da22c; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000008cu);
    c->r[2] = c->r[2] | 0x1000u;
    mem_w32(ram, c->r[3] + 0x0000008cu, c->r[2]);
L_088da22c:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x000000d4u);
    mem_w32(ram, c->r[3] + 0x000000d8u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    mem_w16(ram, c->r[2] + 0x000000e0u, 0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    mem_w16(ram, c->r[2] + 0x000000e4u, 0u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = 0u + 0xffffffffu;
    mem_w32(ram, c->r[3] + 0x000000e8u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[3] = c->r[2] << 3;
    c->r[2] = 0x08aa0000u;
    c->r[2] = c->r[2] + 0x000049dcu;
    c->r[3] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    mem_w32(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[3] = c->r[2] << 3;
    c->r[2] = 0x08aa0000u;
    c->r[2] = c->r[2] + 0x000049e0u;
    c->r[3] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    mem_w32(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x088da29cu; c->r[5] = mem_r32(ram, c->r[30] + 0x00000004u); func_088d2cb4(c, ram); }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x088da2a8u; c->r[5] = mem_r32(ram, c->r[30] + 0x00000004u); func_088d8f58(c, ram); }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x088da2b4u; c->r[5] = mem_r32(ram, c->r[30] + 0x00000004u); func_088d8e94(c, ram); }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x088da2c0u; c->r[5] = mem_r32(ram, c->r[30] + 0x00000004u); func_088d2ee4(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000005cu);
    c->r[3] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x00000000u);
    c->r[2] = 0u + 0x000000adu;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_088da2e8; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x000000b2u);
    { c->r[31] = 0x088da2e8u; c->r[4] = c->r[2] + 0u; func_088ded64(c, ram); }
L_088da2e8:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000005cu);
    c->r[3] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x00000000u);
    c->r[2] = 0u + 0x000000dau;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_088da310; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x000000b2u);
    { c->r[31] = 0x088da310u; c->r[4] = c->r[2] + 0u; func_088dede8(c, ram); }
L_088da310:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000005cu);
    c->r[3] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x00000000u);
    c->r[2] = 0u + 0x000000a7u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_088da330; }
    { c->r[31] = 0x088da330u; func_088df354(c, ram); }
L_088da330:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000005cu);
    c->r[3] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x00000000u);
    c->r[2] = 0u + 0x000000d7u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_088da358; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x000000b2u);
    { c->r[31] = 0x088da358u; c->r[4] = c->r[2] + 0u; func_088df184(c, ram); }
L_088da358:
    c->r[2] = 0x08aa0000u;
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00004962u);
    c->r[3] = c->r[2] + 0xffffffe8u;
    c->r[2] = 0u + 0xffffffe8u;
    c->r[2] = c->r[2] + 0x00000019u;
    c->r[2] = (c->r[2] < c->r[3]) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_088da3d0; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000005cu);
    c->r[3] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x00000000u);
    c->r[2] = 0u + 0x000000a7u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_088da3a4; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000094u);
    c->r[2] = c->r[2] | 0x4000u;
    mem_w32(ram, c->r[3] + 0x00000094u, c->r[2]);
L_088da3a4:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000005cu);
    c->r[3] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x00000000u);
    c->r[2] = 0u + 0x000000a8u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_088da3d0; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000094u);
    c->r[2] = c->r[2] | 0x4000u;
    mem_w32(ram, c->r[3] + 0x00000094u, c->r[2]);
L_088da3d0:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000050u);
    c->r[2] = c->r[2] + 0x000000e0u;
    { c->r[31] = 0x088da3e4u; c->r[4] = c->r[2] + 0u; func_088d98a8(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000050u);
    c->r[2] = c->r[2] + 0x000000e8u;
    { c->r[31] = 0x088da3f8u; c->r[4] = c->r[2] + 0u; func_088d98fc(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000054u);
    c->r[3] = mem_r8(ram, c->r[2] + 0x00000000u);
    c->r[2] = 0u + 0x00000002u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_088da41c; }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x088da41cu; c->r[5] = 0x02000000u; func_0884d1b0(c, ram); }
L_088da41c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x000000d4u);
    c->r[2] = 0x00400000u;
    c->r[2] = c->r[3] & c->r[2];
    { int _c = (c->r[2] == 0u); if (_c) goto L_088da440; }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x088da440u; c->r[5] = 0x02000000u; func_0884d1b0(c, ram); }
L_088da440:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x088da44cu; c->r[5] = 0x08000000u; func_0884d1b0(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000060u);
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x00000008u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_088da4a8; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000054u);
    c->r[3] = mem_r8(ram, c->r[2] + 0x00000000u);
    c->r[2] = 0u + 0x00000008u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_088da484; }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x088da484u; c->r[5] = 0x08000000u; func_0884d1ec(c, ram); }
L_088da484:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000054u);
    c->r[3] = mem_r8(ram, c->r[2] + 0x00000000u);
    c->r[2] = 0u + 0x00000009u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_088da4a8; }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x088da4a8u; c->r[5] = 0x08000000u; func_0884d1ec(c, ram); }
L_088da4a8:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x000000d4u);
    c->r[2] = 0x00800000u;
    c->r[2] = c->r[3] & c->r[2];
    { int _c = (c->r[2] == 0u); if (_c) goto L_088da4cc; }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x088da4ccu; c->r[5] = 0x08000000u; func_0884d1ec(c, ram); }
L_088da4cc:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000048u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000044u);
    c->r[16] = mem_r32(ram, c->r[29] + 0x00000040u);
    { c->r[29] = c->r[29] + 0x00000050u; return; }
    return; /* fell out of func_088d9950 */
}

/* func_088de750  0x088de750..0x088de790  64 bytes, source=sweep */
void func_088de750(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x088de750u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[2] = 0x08aa0000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0xffffed00u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_088de780; }
    c->r[3] = 0x08aa0000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0xffffed00u);
    c->r[2] = mem_r8(ram, c->r[30] + 0x00000000u);
    mem_w8(ram, c->r[3] + 0x0000001du, c->r[2]);
L_088de780:
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_088de750 */
}

/* func_088df518  0x088df518..0x088df560  72 bytes, source=sweep */
void func_088df518(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x088df518u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[2] = 0x08aa0000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0xffffed00u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_088df540; }
    { goto L_088df550; }
L_088df540:
    c->r[3] = 0x08aa0000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0xffffed00u);
    c->r[2] = mem_r8(ram, c->r[30] + 0x00000000u);
    mem_w8(ram, c->r[3] + 0x0000002eu, c->r[2]);
L_088df550:
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_088df518 */
}

/* func_088e57c0  0x088e57c0..0x088e5bb0  1008 bytes, source=fde */
void func_088e57c0(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x088e57c0u);
    c->r[29] = c->r[29] + 0xffffffb0u;
    mem_w32(ram, c->r[29] + 0x0000004cu, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000048u, c->r[30]);
    mem_w32(ram, c->r[29] + 0x00000044u, c->r[17]);
    mem_w32(ram, c->r[29] + 0x00000040u, c->r[16]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[6]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000030u);
    c->r[2] = c->r[2] + 0xfffffffdu;
    mem_w32(ram, c->r[30] + 0x00000030u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000030u);
    c->r[2] = c->r[3] & 0x00ffu;
    c->r[2] = (c->r[2] < 0x00000007u) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_088e5b94; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000030u);
    c->r[2] = c->r[3] & 0x00ffu;
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08a40000u;
    c->r[2] = c->r[2] + 0x00005d58u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    { u32 _t = c->r[2]; switch (_t) { case 0x088e582cu: goto L_088e582c; case 0x088e58c4u: goto L_088e58c4; case 0x088e59bcu: goto L_088e59bc; case 0x088e5a8cu: goto L_088e5a8c; case 0x088e5ad0u: goto L_088e5ad0; case 0x088e5b18u: goto L_088e5b18; case 0x088e5b60u: goto L_088e5b60; default: recomp_trap_unknown_indirect(c, ram, 0x088e5824u, _t); return; } }
L_088e582c:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000001cu);
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x00000002u);
    c->f[0] = u2f(c->r[2]);
    c->f[1] = (f32)(s32)f2u(c->f[0]);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00005d40u);
    c->f[0] = c->f[1] * c->f[0];
    mem_wf32(ram, c->r[3] + 0x00000038u, c->f[0]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000001cu);
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x00000004u);
    c->f[0] = u2f(c->r[2]);
    c->f[1] = (f32)(s32)f2u(c->f[0]);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00005d44u);
    c->f[0] = c->f[1] * c->f[0];
    mem_wf32(ram, c->r[3] + 0x0000003cu, c->f[0]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000001cu);
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x00000006u);
    c->f[0] = u2f(c->r[2]);
    c->f[1] = (f32)(s32)f2u(c->f[0]);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00005d44u);
    c->f[0] = c->f[1] * c->f[0];
    mem_wf32(ram, c->r[3] + 0x00000040u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00005d48u);
    mem_wf32(ram, c->r[2] + 0x00000044u, c->f[0]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = 0u + 0x00000004u;
    { mem_w8(ram, c->r[3] + 0x00000030u, c->r[2]); goto L_088e5b94; }
L_088e58c4:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000040u);
    c->f[0] = mem_rf32(ram, c->r[3] + 0x00000044u);
    alx_c_cond_s(c, 12, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_088e58ec; }
    { goto L_088e5928; }
L_088e58ec:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000044u);
    c->f[1] = -c->f[0];
    c->f[0] = mem_rf32(ram, c->r[3] + 0x00000040u);
    alx_c_cond_s(c, 12, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_088e5918; }
    { goto L_088e5928; }
L_088e5918:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = 0u + 0x00000005u;
    { mem_w8(ram, c->r[3] + 0x00000030u, c->r[2]); goto L_088e5b94; }
L_088e5928:
    c->r[16] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[17] = c->r[30] + 0x00000010u;
    c->r[3] = c->r[30] + 0x00000020u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000030u;
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00005d4cu);
    c->r[4] = c->r[3] + 0u;
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x088e5954u; c->f[12] = c->f[0]; func_0884c120(c, ram); }
    c->r[3] = c->r[30] + 0x00000020u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000020u;
    c->r[4] = c->r[17] + 0u;
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x088e5970u; c->r[6] = c->r[3] + 0u; func_08859f30(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    mem_w32(ram, c->r[16] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    mem_w32(ram, c->r[16] + 0x00000004u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    mem_w32(ram, c->r[16] + 0x00000008u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    mem_w32(ram, c->r[16] + 0x0000000cu, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000024u);
    mem_wf32(ram, c->r[3] + 0x00000004u, c->f[0]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[6] = mem_r32(ram, c->r[30] + 0x00000008u);
    { c->r[31] = 0x088e59b4u; c->r[7] = mem_r32(ram, c->r[30] + 0x00000004u); func_088d7000(c, ram); }
    { goto L_088e5b94; }
L_088e59bc:
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
    { c->r[31] = 0x088e59f4u; func_0880d140(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    mem_w32(ram, c->r[16] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    mem_w32(ram, c->r[16] + 0x00000004u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    mem_w32(ram, c->r[16] + 0x00000008u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    mem_w32(ram, c->r[16] + 0x0000000cu, c->r[2]);
    c->r[16] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    { c->r[31] = 0x088e5a24u; c->f[12] = mem_rf32(ram, c->r[2] + 0x00000028u); func_088ef5b0(c, ram); }
    mem_wf32(ram, c->r[16] + 0x00000028u, c->f[0]);
    c->r[16] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[30] + 0x00000010u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00005d50u);
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[4] = c->r[2] + 0u;
    c->f[12] = mem_rf32(ram, c->r[3] + 0x00000040u);
    c->f[13] = c->f[0];
    c->f[14] = mem_rf32(ram, c->r[5] + 0x0000003cu);
    c->f[15] = u2f(0u);
    { c->r[31] = 0x088e5a5cu; func_0880d140(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    mem_w32(ram, c->r[16] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    mem_w32(ram, c->r[16] + 0x00000004u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    mem_w32(ram, c->r[16] + 0x00000008u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    mem_w32(ram, c->r[16] + 0x0000000cu, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = 0u + 0x00000006u;
    { mem_w8(ram, c->r[3] + 0x00000030u, c->r[2]); goto L_088e5b94; }
L_088e5a8c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000028u);
    c->f[0] = u2f(0u);
    alx_c_cond_s(c, 2, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_088e5ab0; }
    { goto L_088e5b94; }
L_088e5ab0:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00005d54u);
    mem_wf32(ram, c->r[2] + 0x00000020u, c->f[0]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = 0u + 0x00000007u;
    { mem_w8(ram, c->r[3] + 0x00000030u, c->r[2]); goto L_088e5b94; }
L_088e5ad0:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000020u);
    c->f[0] = u2f(0u);
    alx_c_cond_s(c, 2, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_088e5af4; }
    { goto L_088e5b94; }
L_088e5af4:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000048u);
    c->f[0] = -c->f[0];
    mem_wf32(ram, c->r[3] + 0x00000028u, c->f[0]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = 0u + 0x00000008u;
    { mem_w8(ram, c->r[3] + 0x00000030u, c->r[2]); goto L_088e5b94; }
L_088e5b18:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000028u);
    c->f[0] = u2f(0u);
    alx_c_cond_s(c, 2, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_088e5b3c; }
    { goto L_088e5b94; }
L_088e5b3c:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000040u);
    c->f[0] = -c->f[0];
    mem_wf32(ram, c->r[3] + 0x00000020u, c->f[0]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = 0u + 0x00000009u;
    { mem_w8(ram, c->r[3] + 0x00000030u, c->r[2]); goto L_088e5b94; }
L_088e5b60:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000020u);
    c->f[0] = u2f(0u);
    alx_c_cond_s(c, 2, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_088e5b84; }
    { goto L_088e5b94; }
L_088e5b84:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    mem_w8(ram, c->r[2] + 0x00000030u, 0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    mem_w16(ram, c->r[2] + 0x00000034u, 0u);
L_088e5b94:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x0000004cu);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000048u);
    c->r[17] = mem_r32(ram, c->r[29] + 0x00000044u);
    c->r[16] = mem_r32(ram, c->r[29] + 0x00000040u);
    { c->r[29] = c->r[29] + 0x00000050u; return; }
    return; /* fell out of func_088e57c0 */
}

/* func_088ea768  0x088ea768..0x088ea8cc  356 bytes, source=fde */
void func_088ea768(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x088ea768u);
    c->r[29] = c->r[29] + 0xffffffb0u;
    mem_w32(ram, c->r[29] + 0x00000044u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000040u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[6]);
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[7]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x000000a5u);
    mem_w32(ram, c->r[30] + 0x00000030u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000030u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_088ea7b8; }
    c->r[2] = 0u + 0x00000002u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000030u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_088ea7d8; }
    { goto L_088ea8b8; }
L_088ea7b8:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000014u);
    mem_w32(ram, c->r[3] + 0x000000a0u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = 0u + 0x00000002u;
    { mem_w8(ram, c->r[3] + 0x000000a5u, c->r[2]); goto L_088ea8b8; }
L_088ea7d8:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000001u);
    c->r[3] = c->r[2] << 3;
    c->r[2] = 0x08aa0000u;
    c->r[2] = c->r[2] + 0x000049dcu;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_088ea818; }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x088ea810u; c->r[5] = mem_r32(ram, c->r[30] + 0x00000004u); func_088d3bfc(c, ram); }
    { goto L_088ea8b8; }
L_088ea818:
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
    { c->r[31] = 0x088ea85cu; func_0880d140(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = c->r[2] + 0x00000020u;
    c->r[3] = c->r[30] + 0x00000020u;
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x088ea878u; c->r[6] = c->r[3] + 0u; func_08859fd4(c, ram); }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000004u);
    { c->r[31] = 0x088ea888u; c->r[6] = mem_r32(ram, c->r[30] + 0x00000004u); func_088d6f10(c, ram); }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x000000a0u);
    c->r[2] = c->r[2] + 0xffffffffu;
    mem_w32(ram, c->r[3] + 0x000000a0u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x000000a0u);
    { int _c = ((s32)c->r[2] >= 0); if (_c) goto L_088ea8b8; }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x088ea8b8u; c->r[5] = mem_r32(ram, c->r[30] + 0x00000004u); func_088d3bfc(c, ram); }
L_088ea8b8:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000044u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000040u);
    { c->r[29] = c->r[29] + 0x00000050u; return; }
    return; /* fell out of func_088ea768 */
}

/* func_088f0c70  0x088f0c70..0x088f0e54  484 bytes, source=fde */
void func_088f0c70(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x088f0c70u);
    c->r[29] = c->r[29] + 0xffffffd0u;
    mem_w32(ram, c->r[29] + 0x00000028u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000024u, c->r[30]);
    mem_w32(ram, c->r[29] + 0x00000020u, c->r[16]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    c->r[2] = c->r[30] + 0x00000010u;
    { c->r[31] = 0x088f0c98u; c->r[4] = c->r[2] + 0u; func_08808240(c, ram); }
    { c->r[31] = 0x088f0ca0u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000004u); func_08820c6c(c, ram); }
    c->f[1] = c->f[0];
    c->f[0] = u2f(0u);
    alx_c_cond_s(c, 2, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_088f0cc0; }
    { goto L_088f0ce4; }
L_088f0cc0:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->f[0] = u2f(0u);
    mem_wf32(ram, c->r[2] + 0x0000000cu, c->f[0]);
    mem_wf32(ram, c->r[3] + 0x00000008u, c->f[0]);
    mem_wf32(ram, c->r[5] + 0x00000004u, c->f[0]);
    mem_wf32(ram, c->r[4] + 0x00000000u, c->f[0]);
L_088f0ce4:
    c->r[2] = c->r[30] + 0x00000010u;
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x088f0cf4u; c->r[5] = mem_r32(ram, c->r[30] + 0x00000004u); func_0884c1d8(c, ram); }
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000014u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00006108u);
    alx_c_cond_s(c, 12, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_088f0d18; }
    { goto L_088f0d50; }
L_088f0d18:
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000014u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x0000610cu);
    alx_c_cond_s(c, 12, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_088f0d3c; }
    { goto L_088f0d50; }
L_088f0d3c:
    c->r[16] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x088f0d48u; c->f[12] = mem_rf32(ram, c->r[30] + 0x00000014u); func_08a0fb24(c, ram); }
    { mem_wf32(ram, c->r[16] + 0x00000000u, c->f[0]); goto L_088f0d60; }
L_088f0d50:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00006110u);
    mem_wf32(ram, c->r[2] + 0x00000000u, c->f[0]);
L_088f0d60:
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000018u);
    c->f[0] = u2f(0u);
    alx_c_cond_s(c, 2, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_088f0d80; }
    { goto L_088f0dc8; }
L_088f0d80:
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000010u);
    c->f[0] = u2f(0u);
    alx_c_cond_s(c, 14, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_088f0da0; }
    { goto L_088f0db4; }
L_088f0da0:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00006110u);
    { mem_wf32(ram, c->r[2] + 0x00000004u, c->f[0]); goto L_088f0e3c; }
L_088f0db4:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00006114u);
    { mem_wf32(ram, c->r[2] + 0x00000004u, c->f[0]); goto L_088f0e3c; }
L_088f0dc8:
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000010u);
    c->f[0] = u2f(0u);
    alx_c_cond_s(c, 2, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_088f0de8; }
    { goto L_088f0e28; }
L_088f0de8:
    c->f[1] = mem_rf32(ram, c->r[30] + 0x00000018u);
    c->f[0] = u2f(0u);
    alx_c_cond_s(c, 14, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_088f0e08; }
    { goto L_088f0e14; }
L_088f0e08:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    { mem_w32(ram, c->r[2] + 0x00000004u, 0u); goto L_088f0e3c; }
L_088f0e14:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00006118u);
    { mem_wf32(ram, c->r[2] + 0x00000004u, c->f[0]); goto L_088f0e3c; }
L_088f0e28:
    c->r[16] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->f[12] = mem_rf32(ram, c->r[30] + 0x00000010u);
    { c->r[31] = 0x088f0e38u; c->f[13] = mem_rf32(ram, c->r[30] + 0x00000018u); func_088ef254(c, ram); }
    mem_wf32(ram, c->r[16] + 0x00000004u, c->f[0]);
L_088f0e3c:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000028u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000024u);
    c->r[16] = mem_r32(ram, c->r[29] + 0x00000020u);
    { c->r[29] = c->r[29] + 0x00000030u; return; }
    return; /* fell out of func_088f0c70 */
}

/* func_088f5320  0x088f5320..0x088f5560  576 bytes, source=fde */
void func_088f5320(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x088f5320u);
    c->r[29] = c->r[29] + 0xffffffc0u;
    mem_w32(ram, c->r[29] + 0x00000034u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000030u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    c->r[2] = 0u + 0x0000001cu;
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]);
    c->r[2] = 0u + 0x0000001eu;
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
    c->r[2] = 0u + 0x0000001fu;
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]);
    c->r[2] = 0u + 0x00000020u;
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = 0u + 0x00000001u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_088f5388; }
    c->r[2] = 0u + 0x0000001du;
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]);
    c->r[2] = 0u + 0x00000021u;
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
    c->r[2] = 0u + 0x00000022u;
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]);
    c->r[2] = 0u + 0x00000023u;
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
L_088f5388:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    mem_w32(ram, c->r[30] + 0x00000024u, c->r[2]);
    c->r[2] = 0u + 0x00000001u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000024u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_088f5494; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000024u);
    c->r[2] = ((s32)c->r[3] < (s32)0x00000002u) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_088f53c4; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000024u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_088f53dc; }
    { goto L_088f554c; }
L_088f53c4:
    c->r[2] = 0u + 0x00000002u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000024u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_088f54b4; }
    { goto L_088f554c; }
L_088f53dc:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[3] = c->r[2] << 3;
    c->r[2] = 0x08aa0000u;
    c->r[2] = c->r[2] + 0x000049dcu;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_088f541c; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x000000b0u);
    { int _c = ((s32)c->r[2] < 0); if (_c) goto L_088f541c; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    mem_w16(ram, c->r[2] + 0x000000b0u, 0u);
L_088f541c:
    c->r[4] = mem_r32(ram, c->r[30] + 0x0000000cu);
    { c->r[31] = 0x088f5428u; c->r[5] = 0u + 0x00000004u; func_088f4f98(c, ram); }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000010u);
    { c->r[31] = 0x088f5434u; c->r[5] = 0u + 0x00000004u; func_088f4f98(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[3] = c->r[2] << 3;
    c->r[2] = 0x08aa0000u;
    c->r[2] = c->r[2] + 0x000049e0u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    mem_w32(ram, c->r[30] + 0x00000020u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_088f554c; }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x000000d4u);
    c->r[2] = 0u + 0xffffff7fu;
    c->r[2] = c->r[3] & c->r[2];
    mem_w32(ram, c->r[4] + 0x000000d4u, c->r[2]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x000000d4u);
    c->r[2] = 0xffff0000u;
    c->r[2] = c->r[2] | 0x7fffu;
    c->r[2] = c->r[3] & c->r[2];
    { mem_w32(ram, c->r[4] + 0x000000d4u, c->r[2]); goto L_088f554c; }
L_088f5494:
    c->r[4] = mem_r32(ram, c->r[30] + 0x0000000cu);
    { c->r[31] = 0x088f54a0u; c->r[5] = 0u + 0x00000008u; func_088f4f98(c, ram); }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000010u);
    { c->r[31] = 0x088f54acu; c->r[5] = 0u + 0x00000008u; func_088f4f98(c, ram); }
    { goto L_088f554c; }
L_088f54b4:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[3] = c->r[2] << 3;
    c->r[2] = 0x08aa0000u;
    c->r[2] = c->r[2] + 0x000049e0u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    mem_w32(ram, c->r[30] + 0x0000001cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    { int _c = (c->r[2] == 0u); if (_c) goto L_088f54e4; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    mem_w16(ram, c->r[2] + 0x000000a6u, 0u);
L_088f54e4:
    c->r[4] = mem_r32(ram, c->r[30] + 0x0000000cu);
    { c->r[31] = 0x088f54f0u; c->r[5] = 0u + 0x00000002u; func_088f4f98(c, ram); }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000010u);
    { c->r[31] = 0x088f54fcu; c->r[5] = 0u + 0x00000002u; func_088f4f98(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[3] = c->r[2] << 3;
    c->r[2] = 0x08aa0000u;
    c->r[2] = c->r[2] + 0x000049e0u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    mem_w32(ram, c->r[30] + 0x0000001cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    { int _c = (c->r[2] == 0u); if (_c) goto L_088f554c; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = mem_r32(ram, c->r[2] + 0x000000d4u);
    c->r[2] = c->r[2] | 0x0080u;
    mem_w32(ram, c->r[3] + 0x000000d4u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = mem_r32(ram, c->r[2] + 0x000000d4u);
    c->r[2] = c->r[2] | 0x8000u;
    mem_w32(ram, c->r[3] + 0x000000d4u, c->r[2]);
L_088f554c:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000034u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000030u);
    { c->r[29] = c->r[29] + 0x00000040u; return; }
    return; /* fell out of func_088f5320 */
}

/* func_088fadc8  0x088fadc8..0x088faed8  272 bytes, source=fde */
void func_088fadc8(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x088fadc8u);
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
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_088fae78; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = ((s32)c->r[3] < (s32)0x00000002u) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_088fae30; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_088fae58; }
    { goto L_088faec4; }
L_088fae30:
    c->r[2] = 0u + 0x00000002u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000014u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_088faeac; }
    c->r[2] = 0u + 0x00000019u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000014u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_088faebc; }
    { goto L_088faec4; }
L_088fae58:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    mem_w8(ram, c->r[2] + 0x00000000u, 0u);
    { c->r[31] = 0x088fae68u; c->r[4] = mem_r32(ram, c->r[30] + 0x0000000cu); func_088fa06c(c, ram); }
    { c->r[31] = 0x088fae70u; func_08925598(c, ram); }
    { goto L_088faec4; }
L_088fae78:
    { c->r[31] = 0x088fae80u; c->r[4] = mem_r32(ram, c->r[30] + 0x0000000cu); func_088fa180(c, ram); }
    { c->r[31] = 0x088fae88u; c->r[4] = 0u + 0x00000001u; func_089c5f10(c, ram); }
    { int _c = (c->r[2] == 0u); if (_c) goto L_088faec4; }
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00002e04u;
    c->r[5] = 0u + 0x00000011u;
    { c->r[31] = 0x088faea4u; c->r[6] = 0u + 0u; func_08813280(c, ram); }
    { goto L_088faec4; }
L_088faeac:
    { c->r[31] = 0x088faeb4u; c->r[4] = mem_r32(ram, c->r[30] + 0x0000000cu); func_088fa43c(c, ram); }
    { goto L_088faec4; }
L_088faebc:
    { c->r[31] = 0x088faec4u; c->r[4] = mem_r32(ram, c->r[30] + 0x0000000cu); func_088fa45c(c, ram); }
L_088faec4:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000024u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000020u);
    { c->r[29] = c->r[29] + 0x00000030u; return; }
    return; /* fell out of func_088fadc8 */
}

/* func_08900a3c  0x08900a3c..0x08900aa8  108 bytes, source=sweep */
void func_08900a3c(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08900a3cu);
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
    { c->r[31] = 0x08900a78u; c->r[5] = c->r[2] + 0u; func_089009c0(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = c->r[2] >> 24;
    c->r[2] = 0x58000000u;
    c->r[2] = c->r[3] | c->r[2];
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x08900a94u; c->r[5] = c->r[2] + 0u; func_089009c0(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_08900a3c */
}

/* func_089033a0  0x089033a0..0x089033f0  80 bytes, source=sweep */
void func_089033a0(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089033a0u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 1;
    c->r[2] = 0x08a50000u;
    c->r[2] = c->r[2] + 0x000079e0u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x00000000u);
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_089033a0 */
}

/* func_08906f70  0x08906f70..0x08907028  184 bytes, source=fde */
void func_08906f70(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08906f70u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[2] = 0u + 0x00000028u;
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000004u);
    c->f[1] = (f32)(s32)f2u(c->f[0]);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x0000669cu);
    c->f[1] = c->f[1] / c->f[0];
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x000066a0u);
    c->f[0] = c->f[1] * c->f[0];
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    mem_wf32(ram, c->r[30] + 0x00000008u, c->f[0]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = 0x66660000u;
    c->r[2] = c->r[2] | 0x6667u;
    alx_mult(c, c->r[4], c->r[2]);
    c->r[2] = c->hi;
    c->r[3] = (u32)((s32)c->r[2] >> 4);
    c->r[2] = (u32)((s32)c->r[4] >> 31);
    c->r[3] = c->r[3] - c->r[2];
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 3;
    c->r[2] = 0u + 0x00000050u;
    c->r[2] = c->r[2] - c->r[3];
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = 0u + 0x0000000au;
    c->r[6] = 0u + 0x00000005u;
    c->r[7] = 0u + 0x00000028u;
    c->r[8] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[9] = mem_r32(ram, c->r[30] + 0x0000000cu);
    { c->r[31] = 0x08907014u; c->r[10] = 0u + 0x00000001u; func_08907028(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_08906f70 */
}

/* func_089103b8  0x089103b8..0x08910640  648 bytes, source=sweep */
void func_089103b8(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089103b8u);
    c->r[29] = c->r[29] + 0xffffffc0u;
    mem_w32(ram, c->r[29] + 0x00000034u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000030u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_wf32(ram, c->r[30] + 0x00000004u, c->f[12]);
    mem_wf32(ram, c->r[30] + 0x00000008u, c->f[13]);
    mem_wf32(ram, c->r[30] + 0x0000000cu, c->f[14]);
    mem_wf32(ram, c->r[30] + 0x00000010u, c->f[15]);
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[5]);
    { c->r[31] = 0x089103e8u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000014u); func_089035ac(c, ram); }
    c->r[4] = 0u + 0x00000014u;
    { c->r[31] = 0x089103f4u; c->r[5] = 0u + 0x00000010u; func_0881a1d4(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000000u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000004u);
    c->f[1] = c->f[1] - c->f[0];
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000008u);
    c->f[1] = c->f[1] - c->f[0];
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000010u);
    c->f[0] = c->f[1] * c->f[0];
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    c->r[2] = f2u(c->f[0]);
    c->r[2] = c->r[2] + 0x00000008u;
    mem_w16(ram, c->r[30] + 0x0000001cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000004u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000004u);
    c->f[1] = c->f[1] - c->f[0];
    c->f[0] = mem_rf32(ram, c->r[30] + 0x0000000cu);
    c->f[1] = c->f[1] - c->f[0];
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000010u);
    c->f[0] = c->f[1] * c->f[0];
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    c->r[2] = f2u(c->f[0]);
    c->r[2] = c->r[2] + 0x00000088u;
    mem_w16(ram, c->r[30] + 0x0000001eu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000000u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000004u);
    c->f[1] = c->f[1] + c->f[0];
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000008u);
    c->f[1] = c->f[1] - c->f[0];
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000010u);
    c->f[0] = c->f[1] * c->f[0];
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    c->r[2] = f2u(c->f[0]);
    c->r[2] = c->r[2] + 0x00000008u;
    mem_w16(ram, c->r[30] + 0x00000020u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000004u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000004u);
    c->f[1] = c->f[1] + c->f[0];
    c->f[0] = mem_rf32(ram, c->r[30] + 0x0000000cu);
    c->f[1] = c->f[1] - c->f[0];
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000010u);
    c->f[0] = c->f[1] * c->f[0];
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    c->r[2] = f2u(c->f[0]);
    c->r[2] = c->r[2] + 0x00000088u;
    mem_w16(ram, c->r[30] + 0x00000022u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = mem_r16(ram, c->r[30] + 0x0000001cu);
    mem_w16(ram, c->r[3] + 0x00000004u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = mem_r16(ram, c->r[30] + 0x0000001eu);
    mem_w16(ram, c->r[3] + 0x00000006u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[3] = c->r[2] + 0x0000000au;
    c->r[2] = mem_r16(ram, c->r[30] + 0x00000020u);
    mem_w16(ram, c->r[3] + 0x00000004u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[3] = c->r[2] + 0x0000000au;
    c->r[2] = mem_r16(ram, c->r[30] + 0x00000022u);
    mem_w16(ram, c->r[3] + 0x00000006u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = 0u + 0x00000168u;
    mem_w16(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = 0u + 0x000000a8u;
    mem_w16(ram, c->r[3] + 0x00000002u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[3] = c->r[2] + 0x0000000au;
    c->r[2] = 0u + 0x000001e8u;
    mem_w16(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[3] = c->r[2] + 0x0000000au;
    c->r[2] = 0u + 0x00000128u;
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
    { c->r[31] = 0x08910584u; c->r[5] = c->r[2] + 0u; func_089207f8(c, ram); }
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000700u);
    c->r[2] = 0u + 0x000002e8u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[4] = c->lo;
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
    { c->r[31] = 0x089105e0u; c->r[5] = c->r[2] + 0u; func_089207f8(c, ram); }
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000700u);
    c->r[2] = 0u + 0x000002e8u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[4] = c->lo;
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
    { c->r[31] = 0x0891062cu; c->r[5] = c->r[5] | 0x0002u; func_089207f8(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000034u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000030u);
    { c->r[29] = c->r[29] + 0x00000040u; return; }
    return; /* fell out of func_089103b8 */
}

/* func_0891d058  0x0891d058..0x0891d1fc  420 bytes, source=fde */
void func_0891d058(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0891d058u);
    c->r[29] = c->r[29] + 0xffffffc0u;
    mem_w32(ram, c->r[29] + 0x00000034u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000030u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[4]);
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x0891d078u; c->r[4] = c->r[4] + 0x00000af4u; func_0880d294(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = 0u + 0x00000002u;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_0891d090; }
    { goto L_0891d1e8; }
L_0891d090:
    mem_w32(ram, c->r[30] + 0x00000014u, 0u);
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x0891d0a0u; c->r[4] = c->r[4] + 0x00000af4u; func_0880d380(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = 0u + 0x00000008u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_0891d1e8; }
    { c->r[31] = 0x0891d0b8u; func_0896dc4c(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = 0u + 0x00000001u;
    c->r[2] = c->r[2] - c->r[3];
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08aa0000u;
    c->r[2] = c->r[2] + 0xfffff9b4u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_0891d1e8; }
    { c->r[31] = 0x0891d0e8u; func_0896dc4c(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = 0u + 0x00000001u;
    c->r[2] = c->r[2] - c->r[3];
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08aa0000u;
    c->r[2] = c->r[2] + 0xfffff9b4u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000000u);
    c->r[2] = 0u + 0x00000009u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_0891d12c; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = c->r[2] + 0x00000001u;
    mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]);
L_0891d12c:
    { c->r[31] = 0x0891d134u; c->r[4] = 0u + 0x00000054u; func_089c6f04(c, ram); }
    c->r[2] = c->r[2] + 0x00000004u;
    mem_w32(ram, c->r[30] + 0x0000001cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = c->r[2] + 0x000029f0u;
    mem_w32(ram, c->r[30] + 0x0000001cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = mem_r8(ram, c->r[2] + 0x000000f0u);
    mem_w32(ram, c->r[30] + 0x00000020u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = mem_r8(ram, c->r[2] + 0x000000f1u);
    c->r[3] = c->r[2] << 8;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[2] = c->r[2] | c->r[3];
    mem_w32(ram, c->r[30] + 0x00000020u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = mem_r8(ram, c->r[2] + 0x000000f2u);
    c->r[3] = c->r[2] << 16;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[2] = c->r[2] | c->r[3];
    mem_w32(ram, c->r[30] + 0x00000020u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = mem_r8(ram, c->r[2] + 0x000000f3u);
    c->r[3] = c->r[2] << 24;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[2] = c->r[2] | c->r[3];
    mem_w32(ram, c->r[30] + 0x00000020u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[5] = mem_r8(ram, c->r[2] + 0x000000e0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[7] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x000000e3u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[8] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x000000e4u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[9] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x000000e6u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[10] = mem_r8(ram, c->r[2] + 0x000000e1u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[3] = mem_r8(ram, c->r[2] + 0x000000e2u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    mem_w32(ram, c->r[29] + 0x00000000u, c->r[2]);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00002dfcu;
    c->r[6] = mem_r32(ram, c->r[30] + 0x00000018u);
    { c->r[31] = 0x0891d1e8u; c->r[11] = c->r[3] + 0u; func_089ce998(c, ram); }
L_0891d1e8:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000034u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000030u);
    { c->r[29] = c->r[29] + 0x00000040u; return; }
    return; /* fell out of func_0891d058 */
}

/* func_089213a8  0x089213a8..0x089213ec  68 bytes, source=sweep */
void func_089213a8(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089213a8u);
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
    { c->r[31] = 0x089213d8u; c->r[5] = c->r[2] + 0u; func_089207f8(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_089213a8 */
}

/* func_0892254c  0x0892254c..0x089225d4  136 bytes, source=sweep */
void func_0892254c(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0892254cu);
    c->r[29] = c->r[29] + 0xffffffd0u;
    mem_w32(ram, c->r[29] + 0x00000020u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[6]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[4] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[3] + 0x00000000u);
    c->r[2] = c->r[4] - c->r[2];
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    { int _c = (c->r[2] == 0u); if (_c) goto L_089225b4; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[3] = c->r[3] - c->r[2];
    c->f[0] = u2f(c->r[3]);
    c->f[1] = (f32)(s32)f2u(c->f[0]);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x0000000cu);
    c->f[0] = (f32)(s32)f2u(c->f[0]);
    c->f[0] = c->f[1] / c->f[0];
    { mem_wf32(ram, c->r[30] + 0x00000010u, c->f[0]); goto L_089225c0; }
L_089225b4:
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00006dd8u);
    mem_wf32(ram, c->r[30] + 0x00000010u, c->f[0]);
L_089225c0:
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000010u);
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000020u);
    { c->r[29] = c->r[29] + 0x00000030u; return; }
    return; /* fell out of func_0892254c */
}

/* func_089258bc  0x089258bc..0x08925900  68 bytes, source=sweep */
void func_089258bc(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089258bcu);
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
    return; /* fell out of func_089258bc */
}

/* func_08926770  0x08926770..0x089270c8  2392 bytes, source=sweep */
void func_08926770(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08926770u);
    c->r[29] = c->r[29] + 0xfffffe40u;
    mem_w32(ram, c->r[29] + 0x000001b8u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x000001b4u, c->r[30]);
    mem_w32(ram, c->r[29] + 0x000001b0u, c->r[16]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[6]);
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[7]);
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[8]);
    c->r[2] = c->r[9] + 0u;
    mem_w32(ram, c->r[30] + 0x00000018u, c->r[10]);
    mem_w32(ram, c->r[30] + 0x0000001cu, c->r[11]);
    mem_w16(ram, c->r[30] + 0x00000014u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000020u);
    c->r[2] = c->r[2] + 0x00000001u;
    mem_w32(ram, c->r[3] + 0x00000020u, c->r[2]);
    c->r[2] = c->r[30] + 0x00000030u;
    mem_w32(ram, c->r[30] + 0x00000070u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000070u);
    mem_w32(ram, c->r[30] + 0x00000074u, c->r[2]);
    c->r[2] = 0u + 0x00000003u;
    mem_w32(ram, c->r[30] + 0x00000078u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000078u);
    c->r[2] = 0u + 0xffffffffu;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_08926814; }
L_089267e4:
    { c->r[31] = 0x089267ecu; c->r[4] = mem_r32(ram, c->r[30] + 0x00000074u); func_08808240(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000074u);
    c->r[2] = c->r[2] + 0x00000010u;
    mem_w32(ram, c->r[30] + 0x00000074u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000078u);
    c->r[2] = c->r[2] + 0xffffffffu;
    c->r[3] = c->r[2] + 0u;
    mem_w32(ram, c->r[30] + 0x00000078u, c->r[3]);
    c->r[2] = 0u + 0xffffffffu;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_089267e4; }
L_08926814:
    c->r[2] = c->r[30] + 0x00000080u;
    mem_w32(ram, c->r[30] + 0x00000078u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000078u);
    mem_w32(ram, c->r[30] + 0x00000074u, c->r[2]);
    c->r[2] = 0u + 0x00000003u;
    mem_w32(ram, c->r[30] + 0x00000070u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000070u);
    c->r[2] = 0u + 0xffffffffu;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_0892686c; }
L_0892683c:
    { c->r[31] = 0x08926844u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000074u); func_08808240(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000074u);
    c->r[2] = c->r[2] + 0x00000010u;
    mem_w32(ram, c->r[30] + 0x00000074u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000070u);
    c->r[2] = c->r[2] + 0xffffffffu;
    c->r[3] = c->r[2] + 0u;
    mem_w32(ram, c->r[30] + 0x00000070u, c->r[3]);
    c->r[2] = 0u + 0xffffffffu;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_0892683c; }
L_0892686c:
    c->r[2] = c->r[30] + 0x000000c0u;
    mem_w32(ram, c->r[30] + 0x00000078u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000078u);
    mem_w32(ram, c->r[30] + 0x00000074u, c->r[2]);
    c->r[2] = 0u + 0x00000003u;
    mem_w32(ram, c->r[30] + 0x00000070u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000070u);
    c->r[2] = 0u + 0xffffffffu;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_089268c4; }
L_08926894:
    { c->r[31] = 0x0892689cu; c->r[4] = mem_r32(ram, c->r[30] + 0x00000074u); func_08808240(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000074u);
    c->r[2] = c->r[2] + 0x00000010u;
    mem_w32(ram, c->r[30] + 0x00000074u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000070u);
    c->r[2] = c->r[2] + 0xffffffffu;
    c->r[3] = c->r[2] + 0u;
    mem_w32(ram, c->r[30] + 0x00000070u, c->r[3]);
    c->r[2] = 0u + 0xffffffffu;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_08926894; }
L_089268c4:
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00006e90u);
    mem_wf32(ram, c->r[30] + 0x00000100u, c->f[0]);
    mem_w32(ram, c->r[30] + 0x00000078u, 0u);
L_089268d4:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000078u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000004u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_089268ec; }
    { goto L_08926bf0; }
L_089268ec:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000010u);
    c->r[2] = c->r[2] ^ 0x0001u;
    c->r[2] = c->r[2] & 0x0001u;
    c->r[2] = c->r[2] & 0x00ffu;
    { int _c = (c->r[2] == 0u); if (_c) goto L_08926b70; }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[5] = mem_r32(ram, c->r[30] + 0x0000000cu);
    { c->r[31] = 0x08926918u; c->r[6] = mem_r32(ram, c->r[30] + 0x00000010u); func_0892254c(c, ram); }
    mem_wf32(ram, c->r[30] + 0x00000104u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000078u);
    c->r[2] = c->r[2] << 4;
    c->r[2] = c->r[2] + c->r[30];
    c->r[16] = c->r[2] + 0x00000080u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000078u);
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[3];
    c->r[2] = c->r[2] + 0x00000023u;
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000000u);
    c->f[0] = u2f(c->r[2]);
    c->f[1] = (f32)(s32)f2u(c->f[0]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000078u);
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[3];
    c->r[2] = c->r[2] + 0x00000023u;
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000000u);
    c->f[0] = u2f(c->r[2]);
    c->f[0] = (f32)(s32)f2u(c->f[0]);
    c->f[12] = c->f[1];
    c->f[13] = c->f[0];
    { c->r[31] = 0x0892697cu; c->f[14] = mem_rf32(ram, c->r[30] + 0x00000104u); func_089225d4(c, ram); }
    c->f[1] = c->f[0];
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000078u);
    c->r[2] = c->r[2] << 4;
    c->r[2] = c->r[2] + c->r[3];
    c->r[2] = mem_r8(ram, c->r[2] + 0x0000000eu);
    c->f[0] = u2f(c->r[2]);
    c->f[0] = (f32)(s32)f2u(c->f[0]);
    c->f[1] = c->f[1] * c->f[0];
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00006e90u);
    c->f[0] = c->f[1] * c->f[0];
    mem_wf32(ram, c->r[16] + 0x0000000cu, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000078u);
    c->r[2] = c->r[2] << 4;
    c->r[2] = c->r[2] + c->r[30];
    c->r[16] = c->r[2] + 0x00000080u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000078u);
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[3];
    c->r[2] = c->r[2] + 0x00000020u;
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000000u);
    c->f[0] = u2f(c->r[2]);
    c->f[1] = (f32)(s32)f2u(c->f[0]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000078u);
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[3];
    c->r[2] = c->r[2] + 0x00000020u;
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000000u);
    c->f[0] = u2f(c->r[2]);
    c->f[0] = (f32)(s32)f2u(c->f[0]);
    c->f[12] = c->f[1];
    c->f[13] = c->f[0];
    { c->r[31] = 0x08926a10u; c->f[14] = mem_rf32(ram, c->r[30] + 0x00000104u); func_089225d4(c, ram); }
    c->f[1] = c->f[0];
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000078u);
    c->r[2] = c->r[2] << 4;
    c->r[2] = c->r[2] + c->r[3];
    c->r[2] = mem_r8(ram, c->r[2] + 0x0000000cu);
    c->f[0] = u2f(c->r[2]);
    c->f[0] = (f32)(s32)f2u(c->f[0]);
    c->f[1] = c->f[1] * c->f[0];
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00006e90u);
    c->f[0] = c->f[1] * c->f[0];
    mem_wf32(ram, c->r[16] + 0x00000000u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000078u);
    c->r[2] = c->r[2] << 4;
    c->r[2] = c->r[2] + c->r[30];
    c->r[16] = c->r[2] + 0x00000080u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000078u);
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[3];
    c->r[2] = c->r[2] + 0x00000021u;
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000000u);
    c->f[0] = u2f(c->r[2]);
    c->f[1] = (f32)(s32)f2u(c->f[0]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000078u);
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[3];
    c->r[2] = c->r[2] + 0x00000021u;
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000000u);
    c->f[0] = u2f(c->r[2]);
    c->f[0] = (f32)(s32)f2u(c->f[0]);
    c->f[12] = c->f[1];
    c->f[13] = c->f[0];
    { c->r[31] = 0x08926aa4u; c->f[14] = mem_rf32(ram, c->r[30] + 0x00000104u); func_089225d4(c, ram); }
    c->f[1] = c->f[0];
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000078u);
    c->r[2] = c->r[2] << 4;
    c->r[2] = c->r[2] + c->r[3];
    c->r[2] = mem_r8(ram, c->r[2] + 0x0000000du);
    c->f[0] = u2f(c->r[2]);
    c->f[0] = (f32)(s32)f2u(c->f[0]);
    c->f[1] = c->f[1] * c->f[0];
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00006e90u);
    c->f[0] = c->f[1] * c->f[0];
    mem_wf32(ram, c->r[16] + 0x00000004u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000078u);
    c->r[2] = c->r[2] << 4;
    c->r[2] = c->r[2] + c->r[30];
    c->r[16] = c->r[2] + 0x00000080u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000078u);
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[3];
    c->r[2] = c->r[2] + 0x00000022u;
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000000u);
    c->f[0] = u2f(c->r[2]);
    c->f[1] = (f32)(s32)f2u(c->f[0]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000078u);
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[3];
    c->r[2] = c->r[2] + 0x00000022u;
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000000u);
    c->f[0] = u2f(c->r[2]);
    c->f[0] = (f32)(s32)f2u(c->f[0]);
    c->f[12] = c->f[1];
    c->f[13] = c->f[0];
    { c->r[31] = 0x08926b38u; c->f[14] = mem_rf32(ram, c->r[30] + 0x00000104u); func_089225d4(c, ram); }
    c->f[1] = c->f[0];
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000078u);
    c->r[2] = c->r[2] << 4;
    c->r[2] = c->r[2] + c->r[3];
    c->r[2] = mem_r8(ram, c->r[2] + 0x0000000fu);
    c->f[0] = u2f(c->r[2]);
    c->f[0] = (f32)(s32)f2u(c->f[0]);
    c->f[1] = c->f[1] * c->f[0];
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00006e90u);
    c->f[0] = c->f[1] * c->f[0];
    { mem_wf32(ram, c->r[16] + 0x00000008u, c->f[0]); goto L_08926be0; }
L_08926b70:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000078u);
    c->r[2] = c->r[2] << 4;
    c->r[2] = c->r[2] + c->r[30];
    c->r[2] = c->r[2] + 0x00000080u;
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00006e94u);
    mem_wf32(ram, c->r[2] + 0x0000000cu, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000078u);
    c->r[2] = c->r[2] << 4;
    c->r[2] = c->r[2] + c->r[30];
    c->r[2] = c->r[2] + 0x00000080u;
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00006e98u);
    mem_wf32(ram, c->r[2] + 0x00000000u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000078u);
    c->r[2] = c->r[2] << 4;
    c->r[2] = c->r[2] + c->r[30];
    c->r[2] = c->r[2] + 0x00000080u;
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00006e98u);
    mem_wf32(ram, c->r[2] + 0x00000004u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000078u);
    c->r[2] = c->r[2] << 4;
    c->r[2] = c->r[2] + c->r[30];
    c->r[2] = c->r[2] + 0x00000080u;
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00006e98u);
    mem_wf32(ram, c->r[2] + 0x00000008u, c->f[0]);
L_08926be0:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000078u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000078u, c->r[2]); goto L_089268d4; }
L_08926bf0:
    c->r[2] = c->r[30] + 0x00000110u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00006e9cu);
    c->r[4] = c->r[2] + 0u;
    c->f[12] = mem_rf32(ram, c->r[3] + 0x00000000u);
    c->f[13] = mem_rf32(ram, c->r[5] + 0x00000004u);
    c->f[14] = u2f(0u);
    { c->r[31] = 0x08926c1cu; c->f[15] = c->f[0]; func_0880d140(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000110u);
    mem_w32(ram, c->r[30] + 0x00000030u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000114u);
    mem_w32(ram, c->r[30] + 0x00000034u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000118u);
    mem_w32(ram, c->r[30] + 0x00000038u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000011cu);
    mem_w32(ram, c->r[30] + 0x0000003cu, c->r[2]);
    c->r[2] = c->r[30] + 0x00000110u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00006e9cu);
    c->r[4] = c->r[2] + 0u;
    c->f[12] = mem_rf32(ram, c->r[3] + 0x00000010u);
    c->f[13] = mem_rf32(ram, c->r[5] + 0x00000014u);
    c->f[14] = u2f(0u);
    { c->r[31] = 0x08926c68u; c->f[15] = c->f[0]; func_0880d140(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000110u);
    mem_w32(ram, c->r[30] + 0x00000040u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000114u);
    mem_w32(ram, c->r[30] + 0x00000044u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000118u);
    mem_w32(ram, c->r[30] + 0x00000048u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000011cu);
    mem_w32(ram, c->r[30] + 0x0000004cu, c->r[2]);
    c->r[2] = c->r[30] + 0x00000110u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00006e9cu);
    c->r[4] = c->r[2] + 0u;
    c->f[12] = mem_rf32(ram, c->r[3] + 0x00000020u);
    c->f[13] = mem_rf32(ram, c->r[5] + 0x00000024u);
    c->f[14] = u2f(0u);
    { c->r[31] = 0x08926cb4u; c->f[15] = c->f[0]; func_0880d140(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000110u);
    mem_w32(ram, c->r[30] + 0x00000050u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000114u);
    mem_w32(ram, c->r[30] + 0x00000054u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000118u);
    mem_w32(ram, c->r[30] + 0x00000058u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000011cu);
    mem_w32(ram, c->r[30] + 0x0000005cu, c->r[2]);
    c->r[2] = c->r[30] + 0x00000110u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00006e9cu);
    c->r[4] = c->r[2] + 0u;
    c->f[12] = mem_rf32(ram, c->r[3] + 0x00000030u);
    c->f[13] = mem_rf32(ram, c->r[5] + 0x00000034u);
    c->f[14] = u2f(0u);
    { c->r[31] = 0x08926d00u; c->f[15] = c->f[0]; func_0880d140(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000110u);
    mem_w32(ram, c->r[30] + 0x00000060u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000114u);
    mem_w32(ram, c->r[30] + 0x00000064u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000118u);
    mem_w32(ram, c->r[30] + 0x00000068u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000011cu);
    mem_w32(ram, c->r[30] + 0x0000006cu, c->r[2]);
    c->r[2] = c->r[30] + 0x00000120u;
    { c->r[31] = 0x08926d2cu; c->r[4] = c->r[2] + 0u; func_08808260(c, ram); }
    c->r[2] = c->r[30] + 0x00000160u;
    { c->r[31] = 0x08926d38u; c->r[4] = c->r[2] + 0u; func_08808260(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    { int _c = (c->r[2] == 0u); if (_c) goto L_08926d90; }
    c->r[2] = c->r[30] + 0x00000030u;
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x08926d54u; c->r[5] = mem_r32(ram, c->r[30] + 0x0000001cu); func_0880d1a0(c, ram); }
    c->r[2] = c->r[30] + 0x00000030u;
    c->r[2] = c->r[2] + 0x00000010u;
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x08926d68u; c->r[5] = mem_r32(ram, c->r[30] + 0x0000001cu); func_0880d1a0(c, ram); }
    c->r[2] = c->r[30] + 0x00000030u;
    c->r[2] = c->r[2] + 0x00000020u;
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x08926d7cu; c->r[5] = mem_r32(ram, c->r[30] + 0x0000001cu); func_0880d1a0(c, ram); }
    c->r[2] = c->r[30] + 0x00000030u;
    c->r[2] = c->r[2] + 0x00000030u;
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x08926d90u; c->r[5] = mem_r32(ram, c->r[30] + 0x0000001cu); func_0880d1a0(c, ram); }
L_08926d90:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000010u);
    c->r[2] = c->r[2] & 0x0008u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_08926e38; }
    c->r[2] = c->r[30] + 0x00000120u;
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = c->r[2] + 0u;
    c->r[6] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[7] = mem_r32(ram, c->r[30] + 0x0000000cu);
    { c->r[31] = 0x08926dc0u; c->r[8] = mem_r32(ram, c->r[30] + 0x00000010u); func_08921a68(c, ram); }
    c->r[2] = c->r[30] + 0x00000030u;
    c->r[3] = c->r[30] + 0x00000030u;
    c->r[6] = c->r[30] + 0x00000120u;
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x08926dd8u; c->r[5] = c->r[3] + 0u; func_0884c26c(c, ram); }
    c->r[2] = c->r[30] + 0x00000030u;
    c->r[4] = c->r[2] + 0x00000010u;
    c->r[2] = c->r[30] + 0x00000030u;
    c->r[2] = c->r[2] + 0x00000010u;
    c->r[3] = c->r[30] + 0x00000120u;
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x08926df8u; c->r[6] = c->r[3] + 0u; func_0884c26c(c, ram); }
    c->r[2] = c->r[30] + 0x00000030u;
    c->r[4] = c->r[2] + 0x00000020u;
    c->r[2] = c->r[30] + 0x00000030u;
    c->r[2] = c->r[2] + 0x00000020u;
    c->r[3] = c->r[30] + 0x00000120u;
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x08926e18u; c->r[6] = c->r[3] + 0u; func_0884c26c(c, ram); }
    c->r[2] = c->r[30] + 0x00000030u;
    c->r[4] = c->r[2] + 0x00000030u;
    c->r[2] = c->r[30] + 0x00000030u;
    c->r[2] = c->r[2] + 0x00000030u;
    c->r[3] = c->r[30] + 0x00000120u;
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x08926e38u; c->r[6] = c->r[3] + 0u; func_0884c26c(c, ram); }
L_08926e38:
    c->r[2] = mem_r32(ram, c->r[30] + 0x000001c0u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_08926ebc; }
    c->r[2] = c->r[30] + 0x00000030u;
    c->r[3] = c->r[30] + 0x00000030u;
    c->r[4] = c->r[2] + 0u;
    c->r[5] = c->r[3] + 0u;
    { c->r[31] = 0x08926e5cu; c->r[6] = mem_r32(ram, c->r[30] + 0x000001c0u); func_0884c26c(c, ram); }
    c->r[2] = c->r[30] + 0x00000030u;
    c->r[3] = c->r[2] + 0x00000010u;
    c->r[2] = c->r[30] + 0x00000030u;
    c->r[2] = c->r[2] + 0x00000010u;
    c->r[4] = c->r[3] + 0u;
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x08926e7cu; c->r[6] = mem_r32(ram, c->r[30] + 0x000001c0u); func_0884c26c(c, ram); }
    c->r[2] = c->r[30] + 0x00000030u;
    c->r[3] = c->r[2] + 0x00000020u;
    c->r[2] = c->r[30] + 0x00000030u;
    c->r[2] = c->r[2] + 0x00000020u;
    c->r[4] = c->r[3] + 0u;
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x08926e9cu; c->r[6] = mem_r32(ram, c->r[30] + 0x000001c0u); func_0884c26c(c, ram); }
    c->r[2] = c->r[30] + 0x00000030u;
    c->r[3] = c->r[2] + 0x00000030u;
    c->r[2] = c->r[30] + 0x00000030u;
    c->r[2] = c->r[2] + 0x00000030u;
    c->r[4] = c->r[3] + 0u;
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x08926ebcu; c->r[6] = mem_r32(ram, c->r[30] + 0x000001c0u); func_0884c26c(c, ram); }
L_08926ebc:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_08926f14; }
    c->r[2] = c->r[30] + 0x00000030u;
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x08926ed8u; c->r[5] = mem_r32(ram, c->r[30] + 0x00000018u); func_0880d1a0(c, ram); }
    c->r[2] = c->r[30] + 0x00000030u;
    c->r[2] = c->r[2] + 0x00000010u;
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x08926eecu; c->r[5] = mem_r32(ram, c->r[30] + 0x00000018u); func_0880d1a0(c, ram); }
    c->r[2] = c->r[30] + 0x00000030u;
    c->r[2] = c->r[2] + 0x00000020u;
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x08926f00u; c->r[5] = mem_r32(ram, c->r[30] + 0x00000018u); func_0880d1a0(c, ram); }
    c->r[2] = c->r[30] + 0x00000030u;
    c->r[2] = c->r[2] + 0x00000030u;
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x08926f14u; c->r[5] = mem_r32(ram, c->r[30] + 0x00000018u); func_0880d1a0(c, ram); }
L_08926f14:
    c->r[2] = 0u + 0x00000004u;
    mem_w32(ram, c->r[30] + 0x00000078u, c->r[2]);
    c->r[2] = 0u + 0x00000040u;
    mem_w32(ram, c->r[30] + 0x00000074u, c->r[2]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000074u);
    { c->r[31] = 0x08926f30u; c->r[5] = 0u + 0x00000010u; func_0881a1d4(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000070u, c->r[2]);
    mem_w32(ram, c->r[30] + 0x000001a0u, 0u);
L_08926f38:
    c->r[2] = mem_r32(ram, c->r[30] + 0x000001a0u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000004u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_08926f50; }
    { goto L_08927054; }
L_08926f50:
    c->r[2] = mem_r32(ram, c->r[30] + 0x000001a0u);
    c->r[3] = c->r[2] << 4;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000070u);
    c->r[16] = c->r[3] + c->r[2];
    c->r[3] = c->r[30] + 0x00000080u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x000001a0u);
    c->r[2] = c->r[2] << 4;
    c->r[2] = c->r[3] + c->r[2];
    { c->r[31] = 0x08926f78u; c->r[4] = c->r[2] + 0u; func_0888d9b8(c, ram); }
    mem_w32(ram, c->r[16] + 0x00000004u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x000001a0u);
    c->r[3] = c->r[2] << 4;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000070u);
    c->r[3] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[30] + 0x000001a0u);
    c->r[2] = c->r[2] << 4;
    c->r[2] = c->r[2] + c->r[30];
    c->r[2] = c->r[2] + 0x00000030u;
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000000u);
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    c->r[2] = f2u(c->f[0]);
    mem_w16(ram, c->r[3] + 0x00000008u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x000001a0u);
    c->r[3] = c->r[2] << 4;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000070u);
    c->r[3] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[30] + 0x000001a0u);
    c->r[2] = c->r[2] << 4;
    c->r[2] = c->r[2] + c->r[30];
    c->r[2] = c->r[2] + 0x00000030u;
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000004u);
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    c->r[2] = f2u(c->f[0]);
    mem_w16(ram, c->r[3] + 0x0000000au, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x000001a0u);
    c->r[3] = c->r[2] << 4;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000070u);
    c->r[3] = c->r[3] + c->r[2];
    c->r[2] = 0u + 0xffffffdcu;
    mem_w16(ram, c->r[3] + 0x0000000cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x000001a0u);
    c->r[3] = c->r[2] << 4;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000070u);
    c->r[4] = c->r[3] + c->r[2];
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x000001a0u);
    c->r[2] = c->r[2] << 4;
    c->r[2] = c->r[2] + c->r[3];
    c->r[2] = mem_r16(ram, c->r[2] + 0x00000008u);
    mem_w16(ram, c->r[4] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x000001a0u);
    c->r[3] = c->r[2] << 4;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000070u);
    c->r[4] = c->r[3] + c->r[2];
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x000001a0u);
    c->r[2] = c->r[2] << 4;
    c->r[2] = c->r[2] + c->r[3];
    c->r[2] = mem_r16(ram, c->r[2] + 0x0000000au);
    mem_w16(ram, c->r[4] + 0x00000002u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x000001a0u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x000001a0u, c->r[2]); goto L_08926f38; }
L_08927054:
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000700u);
    c->r[2] = 0u + 0x000002e8u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[4] = c->lo;
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
    c->r[6] = 0x00800000u;
    c->r[6] = c->r[6] | 0x011eu;
    c->r[7] = 0u + 0x00000004u;
    c->r[8] = 0u + 0u;
    { c->r[31] = 0x089270b0u; c->r[9] = mem_r32(ram, c->r[30] + 0x00000070u); func_08925adc(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x000001b8u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x000001b4u);
    c->r[16] = mem_r32(ram, c->r[29] + 0x000001b0u);
    { c->r[29] = c->r[29] + 0x000001c0u; return; }
    return; /* fell out of func_08926770 */
}

/* func_0892b198  0x0892b198..0x0892b42c  660 bytes, source=fde */
void func_0892b198(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0892b198u);
    c->r[29] = c->r[29] + 0xffffff90u;
    mem_w32(ram, c->r[29] + 0x00000068u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000064u, c->r[30]);
    mem_w32(ram, c->r[29] + 0x00000060u, c->r[16]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x0000002cu);
    { int _c = ((s32)c->r[2] < 0); if (_c) goto L_0892b414; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x0000002fu);
    c->r[2] = 0u + 0x00000003u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_0892b414; }
    c->r[4] = 0u + 0x00000027u;
    { c->r[31] = 0x0892b1e0u; func_089c6f04(c, ram); }
    c->r[2] = c->r[2] + 0x00000004u;
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x0000002cu);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 2;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[2] + c->r[3];
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[2]);
    c->r[2] = c->r[30] + 0x00000010u;
    { c->r[31] = 0x0892b218u; c->r[4] = c->r[2] + 0u; func_088112e8(c, ram); }
    c->r[2] = c->r[30] + 0x00000040u;
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0x08a40000u;
    c->r[5] = c->r[5] + 0x00007038u;
    c->r[6] = mem_r32(ram, c->r[30] + 0x00000004u);
    { c->r[31] = 0x0892b234u; func_08a1ad34(c, ram); }
    c->r[2] = c->r[30] + 0x00000040u;
    { c->r[31] = 0x0892b240u; c->r[4] = c->r[2] + 0u; func_089c6f64(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = c->r[30] + 0x00000010u;
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x0892b254u; c->r[5] = c->r[3] + 0u; func_08811340(c, ram); }
    c->r[3] = c->r[30] + 0x00000010u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x0000000au);
    c->r[4] = c->r[3] + 0u;
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x0892b270u; c->r[6] = 0u + 0u; func_0880ef80(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000050u, c->r[2]);
    c->r[3] = c->r[30] + 0x00000010u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000050u);
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000040u);
    c->r[4] = c->r[3] + 0u;
    { c->r[31] = 0x0892b28cu; c->r[5] = c->r[2] + 0u; func_08826fd8(c, ram); }
    c->r[4] = 0x08a70000u;
    c->r[4] = c->r[4] + 0xffffb640u;
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x0892b2a0u; c->r[6] = 0u + 0u; func_089e0bd8(c, ram); }
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000700u);
    c->r[2] = 0u + 0x000002e8u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[4] = c->lo;
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
    { c->r[31] = 0x0892b2ecu; c->r[5] = c->r[5] | 0x0102u; func_0893365c(c, ram); }
    c->r[2] = 0xff7f0000u;
    c->r[2] = c->r[2] | 0x7f7fu;
    mem_w32(ram, c->r[30] + 0x00000054u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000010u);
    c->r[2] = c->r[2] & 0x1000u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_0892b318; }
    c->r[2] = 0xaa7f0000u;
    c->r[2] = c->r[2] | 0x7f7fu;
    mem_w32(ram, c->r[30] + 0x00000054u, c->r[2]);
L_0892b318:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x00000010u);
    c->r[2] = 0x20000000u;
    c->r[2] = c->r[3] & c->r[2];
    c->r[3] = c->r[30] + 0x00000054u;
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x0892b338u; c->r[5] = c->r[3] + 0u; func_08933804(c, ram); }
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000700u);
    c->r[2] = 0u + 0x000002e8u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[4] = c->lo;
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
    { c->r[31] = 0x0892b380u; c->r[5] = mem_r32(ram, c->r[30] + 0x00000054u); func_089336a0(c, ram); }
    c->r[4] = 0x08a70000u;
    c->r[4] = c->r[4] + 0xffffb640u;
    c->r[5] = 0u + 0x00000002u;
    { c->r[31] = 0x0892b394u; c->r[6] = 0u + 0x00000006u; func_089df7a0(c, ram); }
    c->r[4] = c->r[30] + 0x00000010u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x0000000au);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[6] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x00000020u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r16(ram, c->r[2] + 0x00000022u);
    c->r[2] = c->r[2] + 0x00000008u;
    c->r[2] = c->r[2] << 16;
    c->r[2] = (u32)((s32)c->r[2] >> 16);
    c->r[1] = 0x08a40000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00007040u);
    c->r[5] = c->r[3] + 0u;
    c->r[7] = c->r[2] + 0u;
    c->r[8] = 0u + 0xffffffffu;
    c->f[12] = c->f[0];
    { c->r[31] = 0x0892b3dcu; c->r[9] = 0u + 0u; func_08923508(c, ram); }
    { goto L_0892b408; }
    mem_w32(ram, c->r[30] + 0x00000058u, c->r[4]);
    c->r[16] = mem_r32(ram, c->r[30] + 0x00000058u);
    c->r[2] = c->r[30] + 0x00000010u;
    { c->r[31] = 0x0892b3f8u; c->r[4] = c->r[2] + 0u; func_08811320(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000058u, c->r[16]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000058u);
    { c->r[31] = 0x0892b408u; func_08a163b0(c, ram); }
L_0892b408:
    c->r[2] = c->r[30] + 0x00000010u;
    { c->r[31] = 0x0892b414u; c->r[4] = c->r[2] + 0u; func_08811320(c, ram); }
L_0892b414:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000068u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000064u);
    c->r[16] = mem_r32(ram, c->r[29] + 0x00000060u);
    { c->r[29] = c->r[29] + 0x00000070u; return; }
    return; /* fell out of func_0892b198 */
}

/* func_08930848  0x08930848..0x08930b74  812 bytes, source=fde */
void func_08930848(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08930848u);
    c->r[29] = c->r[29] + 0xffffffd0u;
    mem_w32(ram, c->r[29] + 0x00000024u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000020u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    c->r[2] = c->r[4] + 0u;
    c->r[3] = c->r[5] + 0u;
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[6]);
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[7]);
    mem_w16(ram, c->r[30] + 0x00000000u, c->r[2]);
    mem_w16(ram, c->r[30] + 0x00000002u, c->r[3]);
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000700u);
    c->r[2] = 0u + 0x000002e8u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[4] = c->lo;
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
    { c->r[31] = 0x089308bcu; c->r[5] = c->r[5] | 0x0102u; func_0893365c(c, ram); }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[5] = 0xff7f0000u;
    { c->r[31] = 0x089308ccu; c->r[5] = c->r[5] | 0x7f7fu; func_08933888(c, ram); }
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
    { c->r[31] = 0x08930914u; c->r[4] = c->r[2] + 0u; func_089336a0(c, ram); }
    c->r[4] = 0x08a70000u;
    c->r[4] = c->r[4] + 0xffffb640u;
    c->r[5] = 0u + 0x00000002u;
    { c->r[31] = 0x08930928u; c->r[6] = 0u + 0x00000006u; func_089df7a0(c, ram); }
    { c->r[31] = 0x08930930u; c->r[4] = 0u + 0x00000050u; func_089c6f04(c, ram); }
    c->r[4] = 0x08a70000u;
    c->r[4] = c->r[4] + 0xffffb640u;
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x08930944u; c->r[6] = 0u + 0u; func_089e0bd8(c, ram); }
    c->r[4] = 0u + 0x00000014u;
    { c->r[31] = 0x08930950u; c->r[5] = 0u + 0x00000010u; func_0881a1d4(c, ram); }
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = mem_r16(ram, c->r[30] + 0x00000000u);
    mem_w16(ram, c->r[3] + 0x00000004u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = mem_r16(ram, c->r[30] + 0x00000002u);
    mem_w16(ram, c->r[3] + 0x00000006u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[3] = c->r[2] + 0x0000000au;
    c->r[2] = mem_r16(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000008u;
    mem_w16(ram, c->r[3] + 0x00000004u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[3] = c->r[2] + 0x0000000au;
    c->r[2] = mem_r16(ram, c->r[30] + 0x00000002u);
    c->r[2] = c->r[2] + 0x00000008u;
    mem_w16(ram, c->r[3] + 0x00000006u, c->r[2]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = c->r[2] << 3;
    c->r[2] = 0x08a60000u;
    c->r[2] = c->r[2] + 0xffff8014u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r16(ram, c->r[2] + 0x00000000u);
    mem_w16(ram, c->r[4] + 0x00000000u, c->r[2]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = c->r[2] << 3;
    c->r[2] = 0x08a60000u;
    c->r[2] = c->r[2] + 0xffff8014u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r16(ram, c->r[2] + 0x00000002u);
    mem_w16(ram, c->r[4] + 0x00000002u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[5] = c->r[2] + 0x0000000au;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = c->r[2] << 3;
    c->r[2] = 0x08a60000u;
    c->r[2] = c->r[2] + 0xffff8014u;
    c->r[4] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = c->r[2] << 3;
    c->r[2] = 0x08a60000u;
    c->r[2] = c->r[2] + 0xffff8014u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[3] = mem_r16(ram, c->r[4] + 0x00000000u);
    c->r[2] = mem_r16(ram, c->r[2] + 0x00000004u);
    c->r[2] = c->r[3] + c->r[2];
    mem_w16(ram, c->r[5] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[5] = c->r[2] + 0x0000000au;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = c->r[2] << 3;
    c->r[2] = 0x08a60000u;
    c->r[2] = c->r[2] + 0xffff8014u;
    c->r[4] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = c->r[2] << 3;
    c->r[2] = 0x08a60000u;
    c->r[2] = c->r[2] + 0xffff8014u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[3] = mem_r16(ram, c->r[4] + 0x00000002u);
    c->r[2] = mem_r16(ram, c->r[2] + 0x00000006u);
    c->r[2] = c->r[3] + c->r[2];
    mem_w16(ram, c->r[5] + 0x00000002u, c->r[2]);
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000700u);
    c->r[2] = 0u + 0x000002e8u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[4] = c->lo;
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
    { c->r[31] = 0x08930ab8u; c->r[5] = c->r[2] + 0u; func_0893365c(c, ram); }
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000700u);
    c->r[2] = 0u + 0x000002e8u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[4] = c->lo;
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
    { c->r[31] = 0x08930b14u; c->r[5] = c->r[2] + 0u; func_0893365c(c, ram); }
    c->r[3] = 0x08b90000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000700u);
    c->r[2] = 0u + 0x000002e8u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[4] = c->lo;
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
    { c->r[31] = 0x08930b60u; c->r[5] = c->r[5] | 0x0002u; func_0893365c(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000024u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000020u);
    { c->r[29] = c->r[29] + 0x00000030u; return; }
    return; /* fell out of func_08930848 */
}

/* func_089333d8  0x089333d8..0x08933428  80 bytes, source=sweep */
void func_089333d8(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089333d8u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_08933400; }
    { goto L_08933418; }
L_08933400:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x000000e0u;
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = mem_r8(ram, c->r[30] + 0x00000004u);
    mem_w8(ram, c->r[3] + 0x00000035u, c->r[2]);
L_08933418:
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_089333d8 */
}

/* func_08935af4  0x08935af4..0x08935c08  276 bytes, source=sweep */
void func_08935af4(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08935af4u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000008u, 0u);
    mem_w32(ram, c->r[30] + 0x00000004u, 0u);
L_08935b0c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000010u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_08935b24; }
    { goto L_08935bf4; }
L_08935b24:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = c->r[2] << 4;
    c->r[2] = mem_r32(ram, c->r[4] + 0x00000004u);
    c->r[2] = c->r[2] + c->r[3];
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000010u);
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_08935b58; }
    { goto L_08935be4; }
L_08935b58:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000000u);
    c->r[2] = 0u + 0xffffffffu;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_08935be4; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_08935b84; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    { mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]); goto L_08935be4; }
L_08935b84:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[4] = mem_r8(ram, c->r[2] + 0x00000002u);
    c->r[2] = mem_r8(ram, c->r[3] + 0x00000002u);
    { int _c = (c->r[4] != c->r[2]); if (_c) goto L_08935bc0; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[4] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x00000006u);
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[3] + 0x00000006u);
    c->r[2] = ((s32)c->r[2] < (s32)c->r[4]) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_08935bc0; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]);
L_08935bc0:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[4] = mem_r8(ram, c->r[2] + 0x00000002u);
    c->r[2] = mem_r8(ram, c->r[3] + 0x00000002u);
    c->r[2] = (c->r[4] < c->r[2]) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_08935be4; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]);
L_08935be4:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000004u, c->r[2]); goto L_08935b0c; }
L_08935bf4:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_08935af4 */
}

/* func_0893bed4  0x0893bed4..0x0893bf00  44 bytes, source=indirect */
void func_0893bed4(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0893bed4u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[2] = c->r[5] + 0u;
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[6]);
    mem_w8(ram, c->r[30] + 0x00000004u, c->r[2]);
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_0893bed4 */
}

/* func_0893cc14  0x0893cc14..0x0893cc44  48 bytes, source=sweep */
void func_0893cc14(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0893cc14u);
    c->r[29] = c->r[29] + 0xfffffff0u;
    mem_w32(ram, c->r[29] + 0x00000004u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000000u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    c->r[4] = 0u + 0x00000001u;
    { c->r[31] = 0x0893cc30u; c->r[5] = 0u | 0xffffu; func_0893bf00(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000004u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000000u);
    { c->r[29] = c->r[29] + 0x00000010u; return; }
    return; /* fell out of func_0893cc14 */
}

/* func_0893e060  0x0893e060..0x0893e184  292 bytes, source=fde */
void func_0893e060(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0893e060u);
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
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08aa0000u;
    c->r[2] = c->r[2] + 0xfffffadcu;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000ac8u;
    { c->r[31] = 0x0893e0b4u; c->r[5] = c->r[2] + 0u; func_089cb820(c, ram); }
    { int _c = (c->r[2] == 0u); if (_c) goto L_0893e0c4; }
    { mem_w32(ram, c->r[30] + 0x00000020u, 0u); goto L_0893e168; }
L_0893e0c4:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    { int _c = (c->r[2] != 0u); if (_c) goto L_0893e0d8; }
    { mem_w32(ram, c->r[30] + 0x00000020u, 0u); goto L_0893e168; }
L_0893e0d8:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[6] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[7] = mem_r32(ram, c->r[30] + 0x00000010u);
    { c->r[31] = 0x0893e0f0u; c->r[8] = mem_r32(ram, c->r[30] + 0x00000014u); func_0893e354(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_0893e168; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08aa0000u;
    c->r[2] = c->r[2] + 0xfffffadcu;
    c->r[16] = c->r[3] + c->r[2];
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000ac8u;
    { c->r[31] = 0x0893e124u; c->r[5] = mem_r32(ram, c->r[30] + 0x00000018u); func_089cb780(c, ram); }
    mem_w32(ram, c->r[30] + 0x0000001cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    mem_w32(ram, c->r[16] + 0x00000000u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = 0x08aa0000u;
    c->r[2] = c->r[2] + 0xfffffedcu;
    c->r[2] = c->r[3] + c->r[2];
    mem_w8(ram, c->r[2] + 0x00000000u, 0u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = 0x08aa0000u;
    c->r[2] = c->r[2] + 0xffffffdcu;
    c->r[3] = c->r[3] + c->r[2];
    c->r[2] = mem_r8(ram, c->r[30] + 0x00000008u);
    mem_w8(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = 0u + 0x00000004u;
    mem_w16(ram, c->r[3] + 0x0000001au, c->r[2]);
L_0893e168:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000038u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000034u);
    c->r[16] = mem_r32(ram, c->r[29] + 0x00000030u);
    { c->r[29] = c->r[29] + 0x00000040u; return; }
    return; /* fell out of func_0893e060 */
}

/* func_0894049c  0x0894049c..0x089404e0  68 bytes, source=sweep */
void func_0894049c(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0894049cu);
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
    { c->r[31] = 0x089404ccu; c->r[5] = c->r[2] + 0u; func_0893f9e4(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_0894049c */
}

/* func_089459ac  0x089459ac..0x08945a44  152 bytes, source=sweep */
void func_089459ac(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089459acu);
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
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = c->r[2] << 16;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = c->r[2] << 8;
    c->r[3] = c->r[3] | c->r[2];
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[3] = c->r[3] | c->r[2];
    c->r[2] = 0xc2000000u;
    c->r[2] = c->r[3] | c->r[2];
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x08945a04u; c->r[5] = c->r[2] + 0u; func_0894568c(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[3] = c->r[2] << 8;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = c->r[3] | c->r[2];
    c->r[2] = 0xc3000000u;
    c->r[2] = c->r[3] | c->r[2];
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x08945a28u; c->r[5] = c->r[2] + 0u; func_0894568c(c, ram); }
    { c->r[31] = 0x08945a30u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u); func_08945c60(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000024u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000020u);
    { c->r[29] = c->r[29] + 0x00000030u; return; }
    return; /* fell out of func_089459ac */
}

/* func_089467b8  0x089467b8..0x08946948  400 bytes, source=fde */
void func_089467b8(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089467b8u);
    c->r[29] = c->r[29] + 0xffffffd0u;
    mem_w32(ram, c->r[29] + 0x00000028u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000024u, c->r[30]);
    mem_w32(ram, c->r[29] + 0x00000020u, c->r[16]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_08946930; }
    { c->r[31] = 0x089467e4u; func_088516f8(c, ram); }
    c->r[2] = (0u < c->r[2]) ? 1u : 0u;
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08aa0000u;
    c->r[2] = c->r[2] + 0x000031d4u;
    c->r[2] = c->r[2] + c->r[3];
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = c->r[2] << 9;
    c->r[2] = 0x08aa0000u;
    c->r[2] = c->r[2] + 0x000031dcu;
    c->r[2] = c->r[2] + c->r[3];
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[3] = c->r[2] << 2;
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000ac8u;
    { c->r[31] = 0x08946844u; c->r[5] = c->r[2] + 0u; func_089cb820(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_08946860; }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000010u);
    { c->r[31] = 0x08946860u; c->r[5] = 0u + 0x00000002u; func_0880d260(c, ram); }
L_08946860:
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[3] = mem_r32(ram, c->r[5] + 0x00000000u);
    c->r[2] = c->r[3] + 0u;
    c->r[4] = c->r[2] << 2;
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[16] = c->r[4] + c->r[2];
    c->r[3] = c->r[3] + 0x00000001u;
    mem_w32(ram, c->r[5] + 0x00000000u, c->r[3]);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000ac8u;
    { c->r[31] = 0x08946890u; c->r[5] = mem_r32(ram, c->r[30] + 0x00000000u); func_089cb780(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    mem_w32(ram, c->r[16] + 0x00000000u, c->r[2]);
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x089468a8u; c->r[4] = c->r[4] + 0x00000af4u; func_0880d294(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = 0u + 0x00000002u;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_089468dc; }
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x089468c4u; c->r[4] = c->r[4] + 0x00000af4u; func_08813c00(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = 0u + 0x00000001u;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_089468dc; }
    { goto L_08946908; }
L_089468dc:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[2] = (u32)((s32)c->r[3] >> 31);
    c->r[2] = c->r[2] >> 27;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = (u32)((s32)c->r[2] >> 5);
    c->r[2] = c->r[2] << 5;
    c->r[2] = c->r[3] - c->r[2];
    { mem_w32(ram, c->r[4] + 0x00000000u, c->r[2]); goto L_08946930; }
L_08946908:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[2] = (u32)((s32)c->r[3] >> 31);
    c->r[2] = c->r[2] >> 25;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = (u32)((s32)c->r[2] >> 7);
    c->r[2] = c->r[2] << 7;
    c->r[2] = c->r[3] - c->r[2];
    mem_w32(ram, c->r[4] + 0x00000000u, c->r[2]);
L_08946930:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000028u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000024u);
    c->r[16] = mem_r32(ram, c->r[29] + 0x00000020u);
    { c->r[29] = c->r[29] + 0x00000030u; return; }
    return; /* fell out of func_089467b8 */
}

/* func_0894c294  0x0894c294..0x0894c2d8  68 bytes, source=sweep */
void func_0894c294(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0894c294u);
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
    { c->r[31] = 0x0894c2c4u; c->r[5] = c->r[2] + 0u; func_0894b6a0(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_0894c294 */
}

/* func_0895355c  0x0895355c..0x089535c8  108 bytes, source=sweep */
void func_0895355c(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0895355cu);
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
    { c->r[31] = 0x08953598u; c->r[5] = c->r[2] + 0u; func_08953404(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = c->r[2] >> 24;
    c->r[2] = 0x58000000u;
    c->r[2] = c->r[3] | c->r[2];
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x089535b4u; c->r[5] = c->r[2] + 0u; func_08953404(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_0895355c */
}

/* func_08955860  0x08955860..0x089558b0  80 bytes, source=sweep */
void func_08955860(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08955860u);
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
    { c->r[31] = 0x0895589cu; c->r[5] = c->r[2] + 0u; func_08954fd0(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_08955860 */
}

/* func_08958624  0x08958624..0x08958668  68 bytes, source=sweep */
void func_08958624(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08958624u);
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
    { c->r[31] = 0x08958654u; c->r[5] = c->r[2] + 0u; func_08957fc8(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_08958624 */
}

/* func_0895b1d4  0x0895b1d4..0x0895b238  100 bytes, source=sweep */
void func_0895b1d4(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0895b1d4u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = 0u + 0x00000010u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_0895b200; }
    c->r[2] = 0u + 0x00000004u;
    { mem_w32(ram, c->r[30] + 0x00000004u, c->r[2]); goto L_0895b224; }
L_0895b200:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = 0u + 0x00000003u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_0895b21c; }
    c->r[2] = 0u + 0x00000003u;
    { mem_w32(ram, c->r[30] + 0x00000004u, c->r[2]); goto L_0895b224; }
L_0895b21c:
    c->r[2] = 0u + 0x000000ffu;
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[2]);
L_0895b224:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_0895b1d4 */
}

/* func_0895e64c  0x0895e64c..0x0895e9b0  868 bytes, source=fde */
void func_0895e64c(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0895e64cu);
    c->r[29] = c->r[29] + 0xffffff80u;
    mem_w32(ram, c->r[29] + 0x00000064u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000060u, c->r[30]);
    mem_wf32(ram, c->r[29] + 0x00000070u, c->f[20]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    c->r[2] = c->r[6] + 0u;
    mem_w8(ram, c->r[30] + 0x00000008u, c->r[2]);
    mem_w32(ram, c->r[30] + 0x00000010u, 0u);
    c->r[2] = c->r[30] + 0x00000020u;
    { c->r[31] = 0x0895e680u; c->r[4] = c->r[2] + 0u; func_08808240(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    mem_w32(ram, c->r[30] + 0x00000030u, c->r[2]);
    mem_w32(ram, c->r[30] + 0x0000000cu, 0u);
L_0895e68c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = ((s32)c->r[2] < (s32)c->r[3]) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_0895e6a8; }
    { goto L_0895e98c; }
L_0895e6a8:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000030u);
    mem_w32(ram, c->r[30] + 0x00000054u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000054u);
    c->r[2] = mem_r16(ram, c->r[3] + 0x00000000u);
    c->r[2] = (c->r[2] < 0x00000007u) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_0895e970; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000054u);
    c->r[2] = mem_r16(ram, c->r[3] + 0x00000000u);
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08a50000u;
    c->r[2] = c->r[2] + 0xffff8208u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    { u32 _t = c->r[2]; switch (_t) { case 0x0895e6e8u: goto L_0895e6e8; case 0x0895e6f0u: goto L_0895e6f0; case 0x0895e738u: goto L_0895e738; case 0x0895e768u: goto L_0895e768; case 0x0895e844u: goto L_0895e844; case 0x0895e8a0u: goto L_0895e8a0; case 0x0895e8fcu: goto L_0895e8fc; default: recomp_trap_unknown_indirect(c, ram, 0x0895e6e0u, _t); return; } }
L_0895e6e8:
    { mem_w32(ram, c->r[30] + 0x00000050u, 0u); goto L_0895e994; }
L_0895e6f0:
    c->r[2] = 0x08aa0000u;
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x000049a8u);
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000030u);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[3];
    c->r[2] = c->r[2] + 0x00000004u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = ((s32)c->r[3] < (s32)c->r[2]) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_0895e970; }
    c->r[2] = 0u + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]); goto L_0895e970; }
L_0895e738:
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x0895e744u; c->r[4] = c->r[4] + 0x00000af4u; func_08921a18(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000030u);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[3];
    c->r[2] = c->r[2] + 0x00000004u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    { mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]); goto L_0895e970; }
L_0895e768:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000030u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000004u);
    c->f[0] = (f32)(s32)f2u(c->f[0]);
    { c->r[31] = 0x0895e77cu; c->f[12] = c->f[0]; func_08940870(c, ram); }
    c->f[20] = c->f[0];
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000030u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000008u);
    c->f[0] = (f32)(s32)f2u(c->f[0]);
    { c->r[31] = 0x0895e794u; c->f[12] = c->f[0]; func_08940870(c, ram); }
    c->f[0] = -c->f[0];
    c->r[2] = c->r[30] + 0x00000040u;
    c->r[3] = 0x08a80000u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x00002ed8u);
    c->r[4] = c->r[2] + 0u;
    c->f[12] = c->f[20];
    c->f[13] = mem_rf32(ram, c->r[3] + 0x00000024u);
    c->f[14] = c->f[0];
    c->f[15] = u2f(0u);
    { c->r[31] = 0x0895e7c0u; func_0880d140(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000040u);
    mem_w32(ram, c->r[30] + 0x00000020u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000044u);
    mem_w32(ram, c->r[30] + 0x00000024u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000048u);
    mem_w32(ram, c->r[30] + 0x00000028u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000004cu);
    mem_w32(ram, c->r[30] + 0x0000002cu, c->r[2]);
    c->r[2] = c->r[30] + 0x00000020u;
    c->r[3] = c->r[30] + 0x00000020u;
    c->r[4] = c->r[2] + 0u;
    c->r[5] = c->r[3] + 0u;
    c->r[6] = 0x08aa0000u;
    { c->r[31] = 0x0895e7fcu; c->r[6] = c->r[6] + 0xffffebd0u; func_08859fd4(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000030u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x0000000cu);
    c->f[0] = (f32)(s32)f2u(c->f[0]);
    { c->r[31] = 0x0895e810u; c->f[12] = c->f[0]; func_08940870(c, ram); }
    c->r[2] = 0x08a80000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00002ed8u);
    c->r[2] = c->r[2] + 0x00000020u;
    c->r[3] = c->r[30] + 0x00000020u;
    c->r[4] = c->r[2] + 0u;
    c->r[5] = c->r[3] + 0u;
    { c->r[31] = 0x0895e830u; c->f[12] = c->f[0]; func_088ef73c(c, ram); }
    { int _c = (c->r[2] == 0u); if (_c) goto L_0895e970; }
    c->r[2] = 0u + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]); goto L_0895e970; }
L_0895e844:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000030u);
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x00000002u);
    c->r[3] = c->r[2] << 1;
    c->r[2] = 0x08aa0000u;
    c->r[2] = c->r[2] + 0x00004970u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x00000008u);
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000030u);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[3];
    c->r[2] = c->r[2] + 0x00000004u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = ((s32)c->r[3] < (s32)c->r[2]) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_0895e970; }
    c->r[2] = 0u + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]); goto L_0895e970; }
L_0895e8a0:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000030u);
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x00000002u);
    c->r[3] = c->r[2] << 1;
    c->r[2] = 0x08aa0000u;
    c->r[2] = c->r[2] + 0x00004970u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x00000008u);
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000030u);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[3];
    c->r[2] = c->r[2] + 0x00000004u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = ((s32)c->r[2] < (s32)c->r[3]) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_0895e970; }
    c->r[2] = 0u + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]); goto L_0895e970; }
L_0895e8fc:
    c->r[2] = 0x08aa0000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00004968u);
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
    c->r[3] = 0x08aa0000u;
    c->r[3] = mem_r8(ram, c->r[3] + 0x00004960u);
    c->r[2] = 0u + 0x00000002u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_0895e928; }
    c->r[2] = 0x08aa0000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000496cu);
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
L_0895e928:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000030u);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[3];
    c->r[2] = c->r[2] + 0x00000004u;
    c->r[3] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 4;
    c->r[2] = c->r[2] - c->r[3];
    c->r[2] = c->r[2] << 1;
    mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = ((s32)c->r[3] < (s32)c->r[2]) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_0895e970; }
    c->r[2] = 0u + 0x00000001u;
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]);
L_0895e970:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000030u);
    c->r[2] = c->r[2] + 0x00000018u;
    mem_w32(ram, c->r[30] + 0x00000030u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]); goto L_0895e68c; }
L_0895e98c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    mem_w32(ram, c->r[30] + 0x00000050u, c->r[2]);
L_0895e994:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000050u);
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000064u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000060u);
    c->f[20] = mem_rf32(ram, c->r[29] + 0x00000070u);
    { c->r[29] = c->r[29] + 0x00000080u; return; }
    return; /* fell out of func_0895e64c */
}

/* func_089611ec  0x089611ec..0x0896132c  320 bytes, source=fde */
void func_089611ec(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089611ecu);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000000u);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[2]);
    { c->r[31] = 0x08961214u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000004u); func_088d3790(c, ram); }
    { int _c = (c->r[2] != 0u); if (_c) goto L_08961224; }
    { goto L_08961318; }
L_08961224:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = c->r[2] << 3;
    c->r[2] = 0x08aa0000u;
    c->r[2] = c->r[2] + 0x000049e0u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[3] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x000000d2u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x00000002u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = ((s32)c->r[2] < (s32)0x00007531u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_0896127c; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = c->r[2] << 3;
    c->r[2] = 0x08aa0000u;
    c->r[2] = c->r[2] + 0x000049e0u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[3] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[2] = 0u + 0x00007530u;
    { mem_w16(ram, c->r[3] + 0x000000d2u, c->r[2]); goto L_08961318; }
L_0896127c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = c->r[2] << 3;
    c->r[2] = 0x08aa0000u;
    c->r[2] = c->r[2] + 0x000049e0u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[3] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x000000d2u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x00000002u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = ((s32)c->r[2] < (s32)0xffff8ad0u) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_089612d4; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = c->r[2] << 3;
    c->r[2] = 0x08aa0000u;
    c->r[2] = c->r[2] + 0x000049e0u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[3] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[2] = 0u + 0xffff8ad0u;
    { mem_w16(ram, c->r[3] + 0x000000d2u, c->r[2]); goto L_08961318; }
L_089612d4:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = c->r[2] << 3;
    c->r[2] = 0x08aa0000u;
    c->r[2] = c->r[2] + 0x000049e0u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[5] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = c->r[2] << 3;
    c->r[2] = 0x08aa0000u;
    c->r[2] = c->r[2] + 0x000049e0u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[4] = mem_r16(ram, c->r[2] + 0x000000d2u);
    c->r[2] = mem_r16(ram, c->r[3] + 0x00000002u);
    c->r[2] = c->r[4] + c->r[2];
    mem_w16(ram, c->r[5] + 0x000000d2u, c->r[2]);
L_08961318:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_089611ec */
}

/* func_08964058  0x08964058..0x08964140  232 bytes, source=sweep */
void func_08964058(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08964058u);
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
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x000000e0u);
    mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x000000e0u);
    mem_w32(ram, c->r[30] + 0x0000001cu, c->r[2]);
    mem_w32(ram, c->r[30] + 0x00000014u, 0u);
L_08964098:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = ((s32)c->r[2] < (s32)c->r[3]) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_089640b4; }
    { goto L_08964130; }
L_089640b4:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 2;
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = c->r[3] + c->r[2];
    c->r[3] = mem_r8(ram, c->r[2] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_08964120; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_08964114; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 2;
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = c->r[3] + c->r[2];
    { mem_w8(ram, c->r[2] + 0x00000001u, 0u); goto L_08964130; }
L_08964114:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = c->r[2] + 0x00000001u;
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]);
L_08964120:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]); goto L_08964098; }
L_08964130:
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000020u);
    { c->r[29] = c->r[29] + 0x00000030u; return; }
    return; /* fell out of func_08964058 */
}

/* func_08966e30  0x08966e30..0x08966e98  104 bytes, source=fde */
void func_08966e30(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08966e30u);
    c->r[29] = c->r[29] + 0xfffffef0u;
    mem_w32(ram, c->r[29] + 0x00000108u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000104u, c->r[30]);
    mem_w32(ram, c->r[29] + 0x00000100u, c->r[16]);
    c->r[30] = c->r[29] + 0u;
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x08966e50u; c->r[4] = c->r[4] + 0x00000af4u; func_08813c00(c, ram); }
    c->r[16] = c->r[2] + 0u;
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x08966e60u; c->r[4] = c->r[4] + 0x00000af4u; func_0880d380(c, ram); }
    c->r[4] = c->r[30] + 0u;
    c->r[5] = 0x08a50000u;
    c->r[5] = c->r[5] + 0xffff8424u;
    c->r[6] = c->r[16] + 0u;
    { c->r[31] = 0x08966e78u; c->r[7] = c->r[2] + 0u; func_08a1ad34(c, ram); }
    { c->r[31] = 0x08966e80u; c->r[4] = c->r[30] + 0u; func_08808e2c(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000108u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000104u);
    c->r[16] = mem_r32(ram, c->r[29] + 0x00000100u);
    { c->r[29] = c->r[29] + 0x00000110u; return; }
    return; /* fell out of func_08966e30 */
}

/* func_089696d8  0x089696d8..0x0896973c  100 bytes, source=residue */
void func_089696d8(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089696d8u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[2] = 0u + 0xffffffffu;
    mem_w8(ram, c->r[30] + 0x00000004u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = (c->r[2] < 0x00000010u) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_08969728; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08a60000u;
    c->r[2] = c->r[2] + 0xffff9a5cu;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000006u);
    mem_w8(ram, c->r[30] + 0x00000004u, c->r[2]);
L_08969728:
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[30] + 0x00000004u);
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_089696d8 */
}

/* func_0896a36c  0x0896a36c..0x0896a3c0  84 bytes, source=fde */
void func_0896a36c(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0896a36cu);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    { c->r[31] = 0x0896a384u; mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]); func_0896a3c0(c, ram); }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[2] = c->r[3] - c->r[2];
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08a60000u;
    c->r[2] = c->r[2] + 0xffff9db4u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_0896a36c */
}

/* func_0896ce9c  0x0896ce9c..0x0896d22c  912 bytes, source=fde */
void func_0896ce9c(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0896ce9cu);
    c->r[29] = c->r[29] + 0xffffffb0u;
    mem_w32(ram, c->r[29] + 0x00000048u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000044u, c->r[30]);
    mem_w32(ram, c->r[29] + 0x00000040u, c->r[16]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[2] = c->r[5] + 0u;
    c->r[3] = c->r[6] + 0u;
    c->r[4] = c->r[7] + 0u;
    mem_w8(ram, c->r[30] + 0x00000004u, c->r[2]);
    mem_w8(ram, c->r[30] + 0x00000005u, c->r[3]);
    mem_w8(ram, c->r[30] + 0x00000006u, c->r[4]);
    { c->r[31] = 0x0896ced4u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u); func_0896e5a8(c, ram); }
    { c->r[31] = 0x0896cedcu; c->r[16] = c->r[2] + 0u; func_0896a3c0(c, ram); }
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[2] = c->r[2] + 0xffffffffu;
    c->r[2] = ((s32)c->r[16] < (s32)c->r[2]) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_0896cefc; }
    c->r[2] = 0u + 0xffffffffu;
    { mem_w32(ram, c->r[30] + 0x00000034u, c->r[2]); goto L_0896d210; }
L_0896cefc:
    mem_w32(ram, c->r[30] + 0x00000008u, 0u);
    mem_w32(ram, c->r[30] + 0x0000000cu, 0u);
    mem_w32(ram, c->r[30] + 0x00000010u, 0u);
    mem_w32(ram, c->r[30] + 0x00000014u, 0u);
    c->r[2] = c->r[30] + 0x00000020u;
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0u + 0u;
    { c->r[31] = 0x0896cf20u; c->r[6] = 0u + 0x00000004u; func_08a19ec4(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000030u, 0u);
L_0896cf24:
    { c->r[31] = 0x0896cf2cu; func_0896a3c0(c, ram); }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000030u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[2] = ((s32)c->r[3] < (s32)c->r[2]) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_0896cf48; }
    { goto L_0896d0fc; }
L_0896cf48:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x000009c2u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000030u);
    { int _c = (c->r[2] != c->r[3]); if (_c) goto L_0896cf74; }
    c->r[3] = c->r[30] + 0x00000020u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000030u);
    c->r[3] = c->r[3] + c->r[2];
    c->r[2] = 0u + 0x00000001u;
    { mem_w8(ram, c->r[3] + 0x00000000u, c->r[2]); goto L_0896d0ec; }
L_0896cf74:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000030u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 5;
    c->r[2] = c->r[2] + c->r[3];
    c->r[2] = c->r[2] << 4;
    c->r[2] = c->r[2] + c->r[4];
    c->r[2] = c->r[2] + 0x00000280u;
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x0000000fu);
    c->r[2] = 0u + 0x00000001u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_0896cfb4; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]); goto L_0896d0ec; }
L_0896cfb4:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000030u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 5;
    c->r[2] = c->r[2] + c->r[3];
    c->r[2] = c->r[2] << 4;
    c->r[2] = c->r[2] + c->r[4];
    c->r[2] = c->r[2] + 0x00000280u;
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x0000000eu);
    c->r[2] = 0u + 0x00000001u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_0896cff4; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]); goto L_0896d0ec; }
L_0896cff4:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000030u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 5;
    c->r[2] = c->r[2] + c->r[3];
    c->r[2] = c->r[2] << 4;
    c->r[2] = c->r[2] + c->r[4];
    c->r[2] = c->r[2] + 0x00000284u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[3] = mem_r8(ram, c->r[2] + 0x00000002u);
    c->r[2] = mem_r8(ram, c->r[30] + 0x00000004u);
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_0896d0ec; }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000030u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 5;
    c->r[2] = c->r[2] + c->r[3];
    c->r[2] = c->r[2] << 4;
    c->r[2] = c->r[2] + c->r[4];
    c->r[2] = c->r[2] + 0x00000284u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[3] = mem_r8(ram, c->r[2] + 0x00000003u);
    c->r[2] = mem_r8(ram, c->r[30] + 0x00000005u);
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_0896d08c; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x00000001u;
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[2] + 0x00000001u;
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]);
    c->r[3] = c->r[30] + 0x00000020u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000030u);
    c->r[3] = c->r[3] + c->r[2];
    c->r[2] = 0u + 0x00000001u;
    { mem_w8(ram, c->r[3] + 0x00000000u, c->r[2]); goto L_0896d0ec; }
L_0896d08c:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000030u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 5;
    c->r[2] = c->r[2] + c->r[3];
    c->r[2] = c->r[2] << 4;
    c->r[2] = c->r[2] + c->r[4];
    c->r[2] = c->r[2] + 0x00000284u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[3] = mem_r8(ram, c->r[2] + 0x00000003u);
    c->r[2] = mem_r8(ram, c->r[30] + 0x00000006u);
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_0896d0ec; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = c->r[2] + 0x00000001u;
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[2] + 0x00000001u;
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]);
    c->r[3] = c->r[30] + 0x00000020u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000030u);
    c->r[3] = c->r[3] + c->r[2];
    c->r[2] = 0u + 0x00000001u;
    mem_w8(ram, c->r[3] + 0x00000000u, c->r[2]);
L_0896d0ec:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000030u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000030u, c->r[2]); goto L_0896cf24; }
L_0896d0fc:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    { int _c = ((s32)c->r[2] <= 0); if (_c) goto L_0896d114; }
    c->r[2] = 0u + 0x00000002u;
    { mem_w32(ram, c->r[30] + 0x00000034u, c->r[2]); goto L_0896d210; }
L_0896d114:
    { c->r[31] = 0x0896d11cu; func_0896a3c0(c, ram); }
    c->r[3] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = c->r[3] - c->r[2];
    c->r[3] = c->r[2] + 0xffffffffu;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    { int _c = (c->r[2] != c->r[3]); if (_c) goto L_0896d144; }
    c->r[2] = 0u + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000034u, c->r[2]); goto L_0896d210; }
L_0896d144:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x000009c0u);
    { int _c = ((s32)c->r[2] <= 0); if (_c) goto L_0896d168; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r16(ram, c->r[2] + 0x000009c0u);
    c->r[2] = c->r[2] + 0xffffffffu;
    mem_w16(ram, c->r[3] + 0x000009c0u, c->r[2]);
L_0896d168:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x000009c0u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_0896d20c; }
    mem_w32(ram, c->r[30] + 0x00000030u, 0u);
L_0896d17c:
    { c->r[31] = 0x0896d184u; func_0896a3c0(c, ram); }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000030u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[2] = ((s32)c->r[3] < (s32)c->r[2]) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_0896d1a0; }
    { goto L_0896d20c; }
L_0896d1a0:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x000009c2u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000030u);
    { int _c = (c->r[2] != c->r[3]); if (_c) goto L_0896d1bc; }
    { goto L_0896d1fc; }
L_0896d1bc:
    c->r[3] = c->r[30] + 0x00000020u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000030u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000000u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_0896d1fc; }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000030u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 5;
    c->r[2] = c->r[2] + c->r[3];
    c->r[2] = c->r[2] << 4;
    c->r[2] = c->r[2] + c->r[4];
    c->r[3] = c->r[2] + 0x00000280u;
    c->r[2] = 0u + 0x00000001u;
    mem_w8(ram, c->r[3] + 0x0000000fu, c->r[2]);
L_0896d1fc:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000030u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000030u, c->r[2]); goto L_0896d17c; }
L_0896d20c:
    mem_w32(ram, c->r[30] + 0x00000034u, 0u);
L_0896d210:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000034u);
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000048u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000044u);
    c->r[16] = mem_r32(ram, c->r[29] + 0x00000040u);
    { c->r[29] = c->r[29] + 0x00000050u; return; }
    return; /* fell out of func_0896ce9c */
}

/* func_0896e464  0x0896e464..0x0896e48c  40 bytes, source=sweep */
void func_0896e464(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0896e464u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000057u);
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_0896e464 */
}

/* func_0896f424  0x0896f424..0x0896f45c  56 bytes, source=sweep */
void func_0896f424(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0896f424u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = c->r[2] << 1;
    c->r[2] = 0x08aa0000u;
    c->r[2] = c->r[2] + 0x0000686cu;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x00000000u);
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_0896f424 */
}

/* func_08971434  0x08971434..0x0897146c  56 bytes, source=sweep */
void func_08971434(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08971434u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08aa0000u;
    c->r[2] = c->r[2] + 0x0000694cu;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_08971434 */
}

/* func_08974c4c  0x08974c4c..0x08974fb4  872 bytes, source=fde */
void func_08974c4c(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08974c4cu);
    c->r[29] = c->r[29] + 0xffffffd0u;
    mem_w32(ram, c->r[29] + 0x00000024u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000020u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    c->r[2] = c->r[4] + 0u;
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[6]);
    mem_w8(ram, c->r[30] + 0x00000000u, c->r[2]);
    c->r[2] = 0u + 0x00000001u;
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
L_08974c74:
    { c->r[31] = 0x08974c7cu; func_0896a3c0(c, ram); }
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[2] = ((s32)c->r[3] < (s32)c->r[2]) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_08974c98; }
    { goto L_08974fa0; }
L_08974c98:
    { c->r[31] = 0x08974ca0u; c->r[4] = mem_r32(ram, c->r[30] + 0x0000000cu); func_0896a458(c, ram); }
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000204u);
    c->r[2] = c->r[2] + 0x00000008u;
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]);
    { c->r[31] = 0x08974cb4u; c->r[4] = mem_r32(ram, c->r[30] + 0x0000000cu); func_0896a458(c, ram); }
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x0000020eu);
    c->r[2] = 0u + 0x00000001u;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_08974ce4; }
    { c->r[31] = 0x08974cccu; c->r[4] = mem_r32(ram, c->r[30] + 0x0000000cu); func_0896a458(c, ram); }
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x0000020fu);
    c->r[2] = 0u + 0x00000001u;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_08974ce4; }
    { goto L_08974d8c; }
L_08974ce4:
    { c->r[31] = 0x08974cecu; c->r[4] = mem_r32(ram, c->r[30] + 0x0000000cu); func_0896a458(c, ram); }
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000204u);
    c->r[3] = mem_r8(ram, c->r[2] + 0x00000002u);
    c->r[2] = mem_r8(ram, c->r[30] + 0x00000000u);
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_08974d70; }
    c->r[2] = 0u + 0x00000001u;
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
L_08974d08:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000008u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_08974d20; }
    { goto L_08974d70; }
L_08974d20:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000000u);
    c->r[3] = c->r[2] << 1;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_08974d60; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000000u);
    c->r[3] = c->r[2] << 1;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[3] + c->r[2];
    { c->r[31] = 0x08974d60u; c->r[4] = c->r[2] + 0u; func_089756ac(c, ram); }
L_08974d60:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]); goto L_08974d08; }
L_08974d70:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = c->r[2] << 1;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = c->r[3] + c->r[2];
    c->r[2] = 0u + 0x00000006u;
    { mem_w8(ram, c->r[3] + 0x00000001u, c->r[2]); goto L_08974f90; }
L_08974d8c:
    { c->r[31] = 0x08974d94u; c->r[4] = mem_r32(ram, c->r[30] + 0x0000000cu); func_0896a458(c, ram); }
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x0000020bu);
    { int _c = (c->r[2] != 0u); if (_c) goto L_08974da8; }
    { goto L_08974f90; }
L_08974da8:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000001u);
    mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]);
    c->r[2] = 0u + 0x00000002u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000018u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_08974ee0; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = ((s32)c->r[3] < (s32)0x00000003u) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_08974de8; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_08974f60; }
    { goto L_08974f90; }
L_08974de8:
    c->r[2] = 0u + 0x00000003u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000018u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_08974e44; }
    c->r[2] = 0u + 0x00000004u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000018u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_08974e10; }
    { goto L_08974f90; }
L_08974e10:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_08974f90; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000000u);
    c->r[3] = c->r[2] << 1;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = c->r[3] + c->r[2];
    c->r[2] = 0u + 0x00000005u;
    { mem_w8(ram, c->r[3] + 0x00000001u, c->r[2]); goto L_08974f90; }
L_08974e44:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000000u);
    c->r[3] = c->r[2] << 1;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[3] = mem_r8(ram, c->r[2] + 0x00000001u);
    c->r[2] = 0u + 0x00000001u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_08974f90; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000000u);
    c->r[3] = c->r[2] << 1;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_08974f90; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[4] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = c->r[2] + 0x00000002u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    { u32 _t = c->r[3]; c->r[31] = 0x08974ea8u; c->r[5] = c->r[2] + 0u; recomp_call_indirect(c, ram, 0x08974ea0u, _t); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000000u);
    c->r[3] = c->r[2] << 1;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[3] + c->r[2];
    mem_w8(ram, c->r[2] + 0x00000001u, 0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000000u);
    c->r[3] = c->r[2] << 1;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = c->r[3] + c->r[2];
    c->r[2] = 0u + 0xffffffffu;
    { mem_w8(ram, c->r[3] + 0x00000000u, c->r[2]); goto L_08974f90; }
L_08974ee0:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000000u);
    c->r[3] = c->r[2] << 1;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000001u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_08974f90; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000000u);
    c->r[3] = c->r[2] << 1;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000000u);
    c->r[2] = 0u + 0xffffffffu;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_08974f90; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000000u);
    c->r[3] = c->r[2] << 1;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = c->r[3] + c->r[2];
    c->r[2] = 0u + 0x00000001u;
    mem_w8(ram, c->r[3] + 0x00000001u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000000u);
    c->r[3] = c->r[2] << 1;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = c->r[3] + c->r[2];
    c->r[2] = mem_r8(ram, c->r[30] + 0x0000000cu);
    { mem_w8(ram, c->r[3] + 0x00000000u, c->r[2]); goto L_08974f90; }
L_08974f60:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_08974f90; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000000u);
    c->r[3] = c->r[2] << 1;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[3] + c->r[2];
    { c->r[31] = 0x08974f90u; c->r[4] = c->r[2] + 0u; func_089756ac(c, ram); }
L_08974f90:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]); goto L_08974c74; }
L_08974fa0:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000024u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000020u);
    { c->r[29] = c->r[29] + 0x00000030u; return; }
    return; /* fell out of func_08974c4c */
}

/* func_089767ac  0x089767ac..0x089772d8  2860 bytes, source=fde */
void func_089767ac(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089767acu);
L_089767ac:
    c->r[29] = c->r[29] + 0xffffffa0u;
    mem_w32(ram, c->r[29] + 0x0000005cu, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000058u, c->r[30]);
    mem_w32(ram, c->r[29] + 0x00000054u, c->r[17]);
    mem_w32(ram, c->r[29] + 0x00000050u, c->r[16]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[2] = c->r[5] + 0u;
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[6]);
    mem_w8(ram, c->r[30] + 0x00000004u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x000000e0u;
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
    c->r[2] = mem_r8(ram, c->r[30] + 0x00000004u);
    mem_w32(ram, c->r[30] + 0x00000040u, c->r[2]);
    c->r[2] = 0u + 0x00000001u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000040u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_08976810; }
    c->r[2] = 0u + 0x00000019u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000040u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_0897711c; }
    { goto L_089772b8; }
L_08976810:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r8(ram, c->r[2] + 0x0000000eu);
    mem_w32(ram, c->r[30] + 0x00000038u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000038u);
    c->r[2] = (c->r[3] < 0x0000002cu) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_089770f0; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000038u);
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08a50000u;
    c->r[2] = c->r[2] + 0xffff89a8u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    { u32 _t = c->r[2]; switch (_t) { case 0x089767acu: goto L_089767ac; case 0x0897684cu: goto L_0897684c; case 0x089768f0u: goto L_089768f0; case 0x08976920u: goto L_08976920; case 0x08976be8u: goto L_08976be8; case 0x08976e44u: goto L_08976e44; case 0x089770b4u: goto L_089770b4; case 0x089770f0u: goto L_089770f0; default: recomp_trap_unknown_indirect(c, ram, 0x08976844u, _t); return; } }
L_0897684c:
    { c->r[31] = 0x08976854u; c->r[4] = mem_r32(ram, c->r[30] + 0x0000000cu); func_0896e3a0(c, ram); }
    c->r[1] = 0x08aa0000u;
    mem_w32(ram, c->r[1] + 0x00006d88u, 0u);
    c->r[1] = 0x08aa0000u;
    mem_w32(ram, c->r[1] + 0x00006d8cu, 0u);
    c->r[1] = 0x08aa0000u;
    mem_w32(ram, c->r[1] + 0x00006d90u, 0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    mem_w32(ram, c->r[2] + 0x00000004u, 0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    mem_w8(ram, c->r[2] + 0x00000011u, 0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x00000014u;
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x08976890u; c->r[5] = c->r[2] + 0u; func_08972758(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_089768ac; }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000010u);
    { c->r[31] = 0x089768acu; c->r[5] = 0x07000000u; func_0892ff54(c, ram); }
L_089768ac:
    c->r[4] = 0x08aa0000u;
    c->r[4] = c->r[4] + 0x00006ed0u;
    c->r[5] = 0u + 0u;
    { c->r[31] = 0x089768c0u; c->r[6] = 0u + 0x00002000u; func_08a19ec4(c, ram); }
    c->r[4] = 0x08aa0000u;
    c->r[4] = c->r[4] + 0x00006ea8u;
    c->r[5] = 0u + 0x00000050u;
    c->r[6] = 0u + 0u;
    c->r[7] = 0x08aa0000u;
    c->r[7] = c->r[7] + 0x00006ed0u;
    { c->r[31] = 0x089768e0u; c->r[8] = 0u + 0x00002000u; func_089d45b0(c, ram); }
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0u + 0x00000012u;
    { mem_w8(ram, c->r[3] + 0x0000000eu, c->r[2]); goto L_089770f0; }
L_089768f0:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x00000014u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    { c->r[31] = 0x08976904u; c->r[4] = c->r[2] + 0u; func_0896e87c(c, ram); }
    { int _c = (c->r[2] == 0u); if (_c) goto L_08976914; }
    { goto L_089770f0; }
L_08976914:
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0u + 0x00000002u;
    mem_w8(ram, c->r[3] + 0x0000000eu, c->r[2]);
L_08976920:
    { c->r[31] = 0x08976928u; func_08975704(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = 0u + 0x00000001u;
    { c->r[31] = 0x08976938u; mem_w8(ram, c->r[3] + 0x00000004u, c->r[2]); func_0896a3c0(c, ram); }
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000004u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_08976954; }
    { c->r[31] = 0x08976950u; func_08975704(c, ram); }
    mem_w8(ram, c->r[2] + 0x00000004u, 0u);
L_08976954:
    { c->r[31] = 0x0897695cu; func_0896a3c0(c, ram); }
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000002u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_089769f4; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0u + 0x00000001u;
    mem_w8(ram, c->r[3] + 0x00000011u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    mem_w32(ram, c->r[2] + 0x00000004u, 0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x00000018u;
    { c->r[31] = 0x08976990u; c->r[4] = c->r[2] + 0u; func_089738a4(c, ram); }
    { c->r[31] = 0x08976998u; func_0896a3c0(c, ram); }
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000002u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_08976b84; }
    { c->r[31] = 0x089769b0u; c->r[4] = 0u + 0x00000001u; func_089c5e18(c, ram); }
    { int _c = (c->r[2] == 0u); if (_c) goto L_08976b84; }
    c->r[2] = 0u + 0x00000001u;
    c->r[1] = 0x08aa0000u;
    mem_w32(ram, c->r[1] + 0x00006d8cu, c->r[2]);
    c->r[1] = 0x08aa0000u;
    { c->r[31] = 0x089769d0u; mem_w32(ram, c->r[1] + 0x00006d90u, 0u); func_08975704(c, ram); }
    { c->r[31] = 0x089769d8u; mem_w8(ram, c->r[2] + 0x00000004u, 0u); func_08975704(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = 0u + 0x00000001u;
    mem_w8(ram, c->r[3] + 0x00000005u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0u + 0x00000013u;
    { mem_w8(ram, c->r[3] + 0x0000000eu, c->r[2]); goto L_08976b84; }
L_089769f4:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    mem_w8(ram, c->r[2] + 0x00000011u, 0u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000004u);
    c->r[2] = c->r[2] + 0x00000001u;
    mem_w32(ram, c->r[3] + 0x00000004u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000004u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000709u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_08976a5c; }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x08976a30u; c->r[5] = 0u + 0x0000000eu; func_0896a7b8(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x00000014u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    { c->r[31] = 0x08976a44u; c->r[4] = c->r[2] + 0u; func_0896e7c0(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x00000018u;
    { c->r[31] = 0x08976a54u; c->r[4] = c->r[2] + 0u; func_089738a4(c, ram); }
    { goto L_08976b84; }
L_08976a5c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = 0u + 0x00000708u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000004u);
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
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x00000018u;
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = c->r[2] + 0u;
    c->r[6] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[7] = 0u + 0x00000158u;
    c->r[8] = 0u + 0x0000009au;
    { c->r[31] = 0x08976ab8u; c->r[9] = 0u + 0x00000001u; func_089736e0(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x00000014u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000ac8u;
    { c->r[31] = 0x08976ad4u; c->r[5] = c->r[2] + 0u; func_089cb820(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x00000018u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000ac8u;
    { c->r[31] = 0x08976af4u; c->r[5] = c->r[2] + 0u; func_089cb820(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_08976b84; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_08976b84; }
    { c->r[31] = 0x08976b18u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000014u); func_08932b84(c, ram); }
    mem_w32(ram, c->r[30] + 0x0000001cu, c->r[2]);
    { c->r[31] = 0x08976b24u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000014u); func_08932c38(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000020u, c->r[2]);
    { c->r[31] = 0x08976b30u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000018u); func_08932be4(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000024u, c->r[2]);
    { c->r[31] = 0x08976b3cu; c->r[4] = mem_r32(ram, c->r[30] + 0x00000018u); func_08932c38(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000028u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000028u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000024u);
    c->r[2] = c->r[3] - c->r[2];
    mem_w32(ram, c->r[30] + 0x0000002cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = c->r[2] + 0x00000004u;
    mem_w32(ram, c->r[30] + 0x00000030u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000002cu);
    c->r[2] = c->r[3] - c->r[2];
    mem_w32(ram, c->r[30] + 0x00000034u, c->r[2]);
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[30] + 0x00000030u);
    c->r[3] = (u32)(s32)(s16)mem_r16(ram, c->r[30] + 0x00000034u);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x08976b84u; c->r[6] = c->r[3] + 0u; func_08932f40(c, ram); }
L_08976b84:
    { c->r[31] = 0x08976b8cu; c->r[4] = 0u + 0x00000001u; func_089c5f10(c, ram); }
    { int _c = (c->r[2] == 0u); if (_c) goto L_08976bb0; }
    c->r[2] = 0x08aa0000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00006d8cu);
    { int _c = (c->r[2] != 0u); if (_c) goto L_08976bb0; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0u + 0x00000003u;
    mem_w8(ram, c->r[3] + 0x0000000eu, c->r[2]);
L_08976bb0:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x0000000fu);
    { int _c = (c->r[2] != 0u); if (_c) goto L_089770f0; }
    { c->r[31] = 0x08976bc8u; func_08975704(c, ram); }
    c->r[4] = 0x08aa0000u;
    c->r[4] = c->r[4] + 0x00006ea8u;
    c->r[5] = c->r[2] + 0u;
    c->r[6] = 0u + 0x00000088u;
    { c->r[31] = 0x08976be0u; c->r[7] = 0u + 0u; func_089d4778(c, ram); }
    { goto L_089770f0; }
L_08976be8:
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0u + 0x00000002u;
    { c->r[31] = 0x08976bf8u; mem_w8(ram, c->r[3] + 0x00000011u, c->r[2]); func_08975704(c, ram); }
    mem_w8(ram, c->r[2] + 0x00000004u, 0u);
    { c->r[31] = 0x08976c04u; c->r[4] = 0u + 0x00000001u; func_089c5e18(c, ram); }
    { int _c = (c->r[2] == 0u); if (_c) goto L_08976c4c; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    mem_w8(ram, c->r[2] + 0x00000011u, 0u);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x08976c20u; c->r[5] = 0u + 0x00000002u; func_0896a7b8(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x00000014u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    { c->r[31] = 0x08976c34u; c->r[4] = c->r[2] + 0u; func_0896e7c0(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x00000018u;
    { c->r[31] = 0x08976c44u; c->r[4] = c->r[2] + 0u; func_089738a4(c, ram); }
    { goto L_08976e0c; }
L_08976c4c:
    { c->r[31] = 0x08976c54u; c->r[4] = 0u + 0x00000001u; func_089c5f10(c, ram); }
    { int _c = (c->r[2] == 0u); if (_c) goto L_08976c6c; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0u + 0x00000002u;
    { mem_w8(ram, c->r[3] + 0x0000000eu, c->r[2]); goto L_08976e0c; }
L_08976c6c:
    { c->r[31] = 0x08976c74u; func_0896a3c0(c, ram); }
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000002u) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_08976e0c; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000004u);
    c->r[2] = c->r[2] + 0x00000001u;
    mem_w32(ram, c->r[3] + 0x00000004u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000004u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000709u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_08976ce4; }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x08976cb8u; c->r[5] = 0u + 0x0000000eu; func_0896a7b8(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x00000014u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    { c->r[31] = 0x08976cccu; c->r[4] = c->r[2] + 0u; func_0896e7c0(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x00000018u;
    { c->r[31] = 0x08976cdcu; c->r[4] = c->r[2] + 0u; func_089738a4(c, ram); }
    { goto L_08976e0c; }
L_08976ce4:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = 0u + 0x00000708u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000004u);
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
    mem_w32(ram, c->r[30] + 0x00000034u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x00000018u;
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = c->r[2] + 0u;
    c->r[6] = mem_r32(ram, c->r[30] + 0x00000034u);
    c->r[7] = 0u + 0x00000158u;
    c->r[8] = 0u + 0x0000009au;
    { c->r[31] = 0x08976d40u; c->r[9] = 0u + 0x00000001u; func_089736e0(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x00000014u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000ac8u;
    { c->r[31] = 0x08976d5cu; c->r[5] = c->r[2] + 0u; func_089cb820(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000030u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x00000018u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000ac8u;
    { c->r[31] = 0x08976d7cu; c->r[5] = c->r[2] + 0u; func_089cb820(c, ram); }
    mem_w32(ram, c->r[30] + 0x0000002cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000030u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_08976e0c; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000002cu);
    { int _c = (c->r[2] == 0u); if (_c) goto L_08976e0c; }
    { c->r[31] = 0x08976da0u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000030u); func_08932b84(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000028u, c->r[2]);
    { c->r[31] = 0x08976dacu; c->r[4] = mem_r32(ram, c->r[30] + 0x00000030u); func_08932c38(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000024u, c->r[2]);
    { c->r[31] = 0x08976db8u; c->r[4] = mem_r32(ram, c->r[30] + 0x0000002cu); func_08932be4(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000020u, c->r[2]);
    { c->r[31] = 0x08976dc4u; c->r[4] = mem_r32(ram, c->r[30] + 0x0000002cu); func_08932c38(c, ram); }
    mem_w32(ram, c->r[30] + 0x0000001cu, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[2] = c->r[3] - c->r[2];
    mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000028u);
    c->r[2] = c->r[2] + 0x00000004u;
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000024u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = c->r[3] - c->r[2];
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]);
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[30] + 0x00000014u);
    c->r[3] = (u32)(s32)(s16)mem_r16(ram, c->r[30] + 0x00000010u);
    c->r[4] = mem_r32(ram, c->r[30] + 0x0000002cu);
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x08976e0cu; c->r[6] = c->r[3] + 0u; func_08932f40(c, ram); }
L_08976e0c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x0000000fu);
    { int _c = (c->r[2] != 0u); if (_c) goto L_089770f0; }
    { c->r[31] = 0x08976e24u; func_08975704(c, ram); }
    c->r[4] = 0x08aa0000u;
    c->r[4] = c->r[4] + 0x00006ea8u;
    c->r[5] = c->r[2] + 0u;
    c->r[6] = 0u + 0x00000088u;
    { c->r[31] = 0x08976e3cu; c->r[7] = 0u + 0u; func_089d4778(c, ram); }
    { goto L_089770f0; }
L_08976e44:
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0u + 0x00000003u;
    { c->r[31] = 0x08976e54u; mem_w8(ram, c->r[3] + 0x00000011u, c->r[2]); func_08975704(c, ram); }
    { c->r[31] = 0x08976e5cu; mem_w8(ram, c->r[2] + 0x00000004u, 0u); func_0896a3c0(c, ram); }
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000002u) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_08976ecc; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0u + 0x00000002u;
    mem_w8(ram, c->r[3] + 0x0000000eu, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0u + 0x00000001u;
    mem_w8(ram, c->r[3] + 0x00000011u, c->r[2]);
    c->r[1] = 0x08aa0000u;
    mem_w32(ram, c->r[1] + 0x00006d8cu, 0u);
    c->r[1] = 0x08aa0000u;
    { c->r[31] = 0x08976e98u; mem_w32(ram, c->r[1] + 0x00006d90u, 0u); func_0896a3c0(c, ram); }
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000004u) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_08976ebc; }
    { c->r[31] = 0x08976eb0u; func_08975704(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = 0u + 0x00000001u;
    mem_w8(ram, c->r[3] + 0x00000004u, c->r[2]);
L_08976ebc:
    { c->r[31] = 0x08976ec4u; func_08975704(c, ram); }
    { mem_w8(ram, c->r[2] + 0x00000005u, 0u); goto L_0897707c; }
L_08976ecc:
    { c->r[31] = 0x08976ed4u; c->r[4] = 0u + 0x00000001u; func_089c5e18(c, ram); }
    { int _c = (c->r[2] == 0u); if (_c) goto L_08977010; }
    c->r[2] = 0u + 0x00000001u;
    c->r[1] = 0x08aa0000u;
    mem_w32(ram, c->r[1] + 0x00006d90u, c->r[2]);
    c->r[2] = 0u + 0x00000001u;
    mem_w32(ram, c->r[30] + 0x00000034u, c->r[2]);
L_08976ef0:
    { c->r[31] = 0x08976ef8u; func_0896a3c0(c, ram); }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000034u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[2] = ((s32)c->r[3] < (s32)c->r[2]) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_08976f14; }
    { goto L_08976f68; }
L_08976f14:
    { c->r[31] = 0x08976f1cu; func_0896a3c0(c, ram); }
    c->r[4] = c->r[2] + 0u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000034u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 3;
    c->r[2] = c->r[2] + c->r[3];
    c->r[2] = c->r[2] << 2;
    c->r[16] = c->r[4] + c->r[2];
    { c->r[31] = 0x08976f40u; c->r[16] = c->r[16] + 0x00000004u; func_0896a3c0(c, ram); }
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x000027dcu;
    c->r[5] = c->r[16] + 0u;
    c->r[6] = 0u + 0x0000009cu;
    { c->r[31] = 0x08976f58u; c->r[7] = c->r[2] + 0u; func_089d3bd4(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000034u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000034u, c->r[2]); goto L_08976ef0; }
L_08976f68:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x00000014u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    { c->r[31] = 0x08976f7cu; c->r[4] = c->r[2] + 0u; func_0896e7c0(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000034u, 0u);
L_08976f80:
    { c->r[31] = 0x08976f88u; func_0896a3c0(c, ram); }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000034u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[2] = ((s32)c->r[3] < (s32)c->r[2]) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_08976fa4; }
    { goto L_08976ffc; }
L_08976fa4:
    { c->r[31] = 0x08976facu; c->r[4] = mem_r32(ram, c->r[30] + 0x00000034u); func_0896a4d4(c, ram); }
    { c->r[31] = 0x08976fb4u; c->r[16] = c->r[2] + 0u; func_0896a3c0(c, ram); }
    c->r[4] = c->r[2] + 0u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000034u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 3;
    c->r[2] = c->r[2] + c->r[3];
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[4] + c->r[2];
    c->r[2] = c->r[2] + 0x00000004u;
    c->r[2] = c->r[2] + 0x00000014u;
    c->r[4] = c->r[16] + 0u;
    c->r[5] = 0x08a50000u;
    c->r[5] = c->r[5] + 0xffff8998u;
    { c->r[31] = 0x08976fecu; c->r[6] = c->r[2] + 0u; func_08a1ad34(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000034u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000034u, c->r[2]); goto L_08976f80; }
L_08976ffc:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x08977008u; c->r[5] = 0u + 0x00000006u; func_0896a7b8(c, ram); }
    { goto L_0897707c; }
L_08977010:
    { c->r[31] = 0x08977018u; c->r[4] = 0u + 0x00000001u; func_089c5f10(c, ram); }
    { int _c = (c->r[2] == 0u); if (_c) goto L_0897707c; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0u + 0x00000002u;
    mem_w8(ram, c->r[3] + 0x0000000eu, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0u + 0x00000001u;
    mem_w8(ram, c->r[3] + 0x00000011u, c->r[2]);
    c->r[1] = 0x08aa0000u;
    mem_w32(ram, c->r[1] + 0x00006d8cu, 0u);
    c->r[1] = 0x08aa0000u;
    { c->r[31] = 0x0897704cu; mem_w32(ram, c->r[1] + 0x00006d90u, 0u); func_0896a3c0(c, ram); }
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000004u) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_08977070; }
    { c->r[31] = 0x08977064u; func_08975704(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = 0u + 0x00000001u;
    mem_w8(ram, c->r[3] + 0x00000004u, c->r[2]);
L_08977070:
    { c->r[31] = 0x08977078u; func_08975704(c, ram); }
    mem_w8(ram, c->r[2] + 0x00000005u, 0u);
L_0897707c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x0000000fu);
    { int _c = (c->r[2] != 0u); if (_c) goto L_089770f0; }
    { c->r[31] = 0x08977094u; func_08975704(c, ram); }
    c->r[4] = 0x08aa0000u;
    c->r[4] = c->r[4] + 0x00006ea8u;
    c->r[5] = c->r[2] + 0u;
    c->r[6] = 0u + 0x00000088u;
    { c->r[31] = 0x089770acu; c->r[7] = 0u + 0u; func_089d4778(c, ram); }
    { goto L_089770f0; }
L_089770b4:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x00000014u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000ac8u;
    { c->r[31] = 0x089770d0u; c->r[5] = c->r[2] + 0u; func_089cb820(c, ram); }
    { int _c = (c->r[2] == 0u); if (_c) goto L_089770e0; }
    { goto L_089770f0; }
L_089770e0:
    { c->r[31] = 0x089770e8u; func_08976260(c, ram); }
    { c->r[31] = 0x089770f0u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u); func_0896a824(c, ram); }
L_089770f0:
    { c->r[31] = 0x089770f8u; func_08975704(c, ram); }
    { c->r[31] = 0x08977100u; c->r[16] = c->r[2] + 0x00000008u; func_08975704(c, ram); }
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000006u);
    c->r[4] = c->r[16] + 0u;
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x08977114u; c->r[6] = 0u + 0u; func_08972848(c, ram); }
    { goto L_089772b8; }
L_0897711c:
    c->r[1] = 0x08a50000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffff89a0u);
    c->r[4] = 0x08a70000u;
    c->r[4] = c->r[4] + 0xffffb640u;
    { c->r[31] = 0x08977134u; c->f[12] = c->f[0]; func_089f1210(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000011u);
    mem_w32(ram, c->r[30] + 0x0000003cu, c->r[2]);
    c->r[2] = 0u + 0x00000001u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000003cu);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_089771b8; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000003cu);
    c->r[2] = ((s32)c->r[3] < (s32)0x00000002u) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_08977174; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000003cu);
    { int _c = (c->r[2] == 0u); if (_c) goto L_0897719c; }
    { goto L_08977204; }
L_08977174:
    c->r[2] = 0u + 0x00000002u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000003cu);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_089771d4; }
    c->r[2] = 0u + 0x00000003u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000003cu);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_089771f0; }
    { goto L_08977204; }
L_0897719c:
    c->r[4] = 0x08a50000u;
    c->r[4] = c->r[4] + 0xffff8984u;
    c->r[5] = 0u + 0x0000150bu;
    { c->r[31] = 0x089771b0u; c->r[6] = 0u + 0x00000001u; func_08928cb8(c, ram); }
    { goto L_08977204; }
L_089771b8:
    c->r[4] = 0x08a50000u;
    c->r[4] = c->r[4] + 0xffff8984u;
    c->r[5] = 0u + 0x0000150cu;
    { c->r[31] = 0x089771ccu; c->r[6] = 0u + 0x00000001u; func_08928cb8(c, ram); }
    { goto L_08977204; }
L_089771d4:
    c->r[4] = 0x08a50000u;
    c->r[4] = c->r[4] + 0xffff8984u;
    c->r[5] = 0u + 0x00001503u;
    { c->r[31] = 0x089771e8u; c->r[6] = 0u + 0x00000001u; func_08928cb8(c, ram); }
    { goto L_08977204; }
L_089771f0:
    c->r[4] = 0x08a50000u;
    c->r[4] = c->r[4] + 0xffff8984u;
    c->r[5] = 0u + 0x0000150du;
    { c->r[31] = 0x08977204u; c->r[6] = 0u + 0x00000001u; func_08928cb8(c, ram); }
L_08977204:
    c->r[4] = 0x08a70000u;
    { c->r[31] = 0x08977210u; c->r[4] = c->r[4] + 0xffffb640u; func_089f147c(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x00000014u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000ac8u;
    { c->r[31] = 0x0897722cu; c->r[5] = c->r[2] + 0u; func_089cb820(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000034u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000034u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_089772b8; }
    { c->r[31] = 0x08977244u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000034u); func_08930048(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000030u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000030u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000002u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_089772b8; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000030u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000006u) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_089772b8; }
    c->r[1] = 0x08a50000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffff89a4u);
    c->r[4] = 0x08a70000u;
    c->r[4] = c->r[4] + 0xffffb640u;
    { c->r[31] = 0x08977280u; c->f[12] = c->f[0]; func_089f1210(c, ram); }
    { c->r[31] = 0x08977288u; func_08975704(c, ram); }
    { c->r[31] = 0x08977290u; c->r[17] = c->r[2] + 0x00000008u; func_08975704(c, ram); }
    c->r[16] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000006u);
    { c->r[31] = 0x0897729cu; c->r[4] = mem_r32(ram, c->r[30] + 0x0000000cu); func_0896e48c(c, ram); }
    c->r[4] = c->r[17] + 0u;
    c->r[5] = c->r[16] + 0u;
    { c->r[31] = 0x089772acu; c->r[6] = c->r[2] + 0u; func_089732e4(c, ram); }
    c->r[4] = 0x08a70000u;
    { c->r[31] = 0x089772b8u; c->r[4] = c->r[4] + 0xffffb640u; func_089f147c(c, ram); }
L_089772b8:
    c->r[2] = 0u + 0u;
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x0000005cu);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000058u);
    c->r[17] = mem_r32(ram, c->r[29] + 0x00000054u);
    c->r[16] = mem_r32(ram, c->r[29] + 0x00000050u);
    { c->r[29] = c->r[29] + 0x00000060u; return; }
    return; /* fell out of func_089767ac */
}

/* func_08979fb4  0x08979fb4..0x0897a374  960 bytes, source=sweep */
void func_08979fb4(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08979fb4u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[2] = 0x08ab0000u;
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0xffff9117u);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000af4u;
    c->r[5] = 0u + 0x0000004fu;
    { c->r[31] = 0x08979fe4u; c->r[6] = c->r[2] + 0u; func_0881456c(c, ram); }
    c->r[2] = 0x08ab0000u;
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0xffff9118u);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000af4u;
    c->r[5] = 0u + 0x00000050u;
    { c->r[31] = 0x0897a000u; c->r[6] = c->r[2] + 0u; func_0881456c(c, ram); }
    c->r[2] = 0x08ab0000u;
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0xffff911au);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000af4u;
    c->r[5] = 0u + 0x00000052u;
    { c->r[31] = 0x0897a01cu; c->r[6] = c->r[2] + 0u; func_0881456c(c, ram); }
    c->r[2] = 0x08ab0000u;
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0xffff911cu);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000af4u;
    c->r[5] = 0u + 0x00000055u;
    { c->r[31] = 0x0897a038u; c->r[6] = c->r[2] + 0u; func_0881456c(c, ram); }
    c->r[2] = 0x08ab0000u;
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0xffff911du);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000af4u;
    c->r[5] = 0u + 0x00000056u;
    { c->r[31] = 0x0897a054u; c->r[6] = c->r[2] + 0u; func_0881456c(c, ram); }
    c->r[2] = 0x08ab0000u;
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0xffff9120u);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000af4u;
    c->r[5] = 0u + 0x00000058u;
    { c->r[31] = 0x0897a070u; c->r[6] = c->r[2] + 0u; func_0881456c(c, ram); }
    c->r[2] = 0x08ab0000u;
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0xffff9121u);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000af4u;
    c->r[5] = 0u + 0x0000005au;
    { c->r[31] = 0x0897a08cu; c->r[6] = c->r[2] + 0u; func_0881456c(c, ram); }
    c->r[2] = 0x08ab0000u;
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0xffff911fu);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000af4u;
    c->r[5] = 0u + 0x0000005fu;
    { c->r[31] = 0x0897a0a8u; c->r[6] = c->r[2] + 0u; func_0881456c(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_0897a0d8; }
    c->r[2] = 0x08ab0000u;
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0xffff9119u);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000af4u;
    c->r[5] = 0u + 0x000000a2u;
    { c->r[31] = 0x0897a0d0u; c->r[6] = c->r[2] + 0u; func_0881456c(c, ram); }
    { goto L_0897a120; }
L_0897a0d8:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = 0u + 0x00000001u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_0897a104; }
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000af4u;
    c->r[5] = 0u + 0x000000a3u;
    { c->r[31] = 0x0897a0fcu; c->r[6] = 0u + 0u; func_0881456c(c, ram); }
    { goto L_0897a120; }
L_0897a104:
    c->r[2] = 0x08ab0000u;
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0xffff9119u);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000af4u;
    c->r[5] = 0u + 0x00000051u;
    { c->r[31] = 0x0897a120u; c->r[6] = c->r[2] + 0u; func_0881456c(c, ram); }
L_0897a120:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = 0u + 0x00000003u;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_0897a148; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = 0u + 0x00000005u;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_0897a148; }
    { goto L_0897a16c; }
L_0897a148:
    c->r[2] = 0x08ab0000u;
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0xffff9116u);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000af4u;
    c->r[5] = 0u + 0x000000a1u;
    { c->r[31] = 0x0897a164u; c->r[6] = c->r[2] + 0u; func_0881456c(c, ram); }
    { goto L_0897a188; }
L_0897a16c:
    c->r[2] = 0x08ab0000u;
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0xffff9116u);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000af4u;
    c->r[5] = 0u + 0x0000004eu;
    { c->r[31] = 0x0897a188u; c->r[6] = c->r[2] + 0u; func_0881456c(c, ram); }
L_0897a188:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = 0u + 0x00000002u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_0897a1bc; }
    c->r[2] = 0x08ab0000u;
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0xffff911bu);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000af4u;
    c->r[5] = 0u + 0x000000c3u;
    { c->r[31] = 0x0897a1b4u; c->r[6] = c->r[2] + 0u; func_0881456c(c, ram); }
    { goto L_0897a1d8; }
L_0897a1bc:
    c->r[2] = 0x08ab0000u;
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0xffff911bu);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000af4u;
    c->r[5] = 0u + 0x00000054u;
    { c->r[31] = 0x0897a1d8u; c->r[6] = c->r[2] + 0u; func_0881456c(c, ram); }
L_0897a1d8:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_0897a20c; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = 0u + 0x00000001u;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_0897a20c; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = 0u + 0x00000003u;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_0897a20c; }
    { goto L_0897a230; }
L_0897a20c:
    c->r[2] = 0x08ab0000u;
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0xffff9115u);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000af4u;
    c->r[5] = 0u + 0x0000004du;
    { c->r[31] = 0x0897a228u; c->r[6] = c->r[2] + 0u; func_0881456c(c, ram); }
    { goto L_0897a24c; }
L_0897a230:
    c->r[2] = 0x08ab0000u;
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0xffff9115u);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000af4u;
    c->r[5] = 0u + 0x00000061u;
    { c->r[31] = 0x0897a24cu; c->r[6] = c->r[2] + 0u; func_0881456c(c, ram); }
L_0897a24c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[2]);
    c->r[2] = 0u + 0x00000003u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_0897a2d8; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = ((s32)c->r[3] < (s32)0x00000004u) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_0897a28c; }
    c->r[2] = 0u + 0x00000002u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_0897a2b4; }
    { goto L_0897a344; }
L_0897a28c:
    c->r[2] = 0u + 0x00000004u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_0897a2fc; }
    c->r[2] = 0u + 0x00000005u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_0897a320; }
    { goto L_0897a344; }
L_0897a2b4:
    c->r[2] = 0x08ab0000u;
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0xffff911eu);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000af4u;
    c->r[5] = 0u + 0x0000005bu;
    { c->r[31] = 0x0897a2d0u; c->r[6] = c->r[2] + 0u; func_0881456c(c, ram); }
    { goto L_0897a360; }
L_0897a2d8:
    c->r[2] = 0x08ab0000u;
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0xffff911eu);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000af4u;
    c->r[5] = 0u + 0x0000005du;
    { c->r[31] = 0x0897a2f4u; c->r[6] = c->r[2] + 0u; func_0881456c(c, ram); }
    { goto L_0897a360; }
L_0897a2fc:
    c->r[2] = 0x08ab0000u;
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0xffff911eu);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000af4u;
    c->r[5] = 0u + 0x00000060u;
    { c->r[31] = 0x0897a318u; c->r[6] = c->r[2] + 0u; func_0881456c(c, ram); }
    { goto L_0897a360; }
L_0897a320:
    c->r[2] = 0x08ab0000u;
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0xffff911eu);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000af4u;
    c->r[5] = 0u + 0x00000063u;
    { c->r[31] = 0x0897a33cu; c->r[6] = c->r[2] + 0u; func_0881456c(c, ram); }
    { goto L_0897a360; }
L_0897a344:
    c->r[2] = 0x08ab0000u;
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0xffff911eu);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000af4u;
    c->r[5] = 0u + 0x00000053u;
    { c->r[31] = 0x0897a360u; c->r[6] = c->r[2] + 0u; func_0881456c(c, ram); }
L_0897a360:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_08979fb4 */
}

/* func_089855a8  0x089855a8..0x08985d08  1888 bytes, source=fde */
void func_089855a8(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089855a8u);
L_089855a8:
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
    mem_w32(ram, c->r[30] + 0x00000034u, c->r[2]);
    c->r[2] = 0u + 0x00000001u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000034u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_08985608; }
    c->r[2] = 0u + 0x00000019u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000034u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_08985c30; }
    { goto L_08985cec; }
L_08985608:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r8(ram, c->r[2] + 0x0000000eu);
    mem_w32(ram, c->r[30] + 0x0000002cu, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000002cu);
    c->r[2] = (c->r[3] < 0x0000002cu) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_08985cec; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000002cu);
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08a50000u;
    c->r[2] = c->r[2] + 0xffff934cu;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    { u32 _t = c->r[2]; switch (_t) { case 0x089855a8u: goto L_089855a8; case 0x08985644u: goto L_08985644; case 0x089857c0u: goto L_089857c0; case 0x089857f4u: goto L_089857f4; case 0x08985b20u: goto L_08985b20; case 0x08985bfcu: goto L_08985bfc; case 0x08985cecu: goto L_08985cec; default: recomp_trap_unknown_indirect(c, ram, 0x0898563cu, _t); return; } }
L_08985644:
    { c->r[31] = 0x0898564cu; c->r[4] = mem_r32(ram, c->r[30] + 0x0000000cu); func_0896e3dc(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x0000002cu;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000ac8u;
    { c->r[31] = 0x08985668u; c->r[5] = c->r[2] + 0u; func_089cb820(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_089856bc; }
    c->r[4] = 0u + 0x00000036u;
    c->r[5] = 0u + 0u;
    c->r[6] = 0u + 0u;
    c->r[7] = 0u + 0u;
    c->r[8] = 0u + 0u;
    { c->r[31] = 0x08985694u; c->r[9] = 0u + 0u; func_089c6bec(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[16] = c->r[2] + 0x0000002cu;
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000ac8u;
    { c->r[31] = 0x089856b0u; c->r[5] = mem_r32(ram, c->r[30] + 0x00000014u); func_089cb780(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    mem_w32(ram, c->r[16] + 0x00000000u, c->r[2]);
L_089856bc:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x00000030u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000ac8u;
    { c->r[31] = 0x089856d8u; c->r[5] = c->r[2] + 0u; func_089cb820(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_0898572c; }
    c->r[4] = 0u + 0x00000037u;
    c->r[5] = 0u + 0u;
    c->r[6] = 0u + 0u;
    c->r[7] = 0u + 0u;
    c->r[8] = 0u + 0u;
    { c->r[31] = 0x08985704u; c->r[9] = 0u + 0u; func_089c6bec(c, ram); }
    mem_w32(ram, c->r[30] + 0x0000001cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[16] = c->r[2] + 0x00000030u;
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000ac8u;
    { c->r[31] = 0x08985720u; c->r[5] = mem_r32(ram, c->r[30] + 0x0000001cu); func_089cb780(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000020u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    mem_w32(ram, c->r[16] + 0x00000000u, c->r[2]);
L_0898572c:
    { c->r[31] = 0x08985734u; c->r[4] = 0u + 0x00000003u; func_08924620(c, ram); }
    c->r[2] = 0u + 0x00000001u;
    c->r[1] = 0x08ab0000u;
    mem_w8(ram, c->r[1] + 0xffff9226u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000045u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_08985758; }
    { c->r[31] = 0x08985758u; func_089810d8(c, ram); }
L_08985758:
    { c->r[31] = 0x08985760u; func_089814c0(c, ram); }
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0u + 0xffffffffu;
    mem_w8(ram, c->r[3] + 0x00000040u, c->r[2]);
    { c->r[31] = 0x08985774u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u); func_0896ec90(c, ram); }
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0u + 0x00000006u;
    { c->r[31] = 0x08985784u; mem_w32(ram, c->r[3] + 0x00000004u, c->r[2]); func_0896a284(c, ram); }
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x08985790u; c->r[5] = 0u + 0xffffffffu; func_0896ccf0(c, ram); }
    { c->r[31] = 0x08985798u; func_0896a284(c, ram); }
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0u + 0x00000008u;
    c->r[6] = 0u + 0x00000080u;
    c->r[7] = 0u + 0u;
    { c->r[31] = 0x089857b0u; c->r[8] = 0u + 0u; func_0896cc50(c, ram); }
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0u + 0x00000012u;
    { mem_w8(ram, c->r[3] + 0x0000000eu, c->r[2]); goto L_08985cec; }
L_089857c0:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000004u);
    { int _c = ((s32)c->r[2] > 0); if (_c) goto L_089857dc; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0u + 0x00000013u;
    mem_w8(ram, c->r[3] + 0x0000000eu, c->r[2]);
L_089857dc:
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000004u);
    c->r[2] = c->r[2] + 0xffffffffu;
    { mem_w32(ram, c->r[3] + 0x00000004u, c->r[2]); goto L_08985cec; }
L_089857f4:
    { c->r[31] = 0x089857fcu; func_0896a284(c, ram); }
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0u + 0x00000008u;
    c->r[6] = 0u + 0x00000003u;
    { c->r[31] = 0x08985810u; c->r[7] = 0u + 0x0000000au; func_0896d22c(c, ram); }
    mem_w32(ram, c->r[30] + 0x0000001cu, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = 0u + 0xffffffffu;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_08985858; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x00000028u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    { c->r[31] = 0x08985838u; c->r[4] = c->r[2] + 0u; func_0896e7c0(c, ram); }
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0u + 0x00000003u;
    mem_w32(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x08985850u; c->r[5] = 0u + 0x00000033u; func_0896a7b8(c, ram); }
    { goto L_08985cec; }
L_08985858:
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = 0u + 0x00000001u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_08985cec; }
    { c->r[31] = 0x08985870u; c->r[4] = 0u + 0u; func_0896a458(c, ram); }
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000204u);
    c->r[2] = c->r[2] + 0x00000008u;
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
    mem_w32(ram, c->r[30] + 0x00000010u, 0u);
L_08985880:
    { c->r[31] = 0x08985888u; func_0896a3c0(c, ram); }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[2] = ((s32)c->r[3] < (s32)c->r[2]) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_089858a4; }
    { goto L_0898598c; }
L_089858a4:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08ab0000u;
    c->r[2] = c->r[2] + 0xffff9190u;
    c->r[5] = c->r[3] + c->r[2];
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[4];
    c->r[2] = c->r[2] + 0x00000010u;
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000000u);
    mem_w8(ram, c->r[5] + 0x00000000u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08ab0000u;
    c->r[2] = c->r[2] + 0xffff9190u;
    c->r[5] = c->r[3] + c->r[2];
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[4];
    c->r[2] = c->r[2] + 0x00000010u;
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000004u);
    mem_w8(ram, c->r[5] + 0x00000004u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08ab0000u;
    c->r[2] = c->r[2] + 0xffff9190u;
    c->r[5] = c->r[3] + c->r[2];
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[4];
    c->r[2] = c->r[2] + 0x00000010u;
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000008u);
    mem_w8(ram, c->r[5] + 0x00000008u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]); goto L_08985880; }
L_0898598c:
    { c->r[31] = 0x08985994u; func_089794c4(c, ram); }
    c->r[3] = mem_r8(ram, c->r[2] + 0x00000001u);
    c->r[2] = 0u + 0x00000001u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_08985ad0; }
    { c->r[31] = 0x089859acu; func_0896a3c0(c, ram); }
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]);
L_089859b4:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000008u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_089859cc; }
    { goto L_08985ad0; }
L_089859cc:
    { c->r[31] = 0x089859d4u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000010u); func_0896dbc0(c, ram); }
    mem_w8(ram, c->r[30] + 0x00000024u, c->r[2]);
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[30] + 0x00000024u);
    c->r[2] = 0u + 0xffffffffu;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_08985ac0; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08ab0000u;
    c->r[2] = c->r[2] + 0xffff9190u;
    c->r[5] = c->r[3] + c->r[2];
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[4];
    c->r[2] = c->r[2] + 0x00000010u;
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000000u);
    mem_w8(ram, c->r[5] + 0x00000000u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08ab0000u;
    c->r[2] = c->r[2] + 0xffff9190u;
    c->r[5] = c->r[3] + c->r[2];
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[4];
    c->r[2] = c->r[2] + 0x00000010u;
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000004u);
    mem_w8(ram, c->r[5] + 0x00000004u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08ab0000u;
    c->r[2] = c->r[2] + 0xffff9190u;
    c->r[5] = c->r[3] + c->r[2];
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[4];
    c->r[2] = c->r[2] + 0x00000010u;
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000008u);
    mem_w8(ram, c->r[5] + 0x00000008u, c->r[2]);
L_08985ac0:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]); goto L_089859b4; }
L_08985ad0:
    { c->r[31] = 0x08985ad8u; func_0896a284(c, ram); }
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0u + 0x00000008u;
    c->r[6] = 0u + 0x00000003u;
    c->r[7] = 0u + 0u;
    { c->r[31] = 0x08985af0u; c->r[8] = 0u + 0u; func_0896cc50(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x00000028u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    { c->r[31] = 0x08985b04u; c->r[4] = c->r[2] + 0u; func_0896e7c0(c, ram); }
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0u + 0x00000006u;
    mem_w32(ram, c->r[3] + 0x00000004u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0u + 0x00000015u;
    { mem_w8(ram, c->r[3] + 0x0000000eu, c->r[2]); goto L_08985cec; }
L_08985b20:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000004u);
    { int _c = ((s32)c->r[2] > 0); if (_c) goto L_08985be4; }
    { c->r[31] = 0x08985b38u; func_0896a284(c, ram); }
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x08985b44u; c->r[5] = 0u + 0xffffffffu; func_0896ccf0(c, ram); }
    { c->r[31] = 0x08985b4cu; func_089794c4(c, ram); }
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000006u);
    mem_w32(ram, c->r[30] + 0x00000028u, c->r[2]);
    c->r[2] = 0u + 0x00000001u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000028u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_08985bbc; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000028u);
    c->r[2] = ((s32)c->r[3] < (s32)0x00000002u) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_08985b88; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000028u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_08985ba0; }
    { goto L_08985cec; }
L_08985b88:
    c->r[2] = 0u + 0x00000002u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000028u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_08985bd0; }
    { goto L_08985cec; }
L_08985ba0:
    { c->r[31] = 0x08985ba8u; func_08986220(c, ram); }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x08985bb4u; c->r[5] = 0u + 0x0000001eu; func_0896a7b8(c, ram); }
    { goto L_08985cec; }
L_08985bbc:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x08985bc8u; c->r[5] = 0u + 0x0000001au; func_0896a7b8(c, ram); }
    { goto L_08985cec; }
L_08985bd0:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x08985bdcu; c->r[5] = 0u + 0x0000001cu; func_0896a7b8(c, ram); }
    { goto L_08985cec; }
L_08985be4:
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000004u);
    c->r[2] = c->r[2] + 0xffffffffu;
    { mem_w32(ram, c->r[3] + 0x00000004u, c->r[2]); goto L_08985cec; }
L_08985bfc:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x00000028u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    { c->r[31] = 0x08985c10u; c->r[4] = c->r[2] + 0u; func_0896e8f8(c, ram); }
    { int _c = (c->r[2] == 0u); if (_c) goto L_08985c20; }
    { goto L_08985cec; }
L_08985c20:
    { c->r[31] = 0x08985c28u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u); func_0896a824(c, ram); }
    { goto L_08985cec; }
L_08985c30:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r8(ram, c->r[2] + 0x0000000eu);
    mem_w32(ram, c->r[30] + 0x00000030u, c->r[2]);
    c->r[2] = 0u + 0x00000013u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000030u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_08985c64; }
    c->r[2] = 0u + 0x00000014u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000030u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_08985cb4; }
    { goto L_08985cec; }
L_08985c64:
    c->r[1] = 0x08a50000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffff9348u);
    c->r[4] = 0x08a70000u;
    c->r[4] = c->r[4] + 0xffffb640u;
    { c->r[31] = 0x08985c7cu; c->f[12] = c->f[0]; func_089f1210(c, ram); }
    { c->r[31] = 0x08985c84u; c->r[4] = 0u + 0x00000004u; func_08928c60(c, ram); }
    c->r[4] = 0x08a50000u;
    c->r[4] = c->r[4] + 0xffff8fbcu;
    c->r[5] = 0u + 0x00001507u;
    { c->r[31] = 0x08985c98u; c->r[6] = 0u + 0u; func_08928cb8(c, ram); }
    { c->r[31] = 0x08985ca0u; c->r[4] = 0u + 0x00000001u; func_08928c60(c, ram); }
    c->r[4] = 0x08a70000u;
    { c->r[31] = 0x08985cacu; c->r[4] = c->r[4] + 0xffffb640u; func_089f147c(c, ram); }
    { goto L_08985cec; }
L_08985cb4:
    c->r[1] = 0x08a50000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffff9348u);
    c->r[4] = 0x08a70000u;
    c->r[4] = c->r[4] + 0xffffb640u;
    { c->r[31] = 0x08985cccu; c->f[12] = c->f[0]; func_089f1210(c, ram); }
    c->r[4] = 0x08a50000u;
    c->r[4] = c->r[4] + 0xffff8fbcu;
    c->r[5] = 0u + 0xffffffffu;
    { c->r[31] = 0x08985ce0u; c->r[6] = 0u + 0xffffffffu; func_08928cb8(c, ram); }
    c->r[4] = 0x08a70000u;
    { c->r[31] = 0x08985cecu; c->r[4] = c->r[4] + 0xffffb640u; func_089f147c(c, ram); }
L_08985cec:
    c->r[2] = 0u + 0u;
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000048u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000044u);
    c->r[16] = mem_r32(ram, c->r[29] + 0x00000040u);
    { c->r[29] = c->r[29] + 0x00000050u; return; }
    return; /* fell out of func_089855a8 */
}

/* func_0899026c  0x0899026c..0x089906a0  1076 bytes, source=fde */
void func_0899026c(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0899026cu);
    c->r[29] = c->r[29] + 0xffffffd0u;
    mem_w32(ram, c->r[29] + 0x00000028u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000024u, c->r[30]);
    mem_w32(ram, c->r[29] + 0x00000020u, c->r[16]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x000000e0u;
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[2]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = 0u + 0x00000078u;
    c->r[6] = 0u + 0xffffffffu;
    c->r[7] = 0u + 0xffffffffu;
    c->r[8] = 0u + 0u;
    c->r[9] = 0x08ab0000u;
    c->r[9] = c->r[9] + 0xffff96dcu;
    { c->r[31] = 0x089902b4u; c->r[10] = 0u + 0u; func_0892fcac(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000008u);
    { c->r[31] = 0x089902c4u; c->r[5] = 0x00100000u; func_0892ff54(c, ram); }
    { c->r[31] = 0x089902ccu; func_0896a3e4(c, ram); }
    { c->r[31] = 0x089902d4u; c->r[4] = c->r[2] + 0u; func_0896dbc0(c, ram); }
    { int _c = (c->r[2] != 0u); if (_c) goto L_089902f0; }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000008u);
    { c->r[31] = 0x089902e8u; c->r[5] = 0u + 0x00000004u; func_0892ff54(c, ram); }
    { goto L_089902fc; }
L_089902f0:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000008u);
    { c->r[31] = 0x089902fcu; c->r[5] = 0u + 0x00000004u; func_0892ffa8(c, ram); }
L_089902fc:
    { c->r[31] = 0x08990304u; func_08998dcc(c, ram); }
    c->r[2] = c->r[2] & 0x0001u;
    c->r[2] = c->r[2] & 0x00ffu;
    { int _c = (c->r[2] == 0u); if (_c) goto L_08990328; }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000008u);
    { c->r[31] = 0x08990320u; c->r[5] = 0u + 0x00002000u; func_0892ffa8(c, ram); }
    { goto L_08990334; }
L_08990328:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000008u);
    { c->r[31] = 0x08990334u; c->r[5] = 0u + 0x00002000u; func_0892ff54(c, ram); }
L_08990334:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[16] = c->r[2] + 0x0000001cu;
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000ac8u;
    { c->r[31] = 0x0899034cu; c->r[5] = mem_r32(ram, c->r[30] + 0x00000008u); func_089cb780(c, ram); }
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    mem_w32(ram, c->r[16] + 0x00000000u, c->r[2]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = 0u + 0x00000079u;
    c->r[6] = 0u + 0xffffffffu;
    c->r[7] = 0u + 0xffffffffu;
    c->r[8] = 0u + 0u;
    c->r[9] = 0x08ab0000u;
    c->r[9] = c->r[9] + 0xffff9718u;
    { c->r[31] = 0x0899037cu; c->r[10] = 0u + 0u; func_0892fcac(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000010u);
    { c->r[31] = 0x0899038cu; c->r[5] = 0x00200000u; func_0892ff54(c, ram); }
    { c->r[31] = 0x08990394u; func_0896a3e4(c, ram); }
    { c->r[31] = 0x0899039cu; c->r[4] = c->r[2] + 0u; func_0896dbc0(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = 0u + 0x00000001u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_089903c0; }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000010u);
    { c->r[31] = 0x089903b8u; c->r[5] = 0u + 0x00000004u; func_0892ff54(c, ram); }
    { goto L_089903cc; }
L_089903c0:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000010u);
    { c->r[31] = 0x089903ccu; c->r[5] = 0u + 0x00000004u; func_0892ffa8(c, ram); }
L_089903cc:
    { c->r[31] = 0x089903d4u; func_08998dcc(c, ram); }
    c->r[2] = c->r[2] & 0x0002u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_089903f4; }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000010u);
    { c->r[31] = 0x089903ecu; c->r[5] = 0u + 0x00002000u; func_0892ffa8(c, ram); }
    { goto L_08990400; }
L_089903f4:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000010u);
    { c->r[31] = 0x08990400u; c->r[5] = 0u + 0x00002000u; func_0892ff54(c, ram); }
L_08990400:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[16] = c->r[2] + 0x00000020u;
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000ac8u;
    { c->r[31] = 0x08990418u; c->r[5] = mem_r32(ram, c->r[30] + 0x00000010u); func_089cb780(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    mem_w32(ram, c->r[16] + 0x00000000u, c->r[2]);
    mem_w32(ram, c->r[30] + 0x00000018u, 0u);
    { c->r[31] = 0x08990430u; mem_w32(ram, c->r[30] + 0x0000001cu, 0u); func_089794c4(c, ram); }
    c->r[2] = mem_r8(ram, c->r[2] + 0x0000000eu);
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08a60000u;
    c->r[2] = c->r[2] + 0xffffa598u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[3] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[2] = 0u + 0x00000007u;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_0899045c; }
    c->r[2] = 0x00300000u;
    mem_w32(ram, c->r[30] + 0x0000001cu, c->r[2]);
L_0899045c:
    { c->r[31] = 0x08990464u; func_08998dcc(c, ram); }
    c->r[2] = c->r[2] & 0x0001u;
    c->r[2] = c->r[2] & 0x00ffu;
    { int _c = (c->r[2] == 0u); if (_c) goto L_089904e0; }
    { c->r[31] = 0x0899047cu; func_08998dcc(c, ram); }
    c->r[2] = c->r[2] & 0x0010u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_089904b4; }
    c->r[4] = 0x08ab0000u;
    c->r[4] = c->r[4] + 0xffff96dcu;
    c->r[5] = 0u + 0x0000006fu;
    c->r[6] = 0u + 0xffffffffu;
    c->r[7] = 0u + 0x000003b9u;
    c->r[8] = 0u + 0u;
    c->r[9] = 0u + 0u;
    { c->r[31] = 0x089904acu; c->r[10] = 0u + 0u; func_0898f2a0(c, ram); }
    { goto L_08990504; }
L_089904b4:
    c->r[4] = 0x08ab0000u;
    c->r[4] = c->r[4] + 0xffff96dcu;
    c->r[5] = 0u + 0x0000006fu;
    c->r[6] = 0u + 0xffffffffu;
    c->r[7] = 0u + 0x000003b7u;
    c->r[8] = 0u + 0u;
    c->r[9] = 0u + 0u;
    { c->r[31] = 0x089904d8u; c->r[10] = 0u + 0u; func_0898f2a0(c, ram); }
    { goto L_08990504; }
L_089904e0:
    c->r[4] = 0x08ab0000u;
    c->r[4] = c->r[4] + 0xffff96dcu;
    c->r[5] = 0u + 0x0000006fu;
    c->r[6] = 0u + 0xffffffffu;
    c->r[7] = 0u + 0x000003b8u;
    c->r[8] = 0u + 0u;
    c->r[9] = 0u + 0u;
    { c->r[31] = 0x08990504u; c->r[10] = 0u + 0u; func_0898f2a0(c, ram); }
L_08990504:
    { c->r[31] = 0x0899050cu; func_089794c4(c, ram); }
    c->r[2] = mem_r8(ram, c->r[2] + 0x0000000eu);
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08a60000u;
    c->r[2] = c->r[2] + 0xffffa598u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[3] = 0x08ab0000u;
    c->r[3] = mem_r16(ram, c->r[3] + 0xffff988cu);
    c->r[4] = 0x08ab0000u;
    c->r[4] = c->r[4] + 0xffff96f0u;
    c->r[5] = 0u + 0x0000006fu;
    c->r[6] = 0u + 0xffffffffu;
    c->r[7] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[8] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[9] = c->r[3] + 0u;
    { c->r[31] = 0x0899054cu; c->r[10] = 0u + 0u; func_0898f2a0(c, ram); }
    c->r[4] = 0x08ab0000u;
    c->r[4] = c->r[4] + 0xffff9704u;
    c->r[5] = 0u + 0x0000006fu;
    c->r[6] = 0u + 0xffffffffu;
    c->r[7] = 0u + 0x000003c3u;
    c->r[8] = 0x00500000u;
    c->r[9] = 0x08ab0000u;
    c->r[9] = mem_r32(ram, c->r[9] + 0xffff9870u);
    { c->r[31] = 0x08990574u; c->r[10] = 0u + 0u; func_0898f2a0(c, ram); }
    { c->r[31] = 0x0899057cu; func_08998dcc(c, ram); }
    c->r[2] = c->r[2] & 0x0002u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_089905f4; }
    { c->r[31] = 0x08990590u; func_08998dcc(c, ram); }
    c->r[2] = c->r[2] & 0x0010u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_089905c8; }
    c->r[4] = 0x08ab0000u;
    c->r[4] = c->r[4] + 0xffff9718u;
    c->r[5] = 0u + 0x0000006fu;
    c->r[6] = 0u + 0xffffffffu;
    c->r[7] = 0u + 0x000003b9u;
    c->r[8] = 0u + 0u;
    c->r[9] = 0u + 0u;
    { c->r[31] = 0x089905c0u; c->r[10] = 0u + 0u; func_0898f2a0(c, ram); }
    { goto L_08990618; }
L_089905c8:
    c->r[4] = 0x08ab0000u;
    c->r[4] = c->r[4] + 0xffff9718u;
    c->r[5] = 0u + 0x0000006fu;
    c->r[6] = 0u + 0xffffffffu;
    c->r[7] = 0u + 0x000003b7u;
    c->r[8] = 0u + 0u;
    c->r[9] = 0u + 0u;
    { c->r[31] = 0x089905ecu; c->r[10] = 0u + 0u; func_0898f2a0(c, ram); }
    { goto L_08990618; }
L_089905f4:
    c->r[4] = 0x08ab0000u;
    c->r[4] = c->r[4] + 0xffff9718u;
    c->r[5] = 0u + 0x0000006fu;
    c->r[6] = 0u + 0xffffffffu;
    c->r[7] = 0u + 0x000003b8u;
    c->r[8] = 0u + 0u;
    c->r[9] = 0u + 0u;
    { c->r[31] = 0x08990618u; c->r[10] = 0u + 0u; func_0898f2a0(c, ram); }
L_08990618:
    { c->r[31] = 0x08990620u; func_089794c4(c, ram); }
    c->r[2] = mem_r8(ram, c->r[2] + 0x0000000eu);
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08a60000u;
    c->r[2] = c->r[2] + 0xffffa598u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[3] = 0x08ab0000u;
    c->r[3] = mem_r16(ram, c->r[3] + 0xffff988eu);
    c->r[4] = 0x08ab0000u;
    c->r[4] = c->r[4] + 0xffff972cu;
    c->r[5] = 0u + 0x0000006fu;
    c->r[6] = 0u + 0xffffffffu;
    c->r[7] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[8] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[9] = c->r[3] + 0u;
    { c->r[31] = 0x08990660u; c->r[10] = 0u + 0u; func_0898f2a0(c, ram); }
    c->r[4] = 0x08ab0000u;
    c->r[4] = c->r[4] + 0xffff9740u;
    c->r[5] = 0u + 0x0000006fu;
    c->r[6] = 0u + 0xffffffffu;
    c->r[7] = 0u + 0x000003c3u;
    c->r[8] = 0x00500000u;
    c->r[9] = 0x08ab0000u;
    c->r[9] = mem_r32(ram, c->r[9] + 0xffff9874u);
    { c->r[31] = 0x08990688u; c->r[10] = 0u + 0u; func_0898f2a0(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000028u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000024u);
    c->r[16] = mem_r32(ram, c->r[29] + 0x00000020u);
    { c->r[29] = c->r[29] + 0x00000030u; return; }
    return; /* fell out of func_0899026c */
}

/* func_08998840  0x08998840..0x08998888  72 bytes, source=sweep */
void func_08998840(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08998840u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = c->r[2] << 8;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08ab0000u;
    c->r[2] = c->r[2] + 0xffff9a90u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_08998840 */
}

/* func_0899907c  0x0899907c..0x089990dc  96 bytes, source=sweep */
void func_0899907c(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0899907cu);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[1] = 0x08ab0000u;
    mem_w32(ram, c->r[1] + 0x00002aa0u, c->r[2]);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000af4u;
    { c->r[31] = 0x089990acu; c->r[5] = 0u + 0x00000001u; func_0880d524(c, ram); }
    c->r[4] = 0x08a80000u;
    { c->r[31] = 0x089990b8u; c->r[4] = c->r[4] + 0x00000af4u; func_0880d4fc(c, ram); }
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000af4u;
    { c->r[31] = 0x089990c8u; c->r[5] = mem_r32(ram, c->r[30] + 0x00000000u); func_089a1b58(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_0899907c */
}

/* func_0899cf1c  0x0899cf1c..0x0899d580  1636 bytes, source=fde */
void func_0899cf1c(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x0899cf1cu);
    c->r[29] = c->r[29] + 0xffffffc0u;
    mem_w32(ram, c->r[29] + 0x00000038u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000034u, c->r[30]);
    mem_w32(ram, c->r[29] + 0x00000030u, c->r[16]);
    c->r[30] = c->r[29] + 0u;
    c->r[4] = 0x08a50000u;
    { c->r[31] = 0x0899cf3cu; c->r[4] = c->r[4] + 0xffffa59cu; func_089c6f64(c, ram); }
    c->r[2] = c->r[2] + 0x00000004u;
    { c->r[31] = 0x0899cf48u; mem_w32(ram, c->r[30] + 0x00000000u, c->r[2]); func_0896a3c0(c, ram); }
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[2]);
L_0899cf50:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000008u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_0899cf68; }
    { goto L_0899d560; }
L_0899cf68:
    { c->r[31] = 0x0899cf70u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000004u); func_0896dbc0(c, ram); }
    { int _c = ((s32)c->r[2] < 0); if (_c) goto L_0899d550; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08ab0000u;
    c->r[2] = c->r[2] + 0xffff9a70u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000ac8u;
    { c->r[31] = 0x0899cfa0u; c->r[5] = c->r[2] + 0u; func_089cb820(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_0899cfb8; }
    { goto L_0899d550; }
L_0899cfb8:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = 0x08ab0000u;
    c->r[2] = c->r[2] + 0x00002ac0u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000000u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_0899d0a4; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000008cu);
    c->r[2] = c->r[2] & 0x8000u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_0899d550; }
    { c->r[31] = 0x0899cff0u; func_089795a0(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = 0u + 0xffffffffu;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_0899d02c; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = 0x08ab0000u;
    c->r[2] = c->r[2] + 0x00002ab8u;
    c->r[2] = c->r[3] + c->r[2];
    { c->r[31] = 0x0899d018u; c->r[16] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000000u); func_089795a0(c, ram); }
    c->r[2] = ((s32)c->r[16] < (s32)c->r[2]) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_0899d02c; }
    { goto L_0899d074; }
L_0899d02c:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = 0x08ab0000u;
    c->r[2] = c->r[2] + 0x00002ab8u;
    c->r[4] = c->r[3] + c->r[2];
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = 0x08ab0000u;
    c->r[2] = c->r[2] + 0x00002ab8u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000001u;
    mem_w8(ram, c->r[4] + 0x00000000u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = 0x08ab0000u;
    c->r[2] = c->r[2] + 0x00002ac0u;
    c->r[3] = c->r[3] + c->r[2];
    c->r[2] = 0u + 0xffffff96u;
    { mem_w8(ram, c->r[3] + 0x00000000u, c->r[2]); goto L_0899d550; }
L_0899d074:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = 0x08ab0000u;
    c->r[2] = c->r[2] + 0x00002af0u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000000u);
    c->r[3] = c->r[2] << 3;
    c->r[2] = 0x08aa0000u;
    c->r[2] = c->r[2] + 0x000049e0u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    { mem_w8(ram, c->r[2] + 0x000000a8u, 0u); goto L_0899d550; }
L_0899d0a4:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = 0x08ab0000u;
    c->r[2] = c->r[2] + 0x00002ac0u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000000u);
    c->r[2] = 0u + 0x00000003u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_0899d124; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = 0x08ab0000u;
    c->r[2] = c->r[2] + 0x00002af0u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000000u);
    c->r[3] = c->r[2] << 3;
    c->r[2] = 0x08aa0000u;
    c->r[2] = c->r[2] + 0x000049e0u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[3] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[2] = 0u + 0x00000001u;
    mem_w16(ram, c->r[3] + 0x000000a6u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = 0x08ab0000u;
    c->r[2] = c->r[2] + 0x00002ac0u;
    c->r[4] = c->r[3] + c->r[2];
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = 0x08ab0000u;
    c->r[2] = c->r[2] + 0x00002ac0u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000000u);
    c->r[2] = c->r[2] + 0xffffffffu;
    { mem_w8(ram, c->r[4] + 0x00000000u, c->r[2]); goto L_0899d550; }
L_0899d124:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = 0x08ab0000u;
    c->r[2] = c->r[2] + 0x00002ac0u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000000u);
    c->r[2] = 0u + 0x00000001u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_0899d524; }
    { c->r[31] = 0x0899d14cu; mem_w32(ram, c->r[30] + 0x0000000cu, 0u); func_089794c4(c, ram); }
    c->r[3] = mem_r8(ram, c->r[2] + 0x00000004u);
    c->r[2] = 0u + 0x00000002u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_0899d1b4; }
    { c->r[31] = 0x0899d164u; func_089794c4(c, ram); }
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000005u);
    c->r[2] = c->r[2] + 0x00000001u;
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000005u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_0899d188; }
    c->r[2] = 0u + 0x00000004u;
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]);
L_0899d188:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = 0x08ab0000u;
    c->r[2] = c->r[2] + 0x00002ab8u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    alx_div(c, c->r[3], c->r[2]);
    c->r[3] = c->hi;
    if (c->r[2] == 0u) { recomp_break(c, ram, 0x0899d1acu, 0x7u); goto L_0899d1b0; }
L_0899d1b0:
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[3]);
L_0899d1b4:
    { c->r[31] = 0x0899d1bcu; func_08980edc(c, ram); }
    c->r[4] = c->r[2] + 0u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[2] = c->r[2] << 2;
    c->r[3] = c->r[2] + c->r[4];
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = c->r[2] + 0x00000010u;
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000000u);
    { c->r[31] = 0x0899d1f0u; mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]); func_08980edc(c, ram); }
    c->r[4] = c->r[2] + 0u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[2] = c->r[2] << 2;
    c->r[3] = c->r[2] + c->r[4];
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = c->r[2] + 0x00000010u;
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000004u);
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
    c->r[4] = 0x08ab0000u;
    c->r[4] = c->r[4] + 0x00002d90u;
    c->r[5] = 0x08a50000u;
    c->r[5] = c->r[5] + 0xffffa5acu;
    { c->r[31] = 0x0899d238u; c->r[6] = mem_r32(ram, c->r[30] + 0x00000010u); func_08a1ad34(c, ram); }
    c->r[4] = 0x08ab0000u;
    c->r[4] = c->r[4] + 0x00002db0u;
    c->r[5] = 0x08a50000u;
    c->r[5] = c->r[5] + 0xffffa5bcu;
    c->r[6] = mem_r32(ram, c->r[30] + 0x00000010u);
    { c->r[31] = 0x0899d254u; c->r[7] = mem_r32(ram, c->r[30] + 0x00000014u); func_08a1ad34(c, ram); }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[5] = 0x08ab0000u;
    c->r[5] = c->r[5] + 0x00002d90u;
    c->r[6] = 0x08ab0000u;
    { c->r[31] = 0x0899d26cu; c->r[6] = c->r[6] + 0x00002db0u; func_089b7c54(c, ram); }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[5] = 0u + 0x00000018u;
    c->r[6] = 0u + 0u;
    { c->r[31] = 0x0899d280u; c->r[7] = 0u + 0u; func_0884f888(c, ram); }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = mem_r8(ram, c->r[30] + 0x00000010u);
    mem_w8(ram, c->r[3] + 0x000000b7u, c->r[2]);
    c->r[16] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = c->r[2] + 0x000002fau;
    { c->r[31] = 0x0899d2a0u; c->r[4] = c->r[2] + 0u; func_089241c8(c, ram); }
    mem_w32(ram, c->r[16] + 0x000000a4u, c->r[2]);
    c->r[16] = mem_r32(ram, c->r[30] + 0x00000008u);
    { c->r[31] = 0x0899d2b0u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000004u); func_0896a318(c, ram); }
    mem_w32(ram, c->r[16] + 0x000000a0u, c->r[2]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = 0u + 0x00000188u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[3] = c->lo;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r16(ram, c->r[2] + 0x00000120u);
    mem_w16(ram, c->r[4] + 0x000000b0u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    mem_w16(ram, c->r[2] + 0x000000aeu, 0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_0899d304; }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x0000008cu);
    c->r[2] = 0x02000000u;
    c->r[2] = c->r[3] | c->r[2];
    mem_w32(ram, c->r[4] + 0x0000008cu, c->r[2]);
L_0899d304:
    mem_w32(ram, c->r[30] + 0x00000018u, 0u);
    { c->r[31] = 0x0899d310u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000004u); func_0896dbc0(c, ram); }
    { c->r[31] = 0x0899d318u; c->r[16] = c->r[2] + 0u; func_0896dc4c(c, ram); }
    { int _c = (c->r[16] == c->r[2]); if (_c) goto L_0899d328; }
    c->r[2] = 0u + 0x00000001u;
    mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]);
L_0899d328:
    { c->r[31] = 0x0899d330u; func_0897de00(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[2] = c->r[2] + 0x00000010u;
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000000u);
    c->r[2] = c->r[2] & 0x0003u;
    { c->r[31] = 0x0899d354u; mem_w32(ram, c->r[30] + 0x0000001cu, c->r[2]); func_08985e34(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[3];
    c->r[2] = c->r[2] + 0x00000010u;
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000000u);
    c->r[2] = c->r[2] ^ 0x0005u;
    c->r[2] = (c->r[2] < 0x00000001u) ? 1u : 0u;
    mem_w32(ram, c->r[30] + 0x00000020u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = 0x08ab0000u;
    c->r[2] = c->r[2] + 0x00002af0u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000000u);
    mem_w32(ram, c->r[30] + 0x00000024u, c->r[2]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000024u);
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000018u);
    { c->r[31] = 0x0899d3a0u; c->r[6] = mem_r32(ram, c->r[30] + 0x00000020u); func_088f4fdc(c, ram); }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000024u);
    { c->r[31] = 0x0899d3acu; c->r[5] = mem_r32(ram, c->r[30] + 0x0000001cu); func_088f49b8(c, ram); }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = 0x08ab0000u;
    c->r[2] = c->r[2] + 0x00002af0u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000000u);
    c->r[3] = c->r[2] << 3;
    c->r[2] = 0x08aa0000u;
    c->r[2] = c->r[2] + 0x000049e0u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[3] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[2] = 0u + 0xffffffffu;
    mem_w8(ram, c->r[3] + 0x000000a8u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = 0x08ab0000u;
    c->r[2] = c->r[2] + 0x00002af0u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000000u);
    c->r[3] = c->r[2] << 3;
    c->r[2] = 0x08aa0000u;
    c->r[2] = c->r[2] + 0x000049e0u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[4] = mem_r32(ram, c->r[2] + 0x00000054u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = 0x08ab0000u;
    c->r[2] = c->r[2] + 0x00002af0u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000000u);
    c->r[3] = c->r[2] << 3;
    c->r[2] = 0x08aa0000u;
    c->r[2] = c->r[2] + 0x000049e0u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000054u);
    c->r[3] = mem_r8(ram, c->r[2] + 0x00000003u);
    c->r[2] = 0u + 0xffffff8fu;
    c->r[2] = c->r[3] & c->r[2];
    mem_w8(ram, c->r[4] + 0x00000003u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = 0x08ab0000u;
    c->r[2] = c->r[2] + 0x00002af0u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000000u);
    c->r[3] = c->r[2] << 3;
    c->r[2] = 0x08aa0000u;
    c->r[2] = c->r[2] + 0x000049e0u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[4] = mem_r32(ram, c->r[2] + 0x00000054u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = 0x08ab0000u;
    c->r[2] = c->r[2] + 0x00002af0u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000000u);
    c->r[3] = c->r[2] << 3;
    c->r[2] = 0x08aa0000u;
    c->r[2] = c->r[2] + 0x000049e0u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000054u);
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000003u);
    c->r[2] = c->r[2] | 0x0050u;
    mem_w8(ram, c->r[4] + 0x00000003u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = 0x08ab0000u;
    c->r[2] = c->r[2] + 0x00002af0u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000000u);
    c->r[3] = c->r[2] << 3;
    c->r[2] = 0x08aa0000u;
    c->r[2] = c->r[2] + 0x000049e0u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[4] = mem_r32(ram, c->r[2] + 0x00000060u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = 0u + 0x00000188u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[3] = c->lo;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000128u);
    mem_w8(ram, c->r[4] + 0x00000017u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = 0x08ab0000u;
    c->r[2] = c->r[2] + 0x00002ac0u;
    c->r[4] = c->r[3] + c->r[2];
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = 0x08ab0000u;
    c->r[2] = c->r[2] + 0x00002ac0u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000000u);
    c->r[2] = c->r[2] + 0xffffffffu;
    { mem_w8(ram, c->r[4] + 0x00000000u, c->r[2]); goto L_0899d550; }
L_0899d524:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = 0x08ab0000u;
    c->r[2] = c->r[2] + 0x00002ac0u;
    c->r[4] = c->r[3] + c->r[2];
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = 0x08ab0000u;
    c->r[2] = c->r[2] + 0x00002ac0u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000000u);
    c->r[2] = c->r[2] + 0xffffffffu;
    mem_w8(ram, c->r[4] + 0x00000000u, c->r[2]);
L_0899d550:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000004u, c->r[2]); goto L_0899cf50; }
L_0899d560:
    { c->r[31] = 0x0899d568u; func_089993bc(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000038u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000034u);
    c->r[16] = mem_r32(ram, c->r[29] + 0x00000030u);
    { c->r[29] = c->r[29] + 0x00000040u; return; }
    return; /* fell out of func_0899cf1c */
}

/* func_089a1054  0x089a1054..0x089a10e8  148 bytes, source=fde */
void func_089a1054(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089a1054u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    c->r[2] = 0u + 0xffffffffu;
    { c->r[31] = 0x089a1070u; mem_w32(ram, c->r[30] + 0x00000000u, c->r[2]); func_089794c4(c, ram); }
    c->r[2] = mem_r8(ram, c->r[2] + 0x0000000eu);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[2]);
    c->r[2] = 0u + 0x00000001u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_089a10b4; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = ((s32)c->r[3] < (s32)0x00000001u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_089a10d0; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[3] + 0xfffffffcu;
    c->r[2] = (c->r[2] < 0x00000002u) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_089a10d0; }
    { goto L_089a10c4; }
L_089a10b4:
    { c->r[31] = 0x089a10bcu; func_08979620(c, ram); }
    { mem_w32(ram, c->r[30] + 0x00000000u, c->r[2]); goto L_089a10d0; }
L_089a10c4:
    { c->r[31] = 0x089a10ccu; func_0897965c(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[2]);
L_089a10d0:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_089a1054 */
}

/* func_089a5578  0x089a5578..0x089a5700  392 bytes, source=fde */
void func_089a5578(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089a5578u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000018u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[30]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[16]);
    c->r[30] = c->r[29] + 0u;
    { c->r[31] = 0x089a5594u; c->r[4] = 0u + 0x00000020u; func_088f4f4c(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[2]);
    { c->r[31] = 0x089a55a0u; c->r[4] = 0u + 0x00000023u; func_088f4f4c(c, ram); }
    { c->r[31] = 0x089a55a8u; mem_w32(ram, c->r[30] + 0x00000004u, c->r[2]); func_0896a3e4(c, ram); }
    { c->r[31] = 0x089a55b0u; c->r[4] = c->r[2] + 0u; func_0896dbc0(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = 0u + 0x00000001u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_089a55d8; }
    { c->r[31] = 0x089a55c8u; c->r[4] = 0u + 0x00000023u; func_088f4f4c(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[2]);
    { c->r[31] = 0x089a55d4u; c->r[4] = 0u + 0x00000020u; func_088f4f4c(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[2]);
L_089a55d8:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x000000b0u);
    { int _c = ((s32)c->r[2] > 0); if (_c) goto L_089a55f0; }
    { c->r[31] = 0x089a55f0u; c->r[4] = 0u + 0x00002078u; func_089346e8(c, ram); }
L_089a55f0:
    { c->r[31] = 0x089a55f8u; c->r[16] = mem_r32(ram, c->r[30] + 0x00000000u); func_0896dc4c(c, ram); }
    c->r[3] = c->r[2] << 1;
    c->r[2] = 0x08ab0000u;
    c->r[2] = c->r[2] + 0x00002de4u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[3] = (u32)(s32)(s16)mem_r16(ram, c->r[16] + 0x000000b0u);
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x00000000u);
    c->r[2] = ((s32)c->r[3] < (s32)c->r[2]) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_089a5658; }
    c->r[1] = 0x08ab0000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0x00002e04u);
    c->f[0] = u2f(0u);
    alx_c_cond_s(c, 14, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_089a5640; }
    { goto L_089a5658; }
L_089a5640:
    { c->r[31] = 0x089a5648u; c->r[4] = 0u + 0x00002076u; func_089346e8(c, ram); }
    c->r[1] = 0x08a50000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffffa9a4u);
    c->r[1] = 0x08ab0000u;
    mem_wf32(ram, c->r[1] + 0x00002e04u, c->f[0]);
L_089a5658:
    { c->r[31] = 0x089a5660u; func_0896dc4c(c, ram); }
    c->r[3] = c->r[2] << 1;
    c->r[2] = 0x08ab0000u;
    c->r[2] = c->r[2] + 0x00002de4u;
    c->r[3] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r16(ram, c->r[2] + 0x000000b0u);
    mem_w16(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[1] = 0x08ab0000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0x00002e04u);
    c->f[0] = u2f(0u);
    alx_c_cond_s(c, 12, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_089a56a0; }
    { goto L_089a56e8; }
L_089a56a0:
    c->r[1] = 0x08ab0000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0x00002e04u);
    c->r[1] = 0x08a80000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00002e40u);
    c->f[0] = c->f[1] - c->f[0];
    c->r[1] = 0x08ab0000u;
    mem_wf32(ram, c->r[1] + 0x00002e04u, c->f[0]);
    c->r[1] = 0x08ab0000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0x00002e04u);
    c->f[0] = u2f(0u);
    alx_c_cond_s(c, 12, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_089a56e0; }
    { goto L_089a56e8; }
L_089a56e0:
    c->r[1] = 0x08ab0000u;
    mem_w32(ram, c->r[1] + 0x00002e04u, 0u);
L_089a56e8:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000018u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[16] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_089a5578 */
}

/* func_089aa72c  0x089aa72c..0x089abf2c  6144 bytes, source=fde */
void func_089aa72c(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089aa72cu);
L_089aa72c:
    c->r[29] = c->r[29] + 0xffffff20u;
    mem_w32(ram, c->r[29] + 0x000000dcu, c->r[31]);
    mem_w32(ram, c->r[29] + 0x000000d8u, c->r[30]);
    mem_w32(ram, c->r[29] + 0x000000d4u, c->r[17]);
    mem_w32(ram, c->r[29] + 0x000000d0u, c->r[16]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[2] = c->r[5] + 0u;
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[6]);
    mem_w8(ram, c->r[30] + 0x00000004u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x000000e0u;
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
    c->r[2] = mem_r8(ram, c->r[30] + 0x00000004u);
    mem_w32(ram, c->r[30] + 0x000000c8u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x000000c8u);
    c->r[2] = (c->r[3] < 0x0000001cu) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_089abf10; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000c8u);
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08a50000u;
    c->r[2] = c->r[2] + 0xffffaf20u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    { u32 _t = c->r[2]; switch (_t) { case 0x089aa72cu: goto L_089aa72c; case 0x089aa798u: goto L_089aa798; case 0x089aac1cu: goto L_089aac1c; case 0x089abca8u: goto L_089abca8; case 0x089abcd0u: goto L_089abcd0; case 0x089abe80u: goto L_089abe80; case 0x089abf10u: goto L_089abf10; default: recomp_trap_unknown_indirect(c, ram, 0x089aa790u, _t); return; } }
L_089aa798:
    c->r[16] = mem_r32(ram, c->r[30] + 0x0000000cu);
    { c->r[31] = 0x089aa7a4u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u); func_089b7394(c, ram); }
    mem_w32(ram, c->r[16] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000020u;
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]);
    c->r[16] = mem_r32(ram, c->r[30] + 0x0000000cu);
    { c->r[31] = 0x089aa7c4u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u); func_089b7394(c, ram); }
    mem_w32(ram, c->r[16] + 0x00000004u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000004u);
    c->r[2] = c->r[2] + 0x00000020u;
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0u + 0u;
    { c->r[31] = 0x089aa7e4u; c->r[6] = 0u + 0x00000100u; func_08a19ec4(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000004u);
    c->r[2] = c->r[2] + 0x00000020u;
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000010u);
    mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = mem_r16(ram, c->r[2] + 0x00000000u);
    mem_w16(ram, c->r[3] + 0x000000b2u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000000u);
    mem_w8(ram, c->r[3] + 0x0000001cu, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = c->r[2] + 0x00000004u;
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000000u);
    mem_w8(ram, c->r[3] + 0x0000001du, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    mem_w8(ram, c->r[2] + 0x00000021u, 0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    mem_w8(ram, c->r[2] + 0x00000022u, 0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    mem_w32(ram, c->r[2] + 0x00000014u, 0u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = 0u + 0x0000012cu;
    mem_w16(ram, c->r[3] + 0x000000b0u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[16] = c->r[2] + 0x00000070u;
    c->r[2] = c->r[30] + 0x00000020u;
    c->r[1] = 0x08a50000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffffaf14u);
    c->r[1] = 0x08a50000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0xffffaf14u);
    c->r[1] = 0x08a50000u;
    c->f[2] = mem_rf32(ram, c->r[1] + 0xffffaf14u);
    c->r[4] = c->r[2] + 0u;
    c->f[12] = c->f[0];
    c->f[13] = c->f[1];
    c->f[14] = c->f[2];
    c->f[15] = u2f(0u);
    { c->r[31] = 0x089aa898u; func_0880d140(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    mem_w32(ram, c->r[16] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000024u);
    mem_w32(ram, c->r[16] + 0x00000004u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000028u);
    mem_w32(ram, c->r[16] + 0x00000008u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000002cu);
    mem_w32(ram, c->r[16] + 0x0000000cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[1] = 0x08a50000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffffaf14u);
    mem_wf32(ram, c->r[2] + 0x000000ccu, c->f[0]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x089aa8d4u; c->r[5] = 0u + 0x00000003u; func_088679a0(c, ram); }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x089aa8e0u; c->r[5] = 0u + 0x00000001u; func_088679d4(c, ram); }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = 0x08200000u;
    { c->r[31] = 0x089aa8f0u; c->r[5] = c->r[5] | 0x0020u; func_0884d1b0(c, ram); }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = c->r[2] + 0x00000008u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x0000008cu);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[2] = c->r[3] | c->r[2];
    c->r[2] = c->r[2] | 0x1000u;
    mem_w32(ram, c->r[4] + 0x0000008cu, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = 0u + 0x00000002u;
    mem_w8(ram, c->r[3] + 0x000000c9u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = 0u + 0x00000005u;
    mem_w8(ram, c->r[3] + 0x00000087u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    { c->r[31] = 0x089aa938u; mem_w8(ram, c->r[2] + 0x00000026u, 0u); func_08980edc(c, ram); }
    c->r[4] = c->r[2] + 0u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x0000001cu);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[4];
    c->r[2] = c->r[2] + 0x00000010u;
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000000u);
    { c->r[31] = 0x089aa968u; mem_w32(ram, c->r[30] + 0x00000030u, c->r[2]); func_08980edc(c, ram); }
    c->r[4] = c->r[2] + 0u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x0000001cu);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[4];
    c->r[2] = c->r[2] + 0x00000010u;
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000004u);
    c->r[2] = c->r[2] & 0x0003u;
    mem_w32(ram, c->r[30] + 0x00000034u, c->r[2]);
    c->r[4] = 0x08ab0000u;
    c->r[4] = c->r[4] + 0x00002ff4u;
    c->r[5] = 0x08a50000u;
    c->r[5] = c->r[5] + 0xffffaed8u;
    { c->r[31] = 0x089aa9b0u; c->r[6] = mem_r32(ram, c->r[30] + 0x00000030u); func_08a1ad34(c, ram); }
    c->r[4] = 0x08ab0000u;
    c->r[4] = c->r[4] + 0x00003014u;
    c->r[5] = 0x08a50000u;
    c->r[5] = c->r[5] + 0xffffaee8u;
    c->r[6] = mem_r32(ram, c->r[30] + 0x00000030u);
    { c->r[31] = 0x089aa9ccu; c->r[7] = mem_r32(ram, c->r[30] + 0x00000034u); func_08a1ad34(c, ram); }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = 0x08ab0000u;
    c->r[5] = c->r[5] + 0x00002ff4u;
    c->r[6] = 0x08ab0000u;
    c->r[6] = c->r[6] + 0x00003014u;
    c->r[7] = 0u + 0u;
    { c->r[31] = 0x089aa9ecu; c->r[8] = 0u + 0u; func_089b75f8(c, ram); }
    c->r[4] = 0x08a50000u;
    { c->r[31] = 0x089aa9f8u; c->r[4] = c->r[4] + 0xffffaef8u; func_089c6f64(c, ram); }
    c->r[2] = c->r[2] + 0x00000004u;
    mem_w32(ram, c->r[30] + 0x00000038u, c->r[2]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000030u);
    c->r[2] = 0u + 0x00000188u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[3] = c->lo;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000038u);
    c->r[2] = c->r[2] + c->r[3];
    mem_w32(ram, c->r[4] + 0x0000000cu, c->r[2]);
    c->r[4] = 0x08a50000u;
    { c->r[31] = 0x089aaa2cu; c->r[4] = c->r[4] + 0xffffaf08u; func_089c6f64(c, ram); }
    mem_w32(ram, c->r[30] + 0x0000003cu, c->r[2]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000030u);
    c->r[2] = 0u + 0x00000188u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[3] = c->lo;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000038u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x0000013au);
    c->r[3] = c->r[2] << 3;
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000003cu);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = c->r[2] + 0x00000004u;
    mem_w32(ram, c->r[4] + 0x00000008u, c->r[2]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000030u);
    c->r[2] = 0u + 0x00000188u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[3] = c->lo;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000038u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r8(ram, c->r[2] + 0x0000013au);
    { c->r[31] = 0x089aaa8cu; mem_w8(ram, c->r[4] + 0x00000030u, c->r[2]); func_08980edc(c, ram); }
    c->r[4] = c->r[2] + 0u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x0000001cu);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[4];
    c->r[2] = c->r[2] + 0x00000010u;
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000008u);
    c->r[2] = c->r[2] & 0x0003u;
    mem_w32(ram, c->r[30] + 0x00000040u, c->r[2]);
    c->r[16] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[30] + 0x00000030u);
    { c->r[31] = 0x089aaaccu; c->r[4] = c->r[2] + 0u; func_088bf688(c, ram); }
    mem_w8(ram, c->r[16] + 0x00000023u, c->r[2]);
    c->r[16] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[30] + 0x00000030u);
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[30] + 0x00000040u);
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x089aaae8u; c->r[5] = c->r[3] + 0u; func_088bf6ec(c, ram); }
    { c->r[31] = 0x089aaaf0u; mem_w8(ram, c->r[16] + 0x00000024u, c->r[2]); func_08980edc(c, ram); }
    c->r[4] = c->r[2] + 0u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x0000001cu);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[4];
    c->r[2] = c->r[2] + 0x00000010u;
    { c->r[31] = 0x089aab1cu; c->r[16] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000004u); func_08980edc(c, ram); }
    c->r[4] = c->r[2] + 0u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x0000001cu);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[4];
    c->r[2] = c->r[2] + 0x00000010u;
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000008u);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000030u);
    c->r[6] = c->r[16] + 0u;
    { c->r[31] = 0x089aab58u; c->r[7] = c->r[2] + 0u; func_089ac1ac(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[4] = c->r[2] + 0x00000010u;
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
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[4] = c->r[2] + 0x00000020u;
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
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[4] = c->r[2] + 0x00000030u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = c->r[2] + 0x00000030u;
    c->r[2] = mem_r32(ram, c->r[3] + 0x00000000u);
    mem_w32(ram, c->r[4] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[3] + 0x00000004u);
    mem_w32(ram, c->r[4] + 0x00000004u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[3] + 0x00000008u);
    mem_w32(ram, c->r[4] + 0x00000008u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[3] + 0x0000000cu);
    mem_w32(ram, c->r[4] + 0x0000000cu, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0u + 0xffffffffu;
    mem_w8(ram, c->r[3] + 0x0000002fu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    mem_w8(ram, c->r[2] + 0x00000035u, 0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    mem_w8(ram, c->r[2] + 0x00000033u, 0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    mem_w8(ram, c->r[2] + 0x00000034u, 0u);
    { c->r[31] = 0x089aac14u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u); func_0893cc74(c, ram); }
    { goto L_089abf10; }
L_089aac1c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000020u;
    mem_w32(ram, c->r[30] + 0x00000040u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000004u);
    c->r[2] = c->r[2] + 0x00000020u;
    { c->r[31] = 0x089aac40u; mem_w32(ram, c->r[30] + 0x0000003cu, c->r[2]); func_0896a3c0(c, ram); }
    c->r[4] = c->r[2] + 0u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x0000001cu);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 3;
    c->r[2] = c->r[2] + c->r[3];
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[4];
    c->r[2] = c->r[2] + 0x00000020u;
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000004u);
    c->r[2] = 0u + 0x00000001u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_089aacb8; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    mem_w8(ram, c->r[2] + 0x00000032u, 0u);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x0000008cu);
    c->r[2] = 0x40100000u;
    c->r[2] = c->r[3] | c->r[2];
    mem_w32(ram, c->r[4] + 0x0000008cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    mem_w16(ram, c->r[2] + 0x000000b0u, 0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x000000b2u);
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x089aacb0u; c->r[5] = 0u + 0x00000001u; func_08998918(c, ram); }
    { goto L_089abf10; }
L_089aacb8:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x0000001cu);
    { c->r[31] = 0x089aacc8u; c->r[4] = c->r[2] + 0u; func_0896a458(c, ram); }
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000204u);
    c->r[2] = c->r[2] + 0x00000008u;
    mem_w32(ram, c->r[30] + 0x00000038u, c->r[2]);
    mem_w32(ram, c->r[30] + 0x00000034u, 0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x0000001cu);
    { c->r[31] = 0x089aace8u; c->r[4] = c->r[2] + 0u; func_0896a458(c, ram); }
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x0000020bu);
    c->r[2] = 0u + 0x00000001u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_089ab7d0; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x0000001cu);
    { c->r[31] = 0x089aad08u; c->r[4] = c->r[2] + 0u; func_0896a458(c, ram); }
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000204u);
    c->r[3] = mem_r8(ram, c->r[2] + 0x00000002u);
    c->r[2] = 0u + 0x0000000cu;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_089ab7d0; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000038u);
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000000u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_089ab7d0; }
    c->r[2] = 0u + 0x00000001u;
    mem_w32(ram, c->r[30] + 0x00000034u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000026u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_089aad50; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0u + 0x00000001u;
    mem_w8(ram, c->r[3] + 0x00000026u, c->r[2]);
L_089aad50:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    mem_w8(ram, c->r[2] + 0x00000027u, 0u);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x0000008cu);
    c->r[2] = 0xbfef0000u;
    c->r[2] = c->r[2] | 0xffffu;
    c->r[2] = c->r[3] & c->r[2];
    mem_w32(ram, c->r[4] + 0x0000008cu, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0u + 0x00000001u;
    mem_w8(ram, c->r[3] + 0x00000032u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    mem_w8(ram, c->r[2] + 0x00000035u, 0u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000040u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000038u);
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000000u);
    mem_w8(ram, c->r[3] + 0x00000050u, c->r[2]);
    c->r[2] = c->r[30] + 0x00000020u;
    { c->r[31] = 0x089aada4u; c->r[4] = c->r[2] + 0u; func_08808240(c, ram); }
    c->r[2] = c->r[30] + 0x00000050u;
    { c->r[31] = 0x089aadb0u; c->r[4] = c->r[2] + 0u; func_08808240(c, ram); }
    c->r[2] = c->r[30] + 0x00000060u;
    { c->r[31] = 0x089aadbcu; c->r[4] = c->r[2] + 0u; func_08808240(c, ram); }
    c->r[2] = c->r[30] + 0x00000070u;
    { c->r[31] = 0x089aadc8u; c->r[4] = c->r[2] + 0u; func_08808240(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000038u);
    c->r[3] = c->r[2] + 0x00000010u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000020u;
    c->r[4] = c->r[3] + 0u;
    { c->r[31] = 0x089aade4u; c->r[5] = c->r[2] + 0u; func_089ac3d8(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000038u);
    c->r[3] = c->r[2] + 0x00000010u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000040u;
    c->r[4] = c->r[3] + 0u;
    { c->r[31] = 0x089aae00u; c->r[5] = c->r[2] + 0u; func_089ac434(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000038u);
    c->r[3] = c->r[2] + 0x00000010u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000030u;
    c->r[4] = c->r[3] + 0u;
    { c->r[31] = 0x089aae1cu; c->r[5] = c->r[2] + 0u; func_089ac4cc(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000038u);
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000032u);
    c->r[2] = c->r[2] & 0x0040u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_089aae4c; }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x0000008cu);
    c->r[2] = 0x40000000u;
    c->r[2] = c->r[3] | c->r[2];
    { mem_w32(ram, c->r[4] + 0x0000008cu, c->r[2]); goto L_089aae68; }
L_089aae4c:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x0000008cu);
    c->r[2] = 0xbfff0000u;
    c->r[2] = c->r[2] | 0xffffu;
    c->r[2] = c->r[3] & c->r[2];
    mem_w32(ram, c->r[4] + 0x0000008cu, c->r[2]);
L_089aae68:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000038u);
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000032u);
    c->r[2] = c->r[2] & 0x0002u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_089aafe0; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000019u);
    c->r[2] = c->r[2] & 0x0002u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_089aaf94; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000033u);
    { int _c = ((s32)c->r[2] > 0); if (_c) goto L_089aaf94; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x00000010u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000ac8u;
    { c->r[31] = 0x089aaebcu; c->r[5] = c->r[2] + 0u; func_089cb820(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_089aaf4c; }
    c->r[2] = 0u + 0x00000002u;
    mem_w8(ram, c->r[30] + 0x00000088u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000030u;
    { c->r[31] = 0x089aaee4u; c->r[4] = c->r[2] + 0u; func_08820c6c(c, ram); }
    c->f[1] = c->f[0];
    c->r[1] = 0x08a80000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0x00002e40u);
    c->f[0] = c->f[1] * c->f[0];
    mem_wf32(ram, c->r[30] + 0x00000080u, c->f[0]);
    c->r[1] = 0x08a50000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffffaf18u);
    mem_wf32(ram, c->r[30] + 0x00000084u, c->f[0]);
    c->r[2] = c->r[30] + 0x00000080u;
    c->r[4] = 0u + 0x0000004bu;
    c->r[5] = 0u + 0u;
    c->r[6] = 0u + 0u;
    c->r[7] = 0u + 0u;
    c->r[8] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x089aaf24u; c->r[9] = c->r[2] + 0u; func_089c6bec(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[16] = c->r[2] + 0x00000010u;
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000ac8u;
    { c->r[31] = 0x089aaf40u; c->r[5] = mem_r32(ram, c->r[30] + 0x00000018u); func_089cb780(c, ram); }
    mem_w32(ram, c->r[30] + 0x000000a0u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000a0u);
    mem_w32(ram, c->r[16] + 0x00000000u, c->r[2]);
L_089aaf4c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x000000b2u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000038u);
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000033u);
    c->r[4] = c->r[3] + 0u;
    { c->r[31] = 0x089aaf68u; c->r[5] = c->r[2] + 0u; func_0897093c(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000038u);
    { c->r[31] = 0x089aaf74u; c->r[16] = mem_r8(ram, c->r[2] + 0x00000033u); func_0896a3e4(c, ram); }
    { int _c = (c->r[16] != c->r[2]); if (_c) goto L_089aaf88; }
    c->r[4] = 0x08a90000u;
    { c->r[31] = 0x089aaf88u; c->r[4] = c->r[4] + 0xffffb9c0u; func_089ac390(c, ram); }
L_089aaf88:
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0u + 0x00000006u;
    mem_w8(ram, c->r[3] + 0x00000033u, c->r[2]);
L_089aaf94:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000033u);
    { int _c = ((s32)c->r[2] <= 0); if (_c) goto L_089aafb8; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000033u);
    c->r[2] = c->r[2] + 0xffffffffu;
    mem_w8(ram, c->r[3] + 0x00000033u, c->r[2]);
L_089aafb8:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    mem_w16(ram, c->r[2] + 0x000000b0u, 0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    mem_w8(ram, c->r[2] + 0x00000032u, 0u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000008cu);
    c->r[2] = c->r[2] | 0x8000u;
    { mem_w32(ram, c->r[3] + 0x0000008cu, c->r[2]); goto L_089ab0b0; }
L_089aafe0:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000038u);
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000032u);
    c->r[2] = c->r[2] & 0x0004u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_089ab054; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000019u);
    c->r[2] = c->r[2] & 0x0004u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_089ab024; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000033u);
    { int _c = ((s32)c->r[2] > 0); if (_c) goto L_089ab024; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0u + 0x00000006u;
    mem_w8(ram, c->r[3] + 0x00000033u, c->r[2]);
L_089ab024:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000033u);
    { int _c = ((s32)c->r[2] <= 0); if (_c) goto L_089ab048; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000033u);
    c->r[2] = c->r[2] + 0xffffffffu;
    mem_w8(ram, c->r[3] + 0x00000033u, c->r[2]);
L_089ab048:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    { mem_w16(ram, c->r[2] + 0x000000b0u, 0u); goto L_089ab0b0; }
L_089ab054:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000033u);
    { int _c = ((s32)c->r[2] <= 0); if (_c) goto L_089ab078; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000033u);
    c->r[2] = c->r[2] + 0xffffffffu;
    mem_w8(ram, c->r[3] + 0x00000033u, c->r[2]);
L_089ab078:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000038u);
    c->r[2] = mem_r16(ram, c->r[2] + 0x0000002cu);
    mem_w16(ram, c->r[3] + 0x000000b0u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0u + 0x00000001u;
    mem_w8(ram, c->r[3] + 0x00000032u, c->r[2]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x0000008cu);
    c->r[2] = 0xffff0000u;
    c->r[2] = c->r[2] | 0x7fffu;
    c->r[2] = c->r[3] & c->r[2];
    mem_w32(ram, c->r[4] + 0x0000008cu, c->r[2]);
L_089ab0b0:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x000000b0u);
    { int _c = ((s32)c->r[2] <= 0); if (_c) goto L_089ab3d0; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x0000001cu);
    { c->r[31] = 0x089ab0d0u; c->r[4] = c->r[2] + 0u; func_0896a458(c, ram); }
    c->r[2] = mem_r8(ram, c->r[2] + 0x0000020cu);
    mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000004u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_089ab0f0; }
    c->r[2] = 0u + 0x00000003u;
    mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]);
L_089ab0f0:
    mem_w32(ram, c->r[30] + 0x00000014u, 0u);
L_089ab0f4:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[3] = c->r[2] + 0x00000001u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = ((s32)c->r[2] < (s32)c->r[3]) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_089ab114; }
    { goto L_089ab3d0; }
L_089ab114:
    mem_w32(ram, c->r[30] + 0x00000010u, 0u);
L_089ab118:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000002u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_089ab130; }
    { goto L_089ab3c0; }
L_089ab130:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000038u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] + c->r[4];
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = c->r[2] + 0x00000040u;
    c->r[3] = mem_r8(ram, c->r[2] + 0x00000000u);
    c->r[2] = 0u + 0x000000ffu;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_089ab16c; }
    { goto L_089ab3b0; }
L_089ab16c:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000038u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] + c->r[4];
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = c->r[2] + 0x00000040u;
    c->r[3] = mem_r8(ram, c->r[2] + 0x00000000u);
    c->r[2] = 0x08a80000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00002ed8u);
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x000000b2u);
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_089ab278; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000008u);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000001u);
    mem_w16(ram, c->r[30] + 0x0000008eu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000025u);
    mem_w32(ram, c->r[30] + 0x000000b4u, c->r[2]);
    c->r[2] = 0u + 0x00000009u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x000000b4u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_089ab1ec; }
    c->r[2] = 0u + 0x0000000au;
    c->r[3] = mem_r32(ram, c->r[30] + 0x000000b4u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_089ab214; }
    { goto L_089ab238; }
L_089ab1ec:
    c->r[2] = 0x08aa0000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0xffff9a98u);
    c->r[2] = c->r[2] + 0x00002890u;
    c->f[0] = mem_rf32(ram, c->r[2] + 0x000000bcu);
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    c->r[3] = mem_r16(ram, c->r[30] + 0x0000008eu);
    c->r[2] = f2u(c->f[0]);
    c->r[2] = c->r[3] + c->r[2];
    { mem_w16(ram, c->r[30] + 0x0000008eu, c->r[2]); goto L_089ab238; }
L_089ab214:
    c->r[2] = 0x08aa0000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0xffff9a98u);
    c->r[2] = c->r[2] + 0x0000297cu;
    c->f[0] = mem_rf32(ram, c->r[2] + 0x000000bcu);
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    c->r[3] = mem_r16(ram, c->r[30] + 0x0000008eu);
    c->r[2] = f2u(c->f[0]);
    c->r[2] = c->r[3] + c->r[2];
    mem_w16(ram, c->r[30] + 0x0000008eu, c->r[2]);
L_089ab238:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    mem_w32(ram, c->r[30] + 0x00000090u, c->r[2]);
    c->r[2] = 0u + 0xffffffffu;
    mem_w16(ram, c->r[30] + 0x0000008cu, c->r[2]);
    c->r[2] = 0u + 0x00000001u;
    mem_w32(ram, c->r[30] + 0x00000088u, c->r[2]);
    mem_w32(ram, c->r[30] + 0x00000084u, 0u);
    c->r[2] = c->r[30] + 0x00000080u;
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = 0x08a80000u;
    c->r[5] = mem_r32(ram, c->r[5] + 0x00002ed8u);
    c->r[6] = 0u + 0x0000001bu;
    { c->r[31] = 0x089ab270u; c->r[7] = c->r[2] + 0u; func_089c34ac(c, ram); }
    { goto L_089ab3b0; }
L_089ab278:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000038u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] + c->r[4];
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = c->r[2] + 0x00000040u;
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000000u);
    c->r[2] = (c->r[2] < 0x00000004u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_089ab3b0; }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000038u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] + c->r[4];
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = c->r[2] + 0x00000040u;
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000000u);
    { c->r[31] = 0x089ab2dcu; c->r[4] = c->r[2] + 0u; func_088f4f4c(c, ram); }
    mem_w32(ram, c->r[30] + 0x000000a4u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000a4u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_089ab3b0; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000008u);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000001u);
    mem_w16(ram, c->r[30] + 0x0000008eu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000025u);
    mem_w32(ram, c->r[30] + 0x000000b8u, c->r[2]);
    c->r[2] = 0u + 0x00000009u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x000000b8u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_089ab330; }
    c->r[2] = 0u + 0x0000000au;
    c->r[3] = mem_r32(ram, c->r[30] + 0x000000b8u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_089ab358; }
    { goto L_089ab37c; }
L_089ab330:
    c->r[2] = 0x08aa0000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0xffff9a98u);
    c->r[2] = c->r[2] + 0x00002890u;
    c->f[0] = mem_rf32(ram, c->r[2] + 0x000000bcu);
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    c->r[3] = mem_r16(ram, c->r[30] + 0x0000008eu);
    c->r[2] = f2u(c->f[0]);
    c->r[2] = c->r[3] + c->r[2];
    { mem_w16(ram, c->r[30] + 0x0000008eu, c->r[2]); goto L_089ab37c; }
L_089ab358:
    c->r[2] = 0x08aa0000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0xffff9a98u);
    c->r[2] = c->r[2] + 0x0000297cu;
    c->f[0] = mem_rf32(ram, c->r[2] + 0x000000bcu);
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    c->r[3] = mem_r16(ram, c->r[30] + 0x0000008eu);
    c->r[2] = f2u(c->f[0]);
    c->r[2] = c->r[3] + c->r[2];
    mem_w16(ram, c->r[30] + 0x0000008eu, c->r[2]);
L_089ab37c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    mem_w32(ram, c->r[30] + 0x00000090u, c->r[2]);
    c->r[2] = 0u + 0xffffffffu;
    mem_w16(ram, c->r[30] + 0x0000008cu, c->r[2]);
    c->r[2] = 0u + 0x00000001u;
    mem_w32(ram, c->r[30] + 0x00000088u, c->r[2]);
    mem_w32(ram, c->r[30] + 0x00000084u, 0u);
    c->r[2] = c->r[30] + 0x00000080u;
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = mem_r32(ram, c->r[30] + 0x000000a4u);
    c->r[6] = 0u + 0x0000001bu;
    { c->r[31] = 0x089ab3b0u; c->r[7] = c->r[2] + 0u; func_089c34ac(c, ram); }
L_089ab3b0:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]); goto L_089ab118; }
L_089ab3c0:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]); goto L_089ab0f4; }
L_089ab3d0:
    c->r[17] = mem_r32(ram, c->r[30] + 0x0000000cu);
    { c->r[31] = 0x089ab3dcu; c->r[16] = mem_r32(ram, c->r[30] + 0x00000038u); func_0896a3e4(c, ram); }
    c->r[2] = c->r[2] + c->r[16];
    c->r[2] = c->r[2] + 0x00000030u;
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000004u);
    mem_w8(ram, c->r[17] + 0x0000001au, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    mem_w8(ram, c->r[2] + 0x00000031u, 0u);
    mem_w32(ram, c->r[30] + 0x000000a4u, 0u);
L_089ab3f8:
    { c->r[31] = 0x089ab400u; func_0896a3c0(c, ram); }
    c->r[3] = mem_r32(ram, c->r[30] + 0x000000a4u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[2] = ((s32)c->r[3] < (s32)c->r[2]) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_089ab41c; }
    { goto L_089ab4a0; }
L_089ab41c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    mem_w32(ram, c->r[30] + 0x000000bcu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000031u);
    mem_w32(ram, c->r[30] + 0x000000c0u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000038u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000a4u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = c->r[2] + 0x00000030u;
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000004u);
    c->r[2] = c->r[2] & 0x0020u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_089ab46c; }
    c->r[3] = 0u + 0x00000001u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000a4u);
    c->r[2] = c->r[3] << (c->r[2] & 31u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x000000c0u);
    c->r[2] = c->r[3] | c->r[2];
    { mem_w8(ram, c->r[30] + 0x000000c4u, c->r[2]); goto L_089ab484; }
L_089ab46c:
    c->r[3] = 0u + 0u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000a4u);
    c->r[2] = c->r[3] << (c->r[2] & 31u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x000000c0u);
    c->r[2] = c->r[3] | c->r[2];
    mem_w8(ram, c->r[30] + 0x000000c4u, c->r[2]);
L_089ab484:
    c->r[3] = mem_r8(ram, c->r[30] + 0x000000c4u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000bcu);
    mem_w8(ram, c->r[2] + 0x00000031u, c->r[3]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000a4u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x000000a4u, c->r[2]); goto L_089ab3f8; }
L_089ab4a0:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000019u);
    c->r[2] = c->r[2] & 0x0002u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_089ab4d0; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000038u);
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000032u);
    c->r[2] = c->r[2] & 0x0002u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_089ab4d0; }
    { goto L_089ab4f8; }
L_089ab4d0:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000019u);
    c->r[2] = c->r[2] & 0x0004u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_089ab780; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000038u);
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000032u);
    c->r[2] = c->r[2] & 0x0004u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_089ab780; }
L_089ab4f8:
    { c->r[31] = 0x089ab500u; func_089794c4(c, ram); }
    c->r[3] = mem_r8(ram, c->r[2] + 0x00000004u);
    c->r[2] = 0u + 0x00000002u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_089ab774; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x0000001cu);
    { c->r[31] = 0x089ab520u; c->r[4] = c->r[2] + 0u; func_0899ce8c(c, ram); }
    { c->r[31] = 0x089ab528u; mem_w32(ram, c->r[30] + 0x000000a4u, c->r[2]); func_08980edc(c, ram); }
    c->r[4] = c->r[2] + 0u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x0000001cu);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[2] = c->r[2] << 2;
    c->r[3] = c->r[2] + c->r[4];
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000a4u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = c->r[2] + 0x00000010u;
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000000u);
    { c->r[31] = 0x089ab560u; mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]); func_08980edc(c, ram); }
    c->r[4] = c->r[2] + 0u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x0000001cu);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[2] = c->r[2] << 2;
    c->r[3] = c->r[2] + c->r[4];
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000a4u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = c->r[2] + 0x00000010u;
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000004u);
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
    c->r[4] = 0x08ab0000u;
    c->r[4] = c->r[4] + 0x00003034u;
    c->r[5] = 0x08a50000u;
    c->r[5] = c->r[5] + 0xffffaed8u;
    { c->r[31] = 0x089ab5acu; c->r[6] = mem_r32(ram, c->r[30] + 0x00000018u); func_08a1ad34(c, ram); }
    c->r[4] = 0x08ab0000u;
    c->r[4] = c->r[4] + 0x00003054u;
    c->r[5] = 0x08a50000u;
    c->r[5] = c->r[5] + 0xffffaee8u;
    c->r[6] = mem_r32(ram, c->r[30] + 0x00000018u);
    { c->r[31] = 0x089ab5c8u; c->r[7] = mem_r32(ram, c->r[30] + 0x00000014u); func_08a1ad34(c, ram); }
    { c->r[31] = 0x089ab5d0u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u); func_089b7544(c, ram); }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = 0x08ab0000u;
    c->r[5] = c->r[5] + 0x00003034u;
    c->r[6] = 0x08ab0000u;
    c->r[6] = c->r[6] + 0x00003054u;
    c->r[7] = 0u + 0u;
    { c->r[31] = 0x089ab5f0u; c->r[8] = 0u + 0u; func_089b75f8(c, ram); }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = 0u + 0x00000018u;
    c->r[6] = 0u + 0u;
    { c->r[31] = 0x089ab604u; c->r[7] = 0u + 0u; func_0884f888(c, ram); }
    c->r[4] = 0x08a50000u;
    { c->r[31] = 0x089ab610u; c->r[4] = c->r[4] + 0xffffaef8u; func_089c6f64(c, ram); }
    c->r[2] = c->r[2] + 0x00000004u;
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = 0u + 0x00000188u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[3] = c->lo;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = c->r[2] + c->r[3];
    mem_w32(ram, c->r[4] + 0x0000000cu, c->r[2]);
    c->r[4] = 0x08a50000u;
    { c->r[31] = 0x089ab644u; c->r[4] = c->r[4] + 0xffffaf08u; func_089c6f64(c, ram); }
    mem_w32(ram, c->r[30] + 0x000000a8u, c->r[2]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = 0u + 0x00000188u;
    alx_mult(c, c->r[3], c->r[2]);
    c->r[3] = c->lo;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x0000013au);
    c->r[3] = c->r[2] << 3;
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000a8u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = c->r[2] + 0x00000004u;
    { c->r[31] = 0x089ab680u; mem_w32(ram, c->r[4] + 0x00000008u, c->r[2]); func_08980edc(c, ram); }
    c->r[4] = c->r[2] + 0u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x0000001cu);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[2] = c->r[2] << 2;
    c->r[3] = c->r[2] + c->r[4];
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000a4u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = c->r[2] + 0x00000010u;
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000008u);
    c->r[2] = c->r[2] & 0x0003u;
    mem_w32(ram, c->r[30] + 0x000000acu, c->r[2]);
    c->r[16] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[30] + 0x00000018u);
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[30] + 0x000000acu);
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x089ab6d0u; c->r[5] = c->r[3] + 0u; func_088bf6ec(c, ram); }
    mem_w8(ram, c->r[16] + 0x00000024u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r8(ram, c->r[30] + 0x00000018u);
    mem_w8(ram, c->r[3] + 0x000000b7u, c->r[2]);
    c->r[16] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[2] = c->r[2] + 0x000002fau;
    { c->r[31] = 0x089ab6f4u; c->r[4] = c->r[2] + 0u; func_089241c8(c, ram); }
    { c->r[31] = 0x089ab6fcu; mem_w32(ram, c->r[16] + 0x000000a4u, c->r[2]); func_08980edc(c, ram); }
    c->r[4] = c->r[2] + 0u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x0000001cu);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[2] = c->r[2] << 2;
    c->r[3] = c->r[2] + c->r[4];
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000a4u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = c->r[2] + 0x00000010u;
    { c->r[31] = 0x089ab730u; c->r[16] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000004u); func_08980edc(c, ram); }
    c->r[4] = c->r[2] + 0u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x0000001cu);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[2] = c->r[2] << 2;
    c->r[3] = c->r[2] + c->r[4];
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000a4u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = c->r[2] + 0x00000010u;
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000008u);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[6] = c->r[16] + 0u;
    { c->r[31] = 0x089ab774u; c->r[7] = c->r[2] + 0u; func_089ac1ac(c, ram); }
L_089ab774:
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0u + 0x0000005au;
    mem_w8(ram, c->r[3] + 0x00000034u, c->r[2]);
L_089ab780:
    { c->r[31] = 0x089ab788u; func_089795a0(c, ram); }
    { int _c = ((s32)c->r[2] < 0); if (_c) goto L_089ab7bc; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000038u);
    { c->r[31] = 0x089ab79cu; c->r[16] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x0000002eu); func_089795a0(c, ram); }
    c->r[2] = ((s32)c->r[2] < (s32)c->r[16]) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_089ab7bc; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x000000b2u);
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x089ab7bcu; c->r[5] = 0u + 0x00000001u; func_089989a4(c, ram); }
L_089ab7bc:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000038u);
    c->r[3] = mem_r8(ram, c->r[3] + 0x00000032u);
    { mem_w8(ram, c->r[2] + 0x00000019u, c->r[3]); goto L_089ab864; }
L_089ab7d0:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x0000001cu);
    { c->r[31] = 0x089ab7e0u; c->r[4] = c->r[2] + 0u; func_0896a458(c, ram); }
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x0000020du);
    c->r[2] = 0u + 0x00000001u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_089ab864; }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x0000008cu);
    c->r[2] = 0x40100000u;
    c->r[2] = c->r[3] | c->r[2];
    mem_w32(ram, c->r[4] + 0x0000008cu, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000027u);
    c->r[2] = c->r[2] + 0x00000001u;
    mem_w8(ram, c->r[3] + 0x00000027u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000027u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000006u) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_089ab83c; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    { mem_w8(ram, c->r[2] + 0x00000032u, 0u); goto L_089ab848; }
L_089ab83c:
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0u + 0x00000001u;
    mem_w8(ram, c->r[3] + 0x00000032u, c->r[2]);
L_089ab848:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000027u);
    c->r[2] = ((s32)c->r[2] < (s32)0x0000000cu) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_089ab864; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    mem_w8(ram, c->r[2] + 0x00000027u, 0u);
L_089ab864:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000034u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_089ab8a4; }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x0000008cu);
    c->r[2] = 0x40100000u;
    c->r[2] = c->r[3] | c->r[2];
    mem_w32(ram, c->r[4] + 0x0000008cu, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000034u);
    c->r[2] = c->r[2] + 0xffffffffu;
    { mem_w8(ram, c->r[3] + 0x00000034u, c->r[2]); goto L_089ab8dc; }
L_089ab8a4:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x0000001cu);
    { c->r[31] = 0x089ab8b4u; c->r[4] = c->r[2] + 0u; func_0896a458(c, ram); }
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x0000020du);
    { int _c = (c->r[2] != 0u); if (_c) goto L_089ab8dc; }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x0000008cu);
    c->r[2] = 0xbfef0000u;
    c->r[2] = c->r[2] | 0xffffu;
    c->r[2] = c->r[3] & c->r[2];
    mem_w32(ram, c->r[4] + 0x0000008cu, c->r[2]);
L_089ab8dc:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x0000008cu);
    c->r[2] = 0u + 0xffff9fffu;
    c->r[2] = c->r[3] & c->r[2];
    mem_w32(ram, c->r[4] + 0x0000008cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000019u);
    c->r[2] = c->r[2] & 0x0008u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_089ab91c; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000008cu);
    c->r[2] = c->r[2] | 0x2000u;
    mem_w32(ram, c->r[3] + 0x0000008cu, c->r[2]);
L_089ab91c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000019u);
    c->r[2] = c->r[2] & 0x0010u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_089ab944; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000008cu);
    c->r[2] = c->r[2] | 0x4000u;
    mem_w32(ram, c->r[3] + 0x0000008cu, c->r[2]);
L_089ab944:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000034u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_089ab9e8; }
    c->r[2] = c->r[30] + 0x00000070u;
    { c->r[31] = 0x089ab95cu; c->r[4] = c->r[2] + 0u; func_08808240(c, ram); }
    c->r[4] = c->r[30] + 0x00000070u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = c->r[2] + 0x00000030u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000040u);
    c->r[2] = c->r[2] + 0x00000020u;
    c->r[5] = c->r[3] + 0u;
    { c->r[31] = 0x089ab97cu; c->r[6] = c->r[2] + 0u; func_08820ca4(c, ram); }
    c->r[2] = c->r[30] + 0x00000060u;
    { c->r[31] = 0x089ab988u; c->r[4] = c->r[2] + 0u; func_08808240(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[4] = c->r[2] + 0x00000030u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000030u;
    c->r[3] = c->r[30] + 0x00000070u;
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x089ab9a8u; c->r[6] = c->r[3] + 0u; func_08859fd4(c, ram); }
    c->r[3] = c->r[30] + 0x00000060u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000030u;
    c->r[4] = c->r[3] + 0u;
    c->r[5] = c->r[2] + 0u;
    c->r[1] = 0x08a80000u;
    { c->r[31] = 0x089ab9c8u; c->f[12] = mem_rf32(ram, c->r[1] + 0x00002e40u); func_0884c224(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[4] = c->r[2] + 0x00000020u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000020u;
    c->r[3] = c->r[30] + 0x00000060u;
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x089ab9e8u; c->r[6] = c->r[3] + 0u; func_08859fd4(c, ram); }
L_089ab9e8:
    c->r[3] = c->r[30] + 0x00000070u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000020u;
    c->r[4] = c->r[3] + 0u;
    { c->r[31] = 0x089aba00u; c->r[5] = c->r[2] + 0u; func_0888d554(c, ram); }
    mem_w32(ram, c->r[30] + 0x000000acu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000acu);
    { int _c = (c->r[2] != 0u); if (_c) goto L_089aba40; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[4] = c->r[2] + 0x00000020u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000040u);
    c->r[3] = c->r[2] + 0x00000010u;
    c->r[2] = mem_r32(ram, c->r[3] + 0x00000000u);
    mem_w32(ram, c->r[4] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[3] + 0x00000004u);
    mem_w32(ram, c->r[4] + 0x00000004u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[3] + 0x00000008u);
    mem_w32(ram, c->r[4] + 0x00000008u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[3] + 0x0000000cu);
    mem_w32(ram, c->r[4] + 0x0000000cu, c->r[2]);
L_089aba40:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000040u);
    c->r[4] = c->r[2] + 0x00000010u;
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
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000040u);
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
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000040u);
    c->r[4] = c->r[2] + 0x00000020u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = c->r[2] + 0x00000030u;
    c->r[2] = mem_r32(ram, c->r[3] + 0x00000000u);
    mem_w32(ram, c->r[4] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[3] + 0x00000004u);
    mem_w32(ram, c->r[4] + 0x00000004u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[3] + 0x00000008u);
    mem_w32(ram, c->r[4] + 0x00000008u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[3] + 0x0000000cu);
    mem_w32(ram, c->r[4] + 0x0000000cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000040u);
    c->r[4] = c->r[2] + 0x00000040u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000040u);
    c->r[2] = mem_r32(ram, c->r[3] + 0x00000000u);
    mem_w32(ram, c->r[4] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[3] + 0x00000004u);
    mem_w32(ram, c->r[4] + 0x00000004u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[3] + 0x00000008u);
    mem_w32(ram, c->r[4] + 0x00000008u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[3] + 0x0000000cu);
    mem_w32(ram, c->r[4] + 0x0000000cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000036u);
    c->r[3] = c->r[2] << 4;
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000003cu);
    c->r[4] = c->r[3] + c->r[2];
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
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000036u);
    c->r[3] = c->r[2] << 4;
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000003cu);
    c->r[2] = c->r[3] + c->r[2];
    c->r[1] = 0x08a50000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffffaf1cu);
    mem_wf32(ram, c->r[2] + 0x0000000cu, c->f[0]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000036u);
    c->r[3] = c->r[2] + 0x00000001u;
    c->r[2] = (u32)((s32)c->r[3] >> 31);
    c->r[2] = c->r[2] >> 28;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = (u32)((s32)c->r[2] >> 4);
    c->r[2] = c->r[2] << 4;
    c->r[2] = c->r[3] - c->r[2];
    mem_w8(ram, c->r[4] + 0x00000036u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r8(ram, c->r[2] + 0x0000001au);
    c->r[2] = c->r[2] & 0x0020u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_089abbe0; }
    c->r[4] = 0x08a80000u;
    c->r[4] = mem_r32(ram, c->r[4] + 0x00002ed8u);
    c->r[2] = 0x08a80000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00002ed8u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x0000008cu);
    c->r[2] = 0x00040000u;
    c->r[2] = c->r[3] | c->r[2];
    mem_w32(ram, c->r[4] + 0x0000008cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x000000b2u);
    c->r[2] = 0u + 0x00000001u;
    c->r[2] = c->r[2] << (c->r[3] & 31u);
    c->r[3] = 0x08a90000u;
    c->r[3] = mem_r8(ram, c->r[3] + 0xffffbbd0u);
    c->r[2] = c->r[3] | c->r[2];
    c->r[1] = 0x08a90000u;
    { mem_w8(ram, c->r[1] + 0xffffbbd0u, c->r[2]); goto L_089abc08; }
L_089abbe0:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x000000b2u);
    c->r[2] = 0u + 0x00000001u;
    c->r[2] = c->r[2] << (c->r[3] & 31u);
    c->r[2] = ~(0u | c->r[2]);
    c->r[3] = 0x08a90000u;
    c->r[3] = mem_r8(ram, c->r[3] + 0xffffbbd0u);
    c->r[2] = c->r[3] & c->r[2];
    c->r[1] = 0x08a90000u;
    mem_w8(ram, c->r[1] + 0xffffbbd0u, c->r[2]);
L_089abc08:
    mem_w32(ram, c->r[30] + 0x000000a8u, 0u);
L_089abc0c:
    { c->r[31] = 0x089abc14u; func_0896a3c0(c, ram); }
    c->r[3] = mem_r32(ram, c->r[30] + 0x000000a8u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[2] = ((s32)c->r[3] < (s32)c->r[2]) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_089abc30; }
    { goto L_089abc88; }
L_089abc30:
    { c->r[31] = 0x089abc38u; c->r[4] = mem_r32(ram, c->r[30] + 0x000000a8u); func_08998808(c, ram); }
    mem_w32(ram, c->r[30] + 0x000000b0u, c->r[2]);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0x00000ac8u;
    { c->r[31] = 0x089abc4cu; c->r[5] = mem_r32(ram, c->r[30] + 0x000000b0u); func_089cb820(c, ram); }
    mem_w32(ram, c->r[30] + 0x000000a4u, c->r[2]);
    c->r[5] = mem_r32(ram, c->r[30] + 0x000000a4u);
    c->r[4] = mem_r32(ram, c->r[30] + 0x000000a4u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = mem_r8(ram, c->r[2] + 0x00000031u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000a8u);
    c->r[2] = (u32)((s32)c->r[3] >> (c->r[2] & 31u));
    c->r[2] = c->r[2] & 0x0001u;
    c->r[3] = mem_r8(ram, c->r[4] + 0x000000b6u);
    c->r[2] = c->r[3] + c->r[2];
    mem_w8(ram, c->r[5] + 0x000000b6u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000a8u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x000000a8u, c->r[2]); goto L_089abc0c; }
L_089abc88:
    { c->r[31] = 0x089abc90u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u); func_089b934c(c, ram); }
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000035u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w8(ram, c->r[3] + 0x00000035u, c->r[2]); goto L_089abf10; }
L_089abca8:
    { c->r[31] = 0x089abcb0u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u); func_089b95f8(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    { c->r[31] = 0x089abcbcu; c->r[4] = mem_r32(ram, c->r[2] + 0x00000000u); func_089b73e0(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    { c->r[31] = 0x089abcc8u; c->r[4] = mem_r32(ram, c->r[2] + 0x00000004u); func_089b73e0(c, ram); }
    { goto L_089abf10; }
L_089abcd0:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r8(ram, c->r[2] + 0x0000001au);
    c->r[2] = c->r[2] & 0x0020u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_089abd04; }
    c->r[4] = 0x08a80000u;
    c->r[4] = mem_r32(ram, c->r[4] + 0x00002ed8u);
    c->r[2] = 0x08a80000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00002ed8u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x0000008cu);
    c->r[2] = 0x00040000u;
    c->r[2] = c->r[3] | c->r[2];
    mem_w32(ram, c->r[4] + 0x0000008cu, c->r[2]);
L_089abd04:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    mem_w32(ram, c->r[30] + 0x000000acu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000032u);
    c->r[2] = 0u + 0x00000001u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_089abe48; }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x0000008cu);
    c->r[2] = 0xff7f0000u;
    c->r[2] = c->r[2] | 0xffffu;
    c->r[2] = c->r[3] & c->r[2];
    mem_w32(ram, c->r[4] + 0x0000008cu, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x000000acu);
    c->r[2] = 0u + 0xffffffffu;
    mem_w32(ram, c->r[3] + 0x00000040u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000019u);
    { int _c = ((s32)c->r[2] >= 0); if (_c) goto L_089abf10; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = c->r[2] + 0x00000020u;
    c->r[2] = mem_r32(ram, c->r[3] + 0x00000000u);
    mem_w32(ram, c->r[30] + 0x00000070u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[3] + 0x00000004u);
    mem_w32(ram, c->r[30] + 0x00000074u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[3] + 0x00000008u);
    mem_w32(ram, c->r[30] + 0x00000078u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[3] + 0x0000000cu);
    mem_w32(ram, c->r[30] + 0x0000007cu, c->r[2]);
    c->r[5] = c->r[30] + 0x00000070u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[6] = c->r[2] + 0x00000030u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000030u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000025u);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[7] = c->r[3] + 0u;
    c->r[8] = 0u + 0u;
    { c->r[31] = 0x089abdb0u; c->r[9] = c->r[2] + 0u; func_088c46d0(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[4] = mem_r8(ram, c->r[2] + 0x00000035u);
    c->r[2] = 0xaaaa0000u;
    c->r[2] = c->r[2] | 0xaaabu;
    alx_multu(c, c->r[4], c->r[2]);
    c->r[2] = c->hi;
    c->r[3] = c->r[2] >> 1;
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 1;
    c->r[2] = c->r[2] + c->r[3];
    c->r[2] = c->r[4] - c->r[2];
    c->r[2] = c->r[2] & 0x00ffu;
    { int _c = (c->r[2] != 0u); if (_c) goto L_089abf10; }
    c->r[4] = 0u + 0x00000002u;
    c->r[5] = 0u + 0x00000412u;
    c->r[6] = 0u + 0u;
    c->r[7] = 0u + 0u;
    c->r[8] = 0u + 0u;
    { c->r[31] = 0x089abe04u; c->r[9] = 0u + 0u; func_089c6bec(c, ram); }
    mem_w32(ram, c->r[30] + 0x000000a8u, c->r[2]);
    c->r[1] = 0x08a50000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffffaf1cu);
    c->r[4] = mem_r32(ram, c->r[30] + 0x000000a8u);
    { c->r[31] = 0x089abe1cu; c->f[12] = c->f[0]; func_089c77f4(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000a8u);
    c->r[3] = c->r[2] + 0x00000020u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000070u);
    mem_w32(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000074u);
    mem_w32(ram, c->r[3] + 0x00000004u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000078u);
    mem_w32(ram, c->r[3] + 0x00000008u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000007cu);
    { mem_w32(ram, c->r[3] + 0x0000000cu, c->r[2]); goto L_089abf10; }
L_089abe48:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x0000008cu);
    c->r[2] = 0x80800000u;
    c->r[2] = c->r[3] | c->r[2];
    mem_w32(ram, c->r[4] + 0x0000008cu, c->r[2]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r32(ram, c->r[2] + 0x0000008cu);
    c->r[2] = 0xdfff0000u;
    c->r[2] = c->r[2] | 0xffffu;
    c->r[2] = c->r[3] & c->r[2];
    { mem_w32(ram, c->r[4] + 0x0000008cu, c->r[2]); goto L_089abf10; }
L_089abe80:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    mem_w32(ram, c->r[30] + 0x000000acu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000acu);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000010u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_089abea0; }
    { goto L_089abf10; }
L_089abea0:
    c->r[3] = mem_r32(ram, c->r[30] + 0x000000acu);
    c->r[2] = 0u + 0x00000001u;
    mem_w32(ram, c->r[3] + 0x00000004u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[4] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x000000b2u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x000000b0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000acu);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000010u);
    c->r[3] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x000000b2u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x000000acu);
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x0000000eu);
    c->r[6] = c->r[3] + 0u;
    { c->r[31] = 0x089abedcu; c->r[7] = c->r[2] + 0u; func_08970114(c, ram); }
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x000000acu);
    c->r[4] = mem_r16(ram, c->r[2] + 0x000000b0u);
    c->r[2] = mem_r16(ram, c->r[3] + 0x0000000eu);
    c->r[2] = c->r[4] - c->r[2];
    mem_w16(ram, c->r[5] + 0x000000b0u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x000000b0u);
    { int _c = ((s32)c->r[2] >= 0); if (_c) goto L_089abf10; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    mem_w16(ram, c->r[2] + 0x000000b0u, 0u);
L_089abf10:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x000000dcu);
    c->r[30] = mem_r32(ram, c->r[29] + 0x000000d8u);
    c->r[17] = mem_r32(ram, c->r[29] + 0x000000d4u);
    c->r[16] = mem_r32(ram, c->r[29] + 0x000000d0u);
    { c->r[29] = c->r[29] + 0x000000e0u; return; }
    return; /* fell out of func_089aa72c */
}

/* func_089b070c  0x089b070c..0x089b0954  584 bytes, source=sweep */
void func_089b070c(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089b070cu);
    c->r[29] = c->r[29] + 0xffffffd0u;
    mem_w32(ram, c->r[29] + 0x00000020u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[2] = c->r[5] + 0u;
    mem_w8(ram, c->r[30] + 0x00000004u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08ab0000u;
    c->r[2] = c->r[2] + 0x00003094u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[3] = mem_r8(ram, c->r[2] + 0x00000000u);
    c->r[2] = mem_r8(ram, c->r[30] + 0x00000004u);
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_089b0754; }
    c->r[2] = 0u + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]); goto L_089b0940; }
L_089b0754:
    c->r[3] = mem_r8(ram, c->r[30] + 0x00000004u);
    c->r[2] = 0u + 0x0000000au;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_089b0770; }
    c->r[3] = 0u + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000008u, c->r[3]); goto L_089b0940; }
L_089b0770:
    c->r[3] = mem_r8(ram, c->r[30] + 0x00000004u);
    c->r[2] = 0u + 0x00000009u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_089b07b0; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08ab0000u;
    c->r[2] = c->r[2] + 0x00003094u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[3] = mem_r8(ram, c->r[2] + 0x00000000u);
    c->r[2] = 0u + 0x00000001u;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_089b07b0; }
    c->r[2] = 0u + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]); goto L_089b0940; }
L_089b07b0:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08ab0000u;
    c->r[2] = c->r[2] + 0x00003094u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000000u);
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = (c->r[3] < 0x0000000au) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_089b093c; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08a50000u;
    c->r[2] = c->r[2] + 0xffffb100u;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    { u32 _t = c->r[2]; switch (_t) { case 0x089b07fcu: goto L_089b07fc; case 0x089b0818u: goto L_089b0818; case 0x089b0854u: goto L_089b0854; case 0x089b0890u: goto L_089b0890; case 0x089b08b0u: goto L_089b08b0; case 0x089b08ccu: goto L_089b08cc; case 0x089b08e8u: goto L_089b08e8; case 0x089b0904u: goto L_089b0904; case 0x089b0920u: goto L_089b0920; case 0x089b093cu: goto L_089b093c; default: recomp_trap_unknown_indirect(c, ram, 0x089b07f4u, _t); return; } }
L_089b07fc:
    c->r[3] = mem_r8(ram, c->r[30] + 0x00000004u);
    c->r[2] = 0u + 0x00000004u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_089b093c; }
    c->r[2] = 0u + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]); goto L_089b0940; }
L_089b0818:
    c->r[3] = mem_r8(ram, c->r[30] + 0x00000004u);
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[3]);
    c->r[2] = 0u + 0x00000001u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_089b0848; }
    c->r[2] = 0u + 0x00000004u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_089b0848; }
    { goto L_089b093c; }
L_089b0848:
    c->r[2] = 0u + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]); goto L_089b0940; }
L_089b0854:
    c->r[3] = mem_r8(ram, c->r[30] + 0x00000004u);
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[3]);
    c->r[2] = 0u + 0x00000001u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000010u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_089b0884; }
    c->r[2] = 0u + 0x00000004u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000010u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_089b0884; }
    { goto L_089b093c; }
L_089b0884:
    c->r[2] = 0u + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]); goto L_089b0940; }
L_089b0890:
    c->r[2] = mem_r8(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[2] + 0xfffffffbu;
    c->r[2] = (c->r[2] < 0x00000004u) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_089b093c; }
    c->r[3] = 0u + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000008u, c->r[3]); goto L_089b0940; }
L_089b08b0:
    c->r[3] = mem_r8(ram, c->r[30] + 0x00000004u);
    c->r[2] = 0u + 0x00000002u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_089b093c; }
    c->r[2] = 0u + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]); goto L_089b0940; }
L_089b08cc:
    c->r[3] = mem_r8(ram, c->r[30] + 0x00000004u);
    c->r[2] = 0u + 0x00000003u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_089b093c; }
    c->r[3] = 0u + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000008u, c->r[3]); goto L_089b0940; }
L_089b08e8:
    c->r[3] = mem_r8(ram, c->r[30] + 0x00000004u);
    c->r[2] = 0u + 0x00000001u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_089b093c; }
    c->r[2] = 0u + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]); goto L_089b0940; }
L_089b0904:
    c->r[3] = mem_r8(ram, c->r[30] + 0x00000004u);
    c->r[2] = 0u + 0x00000001u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_089b093c; }
    c->r[3] = 0u + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000008u, c->r[3]); goto L_089b0940; }
L_089b0920:
    c->r[3] = mem_r8(ram, c->r[30] + 0x00000004u);
    c->r[2] = 0u + 0x00000001u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_089b093c; }
    c->r[2] = 0u + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]); goto L_089b0940; }
L_089b093c:
    mem_w32(ram, c->r[30] + 0x00000008u, 0u);
L_089b0940:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000020u);
    { c->r[29] = c->r[29] + 0x00000030u; return; }
    return; /* fell out of func_089b070c */
}

/* func_089b319c  0x089b319c..0x089b320c  112 bytes, source=sweep */
void func_089b319c(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089b319cu);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_089b31d0; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = 0u + 0x00000001u;
    { mem_w32(ram, c->r[3] + 0x00000060u, c->r[2]); goto L_089b31d8; }
L_089b31d0:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    mem_w32(ram, c->r[2] + 0x00000060u, 0u);
L_089b31d8:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[7] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = mem_r32(ram, c->r[2] + 0x00000064u);
    c->r[6] = mem_r32(ram, c->r[3] + 0x00000068u);
    { c->r[31] = 0x089b31f8u; c->r[7] = mem_r32(ram, c->r[7] + 0x00000060u); func_089b320c(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_089b319c */
}

/* func_089b4d78  0x089b4d78..0x089b529c  1316 bytes, source=fde */
void func_089b4d78(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089b4d78u);
    c->r[29] = c->r[29] + 0xfffffdd0u;
    mem_w32(ram, c->r[29] + 0x00000224u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000220u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_wf32(ram, c->r[30] + 0x00000004u, c->f[12]);
    c->r[2] = c->r[30] + 0x00000020u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x089b4da4u; c->r[5] = mem_r32(ram, c->r[3] + 0x00000004u); func_089b6f80(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000010u);
    c->f[0] = u2f(0u);
    alx_c_cond_s(c, 2, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_089b4dc8; }
    { goto L_089b5064; }
L_089b4dc8:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x089b4dd4u; c->f[12] = mem_rf32(ram, c->r[2] + 0x0000000cu); func_08a0f684(c, ram); }
    mem_wf32(ram, c->r[30] + 0x00000014u, c->f[0]);
    mem_w32(ram, c->r[30] + 0x00000008u, 0u);
L_089b4ddc:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[2] = ((s32)c->r[3] < (s32)c->r[2]) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_089b4dfc; }
    { goto L_089b4f78; }
L_089b4dfc:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[30];
    c->r[2] = c->r[2] + 0x00000020u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[2] = mem_r8(ram, c->r[2] + 0x000000a6u);
    mem_w8(ram, c->r[30] + 0x00000010u, c->r[2]);
    c->r[2] = mem_r8(ram, c->r[30] + 0x00000010u);
    c->r[2] = c->r[2] & 0x0002u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_089b4e7c; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[30];
    c->r[2] = c->r[2] + 0x00000020u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000070u;
    { c->r[31] = 0x089b4e48u; c->r[4] = c->r[2] + 0u; func_0884bfd0(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[30];
    c->r[2] = c->r[2] + 0x00000020u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000004u;
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = c->r[2] + 0u;
    c->r[6] = 0u + 0x00000005u;
    c->f[12] = mem_rf32(ram, c->r[30] + 0x00000014u);
    { c->r[31] = 0x089b4e7cu; c->r[7] = c->r[3] + 0u; func_089b6710(c, ram); }
L_089b4e7c:
    c->r[2] = mem_r8(ram, c->r[30] + 0x00000010u);
    c->r[2] = c->r[2] & 0x0004u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_089b4ee0; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[30];
    c->r[2] = c->r[2] + 0x00000020u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000080u;
    { c->r[31] = 0x089b4eacu; c->r[4] = c->r[2] + 0u; func_0884bfd0(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[30];
    c->r[2] = c->r[2] + 0x00000020u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000008u;
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = c->r[2] + 0u;
    c->r[6] = 0u + 0x00000007u;
    c->f[12] = mem_rf32(ram, c->r[30] + 0x00000014u);
    { c->r[31] = 0x089b4ee0u; c->r[7] = c->r[3] + 0u; func_089b6710(c, ram); }
L_089b4ee0:
    c->r[2] = mem_r8(ram, c->r[30] + 0x00000010u);
    c->r[2] = c->r[2] ^ 0x0001u;
    c->r[2] = c->r[2] & 0x0001u;
    c->r[2] = c->r[2] & 0x00ffu;
    { int _c = (c->r[2] == 0u); if (_c) goto L_089b4f4c; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[30];
    c->r[2] = c->r[2] + 0x00000020u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000090u;
    { c->r[31] = 0x089b4f18u; c->r[4] = c->r[2] + 0u; func_0884bfd0(c, ram); }
    c->r[3] = c->r[2] + 0u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[30];
    c->r[2] = c->r[2] + 0x00000020u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[2] = c->r[2] + 0x0000000cu;
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = c->r[2] + 0u;
    c->r[6] = 0u + 0x00000007u;
    c->f[12] = mem_rf32(ram, c->r[30] + 0x00000014u);
    { c->r[31] = 0x089b4f4cu; c->r[7] = c->r[3] + 0u; func_089b6710(c, ram); }
L_089b4f4c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[30];
    c->r[2] = c->r[2] + 0x00000020u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000014u);
    mem_wf32(ram, c->r[2] + 0x000000a0u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]); goto L_089b4ddc; }
L_089b4f78:
    mem_w32(ram, c->r[30] + 0x0000000cu, 0u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x0000000cu);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000004u);
    c->f[0] = c->f[1] + c->f[0];
    mem_wf32(ram, c->r[3] + 0x0000000cu, c->f[0]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000014u);
    c->r[2] = mem_r16(ram, c->r[2] + 0x00000008u);
    c->r[2] = c->r[2] + 0xffffffffu;
    c->f[0] = u2f(c->r[2]);
    c->f[1] = (f32)(s32)f2u(c->f[0]);
    c->f[0] = mem_rf32(ram, c->r[3] + 0x0000000cu);
    alx_c_cond_s(c, 14, c->f[1], c->f[0]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_089b4fcc; }
    { goto L_089b5028; }
L_089b4fcc:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000014u);
    c->r[2] = mem_r8(ram, c->r[2] + 0x0000000bu);
    c->r[2] = c->r[2] & 0x0010u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_089b501c; }
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000014u);
    c->r[2] = mem_r16(ram, c->r[2] + 0x00000008u);
    c->r[2] = c->r[2] + 0xffffffffu;
    c->f[0] = u2f(c->r[2]);
    c->f[1] = (f32)(s32)f2u(c->f[0]);
    c->f[0] = mem_rf32(ram, c->r[3] + 0x0000000cu);
    c->f[0] = c->f[0] - c->f[1];
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = mem_r32(ram, c->r[5] + 0x00000014u);
    { c->r[31] = 0x089b501cu; c->f[12] = c->f[0]; func_089b46d4(c, ram); }
L_089b501c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] | 0x0010u;
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
L_089b5028:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x0000000cu);
    c->r[1] = 0x08a50000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffffb1f0u);
    alx_c_cond_s(c, 14, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_089b5050; }
    { goto L_089b5284; }
L_089b5050:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[1] = 0x08a50000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffffb1f0u);
    { mem_wf32(ram, c->r[2] + 0x0000000cu, c->f[0]); goto L_089b5284; }
L_089b5064:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x0000000cu);
    c->f[0] = mem_rf32(ram, c->r[3] + 0x00000010u);
    c->f[0] = c->f[1] / c->f[0];
    mem_wf32(ram, c->r[30] + 0x00000014u, c->f[0]);
    mem_w32(ram, c->r[30] + 0x00000008u, 0u);
L_089b5080:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[2] = ((s32)c->r[3] < (s32)c->r[2]) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_089b50a0; }
    { goto L_089b520c; }
L_089b50a0:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[30];
    c->r[2] = c->r[2] + 0x00000020u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[2] = mem_r8(ram, c->r[2] + 0x000000a6u);
    mem_w8(ram, c->r[30] + 0x00000010u, c->r[2]);
    c->r[2] = mem_r8(ram, c->r[30] + 0x00000010u);
    c->r[2] = c->r[2] & 0x0002u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_089b5124; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[30];
    c->r[2] = c->r[2] + 0x00000020u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[4] = c->r[2] + 0x00000070u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[30];
    c->r[2] = c->r[2] + 0x00000020u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[3] = c->r[2] + 0x00000040u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[30];
    c->r[2] = c->r[2] + 0x00000020u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000010u;
    c->r[5] = c->r[3] + 0u;
    c->r[6] = c->r[2] + 0u;
    { c->r[31] = 0x089b5124u; c->f[12] = mem_rf32(ram, c->r[30] + 0x00000014u); func_089b6d3c(c, ram); }
L_089b5124:
    c->r[2] = mem_r8(ram, c->r[30] + 0x00000010u);
    c->r[2] = c->r[2] & 0x0004u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_089b518c; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[30];
    c->r[2] = c->r[2] + 0x00000020u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[4] = c->r[2] + 0x00000080u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[30];
    c->r[2] = c->r[2] + 0x00000020u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[3] = c->r[2] + 0x00000050u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[30];
    c->r[2] = c->r[2] + 0x00000020u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000020u;
    c->r[5] = c->r[3] + 0u;
    c->r[6] = c->r[2] + 0u;
    { c->r[31] = 0x089b518cu; c->f[12] = mem_rf32(ram, c->r[30] + 0x00000014u); func_0885a058(c, ram); }
L_089b518c:
    c->r[2] = mem_r8(ram, c->r[30] + 0x00000010u);
    c->r[2] = c->r[2] ^ 0x0001u;
    c->r[2] = c->r[2] & 0x0001u;
    c->r[2] = c->r[2] & 0x00ffu;
    { int _c = (c->r[2] == 0u); if (_c) goto L_089b51fc; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[30];
    c->r[2] = c->r[2] + 0x00000020u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[4] = c->r[2] + 0x00000090u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[30];
    c->r[2] = c->r[2] + 0x00000020u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[3] = c->r[2] + 0x00000060u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[30];
    c->r[2] = c->r[2] + 0x00000020u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000030u;
    c->r[5] = c->r[3] + 0u;
    c->r[6] = c->r[2] + 0u;
    { c->r[31] = 0x089b51fcu; c->f[12] = mem_rf32(ram, c->r[30] + 0x00000014u); func_0885a058(c, ram); }
L_089b51fc:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]); goto L_089b5080; }
L_089b520c:
    c->r[2] = 0u + 0x00000001u;
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x0000000cu);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000004u);
    c->f[0] = c->f[1] + c->f[0];
    mem_wf32(ram, c->r[3] + 0x0000000cu, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x0000000cu);
    c->f[0] = mem_rf32(ram, c->r[3] + 0x00000010u);
    alx_c_cond_s(c, 14, c->f[0], c->f[1]);
    { int _c = ((c->fcr31 & FCR31_C) != 0u); if (_c) goto L_089b5254; }
    { goto L_089b5284; }
L_089b5254:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->f[1] = mem_rf32(ram, c->r[2] + 0x0000000cu);
    c->f[0] = mem_rf32(ram, c->r[3] + 0x00000010u);
    c->f[0] = c->f[1] - c->f[0];
    mem_wf32(ram, c->r[4] + 0x0000000cu, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    mem_w32(ram, c->r[2] + 0x00000010u, 0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] | 0x0010u;
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
L_089b5284:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000224u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000220u);
    { c->r[29] = c->r[29] + 0x00000230u; return; }
    return; /* fell out of func_089b4d78 */
}

/* func_089b75d0  0x089b75d0..0x089b75f8  40 bytes, source=sweep */
void func_089b75d0(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089b75d0u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[6]);
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_089b75d0 */
}

/* func_089b9160  0x089b9160..0x089b934c  492 bytes, source=fde */
void func_089b9160(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089b9160u);
    c->r[29] = c->r[29] + 0xffffff40u;
    mem_w32(ram, c->r[29] + 0x000000b4u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x000000b0u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x000000c0u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_089b9190; }
    { goto L_089b9338; }
L_089b9190:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000009cu);
    { int _c = (c->r[2] != 0u); if (_c) goto L_089b91a8; }
    { goto L_089b9338; }
L_089b91a8:
    c->r[2] = c->r[30] + 0x00000010u;
    { c->r[31] = 0x089b91b4u; c->r[4] = c->r[2] + 0u; func_08808260(c, ram); }
    c->r[2] = c->r[30] + 0x00000010u;
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0u + 0u;
    { c->r[31] = 0x089b91c8u; c->r[6] = mem_r32(ram, c->r[30] + 0x00000004u); func_0884c668(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x000000c0u);
    mem_w32(ram, c->r[30] + 0x00000050u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000050u);
    c->r[4] = mem_r32(ram, c->r[2] + 0x000000c0u);
    c->r[2] = mem_r32(ram, c->r[3] + 0x00000004u);
    c->r[2] = c->r[4] + c->r[2];
    mem_w32(ram, c->r[30] + 0x00000054u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000054u);
    c->r[4] = mem_r32(ram, c->r[2] + 0x000000c0u);
    c->r[2] = mem_r32(ram, c->r[3] + 0x00000004u);
    c->r[2] = c->r[4] + c->r[2];
    mem_w32(ram, c->r[30] + 0x00000058u, c->r[2]);
    mem_w32(ram, c->r[30] + 0x0000005cu, 0u);
L_089b9208:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000054u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000005cu);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[2] = ((s32)c->r[3] < (s32)c->r[2]) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_089b9228; }
    { goto L_089b9338; }
L_089b9228:
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000005cu);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 4;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000058u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x0000004fu);
    c->r[2] = 0u + 0xffffffffu;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_089b925c; }
    { goto L_089b9328; }
L_089b925c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[4] = mem_r32(ram, c->r[2] + 0x00000058u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000005cu);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 4;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000058u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x0000004fu);
    c->r[2] = c->r[2] + c->r[4];
    c->r[2] = c->r[2] + 0x00000030u;
    c->r[2] = mem_r8(ram, c->r[2] + 0x00000000u);
    mem_w32(ram, c->r[30] + 0x00000060u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000060u);
    c->r[2] = 0u + 0x000000ffu;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_089b92cc; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000005cu);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 4;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000058u);
    c->r[3] = c->r[3] + c->r[2];
    c->r[2] = 0u + 0xffffffffu;
    { mem_w8(ram, c->r[3] + 0x0000004fu, c->r[2]); goto L_089b9328; }
L_089b92cc:
    c->r[2] = c->r[30] + 0x00000070u;
    { c->r[31] = 0x089b92d8u; c->r[4] = c->r[2] + 0u; func_08808260(c, ram); }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x089b92e4u; c->r[5] = mem_r32(ram, c->r[30] + 0x00000060u); func_089b9b8c(c, ram); }
    c->r[5] = c->r[2] + 0u;
    c->r[2] = c->r[30] + 0x00000070u;
    c->r[3] = c->r[30] + 0x00000010u;
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x089b92fcu; c->r[6] = c->r[3] + 0u; func_0884c6d4(c, ram); }
    c->r[2] = c->r[30] + 0x00000070u;
    c->r[3] = c->r[30] + 0x00000070u;
    c->r[4] = c->r[2] + 0u;
    c->r[5] = 0u + 0u;
    { c->r[31] = 0x089b9314u; c->r[6] = c->r[3] + 0u; func_0884c668(c, ram); }
    c->r[2] = c->r[30] + 0x00000070u;
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000058u);
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x089b9328u; c->r[6] = 0u + 0x00000040u; func_08a19db8(c, ram); }
L_089b9328:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000005cu);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x0000005cu, c->r[2]); goto L_089b9208; }
L_089b9338:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x000000b4u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x000000b0u);
    { c->r[29] = c->r[29] + 0x000000c0u; return; }
    return; /* fell out of func_089b9160 */
}

/* func_089c33a4  0x089c33a4..0x089c33d8  52 bytes, source=residue */
void func_089c33a4(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089c33a4u);
    c->r[29] = c->r[29] + 0xffffffd0u;
    mem_w32(ram, c->r[29] + 0x00000020u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    mem_wf32(ram, c->r[30] + 0x00000008u, c->f[12]);
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[6]);
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[7]);
    c->r[2] = 0u + 0u;
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000020u);
    { c->r[29] = c->r[29] + 0x00000030u; return; }
    return; /* fell out of func_089c33a4 */
}

/* func_089c6420  0x089c6420..0x089c655c  316 bytes, source=sweep */
void func_089c6420(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089c6420u);
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
    { int _c = (c->r[2] == 0u); if (_c) goto L_089c6478; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = 0x00ff0000u;
    c->r[2] = c->r[2] | 0xffffu;
    c->r[3] = c->r[3] & c->r[2];
    c->r[2] = 0x12000000u;
    c->r[2] = c->r[3] | c->r[2];
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x089c6478u; c->r[5] = c->r[2] + 0u; func_089c625c(c, ram); }
L_089c6478:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_089c64cc; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = c->r[2] >> 24;
    c->r[2] = c->r[2] & 0x000fu;
    c->r[3] = c->r[2] << 16;
    c->r[2] = 0x10000000u;
    c->r[2] = c->r[3] | c->r[2];
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x089c64a8u; c->r[5] = c->r[2] + 0u; func_089c625c(c, ram); }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = 0x00ff0000u;
    c->r[2] = c->r[2] | 0xffffu;
    c->r[3] = c->r[3] & c->r[2];
    c->r[2] = 0x02000000u;
    c->r[2] = c->r[3] | c->r[2];
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x089c64ccu; c->r[5] = c->r[2] + 0u; func_089c625c(c, ram); }
L_089c64cc:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_089c6520; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = c->r[2] >> 24;
    c->r[2] = c->r[2] & 0x000fu;
    c->r[3] = c->r[2] << 16;
    c->r[2] = 0x10000000u;
    c->r[2] = c->r[3] | c->r[2];
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x089c64fcu; c->r[5] = c->r[2] + 0u; func_089c625c(c, ram); }
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = 0x00ff0000u;
    c->r[2] = c->r[2] | 0xffffu;
    c->r[3] = c->r[3] & c->r[2];
    c->r[2] = 0x01000000u;
    c->r[2] = c->r[3] | c->r[2];
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x089c6520u; c->r[5] = c->r[2] + 0u; func_089c625c(c, ram); }
L_089c6520:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[2] & 0x0007u;
    c->r[3] = c->r[2] << 16;
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = c->r[3] | c->r[2];
    c->r[2] = 0x04000000u;
    c->r[2] = c->r[3] | c->r[2];
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x089c6548u; c->r[5] = c->r[2] + 0u; func_089c625c(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000024u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000020u);
    { c->r[29] = c->r[29] + 0x00000030u; return; }
    return; /* fell out of func_089c6420 */
}

/* func_089c8bcc  0x089c8bcc..0x089c8c04  56 bytes, source=sweep */
void func_089c8bcc(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089c8bccu);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x089c8bf0u; c->r[5] = mem_r32(ram, c->r[30] + 0x00000004u); func_089c8b88(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_089c8bcc */
}

/* func_089cab60  0x089cab60..0x089cabb0  80 bytes, source=sweep */
void func_089cab60(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089cab60u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[2] + 0xffffff12u;
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[2]);
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = 0u + 0x00000001u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[3] = c->r[3] << (c->r[2] & 31u);
    c->r[2] = mem_r32(ram, c->r[4] + 0x00001b68u);
    c->r[2] = c->r[2] | c->r[3];
    mem_w32(ram, c->r[5] + 0x00001b68u, c->r[2]);
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_089cab60 */
}

/* func_089cdef8  0x089cdef8..0x089ce004  268 bytes, source=fde */
void func_089cdef8(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089cdef8u);
    c->r[29] = c->r[29] + 0xffffffc0u;
    mem_w32(ram, c->r[29] + 0x00000034u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000030u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[6]);
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[7]);
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[8]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_089cdf38; }
    { goto L_089cdff0; }
L_089cdf38:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = c->r[2] + 0x00000008u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = c->r[2] + 0x0000000cu;
    mem_w32(ram, c->r[30] + 0x0000001cu, c->r[2]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = mem_r32(ram, c->r[30] + 0x0000000cu);
    { c->r[31] = 0x089cdf64u; c->r[6] = mem_r32(ram, c->r[30] + 0x00000010u); func_089d090c(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000020u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_089cdf7c; }
    { goto L_089cdff0; }
L_089cdf7c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[2] = c->r[2] + 0x0000000au;
    mem_w32(ram, c->r[30] + 0x00000020u, c->r[2]);
L_089cdf88:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[3] = mem_r16(ram, c->r[2] + 0x00000000u);
    c->r[2] = 0u | 0xffffu;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_089cdfa4; }
    { goto L_089cdfe8; }
L_089cdfa4:
    c->r[7] = c->r[30] + 0x00000004u;
    c->r[5] = mem_r32(ram, c->r[7] + 0x00000000u);
    c->r[6] = c->r[30] + 0x00000020u;
    c->r[3] = mem_r32(ram, c->r[6] + 0x00000000u);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = mem_r16(ram, c->r[2] + 0x00000000u);
    c->r[4] = c->r[2] << 1;
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[2] = c->r[4] + c->r[2];
    c->r[3] = c->r[3] + 0x00000002u;
    mem_w32(ram, c->r[6] + 0x00000000u, c->r[3]);
    c->r[3] = c->r[5] + 0u;
    c->r[2] = mem_r16(ram, c->r[2] + 0x00000000u);
    mem_w16(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[5] = c->r[5] + 0x00000002u;
    { mem_w32(ram, c->r[7] + 0x00000000u, c->r[5]); goto L_089cdf88; }
L_089cdfe8:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    mem_w16(ram, c->r[2] + 0x00000000u, 0u);
L_089cdff0:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000034u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000030u);
    { c->r[29] = c->r[29] + 0x00000040u; return; }
    return; /* fell out of func_089cdef8 */
}

/* func_089d23d0  0x089d23d0..0x089d240c  60 bytes, source=sweep */
void func_089d23d0(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089d23d0u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000004u);
    { c->r[31] = 0x089d23f8u; c->r[6] = 0u + 0u; func_089d2a9c(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_089d23d0 */
}

/* func_089d337c  0x089d337c..0x089d33cc  80 bytes, source=sweep */
void func_089d337c(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089d337cu);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    c->r[2] = c->r[4] + 0u;
    mem_w16(ram, c->r[30] + 0x00000000u, c->r[2]);
    c->r[3] = (u32)(s32)(s16)mem_r16(ram, c->r[30] + 0x00000000u);
    c->r[2] = (u32)((s32)c->r[3] >> 31);
    c->r[2] = c->r[2] >> 31;
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = (u32)((s32)c->r[2] >> 1);
    c->r[2] = c->r[2] << 16;
    c->r[2] = (u32)((s32)c->r[2] >> 16);
    c->r[3] = c->r[2] << 8;
    c->r[2] = 0x08b80000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0xfffff45cu);
    c->r[2] = c->r[3] + c->r[2];
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_089d337c */
}

/* func_089d4d04  0x089d4d04..0x089d4d84  128 bytes, source=fde */
void func_089d4d04(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089d4d04u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[4] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000004u);
    { c->r[31] = 0x089d4d30u; c->r[6] = 0u + 0x00000001u; hle_dispatch_stub(c, ram, 0x08a24bc4u); /* sceNetAdhocPtpConnect */ }
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = 0x80410000u;
    c->r[2] = c->r[2] | 0x0709u;
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_089d4d50; }
    { mem_w32(ram, c->r[30] + 0x00000008u, 0u); goto L_089d4d6c; }
L_089d4d50:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    { int _c = ((s32)c->r[2] >= 0); if (_c) goto L_089d4d64; }
    { goto L_089d4d6c; }
L_089d4d64:
    c->r[2] = 0u + 0x00000001u;
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]);
L_089d4d6c:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_089d4d04 */
}

/* func_089d5fdc  0x089d5fdc..0x089d62f8  796 bytes, source=fde */
void func_089d5fdc(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089d5fdcu);
    c->r[29] = c->r[29] + 0xffffffc0u;
    mem_w32(ram, c->r[29] + 0x00000034u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000030u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[6]);
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[7]);
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[8]);
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
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[5] = 0u + 0u;
    { c->r[31] = 0x089d603cu; c->r[6] = 0u + 0x00000018u; func_08a19ec4(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_089d6074; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_089d6074; }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x089d6060u; c->r[5] = mem_r32(ram, c->r[30] + 0x00000008u); func_089d705c(c, ram); }
    { int _c = (c->r[2] == 0u); if (_c) goto L_089d6074; }
    c->r[2] = 0u + 0xffffffffu;
    { mem_w32(ram, c->r[30] + 0x00000020u, c->r[2]); goto L_089d62e0; }
L_089d6074:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_089d60cc; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    { int _c = (c->r[2] != 0u); if (_c) goto L_089d60cc; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000000cu);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[6] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[7] = 0u + 0u;
    c->r[8] = 0u + 0u;
    { c->r[31] = 0x089d60b0u; c->r[9] = 0u + 0x00000001u; func_089d62f8(c, ram); }
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    { int _c = (c->r[2] != 0u); if (_c) goto L_089d60cc; }
    c->r[2] = 0u + 0xffffffffu;
    { mem_w32(ram, c->r[30] + 0x00000020u, c->r[2]); goto L_089d62e0; }
L_089d60cc:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_089d60e4; }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000014u);
    { c->r[31] = 0x089d60e4u; c->r[5] = mem_r32(ram, c->r[30] + 0x00000008u); func_08a1af70(c, ram); }
L_089d60e4:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    mem_w32(ram, c->r[3] + 0x00000010u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    mem_w32(ram, c->r[3] + 0x00000014u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    mem_w32(ram, c->r[30] + 0x00000018u, c->r[2]);
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
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[3] + c->r[2];
    mem_w32(ram, c->r[4] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[2] = c->r[2] & 0x003fu;
    { int _c = (c->r[2] == 0u); if (_c) goto L_089d61ac; }
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
L_089d61ac:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000008u);
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08a80000u;
    c->r[2] = c->r[2] + 0x00003bdcu;
    c->r[5] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000008u);
    c->r[3] = c->r[2] << 2;
    c->r[2] = 0x08a80000u;
    c->r[2] = c->r[2] + 0x00003bdcu;
    c->r[4] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000000cu);
    c->r[3] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[3] = c->r[3] - c->r[2];
    c->r[2] = mem_r32(ram, c->r[4] + 0x00000000u);
    c->r[2] = c->r[2] + c->r[3];
    mem_w32(ram, c->r[5] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x000060d0u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_089d62cc; }
    c->r[2] = 0u + 0xffffffffu;
    mem_w8(ram, c->r[30] + 0x0000001cu, c->r[2]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[5] = 0x08a50000u;
    { c->r[31] = 0x089d6224u; c->r[5] = c->r[5] + 0xffffbad8u; func_08a1b1a4(c, ram); }
    { int _c = (c->r[2] == 0u); if (_c) goto L_089d6230; }
    mem_w8(ram, c->r[30] + 0x0000001cu, 0u);
L_089d6230:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[5] = 0x08a50000u;
    { c->r[31] = 0x089d6240u; c->r[5] = c->r[5] + 0xffffbae0u; func_08a1b1a4(c, ram); }
    { int _c = (c->r[2] == 0u); if (_c) goto L_089d624c; }
    mem_w8(ram, c->r[30] + 0x0000001cu, 0u);
L_089d624c:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[5] = 0x08a50000u;
    { c->r[31] = 0x089d625cu; c->r[5] = c->r[5] + 0xffffbae8u; func_08a1b1a4(c, ram); }
    { int _c = (c->r[2] == 0u); if (_c) goto L_089d626c; }
    c->r[2] = 0u + 0x00000001u;
    mem_w8(ram, c->r[30] + 0x0000001cu, c->r[2]);
L_089d626c:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[5] = 0x08a50000u;
    { c->r[31] = 0x089d627cu; c->r[5] = c->r[5] + 0xffffbaf0u; func_08a1b1a4(c, ram); }
    { int _c = (c->r[2] == 0u); if (_c) goto L_089d628c; }
    c->r[2] = 0u + 0x00000001u;
    mem_w8(ram, c->r[30] + 0x0000001cu, c->r[2]);
L_089d628c:
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[5] = 0x08a50000u;
    { c->r[31] = 0x089d629cu; c->r[5] = c->r[5] + 0xffffbaf8u; func_08a1b1a4(c, ram); }
    { int _c = (c->r[2] == 0u); if (_c) goto L_089d62a8; }
    mem_w8(ram, c->r[30] + 0x0000001cu, 0u);
L_089d62a8:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = (u32)(s32)(s8)mem_r8(ram, c->r[30] + 0x0000001cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000000cu);
    c->r[2] = c->r[2] + 0x00000006u;
    c->r[3] = mem_r32(ram, c->r[3] + 0x000060d0u);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000014u);
    { u32 _t = c->r[3]; c->r[31] = 0x089d62ccu; c->r[6] = c->r[2] + 0u; recomp_call_indirect(c, ram, 0x089d62c4u, _t); }
L_089d62cc:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000000cu);
    c->r[2] = (u32)(s32)(s16)mem_r16(ram, c->r[2] + 0x00000004u);
    c->r[2] = c->r[2] + 0xffffffffu;
    mem_w32(ram, c->r[30] + 0x00000020u, c->r[2]);
L_089d62e0:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000034u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000030u);
    { c->r[29] = c->r[29] + 0x00000040u; return; }
    return; /* fell out of func_089d5fdc */
}

/* func_089d7d58  0x089d7d58..0x089d7d90  56 bytes, source=sweep */
void func_089d7d58(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089d7d58u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x089d7d7cu; c->r[5] = mem_r32(ram, c->r[30] + 0x00000004u); func_089d7d14(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_089d7d58 */
}

/* func_089d9524  0x089d9524..0x089d95a4  128 bytes, source=fde */
void func_089d9524(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089d9524u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    mem_w32(ram, c->r[2] + 0x00000044u, 0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    mem_w32(ram, c->r[2] + 0x00000048u, 0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    mem_w32(ram, c->r[2] + 0x0000004cu, 0u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000080u);
    c->r[2] = c->r[2] + 0xfffffffcu;
    c->r[2] = (c->r[2] < 0x00000004u) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_089d9570; }
    { goto L_089d9578; }
L_089d9570:
    { c->r[31] = 0x089d9578u; c->r[4] = 0u + 0u; hle_dispatch_stub(c, ram, 0x08a24d3cu); /* sceKernelPowerLock */ }
L_089d9578:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[2] + 0x00000050u;
    { c->r[31] = 0x089d9588u; c->r[4] = c->r[2] + 0u; hle_dispatch_stub(c, ram, 0x08a24d8cu); /* sceUtilitySavedataInitStart */ }
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_089d9524 */
}

/* func_089da3e4  0x089da3e4..0x089da4a4  192 bytes, source=fde */
void func_089da3e4(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089da3e4u);
    c->r[29] = c->r[29] + 0xffffffd0u;
    mem_w32(ram, c->r[29] + 0x00000028u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000024u, c->r[30]);
    mem_w32(ram, c->r[29] + 0x00000020u, c->r[16]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[6]);
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[7]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    mem_w32(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    mem_w32(ram, c->r[3] + 0x00000004u, c->r[2]);
    c->r[16] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[2] << 2;
    { c->r[31] = 0x089da434u; c->r[4] = c->r[2] + 0u; func_089dd8bc(c, ram); }
    mem_w32(ram, c->r[16] + 0x00000008u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000008u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_089da454; }
    c->r[2] = 0u + 0xffffffffu;
    { mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]); goto L_089da488; }
L_089da454:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    { c->r[31] = 0x089da464u; mem_w32(ram, c->r[3] + 0x00000018u, c->r[2]); hle_dispatch_stub(c, ram, 0x08a249f4u); /* sceDisplayGetFramePerSec */ }
    c->f[1] = c->f[0];
    c->r[1] = 0x08a50000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffffbb80u);
    c->f[0] = c->f[0] / c->f[1];
    c->f[0] = c->f[0] + c->f[0];
    c->f[0] = u2f((u32)alx_trunc_w_s(c->f[0]));
    c->r[1] = 0x08b90000u;
    mem_wf32(ram, c->r[1] + 0x00000698u, c->f[0]);
    mem_w32(ram, c->r[30] + 0x00000010u, 0u);
L_089da488:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000028u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000024u);
    c->r[16] = mem_r32(ram, c->r[29] + 0x00000020u);
    { c->r[29] = c->r[29] + 0x00000030u; return; }
    return; /* fell out of func_089da3e4 */
}

/* func_089dba04  0x089dba04..0x089dba68  100 bytes, source=fde */
void func_089dba04(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089dba04u);
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
    { c->r[31] = 0x089dba54u; c->r[9] = mem_r32(ram, c->r[30] + 0x00000010u); func_089dbb94(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000024u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000020u);
    { c->r[29] = c->r[29] + 0x00000030u; return; }
    return; /* fell out of func_089dba04 */
}

/* func_089dd2a4  0x089dd2a4..0x089dd300  92 bytes, source=fde */
void func_089dd2a4(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089dd2a4u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, 0u);
    { c->r[31] = 0x089dd2c4u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u); hle_dispatch_stub(c, ram, 0x08a24afcu); /* sceMpegRingbufferAvailableSize */ }
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    { int _c = ((s32)c->r[2] <= 0); if (_c) goto L_089dd2e8; }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = 0u + 0x00000020u;
    { c->r[31] = 0x089dd2e4u; c->r[6] = mem_r32(ram, c->r[30] + 0x00000008u); hle_dispatch_stub(c, ram, 0x08a24af4u); /* sceMpegRingbufferPut */ }
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[2]);
L_089dd2e8:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_089dd2a4 */
}

/* func_089debc4  0x089debc4..0x089dec58  148 bytes, source=sweep */
void func_089debc4(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089debc4u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[6]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_089dec0c; }
    c->r[2] = 0x08b90000u;
    c->r[2] = mem_r32(ram, c->r[2] + 0x00006580u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_089dec04; }
    { mem_w32(ram, c->r[30] + 0x00000008u, 0u); goto L_089dec0c; }
L_089dec04:
    c->r[2] = 0u + 0xfffffff4u;
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[2]);
L_089dec0c:
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[3] + c->r[2];
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[2]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    mem_w32(ram, c->r[3] + 0x0000005cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = mem_r32(ram, c->r[2] + 0x00000054u);
    c->r[6] = mem_r32(ram, c->r[3] + 0x00000058u);
    { c->r[31] = 0x089dec44u; c->r[7] = mem_r32(ram, c->r[30] + 0x00000004u); func_089e1a44(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_089debc4 */
}

/* func_089e1c28  0x089e1c28..0x089e1cb0  136 bytes, source=sweep */
void func_089e1c28(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089e1c28u);
    c->r[29] = c->r[29] + 0xffffffc0u;
    mem_w32(ram, c->r[29] + 0x00000034u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000030u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[5]);
    mem_w32(ram, c->r[30] + 0x00000018u, c->r[6]);
    mem_w32(ram, c->r[30] + 0x0000001cu, c->r[7]);
    mem_w32(ram, c->r[30] + 0x00000020u, c->r[8]);
    mem_w32(ram, c->r[30] + 0x00000024u, c->r[9]);
    mem_w32(ram, c->r[30] + 0x00000028u, c->r[10]);
    mem_w32(ram, c->r[30] + 0x0000002cu, c->r[11]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000040u);
    mem_w32(ram, c->r[29] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000044u);
    mem_w32(ram, c->r[29] + 0x00000004u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000048u);
    mem_w32(ram, c->r[29] + 0x00000008u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000004cu);
    mem_w32(ram, c->r[29] + 0x0000000cu, c->r[2]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[6] = mem_r32(ram, c->r[30] + 0x00000018u);
    c->r[7] = mem_r32(ram, c->r[30] + 0x0000001cu);
    c->r[8] = mem_r32(ram, c->r[30] + 0x00000020u);
    c->r[9] = mem_r32(ram, c->r[30] + 0x00000024u);
    c->r[10] = mem_r32(ram, c->r[30] + 0x00000028u);
    { c->r[31] = 0x089e1c9cu; c->r[11] = mem_r32(ram, c->r[30] + 0x0000002cu); func_089e2a3c(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000034u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000030u);
    { c->r[29] = c->r[29] + 0x00000040u; return; }
    return; /* fell out of func_089e1c28 */
}

/* func_089e2758  0x089e2758..0x089e27a8  80 bytes, source=sweep */
void func_089e2758(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089e2758u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    { int _c = (c->r[2] != 0u); if (_c) goto L_089e278c; }
    { c->r[31] = 0x089e2784u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u); func_089e3490(c, ram); }
    { goto L_089e2794; }
L_089e278c:
    { c->r[31] = 0x089e2794u; c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u); func_089e34c4(c, ram); }
L_089e2794:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_089e2758 */
}

/* func_089e398c  0x089e398c..0x089e39c0  52 bytes, source=sweep */
void func_089e398c(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089e398cu);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x089e39acu; c->r[5] = 0xcb000000u; func_089e1908(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_089e398c */
}

/* func_089e4ab4  0x089e4ab4..0x089e4af8  68 bytes, source=sweep */
void func_089e4ab4(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089e4ab4u);
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
    { c->r[31] = 0x089e4ae4u; c->r[5] = c->r[2] + 0u; func_089e1908(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_089e4ab4 */
}

/* func_089ea12c  0x089ea12c..0x089ea16c  64 bytes, source=sweep */
void func_089ea12c(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089ea12cu);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[6]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000004u);
    { c->r[31] = 0x089ea158u; c->r[6] = mem_r32(ram, c->r[30] + 0x00000008u); func_089ea5d4(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_089ea12c */
}

/* func_089eb040  0x089eb040..0x089eb084  68 bytes, source=sweep */
void func_089eb040(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089eb040u);
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
    { c->r[31] = 0x089eb070u; c->r[5] = c->r[2] + 0u; func_089ea03c(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_089eb040 */
}

/* func_089ef088  0x089ef088..0x089ef0c0  56 bytes, source=sweep */
void func_089ef088(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089ef088u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x089ef0acu; c->r[5] = mem_r32(ram, c->r[30] + 0x00000004u); func_089ef2bc(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_089ef088 */
}

/* func_089f0c8c  0x089f0c8c..0x089f0cd0  68 bytes, source=sweep */
void func_089f0c8c(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089f0c8cu);
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
    { c->r[31] = 0x089f0cbcu; c->r[5] = c->r[2] + 0u; func_089f0338(c, ram); }
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_089f0c8c */
}

/* func_089f2544  0x089f2544..0x089f2a20  1244 bytes, source=fde */
void func_089f2544(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089f2544u);
    c->r[29] = c->r[29] + 0xffffff80u;
    mem_w32(ram, c->r[29] + 0x00000078u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000074u, c->r[30]);
    mem_w32(ram, c->r[29] + 0x00000070u, c->r[16]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[6]);
    mem_wf32(ram, c->r[30] + 0x0000000cu, c->f[12]);
    c->r[2] = c->r[30] + 0x00000010u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[6] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[7] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[4] = c->r[2] + 0u;
    c->f[12] = mem_rf32(ram, c->r[3] + 0x00000000u);
    c->f[13] = mem_rf32(ram, c->r[5] + 0x00000010u);
    c->f[14] = mem_rf32(ram, c->r[6] + 0x00000020u);
    { c->r[31] = 0x089f2594u; c->f[15] = mem_rf32(ram, c->r[7] + 0x00000030u); func_0880d140(c, ram); }
    c->r[2] = c->r[30] + 0x00000020u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[6] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[7] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[4] = c->r[2] + 0u;
    c->f[12] = mem_rf32(ram, c->r[3] + 0x00000004u);
    c->f[13] = mem_rf32(ram, c->r[5] + 0x00000014u);
    c->f[14] = mem_rf32(ram, c->r[6] + 0x00000024u);
    { c->r[31] = 0x089f25c0u; c->f[15] = mem_rf32(ram, c->r[7] + 0x00000034u); func_0880d140(c, ram); }
    c->r[2] = c->r[30] + 0x00000030u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[6] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[7] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[4] = c->r[2] + 0u;
    c->f[12] = mem_rf32(ram, c->r[3] + 0x00000008u);
    c->f[13] = mem_rf32(ram, c->r[5] + 0x00000018u);
    c->f[14] = mem_rf32(ram, c->r[6] + 0x00000028u);
    { c->r[31] = 0x089f25ecu; c->f[15] = mem_rf32(ram, c->r[7] + 0x00000038u); func_0880d140(c, ram); }
    c->r[2] = c->r[30] + 0x00000040u;
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[6] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[7] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[4] = c->r[2] + 0u;
    c->f[12] = mem_rf32(ram, c->r[3] + 0x0000000cu);
    c->f[13] = mem_rf32(ram, c->r[5] + 0x0000001cu);
    c->f[14] = mem_rf32(ram, c->r[6] + 0x0000002cu);
    { c->r[31] = 0x089f2618u; c->f[15] = mem_rf32(ram, c->r[7] + 0x0000003cu); func_0880d140(c, ram); }
    c->r[16] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[30] + 0x00000050u;
    c->r[3] = c->r[30] + 0x00000040u;
    c->r[6] = c->r[30] + 0x00000010u;
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x089f2634u; c->r[5] = c->r[3] + 0u; func_0884c07c(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000050u);
    mem_w32(ram, c->r[16] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000054u);
    mem_w32(ram, c->r[16] + 0x00000004u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000058u);
    mem_w32(ram, c->r[16] + 0x00000008u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000005cu);
    mem_w32(ram, c->r[16] + 0x0000000cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[16] = c->r[2] + 0x00000010u;
    c->r[2] = c->r[30] + 0x00000050u;
    c->r[3] = c->r[30] + 0x00000040u;
    c->r[6] = c->r[30] + 0x00000010u;
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x089f2674u; c->r[5] = c->r[3] + 0u; func_08859f30(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000050u);
    mem_w32(ram, c->r[16] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000054u);
    mem_w32(ram, c->r[16] + 0x00000004u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000058u);
    mem_w32(ram, c->r[16] + 0x00000008u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000005cu);
    mem_w32(ram, c->r[16] + 0x0000000cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[16] = c->r[2] + 0x00000020u;
    c->r[2] = c->r[30] + 0x00000050u;
    c->r[3] = c->r[30] + 0x00000040u;
    c->r[6] = c->r[30] + 0x00000020u;
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x089f26b4u; c->r[5] = c->r[3] + 0u; func_0884c07c(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000050u);
    mem_w32(ram, c->r[16] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000054u);
    mem_w32(ram, c->r[16] + 0x00000004u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000058u);
    mem_w32(ram, c->r[16] + 0x00000008u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000005cu);
    mem_w32(ram, c->r[16] + 0x0000000cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[16] = c->r[2] + 0x00000030u;
    c->r[2] = c->r[30] + 0x00000050u;
    c->r[3] = c->r[30] + 0x00000040u;
    c->r[6] = c->r[30] + 0x00000020u;
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x089f26f4u; c->r[5] = c->r[3] + 0u; func_08859f30(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000050u);
    mem_w32(ram, c->r[16] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000054u);
    mem_w32(ram, c->r[16] + 0x00000004u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000058u);
    mem_w32(ram, c->r[16] + 0x00000008u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000005cu);
    mem_w32(ram, c->r[16] + 0x0000000cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[16] = c->r[2] + 0x00000040u;
    c->r[2] = c->r[30] + 0x00000050u;
    c->r[3] = c->r[30] + 0x00000040u;
    c->r[6] = c->r[30] + 0x00000030u;
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x089f2734u; c->r[5] = c->r[3] + 0u; func_0884c07c(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000050u);
    mem_w32(ram, c->r[16] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000054u);
    mem_w32(ram, c->r[16] + 0x00000004u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000058u);
    mem_w32(ram, c->r[16] + 0x00000008u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000005cu);
    mem_w32(ram, c->r[16] + 0x0000000cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[16] = c->r[2] + 0x00000050u;
    c->r[2] = c->r[30] + 0x00000050u;
    c->r[3] = c->r[30] + 0x00000040u;
    c->r[6] = c->r[30] + 0x00000030u;
    c->r[4] = c->r[2] + 0u;
    { c->r[31] = 0x089f2774u; c->r[5] = c->r[3] + 0u; func_08859f30(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000050u);
    mem_w32(ram, c->r[16] + 0x00000000u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000054u);
    mem_w32(ram, c->r[16] + 0x00000004u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000058u);
    mem_w32(ram, c->r[16] + 0x00000008u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000005cu);
    mem_w32(ram, c->r[16] + 0x0000000cu, c->r[2]);
    mem_w32(ram, c->r[30] + 0x00000060u, 0u);
L_089f2798:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000060u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000006u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_089f27b0; }
    { goto L_089f2a08; }
L_089f27b0:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000060u);
    c->r[3] = c->r[2] << 4;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[4] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000060u);
    c->r[3] = c->r[2] << 4;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[1] = 0x08a50000u;
    c->f[1] = mem_rf32(ram, c->r[1] + 0xffffc554u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x0000000cu);
    c->f[0] = c->f[1] - c->f[0];
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x089f27ecu; c->f[12] = c->f[0]; func_0884c224(c, ram); }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000060u);
    c->r[3] = c->r[2] << 4;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[4] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000060u);
    c->r[3] = c->r[2] << 4;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[3] + c->r[2];
    c->f[1] = mem_rf32(ram, c->r[4] + 0x00000000u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000000u);
    c->f[2] = c->f[1] * c->f[0];
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000060u);
    c->r[3] = c->r[2] << 4;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[4] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000060u);
    c->r[3] = c->r[2] << 4;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[3] + c->r[2];
    c->f[1] = mem_rf32(ram, c->r[4] + 0x00000004u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000004u);
    c->f[0] = c->f[1] * c->f[0];
    c->f[2] = c->f[2] + c->f[0];
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000060u);
    c->r[3] = c->r[2] << 4;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[4] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000060u);
    c->r[3] = c->r[2] << 4;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[3] + c->r[2];
    c->f[1] = mem_rf32(ram, c->r[4] + 0x00000008u);
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000008u);
    c->f[0] = c->f[1] * c->f[0];
    c->f[0] = c->f[2] + c->f[0];
    { c->r[31] = 0x089f2880u; c->f[12] = c->f[0]; func_08a104b4(c, ram); }
    c->f[1] = c->f[0];
    c->r[1] = 0x08a50000u;
    c->f[0] = mem_rf32(ram, c->r[1] + 0xffffc554u);
    c->f[0] = c->f[0] / c->f[1];
    mem_wf32(ram, c->r[30] + 0x00000064u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000060u);
    c->r[3] = c->r[2] << 4;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[4] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000060u);
    c->r[3] = c->r[2] << 4;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[3] + c->r[2];
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000000u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000064u);
    c->f[0] = c->f[1] * c->f[0];
    mem_wf32(ram, c->r[4] + 0x00000000u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000060u);
    c->r[3] = c->r[2] << 4;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[4] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000060u);
    c->r[3] = c->r[2] << 4;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[3] + c->r[2];
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000004u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000064u);
    c->f[0] = c->f[1] * c->f[0];
    mem_wf32(ram, c->r[4] + 0x00000004u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000060u);
    c->r[3] = c->r[2] << 4;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[4] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000060u);
    c->r[3] = c->r[2] << 4;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[3] + c->r[2];
    c->f[1] = mem_rf32(ram, c->r[2] + 0x00000008u);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000064u);
    c->f[0] = c->f[1] * c->f[0];
    mem_wf32(ram, c->r[4] + 0x00000008u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000060u);
    c->r[3] = c->r[2] << 4;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[4] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000060u);
    c->r[3] = c->r[2] << 4;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[3] + c->r[2];
    c->f[1] = mem_rf32(ram, c->r[2] + 0x0000000cu);
    c->f[0] = mem_rf32(ram, c->r[30] + 0x00000064u);
    c->f[0] = c->f[1] * c->f[0];
    mem_wf32(ram, c->r[4] + 0x0000000cu, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_089f29f8; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000060u);
    c->r[3] = c->r[2] << 4;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[4] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000060u);
    c->r[3] = c->r[2] << 4;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[3] + c->r[2];
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000000u);
    c->f[0] = (f32)fabsf(c->f[0]);
    mem_wf32(ram, c->r[4] + 0x00000000u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000060u);
    c->r[3] = c->r[2] << 4;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[4] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000060u);
    c->r[3] = c->r[2] << 4;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[3] + c->r[2];
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000004u);
    c->f[0] = (f32)fabsf(c->f[0]);
    mem_wf32(ram, c->r[4] + 0x00000004u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000060u);
    c->r[3] = c->r[2] << 4;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[4] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000060u);
    c->r[3] = c->r[2] << 4;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = c->r[3] + c->r[2];
    c->f[0] = mem_rf32(ram, c->r[2] + 0x00000008u);
    c->f[0] = (f32)fabsf(c->f[0]);
    mem_wf32(ram, c->r[4] + 0x00000008u, c->f[0]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000060u);
    c->r[3] = c->r[2] << 4;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[3] + c->r[2];
    mem_w32(ram, c->r[2] + 0x0000000cu, 0u);
L_089f29f8:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000060u);
    c->r[2] = c->r[2] + 0x00000001u;
    { mem_w32(ram, c->r[30] + 0x00000060u, c->r[2]); goto L_089f2798; }
L_089f2a08:
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000078u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000074u);
    c->r[16] = mem_r32(ram, c->r[29] + 0x00000070u);
    { c->r[29] = c->r[29] + 0x00000080u; return; }
    return; /* fell out of func_089f2544 */
}

/* func_089f57ec  0x089f57ec..0x089f586c  128 bytes, source=fde */
void func_089f57ec(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089f57ecu);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0xffffc810u;
    { c->r[31] = 0x089f5810u; c->r[5] = 0u + 0u; func_089f8ea0(c, ram); }
    c->r[4] = 0x08a80000u;
    c->r[4] = c->r[4] + 0xffffc810u;
    { c->r[31] = 0x089f5820u; c->r[5] = 0u + 0u; func_089f8b4c(c, ram); }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x089f582cu; c->r[5] = 0u + 0x00000001u; func_089f742c(c, ram); }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[5] = 0u + 0x00000001u;
    { c->r[31] = 0x089f583cu; c->r[6] = 0u + 0u; func_089f5ab8(c, ram); }
    { c->r[31] = 0x089f5844u; func_08a00f98(c, ram); }
    { c->r[31] = 0x089f584cu; func_08a01868(c, ram); }
    { c->r[31] = 0x089f5854u; func_089f9068(c, ram); }
    c->r[2] = 0u + 0u;
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000014u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000010u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_089f57ec */
}

/* func_089f8254  0x089f8254..0x089f8344  240 bytes, source=sweep */
void func_089f8254(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089f8254u);
    c->r[29] = c->r[29] + 0xffffffd0u;
    mem_w32(ram, c->r[29] + 0x00000020u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[6]);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = 0u + 0xffffffffu;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_089f8328; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[2] & 0x00ffu;
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
    c->r[3] = 0u + 0xffffff00u;
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = c->r[2] & c->r[3];
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 5;
    c->r[2] = mem_r32(ram, c->r[4] + 0x000039f0u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[3] = mem_r32(ram, c->r[2] + 0x00000090u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000010u);
    { int _c = (c->r[3] != c->r[2]); if (_c) goto L_089f8328; }
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 5;
    c->r[2] = mem_r32(ram, c->r[4] + 0x000039f0u);
    c->r[2] = c->r[3] + c->r[2];
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000095u);
    c->r[2] = ((s32)c->r[2] < (s32)0x00000004u) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); if (_c) goto L_089f8328; }
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = c->r[3] + 0u;
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[3];
    c->r[3] = c->r[2] << 5;
    c->r[2] = mem_r32(ram, c->r[4] + 0x000039f0u);
    c->r[2] = c->r[2] + c->r[3];
    mem_w32(ram, c->r[5] + 0x00000000u, c->r[2]);
    { mem_w32(ram, c->r[30] + 0x00000014u, 0u); goto L_089f8330; }
L_089f8328:
    c->r[2] = 0u + 0xffffffffu;
    mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]);
L_089f8330:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[29] = c->r[30] + 0u;
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000020u);
    { c->r[29] = c->r[29] + 0x00000030u; return; }
    return; /* fell out of func_089f8254 */
}

/* func_089f922c  0x089f922c..0x089f9234  8 bytes, source=residue */
void func_089f922c(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089f922cu);
    { c->r[2] = 0u + 0u; return; }
    return; /* fell out of func_089f922c */
}

/* func_089fa0fc  0x089fa0fc..0x089fa170  116 bytes, source=fde */
void func_089fa0fc(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089fa0fcu);
    c->r[29] = c->r[29] + 0xfffffff0u;
    mem_w32(ram, c->r[29] + 0x00000008u, c->r[18]);
    c->r[18] = 0u + 0u;
    mem_w32(ram, c->r[29] + 0x00000004u, c->r[17]);
    c->r[17] = c->r[4] + 0u;
    mem_w32(ram, c->r[29] + 0x00000000u, c->r[16]);
    mem_w32(ram, c->r[29] + 0x0000000cu, c->r[31]);
    c->r[3] = mem_r32(ram, c->r[4] + 0x00000be0u);
    { int _c = (c->r[3] == 0u); c->r[16] = c->r[4] + 0x00000048u; if (_c) goto L_089fa148; }
L_089fa124:
    c->r[2] = c->r[3] & 0x0001u;
    c->r[4] = c->r[18] + 0u;
    { int _c = (c->r[2] != 0u); c->r[18] = c->r[18] + 0x00000001u; if (_c) goto L_089fa160; }
L_089fa134:
    c->r[2] = c->r[3] >> 1;
    c->r[16] = c->r[16] + 0x0000004cu;
    mem_w32(ram, c->r[17] + 0x00000be0u, c->r[2]);
    { int _c = (c->r[2] != 0u); c->r[3] = c->r[2] + 0u; if (_c) goto L_089fa124; }
L_089fa148:
    c->r[31] = mem_r32(ram, c->r[29] + 0x0000000cu);
    c->r[18] = mem_r32(ram, c->r[29] + 0x00000008u);
    c->r[17] = mem_r32(ram, c->r[29] + 0x00000004u);
    c->r[16] = mem_r32(ram, c->r[29] + 0x00000000u);
    { c->r[29] = c->r[29] + 0x00000010u; return; }
L_089fa160:
    { c->r[31] = 0x089fa168u; c->r[5] = mem_r16(ram, c->r[16] + 0x00000000u); func_08a05c90(c, ram); }
    { c->r[3] = mem_r32(ram, c->r[17] + 0x00000be0u); goto L_089fa134; }
    return; /* fell out of func_089fa0fc */
}

/* func_089fa9f8  0x089fa9f8..0x089faa30  56 bytes, source=sweep */
void func_089fa9f8(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089fa9f8u);
    c->r[5] = c->r[5] & 0xffffu;
    c->r[6] = 0u + 0u;
    c->r[2] = mem_r16(ram, c->r[4] + 0x00000000u);
L_089faa04:
    c->r[7] = c->r[6] + 0u;
    c->r[6] = c->r[6] + 0x00000001u;
    c->r[4] = c->r[4] + 0x0000000cu;
    { int _c = (c->r[2] == c->r[5]); c->r[3] = ((s32)c->r[6] < (s32)0x00000040u) ? 1u : 0u; if (_c) goto L_089faa28; }
    if (c->r[3] != 0u) { c->r[2] = mem_r16(ram, c->r[4] + 0x00000000u); goto L_089faa04; }
    c->r[7] = 0x80000000u;
    c->r[7] = c->r[7] | 0x000fu;
L_089faa28:
    { c->r[2] = c->r[7] + 0u; return; }
    return; /* fell out of func_089fa9f8 */
}

/* func_089fb364  0x089fb364..0x089fb380  28 bytes, source=residue */
void func_089fb364(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089fb364u);
    c->r[2] = 0x08b90000u;
    c->r[2] = c->r[2] + 0x00006994u;
    c->r[4] = c->r[4] << 3;
    c->r[4] = c->r[4] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[4] + 0x00000004u);
    { mem_w32(ram, c->r[4] + 0x00000004u, 0u); return; }
    return; /* fell out of func_089fb364 */
}

/* func_089fc00c  0x089fc00c..0x089fc028  28 bytes, source=residue */
void func_089fc00c(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089fc00cu);
    c->r[29] = c->r[29] + 0xfffffff0u;
    mem_w32(ram, c->r[29] + 0x00000000u, c->r[31]);
    { c->r[31] = 0x089fc01cu; func_089fc10c(c, ram); }
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000000u);
    { c->r[29] = c->r[29] + 0x00000010u; return; }
    return; /* fell out of func_089fc00c */
}

/* func_089fcff8  0x089fcff8..0x089fd028  48 bytes, source=residue */
void func_089fcff8(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089fcff8u);
    c->r[4] = 0x08ba0000u;
    c->r[3] = mem_r32(ram, c->r[4] + 0xffff92d0u);
    c->r[2] = 0x6fff0000u;
    c->r[2] = c->r[2] | 0xffffu;
    c->r[2] = ((s32)c->r[2] < (s32)c->r[3]) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_089fd020; }
    c->r[2] = 0u + 0x00000001u;
    mem_w32(ram, c->r[4] + 0xffff92d0u, c->r[2]);
    c->r[3] = 0u + 0x00000001u;
L_089fd020:
    { c->r[2] = (0u < c->r[3]) ? 1u : 0u; return; }
    return; /* fell out of func_089fcff8 */
}

/* func_089fe1a0  0x089fe1a0..0x089fe268  200 bytes, source=sweep */
void func_089fe1a0(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089fe1a0u);
    c->r[29] = c->r[29] + 0xfffffff0u;
    c->r[2] = ((s32)c->r[4] < (s32)0x00000002u) ? 1u : 0u;
    mem_w32(ram, c->r[29] + 0x00000004u, c->r[31]);
    c->r[3] = 0x80000000u;
    { int _c = (c->r[2] == 0u); mem_w32(ram, c->r[29] + 0x00000000u, c->r[16]); if (_c) goto L_089fe248; }
    c->r[2] = 0x08ba0000u;
    mem_w32(ram, c->r[2] + 0x0000016cu, c->r[4]);
    c->r[5] = 0u + 0u;
    { int _c = ((s32)c->r[4] <= 0); c->r[16] = 0x08ba0000u; if (_c) goto L_089fe204; }
    c->r[2] = 0x08a50000u;
    c->f[0] = mem_rf32(ram, c->r[2] + 0xffffd290u);
    c->r[6] = 0u + 0xffffffffu;
    c->r[3] = c->r[16] + 0x0000008cu;
L_089fe1dc:
    c->r[5] = c->r[5] + 0x00000001u;
    c->r[2] = ((s32)c->r[5] < (s32)c->r[4]) ? 1u : 0u;
    mem_w16(ram, c->r[3] + 0x00000010u, 0u);
    mem_w32(ram, c->r[3] + 0x00000068u, c->r[6]);
    mem_wf32(ram, c->r[3] + 0x000000bcu, c->f[0]);
    mem_w32(ram, c->r[3] + 0x000000ccu, 0u);
    mem_w32(ram, c->r[3] + 0x000000c8u, 0u);
    mem_w32(ram, c->r[3] + 0x000000d0u, 0u);
    { int _c = (c->r[2] != 0u); c->r[3] = c->r[3] + 0x000000e0u; if (_c) goto L_089fe1dc; }
L_089fe204:
    { c->r[31] = 0x089fe20cu; hle_dispatch_stub(c, ram, 0x08a24d44u); /* sceUmdCheckMedium */ }
    { int _c = (c->r[2] == 0u); c->r[3] = c->r[16] + 0x0000008cu; if (_c) goto L_089fe25c; }
    c->r[2] = c->r[16] + 0x0000008cu;
    mem_w32(ram, c->r[2] + 0x00000090u, 0u);
L_089fe21c:
    c->r[4] = 0x08a50000u;
    c->r[5] = 0x08a00000u;
    c->r[4] = c->r[4] + 0xffffd284u;
    c->r[5] = c->r[5] + 0xffffe178u;
    { c->r[31] = 0x089fe234u; c->r[6] = 0u + 0u; hle_dispatch_stub(c, ram, 0x08a247fcu); /* sceKernelCreateCallback */ }
    c->r[4] = c->r[2] + 0u;
    c->r[3] = 0x08ba0000u;
    { c->r[31] = 0x089fe244u; mem_w32(ram, c->r[3] + 0xffff92e0u, c->r[2]); hle_dispatch_stub(c, ram, 0x08a24d64u); /* sceUmdRegisterUMDCallBack */ }
    c->r[3] = 0u + 0u;
L_089fe248:
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000004u);
    c->r[16] = mem_r32(ram, c->r[29] + 0x00000000u);
    c->r[2] = c->r[3] + 0u;
    { c->r[29] = c->r[29] + 0x00000010u; return; }
L_089fe25c:
    c->r[2] = 0u + 0x00000001u;
    { mem_w32(ram, c->r[3] + 0x00000090u, c->r[2]); goto L_089fe21c; }
    return; /* fell out of func_089fe1a0 */
}

/* func_089ff254  0x089ff254..0x089ff274  32 bytes, source=residue */
void func_089ff254(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x089ff254u);
    c->r[3] = c->r[4] << 3;
    c->r[3] = c->r[3] - c->r[4];
    c->r[2] = 0x08ba0000u;
    c->r[2] = c->r[2] + 0x0000008cu;
    c->r[3] = c->r[3] << 5;
    c->r[3] = c->r[3] + c->r[2];
    { c->r[2] = mem_r32(ram, c->r[3] + 0x000000c8u); return; }
    return; /* fell out of func_089ff254 */
}

/* func_08a01868  0x08a01868..0x08a018ac  68 bytes, source=sweep */
void func_08a01868(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08a01868u);
    c->r[29] = c->r[29] + 0xfffffff0u;
    mem_w32(ram, c->r[29] + 0x00000000u, c->r[16]);
    c->r[16] = 0x08ba0000u;
    c->r[2] = mem_r32(ram, c->r[16] + 0xffff9af0u);
    mem_w32(ram, c->r[29] + 0x00000004u, c->r[31]);
    { int _c = (c->r[2] != 0u); c->r[4] = c->r[2] + 0u; if (_c) goto L_08a0189c; }
    mem_w32(ram, c->r[16] + 0xffff9af0u, 0u);
L_08a01888:
    c->r[2] = 0u + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000004u);
    c->r[16] = mem_r32(ram, c->r[29] + 0x00000000u);
    { c->r[29] = c->r[29] + 0x00000010u; return; }
L_08a0189c:
    { c->r[31] = 0x08a018a4u; func_08a0d214(c, ram); }
    { mem_w32(ram, c->r[16] + 0xffff9af0u, 0u); goto L_08a01888; }
    return; /* fell out of func_08a01868 */
}

/* func_08a02e14  0x08a02e14..0x08a02e80  108 bytes, source=fde */
void func_08a02e14(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08a02e14u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    mem_w32(ram, c->r[29] + 0x00000004u, c->r[17]);
    c->r[17] = c->r[5] + 0u;
    c->r[5] = c->r[6] + 0u;
    mem_w32(ram, c->r[29] + 0x00000008u, c->r[18]);
    c->r[18] = c->r[6] + 0u;
    c->r[6] = c->r[7] + 0u;
    mem_w32(ram, c->r[29] + 0x00000000u, c->r[16]);
    c->r[16] = c->r[4] + 0u;
    c->r[4] = c->r[17] + 0u;
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x0000000cu, c->r[19]);
    { c->r[31] = 0x08a02e4cu; c->r[19] = c->r[7] + 0u; hle_dispatch_stub(c, ram, 0x08a246fcu); /* sceIoReadAsync */ }
    c->r[3] = 0u + 0x00000003u;
    mem_w32(ram, c->r[16] + 0x00000090u, c->r[17]);
    mem_w32(ram, c->r[16] + 0x000000a4u, c->r[18]);
    mem_w32(ram, c->r[16] + 0x000000a8u, c->r[19]);
    mem_w32(ram, c->r[16] + 0x00000000u, c->r[3]);
    mem_w32(ram, c->r[16] + 0x00000004u, 0u);
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000010u);
    c->r[19] = mem_r32(ram, c->r[29] + 0x0000000cu);
    c->r[18] = mem_r32(ram, c->r[29] + 0x00000008u);
    c->r[17] = mem_r32(ram, c->r[29] + 0x00000004u);
    c->r[16] = mem_r32(ram, c->r[29] + 0x00000000u);
    { c->r[29] = c->r[29] + 0x00000020u; return; }
    return; /* fell out of func_08a02e14 */
}

/* func_08a038f0  0x08a038f0..0x08a03910  32 bytes, source=sweep */
void func_08a038f0(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08a038f0u);
    c->r[29] = c->r[29] + 0xfffffff0u;
    vfpu_exec(c, ram, 0xd8900000u); /* lv.q */
    vfpu_exec(c, ram, 0xd8b10000u); /* lv.q */
    vfpu_exec(c, ram, 0x64919012u); /* vdot.t */
    vfpu_exec(c, ram, 0xebb20000u); /* sv.s */
    c->f[0] = mem_rf32(ram, c->r[29] + 0x00000000u);
    { c->r[29] = c->r[29] + 0x00000010u; return; }
    return; /* fell out of func_08a038f0 */
}

/* func_08a04ac8  0x08a04ac8..0x08a04cb0  488 bytes, source=sweep */
void func_08a04ac8(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08a04ac8u);
    c->r[29] = c->r[29] + 0xffffffd0u;
    mem_w32(ram, c->r[29] + 0x00000024u, c->r[31]);
    c->r[3] = c->r[4] + 0u;
    mem_w32(ram, c->r[29] + 0x00000020u, c->r[30]);
    mem_w32(ram, c->r[29] + 0x0000001cu, c->r[23]);
    mem_w32(ram, c->r[29] + 0x00000018u, c->r[22]);
    mem_w32(ram, c->r[29] + 0x0000000cu, c->r[19]);
    mem_w32(ram, c->r[29] + 0x00000008u, c->r[18]);
    mem_w32(ram, c->r[29] + 0x00000004u, c->r[17]);
    mem_w32(ram, c->r[29] + 0x00000000u, c->r[16]);
    mem_w32(ram, c->r[29] + 0x00000014u, c->r[21]);
    c->r[21] = c->r[4] + 0u;
    c->r[4] = 0u + 0u;
    mem_w32(ram, c->r[29] + 0x00000010u, c->r[20]);
    c->r[20] = 0u + 0u;
L_08a04b04:
    c->r[4] = c->r[4] + 0x00000001u;
    c->r[5] = (c->r[4] < 0x00000070u) ? 1u : 0u;
    mem_w8(ram, c->r[3] + 0x00000000u, 0u);
    { int _c = (c->r[5] != 0u); c->r[3] = c->r[3] + 0x00000001u; if (_c) goto L_08a04b04; }
    c->r[4] = 0x08ba0000u;
    c->r[3] = c->r[4] + 0xffffaa78u;
    c->r[16] = c->r[3] + 0u;
    c->r[17] = 0u + 0u;
    c->r[30] = c->r[3] + 0x00000030u;
    c->r[19] = 0u + 0u;
    c->r[23] = c->r[3] + 0u;
L_08a04b34:
    c->r[5] = mem_r32(ram, c->r[16] + 0x0000001cu);
    if (c->r[5] != 0u) { c->r[3] = mem_r32(ram, c->r[16] + 0x00000018u); goto L_08a04b88; }
    c->r[17] = c->r[17] + 0x00000001u;
L_08a04b44:
    c->r[4] = ((s32)c->r[17] < (s32)0x00000008u) ? 1u : 0u;
    c->r[16] = c->r[16] + 0x0000004cu;
    { int _c = (c->r[4] != 0u); c->r[19] = c->r[19] + 0x0000004cu; if (_c) goto L_08a04b34; }
    c->r[2] = c->r[20] + 0u;
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
    { c->r[29] = c->r[29] + 0x00000030u; return; }
L_08a04b88:
    c->r[6] = c->r[3] & 0x0400u;
    { int _c = (c->r[6] != 0u); c->r[20] = c->r[20] + 0x00000001u; if (_c) goto L_08a04bfc; }
    c->r[7] = c->r[3] & 0x0100u;
    if (c->r[7] != 0u) { c->r[10] = mem_r32(ram, c->r[16] + 0x00000000u); goto L_08a04bdc; }
    c->r[8] = mem_r32(ram, c->r[16] + 0x00000000u);
    { int _c = (c->r[8] != 0u); c->r[9] = 0x08ba0000u; if (_c) goto L_08a04bc8; }
L_08a04bac:
    c->r[3] = 0x08ba0000u;
L_08a04bb0:
    c->r[6] = mem_r32(ram, c->r[3] + 0xffffaf48u);
    c->r[4] = c->r[17] + 0u;
    { c->r[31] = 0x08a04bc0u; c->r[5] = c->r[21] + 0u; func_08a05604(c, ram); }
    { c->r[17] = c->r[17] + 0x00000001u; goto L_08a04b44; }
L_08a04bc8:
    c->r[5] = mem_r32(ram, c->r[9] + 0xffffaf48u);
    { c->r[31] = 0x08a04bd4u; c->r[4] = c->r[17] + 0u; func_08a04de8(c, ram); }
    { c->r[3] = 0x08ba0000u; goto L_08a04bb0; }
L_08a04bdc:
    if (c->r[10] == 0u) { c->r[3] = 0x08ba0000u; goto L_08a04bb0; }
    c->r[2] = 0x08ba0000u;
    c->r[5] = mem_r32(ram, c->r[2] + 0xffffaf48u);
    { c->r[31] = 0x08a04bf4u; c->r[4] = c->r[17] + 0u; func_08a05094(c, ram); }
    { c->r[3] = 0x08ba0000u; goto L_08a04bb0; }
L_08a04bfc:
    c->r[11] = mem_r32(ram, c->r[16] + 0x00000044u);
    if (c->r[11] == 0u) { c->r[3] = 0x08ba0000u; goto L_08a04bb0; }
    c->r[12] = 0x08ba0000u;
    c->r[3] = mem_r32(ram, c->r[12] + 0xffffaf48u);
    c->r[4] = 0u + 0u;
L_08a04c14:
    c->r[4] = c->r[4] + 0x00000001u;
    c->r[13] = (c->r[4] < 0x00000070u) ? 1u : 0u;
    mem_w8(ram, c->r[3] + 0x00000000u, 0u);
    { int _c = (c->r[13] != 0u); c->r[3] = c->r[3] + 0x00000001u; if (_c) goto L_08a04c14; }
    c->r[18] = c->r[19] + c->r[23];
    c->r[15] = mem_r32(ram, c->r[18] + 0x00000018u);
    c->r[14] = c->r[15] & 0x0100u;
    { int _c = (c->r[14] != 0u); c->r[25] = 0x08ba0000u; if (_c) goto L_08a04c88; }
    c->r[22] = 0x08ba0000u;
    c->r[2] = mem_r32(ram, c->r[18] + 0x00000044u);
    c->r[5] = mem_r32(ram, c->r[22] + 0xffffaf44u);
    c->r[7] = mem_r32(ram, c->r[18] + 0x00000048u);
    c->r[4] = c->r[17] + 0u;
    { u32 _t = c->r[2]; c->r[31] = 0x08a04c58u; c->r[6] = 0u + 0x00000010u; recomp_call_indirect(c, ram, 0x08a04c50u, _t); }
    if (c->r[2] != 0u) { mem_w32(ram, c->r[18] + 0x0000001cu, 0u); goto L_08a04c60; }
L_08a04c60:
    c->r[24] = 0x08ba0000u;
    c->r[5] = mem_r32(ram, c->r[22] + 0xffffaf44u);
    c->r[4] = mem_r32(ram, c->r[24] + 0xffffaf48u);
    c->r[22] = 0x08ba0000u;
    c->r[18] = c->r[22] + 0xffffaaacu;
    c->r[6] = c->r[19] + c->r[30];
    { c->r[31] = 0x08a04c80u; c->r[7] = c->r[19] + c->r[18]; func_08a04cb0(c, ram); }
    { c->r[3] = 0x08ba0000u; goto L_08a04bb0; }
L_08a04c88:
    c->r[22] = mem_r32(ram, c->r[18] + 0x00000044u);
    c->r[5] = mem_r32(ram, c->r[25] + 0xffffaf48u);
    c->r[7] = mem_r32(ram, c->r[18] + 0x00000048u);
    c->r[4] = c->r[17] + 0u;
    { u32 _t = c->r[22]; c->r[31] = 0x08a04ca0u; c->r[6] = 0u + 0x00000070u; recomp_call_indirect(c, ram, 0x08a04c98u, _t); }
    if (c->r[2] != 0u) { mem_w32(ram, c->r[18] + 0x0000001cu, 0u); goto L_08a04bac; }
    { c->r[3] = 0x08ba0000u; goto L_08a04bb0; }
    return; /* fell out of func_08a04ac8 */
}

/* func_08a06224  0x08a06224..0x08a062a0  124 bytes, source=sweep */
void func_08a06224(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08a06224u);
    c->r[2] = mem_r32(ram, c->r[4] + 0x00000000u);
    c->r[7] = c->r[4] + 0u;
    c->r[3] = mem_r8(ram, c->r[2] + 0x00000000u);
    c->r[5] = c->r[2] + 0x00000001u;
    c->r[6] = alx_seb(c->r[3]);
    { int _c = ((s32)c->r[6] < 0); c->r[4] = c->r[3] + 0u; if (_c) goto L_08a0624c; }
L_08a06240:
    c->r[2] = c->r[4] + 0u;
L_08a06244:
    { mem_w32(ram, c->r[7] + 0x00000000u, c->r[5]); return; }
L_08a0624c:
    c->r[6] = c->r[3] + 0x0000003eu;
    c->r[4] = c->r[6] & 0x00ffu;
    c->r[8] = (c->r[4] < 0x00000033u) ? 1u : 0u;
    c->r[6] = 0u + 0x00000040u;
    { int _c = (c->r[8] != 0u); c->r[4] = c->r[3] & 0x007fu; if (_c) goto L_08a06270; }
    c->r[3] = 0x08ba0000u;
    { c->r[4] = mem_r32(ram, c->r[3] + 0xffffbe04u); goto L_08a06240; }
L_08a06270:
    c->r[12] = mem_r8(ram, c->r[5] + 0x00000000u);
    c->r[14] = c->r[6] + 0xffffffffu;
    c->r[13] = c->r[4] & c->r[14];
    c->r[10] = c->r[13] << 6;
    c->r[11] = c->r[12] & 0x003fu;
    c->r[4] = c->r[10] | c->r[11];
    c->r[6] = c->r[6] << 5;
    c->r[9] = (c->r[4] < c->r[6]) ? 1u : 0u;
    { int _c = (c->r[9] == 0u); c->r[5] = c->r[5] + 0x00000001u; if (_c) goto L_08a06270; }
    { c->r[2] = c->r[4] + 0u; goto L_08a06244; }
    return; /* fell out of func_08a06224 */
}

/* func_08a09ef4  0x08a09ef4..0x08a0a098  420 bytes, source=residue */
void func_08a09ef4(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08a09ef4u);
    c->r[29] = c->r[29] + 0xffffffd0u;
    mem_w32(ram, c->r[29] + 0x00000024u, c->r[31]);
    mem_w32(ram, c->r[29] + 0x00000020u, c->r[30]);
    c->r[30] = c->r[29] + 0u;
    mem_w32(ram, c->r[30] + 0x00000000u, c->r[4]);
    mem_w32(ram, c->r[30] + 0x00000004u, c->r[5]);
    mem_w32(ram, c->r[30] + 0x00000008u, c->r[6]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    { int _c = (c->r[2] == 0u); if (_c) goto L_08a09f2c; }
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000001cu);
    { int _c = (c->r[2] != 0u); if (_c) goto L_08a09f38; }
L_08a09f2c:
    c->r[2] = 0u + 0xfffffffeu;
    { mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]); goto L_08a0a080; }
L_08a09f38:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x0000001cu);
    mem_w32(ram, c->r[30] + 0x0000000cu, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[2] = 0u + 0x0000000au;
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_08a09f64; }
    c->r[2] = 0u + 0xfffffffeu;
    { mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]); goto L_08a0a080; }
L_08a09f64:
    c->r[4] = 0u + 0u;
    c->r[5] = 0u + 0u;
    { c->r[31] = 0x08a09f74u; c->r[6] = 0u + 0u; func_08a0b204(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000004u);
    { c->r[31] = 0x08a09f88u; c->r[6] = mem_r32(ram, c->r[30] + 0x00000008u); func_08a0b204(c, ram); }
    mem_w32(ram, c->r[30] + 0x00000010u, c->r[2]);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000010u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000014u);
    { int _c = (c->r[3] == c->r[2]); if (_c) goto L_08a09fac; }
    c->r[2] = 0u + 0xfffffffdu;
    { mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]); goto L_08a0a080; }
L_08a09fac:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000000u);
    c->r[4] = mem_r32(ram, c->r[30] + 0x00000000u);
    { c->r[31] = 0x08a09fbcu; c->r[5] = mem_r32(ram, c->r[2] + 0x00000010u); func_08a0721c(c, ram); }
    { int _c = (c->r[2] == 0u); if (_c) goto L_08a09fdc; }
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0u + 0x0000001cu;
    mem_w32(ram, c->r[3] + 0x00000000u, c->r[2]);
    c->r[2] = 0u + 0xfffffffcu;
    { mem_w32(ram, c->r[30] + 0x00000014u, c->r[2]); goto L_08a0a080; }
L_08a09fdc:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000020u);
    c->r[2] = (c->r[2] < c->r[3]) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_08a0a038; }
    c->r[4] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = mem_r32(ram, c->r[30] + 0x00000004u);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[3] = c->r[3] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000020u);
    c->r[2] = c->r[3] - c->r[2];
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[4] = mem_r32(ram, c->r[4] + 0x0000002cu);
    c->r[5] = c->r[2] + 0u;
    { c->r[31] = 0x08a0a024u; c->r[6] = mem_r32(ram, c->r[3] + 0x00000020u); func_08a19db8(c, ram); }
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[2] + 0x00000020u);
    { mem_w32(ram, c->r[3] + 0x00000024u, c->r[2]); goto L_08a0a070; }
L_08a0a038:
    c->r[2] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[4] = mem_r32(ram, c->r[2] + 0x0000002cu);
    c->r[2] = mem_r32(ram, c->r[3] + 0x00000020u);
    c->r[3] = c->r[4] + c->r[2];
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    c->r[2] = c->r[3] - c->r[2];
    c->r[4] = c->r[2] + 0u;
    c->r[5] = mem_r32(ram, c->r[30] + 0x00000004u);
    { c->r[31] = 0x08a0a064u; c->r[6] = mem_r32(ram, c->r[30] + 0x00000008u); func_08a19db8(c, ram); }
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000008u);
    mem_w32(ram, c->r[3] + 0x00000024u, c->r[2]);
L_08a0a070:
    c->r[3] = mem_r32(ram, c->r[30] + 0x0000000cu);
    c->r[2] = 0u + 0x00000001u;
    mem_w32(ram, c->r[3] + 0x0000000cu, c->r[2]);
    mem_w32(ram, c->r[30] + 0x00000014u, 0u);
L_08a0a080:
    c->r[2] = mem_r32(ram, c->r[30] + 0x00000014u);
    c->r[29] = c->r[30] + 0u;
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000024u);
    c->r[30] = mem_r32(ram, c->r[29] + 0x00000020u);
    { c->r[29] = c->r[29] + 0x00000030u; return; }
    return; /* fell out of func_08a09ef4 */
}

/* func_08a0dddc  0x08a0dddc..0x08a0ddf4  24 bytes, source=fde */
void func_08a0dddc(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08a0dddcu);
    c->r[29] = c->r[29] + 0xfffffff0u;
    mem_w32(ram, c->r[29] + 0x00000000u, c->r[31]);
    { u32 _t = c->r[4]; c->r[31] = 0x08a0ddecu; recomp_call_indirect(c, ram, 0x08a0dde4u, _t); }
    { c->r[31] = 0x08a0ddf4u; func_08a0ddc4(c, ram); }
    return; /* fell out of func_08a0dddc */
}

/* func_08a0e5a4  0x08a0e5a4..0x08a0e5cc  40 bytes, source=residue */
void func_08a0e5a4(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08a0e5a4u);
    c->r[2] = 0x08a50000u;
    c->r[2] = c->r[2] + 0x00000648u;
    mem_w32(ram, c->r[4] + 0x00000000u, c->r[2]);
    c->r[29] = c->r[29] + 0xfffffff0u;
    mem_w32(ram, c->r[29] + 0x00000000u, c->r[31]);
    { c->r[31] = 0x08a0e5c0u; func_08a0e308(c, ram); }
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000000u);
    { c->r[29] = c->r[29] + 0x00000010u; return; }
    return; /* fell out of func_08a0e5a4 */
}

/* func_08a0f5bc  0x08a0f5bc..0x08a0f684  200 bytes, source=sweep */
void func_08a0f5bc(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08a0f5bcu);
    c->r[4] = f2u(c->f[12]);
    c->r[2] = 0x3f490000u;
    c->r[2] = c->r[2] | 0x0fd8u;
    c->r[3] = alx_ext(c->r[4], 0u, 30u);
    c->r[29] = c->r[29] + 0xffffffe0u;
    c->r[2] = ((s32)c->r[2] < (s32)c->r[3]) ? 1u : 0u;
    c->f[13] = u2f(0u);
    { int _c = (c->r[2] == 0u); mem_w32(ram, c->r[29] + 0x00000010u, c->r[31]); if (_c) goto L_08a0f65c; }
    c->r[2] = 0x7f7f0000u;
    c->r[2] = c->r[2] | 0xffffu;
    c->r[2] = ((s32)c->r[2] < (s32)c->r[3]) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (_c) goto L_08a0f604; }
    c->f[0] = c->f[12] - c->f[12];
L_08a0f5f8:
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000010u);
L_08a0f5fc:
    { c->r[29] = c->r[29] + 0x00000020u; return; }
L_08a0f604:
    { c->r[31] = 0x08a0f60cu; c->r[4] = c->r[29] + 0u; func_08a11aa8(c, ram); }
    c->r[3] = c->r[2] & 0x0003u;
    c->r[2] = 0u + 0x00000001u;
    { int _c = (c->r[3] == c->r[2]); c->r[2] = ((s32)c->r[3] < (s32)0x00000002u) ? 1u : 0u; if (_c) goto L_08a0f66c; }
    { int _c = (c->r[2] != 0u); c->r[2] = 0u + 0x00000002u; if (_c) goto L_08a0f650; }
    { int _c = (c->r[3] == c->r[2]); c->f[12] = mem_rf32(ram, c->r[29] + 0x00000000u); if (_c) goto L_08a0f640; }
L_08a0f62c:
    c->f[13] = mem_rf32(ram, c->r[29] + 0x00000004u);
    { c->r[31] = 0x08a0f638u; c->r[4] = 0u + 0x00000001u; func_08a127fc(c, ram); }
    { c->r[31] = mem_r32(ram, c->r[29] + 0x00000010u); goto L_08a0f5fc; }
L_08a0f640:
    { c->r[31] = 0x08a0f648u; c->f[13] = mem_rf32(ram, c->r[29] + 0x00000004u); func_08a11f1c(c, ram); }
    { c->f[0] = -c->f[0]; goto L_08a0f5f8; }
L_08a0f650:
    { int _c = (c->r[3] != 0u); c->f[12] = mem_rf32(ram, c->r[29] + 0x00000000u); if (_c) goto L_08a0f62c; }
    c->f[13] = mem_rf32(ram, c->r[29] + 0x00000004u);
L_08a0f65c:
    { c->r[31] = 0x08a0f664u; func_08a11f1c(c, ram); }
    { c->r[31] = mem_r32(ram, c->r[29] + 0x00000010u); goto L_08a0f5fc; }
L_08a0f66c:
    c->f[12] = mem_rf32(ram, c->r[29] + 0x00000000u);
    c->f[13] = mem_rf32(ram, c->r[29] + 0x00000004u);
    { c->r[31] = 0x08a0f67cu; c->r[4] = 0u + 0x00000001u; func_08a127fc(c, ram); }
    { c->f[0] = -c->f[0]; goto L_08a0f5f8; }
    return; /* fell out of func_08a0f5bc */
}

/* func_08a13184  0x08a13184..0x08a136f8  1396 bytes, source=fde */
void func_08a13184(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08a13184u);
    c->r[29] = c->r[29] + 0xfffffff0u;
    mem_w32(ram, c->r[29] + 0x00000004u, c->r[17]);
    c->r[8] = c->r[7] + 0u;
    c->r[10] = c->r[5] + 0u;
    mem_w32(ram, c->r[29] + 0x00000000u, c->r[16]);
    c->r[9] = c->r[6] + 0u;
    { int _c = (c->r[7] != 0u); c->r[14] = c->r[4] + 0u; if (_c) goto L_08a13544; }
    c->r[2] = (c->r[5] < c->r[6]) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); c->r[2] = 0u | 0xffffu; if (_c) goto L_08a13304; }
    c->r[3] = 0u + 0x00000008u;
    c->r[4] = (c->r[6] < 0x00000100u) ? 1u : 0u;
    c->r[5] = c->r[3] + 0u;
    c->r[2] = (c->r[2] < c->r[6]) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (c->r[4] != 0u) c->r[5] = 0u; if (_c) goto L_08a131e4; }
    c->r[2] = 0x00ff0000u;
    c->r[2] = c->r[2] | 0xffffu;
    c->r[3] = 0u + 0x00000010u;
    c->r[2] = (c->r[2] < c->r[6]) ? 1u : 0u;
    c->r[4] = 0u + 0x00000018u;
    c->r[5] = c->r[3] + 0u;
    if (c->r[2] != 0u) c->r[5] = c->r[4];
L_08a131e4:
    c->r[3] = 0x08a50000u;
    c->r[2] = c->r[6] >> (c->r[5] & 31u);
    c->r[3] = c->r[3] + 0x0000146cu;
    c->r[2] = c->r[2] + c->r[3];
    c->r[4] = mem_r8(ram, c->r[2] + 0x00000000u);
    c->r[2] = 0u + 0x00000020u;
    c->r[4] = c->r[4] + c->r[5];
    c->r[7] = c->r[2] - c->r[4];
    if (c->r[7] == 0u) { c->r[7] = c->r[9] >> 16; goto L_08a13228; }
    c->r[2] = c->r[2] - c->r[7];
    c->r[2] = c->r[14] >> (c->r[2] & 31u);
    c->r[3] = c->r[10] << (c->r[7] & 31u);
    c->r[10] = c->r[3] | c->r[2];
    c->r[14] = c->r[14] << (c->r[7] & 31u);
    c->r[9] = c->r[9] << (c->r[7] & 31u);
    c->r[7] = c->r[9] >> 16;
L_08a13228:
    alx_divu(c, c->r[10], c->r[7]);
    c->r[12] = c->r[9] & 0xffffu;
    c->r[4] = c->r[14] >> 16;
    if (c->r[7] == 0u) { recomp_break(c, ram, 0x08a13238u, 0x7u); goto L_08a1323c; }
L_08a1323c:
    c->r[3] = c->lo;
    c->r[2] = c->hi;
    c->r[11] = c->lo;
    alx_mult(c, c->r[3], c->r[12]);
    c->r[2] = c->r[2] << 16;
    c->r[6] = c->r[2] | c->r[4];
    c->r[5] = c->lo;
    c->r[3] = (c->r[6] < c->r[5]) ? 1u : 0u;
    { int _c = (c->r[3] == 0u); alx_divu(c, c->r[10], c->r[7]); if (_c) goto L_08a13288; }
    c->r[6] = c->r[6] + c->r[9];
    c->r[2] = (c->r[6] < c->r[9]) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); c->r[11] = c->r[11] + 0xffffffffu; if (_c) goto L_08a13288; }
    c->r[2] = (c->r[6] < c->r[5]) ? 1u : 0u;
    if (c->r[2] == 0u) { c->r[6] = c->r[6] - c->r[5]; goto L_08a1328c; }
    c->r[11] = c->r[11] + 0xffffffffu;
    c->r[6] = c->r[6] + c->r[9];
L_08a13288:
    c->r[6] = c->r[6] - c->r[5];
L_08a1328c:
    alx_divu(c, c->r[6], c->r[7]);
    c->r[4] = c->r[14] & 0xffffu;
    if (c->r[7] == 0u) { recomp_break(c, ram, 0x08a13298u, 0x7u); goto L_08a1329c; }
L_08a1329c:
    c->r[3] = c->lo;
    c->r[2] = c->hi;
    c->r[8] = c->lo;
    alx_mult(c, c->r[3], c->r[12]);
    c->r[2] = c->r[2] << 16;
    c->r[4] = c->r[2] | c->r[4];
    c->r[5] = c->lo;
    c->r[3] = (c->r[4] < c->r[5]) ? 1u : 0u;
    { int _c = (c->r[3] == 0u); alx_divu(c, c->r[6], c->r[7]); if (_c) goto L_08a132e0; }
    c->r[4] = c->r[4] + c->r[9];
    c->r[2] = (c->r[4] < c->r[9]) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); c->r[8] = c->r[8] + 0xffffffffu; if (_c) goto L_08a132e0; }
    c->r[2] = (c->r[4] < c->r[5]) ? 1u : 0u;
    c->r[2] = (0u < c->r[2]) ? 1u : 0u;
    c->r[8] = c->r[8] - c->r[2];
L_08a132e0:
    c->r[2] = c->r[11] << 16;
    c->r[4] = c->r[2] | c->r[8];
L_08a132e8:
    c->r[6] = 0u + 0u;
L_08a132ec:
    c->r[17] = mem_r32(ram, c->r[29] + 0x00000004u);
    c->r[16] = mem_r32(ram, c->r[29] + 0x00000000u);
    c->r[2] = c->r[4] + 0u;
    c->r[3] = c->r[6] + 0u;
    { c->r[29] = c->r[29] + 0x00000010u; return; }
L_08a13304:
    { int _c = (c->r[6] != 0u); c->r[3] = 0u + 0x00000008u; if (_c) goto L_08a13328; }
    c->r[2] = 0u + 0x00000001u;
    alx_divu(c, c->r[2], c->r[7]);
    if (c->r[6] == 0u) { recomp_break(c, ram, 0x08a13318u, 0x7u); goto L_08a1331c; }
L_08a1331c:
    c->r[9] = c->lo;
    c->r[2] = 0u | 0xffffu;
    c->r[3] = 0u + 0x00000008u;
L_08a13328:
    c->r[4] = (c->r[9] < 0x00000100u) ? 1u : 0u;
    c->r[5] = c->r[3] + 0u;
    c->r[2] = (c->r[2] < c->r[9]) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (c->r[4] != 0u) c->r[5] = 0u; if (_c) goto L_08a13358; }
    c->r[2] = 0x00ff0000u;
    c->r[2] = c->r[2] | 0xffffu;
    c->r[3] = 0u + 0x00000010u;
    c->r[2] = (c->r[2] < c->r[9]) ? 1u : 0u;
    c->r[4] = 0u + 0x00000018u;
    c->r[5] = c->r[3] + 0u;
    if (c->r[2] != 0u) c->r[5] = c->r[4];
L_08a13358:
    c->r[3] = 0x08a50000u;
    c->r[2] = c->r[9] >> (c->r[5] & 31u);
    c->r[3] = c->r[3] + 0x0000146cu;
    c->r[2] = c->r[2] + c->r[3];
    c->r[4] = mem_r8(ram, c->r[2] + 0x00000000u);
    c->r[2] = 0u + 0x00000020u;
    c->r[4] = c->r[4] + c->r[5];
    c->r[7] = c->r[2] - c->r[4];
    { int _c = (c->r[7] != 0u); c->r[5] = c->r[2] - c->r[7]; if (_c) goto L_08a13450; }
    c->r[10] = c->r[10] - c->r[9];
    c->r[6] = 0u + 0x00000001u;
    c->r[8] = c->r[9] >> 16;
    c->r[16] = c->r[9] & 0xffffu;
L_08a13390:
    alx_divu(c, c->r[10], c->r[8]);
    c->r[4] = c->r[14] >> 16;
    if (c->r[8] == 0u) { recomp_break(c, ram, 0x08a1339cu, 0x7u); goto L_08a133a0; }
L_08a133a0:
    c->r[3] = c->lo;
    c->r[2] = c->hi;
    c->r[11] = c->lo;
    alx_mult(c, c->r[3], c->r[16]);
    c->r[2] = c->r[2] << 16;
    c->r[7] = c->r[2] | c->r[4];
    c->r[5] = c->lo;
    c->r[3] = (c->r[7] < c->r[5]) ? 1u : 0u;
    { int _c = (c->r[3] == 0u); alx_divu(c, c->r[10], c->r[8]); if (_c) goto L_08a133ec; }
    c->r[7] = c->r[7] + c->r[9];
    c->r[2] = (c->r[7] < c->r[9]) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); c->r[11] = c->r[11] + 0xffffffffu; if (_c) goto L_08a133ec; }
    c->r[2] = (c->r[7] < c->r[5]) ? 1u : 0u;
    if (c->r[2] == 0u) { c->r[7] = c->r[7] - c->r[5]; goto L_08a133f0; }
    c->r[11] = c->r[11] + 0xffffffffu;
    c->r[7] = c->r[7] + c->r[9];
L_08a133ec:
    c->r[7] = c->r[7] - c->r[5];
L_08a133f0:
    alx_divu(c, c->r[7], c->r[8]);
    c->r[4] = c->r[14] & 0xffffu;
    if (c->r[8] == 0u) { recomp_break(c, ram, 0x08a133fcu, 0x7u); goto L_08a13400; }
L_08a13400:
    c->r[3] = c->lo;
    c->r[2] = c->hi;
    c->r[10] = c->lo;
    alx_mult(c, c->r[3], c->r[16]);
    c->r[2] = c->r[2] << 16;
    c->r[4] = c->r[2] | c->r[4];
    c->r[5] = c->lo;
    c->r[3] = (c->r[4] < c->r[5]) ? 1u : 0u;
    { int _c = (c->r[3] == 0u); alx_divu(c, c->r[7], c->r[8]); if (_c) goto L_08a13444; }
    c->r[4] = c->r[4] + c->r[9];
    c->r[2] = (c->r[4] < c->r[9]) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); c->r[10] = c->r[10] + 0xffffffffu; if (_c) goto L_08a13444; }
    c->r[2] = (c->r[4] < c->r[5]) ? 1u : 0u;
    c->r[2] = (0u < c->r[2]) ? 1u : 0u;
    c->r[10] = c->r[10] - c->r[2];
L_08a13444:
    c->r[2] = c->r[11] << 16;
    { c->r[4] = c->r[2] | c->r[10]; goto L_08a132ec; }
L_08a13450:
    c->r[9] = c->r[9] << (c->r[7] & 31u);
    c->r[8] = c->r[9] >> 16;
    c->r[12] = c->r[10] >> (c->r[5] & 31u);
    alx_divu(c, c->r[12], c->r[8]);
    c->r[16] = c->r[9] & 0xffffu;
    c->r[3] = c->r[14] >> (c->r[5] & 31u);
    c->r[2] = c->r[10] << (c->r[7] & 31u);
    c->r[10] = c->r[2] | c->r[3];
    c->r[5] = c->r[10] >> 16;
    c->r[14] = c->r[14] << (c->r[7] & 31u);
    if (c->r[8] == 0u) { recomp_break(c, ram, 0x08a1347cu, 0x7u); goto L_08a13480; }
L_08a13480:
    c->r[11] = c->r[8] + 0u;
    c->r[17] = c->r[16] + 0u;
    c->r[6] = c->lo;
    c->r[4] = c->hi;
    c->r[15] = c->lo;
    alx_mult(c, c->r[6], c->r[16]);
    c->r[4] = c->r[4] << 16;
    c->r[7] = c->r[4] | c->r[5];
    c->r[13] = c->lo;
    c->r[2] = (c->r[7] < c->r[13]) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); alx_divu(c, c->r[12], c->r[8]); if (_c) goto L_08a134d4; }
    c->r[7] = c->r[7] + c->r[9];
    c->r[2] = (c->r[7] < c->r[9]) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); c->r[15] = c->r[6] + 0xffffffffu; if (_c) goto L_08a134d4; }
    c->r[2] = (c->r[7] < c->r[13]) ? 1u : 0u;
    if (c->r[2] == 0u) { c->r[7] = c->r[7] - c->r[13]; goto L_08a134d8; }
    c->r[15] = c->r[15] + 0xffffffffu;
    c->r[7] = c->r[7] + c->r[9];
L_08a134d4:
    c->r[7] = c->r[7] - c->r[13];
L_08a134d8:
    alx_divu(c, c->r[7], c->r[11]);
    c->r[4] = c->r[10] & 0xffffu;
    if (c->r[11] == 0u) { recomp_break(c, ram, 0x08a134e4u, 0x7u); goto L_08a134e8; }
L_08a134e8:
    c->r[3] = c->lo;
    c->r[2] = c->hi;
    c->r[6] = c->lo;
    alx_mult(c, c->r[3], c->r[17]);
    c->r[2] = c->r[2] << 16;
    c->r[4] = c->r[2] | c->r[4];
    c->r[13] = c->lo;
    c->r[3] = (c->r[4] < c->r[13]) ? 1u : 0u;
    { int _c = (c->r[3] == 0u); alx_divu(c, c->r[7], c->r[11]); if (_c) goto L_08a13534; }
    c->r[4] = c->r[4] + c->r[9];
    c->r[2] = (c->r[4] < c->r[9]) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); c->r[6] = c->r[6] + 0xffffffffu; if (_c) goto L_08a13534; }
    c->r[2] = (c->r[4] < c->r[13]) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); c->r[2] = c->r[15] << 16; if (_c) goto L_08a13538; }
    c->r[6] = c->r[6] + 0xffffffffu;
    c->r[4] = c->r[4] + c->r[9];
L_08a13534:
    c->r[2] = c->r[15] << 16;
L_08a13538:
    c->r[6] = c->r[2] | c->r[6];
    { c->r[10] = c->r[4] - c->r[13]; goto L_08a13390; }
L_08a13544:
    c->r[2] = (c->r[5] < c->r[7]) ? 1u : 0u;
    c->r[4] = 0u + 0u;
    { int _c = (c->r[2] != 0u); c->r[6] = 0u + 0u; if (_c) goto L_08a132ec; }
    c->r[2] = 0u | 0xffffu;
    c->r[3] = 0u + 0x00000008u;
    c->r[4] = (c->r[7] < 0x00000100u) ? 1u : 0u;
    c->r[5] = c->r[3] + 0u;
    c->r[2] = (c->r[2] < c->r[7]) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); if (c->r[4] != 0u) c->r[5] = 0u; if (_c) goto L_08a1358c; }
    c->r[2] = 0x00ff0000u;
    c->r[2] = c->r[2] | 0xffffu;
    c->r[3] = 0u + 0x00000010u;
    c->r[2] = (c->r[2] < c->r[7]) ? 1u : 0u;
    c->r[4] = 0u + 0x00000018u;
    c->r[5] = c->r[3] + 0u;
    if (c->r[2] != 0u) c->r[5] = c->r[4];
L_08a1358c:
    c->r[3] = 0x08a50000u;
    c->r[2] = c->r[8] >> (c->r[5] & 31u);
    c->r[3] = c->r[3] + 0x0000146cu;
    c->r[2] = c->r[2] + c->r[3];
    c->r[4] = mem_r8(ram, c->r[2] + 0x00000000u);
    c->r[2] = 0u + 0x00000020u;
    c->r[4] = c->r[4] + c->r[5];
    c->r[7] = c->r[2] - c->r[4];
    { int _c = (c->r[7] != 0u); c->r[5] = c->r[2] - c->r[7]; if (_c) goto L_08a135cc; }
    c->r[2] = (c->r[14] < c->r[9]) ? 1u : 0u;
    c->r[3] = (c->r[8] < c->r[10]) ? 1u : 0u;
    c->r[2] = c->r[2] ^ 0x0001u;
    c->r[3] = c->r[3] | c->r[2];
    { c->r[4] = (0u < c->r[3]) ? 1u : 0u; goto L_08a132e8; }
L_08a135cc:
    c->r[2] = c->r[9] >> (c->r[5] & 31u);
    c->r[3] = c->r[8] << (c->r[7] & 31u);
    c->r[8] = c->r[3] | c->r[2];
    c->r[11] = c->r[8] >> 16;
    c->r[12] = c->r[10] >> (c->r[5] & 31u);
    alx_divu(c, c->r[12], c->r[11]);
    c->r[16] = c->r[8] & 0xffffu;
    c->r[3] = c->r[14] >> (c->r[5] & 31u);
    c->r[2] = c->r[10] << (c->r[7] & 31u);
    c->r[10] = c->r[2] | c->r[3];
    c->r[5] = c->r[10] >> 16;
    c->r[14] = c->r[14] << (c->r[7] & 31u);
    c->r[9] = c->r[9] << (c->r[7] & 31u);
    if (c->r[11] == 0u) { recomp_break(c, ram, 0x08a13604u, 0x7u); goto L_08a13608; }
L_08a13608:
    c->r[6] = c->lo;
    c->r[4] = c->hi;
    c->r[15] = c->lo;
    alx_mult(c, c->r[6], c->r[16]);
    c->r[4] = c->r[4] << 16;
    c->r[7] = c->r[4] | c->r[5];
    c->r[13] = c->lo;
    c->r[2] = (c->r[7] < c->r[13]) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); alx_divu(c, c->r[12], c->r[11]); if (_c) goto L_08a13654; }
    c->r[7] = c->r[7] + c->r[8];
    c->r[2] = (c->r[7] < c->r[8]) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); c->r[15] = c->r[6] + 0xffffffffu; if (_c) goto L_08a13654; }
    c->r[2] = (c->r[7] < c->r[13]) ? 1u : 0u;
    if (c->r[2] == 0u) { c->r[7] = c->r[7] - c->r[13]; goto L_08a13658; }
    c->r[15] = c->r[15] + 0xffffffffu;
    c->r[7] = c->r[7] + c->r[8];
L_08a13654:
    c->r[7] = c->r[7] - c->r[13];
L_08a13658:
    alx_divu(c, c->r[7], c->r[11]);
    c->r[4] = c->r[10] & 0xffffu;
    if (c->r[11] == 0u) { recomp_break(c, ram, 0x08a13664u, 0x7u); goto L_08a13668; }
L_08a13668:
    c->r[3] = c->lo;
    c->r[2] = c->hi;
    c->r[6] = c->lo;
    alx_mult(c, c->r[3], c->r[16]);
    c->r[2] = c->r[2] << 16;
    c->r[5] = c->r[2] | c->r[4];
    c->r[13] = c->lo;
    c->r[3] = (c->r[5] < c->r[13]) ? 1u : 0u;
    { int _c = (c->r[3] == 0u); alx_divu(c, c->r[7], c->r[11]); if (_c) goto L_08a136b4; }
    c->r[5] = c->r[5] + c->r[8];
    c->r[2] = (c->r[5] < c->r[8]) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); c->r[6] = c->r[6] + 0xffffffffu; if (_c) goto L_08a136b4; }
    c->r[2] = (c->r[5] < c->r[13]) ? 1u : 0u;
    { int _c = (c->r[2] == 0u); c->r[2] = c->r[15] << 16; if (_c) goto L_08a136b8; }
    c->r[5] = c->r[5] + c->r[8];
    c->r[6] = c->r[6] + 0xffffffffu;
L_08a136b4:
    c->r[2] = c->r[15] << 16;
L_08a136b8:
    c->r[4] = c->r[2] | c->r[6];
    c->r[5] = c->r[5] - c->r[13];
    alx_multu(c, c->r[4], c->r[9]);
    c->r[3] = c->hi;
    c->r[2] = (c->r[5] < c->r[3]) ? 1u : 0u;
    if (c->r[2] != 0u) { c->r[4] = c->r[4] + 0xffffffffu; goto L_08a132e8; }
    c->r[2] = c->r[3] ^ c->r[5];
    c->r[5] = c->lo;
    c->r[3] = (c->r[14] < c->r[5]) ? 1u : 0u;
    c->r[2] = (c->r[2] < 0x00000001u) ? 1u : 0u;
    c->r[2] = c->r[2] & c->r[3];
    { int _c = (c->r[2] == 0u); c->r[6] = 0u + 0u; if (_c) goto L_08a132ec; }
    { c->r[4] = c->r[4] + 0xffffffffu; goto L_08a132ec; }
    return; /* fell out of func_08a13184 */
}

/* func_08a15734  0x08a15734..0x08a158f0  444 bytes, source=sweep */
void func_08a15734(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08a15734u);
    c->r[29] = c->r[29] + 0xfffffc60u;
    mem_w32(ram, c->r[29] + 0x0000039cu, c->r[31]);
    c->r[7] = c->r[29] + 0u;
    c->r[6] = c->r[4] + 0u;
    mem_w32(ram, c->r[29] + 0x00000398u, c->r[22]);
    c->r[8] = c->r[4] + 0x00000360u;
    mem_w32(ram, c->r[29] + 0x00000394u, c->r[21]);
    mem_w32(ram, c->r[29] + 0x00000390u, c->r[20]);
    mem_w32(ram, c->r[29] + 0x0000038cu, c->r[19]);
    mem_w32(ram, c->r[29] + 0x00000384u, c->r[17]);
    mem_w32(ram, c->r[29] + 0x00000388u, c->r[18]);
    c->r[18] = c->r[5] + 0u;
    mem_w32(ram, c->r[29] + 0x00000380u, c->r[16]);
    c->r[16] = c->r[4] + 0u;
L_08a1576c:
    c->r[2] = mem_r32(ram, c->r[6] + 0x00000000u);
    c->r[3] = mem_r32(ram, c->r[6] + 0x00000004u);
    c->r[4] = mem_r32(ram, c->r[6] + 0x00000008u);
    c->r[5] = mem_r32(ram, c->r[6] + 0x0000000cu);
    mem_w32(ram, c->r[7] + 0x00000000u, c->r[2]);
    c->r[6] = c->r[6] + 0x00000010u;
    c->r[7] = c->r[7] + 0x00000010u;
    mem_w32(ram, c->r[7] + 0xfffffff4u, c->r[3]);
    mem_w32(ram, c->r[7] + 0xfffffff8u, c->r[4]);
    { int _c = (c->r[6] != c->r[8]); mem_w32(ram, c->r[7] + 0xfffffffcu, c->r[5]); if (_c) goto L_08a1576c; }
    c->r[2] = mem_r32(ram, c->r[6] + 0x00000000u);
    c->r[3] = mem_r32(ram, c->r[6] + 0x00000004u);
    mem_w32(ram, c->r[7] + 0x00000000u, c->r[2]);
    mem_w32(ram, c->r[7] + 0x00000004u, c->r[3]);
    c->r[2] = mem_r32(ram, c->r[29] + 0x00000074u);
    if (c->r[2] != 0u) { c->r[3] = mem_r32(ram, c->r[18] + 0x000006a8u); goto L_08a157c8; }
    c->r[3] = mem_r32(ram, c->r[16] + 0x0000034cu);
    c->r[2] = c->r[29] + 0x00000370u;
    mem_w32(ram, c->r[29] + 0x00000074u, c->r[2]);
    mem_w32(ram, c->r[29] + 0x00000370u, c->r[3]);
    c->r[3] = mem_r32(ram, c->r[18] + 0x000006a8u);
L_08a157c8:
    c->r[2] = 0u + 0x00000001u;
    { int _c = (c->r[3] == c->r[2]); mem_w32(ram, c->r[16] + 0x00000074u, 0u); if (_c) goto L_08a158c8; }
    c->r[2] = 0u + 0x00000002u;
    { int _c = (c->r[3] != c->r[2]); c->r[5] = c->r[29] + 0x00000374u; if (_c) goto L_08a158e8; }
    c->r[2] = mem_r32(ram, c->r[18] + 0x000006a4u);
    { c->r[31] = 0x08a157ecu; c->r[4] = c->r[2] + 0u; func_08a14718(c, ram); }
    c->r[5] = mem_r32(ram, c->r[29] + 0x00000374u);
    c->r[4] = c->r[2] + 0u;
    c->r[6] = c->r[29] + 0u;
    c->r[5] = c->r[2] + c->r[5];
    { c->r[31] = 0x08a15804u; c->r[7] = 0u + 0u; func_08a14ae8(c, ram); }
    c->r[19] = c->r[2] + 0u;
L_08a15808:
    mem_w32(ram, c->r[16] + 0x0000034cu, c->r[19]);
    c->r[17] = c->r[16] + 0u;
    c->r[20] = 0u + 0x00000001u;
    c->r[16] = c->r[18] + 0u;
    c->r[21] = 0u + 0x00000002u;
    c->r[22] = 0u + 0x00000003u;
    c->r[18] = 0u + 0x000000d2u;
L_08a15824:
    c->r[2] = mem_r32(ram, c->r[16] + 0x00000004u);
    if (c->r[2] == c->r[20]) { c->r[2] = mem_r32(ram, c->r[16] + 0x00000000u); goto L_08a158c0; }
    if (c->r[2] == 0u) { c->r[18] = c->r[18] + 0xffffffffu; goto L_08a1584c; }
    if (c->r[2] == c->r[21]) { c->r[2] = mem_r32(ram, c->r[16] + 0x00000000u); goto L_08a158ac; }
    { int _c = (c->r[2] == c->r[22]); c->r[5] = c->r[29] + 0x00000378u; if (_c) goto L_08a15880; }
L_08a15848:
    c->r[18] = c->r[18] + 0xffffffffu;
L_08a1584c:
    c->r[16] = c->r[16] + 0x00000008u;
    { int _c = ((s32)c->r[18] >= 0); c->r[17] = c->r[17] + 0x00000004u; if (_c) goto L_08a15824; }
    c->r[31] = mem_r32(ram, c->r[29] + 0x0000039cu);
    c->r[22] = mem_r32(ram, c->r[29] + 0x00000398u);
    c->r[21] = mem_r32(ram, c->r[29] + 0x00000394u);
    c->r[20] = mem_r32(ram, c->r[29] + 0x00000390u);
    c->r[19] = mem_r32(ram, c->r[29] + 0x0000038cu);
    c->r[18] = mem_r32(ram, c->r[29] + 0x00000388u);
    c->r[17] = mem_r32(ram, c->r[29] + 0x00000384u);
    c->r[16] = mem_r32(ram, c->r[29] + 0x00000380u);
    { c->r[29] = c->r[29] + 0x000003a0u; return; }
L_08a15880:
    c->r[2] = mem_r32(ram, c->r[16] + 0x00000000u);
    { c->r[31] = 0x08a1588cu; c->r[4] = c->r[2] + 0u; func_08a14718(c, ram); }
    c->r[5] = mem_r32(ram, c->r[29] + 0x00000378u);
    c->r[4] = c->r[2] + 0u;
    c->r[6] = c->r[29] + 0u;
    c->r[5] = c->r[2] + c->r[5];
    { c->r[31] = 0x08a158a4u; c->r[7] = c->r[19] + 0u; func_08a14ae8(c, ram); }
L_08a158a4:
    { mem_w32(ram, c->r[17] + 0x00000000u, c->r[2]); goto L_08a15848; }
L_08a158ac:
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[29];
    c->r[3] = mem_r32(ram, c->r[2] + 0x00000000u);
    { mem_w32(ram, c->r[17] + 0x00000000u, c->r[3]); goto L_08a15848; }
L_08a158c0:
    { c->r[2] = c->r[19] + c->r[2]; goto L_08a158a4; }
L_08a158c8:
    c->r[2] = mem_r32(ram, c->r[18] + 0x000006a0u);
    c->r[4] = mem_r32(ram, c->r[18] + 0x0000069cu);
    c->r[2] = c->r[2] << 2;
    c->r[2] = c->r[2] + c->r[29];
    c->r[3] = mem_r32(ram, c->r[2] + 0x00000000u);
    c->r[19] = mem_r32(ram, c->r[3] + 0x00000000u);
    { c->r[19] = c->r[19] + c->r[4]; goto L_08a15808; }
L_08a158e8:
    { c->r[31] = 0x08a158f0u; func_08a19084(c, ram); }
    return; /* fell out of func_08a15734 */
}

/* func_08a17240  0x08a17240..0x08a17268  40 bytes, source=residue */
void func_08a17240(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08a17240u);
    c->r[4] = mem_r32(ram, c->r[5] + 0x00000008u);
    c->r[3] = mem_r32(ram, c->r[6] + 0x00000008u);
    c->r[2] = (c->r[3] < c->r[4]) ? 1u : 0u;
    { int _c = (c->r[2] != 0u); c->r[5] = 0u + 0x00000001u; if (_c) goto L_08a17260; }
    c->r[2] = (c->r[4] < c->r[3]) ? 1u : 0u;
    c->r[5] = 0u + 0xffffffffu;
    if (c->r[2] == 0u) c->r[5] = 0u;
L_08a17260:
    { c->r[2] = c->r[5] + 0u; return; }
    return; /* fell out of func_08a17240 */
}

/* func_08a18fb4  0x08a18fb4..0x08a18fbc  8 bytes, source=sweep */
void func_08a18fb4(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08a18fb4u);
    { c->r[2] = 0u + 0xffffffffu; return; }
    return; /* fell out of func_08a18fb4 */
}

/* func_08a1a000  0x08a1a000..0x08a1a110  272 bytes, source=sweep */
void func_08a1a000(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08a1a000u);
    c->r[29] = c->r[29] + 0xfffffff0u;
    mem_w32(ram, c->r[29] + 0x00000004u, c->r[31]);
    { int _c = (c->r[26] == 0u); mem_w32(ram, c->r[29] + 0x00000000u, c->r[16]); if (_c) goto L_08a1a0f4; }
    c->r[16] = mem_r32(ram, c->r[26] + 0x00000004u);
    if (c->r[16] == 0u) { c->r[2] = 0x08a20000u; goto L_08a1a0f8; }
    { c->r[31] = 0x08a1a024u; hle_dispatch_stub(c, ram, 0x08a2472cu); /* sceKernelCpuSuspendIntr */ }
    c->r[6] = mem_r32(ram, c->r[16] + 0x0000037cu);
    c->r[4] = c->r[2] + 0u;
    c->r[3] = 0x08ba0000u;
    c->r[2] = (u32)((s32)c->r[6] >> 31);
    c->r[2] = c->r[2] >> 27;
    c->r[2] = c->r[6] + c->r[2];
    c->r[2] = alx_ins(c->r[2], 0u, 0u, 4u);
    c->r[3] = c->r[3] + 0xffffff78u;
    { int _c = (c->r[3] == 0u); c->r[2] = c->r[6] - c->r[2]; if (_c) goto L_08a1a06c; }
    c->r[7] = c->r[2] << 2;
    c->r[5] = c->r[7] + c->r[3];
L_08a1a054:
    c->r[2] = mem_r32(ram, c->r[5] + 0x00000084u);
    { int _c = (c->r[2] == c->r[6]); if (_c) goto L_08a1a0e4; }
    c->r[3] = mem_r32(ram, c->r[3] + 0x00000000u);
    { int _c = (c->r[3] != 0u); c->r[5] = c->r[7] + c->r[3]; if (_c) goto L_08a1a054; }
L_08a1a06c:
    { c->r[31] = 0x08a1a074u; hle_dispatch_stub(c, ram, 0x08a24734u); /* sceKernelCpuResumeIntr */ }
    c->r[2] = 0x08a20000u;
    c->r[2] = c->r[2] + 0x0000479cu;
    { int _c = (c->r[2] == 0u); c->r[4] = 0x08a50000u; if (_c) goto L_08a1a0cc; }
    c->r[4] = c->r[4] + 0x000015e0u;
L_08a1a0c0:
    c->r[5] = 0x08a50000u;
    { c->r[31] = 0x08a1a0ccu; c->r[5] = c->r[5] + 0x00001604u; hle_dispatch_stub(c, ram, 0x08a2479cu); /* sceKernelPrintf */ }
L_08a1a0cc:
    c->r[2] = 0x08a60000u;
L_08a1a0d0:
    c->r[2] = mem_r32(ram, c->r[2] + 0x00004dd8u);
L_08a1a0d4:
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000004u);
    c->r[16] = mem_r32(ram, c->r[29] + 0x00000000u);
    { c->r[29] = c->r[29] + 0x00000010u; return; }
L_08a1a0e4:
    { c->r[31] = 0x08a1a0ecu; c->r[16] = mem_r32(ram, c->r[5] + 0x00000004u); hle_dispatch_stub(c, ram, 0x08a24734u); /* sceKernelCpuResumeIntr */ }
    { c->r[2] = c->r[16] + 0u; goto L_08a1a0d4; }
L_08a1a0f4:
    c->r[2] = 0x08a20000u;
L_08a1a0f8:
    c->r[4] = 0x08a50000u;
    c->r[2] = c->r[2] + 0x0000479cu;
    { int _c = (c->r[2] != 0u); c->r[4] = c->r[4] + 0x00001614u; if (_c) goto L_08a1a0c0; }
    { c->r[2] = 0x08a60000u; goto L_08a1a0d0; }
    return; /* fell out of func_08a1a000 */
}

/* func_08a1b1a4  0x08a1b1a4..0x08a1b200  92 bytes, source=sweep */
void func_08a1b1a4(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08a1b1a4u);
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[4] + 0x00000000u);
    { int _c = (c->r[2] != 0u); c->r[6] = 0u + 0u; if (_c) goto L_08a1b1c0; }
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[5] + 0x00000000u);
    if (c->r[2] != 0u) c->r[4] = 0u;
    { c->r[2] = c->r[4] + 0u; return; }
L_08a1b1c0:
    c->r[2] = c->r[5] + c->r[6];
L_08a1b1c4:
    c->r[3] = (u32)(s32)(s8)mem_r8(ram, c->r[2] + 0x00000000u);
    c->r[7] = c->r[4] + c->r[6];
    c->r[2] = c->r[4] + 0u;
    { int _c = (c->r[3] == 0u); c->r[6] = c->r[6] + 0x00000001u; if (_c) goto L_08a1b1f8; }
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[7] + 0x00000000u);
    { int _c = (c->r[3] == c->r[2]); c->r[2] = c->r[5] + c->r[6]; if (_c) goto L_08a1b1c4; }
    c->r[4] = c->r[4] + 0x00000001u;
    c->r[2] = (u32)(s32)(s8)mem_r8(ram, c->r[4] + 0x00000000u);
    if (c->r[2] != 0u) { c->r[6] = 0u + 0u; goto L_08a1b1c0; }
    c->r[2] = 0u + 0u;
L_08a1b1f8:
    { return; }
    return; /* fell out of func_08a1b1a4 */
}

/* func_08a215e8  0x08a215e8..0x08a2160c  36 bytes, source=residue */
void func_08a215e8(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08a215e8u);
    c->r[2] = 0x08a60000u;
    c->r[4] = mem_r32(ram, c->r[2] + 0x00004dd8u);
    c->r[29] = c->r[29] + 0xfffffff0u;
    mem_w32(ram, c->r[29] + 0x00000000u, c->r[31]);
    { c->r[31] = 0x08a21600u; func_08a215c8(c, ram); }
    c->r[31] = mem_r32(ram, c->r[29] + 0x00000000u);
    { c->r[29] = c->r[29] + 0x00000010u; return; }
    return; /* fell out of func_08a215e8 */
}

/* func_08a23a24  0x08a23a24..0x08a23a58  52 bytes, source=sweep */
void func_08a23a24(CpuCtx *restrict c, u8 *restrict ram)
{
    (void)c; (void)ram;
    RECOMP_TRACE_ENTER(0x08a23a24u);
    c->r[2] = 0u - c->r[4];
    c->r[2] = c->r[2] | c->r[4];
    c->r[2] = c->r[2] >> 31;
    c->r[3] = alx_ext(c->r[5], 0u, 30u);
    c->r[3] = c->r[3] | c->r[2];
    c->r[4] = 0x7ff00000u;
    c->r[3] = c->r[4] - c->r[3];
    c->r[2] = 0u - c->r[3];
    c->r[3] = c->r[3] | c->r[2];
    c->r[3] = c->r[3] >> 31;
    c->r[2] = 0u + 0x00000001u;
    { c->r[2] = c->r[2] - c->r[3]; return; }
    return; /* fell out of func_08a23a24 */
}
